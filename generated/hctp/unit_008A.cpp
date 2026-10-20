#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_008A[4096] = {
    1, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    5, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 9, 0, 0, 0, 10, 0, 0, 0, 11, 0, 0, 0,
    12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0,
    0, 0, 0, 15, 0, 0, 16, 0, 0, 0, 17, 0, 0, 0, 18, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0,
    0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    26, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 29, 0, 0, 0,
    0, 0, 30, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0,
    0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 37, 0, 0, 0,
    38, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 41, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 51, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0,
    56, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 58, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 64, 65, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 67, 68, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 70, 71, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    73, 0, 74, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 77, 0, 0,
    0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 79, 0, 80, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 82, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 83, 0, 84, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 89, 0, 0, 90,
    0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 92, 0, 93, 0, 0, 0, 94, 0, 0, 95, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 97, 0, 0, 98, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 100, 0, 0, 0, 101, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 105, 0, 0, 106, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 108, 0, 0, 109, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 110, 0, 0, 111, 0, 0, 0, 112, 0, 0, 0, 113, 0, 0, 0, 114, 0, 0, 0, 115, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 117, 0, 0, 118, 0, 119, 0, 0, 0, 120, 0, 121, 0, 0, 0, 122, 0, 0, 123, 0, 0, 0,
    0, 124, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 134, 0,
    0, 135, 0, 0, 136, 0, 0, 137, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 143, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 147, 0, 148, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 151,
    0, 0, 152, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 154, 0, 155, 0, 0, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 0,
    0, 157, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 0, 160,
    0, 0, 0, 0, 0, 161, 0, 0, 0, 0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 0, 0, 0, 163, 0, 164, 0, 0, 0, 0, 0, 0,
    165, 0, 0, 166, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 171, 0, 172, 0, 0, 0, 0, 0, 0, 0,
    173, 0, 174, 0, 0, 175, 0, 0, 0, 0, 0, 0, 176, 0, 0, 177, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 180, 0, 181, 0,
    0, 0, 182, 0, 0, 0, 183, 0, 0, 0, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 185, 0, 0, 0, 186,
    0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0, 190,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 191, 0, 0, 0, 0,
    192, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 194, 0,
    0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 0, 0, 0, 197, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 199, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0, 0, 0,
    0, 0, 203, 0, 0, 0, 0, 0, 0, 0, 0, 0, 204, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 205, 0, 0, 0, 0, 0, 0, 0, 206, 0, 0, 0,
    207, 0, 0, 0, 0, 0, 208, 0, 209, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 210, 0, 0, 0, 0, 211, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 212, 0, 0, 0, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 215, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 216, 0, 0, 0, 0, 0, 217, 0, 0, 0, 218, 0, 0, 0, 0, 0, 0, 0, 219, 0, 0, 0,
    0, 220, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 222, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 223, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 224, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 225, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 226, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 227, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 228, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 229, 0, 0, 0, 0, 0, 0, 0, 230, 0, 0, 0, 0, 0, 0, 0, 231, 0, 0, 0, 0, 232, 0, 0, 0, 0, 233, 0,
    0, 0, 0, 0, 234, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 235, 0, 0, 0, 0, 0, 0, 0, 0, 236, 0, 0, 0, 0, 0, 0, 237,
    0, 0, 0, 0, 0, 0, 0, 0, 238, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 239, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 240, 0, 0, 0, 0, 0, 0, 241, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 242, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 243, 0, 0, 244, 0, 0, 245, 0, 0, 0, 0,
    0, 246, 0, 0, 0, 0, 0, 0, 247, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    248, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 249, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 250, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 251, 0, 0, 0, 0, 0, 252, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 253, 0, 0, 0, 254, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 256, 0, 0, 0, 0, 0, 0,
    257, 0, 0, 0, 0, 0, 0, 0, 0, 0, 258, 0, 0, 0, 0, 0, 0, 259, 0, 0, 0, 0, 0, 260, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 262, 0, 0, 263, 0, 0, 0, 0, 0, 264, 0, 0, 0, 0, 0,
    265, 0, 0, 0, 0, 0, 0, 0, 0, 266, 0, 0, 0, 0, 0, 0, 0, 0, 267, 0, 0, 0, 0, 0, 0, 268, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 269, 0, 0, 0, 0, 0, 0, 0, 0, 0, 270, 0, 271, 0, 272, 0, 0, 0, 0, 0, 0, 273, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 274, 0, 0, 0, 0, 0, 0, 275, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 276, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 277, 0, 0, 0, 0, 0, 0, 0, 0, 278, 0, 279, 0, 0, 0, 0,
    280, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 281, 0, 0, 0, 282, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    283, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 284, 0, 285, 0, 0, 0, 0, 286, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 287, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 288, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 289, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 290, 0, 0, 0, 0, 0, 0, 0, 291, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 292, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 293, 0, 0, 294, 0, 0, 295, 0, 0, 0, 0, 0, 296, 0, 0, 0, 0, 0, 0, 297, 0, 0, 0, 0, 0, 0, 0,
    298, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 299, 0, 0, 300, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 301, 0, 0, 0, 0, 0, 0, 0, 302, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 303, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 304, 0, 0, 305, 0, 0, 0, 0, 0, 0, 0, 0, 0, 306, 0, 0, 0, 0, 0, 0, 0, 307, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 308, 0, 0, 0, 0, 0, 0, 0, 0, 309, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    310, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 311, 0, 0, 0, 0, 0, 0, 0, 0, 312, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 313, 0, 0, 0, 0, 0, 314, 0, 0, 0, 0, 0, 315, 0, 0, 0, 0, 0, 0, 0, 316, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 317, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 318, 0, 0, 0, 0, 319, 0, 0, 0, 0, 0, 320, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 321,
    0, 0, 0, 322, 0, 0, 0, 323, 0, 0, 324, 0, 0, 325, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 326, 0, 0, 0, 0, 0, 0, 0, 327, 0, 0, 0, 328, 0, 0, 329, 0, 0, 330, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 331, 0, 0, 0,
    0, 0, 332, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 333, 0, 0, 0, 0, 334, 0, 0, 0, 335,
    0, 0, 0, 336, 0, 0, 0, 337, 0, 0, 0, 338, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 339, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 340, 0, 0, 0, 0, 0, 0, 0, 341, 0, 0, 0, 0, 0, 342, 0, 0, 0, 0, 0, 343, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 344, 0, 0, 0, 0, 0, 0, 0, 0, 0, 345, 0, 0, 0, 346, 0, 0,
    0, 0, 0, 347, 0, 0, 0, 0, 0, 0, 0, 0, 348, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 349, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 350, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 351, 0,
    0, 0, 0, 0, 352, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 353, 0, 0, 0, 354, 0, 0, 0, 355, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 356, 0, 0, 0, 357, 0, 0, 0, 358, 0, 0, 0, 0, 0, 359, 0, 0, 0, 0, 0, 360, 0, 0, 0, 0, 361, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 362, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 363, 0, 0, 364, 0, 0, 0, 0, 0, 365, 0, 0, 0, 0, 0, 366, 0, 0, 0, 367, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 368, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 369, 0, 370, 0, 0, 0, 0, 0,
};

void unit_008A(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_00328000;
    case 2u: goto L_00328008;
    case 3u: goto L_00328038;
    case 4u: goto L_00328048;
    case 5u: goto L_00328080;
    case 6u: goto L_003280A0;
    case 7u: goto L_003280D8;
    case 8u: goto L_00328140;
    case 9u: goto L_00328150;
    case 10u: goto L_00328160;
    case 11u: goto L_00328170;
    case 12u: goto L_00328180;
    case 13u: goto L_003281A8;
    case 14u: goto L_003281F8;
    case 15u: goto L_0032820C;
    case 16u: goto L_00328218;
    case 17u: goto L_00328228;
    case 18u: goto L_00328238;
    case 19u: goto L_00328248;
    case 20u: goto L_00328270;
    case 21u: goto L_00328288;
    case 22u: goto L_003282BC;
    case 23u: goto L_003282C8;
    case 24u: goto L_00328310;
    case 25u: goto L_00328338;
    case 26u: goto L_00328380;
    case 27u: goto L_003283B0;
    case 28u: goto L_003283E4;
    case 29u: goto L_003283F0;
    case 30u: goto L_00328408;
    case 31u: goto L_00328420;
    case 32u: goto L_00328450;
    case 33u: goto L_00328470;
    case 34u: goto L_00328494;
    case 35u: goto L_003284B4;
    case 36u: goto L_003284D8;
    case 37u: goto L_003284F0;
    case 38u: goto L_00328500;
    case 39u: goto L_0032856C;
    case 40u: goto L_003285BC;
    case 41u: goto L_003285D0;
    case 42u: goto L_003285E0;
    case 43u: goto L_0032860C;
    case 44u: goto L_0032862C;
    case 45u: goto L_00328648;
    case 46u: goto L_003286B0;
    case 47u: goto L_003286C4;
    case 48u: goto L_003286E0;
    case 49u: goto L_00328710;
    case 50u: goto L_0032873C;
    case 51u: goto L_0032874C;
    case 52u: goto L_00328754;
    case 53u: goto L_003287A0;
    case 54u: goto L_003287D0;
    case 55u: goto L_003287E8;
    case 56u: goto L_00328800;
    case 57u: goto L_0032882C;
    case 58u: goto L_00328844;
    case 59u: goto L_00328854;
    case 60u: goto L_00328870;
    case 61u: goto L_003288E0;
    case 62u: goto L_00328A34;
    case 63u: goto L_00328A4C;
    case 64u: goto L_00328A74;
    case 65u: goto L_00328A78;
    case 66u: goto L_00328AB8;
    case 67u: goto L_00328B08;
    case 68u: goto L_00328B0C;
    case 69u: goto L_00328B5C;
    case 70u: goto L_00328B88;
    case 71u: goto L_00328B8C;
    case 72u: goto L_00328BCC;
    case 73u: goto L_00328C00;
    case 74u: goto L_00328C08;
    case 75u: goto L_00328C18;
    case 76u: goto L_00328C60;
    case 77u: goto L_00328C74;
    case 78u: goto L_00328C8C;
    case 79u: goto L_00328D0C;
    case 80u: goto L_00328D14;
    case 81u: goto L_00328D5C;
    case 82u: goto L_00328D64;
    case 83u: goto L_00328DCC;
    case 84u: goto L_00328DD4;
    case 85u: goto L_00328DEC;
    case 86u: goto L_00328F10;
    case 87u: goto L_00328F30;
    case 88u: goto L_00328F64;
    case 89u: goto L_00328F70;
    case 90u: goto L_00328F7C;
    case 91u: goto L_00328F94;
    case 92u: goto L_00328FA8;
    case 93u: goto L_00328FB0;
    case 94u: goto L_00328FC0;
    case 95u: goto L_00328FCC;
    case 96u: goto L_00329018;
    case 97u: goto L_00329028;
    case 98u: goto L_00329034;
    case 99u: goto L_003290A0;
    case 100u: goto L_003290B4;
    case 101u: goto L_003290C4;
    case 102u: goto L_003290D0;
    case 103u: goto L_00329120;
    case 104u: goto L_00329140;
    case 105u: goto L_00329150;
    case 106u: goto L_0032915C;
    case 107u: goto L_003291AC;
    case 108u: goto L_003291C8;
    case 109u: goto L_003291D4;
    case 110u: goto L_00329220;
    case 111u: goto L_0032922C;
    case 112u: goto L_0032923C;
    case 113u: goto L_0032924C;
    case 114u: goto L_0032925C;
    case 115u: goto L_0032926C;
    case 116u: goto L_00329294;
    case 117u: goto L_003292A8;
    case 118u: goto L_003292B4;
    case 119u: goto L_003292BC;
    case 120u: goto L_003292CC;
    case 121u: goto L_003292D4;
    case 122u: goto L_003292E4;
    case 123u: goto L_003292F0;
    case 124u: goto L_00329304;
    case 125u: goto L_00329358;
    case 126u: goto L_00329390;
    case 127u: goto L_003293C4;
    case 128u: goto L_003293F0;
    case 129u: goto L_00329424;
    case 130u: goto L_0032944C;
    case 131u: goto L_00329474;
    case 132u: goto L_0032949C;
    case 133u: goto L_003294CC;
    case 134u: goto L_003294F8;
    case 135u: goto L_00329504;
    case 136u: goto L_00329510;
    case 137u: goto L_0032951C;
    case 138u: goto L_00329534;
    case 139u: goto L_00329560;
    case 140u: goto L_003295A0;
    case 141u: goto L_003295B8;
    case 142u: goto L_003295D0;
    case 143u: goto L_00329610;
    case 144u: goto L_00329620;
    case 145u: goto L_00329650;
    case 146u: goto L_00329694;
    case 147u: goto L_003296A8;
    case 148u: goto L_003296B0;
    case 149u: goto L_003296C8;
    case 150u: goto L_003296E4;
    case 151u: goto L_003296FC;
    case 152u: goto L_00329708;
    case 153u: goto L_00329720;
    case 154u: goto L_0032973C;
    case 155u: goto L_00329744;
    case 156u: goto L_00329760;
    case 157u: goto L_00329784;
    case 158u: goto L_00329798;
    case 159u: goto L_003297DC;
    case 160u: goto L_003297FC;
    case 161u: goto L_00329814;
    case 162u: goto L_00329834;
    case 163u: goto L_0032985C;
    case 164u: goto L_00329864;
    case 165u: goto L_00329880;
    case 166u: goto L_0032988C;
    case 167u: goto L_003298AC;
    case 168u: goto L_003298D4;
    case 169u: goto L_003298E8;
    case 170u: goto L_00329918;
    case 171u: goto L_00329958;
    case 172u: goto L_00329960;
    case 173u: goto L_00329980;
    case 174u: goto L_00329988;
    case 175u: goto L_00329994;
    case 176u: goto L_003299B0;
    case 177u: goto L_003299BC;
    case 178u: goto L_00329A30;
    case 179u: goto L_00329AB0;
    case 180u: goto L_00329AF0;
    case 181u: goto L_00329AF8;
    case 182u: goto L_00329B08;
    case 183u: goto L_00329B18;
    case 184u: goto L_00329B3C;
    case 185u: goto L_00329B6C;
    case 186u: goto L_00329B7C;
    case 187u: goto L_00329B90;
    case 188u: goto L_00329BBC;
    case 189u: goto L_00329C5C;
    case 190u: goto L_00329C7C;
    case 191u: goto L_00329CEC;
    case 192u: goto L_00329D00;
    case 193u: goto L_00329D40;
    case 194u: goto L_00329D78;
    case 195u: goto L_00329D9C;
    case 196u: goto L_00329DC8;
    case 197u: goto L_00329DF0;
    case 198u: goto L_00329E50;
    case 199u: goto L_00329EAC;
    case 200u: goto L_00329F34;
    case 201u: goto L_00329F48;
    case 202u: goto L_00329FE8;
    case 203u: goto L_0032A008;
    case 204u: goto L_0032A030;
    case 205u: goto L_0032A0D0;
    case 206u: goto L_0032A0F0;
    case 207u: goto L_0032A100;
    case 208u: goto L_0032A118;
    case 209u: goto L_0032A120;
    case 210u: goto L_0032A1B0;
    case 211u: goto L_0032A1C4;
    case 212u: goto L_0032A208;
    case 213u: goto L_0032A228;
    case 214u: goto L_0032A240;
    case 215u: goto L_0032A270;
    case 216u: goto L_0032A2A8;
    case 217u: goto L_0032A2C0;
    case 218u: goto L_0032A2D0;
    case 219u: goto L_0032A2F0;
    case 220u: goto L_0032A304;
    case 221u: goto L_0032A450;
    case 222u: goto L_0032A4B0;
    case 223u: goto L_0032A514;
    case 224u: goto L_0032A570;
    case 225u: goto L_0032A5D8;
    case 226u: goto L_0032A648;
    case 227u: goto L_0032A6AC;
    case 228u: goto L_0032A718;
    case 229u: goto L_0032A790;
    case 230u: goto L_0032A7B0;
    case 231u: goto L_0032A7D0;
    case 232u: goto L_0032A7E4;
    case 233u: goto L_0032A7F8;
    case 234u: goto L_0032A810;
    case 235u: goto L_0032A83C;
    case 236u: goto L_0032A860;
    case 237u: goto L_0032A87C;
    case 238u: goto L_0032A8A0;
    case 239u: goto L_0032A8E0;
    case 240u: goto L_0032A928;
    case 241u: goto L_0032A944;
    case 242u: goto L_0032A970;
    case 243u: goto L_0032A9D4;
    case 244u: goto L_0032A9E0;
    case 245u: goto L_0032A9EC;
    case 246u: goto L_0032AA04;
    case 247u: goto L_0032AA20;
    case 248u: goto L_0032AA80;
    case 249u: goto L_0032AB28;
    case 250u: goto L_0032AD90;
    case 251u: goto L_0032ADC8;
    case 252u: goto L_0032ADE0;
    case 253u: goto L_0032AE1C;
    case 254u: goto L_0032AE2C;
    case 255u: goto L_0032AE50;
    case 256u: goto L_0032AE64;
    case 257u: goto L_0032AE80;
    case 258u: goto L_0032AEA8;
    case 259u: goto L_0032AEC4;
    case 260u: goto L_0032AEDC;
    case 261u: goto L_0032AF10;
    case 262u: goto L_0032AF44;
    case 263u: goto L_0032AF50;
    case 264u: goto L_0032AF68;
    case 265u: goto L_0032AF80;
    case 266u: goto L_0032AFA4;
    case 267u: goto L_0032AFC8;
    case 268u: goto L_0032AFE4;
    case 269u: goto L_0032B020;
    case 270u: goto L_0032B048;
    case 271u: goto L_0032B050;
    case 272u: goto L_0032B058;
    case 273u: goto L_0032B074;
    case 274u: goto L_0032B0C8;
    case 275u: goto L_0032B0E4;
    case 276u: goto L_0032B110;
    case 277u: goto L_0032B140;
    case 278u: goto L_0032B164;
    case 279u: goto L_0032B16C;
    case 280u: goto L_0032B180;
    case 281u: goto L_0032B1B0;
    case 282u: goto L_0032B1C0;
    case 283u: goto L_0032B200;
    case 284u: goto L_0032B22C;
    case 285u: goto L_0032B234;
    case 286u: goto L_0032B248;
    case 287u: goto L_0032B278;
    case 288u: goto L_0032B2B0;
    case 289u: goto L_0032B2E4;
    case 290u: goto L_0032B310;
    case 291u: goto L_0032B330;
    case 292u: goto L_0032B360;
    case 293u: goto L_0032B394;
    case 294u: goto L_0032B3A0;
    case 295u: goto L_0032B3AC;
    case 296u: goto L_0032B3C4;
    case 297u: goto L_0032B3E0;
    case 298u: goto L_0032B400;
    case 299u: goto L_0032B43C;
    case 300u: goto L_0032B448;
    case 301u: goto L_0032B490;
    case 302u: goto L_0032B4B0;
    case 303u: goto L_0032B5F0;
    case 304u: goto L_0032B61C;
    case 305u: goto L_0032B628;
    case 306u: goto L_0032B650;
    case 307u: goto L_0032B670;
    case 308u: goto L_0032B6B0;
    case 309u: goto L_0032B6D4;
    case 310u: goto L_0032B700;
    case 311u: goto L_0032B73C;
    case 312u: goto L_0032B760;
    case 313u: goto L_0032B790;
    case 314u: goto L_0032B7A8;
    case 315u: goto L_0032B7C0;
    case 316u: goto L_0032B7E0;
    case 317u: goto L_0032B820;
    case 318u: goto L_0032B884;
    case 319u: goto L_0032B898;
    case 320u: goto L_0032B8B0;
    case 321u: goto L_0032B8FC;
    case 322u: goto L_0032B90C;
    case 323u: goto L_0032B91C;
    case 324u: goto L_0032B928;
    case 325u: goto L_0032B934;
    case 326u: goto L_0032B9B0;
    case 327u: goto L_0032B9D0;
    case 328u: goto L_0032B9E0;
    case 329u: goto L_0032B9EC;
    case 330u: goto L_0032B9F8;
    case 331u: goto L_0032BA70;
    case 332u: goto L_0032BA88;
    case 333u: goto L_0032BAD8;
    case 334u: goto L_0032BAEC;
    case 335u: goto L_0032BAFC;
    case 336u: goto L_0032BB0C;
    case 337u: goto L_0032BB1C;
    case 338u: goto L_0032BB2C;
    case 339u: goto L_0032BB60;
    case 340u: goto L_0032BBA0;
    case 341u: goto L_0032BBC0;
    case 342u: goto L_0032BBD8;
    case 343u: goto L_0032BBF0;
    case 344u: goto L_0032BC3C;
    case 345u: goto L_0032BC64;
    case 346u: goto L_0032BC74;
    case 347u: goto L_0032BC8C;
    case 348u: goto L_0032BCB0;
    case 349u: goto L_0032BD08;
    case 350u: goto L_0032BD3C;
    case 351u: goto L_0032BD78;
    case 352u: goto L_0032BD90;
    case 353u: goto L_0032BDC0;
    case 354u: goto L_0032BDD0;
    case 355u: goto L_0032BDE0;
    case 356u: goto L_0032BE10;
    case 357u: goto L_0032BE20;
    case 358u: goto L_0032BE30;
    case 359u: goto L_0032BE48;
    case 360u: goto L_0032BE60;
    case 361u: goto L_0032BE74;
    case 362u: goto L_0032BEB0;
    case 363u: goto L_0032BF04;
    case 364u: goto L_0032BF10;
    case 365u: goto L_0032BF28;
    case 366u: goto L_0032BF40;
    case 367u: goto L_0032BF50;
    case 368u: goto L_0032BFAC;
    case 369u: goto L_0032BFE0;
    case 370u: goto L_0032BFE8;
    default: bad_entry(c, 0x00328000u); return;
    }
L_00328000:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00328008u); st32((c.r[16].w[0] + 56u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000B(c, 461u, depth + 1u); else { c.pc = 0x0012FD60u; return; } if (c.pc != 0x00328008u) [[unlikely]] return; }
L_00328008:
    st32((c.r[16].w[0] + 352u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    st32((c.r[16].w[0] + 356u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43A00000u);
    set32(c.r[25], ld32((c.r[16].w[0] + 176u)));
    c.f[12] = c.r[2].w[0];
    c.f[14] = ld32((c.r[1].w[0] - 12856u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43A50000u);
    c.f[13] = c.r[2].w[0];
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 12;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00328038u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00328038u) [[unlikely]] return; }
L_00328038:
    set32(c.r[25], ld32((c.r[16].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00328048u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00328048u) [[unlikely]] return; }
L_00328048:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.f[23] = ld32((c.r[29].w[0] + 12u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 368u);  c.pc = t; return; }
L_00328080:
    set32(c.r[3], ld32((c.r[4].w[0] + 176u)));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 137u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_00328094; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00328094:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003280A0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 720u)));
    set32(c.r[17], ld32((c.r[5].w[0] + 24u)));
    c.r[1].d[0] = c.r[3].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[1].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00328124; } }
    st32((c.r[16].w[0] + 524u), c.r[17].w[0]);
    set32(c.r[4], c.r[16].w[0] + 448u);
    st32((c.r[16].w[0] + 508u), 0u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003280D8u); st8((c.r[16].w[0] + 504u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_002A(c, 280u, depth + 1u); else { c.pc = 0x001AB050u; return; } if (c.pc != 0x003280D8u) [[unlikely]] return; }
L_003280D8:
    set32(c.r[6], ld32((c.r[16].w[0] + 708u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[3], ld32((c.r[16].w[0] + 720u)));
    set32(c.r[4], c.r[4].w[0] - 4992u);
    set32(c.r[5], c.r[17].w[0] << 4);
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[6], c.r[4].w[0] + c.r[6].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[4], c.r[16].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[6].w[0])));
    set32(c.r[5], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0])));
    st32((c.r[4].w[0] + 660u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0] + 4u)));
    st32((c.r[4].w[0] + 664u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0] + 8u)));
    st32((c.r[4].w[0] + 668u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0] + 12u)));
    st32((c.r[4].w[0] + 672u), c.r[3].w[0]);
    c.budget -= 19;
L_00328124:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00328140:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 20u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003280A0u | kUnwind; return; } goto L_003280A0; }
L_00328150:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 20u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00326F80u | kUnwind; return; } [[clang::musttail]] return unit_0089(c, 360u, depth); }
L_00328160:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 40u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003279D0u | kUnwind; return; } [[clang::musttail]] return unit_0089(c, 445u, depth); }
L_00328170:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 40u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00326F80u | kUnwind; return; } [[clang::musttail]] return unit_0089(c, 360u, depth); }
L_00328180:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003281A8u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 256u, depth + 1u); else { c.pc = 0x00189B70u; return; } if (c.pc != 0x003281A8u) [[unlikely]] return; }
L_003281A8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.f[2] = ld32((c.r[18].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x48000000u);
    c.f[1] = ld32((c.r[19].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = ld32((c.r[1].w[0] - 12664u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.f[2] = fp::cvt_s_w(c.f[2]);
    st32((c.r[29].w[0] + 104u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 108u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 84u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 88u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 92u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 80u), c.f[0]);
    c.f[0] = fp::cvt_s_w(c.f[1]);
    st32((c.r[29].w[0] + 100u), c.f[2]);
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003281F8u); st32((c.r[29].w[0] + 96u), c.f[0]);  if (depth < kMaxDepth) unit_0023(c, 205u, depth + 1u); else { c.pc = 0x0018DFE0u; return; } if (c.pc != 0x003281F8u) [[unlikely]] return; }
L_003281F8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 26392u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 224u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032820Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0023(c, 203u, depth + 1u); else { c.pc = 0x0018DFC0u; return; } if (c.pc != 0x0032820Cu) [[unlikely]] return; }
L_0032820C:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00328218u); set32(c.r[4], c.r[2].w[0] + 169u);  if (depth < kMaxDepth) unit_000B(c, 461u, depth + 1u); else { c.pc = 0x0012FD60u; return; } if (c.pc != 0x00328218u) [[unlikely]] return; }
L_00328218:
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00328228u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0023(c, 210u, depth + 1u); else { c.pc = 0x0018E080u; return; } if (c.pc != 0x00328228u) [[unlikely]] return; }
L_00328228:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00328238u); set32(c.r[6], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0023(c, 211u, depth + 1u); else { c.pc = 0x0018E0B0u; return; } if (c.pc != 0x00328238u) [[unlikely]] return; }
L_00328238:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00328248u); set32(c.r[6], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_0023(c, 212u, depth + 1u); else { c.pc = 0x0018E0F0u; return; } if (c.pc != 0x00328248u) [[unlikely]] return; }
L_00328248:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_00328270:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[5], 0u + 12u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00328288u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 264u, depth + 1u); else { c.pc = 0x0013E560u; return; } if (c.pc != 0x00328288u) [[unlikely]] return; }
L_00328288:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[4], c.r[16].w[0] + 28u);
    set32(c.r[2], c.r[2].w[0] + 21872u);
    set32(c.r[5], 0u + 260u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    set32(c.r[6], 0u + 330u);
    st32((c.r[16].w[0] + 16u), 0u);
    set32(c.r[7], 0u + 84u);
    set32(c.r[8], 0u + 24u);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00F10000u);
    set32(c.r[10], 0u + 20u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003282BCu); st32((c.r[16].w[0] + 20u), 0u);  if (depth < kMaxDepth) unit_008A(c, 214u, depth + 1u); else { c.pc = 0x0032A240u; return; } if (c.pc != 0x003282BCu) [[unlikely]] return; }
L_003282BC:
    set32(c.r[4], 0u + 9u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003282C8u); st8((c.r[16].w[0] + 12u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0022(c, 116u, depth + 1u); else { c.pc = 0x00188910u; return; } if (c.pc != 0x003282C8u) [[unlikely]] return; }
L_003282C8:
    st32((c.r[16].w[0] + 24u), c.r[2].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F300000u);
    set32(c.r[5], ld32((c.r[16].w[0] + 24u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F200000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st32((c.r[5].w[0] + 16u), c.r[4].w[0]);
    st32((c.r[5].w[0] + 20u), c.r[3].w[0]);
    st32((c.r[5].w[0] + 24u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[1].w[0] + 26392u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 440u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00540000u);
    st32((c.r[16].w[0] + 56u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[1].w[0] - 1656u)));
    c.budget -= 16;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], 0u + 112u);  if (t) { goto L_00328378; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00328310u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00328310u) [[unlikely]] return; }
L_00328310:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00328338; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[1].w[0] + 26392u)));
    set32(c.r[5], 0u + 240u);
    set32(c.r[6], 0u + 360u);
    set32(c.r[7], ld32((c.r[3].w[0] + 440u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00328338u); set32(c.r[8], 0u + 11u);  if (depth < kMaxDepth) unit_008B(c, 150u, depth + 1u); else { c.pc = 0x0032D550u; return; } if (c.pc != 0x00328338u) [[unlikely]] return; }
L_00328338:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00420000u);
    st32((c.r[1].w[0] - 1656u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] - 4832u);
    ld128((c.r[3].w[0]) & ~15u, c.r[5]);
    set32(c.r[6], c.r[29].w[0] + 48u);
    set32(c.r[4], c.r[29].w[0] + 32u);
    st128((c.r[6].w[0]) & ~15u, c.r[5]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00420000u);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[5]);
    set32(c.r[3], c.r[3].w[0] - 4816u);
    st128((c.r[2].w[0] + 16u) & ~15u, c.r[5]);
    ld128((c.r[3].w[0]) & ~15u, c.r[3]);
    st128((c.r[4].w[0]) & ~15u, c.r[3]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[3]);
    st128((c.r[2].w[0] + 32u) & ~15u, c.r[3]);
    c.budget -= 16;
L_00328378:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00328380u); st8((c.r[16].w[0] + 60u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0022(c, 128u, depth + 1u); else { c.pc = 0x00188AE0u; return; } if (c.pc != 0x00328380u) [[unlikely]] return; }
L_00328380:
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_00328394; } }
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 60u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_00328394:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003283B0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00328408; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[4], c.r[17].w[0] + 28u);
    set32(c.r[2], c.r[2].w[0] + 21872u);
    set32(c.r[5], 0u - 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003283E4u); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_008A(c, 215u, depth + 1u); else { c.pc = 0x0032A270u; return; } if (c.pc != 0x003283E4u) [[unlikely]] return; }
L_003283E4:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003283F0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000F(c, 266u, depth + 1u); else { c.pc = 0x0013E5B0u; return; } if (c.pc != 0x003283F0u) [[unlikely]] return; }
L_003283F0:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0032840C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00328408u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x00328408u) [[unlikely]] return; }
L_00328408:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0032840C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00328420:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00540000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[1].w[0] - 1656u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00328450; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00328450; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 52u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00328450u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00328450u) [[unlikely]] return; }
L_00328450:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00540000u);
    st32((c.r[1].w[0] - 1656u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00328470:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[5].w[0])));
    st32((c.r[4].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[6].w[0])));
    st32((c.r[4].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[5].w[0])));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00328494u); set32(c.r[5], ld32((c.r[6].w[0])));  if (depth < kMaxDepth) unit_0022(c, 251u, depth + 1u); else { c.pc = 0x00189A20u; return; } if (c.pc != 0x00328494u) [[unlikely]] return; }
L_00328494:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00540000u);  if (t) { goto L_003284BC; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[4], ld32((c.r[1].w[0] - 1656u)));
    set32(c.r[5], c.r[5].w[0] - 12824u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003284B4u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_008B(c, 157u, depth + 1u); else { c.pc = 0x0032D670u; return; } if (c.pc != 0x003284B4u) [[unlikely]] return; }
L_003284B4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_003284DC; } }
L_003284BC:
    set32(c.r[5], ld32((c.r[2].w[0] + 28u)));
    set32(c.r[4], ld32((c.r[1].w[0] - 1656u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 48u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[5].d[0]; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_003284D8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003284D8u);  if (depth < kMaxDepth) unit_008B(c, 157u, depth + 1u); else { c.pc = 0x0032D670u; return; } if (c.pc != 0x003284D8u) [[unlikely]] return; }
L_003284D8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_003284DC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003284F0:
    c.budget -= 2;
    { set32(c.r[6], c.r[5].w[0] + 4u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00328470u | kUnwind; return; } goto L_00328470; }
L_00328500:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[3], 0u + 255u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 24u)));
    st32((c.r[2].w[0] + 60u), c.r[3].w[0]);
    c.r[2].d[0] = ld8((c.r[4].w[0] + 60u));
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00328574; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 16u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x48800000u);
    c.f[14] = c.r[2].w[0];
    set32(c.r[4], ld32((c.r[16].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[2], c.r[5].w[0] << 2);
    set32(c.r[5], c.r[2].w[0] + 120u);
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    c.f[0] = c.r[5].w[0];
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[12] = fp::cvt_s_w(c.f[0]);
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + 86u);
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.f[0] = c.r[2].w[0];
    c.budget -= 18;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0032856Cu); c.f[13] = fp::cvt_s_w(c.f[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0032856Cu) [[unlikely]] return; }
L_0032856C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[16].w[0] + 24u)));  if (t) { goto L_003285C0; } }
L_00328574:
    set32(c.r[5], ld32((c.r[16].w[0] + 16u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x48800000u);
    c.f[14] = c.r[2].w[0];
    set32(c.r[4], ld32((c.r[16].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[2], c.r[5].w[0] << 1);
    set32(c.r[5], c.r[2].w[0] + 120u);
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    c.f[0] = c.r[5].w[0];
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[12] = fp::cvt_s_w(c.f[0]);
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + 86u);
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.f[0] = c.r[2].w[0];
    c.budget -= 18;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003285BCu); c.f[13] = fp::cvt_s_w(c.f[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003285BCu) [[unlikely]] return; }
L_003285BC:
    set32(c.r[4], ld32((c.r[16].w[0] + 24u)));
    c.budget -= 1;
L_003285C0:
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 56u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003285D0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003285D0u) [[unlikely]] return; }
L_003285D0:
    set32(c.r[25], ld32((c.r[16].w[0] + 52u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003285E0u); set32(c.r[4], c.r[16].w[0] + 28u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003285E0u) [[unlikely]] return; }
L_003285E0:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[5], c.r[29].w[0] + 32u);
    set32(c.r[6], c.r[6].w[0] - 4800u);
    c.r[4].d[0] = 0ull + 0ull;
    ld128((c.r[6].w[0]) & ~15u, c.r[3]);
    c.f[0] = ld32((c.r[6].w[0] + 24u));
    c.r[2].d[0] = ld64((c.r[6].w[0] + 16u));
    st128((c.r[5].w[0]) & ~15u, c.r[3]);
    st64((c.r[5].w[0] + 16u), c.r[2].d[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032860Cu); st32((c.r[5].w[0] + 24u), c.f[0]);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x0032860Cu) [[unlikely]] return; }
L_0032860C:
    set32(c.r[4], ld32((c.r[16].w[0] + 56u)));
    set32(c.r[3], ld32((c.r[2].w[0])));
    st32((c.r[4].w[0] + 48u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    st32((c.r[4].w[0] + 52u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032862Cu); st32((c.r[4].w[0] + 56u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0022(c, 132u, depth + 1u); else { c.pc = 0x00188B30u; return; } if (c.pc != 0x0032862Cu) [[unlikely]] return; }
L_0032862C:
    set32(c.r[3], ld32((c.r[16].w[0] + 56u)));
    st32((c.r[3].w[0] + 60u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00328648u); set32(c.r[4], ld32((c.r[2].w[0] + 32u)));  if (depth < kMaxDepth) unit_000B(c, 461u, depth + 1u); else { c.pc = 0x0012FD60u; return; } if (c.pc != 0x00328648u) [[unlikely]] return; }
L_00328648:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43990000u);
    set32(c.r[4], ld32((c.r[16].w[0] + 56u)));
    c.f[12] = c.r[3].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43AB0000u);
    c.f[13] = c.r[3].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00F10000u);
    st32((c.r[4].w[0] + 352u), c.r[2].w[0]);
    c.r[3].d[0] = c.r[3].d[0] | 16384ull;
    st32((c.r[4].w[0] + 356u), 0u);
    c.f[0] = c.r[3].w[0];
    set32(c.r[2], ld32((c.r[16].w[0] + 56u)));
    c.f[14] = fp::cvt_s_w(c.f[0]);
    c.f[0] = ld32((c.r[1].w[0] - 12672u));
    st32((c.r[2].w[0] + 16u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[0] = ld32((c.r[1].w[0] - 12672u));
    st32((c.r[2].w[0] + 20u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[0] = ld32((c.r[1].w[0] - 12672u));
    st32((c.r[2].w[0] + 24u), c.f[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 56u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 26;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003286B0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003286B0u) [[unlikely]] return; }
L_003286B0:
    set32(c.r[4], ld32((c.r[16].w[0] + 56u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003286C4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003286C4u) [[unlikely]] return; }
L_003286C4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003286E0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[8].d[0] + 0ull;
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00328710u); set32(c.r[5], 0u + 5u);  if (depth < kMaxDepth) unit_000F(c, 264u, depth + 1u); else { c.pc = 0x0013E560u; return; } if (c.pc != 0x00328710u) [[unlikely]] return; }
L_00328710:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] + 21856u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0])));
    st32((c.r[16].w[0] + 12u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0])));
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0])));
    st32((c.r[16].w[0] + 24u), c.r[2].w[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032873Cu); st8((c.r[16].w[0] + 28u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0022(c, 118u, depth + 1u); else { c.pc = 0x001889B0u; return; } if (c.pc != 0x0032873Cu) [[unlikely]] return; }
L_0032873C:
    st32((c.r[29].w[0] + 92u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032874Cu); set32(c.r[5], c.r[29].w[0] + 92u);  if (depth < kMaxDepth) unit_008A(c, 56u, depth + 1u); else { c.pc = 0x00328800u; return; } if (c.pc != 0x0032874Cu) [[unlikely]] return; }
L_0032874C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00328754u);  if (depth < kMaxDepth) unit_0022(c, 128u, depth + 1u); else { c.pc = 0x00188AE0u; return; } if (c.pc != 0x00328754u) [[unlikely]] return; }
L_00328754:
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; set32(c.r[4], 0u - 2u);  if (t) { goto L_00328768; } }
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 28u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_00328768:
    set32(c.r[3], 0u + 8u);
    st32((c.r[16].w[0] + 32u), c.r[4].w[0]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 36u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 40u), c.r[4].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_003287A0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003287E8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 21856u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003287D0u); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000F(c, 266u, depth + 1u); else { c.pc = 0x0013E5B0u; return; } if (c.pc != 0x003287D0u) [[unlikely]] return; }
L_003287D0:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003287EC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003287E8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x003287E8u) [[unlikely]] return; }
L_003287E8:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003287EC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00328800:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[5].w[0])));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00328820; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 20u), c.r[3].w[0]);  if (t) { goto L_00328854; } }
L_00328820:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032882Cu); set32(c.r[4], ld32((c.r[1].w[0] + 26120u)));  if (depth < kMaxDepth) unit_0023(c, 46u, depth + 1u); else { c.pc = 0x0018C890u; return; } if (c.pc != 0x0032882Cu) [[unlikely]] return; }
L_0032882C:
    st32((c.r[29].w[0] + 44u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 44u)));
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] > 0; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0032884C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00328844u);  if (depth < kMaxDepth) unit_0022(c, 118u, depth + 1u); else { c.pc = 0x001889B0u; return; } if (c.pc != 0x00328844u) [[unlikely]] return; }
L_00328844:
    st32((c.r[29].w[0] + 44u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 2;
L_0032884C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00328854u); set32(c.r[5], c.r[29].w[0] + 44u);  if (depth < kMaxDepth) unit_008A(c, 56u, depth + 1u); else { c.pc = 0x00328800u; return; } if (c.pc != 0x00328854u) [[unlikely]] return; }
L_00328854:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00328870:
    set32(c.r[3], 0u + 255u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[3].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);  if (t) { goto L_003288C0; } }
    set32(c.r[3], 0u + 7000u);
    set32(c.r[6], ld32((c.r[1].w[0] + 28324u)));
    set32(c.r[5], ld32((c.r[6].w[0] + 164u)));
    c.budget -= 5;
    { const bool t = c.r[5].d[0] != c.r[3].d[0]; set32(c.r[3], 0u - 2u);  if (t) { goto L_003288B8; } }
    set32(c.r[5], ld32((c.r[6].w[0] + 176u)));
    c.budget -= 3;
    { const bool t = c.r[5].sd[0] >= 0; set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[5].w[0]) >> 2));  if (t) { goto L_003288A4; } }
    set32(c.r[3], c.r[5].w[0] + 3u);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 2));
    c.budget -= 2;
L_003288A4:
    st32((c.r[4].w[0] + 32u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 36u), 0u);
    set32(c.r[3], ld32((c.r[4].w[0] + 32u)));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 40u), c.r[3].w[0]);  if (t) { goto L_003288D4; } }
L_003288B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 32u), c.r[3].w[0]);  if (t) { goto L_003288D4; } }
L_003288C0:
    c.budget -= 2;
    { const bool t = c.r[5].sd[0] < 0; st32((c.r[4].w[0] + 32u), c.r[5].w[0]);  if (t) { goto L_003288D4; } }
    st32((c.r[4].w[0] + 36u), 0u);
    set32(c.r[3], ld32((c.r[4].w[0] + 32u)));
    st32((c.r[4].w[0] + 40u), c.r[3].w[0]);
    c.budget -= 3;
L_003288D4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003288E0:
    set32(c.r[29], c.r[29].w[0] - 416u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[10], ld32((c.r[1].w[0] + 20144u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[10].w[0] + c.r[1].w[0]);
    set32(c.r[2], c.r[2].w[0] + 240u);
    set32(c.r[3], ld32((c.r[1].w[0] + 1424u)));
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.r[4].d[0] = c.r[2].d[0] << 16;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[3], c.r[3].w[0] - 1u);
    set32(c.r[1], c.r[10].w[0] + c.r[1].w[0]);
    c.r[3].d[0] = c.r[3].d[0] << 32;
    set32(c.r[2], ld32((c.r[1].w[0] + 1364u)));
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[1].d[0] = c.r[2].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 32;
    { const bool t = c.r[1].d[0] != 0ull; c.r[11].d[0] = c.r[4].d[0] | c.r[3].d[0];  if (t) { goto L_003289F8; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    set32(c.r[1], c.r[10].w[0] + c.r[1].w[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x50000000u);
    set32(c.r[9], ld32((c.r[1].w[0] + 1380u)));
    c.r[8].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[7].d[0] = c.r[2].d[0] | 3ull;
    c.r[3].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = 0ull | 32769ull;
    c.r[6].sd[0] = static_cast<std::int32_t>(0x11000000u);
    c.r[4].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.r[5].d[0] = c.r[5].d[0] | 2ull;
    set32(c.r[3], 0u + 14u);
    set32(c.r[2], 0u + 64u);
    c.r[8].d[0] = c.r[9].d[0] | c.r[8].d[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    st64((c.r[8].w[0]), c.r[7].d[0]);
    set32(c.r[1], c.r[10].w[0] + c.r[1].w[0]);
    st64((c.r[8].w[0] + 8u), 0ull);
    st64((c.r[8].w[0] + 16u), 0ull);
    st32((c.r[8].w[0] + 24u), c.r[6].w[0]);
    st32((c.r[8].w[0] + 28u), c.r[5].w[0]);
    st64((c.r[8].w[0] + 32u), c.r[4].d[0]);
    st64((c.r[8].w[0] + 40u), c.r[3].d[0]);
    st64((c.r[8].w[0] + 48u), c.r[11].d[0]);
    st64((c.r[8].w[0] + 56u), c.r[2].d[0]);
    set32(c.r[2], ld32((c.r[1].w[0] + 1380u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[2], c.r[2].w[0] + 64u);
    set32(c.r[1], c.r[10].w[0] + c.r[1].w[0]);
    st32((c.r[1].w[0] + 1380u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[10].w[0] + c.r[1].w[0]);
    set32(c.r[2], ld32((c.r[1].w[0] + 1364u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[2], c.r[2].w[0] - 4u);
    set32(c.r[1], c.r[10].w[0] + c.r[1].w[0]);
    st32((c.r[1].w[0] + 1364u), c.r[2].w[0]);
    c.budget -= 38;
L_003289F8:
    set32(c.r[3], ld32((c.r[17].w[0] + 24u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_00328A54; } }
    c.r[2].d[0] = ld8((c.r[17].w[0] + 28u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00328A3C; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] >= 0; set32(c.r[6], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));  if (t) { goto L_00328A28; } }
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[6], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    c.budget -= 2;
L_00328A28:
    set32(c.r[5], ld32((c.r[17].w[0] + 16u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00328A34u); set32(c.r[4], ld32((c.r[17].w[0] + 12u)));  if (depth < kMaxDepth) unit_0088(c, 474u, depth + 1u); else { c.pc = 0x00322E80u; return; } if (c.pc != 0x00328A34u) [[unlikely]] return; }
L_00328A34:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[17].w[0] + 24u)));  if (t) { goto L_00328BEC; } }
L_00328A3C:
    set32(c.r[5], ld32((c.r[17].w[0] + 16u)));
    set32(c.r[6], ld32((c.r[17].w[0] + 20u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00328A4Cu); set32(c.r[4], ld32((c.r[17].w[0] + 12u)));  if (depth < kMaxDepth) unit_0088(c, 474u, depth + 1u); else { c.pc = 0x00322E80u; return; } if (c.pc != 0x00328A4Cu) [[unlikely]] return; }
L_00328A4C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00328BE8; } }
L_00328A54:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00328AD8; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 12u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    set32(c.r[5], ld32((c.r[17].w[0] + 16u)));
    set32(c.r[6], ld32((c.r[17].w[0] + 20u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00328A74u); c.r[7].d[0] = c.r[2].d[0] | 36864ull;  if (depth < kMaxDepth) unit_0088(c, 458u, depth + 1u); else { c.pc = 0x00322B50u; return; } if (c.pc != 0x00328A74u) [[unlikely]] return; }
L_00328A74:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00328A78:
    set32(c.r[3], ld32((c.r[17].w[0] + 36u)));
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    c.r[1].d[0] = c.r[3].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00328AB8; } }
    set32(c.r[6], ld32((c.r[17].w[0] + 40u)));
    set32(c.r[2], c.r[3].w[0] << 5);
    set32(c.r[4], ld32((c.r[17].w[0] + 12u)));
    set32(c.r[3], 0u + 255u);
    set32(c.r[5], ld32((c.r[17].w[0] + 16u)));
    set32(c.r[2], c.r[3].w[0] - c.r[2].w[0]);
    c.r[7].d[0] = c.r[2].d[0] & 255ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[8].d[0] = c.r[2].d[0] | 36864ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00328AB8u); set32(c.r[6], c.r[6].w[0] - c.r[16].w[0]);  if (depth < kMaxDepth) unit_0088(c, 469u, depth + 1u); else { c.pc = 0x00322D70u; return; } if (c.pc != 0x00328AB8u) [[unlikely]] return; }
L_00328AB8:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[3].d[0] = c.r[16].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00328A78u | kUnwind; return; } goto L_00328A78; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 36u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 36u), c.r[3].w[0]);  if (t) { goto L_00328BE8; } }
L_00328AD8:
    c.r[2].d[0] = ld8((c.r[17].w[0] + 28u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00328B74; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] >= 0; set32(c.r[6], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));  if (t) { goto L_00328AF8; } }
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[6], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    c.budget -= 2;
L_00328AF8:
    set32(c.r[4], ld32((c.r[17].w[0] + 12u)));
    set32(c.r[5], ld32((c.r[17].w[0] + 16u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00328B08u); c.r[7].sd[0] = static_cast<std::int32_t>(0x00010000u);  if (depth < kMaxDepth) unit_0088(c, 458u, depth + 1u); else { c.pc = 0x00322B50u; return; } if (c.pc != 0x00328B08u) [[unlikely]] return; }
L_00328B08:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00328B0C:
    set32(c.r[3], ld32((c.r[17].w[0] + 36u)));
    set32(c.r[4], c.r[3].w[0] + c.r[16].w[0]);
    c.r[1].d[0] = c.r[4].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00328B5C; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 40u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 1));  if (t) { goto L_00328B34; } }
    set32(c.r[2], c.r[3].w[0] + 1u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    c.budget -= 2;
L_00328B34:
    set32(c.r[6], c.r[2].w[0] - c.r[16].w[0]);
    set32(c.r[5], ld32((c.r[17].w[0] + 16u)));
    set32(c.r[2], c.r[4].w[0] << 5);
    set32(c.r[3], 0u + 255u);
    set32(c.r[4], ld32((c.r[17].w[0] + 12u)));
    set32(c.r[2], c.r[3].w[0] - c.r[2].w[0]);
    c.r[7].d[0] = c.r[2].d[0] & 255ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00328B5Cu); c.r[8].d[0] = c.r[2].d[0] | 4096ull;  if (depth < kMaxDepth) unit_0088(c, 469u, depth + 1u); else { c.pc = 0x00322D70u; return; } if (c.pc != 0x00328B5Cu) [[unlikely]] return; }
L_00328B5C:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[3].d[0] = c.r[16].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00328B0Cu | kUnwind; return; } goto L_00328B0C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[17].w[0] + 36u)));  if (t) { goto L_00328BE0; } }
L_00328B74:
    set32(c.r[4], ld32((c.r[17].w[0] + 12u)));
    set32(c.r[5], ld32((c.r[17].w[0] + 16u)));
    set32(c.r[6], ld32((c.r[17].w[0] + 20u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00328B88u); c.r[7].sd[0] = static_cast<std::int32_t>(0x00010000u);  if (depth < kMaxDepth) unit_0088(c, 458u, depth + 1u); else { c.pc = 0x00322B50u; return; } if (c.pc != 0x00328B88u) [[unlikely]] return; }
L_00328B88:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00328B8C:
    set32(c.r[3], ld32((c.r[17].w[0] + 36u)));
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    c.r[1].d[0] = c.r[3].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00328BCC; } }
    set32(c.r[6], ld32((c.r[17].w[0] + 40u)));
    set32(c.r[2], c.r[3].w[0] << 5);
    set32(c.r[4], ld32((c.r[17].w[0] + 12u)));
    set32(c.r[3], 0u + 255u);
    set32(c.r[5], ld32((c.r[17].w[0] + 16u)));
    set32(c.r[2], c.r[3].w[0] - c.r[2].w[0]);
    c.r[7].d[0] = c.r[2].d[0] & 255ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[8].d[0] = c.r[2].d[0] | 4096ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00328BCCu); set32(c.r[6], c.r[6].w[0] - c.r[16].w[0]);  if (depth < kMaxDepth) unit_0088(c, 469u, depth + 1u); else { c.pc = 0x00322D70u; return; } if (c.pc != 0x00328BCCu) [[unlikely]] return; }
L_00328BCC:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[3].d[0] = c.r[16].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00328B8Cu | kUnwind; return; } goto L_00328B8C; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 36u)));
    c.budget -= 1;
L_00328BE0:
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[17].w[0] + 36u), c.r[3].w[0]);
    c.budget -= 2;
L_00328BE8:
    set32(c.r[4], ld32((c.r[17].w[0] + 24u)));
    c.budget -= 1;
L_00328BEC:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00328DEC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00328C00u);  if (depth < kMaxDepth) unit_0022(c, 256u, depth + 1u); else { c.pc = 0x00189B70u; return; } if (c.pc != 0x00328C00u) [[unlikely]] return; }
L_00328C00:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00328C08u); c.r[21].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0023(c, 256u, depth + 1u); else { c.pc = 0x0018E780u; return; } if (c.pc != 0x00328C08u) [[unlikely]] return; }
L_00328C08:
    set32(c.r[19], ld32((c.r[21].w[0] + 64u)));
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00328C18u); set32(c.r[4], c.r[29].w[0] + 160u);  if (depth < kMaxDepth) unit_0017(c, 177u, depth + 1u); else { c.pc = 0x0015E070u; return; } if (c.pc != 0x00328C18u) [[unlikely]] return; }
L_00328C18:
    set32(c.r[17], c.r[29].w[0] + 320u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41800000u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[16], c.r[29].w[0] + 324u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    set32(c.r[22], c.r[29].w[0] + 208u);
    set32(c.r[2], 0u + 255u);
    set32(c.r[23], c.r[29].w[0] + 212u);
    st32((c.r[22].w[0]), c.r[2].w[0]);
    set32(c.r[30], c.r[29].w[0] + 216u);
    set32(c.r[2], 0u + 128u);
    set32(c.r[18], c.r[29].w[0] + 220u);
    st32((c.r[23].w[0]), c.r[2].w[0]);
    set32(c.r[2], 0u + 96u);
    st32((c.r[30].w[0]), c.r[2].w[0]);
    set32(c.r[2], 0u + 160u);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00328C60u); st32((c.r[18].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0022(c, 132u, depth + 1u); else { c.pc = 0x00188B30u; return; } if (c.pc != 0x00328C60u) [[unlikely]] return; }
L_00328C60:
    c.r[1].d[0] = c.r[2].sd[0] < 160ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00328C78; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00328C74u);  if (depth < kMaxDepth) unit_0022(c, 132u, depth + 1u); else { c.pc = 0x00188B30u; return; } if (c.pc != 0x00328C74u) [[unlikely]] return; }
L_00328C74:
    st32((c.r[18].w[0]), c.r[2].w[0]);
    c.budget -= 1;
L_00328C78:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[29].w[0] + 176u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 180u), c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00328C8Cu); st32((c.r[29].w[0] + 184u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0022(c, 118u, depth + 1u); else { c.pc = 0x001889B0u; return; } if (c.pc != 0x00328C8Cu) [[unlikely]] return; }
L_00328C8C:
    set32(c.r[4], c.r[19].w[0] << 1);
    set32(c.r[3], 0u - 1u);
    set32(c.r[4], c.r[4].w[0] + c.r[19].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[4], c.r[20].w[0] + c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 32u)));
    c.budget -= 8;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], c.r[4].w[0] + 4u);  if (t) { goto L_00328D64; } }
    c.r[1].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00328D24; } }
    set32(c.r[3], c.r[2].w[0] - c.r[4].w[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x41800000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[4].w[0] << 2);
    c.f[1] = c.r[3].w[0];
    set32(c.r[2], c.r[2].w[0] + 132u);
    c.f[0] = c.r[2].w[0];
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42880000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 36864ull;
    st32((c.r[17].w[0]), c.f[1]);
    c.f[12] = fp::cvt_s_w(c.f[0]);
    st32((c.r[16].w[0]), c.r[5].w[0]);
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    c.f[0] = c.r[2].w[0];
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.f[13] = c.r[3].w[0];
    c.budget -= 21;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00328D0Cu); c.f[14] = fp::cvt_s_w(c.f[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00328D0Cu) [[unlikely]] return; }
L_00328D0C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00328D14u); set32(c.r[4], c.r[29].w[0] + 160u);  if (depth < kMaxDepth) unit_0017(c, 179u, depth + 1u); else { c.pc = 0x0015E0B0u; return; } if (c.pc != 0x00328D14u) [[unlikely]] return; }
L_00328D14:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41800000u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_00328D64; } }
L_00328D24:
    set32(c.r[2], c.r[4].w[0] << 2);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42880000u);
    set32(c.r[4], c.r[2].w[0] + 132u);
    c.f[0] = c.r[4].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 36864ull;
    c.f[12] = fp::cvt_s_w(c.f[0]);
    set32(c.r[4], c.r[29].w[0] + 160u);
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    c.f[0] = c.r[2].w[0];
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.f[13] = c.r[3].w[0];
    c.budget -= 14;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00328D5Cu); c.f[14] = fp::cvt_s_w(c.f[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00328D5Cu) [[unlikely]] return; }
L_00328D5C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00328D64u); set32(c.r[4], c.r[29].w[0] + 160u);  if (depth < kMaxDepth) unit_0017(c, 182u, depth + 1u); else { c.pc = 0x0015E530u; return; } if (c.pc != 0x00328D64u) [[unlikely]] return; }
L_00328D64:
    set32(c.r[2], ld32((c.r[21].w[0] + 72u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_00328DD4; } }
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], 0u + 255u);
    st32((c.r[22].w[0]), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + 132u);
    c.f[0] = c.r[2].w[0];
    st32((c.r[23].w[0]), c.r[3].w[0]);
    st32((c.r[30].w[0]), 0u);
    set32(c.r[4], c.r[29].w[0] + 160u);
    st32((c.r[18].w[0]), c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40800000u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42880000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41800000u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.f[12] = fp::cvt_s_w(c.f[0]);
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 40960ull;
    c.f[0] = c.r[2].w[0];
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.f[13] = c.r[3].w[0];
    c.budget -= 23;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00328DCCu); c.f[14] = fp::cvt_s_w(c.f[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00328DCCu) [[unlikely]] return; }
L_00328DCC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00328DD4u); set32(c.r[4], c.r[29].w[0] + 160u);  if (depth < kMaxDepth) unit_0017(c, 179u, depth + 1u); else { c.pc = 0x0015E0B0u; return; } if (c.pc != 0x00328DD4u) [[unlikely]] return; }
L_00328DD4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[4], c.r[29].w[0] + 160u);
    set32(c.r[2], c.r[2].w[0] - 17408u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00328DECu); st32((c.r[29].w[0] + 336u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0012(c, 264u, depth + 1u); else { c.pc = 0x0014ADA0u; return; } if (c.pc != 0x00328DECu) [[unlikely]] return; }
L_00328DEC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], ld32((c.r[1].w[0] + 20144u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[3].w[0] + c.r[1].w[0]);
    set32(c.r[6], ld32((c.r[1].w[0] + 1420u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[6], c.r[6].w[0] - 1u);
    set32(c.r[1], c.r[3].w[0] + c.r[1].w[0]);
    c.r[6].d[0] = c.r[6].d[0] << 32;
    set32(c.r[5], ld32((c.r[1].w[0] + 1424u)));
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 32);
    c.r[6].d[0] = c.r[6].d[0] << 16;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[5], c.r[5].w[0] - 1u);
    set32(c.r[1], c.r[3].w[0] + c.r[1].w[0]);
    c.r[5].d[0] = c.r[5].d[0] << 32;
    set32(c.r[4], ld32((c.r[1].w[0] + 1364u)));
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 32);
    c.r[5].d[0] = c.r[5].d[0] << 48;
    c.r[1].d[0] = c.r[4].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 22;
    { const bool t = c.r[1].d[0] != 0ull; c.r[12].d[0] = c.r[6].d[0] | c.r[5].d[0];  if (t) { goto L_00328EDC; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x10000000u);
    set32(c.r[1], c.r[3].w[0] + c.r[1].w[0]);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x50000000u);
    set32(c.r[11], ld32((c.r[1].w[0] + 1380u)));
    c.r[10].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[9].d[0] = c.r[4].d[0] | 3ull;
    c.r[5].d[0] = c.r[4].d[0] << 32;
    c.r[4].d[0] = 0ull | 32769ull;
    c.r[8].sd[0] = static_cast<std::int32_t>(0x11000000u);
    c.r[6].d[0] = c.r[4].d[0] | c.r[5].d[0];
    c.r[7].d[0] = c.r[7].d[0] | 2ull;
    set32(c.r[5], 0u + 14u);
    set32(c.r[4], 0u + 64u);
    c.r[10].d[0] = c.r[11].d[0] | c.r[10].d[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    st64((c.r[10].w[0]), c.r[9].d[0]);
    set32(c.r[1], c.r[3].w[0] + c.r[1].w[0]);
    st64((c.r[10].w[0] + 8u), 0ull);
    st64((c.r[10].w[0] + 16u), 0ull);
    st32((c.r[10].w[0] + 24u), c.r[8].w[0]);
    st32((c.r[10].w[0] + 28u), c.r[7].w[0]);
    st64((c.r[10].w[0] + 32u), c.r[6].d[0]);
    st64((c.r[10].w[0] + 40u), c.r[5].d[0]);
    st64((c.r[10].w[0] + 48u), c.r[12].d[0]);
    st64((c.r[10].w[0] + 56u), c.r[4].d[0]);
    set32(c.r[4], ld32((c.r[1].w[0] + 1380u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[4], c.r[4].w[0] + 64u);
    set32(c.r[1], c.r[3].w[0] + c.r[1].w[0]);
    st32((c.r[1].w[0] + 1380u), c.r[4].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[3].w[0] + c.r[1].w[0]);
    set32(c.r[4], ld32((c.r[1].w[0] + 1364u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[4], c.r[4].w[0] - 4u);
    set32(c.r[1], c.r[3].w[0] + c.r[1].w[0]);
    st32((c.r[1].w[0] + 1364u), c.r[4].w[0]);
    c.budget -= 38;
L_00328EDC:
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 416u);  c.pc = t; return; }
L_00328F10:
    set32(c.r[29], c.r[29].w[0] - 128u);
    set32(c.r[5], 0u + 10u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00328F30u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_000F(c, 264u, depth + 1u); else { c.pc = 0x0013E560u; return; } if (c.pc != 0x00328F30u) [[unlikely]] return; }
L_00328F30:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], 0u + 196u);
    set32(c.r[3], c.r[3].w[0] + 21840u);
    set32(c.r[4], c.r[18].w[0] + 176u);
    st32((c.r[18].w[0]), c.r[3].w[0]);
    set32(c.r[5], 0u + 11u);
    st32((c.r[18].w[0] + 12u), c.r[2].w[0]);
    set32(c.r[3], 0u + 358u);
    st32((c.r[18].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[2], 0u + 255u);
    st32((c.r[18].w[0] + 20u), 0u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00328F64u); st32((c.r[18].w[0] + 56u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0023(c, 195u, depth + 1u); else { c.pc = 0x0018DEA0u; return; } if (c.pc != 0x00328F64u) [[unlikely]] return; }
L_00328F64:
    set32(c.r[4], c.r[18].w[0] + 288u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00328F70u); set32(c.r[5], 0u + 11u);  if (depth < kMaxDepth) unit_0023(c, 226u, depth + 1u); else { c.pc = 0x0018E370u; return; } if (c.pc != 0x00328F70u) [[unlikely]] return; }
L_00328F70:
    set32(c.r[17], c.r[18].w[0] + 416u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00328F7Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 177u, depth + 1u); else { c.pc = 0x0015E070u; return; } if (c.pc != 0x00328F7Cu) [[unlikely]] return; }
L_00328F7C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[16], c.r[18].w[0] + 672u);
    set32(c.r[2], c.r[2].w[0] + 21488u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00328F94u); st32((c.r[17].w[0] + 176u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0017(c, 177u, depth + 1u); else { c.pc = 0x0015E070u; return; } if (c.pc != 0x00328F94u) [[unlikely]] return; }
L_00328F94:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 21488u);
    st32((c.r[16].w[0] + 176u), c.r[2].w[0]);
    st32((c.r[18].w[0] + 60u), 0u);
    c.budget -= 5;
L_00328FA8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00328FB0u); set32(c.r[4], 0u + 272u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00328FB0u) [[unlikely]] return; }
L_00328FB0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00328FD8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00328FC0u); set32(c.r[4], c.r[17].w[0] + 15u);  if (depth < kMaxDepth) unit_0022(c, 105u, depth + 1u); else { c.pc = 0x00188790u; return; } if (c.pc != 0x00328FC0u) [[unlikely]] return; }
L_00328FC0:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00328FCCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 188u, depth + 1u); else { c.pc = 0x0015ED60u; return; } if (c.pc != 0x00328FCCu) [[unlikely]] return; }
L_00328FCC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] + 21424u);
    st32((c.r[16].w[0] + 176u), c.r[2].w[0]);
    c.budget -= 3;
L_00328FD8:
    set32(c.r[2], c.r[17].w[0] << 2);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[5], c.r[18].w[0] + c.r[2].w[0]);
    set32(c.r[17], c.r[17].w[0] + 1u);
    st32((c.r[5].w[0] + 68u), c.r[16].w[0]);
    set32(c.r[4], 0u + 255u);
    set32(c.r[6], ld32((c.r[5].w[0] + 68u)));
    c.r[2].d[0] = c.r[17].sd[0] < 21ll ? 1ull : 0ull;
    st32((c.r[6].w[0] + 16u), c.r[3].w[0]);
    st32((c.r[6].w[0] + 20u), c.r[3].w[0]);
    st32((c.r[6].w[0] + 24u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0] + 68u)));
    c.budget -= 14;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[3].w[0] + 60u), c.r[4].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00328FA8u | kUnwind; return; } goto L_00328FA8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00329018u); set32(c.r[4], 0u + 272u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00329018u) [[unlikely]] return; }
L_00329018:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00329040; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00329028u); set32(c.r[4], 0u + 13u);  if (depth < kMaxDepth) unit_0022(c, 105u, depth + 1u); else { c.pc = 0x00188790u; return; } if (c.pc != 0x00329028u) [[unlikely]] return; }
L_00329028:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00329034u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 188u, depth + 1u); else { c.pc = 0x0015ED60u; return; } if (c.pc != 0x00329034u) [[unlikely]] return; }
L_00329034:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] + 21424u);
    st32((c.r[16].w[0] + 176u), c.r[2].w[0]);
    c.budget -= 3;
L_00329040:
    set32(c.r[3], 0u + 347u);
    st32((c.r[18].w[0] + 152u), c.r[16].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42AA0000u);
    c.f[1] = c.r[3].w[0];
    set32(c.r[5], ld32((c.r[18].w[0] + 152u)));
    c.f[2] = ld32((c.r[1].w[0] - 12680u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[13] = fp::cvt_s_w(c.f[1]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    st32((c.r[5].w[0] + 16u), c.f[2]);
    c.f[1] = ld32((c.r[1].w[0] - 12688u));
    c.f[12] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00F10000u);
    c.r[2].d[0] = c.r[2].d[0] | 16384ull;
    c.f[0] = c.r[2].w[0];
    st32((c.r[5].w[0] + 20u), c.f[1]);
    st32((c.r[5].w[0] + 24u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[18].w[0] + 152u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 24;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003290A0u); c.f[14] = fp::cvt_s_w(c.f[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003290A0u) [[unlikely]] return; }
L_003290A0:
    set32(c.r[2], ld32((c.r[18].w[0] + 152u)));
    set32(c.r[3], 0u + 255u);
    set32(c.r[4], 0u + 272u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003290B4u); st32((c.r[2].w[0] + 60u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x003290B4u) [[unlikely]] return; }
L_003290B4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_003290DC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003290C4u); set32(c.r[4], 0u + 36u);  if (depth < kMaxDepth) unit_0022(c, 105u, depth + 1u); else { c.pc = 0x00188790u; return; } if (c.pc != 0x003290C4u) [[unlikely]] return; }
L_003290C4:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003290D0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 188u, depth + 1u); else { c.pc = 0x0015ED60u; return; } if (c.pc != 0x003290D0u) [[unlikely]] return; }
L_003290D0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] + 21424u);
    st32((c.r[16].w[0] + 176u), c.r[2].w[0]);
    c.budget -= 3;
L_003290DC:
    st32((c.r[18].w[0] + 160u), c.r[16].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43110000u);
    set32(c.r[3], ld32((c.r[18].w[0] + 160u)));
    set32(c.r[4], 0u + 255u);
    c.f[12] = c.r[2].w[0];
    set32(c.r[2], 0u + 377u);
    c.f[0] = c.r[2].w[0];
    st32((c.r[3].w[0] + 60u), c.r[4].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00F10000u);
    set32(c.r[4], ld32((c.r[18].w[0] + 160u)));
    c.f[13] = fp::cvt_s_w(c.f[0]);
    c.r[2].d[0] = c.r[2].d[0] | 16384ull;
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    c.f[0] = c.r[2].w[0];
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 17;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00329120u); c.f[14] = fp::cvt_s_w(c.f[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00329120u) [[unlikely]] return; }
L_00329120:
    set32(c.r[5], ld32((c.r[18].w[0] + 160u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[4], 0u + 272u);
    st32((c.r[5].w[0] + 16u), c.r[3].w[0]);
    st32((c.r[5].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00329140u); st32((c.r[5].w[0] + 24u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00329140u) [[unlikely]] return; }
L_00329140:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00329168; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00329150u); set32(c.r[4], 0u + 36u);  if (depth < kMaxDepth) unit_0022(c, 105u, depth + 1u); else { c.pc = 0x00188790u; return; } if (c.pc != 0x00329150u) [[unlikely]] return; }
L_00329150:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032915Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 188u, depth + 1u); else { c.pc = 0x0015ED60u; return; } if (c.pc != 0x0032915Cu) [[unlikely]] return; }
L_0032915C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] + 21424u);
    st32((c.r[16].w[0] + 176u), c.r[2].w[0]);
    c.budget -= 3;
L_00329168:
    st32((c.r[18].w[0] + 164u), c.r[16].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41C80000u);
    set32(c.r[3], ld32((c.r[18].w[0] + 164u)));
    set32(c.r[4], 0u + 255u);
    c.f[12] = c.r[2].w[0];
    set32(c.r[2], 0u + 377u);
    c.f[0] = c.r[2].w[0];
    st32((c.r[3].w[0] + 60u), c.r[4].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00F10000u);
    set32(c.r[4], ld32((c.r[18].w[0] + 164u)));
    c.f[13] = fp::cvt_s_w(c.f[0]);
    c.r[2].d[0] = c.r[2].d[0] | 16384ull;
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    c.f[0] = c.r[2].w[0];
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 17;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003291ACu); c.f[14] = fp::cvt_s_w(c.f[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003291ACu) [[unlikely]] return; }
L_003291AC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 26392u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 440u)));
    st32((c.r[18].w[0] + 168u), c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[18].w[0] + 168u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003291C8u); set32(c.r[4], c.r[18].w[0] + 176u);  if (depth < kMaxDepth) unit_0023(c, 203u, depth + 1u); else { c.pc = 0x0018DFC0u; return; } if (c.pc != 0x003291C8u) [[unlikely]] return; }
L_003291C8:
    set32(c.r[4], c.r[18].w[0] + 176u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003291D4u); set32(c.r[5], 0u + 8u);  if (depth < kMaxDepth) unit_0023(c, 205u, depth + 1u); else { c.pc = 0x0018DFE0u; return; } if (c.pc != 0x003291D4u) [[unlikely]] return; }
L_003291D4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[2], c.r[2].w[0] - 4768u);
    set32(c.r[8], c.r[29].w[0] + 96u);
    ld128((c.r[2].w[0]) & ~15u, c.r[7]);
    set32(c.r[4], c.r[4].w[0] - 4736u);
    ld128((c.r[2].w[0] + 16u) & ~15u, c.r[6]);
    set32(c.r[5], c.r[29].w[0] + 80u);
    set32(c.r[3], c.r[29].w[0] + 64u);
    c.r[16].d[0] = 0ull + 0ull;
    st128((c.r[8].w[0]) & ~15u, c.r[7]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    st128((c.r[8].w[0] + 16u) & ~15u, c.r[6]);
    set32(c.r[2], c.r[2].w[0] - 4720u);
    ld128((c.r[4].w[0]) & ~15u, c.r[4]);
    st128((c.r[5].w[0]) & ~15u, c.r[4]);
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    st128((c.r[3].w[0]) & ~15u, c.r[2]);
    set32(c.r[2], c.r[16].w[0] << 2);
    c.budget -= 19;
L_00329220:
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032922Cu); set32(c.r[4], ld32((c.r[2].w[0] + 96u)));  if (depth < kMaxDepth) unit_000B(c, 461u, depth + 1u); else { c.pc = 0x0012FD60u; return; } if (c.pc != 0x0032922Cu) [[unlikely]] return; }
L_0032922C:
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[18].w[0] + 176u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032923Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0023(c, 210u, depth + 1u); else { c.pc = 0x0018E080u; return; } if (c.pc != 0x0032923Cu) [[unlikely]] return; }
L_0032923C:
    set32(c.r[4], c.r[18].w[0] + 176u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032924Cu); set32(c.r[6], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0023(c, 211u, depth + 1u); else { c.pc = 0x0018E0B0u; return; } if (c.pc != 0x0032924Cu) [[unlikely]] return; }
L_0032924C:
    set32(c.r[4], c.r[18].w[0] + 176u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032925Cu); set32(c.r[6], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0023(c, 212u, depth + 1u); else { c.pc = 0x0018E0F0u; return; } if (c.pc != 0x0032925Cu) [[unlikely]] return; }
L_0032925C:
    set32(c.r[4], c.r[18].w[0] + 176u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032926Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0023(c, 214u, depth + 1u); else { c.pc = 0x0018E160u; return; } if (c.pc != 0x0032926Cu) [[unlikely]] return; }
L_0032926C:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[16].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00329220u | kUnwind; return; } goto L_00329220; } }
    st32((c.r[18].w[0] + 280u), 0u);
    set32(c.r[2], 0u + 1u);
    st32((c.r[18].w[0] + 284u), c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[18].w[0] + 168u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00329294u); set32(c.r[4], c.r[18].w[0] + 288u);  if (depth < kMaxDepth) unit_0023(c, 203u, depth + 1u); else { c.pc = 0x0018DFC0u; return; } if (c.pc != 0x00329294u) [[unlikely]] return; }
L_00329294:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 26392u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 444u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003292A8u); set32(c.r[4], c.r[18].w[0] + 288u);  if (depth < kMaxDepth) unit_0023(c, 204u, depth + 1u); else { c.pc = 0x0018DFD0u; return; } if (c.pc != 0x003292A8u) [[unlikely]] return; }
L_003292A8:
    set32(c.r[4], c.r[18].w[0] + 288u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003292B4u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0023(c, 205u, depth + 1u); else { c.pc = 0x0018DFE0u; return; } if (c.pc != 0x003292B4u) [[unlikely]] return; }
L_003292B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003292BCu); set32(c.r[4], 0u + 91u);  if (depth < kMaxDepth) unit_000B(c, 461u, depth + 1u); else { c.pc = 0x0012FD60u; return; } if (c.pc != 0x003292BCu) [[unlikely]] return; }
L_003292BC:
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[18].w[0] + 288u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003292CCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0023(c, 210u, depth + 1u); else { c.pc = 0x0018E080u; return; } if (c.pc != 0x003292CCu) [[unlikely]] return; }
L_003292CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003292D4u); set32(c.r[4], 0u + 272u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x003292D4u) [[unlikely]] return; }
L_003292D4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_003292FC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003292E4u); set32(c.r[4], 0u + 14u);  if (depth < kMaxDepth) unit_0022(c, 105u, depth + 1u); else { c.pc = 0x00188790u; return; } if (c.pc != 0x003292E4u) [[unlikely]] return; }
L_003292E4:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003292F0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 188u, depth + 1u); else { c.pc = 0x0015ED60u; return; } if (c.pc != 0x003292F0u) [[unlikely]] return; }
L_003292F0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] + 21424u);
    st32((c.r[16].w[0] + 176u), c.r[2].w[0]);
    c.budget -= 3;
L_003292FC:
    st32((c.r[18].w[0] + 156u), c.r[16].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_00329304:
    set32(c.r[4], ld32((c.r[18].w[0] + 12u)));
    set32(c.r[2], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[18].w[0] + c.r[2].w[0]);
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.r[2].d[0] = c.r[5].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[3].w[0] + 24u), c.r[4].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00329304u | kUnwind; return; } goto L_00329304; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x42800000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42900000u);
    st32((c.r[18].w[0] + 832u), c.r[4].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[18].w[0] + 836u), c.r[4].w[0]);
    st32((c.r[18].w[0] + 576u), c.r[3].w[0]);
    st32((c.r[18].w[0] + 580u), c.r[3].w[0]);
    st32((c.r[18].w[0] + 688u), c.r[2].w[0]);
    st32((c.r[18].w[0] + 692u), c.r[2].w[0]);
    st32((c.r[18].w[0] + 696u), c.r[2].w[0]);
    st32((c.r[18].w[0] + 432u), c.r[2].w[0]);
    st32((c.r[18].w[0] + 436u), c.r[2].w[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00329358u); st32((c.r[18].w[0] + 440u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0022(c, 128u, depth + 1u); else { c.pc = 0x00188AE0u; return; } if (c.pc != 0x00329358u) [[unlikely]] return; }
L_00329358:
    set32(c.r[3], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_00329370; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 64u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00329374; } }
L_00329370:
    st8((c.r[18].w[0] + 64u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_00329374:
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_00329390:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const bool t = c.r[18].d[0] == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00329534; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 21840u);
    st32((c.r[18].w[0]), c.r[2].w[0]);
    c.budget -= 4;
L_003293C4:
    set32(c.r[2], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 68u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[19], c.r[2].w[0] + 68u);  if (t) { goto L_003293F0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003293F0; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003293F0u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003293F0u) [[unlikely]] return; }
L_003293F0:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < 21ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[19].w[0]), 0u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003293C4u | kUnwind; return; } goto L_003293C4; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 152u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00329424; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00329424; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00329424u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00329424u) [[unlikely]] return; }
L_00329424:
    st32((c.r[18].w[0] + 152u), 0u);
    set32(c.r[4], ld32((c.r[18].w[0] + 160u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0032944C; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0032944C; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0032944Cu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0032944Cu) [[unlikely]] return; }
L_0032944C:
    st32((c.r[18].w[0] + 160u), 0u);
    set32(c.r[4], ld32((c.r[18].w[0] + 164u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00329474; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00329474; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00329474u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00329474u) [[unlikely]] return; }
L_00329474:
    st32((c.r[18].w[0] + 164u), 0u);
    set32(c.r[4], ld32((c.r[18].w[0] + 156u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0032949C; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0032949C; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0032949Cu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0032949Cu) [[unlikely]] return; }
L_0032949C:
    set32(c.r[4], c.r[18].w[0] + 672u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[18].w[0] + 156u), 0u);  if (t) { goto L_003294CC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] + 21488u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[18].w[0] + 848u), c.r[2].w[0]);  if (t) { goto L_003294CC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 17408u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003294CCu); st32((c.r[18].w[0] + 848u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0012(c, 264u, depth + 1u); else { c.pc = 0x0014ADA0u; return; } if (c.pc != 0x003294CCu) [[unlikely]] return; }
L_003294CC:
    set32(c.r[4], c.r[18].w[0] + 416u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);  if (t) { goto L_003294F8; } }
    set32(c.r[2], c.r[2].w[0] + 21488u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[18].w[0] + 592u), c.r[2].w[0]);  if (t) { goto L_003294F8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 17408u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003294F8u); st32((c.r[18].w[0] + 592u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0012(c, 264u, depth + 1u); else { c.pc = 0x0014ADA0u; return; } if (c.pc != 0x003294F8u) [[unlikely]] return; }
L_003294F8:
    set32(c.r[4], c.r[18].w[0] + 288u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00329504u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0023(c, 228u, depth + 1u); else { c.pc = 0x0018E3B0u; return; } if (c.pc != 0x00329504u) [[unlikely]] return; }
L_00329504:
    set32(c.r[4], c.r[18].w[0] + 176u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00329510u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0023(c, 199u, depth + 1u); else { c.pc = 0x0018DF40u; return; } if (c.pc != 0x00329510u) [[unlikely]] return; }
L_00329510:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032951Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000F(c, 266u, depth + 1u); else { c.pc = 0x0013E5B0u; return; } if (c.pc != 0x0032951Cu) [[unlikely]] return; }
L_0032951C:
    c.r[2].d[0] = c.r[17].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_00329538; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00329534u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x00329534u) [[unlikely]] return; }
L_00329534:
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_00329538:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00329560:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003295B8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] + 21424u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0] + 176u), c.r[2].w[0]);  if (t) { goto L_003295A0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 17536u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003295A0u); st32((c.r[17].w[0] + 176u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0012(c, 264u, depth + 1u); else { c.pc = 0x0014ADA0u; return; } if (c.pc != 0x003295A0u) [[unlikely]] return; }
L_003295A0:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003295BC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003295B8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x003295B8u) [[unlikely]] return; }
L_003295B8:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003295BC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003295D0:
    st32((c.r[4].w[0] + 20u), c.r[5].w[0]);
    set32(c.r[3], 0u + 7u);
    set32(c.r[5], ld32((c.r[4].w[0] + 20u)));
    st32((c.r[4].w[0] + 280u), c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[4].w[0] + 20u)));
    set32(c.r[5], c.r[5].w[0] + 1u);
    st32((c.r[4].w[0] + 284u), c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[4].w[0] + 20u)));
    c.budget -= 10;
    { const bool t = c.r[5].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_00329600; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 388u), 0u);  if (t) { goto L_00329604; } }
L_00329600:
    st32((c.r[4].w[0] + 388u), c.r[3].w[0]);
    c.budget -= 1;
L_00329604:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00329610:
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[3].d[0]; st32((c.r[4].w[0] + 60u), c.r[5].w[0]);  if (t) { goto L_00329644; } }
    set32(c.r[7], 0u + 1u);
    c.budget -= 1;
L_00329620:
    set32(c.r[6], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[3], c.r[7].w[0] << 2);
    set32(c.r[5], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.r[3].d[0] = c.r[7].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[5].w[0] + 24u), c.r[6].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00329620u | kUnwind; return; } goto L_00329620; } }
    st8((c.r[4].w[0] + 400u), static_cast<std::uint8_t>(0u));
    st32((c.r[4].w[0] + 404u), 0u);
    c.budget -= 2;
L_00329644:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00329650:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00540000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[1].w[0] - 1648u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00540000u);
    st32((c.r[1].w[0] - 1648u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], ld32((c.r[1].w[0] - 1648u)));
    c.r[2].d[0] = c.r[2].sd[0] < 30ll ? 1ull : 0ull;
    c.budget -= 13;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0032968C; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00540000u);
    st32((c.r[1].w[0] - 1648u), 0u);
    c.budget -= 2;
L_0032968C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00329694u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_008A(c, 153u, depth + 1u); else { c.pc = 0x00329720u; return; } if (c.pc != 0x00329694u) [[unlikely]] return; }
L_00329694:
    set32(c.r[3], ld32((c.r[16].w[0] + 60u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_003296B8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003296A8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_008A(c, 176u, depth + 1u); else { c.pc = 0x003299B0u; return; } if (c.pc != 0x003296A8u) [[unlikely]] return; }
L_003296A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003296B0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_008A(c, 187u, depth + 1u); else { c.pc = 0x00329B90u; return; } if (c.pc != 0x003296B0u) [[unlikely]] return; }
L_003296B0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00329700; } }
L_003296B8:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003296D0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003296C8u);  if (depth < kMaxDepth) unit_008A(c, 187u, depth + 1u); else { c.pc = 0x00329B90u; return; } if (c.pc != 0x003296C8u) [[unlikely]] return; }
L_003296C8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003296FC; } }
L_003296D0:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 3u);  if (t) { goto L_003296EC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003296E4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_008A(c, 197u, depth + 1u); else { c.pc = 0x00329DF0u; return; } if (c.pc != 0x003296E4u) [[unlikely]] return; }
L_003296E4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003296FC; } }
L_003296EC:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003296FC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003296FCu);  if (depth < kMaxDepth) unit_008A(c, 204u, depth + 1u); else { c.pc = 0x0032A030u; return; } if (c.pc != 0x003296FCu) [[unlikely]] return; }
L_003296FC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_00329700:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00329708u);  if (depth < kMaxDepth) unit_008A(c, 210u, depth + 1u); else { c.pc = 0x0032A1B0u; return; } if (c.pc != 0x00329708u) [[unlikely]] return; }
L_00329708:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00329720:
    set32(c.r[29], c.r[29].w[0] - 448u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032973Cu); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0018(c, 2u, depth + 1u); else { c.pc = 0x001607D0u; return; } if (c.pc != 0x0032973Cu) [[unlikely]] return; }
L_0032973C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00329744u); set32(c.r[4], 0u + 16u);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x00329744u) [[unlikely]] return; }
L_00329744:
    ld128((c.r[2].w[0]) & ~15u, c.r[3]);
    set32(c.r[5], c.r[29].w[0] + 64u);
    set32(c.r[4], 0u + 1u);
    set32(c.r[2], 0u + 128u);
    st128((c.r[5].w[0]) & ~15u, c.r[3]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00329760u); st32((c.r[29].w[0] + 76u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x00329760u) [[unlikely]] return; }
L_00329760:
    ld128((c.r[2].w[0]) & ~15u, c.r[3]);
    set32(c.r[6], c.r[29].w[0] + 48u);
    set32(c.r[16], c.r[29].w[0] + 60u);
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[5], 0u + 128u);
    set32(c.r[2], 0u + 192u);
    st128((c.r[6].w[0]) & ~15u, c.r[3]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00329784u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0018(c, 15u, depth + 1u); else { c.pc = 0x001609F0u; return; } if (c.pc != 0x00329784u) [[unlikely]] return; }
L_00329784:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00329798u); c.f[13] = c.f[12];  if (depth < kMaxDepth) unit_0018(c, 11u, depth + 1u); else { c.pc = 0x001608F0u; return; } if (c.pc != 0x00329798u) [[unlikely]] return; }
L_00329798:
    set32(c.r[3], ld32((c.r[17].w[0] + 60u)));
    set32(c.r[2], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[5], c.r[29].w[0] + 64u);  if (t) { goto L_00329804; } }
    set32(c.r[3], 0u + 9u);
    set32(c.r[2], 0u + 20u);
    st32((c.r[29].w[0] + 48u), c.r[3].w[0]);
    set32(c.r[5], c.r[29].w[0] + 64u);
    set32(c.r[3], 0u + 43u);
    st32((c.r[29].w[0] + 52u), c.r[2].w[0]);
    set32(c.r[2], 0u + 165u);
    st32((c.r[29].w[0] + 56u), c.r[3].w[0]);
    set32(c.r[4], c.r[29].w[0] + 80u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003297DCu); set32(c.r[7], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0018(c, 14u, depth + 1u); else { c.pc = 0x001609B0u; return; } if (c.pc != 0x003297DCu) [[unlikely]] return; }
L_003297DC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43B90000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x429E0000u);
    st32((c.r[29].w[0] + 240u), c.r[3].w[0]);
    set32(c.r[4], c.r[29].w[0] + 80u);
    st32((c.r[29].w[0] + 244u), c.r[2].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003297FCu); set32(c.r[6], 0u + 370u);  if (depth < kMaxDepth) unit_0018(c, 17u, depth + 1u); else { c.pc = 0x00160A20u; return; } if (c.pc != 0x003297FCu) [[unlikely]] return; }
L_003297FC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[29].w[0] + 80u);  if (t) { goto L_00329838; } }
L_00329804:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00329814u); set32(c.r[7], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0018(c, 14u, depth + 1u); else { c.pc = 0x001609B0u; return; } if (c.pc != 0x00329814u) [[unlikely]] return; }
L_00329814:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x44200000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x429E0000u);
    st32((c.r[29].w[0] + 240u), c.r[3].w[0]);
    set32(c.r[4], c.r[29].w[0] + 80u);
    st32((c.r[29].w[0] + 244u), c.r[2].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00329834u); set32(c.r[6], 0u + 640u);  if (depth < kMaxDepth) unit_0018(c, 17u, depth + 1u); else { c.pc = 0x00160A20u; return; } if (c.pc != 0x00329834u) [[unlikely]] return; }
L_00329834:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 1;
L_00329838:
    set32(c.r[2], 0u + 321u);
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    c.f[0] = c.r[2].w[0];
    c.f[12] = 0u;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4B710000u);
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.f[14] = c.r[2].w[0];
    c.budget -= 9;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0032985Cu); c.f[13] = fp::cvt_s_w(c.f[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0032985Cu) [[unlikely]] return; }
L_0032985C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00329864u);  if (depth < kMaxDepth) unit_0022(c, 132u, depth + 1u); else { c.pc = 0x00188B30u; return; } if (c.pc != 0x00329864u) [[unlikely]] return; }
L_00329864:
    set32(c.r[3], ld32((c.r[29].w[0] + 140u)));
    c.r[1].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[4], c.r[29].w[0] + 80u);  if (t) { goto L_00329884; } }
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00329880u); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0018(c, 15u, depth + 1u); else { c.pc = 0x001609F0u; return; } if (c.pc != 0x00329880u) [[unlikely]] return; }
L_00329880:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 1;
L_00329884:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032988Cu);  if (depth < kMaxDepth) unit_0018(c, 19u, depth + 1u); else { c.pc = 0x00160A70u; return; } if (c.pc != 0x0032988Cu) [[unlikely]] return; }
L_0032988C:
    set32(c.r[2], ld32((c.r[17].w[0] + 152u)));
    set32(c.r[3], 0u + 175u);
    st32((c.r[2].w[0] + 60u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 152u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 56u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003298ACu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003298ACu) [[unlikely]] return; }
L_003298AC:
    set32(c.r[2], ld32((c.r[17].w[0] + 160u)));
    set32(c.r[3], 0u + 255u);
    st32((c.r[2].w[0] + 60u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 164u)));
    st32((c.r[2].w[0] + 60u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 160u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 10;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003298D4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003298D4u) [[unlikely]] return; }
L_003298D4:
    set32(c.r[4], ld32((c.r[17].w[0] + 164u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003298E8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003298E8u) [[unlikely]] return; }
L_003298E8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[3], ld32((c.r[17].w[0] + 168u)));
    c.f[0] = ld32((c.r[1].w[0] - 12696u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[3].w[0] + 16u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[0] = ld32((c.r[1].w[0] - 12696u));
    st32((c.r[3].w[0] + 20u), c.f[0]);
    st32((c.r[3].w[0] + 24u), c.r[2].w[0]);
    set32(c.r[16], ld32((c.r[17].w[0] + 168u)));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00329918u); set32(c.r[4], 0u + 515u);  if (depth < kMaxDepth) unit_000B(c, 461u, depth + 1u); else { c.pc = 0x0012FD60u; return; } if (c.pc != 0x00329918u) [[unlikely]] return; }
L_00329918:
    st32((c.r[16].w[0] + 352u), c.r[2].w[0]);
    set32(c.r[3], 0u + 347u);
    st32((c.r[16].w[0] + 356u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42AA0000u);
    set32(c.r[4], ld32((c.r[17].w[0] + 168u)));
    c.f[12] = c.r[2].w[0];
    c.f[1] = c.r[3].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00F10000u);
    c.r[2].d[0] = c.r[2].d[0] | 16384ull;
    c.f[0] = c.r[2].w[0];
    c.f[13] = fp::cvt_s_w(c.f[1]);
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 16;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00329958u); c.f[14] = fp::cvt_s_w(c.f[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00329958u) [[unlikely]] return; }
L_00329958:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00329960u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x00329960u) [[unlikely]] return; }
L_00329960:
    ld128((c.r[2].w[0]) & ~15u, c.r[3]);
    set32(c.r[2], ld32((c.r[17].w[0] + 168u)));
    st128((c.r[2].w[0] + 48u) & ~15u, c.r[3]);
    set32(c.r[4], ld32((c.r[17].w[0] + 168u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 60u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00329980u); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00329980u) [[unlikely]] return; }
L_00329980:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00329988u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_008A(c, 178u, depth + 1u); else { c.pc = 0x00329A30u; return; } if (c.pc != 0x00329988u) [[unlikely]] return; }
L_00329988:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00329994u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0018(c, 7u, depth + 1u); else { c.pc = 0x00160860u; return; } if (c.pc != 0x00329994u) [[unlikely]] return; }
L_00329994:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 448u);  c.pc = t; return; }
L_003299B0:
    set32(c.r[11], 0u + 1u);
    c.r[10].d[0] = c.r[11].d[0] + 0ull;
    set32(c.r[3], c.r[10].w[0] << 2);
    c.budget -= 3;
L_003299BC:
    set32(c.r[6], c.r[10].w[0] << 1);
    set32(c.r[7], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[7].w[0] + 24u)));
    set32(c.r[3], c.r[6].w[0] + c.r[10].w[0]);
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] - c.r[10].w[0]);
    set32(c.r[8], c.r[3].w[0] << 1);
    set32(c.r[3], c.r[5].w[0] + c.r[6].w[0]);
    st32((c.r[7].w[0] + 24u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[7].w[0] + 24u)));
    set32(c.r[5], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[3], c.r[3].w[0] - c.r[5].w[0]);
    c.r[3].d[0] = c.r[3].sd[0] < c.r[8].sd[0] ? 1ull : 0ull;
    c.budget -= 15;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[9], c.r[7].w[0] + 24u);  if (t) { goto L_00329A04; } }
    set32(c.r[3], c.r[5].w[0] + c.r[8].w[0]);
    set32(c.r[11], c.r[11].w[0] + 1u);
    st32((c.r[9].w[0]), c.r[3].w[0]);
    c.budget -= 3;
L_00329A04:
    set32(c.r[10], c.r[10].w[0] + 1u);
    c.r[3].d[0] = c.r[10].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], c.r[10].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003299BCu | kUnwind; return; } goto L_003299BC; } }
    set32(c.r[3], 0u + 8u);
    c.budget -= 3;
    { const bool t = c.r[11].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_00329A24; } }
    st32((c.r[4].w[0] + 60u), c.r[3].w[0]);
    c.budget -= 1;
L_00329A24:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00329A30:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[3], 0u + 7u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[16], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[4], ld32((c.r[4].w[0] + 20u)));
    c.budget -= 10;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00329B7C; } }
    c.f[0] = c.r[16].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42880000u);
    st32((c.r[17].w[0] + 576u), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42800000u);
    c.f[13] = fp::cvt_s_w(c.f[0]);
    st32((c.r[17].w[0] + 580u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00F10000u);
    st32((c.r[17].w[0] + 832u), c.r[3].w[0]);
    st32((c.r[17].w[0] + 836u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[2].d[0] | 65024ull;
    set32(c.r[25], ld32((c.r[17].w[0] + 592u)));
    set32(c.r[4], c.r[17].w[0] + 416u);
    set32(c.r[3], ld32((c.r[17].w[0] + 20u)));
    c.f[0] = c.r[2].w[0];
    c.f[14] = fp::cvt_s_w(c.f[0]);
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    c.f[0] = ld32((c.r[2].w[0] + 24u));
    c.budget -= 22;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00329AB0u); c.f[12] = fp::cvt_s_w(c.f[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00329AB0u) [[unlikely]] return; }
L_00329AB0:
    set32(c.r[3], ld32((c.r[17].w[0] + 20u)));
    c.f[0] = c.r[16].w[0];
    set32(c.r[25], ld32((c.r[17].w[0] + 848u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00F10000u);
    c.f[13] = fp::cvt_s_w(c.f[0]);
    c.r[2].d[0] = c.r[2].d[0] | 65280ull;
    set32(c.r[4], c.r[17].w[0] + 672u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.f[1] = ld32((c.r[3].w[0] + 24u));
    c.f[0] = c.r[2].w[0];
    c.f[14] = fp::cvt_s_w(c.f[0]);
    c.budget -= 16;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00329AF0u); c.f[12] = fp::cvt_s_w(c.f[1]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00329AF0u) [[unlikely]] return; }
L_00329AF0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00329AF8u); set32(c.r[4], 0u + 4u);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x00329AF8u) [[unlikely]] return; }
L_00329AF8:
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00329B08u); st128((c.r[17].w[0] + 464u) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_008A(c, 207u, depth + 1u); else { c.pc = 0x0032A100u; return; } if (c.pc != 0x00329B08u) [[unlikely]] return; }
L_00329B08:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_00329B34; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00329B18u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x00329B18u) [[unlikely]] return; }
L_00329B18:
    set32(c.r[3], ld32((c.r[2].w[0])));
    st32((c.r[17].w[0] + 720u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    st32((c.r[17].w[0] + 724u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 728u), c.r[2].w[0]);  if (t) { goto L_00329B54; } }
L_00329B34:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00329B3Cu);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x00329B3Cu) [[unlikely]] return; }
L_00329B3C:
    set32(c.r[3], ld32((c.r[2].w[0])));
    st32((c.r[17].w[0] + 720u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    st32((c.r[17].w[0] + 724u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    st32((c.r[17].w[0] + 728u), c.r[2].w[0]);
    c.budget -= 6;
L_00329B54:
    set32(c.r[2], 0u + 128u);
    st32((c.r[17].w[0] + 732u), c.r[2].w[0]);
    set32(c.r[25], ld32((c.r[17].w[0] + 848u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00329B6Cu); set32(c.r[4], c.r[17].w[0] + 672u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00329B6Cu) [[unlikely]] return; }
L_00329B6C:
    set32(c.r[25], ld32((c.r[17].w[0] + 592u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00329B7Cu); set32(c.r[4], c.r[17].w[0] + 416u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00329B7Cu) [[unlikely]] return; }
L_00329B7C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00329B90:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[19], ld32((c.r[4].w[0] + 16u)));
    c.budget -= 11;
L_00329BBC:
    c.r[2].d[0] = ld8((c.r[20].w[0] + 64u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 6u);  if (t) { goto L_00329BD0; } }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == c.r[2].d[0];  if (t) { goto L_00329D00; } }
L_00329BD0:
    set32(c.r[2], ld32((c.r[20].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[18].d[0] != c.r[2].d[0]; set32(c.r[2], c.r[17].w[0] << 2);  if (t) { goto L_00329C84; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], ld32((c.r[1].w[0] - 1648u)));
    c.r[2].d[0] = c.r[3].sd[0] < 20ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_00329BF8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u + 2u);  if (t) { goto L_00329C08; } }
L_00329BF8:
    c.r[2].d[0] = c.r[3].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[17].w[0] + c.r[4].w[0]);  if (t) { goto L_00329C0C; } }
    set32(c.r[4], 0u + 1u);
    c.budget -= 1;
L_00329C08:
    set32(c.r[2], c.r[17].w[0] + c.r[4].w[0]);
    c.budget -= 1;
L_00329C0C:
    set32(c.r[3], c.r[2].w[0] << 2);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[5], c.r[20].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[18].w[0] << 2);
    set32(c.r[6], ld32((c.r[5].w[0] + 68u)));
    c.f[0] = c.r[19].w[0];
    set32(c.r[3], c.r[20].w[0] + c.r[2].w[0]);
    set32(c.r[16], c.r[5].w[0] + 68u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4B720000u);
    c.f[13] = fp::cvt_s_w(c.f[0]);
    st32((c.r[6].w[0] + 16u), c.r[4].w[0]);
    st32((c.r[6].w[0] + 20u), c.r[4].w[0]);
    st32((c.r[6].w[0] + 24u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[5].w[0] + 68u)));
    c.f[0] = ld32((c.r[3].w[0] + 24u));
    c.f[14] = c.r[2].w[0];
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 20;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00329C5Cu); c.f[12] = fp::cvt_s_w(c.f[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00329C5Cu) [[unlikely]] return; }
L_00329C5C:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[3], 0u + 255u);
    st32((c.r[2].w[0] + 60u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00329C7Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00329C7Cu) [[unlikely]] return; }
L_00329C7C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[17].w[0] + 3u);  if (t) { goto L_00329D04; } }
L_00329C84:
    set32(c.r[3], c.r[18].w[0] << 2);
    set32(c.r[9], c.r[20].w[0] + c.r[2].w[0]);
    set32(c.r[8], 0u + 255u);
    set32(c.r[7], ld32((c.r[9].w[0] + 76u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00F10000u);
    c.r[2].d[0] = c.r[2].d[0] | 16640ull;
    c.r[6].sd[0] = static_cast<std::int32_t>(0x3F300000u);
    c.f[0] = c.r[2].w[0];
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3F200000u);
    c.f[1] = c.r[19].w[0];
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[14] = fp::cvt_s_w(c.f[0]);
    set32(c.r[3], c.r[20].w[0] + c.r[3].w[0]);
    set32(c.r[16], c.r[9].w[0] + 76u);
    st32((c.r[7].w[0] + 60u), c.r[8].w[0]);
    set32(c.r[2], ld32((c.r[9].w[0] + 76u)));
    c.f[13] = fp::cvt_s_w(c.f[1]);
    st32((c.r[2].w[0] + 16u), c.r[6].w[0]);
    st32((c.r[2].w[0] + 20u), c.r[5].w[0]);
    st32((c.r[2].w[0] + 24u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[9].w[0] + 76u)));
    c.f[0] = ld32((c.r[3].w[0] + 24u));
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 26;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00329CECu); c.f[12] = fp::cvt_s_w(c.f[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00329CECu) [[unlikely]] return; }
L_00329CEC:
    set32(c.r[4], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00329D00u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00329D00u) [[unlikely]] return; }
L_00329D00:
    set32(c.r[17], c.r[17].w[0] + 3u);
    c.budget -= 1;
L_00329D04:
    c.r[2].d[0] = c.r[17].sd[0] < 21ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[18], c.r[18].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00329BBCu | kUnwind; return; } goto L_00329BBC; } }
    set32(c.r[3], ld32((c.r[20].w[0] + 20u)));
    set32(c.r[2], 0u + 7u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);  if (t) { goto L_00329D80; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[6], c.r[29].w[0] + 144u);
    set32(c.r[2], c.r[2].w[0] - 4704u);
    set32(c.r[4], c.r[20].w[0] + 288u);
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00329D40u); st128((c.r[6].w[0]) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_0023(c, 211u, depth + 1u); else { c.pc = 0x0018E0B0u; return; } if (c.pc != 0x00329D40u) [[unlikely]] return; }
L_00329D40:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[6], c.r[29].w[0] + 128u);
    set32(c.r[2], c.r[2].w[0] - 4688u);
    set32(c.r[4], c.r[20].w[0] + 288u);
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    c.r[5].d[0] = 0ull + 0ull;
    st128((c.r[6].w[0]) & ~15u, c.r[2]);
    set32(c.r[2], ld32((c.r[20].w[0] + 52u)));
    set32(c.r[2], c.r[2].w[0] - 12u);
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00329D78u); st32((c.r[29].w[0] + 128u), c.f[0]);  if (depth < kMaxDepth) unit_0023(c, 212u, depth + 1u); else { c.pc = 0x0018E0F0u; return; } if (c.pc != 0x00329D78u) [[unlikely]] return; }
L_00329D78:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));  if (t) { goto L_00329DCC; } }
L_00329D80:
    set32(c.r[6], c.r[29].w[0] + 112u);
    set32(c.r[2], c.r[2].w[0] - 4672u);
    set32(c.r[4], c.r[20].w[0] + 288u);
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00329D9Cu); st128((c.r[6].w[0]) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_0023(c, 211u, depth + 1u); else { c.pc = 0x0018E0B0u; return; } if (c.pc != 0x00329D9Cu) [[unlikely]] return; }
L_00329D9C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[6], c.r[29].w[0] + 96u);
    set32(c.r[2], c.r[2].w[0] - 4656u);
    set32(c.r[4], c.r[20].w[0] + 288u);
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    c.r[5].d[0] = 0ull + 0ull;
    st128((c.r[6].w[0]) & ~15u, c.r[2]);
    c.f[0] = ld32((c.r[20].w[0] + 52u));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00329DC8u); st32((c.r[29].w[0] + 96u), c.f[0]);  if (depth < kMaxDepth) unit_0023(c, 212u, depth + 1u); else { c.pc = 0x0018E0F0u; return; } if (c.pc != 0x00329DC8u) [[unlikely]] return; }
L_00329DC8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.budget -= 1;
L_00329DCC:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_00329DF0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    set32(c.r[2], 0u + 255u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 56u)));
    set32(c.r[19], ld32((c.r[4].w[0] + 16u)));
    c.budget -= 12;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[20].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00329E24; } }
    st8((c.r[20].w[0] + 400u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_00329E24:
    set32(c.r[2], ld32((c.r[20].w[0] + 56u)));
    set32(c.r[2], c.r[2].w[0] - 12u);
    st32((c.r[20].w[0] + 56u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 56u)));
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] >= 0; c.r[8].d[0] = 0ull + 0ull;  if (t) { goto L_00329E44; } }
    st32((c.r[20].w[0] + 56u), 0u);
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.budget -= 2;
L_00329E44:
    set32(c.r[7], ld32((c.r[20].w[0] + 24u)));
    set32(c.r[6], 0u + 1u);
    set32(c.r[3], c.r[6].w[0] << 2);
    c.budget -= 3;
L_00329E50:
    set32(c.r[2], c.r[6].w[0] << 1);
    set32(c.r[4], c.r[20].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[2], c.r[3].w[0] - c.r[2].w[0]);
    st32((c.r[4].w[0] + 24u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 24u)));
    c.r[1].d[0] = c.r[2].sd[0] < c.r[7].sd[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[5], c.r[4].w[0] + 24u);  if (t) { goto L_00329E7C; } }
    st32((c.r[5].w[0]), c.r[7].w[0]);
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.budget -= 2;
L_00329E7C:
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.r[2].d[0] = c.r[6].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], c.r[6].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00329E50u | kUnwind; return; } goto L_00329E50; } }
    set32(c.r[2], 0u + 8u);
    c.budget -= 3;
    { const bool t = c.r[8].d[0] != c.r[2].d[0]; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_00329EA8; } }
    set32(c.r[2], 0u + 3u);
    st32((c.r[20].w[0] + 60u), c.r[2].w[0]);
    st8((c.r[20].w[0] + 400u), static_cast<std::uint8_t>(0u));
    st32((c.r[20].w[0] + 404u), 0u);
    c.budget -= 4;
L_00329EA8:
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00329EAC:
    c.r[2].d[0] = ld8((c.r[20].w[0] + 64u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 6u);  if (t) { goto L_00329EC0; } }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == c.r[2].d[0];  if (t) { goto L_00329F48; } }
L_00329EC0:
    set32(c.r[2], ld32((c.r[20].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == c.r[2].d[0]; set32(c.r[2], c.r[17].w[0] << 2);  if (t) { goto L_00329F48; } }
    set32(c.r[3], c.r[18].w[0] << 2);
    set32(c.r[9], c.r[20].w[0] + c.r[2].w[0]);
    set32(c.r[8], ld32((c.r[20].w[0] + 56u)));
    set32(c.r[7], ld32((c.r[9].w[0] + 76u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00F10000u);
    c.r[2].d[0] = c.r[2].d[0] | 16640ull;
    c.r[6].sd[0] = static_cast<std::int32_t>(0x3F300000u);
    c.f[0] = c.r[2].w[0];
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3F200000u);
    c.f[1] = c.r[19].w[0];
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[14] = fp::cvt_s_w(c.f[0]);
    set32(c.r[3], c.r[20].w[0] + c.r[3].w[0]);
    set32(c.r[16], c.r[9].w[0] + 76u);
    st32((c.r[7].w[0] + 60u), c.r[8].w[0]);
    set32(c.r[2], ld32((c.r[9].w[0] + 76u)));
    c.f[13] = fp::cvt_s_w(c.f[1]);
    st32((c.r[2].w[0] + 16u), c.r[6].w[0]);
    st32((c.r[2].w[0] + 20u), c.r[5].w[0]);
    st32((c.r[2].w[0] + 24u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[9].w[0] + 76u)));
    c.f[0] = ld32((c.r[3].w[0] + 24u));
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 26;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00329F34u); c.f[12] = fp::cvt_s_w(c.f[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00329F34u) [[unlikely]] return; }
L_00329F34:
    set32(c.r[4], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00329F48u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00329F48u) [[unlikely]] return; }
L_00329F48:
    set32(c.r[17], c.r[17].w[0] + 3u);
    c.r[2].d[0] = c.r[17].sd[0] < 21ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[18], c.r[18].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00329EACu | kUnwind; return; } goto L_00329EAC; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], ld32((c.r[1].w[0] - 1648u)));
    c.r[2].d[0] = c.r[3].sd[0] < 20ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_00329F74; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], 0u + 2u);  if (t) { goto L_00329F84; } }
L_00329F74:
    c.r[2].d[0] = c.r[3].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00329F84; } }
    set32(c.r[6], 0u + 1u);
    c.budget -= 1;
L_00329F84:
    set32(c.r[5], ld32((c.r[20].w[0] + 20u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4B720000u);
    c.f[0] = c.r[19].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[14] = c.r[2].w[0];
    c.f[13] = fp::cvt_s_w(c.f[0]);
    set32(c.r[4], c.r[5].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[6].w[0] + c.r[4].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[20].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 68u)));
    set32(c.r[16], c.r[4].w[0] + 68u);
    st32((c.r[2].w[0] + 16u), c.r[3].w[0]);
    st32((c.r[2].w[0] + 20u), c.r[3].w[0]);
    st32((c.r[2].w[0] + 24u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 20u)));
    set32(c.r[4], ld32((c.r[4].w[0] + 68u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[20].w[0]);
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    c.f[0] = ld32((c.r[2].w[0] + 24u));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 25;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00329FE8u); c.f[12] = fp::cvt_s_w(c.f[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00329FE8u) [[unlikely]] return; }
L_00329FE8:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[3], 0u + 255u);
    st32((c.r[2].w[0] + 60u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0032A008u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0032A008u) [[unlikely]] return; }
L_0032A008:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0032A030:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00540000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[1].w[0] - 1648u)));
    set32(c.r[5], ld32((c.r[4].w[0] + 16u)));
    c.r[2].d[0] = c.r[3].sd[0] < 20ll ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_0032A05C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[7], 0u + 2u);  if (t) { goto L_0032A06C; } }
L_0032A05C:
    c.r[2].d[0] = c.r[3].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0032A06C; } }
    set32(c.r[7], 0u + 1u);
    c.budget -= 1;
L_0032A06C:
    set32(c.r[6], ld32((c.r[4].w[0] + 20u)));
    c.f[0] = c.r[5].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4B720000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[14] = c.r[2].w[0];
    c.f[13] = fp::cvt_s_w(c.f[0]);
    set32(c.r[5], c.r[6].w[0] << 1);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[5], c.r[7].w[0] + c.r[5].w[0]);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[5].w[0] + 68u)));
    set32(c.r[16], c.r[5].w[0] + 68u);
    st32((c.r[2].w[0] + 16u), c.r[3].w[0]);
    st32((c.r[2].w[0] + 20u), c.r[3].w[0]);
    st32((c.r[2].w[0] + 24u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 20u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[5].w[0] + 68u)));
    c.f[0] = ld32((c.r[2].w[0] + 24u));
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 25;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0032A0D0u); c.f[12] = fp::cvt_s_w(c.f[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0032A0D0u) [[unlikely]] return; }
L_0032A0D0:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[3], 0u + 255u);
    st32((c.r[2].w[0] + 60u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0032A0F0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0032A0F0u) [[unlikely]] return; }
L_0032A0F0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0032A100:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032A118u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0022(c, 126u, depth + 1u); else { c.pc = 0x00188A80u; return; } if (c.pc != 0x0032A118u) [[unlikely]] return; }
L_0032A118:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032A120u); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 127u, depth + 1u); else { c.pc = 0x00188AB0u; return; } if (c.pc != 0x0032A120u) [[unlikely]] return; }
L_0032A120:
    set32(c.r[5], ld32((c.r[17].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull; set32(c.r[3], c.r[2].w[0] + c.r[16].w[0]);  if (t) { goto L_0032A13C; } }
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_0032A164; } }
    set32(c.r[3], c.r[2].w[0] + c.r[16].w[0]);
    c.budget -= 1;
L_0032A13C:
    c.r[3].d[0] = c.r[3].sd[0] < 20ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);  if (t) { goto L_0032A164; } }
    set32(c.r[3], 0u + 6u);
    set32(c.r[4], ld32((c.r[1].w[0] + 26112u)));
    set32(c.r[4], ld32((c.r[4].w[0] + 64u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0032A164; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0032A198; } }
L_0032A164:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0032A194; } }
    set32(c.r[2], c.r[5].w[0] - 1u);
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(4ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0032A18C; } }
    set32(c.r[2], 0u + 5u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[2].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0032A198; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0032A18C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_0032A19C; } }
L_0032A194:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0032A198:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_0032A19C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0032A1B0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032A1C4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_008A(c, 207u, depth + 1u); else { c.pc = 0x0032A100u; return; } if (c.pc != 0x0032A1C4u) [[unlikely]] return; }
L_0032A1C4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0032A228; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00F20000u);
    set32(c.r[4], ld32((c.r[16].w[0] + 156u)));
    c.r[2].d[0] = c.r[2].d[0] | 4096ull;
    set32(c.r[3], ld32((c.r[16].w[0] + 20u)));
    c.f[0] = c.r[2].w[0];
    c.f[1] = ld32((c.r[16].w[0] + 16u));
    c.f[14] = fp::cvt_s_w(c.f[0]);
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.f[0] = ld32((c.r[2].w[0] + 24u));
    c.f[13] = fp::cvt_s_w(c.f[1]);
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 15;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0032A208u); c.f[12] = fp::cvt_s_w(c.f[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0032A208u) [[unlikely]] return; }
L_0032A208:
    set32(c.r[2], ld32((c.r[16].w[0] + 156u)));
    set32(c.r[3], 0u + 255u);
    st32((c.r[2].w[0] + 60u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 156u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0032A228u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0032A228u) [[unlikely]] return; }
L_0032A228:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0032A240:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] + 21808u);
    st32((c.r[4].w[0] + 24u), c.r[2].w[0]);
    st32((c.r[4].w[0]), c.r[5].w[0]);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0] + 4u), c.r[6].w[0]);
    st32((c.r[4].w[0] + 8u), c.r[7].w[0]);
    st32((c.r[4].w[0] + 12u), c.r[8].w[0]);
    st32((c.r[4].w[0] + 16u), c.r[9].w[0]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 20u), c.r[10].w[0]);  c.pc = t; return; }
L_0032A270:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0032A2AC; } }
    c.r[2].d[0] = c.r[5].d[0] << 48;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 21808u);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] <= 0; st32((c.r[16].w[0] + 24u), c.r[3].w[0]);  if (t) { goto L_0032A2A8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032A2A8u);  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x0032A2A8u) [[unlikely]] return; }
L_0032A2A8:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0032A2AC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0032A2C0:
    c.budget -= 2;
    { c.r[4].d[0] = c.r[5].d[0] + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x00188910u | kUnwind; return; } [[clang::musttail]] return unit_0022(c, 116u, depth); }
L_0032A2D0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 8;
L_0032A2F0:
    set32(c.r[25], ld32((c.r[17].w[0] + 24u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0032A304u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0032A304u) [[unlikely]] return; }
L_0032A304:
    set32(c.r[3], c.r[18].w[0] << 2);
    set32(c.r[3], c.r[16].w[0] + c.r[3].w[0]);
    set32(c.r[18], c.r[18].w[0] + 1u);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.r[2].d[0] = c.r[18].sd[0] < 9ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0032A2F0u | kUnwind; return; } goto L_0032A2F0; } }
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x41000000u);
    st32((c.r[2].w[0] + 160u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 164u), c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 16u);
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[3].w[0] + 160u), c.f[0]);
    st32((c.r[3].w[0] + 164u), c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    st32((c.r[2].w[0] + 160u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 164u), c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 12u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[2], c.r[2].w[0] - 16u);
    c.f[0] = c.r[2].w[0];
    st32((c.r[3].w[0] + 160u), c.r[4].w[0]);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[3].w[0] + 164u), c.f[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 12u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[3], c.r[3].w[0] - 16u);
    c.f[0] = c.r[3].w[0];
    set32(c.r[2], c.r[2].w[0] - 16u);
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[5].w[0] + 160u), c.f[0]);
    st32((c.r[5].w[0] + 164u), c.f[1]);
    set32(c.r[2], ld32((c.r[17].w[0] + 12u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[2], c.r[2].w[0] - 16u);
    c.f[0] = c.r[2].w[0];
    st32((c.r[3].w[0] + 160u), c.r[4].w[0]);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[3].w[0] + 164u), c.f[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 24u)));
    st32((c.r[2].w[0] + 160u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 164u), c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 28u)));
    set32(c.r[2], c.r[2].w[0] - 16u);
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[3].w[0] + 160u), c.f[0]);
    st32((c.r[3].w[0] + 164u), c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 32u)));
    st32((c.r[2].w[0] + 160u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 164u), c.r[4].w[0]);
    c.f[1] = ld32((c.r[17].w[0]));
    set32(c.r[2], ld32((c.r[17].w[0] + 16u)));
    c.f[0] = ld32((c.r[17].w[0] + 4u));
    c.f[12] = fp::cvt_s_w(c.f[1]);
    c.budget -= 61;
    { const bool t = c.r[2].sd[0] < 0; c.f[13] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0032A420; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[14] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0032A43C; } }
L_0032A420:
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[14] = fp::cvt_s_w(c.f[0]);
    c.f[14] = fp::add(c.f[14], c.f[14]);
    c.budget -= 7;
L_0032A43C:
    set32(c.r[4], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0032A450u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0032A450u) [[unlikely]] return; }
L_0032A450:
    set32(c.r[3], ld32((c.r[17].w[0])));
    c.f[0] = ld32((c.r[17].w[0] + 4u));
    set32(c.r[2], ld32((c.r[17].w[0] + 16u)));
    set32(c.r[3], c.r[3].w[0] + 8u);
    c.f[1] = c.r[3].w[0];
    c.f[13] = fp::cvt_s_w(c.f[0]);
    c.budget -= 9;
    { const bool t = c.r[2].sd[0] < 0; c.f[12] = fp::cvt_s_w(c.f[1]);  if (t) { goto L_0032A480; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[14] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0032A49C; } }
L_0032A480:
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[14] = fp::cvt_s_w(c.f[0]);
    c.f[14] = fp::add(c.f[14], c.f[14]);
    c.budget -= 7;
L_0032A49C:
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0032A4B0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0032A4B0u) [[unlikely]] return; }
L_0032A4B0:
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.f[0] = ld32((c.r[17].w[0] + 4u));
    set32(c.r[3], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 16u)));
    c.f[13] = fp::cvt_s_w(c.f[0]);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[3].w[0] - 8u);
    c.f[1] = c.r[3].w[0];
    c.budget -= 10;
    { const bool t = c.r[2].sd[0] < 0; c.f[12] = fp::cvt_s_w(c.f[1]);  if (t) { goto L_0032A4E4; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[14] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0032A500; } }
L_0032A4E4:
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[14] = fp::cvt_s_w(c.f[0]);
    c.f[14] = fp::add(c.f[14], c.f[14]);
    c.budget -= 7;
L_0032A500:
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0032A514u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0032A514u) [[unlikely]] return; }
L_0032A514:
    c.f[0] = ld32((c.r[17].w[0]));
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 16u)));
    c.f[12] = fp::cvt_s_w(c.f[0]);
    set32(c.r[3], c.r[3].w[0] + 8u);
    c.f[0] = c.r[3].w[0];
    c.budget -= 8;
    { const bool t = c.r[2].sd[0] < 0; c.f[13] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0032A540; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[14] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0032A55C; } }
L_0032A540:
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[14] = fp::cvt_s_w(c.f[0]);
    c.f[14] = fp::add(c.f[14], c.f[14]);
    c.budget -= 7;
L_0032A55C:
    set32(c.r[4], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0032A570u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0032A570u) [[unlikely]] return; }
L_0032A570:
    set32(c.r[4], ld32((c.r[17].w[0])));
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 16u)));
    set32(c.r[4], c.r[4].w[0] + 8u);
    set32(c.r[3], c.r[3].w[0] + 8u);
    c.f[1] = c.r[4].w[0];
    c.f[0] = c.r[3].w[0];
    c.f[12] = fp::cvt_s_w(c.f[1]);
    c.budget -= 11;
    { const bool t = c.r[2].sd[0] < 0; c.f[13] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0032A5A8; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[14] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0032A5C4; } }
L_0032A5A8:
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[14] = fp::cvt_s_w(c.f[0]);
    c.f[14] = fp::add(c.f[14], c.f[14]);
    c.budget -= 7;
L_0032A5C4:
    set32(c.r[4], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0032A5D8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0032A5D8u) [[unlikely]] return; }
L_0032A5D8:
    set32(c.r[5], ld32((c.r[17].w[0])));
    set32(c.r[4], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 16u)));
    set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);
    set32(c.r[4], c.r[4].w[0] - 8u);
    set32(c.r[3], c.r[3].w[0] + 8u);
    c.f[1] = c.r[4].w[0];
    c.f[0] = c.r[3].w[0];
    c.f[12] = fp::cvt_s_w(c.f[1]);
    c.budget -= 13;
    { const bool t = c.r[2].sd[0] < 0; c.f[13] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0032A618; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[14] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0032A634; } }
L_0032A618:
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[14] = fp::cvt_s_w(c.f[0]);
    c.f[14] = fp::add(c.f[14], c.f[14]);
    c.budget -= 7;
L_0032A634:
    set32(c.r[4], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0032A648u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0032A648u) [[unlikely]] return; }
L_0032A648:
    c.f[0] = ld32((c.r[17].w[0]));
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[17].w[0] + 12u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 16u)));
    c.f[12] = fp::cvt_s_w(c.f[0]);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[3].w[0] - 8u);
    c.f[0] = c.r[3].w[0];
    c.budget -= 10;
    { const bool t = c.r[2].sd[0] < 0; c.f[13] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0032A67C; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[14] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0032A698; } }
L_0032A67C:
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[14] = fp::cvt_s_w(c.f[0]);
    c.f[14] = fp::add(c.f[14], c.f[14]);
    c.budget -= 7;
L_0032A698:
    set32(c.r[4], ld32((c.r[16].w[0] + 24u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0032A6ACu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0032A6ACu) [[unlikely]] return; }
L_0032A6AC:
    set32(c.r[5], ld32((c.r[17].w[0])));
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[17].w[0] + 12u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 16u)));
    set32(c.r[5], c.r[5].w[0] + 8u);
    c.f[0] = c.r[5].w[0];
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    c.f[12] = fp::cvt_s_w(c.f[0]);
    set32(c.r[3], c.r[3].w[0] - 8u);
    c.f[0] = c.r[3].w[0];
    c.budget -= 12;
    { const bool t = c.r[2].sd[0] < 0; c.f[13] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0032A6E8; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[14] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0032A704; } }
L_0032A6E8:
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[14] = fp::cvt_s_w(c.f[0]);
    c.f[14] = fp::add(c.f[14], c.f[14]);
    c.budget -= 7;
L_0032A704:
    set32(c.r[4], ld32((c.r[16].w[0] + 28u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0032A718u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0032A718u) [[unlikely]] return; }
L_0032A718:
    set32(c.r[6], ld32((c.r[17].w[0])));
    set32(c.r[5], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[17].w[0] + 12u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 16u)));
    set32(c.r[5], c.r[6].w[0] + c.r[5].w[0]);
    set32(c.r[5], c.r[5].w[0] - 8u);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[3].w[0] - 8u);
    c.f[1] = c.r[5].w[0];
    c.f[0] = c.r[3].w[0];
    c.f[12] = fp::cvt_s_w(c.f[1]);
    c.budget -= 15;
    { const bool t = c.r[2].sd[0] < 0; c.f[13] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0032A760; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[14] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0032A77C; } }
L_0032A760:
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[14] = fp::cvt_s_w(c.f[0]);
    c.f[14] = fp::add(c.f[14], c.f[14]);
    c.budget -= 7;
L_0032A77C:
    set32(c.r[4], ld32((c.r[16].w[0] + 32u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0032A790u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0032A790u) [[unlikely]] return; }
L_0032A790:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0032A7B0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[5], c.r[29].w[0] + 64u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[25], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0032A7D0u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0032A7D0u) [[unlikely]] return; }
L_0032A7D0:
    set32(c.r[25], ld32((c.r[16].w[0] + 24u)));
    set32(c.r[4], c.r[29].w[0] + 32u);
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0032A7E4u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0032A7E4u) [[unlikely]] return; }
L_0032A7E4:
    set32(c.r[2], c.r[29].w[0] + 32u);
    set32(c.r[3], c.r[29].w[0] + 48u);
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032A7F8u); st128((c.r[3].w[0]) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_0022(c, 132u, depth + 1u); else { c.pc = 0x00188B30u; return; } if (c.pc != 0x0032A7F8u) [[unlikely]] return; }
L_0032A7F8:
    set32(c.r[4], c.r[29].w[0] + 60u);
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.r[1].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0032A810; } }
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.budget -= 1;
L_0032A810:
    set32(c.r[2], c.r[16].w[0] << 2);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[3]);
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[4], c.r[2].w[0] + 64u);
    set32(c.r[2], ld32((c.r[4].w[0])));
    st128((c.r[2].w[0] + 48u) & ~15u, c.r[3]);
    set32(c.r[4], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 56u)));
    c.budget -= 11;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0032A83Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0032A83Cu) [[unlikely]] return; }
L_0032A83C:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[3].d[0] = c.r[16].sd[0] < 9ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0032A810u | kUnwind; return; } goto L_0032A810; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_0032A860:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[5].w[0] + 20u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032A87Cu); set32(c.r[5], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_0023(c, 71u, depth + 1u); else { c.pc = 0x0018CC10u; return; } if (c.pc != 0x0032A87Cu) [[unlikely]] return; }
L_0032A87C:
    set32(c.r[3], c.r[29].w[0] + 32u);
    ld128((c.r[3].w[0]) & ~15u, c.r[3]);
    st128((c.r[16].w[0]) & ~15u, c.r[3]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0032A8A0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[7].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    c.r[8].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[9].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[4], c.r[18].w[0] + 12u);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032A8E0u); c.r[10].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_008A(c, 214u, depth + 1u); else { c.pc = 0x0032A240u; return; } if (c.pc != 0x0032A8E0u) [[unlikely]] return; }
L_0032A8E0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[2], c.r[2].w[0] - 4840u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00420000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00420000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00420000u);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00420000u);
    c.r[11].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[4], c.r[18].w[0] + 48u);
    st64((c.r[29].w[0]), c.r[2].d[0]);
    set32(c.r[5], c.r[5].w[0] - 4888u);
    set32(c.r[6], c.r[6].w[0] - 4880u);
    set32(c.r[7], c.r[7].w[0] - 4872u);
    set32(c.r[8], c.r[8].w[0] - 4864u);
    set32(c.r[9], c.r[9].w[0] - 4856u);
    set32(c.r[10], 0u + 3u);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032A928u); set32(c.r[11], c.r[11].w[0] - 4848u);  if (depth < kMaxDepth) unit_008A(c, 298u, depth + 1u); else { c.pc = 0x0032B400u; return; } if (c.pc != 0x0032A928u) [[unlikely]] return; }
L_0032A928:
    st32((c.r[18].w[0]), 0u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    st8((c.r[18].w[0] + 4u), static_cast<std::uint8_t>(0u));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032A944u); st32((c.r[18].w[0] + 8u), c.r[17].w[0]);  if (depth < kMaxDepth) unit_008A(c, 247u, depth + 1u); else { c.pc = 0x0032AA20u; return; } if (c.pc != 0x0032A944u) [[unlikely]] return; }
L_0032A944:
    st8((c.r[18].w[0] + 84u), static_cast<std::uint8_t>(0u));
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0032A970:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0032AA04; } }
    set32(c.r[4], c.r[16].w[0] + 48u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);  if (t) { goto L_0032A9E0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 21728u);
    set32(c.r[2], c.r[2].w[0] + 21756u);
    st32((c.r[16].w[0] + 72u), c.r[3].w[0]);
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[16].w[0] + 76u), c.r[2].w[0]);  if (t) { goto L_0032A9E0; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 19872u);
    set32(c.r[2], c.r[2].w[0] + 19900u);
    st32((c.r[16].w[0] + 72u), c.r[3].w[0]);
    set32(c.r[4], c.r[16].w[0] + 76u);
    st32((c.r[16].w[0] + 76u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032A9D4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000F(c, 266u, depth + 1u); else { c.pc = 0x0013E5B0u; return; } if (c.pc != 0x0032A9D4u) [[unlikely]] return; }
L_0032A9D4:
    set32(c.r[4], c.r[16].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032A9E0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_008A(c, 215u, depth + 1u); else { c.pc = 0x0032A270u; return; } if (c.pc != 0x0032A9E0u) [[unlikely]] return; }
L_0032A9E0:
    set32(c.r[4], c.r[16].w[0] + 12u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032A9ECu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008A(c, 215u, depth + 1u); else { c.pc = 0x0032A270u; return; } if (c.pc != 0x0032A9ECu) [[unlikely]] return; }
L_0032A9EC:
    c.r[2].d[0] = c.r[17].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0032AA08; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032AA04u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x0032AA04u) [[unlikely]] return; }
L_0032AA04:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0032AA08:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0032AA20:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 12;
    { const bool t = c.r[5].d[0] == 0ull; st32((c.r[4].w[0]), c.r[5].w[0]);  if (t) { goto L_0032AD6C; } }
    set32(c.r[2], ld32((c.r[21].w[0])));
    c.r[19].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_0032AA70; } }
    set32(c.r[19], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[18], 0u + 2u);  if (t) { goto L_0032AAAC; } }
L_0032AA70:
    c.r[5].d[0] = c.r[2].d[0] & 255ull;
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], c.r[3].w[0] << (c.r[4].w[0] & 31u));
    c.budget -= 4;
L_0032AA80:
    c.r[2].d[0] = c.r[5].d[0] & c.r[2].d[0];
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0032AA98; } }
    c.budget -= 2;
    { const bool t = c.r[19].d[0] != 0ull; set32(c.r[18], c.r[4].w[0] + 1u);  if (t) { goto L_0032AA98; } }
    set32(c.r[19], c.r[4].w[0] + 1u);
    c.budget -= 1;
L_0032AA98:
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.r[2].d[0] = c.r[4].sd[0] < 16ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[3].w[0] << (c.r[4].w[0] & 31u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0032AA80u | kUnwind; return; } goto L_0032AA80; } }
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_0032AAAC:
    set32(c.r[3], ld32((c.r[21].w[0] + 8u)));
    set32(c.r[2], 0u + 5u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 4u);  if (t) { goto L_0032AB18; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0032AB0C; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_0032AB00; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0032AAF4; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0032AAE8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0032AB20; } }
L_0032AAE8:
    set32(c.r[17], 0u + 120u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 110u);  if (t) { goto L_0032AB20; } }
L_0032AAF4:
    set32(c.r[17], 0u + 120u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 74u);  if (t) { goto L_0032AB20; } }
L_0032AB00:
    set32(c.r[17], 0u + 132u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 44u);  if (t) { goto L_0032AB20; } }
L_0032AB0C:
    set32(c.r[17], 0u + 120u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 114u);  if (t) { goto L_0032AB20; } }
L_0032AB18:
    set32(c.r[17], 0u + 456u);
    set32(c.r[16], 0u + 281u);
    c.budget -= 2;
L_0032AB20:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032AB28u);  if (depth < kMaxDepth) unit_0022(c, 256u, depth + 1u); else { c.pc = 0x00189B70u; return; } if (c.pc != 0x0032AB28u) [[unlikely]] return; }
L_0032AB28:
    set32(c.r[4], ld32((c.r[2].w[0] + 4u)));
    set32(c.r[3], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_0032AB40; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[21].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0032AB44; } }
L_0032AB40:
    st8((c.r[21].w[0] + 4u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_0032AB44:
    set32(c.r[4], ld32((c.r[21].w[0] + 8u)));
    set32(c.r[3], 0u + 5u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; c.r[3].d[0] = c.r[20].d[0] & 255ull;  if (t) { goto L_0032ABEC; } }
    c.r[3].d[0] = c.r[20].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0032AB90; } }
    set32(c.r[3], ld32((c.r[21].w[0])));
    set32(c.r[3], ld32((c.r[3].w[0] + 12u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[17].w[0] + c.r[3].w[0]);
    st32((c.r[21].w[0] + 12u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[21].w[0])));
    set32(c.r[4], ld32((c.r[3].w[0] + 16u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 20u)));
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st32((c.r[21].w[0] + 20u), c.r[3].w[0]);  if (t) { goto L_0032ABBC; } }
L_0032AB90:
    set32(c.r[3], ld32((c.r[21].w[0])));
    set32(c.r[3], ld32((c.r[3].w[0] + 12u)));
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[3], c.r[17].w[0] + c.r[3].w[0]);
    st32((c.r[21].w[0] + 12u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[21].w[0])));
    set32(c.r[4], ld32((c.r[3].w[0] + 16u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 20u)));
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[3].w[0] << 1);
    st32((c.r[21].w[0] + 20u), c.r[3].w[0]);
    c.budget -= 11;
L_0032ABBC:
    set32(c.r[4], c.r[18].w[0] - c.r[19].w[0]);
    set32(c.r[6], c.r[19].w[0] - 1u);
    set32(c.r[5], c.r[6].w[0] << 1);
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[4], c.r[5].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[4], c.r[16].w[0] + c.r[4].w[0]);
    st32((c.r[21].w[0] + 16u), c.r[4].w[0]);
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st32((c.r[21].w[0] + 24u), c.r[3].w[0]);  if (t) { goto L_0032AD60; } }
L_0032ABEC:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0032AC74; } }
    set32(c.r[3], ld32((c.r[21].w[0])));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[1] = ld32((c.r[1].w[0] - 12704u));
    c.f[0] = c.r[17].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 12u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    c.f[2] = c.r[3].w[0];
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.f[1] = fp::mul(c.f[1], c.f[2]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    st32((c.r[21].w[0] + 12u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[21].w[0])));
    c.f[0] = ld32((c.r[1].w[0] - 12704u));
    set32(c.r[4], ld32((c.r[3].w[0] + 16u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 20u)));
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    c.f[1] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    c.budget -= 32;
    { const bool t = 0ull == 0ull; st32((c.r[21].w[0] + 20u), c.r[3].w[0]);  if (t) { goto L_0032ACF4; } }
L_0032AC74:
    set32(c.r[3], ld32((c.r[21].w[0])));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[1] = ld32((c.r[1].w[0] - 12704u));
    c.f[0] = c.r[17].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 12u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[3], c.r[3].w[0] << 1);
    c.f[2] = c.r[3].w[0];
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.f[1] = fp::mul(c.f[1], c.f[2]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    st32((c.r[21].w[0] + 12u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[21].w[0])));
    c.f[0] = ld32((c.r[1].w[0] - 12704u));
    set32(c.r[4], ld32((c.r[3].w[0] + 16u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 20u)));
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[3].w[0] << 1);
    c.f[1] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    st32((c.r[21].w[0] + 20u), c.r[3].w[0]);
    c.budget -= 32;
L_0032ACF4:
    set32(c.r[5], c.r[19].w[0] - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[3], c.r[5].w[0] << 1);
    set32(c.r[4], c.r[18].w[0] - c.r[19].w[0]);
    set32(c.r[5], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[4], c.r[5].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] << 3);
    c.f[2] = c.r[4].w[0];
    c.f[1] = ld32((c.r[1].w[0] - 12704u));
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[1] = fp::mul(c.f[1], c.f[2]);
    c.f[1] = fp::cvt_w_s(c.f[1]);
    c.f[0] = c.r[3].w[0];
    set32(c.r[3], c.f[1]);
    c.f[1] = fp::cvt_s_w(c.f[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    st32((c.r[21].w[0] + 16u), c.r[3].w[0]);
    c.f[0] = ld32((c.r[1].w[0] - 12704u));
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    st32((c.r[21].w[0] + 24u), c.r[3].w[0]);
    c.budget -= 27;
L_0032AD60:
    set32(c.r[3], ld32((c.r[21].w[0])));
    set32(c.r[3], ld32((c.r[3].w[0] + 24u)));
    st32((c.r[21].w[0] + 32u), c.r[3].w[0]);
    c.budget -= 3;
L_0032AD6C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_0032AD90:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0032ADC8; } }
    c.r[3].d[0] = ld8((c.r[3].w[0]));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0032ADC8; } }
    st32((c.r[4].w[0] + 28u), c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] + 12u);
    set32(c.r[25], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0032ADC8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0032ADC8u) [[unlikely]] return; }
L_0032ADC8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0032ADE0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.budget -= 10;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_0032AE64; } }
    c.r[3].d[0] = ld8((c.r[3].w[0]));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[4], c.r[17].w[0] + 48u);  if (t) { goto L_0032AE64; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032AE1Cu); set32(c.r[5], c.r[17].w[0] + 12u);  if (depth < kMaxDepth) unit_008A(c, 307u, depth + 1u); else { c.pc = 0x0032B670u; return; } if (c.pc != 0x0032AE1Cu) [[unlikely]] return; }
L_0032AE1C:
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[4], ld32((c.r[2].w[0] + 24u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032AE2Cu); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0023(c, 71u, depth + 1u); else { c.pc = 0x0018CC10u; return; } if (c.pc != 0x0032AE2Cu) [[unlikely]] return; }
L_0032AE2C:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[3]);
    set32(c.r[2], 0u + 64u);
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[4], c.r[17].w[0] + 48u);
    set32(c.r[5], c.r[29].w[0] + 80u);
    set32(c.r[6], c.r[29].w[0] + 64u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[3]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032AE50u); st32((c.r[29].w[0] + 76u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_008A(c, 306u, depth + 1u); else { c.pc = 0x0032B650u; return; } if (c.pc != 0x0032AE50u) [[unlikely]] return; }
L_0032AE50:
    st32((c.r[17].w[0] + 64u), c.r[16].w[0]);
    set32(c.r[25], ld32((c.r[17].w[0] + 72u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0032AE64u); set32(c.r[4], c.r[17].w[0] + 48u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0032AE64u) [[unlikely]] return; }
L_0032AE64:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0032AE80:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032AEA8u); set32(c.r[5], 0u + 10u);  if (depth < kMaxDepth) unit_000F(c, 264u, depth + 1u); else { c.pc = 0x0013E560u; return; } if (c.pc != 0x0032AEA8u) [[unlikely]] return; }
L_0032AEA8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[4], c.r[18].w[0] + 32u);
    set32(c.r[2], c.r[2].w[0] + 21792u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[18].w[0]), c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032AEC4u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_008A(c, 238u, depth + 1u); else { c.pc = 0x0032A8A0u; return; } if (c.pc != 0x0032AEC4u) [[unlikely]] return; }
L_0032AEC4:
    st32((c.r[18].w[0] + 176u), c.r[17].w[0]);
    st32((c.r[18].w[0] + 12u), 0u);
    st8((c.r[18].w[0] + 16u), static_cast<std::uint8_t>(c.r[16].w[0]));
    st32((c.r[18].w[0] + 180u), 0u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032AEDCu); st8((c.r[18].w[0] + 184u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0022(c, 128u, depth + 1u); else { c.pc = 0x00188AE0u; return; } if (c.pc != 0x0032AEDCu) [[unlikely]] return; }
L_0032AEDC:
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_0032AEF0; } }
    set32(c.r[2], 0u + 1u);
    st8((c.r[18].w[0] + 184u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_0032AEF0:
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0032AF10:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0032AF68; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[4], c.r[17].w[0] + 32u);
    set32(c.r[2], c.r[2].w[0] + 21792u);
    set32(c.r[5], 0u - 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032AF44u); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_008A(c, 242u, depth + 1u); else { c.pc = 0x0032A970u; return; } if (c.pc != 0x0032AF44u) [[unlikely]] return; }
L_0032AF44:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032AF50u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000F(c, 266u, depth + 1u); else { c.pc = 0x0013E5B0u; return; } if (c.pc != 0x0032AF50u) [[unlikely]] return; }
L_0032AF50:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0032AF6C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032AF68u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x0032AF68u) [[unlikely]] return; }
L_0032AF68:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0032AF6C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0032AF80:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u + 4u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0] + 176u)));
    c.budget -= 7;
    { const bool t = c.r[5].d[0] != c.r[3].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0032AFAC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032AFA4u);  if (depth < kMaxDepth) unit_008A(c, 269u, depth + 1u); else { c.pc = 0x0032B020u; return; } if (c.pc != 0x0032AFA4u) [[unlikely]] return; }
L_0032AFA4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[16].w[0] + 12u)));  if (t) { goto L_0032AFE8; } }
L_0032AFAC:
    c.r[1].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[3], 0u + 3u);  if (t) { goto L_0032AFC0; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_0032AFD0; } }
L_0032AFC0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032AFC8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_008A(c, 276u, depth + 1u); else { c.pc = 0x0032B110u; return; } if (c.pc != 0x0032AFC8u) [[unlikely]] return; }
L_0032AFC8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0032AFE4; } }
L_0032AFD0:
    set32(c.r[3], 0u + 5u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_0032AFE4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032AFE4u);  if (depth < kMaxDepth) unit_008A(c, 283u, depth + 1u); else { c.pc = 0x0032B200u; return; } if (c.pc != 0x0032AFE4u) [[unlikely]] return; }
L_0032AFE4:
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 1;
L_0032AFE8:
    set32(c.r[3], c.r[3].w[0] + 2u);
    st32((c.r[16].w[0] + 12u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    c.r[3].d[0] = c.r[3].sd[0] < 120ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0032B004; } }
    st32((c.r[16].w[0] + 12u), 0u);
    c.budget -= 1;
L_0032B004:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0032B020:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[18], ld32((c.r[1].w[0] + 26120u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032B048u); c.r[19].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 256u, depth + 1u); else { c.pc = 0x00189B70u; return; } if (c.pc != 0x0032B048u) [[unlikely]] return; }
L_0032B048:
    c.r[16].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 2;
L_0032B050:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032B058u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0023(c, 4u, depth + 1u); else { c.pc = 0x0018C010u; return; } if (c.pc != 0x0032B058u) [[unlikely]] return; }
L_0032B058:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_0032B0E4; } }
    c.r[6].d[0] = ld8((c.r[19].w[0] + 184u));
    set32(c.r[4], c.r[19].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032B074u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_008A(c, 247u, depth + 1u); else { c.pc = 0x0032AA20u; return; } if (c.pc != 0x0032B074u) [[unlikely]] return; }
L_0032B074:
    set32(c.r[2], ld32((c.r[19].w[0] + 180u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0032B090; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == c.r[2].d[0];  if (t) { goto L_0032B090; } }
    set32(c.r[2], 0u + 21u);
    st32((c.r[19].w[0] + 64u), c.r[2].w[0]);
    c.budget -= 2;
L_0032B090:
    c.r[2].d[0] = ld8((c.r[17].w[0] + 15472u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 21u);  if (t) { goto L_0032B0A0; } }
    st32((c.r[19].w[0] + 64u), c.r[2].w[0]);
    c.budget -= 1;
L_0032B0A0:
    set32(c.r[2], ld32((c.r[19].w[0] + 180u)));
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != c.r[2].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);  if (t) { goto L_0032B0D0; } }
    set32(c.r[5], ld32((c.r[19].w[0] + 12u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[3], c.r[16].w[0] << 12);
    c.r[2].d[0] = c.r[2].d[0] | 12288ull;
    set32(c.r[4], c.r[19].w[0] + 32u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032B0C8u); set32(c.r[6], c.r[3].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_008A(c, 252u, depth + 1u); else { c.pc = 0x0032ADE0u; return; } if (c.pc != 0x0032B0C8u) [[unlikely]] return; }
L_0032B0C8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[16].w[0] + 1u);  if (t) { goto L_0032B0E8; } }
L_0032B0D0:
    set32(c.r[3], c.r[16].w[0] << 12);
    c.r[2].d[0] = c.r[2].d[0] | 12288ull;
    set32(c.r[4], c.r[19].w[0] + 32u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032B0E4u); set32(c.r[5], c.r[3].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_008A(c, 250u, depth + 1u); else { c.pc = 0x0032AD90u; return; } if (c.pc != 0x0032B0E4u) [[unlikely]] return; }
L_0032B0E4:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_0032B0E8:
    c.r[3].d[0] = c.r[16].sd[0] < 20ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0032B050u | kUnwind; return; } goto L_0032B050; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0032B110:
    set32(c.r[29], c.r[29].w[0] - 112u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[19], ld32((c.r[1].w[0] + 26120u)));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032B140u); c.r[20].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 256u, depth + 1u); else { c.pc = 0x00189B70u; return; } if (c.pc != 0x0032B140u) [[unlikely]] return; }
L_0032B140:
    set32(c.r[18], ld32((c.r[2].w[0] + 96u)));
    set32(c.r[3], ld32((c.r[20].w[0] + 176u)));
    set32(c.r[2], 0u + 3u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[17].sd[0] = static_cast<std::int32_t>(0x00010000u);  if (t) { goto L_0032B15C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[17].d[0] = c.r[2].d[0] | 40960ull;
    c.budget -= 2;
L_0032B15C:
    c.r[16].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 2;
L_0032B164:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032B16Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 500u, depth + 1u); else { c.pc = 0x0018BFA0u; return; } if (c.pc != 0x0032B16Cu) [[unlikely]] return; }
L_0032B16C:
    c.r[6].d[0] = ld8((c.r[20].w[0] + 184u));
    c.r[21].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[20].w[0] + 32u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032B180u); c.r[5].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_008A(c, 247u, depth + 1u); else { c.pc = 0x0032AA20u; return; } if (c.pc != 0x0032B180u) [[unlikely]] return; }
L_0032B180:
    c.budget -= 2;
    { const bool t = c.r[21].d[0] != c.r[18].d[0]; set32(c.r[4], c.r[20].w[0] + 32u);  if (t) { goto L_0032B1B8; } }
    c.r[2].d[0] = ld8((c.r[20].w[0] + 16u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0032B1A0; } }
    set32(c.r[2], ld32((c.r[20].w[0] + 48u)));
    set32(c.r[2], c.r[2].w[0] - 6u);
    st32((c.r[20].w[0] + 48u), c.r[2].w[0]);
    c.budget -= 3;
L_0032B1A0:
    set32(c.r[5], ld32((c.r[20].w[0] + 12u)));
    set32(c.r[4], c.r[20].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032B1B0u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_008A(c, 252u, depth + 1u); else { c.pc = 0x0032ADE0u; return; } if (c.pc != 0x0032B1B0u) [[unlikely]] return; }
L_0032B1B0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[16].w[0] + 1u);  if (t) { goto L_0032B1C4; } }
L_0032B1B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032B1C0u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_008A(c, 250u, depth + 1u); else { c.pc = 0x0032AD90u; return; } if (c.pc != 0x0032B1C0u) [[unlikely]] return; }
L_0032B1C0:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_0032B1C4:
    c.r[3].d[0] = c.r[16].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0032B164u | kUnwind; return; } goto L_0032B164; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_0032B200:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[17], ld32((c.r[1].w[0] + 26120u)));
    c.r[16].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 11;
L_0032B22C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032B234u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0023(c, 4u, depth + 1u); else { c.pc = 0x0018C010u; return; } if (c.pc != 0x0032B234u) [[unlikely]] return; }
L_0032B234:
    c.r[6].d[0] = ld8((c.r[18].w[0] + 184u));
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[18].w[0] + 32u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032B248u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_008A(c, 247u, depth + 1u); else { c.pc = 0x0032AA20u; return; } if (c.pc != 0x0032B248u) [[unlikely]] return; }
L_0032B248:
    set32(c.r[2], ld32((c.r[18].w[0] + 180u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], c.r[16].w[0] << 12);  if (t) { goto L_0032B268; } }
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == c.r[2].d[0];  if (t) { goto L_0032B264; } }
    set32(c.r[2], 0u + 21u);
    st32((c.r[18].w[0] + 64u), c.r[2].w[0]);
    c.budget -= 2;
L_0032B264:
    set32(c.r[3], c.r[16].w[0] << 12);
    c.budget -= 1;
L_0032B268:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00F10000u);
    set32(c.r[5], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032B278u); set32(c.r[4], c.r[18].w[0] + 32u);  if (depth < kMaxDepth) unit_008A(c, 250u, depth + 1u); else { c.pc = 0x0032AD90u; return; } if (c.pc != 0x0032B278u) [[unlikely]] return; }
L_0032B278:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[3].d[0] = c.r[16].sd[0] < 20ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0032B22Cu | kUnwind; return; } goto L_0032B22C; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0032B2B0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[8].d[0] + 0ull;
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032B2E4u); c.r[16].d[0] = c.r[9].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 264u, depth + 1u); else { c.pc = 0x0013E560u; return; } if (c.pc != 0x0032B2E4u) [[unlikely]] return; }
L_0032B2E4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[4], c.r[20].w[0] + 12u);
    set32(c.r[2], c.r[2].w[0] + 21776u);
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[20].w[0]), c.r[2].w[0]);
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[7], 0u + 120u);
    c.r[8].d[0] = c.r[18].d[0] + 0ull;
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032B310u); set32(c.r[10], 0u + 20u);  if (depth < kMaxDepth) unit_008A(c, 214u, depth + 1u); else { c.pc = 0x0032A240u; return; } if (c.pc != 0x0032B310u) [[unlikely]] return; }
L_0032B310:
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.r[8].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[4], c.r[20].w[0] + 40u);
    set32(c.r[5], 0u + 360u);
    set32(c.r[7], 0u + 280u);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032B330u); set32(c.r[10], 0u + 20u);  if (depth < kMaxDepth) unit_008A(c, 214u, depth + 1u); else { c.pc = 0x0032A240u; return; } if (c.pc != 0x0032B330u) [[unlikely]] return; }
L_0032B330:
    st32((c.r[20].w[0] + 68u), c.r[17].w[0]);
    c.r[2].d[0] = c.r[20].d[0] + 0ull;
    st32((c.r[20].w[0] + 72u), c.r[16].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0032B360:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0032B3C4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[4], c.r[17].w[0] + 40u);
    set32(c.r[2], c.r[2].w[0] + 21776u);
    set32(c.r[5], 0u - 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032B394u); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_008A(c, 215u, depth + 1u); else { c.pc = 0x0032A270u; return; } if (c.pc != 0x0032B394u) [[unlikely]] return; }
L_0032B394:
    set32(c.r[4], c.r[17].w[0] + 12u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032B3A0u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008A(c, 215u, depth + 1u); else { c.pc = 0x0032A270u; return; } if (c.pc != 0x0032B3A0u) [[unlikely]] return; }
L_0032B3A0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032B3ACu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000F(c, 266u, depth + 1u); else { c.pc = 0x0013E5B0u; return; } if (c.pc != 0x0032B3ACu) [[unlikely]] return; }
L_0032B3AC:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0032B3C8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032B3C4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x0032B3C4u) [[unlikely]] return; }
L_0032B3C4:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0032B3C8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0032B3E0:
    set32(c.r[4], c.r[4].w[0] + 12u);
    set32(c.r[25], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0];  c.pc = t; if (t - 0x00328000u < 16384u) { entry = entries_008A[(t - 0x00328000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0032B400:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[10].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[11].d[0] + 0ull;
    set32(c.r[10], ld32((c.r[11].w[0])));
    set32(c.r[5], ld32((c.r[5].w[0])));
    set32(c.r[6], ld32((c.r[6].w[0])));
    set32(c.r[7], ld32((c.r[7].w[0])));
    set32(c.r[8], ld32((c.r[8].w[0])));
    set32(c.r[9], ld32((c.r[9].w[0])));
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032B43Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_008A(c, 214u, depth + 1u); else { c.pc = 0x0032A240u; return; } if (c.pc != 0x0032B43Cu) [[unlikely]] return; }
L_0032B43C:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032B448u); set32(c.r[4], c.r[16].w[0] + 28u);  if (depth < kMaxDepth) unit_000F(c, 264u, depth + 1u); else { c.pc = 0x0013E560u; return; } if (c.pc != 0x0032B448u) [[unlikely]] return; }
L_0032B448:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 19872u);
    set32(c.r[2], c.r[2].w[0] + 19900u);
    st32((c.r[16].w[0] + 24u), c.r[3].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    st32((c.r[16].w[0] + 28u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] + 21728u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] + 21756u);
    st32((c.r[16].w[0] + 24u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 28u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 64u)));
    set32(c.r[5], ld32((c.r[17].w[0])));
    set32(c.r[6], ld32((c.r[2].w[0])));
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032B490u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_008A(c, 303u, depth + 1u); else { c.pc = 0x0032B5F0u; return; } if (c.pc != 0x0032B490u) [[unlikely]] return; }
L_0032B490:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0032B4B0:
    set32(c.r[3], ld32((c.r[5].w[0] + 80u)));
    c.r[1].d[0] = c.r[3].sd[0] < 60ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[29], c.r[29].w[0] - 16u);  if (t) { goto L_0032B4F0; } }
    c.f[1] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42700000u);
    c.f[0] = c.r[3].w[0];
    fpu_div(c, 2u, c.f[1], c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[3].w[0];
    c.budget -= 12;
    { const bool t = 0ull == 0ull; c.f[3] = fp::sub(c.f[0], c.f[2]);  if (t) { goto L_0032B51C; } }
L_0032B4F0:
    set32(c.r[3], c.r[3].w[0] - 60u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x42700000u);
    c.f[1] = c.r[3].w[0];
    c.f[0] = c.r[6].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    fpu_div(c, 3u, c.f[1], c.f[0]);
    c.f[0] = c.r[3].w[0];
    c.f[2] = fp::sub(c.f[0], c.f[3]);
    c.budget -= 11;
L_0032B51C:
    c.f[1] = ld32((c.r[5].w[0] + 48u));
    c.f[0] = ld32((c.r[5].w[0] + 64u));
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.facc = fp::mul(c.f[1], c.f[3]);
    c.f[0] = fp::add(c.facc, fp::mul(c.f[0], c.f[2]));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    st32((c.r[29].w[0]), c.r[3].w[0]);
    c.f[1] = ld32((c.r[5].w[0] + 52u));
    c.f[0] = ld32((c.r[5].w[0] + 68u));
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.facc = fp::mul(c.f[1], c.f[3]);
    c.f[0] = fp::add(c.facc, fp::mul(c.f[0], c.f[2]));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    st32((c.r[29].w[0] + 4u), c.r[3].w[0]);
    c.f[1] = ld32((c.r[5].w[0] + 56u));
    c.f[0] = ld32((c.r[5].w[0] + 72u));
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.facc = fp::mul(c.f[1], c.f[3]);
    c.f[0] = fp::add(c.facc, fp::mul(c.f[0], c.f[2]));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    st32((c.r[29].w[0] + 8u), c.r[3].w[0]);
    c.f[1] = ld32((c.r[5].w[0] + 60u));
    c.f[0] = ld32((c.r[5].w[0] + 76u));
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.facc = fp::mul(c.f[1], c.f[3]);
    c.f[0] = fp::add(c.facc, fp::mul(c.f[0], c.f[2]));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    st32((c.r[29].w[0] + 12u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0] + 80u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[5].w[0] + 80u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0] + 80u)));
    c.r[3].d[0] = c.r[3].sd[0] < 120ll ? 1ull : 0ull;
    c.budget -= 47;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], c.r[29].w[0]);  if (t) { goto L_0032B5DC; } }
    st32((c.r[5].w[0] + 80u), 0u);
    c.budget -= 1;
L_0032B5DC:
    ld128((c.r[3].w[0]) & ~15u, c.r[3]);
    st128((c.r[4].w[0]) & ~15u, c.r[3]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0032B5F0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.r[16].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032B61Cu); set32(c.r[5], c.r[18].w[0] + 48u);  if (depth < kMaxDepth) unit_0023(c, 71u, depth + 1u); else { c.pc = 0x0018CC10u; return; } if (c.pc != 0x0032B61Cu) [[unlikely]] return; }
L_0032B61C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032B628u); set32(c.r[5], c.r[18].w[0] + 64u);  if (depth < kMaxDepth) unit_0023(c, 71u, depth + 1u); else { c.pc = 0x0018CC10u; return; } if (c.pc != 0x0032B628u) [[unlikely]] return; }
L_0032B628:
    st32((c.r[18].w[0] + 80u), c.r[16].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0032B650:
    ld128((c.r[5].w[0]) & ~15u, c.r[3]);
    st128((c.r[4].w[0] + 48u) & ~15u, c.r[3]);
    ld128((c.r[6].w[0]) & ~15u, c.r[3]);
    st128((c.r[4].w[0] + 64u) & ~15u, c.r[3]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 80u), c.r[7].w[0]);  c.pc = t; return; }
L_0032B670:
    set32(c.r[3], ld32((c.r[5].w[0])));
    st32((c.r[4].w[0]), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0] + 4u)));
    st32((c.r[4].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0] + 8u)));
    st32((c.r[4].w[0] + 8u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0] + 12u)));
    st32((c.r[4].w[0] + 12u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0] + 16u)));
    st32((c.r[4].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0] + 20u)));
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 20u), c.r[3].w[0]);  c.pc = t; return; }
L_0032B6B0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032B6D4u); c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 264u, depth + 1u); else { c.pc = 0x0013E560u; return; } if (c.pc != 0x0032B6D4u) [[unlikely]] return; }
L_0032B6D4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[4], 0u + 9u);
    set32(c.r[2], c.r[2].w[0] + 21712u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    st32((c.r[17].w[0] + 20u), c.r[18].w[0]);
    st32((c.r[17].w[0] + 24u), 0u);
    st32((c.r[17].w[0] + 28u), 0u);
    st32((c.r[17].w[0] + 36u), c.r[16].w[0]);
    st32((c.r[17].w[0] + 12u), 0u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032B700u); st32((c.r[17].w[0] + 16u), 0u);  if (depth < kMaxDepth) unit_0022(c, 116u, depth + 1u); else { c.pc = 0x00188910u; return; } if (c.pc != 0x0032B700u) [[unlikely]] return; }
L_0032B700:
    st32((c.r[17].w[0] + 32u), c.r[2].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F300000u);
    set32(c.r[5], ld32((c.r[17].w[0] + 32u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F200000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[5].w[0] + 16u), c.r[4].w[0]);
    st32((c.r[5].w[0] + 20u), c.r[3].w[0]);
    c.budget -= 9;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[5].w[0] + 24u), c.r[2].w[0]);  if (t) { goto L_0032B730; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[2].d[0]; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0032B740; } }
L_0032B730:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032B73Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_008A(c, 315u, depth + 1u); else { c.pc = 0x0032B7C0u; return; } if (c.pc != 0x0032B73Cu) [[unlikely]] return; }
L_0032B73C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0032B740:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0032B760:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0032B7A8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 21712u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032B790u); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000F(c, 266u, depth + 1u); else { c.pc = 0x0013E5B0u; return; } if (c.pc != 0x0032B790u) [[unlikely]] return; }
L_0032B790:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0032B7AC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032B7A8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x0032B7A8u) [[unlikely]] return; }
L_0032B7A8:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0032B7AC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0032B7C0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[4].w[0] + 12u), c.r[5].w[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032B7E0u); set32(c.r[4], ld32((c.r[1].w[0] + 26120u)));  if (depth < kMaxDepth) unit_0022(c, 500u, depth + 1u); else { c.pc = 0x0018BFA0u; return; } if (c.pc != 0x0032B7E0u) [[unlikely]] return; }
L_0032B7E0:
    set32(c.r[3], ld32((c.r[2].w[0] + 12u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + 132u);
    st32((c.r[16].w[0] + 24u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 36u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u + 44u);  if (t) { goto L_0032B808; } }
    set32(c.r[3], 0u + 80u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 28u), c.r[3].w[0]);  if (t) { goto L_0032B80C; } }
L_0032B808:
    st32((c.r[16].w[0] + 28u), c.r[3].w[0]);
    c.budget -= 1;
L_0032B80C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0032B820:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.f[1] = ld32((c.r[4].w[0] + 24u));
    set32(c.r[2], ld32((c.r[4].w[0] + 20u)));
    c.f[0] = ld32((c.r[4].w[0] + 28u));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.f[12] = fp::cvt_s_w(c.f[1]);
    c.budget -= 10;
    { const bool t = c.r[2].sd[0] < 0; c.f[13] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0032B854; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[14] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0032B870; } }
L_0032B854:
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[14] = fp::cvt_s_w(c.f[0]);
    c.f[14] = fp::add(c.f[14], c.f[14]);
    c.budget -= 7;
L_0032B870:
    set32(c.r[4], ld32((c.r[16].w[0] + 32u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0032B884u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0032B884u) [[unlikely]] return; }
L_0032B884:
    set32(c.r[4], ld32((c.r[16].w[0] + 32u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 56u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0032B898u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0032B898u) [[unlikely]] return; }
L_0032B898:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0032B8B0:
    set32(c.r[29], c.r[29].w[0] - 160u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] + 21600u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[22].d[0] = c.r[9].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[7].d[0] + 0ull;
    c.r[16].d[0] = c.r[8].d[0] + 0ull;
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032B8FCu); st32((c.r[4].w[0] + 168u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0023(c, 236u, depth + 1u); else { c.pc = 0x0018E4B0u; return; } if (c.pc != 0x0032B8FCu) [[unlikely]] return; }
L_0032B8FC:
    st32((c.r[20].w[0] + 152u), c.r[16].w[0]);
    set32(c.r[4], 0u + 288u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032B90Cu); st32((c.r[20].w[0] + 156u), c.r[22].w[0]);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0032B90Cu) [[unlikely]] return; }
L_0032B90C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[21].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0032B968; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032B91Cu); set32(c.r[4], 0u + 36u);  if (depth < kMaxDepth) unit_0022(c, 105u, depth + 1u); else { c.pc = 0x00188790u; return; } if (c.pc != 0x0032B91Cu) [[unlikely]] return; }
L_0032B91C:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032B928u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 188u, depth + 1u); else { c.pc = 0x0015ED60u; return; } if (c.pc != 0x0032B928u) [[unlikely]] return; }
L_0032B928:
    set32(c.r[4], c.r[21].w[0] + 272u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032B934u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 264u, depth + 1u); else { c.pc = 0x0013E560u; return; } if (c.pc != 0x0032B934u) [[unlikely]] return; }
L_0032B934:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 21632u);
    set32(c.r[2], c.r[2].w[0] + 21692u);
    st32((c.r[21].w[0] + 176u), c.r[3].w[0]);
    st32((c.r[21].w[0] + 272u), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 21344u);
    st8((c.r[21].w[0] + 284u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], c.r[2].w[0] + 21404u);
    st32((c.r[21].w[0] + 176u), c.r[3].w[0]);
    st32((c.r[21].w[0] + 272u), c.r[2].w[0]);
    c.budget -= 13;
L_0032B968:
    st32((c.r[20].w[0] + 112u), c.r[21].w[0]);
    set32(c.r[2], c.r[18].w[0] + 90u);
    set32(c.r[3], ld32((c.r[20].w[0] + 112u)));
    c.f[0] = c.r[2].w[0];
    set32(c.r[4], 0u + 255u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00F10000u);
    c.f[1] = c.r[17].w[0];
    c.r[2].d[0] = c.r[2].d[0] | 16384ull;
    c.f[12] = fp::cvt_s_w(c.f[0]);
    st32((c.r[3].w[0] + 60u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[20].w[0] + 112u)));
    c.f[0] = c.r[2].w[0];
    c.f[13] = fp::cvt_s_w(c.f[1]);
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 18;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0032B9B0u); c.f[14] = fp::cvt_s_w(c.f[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0032B9B0u) [[unlikely]] return; }
L_0032B9B0:
    set32(c.r[5], ld32((c.r[20].w[0] + 112u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[4], 0u + 288u);
    st32((c.r[5].w[0] + 16u), c.r[3].w[0]);
    st32((c.r[5].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032B9D0u); st32((c.r[5].w[0] + 24u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0032B9D0u) [[unlikely]] return; }
L_0032B9D0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[21].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0032BA2C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032B9E0u); set32(c.r[4], 0u + 36u);  if (depth < kMaxDepth) unit_0022(c, 105u, depth + 1u); else { c.pc = 0x00188790u; return; } if (c.pc != 0x0032B9E0u) [[unlikely]] return; }
L_0032B9E0:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032B9ECu); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 188u, depth + 1u); else { c.pc = 0x0015ED60u; return; } if (c.pc != 0x0032B9ECu) [[unlikely]] return; }
L_0032B9EC:
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032B9F8u); set32(c.r[4], c.r[21].w[0] + 272u);  if (depth < kMaxDepth) unit_000F(c, 264u, depth + 1u); else { c.pc = 0x0013E560u; return; } if (c.pc != 0x0032B9F8u) [[unlikely]] return; }
L_0032B9F8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 21632u);
    set32(c.r[2], c.r[2].w[0] + 21692u);
    st32((c.r[21].w[0] + 176u), c.r[3].w[0]);
    st32((c.r[21].w[0] + 272u), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 21344u);
    st8((c.r[21].w[0] + 284u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], c.r[2].w[0] + 21404u);
    st32((c.r[21].w[0] + 176u), c.r[3].w[0]);
    st32((c.r[21].w[0] + 272u), c.r[2].w[0]);
    c.budget -= 13;
L_0032BA2C:
    st32((c.r[20].w[0] + 116u), c.r[21].w[0]);
    c.f[0] = c.r[17].w[0];
    set32(c.r[3], ld32((c.r[20].w[0] + 116u)));
    set32(c.r[4], 0u + 255u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00F10000u);
    c.f[1] = c.r[18].w[0];
    c.r[2].d[0] = c.r[2].d[0] | 16384ull;
    c.f[13] = fp::cvt_s_w(c.f[0]);
    st32((c.r[3].w[0] + 60u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[20].w[0] + 116u)));
    c.f[0] = c.r[2].w[0];
    c.f[12] = fp::cvt_s_w(c.f[1]);
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 17;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0032BA70u); c.f[14] = fp::cvt_s_w(c.f[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0032BA70u) [[unlikely]] return; }
L_0032BA70:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[6], c.r[22].w[0] + 1u);
    set32(c.r[7], c.r[16].w[0] + 1u);
    set32(c.r[4], c.r[20].w[0] + 120u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032BA88u); set32(c.r[5], c.r[5].w[0] - 12816u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x00127458u; return; } if (c.pc != 0x0032BA88u) [[unlikely]] return; }
L_0032BA88:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[2], c.r[18].w[0] + 44u);
    set32(c.r[3], c.r[3].w[0] - 4640u);
    set32(c.r[7], c.r[29].w[0] + 144u);
    ld128((c.r[3].w[0]) & ~15u, c.r[6]);
    c.f[1] = c.r[2].w[0];
    c.f[0] = c.r[17].w[0];
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[5], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] - 4624u);
    c.f[1] = fp::cvt_s_w(c.f[1]);
    st128((c.r[7].w[0]) & ~15u, c.r[6]);
    set32(c.r[3], c.r[29].w[0] + 128u);
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st128((c.r[3].w[0]) & ~15u, c.r[2]);
    st32((c.r[29].w[0] + 128u), c.f[1]);
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032BAD8u); st32((c.r[29].w[0] + 132u), c.f[0]);  if (depth < kMaxDepth) unit_0023(c, 205u, depth + 1u); else { c.pc = 0x0018DFE0u; return; } if (c.pc != 0x0032BAD8u) [[unlikely]] return; }
L_0032BAD8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 26392u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 440u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032BAECu); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0023(c, 203u, depth + 1u); else { c.pc = 0x0018DFC0u; return; } if (c.pc != 0x0032BAECu) [[unlikely]] return; }
L_0032BAEC:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032BAFCu); set32(c.r[6], c.r[20].w[0] + 120u);  if (depth < kMaxDepth) unit_0023(c, 210u, depth + 1u); else { c.pc = 0x0018E080u; return; } if (c.pc != 0x0032BAFCu) [[unlikely]] return; }
L_0032BAFC:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032BB0Cu); set32(c.r[6], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_0023(c, 211u, depth + 1u); else { c.pc = 0x0018E0B0u; return; } if (c.pc != 0x0032BB0Cu) [[unlikely]] return; }
L_0032BB0C:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032BB1Cu); set32(c.r[6], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_0023(c, 212u, depth + 1u); else { c.pc = 0x0018E0F0u; return; } if (c.pc != 0x0032BB1Cu) [[unlikely]] return; }
L_0032BB1C:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032BB2Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0023(c, 214u, depth + 1u); else { c.pc = 0x0018E160u; return; } if (c.pc != 0x0032BB2Cu) [[unlikely]] return; }
L_0032BB2C:
    c.r[2].d[0] = c.r[20].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_0032BB60:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0032BBD8; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 21632u);
    set32(c.r[2], c.r[2].w[0] + 21692u);
    st32((c.r[17].w[0] + 176u), c.r[3].w[0]);
    set32(c.r[4], c.r[17].w[0] + 272u);
    st32((c.r[17].w[0] + 272u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032BBA0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000F(c, 266u, depth + 1u); else { c.pc = 0x0013E5B0u; return; } if (c.pc != 0x0032BBA0u) [[unlikely]] return; }
L_0032BBA0:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; c.r[2].d[0] = c.r[16].d[0] << 48;  if (t) { goto L_0032BBC4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] - 17536u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032BBC0u); st32((c.r[17].w[0] + 176u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0012(c, 264u, depth + 1u); else { c.pc = 0x0014ADA0u; return; } if (c.pc != 0x0032BBC0u) [[unlikely]] return; }
L_0032BBC0:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.budget -= 1;
L_0032BBC4:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0032BBDC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032BBD8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x0032BBD8u) [[unlikely]] return; }
L_0032BBD8:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0032BBDC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0032BBF0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0032BC8C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] + 21600u);
    st32((c.r[17].w[0] + 168u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 112u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0032BC3C; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0032BC3C; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0032BC3Cu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0032BC3Cu) [[unlikely]] return; }
L_0032BC3C:
    st32((c.r[17].w[0] + 112u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 116u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0032BC64; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0032BC64; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0032BC64u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0032BC64u) [[unlikely]] return; }
L_0032BC64:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032BC74u); st32((c.r[17].w[0] + 116u), 0u);  if (depth < kMaxDepth) unit_0023(c, 238u, depth + 1u); else { c.pc = 0x0018E4F0u; return; } if (c.pc != 0x0032BC74u) [[unlikely]] return; }
L_0032BC74:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0032BC90; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032BC8Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x0032BC8Cu) [[unlikely]] return; }
L_0032BC8C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0032BC90:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0032BCB0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.f[0] = c.r[6].w[0];
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 112u)));
    set32(c.r[2], c.r[17].w[0] + 90u);
    c.f[1] = c.r[2].w[0];
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.f[13] = fp::cvt_s_w(c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00F10000u);
    c.r[2].d[0] = c.r[2].d[0] | 16384ull;
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    c.f[0] = c.r[2].w[0];
    c.f[12] = fp::cvt_s_w(c.f[1]);
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 22;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0032BD08u); c.f[14] = fp::cvt_s_w(c.f[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0032BD08u) [[unlikely]] return; }
L_0032BD08:
    set32(c.r[4], ld32((c.r[18].w[0] + 116u)));
    c.f[0] = c.r[17].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00F10000u);
    c.f[1] = c.r[16].w[0];
    c.r[2].d[0] = c.r[2].d[0] | 16384ull;
    c.f[12] = fp::cvt_s_w(c.f[0]);
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    c.f[0] = c.r[2].w[0];
    c.f[13] = fp::cvt_s_w(c.f[1]);
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 13;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0032BD3Cu); c.f[14] = fp::cvt_s_w(c.f[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0032BD3Cu) [[unlikely]] return; }
L_0032BD3C:
    set32(c.r[2], c.r[17].w[0] + 44u);
    set32(c.r[6], c.r[29].w[0] + 64u);
    c.f[1] = c.r[2].w[0];
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.f[0] = c.r[16].w[0];
    c.r[5].d[0] = 0ull + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[2], c.r[2].w[0] - 4608u);
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    c.f[1] = fp::cvt_s_w(c.f[1]);
    st128((c.r[6].w[0]) & ~15u, c.r[2]);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[29].w[0] + 64u), c.f[1]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032BD78u); st32((c.r[29].w[0] + 68u), c.f[0]);  if (depth < kMaxDepth) unit_0023(c, 212u, depth + 1u); else { c.pc = 0x0018E0F0u; return; } if (c.pc != 0x0032BD78u) [[unlikely]] return; }
L_0032BD78:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0032BD90:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], c.r[5].w[0] + 1u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00470000u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], c.r[5].w[0] - 12816u);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0] + 156u), c.r[2].w[0]);
    set32(c.r[6], ld32((c.r[16].w[0] + 156u)));
    set32(c.r[7], ld32((c.r[16].w[0] + 152u)));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032BDC0u); set32(c.r[4], c.r[16].w[0] + 120u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x00127458u; return; } if (c.pc != 0x0032BDC0u) [[unlikely]] return; }
L_0032BDC0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], c.r[16].w[0] + 120u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032BDD0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0023(c, 210u, depth + 1u); else { c.pc = 0x0018E080u; return; } if (c.pc != 0x0032BDD0u) [[unlikely]] return; }
L_0032BDD0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0032BDE0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], c.r[5].w[0] + 1u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00470000u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], c.r[5].w[0] - 12816u);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0] + 152u), c.r[2].w[0]);
    set32(c.r[6], ld32((c.r[16].w[0] + 156u)));
    set32(c.r[7], ld32((c.r[16].w[0] + 152u)));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032BE10u); set32(c.r[4], c.r[16].w[0] + 120u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x00127458u; return; } if (c.pc != 0x0032BE10u) [[unlikely]] return; }
L_0032BE10:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], c.r[16].w[0] + 120u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032BE20u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0023(c, 210u, depth + 1u); else { c.pc = 0x0018E080u; return; } if (c.pc != 0x0032BE20u) [[unlikely]] return; }
L_0032BE20:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0032BE30:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032BE48u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 264u, depth + 1u); else { c.pc = 0x0013E560u; return; } if (c.pc != 0x0032BE48u) [[unlikely]] return; }
L_0032BE48:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[17], c.r[16].w[0] + 16u);
    set32(c.r[2], c.r[2].w[0] + 21584u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032BE60u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0017(c, 177u, depth + 1u); else { c.pc = 0x0015E070u; return; } if (c.pc != 0x0032BE60u) [[unlikely]] return; }
L_0032BE60:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 21488u);
    st32((c.r[17].w[0] + 176u), c.r[2].w[0]);
    set32(c.r[3], 0u - 1u);
    c.budget -= 5;
L_0032BE74:
    set32(c.r[2], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st32((c.r[2].w[0] + 272u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[4].sd[0] < 9ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0032BE74u | kUnwind; return; } goto L_0032BE74; } }
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0032BEB0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0032BF28; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[4], c.r[17].w[0] + 16u);
    set32(c.r[2], c.r[2].w[0] + 21584u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_0032BF04; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] + 21488u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[17].w[0] + 192u), c.r[2].w[0]);  if (t) { goto L_0032BF04; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 17408u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032BF04u); st32((c.r[17].w[0] + 192u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0012(c, 264u, depth + 1u); else { c.pc = 0x0014ADA0u; return; } if (c.pc != 0x0032BF04u) [[unlikely]] return; }
L_0032BF04:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032BF10u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000F(c, 266u, depth + 1u); else { c.pc = 0x0013E5B0u; return; } if (c.pc != 0x0032BF10u) [[unlikely]] return; }
L_0032BF10:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0032BF2C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032BF28u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x0032BF28u) [[unlikely]] return; }
L_0032BF28:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0032BF2C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0032BF40:
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[3].w[0] + 272u), c.r[6].w[0]);  c.pc = t; return; }
L_0032BF50:
    set32(c.r[29], c.r[29].w[0] - 112u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00420000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00420000u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    set32(c.r[3], c.r[3].w[0] - 4592u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[8], c.r[29].w[0] + 96u);
    ld128((c.r[3].w[0]) & ~15u, c.r[7]);
    set32(c.r[5], c.r[5].w[0] - 4576u);
    set32(c.r[6], c.r[29].w[0] + 80u);
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.r[17].d[0] = 0ull + 0ull;
    st128((c.r[8].w[0]) & ~15u, c.r[7]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00420000u);
    ld128((c.r[5].w[0]) & ~15u, c.r[5]);
    set32(c.r[3], c.r[3].w[0] - 4560u);
    st128((c.r[6].w[0]) & ~15u, c.r[5]);
    ld128((c.r[3].w[0]) & ~15u, c.r[3]);
    c.budget -= 23;
    { const bool t = 0ull == 0ull; st128((c.r[4].w[0]) & ~15u, c.r[3]);  if (t) { [[clang::musttail]] return unit_008B(c, 8u, depth); } }
L_0032BFAC:
    set32(c.r[3], c.r[18].w[0] + c.r[3].w[0]);
    set32(c.r[16], c.r[3].w[0] + 272u);
    set32(c.r[3], ld32((c.r[3].w[0] + 272u)));
    c.budget -= 5;
    { const bool t = c.r[3].sd[0] < 0; c.r[3].sd[0] = static_cast<std::int32_t>(0x42F80000u);  if (t) { [[clang::musttail]] return unit_008B(c, 9u, depth); } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41800000u);
    st32((c.r[18].w[0] + 176u), c.r[3].w[0]);
    set32(c.r[4], c.r[18].w[0] + 16u);
    st32((c.r[18].w[0] + 180u), c.r[2].w[0]);
    set32(c.r[25], ld32((c.r[18].w[0] + 192u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0032BFE0u); set32(c.r[5], c.r[29].w[0] + 96u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0032BFE0u) [[unlikely]] return; }
L_0032BFE0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032BFE8u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x0032BFE8u) [[unlikely]] return; }
L_0032BFE8:
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    st128((c.r[18].w[0] + 64u) & ~15u, c.r[2]);
    set32(c.r[25], ld32((c.r[18].w[0] + 192u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0032C000u); set32(c.r[4], c.r[18].w[0] + 16u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0032C000u) [[unlikely]] return; }
    [[clang::musttail]] return unit_008B(c, 1u, depth);
}

}
