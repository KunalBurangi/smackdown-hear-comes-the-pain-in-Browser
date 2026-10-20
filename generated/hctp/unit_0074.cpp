#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0074[4096] = {
    1, 0, 2, 0, 0, 0, 0, 3, 0, 0, 0, 0, 4, 0, 0, 0, 5, 0, 0, 0, 6, 0, 0, 0, 7, 0, 0, 0, 0, 8, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 10, 0, 11, 0, 0, 12, 0, 13, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0,
    0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0,
    20, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 23, 0, 0, 24, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 27, 0, 0, 0,
    28, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 39,
    0, 40, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 45, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 47, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 50, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0,
    0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 56, 0, 0, 57, 0, 0, 0, 0,
    58, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0,
    62, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 65, 0, 0, 0, 0,
    0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 70, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 71, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 74, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 77, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 81, 0, 0, 82, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 84, 0,
    85, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0,
    0, 0, 0, 0, 88, 0, 0, 0, 89, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 91, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 93, 0, 0, 94, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0,
    96, 0, 0, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 98, 0, 99, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    101, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 104, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 107, 0, 0, 108, 0, 109, 0, 0, 0, 0, 0, 0, 0, 0, 0, 110, 0, 0,
    0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 112, 0, 0, 113,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0,
    0, 0, 115, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 118, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0,
    123, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 125, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0, 0, 0, 127,
    0, 0, 128, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 130, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 134, 0, 0, 135, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 136, 0, 0, 137, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 139, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 145, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0,
    154, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0, 0,
    156, 0, 0, 157, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 160, 0, 0, 0,
    0, 0, 0, 0, 161, 0, 0, 162, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 163, 0, 164, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 0, 0, 166, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 168, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 172, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 177, 0, 0, 0, 178, 0, 0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 181, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    182, 0, 0, 0, 0, 0, 0, 0, 183, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 184, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 185, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 186, 0, 0, 0, 187, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0,
    0, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 199, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 202,
    0, 0, 0, 0, 0, 0, 0, 203, 0, 0, 0, 0, 0, 0, 204, 0, 0, 205, 0, 0, 206, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 207, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 0, 209, 0, 0,
    210, 0, 0, 0, 0, 0, 0, 211, 0, 0, 0, 0, 0, 0, 0, 0, 212, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 0, 0, 0, 214, 0,
    0, 0, 0, 215, 0, 0, 0, 0, 0, 0, 0, 0, 216, 0, 0, 0, 0, 0, 0, 0, 0, 217, 0, 0, 0, 0, 0, 0, 0, 0, 218, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 219, 0, 0, 0, 0, 0, 220, 0, 0, 0, 0, 0, 0,
    221, 0, 0, 0, 0, 0, 222, 0, 0, 0, 0, 0, 0, 223, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 224, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 225, 0, 0, 0, 0, 0, 0, 0, 226, 0, 0, 0, 0, 0, 0, 0, 0, 0, 227, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    228, 0, 229, 0, 0, 0, 0, 0, 0, 0, 230, 0, 0, 0, 0, 0, 0, 0, 231, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 232, 0, 233,
    0, 0, 234, 0, 0, 0, 0, 0, 235, 0, 0, 0, 236, 0, 0, 0, 0, 0, 0, 237, 0, 0, 238, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 239, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 241, 0, 0, 0, 0,
    0, 0, 242, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 243, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 244, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 245, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 246, 0, 0, 247, 0, 0, 248, 0, 0, 0, 0, 0, 249, 0, 0, 0, 0,
    0, 0, 0, 0, 250, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 251, 0, 0, 0, 0, 0, 0, 0, 0, 0, 252, 0, 0, 0, 253, 0,
    0, 0, 0, 0, 254, 0, 0, 0, 255, 0, 0, 0, 256, 0, 0, 0, 257, 0, 0, 0, 258, 0, 0, 0, 259, 0, 0, 0, 260, 0, 0, 0,
    261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 262, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    263, 0, 0, 0, 0, 264, 0, 0, 0, 0, 0, 0, 265, 0, 0, 0, 0, 0, 0, 0, 0, 0, 266, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 267, 0, 0, 0, 0, 0, 0, 0, 0, 268, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 269, 0, 0, 0, 0, 0, 0,
    0, 0, 270, 0, 0, 0, 0, 0, 271, 0, 0, 0, 0, 0, 0, 0, 272, 0, 0, 0, 0, 0, 0, 0, 273, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 274, 0, 0, 0, 0, 0, 0, 0, 0, 275, 0, 276, 0, 0, 0, 0, 277, 0, 0, 0, 278, 0, 0, 0, 0,
    0, 0, 0, 0, 279, 0, 0, 0, 280, 0, 0, 0, 0, 281, 0, 0, 0, 0, 0, 0, 0, 0, 282, 0, 0, 0, 0, 0, 0, 0, 0, 283,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 284, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 285, 0, 0, 0,
    0, 286, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 287, 0, 0, 0, 0, 288, 0, 0, 0, 0, 289, 0, 290, 0, 0, 0,
    0, 0, 0, 0, 0, 291, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 292, 0, 293, 0, 0, 0, 0, 0, 0, 0, 0, 294, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 295, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 296, 0, 297, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 298, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 299, 0, 0, 0, 300, 0, 0, 0, 0, 0, 301, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 302, 0, 0, 0, 0, 0, 0, 0, 0, 0, 303, 0, 0, 0, 0, 0, 0, 0, 304, 0, 0, 0, 0, 0, 0,
    0, 305, 0, 306, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 307, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 308, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 309, 0, 0, 0, 0, 0, 0, 310, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 311, 0, 0, 0, 0, 0, 0, 0, 0, 0, 312, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 313, 0, 0, 314,
    0, 0, 0, 0, 0, 315, 0, 0, 0, 0, 0, 0, 316, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 317, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 318, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 319, 0, 0, 0, 0, 0, 320, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 321, 0, 0, 0, 0, 322, 0, 323, 0, 0, 0, 0, 0, 0, 0, 0, 324, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 325, 0, 326, 0, 0, 0, 0, 0, 0, 0, 327, 0, 0, 0, 0, 0, 328, 0, 329, 0, 330, 0, 0, 0, 0, 0, 0,
    331, 0, 0, 0, 0, 0, 0, 0, 0, 332, 0, 0, 333, 0, 334, 0, 0, 0, 0, 0, 0, 0, 0, 0, 335, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 336, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 337, 0, 0, 0, 0, 338, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 339, 0, 0, 0, 0, 340, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 341, 0, 0, 0, 0, 0, 0, 0, 0, 0, 342, 0,
    0, 0, 0, 0, 0, 343, 0, 0, 344, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 345, 0, 0, 0, 0, 0, 0, 0,
    0, 346, 0, 0, 0, 0, 0, 0, 0, 0, 0, 347, 0, 0, 0, 0, 0, 0, 0, 0, 348, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 349, 0, 0, 0, 0, 0, 350, 0, 0, 0, 0, 0, 0, 0, 351, 0, 0, 0, 0, 0, 0, 0, 352, 0, 0, 0, 0, 0, 353, 0,
    0, 0, 0, 0, 0, 0, 0, 354, 0, 0, 0, 0, 0, 0, 0, 0, 355, 0, 0, 0, 0, 0, 0, 0, 0, 356, 0, 0, 0, 0, 0, 0,
    357, 0, 0, 0, 0, 358, 0, 359, 0, 360, 0, 361, 0, 362, 0, 363, 0, 0, 0, 0, 364, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 365,
    0, 0, 366, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 367, 0, 0, 0, 0, 368, 0, 369, 0, 0, 370, 0, 371, 0, 0,
    0, 0, 0, 372, 0, 0, 0, 0, 373, 0, 0, 0, 0, 0, 0, 0, 0, 374, 0, 0, 0, 0, 0, 0, 375, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 376, 0, 0, 0, 0, 377, 0, 378, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 379, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 380, 0, 0, 0, 0, 0, 0, 0, 0, 381, 0, 0, 0, 0, 0, 382, 0, 0,
    0, 0, 0, 0, 0, 383, 0, 0, 0, 0, 384, 0, 0, 0, 0, 0, 0, 385, 0, 0, 0, 0, 0, 0, 0, 0, 0, 386, 0, 0, 0, 0,
};

void unit_0074(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_002D0000;
    case 2u: goto L_002D0008;
    case 3u: goto L_002D001C;
    case 4u: goto L_002D0030;
    case 5u: goto L_002D0040;
    case 6u: goto L_002D0050;
    case 7u: goto L_002D0060;
    case 8u: goto L_002D0074;
    case 9u: goto L_002D00A4;
    case 10u: goto L_002D00AC;
    case 11u: goto L_002D00B4;
    case 12u: goto L_002D00C0;
    case 13u: goto L_002D00C8;
    case 14u: goto L_002D00E4;
    case 15u: goto L_002D012C;
    case 16u: goto L_002D0140;
    case 17u: goto L_002D0164;
    case 18u: goto L_002D0188;
    case 19u: goto L_002D01DC;
    case 20u: goto L_002D0200;
    case 21u: goto L_002D0214;
    case 22u: goto L_002D0238;
    case 23u: goto L_002D0298;
    case 24u: goto L_002D02A4;
    case 25u: goto L_002D02C0;
    case 26u: goto L_002D02E0;
    case 27u: goto L_002D02F0;
    case 28u: goto L_002D0300;
    case 29u: goto L_002D04E0;
    case 30u: goto L_002D052C;
    case 31u: goto L_002D053C;
    case 32u: goto L_002D0580;
    case 33u: goto L_002D05BC;
    case 34u: goto L_002D05E4;
    case 35u: goto L_002D0614;
    case 36u: goto L_002D063C;
    case 37u: goto L_002D066C;
    case 38u: goto L_002D06A0;
    case 39u: goto L_002D06FC;
    case 40u: goto L_002D0704;
    case 41u: goto L_002D071C;
    case 42u: goto L_002D0740;
    case 43u: goto L_002D07A0;
    case 44u: goto L_002D07B4;
    case 45u: goto L_002D0804;
    case 46u: goto L_002D086C;
    case 47u: goto L_002D0898;
    case 48u: goto L_002D08A4;
    case 49u: goto L_002D08C8;
    case 50u: goto L_002D08D4;
    case 51u: goto L_002D08F0;
    case 52u: goto L_002D0914;
    case 53u: goto L_002D0938;
    case 54u: goto L_002D0990;
    case 55u: goto L_002D09D0;
    case 56u: goto L_002D09E0;
    case 57u: goto L_002D09EC;
    case 58u: goto L_002D0A00;
    case 59u: goto L_002D0A30;
    case 60u: goto L_002D0A54;
    case 61u: goto L_002D0A6C;
    case 62u: goto L_002D0A80;
    case 63u: goto L_002D0B20;
    case 64u: goto L_002D0B60;
    case 65u: goto L_002D0B6C;
    case 66u: goto L_002D0B8C;
    case 67u: goto L_002D0BD0;
    case 68u: goto L_002D0BDC;
    case 69u: goto L_002D0C48;
    case 70u: goto L_002D0C50;
    case 71u: goto L_002D0C84;
    case 72u: goto L_002D0CB0;
    case 73u: goto L_002D0D50;
    case 74u: goto L_002D0D8C;
    case 75u: goto L_002D0D98;
    case 76u: goto L_002D0DC4;
    case 77u: goto L_002D0E04;
    case 78u: goto L_002D0E10;
    case 79u: goto L_002D0E30;
    case 80u: goto L_002D0ED0;
    case 81u: goto L_002D0F0C;
    case 82u: goto L_002D0F18;
    case 83u: goto L_002D0F38;
    case 84u: goto L_002D0F78;
    case 85u: goto L_002D0F80;
    case 86u: goto L_002D0FC8;
    case 87u: goto L_002D0FF0;
    case 88u: goto L_002D1010;
    case 89u: goto L_002D1020;
    case 90u: goto L_002D1030;
    case 91u: goto L_002D1078;
    case 92u: goto L_002D10A0;
    case 93u: goto L_002D10BC;
    case 94u: goto L_002D10C8;
    case 95u: goto L_002D10E4;
    case 96u: goto L_002D1100;
    case 97u: goto L_002D1124;
    case 98u: goto L_002D1138;
    case 99u: goto L_002D1140;
    case 100u: goto L_002D1158;
    case 101u: goto L_002D1180;
    case 102u: goto L_002D11A0;
    case 103u: goto L_002D11C4;
    case 104u: goto L_002D11D4;
    case 105u: goto L_002D11E0;
    case 106u: goto L_002D12A4;
    case 107u: goto L_002D12B8;
    case 108u: goto L_002D12C4;
    case 109u: goto L_002D12CC;
    case 110u: goto L_002D12F4;
    case 111u: goto L_002D130C;
    case 112u: goto L_002D1370;
    case 113u: goto L_002D137C;
    case 114u: goto L_002D13E8;
    case 115u: goto L_002D1408;
    case 116u: goto L_002D1420;
    case 117u: goto L_002D1458;
    case 118u: goto L_002D1464;
    case 119u: goto L_002D14C0;
    case 120u: goto L_002D14D4;
    case 121u: goto L_002D154C;
    case 122u: goto L_002D1570;
    case 123u: goto L_002D1580;
    case 124u: goto L_002D15B4;
    case 125u: goto L_002D15C8;
    case 126u: goto L_002D15D4;
    case 127u: goto L_002D15FC;
    case 128u: goto L_002D1608;
    case 129u: goto L_002D1640;
    case 130u: goto L_002D164C;
    case 131u: goto L_002D16A4;
    case 132u: goto L_002D16E0;
    case 133u: goto L_002D1748;
    case 134u: goto L_002D175C;
    case 135u: goto L_002D1768;
    case 136u: goto L_002D1790;
    case 137u: goto L_002D179C;
    case 138u: goto L_002D17BC;
    case 139u: goto L_002D17C8;
    case 140u: goto L_002D1824;
    case 141u: goto L_002D1838;
    case 142u: goto L_002D18B0;
    case 143u: goto L_002D18CC;
    case 144u: goto L_002D18DC;
    case 145u: goto L_002D1908;
    case 146u: goto L_002D193C;
    case 147u: goto L_002D1990;
    case 148u: goto L_002D1A1C;
    case 149u: goto L_002D1A30;
    case 150u: goto L_002D1AC4;
    case 151u: goto L_002D1B50;
    case 152u: goto L_002D1B60;
    case 153u: goto L_002D1BE0;
    case 154u: goto L_002D1C00;
    case 155u: goto L_002D1C6C;
    case 156u: goto L_002D1C80;
    case 157u: goto L_002D1C8C;
    case 158u: goto L_002D1CC4;
    case 159u: goto L_002D1CDC;
    case 160u: goto L_002D1CF0;
    case 161u: goto L_002D1D10;
    case 162u: goto L_002D1D1C;
    case 163u: goto L_002D1D58;
    case 164u: goto L_002D1D60;
    case 165u: goto L_002D1DA0;
    case 166u: goto L_002D1DC4;
    case 167u: goto L_002D1E40;
    case 168u: goto L_002D1E90;
    case 169u: goto L_002D1EA4;
    case 170u: goto L_002D1F1C;
    case 171u: goto L_002D1F30;
    case 172u: goto L_002D1F6C;
    case 173u: goto L_002D1FA0;
    case 174u: goto L_002D2070;
    case 175u: goto L_002D20E0;
    case 176u: goto L_002D2140;
    case 177u: goto L_002D21B0;
    case 178u: goto L_002D21C0;
    case 179u: goto L_002D21D8;
    case 180u: goto L_002D2260;
    case 181u: goto L_002D2278;
    case 182u: goto L_002D2300;
    case 183u: goto L_002D2320;
    case 184u: goto L_002D2374;
    case 185u: goto L_002D23A8;
    case 186u: goto L_002D23E0;
    case 187u: goto L_002D23F0;
    case 188u: goto L_002D2464;
    case 189u: goto L_002D24DC;
    case 190u: goto L_002D2514;
    case 191u: goto L_002D2550;
    case 192u: goto L_002D2570;
    case 193u: goto L_002D2590;
    case 194u: goto L_002D25E4;
    case 195u: goto L_002D2618;
    case 196u: goto L_002D2650;
    case 197u: goto L_002D2660;
    case 198u: goto L_002D26B8;
    case 199u: goto L_002D26F0;
    case 200u: goto L_002D272C;
    case 201u: goto L_002D2740;
    case 202u: goto L_002D277C;
    case 203u: goto L_002D279C;
    case 204u: goto L_002D27B8;
    case 205u: goto L_002D27C4;
    case 206u: goto L_002D27D0;
    case 207u: goto L_002D2814;
    case 208u: goto L_002D2858;
    case 209u: goto L_002D2874;
    case 210u: goto L_002D2880;
    case 211u: goto L_002D289C;
    case 212u: goto L_002D28C0;
    case 213u: goto L_002D28D4;
    case 214u: goto L_002D28F8;
    case 215u: goto L_002D290C;
    case 216u: goto L_002D2930;
    case 217u: goto L_002D2954;
    case 218u: goto L_002D2978;
    case 219u: goto L_002D29CC;
    case 220u: goto L_002D29E4;
    case 221u: goto L_002D2A00;
    case 222u: goto L_002D2A18;
    case 223u: goto L_002D2A34;
    case 224u: goto L_002D2A60;
    case 225u: goto L_002D2A90;
    case 226u: goto L_002D2AB0;
    case 227u: goto L_002D2AD8;
    case 228u: goto L_002D2B00;
    case 229u: goto L_002D2B08;
    case 230u: goto L_002D2B28;
    case 231u: goto L_002D2B48;
    case 232u: goto L_002D2B74;
    case 233u: goto L_002D2B7C;
    case 234u: goto L_002D2B88;
    case 235u: goto L_002D2BA0;
    case 236u: goto L_002D2BB0;
    case 237u: goto L_002D2BCC;
    case 238u: goto L_002D2BD8;
    case 239u: goto L_002D2C10;
    case 240u: goto L_002D2C44;
    case 241u: goto L_002D2C6C;
    case 242u: goto L_002D2C88;
    case 243u: goto L_002D2CDC;
    case 244u: goto L_002D2D3C;
    case 245u: goto L_002D2D70;
    case 246u: goto L_002D2DBC;
    case 247u: goto L_002D2DC8;
    case 248u: goto L_002D2DD4;
    case 249u: goto L_002D2DEC;
    case 250u: goto L_002D2E10;
    case 251u: goto L_002D2E40;
    case 252u: goto L_002D2E68;
    case 253u: goto L_002D2E78;
    case 254u: goto L_002D2E90;
    case 255u: goto L_002D2EA0;
    case 256u: goto L_002D2EB0;
    case 257u: goto L_002D2EC0;
    case 258u: goto L_002D2ED0;
    case 259u: goto L_002D2EE0;
    case 260u: goto L_002D2EF0;
    case 261u: goto L_002D2F00;
    case 262u: goto L_002D2F30;
    case 263u: goto L_002D2F80;
    case 264u: goto L_002D2F94;
    case 265u: goto L_002D2FB0;
    case 266u: goto L_002D2FD8;
    case 267u: goto L_002D3010;
    case 268u: goto L_002D3034;
    case 269u: goto L_002D3064;
    case 270u: goto L_002D3088;
    case 271u: goto L_002D30A0;
    case 272u: goto L_002D30C0;
    case 273u: goto L_002D30E0;
    case 274u: goto L_002D311C;
    case 275u: goto L_002D3140;
    case 276u: goto L_002D3148;
    case 277u: goto L_002D315C;
    case 278u: goto L_002D316C;
    case 279u: goto L_002D3190;
    case 280u: goto L_002D31A0;
    case 281u: goto L_002D31B4;
    case 282u: goto L_002D31D8;
    case 283u: goto L_002D31FC;
    case 284u: goto L_002D323C;
    case 285u: goto L_002D3270;
    case 286u: goto L_002D3284;
    case 287u: goto L_002D32C0;
    case 288u: goto L_002D32D4;
    case 289u: goto L_002D32E8;
    case 290u: goto L_002D32F0;
    case 291u: goto L_002D3314;
    case 292u: goto L_002D3340;
    case 293u: goto L_002D3348;
    case 294u: goto L_002D336C;
    case 295u: goto L_002D3394;
    case 296u: goto L_002D33C0;
    case 297u: goto L_002D33C8;
    case 298u: goto L_002D3420;
    case 299u: goto L_002D344C;
    case 300u: goto L_002D345C;
    case 301u: goto L_002D3474;
    case 302u: goto L_002D349C;
    case 303u: goto L_002D34C4;
    case 304u: goto L_002D34E4;
    case 305u: goto L_002D3504;
    case 306u: goto L_002D350C;
    case 307u: goto L_002D3550;
    case 308u: goto L_002D3584;
    case 309u: goto L_002D35C0;
    case 310u: goto L_002D35DC;
    case 311u: goto L_002D3608;
    case 312u: goto L_002D3630;
    case 313u: goto L_002D3670;
    case 314u: goto L_002D367C;
    case 315u: goto L_002D3694;
    case 316u: goto L_002D36B0;
    case 317u: goto L_002D36E0;
    case 318u: goto L_002D372C;
    case 319u: goto L_002D3758;
    case 320u: goto L_002D3770;
    case 321u: goto L_002D37B0;
    case 322u: goto L_002D37C4;
    case 323u: goto L_002D37CC;
    case 324u: goto L_002D37F0;
    case 325u: goto L_002D3894;
    case 326u: goto L_002D389C;
    case 327u: goto L_002D38BC;
    case 328u: goto L_002D38D4;
    case 329u: goto L_002D38DC;
    case 330u: goto L_002D38E4;
    case 331u: goto L_002D3900;
    case 332u: goto L_002D3924;
    case 333u: goto L_002D3930;
    case 334u: goto L_002D3938;
    case 335u: goto L_002D3960;
    case 336u: goto L_002D3988;
    case 337u: goto L_002D39D0;
    case 338u: goto L_002D39E4;
    case 339u: goto L_002D3A50;
    case 340u: goto L_002D3A64;
    case 341u: goto L_002D3AD0;
    case 342u: goto L_002D3AF8;
    case 343u: goto L_002D3B14;
    case 344u: goto L_002D3B20;
    case 345u: goto L_002D3B60;
    case 346u: goto L_002D3B84;
    case 347u: goto L_002D3BAC;
    case 348u: goto L_002D3BD0;
    case 349u: goto L_002D3C08;
    case 350u: goto L_002D3C20;
    case 351u: goto L_002D3C40;
    case 352u: goto L_002D3C60;
    case 353u: goto L_002D3C78;
    case 354u: goto L_002D3C9C;
    case 355u: goto L_002D3CC0;
    case 356u: goto L_002D3CE4;
    case 357u: goto L_002D3D00;
    case 358u: goto L_002D3D14;
    case 359u: goto L_002D3D1C;
    case 360u: goto L_002D3D24;
    case 361u: goto L_002D3D2C;
    case 362u: goto L_002D3D34;
    case 363u: goto L_002D3D3C;
    case 364u: goto L_002D3D50;
    case 365u: goto L_002D3D7C;
    case 366u: goto L_002D3D88;
    case 367u: goto L_002D3DC4;
    case 368u: goto L_002D3DD8;
    case 369u: goto L_002D3DE0;
    case 370u: goto L_002D3DEC;
    case 371u: goto L_002D3DF4;
    case 372u: goto L_002D3E0C;
    case 373u: goto L_002D3E20;
    case 374u: goto L_002D3E44;
    case 375u: goto L_002D3E60;
    case 376u: goto L_002D3E94;
    case 377u: goto L_002D3EA8;
    case 378u: goto L_002D3EB0;
    case 379u: goto L_002D3F0C;
    case 380u: goto L_002D3F38;
    case 381u: goto L_002D3F5C;
    case 382u: goto L_002D3F74;
    case 383u: goto L_002D3F94;
    case 384u: goto L_002D3FA8;
    case 385u: goto L_002D3FC4;
    case 386u: goto L_002D3FEC;
    default: bad_entry(c, 0x002D0000u); return;
    }
L_002D0000:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D0008u); st32((c.r[29].w[0] + 60u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_003F(c, 299u, depth + 1u); else { c.pc = 0x001FF0D0u; return; } if (c.pc != 0x002D0008u) [[unlikely]] return; }
L_002D0008:
    set32(c.r[2], ld32((c.r[17].w[0] + 1476u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], 0u + 160u);  if (t) { goto L_002D0060; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D001Cu);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x002D001Cu) [[unlikely]] return; }
L_002D001C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002D0030; } }
    set32(c.r[5], 0u + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D0030u); set32(c.r[6], 0u + 6u);  if (depth < kMaxDepth) unit_002A(c, 322u, depth + 1u); else { c.pc = 0x001AB770u; return; } if (c.pc != 0x002D0030u) [[unlikely]] return; }
L_002D0030:
    st32((c.r[17].w[0] + 1476u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D0040u); set32(c.r[5], 0u + 10000u);  if (depth < kMaxDepth) unit_002A(c, 5u, depth + 1u); else { c.pc = 0x001A80A0u; return; } if (c.pc != 0x002D0040u) [[unlikely]] return; }
L_002D0040:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D0050u); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_002A(c, 3u, depth + 1u); else { c.pc = 0x001A8060u; return; } if (c.pc != 0x002D0050u) [[unlikely]] return; }
L_002D0050:
    set32(c.r[4], ld32((c.r[17].w[0] + 1476u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D0060u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 322u, depth + 1u); else { c.pc = 0x00196E30u; return; } if (c.pc != 0x002D0060u) [[unlikely]] return; }
L_002D0060:
    set32(c.r[4], ld32((c.r[17].w[0] + 1476u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002D0074u); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002D0074u) [[unlikely]] return; }
L_002D0074:
    set32(c.r[5], ld32((c.r[17].w[0] + 1476u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[2], 0u + 3u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[5].w[0] + 96u), 0u);
    st32((c.r[5].w[0] + 100u), 0u);
    c.f[0] = ld32((c.r[1].w[0] - 24864u));
    st32((c.r[5].w[0] + 104u), c.f[0]);
    st32((c.r[5].w[0] + 108u), c.r[3].w[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D00A4u); st32((c.r[17].w[0] + 1484u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0074(c, 25u, depth + 1u); else { c.pc = 0x002D02C0u; return; } if (c.pc != 0x002D00A4u) [[unlikely]] return; }
L_002D00A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D00ACu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0074(c, 58u, depth + 1u); else { c.pc = 0x002D0A00u; return; } if (c.pc != 0x002D00ACu) [[unlikely]] return; }
L_002D00AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D00B4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0074(c, 101u, depth + 1u); else { c.pc = 0x002D1180u; return; } if (c.pc != 0x002D00B4u) [[unlikely]] return; }
L_002D00B4:
    st32((c.r[17].w[0] + 1488u), 0u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D00C0u); set32(c.r[4], ld32((c.r[29].w[0] + 60u)));  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x002D00C0u) [[unlikely]] return; }
L_002D00C0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_002D02A8; } }
L_002D00C8:
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_002D02A4; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 1488u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D00E4u); st32((c.r[17].w[0] + 1488u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0074(c, 87u, depth + 1u); else { c.pc = 0x002D0FF0u; return; } if (c.pc != 0x002D00E4u) [[unlikely]] return; }
L_002D00E4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[5], 0u + 212u);
    set32(c.r[6], ld32((c.r[1].w[0] - 24400u)));
    set32(c.r[3], 0u + 25500u);
    set32(c.r[6], ld32((c.r[6].w[0] + 120u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], ld32((c.r[1].w[0] - 24392u)));
    mmi::mult(c, 0, c.r[6].w[0], c.r[5].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[16], c.r[4].w[0] + 136u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 146u)));
    c.budget -= 13;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002D0140; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 1492u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[17].w[0] + 924u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D012Cu); set32(c.r[6], c.r[2].w[0] + 736u);  if (depth < kMaxDepth) unit_0074(c, 178u, depth + 1u); else { c.pc = 0x002D21C0u; return; } if (c.pc != 0x002D012Cu) [[unlikely]] return; }
L_002D012C:
    set32(c.r[2], ld32((c.r[17].w[0] + 1492u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[17].w[0] + 928u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D0140u); set32(c.r[6], c.r[2].w[0] + 824u);  if (depth < kMaxDepth) unit_0074(c, 178u, depth + 1u); else { c.pc = 0x002D21C0u; return; } if (c.pc != 0x002D0140u) [[unlikely]] return; }
L_002D0140:
    set32(c.r[4], ld32((c.r[16].w[0] + 52u)));
    set32(c.r[3], 0u + 14u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002D01DC; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 1492u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[17].w[0] + 932u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D0164u); set32(c.r[6], c.r[2].w[0] + 120u);  if (depth < kMaxDepth) unit_0074(c, 178u, depth + 1u); else { c.pc = 0x002D21C0u; return; } if (c.pc != 0x002D0164u) [[unlikely]] return; }
L_002D0164:
    set32(c.r[4], ld32((c.r[17].w[0] + 1496u)));
    set32(c.r[3], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002D0188; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 1492u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[17].w[0] + 936u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D0188u); set32(c.r[6], c.r[2].w[0] + 384u);  if (depth < kMaxDepth) unit_0074(c, 178u, depth + 1u); else { c.pc = 0x002D21C0u; return; } if (c.pc != 0x002D0188u) [[unlikely]] return; }
L_002D0188:
    set32(c.r[4], ld32((c.r[16].w[0] + 52u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[3], 0u + 2u);  if (t) { goto L_002D01C8; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002D01C8; } }
    set32(c.r[3], c.r[4].w[0] - 4u);
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(5ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[3], 0u + 12u);  if (t) { goto L_002D01C8; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002D01C8; } }
    set32(c.r[3], 0u + 10u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 11u);  if (t) { goto L_002D01C8; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002D01DC; } }
L_002D01C8:
    set32(c.r[2], ld32((c.r[17].w[0] + 1492u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[17].w[0] + 1200u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D01DCu); set32(c.r[6], c.r[2].w[0] + 32u);  if (depth < kMaxDepth) unit_0074(c, 180u, depth + 1u); else { c.pc = 0x002D2260u; return; } if (c.pc != 0x002D01DCu) [[unlikely]] return; }
L_002D01DC:
    set32(c.r[4], ld32((c.r[17].w[0] + 1496u)));
    set32(c.r[3], 0u + 12u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002D0238; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 1492u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[17].w[0] + 1204u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D0200u); set32(c.r[6], c.r[2].w[0] + 384u);  if (depth < kMaxDepth) unit_0074(c, 180u, depth + 1u); else { c.pc = 0x002D2260u; return; } if (c.pc != 0x002D0200u) [[unlikely]] return; }
L_002D0200:
    set32(c.r[2], ld32((c.r[17].w[0] + 1492u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[17].w[0] + 1208u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D0214u); set32(c.r[6], c.r[2].w[0] + 384u);  if (depth < kMaxDepth) unit_0074(c, 180u, depth + 1u); else { c.pc = 0x002D2260u; return; } if (c.pc != 0x002D0214u) [[unlikely]] return; }
L_002D0214:
    set32(c.r[4], ld32((c.r[16].w[0] + 52u)));
    set32(c.r[3], 0u + 14u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002D0238; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 1492u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[17].w[0] + 1212u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D0238u); set32(c.r[6], c.r[2].w[0] + 472u);  if (depth < kMaxDepth) unit_0074(c, 180u, depth + 1u); else { c.pc = 0x002D2260u; return; } if (c.pc != 0x002D0238u) [[unlikely]] return; }
L_002D0238:
    set32(c.r[4], ld32((c.r[17].w[0] + 1476u)));
    set32(c.r[5], 0u + 1u);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 137u));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[5].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);  if (t) { goto L_002D02A4; } }
    set32(c.r[7], 0u + 212u);
    set32(c.r[8], ld32((c.r[1].w[0] - 24400u)));
    set32(c.r[3], 0u + 7u);
    set32(c.r[8], ld32((c.r[8].w[0] + 120u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[6], ld32((c.r[1].w[0] - 24392u)));
    mmi::mult(c, 0, c.r[8].w[0], c.r[7].w[0]);
    c.r[7].d[0] = c.lo.d[0];
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[6], ld32((c.r[6].w[0] + 344u)));
    c.budget -= 11;
    { const bool t = c.r[6].d[0] == c.r[3].d[0];  if (t) { goto L_002D02A4; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002D0298; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002D0298; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002D0298u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002D0298u) [[unlikely]] return; }
L_002D0298:
    st32((c.r[17].w[0] + 1476u), 0u);
    set32(c.r[3], 0u + 4u);
    st32((c.r[17].w[0] + 1484u), c.r[3].w[0]);
    c.budget -= 3;
L_002D02A4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_002D02A8:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002D02C0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[2], 0u + 7u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 1496u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002D02E8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D02E0u);  if (depth < kMaxDepth) unit_0074(c, 38u, depth + 1u); else { c.pc = 0x002D06A0u; return; } if (c.pc != 0x002D02E0u) [[unlikely]] return; }
L_002D02E0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_002D02F4; } }
L_002D02E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D02F0u);  if (depth < kMaxDepth) unit_0074(c, 28u, depth + 1u); else { c.pc = 0x002D0300u; return; } if (c.pc != 0x002D02F0u) [[unlikely]] return; }
L_002D02F0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_002D02F4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002D0300:
    set32(c.r[29], c.r[29].w[0] - 112u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    set32(c.r[2], 0u + 14u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    set32(c.r[4], 0u + 212u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[5], ld32((c.r[1].w[0] - 24400u)));
    c.f[21] = 0u;
    set32(c.r[5], ld32((c.r[5].w[0] + 120u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[3], ld32((c.r[1].w[0] - 24392u)));
    mmi::mult(c, 0, c.r[5].w[0], c.r[4].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[19], c.r[3].w[0] + 136u);
    set32(c.r[3], ld32((c.r[3].w[0] + 188u)));
    c.budget -= 25;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.f[20] = c.f[21];  if (t) { goto L_002D038C; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 96u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 14u);  if (t) { goto L_002D0390; } }
    set32(c.r[3], ld32((c.r[20].w[0] + 1496u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[2], c.r[2].w[0] - 13724u);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; c.f[21] = ld32((c.r[2].w[0]));  if (t) { goto L_002D0480; } }
L_002D038C:
    set32(c.r[2], 0u + 14u);
    c.budget -= 1;
L_002D0390:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002D03C0; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 96u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D03C0; } }
    set32(c.r[3], ld32((c.r[20].w[0] + 1496u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[2], c.r[2].w[0] - 13716u);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; c.f[21] = ld32((c.r[2].w[0]));  if (t) { goto L_002D0480; } }
L_002D03C0:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 128u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 14u);  if (t) { goto L_002D0420; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 160u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002D041C; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 96u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[18].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_002D0400; } }
    set32(c.r[3], ld32((c.r[20].w[0] + 1496u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[2], c.r[2].w[0] - 13344u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; c.f[20] = ld32((c.r[2].w[0]));  if (t) { goto L_002D0480; } }
L_002D0400:
    set32(c.r[3], ld32((c.r[20].w[0] + 1496u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[2], c.r[2].w[0] - 13264u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; c.f[20] = ld32((c.r[2].w[0]));  if (t) { goto L_002D0480; } }
L_002D041C:
    set32(c.r[2], 0u + 14u);
    c.budget -= 1;
L_002D0420:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 14u);  if (t) { goto L_002D0454; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 96u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002D0450; } }
    set32(c.r[3], ld32((c.r[20].w[0] + 1496u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[2], c.r[2].w[0] - 13728u);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; c.f[21] = ld32((c.r[2].w[0]));  if (t) { goto L_002D0480; } }
L_002D0450:
    set32(c.r[2], 0u + 14u);
    c.budget -= 1;
L_002D0454:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002D0480; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 96u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D0480; } }
    set32(c.r[3], ld32((c.r[20].w[0] + 1496u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[2], c.r[2].w[0] - 13720u);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[21] = ld32((c.r[2].w[0]));
    c.budget -= 6;
L_002D0480:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 160u)));
    set32(c.r[16], ld32((c.r[20].w[0] + 920u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[17], ld32((c.r[20].w[0] + 916u)));  if (t) { goto L_002D04A8; } }
    set32(c.r[2], c.r[19].w[0] + 160u);
    st32((c.r[17].w[0] + 352u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 356u), 0u);
    st32((c.r[16].w[0] + 352u), 0u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 356u), 0u);  if (t) { goto L_002D0524; } }
L_002D04A8:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull; set32(c.r[2], c.r[19].w[0] + 64u);  if (t) { goto L_002D0514; } }
    set32(c.r[3], ld32((c.r[20].w[0] + 1496u)));
    set32(c.r[2], 0u + 12u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[5].sd[0] = static_cast<std::int32_t>(0x00470000u);  if (t) { goto L_002D04CC; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002D04F8; } }
L_002D04CC:
    set32(c.r[4], c.r[20].w[0] + 1568u);
    set32(c.r[5], c.r[5].w[0] - 25048u);
    set32(c.r[6], c.r[19].w[0] + 128u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D04E0u); set32(c.r[7], c.r[19].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x00127458u; return; } if (c.pc != 0x002D04E0u) [[unlikely]] return; }
L_002D04E0:
    set32(c.r[2], c.r[20].w[0] + 1568u);
    st32((c.r[17].w[0] + 352u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 356u), 0u);
    st32((c.r[16].w[0] + 352u), 0u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 356u), 0u);  if (t) { goto L_002D0524; } }
L_002D04F8:
    set32(c.r[3], c.r[19].w[0] + 128u);
    set32(c.r[2], c.r[19].w[0] + 64u);
    st32((c.r[17].w[0] + 352u), c.r[3].w[0]);
    st32((c.r[17].w[0] + 356u), 0u);
    st32((c.r[16].w[0] + 352u), c.r[2].w[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 356u), 0u);  if (t) { goto L_002D0524; } }
L_002D0514:
    st32((c.r[17].w[0] + 352u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 356u), 0u);
    st32((c.r[16].w[0] + 352u), 0u);
    st32((c.r[16].w[0] + 356u), 0u);
    c.budget -= 4;
L_002D0524:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D052Cu); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x002D052Cu) [[unlikely]] return; }
L_002D052C:
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D053Cu); st128((c.r[17].w[0] + 48u) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x002D053Cu) [[unlikely]] return; }
L_002D053C:
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull; st128((c.r[16].w[0] + 48u) & ~15u, c.r[2]);  if (t) { goto L_002D0644; } }
    set32(c.r[3], ld32((c.r[20].w[0] + 1496u)));
    set32(c.r[2], 0u + 12u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002D0588; } }
    set32(c.r[3], ld32((c.r[20].w[0] + 1492u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[13] = 0u;
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.f[12] = c.r[2].w[0];
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[7], 0u + 1u);
    c.f[14] = c.f[13];
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D0580u); set32(c.r[6], c.r[3].w[0] + 296u);  if (depth < kMaxDepth) unit_0074(c, 187u, depth + 1u); else { c.pc = 0x002D23F0u; return; } if (c.pc != 0x002D0580u) [[unlikely]] return; }
L_002D0580:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 60u), 0u);  if (t) { goto L_002D0670; } }
L_002D0588:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 96u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002D05EC; } }
    set32(c.r[3], ld32((c.r[20].w[0] + 1492u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[13] = 0u;
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.f[12] = c.r[2].w[0];
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[7], 0u + 1u);
    c.f[14] = c.f[13];
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D05BCu); set32(c.r[6], c.r[3].w[0] + 296u);  if (depth < kMaxDepth) unit_0074(c, 187u, depth + 1u); else { c.pc = 0x002D23F0u; return; } if (c.pc != 0x002D05BCu) [[unlikely]] return; }
L_002D05BC:
    set32(c.r[3], ld32((c.r[20].w[0] + 1492u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[2].w[0];
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.f[13] = 0u;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.f[14] = c.f[20];
    set32(c.r[7], 0u + 1u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D05E4u); set32(c.r[6], c.r[3].w[0] + 296u);  if (depth < kMaxDepth) unit_0074(c, 187u, depth + 1u); else { c.pc = 0x002D23F0u; return; } if (c.pc != 0x002D05E4u) [[unlikely]] return; }
L_002D05E4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D066C; } }
L_002D05EC:
    set32(c.r[3], ld32((c.r[20].w[0] + 1492u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[13] = 0u;
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.f[12] = c.r[2].w[0];
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[7], 0u + 1u);
    c.f[14] = c.f[13];
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D0614u); set32(c.r[6], c.r[3].w[0] + 384u);  if (depth < kMaxDepth) unit_0074(c, 187u, depth + 1u); else { c.pc = 0x002D23F0u; return; } if (c.pc != 0x002D0614u) [[unlikely]] return; }
L_002D0614:
    set32(c.r[3], ld32((c.r[20].w[0] + 1492u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[2].w[0];
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.f[13] = 0u;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.f[14] = c.f[20];
    set32(c.r[7], 0u + 1u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D063Cu); set32(c.r[6], c.r[3].w[0] + 384u);  if (depth < kMaxDepth) unit_0074(c, 187u, depth + 1u); else { c.pc = 0x002D23F0u; return; } if (c.pc != 0x002D063Cu) [[unlikely]] return; }
L_002D063C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D066C; } }
L_002D0644:
    set32(c.r[3], ld32((c.r[20].w[0] + 1492u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[2].w[0];
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.f[13] = 0u;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.f[14] = c.f[21] ^ fp::kSign;
    set32(c.r[7], 0u + 1u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D066Cu); set32(c.r[6], c.r[3].w[0] + 208u);  if (depth < kMaxDepth) unit_0074(c, 187u, depth + 1u); else { c.pc = 0x002D23F0u; return; } if (c.pc != 0x002D066Cu) [[unlikely]] return; }
L_002D066C:
    st32((c.r[17].w[0] + 60u), 0u);
    c.budget -= 1;
L_002D0670:
    st32((c.r[16].w[0] + 60u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_002D06A0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    set32(c.r[3], 0u + 212u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[5], ld32((c.r[1].w[0] - 24400u)));
    set32(c.r[18], ld32((c.r[4].w[0] + 916u)));
    set32(c.r[5], ld32((c.r[5].w[0] + 120u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], ld32((c.r[1].w[0] - 24392u)));
    set32(c.r[4], c.r[16].w[0] + 1697u);
    mmi::mult(c, 0, c.r[5].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[20], c.r[2].w[0] + 136u);
    c.budget -= 23;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D06FCu); set32(c.r[5], c.r[20].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 233u, depth + 1u); else { c.pc = 0x00127BE8u; return; } if (c.pc != 0x002D06FCu) [[unlikely]] return; }
L_002D06FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D0704u); set32(c.r[4], c.r[16].w[0] + 1697u);  if (depth < kMaxDepth) unit_0009(c, 237u, depth + 1u); else { c.pc = 0x00127D00u; return; } if (c.pc != 0x002D0704u) [[unlikely]] return; }
L_002D0704:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    st8((c.r[16].w[0] + 1729u), static_cast<std::uint8_t>(0u));
    c.r[17].d[0] = 0ull + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 32u);  if (t) { goto L_002D075C; } }
L_002D071C:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1697u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; c.r[2].d[0] = c.r[5].sd[0] < 12ll ? 1ull : 0ull;  if (t) { goto L_002D0748; } }
    set32(c.r[2], c.r[5].w[0] + 1u);
    st8((c.r[4].w[0] + 1697u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], c.r[20].w[0] + c.r[2].w[0]);
    set32(c.r[4], c.r[16].w[0] + 1729u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D0740u); set32(c.r[5], c.r[2].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 233u, depth + 1u); else { c.pc = 0x00127BE8u; return; } if (c.pc != 0x002D0740u) [[unlikely]] return; }
L_002D0740:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[17].d[0] & 255ull;  if (t) { goto L_002D076C; } }
L_002D0748:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002D0758; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_002D0768; } }
L_002D0758:
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 1;
L_002D075C:
    c.r[2].d[0] = c.r[5].sd[0] < c.r[19].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[16].w[0] + c.r[5].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002D071Cu | kUnwind; return; } goto L_002D071C; } }
L_002D0768:
    c.r[3].d[0] = c.r[17].d[0] & 255ull;
    c.budget -= 1;
L_002D076C:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], c.r[16].w[0] + 1697u);  if (t) { goto L_002D07A4; } }
    c.budget -= 2;
    { const bool t = c.r[19].sd[0] >= 0; set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[19].w[0]) >> 1));  if (t) { goto L_002D0788; } }
    set32(c.r[2], c.r[19].w[0] + 1u);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    c.budget -= 2;
L_002D0788:
    set32(c.r[2], c.r[20].w[0] + c.r[3].w[0]);
    set32(c.r[4], c.r[16].w[0] + 1729u);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[5], c.r[2].w[0] + 64u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D07A0u); st8((c.r[3].w[0] + 1697u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0009(c, 233u, depth + 1u); else { c.pc = 0x00127BE8u; return; } if (c.pc != 0x002D07A0u) [[unlikely]] return; }
L_002D07A0:
    set32(c.r[2], c.r[16].w[0] + 1697u);
    c.budget -= 1;
L_002D07A4:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    st32((c.r[18].w[0] + 352u), c.r[2].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D07B4u); st32((c.r[18].w[0] + 356u), 0u);  if (depth < kMaxDepth) unit_0018(c, 67u, depth + 1u); else { c.pc = 0x00162250u; return; } if (c.pc != 0x002D07B4u) [[unlikely]] return; }
L_002D07B4:
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[21] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42B40000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 11;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002D07EC; } }
    fpu_div(c, 21u, c.f[0], c.f[1]);
    c.budget -= 3;
L_002D07EC:
    set32(c.r[17], ld32((c.r[16].w[0] + 920u)));
    set32(c.r[2], c.r[16].w[0] + 1729u);
    st32((c.r[17].w[0] + 352u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D0804u); st32((c.r[17].w[0] + 356u), 0u);  if (depth < kMaxDepth) unit_0018(c, 67u, depth + 1u); else { c.pc = 0x00162250u; return; } if (c.pc != 0x002D0804u) [[unlikely]] return; }
L_002D0804:
    c.f[1] = c.r[2].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42B40000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002D084C; } }
    fpu_div(c, 0u, c.f[0], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[21]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002D084C; } }
    c.f[21] = c.f[0];
    c.budget -= 1;
L_002D084C:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1729u)));
    c.f[20] = 0u;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_002D0864; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41800000u);
    c.f[20] = c.r[2].w[0];
    c.budget -= 2;
L_002D0864:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D086Cu);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x002D086Cu) [[unlikely]] return; }
L_002D086C:
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    c.f[13] = 0u;
    c.f[14] = c.f[20];
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.f[12] = c.f[21];
    st128((c.r[18].w[0] + 48u) & ~15u, c.r[2]);
    set32(c.r[2], ld32((c.r[16].w[0] + 1492u)));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D0898u); set32(c.r[6], c.r[2].w[0] + 208u);  if (depth < kMaxDepth) unit_0074(c, 187u, depth + 1u); else { c.pc = 0x002D23F0u; return; } if (c.pc != 0x002D0898u) [[unlikely]] return; }
L_002D0898:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D08A4u); st32((c.r[18].w[0] + 60u), 0u);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x002D08A4u) [[unlikely]] return; }
L_002D08A4:
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    c.f[13] = 0u;
    c.f[12] = c.f[21];
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    st128((c.r[17].w[0] + 48u) & ~15u, c.r[2]);
    set32(c.r[2], ld32((c.r[16].w[0] + 1492u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D08C8u); set32(c.r[6], c.r[2].w[0] + 296u);  if (depth < kMaxDepth) unit_0074(c, 183u, depth + 1u); else { c.pc = 0x002D2320u; return; } if (c.pc != 0x002D08C8u) [[unlikely]] return; }
L_002D08C8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D08D4u); st32((c.r[17].w[0] + 60u), 0u);  if (depth < kMaxDepth) unit_0074(c, 55u, depth + 1u); else { c.pc = 0x002D09D0u; return; } if (c.pc != 0x002D08D4u) [[unlikely]] return; }
L_002D08D4:
    set32(c.r[3], c.r[2].w[0] << 2);
    c.r[19].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 13184u);
    set32(c.r[17], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 7;
L_002D08F0:
    set32(c.r[2], c.r[19].w[0] << 2);
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[18], ld32((c.r[3].w[0] + 940u)));
    set32(c.r[2], ld32((c.r[2].w[0])));
    st32((c.r[18].w[0] + 352u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D0914u); st32((c.r[18].w[0] + 356u), 0u);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x002D0914u) [[unlikely]] return; }
L_002D0914:
    ld128((c.r[2].w[0]) & ~15u, c.r[3]);
    c.f[0] = c.r[19].w[0];
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41C00000u);
    st128((c.r[18].w[0] + 48u) & ~15u, c.r[3]);
    c.f[1] = c.r[2].w[0];
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D0938u); c.f[20] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0018(c, 67u, depth + 1u); else { c.pc = 0x00162250u; return; } if (c.pc != 0x002D0938u) [[unlikely]] return; }
L_002D0938:
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 11;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002D0970; } }
    fpu_div(c, 12u, c.f[0], c.f[1]);
    c.budget -= 3;
L_002D0970:
    set32(c.r[2], ld32((c.r[16].w[0] + 1492u)));
    c.f[13] = 0u;
    c.f[14] = c.f[20];
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D0990u); set32(c.r[6], c.r[2].w[0] + 384u);  if (depth < kMaxDepth) unit_0074(c, 187u, depth + 1u); else { c.pc = 0x002D23F0u; return; } if (c.pc != 0x002D0990u) [[unlikely]] return; }
L_002D0990:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.r[3].d[0] = c.r[19].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[18].w[0] + 60u), 0u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002D08F0u | kUnwind; return; } goto L_002D08F0; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_002D09D0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D09E0u);  if (depth < kMaxDepth) unit_0010(c, 15u, depth + 1u); else { c.pc = 0x00140210u; return; } if (c.pc != 0x002D09E0u) [[unlikely]] return; }
L_002D09E0:
    set32(c.r[5], 0u + 22u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D09ECu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0006(c, 228u, depth + 1u); else { c.pc = 0x0011B928u; return; } if (c.pc != 0x002D09ECu) [[unlikely]] return; }
L_002D09EC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002D0A00:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[5], ld32((c.r[4].w[0] + 1496u)));
    c.budget -= 5;
    { const bool t = c.r[5].d[0] == 0ull; set32(c.r[3], 0u + 13u);  if (t) { goto L_002D0A28; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_002D0A28; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_002D0A38; } }
L_002D0A28:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D0A30u);  if (depth < kMaxDepth) unit_0074(c, 62u, depth + 1u); else { c.pc = 0x002D0A80u; return; } if (c.pc != 0x002D0A30u) [[unlikely]] return; }
L_002D0A30:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_002D0A70; } }
L_002D0A38:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_002D0A4C; } }
    set32(c.r[3], 0u + 5u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 7u);  if (t) { goto L_002D0A5C; } }
L_002D0A4C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D0A54u);  if (depth < kMaxDepth) unit_0074(c, 72u, depth + 1u); else { c.pc = 0x002D0CB0u; return; } if (c.pc != 0x002D0A54u) [[unlikely]] return; }
L_002D0A54:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D0A6C; } }
L_002D0A5C:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_002D0A6C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D0A6Cu);  if (depth < kMaxDepth) unit_0074(c, 79u, depth + 1u); else { c.pc = 0x002D0E30u; return; } if (c.pc != 0x002D0A6Cu) [[unlikely]] return; }
L_002D0A6C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_002D0A70:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002D0A80:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    set32(c.r[5], 0u + 212u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    set32(c.r[3], 0u + 14u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[6], ld32((c.r[1].w[0] - 24400u)));
    c.f[20] = 0u;
    set32(c.r[6], ld32((c.r[6].w[0] + 120u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], ld32((c.r[1].w[0] - 24392u)));
    mmi::mult(c, 0, c.r[6].w[0], c.r[5].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[17], c.r[4].w[0] + 136u);
    set32(c.r[4], ld32((c.r[4].w[0] + 188u)));
    c.budget -= 22;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; c.f[21] = c.f[20];  if (t) { goto L_002D0AE4; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 128u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002D0AFC; } }
L_002D0AE4:
    set32(c.r[4], ld32((c.r[18].w[0] + 1496u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[3], c.r[3].w[0] - 13424u);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.f[21] = ld32((c.r[3].w[0]));
    c.budget -= 6;
L_002D0AFC:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 10u)));
    set32(c.r[3], 0u + 25500u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002D0C84; } }
    set32(c.r[16], ld32((c.r[18].w[0] + 924u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_002D0B78; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D0B20u);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x002D0B20u) [[unlikely]] return; }
L_002D0B20:
    ld128((c.r[2].w[0]) & ~15u, c.r[6]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[3], c.r[3].w[0] - 25040u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.f[13] = 0u;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.f[14] = c.f[21];
    c.r[7].d[0] = 0ull + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st128((c.r[16].w[0] + 48u) & ~15u, c.r[6]);
    st32((c.r[16].w[0] + 352u), c.r[3].w[0]);
    c.f[12] = c.r[2].w[0];
    st32((c.r[16].w[0] + 356u), 0u);
    set32(c.r[2], ld32((c.r[18].w[0] + 1492u)));
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D0B60u); set32(c.r[6], c.r[2].w[0] + 736u);  if (depth < kMaxDepth) unit_0074(c, 187u, depth + 1u); else { c.pc = 0x002D23F0u; return; } if (c.pc != 0x002D0B60u) [[unlikely]] return; }
L_002D0B60:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D0B6Cu); st32((c.r[16].w[0] + 60u), 0u);  if (depth < kMaxDepth) unit_0018(c, 67u, depth + 1u); else { c.pc = 0x00162250u; return; } if (c.pc != 0x002D0B6Cu) [[unlikely]] return; }
L_002D0B6C:
    c.f[0] = c.r[2].w[0];
    c.f[20] = fp::cvt_s_w(c.f[0]);
    c.budget -= 3;
L_002D0B78:
    set32(c.r[16], ld32((c.r[18].w[0] + 928u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_002D0BF8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D0B8Cu);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x002D0B8Cu) [[unlikely]] return; }
L_002D0B8C:
    ld128((c.r[2].w[0]) & ~15u, c.r[8]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[6], c.r[17].w[0] + 96u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.f[12] = c.r[3].w[0];
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.f[14] = c.f[21];
    c.r[7].d[0] = 0ull + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41000000u);
    st128((c.r[16].w[0] + 48u) & ~15u, c.r[8]);
    c.f[0] = c.r[2].w[0];
    st32((c.r[16].w[0] + 352u), c.r[6].w[0]);
    st32((c.r[16].w[0] + 356u), 0u);
    set32(c.r[2], ld32((c.r[18].w[0] + 1492u)));
    c.f[13] = fp::add(c.f[0], c.f[20]);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D0BD0u); set32(c.r[6], c.r[2].w[0] + 824u);  if (depth < kMaxDepth) unit_0074(c, 187u, depth + 1u); else { c.pc = 0x002D23F0u; return; } if (c.pc != 0x002D0BD0u) [[unlikely]] return; }
L_002D0BD0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D0BDCu); st32((c.r[16].w[0] + 60u), 0u);  if (depth < kMaxDepth) unit_0018(c, 67u, depth + 1u); else { c.pc = 0x00162250u; return; } if (c.pc != 0x002D0BDCu) [[unlikely]] return; }
L_002D0BDC:
    c.f[1] = c.r[2].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = fp::add(c.f[0], c.f[20]);
    c.f[20] = fp::add(c.f[0], c.f[1]);
    c.budget -= 7;
L_002D0BF8:
    set32(c.r[3], ld32((c.r[18].w[0] + 1492u)));
    c.f[13] = 0u;
    c.f[0] = ld32((c.r[3].w[0] + 840u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[13]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002D0C84; } }
    fpu_compare(c, fp::key(c.f[20]) <= fp::key(c.f[0]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002D0C84; } }
    fpu_div(c, 20u, c.f[0], c.f[20]);
    set32(c.r[16], ld32((c.r[18].w[0] + 924u)));
    set32(c.r[6], c.r[3].w[0] + 736u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.f[14] = c.f[21];
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D0C48u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_0074(c, 187u, depth + 1u); else { c.pc = 0x002D23F0u; return; } if (c.pc != 0x002D0C48u) [[unlikely]] return; }
L_002D0C48:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D0C50u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0018(c, 67u, depth + 1u); else { c.pc = 0x00162250u; return; } if (c.pc != 0x002D0C50u) [[unlikely]] return; }
L_002D0C50:
    c.f[0] = c.r[2].w[0];
    set32(c.r[3], ld32((c.r[18].w[0] + 1492u)));
    set32(c.r[5], ld32((c.r[18].w[0] + 928u)));
    c.f[12] = c.f[20];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41000000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[6], c.r[3].w[0] + 824u);
    c.f[0] = c.r[2].w[0];
    c.f[14] = c.f[21];
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D0C84u); c.f[13] = fp::add(c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_0074(c, 187u, depth + 1u); else { c.pc = 0x002D23F0u; return; } if (c.pc != 0x002D0C84u) [[unlikely]] return; }
L_002D0C84:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002D0CB0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    set32(c.r[5], 0u + 212u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    set32(c.r[3], 0u + 14u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[6], ld32((c.r[1].w[0] - 24400u)));
    c.f[21] = 0u;
    set32(c.r[6], ld32((c.r[6].w[0] + 120u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], ld32((c.r[1].w[0] - 24392u)));
    mmi::mult(c, 0, c.r[6].w[0], c.r[5].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[16], c.r[4].w[0] + 136u);
    set32(c.r[4], ld32((c.r[4].w[0] + 188u)));
    c.budget -= 22;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; c.f[20] = c.f[21];  if (t) { goto L_002D0D14; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 128u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002D0D2C; } }
L_002D0D14:
    set32(c.r[4], ld32((c.r[17].w[0] + 1496u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[3], c.r[3].w[0] - 13424u);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.f[20] = ld32((c.r[3].w[0]));
    c.budget -= 6;
L_002D0D2C:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 10u)));
    set32(c.r[3], 0u + 25500u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002D0E10; } }
    set32(c.r[18], ld32((c.r[17].w[0] + 928u)));
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_002D0DB0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D0D50u);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x002D0D50u) [[unlikely]] return; }
L_002D0D50:
    ld128((c.r[2].w[0]) & ~15u, c.r[6]);
    set32(c.r[3], c.r[16].w[0] + 96u);
    c.f[13] = 0u;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.f[14] = c.f[20];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st128((c.r[18].w[0] + 48u) & ~15u, c.r[6]);
    st32((c.r[18].w[0] + 352u), c.r[3].w[0]);
    c.f[12] = c.r[2].w[0];
    st32((c.r[18].w[0] + 356u), 0u);
    set32(c.r[2], ld32((c.r[17].w[0] + 1492u)));
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D0D8Cu); set32(c.r[6], c.r[2].w[0] + 824u);  if (depth < kMaxDepth) unit_0074(c, 187u, depth + 1u); else { c.pc = 0x002D23F0u; return; } if (c.pc != 0x002D0D8Cu) [[unlikely]] return; }
L_002D0D8C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D0D98u); st32((c.r[18].w[0] + 60u), 0u);  if (depth < kMaxDepth) unit_0018(c, 67u, depth + 1u); else { c.pc = 0x00162250u; return; } if (c.pc != 0x002D0D98u) [[unlikely]] return; }
L_002D0D98:
    c.f[1] = c.r[2].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[21] = fp::add(c.f[0], c.f[1]);
    c.budget -= 6;
L_002D0DB0:
    set32(c.r[16], ld32((c.r[17].w[0] + 924u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_002D0E10; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D0DC4u);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x002D0DC4u) [[unlikely]] return; }
L_002D0DC4:
    ld128((c.r[2].w[0]) & ~15u, c.r[6]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[3], c.r[3].w[0] - 25040u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.f[13] = c.f[21] ^ fp::kSign;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.f[14] = c.f[20];
    c.r[7].d[0] = 0ull + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st128((c.r[16].w[0] + 48u) & ~15u, c.r[6]);
    st32((c.r[16].w[0] + 352u), c.r[3].w[0]);
    c.f[12] = c.r[2].w[0];
    st32((c.r[16].w[0] + 356u), 0u);
    set32(c.r[2], ld32((c.r[17].w[0] + 1492u)));
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D0E04u); set32(c.r[6], c.r[2].w[0] + 736u);  if (depth < kMaxDepth) unit_0074(c, 187u, depth + 1u); else { c.pc = 0x002D23F0u; return; } if (c.pc != 0x002D0E04u) [[unlikely]] return; }
L_002D0E04:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D0E10u); st32((c.r[16].w[0] + 60u), 0u);  if (depth < kMaxDepth) unit_0018(c, 67u, depth + 1u); else { c.pc = 0x00162250u; return; } if (c.pc != 0x002D0E10u) [[unlikely]] return; }
L_002D0E10:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002D0E30:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    set32(c.r[5], 0u + 212u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    set32(c.r[3], 0u + 14u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[6], ld32((c.r[1].w[0] - 24400u)));
    c.f[21] = 0u;
    set32(c.r[6], ld32((c.r[6].w[0] + 120u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], ld32((c.r[1].w[0] - 24392u)));
    mmi::mult(c, 0, c.r[6].w[0], c.r[5].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[16], c.r[4].w[0] + 136u);
    set32(c.r[4], ld32((c.r[4].w[0] + 188u)));
    c.budget -= 22;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; c.f[20] = c.f[21];  if (t) { goto L_002D0E94; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 128u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002D0EAC; } }
L_002D0E94:
    set32(c.r[4], ld32((c.r[17].w[0] + 1496u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[3], c.r[3].w[0] - 13424u);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.f[20] = ld32((c.r[3].w[0]));
    c.budget -= 6;
L_002D0EAC:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 10u)));
    set32(c.r[3], 0u + 25500u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002D0FCC; } }
    set32(c.r[18], ld32((c.r[17].w[0] + 928u)));
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_002D0F24; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D0ED0u);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x002D0ED0u) [[unlikely]] return; }
L_002D0ED0:
    ld128((c.r[2].w[0]) & ~15u, c.r[6]);
    set32(c.r[3], c.r[16].w[0] + 96u);
    c.f[13] = 0u;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.f[14] = c.f[20];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st128((c.r[18].w[0] + 48u) & ~15u, c.r[6]);
    st32((c.r[18].w[0] + 352u), c.r[3].w[0]);
    c.f[12] = c.r[2].w[0];
    st32((c.r[18].w[0] + 356u), 0u);
    set32(c.r[2], ld32((c.r[17].w[0] + 1492u)));
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D0F0Cu); set32(c.r[6], c.r[2].w[0] + 824u);  if (depth < kMaxDepth) unit_0074(c, 187u, depth + 1u); else { c.pc = 0x002D23F0u; return; } if (c.pc != 0x002D0F0Cu) [[unlikely]] return; }
L_002D0F0C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D0F18u); st32((c.r[18].w[0] + 60u), 0u);  if (depth < kMaxDepth) unit_0018(c, 67u, depth + 1u); else { c.pc = 0x00162250u; return; } if (c.pc != 0x002D0F18u) [[unlikely]] return; }
L_002D0F18:
    c.f[0] = c.r[2].w[0];
    c.f[21] = fp::cvt_s_w(c.f[0]);
    c.budget -= 3;
L_002D0F24:
    set32(c.r[16], ld32((c.r[17].w[0] + 924u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_002D0FCC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D0F38u);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x002D0F38u) [[unlikely]] return; }
L_002D0F38:
    ld128((c.r[2].w[0]) & ~15u, c.r[6]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[3], c.r[3].w[0] - 25032u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.f[13] = 0u;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.f[14] = c.f[20];
    c.r[7].d[0] = 0ull + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st128((c.r[16].w[0] + 48u) & ~15u, c.r[6]);
    st32((c.r[16].w[0] + 352u), c.r[3].w[0]);
    c.f[12] = c.r[2].w[0];
    st32((c.r[16].w[0] + 356u), 0u);
    set32(c.r[2], ld32((c.r[17].w[0] + 1492u)));
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D0F78u); set32(c.r[6], c.r[2].w[0] + 736u);  if (depth < kMaxDepth) unit_0074(c, 187u, depth + 1u); else { c.pc = 0x002D23F0u; return; } if (c.pc != 0x002D0F78u) [[unlikely]] return; }
L_002D0F78:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D0F80u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0018(c, 67u, depth + 1u); else { c.pc = 0x00162250u; return; } if (c.pc != 0x002D0F80u) [[unlikely]] return; }
L_002D0F80:
    c.f[1] = c.r[2].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[3].w[0];
    set32(c.r[6], ld32((c.r[17].w[0] + 1492u)));
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[6], c.r[6].w[0] + 736u);
    c.f[21] = fp::add(c.f[21], c.f[1]);
    c.f[0] = c.r[3].w[0];
    c.f[14] = c.f[20];
    fpu_div(c, 0u, c.f[21], c.f[0]);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D0FC8u); c.f[13] = c.f[0] ^ fp::kSign;  if (depth < kMaxDepth) unit_0074(c, 187u, depth + 1u); else { c.pc = 0x002D23F0u; return; } if (c.pc != 0x002D0FC8u) [[unlikely]] return; }
L_002D0FC8:
    st32((c.r[16].w[0] + 60u), 0u);
    c.budget -= 1;
L_002D0FCC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002D0FF0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[2], 0u + 7u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 1496u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002D1018; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D1010u);  if (depth < kMaxDepth) unit_0074(c, 96u, depth + 1u); else { c.pc = 0x002D1100u; return; } if (c.pc != 0x002D1010u) [[unlikely]] return; }
L_002D1010:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_002D1024; } }
L_002D1018:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D1020u);  if (depth < kMaxDepth) unit_0074(c, 90u, depth + 1u); else { c.pc = 0x002D1030u; return; } if (c.pc != 0x002D1020u) [[unlikely]] return; }
L_002D1020:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_002D1024:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002D1030:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    set32(c.r[3], 0u + 212u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[1].w[0] - 24400u)));
    set32(c.r[16], ld32((c.r[4].w[0] + 916u)));
    set32(c.r[5], ld32((c.r[5].w[0] + 120u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], ld32((c.r[1].w[0] - 24392u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    mmi::mult(c, 0, c.r[5].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D1078u); set32(c.r[18], c.r[2].w[0] + 136u);  if (depth < kMaxDepth) unit_0018(c, 67u, depth + 1u); else { c.pc = 0x00162250u; return; } if (c.pc != 0x002D1078u) [[unlikely]] return; }
L_002D1078:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_002D10BC; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 96u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002D10A8; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 1492u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D10A0u); set32(c.r[6], c.r[2].w[0] + 296u);  if (depth < kMaxDepth) unit_0074(c, 178u, depth + 1u); else { c.pc = 0x002D21C0u; return; } if (c.pc != 0x002D10A0u) [[unlikely]] return; }
L_002D10A0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], ld32((c.r[17].w[0] + 920u)));  if (t) { goto L_002D10C0; } }
L_002D10A8:
    set32(c.r[2], ld32((c.r[17].w[0] + 1492u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D10BCu); set32(c.r[6], c.r[2].w[0] + 384u);  if (depth < kMaxDepth) unit_0074(c, 178u, depth + 1u); else { c.pc = 0x002D21C0u; return; } if (c.pc != 0x002D10BCu) [[unlikely]] return; }
L_002D10BC:
    set32(c.r[16], ld32((c.r[17].w[0] + 920u)));
    c.budget -= 1;
L_002D10C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D10C8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0018(c, 67u, depth + 1u); else { c.pc = 0x00162250u; return; } if (c.pc != 0x002D10C8u) [[unlikely]] return; }
L_002D10C8:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_002D10E4; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 1492u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D10E4u); set32(c.r[6], c.r[2].w[0] + 208u);  if (depth < kMaxDepth) unit_0074(c, 178u, depth + 1u); else { c.pc = 0x002D21C0u; return; } if (c.pc != 0x002D10E4u) [[unlikely]] return; }
L_002D10E4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002D1100:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 1492u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[4].w[0] + 916u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D1124u); set32(c.r[6], c.r[2].w[0] + 208u);  if (depth < kMaxDepth) unit_0074(c, 178u, depth + 1u); else { c.pc = 0x002D21C0u; return; } if (c.pc != 0x002D1124u) [[unlikely]] return; }
L_002D1124:
    set32(c.r[2], ld32((c.r[16].w[0] + 1492u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[16].w[0] + 920u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D1138u); set32(c.r[6], c.r[2].w[0] + 296u);  if (depth < kMaxDepth) unit_0074(c, 178u, depth + 1u); else { c.pc = 0x002D21C0u; return; } if (c.pc != 0x002D1138u) [[unlikely]] return; }
L_002D1138:
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[17].w[0] << 2);
    c.budget -= 2;
L_002D1140:
    set32(c.r[2], ld32((c.r[16].w[0] + 1492u)));
    set32(c.r[3], c.r[16].w[0] + c.r[3].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[3].w[0] + 940u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D1158u); set32(c.r[6], c.r[2].w[0] + 384u);  if (depth < kMaxDepth) unit_0074(c, 178u, depth + 1u); else { c.pc = 0x002D21C0u; return; } if (c.pc != 0x002D1158u) [[unlikely]] return; }
L_002D1158:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[3].d[0] = c.r[17].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], c.r[17].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002D1140u | kUnwind; return; } goto L_002D1140; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002D1180:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[3], 0u + 3u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[5], ld32((c.r[4].w[0] + 1496u)));
    c.budget -= 6;
    { const bool t = c.r[5].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 7u);  if (t) { goto L_002D11A8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D11A0u);  if (depth < kMaxDepth) unit_0074(c, 154u, depth + 1u); else { c.pc = 0x002D1C00u; return; } if (c.pc != 0x002D11A0u) [[unlikely]] return; }
L_002D11A0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_002D11D8; } }
L_002D11A8:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_002D11D4; } }
    set32(c.r[2], 0u + 12u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_002D11CC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D11C4u);  if (depth < kMaxDepth) unit_0074(c, 132u, depth + 1u); else { c.pc = 0x002D16E0u; return; } if (c.pc != 0x002D11C4u) [[unlikely]] return; }
L_002D11C4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D11D4; } }
L_002D11CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D11D4u);  if (depth < kMaxDepth) unit_0074(c, 105u, depth + 1u); else { c.pc = 0x002D11E0u; return; } if (c.pc != 0x002D11D4u) [[unlikely]] return; }
L_002D11D4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_002D11D8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002D11E0:
    set32(c.r[29], c.r[29].w[0] - 128u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    set32(c.r[4], 0u + 212u);
    st32((c.r[29].w[0] + 16u), c.f[24]);
    st32((c.r[29].w[0] + 12u), c.f[23]);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[5], ld32((c.r[1].w[0] - 24400u)));
    c.f[23] = 0u;
    c.f[22] = c.f[23];
    set32(c.r[5], ld32((c.r[5].w[0] + 120u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[3], ld32((c.r[1].w[0] - 24392u)));
    mmi::mult(c, 0, c.r[5].w[0], c.r[4].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[17], c.r[3].w[0] + 136u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 232u)));
    c.budget -= 27;
    { const bool t = c.r[3].d[0] == 0ull; c.f[21] = c.f[23];  if (t) { goto L_002D1264; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 1496u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[3], c.r[3].w[0] - 13808u);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.f[21] = ld32((c.r[3].w[0]));
    c.budget -= 6;
L_002D1264:
    set32(c.r[4], ld32((c.r[17].w[0] + 52u)));
    set32(c.r[3], 0u + 14u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002D16A4; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 1492u)));
    set32(c.r[3], 0u + 1u);
    set32(c.r[4], ld32((c.r[4].w[0] + 140u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 2u);  if (t) { goto L_002D1290; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002D1474; } }
L_002D1290:
    set32(c.r[16], ld32((c.r[18].w[0] + 932u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_002D1474; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D12A4u);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x002D12A4u) [[unlikely]] return; }
L_002D12A4:
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    st128((c.r[16].w[0] + 48u) & ~15u, c.r[2]);
    set32(c.r[5], ld32((c.r[17].w[0] + 52u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D12B8u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0074(c, 176u, depth + 1u); else { c.pc = 0x002D2140u; return; } if (c.pc != 0x002D12B8u) [[unlikely]] return; }
L_002D12B8:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D12C4u); set32(c.r[4], c.r[18].w[0] + 1504u);  if (depth < kMaxDepth) unit_0009(c, 233u, depth + 1u); else { c.pc = 0x00127BE8u; return; } if (c.pc != 0x002D12C4u) [[unlikely]] return; }
L_002D12C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D12CCu); set32(c.r[4], c.r[18].w[0] + 1504u);  if (depth < kMaxDepth) unit_006B(c, 8u, depth + 1u); else { c.pc = 0x002AC540u; return; } if (c.pc != 0x002D12CCu) [[unlikely]] return; }
L_002D12CC:
    set32(c.r[3], ld32((c.r[17].w[0] + 52u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[5].sd[0] = static_cast<std::int32_t>(0x00470000u);  if (t) { goto L_002D12E8; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], c.r[18].w[0] + 1504u);  if (t) { goto L_002D12F8; } }
L_002D12E8:
    set32(c.r[4], c.r[18].w[0] + 1504u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D12F4u); set32(c.r[5], c.r[5].w[0] - 25024u);  if (depth < kMaxDepth) unit_0009(c, 220u, depth + 1u); else { c.pc = 0x001277E0u; return; } if (c.pc != 0x002D12F4u) [[unlikely]] return; }
L_002D12F4:
    set32(c.r[2], c.r[18].w[0] + 1504u);
    c.budget -= 1;
L_002D12F8:
    st32((c.r[16].w[0] + 352u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 356u), 0u);
    set32(c.r[5], ld32((c.r[17].w[0] + 52u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D130Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0074(c, 173u, depth + 1u); else { c.pc = 0x002D1FA0u; return; } if (c.pc != 0x002D130Cu) [[unlikely]] return; }
L_002D130C:
    c.f[0] = c.r[2].w[0];
    c.f[22] = 0u;
    c.f[20] = fp::cvt_s_w(c.f[0]);
    fpu_compare(c, fp::key(c.f[22]) == fp::key(c.f[20]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);  if (t) { goto L_002D132C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[18].w[0] + 1492u)));  if (t) { goto L_002D1348; } }
L_002D132C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.f[1] = c.r[3].w[0];
    c.f[0] = c.r[2].w[0];
    fpu_div(c, 1u, c.f[20], c.f[1]);
    c.f[22] = fp::add(c.f[0], c.f[1]);
    set32(c.r[3], ld32((c.r[18].w[0] + 1492u)));
    c.budget -= 7;
L_002D1348:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[24] = c.f[21] ^ fp::kSign;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.f[12] = c.r[2].w[0];
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.f[13] = c.f[22];
    c.r[7].d[0] = 0ull + 0ull;
    c.f[14] = c.f[24];
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D1370u); set32(c.r[6], c.r[3].w[0] + 120u);  if (depth < kMaxDepth) unit_0074(c, 187u, depth + 1u); else { c.pc = 0x002D23F0u; return; } if (c.pc != 0x002D1370u) [[unlikely]] return; }
L_002D1370:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D137Cu); st32((c.r[16].w[0] + 60u), 0u);  if (depth < kMaxDepth) unit_0018(c, 67u, depth + 1u); else { c.pc = 0x00162250u; return; } if (c.pc != 0x002D137Cu) [[unlikely]] return; }
L_002D137C:
    set32(c.r[4], ld32((c.r[18].w[0] + 1492u)));
    c.f[1] = c.r[2].w[0];
    c.f[0] = 0u;
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[2] = ld32((c.r[4].w[0] + 136u));
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.f[23] = fp::add(c.f[23], c.f[1]);  if (t) { goto L_002D13E8; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::add(c.f[0], c.f[20]);
    c.f[0] = fp::add(c.f[23], c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[2]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002D13E8; } }
    fpu_div(c, 12u, c.f[2], c.f[0]);
    set32(c.r[6], c.r[4].w[0] + 120u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.f[14] = c.f[24];
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D13E8u); c.f[13] = c.f[22];  if (depth < kMaxDepth) unit_0074(c, 187u, depth + 1u); else { c.pc = 0x002D23F0u; return; } if (c.pc != 0x002D13E8u) [[unlikely]] return; }
L_002D13E8:
    set32(c.r[4], ld32((c.r[18].w[0] + 1492u)));
    set32(c.r[3], 0u + 1u);
    set32(c.r[4], ld32((c.r[4].w[0] + 140u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 2u);  if (t) { goto L_002D1444; } }
    set32(c.r[5], ld32((c.r[17].w[0] + 52u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D1408u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0074(c, 173u, depth + 1u); else { c.pc = 0x002D1FA0u; return; } if (c.pc != 0x002D1408u) [[unlikely]] return; }
L_002D1408:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; set32(c.r[19], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));  if (t) { goto L_002D1418; } }
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[19], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    c.budget -= 2;
L_002D1418:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D1420u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0018(c, 67u, depth + 1u); else { c.pc = 0x00162250u; return; } if (c.pc != 0x002D1420u) [[unlikely]] return; }
L_002D1420:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));  if (t) { goto L_002D1430; } }
    set32(c.r[3], c.r[2].w[0] + 1u);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 1));
    c.budget -= 2;
L_002D1430:
    set32(c.r[3], c.r[3].w[0] + c.r[19].w[0]);
    set32(c.r[3], c.r[3].w[0] + 10u);
    c.f[0] = c.r[3].w[0];
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.f[23] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_002D1474; } }
L_002D1444:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002D1474; } }
    set32(c.r[5], ld32((c.r[17].w[0] + 52u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D1458u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0074(c, 173u, depth + 1u); else { c.pc = 0x002D1FA0u; return; } if (c.pc != 0x002D1458u) [[unlikely]] return; }
L_002D1458:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D1464u); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0018(c, 67u, depth + 1u); else { c.pc = 0x00162250u; return; } if (c.pc != 0x002D1464u) [[unlikely]] return; }
L_002D1464:
    set32(c.r[3], c.r[2].w[0] + c.r[16].w[0]);
    c.f[0] = c.r[3].w[0];
    c.f[23] = fp::cvt_s_w(c.f[0]);
    c.budget -= 4;
L_002D1474:
    set32(c.r[4], ld32((c.r[17].w[0] + 52u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[3], 0u + 2u);  if (t) { goto L_002D14B4; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002D14B4; } }
    set32(c.r[3], c.r[4].w[0] - 4u);
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(5ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[3], 0u + 12u);  if (t) { goto L_002D14B4; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002D14B4; } }
    set32(c.r[3], 0u + 10u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 11u);  if (t) { goto L_002D14B4; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002D1590; } }
L_002D14B4:
    set32(c.r[16], ld32((c.r[18].w[0] + 1200u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D14C0u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x002D14C0u) [[unlikely]] return; }
L_002D14C0:
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    st128((c.r[16].w[0] + 48u) & ~15u, c.r[2]);
    set32(c.r[5], ld32((c.r[17].w[0] + 52u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D14D4u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0074(c, 175u, depth + 1u); else { c.pc = 0x002D20E0u; return; } if (c.pc != 0x002D14D4u) [[unlikely]] return; }
L_002D14D4:
    set32(c.r[6], ld32((c.r[18].w[0] + 1460u)));
    set32(c.r[7], c.r[2].w[0] << 5);
    set32(c.r[2], c.r[29].w[0] + 120u);
    set32(c.r[5], c.r[29].w[0] + 112u);
    set32(c.r[3], 0u + 1u);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    c.r[6].d[0] = ld64((c.r[6].w[0] + 16u));
    st64((c.r[29].w[0] + 120u), c.r[6].d[0]);
    st64((c.r[16].w[0] + 256u), c.r[6].d[0]);
    c.r[2].d[0] = ld64((c.r[2].w[0]));
    st64((c.r[5].w[0]), c.r[2].d[0]);
    c.r[2].d[0] = ld8((c.r[29].w[0] + 115u));
    c.r[2].d[0] = c.r[2].d[0] << 58;
    c.r[2].d[0] = c.r[2].d[0] >> 60;
    set32(c.r[2], c.r[3].w[0] << (c.r[2].w[0] & 31u));
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[16].w[0] + 160u), c.f[0]);
    c.r[2].d[0] = ld64((c.r[29].w[0] + 112u));
    c.r[2].d[0] = c.r[2].d[0] << 30;
    c.r[2].d[0] = c.r[2].d[0] >> 60;
    set32(c.r[2], c.r[3].w[0] << (c.r[2].w[0] & 31u));
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[16].w[0] + 164u), c.f[0]);
    set32(c.r[5], ld32((c.r[17].w[0] + 52u)));
    c.budget -= 30;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D154Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0074(c, 174u, depth + 1u); else { c.pc = 0x002D2070u; return; } if (c.pc != 0x002D154Cu) [[unlikely]] return; }
L_002D154C:
    set32(c.r[2], ld32((c.r[18].w[0] + 1492u)));
    c.f[12] = c.f[0];
    c.f[0] = c.f[23] ^ fp::kSign;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.f[13] = fp::add(c.f[0], c.f[22]);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], c.r[2].w[0] + 32u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D1570u); c.f[14] = c.f[21] ^ fp::kSign;  if (depth < kMaxDepth) unit_0074(c, 197u, depth + 1u); else { c.pc = 0x002D2660u; return; } if (c.pc != 0x002D1570u) [[unlikely]] return; }
L_002D1570:
    st32((c.r[16].w[0] + 60u), 0u);
    set32(c.r[5], ld32((c.r[17].w[0] + 52u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D1580u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0074(c, 173u, depth + 1u); else { c.pc = 0x002D1FA0u; return; } if (c.pc != 0x002D1580u) [[unlikely]] return; }
L_002D1580:
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[23] = fp::add(c.f[23], c.f[0]);
    c.budget -= 4;
L_002D1590:
    set32(c.r[3], ld32((c.r[18].w[0] + 1492u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 140u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002D16A4; } }
    set32(c.r[16], ld32((c.r[18].w[0] + 932u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull; c.f[22] = c.f[23];  if (t) { goto L_002D16A4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D15B4u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x002D15B4u) [[unlikely]] return; }
L_002D15B4:
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    st128((c.r[16].w[0] + 48u) & ~15u, c.r[2]);
    set32(c.r[5], ld32((c.r[17].w[0] + 52u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D15C8u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0074(c, 176u, depth + 1u); else { c.pc = 0x002D2140u; return; } if (c.pc != 0x002D15C8u) [[unlikely]] return; }
L_002D15C8:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D15D4u); set32(c.r[4], c.r[18].w[0] + 1504u);  if (depth < kMaxDepth) unit_0009(c, 233u, depth + 1u); else { c.pc = 0x00127BE8u; return; } if (c.pc != 0x002D15D4u) [[unlikely]] return; }
L_002D15D4:
    set32(c.r[3], ld32((c.r[17].w[0] + 52u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[5].sd[0] = static_cast<std::int32_t>(0x00470000u);  if (t) { goto L_002D15F0; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[4], c.r[18].w[0] + 1504u);  if (t) { goto L_002D1600; } }
L_002D15F0:
    set32(c.r[4], c.r[18].w[0] + 1504u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D15FCu); set32(c.r[5], c.r[5].w[0] - 25024u);  if (depth < kMaxDepth) unit_0009(c, 220u, depth + 1u); else { c.pc = 0x001277E0u; return; } if (c.pc != 0x002D15FCu) [[unlikely]] return; }
L_002D15FC:
    set32(c.r[4], c.r[18].w[0] + 1504u);
    c.budget -= 1;
L_002D1600:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D1608u);  if (depth < kMaxDepth) unit_006B(c, 8u, depth + 1u); else { c.pc = 0x002AC540u; return; } if (c.pc != 0x002D1608u) [[unlikely]] return; }
L_002D1608:
    set32(c.r[2], c.r[18].w[0] + 1504u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    st32((c.r[16].w[0] + 352u), c.r[2].w[0]);
    c.f[20] = c.f[21] ^ fp::kSign;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[16].w[0] + 356u), 0u);
    c.f[12] = c.r[2].w[0];
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.f[13] = c.f[23];
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[18].w[0] + 1492u)));
    c.f[14] = c.f[20];
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D1640u); set32(c.r[6], c.r[2].w[0] + 120u);  if (depth < kMaxDepth) unit_0074(c, 187u, depth + 1u); else { c.pc = 0x002D23F0u; return; } if (c.pc != 0x002D1640u) [[unlikely]] return; }
L_002D1640:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D164Cu); st32((c.r[16].w[0] + 60u), 0u);  if (depth < kMaxDepth) unit_0018(c, 67u, depth + 1u); else { c.pc = 0x00162250u; return; } if (c.pc != 0x002D164Cu) [[unlikely]] return; }
L_002D164C:
    set32(c.r[3], ld32((c.r[18].w[0] + 1492u)));
    c.f[1] = c.r[2].w[0];
    c.f[0] = 0u;
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[2] = ld32((c.r[3].w[0] + 136u));
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.f[23] = fp::add(c.f[23], c.f[1]);  if (t) { goto L_002D16A4; } }
    fpu_compare(c, fp::key(c.f[23]) <= fp::key(c.f[2]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002D16A4; } }
    fpu_div(c, 12u, c.f[2], c.f[23]);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], c.r[3].w[0] + 120u);
    c.r[7].d[0] = 0ull + 0ull;
    c.f[13] = c.f[22];
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D16A4u); c.f[14] = c.f[20];  if (depth < kMaxDepth) unit_0074(c, 187u, depth + 1u); else { c.pc = 0x002D23F0u; return; } if (c.pc != 0x002D16A4u) [[unlikely]] return; }
L_002D16A4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.f[24] = ld32((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    c.f[23] = ld32((c.r[29].w[0] + 12u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_002D16E0:
    set32(c.r[29], c.r[29].w[0] - 176u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    set32(c.r[2], 0u + 14u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[1].w[0] - 24400u)));
    set32(c.r[4], 0u + 212u);
    c.f[20] = 0u;
    set32(c.r[5], ld32((c.r[5].w[0] + 120u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[3], ld32((c.r[1].w[0] - 24392u)));
    mmi::mult(c, 0, c.r[5].w[0], c.r[4].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[18], c.r[3].w[0] + 136u);
    set32(c.r[3], ld32((c.r[3].w[0] + 188u)));
    c.budget -= 21;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002D1A24; } }
    set32(c.r[17], ld32((c.r[16].w[0] + 932u)));
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_002D17D8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D1748u);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x002D1748u) [[unlikely]] return; }
L_002D1748:
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    st128((c.r[17].w[0] + 48u) & ~15u, c.r[2]);
    set32(c.r[5], ld32((c.r[18].w[0] + 52u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D175Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0074(c, 176u, depth + 1u); else { c.pc = 0x002D2140u; return; } if (c.pc != 0x002D175Cu) [[unlikely]] return; }
L_002D175C:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D1768u); set32(c.r[4], c.r[16].w[0] + 1504u);  if (depth < kMaxDepth) unit_0009(c, 233u, depth + 1u); else { c.pc = 0x00127BE8u; return; } if (c.pc != 0x002D1768u) [[unlikely]] return; }
L_002D1768:
    set32(c.r[3], ld32((c.r[18].w[0] + 52u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[5].sd[0] = static_cast<std::int32_t>(0x00470000u);  if (t) { goto L_002D1784; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[4], c.r[16].w[0] + 1504u);  if (t) { goto L_002D1794; } }
L_002D1784:
    set32(c.r[4], c.r[16].w[0] + 1504u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D1790u); set32(c.r[5], c.r[5].w[0] - 25024u);  if (depth < kMaxDepth) unit_0009(c, 220u, depth + 1u); else { c.pc = 0x001277E0u; return; } if (c.pc != 0x002D1790u) [[unlikely]] return; }
L_002D1790:
    set32(c.r[4], c.r[16].w[0] + 1504u);
    c.budget -= 1;
L_002D1794:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D179Cu);  if (depth < kMaxDepth) unit_006B(c, 8u, depth + 1u); else { c.pc = 0x002AC540u; return; } if (c.pc != 0x002D179Cu) [[unlikely]] return; }
L_002D179C:
    set32(c.r[2], c.r[16].w[0] + 1504u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[17].w[0] + 352u), c.r[2].w[0]);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[17].w[0] + 356u), 0u);
    set32(c.r[2], ld32((c.r[16].w[0] + 1492u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D17BCu); set32(c.r[6], c.r[2].w[0] + 120u);  if (depth < kMaxDepth) unit_0074(c, 182u, depth + 1u); else { c.pc = 0x002D2300u; return; } if (c.pc != 0x002D17BCu) [[unlikely]] return; }
L_002D17BC:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D17C8u); st32((c.r[17].w[0] + 60u), 0u);  if (depth < kMaxDepth) unit_0018(c, 67u, depth + 1u); else { c.pc = 0x00162250u; return; } if (c.pc != 0x002D17C8u) [[unlikely]] return; }
L_002D17C8:
    set32(c.r[2], c.r[2].w[0] + 4u);
    c.f[0] = c.r[2].w[0];
    c.f[20] = fp::cvt_s_w(c.f[0]);
    c.budget -= 4;
L_002D17D8:
    set32(c.r[3], ld32((c.r[18].w[0] + 52u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], 0u + 2u);  if (t) { goto L_002D1818; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002D1818; } }
    set32(c.r[2], c.r[3].w[0] - 4u);
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(5ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[2], 0u + 12u);  if (t) { goto L_002D1818; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002D1818; } }
    set32(c.r[2], 0u + 10u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 11u);  if (t) { goto L_002D1818; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002D18EC; } }
L_002D1818:
    set32(c.r[17], ld32((c.r[16].w[0] + 1200u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D1824u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x002D1824u) [[unlikely]] return; }
L_002D1824:
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    st128((c.r[17].w[0] + 48u) & ~15u, c.r[2]);
    set32(c.r[5], ld32((c.r[18].w[0] + 52u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D1838u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0074(c, 175u, depth + 1u); else { c.pc = 0x002D20E0u; return; } if (c.pc != 0x002D1838u) [[unlikely]] return; }
L_002D1838:
    set32(c.r[6], ld32((c.r[16].w[0] + 1460u)));
    set32(c.r[7], c.r[2].w[0] << 5);
    set32(c.r[2], c.r[29].w[0] + 168u);
    set32(c.r[5], c.r[29].w[0] + 160u);
    set32(c.r[3], 0u + 1u);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    c.r[6].d[0] = ld64((c.r[6].w[0] + 16u));
    st64((c.r[29].w[0] + 168u), c.r[6].d[0]);
    st64((c.r[17].w[0] + 256u), c.r[6].d[0]);
    c.r[2].d[0] = ld64((c.r[2].w[0]));
    st64((c.r[5].w[0]), c.r[2].d[0]);
    c.r[2].d[0] = ld8((c.r[29].w[0] + 163u));
    c.r[2].d[0] = c.r[2].d[0] << 58;
    c.r[2].d[0] = c.r[2].d[0] >> 60;
    set32(c.r[2], c.r[3].w[0] << (c.r[2].w[0] & 31u));
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[17].w[0] + 160u), c.f[0]);
    c.r[2].d[0] = ld64((c.r[29].w[0] + 160u));
    c.r[2].d[0] = c.r[2].d[0] << 30;
    c.r[2].d[0] = c.r[2].d[0] >> 60;
    set32(c.r[2], c.r[3].w[0] << (c.r[2].w[0] & 31u));
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[17].w[0] + 164u), c.f[0]);
    set32(c.r[5], ld32((c.r[18].w[0] + 52u)));
    c.budget -= 30;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D18B0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0074(c, 174u, depth + 1u); else { c.pc = 0x002D2070u; return; } if (c.pc != 0x002D18B0u) [[unlikely]] return; }
L_002D18B0:
    set32(c.r[2], ld32((c.r[16].w[0] + 1492u)));
    c.f[12] = c.f[0];
    c.f[13] = c.f[20] ^ fp::kSign;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D18CCu); set32(c.r[6], c.r[2].w[0] + 32u);  if (depth < kMaxDepth) unit_0074(c, 193u, depth + 1u); else { c.pc = 0x002D2590u; return; } if (c.pc != 0x002D18CCu) [[unlikely]] return; }
L_002D18CC:
    st32((c.r[17].w[0] + 60u), 0u);
    set32(c.r[5], ld32((c.r[18].w[0] + 52u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D18DCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0074(c, 173u, depth + 1u); else { c.pc = 0x002D1FA0u; return; } if (c.pc != 0x002D18DCu) [[unlikely]] return; }
L_002D18DC:
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[20] = fp::add(c.f[20], c.f[0]);
    c.budget -= 4;
L_002D18EC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x424C0000u);
    set32(c.r[4], ld32((c.r[16].w[0] + 1472u)));
    c.f[0] = c.r[2].w[0];
    set32(c.r[18], ld32((c.r[16].w[0] + 1204u)));
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D1908u); c.f[20] = fp::sub(c.f[20], c.f[0]);  if (depth < kMaxDepth) unit_002A(c, 3u, depth + 1u); else { c.pc = 0x001A8060u; return; } if (c.pc != 0x002D1908u) [[unlikely]] return; }
L_002D1908:
    set32(c.r[8], ld32((c.r[2].w[0])));
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[7], c.r[29].w[0] + 152u);
    set32(c.r[6], c.r[29].w[0] + 144u);
    set32(c.r[3], 0u + 1u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[13] = c.f[20] ^ fp::kSign;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[2].w[0];
    c.r[2].d[0] = ld64((c.r[8].w[0] + 880u));
    st64((c.r[29].w[0] + 152u), c.r[2].d[0]);
    st64((c.r[18].w[0] + 256u), c.r[2].d[0]);
    c.budget -= 13;
L_002D193C:
    c.r[2].d[0] = ld64((c.r[7].w[0]));
    st64((c.r[6].w[0]), c.r[2].d[0]);
    c.r[2].d[0] = ld8((c.r[29].w[0] + 147u));
    c.r[2].d[0] = c.r[2].d[0] << 58;
    c.r[2].d[0] = c.r[2].d[0] >> 60;
    set32(c.r[2], c.r[3].w[0] << (c.r[2].w[0] & 31u));
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[18].w[0] + 160u), c.f[0]);
    c.r[2].d[0] = ld64((c.r[29].w[0] + 144u));
    c.r[2].d[0] = c.r[2].d[0] << 30;
    c.r[2].d[0] = c.r[2].d[0] >> 60;
    set32(c.r[2], c.r[3].w[0] << (c.r[2].w[0] & 31u));
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[18].w[0] + 164u), c.f[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 1492u)));
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D1990u); set32(c.r[6], c.r[2].w[0] + 384u);  if (depth < kMaxDepth) unit_0074(c, 193u, depth + 1u); else { c.pc = 0x002D2590u; return; } if (c.pc != 0x002D1990u) [[unlikely]] return; }
L_002D1990:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41800000u);
    st32((c.r[18].w[0] + 60u), 0u);
    c.f[0] = c.r[2].w[0];
    set32(c.r[5], ld32((c.r[17].w[0])));
    set32(c.r[7], c.r[29].w[0] + 136u);
    set32(c.r[6], c.r[29].w[0] + 128u);
    fpu_div(c, 12u, c.f[20], c.f[0]);
    set32(c.r[3], 0u + 1u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[17], ld32((c.r[16].w[0] + 1208u)));
    c.r[2].d[0] = ld64((c.r[5].w[0] + 48u));
    st64((c.r[29].w[0] + 136u), c.r[2].d[0]);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    st64((c.r[17].w[0] + 256u), c.r[2].d[0]);
    c.r[2].d[0] = ld64((c.r[7].w[0]));
    st64((c.r[6].w[0]), c.r[2].d[0]);
    c.r[2].d[0] = ld8((c.r[29].w[0] + 131u));
    c.r[2].d[0] = c.r[2].d[0] << 58;
    c.r[2].d[0] = c.r[2].d[0] >> 60;
    set32(c.r[2], c.r[3].w[0] << (c.r[2].w[0] & 31u));
    c.f[0] = c.r[2].w[0];
    c.f[13] = 0u;
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[17].w[0] + 160u), c.f[0]);
    c.r[2].d[0] = ld64((c.r[29].w[0] + 128u));
    c.r[2].d[0] = c.r[2].d[0] << 30;
    c.r[2].d[0] = c.r[2].d[0] >> 60;
    set32(c.r[2], c.r[3].w[0] << (c.r[2].w[0] & 31u));
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[17].w[0] + 164u), c.f[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 1492u)));
    c.budget -= 35;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D1A1Cu); set32(c.r[6], c.r[2].w[0] + 384u);  if (depth < kMaxDepth) unit_0074(c, 193u, depth + 1u); else { c.pc = 0x002D2590u; return; } if (c.pc != 0x002D1A1Cu) [[unlikely]] return; }
L_002D1A1C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 60u), 0u);  if (t) { goto L_002D1BE4; } }
L_002D1A24:
    set32(c.r[4], ld32((c.r[16].w[0] + 1472u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D1A30u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002A(c, 3u, depth + 1u); else { c.pc = 0x001A8060u; return; } if (c.pc != 0x002D1A30u) [[unlikely]] return; }
L_002D1A30:
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[17], ld32((c.r[16].w[0] + 1204u)));
    set32(c.r[8], c.r[29].w[0] + 120u);
    set32(c.r[7], c.r[29].w[0] + 112u);
    set32(c.r[6], 0u + 1u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = c.r[3].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42F20000u);
    c.f[0] = c.r[2].w[0];
    c.r[2].d[0] = ld64((c.r[5].w[0] + 880u));
    c.f[13] = c.f[0] ^ fp::kSign;
    st64((c.r[29].w[0] + 120u), c.r[2].d[0]);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    st64((c.r[17].w[0] + 256u), c.r[2].d[0]);
    c.r[2].d[0] = ld64((c.r[8].w[0]));
    st64((c.r[7].w[0]), c.r[2].d[0]);
    c.r[2].d[0] = ld8((c.r[29].w[0] + 115u));
    c.r[2].d[0] = c.r[2].d[0] << 58;
    c.r[2].d[0] = c.r[2].d[0] >> 60;
    set32(c.r[2], c.r[6].w[0] << (c.r[2].w[0] & 31u));
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[17].w[0] + 160u), c.f[0]);
    c.r[2].d[0] = ld64((c.r[29].w[0] + 112u));
    c.r[2].d[0] = c.r[2].d[0] << 30;
    c.r[2].d[0] = c.r[2].d[0] >> 60;
    set32(c.r[2], c.r[6].w[0] << (c.r[2].w[0] & 31u));
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[17].w[0] + 164u), c.f[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 1492u)));
    c.budget -= 37;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D1AC4u); set32(c.r[6], c.r[2].w[0] + 384u);  if (depth < kMaxDepth) unit_0074(c, 193u, depth + 1u); else { c.pc = 0x002D2590u; return; } if (c.pc != 0x002D1AC4u) [[unlikely]] return; }
L_002D1AC4:
    st32((c.r[17].w[0] + 60u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40F20000u);
    set32(c.r[8], ld32((c.r[18].w[0])));
    c.f[12] = c.r[2].w[0];
    set32(c.r[17], ld32((c.r[16].w[0] + 1208u)));
    set32(c.r[7], c.r[29].w[0] + 104u);
    set32(c.r[6], c.r[29].w[0] + 96u);
    set32(c.r[3], 0u + 1u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[13] = c.f[20];
    c.r[2].d[0] = ld64((c.r[8].w[0] + 48u));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    st64((c.r[29].w[0] + 104u), c.r[2].d[0]);
    st64((c.r[17].w[0] + 256u), c.r[2].d[0]);
    c.r[2].d[0] = ld64((c.r[7].w[0]));
    st64((c.r[6].w[0]), c.r[2].d[0]);
    c.r[2].d[0] = ld8((c.r[29].w[0] + 99u));
    c.r[2].d[0] = c.r[2].d[0] << 58;
    c.r[2].d[0] = c.r[2].d[0] >> 60;
    set32(c.r[2], c.r[3].w[0] << (c.r[2].w[0] & 31u));
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[17].w[0] + 160u), c.f[0]);
    c.r[2].d[0] = ld64((c.r[29].w[0] + 96u));
    c.r[2].d[0] = c.r[2].d[0] << 30;
    c.r[2].d[0] = c.r[2].d[0] >> 60;
    set32(c.r[2], c.r[3].w[0] << (c.r[2].w[0] & 31u));
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[17].w[0] + 164u), c.f[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 1492u)));
    c.budget -= 35;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D1B50u); set32(c.r[6], c.r[2].w[0] + 384u);  if (depth < kMaxDepth) unit_0074(c, 193u, depth + 1u); else { c.pc = 0x002D2590u; return; } if (c.pc != 0x002D1B50u) [[unlikely]] return; }
L_002D1B50:
    st32((c.r[17].w[0] + 60u), 0u);
    set32(c.r[17], ld32((c.r[16].w[0] + 1212u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D1B60u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x002D1B60u) [[unlikely]] return; }
L_002D1B60:
    ld128((c.r[2].w[0]) & ~15u, c.r[7]);
    set32(c.r[6], c.r[29].w[0] + 80u);
    set32(c.r[3], 0u + 1u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    st128((c.r[17].w[0] + 48u) & ~15u, c.r[7]);
    set32(c.r[2], c.r[29].w[0] + 88u);
    set32(c.r[7], ld32((c.r[18].w[0])));
    c.r[7].d[0] = ld64((c.r[7].w[0] + 912u));
    st64((c.r[29].w[0] + 88u), c.r[7].d[0]);
    st64((c.r[17].w[0] + 256u), c.r[7].d[0]);
    c.r[2].d[0] = ld64((c.r[2].w[0]));
    st64((c.r[6].w[0]), c.r[2].d[0]);
    c.r[2].d[0] = ld8((c.r[29].w[0] + 83u));
    c.r[2].d[0] = c.r[2].d[0] << 58;
    c.r[2].d[0] = c.r[2].d[0] >> 60;
    set32(c.r[2], c.r[3].w[0] << (c.r[2].w[0] & 31u));
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[17].w[0] + 160u), c.f[0]);
    c.r[2].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[2].d[0] = c.r[2].d[0] << 30;
    c.r[2].d[0] = c.r[2].d[0] >> 60;
    set32(c.r[2], c.r[3].w[0] << (c.r[2].w[0] & 31u));
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[17].w[0] + 164u), c.f[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 1492u)));
    c.budget -= 32;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D1BE0u); set32(c.r[6], c.r[2].w[0] + 472u);  if (depth < kMaxDepth) unit_0074(c, 192u, depth + 1u); else { c.pc = 0x002D2570u; return; } if (c.pc != 0x002D1BE0u) [[unlikely]] return; }
L_002D1BE0:
    st32((c.r[17].w[0] + 60u), 0u);
    c.budget -= 1;
L_002D1BE4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 176u);  c.pc = t; return; }
L_002D1C00:
    set32(c.r[29], c.r[29].w[0] - 112u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    set32(c.r[5], 0u + 212u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    set32(c.r[3], 0u + 14u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[6], ld32((c.r[1].w[0] - 24400u)));
    set32(c.r[6], ld32((c.r[6].w[0] + 120u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], ld32((c.r[1].w[0] - 24392u)));
    mmi::mult(c, 0, c.r[6].w[0], c.r[5].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[18], c.r[4].w[0] + 136u);
    set32(c.r[4], ld32((c.r[4].w[0] + 188u)));
    c.budget -= 22;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002D1F70; } }
    set32(c.r[17], ld32((c.r[19].w[0] + 932u)));
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull; set32(c.r[16], ld32((c.r[19].w[0] + 936u)));  if (t) { goto L_002D1E44; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D1C6Cu); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x002D1C6Cu) [[unlikely]] return; }
L_002D1C6C:
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    st128((c.r[17].w[0] + 48u) & ~15u, c.r[2]);
    set32(c.r[5], ld32((c.r[18].w[0] + 52u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D1C80u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0074(c, 176u, depth + 1u); else { c.pc = 0x002D2140u; return; } if (c.pc != 0x002D1C80u) [[unlikely]] return; }
L_002D1C80:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D1C8Cu); set32(c.r[4], c.r[19].w[0] + 1504u);  if (depth < kMaxDepth) unit_0009(c, 233u, depth + 1u); else { c.pc = 0x00127BE8u; return; } if (c.pc != 0x002D1C8Cu) [[unlikely]] return; }
L_002D1C8C:
    set32(c.r[3], ld32((c.r[18].w[0] + 52u)));
    set32(c.r[2], 0u + 12u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 10u);  if (t) { goto L_002D1CA4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002D1CDC; } }
L_002D1CA4:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[5].sd[0] = static_cast<std::int32_t>(0x00470000u);  if (t) { goto L_002D1CB8; } }
    set32(c.r[2], 0u + 11u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002D1CCC; } }
L_002D1CB8:
    set32(c.r[4], c.r[19].w[0] + 1504u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D1CC4u); set32(c.r[5], c.r[5].w[0] - 25016u);  if (depth < kMaxDepth) unit_000A(c, 19u, depth + 1u); else { c.pc = 0x00128400u; return; } if (c.pc != 0x002D1CC4u) [[unlikely]] return; }
L_002D1CC4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D1CDC; } }
L_002D1CCC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[4], c.r[19].w[0] + 1504u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D1CDCu); set32(c.r[5], c.r[5].w[0] - 25008u);  if (depth < kMaxDepth) unit_000A(c, 19u, depth + 1u); else { c.pc = 0x00128400u; return; } if (c.pc != 0x002D1CDCu) [[unlikely]] return; }
L_002D1CDC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[19].w[0] + 1504u);  if (t) { goto L_002D1CE8; } }
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_002D1CE8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D1CF0u);  if (depth < kMaxDepth) unit_006B(c, 8u, depth + 1u); else { c.pc = 0x002AC540u; return; } if (c.pc != 0x002D1CF0u) [[unlikely]] return; }
L_002D1CF0:
    set32(c.r[2], c.r[19].w[0] + 1504u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    st32((c.r[17].w[0] + 352u), c.r[2].w[0]);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[17].w[0] + 356u), 0u);
    set32(c.r[2], ld32((c.r[19].w[0] + 1492u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D1D10u); set32(c.r[6], c.r[2].w[0] + 120u);  if (depth < kMaxDepth) unit_0074(c, 182u, depth + 1u); else { c.pc = 0x002D2300u; return; } if (c.pc != 0x002D1D10u) [[unlikely]] return; }
L_002D1D10:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D1D1Cu); st32((c.r[17].w[0] + 60u), 0u);  if (depth < kMaxDepth) unit_0018(c, 67u, depth + 1u); else { c.pc = 0x00162250u; return; } if (c.pc != 0x002D1D1Cu) [[unlikely]] return; }
L_002D1D1C:
    c.f[0] = c.r[2].w[0];
    set32(c.r[2], ld32((c.r[19].w[0] + 1492u)));
    c.f[21] = fp::cvt_s_w(c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 136u));
    fpu_compare(c, fp::key(c.f[21]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002D1D6C; } }
    fpu_div(c, 12u, c.f[0], c.f[21]);
    set32(c.r[6], c.r[2].w[0] + 120u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.f[13] = 0u;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D1D58u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0074(c, 183u, depth + 1u); else { c.pc = 0x002D2320u; return; } if (c.pc != 0x002D1D58u) [[unlikely]] return; }
L_002D1D58:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D1D60u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0018(c, 67u, depth + 1u); else { c.pc = 0x00162250u; return; } if (c.pc != 0x002D1D60u) [[unlikely]] return; }
L_002D1D60:
    c.f[0] = c.r[2].w[0];
    c.f[21] = fp::cvt_s_w(c.f[0]);
    c.budget -= 3;
L_002D1D6C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[21]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_002D1D98; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42000000u);
    c.f[0] = c.r[2].w[0];
    c.f[21] = fp::add(c.f[21], c.f[0]);
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 5;
L_002D1D98:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D1DA0u);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x002D1DA0u) [[unlikely]] return; }
L_002D1DA0:
    ld128((c.r[2].w[0]) & ~15u, c.r[3]);
    st128((c.r[16].w[0] + 48u) & ~15u, c.r[3]);
    set32(c.r[2], 0u + 12u);
    set32(c.r[3], ld32((c.r[18].w[0] + 52u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[5].sd[0] = static_cast<std::int32_t>(0x00470000u);  if (t) { goto L_002D1DCC; } }
    set32(c.r[4], c.r[19].w[0] + 1504u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D1DC4u); set32(c.r[5], c.r[5].w[0] - 25984u);  if (depth < kMaxDepth) unit_000A(c, 19u, depth + 1u); else { c.pc = 0x00128400u; return; } if (c.pc != 0x002D1DC4u) [[unlikely]] return; }
L_002D1DC4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[19].w[0] + 1492u)));  if (t) { goto L_002D1E30; } }
L_002D1DCC:
    set32(c.r[2], 0u + 10u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002D1DE4; } }
    set32(c.r[2], 0u + 11u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 2u);  if (t) { goto L_002D1DF8; } }
L_002D1DE4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[2], c.r[2].w[0] - 25016u);
    st32((c.r[16].w[0] + 352u), c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 356u), 0u);  if (t) { goto L_002D1E2C; } }
L_002D1DF8:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002D1E0C; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0x00470000u);  if (t) { goto L_002D1E20; } }
L_002D1E0C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[2], c.r[2].w[0] - 24992u);
    st32((c.r[16].w[0] + 352u), c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 356u), 0u);  if (t) { goto L_002D1E2C; } }
L_002D1E20:
    set32(c.r[2], c.r[2].w[0] - 25008u);
    st32((c.r[16].w[0] + 352u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 356u), 0u);
    c.budget -= 3;
L_002D1E2C:
    set32(c.r[2], ld32((c.r[19].w[0] + 1492u)));
    c.budget -= 1;
L_002D1E30:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D1E40u); set32(c.r[6], c.r[2].w[0] + 472u);  if (depth < kMaxDepth) unit_0074(c, 182u, depth + 1u); else { c.pc = 0x002D2300u; return; } if (c.pc != 0x002D1E40u) [[unlikely]] return; }
L_002D1E40:
    st32((c.r[16].w[0] + 60u), 0u);
    c.budget -= 1;
L_002D1E44:
    set32(c.r[4], ld32((c.r[18].w[0] + 52u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[3], 0u + 2u);  if (t) { goto L_002D1E84; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002D1E84; } }
    set32(c.r[3], c.r[4].w[0] - 4u);
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(5ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[3], 0u + 12u);  if (t) { goto L_002D1E84; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002D1E84; } }
    set32(c.r[3], 0u + 10u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 11u);  if (t) { goto L_002D1E84; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002D1F70; } }
L_002D1E84:
    set32(c.r[16], ld32((c.r[19].w[0] + 1200u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D1E90u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x002D1E90u) [[unlikely]] return; }
L_002D1E90:
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    st128((c.r[16].w[0] + 48u) & ~15u, c.r[2]);
    set32(c.r[5], ld32((c.r[18].w[0] + 52u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D1EA4u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0074(c, 175u, depth + 1u); else { c.pc = 0x002D20E0u; return; } if (c.pc != 0x002D1EA4u) [[unlikely]] return; }
L_002D1EA4:
    set32(c.r[6], ld32((c.r[19].w[0] + 1460u)));
    set32(c.r[7], c.r[2].w[0] << 5);
    set32(c.r[2], c.r[29].w[0] + 104u);
    set32(c.r[5], c.r[29].w[0] + 96u);
    set32(c.r[3], 0u + 1u);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    c.r[6].d[0] = ld64((c.r[6].w[0] + 16u));
    st64((c.r[29].w[0] + 104u), c.r[6].d[0]);
    st64((c.r[16].w[0] + 256u), c.r[6].d[0]);
    c.r[2].d[0] = ld64((c.r[2].w[0]));
    st64((c.r[5].w[0]), c.r[2].d[0]);
    c.r[2].d[0] = ld8((c.r[29].w[0] + 99u));
    c.r[2].d[0] = c.r[2].d[0] << 58;
    c.r[2].d[0] = c.r[2].d[0] >> 60;
    set32(c.r[2], c.r[3].w[0] << (c.r[2].w[0] & 31u));
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[16].w[0] + 160u), c.f[0]);
    c.r[2].d[0] = ld64((c.r[29].w[0] + 96u));
    c.r[2].d[0] = c.r[2].d[0] << 30;
    c.r[2].d[0] = c.r[2].d[0] >> 60;
    set32(c.r[2], c.r[3].w[0] << (c.r[2].w[0] & 31u));
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[16].w[0] + 164u), c.f[0]);
    set32(c.r[5], ld32((c.r[18].w[0] + 52u)));
    c.budget -= 30;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D1F1Cu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0074(c, 174u, depth + 1u); else { c.pc = 0x002D2070u; return; } if (c.pc != 0x002D1F1Cu) [[unlikely]] return; }
L_002D1F1C:
    set32(c.r[5], ld32((c.r[18].w[0] + 52u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull; c.f[20] = c.f[0];  if (t) { goto L_002D1F40; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D1F30u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0074(c, 173u, depth + 1u); else { c.pc = 0x002D1FA0u; return; } if (c.pc != 0x002D1F30u) [[unlikely]] return; }
L_002D1F30:
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[21] = fp::add(c.f[21], c.f[0]);
    c.budget -= 4;
L_002D1F40:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    set32(c.r[3], ld32((c.r[19].w[0] + 1492u)));
    c.f[0] = c.r[2].w[0];
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.f[12] = c.f[20];
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    fpu_div(c, 0u, c.f[21], c.f[0]);
    set32(c.r[6], c.r[3].w[0] + 32u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D1F6Cu); c.f[13] = c.f[0] ^ fp::kSign;  if (depth < kMaxDepth) unit_0074(c, 193u, depth + 1u); else { c.pc = 0x002D2590u; return; } if (c.pc != 0x002D1F6Cu) [[unlikely]] return; }
L_002D1F6C:
    st32((c.r[16].w[0] + 60u), 0u);
    c.budget -= 1;
L_002D1F70:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_002D1FA0:
    set32(c.r[2], 0u + 12u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 10u);  if (t) { goto L_002D1FB4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 20u);  if (t) { goto L_002D2060; } }
L_002D1FB4:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_002D1FE0; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 1492u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42B80000u);
    c.f[1] = c.r[2].w[0];
    c.f[0] = ld32((c.r[3].w[0] + 40u));
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D2060; } }
L_002D1FE0:
    set32(c.r[2], 0u + 11u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_002D2010; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 1492u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42F00000u);
    c.f[1] = c.r[2].w[0];
    c.f[0] = ld32((c.r[3].w[0] + 40u));
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D2060; } }
L_002D2010:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull; set32(c.r[2], 0u + 20u);  if (t) { goto L_002D2040; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[2].d[0]; set32(c.r[2], c.r[5].w[0] - 4u);  if (t) { goto L_002D203C; } }
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(4ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_002D203C; } }
    set32(c.r[2], 0u + 8u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_002D2048; } }
L_002D203C:
    set32(c.r[2], 0u + 20u);
    c.budget -= 1;
L_002D2040:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D2060; } }
L_002D2048:
    c.budget -= 2;
    { const bool t = c.r[5].sd[0] < 0; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002D2060; } }
    c.r[1].d[0] = c.r[5].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002D2060; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002D2060:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002D2070:
    set32(c.r[2], 0u + 12u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 10u);  if (t) { goto L_002D208C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D20D8; } }
L_002D208C:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != c.r[2].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);  if (t) { goto L_002D209C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[0] = ld32((c.r[1].w[0] - 24872u));  if (t) { goto L_002D20D8; } }
L_002D209C:
    set32(c.r[2], 0u + 11u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[2].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);  if (t) { goto L_002D20B0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[0] = ld32((c.r[1].w[0] - 24880u));  if (t) { goto L_002D20D8; } }
L_002D20B0:
    c.budget -= 2;
    { const bool t = c.r[5].sd[0] < 0; c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);  if (t) { goto L_002D20D4; } }
    c.r[1].d[0] = c.r[5].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002D20D4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D20D8; } }
L_002D20D4:
    c.f[0] = c.r[2].w[0];
    c.budget -= 1;
L_002D20D8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002D20E0:
    set32(c.r[2], 0u + 12u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 10u);  if (t) { goto L_002D20F4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002D2130; } }
L_002D20F4:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_002D2104; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002D2130; } }
L_002D2104:
    set32(c.r[2], 0u + 11u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 2u);  if (t) { goto L_002D2118; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D2130; } }
L_002D2118:
    c.budget -= 2;
    { const bool t = c.r[5].sd[0] < 0; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002D2130; } }
    c.r[1].d[0] = c.r[5].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002D2130; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002D2130:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002D2140:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[2], 0u + 12u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[2].d[0]; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_002D215C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] - 24976u);  if (t) { goto L_002D21B0; } }
L_002D215C:
    set32(c.r[2], 0u + 10u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[2].d[0];  if (t) { goto L_002D2174; } }
    set32(c.r[2], 0u + 11u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 13u);  if (t) { goto L_002D2180; } }
L_002D2174:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] - 24960u);  if (t) { goto L_002D21B0; } }
L_002D2180:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_002D2194; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] - 24944u);  if (t) { goto L_002D21B0; } }
L_002D2194:
    c.budget -= 2;
    { const bool t = c.r[5].sd[0] < 0; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002D21B0; } }
    c.r[1].d[0] = c.r[5].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[4], c.r[5].w[0] + 264u);  if (t) { goto L_002D21B0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D21B0u);  if (depth < kMaxDepth) unit_000B(c, 461u, depth + 1u); else { c.pc = 0x0012FD60u; return; } if (c.pc != 0x002D21B0u) [[unlikely]] return; }
L_002D21B0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002D21C0:
    set32(c.r[13], ld32((c.r[4].w[0] + 1488u)));
    c.r[8].d[0] = 0ull + 0ull;
    c.r[12].d[0] = 0ull + 0ull;
    c.r[11].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u - 1u);
    set32(c.r[3], c.r[11].w[0] << 4);
    c.budget -= 6;
L_002D21D8:
    set32(c.r[3], c.r[6].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0] + 24u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[7].d[0]; set32(c.r[10], c.r[3].w[0] + 24u);  if (t) { goto L_002D2230; } }
    c.r[3].d[0] = c.r[13].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002D2230; } }
    set32(c.r[9], ld32((c.r[10].w[0] + 4u)));
    set32(c.r[3], c.r[4].w[0] + c.r[9].w[0]);
    c.r[1].d[0] = c.r[3].sd[0] < c.r[13].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[3], c.r[13].w[0] - c.r[4].w[0]);  if (t) { goto L_002D2230; } }
    set32(c.r[8], ld32((c.r[10].w[0] + 8u)));
    set32(c.r[4], ld32((c.r[10].w[0] + 12u)));
    set32(c.r[4], c.r[4].w[0] - c.r[8].w[0]);
    mmi::mult(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    c.budget -= 6;
    { const bool t = c.r[9].d[0] != 0ull; mmi::div(c, 0, c.r[3].w[0], c.r[9].w[0]);  if (t) { goto L_002D2224; } }
    breakpoint(c, 0x002D2220u);
    c.budget -= 1;
L_002D2224:
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[12], 0u + 1u);
    set32(c.r[8], c.r[8].w[0] + c.r[3].w[0]);
    c.budget -= 3;
L_002D2230:
    set32(c.r[11], c.r[11].w[0] + 1u);
    c.r[3].d[0] = c.r[11].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], c.r[11].w[0] << 4);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002D21D8u | kUnwind; return; } goto L_002D21D8; } }
    c.budget -= 2;
    { const bool t = c.r[12].d[0] == 0ull;  if (t) { goto L_002D2254; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_002D2254; } }
    st32((c.r[5].w[0] + 60u), c.r[8].w[0]);
    c.budget -= 1;
L_002D2254:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002D2260:
    set32(c.r[13], ld32((c.r[4].w[0] + 1488u)));
    c.r[8].d[0] = 0ull + 0ull;
    c.r[12].d[0] = 0ull + 0ull;
    c.r[11].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u - 1u);
    set32(c.r[3], c.r[11].w[0] << 4);
    c.budget -= 6;
L_002D2278:
    set32(c.r[3], c.r[6].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0] + 24u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[7].d[0]; set32(c.r[10], c.r[3].w[0] + 24u);  if (t) { goto L_002D22D0; } }
    c.r[3].d[0] = c.r[13].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002D22D0; } }
    set32(c.r[9], ld32((c.r[10].w[0] + 4u)));
    set32(c.r[3], c.r[4].w[0] + c.r[9].w[0]);
    c.r[1].d[0] = c.r[3].sd[0] < c.r[13].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[3], c.r[13].w[0] - c.r[4].w[0]);  if (t) { goto L_002D22D0; } }
    set32(c.r[8], ld32((c.r[10].w[0] + 8u)));
    set32(c.r[4], ld32((c.r[10].w[0] + 12u)));
    set32(c.r[4], c.r[4].w[0] - c.r[8].w[0]);
    mmi::mult(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    c.budget -= 6;
    { const bool t = c.r[9].d[0] != 0ull; mmi::div(c, 0, c.r[3].w[0], c.r[9].w[0]);  if (t) { goto L_002D22C4; } }
    breakpoint(c, 0x002D22C0u);
    c.budget -= 1;
L_002D22C4:
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[12], 0u + 1u);
    set32(c.r[8], c.r[8].w[0] + c.r[3].w[0]);
    c.budget -= 3;
L_002D22D0:
    set32(c.r[11], c.r[11].w[0] + 1u);
    c.r[3].d[0] = c.r[11].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], c.r[11].w[0] << 4);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002D2278u | kUnwind; return; } goto L_002D2278; } }
    c.budget -= 2;
    { const bool t = c.r[12].d[0] == 0ull;  if (t) { goto L_002D22F4; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_002D22F4; } }
    st32((c.r[5].w[0] + 60u), c.r[8].w[0]);
    c.budget -= 1;
L_002D22F4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002D2300:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[2].w[0];
    c.f[13] = 0u;
    c.budget -= 6;
    {  goto L_002D2320; }
L_002D2320:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.f[0] = ld32((c.r[6].w[0] + 8u));
    c.f[1] = ld32((c.r[6].w[0] + 12u));
    c.f[0] = fp::mul(c.f[0], c.f[12]);
    st32((c.r[5].w[0] + 16u), c.f[0]);
    st32((c.r[5].w[0] + 20u), c.f[1]);
    st32((c.r[5].w[0] + 24u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[6].w[0] + 20u)));
    c.budget -= 12;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_002D237C; } }
    c.f[0] = ld32((c.r[6].w[0]));
    set32(c.r[25], ld32((c.r[5].w[0] + 176u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[14] = ld32((c.r[1].w[0] - 24864u));
    c.f[12] = fp::add(c.f[0], c.f[13]);
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.f[13] = ld32((c.r[6].w[0] + 4u));
    c.budget -= 9;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002D2374u); c.r[4].d[0] = c.r[5].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002D2374u) [[unlikely]] return; }
L_002D2374:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_002D23E4; } }
L_002D237C:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002D23B0; } }
    c.f[0] = ld32((c.r[6].w[0]));
    set32(c.r[25], ld32((c.r[5].w[0] + 176u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[14] = ld32((c.r[1].w[0] - 24864u));
    c.f[12] = fp::add(c.f[0], c.f[13]);
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.f[13] = ld32((c.r[6].w[0] + 4u));
    c.budget -= 9;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002D23A8u); c.r[4].d[0] = c.r[5].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002D23A8u) [[unlikely]] return; }
L_002D23A8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D23E0; } }
L_002D23B0:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002D23E0; } }
    c.f[0] = ld32((c.r[6].w[0]));
    set32(c.r[25], ld32((c.r[5].w[0] + 176u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[14] = ld32((c.r[1].w[0] - 24864u));
    c.f[12] = fp::add(c.f[0], c.f[13]);
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.f[13] = ld32((c.r[6].w[0] + 4u));
    c.budget -= 9;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002D23E0u); c.r[4].d[0] = c.r[5].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002D23E0u) [[unlikely]] return; }
L_002D23E0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_002D23E4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002D23F0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    set32(c.r[3], 0u + 1u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[29].w[0] + 8u), c.f[22]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    c.f[0] = ld32((c.r[6].w[0] + 8u));
    c.f[22] = c.f[12];
    c.f[1] = ld32((c.r[6].w[0] + 12u));
    c.f[21] = c.f[13];
    c.f[20] = c.f[14];
    c.f[0] = fp::mul(c.f[0], c.f[22]);
    st32((c.r[5].w[0] + 16u), c.f[0]);
    st32((c.r[5].w[0] + 20u), c.f[1]);
    c.budget -= 21;
    { const bool t = c.r[7].d[0] != c.r[3].d[0]; st32((c.r[5].w[0] + 24u), c.r[4].w[0]);  if (t) { goto L_002D24A8; } }
    c.f[1] = ld32((c.r[16].w[0] + 16u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_002D24A8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D2464u);  if (depth < kMaxDepth) unit_0018(c, 67u, depth + 1u); else { c.pc = 0x00162250u; return; } if (c.pc != 0x002D2464u) [[unlikely]] return; }
L_002D2464:
    c.f[0] = c.r[2].w[0];
    c.f[1] = ld32((c.r[16].w[0] + 16u));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002D24A8; } }
    fpu_div(c, 1u, c.f[1], c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = ld32((c.r[16].w[0] + 8u));
    c.f[2] = ld32((c.r[16].w[0] + 12u));
    c.f[0] = fp::mul(c.f[0], c.f[22]);
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    st32((c.r[17].w[0] + 16u), c.f[0]);
    st32((c.r[17].w[0] + 20u), c.f[2]);
    st32((c.r[17].w[0] + 24u), c.r[3].w[0]);
    c.budget -= 11;
L_002D24A8:
    set32(c.r[4], ld32((c.r[16].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_002D24E4; } }
    set32(c.r[25], ld32((c.r[17].w[0] + 176u)));
    c.f[1] = ld32((c.r[16].w[0]));
    c.f[0] = ld32((c.r[16].w[0] + 4u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[14] = ld32((c.r[1].w[0] - 24864u));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.f[12] = fp::add(c.f[1], c.f[21]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002D24DCu); c.f[13] = fp::add(c.f[0], c.f[20]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002D24DCu) [[unlikely]] return; }
L_002D24DC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_002D2554; } }
L_002D24E4:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002D251C; } }
    set32(c.r[25], ld32((c.r[17].w[0] + 176u)));
    c.f[1] = ld32((c.r[16].w[0]));
    c.f[0] = ld32((c.r[16].w[0] + 4u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[14] = ld32((c.r[1].w[0] - 24864u));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.f[12] = fp::add(c.f[1], c.f[21]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002D2514u); c.f[13] = fp::add(c.f[0], c.f[20]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002D2514u) [[unlikely]] return; }
L_002D2514:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D2550; } }
L_002D251C:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002D2550; } }
    set32(c.r[25], ld32((c.r[17].w[0] + 176u)));
    c.f[1] = ld32((c.r[16].w[0]));
    c.f[0] = ld32((c.r[16].w[0] + 4u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[14] = ld32((c.r[1].w[0] - 24864u));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.f[12] = fp::add(c.f[1], c.f[21]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002D2550u); c.f[13] = fp::add(c.f[0], c.f[20]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002D2550u) [[unlikely]] return; }
L_002D2550:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_002D2554:
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002D2570:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[2].w[0];
    c.f[13] = 0u;
    c.budget -= 6;
    {  goto L_002D2590; }
L_002D2590:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.f[0] = ld32((c.r[6].w[0] + 8u));
    c.f[1] = ld32((c.r[6].w[0] + 12u));
    c.f[0] = fp::mul(c.f[0], c.f[12]);
    st32((c.r[5].w[0] + 16u), c.f[0]);
    st32((c.r[5].w[0] + 20u), c.f[1]);
    st32((c.r[5].w[0] + 24u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[6].w[0] + 20u)));
    c.budget -= 12;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_002D25EC; } }
    c.f[0] = ld32((c.r[6].w[0]));
    set32(c.r[25], ld32((c.r[5].w[0] + 176u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[14] = ld32((c.r[1].w[0] - 24864u));
    c.f[12] = fp::add(c.f[0], c.f[13]);
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.f[13] = ld32((c.r[6].w[0] + 4u));
    c.budget -= 9;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002D25E4u); c.r[4].d[0] = c.r[5].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002D25E4u) [[unlikely]] return; }
L_002D25E4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_002D2654; } }
L_002D25EC:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002D2620; } }
    c.f[0] = ld32((c.r[6].w[0]));
    set32(c.r[25], ld32((c.r[5].w[0] + 176u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[14] = ld32((c.r[1].w[0] - 24864u));
    c.f[12] = fp::add(c.f[0], c.f[13]);
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.f[13] = ld32((c.r[6].w[0] + 4u));
    c.budget -= 9;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002D2618u); c.r[4].d[0] = c.r[5].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002D2618u) [[unlikely]] return; }
L_002D2618:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D2650; } }
L_002D2620:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002D2650; } }
    c.f[0] = ld32((c.r[6].w[0]));
    set32(c.r[25], ld32((c.r[5].w[0] + 176u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[14] = ld32((c.r[1].w[0] - 24864u));
    c.f[12] = fp::add(c.f[0], c.f[13]);
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.f[13] = ld32((c.r[6].w[0] + 4u));
    c.budget -= 9;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002D2650u); c.r[4].d[0] = c.r[5].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002D2650u) [[unlikely]] return; }
L_002D2650:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_002D2654:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002D2660:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.f[0] = ld32((c.r[6].w[0] + 8u));
    c.f[1] = ld32((c.r[6].w[0] + 12u));
    c.f[0] = fp::mul(c.f[0], c.f[12]);
    st32((c.r[5].w[0] + 16u), c.f[0]);
    st32((c.r[5].w[0] + 20u), c.f[1]);
    st32((c.r[5].w[0] + 24u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[6].w[0] + 20u)));
    c.budget -= 12;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_002D26C0; } }
    c.f[1] = ld32((c.r[6].w[0]));
    set32(c.r[25], ld32((c.r[5].w[0] + 176u)));
    c.f[0] = ld32((c.r[6].w[0] + 4u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[12] = fp::add(c.f[1], c.f[13]);
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.f[13] = fp::add(c.f[0], c.f[14]);
    c.f[14] = ld32((c.r[1].w[0] - 24864u));
    c.budget -= 10;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002D26B8u); c.r[4].d[0] = c.r[5].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002D26B8u) [[unlikely]] return; }
L_002D26B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_002D2730; } }
L_002D26C0:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002D26F8; } }
    c.f[1] = ld32((c.r[6].w[0]));
    set32(c.r[25], ld32((c.r[5].w[0] + 176u)));
    c.f[0] = ld32((c.r[6].w[0] + 4u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[12] = fp::add(c.f[1], c.f[13]);
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.f[13] = fp::add(c.f[0], c.f[14]);
    c.f[14] = ld32((c.r[1].w[0] - 24864u));
    c.budget -= 10;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002D26F0u); c.r[4].d[0] = c.r[5].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002D26F0u) [[unlikely]] return; }
L_002D26F0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D272C; } }
L_002D26F8:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002D272C; } }
    c.f[1] = ld32((c.r[6].w[0]));
    set32(c.r[25], ld32((c.r[5].w[0] + 176u)));
    c.f[0] = ld32((c.r[6].w[0] + 4u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[12] = fp::add(c.f[1], c.f[13]);
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.f[13] = fp::add(c.f[0], c.f[14]);
    c.f[14] = ld32((c.r[1].w[0] - 24864u));
    c.budget -= 10;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002D272Cu); c.r[4].d[0] = c.r[5].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002D272Cu) [[unlikely]] return; }
L_002D272C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_002D2730:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002D2740:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[5], 0u + 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 52u));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != c.r[5].d[0];  if (t) { goto L_002D27C4; } }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 88u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[5].d[0];  if (t) { goto L_002D27C4; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 1500u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002D2784; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D277Cu);  if (depth < kMaxDepth) unit_0074(c, 206u, depth + 1u); else { c.pc = 0x002D27D0u; return; } if (c.pc != 0x002D277Cu) [[unlikely]] return; }
L_002D277C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_002D27BC; } }
L_002D2784:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[5].d[0]; set32(c.r[2], 0u + 4u);  if (t) { goto L_002D2794; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002D27A4; } }
L_002D2794:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D279Cu);  if (depth < kMaxDepth) unit_0074(c, 224u, depth + 1u); else { c.pc = 0x002D2A60u; return; } if (c.pc != 0x002D279Cu) [[unlikely]] return; }
L_002D279C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D27B8; } }
L_002D27A4:
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002D27B8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D27B8u);  if (depth < kMaxDepth) unit_0074(c, 235u, depth + 1u); else { c.pc = 0x002D2BA0u; return; } if (c.pc != 0x002D27B8u) [[unlikely]] return; }
L_002D27B8:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002D27BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D27C4u);  if (depth < kMaxDepth) unit_0002(c, 580u, depth + 1u); else { c.pc = 0x0010BEA0u; return; } if (c.pc != 0x002D27C4u) [[unlikely]] return; }
L_002D27C4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002D27D0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    set32(c.r[2], 0u + 212u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[1].w[0] - 24392u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], ld32((c.r[5].w[0] + 92u)));
    set32(c.r[3], ld32((c.r[1].w[0] - 24400u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 120u)));
    mmi::mult(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[5].w[0] + c.r[2].w[0]);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D2814u); set32(c.r[16], c.r[2].w[0] + 136u);  if (depth < kMaxDepth) unit_0019(c, 312u, depth + 1u); else { c.pc = 0x00167330u; return; } if (c.pc != 0x002D2814u) [[unlikely]] return; }
L_002D2814:
    c.r[4].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[3], 0u + 3046u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 3246u);  if (t) { goto L_002D29E4; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002D29E4; } }
    c.r[4].d[0] = ld8((c.r[17].w[0] + 52u));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002D29E4; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 1484u)));
    set32(c.r[3], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002D29E4; } }
    set32(c.r[18], ld32((c.r[17].w[0] + 916u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D2858u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0018(c, 67u, depth + 1u); else { c.pc = 0x00162250u; return; } if (c.pc != 0x002D2858u) [[unlikely]] return; }
L_002D2858:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_002D2874; } }
    set32(c.r[25], ld32((c.r[18].w[0] + 176u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 60u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002D2874u); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002D2874u) [[unlikely]] return; }
L_002D2874:
    set32(c.r[18], ld32((c.r[17].w[0] + 920u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D2880u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0018(c, 67u, depth + 1u); else { c.pc = 0x00162250u; return; } if (c.pc != 0x002D2880u) [[unlikely]] return; }
L_002D2880:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_002D289C; } }
    set32(c.r[25], ld32((c.r[18].w[0] + 176u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 60u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002D289Cu); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002D289Cu) [[unlikely]] return; }
L_002D289C:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 10u)));
    set32(c.r[3], 0u + 25500u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002D28D4; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 924u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 60u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002D28C0u); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002D28C0u) [[unlikely]] return; }
L_002D28C0:
    set32(c.r[4], ld32((c.r[17].w[0] + 928u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 60u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002D28D4u); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002D28D4u) [[unlikely]] return; }
L_002D28D4:
    set32(c.r[4], ld32((c.r[17].w[0] + 1496u)));
    set32(c.r[3], 0u + 12u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002D2930; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 1204u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 56u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002D28F8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002D28F8u) [[unlikely]] return; }
L_002D28F8:
    set32(c.r[4], ld32((c.r[17].w[0] + 1208u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 56u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002D290Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002D290Cu) [[unlikely]] return; }
L_002D290C:
    set32(c.r[4], ld32((c.r[16].w[0] + 52u)));
    set32(c.r[3], 0u + 14u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002D2930; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 1212u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 56u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002D2930u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002D2930u) [[unlikely]] return; }
L_002D2930:
    set32(c.r[4], ld32((c.r[16].w[0] + 52u)));
    set32(c.r[3], 0u + 14u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002D29CC; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 932u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 60u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002D2954u); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002D2954u) [[unlikely]] return; }
L_002D2954:
    set32(c.r[4], ld32((c.r[17].w[0] + 1496u)));
    set32(c.r[3], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002D2978; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 936u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 60u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002D2978u); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002D2978u) [[unlikely]] return; }
L_002D2978:
    set32(c.r[4], ld32((c.r[16].w[0] + 52u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[3], 0u + 2u);  if (t) { goto L_002D29B8; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002D29B8; } }
    set32(c.r[3], c.r[4].w[0] - 4u);
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(5ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[3], 0u + 12u);  if (t) { goto L_002D29B8; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002D29B8; } }
    set32(c.r[3], 0u + 10u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 11u);  if (t) { goto L_002D29B8; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002D29CC; } }
L_002D29B8:
    set32(c.r[4], ld32((c.r[17].w[0] + 1200u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 56u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002D29CCu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002D29CCu) [[unlikely]] return; }
L_002D29CC:
    set32(c.r[4], ld32((c.r[17].w[0] + 1496u)));
    set32(c.r[3], 0u + 7u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_002D29E4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D29E4u);  if (depth < kMaxDepth) unit_0074(c, 221u, depth + 1u); else { c.pc = 0x002D2A00u; return; } if (c.pc != 0x002D29E4u) [[unlikely]] return; }
L_002D29E4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002D2A00:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 6;
L_002D2A18:
    set32(c.r[2], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 940u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 60u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002D2A34u); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002D2A34u) [[unlikely]] return; }
L_002D2A34:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[3].d[0] = c.r[16].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002D2A18u | kUnwind; return; } goto L_002D2A18; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002D2A60:
    set32(c.r[29], c.r[29].w[0] - 416u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[3], 0u + 1999u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], ld32((c.r[1].w[0] - 24392u)));
    set32(c.r[4], ld32((c.r[4].w[0] + 100u)));
    c.budget -= 10;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[4], c.r[29].w[0] + 48u);  if (t) { goto L_002D2B88; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D2A90u);  if (depth < kMaxDepth) unit_0018(c, 27u, depth + 1u); else { c.pc = 0x00161280u; return; } if (c.pc != 0x002D2A90u) [[unlikely]] return; }
L_002D2A90:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[4], c.r[29].w[0] + 48u);
    set32(c.r[5], c.r[5].w[0] - 24928u);
    set32(c.r[6], c.r[6].w[0] - 24912u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D2AB0u); set32(c.r[7], c.r[7].w[0] - 24896u);  if (depth < kMaxDepth) unit_0018(c, 14u, depth + 1u); else { c.pc = 0x001609B0u; return; } if (c.pc != 0x002D2AB0u) [[unlikely]] return; }
L_002D2AB0:
    set32(c.r[17], c.r[29].w[0] + 208u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x44000000u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[16], c.r[29].w[0] + 212u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42840000u);
    set32(c.r[4], c.r[29].w[0] + 48u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    set32(c.r[5], 0u + 30u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D2AD8u); set32(c.r[6], 0u + 36u);  if (depth < kMaxDepth) unit_0018(c, 37u, depth + 1u); else { c.pc = 0x00161410u; return; } if (c.pc != 0x002D2AD8u) [[unlikely]] return; }
L_002D2AD8:
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    c.r[2].d[0] = c.r[2].d[0] | 65296ull;
    c.f[0] = c.r[2].w[0];
    c.f[12] = 0u;
    c.f[14] = fp::cvt_s_w(c.f[0]);
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 10;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002D2B00u); c.f[13] = c.f[12];  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002D2B00u) [[unlikely]] return; }
L_002D2B00:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D2B08u); set32(c.r[4], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0018(c, 39u, depth + 1u); else { c.pc = 0x00161460u; return; } if (c.pc != 0x002D2B08u) [[unlikely]] return; }
L_002D2B08:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[4], c.r[29].w[0] + 48u);
    set32(c.r[5], c.r[5].w[0] - 24896u);
    set32(c.r[6], c.r[6].w[0] - 24912u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D2B28u); set32(c.r[7], c.r[7].w[0] - 24928u);  if (depth < kMaxDepth) unit_0018(c, 14u, depth + 1u); else { c.pc = 0x001609B0u; return; } if (c.pc != 0x002D2B28u) [[unlikely]] return; }
L_002D2B28:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x44000000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42E40000u);
    st32((c.r[17].w[0]), c.r[3].w[0]);
    set32(c.r[4], c.r[29].w[0] + 48u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    set32(c.r[5], 0u + 24u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D2B48u); set32(c.r[6], 0u + 90u);  if (depth < kMaxDepth) unit_0018(c, 37u, depth + 1u); else { c.pc = 0x00161410u; return; } if (c.pc != 0x002D2B48u) [[unlikely]] return; }
L_002D2B48:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43A80000u);
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.f[13] = c.r[2].w[0];
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    c.f[12] = 0u;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65296ull;
    c.f[0] = c.r[2].w[0];
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 11;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002D2B74u); c.f[14] = fp::cvt_s_w(c.f[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002D2B74u) [[unlikely]] return; }
L_002D2B74:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D2B7Cu); set32(c.r[4], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0018(c, 39u, depth + 1u); else { c.pc = 0x00161460u; return; } if (c.pc != 0x002D2B7Cu) [[unlikely]] return; }
L_002D2B7C:
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D2B88u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0018(c, 29u, depth + 1u); else { c.pc = 0x001612C0u; return; } if (c.pc != 0x002D2B88u) [[unlikely]] return; }
L_002D2B88:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 416u);  c.pc = t; return; }
L_002D2BA0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002D2BB0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[5], 0u + 6u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D2BCCu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_000F(c, 264u, depth + 1u); else { c.pc = 0x0013E560u; return; } if (c.pc != 0x002D2BCCu) [[unlikely]] return; }
L_002D2BCC:
    set32(c.r[4], c.r[17].w[0] + 12u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D2BD8u); set32(c.r[5], 0u + 4u);  if (depth < kMaxDepth) unit_000F(c, 256u, depth + 1u); else { c.pc = 0x0013E440u; return; } if (c.pc != 0x002D2BD8u) [[unlikely]] return; }
L_002D2BD8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 12064u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00160000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00140000u);
    set32(c.r[2], c.r[2].w[0] + 12080u);
    st32((c.r[17].w[0]), c.r[3].w[0]);
    set32(c.r[4], c.r[17].w[0] + 32u);
    st32((c.r[17].w[0] + 12u), c.r[2].w[0]);
    set32(c.r[5], c.r[5].w[0] - 8080u);
    set32(c.r[6], c.r[6].w[0] - 20016u);
    set32(c.r[7], 0u + 256u);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D2C10u); set32(c.r[8], 0u + 2u);  if (depth < kMaxDepth) unit_0000(c, 89u, depth + 1u); else { c.pc = 0x00100790u; return; } if (c.pc != 0x002D2C10u) [[unlikely]] return; }
L_002D2C10:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], ld32((c.r[1].w[0] - 24392u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002D2C28; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_002D2D50; } }
L_002D2C28:
    set32(c.r[4], ld32((c.r[2].w[0] + 92u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002D2C3C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_002D2D50; } }
L_002D2C3C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D2C44u);  if (depth < kMaxDepth) unit_0019(c, 312u, depth + 1u); else { c.pc = 0x00167330u; return; } if (c.pc != 0x002D2C44u) [[unlikely]] return; }
L_002D2C44:
    c.r[3].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[2], 0u + 3046u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);  if (t) { goto L_002D2C60; } }
    set32(c.r[2], 0u + 3246u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_002D2D50; } }
L_002D2C60:
    set32(c.r[2], ld32((c.r[1].w[0] - 24392u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D2C6Cu); set32(c.r[4], ld32((c.r[2].w[0] + 92u)));  if (depth < kMaxDepth) unit_0019(c, 312u, depth + 1u); else { c.pc = 0x00167330u; return; } if (c.pc != 0x002D2C6Cu) [[unlikely]] return; }
L_002D2C6C:
    c.r[3].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[2], 0u + 3046u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_002D2C88; } }
    set32(c.r[2], 0u + 3246u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002D2D4C; } }
L_002D2C88:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002D2CE4; } }
    set32(c.r[3], c.r[16].w[0] << 8);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x44000000u);
    set32(c.r[5], c.r[17].w[0] + c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    st32((c.r[5].w[0] + 192u), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42680000u);
    st32((c.r[5].w[0] + 196u), c.r[3].w[0]);
    c.f[12] = 0u;
    st32((c.r[5].w[0] + 80u), 0u);
    set32(c.r[2], 0u + 255u);
    st32((c.r[5].w[0] + 84u), 0u);
    set32(c.r[4], c.r[5].w[0] + 32u);
    st32((c.r[5].w[0] + 88u), 0u);
    st32((c.r[5].w[0] + 92u), c.r[2].w[0]);
    set32(c.r[25], ld32((c.r[5].w[0] + 208u)));
    c.f[14] = ld32((c.r[1].w[0] - 24864u));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 19;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002D2CDCu); c.f[13] = c.f[12];  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002D2CDCu) [[unlikely]] return; }
L_002D2CDC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[16].w[0] + 1u);  if (t) { goto L_002D2D40; } }
L_002D2CE4:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != c.r[2].d[0];  if (t) { goto L_002D2D3C; } }
    set32(c.r[2], c.r[16].w[0] << 8);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x44000000u);
    set32(c.r[5], c.r[17].w[0] + c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    st32((c.r[5].w[0] + 192u), c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42F40000u);
    st32((c.r[5].w[0] + 196u), c.r[2].w[0]);
    set32(c.r[3], 0u + 255u);
    st32((c.r[5].w[0] + 80u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43C30000u);
    st32((c.r[5].w[0] + 84u), 0u);
    c.f[12] = 0u;
    st32((c.r[5].w[0] + 88u), 0u);
    c.f[13] = c.r[2].w[0];
    st32((c.r[5].w[0] + 92u), c.r[3].w[0]);
    set32(c.r[25], ld32((c.r[5].w[0] + 208u)));
    c.f[14] = ld32((c.r[1].w[0] - 24864u));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 20;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002D2D3Cu); set32(c.r[4], c.r[5].w[0] + 32u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002D2D3Cu) [[unlikely]] return; }
L_002D2D3C:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_002D2D40:
    c.r[2].d[0] = c.r[16].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002D2C88u | kUnwind; return; } goto L_002D2C88; } }
L_002D2D4C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002D2D50:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002D2D70:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002D2DEC; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 12064u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00140000u);
    set32(c.r[2], c.r[2].w[0] + 12080u);
    st32((c.r[17].w[0]), c.r[3].w[0]);
    set32(c.r[4], c.r[17].w[0] + 32u);
    st32((c.r[17].w[0] + 12u), c.r[2].w[0]);
    set32(c.r[5], c.r[5].w[0] - 20016u);
    set32(c.r[6], 0u + 256u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D2DBCu); set32(c.r[7], 0u + 2u);  if (depth < kMaxDepth) unit_0000(c, 86u, depth + 1u); else { c.pc = 0x00100720u; return; } if (c.pc != 0x002D2DBCu) [[unlikely]] return; }
L_002D2DBC:
    set32(c.r[4], c.r[17].w[0] + 12u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D2DC8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E490u; return; } if (c.pc != 0x002D2DC8u) [[unlikely]] return; }
L_002D2DC8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D2DD4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000F(c, 266u, depth + 1u); else { c.pc = 0x0013E5B0u; return; } if (c.pc != 0x002D2DD4u) [[unlikely]] return; }
L_002D2DD4:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_002D2DF0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D2DECu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x002D2DECu) [[unlikely]] return; }
L_002D2DEC:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002D2DF0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002D2E10:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[1].w[0] - 24392u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002D2E78; } }
    set32(c.r[4], ld32((c.r[3].w[0] + 92u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002D2E78; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D2E40u);  if (depth < kMaxDepth) unit_0019(c, 312u, depth + 1u); else { c.pc = 0x00167330u; return; } if (c.pc != 0x002D2E40u) [[unlikely]] return; }
L_002D2E40:
    c.r[4].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[3], 0u + 3046u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 3246u);  if (t) { goto L_002D2E58; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002D2E78; } }
L_002D2E58:
    set32(c.r[25], ld32((c.r[16].w[0] + 208u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 56u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002D2E68u); set32(c.r[4], c.r[16].w[0] + 32u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002D2E68u) [[unlikely]] return; }
L_002D2E68:
    set32(c.r[25], ld32((c.r[16].w[0] + 464u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 56u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002D2E78u); set32(c.r[4], c.r[16].w[0] + 288u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002D2E78u) [[unlikely]] return; }
L_002D2E78:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002D2E90:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002D2EA0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002D2740u | kUnwind; return; } goto L_002D2740; }
L_002D2EB0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002CF7F0u | kUnwind; return; } [[clang::musttail]] return unit_0073(c, 372u, depth); }
L_002D2EC0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 44u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002CFD40u | kUnwind; return; } [[clang::musttail]] return unit_0073(c, 411u, depth); }
L_002D2ED0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 44u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002CF7F0u | kUnwind; return; } [[clang::musttail]] return unit_0073(c, 372u, depth); }
L_002D2EE0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 12u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002D2E90u | kUnwind; return; } goto L_002D2E90; }
L_002D2EF0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 12u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002D2D70u | kUnwind; return; } goto L_002D2D70; }
L_002D2F00:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00150000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00150000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[5], c.r[5].w[0] - 27472u);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[6], c.r[6].w[0] - 27424u);
    set32(c.r[7], 0u + 36u);
    set32(c.r[8], 0u + 2u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D2F30u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0000(c, 89u, depth + 1u); else { c.pc = 0x00100790u; return; } if (c.pc != 0x002D2F30u) [[unlikely]] return; }
L_002D2F30:
    st32((c.r[17].w[0] + 72u), 0u);
    set32(c.r[16], c.r[17].w[0] + 72u);
    st32((c.r[17].w[0] + 76u), 0u);
    st32((c.r[17].w[0] + 80u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 72u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 80u)));
    set32(c.r[3], c.r[2].w[0] - c.r[4].w[0]);
    c.budget -= 9;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 5));  if (t) { goto L_002D2F5C; } }
    set32(c.r[2], c.r[3].w[0] + 31u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 5));
    c.budget -= 2;
L_002D2F5C:
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002D2FC0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002D2F8C; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002D2F80; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D2F80u); set32(c.r[4], c.r[4].w[0] - 16u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100210u; return; } if (c.pc != 0x002D2F80u) [[unlikely]] return; }
L_002D2F80:
    st32((c.r[16].w[0] + 8u), 0u);
    st32((c.r[16].w[0] + 4u), 0u);
    st32((c.r[16].w[0]), 0u);
    c.budget -= 3;
L_002D2F8C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D2F94u); set32(c.r[4], 0u + 80u);  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x001001F0u; return; } if (c.pc != 0x002D2F94u) [[unlikely]] return; }
L_002D2F94:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00180000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 176u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u + 32u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D2FB0u); set32(c.r[8], 0u + 2u);  if (depth < kMaxDepth) unit_0000(c, 94u, depth + 1u); else { c.pc = 0x001008C0u; return; } if (c.pc != 0x002D2FB0u) [[unlikely]] return; }
L_002D2FB0:
    st32((c.r[16].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] + 64u);
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 4;
L_002D2FC0:
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 64u);
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 172u), 0u);
    st8((c.r[17].w[0] + 180u), static_cast<std::uint8_t>(0u));
    c.budget -= 6;
L_002D2FD8:
    set32(c.r[2], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st32((c.r[3].w[0] + 84u), 0u);
    c.r[2].d[0] = c.r[4].sd[0] < 11ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[3].w[0] + 128u), 0u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002D2FD8u | kUnwind; return; } goto L_002D2FD8; } }
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002D3010:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002D30A0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D3034u);  if (depth < kMaxDepth) unit_0074(c, 298u, depth + 1u); else { c.pc = 0x002D3420u; return; } if (c.pc != 0x002D3034u) [[unlikely]] return; }
L_002D3034:
    set32(c.r[2], c.r[17].w[0] + 72u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D3070; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D3070; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 72u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D3070; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[2].w[0] - 16u);  if (t) { goto L_002D3064; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D3064u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100210u; return; } if (c.pc != 0x002D3064u) [[unlikely]] return; }
L_002D3064:
    st32((c.r[17].w[0] + 80u), 0u);
    st32((c.r[17].w[0] + 76u), 0u);
    st32((c.r[17].w[0] + 72u), 0u);
    c.budget -= 3;
L_002D3070:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00150000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 27424u);
    set32(c.r[6], 0u + 36u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D3088u); set32(c.r[7], 0u + 2u);  if (depth < kMaxDepth) unit_0000(c, 86u, depth + 1u); else { c.pc = 0x00100720u; return; } if (c.pc != 0x002D3088u) [[unlikely]] return; }
L_002D3088:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_002D30A4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D30A0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x002D30A0u) [[unlikely]] return; }
L_002D30A0:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002D30A4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002D30C0:
    set32(c.r[2], 0u + 1u);
    st8((c.r[4].w[0] + 180u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[4].w[0] + 176u), c.r[5].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 172u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;  c.pc = t; return; }
L_002D30E0:
    set32(c.r[29], c.r[29].w[0] - 176u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[3].d[0] = ld8((c.r[4].w[0] + 180u));
    c.budget -= 13;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_002D3394; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D311Cu);  if (depth < kMaxDepth) unit_0074(c, 298u, depth + 1u); else { c.pc = 0x002D3420u; return; } if (c.pc != 0x002D311Cu) [[unlikely]] return; }
L_002D311C:
    set32(c.r[2], c.r[16].w[0] << 2);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[3], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[4], ld32((c.r[18].w[0] + 176u)));
    set32(c.r[2], ld32((c.r[1].w[0] + 3840u)));
    set32(c.r[3], c.r[3].w[0] << 1);
    c.r[16].d[0] = c.r[3].d[0] & 65535ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D3140u); st32((c.r[29].w[0] + 172u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x002D3140u) [[unlikely]] return; }
L_002D3140:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D3148u); set32(c.r[4], 0u + 12u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x002D3148u) [[unlikely]] return; }
L_002D3148:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002D315C; } }
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D315Cu); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 127u, depth + 1u); else { c.pc = 0x0015D890u; return; } if (c.pc != 0x002D315Cu) [[unlikely]] return; }
L_002D315C:
    st32((c.r[18].w[0] + 172u), c.r[2].w[0]);
    set32(c.r[3], c.r[29].w[0] + 160u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], 0u + 8u);  if (t) { goto L_002D3188; } }
L_002D316C:
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[2], c.r[2].w[0] - 1u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002D316Cu | kUnwind; return; } goto L_002D316C; } }
L_002D3188:
    c.r[20].d[0] = c.r[16].d[0] & 65535ull;
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_002D3190:
    set32(c.r[19], ld32((c.r[18].w[0] + 172u)));
    c.r[5].d[0] = c.r[16].d[0] & 65535ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D31A0u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 122u, depth + 1u); else { c.pc = 0x0015D740u; return; } if (c.pc != 0x002D31A0u) [[unlikely]] return; }
L_002D31A0:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_002D31BC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D31B4u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 142u, depth + 1u); else { c.pc = 0x0015DA70u; return; } if (c.pc != 0x002D31B4u) [[unlikely]] return; }
L_002D31B4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D31C0; } }
L_002D31BC:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002D31C0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D32D4; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002D31E0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D31D8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0012(c, 295u, depth + 1u); else { c.pc = 0x0014B6A0u; return; } if (c.pc != 0x002D31D8u) [[unlikely]] return; }
L_002D31D8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002D31E8; } }
L_002D31E0:
    c.r[2].d[0] = 0ull + 0ull;
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 2;
L_002D31E8:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[2].d[0] = ld64((c.r[2].w[0] + 24u));
    set32(c.r[5], c.r[29].w[0] + 152u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D31FCu); st64((c.r[29].w[0] + 152u), c.r[2].d[0]);  if (depth < kMaxDepth) unit_0074(c, 307u, depth + 1u); else { c.pc = 0x002D3550u; return; } if (c.pc != 0x002D31FCu) [[unlikely]] return; }
L_002D31FC:
    c.r[2].d[0] = ld8((c.r[19].w[0] + 18u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[8].d[0] = 0ull + 0ull;  if (t) { goto L_002D3210; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = ld16((c.r[19].w[0] + 12u));  if (t) { goto L_002D3224; } }
L_002D3210:
    c.r[3].d[0] = ld16((c.r[19].w[0] + 12u));
    set32(c.r[2], ld32((c.r[19].w[0] + 8u)));
    set32(c.r[3], c.r[19].w[0] + c.r[3].w[0]);
    set32(c.r[8], c.r[3].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = ld16((c.r[19].w[0] + 12u));
    c.budget -= 5;
L_002D3224:
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.r[6].d[0] = ld64((c.r[29].w[0] + 152u));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[7], c.r[19].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D323Cu); st128((c.r[29].w[0] + 112u) & ~15u, c.r[0]);  if (depth < kMaxDepth) unit_0020(c, 12u, depth + 1u); else { c.pc = 0x00180110u; return; } if (c.pc != 0x002D323Cu) [[unlikely]] return; }
L_002D323C:
    set32(c.r[7], ld32((c.r[18].w[0] + 72u)));
    set32(c.r[8], c.r[16].w[0] << 5);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[6]);
    set32(c.r[2], c.r[20].w[0] + c.r[16].w[0]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[3], c.r[29].w[0] + 128u);
    c.r[5].d[0] = c.r[2].d[0] & 65535ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);
    st128((c.r[7].w[0]) & ~15u, c.r[6]);
    ld128((c.r[3].w[0]) & ~15u, c.r[2]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D3270u); st128((c.r[7].w[0] + 16u) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_0017(c, 122u, depth + 1u); else { c.pc = 0x0015D740u; return; } if (c.pc != 0x002D3270u) [[unlikely]] return; }
L_002D3270:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_002D328C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D3284u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 152u, depth + 1u); else { c.pc = 0x0015DC50u; return; } if (c.pc != 0x002D3284u) [[unlikely]] return; }
L_002D3284:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[21].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002D3294; } }
L_002D328C:
    c.r[2].d[0] = 0ull + 0ull;
    c.r[21].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 2;
L_002D3294:
    c.budget -= 2;
    { const bool t = c.r[21].d[0] == 0ull;  if (t) { goto L_002D32D4; } }
    set32(c.r[2], c.r[16].w[0] << 3);
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] << 2);
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[19], c.r[18].w[0] + c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D32C0u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0012(c, 162u, depth + 1u); else { c.pc = 0x00149540u; return; } if (c.pc != 0x002D32C0u) [[unlikely]] return; }
L_002D32C0:
    set32(c.r[2], c.r[16].w[0] << 2);
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D32D4u); st32((c.r[2].w[0] + 160u), c.r[19].w[0]);  if (depth < kMaxDepth) unit_0010(c, 83u, depth + 1u); else { c.pc = 0x00141160u; return; } if (c.pc != 0x002D32D4u) [[unlikely]] return; }
L_002D32D4:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002D3190u | kUnwind; return; } goto L_002D3190; } }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002D32E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D32F0u); set32(c.r[4], 0u + 368u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x002D32F0u) [[unlikely]] return; }
L_002D32F0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], c.r[16].w[0] << 2);  if (t) { goto L_002D3318; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 72u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[29].w[0] + 160u)));
    c.r[7].d[0] = 0ull + 0ull;
    c.r[5].d[0] = ld64((c.r[3].w[0] + 16u));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D3314u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0018(c, 64u, depth + 1u); else { c.pc = 0x00162170u; return; } if (c.pc != 0x002D3314u) [[unlikely]] return; }
L_002D3314:
    set32(c.r[3], c.r[16].w[0] << 2);
    c.budget -= 1;
L_002D3318:
    set32(c.r[3], c.r[18].w[0] + c.r[3].w[0]);
    set32(c.r[16], c.r[16].w[0] + 1u);
    st32((c.r[3].w[0] + 84u), c.r[2].w[0]);
    c.r[2].d[0] = c.r[16].sd[0] < 11ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002D32E8u | kUnwind; return; } goto L_002D32E8; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 72u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 56u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_002D3388; } }
L_002D3340:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D3348u); set32(c.r[4], 0u + 368u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x002D3348u) [[unlikely]] return; }
L_002D3348:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], c.r[16].w[0] << 2);  if (t) { goto L_002D3370; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 72u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[29].w[0] + 164u)));
    c.r[7].d[0] = 0ull + 0ull;
    c.r[5].d[0] = ld64((c.r[3].w[0] + 48u));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D336Cu); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0018(c, 64u, depth + 1u); else { c.pc = 0x00162170u; return; } if (c.pc != 0x002D336Cu) [[unlikely]] return; }
L_002D336C:
    set32(c.r[3], c.r[16].w[0] << 2);
    c.budget -= 1;
L_002D3370:
    set32(c.r[3], c.r[18].w[0] + c.r[3].w[0]);
    set32(c.r[16], c.r[16].w[0] + 1u);
    st32((c.r[3].w[0] + 128u), c.r[2].w[0]);
    c.r[2].d[0] = c.r[16].sd[0] < 11ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002D3340u | kUnwind; return; } goto L_002D3340; } }
L_002D3388:
    st8((c.r[18].w[0] + 180u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D3394u); set32(c.r[4], ld32((c.r[29].w[0] + 172u)));  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x002D3394u) [[unlikely]] return; }
L_002D3394:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 176u);  c.pc = t; return; }
L_002D33C0:
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[7].w[0] << 2);
    c.budget -= 2;
L_002D33C8:
    set32(c.r[6], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[6].w[0] + 84u)));
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_002D33E8; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 72u)));
    c.r[3].d[0] = ld64((c.r[3].w[0] + 16u));
    st64((c.r[5].w[0] + 320u), c.r[3].d[0]);
    st64((c.r[5].w[0] + 328u), 0ull);
    c.budget -= 4;
L_002D33E8:
    set32(c.r[5], ld32((c.r[6].w[0] + 128u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_002D3404; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 72u)));
    c.r[3].d[0] = ld64((c.r[3].w[0] + 48u));
    st64((c.r[5].w[0] + 320u), c.r[3].d[0]);
    st64((c.r[5].w[0] + 328u), 0ull);
    c.budget -= 4;
L_002D3404:
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.r[3].d[0] = c.r[7].sd[0] < 11ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], c.r[7].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002D33C8u | kUnwind; return; } goto L_002D33C8; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002D3420:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 172u)));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002D3534; } }
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[16].w[0] << 3);
    c.budget -= 2;
L_002D344C:
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D345Cu); set32(c.r[4], c.r[17].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_0012(c, 169u, depth + 1u); else { c.pc = 0x00149820u; return; } if (c.pc != 0x002D345Cu) [[unlikely]] return; }
L_002D345C:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[16].w[0] << 3);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002D344Cu | kUnwind; return; } goto L_002D344C; } }
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[16].w[0] << 2);
    c.budget -= 2;
L_002D3474:
    set32(c.r[19], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[19].w[0] + 128u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[18], c.r[19].w[0] + 128u);  if (t) { goto L_002D34A0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002D349C; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002D349Cu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002D349Cu) [[unlikely]] return; }
L_002D349C:
    st32((c.r[18].w[0]), 0u);
    c.budget -= 1;
L_002D34A0:
    set32(c.r[4], ld32((c.r[19].w[0] + 84u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[18], c.r[19].w[0] + 84u);  if (t) { goto L_002D34C8; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002D34C4; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002D34C4u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002D34C4u) [[unlikely]] return; }
L_002D34C4:
    st32((c.r[18].w[0]), 0u);
    c.budget -= 1;
L_002D34C8:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < 11ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[16].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002D3474u | kUnwind; return; } goto L_002D3474; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 172u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D34E4u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0017(c, 138u, depth + 1u); else { c.pc = 0x0015D9D0u; return; } if (c.pc != 0x002D34E4u) [[unlikely]] return; }
L_002D34E4:
    st32((c.r[17].w[0] + 172u), 0u);
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D3504u); st128((c.r[29].w[0] + 80u) & ~15u, c.r[0]);  if (depth < kMaxDepth) unit_0020(c, 12u, depth + 1u); else { c.pc = 0x00180110u; return; } if (c.pc != 0x002D3504u) [[unlikely]] return; }
L_002D3504:
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[5], c.r[29].w[0] + 96u);
    c.budget -= 2;
L_002D350C:
    set32(c.r[6], ld32((c.r[17].w[0] + 72u)));
    set32(c.r[7], c.r[8].w[0] << 5);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[4]);
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.r[3].d[0] = c.r[8].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    st128((c.r[6].w[0]) & ~15u, c.r[4]);
    ld128((c.r[5].w[0]) & ~15u, c.r[4]);
    c.budget -= 10;
    { const bool t = c.r[3].d[0] != 0ull; st128((c.r[6].w[0] + 16u) & ~15u, c.r[4]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002D350Cu | kUnwind; return; } goto L_002D350C; } }
L_002D3534:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_002D3550:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], 0u + 1u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].d[0] = ld8((c.r[5].w[0] + 3u));
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.r[4].d[0] = ld16((c.r[5].w[0] + 2u));
    c.r[3].d[0] = c.r[3].d[0] << 58;
    c.r[4].d[0] = c.r[4].d[0] << 54;
    c.r[3].d[0] = c.r[3].d[0] >> 60;
    c.r[4].d[0] = c.r[4].d[0] >> 58;
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D3584u); set32(c.r[5], c.r[2].w[0] << (c.r[3].w[0] & 31u));  if (depth < kMaxDepth) unit_0013(c, 8u, depth + 1u); else { c.pc = 0x0014C060u; return; } if (c.pc != 0x002D3584u) [[unlikely]] return; }
L_002D3584:
    c.r[5].d[0] = ld64((c.r[16].w[0]));
    c.r[3].d[0] = c.r[2].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.r[4].d[0] = c.r[3].d[0] & 63ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFFF00000u);
    c.r[4].d[0] = c.r[4].d[0] << 14;
    c.r[3].d[0] = c.r[3].d[0] | 16383ull;
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st64((c.r[16].w[0]), c.r[3].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002D35C0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D35DCu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0012(c, 39u, depth + 1u); else { c.pc = 0x001486F0u; return; } if (c.pc != 0x002D35DCu) [[unlikely]] return; }
L_002D35DC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x002D0000u);
    set32(c.r[2], c.r[2].w[0] + 12176u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x002D0000u);
    set32(c.r[4], c.r[17].w[0] + 40u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[5], c.r[5].w[0] + 12032u);
    set32(c.r[6], c.r[6].w[0] + 12304u);
    set32(c.r[7], 0u + 184u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D3608u); set32(c.r[8], 0u + 6u);  if (depth < kMaxDepth) unit_0000(c, 89u, depth + 1u); else { c.pc = 0x00100790u; return; } if (c.pc != 0x002D3608u) [[unlikely]] return; }
L_002D3608:
    st32((c.r[17].w[0] + 36u), c.r[16].w[0]);
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    st8((c.r[17].w[0] + 32u), static_cast<std::uint8_t>(0u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002D3630:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002D3694; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x002D0000u);
    set32(c.r[2], c.r[2].w[0] + 12176u);
    set32(c.r[4], c.r[17].w[0] + 40u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[5], c.r[5].w[0] + 12304u);
    set32(c.r[6], 0u + 184u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D3670u); set32(c.r[7], 0u + 6u);  if (depth < kMaxDepth) unit_0000(c, 86u, depth + 1u); else { c.pc = 0x00100720u; return; } if (c.pc != 0x002D3670u) [[unlikely]] return; }
L_002D3670:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D367Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0012(c, 42u, depth + 1u); else { c.pc = 0x00148750u; return; } if (c.pc != 0x002D367Cu) [[unlikely]] return; }
L_002D367C:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_002D3698; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D3694u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x002D3694u) [[unlikely]] return; }
L_002D3694:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002D3698:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002D36B0:
    set32(c.r[2], c.r[5].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] - c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] << 3);
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    c.budget -= 9;
    { set32(c.r[4], c.r[2].w[0] + 40u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002D30C0u | kUnwind; return; } goto L_002D30C0; }
L_002D36E0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[3], 0u + 2u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[5], ld32((c.r[4].w[0] + 36u)));
    c.budget -= 6;
    { const bool t = c.r[5].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_002D3734; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[3], ld32((c.r[1].w[0] - 24400u)));
    set32(c.r[5], ld32((c.r[3].w[0] + 124u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], ld32((c.r[1].w[0] - 23800u)));
    set32(c.r[3], c.r[5].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] - c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D372Cu); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0012(c, 45u, depth + 1u); else { c.pc = 0x001487B0u; return; } if (c.pc != 0x002D372Cu) [[unlikely]] return; }
L_002D372C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_002D375C; } }
L_002D3734:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_002D3748; } }
    set32(c.r[3], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_002D3758; } }
L_002D3748:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D3758u); set32(c.r[5], c.r[5].w[0] - 24856u);  if (depth < kMaxDepth) unit_0012(c, 45u, depth + 1u); else { c.pc = 0x001487B0u; return; } if (c.pc != 0x002D3758u) [[unlikely]] return; }
L_002D3758:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_002D375C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002D3770:
    set32(c.r[29], c.r[29].w[0] - 2368u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[22].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[1].w[0] + 3840u)));
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D37B0u); st32((c.r[29].w[0] + 2364u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_003F(c, 299u, depth + 1u); else { c.pc = 0x001FF0D0u; return; } if (c.pc != 0x002D37B0u) [[unlikely]] return; }
L_002D37B0:
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.r[6].d[0] = c.r[22].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 2344u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D37C4u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0017(c, 125u, depth + 1u); else { c.pc = 0x0015D850u; return; } if (c.pc != 0x002D37C4u) [[unlikely]] return; }
L_002D37C4:
    set32(c.r[20], 0u + 3u);
    set32(c.r[2], c.r[20].w[0] << 1);
    c.budget -= 2;
L_002D37CC:
    set32(c.r[5], c.r[29].w[0] + 2344u);
    set32(c.r[2], c.r[2].w[0] + c.r[20].w[0]);
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] - c.r[20].w[0]);
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[2], c.r[21].w[0] + c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D37F0u); set32(c.r[4], c.r[2].w[0] + 40u);  if (depth < kMaxDepth) unit_0074(c, 273u, depth + 1u); else { c.pc = 0x002D30E0u; return; } if (c.pc != 0x002D37F0u) [[unlikely]] return; }
L_002D37F0:
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.r[1].d[0] = c.r[20].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[2], c.r[20].w[0] << 1);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002D37CCu | kUnwind; return; } goto L_002D37CC; } }
    set32(c.r[3], ld32((c.r[21].w[0] + 36u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 3u);  if (t) { goto L_002D3818; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002D382C; } }
L_002D3818:
    c.r[19].d[0] = 0ull + static_cast<std::uint64_t>(12246ll);
    c.r[18].d[0] = 0ull + static_cast<std::uint64_t>(298ll);
    c.r[17].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_002D3850; } }
L_002D382C:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 4u);  if (t) { goto L_002D3840; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002D3850; } }
L_002D3840:
    c.r[19].d[0] = 0ull + static_cast<std::uint64_t>(4096ll);
    c.r[17].d[0] = 0ull + static_cast<std::uint64_t>(16336ll);
    c.r[18].d[0] = c.r[19].d[0] + 0ull;
    c.r[16].d[0] = 0ull + static_cast<std::uint64_t>(8ll);
    c.budget -= 4;
L_002D3850:
    c.r[3].d[0] = c.r[18].d[0] & 65535ull;
    c.r[4].d[0] = c.r[19].d[0] & 65535ull;
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = c.r[16].d[0] & 65535ull;
    set32(c.r[4], c.r[3].w[0] - 1u);
    set32(c.r[5], c.r[29].w[0] + 2360u);
    c.r[3].d[0] = c.r[17].d[0] & 65535ull;
    st16((c.r[29].w[0] + 2362u), static_cast<std::uint16_t>(c.r[4].w[0]));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 128u);
    set32(c.r[2], c.r[2].w[0] - 1u);
    set32(c.r[6], c.r[29].w[0] + 2356u);
    st16((c.r[29].w[0] + 2358u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[7], 0u + 12u);
    st16((c.r[29].w[0] + 2360u), static_cast<std::uint16_t>(c.r[19].w[0]));
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D3894u); st16((c.r[29].w[0] + 2356u), static_cast<std::uint16_t>(c.r[17].w[0]));  if (depth < kMaxDepth) unit_0020(c, 20u, depth + 1u); else { c.pc = 0x00180280u; return; } if (c.pc != 0x002D3894u) [[unlikely]] return; }
L_002D3894:
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[16].w[0] << 1);
    c.budget -= 2;
L_002D389C:
    set32(c.r[4], c.r[29].w[0] + 128u);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] - c.r[16].w[0]);
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[2], c.r[21].w[0] + c.r[2].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D38BCu); set32(c.r[5], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0020(c, 43u, depth + 1u); else { c.pc = 0x00180690u; return; } if (c.pc != 0x002D38BCu) [[unlikely]] return; }
L_002D38BC:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[16].w[0] << 1);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002D389Cu | kUnwind; return; } goto L_002D389C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D38D4u); set32(c.r[4], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_0020(c, 46u, depth + 1u); else { c.pc = 0x00180720u; return; } if (c.pc != 0x002D38D4u) [[unlikely]] return; }
L_002D38D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D38DCu); set32(c.r[4], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_0020(c, 48u, depth + 1u); else { c.pc = 0x00180760u; return; } if (c.pc != 0x002D38DCu) [[unlikely]] return; }
L_002D38DC:
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[16].w[0] << 1);
    c.budget -= 2;
L_002D38E4:
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] - c.r[16].w[0]);
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[2], c.r[21].w[0] + c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D3900u); set32(c.r[4], c.r[2].w[0] + 40u);  if (depth < kMaxDepth) unit_0074(c, 296u, depth + 1u); else { c.pc = 0x002D33C0u; return; } if (c.pc != 0x002D3900u) [[unlikely]] return; }
L_002D3900:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[16].w[0] << 1);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002D38E4u | kUnwind; return; } goto L_002D38E4; } }
    set32(c.r[2], 0u + 1u);
    set32(c.r[4], c.r[29].w[0] + 128u);
    st8((c.r[21].w[0] + 32u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D3924u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0020(c, 26u, depth + 1u); else { c.pc = 0x00180340u; return; } if (c.pc != 0x002D3924u) [[unlikely]] return; }
L_002D3924:
    set32(c.r[4], c.r[29].w[0] + 2344u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D3930u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0017(c, 138u, depth + 1u); else { c.pc = 0x0015D9D0u; return; } if (c.pc != 0x002D3930u) [[unlikely]] return; }
L_002D3930:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D3938u); set32(c.r[4], ld32((c.r[29].w[0] + 2364u)));  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x002D3938u) [[unlikely]] return; }
L_002D3938:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 2368u);  c.pc = t; return; }
L_002D3960:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_002D3970; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D39C0; } }
L_002D3970:
    c.r[7].d[0] = ld64((c.r[5].w[0]));
    c.r[6].d[0] = ld64((c.r[5].w[0] + 8u));
    set32(c.r[5], ld32((c.r[4].w[0] + 32u)));
    set32(c.r[4], ld32((c.r[4].w[0] + 20u)));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002D39B0; } }
L_002D3988:
    c.r[3].d[0] = ld64((c.r[5].w[0]));
    c.budget -= 3;
    { const bool t = c.r[7].d[0] != c.r[3].d[0];  if (t) { goto L_002D39A8; } }
    c.r[3].d[0] = ld64((c.r[5].w[0] + 8u));
    c.budget -= 3;
    { const bool t = c.r[6].d[0] != c.r[3].d[0];  if (t) { goto L_002D39A8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D39C0; } }
L_002D39A8:
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[5], c.r[5].w[0] + 80u);
    c.budget -= 2;
L_002D39B0:
    c.r[3].d[0] = c.r[2].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002D3988u | kUnwind; return; } goto L_002D3988; } }
    set32(c.r[2], 0u - 1u);
    c.budget -= 1;
L_002D39C0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002D39D0:
    set32(c.r[2], ld32((c.r[4].w[0] + 28u)));
    set32(c.r[6], 0u + 1u);
    set32(c.r[7], ld32((c.r[4].w[0] + 8u)));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_002D3A20; } }
L_002D39E4:
    set32(c.r[3], ld32((c.r[7].w[0] + 4u)));
    c.r[1].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_002D3A14; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_002D3A04; } }
    set32(c.r[2], c.r[2].w[0] + 16u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_002D3A04:
    set32(c.r[3], ld32((c.r[7].w[0])));
    set32(c.r[3], c.r[3].w[0] << 4);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);  if (t) { goto L_002D3A18; } }
L_002D3A14:
    set32(c.r[6], 0u + 1u);
    c.budget -= 1;
L_002D3A18:
    set32(c.r[7], c.r[7].w[0] + 32u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.budget -= 2;
L_002D3A20:
    c.r[3].d[0] = c.r[4].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002D39E4u | kUnwind; return; } goto L_002D39E4; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_002D3A38; } }
    set32(c.r[2], c.r[2].w[0] + 16u);
    c.budget -= 1;
L_002D3A38:
    set32(c.r[3], ld32((c.r[7].w[0] + 4u)));
    c.r[1].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    if (c.r[1].d[0] != 0) c.r[2].d[0] = 0ull;
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002D3A50:
    set32(c.r[2], ld32((c.r[4].w[0] + 28u)));
    set32(c.r[6], 0u + 1u);
    set32(c.r[7], ld32((c.r[4].w[0] + 8u)));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_002D3AA0; } }
L_002D3A64:
    set32(c.r[3], ld32((c.r[7].w[0] + 4u)));
    c.r[1].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_002D3A94; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_002D3A84; } }
    set32(c.r[2], c.r[2].w[0] + 16u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_002D3A84:
    set32(c.r[3], ld32((c.r[7].w[0])));
    set32(c.r[3], c.r[3].w[0] << 4);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);  if (t) { goto L_002D3A98; } }
L_002D3A94:
    set32(c.r[6], 0u + 1u);
    c.budget -= 1;
L_002D3A98:
    set32(c.r[7], c.r[7].w[0] + 32u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.budget -= 2;
L_002D3AA0:
    c.r[3].d[0] = c.r[4].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002D3A64u | kUnwind; return; } goto L_002D3A64; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_002D3AB8; } }
    set32(c.r[2], c.r[2].w[0] + 16u);
    c.budget -= 1;
L_002D3AB8:
    set32(c.r[3], ld32((c.r[7].w[0] + 4u)));
    c.r[1].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    if (c.r[1].d[0] != 0) c.r[2].d[0] = 0ull;
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002D3AD0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 9;
    { const bool t = c.r[17].d[0] == 0ull; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_002D3B38; } }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002D3AF8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[19], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 12736u);
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D3B14u); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0010(c, 116u, depth + 1u); else { c.pc = 0x00141720u; return; } if (c.pc != 0x002D3B14u) [[unlikely]] return; }
L_002D3B14:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D3B20u); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0074(c, 335u, depth + 1u); else { c.pc = 0x002D3960u; return; } if (c.pc != 0x002D3B20u) [[unlikely]] return; }
L_002D3B20:
    set32(c.r[3], c.r[18].w[0] + c.r[19].w[0]);
    set32(c.r[16], c.r[16].w[0] + 1u);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.r[3].d[0] = c.r[16].sd[0] < 43ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002D3AF8u | kUnwind; return; } goto L_002D3AF8; } }
L_002D3B38:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_002D3B60:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] + 12272u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].d[0] = 0ull + 0ull;
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0]), c.r[2].w[0]);  if (t) { goto L_002D3B94; } }
L_002D3B84:
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[2].w[0] + 68u), 0u);
    c.budget -= 4;
L_002D3B94:
    c.r[2].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(10ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002D3B84u | kUnwind; return; } goto L_002D3B84; } }
    set32(c.r[4], c.r[16].w[0] + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D3BACu); set32(c.r[5], 0u + 64u);  if (depth < kMaxDepth) unit_0010(c, 111u, depth + 1u); else { c.pc = 0x00141670u; return; } if (c.pc != 0x002D3BACu) [[unlikely]] return; }
L_002D3BAC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 108u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 112u), c.r[3].w[0]);
    st8((c.r[16].w[0] + 116u), static_cast<std::uint8_t>(0u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002D3BD0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002D3C20; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] + 12272u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002D3C08u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002D3C08u) [[unlikely]] return; }
L_002D3C08:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_002D3C24; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D3C20u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x002D3C20u) [[unlikely]] return; }
L_002D3C20:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002D3C24:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002D3C40:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_002D3C80; } }
L_002D3C60:
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 68u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[16], c.r[2].w[0] + 68u);  if (t) { goto L_002D3C78; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D3C78u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100210u; return; } if (c.pc != 0x002D3C78u) [[unlikely]] return; }
L_002D3C78:
    st32((c.r[16].w[0]), 0u);
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 2;
L_002D3C80:
    c.r[2].d[0] = c.r[17].d[0] < static_cast<std::uint64_t>(10ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[17].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002D3C60u | kUnwind; return; } goto L_002D3C60; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002D3C9Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002D3C9Cu) [[unlikely]] return; }
L_002D3C9C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002D3CC0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 32u)));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002D3CE4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D3CE4u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100210u; return; } if (c.pc != 0x002D3CE4u) [[unlikely]] return; }
L_002D3CE4:
    st32((c.r[16].w[0] + 32u), 0u);
    st32((c.r[16].w[0] + 20u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002D3D00:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D3D14u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0074(c, 364u, depth + 1u); else { c.pc = 0x002D3D50u; return; } if (c.pc != 0x002D3D14u) [[unlikely]] return; }
L_002D3D14:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D3D1Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0074(c, 375u, depth + 1u); else { c.pc = 0x002D3E60u; return; } if (c.pc != 0x002D3D1Cu) [[unlikely]] return; }
L_002D3D1C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D3D24u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0075(c, 25u, depth + 1u); else { c.pc = 0x002D45E0u; return; } if (c.pc != 0x002D3D24u) [[unlikely]] return; }
L_002D3D24:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D3D2Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0075(c, 37u, depth + 1u); else { c.pc = 0x002D4760u; return; } if (c.pc != 0x002D3D2Cu) [[unlikely]] return; }
L_002D3D2C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D3D34u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0075(c, 40u, depth + 1u); else { c.pc = 0x002D47E0u; return; } if (c.pc != 0x002D3D34u) [[unlikely]] return; }
L_002D3D34:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D3D3Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0075(c, 41u, depth + 1u); else { c.pc = 0x002D4800u; return; } if (c.pc != 0x002D3D3Cu) [[unlikely]] return; }
L_002D3D3C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002D3D50:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 11;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002D3D7Cu); c.r[18].d[0] = c.r[5].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002D3D7Cu) [[unlikely]] return; }
L_002D3D7C:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_002D3DB0; } }
L_002D3D88:
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D3DAC; } }
    set32(c.r[2], ld32((c.r[2].w[0] + 12u)));
    c.r[1].d[0] = c.r[16].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002D3DAC; } }
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_002D3DAC:
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 1;
L_002D3DB0:
    c.r[2].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(10ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[3].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002D3D88u | kUnwind; return; } goto L_002D3D88; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D3DC4u);  if (depth < kMaxDepth) unit_0010(c, 59u, depth + 1u); else { c.pc = 0x00140BF0u; return; } if (c.pc != 0x002D3DC4u) [[unlikely]] return; }
L_002D3DC4:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 3840u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D3DD8u); st32((c.r[29].w[0] + 92u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x002D3DD8u) [[unlikely]] return; }
L_002D3DD8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D3DE0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x001001F0u; return; } if (c.pc != 0x002D3DE0u) [[unlikely]] return; }
L_002D3DE0:
    set32(c.r[4], ld32((c.r[29].w[0] + 92u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D3DECu); c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x002D3DECu) [[unlikely]] return; }
L_002D3DEC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_002D3E30; } }
L_002D3DF4:
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_002D3E2C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D3E0Cu);  if (depth < kMaxDepth) unit_0017(c, 115u, depth + 1u); else { c.pc = 0x0015D560u; return; } if (c.pc != 0x002D3E0Cu) [[unlikely]] return; }
L_002D3E0C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D3E20u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0017(c, 166u, depth + 1u); else { c.pc = 0x0015DEF0u; return; } if (c.pc != 0x002D3E20u) [[unlikely]] return; }
L_002D3E20:
    set32(c.r[3], c.r[16].w[0] << 2);
    set32(c.r[3], c.r[19].w[0] + c.r[3].w[0]);
    st32((c.r[3].w[0] + 68u), c.r[2].w[0]);
    c.budget -= 3;
L_002D3E2C:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_002D3E30:
    c.r[2].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(10ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[16].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002D3DF4u | kUnwind; return; } goto L_002D3DF4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D3E44u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100210u; return; } if (c.pc != 0x002D3E44u) [[unlikely]] return; }
L_002D3E44:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_002D3E60:
    set32(c.r[29], c.r[29].w[0] - 352u);
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
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D3E94u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0010(c, 59u, depth + 1u); else { c.pc = 0x00140BF0u; return; } if (c.pc != 0x002D3E94u) [[unlikely]] return; }
L_002D3E94:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 3840u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D3EA8u); st32((c.r[29].w[0] + 348u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x002D3EA8u) [[unlikely]] return; }
L_002D3EA8:
    c.r[20].d[0] = 0ull + 0ull;
    set32(c.r[16], c.r[20].w[0] << 2);
    c.budget -= 2;
L_002D3EB0:
    set32(c.r[3], c.r[16].w[0] + c.r[29].w[0]);
    set32(c.r[2], c.r[21].w[0] + c.r[16].w[0]);
    set32(c.r[23], c.r[3].w[0] + 304u);
    set32(c.r[30], c.r[3].w[0] + 256u);
    st32((c.r[23].w[0]), 0u);
    st32((c.r[30].w[0]), 0u);
    st32((c.r[3].w[0] + 208u), 0u);
    set32(c.r[3], ld32((c.r[2].w[0] + 68u)));
    c.budget -= 10;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], 0u + 5u);  if (t) { [[clang::musttail]] return unit_0075(c, 8u, depth); } }
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == c.r[2].d[0];  if (t) { [[clang::musttail]] return unit_0075(c, 8u, depth); } }
    set32(c.r[2], c.r[20].w[0] - 7u);
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[2], 0u + 9u);  if (t) { [[clang::musttail]] return unit_0075(c, 8u, depth); } }
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == c.r[2].d[0];  if (t) { [[clang::musttail]] return unit_0075(c, 8u, depth); } }
    set32(c.r[18], ld32((c.r[3].w[0] + 16u)));
    c.r[19].d[0] = 0ull + 0ull;
    set32(c.r[22], ld32((c.r[3].w[0] + 28u)));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_002D3F1C; } }
L_002D3F0C:
    set32(c.r[2], c.r[22].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] + 1u);
    set32(c.r[2], ld32((c.r[2].w[0] + 40u)));
    set32(c.r[19], c.r[19].w[0] + c.r[2].w[0]);
    c.budget -= 4;
L_002D3F1C:
    c.r[2].d[0] = c.r[3].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[3].w[0] << 6);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002D3F0Cu | kUnwind; return; } goto L_002D3F0C; } }
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull; set32(c.r[4], 0u + 16u);  if (t) { [[clang::musttail]] return unit_0075(c, 8u, depth); } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D3F38u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x002D3F38u) [[unlikely]] return; }
L_002D3F38:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull; set32(c.r[4], c.r[19].w[0] << 2);  if (t) { goto L_002D3F8C; } }
    st32((c.r[17].w[0] + 4u), c.r[19].w[0]);
    set32(c.r[2], c.r[19].w[0] << 1);
    st32((c.r[29].w[0] + 160u), c.r[2].w[0]);
    set32(c.r[2], c.r[19].w[0] << 5);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D3F5Cu); set32(c.r[4], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x001001F0u; return; } if (c.pc != 0x002D3F5Cu) [[unlikely]] return; }
L_002D3F5C:
    set32(c.r[8], ld32((c.r[29].w[0] + 160u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D3F74u); set32(c.r[7], 0u + 16u);  if (depth < kMaxDepth) unit_0000(c, 94u, depth + 1u); else { c.pc = 0x001008C0u; return; } if (c.pc != 0x002D3F74u) [[unlikely]] return; }
L_002D3F74:
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[0] = ld32((c.r[1].w[0] - 23872u));
    st32((c.r[17].w[0] + 12u), c.f[0]);
    st32((c.r[17].w[0] + 8u), 0u);
    set32(c.r[4], c.r[19].w[0] << 2);
    c.budget -= 6;
L_002D3F8C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D3F94u);  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x001001F0u; return; } if (c.pc != 0x002D3F94u) [[unlikely]] return; }
L_002D3F94:
    c.r[15].d[0] = 0ull + 0ull;
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[25], c.r[29].w[0] + 192u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[24], 0u - 1u);  if (t) { [[clang::musttail]] return unit_0075(c, 5u, depth); } }
L_002D3FA8:
    set32(c.r[3], c.r[22].w[0] + c.r[3].w[0]);
    set32(c.r[14], ld32((c.r[3].w[0] + 40u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    set32(c.r[13], ld32((c.r[3].w[0] + 8u)));
    set32(c.r[12], ld32((c.r[3].w[0] + 12u)));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { [[clang::musttail]] return unit_0075(c, 4u, depth); } }
L_002D3FC4:
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[5], ld32((c.r[17].w[0])));
    set32(c.r[8], c.r[13].w[0] + c.r[6].w[0]);
    set32(c.r[7], c.r[12].w[0] + c.r[6].w[0]);
    c.r[11].d[0] = 0ull + 0ull;
    set32(c.r[6], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] << 4);
    c.r[10].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 10;
    { const bool t = 0ull == 0ull; set32(c.r[9], c.r[5].w[0] + c.r[3].w[0]);  if (t) { [[clang::musttail]] return unit_0075(c, 3u, depth); } }
L_002D3FEC:
    c.f[1] = ld32((c.r[10].w[0]));
    c.f[0] = ld32((c.r[8].w[0]));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { [[clang::musttail]] return unit_0075(c, 2u, depth); } }
    [[clang::musttail]] return unit_0075(c, 1u, depth);
}

}
