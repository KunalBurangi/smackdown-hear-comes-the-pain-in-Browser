#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0052[4096] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4,
    0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 6, 0, 7, 0, 0, 0, 0, 8, 0, 0, 0, 9, 0, 0, 0, 10, 0, 0, 11, 0, 12,
    0, 13, 0, 0, 14, 0, 0, 0, 0, 15, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 18, 0, 0, 19, 0,
    0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 22, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0,
    0, 0, 25, 0, 0, 0, 26, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0,
    0, 0, 0, 0, 33, 0, 0, 0, 34, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0,
    40, 0, 0, 0, 0, 0, 0, 0, 41, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 45,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 46, 0, 0, 47, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0,
    53, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    56, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0,
    0, 0, 60, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 64, 0, 0, 0,
    0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 71, 0, 0, 0,
    0, 72, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0,
    0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    77, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 87, 0, 0, 0,
    0, 88, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0,
    0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 93, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    97, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 99, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0,
    0, 0, 102, 0, 0, 0, 0, 103, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 109,
    0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 113, 0,
    0, 0, 0, 0, 114, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 118,
    0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 0, 0, 0, 0, 122, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 125, 0, 0, 0,
    0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 129, 0, 0, 0,
    130, 0, 0, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 133, 0, 0, 0, 0, 134,
    0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 143, 0,
    0, 0, 0, 0, 144, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0,
    0, 155, 0, 0, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 158, 0, 0, 159,
    0, 0, 0, 0, 0, 0, 0, 160, 0, 0, 0, 161, 0, 0, 0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 164, 0,
    0, 0, 165, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 166, 0, 0, 0, 167, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 173, 0, 0, 174, 0, 0, 175, 0, 0,
    176, 0, 0, 177, 0, 0, 178, 0, 0, 179, 0, 0, 180, 0, 0, 181, 0, 0, 182, 0, 0, 183, 0, 0, 184, 0, 0, 185, 0, 0, 186, 0,
    0, 187, 0, 188, 0, 0, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 0, 191, 0, 0, 0,
    0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 194, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    199, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 203, 0, 0, 0, 0, 0, 0, 204, 0, 0, 0, 0, 0,
    0, 205, 0, 0, 0, 0, 0, 0, 206, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 207, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 208, 0, 209, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 210, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 211, 0, 0, 0, 0, 0, 0, 0, 0, 212, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 215, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 217, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 218, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 219,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 220, 0, 221, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 222, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 223, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 224, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 225, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 226, 0, 0, 0, 0, 0, 227, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 228, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 229, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 230, 0, 0, 0, 0, 0, 0, 0, 0, 0, 231, 0, 0, 0, 0, 232, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 233, 0, 0, 0, 0, 234, 0, 0, 0, 235, 0, 0, 236, 0, 0, 237, 0, 0, 0, 0, 0, 0, 0, 0, 238, 0, 0, 0, 0, 239, 0,
    0, 0, 0, 0, 0, 240, 0, 0, 0, 0, 241, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 242, 0, 0, 0, 0, 0, 0, 243, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 244, 0, 0, 0, 0, 0, 0, 0, 0, 245, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 246, 0, 0, 0, 0, 0, 0,
    0, 0, 247, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 248, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 249, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 250, 0, 0, 0, 251, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 252, 0, 0, 0, 0, 0, 0, 253, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 254, 0, 0, 0, 255, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 256, 0, 0, 0, 0, 0, 0, 257, 0, 0, 0, 0, 0, 0, 0, 0, 258, 0, 0,
    0, 259, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 260, 0, 0, 0, 0, 0, 0, 261, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 262, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 263, 0, 0, 0, 0, 0, 0, 264, 0, 0, 0, 0, 0, 0, 0, 0, 0, 265, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 266, 0, 0, 0, 0, 0, 0, 267, 0, 0, 0, 0, 0, 0, 0, 268, 0, 0, 0, 0, 0, 269,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 270, 0, 0, 0, 0, 0, 0, 0, 0, 0, 271, 0, 0, 0, 0,
    0, 0, 272, 0, 0, 0, 0, 0, 273, 0, 0, 0, 0, 0, 274, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 275, 0, 0, 0, 0, 0, 0, 276,
    0, 277, 0, 0, 0, 0, 0, 0, 278, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 279, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 280, 0, 0, 0, 281, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 282, 0, 0, 0,
    0, 0, 283, 0, 0, 0, 0, 284, 0, 0, 0, 0, 0, 285, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 286, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 287, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 288, 0, 0, 0, 0, 0, 289, 0, 0, 0, 0, 0,
    290, 0, 0, 0, 0, 0, 291, 0, 0, 0, 0, 0, 0, 0, 0, 0, 292, 0, 0, 0, 0, 293, 0, 0, 0, 0, 0, 0, 0, 0, 0, 294,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    295, 0, 0, 0, 0, 0, 0, 296, 0, 0, 0, 0, 0, 297, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 298, 0, 0, 0, 0, 0, 0, 0, 299, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 300, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 301, 0, 0, 0, 0, 0, 0, 302, 0, 303, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 304, 0, 0, 0, 0, 0, 305, 0, 0, 0, 0, 0, 0, 306, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 307, 0, 0, 0, 0, 0, 0, 308, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 309, 0, 0, 310, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 311, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_0052(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_00248000;
    case 2u: goto L_00248034;
    case 3u: goto L_00248044;
    case 4u: goto L_0024807C;
    case 5u: goto L_00248090;
    case 6u: goto L_002480AC;
    case 7u: goto L_002480B4;
    case 8u: goto L_002480C8;
    case 9u: goto L_002480D8;
    case 10u: goto L_002480E8;
    case 11u: goto L_002480F4;
    case 12u: goto L_002480FC;
    case 13u: goto L_00248104;
    case 14u: goto L_00248110;
    case 15u: goto L_00248124;
    case 16u: goto L_00248134;
    case 17u: goto L_00248150;
    case 18u: goto L_0024816C;
    case 19u: goto L_00248178;
    case 20u: goto L_0024818C;
    case 21u: goto L_002481A8;
    case 22u: goto L_002481C0;
    case 23u: goto L_002481D0;
    case 24u: goto L_002481F4;
    case 25u: goto L_00248208;
    case 26u: goto L_00248218;
    case 27u: goto L_0024822C;
    case 28u: goto L_00248260;
    case 29u: goto L_00248294;
    case 30u: goto L_002482A8;
    case 31u: goto L_002482D0;
    case 32u: goto L_002482F0;
    case 33u: goto L_00248310;
    case 34u: goto L_00248320;
    case 35u: goto L_00248330;
    case 36u: goto L_0024834C;
    case 37u: goto L_002483A0;
    case 38u: goto L_002483D0;
    case 39u: goto L_002483E8;
    case 40u: goto L_00248400;
    case 41u: goto L_00248420;
    case 42u: goto L_00248428;
    case 43u: goto L_00248458;
    case 44u: goto L_002484E4;
    case 45u: goto L_002484FC;
    case 46u: goto L_00248598;
    case 47u: goto L_002485A4;
    case 48u: goto L_002485C0;
    case 49u: goto L_002485DC;
    case 50u: goto L_00248620;
    case 51u: goto L_00248650;
    case 52u: goto L_00248668;
    case 53u: goto L_00248680;
    case 54u: goto L_00248694;
    case 55u: goto L_002486B0;
    case 56u: goto L_00248700;
    case 57u: goto L_00248714;
    case 58u: goto L_00248740;
    case 59u: goto L_00248770;
    case 60u: goto L_00248788;
    case 61u: goto L_002487A0;
    case 62u: goto L_002487C0;
    case 63u: goto L_002487DC;
    case 64u: goto L_002487F0;
    case 65u: goto L_00248804;
    case 66u: goto L_00248830;
    case 67u: goto L_0024884C;
    case 68u: goto L_00248890;
    case 69u: goto L_002488C0;
    case 70u: goto L_002488D8;
    case 71u: goto L_002488F0;
    case 72u: goto L_00248904;
    case 73u: goto L_00248920;
    case 74u: goto L_00248970;
    case 75u: goto L_0024898C;
    case 76u: goto L_002489D0;
    case 77u: goto L_00248A00;
    case 78u: goto L_00248A18;
    case 79u: goto L_00248A30;
    case 80u: goto L_00248A44;
    case 81u: goto L_00248A60;
    case 82u: goto L_00248AB0;
    case 83u: goto L_00248ACC;
    case 84u: goto L_00248B10;
    case 85u: goto L_00248B40;
    case 86u: goto L_00248B58;
    case 87u: goto L_00248B70;
    case 88u: goto L_00248B84;
    case 89u: goto L_00248BA0;
    case 90u: goto L_00248BF0;
    case 91u: goto L_00248C0C;
    case 92u: goto L_00248C34;
    case 93u: goto L_00248C84;
    case 94u: goto L_00248C9C;
    case 95u: goto L_00248CB0;
    case 96u: goto L_00248CD0;
    case 97u: goto L_00248D00;
    case 98u: goto L_00248D18;
    case 99u: goto L_00248D30;
    case 100u: goto L_00248D40;
    case 101u: goto L_00248D68;
    case 102u: goto L_00248D88;
    case 103u: goto L_00248D9C;
    case 104u: goto L_00248DB0;
    case 105u: goto L_00248DD0;
    case 106u: goto L_00248DEC;
    case 107u: goto L_00248E14;
    case 108u: goto L_00248E64;
    case 109u: goto L_00248E7C;
    case 110u: goto L_00248E90;
    case 111u: goto L_00248EB0;
    case 112u: goto L_00248EE0;
    case 113u: goto L_00248EF8;
    case 114u: goto L_00248F10;
    case 115u: goto L_00248F20;
    case 116u: goto L_00248F48;
    case 117u: goto L_00248F68;
    case 118u: goto L_00248F7C;
    case 119u: goto L_00248F90;
    case 120u: goto L_00248FB0;
    case 121u: goto L_00248FCC;
    case 122u: goto L_00248FF4;
    case 123u: goto L_00249044;
    case 124u: goto L_0024905C;
    case 125u: goto L_00249070;
    case 126u: goto L_00249090;
    case 127u: goto L_002490C0;
    case 128u: goto L_002490D8;
    case 129u: goto L_002490F0;
    case 130u: goto L_00249100;
    case 131u: goto L_00249128;
    case 132u: goto L_00249154;
    case 133u: goto L_00249168;
    case 134u: goto L_0024917C;
    case 135u: goto L_00249190;
    case 136u: goto L_002491AC;
    case 137u: goto L_002491D4;
    case 138u: goto L_00249224;
    case 139u: goto L_0024923C;
    case 140u: goto L_00249250;
    case 141u: goto L_002492B0;
    case 142u: goto L_002492E0;
    case 143u: goto L_002492F8;
    case 144u: goto L_00249310;
    case 145u: goto L_00249320;
    case 146u: goto L_00249360;
    case 147u: goto L_00249398;
    case 148u: goto L_002493F0;
    case 149u: goto L_0024944C;
    case 150u: goto L_0024945C;
    case 151u: goto L_002494A4;
    case 152u: goto L_002494B8;
    case 153u: goto L_002494D4;
    case 154u: goto L_002494EC;
    case 155u: goto L_00249504;
    case 156u: goto L_00249520;
    case 157u: goto L_00249554;
    case 158u: goto L_00249570;
    case 159u: goto L_0024957C;
    case 160u: goto L_0024959C;
    case 161u: goto L_002495AC;
    case 162u: goto L_002495C8;
    case 163u: goto L_002495E0;
    case 164u: goto L_002495F8;
    case 165u: goto L_00249608;
    case 166u: goto L_00249640;
    case 167u: goto L_00249650;
    case 168u: goto L_00249660;
    case 169u: goto L_00249694;
    case 170u: goto L_002496B8;
    case 171u: goto L_002496CC;
    case 172u: goto L_00249790;
    case 173u: goto L_002497DC;
    case 174u: goto L_002497E8;
    case 175u: goto L_002497F4;
    case 176u: goto L_00249800;
    case 177u: goto L_0024980C;
    case 178u: goto L_00249818;
    case 179u: goto L_00249824;
    case 180u: goto L_00249830;
    case 181u: goto L_0024983C;
    case 182u: goto L_00249848;
    case 183u: goto L_00249854;
    case 184u: goto L_00249860;
    case 185u: goto L_0024986C;
    case 186u: goto L_00249878;
    case 187u: goto L_00249884;
    case 188u: goto L_0024988C;
    case 189u: goto L_002498B4;
    case 190u: goto L_002498D0;
    case 191u: goto L_002498F0;
    case 192u: goto L_0024990C;
    case 193u: goto L_00249938;
    case 194u: goto L_00249984;
    case 195u: goto L_00249A10;
    case 196u: goto L_00249A48;
    case 197u: goto L_00249A60;
    case 198u: goto L_00249B48;
    case 199u: goto L_00249B80;
    case 200u: goto L_00249BAC;
    case 201u: goto L_00249BBC;
    case 202u: goto L_00249BDC;
    case 203u: goto L_00249C4C;
    case 204u: goto L_00249C68;
    case 205u: goto L_00249C84;
    case 206u: goto L_00249CA0;
    case 207u: goto L_00249D04;
    case 208u: goto L_00249D44;
    case 209u: goto L_00249D4C;
    case 210u: goto L_00249DBC;
    case 211u: goto L_00249F38;
    case 212u: goto L_00249F5C;
    case 213u: goto L_0024A03C;
    case 214u: goto L_0024A064;
    case 215u: goto L_0024A0BC;
    case 216u: goto L_0024A118;
    case 217u: goto L_0024A214;
    case 218u: goto L_0024A5B4;
    case 219u: goto L_0024A9FC;
    case 220u: goto L_0024AB1C;
    case 221u: goto L_0024AB24;
    case 222u: goto L_0024AB58;
    case 223u: goto L_0024ABB0;
    case 224u: goto L_0024ACF0;
    case 225u: goto L_0024AD3C;
    case 226u: goto L_0024AD98;
    case 227u: goto L_0024ADB0;
    case 228u: goto L_0024AEE0;
    case 229u: goto L_0024B104;
    case 230u: goto L_0024B198;
    case 231u: goto L_0024B1C0;
    case 232u: goto L_0024B1D4;
    case 233u: goto L_0024B204;
    case 234u: goto L_0024B218;
    case 235u: goto L_0024B228;
    case 236u: goto L_0024B234;
    case 237u: goto L_0024B240;
    case 238u: goto L_0024B264;
    case 239u: goto L_0024B278;
    case 240u: goto L_0024B294;
    case 241u: goto L_0024B2A8;
    case 242u: goto L_0024B314;
    case 243u: goto L_0024B330;
    case 244u: goto L_0024B394;
    case 245u: goto L_0024B3B8;
    case 246u: goto L_0024B3E4;
    case 247u: goto L_0024B408;
    case 248u: goto L_0024B448;
    case 249u: goto L_0024B484;
    case 250u: goto L_0024B4C4;
    case 251u: goto L_0024B4D4;
    case 252u: goto L_0024B520;
    case 253u: goto L_0024B53C;
    case 254u: goto L_0024B568;
    case 255u: goto L_0024B578;
    case 256u: goto L_0024B5B4;
    case 257u: goto L_0024B5D0;
    case 258u: goto L_0024B5F4;
    case 259u: goto L_0024B604;
    case 260u: goto L_0024B644;
    case 261u: goto L_0024B660;
    case 262u: goto L_0024B688;
    case 263u: goto L_0024B6B4;
    case 264u: goto L_0024B6D0;
    case 265u: goto L_0024B6F8;
    case 266u: goto L_0024B728;
    case 267u: goto L_0024B744;
    case 268u: goto L_0024B764;
    case 269u: goto L_0024B77C;
    case 270u: goto L_0024B7C4;
    case 271u: goto L_0024B7EC;
    case 272u: goto L_0024B808;
    case 273u: goto L_0024B820;
    case 274u: goto L_0024B838;
    case 275u: goto L_0024B960;
    case 276u: goto L_0024B97C;
    case 277u: goto L_0024B984;
    case 278u: goto L_0024B9A0;
    case 279u: goto L_0024B9D0;
    case 280u: goto L_0024BA1C;
    case 281u: goto L_0024BA2C;
    case 282u: goto L_0024BA70;
    case 283u: goto L_0024BA88;
    case 284u: goto L_0024BA9C;
    case 285u: goto L_0024BAB4;
    case 286u: goto L_0024BAE0;
    case 287u: goto L_0024BB14;
    case 288u: goto L_0024BB50;
    case 289u: goto L_0024BB68;
    case 290u: goto L_0024BB80;
    case 291u: goto L_0024BB98;
    case 292u: goto L_0024BBC0;
    case 293u: goto L_0024BBD4;
    case 294u: goto L_0024BBFC;
    case 295u: goto L_0024BC80;
    case 296u: goto L_0024BC9C;
    case 297u: goto L_0024BCB4;
    case 298u: goto L_0024BD20;
    case 299u: goto L_0024BD40;
    case 300u: goto L_0024BDE0;
    case 301u: goto L_0024BE14;
    case 302u: goto L_0024BE30;
    case 303u: goto L_0024BE38;
    case 304u: goto L_0024BE84;
    case 305u: goto L_0024BE9C;
    case 306u: goto L_0024BEB8;
    case 307u: goto L_0024BF08;
    case 308u: goto L_0024BF24;
    case 309u: goto L_0024BF54;
    case 310u: goto L_0024BF60;
    case 311u: goto L_0024BFB0;
    default: bad_entry(c, 0x00248000u); return;
    }
L_00248000:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u + 1u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[7], ld32((c.r[4].w[0] + 64u)));
    c.budget -= 7;
    { const bool t = c.r[7].d[0] == c.r[3].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0024803C; } }
    c.budget -= 2;
    { const bool t = c.r[7].d[0] == 0ull;  if (t) { goto L_0024802C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[16].w[0] + 64u)));  if (t) { goto L_00248048; } }
L_0024802C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00248034u);  if (depth < kMaxDepth) unit_0052(c, 5u, depth + 1u); else { c.pc = 0x00248090u; return; } if (c.pc != 0x00248034u) [[unlikely]] return; }
L_00248034:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00248044; } }
L_0024803C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00248044u);  if (depth < kMaxDepth) unit_0052(c, 17u, depth + 1u); else { c.pc = 0x00248150u; return; } if (c.pc != 0x00248044u) [[unlikely]] return; }
L_00248044:
    set32(c.r[4], ld32((c.r[16].w[0] + 64u)));
    c.budget -= 1;
L_00248048:
    set32(c.r[3], 0u + 2u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; st32((c.r[16].w[0] + 64u), c.r[4].w[0]);  if (t) { goto L_0024807C; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 64u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[2], c.r[2].w[0] + 29320u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024807Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0012(c, 45u, depth + 1u); else { c.pc = 0x001487B0u; return; } if (c.pc != 0x0024807Cu) [[unlikely]] return; }
L_0024807C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00248090:
    set32(c.r[29], c.r[29].w[0] - 2272u);
    c.r[7].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002480ACu); set32(c.r[4], c.r[29].w[0] + 2256u);  if (depth < kMaxDepth) unit_0017(c, 125u, depth + 1u); else { c.pc = 0x0015D850u; return; } if (c.pc != 0x002480ACu) [[unlikely]] return; }
L_002480AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002480B4u); set32(c.r[4], 0u + 12u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x002480B4u) [[unlikely]] return; }
L_002480B4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002480C8; } }
    set32(c.r[5], c.r[29].w[0] + 2256u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002480C8u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0017(c, 127u, depth + 1u); else { c.pc = 0x0015D890u; return; } if (c.pc != 0x002480C8u) [[unlikely]] return; }
L_002480C8:
    st32((c.r[29].w[0] + 2268u), c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 2268u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002480D8u); set32(c.r[5], c.r[16].w[0] + 44u);  if (depth < kMaxDepth) unit_0025(c, 350u, depth + 1u); else { c.pc = 0x00197140u; return; } if (c.pc != 0x002480D8u) [[unlikely]] return; }
L_002480D8:
    set32(c.r[4], c.r[29].w[0] + 32u);
    set32(c.r[5], c.r[16].w[0] + 40u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002480E8u); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_0020(c, 15u, depth + 1u); else { c.pc = 0x001801C0u; return; } if (c.pc != 0x002480E8u) [[unlikely]] return; }
L_002480E8:
    set32(c.r[5], c.r[16].w[0] + 44u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002480F4u); set32(c.r[4], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_0020(c, 43u, depth + 1u); else { c.pc = 0x00180690u; return; } if (c.pc != 0x002480F4u) [[unlikely]] return; }
L_002480F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002480FCu); set32(c.r[4], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_0020(c, 46u, depth + 1u); else { c.pc = 0x00180720u; return; } if (c.pc != 0x002480FCu) [[unlikely]] return; }
L_002480FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00248104u); set32(c.r[4], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_0020(c, 48u, depth + 1u); else { c.pc = 0x00180760u; return; } if (c.pc != 0x00248104u) [[unlikely]] return; }
L_00248104:
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00248110u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0020(c, 26u, depth + 1u); else { c.pc = 0x00180340u; return; } if (c.pc != 0x00248110u) [[unlikely]] return; }
L_00248110:
    set32(c.r[4], ld32((c.r[29].w[0] + 2268u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[5], 0u + 1u);  if (t) { goto L_00248124; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00248124u);  if (depth < kMaxDepth) unit_0017(c, 138u, depth + 1u); else { c.pc = 0x0015D9D0u; return; } if (c.pc != 0x00248124u) [[unlikely]] return; }
L_00248124:
    set32(c.r[4], c.r[29].w[0] + 2256u);
    set32(c.r[5], 0u - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00248134u); st32((c.r[29].w[0] + 2268u), 0u);  if (depth < kMaxDepth) unit_0017(c, 138u, depth + 1u); else { c.pc = 0x0015D9D0u; return; } if (c.pc != 0x00248134u) [[unlikely]] return; }
L_00248134:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 2272u);  c.pc = t; return; }
L_00248150:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[7].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024816Cu); set32(c.r[4], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_0017(c, 125u, depth + 1u); else { c.pc = 0x0015D850u; return; } if (c.pc != 0x0024816Cu) [[unlikely]] return; }
L_0024816C:
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00248178u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0017(c, 122u, depth + 1u); else { c.pc = 0x0015D740u; return; } if (c.pc != 0x00248178u) [[unlikely]] return; }
L_00248178:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[4], c.r[29].w[0] + 32u);  if (t) { goto L_00248194; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024818Cu); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 152u, depth + 1u); else { c.pc = 0x0015DC50u; return; } if (c.pc != 0x0024818Cu) [[unlikely]] return; }
L_0024818C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 56u), c.r[2].w[0]);  if (t) { goto L_0024819C; } }
L_00248194:
    c.r[2].d[0] = 0ull + 0ull;
    st32((c.r[16].w[0] + 56u), c.r[2].w[0]);
    c.budget -= 2;
L_0024819C:
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002481A8u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0017(c, 138u, depth + 1u); else { c.pc = 0x0015D9D0u; return; } if (c.pc != 0x002481A8u) [[unlikely]] return; }
L_002481A8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002481C0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002481D0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x6D6E0000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[1].w[0] + 26392u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002481F4u); c.r[5].d[0] = c.r[2].d[0] | 21335ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x002481F4u) [[unlikely]] return; }
L_002481F4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_00248200; } }
    set32(c.r[4], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 1;
L_00248200:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00248208u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0053(c, 82u, depth + 1u); else { c.pc = 0x0024C840u; return; } if (c.pc != 0x00248208u) [[unlikely]] return; }
L_00248208:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[16].w[0] + 8u);  if (t) { goto L_00248244; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00248218u);  if (depth < kMaxDepth) unit_0011(c, 177u, depth + 1u); else { c.pc = 0x00146C10u; return; } if (c.pc != 0x00248218u) [[unlikely]] return; }
L_00248218:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[16].w[0] + 8u);  if (t) { goto L_00248230; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024822Cu);  if (depth < kMaxDepth) unit_0011(c, 182u, depth + 1u); else { c.pc = 0x00146C90u; return; } if (c.pc != 0x0024822Cu) [[unlikely]] return; }
L_0024822C:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 1;
L_00248230:
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00248244; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00248248; } }
L_00248244:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00248248:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00248260:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[4].w[0] + 60u)));
    c.budget -= 11;
    { const bool t = c.r[16].d[0] == 0ull; c.r[17].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_002482B8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00248294u); set32(c.r[4], c.r[16].w[0] + 8u);  if (depth < kMaxDepth) unit_0011(c, 177u, depth + 1u); else { c.pc = 0x00146C10u; return; } if (c.pc != 0x00248294u) [[unlikely]] return; }
L_00248294:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[16].w[0] + 8u);  if (t) { goto L_002482AC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002482A8u);  if (depth < kMaxDepth) unit_0011(c, 182u, depth + 1u); else { c.pc = 0x00146C90u; return; } if (c.pc != 0x002482A8u) [[unlikely]] return; }
L_002482A8:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 1;
L_002482AC:
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002482C0; } }
L_002482B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002482D0; } }
L_002482C0:
    set32(c.r[4], ld32((c.r[19].w[0] + 60u)));
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002482D0u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0051(c, 77u, depth + 1u); else { c.pc = 0x00244850u; return; } if (c.pc != 0x002482D0u) [[unlikely]] return; }
L_002482D0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002482F0:
    set32(c.r[2], ld32((c.r[4].w[0] + 44u)));
    set32(c.r[3], c.r[5].w[0] << 5);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = ld64((c.r[2].w[0] + 16u));  c.pc = t; return; }
L_00248310:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002481C0u | kUnwind; return; } goto L_002481C0; }
L_00248320:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00247EF0u | kUnwind; return; } [[clang::musttail]] return unit_0051(c, 428u, depth); }
L_00248330:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024834Cu); c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_0024(c, 413u, depth + 1u); else { c.pc = 0x00193B00u; return; } if (c.pc != 0x0024834Cu) [[unlikely]] return; }
L_0024834C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[17].w[0] + 160u);
    set32(c.r[2], c.r[2].w[0] - 2624u);
    st32((c.r[17].w[0] + 56u), c.r[2].w[0]);
    c.f[0] = ld32((c.r[16].w[0] + 72u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    st32((c.r[17].w[0] + 144u), c.r[2].w[0]);
    st128((c.r[3].w[0]) & ~15u, c.vu0.vf[0]);
    set32(c.r[2], c.r[17].w[0] + 176u);
    st128((c.r[2].w[0]) & ~15u, c.vu0.vf[0]);
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 18;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002483A0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002483E8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 2624u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002483D0u); st32((c.r[17].w[0] + 56u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0024(c, 419u, depth + 1u); else { c.pc = 0x00193B80u; return; } if (c.pc != 0x002483D0u) [[unlikely]] return; }
L_002483D0:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_002483EC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002483E8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x002483E8u) [[unlikely]] return; }
L_002483E8:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002483EC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00248400:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00248420u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_005B(c, 211u, depth + 1u); else { c.pc = 0x0026D9B0u; return; } if (c.pc != 0x00248420u) [[unlikely]] return; }
L_00248420:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_00248428:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], c.r[16].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + 28320u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[19], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_00248468; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_00248468; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00248458u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005B(c, 218u, depth + 1u); else { c.pc = 0x0026DAE0u; return; } if (c.pc != 0x00248458u) [[unlikely]] return; }
L_00248458:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00248468; } }
    set32(c.r[3], 0u + 6u);
    st8((c.r[19].w[0] + 385u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_00248468:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[3].d[0] = c.r[16].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00248428u | kUnwind; return; } goto L_00248428; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], ld32((c.r[1].w[0] + 28332u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002485A4; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], ld32((c.r[1].w[0] + 28336u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002484A0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  if (t) { goto L_002485A8; } }
L_002484A0:
    set32(c.r[3], ld32((c.r[18].w[0] + 64u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], c.r[2].w[0] + 28320u);
    st8((c.r[3].w[0] + 108u), static_cast<std::uint8_t>(0u));
    set32(c.r[5], ld32((c.r[18].w[0] + 144u)));
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[16], ld32((c.r[2].w[0])));
    c.budget -= 10;
    { const bool t = c.r[16].d[0] == 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_0024859C; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 64u)));
    set32(c.r[3], c.r[29].w[0] + 112u);
    ld128((c.r[2].w[0] + 48u) & ~15u, c.r[2]);
    c.budget -= 5;
    { const bool t = c.r[17].d[0] == 0ull; st128((c.r[3].w[0]) & ~15u, c.r[2]);  if (t) { goto L_00248598; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002484E4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_005B(c, 218u, depth + 1u); else { c.pc = 0x0026DAE0u; return; } if (c.pc != 0x002484E4u) [[unlikely]] return; }
L_002484E4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00248598; } }
    set32(c.r[6], ld32((c.r[18].w[0] + 144u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002484FCu); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_005B(c, 219u, depth + 1u); else { c.pc = 0x0026DAF0u; return; } if (c.pc != 0x002484FCu) [[unlikely]] return; }
L_002484FC:
    set32(c.r[2], c.r[29].w[0] + 80u);
    set32(c.r[4], c.r[29].w[0] + 96u);
    ld128((c.r[2].w[0]) & ~15u, c.r[3]);
    st128((c.r[4].w[0]) & ~15u, c.r[3]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[1] = ld32((c.r[29].w[0] + 96u));
    c.f[2] = ld32((c.r[29].w[0] + 104u));
    c.f[0] = c.r[2].w[0];
    c.facc = fp::mul(c.f[1], c.f[1]);
    c.f[1] = fp::add(c.facc, fp::mul(c.f[2], c.f[2]));
    c.f[1] = fp::sqrt(c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 17;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[2].sd[0] = static_cast<std::int32_t>(0x40A00000u);  if (t) { goto L_0024856C; } }
    c.f[1] = ld32((c.r[29].w[0] + 116u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC1400000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00248568; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 64u)));
    set32(c.r[3], 0u + 1u);
    st8((c.r[2].w[0] + 108u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
L_00248568:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40A00000u);
    c.budget -= 1;
L_0024856C:
    set32(c.r[3], 0u + 6u);
    c.f[0] = c.r[2].w[0];
    st8((c.r[16].w[0] + 385u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], c.r[18].w[0] + 160u);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[2]);
    st128((c.r[18].w[0] + 160u) & ~15u, c.r[2]);
    c.f[1] = ld32((c.r[18].w[0] + 164u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00248598u); st32((c.r[18].w[0] + 164u), c.f[0]);  if (depth < kMaxDepth) unit_0024(c, 356u, depth + 1u); else { c.pc = 0x001934E0u; return; } if (c.pc != 0x00248598u) [[unlikely]] return; }
L_00248598:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_0024859C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002485A4u);  if (depth < kMaxDepth) unit_0024(c, 427u, depth + 1u); else { c.pc = 0x00193C70u; return; } if (c.pc != 0x002485A4u) [[unlikely]] return; }
L_002485A4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_002485A8:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_002485C0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002485DCu); c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_0024(c, 413u, depth + 1u); else { c.pc = 0x00193B00u; return; } if (c.pc != 0x002485DCu) [[unlikely]] return; }
L_002485DC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] - 2704u);
    st32((c.r[17].w[0] + 56u), c.r[3].w[0]);
    c.f[0] = ld32((c.r[16].w[0] + 72u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    st32((c.r[17].w[0] + 144u), c.r[3].w[0]);
    st32((c.r[17].w[0] + 148u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 15;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00248620:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00248668; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 2704u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00248650u); st32((c.r[17].w[0] + 56u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0024(c, 419u, depth + 1u); else { c.pc = 0x00193B80u; return; } if (c.pc != 0x00248650u) [[unlikely]] return; }
L_00248650:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0024866C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00248668u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x00248668u) [[unlikely]] return; }
L_00248668:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0024866C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00248680:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00248694u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0024(c, 424u, depth + 1u); else { c.pc = 0x00193C20u; return; } if (c.pc != 0x00248694u) [[unlikely]] return; }
L_00248694:
    set32(c.r[3], ld32((c.r[16].w[0] + 64u)));
    st8((c.r[3].w[0] + 108u), static_cast<std::uint8_t>(0u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002486B0:
    set32(c.r[2], ld32((c.r[4].w[0] + 64u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 108u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002486EC; } }
    set32(c.r[5], ld32((c.r[4].w[0] + 144u)));
    c.budget -= 3;
    { const bool t = c.r[5].sd[0] <= 0;  if (t) { goto L_002486EC; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 148u)));
    set32(c.r[2], c.r[3].w[0] + 1u);
    c.r[1].d[0] = c.r[5].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; st32((c.r[4].w[0] + 148u), c.r[2].w[0]);  if (t) { goto L_002486EC; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 64u)));
    st8((c.r[2].w[0] + 108u), static_cast<std::uint8_t>(0u));
    st32((c.r[4].w[0] + 148u), 0u);
    c.budget -= 3;
L_002486EC:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x00193C70u | kUnwind; return; } [[clang::musttail]] return unit_0024(c, 427u, depth); }
L_00248700:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00248714u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0052(c, 48u, depth + 1u); else { c.pc = 0x002485C0u; return; } if (c.pc != 0x00248714u) [[unlikely]] return; }
L_00248714:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] - 2784u);
    st32((c.r[16].w[0] + 56u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00248740:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00248788; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 2784u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00248770u); st32((c.r[17].w[0] + 56u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0052(c, 50u, depth + 1u); else { c.pc = 0x00248620u; return; } if (c.pc != 0x00248770u) [[unlikely]] return; }
L_00248770:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0024878C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00248788u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x00248788u) [[unlikely]] return; }
L_00248788:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0024878C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002487A0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[4], 0u + 128u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002487C0u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x002487C0u) [[unlikely]] return; }
L_002487C0:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_00248808; } }
    set32(c.r[25], ld32((c.r[18].w[0] + 56u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002487DCu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002487DCu) [[unlikely]] return; }
L_002487DC:
    set32(c.r[25], ld32((c.r[18].w[0] + 56u)));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002487F0u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002487F0u) [[unlikely]] return; }
L_002487F0:
    set32(c.r[5], ld32((c.r[18].w[0] + 68u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00248804u); c.r[7].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0024(c, 340u, depth + 1u); else { c.pc = 0x001932A0u; return; } if (c.pc != 0x00248804u) [[unlikely]] return; }
L_00248804:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00248808:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00248830:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024884Cu); c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_0024(c, 434u, depth + 1u); else { c.pc = 0x00193DF0u; return; } if (c.pc != 0x0024884Cu) [[unlikely]] return; }
L_0024884C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] - 2864u);
    st32((c.r[17].w[0] + 56u), c.r[3].w[0]);
    c.f[0] = ld32((c.r[16].w[0] + 72u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    st32((c.r[17].w[0] + 96u), c.r[3].w[0]);
    st32((c.r[17].w[0] + 100u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 15;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00248890:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002488D8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 2864u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002488C0u); st32((c.r[17].w[0] + 56u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0024(c, 439u, depth + 1u); else { c.pc = 0x00193EB0u; return; } if (c.pc != 0x002488C0u) [[unlikely]] return; }
L_002488C0:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_002488DC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002488D8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x002488D8u) [[unlikely]] return; }
L_002488D8:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002488DC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002488F0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00248904u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0024(c, 444u, depth + 1u); else { c.pc = 0x00193F70u; return; } if (c.pc != 0x00248904u) [[unlikely]] return; }
L_00248904:
    set32(c.r[3], ld32((c.r[16].w[0] + 64u)));
    st8((c.r[3].w[0] + 108u), static_cast<std::uint8_t>(0u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00248920:
    set32(c.r[2], ld32((c.r[4].w[0] + 64u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 108u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0024895C; } }
    set32(c.r[5], ld32((c.r[4].w[0] + 96u)));
    c.budget -= 3;
    { const bool t = c.r[5].sd[0] <= 0;  if (t) { goto L_0024895C; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 100u)));
    set32(c.r[2], c.r[3].w[0] + 1u);
    c.r[1].d[0] = c.r[5].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; st32((c.r[4].w[0] + 100u), c.r[2].w[0]);  if (t) { goto L_0024895C; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 64u)));
    st8((c.r[2].w[0] + 108u), static_cast<std::uint8_t>(0u));
    st32((c.r[4].w[0] + 100u), 0u);
    c.budget -= 3;
L_0024895C:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x00193FA0u | kUnwind; return; } [[clang::musttail]] return unit_0024(c, 446u, depth); }
L_00248970:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024898Cu); c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 10u, depth + 1u); else { c.pc = 0x00194200u; return; } if (c.pc != 0x0024898Cu) [[unlikely]] return; }
L_0024898C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] - 2928u);
    st32((c.r[17].w[0] + 56u), c.r[3].w[0]);
    c.f[0] = ld32((c.r[16].w[0] + 72u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    st32((c.r[17].w[0] + 144u), c.r[3].w[0]);
    st32((c.r[17].w[0] + 148u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 15;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002489D0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00248A18; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 2928u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00248A00u); st32((c.r[17].w[0] + 56u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0025(c, 12u, depth + 1u); else { c.pc = 0x00194240u; return; } if (c.pc != 0x00248A00u) [[unlikely]] return; }
L_00248A00:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00248A1C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00248A18u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x00248A18u) [[unlikely]] return; }
L_00248A18:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00248A1C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00248A30:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00248A44u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0024(c, 424u, depth + 1u); else { c.pc = 0x00193C20u; return; } if (c.pc != 0x00248A44u) [[unlikely]] return; }
L_00248A44:
    set32(c.r[3], ld32((c.r[16].w[0] + 64u)));
    st8((c.r[3].w[0] + 108u), static_cast<std::uint8_t>(0u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00248A60:
    set32(c.r[2], ld32((c.r[4].w[0] + 64u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 108u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00248A9C; } }
    set32(c.r[5], ld32((c.r[4].w[0] + 144u)));
    c.budget -= 3;
    { const bool t = c.r[5].sd[0] <= 0;  if (t) { goto L_00248A9C; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 148u)));
    set32(c.r[2], c.r[3].w[0] + 1u);
    c.r[1].d[0] = c.r[5].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; st32((c.r[4].w[0] + 148u), c.r[2].w[0]);  if (t) { goto L_00248A9C; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 64u)));
    st8((c.r[2].w[0] + 108u), static_cast<std::uint8_t>(0u));
    st32((c.r[4].w[0] + 148u), 0u);
    c.budget -= 3;
L_00248A9C:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x00193C70u | kUnwind; return; } [[clang::musttail]] return unit_0024(c, 427u, depth); }
L_00248AB0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00248ACCu); c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 20u, depth + 1u); else { c.pc = 0x00194330u; return; } if (c.pc != 0x00248ACCu) [[unlikely]] return; }
L_00248ACC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] - 2992u);
    st32((c.r[17].w[0] + 56u), c.r[3].w[0]);
    c.f[0] = ld32((c.r[16].w[0] + 72u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    st32((c.r[17].w[0] + 96u), c.r[3].w[0]);
    st32((c.r[17].w[0] + 100u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 15;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00248B10:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00248B58; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 2992u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00248B40u); st32((c.r[17].w[0] + 56u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0025(c, 22u, depth + 1u); else { c.pc = 0x00194370u; return; } if (c.pc != 0x00248B40u) [[unlikely]] return; }
L_00248B40:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00248B5C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00248B58u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x00248B58u) [[unlikely]] return; }
L_00248B58:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00248B5C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00248B70:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00248B84u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0024(c, 444u, depth + 1u); else { c.pc = 0x00193F70u; return; } if (c.pc != 0x00248B84u) [[unlikely]] return; }
L_00248B84:
    set32(c.r[3], ld32((c.r[16].w[0] + 64u)));
    st8((c.r[3].w[0] + 108u), static_cast<std::uint8_t>(0u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00248BA0:
    set32(c.r[2], ld32((c.r[4].w[0] + 64u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 108u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00248BDC; } }
    set32(c.r[5], ld32((c.r[4].w[0] + 96u)));
    c.budget -= 3;
    { const bool t = c.r[5].sd[0] <= 0;  if (t) { goto L_00248BDC; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 100u)));
    set32(c.r[2], c.r[3].w[0] + 1u);
    c.r[1].d[0] = c.r[5].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; st32((c.r[4].w[0] + 100u), c.r[2].w[0]);  if (t) { goto L_00248BDC; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 64u)));
    st8((c.r[2].w[0] + 108u), static_cast<std::uint8_t>(0u));
    st32((c.r[4].w[0] + 100u), 0u);
    c.budget -= 3;
L_00248BDC:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x00193FA0u | kUnwind; return; } [[clang::musttail]] return unit_0024(c, 446u, depth); }
L_00248BF0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00248C0Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0024(c, 413u, depth + 1u); else { c.pc = 0x00193B00u; return; } if (c.pc != 0x00248C0Cu) [[unlikely]] return; }
L_00248C0C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], c.r[2].w[0] - 3056u);
    st32((c.r[16].w[0] + 56u), c.r[2].w[0]);
    c.f[0] = ld32((c.r[17].w[0] + 76u));
    set32(c.r[4], ld32((c.r[1].w[0] + 26176u)));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00248C34u); set32(c.r[5], c.r[2].w[0] - 2000u);  if (depth < kMaxDepth) unit_0024(c, 249u, depth + 1u); else { c.pc = 0x00191DE0u; return; } if (c.pc != 0x00248C34u) [[unlikely]] return; }
L_00248C34:
    st32((c.r[16].w[0] + 144u), c.r[2].w[0]);
    set32(c.r[3], c.r[29].w[0] + 48u);
    c.f[0] = ld32((c.r[17].w[0] + 80u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    st32((c.r[16].w[0] + 148u), c.r[2].w[0]);
    c.f[0] = ld32((c.r[17].w[0] + 84u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    st32((c.r[16].w[0] + 152u), c.r[2].w[0]);
    st128((c.r[3].w[0]) & ~15u, c.vu0.vf[0]);
    set32(c.r[2], c.r[29].w[0] + 64u);
    st128((c.r[2].w[0]) & ~15u, c.vu0.vf[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[4].w[0] + 56u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 20;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00248C84u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00248C84u) [[unlikely]] return; }
L_00248C84:
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[2]);
    set32(c.r[25], ld32((c.r[16].w[0] + 56u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00248C9Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00248C9Cu) [[unlikely]] return; }
L_00248C9C:
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[2]);
    set32(c.r[4], ld32((c.r[16].w[0] + 144u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00248CB0u); set32(c.r[5], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0010(c, 233u, depth + 1u); else { c.pc = 0x00143430u; return; } if (c.pc != 0x00248CB0u) [[unlikely]] return; }
L_00248CB0:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_00248CD0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00248D18; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 3056u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00248D00u); st32((c.r[17].w[0] + 56u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0024(c, 419u, depth + 1u); else { c.pc = 0x00193B80u; return; } if (c.pc != 0x00248D00u) [[unlikely]] return; }
L_00248D00:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00248D1C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00248D18u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x00248D18u) [[unlikely]] return; }
L_00248D18:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00248D1C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00248D30:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x00193C20u | kUnwind; return; } [[clang::musttail]] return unit_0024(c, 424u, depth); }
L_00248D40:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 64u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 108u));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00248DA4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00248D68u); set32(c.r[4], ld32((c.r[17].w[0] + 144u)));  if (depth < kMaxDepth) unit_0049(c, 101u, depth + 1u); else { c.pc = 0x002255D0u; return; } if (c.pc != 0x00248D68u) [[unlikely]] return; }
L_00248D68:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00248DA4; } }
    set32(c.r[5], ld32((c.r[17].w[0] + 148u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 164u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == c.r[5].d[0]; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00248DA8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00248D88u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0030(c, 17u, depth + 1u); else { c.pc = 0x001C02A0u; return; } if (c.pc != 0x00248D88u) [[unlikely]] return; }
L_00248D88:
    st32((c.r[16].w[0] + 60u), 0u);
    set32(c.r[25], ld32((c.r[17].w[0] + 56u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00248D9Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00248D9Cu) [[unlikely]] return; }
L_00248D9C:
    c.f[0] = ld32((c.r[2].w[0] + 4u));
    st32((c.r[16].w[0] + 212u), c.f[0]);
    c.budget -= 2;
L_00248DA4:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00248DA8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00248DB0u);  if (depth < kMaxDepth) unit_0024(c, 427u, depth + 1u); else { c.pc = 0x00193C70u; return; } if (c.pc != 0x00248DB0u) [[unlikely]] return; }
L_00248DB0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00248DD0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00248DECu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0024(c, 434u, depth + 1u); else { c.pc = 0x00193DF0u; return; } if (c.pc != 0x00248DECu) [[unlikely]] return; }
L_00248DEC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], c.r[2].w[0] - 3120u);
    st32((c.r[16].w[0] + 56u), c.r[2].w[0]);
    c.f[0] = ld32((c.r[17].w[0] + 76u));
    set32(c.r[4], ld32((c.r[1].w[0] + 26176u)));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00248E14u); set32(c.r[5], c.r[2].w[0] - 2000u);  if (depth < kMaxDepth) unit_0024(c, 249u, depth + 1u); else { c.pc = 0x00191DE0u; return; } if (c.pc != 0x00248E14u) [[unlikely]] return; }
L_00248E14:
    st32((c.r[16].w[0] + 104u), c.r[2].w[0]);
    set32(c.r[3], c.r[29].w[0] + 48u);
    c.f[0] = ld32((c.r[17].w[0] + 80u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    st32((c.r[16].w[0] + 96u), c.r[2].w[0]);
    c.f[0] = ld32((c.r[17].w[0] + 84u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    st32((c.r[16].w[0] + 100u), c.r[2].w[0]);
    st128((c.r[3].w[0]) & ~15u, c.vu0.vf[0]);
    set32(c.r[2], c.r[29].w[0] + 64u);
    st128((c.r[2].w[0]) & ~15u, c.vu0.vf[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[4].w[0] + 56u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 20;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00248E64u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00248E64u) [[unlikely]] return; }
L_00248E64:
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[2]);
    set32(c.r[25], ld32((c.r[16].w[0] + 56u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00248E7Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00248E7Cu) [[unlikely]] return; }
L_00248E7C:
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[2]);
    set32(c.r[4], ld32((c.r[16].w[0] + 104u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00248E90u); set32(c.r[5], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0010(c, 233u, depth + 1u); else { c.pc = 0x00143430u; return; } if (c.pc != 0x00248E90u) [[unlikely]] return; }
L_00248E90:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_00248EB0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00248EF8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 3120u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00248EE0u); st32((c.r[17].w[0] + 56u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0024(c, 439u, depth + 1u); else { c.pc = 0x00193EB0u; return; } if (c.pc != 0x00248EE0u) [[unlikely]] return; }
L_00248EE0:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00248EFC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00248EF8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x00248EF8u) [[unlikely]] return; }
L_00248EF8:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00248EFC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00248F10:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x00193F70u | kUnwind; return; } [[clang::musttail]] return unit_0024(c, 444u, depth); }
L_00248F20:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 64u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 108u));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00248F84; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00248F48u); set32(c.r[4], ld32((c.r[17].w[0] + 104u)));  if (depth < kMaxDepth) unit_0049(c, 101u, depth + 1u); else { c.pc = 0x002255D0u; return; } if (c.pc != 0x00248F48u) [[unlikely]] return; }
L_00248F48:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00248F84; } }
    set32(c.r[5], ld32((c.r[17].w[0] + 96u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 164u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == c.r[5].d[0]; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00248F88; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00248F68u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0030(c, 17u, depth + 1u); else { c.pc = 0x001C02A0u; return; } if (c.pc != 0x00248F68u) [[unlikely]] return; }
L_00248F68:
    st32((c.r[16].w[0] + 60u), 0u);
    set32(c.r[25], ld32((c.r[17].w[0] + 56u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00248F7Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00248F7Cu) [[unlikely]] return; }
L_00248F7C:
    c.f[0] = ld32((c.r[2].w[0] + 4u));
    st32((c.r[16].w[0] + 212u), c.f[0]);
    c.budget -= 2;
L_00248F84:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00248F88:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00248F90u);  if (depth < kMaxDepth) unit_0024(c, 446u, depth + 1u); else { c.pc = 0x00193FA0u; return; } if (c.pc != 0x00248F90u) [[unlikely]] return; }
L_00248F90:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00248FB0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00248FCCu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0052(c, 48u, depth + 1u); else { c.pc = 0x002485C0u; return; } if (c.pc != 0x00248FCCu) [[unlikely]] return; }
L_00248FCC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], c.r[2].w[0] - 3200u);
    st32((c.r[16].w[0] + 56u), c.r[2].w[0]);
    c.f[0] = ld32((c.r[17].w[0] + 76u));
    set32(c.r[4], ld32((c.r[1].w[0] + 26176u)));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00248FF4u); set32(c.r[5], c.r[2].w[0] - 2000u);  if (depth < kMaxDepth) unit_0024(c, 249u, depth + 1u); else { c.pc = 0x00191DE0u; return; } if (c.pc != 0x00248FF4u) [[unlikely]] return; }
L_00248FF4:
    st32((c.r[16].w[0] + 160u), c.r[2].w[0]);
    set32(c.r[3], c.r[29].w[0] + 48u);
    c.f[0] = ld32((c.r[17].w[0] + 80u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    st32((c.r[16].w[0] + 164u), c.r[2].w[0]);
    c.f[0] = ld32((c.r[17].w[0] + 84u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    st32((c.r[16].w[0] + 168u), c.r[2].w[0]);
    st128((c.r[3].w[0]) & ~15u, c.vu0.vf[0]);
    set32(c.r[2], c.r[29].w[0] + 64u);
    st128((c.r[2].w[0]) & ~15u, c.vu0.vf[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[4].w[0] + 56u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 20;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00249044u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00249044u) [[unlikely]] return; }
L_00249044:
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[2]);
    set32(c.r[25], ld32((c.r[16].w[0] + 56u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0024905Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0024905Cu) [[unlikely]] return; }
L_0024905C:
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[2]);
    set32(c.r[4], ld32((c.r[16].w[0] + 160u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00249070u); set32(c.r[5], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0010(c, 233u, depth + 1u); else { c.pc = 0x00143430u; return; } if (c.pc != 0x00249070u) [[unlikely]] return; }
L_00249070:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_00249090:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002490D8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 3200u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002490C0u); st32((c.r[17].w[0] + 56u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0052(c, 50u, depth + 1u); else { c.pc = 0x00248620u; return; } if (c.pc != 0x002490C0u) [[unlikely]] return; }
L_002490C0:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_002490DC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002490D8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x002490D8u) [[unlikely]] return; }
L_002490D8:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002490DC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002490F0:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x00248680u | kUnwind; return; } goto L_00248680; }
L_00249100:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 64u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 108u));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00249170; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00249128u); set32(c.r[4], ld32((c.r[17].w[0] + 160u)));  if (depth < kMaxDepth) unit_0049(c, 101u, depth + 1u); else { c.pc = 0x002255D0u; return; } if (c.pc != 0x00249128u) [[unlikely]] return; }
L_00249128:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00249170; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 164u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 164u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00249174; } }
    c.f[0] = ld32((c.r[16].w[0] + 228u));
    st32((c.r[16].w[0] + 604u), c.f[0]);
    set32(c.r[5], ld32((c.r[17].w[0] + 164u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00249154u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0030(c, 17u, depth + 1u); else { c.pc = 0x001C02A0u; return; } if (c.pc != 0x00249154u) [[unlikely]] return; }
L_00249154:
    st32((c.r[16].w[0] + 60u), 0u);
    set32(c.r[25], ld32((c.r[17].w[0] + 56u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00249168u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00249168u) [[unlikely]] return; }
L_00249168:
    c.f[0] = ld32((c.r[2].w[0] + 4u));
    st32((c.r[16].w[0] + 212u), c.f[0]);
    c.budget -= 2;
L_00249170:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00249174:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024917Cu);  if (depth < kMaxDepth) unit_0052(c, 55u, depth + 1u); else { c.pc = 0x002486B0u; return; } if (c.pc != 0x0024917Cu) [[unlikely]] return; }
L_0024917C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00249190:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002491ACu); c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_0052(c, 66u, depth + 1u); else { c.pc = 0x00248830u; return; } if (c.pc != 0x002491ACu) [[unlikely]] return; }
L_002491AC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], c.r[2].w[0] - 3280u);
    st32((c.r[17].w[0] + 56u), c.r[2].w[0]);
    c.f[0] = ld32((c.r[16].w[0] + 76u));
    set32(c.r[4], ld32((c.r[1].w[0] + 26176u)));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002491D4u); set32(c.r[5], c.r[2].w[0] - 2000u);  if (depth < kMaxDepth) unit_0024(c, 249u, depth + 1u); else { c.pc = 0x00191DE0u; return; } if (c.pc != 0x002491D4u) [[unlikely]] return; }
L_002491D4:
    st32((c.r[17].w[0] + 120u), c.r[2].w[0]);
    set32(c.r[3], c.r[29].w[0] + 48u);
    c.f[0] = ld32((c.r[16].w[0] + 80u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    st32((c.r[17].w[0] + 112u), c.r[2].w[0]);
    c.f[0] = ld32((c.r[16].w[0] + 84u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    st32((c.r[17].w[0] + 116u), c.r[2].w[0]);
    st128((c.r[3].w[0]) & ~15u, c.vu0.vf[0]);
    set32(c.r[2], c.r[29].w[0] + 64u);
    st128((c.r[2].w[0]) & ~15u, c.vu0.vf[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[4].w[0] + 56u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 20;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00249224u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00249224u) [[unlikely]] return; }
L_00249224:
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[2]);
    set32(c.r[25], ld32((c.r[17].w[0] + 56u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0024923Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0024923Cu) [[unlikely]] return; }
L_0024923C:
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[2]);
    set32(c.r[4], ld32((c.r[17].w[0] + 120u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00249250u); set32(c.r[5], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0010(c, 233u, depth + 1u); else { c.pc = 0x00143430u; return; } if (c.pc != 0x00249250u) [[unlikely]] return; }
L_00249250:
    st8((c.r[17].w[0] + 128u), static_cast<std::uint8_t>(0u));
    st8((c.r[17].w[0] + 129u), static_cast<std::uint8_t>(0u));
    c.f[0] = ld32((c.r[16].w[0] + 88u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00249274; } }
    st8((c.r[17].w[0] + 128u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 1;
L_00249274:
    c.f[0] = ld32((c.r[16].w[0] + 92u));
    set32(c.r[2], 0u + 1u);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00249294; } }
    st8((c.r[17].w[0] + 129u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 1;
L_00249294:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_002492B0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002492F8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 3280u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002492E0u); st32((c.r[17].w[0] + 56u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0052(c, 68u, depth + 1u); else { c.pc = 0x00248890u; return; } if (c.pc != 0x002492E0u) [[unlikely]] return; }
L_002492E0:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_002492FC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002492F8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x002492F8u) [[unlikely]] return; }
L_002492F8:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002492FC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00249310:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x002488F0u | kUnwind; return; } goto L_002488F0; }
L_00249320:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 64u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 108u));
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == 0ull; c.r[18].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002494FC; } }
    set32(c.r[2], c.r[29].w[0] + 64u);
    st128((c.r[2].w[0]) & ~15u, c.vu0.vf[0]);
    c.f[0] = 0u;
    c.r[17].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 80u), c.f[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 84u), 0u);  if (t) { goto L_002494F0; } }
L_00249360:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], c.r[17].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 28320u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[16], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_002494EC; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 392u));
    c.r[2].d[0] = c.r[2].d[0] << 61;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002494EC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00249398u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0034(c, 85u, depth + 1u); else { c.pc = 0x001D0B30u; return; } if (c.pc != 0x00249398u) [[unlikely]] return; }
L_00249398:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002494EC; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 164u)));
    set32(c.r[2], ld32((c.r[18].w[0] + 112u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002494EC; } }
    set32(c.r[2], 0u + 12572u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002494EC; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 68u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41180000u);
    c.f[1] = c.r[2].w[0];
    set32(c.r[5], c.r[29].w[0] + 64u);
    c.r[6].d[0] = 0ull + 0ull;
    ld128((c.r[3].w[0] + 48u) & ~15u, c.r[2]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[2]);
    c.f[0] = ld32((c.r[16].w[0] + 356u));
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 80u), c.f[0]);
    set32(c.r[4], ld32((c.r[18].w[0] + 120u)));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002493F0u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0010(c, 247u, depth + 1u); else { c.pc = 0x001437D0u; return; } if (c.pc != 0x002493F0u) [[unlikely]] return; }
L_002493F0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002494EC; } }
    c.r[2].d[0] = ld8((c.r[18].w[0] + 128u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00249414; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 164u)));
    set32(c.r[2], 0u + 676u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002494C0; } }
L_00249414:
    c.f[0] = ld32((c.r[16].w[0] + 228u));
    st32((c.r[16].w[0] + 604u), c.f[0]);
    c.r[2].d[0] = ld8((c.r[16].w[0] + 380u));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00249480; } }
    c.r[2].d[0] = ld8((c.r[18].w[0] + 129u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00249480; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 164u)));
    set32(c.r[5], 0u + 12522u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == c.r[5].d[0];  if (t) { goto L_00249480; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024944Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0052(c, 156u, depth + 1u); else { c.pc = 0x00249520u; return; } if (c.pc != 0x0024944Cu) [[unlikely]] return; }
L_0024944C:
    set32(c.r[25], ld32((c.r[18].w[0] + 56u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0024945Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0024945Cu) [[unlikely]] return; }
L_0024945C:
    c.f[0] = ld32((c.r[2].w[0] + 4u));
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(8ll);
    st32((c.r[16].w[0] + 212u), c.f[0]);
    set32(c.r[2], 0u - 9u);
    c.r[4].d[0] = ld8((c.r[16].w[0] + 395u));
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 395u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_002494C0; } }
L_00249480:
    set32(c.r[3], ld32((c.r[16].w[0] + 164u)));
    set32(c.r[5], ld32((c.r[18].w[0] + 112u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[5].d[0];  if (t) { goto L_002494C0; } }
    set32(c.r[2], 0u + 12522u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002494C0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002494A4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0052(c, 156u, depth + 1u); else { c.pc = 0x00249520u; return; } if (c.pc != 0x002494A4u) [[unlikely]] return; }
L_002494A4:
    st32((c.r[16].w[0] + 60u), 0u);
    set32(c.r[25], ld32((c.r[18].w[0] + 56u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002494B8u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002494B8u) [[unlikely]] return; }
L_002494B8:
    c.f[0] = ld32((c.r[2].w[0] + 4u));
    st32((c.r[16].w[0] + 212u), c.f[0]);
    c.budget -= 2;
L_002494C0:
    c.r[2].d[0] = ld8((c.r[18].w[0] + 128u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002494EC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002494D4u); set32(c.r[4], 0u + 8u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x002494D4u) [[unlikely]] return; }
L_002494D4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002494EC; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002494ECu); set32(c.r[5], 0u + 207u);  if (depth < kMaxDepth) unit_0049(c, 192u, depth + 1u); else { c.pc = 0x00226750u; return; } if (c.pc != 0x002494ECu) [[unlikely]] return; }
L_002494EC:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_002494F0:
    c.r[2].d[0] = c.r[17].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00249360u | kUnwind; return; } goto L_00249360; } }
L_002494FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00249504u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0052(c, 73u, depth + 1u); else { c.pc = 0x00248920u; return; } if (c.pc != 0x00249504u) [[unlikely]] return; }
L_00249504:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_00249520:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 9;
    { const bool t = c.r[4].d[0] == 0ull; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_00249548; } }
    set32(c.r[4], c.r[4].w[0] + 436u);
    c.budget -= 1;
L_00249548:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x53590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00249554u); c.r[5].d[0] = c.r[2].d[0] | 20035ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x00249554u) [[unlikely]] return; }
L_00249554:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_00249560; } }
    set32(c.r[18], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 1;
L_00249560:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_00249618; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00249570u); set32(c.r[5], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_0033(c, 108u, depth + 1u); else { c.pc = 0x001CD5D0u; return; } if (c.pc != 0x00249570u) [[unlikely]] return; }
L_00249570:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0024960C; } }
L_0024957C:
    set32(c.r[2], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 96u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[18].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0x43480000u);  if (t) { goto L_002495A4; } }
    set32(c.r[4], ld32((c.r[4].w[0] + 28u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024959Cu); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0030(c, 17u, depth + 1u); else { c.pc = 0x001C02A0u; return; } if (c.pc != 0x0024959Cu) [[unlikely]] return; }
L_0024959C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[16].w[0] + 1u);  if (t) { goto L_0024960C; } }
L_002495A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002495ACu); c.r[5].d[0] = c.r[2].d[0] | 16722ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x002495ACu) [[unlikely]] return; }
L_002495AC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[20].d[0] = 0ull + 0ull;  if (t) { goto L_002495B8; } }
    set32(c.r[20], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 1;
L_002495B8:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == 0ull; c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_00249608; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002495C8u);  if (depth < kMaxDepth) unit_0034(c, 158u, depth + 1u); else { c.pc = 0x001D1A70u; return; } if (c.pc != 0x002495C8u) [[unlikely]] return; }
L_002495C8:
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[5].d[0]; set32(c.r[3], 0u + 2u);  if (t) { goto L_002495E8; } }
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002495E0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0030(c, 17u, depth + 1u); else { c.pc = 0x001C02A0u; return; } if (c.pc != 0x002495E0u) [[unlikely]] return; }
L_002495E0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00249608; } }
L_002495E8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_00249600; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002495F8u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0030(c, 17u, depth + 1u); else { c.pc = 0x001C02A0u; return; } if (c.pc != 0x002495F8u) [[unlikely]] return; }
L_002495F8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00249608; } }
L_00249600:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00249608u);  if (depth < kMaxDepth) unit_0039(c, 27u, depth + 1u); else { c.pc = 0x001E4510u; return; } if (c.pc != 0x00249608u) [[unlikely]] return; }
L_00249608:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_0024960C:
    c.r[3].d[0] = c.r[16].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0024957Cu | kUnwind; return; } goto L_0024957C; } }
L_00249618:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_00249640:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 100u), 0u);  c.pc = t; return; }
L_00249650:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 148u), 0u);  c.pc = t; return; }
L_00249660:
    set32(c.r[29], c.r[29].w[0] - 144u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00430000u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] + 436u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    c.r[5].d[0] = c.r[2].d[0] | 18512ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00249694u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x00249694u) [[unlikely]] return; }
L_00249694:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[21].d[0] = 0ull + 0ull;  if (t) { goto L_002496A0; } }
    set32(c.r[21], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 1;
L_002496A0:
    c.r[20].d[0] = 0ull + 0ull;
    c.r[19].d[0] = 0ull + 0ull;
    c.r[18].d[0] = 0ull + 0ull;
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0024971C; } }
L_002496B8:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002496CCu); set32(c.r[22], c.r[2].w[0] + 128u);  if (depth < kMaxDepth) unit_003C(c, 312u, depth + 1u); else { c.pc = 0x001F3D90u; return; } if (c.pc != 0x002496CCu) [[unlikely]] return; }
L_002496CC:
    st32((c.r[22].w[0]), c.r[2].w[0]);
    set32(c.r[3], 0u + 100u);
    set32(c.r[2], ld32((c.r[22].w[0])));
    set32(c.r[2], c.r[3].w[0] - c.r[2].w[0]);
    c.r[1].d[0] = c.r[2].sd[0] < 86ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] != 0ull; c.r[1].d[0] = c.r[2].sd[0] < 61ll ? 1ull : 0ull;  if (t) { goto L_002496F0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[20], c.r[20].w[0] + 1u);  if (t) { goto L_00249728; } }
L_002496F0:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_002496FC; } }
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.budget -= 1;
L_002496FC:
    c.r[1].d[0] = c.r[2].sd[0] < 51ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull; c.r[1].d[0] = c.r[2].sd[0] < 31ll ? 1ull : 0ull;  if (t) { goto L_0024970C; } }
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_0024970C:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_00249718; } }
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_00249718:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_0024971C:
    c.r[2].d[0] = c.r[16].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[16].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002496B8u | kUnwind; return; } goto L_002496B8; } }
L_00249728:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == 0ull; c.r[2].d[0] = c.r[19].sd[0] < 2ll ? 1ull : 0ull;  if (t) { goto L_00249738; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 2u);  if (t) { goto L_0024975C; } }
L_00249738:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00249748; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 2u);  if (t) { goto L_0024975C; } }
L_00249748:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00249758; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0024975C; } }
L_00249758:
    if (c.r[17].d[0] == 0) c.r[2].d[0] = 0ull;
    c.budget -= 1;
L_0024975C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_00249790:
    set32(c.r[29], c.r[29].w[0] - 96u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] - 2560u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    set32(c.r[5], 0u + 96u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[4].w[0] + 1024u), c.r[2].w[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0]), c.r[20].w[0]);
    st32((c.r[4].w[0] + 4u), 0u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 1006u)));
    st16((c.r[4].w[0] + 1004u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002497DCu); set32(c.r[4], c.r[16].w[0] + 32u);  if (depth < kMaxDepth) unit_0010(c, 111u, depth + 1u); else { c.pc = 0x00141670u; return; } if (c.pc != 0x002497DCu) [[unlikely]] return; }
L_002497DC:
    set32(c.r[4], c.r[16].w[0] + 128u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002497E8u); set32(c.r[5], 0u + 152u);  if (depth < kMaxDepth) unit_0010(c, 111u, depth + 1u); else { c.pc = 0x00141670u; return; } if (c.pc != 0x002497E8u) [[unlikely]] return; }
L_002497E8:
    set32(c.r[4], c.r[16].w[0] + 280u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002497F4u); set32(c.r[5], 0u + 32u);  if (depth < kMaxDepth) unit_0010(c, 111u, depth + 1u); else { c.pc = 0x00141670u; return; } if (c.pc != 0x002497F4u) [[unlikely]] return; }
L_002497F4:
    set32(c.r[4], c.r[16].w[0] + 312u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00249800u); set32(c.r[5], 0u + 80u);  if (depth < kMaxDepth) unit_0010(c, 111u, depth + 1u); else { c.pc = 0x00141670u; return; } if (c.pc != 0x00249800u) [[unlikely]] return; }
L_00249800:
    set32(c.r[4], c.r[16].w[0] + 392u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024980Cu); set32(c.r[5], 0u + 14u);  if (depth < kMaxDepth) unit_0010(c, 111u, depth + 1u); else { c.pc = 0x00141670u; return; } if (c.pc != 0x0024980Cu) [[unlikely]] return; }
L_0024980C:
    set32(c.r[4], c.r[16].w[0] + 408u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00249818u); set32(c.r[5], 0u + 8u);  if (depth < kMaxDepth) unit_0010(c, 111u, depth + 1u); else { c.pc = 0x00141670u; return; } if (c.pc != 0x00249818u) [[unlikely]] return; }
L_00249818:
    set32(c.r[4], c.r[16].w[0] + 440u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00249824u); set32(c.r[5], 0u + 80u);  if (depth < kMaxDepth) unit_0010(c, 111u, depth + 1u); else { c.pc = 0x00141670u; return; } if (c.pc != 0x00249824u) [[unlikely]] return; }
L_00249824:
    set32(c.r[4], c.r[16].w[0] + 416u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00249830u); set32(c.r[5], 0u + 8u);  if (depth < kMaxDepth) unit_0010(c, 111u, depth + 1u); else { c.pc = 0x00141670u; return; } if (c.pc != 0x00249830u) [[unlikely]] return; }
L_00249830:
    set32(c.r[4], c.r[16].w[0] + 424u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024983Cu); set32(c.r[5], 0u + 8u);  if (depth < kMaxDepth) unit_0010(c, 111u, depth + 1u); else { c.pc = 0x00141670u; return; } if (c.pc != 0x0024983Cu) [[unlikely]] return; }
L_0024983C:
    set32(c.r[4], c.r[16].w[0] + 432u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00249848u); set32(c.r[5], 0u + 8u);  if (depth < kMaxDepth) unit_0010(c, 111u, depth + 1u); else { c.pc = 0x00141670u; return; } if (c.pc != 0x00249848u) [[unlikely]] return; }
L_00249848:
    set32(c.r[4], c.r[16].w[0] + 576u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00249854u); set32(c.r[5], 0u + 8u);  if (depth < kMaxDepth) unit_0010(c, 111u, depth + 1u); else { c.pc = 0x00141670u; return; } if (c.pc != 0x00249854u) [[unlikely]] return; }
L_00249854:
    set32(c.r[4], c.r[16].w[0] + 440u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00249860u); set32(c.r[5], 0u + 80u);  if (depth < kMaxDepth) unit_0010(c, 111u, depth + 1u); else { c.pc = 0x00141670u; return; } if (c.pc != 0x00249860u) [[unlikely]] return; }
L_00249860:
    set32(c.r[4], c.r[16].w[0] + 992u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024986Cu); set32(c.r[5], 0u + 4u);  if (depth < kMaxDepth) unit_0010(c, 111u, depth + 1u); else { c.pc = 0x00141670u; return; } if (c.pc != 0x0024986Cu) [[unlikely]] return; }
L_0024986C:
    set32(c.r[4], c.r[16].w[0] + 520u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00249878u); set32(c.r[5], 0u + 56u);  if (depth < kMaxDepth) unit_0010(c, 111u, depth + 1u); else { c.pc = 0x00141670u; return; } if (c.pc != 0x00249878u) [[unlikely]] return; }
L_00249878:
    set32(c.r[4], c.r[16].w[0] + 996u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00249884u); set32(c.r[5], 0u + 8u);  if (depth < kMaxDepth) unit_0010(c, 111u, depth + 1u); else { c.pc = 0x00141670u; return; } if (c.pc != 0x00249884u) [[unlikely]] return; }
L_00249884:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024988Cu);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126B58u; return; } if (c.pc != 0x0024988Cu) [[unlikely]] return; }
L_0024988C:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; c.r[3].d[0] = c.r[2].d[0] & 1ull;  if (t) { goto L_002498A0; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002498A0; } }
    set32(c.r[3], c.r[3].w[0] - 2u);
    c.budget -= 1;
L_002498A0:
    st32((c.r[16].w[0] + 568u), c.r[3].w[0]);
    set32(c.r[2], 0u + 8u);
    st32((c.r[16].w[0] + 572u), c.r[2].w[0]);
    set32(c.r[19], c.r[16].w[0] + 128u);
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 5;
L_002498B4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[17], c.r[18].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 22832u);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002498D0u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 25u, depth + 1u); else { c.pc = 0x001E44B0u; return; } if (c.pc != 0x002498D0u) [[unlikely]] return; }
L_002498D0:
    c.r[3].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[18], c.r[18].w[0] + 1u);
    set32(c.r[2], c.r[19].w[0] + c.r[17].w[0]);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    c.r[2].d[0] = c.r[18].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002498B4u | kUnwind; return; } goto L_002498B4; } }
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002498F0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[17], c.r[18].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 22816u);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024990Cu); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 25u, depth + 1u); else { c.pc = 0x001E44B0u; return; } if (c.pc != 0x0024990Cu) [[unlikely]] return; }
L_0024990C:
    c.r[3].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[18], c.r[18].w[0] + 1u);
    set32(c.r[2], c.r[19].w[0] + c.r[17].w[0]);
    st32((c.r[2].w[0] + 16u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[18].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002498F0u | kUnwind; return; } goto L_002498F0; } }
    c.r[5].d[0] = ld16((c.r[19].w[0]));
    set32(c.r[17], ld32((c.r[1].w[0] - 27888u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00249938u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0051(c, 132u, depth + 1u); else { c.pc = 0x002450B0u; return; } if (c.pc != 0x00249938u) [[unlikely]] return; }
L_00249938:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00249978; } }
    c.r[3].d[0] = ld64((c.r[2].w[0]));
    st64((c.r[19].w[0] + 40u), c.r[3].d[0]);
    c.r[6].d[0] = ld8((c.r[2].w[0] + 8u));
    c.r[5].d[0] = ld8((c.r[2].w[0] + 9u));
    c.r[4].d[0] = ld8((c.r[2].w[0] + 10u));
    c.r[3].d[0] = ld8((c.r[2].w[0] + 11u));
    st8((c.r[19].w[0] + 48u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[19].w[0] + 49u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[19].w[0] + 50u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[19].w[0] + 51u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[2].w[0] + 12u)));
    st32((c.r[19].w[0] + 52u), c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 16u)));
    st16((c.r[19].w[0] + 56u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 14;
L_00249978:
    c.r[5].d[0] = ld16((c.r[19].w[0] + 4u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00249984u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0051(c, 132u, depth + 1u); else { c.pc = 0x002450B0u; return; } if (c.pc != 0x00249984u) [[unlikely]] return; }
L_00249984:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002499C4; } }
    c.r[3].d[0] = ld64((c.r[2].w[0]));
    st64((c.r[19].w[0] + 64u), c.r[3].d[0]);
    c.r[6].d[0] = ld8((c.r[2].w[0] + 8u));
    c.r[5].d[0] = ld8((c.r[2].w[0] + 9u));
    c.r[4].d[0] = ld8((c.r[2].w[0] + 10u));
    c.r[3].d[0] = ld8((c.r[2].w[0] + 11u));
    st8((c.r[19].w[0] + 72u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[19].w[0] + 73u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[19].w[0] + 74u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[19].w[0] + 75u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[2].w[0] + 12u)));
    st32((c.r[19].w[0] + 76u), c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 16u)));
    st16((c.r[19].w[0] + 80u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 14;
L_002499C4:
    c.r[4].d[0] = ld8((c.r[19].w[0] + 51u));
    set32(c.r[3], 0u - 999u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + 1u);
    st32((c.r[19].w[0] + 136u), c.r[4].w[0]);
    c.r[4].d[0] = ld8((c.r[19].w[0] + 75u));
    set32(c.r[4], c.r[4].w[0] + 1u);
    st32((c.r[19].w[0] + 140u), c.r[4].w[0]);
    st64((c.r[16].w[0] + 312u), c.r[3].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 17;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_00249A10:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00249A4C; } }
    c.r[2].d[0] = c.r[5].d[0] << 48;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] - 2560u);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] <= 0; st32((c.r[16].w[0] + 1024u), c.r[3].w[0]);  if (t) { goto L_00249A48; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00249A48u);  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x00249A48u) [[unlikely]] return; }
L_00249A48:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_00249A4C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00249A60:
    set32(c.r[29], c.r[29].w[0] - 400u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0])));
    set32(c.r[6], ld32((c.r[1].w[0] + 31456u)));
    set32(c.r[7], ld32((c.r[5].w[0] + 912u)));
    c.budget -= 20;
    { const bool t = c.r[7].sd[0] >= 0; c.r[4].d[0] = c.r[7].d[0] & 1ull;  if (t) { goto L_00249ABC; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; c.r[3].d[0] = c.r[6].d[0] & 1ull;  if (t) { goto L_00249AC0; } }
    set32(c.r[4], c.r[4].w[0] - 2u);
    c.budget -= 1;
L_00249ABC:
    c.r[3].d[0] = c.r[6].d[0] & 1ull;
    c.budget -= 1;
L_00249AC0:
    c.budget -= 2;
    { const bool t = c.r[6].sd[0] >= 0;  if (t) { goto L_00249AD4; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00249AD4; } }
    set32(c.r[3], c.r[3].w[0] - 2u);
    c.budget -= 1;
L_00249AD4:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00249AE0; } }
    c.r[20].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_00249AE0:
    c.budget -= 2;
    { const bool t = c.r[6].sd[0] >= 0; c.r[3].d[0] = c.r[6].d[0] & 7ull;  if (t) { goto L_00249AF4; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00249AF4; } }
    set32(c.r[3], c.r[3].w[0] - 8u);
    c.budget -= 1;
L_00249AF4:
    c.budget -= 2;
    { const bool t = c.r[7].d[0] != c.r[3].d[0];  if (t) { goto L_00249B00; } }
    c.r[19].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_00249B00:
    set32(c.r[3], ld32((c.r[5].w[0] + 164u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[21].w[0] + 1004u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[4].d[0]; set32(c.r[23], ld32((c.r[5].w[0] + 984u)));  if (t) { goto L_00249B20; } }
    st16((c.r[21].w[0] + 1006u), static_cast<std::uint16_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[21].w[0])));
    set32(c.r[3], ld32((c.r[3].w[0] + 164u)));
    st16((c.r[21].w[0] + 1004u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 4;
L_00249B20:
    set32(c.r[3], ld32((c.r[21].w[0])));
    set32(c.r[4], ld32((c.r[3].w[0] + 984u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00249B68; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x434F0000u);  if (t) { goto L_00249B40; } }
    set32(c.r[4], c.r[4].w[0] + 436u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x434F0000u);
    c.budget -= 2;
L_00249B40:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00249B48u); c.r[5].d[0] = c.r[2].d[0] | 19785ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x00249B48u) [[unlikely]] return; }
L_00249B48:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00249B58; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 16u)));  if (t) { goto L_00249B5C; } }
L_00249B58:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00249B5C:
    set32(c.r[2], ld32((c.r[2].w[0] + 44u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[21].w[0] + 4u), c.r[2].w[0]);  if (t) { goto L_00249B70; } }
L_00249B68:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[21].w[0] + 4u), 0u);  if (t) { goto L_0024B924; } }
L_00249B70:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_00249BA4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00249B80u); set32(c.r[4], ld32((c.r[21].w[0])));  if (depth < kMaxDepth) unit_0052(c, 168u, depth + 1u); else { c.pc = 0x00249660u; return; } if (c.pc != 0x00249B80u) [[unlikely]] return; }
L_00249B80:
    st32((c.r[21].w[0] + 408u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[21].w[0] + 4u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00249BA4; } }
    set32(c.r[3], ld32((c.r[2].w[0] + 408u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00249BA4; } }
    st32((c.r[21].w[0] + 408u), c.r[2].w[0]);
    c.budget -= 1;
L_00249BA4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00249BACu); set32(c.r[4], ld32((c.r[21].w[0])));  if (depth < kMaxDepth) unit_002E(c, 112u, depth + 1u); else { c.pc = 0x001B9B80u; return; } if (c.pc != 0x00249BACu) [[unlikely]] return; }
L_00249BAC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00249BC8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00249BBCu);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x00249BBCu) [[unlikely]] return; }
L_00249BBC:
    c.r[2].d[0] = ld8((c.r[2].w[0] + 14u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00249BD0; } }
L_00249BC8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[21].w[0] + 412u), 0u);  if (t) { goto L_00249D28; } }
L_00249BD0:
    set32(c.r[16], ld32((c.r[21].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00249BDCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 112u, depth + 1u); else { c.pc = 0x001B9B80u; return; } if (c.pc != 0x00249BDCu) [[unlikely]] return; }
L_00249BDC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00249BF0; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 468u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[2].d[0] | 8ull;  if (t) { goto L_00249BF4; } }
L_00249BF0:
    set32(c.r[4], ld32((c.r[16].w[0] + 468u)));
    c.budget -= 1;
L_00249BF4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[2], ld32((c.r[1].w[0] - 1536u)));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 6);
    set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 8u));
    c.r[2].d[0] = c.r[3].sd[0] < 64ll ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00249C44; } }
    c.r[1].d[0] = c.r[3].sd[0] < 193ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00249C44; } }
    c.r[2].d[0] = ld8((c.r[4].w[0] + 9u));
    c.r[1].d[0] = c.r[2].sd[0] < 193ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00249C44; } }
    c.r[1].d[0] = c.r[2].sd[0] < 64ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00249D24; } }
L_00249C44:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00249C4Cu); set32(c.r[4], ld32((c.r[21].w[0])));  if (depth < kMaxDepth) unit_006F(c, 264u, depth + 1u); else { c.pc = 0x002BF670u; return; } if (c.pc != 0x00249C4Cu) [[unlikely]] return; }
L_00249C4C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00249C60; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[21].w[0] + 412u), c.r[2].w[0]);  if (t) { goto L_00249D28; } }
L_00249C60:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00249C68u); set32(c.r[4], ld32((c.r[21].w[0])));  if (depth < kMaxDepth) unit_0070(c, 32u, depth + 1u); else { c.pc = 0x002C0980u; return; } if (c.pc != 0x00249C68u) [[unlikely]] return; }
L_00249C68:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00249C7C; } }
    set32(c.r[2], 0u + 4u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[21].w[0] + 412u), c.r[2].w[0]);  if (t) { goto L_00249D28; } }
L_00249C7C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00249C84u); set32(c.r[4], ld32((c.r[21].w[0])));  if (depth < kMaxDepth) unit_0070(c, 29u, depth + 1u); else { c.pc = 0x002C07D0u; return; } if (c.pc != 0x00249C84u) [[unlikely]] return; }
L_00249C84:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00249C98; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[21].w[0] + 412u), c.r[2].w[0]);  if (t) { goto L_00249D28; } }
L_00249C98:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00249CA0u);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x00249CA0u) [[unlikely]] return; }
L_00249CA0:
    c.r[2].d[0] = ld8((c.r[2].w[0] + 27u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00249CF4; } }
    set32(c.r[2], ld32((c.r[21].w[0])));
    set32(c.r[2], ld32((c.r[2].w[0] + 624u)));
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] >= 0; c.r[3].d[0] = c.r[2].d[0] & 3ull;  if (t) { goto L_00249CD0; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00249CD0; } }
    set32(c.r[3], c.r[3].w[0] - 4u);
    c.budget -= 1;
L_00249CD0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], c.r[2].w[0] + 31232u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00249CF4; } }
    set32(c.r[2], 0u + 6u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[21].w[0] + 412u), c.r[2].w[0]);  if (t) { goto L_00249D28; } }
L_00249CF4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41F00000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00249D04u); set32(c.r[4], ld32((c.r[21].w[0])));  if (depth < kMaxDepth) unit_0070(c, 26u, depth + 1u); else { c.pc = 0x002C0660u; return; } if (c.pc != 0x00249D04u) [[unlikely]] return; }
L_00249D04:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00249D18; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[21].w[0] + 412u), c.r[2].w[0]);  if (t) { goto L_00249D28; } }
L_00249D18:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[21].w[0] + 412u), c.r[2].w[0]);  if (t) { goto L_00249D28; } }
L_00249D24:
    st32((c.r[21].w[0] + 412u), 0u);
    c.budget -= 1;
L_00249D28:
    c.r[2].d[0] = ld64((c.r[21].w[0] + 424u));
    set32(c.r[17], c.r[21].w[0] + 424u);
    set32(c.r[18], c.r[29].w[0] + 368u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 8u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00249D44u); st64((c.r[18].w[0]), c.r[2].d[0]);  if (depth < kMaxDepth) unit_0010(c, 111u, depth + 1u); else { c.pc = 0x00141670u; return; } if (c.pc != 0x00249D44u) [[unlikely]] return; }
L_00249D44:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00249D4Cu); set32(c.r[4], ld32((c.r[21].w[0])));  if (depth < kMaxDepth) unit_0059(c, 53u, depth + 1u); else { c.pc = 0x00264B30u; return; } if (c.pc != 0x00249D4Cu) [[unlikely]] return; }
L_00249D4C:
    c.r[5].d[0] = ld8((c.r[17].w[0]));
    c.r[16].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    set32(c.r[3], 0u - 3u);
    set32(c.r[4], c.r[2].w[0] << 1);
    c.r[22].d[0] = c.r[16].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st8((c.r[17].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[4], ld32((c.r[21].w[0])));
    c.r[3].d[0] = ld64((c.r[4].w[0] + 704u));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 17;
    { const bool t = c.r[2].d[0] != 0ull; c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00249DAC; } }
    c.r[2].d[0] = 0ull | 32768ull;
    c.r[2].d[0] = c.r[2].d[0] << 16;
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00249DAC; } }
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00249DAC:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { goto L_00249DC8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00249DBCu);  if (depth < kMaxDepth) unit_0059(c, 45u, depth + 1u); else { c.pc = 0x00264950u; return; } if (c.pc != 0x00249DBCu) [[unlikely]] return; }
L_00249DBC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00249DC8; } }
    c.r[22].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00249DC8:
    c.budget -= 2;
    { const bool t = c.r[22].d[0] != 0ull;  if (t) { goto L_00249DF4; } }
    set32(c.r[3], ld32((c.r[21].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00020000u);
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[3].d[0] = ld64((c.r[3].w[0] + 704u));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00249DF4; } }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00249DF4:
    c.r[7].d[0] = ld8((c.r[17].w[0]));
    set32(c.r[4], 0u - 2u);
    set32(c.r[2], 0u + 128u);
    c.r[6].d[0] = c.r[16].d[0] & 1ull;
    c.r[5].d[0] = c.r[2].d[0] << 32;
    set32(c.r[3], 0u - 17u);
    c.r[4].d[0] = c.r[7].d[0] & c.r[4].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[6].d[0];
    st8((c.r[17].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[6], ld32((c.r[21].w[0])));
    c.r[4].d[0] = ld8((c.r[17].w[0]));
    c.r[6].d[0] = ld64((c.r[6].w[0] + 704u));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.r[4].d[0] = c.r[6].d[0] & c.r[5].d[0];
    c.r[4].d[0] = 0ull < c.r[4].d[0] ? 1ull : 0ull;
    set32(c.r[4], c.r[4].w[0] << 4);
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st8((c.r[17].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[17].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 59;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 23;
    { const bool t = c.r[3].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00249E6C; } }
    c.r[3].d[0] = ld64((c.r[21].w[0] + 576u));
    c.r[3].d[0] = c.r[3].d[0] & c.r[5].d[0];
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00249E6C; } }
    c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_00249E6C:
    c.r[10].d[0] = ld8((c.r[17].w[0]));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    set32(c.r[7], 0u - 33u);
    set32(c.r[9], c.r[2].w[0] << 5);
    set32(c.r[2], 0u + 32u);
    set32(c.r[6], 0u - 65u);
    c.r[8].d[0] = c.r[2].d[0] << 32;
    set32(c.r[4], 0u - 129u);
    set32(c.r[3], 0u - 2u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x40000000u);
    set32(c.r[2], 0u - 9u);
    c.r[7].d[0] = c.r[10].d[0] & c.r[7].d[0];
    c.r[7].d[0] = c.r[7].d[0] | c.r[9].d[0];
    st8((c.r[17].w[0]), static_cast<std::uint8_t>(c.r[7].w[0]));
    set32(c.r[9], ld32((c.r[21].w[0])));
    c.r[7].d[0] = ld8((c.r[17].w[0]));
    c.r[9].d[0] = ld64((c.r[9].w[0] + 704u));
    c.r[6].d[0] = c.r[7].d[0] & c.r[6].d[0];
    c.r[7].d[0] = c.r[9].d[0] & c.r[8].d[0];
    c.r[7].d[0] = 0ull < c.r[7].d[0] ? 1ull : 0ull;
    set32(c.r[7], c.r[7].w[0] << 6);
    c.r[6].d[0] = c.r[6].d[0] | c.r[7].d[0];
    st8((c.r[17].w[0]), static_cast<std::uint8_t>(c.r[6].w[0]));
    set32(c.r[7], ld32((c.r[21].w[0])));
    c.r[6].d[0] = ld8((c.r[17].w[0]));
    c.r[7].d[0] = ld64((c.r[7].w[0] + 704u));
    c.r[4].d[0] = c.r[6].d[0] & c.r[4].d[0];
    c.r[6].d[0] = c.r[7].d[0] & 4ull;
    c.r[6].d[0] = 0ull < c.r[6].d[0] ? 1ull : 0ull;
    set32(c.r[6], c.r[6].w[0] << 7);
    c.r[4].d[0] = c.r[4].d[0] | c.r[6].d[0];
    st8((c.r[17].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[6], ld32((c.r[21].w[0])));
    c.r[4].d[0] = ld8((c.r[17].w[0] + 1u));
    c.r[6].d[0] = ld64((c.r[6].w[0] + 704u));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.r[4].d[0] = c.r[6].d[0] & c.r[5].d[0];
    c.r[4].d[0] = 0ull < c.r[4].d[0] ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st8((c.r[17].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[4], ld32((c.r[21].w[0])));
    c.r[3].d[0] = ld8((c.r[17].w[0]));
    c.r[4].d[0] = ld64((c.r[4].w[0] + 704u));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[3].d[0] = c.r[4].d[0] & 3ull;
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    set32(c.r[3], c.r[3].w[0] << 3);
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[17].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 51;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00249F38u); set32(c.r[4], ld32((c.r[21].w[0])));  if (depth < kMaxDepth) unit_0059(c, 56u, depth + 1u); else { c.pc = 0x00264C70u; return; } if (c.pc != 0x00249F38u) [[unlikely]] return; }
L_00249F38:
    c.r[4].d[0] = ld8((c.r[17].w[0] + 1u));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    set32(c.r[3], c.r[2].w[0] << 2);
    set32(c.r[2], 0u - 5u);
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[17].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00249F5Cu); set32(c.r[4], ld32((c.r[21].w[0])));  if (depth < kMaxDepth) unit_0059(c, 81u, depth + 1u); else { c.pc = 0x002654A0u; return; } if (c.pc != 0x00249F5Cu) [[unlikely]] return; }
L_00249F5C:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00249F78; } }
    c.r[2].d[0] = ld8((c.r[17].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 60;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
L_00249F78:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00249F90; } }
    c.r[2].d[0] = ld8((c.r[17].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
L_00249F90:
    c.r[9].d[0] = ld8((c.r[17].w[0] + 1u));
    set32(c.r[3], 0u + 256u);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    set32(c.r[7], 0u - 3u);
    c.r[4].d[0] = c.r[3].d[0] << 32;
    set32(c.r[8], c.r[2].w[0] << 1);
    set32(c.r[2], 0u + 4u);
    set32(c.r[5], 0u - 9u);
    c.r[6].d[0] = c.r[2].d[0] << 32;
    c.r[3].d[0] = c.r[9].d[0] & c.r[7].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[8].d[0];
    st8((c.r[17].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[7], ld32((c.r[21].w[0])));
    c.r[3].d[0] = ld8((c.r[17].w[0] + 1u));
    c.r[7].d[0] = ld64((c.r[7].w[0] + 704u));
    c.r[3].d[0] = c.r[3].d[0] & c.r[5].d[0];
    c.r[5].d[0] = c.r[7].d[0] & c.r[6].d[0];
    c.r[5].d[0] = 0ull < c.r[5].d[0] ? 1ull : 0ull;
    set32(c.r[5], c.r[5].w[0] << 3);
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    st8((c.r[17].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[21].w[0])));
    c.r[3].d[0] = ld64((c.r[3].w[0] + 704u));
    c.r[3].d[0] = c.r[3].d[0] & c.r[4].d[0];
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 28;
    { const bool t = c.r[3].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0024A018; } }
    c.r[3].d[0] = ld64((c.r[21].w[0] + 576u));
    c.r[3].d[0] = c.r[3].d[0] & c.r[4].d[0];
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0024A018; } }
    c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_0024A018:
    c.r[4].d[0] = ld8((c.r[17].w[0] + 1u));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    set32(c.r[3], c.r[2].w[0] << 4);
    set32(c.r[2], 0u - 17u);
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[17].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024A03Cu); set32(c.r[4], ld32((c.r[21].w[0])));  if (depth < kMaxDepth) unit_0059(c, 71u, depth + 1u); else { c.pc = 0x00265000u; return; } if (c.pc != 0x0024A03Cu) [[unlikely]] return; }
L_0024A03C:
    c.r[4].d[0] = ld8((c.r[17].w[0] + 1u));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    set32(c.r[3], c.r[2].w[0] << 5);
    set32(c.r[2], 0u - 33u);
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[17].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[4], ld32((c.r[21].w[0])));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024A064u); c.r[16].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0059(c, 71u, depth + 1u); else { c.pc = 0x00265000u; return; } if (c.pc != 0x0024A064u) [[unlikely]] return; }
L_0024A064:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0024A094; } }
    c.r[3].d[0] = ld64((c.r[21].w[0] + 576u));
    set32(c.r[2], 0u + 2u);
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0024A094; } }
    c.r[16].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_0024A094:
    c.r[4].d[0] = ld8((c.r[17].w[0] + 1u));
    c.r[2].d[0] = c.r[16].d[0] & 1ull;
    set32(c.r[3], c.r[2].w[0] << 6);
    set32(c.r[2], 0u - 65u);
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[17].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[21].w[0])));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024A0BCu); set32(c.r[4], ld32((c.r[2].w[0] + 164u)));  if (depth < kMaxDepth) unit_0039(c, 100u, depth + 1u); else { c.pc = 0x001E5420u; return; } if (c.pc != 0x0024A0BCu) [[unlikely]] return; }
L_0024A0BC:
    set32(c.r[7], ld32((c.r[21].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00060000u);
    c.r[4].d[0] = c.r[3].d[0] << 32;
    c.r[6].d[0] = ld8((c.r[17].w[0] + 1u));
    set32(c.r[5], 0u - 129u);
    set32(c.r[3], 0u - 2u);
    set32(c.r[7], ld32((c.r[7].w[0] + 176u)));
    c.r[5].d[0] = c.r[6].d[0] & c.r[5].d[0];
    c.r[2].d[0] = c.r[7].d[0] ^ c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    set32(c.r[2], c.r[2].w[0] << 7);
    c.r[2].d[0] = c.r[5].d[0] | c.r[2].d[0];
    st8((c.r[17].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[5], ld32((c.r[21].w[0])));
    c.r[2].d[0] = ld8((c.r[17].w[0] + 2u));
    c.r[5].d[0] = ld64((c.r[5].w[0] + 704u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[5].d[0] & c.r[4].d[0];
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[17].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 23;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024A118u); set32(c.r[4], ld32((c.r[21].w[0])));  if (depth < kMaxDepth) unit_0059(c, 54u, depth + 1u); else { c.pc = 0x00264B50u; return; } if (c.pc != 0x0024A118u) [[unlikely]] return; }
L_0024A118:
    c.r[10].d[0] = ld8((c.r[17].w[0] + 2u));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    set32(c.r[8], 0u - 3u);
    set32(c.r[9], c.r[2].w[0] << 1);
    set32(c.r[2], 0u + 8192u);
    set32(c.r[6], 0u - 5u);
    c.r[7].d[0] = c.r[2].d[0] << 32;
    set32(c.r[5], 0u - 9u);
    set32(c.r[4], 0u + 50u);
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.r[8].d[0] = c.r[10].d[0] & c.r[8].d[0];
    c.r[8].d[0] = c.r[8].d[0] | c.r[9].d[0];
    st8((c.r[17].w[0] + 2u), static_cast<std::uint8_t>(c.r[8].w[0]));
    set32(c.r[9], ld32((c.r[21].w[0])));
    c.r[8].d[0] = ld8((c.r[17].w[0] + 2u));
    c.r[9].d[0] = ld64((c.r[9].w[0] + 704u));
    c.r[6].d[0] = c.r[8].d[0] & c.r[6].d[0];
    c.r[8].d[0] = c.r[9].d[0] & 8ull;
    c.r[8].d[0] = 0ull < c.r[8].d[0] ? 1ull : 0ull;
    set32(c.r[8], c.r[8].w[0] << 2);
    c.r[6].d[0] = c.r[6].d[0] | c.r[8].d[0];
    st8((c.r[17].w[0] + 2u), static_cast<std::uint8_t>(c.r[6].w[0]));
    set32(c.r[8], ld32((c.r[21].w[0])));
    c.r[6].d[0] = ld8((c.r[17].w[0] + 2u));
    c.r[8].d[0] = ld64((c.r[8].w[0] + 704u));
    c.r[5].d[0] = c.r[6].d[0] & c.r[5].d[0];
    c.r[6].d[0] = c.r[8].d[0] & c.r[7].d[0];
    c.r[6].d[0] = 0ull < c.r[6].d[0] ? 1ull : 0ull;
    set32(c.r[6], c.r[6].w[0] << 3);
    c.r[5].d[0] = c.r[5].d[0] | c.r[6].d[0];
    st8((c.r[17].w[0] + 2u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[5], ld32((c.r[21].w[0])));
    set32(c.r[6], ld32((c.r[5].w[0] + 164u)));
    c.budget -= 35;
    { const bool t = c.r[6].d[0] != c.r[4].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0024A1B8; } }
    set32(c.r[5], ld32((c.r[5].w[0] + 168u)));
    set32(c.r[4], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[4].d[0];  if (t) { goto L_0024A1B8; } }
    c.r[2].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 1;
L_0024A1B8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0024A1D0; } }
    set32(c.r[2], 0u + 807u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[2].d[0];  if (t) { goto L_0024A1D0; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0024A1D0:
    c.r[5].d[0] = ld8((c.r[17].w[0] + 2u));
    c.r[2].d[0] = c.r[3].d[0] & 1ull;
    set32(c.r[3], 0u - 17u);
    set32(c.r[4], c.r[2].w[0] << 4);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st8((c.r[17].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[4], ld32((c.r[21].w[0])));
    c.r[3].d[0] = ld64((c.r[4].w[0] + 704u));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 15;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0024A228; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024A214u);  if (depth < kMaxDepth) unit_0059(c, 41u, depth + 1u); else { c.pc = 0x00264890u; return; } if (c.pc != 0x0024A214u) [[unlikely]] return; }
L_0024A214:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0024A228; } }
    c.r[16].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_0024A228:
    c.r[8].d[0] = ld8((c.r[17].w[0] + 2u));
    c.r[2].d[0] = c.r[16].d[0] & 1ull;
    set32(c.r[5], 0u - 33u);
    set32(c.r[7], c.r[2].w[0] << 5);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00100000u);
    set32(c.r[3], 0u - 65u);
    c.r[6].d[0] = c.r[2].d[0] << 32;
    set32(c.r[2], 0u + 64u);
    c.r[4].d[0] = c.r[2].d[0] << 32;
    c.r[5].d[0] = c.r[8].d[0] & c.r[5].d[0];
    set32(c.r[2], 0u - 129u);
    c.r[5].d[0] = c.r[5].d[0] | c.r[7].d[0];
    st8((c.r[17].w[0] + 2u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[7], ld32((c.r[21].w[0])));
    c.r[5].d[0] = ld8((c.r[17].w[0] + 2u));
    c.r[7].d[0] = ld64((c.r[7].w[0] + 704u));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[5].d[0] = c.r[7].d[0] & c.r[6].d[0];
    c.r[5].d[0] = 0ull < c.r[5].d[0] ? 1ull : 0ull;
    set32(c.r[5], c.r[5].w[0] << 6);
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    st8((c.r[17].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[5], ld32((c.r[21].w[0])));
    c.r[3].d[0] = ld8((c.r[17].w[0] + 2u));
    c.r[5].d[0] = ld64((c.r[5].w[0] + 704u));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[3].d[0] = c.r[5].d[0] & c.r[4].d[0];
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    set32(c.r[3], c.r[3].w[0] << 7);
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[17].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[17].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 62;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.r[2].d[0] = c.r[2].d[0] ^ 0ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 38;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0024A2D4; } }
    c.r[2].d[0] = ld8((c.r[18].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 62;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 5;
L_0024A2D4:
    c.r[6].d[0] = ld8((c.r[17].w[0] + 3u));
    set32(c.r[4], 0u - 2u);
    c.r[5].d[0] = c.r[2].d[0] & 1ull;
    set32(c.r[3], 0u - 3u);
    c.r[4].d[0] = c.r[6].d[0] & c.r[4].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];
    st8((c.r[17].w[0] + 3u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[5], ld32((c.r[21].w[0])));
    c.r[4].d[0] = ld8((c.r[17].w[0] + 3u));
    set32(c.r[5], ld32((c.r[5].w[0] + 628u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.r[4].d[0] = 0ull < c.r[5].d[0] ? 1ull : 0ull;
    set32(c.r[4], c.r[4].w[0] << 1);
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st8((c.r[17].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[17].w[0] + 3u));
    c.r[3].d[0] = c.r[3].d[0] << 62;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 20;
    { const bool t = c.r[3].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0024A34C; } }
    set32(c.r[4], ld32((c.r[21].w[0])));
    set32(c.r[3], 0u + 256u);
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.r[4].d[0] = ld64((c.r[4].w[0] + 704u));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0024A34C; } }
    c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_0024A34C:
    c.r[4].d[0] = ld8((c.r[17].w[0] + 3u));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    set32(c.r[3], c.r[2].w[0] << 2);
    set32(c.r[2], 0u - 5u);
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[17].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[17].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.r[2].d[0] = c.r[2].d[0] ^ 0ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 14;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0024A398; } }
    c.r[2].d[0] = ld8((c.r[18].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 5;
L_0024A398:
    c.r[4].d[0] = ld8((c.r[17].w[0] + 3u));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    set32(c.r[3], c.r[2].w[0] << 3);
    set32(c.r[2], 0u - 9u);
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[17].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[21].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0] + 164u)));
    c.r[2].d[0] = c.r[2].d[0] ^ 50ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 13;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0024A3D8; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 168u)));
    c.r[2].d[0] = c.r[2].d[0] ^ 2ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 3;
L_0024A3D8:
    c.r[4].d[0] = ld8((c.r[17].w[0] + 3u));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    set32(c.r[3], c.r[2].w[0] << 4);
    set32(c.r[2], 0u - 17u);
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[17].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[17].w[0] + 1u));
    c.r[2].d[0] = c.r[2].d[0] << 60;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.r[2].d[0] = c.r[2].d[0] ^ 0ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 14;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0024A420; } }
    c.r[2].d[0] = ld8((c.r[18].w[0] + 1u));
    c.r[2].d[0] = c.r[2].d[0] << 60;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
L_0024A420:
    c.r[4].d[0] = ld8((c.r[17].w[0] + 3u));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    set32(c.r[3], c.r[2].w[0] << 5);
    set32(c.r[2], 0u - 33u);
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[17].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[17].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 60;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 14;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0024A46C; } }
    c.r[2].d[0] = ld8((c.r[18].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 60;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.r[2].d[0] = c.r[2].d[0] ^ 0ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 5;
L_0024A46C:
    c.r[11].d[0] = ld8((c.r[17].w[0] + 3u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x0C000000u);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    set32(c.r[9], 0u - 65u);
    c.r[4].d[0] = c.r[3].d[0] << 32;
    set32(c.r[10], c.r[2].w[0] << 6);
    set32(c.r[7], 0u - 129u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x000F0000u);
    set32(c.r[5], 0u - 2u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00200000u);
    c.r[3].d[0] = c.r[11].d[0] & c.r[9].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[10].d[0];
    st8((c.r[17].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[9], ld32((c.r[21].w[0])));
    c.r[3].d[0] = ld8((c.r[17].w[0] + 3u));
    c.r[9].d[0] = ld64((c.r[9].w[0] + 704u));
    c.r[3].d[0] = c.r[3].d[0] & c.r[7].d[0];
    c.r[7].d[0] = c.r[9].d[0] & c.r[8].d[0];
    c.r[7].d[0] = 0ull < c.r[7].d[0] ? 1ull : 0ull;
    set32(c.r[7], c.r[7].w[0] << 7);
    c.r[3].d[0] = c.r[3].d[0] | c.r[7].d[0];
    st8((c.r[17].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[7], ld32((c.r[21].w[0])));
    c.r[3].d[0] = ld8((c.r[17].w[0] + 4u));
    c.r[7].d[0] = ld64((c.r[7].w[0] + 704u));
    c.r[3].d[0] = c.r[3].d[0] & c.r[5].d[0];
    c.r[5].d[0] = c.r[7].d[0] & c.r[6].d[0];
    c.r[5].d[0] = 0ull < c.r[5].d[0] ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    st8((c.r[17].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld64((c.r[21].w[0] + 576u));
    c.r[3].d[0] = c.r[3].d[0] & c.r[4].d[0];
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 35;
    { const bool t = c.r[3].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0024A518; } }
    set32(c.r[3], ld32((c.r[21].w[0])));
    c.r[3].d[0] = ld64((c.r[3].w[0] + 704u));
    c.r[3].d[0] = c.r[3].d[0] & c.r[4].d[0];
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0024A518; } }
    c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_0024A518:
    c.r[6].d[0] = ld8((c.r[17].w[0] + 4u));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    set32(c.r[5], c.r[2].w[0] << 1);
    set32(c.r[4], 0u - 3u);
    set32(c.r[2], 0u + 128u);
    c.r[3].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = c.r[6].d[0] & c.r[4].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[5].d[0];
    st8((c.r[17].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld64((c.r[21].w[0] + 576u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 14;
    { const bool t = c.r[2].d[0] == 0ull; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_0024A570; } }
    set32(c.r[2], ld32((c.r[21].w[0])));
    c.r[2].d[0] = ld64((c.r[2].w[0] + 704u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0024A570; } }
    c.r[7].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_0024A570:
    c.r[5].d[0] = ld8((c.r[17].w[0] + 4u));
    c.r[2].d[0] = c.r[7].d[0] & 1ull;
    set32(c.r[3], 0u - 5u);
    set32(c.r[4], c.r[2].w[0] << 2);
    set32(c.r[2], 0u + 8u);
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st8((c.r[17].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[4], ld32((c.r[21].w[0])));
    c.r[3].d[0] = ld64((c.r[4].w[0] + 704u));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 15;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0024A5EC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024A5B4u);  if (depth < kMaxDepth) unit_0034(c, 203u, depth + 1u); else { c.pc = 0x001D2C20u; return; } if (c.pc != 0x0024A5B4u) [[unlikely]] return; }
L_0024A5B4:
    set32(c.r[5], ld32((c.r[21].w[0])));
    set32(c.r[4], c.r[2].w[0] << 2);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    c.r[3].d[0] = ld8((c.r[17].w[0] + 4u));
    set32(c.r[2], c.r[2].w[0] - 22784u);
    set32(c.r[4], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[2], 0u - 9u);
    set32(c.r[4], ld32((c.r[4].w[0])));
    set32(c.r[5], ld32((c.r[5].w[0] + 176u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[3].d[0] = c.r[4].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    set32(c.r[3], c.r[3].w[0] << 3);
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[17].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 14;
L_0024A5EC:
    set32(c.r[2], ld32((c.r[21].w[0])));
    set32(c.r[2], ld32((c.r[2].w[0] + 164u)));
    c.r[2].d[0] = c.r[2].d[0] ^ 1600ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0024A610; } }
    set32(c.r[2], ld32((c.r[21].w[0] + 960u)));
    c.r[2].d[0] = c.r[2].d[0] ^ 1600ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
L_0024A610:
    c.r[8].d[0] = ld8((c.r[17].w[0] + 4u));
    set32(c.r[3], 0u + 256u);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    set32(c.r[6], 0u - 17u);
    c.r[4].d[0] = c.r[3].d[0] << 32;
    set32(c.r[7], c.r[2].w[0] << 4);
    set32(c.r[5], 0u - 33u);
    c.r[3].d[0] = c.r[8].d[0] & c.r[6].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[7].d[0];
    st8((c.r[17].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[6], ld32((c.r[21].w[0])));
    c.r[3].d[0] = ld8((c.r[17].w[0] + 4u));
    c.r[6].d[0] = ld8((c.r[6].w[0] + 382u));
    c.r[3].d[0] = c.r[3].d[0] & c.r[5].d[0];
    c.r[5].d[0] = c.r[6].d[0] ^ 255ull;
    c.r[5].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    set32(c.r[5], c.r[5].w[0] << 5);
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    st8((c.r[17].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[21].w[0])));
    c.r[3].d[0] = ld64((c.r[3].w[0] + 704u));
    c.r[3].d[0] = c.r[3].d[0] & c.r[4].d[0];
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 25;
    { const bool t = c.r[3].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0024A690; } }
    c.r[3].d[0] = ld64((c.r[21].w[0] + 576u));
    c.r[3].d[0] = c.r[3].d[0] & c.r[4].d[0];
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0024A690; } }
    c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_0024A690:
    c.r[6].d[0] = ld8((c.r[17].w[0] + 4u));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    set32(c.r[5], c.r[2].w[0] << 6);
    set32(c.r[4], 0u - 65u);
    set32(c.r[2], 0u + 8u);
    c.r[3].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = c.r[6].d[0] & c.r[4].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[5].d[0];
    st8((c.r[17].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[21].w[0])));
    c.r[2].d[0] = ld64((c.r[2].w[0] + 704u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 15;
    { const bool t = c.r[2].d[0] == 0ull; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_0024A6E8; } }
    c.r[2].d[0] = ld64((c.r[21].w[0] + 576u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0024A6E8; } }
    c.r[7].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_0024A6E8:
    c.r[6].d[0] = ld8((c.r[17].w[0] + 4u));
    c.r[2].d[0] = c.r[7].d[0] & 1ull;
    set32(c.r[5], c.r[2].w[0] << 7);
    set32(c.r[4], 0u - 129u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01000000u);
    c.r[3].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = c.r[6].d[0] & c.r[4].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[5].d[0];
    st8((c.r[17].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[21].w[0])));
    c.r[2].d[0] = ld64((c.r[2].w[0] + 704u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 15;
    { const bool t = c.r[2].d[0] == 0ull; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_0024A740; } }
    c.r[2].d[0] = ld64((c.r[21].w[0] + 576u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0024A740; } }
    c.r[7].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_0024A740:
    c.r[6].d[0] = ld8((c.r[17].w[0] + 5u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00800000u);
    c.r[5].d[0] = c.r[7].d[0] & 1ull;
    set32(c.r[4], 0u - 2u);
    c.r[3].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = c.r[6].d[0] & c.r[4].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[5].d[0];
    st8((c.r[17].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[21].w[0])));
    c.r[2].d[0] = ld64((c.r[2].w[0] + 704u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 14;
    { const bool t = c.r[2].d[0] == 0ull; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_0024A794; } }
    c.r[2].d[0] = ld64((c.r[21].w[0] + 576u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0024A794; } }
    c.r[7].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_0024A794:
    c.r[8].d[0] = ld8((c.r[17].w[0] + 5u));
    c.r[2].d[0] = c.r[7].d[0] & 1ull;
    set32(c.r[7], c.r[2].w[0] << 1);
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[5], 0u - 3u);
    c.r[6].d[0] = c.r[2].d[0] << 32;
    c.r[9].d[0] = 0ull + 0ull;
    c.r[2].d[0] = c.r[8].d[0] & c.r[5].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[7].d[0];
    st8((c.r[17].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[21].w[0])));
    c.r[7].d[0] = ld64((c.r[2].w[0] + 704u));
    c.r[5].d[0] = c.r[7].d[0] & c.r[6].d[0];
    c.r[5].d[0] = 0ull < c.r[5].d[0] ? 1ull : 0ull;
    c.budget -= 17;
    { const bool t = c.r[5].d[0] == 0ull; c.r[3].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0024A7F4; } }
    c.r[5].d[0] = ld64((c.r[21].w[0] + 576u));
    c.r[5].d[0] = c.r[5].d[0] & c.r[6].d[0];
    c.r[5].d[0] = 0ull < c.r[5].d[0] ? 1ull : 0ull;
    c.r[5].d[0] = c.r[5].d[0] ^ 1ull;
    c.budget -= 6;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0024A7F4; } }
    c.r[9].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 1;
L_0024A7F4:
    c.budget -= 2;
    { const bool t = c.r[9].d[0] != 0ull;  if (t) { goto L_0024A83C; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00020000u);
    c.r[6].d[0] = c.r[5].d[0] << 32;
    c.r[5].d[0] = c.r[7].d[0] & c.r[6].d[0];
    c.r[5].d[0] = 0ull < c.r[5].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[5].d[0] == 0ull; c.r[8].d[0] = 0ull + 0ull;  if (t) { goto L_0024A830; } }
    c.r[5].d[0] = ld64((c.r[21].w[0] + 576u));
    c.r[5].d[0] = c.r[5].d[0] & c.r[6].d[0];
    c.r[5].d[0] = 0ull < c.r[5].d[0] ? 1ull : 0ull;
    c.r[5].d[0] = c.r[5].d[0] ^ 1ull;
    c.budget -= 6;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0024A830; } }
    c.r[8].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_0024A830:
    c.budget -= 2;
    { const bool t = c.r[8].d[0] != 0ull;  if (t) { goto L_0024A83C; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0024A83C:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0024A89C; } }
    c.r[5].d[0] = ld64((c.r[2].w[0] + 704u));
    set32(c.r[3], 0u + 8u);
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_0024A878; } }
    set32(c.r[5], ld32((c.r[2].w[0] + 172u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_0024A878; } }
    c.r[6].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 1;
L_0024A878:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_0024A890; } }
    c.r[2].d[0] = ld8((c.r[2].w[0] + 900u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0024A890; } }
    c.r[7].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_0024A890:
    c.budget -= 2;
    { const bool t = c.r[7].d[0] != 0ull; c.r[2].d[0] = c.r[4].d[0] & 1ull;  if (t) { goto L_0024A8A0; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0024A89C:
    c.r[2].d[0] = c.r[4].d[0] & 1ull;
    c.budget -= 1;
L_0024A8A0:
    c.r[7].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.r[4].d[0] = ld8((c.r[17].w[0] + 5u));
    set32(c.r[3], c.r[2].w[0] << 2);
    set32(c.r[2], 0u - 5u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.r[6].d[0] = c.r[7].d[0] + 0ull;
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[17].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[21].w[0])));
    c.f[0] = ld32((c.r[1].w[0] + 29352u));
    c.f[1] = ld32((c.r[2].w[0] + 304u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 15;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[5].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_0024A8F4; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = ld32((c.r[1].w[0] + 29344u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0024A8F4; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0024A8F4:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_0024A918; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[1] = ld32((c.r[2].w[0] + 312u));
    c.f[0] = ld32((c.r[1].w[0] + 29352u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0024A918; } }
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0024A918:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { goto L_0024A93C; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[1] = ld32((c.r[2].w[0] + 312u));
    c.f[0] = ld32((c.r[1].w[0] + 29344u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0024A93C; } }
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0024A93C:
    c.r[4].d[0] = ld8((c.r[17].w[0] + 5u));
    c.r[2].d[0] = c.r[7].d[0] & 1ull;
    c.r[7].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    set32(c.r[3], c.r[2].w[0] << 4);
    set32(c.r[2], 0u - 17u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.r[6].d[0] = c.r[7].d[0] + 0ull;
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[17].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[21].w[0])));
    c.f[0] = ld32((c.r[1].w[0] + 29336u));
    c.f[1] = ld32((c.r[2].w[0] + 304u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 16;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[5].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_0024A994; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = ld32((c.r[1].w[0] + 29328u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0024A994; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0024A994:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_0024A9B8; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[1] = ld32((c.r[2].w[0] + 312u));
    c.f[0] = ld32((c.r[1].w[0] + 29336u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0024A9B8; } }
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0024A9B8:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { goto L_0024A9DC; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[1] = ld32((c.r[2].w[0] + 312u));
    c.f[0] = ld32((c.r[1].w[0] + 29328u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0024A9DC; } }
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0024A9DC:
    c.r[4].d[0] = ld8((c.r[17].w[0] + 5u));
    c.r[2].d[0] = c.r[7].d[0] & 1ull;
    set32(c.r[3], c.r[2].w[0] << 3);
    set32(c.r[2], 0u - 9u);
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024A9FCu); st8((c.r[17].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x0024A9FCu) [[unlikely]] return; }
L_0024A9FC:
    c.r[3].d[0] = ld8((c.r[2].w[0]));
    c.r[2].d[0] = c.r[3].sd[0] < 41ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0024AA20; } }
    c.r[1].d[0] = c.r[3].sd[0] < 47ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0024AA24; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_0024AA24; } }
L_0024AA20:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0024AA24:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[16], c.r[21].w[0] + 432u);  if (t) { goto L_0024AB10; } }
    set32(c.r[4], ld32((c.r[21].w[0])));
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], ld32((c.r[4].w[0] + 464u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0024AB0C; } }
    c.r[2].d[0] = ld8((c.r[21].w[0] + 429u));
    c.r[2].d[0] = c.r[2].d[0] << 61;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0024AB0C; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 720u)));
    c.r[1].d[0] = c.r[2].sd[0] < 0ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0024AB0C; } }
    c.r[1].d[0] = c.r[2].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0024AB0C; } }
    set32(c.r[4], c.r[2].w[0] << 2);
    set32(c.r[5], c.r[21].w[0] + 520u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], c.r[5].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] + 28320u);
    set32(c.r[4], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0])));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 24u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[3].w[0] + 24u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.budget -= 15;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0024AB0C; } }
    set32(c.r[3], ld32((c.r[21].w[0])));
    set32(c.r[2], ld32((c.r[2].w[0] + 624u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 624u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0024AAD0; } }
    set32(c.r[2], ld32((c.r[5].w[0] + 52u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[5].w[0] + 52u), c.r[2].w[0]);  if (t) { goto L_0024AADC; } }
L_0024AAD0:
    set32(c.r[2], ld32((c.r[5].w[0] + 52u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[5].w[0] + 52u), c.r[2].w[0]);
    c.budget -= 3;
L_0024AADC:
    set32(c.r[2], ld32((c.r[5].w[0] + 52u)));
    c.r[1].d[0] = c.r[2].sd[0] < -8ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[1].d[0] = c.r[2].sd[0] < 9ll ? 1ull : 0ull;  if (t) { goto L_0024AAF8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 8u);  if (t) { goto L_0024AB08; } }
    c.r[1].d[0] = c.r[2].sd[0] < 9ll ? 1ull : 0ull;
    c.budget -= 1;
L_0024AAF8:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0024AB08; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 8u);  if (t) { goto L_0024AB08; } }
L_0024AB08:
    st32((c.r[5].w[0] + 52u), c.r[2].w[0]);
    c.budget -= 1;
L_0024AB0C:
    set32(c.r[16], c.r[21].w[0] + 432u);
    c.budget -= 1;
L_0024AB10:
    set32(c.r[5], 0u + 8u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024AB1Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 111u, depth + 1u); else { c.pc = 0x00141670u; return; } if (c.pc != 0x0024AB1Cu) [[unlikely]] return; }
L_0024AB1C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024AB24u); set32(c.r[4], ld32((c.r[21].w[0])));  if (depth < kMaxDepth) unit_006F(c, 253u, depth + 1u); else { c.pc = 0x002BF0F0u; return; } if (c.pc != 0x0024AB24u) [[unlikely]] return; }
L_0024AB24:
    c.r[4].d[0] = ld8((c.r[16].w[0]));
    c.r[3].d[0] = c.r[2].d[0] & 1ull;
    set32(c.r[2], 0u - 2u);
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[16].w[0]));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 10;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0024ACE4; } }
    set32(c.r[4], ld32((c.r[21].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024AB58u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0059(c, 35u, depth + 1u); else { c.pc = 0x00264680u; return; } if (c.pc != 0x0024AB58u) [[unlikely]] return; }
L_0024AB58:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0024AB8C; } }
    c.r[2].d[0] = ld16((c.r[21].w[0] + 420u));
    c.r[1].d[0] = c.r[2].sd[0] < 770ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0024ABA4; } }
    set32(c.r[3], ld32((c.r[21].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41800000u);
    c.f[0] = c.r[2].w[0];
    c.f[1] = ld32((c.r[3].w[0] + 1024u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0024ABA4; } }
L_0024AB8C:
    c.r[4].d[0] = ld8((c.r[16].w[0]));
    set32(c.r[2], 0u - 5u);
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(4ll);
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 6;
L_0024ABA4:
    set32(c.r[4], ld32((c.r[21].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024ABB0u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0059(c, 35u, depth + 1u); else { c.pc = 0x00264680u; return; } if (c.pc != 0x0024ABB0u) [[unlikely]] return; }
L_0024ABB0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0024ABE4; } }
    c.r[2].d[0] = ld16((c.r[21].w[0] + 420u));
    c.r[1].d[0] = c.r[2].sd[0] < 770ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0024ABFC; } }
    set32(c.r[3], ld32((c.r[21].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41800000u);
    c.f[0] = c.r[2].w[0];
    c.f[1] = ld32((c.r[3].w[0] + 1024u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0024ABFC; } }
L_0024ABE4:
    c.r[4].d[0] = ld8((c.r[16].w[0]));
    set32(c.r[2], 0u - 3u);
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 6;
L_0024ABFC:
    set32(c.r[3], ld32((c.r[21].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41C80000u);
    c.f[0] = c.r[2].w[0];
    c.f[1] = ld32((c.r[3].w[0] + 1024u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0024AC30; } }
    c.r[4].d[0] = ld8((c.r[16].w[0]));
    set32(c.r[2], 0u - 65u);
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(64ll);
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 6;
L_0024AC30:
    c.r[2].d[0] = ld8((c.r[16].w[0]));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0024AC7C; } }
    set32(c.r[2], ld32((c.r[21].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0024AC58; } }
    c.r[2].d[0] = ld8((c.r[2].w[0] + 432u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] & 1ull;  if (t) { goto L_0024AC5C; } }
L_0024AC58:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0024AC5C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0024AC7C; } }
    c.r[4].d[0] = ld8((c.r[16].w[0]));
    set32(c.r[2], 0u - 33u);
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(32ll);
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 6;
L_0024AC7C:
    set32(c.r[3], ld32((c.r[21].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41C80000u);
    c.f[0] = c.r[2].w[0];
    c.f[1] = ld32((c.r[3].w[0] + 1024u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0024ACB0; } }
    c.r[4].d[0] = ld8((c.r[16].w[0]));
    set32(c.r[2], 0u - 9u);
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(8ll);
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 6;
L_0024ACB0:
    set32(c.r[3], ld32((c.r[21].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41C80000u);
    c.f[0] = c.r[2].w[0];
    c.f[1] = ld32((c.r[3].w[0] + 1024u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0024ACE4; } }
    c.r[4].d[0] = ld8((c.r[16].w[0]));
    set32(c.r[2], 0u - 17u);
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(16ll);
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 6;
L_0024ACE4:
    set32(c.r[4], ld32((c.r[21].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024ACF0u); c.r[17].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (depth < kMaxDepth) unit_006F(c, 236u, depth + 1u); else { c.pc = 0x002BE990u; return; } if (c.pc != 0x0024ACF0u) [[unlikely]] return; }
L_0024ACF0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0024AD14; } }
    set32(c.r[2], ld32((c.r[21].w[0])));
    c.r[2].d[0] = ld64((c.r[2].w[0] + 712u));
    c.r[2].d[0] = c.r[2].d[0] & 224ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0024AD14; } }
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0024AD14:
    c.r[4].d[0] = ld8((c.r[16].w[0]));
    c.r[2].d[0] = c.r[17].d[0] & 1ull;
    set32(c.r[3], c.r[2].w[0] << 7);
    set32(c.r[2], 0u - 129u);
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[4], ld32((c.r[21].w[0])));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024AD3Cu); c.r[17].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (depth < kMaxDepth) unit_006F(c, 233u, depth + 1u); else { c.pc = 0x002BE810u; return; } if (c.pc != 0x0024AD3Cu) [[unlikely]] return; }
L_0024AD3C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0024AD60; } }
    set32(c.r[2], ld32((c.r[21].w[0])));
    c.r[2].d[0] = ld64((c.r[2].w[0] + 712u));
    c.r[2].d[0] = c.r[2].d[0] & 224ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0024AD60; } }
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0024AD60:
    c.r[4].d[0] = ld8((c.r[16].w[0] + 1u));
    set32(c.r[2], 0u - 2u);
    c.r[3].d[0] = c.r[17].d[0] & 1ull;
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 7;
    { const bool t = c.r[20].d[0] == 0ull; st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0024ADB0; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], ld32((c.r[1].w[0] - 27920u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0024ADB0; } }
    set32(c.r[2], ld32((c.r[21].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024AD98u); set32(c.r[5], c.r[2].w[0] + 224u);  if (depth < kMaxDepth) unit_004C(c, 278u, depth + 1u); else { c.pc = 0x00232450u; return; } if (c.pc != 0x0024AD98u) [[unlikely]] return; }
L_0024AD98:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0024ADB0; } }
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[21].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024ADB0u); set32(c.r[6], 0u + 96u);  if (depth < kMaxDepth) unit_0010(c, 107u, depth + 1u); else { c.pc = 0x001415A0u; return; } if (c.pc != 0x0024ADB0u) [[unlikely]] return; }
L_0024ADB0:
    set32(c.r[4], ld32((c.r[21].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00060000u);
    c.r[3].d[0] = c.r[2].d[0] << 32;
    set32(c.r[17], c.r[21].w[0] + 280u);
    set32(c.r[2], 0u + 4u);
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.r[3].d[0] = ld64((c.r[4].w[0] + 704u));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[21].w[0] + 312u);  if (t) { goto L_0024ADEC; } }
    c.r[2].d[0] = c.r[3].d[0] & 48ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0024ADFC; } }
L_0024ADEC:
    set32(c.r[2], ld32((c.r[16].w[0] + 24u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 24u), c.r[2].w[0]);  if (t) { goto L_0024AE00; } }
L_0024ADFC:
    st32((c.r[16].w[0] + 24u), 0u);
    c.budget -= 1;
L_0024AE00:
    set32(c.r[4], ld32((c.r[21].w[0])));
    set32(c.r[2], 0u + 1u);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 371u));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0024AE30; } }
    c.r[2].d[0] = ld64((c.r[4].w[0] + 712u));
    c.r[2].d[0] = c.r[2].d[0] & 224ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0024AE30; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 36u), 0u);  if (t) { goto L_0024AE3C; } }
L_0024AE30:
    set32(c.r[2], ld32((c.r[16].w[0] + 36u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[16].w[0] + 36u), c.r[2].w[0]);
    c.budget -= 3;
L_0024AE3C:
    set32(c.r[2], ld32((c.r[21].w[0])));
    c.r[2].d[0] = ld64((c.r[2].w[0] + 704u));
    c.r[2].d[0] = c.r[2].d[0] & 3ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0024AE5C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 68u), 0u);  if (t) { goto L_0024AED8; } }
L_0024AE5C:
    set32(c.r[2], ld32((c.r[16].w[0] + 68u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0024AE70; } }
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[16].w[0] + 68u), c.r[2].w[0]);
    c.budget -= 2;
L_0024AE70:
    set32(c.r[4], ld32((c.r[21].w[0])));
    set32(c.r[2], 0u + 1u);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 371u));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0024AEA4; } }
    c.r[2].d[0] = ld64((c.r[4].w[0] + 712u));
    c.r[2].d[0] = c.r[2].d[0] & 64ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0024AEA4; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 68u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[16].w[0] + 68u), c.r[2].w[0]);
    c.budget -= 3;
L_0024AEA4:
    set32(c.r[3], ld32((c.r[21].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00800000u);
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[3].d[0] = ld64((c.r[3].w[0] + 704u));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0024AED4; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 72u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 72u), c.r[2].w[0]);  if (t) { goto L_0024AED8; } }
L_0024AED4:
    st32((c.r[16].w[0] + 72u), 0u);
    c.budget -= 1;
L_0024AED8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024AEE0u); set32(c.r[4], ld32((c.r[21].w[0])));  if (depth < kMaxDepth) unit_0059(c, 63u, depth + 1u); else { c.pc = 0x00264E40u; return; } if (c.pc != 0x0024AEE0u) [[unlikely]] return; }
L_0024AEE0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0024AEF4; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 31456u)));
    st64((c.r[16].w[0]), c.r[2].d[0]);
    c.budget -= 3;
L_0024AEF4:
    set32(c.r[2], ld32((c.r[21].w[0])));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 370u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0024AF28; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 8896u)));
    c.r[1].d[0] = c.r[2].sd[0] < 30ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0024AF28; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 44u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 44u), c.r[2].w[0]);  if (t) { goto L_0024AF2C; } }
L_0024AF28:
    st32((c.r[16].w[0] + 44u), 0u);
    c.budget -= 1;
L_0024AF2C:
    set32(c.r[2], ld32((c.r[21].w[0])));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 371u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0024AF50; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 20u), 0u);  if (t) { goto L_0024AF60; } }
L_0024AF50:
    set32(c.r[2], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 16u), 0u);
    c.budget -= 4;
L_0024AF60:
    set32(c.r[4], ld32((c.r[21].w[0])));
    set32(c.r[2], 0u + 3u);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 371u));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0024AF8C; } }
    set32(c.r[2], 0u + 6u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0024AF8C; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0024AFBC; } }
L_0024AF8C:
    c.r[2].d[0] = ld8((c.r[4].w[0] + 370u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0024AFBC; } }
    c.r[2].d[0] = ld64((c.r[4].w[0] + 712u));
    c.r[2].d[0] = c.r[2].d[0] & 224ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0024AFBC; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 32u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 32u), c.r[2].w[0]);  if (t) { goto L_0024AFC0; } }
L_0024AFBC:
    st32((c.r[16].w[0] + 32u), 0u);
    c.budget -= 1;
L_0024AFC0:
    set32(c.r[3], ld32((c.r[21].w[0])));
    c.r[2].d[0] = ld8((c.r[3].w[0] + 370u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0024B014; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 464u)));
    set32(c.r[2], c.r[2].w[0] - 3u);
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(7ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_0024AFFC; } }
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], c.r[3].w[0] << (c.r[2].w[0] & 31u));
    c.r[2].d[0] = c.r[2].d[0] & 113ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0024AFFC; } }
    c.r[4].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 1;
L_0024AFFC:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0024B014; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 28u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 28u), c.r[2].w[0]);  if (t) { goto L_0024B018; } }
L_0024B014:
    st32((c.r[16].w[0] + 28u), 0u);
    c.budget -= 1;
L_0024B018:
    set32(c.r[2], ld32((c.r[21].w[0])));
    set32(c.r[3], ld32((c.r[21].w[0] + 772u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 724u)));
    c.r[1].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0024B048; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 31456u)));
    st32((c.r[16].w[0] + 56u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 28u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[17].w[0] + 28u), c.r[2].w[0]);
    c.budget -= 6;
L_0024B048:
    set32(c.r[3], ld32((c.r[16].w[0] + 56u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 31456u)));
    set32(c.r[3], c.r[3].w[0] + 300u);
    c.r[1].d[0] = c.r[3].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0024B068; } }
    st32((c.r[17].w[0] + 28u), 0u);
    c.budget -= 1;
L_0024B068:
    set32(c.r[2], ld32((c.r[21].w[0])));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 371u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0024B0D4; } }
    set32(c.r[3], ld32((c.r[23].w[0] + 464u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0024B0C4; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_0024B0B4; } }
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    c.r[2].d[0] = ld8((c.r[23].w[0] + 371u));
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0024B0A8; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0024B0A8:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; c.r[2].d[0] = 0ull < c.r[4].d[0] ? 1ull : 0ull;  if (t) { goto L_0024B0B8; } }
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_0024B0B4:
    c.r[2].d[0] = 0ull < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 1;
L_0024B0B8:
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0024B0D4; } }
L_0024B0C4:
    set32(c.r[2], ld32((c.r[16].w[0] + 64u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 64u), c.r[2].w[0]);  if (t) { goto L_0024B0D8; } }
L_0024B0D4:
    st32((c.r[16].w[0] + 64u), 0u);
    c.budget -= 1;
L_0024B0D8:
    set32(c.r[4], ld32((c.r[21].w[0])));
    c.r[2].d[0] = ld8((c.r[4].w[0] + 371u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0024B174; } }
    c.r[2].d[0] = ld64((c.r[4].w[0] + 704u));
    c.r[2].d[0] = c.r[2].d[0] & 3ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0024B164; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024B104u);  if (depth < kMaxDepth) unit_0059(c, 49u, depth + 1u); else { c.pc = 0x00264A00u; return; } if (c.pc != 0x0024B104u) [[unlikely]] return; }
L_0024B104:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0024B164; } }
    set32(c.r[4], ld32((c.r[21].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00060000u);
    c.r[3].d[0] = c.r[2].d[0] << 32;
    set32(c.r[2], 0u + 4u);
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.r[3].d[0] = ld64((c.r[4].w[0] + 704u));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0024B164; } }
    set32(c.r[2], 0u + 24576u);
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0024B164; } }
    set32(c.r[2], 0u + 1024u);
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0024B174; } }
L_0024B164:
    set32(c.r[2], ld32((c.r[16].w[0] + 52u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 52u), c.r[2].w[0]);  if (t) { goto L_0024B178; } }
L_0024B174:
    st32((c.r[16].w[0] + 52u), 0u);
    c.budget -= 1;
L_0024B178:
    set32(c.r[2], ld32((c.r[21].w[0])));
    set32(c.r[3], ld32((c.r[2].w[0] + 984u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0024B1A0; } }
    set32(c.r[5], c.r[2].w[0] + 224u);
    set32(c.r[6], c.r[3].w[0] + 224u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024B198u); set32(c.r[4], c.r[29].w[0] + 396u);  if (depth < kMaxDepth) unit_005C(c, 29u, depth + 1u); else { c.pc = 0x002705F0u; return; } if (c.pc != 0x0024B198u) [[unlikely]] return; }
L_0024B198:
    c.r[2].d[0] = ld16((c.r[29].w[0] + 396u));
    st16((c.r[21].w[0] + 392u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 2;
L_0024B1A0:
    set32(c.r[2], ld32((c.r[21].w[0])));
    set32(c.r[4], c.r[29].w[0] + 392u);
    set32(c.r[3], ld32((c.r[2].w[0] + 68u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 984u)));
    set32(c.r[5], c.r[3].w[0] + 48u);
    set32(c.r[2], ld32((c.r[2].w[0] + 68u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024B1C0u); set32(c.r[6], c.r[2].w[0] + 48u);  if (depth < kMaxDepth) unit_005C(c, 28u, depth + 1u); else { c.pc = 0x002705E0u; return; } if (c.pc != 0x0024B1C0u) [[unlikely]] return; }
L_0024B1C0:
    c.r[4].d[0] = ld16((c.r[29].w[0] + 392u));
    set32(c.r[3], c.r[29].w[0] + 352u);
    set32(c.r[2], 0u + 16u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull; st16((c.r[21].w[0] + 392u), static_cast<std::uint16_t>(c.r[4].w[0]));  if (t) { goto L_0024B1F0; } }
L_0024B1D4:
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[2], c.r[2].w[0] - 1u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0024B1D4u | kUnwind; return; } goto L_0024B1D4; } }
L_0024B1F0:
    set32(c.r[2], ld32((c.r[21].w[0])));
    set32(c.r[4], c.r[29].w[0] + 388u);
    set32(c.r[6], c.r[29].w[0] + 352u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024B204u); set32(c.r[5], c.r[2].w[0] + 224u);  if (depth < kMaxDepth) unit_005C(c, 29u, depth + 1u); else { c.pc = 0x002705F0u; return; } if (c.pc != 0x0024B204u) [[unlikely]] return; }
L_0024B204:
    c.r[2].d[0] = ld16((c.r[29].w[0] + 388u));
    st16((c.r[21].w[0] + 394u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[21].w[0])));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024B218u); c.r[4].d[0] = ld8((c.r[2].w[0] + 368u));  if (depth < kMaxDepth) unit_005C(c, 38u, depth + 1u); else { c.pc = 0x00270F60u; return; } if (c.pc != 0x0024B218u) [[unlikely]] return; }
L_0024B218:
    st16((c.r[21].w[0] + 396u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[21].w[0])));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024B228u); c.r[4].d[0] = ld8((c.r[2].w[0] + 369u));  if (depth < kMaxDepth) unit_005C(c, 37u, depth + 1u); else { c.pc = 0x00270F30u; return; } if (c.pc != 0x0024B228u) [[unlikely]] return; }
L_0024B228:
    st16((c.r[21].w[0] + 400u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024B234u); c.r[4].d[0] = ld16((c.r[21].w[0] + 396u));  if (depth < kMaxDepth) unit_005C(c, 25u, depth + 1u); else { c.pc = 0x00270480u; return; } if (c.pc != 0x0024B234u) [[unlikely]] return; }
L_0024B234:
    st16((c.r[21].w[0] + 398u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024B240u); c.r[4].d[0] = ld16((c.r[21].w[0] + 400u));  if (depth < kMaxDepth) unit_005C(c, 25u, depth + 1u); else { c.pc = 0x00270480u; return; } if (c.pc != 0x0024B240u) [[unlikely]] return; }
L_0024B240:
    st16((c.r[21].w[0] + 402u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[21].w[0])));
    set32(c.r[3], ld32((c.r[2].w[0] + 984u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[4], c.r[29].w[0] + 380u);  if (t) { goto L_0024B270; } }
    set32(c.r[5], c.r[2].w[0] + 224u);
    set32(c.r[6], c.r[3].w[0] + 224u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024B264u); set32(c.r[4], c.r[29].w[0] + 384u);  if (depth < kMaxDepth) unit_005C(c, 34u, depth + 1u); else { c.pc = 0x00270B40u; return; } if (c.pc != 0x0024B264u) [[unlikely]] return; }
L_0024B264:
    c.r[2].d[0] = ld16((c.r[29].w[0] + 384u));
    st16((c.r[21].w[0] + 404u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[4], c.r[29].w[0] + 380u);
    c.budget -= 3;
L_0024B270:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024B278u); set32(c.r[5], c.r[21].w[0] + 404u);  if (depth < kMaxDepth) unit_005C(c, 24u, depth + 1u); else { c.pc = 0x00270400u; return; } if (c.pc != 0x0024B278u) [[unlikely]] return; }
L_0024B278:
    c.r[2].d[0] = ld16((c.r[29].w[0] + 380u));
    set32(c.r[4], c.r[21].w[0] + 576u);
    set32(c.r[6], 0u + 8u);
    st16((c.r[21].w[0] + 404u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[21].w[0])));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024B294u); set32(c.r[5], c.r[2].w[0] + 704u);  if (depth < kMaxDepth) unit_0010(c, 107u, depth + 1u); else { c.pc = 0x001415A0u; return; } if (c.pc != 0x0024B294u) [[unlikely]] return; }
L_0024B294:
    set32(c.r[2], ld32((c.r[21].w[0])));
    set32(c.r[4], c.r[21].w[0] + 592u);
    set32(c.r[6], 0u + 368u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024B2A8u); set32(c.r[5], c.r[2].w[0] + 544u);  if (depth < kMaxDepth) unit_0010(c, 107u, depth + 1u); else { c.pc = 0x001415A0u; return; } if (c.pc != 0x0024B2A8u) [[unlikely]] return; }
L_0024B2A8:
    set32(c.r[2], ld32((c.r[21].w[0])));
    set32(c.r[2], ld32((c.r[2].w[0] + 164u)));
    st32((c.r[21].w[0] + 960u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[21].w[0])));
    set32(c.r[2], ld32((c.r[2].w[0] + 168u)));
    st32((c.r[21].w[0] + 964u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[21].w[0])));
    set32(c.r[2], ld32((c.r[2].w[0] + 172u)));
    st32((c.r[21].w[0] + 968u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[21].w[0])));
    set32(c.r[2], ld32((c.r[2].w[0] + 176u)));
    st32((c.r[21].w[0] + 972u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[21].w[0])));
    set32(c.r[2], ld32((c.r[2].w[0] + 180u)));
    st32((c.r[21].w[0] + 976u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[21].w[0])));
    set32(c.r[2], ld32((c.r[2].w[0] + 184u)));
    st32((c.r[21].w[0] + 980u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[21].w[0])));
    set32(c.r[2], ld32((c.r[2].w[0] + 188u)));
    st32((c.r[21].w[0] + 984u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[21].w[0])));
    set32(c.r[2], ld32((c.r[2].w[0] + 192u)));
    c.budget -= 25;
    { const bool t = c.r[19].d[0] == 0ull; st32((c.r[21].w[0] + 988u), c.r[2].w[0]);  if (t) { goto L_0024B820; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024B314u); st32((c.r[21].w[0] + 512u), 0u);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x0024B314u) [[unlikely]] return; }
L_0024B314:
    c.r[2].d[0] = ld8((c.r[2].w[0] + 20u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0024B76C; } }
    set32(c.r[2], ld32((c.r[21].w[0] + 4u)));
    set32(c.r[5], c.r[29].w[0] + 272u);
    set32(c.r[4], 0u + 10u);
    set32(c.r[6], c.r[2].w[0] + 440u);
    c.budget -= 4;
L_0024B330:
    set32(c.r[3], ld32((c.r[6].w[0])));
    set32(c.r[4], c.r[4].w[0] - 1u);
    set32(c.r[2], ld32((c.r[6].w[0] + 4u)));
    st32((c.r[5].w[0]), c.r[3].w[0]);
    set32(c.r[6], c.r[6].w[0] + 8u);
    st32((c.r[5].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 8;
    { const bool t = c.r[4].sd[0] > 0; set32(c.r[5], c.r[5].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0024B330u | kUnwind; return; } goto L_0024B330; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 272u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st32((c.r[21].w[0] + 444u), c.r[2].w[0]);
    set32(c.r[17], ld32((c.r[21].w[0])));
    set32(c.r[16], ld32((c.r[1].w[0] - 27912u)));
    set32(c.r[19], ld32((c.r[17].w[0] + 984u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[30], ld32((c.r[17].w[0] + 240u)));
    set32(c.r[20], ld32((c.r[1].w[0] - 27908u)));
    set32(c.r[2], ld32((c.r[19].w[0] + 240u)));
    c.budget -= 12;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[29].w[0] + 176u), c.r[2].w[0]);  if (t) { goto L_0024B754; } }
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == 0ull; set32(c.r[4], c.r[21].w[0] + 440u);  if (t) { goto L_0024B758; } }
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024B394u); c.r[18].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006F(c, 228u, depth + 1u); else { c.pc = 0x002BE610u; return; } if (c.pc != 0x0024B394u) [[unlikely]] return; }
L_0024B394:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0024B3D4; } }
    c.r[2].d[0] = ld8((c.r[17].w[0] + 370u));
    c.r[2].d[0] = c.r[2].d[0] ^ 10ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0024B3BC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024B3B8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0034(c, 173u, depth + 1u); else { c.pc = 0x001D2260u; return; } if (c.pc != 0x0024B3B8u) [[unlikely]] return; }
L_0024B3B8:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 1;
L_0024B3BC:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0024B3D4; } }
    c.r[18].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_0024B3D4:
    set32(c.r[4], ld32((c.r[21].w[0] + 4u)));
    c.r[23].d[0] = c.r[18].d[0] & 255ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024B3E4u); c.r[18].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006F(c, 228u, depth + 1u); else { c.pc = 0x002BE610u; return; } if (c.pc != 0x0024B3E4u) [[unlikely]] return; }
L_0024B3E4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0024B424; } }
    c.r[2].d[0] = ld8((c.r[17].w[0] + 370u));
    c.r[2].d[0] = c.r[2].d[0] ^ 10ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0024B40C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024B408u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0034(c, 173u, depth + 1u); else { c.pc = 0x001D2260u; return; } if (c.pc != 0x0024B408u) [[unlikely]] return; }
L_0024B408:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 1;
L_0024B40C:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0024B424; } }
    c.r[18].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_0024B424:
    c.r[2].d[0] = c.r[18].d[0] & 255ull;
    st8((c.r[29].w[0] + 160u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[17].w[0] + 370u));
    c.r[2].d[0] = c.r[2].d[0] ^ 10ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; c.r[18].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_0024B44C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024B448u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0034(c, 173u, depth + 1u); else { c.pc = 0x001D2260u; return; } if (c.pc != 0x0024B448u) [[unlikely]] return; }
L_0024B448:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 1;
L_0024B44C:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0024B464; } }
    c.budget -= 2;
    { const bool t = c.r[23].d[0] != 0ull;  if (t) { goto L_0024B464; } }
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0024B464:
    c.r[2].d[0] = ld8((c.r[19].w[0] + 370u));
    c.r[18].d[0] = c.r[18].d[0] & 255ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 10ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; c.r[22].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_0024B488; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024B484u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0034(c, 173u, depth + 1u); else { c.pc = 0x001D2260u; return; } if (c.pc != 0x0024B484u) [[unlikely]] return; }
L_0024B484:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 1;
L_0024B488:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0024B4A4; } }
    c.r[2].d[0] = ld8((c.r[29].w[0] + 160u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = c.r[22].d[0] & 255ull;  if (t) { goto L_0024B4A8; } }
    c.r[22].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0024B4A4:
    c.r[2].d[0] = c.r[22].d[0] & 255ull;
    c.budget -= 1;
L_0024B4A8:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_0024B54C; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0024B54C; } }
    c.r[5].d[0] = c.r[30].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024B4C4u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_004C(c, 346u, depth + 1u); else { c.pc = 0x00232F10u; return; } if (c.pc != 0x0024B4C4u) [[unlikely]] return; }
L_0024B4C4:
    set32(c.r[5], ld32((c.r[29].w[0] + 176u)));
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024B4D4u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_004C(c, 346u, depth + 1u); else { c.pc = 0x00232F10u; return; } if (c.pc != 0x0024B4D4u) [[unlikely]] return; }
L_0024B4D4:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_0024B924; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0024B4EC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));  if (t) { goto L_0024B928; } }
L_0024B4EC:
    set32(c.r[16], ld32((c.r[20].w[0] + 60u)));
    st32((c.r[21].w[0] + 516u), c.r[17].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 212u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[21].w[0] + 440u), c.r[3].w[0]);  if (t) { goto L_0024B50C; } }
    set32(c.r[2], ld32((c.r[2].w[0] + 212u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[21].w[0] + 444u), c.r[2].w[0]);  if (t) { goto L_0024B510; } }
L_0024B50C:
    st32((c.r[21].w[0] + 444u), 0u);
    c.budget -= 1;
L_0024B510:
    set32(c.r[5], ld32((c.r[21].w[0] + 440u)));
    set32(c.r[6], ld32((c.r[21].w[0] + 444u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024B520u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0097(c, 104u, depth + 1u); else { c.pc = 0x0035D4B0u; return; } if (c.pc != 0x0024B520u) [[unlikely]] return; }
L_0024B520:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_0024B53C; } }
    set32(c.r[5], c.r[16].w[0] + 12u);
    set32(c.r[4], c.r[21].w[0] + 448u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024B53Cu); set32(c.r[6], 0u + 60u);  if (depth < kMaxDepth) unit_0009(c, 40u, depth + 1u); else { c.pc = 0x00124D20u; return; } if (c.pc != 0x0024B53Cu) [[unlikely]] return; }
L_0024B53C:
    st32((c.r[21].w[0] + 508u), c.r[17].w[0]);
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[21].w[0] + 512u), c.r[2].w[0]);  if (t) { goto L_0024B820; } }
L_0024B54C:
    c.budget -= 2;
    { const bool t = c.r[23].d[0] == 0ull;  if (t) { goto L_0024B5D8; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0024B5D8; } }
    c.r[5].d[0] = c.r[30].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024B568u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_004C(c, 346u, depth + 1u); else { c.pc = 0x00232F10u; return; } if (c.pc != 0x0024B568u) [[unlikely]] return; }
L_0024B568:
    set32(c.r[5], ld32((c.r[29].w[0] + 176u)));
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024B578u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_004C(c, 346u, depth + 1u); else { c.pc = 0x00232F10u; return; } if (c.pc != 0x0024B578u) [[unlikely]] return; }
L_0024B578:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_0024B924; } }
    set32(c.r[16], ld32((c.r[16].w[0] + 60u)));
    st32((c.r[21].w[0] + 516u), c.r[17].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 212u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[21].w[0] + 440u), c.r[3].w[0]);  if (t) { goto L_0024B5A0; } }
    set32(c.r[2], ld32((c.r[2].w[0] + 212u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[21].w[0] + 444u), c.r[2].w[0]);  if (t) { goto L_0024B5A4; } }
L_0024B5A0:
    st32((c.r[21].w[0] + 444u), 0u);
    c.budget -= 1;
L_0024B5A4:
    set32(c.r[5], ld32((c.r[21].w[0] + 440u)));
    set32(c.r[6], ld32((c.r[21].w[0] + 444u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024B5B4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0097(c, 104u, depth + 1u); else { c.pc = 0x0035D4B0u; return; } if (c.pc != 0x0024B5B4u) [[unlikely]] return; }
L_0024B5B4:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_0024B5D0; } }
    set32(c.r[5], c.r[16].w[0] + 12u);
    set32(c.r[4], c.r[21].w[0] + 448u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024B5D0u); set32(c.r[6], 0u + 60u);  if (depth < kMaxDepth) unit_0009(c, 40u, depth + 1u); else { c.pc = 0x00124D20u; return; } if (c.pc != 0x0024B5D0u) [[unlikely]] return; }
L_0024B5D0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[21].w[0] + 508u), c.r[17].w[0]);  if (t) { goto L_0024B820; } }
L_0024B5D8:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != 0ull;  if (t) { goto L_0024B668; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0024B668; } }
    set32(c.r[5], c.r[17].w[0] + 224u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024B5F4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_004C(c, 346u, depth + 1u); else { c.pc = 0x00232F10u; return; } if (c.pc != 0x0024B5F4u) [[unlikely]] return; }
L_0024B5F4:
    set32(c.r[5], c.r[19].w[0] + 224u);
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024B604u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_004C(c, 346u, depth + 1u); else { c.pc = 0x00232F10u; return; } if (c.pc != 0x0024B604u) [[unlikely]] return; }
L_0024B604:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_0024B924; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0024B61C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0024B924; } }
L_0024B61C:
    set32(c.r[16], ld32((c.r[16].w[0] + 60u)));
    st32((c.r[21].w[0] + 516u), c.r[17].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 212u)));
    st32((c.r[21].w[0] + 440u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 212u)));
    st32((c.r[21].w[0] + 444u), c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[21].w[0] + 440u)));
    set32(c.r[6], ld32((c.r[21].w[0] + 444u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024B644u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0097(c, 104u, depth + 1u); else { c.pc = 0x0035D4B0u; return; } if (c.pc != 0x0024B644u) [[unlikely]] return; }
L_0024B644:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_0024B660; } }
    set32(c.r[5], c.r[16].w[0] + 12u);
    set32(c.r[4], c.r[21].w[0] + 448u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024B660u); set32(c.r[6], 0u + 60u);  if (depth < kMaxDepth) unit_0009(c, 40u, depth + 1u); else { c.pc = 0x00124D20u; return; } if (c.pc != 0x0024B660u) [[unlikely]] return; }
L_0024B660:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[21].w[0] + 508u), c.r[17].w[0]);  if (t) { goto L_0024B820; } }
L_0024B668:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != 0ull;  if (t) { goto L_0024B6D8; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0024B6D8; } }
    set32(c.r[2], ld32((c.r[21].w[0])));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024B688u); set32(c.r[5], c.r[2].w[0] + 224u);  if (depth < kMaxDepth) unit_004C(c, 346u, depth + 1u); else { c.pc = 0x00232F10u; return; } if (c.pc != 0x0024B688u) [[unlikely]] return; }
L_0024B688:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0024B924; } }
    set32(c.r[16], ld32((c.r[16].w[0] + 60u)));
    st32((c.r[21].w[0] + 516u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 212u)));
    st32((c.r[21].w[0] + 440u), c.r[2].w[0]);
    st32((c.r[21].w[0] + 444u), 0u);
    set32(c.r[5], ld32((c.r[21].w[0] + 440u)));
    set32(c.r[6], ld32((c.r[21].w[0] + 444u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024B6B4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0097(c, 104u, depth + 1u); else { c.pc = 0x0035D4B0u; return; } if (c.pc != 0x0024B6B4u) [[unlikely]] return; }
L_0024B6B4:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_0024B6D0; } }
    set32(c.r[5], c.r[16].w[0] + 12u);
    set32(c.r[4], c.r[21].w[0] + 448u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024B6D0u); set32(c.r[6], 0u + 60u);  if (depth < kMaxDepth) unit_0009(c, 40u, depth + 1u); else { c.pc = 0x00124D20u; return; } if (c.pc != 0x0024B6D0u) [[unlikely]] return; }
L_0024B6D0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[21].w[0] + 508u), c.r[17].w[0]);  if (t) { goto L_0024B820; } }
L_0024B6D8:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_0024B820; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0024B820; } }
    set32(c.r[2], ld32((c.r[21].w[0])));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024B6F8u); set32(c.r[5], c.r[2].w[0] + 224u);  if (depth < kMaxDepth) unit_004C(c, 346u, depth + 1u); else { c.pc = 0x00232F10u; return; } if (c.pc != 0x0024B6F8u) [[unlikely]] return; }
L_0024B6F8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0024B924; } }
    set32(c.r[16], ld32((c.r[20].w[0] + 60u)));
    set32(c.r[3], 0u + 3u);
    st32((c.r[21].w[0] + 516u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 212u)));
    st32((c.r[21].w[0] + 440u), c.r[2].w[0]);
    st32((c.r[21].w[0] + 444u), c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[21].w[0] + 440u)));
    set32(c.r[6], ld32((c.r[21].w[0] + 444u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024B728u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0097(c, 104u, depth + 1u); else { c.pc = 0x0035D4B0u; return; } if (c.pc != 0x0024B728u) [[unlikely]] return; }
L_0024B728:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_0024B744; } }
    set32(c.r[5], c.r[16].w[0] + 12u);
    set32(c.r[4], c.r[21].w[0] + 448u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024B744u); set32(c.r[6], 0u + 60u);  if (depth < kMaxDepth) unit_0009(c, 40u, depth + 1u); else { c.pc = 0x00124D20u; return; } if (c.pc != 0x0024B744u) [[unlikely]] return; }
L_0024B744:
    st32((c.r[21].w[0] + 508u), c.r[17].w[0]);
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[21].w[0] + 512u), c.r[2].w[0]);  if (t) { goto L_0024B820; } }
L_0024B754:
    set32(c.r[4], c.r[21].w[0] + 440u);
    c.budget -= 1;
L_0024B758:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024B764u); set32(c.r[6], 0u + 80u);  if (depth < kMaxDepth) unit_0009(c, 49u, depth + 1u); else { c.pc = 0x00124ED8u; return; } if (c.pc != 0x0024B764u) [[unlikely]] return; }
L_0024B764:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[21].w[0] + 4u)));  if (t) { goto L_0024B824; } }
L_0024B76C:
    set32(c.r[2], ld32((c.r[21].w[0] + 4u)));
    set32(c.r[5], c.r[29].w[0] + 192u);
    set32(c.r[4], 0u + 10u);
    set32(c.r[6], c.r[2].w[0] + 440u);
    c.budget -= 4;
L_0024B77C:
    set32(c.r[3], ld32((c.r[6].w[0])));
    set32(c.r[4], c.r[4].w[0] - 1u);
    set32(c.r[2], ld32((c.r[6].w[0] + 4u)));
    st32((c.r[5].w[0]), c.r[3].w[0]);
    set32(c.r[6], c.r[6].w[0] + 8u);
    st32((c.r[5].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 8;
    { const bool t = c.r[4].sd[0] > 0; set32(c.r[5], c.r[5].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0024B77Cu | kUnwind; return; } goto L_0024B77C; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 192u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st32((c.r[21].w[0] + 444u), c.r[2].w[0]);
    set32(c.r[16], ld32((c.r[1].w[0] - 27912u)));
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == 0ull; set32(c.r[4], c.r[21].w[0] + 440u);  if (t) { goto L_0024B814; } }
    set32(c.r[2], ld32((c.r[21].w[0])));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024B7C4u); set32(c.r[5], c.r[2].w[0] + 224u);  if (depth < kMaxDepth) unit_004C(c, 346u, depth + 1u); else { c.pc = 0x00232F10u; return; } if (c.pc != 0x0024B7C4u) [[unlikely]] return; }
L_0024B7C4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0024B924; } }
    set32(c.r[16], ld32((c.r[16].w[0] + 60u)));
    st32((c.r[21].w[0] + 516u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 212u)));
    st32((c.r[21].w[0] + 440u), c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[21].w[0] + 440u)));
    set32(c.r[6], ld32((c.r[21].w[0] + 444u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024B7ECu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0097(c, 104u, depth + 1u); else { c.pc = 0x0035D4B0u; return; } if (c.pc != 0x0024B7ECu) [[unlikely]] return; }
L_0024B7EC:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_0024B808; } }
    set32(c.r[5], c.r[16].w[0] + 12u);
    set32(c.r[4], c.r[21].w[0] + 448u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024B808u); set32(c.r[6], 0u + 60u);  if (depth < kMaxDepth) unit_0009(c, 40u, depth + 1u); else { c.pc = 0x00124D20u; return; } if (c.pc != 0x0024B808u) [[unlikely]] return; }
L_0024B808:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[21].w[0] + 508u), c.r[17].w[0]);  if (t) { goto L_0024B820; } }
    set32(c.r[4], c.r[21].w[0] + 440u);
    c.budget -= 1;
L_0024B814:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024B820u); set32(c.r[6], 0u + 80u);  if (depth < kMaxDepth) unit_0009(c, 49u, depth + 1u); else { c.pc = 0x00124ED8u; return; } if (c.pc != 0x0024B820u) [[unlikely]] return; }
L_0024B820:
    set32(c.r[2], ld32((c.r[21].w[0] + 4u)));
    c.budget -= 1;
L_0024B824:
    set32(c.r[3], ld32((c.r[21].w[0])));
    set32(c.r[16], ld32((c.r[2].w[0] + 8u)));
    set32(c.r[17], c.r[3].w[0] + 224u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024B838u); st32((c.r[21].w[0] + 16u), 0u);  if (depth < kMaxDepth) unit_003D(c, 81u, depth + 1u); else { c.pc = 0x001F53D0u; return; } if (c.pc != 0x0024B838u) [[unlikely]] return; }
L_0024B838:
    set32(c.r[3], 0u + 33u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0024B89C; } }
    set32(c.r[3], 0u + 32u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0024B864; } }
    set32(c.r[3], 0u + 30u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0024B924; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0024B924; } }
L_0024B864:
    c.f[1] = ld32((c.r[17].w[0] + 8u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41F00000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[3], 0u + 1u);  if (t) { goto L_0024B88C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[21].w[0] + 8u), 0u);  if (t) { goto L_0024B890; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_0024B88C:
    st32((c.r[21].w[0] + 8u), c.r[3].w[0]);
    c.budget -= 1;
L_0024B890:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[21].w[0] + 16u), c.r[3].w[0]);  if (t) { goto L_0024B924; } }
L_0024B89C:
    set32(c.r[4], ld32((c.r[21].w[0] + 32u)));
    set32(c.r[3], 0u + 213u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 5u);  if (t) { goto L_0024B918; } }
    set32(c.r[3], 0u + 214u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0024B90C; } }
    set32(c.r[3], 0u + 215u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0024B8CC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 2u);  if (t) { goto L_0024B920; } }
L_0024B8CC:
    c.f[1] = ld32((c.r[17].w[0] + 8u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[3], 0u + 3u);  if (t) { goto L_0024B8F0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 4u);  if (t) { goto L_0024B8F0; } }
    set32(c.r[3], 0u + 3u);
    c.budget -= 1;
L_0024B8F0:
    st32((c.r[21].w[0] + 8u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[21].w[0] + 8u)));
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == c.r[3].d[0];  if (t) { goto L_0024B91C; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[21].w[0] + 16u), c.r[3].w[0]);  if (t) { goto L_0024B91C; } }
L_0024B90C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[21].w[0] + 8u), 0u);  if (t) { goto L_0024B91C; } }
    set32(c.r[3], 0u + 5u);
    c.budget -= 1;
L_0024B918:
    st32((c.r[21].w[0] + 8u), c.r[3].w[0]);
    c.budget -= 1;
L_0024B91C:
    set32(c.r[3], 0u + 2u);
    c.budget -= 1;
L_0024B920:
    st32((c.r[21].w[0] + 16u), c.r[3].w[0]);
    c.budget -= 1;
L_0024B924:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));
    c.budget -= 1;
L_0024B928:
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 400u);  c.pc = t; return; }
L_0024B960:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024B97Cu); set32(c.r[5], c.r[16].w[0] + 416u);  if (depth < kMaxDepth) unit_0058(c, 242u, depth + 1u); else { c.pc = 0x00262A50u; return; } if (c.pc != 0x0024B97Cu) [[unlikely]] return; }
L_0024B97C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024B984u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0052(c, 197u, depth + 1u); else { c.pc = 0x00249A60u; return; } if (c.pc != 0x0024B984u) [[unlikely]] return; }
L_0024B984:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0024B9A0:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[16], c.r[29].w[0] + 152u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024B9D0u); st32((c.r[16].w[0]), 0u);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x0024B9D0u) [[unlikely]] return; }
L_0024B9D0:
    c.r[2].d[0] = ld8((c.r[2].w[0] + 20u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);  if (t) { goto L_0024BA00; } }
    set32(c.r[3], ld32((c.r[19].w[0] + 512u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], c.r[2].w[0] - 27912u);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[19].w[0] + 512u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; set32(c.r[16], ld32((c.r[2].w[0])));  if (t) { goto L_0024BA04; } }
L_0024BA00:
    set32(c.r[16], ld32((c.r[1].w[0] - 27912u)));
    c.budget -= 1;
L_0024BA04:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; set32(c.r[4], c.r[29].w[0] + 80u);  if (t) { goto L_0024BA90; } }
    set32(c.r[2], ld32((c.r[19].w[0])));
    set32(c.r[5], ld32((c.r[2].w[0] + 240u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024BA1Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_004C(c, 346u, depth + 1u); else { c.pc = 0x00232F10u; return; } if (c.pc != 0x0024BA1Cu) [[unlikely]] return; }
L_0024BA1C:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024BA2Cu); c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_004C(c, 346u, depth + 1u); else { c.pc = 0x00232F10u; return; } if (c.pc != 0x0024BA2Cu) [[unlikely]] return; }
L_0024BA2C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0024BA3C; } }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != 0ull;  if (t) { goto L_0024BA44; } }
L_0024BA3C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0024BAB8; } }
L_0024BA44:
    set32(c.r[3], ld32((c.r[18].w[0] + 212u)));
    set32(c.r[4], c.r[29].w[0] + 84u);
    st32((c.r[29].w[0] + 80u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 212u)));
    st32((c.r[4].w[0]), c.r[3].w[0]);
    st32((c.r[29].w[0] + 156u), c.r[2].w[0]);
    set32(c.r[16], ld32((c.r[16].w[0] + 60u)));
    set32(c.r[6], ld32((c.r[4].w[0])));
    set32(c.r[5], ld32((c.r[29].w[0] + 80u)));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024BA70u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0097(c, 104u, depth + 1u); else { c.pc = 0x0035D4B0u; return; } if (c.pc != 0x0024BA70u) [[unlikely]] return; }
L_0024BA70:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull; set32(c.r[5], c.r[16].w[0] + 12u);  if (t) { goto L_0024BA88; } }
    set32(c.r[4], c.r[29].w[0] + 88u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024BA88u); set32(c.r[6], 0u + 60u);  if (depth < kMaxDepth) unit_0009(c, 40u, depth + 1u); else { c.pc = 0x00124D20u; return; } if (c.pc != 0x0024BA88u) [[unlikely]] return; }
L_0024BA88:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 148u), c.r[18].w[0]);  if (t) { goto L_0024BAA4; } }
L_0024BA90:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024BA9Cu); set32(c.r[6], 0u + 80u);  if (depth < kMaxDepth) unit_0009(c, 49u, depth + 1u); else { c.pc = 0x00124ED8u; return; } if (c.pc != 0x0024BA9Cu) [[unlikely]] return; }
L_0024BA9C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0024BAB8; } }
L_0024BAA4:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 80u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024BAB4u); set32(c.r[6], 0u + 80u);  if (depth < kMaxDepth) unit_0009(c, 40u, depth + 1u); else { c.pc = 0x00124D20u; return; } if (c.pc != 0x0024BAB4u) [[unlikely]] return; }
L_0024BAB4:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0024BAB8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_0024BAE0:
    set32(c.r[29], c.r[29].w[0] - 144u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[17], ld32((c.r[1].w[0] - 27912u)));
    c.budget -= 10;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_0024BB70; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024BB14u); set32(c.r[5], c.r[5].w[0] + 224u);  if (depth < kMaxDepth) unit_004C(c, 346u, depth + 1u); else { c.pc = 0x00232F10u; return; } if (c.pc != 0x0024BB14u) [[unlikely]] return; }
L_0024BB14:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0024BB24; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0024BB9C; } }
L_0024BB24:
    set32(c.r[3], ld32((c.r[18].w[0] + 440u)));
    set32(c.r[4], c.r[29].w[0] + 68u);
    st32((c.r[29].w[0] + 64u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 212u)));
    st32((c.r[4].w[0]), c.r[3].w[0]);
    st32((c.r[29].w[0] + 140u), c.r[2].w[0]);
    set32(c.r[17], ld32((c.r[17].w[0] + 60u)));
    set32(c.r[6], ld32((c.r[4].w[0])));
    set32(c.r[5], ld32((c.r[29].w[0] + 64u)));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024BB50u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0097(c, 104u, depth + 1u); else { c.pc = 0x0035D4B0u; return; } if (c.pc != 0x0024BB50u) [[unlikely]] return; }
L_0024BB50:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull; set32(c.r[5], c.r[17].w[0] + 12u);  if (t) { goto L_0024BB68; } }
    set32(c.r[4], c.r[29].w[0] + 72u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024BB68u); set32(c.r[6], 0u + 60u);  if (depth < kMaxDepth) unit_0009(c, 40u, depth + 1u); else { c.pc = 0x00124D20u; return; } if (c.pc != 0x0024BB68u) [[unlikely]] return; }
L_0024BB68:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 132u), c.r[18].w[0]);  if (t) { goto L_0024BB88; } }
L_0024BB70:
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024BB80u); set32(c.r[6], 0u + 80u);  if (depth < kMaxDepth) unit_0009(c, 49u, depth + 1u); else { c.pc = 0x00124ED8u; return; } if (c.pc != 0x0024BB80u) [[unlikely]] return; }
L_0024BB80:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0024BB9C; } }
L_0024BB88:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024BB98u); set32(c.r[6], 0u + 80u);  if (depth < kMaxDepth) unit_0009(c, 40u, depth + 1u); else { c.pc = 0x00124D20u; return; } if (c.pc != 0x0024BB98u) [[unlikely]] return; }
L_0024BB98:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0024BB9C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_0024BBC0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024BBD4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x0024BBD4u) [[unlikely]] return; }
L_0024BBD4:
    c.r[2].d[0] = ld8((c.r[2].w[0] + 14u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);  if (t) { goto L_0024BBE8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0024BC68; } }
L_0024BBE8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[3].w[0] - 27952u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[5], c.r[5].w[0] + 28320u);  if (t) { goto L_0024BC58; } }
L_0024BBFC:
    set32(c.r[2], c.r[5].w[0] + c.r[2].w[0]);
    set32(c.r[6], ld32((c.r[2].w[0])));
    c.budget -= 4;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_0024BC54; } }
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[2].d[0];  if (t) { goto L_0024BC54; } }
    set32(c.r[2], ld32((c.r[2].w[0] + 624u)));
    set32(c.r[4], ld32((c.r[6].w[0] + 624u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { goto L_0024BC54; } }
    set32(c.r[2], ld32((c.r[6].w[0] + 912u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0024BC54; } }
    set32(c.r[2], ld32((c.r[2].w[0] + 412u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0024BC54; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_0024BC6C; } }
L_0024BC54:
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.budget -= 1;
L_0024BC58:
    c.r[2].d[0] = c.r[7].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[7].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0024BBFCu | kUnwind; return; } goto L_0024BBFC; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0024BC68:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_0024BC6C:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0024BC80:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024BC9Cu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x0024BC9Cu) [[unlikely]] return; }
L_0024BC9C:
    c.r[3].d[0] = ld8((c.r[2].w[0] + 14u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);  if (t) { goto L_0024BD00; } }
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[4].w[0] + 28320u);  if (t) { goto L_0024BCF4; } }
L_0024BCB4:
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[3].w[0])));
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0024BCF0; } }
    set32(c.r[3], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_0024BCF0; } }
    set32(c.r[4], ld32((c.r[5].w[0] + 912u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[3], c.r[3].w[0] - 27952u);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 412u), c.r[16].w[0]);  if (t) { goto L_0024BD00; } }
L_0024BCF0:
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.budget -= 1;
L_0024BCF4:
    c.r[3].d[0] = c.r[6].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], c.r[6].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0024BCB4u | kUnwind; return; } goto L_0024BCB4; } }
L_0024BD00:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0024BD20:
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], ld32((c.r[1].w[0] - 27888u)));
    c.budget -= 5;
    { set32(c.r[5], ld32((c.r[2].w[0] + 164u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00244F70u | kUnwind; return; } [[clang::musttail]] return unit_0051(c, 124u, depth); }
L_0024BD40:
    set32(c.r[2], 0u + 58u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 6u);  if (t) { goto L_0024BDCC; } }
    set32(c.r[2], 0u + 72u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 5u);  if (t) { goto L_0024BDC4; } }
    set32(c.r[2], 0u + 69u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 4u);  if (t) { goto L_0024BDBC; } }
    set32(c.r[2], 0u + 76u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 3u);  if (t) { goto L_0024BDB4; } }
    set32(c.r[2], 0u + 75u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 2u);  if (t) { goto L_0024BDAC; } }
    set32(c.r[2], 0u + 70u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_0024BDA4; } }
    set32(c.r[2], 0u + 77u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0024BD9C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0024BDCC; } }
L_0024BD9C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0024BDCC; } }
L_0024BDA4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0024BDCC; } }
L_0024BDAC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0024BDCC; } }
L_0024BDB4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0024BDCC; } }
L_0024BDBC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0024BDCC; } }
L_0024BDC4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0024BDCC; } }
L_0024BDCC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0024BDE0:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024BE14u); c.r[16].d[0] = c.r[8].d[0] + 0ull;  if (depth < kMaxDepth) unit_0012(c, 39u, depth + 1u); else { c.pc = 0x001486F0u; return; } if (c.pc != 0x0024BE14u) [[unlikely]] return; }
L_0024BE14:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[4], c.r[19].w[0] + 36u);
    set32(c.r[2], c.r[2].w[0] - 2496u);
    st32((c.r[19].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[20].w[0])));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024BE30u); st32((c.r[19].w[0] + 32u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_001F(c, 475u, depth + 1u); else { c.pc = 0x0017FD30u; return; } if (c.pc != 0x0024BE30u) [[unlikely]] return; }
L_0024BE30:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024BE38u); set32(c.r[4], c.r[19].w[0] + 44u);  if (depth < kMaxDepth) unit_001F(c, 475u, depth + 1u); else { c.pc = 0x0017FD30u; return; } if (c.pc != 0x0024BE38u) [[unlikely]] return; }
L_0024BE38:
    st32((c.r[19].w[0] + 52u), 0u);
    st32((c.r[19].w[0] + 56u), 0u);
    st32((c.r[19].w[0] + 60u), 0u);
    set32(c.r[4], ld32((c.r[19].w[0] + 52u)));
    set32(c.r[2], ld32((c.r[19].w[0] + 60u)));
    set32(c.r[3], c.r[2].w[0] - c.r[4].w[0]);
    c.budget -= 8;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 5));  if (t) { goto L_0024BE60; } }
    set32(c.r[2], c.r[3].w[0] + 31u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 5));
    c.budget -= 2;
L_0024BE60:
    c.r[1].d[0] = c.r[2].d[0] < c.r[18].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0024BECC; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[2], c.r[18].w[0] << 5);  if (t) { goto L_0024BE94; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0024BE84; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024BE84u); set32(c.r[4], c.r[4].w[0] - 16u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100210u; return; } if (c.pc != 0x0024BE84u) [[unlikely]] return; }
L_0024BE84:
    st32((c.r[19].w[0] + 60u), 0u);
    st32((c.r[19].w[0] + 56u), 0u);
    st32((c.r[19].w[0] + 52u), 0u);
    set32(c.r[2], c.r[18].w[0] << 5);
    c.budget -= 4;
L_0024BE94:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024BE9Cu); set32(c.r[4], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x001001F0u; return; } if (c.pc != 0x0024BE9Cu) [[unlikely]] return; }
L_0024BE9C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00180000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 176u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u + 32u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024BEB8u); c.r[8].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 94u, depth + 1u); else { c.pc = 0x001008C0u; return; } if (c.pc != 0x0024BEB8u) [[unlikely]] return; }
L_0024BEB8:
    st32((c.r[19].w[0] + 52u), c.r[2].w[0]);
    set32(c.r[3], c.r[18].w[0] << 5);
    set32(c.r[2], ld32((c.r[19].w[0] + 52u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[19].w[0] + 56u), c.r[2].w[0]);
    c.budget -= 5;
L_0024BECC:
    set32(c.r[2], ld32((c.r[19].w[0] + 52u)));
    set32(c.r[3], c.r[18].w[0] << 5);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[19].w[0] + 60u), c.r[2].w[0]);
    st32((c.r[19].w[0] + 64u), c.r[18].w[0]);
    st32((c.r[19].w[0] + 68u), c.r[17].w[0]);
    st8((c.r[19].w[0] + 72u), static_cast<std::uint8_t>(0u));
    st8((c.r[19].w[0] + 73u), static_cast<std::uint8_t>(0u));
    c.budget -= 10;
    { const bool t = c.r[17].d[0] != 0ull; st32((c.r[19].w[0] + 76u), 0u);  if (t) { goto L_0024BF10; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 29360u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024BF08u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0012(c, 45u, depth + 1u); else { c.pc = 0x001487B0u; return; } if (c.pc != 0x0024BF08u) [[unlikely]] return; }
L_0024BF08:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0024BF24; } }
L_0024BF10:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 29376u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024BF24u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0012(c, 45u, depth + 1u); else { c.pc = 0x001487B0u; return; } if (c.pc != 0x0024BF24u) [[unlikely]] return; }
L_0024BF24:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; c.r[2].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_0024BF88; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[4], c.r[29].w[0] + 96u);
    set32(c.r[2], c.r[2].w[0] - 22752u);
    c.r[16].d[0] = 0ull + 0ull;
    ld128((c.r[2].w[0]) & ~15u, c.r[3]);
    c.r[2].d[0] = ld64((c.r[2].w[0] + 16u));
    st128((c.r[4].w[0]) & ~15u, c.r[3]);
    st64((c.r[4].w[0] + 16u), c.r[2].d[0]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st8((c.r[19].w[0] + 73u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0024BF78; } }
L_0024BF54:
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024BF60u); set32(c.r[4], ld32((c.r[2].w[0] + 96u)));  if (depth < kMaxDepth) unit_0081(c, 172u, depth + 1u); else { c.pc = 0x00306060u; return; } if (c.pc != 0x0024BF60u) [[unlikely]] return; }
L_0024BF60:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0024BF74; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[19].w[0] + 73u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0024BF84; } }
L_0024BF74:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_0024BF78:
    c.r[2].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[16].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0024BF54u | kUnwind; return; } goto L_0024BF54; } }
L_0024BF84:
    c.r[2].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_0024BF88:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_0024BFB0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { [[clang::musttail]] return unit_0053(c, 8u, depth); } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[17].w[0] + 52u);
    set32(c.r[3], c.r[3].w[0] - 2496u);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[17].w[0]), c.r[3].w[0]);  if (t) { [[clang::musttail]] return unit_0053(c, 3u, depth); } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[17].w[0] + 44u);  if (t) { [[clang::musttail]] return unit_0053(c, 4u, depth); } }
    set32(c.r[2], ld32((c.r[17].w[0] + 52u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_0053(c, 3u, depth); } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[2].w[0] - 16u);  if (t) { [[clang::musttail]] return unit_0053(c, 2u, depth); } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024C004u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100210u; return; } if (c.pc != 0x0024C004u) [[unlikely]] return; }
    [[clang::musttail]] return unit_0053(c, 2u, depth);
}

}
