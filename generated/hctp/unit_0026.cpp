#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0026[4096] = {
    1, 0, 0, 0, 2, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0,
    6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 8, 0, 9, 0, 0, 0, 10, 0, 11, 0, 12, 0, 13,
    0, 0, 14, 0, 15, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 17, 0, 18, 0, 0, 0, 19, 0, 20, 0, 0, 0, 21, 0, 0, 0, 0,
    0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0,
    0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 27, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0,
    0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    36, 0, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0,
    0, 0, 39, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 42, 0, 0, 0, 0, 0, 0, 43, 0, 44, 0, 45, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 46, 0, 47, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 49,
    0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    53, 0, 0, 0, 54, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    57, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 59, 0, 0, 0, 60, 0, 0, 0, 61, 0, 0, 0, 62, 0, 63, 0, 0, 64, 0, 0,
    65, 0, 0, 0, 66, 0, 67, 0, 0, 68, 0, 0, 69, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    74, 75, 0, 76, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0,
    0, 0, 0, 79, 0, 0, 0, 0, 0, 80, 0, 0, 81, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 84, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 89, 0, 90, 0, 0, 0,
    0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0,
    0, 0, 93, 0, 0, 0, 0, 0, 0, 0, 94, 0, 95, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 0,
    0, 0, 97, 0, 0, 0, 0, 0, 0, 0, 98, 0, 99, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 102, 0, 103, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 104, 0, 105, 0, 0,
    0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 108, 0,
    0, 0, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 111, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 112, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 115, 0, 0, 0, 116, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 121, 0,
    0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 123, 0, 0, 124, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 126, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 129, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0, 0, 0,
    131, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 0,
    134, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0,
    0, 137, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 0, 0, 0, 141, 0, 142, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 145,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 146, 0, 147, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 150,
    0, 0, 0, 0, 151, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0, 0, 156,
    0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0, 159,
    0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 161, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 166, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    167, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 168, 0, 0, 169, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 171, 0, 0, 172, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 177, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0,
    181, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 183, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 184, 0, 0, 0, 0, 0, 0, 0, 185, 0, 0, 186, 0, 0, 0, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 193, 0, 0, 0, 194, 0, 0, 0,
    195, 0, 0, 0, 196, 0, 0, 0, 197, 0, 0, 0, 198, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 199, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 200, 0, 0,
    0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0, 0, 0, 0, 0, 0, 0, 203, 0, 0, 204,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 205, 0, 0, 206, 0, 0, 0, 0, 0, 0, 0, 0, 0, 207, 0, 0, 208, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 209, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    210, 0, 0, 0, 0, 0, 211, 0, 0, 0, 0, 212, 0, 0, 0, 0, 213, 214, 0, 0, 0, 0, 215, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 216, 0, 0, 0, 0, 0, 0, 0, 0, 217, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 218, 0, 0, 219, 0, 0,
    220, 0, 0, 0, 0, 0, 0, 0, 0, 221, 0, 0, 222, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 223, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 224,
    0, 0, 0, 225, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 226, 0, 0, 0, 227, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 228, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 229, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 230, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 231, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 232, 0,
    0, 0, 0, 0, 0, 0, 0, 233, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 234, 0, 0, 0, 0, 235, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 236, 0, 0,
    0, 237, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 238, 0, 0, 239, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 241, 0, 0, 0, 0, 0, 0, 0, 0, 0, 242, 0, 0, 0, 0, 0, 243,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 244, 0, 0, 0, 0,
    0, 0, 0, 0, 245, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 246, 0, 0, 0, 0, 247, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 248,
    0, 0, 0, 249, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 250, 0, 0, 251, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 252, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 253, 0, 0, 0, 0, 0, 0, 0, 254, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 256, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 257, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 258, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 259, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 260, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 262, 0, 0, 0, 0, 0, 0, 0, 263, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 264, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 265, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 266, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 267, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 268, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 269, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_0026(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
#if defined(PS2_HIT_TRACE)
    if (entry == 122u) hit_trace(c, 0x00198F10u);
    else if (entry == 139u) hit_trace(c, 0x001991D0u);
    else if (entry == 154u) hit_trace(c, 0x001994B0u);
#endif
dispatch_entry:
    switch (entry) {
    case 1u: goto L_00198000;
    case 2u: goto L_00198010;
    case 3u: goto L_00198024;
    case 4u: goto L_00198050;
    case 5u: goto L_00198060;
    case 6u: goto L_00198080;
    case 7u: goto L_001980B0;
    case 8u: goto L_001980CC;
    case 9u: goto L_001980D4;
    case 10u: goto L_001980E4;
    case 11u: goto L_001980EC;
    case 12u: goto L_001980F4;
    case 13u: goto L_001980FC;
    case 14u: goto L_00198108;
    case 15u: goto L_00198110;
    case 16u: goto L_0019812C;
    case 17u: goto L_0019813C;
    case 18u: goto L_00198144;
    case 19u: goto L_00198154;
    case 20u: goto L_0019815C;
    case 21u: goto L_0019816C;
    case 22u: goto L_00198190;
    case 23u: goto L_001981EC;
    case 24u: goto L_00198210;
    case 25u: goto L_00198240;
    case 26u: goto L_00198264;
    case 27u: goto L_00198290;
    case 28u: goto L_001982A0;
    case 29u: goto L_001982C8;
    case 30u: goto L_001982F4;
    case 31u: goto L_00198310;
    case 32u: goto L_00198330;
    case 33u: goto L_00198350;
    case 34u: goto L_00198374;
    case 35u: goto L_001983D4;
    case 36u: goto L_00198400;
    case 37u: goto L_00198420;
    case 38u: goto L_00198478;
    case 39u: goto L_00198488;
    case 40u: goto L_001984A0;
    case 41u: goto L_001984C0;
    case 42u: goto L_00198508;
    case 43u: goto L_00198524;
    case 44u: goto L_0019852C;
    case 45u: goto L_00198534;
    case 46u: goto L_0019858C;
    case 47u: goto L_00198594;
    case 48u: goto L_001985D8;
    case 49u: goto L_001985FC;
    case 50u: goto L_00198608;
    case 51u: goto L_0019863C;
    case 52u: goto L_00198650;
    case 53u: goto L_00198680;
    case 54u: goto L_00198690;
    case 55u: goto L_001986A4;
    case 56u: goto L_001986C8;
    case 57u: goto L_00198700;
    case 58u: goto L_00198724;
    case 59u: goto L_00198730;
    case 60u: goto L_00198740;
    case 61u: goto L_00198750;
    case 62u: goto L_00198760;
    case 63u: goto L_00198768;
    case 64u: goto L_00198774;
    case 65u: goto L_00198780;
    case 66u: goto L_00198790;
    case 67u: goto L_00198798;
    case 68u: goto L_001987A4;
    case 69u: goto L_001987B0;
    case 70u: goto L_001987C0;
    case 71u: goto L_00198824;
    case 72u: goto L_00198840;
    case 73u: goto L_00198850;
    case 74u: goto L_00198880;
    case 75u: goto L_00198884;
    case 76u: goto L_0019888C;
    case 77u: goto L_001988C8;
    case 78u: goto L_001988F0;
    case 79u: goto L_0019890C;
    case 80u: goto L_00198924;
    case 81u: goto L_00198930;
    case 82u: goto L_00198944;
    case 83u: goto L_0019895C;
    case 84u: goto L_00198970;
    case 85u: goto L_0019899C;
    case 86u: goto L_001989BC;
    case 87u: goto L_00198A28;
    case 88u: goto L_00198A48;
    case 89u: goto L_00198A68;
    case 90u: goto L_00198A70;
    case 91u: goto L_00198A90;
    case 92u: goto L_00198AE8;
    case 93u: goto L_00198B08;
    case 94u: goto L_00198B28;
    case 95u: goto L_00198B30;
    case 96u: goto L_00198B68;
    case 97u: goto L_00198B88;
    case 98u: goto L_00198BA8;
    case 99u: goto L_00198BB0;
    case 100u: goto L_00198BD0;
    case 101u: goto L_00198C04;
    case 102u: goto L_00198C38;
    case 103u: goto L_00198C40;
    case 104u: goto L_00198C6C;
    case 105u: goto L_00198C74;
    case 106u: goto L_00198C8C;
    case 107u: goto L_00198CE8;
    case 108u: goto L_00198CF8;
    case 109u: goto L_00198D1C;
    case 110u: goto L_00198D5C;
    case 111u: goto L_00198D78;
    case 112u: goto L_00198DD4;
    case 113u: goto L_00198DE4;
    case 114u: goto L_00198E20;
    case 115u: goto L_00198E30;
    case 116u: goto L_00198E40;
    case 117u: goto L_00198E50;
    case 118u: goto L_00198E6C;
    case 119u: goto L_00198EB0;
    case 120u: goto L_00198EE0;
    case 121u: goto L_00198EF8;
    case 122u: goto L_00198F10;
    case 123u: goto L_00198F50;
    case 124u: goto L_00198F5C;
    case 125u: goto L_00198F98;
    case 126u: goto L_00198FAC;
    case 127u: goto L_00198FBC;
    case 128u: goto L_00198FD8;
    case 129u: goto L_00198FEC;
    case 130u: goto L_0019905C;
    case 131u: goto L_00199080;
    case 132u: goto L_00199090;
    case 133u: goto L_001990E0;
    case 134u: goto L_00199100;
    case 135u: goto L_00199114;
    case 136u: goto L_00199170;
    case 137u: goto L_00199184;
    case 138u: goto L_001991A0;
    case 139u: goto L_001991D0;
    case 140u: goto L_00199230;
    case 141u: goto L_00199258;
    case 142u: goto L_00199260;
    case 143u: goto L_001992D0;
    case 144u: goto L_001992E0;
    case 145u: goto L_001992FC;
    case 146u: goto L_00199358;
    case 147u: goto L_00199360;
    case 148u: goto L_0019938C;
    case 149u: goto L_001993C8;
    case 150u: goto L_001993FC;
    case 151u: goto L_00199410;
    case 152u: goto L_00199424;
    case 153u: goto L_00199470;
    case 154u: goto L_001994B0;
    case 155u: goto L_001994E8;
    case 156u: goto L_001994FC;
    case 157u: goto L_0019950C;
    case 158u: goto L_0019956C;
    case 159u: goto L_0019957C;
    case 160u: goto L_0019958C;
    case 161u: goto L_001995E8;
    case 162u: goto L_00199614;
    case 163u: goto L_00199638;
    case 164u: goto L_00199664;
    case 165u: goto L_001996A8;
    case 166u: goto L_001996C4;
    case 167u: goto L_00199700;
    case 168u: goto L_00199738;
    case 169u: goto L_00199744;
    case 170u: goto L_001997D0;
    case 171u: goto L_00199810;
    case 172u: goto L_0019981C;
    case 173u: goto L_00199834;
    case 174u: goto L_00199850;
    case 175u: goto L_0019989C;
    case 176u: goto L_001998E0;
    case 177u: goto L_00199920;
    case 178u: goto L_0019993C;
    case 179u: goto L_00199950;
    case 180u: goto L_00199968;
    case 181u: goto L_00199980;
    case 182u: goto L_00199998;
    case 183u: goto L_001999EC;
    case 184u: goto L_00199A8C;
    case 185u: goto L_00199AAC;
    case 186u: goto L_00199AB8;
    case 187u: goto L_00199AE0;
    case 188u: goto L_00199B34;
    case 189u: goto L_00199B44;
    case 190u: goto L_00199B98;
    case 191u: goto L_00199C20;
    case 192u: goto L_00199C50;
    case 193u: goto L_00199C60;
    case 194u: goto L_00199C70;
    case 195u: goto L_00199C80;
    case 196u: goto L_00199C90;
    case 197u: goto L_00199CA0;
    case 198u: goto L_00199CB0;
    case 199u: goto L_00199D30;
    case 200u: goto L_00199DF4;
    case 201u: goto L_00199E10;
    case 202u: goto L_00199EC8;
    case 203u: goto L_00199EF0;
    case 204u: goto L_00199EFC;
    case 205u: goto L_00199F2C;
    case 206u: goto L_00199F38;
    case 207u: goto L_00199F60;
    case 208u: goto L_00199F6C;
    case 209u: goto L_00199FC0;
    case 210u: goto L_0019A080;
    case 211u: goto L_0019A098;
    case 212u: goto L_0019A0AC;
    case 213u: goto L_0019A0C0;
    case 214u: goto L_0019A0C4;
    case 215u: goto L_0019A0D8;
    case 216u: goto L_0019A210;
    case 217u: goto L_0019A234;
    case 218u: goto L_0019A268;
    case 219u: goto L_0019A274;
    case 220u: goto L_0019A280;
    case 221u: goto L_0019A2A4;
    case 222u: goto L_0019A2B0;
    case 223u: goto L_0019A2E0;
    case 224u: goto L_0019A37C;
    case 225u: goto L_0019A38C;
    case 226u: goto L_0019A3E0;
    case 227u: goto L_0019A3F0;
    case 228u: goto L_0019A424;
    case 229u: goto L_0019A494;
    case 230u: goto L_0019A730;
    case 231u: goto L_0019A760;
    case 232u: goto L_0019A7F8;
    case 233u: goto L_0019A81C;
    case 234u: goto L_0019A888;
    case 235u: goto L_0019A89C;
    case 236u: goto L_0019AA74;
    case 237u: goto L_0019AA84;
    case 238u: goto L_0019ABCC;
    case 239u: goto L_0019ABD8;
    case 240u: goto L_0019ACB0;
    case 241u: goto L_0019AD3C;
    case 242u: goto L_0019AD64;
    case 243u: goto L_0019AD7C;
    case 244u: goto L_0019ADEC;
    case 245u: goto L_0019AE10;
    case 246u: goto L_0019AE84;
    case 247u: goto L_0019AE98;
    case 248u: goto L_0019B07C;
    case 249u: goto L_0019B08C;
    case 250u: goto L_0019B1DC;
    case 251u: goto L_0019B1E8;
    case 252u: goto L_0019B2D0;
    case 253u: goto L_0019B428;
    case 254u: goto L_0019B448;
    case 255u: goto L_0019B4B8;
    case 256u: goto L_0019B504;
    case 257u: goto L_0019B6EC;
    case 258u: goto L_0019B730;
    case 259u: goto L_0019B88C;
    case 260u: goto L_0019B8CC;
    case 261u: goto L_0019B9B0;
    case 262u: goto L_0019B9D8;
    case 263u: goto L_0019B9F8;
    case 264u: goto L_0019BAD0;
    case 265u: goto L_0019BB20;
    case 266u: goto L_0019BD78;
    case 267u: goto L_0019BE0C;
    case 268u: goto L_0019BE54;
    case 269u: goto L_0019BEB0;
    default: bad_entry(c, 0x00198000u); return;
    }
L_00198000:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 40u), c.f[0]);  c.pc = t; return; }
L_00198010:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00198024u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 264u, depth + 1u); else { c.pc = 0x0013E560u; return; } if (c.pc != 0x00198024u) [[unlikely]] return; }
L_00198024:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] - 12304u);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00198050:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 3;
    { set32(c.r[4], ld32((c.r[1].w[0] + 26328u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00197750u | kUnwind; return; } [[clang::musttail]] return unit_0025(c, 394u, depth); }
L_00198060:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00198080u); c.r[5].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 264u, depth + 1u); else { c.pc = 0x0013E560u; return; } if (c.pc != 0x00198080u) [[unlikely]] return; }
L_00198080:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] - 12320u);
    st32((c.r[17].w[0]), c.r[3].w[0]);
    st32((c.r[17].w[0] + 12u), c.r[16].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001980B0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001980CCu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0018(c, 177u, depth + 1u); else { c.pc = 0x00163D70u; return; } if (c.pc != 0x001980CCu) [[unlikely]] return; }
L_001980CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001980D4u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0018(c, 159u, depth + 1u); else { c.pc = 0x00163810u; return; } if (c.pc != 0x001980D4u) [[unlikely]] return; }
L_001980D4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[16], ld32((c.r[1].w[0] + 28272u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001980E4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0016(c, 10u, depth + 1u); else { c.pc = 0x001584B0u; return; } if (c.pc != 0x001980E4u) [[unlikely]] return; }
L_001980E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001980ECu);  if (depth < kMaxDepth) unit_0018(c, 175u, depth + 1u); else { c.pc = 0x00163D10u; return; } if (c.pc != 0x001980ECu) [[unlikely]] return; }
L_001980EC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001980F4u); c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0018(c, 176u, depth + 1u); else { c.pc = 0x00163D40u; return; } if (c.pc != 0x001980F4u) [[unlikely]] return; }
L_001980F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001980FCu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_002A(c, 40u, depth + 1u); else { c.pc = 0x001A89F0u; return; } if (c.pc != 0x001980FCu) [[unlikely]] return; }
L_001980FC:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00198108u); set32(c.r[5], c.r[16].w[0] + 464u);  if (depth < kMaxDepth) unit_002A(c, 44u, depth + 1u); else { c.pc = 0x001A8B10u; return; } if (c.pc != 0x00198108u) [[unlikely]] return; }
L_00198108:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00198110u);  if (depth < kMaxDepth) unit_0047(c, 131u, depth + 1u); else { c.pc = 0x0021D9F0u; return; } if (c.pc != 0x00198110u) [[unlikely]] return; }
L_00198110:
    set32(c.r[3], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], 0u + 7u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0019812C; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 12u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019812Cu); set32(c.r[4], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0025(c, 35u, depth + 1u); else { c.pc = 0x00194510u; return; } if (c.pc != 0x0019812Cu) [[unlikely]] return; }
L_0019812C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 26328u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019813Cu); set32(c.r[5], ld32((c.r[18].w[0] + 4u)));  if (depth < kMaxDepth) unit_0025(c, 400u, depth + 1u); else { c.pc = 0x00197950u; return; } if (c.pc != 0x0019813Cu) [[unlikely]] return; }
L_0019813C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00198144u);  if (depth < kMaxDepth) unit_0018(c, 177u, depth + 1u); else { c.pc = 0x00163D70u; return; } if (c.pc != 0x00198144u) [[unlikely]] return; }
L_00198144:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00198154u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0018(c, 162u, depth + 1u); else { c.pc = 0x00163850u; return; } if (c.pc != 0x00198154u) [[unlikely]] return; }
L_00198154:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019815Cu);  if (depth < kMaxDepth) unit_0018(c, 177u, depth + 1u); else { c.pc = 0x00163D70u; return; } if (c.pc != 0x0019815Cu) [[unlikely]] return; }
L_0019815C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019816Cu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0018(c, 164u, depth + 1u); else { c.pc = 0x00163AA0u; return; } if (c.pc != 0x0019816Cu) [[unlikely]] return; }
L_0019816C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00198190:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00490000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.r[3].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 8896u)));
    c.r[1].d[0] = c.r[2].sd[0] < 30ll ? 1ull : 0ull;
    c.budget -= 12;
    { const bool t = c.r[1].d[0] == 0ull; c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_001981C8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 2u);  if (t) { goto L_00198270; } }
L_001981C8:
    c.r[1].d[0] = c.r[2].sd[0] < 36ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull; c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001981DC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 2u);  if (t) { goto L_00198270; } }
L_001981DC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 26328u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001981ECu); c.r[6].d[0] = c.r[3].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 414u, depth + 1u); else { c.pc = 0x00197E00u; return; } if (c.pc != 0x001981ECu) [[unlikely]] return; }
L_001981EC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001981FC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00198270; } }
L_001981FC:
    set32(c.r[25], ld32((c.r[2].w[0] + 56u)));
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 44u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00198210u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00198210u) [[unlikely]] return; }
L_00198210:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x47410000u);
    c.r[3].d[0] = c.r[3].d[0] | 21570ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_00198228; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00198270; } }
L_00198228:
    set32(c.r[2], ld32((c.r[17].w[0] + 96u)));
    st32((c.r[18].w[0]), c.r[2].w[0]);
    set32(c.r[25], ld32((c.r[17].w[0] + 56u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 68u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00198240u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00198240u) [[unlikely]] return; }
L_00198240:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00198254; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00198270; } }
L_00198254:
    set32(c.r[25], ld32((c.r[17].w[0] + 56u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00198264u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00198264u) [[unlikely]] return; }
L_00198264:
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    st128((c.r[16].w[0]) & ~15u, c.r[2]);
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
L_00198270:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00198290:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x474F0000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[2].d[0] | 16970ull;  c.pc = t; return; }
L_001982A0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00490000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[3], 0u + 31u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 8896u)));
    c.budget -= 8;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00198320; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_00198314; } }
L_001982C8:
    set32(c.r[4], c.r[16].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + 28320u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00198310; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x42490000u);  if (t) { goto L_001982EC; } }
    set32(c.r[4], c.r[4].w[0] + 436u);
    c.budget -= 1;
L_001982EC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001982F4u); c.r[5].d[0] = c.r[2].d[0] | 19269ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x001982F4u) [[unlikely]] return; }
L_001982F4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_00198300; } }
    set32(c.r[4], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 1;
L_00198300:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00198320; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00198310u);  if (depth < kMaxDepth) unit_004A(c, 96u, depth + 1u); else { c.pc = 0x002293F0u; return; } if (c.pc != 0x00198310u) [[unlikely]] return; }
L_00198310:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_00198314:
    c.r[3].d[0] = c.r[16].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x00520000u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001982C8u | kUnwind; return; } goto L_001982C8; } }
L_00198320:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00198330:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[7].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[8], 0u + 161u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[9], 0u + 18u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00198350u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_001E(c, 274u, depth + 1u); else { c.pc = 0x0017A2E0u; return; } if (c.pc != 0x00198350u) [[unlikely]] return; }
L_00198350:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] - 12224u);
    set32(c.r[2], c.r[2].w[0] - 12136u);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    set32(c.r[4], c.r[16].w[0] + 148u);
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00198374u); set32(c.r[5], 0u + 48u);  if (depth < kMaxDepth) unit_0010(c, 111u, depth + 1u); else { c.pc = 0x00141670u; return; } if (c.pc != 0x00198374u) [[unlikely]] return; }
L_00198374:
    st32((c.r[16].w[0] + 148u), 0u);
    set32(c.r[2], 0u + 6u);
    st32((c.r[16].w[0] + 152u), 0u);
    set32(c.r[6], 0u + 5u);
    st32((c.r[16].w[0] + 156u), c.r[2].w[0]);
    set32(c.r[5], 0u + 1u);
    st32((c.r[16].w[0] + 160u), 0u);
    set32(c.r[3], 0u + 13376u);
    st32((c.r[16].w[0] + 164u), 0u);
    set32(c.r[2], 0u + 15359u);
    st32((c.r[16].w[0] + 168u), 0u);
    set32(c.r[4], 0u + 8544u);
    st32((c.r[16].w[0] + 172u), 0u);
    st32((c.r[16].w[0] + 176u), 0u);
    st32((c.r[16].w[0] + 180u), 0u);
    st32((c.r[16].w[0] + 184u), 0u);
    st32((c.r[16].w[0] + 188u), 0u);
    st32((c.r[16].w[0] + 192u), c.r[6].w[0]);
    st32((c.r[16].w[0] + 152u), c.r[5].w[0]);
    st32((c.r[16].w[0] + 156u), 0u);
    st32((c.r[16].w[0] + 176u), 0u);
    st16((c.r[29].w[0] + 44u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 24;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001983D4u); st16((c.r[29].w[0] + 46u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x001983D4u) [[unlikely]] return; }
L_001983D4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00198400; } }
    set32(c.r[3], ld32((c.r[29].w[0] + 44u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[16].w[0] + 148u);
    set32(c.r[6], 0u + 15u);
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[8], c.r[29].w[0] + 40u);
    set32(c.r[9], 0u + 25u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00198400u); st32((c.r[29].w[0] + 40u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_007F(c, 140u, depth + 1u); else { c.pc = 0x002FD320u; return; } if (c.pc != 0x00198400u) [[unlikely]] return; }
L_00198400:
    st32((c.r[16].w[0] + 144u), c.r[2].w[0]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00198420:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001984A0; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] - 12224u);
    set32(c.r[2], c.r[2].w[0] - 12136u);
    st32((c.r[17].w[0]), c.r[3].w[0]);
    st32((c.r[17].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 144u)));
    c.budget -= 9;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00198478; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00198478; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00198478u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00198478u) [[unlikely]] return; }
L_00198478:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00198488u); st32((c.r[17].w[0] + 144u), 0u);  if (depth < kMaxDepth) unit_001E(c, 286u, depth + 1u); else { c.pc = 0x0017A490u; return; } if (c.pc != 0x00198488u) [[unlikely]] return; }
L_00198488:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_001984A4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001984A0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x001984A0u) [[unlikely]] return; }
L_001984A0:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001984A4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001984C0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    c.budget -= 11;
    { const bool t = c.r[3].d[0] != c.r[5].d[0]; c.r[21].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001986D0; } }
    set32(c.r[4], ld32((c.r[21].w[0] + 144u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001986D0; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 44u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00198508u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00198508u) [[unlikely]] return; }
L_00198508:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001986D0; } }
    set32(c.r[4], ld32((c.r[21].w[0] + 144u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00198524u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00198524u) [[unlikely]] return; }
L_00198524:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019852Cu);  if (depth < kMaxDepth) unit_001D(c, 405u, depth + 1u); else { c.pc = 0x00177600u; return; } if (c.pc != 0x0019852Cu) [[unlikely]] return; }
L_0019852C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00198534u); set32(c.r[16], ld32((c.r[2].w[0] + 60u)));  if (depth < kMaxDepth) unit_001D(c, 405u, depth + 1u); else { c.pc = 0x00177600u; return; } if (c.pc != 0x00198534u) [[unlikely]] return; }
L_00198534:
    set32(c.r[3], ld32((c.r[2].w[0] + 32u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_00198558; } }
    set32(c.r[2], c.r[16].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[17], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 6;
L_00198558:
    set32(c.r[3], ld32((c.r[21].w[0] + 24u)));
    set32(c.r[2], 0u + 25500u);
    set32(c.r[3], ld32((c.r[3].w[0] + 24u)));
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    c.r[20].d[0] = ld16((c.r[3].w[0] + 26u));
    c.budget -= 8;
    { const bool t = c.r[20].d[0] != c.r[2].d[0];  if (t) { goto L_0019857C; } }
    c.r[20].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0019857C:
    set32(c.r[4], ld32((c.r[21].w[0] + 144u)));
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019858Cu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_007F(c, 309u, depth + 1u); else { c.pc = 0x002FE4A0u; return; } if (c.pc != 0x0019858Cu) [[unlikely]] return; }
L_0019858C:
    c.r[19].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[19].w[0] << 1);
    c.budget -= 2;
L_00198594:
    set32(c.r[2], 0u + 25500u);
    set32(c.r[3], c.r[17].w[0] + c.r[3].w[0]);
    set32(c.r[16], c.r[3].w[0] + 26u);
    c.r[3].d[0] = ld16((c.r[3].w[0] + 26u));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001986A4; } }
    set32(c.r[2], ld32((c.r[21].w[0] + 24u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 24u)));
    c.budget -= 4;
    { const bool t = c.r[19].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 3u);  if (t) { goto L_001986A4; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001985D8; } }
    set32(c.r[2], ld32((c.r[21].w[0] + 144u)));
    set32(c.r[5], 0u + 72u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001985D8u); set32(c.r[4], c.r[2].w[0] + 24u);  if (depth < kMaxDepth) unit_006F(c, 201u, depth + 1u); else { c.pc = 0x002BE260u; return; } if (c.pc != 0x001985D8u) [[unlikely]] return; }
L_001985D8:
    c.r[3].d[0] = ld16((c.r[16].w[0]));
    set32(c.r[2], 0u + 72u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001985FC; } }
    set32(c.r[2], ld32((c.r[21].w[0] + 144u)));
    set32(c.r[5], 0u + 3u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001985FCu); set32(c.r[4], c.r[2].w[0] + 24u);  if (depth < kMaxDepth) unit_006F(c, 201u, depth + 1u); else { c.pc = 0x002BE260u; return; } if (c.pc != 0x001985FCu) [[unlikely]] return; }
L_001985FC:
    c.r[3].d[0] = ld16((c.r[16].w[0]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_00198664; } }
L_00198608:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == c.r[18].d[0]; set32(c.r[2], 0u + 25500u);  if (t) { goto L_00198660; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00198660; } }
    c.budget -= 2;
    { const bool t = c.r[20].d[0] != c.r[3].d[0];  if (t) { goto L_00198670; } }
    set32(c.r[20], ld32((c.r[21].w[0] + 144u)));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u + 1u);
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[6], ld32((c.r[20].w[0] + 8412u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019863Cu); set32(c.r[4], c.r[20].w[0] + 24u);  if (depth < kMaxDepth) unit_006F(c, 197u, depth + 1u); else { c.pc = 0x002BE130u; return; } if (c.pc != 0x0019863Cu) [[unlikely]] return; }
L_0019863C:
    st32((c.r[20].w[0] + 8412u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[21].w[0] + 144u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 8412u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00198650u); set32(c.r[4], c.r[2].w[0] + 24u);  if (depth < kMaxDepth) unit_006F(c, 203u, depth + 1u); else { c.pc = 0x002BE2A0u; return; } if (c.pc != 0x00198650u) [[unlikely]] return; }
L_00198650:
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], c.r[18].w[0] << 1);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    c.r[3].d[0] = ld16((c.r[2].w[0] + 26u));
    c.budget -= 4;
L_00198660:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_00198664:
    c.r[2].d[0] = c.r[18].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00198608u | kUnwind; return; } goto L_00198608; } }
L_00198670:
    set32(c.r[2], ld32((c.r[21].w[0] + 144u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 8412u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00198680u); set32(c.r[4], c.r[2].w[0] + 24u);  if (depth < kMaxDepth) unit_006F(c, 203u, depth + 1u); else { c.pc = 0x002BE2A0u; return; } if (c.pc != 0x00198680u) [[unlikely]] return; }
L_00198680:
    set32(c.r[4], ld32((c.r[21].w[0] + 144u)));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00198690u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_007F(c, 309u, depth + 1u); else { c.pc = 0x002FE4A0u; return; } if (c.pc != 0x00198690u) [[unlikely]] return; }
L_00198690:
    set32(c.r[2], ld32((c.r[21].w[0] + 144u)));
    c.r[6].d[0] = 0ull + 0ull;
    c.r[5].d[0] = ld16((c.r[16].w[0]));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001986A4u); set32(c.r[4], c.r[2].w[0] + 24u);  if (depth < kMaxDepth) unit_006F(c, 201u, depth + 1u); else { c.pc = 0x002BE260u; return; } if (c.pc != 0x001986A4u) [[unlikely]] return; }
L_001986A4:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.r[2].d[0] = c.r[19].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], c.r[19].w[0] << 1);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00198594u | kUnwind; return; } goto L_00198594; } }
    set32(c.r[4], ld32((c.r[21].w[0] + 144u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 104u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001986C8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001986C8u) [[unlikely]] return; }
L_001986C8:
    set32(c.r[3], ld32((c.r[21].w[0] + 24u)));
    st32((c.r[3].w[0] + 36u), 0u);
    c.budget -= 2;
L_001986D0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_00198700:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[5].d[0];  if (t) { goto L_00198724; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 36u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00198724u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00198724u) [[unlikely]] return; }
L_00198724:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00198730:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x0017A580u | kUnwind; return; } [[clang::musttail]] return unit_001E(c, 292u, depth); }
L_00198740:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x0017A600u | kUnwind; return; } [[clang::musttail]] return unit_001E(c, 297u, depth); }
L_00198750:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00198760u);  if (depth < kMaxDepth) unit_001E(c, 298u, depth + 1u); else { c.pc = 0x0017A610u; return; } if (c.pc != 0x00198760u) [[unlikely]] return; }
L_00198760:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00198768u);  if (depth < kMaxDepth) unit_001D(c, 405u, depth + 1u); else { c.pc = 0x00177600u; return; } if (c.pc != 0x00198768u) [[unlikely]] return; }
L_00198768:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00198774u); set32(c.r[5], 0u + 184u);  if (depth < kMaxDepth) unit_001D(c, 454u, depth + 1u); else { c.pc = 0x00177BE0u; return; } if (c.pc != 0x00198774u) [[unlikely]] return; }
L_00198774:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00198780:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00198790u);  if (depth < kMaxDepth) unit_001E(c, 302u, depth + 1u); else { c.pc = 0x0017A680u; return; } if (c.pc != 0x00198790u) [[unlikely]] return; }
L_00198790:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00198798u);  if (depth < kMaxDepth) unit_001D(c, 405u, depth + 1u); else { c.pc = 0x00177600u; return; } if (c.pc != 0x00198798u) [[unlikely]] return; }
L_00198798:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001987A4u); set32(c.r[5], 0u + 184u);  if (depth < kMaxDepth) unit_001D(c, 454u, depth + 1u); else { c.pc = 0x00177BE0u; return; } if (c.pc != 0x001987A4u) [[unlikely]] return; }
L_001987A4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001987B0:
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0];  c.pc = t; if (t - 0x00198000u < 16384u) { entry = entries_0026[(t - 0x00198000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_001987C0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[3], 0u + 2u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[4], ld32((c.r[4].w[0] + 36u)));
    c.budget -= 10;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0019895C; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 144u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0019895C; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 8396u)));
    set32(c.r[3], c.r[3].w[0] - 6u);
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] != 0ull; c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_0019880C; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0019880C:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0019895C; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 44u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00198824u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00198824u) [[unlikely]] return; }
L_00198824:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00198848; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 24u)));
    set32(c.r[3], 0u + 1u);
    set32(c.r[4], 0u + 2u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00198840u); st32((c.r[2].w[0] + 36u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_0076(c, 191u, depth + 1u); else { c.pc = 0x002D9970u; return; } if (c.pc != 0x00198840u) [[unlikely]] return; }
L_00198840:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_00198960; } }
L_00198848:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00198850u); set32(c.r[4], ld32((c.r[16].w[0] + 144u)));  if (depth < kMaxDepth) unit_007F(c, 307u, depth + 1u); else { c.pc = 0x002FE470u; return; } if (c.pc != 0x00198850u) [[unlikely]] return; }
L_00198850:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0019895C; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 144u)));
    set32(c.r[3], 0u + 2u);
    set32(c.r[5], ld32((c.r[4].w[0] + 8u)));
    c.budget -= 5;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_0019895C; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 8396u)));
    set32(c.r[2], 0u + 6u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0019894C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00198884u);  if (depth < kMaxDepth) unit_001D(c, 405u, depth + 1u); else { c.pc = 0x00177600u; return; } if (c.pc != 0x00198884u) [[unlikely]] return; }
    goto L_00198884;
L_00198880:
    c.budget -= 1;
L_00198884:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019888Cu); set32(c.r[17], ld32((c.r[2].w[0] + 60u)));  if (depth < kMaxDepth) unit_001D(c, 405u, depth + 1u); else { c.pc = 0x00177600u; return; } if (c.pc != 0x0019888Cu) [[unlikely]] return; }
L_0019888C:
    set32(c.r[3], ld32((c.r[2].w[0] + 32u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001988B4; } }
    set32(c.r[2], c.r[17].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[3].w[0] + c.r[2].w[0]);  if (t) { goto L_001988B8; } }
L_001988B4:
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001988B8:
    set32(c.r[2], ld32((c.r[16].w[0] + 144u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 8412u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001988C8u); set32(c.r[4], c.r[2].w[0] + 24u);  if (depth < kMaxDepth) unit_006F(c, 203u, depth + 1u); else { c.pc = 0x002BE2A0u; return; } if (c.pc != 0x001988C8u) [[unlikely]] return; }
L_001988C8:
    set32(c.r[4], ld32((c.r[16].w[0] + 24u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x6D6E0000u);
    c.r[5].d[0] = c.r[3].d[0] | 21335ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    st16((c.r[3].w[0] + 26u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001988F0u); set32(c.r[4], ld32((c.r[1].w[0] + 26392u)));  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x001988F0u) [[unlikely]] return; }
L_001988F0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_001988FC; } }
    set32(c.r[17], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 1;
L_001988FC:
    set32(c.r[2], ld32((c.r[16].w[0] + 144u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 8412u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019890Cu); set32(c.r[4], c.r[2].w[0] + 24u);  if (depth < kMaxDepth) unit_006F(c, 203u, depth + 1u); else { c.pc = 0x002BE2A0u; return; } if (c.pc != 0x0019890Cu) [[unlikely]] return; }
L_0019890C:
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 24u)));
    set32(c.r[6], ld32((c.r[2].w[0] + 24u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00198924u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0053(c, 87u, depth + 1u); else { c.pc = 0x0024C8E0u; return; } if (c.pc != 0x00198924u) [[unlikely]] return; }
L_00198924:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00198930u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0053(c, 90u, depth + 1u); else { c.pc = 0x0024C940u; return; } if (c.pc != 0x00198930u) [[unlikely]] return; }
L_00198930:
    set32(c.r[4], ld32((c.r[16].w[0] + 144u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00198944u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00198944u) [[unlikely]] return; }
L_00198944:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0019895C; } }
L_0019894C:
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 36u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0019895Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0019895Cu) [[unlikely]] return; }
L_0019895C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_00198960:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00198970:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[1].w[0] + 26392u)));
    set32(c.r[16], ld32((c.r[2].w[0] + 332u)));
    c.budget -= 9;
    { const bool t = c.r[16].d[0] == 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00198BA8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019899Cu); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x0019899Cu) [[unlikely]] return; }
L_0019899C:
    set32(c.r[3], ld32((c.r[2].w[0])));
    set32(c.r[4], 0u + 202u);
    st32((c.r[16].w[0] + 48u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    st32((c.r[16].w[0] + 52u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001989BCu); st32((c.r[16].w[0] + 56u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000B(c, 461u, depth + 1u); else { c.pc = 0x0012FD60u; return; } if (c.pc != 0x001989BCu) [[unlikely]] return; }
L_001989BC:
    st32((c.r[16].w[0] + 352u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43370000u);
    st32((c.r[16].w[0] + 356u), 0u);
    c.f[13] = c.r[2].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = ld32((c.r[1].w[0] + 13888u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.f[0] = c.r[2].w[0];
    c.f[14] = fp::cvt_s_w(c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    st32((c.r[16].w[0] + 16u), c.f[1]);
    c.f[0] = ld32((c.r[1].w[0] + 13888u));
    st32((c.r[16].w[0] + 20u), c.f[0]);
    st32((c.r[16].w[0] + 24u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 128u)));
    st32((c.r[16].w[0] + 60u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 128u)));
    st32((c.r[16].w[0] + 300u), c.r[2].w[0]);
    c.f[0] = ld32((c.r[17].w[0] + 132u));
    set32(c.r[25], ld32((c.r[16].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 27;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00198A28u); c.f[12] = fp::cvt_s_w(c.f[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00198A28u) [[unlikely]] return; }
L_00198A28:
    set32(c.r[25], ld32((c.r[16].w[0] + 176u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u - 1u);
    set32(c.r[25], ld32((c.r[25].w[0] + 68u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00198A48u); set32(c.r[8], 0u + 2u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00198A48u) [[unlikely]] return; }
L_00198A48:
    set32(c.r[25], ld32((c.r[16].w[0] + 176u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u - 1u);
    set32(c.r[25], ld32((c.r[25].w[0] + 68u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00198A68u); c.r[8].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00198A68u) [[unlikely]] return; }
L_00198A68:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00198A70u); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x00198A70u) [[unlikely]] return; }
L_00198A70:
    set32(c.r[3], ld32((c.r[2].w[0])));
    set32(c.r[4], 0u + 178u);
    st32((c.r[16].w[0] + 48u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    st32((c.r[16].w[0] + 52u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00198A90u); st32((c.r[16].w[0] + 56u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000B(c, 461u, depth + 1u); else { c.pc = 0x0012FD60u; return; } if (c.pc != 0x00198A90u) [[unlikely]] return; }
L_00198A90:
    st32((c.r[16].w[0] + 352u), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x436D0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43E60000u);
    st32((c.r[16].w[0] + 356u), 0u);
    c.f[12] = c.r[2].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[1] = ld32((c.r[1].w[0] + 13880u));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00150000u);
    c.r[2].d[0] = c.r[2].d[0] | 17999ull;
    c.f[0] = c.r[2].w[0];
    c.f[13] = c.r[3].w[0];
    c.f[14] = fp::cvt_s_w(c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    st32((c.r[16].w[0] + 16u), c.f[1]);
    c.f[0] = ld32((c.r[1].w[0] + 13880u));
    st32((c.r[16].w[0] + 20u), c.f[0]);
    st32((c.r[16].w[0] + 24u), c.r[5].w[0]);
    set32(c.r[25], ld32((c.r[16].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 22;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00198AE8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00198AE8u) [[unlikely]] return; }
L_00198AE8:
    set32(c.r[25], ld32((c.r[16].w[0] + 176u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u - 1u);
    set32(c.r[25], ld32((c.r[25].w[0] + 68u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00198B08u); set32(c.r[8], 0u + 2u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00198B08u) [[unlikely]] return; }
L_00198B08:
    set32(c.r[25], ld32((c.r[16].w[0] + 176u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u - 1u);
    set32(c.r[25], ld32((c.r[25].w[0] + 68u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00198B28u); c.r[8].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00198B28u) [[unlikely]] return; }
L_00198B28:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00198B30u); set32(c.r[4], 0u + 388u);  if (depth < kMaxDepth) unit_000B(c, 461u, depth + 1u); else { c.pc = 0x0012FD60u; return; } if (c.pc != 0x00198B30u) [[unlikely]] return; }
L_00198B30:
    st32((c.r[16].w[0] + 352u), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43830000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43E60000u);
    st32((c.r[16].w[0] + 356u), 0u);
    c.f[12] = c.r[2].w[0];
    set32(c.r[25], ld32((c.r[16].w[0] + 176u)));
    c.f[13] = c.r[3].w[0];
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00150000u);
    c.r[2].d[0] = c.r[2].d[0] | 17999ull;
    c.f[0] = c.r[2].w[0];
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 14;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00198B68u); c.f[14] = fp::cvt_s_w(c.f[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00198B68u) [[unlikely]] return; }
L_00198B68:
    set32(c.r[25], ld32((c.r[16].w[0] + 176u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u - 1u);
    set32(c.r[25], ld32((c.r[25].w[0] + 68u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00198B88u); set32(c.r[8], 0u + 2u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00198B88u) [[unlikely]] return; }
L_00198B88:
    set32(c.r[25], ld32((c.r[16].w[0] + 176u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u - 1u);
    set32(c.r[25], ld32((c.r[25].w[0] + 68u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00198BA8u); c.r[8].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00198BA8u) [[unlikely]] return; }
L_00198BA8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00198BB0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0026(c, 100u, depth + 1u); else { c.pc = 0x00198BD0u; return; } if (c.pc != 0x00198BB0u) [[unlikely]] return; }
L_00198BB0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00198BD0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[1].w[0] + 26392u)));
    set32(c.r[18], ld32((c.r[3].w[0] + 440u)));
    c.budget -= 11;
    { const bool t = c.r[18].d[0] == 0ull; c.r[19].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00198DF8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00198C04u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x00198C04u) [[unlikely]] return; }
L_00198C04:
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[18].w[0] + 48u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 4u)));
    st32((c.r[18].w[0] + 52u), c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    st32((c.r[18].w[0] + 56u), c.r[2].w[0]);
    st32((c.r[18].w[0] + 16u), c.r[3].w[0]);
    st32((c.r[18].w[0] + 20u), c.r[3].w[0]);
    st32((c.r[18].w[0] + 24u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 128u)));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00198C38u); st32((c.r[18].w[0] + 60u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_001D(c, 405u, depth + 1u); else { c.pc = 0x00177600u; return; } if (c.pc != 0x00198C38u) [[unlikely]] return; }
L_00198C38:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00198C40u); set32(c.r[16], ld32((c.r[2].w[0] + 60u)));  if (depth < kMaxDepth) unit_001D(c, 405u, depth + 1u); else { c.pc = 0x00177600u; return; } if (c.pc != 0x00198C40u) [[unlikely]] return; }
L_00198C40:
    set32(c.r[4], ld32((c.r[2].w[0] + 32u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_00198C64; } }
    set32(c.r[3], c.r[16].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[17], c.r[4].w[0] + c.r[3].w[0]);
    c.budget -= 6;
L_00198C64:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_00198CFC; } }
L_00198C6C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00198C74u); set32(c.r[4], 0u + 202u);  if (depth < kMaxDepth) unit_000B(c, 461u, depth + 1u); else { c.pc = 0x0012FD60u; return; } if (c.pc != 0x00198C74u) [[unlikely]] return; }
L_00198C74:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[7], c.r[16].w[0] + 1u);
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00198C8Cu); set32(c.r[5], c.r[5].w[0] + 13864u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x00127458u; return; } if (c.pc != 0x00198C8Cu) [[unlikely]] return; }
L_00198C8C:
    set32(c.r[2], c.r[16].w[0] << 2);
    set32(c.r[3], c.r[29].w[0] + 80u);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    st32((c.r[18].w[0] + 352u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 3);
    st32((c.r[18].w[0] + 356u), 0u);
    set32(c.r[2], c.r[2].w[0] - c.r[16].w[0]);
    set32(c.r[25], ld32((c.r[18].w[0] + 176u)));
    set32(c.r[3], c.r[2].w[0] + 201u);
    set32(c.r[5], ld32((c.r[19].w[0] + 132u)));
    c.f[1] = c.r[3].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.f[13] = fp::cvt_s_w(c.f[1]);
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.f[0] = c.r[2].w[0];
    set32(c.r[2], c.r[5].w[0] + 6u);
    c.f[1] = c.r[2].w[0];
    c.f[14] = fp::cvt_s_w(c.f[0]);
    c.budget -= 23;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00198CE8u); c.f[12] = fp::cvt_s_w(c.f[1]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00198CE8u) [[unlikely]] return; }
L_00198CE8:
    set32(c.r[25], ld32((c.r[18].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00198CF8u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00198CF8u) [[unlikely]] return; }
L_00198CF8:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_00198CFC:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 22u)));
    c.r[3].d[0] = c.r[16].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[3].d[0] = c.r[4].sd[0] < 2ll ? 1ull : 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00198C6Cu | kUnwind; return; } goto L_00198C6C; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_00198DF8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00198D1Cu);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x00198D1Cu) [[unlikely]] return; }
L_00198D1C:
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[16].d[0] = 0ull + 0ull;
    st32((c.r[18].w[0] + 48u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 4u)));
    st32((c.r[18].w[0] + 52u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 8u)));
    st32((c.r[18].w[0] + 56u), c.r[4].w[0]);
    c.f[0] = ld32((c.r[1].w[0] + 13872u));
    st32((c.r[18].w[0] + 16u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = ld32((c.r[1].w[0] + 13872u));
    st32((c.r[18].w[0] + 20u), c.f[0]);
    c.budget -= 16;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 24u), c.r[3].w[0]);  if (t) { goto L_00198DE8; } }
L_00198D5C:
    set32(c.r[3], 0u + 25500u);
    set32(c.r[4], c.r[17].w[0] + c.r[4].w[0]);
    c.r[4].d[0] = ld16((c.r[4].w[0] + 26u));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_00198DE4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00198D78u);  if (depth < kMaxDepth) unit_000B(c, 102u, depth + 1u); else { c.pc = 0x0012CDE0u; return; } if (c.pc != 0x00198D78u) [[unlikely]] return; }
L_00198D78:
    st32((c.r[18].w[0] + 352u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[2], c.r[16].w[0] << 2);
    st32((c.r[18].w[0] + 356u), 0u);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[25], ld32((c.r[18].w[0] + 176u)));
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[5], ld32((c.r[19].w[0] + 132u)));
    set32(c.r[3], c.r[2].w[0] - c.r[16].w[0]);
    set32(c.r[3], c.r[3].w[0] + 223u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.f[1] = c.r[3].w[0];
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.f[0] = c.r[2].w[0];
    c.f[13] = fp::cvt_s_w(c.f[1]);
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    set32(c.r[2], c.r[5].w[0] + 29u);
    c.f[1] = c.r[2].w[0];
    c.f[14] = fp::cvt_s_w(c.f[0]);
    c.budget -= 23;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00198DD4u); c.f[12] = fp::cvt_s_w(c.f[1]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00198DD4u) [[unlikely]] return; }
L_00198DD4:
    set32(c.r[25], ld32((c.r[18].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00198DE4u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00198DE4u) [[unlikely]] return; }
L_00198DE4:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_00198DE8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 22u)));
    c.r[3].d[0] = c.r[16].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[4], c.r[16].w[0] << 1);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00198D5Cu | kUnwind; return; } goto L_00198D5C; } }
L_00198DF8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_00198E20:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 20u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00198700u | kUnwind; return; } goto L_00198700; }
L_00198E30:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 20u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001984C0u | kUnwind; return; } goto L_001984C0; }
L_00198E40:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 20u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00198420u | kUnwind; return; } goto L_00198420; }
L_00198E50:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x474F0000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[7].d[0] = c.r[2].d[0] | 16970ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00198E6Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_002C(c, 200u, depth + 1u); else { c.pc = 0x001B1A30u; return; } if (c.pc != 0x00198E6Cu) [[unlikely]] return; }
L_00198E6C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] - 12016u);
    st32((c.r[16].w[0] + 56u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 108u), 0u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 96u), c.r[3].w[0]);
    st8((c.r[16].w[0] + 112u), static_cast<std::uint8_t>(0u));
    st32((c.r[16].w[0] + 104u), 0u);
    st32((c.r[16].w[0] + 100u), 0u);
    st8((c.r[16].w[0] + 113u), static_cast<std::uint8_t>(0u));
    st32((c.r[16].w[0] + 116u), 0u);
    st8((c.r[16].w[0] + 114u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 17;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00198EB0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00198EF8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 12016u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00198EE0u); st32((c.r[17].w[0] + 56u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_002C(c, 203u, depth + 1u); else { c.pc = 0x001B1AC0u; return; } if (c.pc != 0x00198EE0u) [[unlikely]] return; }
L_00198EE0:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00198EFC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00198EF8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x00198EF8u) [[unlikely]] return; }
L_00198EF8:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00198EFC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00198F10:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 108u)));
    c.budget -= 8;
    { const bool t = c.r[2].sd[0] <= 0; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00198F40; } }
    set32(c.r[3], c.r[2].w[0] - 1u);
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 108u), c.r[3].w[0]);  if (t) { goto L_001990C8; } }
L_00198F40:
    set32(c.r[25], ld32((c.r[4].w[0] + 56u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00198F50u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00198F50u) [[unlikely]] return; }
L_00198F50:
    set32(c.r[5], ld32((c.r[17].w[0] + 96u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00198F5Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0026(c, 139u, depth + 1u); else { c.pc = 0x001991D0u; return; } if (c.pc != 0x00198F5Cu) [[unlikely]] return; }
L_00198F5C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001990C4; } }
    set32(c.r[2], 0u + 60u);
    st32((c.r[17].w[0] + 108u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 116u), c.r[16].w[0]);
    c.f[0] = ld32((c.r[16].w[0] + 228u));
    st32((c.r[16].w[0] + 604u), c.f[0]);
    c.r[2].d[0] = ld8((c.r[17].w[0] + 112u));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00198FBC; } }
    st8((c.r[17].w[0] + 112u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[25], ld32((c.r[17].w[0] + 56u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 56u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00198F98u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00198F98u) [[unlikely]] return; }
L_00198F98:
    set32(c.r[2], ld32((c.r[17].w[0] + 104u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], c.r[2].w[0] - 1000u);  if (t) { goto L_00198FAC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00198FACu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_002C(c, 206u, depth + 1u); else { c.pc = 0x001B1B20u; return; } if (c.pc != 0x00198FACu) [[unlikely]] return; }
L_00198FAC:
    set32(c.r[25], ld32((c.r[17].w[0] + 56u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 64u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00198FBCu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00198FBCu) [[unlikely]] return; }
L_00198FBC:
    set32(c.r[3], ld32((c.r[16].w[0] + 164u)));
    set32(c.r[2], 0u + 660u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[18].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_00198FD0; } }
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00198FD0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00198FD8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0034(c, 137u, depth + 1u); else { c.pc = 0x001D15B0u; return; } if (c.pc != 0x00198FD8u) [[unlikely]] return; }
L_00198FD8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00198FE4; } }
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00198FE4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00198FECu);  if (depth < kMaxDepth) unit_0034(c, 141u, depth + 1u); else { c.pc = 0x001D1670u; return; } if (c.pc != 0x00198FECu) [[unlikely]] return; }
L_00198FEC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00198FF8; } }
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00198FF8:
    set32(c.r[5], ld32((c.r[17].w[0] + 100u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_001990BC; } }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull; set32(c.r[2], 0u + 12014u);  if (t) { goto L_001990B8; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != c.r[2].d[0]; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00199088; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00420000u);
    c.r[6].d[0] = ld8((c.r[1].w[0] + 28008u));
    set32(c.r[3], c.r[3].w[0] - 25200u);
    set32(c.r[2], 0u + 5u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[5], c.r[3].w[0] + c.r[6].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[5].d[0] = ld8((c.r[5].w[0]));
    set32(c.r[3], c.r[6].w[0] + 1u);
    mmi::div(c, 0, c.r[5].w[0], c.r[2].w[0]);
    st8((c.r[1].w[0] + 28008u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[5], ld32((c.r[17].w[0] + 100u)));
    c.r[2].d[0] = c.hi.d[0];
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019905Cu); set32(c.r[6], c.r[2].w[0] + 1u);  if (depth < kMaxDepth) unit_0030(c, 19u, depth + 1u); else { c.pc = 0x001C02C0u; return; } if (c.pc != 0x0019905Cu) [[unlikely]] return; }
L_0019905C:
    c.r[6].d[0] = ld8((c.r[16].w[0] + 396u));
    set32(c.r[2], 0u - 129u);
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(128ll);
    set32(c.r[5], 0u + 1u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[2].d[0] = c.r[6].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00199080u); st8((c.r[16].w[0] + 396u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_003F(c, 317u, depth + 1u); else { c.pc = 0x001FF2F0u; return; } if (c.pc != 0x00199080u) [[unlikely]] return; }
L_00199080:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[16].w[0] + 912u)));  if (t) { goto L_001990B4; } }
L_00199088:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00199090u);  if (depth < kMaxDepth) unit_0030(c, 17u, depth + 1u); else { c.pc = 0x001C02A0u; return; } if (c.pc != 0x00199090u) [[unlikely]] return; }
L_00199090:
    c.r[3].d[0] = ld8((c.r[17].w[0] + 114u));
    set32(c.r[2], 0u - 5u);
    c.r[4].d[0] = ld8((c.r[16].w[0] + 392u));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    set32(c.r[3], c.r[3].w[0] << 2);
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[16].w[0] + 392u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[16].w[0] + 912u)));
    c.budget -= 9;
L_001990B4:
    st32((c.r[16].w[0] + 988u), c.r[2].w[0]);
    c.budget -= 1;
L_001990B8:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_001990BC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_001990CC; } }
L_001990C4:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001990C8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_001990CC:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001990E0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[25], ld32((c.r[4].w[0] + 56u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00199100u); c.r[17].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00199100u) [[unlikely]] return; }
L_00199100:
    set32(c.r[25], ld32((c.r[17].w[0] + 56u)));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00199114u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00199114u) [[unlikely]] return; }
L_00199114:
    c.r[3].d[0] = ld8((c.r[17].w[0] + 113u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], c.r[29].w[0] + 48u);  if (t) { goto L_0019918C; } }
    st128((c.r[3].w[0]) & ~15u, c.vu0.vf[0]);
    set32(c.r[3], c.r[29].w[0] + 64u);
    st128((c.r[3].w[0]) & ~15u, c.vu0.vf[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.f[0] = ld32((c.r[16].w[0]));
    st32((c.r[29].w[0] + 64u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 4u));
    st32((c.r[29].w[0] + 68u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 8u));
    st32((c.r[29].w[0] + 72u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0]));
    st32((c.r[29].w[0] + 48u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 4u));
    st32((c.r[29].w[0] + 52u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 8u));
    st32((c.r[29].w[0] + 56u), c.f[0]);
    set32(c.r[25], ld32((c.r[4].w[0] + 56u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 20;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00199170u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00199170u) [[unlikely]] return; }
L_00199170:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_00199188; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00199184u); set32(c.r[5], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0010(c, 233u, depth + 1u); else { c.pc = 0x00143430u; return; } if (c.pc != 0x00199184u) [[unlikely]] return; }
L_00199184:
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_00199188:
    st8((c.r[17].w[0] + 113u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 1;
L_0019918C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_001991A0:
    set32(c.r[2], ld32((c.r[4].w[0] + 108u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001991B4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001991C0; } }
L_001991B4:
    c.r[2].d[0] = ld8((c.r[4].w[0] + 112u));
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
L_001991C0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001991D0:
    set32(c.r[29], c.r[29].w[0] - 240u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 11;
    { const bool t = c.r[21].d[0] != 0ull; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_00199204; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00199444; } }
L_00199204:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], ld32((c.r[1].w[0] + 31520u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00199220; } }
    c.budget -= 2;
    { const bool t = c.r[21].d[0] != 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_00199228; } }
L_00199220:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));  if (t) { goto L_00199448; } }
L_00199228:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[19].sd[0] < 8ll ? 1ull : 0ull;  if (t) { goto L_00199438; } }
L_00199230:
    set32(c.r[3], c.r[19].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 28320u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[18], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { const bool t = c.r[18].d[0] != 0ull; set32(c.r[4], c.r[29].w[0] + 144u);  if (t) { goto L_00199250; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00199444; } }
L_00199250:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00199258u);  if (depth < kMaxDepth) unit_0010(c, 137u, depth + 1u); else { c.pc = 0x001419F0u; return; } if (c.pc != 0x00199258u) [[unlikely]] return; }
L_00199258:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00199260u); set32(c.r[4], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_0010(c, 137u, depth + 1u); else { c.pc = 0x001419F0u; return; } if (c.pc != 0x00199260u) [[unlikely]] return; }
L_00199260:
    set32(c.r[2], c.r[29].w[0] + 176u);
    st128((c.r[2].w[0]) & ~15u, c.vu0.vf[0]);
    c.f[2] = 0u;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.f[0] = c.r[3].w[0];
    set32(c.r[5], c.r[29].w[0] + 112u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41180000u);
    st32((c.r[29].w[0] + 196u), 0u);
    c.f[1] = c.r[2].w[0];
    st32((c.r[29].w[0] + 192u), c.f[2]);
    set32(c.r[2], ld32((c.r[18].w[0] + 64u)));
    set32(c.r[2], c.r[2].w[0] + 48u);
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    st128((c.r[29].w[0] + 176u) & ~15u, c.r[2]);
    st32((c.r[29].w[0] + 188u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 356u));
    ld128((c.r[29].w[0] + 176u) & ~15u, c.r[2]);
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[2]);
    st32((c.r[29].w[0] + 192u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 192u));
    st32((c.r[29].w[0] + 160u), c.f[0]);
    ld128((c.r[21].w[0] + 48u) & ~15u, c.r[2]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[2]);
    c.f[0] = ld32((c.r[21].w[0] + 64u));
    c.budget -= 28;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001992D0u); st32((c.r[29].w[0] + 128u), c.f[0]);  if (depth < kMaxDepth) unit_0010(c, 139u, depth + 1u); else { c.pc = 0x00141A70u; return; } if (c.pc != 0x001992D0u) [[unlikely]] return; }
L_001992D0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[29].w[0] + 176u);  if (t) { goto L_00199430; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001992E0u); set32(c.r[5], c.r[21].w[0] + 48u);  if (depth < kMaxDepth) unit_0010(c, 141u, depth + 1u); else { c.pc = 0x00141AC0u; return; } if (c.pc != 0x001992E0u) [[unlikely]] return; }
L_001992E0:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_00199430; } }
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 239u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001992FCu); st8((c.r[29].w[0] + 239u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0026(c, 154u, depth + 1u); else { c.pc = 0x001994B0u; return; } if (c.pc != 0x001992FCu) [[unlikely]] return; }
L_001992FC:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] & 2ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00199314; } }
    set32(c.r[2], 0u + 1u);
    st8((c.r[29].w[0] + 239u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_00199314:
    c.r[2].d[0] = c.r[17].d[0] & 4ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = c.r[17].d[0] & c.r[20].d[0];  if (t) { goto L_0019932C; } }
    set32(c.r[2], 0u + 1u);
    st8((c.r[29].w[0] + 239u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[17].d[0] & c.r[20].d[0];
    c.budget -= 3;
L_0019932C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00199430; } }
    c.r[2].d[0] = ld8((c.r[18].w[0] + 396u));
    c.r[2].d[0] = c.r[2].d[0] & 63ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_00199350; } }
    c.r[2].d[0] = ld8((c.r[29].w[0] + 239u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00199430; } }
L_00199350:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0019941C; } }
L_00199358:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00199360u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0031(c, 225u, depth + 1u); else { c.pc = 0x001C71F0u; return; } if (c.pc != 0x00199360u) [[unlikely]] return; }
L_00199360:
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    c.r[2].d[0] = ld8((c.r[18].w[0] + 396u));
    c.r[2].d[0] = c.r[2].d[0] & 63ull;
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00199384; } }
    c.r[2].d[0] = ld8((c.r[29].w[0] + 239u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00199418; } }
L_00199384:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019938Cu);  if (depth < kMaxDepth) unit_0031(c, 186u, depth + 1u); else { c.pc = 0x001C6D50u; return; } if (c.pc != 0x0019938Cu) [[unlikely]] return; }
L_0019938C:
    set32(c.r[3], c.r[2].w[0] << 2);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], c.r[3].w[0] + c.r[18].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[3], ld32((c.r[5].w[0] + 64u)));
    c.f[0] = ld32((c.r[3].w[0] + 48u));
    st32((c.r[29].w[0] + 176u), c.f[0]);
    set32(c.r[3], ld32((c.r[5].w[0] + 64u)));
    c.f[0] = ld32((c.r[3].w[0] + 52u));
    st32((c.r[29].w[0] + 180u), c.f[0]);
    set32(c.r[3], ld32((c.r[5].w[0] + 64u)));
    c.f[0] = ld32((c.r[3].w[0] + 56u));
    st32((c.r[29].w[0] + 184u), c.f[0]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001993C8u); st32((c.r[29].w[0] + 188u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0034(c, 133u, depth + 1u); else { c.pc = 0x001D14E0u; return; } if (c.pc != 0x001993C8u) [[unlikely]] return; }
L_001993C8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001993D8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 6u);  if (t) { goto L_001993DC; } }
L_001993D8:
    set32(c.r[2], 0u + 2u);
    c.budget -= 1;
L_001993DC:
    c.f[0] = c.r[2].w[0];
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 176u);
    c.r[6].d[0] = 0ull + 0ull;
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001993FCu); st32((c.r[29].w[0] + 192u), c.f[0]);  if (depth < kMaxDepth) unit_0010(c, 247u, depth + 1u); else { c.pc = 0x001437D0u; return; } if (c.pc != 0x001993FCu) [[unlikely]] return; }
L_001993FC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00199418; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 912u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00199410u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_004A(c, 11u, depth + 1u); else { c.pc = 0x00228120u; return; } if (c.pc != 0x00199410u) [[unlikely]] return; }
L_00199410:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_00199444; } }
L_00199418:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_0019941C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00199424u);  if (depth < kMaxDepth) unit_0031(c, 226u, depth + 1u); else { c.pc = 0x001C7210u; return; } if (c.pc != 0x00199424u) [[unlikely]] return; }
L_00199424:
    c.r[2].d[0] = c.r[16].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00199358u | kUnwind; return; } goto L_00199358; } }
L_00199430:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.r[2].d[0] = c.r[19].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 2;
L_00199438:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00199230u | kUnwind; return; } goto L_00199230; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00199444:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.budget -= 1;
L_00199448:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 240u);  c.pc = t; return; }
L_00199470:
    set32(c.r[3], ld32((c.r[4].w[0] + 164u)));
    set32(c.r[2], 0u + 12089u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0019949C; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 587u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00199498; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0019949C; } }
L_00199498:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0019949C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001994B0:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const bool t = c.r[4].d[0] == 0ull; c.r[17].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_001994DC; } }
    set32(c.r[4], c.r[4].w[0] + 436u);
    c.budget -= 1;
L_001994DC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x53590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001994E8u); c.r[5].d[0] = c.r[2].d[0] | 20035ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x001994E8u) [[unlikely]] return; }
L_001994E8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_001994F4; } }
    set32(c.r[4], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 1;
L_001994F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001994FCu);  if (depth < kMaxDepth) unit_0033(c, 101u, depth + 1u); else { c.pc = 0x001CD4B0u; return; } if (c.pc != 0x001994FCu) [[unlikely]] return; }
L_001994FC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_0019951C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019950Cu);  if (depth < kMaxDepth) unit_0034(c, 140u, depth + 1u); else { c.pc = 0x001D1640u; return; } if (c.pc != 0x0019950Cu) [[unlikely]] return; }
L_0019950C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0019951C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001996D8; } }
L_0019951C:
    ld128((c.r[19].w[0] + 208u) & ~15u, c.r[2]);
    set32(c.r[4], c.r[29].w[0] + 112u);
    set32(c.r[3], c.r[29].w[0] + 128u);
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[5], c.r[29].w[0] + 80u);
    st128((c.r[4].w[0]) & ~15u, c.r[2]);
    ld128((c.r[19].w[0] + 224u) & ~15u, c.r[2]);
    st128((c.r[3].w[0]) & ~15u, c.r[2]);
    set32(c.r[2], ld32((c.r[19].w[0] + 240u)));
    st32((c.r[29].w[0] + 144u), c.r[2].w[0]);
    st128((c.r[5].w[0]) & ~15u, c.vu0.vf[0]);
    c.f[1] = 0u;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41000000u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.f[0] = c.r[2].w[0];
    st32((c.r[29].w[0] + 96u), c.f[1]);
    st32((c.r[29].w[0] + 100u), 0u);
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019956Cu); st32((c.r[29].w[0] + 96u), c.f[0]);  if (depth < kMaxDepth) unit_0034(c, 93u, depth + 1u); else { c.pc = 0x001D0C90u; return; } if (c.pc != 0x0019956Cu) [[unlikely]] return; }
L_0019956C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_00199594; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019957Cu);  if (depth < kMaxDepth) unit_0034(c, 133u, depth + 1u); else { c.pc = 0x001D14E0u; return; } if (c.pc != 0x0019957Cu) [[unlikely]] return; }
L_0019957C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_00199594; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019958Cu);  if (depth < kMaxDepth) unit_0026(c, 153u, depth + 1u); else { c.pc = 0x00199470u; return; } if (c.pc != 0x0019958Cu) [[unlikely]] return; }
L_0019958C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001995C4; } }
L_00199594:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 587u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001995B8; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 64u)));
    c.r[16].d[0] = c.r[16].d[0] | 4ull;
    ld128((c.r[2].w[0] + 48u) & ~15u, c.r[2]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st128((c.r[29].w[0] + 128u) & ~15u, c.r[2]);  if (t) { goto L_001995BC; } }
L_001995B8:
    c.r[16].d[0] = c.r[16].d[0] | 2ull;
    c.budget -= 1;
L_001995BC:
    set32(c.r[2], 0u + 1u);
    st8((c.r[17].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_001995C4:
    set32(c.r[3], ld32((c.r[19].w[0] + 164u)));
    set32(c.r[2], 0u + 660u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_001995E0; } }
    set32(c.r[2], 0u + 1u);
    c.r[16].d[0] = c.r[16].d[0] | 4ull;
    st8((c.r[17].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
L_001995E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001995E8u);  if (depth < kMaxDepth) unit_0034(c, 137u, depth + 1u); else { c.pc = 0x001D15B0u; return; } if (c.pc != 0x001995E8u) [[unlikely]] return; }
L_001995E8:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_0019960C; } }
    c.f[1] = ld32((c.r[29].w[0] + 132u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.f[0] = c.r[2].w[0];
    c.r[16].d[0] = c.r[16].d[0] | 1ull;
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 132u), c.f[0]);
    c.budget -= 6;
L_0019960C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00199614u);  if (depth < kMaxDepth) unit_0034(c, 141u, depth + 1u); else { c.pc = 0x001D1670u; return; } if (c.pc != 0x00199614u) [[unlikely]] return; }
L_00199614:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_00199630; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 64u)));
    c.r[16].d[0] = c.r[16].d[0] | 8ull;
    ld128((c.r[2].w[0] + 48u) & ~15u, c.r[2]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[2]);
    c.budget -= 4;
L_00199630:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00199638u);  if (depth < kMaxDepth) unit_0034(c, 140u, depth + 1u); else { c.pc = 0x001D1640u; return; } if (c.pc != 0x00199638u) [[unlikely]] return; }
L_00199638:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_0019965C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    c.r[16].d[0] = c.r[16].d[0] | 16ull;
    st32((c.r[29].w[0] + 96u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 64u)));
    ld128((c.r[2].w[0] + 48u) & ~15u, c.r[2]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[2]);
    c.budget -= 6;
L_0019965C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00199664u); set32(c.r[4], ld32((c.r[19].w[0] + 912u)));  if (depth < kMaxDepth) unit_0049(c, 347u, depth + 1u); else { c.pc = 0x00227F90u; return; } if (c.pc != 0x00199664u) [[unlikely]] return; }
L_00199664:
    c.r[16].d[0] = c.r[16].d[0] | c.r[2].d[0];
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[2]);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] != 0ull; st128((c.r[29].w[0] + 80u) & ~15u, c.r[2]);  if (t) { goto L_0019967C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001996D8; } }
L_0019967C:
    set32(c.r[3], ld32((c.r[19].w[0] + 164u)));
    set32(c.r[2], 0u + 660u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_001996B4; } }
    c.r[2].d[0] = ld8((c.r[19].w[0] + 392u));
    c.r[2].d[0] = c.r[2].d[0] << 61;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001996B0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001996A8u); set32(c.r[4], ld32((c.r[19].w[0] + 912u)));  if (depth < kMaxDepth) unit_0049(c, 347u, depth + 1u); else { c.pc = 0x00227F90u; return; } if (c.pc != 0x001996A8u) [[unlikely]] return; }
L_001996A8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001996D4; } }
L_001996B0:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_001996B4:
    set32(c.r[5], c.r[29].w[0] + 80u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001996C4u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0010(c, 247u, depth + 1u); else { c.pc = 0x001437D0u; return; } if (c.pc != 0x001996C4u) [[unlikely]] return; }
L_001996C4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001996D4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001996D8; } }
L_001996D4:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001996D8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_00199700:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[7].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.f[20] = c.f[12];
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00199738u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000F(c, 256u, depth + 1u); else { c.pc = 0x0013E440u; return; } if (c.pc != 0x00199738u) [[unlikely]] return; }
L_00199738:
    set32(c.r[4], c.r[16].w[0] + 8u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00199744u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_000F(c, 264u, depth + 1u); else { c.pc = 0x0013E560u; return; } if (c.pc != 0x00199744u) [[unlikely]] return; }
L_00199744:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] - 12064u);
    set32(c.r[2], c.r[2].w[0] - 12048u);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    ld128((c.r[19].w[0]) & ~15u, c.r[2]);
    st128((c.r[16].w[0] + 32u) & ~15u, c.r[2]);
    st32((c.r[16].w[0] + 48u), 0u);
    st32((c.r[16].w[0] + 52u), 0u);
    st32((c.r[16].w[0] + 56u), c.r[18].w[0]);
    c.budget -= 13;
    { const bool t = c.r[17].sd[0] < 0; st32((c.r[16].w[0] + 60u), c.f[20]);  if (t) { goto L_00199784; } }
    c.f[0] = c.r[17].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_001997A0; } }
L_00199784:
    set32(c.r[3], c.r[17].w[0] >> 1);
    c.r[2].d[0] = c.r[17].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::add(c.f[0], c.f[0]);
    c.budget -= 7;
L_001997A0:
    st32((c.r[16].w[0] + 64u), c.f[0]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_001997D0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00199834; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] - 12064u);
    set32(c.r[2], c.r[2].w[0] - 12048u);
    st32((c.r[17].w[0]), c.r[3].w[0]);
    set32(c.r[4], c.r[17].w[0] + 8u);
    st32((c.r[17].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00199810u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000F(c, 266u, depth + 1u); else { c.pc = 0x0013E5B0u; return; } if (c.pc != 0x00199810u) [[unlikely]] return; }
L_00199810:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019981Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E490u; return; } if (c.pc != 0x0019981Cu) [[unlikely]] return; }
L_0019981C:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00199838; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00199834u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x00199834u) [[unlikely]] return; }
L_00199834:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00199838:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00199850:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 48u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[4].w[0] + 48u), c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[4].w[0] + 48u)));
    c.r[3].d[0] = c.r[5].sd[0] < 20ll ? 1ull : 0ull;
    c.budget -= 13;
    { const bool t = c.r[3].d[0] != 0ull; c.r[19].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001998A4; } }
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_00199C30; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0019989Cu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0019989Cu) [[unlikely]] return; }
L_0019989C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  if (t) { goto L_00199C34; } }
L_001998A4:
    c.r[1].d[0] = c.r[5].sd[0] < 16ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_001998E0; } }
    c.f[1] = c.r[5].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41800000u);
    c.f[0] = ld32((c.r[19].w[0] + 60u));
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[1] = fp::mul(c.f[0], c.f[1]);
    c.f[0] = c.r[3].w[0];
    fpu_div(c, 0u, c.f[1], c.f[0]);
    st32((c.r[19].w[0] + 52u), c.f[0]);
    c.f[0] = fp::mul(c.f[0], c.f[0]);
    st32((c.r[19].w[0] + 52u), c.f[0]);
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 12;
L_001998E0:
    set32(c.r[3], ld32((c.r[19].w[0] + 56u)));
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == c.r[3].d[0];  if (t) { goto L_00199AF8; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], c.r[18].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + 28320u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[17], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_00199AF8; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00199914; } }
    set32(c.r[4], c.r[4].w[0] + 436u);
    c.budget -= 1;
L_00199914:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x53590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00199920u); c.r[5].d[0] = c.r[2].d[0] | 20035ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x00199920u) [[unlikely]] return; }
L_00199920:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_00199934; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[2].w[0] + 16u)));  if (t) { goto L_00199934; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00199934:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019993Cu);  if (depth < kMaxDepth) unit_0033(c, 101u, depth + 1u); else { c.pc = 0x001CD4B0u; return; } if (c.pc != 0x0019993Cu) [[unlikely]] return; }
L_0019993C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001999AC; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00199950u); c.r[16].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (depth < kMaxDepth) unit_0034(c, 131u, depth + 1u); else { c.pc = 0x001D14A0u; return; } if (c.pc != 0x00199950u) [[unlikely]] return; }
L_00199950:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00199960; } }
    c.r[16].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 2;
L_00199960:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00199968u);  if (depth < kMaxDepth) unit_0034(c, 133u, depth + 1u); else { c.pc = 0x001D14E0u; return; } if (c.pc != 0x00199968u) [[unlikely]] return; }
L_00199968:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00199978; } }
    c.r[16].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 2;
L_00199978:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00199980u);  if (depth < kMaxDepth) unit_0034(c, 132u, depth + 1u); else { c.pc = 0x001D14B0u; return; } if (c.pc != 0x00199980u) [[unlikely]] return; }
L_00199980:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00199990; } }
    c.r[16].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 2;
L_00199990:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00199998u);  if (depth < kMaxDepth) unit_0034(c, 140u, depth + 1u); else { c.pc = 0x001D1640u; return; } if (c.pc != 0x00199998u) [[unlikely]] return; }
L_00199998:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001999A4; } }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001999A4:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_00199AF8; } }
L_001999AC:
    c.r[3].d[0] = ld8((c.r[17].w[0] + 392u));
    c.r[3].d[0] = c.r[3].d[0] << 61;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00199AF8; } }
    ld128((c.r[17].w[0] + 208u) & ~15u, c.r[2]);
    set32(c.r[3], c.r[29].w[0] + 96u);
    set32(c.r[16], c.r[29].w[0] + 112u);
    set32(c.r[5], c.r[19].w[0] + 32u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st128((c.r[3].w[0]) & ~15u, c.r[2]);
    ld128((c.r[17].w[0] + 224u) & ~15u, c.r[2]);
    st128((c.r[16].w[0]) & ~15u, c.r[2]);
    set32(c.r[2], ld32((c.r[17].w[0] + 240u)));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001999ECu); st32((c.r[29].w[0] + 128u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0011(c, 24u, depth + 1u); else { c.pc = 0x00144550u; return; } if (c.pc != 0x001999ECu) [[unlikely]] return; }
L_001999EC:
    c.f[2] = ld32((c.r[19].w[0] + 32u));
    set32(c.r[4], c.r[29].w[0] + 116u);
    c.f[1] = ld32((c.r[16].w[0]));
    set32(c.r[3], c.r[29].w[0] + 120u);
    c.f[1] = fp::sub(c.f[1], c.f[2]);
    st32((c.r[16].w[0]), c.f[1]);
    c.f[2] = ld32((c.r[19].w[0] + 36u));
    c.f[1] = ld32((c.r[4].w[0]));
    c.f[1] = fp::sub(c.f[1], c.f[2]);
    st32((c.r[4].w[0]), c.f[1]);
    c.f[2] = ld32((c.r[19].w[0] + 40u));
    c.f[1] = ld32((c.r[3].w[0]));
    c.f[1] = fp::sub(c.f[1], c.f[2]);
    st32((c.r[3].w[0]), c.f[1]);
    c.f[4] = ld32((c.r[16].w[0]));
    c.f[3] = ld32((c.r[4].w[0]));
    c.f[2] = ld32((c.r[3].w[0]));
    c.f[1] = ld32((c.r[19].w[0] + 52u));
    c.f[4] = fp::mul(c.f[4], c.f[4]);
    c.f[3] = fp::mul(c.f[3], c.f[3]);
    c.f[2] = fp::mul(c.f[2], c.f[2]);
    c.f[4] = fp::add(c.f[4], c.f[3]);
    c.f[4] = fp::add(c.f[4], c.f[2]);
    fpu_compare(c, fp::key(c.f[4]) < fp::key(c.f[1]));
    c.budget -= 26;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00199AF8; } }
    st32((c.r[17].w[0] + 212u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC0400000u);
    c.f[1] = ld32((c.r[17].w[0] + 228u));
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00199AD8; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00199A80; } }
    set32(c.r[4], c.r[4].w[0] + 436u);
    c.budget -= 1;
L_00199A80:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x53410000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00199A8Cu); c.r[5].d[0] = c.r[2].d[0] | 21057ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x00199A8Cu) [[unlikely]] return; }
L_00199A8C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_00199AA0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[2].w[0] + 16u)));  if (t) { goto L_00199AA0; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00199AA0:
    set32(c.r[2], ld32((c.r[17].w[0] + 64u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00199AACu); c.f[12] = ld32((c.r[2].w[0] + 52u));  if (depth < kMaxDepth) unit_0030(c, 165u, depth + 1u); else { c.pc = 0x001C3DA0u; return; } if (c.pc != 0x00199AACu) [[unlikely]] return; }
L_00199AAC:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00199AB8u); set32(c.r[5], 0u + 660u);  if (depth < kMaxDepth) unit_0030(c, 17u, depth + 1u); else { c.pc = 0x001C02A0u; return; } if (c.pc != 0x00199AB8u) [[unlikely]] return; }
L_00199AB8:
    c.r[5].d[0] = ld8((c.r[17].w[0] + 392u));
    set32(c.r[3], 0u - 5u);
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(4ll);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 392u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00199AF8; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00199AD8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00199AE0u); set32(c.r[5], 0u + 12015u);  if (depth < kMaxDepth) unit_0030(c, 17u, depth + 1u); else { c.pc = 0x001C02A0u; return; } if (c.pc != 0x00199AE0u) [[unlikely]] return; }
L_00199AE0:
    c.r[5].d[0] = ld8((c.r[17].w[0] + 392u));
    set32(c.r[3], 0u - 5u);
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(4ll);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st8((c.r[17].w[0] + 392u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 6;
L_00199AF8:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[3].d[0] = c.r[18].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001998E0u | kUnwind; return; } goto L_001998E0; } }
    c.f[1] = ld32((c.r[19].w[0] + 64u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00199C30; } }
    set32(c.r[4], ld32((c.r[19].w[0] + 48u)));
    set32(c.r[3], 0u + 15u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00199C30; } }
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00199B34:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 26328u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00199B44u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 413u, depth + 1u); else { c.pc = 0x00197DC0u; return; } if (c.pc != 0x00199B44u) [[unlikely]] return; }
L_00199B44:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00199C20; } }
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] < 0;  if (t) { goto L_00199C20; } }
    c.r[1].d[0] = c.r[3].sd[0] < 1000ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00199C20; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 4u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00199C20; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 5u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00199C20; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00199C20; } }
    set32(c.r[25], ld32((c.r[16].w[0] + 56u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00199B98u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00199B98u) [[unlikely]] return; }
L_00199B98:
    ld128((c.r[2].w[0]) & ~15u, c.r[3]);
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[6], c.r[29].w[0] + 84u);
    set32(c.r[5], c.r[29].w[0] + 88u);
    st128((c.r[4].w[0]) & ~15u, c.r[3]);
    c.f[1] = ld32((c.r[19].w[0] + 32u));
    c.f[0] = ld32((c.r[29].w[0] + 80u));
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    st32((c.r[29].w[0] + 80u), c.f[0]);
    c.f[1] = ld32((c.r[19].w[0] + 36u));
    c.f[0] = ld32((c.r[6].w[0]));
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    st32((c.r[6].w[0]), c.f[0]);
    c.f[1] = ld32((c.r[19].w[0] + 40u));
    c.f[0] = ld32((c.r[5].w[0]));
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    st32((c.r[5].w[0]), c.f[0]);
    c.f[1] = ld32((c.r[29].w[0] + 80u));
    c.f[2] = ld32((c.r[6].w[0]));
    c.f[3] = ld32((c.r[5].w[0]));
    c.f[0] = ld32((c.r[19].w[0] + 52u));
    c.f[4] = fp::mul(c.f[1], c.f[1]);
    c.f[2] = fp::mul(c.f[2], c.f[2]);
    c.f[1] = fp::mul(c.f[3], c.f[3]);
    c.f[4] = fp::add(c.f[4], c.f[2]);
    c.f[4] = fp::add(c.f[4], c.f[1]);
    fpu_compare(c, fp::key(c.f[4]) < fp::key(c.f[0]));
    c.budget -= 29;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00199C20; } }
    set32(c.r[25], ld32((c.r[16].w[0] + 56u)));
    set32(c.r[5], ld32((c.r[19].w[0] + 56u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 48u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00199C20u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00199C20u) [[unlikely]] return; }
L_00199C20:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[3].d[0] = c.r[17].sd[0] < 300ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00199B34u | kUnwind; return; } goto L_00199B34; } }
L_00199C30:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_00199C34:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_00199C50:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_00199C60:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00199C70:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x47410000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[2].d[0] | 21570ull;  c.pc = t; return; }
L_00199C80:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x474F0000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[2].d[0] | 16970ull;  c.pc = t; return; }
L_00199C90:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 8u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00199C60u | kUnwind; return; } goto L_00199C60; }
L_00199CA0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 8u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001997D0u | kUnwind; return; } goto L_001997D0; }
L_00199CB0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[5].w[0])));
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    st32((c.r[4].w[0]), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[6].w[0] + 12u)));
    c.r[6].d[0] = ld8((c.r[5].w[0] + 3u));
    mmi::mult(c, 0, c.r[6].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 7));
    st8((c.r[4].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[5].w[0])));
    c.r[3].d[0] = c.r[3].d[0] << 40;
    c.r[3].d[0] = c.r[3].d[0] >> 40;
    c.budget -= 17;
    { const bool t = c.r[3].d[0] == 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00199DF4; } }
    c.r[3].d[0] = ld8((c.r[5].w[0] + 3u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00199DF4; } }
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[4], c.r[29].w[0] + 48u);  if (t) { goto L_00199D28; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00199D24; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00199DF4; } }
L_00199D24:
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 1;
L_00199D28:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00199D30u);  if (depth < kMaxDepth) unit_0026(c, 201u, depth + 1u); else { c.pc = 0x00199E10u; return; } if (c.pc != 0x00199D30u) [[unlikely]] return; }
L_00199D30:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], ld32((c.r[29].w[0] + 48u)));
    set32(c.r[3], c.r[3].w[0] << 5);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[29].w[0] + 48u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 48u)));
    c.r[1].d[0] = c.r[2].sd[0] < 8193ll ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_00199D5C; } }
    set32(c.r[2], c.r[2].w[0] - 8192u);
    st32((c.r[29].w[0] + 48u), c.r[2].w[0]);
    c.budget -= 2;
L_00199D5C:
    set32(c.r[2], ld32((c.r[29].w[0] + 48u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] >= 0; set32(c.r[4], c.r[29].w[0] + 52u);  if (t) { goto L_00199D70; } }
    set32(c.r[2], c.r[2].w[0] + 8192u);
    st32((c.r[29].w[0] + 48u), c.r[2].w[0]);
    c.budget -= 2;
L_00199D70:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[4].w[0])));
    set32(c.r[3], c.r[3].w[0] << 6);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.r[1].d[0] = c.r[2].sd[0] < 8192ll ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[2], 0u + 8191u);  if (t) { goto L_00199D98; } }
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.budget -= 1;
L_00199D98:
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_00199DA8; } }
    st32((c.r[4].w[0]), 0u);
    c.budget -= 1;
L_00199DA8:
    set32(c.r[3], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[5], c.r[29].w[0] + 56u);
    set32(c.r[2], ld32((c.r[5].w[0])));
    set32(c.r[4], c.r[3].w[0] << 1);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 2));
    set32(c.r[3], c.r[4].w[0] - c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[5].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[5].w[0])));
    c.r[1].d[0] = c.r[2].sd[0] < 256ll ? 1ull : 0ull;
    c.budget -= 12;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[2], 0u + 255u);  if (t) { goto L_00199DDC; } }
    st32((c.r[5].w[0]), c.r[2].w[0]);
    c.budget -= 1;
L_00199DDC:
    set32(c.r[2], ld32((c.r[5].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] >= 0; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00199DEC; } }
    st32((c.r[5].w[0]), 0u);
    c.budget -= 1;
L_00199DEC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00199DF4u); set32(c.r[5], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0026(c, 209u, depth + 1u); else { c.pc = 0x00199FC0u; return; } if (c.pc != 0x00199DF4u) [[unlikely]] return; }
L_00199DF4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00199E10:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[19].d[0] = ld8((c.r[5].w[0]));
    c.r[18].d[0] = ld8((c.r[5].w[0] + 1u));
    c.r[17].d[0] = ld8((c.r[5].w[0] + 2u));
    c.r[1].d[0] = c.r[19].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;
    c.budget -= 14;
    { const bool t = c.r[1].d[0] == 0ull; c.r[21].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00199E70; } }
    c.r[1].d[0] = c.r[18].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[20].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_00199E58; } }
    c.r[20].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00199E58:
    c.r[1].d[0] = c.r[17].sd[0] < c.r[19].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[3].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_00199E68; } }
    c.r[3].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00199E68:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[21].w[0] + 8u), c.r[20].w[0]);  if (t) { goto L_00199E98; } }
L_00199E70:
    c.r[1].d[0] = c.r[19].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[20].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_00199E80; } }
    c.r[20].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00199E80:
    c.r[1].d[0] = c.r[17].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[3].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_00199E94; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00199E94; } }
L_00199E94:
    st32((c.r[21].w[0] + 8u), c.r[20].w[0]);
    c.budget -= 1;
L_00199E98:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] != c.r[3].d[0];  if (t) { goto L_00199EAC; } }
    st32((c.r[21].w[0] + 4u), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[21].w[0]), 0u);  if (t) { goto L_00199F7C; } }
L_00199EAC:
    set32(c.r[2], c.r[20].w[0] - c.r[3].w[0]);
    c.r[5].d[0] = c.r[20].d[0] << 32;
    c.r[16].d[0] = c.r[2].d[0] << 32;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 32);
    c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 32);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00199EC8u); c.r[4].d[0] = c.r[16].d[0] << 13;  if (depth < kMaxDepth) unit_0006(c, 222u, depth + 1u); else { c.pc = 0x0011A680u; return; } if (c.pc != 0x00199EC8u) [[unlikely]] return; }
L_00199EC8:
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.budget -= 4;
    { const bool t = c.r[20].d[0] != c.r[19].d[0]; st32((c.r[21].w[0] + 4u), c.r[2].w[0]);  if (t) { goto L_00199F0C; } }
    set32(c.r[2], c.r[18].w[0] - c.r[17].w[0]);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00199EF0u); c.r[4].d[0] = c.r[2].d[0] << 13;  if (depth < kMaxDepth) unit_0006(c, 222u, depth + 1u); else { c.pc = 0x0011A680u; return; } if (c.pc != 0x00199EF0u) [[unlikely]] return; }
L_00199EF0:
    set32(c.r[5], 0u + 6u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00199EFCu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0006(c, 222u, depth + 1u); else { c.pc = 0x0011A680u; return; } if (c.pc != 0x00199EFCu) [[unlikely]] return; }
L_00199EFC:
    c.r[3].d[0] = c.r[2].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[21].w[0]), c.r[3].w[0]);  if (t) { goto L_00199F7C; } }
L_00199F0C:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] != c.r[18].d[0]; set32(c.r[2], c.r[19].w[0] - c.r[18].w[0]);  if (t) { goto L_00199F4C; } }
    set32(c.r[2], c.r[17].w[0] - c.r[19].w[0]);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00199F2Cu); c.r[4].d[0] = c.r[2].d[0] << 13;  if (depth < kMaxDepth) unit_0006(c, 222u, depth + 1u); else { c.pc = 0x0011A680u; return; } if (c.pc != 0x00199F2Cu) [[unlikely]] return; }
L_00199F2C:
    set32(c.r[5], 0u + 6u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00199F38u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0006(c, 222u, depth + 1u); else { c.pc = 0x0011A680u; return; } if (c.pc != 0x00199F38u) [[unlikely]] return; }
L_00199F38:
    c.r[3].d[0] = c.r[2].d[0] + static_cast<std::uint64_t>(2730ll);
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[21].w[0]), c.r[3].w[0]);  if (t) { goto L_00199F7C; } }
L_00199F4C:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00199F60u); c.r[4].d[0] = c.r[2].d[0] << 13;  if (depth < kMaxDepth) unit_0006(c, 222u, depth + 1u); else { c.pc = 0x0011A680u; return; } if (c.pc != 0x00199F60u) [[unlikely]] return; }
L_00199F60:
    set32(c.r[5], 0u + 6u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00199F6Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0006(c, 222u, depth + 1u); else { c.pc = 0x0011A680u; return; } if (c.pc != 0x00199F6Cu) [[unlikely]] return; }
L_00199F6C:
    c.r[3].d[0] = c.r[2].d[0] + static_cast<std::uint64_t>(5461ll);
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    st32((c.r[21].w[0]), c.r[3].w[0]);
    c.budget -= 4;
L_00199F7C:
    set32(c.r[3], ld32((c.r[21].w[0])));
    c.r[3].d[0] = c.r[3].d[0] + static_cast<std::uint64_t>(8192ll);
    c.r[3].d[0] = c.r[3].d[0] & 8191ull;
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    st32((c.r[21].w[0]), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 15;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_00199FC0:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[19], ld32((c.r[5].w[0] + 8u)));
    c.budget -= 13;
    { const bool t = c.r[19].sd[0] > 0; c.r[20].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00199FFC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[19], 0u + 1u);  if (t) { goto L_0019A00C; } }
L_00199FFC:
    c.r[1].d[0] = c.r[19].sd[0] < 256ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0019A00C; } }
    set32(c.r[19], 0u + 255u);
    c.budget -= 1;
L_0019A00C:
    set32(c.r[16], ld32((c.r[5].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_0019A03C; } }
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull; set32(c.r[5], 0u + 1u);  if (t) { goto L_0019A030; } }
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_0019A1D8; } }
    set32(c.r[5], 0u + 1u);
    c.budget -= 1;
L_0019A030:
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0019A1D8; } }
L_0019A03C:
    set32(c.r[3], ld32((c.r[5].w[0])));
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[18], c.r[2].w[0] << 1);
    c.budget -= 6;
    { const bool t = c.r[18].sd[0] >= 0; c.r[17].d[0] = static_cast<std::uint64_t>(c.r[18].sd[0] >> 13);  if (t) { goto L_0019A05C; } }
    c.r[2].d[0] = c.r[18].d[0] + static_cast<std::uint64_t>(8191ll);
    c.r[17].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 13);
    c.budget -= 2;
L_0019A05C:
    c.r[22].d[0] = c.r[19].d[0] << 32;
    c.r[2].d[0] = c.r[16].d[0] << 32;
    c.r[22].d[0] = static_cast<std::uint64_t>(c.r[22].sd[0] >> 32);
    set32(c.r[3], 0u + 8192u);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    c.r[5].d[0] = c.r[3].d[0] - c.r[2].d[0];
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019A080u); c.r[23].d[0] = c.r[17].d[0] << 13;  if (depth < kMaxDepth) unit_0006(c, 221u, depth + 1u); else { c.pc = 0x0011A608u; return; } if (c.pc != 0x0019A080u) [[unlikely]] return; }
L_0019A080:
    c.r[21].d[0] = c.r[16].d[0] << 32;
    c.r[5].d[0] = c.r[18].d[0] - c.r[23].d[0];
    c.r[21].d[0] = static_cast<std::uint64_t>(c.r[21].sd[0] >> 32);
    c.r[16].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 13);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019A098u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0006(c, 221u, depth + 1u); else { c.pc = 0x0011A608u; return; } if (c.pc != 0x0019A098u) [[unlikely]] return; }
L_0019A098:
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 13);
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    set32(c.r[2], 0u + 8192u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019A0ACu); c.r[5].d[0] = c.r[2].d[0] - c.r[3].d[0];  if (depth < kMaxDepth) unit_0006(c, 221u, depth + 1u); else { c.pc = 0x0011A608u; return; } if (c.pc != 0x0019A0ACu) [[unlikely]] return; }
L_0019A0AC:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[21].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 13);
    set32(c.r[2], 0u + 8192u);
    c.r[2].d[0] = c.r[2].d[0] - c.r[18].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019A0C4u); c.r[5].d[0] = c.r[23].d[0] + c.r[2].d[0];  if (depth < kMaxDepth) unit_0006(c, 221u, depth + 1u); else { c.pc = 0x0011A608u; return; } if (c.pc != 0x0019A0C4u) [[unlikely]] return; }
    goto L_0019A0C4;
L_0019A0C0:
    c.r[5].d[0] = c.r[23].d[0] + c.r[2].d[0];
    c.budget -= 1;
L_0019A0C4:
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 13);
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    set32(c.r[2], 0u + 8192u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019A0D8u); c.r[5].d[0] = c.r[2].d[0] - c.r[3].d[0];  if (depth < kMaxDepth) unit_0006(c, 221u, depth + 1u); else { c.pc = 0x0011A608u; return; } if (c.pc != 0x0019A0D8u) [[unlikely]] return; }
L_0019A0D8:
    c.budget -= 2;
    { const bool t = c.r[21].sd[0] > 0; c.r[4].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 13);  if (t) { goto L_0019A0E8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[21], 0u + 1u);  if (t) { goto L_0019A0F8; } }
L_0019A0E8:
    c.r[1].d[0] = c.r[21].sd[0] < 256ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0019A0F8; } }
    set32(c.r[21], 0u + 255u);
    c.budget -= 1;
L_0019A0F8:
    c.budget -= 2;
    { const bool t = c.r[4].sd[0] > 0; c.r[1].d[0] = c.r[4].sd[0] < 256ll ? 1ull : 0ull;  if (t) { goto L_0019A10C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u + 1u);  if (t) { goto L_0019A118; } }
    c.r[1].d[0] = c.r[4].sd[0] < 256ll ? 1ull : 0ull;
    c.budget -= 1;
L_0019A10C:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[3], 0u + 5u);  if (t) { goto L_0019A11C; } }
    set32(c.r[4], 0u + 255u);
    c.budget -= 1;
L_0019A118:
    set32(c.r[3], 0u + 5u);
    c.budget -= 1;
L_0019A11C:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == c.r[3].d[0]; c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_0019A1C8; } }
    set32(c.r[3], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == c.r[3].d[0]; c.r[5].d[0] = c.r[4].d[0] << 32;  if (t) { goto L_0019A1B4; } }
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == c.r[3].d[0]; c.r[5].d[0] = c.r[16].d[0] << 32;  if (t) { goto L_0019A1A0; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == c.r[3].d[0]; c.r[3].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_0019A188; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == c.r[3].d[0]; c.r[3].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_0019A170; } }
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[3].d[0] = c.r[4].d[0] << 32;
    c.r[19].d[0] = c.r[16].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = static_cast<std::uint64_t>(c.r[19].sd[0] >> 32);  if (t) { goto L_0019A1D8; } }
    c.r[3].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_0019A170:
    c.r[5].d[0] = c.r[21].d[0] << 32;
    c.r[19].d[0] = c.r[16].d[0] << 32;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 32);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = static_cast<std::uint64_t>(c.r[19].sd[0] >> 32);  if (t) { goto L_0019A1D8; } }
    c.r[3].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_0019A188:
    c.r[5].d[0] = c.r[16].d[0] << 32;
    c.r[19].d[0] = c.r[4].d[0] << 32;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 32);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = static_cast<std::uint64_t>(c.r[19].sd[0] >> 32);  if (t) { goto L_0019A1D8; } }
    c.r[5].d[0] = c.r[16].d[0] << 32;
    c.budget -= 1;
L_0019A1A0:
    c.r[3].d[0] = c.r[21].d[0] << 32;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 32);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);  if (t) { goto L_0019A1D8; } }
    c.r[5].d[0] = c.r[4].d[0] << 32;
    c.budget -= 1;
L_0019A1B4:
    c.r[3].d[0] = c.r[16].d[0] << 32;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 32);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);  if (t) { goto L_0019A1D8; } }
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_0019A1C8:
    c.r[3].d[0] = c.r[16].d[0] << 32;
    c.r[19].d[0] = c.r[21].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.r[19].d[0] = static_cast<std::uint64_t>(c.r[19].sd[0] >> 32);
    c.budget -= 4;
L_0019A1D8:
    st8((c.r[20].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[20].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[20].w[0] + 2u), static_cast<std::uint8_t>(c.r[19].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_0019A210:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[3].d[0] = ld8((c.r[4].w[0] + 6u));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0019A2C0; } }
L_0019A234:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x10010000u);
    set32(c.r[2], ld32((c.r[1].w[0] - 12288u)));
    c.r[2].d[0] = c.r[2].d[0] & 256ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0019A234u | kUnwind; return; } goto L_0019A234; } }
    set32(c.r[2], 0u + 7u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_0019A270; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019A268u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0027(c, 15u, depth + 1u); else { c.pc = 0x0019C410u; return; } if (c.pc != 0x0019A268u) [[unlikely]] return; }
L_0019A268:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_0019A2C4; } }
L_0019A270:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0019A274:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019A280u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0026(c, 223u, depth + 1u); else { c.pc = 0x0019A2E0u; return; } if (c.pc != 0x0019A280u) [[unlikely]] return; }
L_0019A280:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[3].d[0] = c.r[18].d[0] < static_cast<std::uint64_t>(13ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0019A274u | kUnwind; return; } goto L_0019A274; } }
    c.r[4].d[0] = ld8((c.r[17].w[0] + 6u));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_0019A2C0; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0019A2A4:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019A2B0u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0027(c, 9u, depth + 1u); else { c.pc = 0x0019C240u; return; } if (c.pc != 0x0019A2B0u) [[unlikely]] return; }
L_0019A2B0:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[3].d[0] = c.r[18].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0019A2A4u | kUnwind; return; } goto L_0019A2A4; } }
L_0019A2C0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_0019A2C4:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0019A2E0:
    set32(c.r[29], c.r[29].w[0] - 160u);
    set32(c.r[3], c.r[5].w[0] << 1);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    set32(c.r[3], c.r[3].w[0] << 4);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[22].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], c.r[3].w[0] + 16u);
    set32(c.r[3], ld32((c.r[3].w[0] + 48u)));
    c.budget -= 19;
    { const bool t = c.r[3].d[0] == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0019A730; } }
    set32(c.r[4], ld32((c.r[3].w[0] + 4u)));
    c.r[2].d[0] = ld8((c.r[4].w[0] + 18u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[21].d[0] = 0ull + 0ull;  if (t) { goto L_0019A344; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[18].w[0] + 640u) & ~15u, c.r[3]);  if (t) { goto L_0019A358; } }
L_0019A344:
    c.r[3].d[0] = ld16((c.r[4].w[0] + 12u));
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[21], c.r[3].w[0] + c.r[2].w[0]);
    ld128((c.r[18].w[0] + 640u) & ~15u, c.r[3]);
    c.budget -= 5;
L_0019A358:
    set32(c.r[4], c.r[29].w[0] + 128u);
    set32(c.r[2], 0u + 2u);
    st128((c.r[4].w[0]) & ~15u, c.r[3]);
    c.r[3].d[0] = ld8((c.r[18].w[0] + 6u));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[20].d[0] = 0ull + 0ull;  if (t) { goto L_0019A378; } }
    set32(c.r[2], 0u + 128u);
    st32((c.r[29].w[0] + 140u), c.r[2].w[0]);
    c.budget -= 2;
L_0019A378:
    c.r[19].sd[0] = static_cast<std::int32_t>(0x70000000u);
    c.budget -= 1;
L_0019A37C:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019A38Cu); set32(c.r[6], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_0026(c, 198u, depth + 1u); else { c.pc = 0x00199CB0u; return; } if (c.pc != 0x0019A38Cu) [[unlikely]] return; }
L_0019A38C:
    set32(c.r[20], c.r[20].w[0] + 1u);
    set32(c.r[21], c.r[21].w[0] + 4u);
    c.r[2].d[0] = c.r[20].sd[0] < 256ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[19], c.r[19].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0019A37Cu | kUnwind; return; } goto L_0019A37C; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 40u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0019A404; } }
    set32(c.r[4], ld32((c.r[2].w[0] + 4u)));
    c.r[2].d[0] = ld8((c.r[4].w[0] + 18u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[21].d[0] = 0ull + 0ull;  if (t) { goto L_0019A3C4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x70000000u);  if (t) { goto L_0019A3D8; } }
L_0019A3C4:
    c.r[3].d[0] = ld16((c.r[4].w[0] + 12u));
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[21], c.r[3].w[0] + c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x70000000u);
    c.budget -= 5;
L_0019A3D8:
    c.r[20].d[0] = 0ull + 0ull;
    c.r[19].d[0] = c.r[2].d[0] | 1024ull;
    c.budget -= 2;
L_0019A3E0:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019A3F0u); set32(c.r[6], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_0026(c, 198u, depth + 1u); else { c.pc = 0x00199CB0u; return; } if (c.pc != 0x0019A3F0u) [[unlikely]] return; }
L_0019A3F0:
    set32(c.r[20], c.r[20].w[0] + 1u);
    set32(c.r[21], c.r[21].w[0] + 4u);
    c.r[2].d[0] = c.r[20].sd[0] < 256ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[19], c.r[19].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0019A3E0u | kUnwind; return; } goto L_0019A3E0; } }
L_0019A404:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.r[2].d[0] = ld8((c.r[1].w[0] + 8982u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0019A4E8; } }
    c.r[7].sd[0] = static_cast<std::int32_t>(0x70000000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x24920000u);
    c.r[2].d[0] = c.r[7].d[0] | 1024ull;
    c.r[5].d[0] = c.r[3].d[0] | 18725ull;
    c.budget -= 4;
L_0019A424:
    c.r[6].d[0] = ld8((c.r[7].w[0]));
    c.r[4].d[0] = ld8((c.r[7].w[0] + 1u));
    c.r[3].d[0] = ld8((c.r[7].w[0] + 2u));
    set32(c.r[6], c.r[6].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[4], c.r[6].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    mmi::multu(c, 0, c.r[5].w[0], c.r[3].w[0]);
    c.r[4].d[0] = c.hi.d[0];
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] >> 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] >> 2);
    st8((c.r[7].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[7].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[7].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[7], c.r[7].w[0] + 4u);
    c.budget -= 21;
    { const bool t = c.r[7].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0019A424u | kUnwind; return; } goto L_0019A424; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 40u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0019A4E8; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x24920000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x70000000u);
    c.r[6].d[0] = c.r[4].d[0] | 18725ull;
    c.r[3].d[0] = c.r[3].d[0] | 2048ull;
    c.budget -= 4;
L_0019A494:
    c.r[7].d[0] = ld8((c.r[2].w[0]));
    c.r[5].d[0] = ld8((c.r[2].w[0] + 1u));
    c.r[4].d[0] = ld8((c.r[2].w[0] + 2u));
    set32(c.r[7], c.r[7].w[0] << 1);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[5], c.r[7].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    mmi::multu(c, 0, c.r[6].w[0], c.r[4].w[0]);
    c.r[5].d[0] = c.hi.d[0];
    set32(c.r[4], c.r[4].w[0] - c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] >> 1);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] >> 2);
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[2], c.r[2].w[0] + 4u);
    c.budget -= 21;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0019A494u | kUnwind; return; } goto L_0019A494; } }
L_0019A4E8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00410000u);
    set32(c.r[7], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[4], c.r[4].w[0] + 4672u);
    set32(c.r[6], ld32((c.r[16].w[0] + 8u)));
    c.r[2].d[0] = ld64((c.r[4].w[0]));
    c.f[0] = ld32((c.r[4].w[0] + 8u));
    set32(c.r[5], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[3], c.r[29].w[0] + 144u);
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[7].w[0] << 4);
    set32(c.r[4], c.r[22].w[0] + c.r[4].w[0]);
    set32(c.r[8], ld32((c.r[4].w[0] + 8u)));
    st64((c.r[3].w[0]), c.r[2].d[0]);
    set32(c.r[4], c.r[5].w[0] << 8);
    st32((c.r[3].w[0] + 8u), c.f[0]);
    set32(c.r[4], c.r[6].w[0] + c.r[4].w[0]);
    c.r[5].d[0] = ld8((c.r[18].w[0] + 6u));
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[5].w[0] - 2u);
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(10ll) ? 1ull : 0ull;
    c.budget -= 22;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[8], c.r[8].w[0] + c.r[4].w[0]);  if (t) { goto L_0019A558; } }
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], c.r[3].w[0] << (c.r[2].w[0] & 31u));
    c.r[2].d[0] = c.r[2].d[0] & 805ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0019A558; } }
    c.r[9].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 1;
L_0019A558:
    c.budget -= 2;
    { const bool t = c.r[9].d[0] != 0ull;  if (t) { goto L_0019A590; } }
    set32(c.r[2], c.r[17].w[0] - 3u);
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(10ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_0019A588; } }
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], c.r[3].w[0] << (c.r[2].w[0] & 31u));
    c.r[2].d[0] = c.r[2].d[0] & 641ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0019A588; } }
    c.r[4].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 1;
L_0019A588:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; c.r[2].d[0] = c.r[5].d[0] ^ 56ull;  if (t) { goto L_0019A5B0; } }
L_0019A590:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00410000u);
    set32(c.r[3], c.r[29].w[0] + 144u);
    set32(c.r[4], c.r[4].w[0] + 4688u);
    c.r[2].d[0] = ld64((c.r[4].w[0]));
    c.f[0] = ld32((c.r[4].w[0] + 8u));
    st64((c.r[3].w[0]), c.r[2].d[0]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 8u), c.f[0]);  if (t) { goto L_0019A718; } }
L_0019A5B0:
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0019A5C4; } }
    set32(c.r[2], c.r[5].w[0] - 46u);
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(5ll) ? 1ull : 0ull;
    c.budget -= 2;
L_0019A5C4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0019A5D4; } }
    set32(c.r[2], c.r[5].w[0] - 51u);
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(5ll) ? 1ull : 0ull;
    c.budget -= 2;
L_0019A5D4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], c.r[5].w[0] - 17u);  if (t) { goto L_0019A63C; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00410000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[5], c.r[5].w[0] + 4704u);
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.r[3].d[0] = ld64((c.r[5].w[0]));
    c.f[0] = ld32((c.r[5].w[0] + 8u));
    set32(c.r[2], c.r[2].w[0] + 13904u);
    st64((c.r[4].w[0]), c.r[3].d[0]);
    st32((c.r[4].w[0] + 8u), c.f[0]);
    c.r[3].d[0] = ld8((c.r[18].w[0] + 14u));
    c.r[3].d[0] = c.r[3].d[0] & 15ull;
    set32(c.r[3], c.r[3].w[0] << 5);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 16u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 8u)));
    set32(c.r[4], c.r[4].w[0] << 4);
    set32(c.r[2], ld32((c.r[2].w[0] + 12u)));
    set32(c.r[4], c.r[22].w[0] + c.r[4].w[0]);
    set32(c.r[8], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] << 8);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    c.budget -= 24;
    { const bool t = 0ull == 0ull; set32(c.r[8], c.r[8].w[0] + c.r[2].w[0]);  if (t) { goto L_0019A718; } }
L_0019A63C:
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(28ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_0019A668; } }
    set32(c.r[4], 0u + 1u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x08430000u);
    set32(c.r[3], c.r[4].w[0] << (c.r[3].w[0] & 31u));
    c.r[2].d[0] = c.r[2].d[0] | 49409ull;
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0019A668; } }
    c.r[6].d[0] = c.r[4].d[0] & 255ull;
    c.budget -= 1;
L_0019A668:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull; set32(c.r[2], c.r[5].w[0] - 14u);  if (t) { goto L_0019A6B4; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull; c.r[6].sd[0] = static_cast<std::int32_t>(0x70000000u);  if (t) { goto L_0019A71C; } }
    c.r[2].d[0] = ld8((c.r[18].w[0] + 14u));
    c.r[2].d[0] = c.r[2].d[0] << 58;
    c.r[2].d[0] = c.r[2].d[0] >> 62;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x00410000u);  if (t) { goto L_0019A698; } }
    c.r[2].d[0] = ld8((c.r[18].w[0] + 15u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0019A718; } }
L_0019A698:
    set32(c.r[3], c.r[29].w[0] + 144u);
    set32(c.r[4], c.r[4].w[0] + 4720u);
    c.r[2].d[0] = ld64((c.r[4].w[0]));
    c.f[0] = ld32((c.r[4].w[0] + 8u));
    st64((c.r[3].w[0]), c.r[2].d[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 8u), c.f[0]);  if (t) { goto L_0019A718; } }
L_0019A6B4:
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(10ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_0019A6D8; } }
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], c.r[3].w[0] << (c.r[2].w[0] & 31u));
    c.r[2].d[0] = c.r[2].d[0] & 967ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0019A6D8; } }
    c.r[4].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 1;
L_0019A6D8:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[2], 0u + 5u);  if (t) { goto L_0019A718; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == c.r[2].d[0];  if (t) { goto L_0019A6F4; } }
    set32(c.r[2], 0u + 7u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != c.r[2].d[0];  if (t) { goto L_0019A718; } }
L_0019A6F4:
    c.r[2].d[0] = ld8((c.r[18].w[0] + 15u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x00410000u);  if (t) { goto L_0019A718; } }
    set32(c.r[3], c.r[29].w[0] + 144u);
    set32(c.r[4], c.r[4].w[0] + 4736u);
    c.r[2].d[0] = ld64((c.r[4].w[0]));
    c.f[0] = ld32((c.r[4].w[0] + 8u));
    st64((c.r[3].w[0]), c.r[2].d[0]);
    st32((c.r[3].w[0] + 8u), c.f[0]);
    c.budget -= 6;
L_0019A718:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x70000000u);
    c.budget -= 1;
L_0019A71C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], c.r[29].w[0] + 144u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019A730u); c.r[7].d[0] = c.r[6].d[0] | 1024ull;  if (depth < kMaxDepth) unit_0000(c, 106u, depth + 1u); else { c.pc = 0x00100B10u; return; } if (c.pc != 0x0019A730u) [[unlikely]] return; }
L_0019A730:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_0019A760:
    set32(c.r[29], c.r[29].w[0] - 192u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    c.r[30].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    c.r[23].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[22].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[8].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 172u), c.r[7].w[0]);
    set32(c.r[4], ld32((c.r[5].w[0] + 32u)));
    set32(c.r[20], ld32((c.r[5].w[0])));
    set32(c.r[19], ld32((c.r[5].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[5].w[0] + 36u)));
    set32(c.r[5], ld32((c.r[4].w[0] + 4u)));
    c.r[4].d[0] = ld16((c.r[5].w[0] + 12u));
    c.budget -= 24;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[18], c.r[5].w[0] + c.r[4].w[0]);  if (t) { goto L_0019AC74; } }
    set32(c.r[4], ld32((c.r[3].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x70000000u);
    c.r[16].d[0] = c.r[2].d[0] | 2048ull;
    c.r[3].d[0] = ld16((c.r[4].w[0] + 12u));
    c.r[2].d[0] = ld8((c.r[4].w[0] + 18u));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[17], c.r[4].w[0] + c.r[3].w[0]);  if (t) { goto L_0019A7E4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_0019A7EC; } }
L_0019A7E4:
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[5], c.r[17].w[0] + c.r[2].w[0]);
    c.budget -= 2;
L_0019A7EC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019A7F8u); set32(c.r[6], 0u + 1024u);  if (depth < kMaxDepth) unit_0010(c, 107u, depth + 1u); else { c.pc = 0x001415A0u; return; } if (c.pc != 0x0019A7F8u) [[unlikely]] return; }
L_0019A7F8:
    set32(c.r[7], ld32((c.r[23].w[0] + 652u)));
    c.r[1].d[0] = c.r[7].sd[0] < 128ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0019A850; } }
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[7].w[0]) >> 1));
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[3].w[0] + 64u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[16].w[0] + 1024u);  if (t) { goto L_0019A848; } }
L_0019A81C:
    c.r[3].d[0] = ld8((c.r[6].w[0]));
    set32(c.r[3], c.r[3].w[0] - 128u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[5].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 7));
    set32(c.r[3], c.r[3].w[0] + 128u);
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[6].w[0] + 3u));
    mmi::mult(c, 1, c.r[3].w[0], c.r[7].w[0]);
    c.r[3].d[0] = c.lo.d[1];
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 7));
    st8((c.r[6].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[6], c.r[6].w[0] + 4u);
    c.budget -= 11;
L_0019A848:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != c.r[4].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0019A81Cu | kUnwind; return; } goto L_0019A81C; } }
L_0019A850:
    set32(c.r[3], ld32((c.r[30].w[0] + 40u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0019AA54; } }
    set32(c.r[5], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[15], c.r[29].w[0] + 188u);
    set32(c.r[30], c.r[29].w[0] + 184u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[4].d[0] = c.r[3].d[0] | 255ull;
    c.r[3].d[0] = c.r[4].d[0] << 32;
    c.r[25].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.r[3].d[0] = ld16((c.r[5].w[0] + 12u));
    c.budget -= 10;
    { const bool t = 0ull == 0ull; set32(c.r[13], c.r[5].w[0] + c.r[3].w[0]);  if (t) { goto L_0019AA44; } }
    c.r[12].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_0019A888:
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[13].d[0] + 0ull;
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_0019AA28; } }
L_0019A89C:
    c.r[9].d[0] = ld8((c.r[7].w[0]));
    c.r[3].d[0] = ld8((c.r[6].w[0]));
    c.r[8].d[0] = ld8((c.r[12].w[0]));
    set32(c.r[9], c.r[9].w[0] << 2);
    set32(c.r[9], c.r[16].w[0] + c.r[9].w[0]);
    set32(c.r[10], c.r[3].w[0] << 2);
    set32(c.r[3], ld32((c.r[29].w[0] + 172u)));
    set32(c.r[8], c.r[8].w[0] << 2);
    c.r[14].d[0] = ld8((c.r[9].w[0] + 3u));
    set32(c.r[8], c.r[22].w[0] + c.r[8].w[0]);
    c.r[24].d[0] = ld8((c.r[9].w[0]));
    c.budget -= 13;
    { const bool t = c.r[14].d[0] == 0ull; set32(c.r[3], c.r[3].w[0] + c.r[10].w[0]);  if (t) { goto L_0019AA14; } }
    set32(c.r[10], ld32((c.r[5].w[0])));
    c.r[9].d[0] = c.r[14].sd[0] < 128ll ? 1ull : 0ull;
    st32((c.r[29].w[0] + 188u), c.r[10].w[0]);
    set32(c.r[8], ld32((c.r[8].w[0])));
    c.r[23].d[0] = ld8((c.r[29].w[0] + 191u));
    c.budget -= 7;
    { const bool t = c.r[9].d[0] != 0ull; st32((c.r[29].w[0] + 184u), c.r[8].w[0]);  if (t) { goto L_0019A8FC; } }
    set32(c.r[8], ld32((c.r[29].w[0] + 184u)));
    c.r[23].d[0] = c.r[14].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 188u), c.r[8].w[0]);  if (t) { goto L_0019A934; } }
L_0019A8FC:
    set32(c.r[10], ld32((c.r[15].w[0])));
    set32(c.r[11], ld32((c.r[30].w[0])));
    mmi::pextlb(c.r[8], c.r[0], c.r[10]);
    mmi::pextlb(c.r[9], c.r[0], c.r[11]);
    mmi::psubsh(c.r[10], c.r[9], c.r[8]);
    mmi::pextlh(c.r[9], c.r[0], c.r[10]);
    mmi::pextlw(c.r[11], c.r[14], c.r[14]);
    mmi::pextlw(c.r[10], c.r[11], c.r[11]);
    { Reg128 scratch; mmi::pmulth(c, c.r[11], c.r[9], c.r[10], 0); }
    mmi::psraw(c.r[9], c.r[11], 7u);
    mmi::ppach(c.r[10], c.r[0], c.r[9]);
    mmi::paddh(c.r[11], c.r[10], c.r[8]);
    mmi::ppacb(c.r[9], c.r[0], c.r[11]);
    st32((c.r[15].w[0]), c.r[9].w[0]);
    c.budget -= 14;
L_0019A934:
    c.r[14].d[0] = ld8((c.r[3].w[0] + 3u));
    c.r[8].d[0] = c.r[14].sd[0] < 128ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[8].d[0] != 0ull;  if (t) { goto L_0019A950; } }
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 188u), c.r[3].w[0]);  if (t) { goto L_0019A990; } }
L_0019A950:
    c.budget -= 2;
    { const bool t = c.r[14].sd[0] <= 0; c.r[1].d[0] = c.r[24].sd[0] < 128ll ? 1ull : 0ull;  if (t) { goto L_0019A994; } }
    set32(c.r[10], ld32((c.r[15].w[0])));
    set32(c.r[11], ld32((c.r[3].w[0])));
    mmi::pextlb(c.r[8], c.r[0], c.r[10]);
    mmi::pextlb(c.r[9], c.r[0], c.r[11]);
    mmi::psubsh(c.r[10], c.r[9], c.r[8]);
    mmi::pextlh(c.r[9], c.r[0], c.r[10]);
    mmi::pextlw(c.r[11], c.r[14], c.r[14]);
    mmi::pextlw(c.r[10], c.r[11], c.r[11]);
    { Reg128 scratch; mmi::pmulth(c, c.r[11], c.r[9], c.r[10], 0); }
    mmi::psraw(c.r[9], c.r[11], 7u);
    mmi::ppach(c.r[10], c.r[0], c.r[9]);
    mmi::paddh(c.r[11], c.r[10], c.r[8]);
    mmi::ppacb(c.r[9], c.r[0], c.r[11]);
    st32((c.r[15].w[0]), c.r[9].w[0]);
    c.budget -= 14;
L_0019A990:
    c.r[1].d[0] = c.r[24].sd[0] < 128ll ? 1ull : 0ull;
    c.budget -= 1;
L_0019A994:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull; c.r[1].d[0] = c.r[24].sd[0] < 129ll ? 1ull : 0ull;  if (t) { goto L_0019A9CC; } }
    set32(c.r[10], ld32((c.r[15].w[0])));
    mmi::pextlw(c.r[11], c.r[24], c.r[24]);
    mmi::pextlb(c.r[9], c.r[0], c.r[10]);
    mmi::pextlw(c.r[10], c.r[11], c.r[11]);
    mmi::pextlh(c.r[8], c.r[0], c.r[9]);
    { Reg128 scratch; mmi::pmulth(c, c.r[9], c.r[8], c.r[10], 0); }
    mmi::psraw(c.r[11], c.r[9], 7u);
    mmi::ppach(c.r[10], c.r[0], c.r[11]);
    mmi::ppacb(c.r[8], c.r[0], c.r[10]);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st32((c.r[15].w[0]), c.r[8].w[0]);  if (t) { goto L_0019AA08; } }
    c.r[1].d[0] = c.r[24].sd[0] < 129ll ? 1ull : 0ull;
    c.budget -= 1;
L_0019A9CC:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0019AA08; } }
    set32(c.r[24], c.r[24].w[0] - 128u);
    set32(c.r[10], ld32((c.r[15].w[0])));
    mmi::pextlw(c.r[11], c.r[24], c.r[24]);
    mmi::pextlb(c.r[8], c.r[0], c.r[10]);
    mmi::psubsh(c.r[9], c.r[25], c.r[8]);
    mmi::pextlh(c.r[10], c.r[0], c.r[9]);
    mmi::pextlw(c.r[9], c.r[11], c.r[11]);
    { Reg128 scratch; mmi::pmulth(c, c.r[11], c.r[9], c.r[10], 0); }
    mmi::psraw(c.r[9], c.r[11], 7u);
    mmi::ppach(c.r[10], c.r[0], c.r[9]);
    mmi::paddh(c.r[11], c.r[10], c.r[8]);
    mmi::ppacb(c.r[9], c.r[0], c.r[11]);
    st32((c.r[15].w[0]), c.r[9].w[0]);
    c.budget -= 13;
L_0019AA08:
    st8((c.r[29].w[0] + 191u), static_cast<std::uint8_t>(c.r[23].w[0]));
    set32(c.r[3], ld32((c.r[29].w[0] + 188u)));
    st32((c.r[5].w[0]), c.r[3].w[0]);
    c.budget -= 3;
L_0019AA14:
    set32(c.r[4], c.r[4].w[0] - 1u);
    set32(c.r[12], c.r[12].w[0] + 1u);
    set32(c.r[7], c.r[7].w[0] + 1u);
    set32(c.r[6], c.r[6].w[0] + 1u);
    set32(c.r[5], c.r[5].w[0] + 4u);
    c.budget -= 5;
L_0019AA28:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0019A89Cu | kUnwind; return; } goto L_0019A89C; } }
    set32(c.r[19], c.r[19].w[0] - 1u);
    set32(c.r[18], c.r[18].w[0] + c.r[20].w[0]);
    set32(c.r[17], c.r[17].w[0] + c.r[20].w[0]);
    set32(c.r[13], c.r[13].w[0] + c.r[20].w[0]);
    set32(c.r[21], c.r[21].w[0] + 1024u);
    c.budget -= 5;
L_0019AA44:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] != 0ull; c.r[12].d[0] = c.r[18].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0019A888u | kUnwind; return; } goto L_0019A888; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));  if (t) { goto L_0019AC80; } }
L_0019AA54:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    set32(c.r[5], c.r[29].w[0] + 180u);
    c.r[6].d[0] = c.r[3].d[0] | 255ull;
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.r[3].d[0] = c.r[6].d[0] << 32;
    c.budget -= 7;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[6].d[0] | c.r[3].d[0];  if (t) { goto L_0019ABB8; } }
    c.r[23].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_0019AA74:
    c.r[15].d[0] = c.r[17].d[0] + 0ull;
    c.r[14].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[13].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_0019ABA0; } }
L_0019AA84:
    c.r[7].d[0] = ld8((c.r[15].w[0]));
    c.r[6].d[0] = ld8((c.r[23].w[0]));
    set32(c.r[7], c.r[7].w[0] << 2);
    set32(c.r[7], c.r[16].w[0] + c.r[7].w[0]);
    set32(c.r[6], c.r[6].w[0] << 2);
    c.r[12].d[0] = ld8((c.r[7].w[0] + 3u));
    c.r[7].d[0] = ld8((c.r[7].w[0]));
    c.budget -= 9;
    { const bool t = c.r[12].d[0] == 0ull; set32(c.r[9], c.r[22].w[0] + c.r[6].w[0]);  if (t) { goto L_0019AB90; } }
    set32(c.r[6], ld32((c.r[14].w[0])));
    c.r[8].d[0] = c.r[12].sd[0] < 128ll ? 1ull : 0ull;
    st32((c.r[29].w[0] + 180u), c.r[6].w[0]);
    set32(c.r[9], ld32((c.r[9].w[0])));
    c.r[6].d[0] = ld8((c.r[29].w[0] + 183u));
    c.budget -= 7;
    { const bool t = c.r[8].d[0] != 0ull; st32((c.r[29].w[0] + 176u), c.r[9].w[0]);  if (t) { goto L_0019AAD4; } }
    set32(c.r[8], ld32((c.r[29].w[0] + 176u)));
    c.r[6].d[0] = c.r[12].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 180u), c.r[8].w[0]);  if (t) { goto L_0019AB0C; } }
L_0019AAD4:
    set32(c.r[10], ld32((c.r[5].w[0])));
    set32(c.r[11], ld32((c.r[4].w[0])));
    mmi::pextlb(c.r[8], c.r[0], c.r[10]);
    mmi::pextlb(c.r[9], c.r[0], c.r[11]);
    mmi::psubsh(c.r[10], c.r[9], c.r[8]);
    mmi::pextlh(c.r[9], c.r[0], c.r[10]);
    mmi::pextlw(c.r[11], c.r[12], c.r[12]);
    mmi::pextlw(c.r[10], c.r[11], c.r[11]);
    { Reg128 scratch; mmi::pmulth(c, c.r[11], c.r[9], c.r[10], 0); }
    mmi::psraw(c.r[9], c.r[11], 7u);
    mmi::ppach(c.r[10], c.r[0], c.r[9]);
    mmi::paddh(c.r[11], c.r[10], c.r[8]);
    mmi::ppacb(c.r[9], c.r[0], c.r[11]);
    st32((c.r[5].w[0]), c.r[9].w[0]);
    c.budget -= 14;
L_0019AB0C:
    c.r[1].d[0] = c.r[7].sd[0] < 128ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[1].d[0] = c.r[7].sd[0] < 129ll ? 1ull : 0ull;  if (t) { goto L_0019AB48; } }
    set32(c.r[10], ld32((c.r[5].w[0])));
    mmi::pextlw(c.r[11], c.r[7], c.r[7]);
    mmi::pextlb(c.r[9], c.r[0], c.r[10]);
    mmi::pextlw(c.r[10], c.r[11], c.r[11]);
    mmi::pextlh(c.r[8], c.r[0], c.r[9]);
    { Reg128 scratch; mmi::pmulth(c, c.r[9], c.r[8], c.r[10], 0); }
    mmi::psraw(c.r[11], c.r[9], 7u);
    mmi::ppach(c.r[10], c.r[0], c.r[11]);
    mmi::ppacb(c.r[8], c.r[0], c.r[10]);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st32((c.r[5].w[0]), c.r[8].w[0]);  if (t) { goto L_0019AB84; } }
    c.r[1].d[0] = c.r[7].sd[0] < 129ll ? 1ull : 0ull;
    c.budget -= 1;
L_0019AB48:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0019AB84; } }
    set32(c.r[7], c.r[7].w[0] - 128u);
    set32(c.r[10], ld32((c.r[5].w[0])));
    mmi::pextlw(c.r[11], c.r[7], c.r[7]);
    mmi::pextlb(c.r[8], c.r[0], c.r[10]);
    mmi::psubsh(c.r[9], c.r[3], c.r[8]);
    mmi::pextlh(c.r[10], c.r[0], c.r[9]);
    mmi::pextlw(c.r[9], c.r[11], c.r[11]);
    { Reg128 scratch; mmi::pmulth(c, c.r[11], c.r[9], c.r[10], 0); }
    mmi::psraw(c.r[9], c.r[11], 7u);
    mmi::ppach(c.r[10], c.r[0], c.r[9]);
    mmi::paddh(c.r[11], c.r[10], c.r[8]);
    mmi::ppacb(c.r[9], c.r[0], c.r[11]);
    st32((c.r[5].w[0]), c.r[9].w[0]);
    c.budget -= 13;
L_0019AB84:
    st8((c.r[29].w[0] + 183u), static_cast<std::uint8_t>(c.r[6].w[0]));
    set32(c.r[6], ld32((c.r[29].w[0] + 180u)));
    st32((c.r[14].w[0]), c.r[6].w[0]);
    c.budget -= 3;
L_0019AB90:
    set32(c.r[13], c.r[13].w[0] - 1u);
    set32(c.r[23], c.r[23].w[0] + 1u);
    set32(c.r[15], c.r[15].w[0] + 1u);
    set32(c.r[14], c.r[14].w[0] + 4u);
    c.budget -= 4;
L_0019ABA0:
    c.budget -= 2;
    { const bool t = c.r[13].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0019AA84u | kUnwind; return; } goto L_0019AA84; } }
    set32(c.r[19], c.r[19].w[0] - 1u);
    set32(c.r[18], c.r[18].w[0] + c.r[20].w[0]);
    set32(c.r[17], c.r[17].w[0] + c.r[20].w[0]);
    set32(c.r[21], c.r[21].w[0] + 1024u);
    c.budget -= 4;
L_0019ABB8:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] != 0ull; c.r[23].d[0] = c.r[18].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0019AA74u | kUnwind; return; } goto L_0019AA74; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0019AC7C; } }
    c.r[12].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_0019ABCC:
    c.r[7].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_0019AC60; } }
L_0019ABD8:
    c.r[3].d[0] = ld8((c.r[12].w[0]));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[5], c.r[22].w[0] + c.r[3].w[0]);
    c.r[4].d[0] = ld8((c.r[5].w[0] + 3u));
    c.r[3].d[0] = c.r[4].sd[0] < 128ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0019AC00; } }
    set32(c.r[3], ld32((c.r[5].w[0])));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[7].w[0]), c.r[3].w[0]);  if (t) { goto L_0019AC54; } }
L_0019AC00:
    c.r[3].d[0] = ld8((c.r[7].w[0] + 3u));
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    set32(c.r[10], ld32((c.r[7].w[0])));
    set32(c.r[11], ld32((c.r[5].w[0])));
    mmi::pextlb(c.r[8], c.r[0], c.r[10]);
    mmi::pextlb(c.r[9], c.r[0], c.r[11]);
    mmi::psubsh(c.r[10], c.r[9], c.r[8]);
    mmi::pextlh(c.r[9], c.r[0], c.r[10]);
    mmi::pextlw(c.r[11], c.r[4], c.r[4]);
    mmi::pextlw(c.r[10], c.r[11], c.r[11]);
    { Reg128 scratch; mmi::pmulth(c, c.r[11], c.r[9], c.r[10], 0); }
    mmi::psraw(c.r[9], c.r[11], 7u);
    mmi::ppach(c.r[10], c.r[0], c.r[9]);
    mmi::paddh(c.r[11], c.r[10], c.r[8]);
    mmi::ppacb(c.r[9], c.r[0], c.r[11]);
    st32((c.r[7].w[0]), c.r[9].w[0]);
    c.r[1].d[0] = c.r[3].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 19;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0019AC50; } }
    c.r[3].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 1;
L_0019AC50:
    st8((c.r[7].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 1;
L_0019AC54:
    set32(c.r[6], c.r[6].w[0] - 1u);
    set32(c.r[12], c.r[12].w[0] + 1u);
    set32(c.r[7], c.r[7].w[0] + 4u);
    c.budget -= 3;
L_0019AC60:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0019ABD8u | kUnwind; return; } goto L_0019ABD8; } }
    set32(c.r[19], c.r[19].w[0] - 1u);
    set32(c.r[18], c.r[18].w[0] + c.r[20].w[0]);
    set32(c.r[21], c.r[21].w[0] + 1024u);
    c.budget -= 3;
L_0019AC74:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] != 0ull; c.r[12].d[0] = c.r[18].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0019ABCCu | kUnwind; return; } goto L_0019ABCC; } }
L_0019AC7C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));
    c.budget -= 1;
L_0019AC80:
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 192u);  c.pc = t; return; }
L_0019ACB0:
    set32(c.r[29], c.r[29].w[0] - 192u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    c.r[30].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    c.r[23].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[8].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 168u), c.r[7].w[0]);
    c.r[4].d[0] = ld8((c.r[4].w[0] + 6u));
    st32((c.r[29].w[0] + 172u), c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] - 14u);
    set32(c.r[6], ld32((c.r[5].w[0] + 32u)));
    c.r[1].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(10ll) ? 1ull : 0ull;
    set32(c.r[3], ld32((c.r[5].w[0] + 4u)));
    set32(c.r[19], ld32((c.r[5].w[0])));
    set32(c.r[6], ld32((c.r[6].w[0] + 4u)));
    c.r[16].d[0] = c.r[3].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[6].w[0] + 12u));
    c.budget -= 28;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[18], c.r[6].w[0] + c.r[5].w[0]);  if (t) { goto L_0019AD7C; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + 14160u);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[4].w[0];  c.pc = t; if (t - 0x00198000u < 16384u) { entry = entries_0026[(t - 0x00198000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0019AD3C:
    c.r[6].d[0] = ld8((c.r[23].w[0] + 15u));
    set32(c.r[4], 0u + 100u);
    set32(c.r[5], c.r[6].w[0] << 3);
    set32(c.r[6], c.r[5].w[0] - c.r[6].w[0]);
    set32(c.r[5], c.r[6].w[0] << 3);
    set32(c.r[5], c.r[5].w[0] - c.r[6].w[0]);
    set32(c.r[5], c.r[5].w[0] << 1);
    set32(c.r[16], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[5].w[0]) >> 8));
    c.budget -= 10;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[4].w[0] - c.r[16].w[0]);  if (t) { goto L_0019AD7C; } }
L_0019AD64:
    c.r[5].d[0] = ld8((c.r[23].w[0] + 15u));
    set32(c.r[4], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 4);
    set32(c.r[17], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 8));
    set32(c.r[17], c.r[17].w[0] + 15u);
    c.budget -= 6;
L_0019AD7C:
    c.budget -= 2;
    { const bool t = c.r[17].sd[0] >= 0; c.r[1].d[0] = c.r[3].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;  if (t) { goto L_0019AD8C; } }
    c.r[17].d[0] = 0ull + 0ull;
    c.r[1].d[0] = c.r[3].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 2;
L_0019AD8C:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0019AD98; } }
    c.r[16].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 1;
L_0019AD98:
    set32(c.r[3], ld32((c.r[29].w[0] + 172u)));
    set32(c.r[4], c.r[17].w[0] << 10);
    set32(c.r[20], c.r[20].w[0] + c.r[4].w[0]);
    mmi::mult(c, 0, c.r[17].w[0], c.r[19].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[3], ld32((c.r[3].w[0] + 36u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[18], c.r[18].w[0] + c.r[4].w[0]);  if (t) { goto L_0019B288; } }
    set32(c.r[4], ld32((c.r[3].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x70000000u);
    c.r[22].d[0] = c.r[2].d[0] | 2048ull;
    c.r[3].d[0] = ld16((c.r[4].w[0] + 12u));
    c.r[2].d[0] = ld8((c.r[4].w[0] + 18u));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[21], c.r[4].w[0] + c.r[3].w[0]);  if (t) { goto L_0019ADD8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_0019ADE0; } }
L_0019ADD8:
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[5], c.r[21].w[0] + c.r[2].w[0]);
    c.budget -= 2;
L_0019ADE0:
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019ADECu); set32(c.r[6], 0u + 1024u);  if (depth < kMaxDepth) unit_0010(c, 107u, depth + 1u); else { c.pc = 0x001415A0u; return; } if (c.pc != 0x0019ADECu) [[unlikely]] return; }
L_0019ADEC:
    set32(c.r[7], ld32((c.r[23].w[0] + 652u)));
    c.r[1].d[0] = c.r[7].sd[0] < 128ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0019AE44; } }
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[7].w[0]) >> 1));
    c.r[6].d[0] = c.r[22].d[0] + 0ull;
    set32(c.r[5], c.r[3].w[0] + 64u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[22].w[0] + 1024u);  if (t) { goto L_0019AE3C; } }
L_0019AE10:
    c.r[3].d[0] = ld8((c.r[6].w[0]));
    set32(c.r[3], c.r[3].w[0] - 128u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[5].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 7));
    set32(c.r[3], c.r[3].w[0] + 128u);
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[6].w[0] + 3u));
    mmi::mult(c, 1, c.r[3].w[0], c.r[7].w[0]);
    c.r[3].d[0] = c.lo.d[1];
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 7));
    st8((c.r[6].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[6], c.r[6].w[0] + 4u);
    c.budget -= 11;
L_0019AE3C:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != c.r[4].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0019AE10u | kUnwind; return; } goto L_0019AE10; } }
L_0019AE44:
    set32(c.r[3], ld32((c.r[29].w[0] + 172u)));
    mmi::mult(c, 0, c.r[17].w[0], c.r[19].w[0]);
    c.r[6].d[0] = c.lo.d[0];
    set32(c.r[3], ld32((c.r[3].w[0] + 40u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[21], c.r[21].w[0] + c.r[6].w[0]);  if (t) { goto L_0019B05C; } }
    set32(c.r[5], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[15], c.r[29].w[0] + 188u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[4].d[0] = c.r[3].d[0] | 255ull;
    c.r[3].d[0] = c.r[4].d[0] << 32;
    c.r[25].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.r[3].d[0] = ld16((c.r[5].w[0] + 12u));
    set32(c.r[13], c.r[5].w[0] + c.r[3].w[0]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; set32(c.r[13], c.r[13].w[0] + c.r[6].w[0]);  if (t) { goto L_0019B048; } }
    c.r[12].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_0019AE84:
    c.r[7].d[0] = c.r[21].d[0] + 0ull;
    c.r[6].d[0] = c.r[13].d[0] + 0ull;
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_0019B028; } }
L_0019AE98:
    c.r[9].d[0] = ld8((c.r[7].w[0]));
    c.r[3].d[0] = ld8((c.r[6].w[0]));
    c.r[8].d[0] = ld8((c.r[12].w[0]));
    set32(c.r[9], c.r[9].w[0] << 2);
    set32(c.r[9], c.r[22].w[0] + c.r[9].w[0]);
    set32(c.r[10], c.r[3].w[0] << 2);
    set32(c.r[3], ld32((c.r[29].w[0] + 168u)));
    set32(c.r[8], c.r[8].w[0] << 2);
    c.r[14].d[0] = ld8((c.r[9].w[0] + 3u));
    set32(c.r[8], c.r[30].w[0] + c.r[8].w[0]);
    c.r[23].d[0] = ld8((c.r[9].w[0]));
    c.budget -= 13;
    { const bool t = c.r[14].d[0] == 0ull; set32(c.r[3], c.r[3].w[0] + c.r[10].w[0]);  if (t) { goto L_0019B014; } }
    set32(c.r[10], ld32((c.r[5].w[0])));
    c.r[9].d[0] = c.r[14].sd[0] < 128ll ? 1ull : 0ull;
    st32((c.r[29].w[0] + 188u), c.r[10].w[0]);
    set32(c.r[8], ld32((c.r[8].w[0])));
    c.r[24].d[0] = ld8((c.r[29].w[0] + 191u));
    c.budget -= 7;
    { const bool t = c.r[9].d[0] != 0ull; st32((c.r[29].w[0] + 184u), c.r[8].w[0]);  if (t) { goto L_0019AEF8; } }
    set32(c.r[8], ld32((c.r[29].w[0] + 184u)));
    c.r[24].d[0] = c.r[14].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 188u), c.r[8].w[0]);  if (t) { goto L_0019AF34; } }
L_0019AEF8:
    set32(c.r[10], ld32((c.r[15].w[0])));
    set32(c.r[8], c.r[29].w[0] + 184u);
    set32(c.r[11], ld32((c.r[8].w[0])));
    mmi::pextlb(c.r[8], c.r[0], c.r[10]);
    mmi::pextlb(c.r[9], c.r[0], c.r[11]);
    mmi::psubsh(c.r[10], c.r[9], c.r[8]);
    mmi::pextlh(c.r[9], c.r[0], c.r[10]);
    mmi::pextlw(c.r[11], c.r[14], c.r[14]);
    mmi::pextlw(c.r[10], c.r[11], c.r[11]);
    { Reg128 scratch; mmi::pmulth(c, c.r[11], c.r[9], c.r[10], 0); }
    mmi::psraw(c.r[9], c.r[11], 7u);
    mmi::ppach(c.r[10], c.r[0], c.r[9]);
    mmi::paddh(c.r[11], c.r[10], c.r[8]);
    mmi::ppacb(c.r[9], c.r[0], c.r[11]);
    st32((c.r[15].w[0]), c.r[9].w[0]);
    c.budget -= 15;
L_0019AF34:
    c.r[14].d[0] = ld8((c.r[3].w[0] + 3u));
    c.r[8].d[0] = c.r[14].sd[0] < 128ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[8].d[0] != 0ull;  if (t) { goto L_0019AF50; } }
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 188u), c.r[3].w[0]);  if (t) { goto L_0019AF90; } }
L_0019AF50:
    c.budget -= 2;
    { const bool t = c.r[14].sd[0] <= 0; c.r[1].d[0] = c.r[23].sd[0] < 128ll ? 1ull : 0ull;  if (t) { goto L_0019AF94; } }
    set32(c.r[10], ld32((c.r[15].w[0])));
    set32(c.r[11], ld32((c.r[3].w[0])));
    mmi::pextlb(c.r[8], c.r[0], c.r[10]);
    mmi::pextlb(c.r[9], c.r[0], c.r[11]);
    mmi::psubsh(c.r[10], c.r[9], c.r[8]);
    mmi::pextlh(c.r[9], c.r[0], c.r[10]);
    mmi::pextlw(c.r[11], c.r[14], c.r[14]);
    mmi::pextlw(c.r[10], c.r[11], c.r[11]);
    { Reg128 scratch; mmi::pmulth(c, c.r[11], c.r[9], c.r[10], 0); }
    mmi::psraw(c.r[9], c.r[11], 7u);
    mmi::ppach(c.r[10], c.r[0], c.r[9]);
    mmi::paddh(c.r[11], c.r[10], c.r[8]);
    mmi::ppacb(c.r[9], c.r[0], c.r[11]);
    st32((c.r[15].w[0]), c.r[9].w[0]);
    c.budget -= 14;
L_0019AF90:
    c.r[1].d[0] = c.r[23].sd[0] < 128ll ? 1ull : 0ull;
    c.budget -= 1;
L_0019AF94:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull; c.r[1].d[0] = c.r[23].sd[0] < 129ll ? 1ull : 0ull;  if (t) { goto L_0019AFCC; } }
    set32(c.r[10], ld32((c.r[15].w[0])));
    mmi::pextlw(c.r[11], c.r[23], c.r[23]);
    mmi::pextlb(c.r[9], c.r[0], c.r[10]);
    mmi::pextlw(c.r[10], c.r[11], c.r[11]);
    mmi::pextlh(c.r[8], c.r[0], c.r[9]);
    { Reg128 scratch; mmi::pmulth(c, c.r[9], c.r[8], c.r[10], 0); }
    mmi::psraw(c.r[11], c.r[9], 7u);
    mmi::ppach(c.r[10], c.r[0], c.r[11]);
    mmi::ppacb(c.r[8], c.r[0], c.r[10]);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st32((c.r[15].w[0]), c.r[8].w[0]);  if (t) { goto L_0019B008; } }
    c.r[1].d[0] = c.r[23].sd[0] < 129ll ? 1ull : 0ull;
    c.budget -= 1;
L_0019AFCC:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0019B008; } }
    set32(c.r[23], c.r[23].w[0] - 128u);
    set32(c.r[10], ld32((c.r[15].w[0])));
    mmi::pextlw(c.r[11], c.r[23], c.r[23]);
    mmi::pextlb(c.r[8], c.r[0], c.r[10]);
    mmi::psubsh(c.r[9], c.r[25], c.r[8]);
    mmi::pextlh(c.r[10], c.r[0], c.r[9]);
    mmi::pextlw(c.r[9], c.r[11], c.r[11]);
    { Reg128 scratch; mmi::pmulth(c, c.r[11], c.r[9], c.r[10], 0); }
    mmi::psraw(c.r[9], c.r[11], 7u);
    mmi::ppach(c.r[10], c.r[0], c.r[9]);
    mmi::paddh(c.r[11], c.r[10], c.r[8]);
    mmi::ppacb(c.r[9], c.r[0], c.r[11]);
    st32((c.r[15].w[0]), c.r[9].w[0]);
    c.budget -= 13;
L_0019B008:
    st8((c.r[29].w[0] + 191u), static_cast<std::uint8_t>(c.r[24].w[0]));
    set32(c.r[3], ld32((c.r[29].w[0] + 188u)));
    st32((c.r[5].w[0]), c.r[3].w[0]);
    c.budget -= 3;
L_0019B014:
    set32(c.r[4], c.r[4].w[0] + 1u);
    set32(c.r[12], c.r[12].w[0] + 1u);
    set32(c.r[7], c.r[7].w[0] + 1u);
    set32(c.r[6], c.r[6].w[0] + 1u);
    set32(c.r[5], c.r[5].w[0] + 4u);
    c.budget -= 5;
L_0019B028:
    c.r[3].d[0] = c.r[4].sd[0] < c.r[19].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0019AE98u | kUnwind; return; } goto L_0019AE98; } }
    set32(c.r[17], c.r[17].w[0] + 1u);
    set32(c.r[18], c.r[18].w[0] + c.r[19].w[0]);
    set32(c.r[21], c.r[21].w[0] + c.r[19].w[0]);
    set32(c.r[13], c.r[13].w[0] + c.r[19].w[0]);
    set32(c.r[20], c.r[20].w[0] + 1024u);
    c.budget -= 5;
L_0019B048:
    c.r[3].d[0] = c.r[17].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[12].d[0] = c.r[18].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0019AE84u | kUnwind; return; } goto L_0019AE84; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));  if (t) { goto L_0019B298; } }
L_0019B05C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    set32(c.r[5], c.r[29].w[0] + 180u);
    c.r[6].d[0] = c.r[3].d[0] | 255ull;
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.r[3].d[0] = c.r[6].d[0] << 32;
    c.budget -= 7;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[6].d[0] | c.r[3].d[0];  if (t) { goto L_0019B1C4; } }
    c.r[23].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_0019B07C:
    c.r[15].d[0] = c.r[21].d[0] + 0ull;
    c.r[14].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[13].d[0] = 0ull + 0ull;  if (t) { goto L_0019B1A8; } }
L_0019B08C:
    c.r[7].d[0] = ld8((c.r[15].w[0]));
    c.r[6].d[0] = ld8((c.r[23].w[0]));
    set32(c.r[7], c.r[7].w[0] << 2);
    set32(c.r[7], c.r[22].w[0] + c.r[7].w[0]);
    set32(c.r[6], c.r[6].w[0] << 2);
    c.r[12].d[0] = ld8((c.r[7].w[0] + 3u));
    c.r[7].d[0] = ld8((c.r[7].w[0]));
    c.budget -= 9;
    { const bool t = c.r[12].d[0] == 0ull; set32(c.r[9], c.r[30].w[0] + c.r[6].w[0]);  if (t) { goto L_0019B198; } }
    set32(c.r[6], ld32((c.r[14].w[0])));
    c.r[8].d[0] = c.r[12].sd[0] < 128ll ? 1ull : 0ull;
    st32((c.r[29].w[0] + 180u), c.r[6].w[0]);
    set32(c.r[9], ld32((c.r[9].w[0])));
    c.r[6].d[0] = ld8((c.r[29].w[0] + 183u));
    c.budget -= 7;
    { const bool t = c.r[8].d[0] != 0ull; st32((c.r[29].w[0] + 176u), c.r[9].w[0]);  if (t) { goto L_0019B0DC; } }
    set32(c.r[8], ld32((c.r[29].w[0] + 176u)));
    c.r[6].d[0] = c.r[12].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 180u), c.r[8].w[0]);  if (t) { goto L_0019B114; } }
L_0019B0DC:
    set32(c.r[10], ld32((c.r[5].w[0])));
    set32(c.r[11], ld32((c.r[4].w[0])));
    mmi::pextlb(c.r[8], c.r[0], c.r[10]);
    mmi::pextlb(c.r[9], c.r[0], c.r[11]);
    mmi::psubsh(c.r[10], c.r[9], c.r[8]);
    mmi::pextlh(c.r[9], c.r[0], c.r[10]);
    mmi::pextlw(c.r[11], c.r[12], c.r[12]);
    mmi::pextlw(c.r[10], c.r[11], c.r[11]);
    { Reg128 scratch; mmi::pmulth(c, c.r[11], c.r[9], c.r[10], 0); }
    mmi::psraw(c.r[9], c.r[11], 7u);
    mmi::ppach(c.r[10], c.r[0], c.r[9]);
    mmi::paddh(c.r[11], c.r[10], c.r[8]);
    mmi::ppacb(c.r[9], c.r[0], c.r[11]);
    st32((c.r[5].w[0]), c.r[9].w[0]);
    c.budget -= 14;
L_0019B114:
    c.r[1].d[0] = c.r[7].sd[0] < 128ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[1].d[0] = c.r[7].sd[0] < 129ll ? 1ull : 0ull;  if (t) { goto L_0019B150; } }
    set32(c.r[10], ld32((c.r[5].w[0])));
    mmi::pextlw(c.r[11], c.r[7], c.r[7]);
    mmi::pextlb(c.r[9], c.r[0], c.r[10]);
    mmi::pextlw(c.r[10], c.r[11], c.r[11]);
    mmi::pextlh(c.r[8], c.r[0], c.r[9]);
    { Reg128 scratch; mmi::pmulth(c, c.r[9], c.r[8], c.r[10], 0); }
    mmi::psraw(c.r[11], c.r[9], 7u);
    mmi::ppach(c.r[10], c.r[0], c.r[11]);
    mmi::ppacb(c.r[8], c.r[0], c.r[10]);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st32((c.r[5].w[0]), c.r[8].w[0]);  if (t) { goto L_0019B18C; } }
    c.r[1].d[0] = c.r[7].sd[0] < 129ll ? 1ull : 0ull;
    c.budget -= 1;
L_0019B150:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0019B18C; } }
    set32(c.r[7], c.r[7].w[0] - 128u);
    set32(c.r[10], ld32((c.r[5].w[0])));
    mmi::pextlw(c.r[11], c.r[7], c.r[7]);
    mmi::pextlb(c.r[8], c.r[0], c.r[10]);
    mmi::psubsh(c.r[9], c.r[3], c.r[8]);
    mmi::pextlh(c.r[10], c.r[0], c.r[9]);
    mmi::pextlw(c.r[9], c.r[11], c.r[11]);
    { Reg128 scratch; mmi::pmulth(c, c.r[11], c.r[9], c.r[10], 0); }
    mmi::psraw(c.r[9], c.r[11], 7u);
    mmi::ppach(c.r[10], c.r[0], c.r[9]);
    mmi::paddh(c.r[11], c.r[10], c.r[8]);
    mmi::ppacb(c.r[9], c.r[0], c.r[11]);
    st32((c.r[5].w[0]), c.r[9].w[0]);
    c.budget -= 13;
L_0019B18C:
    st8((c.r[29].w[0] + 183u), static_cast<std::uint8_t>(c.r[6].w[0]));
    set32(c.r[6], ld32((c.r[29].w[0] + 180u)));
    st32((c.r[14].w[0]), c.r[6].w[0]);
    c.budget -= 3;
L_0019B198:
    set32(c.r[13], c.r[13].w[0] + 1u);
    set32(c.r[23], c.r[23].w[0] + 1u);
    set32(c.r[15], c.r[15].w[0] + 1u);
    set32(c.r[14], c.r[14].w[0] + 4u);
    c.budget -= 4;
L_0019B1A8:
    c.r[6].d[0] = c.r[13].sd[0] < c.r[19].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0019B08Cu | kUnwind; return; } goto L_0019B08C; } }
    set32(c.r[17], c.r[17].w[0] + 1u);
    set32(c.r[18], c.r[18].w[0] + c.r[19].w[0]);
    set32(c.r[21], c.r[21].w[0] + c.r[19].w[0]);
    set32(c.r[20], c.r[20].w[0] + 1024u);
    c.budget -= 4;
L_0019B1C4:
    c.r[6].d[0] = c.r[17].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[6].d[0] != 0ull; c.r[23].d[0] = c.r[18].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0019B07Cu | kUnwind; return; } goto L_0019B07C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0019B294; } }
    c.r[12].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_0019B1DC:
    c.r[7].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_0019B270; } }
L_0019B1E8:
    c.r[3].d[0] = ld8((c.r[12].w[0]));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[5], c.r[30].w[0] + c.r[3].w[0]);
    c.r[4].d[0] = ld8((c.r[5].w[0] + 3u));
    c.r[3].d[0] = c.r[4].sd[0] < 128ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0019B210; } }
    set32(c.r[3], ld32((c.r[5].w[0])));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[7].w[0]), c.r[3].w[0]);  if (t) { goto L_0019B264; } }
L_0019B210:
    c.r[3].d[0] = ld8((c.r[7].w[0] + 3u));
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    set32(c.r[10], ld32((c.r[7].w[0])));
    set32(c.r[11], ld32((c.r[5].w[0])));
    mmi::pextlb(c.r[8], c.r[0], c.r[10]);
    mmi::pextlb(c.r[9], c.r[0], c.r[11]);
    mmi::psubsh(c.r[10], c.r[9], c.r[8]);
    mmi::pextlh(c.r[9], c.r[0], c.r[10]);
    mmi::pextlw(c.r[11], c.r[4], c.r[4]);
    mmi::pextlw(c.r[10], c.r[11], c.r[11]);
    { Reg128 scratch; mmi::pmulth(c, c.r[11], c.r[9], c.r[10], 0); }
    mmi::psraw(c.r[9], c.r[11], 7u);
    mmi::ppach(c.r[10], c.r[0], c.r[9]);
    mmi::paddh(c.r[11], c.r[10], c.r[8]);
    mmi::ppacb(c.r[9], c.r[0], c.r[11]);
    st32((c.r[7].w[0]), c.r[9].w[0]);
    c.r[1].d[0] = c.r[3].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 19;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0019B260; } }
    c.r[3].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 1;
L_0019B260:
    st8((c.r[7].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 1;
L_0019B264:
    set32(c.r[6], c.r[6].w[0] + 1u);
    set32(c.r[12], c.r[12].w[0] + 1u);
    set32(c.r[7], c.r[7].w[0] + 4u);
    c.budget -= 3;
L_0019B270:
    c.r[3].d[0] = c.r[6].sd[0] < c.r[19].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0019B1E8u | kUnwind; return; } goto L_0019B1E8; } }
    set32(c.r[17], c.r[17].w[0] + 1u);
    set32(c.r[18], c.r[18].w[0] + c.r[19].w[0]);
    set32(c.r[20], c.r[20].w[0] + 1024u);
    c.budget -= 3;
L_0019B288:
    c.r[3].d[0] = c.r[17].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[12].d[0] = c.r[18].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0019B1DCu | kUnwind; return; } goto L_0019B1DC; } }
L_0019B294:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));
    c.budget -= 1;
L_0019B298:
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 192u);  c.pc = t; return; }
L_0019B2D0:
    set32(c.r[29], c.r[29].w[0] - 256u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    c.r[30].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    c.r[23].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[8].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 236u), c.r[6].w[0]);
    st32((c.r[29].w[0] + 232u), c.r[7].w[0]);
    set32(c.r[20], ld32((c.r[5].w[0])));
    c.r[4].d[0] = ld8((c.r[4].w[0] + 6u));
    set32(c.r[6], ld32((c.r[5].w[0] + 32u)));
    set32(c.r[3], ld32((c.r[5].w[0] + 4u)));
    c.r[17].d[0] = c.r[20].d[0] + 0ull;
    st32((c.r[29].w[0] + 208u), c.r[3].w[0]);
    set32(c.r[6], ld32((c.r[6].w[0] + 4u)));
    set32(c.r[3], 0u + 33u);
    c.r[5].d[0] = ld16((c.r[6].w[0] + 12u));
    c.budget -= 28;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[19], c.r[6].w[0] + c.r[5].w[0]);  if (t) { goto L_0019B394; } }
    set32(c.r[3], 0u + 32u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 34u);  if (t) { goto L_0019B394; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0019B370; } }
    set32(c.r[3], 0u + 25u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 17u);  if (t) { goto L_0019B370; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0019B370; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0019B3AC; } }
L_0019B370:
    c.r[5].d[0] = ld8((c.r[23].w[0] + 15u));
    set32(c.r[3], 0u + 238u);
    c.r[18].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[5].w[0] << 3);
    set32(c.r[4], c.r[4].w[0] - c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 4);
    set32(c.r[17], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 8));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[3].w[0] - c.r[17].w[0]);  if (t) { goto L_0019B3AC; } }
L_0019B394:
    c.r[4].d[0] = ld8((c.r[23].w[0] + 15u));
    set32(c.r[3], 0u + 117u);
    c.r[17].d[0] = c.r[20].d[0] + 0ull;
    mmi::mult(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[18], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 8));
    set32(c.r[18], c.r[18].w[0] + 123u);
    c.budget -= 6;
L_0019B3AC:
    c.budget -= 2;
    { const bool t = c.r[18].sd[0] >= 0; c.r[1].d[0] = c.r[20].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;  if (t) { goto L_0019B3B8; } }
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0019B3B8:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0019B3C4; } }
    c.r[17].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 1;
L_0019B3C4:
    c.r[3].d[0] = ld8((c.r[23].w[0] + 14u));
    set32(c.r[4], ld32((c.r[30].w[0] + 36u)));
    c.r[3].d[0] = c.r[3].d[0] << 58;
    c.r[5].d[0] = c.r[3].d[0] >> 62;
    c.r[3].d[0] = c.r[5].d[0] ^ 2ull;
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[5].d[0] = c.r[5].d[0] ^ 1ull;
    st8((c.r[29].w[0] + 192u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[4].d[0] == 0ull; st8((c.r[29].w[0] + 176u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0019B880; } }
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x70000000u);
    c.r[22].d[0] = c.r[2].d[0] | 2048ull;
    c.r[3].d[0] = ld16((c.r[4].w[0] + 12u));
    c.r[2].d[0] = ld8((c.r[4].w[0] + 18u));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[4].w[0] + c.r[3].w[0]);  if (t) { goto L_0019B414; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_0019B41C; } }
L_0019B414:
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[5], c.r[16].w[0] + c.r[2].w[0]);
    c.budget -= 2;
L_0019B41C:
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019B428u); set32(c.r[6], 0u + 1024u);  if (depth < kMaxDepth) unit_0010(c, 107u, depth + 1u); else { c.pc = 0x001415A0u; return; } if (c.pc != 0x0019B428u) [[unlikely]] return; }
L_0019B428:
    set32(c.r[7], ld32((c.r[23].w[0] + 652u)));
    c.r[1].d[0] = c.r[7].sd[0] < 128ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[7].w[0]) >> 1));  if (t) { goto L_0019B47C; } }
    c.r[6].d[0] = c.r[22].d[0] + 0ull;
    set32(c.r[5], c.r[3].w[0] + 64u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[22].w[0] + 1024u);  if (t) { goto L_0019B474; } }
L_0019B448:
    c.r[3].d[0] = ld8((c.r[6].w[0]));
    set32(c.r[3], c.r[3].w[0] - 128u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[5].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 7));
    set32(c.r[3], c.r[3].w[0] + 128u);
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[6].w[0] + 3u));
    mmi::mult(c, 1, c.r[3].w[0], c.r[7].w[0]);
    c.r[3].d[0] = c.lo.d[1];
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 7));
    st8((c.r[6].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[6], c.r[6].w[0] + 4u);
    c.budget -= 11;
L_0019B474:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != c.r[4].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0019B448u | kUnwind; return; } goto L_0019B448; } }
L_0019B47C:
    set32(c.r[3], ld32((c.r[30].w[0] + 40u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x00FF0000u);  if (t) { goto L_0019B6CC; } }
    set32(c.r[5], ld32((c.r[3].w[0] + 4u)));
    c.r[13].d[0] = 0ull + 0ull;
    set32(c.r[23], c.r[29].w[0] + 252u);
    set32(c.r[3], c.r[18].w[0] << 2);
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[3]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[4].d[0] = c.r[3].d[0] | 255ull;
    c.r[3].d[0] = c.r[4].d[0] << 32;
    c.r[30].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.r[3].d[0] = ld16((c.r[5].w[0] + 12u));
    c.budget -= 12;
    { const bool t = 0ull == 0ull; set32(c.r[14], c.r[5].w[0] + c.r[3].w[0]);  if (t) { goto L_0019B6B4; } }
L_0019B4B8:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull; c.r[3].d[0] = c.r[13].sd[0] < 96ll ? 1ull : 0ull;  if (t) { goto L_0019B4C8; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0019B4DC; } }
L_0019B4C8:
    c.r[3].d[0] = ld8((c.r[29].w[0] + 192u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0019B4E8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[13], c.r[13].w[0] + 1u);  if (t) { goto L_0019B6A4; } }
L_0019B4DC:
    c.r[3].d[0] = ld8((c.r[29].w[0] + 176u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0019B6A0; } }
L_0019B4E8:
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[3]);
    set32(c.r[12], c.r[19].w[0] + c.r[18].w[0]);
    set32(c.r[7], c.r[16].w[0] + c.r[18].w[0]);
    set32(c.r[6], c.r[14].w[0] + c.r[18].w[0]);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = 0ull == 0ull; set32(c.r[5], c.r[21].w[0] + c.r[3].w[0]);  if (t) { goto L_0019B694; } }
L_0019B504:
    c.r[3].d[0] = ld8((c.r[6].w[0]));
    c.r[8].d[0] = ld8((c.r[7].w[0]));
    c.r[9].d[0] = ld8((c.r[12].w[0]));
    set32(c.r[10], c.r[3].w[0] << 2);
    set32(c.r[3], ld32((c.r[29].w[0] + 232u)));
    set32(c.r[8], c.r[8].w[0] << 2);
    set32(c.r[8], c.r[22].w[0] + c.r[8].w[0]);
    c.r[15].d[0] = ld8((c.r[8].w[0] + 3u));
    c.r[24].d[0] = ld8((c.r[8].w[0]));
    set32(c.r[3], c.r[3].w[0] + c.r[10].w[0]);
    set32(c.r[10], c.r[9].w[0] << 2);
    set32(c.r[9], ld32((c.r[29].w[0] + 236u)));
    c.budget -= 14;
    { const bool t = c.r[15].d[0] == 0ull; set32(c.r[9], c.r[9].w[0] + c.r[10].w[0]);  if (t) { goto L_0019B680; } }
    set32(c.r[10], ld32((c.r[5].w[0])));
    c.r[8].d[0] = c.r[15].sd[0] < 128ll ? 1ull : 0ull;
    st32((c.r[29].w[0] + 252u), c.r[10].w[0]);
    set32(c.r[9], ld32((c.r[9].w[0])));
    c.r[25].d[0] = ld8((c.r[29].w[0] + 255u));
    c.budget -= 7;
    { const bool t = c.r[8].d[0] != 0ull; st32((c.r[29].w[0] + 248u), c.r[9].w[0]);  if (t) { goto L_0019B568; } }
    set32(c.r[8], ld32((c.r[29].w[0] + 248u)));
    c.r[25].d[0] = c.r[15].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 252u), c.r[8].w[0]);  if (t) { goto L_0019B5A4; } }
L_0019B568:
    set32(c.r[10], ld32((c.r[23].w[0])));
    set32(c.r[8], c.r[29].w[0] + 248u);
    set32(c.r[11], ld32((c.r[8].w[0])));
    mmi::pextlb(c.r[8], c.r[0], c.r[10]);
    mmi::pextlb(c.r[9], c.r[0], c.r[11]);
    mmi::psubsh(c.r[10], c.r[9], c.r[8]);
    mmi::pextlh(c.r[9], c.r[0], c.r[10]);
    mmi::pextlw(c.r[11], c.r[15], c.r[15]);
    mmi::pextlw(c.r[10], c.r[11], c.r[11]);
    { Reg128 scratch; mmi::pmulth(c, c.r[11], c.r[9], c.r[10], 0); }
    mmi::psraw(c.r[9], c.r[11], 7u);
    mmi::ppach(c.r[10], c.r[0], c.r[9]);
    mmi::paddh(c.r[11], c.r[10], c.r[8]);
    mmi::ppacb(c.r[9], c.r[0], c.r[11]);
    st32((c.r[23].w[0]), c.r[9].w[0]);
    c.budget -= 15;
L_0019B5A4:
    c.r[15].d[0] = ld8((c.r[3].w[0] + 3u));
    c.r[8].d[0] = c.r[15].sd[0] < 128ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[8].d[0] != 0ull;  if (t) { goto L_0019B5C0; } }
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 252u), c.r[3].w[0]);  if (t) { goto L_0019B600; } }
L_0019B5C0:
    c.budget -= 2;
    { const bool t = c.r[15].sd[0] <= 0; c.r[1].d[0] = c.r[24].sd[0] < 128ll ? 1ull : 0ull;  if (t) { goto L_0019B604; } }
    set32(c.r[10], ld32((c.r[23].w[0])));
    set32(c.r[11], ld32((c.r[3].w[0])));
    mmi::pextlb(c.r[8], c.r[0], c.r[10]);
    mmi::pextlb(c.r[9], c.r[0], c.r[11]);
    mmi::psubsh(c.r[10], c.r[9], c.r[8]);
    mmi::pextlh(c.r[9], c.r[0], c.r[10]);
    mmi::pextlw(c.r[11], c.r[15], c.r[15]);
    mmi::pextlw(c.r[10], c.r[11], c.r[11]);
    { Reg128 scratch; mmi::pmulth(c, c.r[11], c.r[9], c.r[10], 0); }
    mmi::psraw(c.r[9], c.r[11], 7u);
    mmi::ppach(c.r[10], c.r[0], c.r[9]);
    mmi::paddh(c.r[11], c.r[10], c.r[8]);
    mmi::ppacb(c.r[9], c.r[0], c.r[11]);
    st32((c.r[23].w[0]), c.r[9].w[0]);
    c.budget -= 14;
L_0019B600:
    c.r[1].d[0] = c.r[24].sd[0] < 128ll ? 1ull : 0ull;
    c.budget -= 1;
L_0019B604:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull; c.r[1].d[0] = c.r[24].sd[0] < 129ll ? 1ull : 0ull;  if (t) { goto L_0019B638; } }
    set32(c.r[10], ld32((c.r[23].w[0])));
    mmi::pextlw(c.r[11], c.r[24], c.r[24]);
    mmi::pextlb(c.r[9], c.r[0], c.r[10]);
    mmi::pextlw(c.r[10], c.r[11], c.r[11]);
    mmi::pextlh(c.r[8], c.r[0], c.r[9]);
    { Reg128 scratch; mmi::pmulth(c, c.r[9], c.r[8], c.r[10], 0); }
    mmi::psraw(c.r[11], c.r[9], 7u);
    mmi::ppach(c.r[10], c.r[0], c.r[11]);
    mmi::ppacb(c.r[8], c.r[0], c.r[10]);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st32((c.r[23].w[0]), c.r[8].w[0]);  if (t) { goto L_0019B674; } }
L_0019B638:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0019B674; } }
    set32(c.r[24], c.r[24].w[0] - 128u);
    set32(c.r[10], ld32((c.r[23].w[0])));
    mmi::pextlw(c.r[11], c.r[24], c.r[24]);
    mmi::pextlb(c.r[8], c.r[0], c.r[10]);
    mmi::psubsh(c.r[9], c.r[30], c.r[8]);
    mmi::pextlh(c.r[10], c.r[0], c.r[9]);
    mmi::pextlw(c.r[9], c.r[11], c.r[11]);
    { Reg128 scratch; mmi::pmulth(c, c.r[11], c.r[9], c.r[10], 0); }
    mmi::psraw(c.r[9], c.r[11], 7u);
    mmi::ppach(c.r[10], c.r[0], c.r[9]);
    mmi::paddh(c.r[11], c.r[10], c.r[8]);
    mmi::ppacb(c.r[9], c.r[0], c.r[11]);
    st32((c.r[23].w[0]), c.r[9].w[0]);
    c.budget -= 13;
L_0019B674:
    st8((c.r[29].w[0] + 255u), static_cast<std::uint8_t>(c.r[25].w[0]));
    set32(c.r[3], ld32((c.r[29].w[0] + 252u)));
    st32((c.r[5].w[0]), c.r[3].w[0]);
    c.budget -= 3;
L_0019B680:
    set32(c.r[4], c.r[4].w[0] + 1u);
    set32(c.r[12], c.r[12].w[0] + 1u);
    set32(c.r[7], c.r[7].w[0] + 1u);
    set32(c.r[6], c.r[6].w[0] + 1u);
    set32(c.r[5], c.r[5].w[0] + 4u);
    c.budget -= 5;
L_0019B694:
    c.r[3].d[0] = c.r[4].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0019B504u | kUnwind; return; } goto L_0019B504; } }
L_0019B6A0:
    set32(c.r[13], c.r[13].w[0] + 1u);
    c.budget -= 1;
L_0019B6A4:
    set32(c.r[19], c.r[19].w[0] + c.r[20].w[0]);
    set32(c.r[16], c.r[16].w[0] + c.r[20].w[0]);
    set32(c.r[14], c.r[14].w[0] + c.r[20].w[0]);
    set32(c.r[21], c.r[21].w[0] + 1024u);
    c.budget -= 4;
L_0019B6B4:
    set32(c.r[3], ld32((c.r[29].w[0] + 208u)));
    c.r[3].d[0] = c.r[13].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[3].d[0] = c.r[13].sd[0] < 32ll ? 1ull : 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0019B4B8u | kUnwind; return; } goto L_0019B4B8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));  if (t) { goto L_0019B984; } }
L_0019B6CC:
    c.r[24].d[0] = 0ull + 0ull;
    c.r[6].d[0] = c.r[4].d[0] | 255ull;
    set32(c.r[3], c.r[18].w[0] << 2);
    c.r[4].d[0] = c.r[6].d[0] << 32;
    set32(c.r[5], c.r[29].w[0] + 244u);
    set32(c.r[25], c.r[29].w[0] + 240u);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[6].d[0] | c.r[4].d[0];  if (t) { goto L_0019B868; } }
L_0019B6EC:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != 0ull; c.r[6].d[0] = c.r[24].sd[0] < 96ll ? 1ull : 0ull;  if (t) { goto L_0019B6FC; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { goto L_0019B710; } }
L_0019B6FC:
    c.r[6].d[0] = ld8((c.r[29].w[0] + 192u));
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == 0ull; set32(c.r[23], c.r[19].w[0] + c.r[18].w[0]);  if (t) { goto L_0019B720; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[24], c.r[24].w[0] + 1u);  if (t) { goto L_0019B85C; } }
L_0019B710:
    c.r[6].d[0] = ld8((c.r[29].w[0] + 176u));
    c.budget -= 3;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { goto L_0019B858; } }
    set32(c.r[23], c.r[19].w[0] + c.r[18].w[0]);
    c.budget -= 1;
L_0019B720:
    set32(c.r[15], c.r[16].w[0] + c.r[18].w[0]);
    set32(c.r[14], c.r[21].w[0] + c.r[3].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[13].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_0019B84C; } }
L_0019B730:
    c.r[7].d[0] = ld8((c.r[15].w[0]));
    c.r[6].d[0] = ld8((c.r[23].w[0]));
    set32(c.r[7], c.r[7].w[0] << 2);
    set32(c.r[8], c.r[22].w[0] + c.r[7].w[0]);
    set32(c.r[7], c.r[6].w[0] << 2);
    c.r[12].d[0] = ld8((c.r[8].w[0] + 3u));
    set32(c.r[6], ld32((c.r[29].w[0] + 236u)));
    set32(c.r[9], c.r[6].w[0] + c.r[7].w[0]);
    c.budget -= 10;
    { const bool t = c.r[12].d[0] == 0ull; c.r[7].d[0] = ld8((c.r[8].w[0]));  if (t) { goto L_0019B83C; } }
    set32(c.r[6], ld32((c.r[14].w[0])));
    c.r[8].d[0] = c.r[12].sd[0] < 128ll ? 1ull : 0ull;
    st32((c.r[29].w[0] + 244u), c.r[6].w[0]);
    set32(c.r[9], ld32((c.r[9].w[0])));
    c.r[6].d[0] = ld8((c.r[29].w[0] + 247u));
    c.budget -= 7;
    { const bool t = c.r[8].d[0] != 0ull; st32((c.r[29].w[0] + 240u), c.r[9].w[0]);  if (t) { goto L_0019B784; } }
    set32(c.r[8], ld32((c.r[29].w[0] + 240u)));
    c.r[6].d[0] = c.r[12].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 244u), c.r[8].w[0]);  if (t) { goto L_0019B7BC; } }
L_0019B784:
    set32(c.r[10], ld32((c.r[5].w[0])));
    set32(c.r[11], ld32((c.r[25].w[0])));
    mmi::pextlb(c.r[8], c.r[0], c.r[10]);
    mmi::pextlb(c.r[9], c.r[0], c.r[11]);
    mmi::psubsh(c.r[10], c.r[9], c.r[8]);
    mmi::pextlh(c.r[9], c.r[0], c.r[10]);
    mmi::pextlw(c.r[11], c.r[12], c.r[12]);
    mmi::pextlw(c.r[10], c.r[11], c.r[11]);
    { Reg128 scratch; mmi::pmulth(c, c.r[11], c.r[9], c.r[10], 0); }
    mmi::psraw(c.r[9], c.r[11], 7u);
    mmi::ppach(c.r[10], c.r[0], c.r[9]);
    mmi::paddh(c.r[11], c.r[10], c.r[8]);
    mmi::ppacb(c.r[9], c.r[0], c.r[11]);
    st32((c.r[5].w[0]), c.r[9].w[0]);
    c.budget -= 14;
L_0019B7BC:
    c.r[1].d[0] = c.r[7].sd[0] < 128ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[1].d[0] = c.r[7].sd[0] < 129ll ? 1ull : 0ull;  if (t) { goto L_0019B7F4; } }
    set32(c.r[10], ld32((c.r[5].w[0])));
    mmi::pextlw(c.r[11], c.r[7], c.r[7]);
    mmi::pextlb(c.r[9], c.r[0], c.r[10]);
    mmi::pextlw(c.r[10], c.r[11], c.r[11]);
    mmi::pextlh(c.r[8], c.r[0], c.r[9]);
    { Reg128 scratch; mmi::pmulth(c, c.r[9], c.r[8], c.r[10], 0); }
    mmi::psraw(c.r[11], c.r[9], 7u);
    mmi::ppach(c.r[10], c.r[0], c.r[11]);
    mmi::ppacb(c.r[8], c.r[0], c.r[10]);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st32((c.r[5].w[0]), c.r[8].w[0]);  if (t) { goto L_0019B830; } }
L_0019B7F4:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0019B830; } }
    set32(c.r[7], c.r[7].w[0] - 128u);
    set32(c.r[10], ld32((c.r[5].w[0])));
    mmi::pextlw(c.r[11], c.r[7], c.r[7]);
    mmi::pextlb(c.r[8], c.r[0], c.r[10]);
    mmi::psubsh(c.r[9], c.r[4], c.r[8]);
    mmi::pextlh(c.r[10], c.r[0], c.r[9]);
    mmi::pextlw(c.r[9], c.r[11], c.r[11]);
    { Reg128 scratch; mmi::pmulth(c, c.r[11], c.r[9], c.r[10], 0); }
    mmi::psraw(c.r[9], c.r[11], 7u);
    mmi::ppach(c.r[10], c.r[0], c.r[9]);
    mmi::paddh(c.r[11], c.r[10], c.r[8]);
    mmi::ppacb(c.r[9], c.r[0], c.r[11]);
    st32((c.r[5].w[0]), c.r[9].w[0]);
    c.budget -= 13;
L_0019B830:
    st8((c.r[29].w[0] + 247u), static_cast<std::uint8_t>(c.r[6].w[0]));
    set32(c.r[6], ld32((c.r[29].w[0] + 244u)));
    st32((c.r[14].w[0]), c.r[6].w[0]);
    c.budget -= 3;
L_0019B83C:
    set32(c.r[13], c.r[13].w[0] + 1u);
    set32(c.r[23], c.r[23].w[0] + 1u);
    set32(c.r[15], c.r[15].w[0] + 1u);
    set32(c.r[14], c.r[14].w[0] + 4u);
    c.budget -= 4;
L_0019B84C:
    c.r[6].d[0] = c.r[13].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0019B730u | kUnwind; return; } goto L_0019B730; } }
L_0019B858:
    set32(c.r[24], c.r[24].w[0] + 1u);
    c.budget -= 1;
L_0019B85C:
    set32(c.r[19], c.r[19].w[0] + c.r[20].w[0]);
    set32(c.r[16], c.r[16].w[0] + c.r[20].w[0]);
    set32(c.r[21], c.r[21].w[0] + 1024u);
    c.budget -= 3;
L_0019B868:
    set32(c.r[6], ld32((c.r[29].w[0] + 208u)));
    c.r[6].d[0] = c.r[24].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[6].d[0] != 0ull; c.r[6].d[0] = c.r[24].sd[0] < 32ll ? 1ull : 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0019B6ECu | kUnwind; return; } goto L_0019B6EC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0019B980; } }
L_0019B880:
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[18].w[0] << 2);  if (t) { goto L_0019B970; } }
L_0019B88C:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull; c.r[4].d[0] = c.r[7].sd[0] < 96ll ? 1ull : 0ull;  if (t) { goto L_0019B89C; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_0019B8B0; } }
L_0019B89C:
    c.r[4].d[0] = ld8((c.r[29].w[0] + 192u));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[6], c.r[19].w[0] + c.r[18].w[0]);  if (t) { goto L_0019B8C0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[7], c.r[7].w[0] + 1u);  if (t) { goto L_0019B968; } }
L_0019B8B0:
    c.r[4].d[0] = ld8((c.r[29].w[0] + 176u));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_0019B964; } }
    set32(c.r[6], c.r[19].w[0] + c.r[18].w[0]);
    c.budget -= 1;
L_0019B8C0:
    set32(c.r[5], c.r[21].w[0] + c.r[3].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_0019B958; } }
L_0019B8CC:
    c.r[8].d[0] = ld8((c.r[6].w[0]));
    set32(c.r[9], c.r[8].w[0] << 2);
    set32(c.r[8], ld32((c.r[29].w[0] + 236u)));
    set32(c.r[9], c.r[8].w[0] + c.r[9].w[0]);
    c.r[13].d[0] = ld8((c.r[9].w[0] + 3u));
    c.r[8].d[0] = c.r[13].sd[0] < 128ll ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[8].d[0] != 0ull;  if (t) { goto L_0019B8F8; } }
    set32(c.r[8], ld32((c.r[9].w[0])));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[5].w[0]), c.r[8].w[0]);  if (t) { goto L_0019B94C; } }
L_0019B8F8:
    c.r[8].d[0] = ld8((c.r[5].w[0] + 3u));
    c.r[12].d[0] = c.r[8].d[0] & 255ull;
    set32(c.r[10], ld32((c.r[5].w[0])));
    set32(c.r[11], ld32((c.r[9].w[0])));
    mmi::pextlb(c.r[8], c.r[0], c.r[10]);
    mmi::pextlb(c.r[9], c.r[0], c.r[11]);
    mmi::psubsh(c.r[10], c.r[9], c.r[8]);
    mmi::pextlh(c.r[9], c.r[0], c.r[10]);
    mmi::pextlw(c.r[11], c.r[13], c.r[13]);
    mmi::pextlw(c.r[10], c.r[11], c.r[11]);
    { Reg128 scratch; mmi::pmulth(c, c.r[11], c.r[9], c.r[10], 0); }
    mmi::psraw(c.r[9], c.r[11], 7u);
    mmi::ppach(c.r[10], c.r[0], c.r[9]);
    mmi::paddh(c.r[11], c.r[10], c.r[8]);
    mmi::ppacb(c.r[9], c.r[0], c.r[11]);
    st32((c.r[5].w[0]), c.r[9].w[0]);
    c.r[1].d[0] = c.r[12].sd[0] < c.r[13].sd[0] ? 1ull : 0ull;
    c.budget -= 19;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0019B948; } }
    c.r[12].d[0] = c.r[13].d[0] + 0ull;
    c.budget -= 1;
L_0019B948:
    st8((c.r[5].w[0] + 3u), static_cast<std::uint8_t>(c.r[12].w[0]));
    c.budget -= 1;
L_0019B94C:
    set32(c.r[4], c.r[4].w[0] + 1u);
    set32(c.r[6], c.r[6].w[0] + 1u);
    set32(c.r[5], c.r[5].w[0] + 4u);
    c.budget -= 3;
L_0019B958:
    c.r[8].d[0] = c.r[4].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[8].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0019B8CCu | kUnwind; return; } goto L_0019B8CC; } }
L_0019B964:
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.budget -= 1;
L_0019B968:
    set32(c.r[19], c.r[19].w[0] + c.r[20].w[0]);
    set32(c.r[21], c.r[21].w[0] + 1024u);
    c.budget -= 2;
L_0019B970:
    set32(c.r[4], ld32((c.r[29].w[0] + 208u)));
    c.r[4].d[0] = c.r[7].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull; c.r[4].d[0] = c.r[7].sd[0] < 32ll ? 1ull : 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0019B88Cu | kUnwind; return; } goto L_0019B88C; } }
L_0019B980:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));
    c.budget -= 1;
L_0019B984:
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 256u);  c.pc = t; return; }
L_0019B9B0:
    set32(c.r[3], ld32((c.r[5].w[0] + 32u)));
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[11], ld32((c.r[5].w[0] + 4u)));
    set32(c.r[12], ld32((c.r[5].w[0])));
    set32(c.r[4], ld32((c.r[3].w[0] + 4u)));
    c.r[1].d[0] = 0ll < c.r[11].sd[0] ? 1ull : 0ull;
    c.r[3].d[0] = ld16((c.r[4].w[0] + 12u));
    c.budget -= 9;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[10], c.r[4].w[0] + c.r[3].w[0]);  if (t) { goto L_0019BB0C; } }
    set32(c.r[3], c.r[12].w[0] - 8u);
    c.budget -= 1;
L_0019B9D8:
    c.r[1].d[0] = 0ll < c.r[12].sd[0] ? 1ull : 0ull;
    c.r[7].d[0] = c.r[10].d[0] + 0ull;
    c.r[5].d[0] = c.r[8].d[0] + 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_0019BAF8; } }
    c.r[1].d[0] = c.r[12].sd[0] < 9ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull; c.r[1].d[0] = c.r[4].sd[0] < c.r[12].sd[0] ? 1ull : 0ull;  if (t) { goto L_0019BAC8; } }
L_0019B9F8:
    c.r[14].d[0] = ld8((c.r[7].w[0]));
    set32(c.r[4], c.r[4].w[0] + 8u);
    c.r[13].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    set32(c.r[14], c.r[14].w[0] << 2);
    set32(c.r[14], c.r[6].w[0] + c.r[14].w[0]);
    set32(c.r[14], ld32((c.r[14].w[0])));
    st32((c.r[5].w[0]), c.r[14].w[0]);
    c.r[14].d[0] = ld8((c.r[7].w[0] + 1u));
    set32(c.r[14], c.r[14].w[0] << 2);
    set32(c.r[7], c.r[7].w[0] + 2u);
    set32(c.r[14], c.r[6].w[0] + c.r[14].w[0]);
    set32(c.r[14], ld32((c.r[14].w[0])));
    st32((c.r[5].w[0] + 4u), c.r[14].w[0]);
    c.r[14].d[0] = ld8((c.r[7].w[0]));
    set32(c.r[5], c.r[5].w[0] + 8u);
    set32(c.r[14], c.r[14].w[0] << 2);
    set32(c.r[14], c.r[6].w[0] + c.r[14].w[0]);
    set32(c.r[14], ld32((c.r[14].w[0])));
    st32((c.r[5].w[0]), c.r[14].w[0]);
    c.r[14].d[0] = ld8((c.r[7].w[0] + 1u));
    set32(c.r[14], c.r[14].w[0] << 2);
    set32(c.r[7], c.r[7].w[0] + 2u);
    set32(c.r[14], c.r[6].w[0] + c.r[14].w[0]);
    set32(c.r[14], ld32((c.r[14].w[0])));
    st32((c.r[5].w[0] + 4u), c.r[14].w[0]);
    c.r[14].d[0] = ld8((c.r[7].w[0]));
    set32(c.r[5], c.r[5].w[0] + 8u);
    set32(c.r[14], c.r[14].w[0] << 2);
    set32(c.r[14], c.r[6].w[0] + c.r[14].w[0]);
    set32(c.r[14], ld32((c.r[14].w[0])));
    st32((c.r[5].w[0]), c.r[14].w[0]);
    c.r[14].d[0] = ld8((c.r[7].w[0] + 1u));
    set32(c.r[14], c.r[14].w[0] << 2);
    set32(c.r[7], c.r[7].w[0] + 2u);
    set32(c.r[14], c.r[6].w[0] + c.r[14].w[0]);
    set32(c.r[14], ld32((c.r[14].w[0])));
    st32((c.r[5].w[0] + 4u), c.r[14].w[0]);
    c.r[14].d[0] = ld8((c.r[7].w[0]));
    set32(c.r[5], c.r[5].w[0] + 8u);
    set32(c.r[14], c.r[14].w[0] << 2);
    set32(c.r[14], c.r[6].w[0] + c.r[14].w[0]);
    set32(c.r[14], ld32((c.r[14].w[0])));
    st32((c.r[5].w[0]), c.r[14].w[0]);
    c.r[14].d[0] = ld8((c.r[7].w[0] + 1u));
    set32(c.r[14], c.r[14].w[0] << 2);
    set32(c.r[7], c.r[7].w[0] + 2u);
    set32(c.r[14], c.r[6].w[0] + c.r[14].w[0]);
    set32(c.r[14], ld32((c.r[14].w[0])));
    st32((c.r[5].w[0] + 4u), c.r[14].w[0]);
    c.budget -= 51;
    { const bool t = c.r[13].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0019B9F8u | kUnwind; return; } goto L_0019B9F8; } }
    c.r[1].d[0] = c.r[4].sd[0] < c.r[12].sd[0] ? 1ull : 0ull;
    c.budget -= 1;
L_0019BAC8:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0019BAF8; } }
L_0019BAD0:
    c.r[14].d[0] = ld8((c.r[7].w[0]));
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.r[13].d[0] = c.r[4].sd[0] < c.r[12].sd[0] ? 1ull : 0ull;
    set32(c.r[14], c.r[14].w[0] << 2);
    set32(c.r[7], c.r[7].w[0] + 1u);
    set32(c.r[14], c.r[6].w[0] + c.r[14].w[0]);
    set32(c.r[14], ld32((c.r[14].w[0])));
    st32((c.r[5].w[0]), c.r[14].w[0]);
    c.budget -= 10;
    { const bool t = c.r[13].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0019BAD0u | kUnwind; return; } goto L_0019BAD0; } }
L_0019BAF8:
    set32(c.r[9], c.r[9].w[0] + 1u);
    set32(c.r[10], c.r[10].w[0] + c.r[12].w[0]);
    c.r[4].d[0] = c.r[9].sd[0] < c.r[11].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[8], c.r[8].w[0] + 1024u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0019B9D8u | kUnwind; return; } goto L_0019B9D8; } }
L_0019BB0C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0019BB20:
    set32(c.r[29], c.r[29].w[0] - 368u);
    c.r[11].sd[0] = static_cast<std::int32_t>(0x00410000u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    set32(c.r[11], c.r[11].w[0] + 4752u);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    set32(c.r[10], c.r[29].w[0] + 256u);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 248u), c.r[8].w[0]);
    st32((c.r[29].w[0] + 252u), c.r[6].w[0]);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.r[12].d[0] = ld8((c.r[4].w[0] + 15u));
    set32(c.r[8], c.r[8].w[0] + 13904u);
    set32(c.r[20], ld32((c.r[5].w[0])));
    ld128((c.r[11].w[0]) & ~15u, c.r[6]);
    ld128((c.r[11].w[0] + 16u) & ~15u, c.r[9]);
    ld128((c.r[11].w[0] + 32u) & ~15u, c.r[7]);
    ld128((c.r[11].w[0] + 48u) & ~15u, c.r[3]);
    c.r[13].d[0] = c.r[12].d[0] & 3ull;
    set32(c.r[23], c.r[13].w[0] + 1u);
    c.r[12].d[0] = c.r[12].d[0] << 60;
    c.r[12].d[0] = c.r[12].d[0] >> 62;
    set32(c.r[30], c.r[12].w[0] + 1u);
    mmi::mult(c, 0, c.r[20].w[0], c.r[23].w[0]);
    c.r[13].d[0] = c.lo.d[0];
    mmi::mult(c, 1, c.r[20].w[0], c.r[30].w[0]);
    c.r[12].d[0] = c.lo.d[1];
    st128((c.r[10].w[0]) & ~15u, c.r[6]);
    st128((c.r[10].w[0] + 16u) & ~15u, c.r[9]);
    set32(c.r[6], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[12].w[0]) >> 2));
    st128((c.r[10].w[0] + 32u) & ~15u, c.r[7]);
    st128((c.r[10].w[0] + 48u) & ~15u, c.r[3]);
    set32(c.r[7], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[13].w[0]) >> 2));
    ld128((c.r[11].w[0] + 64u) & ~15u, c.r[9]);
    ld128((c.r[11].w[0] + 80u) & ~15u, c.r[3]);
    st128((c.r[10].w[0] + 64u) & ~15u, c.r[9]);
    st128((c.r[10].w[0] + 80u) & ~15u, c.r[3]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0])));
    st32((c.r[29].w[0] + 256u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 2u)));
    st32((c.r[29].w[0] + 268u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 260u), c.r[7].w[0]);
    st32((c.r[29].w[0] + 272u), c.r[6].w[0]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 14u));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0])));
    c.r[3].d[0] = c.r[3].d[0] & 15ull;
    st32((c.r[29].w[0] + 224u), c.r[3].w[0]);
    set32(c.r[4], c.r[4].w[0] + c.r[7].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 224u)));
    set32(c.r[3], c.r[3].w[0] << 5);
    set32(c.r[19], c.r[8].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[19].w[0])));
    c.r[1].d[0] = c.r[3].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 60;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0019BCE4; } }
    st32((c.r[29].w[0] + 280u), 0u);
    c.r[9].sd[0] = static_cast<std::int16_t>(ld16((c.r[21].w[0])));
    set32(c.r[8], ld32((c.r[19].w[0])));
    set32(c.r[4], ld32((c.r[29].w[0] + 272u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 268u)));
    set32(c.r[11], ld32((c.r[29].w[0] + 276u)));
    set32(c.r[9], c.r[9].w[0] + c.r[7].w[0]);
    set32(c.r[8], c.r[9].w[0] - c.r[8].w[0]);
    st32((c.r[29].w[0] + 284u), c.r[8].w[0]);
    set32(c.r[9], ld32((c.r[29].w[0] + 284u)));
    st32((c.r[29].w[0] + 296u), c.r[4].w[0]);
    st32((c.r[29].w[0] + 292u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 300u), c.r[11].w[0]);
    set32(c.r[4], c.r[7].w[0] - c.r[9].w[0]);
    st32((c.r[29].w[0] + 260u), c.r[4].w[0]);
    set32(c.r[8], ld32((c.r[29].w[0] + 260u)));
    st32((c.r[29].w[0] + 288u), c.r[8].w[0]);
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[21].w[0] + 2u)));
    set32(c.r[4], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[7], c.r[7].w[0] + c.r[6].w[0]);
    c.r[1].d[0] = c.r[4].sd[0] < c.r[7].sd[0] ? 1ull : 0ull;
    c.budget -= 23;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0019BD40; } }
    st32((c.r[29].w[0] + 308u), c.r[8].w[0]);
    st32((c.r[29].w[0] + 332u), c.r[9].w[0]);
    set32(c.r[10], ld32((c.r[29].w[0] + 256u)));
    set32(c.r[9], ld32((c.r[29].w[0] + 264u)));
    set32(c.r[8], ld32((c.r[29].w[0] + 280u)));
    set32(c.r[7], ld32((c.r[29].w[0] + 288u)));
    st32((c.r[29].w[0] + 316u), 0u);
    set32(c.r[4], ld32((c.r[29].w[0] + 316u)));
    st32((c.r[29].w[0] + 304u), c.r[10].w[0]);
    st32((c.r[29].w[0] + 312u), c.r[9].w[0]);
    st32((c.r[29].w[0] + 328u), c.r[8].w[0]);
    st32((c.r[29].w[0] + 336u), c.r[7].w[0]);
    c.r[8].sd[0] = static_cast<std::int16_t>(ld16((c.r[21].w[0] + 2u)));
    set32(c.r[7], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[8], c.r[8].w[0] + c.r[6].w[0]);
    set32(c.r[7], c.r[8].w[0] - c.r[7].w[0]);
    st32((c.r[29].w[0] + 340u), c.r[4].w[0]);
    st32((c.r[29].w[0] + 320u), c.r[7].w[0]);
    set32(c.r[4], ld32((c.r[29].w[0] + 320u)));
    st32((c.r[29].w[0] + 292u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 300u), c.r[11].w[0]);
    set32(c.r[3], c.r[6].w[0] - c.r[4].w[0]);
    st32((c.r[29].w[0] + 344u), c.r[4].w[0]);
    st32((c.r[29].w[0] + 272u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 272u)));
    st32((c.r[29].w[0] + 324u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 296u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 324u)));
    c.budget -= 30;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 348u), c.r[3].w[0]);  if (t) { goto L_0019BD40; } }
L_0019BCE4:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[21].w[0] + 2u)));
    set32(c.r[3], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[4], c.r[4].w[0] + c.r[6].w[0]);
    c.r[1].d[0] = c.r[3].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0019BD40; } }
    st32((c.r[29].w[0] + 292u), 0u);
    c.r[9].sd[0] = static_cast<std::int16_t>(ld16((c.r[21].w[0] + 2u)));
    set32(c.r[8], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 264u)));
    set32(c.r[7], ld32((c.r[29].w[0] + 256u)));
    set32(c.r[4], ld32((c.r[29].w[0] + 260u)));
    set32(c.r[9], c.r[9].w[0] + c.r[6].w[0]);
    set32(c.r[8], c.r[9].w[0] - c.r[8].w[0]);
    st32((c.r[29].w[0] + 296u), c.r[8].w[0]);
    st32((c.r[29].w[0] + 288u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 296u)));
    st32((c.r[29].w[0] + 280u), c.r[7].w[0]);
    st32((c.r[29].w[0] + 284u), c.r[4].w[0]);
    set32(c.r[3], c.r[6].w[0] - c.r[3].w[0]);
    st32((c.r[29].w[0] + 272u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 272u)));
    st32((c.r[29].w[0] + 300u), c.r[3].w[0]);
    c.budget -= 17;
L_0019BD40:
    set32(c.r[5], ld32((c.r[5].w[0] + 32u)));
    st32((c.r[29].w[0] + 176u), 0u);
    c.r[3].d[0] = ld8((c.r[21].w[0] + 15u));
    c.r[4].d[0] = ld8((c.r[21].w[0] + 14u));
    set32(c.r[5], ld32((c.r[5].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] << 58;
    c.r[3].d[0] = c.r[3].d[0] >> 62;
    c.r[4].d[0] = c.r[4].d[0] << 56;
    st32((c.r[29].w[0] + 192u), c.r[3].w[0]);
    c.r[22].d[0] = c.r[4].d[0] >> 62;
    c.r[3].d[0] = ld16((c.r[5].w[0] + 12u));
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    c.budget -= 14;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 208u), c.r[3].w[0]);  if (t) { [[clang::musttail]] return unit_0027(c, 8u, depth); } }
L_0019BD78:
    set32(c.r[3], ld32((c.r[29].w[0] + 176u)));
    set32(c.r[4], 0u - 1u);
    set32(c.r[5], c.r[3].w[0] << 1);
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] + c.r[29].w[0]);
    set32(c.r[18], c.r[3].w[0] + 256u);
    set32(c.r[5], ld32((c.r[18].w[0])));
    c.budget -= 10;
    { const bool t = c.r[5].d[0] == c.r[4].d[0];  if (t) { [[clang::musttail]] return unit_0027(c, 7u, depth); } }
    set32(c.r[3], ld32((c.r[18].w[0] + 12u)));
    set32(c.r[3], c.r[3].w[0] << 8);
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    set32(c.r[4], c.r[3].w[0] << 2);
    set32(c.r[3], ld32((c.r[29].w[0] + 248u)));
    set32(c.r[17], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 224u)));
    c.r[1].d[0] = c.r[3].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_0027(c, 4u, depth); } }
    set32(c.r[3], ld32((c.r[21].w[0] + 656u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x70000000u);
    c.r[2].d[0] = c.r[2].d[0] | 2048ull;
    st32((c.r[29].w[0] + 160u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 264u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 4u)));
    c.r[3].d[0] = ld16((c.r[4].w[0] + 12u));
    c.r[2].d[0] = ld8((c.r[4].w[0] + 18u));
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[4].w[0] + c.r[3].w[0]);  if (t) { goto L_0019BDF8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_0019BE00; } }
L_0019BDF8:
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[5], c.r[16].w[0] + c.r[2].w[0]);
    c.budget -= 2;
L_0019BE00:
    set32(c.r[4], ld32((c.r[29].w[0] + 160u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019BE0Cu); set32(c.r[6], 0u + 1024u);  if (depth < kMaxDepth) unit_0010(c, 107u, depth + 1u); else { c.pc = 0x001415A0u; return; } if (c.pc != 0x0019BE0Cu) [[unlikely]] return; }
L_0019BE0C:
    set32(c.r[5], ld32((c.r[29].w[0] + 192u)));
    c.r[15].d[0] = 0ull + 0ull;
    set32(c.r[8], ld32((c.r[19].w[0] + 12u)));
    set32(c.r[4], c.r[20].w[0] - 1u);
    set32(c.r[9], ld32((c.r[19].w[0] + 8u)));
    set32(c.r[25], c.r[29].w[0] + 364u);
    set32(c.r[7], ld32((c.r[18].w[0] + 12u)));
    set32(c.r[6], ld32((c.r[18].w[0])));
    set32(c.r[3], ld32((c.r[29].w[0] + 192u)));
    c.r[24].d[0] = c.r[5].d[0] & 2ull;
    set32(c.r[5], c.r[8].w[0] << 8);
    set32(c.r[8], c.r[9].w[0] + c.r[5].w[0]);
    set32(c.r[5], c.r[7].w[0] << 8);
    set32(c.r[16], c.r[16].w[0] + c.r[8].w[0]);
    set32(c.r[5], c.r[6].w[0] + c.r[5].w[0]);
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 18;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[16].w[0] + c.r[5].w[0]);  if (t) { [[clang::musttail]] return unit_0027(c, 3u, depth); } }
L_0019BE54:
    set32(c.r[5], ld32((c.r[18].w[0] + 20u)));
    c.r[14].d[0] = c.r[17].d[0] + 0ull;
    c.r[13].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + c.r[15].w[0]);
    set32(c.r[5], c.r[5].w[0] << 2);
    c.budget -= 7;
    { const bool t = c.r[30].d[0] != 0ull; mmi::div(c, 0, c.r[5].w[0], c.r[30].w[0]);  if (t) { goto L_0019BE74; } }
    breakpoint(c, 0x0019BE70u);
    c.budget -= 1;
L_0019BE74:
    set32(c.r[6], ld32((c.r[29].w[0] + 224u)));
    c.r[12].d[0] = c.lo.d[0];
    set32(c.r[5], 0u + 2u);
    c.budget -= 5;
    { const bool t = c.r[6].d[0] != c.r[5].d[0]; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_0019BEA8; } }
    set32(c.r[5], ld32((c.r[18].w[0] + 12u)));
    set32(c.r[5], c.r[5].w[0] + c.r[15].w[0]);
    c.r[5].d[0] = c.r[5].sd[0] < 32ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[5].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);  if (t) { goto L_0019BEA4; } }
    set32(c.r[13], c.r[16].w[0] + 16384u);
    set32(c.r[14], c.r[17].w[0] + c.r[1].w[0]);
    c.budget -= 2;
L_0019BEA4:
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0019BEA8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[18].w[0] + 4u)));  if (t) { [[clang::musttail]] return unit_0027(c, 2u, depth); } }
L_0019BEB0:
    set32(c.r[5], ld32((c.r[18].w[0] + 8u)));
    set32(c.r[5], c.r[5].w[0] + c.r[7].w[0]);
    set32(c.r[5], c.r[5].w[0] << 2);
    c.budget -= 5;
    { const bool t = c.r[23].d[0] != 0ull; mmi::div(c, 0, c.r[5].w[0], c.r[23].w[0]);  if (t) { goto L_0019BEC8; } }
    breakpoint(c, 0x0019BEC4u);
    c.budget -= 1;
L_0019BEC8:
    c.r[8].d[0] = c.lo.d[0];
    set32(c.r[6], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[22].d[0] != c.r[6].d[0]; c.r[5].d[0] = c.r[12].d[0] + 0ull;  if (t) { goto L_0019BEE4; } }
    set32(c.r[5], c.r[4].w[0] - c.r[8].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[8].d[0] = c.r[12].d[0] + 0ull;  if (t) { goto L_0019BF0C; } }
L_0019BEE4:
    set32(c.r[6], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[22].d[0] != c.r[6].d[0]; set32(c.r[6], 0u + 3u);  if (t) { goto L_0019BEFC; } }
    set32(c.r[8], c.r[4].w[0] - c.r[8].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[5], c.r[4].w[0] - c.r[12].w[0]);  if (t) { goto L_0019BF0C; } }
L_0019BEFC:
    c.budget -= 2;
    { const bool t = c.r[22].d[0] != c.r[6].d[0];  if (t) { goto L_0019BF0C; } }
    c.r[5].d[0] = c.r[8].d[0] + 0ull;
    set32(c.r[8], c.r[4].w[0] - c.r[12].w[0]);
    c.budget -= 2;
L_0019BF0C:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_0019BF20; } }
    set32(c.r[8], c.r[4].w[0] - c.r[8].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[6], c.r[6].w[0] + c.r[8].w[0]);  if (t) { goto L_0019BF24; } }
L_0019BF20:
    set32(c.r[6], c.r[6].w[0] + c.r[8].w[0]);
    c.budget -= 1;
L_0019BF24:
    c.budget -= 2;
    { const bool t = c.r[24].d[0] == 0ull;  if (t) { goto L_0019BF3C; } }
    set32(c.r[5], c.r[4].w[0] - c.r[5].w[0]);
    mmi::mult(c, 0, c.r[20].w[0], c.r[5].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[6], c.r[6].w[0] + c.r[5].w[0]);  if (t) { goto L_0019BF44; } }
L_0019BF3C:
    mmi::mult(c, 0, c.r[5].w[0], c.r[20].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    set32(c.r[6], c.r[6].w[0] + c.r[5].w[0]);
    c.budget -= 2;
L_0019BF44:
    set32(c.r[5], ld32((c.r[29].w[0] + 208u)));
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    c.r[5].d[0] = ld8((c.r[5].w[0]));
    set32(c.r[6], c.r[5].w[0] << 2);
    set32(c.r[5], ld32((c.r[29].w[0] + 252u)));
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    c.f[0] = ld32((c.r[5].w[0]));
    st32((c.r[25].w[0]), c.f[0]);
    c.r[6].d[0] = ld8((c.r[13].w[0]));
    c.r[5].d[0] = ld8((c.r[29].w[0] + 367u));
    set32(c.r[8], c.r[6].w[0] << 2);
    set32(c.r[6], ld32((c.r[29].w[0] + 160u)));
    set32(c.r[6], c.r[8].w[0] + c.r[6].w[0]);
    c.r[6].d[0] = ld8((c.r[6].w[0] + 3u));
    set32(c.r[5], c.r[5].w[0] - c.r[6].w[0]);
    c.budget -= 17;
    { const bool t = c.r[5].sd[0] <= 0;  if (t) { goto L_0019BFF8; } }
    st8((c.r[29].w[0] + 367u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[6].d[0] = ld8((c.r[29].w[0] + 367u));
    c.r[5].d[0] = c.r[6].sd[0] < 128ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_0019BFA8; } }
    set32(c.r[5], ld32((c.r[29].w[0] + 364u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[14].w[0]), c.r[5].w[0]);  if (t) { goto L_0019BFF8; } }
L_0019BFA8:
    c.r[5].d[0] = ld8((c.r[14].w[0] + 3u));
    set32(c.r[10], ld32((c.r[14].w[0])));
    set32(c.r[11], ld32((c.r[25].w[0])));
    mmi::pextlb(c.r[8], c.r[0], c.r[10]);
    mmi::pextlb(c.r[9], c.r[0], c.r[11]);
    mmi::psubsh(c.r[10], c.r[9], c.r[8]);
    mmi::pextlh(c.r[9], c.r[0], c.r[10]);
    mmi::pextlw(c.r[11], c.r[6], c.r[6]);
    mmi::pextlw(c.r[10], c.r[11], c.r[11]);
    { Reg128 scratch; mmi::pmulth(c, c.r[11], c.r[9], c.r[10], 0); }
    mmi::psraw(c.r[9], c.r[11], 7u);
    mmi::ppach(c.r[10], c.r[0], c.r[9]);
    mmi::paddh(c.r[11], c.r[10], c.r[8]);
    mmi::ppacb(c.r[9], c.r[0], c.r[11]);
    st32((c.r[14].w[0]), c.r[9].w[0]);
    c.r[1].d[0] = c.r[5].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 18;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0019BFF4; } }
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 1;
L_0019BFF4:
    st8((c.r[14].w[0] + 3u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 1;
L_0019BFF8:
    set32(c.r[7], c.r[7].w[0] + 1u);
    set32(c.r[14], c.r[14].w[0] + 4u);
    c.budget -= 2;
    [[clang::musttail]] return unit_0027(c, 1u, depth);
}

}
