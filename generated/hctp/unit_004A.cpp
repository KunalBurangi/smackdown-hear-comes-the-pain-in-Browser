#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_004A[4096] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0,
    4, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 8, 0, 0, 0,
    9, 0, 0, 0, 10, 0, 0, 0, 11, 0, 0, 0, 12, 0, 0, 0, 13, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 18,
    0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 20, 0, 0, 0, 0, 21, 0, 0, 22, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 25, 0, 0, 0, 26, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 31,
    0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0,
    37, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0,
    41, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 45, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 47, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0, 54, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0,
    0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 64,
    0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0,
    75, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 77, 0, 0, 0, 78, 0, 0, 0, 79, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 81, 0, 0, 82, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    84, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 86, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0,
    88, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 94, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 96, 0, 0, 0,
    97, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 104, 0, 0, 0, 0, 105, 0, 0, 0, 0, 106, 0, 0, 0,
    0, 107, 0, 0, 0, 0, 108, 0, 109, 0, 110, 0, 0, 0, 0, 111, 0, 112, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 114, 0, 0, 0, 0, 115, 0, 0, 0, 0,
    0, 0, 0, 116, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 118, 0,
    0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 120, 0,
    0, 0, 0, 0, 0, 0, 121, 0, 0, 0, 0, 122, 0, 123, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0,
    0, 0, 130, 0, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 134, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 142, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0,
    0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 147, 0, 0, 0, 0,
    148, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 151,
    0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    153, 0, 0, 0, 0, 154, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 161, 0, 0, 0, 162, 0, 0,
    0, 0, 0, 163, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 165, 0, 0, 0,
    0, 0, 0, 166, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 172, 0, 0, 0, 0,
    0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 177, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 178, 0, 0, 179, 0, 0, 0, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 182, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 183, 0, 0, 0, 0, 0, 0, 0, 0,
    184, 0, 0, 0, 0, 0, 185, 0, 0, 0, 186, 0, 0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 189, 0,
    0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 0, 0, 0, 194, 0, 195, 0, 0, 196, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 0, 0, 0, 0, 199, 0, 0, 0, 0, 0, 200, 0,
    0, 0, 201, 0, 0, 0, 0, 0, 202, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 203, 0, 0, 0, 0, 204, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    205, 0, 0, 0, 0, 0, 0, 0, 0, 206, 0, 0, 207, 0, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 0, 0, 209, 0, 0,
    0, 210, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 211, 0, 0, 0, 0, 0, 0, 212, 0, 0, 0, 0, 0, 0, 0, 213, 0, 0, 0,
    214, 0, 0, 0, 0, 0, 215, 0, 0, 216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 217, 0, 0, 0,
    0, 0, 0, 0, 218, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 219, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    220, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 221, 0, 0, 222, 0, 0, 0, 0, 0, 0, 0, 0, 223, 0, 0, 224, 0, 0, 225,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    226, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 227, 0, 0, 0, 0, 0, 0, 0, 0, 0, 228, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 229, 0, 0, 0, 0, 0, 230, 0, 0, 0, 0, 0, 0, 0, 231, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 232, 0, 0, 0, 0, 0, 0, 0, 0, 0, 233, 0, 0, 0, 0, 0, 0, 0, 0,
    234, 0, 0, 235, 0, 0, 236, 0, 0, 0, 0, 0, 237, 0, 0, 0, 0, 0, 0, 0, 238, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 239, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 241,
    0, 0, 0, 0, 0, 242, 0, 243, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 244, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 245, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 246, 0, 0, 0,
    0, 0, 247, 0, 0, 0, 0, 0, 248, 0, 0, 0, 249, 0, 0, 0, 250, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 251, 0, 0, 252, 0, 0, 253, 0, 0, 0, 0, 0, 254, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 256, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 257, 0, 0, 258, 0, 0, 259, 0, 0, 0, 0, 0, 260, 0, 0, 0, 0,
    0, 0, 0, 0, 261, 0, 0, 0, 262, 0, 0, 0, 263, 0, 0, 0, 264, 0, 0, 0, 265, 0, 0, 0, 266, 0, 0, 0, 267, 0, 0, 0,
    268, 0, 0, 0, 269, 0, 0, 0, 270, 0, 0, 0, 271, 0, 0, 0, 272, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 273, 0, 0, 274, 0,
    0, 275, 0, 0, 276, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 277, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 278, 0, 0, 0, 0, 0,
    279, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 280, 0,
    0, 281, 0, 0, 282, 0, 0, 283, 0, 0, 0, 0, 0, 284, 0, 0, 0, 0, 0, 0, 285, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 286, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 287, 0, 0, 0, 0, 0, 0, 0, 0, 0, 288, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 289, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 290, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 291, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 292, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 293, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 294, 0, 0, 0, 0, 0, 0, 0, 0,
    295, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 296, 0, 0, 0,
    0, 297, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 298, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 299, 0, 0, 0, 0, 0, 0, 300, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 301, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_004A(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_00228000;
    case 2u: goto L_00228030;
    case 3u: goto L_00228060;
    case 4u: goto L_00228080;
    case 5u: goto L_002280A0;
    case 6u: goto L_002280C0;
    case 7u: goto L_002280E0;
    case 8u: goto L_002280F0;
    case 9u: goto L_00228100;
    case 10u: goto L_00228110;
    case 11u: goto L_00228120;
    case 12u: goto L_00228130;
    case 13u: goto L_00228140;
    case 14u: goto L_00228150;
    case 15u: goto L_00228178;
    case 16u: goto L_002281B8;
    case 17u: goto L_002281E4;
    case 18u: goto L_002281FC;
    case 19u: goto L_00228218;
    case 20u: goto L_00228228;
    case 21u: goto L_0022823C;
    case 22u: goto L_00228248;
    case 23u: goto L_00228254;
    case 24u: goto L_00228294;
    case 25u: goto L_002282A8;
    case 26u: goto L_002282B8;
    case 27u: goto L_002282CC;
    case 28u: goto L_00228314;
    case 29u: goto L_00228334;
    case 30u: goto L_00228368;
    case 31u: goto L_0022837C;
    case 32u: goto L_002283A0;
    case 33u: goto L_002283E4;
    case 34u: goto L_00228414;
    case 35u: goto L_00228440;
    case 36u: goto L_00228468;
    case 37u: goto L_00228480;
    case 38u: goto L_002284A0;
    case 39u: goto L_002284C4;
    case 40u: goto L_002284DC;
    case 41u: goto L_00228500;
    case 42u: goto L_00228510;
    case 43u: goto L_00228564;
    case 44u: goto L_00228634;
    case 45u: goto L_0022863C;
    case 46u: goto L_00228654;
    case 47u: goto L_00228688;
    case 48u: goto L_00228698;
    case 49u: goto L_002286E8;
    case 50u: goto L_002287F0;
    case 51u: goto L_002288DC;
    case 52u: goto L_0022892C;
    case 53u: goto L_00228960;
    case 54u: goto L_00228970;
    case 55u: goto L_002289EC;
    case 56u: goto L_00228A10;
    case 57u: goto L_00228B90;
    case 58u: goto L_00228BA8;
    case 59u: goto L_00228BF0;
    case 60u: goto L_00228C40;
    case 61u: goto L_00228D10;
    case 62u: goto L_00228D40;
    case 63u: goto L_00228DF4;
    case 64u: goto L_00228DFC;
    case 65u: goto L_00228E08;
    case 66u: goto L_00228E30;
    case 67u: goto L_00228E4C;
    case 68u: goto L_00228EBC;
    case 69u: goto L_00228EF0;
    case 70u: goto L_00228F28;
    case 71u: goto L_00228F40;
    case 72u: goto L_00228F60;
    case 73u: goto L_00228FA0;
    case 74u: goto L_002290F0;
    case 75u: goto L_00229100;
    case 76u: goto L_00229120;
    case 77u: goto L_00229130;
    case 78u: goto L_00229140;
    case 79u: goto L_00229150;
    case 80u: goto L_00229160;
    case 81u: goto L_00229188;
    case 82u: goto L_00229194;
    case 83u: goto L_002291CC;
    case 84u: goto L_00229200;
    case 85u: goto L_00229240;
    case 86u: goto L_0022924C;
    case 87u: goto L_00229264;
    case 88u: goto L_00229280;
    case 89u: goto L_00229294;
    case 90u: goto L_002292CC;
    case 91u: goto L_002292F4;
    case 92u: goto L_00229338;
    case 93u: goto L_0022934C;
    case 94u: goto L_00229378;
    case 95u: goto L_002293E0;
    case 96u: goto L_002293F0;
    case 97u: goto L_00229400;
    case 98u: goto L_0022946C;
    case 99u: goto L_00229494;
    case 100u: goto L_002294B0;
    case 101u: goto L_002294D4;
    case 102u: goto L_002294E0;
    case 103u: goto L_002295B4;
    case 104u: goto L_002295C8;
    case 105u: goto L_002295DC;
    case 106u: goto L_002295F0;
    case 107u: goto L_00229604;
    case 108u: goto L_00229618;
    case 109u: goto L_00229620;
    case 110u: goto L_00229628;
    case 111u: goto L_0022963C;
    case 112u: goto L_00229644;
    case 113u: goto L_002296C4;
    case 114u: goto L_002296D8;
    case 115u: goto L_002296EC;
    case 116u: goto L_0022970C;
    case 117u: goto L_00229720;
    case 118u: goto L_002297F8;
    case 119u: goto L_0022980C;
    case 120u: goto L_00229878;
    case 121u: goto L_00229898;
    case 122u: goto L_002298AC;
    case 123u: goto L_002298B4;
    case 124u: goto L_002298D0;
    case 125u: goto L_00229990;
    case 126u: goto L_002299E0;
    case 127u: goto L_00229A14;
    case 128u: goto L_00229A3C;
    case 129u: goto L_00229A70;
    case 130u: goto L_00229A88;
    case 131u: goto L_00229AAC;
    case 132u: goto L_00229AC0;
    case 133u: goto L_00229B54;
    case 134u: goto L_00229C04;
    case 135u: goto L_00229C9C;
    case 136u: goto L_00229CBC;
    case 137u: goto L_00229CD0;
    case 138u: goto L_00229CF0;
    case 139u: goto L_00229D20;
    case 140u: goto L_00229D30;
    case 141u: goto L_00229DB4;
    case 142u: goto L_00229DC4;
    case 143u: goto L_00229DF0;
    case 144u: goto L_00229E10;
    case 145u: goto L_00229E30;
    case 146u: goto L_00229E58;
    case 147u: goto L_00229E6C;
    case 148u: goto L_00229E80;
    case 149u: goto L_00229ED0;
    case 150u: goto L_00229EE4;
    case 151u: goto L_00229EFC;
    case 152u: goto L_00229F10;
    case 153u: goto L_00229F80;
    case 154u: goto L_00229F94;
    case 155u: goto L_00229FA4;
    case 156u: goto L_00229FC0;
    case 157u: goto L_0022A020;
    case 158u: goto L_0022A070;
    case 159u: goto L_0022A0D4;
    case 160u: goto L_0022A10C;
    case 161u: goto L_0022A164;
    case 162u: goto L_0022A174;
    case 163u: goto L_0022A18C;
    case 164u: goto L_0022A1A4;
    case 165u: goto L_0022A1F0;
    case 166u: goto L_0022A20C;
    case 167u: goto L_0022A220;
    case 168u: goto L_0022A238;
    case 169u: goto L_0022A2D4;
    case 170u: goto L_0022A334;
    case 171u: goto L_0022A358;
    case 172u: goto L_0022A36C;
    case 173u: goto L_0022A38C;
    case 174u: goto L_0022A3C0;
    case 175u: goto L_0022A3D4;
    case 176u: goto L_0022A438;
    case 177u: goto L_0022A4E0;
    case 178u: goto L_0022A510;
    case 179u: goto L_0022A51C;
    case 180u: goto L_0022A544;
    case 181u: goto L_0022A558;
    case 182u: goto L_0022A590;
    case 183u: goto L_0022A5DC;
    case 184u: goto L_0022A600;
    case 185u: goto L_0022A618;
    case 186u: goto L_0022A628;
    case 187u: goto L_0022A640;
    case 188u: goto L_0022A65C;
    case 189u: goto L_0022A678;
    case 190u: goto L_0022A690;
    case 191u: goto L_0022A6A8;
    case 192u: goto L_0022A6E4;
    case 193u: goto L_0022A710;
    case 194u: goto L_0022A738;
    case 195u: goto L_0022A740;
    case 196u: goto L_0022A74C;
    case 197u: goto L_0022A79C;
    case 198u: goto L_0022A7B8;
    case 199u: goto L_0022A7E0;
    case 200u: goto L_0022A7F8;
    case 201u: goto L_0022A808;
    case 202u: goto L_0022A820;
    case 203u: goto L_0022A8E0;
    case 204u: goto L_0022A8F4;
    case 205u: goto L_0022AA00;
    case 206u: goto L_0022AA24;
    case 207u: goto L_0022AA30;
    case 208u: goto L_0022AA54;
    case 209u: goto L_0022AA74;
    case 210u: goto L_0022AA84;
    case 211u: goto L_0022AAB4;
    case 212u: goto L_0022AAD0;
    case 213u: goto L_0022AAF0;
    case 214u: goto L_0022AB00;
    case 215u: goto L_0022AB18;
    case 216u: goto L_0022AB24;
    case 217u: goto L_0022AB70;
    case 218u: goto L_0022AB90;
    case 219u: goto L_0022ABD4;
    case 220u: goto L_0022AC00;
    case 221u: goto L_0022AC34;
    case 222u: goto L_0022AC40;
    case 223u: goto L_0022AC64;
    case 224u: goto L_0022AC70;
    case 225u: goto L_0022AC7C;
    case 226u: goto L_0022AD00;
    case 227u: goto L_0022AD38;
    case 228u: goto L_0022AD60;
    case 229u: goto L_0022AD98;
    case 230u: goto L_0022ADB0;
    case 231u: goto L_0022ADD0;
    case 232u: goto L_0022AE34;
    case 233u: goto L_0022AE5C;
    case 234u: goto L_0022AE80;
    case 235u: goto L_0022AE8C;
    case 236u: goto L_0022AE98;
    case 237u: goto L_0022AEB0;
    case 238u: goto L_0022AED0;
    case 239u: goto L_0022AF10;
    case 240u: goto L_0022AF40;
    case 241u: goto L_0022AF7C;
    case 242u: goto L_0022AF94;
    case 243u: goto L_0022AF9C;
    case 244u: goto L_0022AFE0;
    case 245u: goto L_0022B028;
    case 246u: goto L_0022B0F0;
    case 247u: goto L_0022B108;
    case 248u: goto L_0022B120;
    case 249u: goto L_0022B130;
    case 250u: goto L_0022B140;
    case 251u: goto L_0022B18C;
    case 252u: goto L_0022B198;
    case 253u: goto L_0022B1A4;
    case 254u: goto L_0022B1BC;
    case 255u: goto L_0022B1E0;
    case 256u: goto L_0022B1F0;
    case 257u: goto L_0022B23C;
    case 258u: goto L_0022B248;
    case 259u: goto L_0022B254;
    case 260u: goto L_0022B26C;
    case 261u: goto L_0022B290;
    case 262u: goto L_0022B2A0;
    case 263u: goto L_0022B2B0;
    case 264u: goto L_0022B2C0;
    case 265u: goto L_0022B2D0;
    case 266u: goto L_0022B2E0;
    case 267u: goto L_0022B2F0;
    case 268u: goto L_0022B300;
    case 269u: goto L_0022B310;
    case 270u: goto L_0022B320;
    case 271u: goto L_0022B330;
    case 272u: goto L_0022B340;
    case 273u: goto L_0022B36C;
    case 274u: goto L_0022B378;
    case 275u: goto L_0022B384;
    case 276u: goto L_0022B390;
    case 277u: goto L_0022B420;
    case 278u: goto L_0022B468;
    case 279u: goto L_0022B480;
    case 280u: goto L_0022B4F8;
    case 281u: goto L_0022B504;
    case 282u: goto L_0022B510;
    case 283u: goto L_0022B51C;
    case 284u: goto L_0022B534;
    case 285u: goto L_0022B550;
    case 286u: goto L_0022B5A8;
    case 287u: goto L_0022B614;
    case 288u: goto L_0022B63C;
    case 289u: goto L_0022B670;
    case 290u: goto L_0022B6A8;
    case 291u: goto L_0022B6D4;
    case 292u: goto L_0022B850;
    case 293u: goto L_0022B8B4;
    case 294u: goto L_0022BA5C;
    case 295u: goto L_0022BA80;
    case 296u: goto L_0022BC70;
    case 297u: goto L_0022BC84;
    case 298u: goto L_0022BCD0;
    case 299u: goto L_0022BD04;
    case 300u: goto L_0022BD20;
    case 301u: goto L_0022BED0;
    default: bad_entry(c, 0x00228000u); return;
    }
L_00228000:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], ld32((c.r[1].w[0] - 27976u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00228018; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = ld8((c.r[2].w[0] + 164u));  if (t) { goto L_0022801C; } }
L_00228018:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0022801C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00228030:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], ld32((c.r[1].w[0] - 27976u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00228048; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = ld8((c.r[2].w[0] + 165u));  if (t) { goto L_0022804C; } }
L_00228048:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0022804C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00228060:
    set32(c.r[3], c.r[4].w[0] << 2);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], ld32((c.r[1].w[0] - 27976u)));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[3].w[0] + 168u), c.r[5].w[0]);  c.pc = t; return; }
L_00228080:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], c.r[4].w[0] << 2);
    set32(c.r[3], ld32((c.r[1].w[0] - 27976u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[2].w[0] + 168u)));  c.pc = t; return; }
L_002280A0:
    set32(c.r[3], c.r[4].w[0] << 2);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], ld32((c.r[1].w[0] - 27976u)));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[3].w[0] + 200u), c.r[5].w[0]);  c.pc = t; return; }
L_002280C0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], c.r[4].w[0] << 2);
    set32(c.r[3], ld32((c.r[1].w[0] - 27976u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[2].w[0] + 200u)));  c.pc = t; return; }
L_002280E0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002280F0:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x00227BF0u | kUnwind; return; } [[clang::musttail]] return unit_0049(c, 318u, depth); }
L_00228100:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x00227C50u | kUnwind; return; } [[clang::musttail]] return unit_0049(c, 320u, depth); }
L_00228110:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x00227F20u | kUnwind; return; } [[clang::musttail]] return unit_0049(c, 344u, depth); }
L_00228120:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x00227F70u | kUnwind; return; } [[clang::musttail]] return unit_0049(c, 346u, depth); }
L_00228130:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 112u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002280E0u | kUnwind; return; } goto L_002280E0; }
L_00228140:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 112u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00227D80u | kUnwind; return; } [[clang::musttail]] return unit_0049(c, 329u, depth); }
L_00228150:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x474C0000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00228178u); c.r[5].d[0] = c.r[2].d[0] | 20051ull;  if (depth < kMaxDepth) unit_0025(c, 418u, depth + 1u); else { c.pc = 0x00197EE0u; return; } if (c.pc != 0x00228178u) [[unlikely]] return; }
L_00228178:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] - 18416u);
    set32(c.r[3], c.r[3].w[0] - 5096u);
    st32((c.r[17].w[0] + 68u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00420000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    st32((c.r[17].w[0] + 64u), 0u);
    set32(c.r[2], c.r[2].w[0] - 5136u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[17].w[0] + 56u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], 0u + 1u);
    st32((c.r[17].w[0] + 68u), c.r[3].w[0]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002281B8u); st8((c.r[1].w[0] - 23696u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0025(c, 422u, depth + 1u); else { c.pc = 0x00197FC0u; return; } if (c.pc != 0x002281B8u) [[unlikely]] return; }
L_002281B8:
    set32(c.r[2], c.r[17].w[0] + 80u);
    st128((c.r[2].w[0]) & ~15u, c.vu0.vf[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[3], c.r[3].w[0] + 25120u);
    set32(c.r[2], 0u + 21u);
    st32((c.r[17].w[0] + 96u), c.r[3].w[0]);
    st32((c.r[17].w[0] + 104u), c.r[2].w[0]);
    set32(c.r[16], ld32((c.r[17].w[0] + 104u)));
    set32(c.r[2], c.r[16].w[0] << 5);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002281E4u); set32(c.r[4], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x001001F0u; return; } if (c.pc != 0x002281E4u) [[unlikely]] return; }
L_002281E4:
    c.r[8].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002281FCu); set32(c.r[7], 0u + 32u);  if (depth < kMaxDepth) unit_0000(c, 94u, depth + 1u); else { c.pc = 0x001008C0u; return; } if (c.pc != 0x002281FCu) [[unlikely]] return; }
L_002281FC:
    st32((c.r[17].w[0] + 100u), c.r[2].w[0]);
    set32(c.r[4], c.r[17].w[0] + 116u);
    st32((c.r[17].w[0] + 180u), 0u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 64u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00228218u); st32((c.r[17].w[0] + 184u), 0u);  if (depth < kMaxDepth) unit_0009(c, 49u, depth + 1u); else { c.pc = 0x00124ED8u; return; } if (c.pc != 0x00228218u) [[unlikely]] return; }
L_00228218:
    set32(c.r[4], c.r[17].w[0] + 192u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00228228u); set32(c.r[6], 0u + 64u);  if (depth < kMaxDepth) unit_0009(c, 49u, depth + 1u); else { c.pc = 0x00124ED8u; return; } if (c.pc != 0x00228228u) [[unlikely]] return; }
L_00228228:
    set32(c.r[2], ld32((c.r[17].w[0] + 104u)));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], ld32((c.r[17].w[0] + 100u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022823Cu); set32(c.r[6], c.r[2].w[0] << 5);  if (depth < kMaxDepth) unit_0009(c, 49u, depth + 1u); else { c.pc = 0x00124ED8u; return; } if (c.pc != 0x0022823Cu) [[unlikely]] return; }
L_0022823C:
    set32(c.r[2], ld32((c.r[17].w[0] + 104u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00228248u); set32(c.r[4], c.r[2].w[0] << 2);  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x001001F0u; return; } if (c.pc != 0x00228248u) [[unlikely]] return; }
L_00228248:
    st32((c.r[17].w[0] + 108u), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_002282FC; } }
L_00228254:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], ld32((c.r[17].w[0] + 96u)));
    set32(c.r[4], ld32((c.r[1].w[0] + 26176u)));
    set32(c.r[3], c.r[16].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 6088u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 16u)));
    set32(c.r[4], c.r[4].w[0] << 5);
    c.r[2].d[0] = ld8((c.r[2].w[0] + 21u));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 14;
    { const bool t = c.r[2].d[0] == 0ull; c.r[18].d[0] = ld64((c.r[3].w[0] + 16u));  if (t) { goto L_002282B0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00228294u); set32(c.r[4], 0u + 272u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00228294u) [[unlikely]] return; }
L_00228294:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u + 5u);  if (t) { goto L_002282D0; } }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002282A8u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 199u, depth + 1u); else { c.pc = 0x0015F7C0u; return; } if (c.pc != 0x002282A8u) [[unlikely]] return; }
L_002282A8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002282CC; } }
L_002282B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002282B8u); set32(c.r[4], 0u + 272u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x002282B8u) [[unlikely]] return; }
L_002282B8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002282CC; } }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002282CCu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 188u, depth + 1u); else { c.pc = 0x0015ED60u; return; } if (c.pc != 0x002282CCu) [[unlikely]] return; }
L_002282CC:
    set32(c.r[4], 0u + 5u);
    c.budget -= 1;
L_002282D0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00030000u);
    st64((c.r[2].w[0] + 240u), c.r[4].d[0]);
    c.r[3].d[0] = c.r[3].d[0] | 12801ull;
    st64((c.r[2].w[0] + 248u), c.r[3].d[0]);
    set32(c.r[4], c.r[16].w[0] << 2);
    set32(c.r[3], 0u + 72u);
    set32(c.r[16], c.r[16].w[0] + 1u);
    st64((c.r[2].w[0] + 232u), c.r[3].d[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 108u)));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.budget -= 11;
L_002282FC:
    set32(c.r[2], ld32((c.r[17].w[0] + 104u)));
    c.r[2].d[0] = c.r[16].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00228254u | kUnwind; return; } goto L_00228254; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00228314u); set32(c.r[4], 0u + 272u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00228314u) [[unlikely]] return; }
L_00228314:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00228334; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[1].w[0] + 26176u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 6088u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00228334u); c.r[5].d[0] = ld64((c.r[2].w[0] + 176u));  if (depth < kMaxDepth) unit_0017(c, 188u, depth + 1u); else { c.pc = 0x0015ED60u; return; } if (c.pc != 0x00228334u) [[unlikely]] return; }
L_00228334:
    st32((c.r[17].w[0] + 112u), c.r[2].w[0]);
    set32(c.r[5], 0u + 5u);
    set32(c.r[6], ld32((c.r[17].w[0] + 112u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00030000u);
    c.r[3].d[0] = c.r[2].d[0] | 12801ull;
    set32(c.r[4], 0u + 272u);
    set32(c.r[2], 0u + 72u);
    st64((c.r[6].w[0] + 240u), c.r[5].d[0]);
    set32(c.r[5], ld32((c.r[17].w[0] + 112u)));
    st64((c.r[5].w[0] + 248u), c.r[3].d[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 112u)));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00228368u); st64((c.r[3].w[0] + 232u), c.r[2].d[0]);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00228368u) [[unlikely]] return; }
L_00228368:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0022837C; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022837Cu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_004A(c, 66u, depth + 1u); else { c.pc = 0x00228E30u; return; } if (c.pc != 0x0022837Cu) [[unlikely]] return; }
L_0022837C:
    st32((c.r[17].w[0] + 188u), c.r[2].w[0]);
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002283A0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const bool t = c.r[18].d[0] == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002284DC; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] - 5136u);
    set32(c.r[2], c.r[2].w[0] - 5096u);
    st32((c.r[18].w[0] + 56u), c.r[3].w[0]);
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 68u), c.r[2].w[0]);  if (t) { goto L_0022841C; } }
L_002283E4:
    set32(c.r[2], ld32((c.r[18].w[0] + 108u)));
    set32(c.r[3], c.r[16].w[0] << 2);
    set32(c.r[19], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[19].w[0])));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00228414; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00228414; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00228414u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00228414u) [[unlikely]] return; }
L_00228414:
    st32((c.r[19].w[0]), 0u);
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 2;
L_0022841C:
    set32(c.r[2], ld32((c.r[18].w[0] + 104u)));
    c.r[2].d[0] = c.r[16].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002283E4u | kUnwind; return; } goto L_002283E4; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 108u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00228440; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00228440u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100210u; return; } if (c.pc != 0x00228440u) [[unlikely]] return; }
L_00228440:
    st32((c.r[18].w[0] + 108u), 0u);
    set32(c.r[4], ld32((c.r[18].w[0] + 112u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00228468; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00228468; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00228468u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00228468u) [[unlikely]] return; }
L_00228468:
    st32((c.r[18].w[0] + 112u), 0u);
    set32(c.r[4], ld32((c.r[18].w[0] + 188u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[5], 0u + 1u);  if (t) { goto L_00228480; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00228480u);  if (depth < kMaxDepth) unit_004A(c, 69u, depth + 1u); else { c.pc = 0x00228EF0u; return; } if (c.pc != 0x00228480u) [[unlikely]] return; }
L_00228480:
    st32((c.r[18].w[0] + 188u), 0u);
    set32(c.r[2], ld32((c.r[18].w[0] + 100u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002284A0; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[2].w[0] - 16u);  if (t) { goto L_002284A0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002284A0u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100210u; return; } if (c.pc != 0x002284A0u) [[unlikely]] return; }
L_002284A0:
    set32(c.r[2], c.r[18].w[0] + 64u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[18].w[0] + 100u), 0u);  if (t) { goto L_002284B8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] - 18416u);
    st32((c.r[18].w[0] + 68u), c.r[2].w[0]);
    c.budget -= 3;
L_002284B8:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002284C4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0025(c, 420u, depth + 1u); else { c.pc = 0x00197F70u; return; } if (c.pc != 0x002284C4u) [[unlikely]] return; }
L_002284C4:
    c.r[2].d[0] = c.r[17].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_002284E0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002284DCu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x002284DCu) [[unlikely]] return; }
L_002284DC:
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_002284E0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00228500:
    c.budget -= 2;
    { set32(c.r[4], ld32((c.r[4].w[0] + 188u)));  goto L_00228F60; }
L_00228510:
    set32(c.r[29], c.r[29].w[0] - 304u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    set32(c.r[7], 0u + 1u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    set32(c.r[5], c.r[21].w[0] + 80u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 12u), c.f[23]);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[20], ld32((c.r[1].w[0] + 20144u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 28272u)));
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00228564u); set32(c.r[6], c.r[21].w[0] + 16u);  if (depth < kMaxDepth) unit_0015(c, 149u, depth + 1u); else { c.pc = 0x00157C40u; return; } if (c.pc != 0x00228564u) [[unlikely]] return; }
L_00228564:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43F50000u);
    set32(c.r[1], c.r[20].w[0] + c.r[1].w[0]);
    set32(c.r[4], ld32((c.r[1].w[0] + 1420u)));
    c.f[0] = c.r[2].w[0];
    c.f[4] = ld32((c.r[21].w[0] + 80u));
    c.f[2] = ld32((c.r[21].w[0] + 84u));
    c.f[21] = 0u;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 1));
    c.f[1] = ld32((c.r[1].w[0] + 25648u));
    c.f[3] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[4]) < fp::key(c.f[0]));
    c.f[3] = fp::cvt_s_w(c.f[3]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[20].w[0] + c.r[1].w[0]);
    set32(c.r[3], ld32((c.r[1].w[0] + 1424u)));
    c.f[3] = fp::sub(c.f[4], c.f[3]);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 1));
    c.f[0] = c.r[2].w[0];
    c.f[23] = fp::mul(c.f[1], c.f[3]);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::sub(c.f[2], c.f[0]);
    c.budget -= 26;
    { const bool t = !(c.fcr31 & kFpuCondition); c.f[22] = fp::mul(c.f[1], c.f[0]);  if (t) { goto L_00228644; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41800000u);
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[4]) <= fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[4], c.r[21].w[0] + 192u);  if (t) { goto L_00228648; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43D70000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00228644; } }
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[1]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00228644; } }
    c.f[0] = ld32((c.r[21].w[0] + 88u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[21]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00228644; } }
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_00228628; } }
    set32(c.r[5], c.r[5].w[0] + 64u);
    c.budget -= 1;
L_00228628:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00228634u); set32(c.r[4], ld32((c.r[1].w[0] + 20144u)));  if (depth < kMaxDepth) unit_0013(c, 238u, depth + 1u); else { c.pc = 0x0014F870u; return; } if (c.pc != 0x00228634u) [[unlikely]] return; }
L_00228634:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022863Cu); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_004A(c, 59u, depth + 1u); else { c.pc = 0x00228BF0u; return; } if (c.pc != 0x0022863Cu) [[unlikely]] return; }
L_0022863C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[21] = c.f[0];  if (t) { goto L_00228654; } }
L_00228644:
    set32(c.r[4], c.r[21].w[0] + 192u);
    c.budget -= 1;
L_00228648:
    set32(c.r[5], 0u + 255u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00228654u); set32(c.r[6], 0u + 64u);  if (depth < kMaxDepth) unit_0009(c, 49u, depth + 1u); else { c.pc = 0x00124ED8u; return; } if (c.pc != 0x00228654u) [[unlikely]] return; }
L_00228654:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    set32(c.r[6], ld32((c.r[1].w[0] + 28272u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[4], c.r[29].w[0] + 208u);
    set32(c.r[5], c.r[21].w[0] + 32u);
    ld128((c.r[6].w[0] + 464u) & ~15u, c.r[6]);
    st128((c.r[29].w[0] + 288u) & ~15u, c.r[6]);
    st32((c.r[29].w[0] + 280u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 284u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 272u), 0u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00228688u); st32((c.r[29].w[0] + 276u), 0u);  if (depth < kMaxDepth) unit_0011(c, 53u, depth + 1u); else { c.pc = 0x00145110u; return; } if (c.pc != 0x00228688u) [[unlikely]] return; }
L_00228688:
    set32(c.r[4], c.r[29].w[0] + 272u);
    set32(c.r[5], c.r[29].w[0] + 208u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00228698u); c.r[6].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0011(c, 20u, depth + 1u); else { c.pc = 0x001444C0u; return; } if (c.pc != 0x00228698u) [[unlikely]] return; }
L_00228698:
    c.f[5] = ld32((c.r[29].w[0] + 288u));
    set32(c.r[3], ld32((c.r[21].w[0] + 184u)));
    c.f[4] = ld32((c.r[29].w[0] + 272u));
    c.f[3] = ld32((c.r[29].w[0] + 292u));
    c.f[2] = ld32((c.r[29].w[0] + 276u));
    c.f[1] = ld32((c.r[29].w[0] + 296u));
    c.f[0] = ld32((c.r[29].w[0] + 280u));
    c.r[1].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.f[4] = fp::mul(c.f[5], c.f[4]);
    c.f[2] = fp::mul(c.f[3], c.f[2]);
    c.facc = fp::add(c.f[4], c.f[2]);
    c.budget -= 13;
    { const bool t = c.r[1].d[0] != 0ull; c.f[20] = fp::add(c.facc, fp::mul(c.f[1], c.f[0]));  if (t) { goto L_002286E8; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = ld32((c.r[1].w[0] + 25640u));
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002286E8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002286E8u); set32(c.r[4], ld32((c.r[21].w[0] + 188u)));  if (depth < kMaxDepth) unit_004A(c, 75u, depth + 1u); else { c.pc = 0x00229100u; return; } if (c.pc != 0x002286E8u) [[unlikely]] return; }
L_002286E8:
    c.f[2] = 0u;
    fpu_compare(c, fp::key(c.f[2]) == fp::key(c.f[21]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00228BB4; } }
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[2]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00228710; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));  if (t) { goto L_00228BB8; } }
L_00228710:
    set32(c.r[2], ld32((c.r[21].w[0] + 184u)));
    c.r[1].d[0] = c.r[2].sd[0] < 61ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_00228730; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[2] = c.r[2].w[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);  if (t) { goto L_00228760; } }
L_00228730:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_00228740; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0022875C; } }
L_00228740:
    c.f[1] = c.r[2].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42700000u);
    c.f[0] = c.r[2].w[0];
    fpu_div(c, 2u, c.f[1], c.f[0]);
    c.budget -= 7;
L_0022875C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.budget -= 1;
L_00228760:
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[20]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0022877C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[0] = fp::mul(c.f[21], c.f[0]);  if (t) { goto L_002287B0; } }
L_0022877C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = ld32((c.r[1].w[0] + 25640u));
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition); c.f[1] = fp::sub(c.f[20], c.f[0]);  if (t) { goto L_002287A0; } }
    c.f[0] = 0u;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002287AC; } }
    c.f[1] = fp::sub(c.f[20], c.f[0]);
    c.budget -= 1;
L_002287A0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = ld32((c.r[1].w[0] + 25632u));
    fpu_div(c, 0u, c.f[1], c.f[0]);
    c.budget -= 3;
L_002287AC:
    c.f[0] = fp::mul(c.f[21], c.f[0]);
    c.budget -= 1;
L_002287B0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    c.r[6].d[0] = c.r[5].d[0] | 65535ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.r[19].d[0] = 0ull + 0ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    st32((c.r[21].w[0] + 180u), c.f[0]);
    c.f[3] = c.r[4].w[0];
    set32(c.r[7], ld32((c.r[21].w[0] + 96u)));
    c.f[0] = c.r[6].w[0];
    set32(c.r[4], ld32((c.r[21].w[0] + 100u)));
    c.f[1] = c.r[2].w[0];
    c.budget -= 16;
    { const bool t = 0ull == 0ull; c.f[4] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_002288BC; } }
L_002287F0:
    c.f[5] = ld32((c.r[7].w[0] + 4u));
    c.f[6] = ld32((c.r[21].w[0] + 84u));
    c.f[2] = ld32((c.r[21].w[0] + 80u));
    c.f[0] = fp::mul(c.f[22], c.f[5]);
    c.f[6] = fp::add(c.f[6], c.f[0]);
    c.f[0] = fp::mul(c.f[23], c.f[5]);
    c.f[0] = fp::add(c.f[2], c.f[0]);
    st32((c.r[4].w[0]), c.f[0]);
    st32((c.r[4].w[0] + 4u), c.f[6]);
    st32((c.r[4].w[0] + 8u), c.f[4]);
    st32((c.r[4].w[0] + 12u), c.r[5].w[0]);
    c.r[2].d[0] = ld8((c.r[7].w[0] + 20u));
    c.budget -= 14;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00228874; } }
    c.f[2] = ld32((c.r[7].w[0] + 12u));
    c.f[0] = ld32((c.r[21].w[0] + 180u));
    c.f[2] = fp::mul(c.f[3], c.f[2]);
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00228854; } }
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 20u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0022886C; } }
L_00228854:
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[4].w[0] + 20u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 6;
L_0022886C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[7], c.r[7].w[0] + 24u);  if (t) { goto L_002288B4; } }
L_00228874:
    c.f[0] = ld32((c.r[7].w[0] + 12u));
    c.f[0] = fp::mul(c.f[3], c.f[0]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00228898; } }
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 20u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_002288B0; } }
L_00228898:
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[4].w[0] + 20u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 6;
L_002288B0:
    set32(c.r[7], c.r[7].w[0] + 24u);
    c.budget -= 1;
L_002288B4:
    set32(c.r[4], c.r[4].w[0] + 32u);
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.budget -= 2;
L_002288BC:
    set32(c.r[2], ld32((c.r[21].w[0] + 104u)));
    c.r[2].d[0] = c.r[19].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002287F0u | kUnwind; return; } goto L_002287F0; } }
    set32(c.r[18], ld32((c.r[21].w[0] + 96u)));
    set32(c.r[17], ld32((c.r[21].w[0] + 100u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_0022897C; } }
L_002288DC:
    set32(c.r[4], ld32((c.r[21].w[0] + 108u)));
    set32(c.r[5], c.r[19].w[0] << 2);
    c.r[3].d[0] = ld8((c.r[18].w[0] + 20u));
    set32(c.r[2], 0u + 1u);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[16], ld32((c.r[4].w[0])));  if (t) { goto L_00228908; } }
    c.f[1] = ld32((c.r[18].w[0] + 8u));
    c.f[0] = ld32((c.r[21].w[0] + 180u));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.f[0] = fp::mul(c.f[1], c.f[0]);  if (t) { goto L_0022890C; } }
L_00228908:
    c.f[0] = ld32((c.r[18].w[0] + 8u));
    c.budget -= 1;
L_0022890C:
    st32((c.r[16].w[0] + 16u), c.f[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 20u), c.f[0]);
    st32((c.r[16].w[0] + 24u), c.f[0]);
    set32(c.r[25], ld32((c.r[16].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0022892Cu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0022892Cu) [[unlikely]] return; }
L_0022892C:
    c.r[6].d[0] = ld8((c.r[17].w[0] + 20u));
    c.f[12] = 0u;
    c.r[5].d[0] = ld8((c.r[18].w[0] + 2u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[3].d[0] = ld8((c.r[18].w[0] + 1u));
    c.f[13] = c.f[12];
    c.r[2].d[0] = ld8((c.r[18].w[0]));
    c.f[14] = c.f[20];
    st32((c.r[16].w[0] + 48u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 52u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 56u), c.r[5].w[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00228960u); st32((c.r[16].w[0] + 60u), c.r[6].w[0]);  if (depth < kMaxDepth) unit_0012(c, 261u, depth + 1u); else { c.pc = 0x0014ACC0u; return; } if (c.pc != 0x00228960u) [[unlikely]] return; }
L_00228960:
    set32(c.r[25], ld32((c.r[16].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00228970u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00228970u) [[unlikely]] return; }
L_00228970:
    set32(c.r[18], c.r[18].w[0] + 24u);
    set32(c.r[17], c.r[17].w[0] + 32u);
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.budget -= 3;
L_0022897C:
    set32(c.r[2], ld32((c.r[21].w[0] + 104u)));
    c.r[2].d[0] = c.r[19].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002288DCu | kUnwind; return; } goto L_002288DC; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[20].w[0] + c.r[1].w[0]);
    set32(c.r[2], ld32((c.r[1].w[0] + 1420u)));
    c.f[3] = ld32((c.r[21].w[0] + 80u));
    c.f[1] = ld32((c.r[21].w[0] + 84u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    set32(c.r[1], c.r[20].w[0] + c.r[1].w[0]);
    set32(c.r[3], ld32((c.r[1].w[0] + 1424u)));
    c.f[2] = c.r[2].w[0];
    c.f[2] = fp::cvt_s_w(c.f[2]);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 1));
    c.f[0] = c.r[2].w[0];
    c.f[13] = fp::sub(c.f[3], c.f[2]);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[12] = fp::sub(c.f[1], c.f[0]);
    c.facc = fp::mul(c.f[13], c.f[13]);
    c.f[0] = fp::add(c.facc, fp::mul(c.f[12], c.f[12]));
    c.f[20] = fp::sqrt(c.f[0]);
    c.budget -= 24;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002289ECu);  if (depth < kMaxDepth) unit_0011(c, 97u, depth + 1u); else { c.pc = 0x00145DD0u; return; } if (c.pc != 0x002289ECu) [[unlikely]] return; }
L_002289EC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[6], c.r[29].w[0] + 192u);
    set32(c.r[2], c.r[2].w[0] - 23680u);
    set32(c.r[4], c.r[29].w[0] + 208u);
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    set32(c.r[5], c.r[21].w[0] + 80u);
    st128((c.r[6].w[0]) & ~15u, c.r[2]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00228A10u); st32((c.r[29].w[0] + 200u), c.f[0]);  if (depth < kMaxDepth) unit_0011(c, 77u, depth + 1u); else { c.pc = 0x00145760u; return; } if (c.pc != 0x00228A10u) [[unlikely]] return; }
L_00228A10:
    set32(c.r[2], c.r[29].w[0] + 128u);
    st128((c.r[2].w[0] + 48u) & ~15u, c.vu0.vf[0]);
    vu::mr32(c.vu0, 15u, 1u, 0u);
    st128((c.r[2].w[0] + 32u) & ~15u, c.vu0.vf[1]);
    vu::mr32(c.vu0, 15u, 2u, 1u);
    st128((c.r[2].w[0] + 16u) & ~15u, c.vu0.vf[2]);
    vu::mr32(c.vu0, 15u, 3u, 2u);
    st128((c.r[2].w[0]) & ~15u, c.vu0.vf[3]);
    c.f[2] = 0u;
    c.f[1] = 0u;
    set32(c.r[3], c.r[29].w[0] + 128u);
    set32(c.r[4], c.r[29].w[0] + 208u);
    set32(c.r[5], ld32((c.r[21].w[0] + 112u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[3] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    c.f[5] = ld32((c.r[5].w[0] + 160u));
    set32(c.r[2], c.r[29].w[0] + 208u);
    c.f[4] = ld32((c.r[5].w[0] + 16u));
    c.f[4] = fp::mul(c.f[5], c.f[4]);
    st32((c.r[29].w[0] + 188u), c.f[0]);
    c.f[0] = c.f[4] ^ fp::kSign;
    c.f[0] = fp::mul(c.f[3], c.f[0]);
    st32((c.r[29].w[0] + 180u), c.f[2]);
    st32((c.r[29].w[0] + 184u), c.f[1]);
    st32((c.r[29].w[0] + 176u), c.f[0]);
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
    set32(c.r[2], c.r[29].w[0] + 208u);
    set32(c.r[3], ld32((c.r[21].w[0] + 112u)));
    set32(c.r[3], c.r[3].w[0] + 64u);
    ld128((c.r[2].w[0]) & ~15u, c.r[6]);
    ld128((c.r[2].w[0] + 16u) & ~15u, c.r[7]);
    ld128((c.r[2].w[0] + 32u) & ~15u, c.r[8]);
    ld128((c.r[2].w[0] + 48u) & ~15u, c.r[9]);
    st128((c.r[3].w[0]) & ~15u, c.r[6]);
    st128((c.r[3].w[0] + 16u) & ~15u, c.r[7]);
    st128((c.r[3].w[0] + 32u) & ~15u, c.r[8]);
    st128((c.r[3].w[0] + 48u) & ~15u, c.r[9]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41900000u);
    c.f[1] = c.r[2].w[0];
    set32(c.r[6], ld32((c.r[21].w[0] + 112u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x42200000u);
    fpu_div(c, 1u, c.f[20], c.f[1]);
    set32(c.r[4], 0u + 255u);
    set32(c.r[3], 0u + 255u);
    set32(c.r[2], 0u + 255u);
    st32((c.r[6].w[0] + 16u), c.f[1]);
    c.f[2] = ld32((c.r[1].w[0] + 25624u));
    c.f[0] = 0u;
    c.f[1] = c.r[5].w[0];
    st32((c.r[6].w[0] + 20u), c.f[2]);
    st32((c.r[6].w[0] + 24u), c.f[0]);
    c.f[0] = ld32((c.r[21].w[0] + 180u));
    set32(c.r[5], ld32((c.r[21].w[0] + 112u)));
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    st32((c.r[5].w[0] + 48u), c.r[4].w[0]);
    st32((c.r[5].w[0] + 52u), c.r[3].w[0]);
    st32((c.r[5].w[0] + 56u), c.r[2].w[0]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    st32((c.r[5].w[0] + 60u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[21].w[0] + 112u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 96;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00228B90u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00228B90u) [[unlikely]] return; }
L_00228B90:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00420000u);
    c.r[3].d[0] = ld8((c.r[1].w[0] - 23696u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00228BA8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00228BA8u); set32(c.r[4], ld32((c.r[21].w[0] + 188u)));  if (depth < kMaxDepth) unit_004A(c, 73u, depth + 1u); else { c.pc = 0x00228FA0u; return; } if (c.pc != 0x00228BA8u) [[unlikely]] return; }
L_00228BA8:
    set32(c.r[3], ld32((c.r[21].w[0] + 184u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[21].w[0] + 184u), c.r[3].w[0]);
    c.budget -= 3;
L_00228BB4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    c.budget -= 1;
L_00228BB8:
    c.f[23] = ld32((c.r[29].w[0] + 12u));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 304u);  c.pc = t; return; }
L_00228BF0:
    c.f[1] = ld32((c.r[4].w[0] + 88u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[0] = c.r[2].w[0];
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[6], c.r[4].w[0] + 192u);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[5], c.r[4].w[0] + 116u);  if (t) { goto L_00228C20; } }
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[4], c.f[1]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_00228C3C; } }
L_00228C20:
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[4], c.f[1]);
    c.r[4].d[0] = c.r[4].d[0] | c.r[2].d[0];
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 7;
L_00228C3C:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00228C40:
    c.r[9].d[0] = ld8((c.r[6].w[0] + 2u));
    c.r[8].d[0] = ld8((c.r[6].w[0] + 1u));
    c.r[7].d[0] = ld8((c.r[6].w[0]));
    set32(c.r[9], c.r[9].w[0] << 16);
    set32(c.r[8], c.r[8].w[0] << 8);
    c.r[8].d[0] = c.r[9].d[0] | c.r[8].d[0];
    c.r[7].d[0] = c.r[7].d[0] | c.r[8].d[0];
    c.r[1].d[0] = c.r[7].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00228CA0; } }
    set32(c.r[7], ld32((c.r[5].w[0])));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[8], ld32((c.r[1].w[0] - 23664u)));
    set32(c.r[7], c.r[7].w[0] + 16u);
    st32((c.r[29].w[0] + 12u), c.r[7].w[0]);
    set32(c.r[7], ld32((c.r[29].w[0] + 12u)));
    c.r[1].d[0] = c.r[8].sd[0] < c.r[7].sd[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[7], c.r[29].w[0] + 12u);  if (t) { goto L_00228C94; } }
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[7], c.r[7].w[0] - 23664u);
    c.budget -= 2;
L_00228C94:
    set32(c.r[7], ld32((c.r[7].w[0])));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[5].w[0]), c.r[7].w[0]);  if (t) { goto L_00228CD4; } }
L_00228CA0:
    set32(c.r[8], ld32((c.r[5].w[0])));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[7], ld32((c.r[1].w[0] - 23656u)));
    set32(c.r[8], c.r[8].w[0] - 4u);
    st32((c.r[29].w[0] + 8u), c.r[8].w[0]);
    set32(c.r[8], ld32((c.r[29].w[0] + 8u)));
    c.r[1].d[0] = c.r[8].sd[0] < c.r[7].sd[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[7], c.r[29].w[0] + 8u);  if (t) { goto L_00228CCC; } }
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[7], c.r[7].w[0] - 23656u);
    c.budget -= 2;
L_00228CCC:
    set32(c.r[7], ld32((c.r[7].w[0])));
    st32((c.r[5].w[0]), c.r[7].w[0]);
    c.budget -= 2;
L_00228CD4:
    set32(c.r[8], ld32((c.r[5].w[0])));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[7].d[0] = c.r[2].sd[0] < 16ll ? 1ull : 0ull;
    set32(c.r[6], c.r[6].w[0] + 3u);
    set32(c.r[3], c.r[3].w[0] + c.r[8].w[0]);
    c.budget -= 7;
    { const bool t = c.r[7].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00228C40u | kUnwind; return; } goto L_00228C40; } }
    c.f[0] = c.r[3].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3B800000u);
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00228D10:
    c.f[1] = ld32((c.r[4].w[0] + 80u));
    c.f[0] = ld32((c.r[4].w[0] + 84u));
    c.f[1] = fp::cvt_w_s(c.f[1]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[1]);
    set32(c.r[6], c.f[0]);
    c.budget -= 9;
    {  goto L_00228D40; }
L_00228D40:
    set32(c.r[29], c.r[29].w[0] - 144u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[9].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[8].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[1].w[0] + 20144u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[4].w[0] + c.r[1].w[0]);
    set32(c.r[6], ld32((c.r[1].w[0] + 1420u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[4].w[0] + c.r[1].w[0]);
    set32(c.r[3], ld32((c.r[1].w[0] + 1424u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[4].w[0] + c.r[1].w[0]);
    set32(c.r[2], ld32((c.r[1].w[0] + 1416u)));
    mmi::mult(c, 0, c.r[6].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] << (c.r[2].w[0] & 31u));
    c.budget -= 21;
    { const bool t = c.r[2].sd[0] >= 0; set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 6));  if (t) { goto L_00228D9C; } }
    set32(c.r[2], c.r[2].w[0] + 63u);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 6));
    c.budget -= 2;
L_00228D9C:
    set32(c.r[2], ld32((c.r[4].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[3].d[0] << 48;  if (t) { goto L_00228DC4; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[4].w[0] + c.r[1].w[0]);
    set32(c.r[2], ld32((c.r[1].w[0] + 1416u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00228DC0; } }
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 1));
    c.budget -= 1;
L_00228DC0:
    c.r[5].d[0] = c.r[3].d[0] << 48;
    c.budget -= 1;
L_00228DC4:
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[6].w[0]) >> 6));
    c.budget -= 3;
    { const bool t = c.r[6].sd[0] >= 0; c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 48);  if (t) { goto L_00228DD8; } }
    set32(c.r[2], c.r[6].w[0] + 63u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 6));
    c.budget -= 2;
L_00228DD8:
    c.r[6].d[0] = c.r[2].d[0] << 48;
    set32(c.r[10], 0u + 4u);
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 48);
    set32(c.r[4], c.r[29].w[0] + 32u);
    set32(c.r[7], 0u + 49u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00228DF4u); c.r[11].d[0] = c.r[10].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 191u, depth + 1u); else { c.pc = 0x00101C70u; return; } if (c.pc != 0x00228DF4u) [[unlikely]] return; }
L_00228DF4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00228DFCu); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0002(c, 580u, depth + 1u); else { c.pc = 0x0010BEA0u; return; } if (c.pc != 0x00228DFCu) [[unlikely]] return; }
L_00228DFC:
    set32(c.r[5], c.r[16].w[0] + 192u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00228E08u); set32(c.r[4], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_0000(c, 197u, depth + 1u); else { c.pc = 0x00101F30u; return; } if (c.pc != 0x00228E08u) [[unlikely]] return; }
L_00228E08:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x10010000u);
    set32(c.r[3], ld32((c.r[1].w[0] - 28672u)));
    c.r[3].d[0] = c.r[3].d[0] | 64ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x10010000u);
    st32((c.r[1].w[0] - 28672u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_00228E30:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00228E4Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 177u, depth + 1u); else { c.pc = 0x0015E070u; return; } if (c.pc != 0x00228E4Cu) [[unlikely]] return; }
L_00228E4C:
    st32((c.r[16].w[0] + 256u), c.r[17].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    st8((c.r[16].w[0] + 260u), static_cast<std::uint8_t>(0u));
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    st8((c.r[16].w[0] + 261u), static_cast<std::uint8_t>(0u));
    c.f[0] = c.r[2].w[0];
    set32(c.r[3], 0u + 50u);
    st16((c.r[16].w[0] + 262u), static_cast<std::uint16_t>(0u));
    st16((c.r[16].w[0] + 264u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 20144u)));
    c.f[12] = 0u;
    c.f[14] = fp::cvt_s_w(c.f[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.f[1] = ld32((c.r[1].w[0] + 1424u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.f[0] = ld32((c.r[1].w[0] + 1420u));
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[16].w[0] + 160u), c.f[0]);
    st32((c.r[16].w[0] + 164u), c.f[1]);
    set32(c.r[25], ld32((c.r[16].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 28;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00228EBCu); c.f[13] = c.f[12];  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00228EBCu) [[unlikely]] return; }
L_00228EBC:
    set32(c.r[3], 0u + 5u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00030000u);
    st64((c.r[16].w[0] + 240u), c.r[3].d[0]);
    c.r[2].d[0] = c.r[2].d[0] | 12801ull;
    st64((c.r[16].w[0] + 248u), c.r[2].d[0]);
    set32(c.r[2], 0u + 72u);
    st64((c.r[16].w[0] + 232u), c.r[2].d[0]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00228EF0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00228F40; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; c.r[2].d[0] = c.r[16].d[0] << 48;  if (t) { goto L_00228F2C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 17408u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00228F28u); st32((c.r[17].w[0] + 176u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0012(c, 264u, depth + 1u); else { c.pc = 0x0014ADA0u; return; } if (c.pc != 0x00228F28u) [[unlikely]] return; }
L_00228F28:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.budget -= 1;
L_00228F2C:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00228F44; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00228F40u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x00228F40u) [[unlikely]] return; }
L_00228F40:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00228F44:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00228F60:
    c.r[3].d[0] = ld8((c.r[4].w[0] + 260u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00228F90; } }
    c.r[5].d[0] = ld16((c.r[4].w[0] + 262u));
    c.r[3].d[0] = ld16((c.r[4].w[0] + 264u));
    c.r[1].d[0] = c.r[3].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00228F84; } }
    st8((c.r[4].w[0] + 260u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_00228F84:
    c.r[3].d[0] = ld16((c.r[4].w[0] + 262u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st16((c.r[4].w[0] + 262u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 3;
L_00228F90:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00228FA0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 260u));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002290F0; } }
    c.r[2].d[0] = ld16((c.r[4].w[0] + 264u));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[3], c.r[2].w[0] >> 1);  if (t) { goto L_00228FCC; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[2] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_00228FE4; } }
L_00228FCC:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[2] = fp::cvt_s_w(c.f[0]);
    c.f[2] = fp::add(c.f[2], c.f[2]);
    c.budget -= 6;
L_00228FE4:
    c.r[2].d[0] = ld16((c.r[4].w[0] + 262u));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[3], c.r[2].w[0] >> 1);  if (t) { goto L_00228FFC; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[3] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_00229014; } }
L_00228FFC:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[3] = fp::cvt_s_w(c.f[0]);
    c.f[3] = fp::add(c.f[3], c.f[3]);
    c.budget -= 6;
L_00229014:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[3]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00229034; } }
    fpu_compare(c, fp::key(c.f[3]) < fp::key(c.f[2]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[2].sd[0] = static_cast<std::int32_t>(0x41C80000u);  if (t) { goto L_00229040; } }
L_00229034:
    c.f[2] = 0u;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 255u);  if (t) { goto L_002290AC; } }
L_00229040:
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[3]) <= fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00229070; } }
    c.f[0] = fp::sub(c.f[3], c.f[0]);
    fpu_div(c, 2u, c.f[0], c.f[1]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002290A8; } }
L_00229070:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x420C0000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[3]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);  if (t) { goto L_002290A4; } }
    c.f[1] = fp::sub(c.f[2], c.f[3]);
    c.f[0] = fp::sub(c.f[2], c.f[0]);
    fpu_div(c, 2u, c.f[1], c.f[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002290A8; } }
L_002290A4:
    c.f[2] = c.r[2].w[0];
    c.budget -= 1;
L_002290A8:
    set32(c.r[3], 0u + 255u);
    c.budget -= 1;
L_002290AC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43000000u);
    st32((c.r[4].w[0] + 48u), c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    st32((c.r[4].w[0] + 52u), c.r[3].w[0]);
    c.f[0] = c.r[2].w[0];
    st32((c.r[4].w[0] + 56u), c.r[3].w[0]);
    c.f[1] = ld32((c.r[1].w[0] + 25640u));
    c.f[1] = fp::mul(c.f[1], c.f[2]);
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    st32((c.r[4].w[0] + 60u), c.r[2].w[0]);
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 56u)));
    c.budget -= 17;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002290F0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002290F0u) [[unlikely]] return; }
L_002290F0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00229100:
    c.r[3].d[0] = ld8((c.r[4].w[0] + 261u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_00229118; } }
    st8((c.r[4].w[0] + 260u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[4].w[0] + 261u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st16((c.r[4].w[0] + 262u), static_cast<std::uint16_t>(0u));
    c.budget -= 3;
L_00229118:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00229120:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x474C0000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[2].d[0] | 20051ull;  c.pc = t; return; }
L_00229130:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 64u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00228D10u | kUnwind; return; } goto L_00228D10; }
L_00229140:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 64u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002283A0u | kUnwind; return; } goto L_002283A0; }
L_00229150:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00229160:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42490000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00229188u); c.r[5].d[0] = c.r[2].d[0] | 19269ull;  if (depth < kMaxDepth) unit_000F(c, 30u, depth + 1u); else { c.pc = 0x0013C370u; return; } if (c.pc != 0x00229188u) [[unlikely]] return; }
L_00229188:
    set32(c.r[4], c.r[17].w[0] + 28u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00229194u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_000F(c, 264u, depth + 1u); else { c.pc = 0x0013E560u; return; } if (c.pc != 0x00229194u) [[unlikely]] return; }
L_00229194:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] - 4896u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00230000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00230000u);
    set32(c.r[2], c.r[2].w[0] - 4880u);
    st32((c.r[17].w[0] + 24u), c.r[3].w[0]);
    set32(c.r[4], c.r[17].w[0] + 64u);
    st32((c.r[17].w[0] + 28u), c.r[2].w[0]);
    set32(c.r[5], c.r[5].w[0] - 21760u);
    set32(c.r[6], c.r[6].w[0] - 28160u);
    set32(c.r[7], 0u + 64u);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002291CCu); set32(c.r[8], 0u + 10u);  if (depth < kMaxDepth) unit_0000(c, 89u, depth + 1u); else { c.pc = 0x00100790u; return; } if (c.pc != 0x002291CCu) [[unlikely]] return; }
L_002291CC:
    st32((c.r[17].w[0] + 40u), c.r[16].w[0]);
    set32(c.r[3], 0u + 1u);
    st32((c.r[17].w[0] + 48u), 0u);
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[17].w[0] + 752u), 0u);
    st8((c.r[17].w[0] + 756u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[17].w[0] + 757u), static_cast<std::uint8_t>(0u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00229200:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00229264; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] - 5008u);
    set32(c.r[2], c.r[2].w[0] - 4992u);
    st32((c.r[17].w[0]), c.r[3].w[0]);
    set32(c.r[4], c.r[17].w[0] + 8u);
    st32((c.r[17].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00229240u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000F(c, 266u, depth + 1u); else { c.pc = 0x0013E5B0u; return; } if (c.pc != 0x00229240u) [[unlikely]] return; }
L_00229240:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022924Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E490u; return; } if (c.pc != 0x0022924Cu) [[unlikely]] return; }
L_0022924C:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00229268; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00229264u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x00229264u) [[unlikely]] return; }
L_00229264:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00229268:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00229280:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00229294u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_003D(c, 81u, depth + 1u); else { c.pc = 0x001F53D0u; return; } if (c.pc != 0x00229294u) [[unlikely]] return; }
L_00229294:
    set32(c.r[3], 0u + 31u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);  if (t) { goto L_002292CC; } }
    set32(c.r[4], ld32((c.r[1].w[0] + 28352u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002292CC; } }
    set32(c.r[5], ld32((c.r[4].w[0] + 164u)));
    set32(c.r[3], 0u + 15000u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[3].d[0]; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_002292CC; } }
    set32(c.r[6], 0u + 9u);
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002292CCu); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0030(c, 19u, depth + 1u); else { c.pc = 0x001C02C0u; return; } if (c.pc != 0x002292CCu) [[unlikely]] return; }
L_002292CC:
    set32(c.r[4], ld32((c.r[16].w[0] + 40u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002293E0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0022937C; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 757u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00229344; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002292F4u);  if (depth < kMaxDepth) unit_0034(c, 135u, depth + 1u); else { c.pc = 0x001D1520u; return; } if (c.pc != 0x002292F4u) [[unlikely]] return; }
L_002292F4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0022937C; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 40u)));
    set32(c.r[3], 0u + 1903u);
    set32(c.r[5], ld32((c.r[4].w[0] + 164u)));
    c.budget -= 5;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 1906u);  if (t) { goto L_0022937C; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_0022937C; } }
    set32(c.r[3], 0u + 1907u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_0022937C; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 172u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[5], 0u + 148u);  if (t) { goto L_002293E0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00229338u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00AB(c, 236u, depth + 1u); else { c.pc = 0x003ADA80u; return; } if (c.pc != 0x00229338u) [[unlikely]] return; }
L_00229338:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 757u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0022937C; } }
L_00229344:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022934Cu);  if (depth < kMaxDepth) unit_0034(c, 135u, depth + 1u); else { c.pc = 0x001D1520u; return; } if (c.pc != 0x0022934Cu) [[unlikely]] return; }
L_0022934C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00229368; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 40u)));
    set32(c.r[3], 0u + 1907u);
    set32(c.r[4], ld32((c.r[4].w[0] + 164u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0022937C; } }
L_00229368:
    set32(c.r[4], ld32((c.r[16].w[0] + 40u)));
    set32(c.r[5], 0u + 148u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00229378u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00AB(c, 236u, depth + 1u); else { c.pc = 0x003ADA80u; return; } if (c.pc != 0x00229378u) [[unlikely]] return; }
L_00229378:
    st8((c.r[16].w[0] + 757u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_0022937C:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 757u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002293E0; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 48u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[2] = ld32((c.r[16].w[0] + 704u));
    set32(c.r[4], ld32((c.r[16].w[0] + 40u)));
    c.f[1] = c.r[2].w[0];
    c.f[0] = 0u;
    c.f[3] = ld32((c.r[3].w[0]));
    fpu_div(c, 2u, c.f[2], c.f[3]);
    c.f[12] = fp::mul(c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[12]) < fp::key(c.f[0]));
    c.budget -= 13;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002293C4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[12] = c.f[0];  if (t) { goto L_002293D8; } }
L_002293C4:
    fpu_compare(c, fp::key(c.f[12]) <= fp::key(c.f[1]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002293D8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[12] = c.f[1];  if (t) { goto L_002293D8; } }
L_002293D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002293E0u); set32(c.r[5], 0u + 148u);  if (depth < kMaxDepth) unit_00AB(c, 235u, depth + 1u); else { c.pc = 0x003ADA20u; return; } if (c.pc != 0x002293E0u) [[unlikely]] return; }
L_002293E0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002293F0:
    st32((c.r[4].w[0] + 48u), 0u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 757u), static_cast<std::uint8_t>(0u));  c.pc = t; return; }
L_00229400:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    set32(c.r[5], c.r[5].w[0] + 28352u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    set32(c.r[3], 0u + 1u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[17], ld32((c.r[4].w[0] + 40u)));
    set32(c.r[6], ld32((c.r[17].w[0] + 644u)));
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[16], ld32((c.r[5].w[0])));
    st32((c.r[4].w[0] + 44u), c.r[16].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 172u)));
    c.budget -= 18;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002298B4; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_002298B4; } }
    c.f[0] = ld32((c.r[18].w[0] + 704u));
    st32((c.r[18].w[0] + 708u), c.f[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 48u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00229498; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022946Cu); set32(c.r[4], 0u + 300u);  if (depth < kMaxDepth) unit_0029(c, 236u, depth + 1u); else { c.pc = 0x001A6D90u; return; } if (c.pc != 0x0022946Cu) [[unlikely]] return; }
L_0022946C:
    st32((c.r[18].w[0] + 48u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 48u)));
    c.f[1] = ld32((c.r[2].w[0] + 24u));
    c.f[0] = ld32((c.r[2].w[0] + 20u));
    c.f[1] = fp::cvt_w_s(c.f[1]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[1]);
    set32(c.r[4], c.f[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00229494u);  if (depth < kMaxDepth) unit_004A(c, 228u, depth + 1u); else { c.pc = 0x0022AD60u; return; } if (c.pc != 0x00229494u) [[unlikely]] return; }
L_00229494:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_00229498:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x42490000u);  if (t) { goto L_002294A8; } }
    set32(c.r[4], c.r[4].w[0] + 436u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42490000u);
    c.budget -= 2;
L_002294A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002294B0u); c.r[5].d[0] = c.r[2].d[0] | 19284ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x002294B0u) [[unlikely]] return; }
L_002294B0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002294C0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 16u)));  if (t) { goto L_002294C4; } }
L_002294C0:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002294C4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002294E0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002294D4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_004A(c, 199u, depth + 1u); else { c.pc = 0x0022A7E0u; return; } if (c.pc != 0x002294D4u) [[unlikely]] return; }
L_002294D4:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002294E0u); set32(c.r[4], c.r[16].w[0] + 436u);  if (depth < kMaxDepth) unit_000F(c, 40u, depth + 1u); else { c.pc = 0x0013C4A0u; return; } if (c.pc != 0x002294E0u) [[unlikely]] return; }
L_002294E0:
    set32(c.r[3], ld32((c.r[17].w[0] + 164u)));
    set32(c.r[2], 0u + 12089u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_002296E4; } }
    set32(c.r[2], 0u + 12088u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_002296D0; } }
    set32(c.r[2], 0u + 12087u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0022964C; } }
    set32(c.r[2], 0u + 12090u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_00229634; } }
    set32(c.r[2], 0u + 1908u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_00229610; } }
    set32(c.r[2], 0u + 1904u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_002295FC; } }
    set32(c.r[2], 0u + 1902u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_002295E8; } }
    set32(c.r[2], 0u + 1901u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002295E4; } }
    set32(c.r[2], 0u + 1900u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002295E4; } }
    set32(c.r[2], 0u + 1907u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_002295D4; } }
    set32(c.r[2], 0u + 1906u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0022957C; } }
    set32(c.r[2], 0u + 1903u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0022957C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_002296F8; } }
L_0022957C:
    st32((c.r[18].w[0] + 704u), 0u);
    set32(c.r[3], c.r[18].w[0] + 736u);
    st32((c.r[18].w[0] + 708u), 0u);
    ld128((c.r[16].w[0] + 208u) & ~15u, c.r[2]);
    st128((c.r[18].w[0] + 720u) & ~15u, c.r[2]);
    st128((c.r[3].w[0]) & ~15u, c.vu0.vf[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    ld128((c.r[18].w[0] + 720u) & ~15u, c.r[2]);
    st128((c.r[17].w[0] + 208u) & ~15u, c.r[2]);
    c.budget -= 11;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[18].w[0] + 752u), 0u);  if (t) { goto L_002295AC; } }
    set32(c.r[4], c.r[4].w[0] + 436u);
    c.budget -= 1;
L_002295AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002295B4u);  if (depth < kMaxDepth) unit_004A(c, 190u, depth + 1u); else { c.pc = 0x0022A690u; return; } if (c.pc != 0x002295B4u) [[unlikely]] return; }
L_002295B4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002298B4; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002295C8u); set32(c.r[5], 0u + 1900u);  if (depth < kMaxDepth) unit_004A(c, 182u, depth + 1u); else { c.pc = 0x0022A590u; return; } if (c.pc != 0x002295C8u) [[unlikely]] return; }
L_002295C8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_002298B8; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_002295D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002295DCu);  if (depth < kMaxDepth) unit_004A(c, 124u, depth + 1u); else { c.pc = 0x002298D0u; return; } if (c.pc != 0x002295DCu) [[unlikely]] return; }
L_002295DC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[17].w[0] + 164u)));  if (t) { goto L_0022972C; } }
L_002295E4:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_002295E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002295F0u);  if (depth < kMaxDepth) unit_004A(c, 138u, depth + 1u); else { c.pc = 0x00229CF0u; return; } if (c.pc != 0x002295F0u) [[unlikely]] return; }
L_002295F0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00229728; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_002295FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00229604u);  if (depth < kMaxDepth) unit_004A(c, 145u, depth + 1u); else { c.pc = 0x00229E30u; return; } if (c.pc != 0x00229604u) [[unlikely]] return; }
L_00229604:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00229728; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_00229610:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00229618u);  if (depth < kMaxDepth) unit_004A(c, 148u, depth + 1u); else { c.pc = 0x00229E80u; return; } if (c.pc != 0x00229618u) [[unlikely]] return; }
L_00229618:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00229620u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_004A(c, 177u, depth + 1u); else { c.pc = 0x0022A4E0u; return; } if (c.pc != 0x00229620u) [[unlikely]] return; }
L_00229620:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00229628u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_004A(c, 132u, depth + 1u); else { c.pc = 0x00229AC0u; return; } if (c.pc != 0x00229628u) [[unlikely]] return; }
L_00229628:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00229728; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_00229634:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022963Cu);  if (depth < kMaxDepth) unit_004A(c, 152u, depth + 1u); else { c.pc = 0x00229F10u; return; } if (c.pc != 0x0022963Cu) [[unlikely]] return; }
L_0022963C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00229644u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_004A(c, 132u, depth + 1u); else { c.pc = 0x00229AC0u; return; } if (c.pc != 0x00229644u) [[unlikely]] return; }
L_00229644:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00229728; } }
L_0022964C:
    set32(c.r[3], ld32((c.r[18].w[0] + 48u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40800000u);
    c.f[1] = c.r[2].w[0];
    c.f[2] = ld32((c.r[18].w[0] + 704u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[0] = c.r[2].w[0];
    c.f[3] = ld32((c.r[3].w[0] + 4u));
    fpu_div(c, 1u, c.f[3], c.f[1]);
    c.f[1] = fp::add(c.f[2], c.f[1]);
    st32((c.r[18].w[0] + 704u), c.f[1]);
    set32(c.r[2], ld32((c.r[18].w[0] + 48u)));
    c.f[1] = ld32((c.r[18].w[0] + 704u));
    c.f[2] = ld32((c.r[2].w[0]));
    fpu_div(c, 0u, c.f[2], c.f[0]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 19;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0022969C; } }
    st32((c.r[18].w[0] + 704u), c.f[0]);
    c.budget -= 1;
L_0022969C:
    set32(c.r[4], ld32((c.r[18].w[0] + 40u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 60u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002296BC; } }
    ld128((c.r[4].w[0] + 208u) & ~15u, c.r[2]);
    st128((c.r[3].w[0] + 208u) & ~15u, c.r[2]);
    ld128((c.r[4].w[0] + 224u) & ~15u, c.r[2]);
    st128((c.r[3].w[0] + 224u) & ~15u, c.r[2]);
    c.budget -= 4;
L_002296BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002296C4u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_004A(c, 132u, depth + 1u); else { c.pc = 0x00229AC0u; return; } if (c.pc != 0x002296C4u) [[unlikely]] return; }
L_002296C4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00229728; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_002296D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002296D8u);  if (depth < kMaxDepth) unit_004A(c, 167u, depth + 1u); else { c.pc = 0x0022A220u; return; } if (c.pc != 0x002296D8u) [[unlikely]] return; }
L_002296D8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00229728; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_002296E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002296ECu);  if (depth < kMaxDepth) unit_004A(c, 174u, depth + 1u); else { c.pc = 0x0022A3C0u; return; } if (c.pc != 0x002296ECu) [[unlikely]] return; }
L_002296EC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00229728; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002296F8:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00229704; } }
    set32(c.r[4], c.r[4].w[0] + 436u);
    c.budget -= 1;
L_00229704:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022970Cu);  if (depth < kMaxDepth) unit_004A(c, 190u, depth + 1u); else { c.pc = 0x0022A690u; return; } if (c.pc != 0x0022970Cu) [[unlikely]] return; }
L_0022970C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002298B4; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00229720u); set32(c.r[5], 0u + 1900u);  if (depth < kMaxDepth) unit_004A(c, 182u, depth + 1u); else { c.pc = 0x0022A590u; return; } if (c.pc != 0x00229720u) [[unlikely]] return; }
L_00229720:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002298B4; } }
L_00229728:
    set32(c.r[3], ld32((c.r[17].w[0] + 164u)));
    c.budget -= 1;
L_0022972C:
    c.r[2].d[0] = c.r[3].sd[0] < 12087ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00229744; } }
    c.r[1].d[0] = c.r[3].sd[0] < 12091ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_00229758; } }
L_00229744:
    set32(c.r[2], ld32((c.r[18].w[0] + 48u)));
    c.f[0] = ld32((c.r[18].w[0] + 704u));
    c.f[1] = ld32((c.r[2].w[0] + 8u));
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    st32((c.r[18].w[0] + 704u), c.f[0]);
    c.budget -= 5;
L_00229758:
    c.f[1] = ld32((c.r[18].w[0] + 704u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00229774; } }
    st32((c.r[18].w[0] + 704u), c.f[0]);
    c.budget -= 1;
L_00229774:
    c.f[0] = ld32((c.r[18].w[0] + 704u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[2], 0u + 1908u);
    st32((c.r[18].w[0] + 736u), 0u);
    c.f[0] = c.f[0] ^ fp::kSign;
    st32((c.r[18].w[0] + 740u), 0u);
    st32((c.r[18].w[0] + 744u), c.f[0]);
    st32((c.r[18].w[0] + 748u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 164u)));
    c.budget -= 11;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00229800; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[1] = ld32((c.r[17].w[0] + 212u));
    c.f[0] = ld32((c.r[1].w[0] + 25768u));
    c.f[12] = fp::add(c.f[0], c.f[1]);
    fpu_compare(c, fp::key(c.f[12]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002297CC; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = ld32((c.r[1].w[0] + 25760u));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.f[12] = fp::sub(c.f[12], c.f[0]);  if (t) { goto L_002297EC; } }
L_002297CC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = ld32((c.r[1].w[0] + 25752u));
    fpu_compare(c, fp::key(c.f[12]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[4], c.r[18].w[0] + 736u);  if (t) { goto L_002297F0; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = ld32((c.r[1].w[0] + 25760u));
    c.f[12] = fp::add(c.f[12], c.f[0]);
    c.budget -= 3;
L_002297EC:
    set32(c.r[4], c.r[18].w[0] + 736u);
    c.budget -= 1;
L_002297F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002297F8u);  if (depth < kMaxDepth) unit_0011(c, 21u, depth + 1u); else { c.pc = 0x001444F0u; return; } if (c.pc != 0x002297F8u) [[unlikely]] return; }
L_002297F8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[17].w[0] + 164u)));  if (t) { goto L_00229810; } }
L_00229800:
    c.f[12] = ld32((c.r[17].w[0] + 212u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022980Cu); set32(c.r[4], c.r[18].w[0] + 736u);  if (depth < kMaxDepth) unit_0011(c, 21u, depth + 1u); else { c.pc = 0x001444F0u; return; } if (c.pc != 0x0022980Cu) [[unlikely]] return; }
L_0022980C:
    set32(c.r[3], ld32((c.r[17].w[0] + 164u)));
    c.budget -= 1;
L_00229810:
    set32(c.r[2], 0u + 1907u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[3], c.r[16].w[0] + 224u);  if (t) { goto L_00229830; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 176u)));
    c.r[1].d[0] = c.r[2].sd[0] < 71ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0022984C; } }
    set32(c.r[3], c.r[16].w[0] + 224u);
    c.budget -= 1;
L_00229830:
    set32(c.r[2], c.r[18].w[0] + 736u);
    ld128((c.r[3].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[2].w[0]) & ~15u, c.vu0.vf[5]);
    vu::add(c.vu0, 14u, 4u, 4u, 5u);
    st128((c.r[3].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[16].w[0] + 224u) & ~15u, c.r[2]);
    st128((c.r[17].w[0] + 224u) & ~15u, c.r[2]);
    c.budget -= 7;
L_0022984C:
    set32(c.r[3], ld32((c.r[16].w[0] + 164u)));
    set32(c.r[6], ld32((c.r[17].w[0] + 164u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[6].d[0];  if (t) { goto L_00229898; } }
    set32(c.r[2], 0u + 12088u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] != c.r[2].d[0];  if (t) { goto L_00229880; } }
    set32(c.r[5], ld32((c.r[17].w[0] + 60u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00229878u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003A(c, 280u, depth + 1u); else { c.pc = 0x001EBEE0u; return; } if (c.pc != 0x00229878u) [[unlikely]] return; }
L_00229878:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[16].w[0] + 52u)));  if (t) { goto L_0022989C; } }
L_00229880:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00229898; } }
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00229898u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003A(c, 284u, depth + 1u); else { c.pc = 0x001EBF70u; return; } if (c.pc != 0x00229898u) [[unlikely]] return; }
L_00229898:
    set32(c.r[4], ld32((c.r[16].w[0] + 52u)));
    c.budget -= 1;
L_0022989C:
    set32(c.r[25], ld32((c.r[4].w[0] + 152u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002298ACu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002298ACu) [[unlikely]] return; }
L_002298AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002298B4u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_004A(c, 158u, depth + 1u); else { c.pc = 0x0022A070u; return; } if (c.pc != 0x002298B4u) [[unlikely]] return; }
L_002298B4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_002298B8:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002298D0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.f[0] = c.r[3].w[0];
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[6], c.r[6].w[0] + 28352u);
    set32(c.r[7], ld32((c.r[4].w[0] + 40u)));
    c.f[1] = ld32((c.r[4].w[0] + 704u));
    set32(c.r[5], ld32((c.r[4].w[0] + 48u)));
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[7].w[0] + 644u)));
    c.f[2] = ld32((c.r[5].w[0] + 12u));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[6].w[0] + c.r[3].w[0]);
    c.f[1] = fp::sub(c.f[1], c.f[2]);
    set32(c.r[16], ld32((c.r[3].w[0])));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 21;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[4].w[0] + 704u), c.f[1]);  if (t) { goto L_0022993C; } }
    set32(c.r[3], ld32((c.r[7].w[0] + 176u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st32((c.r[7].w[0] + 176u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 176u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st32((c.r[16].w[0] + 176u), c.r[3].w[0]);
    c.budget -= 6;
L_0022993C:
    c.f[1] = ld32((c.r[17].w[0] + 704u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00229958; } }
    st32((c.r[17].w[0] + 704u), c.f[0]);
    c.budget -= 1;
L_00229958:
    set32(c.r[4], ld32((c.r[16].w[0] + 176u)));
    set32(c.r[3], 0u + 80u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002299CC; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 64u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 1909u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    c.f[0] = ld32((c.r[2].w[0] + 52u));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00229990u); st32((c.r[16].w[0] + 228u), c.f[0]);  if (depth < kMaxDepth) unit_0030(c, 20u, depth + 1u); else { c.pc = 0x001C02D0u; return; } if (c.pc != 0x00229990u) [[unlikely]] return; }
L_00229990:
    st32((c.r[16].w[0] + 60u), 0u);
    set32(c.r[5], 0u - 64u);
    st32((c.r[16].w[0] + 24u), 0u);
    c.r[6].d[0] = 0ull + static_cast<std::uint64_t>(63ll);
    c.r[7].d[0] = ld8((c.r[16].w[0] + 396u));
    set32(c.r[3], 0u - 9u);
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(8ll);
    c.r[5].d[0] = c.r[7].d[0] & c.r[5].d[0];
    c.r[5].d[0] = c.r[5].d[0] | c.r[6].d[0];
    st8((c.r[16].w[0] + 396u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].d[0] = ld8((c.r[16].w[0] + 395u));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st8((c.r[16].w[0] + 395u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[17].w[0] + 704u), 0u);
    c.budget -= 15;
L_002299CC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002299E0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[16], ld32((c.r[4].w[0] + 40u)));
    c.r[4].d[0] = ld16((c.r[16].w[0] + 472u));
    c.r[3].d[0] = c.r[4].d[0] & 64ull;
    c.budget -= 10;
    { const bool t = c.r[3].d[0] == 0ull; c.r[3].d[0] = c.r[4].d[0] & 16ull;  if (t) { goto L_00229A28; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00229A14u); set32(c.r[5], 0u + 1900u);  if (depth < kMaxDepth) unit_004A(c, 182u, depth + 1u); else { c.pc = 0x0022A590u; return; } if (c.pc != 0x00229A14u) [[unlikely]] return; }
L_00229A14:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = ld32((c.r[1].w[0] + 25744u));
    st32((c.r[17].w[0] + 704u), c.f[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 708u), 0u);  if (t) { goto L_00229A88; } }
L_00229A28:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00229A50; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00229A3Cu); set32(c.r[5], 0u + 1908u);  if (depth < kMaxDepth) unit_004A(c, 182u, depth + 1u); else { c.pc = 0x0022A590u; return; } if (c.pc != 0x00229A3Cu) [[unlikely]] return; }
L_00229A3C:
    set32(c.r[3], ld32((c.r[17].w[0] + 48u)));
    c.f[0] = ld32((c.r[3].w[0] + 4u));
    st32((c.r[17].w[0] + 704u), c.f[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 708u), 0u);  if (t) { goto L_00229A88; } }
L_00229A50:
    c.r[3].d[0] = c.r[4].d[0] & 32ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[3].d[0] = c.r[4].d[0] & 128ull;  if (t) { goto L_00229A78; } }
    st32((c.r[16].w[0] + 60u), c.r[16].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 12090u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00229A70u); st32((c.r[17].w[0] + 752u), 0u);  if (depth < kMaxDepth) unit_004A(c, 182u, depth + 1u); else { c.pc = 0x0022A590u; return; } if (c.pc != 0x00229A70u) [[unlikely]] return; }
L_00229A70:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[16].w[0] + 164u)));  if (t) { goto L_00229A8C; } }
L_00229A78:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00229A88; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00229A88u); set32(c.r[5], 0u + 1907u);  if (depth < kMaxDepth) unit_004A(c, 182u, depth + 1u); else { c.pc = 0x0022A590u; return; } if (c.pc != 0x00229A88u) [[unlikely]] return; }
L_00229A88:
    set32(c.r[4], ld32((c.r[16].w[0] + 164u)));
    c.budget -= 1;
L_00229A8C:
    set32(c.r[3], 0u + 1901u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 1902u);  if (t) { goto L_00229AA0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00229AAC; } }
L_00229AA0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00229AACu); set32(c.r[5], 0u + 1900u);  if (depth < kMaxDepth) unit_004A(c, 182u, depth + 1u); else { c.pc = 0x0022A590u; return; } if (c.pc != 0x00229AACu) [[unlikely]] return; }
L_00229AAC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00229AC0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00420000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    set32(c.r[3], c.r[3].w[0] - 23648u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[7], c.r[7].w[0] + 28352u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[6], c.r[29].w[0] + 64u);
    set32(c.r[18], ld32((c.r[4].w[0] + 40u)));
    ld128((c.r[3].w[0]) & ~15u, c.r[5]);
    set32(c.r[8], ld32((c.r[18].w[0] + 644u)));
    ld128((c.r[3].w[0] + 16u) & ~15u, c.r[3]);
    set32(c.r[8], c.r[8].w[0] << 2);
    set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);
    set32(c.r[17], ld32((c.r[7].w[0])));
    st128((c.r[6].w[0]) & ~15u, c.r[5]);
    st128((c.r[6].w[0] + 16u) & ~15u, c.r[3]);
    set32(c.r[5], ld32((c.r[18].w[0] + 164u)));
    c.r[3].d[0] = c.r[5].d[0] ^ 1908ull;
    c.r[16].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 24;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_00229B5C; } }
    set32(c.r[6], ld32((c.r[18].w[0] + 944u)));
    set32(c.r[3], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[6].d[0] == c.r[3].d[0]; c.r[1].d[0] = c.r[5].sd[0] < 12000ll ? 1ull : 0ull;  if (t) { goto L_00229B40; } }
    c.r[1].d[0] = c.r[6].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_00229B5C; } }
    c.r[1].d[0] = c.r[5].sd[0] < 12000ll ? 1ull : 0ull;
    c.budget -= 1;
L_00229B40:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00229CD0; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00229B54u); set32(c.r[5], 0u + 1900u);  if (depth < kMaxDepth) unit_004A(c, 182u, depth + 1u); else { c.pc = 0x0022A590u; return; } if (c.pc != 0x00229B54u) [[unlikely]] return; }
L_00229B54:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_00229CD4; } }
L_00229B5C:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00229B8C; } }
    set32(c.r[5], ld32((c.r[18].w[0] + 944u)));
    set32(c.r[3], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_00229CD0; } }
    set32(c.r[2], c.r[5].w[0] + 4u);
    c.r[2].d[0] = c.r[2].d[0] & 7ull;
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; c.f[12] = ld32((c.r[2].w[0] + 64u));  if (t) { goto L_00229B9C; } }
L_00229B8C:
    set32(c.r[2], ld32((c.r[18].w[0] + 944u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    c.f[12] = ld32((c.r[2].w[0] + 64u));
    c.budget -= 4;
L_00229B9C:
    c.f[0] = ld32((c.r[4].w[0] + 704u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[1] = c.r[2].w[0];
    fpu_div(c, 3u, c.f[0], c.f[1]);
    c.budget -= 9;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00229BC8; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[3] = ld32((c.r[1].w[0] + 25736u));
    c.budget -= 2;
L_00229BC8:
    c.f[2] = ld32((c.r[18].w[0] + 212u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43340000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = c.r[2].w[0];
    c.f[1] = ld32((c.r[1].w[0] + 25768u));
    st32((c.r[29].w[0] + 108u), c.f[2]);
    set32(c.r[2], ld32((c.r[4].w[0] + 48u)));
    c.f[2] = ld32((c.r[2].w[0] + 16u));
    set32(c.r[4], c.r[29].w[0] + 108u);
    c.f[1] = fp::mul(c.f[1], c.f[2]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00229C04u); c.f[13] = fp::mul(c.f[3], c.f[0]);  if (depth < kMaxDepth) unit_0010(c, 277u, depth + 1u); else { c.pc = 0x00143F70u; return; } if (c.pc != 0x00229C04u) [[unlikely]] return; }
L_00229C04:
    c.f[2] = ld32((c.r[18].w[0] + 212u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[1] = ld32((c.r[29].w[0] + 108u));
    c.f[0] = ld32((c.r[1].w[0] + 25768u));
    c.f[1] = fp::sub(c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00229C34; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = ld32((c.r[1].w[0] + 25760u));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.f[1] = fp::sub(c.f[1], c.f[0]);  if (t) { goto L_00229C54; } }
L_00229C34:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = ld32((c.r[1].w[0] + 25752u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00229C54; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = ld32((c.r[1].w[0] + 25760u));
    c.f[1] = fp::add(c.f[1], c.f[0]);
    c.budget -= 3;
L_00229C54:
    c.f[0] = ld32((c.r[29].w[0] + 108u));
    st32((c.r[18].w[0] + 212u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 108u));
    st32((c.r[17].w[0] + 212u), c.f[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 164u)));
    c.r[1].d[0] = c.r[3].sd[0] < 12000ll ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00229CD0; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_00229CD0; } }
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00229CA4; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00229C9Cu); set32(c.r[5], 0u + 1900u);  if (depth < kMaxDepth) unit_004A(c, 182u, depth + 1u); else { c.pc = 0x0022A590u; return; } if (c.pc != 0x00229C9Cu) [[unlikely]] return; }
L_00229C9C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00229CD0; } }
L_00229CA4:
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_00229CC8; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00229CBCu); set32(c.r[5], 0u + 1901u);  if (depth < kMaxDepth) unit_004A(c, 182u, depth + 1u); else { c.pc = 0x0022A590u; return; } if (c.pc != 0x00229CBCu) [[unlikely]] return; }
L_00229CBC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00229CD0; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_00229CC8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00229CD0u); set32(c.r[5], 0u + 1902u);  if (depth < kMaxDepth) unit_004A(c, 182u, depth + 1u); else { c.pc = 0x0022A590u; return; } if (c.pc != 0x00229CD0u) [[unlikely]] return; }
L_00229CD0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_00229CD4:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_00229CF0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.f[1] = ld32((c.r[4].w[0] + 704u));
    c.f[0] = ld32((c.r[1].w[0] + 25728u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 10;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00229D28; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00229D20u);  if (depth < kMaxDepth) unit_004A(c, 126u, depth + 1u); else { c.pc = 0x002299E0u; return; } if (c.pc != 0x00229D20u) [[unlikely]] return; }
L_00229D20:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_00229E14; } }
L_00229D28:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00229D30u); set32(c.r[16], ld32((c.r[17].w[0] + 40u)));  if (depth < kMaxDepth) unit_004A(c, 132u, depth + 1u); else { c.pc = 0x00229AC0u; return; } if (c.pc != 0x00229D30u) [[unlikely]] return; }
L_00229D30:
    c.r[4].d[0] = ld16((c.r[16].w[0] + 472u));
    c.r[3].d[0] = c.r[4].d[0] & 64ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; c.r[3].d[0] = c.r[4].d[0] & 24ull;  if (t) { goto L_00229D7C; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 48u)));
    c.f[0] = ld32((c.r[17].w[0] + 704u));
    c.f[1] = ld32((c.r[3].w[0] + 4u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[17].w[0] + 704u), c.f[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 48u)));
    c.f[0] = ld32((c.r[17].w[0] + 704u));
    c.f[1] = ld32((c.r[3].w[0]));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 11;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00229E10; } }
    st32((c.r[17].w[0] + 704u), c.f[1]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00229E10; } }
    c.r[3].d[0] = c.r[4].d[0] & 24ull;
    c.budget -= 1;
L_00229D7C:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; c.r[3].d[0] = c.r[4].d[0] & 32ull;  if (t) { goto L_00229DD0; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 48u)));
    c.f[1] = ld32((c.r[17].w[0] + 704u));
    c.f[0] = 0u;
    c.f[2] = ld32((c.r[2].w[0] + 12u));
    c.f[1] = fp::sub(c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[17].w[0] + 704u), c.f[1]);  if (t) { goto L_00229DBC; } }
    st32((c.r[17].w[0] + 704u), c.f[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00229DB4u); set32(c.r[5], 0u + 1900u);  if (depth < kMaxDepth) unit_004A(c, 182u, depth + 1u); else { c.pc = 0x0022A590u; return; } if (c.pc != 0x00229DB4u) [[unlikely]] return; }
L_00229DB4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00229DC4; } }
L_00229DBC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00229DC4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_004A(c, 177u, depth + 1u); else { c.pc = 0x0022A4E0u; return; } if (c.pc != 0x00229DC4u) [[unlikely]] return; }
L_00229DC4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00229E10; } }
    c.r[3].d[0] = c.r[4].d[0] & 32ull;
    c.budget -= 1;
L_00229DD0:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; c.r[3].d[0] = c.r[4].d[0] & 128ull;  if (t) { goto L_00229DFC; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 40u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 12090u);
    st32((c.r[2].w[0] + 60u), c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00229DF0u); st32((c.r[17].w[0] + 752u), 0u);  if (depth < kMaxDepth) unit_004A(c, 182u, depth + 1u); else { c.pc = 0x0022A590u; return; } if (c.pc != 0x00229DF0u) [[unlikely]] return; }
L_00229DF0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00229E10; } }
    c.r[3].d[0] = c.r[4].d[0] & 128ull;
    c.budget -= 1;
L_00229DFC:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00229E10; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00229E10u); set32(c.r[5], 0u + 1907u);  if (depth < kMaxDepth) unit_004A(c, 182u, depth + 1u); else { c.pc = 0x0022A590u; return; } if (c.pc != 0x00229E10u) [[unlikely]] return; }
L_00229E10:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_00229E14:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00229E30:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 40u)));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00229E50; } }
    set32(c.r[4], c.r[4].w[0] + 436u);
    c.budget -= 1;
L_00229E50:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00229E58u);  if (depth < kMaxDepth) unit_004A(c, 190u, depth + 1u); else { c.pc = 0x0022A690u; return; } if (c.pc != 0x00229E58u) [[unlikely]] return; }
L_00229E58:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00229E6C; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 40u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00229E6Cu); set32(c.r[5], 0u + 1900u);  if (depth < kMaxDepth) unit_004A(c, 182u, depth + 1u); else { c.pc = 0x0022A590u; return; } if (c.pc != 0x00229E6Cu) [[unlikely]] return; }
L_00229E6C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00229E80:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 40u)));
    c.r[2].d[0] = ld16((c.r[2].w[0] + 472u));
    c.r[2].d[0] = c.r[2].d[0] & 16ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00229EEC; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 48u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.f[0] = c.r[2].w[0];
    c.f[1] = ld32((c.r[3].w[0] + 4u));
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 704u), c.f[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 40u)));
    c.budget -= 9;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00229EC8; } }
    set32(c.r[4], c.r[4].w[0] + 436u);
    c.budget -= 1;
L_00229EC8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00229ED0u);  if (depth < kMaxDepth) unit_004A(c, 190u, depth + 1u); else { c.pc = 0x0022A690u; return; } if (c.pc != 0x00229ED0u) [[unlikely]] return; }
L_00229ED0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00229EFC; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 40u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00229EE4u); set32(c.r[5], 0u + 1908u);  if (depth < kMaxDepth) unit_004A(c, 182u, depth + 1u); else { c.pc = 0x0022A590u; return; } if (c.pc != 0x00229EE4u) [[unlikely]] return; }
L_00229EE4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_00229F00; } }
L_00229EEC:
    st32((c.r[16].w[0] + 704u), 0u);
    set32(c.r[4], ld32((c.r[16].w[0] + 40u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00229EFCu); set32(c.r[5], 0u + 1900u);  if (depth < kMaxDepth) unit_004A(c, 182u, depth + 1u); else { c.pc = 0x0022A590u; return; } if (c.pc != 0x00229EFCu) [[unlikely]] return; }
L_00229EFC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_00229F00:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00229F10:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 40u)));
    set32(c.r[16], ld32((c.r[3].w[0] + 60u)));
    c.budget -= 9;
    { const bool t = c.r[16].d[0] == 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0022A054; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == c.r[3].d[0];  if (t) { goto L_0022A054; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 392u));
    set32(c.r[4], 0u + 1u);
    c.r[3].d[0] = c.r[3].d[0] << 61;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_0022A054; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 393u));
    c.r[3].d[0] = c.r[3].d[0] << 56;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_0022A054; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00229F74; } }
    set32(c.r[4], c.r[4].w[0] + 436u);
    c.budget -= 1;
L_00229F74:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x53590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00229F80u); c.r[5].d[0] = c.r[2].d[0] | 20035ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x00229F80u) [[unlikely]] return; }
L_00229F80:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_00229F8C; } }
    set32(c.r[4], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 1;
L_00229F8C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00229F94u);  if (depth < kMaxDepth) unit_0033(c, 101u, depth + 1u); else { c.pc = 0x001CD4B0u; return; } if (c.pc != 0x00229F94u) [[unlikely]] return; }
L_00229F94:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0022A054; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00229FA4u);  if (depth < kMaxDepth) unit_0034(c, 85u, depth + 1u); else { c.pc = 0x001D0B30u; return; } if (c.pc != 0x00229FA4u) [[unlikely]] return; }
L_00229FA4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0022A054; } }
    set32(c.r[18], ld32((c.r[16].w[0] + 164u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 184u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00229FC0u); st32((c.r[16].w[0] + 164u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0034(c, 75u, depth + 1u); else { c.pc = 0x001D08A0u; return; } if (c.pc != 0x00229FC0u) [[unlikely]] return; }
L_00229FC0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00229FD8; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 164u)));
    set32(c.r[3], 0u + 41u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00229FE8; } }
L_00229FD8:
    set32(c.r[3], ld32((c.r[17].w[0] + 40u)));
    st32((c.r[3].w[0] + 60u), 0u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 164u), c.r[18].w[0]);  if (t) { goto L_0022A054; } }
L_00229FE8:
    st32((c.r[16].w[0] + 164u), c.r[18].w[0]);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[17].w[0] + 44u)));
    set32(c.r[6], 0u + 12087u);
    ld128((c.r[2].w[0] + 224u) & ~15u, c.r[2]);
    st128((c.r[16].w[0] + 224u) & ~15u, c.r[2]);
    set32(c.r[2], ld32((c.r[17].w[0] + 44u)));
    ld128((c.r[2].w[0] + 224u) & ~15u, c.r[2]);
    st128((c.r[16].w[0] + 224u) & ~15u, c.r[2]);
    ld128((c.r[17].w[0] + 720u) & ~15u, c.r[2]);
    st128((c.r[16].w[0] + 208u) & ~15u, c.r[2]);
    set32(c.r[4], ld32((c.r[17].w[0] + 40u)));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022A020u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003A(c, 280u, depth + 1u); else { c.pc = 0x001EBEE0u; return; } if (c.pc != 0x0022A020u) [[unlikely]] return; }
L_0022A020:
    set32(c.r[4], ld32((c.r[17].w[0] + 40u)));
    set32(c.r[5], 0u - 5u);
    c.r[6].d[0] = 0ull + static_cast<std::uint64_t>(4ll);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 392u));
    c.r[3].d[0] = c.r[3].d[0] & c.r[5].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[6].d[0];
    st8((c.r[4].w[0] + 392u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[17].w[0] + 40u)));
    set32(c.r[4], ld32((c.r[3].w[0] + 60u)));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 392u));
    c.r[3].d[0] = c.r[3].d[0] & c.r[5].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[6].d[0];
    st8((c.r[4].w[0] + 392u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 13;
L_0022A054:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0022A070:
    set32(c.r[29], c.r[29].w[0] - 112u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[1].w[0] + 28340u)));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0022A20C; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], ld32((c.r[1].w[0] + 28344u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0022A20C; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], ld32((c.r[1].w[0] + 28348u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0022A0B8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_0022A210; } }
L_0022A0B8:
    set32(c.r[16], ld32((c.r[17].w[0] + 44u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[4], ld32((c.r[16].w[0] + 52u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 152u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0022A0D4u); set32(c.r[5], c.r[5].w[0] + 25656u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0022A0D4u) [[unlikely]] return; }
L_0022A0D4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], ld32((c.r[1].w[0] + 28332u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0022A174; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], ld32((c.r[1].w[0] + 28336u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0022A174; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 52u)));
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[4].w[0] + 152u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0022A10Cu); set32(c.r[5], c.r[29].w[0] + 48u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0022A10Cu) [[unlikely]] return; }
L_0022A10C:
    set32(c.r[3], ld32((c.r[17].w[0] + 40u)));
    set32(c.r[2], 0u + 1908u);
    set32(c.r[3], ld32((c.r[3].w[0] + 164u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[4], 0u + 42u);  if (t) { goto L_0022A168; } }
    c.f[1] = ld32((c.r[17].w[0] + 704u));
    c.f[0] = ld32((c.r[17].w[0] + 708u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[4], 0u + 42u);  if (t) { goto L_0022A150; } }
    set32(c.r[2], 0u + 12088u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0022A14C; } }
    set32(c.r[2], 0u + 12087u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0022A164; } }
L_0022A14C:
    set32(c.r[4], 0u + 42u);
    c.budget -= 1;
L_0022A150:
    set32(c.r[5], 0u + 1u);
    set32(c.r[6], c.r[29].w[0] + 96u);
    set32(c.r[7], 0u - 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022A164u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0066(c, 208u, depth + 1u); else { c.pc = 0x0029A200u; return; } if (c.pc != 0x0022A164u) [[unlikely]] return; }
L_0022A164:
    set32(c.r[4], 0u + 42u);
    c.budget -= 1;
L_0022A168:
    set32(c.r[5], c.r[29].w[0] + 96u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022A174u); set32(c.r[6], c.r[16].w[0] + 208u);  if (depth < kMaxDepth) unit_0066(c, 215u, depth + 1u); else { c.pc = 0x0029A3D0u; return; } if (c.pc != 0x0022A174u) [[unlikely]] return; }
L_0022A174:
    set32(c.r[4], ld32((c.r[16].w[0] + 52u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[25], ld32((c.r[4].w[0] + 152u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0022A18Cu); set32(c.r[5], c.r[5].w[0] + 25664u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0022A18Cu) [[unlikely]] return; }
L_0022A18C:
    set32(c.r[4], ld32((c.r[16].w[0] + 52u)));
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[4].w[0] + 152u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0022A1A4u); set32(c.r[5], c.r[29].w[0] + 48u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0022A1A4u) [[unlikely]] return; }
L_0022A1A4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[1] = ld32((c.r[17].w[0] + 704u));
    c.f[0] = ld32((c.r[1].w[0] + 25720u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[4], 0u + 43u);  if (t) { goto L_0022A1DC; } }
    c.f[0] = ld32((c.r[17].w[0] + 708u));
    set32(c.r[2], ld32((c.r[17].w[0] + 48u)));
    c.f[1] = fp::sub(c.f[0], c.f[1]);
    c.f[0] = ld32((c.r[2].w[0] + 12u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0022A1F0; } }
    set32(c.r[4], 0u + 43u);
    c.budget -= 1;
L_0022A1DC:
    set32(c.r[5], 0u + 1u);
    set32(c.r[6], c.r[29].w[0] + 96u);
    set32(c.r[7], 0u - 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022A1F0u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0066(c, 208u, depth + 1u); else { c.pc = 0x0029A200u; return; } if (c.pc != 0x0022A1F0u) [[unlikely]] return; }
L_0022A1F0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[6], c.r[16].w[0] + 208u);
    c.f[0] = ld32((c.r[1].w[0] + 25712u));
    set32(c.r[4], 0u + 43u);
    set32(c.r[5], c.r[29].w[0] + 96u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022A20Cu); st32((c.r[29].w[0] + 100u), c.f[0]);  if (depth < kMaxDepth) unit_0066(c, 215u, depth + 1u); else { c.pc = 0x0029A3D0u; return; } if (c.pc != 0x0022A20Cu) [[unlikely]] return; }
L_0022A20C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_0022A210:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_0022A220:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022A238u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_004A(c, 132u, depth + 1u); else { c.pc = 0x00229AC0u; return; } if (c.pc != 0x0022A238u) [[unlikely]] return; }
L_0022A238:
    set32(c.r[3], ld32((c.r[17].w[0] + 40u)));
    c.r[3].d[0] = ld16((c.r[3].w[0] + 472u));
    c.r[3].d[0] = c.r[3].d[0] & 64ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0022A290; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 48u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[0] = ld32((c.r[17].w[0] + 704u));
    c.f[1] = c.r[3].w[0];
    c.f[2] = ld32((c.r[4].w[0] + 4u));
    c.f[0] = fp::add(c.f[0], c.f[2]);
    st32((c.r[17].w[0] + 704u), c.f[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 48u)));
    c.f[0] = ld32((c.r[17].w[0] + 704u));
    c.f[2] = ld32((c.r[3].w[0]));
    fpu_div(c, 1u, c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 16;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0022A290; } }
    st32((c.r[17].w[0] + 704u), c.f[1]);
    c.budget -= 1;
L_0022A290:
    set32(c.r[3], ld32((c.r[17].w[0] + 752u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[17].w[0] + 752u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 752u)));
    c.r[1].d[0] = c.r[3].sd[0] < 301ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0022A2C0; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 40u)));
    c.r[3].d[0] = ld16((c.r[3].w[0] + 472u));
    c.r[3].d[0] = c.r[3].d[0] & 32ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0022A38C; } }
L_0022A2C0:
    set32(c.r[4], ld32((c.r[17].w[0] + 40u)));
    set32(c.r[6], 0u + 12089u);
    set32(c.r[5], ld32((c.r[4].w[0] + 60u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022A2D4u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003A(c, 280u, depth + 1u); else { c.pc = 0x001EBEE0u; return; } if (c.pc != 0x0022A2D4u) [[unlikely]] return; }
L_0022A2D4:
    set32(c.r[3], ld32((c.r[17].w[0] + 40u)));
    set32(c.r[4], 0u - 5u);
    c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(4ll);
    set32(c.r[6], 0u + 1u);
    c.r[2].d[0] = ld8((c.r[3].w[0] + 392u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[4].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[5].d[0];
    st8((c.r[3].w[0] + 392u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[17].w[0] + 40u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 60u)));
    c.r[2].d[0] = ld8((c.r[3].w[0] + 392u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[4].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[5].d[0];
    st8((c.r[3].w[0] + 392u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[17].w[0] + 40u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 60u)));
    st8((c.r[2].w[0] + 587u), static_cast<std::uint8_t>(c.r[6].w[0]));
    set32(c.r[2], ld32((c.r[17].w[0] + 40u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 60u)));
    c.budget -= 21;
    { const bool t = c.r[4].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x4D6F0000u);  if (t) { goto L_0022A32C; } }
    set32(c.r[4], c.r[4].w[0] + 436u);
    c.budget -= 1;
L_0022A32C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022A334u); c.r[5].d[0] = c.r[2].d[0] | 18543ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x0022A334u) [[unlikely]] return; }
L_0022A334:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0022A340; } }
    set32(c.r[16], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 1;
L_0022A340:
    set32(c.r[3], ld32((c.r[17].w[0] + 40u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4D6F0000u);
    c.r[5].d[0] = c.r[2].d[0] | 17524ull;
    set32(c.r[2], ld32((c.r[3].w[0] + 60u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022A358u); set32(c.r[4], c.r[2].w[0] + 436u);  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x0022A358u) [[unlikely]] return; }
L_0022A358:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_0022A364; } }
    set32(c.r[4], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 1;
L_0022A364:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022A36Cu);  if (depth < kMaxDepth) unit_002D(c, 174u, depth + 1u); else { c.pc = 0x001B6480u; return; } if (c.pc != 0x0022A36Cu) [[unlikely]] return; }
L_0022A36C:
    set32(c.r[3], ld32((c.r[16].w[0] + 32u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 292u)));
    set32(c.r[2], c.r[2].w[0] - 2u);
    st16((c.r[3].w[0] + 294u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[25], ld32((c.r[16].w[0] + 24u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0022A38Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0022A38Cu) [[unlikely]] return; }
L_0022A38C:
    set32(c.r[5], ld32((c.r[17].w[0] + 40u)));
    set32(c.r[4], ld32((c.r[5].w[0] + 60u)));
    ld128((c.r[5].w[0] + 208u) & ~15u, c.r[3]);
    st128((c.r[4].w[0] + 208u) & ~15u, c.r[3]);
    ld128((c.r[5].w[0] + 224u) & ~15u, c.r[3]);
    st128((c.r[4].w[0] + 224u) & ~15u, c.r[3]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0022A3C0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022A3D4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_004A(c, 132u, depth + 1u); else { c.pc = 0x00229AC0u; return; } if (c.pc != 0x0022A3D4u) [[unlikely]] return; }
L_0022A3D4:
    set32(c.r[4], ld32((c.r[16].w[0] + 40u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 176u)));
    c.r[1].d[0] = c.r[3].sd[0] < 45ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0022A404; } }
    set32(c.r[5], ld32((c.r[4].w[0] + 60u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0022A404; } }
    ld128((c.r[4].w[0] + 208u) & ~15u, c.r[3]);
    st128((c.r[5].w[0] + 208u) & ~15u, c.r[3]);
    ld128((c.r[4].w[0] + 224u) & ~15u, c.r[3]);
    st128((c.r[5].w[0] + 224u) & ~15u, c.r[3]);
    c.budget -= 4;
L_0022A404:
    set32(c.r[5], ld32((c.r[16].w[0] + 40u)));
    set32(c.r[3], 0u + 45u);
    set32(c.r[4], ld32((c.r[5].w[0] + 176u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0022A4CC; } }
    set32(c.r[4], ld32((c.r[5].w[0] + 60u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0022A4CC; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x47520000u);  if (t) { goto L_0022A430; } }
    set32(c.r[4], c.r[4].w[0] + 436u);
    c.budget -= 1;
L_0022A430:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022A438u); c.r[5].d[0] = c.r[2].d[0] | 16726ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x0022A438u) [[unlikely]] return; }
L_0022A438:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[8].d[0] = 0ull + 0ull;  if (t) { goto L_0022A444; } }
    set32(c.r[8], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 1;
L_0022A444:
    c.f[1] = ld32((c.r[16].w[0] + 736u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[2] = c.r[3].w[0];
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[4].w[0];
    c.r[7].sd[0] = static_cast<std::int32_t>(0xBF000000u);
    c.r[3].d[0] = 0ull & 1ull;
    set32(c.r[5], 0u - 5u);
    set32(c.r[6], c.r[3].w[0] << 2);
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(8ll);
    set32(c.r[3], 0u - 9u);
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    st32((c.r[8].w[0] + 64u), c.f[1]);
    c.f[1] = ld32((c.r[16].w[0] + 744u));
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    st32((c.r[8].w[0] + 72u), c.f[1]);
    st32((c.r[8].w[0] + 68u), c.r[7].w[0]);
    set32(c.r[7], ld32((c.r[16].w[0] + 40u)));
    set32(c.r[7], ld32((c.r[7].w[0] + 60u)));
    c.f[1] = ld32((c.r[7].w[0] + 228u));
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[7].w[0] + 228u), c.f[0]);
    set32(c.r[7], ld32((c.r[16].w[0] + 40u)));
    set32(c.r[8], ld32((c.r[7].w[0] + 60u)));
    c.r[7].d[0] = ld8((c.r[8].w[0] + 392u));
    c.r[5].d[0] = c.r[7].d[0] & c.r[5].d[0];
    c.r[5].d[0] = c.r[5].d[0] | c.r[6].d[0];
    st8((c.r[8].w[0] + 392u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[5], ld32((c.r[16].w[0] + 40u)));
    set32(c.r[6], ld32((c.r[5].w[0] + 60u)));
    c.r[5].d[0] = ld8((c.r[6].w[0] + 395u));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st8((c.r[6].w[0] + 395u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 34;
L_0022A4CC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0022A4E0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00460000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 44u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[2].w[0] + 52u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 152u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 12;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0022A510u); set32(c.r[5], c.r[5].w[0] + 25672u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0022A510u) [[unlikely]] return; }
L_0022A510:
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_0022A564; } }
L_0022A51C:
    set32(c.r[17], c.r[16].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 84u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0022A560; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 44u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 52u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 152u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0022A544u); set32(c.r[5], c.r[29].w[0] + 48u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0022A544u) [[unlikely]] return; }
L_0022A544:
    set32(c.r[2], ld32((c.r[16].w[0] + 44u)));
    set32(c.r[4], c.r[17].w[0] + 64u);
    set32(c.r[5], c.r[29].w[0] + 96u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022A558u); set32(c.r[6], c.r[2].w[0] + 208u);  if (depth < kMaxDepth) unit_004A(c, 218u, depth + 1u); else { c.pc = 0x0022AB90u; return; } if (c.pc != 0x0022A558u) [[unlikely]] return; }
L_0022A558:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_0022A574; } }
L_0022A560:
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.budget -= 1;
L_0022A564:
    c.r[3].d[0] = c.r[4].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], c.r[4].w[0] << 6);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0022A51Cu | kUnwind; return; } goto L_0022A51C; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_0022A574:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_0022A590:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[29].w[0]), c.f[20]);  if (t) { goto L_0022A5E0; } }
    set32(c.r[7], ld32((c.r[4].w[0] + 644u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[6], c.r[6].w[0] + 28352u);
    set32(c.r[3], ld32((c.r[4].w[0] + 164u)));
    set32(c.r[7], c.r[7].w[0] << 2);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != c.r[5].d[0]; set32(c.r[16], ld32((c.r[6].w[0])));  if (t) { goto L_0022A5D0; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 164u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[5].d[0];  if (t) { goto L_0022A5E0; } }
L_0022A5D0:
    c.f[20] = ld32((c.r[16].w[0] + 228u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022A5DCu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003A(c, 284u, depth + 1u); else { c.pc = 0x001EBF70u; return; } if (c.pc != 0x0022A5DCu) [[unlikely]] return; }
L_0022A5DC:
    st32((c.r[16].w[0] + 228u), c.f[20]);
    c.budget -= 1;
L_0022A5E0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0022A600:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022A618u); set32(c.r[4], 0u + 768u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0022A618u) [[unlikely]] return; }
L_0022A618:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0022A628; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022A628u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_004A(c, 80u, depth + 1u); else { c.pc = 0x00229160u; return; } if (c.pc != 0x0022A628u) [[unlikely]] return; }
L_0022A628:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0022A640:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_0022A650; } }
    set32(c.r[4], c.r[4].w[0] + 436u);
    c.budget -= 1;
L_0022A650:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42490000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022A65Cu); c.r[5].d[0] = c.r[2].d[0] | 19269ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x0022A65Cu) [[unlikely]] return; }
L_0022A65C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_0022A668; } }
    set32(c.r[4], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 1;
L_0022A668:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0022A678; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022A678u);  if (depth < kMaxDepth) unit_004A(c, 97u, depth + 1u); else { c.pc = 0x00229400u; return; } if (c.pc != 0x0022A678u) [[unlikely]] return; }
L_0022A678:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0022A690:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4D430000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[5].d[0] = c.r[2].d[0] | 21580ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022A6A8u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x0022A6A8u) [[unlikely]] return; }
L_0022A6A8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0022A6B8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 16u)));  if (t) { goto L_0022A6BC; } }
L_0022A6B8:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0022A6BC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0022A6FC; } }
    set32(c.r[3], ld32((c.r[2].w[0] + 56u)));
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[2].w[0] + 44u)));
    set32(c.r[16], ld32((c.r[3].w[0])));
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022A6E4u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0023(c, 70u, depth + 1u); else { c.pc = 0x0018CBF0u; return; } if (c.pc != 0x0022A6E4u) [[unlikely]] return; }
L_0022A6E4:
    set32(c.r[2], ld32((c.r[29].w[0] + 40u)));
    c.r[1].d[0] = c.r[2].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0022A700; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0022A700; } }
L_0022A6FC:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0022A700:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0022A710:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42490000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022A738u); c.r[5].d[0] = c.r[2].d[0] | 19284ull;  if (depth < kMaxDepth) unit_000F(c, 30u, depth + 1u); else { c.pc = 0x0013C370u; return; } if (c.pc != 0x0022A738u) [[unlikely]] return; }
L_0022A738:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022A740u); set32(c.r[4], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_000F(c, 249u, depth + 1u); else { c.pc = 0x0013E370u; return; } if (c.pc != 0x0022A740u) [[unlikely]] return; }
L_0022A740:
    set32(c.r[4], c.r[17].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022A74Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000F(c, 264u, depth + 1u); else { c.pc = 0x0013E560u; return; } if (c.pc != 0x0022A74Cu) [[unlikely]] return; }
L_0022A74C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] - 4960u);
    set32(c.r[3], c.r[3].w[0] - 4944u);
    st32((c.r[17].w[0] + 24u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    st32((c.r[17].w[0] + 32u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] - 4928u);
    set32(c.r[3], c.r[17].w[0] + 64u);
    st32((c.r[17].w[0] + 48u), c.r[2].w[0]);
    st128((c.r[3].w[0]) & ~15u, c.vu0.vf[0]);
    set32(c.r[2], c.r[17].w[0] + 80u);
    st128((c.r[2].w[0]) & ~15u, c.vu0.vf[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00460000u);
    st32((c.r[17].w[0] + 60u), c.r[16].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 52u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 152u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 20;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0022A79Cu); set32(c.r[5], c.r[5].w[0] + 25680u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0022A79Cu) [[unlikely]] return; }
L_0022A79C:
    st32((c.r[17].w[0] + 112u), c.r[2].w[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[4], ld32((c.r[16].w[0] + 52u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 152u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0022A7B8u); set32(c.r[5], c.r[5].w[0] + 25688u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0022A7B8u) [[unlikely]] return; }
L_0022A7B8:
    st32((c.r[17].w[0] + 116u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 124u), 0u);
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[17].w[0] + 128u), 0u);
    st32((c.r[17].w[0] + 132u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0022A7E0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022A7F8u); set32(c.r[4], 0u + 144u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0022A7F8u) [[unlikely]] return; }
L_0022A7F8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0022A808; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022A808u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_004A(c, 193u, depth + 1u); else { c.pc = 0x0022A710u; return; } if (c.pc != 0x0022A808u) [[unlikely]] return; }
L_0022A808:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0022A820:
    set32(c.r[29], c.r[29].w[0] - 128u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.f[1] = ld32((c.r[4].w[0] + 124u));
    c.f[0] = ld32((c.r[1].w[0] + 25768u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 10;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0022A85C; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = ld32((c.r[1].w[0] + 25760u));
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 124u), c.f[0]);  if (t) { goto L_0022A880; } }
L_0022A85C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = ld32((c.r[1].w[0] + 25752u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0022A880; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = ld32((c.r[1].w[0] + 25760u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[16].w[0] + 124u), c.f[0]);
    c.budget -= 4;
L_0022A880:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[1] = ld32((c.r[16].w[0] + 128u));
    c.f[0] = ld32((c.r[1].w[0] + 25768u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);  if (t) { goto L_0022A8AC; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = ld32((c.r[1].w[0] + 25760u));
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 128u), c.f[0]);  if (t) { goto L_0022A8CC; } }
L_0022A8AC:
    c.f[0] = ld32((c.r[1].w[0] + 25752u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0022A8CC; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = ld32((c.r[1].w[0] + 25760u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[16].w[0] + 128u), c.f[0]);
    c.budget -= 4;
L_0022A8CC:
    set32(c.r[2], ld32((c.r[16].w[0] + 60u)));
    set32(c.r[4], c.r[29].w[0] + 64u);
    set32(c.r[17], c.r[2].w[0] + 208u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022A8E0u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0011(c, 48u, depth + 1u); else { c.pc = 0x00144FA0u; return; } if (c.pc != 0x0022A8E0u) [[unlikely]] return; }
L_0022A8E0:
    ld128((c.r[17].w[0] + 16u) & ~15u, c.r[2]);
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022A8F4u); st128((c.r[29].w[0] + 112u) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_0000(c, 352u, depth + 1u); else { c.pc = 0x001039B8u; return; } if (c.pc != 0x0022A8F4u) [[unlikely]] return; }
L_0022A8F4:
    ld128((c.r[16].w[0] + 80u) & ~15u, c.r[2]);
    set32(c.r[4], c.r[29].w[0] + 48u);
    set32(c.r[3], c.r[29].w[0] + 64u);
    st128((c.r[4].w[0]) & ~15u, c.r[2]);
    ld128((c.r[3].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[3].w[0] + 16u) & ~15u, c.vu0.vf[5]);
    ld128((c.r[3].w[0] + 32u) & ~15u, c.vu0.vf[6]);
    ld128((c.r[3].w[0] + 48u) & ~15u, c.vu0.vf[7]);
    ld128((c.r[4].w[0]) & ~15u, c.vu0.vf[8]);
    vu::mulabc(c.vu0, 15u, 4u, c.vu0.vf[8].w[0]);
    vu::maddabc(c.vu0, 15u, 5u, c.vu0.vf[8].w[1]);
    vu::maddabc(c.vu0, 15u, 6u, c.vu0.vf[8].w[2]);
    vu::maddbc(c.vu0, 15u, 12u, 7u, c.vu0.vf[8].w[3]);
    st128((c.r[4].w[0]) & ~15u, c.vu0.vf[12]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[2] = ld32((c.r[1].w[0] + 25704u));
    c.f[3] = ld32((c.r[29].w[0] + 56u));
    c.f[0] = ld32((c.r[16].w[0] + 124u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    fpu_div(c, 2u, c.f[3], c.f[2]);
    c.f[1] = ld32((c.r[1].w[0] + 25768u));
    c.f[2] = fp::mul(c.f[1], c.f[2]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = fp::add(c.f[0], c.f[2]);
    st32((c.r[16].w[0] + 124u), c.f[0]);
    c.f[1] = ld32((c.r[16].w[0] + 124u));
    c.f[0] = ld32((c.r[1].w[0] + 25768u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 30;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);  if (t) { goto L_0022A980; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = ld32((c.r[1].w[0] + 25760u));
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 124u), c.f[0]);  if (t) { goto L_0022A9A0; } }
L_0022A980:
    c.f[0] = ld32((c.r[1].w[0] + 25752u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0022A9A0; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = ld32((c.r[1].w[0] + 25760u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[16].w[0] + 124u), c.f[0]);
    c.budget -= 4;
L_0022A9A0:
    c.f[0] = ld32((c.r[16].w[0] + 128u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[1] = fp::add(c.f[0], c.f[2]);
    st32((c.r[16].w[0] + 128u), c.f[1]);
    c.f[0] = ld32((c.r[1].w[0] + 25768u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);  if (t) { goto L_0022A9D4; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = ld32((c.r[1].w[0] + 25760u));
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 128u), c.f[0]);  if (t) { goto L_0022A9F4; } }
L_0022A9D4:
    c.f[0] = ld32((c.r[1].w[0] + 25752u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0022A9F4; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = ld32((c.r[1].w[0] + 25760u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[16].w[0] + 128u), c.f[0]);
    c.budget -= 4;
L_0022A9F4:
    c.f[12] = ld32((c.r[16].w[0] + 124u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022AA00u); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0011(c, 30u, depth + 1u); else { c.pc = 0x001446D0u; return; } if (c.pc != 0x0022AA00u) [[unlikely]] return; }
L_0022AA00:
    set32(c.r[3], ld32((c.r[16].w[0] + 60u)));
    set32(c.r[5], c.r[29].w[0] + 64u);
    set32(c.r[2], ld32((c.r[16].w[0] + 112u)));
    set32(c.r[6], 0u + 48u);
    set32(c.r[4], ld32((c.r[3].w[0] + 52u)));
    set32(c.r[3], c.r[2].w[0] << 6);
    set32(c.r[2], ld32((c.r[4].w[0] + 204u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022AA24u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0009(c, 40u, depth + 1u); else { c.pc = 0x00124D20u; return; } if (c.pc != 0x0022AA24u) [[unlikely]] return; }
L_0022AA24:
    c.f[12] = ld32((c.r[16].w[0] + 128u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022AA30u); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0011(c, 30u, depth + 1u); else { c.pc = 0x001446D0u; return; } if (c.pc != 0x0022AA30u) [[unlikely]] return; }
L_0022AA30:
    set32(c.r[3], ld32((c.r[16].w[0] + 60u)));
    set32(c.r[5], c.r[29].w[0] + 64u);
    set32(c.r[2], ld32((c.r[16].w[0] + 116u)));
    set32(c.r[6], 0u + 48u);
    set32(c.r[4], ld32((c.r[3].w[0] + 52u)));
    set32(c.r[3], c.r[2].w[0] << 6);
    set32(c.r[2], ld32((c.r[4].w[0] + 204u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022AA54u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0009(c, 40u, depth + 1u); else { c.pc = 0x00124D20u; return; } if (c.pc != 0x0022AA54u) [[unlikely]] return; }
L_0022AA54:
    set32(c.r[3], ld32((c.r[16].w[0] + 60u)));
    ld128((c.r[3].w[0] + 208u) & ~15u, c.r[2]);
    st128((c.r[16].w[0] + 64u) & ~15u, c.r[2]);
    ld128((c.r[3].w[0] + 224u) & ~15u, c.r[2]);
    st128((c.r[16].w[0] + 80u) & ~15u, c.r[2]);
    set32(c.r[2], ld32((c.r[16].w[0] + 60u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022AA74u); set32(c.r[4], ld32((c.r[2].w[0] + 52u)));  if (depth < kMaxDepth) unit_0014(c, 69u, depth + 1u); else { c.pc = 0x00151160u; return; } if (c.pc != 0x0022AA74u) [[unlikely]] return; }
L_0022AA74:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x53330000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022AA84u); c.r[5].d[0] = c.r[2].d[0] | 19799ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x0022AA84u) [[unlikely]] return; }
L_0022AA84:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_0022AA90; } }
    set32(c.r[17], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 1;
L_0022AA90:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_0022AAD0; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 60u)));
    set32(c.r[4], ld32((c.r[17].w[0] + 48u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 52u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 236u)));
    set32(c.r[5], ld32((c.r[3].w[0] + 216u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022AAB4u); set32(c.r[6], c.r[2].w[0] << 6);  if (depth < kMaxDepth) unit_0009(c, 40u, depth + 1u); else { c.pc = 0x00124D20u; return; } if (c.pc != 0x0022AAB4u) [[unlikely]] return; }
L_0022AAB4:
    set32(c.r[2], ld32((c.r[16].w[0] + 60u)));
    set32(c.r[4], ld32((c.r[17].w[0] + 52u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 52u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 236u)));
    set32(c.r[5], ld32((c.r[3].w[0] + 208u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022AAD0u); set32(c.r[6], c.r[2].w[0] << 6);  if (depth < kMaxDepth) unit_0009(c, 40u, depth + 1u); else { c.pc = 0x00124D20u; return; } if (c.pc != 0x0022AAD0u) [[unlikely]] return; }
L_0022AAD0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_0022AAF0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0022AB00:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[5], 0u + 5u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022AB18u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 256u, depth + 1u); else { c.pc = 0x0013E440u; return; } if (c.pc != 0x0022AB18u) [[unlikely]] return; }
L_0022AB18:
    set32(c.r[4], c.r[16].w[0] + 8u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022AB24u); set32(c.r[5], 0u + 7u);  if (depth < kMaxDepth) unit_000F(c, 264u, depth + 1u); else { c.pc = 0x0013E560u; return; } if (c.pc != 0x0022AB24u) [[unlikely]] return; }
L_0022AB24:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] - 5008u);
    set32(c.r[2], c.r[2].w[0] - 4992u);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    set32(c.r[3], c.r[16].w[0] + 32u);
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    st128((c.r[3].w[0]) & ~15u, c.vu0.vf[0]);
    set32(c.r[2], c.r[16].w[0] + 48u);
    st128((c.r[2].w[0]) & ~15u, c.vu0.vf[0]);
    st32((c.r[16].w[0] + 20u), 0u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 16;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0022AB70:
    set32(c.r[3], ld32((c.r[4].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0022AB84; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    st32((c.r[4].w[0] + 20u), c.r[3].w[0]);
    c.budget -= 2;
L_0022AB84:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0022AB90:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[3], 0u + 7u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], c.r[2].w[0] - 23616u);
    ld128((c.r[5].w[0]) & ~15u, c.r[5]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[4].w[0] + 32u) & ~15u, c.r[5]);
    ld128((c.r[6].w[0]) & ~15u, c.r[5]);
    st128((c.r[4].w[0] + 48u) & ~15u, c.r[5]);
    st32((c.r[4].w[0] + 20u), c.r[3].w[0]);
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    set32(c.r[4], c.r[29].w[0] + 32u);
    st128((c.r[4].w[0]) & ~15u, c.r[2]);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022ABD4u); c.f[12] = ld32((c.r[6].w[0] + 4u));  if (depth < kMaxDepth) unit_0011(c, 21u, depth + 1u); else { c.pc = 0x001444F0u; return; } if (c.pc != 0x0022ABD4u) [[unlikely]] return; }
L_0022ABD4:
    set32(c.r[4], c.r[16].w[0] + 32u);
    set32(c.r[3], c.r[29].w[0] + 32u);
    ld128((c.r[4].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[3].w[0]) & ~15u, c.vu0.vf[5]);
    vu::add(c.vu0, 14u, 4u, 4u, 5u);
    st128((c.r[4].w[0]) & ~15u, c.vu0.vf[4]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0022AC00:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 20u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull; c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0022AC34; } }
    c.f[1] = c.r[3].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[4], c.r[5].w[0] + 32u);
    c.f[0] = ld32((c.r[1].w[0] + 25696u));
    set32(c.r[5], c.r[5].w[0] + 48u);
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022AC34u); c.f[12] = fp::mul(c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_004A(c, 244u, depth + 1u); else { c.pc = 0x0022AFE0u; return; } if (c.pc != 0x0022AC34u) [[unlikely]] return; }
L_0022AC34:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0022AC40:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022AC64u); c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 249u, depth + 1u); else { c.pc = 0x0013E370u; return; } if (c.pc != 0x0022AC64u) [[unlikely]] return; }
L_0022AC64:
    set32(c.r[4], c.r[17].w[0] + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022AC70u); set32(c.r[5], 0u + 7u);  if (depth < kMaxDepth) unit_000F(c, 264u, depth + 1u); else { c.pc = 0x0013E560u; return; } if (c.pc != 0x0022AC70u) [[unlikely]] return; }
L_0022AC70:
    set32(c.r[4], c.r[17].w[0] + 28u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022AC7Cu); set32(c.r[5], 0u + 5u);  if (depth < kMaxDepth) unit_000F(c, 256u, depth + 1u); else { c.pc = 0x0013E440u; return; } if (c.pc != 0x0022AC7Cu) [[unlikely]] return; }
L_0022AC7C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] - 5072u);
    set32(c.r[3], c.r[3].w[0] - 5056u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.r[1].d[0] = c.r[18].sd[0] < 1000ll ? 1ull : 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] - 5040u);
    st32((c.r[17].w[0] + 28u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 36u), 0u);
    st32((c.r[17].w[0] + 40u), 0u);
    st32((c.r[17].w[0] + 36u), 0u);
    c.budget -= 15;
    { const bool t = c.r[1].d[0] == 0ull; st32((c.r[17].w[0] + 40u), 0u);  if (t) { goto L_0022ACC0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0022AD48; } }
L_0022ACC0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], ld32((c.r[1].w[0] + 26176u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[2], c.r[18].w[0] - 1000u);  if (t) { goto L_0022ACD8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0022AD48; } }
L_0022ACD8:
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 2072u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[5], 0u + 1u);  if (t) { goto L_0022ACF4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0022AD48; } }
L_0022ACF4:
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022AD00u); c.r[6].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_005B(c, 303u, depth + 1u); else { c.pc = 0x0026E9C0u; return; } if (c.pc != 0x0022AD00u) [[unlikely]] return; }
L_0022AD00:
    st32((c.r[17].w[0] + 36u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], ld32((c.r[1].w[0] + 26176u)));
    set32(c.r[2], c.r[16].w[0] - 1000u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 2072u)));
    c.budget -= 9;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[5], 0u + 1u);  if (t) { goto L_0022AD2C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0022AD48; } }
L_0022AD2C:
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022AD38u); c.r[6].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_005B(c, 303u, depth + 1u); else { c.pc = 0x0026E9C0u; return; } if (c.pc != 0x0022AD38u) [[unlikely]] return; }
L_0022AD38:
    st32((c.r[17].w[0] + 40u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 48u), 0u);
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    st8((c.r[17].w[0] + 44u), static_cast<std::uint8_t>(0u));
    c.budget -= 4;
L_0022AD48:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0022AD60:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].d[0] = c.r[17].sd[0] < 1000ll ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0022ADBC; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[3], ld32((c.r[1].w[0] - 27968u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[4], 0u + 56u);  if (t) { goto L_0022ADBC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022AD98u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0022AD98u) [[unlikely]] return; }
L_0022AD98:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0022ADB4; } }
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022ADB0u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_004A(c, 222u, depth + 1u); else { c.pc = 0x0022AC40u; return; } if (c.pc != 0x0022ADB0u) [[unlikely]] return; }
L_0022ADB0:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0022ADB4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st32((c.r[1].w[0] - 27968u), c.r[4].w[0]);
    c.budget -= 2;
L_0022ADBC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0022ADD0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0022AEB0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] - 5072u);
    set32(c.r[3], c.r[3].w[0] - 5056u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] - 5040u);
    st32((c.r[17].w[0] + 28u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 36u)));
    c.budget -= 12;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0022AE34; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0022AE34; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0022AE34u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0022AE34u) [[unlikely]] return; }
L_0022AE34:
    st32((c.r[17].w[0] + 36u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 40u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0022AE5C; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0022AE5C; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0022AE5Cu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0022AE5Cu) [[unlikely]] return; }
L_0022AE5C:
    st32((c.r[17].w[0] + 40u), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], ld32((c.r[1].w[0] - 27968u)));
    c.budget -= 5;
    { const bool t = c.r[17].d[0] != c.r[2].d[0]; set32(c.r[4], c.r[17].w[0] + 28u);  if (t) { goto L_0022AE78; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st32((c.r[1].w[0] - 27968u), 0u);
    c.budget -= 2;
L_0022AE78:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022AE80u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E490u; return; } if (c.pc != 0x0022AE80u) [[unlikely]] return; }
L_0022AE80:
    set32(c.r[4], c.r[17].w[0] + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022AE8Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000F(c, 266u, depth + 1u); else { c.pc = 0x0013E5B0u; return; } if (c.pc != 0x0022AE8Cu) [[unlikely]] return; }
L_0022AE8C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022AE98u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000F(c, 252u, depth + 1u); else { c.pc = 0x0013E3C0u; return; } if (c.pc != 0x0022AE98u) [[unlikely]] return; }
L_0022AE98:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0022AEB4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022AEB0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x0022AEB0u) [[unlikely]] return; }
L_0022AEB0:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0022AEB4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0022AED0:
    c.r[3].d[0] = ld8((c.r[4].w[0] + 44u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0022AEE8; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 48u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[4].w[0] + 48u), c.r[3].w[0]);
    c.budget -= 3;
L_0022AEE8:
    set32(c.r[3], ld32((c.r[4].w[0] + 48u)));
    c.r[3].d[0] = c.r[3].sd[0] < 18ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0022AEFC; } }
    st8((c.r[4].w[0] + 44u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_0022AEFC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0022AF10:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 36u)));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == 0ull; c.r[19].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0022AFB8; } }
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_0022AFAC; } }
L_0022AF40:
    set32(c.r[4], c.r[17].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + 28352u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[16], ld32((c.r[3].w[0])));
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0022AFA8; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 48u)));
    set32(c.r[3], 0u + 35u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0022AFA8; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 36u)));
    set32(c.r[5], c.r[16].w[0] + 224u);
    set32(c.r[4], ld32((c.r[2].w[0] + 52u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022AF7Cu); set32(c.r[6], c.r[16].w[0] + 208u);  if (depth < kMaxDepth) unit_0049(c, 142u, depth + 1u); else { c.pc = 0x00225E00u; return; } if (c.pc != 0x0022AF7Cu) [[unlikely]] return; }
L_0022AF7C:
    set32(c.r[2], ld32((c.r[19].w[0] + 36u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 52u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 152u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 44u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0022AF94u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0022AF94u) [[unlikely]] return; }
L_0022AF94:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022AF9Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_004A(c, 248u, depth + 1u); else { c.pc = 0x0022B120u; return; } if (c.pc != 0x0022AF9Cu) [[unlikely]] return; }
L_0022AF9C:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 3;
    { const bool t = c.r[18].sd[0] > 0;  if (t) { goto L_0022AFB8; } }
L_0022AFA8:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_0022AFAC:
    c.r[3].d[0] = c.r[17].sd[0] < 72ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x00520000u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0022AF40u | kUnwind; return; } goto L_0022AF40; } }
L_0022AFB8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0022AFE0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[16], ld32((c.r[1].w[0] - 27968u)));
    c.budget -= 9;
    { const bool t = c.r[16].d[0] == 0ull; c.f[20] = c.f[12];  if (t) { goto L_0022B108; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 40u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0022B108; } }
    set32(c.r[2], c.r[29].w[0] + 48u);
    st128((c.r[2].w[0]) & ~15u, c.vu0.vf[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 40u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 52u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022B028u); set32(c.r[6], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0049(c, 142u, depth + 1u); else { c.pc = 0x00225E00u; return; } if (c.pc != 0x0022B028u) [[unlikely]] return; }
L_0022B028:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[11], ld32((c.r[1].w[0] + 20144u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[11].w[0] + c.r[1].w[0]);
    set32(c.r[2], ld32((c.r[1].w[0] + 1364u)));
    c.r[1].d[0] = c.r[2].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);  if (t) { goto L_0022B0E0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    set32(c.r[1], c.r[11].w[0] + c.r[1].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x50000000u);
    set32(c.r[10], ld32((c.r[1].w[0] + 1380u)));
    c.r[9].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[6].d[0] = c.r[4].d[0] | 2ull;
    c.r[8].d[0] = c.r[2].d[0] | 3ull;
    c.r[3].d[0] = c.r[2].d[0] << 32;
    c.r[7].sd[0] = static_cast<std::int32_t>(0x11000000u);
    c.r[2].d[0] = 0ull | 32769ull;
    set32(c.r[4], 0u + 14u);
    c.r[5].d[0] = c.r[2].d[0] | c.r[3].d[0];
    set32(c.r[3], 0u + 68u);
    set32(c.r[2], 0u + 66u);
    c.r[9].d[0] = c.r[10].d[0] | c.r[9].d[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    st64((c.r[9].w[0]), c.r[8].d[0]);
    set32(c.r[1], c.r[11].w[0] + c.r[1].w[0]);
    st64((c.r[9].w[0] + 8u), 0ull);
    st64((c.r[9].w[0] + 16u), 0ull);
    st32((c.r[9].w[0] + 24u), c.r[7].w[0]);
    st32((c.r[9].w[0] + 28u), c.r[6].w[0]);
    st64((c.r[9].w[0] + 32u), c.r[5].d[0]);
    st64((c.r[9].w[0] + 40u), c.r[4].d[0]);
    st64((c.r[9].w[0] + 48u), c.r[3].d[0]);
    st64((c.r[9].w[0] + 56u), c.r[2].d[0]);
    set32(c.r[2], ld32((c.r[1].w[0] + 1380u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[2], c.r[2].w[0] + 64u);
    set32(c.r[1], c.r[11].w[0] + c.r[1].w[0]);
    st32((c.r[1].w[0] + 1380u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[11].w[0] + c.r[1].w[0]);
    set32(c.r[2], ld32((c.r[1].w[0] + 1364u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[2], c.r[2].w[0] - 4u);
    set32(c.r[1], c.r[11].w[0] + c.r[1].w[0]);
    st32((c.r[1].w[0] + 1364u), c.r[2].w[0]);
    c.budget -= 38;
L_0022B0E0:
    set32(c.r[2], ld32((c.r[16].w[0] + 40u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 52u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022B0F0u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_0015(c, 85u, depth + 1u); else { c.pc = 0x00156E00u; return; } if (c.pc != 0x0022B0F0u) [[unlikely]] return; }
L_0022B0F0:
    set32(c.r[2], ld32((c.r[16].w[0] + 40u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 52u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 152u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 44u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0022B108u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0022B108u) [[unlikely]] return; }
L_0022B108:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0022B120:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0022B130:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x0022AB70u | kUnwind; return; } goto L_0022AB70; }
L_0022B140:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0022B1BC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] - 4960u);
    set32(c.r[3], c.r[3].w[0] - 4944u);
    st32((c.r[17].w[0] + 24u), c.r[2].w[0]);
    set32(c.r[4], c.r[17].w[0] + 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    st32((c.r[17].w[0] + 32u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] - 4928u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022B18Cu); st32((c.r[17].w[0] + 48u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000F(c, 266u, depth + 1u); else { c.pc = 0x0013E5B0u; return; } if (c.pc != 0x0022B18Cu) [[unlikely]] return; }
L_0022B18C:
    set32(c.r[4], c.r[17].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022B198u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000F(c, 252u, depth + 1u); else { c.pc = 0x0013E3C0u; return; } if (c.pc != 0x0022B198u) [[unlikely]] return; }
L_0022B198:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022B1A4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000F(c, 31u, depth + 1u); else { c.pc = 0x0013C3B0u; return; } if (c.pc != 0x0022B1A4u) [[unlikely]] return; }
L_0022B1A4:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0022B1C0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022B1BCu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x0022B1BCu) [[unlikely]] return; }
L_0022B1BC:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0022B1C0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0022B1E0:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x0022AAF0u | kUnwind; return; } goto L_0022AAF0; }
L_0022B1F0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0022B26C; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] - 4896u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00230000u);
    set32(c.r[2], c.r[2].w[0] - 4880u);
    st32((c.r[17].w[0] + 24u), c.r[3].w[0]);
    set32(c.r[4], c.r[17].w[0] + 64u);
    st32((c.r[17].w[0] + 28u), c.r[2].w[0]);
    set32(c.r[5], c.r[5].w[0] - 28160u);
    set32(c.r[6], 0u + 64u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022B23Cu); set32(c.r[7], 0u + 10u);  if (depth < kMaxDepth) unit_0000(c, 86u, depth + 1u); else { c.pc = 0x00100720u; return; } if (c.pc != 0x0022B23Cu) [[unlikely]] return; }
L_0022B23C:
    set32(c.r[4], c.r[17].w[0] + 28u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022B248u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000F(c, 266u, depth + 1u); else { c.pc = 0x0013E5B0u; return; } if (c.pc != 0x0022B248u) [[unlikely]] return; }
L_0022B248:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022B254u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000F(c, 31u, depth + 1u); else { c.pc = 0x0013C3B0u; return; } if (c.pc != 0x0022B254u) [[unlikely]] return; }
L_0022B254:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0022B270; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022B26Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x0022B26Cu) [[unlikely]] return; }
L_0022B26C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0022B270:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0022B290:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 28u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00229150u | kUnwind; return; } goto L_00229150; }
L_0022B2A0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 28u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0022B1F0u | kUnwind; return; } goto L_0022B1F0; }
L_0022B2B0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0022B140u | kUnwind; return; } goto L_0022B140; }
L_0022B2C0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 48u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0022B1E0u | kUnwind; return; } goto L_0022B1E0; }
L_0022B2D0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 48u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0022B140u | kUnwind; return; } goto L_0022B140; }
L_0022B2E0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 8u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0022AC00u | kUnwind; return; } goto L_0022AC00; }
L_0022B2F0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 8u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00229200u | kUnwind; return; } goto L_00229200; }
L_0022B300:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0022AF10u | kUnwind; return; } goto L_0022AF10; }
L_0022B310:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0022ADD0u | kUnwind; return; } goto L_0022ADD0; }
L_0022B320:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 28u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0022AED0u | kUnwind; return; } goto L_0022AED0; }
L_0022B330:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 28u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0022ADD0u | kUnwind; return; } goto L_0022ADD0; }
L_0022B340:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022B36Cu); c.f[20] = c.f[12];  if (depth < kMaxDepth) unit_000F(c, 249u, depth + 1u); else { c.pc = 0x0013E370u; return; } if (c.pc != 0x0022B36Cu) [[unlikely]] return; }
L_0022B36C:
    set32(c.r[4], c.r[18].w[0] + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022B378u); set32(c.r[5], 0u + 5u);  if (depth < kMaxDepth) unit_000F(c, 264u, depth + 1u); else { c.pc = 0x0013E560u; return; } if (c.pc != 0x0022B378u) [[unlikely]] return; }
L_0022B378:
    set32(c.r[4], c.r[18].w[0] + 28u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022B384u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000F(c, 256u, depth + 1u); else { c.pc = 0x0013E440u; return; } if (c.pc != 0x0022B384u) [[unlikely]] return; }
L_0022B384:
    set32(c.r[4], c.r[18].w[0] + 36u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022B390u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000F(c, 29u, depth + 1u); else { c.pc = 0x0013C330u; return; } if (c.pc != 0x0022B390u) [[unlikely]] return; }
L_0022B390:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] - 18416u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    st32((c.r[18].w[0] + 68u), c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] - 4752u);
    st32((c.r[18].w[0] + 64u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    st32((c.r[18].w[0]), c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] - 4736u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00480000u);
    st32((c.r[18].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] - 4720u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    st32((c.r[18].w[0] + 28u), c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] - 4704u);
    set32(c.r[3], c.r[3].w[0] - 4688u);
    st32((c.r[18].w[0] + 60u), c.r[4].w[0]);
    st32((c.r[18].w[0] + 68u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    st32((c.r[18].w[0] + 144u), 0u);
    ld128((c.r[17].w[0]) & ~15u, c.r[3]);
    st128((c.r[18].w[0] + 160u) & ~15u, c.r[3]);
    st32((c.r[18].w[0] + 176u), c.f[20]);
    st32((c.r[18].w[0] + 148u), c.r[16].w[0]);
    st32((c.r[18].w[0] + 140u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 33;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0022B420:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 144u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[4].w[0] + 144u), c.r[3].w[0]);
    set32(c.r[6], ld32((c.r[4].w[0] + 148u)));
    set32(c.r[5], ld32((c.r[4].w[0] + 144u)));
    set32(c.r[3], c.r[6].w[0] + 1u);
    c.budget -= 10;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_0022B468; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_0022B468; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0022B468; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0022B468u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0022B468u) [[unlikely]] return; }
L_0022B468:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0022B480:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0022B534; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] - 4752u);
    set32(c.r[2], c.r[2].w[0] - 4736u);
    st32((c.r[17].w[0]), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    st32((c.r[17].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] - 4720u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    st32((c.r[17].w[0] + 28u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] - 4704u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    st32((c.r[17].w[0] + 60u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] - 4688u);
    set32(c.r[2], c.r[17].w[0] + 64u);
    c.budget -= 17;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[17].w[0] + 68u), c.r[3].w[0]);  if (t) { goto L_0022B4EC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] - 18416u);
    st32((c.r[17].w[0] + 68u), c.r[2].w[0]);
    c.budget -= 3;
L_0022B4EC:
    set32(c.r[4], c.r[17].w[0] + 36u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022B4F8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000F(c, 31u, depth + 1u); else { c.pc = 0x0013C3B0u; return; } if (c.pc != 0x0022B4F8u) [[unlikely]] return; }
L_0022B4F8:
    set32(c.r[4], c.r[17].w[0] + 28u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022B504u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E490u; return; } if (c.pc != 0x0022B504u) [[unlikely]] return; }
L_0022B504:
    set32(c.r[4], c.r[17].w[0] + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022B510u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000F(c, 266u, depth + 1u); else { c.pc = 0x0013E5B0u; return; } if (c.pc != 0x0022B510u) [[unlikely]] return; }
L_0022B510:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022B51Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000F(c, 252u, depth + 1u); else { c.pc = 0x0013E3C0u; return; } if (c.pc != 0x0022B51Cu) [[unlikely]] return; }
L_0022B51C:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0022B538; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022B534u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x0022B534u) [[unlikely]] return; }
L_0022B534:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0022B538:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0022B550:
    set32(c.r[29], c.r[29].w[0] - 112u);
    set32(c.r[3], 0u + 2u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0] + 144u)));
    c.budget -= 7;
    { const bool t = c.r[5].d[0] != c.r[3].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0022B5B0; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 148u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0022B5B0; } }
    c.f[1] = ld32((c.r[16].w[0] + 140u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0022B5B0; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0022BD04; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0022B5A8u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0022B5A8u) [[unlikely]] return; }
L_0022B5A8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_0022BD08; } }
L_0022B5B0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], ld32((c.r[1].w[0] + 31072u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00030000u);
    set32(c.r[1], c.r[3].w[0] + c.r[1].w[0]);
    set32(c.r[3], ld32((c.r[1].w[0] + 4472u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0022BCA4; } }
    c.f[1] = ld32((c.r[16].w[0] + 140u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0022BCA4; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    c.r[4].d[0] = ld8((c.r[1].w[0] + 28008u));
    set32(c.r[2], c.r[2].w[0] - 25200u);
    set32(c.r[3], c.r[2].w[0] + c.r[4].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[3].d[0] = ld8((c.r[3].w[0]));
    set32(c.r[2], c.r[4].w[0] + 1u);
    c.budget -= 10;
    { const bool t = c.r[3].sd[0] < 0; st8((c.r[1].w[0] + 28008u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0022B60C; } }
L_0022B60C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022B614u);  if (depth < kMaxDepth) unit_003F(c, 312u, depth + 1u); else { c.pc = 0x001FF210u; return; } if (c.pc != 0x0022B614u) [[unlikely]] return; }
L_0022B614:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_0022B648; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 20144u)));
    c.f[14] = c.r[2].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[12] = ld32((c.r[1].w[0] + 25896u));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022B63Cu); c.f[13] = c.f[12];  if (depth < kMaxDepth) unit_0013(c, 96u, depth + 1u); else { c.pc = 0x0014D700u; return; } if (c.pc != 0x0022B63Cu) [[unlikely]] return; }
L_0022B63C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[16].w[0] + 160u) & ~15u, c.r[4]);  if (t) { goto L_0022B6D8; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_0022B648:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 2u);  if (t) { goto L_0022B67C; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 20144u)));
    c.f[14] = c.r[2].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[12] = ld32((c.r[1].w[0] + 25888u));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022B670u); c.f[13] = c.f[12];  if (depth < kMaxDepth) unit_0013(c, 96u, depth + 1u); else { c.pc = 0x0014D700u; return; } if (c.pc != 0x0022B670u) [[unlikely]] return; }
L_0022B670:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0022B6D4; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 1;
L_0022B67C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_0022B6B0; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 20144u)));
    c.f[13] = c.r[2].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[12] = ld32((c.r[1].w[0] + 25888u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022B6A8u); c.f[14] = ld32((c.r[1].w[0] + 25880u));  if (depth < kMaxDepth) unit_0013(c, 96u, depth + 1u); else { c.pc = 0x0014D700u; return; } if (c.pc != 0x0022B6A8u) [[unlikely]] return; }
L_0022B6A8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0022B6D4; } }
L_0022B6B0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 20144u)));
    c.f[13] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[14] = c.r[2].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022B6D4u); c.f[12] = ld32((c.r[1].w[0] + 25888u));  if (depth < kMaxDepth) unit_0013(c, 96u, depth + 1u); else { c.pc = 0x0014D700u; return; } if (c.pc != 0x0022B6D4u) [[unlikely]] return; }
L_0022B6D4:
    ld128((c.r[16].w[0] + 160u) & ~15u, c.r[4]);
    c.budget -= 1;
L_0022B6D8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[5], ld32((c.r[1].w[0] + 28272u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[6], c.r[29].w[0] + 32u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[4]);
    st32((c.r[29].w[0] + 44u), c.r[3].w[0]);
    set32(c.r[3], c.r[5].w[0] + 224u);
    ld128((c.r[3].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[3].w[0] + 16u) & ~15u, c.vu0.vf[5]);
    ld128((c.r[3].w[0] + 32u) & ~15u, c.vu0.vf[6]);
    ld128((c.r[3].w[0] + 48u) & ~15u, c.vu0.vf[7]);
    ld128((c.r[6].w[0]) & ~15u, c.vu0.vf[8]);
    vu::mulabc(c.vu0, 15u, 4u, c.vu0.vf[8].w[0]);
    vu::maddabc(c.vu0, 15u, 5u, c.vu0.vf[8].w[1]);
    vu::maddabc(c.vu0, 15u, 6u, c.vu0.vf[8].w[2]);
    vu::maddbc(c.vu0, 15u, 12u, 7u, c.vu0.vf[8].w[3]);
    st128((c.r[6].w[0]) & ~15u, c.vu0.vf[12]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42480000u);
    c.f[0] = c.r[3].w[0];
    c.f[1] = ld32((c.r[29].w[0] + 40u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 23;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0022BC84; } }
    set32(c.r[2], c.r[29].w[0] + 48u);
    st128((c.r[2].w[0] + 48u) & ~15u, c.vu0.vf[0]);
    vu::mr32(c.vu0, 15u, 1u, 0u);
    st128((c.r[2].w[0] + 32u) & ~15u, c.vu0.vf[1]);
    vu::mr32(c.vu0, 15u, 2u, 1u);
    st128((c.r[2].w[0] + 16u) & ~15u, c.vu0.vf[2]);
    vu::mr32(c.vu0, 15u, 3u, 2u);
    st128((c.r[2].w[0]) & ~15u, c.vu0.vf[3]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.f[0] = ld32((c.r[16].w[0] + 176u));
    set32(c.r[2], ld32((c.r[1].w[0] + 31072u)));
    st32((c.r[29].w[0] + 48u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00030000u);
    c.f[0] = ld32((c.r[16].w[0] + 176u));
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    st32((c.r[29].w[0] + 68u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 176u));
    st32((c.r[29].w[0] + 88u), c.f[0]);
    set32(c.r[2], ld32((c.r[1].w[0] + 4472u)));
    set32(c.r[4], c.r[2].w[0] + 16u);
    st128((c.r[4].w[0] + 48u) & ~15u, c.vu0.vf[0]);
    vu::mr32(c.vu0, 15u, 1u, 0u);
    st128((c.r[4].w[0] + 32u) & ~15u, c.vu0.vf[1]);
    vu::mr32(c.vu0, 15u, 2u, 1u);
    st128((c.r[4].w[0] + 16u) & ~15u, c.vu0.vf[2]);
    vu::mr32(c.vu0, 15u, 3u, 2u);
    st128((c.r[4].w[0]) & ~15u, c.vu0.vf[3]);
    set32(c.r[3], c.r[4].w[0] + 48u);
    set32(c.r[2], c.r[29].w[0] + 32u);
    ld128((c.r[3].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[2].w[0]) & ~15u, c.vu0.vf[5]);
    vu::add(c.vu0, 14u, 4u, 4u, 5u);
    st128((c.r[3].w[0]) & ~15u, c.vu0.vf[4]);
    set32(c.r[2], c.r[29].w[0] + 48u);
    ld128((c.r[4].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[4].w[0] + 16u) & ~15u, c.vu0.vf[5]);
    ld128((c.r[4].w[0] + 32u) & ~15u, c.vu0.vf[6]);
    ld128((c.r[4].w[0] + 48u) & ~15u, c.vu0.vf[7]);
    ld128((c.r[2].w[0]) & ~15u, c.vu0.vf[10]);
    ld128((c.r[2].w[0] + 16u) & ~15u, c.vu0.vf[11]);
    ld128((c.r[2].w[0] + 32u) & ~15u, c.vu0.vf[12]);
    ld128((c.r[2].w[0] + 48u) & ~15u, c.vu0.vf[13]);
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
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 31072u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00030000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    set32(c.r[4], ld32((c.r[1].w[0] + 4472u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 152u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.budget -= 71;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0022B850u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0022B850u) [[unlikely]] return; }
L_0022B850:
    set32(c.r[2], c.r[29].w[0] + 48u);
    st128((c.r[2].w[0] + 48u) & ~15u, c.vu0.vf[0]);
    vu::mr32(c.vu0, 15u, 1u, 0u);
    st128((c.r[2].w[0] + 32u) & ~15u, c.vu0.vf[1]);
    vu::mr32(c.vu0, 15u, 2u, 1u);
    st128((c.r[2].w[0] + 16u) & ~15u, c.vu0.vf[2]);
    vu::mr32(c.vu0, 15u, 3u, 2u);
    st128((c.r[2].w[0]) & ~15u, c.vu0.vf[3]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], ld32((c.r[1].w[0] + 28272u)));
    set32(c.r[2], c.r[29].w[0] + 48u);
    set32(c.r[3], c.r[3].w[0] + 224u);
    ld128((c.r[2].w[0]) & ~15u, c.r[6]);
    ld128((c.r[2].w[0] + 16u) & ~15u, c.r[7]);
    ld128((c.r[2].w[0] + 32u) & ~15u, c.r[8]);
    ld128((c.r[2].w[0] + 48u) & ~15u, c.r[9]);
    st128((c.r[3].w[0]) & ~15u, c.r[6]);
    st128((c.r[3].w[0] + 16u) & ~15u, c.r[7]);
    st128((c.r[3].w[0] + 32u) & ~15u, c.r[8]);
    st128((c.r[3].w[0] + 48u) & ~15u, c.r[9]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 20144u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 25;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022B8B4u); set32(c.r[5], ld32((c.r[1].w[0] + 28272u)));  if (depth < kMaxDepth) unit_0013(c, 99u, depth + 1u); else { c.pc = 0x0014D7F0u; return; } if (c.pc != 0x0022B8B4u) [[unlikely]] return; }
L_0022B8B4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 31072u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00030000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    set32(c.r[2], ld32((c.r[1].w[0] + 4472u)));
    st64((c.r[2].w[0] + 192u), 0ull);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[11], ld32((c.r[1].w[0] + 20144u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[11].w[0] + c.r[1].w[0]);
    set32(c.r[2], ld32((c.r[1].w[0] + 1364u)));
    c.r[1].d[0] = c.r[2].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 14;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0022B988; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    set32(c.r[1], c.r[11].w[0] + c.r[1].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x50000000u);
    set32(c.r[10], ld32((c.r[1].w[0] + 1380u)));
    c.r[9].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[6].d[0] = c.r[4].d[0] | 2ull;
    c.r[8].d[0] = c.r[2].d[0] | 3ull;
    c.r[3].d[0] = c.r[2].d[0] << 32;
    c.r[7].sd[0] = static_cast<std::int32_t>(0x11000000u);
    c.r[2].d[0] = 0ull | 32769ull;
    set32(c.r[4], 0u + 14u);
    c.r[5].d[0] = c.r[2].d[0] | c.r[3].d[0];
    set32(c.r[3], 0u + 72u);
    set32(c.r[2], 0u + 66u);
    c.r[9].d[0] = c.r[10].d[0] | c.r[9].d[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    st64((c.r[9].w[0]), c.r[8].d[0]);
    set32(c.r[1], c.r[11].w[0] + c.r[1].w[0]);
    st64((c.r[9].w[0] + 8u), 0ull);
    st64((c.r[9].w[0] + 16u), 0ull);
    st32((c.r[9].w[0] + 24u), c.r[7].w[0]);
    st32((c.r[9].w[0] + 28u), c.r[6].w[0]);
    st64((c.r[9].w[0] + 32u), c.r[5].d[0]);
    st64((c.r[9].w[0] + 40u), c.r[4].d[0]);
    st64((c.r[9].w[0] + 48u), c.r[3].d[0]);
    st64((c.r[9].w[0] + 56u), c.r[2].d[0]);
    set32(c.r[2], ld32((c.r[1].w[0] + 1380u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[2], c.r[2].w[0] + 64u);
    set32(c.r[1], c.r[11].w[0] + c.r[1].w[0]);
    st32((c.r[1].w[0] + 1380u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[11].w[0] + c.r[1].w[0]);
    set32(c.r[2], ld32((c.r[1].w[0] + 1364u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[2], c.r[2].w[0] - 4u);
    set32(c.r[1], c.r[11].w[0] + c.r[1].w[0]);
    st32((c.r[1].w[0] + 1364u), c.r[2].w[0]);
    c.budget -= 39;
L_0022B988:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], 0u + 1u);
    set32(c.r[10], ld32((c.r[1].w[0] + 20144u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x31000000u);
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.r[11].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[10].w[0] + c.r[1].w[0]);
    set32(c.r[2], ld32((c.r[1].w[0] + 1364u)));
    c.r[1].d[0] = c.r[2].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 13;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0022BA54; } }
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
    set32(c.r[2], 0u + 78u);
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
L_0022BA54:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022BA5Cu);  if (depth < kMaxDepth) unit_0015(c, 8u, depth + 1u); else { c.pc = 0x001540B0u; return; } if (c.pc != 0x0022BA5Cu) [[unlikely]] return; }
L_0022BA5C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 31072u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00030000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    set32(c.r[4], ld32((c.r[1].w[0] + 4472u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 152u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 44u)));
    c.budget -= 9;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0022BA80u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0022BA80u) [[unlikely]] return; }
L_0022BA80:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00050000u);
    set32(c.r[3], ld32((c.r[1].w[0] + 31072u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00030000u);
    set32(c.r[1], c.r[3].w[0] + c.r[1].w[0]);
    set32(c.r[3], ld32((c.r[1].w[0] + 4472u)));
    st64((c.r[3].w[0] + 192u), c.r[2].d[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[11], ld32((c.r[1].w[0] + 20144u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[11].w[0] + c.r[1].w[0]);
    set32(c.r[2], ld32((c.r[1].w[0] + 1364u)));
    c.r[1].d[0] = c.r[2].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 15;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0022BB58; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    set32(c.r[1], c.r[11].w[0] + c.r[1].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x50000000u);
    set32(c.r[10], ld32((c.r[1].w[0] + 1380u)));
    c.r[9].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[6].d[0] = c.r[4].d[0] | 2ull;
    c.r[8].d[0] = c.r[2].d[0] | 3ull;
    c.r[3].d[0] = c.r[2].d[0] << 32;
    c.r[7].sd[0] = static_cast<std::int32_t>(0x11000000u);
    c.r[2].d[0] = 0ull | 32769ull;
    set32(c.r[4], 0u + 14u);
    c.r[5].d[0] = c.r[2].d[0] | c.r[3].d[0];
    set32(c.r[3], 0u + 68u);
    set32(c.r[2], 0u + 66u);
    c.r[9].d[0] = c.r[10].d[0] | c.r[9].d[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    st64((c.r[9].w[0]), c.r[8].d[0]);
    set32(c.r[1], c.r[11].w[0] + c.r[1].w[0]);
    st64((c.r[9].w[0] + 8u), 0ull);
    st64((c.r[9].w[0] + 16u), 0ull);
    st32((c.r[9].w[0] + 24u), c.r[7].w[0]);
    st32((c.r[9].w[0] + 28u), c.r[6].w[0]);
    st64((c.r[9].w[0] + 32u), c.r[5].d[0]);
    st64((c.r[9].w[0] + 40u), c.r[4].d[0]);
    st64((c.r[9].w[0] + 48u), c.r[3].d[0]);
    st64((c.r[9].w[0] + 56u), c.r[2].d[0]);
    set32(c.r[2], ld32((c.r[1].w[0] + 1380u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[2], c.r[2].w[0] + 64u);
    set32(c.r[1], c.r[11].w[0] + c.r[1].w[0]);
    st32((c.r[1].w[0] + 1380u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[11].w[0] + c.r[1].w[0]);
    set32(c.r[2], ld32((c.r[1].w[0] + 1364u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[2], c.r[2].w[0] - 4u);
    set32(c.r[1], c.r[11].w[0] + c.r[1].w[0]);
    st32((c.r[1].w[0] + 1364u), c.r[2].w[0]);
    c.budget -= 39;
L_0022BB58:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x31000000u);
    set32(c.r[10], ld32((c.r[1].w[0] + 20144u)));
    c.r[11].d[0] = c.r[2].d[0] | 128ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[10].w[0] + c.r[1].w[0]);
    set32(c.r[2], ld32((c.r[1].w[0] + 1364u)));
    c.r[1].d[0] = c.r[2].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0022BC18; } }
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
    set32(c.r[2], 0u + 78u);
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
L_0022BC18:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], ld32((c.r[1].w[0] + 28272u)));
    set32(c.r[2], c.r[2].w[0] + 31840u);
    set32(c.r[3], c.r[3].w[0] + 224u);
    ld128((c.r[2].w[0]) & ~15u, c.r[6]);
    ld128((c.r[2].w[0] + 16u) & ~15u, c.r[7]);
    ld128((c.r[2].w[0] + 32u) & ~15u, c.r[8]);
    ld128((c.r[2].w[0] + 48u) & ~15u, c.r[9]);
    st128((c.r[3].w[0]) & ~15u, c.r[6]);
    st128((c.r[3].w[0] + 16u) & ~15u, c.r[7]);
    st128((c.r[3].w[0] + 32u) & ~15u, c.r[8]);
    st128((c.r[3].w[0] + 48u) & ~15u, c.r[9]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.f[14] = ld32((c.r[1].w[0] + 28824u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.f[13] = ld32((c.r[1].w[0] + 28820u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.f[12] = ld32((c.r[1].w[0] + 28816u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022BC70u); set32(c.r[4], ld32((c.r[1].w[0] + 20144u)));  if (depth < kMaxDepth) unit_0013(c, 96u, depth + 1u); else { c.pc = 0x0014D700u; return; } if (c.pc != 0x0022BC70u) [[unlikely]] return; }
L_0022BC70:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 20144u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022BC84u); set32(c.r[5], ld32((c.r[1].w[0] + 28272u)));  if (depth < kMaxDepth) unit_0013(c, 99u, depth + 1u); else { c.pc = 0x0014D7F0u; return; } if (c.pc != 0x0022BC84u) [[unlikely]] return; }
L_0022BC84:
    set32(c.r[3], ld32((c.r[16].w[0] + 148u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0022BCA4; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[1] = ld32((c.r[16].w[0] + 176u));
    c.f[0] = ld32((c.r[1].w[0] + 25872u));
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    st32((c.r[16].w[0] + 176u), c.f[0]);
    c.budget -= 5;
L_0022BCA4:
    set32(c.r[4], ld32((c.r[16].w[0] + 144u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 148u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0022BCD8; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0022BD04; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0022BCD0u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0022BCD0u) [[unlikely]] return; }
L_0022BCD0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0022BD04; } }
L_0022BCD8:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0022BCE8; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0022BD04; } }
L_0022BCE8:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0022BCF4; } }
    set32(c.r[16], c.r[16].w[0] + 64u);
    c.budget -= 1;
L_0022BCF4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 20144u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022BD04u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0013(c, 238u, depth + 1u); else { c.pc = 0x0014F870u; return; } if (c.pc != 0x0022BD04u) [[unlikely]] return; }
L_0022BD04:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_0022BD08:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_0022BD20:
    set32(c.r[29], c.r[29].w[0] - 832u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[4].w[0] + 140u), 0u);
    set32(c.r[3], ld32((c.r[1].w[0] + 31072u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00030000u);
    set32(c.r[1], c.r[3].w[0] + c.r[1].w[0]);
    set32(c.r[3], ld32((c.r[1].w[0] + 4472u)));
    c.budget -= 16;
    { const bool t = c.r[3].d[0] == 0ull; c.r[21].d[0] = c.r[4].d[0] + 0ull;  if (t) { [[clang::musttail]] return unit_004B(c, 7u, depth); } }
    ld128((c.r[21].w[0] + 160u) & ~15u, c.r[4]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[5], ld32((c.r[1].w[0] + 28272u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[6], c.r[29].w[0] + 752u);
    st128((c.r[29].w[0] + 752u) & ~15u, c.r[4]);
    st32((c.r[29].w[0] + 764u), c.r[3].w[0]);
    set32(c.r[3], c.r[5].w[0] + 224u);
    ld128((c.r[3].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[3].w[0] + 16u) & ~15u, c.vu0.vf[5]);
    ld128((c.r[3].w[0] + 32u) & ~15u, c.vu0.vf[6]);
    ld128((c.r[3].w[0] + 48u) & ~15u, c.vu0.vf[7]);
    ld128((c.r[6].w[0]) & ~15u, c.vu0.vf[8]);
    vu::mulabc(c.vu0, 15u, 4u, c.vu0.vf[8].w[0]);
    vu::maddabc(c.vu0, 15u, 5u, c.vu0.vf[8].w[1]);
    vu::maddabc(c.vu0, 15u, 6u, c.vu0.vf[8].w[2]);
    vu::maddbc(c.vu0, 15u, 12u, 7u, c.vu0.vf[8].w[3]);
    st128((c.r[6].w[0]) & ~15u, c.vu0.vf[12]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42480000u);
    c.f[0] = c.r[3].w[0];
    c.f[1] = ld32((c.r[29].w[0] + 760u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 24;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { [[clang::musttail]] return unit_004B(c, 7u, depth); } }
    set32(c.r[2], c.r[29].w[0] + 768u);
    st128((c.r[2].w[0] + 48u) & ~15u, c.vu0.vf[0]);
    vu::mr32(c.vu0, 15u, 1u, 0u);
    st128((c.r[2].w[0] + 32u) & ~15u, c.vu0.vf[1]);
    vu::mr32(c.vu0, 15u, 2u, 1u);
    st128((c.r[2].w[0] + 16u) & ~15u, c.vu0.vf[2]);
    vu::mr32(c.vu0, 15u, 3u, 2u);
    st128((c.r[2].w[0]) & ~15u, c.vu0.vf[3]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.f[0] = ld32((c.r[21].w[0] + 176u));
    set32(c.r[2], ld32((c.r[1].w[0] + 31072u)));
    st32((c.r[29].w[0] + 768u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00030000u);
    c.f[0] = ld32((c.r[21].w[0] + 176u));
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    st32((c.r[29].w[0] + 788u), c.f[0]);
    c.f[0] = ld32((c.r[21].w[0] + 176u));
    st32((c.r[29].w[0] + 808u), c.f[0]);
    set32(c.r[2], ld32((c.r[1].w[0] + 4472u)));
    set32(c.r[20], c.r[2].w[0] + 16u);
    st128((c.r[20].w[0] + 48u) & ~15u, c.vu0.vf[0]);
    vu::mr32(c.vu0, 15u, 1u, 0u);
    st128((c.r[20].w[0] + 32u) & ~15u, c.vu0.vf[1]);
    vu::mr32(c.vu0, 15u, 2u, 1u);
    st128((c.r[20].w[0] + 16u) & ~15u, c.vu0.vf[2]);
    vu::mr32(c.vu0, 15u, 3u, 2u);
    st128((c.r[20].w[0]) & ~15u, c.vu0.vf[3]);
    set32(c.r[3], c.r[20].w[0] + 48u);
    set32(c.r[2], c.r[29].w[0] + 752u);
    ld128((c.r[3].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[2].w[0]) & ~15u, c.vu0.vf[5]);
    vu::add(c.vu0, 14u, 4u, 4u, 5u);
    st128((c.r[3].w[0]) & ~15u, c.vu0.vf[4]);
    set32(c.r[2], c.r[29].w[0] + 768u);
    ld128((c.r[20].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[20].w[0] + 16u) & ~15u, c.vu0.vf[5]);
    ld128((c.r[20].w[0] + 32u) & ~15u, c.vu0.vf[6]);
    ld128((c.r[20].w[0] + 48u) & ~15u, c.vu0.vf[7]);
    ld128((c.r[2].w[0]) & ~15u, c.vu0.vf[10]);
    ld128((c.r[2].w[0] + 16u) & ~15u, c.vu0.vf[11]);
    ld128((c.r[2].w[0] + 32u) & ~15u, c.vu0.vf[12]);
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
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 31072u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00030000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.budget -= 68;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022BED0u); set32(c.r[4], ld32((c.r[1].w[0] + 4472u)));  if (depth < kMaxDepth) unit_0014(c, 69u, depth + 1u); else { c.pc = 0x00151160u; return; } if (c.pc != 0x0022BED0u) [[unlikely]] return; }
L_0022BED0:
    set32(c.r[2], c.r[29].w[0] + 768u);
    st128((c.r[2].w[0] + 48u) & ~15u, c.vu0.vf[0]);
    vu::mr32(c.vu0, 15u, 1u, 0u);
    st128((c.r[2].w[0] + 32u) & ~15u, c.vu0.vf[1]);
    vu::mr32(c.vu0, 15u, 2u, 1u);
    st128((c.r[2].w[0] + 16u) & ~15u, c.vu0.vf[2]);
    vu::mr32(c.vu0, 15u, 3u, 2u);
    st128((c.r[2].w[0]) & ~15u, c.vu0.vf[3]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], ld32((c.r[1].w[0] + 28272u)));
    set32(c.r[2], c.r[29].w[0] + 768u);
    set32(c.r[3], c.r[3].w[0] + 224u);
    ld128((c.r[2].w[0]) & ~15u, c.r[6]);
    ld128((c.r[2].w[0] + 16u) & ~15u, c.r[7]);
    ld128((c.r[2].w[0] + 32u) & ~15u, c.r[8]);
    ld128((c.r[2].w[0] + 48u) & ~15u, c.r[9]);
    st128((c.r[3].w[0]) & ~15u, c.r[6]);
    st128((c.r[3].w[0] + 16u) & ~15u, c.r[7]);
    st128((c.r[3].w[0] + 32u) & ~15u, c.r[8]);
    st128((c.r[3].w[0] + 48u) & ~15u, c.r[9]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 31072u)));
    set32(c.r[3], c.r[29].w[0] + 768u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00030000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    set32(c.r[2], ld32((c.r[1].w[0] + 4472u)));
    set32(c.r[2], c.r[2].w[0] + 16u);
    ld128((c.r[2].w[0]) & ~15u, c.r[6]);
    ld128((c.r[2].w[0] + 16u) & ~15u, c.r[7]);
    ld128((c.r[2].w[0] + 32u) & ~15u, c.r[8]);
    ld128((c.r[2].w[0] + 48u) & ~15u, c.r[9]);
    st128((c.r[3].w[0]) & ~15u, c.r[6]);
    st128((c.r[3].w[0] + 16u) & ~15u, c.r[7]);
    st128((c.r[3].w[0] + 32u) & ~15u, c.r[8]);
    st128((c.r[3].w[0] + 48u) & ~15u, c.r[9]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 28272u)));
    set32(c.r[3], c.r[29].w[0] + 768u);
    set32(c.r[4], c.r[29].w[0] + 768u);
    set32(c.r[2], c.r[2].w[0] + 160u);
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
    set32(c.r[2], c.r[29].w[0] + 736u);
    st128((c.r[2].w[0]) & ~15u, c.vu0.vf[0]);
    set32(c.r[3], c.r[29].w[0] + 736u);
    set32(c.r[2], c.r[29].w[0] + 768u);
    ld128((c.r[2].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[2].w[0] + 16u) & ~15u, c.vu0.vf[5]);
    ld128((c.r[2].w[0] + 32u) & ~15u, c.vu0.vf[6]);
    ld128((c.r[2].w[0] + 48u) & ~15u, c.vu0.vf[7]);
    c.budget -= 76;
    [[clang::musttail]] return unit_004B(c, 1u, depth);
}

}
