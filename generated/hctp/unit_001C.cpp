#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_001C[4096] = {
    1, 2, 0, 0, 0, 3, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 7, 0,
    8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 10, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0,
    13, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 18, 0, 19, 0, 0, 0, 0, 0, 20, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    23, 0, 0, 0, 0, 0, 0, 24, 0, 25, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0,
    0, 0, 0, 28, 0, 0, 29, 0, 0, 0, 0, 30, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 33,
    0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    37, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 39, 0, 0, 0, 0, 40, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    43, 0, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0,
    0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 51,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 57, 0, 0,
    0, 0, 58, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0,
    0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 70, 0, 0, 0,
    0, 0, 71, 0, 0, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0,
    0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 81, 0,
    0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 84, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    86, 87, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 90, 91, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0,
    93, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 94, 0, 95, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 97, 0, 0, 0, 0, 98, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    101, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    103, 0, 0, 0, 104, 0, 0, 105, 0, 0, 106, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 110, 111, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 114, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 116, 0, 117,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 0, 123, 0, 0, 0, 124, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 0, 0, 126, 0, 0,
    0, 0, 0, 127, 0, 128, 0, 0, 0, 0, 0, 129, 0, 130, 0, 0, 0, 0, 0, 131, 0, 132, 0, 0, 0, 0, 0, 133, 0, 134, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0,
    139, 140, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0,
    144, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 147, 0, 0, 148, 0, 0, 0, 0,
    149, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 153, 0, 0, 0,
    0, 154, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 156, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 158,
    0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 160, 0, 161, 0, 0, 162, 0, 163, 0, 0, 164, 0, 165, 0, 0, 166, 0, 167, 0, 0, 168, 0, 169, 0, 0, 170, 0,
    171, 0, 0, 172, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 176, 0, 177, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 178, 0, 179, 0, 0, 0, 180, 0, 0, 0, 181, 0, 182, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    183, 0, 0, 0, 184, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 185, 0, 0, 0, 186, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0, 0, 0,
    0, 188, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 0, 0, 0, 191, 0, 0, 0, 0, 0,
    0, 192, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 197, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 0, 0, 0, 199, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 201, 0, 0, 0, 0, 0, 0, 0, 0, 202, 0, 203, 0, 0, 0, 0, 0, 0, 0, 204, 0, 0, 0, 0, 0, 0, 205, 0, 0, 0,
    0, 0, 206, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 207, 0, 0, 0, 0, 0, 0, 0,
    208, 0, 209, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 210, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 211, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 212, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 0, 0, 0, 0, 0, 215, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 216, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 217, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 218, 0, 0, 0, 219, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 220, 0, 0, 0, 0, 0, 0, 0, 221, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 222, 0, 0, 0, 0, 0, 0, 0, 0, 0, 223, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 224, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 225, 0, 0, 0, 0, 0, 0, 0, 0, 0, 226, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 227, 0, 0, 0, 0, 0, 0, 228, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 229, 0, 0, 0, 0, 0, 0, 0, 230, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 231, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 232, 0,
    0, 0, 0, 0, 233, 0, 0, 0, 0, 0, 0, 0, 0, 0, 234, 0, 0, 0, 0, 0, 0, 235, 0, 0, 0, 0, 0, 0, 236, 0, 0, 0,
    237, 0, 0, 0, 238, 0, 0, 0, 0, 0, 0, 0, 239, 0, 0, 0, 240, 0, 0, 0, 0, 0, 0, 241, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 242, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 243, 0, 0,
    0, 0, 0, 0, 244, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    245, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 246, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 247, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    248, 0, 0, 0, 249, 0, 0, 0, 0, 0, 0, 0, 250, 0, 0, 0, 251, 0, 0, 0, 0, 0, 0, 0, 252, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 253, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 254, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0,
    256, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 257, 0, 0, 0,
    0, 0, 258, 0, 259, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 260, 0, 0, 0, 0, 0, 0, 0, 0, 261, 0, 0, 0, 0, 262, 0,
    0, 263, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 264, 0, 0, 0, 265, 0, 0, 0, 266, 0, 0, 0,
    267, 0, 0, 0, 268, 0, 0, 0, 0, 269, 0, 0, 0, 270, 0, 0, 0, 0, 0, 0, 271, 0, 0, 0, 0, 0, 272, 0, 273, 0, 0, 0,
    274, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 275, 0, 0, 0, 0, 0, 0, 0, 0, 276, 0, 277, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 278, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 279, 0, 0, 0, 0, 0, 280, 0, 281, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 282, 0, 0, 0, 0, 283, 0, 284, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 285, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 286, 0, 287, 0, 288, 0, 0, 0, 0, 0, 289, 0, 0, 0, 0, 0,
    290, 0, 0, 0, 0, 0, 0, 0, 291, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    292, 0, 0, 0, 293, 0, 0, 0, 294, 0, 0, 0, 0, 0, 0, 295, 0, 0, 296, 297, 0, 0, 298, 0, 0, 0, 0, 299, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 300, 0, 0, 0, 0, 0, 0, 301, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 302, 0, 0, 303, 0, 0, 0, 0, 304, 0, 0, 0, 0, 0, 0, 0, 0, 305, 0, 0, 0, 0, 0, 306, 0, 0, 0, 0, 0,
    0, 0, 307, 0, 0, 0, 0, 0, 0, 0, 308, 0, 0, 0, 0, 0, 0, 0, 0, 0, 309, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 310, 0, 0, 0, 0, 0, 0, 0, 0, 311, 0, 312, 0, 313, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 314, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 315, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 316, 0,
    317, 0, 0, 0, 0, 0, 0, 0, 318, 0, 319, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 320, 0, 0, 0, 321, 0, 0, 0, 0, 0, 0,
    0, 322, 0, 0, 0, 323, 0, 0, 0, 0, 0, 324, 0, 0, 0, 325, 0, 0, 0, 0, 326, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 327, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 328, 0, 329, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    330, 0, 0, 0, 0, 331, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 332, 0, 0, 0, 0, 0, 0, 333, 0, 0, 0, 334, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 335, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 336, 0, 0, 0, 0, 0, 0, 337, 0, 0, 0, 0, 0, 0, 338, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 339, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 340, 0, 0, 0,
    341, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 342, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 343, 0,
    0, 0, 0, 0, 0, 344, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    345, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 346, 0, 0, 0, 0, 0, 0, 347, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 348, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 349, 0,
    0, 0, 0, 0, 0, 350, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 351, 0, 0, 0, 0, 0, 0, 0, 352, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 353, 0, 0, 0, 0,
    0, 0, 354, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 355, 0, 0, 0, 356, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 357, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 358, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 359, 0, 0, 360, 0, 0, 0, 0, 361, 0, 362, 0, 0, 0, 363, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 364, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 365, 0, 0, 0, 366, 0, 0, 0,
    0, 0, 0, 0, 367, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 368, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 369, 0, 370,
};

void unit_001C(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_00170000;
    case 2u: goto L_00170004;
    case 3u: goto L_00170014;
    case 4u: goto L_0017001C;
    case 5u: goto L_0017004C;
    case 6u: goto L_0017005C;
    case 7u: goto L_00170078;
    case 8u: goto L_00170080;
    case 9u: goto L_001700AC;
    case 10u: goto L_001700B0;
    case 11u: goto L_001700C4;
    case 12u: goto L_001700F8;
    case 13u: goto L_00170100;
    case 14u: goto L_00170108;
    case 15u: goto L_00170138;
    case 16u: goto L_00170170;
    case 17u: goto L_00170220;
    case 18u: goto L_00170230;
    case 19u: goto L_00170238;
    case 20u: goto L_00170250;
    case 21u: goto L_00170260;
    case 22u: goto L_001702B0;
    case 23u: goto L_00170300;
    case 24u: goto L_0017031C;
    case 25u: goto L_00170324;
    case 26u: goto L_00170334;
    case 27u: goto L_00170370;
    case 28u: goto L_0017038C;
    case 29u: goto L_00170398;
    case 30u: goto L_001703AC;
    case 31u: goto L_001703B8;
    case 32u: goto L_001703E8;
    case 33u: goto L_001703FC;
    case 34u: goto L_00170410;
    case 35u: goto L_00170440;
    case 36u: goto L_00170538;
    case 37u: goto L_00170580;
    case 38u: goto L_001705C8;
    case 39u: goto L_001705D8;
    case 40u: goto L_001705EC;
    case 41u: goto L_00170634;
    case 42u: goto L_001706D0;
    case 43u: goto L_00170700;
    case 44u: goto L_00170728;
    case 45u: goto L_00170788;
    case 46u: goto L_001707EC;
    case 47u: goto L_0017080C;
    case 48u: goto L_00170830;
    case 49u: goto L_00170844;
    case 50u: goto L_00170860;
    case 51u: goto L_0017087C;
    case 52u: goto L_001708A4;
    case 53u: goto L_001708D0;
    case 54u: goto L_001709D8;
    case 55u: goto L_00170A20;
    case 56u: goto L_00170A64;
    case 57u: goto L_00170A74;
    case 58u: goto L_00170A88;
    case 59u: goto L_00170AC4;
    case 60u: goto L_00170AF8;
    case 61u: goto L_00170B10;
    case 62u: goto L_00170B54;
    case 63u: goto L_00170BE0;
    case 64u: goto L_00170C20;
    case 65u: goto L_00170C68;
    case 66u: goto L_00170CD8;
    case 67u: goto L_00170D14;
    case 68u: goto L_00170D3C;
    case 69u: goto L_00170D5C;
    case 70u: goto L_00170D70;
    case 71u: goto L_00170D88;
    case 72u: goto L_00170DAC;
    case 73u: goto L_00170DD0;
    case 74u: goto L_00170E1C;
    case 75u: goto L_00170EB0;
    case 76u: goto L_00170F20;
    case 77u: goto L_00170F4C;
    case 78u: goto L_00170F70;
    case 79u: goto L_00170F90;
    case 80u: goto L_00170FE0;
    case 81u: goto L_00170FF8;
    case 82u: goto L_0017100C;
    case 83u: goto L_00171030;
    case 84u: goto L_00171040;
    case 85u: goto L_00171050;
    case 86u: goto L_00171080;
    case 87u: goto L_00171084;
    case 88u: goto L_00171090;
    case 89u: goto L_001710B0;
    case 90u: goto L_001710BC;
    case 91u: goto L_001710C0;
    case 92u: goto L_001710F4;
    case 93u: goto L_00171100;
    case 94u: goto L_00171138;
    case 95u: goto L_00171140;
    case 96u: goto L_00171150;
    case 97u: goto L_00171188;
    case 98u: goto L_0017119C;
    case 99u: goto L_001711AC;
    case 100u: goto L_001711CC;
    case 101u: goto L_00171200;
    case 102u: goto L_00171258;
    case 103u: goto L_00171280;
    case 104u: goto L_00171290;
    case 105u: goto L_0017129C;
    case 106u: goto L_001712A8;
    case 107u: goto L_001712C0;
    case 108u: goto L_001712E0;
    case 109u: goto L_00171360;
    case 110u: goto L_0017143C;
    case 111u: goto L_00171440;
    case 112u: goto L_001714C8;
    case 113u: goto L_001714F4;
    case 114u: goto L_00171584;
    case 115u: goto L_00171598;
    case 116u: goto L_001715F4;
    case 117u: goto L_001715FC;
    case 118u: goto L_00171640;
    case 119u: goto L_00171654;
    case 120u: goto L_001716A8;
    case 121u: goto L_001716BC;
    case 122u: goto L_00171714;
    case 123u: goto L_00171730;
    case 124u: goto L_00171740;
    case 125u: goto L_00171750;
    case 126u: goto L_00171774;
    case 127u: goto L_0017178C;
    case 128u: goto L_00171794;
    case 129u: goto L_001717AC;
    case 130u: goto L_001717B4;
    case 131u: goto L_001717CC;
    case 132u: goto L_001717D4;
    case 133u: goto L_001717EC;
    case 134u: goto L_001717F4;
    case 135u: goto L_00171824;
    case 136u: goto L_0017183C;
    case 137u: goto L_00171854;
    case 138u: goto L_0017186C;
    case 139u: goto L_00171880;
    case 140u: goto L_00171884;
    case 141u: goto L_0017189C;
    case 142u: goto L_001718D4;
    case 143u: goto L_001718E0;
    case 144u: goto L_00171900;
    case 145u: goto L_00171930;
    case 146u: goto L_0017194C;
    case 147u: goto L_00171960;
    case 148u: goto L_0017196C;
    case 149u: goto L_00171980;
    case 150u: goto L_00171990;
    case 151u: goto L_001719C0;
    case 152u: goto L_001719D8;
    case 153u: goto L_001719F0;
    case 154u: goto L_00171A04;
    case 155u: goto L_00171A40;
    case 156u: goto L_00171A6C;
    case 157u: goto L_00171AC0;
    case 158u: goto L_00171AFC;
    case 159u: goto L_00171B10;
    case 160u: goto L_00171B94;
    case 161u: goto L_00171B9C;
    case 162u: goto L_00171BA8;
    case 163u: goto L_00171BB0;
    case 164u: goto L_00171BBC;
    case 165u: goto L_00171BC4;
    case 166u: goto L_00171BD0;
    case 167u: goto L_00171BD8;
    case 168u: goto L_00171BE4;
    case 169u: goto L_00171BEC;
    case 170u: goto L_00171BF8;
    case 171u: goto L_00171C00;
    case 172u: goto L_00171C0C;
    case 173u: goto L_00171C38;
    case 174u: goto L_00171C60;
    case 175u: goto L_00171CE4;
    case 176u: goto L_00171D30;
    case 177u: goto L_00171D38;
    case 178u: goto L_00171D98;
    case 179u: goto L_00171DA0;
    case 180u: goto L_00171DB0;
    case 181u: goto L_00171DC0;
    case 182u: goto L_00171DC8;
    case 183u: goto L_00171E00;
    case 184u: goto L_00171E10;
    case 185u: goto L_00171E3C;
    case 186u: goto L_00171E4C;
    case 187u: goto L_00171E68;
    case 188u: goto L_00171E84;
    case 189u: goto L_00171E94;
    case 190u: goto L_00171EC0;
    case 191u: goto L_00171EE8;
    case 192u: goto L_00171F04;
    case 193u: goto L_00171F30;
    case 194u: goto L_00171F64;
    case 195u: goto L_00171F94;
    case 196u: goto L_00171FB8;
    case 197u: goto L_00171FE8;
    case 198u: goto L_0017201C;
    case 199u: goto L_00172040;
    case 200u: goto L_00172050;
    case 201u: goto L_00172088;
    case 202u: goto L_001720AC;
    case 203u: goto L_001720B4;
    case 204u: goto L_001720D4;
    case 205u: goto L_001720F0;
    case 206u: goto L_00172108;
    case 207u: goto L_00172160;
    case 208u: goto L_00172180;
    case 209u: goto L_00172188;
    case 210u: goto L_0017220C;
    case 211u: goto L_00172284;
    case 212u: goto L_0017231C;
    case 213u: goto L_00172368;
    case 214u: goto L_001723B0;
    case 215u: goto L_001723D8;
    case 216u: goto L_00172468;
    case 217u: goto L_001724E0;
    case 218u: goto L_0017254C;
    case 219u: goto L_0017255C;
    case 220u: goto L_001725D0;
    case 221u: goto L_001725F0;
    case 222u: goto L_00172640;
    case 223u: goto L_00172668;
    case 224u: goto L_001726B8;
    case 225u: goto L_00172730;
    case 226u: goto L_00172758;
    case 227u: goto L_001727AC;
    case 228u: goto L_001727C8;
    case 229u: goto L_00172840;
    case 230u: goto L_00172860;
    case 231u: goto L_001728C0;
    case 232u: goto L_001728F8;
    case 233u: goto L_00172910;
    case 234u: goto L_00172938;
    case 235u: goto L_00172954;
    case 236u: goto L_00172970;
    case 237u: goto L_00172980;
    case 238u: goto L_00172990;
    case 239u: goto L_001729B0;
    case 240u: goto L_001729C0;
    case 241u: goto L_001729DC;
    case 242u: goto L_00172A0C;
    case 243u: goto L_00172A74;
    case 244u: goto L_00172A90;
    case 245u: goto L_00172B00;
    case 246u: goto L_00172C3C;
    case 247u: goto L_00172D30;
    case 248u: goto L_00172D80;
    case 249u: goto L_00172D90;
    case 250u: goto L_00172DB0;
    case 251u: goto L_00172DC0;
    case 252u: goto L_00172DE0;
    case 253u: goto L_00172E48;
    case 254u: goto L_00172EB0;
    case 255u: goto L_00172EF0;
    case 256u: goto L_00172F00;
    case 257u: goto L_00172F70;
    case 258u: goto L_00172F88;
    case 259u: goto L_00172F90;
    case 260u: goto L_00172FC0;
    case 261u: goto L_00172FE4;
    case 262u: goto L_00172FF8;
    case 263u: goto L_00173004;
    case 264u: goto L_00173050;
    case 265u: goto L_00173060;
    case 266u: goto L_00173070;
    case 267u: goto L_00173080;
    case 268u: goto L_00173090;
    case 269u: goto L_001730A4;
    case 270u: goto L_001730B4;
    case 271u: goto L_001730D0;
    case 272u: goto L_001730E8;
    case 273u: goto L_001730F0;
    case 274u: goto L_00173100;
    case 275u: goto L_00173130;
    case 276u: goto L_00173154;
    case 277u: goto L_0017315C;
    case 278u: goto L_00173184;
    case 279u: goto L_001731B0;
    case 280u: goto L_001731C8;
    case 281u: goto L_001731D0;
    case 282u: goto L_00173210;
    case 283u: goto L_00173224;
    case 284u: goto L_0017322C;
    case 285u: goto L_00173260;
    case 286u: goto L_001732C0;
    case 287u: goto L_001732C8;
    case 288u: goto L_001732D0;
    case 289u: goto L_001732E8;
    case 290u: goto L_00173300;
    case 291u: goto L_00173320;
    case 292u: goto L_00173380;
    case 293u: goto L_00173390;
    case 294u: goto L_001733A0;
    case 295u: goto L_001733BC;
    case 296u: goto L_001733C8;
    case 297u: goto L_001733CC;
    case 298u: goto L_001733D8;
    case 299u: goto L_001733EC;
    case 300u: goto L_00173420;
    case 301u: goto L_0017343C;
    case 302u: goto L_0017348C;
    case 303u: goto L_00173498;
    case 304u: goto L_001734AC;
    case 305u: goto L_001734D0;
    case 306u: goto L_001734E8;
    case 307u: goto L_00173508;
    case 308u: goto L_00173528;
    case 309u: goto L_00173550;
    case 310u: goto L_00173590;
    case 311u: goto L_001735B4;
    case 312u: goto L_001735BC;
    case 313u: goto L_001735C4;
    case 314u: goto L_001735F4;
    case 315u: goto L_00173630;
    case 316u: goto L_00173678;
    case 317u: goto L_00173680;
    case 318u: goto L_001736A0;
    case 319u: goto L_001736A8;
    case 320u: goto L_001736D4;
    case 321u: goto L_001736E4;
    case 322u: goto L_00173704;
    case 323u: goto L_00173714;
    case 324u: goto L_0017372C;
    case 325u: goto L_0017373C;
    case 326u: goto L_00173750;
    case 327u: goto L_001737A0;
    case 328u: goto L_0017382C;
    case 329u: goto L_00173834;
    case 330u: goto L_00173880;
    case 331u: goto L_00173894;
    case 332u: goto L_001738C0;
    case 333u: goto L_001738DC;
    case 334u: goto L_001738EC;
    case 335u: goto L_00173940;
    case 336u: goto L_00173984;
    case 337u: goto L_001739A0;
    case 338u: goto L_001739BC;
    case 339u: goto L_00173A40;
    case 340u: goto L_00173A70;
    case 341u: goto L_00173A80;
    case 342u: goto L_00173AC0;
    case 343u: goto L_00173AF8;
    case 344u: goto L_00173B14;
    case 345u: goto L_00173B80;
    case 346u: goto L_00173BB8;
    case 347u: goto L_00173BD4;
    case 348u: goto L_00173C40;
    case 349u: goto L_00173C78;
    case 350u: goto L_00173C94;
    case 351u: goto L_00173D20;
    case 352u: goto L_00173D40;
    case 353u: goto L_00173D6C;
    case 354u: goto L_00173D88;
    case 355u: goto L_00173DB8;
    case 356u: goto L_00173DC8;
    case 357u: goto L_00173E0C;
    case 358u: goto L_00173E40;
    case 359u: goto L_00173E88;
    case 360u: goto L_00173E94;
    case 361u: goto L_00173EA8;
    case 362u: goto L_00173EB0;
    case 363u: goto L_00173EC0;
    case 364u: goto L_00173EF8;
    case 365u: goto L_00173F60;
    case 366u: goto L_00173F70;
    case 367u: goto L_00173F90;
    case 368u: goto L_00173FC8;
    case 369u: goto L_00173FF4;
    case 370u: goto L_00173FFC;
    default: bad_entry(c, 0x00170000u); return;
    }
L_00170000:
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00170004:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], 0u - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00170014u); st8((c.r[19].w[0] + 33u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_001B(c, 468u, depth + 1u); else { c.pc = 0x0016FDB0u; return; } if (c.pc != 0x00170014u) [[unlikely]] return; }
L_00170014:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001703FC; } }
L_0017001C:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[17].d[0]; set32(c.r[2], 0u + 5u);  if (t) { goto L_001703FC; } }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != c.r[2].d[0];  if (t) { goto L_00170070; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 44u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00170064; } }
    st16((c.r[19].w[0] + 44u), static_cast<std::uint16_t>(c.r[17].w[0]));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 44u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017004Cu); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 464u, depth + 1u); else { c.pc = 0x0016FD50u; return; } if (c.pc != 0x0017004Cu) [[unlikely]] return; }
L_0017004C:
    set32(c.r[4], ld32((c.r[19].w[0])));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017005Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_001C(c, 174u, depth + 1u); else { c.pc = 0x00171C60u; return; } if (c.pc != 0x0017005Cu) [[unlikely]] return; }
L_0017005C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001703FC; } }
L_00170064:
    st16((c.r[19].w[0] + 44u), static_cast<std::uint16_t>(0u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[19].w[0] + 48u), static_cast<std::uint16_t>(c.r[6].w[0]));  if (t) { goto L_001703FC; } }
L_00170070:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[19].w[0] + 48u), static_cast<std::uint16_t>(c.r[7].w[0]));  if (t) { goto L_001703FC; } }
L_00170078:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00170080u);  if (depth < kMaxDepth) unit_001B(c, 460u, depth + 1u); else { c.pc = 0x0016FC20u; return; } if (c.pc != 0x00170080u) [[unlikely]] return; }
L_00170080:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001703FC; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 38u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00170098; } }
    set32(c.r[17], 0u + 4u);
    c.budget -= 1;
L_00170098:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001703FC; } }
    set32(c.r[2], 0u - 3u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[19].w[0] + 48u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_001703FC; } }
L_001700AC:
    set32(c.r[3], 0u + 8u);
    c.budget -= 1;
L_001700B0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_001700BC; } }
    set32(c.r[16], 0u + 1u);
    c.budget -= 1;
L_001700BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001700C4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_001B(c, 460u, depth + 1u); else { c.pc = 0x0016FC20u; return; } if (c.pc != 0x001700C4u) [[unlikely]] return; }
L_001700C4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001703FC; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 38u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u - 3u);  if (t) { goto L_001700DC; } }
    st16((c.r[19].w[0] + 48u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 1;
L_001700DC:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 38u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001703FC; } }
    set32(c.r[4], ld32((c.r[19].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001700F8u); set32(c.r[17], 0u + 4u);  if (depth < kMaxDepth) unit_001C(c, 247u, depth + 1u); else { c.pc = 0x00172D30u; return; } if (c.pc != 0x001700F8u) [[unlikely]] return; }
L_001700F8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001703FC; } }
L_00170100:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00170108u); c.r[16].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 460u, depth + 1u); else { c.pc = 0x0016FC20u; return; } if (c.pc != 0x00170108u) [[unlikely]] return; }
L_00170108:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001703FC; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 38u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 10u);  if (t) { goto L_00170120; } }
    st16((c.r[19].w[0] + 48u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 1;
L_00170120:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 38u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 3u);  if (t) { goto L_001703FC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 28u), c.r[2].w[0]);  if (t) { goto L_001703FC; } }
L_00170138:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[17].d[0]; c.r[16].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_001703FC; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 50u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001703FC; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_00170168; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 44u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    st32((c.r[2].w[0] + 20u), c.r[18].w[0]);
    c.budget -= 4;
L_00170168:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00170170u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_001B(c, 460u, depth + 1u); else { c.pc = 0x0016FC20u; return; } if (c.pc != 0x00170170u) [[unlikely]] return; }
L_00170170:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00170210; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 44u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 20u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] != 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_001701A4; } }
    set32(c.r[3], 0u - 2u);
    set32(c.r[2], 0u + 13u);
    st16((c.r[19].w[0] + 40u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st16((c.r[19].w[0] + 48u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_001703FC; } }
L_001701A4:
    set32(c.r[2], 0u + 10u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 8u);  if (t) { goto L_001701C8; } }
    set32(c.r[3], 0u + 8u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[2], 0u + 6u);  if (t) { goto L_001701C4; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { goto L_00170208; } }
L_001701C4:
    set32(c.r[2], 0u + 8u);
    c.budget -= 1;
L_001701C8:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 9u);  if (t) { goto L_00170200; } }
    set32(c.r[2], 0u + 6u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 26u);  if (t) { goto L_001701F4; } }
    set32(c.r[2], 0u + 10u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_001701F0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001703FC; } }
L_001701F0:
    set32(c.r[2], 0u + 26u);
    c.budget -= 1;
L_001701F4:
    set32(c.r[17], 0u + 3u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[19].w[0] + 48u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_001703FC; } }
L_00170200:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[19].w[0] + 48u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_001703FC; } }
L_00170208:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[19].w[0] + 48u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_001703FC; } }
L_00170210:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 44u)));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00170220u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_001B(c, 464u, depth + 1u); else { c.pc = 0x0016FD50u; return; } if (c.pc != 0x00170220u) [[unlikely]] return; }
L_00170220:
    set32(c.r[4], ld32((c.r[19].w[0])));
    set32(c.r[5], 0u + 2u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00170230u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_001C(c, 174u, depth + 1u); else { c.pc = 0x00171C60u; return; } if (c.pc != 0x00170230u) [[unlikely]] return; }
L_00170230:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001703FC; } }
L_00170238:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 40u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[8].d[0];  if (t) { goto L_00170274; } }
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 44u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00170250u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 464u, depth + 1u); else { c.pc = 0x0016FD50u; return; } if (c.pc != 0x00170250u) [[unlikely]] return; }
L_00170250:
    set32(c.r[4], ld32((c.r[19].w[0])));
    set32(c.r[5], 0u + 5u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00170260u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_001C(c, 174u, depth + 1u); else { c.pc = 0x00171C60u; return; } if (c.pc != 0x00170260u) [[unlikely]] return; }
L_00170260:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_001702A8; } }
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[19].w[0] + 40u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_001702A4; } }
L_00170274:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 36u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 5u);  if (t) { goto L_00170290; } }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != c.r[2].d[0]; st16((c.r[19].w[0] + 40u), static_cast<std::uint16_t>(c.r[5].w[0]));  if (t) { goto L_00170290; } }
    st16((c.r[19].w[0] + 40u), static_cast<std::uint16_t>(c.r[6].w[0]));
    c.budget -= 1;
L_00170290:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 36u)));
    set32(c.r[2], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 16u);  if (t) { goto L_001702A4; } }
    st16((c.r[19].w[0] + 40u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 1;
L_001702A4:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_001702A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001702B0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_001B(c, 460u, depth + 1u); else { c.pc = 0x0016FC20u; return; } if (c.pc != 0x001702B0u) [[unlikely]] return; }
L_001702B0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001703FC; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 40u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] < 0; set32(c.r[2], 0u + 16u);  if (t) { goto L_001703FC; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001702F4; } }
    set32(c.r[3], ld32((c.r[19].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001702F4; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 156u)));
    c.r[2].d[0] = c.r[2].sd[0] < 20ll ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_001703FC; } }
    st8((c.r[3].w[0] + 132u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 1;
L_001702F4:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 40u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[19].w[0] + 48u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_001703FC; } }
L_00170300:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 40u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[8].d[0]; set32(c.r[2], 0u - 1u);  if (t) { goto L_0017033C; } }
    st16((c.r[19].w[0] + 40u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 44u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017031Cu); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 464u, depth + 1u); else { c.pc = 0x0016FD50u; return; } if (c.pc != 0x0017031Cu) [[unlikely]] return; }
L_0017031C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00170324u); set32(c.r[4], ld32((c.r[19].w[0])));  if (depth < kMaxDepth) unit_001C(c, 247u, depth + 1u); else { c.pc = 0x00172D30u; return; } if (c.pc != 0x00170324u) [[unlikely]] return; }
L_00170324:
    set32(c.r[4], ld32((c.r[19].w[0])));
    set32(c.r[5], 0u + 3u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00170334u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_001C(c, 174u, depth + 1u); else { c.pc = 0x00171C60u; return; } if (c.pc != 0x00170334u) [[unlikely]] return; }
L_00170334:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_00170368; } }
L_0017033C:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 36u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00170350; } }
    st16((c.r[19].w[0] + 40u), static_cast<std::uint16_t>(c.r[7].w[0]));
    c.budget -= 1;
L_00170350:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 36u)));
    set32(c.r[2], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 22u);  if (t) { goto L_00170364; } }
    st16((c.r[19].w[0] + 40u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 1;
L_00170364:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_00170368:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00170370u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_001B(c, 460u, depth + 1u); else { c.pc = 0x0016FC20u; return; } if (c.pc != 0x00170370u) [[unlikely]] return; }
L_00170370:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001703FC; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 40u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_001703FC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[19].w[0] + 48u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_001703FC; } }
L_0017038C:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00170398u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_001B(c, 460u, depth + 1u); else { c.pc = 0x0016FC20u; return; } if (c.pc != 0x00170398u) [[unlikely]] return; }
L_00170398:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001703FC; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[19].w[0] + 48u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_001703FC; } }
L_001703AC:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001703B8u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_001B(c, 460u, depth + 1u); else { c.pc = 0x0016FC20u; return; } if (c.pc != 0x001703B8u) [[unlikely]] return; }
L_001703B8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001703FC; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 46u)));
    set32(c.r[2], 0u + 23u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u - 3u);  if (t) { goto L_001703F8; } }
    set32(c.r[2], 0u + 16u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[17], 0u + 3u);  if (t) { goto L_001703FC; } }
    c.r[20].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 44u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001703E8u); set32(c.r[17], 0u + 2u);  if (depth < kMaxDepth) unit_000B(c, 79u, depth + 1u); else { c.pc = 0x0012CB20u; return; } if (c.pc != 0x001703E8u) [[unlikely]] return; }
L_001703E8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00020000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[1].w[0] + 17276u), c.r[20].w[0]);  if (t) { goto L_001703FC; } }
L_001703F8:
    st16((c.r[19].w[0] + 48u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 1;
L_001703FC:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00170414; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00170410u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_001C(c, 73u, depth + 1u); else { c.pc = 0x00170DD0u; return; } if (c.pc != 0x00170410u) [[unlikely]] return; }
L_00170410:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00170414:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_00170440:
    set32(c.r[29], c.r[29].w[0] - 96u);
    set32(c.r[3], 0u - 2u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[17], 0u + 1u);
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 46u)));
    set32(c.r[18], ld32((c.r[4].w[0] + 1080u)));
    c.budget -= 15;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_00170890; } }
    set32(c.r[2], 0u + 16u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[2].d[0];  if (t) { goto L_001707E0; } }
    set32(c.r[2], 0u + 13u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[2].d[0];  if (t) { goto L_00170710; } }
    set32(c.r[2], 0u + 19u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[2].d[0]; c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_001706F8; } }
    set32(c.r[2], 0u + 18u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[2].d[0];  if (t) { goto L_001706F4; } }
    set32(c.r[2], 0u + 17u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[2].d[0];  if (t) { goto L_001706F4; } }
    set32(c.r[2], 0u + 26u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[2].d[0];  if (t) { goto L_001706F4; } }
    set32(c.r[4], 0u + 24u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[4].d[0];  if (t) { goto L_001706F4; } }
    set32(c.r[3], 0u + 11u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_0017061C; } }
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[2].d[0];  if (t) { goto L_001705F4; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull; c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_00170578; } }
    set32(c.r[2], 0u + 5u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[2].d[0]; c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_0017052C; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[2].d[0];  if (t) { goto L_00170528; } }
    set32(c.r[2], 0u - 3u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[2].d[0];  if (t) { goto L_0017051C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], 0u + 3u);  if (t) { goto L_00170890; } }
L_0017051C:
    st16((c.r[19].w[0] + 48u), static_cast<std::uint16_t>(0u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[19].w[0] + 33u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00170890; } }
L_00170528:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_0017052C:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00170538u); set32(c.r[16], 0u + 1u);  if (depth < kMaxDepth) unit_001B(c, 460u, depth + 1u); else { c.pc = 0x0016FC20u; return; } if (c.pc != 0x00170538u) [[unlikely]] return; }
L_00170538:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00170890; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 38u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00170558; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[19].w[0] + 48u), static_cast<std::uint16_t>(0u));  if (t) { goto L_00170890; } }
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_00170558:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00170890; } }
    set32(c.r[3], 0u + 13u);
    set32(c.r[2], 0u - 2u);
    st16((c.r[19].w[0] + 48u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st16((c.r[19].w[0] + 40u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00170890; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_00170578:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00170580u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_001B(c, 460u, depth + 1u); else { c.pc = 0x0016FC20u; return; } if (c.pc != 0x00170580u) [[unlikely]] return; }
L_00170580:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00170890; } }
    c.r[2].d[0] = ld8((c.r[19].w[0] + 34u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0017059C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], 0u + 4u);  if (t) { goto L_00170890; } }
L_0017059C:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 38u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001705B4; } }
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00170890; } }
L_001705B4:
    st16((c.r[19].w[0] + 44u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 44u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001705C8u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_001B(c, 464u, depth + 1u); else { c.pc = 0x0016FD50u; return; } if (c.pc != 0x001705C8u) [[unlikely]] return; }
L_001705C8:
    set32(c.r[4], ld32((c.r[19].w[0])));
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001705D8u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_001C(c, 174u, depth + 1u); else { c.pc = 0x00171C60u; return; } if (c.pc != 0x001705D8u) [[unlikely]] return; }
L_001705D8:
    set32(c.r[2], 0u - 1u);
    st16((c.r[19].w[0] + 48u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 44u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001705ECu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 468u, depth + 1u); else { c.pc = 0x0016FDB0u; return; } if (c.pc != 0x001705ECu) [[unlikely]] return; }
L_001705EC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00170890; } }
L_001705F4:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[17].d[0];  if (t) { goto L_00170890; } }
    set32(c.r[2], 0u + 5u);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] != c.r[2].d[0];  if (t) { goto L_00170614; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[19].w[0] + 48u), static_cast<std::uint16_t>(c.r[4].w[0]));  if (t) { goto L_00170890; } }
L_00170614:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[19].w[0] + 48u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_00170890; } }
L_0017061C:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 50u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00170890; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00170634u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 460u, depth + 1u); else { c.pc = 0x0016FC20u; return; } if (c.pc != 0x00170634u) [[unlikely]] return; }
L_00170634:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001706B0; } }
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 36u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[2], 0u + 3u);  if (t) { goto L_00170688; } }
    set32(c.r[2], 0u + 7u);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 10u);  if (t) { goto L_00170664; } }
    set32(c.r[2], 0u + 24u);
    st16((c.r[19].w[0] + 48u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 10u);
    c.budget -= 3;
L_00170664:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 26u);  if (t) { goto L_0017067C; } }
    set32(c.r[2], 0u + 6u);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] != c.r[2].d[0];  if (t) { goto L_00170890; } }
    set32(c.r[2], 0u + 26u);
    c.budget -= 1;
L_0017067C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[19].w[0] + 48u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00170890; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 1;
L_00170688:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { goto L_00170890; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 42u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 5u);  if (t) { goto L_001706A8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[19].w[0] + 48u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_00170890; } }
    set32(c.r[2], 0u + 5u);
    c.budget -= 1;
L_001706A8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[19].w[0] + 48u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00170890; } }
L_001706B0:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 36u)));
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00170890; } }
    set32(c.r[4], ld32((c.r[19].w[0])));
    set32(c.r[5], 0u + 2u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001706D0u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_001C(c, 174u, depth + 1u); else { c.pc = 0x00171C60u; return; } if (c.pc != 0x001706D0u) [[unlikely]] return; }
L_001706D0:
    set32(c.r[5], ld32((c.r[19].w[0])));
    c.r[2].d[0] = 0ull & 1ull;
    set32(c.r[3], c.r[2].w[0] << 4);
    set32(c.r[2], 0u - 17u);
    c.r[4].d[0] = ld8((c.r[5].w[0] + 1068u));
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st8((c.r[5].w[0] + 1068u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00170890; } }
L_001706F4:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_001706F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00170700u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_001B(c, 460u, depth + 1u); else { c.pc = 0x0016FC20u; return; } if (c.pc != 0x00170700u) [[unlikely]] return; }
L_00170700:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00170890; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[19].w[0] + 48u), static_cast<std::uint16_t>(0u));  if (t) { goto L_00170890; } }
L_00170710:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 40u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_0017073C; } }
    set32(c.r[5], 0u + 5u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00170728u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_001C(c, 174u, depth + 1u); else { c.pc = 0x00171C60u; return; } if (c.pc != 0x00170728u) [[unlikely]] return; }
L_00170728:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_00170780; } }
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[19].w[0] + 40u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_0017077C; } }
L_0017073C:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 36u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00170764; } }
    set32(c.r[3], 0u + 17u);
    set32(c.r[2], 0u + 5u);
    c.budget -= 4;
    { const bool t = c.r[18].d[0] != c.r[2].d[0]; st16((c.r[19].w[0] + 40u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_00170764; } }
    set32(c.r[2], 0u + 18u);
    st16((c.r[19].w[0] + 40u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 2;
L_00170764:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 36u)));
    set32(c.r[2], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0017077C; } }
    set32(c.r[2], 0u + 16u);
    st16((c.r[19].w[0] + 40u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 2;
L_0017077C:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_00170780:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00170788u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_001B(c, 460u, depth + 1u); else { c.pc = 0x0016FC20u; return; } if (c.pc != 0x00170788u) [[unlikely]] return; }
L_00170788:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00170890; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 40u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] < 0;  if (t) { goto L_00170890; } }
    set32(c.r[2], 0u + 16u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001707D4; } }
    set32(c.r[3], ld32((c.r[19].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001707D4; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 156u)));
    c.r[2].d[0] = c.r[2].sd[0] < 20ll ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00170890; } }
    set32(c.r[2], 0u + 1u);
    st8((c.r[3].w[0] + 132u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_001707D4:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 40u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[19].w[0] + 48u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00170890; } }
L_001707E0:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001707ECu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 460u, depth + 1u); else { c.pc = 0x0016FC20u; return; } if (c.pc != 0x001707ECu) [[unlikely]] return; }
L_001707EC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00170890; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 42u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0017081C; } }
    c.r[20].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 44u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017080Cu); set32(c.r[17], 0u + 2u);  if (depth < kMaxDepth) unit_000B(c, 79u, depth + 1u); else { c.pc = 0x0012CB20u; return; } if (c.pc != 0x0017080Cu) [[unlikely]] return; }
L_0017080C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00020000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[1].w[0] + 17276u), c.r[20].w[0]);  if (t) { goto L_00170890; } }
L_0017081C:
    set32(c.r[4], ld32((c.r[19].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_0017086C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00170830u); set32(c.r[4], 0u + 48u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00170830u) [[unlikely]] return; }
L_00170830:
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[20].d[0] == 0ull;  if (t) { goto L_00170864; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00170844u); set32(c.r[4], ld32((c.r[19].w[0])));  if (depth < kMaxDepth) unit_001C(c, 250u, depth + 1u); else { c.pc = 0x00172DB0u; return; } if (c.pc != 0x00170844u) [[unlikely]] return; }
L_00170844:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 42u)));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[8].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 44u)));
    set32(c.r[6], c.r[2].w[0] + 32u);
    set32(c.r[7], ld32((c.r[19].w[0] + 52u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00170860u); set32(c.r[5], c.r[3].w[0] - 3u);  if (depth < kMaxDepth) unit_00A8(c, 474u, depth + 1u); else { c.pc = 0x003A3610u; return; } if (c.pc != 0x00170860u) [[unlikely]] return; }
L_00170860:
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00170864:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 4u), c.r[20].w[0]);  if (t) { goto L_00170890; } }
L_0017086C:
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 44u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0017087Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0017087Cu) [[unlikely]] return; }
L_0017087C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00170890; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], 0u + 2u);  if (t) { goto L_00170890; } }
    set32(c.r[17], 0u + 3u);
    c.budget -= 1;
L_00170890:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_001708A8; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001708A4u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_001C(c, 73u, depth + 1u); else { c.pc = 0x00170DD0u; return; } if (c.pc != 0x001708A4u) [[unlikely]] return; }
L_001708A4:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001708A8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_001708D0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    set32(c.r[8], 0u - 2u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[17], 0u + 1u);
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.r[9].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 46u)));
    set32(c.r[18], ld32((c.r[2].w[0] + 1080u)));
    c.budget -= 15;
    { const bool t = c.r[9].d[0] == c.r[8].d[0]; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_00170D98; } }
    set32(c.r[3], 0u + 22u);
    c.budget -= 3;
    { const bool t = c.r[9].d[0] == c.r[3].d[0]; c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00170D80; } }
    set32(c.r[3], 0u + 20u);
    c.budget -= 3;
    { const bool t = c.r[9].d[0] == c.r[3].d[0]; c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00170D54; } }
    set32(c.r[7], 0u + 23u);
    c.budget -= 3;
    { const bool t = c.r[9].d[0] == c.r[7].d[0]; set32(c.r[6], 0u + 21u);  if (t) { goto L_00170D30; } }
    c.budget -= 2;
    { const bool t = c.r[9].d[0] == c.r[6].d[0]; set32(c.r[3], 0u + 25u);  if (t) { goto L_00170D30; } }
    c.budget -= 2;
    { const bool t = c.r[9].d[0] == c.r[3].d[0]; set32(c.r[5], 0u + 24u);  if (t) { goto L_00170D30; } }
    c.budget -= 2;
    { const bool t = c.r[9].d[0] == c.r[5].d[0]; set32(c.r[3], 0u + 15u);  if (t) { goto L_00170D30; } }
    c.budget -= 2;
    { const bool t = c.r[9].d[0] == c.r[3].d[0];  if (t) { goto L_00170CB8; } }
    set32(c.r[3], 0u + 14u);
    c.budget -= 3;
    { const bool t = c.r[9].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 11u);  if (t) { goto L_00170BE8; } }
    c.budget -= 2;
    { const bool t = c.r[9].d[0] == c.r[3].d[0]; set32(c.r[2], 0u + 6u);  if (t) { goto L_00170B40; } }
    c.budget -= 2;
    { const bool t = c.r[9].d[0] == c.r[2].d[0];  if (t) { goto L_00170B04; } }
    set32(c.r[2], 0u + 7u);
    c.budget -= 3;
    { const bool t = c.r[9].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 4u);  if (t) { goto L_00170AB4; } }
    c.budget -= 2;
    { const bool t = c.r[9].d[0] == c.r[2].d[0];  if (t) { goto L_00170AB4; } }
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[9].d[0] == c.r[2].d[0];  if (t) { goto L_00170A90; } }
    c.budget -= 2;
    { const bool t = c.r[9].d[0] == c.r[17].d[0]; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_00170A18; } }
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[9].d[0] == c.r[3].d[0]; set32(c.r[2], 0u - 3u);  if (t) { goto L_001709C0; } }
    c.budget -= 2;
    { const bool t = c.r[9].d[0] == c.r[2].d[0];  if (t) { goto L_001709B0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = c.r[3].d[0] + 0ull;  if (t) { goto L_00170D98; } }
L_001709B0:
    st16((c.r[19].w[0] + 48u), static_cast<std::uint16_t>(c.r[17].w[0]));
    st16((c.r[19].w[0] + 40u), static_cast<std::uint16_t>(c.r[17].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[19].w[0] + 33u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00170D98; } }
L_001709C0:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 40u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] >= 0; c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_001709D0; } }
    c.r[16].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001709D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001709D8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_001B(c, 460u, depth + 1u); else { c.pc = 0x0016FC20u; return; } if (c.pc != 0x001709D8u) [[unlikely]] return; }
L_001709D8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00170D98; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 38u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_001709F4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], 0u + 4u);  if (t) { goto L_00170D98; } }
L_001709F4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_00170D98; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 40u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0; set32(c.r[2], 0u + 4u);  if (t) { goto L_00170A10; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[19].w[0] + 48u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_00170D98; } }
L_00170A10:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 28u), c.r[2].w[0]);  if (t) { goto L_00170D98; } }
L_00170A18:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00170A20u);  if (depth < kMaxDepth) unit_001B(c, 460u, depth + 1u); else { c.pc = 0x0016FC20u; return; } if (c.pc != 0x00170A20u) [[unlikely]] return; }
L_00170A20:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00170D98; } }
    c.r[2].d[0] = ld8((c.r[19].w[0] + 34u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00170A3C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], 0u + 4u);  if (t) { goto L_00170D98; } }
L_00170A3C:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 38u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00170A50; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00170D98; } }
L_00170A50:
    st16((c.r[19].w[0] + 44u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 44u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00170A64u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_001B(c, 464u, depth + 1u); else { c.pc = 0x0016FD50u; return; } if (c.pc != 0x00170A64u) [[unlikely]] return; }
L_00170A64:
    set32(c.r[4], ld32((c.r[19].w[0])));
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00170A74u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_001C(c, 174u, depth + 1u); else { c.pc = 0x00171C60u; return; } if (c.pc != 0x00170A74u) [[unlikely]] return; }
L_00170A74:
    set32(c.r[2], 0u - 1u);
    st16((c.r[19].w[0] + 48u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 44u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00170A88u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 468u, depth + 1u); else { c.pc = 0x0016FDB0u; return; } if (c.pc != 0x00170A88u) [[unlikely]] return; }
L_00170A88:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00170D98; } }
L_00170A90:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[17].d[0]; set32(c.r[2], 0u + 5u);  if (t) { goto L_00170D98; } }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != c.r[2].d[0];  if (t) { goto L_00170AAC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[19].w[0] + 48u), static_cast<std::uint16_t>(c.r[5].w[0]));  if (t) { goto L_00170D98; } }
L_00170AAC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[19].w[0] + 48u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_00170D98; } }
L_00170AB4:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00170AC4u); set32(c.r[16], 0u + 1u);  if (depth < kMaxDepth) unit_001B(c, 460u, depth + 1u); else { c.pc = 0x0016FC20u; return; } if (c.pc != 0x00170AC4u) [[unlikely]] return; }
L_00170AC4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00170D98; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 38u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00170ADC; } }
    st16((c.r[19].w[0] + 48u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 1;
L_00170ADC:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 38u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00170D98; } }
    set32(c.r[4], ld32((c.r[19].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00170AF8u); set32(c.r[5], ld32((c.r[4].w[0] + 1128u)));  if (depth < kMaxDepth) unit_001F(c, 371u, depth + 1u); else { c.pc = 0x0017F180u; return; } if (c.pc != 0x00170AF8u) [[unlikely]] return; }
L_00170AF8:
    set32(c.r[2], 0u + 4u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 28u), c.r[2].w[0]);  if (t) { goto L_00170D98; } }
L_00170B04:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00170B10u); c.r[16].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 460u, depth + 1u); else { c.pc = 0x0016FC20u; return; } if (c.pc != 0x00170B10u) [[unlikely]] return; }
L_00170B10:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00170D98; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 38u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00170B28; } }
    st16((c.r[19].w[0] + 48u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 1;
L_00170B28:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 38u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 3u);  if (t) { goto L_00170D98; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 28u), c.r[2].w[0]);  if (t) { goto L_00170D98; } }
L_00170B40:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 50u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00170D98; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00170B54u);  if (depth < kMaxDepth) unit_001B(c, 460u, depth + 1u); else { c.pc = 0x0016FC20u; return; } if (c.pc != 0x00170B54u) [[unlikely]] return; }
L_00170B54:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00170BC0; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 36u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[3], 0u + 24u);  if (t) { goto L_00170BA8; } }
    set32(c.r[2], 0u + 6u);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] != c.r[2].d[0]; st16((c.r[19].w[0] + 48u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_00170B80; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[19].w[0] + 48u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00170BA8; } }
L_00170B80:
    set32(c.r[2], 0u + 10u);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 8u);  if (t) { goto L_00170B98; } }
    set32(c.r[2], 0u + 7u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[19].w[0] + 48u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00170BA8; } }
L_00170B98:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != c.r[2].d[0];  if (t) { goto L_00170BA8; } }
    set32(c.r[2], 0u + 25u);
    st16((c.r[19].w[0] + 48u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 2;
L_00170BA8:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 36u)));
    set32(c.r[2], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 4u);  if (t) { goto L_00170D98; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[19].w[0] + 48u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00170D98; } }
L_00170BC0:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 36u)));
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00170D98; } }
    set32(c.r[4], ld32((c.r[19].w[0])));
    set32(c.r[5], 0u + 2u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00170BE0u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_001C(c, 174u, depth + 1u); else { c.pc = 0x00171C60u; return; } if (c.pc != 0x00170BE0u) [[unlikely]] return; }
L_00170BE0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00170D98; } }
L_00170BE8:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 40u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[8].d[0];  if (t) { goto L_00170C34; } }
    c.r[7].d[0] = ld8((c.r[2].w[0] + 1068u));
    c.r[3].d[0] = c.r[17].d[0] & 1ull;
    set32(c.r[4], c.r[3].w[0] << 3);
    set32(c.r[5], 0u + 4u);
    set32(c.r[3], 0u - 9u);
    c.r[3].d[0] = c.r[7].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st8((c.r[2].w[0] + 1068u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[4], ld32((c.r[19].w[0])));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00170C20u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_001C(c, 174u, depth + 1u); else { c.pc = 0x00171C60u; return; } if (c.pc != 0x00170C20u) [[unlikely]] return; }
L_00170C20:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_00170C60; } }
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[19].w[0] + 40u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00170C5C; } }
L_00170C34:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 36u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00170C48; } }
    st16((c.r[19].w[0] + 40u), static_cast<std::uint16_t>(c.r[6].w[0]));
    c.budget -= 1;
L_00170C48:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 36u)));
    set32(c.r[2], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 20u);  if (t) { goto L_00170C5C; } }
    st16((c.r[19].w[0] + 40u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 1;
L_00170C5C:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_00170C60:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00170C68u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_001B(c, 460u, depth + 1u); else { c.pc = 0x0016FC20u; return; } if (c.pc != 0x00170C68u) [[unlikely]] return; }
L_00170C68:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00170D98; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 40u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] < 0; set32(c.r[2], 0u + 20u);  if (t) { goto L_00170D98; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00170CAC; } }
    set32(c.r[3], ld32((c.r[19].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00170CAC; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 156u)));
    c.r[2].d[0] = c.r[2].sd[0] < 20ll ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00170D98; } }
    st8((c.r[3].w[0] + 132u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 1;
L_00170CAC:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 40u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[19].w[0] + 48u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00170D98; } }
L_00170CB8:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 40u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[8].d[0]; set32(c.r[2], 0u - 1u);  if (t) { goto L_00170CE0; } }
    set32(c.r[5], 0u + 3u);
    st16((c.r[19].w[0] + 40u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[4], ld32((c.r[19].w[0])));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00170CD8u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_001C(c, 174u, depth + 1u); else { c.pc = 0x00171C60u; return; } if (c.pc != 0x00170CD8u) [[unlikely]] return; }
L_00170CD8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_00170D0C; } }
L_00170CE0:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 36u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00170CF4; } }
    st16((c.r[19].w[0] + 40u), static_cast<std::uint16_t>(c.r[7].w[0]));
    c.budget -= 1;
L_00170CF4:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 36u)));
    set32(c.r[2], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 22u);  if (t) { goto L_00170D08; } }
    st16((c.r[19].w[0] + 40u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 1;
L_00170D08:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_00170D0C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00170D14u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_001B(c, 460u, depth + 1u); else { c.pc = 0x0016FC20u; return; } if (c.pc != 0x00170D14u) [[unlikely]] return; }
L_00170D14:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00170D98; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 40u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_00170D98; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[19].w[0] + 48u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00170D98; } }
L_00170D30:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00170D3Cu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_001B(c, 460u, depth + 1u); else { c.pc = 0x0016FC20u; return; } if (c.pc != 0x00170D3Cu) [[unlikely]] return; }
L_00170D3C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00170D98; } }
    set32(c.r[2], 0u + 1u);
    st16((c.r[19].w[0] + 48u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[19].w[0] + 40u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00170D98; } }
L_00170D54:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00170D5Cu);  if (depth < kMaxDepth) unit_001B(c, 460u, depth + 1u); else { c.pc = 0x0016FC20u; return; } if (c.pc != 0x00170D5Cu) [[unlikely]] return; }
L_00170D5C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00170D98; } }
    c.r[20].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 44u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00170D70u); set32(c.r[17], 0u + 2u);  if (depth < kMaxDepth) unit_000B(c, 79u, depth + 1u); else { c.pc = 0x0012CB20u; return; } if (c.pc != 0x00170D70u) [[unlikely]] return; }
L_00170D70:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00020000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[1].w[0] + 17276u), c.r[20].w[0]);  if (t) { goto L_00170D98; } }
L_00170D80:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00170D88u); c.r[16].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 460u, depth + 1u); else { c.pc = 0x0016FC20u; return; } if (c.pc != 0x00170D88u) [[unlikely]] return; }
L_00170D88:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00170D98; } }
    set32(c.r[2], 0u + 4u);
    st32((c.r[19].w[0] + 28u), c.r[2].w[0]);
    c.budget -= 2;
L_00170D98:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00170DB0; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00170DACu); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_001C(c, 73u, depth + 1u); else { c.pc = 0x00170DD0u; return; } if (c.pc != 0x00170DACu) [[unlikely]] return; }
L_00170DAC:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00170DB0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_00170DD0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[3], 0u + 2u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 42u)));
    c.budget -= 9;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00170EB8; } }
    set32(c.r[4], ld32((c.r[17].w[0])));
    set32(c.r[3], ld32((c.r[4].w[0] + 1072u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00170F78; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 36u)));
    c.r[1].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[5], 0u + 1u);  if (t) { goto L_00170E54; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00170E1Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_001C(c, 174u, depth + 1u); else { c.pc = 0x00171C60u; return; } if (c.pc != 0x00170E1Cu) [[unlikely]] return; }
L_00170E1C:
    set32(c.r[4], 0u + 5u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[4].d[0];  if (t) { goto L_00170E44; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 44u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 20u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[4].d[0]; set32(c.r[3], 0u + 8u);  if (t) { goto L_00170E44; } }
    st16((c.r[17].w[0] + 48u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 1;
L_00170E44:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 44u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    st32((c.r[3].w[0] + 20u), c.r[16].w[0]);
    c.budget -= 4;
L_00170E54:
    set32(c.r[3], ld32((c.r[17].w[0] + 52u)));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);  if (t) { goto L_00170E74; } }
    c.r[3].d[0] = ld8((c.r[1].w[0] - 1456u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u + 8u);  if (t) { goto L_00170E74; } }
    st16((c.r[17].w[0] + 48u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 1;
L_00170E74:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 48u)));
    set32(c.r[3], 0u + 8u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00170EB0; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 28u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] <= 0; set32(c.r[4], 0u - 2u);  if (t) { goto L_00170EA0; } }
    set32(c.r[3], 0u + 15u);
    st16((c.r[17].w[0] + 40u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 48u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_00170EB0; } }
L_00170EA0:
    set32(c.r[4], ld32((c.r[17].w[0])));
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00170EB0u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_001C(c, 174u, depth + 1u); else { c.pc = 0x00171C60u; return; } if (c.pc != 0x00170EB0u) [[unlikely]] return; }
L_00170EB0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 28u), 0u);  if (t) { goto L_00170F78; } }
L_00170EB8:
    set32(c.r[3], ld32((c.r[17].w[0])));
    set32(c.r[3], ld32((c.r[3].w[0] + 1072u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u + 5u);  if (t) { goto L_00170F78; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != c.r[3].d[0];  if (t) { goto L_00170ED8; } }
    set32(c.r[3], 0u + 24u);
    st16((c.r[17].w[0] + 48u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 2;
L_00170ED8:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 42u)));
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[5].d[0];  if (t) { goto L_00170F54; } }
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 48u)));
    set32(c.r[3], 0u + 24u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00170F4C; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 28u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] <= 0; set32(c.r[4], 0u - 2u);  if (t) { goto L_00170F40; } }
    set32(c.r[3], 0u + 4u);
    st16((c.r[17].w[0] + 40u), static_cast<std::uint16_t>(c.r[4].w[0]));
    set32(c.r[4], ld32((c.r[17].w[0] + 28u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 3u);  if (t) { goto L_00170F2C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00170F20u); set32(c.r[4], ld32((c.r[17].w[0])));  if (depth < kMaxDepth) unit_001C(c, 247u, depth + 1u); else { c.pc = 0x00172D30u; return; } if (c.pc != 0x00170F20u) [[unlikely]] return; }
L_00170F20:
    set32(c.r[3], 0u + 14u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 48u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_00170F4C; } }
L_00170F2C:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00170F4C; } }
    set32(c.r[3], 0u + 15u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 48u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_00170F4C; } }
L_00170F40:
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00170F4Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_001C(c, 174u, depth + 1u); else { c.pc = 0x00171C60u; return; } if (c.pc != 0x00170F4Cu) [[unlikely]] return; }
L_00170F4C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 28u), 0u);  if (t) { goto L_00170F78; } }
L_00170F54:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 48u)));
    set32(c.r[3], 0u + 24u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00170F78; } }
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00170F70u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_001C(c, 174u, depth + 1u); else { c.pc = 0x00171C60u; return; } if (c.pc != 0x00170F70u) [[unlikely]] return; }
L_00170F70:
    set32(c.r[3], 0u - 2u);
    st16((c.r[17].w[0] + 40u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 2;
L_00170F78:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00170F90:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00410000u);
    c.r[3].d[0] = c.r[4].d[0] & 1ull;
    set32(c.r[2], 0u + 3u);
    set32(c.r[5], c.r[5].w[0] + 1888u);
    c.budget -= 6;
    { const bool t = c.r[4].d[0] != c.r[2].d[0]; set32(c.r[3], c.r[3].w[0] << 1);  if (t) { goto L_00170FB4; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00410000u);
    c.r[3].d[0] = 0ull + 0ull;
    set32(c.r[5], c.r[5].w[0] + 1904u);
    c.budget -= 3;
L_00170FB4:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[2].d[0]; set32(c.r[2], c.r[3].w[0] << 2);  if (t) { goto L_00170FD0; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00410000u);
    c.r[3].d[0] = 0ull + 0ull;
    set32(c.r[5], c.r[5].w[0] + 1912u);
    set32(c.r[2], c.r[3].w[0] << 2);
    c.budget -= 4;
L_00170FD0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[5].w[0] + c.r[2].w[0]);  c.pc = t; return; }
L_00170FE0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[4], 0u + 2u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00170FF8u); c.r[16].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 69u, depth + 1u); else { c.pc = 0x0012C9C0u; return; } if (c.pc != 0x00170FF8u) [[unlikely]] return; }
L_00170FF8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u + 3u);  if (t) { goto L_00171004; } }
    set32(c.r[16], 0u + 1u);
    c.budget -= 1;
L_00171004:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017100Cu);  if (depth < kMaxDepth) unit_000B(c, 69u, depth + 1u); else { c.pc = 0x0012C9C0u; return; } if (c.pc != 0x0017100Cu) [[unlikely]] return; }
L_0017100C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00171018; } }
    c.r[16].d[0] = c.r[16].d[0] | 2ull;
    c.budget -= 1;
L_00171018:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00171030:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 20u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0016F320u | kUnwind; return; } [[clang::musttail]] return unit_001B(c, 400u, depth); }
L_00171040:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 20u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0016F180u | kUnwind; return; } [[clang::musttail]] return unit_001B(c, 389u, depth); }
L_00171050:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[8].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[9].d[0] + 0ull;
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00171084u); c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 256u, depth + 1u); else { c.pc = 0x0013E440u; return; } if (c.pc != 0x00171084u) [[unlikely]] return; }
    goto L_00171084;
L_00171080:
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 1;
L_00171084:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00171090u); set32(c.r[4], c.r[20].w[0] + 8u);  if (depth < kMaxDepth) unit_000F(c, 264u, depth + 1u); else { c.pc = 0x0013E560u; return; } if (c.pc != 0x00171090u) [[unlikely]] return; }
L_00171090:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] - 15920u);
    set32(c.r[2], c.r[2].w[0] - 15904u);
    st32((c.r[20].w[0]), c.r[3].w[0]);
    set32(c.r[4], 0u + 21u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001710B0u); st32((c.r[20].w[0] + 8u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x001710B0u) [[unlikely]] return; }
L_001710B0:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001710BCu); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x001710BCu) [[unlikely]] return; }
L_001710BC:
    ld128((c.r[2].w[0]) & ~15u, c.r[3]);
    c.budget -= 1;
L_001710C0:
    set32(c.r[4], c.r[20].w[0] + 96u);
    set32(c.r[5], 0u + 4u);
    st128((c.r[20].w[0] + 32u) & ~15u, c.r[3]);
    set32(c.r[2], 0u + 45u);
    ld128((c.r[16].w[0]) & ~15u, c.r[3]);
    st128((c.r[20].w[0] + 48u) & ~15u, c.r[3]);
    st32((c.r[20].w[0] + 84u), c.r[2].w[0]);
    st32((c.r[20].w[0] + 80u), 0u);
    st32((c.r[20].w[0] + 92u), 0u);
    st8((c.r[20].w[0] + 88u), static_cast<std::uint8_t>(0u));
    ld128((c.r[20].w[0] + 32u) & ~15u, c.r[2]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001710F4u); st128((c.r[20].w[0] + 64u) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_0049(c, 271u, depth + 1u); else { c.pc = 0x002275A0u; return; } if (c.pc != 0x001710F4u) [[unlikely]] return; }
L_001710F4:
    st32((c.r[20].w[0] + 20u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00410000u);
    st8((c.r[20].w[0] + 132u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
L_00171100:
    set32(c.r[2], c.r[2].w[0] + 1920u);
    st32((c.r[20].w[0] + 136u), 0u);
    set32(c.r[5], c.r[29].w[0] + 96u);
    st32((c.r[20].w[0] + 140u), c.r[18].w[0]);
    set32(c.r[4], c.r[20].w[0] + 96u);
    st32((c.r[20].w[0] + 144u), c.r[17].w[0]);
    st32((c.r[20].w[0] + 148u), 0u);
    st32((c.r[20].w[0] + 152u), c.r[19].w[0]);
    st32((c.r[20].w[0] + 156u), 0u);
    ld128((c.r[2].w[0]) & ~15u, c.r[3]);
    c.r[2].d[0] = ld64((c.r[2].w[0] + 16u));
    st128((c.r[5].w[0]) & ~15u, c.r[3]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00171138u); st64((c.r[5].w[0] + 16u), c.r[2].d[0]);  if (depth < kMaxDepth) unit_0049(c, 280u, depth + 1u); else { c.pc = 0x002276C0u; return; } if (c.pc != 0x00171138u) [[unlikely]] return; }
L_00171138:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00171140u); set32(c.r[4], 0u + 256u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00171140u) [[unlikely]] return; }
L_00171140:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00171150; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00171150u);  if (depth < kMaxDepth) unit_0017(c, 177u, depth + 1u); else { c.pc = 0x0015E070u; return; } if (c.pc != 0x00171150u) [[unlikely]] return; }
L_00171150:
    st32((c.r[20].w[0] + 24u), c.r[2].w[0]);
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[17].w[0] + 3u);
    set32(c.r[3], ld32((c.r[20].w[0] + 24u)));
    c.f[0] = c.r[2].w[0];
    set32(c.r[2], ld32((c.r[20].w[0] + 140u)));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.f[1] = c.r[2].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    st32((c.r[3].w[0] + 160u), c.f[1]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00171188u); st32((c.r[3].w[0] + 164u), c.f[0]);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x00171188u) [[unlikely]] return; }
L_00171188:
    ld128((c.r[2].w[0]) & ~15u, c.r[3]);
    set32(c.r[4], 0u + 256u);
    set32(c.r[2], ld32((c.r[20].w[0] + 24u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017119Cu); st128((c.r[2].w[0] + 48u) & ~15u, c.r[3]);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0017119Cu) [[unlikely]] return; }
L_0017119C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001711AC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001711ACu);  if (depth < kMaxDepth) unit_0017(c, 177u, depth + 1u); else { c.pc = 0x0015E070u; return; } if (c.pc != 0x001711ACu) [[unlikely]] return; }
L_001711AC:
    c.f[0] = c.r[17].w[0];
    st32((c.r[20].w[0] + 28u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 28u)));
    set32(c.r[4], 0u + 19u);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[2].w[0] + 160u), 0u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001711CCu); st32((c.r[2].w[0] + 164u), c.f[0]);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x001711CCu) [[unlikely]] return; }
L_001711CC:
    ld128((c.r[2].w[0]) & ~15u, c.r[4]);
    set32(c.r[3], ld32((c.r[20].w[0] + 28u)));
    c.r[2].d[0] = c.r[20].d[0] + 0ull;
    st128((c.r[3].w[0] + 48u) & ~15u, c.r[4]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_00171200:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001712C0; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] - 15920u);
    set32(c.r[2], c.r[2].w[0] - 15904u);
    st32((c.r[17].w[0]), c.r[3].w[0]);
    st32((c.r[17].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 28u)));
    c.budget -= 9;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00171258; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00171258; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00171258u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00171258u) [[unlikely]] return; }
L_00171258:
    st32((c.r[17].w[0] + 28u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 24u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00171280; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00171280; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00171280u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00171280u) [[unlikely]] return; }
L_00171280:
    set32(c.r[4], c.r[17].w[0] + 96u);
    set32(c.r[5], 0u - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00171290u); st32((c.r[17].w[0] + 24u), 0u);  if (depth < kMaxDepth) unit_0049(c, 274u, depth + 1u); else { c.pc = 0x002275F0u; return; } if (c.pc != 0x00171290u) [[unlikely]] return; }
L_00171290:
    set32(c.r[4], c.r[17].w[0] + 8u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017129Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000F(c, 266u, depth + 1u); else { c.pc = 0x0013E5B0u; return; } if (c.pc != 0x0017129Cu) [[unlikely]] return; }
L_0017129C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001712A8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E490u; return; } if (c.pc != 0x001712A8u) [[unlikely]] return; }
L_001712A8:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_001712C4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001712C0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x001712C0u) [[unlikely]] return; }
L_001712C0:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001712C4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001712E0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].d[0] = ld8((c.r[4].w[0] + 88u));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00171324; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 92u)));
    set32(c.r[3], c.r[2].w[0] - 1u);
    st32((c.r[16].w[0] + 92u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 80u)));
    set32(c.r[2], 0u - c.r[2].w[0]);
    c.r[1].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[4], c.r[16].w[0] + 32u);  if (t) { goto L_00171358; } }
    st32((c.r[16].w[0] + 92u), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 88u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00171354; } }
L_00171324:
    set32(c.r[2], ld32((c.r[16].w[0] + 92u)));
    set32(c.r[4], c.r[2].w[0] + 1u);
    st32((c.r[16].w[0] + 92u), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 84u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 80u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.r[1].d[0] = c.r[2].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00171354; } }
    st32((c.r[16].w[0] + 92u), c.r[2].w[0]);
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 88u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
L_00171354:
    set32(c.r[4], c.r[16].w[0] + 32u);
    c.budget -= 1;
L_00171358:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00171360u);  if (depth < kMaxDepth) unit_002A(c, 280u, depth + 1u); else { c.pc = 0x001AB050u; return; } if (c.pc != 0x00171360u) [[unlikely]] return; }
L_00171360:
    c.f[1] = ld32((c.r[16].w[0] + 140u));
    set32(c.r[3], ld32((c.r[16].w[0] + 148u)));
    c.f[0] = ld32((c.r[16].w[0] + 136u));
    c.f[1] = fp::cvt_s_w(c.f[1]);
    set32(c.r[3], c.r[3].w[0] + 4u);
    st32((c.r[16].w[0] + 148u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 140u)));
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[4], c.f[0]);
    c.r[1].d[0] = c.r[3].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 14;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0017139C; } }
    c.r[4].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 1;
L_0017139C:
    set32(c.r[3], ld32((c.r[16].w[0] + 148u)));
    c.r[1].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001713B0; } }
    st32((c.r[16].w[0] + 148u), c.r[4].w[0]);
    c.budget -= 1;
L_001713B0:
    set32(c.r[3], ld32((c.r[16].w[0] + 148u)));
    set32(c.r[3], c.r[3].w[0] - 6u);
    c.budget -= 4;
    { const bool t = c.r[3].sd[0] >= 0;  if (t) { goto L_001713C4; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001713C4:
    c.f[0] = c.r[3].w[0];
    set32(c.r[4], ld32((c.r[16].w[0] + 28u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 144u)));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    set32(c.r[3], c.r[3].w[0] - 6u);
    st32((c.r[4].w[0] + 160u), c.f[0]);
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[4].w[0] + 164u), c.f[0]);
    c.r[3].d[0] = ld8((c.r[16].w[0] + 132u));
    c.budget -= 13;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00171424; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 148u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 140u)));
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00171424; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 156u)));
    c.r[1].d[0] = c.r[3].sd[0] < 20ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00171424; } }
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[16].w[0] + 156u), c.r[3].w[0]);
    c.budget -= 2;
L_00171424:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0017143C:
    c.budget -= 1;
L_00171440:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 132u));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; c.r[18].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00171714; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 20144u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    set32(c.r[3], ld32((c.r[1].w[0] + 1420u)));
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 1));  if (t) { goto L_00171484; } }
    set32(c.r[2], c.r[3].w[0] + 1u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    c.budget -= 2;
L_00171484:
    c.f[0] = c.r[2].w[0];
    set32(c.r[3], ld32((c.r[18].w[0] + 24u)));
    c.f[1] = ld32((c.r[18].w[0] + 136u));
    c.f[4] = fp::cvt_s_w(c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[0] = 0u;
    c.f[2] = ld32((c.r[3].w[0] + 160u));
    c.f[3] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    fpu_div(c, 0u, c.f[2], c.f[3]);
    c.f[0] = fp::sub(c.f[4], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[17], c.f[0]);
    c.budget -= 15;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_00171654; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001714C8u);  if (depth < kMaxDepth) unit_002A(c, 135u, depth + 1u); else { c.pc = 0x001A9560u; return; } if (c.pc != 0x001714C8u) [[unlikely]] return; }
L_001714C8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);  if (t) { goto L_001714E0; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 26392u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[16], ld32((c.r[2].w[0] + 440u)));  if (t) { goto L_001714F8; } }
L_001714E0:
    set32(c.r[4], ld32((c.r[1].w[0] + 25344u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[5], 0u + 3u);  if (t) { goto L_001714F8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001714F4u);  if (depth < kMaxDepth) unit_001A(c, 80u, depth + 1u); else { c.pc = 0x00169010u; return; } if (c.pc != 0x001714F4u) [[unlikely]] return; }
L_001714F4:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001714F8:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; set32(c.r[2], c.r[17].w[0] + 3u);  if (t) { goto L_00171658; } }
    ld128((c.r[18].w[0] + 64u) & ~15u, c.r[3]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st128((c.r[16].w[0] + 48u) & ~15u, c.r[3]);
    c.f[0] = ld32((c.r[1].w[0] + 3744u));
    st32((c.r[16].w[0] + 16u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = ld32((c.r[1].w[0] + 3744u));
    st32((c.r[16].w[0] + 20u), c.f[0]);
    st32((c.r[16].w[0] + 24u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 20u)));
    c.budget -= 13;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00460000u);  if (t) { goto L_00171548; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[2], c.r[2].w[0] + 3704u);
    st32((c.r[16].w[0] + 352u), c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 356u), 0u);  if (t) { goto L_00171554; } }
L_00171548:
    set32(c.r[2], c.r[2].w[0] + 3720u);
    st32((c.r[16].w[0] + 352u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 356u), 0u);
    c.budget -= 3;
L_00171554:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43660000u);
    set32(c.r[25], ld32((c.r[16].w[0] + 176u)));
    c.f[12] = c.r[2].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43980000u);
    c.f[13] = c.r[3].w[0];
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.f[0] = c.r[2].w[0];
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 12;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00171584u); c.f[14] = fp::cvt_s_w(c.f[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00171584u) [[unlikely]] return; }
L_00171584:
    set32(c.r[25], ld32((c.r[16].w[0] + 176u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 60u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00171598u); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00171598u) [[unlikely]] return; }
L_00171598:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = ld32((c.r[1].w[0] + 3744u));
    set32(c.r[2], 0u + 100u);
    st32((c.r[16].w[0] + 16u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = ld32((c.r[1].w[0] + 3744u));
    st32((c.r[16].w[0] + 20u), c.f[0]);
    st32((c.r[16].w[0] + 24u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 140u)));
    c.budget -= 12;
    { const bool t = c.r[2].d[0] != 0ull; mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);  if (t) { goto L_001715CC; } }
    breakpoint(c, 0x001715C8u);
    c.budget -= 1;
L_001715CC:
    set32(c.r[2], ld32((c.r[18].w[0] + 148u)));
    c.r[3].d[0] = c.lo.d[0];
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; mmi::div(c, 0, c.r[2].w[0], c.r[3].w[0]);  if (t) { goto L_001715E0; } }
    breakpoint(c, 0x001715DCu);
    c.budget -= 1;
L_001715E0:
    c.r[6].d[0] = c.lo.d[0];
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001715F4u); set32(c.r[5], c.r[5].w[0] + 3736u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x00127458u; return; } if (c.pc != 0x001715F4u) [[unlikely]] return; }
L_001715F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001715FCu); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x001715FCu) [[unlikely]] return; }
L_001715FC:
    ld128((c.r[2].w[0]) & ~15u, c.r[6]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43980000u);
    set32(c.r[5], c.r[29].w[0] + 80u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[13] = c.r[3].w[0];
    st128((c.r[16].w[0] + 48u) & ~15u, c.r[6]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43DC0000u);
    st32((c.r[16].w[0] + 352u), c.r[5].w[0]);
    c.f[12] = c.r[2].w[0];
    st32((c.r[16].w[0] + 356u), 0u);
    set32(c.r[25], ld32((c.r[16].w[0] + 176u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.f[0] = c.r[2].w[0];
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.budget -= 17;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00171640u); c.f[14] = fp::cvt_s_w(c.f[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00171640u) [[unlikely]] return; }
L_00171640:
    set32(c.r[25], ld32((c.r[16].w[0] + 176u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 60u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00171654u); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00171654u) [[unlikely]] return; }
L_00171654:
    set32(c.r[2], c.r[17].w[0] + 3u);
    c.budget -= 1;
L_00171658:
    set32(c.r[3], ld32((c.r[18].w[0] + 28u)));
    c.f[0] = c.r[2].w[0];
    c.f[1] = ld32((c.r[18].w[0] + 108u));
    c.f[12] = fp::cvt_s_w(c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[4], c.f[0]);
    st32((c.r[3].w[0] + 60u), c.r[4].w[0]);
    c.f[0] = c.r[2].w[0];
    set32(c.r[4], ld32((c.r[18].w[0] + 28u)));
    set32(c.r[2], ld32((c.r[18].w[0] + 152u)));
    c.f[14] = fp::cvt_s_w(c.f[0]);
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[2], c.r[2].w[0] + 3u);
    c.f[0] = c.r[2].w[0];
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 20;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001716A8u); c.f[13] = fp::cvt_s_w(c.f[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001716A8u) [[unlikely]] return; }
L_001716A8:
    set32(c.r[4], ld32((c.r[18].w[0] + 28u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001716BCu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001716BCu) [[unlikely]] return; }
L_001716BC:
    c.f[1] = ld32((c.r[18].w[0] + 108u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00410000u);
    c.f[0] = c.r[17].w[0];
    set32(c.r[3], ld32((c.r[18].w[0] + 24u)));
    set32(c.r[2], c.r[2].w[0] + 1952u);
    set32(c.r[8], c.r[29].w[0] + 64u);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[4], c.f[1]);
    st32((c.r[3].w[0] + 60u), c.r[4].w[0]);
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    st128((c.r[8].w[0]) & ~15u, c.r[2]);
    st32((c.r[29].w[0] + 64u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 152u));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[29].w[0] + 68u), c.f[0]);
    set32(c.r[4], ld32((c.r[18].w[0] + 24u)));
    set32(c.r[5], ld32((c.r[18].w[0] + 140u)));
    set32(c.r[6], ld32((c.r[18].w[0] + 144u)));
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00171714u); set32(c.r[7], 0u + 3u);  if (depth < kMaxDepth) unit_0062(c, 307u, depth + 1u); else { c.pc = 0x0028BA80u; return; } if (c.pc != 0x00171714u) [[unlikely]] return; }
L_00171714:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_00171730:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 8u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00171440u | kUnwind; return; } goto L_00171440; }
L_00171740:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 8u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00171200u | kUnwind; return; } goto L_00171200; }
L_00171750:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[5].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.r[6].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00171774u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_001F(c, 327u, depth + 1u); else { c.pc = 0x0017ECB0u; return; } if (c.pc != 0x00171774u) [[unlikely]] return; }
L_00171774:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[2], c.r[2].w[0] - 15872u);
    c.r[1].d[0] = c.r[1].d[0] | 49316ull;
    set32(c.r[18], c.r[16].w[0] + c.r[1].w[0]);
    st32((c.r[16].w[0] + 1064u), c.r[2].w[0]);
    c.budget -= 6;
L_0017178C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00171794u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_006F(c, 133u, depth + 1u); else { c.pc = 0x002BD7B0u; return; } if (c.pc != 0x00171794u) [[unlikely]] return; }
L_00171794:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[18], c.r[18].w[0] + 6u);
    c.r[1].d[0] = c.r[1].d[0] | 49892ull;
    set32(c.r[17], c.r[16].w[0] + c.r[1].w[0]);
    c.budget -= 6;
    { const bool t = c.r[18].d[0] != c.r[17].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0017178Cu | kUnwind; return; } goto L_0017178C; } }
L_001717AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001717B4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_006F(c, 131u, depth + 1u); else { c.pc = 0x002BD780u; return; } if (c.pc != 0x001717B4u) [[unlikely]] return; }
L_001717B4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00040000u);
    set32(c.r[17], c.r[17].w[0] + 18u);
    c.r[1].d[0] = c.r[1].d[0] | 17444ull;
    set32(c.r[18], c.r[16].w[0] + c.r[1].w[0]);
    c.budget -= 6;
    { const bool t = c.r[17].d[0] != c.r[18].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001717ACu | kUnwind; return; } goto L_001717AC; } }
L_001717CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001717D4u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_006F(c, 135u, depth + 1u); else { c.pc = 0x002BD7E0u; return; } if (c.pc != 0x001717D4u) [[unlikely]] return; }
L_001717D4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00040000u);
    set32(c.r[18], c.r[18].w[0] + 5u);
    c.r[1].d[0] = c.r[1].d[0] | 21764ull;
    set32(c.r[17], c.r[16].w[0] + c.r[1].w[0]);
    c.budget -= 6;
    { const bool t = c.r[18].d[0] != c.r[17].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001717CCu | kUnwind; return; } goto L_001717CC; } }
L_001717EC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001717F4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_006E(c, 113u, depth + 1u); else { c.pc = 0x002B89F0u; return; } if (c.pc != 0x001717F4u) [[unlikely]] return; }
L_001717F4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00040000u);
    set32(c.r[17], c.r[17].w[0] + 50u);
    c.r[1].d[0] = c.r[1].d[0] | 31764ull;
    set32(c.r[2], c.r[16].w[0] + c.r[1].w[0]);
    c.budget -= 6;
    { const bool t = c.r[17].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001717ECu | kUnwind; return; } goto L_001717EC; } }
    st32((c.r[16].w[0] + 1068u), 0u);
    set32(c.r[4], c.r[16].w[0] + 1076u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 48u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00171824u); st32((c.r[16].w[0] + 1072u), 0u);  if (depth < kMaxDepth) unit_0009(c, 49u, depth + 1u); else { c.pc = 0x00124ED8u; return; } if (c.pc != 0x00171824u) [[unlikely]] return; }
L_00171824:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00040000u);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[1].d[0] = c.r[1].d[0] | 42720ull;
    set32(c.r[6], 0u + 5120u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017183Cu); set32(c.r[4], c.r[16].w[0] + c.r[1].w[0]);  if (depth < kMaxDepth) unit_0009(c, 49u, depth + 1u); else { c.pc = 0x00124ED8u; return; } if (c.pc != 0x0017183Cu) [[unlikely]] return; }
L_0017183C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00040000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.r[1].d[0] = c.r[1].d[0] | 42720ull;
    set32(c.r[5], c.r[5].w[0] + 3760u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00171854u); set32(c.r[4], c.r[16].w[0] + c.r[1].w[0]);  if (depth < kMaxDepth) unit_0009(c, 233u, depth + 1u); else { c.pc = 0x00127BE8u; return; } if (c.pc != 0x00171854u) [[unlikely]] return; }
L_00171854:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00040000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.r[1].d[0] = c.r[1].d[0] | 43744ull;
    set32(c.r[5], c.r[5].w[0] + 3784u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017186Cu); set32(c.r[4], c.r[16].w[0] + c.r[1].w[0]);  if (depth < kMaxDepth) unit_0009(c, 233u, depth + 1u); else { c.pc = 0x00127BE8u; return; } if (c.pc != 0x0017186Cu) [[unlikely]] return; }
L_0017186C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00040000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.r[1].d[0] = c.r[1].d[0] | 44768ull;
    set32(c.r[5], c.r[5].w[0] + 3800u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00171884u); set32(c.r[4], c.r[16].w[0] + c.r[1].w[0]);  if (depth < kMaxDepth) unit_0009(c, 233u, depth + 1u); else { c.pc = 0x00127BE8u; return; } if (c.pc != 0x00171884u) [[unlikely]] return; }
    goto L_00171884;
L_00171880:
    set32(c.r[4], c.r[16].w[0] + c.r[1].w[0]);
    c.budget -= 1;
L_00171884:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00040000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.r[1].d[0] = c.r[1].d[0] | 45792ull;
    set32(c.r[5], c.r[5].w[0] + 3800u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017189Cu); set32(c.r[4], c.r[16].w[0] + c.r[1].w[0]);  if (depth < kMaxDepth) unit_0009(c, 233u, depth + 1u); else { c.pc = 0x00127BE8u; return; } if (c.pc != 0x0017189Cu) [[unlikely]] return; }
L_0017189C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00040000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.r[1].d[0] = c.r[1].d[0] | 46816ull;
    set32(c.r[2], 0u + 1u);
    set32(c.r[4], c.r[16].w[0] + c.r[1].w[0]);
    set32(c.r[5], c.r[5].w[0] + 3808u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00050000u);
    set32(c.r[1], c.r[16].w[0] + c.r[1].w[0]);
    st8((c.r[1].w[0] - 17696u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00040000u);
    c.r[1].d[0] = c.r[1].d[0] | 42720ull;
    set32(c.r[6], c.r[16].w[0] + c.r[1].w[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001718D4u); c.r[7].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x00127458u; return; } if (c.pc != 0x001718D4u) [[unlikely]] return; }
L_001718D4:
    st32((c.r[16].w[0] + 11412u), 0u);
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[4].w[0] << 10);
    c.budget -= 3;
L_001718E0:
    set32(c.r[2], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[16].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] + 1132u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st32((c.r[2].w[0] + 11372u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[4].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], c.r[4].w[0] << 10);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001718E0u | kUnwind; return; } goto L_001718E0; } }
    goto L_00171904;
L_00171900:
    set32(c.r[3], c.r[4].w[0] << 10);
    c.budget -= 1;
L_00171904:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00040000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00410000u);
    c.r[1].d[0] = c.r[1].d[0] | 43744ull;
    set32(c.r[4], c.r[16].w[0] + 72u);
    set32(c.r[2], c.r[16].w[0] + c.r[1].w[0]);
    set32(c.r[5], c.r[5].w[0] + 1968u);
    st32((c.r[16].w[0] + 1036u), c.r[2].w[0]);
    set32(c.r[6], 0u + 964u);
    st32((c.r[16].w[0] + 1040u), 0u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00171930u); st32((c.r[16].w[0] + 1044u), 0u);  if (depth < kMaxDepth) unit_0009(c, 40u, depth + 1u); else { c.pc = 0x00124D20u; return; } if (c.pc != 0x00171930u) [[unlikely]] return; }
L_00171930:
    set32(c.r[4], c.r[16].w[0] + 264u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[5], c.r[5].w[0] + 3808u);
    c.r[6].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017194Cu); set32(c.r[7], c.r[7].w[0] + 3816u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x00127458u; return; } if (c.pc != 0x0017194Cu) [[unlikely]] return; }
L_0017194C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00040000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[1].d[0] = c.r[1].d[0] | 42720ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00171960u); set32(c.r[5], c.r[16].w[0] + c.r[1].w[0]);  if (depth < kMaxDepth) unit_001F(c, 372u, depth + 1u); else { c.pc = 0x0017F190u; return; } if (c.pc != 0x00171960u) [[unlikely]] return; }
L_00171960:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017196Cu); set32(c.r[5], c.r[16].w[0] + 1128u);  if (depth < kMaxDepth) unit_001C(c, 244u, depth + 1u); else { c.pc = 0x00172A90u; return; } if (c.pc != 0x0017196Cu) [[unlikely]] return; }
L_0017196C:
    st32((c.r[16].w[0] + 1124u), c.r[2].w[0]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 5;
L_00171980:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00171990:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001719D8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 15872u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001719C0u); st32((c.r[17].w[0] + 1064u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_001F(c, 331u, depth + 1u); else { c.pc = 0x0017ED30u; return; } if (c.pc != 0x001719C0u) [[unlikely]] return; }
L_001719C0:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_001719DC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001719D8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x001719D8u) [[unlikely]] return; }
L_001719D8:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001719DC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001719F0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00171A04u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_001F(c, 378u, depth + 1u); else { c.pc = 0x0017F220u; return; } if (c.pc != 0x00171A04u) [[unlikely]] return; }
L_00171A04:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00171A24; } }
    c.r[5].d[0] = ld8((c.r[16].w[0] + 1068u));
    set32(c.r[3], 0u - 2u);
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st8((c.r[16].w[0] + 1068u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 6;
L_00171A24:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00171A40:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].d[0] = ld8((c.r[4].w[0] + 1068u));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00171A64; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00171AA8; } }
L_00171A64:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00171A6Cu);  if (depth < kMaxDepth) unit_001F(c, 385u, depth + 1u); else { c.pc = 0x0017F2D0u; return; } if (c.pc != 0x00171A6Cu) [[unlikely]] return; }
L_00171A6C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00171A8C; } }
    c.r[5].d[0] = ld8((c.r[16].w[0] + 1068u));
    set32(c.r[3], 0u - 3u);
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st8((c.r[16].w[0] + 1068u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 6;
L_00171A8C:
    c.r[5].d[0] = ld8((c.r[16].w[0] + 1068u));
    c.r[3].d[0] = 0ull & 15ull;
    set32(c.r[4], c.r[3].w[0] << 2);
    set32(c.r[3], 0u - 61u);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st8((c.r[16].w[0] + 1068u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 7;
L_00171AA8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00171AC0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = ld8((c.r[4].w[0] + 1068u));
    c.r[2].d[0] = c.r[5].d[0] << 62;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; c.r[3].d[0] = 0ull & 1ull;  if (t) { goto L_00171AE4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00171AFC; } }
L_00171AE4:
    set32(c.r[2], 0u - 3u);
    c.r[2].d[0] = c.r[5].d[0] & c.r[2].d[0];
    set32(c.r[3], c.r[3].w[0] << 1);
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00171AFCu); st8((c.r[4].w[0] + 1068u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_001F(c, 386u, depth + 1u); else { c.pc = 0x0017F2E0u; return; } if (c.pc != 0x00171AFCu) [[unlikely]] return; }
L_00171AFC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00171B10:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[4].w[0] + 1072u)));
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00171B6C; } }
    c.r[3].d[0] = ld8((c.r[17].w[0] + 1068u));
    c.r[2].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = c.r[3].d[0] << 62;  if (t) { goto L_00171B54; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00171B6C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (t) { goto L_00171B6C; } }
L_00171B54:
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00171B6C; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; set32(c.r[2], 0u + 2u);  if (t) { goto L_00171B6C; } }
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 1;
L_00171B6C:
    set32(c.r[2], ld32((c.r[17].w[0] + 1072u)));
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(7ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x00460000u);  if (t) { goto L_00171C14; } }
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + 3824u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00170000u < 16384u) { entry = entries_001C[(t - 0x00170000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00171B94:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00171C48; } }
L_00171B9C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00171BA8u); set32(c.r[5], c.r[17].w[0] + 1076u);  if (depth < kMaxDepth) unit_001C(c, 207u, depth + 1u); else { c.pc = 0x00172160u; return; } if (c.pc != 0x00171BA8u) [[unlikely]] return; }
L_00171BA8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00171C20; } }
L_00171BB0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00171BBCu); set32(c.r[5], c.r[17].w[0] + 1076u);  if (depth < kMaxDepth) unit_001C(c, 214u, depth + 1u); else { c.pc = 0x001723B0u; return; } if (c.pc != 0x00171BBCu) [[unlikely]] return; }
L_00171BBC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00171C20; } }
L_00171BC4:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00171BD0u); set32(c.r[5], c.r[17].w[0] + 1076u);  if (depth < kMaxDepth) unit_001C(c, 220u, depth + 1u); else { c.pc = 0x001725D0u; return; } if (c.pc != 0x00171BD0u) [[unlikely]] return; }
L_00171BD0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00171C20; } }
L_00171BD8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00171BE4u); set32(c.r[5], c.r[17].w[0] + 1076u);  if (depth < kMaxDepth) unit_001C(c, 222u, depth + 1u); else { c.pc = 0x00172640u; return; } if (c.pc != 0x00171BE4u) [[unlikely]] return; }
L_00171BE4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00171C20; } }
L_00171BEC:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00171BF8u); set32(c.r[5], c.r[17].w[0] + 1076u);  if (depth < kMaxDepth) unit_001C(c, 225u, depth + 1u); else { c.pc = 0x00172730u; return; } if (c.pc != 0x00171BF8u) [[unlikely]] return; }
L_00171BF8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00171C20; } }
L_00171C00:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00171C0Cu); set32(c.r[5], c.r[17].w[0] + 1076u);  if (depth < kMaxDepth) unit_001C(c, 229u, depth + 1u); else { c.pc = 0x00172840u; return; } if (c.pc != 0x00171C0Cu) [[unlikely]] return; }
L_00171C0C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00171C20; } }
L_00171C14:
    set32(c.r[2], 0u + 4u);
    set32(c.r[18], 0u + 2u);
    st32((c.r[17].w[0] + 1080u), c.r[2].w[0]);
    c.budget -= 3;
L_00171C20:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00171C3C; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[17].w[0] + 1076u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00171C38u); set32(c.r[6], 0u + 48u);  if (depth < kMaxDepth) unit_0009(c, 40u, depth + 1u); else { c.pc = 0x00124D20u; return; } if (c.pc != 0x00171C38u) [[unlikely]] return; }
L_00171C38:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_00171C3C:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == c.r[2].d[0]; c.r[2].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_00171C48; } }
    st32((c.r[17].w[0] + 1072u), 0u);
    c.budget -= 1;
L_00171C48:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00171C60:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[3].d[0] = ld8((c.r[4].w[0] + 1068u));
    c.r[2].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00171C8C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00171EA0; } }
L_00171C8C:
    c.r[2].d[0] = c.r[3].d[0] << 62;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 2u);  if (t) { goto L_00171CA4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_00171EA4; } }
L_00171CA4:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; c.r[1].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(7ll) ? 1ull : 0ull;  if (t) { goto L_00171CC0; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 1072u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 3u);  if (t) { goto L_00171CC0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00171EA0; } }
L_00171CC0:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[2], 0u + 4u);  if (t) { goto L_00171E7C; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[2], c.r[16].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + 3856u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00170000u < 16384u) { entry = entries_001C[(t - 0x00170000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00171CE4:
    c.r[7].d[0] = ld8((c.r[17].w[0] + 1068u));
    set32(c.r[5], 0u - 225u);
    c.r[3].d[0] = 0ull + 0ull;
    set32(c.r[2], 0u + 6u);
    if (c.r[6].d[0] == 0) c.r[3].d[0] = c.r[2].d[0];
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[2].d[0] = c.r[3].d[0] & 7ull;
    set32(c.r[6], c.r[2].w[0] << 5);
    c.r[2].d[0] = 0ull & 1ull;
    c.r[5].d[0] = c.r[7].d[0] & c.r[5].d[0];
    set32(c.r[3], c.r[2].w[0] << 2);
    c.r[5].d[0] = c.r[5].d[0] | c.r[6].d[0];
    set32(c.r[2], 0u - 5u);
    st8((c.r[17].w[0] + 1068u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].d[0] = ld8((c.r[17].w[0] + 1068u));
    c.r[2].d[0] = c.r[5].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00171D30u); st8((c.r[17].w[0] + 1068u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_001C(c, 190u, depth + 1u); else { c.pc = 0x00171EC0u; return; } if (c.pc != 0x00171D30u) [[unlikely]] return; }
L_00171D30:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00171EA0; } }
L_00171D38:
    c.r[9].d[0] = ld8((c.r[17].w[0] + 1068u));
    set32(c.r[7], 0u - 225u);
    c.r[3].d[0] = 0ull + 0ull;
    set32(c.r[2], 0u + 6u);
    if (c.r[6].d[0] == 0) c.r[3].d[0] = c.r[2].d[0];
    set32(c.r[5], 0u - 17u);
    c.r[2].d[0] = c.r[3].d[0] & 7ull;
    c.r[6].d[0] = 0ull + static_cast<std::uint64_t>(16ll);
    set32(c.r[8], c.r[2].w[0] << 5);
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(4ll);
    set32(c.r[2], 0u - 5u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = c.r[9].d[0] & c.r[7].d[0];
    c.r[7].d[0] = c.r[7].d[0] | c.r[8].d[0];
    st8((c.r[17].w[0] + 1068u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.r[7].d[0] = ld8((c.r[17].w[0] + 1068u));
    c.r[5].d[0] = c.r[7].d[0] & c.r[5].d[0];
    c.r[5].d[0] = c.r[5].d[0] | c.r[6].d[0];
    st8((c.r[17].w[0] + 1068u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].d[0] = ld8((c.r[17].w[0] + 1068u));
    c.r[2].d[0] = c.r[5].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 24;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00171D98u); st8((c.r[17].w[0] + 1068u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_001C(c, 190u, depth + 1u); else { c.pc = 0x00171EC0u; return; } if (c.pc != 0x00171D98u) [[unlikely]] return; }
L_00171D98:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00171EA0; } }
L_00171DA0:
    set32(c.r[25], ld32((c.r[17].w[0] + 1064u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 44u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00171DB0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00171DB0u) [[unlikely]] return; }
L_00171DB0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[17].w[0] + 1076u);  if (t) { goto L_00171E88; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 3u);  if (t) { goto L_00171EA0; } }
L_00171DC0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00171DC8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_001C(c, 231u, depth + 1u); else { c.pc = 0x001728C0u; return; } if (c.pc != 0x00171DC8u) [[unlikely]] return; }
L_00171DC8:
    set32(c.r[25], ld32((c.r[17].w[0] + 1064u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00040000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00040000u);
    c.r[3].d[0] = ld8((c.r[17].w[0] + 1068u));
    c.r[7].d[0] = c.r[2].d[0] | 31296ull;
    c.r[1].d[0] = c.r[1].d[0] | 46816ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[17].w[0] + c.r[1].w[0]);
    set32(c.r[6], c.r[17].w[0] + 11424u);
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 36u)));
    c.r[2].d[0] = c.r[3].d[0] << 60;
    c.budget -= 14;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00171E00u); c.r[8].d[0] = c.r[2].d[0] >> 63;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00171E00u) [[unlikely]] return; }
L_00171E00:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00171E84; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 3u);  if (t) { goto L_00171EA0; } }
L_00171E10:
    set32(c.r[25], ld32((c.r[17].w[0] + 1064u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00040000u);
    c.r[1].d[0] = c.r[1].d[0] | 46816ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00040000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[17].w[0] + c.r[1].w[0]);
    set32(c.r[6], c.r[17].w[0] + 11424u);
    c.r[7].d[0] = c.r[2].d[0] | 31296ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.budget -= 11;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00171E3Cu); c.r[8].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00171E3Cu) [[unlikely]] return; }
L_00171E3C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00171E84; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 3u);  if (t) { goto L_00171EA0; } }
L_00171E4C:
    set32(c.r[25], ld32((c.r[17].w[0] + 1064u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00040000u);
    c.r[1].d[0] = c.r[1].d[0] | 46816ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 48u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00171E68u); set32(c.r[5], c.r[17].w[0] + c.r[1].w[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00171E68u) [[unlikely]] return; }
L_00171E68:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00171E84; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 3u);  if (t) { goto L_00171EA0; } }
    set32(c.r[2], 0u + 4u);
    c.budget -= 1;
L_00171E7C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00171EA0; } }
L_00171E84:
    set32(c.r[4], c.r[17].w[0] + 1076u);
    c.budget -= 1;
L_00171E88:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00171E94u); set32(c.r[6], 0u + 48u);  if (depth < kMaxDepth) unit_0009(c, 49u, depth + 1u); else { c.pc = 0x00124ED8u; return; } if (c.pc != 0x00171E94u) [[unlikely]] return; }
L_00171E94:
    st32((c.r[17].w[0] + 1076u), c.r[16].w[0]);
    c.r[2].d[0] = 0ull + 0ull;
    st32((c.r[17].w[0] + 1072u), c.r[16].w[0]);
    c.budget -= 3;
L_00171EA0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_00171EA4:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00171EC0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[25], ld32((c.r[4].w[0] + 1064u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[5], c.r[16].w[0] + 1096u);
    set32(c.r[6], c.r[16].w[0] + 1100u);
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 10;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00171EE8u); set32(c.r[7], c.r[16].w[0] + 1104u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00171EE8u) [[unlikely]] return; }
L_00171EE8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[16].w[0] + 1076u);  if (t) { goto L_00171EF8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 3u);  if (t) { goto L_00171F1C; } }
L_00171EF8:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00171F04u); set32(c.r[6], 0u + 48u);  if (depth < kMaxDepth) unit_0009(c, 49u, depth + 1u); else { c.pc = 0x00124ED8u; return; } if (c.pc != 0x00171F04u) [[unlikely]] return; }
L_00171F04:
    set32(c.r[4], ld32((c.r[16].w[0] + 1124u)));
    set32(c.r[3], 0u + 1u);
    c.r[2].d[0] = 0ull + 0ull;
    st32((c.r[16].w[0] + 1112u), c.r[4].w[0]);
    st32((c.r[16].w[0] + 1076u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 1072u), c.r[3].w[0]);
    c.budget -= 6;
L_00171F1C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00171F30:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[6], c.r[18].w[0] + 1100u);
    set32(c.r[5], c.r[18].w[0] + 1096u);
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 13;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00171F64u); set32(c.r[7], c.r[18].w[0] + 1104u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00171F64u) [[unlikely]] return; }
L_00171F64:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_00171F74; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 3u);  if (t) { goto L_0017213C; } }
L_00171F74:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[2], c.r[16].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + 3888u);
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    set32(c.r[6], 0u + 1023u);
    set32(c.r[4], ld32((c.r[2].w[0] + 11372u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00171F94u); set32(c.r[16], c.r[16].w[0] + 1u);  if (depth < kMaxDepth) unit_000A(c, 12u, depth + 1u); else { c.pc = 0x001281F0u; return; } if (c.pc != 0x00171F94u) [[unlikely]] return; }
L_00171F94:
    set32(c.r[2], c.r[16].w[0] << 2);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00040000u);
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    c.r[1].d[0] = c.r[1].d[0] | 42720ull;
    set32(c.r[4], ld32((c.r[2].w[0] + 11372u)));
    set32(c.r[5], c.r[18].w[0] + c.r[1].w[0]);
    set32(c.r[6], 0u + 1023u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00171FB8u); set32(c.r[16], c.r[16].w[0] + 1u);  if (depth < kMaxDepth) unit_000A(c, 12u, depth + 1u); else { c.pc = 0x001281F0u; return; } if (c.pc != 0x00171FB8u) [[unlikely]] return; }
L_00171FB8:
    set32(c.r[2], c.r[16].w[0] << 2);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00040000u);
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[4], ld32((c.r[2].w[0] + 11372u)));
    c.r[1].d[0] = c.r[1].d[0] | 42720ull;
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[5], c.r[5].w[0] + 3896u);
    set32(c.r[6], c.r[18].w[0] + c.r[1].w[0]);
    set32(c.r[7], c.r[7].w[0] + 3904u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00171FE8u); set32(c.r[16], c.r[16].w[0] + 1u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x00127458u; return; } if (c.pc != 0x00171FE8u) [[unlikely]] return; }
L_00171FE8:
    set32(c.r[2], ld32((c.r[18].w[0] + 1036u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], c.r[16].w[0] << 2);  if (t) { goto L_0017201C; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00040000u);
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[4], ld32((c.r[2].w[0] + 11372u)));
    c.r[1].d[0] = c.r[1].d[0] | 42720ull;
    set32(c.r[5], c.r[5].w[0] + 3896u);
    set32(c.r[6], c.r[18].w[0] + c.r[1].w[0]);
    set32(c.r[7], c.r[18].w[0] + 332u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017201Cu); set32(c.r[16], c.r[16].w[0] + 1u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x00127458u; return; } if (c.pc != 0x0017201Cu) [[unlikely]] return; }
L_0017201C:
    set32(c.r[2], ld32((c.r[18].w[0] + 1040u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], c.r[16].w[0] << 2);  if (t) { goto L_00172050; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00040000u);
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[4], ld32((c.r[2].w[0] + 11372u)));
    c.r[1].d[0] = c.r[1].d[0] | 42720ull;
    set32(c.r[5], c.r[5].w[0] + 3896u);
    c.budget -= 6;
L_00172040:
    set32(c.r[6], c.r[18].w[0] + c.r[1].w[0]);
    set32(c.r[7], c.r[18].w[0] + 396u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00172050u); set32(c.r[16], c.r[16].w[0] + 1u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x00127458u; return; } if (c.pc != 0x00172050u) [[unlikely]] return; }
L_00172050:
    set32(c.r[2], ld32((c.r[18].w[0] + 1044u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], c.r[16].w[0] << 2);  if (t) { goto L_0017208C; } }
    set32(c.r[2], c.r[16].w[0] << 2);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00040000u);
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[4], ld32((c.r[2].w[0] + 11372u)));
    c.r[1].d[0] = c.r[1].d[0] | 42720ull;
    set32(c.r[5], c.r[5].w[0] + 3896u);
    set32(c.r[6], c.r[18].w[0] + c.r[1].w[0]);
    set32(c.r[7], c.r[18].w[0] + 460u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00172088u); set32(c.r[16], c.r[16].w[0] + 1u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x00127458u; return; } if (c.pc != 0x00172088u) [[unlikely]] return; }
L_00172088:
    set32(c.r[2], c.r[16].w[0] << 2);
    c.budget -= 1;
L_0017208C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00040000u);
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    c.r[1].d[0] = c.r[1].d[0] | 46816ull;
    set32(c.r[4], ld32((c.r[2].w[0] + 11372u)));
    set32(c.r[5], c.r[18].w[0] + c.r[1].w[0]);
    set32(c.r[6], 0u + 1023u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001720ACu); set32(c.r[16], c.r[16].w[0] + 1u);  if (depth < kMaxDepth) unit_000A(c, 12u, depth + 1u); else { c.pc = 0x001281F0u; return; } if (c.pc != 0x001720ACu) [[unlikely]] return; }
L_001720AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001720B4u);  if (depth < kMaxDepth) unit_001F(c, 27u, depth + 1u); else { c.pc = 0x0017C320u; return; } if (c.pc != 0x001720B4u) [[unlikely]] return; }
L_001720B4:
    set32(c.r[25], ld32((c.r[18].w[0] + 1064u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], c.r[18].w[0] + 11372u);
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001720D4u); set32(c.r[8], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001720D4u) [[unlikely]] return; }
L_001720D4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[18].w[0] + 1076u);  if (t) { goto L_001720F8; } }
    set32(c.r[25], ld32((c.r[18].w[0] + 1064u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 56u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001720F0u); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001720F0u) [[unlikely]] return; }
L_001720F0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 3u);  if (t) { goto L_0017213C; } }
L_001720F8:
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00172108u); st32((c.r[18].w[0] + 11412u), c.r[16].w[0]);  if (depth < kMaxDepth) unit_0009(c, 49u, depth + 1u); else { c.pc = 0x00124ED8u; return; } if (c.pc != 0x00172108u) [[unlikely]] return; }
L_00172108:
    set32(c.r[6], ld32((c.r[18].w[0] + 1124u)));
    c.r[2].d[0] = c.r[17].d[0] & 1ull;
    set32(c.r[4], c.r[2].w[0] << 4);
    set32(c.r[5], 0u + 2u);
    set32(c.r[3], 0u - 17u);
    c.r[2].d[0] = 0ull + 0ull;
    st32((c.r[18].w[0] + 1112u), c.r[6].w[0]);
    st32((c.r[18].w[0] + 1076u), c.r[5].w[0]);
    st32((c.r[18].w[0] + 1072u), c.r[5].w[0]);
    c.r[5].d[0] = ld8((c.r[18].w[0] + 1068u));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st8((c.r[18].w[0] + 1068u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 13;
L_0017213C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00172160:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[4].w[0] + 1064u)));
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 8;
L_00172180:
    c.budget -= 2;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00172188u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00172188u) [[unlikely]] return; }
L_00172188:
    set32(c.r[3], 0u - 999u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 12u);  if (t) { goto L_00172390; } }
    set32(c.r[3], 0u - 992u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[4], 0u + 1u);  if (t) { goto L_00172330; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[4].d[0]; set32(c.r[3], 0u - 1u);  if (t) { goto L_001722C4; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0017224C; } }
    set32(c.r[3], 0u - 2u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_001721D4; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001721CC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0017238C; } }
L_001721CC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00172398; } }
L_001721D4:
    c.r[4].d[0] = ld8((c.r[17].w[0] + 1068u));
    c.r[2].d[0] = c.r[4].d[0] << 56;
    c.r[2].d[0] = c.r[2].d[0] >> 61;
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], c.r[2].w[0] + 255u);  if (t) { goto L_0017221C; } }
    set32(c.r[2], 0u - 225u);
    c.r[3].d[0] = c.r[3].d[0] & 7ull;
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    set32(c.r[3], c.r[3].w[0] << 5);
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017220Cu); st8((c.r[17].w[0] + 1068u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_001C(c, 190u, depth + 1u); else { c.pc = 0x00171EC0u; return; } if (c.pc != 0x0017220Cu) [[unlikely]] return; }
L_0017220C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0017221C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00172398; } }
L_0017221C:
    set32(c.r[3], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[4], 0u + 1u);  if (t) { goto L_00172238; } }
    set32(c.r[3], 0u + 5u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 4u), c.r[3].w[0]);  if (t) { goto L_00172398; } }
L_00172238:
    set32(c.r[3], 0u + 6u);
    st32((c.r[16].w[0] + 16u), c.r[4].w[0]);
    st32((c.r[16].w[0] + 32u), c.r[4].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 4u), c.r[3].w[0]);  if (t) { goto L_00172398; } }
L_0017224C:
    c.r[4].d[0] = ld8((c.r[17].w[0] + 1068u));
    c.r[2].d[0] = c.r[4].d[0] << 56;
    c.r[2].d[0] = c.r[2].d[0] >> 61;
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], c.r[2].w[0] + 255u);  if (t) { goto L_00172294; } }
    set32(c.r[2], 0u - 225u);
    c.r[3].d[0] = c.r[3].d[0] & 7ull;
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    set32(c.r[3], c.r[3].w[0] << 5);
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00172284u); st8((c.r[17].w[0] + 1068u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_001C(c, 190u, depth + 1u); else { c.pc = 0x00171EC0u; return; } if (c.pc != 0x00172284u) [[unlikely]] return; }
L_00172284:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00172294; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00172398; } }
L_00172294:
    set32(c.r[3], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[4], 0u + 1u);  if (t) { goto L_001722B0; } }
    set32(c.r[3], 0u + 5u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 4u), c.r[3].w[0]);  if (t) { goto L_00172398; } }
L_001722B0:
    set32(c.r[3], 0u + 7u);
    st32((c.r[16].w[0] + 16u), c.r[4].w[0]);
    st32((c.r[16].w[0] + 32u), c.r[4].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 4u), c.r[3].w[0]);  if (t) { goto L_00172398; } }
L_001722C4:
    st32((c.r[16].w[0] + 16u), c.r[4].w[0]);
    set32(c.r[2], 0u + 2u);
    st32((c.r[16].w[0] + 32u), 0u);
    set32(c.r[3], ld32((c.r[16].w[0] + 20u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[3], 0u + 5u);  if (t) { goto L_001722E4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 4u), c.r[3].w[0]);  if (t) { goto L_00172398; } }
L_001722E4:
    set32(c.r[3], ld32((c.r[16].w[0] + 28u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u + 6u);  if (t) { goto L_001722F8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 4u), c.r[3].w[0]);  if (t) { goto L_00172398; } }
L_001722F8:
    c.r[3].d[0] = ld8((c.r[17].w[0] + 1068u));
    c.r[2].d[0] = c.r[3].d[0] << 61;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 3u);  if (t) { goto L_00172398; } }
    c.r[2].d[0] = c.r[3].d[0] << 59;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017231Cu); c.r[5].d[0] = c.r[2].d[0] >> 63;  if (depth < kMaxDepth) unit_001C(c, 193u, depth + 1u); else { c.pc = 0x00171F30u; return; } if (c.pc != 0x0017231Cu) [[unlikely]] return; }
L_0017231C:
    set32(c.r[4], 0u + 1u);
    set32(c.r[3], 0u + 2u);
    if (c.r[2].d[0] != 0) c.r[4].d[0] = c.r[3].d[0];
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00172398; } }
L_00172330:
    c.r[4].d[0] = ld8((c.r[17].w[0] + 1068u));
    c.r[2].d[0] = c.r[4].d[0] << 56;
    c.r[2].d[0] = c.r[2].d[0] >> 61;
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], c.r[2].w[0] + 255u);  if (t) { goto L_00172378; } }
    set32(c.r[2], 0u - 225u);
    c.r[3].d[0] = c.r[3].d[0] & 7ull;
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    set32(c.r[3], c.r[3].w[0] << 5);
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00172368u); st8((c.r[17].w[0] + 1068u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_001C(c, 190u, depth + 1u); else { c.pc = 0x00171EC0u; return; } if (c.pc != 0x00172368u) [[unlikely]] return; }
L_00172368:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00172378; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00172398; } }
L_00172378:
    st32((c.r[16].w[0] + 16u), 0u);
    set32(c.r[2], 0u + 5u);
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 2u);  if (t) { goto L_00172398; } }
L_0017238C:
    set32(c.r[3], 0u + 12u);
    c.budget -= 1;
L_00172390:
    set32(c.r[2], 0u + 2u);
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 2;
L_00172398:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001723B0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[4].w[0] + 1064u)));
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 10;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001723D8u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001723D8u) [[unlikely]] return; }
L_001723D8:
    set32(c.r[3], 0u - 999u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 12u);  if (t) { goto L_001725A0; } }
    set32(c.r[3], 0u - 992u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[3], 0u - 995u);  if (t) { goto L_00172588; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_00172578; } }
    set32(c.r[3], 0u - 994u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_00172520; } }
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[3], 0u - 2u);  if (t) { goto L_001724A8; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_00172430; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00172428; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0017259C; } }
L_00172428:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_001725B0; } }
L_00172430:
    c.r[4].d[0] = ld8((c.r[17].w[0] + 1068u));
    c.r[2].d[0] = c.r[4].d[0] << 56;
    c.r[2].d[0] = c.r[2].d[0] >> 61;
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], c.r[2].w[0] + 255u);  if (t) { goto L_00172478; } }
    set32(c.r[2], 0u - 225u);
    c.r[3].d[0] = c.r[3].d[0] & 7ull;
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    set32(c.r[3], c.r[3].w[0] << 5);
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00172468u); st8((c.r[17].w[0] + 1068u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_001C(c, 190u, depth + 1u); else { c.pc = 0x00171EC0u; return; } if (c.pc != 0x00172468u) [[unlikely]] return; }
L_00172468:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00172478; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_001725B0; } }
L_00172478:
    set32(c.r[3], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[4], 0u + 1u);  if (t) { goto L_00172494; } }
    set32(c.r[3], 0u + 5u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 4u), c.r[3].w[0]);  if (t) { goto L_001725B0; } }
L_00172494:
    set32(c.r[3], 0u + 6u);
    st32((c.r[16].w[0] + 16u), c.r[4].w[0]);
    st32((c.r[16].w[0] + 32u), c.r[4].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 4u), c.r[3].w[0]);  if (t) { goto L_001725B0; } }
L_001724A8:
    c.r[4].d[0] = ld8((c.r[17].w[0] + 1068u));
    c.r[2].d[0] = c.r[4].d[0] << 56;
    c.r[2].d[0] = c.r[2].d[0] >> 61;
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], c.r[2].w[0] + 255u);  if (t) { goto L_001724F0; } }
    set32(c.r[2], 0u - 225u);
    c.r[3].d[0] = c.r[3].d[0] & 7ull;
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    set32(c.r[3], c.r[3].w[0] << 5);
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001724E0u); st8((c.r[17].w[0] + 1068u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_001C(c, 190u, depth + 1u); else { c.pc = 0x00171EC0u; return; } if (c.pc != 0x001724E0u) [[unlikely]] return; }
L_001724E0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001724F0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_001725B0; } }
L_001724F0:
    set32(c.r[3], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[4], 0u + 1u);  if (t) { goto L_0017250C; } }
    set32(c.r[3], 0u + 5u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 4u), c.r[3].w[0]);  if (t) { goto L_001725B0; } }
L_0017250C:
    set32(c.r[3], 0u + 7u);
    st32((c.r[16].w[0] + 16u), c.r[4].w[0]);
    st32((c.r[16].w[0] + 32u), c.r[4].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 4u), c.r[3].w[0]);  if (t) { goto L_001725B0; } }
L_00172520:
    set32(c.r[2], 0u + 10u);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 32u), 0u);
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    c.r[2].d[0] = ld8((c.r[17].w[0] + 1068u));
    c.r[2].d[0] = c.r[2].d[0] << 59;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 2u);  if (t) { goto L_00172570; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017254Cu);  if (depth < kMaxDepth) unit_001F(c, 27u, depth + 1u); else { c.pc = 0x0017C320u; return; } if (c.pc != 0x0017254Cu) [[unlikely]] return; }
L_0017254C:
    set32(c.r[6], ld32((c.r[17].w[0] + 11412u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017255Cu); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_001C(c, 245u, depth + 1u); else { c.pc = 0x00172B00u; return; } if (c.pc != 0x0017255Cu) [[unlikely]] return; }
L_0017255C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0017256C; } }
    set32(c.r[2], 0u + 8u);
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 2;
L_0017256C:
    set32(c.r[2], 0u + 2u);
    c.budget -= 1;
L_00172570:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_001725B4; } }
L_00172578:
    set32(c.r[2], 0u + 1u);
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 32u), 0u);  if (t) { goto L_001725AC; } }
L_00172588:
    st32((c.r[16].w[0] + 16u), 0u);
    set32(c.r[2], 0u + 5u);
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 2u);  if (t) { goto L_001725B0; } }
L_0017259C:
    set32(c.r[3], 0u + 12u);
    c.budget -= 1;
L_001725A0:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 4u), c.r[3].w[0]);  if (t) { goto L_001725B0; } }
L_001725AC:
    set32(c.r[2], 0u + 3u);
    c.budget -= 1;
L_001725B0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_001725B4:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001725D0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[25], ld32((c.r[4].w[0] + 1064u)));
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001725F0u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001725F0u) [[unlikely]] return; }
L_001725F0:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_00172620; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0017260C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 12u);  if (t) { goto L_00172614; } }
L_0017260C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[3].d[0] + 0ull;  if (t) { goto L_00172624; } }
L_00172614:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 4u), c.r[3].w[0]);  if (t) { goto L_00172624; } }
L_00172620:
    set32(c.r[2], 0u + 3u);
    c.budget -= 1;
L_00172624:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00172640:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[4].w[0] + 1064u)));
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 10;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00172668u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00172668u) [[unlikely]] return; }
L_00172668:
    set32(c.r[3], 0u - 992u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 5u);  if (t) { goto L_001726F8; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[3], 0u - 996u);  if (t) { goto L_001726EC; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_001726DC; } }
    set32(c.r[3], 0u - 994u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 10u);  if (t) { goto L_001726D0; } }
    set32(c.r[3], 0u - 995u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 12u);  if (t) { goto L_001726C4; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_001726B0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 12u);  if (t) { goto L_00172704; } }
L_001726B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001726B8u);  if (depth < kMaxDepth) unit_001C(c, 254u, depth + 1u); else { c.pc = 0x00172EB0u; return; } if (c.pc != 0x001726B8u) [[unlikely]] return; }
L_001726B8:
    st32((c.r[16].w[0] + 8u), c.f[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00172714; } }
L_001726C4:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 4u), c.r[3].w[0]);  if (t) { goto L_00172714; } }
L_001726D0:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 4u), c.r[3].w[0]);  if (t) { goto L_00172714; } }
L_001726DC:
    set32(c.r[3], 0u + 8u);
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 4u), c.r[3].w[0]);  if (t) { goto L_00172714; } }
L_001726EC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_00172710; } }
L_001726F8:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 4u), c.r[3].w[0]);  if (t) { goto L_00172714; } }
L_00172704:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 4u), c.r[3].w[0]);  if (t) { goto L_00172714; } }
L_00172710:
    set32(c.r[2], 0u + 3u);
    c.budget -= 1;
L_00172714:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00172730:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[4].w[0] + 1064u)));
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 10;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00172758u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00172758u) [[unlikely]] return; }
L_00172758:
    set32(c.r[3], 0u - 992u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 5u);  if (t) { goto L_0017280C; } }
    set32(c.r[3], 0u - 996u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 8u);  if (t) { goto L_00172800; } }
    set32(c.r[3], 0u - 994u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 10u);  if (t) { goto L_001727F4; } }
    set32(c.r[3], 0u - 997u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 9u);  if (t) { goto L_001727E8; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_001727B8; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_001727A4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 12u);  if (t) { goto L_00172818; } }
L_001727A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001727ACu);  if (depth < kMaxDepth) unit_001C(c, 254u, depth + 1u); else { c.pc = 0x00172EB0u; return; } if (c.pc != 0x001727ACu) [[unlikely]] return; }
L_001727AC:
    st32((c.r[16].w[0] + 8u), c.f[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00172828; } }
L_001727B8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001727C8u); st32((c.r[16].w[0] + 8u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_001C(c, 238u, depth + 1u); else { c.pc = 0x00172990u; return; } if (c.pc != 0x001727C8u) [[unlikely]] return; }
L_001727C8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], 0u + 13u);  if (t) { goto L_00172824; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_001727E4; } }
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 2u);  if (t) { goto L_00172828; } }
L_001727E4:
    set32(c.r[3], 0u + 9u);
    c.budget -= 1;
L_001727E8:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 4u), c.r[3].w[0]);  if (t) { goto L_00172828; } }
L_001727F4:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 4u), c.r[3].w[0]);  if (t) { goto L_00172828; } }
L_00172800:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 4u), c.r[3].w[0]);  if (t) { goto L_00172828; } }
L_0017280C:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 4u), c.r[3].w[0]);  if (t) { goto L_00172828; } }
L_00172818:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 4u), c.r[3].w[0]);  if (t) { goto L_00172828; } }
L_00172824:
    set32(c.r[2], 0u + 3u);
    c.budget -= 1;
L_00172828:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00172840:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[25], ld32((c.r[4].w[0] + 1064u)));
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00172860u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00172860u) [[unlikely]] return; }
L_00172860:
    set32(c.r[3], 0u - 994u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[3], 0u - 995u);  if (t) { goto L_00172898; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0017288C; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00172884; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 12u);  if (t) { goto L_001728A0; } }
L_00172884:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_001728B0; } }
L_0017288C:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 12u), c.r[2].w[0]);  if (t) { goto L_001728AC; } }
L_00172898:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 12u), 0u);  if (t) { goto L_001728AC; } }
L_001728A0:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 4u), c.r[3].w[0]);  if (t) { goto L_001728B0; } }
L_001728AC:
    set32(c.r[2], 0u + 3u);
    c.budget -= 1;
L_001728B0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001728C0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[2], 0u + 41u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[5], c.r[5].w[0] + 25680u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0] + 11440u), c.r[2].w[0]);
    set32(c.r[16], c.r[17].w[0] + 11424u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00040000u);
    set32(c.r[4], c.r[16].w[0] + 32u);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001728F8u); c.r[6].d[0] = c.r[2].d[0] | 31264ull;  if (depth < kMaxDepth) unit_0009(c, 40u, depth + 1u); else { c.pc = 0x00124D20u; return; } if (c.pc != 0x001728F8u) [[unlikely]] return; }
L_001728F8:
    set32(c.r[2], 0u + 53u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st8((c.r[16].w[0] + 23u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00172910u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_001C(c, 251u, depth + 1u); else { c.pc = 0x00172DC0u; return; } if (c.pc != 0x00172910u) [[unlikely]] return; }
L_00172910:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 23u));
    c.r[7].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[2], 0u + 7u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] + c.r[7].w[0]);
    st8((c.r[16].w[0] + 21u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00172938u); st8((c.r[16].w[0] + 20u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_001C(c, 251u, depth + 1u); else { c.pc = 0x00172DC0u; return; } if (c.pc != 0x00172938u) [[unlikely]] return; }
L_00172938:
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[2].d[0] = ld8((c.r[16].w[0] + 20u));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], c.r[3].w[0] - c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00172954u); st8((c.r[16].w[0] + 22u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_001C(c, 236u, depth + 1u); else { c.pc = 0x00172970u; return; } if (c.pc != 0x00172954u) [[unlikely]] return; }
L_00172954:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00172970:
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00040000u);
    set32(c.r[4], c.r[4].w[0] + 11440u);
    c.r[5].d[0] = c.r[2].d[0] | 31280ull;
    c.budget -= 4;
L_00172980:
    c.budget -= 2;
    { set32(c.r[7], 0u + 16u);  [[clang::musttail]] return unit_001F(c, 28u, depth); }
L_00172990:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[5], c.r[29].w[0] + 48u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001729B0u); set32(c.r[16], c.r[17].w[0] + 11424u);  if (depth < kMaxDepth) unit_001C(c, 236u, depth + 1u); else { c.pc = 0x00172970u; return; } if (c.pc != 0x001729B0u) [[unlikely]] return; }
L_001729B0:
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001729C0u); set32(c.r[6], 0u + 16u);  if (depth < kMaxDepth) unit_0009(c, 37u, depth + 1u); else { c.pc = 0x00124C88u; return; } if (c.pc != 0x001729C0u) [[unlikely]] return; }
L_001729C0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_001729D0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 9u);  if (t) { goto L_00172A78; } }
L_001729D0:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001729DCu); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_001C(c, 251u, depth + 1u); else { c.pc = 0x00172DC0u; return; } if (c.pc != 0x001729DCu) [[unlikely]] return; }
L_001729DC:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 23u));
    c.r[4].d[0] = c.r[2].d[0] & 255ull;
    c.r[2].d[0] = ld8((c.r[16].w[0] + 21u));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00172A00; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 9u);  if (t) { goto L_00172A78; } }
L_00172A00:
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00172A0Cu); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_001C(c, 251u, depth + 1u); else { c.pc = 0x00172DC0u; return; } if (c.pc != 0x00172A0Cu) [[unlikely]] return; }
L_00172A0C:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 20u));
    c.r[4].d[0] = c.r[2].d[0] & 255ull;
    c.r[2].d[0] = ld8((c.r[16].w[0] + 22u));
    set32(c.r[3], c.r[4].w[0] - c.r[3].w[0]);
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00172A30; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 9u);  if (t) { goto L_00172A78; } }
L_00172A30:
    set32(c.r[3], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[2], 0u + 41u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00050000u);  if (t) { goto L_00172A48; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 13u);  if (t) { goto L_00172A78; } }
L_00172A48:
    set32(c.r[1], c.r[17].w[0] + c.r[1].w[0]);
    c.r[2].d[0] = ld8((c.r[1].w[0] - 17696u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x004B0000u);  if (t) { goto L_00172A60; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00172A78; } }
L_00172A60:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00040000u);
    set32(c.r[5], c.r[16].w[0] + 32u);
    set32(c.r[4], c.r[4].w[0] + 25680u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00172A74u); c.r[6].d[0] = c.r[2].d[0] | 31264ull;  if (depth < kMaxDepth) unit_0009(c, 40u, depth + 1u); else { c.pc = 0x00124D20u; return; } if (c.pc != 0x00172A74u) [[unlikely]] return; }
L_00172A74:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00172A78:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00172A90:
    set32(c.r[3], ld32((c.r[4].w[0] + 1036u)));
    c.r[2].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 3072u);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[6], c.r[6].w[0] + 1u);  if (t) { goto L_00172AB4; } }
    set32(c.r[2], c.r[2].w[0] + 32767u);
    set32(c.r[6], c.r[6].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] + 28673u);
    c.budget -= 3;
L_00172AB4:
    set32(c.r[3], ld32((c.r[4].w[0] + 1040u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00172AC4; } }
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.budget -= 1;
L_00172AC4:
    set32(c.r[3], ld32((c.r[4].w[0] + 1044u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00172AD4; } }
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.budget -= 1;
L_00172AD4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00040000u);
    set32(c.r[3], c.r[6].w[0] + 2u);
    c.r[4].d[0] = c.r[4].d[0] | 31744ull;
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 1));
    st32((c.r[5].w[0]), c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 10);
    set32(c.r[4], ld32((c.r[5].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);  c.pc = t; return; }
L_00172B00:
    c.r[2].d[0] = ld16((c.r[5].w[0] + 84u));
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], ld32((c.r[4].w[0] + 1124u)));
    c.r[2].d[0] = c.r[2].d[0] & 32ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_00172B20; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[7], c.r[7].w[0] - 2048u);  if (t) { goto L_00172B4C; } }
L_00172B20:
    set32(c.r[2], ld32((c.r[5].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(3ll) ? 1ull : 0ull;  if (t) { goto L_00172B4C; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00172B48; } }
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    set32(c.r[2], c.r[2].w[0] << 10);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[7], c.r[7].w[0] - c.r[2].w[0]);  if (t) { goto L_00172B4C; } }
L_00172B48:
    set32(c.r[7], c.r[7].w[0] - 2048u);
    c.budget -= 1;
L_00172B4C:
    set32(c.r[8], ld32((c.r[5].w[0] + 144u)));
    c.budget -= 3;
    { const bool t = c.r[8].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00172B78; } }
    set32(c.r[9], c.r[8].w[0] + 1023u);
    c.budget -= 3;
    { const bool t = c.r[9].sd[0] >= 0; set32(c.r[8], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[9].w[0]) >> 10));  if (t) { goto L_00172B6C; } }
    set32(c.r[8], c.r[9].w[0] + 1023u);
    set32(c.r[8], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[8].w[0]) >> 10));
    c.budget -= 2;
L_00172B6C:
    set32(c.r[8], c.r[8].w[0] << 10);
    set32(c.r[6], c.r[6].w[0] + 1u);
    set32(c.r[7], c.r[7].w[0] - c.r[8].w[0]);
    c.budget -= 3;
L_00172B78:
    set32(c.r[8], ld32((c.r[4].w[0] + 1036u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = c.r[8].d[0] == 0ull; set32(c.r[2], c.r[2].w[0] + 1u);  if (t) { goto L_00172BC0; } }
    set32(c.r[8], c.r[2].w[0] << 6);
    set32(c.r[8], c.r[8].w[0] + c.r[5].w[0]);
    set32(c.r[8], ld32((c.r[8].w[0] + 144u)));
    c.budget -= 5;
    { const bool t = c.r[8].d[0] == 0ull; set32(c.r[9], c.r[8].w[0] + 1023u);  if (t) { goto L_00172BB8; } }
    c.budget -= 2;
    { const bool t = c.r[9].sd[0] >= 0; set32(c.r[8], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[9].w[0]) >> 10));  if (t) { goto L_00172BAC; } }
    set32(c.r[8], c.r[9].w[0] + 1023u);
    set32(c.r[8], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[8].w[0]) >> 10));
    c.budget -= 2;
L_00172BAC:
    set32(c.r[8], c.r[8].w[0] << 10);
    set32(c.r[6], c.r[6].w[0] + 1u);
    set32(c.r[7], c.r[7].w[0] - c.r[8].w[0]);
    c.budget -= 3;
L_00172BB8:
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 2;
L_00172BC0:
    set32(c.r[8], ld32((c.r[4].w[0] + 1040u)));
    c.budget -= 3;
    { const bool t = c.r[8].d[0] == 0ull; set32(c.r[8], c.r[2].w[0] << 6);  if (t) { goto L_00172C00; } }
    set32(c.r[8], c.r[8].w[0] + c.r[5].w[0]);
    set32(c.r[8], ld32((c.r[8].w[0] + 144u)));
    c.budget -= 4;
    { const bool t = c.r[8].d[0] == 0ull; set32(c.r[9], c.r[8].w[0] + 1023u);  if (t) { goto L_00172BF8; } }
    c.budget -= 2;
    { const bool t = c.r[9].sd[0] >= 0; set32(c.r[8], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[9].w[0]) >> 10));  if (t) { goto L_00172BEC; } }
    set32(c.r[8], c.r[9].w[0] + 1023u);
    set32(c.r[8], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[8].w[0]) >> 10));
    c.budget -= 2;
L_00172BEC:
    set32(c.r[8], c.r[8].w[0] << 10);
    set32(c.r[6], c.r[6].w[0] + 1u);
    set32(c.r[7], c.r[7].w[0] - c.r[8].w[0]);
    c.budget -= 3;
L_00172BF8:
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 2;
L_00172C00:
    set32(c.r[8], ld32((c.r[4].w[0] + 1044u)));
    c.budget -= 3;
    { const bool t = c.r[8].d[0] == 0ull; set32(c.r[8], c.r[2].w[0] << 6);  if (t) { goto L_00172C40; } }
    set32(c.r[8], c.r[8].w[0] + c.r[5].w[0]);
    set32(c.r[8], ld32((c.r[8].w[0] + 144u)));
    c.budget -= 4;
    { const bool t = c.r[8].d[0] == 0ull; set32(c.r[9], c.r[8].w[0] + 1023u);  if (t) { goto L_00172C38; } }
    c.budget -= 2;
    { const bool t = c.r[9].sd[0] >= 0; set32(c.r[8], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[9].w[0]) >> 10));  if (t) { goto L_00172C2C; } }
    set32(c.r[8], c.r[9].w[0] + 1023u);
    set32(c.r[8], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[8].w[0]) >> 10));
    c.budget -= 2;
L_00172C2C:
    set32(c.r[8], c.r[8].w[0] << 10);
    set32(c.r[6], c.r[6].w[0] + 1u);
    set32(c.r[7], c.r[7].w[0] - c.r[8].w[0]);
    c.budget -= 3;
L_00172C38:
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 1;
L_00172C3C:
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 1;
L_00172C40:
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[8], c.r[2].w[0] + 144u);
    set32(c.r[2], ld32((c.r[2].w[0] + 144u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00172C88; } }
    set32(c.r[2], 0u + 1u);
    st32((c.r[4].w[0] + 1088u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[8].w[0])));
    set32(c.r[8], c.r[2].w[0] + 1023u);
    c.budget -= 6;
    { const bool t = c.r[8].sd[0] >= 0; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[8].w[0]) >> 10));  if (t) { goto L_00172C78; } }
    set32(c.r[2], c.r[8].w[0] + 1023u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 10));
    c.budget -= 2;
L_00172C78:
    set32(c.r[2], c.r[2].w[0] << 10);
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[7], c.r[7].w[0] - c.r[2].w[0]);  if (t) { goto L_00172C8C; } }
L_00172C88:
    st32((c.r[4].w[0] + 1088u), 0u);
    c.budget -= 1;
L_00172C8C:
    c.budget -= 2;
    { const bool t = c.r[6].sd[0] <= 0; set32(c.r[3], c.r[3].w[0] + 1u);  if (t) { goto L_00172CA4; } }
    set32(c.r[2], c.r[6].w[0] + 1u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    set32(c.r[2], c.r[2].w[0] << 10);
    set32(c.r[7], c.r[7].w[0] - c.r[2].w[0]);
    c.budget -= 4;
L_00172CA4:
    set32(c.r[2], ld32((c.r[5].w[0] + 80u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], c.r[3].w[0] - c.r[6].w[0]);  if (t) { goto L_00172CE4; } }
    c.budget -= 2;
    { const bool t = c.r[3].sd[0] <= 0; c.r[1].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;  if (t) { goto L_00172CE4; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00172CD4; } }
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    set32(c.r[2], c.r[2].w[0] << 10);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[7], c.r[7].w[0] - c.r[2].w[0]);  if (t) { goto L_00172CE4; } }
L_00172CD4:
    set32(c.r[2], c.r[3].w[0] + 1u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    set32(c.r[2], c.r[2].w[0] << 10);
    set32(c.r[7], c.r[7].w[0] - c.r[2].w[0]);
    c.budget -= 4;
L_00172CE4:
    set32(c.r[2], c.r[7].w[0] + 1023u);
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] >= 0; set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 10));  if (t) { goto L_00172CF8; } }
    set32(c.r[2], c.r[2].w[0] + 1023u);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 10));
    c.budget -= 2;
L_00172CF8:
    set32(c.r[2], ld32((c.r[4].w[0] + 1100u)));
    c.r[1].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00172D14; } }
    st32((c.r[4].w[0] + 1120u), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00172D24; } }
L_00172D14:
    set32(c.r[3], c.r[2].w[0] - c.r[3].w[0]);
    set32(c.r[3], c.r[3].w[0] << 10);
    set32(c.r[2], 0u + 1u);
    st32((c.r[4].w[0] + 1120u), c.r[3].w[0]);
    c.budget -= 4;
L_00172D24:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00172D30:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[5].d[0] = ld8((c.r[4].w[0] + 1068u));
    c.r[3].d[0] = c.r[5].d[0] & 1ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00172D98; } }
    c.r[3].d[0] = c.r[5].d[0] << 62;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00172D98; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 1072u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00172D70; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_00172D9C; } }
L_00172D70:
    set32(c.r[25], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 56u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00172D80u); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00172D80u) [[unlikely]] return; }
L_00172D80:
    set32(c.r[4], c.r[16].w[0] + 1076u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00172D90u); set32(c.r[6], 0u + 48u);  if (depth < kMaxDepth) unit_0009(c, 49u, depth + 1u); else { c.pc = 0x00124ED8u; return; } if (c.pc != 0x00172D90u) [[unlikely]] return; }
L_00172D90:
    st32((c.r[16].w[0] + 1076u), 0u);
    st32((c.r[16].w[0] + 1072u), 0u);
    c.budget -= 2;
L_00172D98:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_00172D9C:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00172DB0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[4].w[0] + 11424u);  c.pc = t; return; }
L_00172DC0:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00172E44; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull; c.r[8].d[0] = 0ull + 0ull;  if (t) { goto L_00172DDC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] & 255ull;  if (t) { goto L_00172E98; } }
L_00172DDC:
    set32(c.r[7], 0u + 3u);
    c.budget -= 1;
L_00172DE0:
    set32(c.r[3], c.r[8].w[0] << 3);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00040000u);
    set32(c.r[3], c.r[3].w[0] + c.r[8].w[0]);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[8].w[0]);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[4], c.r[6].w[0] + c.r[3].w[0]);
    set32(c.r[1], c.r[4].w[0] + c.r[1].w[0]);
    c.r[3].d[0] = ld16((c.r[1].w[0] + 21860u));
    c.budget -= 11;
    { const bool t = c.r[7].d[0] != 0ull; mmi::div(c, 0, c.r[3].w[0], c.r[7].w[0]);  if (t) { goto L_00172E10; } }
    breakpoint(c, 0x00172E0Cu);
    c.budget -= 1;
L_00172E10:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00040000u);
    set32(c.r[8], c.r[8].w[0] + 1u);
    set32(c.r[1], c.r[4].w[0] + c.r[1].w[0]);
    c.r[3].d[0] = c.r[8].sd[0] < 27ll ? 1ull : 0ull;
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 21857u)));
    c.r[5].d[0] = c.lo.d[0];
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    c.r[4].d[0] = c.r[4].d[0] & 255ull;
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    c.budget -= 11;
    { const bool t = c.r[3].d[0] != 0ull; c.r[2].d[0] = c.r[2].d[0] & 255ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00172DE0u | kUnwind; return; } goto L_00172DE0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00172E94; } }
L_00172E44:
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00172E48:
    set32(c.r[3], c.r[7].w[0] << 1);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00040000u);
    set32(c.r[3], c.r[3].w[0] + c.r[7].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[7], c.r[7].w[0] + 1u);
    set32(c.r[4], c.r[6].w[0] + c.r[3].w[0]);
    set32(c.r[1], c.r[4].w[0] + c.r[1].w[0]);
    c.r[3].d[0] = c.r[7].sd[0] < 10ll ? 1ull : 0ull;
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 20408u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00040000u);
    set32(c.r[1], c.r[4].w[0] + c.r[1].w[0]);
    c.r[4].d[0] = ld8((c.r[1].w[0] + 21368u));
    set32(c.r[4], c.r[4].w[0] + 1u);
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[5].w[0]) >> (c.r[4].w[0] & 31u)));
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 1));
    c.r[4].d[0] = c.r[4].d[0] & 255ull;
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    c.budget -= 19;
    { const bool t = c.r[3].d[0] != 0ull; c.r[2].d[0] = c.r[2].d[0] & 255ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00172E48u | kUnwind; return; } goto L_00172E48; } }
L_00172E94:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 1;
L_00172E98:
    c.r[2].d[0] = ~(c.r[2].d[0] | 0ull);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[2].d[0] & 255ull;  c.pc = t; return; }
L_00172EB0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    set32(c.r[2], ld32((c.r[4].w[0] + 1060u)));
    c.budget -= 5;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_00172EDC; } }
    c.f[1] = ld32((c.r[4].w[0] + 1056u));
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::cvt_s_w(c.f[1]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    c.budget -= 6;
L_00172EDC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00172EF0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[1].w[0] + 25392u), c.r[4].w[0]);  c.pc = t; return; }
L_00172F00:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 25392u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], c.r[4].w[0] << 3);  if (t) { goto L_00172F40; } }
    set32(c.r[3], c.r[4].w[0] << 3);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00040000u);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + 25680u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[1].d[0] = c.r[1].d[0] | 21802ull;
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 12;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] + c.r[1].w[0]);  if (t) { goto L_00172F68; } }
L_00172F40:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00040000u);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + 25680u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[1].d[0] = c.r[1].d[0] | 22828ull;
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[1].w[0]);
    c.budget -= 10;
L_00172F68:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00172F70:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[5], 0u + 38u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00172F88u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 111u, depth + 1u); else { c.pc = 0x00141670u; return; } if (c.pc != 0x00172F88u) [[unlikely]] return; }
L_00172F88:
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], 0u + 25500u);
    c.budget -= 2;
L_00172F90:
    set32(c.r[3], c.r[5].w[0] << 1);
    set32(c.r[3], c.r[16].w[0] + c.r[3].w[0]);
    set32(c.r[5], c.r[5].w[0] + 1u);
    st16((c.r[3].w[0] + 26u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[3].d[0] = c.r[5].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00172F90u | kUnwind; return; } goto L_00172F90; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00172FC0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00172FE4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_001C(c, 257u, depth + 1u); else { c.pc = 0x00172F70u; return; } if (c.pc != 0x00172FE4u) [[unlikely]] return; }
L_00172FE4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[6], c.r[18].w[0] + 1u);
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00172FF8u); set32(c.r[5], c.r[5].w[0] + 3920u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x00127458u; return; } if (c.pc != 0x00172FF8u) [[unlikely]] return; }
L_00172FF8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00173004u); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 233u, depth + 1u); else { c.pc = 0x00127BE8u; return; } if (c.pc != 0x00173004u) [[unlikely]] return; }
L_00173004:
    c.r[4].d[0] = c.r[17].d[0] << 56;
    st8((c.r[16].w[0] + 22u), static_cast<std::uint8_t>(c.r[17].w[0]));
    set32(c.r[5], 0u + 54u);
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    set32(c.r[3], 0u + 2u);
    c.budget -= 7;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; st16((c.r[16].w[0] + 34u), static_cast<std::uint16_t>(c.r[5].w[0]));  if (t) { goto L_00173028; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 3103u);  if (t) { goto L_0017302C; } }
L_00173028:
    set32(c.r[3], 0u + 3102u);
    c.budget -= 1;
L_0017302C:
    st16((c.r[16].w[0] + 32u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[3], 0u + 149u);
    st16((c.r[16].w[0] + 36u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_00173050:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x00172F00u | kUnwind; return; } goto L_00172F00; }
L_00173060:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00173070u);  if (depth < kMaxDepth) unit_001C(c, 256u, depth + 1u); else { c.pc = 0x00172F00u; return; } if (c.pc != 0x00173070u) [[unlikely]] return; }
L_00173070:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00173080u); set32(c.r[5], c.r[5].w[0] + 3944u);  if (depth < kMaxDepth) unit_0009(c, 229u, depth + 1u); else { c.pc = 0x00127AA0u; return; } if (c.pc != 0x00173080u) [[unlikely]] return; }
L_00173080:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00173090:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001730A4u); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_001C(c, 256u, depth + 1u); else { c.pc = 0x00172F00u; return; } if (c.pc != 0x001730A4u) [[unlikely]] return; }
L_001730A4:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001730B4u); set32(c.r[6], 0u + 38u);  if (depth < kMaxDepth) unit_0010(c, 107u, depth + 1u); else { c.pc = 0x001415A0u; return; } if (c.pc != 0x001730B4u) [[unlikely]] return; }
L_001730B4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001730D0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = 0ull + 0ull;
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 6;
L_001730E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001730F0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_001C(c, 265u, depth + 1u); else { c.pc = 0x00173060u; return; } if (c.pc != 0x001730F0u) [[unlikely]] return; }
L_001730F0:
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00173108; } }
L_00173100:
    set32(c.r[2], c.r[17].w[0] + 1u);
    c.r[17].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 2;
L_00173108:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < 27ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001730E8u | kUnwind; return; } goto L_001730E8; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00173130:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 9;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0017317C; } }
L_00173154:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017315Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_001C(c, 256u, depth + 1u); else { c.pc = 0x00172F00u; return; } if (c.pc != 0x0017315Cu) [[unlikely]] return; }
L_0017315C:
    set32(c.r[3], c.r[16].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld16((c.r[2].w[0] + 26u));
    c.budget -= 5;
    { const bool t = c.r[17].d[0] != c.r[2].d[0];  if (t) { goto L_00173178; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00173198; } }
L_00173178:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_0017317C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00173184u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_001C(c, 256u, depth + 1u); else { c.pc = 0x00172F00u; return; } if (c.pc != 0x00173184u) [[unlikely]] return; }
L_00173184:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 22u)));
    c.r[2].d[0] = c.r[16].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00173154u | kUnwind; return; } goto L_00173154; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00173198:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001731B0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = 0ull + 0ull;
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 6;
L_001731C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001731D0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_001C(c, 256u, depth + 1u); else { c.pc = 0x00172F00u; return; } if (c.pc != 0x001731D0u) [[unlikely]] return; }
L_001731D0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 22u)));
    set32(c.r[2], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001731E4; } }
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_001731E4:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < 27ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001731C8u | kUnwind; return; } goto L_001731C8; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00173210:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_00173244; } }
L_00173224:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017322Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_001C(c, 256u, depth + 1u); else { c.pc = 0x00172F00u; return; } if (c.pc != 0x0017322Cu) [[unlikely]] return; }
L_0017322C:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 22u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00173240; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00173250; } }
L_00173240:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_00173244:
    c.r[2].d[0] = c.r[16].sd[0] < 27ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u - 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00173224u | kUnwind; return; } goto L_00173224; } }
L_00173250:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00173260:
    set32(c.r[29], c.r[29].w[0] - 144u);
    set32(c.r[2], 0u + 25500u);
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] & 65535ull;
    c.budget -= 13;
    { const bool t = c.r[18].d[0] == c.r[2].d[0]; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_001732A0; } }
    c.r[17].d[0] = c.r[5].d[0] & 65535ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != c.r[2].d[0]; c.r[23].d[0] = c.r[6].d[0] & 65535ull;  if (t) { goto L_001732A8; } }
L_001732A0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00173354; } }
L_001732A8:
    c.budget -= 2;
    { const bool t = c.r[23].d[0] == c.r[2].d[0]; set32(c.r[22], 0u + 2u);  if (t) { goto L_001732B4; } }
    set32(c.r[22], 0u + 3u);
    c.budget -= 1;
L_001732B4:
    c.r[21].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[20].d[0] = 0ull + 0ull;  if (t) { goto L_00173348; } }
L_001732C0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_00173318; } }
L_001732C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001732D0u); set32(c.r[16], c.r[19].w[0] << 1);  if (depth < kMaxDepth) unit_001C(c, 256u, depth + 1u); else { c.pc = 0x00172F00u; return; } if (c.pc != 0x001732D0u) [[unlikely]] return; }
L_001732D0:
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.r[2].d[0] = ld16((c.r[2].w[0] + 26u));
    c.budget -= 4;
    { const bool t = c.r[18].d[0] == c.r[2].d[0]; c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_00173310; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001732E8u);  if (depth < kMaxDepth) unit_001C(c, 256u, depth + 1u); else { c.pc = 0x00172F00u; return; } if (c.pc != 0x001732E8u) [[unlikely]] return; }
L_001732E8:
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.r[2].d[0] = ld16((c.r[2].w[0] + 26u));
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == c.r[2].d[0]; c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_00173310; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00173300u);  if (depth < kMaxDepth) unit_001C(c, 256u, depth + 1u); else { c.pc = 0x00172F00u; return; } if (c.pc != 0x00173300u) [[unlikely]] return; }
L_00173300:
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.r[2].d[0] = ld16((c.r[2].w[0] + 26u));
    c.budget -= 4;
    { const bool t = c.r[23].d[0] != c.r[2].d[0];  if (t) { goto L_00173314; } }
L_00173310:
    set32(c.r[21], c.r[21].w[0] + 1u);
    c.budget -= 1;
L_00173314:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.budget -= 1;
L_00173318:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00173320u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_001C(c, 256u, depth + 1u); else { c.pc = 0x00172F00u; return; } if (c.pc != 0x00173320u) [[unlikely]] return; }
L_00173320:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 22u)));
    c.r[2].d[0] = c.r[19].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001732C8u | kUnwind; return; } goto L_001732C8; } }
    c.budget -= 2;
    { const bool t = c.r[21].d[0] != c.r[22].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_00173340; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));  if (t) { goto L_00173358; } }
L_00173340:
    c.r[21].d[0] = 0ull + 0ull;
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.budget -= 2;
L_00173348:
    c.r[2].d[0] = c.r[20].sd[0] < 27ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001732C0u | kUnwind; return; } goto L_001732C0; } }
L_00173354:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));
    c.budget -= 1;
L_00173358:
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_00173380:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00173390u);  if (depth < kMaxDepth) unit_001C(c, 256u, depth + 1u); else { c.pc = 0x00172F00u; return; } if (c.pc != 0x00173390u) [[unlikely]] return; }
L_00173390:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001733A0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001733BCu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_001C(c, 256u, depth + 1u); else { c.pc = 0x00172F00u; return; } if (c.pc != 0x001733BCu) [[unlikely]] return; }
L_001733BC:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001733C8u); set32(c.r[5], 0u + 38u);  if (depth < kMaxDepth) unit_0010(c, 111u, depth + 1u); else { c.pc = 0x00141670u; return; } if (c.pc != 0x001733C8u) [[unlikely]] return; }
L_001733C8:
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001733CC:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001733D8u); set32(c.r[16], 0u + 25500u);  if (depth < kMaxDepth) unit_001C(c, 256u, depth + 1u); else { c.pc = 0x00172F00u; return; } if (c.pc != 0x001733D8u) [[unlikely]] return; }
L_001733D8:
    set32(c.r[3], c.r[17].w[0] << 1);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001733ECu); st16((c.r[2].w[0] + 26u), static_cast<std::uint16_t>(c.r[16].w[0]));  if (depth < kMaxDepth) unit_001C(c, 256u, depth + 1u); else { c.pc = 0x00172F00u; return; } if (c.pc != 0x001733ECu) [[unlikely]] return; }
L_001733EC:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[3].d[0] = c.r[17].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st8((c.r[2].w[0] + 22u), static_cast<std::uint8_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001733CCu | kUnwind; return; } goto L_001733CC; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00173420:
    set32(c.r[29], c.r[29].w[0] - 128u);
    c.r[7].d[0] = c.r[4].d[0] & 65535ull;
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    set32(c.r[6], 0u + 25500u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.budget -= 7;
L_0017343C:
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 5;
    { const bool t = c.r[7].d[0] != c.r[6].d[0]; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_0017345C; } }
    c.r[3].d[0] = c.r[5].d[0] & 65535ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[6].d[0];  if (t) { goto L_00173560; } }
L_0017345C:
    set32(c.r[3], 0u + 25500u);
    c.budget -= 3;
    { const bool t = c.r[7].d[0] != c.r[3].d[0]; c.r[18].d[0] = c.r[5].d[0] & 65535ull;  if (t) { goto L_00173480; } }
    c.r[2].d[0] = c.r[5].d[0] & 65535ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0017347C; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[3].d[0] & 65535ull;
    c.budget -= 2;
L_0017347C:
    c.r[18].d[0] = c.r[5].d[0] & 65535ull;
    c.budget -= 1;
L_00173480:
    c.r[17].d[0] = c.r[4].d[0] & 65535ull;
    c.r[20].d[0] = 0ull + 0ull;
    c.r[21].d[0] = 0ull + 0ull;
    c.budget -= 3;
L_0017348C:
    c.r[22].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_00173500; } }
L_00173498:
    set32(c.r[2], 0u + 25500u);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] != c.r[2].d[0]; c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_001734C8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001734ACu); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_001C(c, 256u, depth + 1u); else { c.pc = 0x00172F00u; return; } if (c.pc != 0x001734ACu) [[unlikely]] return; }
L_001734AC:
    set32(c.r[3], c.r[19].w[0] << 1);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    c.r[3].d[0] = ld16((c.r[3].w[0] + 26u));
    c.budget -= 5;
    { const bool t = c.r[17].d[0] != c.r[3].d[0];  if (t) { goto L_001734FC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[22].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_00173518; } }
L_001734C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001734D0u); set32(c.r[16], c.r[19].w[0] << 1);  if (depth < kMaxDepth) unit_001C(c, 256u, depth + 1u); else { c.pc = 0x00172F00u; return; } if (c.pc != 0x001734D0u) [[unlikely]] return; }
L_001734D0:
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.r[2].d[0] = ld16((c.r[2].w[0] + 26u));
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == c.r[2].d[0]; c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_001734F8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001734E8u);  if (depth < kMaxDepth) unit_001C(c, 256u, depth + 1u); else { c.pc = 0x00172F00u; return; } if (c.pc != 0x001734E8u) [[unlikely]] return; }
L_001734E8:
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.r[2].d[0] = ld16((c.r[2].w[0] + 26u));
    c.budget -= 4;
    { const bool t = c.r[18].d[0] != c.r[2].d[0];  if (t) { goto L_001734FC; } }
L_001734F8:
    set32(c.r[21], c.r[21].w[0] + 1u);
    c.budget -= 1;
L_001734FC:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.budget -= 1;
L_00173500:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00173508u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_001C(c, 256u, depth + 1u); else { c.pc = 0x00172F00u; return; } if (c.pc != 0x00173508u) [[unlikely]] return; }
L_00173508:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 22u)));
    c.r[3].d[0] = c.r[19].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00173498u | kUnwind; return; } goto L_00173498; } }
L_00173518:
    c.budget -= 2;
    { const bool t = c.r[21].sd[0] <= 0; c.r[4].d[0] = c.r[22].d[0] & 255ull;  if (t) { goto L_0017353C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00173528u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_001C(c, 256u, depth + 1u); else { c.pc = 0x00172F00u; return; } if (c.pc != 0x00173528u) [[unlikely]] return; }
L_00173528:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 22u)));
    c.budget -= 3;
    { const bool t = c.r[21].d[0] != c.r[3].d[0];  if (t) { goto L_00173538; } }
    c.r[22].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_00173538:
    c.r[4].d[0] = c.r[22].d[0] & 255ull;
    c.budget -= 1;
L_0017353C:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_00173550; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00173550u);  if (depth < kMaxDepth) unit_001C(c, 294u, depth + 1u); else { c.pc = 0x001733A0u; return; } if (c.pc != 0x00173550u) [[unlikely]] return; }
L_00173550:
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.r[3].d[0] = c.r[20].sd[0] < 27ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[21].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0017348Cu | kUnwind; return; } goto L_0017348C; } }
L_00173560:
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
L_00173590:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 9;
L_001735B4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_001735EC; } }
L_001735BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001735C4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_001C(c, 256u, depth + 1u); else { c.pc = 0x00172F00u; return; } if (c.pc != 0x001735C4u) [[unlikely]] return; }
L_001735C4:
    set32(c.r[3], c.r[16].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld16((c.r[2].w[0] + 26u));
    c.budget -= 5;
    { const bool t = c.r[19].d[0] != c.r[2].d[0];  if (t) { goto L_001735E8; } }
    set32(c.r[2], c.r[18].w[0] + 1u);
    c.r[18].d[0] = c.r[2].d[0] << 56;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = static_cast<std::uint64_t>(c.r[18].sd[0] >> 56);  if (t) { goto L_00173604; } }
L_001735E8:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_001735EC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001735F4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_001C(c, 256u, depth + 1u); else { c.pc = 0x00172F00u; return; } if (c.pc != 0x001735F4u) [[unlikely]] return; }
L_001735F4:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 22u)));
    c.r[2].d[0] = c.r[16].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001735BCu | kUnwind; return; } goto L_001735BC; } }
L_00173604:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].sd[0] < 27ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = c.r[18].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001735B4u | kUnwind; return; } goto L_001735B4; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00173630:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[22].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    set32(c.r[21], 0u + 25500u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] << 56;
    c.r[16].d[0] = c.r[6].d[0] << 56;
    c.r[17].d[0] = static_cast<std::uint64_t>(c.r[17].sd[0] >> 56);
    c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 56);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 18;
L_00173678:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00173680u); c.r[5].d[0] = c.r[22].d[0] + 0ull;  if (depth < kMaxDepth) unit_001C(c, 275u, depth + 1u); else { c.pc = 0x00173130u; return; } if (c.pc != 0x00173680u) [[unlikely]] return; }
L_00173680:
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00173764; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != c.r[20].d[0]; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_00173760; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_00173748; } }
L_001736A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001736A8u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_001C(c, 256u, depth + 1u); else { c.pc = 0x00172F00u; return; } if (c.pc != 0x001736A8u) [[unlikely]] return; }
L_001736A8:
    set32(c.r[3], c.r[18].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld16((c.r[2].w[0] + 26u));
    c.budget -= 5;
    { const bool t = c.r[22].d[0] != c.r[2].d[0];  if (t) { goto L_00173740; } }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_001736EC; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull; c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_001736DC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001736D4u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_001C(c, 256u, depth + 1u); else { c.pc = 0x00172F00u; return; } if (c.pc != 0x001736D4u) [[unlikely]] return; }
L_001736D4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[21].d[0] = ld16((c.r[2].w[0] + 28u));  if (t) { goto L_00173740; } }
L_001736DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001736E4u);  if (depth < kMaxDepth) unit_001C(c, 256u, depth + 1u); else { c.pc = 0x00172F00u; return; } if (c.pc != 0x001736E4u) [[unlikely]] return; }
L_001736E4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[21].d[0] = ld16((c.r[2].w[0] + 30u));  if (t) { goto L_00173740; } }
L_001736EC:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != c.r[2].d[0];  if (t) { goto L_0017371C; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull; c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_0017370C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00173704u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_001C(c, 256u, depth + 1u); else { c.pc = 0x00172F00u; return; } if (c.pc != 0x00173704u) [[unlikely]] return; }
L_00173704:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[21].d[0] = ld16((c.r[2].w[0] + 26u));  if (t) { goto L_00173740; } }
L_0017370C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00173714u);  if (depth < kMaxDepth) unit_001C(c, 256u, depth + 1u); else { c.pc = 0x00172F00u; return; } if (c.pc != 0x00173714u) [[unlikely]] return; }
L_00173714:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[21].d[0] = ld16((c.r[2].w[0] + 30u));  if (t) { goto L_00173740; } }
L_0017371C:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull; c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_00173734; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017372Cu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_001C(c, 256u, depth + 1u); else { c.pc = 0x00172F00u; return; } if (c.pc != 0x0017372Cu) [[unlikely]] return; }
L_0017372C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[21].d[0] = ld16((c.r[2].w[0] + 26u));  if (t) { goto L_00173740; } }
L_00173734:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017373Cu);  if (depth < kMaxDepth) unit_001C(c, 256u, depth + 1u); else { c.pc = 0x00172F00u; return; } if (c.pc != 0x0017373Cu) [[unlikely]] return; }
L_0017373C:
    c.r[21].d[0] = ld16((c.r[2].w[0] + 28u));
    c.budget -= 1;
L_00173740:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 2;
L_00173748:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00173750u);  if (depth < kMaxDepth) unit_001C(c, 256u, depth + 1u); else { c.pc = 0x00172F00u; return; } if (c.pc != 0x00173750u) [[unlikely]] return; }
L_00173750:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 22u)));
    c.r[2].d[0] = c.r[18].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001736A0u | kUnwind; return; } goto L_001736A0; } }
L_00173760:
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.budget -= 1;
L_00173764:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.r[2].d[0] = c.r[19].sd[0] < 27ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00173678u | kUnwind; return; } goto L_00173678; } }
    c.r[2].d[0] = c.r[21].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_001737A0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    set32(c.r[2], 0u + 25500u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    set32(c.r[8], c.r[29].w[0] + 106u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st16((c.r[29].w[0] + 104u), static_cast<std::uint16_t>(c.r[4].w[0]));
    st16((c.r[8].w[0]), static_cast<std::uint16_t>(c.r[5].w[0]));
    set32(c.r[4], c.r[29].w[0] + 108u);
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[6].w[0]));
    c.r[3].d[0] = ld16((c.r[29].w[0] + 104u));
    c.budget -= 16;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[20].d[0] = 0ull + 0ull;  if (t) { goto L_001737E4; } }
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.budget -= 1;
L_001737E4:
    c.r[3].d[0] = ld16((c.r[8].w[0]));
    set32(c.r[2], 0u + 25500u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001737F8; } }
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.budget -= 1;
L_001737F8:
    c.r[3].d[0] = ld16((c.r[4].w[0]));
    set32(c.r[2], 0u + 25500u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);  if (t) { goto L_0017380C; } }
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.budget -= 1;
L_0017380C:
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], ld32((c.r[1].w[0] + 25392u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[16].d[0] = c.r[7].d[0] & 255ull;  if (t) { goto L_00173824; } }
    c.r[7].d[0] = 0ull + 0ull;
    c.r[16].d[0] = c.r[7].d[0] & 255ull;
    c.budget -= 2;
L_00173824:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_00173904; } }
L_0017382C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_001738A4; } }
L_00173834:
    set32(c.r[2], 0u + 25500u);
    set32(c.r[3], c.r[3].w[0] + c.r[29].w[0]);
    c.r[3].d[0] = ld16((c.r[3].w[0] + 104u));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[4], c.r[3].w[0] - 10000u);  if (t) { goto L_001738A0; } }
    c.budget -= 2;
    { const bool t = c.r[4].sd[0] < 0; set32(c.r[2], 0u - 1u);  if (t) { goto L_00173864; } }
    set32(c.r[2], 0u + 100u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; mmi::div(c, 0, c.r[4].w[0], c.r[2].w[0]);  if (t) { goto L_00173860; } }
    breakpoint(c, 0x0017385Cu);
    c.budget -= 1;
L_00173860:
    c.r[2].d[0] = c.lo.d[0];
    c.budget -= 1;
L_00173864:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[5], c.r[2].w[0] + 86u);  if (t) { goto L_00173874; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_0017388C; } }
L_00173874:
    set32(c.r[2], 0u + 100u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);  if (t) { goto L_00173884; } }
L_00173880:
    breakpoint(c, 0x00173880u);
    c.budget -= 1;
L_00173884:
    c.r[5].d[0] = c.lo.d[0];
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 2;
L_0017388C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00173894u);  if (depth < kMaxDepth) unit_001C(c, 275u, depth + 1u); else { c.pc = 0x00173130u; return; } if (c.pc != 0x00173894u) [[unlikely]] return; }
L_00173894:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001738A0; } }
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_001738A0:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_001738A4:
    c.r[2].d[0] = c.r[17].sd[0] < c.r[20].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], c.r[17].w[0] << 1);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00173834u | kUnwind; return; } goto L_00173834; } }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull; c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_00173900; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001738C0u);  if (depth < kMaxDepth) unit_001C(c, 256u, depth + 1u); else { c.pc = 0x00172F00u; return; } if (c.pc != 0x001738C0u) [[unlikely]] return; }
L_001738C0:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 22u)));
    c.budget -= 3;
    { const bool t = c.r[20].d[0] != c.r[2].d[0];  if (t) { goto L_00173900; } }
    c.budget -= 2;
    { const bool t = c.r[20].d[0] != c.r[18].d[0]; c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_00173900; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001738DCu);  if (depth < kMaxDepth) unit_001C(c, 256u, depth + 1u); else { c.pc = 0x00172F00u; return; } if (c.pc != 0x001738DCu) [[unlikely]] return; }
L_001738DC:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001738F8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001738ECu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_001C(c, 335u, depth + 1u); else { c.pc = 0x00173940u; return; } if (c.pc != 0x001738ECu) [[unlikely]] return; }
L_001738EC:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00173900; } }
L_001738F8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00173914; } }
L_00173900:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.budget -= 1;
L_00173904:
    c.r[2].d[0] = c.r[19].sd[0] < 27ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0017382Cu | kUnwind; return; } goto L_0017382C; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00173914:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_00173940:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 22u)));
    c.r[1].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[1].d[0] == 0ull; c.r[19].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00173974; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00173A1C; } }
L_00173974:
    set32(c.r[18], 0u - 1u);
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_00173A08; } }
L_00173984:
    set32(c.r[2], 0u + 25500u);
    set32(c.r[3], c.r[19].w[0] + c.r[3].w[0]);
    c.r[4].d[0] = ld16((c.r[3].w[0] + 26u));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; set32(c.r[20], c.r[3].w[0] + 26u);  if (t) { goto L_00173A04; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001739A0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 108u, depth + 1u); else { c.pc = 0x0012D050u; return; } if (c.pc != 0x001739A0u) [[unlikely]] return; }
L_001739A0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001739B0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00173A1C; } }
L_001739B0:
    c.r[4].d[0] = ld16((c.r[20].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001739BCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 104u, depth + 1u); else { c.pc = 0x0012CEC0u; return; } if (c.pc != 0x001739BCu) [[unlikely]] return; }
L_001739BC:
    c.r[4].d[0] = c.r[18].d[0] << 56;
    set32(c.r[3], 0u - 1u);
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001739DC; } }
    c.r[17].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 354u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[18].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 353u)));  if (t) { goto L_00173A04; } }
L_001739DC:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 353u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_001739FC; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 354u)));
    c.r[2].d[0] = c.r[17].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00173A04; } }
L_001739FC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00173A1C; } }
L_00173A04:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_00173A08:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 22u)));
    c.r[2].d[0] = c.r[16].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], c.r[16].w[0] << 1);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00173984u | kUnwind; return; } goto L_00173984; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_00173A1C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_00173A40:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 22u)));
    c.r[1].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] == 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00173A68; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00173AA8; } }
L_00173A68:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_00173A94; } }
L_00173A70:
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    c.r[4].d[0] = ld16((c.r[2].w[0] + 26u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00173A80u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 108u, depth + 1u); else { c.pc = 0x0012D050u; return; } if (c.pc != 0x00173A80u) [[unlikely]] return; }
L_00173A80:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00173A90; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00173AA8; } }
L_00173A90:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_00173A94:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 22u)));
    c.r[2].d[0] = c.r[16].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[16].w[0] << 1);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00173A70u | kUnwind; return; } goto L_00173A70; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_00173AA8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00173AC0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 22u)));
    c.r[1].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[1].d[0] == 0ull; c.r[18].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00173AEC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00173B5C; } }
L_00173AEC:
    set32(c.r[17], 0u - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_00173B48; } }
L_00173AF8:
    set32(c.r[2], 0u + 25500u);
    set32(c.r[3], c.r[18].w[0] + c.r[3].w[0]);
    c.r[4].d[0] = ld16((c.r[3].w[0] + 26u));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_00173B44; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00173B14u);  if (depth < kMaxDepth) unit_000B(c, 104u, depth + 1u); else { c.pc = 0x0012CEC0u; return; } if (c.pc != 0x00173B14u) [[unlikely]] return; }
L_00173B14:
    c.r[4].d[0] = c.r[17].d[0] << 56;
    set32(c.r[3], 0u - 1u);
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00173B30; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 353u)));  if (t) { goto L_00173B44; } }
L_00173B30:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 353u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[4].d[0];  if (t) { goto L_00173B44; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00173B5C; } }
L_00173B44:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_00173B48:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 22u)));
    c.r[2].d[0] = c.r[16].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], c.r[16].w[0] << 1);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00173AF8u | kUnwind; return; } goto L_00173AF8; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_00173B5C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00173B80:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 22u)));
    c.r[1].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[1].d[0] == 0ull; c.r[18].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00173BAC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00173C1C; } }
L_00173BAC:
    set32(c.r[17], 0u - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_00173C08; } }
L_00173BB8:
    set32(c.r[2], 0u + 25500u);
    set32(c.r[3], c.r[18].w[0] + c.r[3].w[0]);
    c.r[4].d[0] = ld16((c.r[3].w[0] + 26u));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_00173C04; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00173BD4u);  if (depth < kMaxDepth) unit_000B(c, 104u, depth + 1u); else { c.pc = 0x0012CEC0u; return; } if (c.pc != 0x00173BD4u) [[unlikely]] return; }
L_00173BD4:
    c.r[4].d[0] = c.r[17].d[0] << 56;
    set32(c.r[3], 0u - 1u);
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00173BF0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 354u)));  if (t) { goto L_00173C04; } }
L_00173BF0:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 354u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[4].d[0];  if (t) { goto L_00173C04; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00173C1C; } }
L_00173C04:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_00173C08:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 22u)));
    c.r[2].d[0] = c.r[16].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], c.r[16].w[0] << 1);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00173BB8u | kUnwind; return; } goto L_00173BB8; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_00173C1C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00173C40:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 22u)));
    c.r[3].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[3].d[0] != 0ull; c.r[19].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00173CFC; } }
    set32(c.r[18], 0u - 1u);
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_00173CE4; } }
L_00173C78:
    set32(c.r[3], 0u + 25500u);
    set32(c.r[4], c.r[19].w[0] + c.r[4].w[0]);
    c.r[4].d[0] = ld16((c.r[4].w[0] + 26u));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_00173CE0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00173C94u);  if (depth < kMaxDepth) unit_000B(c, 104u, depth + 1u); else { c.pc = 0x0012CEC0u; return; } if (c.pc != 0x00173C94u) [[unlikely]] return; }
L_00173C94:
    c.r[4].d[0] = c.r[18].d[0] << 56;
    set32(c.r[3], 0u - 1u);
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00173CB4; } }
    c.r[17].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 354u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[18].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 353u)));  if (t) { goto L_00173CE0; } }
L_00173CB4:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 353u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[4].d[0]; set32(c.r[3], 0u + 2u);  if (t) { goto L_00173CD8; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 354u)));
    c.r[3].d[0] = c.r[17].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00173CE0; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 1;
L_00173CD8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[19].w[0] + 23u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00173CFC; } }
L_00173CE0:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_00173CE4:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 22u)));
    c.r[3].d[0] = c.r[16].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[4], c.r[16].w[0] << 1);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00173C78u | kUnwind; return; } goto L_00173C78; } }
    st8((c.r[19].w[0] + 23u), static_cast<std::uint8_t>(c.r[18].w[0]));
    st8((c.r[19].w[0] + 24u), static_cast<std::uint8_t>(c.r[17].w[0]));
    c.budget -= 2;
L_00173CFC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00173D20:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[16].w[0] << 3);
    c.budget -= 8;
L_00173D40:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00040000u);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + 25680u);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    c.r[1].d[0] = c.r[1].d[0] | 22828ull;
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00173D6Cu); set32(c.r[4], c.r[2].w[0] + c.r[1].w[0]);  if (depth < kMaxDepth) unit_001C(c, 257u, depth + 1u); else { c.pc = 0x00172F70u; return; } if (c.pc != 0x00173D6Cu) [[unlikely]] return; }
L_00173D6C:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < 27ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], c.r[16].w[0] << 3);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00173D40u | kUnwind; return; } goto L_00173D40; } }
    c.r[17].d[0] = 0ull + 0ull;
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[16].w[0] << 3);
    c.budget -= 3;
L_00173D88:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00040000u);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + 25680u);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    c.r[1].d[0] = c.r[1].d[0] | 21802ull;
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[19], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[18], c.r[19].w[0] + c.r[1].w[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00173DB8u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_001C(c, 335u, depth + 1u); else { c.pc = 0x00173940u; return; } if (c.pc != 0x00173DB8u) [[unlikely]] return; }
L_00173DB8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_00173E0C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00173DC8u);  if (depth < kMaxDepth) unit_001C(c, 365u, depth + 1u); else { c.pc = 0x00173F60u; return; } if (c.pc != 0x00173DC8u) [[unlikely]] return; }
L_00173DC8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00173E0C; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00040000u);
    set32(c.r[2], c.r[4].w[0] << 3);
    c.r[1].d[0] = c.r[1].d[0] | 22828ull;
    set32(c.r[3], c.r[2].w[0] + c.r[4].w[0]);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] << 1);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] + 25680u);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[6], 0u + 38u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00173E0Cu); set32(c.r[4], c.r[2].w[0] + c.r[1].w[0]);  if (depth < kMaxDepth) unit_0010(c, 107u, depth + 1u); else { c.pc = 0x001415A0u; return; } if (c.pc != 0x00173E0Cu) [[unlikely]] return; }
L_00173E0C:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[3].d[0] = c.r[16].sd[0] < 27ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], c.r[16].w[0] << 3);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00173D88u | kUnwind; return; } goto L_00173D88; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00173E40:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 22u)));
    c.r[1].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 13;
    { const bool t = c.r[1].d[0] == 0ull; c.r[22].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00173E7C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00173F30; } }
L_00173E7C:
    c.r[21].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[20].d[0] = 0ull + 0ull;  if (t) { goto L_00173F24; } }
L_00173E88:
    c.r[16].sd[0] = static_cast<std::int8_t>(ld8((c.r[22].w[0] + 22u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00173E94u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_001C(c, 256u, depth + 1u); else { c.pc = 0x00172F00u; return; } if (c.pc != 0x00173E94u) [[unlikely]] return; }
L_00173E94:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 22u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[2].d[0]; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_00173F08; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_00173EF0; } }
L_00173EA8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[19].w[0] << 1);  if (t) { goto L_00173ED8; } }
L_00173EB0:
    set32(c.r[2], c.r[22].w[0] + c.r[2].w[0]);
    c.r[16].d[0] = ld16((c.r[2].w[0] + 26u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00173EC0u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_001C(c, 256u, depth + 1u); else { c.pc = 0x00172F00u; return; } if (c.pc != 0x00173EC0u) [[unlikely]] return; }
L_00173EC0:
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = ld16((c.r[2].w[0] + 26u));
    c.budget -= 4;
    { const bool t = c.r[16].d[0] != c.r[2].d[0];  if (t) { goto L_00173ED4; } }
    set32(c.r[21], c.r[21].w[0] + 1u);
    c.budget -= 1;
L_00173ED4:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_00173ED8:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[22].w[0] + 22u)));
    c.r[2].d[0] = c.r[18].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[18].w[0] << 1);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00173EB0u | kUnwind; return; } goto L_00173EB0; } }
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 2;
L_00173EF0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00173EF8u);  if (depth < kMaxDepth) unit_001C(c, 256u, depth + 1u); else { c.pc = 0x00172F00u; return; } if (c.pc != 0x00173EF8u) [[unlikely]] return; }
L_00173EF8:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 22u)));
    c.r[2].d[0] = c.r[19].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00173EA8u | kUnwind; return; } goto L_00173EA8; } }
L_00173F08:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[22].w[0] + 22u)));
    c.budget -= 3;
    { const bool t = c.r[21].d[0] != c.r[2].d[0]; c.r[2].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_00173F1C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));  if (t) { goto L_00173F34; } }
L_00173F1C:
    c.r[21].d[0] = 0ull + 0ull;
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.budget -= 2;
L_00173F24:
    c.r[2].d[0] = c.r[20].sd[0] < 27ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u - 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00173E88u | kUnwind; return; } goto L_00173E88; } }
L_00173F30:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    c.budget -= 1;
L_00173F34:
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_00173F60:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00173F70u);  if (depth < kMaxDepth) unit_001C(c, 358u, depth + 1u); else { c.pc = 0x00173E40u; return; } if (c.pc != 0x00173F70u) [[unlikely]] return; }
L_00173F70:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = c.r[2].sd[0] < 0ll ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00173F90:
    set32(c.r[29], c.r[29].w[0] - 592u);
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[5].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], 0u + 25500u);
    c.budget -= 14;
L_00173FC8:
    set32(c.r[2], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[5], c.r[5].w[0] + 1u);
    st32((c.r[3].w[0] + 368u), c.r[4].w[0]);
    c.r[2].d[0] = c.r[5].sd[0] < 54ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[3].w[0] + 144u), c.r[4].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00173FC8u | kUnwind; return; } goto L_00173FC8; } }
    c.r[23].d[0] = 0ull + 0ull;
    c.r[19].d[0] = 0ull + 0ull;
    c.r[18].d[0] = 0ull + 0ull;
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 4;
L_00173FF4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { [[clang::musttail]] return unit_001D(c, 7u, depth); } }
L_00173FFC:
    set32(c.r[22], ld32((c.r[21].w[0])));
    c.budget -= 1;
    [[clang::musttail]] return unit_001D(c, 1u, depth);
}

}
