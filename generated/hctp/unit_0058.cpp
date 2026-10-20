#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0058[4096] = {
    1, 0, 2, 0, 3, 0, 4, 0, 0, 5, 0, 0, 0, 0, 6, 0, 0, 7, 0, 0, 0, 0, 0, 8, 0, 9, 0, 0, 0, 0, 0, 0,
    10, 0, 0, 11, 0, 0, 12, 0, 13, 0, 14, 0, 0, 0, 0, 0, 0, 15, 0, 16, 0, 0, 0, 0, 0, 17, 0, 18, 0, 0, 0, 0,
    0, 0, 19, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 22, 0, 0, 0, 23, 0, 24, 0, 0,
    25, 0, 0, 26, 0, 27, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0,
    0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 32, 0, 33, 34, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 42,
    0, 0, 43, 0, 0, 44, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 48, 0, 0, 0,
    49, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 51, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 53, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 55, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 66, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 68, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    72, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    75, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 77, 0, 0, 0, 0, 78, 0, 0, 0, 0,
    79, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0,
    82, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0,
    0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0,
    0, 0, 91, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0,
    95, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 99, 0, 0,
    0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0,
    0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0,
    0, 108, 0, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0, 112,
    0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0, 116, 0, 0,
    0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0,
    0, 0, 121, 0, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0,
    125, 0, 0, 0, 0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 129, 0,
    0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0,
    0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0,
    0, 138, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 0,
    0, 142, 0, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0, 154,
    0, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0,
    0, 158, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    160, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 161, 0, 0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0,
    0, 164, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 166, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0,
    169, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 174, 0,
    0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 177, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 178, 0,
    0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0, 0, 183, 0, 0, 0,
    0, 0, 184, 0, 0, 0, 0, 0, 185, 0, 0, 0, 0, 0, 186, 0, 0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0,
    0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 191, 0, 0, 0, 0, 0, 192, 0, 0,
    0, 0, 0, 0, 0, 193, 0, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0, 0,
    0, 197, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 199, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0, 0, 0, 203, 0,
    0, 0, 0, 0, 0, 204, 0, 0, 0, 205, 0, 0, 0, 206, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 207, 0, 0, 0,
    0, 0, 208, 0, 0, 0, 0, 0, 209, 0, 0, 0, 0, 0, 210, 0, 0, 0, 0, 0, 211, 0, 0, 0, 0, 0, 212, 0, 0, 0, 0, 0,
    0, 0, 213, 0, 0, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 0, 0, 0, 215, 0, 0, 0, 0, 0, 216, 0, 0, 0, 0, 0, 217, 0,
    0, 0, 0, 0, 218, 0, 0, 0, 0, 0, 219, 0, 0, 0, 0, 0, 220, 0, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 222, 0, 0, 0,
    0, 0, 223, 0, 0, 0, 224, 0, 0, 0, 0, 0, 225, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 226, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 227, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 228, 0, 0, 0, 229, 0, 0, 0, 230, 0, 0, 0, 231, 0, 0, 0, 232, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 233, 0, 0, 0, 0, 0, 0, 0, 0, 0, 234, 0, 0, 0, 0, 0, 0, 235, 0, 0, 0, 0, 0, 0, 0, 0, 236, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 237, 0, 0, 0, 0, 0, 0, 0, 0, 0, 238, 0, 0, 0, 0, 0, 0, 239, 0, 0, 0, 0, 0, 0,
    0, 0, 240, 0, 0, 0, 0, 0, 0, 0, 0, 241, 0, 0, 0, 0, 0, 0, 0, 0, 242, 0, 0, 0, 0, 0, 0, 0, 243, 0, 0, 244,
    0, 0, 0, 0, 0, 245, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 246, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 247, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 248, 0, 0, 0, 0, 0, 0, 0, 249, 0, 0, 0, 0, 0, 0, 0, 0, 250, 0, 0, 0, 251,
    0, 0, 0, 252, 0, 0, 0, 253, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 254, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 256, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 257, 0, 0, 0, 0, 0, 258, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 259, 0, 0, 0, 0, 0, 260, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 262, 0, 0, 0, 0, 0, 263, 0, 0, 0, 0, 0,
    264, 0, 0, 0, 0, 0, 265, 0, 0, 0, 0, 0, 0, 266, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 267, 0, 0, 0, 0, 0,
    268, 0, 0, 0, 0, 0, 269, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 270,
    0, 0, 0, 0, 0, 271, 0, 0, 0, 0, 0, 272, 0, 0, 0, 0, 0, 273, 0, 0, 0, 0, 0, 274, 0, 0, 0, 0, 0, 275, 0, 0,
    0, 0, 0, 276, 0, 0, 0, 0, 0, 277, 0, 0, 0, 0, 0, 278, 0, 0, 0, 0, 0, 279, 0, 0, 0, 0, 0, 280, 0, 0, 0, 0,
    0, 0, 281, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 282, 0, 0, 0, 0, 0, 283, 0, 0, 0, 0, 0, 284, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 285, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 286, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 287, 0, 0, 0, 0, 0, 288, 0, 0, 0, 0, 0, 289, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 290, 0, 0, 0, 0, 0, 291, 0, 0, 0,
    0, 0, 292, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 293, 0, 0, 0, 0, 0, 294, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 295, 0, 0, 0, 0, 0, 0, 296, 0, 0, 0, 0, 0, 0, 297, 0, 0, 0, 0, 0, 0, 298, 0, 0, 0, 0, 0, 0, 299, 0, 0,
    0, 0, 0, 0, 300, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    301, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 302, 0, 0, 0, 0, 303, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 304, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 305, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 306, 0, 0, 0, 0, 0, 0, 0, 0, 0, 307, 0, 0, 0, 0, 0, 308, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 309, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 310, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 311, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 312, 0, 0, 0, 0, 0, 0, 313, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 314, 0, 0, 0, 315, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 316, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 317, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 318, 0, 0, 0, 319, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 320, 0, 0, 0, 321, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 322, 0, 0, 0, 0, 0, 323, 0,
    0, 0, 0, 0, 0, 0, 0, 324, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 325, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_0058(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_00260000;
    case 2u: goto L_00260008;
    case 3u: goto L_00260010;
    case 4u: goto L_00260018;
    case 5u: goto L_00260024;
    case 6u: goto L_00260038;
    case 7u: goto L_00260044;
    case 8u: goto L_0026005C;
    case 9u: goto L_00260064;
    case 10u: goto L_00260080;
    case 11u: goto L_0026008C;
    case 12u: goto L_00260098;
    case 13u: goto L_002600A0;
    case 14u: goto L_002600A8;
    case 15u: goto L_002600C4;
    case 16u: goto L_002600CC;
    case 17u: goto L_002600E4;
    case 18u: goto L_002600EC;
    case 19u: goto L_00260108;
    case 20u: goto L_00260114;
    case 21u: goto L_00260150;
    case 22u: goto L_0026015C;
    case 23u: goto L_0026016C;
    case 24u: goto L_00260174;
    case 25u: goto L_00260180;
    case 26u: goto L_0026018C;
    case 27u: goto L_00260194;
    case 28u: goto L_002601B0;
    case 29u: goto L_002601F8;
    case 30u: goto L_00260204;
    case 31u: goto L_0026022C;
    case 32u: goto L_00260248;
    case 33u: goto L_00260250;
    case 34u: goto L_00260254;
    case 35u: goto L_00260274;
    case 36u: goto L_002602B0;
    case 37u: goto L_00260310;
    case 38u: goto L_0026033C;
    case 39u: goto L_00260354;
    case 40u: goto L_00260370;
    case 41u: goto L_002603DC;
    case 42u: goto L_002603FC;
    case 43u: goto L_00260408;
    case 44u: goto L_00260414;
    case 45u: goto L_00260424;
    case 46u: goto L_00260440;
    case 47u: goto L_00260460;
    case 48u: goto L_00260470;
    case 49u: goto L_00260480;
    case 50u: goto L_002604C0;
    case 51u: goto L_002604C8;
    case 52u: goto L_002604D8;
    case 53u: goto L_002604F8;
    case 54u: goto L_00260520;
    case 55u: goto L_00260530;
    case 56u: goto L_00260540;
    case 57u: goto L_00260560;
    case 58u: goto L_002605A0;
    case 59u: goto L_002605B4;
    case 60u: goto L_0026063C;
    case 61u: goto L_0026069C;
    case 62u: goto L_00260730;
    case 63u: goto L_0026074C;
    case 64u: goto L_0026078C;
    case 65u: goto L_002607E0;
    case 66u: goto L_002607F4;
    case 67u: goto L_0026081C;
    case 68u: goto L_0026082C;
    case 69u: goto L_00260840;
    case 70u: goto L_002608B4;
    case 71u: goto L_00260948;
    case 72u: goto L_00260A80;
    case 73u: goto L_00260BE4;
    case 74u: goto L_00260D54;
    case 75u: goto L_00260D80;
    case 76u: goto L_00260DC4;
    case 77u: goto L_00260DD8;
    case 78u: goto L_00260DEC;
    case 79u: goto L_00260E00;
    case 80u: goto L_00260EBC;
    case 81u: goto L_00260EE4;
    case 82u: goto L_00260F00;
    case 83u: goto L_00261198;
    case 84u: goto L_002611B4;
    case 85u: goto L_002611D4;
    case 86u: goto L_002611F4;
    case 87u: goto L_00261214;
    case 88u: goto L_00261230;
    case 89u: goto L_00261250;
    case 90u: goto L_0026126C;
    case 91u: goto L_00261288;
    case 92u: goto L_002612A4;
    case 93u: goto L_002612C4;
    case 94u: goto L_002612E4;
    case 95u: goto L_00261300;
    case 96u: goto L_0026131C;
    case 97u: goto L_00261338;
    case 98u: goto L_00261358;
    case 99u: goto L_00261374;
    case 100u: goto L_00261390;
    case 101u: goto L_002613B0;
    case 102u: goto L_002613CC;
    case 103u: goto L_002613EC;
    case 104u: goto L_0026140C;
    case 105u: goto L_00261428;
    case 106u: goto L_00261448;
    case 107u: goto L_00261464;
    case 108u: goto L_00261484;
    case 109u: goto L_002614A0;
    case 110u: goto L_002614C0;
    case 111u: goto L_002614DC;
    case 112u: goto L_002614FC;
    case 113u: goto L_00261518;
    case 114u: goto L_00261538;
    case 115u: goto L_00261554;
    case 116u: goto L_00261574;
    case 117u: goto L_00261590;
    case 118u: goto L_002615B0;
    case 119u: goto L_002615CC;
    case 120u: goto L_002615EC;
    case 121u: goto L_00261608;
    case 122u: goto L_00261628;
    case 123u: goto L_00261644;
    case 124u: goto L_00261664;
    case 125u: goto L_00261680;
    case 126u: goto L_002616A0;
    case 127u: goto L_002616BC;
    case 128u: goto L_002616DC;
    case 129u: goto L_002616F8;
    case 130u: goto L_00261718;
    case 131u: goto L_00261734;
    case 132u: goto L_00261754;
    case 133u: goto L_00261770;
    case 134u: goto L_00261790;
    case 135u: goto L_002617AC;
    case 136u: goto L_002617C4;
    case 137u: goto L_002617E4;
    case 138u: goto L_00261804;
    case 139u: goto L_00261824;
    case 140u: goto L_00261844;
    case 141u: goto L_00261864;
    case 142u: goto L_00261884;
    case 143u: goto L_002618A4;
    case 144u: goto L_002618C4;
    case 145u: goto L_002618E4;
    case 146u: goto L_00261920;
    case 147u: goto L_00261A34;
    case 148u: goto L_00261A60;
    case 149u: goto L_00261AA4;
    case 150u: goto L_00261AD0;
    case 151u: goto L_00261B1C;
    case 152u: goto L_00261B3C;
    case 153u: goto L_00261B5C;
    case 154u: goto L_00261B7C;
    case 155u: goto L_00261B9C;
    case 156u: goto L_00261BBC;
    case 157u: goto L_00261BE4;
    case 158u: goto L_00261C04;
    case 159u: goto L_00261C50;
    case 160u: goto L_00261C80;
    case 161u: goto L_00261FBC;
    case 162u: goto L_00261FD4;
    case 163u: goto L_00261FEC;
    case 164u: goto L_00262004;
    case 165u: goto L_00262018;
    case 166u: goto L_00262030;
    case 167u: goto L_002620D4;
    case 168u: goto L_002620E8;
    case 169u: goto L_00262100;
    case 170u: goto L_00262114;
    case 171u: goto L_00262130;
    case 172u: goto L_00262148;
    case 173u: goto L_00262160;
    case 174u: goto L_00262178;
    case 175u: goto L_00262190;
    case 176u: goto L_002621A8;
    case 177u: goto L_002621C0;
    case 178u: goto L_002621F8;
    case 179u: goto L_00262210;
    case 180u: goto L_00262228;
    case 181u: goto L_00262240;
    case 182u: goto L_00262258;
    case 183u: goto L_00262270;
    case 184u: goto L_00262288;
    case 185u: goto L_002622A0;
    case 186u: goto L_002622B8;
    case 187u: goto L_002622D0;
    case 188u: goto L_002622F0;
    case 189u: goto L_00262310;
    case 190u: goto L_00262330;
    case 191u: goto L_0026235C;
    case 192u: goto L_00262374;
    case 193u: goto L_00262394;
    case 194u: goto L_002623AC;
    case 195u: goto L_002623CC;
    case 196u: goto L_002623EC;
    case 197u: goto L_00262404;
    case 198u: goto L_00262418;
    case 199u: goto L_00262484;
    case 200u: goto L_0026249C;
    case 201u: goto L_002624B8;
    case 202u: goto L_002624E0;
    case 203u: goto L_002624F8;
    case 204u: goto L_00262514;
    case 205u: goto L_00262524;
    case 206u: goto L_00262534;
    case 207u: goto L_00262570;
    case 208u: goto L_00262588;
    case 209u: goto L_002625A0;
    case 210u: goto L_002625B8;
    case 211u: goto L_002625D0;
    case 212u: goto L_002625E8;
    case 213u: goto L_00262608;
    case 214u: goto L_00262628;
    case 215u: goto L_00262648;
    case 216u: goto L_00262660;
    case 217u: goto L_00262678;
    case 218u: goto L_00262690;
    case 219u: goto L_002626A8;
    case 220u: goto L_002626C0;
    case 221u: goto L_002626D8;
    case 222u: goto L_002626F0;
    case 223u: goto L_00262708;
    case 224u: goto L_00262718;
    case 225u: goto L_00262730;
    case 226u: goto L_00262828;
    case 227u: goto L_00262858;
    case 228u: goto L_002628A0;
    case 229u: goto L_002628B0;
    case 230u: goto L_002628C0;
    case 231u: goto L_002628D0;
    case 232u: goto L_002628E0;
    case 233u: goto L_00262910;
    case 234u: goto L_00262938;
    case 235u: goto L_00262954;
    case 236u: goto L_00262978;
    case 237u: goto L_002629A0;
    case 238u: goto L_002629C8;
    case 239u: goto L_002629E4;
    case 240u: goto L_00262A08;
    case 241u: goto L_00262A2C;
    case 242u: goto L_00262A50;
    case 243u: goto L_00262A70;
    case 244u: goto L_00262A7C;
    case 245u: goto L_00262A94;
    case 246u: goto L_00262AC0;
    case 247u: goto L_00262AF4;
    case 248u: goto L_00262B28;
    case 249u: goto L_00262B48;
    case 250u: goto L_00262B6C;
    case 251u: goto L_00262B7C;
    case 252u: goto L_00262B8C;
    case 253u: goto L_00262B9C;
    case 254u: goto L_00262ED0;
    case 255u: goto L_00262F30;
    case 256u: goto L_00262F4C;
    case 257u: goto L_00262F88;
    case 258u: goto L_00262FA0;
    case 259u: goto L_00262FD8;
    case 260u: goto L_00262FF0;
    case 261u: goto L_00263020;
    case 262u: goto L_002630D0;
    case 263u: goto L_002630E8;
    case 264u: goto L_00263100;
    case 265u: goto L_00263118;
    case 266u: goto L_00263134;
    case 267u: goto L_002631E8;
    case 268u: goto L_00263200;
    case 269u: goto L_00263218;
    case 270u: goto L_0026327C;
    case 271u: goto L_00263294;
    case 272u: goto L_002632AC;
    case 273u: goto L_002632C4;
    case 274u: goto L_002632DC;
    case 275u: goto L_002632F4;
    case 276u: goto L_0026330C;
    case 277u: goto L_00263324;
    case 278u: goto L_0026333C;
    case 279u: goto L_00263354;
    case 280u: goto L_0026336C;
    case 281u: goto L_00263388;
    case 282u: goto L_00263424;
    case 283u: goto L_0026343C;
    case 284u: goto L_00263454;
    case 285u: goto L_002634A0;
    case 286u: goto L_002634CC;
    case 287u: goto L_0026353C;
    case 288u: goto L_00263554;
    case 289u: goto L_0026356C;
    case 290u: goto L_002635D8;
    case 291u: goto L_002635F0;
    case 292u: goto L_00263608;
    case 293u: goto L_00263690;
    case 294u: goto L_002636A8;
    case 295u: goto L_00263784;
    case 296u: goto L_002637A0;
    case 297u: goto L_002637BC;
    case 298u: goto L_002637D8;
    case 299u: goto L_002637F4;
    case 300u: goto L_00263810;
    case 301u: goto L_00263880;
    case 302u: goto L_002638B8;
    case 303u: goto L_002638CC;
    case 304u: goto L_00263990;
    case 305u: goto L_00263A20;
    case 306u: goto L_00263AA0;
    case 307u: goto L_00263AC8;
    case 308u: goto L_00263AE0;
    case 309u: goto L_00263B60;
    case 310u: goto L_00263BE0;
    case 311u: goto L_00263C64;
    case 312u: goto L_00263CA8;
    case 313u: goto L_00263CC4;
    case 314u: goto L_00263D50;
    case 315u: goto L_00263D60;
    case 316u: goto L_00263E10;
    case 317u: goto L_00263E5C;
    case 318u: goto L_00263EAC;
    case 319u: goto L_00263EBC;
    case 320u: goto L_00263F10;
    case 321u: goto L_00263F20;
    case 322u: goto L_00263F60;
    case 323u: goto L_00263F78;
    case 324u: goto L_00263F9C;
    case 325u: goto L_00263FD0;
    default: bad_entry(c, 0x00260000u); return;
    }
L_00260000:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00260008u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0057(c, 375u, depth + 1u); else { c.pc = 0x0025ECC0u; return; } if (c.pc != 0x00260008u) [[unlikely]] return; }
L_00260008:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00260250; } }
L_00260010:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00260018u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0057(c, 386u, depth + 1u); else { c.pc = 0x0025EE80u; return; } if (c.pc != 0x00260018u) [[unlikely]] return; }
L_00260018:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00260024u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0057(c, 389u, depth + 1u); else { c.pc = 0x0025EF20u; return; } if (c.pc != 0x00260024u) [[unlikely]] return; }
L_00260024:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull; c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (t) { goto L_00260250; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00260038u);  if (depth < kMaxDepth) unit_0057(c, 386u, depth + 1u); else { c.pc = 0x0025EE80u; return; } if (c.pc != 0x00260038u) [[unlikely]] return; }
L_00260038:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00260044u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0057(c, 389u, depth + 1u); else { c.pc = 0x0025EF20u; return; } if (c.pc != 0x00260044u) [[unlikely]] return; }
L_00260044:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull; mmi::div(c, 0, c.r[2].w[0], c.r[16].w[0]);  if (t) { goto L_00260050; } }
    breakpoint(c, 0x0026004Cu);
    c.budget -= 1;
L_00260050:
    c.r[5].d[0] = c.hi.d[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026005Cu); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0057(c, 375u, depth + 1u); else { c.pc = 0x0025ECC0u; return; } if (c.pc != 0x0026005Cu) [[unlikely]] return; }
L_0026005C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00260250; } }
L_00260064:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] - 27664u);
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00260080u); st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_0057(c, 386u, depth + 1u); else { c.pc = 0x0025EE80u; return; } if (c.pc != 0x00260080u) [[unlikely]] return; }
L_00260080:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026008Cu); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0057(c, 389u, depth + 1u); else { c.pc = 0x0025EF20u; return; } if (c.pc != 0x0026008Cu) [[unlikely]] return; }
L_0026008C:
    set32(c.r[5], 0u - c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00260098u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0057(c, 375u, depth + 1u); else { c.pc = 0x0025ECC0u; return; } if (c.pc != 0x00260098u) [[unlikely]] return; }
L_00260098:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00260250; } }
L_002600A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002600A8u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0057(c, 386u, depth + 1u); else { c.pc = 0x0025EE80u; return; } if (c.pc != 0x002600A8u) [[unlikely]] return; }
L_002600A8:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 8u)));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[21].w[0] + 64u)));
    set32(c.r[6], 0u + 8u);
    set32(c.r[3], c.r[3].w[0] << 3);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002600C4u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0010(c, 107u, depth + 1u); else { c.pc = 0x001415A0u; return; } if (c.pc != 0x002600C4u) [[unlikely]] return; }
L_002600C4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00260250; } }
L_002600CC:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 8u)));
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[21].w[0] + 64u)));
    set32(c.r[3], c.r[3].w[0] << 3);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002600E4u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0057(c, 372u, depth + 1u); else { c.pc = 0x0025EC70u; return; } if (c.pc != 0x002600E4u) [[unlikely]] return; }
L_002600E4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00260250; } }
L_002600EC:
    c.budget -= 2;
    { const bool t = c.r[19].sd[0] < 0; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_00260100; } }
    c.r[16].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[19], 0u - 1u);  if (t) { goto L_00260118; } }
L_00260100:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00260108u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0057(c, 386u, depth + 1u); else { c.pc = 0x0025EE80u; return; } if (c.pc != 0x00260108u) [[unlikely]] return; }
L_00260108:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00260114u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0057(c, 389u, depth + 1u); else { c.pc = 0x0025EF20u; return; } if (c.pc != 0x00260114u) [[unlikely]] return; }
L_00260114:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00260118:
    c.r[3].d[0] = ld8((c.r[21].w[0] + 33u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00260274; } }
    c.r[2].d[0] = ld8((c.r[21].w[0] + 5136u));
    c.r[23].d[0] = ld16((c.r[21].w[0] + 5270u));
    c.r[30].d[0] = ld16((c.r[21].w[0] + 5272u));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; c.r[22].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0] + 5268u)));  if (t) { goto L_00260150; } }
    c.budget -= 2;
    { const bool t = c.r[19].sd[0] >= 0; c.r[5].d[0] = c.r[16].d[0] & 65535ull;  if (t) { goto L_00260154; } }
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00260150u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0057(c, 387u, depth + 1u); else { c.pc = 0x0025EEC0u; return; } if (c.pc != 0x00260150u) [[unlikely]] return; }
L_00260150:
    c.r[5].d[0] = c.r[16].d[0] & 65535ull;
    c.budget -= 1;
L_00260154:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026015Cu); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0057(c, 481u, depth + 1u); else { c.pc = 0x0025FA70u; return; } if (c.pc != 0x0026015Cu) [[unlikely]] return; }
L_0026015C:
    st8((c.r[21].w[0] + 5268u), static_cast<std::uint8_t>(c.r[22].w[0]));
    st16((c.r[21].w[0] + 5270u), static_cast<std::uint16_t>(c.r[23].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[21].w[0] + 5272u), static_cast<std::uint16_t>(c.r[30].w[0]));  if (t) { goto L_00260250; } }
L_0026016C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00260174u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0057(c, 386u, depth + 1u); else { c.pc = 0x0025EE80u; return; } if (c.pc != 0x00260174u) [[unlikely]] return; }
L_00260174:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00260180u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0057(c, 389u, depth + 1u); else { c.pc = 0x0025EF20u; return; } if (c.pc != 0x00260180u) [[unlikely]] return; }
L_00260180:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026018Cu); c.r[5].d[0] = c.r[2].d[0] & 65535ull;  if (depth < kMaxDepth) unit_0057(c, 481u, depth + 1u); else { c.pc = 0x0025FA70u; return; } if (c.pc != 0x0026018Cu) [[unlikely]] return; }
L_0026018C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));  if (t) { goto L_00260278; } }
L_00260194:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 10u)));
    set32(c.r[3], ld32((c.r[21].w[0] + 60u)));
    set32(c.r[4], c.r[4].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    st32((c.r[21].w[0] + 60u), c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; set32(c.r[8], ld32((c.r[21].w[0] + 5192u)));  if (t) { goto L_002601C4; } }
L_002601B0:
    set32(c.r[4], ld32((c.r[8].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 8u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002601D0; } }
    set32(c.r[8], ld32((c.r[8].w[0])));
    c.budget -= 1;
L_002601C4:
    c.budget -= 3;
    { const bool t = c.r[8].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002601B0u | kUnwind; return; } goto L_002601B0; } }
L_002601D0:
    c.budget -= 2;
    { const bool t = c.r[8].d[0] == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_002601FC; } }
    set32(c.r[2], ld32((c.r[20].w[0])));
    st32((c.r[21].w[0] + 48u), c.r[2].w[0]);
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 10u)));
    set32(c.r[5], ld32((c.r[21].w[0] + 60u)));
    set32(c.r[7], ld32((c.r[8].w[0] + 12u)));
    set32(c.r[2], ld32((c.r[8].w[0] + 8u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002601F8u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002601F8u) [[unlikely]] return; }
L_002601F8:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002601FC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[4].w[0] - 27664u);
    c.budget -= 2;
L_00260204:
    set32(c.r[3], c.r[4].w[0] + c.r[5].w[0]);
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.r[3].d[0] = c.r[5].sd[0] < 16ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00260204u | kUnwind; return; } goto L_00260204; } }
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_00260250; } }
L_0026022C:
    set32(c.r[2], ld32((c.r[21].w[0] + 5128u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (t) { goto L_00260240; } }
    set32(c.r[2], 0u + 5u);
    st32((c.r[21].w[0] + 36u), c.r[2].w[0]);
    c.budget -= 2;
L_00260240:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00260248u);  if (depth < kMaxDepth) unit_0057(c, 388u, depth + 1u); else { c.pc = 0x0025EF00u; return; } if (c.pc != 0x00260248u) [[unlikely]] return; }
L_00260248:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00260274; } }
L_00260250:
    set32(c.r[20], ld32((c.r[20].w[0])));
    c.budget -= 1;
L_00260254:
    st32((c.r[21].w[0] + 48u), c.r[20].w[0]);
    c.r[3].d[0] = ld8((c.r[21].w[0] + 34u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00260274; } }
    set32(c.r[4], ld32((c.r[21].w[0] + 36u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0025FBDCu | kUnwind; return; } [[clang::musttail]] return unit_0057(c, 487u, depth); } }
L_00260274:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));
    c.budget -= 1;
L_00260278:
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_002602B0:
    c.r[3].d[0] = c.r[5].d[0] & 65535ull;
    c.r[1].d[0] = c.r[3].sd[0] < 1024ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[7], c.r[3].w[0] << 3);  if (t) { goto L_00260308; } }
    set32(c.r[5], ld32((c.r[6].w[0])));
    set32(c.r[3], ld32((c.r[4].w[0] + 52u)));
    set32(c.r[3], c.r[3].w[0] + c.r[7].w[0]);
    st32((c.r[3].w[0]), c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[6].w[0])));
    c.budget -= 7;
    { const bool t = c.r[5].d[0] != 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_002602F0; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 52u)));
    set32(c.r[5], ld32((c.r[6].w[0] + 4u)));
    set32(c.r[3], c.r[7].w[0] + c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 4u), c.r[5].w[0]);  if (t) { goto L_00260308; } }
L_002602F0:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_00260308; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 52u)));
    set32(c.r[5], ld32((c.r[6].w[0] + 4u)));
    set32(c.r[3], c.r[7].w[0] + c.r[3].w[0]);
    st32((c.r[3].w[0] + 4u), c.r[5].w[0]);
    c.budget -= 4;
L_00260308:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00260310:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 72u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026033Cu); set32(c.r[5], 0u + 8u);  if (depth < kMaxDepth) unit_0010(c, 111u, depth + 1u); else { c.pc = 0x00141670u; return; } if (c.pc != 0x0026033Cu) [[unlikely]] return; }
L_0026033C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 72u);
    st32((c.r[29].w[0] + 76u), c.r[16].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00260354u); st32((c.r[29].w[0] + 72u), 0u);  if (depth < kMaxDepth) unit_0058(c, 36u, depth + 1u); else { c.pc = 0x002602B0u; return; } if (c.pc != 0x00260354u) [[unlikely]] return; }
L_00260354:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00260370:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[5].d[0] = ld8((c.r[4].w[0] + 4868u));
    set32(c.r[2], c.r[5].w[0] + 1u);
    st8((c.r[4].w[0] + 4868u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[4].w[0] + 4868u));
    c.r[2].d[0] = c.r[2].sd[0] < 24ll ? 1ull : 0ull;
    c.budget -= 15;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_002603B0; } }
    st8((c.r[18].w[0] + 4868u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_002603B0:
    set32(c.r[2], c.r[5].w[0] << 2);
    c.r[3].d[0] = c.r[17].d[0] & 65535ull;
    set32(c.r[6], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[29].w[0] + 88u);
    set32(c.r[2], c.r[6].w[0] << 2);
    set32(c.r[5], 0u + 8u);
    set32(c.r[2], c.r[6].w[0] + c.r[2].w[0]);
    set32(c.r[19], c.r[2].w[0] << 3);
    set32(c.r[2], c.r[19].w[0] + c.r[18].w[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002603DCu); st32((c.r[2].w[0] + 68u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_0010(c, 111u, depth + 1u); else { c.pc = 0x00141670u; return; } if (c.pc != 0x002603DCu) [[unlikely]] return; }
L_002603DC:
    set32(c.r[2], c.r[18].w[0] + c.r[19].w[0]);
    set32(c.r[3], 0u + 1u);
    st32((c.r[29].w[0] + 88u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + 72u);
    set32(c.r[19], c.r[29].w[0] + 92u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002603FCu); st32((c.r[19].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0009(c, 237u, depth + 1u); else { c.pc = 0x00127D00u; return; } if (c.pc != 0x002603FCu) [[unlikely]] return; }
L_002603FC:
    set32(c.r[4], ld32((c.r[19].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00260408u); set32(c.r[5], c.r[2].w[0] + 1u);  if (depth < kMaxDepth) unit_0010(c, 111u, depth + 1u); else { c.pc = 0x00141670u; return; } if (c.pc != 0x00260408u) [[unlikely]] return; }
L_00260408:
    set32(c.r[4], ld32((c.r[19].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00260414u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 233u, depth + 1u); else { c.pc = 0x00127BE8u; return; } if (c.pc != 0x00260414u) [[unlikely]] return; }
L_00260414:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00260424u); set32(c.r[6], c.r[29].w[0] + 88u);  if (depth < kMaxDepth) unit_0058(c, 36u, depth + 1u); else { c.pc = 0x002602B0u; return; } if (c.pc != 0x00260424u) [[unlikely]] return; }
L_00260424:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_00260440:
    c.r[2].d[0] = c.r[5].d[0] & 65535ull;
    set32(c.r[3], c.r[2].w[0] << 3);
    set32(c.r[2], ld32((c.r[4].w[0] + 52u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);  c.pc = t; return; }
L_00260460:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[4].w[0] + 5172u)));  c.pc = t; return; }
L_00260470:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[4].w[0] + 5176u)));  c.pc = t; return; }
L_00260480:
    set32(c.r[29], c.r[29].w[0] - 112u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[1].w[0] + 3840u)));
    c.r[16].d[0] = c.r[7].d[0] + 0ull;
    set32(c.r[4], 0u + 1u);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002604C0u); st32((c.r[29].w[0] + 108u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x002604C0u) [[unlikely]] return; }
L_002604C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002604C8u); set32(c.r[4], 0u + 16u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x002604C8u) [[unlikely]] return; }
L_002604C8:
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], 0u + 16u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002604D8u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 111u, depth + 1u); else { c.pc = 0x00141670u; return; } if (c.pc != 0x002604D8u) [[unlikely]] return; }
L_002604D8:
    set32(c.r[2], ld32((c.r[19].w[0] + 5192u)));
    st32((c.r[20].w[0]), c.r[2].w[0]);
    st32((c.r[20].w[0] + 4u), c.r[18].w[0]);
    st32((c.r[20].w[0] + 8u), c.r[17].w[0]);
    st32((c.r[20].w[0] + 12u), c.r[16].w[0]);
    st32((c.r[19].w[0] + 5192u), c.r[20].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002604F8u); set32(c.r[4], ld32((c.r[29].w[0] + 108u)));  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x002604F8u) [[unlikely]] return; }
L_002604F8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_00260520:
    set32(c.r[2], ld32((c.r[4].w[0] + 5180u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 5180u), c.r[5].w[0]);  c.pc = t; return; }
L_00260530:
    set32(c.r[2], ld32((c.r[4].w[0] + 5196u)));
    st32((c.r[4].w[0] + 5196u), c.r[5].w[0]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 5200u), c.r[6].w[0]);  c.pc = t; return; }
L_00260540:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_00260700; } }
L_00260560:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[4], c.r[2].w[0] + c.r[17].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[3], c.r[3].w[0] + 31888u);
    set32(c.r[4], c.r[4].w[0] << 4);
    set32(c.r[16], c.r[3].w[0] + c.r[4].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 8896u)));
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.budget -= 10;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002606FC; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[18].w[0] + 944u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_002606FC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002605A0u);  if (depth < kMaxDepth) unit_0058(c, 62u, depth + 1u); else { c.pc = 0x00260730u; return; } if (c.pc != 0x002605A0u) [[unlikely]] return; }
L_002605A0:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[16].w[0] + 16u);  if (t) { goto L_002606FC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002605B4u); set32(c.r[5], c.r[18].w[0] + 224u);  if (depth < kMaxDepth) unit_0011(c, 16u, depth + 1u); else { c.pc = 0x00144400u; return; } if (c.pc != 0x002605B4u) [[unlikely]] return; }
L_002605B4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002606FC; } }
    c.f[2] = ld32((c.r[16].w[0] + 20u));
    c.f[1] = ld32((c.r[18].w[0] + 228u));
    c.f[0] = 0u;
    c.f[1] = fp::sub(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002605F4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);  if (t) { goto L_002605FC; } }
L_002605F4:
    c.f[1] = c.f[1] ^ fp::kSign;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.budget -= 2;
L_002605FC:
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002606FC; } }
    ld128((c.r[16].w[0] + 16u) & ~15u, c.r[2]);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    st128((c.r[18].w[0] + 224u) & ~15u, c.r[2]);
    ld128((c.r[16].w[0] + 16u) & ~15u, c.r[3]);
    set32(c.r[2], ld32((c.r[18].w[0] + 64u)));
    c.budget -= 7;
    { const bool t = c.r[18].d[0] == 0ull; st128((c.r[2].w[0] + 48u) & ~15u, c.r[3]);  if (t) { goto L_00260630; } }
    set32(c.r[4], c.r[4].w[0] + 436u);
    c.budget -= 1;
L_00260630:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4D6F0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026063Cu); c.r[5].d[0] = c.r[2].d[0] | 18543ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x0026063Cu) [[unlikely]] return; }
L_0026063C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_00260648; } }
    set32(c.r[3], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 1;
L_00260648:
    c.f[0] = ld32((c.r[16].w[0] + 16u));
    set32(c.r[2], ld32((c.r[3].w[0] + 32u)));
    st32((c.r[2].w[0] + 48u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 16u));
    set32(c.r[2], ld32((c.r[3].w[0] + 32u)));
    st32((c.r[2].w[0] + 64u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 16u));
    set32(c.r[2], ld32((c.r[3].w[0] + 32u)));
    st32((c.r[2].w[0] + 80u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 24u));
    set32(c.r[2], ld32((c.r[3].w[0] + 32u)));
    st32((c.r[2].w[0] + 56u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 24u));
    set32(c.r[2], ld32((c.r[3].w[0] + 32u)));
    st32((c.r[2].w[0] + 72u), c.f[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 32u)));
    c.f[0] = ld32((c.r[16].w[0] + 24u));
    st32((c.r[2].w[0] + 88u), c.f[0]);
    set32(c.r[5], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026069Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0030(c, 17u, depth + 1u); else { c.pc = 0x001C02A0u; return; } if (c.pc != 0x0026069Cu) [[unlikely]] return; }
L_0026069C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[2].d[0] = 0ull & 1ull;
    st32((c.r[18].w[0] + 236u), c.r[3].w[0]);
    set32(c.r[8], c.r[2].w[0] << 3);
    c.f[0] = ld32((c.r[16].w[0] + 32u));
    set32(c.r[7], 0u - 9u);
    c.r[6].d[0] = 0ull + static_cast<std::uint64_t>(8ll);
    set32(c.r[3], 0u - 65u);
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(64ll);
    set32(c.r[2], 0u + 1u);
    st32((c.r[18].w[0] + 212u), c.f[0]);
    c.r[5].d[0] = ld8((c.r[18].w[0] + 395u));
    c.r[5].d[0] = c.r[5].d[0] & c.r[7].d[0];
    c.r[5].d[0] = c.r[5].d[0] | c.r[8].d[0];
    st8((c.r[18].w[0] + 395u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].d[0] = ld8((c.r[18].w[0] + 397u));
    c.r[5].d[0] = c.r[5].d[0] & c.r[7].d[0];
    c.r[5].d[0] = c.r[5].d[0] | c.r[6].d[0];
    st8((c.r[18].w[0] + 397u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].d[0] = ld8((c.r[18].w[0] + 394u));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 24;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 394u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00260710; } }
L_002606FC:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_00260700:
    c.r[2].d[0] = c.r[17].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[17].w[0] << 1);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00260560u | kUnwind; return; } goto L_00260560; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00260710:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00260730:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_002607B0; } }
L_0026074C:
    set32(c.r[3], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 28320u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002607C0; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 164u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_00260780; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_002607AC; } }
L_00260780:
    set32(c.r[4], c.r[4].w[0] + 224u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026078Cu); set32(c.r[5], c.r[17].w[0] + 16u);  if (depth < kMaxDepth) unit_0011(c, 14u, depth + 1u); else { c.pc = 0x001443A0u; return; } if (c.pc != 0x0026078Cu) [[unlikely]] return; }
L_0026078C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002607AC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_002607C4; } }
L_002607AC:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_002607B0:
    c.r[2].d[0] = c.r[16].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0026074Cu | kUnwind; return; } goto L_0026074C; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_002607C0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_002607C4:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002607E0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002607F4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_003D(c, 81u, depth + 1u); else { c.pc = 0x001F53D0u; return; } if (c.pc != 0x002607F4u) [[unlikely]] return; }
L_002607F4:
    set32(c.r[3], 0u + 33u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00260824; } }
    set32(c.r[3], 0u + 30u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00260814; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0026082C; } }
L_00260814:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026081Cu);  if (depth < kMaxDepth) unit_0058(c, 69u, depth + 1u); else { c.pc = 0x00260840u; return; } if (c.pc != 0x0026081Cu) [[unlikely]] return; }
L_0026081C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_00260830; } }
L_00260824:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026082Cu);  if (depth < kMaxDepth) unit_0058(c, 75u, depth + 1u); else { c.pc = 0x00260D80u; return; } if (c.pc != 0x0026082Cu) [[unlikely]] return; }
L_0026082C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_00260830:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00260840:
    set32(c.r[29], c.r[29].w[0] - 96u);
    set32(c.r[2], 0u + 660u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 164u)));
    c.budget -= 11;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[20].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00260874; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00260D58; } }
L_00260874:
    set32(c.r[2], 0u + 667u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 263u);  if (t) { goto L_00260888; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00260D58; } }
L_00260888:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00260898; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00260D58; } }
L_00260898:
    set32(c.r[2], 0u + 12572u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002608AC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));  if (t) { goto L_00260D5C; } }
L_002608AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002608B4u);  if (depth < kMaxDepth) unit_0034(c, 85u, depth + 1u); else { c.pc = 0x001D0B30u; return; } if (c.pc != 0x002608B4u) [[unlikely]] return; }
L_002608B4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002608C4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00260D58; } }
L_002608C4:
    c.f[1] = ld32((c.r[20].w[0] + 228u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC1A00000u);
    c.f[0] = c.r[2].w[0];
    set32(c.r[18], ld32((c.r[20].w[0] + 240u)));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[19], c.r[20].w[0] + 224u);  if (t) { goto L_002608E8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00260D58; } }
L_002608E8:
    c.f[1] = ld32((c.r[18].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC2480000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0026090C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00260D58; } }
L_0026090C:
    c.f[1] = ld32((c.r[18].w[0] + 8u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42640000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_00260930; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00260D58; } }
L_00260930:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == 0ull; c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_0026093C; } }
    set32(c.r[4], c.r[4].w[0] + 436u);
    c.budget -= 1;
L_0026093C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x47520000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00260948u); c.r[5].d[0] = c.r[2].d[0] | 16726ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x00260948u) [[unlikely]] return; }
L_00260948:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_00260954; } }
    set32(c.r[16], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 1;
L_00260954:
    c.f[1] = ld32((c.r[18].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41900000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[2].sd[0] = static_cast<std::int32_t>(0x41700000u);  if (t) { goto L_00260A24; } }
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);  if (t) { goto L_002609F4; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40E00000u);
    c.f[1] = ld32((c.r[1].w[0] + 32000u));
    c.f[2] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x425C0000u);
    c.f[0] = c.r[2].w[0];
    st32((c.r[16].w[0] + 64u), c.f[1]);
    c.f[1] = ld32((c.r[19].w[0]));
    c.f[1] = fp::sub(c.f[1], c.f[2]);
    st32((c.r[19].w[0]), c.f[1]);
    c.f[1] = ld32((c.r[18].w[0]));
    c.f[1] = fp::sub(c.f[1], c.f[2]);
    st32((c.r[18].w[0]), c.f[1]);
    c.f[1] = ld32((c.r[18].w[0] + 8u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 18;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[17].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_00260A24; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = ld32((c.r[1].w[0] + 32000u));
    st32((c.r[16].w[0] + 72u), c.f[0]);
    c.f[0] = ld32((c.r[19].w[0] + 8u));
    c.f[0] = fp::sub(c.f[0], c.f[2]);
    st32((c.r[19].w[0] + 8u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 8u));
    c.f[0] = fp::sub(c.f[0], c.f[2]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 8u), c.f[0]);  if (t) { goto L_00260A24; } }
L_002609F4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40E00000u);
    c.f[0] = ld32((c.r[1].w[0] + 32000u));
    c.r[17].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.f[1] = c.r[2].w[0];
    st32((c.r[16].w[0] + 72u), c.f[0]);
    c.f[0] = ld32((c.r[19].w[0] + 8u));
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    st32((c.r[19].w[0] + 8u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 8u));
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    st32((c.r[18].w[0] + 8u), c.f[0]);
    c.budget -= 12;
L_00260A24:
    c.f[1] = ld32((c.r[18].w[0] + 8u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);  if (t) { goto L_00260A70; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40E00000u);
    c.f[0] = ld32((c.r[1].w[0] + 32000u));
    c.r[17].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.f[1] = c.r[2].w[0];
    st32((c.r[16].w[0] + 72u), c.f[0]);
    c.f[0] = ld32((c.r[19].w[0] + 8u));
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    st32((c.r[19].w[0] + 8u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 8u));
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    st32((c.r[18].w[0] + 8u), c.f[0]);
    c.budget -= 12;
L_00260A70:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull;  if (t) { goto L_00260BD4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00260A80u);  if (depth < kMaxDepth) unit_004A(c, 1u, depth + 1u); else { c.pc = 0x00228000u; return; } if (c.pc != 0x00260A80u) [[unlikely]] return; }
L_00260A80:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00260BD4; } }
    c.f[1] = ld32((c.r[18].w[0] + 4u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC1E00000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00260BD4; } }
    c.f[3] = ld32((c.r[18].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41F00000u);
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[3]) <= fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[2].sd[0] = static_cast<std::int32_t>(0x42480000u);  if (t) { goto L_00260BD4; } }
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[3]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00260BD4; } }
    c.f[2] = ld32((c.r[18].w[0] + 8u));
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00260BD4; } }
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[2].sd[0] = static_cast<std::int32_t>(0x420C0000u);  if (t) { goto L_00260BD4; } }
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[3]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[17].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_00260B28; } }
    c.f[1] = ld32((c.r[19].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40E00000u);
    c.f[0] = c.r[2].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[19].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[1].w[0] + 31992u));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 64u), c.f[0]);  if (t) { goto L_00260B60; } }
L_00260B28:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42340000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[3]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00260B60; } }
    c.f[1] = ld32((c.r[19].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40E00000u);
    c.f[0] = c.r[2].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[19].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[1].w[0] + 31984u));
    st32((c.r[16].w[0] + 64u), c.f[0]);
    c.budget -= 8;
L_00260B60:
    c.f[1] = ld32((c.r[18].w[0] + 8u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x420C0000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[2].sd[0] = static_cast<std::int32_t>(0x42340000u);  if (t) { goto L_00260BA0; } }
    c.f[1] = ld32((c.r[19].w[0] + 8u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40E00000u);
    c.f[0] = c.r[2].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[19].w[0] + 8u), c.f[0]);
    c.f[0] = ld32((c.r[1].w[0] + 31992u));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 72u), c.f[0]);  if (t) { goto L_00260BD4; } }
L_00260BA0:
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00260BD4; } }
    c.f[1] = ld32((c.r[19].w[0] + 8u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40E00000u);
    c.f[0] = c.r[2].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[19].w[0] + 8u), c.f[0]);
    c.f[0] = ld32((c.r[1].w[0] + 31984u));
    st32((c.r[16].w[0] + 72u), c.f[0]);
    c.budget -= 8;
L_00260BD4:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull;  if (t) { goto L_00260D44; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00260BE4u);  if (depth < kMaxDepth) unit_004A(c, 2u, depth + 1u); else { c.pc = 0x00228030u; return; } if (c.pc != 0x00260BE4u) [[unlikely]] return; }
L_00260BE4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00260D44; } }
    c.f[1] = ld32((c.r[18].w[0] + 4u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC1E00000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00260D44; } }
    c.f[3] = ld32((c.r[18].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42480000u);
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[3]) <= fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[2].sd[0] = static_cast<std::int32_t>(0x428C0000u);  if (t) { goto L_00260D44; } }
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[3]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00260D44; } }
    c.f[2] = ld32((c.r[18].w[0] + 8u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41F00000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00260D44; } }
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[1]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[2].sd[0] = static_cast<std::int32_t>(0x425C0000u);  if (t) { goto L_00260D44; } }
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[3]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[17].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_00260C98; } }
    c.f[1] = ld32((c.r[19].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40E00000u);
    c.f[0] = c.r[2].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[19].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[1].w[0] + 31992u));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 64u), c.f[0]);  if (t) { goto L_00260CD0; } }
L_00260C98:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42820000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[3]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00260CD0; } }
    c.f[1] = ld32((c.r[19].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40E00000u);
    c.f[0] = c.r[2].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[19].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[1].w[0] + 31984u));
    st32((c.r[16].w[0] + 64u), c.f[0]);
    c.budget -= 8;
L_00260CD0:
    c.f[1] = ld32((c.r[18].w[0] + 8u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x420C0000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[2].sd[0] = static_cast<std::int32_t>(0x42340000u);  if (t) { goto L_00260D10; } }
    c.f[1] = ld32((c.r[19].w[0] + 8u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40E00000u);
    c.f[0] = c.r[2].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[19].w[0] + 8u), c.f[0]);
    c.f[0] = ld32((c.r[1].w[0] + 31992u));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 72u), c.f[0]);  if (t) { goto L_00260D44; } }
L_00260D10:
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00260D44; } }
    c.f[1] = ld32((c.r[19].w[0] + 8u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40E00000u);
    c.f[0] = c.r[2].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[19].w[0] + 8u), c.f[0]);
    c.f[0] = ld32((c.r[1].w[0] + 31984u));
    st32((c.r[16].w[0] + 72u), c.f[0]);
    c.budget -= 8;
L_00260D44:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00260D58; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00260D54u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 191u, depth + 1u); else { c.pc = 0x001E66B0u; return; } if (c.pc != 0x00260D54u) [[unlikely]] return; }
L_00260D54:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00260D58:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.budget -= 1;
L_00260D5C:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_00260D80:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[2], 0u + 660u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 164u)));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00260DA8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00260EE8; } }
L_00260DA8:
    set32(c.r[2], 0u + 667u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_00260DBC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00260EE8; } }
L_00260DBC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00260DC4u);  if (depth < kMaxDepth) unit_0034(c, 97u, depth + 1u); else { c.pc = 0x001D0D70u; return; } if (c.pc != 0x00260DC4u) [[unlikely]] return; }
L_00260DC4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00260DD0; } }
    c.r[17].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_00260DD0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00260DD8u);  if (depth < kMaxDepth) unit_0034(c, 90u, depth + 1u); else { c.pc = 0x001D0BC0u; return; } if (c.pc != 0x00260DD8u) [[unlikely]] return; }
L_00260DD8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00260DE4; } }
    c.r[17].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_00260DE4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00260DECu);  if (depth < kMaxDepth) unit_0034(c, 93u, depth + 1u); else { c.pc = 0x001D0C90u; return; } if (c.pc != 0x00260DECu) [[unlikely]] return; }
L_00260DEC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00260DF8; } }
    c.r[17].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_00260DF8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00260E00u);  if (depth < kMaxDepth) unit_0034(c, 129u, depth + 1u); else { c.pc = 0x001D1410u; return; } if (c.pc != 0x00260E00u) [[unlikely]] return; }
L_00260E00:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00260E0C; } }
    c.r[17].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_00260E0C:
    c.r[2].d[0] = c.r[17].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00260E20; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_00260EEC; } }
L_00260E20:
    c.f[1] = ld32((c.r[16].w[0] + 228u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC2DA0000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_00260E58; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC2960000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[2].sd[0] = static_cast<std::int32_t>(0xC26C0000u);  if (t) { goto L_00260E5C; } }
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_00260E58:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC26C0000u);
    c.budget -= 1;
L_00260E5C:
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[2].sd[0] = static_cast<std::int32_t>(0xC1F00000u);  if (t) { goto L_00260E88; } }
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00260E88; } }
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_00260E88:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00260EE8; } }
    c.f[1] = ld32((c.r[16].w[0] + 232u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40A00000u);
    c.f[0] = c.r[2].w[0];
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0] + 232u), c.f[0]);  if (t) { goto L_00260EB0; } }
    set32(c.r[4], c.r[4].w[0] + 436u);
    c.budget -= 1;
L_00260EB0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x47520000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00260EBCu); c.r[5].d[0] = c.r[2].d[0] | 16726ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x00260EBCu) [[unlikely]] return; }
L_00260EBC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBF000000u);
    c.f[0] = c.r[3].w[0];
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00260ED4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 16u)));  if (t) { goto L_00260ED8; } }
L_00260ED4:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00260ED8:
    st32((c.r[2].w[0] + 72u), c.f[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00260EE4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 191u, depth + 1u); else { c.pc = 0x001E66B0u; return; } if (c.pc != 0x00260EE4u) [[unlikely]] return; }
L_00260EE4:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_00260EE8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_00260EEC:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00260F00:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].d[0] = c.r[4].d[0] & 65535ull;
    set32(c.r[3], 0u + 11777u);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_002618DC; } }
    set32(c.r[3], 0u + 11521u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 11265u);  if (t) { goto L_002618BC; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0026189C; } }
    set32(c.r[3], 0u + 11009u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 10753u);  if (t) { goto L_0026187C; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0026185C; } }
    set32(c.r[3], 0u + 10497u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 10241u);  if (t) { goto L_0026183C; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0026181C; } }
    set32(c.r[3], 0u + 9985u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 9729u);  if (t) { goto L_002617FC; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_002617DC; } }
    set32(c.r[3], 0u + 9473u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 9218u);  if (t) { goto L_002617A4; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_00261788; } }
    set32(c.r[3], 0u + 9217u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 8450u);  if (t) { goto L_00261768; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0026174C; } }
    set32(c.r[3], 0u + 8449u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 8194u);  if (t) { goto L_0026172C; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_00261710; } }
    set32(c.r[3], 0u + 8193u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 7938u);  if (t) { goto L_002616F0; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_002616D4; } }
    set32(c.r[3], 0u + 7937u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 7682u);  if (t) { goto L_002616B4; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_00261698; } }
    set32(c.r[3], 0u + 7681u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 7426u);  if (t) { goto L_00261678; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0026165C; } }
    set32(c.r[3], 0u + 7425u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 7170u);  if (t) { goto L_0026163C; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_00261620; } }
    set32(c.r[3], 0u + 7169u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 6914u);  if (t) { goto L_00261600; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_002615E4; } }
    set32(c.r[3], 0u + 6913u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 6658u);  if (t) { goto L_002615C4; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_002615A8; } }
    set32(c.r[3], 0u + 6657u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 6402u);  if (t) { goto L_00261588; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0026156C; } }
    set32(c.r[3], 0u + 6401u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 6146u);  if (t) { goto L_0026154C; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_00261530; } }
    set32(c.r[3], 0u + 6145u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 5890u);  if (t) { goto L_00261510; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_002614F4; } }
    set32(c.r[3], 0u + 5889u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 5634u);  if (t) { goto L_002614D4; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_002614B8; } }
    set32(c.r[3], 0u + 5633u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 5378u);  if (t) { goto L_00261498; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0026147C; } }
    set32(c.r[3], 0u + 5377u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 5122u);  if (t) { goto L_0026145C; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_00261440; } }
    set32(c.r[3], 0u + 5121u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 4866u);  if (t) { goto L_00261420; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_00261404; } }
    set32(c.r[3], 0u + 4865u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 4354u);  if (t) { goto L_002613E4; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_002613C4; } }
    set32(c.r[3], 0u + 4610u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 4609u);  if (t) { goto L_002613A8; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_00261388; } }
    set32(c.r[3], 0u + 4353u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 4098u);  if (t) { goto L_0026136C; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_00261350; } }
    set32(c.r[3], 0u + 4097u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 3842u);  if (t) { goto L_00261330; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_00261314; } }
    set32(c.r[3], 0u + 3841u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 3586u);  if (t) { goto L_002612F8; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_002612DC; } }
    set32(c.r[3], 0u + 3585u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 3331u);  if (t) { goto L_002612BC; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0026129C; } }
    set32(c.r[3], 0u + 3330u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 3329u);  if (t) { goto L_00261280; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_00261264; } }
    set32(c.r[3], 0u + 3074u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 3073u);  if (t) { goto L_00261248; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_00261228; } }
    set32(c.r[3], 0u + 2818u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 2817u);  if (t) { goto L_0026120C; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_002611EC; } }
    set32(c.r[3], 0u + 2563u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 2562u);  if (t) { goto L_002611CC; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_002611AC; } }
    set32(c.r[3], 0u + 2561u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_00261190; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00261188; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002618FC; } }
L_00261188:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00261908; } }
L_00261190:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00261198u);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x00261198u) [[unlikely]] return; }
L_00261198:
    c.r[2].d[0] = ld8((c.r[2].w[0] + 1u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00261904; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00261908; } }
L_002611AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002611B4u);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x002611B4u) [[unlikely]] return; }
L_002611B4:
    c.r[3].d[0] = ld8((c.r[2].w[0] + 1u));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00261904; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_0026190C; } }
L_002611CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002611D4u);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x002611D4u) [[unlikely]] return; }
L_002611D4:
    c.r[3].d[0] = ld8((c.r[2].w[0] + 1u));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00261904; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00261908; } }
L_002611EC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002611F4u);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x002611F4u) [[unlikely]] return; }
L_002611F4:
    c.r[3].d[0] = ld8((c.r[2].w[0] + 2u));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00261904; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00261908; } }
L_0026120C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00261214u);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x00261214u) [[unlikely]] return; }
L_00261214:
    c.r[2].d[0] = ld8((c.r[2].w[0] + 2u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00261904; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00261908; } }
L_00261228:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00261230u);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x00261230u) [[unlikely]] return; }
L_00261230:
    c.r[3].d[0] = ld8((c.r[2].w[0] + 3u));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00261904; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00261908; } }
L_00261248:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00261250u);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x00261250u) [[unlikely]] return; }
L_00261250:
    c.r[2].d[0] = ld8((c.r[2].w[0] + 3u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00261904; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00261908; } }
L_00261264:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026126Cu);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x0026126Cu) [[unlikely]] return; }
L_0026126C:
    c.r[2].d[0] = ld8((c.r[2].w[0] + 5u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00261904; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00261908; } }
L_00261280:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00261288u);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x00261288u) [[unlikely]] return; }
L_00261288:
    c.r[2].d[0] = ld8((c.r[2].w[0] + 5u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00261904; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00261908; } }
L_0026129C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002612A4u);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x002612A4u) [[unlikely]] return; }
L_002612A4:
    c.r[3].d[0] = ld8((c.r[2].w[0] + 5u));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00261904; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00261908; } }
L_002612BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002612C4u);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x002612C4u) [[unlikely]] return; }
L_002612C4:
    c.r[3].d[0] = ld8((c.r[2].w[0] + 7u));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00261904; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00261908; } }
L_002612DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002612E4u);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x002612E4u) [[unlikely]] return; }
L_002612E4:
    c.r[2].d[0] = ld8((c.r[2].w[0] + 7u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00261904; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00261908; } }
L_002612F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00261300u);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x00261300u) [[unlikely]] return; }
L_00261300:
    c.r[2].d[0] = ld8((c.r[2].w[0] + 8u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00261904; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00261908; } }
L_00261314:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026131Cu);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x0026131Cu) [[unlikely]] return; }
L_0026131C:
    c.r[2].d[0] = ld8((c.r[2].w[0] + 8u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00261904; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00261908; } }
L_00261330:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00261338u);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x00261338u) [[unlikely]] return; }
L_00261338:
    c.r[3].d[0] = ld8((c.r[2].w[0] + 4u));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00261904; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00261908; } }
L_00261350:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00261358u);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x00261358u) [[unlikely]] return; }
L_00261358:
    c.r[2].d[0] = ld8((c.r[2].w[0] + 4u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00261904; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00261908; } }
L_0026136C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00261374u);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x00261374u) [[unlikely]] return; }
L_00261374:
    c.r[2].d[0] = ld8((c.r[2].w[0] + 10u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00261904; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00261908; } }
L_00261388:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00261390u);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x00261390u) [[unlikely]] return; }
L_00261390:
    c.r[3].d[0] = ld8((c.r[2].w[0] + 35u));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00261904; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00261908; } }
L_002613A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002613B0u);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x002613B0u) [[unlikely]] return; }
L_002613B0:
    c.r[2].d[0] = ld8((c.r[2].w[0] + 35u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00261904; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00261908; } }
L_002613C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002613CCu);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x002613CCu) [[unlikely]] return; }
L_002613CC:
    c.r[3].d[0] = ld8((c.r[2].w[0] + 10u));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00261904; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00261908; } }
L_002613E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002613ECu);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x002613ECu) [[unlikely]] return; }
L_002613EC:
    c.r[3].d[0] = ld8((c.r[2].w[0] + 12u));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00261904; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00261908; } }
L_00261404:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026140Cu);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x0026140Cu) [[unlikely]] return; }
L_0026140C:
    c.r[2].d[0] = ld8((c.r[2].w[0] + 12u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00261904; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00261908; } }
L_00261420:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00261428u);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x00261428u) [[unlikely]] return; }
L_00261428:
    c.r[3].d[0] = ld8((c.r[2].w[0] + 13u));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00261904; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00261908; } }
L_00261440:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00261448u);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x00261448u) [[unlikely]] return; }
L_00261448:
    c.r[2].d[0] = ld8((c.r[2].w[0] + 13u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00261904; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00261908; } }
L_0026145C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00261464u);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x00261464u) [[unlikely]] return; }
L_00261464:
    c.r[3].d[0] = ld8((c.r[2].w[0] + 14u));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00261904; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00261908; } }
L_0026147C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00261484u);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x00261484u) [[unlikely]] return; }
L_00261484:
    c.r[2].d[0] = ld8((c.r[2].w[0] + 14u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00261904; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00261908; } }
L_00261498:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002614A0u);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x002614A0u) [[unlikely]] return; }
L_002614A0:
    c.r[3].d[0] = ld8((c.r[2].w[0] + 15u));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00261904; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00261908; } }
L_002614B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002614C0u);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x002614C0u) [[unlikely]] return; }
L_002614C0:
    c.r[2].d[0] = ld8((c.r[2].w[0] + 15u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00261904; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00261908; } }
L_002614D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002614DCu);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x002614DCu) [[unlikely]] return; }
L_002614DC:
    c.r[3].d[0] = ld8((c.r[2].w[0] + 16u));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00261904; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00261908; } }
L_002614F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002614FCu);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x002614FCu) [[unlikely]] return; }
L_002614FC:
    c.r[2].d[0] = ld8((c.r[2].w[0] + 16u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00261904; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00261908; } }
L_00261510:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00261518u);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x00261518u) [[unlikely]] return; }
L_00261518:
    c.r[3].d[0] = ld8((c.r[2].w[0] + 17u));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00261904; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00261908; } }
L_00261530:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00261538u);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x00261538u) [[unlikely]] return; }
L_00261538:
    c.r[2].d[0] = ld8((c.r[2].w[0] + 17u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00261904; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00261908; } }
L_0026154C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00261554u);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x00261554u) [[unlikely]] return; }
L_00261554:
    c.r[3].d[0] = ld8((c.r[2].w[0] + 18u));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00261904; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00261908; } }
L_0026156C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00261574u);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x00261574u) [[unlikely]] return; }
L_00261574:
    c.r[2].d[0] = ld8((c.r[2].w[0] + 18u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00261904; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00261908; } }
L_00261588:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00261590u);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x00261590u) [[unlikely]] return; }
L_00261590:
    c.r[3].d[0] = ld8((c.r[2].w[0] + 19u));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00261904; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00261908; } }
L_002615A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002615B0u);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x002615B0u) [[unlikely]] return; }
L_002615B0:
    c.r[2].d[0] = ld8((c.r[2].w[0] + 19u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00261904; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00261908; } }
L_002615C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002615CCu);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x002615CCu) [[unlikely]] return; }
L_002615CC:
    c.r[3].d[0] = ld8((c.r[2].w[0] + 20u));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00261904; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00261908; } }
L_002615E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002615ECu);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x002615ECu) [[unlikely]] return; }
L_002615EC:
    c.r[2].d[0] = ld8((c.r[2].w[0] + 20u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00261904; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00261908; } }
L_00261600:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00261608u);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x00261608u) [[unlikely]] return; }
L_00261608:
    c.r[3].d[0] = ld8((c.r[2].w[0] + 21u));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00261904; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00261908; } }
L_00261620:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00261628u);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x00261628u) [[unlikely]] return; }
L_00261628:
    c.r[2].d[0] = ld8((c.r[2].w[0] + 21u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00261904; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00261908; } }
L_0026163C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00261644u);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x00261644u) [[unlikely]] return; }
L_00261644:
    c.r[3].d[0] = ld8((c.r[2].w[0] + 22u));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00261904; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00261908; } }
L_0026165C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00261664u);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x00261664u) [[unlikely]] return; }
L_00261664:
    c.r[2].d[0] = ld8((c.r[2].w[0] + 22u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00261904; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00261908; } }
L_00261678:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00261680u);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x00261680u) [[unlikely]] return; }
L_00261680:
    c.r[3].d[0] = ld8((c.r[2].w[0] + 23u));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00261904; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00261908; } }
L_00261698:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002616A0u);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x002616A0u) [[unlikely]] return; }
L_002616A0:
    c.r[2].d[0] = ld8((c.r[2].w[0] + 23u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00261904; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00261908; } }
L_002616B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002616BCu);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x002616BCu) [[unlikely]] return; }
L_002616BC:
    c.r[3].d[0] = ld8((c.r[2].w[0] + 24u));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00261904; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00261908; } }
L_002616D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002616DCu);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x002616DCu) [[unlikely]] return; }
L_002616DC:
    c.r[2].d[0] = ld8((c.r[2].w[0] + 24u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00261904; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00261908; } }
L_002616F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002616F8u);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x002616F8u) [[unlikely]] return; }
L_002616F8:
    c.r[3].d[0] = ld8((c.r[2].w[0] + 26u));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00261904; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00261908; } }
L_00261710:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00261718u);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x00261718u) [[unlikely]] return; }
L_00261718:
    c.r[2].d[0] = ld8((c.r[2].w[0] + 26u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00261904; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00261908; } }
L_0026172C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00261734u);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x00261734u) [[unlikely]] return; }
L_00261734:
    c.r[3].d[0] = ld8((c.r[2].w[0] + 27u));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00261904; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00261908; } }
L_0026174C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00261754u);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x00261754u) [[unlikely]] return; }
L_00261754:
    c.r[2].d[0] = ld8((c.r[2].w[0] + 27u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00261904; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00261908; } }
L_00261768:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00261770u);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x00261770u) [[unlikely]] return; }
L_00261770:
    c.r[3].d[0] = ld8((c.r[2].w[0] + 6u));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00261904; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00261908; } }
L_00261788:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00261790u);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x00261790u) [[unlikely]] return; }
L_00261790:
    c.r[2].d[0] = ld8((c.r[2].w[0] + 6u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00261904; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00261908; } }
L_002617A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002617ACu);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x002617ACu) [[unlikely]] return; }
L_002617AC:
    c.r[3].d[0] = ld8((c.r[2].w[0]));
    set32(c.r[2], 0u + 73u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002617D4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002617C4u);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x002617C4u) [[unlikely]] return; }
L_002617C4:
    c.r[3].d[0] = ld8((c.r[2].w[0]));
    set32(c.r[2], 0u + 74u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00261904; } }
L_002617D4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00261908; } }
L_002617DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002617E4u);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x002617E4u) [[unlikely]] return; }
L_002617E4:
    c.r[3].d[0] = ld8((c.r[2].w[0] + 36u));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00261904; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00261908; } }
L_002617FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00261804u);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x00261804u) [[unlikely]] return; }
L_00261804:
    c.r[3].d[0] = ld8((c.r[2].w[0] + 29u));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00261904; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00261908; } }
L_0026181C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00261824u);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x00261824u) [[unlikely]] return; }
L_00261824:
    c.r[3].d[0] = ld8((c.r[2].w[0]));
    set32(c.r[2], 0u + 72u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00261904; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00261908; } }
L_0026183C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00261844u);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x00261844u) [[unlikely]] return; }
L_00261844:
    c.r[3].d[0] = ld8((c.r[2].w[0]));
    set32(c.r[2], 0u + 77u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00261904; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00261908; } }
L_0026185C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00261864u);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x00261864u) [[unlikely]] return; }
L_00261864:
    c.r[3].d[0] = ld8((c.r[2].w[0]));
    set32(c.r[2], 0u + 22u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00261904; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00261908; } }
L_0026187C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00261884u);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x00261884u) [[unlikely]] return; }
L_00261884:
    c.r[3].d[0] = ld8((c.r[2].w[0]));
    set32(c.r[2], 0u + 69u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00261904; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00261908; } }
L_0026189C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002618A4u);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x002618A4u) [[unlikely]] return; }
L_002618A4:
    c.r[3].d[0] = ld8((c.r[2].w[0] + 39u));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00261904; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00261908; } }
L_002618BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002618C4u);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x002618C4u) [[unlikely]] return; }
L_002618C4:
    c.r[3].d[0] = ld8((c.r[2].w[0]));
    set32(c.r[2], 0u + 83u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00261904; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00261908; } }
L_002618DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002618E4u);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x002618E4u) [[unlikely]] return; }
L_002618E4:
    c.r[3].d[0] = ld8((c.r[2].w[0] + 41u));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00261904; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00261908; } }
L_002618FC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00261908; } }
L_00261904:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00261908:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_0026190C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00261920:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[4].w[0] + 984u)));
    c.budget -= 7;
    { const bool t = c.r[16].d[0] != 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00261944; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00261C30; } }
L_00261944:
    c.r[3].d[0] = c.r[5].d[0] & 65535ull;
    set32(c.r[2], 0u + 270u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 269u);  if (t) { goto L_00261BDC; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00261B94; } }
    set32(c.r[2], 0u + 268u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 267u);  if (t) { goto L_00261B54; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00261B14; } }
    set32(c.r[2], 0u + 265u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 264u);  if (t) { goto L_00261AFC; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00261AE4; } }
    set32(c.r[2], 0u + 263u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 262u);  if (t) { goto L_00261AB8; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00261A8C; } }
    set32(c.r[2], 0u + 261u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 260u);  if (t) { goto L_00261A74; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00261A48; } }
    set32(c.r[2], 0u + 259u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 257u);  if (t) { goto L_00261A1C; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00261A04; } }
    set32(c.r[2], 0u + 258u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 256u);  if (t) { goto L_002619F0; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002619E4; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002619E8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00261C24; } }
L_002619E4:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_002619E8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_00261C34; } }
L_002619F0:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 371u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00261C30; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00261C30; } }
L_00261A04:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 371u));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00261C2C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00261C30; } }
L_00261A1C:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 371u));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00261C2C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00261A34u);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x00261A34u) [[unlikely]] return; }
L_00261A34:
    c.r[2].d[0] = ld8((c.r[2].w[0] + 14u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00261C2C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00261C30; } }
L_00261A48:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 371u));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00261C2C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00261A60u);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x00261A60u) [[unlikely]] return; }
L_00261A60:
    c.r[2].d[0] = ld8((c.r[2].w[0] + 14u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00261C2C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00261C30; } }
L_00261A74:
    set32(c.r[3], ld32((c.r[16].w[0] + 464u)));
    set32(c.r[2], 0u + 6u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_00261C2C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00261C30; } }
L_00261A8C:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 371u));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00261C2C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00261AA4u);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x00261AA4u) [[unlikely]] return; }
L_00261AA4:
    c.r[2].d[0] = ld8((c.r[2].w[0] + 35u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00261C2C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00261C30; } }
L_00261AB8:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 371u));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00261C2C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00261AD0u);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x00261AD0u) [[unlikely]] return; }
L_00261AD0:
    c.r[2].d[0] = ld8((c.r[2].w[0] + 16u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00261C2C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00261C30; } }
L_00261AE4:
    set32(c.r[3], ld32((c.r[16].w[0] + 464u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_00261C2C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00261C30; } }
L_00261AFC:
    set32(c.r[3], ld32((c.r[16].w[0] + 464u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00261C2C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00261C30; } }
L_00261B14:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00261B1Cu);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x00261B1Cu) [[unlikely]] return; }
L_00261B1C:
    c.r[3].d[0] = ld8((c.r[2].w[0]));
    set32(c.r[2], 0u + 22u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00261B34; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00261C30; } }
L_00261B34:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00261B3Cu);  if (depth < kMaxDepth) unit_0070(c, 13u, depth + 1u); else { c.pc = 0x002C02E0u; return; } if (c.pc != 0x00261B3Cu) [[unlikely]] return; }
L_00261B3C:
    set32(c.r[3], ld32((c.r[16].w[0] + 912u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 912u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00261C2C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00261C30; } }
L_00261B54:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00261B5Cu);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x00261B5Cu) [[unlikely]] return; }
L_00261B5C:
    c.r[3].d[0] = ld8((c.r[2].w[0]));
    set32(c.r[2], 0u + 22u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00261B74; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00261C30; } }
L_00261B74:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00261B7Cu);  if (depth < kMaxDepth) unit_0070(c, 13u, depth + 1u); else { c.pc = 0x002C02E0u; return; } if (c.pc != 0x00261B7Cu) [[unlikely]] return; }
L_00261B7C:
    set32(c.r[3], ld32((c.r[16].w[0] + 912u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 912u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00261C2C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00261C30; } }
L_00261B94:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00261B9Cu);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x00261B9Cu) [[unlikely]] return; }
L_00261B9C:
    c.r[3].d[0] = ld8((c.r[2].w[0]));
    set32(c.r[2], 0u + 77u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00261BB4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00261C30; } }
L_00261BB4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00261BBCu);  if (depth < kMaxDepth) unit_0070(c, 15u, depth + 1u); else { c.pc = 0x002C0330u; return; } if (c.pc != 0x00261BBCu) [[unlikely]] return; }
L_00261BBC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00261C2C; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 912u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 912u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00261C2C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00261C30; } }
L_00261BDC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00261BE4u);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x00261BE4u) [[unlikely]] return; }
L_00261BE4:
    c.r[3].d[0] = ld8((c.r[2].w[0]));
    set32(c.r[2], 0u + 77u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00261BFC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00261C30; } }
L_00261BFC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00261C04u);  if (depth < kMaxDepth) unit_0070(c, 15u, depth + 1u); else { c.pc = 0x002C0330u; return; } if (c.pc != 0x00261C04u) [[unlikely]] return; }
L_00261C04:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00261C2C; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 912u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 912u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00261C2C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00261C30; } }
L_00261C24:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00261C30; } }
L_00261C2C:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00261C30:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_00261C34:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00261C50:
    set32(c.r[2], ld32((c.r[6].w[0] + 136u)));
    c.r[3].d[0] = c.r[5].d[0] & 65535ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_00261C70; } }
    set32(c.r[2], ld32((c.r[6].w[0] + 140u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00261C70; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_00261C70:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00261C80:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[2].d[0] = c.r[5].d[0] & 65535ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[5], 0u + 7937u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], c.r[6].w[0] + 312u);
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == c.r[5].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002628D8; } }
    set32(c.r[5], 0u + 7687u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[5].d[0]; set32(c.r[5], 0u + 7686u);  if (t) { goto L_002628C8; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[5].d[0];  if (t) { goto L_002628F0; } }
    set32(c.r[5], 0u + 7685u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[5].d[0]; set32(c.r[5], 0u + 7684u);  if (t) { goto L_002628F0; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[5].d[0];  if (t) { goto L_002628F0; } }
    set32(c.r[5], 0u + 7683u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[5].d[0]; set32(c.r[5], 0u + 7682u);  if (t) { goto L_002628F0; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[5].d[0];  if (t) { goto L_002628F0; } }
    set32(c.r[5], 0u + 7681u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[5].d[0]; set32(c.r[5], 0u + 8452u);  if (t) { goto L_002628B8; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[5].d[0];  if (t) { goto L_002628A8; } }
    set32(c.r[5], 0u + 8451u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[5].d[0]; set32(c.r[5], 0u + 8450u);  if (t) { goto L_00262898; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[5].d[0];  if (t) { goto L_00262880; } }
    set32(c.r[5], 0u + 8449u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[5].d[0]; set32(c.r[5], 0u + 5123u);  if (t) { goto L_00262868; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[5].d[0];  if (t) { goto L_00262850; } }
    set32(c.r[5], 0u + 5122u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[5].d[0]; set32(c.r[5], 0u + 5121u);  if (t) { goto L_00262838; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[5].d[0];  if (t) { goto L_00262820; } }
    set32(c.r[5], 0u + 2562u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[5].d[0]; set32(c.r[5], 0u + 2561u);  if (t) { goto L_002627E4; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[5].d[0];  if (t) { goto L_002627CC; } }
    set32(c.r[5], 0u + 2560u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[5].d[0]; set32(c.r[5], 0u + 2049u);  if (t) { goto L_002627A8; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[5].d[0];  if (t) { goto L_00262790; } }
    set32(c.r[5], 0u + 1795u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[5].d[0]; set32(c.r[5], 0u + 1794u);  if (t) { goto L_0026277C; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[5].d[0];  if (t) { goto L_00262764; } }
    set32(c.r[5], 0u + 1793u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[5].d[0]; set32(c.r[5], 0u + 1540u);  if (t) { goto L_00262750; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[5].d[0];  if (t) { goto L_00262728; } }
    set32(c.r[5], 0u + 1539u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[5].d[0]; set32(c.r[5], 0u + 1538u);  if (t) { goto L_00262700; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[5].d[0];  if (t) { goto L_002626E8; } }
    set32(c.r[5], 0u + 1537u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[5].d[0]; set32(c.r[5], 0u + 1288u);  if (t) { goto L_002626D0; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[5].d[0];  if (t) { goto L_002626B8; } }
    set32(c.r[5], 0u + 1287u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[5].d[0]; set32(c.r[5], 0u + 1286u);  if (t) { goto L_002626A0; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[5].d[0];  if (t) { goto L_00262688; } }
    set32(c.r[5], 0u + 1285u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[5].d[0]; set32(c.r[5], 0u + 1284u);  if (t) { goto L_00262670; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[5].d[0];  if (t) { goto L_00262658; } }
    set32(c.r[5], 0u + 1283u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[5].d[0]; set32(c.r[5], 0u + 1282u);  if (t) { goto L_00262638; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[5].d[0];  if (t) { goto L_00262618; } }
    set32(c.r[5], 0u + 1281u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[5].d[0]; set32(c.r[5], 0u + 1280u);  if (t) { goto L_002625F8; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[5].d[0];  if (t) { goto L_002625E0; } }
    set32(c.r[5], 0u + 1036u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[5].d[0]; set32(c.r[5], 0u + 1035u);  if (t) { goto L_002625C8; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[5].d[0];  if (t) { goto L_002625B0; } }
    set32(c.r[5], 0u + 1034u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[5].d[0]; set32(c.r[5], 0u + 1041u);  if (t) { goto L_00262580; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[5].d[0];  if (t) { goto L_00262554; } }
    set32(c.r[5], 0u + 1040u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[5].d[0]; set32(c.r[5], 0u + 1039u);  if (t) { goto L_002624F0; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[5].d[0];  if (t) { goto L_002624B0; } }
    set32(c.r[5], 0u + 1038u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[5].d[0]; set32(c.r[5], 0u + 1037u);  if (t) { goto L_00262494; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[5].d[0];  if (t) { goto L_0026247C; } }
    set32(c.r[5], 0u + 1032u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[5].d[0]; set32(c.r[5], 0u + 1031u);  if (t) { goto L_002623FC; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[5].d[0];  if (t) { goto L_002623DC; } }
    set32(c.r[5], 0u + 1030u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[5].d[0]; set32(c.r[5], 0u + 1029u);  if (t) { goto L_002623C4; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[5].d[0];  if (t) { goto L_002623A4; } }
    set32(c.r[5], 0u + 1028u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[5].d[0]; set32(c.r[5], 0u + 1026u);  if (t) { goto L_002628F0; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[5].d[0];  if (t) { goto L_0026238C; } }
    set32(c.r[5], 0u + 1025u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[5].d[0]; set32(c.r[5], 0u + 1024u);  if (t) { goto L_0026236C; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[5].d[0];  if (t) { goto L_002622C8; } }
    set32(c.r[5], 0u + 776u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[5].d[0]; set32(c.r[5], 0u + 775u);  if (t) { goto L_002622B0; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[5].d[0];  if (t) { goto L_00262298; } }
    set32(c.r[5], 0u + 774u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[5].d[0]; set32(c.r[5], 0u + 773u);  if (t) { goto L_00262280; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[5].d[0];  if (t) { goto L_00262268; } }
    set32(c.r[5], 0u + 772u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[5].d[0]; set32(c.r[5], 0u + 771u);  if (t) { goto L_00262250; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[5].d[0];  if (t) { goto L_00262238; } }
    set32(c.r[5], 0u + 770u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[5].d[0]; set32(c.r[5], 0u + 769u);  if (t) { goto L_00262220; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[5].d[0];  if (t) { goto L_00262208; } }
    set32(c.r[5], 0u + 768u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[5].d[0]; set32(c.r[5], 0u + 522u);  if (t) { goto L_002621F0; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[5].d[0];  if (t) { goto L_002621B8; } }
    set32(c.r[5], 0u + 521u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[5].d[0]; set32(c.r[5], 0u + 516u);  if (t) { goto L_002621A0; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[5].d[0];  if (t) { goto L_00262188; } }
    set32(c.r[5], 0u + 515u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[5].d[0]; set32(c.r[5], 0u + 514u);  if (t) { goto L_00262170; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[5].d[0];  if (t) { goto L_00262158; } }
    set32(c.r[5], 0u + 513u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[5].d[0];  if (t) { goto L_00262140; } }
    set32(c.r[4], 0u + 512u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[4].d[0]; set32(c.r[4], 0u + 264u);  if (t) { goto L_002620CC; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[4].d[0];  if (t) { goto L_002620B4; } }
    set32(c.r[4], 0u + 263u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[4].d[0]; set32(c.r[4], 0u + 262u);  if (t) { goto L_0026209C; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[4].d[0];  if (t) { goto L_00262084; } }
    set32(c.r[4], 0u + 261u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[4].d[0]; set32(c.r[4], 0u + 260u);  if (t) { goto L_0026206C; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[4].d[0];  if (t) { goto L_00262054; } }
    set32(c.r[4], 0u + 259u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[4].d[0];  if (t) { goto L_0026203C; } }
    set32(c.r[3], 0u + 266u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 265u);  if (t) { goto L_00262010; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_00261FE4; } }
    set32(c.r[3], 0u + 258u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 257u);  if (t) { goto L_00261FCC; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_00261FB4; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00261FAC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002628E8; } }
L_00261FAC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002628F4; } }
L_00261FB4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00261FBCu);  if (depth < kMaxDepth) unit_003D(c, 344u, depth + 1u); else { c.pc = 0x001F7FB0u; return; } if (c.pc != 0x00261FBCu) [[unlikely]] return; }
L_00261FBC:
    c.r[2].d[0] = c.r[2].sd[0] < 3ll ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] & 255ull;  if (t) { goto L_002628F4; } }
L_00261FCC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00261FD4u);  if (depth < kMaxDepth) unit_003D(c, 344u, depth + 1u); else { c.pc = 0x001F7FB0u; return; } if (c.pc != 0x00261FD4u) [[unlikely]] return; }
L_00261FD4:
    c.r[2].d[0] = c.r[2].sd[0] < 5ll ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] & 255ull;  if (t) { goto L_002628F4; } }
L_00261FE4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00261FECu);  if (depth < kMaxDepth) unit_003D(c, 344u, depth + 1u); else { c.pc = 0x001F7FB0u; return; } if (c.pc != 0x00261FECu) [[unlikely]] return; }
L_00261FEC:
    c.r[2].d[0] = c.r[2].sd[0] < 3ll ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00262008; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00262004u);  if (depth < kMaxDepth) unit_0070(c, 10u, depth + 1u); else { c.pc = 0x002C01D0u; return; } if (c.pc != 0x00262004u) [[unlikely]] return; }
L_00262004:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 1;
L_00262008:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] & 255ull;  if (t) { goto L_002628F4; } }
L_00262010:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00262018u);  if (depth < kMaxDepth) unit_003D(c, 344u, depth + 1u); else { c.pc = 0x001F7FB0u; return; } if (c.pc != 0x00262018u) [[unlikely]] return; }
L_00262018:
    c.r[2].d[0] = c.r[2].sd[0] < 5ll ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00262034; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00262030u);  if (depth < kMaxDepth) unit_0070(c, 10u, depth + 1u); else { c.pc = 0x002C01D0u; return; } if (c.pc != 0x00262030u) [[unlikely]] return; }
L_00262030:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 1;
L_00262034:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] & 255ull;  if (t) { goto L_002628F4; } }
L_0026203C:
    set32(c.r[2], ld32((c.r[3].w[0] + 44u)));
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(601ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002628F4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002628F4; } }
L_00262054:
    set32(c.r[2], ld32((c.r[3].w[0] + 44u)));
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1801ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002628F0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_002628F8; } }
L_0026206C:
    set32(c.r[2], ld32((c.r[3].w[0] + 16u)));
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(7201ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002628F0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002628F4; } }
L_00262084:
    set32(c.r[2], ld32((c.r[3].w[0] + 16u)));
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(14401ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002628F0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002628F4; } }
L_0026209C:
    set32(c.r[2], ld32((c.r[3].w[0] + 20u)));
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(3601ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002628F0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002628F4; } }
L_002620B4:
    set32(c.r[2], ld32((c.r[3].w[0] + 20u)));
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(7201ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002628F0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002628F4; } }
L_002620CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002620D4u);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x002620D4u) [[unlikely]] return; }
L_002620D4:
    c.r[2].d[0] = ld8((c.r[2].w[0] + 19u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_002620F8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002620E8u);  if (depth < kMaxDepth) unit_006F(c, 285u, depth + 1u); else { c.pc = 0x002BFCC0u; return; } if (c.pc != 0x002620E8u) [[unlikely]] return; }
L_002620E8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002620F8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002628F4; } }
L_002620F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00262100u);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x00262100u) [[unlikely]] return; }
L_00262100:
    c.r[2].d[0] = ld8((c.r[2].w[0] + 9u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00262128; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00262114u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006F(c, 292u, depth + 1u); else { c.pc = 0x002BFF20u; return; } if (c.pc != 0x00262114u) [[unlikely]] return; }
L_00262114:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00262124; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002628F4; } }
L_00262124:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_00262128:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00262130u);  if (depth < kMaxDepth) unit_0070(c, 83u, depth + 1u); else { c.pc = 0x002C19D0u; return; } if (c.pc != 0x00262130u) [[unlikely]] return; }
L_00262130:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002628F0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002628F4; } }
L_00262140:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00262148u);  if (depth < kMaxDepth) unit_0070(c, 83u, depth + 1u); else { c.pc = 0x002C19D0u; return; } if (c.pc != 0x00262148u) [[unlikely]] return; }
L_00262148:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002628F0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002628F4; } }
L_00262158:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00262160u);  if (depth < kMaxDepth) unit_006F(c, 285u, depth + 1u); else { c.pc = 0x002BFCC0u; return; } if (c.pc != 0x00262160u) [[unlikely]] return; }
L_00262160:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002628F0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002628F4; } }
L_00262170:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00262178u);  if (depth < kMaxDepth) unit_006F(c, 292u, depth + 1u); else { c.pc = 0x002BFF20u; return; } if (c.pc != 0x00262178u) [[unlikely]] return; }
L_00262178:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002628F0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002628F4; } }
L_00262188:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00262190u);  if (depth < kMaxDepth) unit_0070(c, 83u, depth + 1u); else { c.pc = 0x002C19D0u; return; } if (c.pc != 0x00262190u) [[unlikely]] return; }
L_00262190:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002628F0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002628F4; } }
L_002621A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002621A8u);  if (depth < kMaxDepth) unit_0070(c, 171u, depth + 1u); else { c.pc = 0x002C3040u; return; } if (c.pc != 0x002621A8u) [[unlikely]] return; }
L_002621A8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002628F0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002628F4; } }
L_002621B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002621C0u);  if (depth < kMaxDepth) unit_0070(c, 173u, depth + 1u); else { c.pc = 0x002C30C0u; return; } if (c.pc != 0x002621C0u) [[unlikely]] return; }
L_002621C0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002621D0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002628F4; } }
L_002621D0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002628F0; } }
    set32(c.r[3], ld32((c.r[2].w[0] + 912u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 912u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002628F0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002628F4; } }
L_002621F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002621F8u);  if (depth < kMaxDepth) unit_006F(c, 239u, depth + 1u); else { c.pc = 0x002BEA70u; return; } if (c.pc != 0x002621F8u) [[unlikely]] return; }
L_002621F8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002628F0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002628F4; } }
L_00262208:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00262210u);  if (depth < kMaxDepth) unit_006F(c, 240u, depth + 1u); else { c.pc = 0x002BEB70u; return; } if (c.pc != 0x00262210u) [[unlikely]] return; }
L_00262210:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002628F0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002628F4; } }
L_00262220:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00262228u);  if (depth < kMaxDepth) unit_006F(c, 244u, depth + 1u); else { c.pc = 0x002BEDA0u; return; } if (c.pc != 0x00262228u) [[unlikely]] return; }
L_00262228:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002628F0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002628F4; } }
L_00262238:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00262240u);  if (depth < kMaxDepth) unit_006F(c, 245u, depth + 1u); else { c.pc = 0x002BEE60u; return; } if (c.pc != 0x00262240u) [[unlikely]] return; }
L_00262240:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002628F0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002628F4; } }
L_00262250:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00262258u);  if (depth < kMaxDepth) unit_006F(c, 233u, depth + 1u); else { c.pc = 0x002BE810u; return; } if (c.pc != 0x00262258u) [[unlikely]] return; }
L_00262258:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002628F0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002628F4; } }
L_00262268:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00262270u);  if (depth < kMaxDepth) unit_006F(c, 234u, depth + 1u); else { c.pc = 0x002BE840u; return; } if (c.pc != 0x00262270u) [[unlikely]] return; }
L_00262270:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002628F0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002628F4; } }
L_00262280:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00262288u); c.r[4].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_006F(c, 249u, depth + 1u); else { c.pc = 0x002BF020u; return; } if (c.pc != 0x00262288u) [[unlikely]] return; }
L_00262288:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002628F0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002628F4; } }
L_00262298:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002622A0u); c.r[4].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_006F(c, 251u, depth + 1u); else { c.pc = 0x002BF070u; return; } if (c.pc != 0x002622A0u) [[unlikely]] return; }
L_002622A0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002628F0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002628F4; } }
L_002622B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002622B8u);  if (depth < kMaxDepth) unit_0034(c, 218u, depth + 1u); else { c.pc = 0x001D31B0u; return; } if (c.pc != 0x002622B8u) [[unlikely]] return; }
L_002622B8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002628F0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002628F4; } }
L_002622C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002622D0u);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x002622D0u) [[unlikely]] return; }
L_002622D0:
    c.r[3].d[0] = ld8((c.r[2].w[0] + 17u));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002622E8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002628F4; } }
L_002622E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002622F0u);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x002622F0u) [[unlikely]] return; }
L_002622F0:
    c.r[3].d[0] = ld8((c.r[2].w[0] + 24u));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00262308; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002628F4; } }
L_00262308:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00262310u);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x00262310u) [[unlikely]] return; }
L_00262310:
    c.r[3].d[0] = ld8((c.r[2].w[0] + 19u));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00262328; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002628F4; } }
L_00262328:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00262330u);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x00262330u) [[unlikely]] return; }
L_00262330:
    c.r[3].d[0] = ld8((c.r[2].w[0] + 18u));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00262348; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002628F4; } }
L_00262348:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42700000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026235Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0058(c, 310u, depth + 1u); else { c.pc = 0x00263BE0u; return; } if (c.pc != 0x0026235Cu) [[unlikely]] return; }
L_0026235C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002628F0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002628F4; } }
L_0026236C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00262374u);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x00262374u) [[unlikely]] return; }
L_00262374:
    c.r[3].d[0] = ld8((c.r[2].w[0] + 18u));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002628F0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002628F4; } }
L_0026238C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00262394u);  if (depth < kMaxDepth) unit_0059(c, 9u, depth + 1u); else { c.pc = 0x00264150u; return; } if (c.pc != 0x00262394u) [[unlikely]] return; }
L_00262394:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002628F0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002628F4; } }
L_002623A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002623ACu);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x002623ACu) [[unlikely]] return; }
L_002623AC:
    c.r[3].d[0] = ld8((c.r[2].w[0] + 19u));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002628F0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002628F4; } }
L_002623C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002623CCu);  if (depth < kMaxDepth) unit_0059(c, 24u, depth + 1u); else { c.pc = 0x00264400u; return; } if (c.pc != 0x002623CCu) [[unlikely]] return; }
L_002623CC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002628F0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002628F4; } }
L_002623DC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43C80000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002623ECu); set32(c.r[5], 0u + 11u);  if (depth < kMaxDepth) unit_0058(c, 310u, depth + 1u); else { c.pc = 0x00263BE0u; return; } if (c.pc != 0x002623ECu) [[unlikely]] return; }
L_002623EC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002628F0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002628F4; } }
L_002623FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00262404u);  if (depth < kMaxDepth) unit_0059(c, 24u, depth + 1u); else { c.pc = 0x00264400u; return; } if (c.pc != 0x00262404u) [[unlikely]] return; }
L_00262404:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_002628F0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00262418u);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x00262418u) [[unlikely]] return; }
L_00262418:
    c.r[3].d[0] = ld8((c.r[2].w[0] + 19u));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002628F0; } }
    c.f[2] = ld32((c.r[16].w[0] + 224u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41700000u);
    c.f[1] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[3].sd[0] = static_cast<std::int32_t>(0xC1700000u);  if (t) { goto L_002628F0; } }
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002628F0; } }
    c.f[2] = ld32((c.r[16].w[0] + 232u));
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002628F0; } }
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[0]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002628F0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002628F4; } }
L_0026247C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00262484u);  if (depth < kMaxDepth) unit_0058(c, 322u, depth + 1u); else { c.pc = 0x00263F60u; return; } if (c.pc != 0x00262484u) [[unlikely]] return; }
L_00262484:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_002628F0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002628F4; } }
L_00262494:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026249Cu);  if (depth < kMaxDepth) unit_0058(c, 322u, depth + 1u); else { c.pc = 0x00263F60u; return; } if (c.pc != 0x0026249Cu) [[unlikely]] return; }
L_0026249C:
    c.r[2].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002628F0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002628F4; } }
L_002624B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002624B8u);  if (depth < kMaxDepth) unit_003D(c, 81u, depth + 1u); else { c.pc = 0x001F53D0u; return; } if (c.pc != 0x002624B8u) [[unlikely]] return; }
L_002624B8:
    set32(c.r[3], 0u + 31u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_002624CC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002628F4; } }
L_002624CC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002624E0u); set32(c.r[5], 0u + 35u);  if (depth < kMaxDepth) unit_0058(c, 310u, depth + 1u); else { c.pc = 0x00263BE0u; return; } if (c.pc != 0x002624E0u) [[unlikely]] return; }
L_002624E0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002628F0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002628F4; } }
L_002624F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002624F8u);  if (depth < kMaxDepth) unit_003D(c, 81u, depth + 1u); else { c.pc = 0x001F53D0u; return; } if (c.pc != 0x002624F8u) [[unlikely]] return; }
L_002624F8:
    set32(c.r[3], 0u + 31u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0026250C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002628F4; } }
L_0026250C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00262514u);  if (depth < kMaxDepth) unit_0059(c, 6u, depth + 1u); else { c.pc = 0x002640E0u; return; } if (c.pc != 0x00262514u) [[unlikely]] return; }
L_00262514:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[29].w[0] + 32u);  if (t) { goto L_002628F0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00262524u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_007F(c, 83u, depth + 1u); else { c.pc = 0x002FCCF0u; return; } if (c.pc != 0x00262524u) [[unlikely]] return; }
L_00262524:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[16].w[0] + 224u);  if (t) { goto L_002628F0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00262534u); set32(c.r[5], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_0011(c, 13u, depth + 1u); else { c.pc = 0x00144360u; return; } if (c.pc != 0x00262534u) [[unlikely]] return; }
L_00262534:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42700000u);
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[2], 0u + 1u);  if (t) { goto L_002628F0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002628F4; } }
L_00262554:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 370u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], 0u - 1u);  if (t) { goto L_00262568; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002628F4; } }
L_00262568:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00262570u);  if (depth < kMaxDepth) unit_0058(c, 316u, depth + 1u); else { c.pc = 0x00263E10u; return; } if (c.pc != 0x00262570u) [[unlikely]] return; }
L_00262570:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002628F0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002628F4; } }
L_00262580:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00262588u);  if (depth < kMaxDepth) unit_0059(c, 12u, depth + 1u); else { c.pc = 0x00264200u; return; } if (c.pc != 0x00262588u) [[unlikely]] return; }
L_00262588:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00262598; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002628F4; } }
L_00262598:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002625A0u);  if (depth < kMaxDepth) unit_0059(c, 22u, depth + 1u); else { c.pc = 0x00264380u; return; } if (c.pc != 0x002625A0u) [[unlikely]] return; }
L_002625A0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002628F0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002628F4; } }
L_002625B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002625B8u);  if (depth < kMaxDepth) unit_0059(c, 18u, depth + 1u); else { c.pc = 0x00264300u; return; } if (c.pc != 0x002625B8u) [[unlikely]] return; }
L_002625B8:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_002628F0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002628F4; } }
L_002625C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002625D0u);  if (depth < kMaxDepth) unit_0059(c, 12u, depth + 1u); else { c.pc = 0x00264200u; return; } if (c.pc != 0x002625D0u) [[unlikely]] return; }
L_002625D0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002628F0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002628F4; } }
L_002625E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002625E8u);  if (depth < kMaxDepth) unit_0070(c, 122u, depth + 1u); else { c.pc = 0x002C2270u; return; } if (c.pc != 0x002625E8u) [[unlikely]] return; }
L_002625E8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002628F0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002628F4; } }
L_002625F8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42700000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00262608u);  if (depth < kMaxDepth) unit_0070(c, 129u, depth + 1u); else { c.pc = 0x002C2440u; return; } if (c.pc != 0x00262608u) [[unlikely]] return; }
L_00262608:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002628F0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002628F4; } }
L_00262618:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43480000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00262628u);  if (depth < kMaxDepth) unit_0070(c, 129u, depth + 1u); else { c.pc = 0x002C2440u; return; } if (c.pc != 0x00262628u) [[unlikely]] return; }
L_00262628:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002628F0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002628F4; } }
L_00262638:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42700000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00262648u);  if (depth < kMaxDepth) unit_0070(c, 132u, depth + 1u); else { c.pc = 0x002C2510u; return; } if (c.pc != 0x00262648u) [[unlikely]] return; }
L_00262648:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002628F0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002628F4; } }
L_00262658:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00262660u);  if (depth < kMaxDepth) unit_0070(c, 124u, depth + 1u); else { c.pc = 0x002C22D0u; return; } if (c.pc != 0x00262660u) [[unlikely]] return; }
L_00262660:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002628F0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002628F4; } }
L_00262670:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00262678u);  if (depth < kMaxDepth) unit_0070(c, 127u, depth + 1u); else { c.pc = 0x002C2370u; return; } if (c.pc != 0x00262678u) [[unlikely]] return; }
L_00262678:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002628F0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002628F4; } }
L_00262688:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00262690u);  if (depth < kMaxDepth) unit_0070(c, 91u, depth + 1u); else { c.pc = 0x002C1B80u; return; } if (c.pc != 0x00262690u) [[unlikely]] return; }
L_00262690:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002628F0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002628F4; } }
L_002626A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002626A8u);  if (depth < kMaxDepth) unit_0070(c, 98u, depth + 1u); else { c.pc = 0x002C1D30u; return; } if (c.pc != 0x002626A8u) [[unlikely]] return; }
L_002626A8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002628F0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002628F4; } }
L_002626B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002626C0u);  if (depth < kMaxDepth) unit_0070(c, 136u, depth + 1u); else { c.pc = 0x002C25F0u; return; } if (c.pc != 0x002626C0u) [[unlikely]] return; }
L_002626C0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002628F0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002628F4; } }
L_002626D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002626D8u);  if (depth < kMaxDepth) unit_0070(c, 202u, depth + 1u); else { c.pc = 0x002C36F0u; return; } if (c.pc != 0x002626D8u) [[unlikely]] return; }
L_002626D8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002628F0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002628F4; } }
L_002626E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002626F0u);  if (depth < kMaxDepth) unit_0070(c, 202u, depth + 1u); else { c.pc = 0x002C36F0u; return; } if (c.pc != 0x002626F0u) [[unlikely]] return; }
L_002626F0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002628F0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002628F4; } }
L_00262700:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00262708u);  if (depth < kMaxDepth) unit_0070(c, 202u, depth + 1u); else { c.pc = 0x002C36F0u; return; } if (c.pc != 0x00262708u) [[unlikely]] return; }
L_00262708:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_002628F0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00262718u);  if (depth < kMaxDepth) unit_0070(c, 91u, depth + 1u); else { c.pc = 0x002C1B80u; return; } if (c.pc != 0x00262718u) [[unlikely]] return; }
L_00262718:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002628F0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002628F4; } }
L_00262728:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00262730u); set32(c.r[4], ld32((c.r[16].w[0] + 984u)));  if (depth < kMaxDepth) unit_006F(c, 259u, depth + 1u); else { c.pc = 0x002BF4D0u; return; } if (c.pc != 0x00262730u) [[unlikely]] return; }
L_00262730:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41800000u);
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[2], 0u + 1u);  if (t) { goto L_002628F0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002628F4; } }
L_00262750:
    set32(c.r[2], ld32((c.r[16].w[0] + 684u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_002628F0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002628F4; } }
L_00262764:
    set32(c.r[2], ld32((c.r[16].w[0] + 684u)));
    c.r[2].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002628F0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002628F4; } }
L_0026277C:
    set32(c.r[2], ld32((c.r[16].w[0] + 684u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002628F0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002628F4; } }
L_00262790:
    set32(c.r[2], ld32((c.r[3].w[0] + 52u)));
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(901ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002628F0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002628F4; } }
L_002627A8:
    set32(c.r[2], ld32((c.r[6].w[0] + 36u)));
    c.r[1].d[0] = c.r[2].sd[0] < 256ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002628F0; } }
    c.r[2].d[0] = c.r[2].sd[0] < 247ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002628F0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002628F4; } }
L_002627CC:
    set32(c.r[3], ld32((c.r[6].w[0] + 32u)));
    set32(c.r[2], 0u + 253u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_002628F0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002628F4; } }
L_002627E4:
    set32(c.r[3], ld32((c.r[6].w[0] + 32u)));
    set32(c.r[2], 0u + 250u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 253u);  if (t) { goto L_002627FC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002628F4; } }
L_002627FC:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0026280C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002628F4; } }
L_0026280C:
    set32(c.r[2], 0u + 232u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_002628F0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002628F4; } }
L_00262820:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00262828u);  if (depth < kMaxDepth) unit_0058(c, 306u, depth + 1u); else { c.pc = 0x00263AA0u; return; } if (c.pc != 0x00262828u) [[unlikely]] return; }
L_00262828:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002628F0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002628F4; } }
L_00262838:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 370u));
    set32(c.r[2], 0u + 10u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_002628F0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002628F4; } }
L_00262850:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00262858u);  if (depth < kMaxDepth) unit_0058(c, 305u, depth + 1u); else { c.pc = 0x00263A20u; return; } if (c.pc != 0x00262858u) [[unlikely]] return; }
L_00262858:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002628F0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002628F4; } }
L_00262868:
    set32(c.r[3], ld32((c.r[6].w[0] + 32u)));
    set32(c.r[2], 0u + 213u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_002628F0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002628F4; } }
L_00262880:
    set32(c.r[3], ld32((c.r[6].w[0] + 32u)));
    set32(c.r[2], 0u + 214u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_002628F0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002628F4; } }
L_00262898:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002628A0u);  if (depth < kMaxDepth) unit_0070(c, 163u, depth + 1u); else { c.pc = 0x002C2ED0u; return; } if (c.pc != 0x002628A0u) [[unlikely]] return; }
L_002628A0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002628F4; } }
L_002628A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002628B0u);  if (depth < kMaxDepth) unit_0070(c, 166u, depth + 1u); else { c.pc = 0x002C2F50u; return; } if (c.pc != 0x002628B0u) [[unlikely]] return; }
L_002628B0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002628F4; } }
L_002628B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002628C0u);  if (depth < kMaxDepth) unit_0070(c, 167u, depth + 1u); else { c.pc = 0x002C2F60u; return; } if (c.pc != 0x002628C0u) [[unlikely]] return; }
L_002628C0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002628F4; } }
L_002628C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002628D0u);  if (depth < kMaxDepth) unit_0070(c, 177u, depth + 1u); else { c.pc = 0x002C31B0u; return; } if (c.pc != 0x002628D0u) [[unlikely]] return; }
L_002628D0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002628F4; } }
L_002628D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002628E0u);  if (depth < kMaxDepth) unit_0070(c, 179u, depth + 1u); else { c.pc = 0x002C3230u; return; } if (c.pc != 0x002628E0u) [[unlikely]] return; }
L_002628E0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002628F4; } }
L_002628E8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002628F4; } }
L_002628F0:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002628F4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_002628F8:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00262910:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[5].w[0]));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00262938u); c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_0058(c, 146u, depth + 1u); else { c.pc = 0x00261920u; return; } if (c.pc != 0x00262938u) [[unlikely]] return; }
L_00262938:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0026294C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00262980; } }
L_0026294C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00262954u); c.r[4].d[0] = ld16((c.r[17].w[0] + 2u));  if (depth < kMaxDepth) unit_0058(c, 82u, depth + 1u); else { c.pc = 0x00260F00u; return; } if (c.pc != 0x00262954u) [[unlikely]] return; }
L_00262954:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00262968; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00262980; } }
L_00262968:
    c.r[5].d[0] = ld16((c.r[17].w[0] + 4u));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00262978u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0058(c, 160u, depth + 1u); else { c.pc = 0x00261C80u; return; } if (c.pc != 0x00262978u) [[unlikely]] return; }
L_00262978:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 2;
L_00262980:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002629A0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[5].w[0]));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002629C8u); c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_0058(c, 146u, depth + 1u); else { c.pc = 0x00261920u; return; } if (c.pc != 0x002629C8u) [[unlikely]] return; }
L_002629C8:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002629DC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00262A34; } }
L_002629DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002629E4u); c.r[4].d[0] = ld16((c.r[17].w[0] + 2u));  if (depth < kMaxDepth) unit_0058(c, 82u, depth + 1u); else { c.pc = 0x00260F00u; return; } if (c.pc != 0x002629E4u) [[unlikely]] return; }
L_002629E4:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002629F8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00262A34; } }
L_002629F8:
    c.r[5].d[0] = ld16((c.r[17].w[0] + 4u));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00262A08u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0058(c, 160u, depth + 1u); else { c.pc = 0x00261C80u; return; } if (c.pc != 0x00262A08u) [[unlikely]] return; }
L_00262A08:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00262A1C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00262A34; } }
L_00262A1C:
    c.r[5].d[0] = ld16((c.r[17].w[0] + 6u));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00262A2Cu); set32(c.r[6], c.r[16].w[0] + 128u);  if (depth < kMaxDepth) unit_0058(c, 159u, depth + 1u); else { c.pc = 0x00261C50u; return; } if (c.pc != 0x00262A2Cu) [[unlikely]] return; }
L_00262A2C:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 2;
L_00262A34:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00262A50:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st16((c.r[5].w[0]), static_cast<std::uint16_t>(0u));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00262A70u); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0058(c, 255u, depth + 1u); else { c.pc = 0x00262F30u; return; } if (c.pc != 0x00262A70u) [[unlikely]] return; }
L_00262A70:
    st16((c.r[16].w[0] + 2u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00262A7Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0058(c, 301u, depth + 1u); else { c.pc = 0x00263880u; return; } if (c.pc != 0x00262A7Cu) [[unlikely]] return; }
L_00262A7C:
    st16((c.r[16].w[0] + 4u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[4], ld32((c.r[17].w[0] + 984u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00262A9C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00262A94u);  if (depth < kMaxDepth) unit_0058(c, 255u, depth + 1u); else { c.pc = 0x00262F30u; return; } if (c.pc != 0x00262A94u) [[unlikely]] return; }
L_00262A94:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 6u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00262AA0; } }
L_00262A9C:
    st16((c.r[16].w[0] + 6u), static_cast<std::uint16_t>(0u));
    c.budget -= 1;
L_00262AA0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00262AC0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    set32(c.r[2], 0u + 7680u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = ld16((c.r[5].w[0]));
    c.r[18].d[0] = ld16((c.r[6].w[0]));
    c.budget -= 11;
    { const bool t = c.r[17].d[0] != c.r[2].d[0]; c.r[19].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00262B04; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00262AF4u);  if (depth < kMaxDepth) unit_0059(c, 74u, depth + 1u); else { c.pc = 0x002650C0u; return; } if (c.pc != 0x00262AF4u) [[unlikely]] return; }
L_00262AF4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[18].d[0] & 65535ull;  if (t) { goto L_00262B08; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00262F0C; } }
L_00262B04:
    c.r[16].d[0] = c.r[18].d[0] & 65535ull;
    c.budget -= 1;
L_00262B08:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != c.r[16].d[0]; set32(c.r[2], 0u + 10240u);  if (t) { goto L_00262B18; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00262F0C; } }
L_00262B18:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != c.r[2].d[0]; c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_00262B34; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00262B28u);  if (depth < kMaxDepth) unit_0059(c, 56u, depth + 1u); else { c.pc = 0x00264C70u; return; } if (c.pc != 0x00262B28u) [[unlikely]] return; }
L_00262B28:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] ^ 1ull;  if (t) { goto L_00262F0C; } }
L_00262B34:
    set32(c.r[2], 0u + 2048u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 12800u);  if (t) { goto L_00262B5C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00262B48u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0059(c, 81u, depth + 1u); else { c.pc = 0x002654A0u; return; } if (c.pc != 0x00262B48u) [[unlikely]] return; }
L_00262B48:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00262B58; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00262F0C; } }
L_00262B58:
    set32(c.r[2], 0u + 12800u);
    c.budget -= 1;
L_00262B5C:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 3329u);  if (t) { goto L_00262BD4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00262B6Cu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0059(c, 56u, depth + 1u); else { c.pc = 0x00264C70u; return; } if (c.pc != 0x00262B6Cu) [[unlikely]] return; }
L_00262B6C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_00262BA4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00262B7Cu);  if (depth < kMaxDepth) unit_0059(c, 82u, depth + 1u); else { c.pc = 0x002654F0u; return; } if (c.pc != 0x00262B7Cu) [[unlikely]] return; }
L_00262B7C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_00262BA4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00262B8Cu);  if (depth < kMaxDepth) unit_0059(c, 47u, depth + 1u); else { c.pc = 0x002649B0u; return; } if (c.pc != 0x00262B8Cu) [[unlikely]] return; }
L_00262B8C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_00262BA4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00262B9Cu);  if (depth < kMaxDepth) unit_0059(c, 81u, depth + 1u); else { c.pc = 0x002654A0u; return; } if (c.pc != 0x00262B9Cu) [[unlikely]] return; }
L_00262B9C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00262BAC; } }
L_00262BA4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00262F0C; } }
L_00262BAC:
    c.r[3].d[0] = ld64((c.r[19].w[0] + 704u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x02000000u);
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00262BD0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  if (t) { goto L_00262F10; } }
L_00262BD0:
    set32(c.r[2], 0u + 3329u);
    c.budget -= 1;
L_00262BD4:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 4096u);  if (t) { goto L_00262C18; } }
    set32(c.r[2], c.r[16].w[0] - 3330u);
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(4ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00262C0C; } }
    set32(c.r[2], 0u + 3336u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[2].d[0]; c.r[2].d[0] = c.r[16].sd[0] < 3337ll ? 1ull : 0ull;  if (t) { goto L_00262C08; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].d[0] = c.r[16].sd[0] < 3345ll ? 1ull : 0ull;  if (t) { goto L_00262C14; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00262C14; } }
L_00262C08:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_00262C0C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00262F0C; } }
L_00262C14:
    set32(c.r[2], 0u + 4096u);
    c.budget -= 1;
L_00262C18:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 265u);  if (t) { goto L_00262C40; } }
    c.r[3].d[0] = c.r[18].d[0] & 65535ull;
    set32(c.r[2], 0u + 16u);
    set32(c.r[3], c.r[3].w[0] >> 8);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_00262C3C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00262F0C; } }
L_00262C3C:
    set32(c.r[2], 0u + 265u);
    c.budget -= 1;
L_00262C40:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 261u);  if (t) { goto L_00262D28; } }
    c.r[3].d[0] = c.r[18].d[0] & 65535ull;
    set32(c.r[2], 0u + 12u);
    set32(c.r[5], c.r[3].w[0] >> 8);
    c.budget -= 5;
    { const bool t = c.r[5].d[0] != c.r[2].d[0]; set32(c.r[4], 0u + 1u);  if (t) { goto L_00262C9C; } }
    c.r[2].d[0] = ld8((c.r[19].w[0] + 370u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00262C98; } }
    c.r[3].d[0] = ld8((c.r[19].w[0] + 371u));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_00262C90; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 6u);  if (t) { goto L_00262C8C; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00262C98; } }
L_00262C8C:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_00262C90:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00262F0C; } }
L_00262C98:
    set32(c.r[4], 0u + 1u);
    c.budget -= 1;
L_00262C9C:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != c.r[4].d[0]; set32(c.r[2], 0u + 8u);  if (t) { goto L_00262CE0; } }
    c.r[2].d[0] = ld8((c.r[19].w[0] + 370u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00262CDC; } }
    c.r[3].d[0] = ld8((c.r[19].w[0] + 371u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[4].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_00262CD4; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 6u);  if (t) { goto L_00262CD0; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00262CDC; } }
L_00262CD0:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_00262CD4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00262F0C; } }
L_00262CDC:
    set32(c.r[2], 0u + 8u);
    c.budget -= 1;
L_00262CE0:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_00262D24; } }
    c.r[2].d[0] = ld8((c.r[19].w[0] + 370u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00262D24; } }
    c.r[3].d[0] = ld8((c.r[19].w[0] + 371u));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_00262D1C; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 6u);  if (t) { goto L_00262D18; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00262D24; } }
L_00262D18:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_00262D1C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00262F0C; } }
L_00262D24:
    set32(c.r[2], 0u + 261u);
    c.budget -= 1;
L_00262D28:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 260u);  if (t) { goto L_00262D58; } }
    set32(c.r[2], 0u + 262u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_00262D4C; } }
    set32(c.r[2], 0u + 263u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[2].d[0];  if (t) { goto L_00262D54; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_00262D4C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00262F0C; } }
L_00262D54:
    set32(c.r[2], 0u + 260u);
    c.budget -= 1;
L_00262D58:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 6656u);  if (t) { goto L_00262D94; } }
    set32(c.r[2], c.r[16].w[0] - 261u);
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(3ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00262D88; } }
    c.r[2].d[0] = c.r[16].sd[0] < 266ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].d[0] = c.r[16].sd[0] < 271ll ? 1ull : 0ull;  if (t) { goto L_00262D90; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00262D90; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_00262D88:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00262F0C; } }
L_00262D90:
    set32(c.r[2], 0u + 6656u);
    c.budget -= 1;
L_00262D94:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 6400u);  if (t) { goto L_00262DC4; } }
    set32(c.r[2], 0u + 6660u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_00262DB8; } }
    set32(c.r[2], 0u + 6661u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[2].d[0];  if (t) { goto L_00262DC0; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_00262DB8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00262F0C; } }
L_00262DC0:
    set32(c.r[2], 0u + 6400u);
    c.budget -= 1;
L_00262DC4:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 256u);  if (t) { goto L_00262DEC; } }
    c.r[3].d[0] = c.r[18].d[0] & 65535ull;
    set32(c.r[2], 0u + 25u);
    set32(c.r[3], c.r[3].w[0] >> 8);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_00262DE8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00262F0C; } }
L_00262DE8:
    set32(c.r[2], 0u + 256u);
    c.budget -= 1;
L_00262DEC:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 512u);  if (t) { goto L_00262E14; } }
    c.r[3].d[0] = c.r[18].d[0] & 65535ull;
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] >> 8);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00262E10; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00262F0C; } }
L_00262E10:
    set32(c.r[2], 0u + 512u);
    c.budget -= 1;
L_00262E14:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 768u);  if (t) { goto L_00262E3C; } }
    c.r[3].d[0] = c.r[18].d[0] & 65535ull;
    set32(c.r[2], 0u + 2u);
    set32(c.r[3], c.r[3].w[0] >> 8);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_00262E38; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00262F0C; } }
L_00262E38:
    set32(c.r[2], 0u + 768u);
    c.budget -= 1;
L_00262E3C:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 6912u);  if (t) { goto L_00262E64; } }
    c.r[3].d[0] = c.r[18].d[0] & 65535ull;
    set32(c.r[2], 0u + 3u);
    set32(c.r[3], c.r[3].w[0] >> 8);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_00262E60; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00262F0C; } }
L_00262E60:
    set32(c.r[2], 0u + 6912u);
    c.budget -= 1;
L_00262E64:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 3328u);  if (t) { goto L_00262E8C; } }
    c.r[3].d[0] = c.r[18].d[0] & 65535ull;
    set32(c.r[2], 0u + 27u);
    set32(c.r[3], c.r[3].w[0] >> 8);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_00262E88; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00262F0C; } }
L_00262E88:
    set32(c.r[2], 0u + 3328u);
    c.budget -= 1;
L_00262E8C:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 3840u);  if (t) { goto L_00262EC0; } }
    c.r[3].d[0] = ld64((c.r[19].w[0] + 704u));
    set32(c.r[2], 0u + 256u);
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00262EB8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00262F0C; } }
L_00262EB8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00262F0C; } }
L_00262EC0:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != c.r[2].d[0]; c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_00262F08; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00262ED0u);  if (depth < kMaxDepth) unit_0059(c, 71u, depth + 1u); else { c.pc = 0x00265000u; return; } if (c.pc != 0x00262ED0u) [[unlikely]] return; }
L_00262ED0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00262EFC; } }
    c.r[3].d[0] = ld64((c.r[19].w[0] + 704u));
    set32(c.r[2], 0u + 256u);
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00262F00; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00262F0C; } }
L_00262EFC:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00262F00:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00262F0C; } }
L_00262F08:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00262F0C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_00262F10:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00262F30:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[4].w[0] + 164u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00262F4Cu); c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x00262F4Cu) [[unlikely]] return; }
L_00262F4C:
    c.r[2].d[0] = ld8((c.r[2].w[0] + 20u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00262FE8; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 164u)));
    set32(c.r[2], 0u + 1671u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 1672u);  if (t) { goto L_00262F70; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 6145u);  if (t) { goto L_00263868; } }
L_00262F70:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00262F80; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 6145u);  if (t) { goto L_00263868; } }
L_00262F80:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00262F88u);  if (depth < kMaxDepth) unit_0059(c, 34u, depth + 1u); else { c.pc = 0x00264650u; return; } if (c.pc != 0x00262F88u) [[unlikely]] return; }
L_00262F88:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00262F98; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 6145u);  if (t) { goto L_00263868; } }
L_00262F98:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00262FA0u);  if (depth < kMaxDepth) unit_0059(c, 34u, depth + 1u); else { c.pc = 0x00264650u; return; } if (c.pc != 0x00262FA0u) [[unlikely]] return; }
L_00262FA0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00262FE8; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 164u)));
    set32(c.r[2], 0u + 1671u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 1672u);  if (t) { goto L_00262FC0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 6144u);  if (t) { goto L_00263868; } }
L_00262FC0:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00262FD0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 6144u);  if (t) { goto L_00263868; } }
L_00262FD0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00262FD8u);  if (depth < kMaxDepth) unit_0059(c, 34u, depth + 1u); else { c.pc = 0x00264650u; return; } if (c.pc != 0x00262FD8u) [[unlikely]] return; }
L_00262FD8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00262FE8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 6144u);  if (t) { goto L_00263868; } }
L_00262FE8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00262FF0u);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x00262FF0u) [[unlikely]] return; }
L_00262FF0:
    c.r[2].d[0] = ld8((c.r[2].w[0] + 9u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00263018; } }
    c.r[2].d[0] = ld64((c.r[17].w[0] + 712u));
    c.r[2].d[0] = c.r[2].d[0] & 4ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 6401u);  if (t) { goto L_00263018; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_0026386C; } }
L_00263018:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00263020u);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x00263020u) [[unlikely]] return; }
L_00263020:
    c.r[2].d[0] = ld8((c.r[2].w[0] + 41u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00263088; } }
    c.r[3].d[0] = ld64((c.r[17].w[0] + 712u));
    c.r[2].d[0] = c.r[3].d[0] & 1024ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = c.r[3].d[0] & 512ull;  if (t) { goto L_00263048; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 5889u);  if (t) { goto L_00263868; } }
L_00263048:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0026305C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 5891u);  if (t) { goto L_00263868; } }
L_0026305C:
    c.r[2].d[0] = c.r[3].d[0] & 2048ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = c.r[3].d[0] & 4096ull;  if (t) { goto L_00263074; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 5892u);  if (t) { goto L_00263868; } }
L_00263074:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00263088; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 5893u);  if (t) { goto L_00263868; } }
L_00263088:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 8896u)));
    c.r[2].d[0] = c.r[2].sd[0] < 30ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0026312C; } }
    set32(c.r[2], 0u + 12045u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 6914u);  if (t) { goto L_002630B0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00263868; } }
L_002630B0:
    set32(c.r[3], ld32((c.r[17].w[0] + 164u)));
    set32(c.r[2], 0u + 12001u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_002630C8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 272u);  if (t) { goto L_00263868; } }
L_002630C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002630D0u);  if (depth < kMaxDepth) unit_0059(c, 73u, depth + 1u); else { c.pc = 0x00265080u; return; } if (c.pc != 0x002630D0u) [[unlikely]] return; }
L_002630D0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_002630E0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 7169u);  if (t) { goto L_00263868; } }
L_002630E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002630E8u);  if (depth < kMaxDepth) unit_0034(c, 135u, depth + 1u); else { c.pc = 0x001D1520u; return; } if (c.pc != 0x002630E8u) [[unlikely]] return; }
L_002630E8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_002630F8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 267u);  if (t) { goto L_00263868; } }
L_002630F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00263100u);  if (depth < kMaxDepth) unit_0059(c, 72u, depth + 1u); else { c.pc = 0x00265040u; return; } if (c.pc != 0x00263100u) [[unlikely]] return; }
L_00263100:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00263110; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 268u);  if (t) { goto L_00263868; } }
L_00263110:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00263118u);  if (depth < kMaxDepth) unit_0059(c, 49u, depth + 1u); else { c.pc = 0x00264A00u; return; } if (c.pc != 0x00263118u) [[unlikely]] return; }
L_00263118:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00263128; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 260u);  if (t) { goto L_00263868; } }
L_00263128:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0026312C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00263134u);  if (depth < kMaxDepth) unit_0059(c, 79u, depth + 1u); else { c.pc = 0x00265430u; return; } if (c.pc != 0x00263134u) [[unlikely]] return; }
L_00263134:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00263144; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 4097u);  if (t) { goto L_00263868; } }
L_00263144:
    c.r[3].d[0] = ld64((c.r[17].w[0] + 704u));
    set32(c.r[2], 0u + 4096u);
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x20000000u);  if (t) { goto L_00263168; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 3585u);  if (t) { goto L_00263868; } }
L_00263168:
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00263184; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 3334u);  if (t) { goto L_00263868; } }
L_00263184:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x01000000u);  if (t) { goto L_002631A4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 3335u);  if (t) { goto L_00263868; } }
L_002631A4:
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002631C0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 5122u);  if (t) { goto L_00263868; } }
L_002631C0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00800000u);
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_002631E0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 5121u);  if (t) { goto L_00263868; } }
L_002631E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002631E8u);  if (depth < kMaxDepth) unit_0059(c, 81u, depth + 1u); else { c.pc = 0x002654A0u; return; } if (c.pc != 0x002631E8u) [[unlikely]] return; }
L_002631E8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_002631F8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 2048u);  if (t) { goto L_00263868; } }
L_002631F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00263200u);  if (depth < kMaxDepth) unit_0059(c, 43u, depth + 1u); else { c.pc = 0x002648E0u; return; } if (c.pc != 0x00263200u) [[unlikely]] return; }
L_00263200:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00263210; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 3333u);  if (t) { goto L_00263868; } }
L_00263210:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00263218u);  if (depth < kMaxDepth) unit_0059(c, 44u, depth + 1u); else { c.pc = 0x00264920u; return; } if (c.pc != 0x00263218u) [[unlikely]] return; }
L_00263218:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00263228; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 3332u);  if (t) { goto L_00263868; } }
L_00263228:
    c.r[3].d[0] = ld64((c.r[17].w[0] + 704u));
    set32(c.r[2], 0u + 8u);
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_00263380; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00263260; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 172u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00263260; } }
    c.r[4].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 1;
L_00263260:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[2], 0u + 3331u);  if (t) { goto L_00263270; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00263868; } }
L_00263270:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026327Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0059(c, 37u, depth + 1u); else { c.pc = 0x00264730u; return; } if (c.pc != 0x0026327Cu) [[unlikely]] return; }
L_0026327C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0026328C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 3336u);  if (t) { goto L_00263868; } }
L_0026328C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00263294u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0059(c, 37u, depth + 1u); else { c.pc = 0x00264730u; return; } if (c.pc != 0x00263294u) [[unlikely]] return; }
L_00263294:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_002632A4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 3340u);  if (t) { goto L_00263868; } }
L_002632A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002632ACu); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_0059(c, 37u, depth + 1u); else { c.pc = 0x00264730u; return; } if (c.pc != 0x002632ACu) [[unlikely]] return; }
L_002632AC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_002632BC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 3344u);  if (t) { goto L_00263868; } }
L_002632BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002632C4u); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_0059(c, 37u, depth + 1u); else { c.pc = 0x00264730u; return; } if (c.pc != 0x002632C4u) [[unlikely]] return; }
L_002632C4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_002632D4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 3338u);  if (t) { goto L_00263868; } }
L_002632D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002632DCu); set32(c.r[5], 0u + 4u);  if (depth < kMaxDepth) unit_0059(c, 37u, depth + 1u); else { c.pc = 0x00264730u; return; } if (c.pc != 0x002632DCu) [[unlikely]] return; }
L_002632DC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_002632EC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 3342u);  if (t) { goto L_00263868; } }
L_002632EC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002632F4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0059(c, 35u, depth + 1u); else { c.pc = 0x00264680u; return; } if (c.pc != 0x002632F4u) [[unlikely]] return; }
L_002632F4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00263304; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 3330u);  if (t) { goto L_00263868; } }
L_00263304:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026330Cu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0059(c, 35u, depth + 1u); else { c.pc = 0x00264680u; return; } if (c.pc != 0x0026330Cu) [[unlikely]] return; }
L_0026330C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0026331C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 3339u);  if (t) { goto L_00263868; } }
L_0026331C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00263324u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_0059(c, 35u, depth + 1u); else { c.pc = 0x00264680u; return; } if (c.pc != 0x00263324u) [[unlikely]] return; }
L_00263324:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00263334; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 3343u);  if (t) { goto L_00263868; } }
L_00263334:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026333Cu); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_0059(c, 35u, depth + 1u); else { c.pc = 0x00264680u; return; } if (c.pc != 0x0026333Cu) [[unlikely]] return; }
L_0026333C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0026334C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 3337u);  if (t) { goto L_00263868; } }
L_0026334C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00263354u); set32(c.r[5], 0u + 4u);  if (depth < kMaxDepth) unit_0059(c, 35u, depth + 1u); else { c.pc = 0x00264680u; return; } if (c.pc != 0x00263354u) [[unlikely]] return; }
L_00263354:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00263364; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 3341u);  if (t) { goto L_00263868; } }
L_00263364:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026336Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0059(c, 35u, depth + 1u); else { c.pc = 0x00264680u; return; } if (c.pc != 0x0026336Cu) [[unlikely]] return; }
L_0026336C:
    set32(c.r[4], 0u + 3330u);
    set32(c.r[3], 0u + 3329u);
    if (c.r[2].d[0] == 0) c.r[4].d[0] = c.r[3].d[0];
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00263868; } }
L_00263380:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00263388u);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x00263388u) [[unlikely]] return; }
L_00263388:
    c.r[2].d[0] = ld8((c.r[2].w[0] + 19u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00263400; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 164u)));
    set32(c.r[2], 0u + 1642u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_002633B4; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 172u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002633B4; } }
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_002633B4:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; c.r[2].d[0] = c.r[3].d[0] ^ 1642ull;  if (t) { goto L_002633C4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 6661u);  if (t) { goto L_00263868; } }
L_002633C4:
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002633DC; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 172u)));
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 3;
L_002633DC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002633EC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 6663u);  if (t) { goto L_00263868; } }
L_002633EC:
    set32(c.r[2], 0u + 1641u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 6660u);  if (t) { goto L_00263400; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00263868; } }
L_00263400:
    c.r[2].d[0] = ld64((c.r[17].w[0] + 704u));
    c.r[2].d[0] = c.r[2].d[0] & 32768ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0026341C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 6662u);  if (t) { goto L_00263868; } }
L_0026341C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00263424u);  if (depth < kMaxDepth) unit_0059(c, 74u, depth + 1u); else { c.pc = 0x002650C0u; return; } if (c.pc != 0x00263424u) [[unlikely]] return; }
L_00263424:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00263434; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 6912u);  if (t) { goto L_00263868; } }
L_00263434:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026343Cu);  if (depth < kMaxDepth) unit_0034(c, 156u, depth + 1u); else { c.pc = 0x001D1970u; return; } if (c.pc != 0x0026343Cu) [[unlikely]] return; }
L_0026343C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0026344C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 6656u);  if (t) { goto L_00263868; } }
L_0026344C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00263454u);  if (depth < kMaxDepth) unit_0059(c, 71u, depth + 1u); else { c.pc = 0x00265000u; return; } if (c.pc != 0x00263454u) [[unlikely]] return; }
L_00263454:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00263464; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 3840u);  if (t) { goto L_00263868; } }
L_00263464:
    set32(c.r[3], ld32((c.r[17].w[0] + 164u)));
    set32(c.r[2], 0u + 2416u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 514u);  if (t) { goto L_0026347C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00263868; } }
L_0026347C:
    c.r[3].d[0] = ld64((c.r[17].w[0] + 704u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00060000u);
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_002634B0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002634A0u);  if (depth < kMaxDepth) unit_0059(c, 54u, depth + 1u); else { c.pc = 0x00264B50u; return; } if (c.pc != 0x002634A0u) [[unlikely]] return; }
L_002634A0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002634B0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 514u);  if (t) { goto L_00263868; } }
L_002634B0:
    c.r[4].d[0] = ld64((c.r[17].w[0] + 704u));
    c.r[2].d[0] = c.r[4].d[0] & 4ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x00040000u);  if (t) { goto L_00263510; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002634CCu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_006F(c, 253u, depth + 1u); else { c.pc = 0x002BF0F0u; return; } if (c.pc != 0x002634CCu) [[unlikely]] return; }
L_002634CC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00263508; } }
    c.r[2].d[0] = ld64((c.r[17].w[0] + 704u));
    c.r[2].d[0] = c.r[2].d[0] & 128ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002634F0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 518u);  if (t) { goto L_00263868; } }
L_002634F0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00263500; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 516u);  if (t) { goto L_00263868; } }
L_00263500:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 3u);  if (t) { goto L_00263868; } }
L_00263508:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 512u);  if (t) { goto L_00263868; } }
L_00263510:
    set32(c.r[2], 0u + 48u);
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 512u);  if (t) { goto L_00263534; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00263868; } }
L_00263534:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026353Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0034(c, 64u, depth + 1u); else { c.pc = 0x001D0750u; return; } if (c.pc != 0x0026353Cu) [[unlikely]] return; }
L_0026353C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0026354C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1281u);  if (t) { goto L_00263868; } }
L_0026354C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00263554u);  if (depth < kMaxDepth) unit_0034(c, 199u, depth + 1u); else { c.pc = 0x001D2AD0u; return; } if (c.pc != 0x00263554u) [[unlikely]] return; }
L_00263554:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00263564; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1798u);  if (t) { goto L_00263868; } }
L_00263564:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026356Cu);  if (depth < kMaxDepth) unit_0059(c, 66u, depth + 1u); else { c.pc = 0x00264F20u; return; } if (c.pc != 0x0026356Cu) [[unlikely]] return; }
L_0026356C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0026357C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1799u);  if (t) { goto L_00263868; } }
L_0026357C:
    c.r[3].d[0] = ld64((c.r[17].w[0] + 704u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00080000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00040000u);  if (t) { goto L_0026359C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 770u);  if (t) { goto L_00263868; } }
L_0026359C:
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002635B4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 771u);  if (t) { goto L_00263868; } }
L_002635B4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00200000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_002635D0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 772u);  if (t) { goto L_00263868; } }
L_002635D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002635D8u);  if (depth < kMaxDepth) unit_0059(c, 82u, depth + 1u); else { c.pc = 0x002654F0u; return; } if (c.pc != 0x002635D8u) [[unlikely]] return; }
L_002635D8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_002635E8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 768u);  if (t) { goto L_00263868; } }
L_002635E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002635F0u);  if (depth < kMaxDepth) unit_0059(c, 47u, depth + 1u); else { c.pc = 0x002649B0u; return; } if (c.pc != 0x002635F0u) [[unlikely]] return; }
L_002635F0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00263600; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1024u);  if (t) { goto L_00263868; } }
L_00263600:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00263608u);  if (depth < kMaxDepth) unit_0059(c, 56u, depth + 1u); else { c.pc = 0x00264C70u; return; } if (c.pc != 0x00263608u) [[unlikely]] return; }
L_00263608:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00263618; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1792u);  if (t) { goto L_00263868; } }
L_00263618:
    c.r[3].d[0] = ld64((c.r[17].w[0] + 704u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 256u);  if (t) { goto L_0026363C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1536u);  if (t) { goto L_00263868; } }
L_0026363C:
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00263658; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 3328u);  if (t) { goto L_00263868; } }
L_00263658:
    set32(c.r[2], 0u + 4u);
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 881u);  if (t) { goto L_00263678; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 3328u);  if (t) { goto L_00263868; } }
L_00263678:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != c.r[2].d[0]; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00263688; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 3328u);  if (t) { goto L_00263868; } }
L_00263688:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00263690u);  if (depth < kMaxDepth) unit_0059(c, 58u, depth + 1u); else { c.pc = 0x00264D10u; return; } if (c.pc != 0x00263690u) [[unlikely]] return; }
L_00263690:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002636A0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 3328u);  if (t) { goto L_00263868; } }
L_002636A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002636A8u);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x002636A8u) [[unlikely]] return; }
L_002636A8:
    c.r[2].d[0] = ld8((c.r[2].w[0] + 14u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002636D0; } }
    c.r[2].d[0] = ld64((c.r[17].w[0] + 712u));
    c.r[2].d[0] = c.r[2].d[0] & 224ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 2560u);  if (t) { goto L_002636D0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00263868; } }
L_002636D0:
    c.r[2].d[0] = ld64((c.r[17].w[0] + 704u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[3].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], 0u + 8192u);  if (t) { goto L_002636F0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 2816u);  if (t) { goto L_00263868; } }
L_002636F0:
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.r[3].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0026371C; } }
    c.r[3].d[0] = 0ull | 49152ull;
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.r[3].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] & 128ull;  if (t) { goto L_00263724; } }
L_0026371C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 3072u);  if (t) { goto L_00263868; } }
L_00263724:
    c.r[3].d[0] = 0ull < c.r[4].d[0] ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_00263748; } }
    c.r[3].d[0] = c.r[2].d[0] & 3ull;
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00263748; } }
    c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_00263748:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull; c.r[3].d[0] = 0ull < c.r[4].d[0] ? 1ull : 0ull;  if (t) { goto L_00263758; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 259u);  if (t) { goto L_00263868; } }
L_00263758:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_00263774; } }
    c.r[3].d[0] = c.r[2].d[0] & 3ull;
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00263774; } }
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_00263774:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; c.r[3].d[0] = c.r[2].d[0] & 3ull;  if (t) { goto L_00263830; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00263784u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_006F(c, 252u, depth + 1u); else { c.pc = 0x002BF0B0u; return; } if (c.pc != 0x00263784u) [[unlikely]] return; }
L_00263784:
    set32(c.r[3], 0u + 11u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00263798; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 262u);  if (t) { goto L_00263868; } }
L_00263798:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002637A0u);  if (depth < kMaxDepth) unit_006F(c, 252u, depth + 1u); else { c.pc = 0x002BF0B0u; return; } if (c.pc != 0x002637A0u) [[unlikely]] return; }
L_002637A0:
    set32(c.r[3], 0u + 5u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_002637B4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 263u);  if (t) { goto L_00263868; } }
L_002637B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002637BCu);  if (depth < kMaxDepth) unit_006F(c, 252u, depth + 1u); else { c.pc = 0x002BF0B0u; return; } if (c.pc != 0x002637BCu) [[unlikely]] return; }
L_002637BC:
    set32(c.r[3], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_002637D0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 266u);  if (t) { goto L_00263868; } }
L_002637D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002637D8u);  if (depth < kMaxDepth) unit_006F(c, 252u, depth + 1u); else { c.pc = 0x002BF0B0u; return; } if (c.pc != 0x002637D8u) [[unlikely]] return; }
L_002637D8:
    set32(c.r[3], 0u + 52u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_002637EC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 269u);  if (t) { goto L_00263868; } }
L_002637EC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002637F4u);  if (depth < kMaxDepth) unit_006F(c, 252u, depth + 1u); else { c.pc = 0x002BF0B0u; return; } if (c.pc != 0x002637F4u) [[unlikely]] return; }
L_002637F4:
    set32(c.r[3], 0u + 35u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00263808; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 267u);  if (t) { goto L_00263868; } }
L_00263808:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00263810u);  if (depth < kMaxDepth) unit_006F(c, 252u, depth + 1u); else { c.pc = 0x002BF0B0u; return; } if (c.pc != 0x00263810u) [[unlikely]] return; }
L_00263810:
    set32(c.r[3], 0u + 13u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_00263824; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 270u);  if (t) { goto L_00263828; } }
L_00263824:
    set32(c.r[2], 0u + 260u);
    c.budget -= 1;
L_00263828:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00263868; } }
L_00263830:
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00263844; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 256u);  if (t) { goto L_00263868; } }
L_00263844:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x04000000u);
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00263864; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 4352u);  if (t) { goto L_00263868; } }
L_00263864:
    set32(c.r[2], 0u + 7680u);
    c.budget -= 1;
L_00263868:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_0026386C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00263880:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull; c.f[20] = ld32((c.r[4].w[0] + 1024u));  if (t) { goto L_002638A8; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 984u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002638B0; } }
L_002638A8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00263A08; } }
L_002638B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002638B8u);  if (depth < kMaxDepth) unit_0059(c, 56u, depth + 1u); else { c.pc = 0x00264C70u; return; } if (c.pc != 0x002638B8u) [[unlikely]] return; }
L_002638B8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00263954; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 984u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002638CCu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006F(c, 256u, depth + 1u); else { c.pc = 0x002BF3F0u; return; } if (c.pc != 0x002638CCu) [[unlikely]] return; }
L_002638CC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00263954; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41400000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[2].sd[0] = static_cast<std::int32_t>(0x41600000u);  if (t) { goto L_002638F4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 769u);  if (t) { goto L_00263A08; } }
L_002638F4:
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00263910; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 768u);  if (t) { goto L_00263A08; } }
L_00263910:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41C80000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[2].sd[0] = static_cast<std::int32_t>(0x420C0000u);  if (t) { goto L_00263930; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 770u);  if (t) { goto L_00263A08; } }
L_00263930:
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0026394C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1024u);  if (t) { goto L_00263A08; } }
L_0026394C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1280u);  if (t) { goto L_00263A08; } }
L_00263954:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40E00000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[2].sd[0] = static_cast<std::int32_t>(0x41800000u);  if (t) { goto L_00263974; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 512u);  if (t) { goto L_00263A08; } }
L_00263974:
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002639C8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00263990u); set32(c.r[4], ld32((c.r[16].w[0] + 984u)));  if (depth < kMaxDepth) unit_0059(c, 56u, depth + 1u); else { c.pc = 0x00264C70u; return; } if (c.pc != 0x00263990u) [[unlikely]] return; }
L_00263990:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002639C0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41600000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[2], 0u + 770u);  if (t) { goto L_002639B8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 768u);  if (t) { goto L_00263A08; } }
L_002639B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00263A08; } }
L_002639C0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 768u);  if (t) { goto L_00263A08; } }
L_002639C8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41C80000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[2].sd[0] = static_cast<std::int32_t>(0x420C0000u);  if (t) { goto L_002639E8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 770u);  if (t) { goto L_00263A08; } }
L_002639E8:
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00263A04; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1024u);  if (t) { goto L_00263A08; } }
L_00263A04:
    set32(c.r[2], 0u + 1280u);
    c.budget -= 1;
L_00263A08:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00263A20:
    c.r[3].d[0] = ld8((c.r[4].w[0] + 370u));
    set32(c.r[2], 0u + 10u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00263A38; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00263A94; } }
L_00263A38:
    c.f[2] = ld32((c.r[4].w[0] + 224u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC0E00000u);
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[2]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[3], c.r[4].w[0] + 208u);  if (t) { goto L_00263A6C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40E00000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00263A74; } }
L_00263A6C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00263A94; } }
L_00263A74:
    c.f[2] = ld32((c.r[3].w[0] + 24u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[2]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00263A94; } }
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_00263A94; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00263A94:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00263AA0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[2], 0u + 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 370u));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00263AC0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_00263AD0; } }
L_00263AC0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00263AC8u);  if (depth < kMaxDepth) unit_0034(c, 173u, depth + 1u); else { c.pc = 0x001D2260u; return; } if (c.pc != 0x00263AC8u) [[unlikely]] return; }
L_00263AC8:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 2;
L_00263AD0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00263AE0:
    c.r[2].d[0] = ld8((c.r[4].w[0] + 370u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00263AF4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00263B50; } }
L_00263AF4:
    c.f[2] = ld32((c.r[4].w[0] + 224u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC0E00000u);
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[2]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[3], c.r[4].w[0] + 208u);  if (t) { goto L_00263B28; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40E00000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00263B30; } }
L_00263B28:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00263B50; } }
L_00263B30:
    c.f[2] = ld32((c.r[3].w[0] + 24u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[2]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00263B50; } }
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_00263B50; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00263B50:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00263B60:
    c.r[2].d[0] = ld8((c.r[4].w[0] + 370u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00263B74; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00263BD0; } }
L_00263B74:
    c.f[2] = ld32((c.r[4].w[0] + 224u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC1700000u);
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[2]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[3], c.r[4].w[0] + 208u);  if (t) { goto L_00263BA8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41700000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00263BB0; } }
L_00263BA8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00263BD0; } }
L_00263BB0:
    c.f[2] = ld32((c.r[3].w[0] + 24u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[2]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00263BD0; } }
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_00263BD0; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00263BD0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00263BE0:
    set32(c.r[29], c.r[29].w[0] - 144u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    set32(c.r[3], c.r[3].w[0] - 27952u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    set32(c.r[2], 0u + 202u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[4], ld32((c.r[4].w[0] + 912u)));
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[3], ld32((c.r[3].w[0] + 32u)));
    c.budget -= 20;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.f[20] = c.f[12];  if (t) { goto L_00263C38; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00263DE4; } }
L_00263C38:
    set32(c.r[2], 0u + 203u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 206u);  if (t) { goto L_00263C4C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00263DE4; } }
L_00263C4C:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_00263C5C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00263DE4; } }
L_00263C5C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_00263DD4; } }
L_00263C64:
    set32(c.r[3], c.r[17].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 28352u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[16], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00263DD0; } }
    c.budget -= 2;
    { const bool t = c.r[19].sd[0] < 0;  if (t) { goto L_00263C90; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 48u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[19].d[0];  if (t) { goto L_00263DD0; } }
L_00263C90:
    set32(c.r[3], ld32((c.r[16].w[0] + 48u)));
    set32(c.r[2], 0u + 5u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00263CCC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00263CA8u);  if (depth < kMaxDepth) unit_003D(c, 81u, depth + 1u); else { c.pc = 0x001F53D0u; return; } if (c.pc != 0x00263CA8u) [[unlikely]] return; }
L_00263CA8:
    set32(c.r[3], 0u + 32u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; set32(c.r[4], 0u + 430u);  if (t) { goto L_00263CCC; } }
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], c.r[29].w[0] + 112u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00263CC4u); set32(c.r[7], c.r[29].w[0] + 140u);  if (depth < kMaxDepth) unit_0026(c, 22u, depth + 1u); else { c.pc = 0x00198190u; return; } if (c.pc != 0x00263CC4u) [[unlikely]] return; }
L_00263CC4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00263DD0; } }
L_00263CCC:
    c.f[0] = ld32((c.r[20].w[0] + 228u));
    c.f[1] = ld32((c.r[16].w[0] + 228u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.f[2] = c.f[0];  if (t) { goto L_00263CE4; } }
    c.f[2] = c.f[1];
    c.budget -= 1;
L_00263CE4:
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00263CF8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[1] = fp::sub(c.f[2], c.f[1]);  if (t) { goto L_00263D00; } }
L_00263CF8:
    c.f[1] = c.f[0];
    c.f[1] = fp::sub(c.f[2], c.f[1]);
    c.budget -= 2;
L_00263D00:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00263D1C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x41700000u);  if (t) { goto L_00263D24; } }
L_00263D1C:
    c.f[1] = c.f[1] ^ fp::kSign;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41700000u);
    c.budget -= 2;
L_00263D24:
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00263DD0; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 48u)));
    set32(c.r[2], 0u + 23u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00263DD0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00263D50u);  if (depth < kMaxDepth) unit_0038(c, 103u, depth + 1u); else { c.pc = 0x001E1870u; return; } if (c.pc != 0x00263D50u) [[unlikely]] return; }
L_00263D50:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[20].w[0] + 224u);  if (t) { goto L_00263DD0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00263D60u); set32(c.r[5], c.r[16].w[0] + 224u);  if (depth < kMaxDepth) unit_0011(c, 14u, depth + 1u); else { c.pc = 0x001443A0u; return; } if (c.pc != 0x00263D60u) [[unlikely]] return; }
L_00263D60:
    fpu_compare(c, fp::key(c.f[20]) <= fp::key(c.f[0]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u - 1u);  if (t) { goto L_00263DD0; } }
    c.budget -= 2;
    { const bool t = c.r[19].d[0] != c.r[2].d[0]; c.f[20] = c.f[0];  if (t) { goto L_00263DCC; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 48u)));
    set32(c.r[2], 0u + 11u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 5u);  if (t) { goto L_00263DA4; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 164u)));
    set32(c.r[2], 0u + 15300u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0x42700000u);  if (t) { goto L_00263DA0; } }
    c.f[1] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::add(c.f[0], c.f[1]);  if (t) { goto L_00263DC8; } }
L_00263DA0:
    set32(c.r[2], 0u + 5u);
    c.budget -= 1;
L_00263DA4:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { goto L_00263DC8; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 164u)));
    set32(c.r[2], 0u + 15300u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0x42700000u);  if (t) { goto L_00263DC8; } }
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.budget -= 3;
L_00263DC8:
    c.f[20] = c.f[0];
    c.budget -= 1;
L_00263DCC:
    c.r[18].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_00263DD0:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_00263DD4:
    c.r[2].d[0] = c.r[17].d[0] < static_cast<std::uint64_t>(72ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00263C64u | kUnwind; return; } goto L_00263C64; } }
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_00263DE4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_00263E10:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[2].d[0] = ld8((c.r[4].w[0] + 370u));
    c.budget -= 12;
    { const bool t = c.r[2].d[0] == 0ull; c.r[19].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00263E48; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00263EE4; } }
L_00263E48:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x447A0000u);
    c.r[18].d[0] = 0ull + 0ull;
    c.f[20] = c.r[2].w[0];
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_00263ED4; } }
L_00263E5C:
    set32(c.r[3], c.r[17].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 28352u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[16], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00263ED0; } }
    c.budget -= 2;
    { const bool t = c.r[19].sd[0] < 0;  if (t) { goto L_00263E88; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 48u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[19].d[0];  if (t) { goto L_00263ED0; } }
L_00263E88:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 370u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00263ED0; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 48u)));
    set32(c.r[2], 0u + 23u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00263ED0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00263EACu);  if (depth < kMaxDepth) unit_0038(c, 103u, depth + 1u); else { c.pc = 0x001E1870u; return; } if (c.pc != 0x00263EACu) [[unlikely]] return; }
L_00263EAC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[20].w[0] + 224u);  if (t) { goto L_00263ED0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00263EBCu); set32(c.r[5], c.r[16].w[0] + 224u);  if (depth < kMaxDepth) unit_0011(c, 14u, depth + 1u); else { c.pc = 0x001443A0u; return; } if (c.pc != 0x00263EBCu) [[unlikely]] return; }
L_00263EBC:
    fpu_compare(c, fp::key(c.f[20]) <= fp::key(c.f[0]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00263ED0; } }
    c.f[20] = c.f[0];
    c.r[18].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 2;
L_00263ED0:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_00263ED4:
    c.r[2].d[0] = c.r[17].d[0] < static_cast<std::uint64_t>(72ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00263E5Cu | kUnwind; return; } goto L_00263E5C; } }
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_00263EE4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_00263F10:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[5], c.r[5].w[0] + 28352u);  if (t) { goto L_00263F48; } }
L_00263F20:
    set32(c.r[2], c.r[5].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00263F44; } }
    set32(c.r[3], ld32((c.r[2].w[0] + 48u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00263F44; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00263F58; } }
L_00263F44:
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.budget -= 1;
L_00263F48:
    c.r[2].d[0] = c.r[6].d[0] < static_cast<std::uint64_t>(72ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[6].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00263F20u | kUnwind; return; } goto L_00263F20; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00263F58:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00263F60:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = 0ull + 0ull;
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 6;
L_00263F78:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 28320u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00263FA8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00263F9Cu);  if (depth < kMaxDepth) unit_0034(c, 156u, depth + 1u); else { c.pc = 0x001D1970u; return; } if (c.pc != 0x00263F9Cu) [[unlikely]] return; }
L_00263F9C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00263FA8; } }
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_00263FA8:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00263F78u | kUnwind; return; } goto L_00263F78; } }
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00263FD0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[16].d[0] != 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00263FF4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { [[clang::musttail]] return unit_0059(c, 5u, depth); } }
L_00263FF4:
    c.r[3].d[0] = ld8((c.r[17].w[0] + 382u));
    set32(c.r[2], 0u + 253u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[4], c.r[17].w[0] + 224u);  if (t) { [[clang::musttail]] return unit_0059(c, 3u, depth); } }
    [[clang::musttail]] return unit_0059(c, 2u, depth);
}

}
