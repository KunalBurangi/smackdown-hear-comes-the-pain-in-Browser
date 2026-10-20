#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_00BE[4096] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0,
    0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 8,
    0, 0, 9, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 13, 0,
    0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 17, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0,
    0, 20, 0, 0, 0, 21, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 25, 0, 0, 26,
    0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 29, 0, 0,
    30, 0, 0, 31, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 49, 0, 0, 0, 50, 0, 0,
    51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 53,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 68, 0, 0, 69, 0, 0,
    0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 72, 0, 0, 73, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 81, 0, 0, 0, 82, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 85, 0, 0, 0,
    0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 87, 0, 0, 0, 0, 88, 0, 0, 0, 89, 0, 0, 0, 0, 90, 0, 0, 0, 0, 91, 0, 0,
    0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    96, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0,
    103, 0, 0, 0, 0, 0, 104, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 0, 107, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 110, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 112, 0, 0, 0, 113, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0,
    115, 0, 0, 0, 116, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 121, 0, 122, 0, 123, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 125, 0, 0,
    0, 0, 126, 0, 127, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 130, 0, 0, 0,
    131, 0, 0, 0, 0, 0, 0, 132, 0, 0, 133, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 136, 0, 0, 0, 0, 137, 0, 0, 0, 138, 0, 0,
    0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 148, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 157, 0,
    0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 160, 0,
    0, 0, 0, 161, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 162, 0, 0, 0,
    0, 163, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 166, 0, 0, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 0, 169, 0, 0,
    0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 172, 0, 0, 0, 0, 173, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0,
    176, 0, 0, 0, 177, 0, 178, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0, 180, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 181, 0, 0, 0, 182, 0, 0, 183, 0, 0, 0, 184, 0, 0, 0, 185, 0, 0, 0, 186, 0, 0, 0, 187,
    0, 0, 0, 188, 0, 0, 0, 0, 189, 0, 0, 0, 190, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 193,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 194, 0, 0, 0, 195, 0, 0, 0, 0,
    0, 0, 0, 196, 0, 197, 0, 0, 198, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 199, 0, 0, 0, 0, 0, 0, 200, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 203, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 204, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 205, 0, 0, 0, 0, 0, 0, 0, 0, 206, 0, 0, 0, 0, 0, 0, 0, 207, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    208, 0, 0, 0, 0, 0, 0, 0, 0, 0, 209, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 210, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 211, 0, 212, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 214, 0, 215, 0,
    216, 0, 217, 0, 218, 0, 0, 0, 0, 0, 0, 0, 219, 0, 0, 0, 0, 0, 0, 0, 220, 0, 0, 0, 0, 0, 0, 0, 0, 221, 0, 0,
    0, 0, 0, 0, 0, 0, 222, 0, 0, 0, 0, 0, 0, 0, 0, 0, 223, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 224, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 225, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    226, 0, 0, 0, 0, 0, 0, 0, 227, 0, 0, 228, 0, 0, 229, 0, 0, 0, 0, 0, 230, 0, 0, 0, 0, 0, 0, 0, 0, 0, 231, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 232, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 233,
    0, 0, 0, 0, 0, 0, 0, 0, 234, 0, 235, 0, 0, 0, 0, 0, 0, 0, 0, 236, 0, 0, 0, 0, 0, 0, 0, 0, 237, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 238, 0, 0, 0, 0, 0, 0, 0, 0, 0, 239, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 240, 0, 0, 0, 0, 0, 241, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 242, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 243, 0, 0, 0, 0, 0, 0, 244, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 245, 0, 0, 0, 0, 0, 246, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 247, 0, 0, 0, 0, 0, 0, 248, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 249, 0, 0, 0, 0, 0, 250, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    251, 0, 0, 0, 0, 0, 252, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 253, 0, 0, 0, 0, 0, 254, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 255, 0, 0, 0, 256, 0, 0, 0, 257, 0, 0, 0, 258, 0, 0, 0, 0, 0, 259, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    260, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 261, 0, 0, 0, 0, 0, 262, 0, 0, 0, 0, 0, 263, 0,
    0, 0, 0, 0, 0, 0, 264, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 265, 0, 0, 0, 0, 0,
    266, 0, 0, 0, 267, 0, 0, 0, 0, 0, 268, 0, 0, 0, 0, 0, 269, 0, 0, 0, 0, 0, 0, 0, 0, 0, 270, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 271, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 272, 0, 0, 0, 0, 0, 0, 0, 273, 0, 0, 0,
    0, 0, 0, 0, 274, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 275, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 276, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 277, 0, 0, 0, 0, 0, 0, 0, 278, 0, 0, 0, 0, 0, 0, 0, 279, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 280, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 281, 0, 0, 0, 0, 0, 282, 0, 0, 283,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 284, 0, 0, 0, 0, 0, 0, 0, 285, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 286, 0, 0, 0, 0, 287, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 288, 0, 0, 0, 0, 289, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 290, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 291, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 292, 0, 0, 293, 0,
    0, 0, 0, 0, 294, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 295, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 296, 0, 0, 0, 0, 0, 0, 0, 0, 0, 297, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 298, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 299, 0, 0, 0, 0, 0, 0, 0, 300, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 301, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 302, 0, 0, 0, 0, 0, 0, 0, 303, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 304, 0, 0, 0, 0, 0, 0, 0, 305, 0, 0, 0, 0, 0, 0, 0, 306, 0, 0, 0, 0, 0, 0, 0, 0, 0, 307, 0,
    0, 0, 0, 0, 308, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 309, 0, 0, 0, 0, 310, 0, 0, 0, 0, 311, 0, 0, 0,
    0, 0, 0, 0, 312, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 313, 0, 0, 0, 314, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 315,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 316, 0, 317, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 318, 0, 0, 0, 0, 0, 319, 0, 0, 320, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    321, 0, 0, 0, 0, 0, 0, 0, 0, 322, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 323,
    0, 0, 0, 0, 324, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 325, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 326, 0, 0, 0, 327, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 328, 0, 329, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_00BE(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_003F8000;
    case 2u: goto L_003F8074;
    case 3u: goto L_003F8090;
    case 4u: goto L_003F80DC;
    case 5u: goto L_003F8110;
    case 6u: goto L_003F8138;
    case 7u: goto L_003F8168;
    case 8u: goto L_003F817C;
    case 9u: goto L_003F8188;
    case 10u: goto L_003F81A4;
    case 11u: goto L_003F81B8;
    case 12u: goto L_003F81D8;
    case 13u: goto L_003F81F8;
    case 14u: goto L_003F8218;
    case 15u: goto L_003F8240;
    case 16u: goto L_003F8260;
    case 17u: goto L_003F8278;
    case 18u: goto L_003F8318;
    case 19u: goto L_003F8374;
    case 20u: goto L_003F8384;
    case 21u: goto L_003F8394;
    case 22u: goto L_003F83A8;
    case 23u: goto L_003F83C4;
    case 24u: goto L_003F83D4;
    case 25u: goto L_003F83F0;
    case 26u: goto L_003F83FC;
    case 27u: goto L_003F841C;
    case 28u: goto L_003F8458;
    case 29u: goto L_003F8474;
    case 30u: goto L_003F8480;
    case 31u: goto L_003F848C;
    case 32u: goto L_003F84A0;
    case 33u: goto L_003F84D0;
    case 34u: goto L_003F8528;
    case 35u: goto L_003F8544;
    case 36u: goto L_003F8568;
    case 37u: goto L_003F8590;
    case 38u: goto L_003F85B8;
    case 39u: goto L_003F8624;
    case 40u: goto L_003F865C;
    case 41u: goto L_003F86F0;
    case 42u: goto L_003F8730;
    case 43u: goto L_003F8750;
    case 44u: goto L_003F8784;
    case 45u: goto L_003F87B4;
    case 46u: goto L_003F87CC;
    case 47u: goto L_003F8828;
    case 48u: goto L_003F8854;
    case 49u: goto L_003F8864;
    case 50u: goto L_003F8874;
    case 51u: goto L_003F8880;
    case 52u: goto L_003F88B8;
    case 53u: goto L_003F88FC;
    case 54u: goto L_003F894C;
    case 55u: goto L_003F89C8;
    case 56u: goto L_003F8A1C;
    case 57u: goto L_003F8BB0;
    case 58u: goto L_003F8C68;
    case 59u: goto L_003F8C98;
    case 60u: goto L_003F8CAC;
    case 61u: goto L_003F8D10;
    case 62u: goto L_003F8D3C;
    case 63u: goto L_003F8D4C;
    case 64u: goto L_003F8E20;
    case 65u: goto L_003F8E60;
    case 66u: goto L_003F8EB4;
    case 67u: goto L_003F8ECC;
    case 68u: goto L_003F8EE8;
    case 69u: goto L_003F8EF4;
    case 70u: goto L_003F8F10;
    case 71u: goto L_003F8F48;
    case 72u: goto L_003F8F5C;
    case 73u: goto L_003F8F68;
    case 74u: goto L_003F8F90;
    case 75u: goto L_003F8FB8;
    case 76u: goto L_003F8FF8;
    case 77u: goto L_003F90A8;
    case 78u: goto L_003F90E0;
    case 79u: goto L_003F9220;
    case 80u: goto L_003F9258;
    case 81u: goto L_003F9288;
    case 82u: goto L_003F9298;
    case 83u: goto L_003F92A8;
    case 84u: goto L_003F92DC;
    case 85u: goto L_003F92F0;
    case 86u: goto L_003F9314;
    case 87u: goto L_003F9328;
    case 88u: goto L_003F933C;
    case 89u: goto L_003F934C;
    case 90u: goto L_003F9360;
    case 91u: goto L_003F9374;
    case 92u: goto L_003F9398;
    case 93u: goto L_003F93F8;
    case 94u: goto L_003F9438;
    case 95u: goto L_003F94C0;
    case 96u: goto L_003F9500;
    case 97u: goto L_003F9510;
    case 98u: goto L_003F9560;
    case 99u: goto L_003F958C;
    case 100u: goto L_003F95C0;
    case 101u: goto L_003F95E8;
    case 102u: goto L_003F9660;
    case 103u: goto L_003F9680;
    case 104u: goto L_003F9698;
    case 105u: goto L_003F96A4;
    case 106u: goto L_003F96D4;
    case 107u: goto L_003F96F4;
    case 108u: goto L_003F9724;
    case 109u: goto L_003F9760;
    case 110u: goto L_003F9778;
    case 111u: goto L_003F97B0;
    case 112u: goto L_003F97C0;
    case 113u: goto L_003F97D0;
    case 114u: goto L_003F97E4;
    case 115u: goto L_003F9800;
    case 116u: goto L_003F9810;
    case 117u: goto L_003F9828;
    case 118u: goto L_003F9850;
    case 119u: goto L_003F98C0;
    case 120u: goto L_003F9920;
    case 121u: goto L_003F9938;
    case 122u: goto L_003F9940;
    case 123u: goto L_003F9948;
    case 124u: goto L_003F995C;
    case 125u: goto L_003F9974;
    case 126u: goto L_003F9988;
    case 127u: goto L_003F9990;
    case 128u: goto L_003F99A8;
    case 129u: goto L_003F99E0;
    case 130u: goto L_003F99F0;
    case 131u: goto L_003F9A00;
    case 132u: goto L_003F9A1C;
    case 133u: goto L_003F9A28;
    case 134u: goto L_003F9A38;
    case 135u: goto L_003F9ABC;
    case 136u: goto L_003F9AD0;
    case 137u: goto L_003F9AE4;
    case 138u: goto L_003F9AF4;
    case 139u: goto L_003F9B10;
    case 140u: goto L_003F9B48;
    case 141u: goto L_003F9B98;
    case 142u: goto L_003F9BCC;
    case 143u: goto L_003F9C2C;
    case 144u: goto L_003F9CBC;
    case 145u: goto L_003F9E60;
    case 146u: goto L_003F9EC8;
    case 147u: goto L_003F9EDC;
    case 148u: goto L_003F9EF8;
    case 149u: goto L_003F9F68;
    case 150u: goto L_003F9FCC;
    case 151u: goto L_003F9FF0;
    case 152u: goto L_003FA018;
    case 153u: goto L_003FA068;
    case 154u: goto L_003FA0A4;
    case 155u: goto L_003FA0B8;
    case 156u: goto L_003FA0DC;
    case 157u: goto L_003FA0F8;
    case 158u: goto L_003FA110;
    case 159u: goto L_003FA168;
    case 160u: goto L_003FA178;
    case 161u: goto L_003FA18C;
    case 162u: goto L_003FA1F0;
    case 163u: goto L_003FA204;
    case 164u: goto L_003FA21C;
    case 165u: goto L_003FA260;
    case 166u: goto L_003FA288;
    case 167u: goto L_003FA2B0;
    case 168u: goto L_003FA2D0;
    case 169u: goto L_003FA2F4;
    case 170u: goto L_003FA314;
    case 171u: goto L_003FA394;
    case 172u: goto L_003FA3A8;
    case 173u: goto L_003FA3BC;
    case 174u: goto L_003FA3C8;
    case 175u: goto L_003FA3EC;
    case 176u: goto L_003FA400;
    case 177u: goto L_003FA410;
    case 178u: goto L_003FA418;
    case 179u: goto L_003FA460;
    case 180u: goto L_003FA470;
    case 181u: goto L_003FA4A0;
    case 182u: goto L_003FA4B0;
    case 183u: goto L_003FA4BC;
    case 184u: goto L_003FA4CC;
    case 185u: goto L_003FA4DC;
    case 186u: goto L_003FA4EC;
    case 187u: goto L_003FA4FC;
    case 188u: goto L_003FA50C;
    case 189u: goto L_003FA520;
    case 190u: goto L_003FA530;
    case 191u: goto L_003FA540;
    case 192u: goto L_003FA560;
    case 193u: goto L_003FA57C;
    case 194u: goto L_003FA6DC;
    case 195u: goto L_003FA6EC;
    case 196u: goto L_003FA70C;
    case 197u: goto L_003FA714;
    case 198u: goto L_003FA720;
    case 199u: goto L_003FA758;
    case 200u: goto L_003FA774;
    case 201u: goto L_003FA7A8;
    case 202u: goto L_003FA7F0;
    case 203u: goto L_003FA820;
    case 204u: goto L_003FA850;
    case 205u: goto L_003FA88C;
    case 206u: goto L_003FA8B0;
    case 207u: goto L_003FA8D0;
    case 208u: goto L_003FA900;
    case 209u: goto L_003FA928;
    case 210u: goto L_003FA968;
    case 211u: goto L_003FAA84;
    case 212u: goto L_003FAA8C;
    case 213u: goto L_003FAAD8;
    case 214u: goto L_003FAAF0;
    case 215u: goto L_003FAAF8;
    case 216u: goto L_003FAB00;
    case 217u: goto L_003FAB08;
    case 218u: goto L_003FAB10;
    case 219u: goto L_003FAB30;
    case 220u: goto L_003FAB50;
    case 221u: goto L_003FAB74;
    case 222u: goto L_003FAB98;
    case 223u: goto L_003FABC0;
    case 224u: goto L_003FABF0;
    case 225u: goto L_003FAC1C;
    case 226u: goto L_003FAD00;
    case 227u: goto L_003FAD20;
    case 228u: goto L_003FAD2C;
    case 229u: goto L_003FAD38;
    case 230u: goto L_003FAD50;
    case 231u: goto L_003FAD78;
    case 232u: goto L_003FADC0;
    case 233u: goto L_003FADFC;
    case 234u: goto L_003FAE20;
    case 235u: goto L_003FAE28;
    case 236u: goto L_003FAE4C;
    case 237u: goto L_003FAE70;
    case 238u: goto L_003FAE98;
    case 239u: goto L_003FAEC0;
    case 240u: goto L_003FAF48;
    case 241u: goto L_003FAF60;
    case 242u: goto L_003FAF88;
    case 243u: goto L_003FAFB8;
    case 244u: goto L_003FAFD4;
    case 245u: goto L_003FB004;
    case 246u: goto L_003FB01C;
    case 247u: goto L_003FB058;
    case 248u: goto L_003FB074;
    case 249u: goto L_003FB0A4;
    case 250u: goto L_003FB0BC;
    case 251u: goto L_003FB100;
    case 252u: goto L_003FB118;
    case 253u: goto L_003FB148;
    case 254u: goto L_003FB160;
    case 255u: goto L_003FB190;
    case 256u: goto L_003FB1A0;
    case 257u: goto L_003FB1B0;
    case 258u: goto L_003FB1C0;
    case 259u: goto L_003FB1D8;
    case 260u: goto L_003FB200;
    case 261u: goto L_003FB248;
    case 262u: goto L_003FB260;
    case 263u: goto L_003FB278;
    case 264u: goto L_003FB298;
    case 265u: goto L_003FB2E8;
    case 266u: goto L_003FB300;
    case 267u: goto L_003FB310;
    case 268u: goto L_003FB328;
    case 269u: goto L_003FB340;
    case 270u: goto L_003FB368;
    case 271u: goto L_003FB390;
    case 272u: goto L_003FB3D0;
    case 273u: goto L_003FB3F0;
    case 274u: goto L_003FB410;
    case 275u: goto L_003FB444;
    case 276u: goto L_003FB478;
    case 277u: goto L_003FB4B8;
    case 278u: goto L_003FB4D8;
    case 279u: goto L_003FB4F8;
    case 280u: goto L_003FB520;
    case 281u: goto L_003FB558;
    case 282u: goto L_003FB570;
    case 283u: goto L_003FB57C;
    case 284u: goto L_003FB5B0;
    case 285u: goto L_003FB5D0;
    case 286u: goto L_003FB620;
    case 287u: goto L_003FB634;
    case 288u: goto L_003FB688;
    case 289u: goto L_003FB69C;
    case 290u: goto L_003FB6F0;
    case 291u: goto L_003FB718;
    case 292u: goto L_003FB76C;
    case 293u: goto L_003FB778;
    case 294u: goto L_003FB790;
    case 295u: goto L_003FB7D8;
    case 296u: goto L_003FB818;
    case 297u: goto L_003FB840;
    case 298u: goto L_003FB874;
    case 299u: goto L_003FB8B0;
    case 300u: goto L_003FB8D0;
    case 301u: goto L_003FB908;
    case 302u: goto L_003FB9C0;
    case 303u: goto L_003FB9E0;
    case 304u: goto L_003FBA10;
    case 305u: goto L_003FBA30;
    case 306u: goto L_003FBA50;
    case 307u: goto L_003FBA78;
    case 308u: goto L_003FBA90;
    case 309u: goto L_003FBAC8;
    case 310u: goto L_003FBADC;
    case 311u: goto L_003FBAF0;
    case 312u: goto L_003FBB10;
    case 313u: goto L_003FBBC0;
    case 314u: goto L_003FBBD0;
    case 315u: goto L_003FBBFC;
    case 316u: goto L_003FBC54;
    case 317u: goto L_003FBC5C;
    case 318u: goto L_003FBC90;
    case 319u: goto L_003FBCA8;
    case 320u: goto L_003FBCB4;
    case 321u: goto L_003FBD00;
    case 322u: goto L_003FBD24;
    case 323u: goto L_003FBD7C;
    case 324u: goto L_003FBD90;
    case 325u: goto L_003FBDC0;
    case 326u: goto L_003FBEBC;
    case 327u: goto L_003FBECC;
    case 328u: goto L_003FBFD0;
    case 329u: goto L_003FBFD8;
    default: bad_entry(c, 0x003F8000u); return;
    }
L_003F8000:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[16].d[0]);
    set32(c.r[16], c.r[5].w[0] + 3292u);
    st64((c.r[29].w[0] + 56u), c.r[31].d[0]);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[5].w[0] + 3332u)));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003F8080; } }
    ldl(c.r[2], (c.r[5].w[0] + 3343u));
    ldr(c.r[2], (c.r[5].w[0] + 3336u));
    ldl(c.r[3], (c.r[5].w[0] + 3351u));
    ldr(c.r[3], (c.r[5].w[0] + 3344u));
    ldl(c.r[6], (c.r[5].w[0] + 3359u));
    ldr(c.r[6], (c.r[5].w[0] + 3352u));
    set32(c.r[7], ld32((c.r[5].w[0] + 3360u)));
    sdl(c.r[2], (c.r[29].w[0] + 7u));
    sdr(c.r[2], (c.r[29].w[0]));
    sdl(c.r[3], (c.r[29].w[0] + 15u));
    sdr(c.r[3], (c.r[29].w[0] + 8u));
    sdl(c.r[6], (c.r[29].w[0] + 23u));
    sdr(c.r[6], (c.r[29].w[0] + 16u));
    st32((c.r[29].w[0] + 24u), c.r[7].w[0]);
    set32(c.r[5], c.r[29].w[0] + 32u);
    set32(c.r[6], c.r[29].w[0] + 36u);
    set32(c.r[2], ld32((c.r[29].w[0] + 24u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F8074u); st32((c.r[29].w[0] + 24u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00C0(c, 135u, depth + 1u); else { c.pc = 0x004015F0u; return; } if (c.pc != 0x003F8074u) [[unlikely]] return; }
L_003F8074:
    set32(c.r[2], ld32((c.r[29].w[0] + 32u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 32u)));
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    c.budget -= 3;
L_003F8080:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 56u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003F8090:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] - 31912u);
    set32(c.r[5], ld32((c.r[16].w[0])));
    set32(c.r[3], ld32((c.r[5].w[0] + 12u)));
    c.budget -= 11;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[17], c.r[16].w[0] + 3264u);  if (t) { goto L_003F80D0; } }
    c.r[2].d[0] = 0ull | 44100ull;
    st32((c.r[29].w[0]), 0u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 4u), c.r[2].w[0]);  if (t) { goto L_003F80F0; } }
    c.budget -= 1;
L_003F80D0:
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F80DCu); set32(c.r[6], c.r[29].w[0] + 4u);  if (depth < kMaxDepth) unit_00BC(c, 310u, depth + 1u); else { c.pc = 0x003F2BF0u; return; } if (c.pc != 0x003F80DCu) [[unlikely]] return; }
L_003F80DC:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 428u)));  goto L_003F80F4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_003F8120; } }
    c.budget -= 1;
L_003F80F0:
    set32(c.r[2], ld32((c.r[17].w[0] + 428u)));
    c.budget -= 1;
L_003F80F4:
    set32(c.r[3], ld32((c.r[29].w[0])));
    set32(c.r[5], ld32((c.r[16].w[0] + 3328u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[6], ld32((c.r[29].w[0] + 4u)));
    st32((c.r[17].w[0] + 428u), c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F8110u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B9(c, 198u, depth + 1u); else { c.pc = 0x003E66B0u; return; } if (c.pc != 0x003F8110u) [[unlikely]] return; }
L_003F8110:
    set32(c.r[3], ld32((c.r[17].w[0] + 288u)));
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    c.r[4].d[0] = c.r[2].sd[0] < 0ll ? 1ull : 0ull;
    if (c.r[4].d[0] != 0) c.r[2].d[0] = 0ull;
    c.budget -= 4;
L_003F8120:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003F8138:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    set32(c.r[18], 0u + 128u);
    st64((c.r[29].w[0] + 40u), c.r[19].d[0]);
    set32(c.r[19], 0u + 4u);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st64((c.r[29].w[0] + 48u), c.r[31].d[0]);  if (t) { goto L_003F8188; } }
    c.budget -= 1;
L_003F8168:
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] + 32u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003F817Cu); c.r[6].d[0] = c.r[29].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003F817Cu) [[unlikely]] return; }
L_003F817C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F8188u); set32(c.r[5], 0u + 4u);  if (depth < kMaxDepth) unit_00BE(c, 13u, depth + 1u); else { c.pc = 0x003F81F8u; return; } if (c.pc != 0x003F8188u) [[unlikely]] return; }
L_003F8188:
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    set32(c.r[6], 0u + 4u);
    set32(c.r[3], ld32((c.r[2].w[0] + 24u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003F81A4u); c.r[7].d[0] = c.r[29].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003F81A4u) [[unlikely]] return; }
L_003F81A4:
    set32(c.r[2], ld32((c.r[29].w[0] + 4u)));
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[19].d[0]) { set32(c.r[3], ld32((c.r[16].w[0])));  goto L_003F81C4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F81B8u); set32(c.r[4], ld32((c.r[29].w[0])));  if (depth < kMaxDepth) unit_00B8(c, 143u, depth + 1u); else { c.pc = 0x003E31D0u; return; } if (c.pc != 0x003F81B8u) [[unlikely]] return; }
L_003F81B8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[18].d[0]; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003F8168u | kUnwind; return; } goto L_003F8168; } }
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.budget -= 1;
L_003F81C4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    set32(c.r[2], ld32((c.r[3].w[0] + 28u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003F81D8u); c.r[6].d[0] = c.r[29].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003F81D8u) [[unlikely]] return; }
L_003F81D8:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003F81F8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[5], ld32((c.r[4].w[0] + 6968u)));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003F2278u | kUnwind; return; } [[clang::musttail]] return unit_00BC(c, 261u, depth); }
L_003F8218:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[3], 0u + 128u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = c.r[5].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[6].d[0] == c.r[3].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_003F8250; } }
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_003F8250; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F8240u);  if (depth < kMaxDepth) unit_00BE(c, 16u, depth + 1u); else { c.pc = 0x003F8260u; return; } if (c.pc != 0x003F8240u) [[unlikely]] return; }
L_003F8240:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_003F8254; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003F8250:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_003F8254:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003F8260:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[5], ld32((c.r[4].w[0] + 6968u)));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003F2930u | kUnwind; return; } [[clang::musttail]] return unit_00BC(c, 288u, depth); }
L_003F8278:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[3].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[2], 0u - 3u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[8].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003F82E0; } }
    c.r[2].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(-2ll) ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], 0u - 2u);  goto L_003F82B0; }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_003F82C0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[8].d[0] + 0ull;  if (t) { goto L_003F82F8; } }
    c.budget -= 1;
L_003F82B0:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_003F82C8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[8].d[0] + 0ull;  if (t) { goto L_003F82F8; } }
L_003F82C0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003F8308; } }
L_003F82C8:
    c.budget -= 2;
    { const bool t = c.r[6].sd[0] > 0; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003F8308; } }
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003F4840u | kUnwind; return; } [[clang::musttail]] return unit_00BD(c, 82u, depth); }
L_003F82E0:
    c.budget -= 2;
    { const bool t = c.r[6].sd[0] > 0; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003F8308; } }
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003F4840u | kUnwind; return; } [[clang::musttail]] return unit_00BD(c, 82u, depth); }
L_003F82F8:
    c.r[5].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 3;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003F4840u | kUnwind; return; } [[clang::musttail]] return unit_00BD(c, 82u, depth); }
L_003F8308:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003F8318:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[20].d[0]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 56u), c.r[21].d[0]);
    st64((c.r[29].w[0] + 72u), c.r[23].d[0]);
    c.r[23].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 80u), c.r[30].d[0]);
    c.r[30].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 40u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 64u), c.r[22].d[0]);
    st64((c.r[29].w[0] + 88u), c.r[31].d[0]);
    set32(c.r[19], ld32((c.r[20].w[0] + 6960u)));
    set32(c.r[22], ld32((c.r[19].w[0])));
    set32(c.r[2], c.r[19].w[0] + 2364u);
    set32(c.r[6], ld32((c.r[2].w[0] + 8u)));
    set32(c.r[21], c.r[19].w[0] + 140u);
    set32(c.r[5], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 23;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F8374u); c.r[4].d[0] = c.r[22].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B9(c, 6u, depth + 1u); else { c.pc = 0x003E4100u; return; } if (c.pc != 0x003F8374u) [[unlikely]] return; }
L_003F8374:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F8384u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00B4(c, 192u, depth + 1u); else { c.pc = 0x003D1B90u; return; } if (c.pc != 0x003F8384u) [[unlikely]] return; }
L_003F8384:
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F8394u); c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B9(c, 8u, depth + 1u); else { c.pc = 0x003E4140u; return; } if (c.pc != 0x003F8394u) [[unlikely]] return; }
L_003F8394:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F83A8u); c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B4(c, 192u, depth + 1u); else { c.pc = 0x003D1B90u; return; } if (c.pc != 0x003F83A8u) [[unlikely]] return; }
L_003F83A8:
    set32(c.r[16], c.r[2].w[0] - c.r[18].w[0]);
    c.r[7].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F83C4u); c.r[7].d[0] = c.r[7].d[0] | 3844ull;  if (depth < kMaxDepth) unit_00BE(c, 17u, depth + 1u); else { c.pc = 0x003F8278u; return; } if (c.pc != 0x003F83C4u) [[unlikely]] return; }
L_003F83C4:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F83D4u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BE(c, 13u, depth + 1u); else { c.pc = 0x003F81F8u; return; } if (c.pc != 0x003F83D4u) [[unlikely]] return; }
L_003F83D4:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    set32(c.r[6], c.r[19].w[0] + 2380u);
    c.budget -= 5;
    { const bool t = c.r[17].d[0] != 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_003F84A0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F83F0u);  if (depth < kMaxDepth) unit_00B9(c, 7u, depth + 1u); else { c.pc = 0x003E4118u; return; } if (c.pc != 0x003F83F0u) [[unlikely]] return; }
L_003F83F0:
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F83FCu); c.r[5].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B8(c, 181u, depth + 1u); else { c.pc = 0x003E3E00u; return; } if (c.pc != 0x003F83FCu) [[unlikely]] return; }
L_003F83FC:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    c.r[6].d[0] = c.r[23].d[0] + 0ull;
    c.r[5].d[0] = c.r[5].d[0] | 3845ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; c.r[7].d[0] = c.r[29].d[0] + 0ull;  if (t) { goto L_003F8428; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F841Cu);  if (depth < kMaxDepth) unit_00BD(c, 82u, depth + 1u); else { c.pc = 0x003F4840u; return; } if (c.pc != 0x003F841Cu) [[unlikely]] return; }
L_003F841C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_003F84A4; } }
    c.budget -= 1;
L_003F8428:
    set32(c.r[3], ld32((c.r[21].w[0] + 48u)));
    set32(c.r[2], ld32((c.r[19].w[0] + 224u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_003F8448; } }
    st32((c.r[19].w[0] + 224u), c.r[3].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 228u), c.r[2].w[0]);  if (t) { goto L_003F844C; } }
    c.budget -= 1;
L_003F8448:
    st32((c.r[19].w[0] + 228u), 0u);
    c.budget -= 1;
L_003F844C:
    set32(c.r[8], ld32((c.r[19].w[0] + 228u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F8458u); c.r[5].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BE(c, 33u, depth + 1u); else { c.pc = 0x003F84D0u; return; } if (c.pc != 0x003F8458u) [[unlikely]] return; }
L_003F8458:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[30].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003F84A0; } }
    set32(c.r[7], ld32((c.r[19].w[0] + 228u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F8474u); set32(c.r[6], ld32((c.r[29].w[0])));  if (depth < kMaxDepth) unit_00BE(c, 43u, depth + 1u); else { c.pc = 0x003F8750u; return; } if (c.pc != 0x003F8474u) [[unlikely]] return; }
L_003F8474:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F8480u); c.r[5].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BE(c, 58u, depth + 1u); else { c.pc = 0x003F8C68u; return; } if (c.pc != 0x003F8480u) [[unlikely]] return; }
L_003F8480:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F848Cu); c.r[5].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BE(c, 61u, depth + 1u); else { c.pc = 0x003F8D10u; return; } if (c.pc != 0x003F848Cu) [[unlikely]] return; }
L_003F848C:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[22].d[0] + 0ull;
    c.r[6].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F84A0u); c.r[7].d[0] = c.r[23].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BE(c, 65u, depth + 1u); else { c.pc = 0x003F8E60u; return; } if (c.pc != 0x003F84A0u) [[unlikely]] return; }
L_003F84A0:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_003F84A4:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 56u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[23].d[0] = ld64((c.r[29].w[0] + 72u));
    c.r[30].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 88u));
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_003F84D0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    set32(c.r[2], 0u - 1u);
    st64((c.r[29].w[0] + 24u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[8].d[0] + 0ull;
    st64((c.r[29].w[0] + 40u), c.r[19].d[0]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[20].d[0]);
    c.r[20].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    set32(c.r[7], c.r[17].w[0] + 6952u);
    st64((c.r[29].w[0] + 56u), c.r[21].d[0]);
    c.r[3].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    set32(c.r[6], 0u + 4u);
    set32(c.r[21], ld32((c.r[7].w[0] + 8u)));
    st32((c.r[20].w[0]), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    set32(c.r[5], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F8528u); set32(c.r[16], ld32((c.r[7].w[0] + 16u)));  if (depth < kMaxDepth) unit_00B8(c, 147u, depth + 1u); else { c.pc = 0x003E3368u; return; } if (c.pc != 0x003F8528u) [[unlikely]] return; }
L_003F8528:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; c.r[7].d[0] = c.r[29].d[0] + 0ull;  if (t) { goto L_003F856C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F8544u);  if (depth < kMaxDepth) unit_00BF(c, 350u, depth + 1u); else { c.pc = 0x003FEF58u; return; } if (c.pc != 0x003F8544u) [[unlikely]] return; }
L_003F8544:
    set32(c.r[4], c.r[17].w[0] + 3264u);
    set32(c.r[2], ld32((c.r[29].w[0])));
    c.r[8].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], c.r[21].w[0] + 236u);
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].sd[0] < 0; c.r[7].d[0] = c.r[29].d[0] + 0ull;  if (t) { goto L_003F856C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F8568u);  if (depth < kMaxDepth) unit_00BE(c, 38u, depth + 1u); else { c.pc = 0x003F85B8u; return; } if (c.pc != 0x003F8568u) [[unlikely]] return; }
L_003F8568:
    st32((c.r[20].w[0]), c.r[2].w[0]);
    c.budget -= 1;
L_003F856C:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 56u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003F8590:
    set32(c.r[2], c.r[4].w[0] + 12u);
    set32(c.r[3], 0u - 1u);
    st32((c.r[4].w[0] + 8u), 0u);
    st32((c.r[4].w[0]), 0u);
    st32((c.r[4].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 8u), c.r[3].w[0]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[2].w[0]), c.r[3].w[0]);  c.pc = t; return; }
L_003F85B8:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 40u), c.r[21].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[22].d[0]);
    set32(c.r[22], c.r[16].w[0] + 12u);
    st64((c.r[29].w[0] + 56u), c.r[23].d[0]);
    c.r[23].d[0] = c.r[8].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 16u)));
    set32(c.r[9], ld32((c.r[17].w[0] + 276u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    c.r[21].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[21], c.r[21].w[0] + c.r[2].w[0]);
    set32(c.r[21], ld32((c.r[21].w[0] - 30560u)));
    c.budget -= 24;
    { const bool t = c.r[9].sd[0] >= 0; set32(c.r[20], ld32((c.r[19].w[0] + 20u)));  if (t) { goto L_003F863C; } }
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F8624u); c.r[5].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BE(c, 42u, depth + 1u); else { c.pc = 0x003F8730u; return; } if (c.pc != 0x003F8624u) [[unlikely]] return; }
L_003F8624:
    set32(c.r[3], ld32((c.r[18].w[0])));
    set32(c.r[3], c.r[3].w[0] - c.r[2].w[0]);
    c.r[2].d[0] = c.r[3].sd[0] < 0ll ? 1ull : 0ull;
    if (c.r[2].d[0] != 0) c.r[3].d[0] = 0ull;
    st32((c.r[17].w[0] + 276u), c.r[3].w[0]);
    c.r[9].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 6;
L_003F863C:
    set32(c.r[3], ld32((c.r[18].w[0])));
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    set32(c.r[6], 0u + 4u);
    set32(c.r[17], c.r[3].w[0] - c.r[9].w[0]);
    c.r[2].d[0] = c.r[17].sd[0] < 0ll ? 1ull : 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F865Cu); if (c.r[2].d[0] != 0) c.r[17].d[0] = 0ull;  if (depth < kMaxDepth) unit_0009(c, 37u, depth + 1u); else { c.pc = 0x00124C88u; return; } if (c.pc != 0x003F865Cu) [[unlikely]] return; }
L_003F865C:
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], 0u + 3u);  if (t) { goto L_003F86A8; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 24u)));
    ldl(c.r[4], (c.r[18].w[0] + 7u));
    ldr(c.r[4], (c.r[18].w[0]));
    set32(c.r[5], ld32((c.r[18].w[0] + 8u)));
    sdl(c.r[4], (c.r[22].w[0] + 7u));
    sdr(c.r[4], (c.r[22].w[0]));
    st32((c.r[22].w[0] + 8u), c.r[5].w[0]);
    st32((c.r[16].w[0]), c.r[20].w[0]);
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; st32((c.r[16].w[0] + 4u), 0u);  if (t) { goto L_003F86A0; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_003F86FC; } }
    c.budget -= 1;
L_003F86A0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 8u), 0u);  if (t) { goto L_003F86FC; } }
L_003F86A8:
    c.budget -= 2;
    if (c.r[23].d[0] == 0ull) { set32(c.r[2], ld32((c.r[16].w[0])));  goto L_003F86D0; }
    set32(c.r[3], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    st32((c.r[16].w[0]), 0u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[16].w[0] + 8u), 0u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 8;
L_003F86D0:
    set32(c.r[3], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[2], c.r[20].w[0] - c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.r[6].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    if (c.r[6].d[0] == 0) c.r[3].d[0] = c.r[2].d[0];
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F86F0u); st32((c.r[16].w[0] + 8u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_00BE(c, 42u, depth + 1u); else { c.pc = 0x003F8730u; return; } if (c.pc != 0x003F86F0u) [[unlikely]] return; }
L_003F86F0:
    set32(c.r[17], c.r[17].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = c.r[17].sd[0] < 0ll ? 1ull : 0ull;
    if (c.r[2].d[0] != 0) c.r[17].d[0] = 0ull;
    c.budget -= 3;
L_003F86FC:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[23].d[0] = ld64((c.r[29].w[0] + 56u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003F8730:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x01570000u);
    c.r[5].d[0] = c.r[5].d[0] | 21152ull;
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 8;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003E66B0u | kUnwind; return; } [[clang::musttail]] return unit_00B9(c, 198u, depth); }
L_003F8750:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[5], 0u + 52u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 40u), c.r[31].d[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F8784u); c.r[20].d[0] = c.r[7].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C0(c, 20u, depth + 1u); else { c.pc = 0x00400258u; return; } if (c.pc != 0x003F8784u) [[unlikely]] return; }
L_003F8784:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_003F87D0; } }
    c.budget -= 2;
    { const bool t = c.r[19].sd[0] >= 0; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003F87BC; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 48u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], 0u + 52u);  if (t) { goto L_003F87C0; } }
    c.budget -= 2;
    if (c.r[20].d[0] == 0ull) { set32(c.r[2], 0u + 1u);  goto L_003F87D0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F87B4u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BE(c, 47u, depth + 1u); else { c.pc = 0x003F8828u; return; } if (c.pc != 0x003F87B4u) [[unlikely]] return; }
L_003F87B4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003F87CC; } }
L_003F87BC:
    set32(c.r[5], 0u + 52u);
    c.budget -= 1;
L_003F87C0:
    set32(c.r[6], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F87CCu); set32(c.r[16], 0u + 1u);  if (depth < kMaxDepth) unit_00C0(c, 9u, depth + 1u); else { c.pc = 0x00400090u; return; } if (c.pc != 0x003F87CCu) [[unlikely]] return; }
L_003F87CC:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_003F87D0:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != c.r[2].d[0]; c.r[16].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_003F8808; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[7].d[0] = c.r[20].d[0] + 0ull;
    c.r[20].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 40u));
    c.budget -= 11;
    { set32(c.r[29], c.r[29].w[0] + 48u);  goto L_003F88B8; }
L_003F8808:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 40u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003F8828:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[2].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 56u), c.r[31].d[0]);
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[16].w[0] + 3332u)));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == 0ull; c.r[5].d[0] = c.r[29].d[0] + 0ull;  if (t) { goto L_003F88A8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F8854u);  if (depth < kMaxDepth) unit_00BE(c, 64u, depth + 1u); else { c.pc = 0x003F8E20u; return; } if (c.pc != 0x003F8854u) [[unlikely]] return; }
L_003F8854:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F8864u); set32(c.r[6], c.r[29].w[0] + 36u);  if (depth < kMaxDepth) unit_00C0(c, 135u, depth + 1u); else { c.pc = 0x004015F0u; return; } if (c.pc != 0x003F8864u) [[unlikely]] return; }
L_003F8864:
    set32(c.r[4], c.r[16].w[0] + 3336u);
    set32(c.r[5], c.r[29].w[0] + 40u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F8874u); set32(c.r[6], c.r[29].w[0] + 36u);  if (depth < kMaxDepth) unit_00C0(c, 135u, depth + 1u); else { c.pc = 0x004015F0u; return; } if (c.pc != 0x003F8874u) [[unlikely]] return; }
L_003F8874:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F8880u); set32(c.r[5], 0u + 53u);  if (depth < kMaxDepth) unit_00C0(c, 20u, depth + 1u); else { c.pc = 0x00400258u; return; } if (c.pc != 0x003F8880u) [[unlikely]] return; }
L_003F8880:
    set32(c.r[6], ld32((c.r[29].w[0] + 32u)));
    set32(c.r[5], ld32((c.r[29].w[0] + 40u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 36u)));
    c.r[4].d[0] = c.r[5].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    mmi::mult(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_003F88A8; } }
    set32(c.r[2], c.r[5].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = c.r[6].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 3;
L_003F88A8:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 56u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003F88B8:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[3].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[16].d[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 40u), c.r[31].d[0]);
    set32(c.r[8], c.r[4].w[0] + 3336u);
    set32(c.r[2], c.r[4].w[0] + 3332u);
    set32(c.r[7], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[9], ld32((c.r[16].w[0] + 28u)));
    c.budget -= 11;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[5], ld32((c.r[16].w[0] + 16u)));  if (t) { goto L_003F8908; } }
    c.budget -= 2;
    if (c.r[6].sd[0] < 0) { set32(c.r[2], ld32((c.r[2].w[0])));  goto L_003F890C; }
    c.r[4].d[0] = c.r[6].d[0] + 0ull;
    c.r[6].d[0] = c.r[9].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F88FCu); c.r[8].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BE(c, 55u, depth + 1u); else { c.pc = 0x003F89C8u; return; } if (c.pc != 0x003F88FCu) [[unlikely]] return; }
L_003F88FC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[29].w[0] + 8u)));  if (t) { goto L_003F8950; } }
    c.budget -= 1;
L_003F8908:
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 1;
L_003F890C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003F8938; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 10928u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_003F89BC; }
    st32((c.r[16].w[0] + 44u), 0u);
    st32((c.r[16].w[0] + 28u), 0u);
    st32((c.r[16].w[0] + 32u), 0u);
    st32((c.r[16].w[0] + 36u), 0u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 40u), 0u);  if (t) { goto L_003F89B8; } }
L_003F8938:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; c.r[4].d[0] = c.r[8].d[0] + 0ull;  if (t) { goto L_003F8970; } }
    c.r[6].d[0] = c.r[9].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F894Cu); c.r[7].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BE(c, 57u, depth + 1u); else { c.pc = 0x003F8BB0u; return; } if (c.pc != 0x003F894Cu) [[unlikely]] return; }
L_003F894C:
    set32(c.r[3], ld32((c.r[29].w[0] + 8u)));
    c.budget -= 1;
L_003F8950:
    set32(c.r[4], ld32((c.r[29].w[0] + 12u)));
    set32(c.r[5], ld32((c.r[29].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 20u)));
    st32((c.r[16].w[0] + 32u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 44u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 36u), c.r[4].w[0]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 40u), c.r[5].w[0]);  if (t) { goto L_003F89B8; } }
L_003F8970:
    set32(c.r[2], ld32((c.r[8].w[0] + 8u)));
    st32((c.r[16].w[0] + 32u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[8].w[0] + 12u)));
    st32((c.r[16].w[0] + 36u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[8].w[0] + 16u)));
    st32((c.r[16].w[0] + 40u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[8].w[0] + 20u)));
    st32((c.r[16].w[0] + 44u), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[8].w[0] + 24u)));
    set32(c.r[3], c.r[3].w[0] - c.r[7].w[0]);
    set32(c.r[2], c.r[3].w[0] + 823u);
    set32(c.r[3], c.r[3].w[0] + 1846u);
    c.r[4].d[0] = c.r[2].sd[0] < 0ll ? 1ull : 0ull;
    if (c.r[4].d[0] != 0) c.r[2].d[0] = c.r[3].d[0];
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 10));
    set32(c.r[2], c.r[2].w[0] << 10);
    set32(c.r[2], c.r[7].w[0] + c.r[2].w[0]);
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 18;
L_003F89B8:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_003F89BC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 40u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003F89C8:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[2], c.r[5].w[0] << 2);
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    c.r[19].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[19], c.r[19].w[0] + c.r[2].w[0]);
    set32(c.r[19], ld32((c.r[19].w[0] - 30560u)));
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.r[6].sd[0] = static_cast<std::int32_t>(0x01570000u);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[6].d[0] | 21152ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[16].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 40u), c.r[31].d[0]);
    c.r[18].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[18], c.r[18].w[0] + c.r[2].w[0]);
    set32(c.r[18], ld32((c.r[18].w[0] - 31160u)));
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F8A1Cu); c.r[20].d[0] = c.r[8].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B9(c, 200u, depth + 1u); else { c.pc = 0x003E6720u; return; } if (c.pc != 0x003F8A1Cu) [[unlikely]] return; }
L_003F8A1C:
    set32(c.r[3], c.r[2].w[0] - c.r[16].w[0]);
    c.r[2].d[0] = c.r[3].sd[0] < 0ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == 0ull; if (c.r[2].d[0] != 0) c.r[3].d[0] = 0ull;  if (t) { goto L_003F8B38; } }
    set32(c.r[2], 0u + 29970u);
    c.budget -= 3;
    { const bool t = c.r[19].d[0] == c.r[2].d[0]; c.r[2].d[0] = 0ull | 59940ull;  if (t) { goto L_003F8A48; } }
    c.budget -= 2;
    if (c.r[19].d[0] != c.r[2].d[0]) { mmi::div(c, 0, c.r[3].w[0], c.r[18].w[0]);  goto L_003F8B3C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);  if (t) { goto L_003F8A58; } }
L_003F8A48:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[8], c.r[2].w[0] - 31120u);  if (t) { goto L_003F8A5C; } }
    c.budget -= 1;
L_003F8A58:
    set32(c.r[8], c.r[2].w[0] - 31088u);
    c.budget -= 1;
L_003F8A5C:
    set32(c.r[2], ld32((c.r[8].w[0])));
    mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { breakpoint(c, 0x003F8A68u);  goto L_003F8A6C; }
L_003F8A6C:
    set32(c.r[3], ld32((c.r[8].w[0] + 4u)));
    set32(c.r[6], ld32((c.r[8].w[0] + 8u)));
    c.r[4].d[0] = c.hi.d[0];
    c.r[5].d[0] = c.lo.d[0];
    mmi::div(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[9].d[0] = c.r[5].d[0] + 0ull;
    c.r[2].d[0] = c.hi.d[0];
    c.r[4].d[0] = c.lo.d[0];
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].d[0] = c.r[3].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 12;
    { const bool t = c.r[2].d[0] == 0ull; c.r[10].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003F8AC0; } }
    set32(c.r[2], ld32((c.r[8].w[0] + 20u)));
    c.r[5].d[0] = 0ull + 0ull;
    mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { breakpoint(c, 0x003F8AACu);  goto L_003F8AB0; }
L_003F8AB0:
    c.r[3].d[0] = c.lo.d[0];
    c.r[4].d[0] = c.hi.d[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = c.r[3].d[0] + 0ull;  if (t) { goto L_003F8B20; } }
L_003F8AC0:
    set32(c.r[2], ld32((c.r[8].w[0] + 12u)));
    set32(c.r[3], c.r[3].w[0] - c.r[6].w[0]);
    mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { breakpoint(c, 0x003F8AD0u);  goto L_003F8AD4; }
L_003F8AD4:
    set32(c.r[6], ld32((c.r[8].w[0] + 16u)));
    c.r[3].d[0] = c.hi.d[0];
    c.r[4].d[0] = c.lo.d[0];
    c.r[2].d[0] = c.r[3].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], c.r[4].w[0] + 1u);  if (t) { goto L_003F8B00; } }
    set32(c.r[2], ld32((c.r[8].w[0] + 28u)));
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[7], c.r[3].w[0] + c.r[2].w[0]);  if (t) { goto L_003F8B24; } }
    c.budget -= 1;
L_003F8B00:
    set32(c.r[2], ld32((c.r[8].w[0] + 20u)));
    set32(c.r[3], c.r[3].w[0] - c.r[6].w[0]);
    mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { breakpoint(c, 0x003F8B10u);  goto L_003F8B14; }
L_003F8B14:
    c.r[3].d[0] = c.lo.d[0];
    c.r[4].d[0] = c.hi.d[0];
    set32(c.r[6], c.r[3].w[0] + 1u);
    c.budget -= 3;
L_003F8B20:
    c.r[7].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 1;
L_003F8B24:
    set32(c.r[2], ld32((c.r[8].w[0] + 24u)));
    mmi::mult(c, 0, c.r[2].w[0], c.r[10].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[5], c.r[3].w[0] + c.r[5].w[0]);  if (t) { goto L_003F8B7C; } }
    c.budget -= 1;
L_003F8B38:
    mmi::div(c, 0, c.r[3].w[0], c.r[18].w[0]);
    c.budget -= 1;
L_003F8B3C:
    set32(c.r[3], 0u + 60u);
    set32(c.r[4], 0u + 60u);
    c.budget -= 4;
    if (c.r[18].d[0] == 0ull) { breakpoint(c, 0x003F8B48u);  goto L_003F8B4C; }
L_003F8B4C:
    set32(c.r[5], 0u + 60u);
    set32(c.r[6], 0u + 60u);
    c.r[2].d[0] = c.lo.d[0];
    c.r[7].d[0] = c.hi.d[0];
    mmi::div(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.r[4].d[0] = c.hi.d[0];
    mmi::div(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[6].d[0] = c.r[4].d[0] + 0ull;
    c.r[2].d[0] = c.lo.d[0];
    c.r[5].d[0] = c.hi.d[0];
    c.r[9].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 12;
L_003F8B7C:
    st32((c.r[20].w[0] + 20u), c.r[7].w[0]);
    st32((c.r[20].w[0] + 8u), c.r[9].w[0]);
    st32((c.r[20].w[0] + 12u), c.r[5].w[0]);
    st32((c.r[20].w[0] + 16u), c.r[6].w[0]);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 40u));
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003F8BB0:
    set32(c.r[8], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[2], ld32((c.r[4].w[0] + 20u)));
    set32(c.r[9], 0u + 60u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] - 31160u)));
    set32(c.r[13], 0u + 60u);
    set32(c.r[2], c.r[2].w[0] + c.r[8].w[0]);
    set32(c.r[8], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[11], c.r[2].w[0] + 1u);
    set32(c.r[2], 0u + 60u);
    mmi::div(c, 0, c.r[11].w[0], c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[14], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[12], 0u + 60u);
    c.budget -= 18;
    if (c.r[3].d[0] == 0ull) { breakpoint(c, 0x003F8BF4u);  goto L_003F8BF8; }
L_003F8BF8:
    c.r[10].d[0] = c.lo.d[0];
    c.r[11].d[0] = c.hi.d[0];
    set32(c.r[5], c.r[5].w[0] + c.r[10].w[0]);
    mmi::div(c, 0, c.r[5].w[0], c.r[9].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    c.r[10].d[0] = c.hi.d[0];
    set32(c.r[8], c.r[8].w[0] + c.r[5].w[0]);
    mmi::div(c, 0, c.r[8].w[0], c.r[9].w[0]);
    c.r[8].d[0] = c.lo.d[0];
    c.r[4].d[0] = c.hi.d[0];
    c.budget -= 12;
    { const bool t = c.r[6].d[0] == 0ull; set32(c.r[14], c.r[14].w[0] + c.r[8].w[0]);  if (t) { goto L_003F8C54; } }
    c.budget -= 2;
    if (c.r[10].d[0] != 0ull) { st32((c.r[7].w[0] + 20u), c.r[11].w[0]);  goto L_003F8C58; }
    set32(c.r[2], 0u + 10u);
    mmi::div(c, 0, c.r[4].w[0], c.r[2].w[0]);
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { breakpoint(c, 0x003F8C3Cu);  goto L_003F8C40; }
L_003F8C40:
    c.r[3].d[0] = c.hi.d[0];
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[3].d[0] = c.r[11].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;  if (t) { goto L_003F8C54; } }
    set32(c.r[2], 0u + 2u);
    if (c.r[3].d[0] != 0) c.r[11].d[0] = c.r[2].d[0];
    c.budget -= 2;
L_003F8C54:
    st32((c.r[7].w[0] + 20u), c.r[11].w[0]);
    c.budget -= 1;
L_003F8C58:
    st32((c.r[7].w[0] + 8u), c.r[14].w[0]);
    st32((c.r[7].w[0] + 12u), c.r[4].w[0]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[7].w[0] + 16u), c.r[10].w[0]);  c.pc = t; return; }
L_003F8C68:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[16].d[0]);
    st64((c.r[29].w[0] + 56u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    set32(c.r[16], c.r[17].w[0] + 3292u);
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull; c.r[5].d[0] = c.r[29].d[0] + 0ull;  if (t) { goto L_003F8CFC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F8C98u);  if (depth < kMaxDepth) unit_00BE(c, 64u, depth + 1u); else { c.pc = 0x003F8E20u; return; } if (c.pc != 0x003F8C98u) [[unlikely]] return; }
L_003F8C98:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 32u);
    set32(c.r[6], c.r[29].w[0] + 36u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F8CACu); st32((c.r[29].w[0] + 24u), 0u);  if (depth < kMaxDepth) unit_00C0(c, 135u, depth + 1u); else { c.pc = 0x004015F0u; return; } if (c.pc != 0x003F8CACu) [[unlikely]] return; }
L_003F8CAC:
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], ld32((c.r[29].w[0] + 32u)));
    set32(c.r[4], ld32((c.r[29].w[0] + 36u)));
    ldl(c.r[5], (c.r[29].w[0] + 7u));
    ldr(c.r[5], (c.r[29].w[0]));
    ldl(c.r[6], (c.r[29].w[0] + 15u));
    ldr(c.r[6], (c.r[29].w[0] + 8u));
    ldl(c.r[7], (c.r[29].w[0] + 23u));
    ldr(c.r[7], (c.r[29].w[0] + 16u));
    set32(c.r[8], ld32((c.r[29].w[0] + 24u)));
    sdl(c.r[5], (c.r[17].w[0] + 3303u));
    sdr(c.r[5], (c.r[17].w[0] + 3296u));
    sdl(c.r[6], (c.r[17].w[0] + 3311u));
    sdr(c.r[6], (c.r[17].w[0] + 3304u));
    sdl(c.r[7], (c.r[17].w[0] + 3319u));
    sdr(c.r[7], (c.r[17].w[0] + 3312u));
    st32((c.r[17].w[0] + 3320u), c.r[8].w[0]);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    st32((c.r[16].w[0] + 32u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 36u), c.r[4].w[0]);
    c.budget -= 20;
L_003F8CFC:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 56u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003F8D10:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    st64((c.r[29].w[0] + 56u), c.r[17].d[0]);
    set32(c.r[17], c.r[16].w[0] + 3292u);
    st64((c.r[29].w[0] + 64u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 72u), c.r[31].d[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F8D3Cu); set32(c.r[18], c.r[16].w[0] + 3412u);  if (depth < kMaxDepth) unit_00BE(c, 64u, depth + 1u); else { c.pc = 0x003F8E20u; return; } if (c.pc != 0x003F8D3Cu) [[unlikely]] return; }
L_003F8D3C:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F8D4Cu); set32(c.r[6], c.r[29].w[0] + 36u);  if (depth < kMaxDepth) unit_00C0(c, 135u, depth + 1u); else { c.pc = 0x004015F0u; return; } if (c.pc != 0x003F8D4Cu) [[unlikely]] return; }
L_003F8D4C:
    set32(c.r[5], 0u + 1u);
    ldl(c.r[2], (c.r[29].w[0] + 7u));
    ldr(c.r[2], (c.r[29].w[0]));
    ldl(c.r[3], (c.r[29].w[0] + 15u));
    ldr(c.r[3], (c.r[29].w[0] + 8u));
    ldl(c.r[4], (c.r[29].w[0] + 23u));
    ldr(c.r[4], (c.r[29].w[0] + 16u));
    set32(c.r[6], ld32((c.r[29].w[0] + 24u)));
    sdl(c.r[2], (c.r[16].w[0] + 3423u));
    sdr(c.r[2], (c.r[16].w[0] + 3416u));
    sdl(c.r[3], (c.r[16].w[0] + 3431u));
    sdr(c.r[3], (c.r[16].w[0] + 3424u));
    sdl(c.r[4], (c.r[16].w[0] + 3439u));
    sdr(c.r[4], (c.r[16].w[0] + 3432u));
    st32((c.r[16].w[0] + 3440u), c.r[6].w[0]);
    set32(c.r[16], c.r[16].w[0] + 3332u);
    set32(c.r[2], ld32((c.r[17].w[0] + 32u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 32u)));
    set32(c.r[4], ld32((c.r[29].w[0] + 36u)));
    set32(c.r[3], c.r[3].w[0] - c.r[2].w[0]);
    st32((c.r[18].w[0]), c.r[5].w[0]);
    st32((c.r[18].w[0] + 32u), c.r[3].w[0]);
    st32((c.r[18].w[0] + 36u), c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 32u)));
    c.r[3].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 27;
    if (c.r[3].d[0] != 0ull) { c.r[16].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_003F8E0C; }
    ldl(c.r[2], (c.r[18].w[0] + 7u));
    ldr(c.r[2], (c.r[18].w[0]));
    ldl(c.r[3], (c.r[18].w[0] + 15u));
    ldr(c.r[3], (c.r[18].w[0] + 8u));
    ldl(c.r[4], (c.r[18].w[0] + 23u));
    ldr(c.r[4], (c.r[18].w[0] + 16u));
    ldl(c.r[5], (c.r[18].w[0] + 31u));
    ldr(c.r[5], (c.r[18].w[0] + 24u));
    sdl(c.r[2], (c.r[16].w[0] + 7u));
    sdr(c.r[2], (c.r[16].w[0]));
    sdl(c.r[3], (c.r[16].w[0] + 15u));
    sdr(c.r[3], (c.r[16].w[0] + 8u));
    sdl(c.r[4], (c.r[16].w[0] + 23u));
    sdr(c.r[4], (c.r[16].w[0] + 16u));
    sdl(c.r[5], (c.r[16].w[0] + 31u));
    sdr(c.r[5], (c.r[16].w[0] + 24u));
    ldl(c.r[2], (c.r[18].w[0] + 39u));
    ldr(c.r[2], (c.r[18].w[0] + 32u));
    sdl(c.r[2], (c.r[16].w[0] + 39u));
    sdr(c.r[2], (c.r[16].w[0] + 32u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 21;
L_003F8E0C:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 56u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 72u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003F8E20:
    set32(c.r[2], ld32((c.r[4].w[0] + 16u)));
    st32((c.r[5].w[0]), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 28u)));
    st32((c.r[5].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 32u)));
    st32((c.r[5].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 36u)));
    st32((c.r[5].w[0] + 12u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 40u)));
    st32((c.r[5].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 44u)));
    st32((c.r[5].w[0] + 20u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 20u)));
    c.budget -= 15;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[5].w[0] + 24u), c.r[2].w[0]);  c.pc = t; return; }
L_003F8E60:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[2].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    set32(c.r[18], c.r[16].w[0] + 2316u);
    st64((c.r[29].w[0] + 48u), c.r[20].d[0]);
    c.r[20].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 56u), c.r[21].d[0]);
    c.r[21].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 40u), c.r[19].d[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[18].w[0] + 16u)));
    c.budget -= 19;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[19], ld32((c.r[16].w[0] + 6960u)));  if (t) { goto L_003F8F68; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F8EB4u);  if (depth < kMaxDepth) unit_00B8(c, 185u, depth + 1u); else { c.pc = 0x003E3F30u; return; } if (c.pc != 0x003F8EB4u) [[unlikely]] return; }
L_003F8EB4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003F8ED8; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F8ECCu); c.r[5].d[0] = c.r[5].d[0] | 3862ull;  if (depth < kMaxDepth) unit_00BD(c, 82u, depth + 1u); else { c.pc = 0x003F4840u; return; } if (c.pc != 0x003F8ECCu) [[unlikely]] return; }
L_003F8ECC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_003F8F6C; } }
    c.budget -= 1;
L_003F8ED8:
    set32(c.r[5], c.r[29].w[0] + 4u);
    set32(c.r[6], c.r[29].w[0] + 8u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F8EE8u); set32(c.r[7], c.r[29].w[0] + 12u);  if (depth < kMaxDepth) unit_00B8(c, 187u, depth + 1u); else { c.pc = 0x003E3F90u; return; } if (c.pc != 0x003F8EE8u) [[unlikely]] return; }
L_003F8EE8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F8EF4u); set32(c.r[5], 0u + 60u);  if (depth < kMaxDepth) unit_00C0(c, 20u, depth + 1u); else { c.pc = 0x00400258u; return; } if (c.pc != 0x003F8EF4u) [[unlikely]] return; }
L_003F8EF4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], 0u + 1u);  if (t) { goto L_003F8F08; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 232u), 0u);  if (t) { goto L_003F8F38; } }
L_003F8F08:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F8F10u);  if (depth < kMaxDepth) unit_00BC(c, 254u, depth + 1u); else { c.pc = 0x003F2138u; return; } if (c.pc != 0x003F8F10u) [[unlikely]] return; }
L_003F8F10:
    set32(c.r[3], ld32((c.r[29].w[0] + 12u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u - 1u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[2].d[0] = c.r[3].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;  if (t) { goto L_003F8F30; } }
    set32(c.r[3], ld32((c.r[29].w[0] + 4u)));
    st32((c.r[29].w[0] + 12u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[3].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
L_003F8F30:
    if (c.r[2].d[0] == 0) c.r[3].d[0] = c.r[4].d[0];
    st32((c.r[19].w[0] + 232u), c.r[3].w[0]);
    c.budget -= 2;
L_003F8F38:
    set32(c.r[5], ld32((c.r[29].w[0])));
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F8F48u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BE(c, 74u, depth + 1u); else { c.pc = 0x003F8F90u; return; } if (c.pc != 0x003F8F48u) [[unlikely]] return; }
L_003F8F48:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[29].w[0])));
    c.r[6].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F8F5Cu); set32(c.r[7], ld32((c.r[29].w[0] + 4u)));  if (depth < kMaxDepth) unit_00BE(c, 77u, depth + 1u); else { c.pc = 0x003F90A8u; return; } if (c.pc != 0x003F8F5Cu) [[unlikely]] return; }
L_003F8F5C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F8F68u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BE(c, 78u, depth + 1u); else { c.pc = 0x003F90E0u; return; } if (c.pc != 0x003F8F68u) [[unlikely]] return; }
L_003F8F68:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_003F8F6C:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 56u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003F8F90:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F8FB8u); c.r[19].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BE(c, 242u, depth + 1u); else { c.pc = 0x003FAF88u; return; } if (c.pc != 0x003F8FB8u) [[unlikely]] return; }
L_003F8FB8:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_003F908C; }
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_003F908C; }
    set32(c.r[6], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[7], 0u + 512u);
    set32(c.r[3], c.r[16].w[0] + 52u);
    set32(c.r[5], ld32((c.r[18].w[0])));
    c.r[2].d[0] = c.r[6].sd[0] < 513ll ? 1ull : 0ull;
    c.r[4].d[0] = c.r[3].d[0] + 0ull;
    if (c.r[2].d[0] == 0) c.r[6].d[0] = c.r[7].d[0];
    set32(c.r[18], c.r[19].w[0] + 3264u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F8FF8u); st32((c.r[3].w[0] + 512u), c.r[6].w[0]);  if (depth < kMaxDepth) unit_00B8(c, 36u, depth + 1u); else { c.pc = 0x003E0A78u; return; } if (c.pc != 0x003F8FF8u) [[unlikely]] return; }
L_003F8FF8:
    set32(c.r[3], c.r[17].w[0] << 1);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00030000u);
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    set32(c.r[3], c.r[3].w[0] << 3);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] != c.r[2].d[0]; set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);  if (t) { goto L_003F9020; } }
    st32((c.r[16].w[0] + 4u), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 8u), 0u);  if (t) { goto L_003F9030; } }
L_003F9020:
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[2], 0u + 1u);
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 4;
L_003F9030:
    ldl(c.r[2], (c.r[18].w[0] + 35u));
    ldr(c.r[2], (c.r[18].w[0] + 28u));
    ldl(c.r[3], (c.r[18].w[0] + 43u));
    ldr(c.r[3], (c.r[18].w[0] + 36u));
    ldl(c.r[4], (c.r[18].w[0] + 51u));
    ldr(c.r[4], (c.r[18].w[0] + 44u));
    ldl(c.r[5], (c.r[18].w[0] + 59u));
    ldr(c.r[5], (c.r[18].w[0] + 52u));
    sdl(c.r[2], (c.r[16].w[0] + 19u));
    sdr(c.r[2], (c.r[16].w[0] + 12u));
    sdl(c.r[3], (c.r[16].w[0] + 27u));
    sdr(c.r[3], (c.r[16].w[0] + 20u));
    sdl(c.r[4], (c.r[16].w[0] + 35u));
    sdr(c.r[4], (c.r[16].w[0] + 28u));
    sdl(c.r[5], (c.r[16].w[0] + 43u));
    sdr(c.r[5], (c.r[16].w[0] + 36u));
    ldl(c.r[2], (c.r[18].w[0] + 67u));
    ldr(c.r[2], (c.r[18].w[0] + 60u));
    sdl(c.r[2], (c.r[16].w[0] + 51u));
    sdr(c.r[2], (c.r[16].w[0] + 44u));
    set32(c.r[2], 0u + 1u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 23;
L_003F908C:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003F90A8:
    set32(c.r[3], ld32((c.r[6].w[0])));
    set32(c.r[8], ld32((c.r[6].w[0] + 16u)));
    st32((c.r[4].w[0]), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[6].w[0] + 4u)));
    st32((c.r[4].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[6].w[0] + 8u)));
    st32((c.r[4].w[0] + 8u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[6].w[0] + 12u)));
    st32((c.r[4].w[0] + 32u), c.r[7].w[0]);
    st32((c.r[4].w[0] + 12u), c.r[2].w[0]);
    st32((c.r[4].w[0] + 20u), c.r[8].w[0]);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 16u), c.r[5].w[0]);  c.pc = t; return; }
L_003F90E0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[13].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[12], ld32((c.r[13].w[0] + 6960u)));
    set32(c.r[7], ld32((c.r[5].w[0] + 4u)));
    set32(c.r[11], c.r[12].w[0] + 4u);
    set32(c.r[6], ld32((c.r[5].w[0])));
    set32(c.r[2], ld32((c.r[11].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[11].w[0] + 12u)));
    mmi::mult(c, 0, c.r[6].w[0], c.r[7].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    set32(c.r[14], ld32((c.r[13].w[0] + 56u)));
    mmi::mult(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.r[2].d[0] = c.r[2].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 15;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[9], ld32((c.r[11].w[0] + 28u)));  if (t) { goto L_003F9130; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[5].d[0] = c.r[5].d[0] | 3863ull;
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003F4840u | kUnwind; return; } [[clang::musttail]] return unit_00BD(c, 82u, depth); }
L_003F9130:
    set32(c.r[5], c.r[6].w[0] + 15u);
    c.r[3].d[0] = c.r[6].sd[0] < 0ll ? 1ull : 0ull;
    c.r[2].d[0] = c.r[7].sd[0] < 0ll ? 1ull : 0ull;
    set32(c.r[4], c.r[7].w[0] + 15u);
    if (c.r[3].d[0] != 0) c.r[6].d[0] = c.r[5].d[0];
    set32(c.r[3], 0u + 2u);
    if (c.r[2].d[0] != 0) c.r[7].d[0] = c.r[4].d[0];
    set32(c.r[5], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[6].w[0]) >> 4));
    c.budget -= 10;
    { const bool t = c.r[14].d[0] != c.r[3].d[0]; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[7].w[0]) >> 4));  if (t) { goto L_003F9168; } }
    mmi::mult(c, 0, c.r[5].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] << 10);  if (t) { goto L_003F9178; } }
    c.budget -= 1;
L_003F9168:
    mmi::mult(c, 0, c.r[5].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 7);
    c.budget -= 4;
L_003F9178:
    set32(c.r[10], c.r[2].w[0] + 64u);
    set32(c.r[3], ld32((c.r[11].w[0] + 20u)));
    set32(c.r[8], 0u + 2u);
    set32(c.r[2], ld32((c.r[11].w[0] + 24u)));
    set32(c.r[7], c.r[3].w[0] + 15u);
    c.r[5].d[0] = c.r[3].sd[0] < 0ll ? 1ull : 0ull;
    set32(c.r[6], c.r[2].w[0] + 15u);
    c.r[4].d[0] = c.r[2].sd[0] < 0ll ? 1ull : 0ull;
    if (c.r[5].d[0] != 0) c.r[3].d[0] = c.r[7].d[0];
    if (c.r[4].d[0] != 0) c.r[2].d[0] = c.r[6].d[0];
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 4));
    c.budget -= 13;
    { const bool t = c.r[14].d[0] != c.r[8].d[0]; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 4));  if (t) { goto L_003F91D0; } }
    mmi::mult(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] << 10);
    set32(c.r[2], c.r[2].w[0] + 64u);
    c.r[2].d[0] = c.r[2].d[0] < c.r[10].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003F91F0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[11].w[0] + 32u)));  if (t) { goto L_003F9208; } }
    c.budget -= 1;
L_003F91D0:
    mmi::mult(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 7);
    set32(c.r[2], c.r[2].w[0] + 64u);
    c.r[2].d[0] = c.r[2].d[0] < c.r[10].d[0] ? 1ull : 0ull;
    c.budget -= 8;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[11].w[0] + 32u)));  goto L_003F9208; }
L_003F91F0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[4].d[0] = c.r[13].d[0] + 0ull;
    c.r[5].d[0] = c.r[5].d[0] | 3864ull;
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003F4840u | kUnwind; return; } [[clang::musttail]] return unit_00BD(c, 82u, depth); }
L_003F9208:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003F9248; } }
    c.budget -= 2;
    { const bool t = c.r[9].sd[0] <= 0; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_003F9274; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], c.r[12].w[0] + 48u);
    c.budget -= 2;
L_003F9220:
    set32(c.r[5], c.r[5].w[0] + 1u);
    st32((c.r[3].w[0]), c.r[4].w[0]);
    c.r[2].d[0] = c.r[5].sd[0] < c.r[9].sd[0] ? 1ull : 0ull;
    set32(c.r[3], c.r[3].w[0] + 4u);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[4].w[0] + c.r[10].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003F9220u | kUnwind; return; } goto L_003F9220; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[12].w[0] + 312u), c.r[9].w[0]);  if (t) { goto L_003F9278; } }
    c.budget -= 1;
L_003F9248:
    c.budget -= 2;
    if (c.r[9].sd[0] <= 0) { st32((c.r[12].w[0] + 312u), c.r[9].w[0]);  goto L_003F9278; }
    c.r[5].d[0] = c.r[9].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 1u);
    c.budget -= 2;
L_003F9258:
    c.budget -= 7;
    { const bool t = c.r[5].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] - 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003F9258u | kUnwind; return; } goto L_003F9258; } }
L_003F9274:
    st32((c.r[12].w[0] + 312u), c.r[9].w[0]);
    c.budget -= 1;
L_003F9278:
    set32(c.r[5], c.r[12].w[0] + 48u);
    c.r[6].d[0] = c.r[9].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F9288u); set32(c.r[4], c.r[12].w[0] + 316u);  if (depth < kMaxDepth) unit_00BE(c, 203u, depth + 1u); else { c.pc = 0x003FA820u; return; } if (c.pc != 0x003F9288u) [[unlikely]] return; }
L_003F9288:
    c.r[2].d[0] = 0ull + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003F9298:
    set32(c.r[2], ld32((c.r[4].w[0] + 3552u)));
    c.r[2].d[0] = ~(0ull | c.r[2].d[0]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] >> 31);  c.pc = t; return; }
L_003F92A8:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    set32(c.r[18], 0u + 1u);
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[20].d[0]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    set32(c.r[5], 0u + 47u);
    st64((c.r[29].w[0] + 40u), c.r[31].d[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F92DCu); set32(c.r[17], ld32((c.r[16].w[0] + 6960u)));  if (depth < kMaxDepth) unit_00C0(c, 20u, depth + 1u); else { c.pc = 0x00400258u; return; } if (c.pc != 0x003F92DCu) [[unlikely]] return; }
L_003F92DC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[18].d[0]; set32(c.r[19], c.r[17].w[0] + 140u);  if (t) { goto L_003F9378; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F92F0u); set32(c.r[5], 0u + 39u);  if (depth < kMaxDepth) unit_00C0(c, 20u, depth + 1u); else { c.pc = 0x00400258u; return; } if (c.pc != 0x003F92F0u) [[unlikely]] return; }
L_003F92F0:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[18].d[0]) { set32(c.r[3], ld32((c.r[17].w[0] + 308u)));  goto L_003F9300; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003F9378; } }
L_003F9300:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003F9378; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F9314u); set32(c.r[17], ld32((c.r[19].w[0] + 24u)));  if (depth < kMaxDepth) unit_00BE(c, 95u, depth + 1u); else { c.pc = 0x003F94C0u; return; } if (c.pc != 0x003F9314u) [[unlikely]] return; }
L_003F9314:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[18], 0u + 1u);  if (t) { goto L_003F9364; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F9328u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BE(c, 97u, depth + 1u); else { c.pc = 0x003F9510u; return; } if (c.pc != 0x003F9328u) [[unlikely]] return; }
L_003F9328:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003F9368; } }
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F933Cu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BE(c, 98u, depth + 1u); else { c.pc = 0x003F9560u; return; } if (c.pc != 0x003F933Cu) [[unlikely]] return; }
L_003F933C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003F9368; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F934Cu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BE(c, 92u, depth + 1u); else { c.pc = 0x003F9398u; return; } if (c.pc != 0x003F934Cu) [[unlikely]] return; }
L_003F934C:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_003F9368; }
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F9360u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BE(c, 101u, depth + 1u); else { c.pc = 0x003F95E8u; return; } if (c.pc != 0x003F9360u) [[unlikely]] return; }
L_003F9360:
    c.r[18].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 1;
L_003F9364:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_003F9368:
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F9374u); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BE(c, 93u, depth + 1u); else { c.pc = 0x003F93F8u; return; } if (c.pc != 0x003F9374u) [[unlikely]] return; }
L_003F9374:
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_003F9378:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 40u));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003F9398:
    set32(c.r[2], ld32((c.r[4].w[0] + 6960u)));
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[3], 0u + 3u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[5], ld32((c.r[2].w[0] + 116u)));
    c.budget -= 7;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; c.r[2].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(4ll) ? 1ull : 0ull;  if (t) { goto L_003F93E0; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_003F93EC; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[2].d[0]; c.r[2].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_003F93EC; } }
    set32(c.r[2], c.r[4].w[0] - 2u);
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[6], 0u + 1u);  goto L_003F93E8; }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[6].d[0] + 0ull;  c.pc = t; return; }
L_003F93E0:
    c.r[2].d[0] = c.r[4].d[0] ^ c.r[5].d[0];
    c.r[6].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 2;
L_003F93E8:
    c.r[2].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 1;
L_003F93EC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003F93F8:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 40u), c.r[19].d[0]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    set32(c.r[17], ld32((c.r[4].w[0] + 6960u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 228u)));
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 13;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[16], ld32((c.r[17].w[0] + 116u)));  if (t) { goto L_003F9460; } }
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F9438u); set32(c.r[6], c.r[29].w[0] + 4u);  if (depth < kMaxDepth) unit_00B9(c, 2u, depth + 1u); else { c.pc = 0x003E4058u; return; } if (c.pc != 0x003F9438u) [[unlikely]] return; }
L_003F9438:
    set32(c.r[4], ld32((c.r[29].w[0])));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull; c.r[3].d[0] = c.r[4].d[0] ^ 1ull;  if (t) { goto L_003F9458; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 4u)));
    set32(c.r[3], 0u + 2u);
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    if (c.r[2].d[0] == 0) c.r[16].d[0] = c.r[3].d[0];
    c.r[3].d[0] = c.r[4].d[0] ^ 1ull;
    c.budget -= 5;
L_003F9458:
    set32(c.r[2], 0u + 5u);
    if (c.r[3].d[0] == 0) c.r[16].d[0] = c.r[2].d[0];
    c.budget -= 2;
L_003F9460:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 2u);  if (t) { goto L_003F9488; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 24u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { set32(c.r[16], 0u + 2u);  goto L_003F94A0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 116u), c.r[16].w[0]);  if (t) { goto L_003F94A4; } }
L_003F9488:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != c.r[2].d[0]; set32(c.r[3], 0u + 5u);  if (t) { goto L_003F9498; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 3u);  if (t) { goto L_003F94A0; } }
L_003F9498:
    c.r[2].d[0] = c.r[16].d[0] ^ 3ull;
    if (c.r[2].d[0] == 0) c.r[16].d[0] = c.r[3].d[0];
    c.budget -= 2;
L_003F94A0:
    st32((c.r[17].w[0] + 116u), c.r[16].w[0]);
    c.budget -= 1;
L_003F94A4:
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003F94C0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[5], c.r[4].w[0] + 10932u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[2].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[4].w[0] + 3492u);
    set32(c.r[6], ld32((c.r[5].w[0] + 4u)));
    c.budget -= 8;
    { const bool t = c.r[6].sd[0] < 0; set32(c.r[8], c.r[4].w[0] + 3412u);  if (t) { goto L_003F9504; } }
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_003F9508; }
    c.r[4].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[8].w[0] + 32u)));
    set32(c.r[5], ld32((c.r[5].w[0] + 8u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F9500u); set32(c.r[7], ld32((c.r[8].w[0] + 36u)));  if (depth < kMaxDepth) unit_00B6(c, 89u, depth + 1u); else { c.pc = 0x003DAE00u; return; } if (c.pc != 0x003F9500u) [[unlikely]] return; }
L_003F9500:
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 1;
L_003F9504:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_003F9508:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003F9510:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[2].d[0]; set32(c.r[4], c.r[4].w[0] + 2464u);  if (t) { goto L_003F9550; } }
    c.r[2].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(3ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 3u);  if (t) { goto L_003F9540; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[2].d[0]) { set32(c.r[2], ld32((c.r[4].w[0] + 8u)));  goto L_003F9554; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003F9558; } }
    c.budget -= 1;
L_003F9540:
    c.budget -= 2;
    if (c.r[5].d[0] == c.r[2].d[0]) { set32(c.r[2], ld32((c.r[4].w[0] + 16u)));  goto L_003F9554; }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 1u);  c.pc = t; return; }
L_003F9550:
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 1;
L_003F9554:
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 1;
L_003F9558:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003F9560:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u + 3u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 9;
    { const bool t = c.r[5].d[0] != c.r[3].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003F95D4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F958Cu); set32(c.r[5], 0u + 7u);  if (depth < kMaxDepth) unit_00C0(c, 20u, depth + 1u); else { c.pc = 0x00400258u; return; } if (c.pc != 0x003F958Cu) [[unlikely]] return; }
L_003F958C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], c.r[16].w[0] + 2316u);  if (t) { goto L_003F95A0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003F95D4; } }
    c.budget -= 1;
L_003F95A0:
    set32(c.r[6], ld32((c.r[3].w[0] + 8u)));
    set32(c.r[16], c.r[16].w[0] + 2380u);
    set32(c.r[2], ld32((c.r[3].w[0] + 12u)));
    set32(c.r[5], ld32((c.r[17].w[0] + 4u)));
    mmi::mult(c, 0, c.r[6].w[0], c.r[2].w[0]);
    c.r[6].d[0] = c.lo.d[0];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F95C0u); set32(c.r[4], ld32((c.r[17].w[0])));  if (depth < kMaxDepth) unit_00B8(c, 153u, depth + 1u); else { c.pc = 0x003E3580u; return; } if (c.pc != 0x003F95C0u) [[unlikely]] return; }
L_003F95C0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_003F95D8; }
    set32(c.r[3], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    c.budget -= 3;
L_003F95D4:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_003F95D8:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003F95E8:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[17].d[0]);
    set32(c.r[17], c.r[16].w[0] + 3264u);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[20].d[0]);
    c.r[20].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 40u), c.r[19].d[0]);
    set32(c.r[3], c.r[16].w[0] + 3492u);
    st64((c.r[29].w[0] + 56u), c.r[21].d[0]);
    set32(c.r[6], c.r[16].w[0] + 3412u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 17;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[21], ld32((c.r[16].w[0] + 6960u)));  if (t) { goto L_003F9640; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 32u)));
    set32(c.r[3], ld32((c.r[6].w[0] + 32u)));
    set32(c.r[4], ld32((c.r[17].w[0] + 288u)));
    set32(c.r[3], c.r[3].w[0] - c.r[2].w[0]);
    set32(c.r[20], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 5;
L_003F9640:
    set32(c.r[2], ld32((c.r[17].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[19], ld32((c.r[6].w[0] + 36u)));  if (t) { goto L_003F9668; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 5;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003F9660u); c.r[7].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003F9660u) [[unlikely]] return; }
L_003F9660:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_003F9740; } }
L_003F9668:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[18].d[0] != c.r[2].d[0]) { set32(c.r[2], c.r[18].w[0] - 1u);  goto L_003F9684; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F9680u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C0(c, 55u, depth + 1u); else { c.pc = 0x004008E8u; return; } if (c.pc != 0x003F9680u) [[unlikely]] return; }
L_003F9680:
    set32(c.r[2], c.r[18].w[0] - 1u);
    c.budget -= 1;
L_003F9684:
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_003F969C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F9698u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C0(c, 56u, depth + 1u); else { c.pc = 0x00400988u; return; } if (c.pc != 0x003F9698u) [[unlikely]] return; }
L_003F9698:
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_003F969C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F96A4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C0(c, 182u, depth + 1u); else { c.pc = 0x00402078u; return; } if (c.pc != 0x003F96A4u) [[unlikely]] return; }
L_003F96A4:
    c.r[2].d[0] = c.r[2].sd[0] < 1001ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003F96C8; } }
    set32(c.r[3], ld32((c.r[21].w[0] + 132u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 2616u)));
    c.r[3].d[0] = c.r[3].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003F973C; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_003F96C8:
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F96D4u); set32(c.r[6], c.r[29].w[0] + 4u);  if (depth < kMaxDepth) unit_00C0(c, 92u, depth + 1u); else { c.pc = 0x00400F80u; return; } if (c.pc != 0x003F96D4u) [[unlikely]] return; }
L_003F96D4:
    set32(c.r[3], ld32((c.r[29].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] < 0; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003F973C; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 8u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F96F4u); set32(c.r[7], c.r[29].w[0] + 12u);  if (depth < kMaxDepth) unit_00BE(c, 109u, depth + 1u); else { c.pc = 0x003F9760u; return; } if (c.pc != 0x003F96F4u) [[unlikely]] return; }
L_003F96F4:
    c.r[7].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[29].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 12u)));
    mmi::mult(c, 0, c.r[19].w[0], c.r[6].w[0]);
    c.r[6].d[0] = c.lo.d[0];
    c.budget -= 6;
    if (c.r[2].d[0] == 0ull) { breakpoint(c, 0x003F9708u);  goto L_003F970C; }
L_003F970C:
    set32(c.r[4], ld32((c.r[29].w[0])));
    set32(c.r[5], ld32((c.r[29].w[0] + 4u)));
    mmi::div(c, 0, c.r[6].w[0], c.r[2].w[0]);
    c.r[6].d[0] = c.lo.d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F9724u); set32(c.r[6], c.r[20].w[0] - c.r[6].w[0]);  if (depth < kMaxDepth) unit_00B6(c, 89u, depth + 1u); else { c.pc = 0x003DAE00u; return; } if (c.pc != 0x003F9724u) [[unlikely]] return; }
L_003F9724:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003F973C; } }
    set32(c.r[3], ld32((c.r[21].w[0] + 132u)));
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[21].w[0] + 132u), c.r[3].w[0]);
    c.budget -= 4;
L_003F973C:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_003F9740:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 56u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003F9760:
    set32(c.r[4], c.r[4].w[0] + 2464u);
    set32(c.r[2], ld32((c.r[4].w[0] + 172u)));
    st32((c.r[7].w[0]), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 168u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[6].w[0]), c.r[3].w[0]);  c.pc = t; return; }
L_003F9778:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 40u), c.r[21].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 6960u)));
    set32(c.r[17], ld32((c.r[2].w[0])));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F97B0u); set32(c.r[21], c.r[2].w[0] + 140u);  if (depth < kMaxDepth) unit_00BE(c, 118u, depth + 1u); else { c.pc = 0x003F9850u; return; } if (c.pc != 0x003F97B0u) [[unlikely]] return; }
L_003F97B0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F97C0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00B4(c, 192u, depth + 1u); else { c.pc = 0x003D1B90u; return; } if (c.pc != 0x003F97C0u) [[unlikely]] return; }
L_003F97C0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F97D0u); c.r[20].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B8(c, 176u, depth + 1u); else { c.pc = 0x003E3D48u; return; } if (c.pc != 0x003F97D0u) [[unlikely]] return; }
L_003F97D0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F97E4u); c.r[19].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B4(c, 192u, depth + 1u); else { c.pc = 0x003D1B90u; return; } if (c.pc != 0x003F97E4u) [[unlikely]] return; }
L_003F97E4:
    set32(c.r[17], c.r[2].w[0] - c.r[20].w[0]);
    c.r[7].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F9800u); c.r[7].d[0] = c.r[7].d[0] | 3847ull;  if (depth < kMaxDepth) unit_00BE(c, 17u, depth + 1u); else { c.pc = 0x003F8278u; return; } if (c.pc != 0x003F9800u) [[unlikely]] return; }
L_003F9800:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F9810u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BE(c, 13u, depth + 1u); else { c.pc = 0x003F81F8u; return; } if (c.pc != 0x003F9810u) [[unlikely]] return; }
L_003F9810:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[16].d[0] != 0ull; set32(c.r[5], 0u + 1u);  if (t) { goto L_003F982C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F9828u); set32(c.r[6], ld32((c.r[21].w[0] + 24u)));  if (depth < kMaxDepth) unit_00BF(c, 276u, depth + 1u); else { c.pc = 0x003FE558u; return; } if (c.pc != 0x003F9828u) [[unlikely]] return; }
L_003F9828:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003F982C:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003F9850:
    set32(c.r[5], c.r[4].w[0] + 3412u);
    set32(c.r[3], ld32((c.r[4].w[0] + 3524u)));
    set32(c.r[2], ld32((c.r[5].w[0] + 32u)));
    c.r[2].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[4].w[0] + 3452u);  if (t) { goto L_003F98B8; } }
    ldl(c.r[2], (c.r[5].w[0] + 7u));
    ldr(c.r[2], (c.r[5].w[0]));
    ldl(c.r[3], (c.r[5].w[0] + 15u));
    ldr(c.r[3], (c.r[5].w[0] + 8u));
    ldl(c.r[6], (c.r[5].w[0] + 23u));
    ldr(c.r[6], (c.r[5].w[0] + 16u));
    ldl(c.r[7], (c.r[5].w[0] + 31u));
    ldr(c.r[7], (c.r[5].w[0] + 24u));
    sdl(c.r[2], (c.r[4].w[0] + 7u));
    sdr(c.r[2], (c.r[4].w[0]));
    sdl(c.r[3], (c.r[4].w[0] + 15u));
    sdr(c.r[3], (c.r[4].w[0] + 8u));
    sdl(c.r[6], (c.r[4].w[0] + 23u));
    sdr(c.r[6], (c.r[4].w[0] + 16u));
    sdl(c.r[7], (c.r[4].w[0] + 31u));
    sdr(c.r[7], (c.r[4].w[0] + 24u));
    ldl(c.r[2], (c.r[5].w[0] + 39u));
    ldr(c.r[2], (c.r[5].w[0] + 32u));
    sdl(c.r[2], (c.r[4].w[0] + 39u));
    sdr(c.r[2], (c.r[4].w[0] + 32u));
    c.budget -= 20;
L_003F98B8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003F98C0:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 88u), c.r[19].d[0]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 112u), c.r[22].d[0]);
    set32(c.r[22], c.r[19].w[0] + 2444u);
    st64((c.r[29].w[0] + 120u), c.r[23].d[0]);
    c.r[23].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 128u), c.r[30].d[0]);
    set32(c.r[2], c.r[19].w[0] + 2380u);
    st64((c.r[29].w[0] + 64u), c.r[16].d[0]);
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    st64((c.r[29].w[0] + 72u), c.r[17].d[0]);
    set32(c.r[7], c.r[29].w[0] + 48u);
    st64((c.r[29].w[0] + 80u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 96u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 104u), c.r[21].d[0]);
    st64((c.r[29].w[0] + 136u), c.r[31].d[0]);
    set32(c.r[20], ld32((c.r[19].w[0] + 6960u)));
    st32((c.r[29].w[0] + 52u), c.r[2].w[0]);
    set32(c.r[30], c.r[20].w[0] + 140u);
    set32(c.r[2], ld32((c.r[20].w[0])));
    c.r[5].d[0] = c.r[30].d[0] + 0ull;
    c.budget -= 24;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F9920u); st32((c.r[29].w[0] + 56u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00BE(c, 140u, depth + 1u); else { c.pc = 0x003F9B48u; return; } if (c.pc != 0x003F9920u) [[unlikely]] return; }
L_003F9920:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003F9B14; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 48u)));
    set32(c.r[5], c.r[20].w[0] + 2376u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F9938u); set32(c.r[4], ld32((c.r[2].w[0] + 40u)));  if (depth < kMaxDepth) unit_00BE(c, 166u, depth + 1u); else { c.pc = 0x003FA288u; return; } if (c.pc != 0x003F9938u) [[unlikely]] return; }
L_003F9938:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F9940u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BE(c, 145u, depth + 1u); else { c.pc = 0x003F9E60u; return; } if (c.pc != 0x003F9940u) [[unlikely]] return; }
L_003F9940:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F9948u);  if (depth < kMaxDepth) unit_00C2(c, 146u, depth + 1u); else { c.pc = 0x004094A0u; return; } if (c.pc != 0x003F9948u) [[unlikely]] return; }
L_003F9948:
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F995Cu); c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B4(c, 192u, depth + 1u); else { c.pc = 0x003D1B90u; return; } if (c.pc != 0x003F995Cu) [[unlikely]] return; }
L_003F995C:
    c.r[5].d[0] = c.r[23].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[29].w[0] + 56u)));
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.r[7].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F9974u); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BF(c, 63u, depth + 1u); else { c.pc = 0x003FC940u; return; } if (c.pc != 0x003F9974u) [[unlikely]] return; }
L_003F9974:
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    set32(c.r[6], 0u + 1u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F9988u); c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B4(c, 192u, depth + 1u); else { c.pc = 0x003D1B90u; return; } if (c.pc != 0x003F9988u) [[unlikely]] return; }
L_003F9988:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F9990u); set32(c.r[21], c.r[2].w[0] - c.r[16].w[0]);  if (depth < kMaxDepth) unit_00C2(c, 146u, depth + 1u); else { c.pc = 0x004094A0u; return; } if (c.pc != 0x003F9990u) [[unlikely]] return; }
L_003F9990:
    set32(c.r[4], ld32((c.r[30].w[0] + 24u)));
    c.r[5].d[0] = c.r[2].d[0] - c.r[18].d[0];
    set32(c.r[4], c.r[4].w[0] << 5);
    set32(c.r[4], c.r[19].w[0] + c.r[4].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F99A8u); set32(c.r[4], c.r[4].w[0] + 10944u);  if (depth < kMaxDepth) unit_00C0(c, 184u, depth + 1u); else { c.pc = 0x004020A0u; return; } if (c.pc != 0x003F99A8u) [[unlikely]] return; }
L_003F99A8:
    set32(c.r[2], ld32((c.r[22].w[0] + 12u)));
    set32(c.r[6], ld32((c.r[29].w[0] + 40u)));
    c.r[7].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    set32(c.r[8], ld32((c.r[29].w[0] + 44u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[22].w[0] + 16u)));
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    st32((c.r[22].w[0] + 12u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] + c.r[8].w[0]);
    c.r[6].d[0] = c.r[21].d[0] + 0ull;
    st32((c.r[22].w[0] + 16u), c.r[3].w[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F99E0u); c.r[7].d[0] = c.r[7].d[0] | 3846ull;  if (depth < kMaxDepth) unit_00BE(c, 17u, depth + 1u); else { c.pc = 0x003F8278u; return; } if (c.pc != 0x003F99E0u) [[unlikely]] return; }
L_003F99E0:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F99F0u); c.r[5].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BE(c, 13u, depth + 1u); else { c.pc = 0x003F81F8u; return; } if (c.pc != 0x003F99F0u) [[unlikely]] return; }
L_003F99F0:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_003F9A08; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F9A00u); set32(c.r[4], ld32((c.r[29].w[0] + 48u)));  if (depth < kMaxDepth) unit_00BE(c, 266u, depth + 1u); else { c.pc = 0x003FB300u; return; } if (c.pc != 0x003F9A00u) [[unlikely]] return; }
L_003F9A00:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003F9B14; } }
L_003F9A08:
    c.budget -= 2;
    if (c.r[21].sd[0] <= 0) { set32(c.r[2], ld32((c.r[20].w[0] + 308u)));  goto L_003F9B00; }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F9A1Cu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BE(c, 257u, depth + 1u); else { c.pc = 0x003FB1B0u; return; } if (c.pc != 0x003F9A1Cu) [[unlikely]] return; }
L_003F9A1C:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F9A28u); set32(c.r[5], ld32((c.r[29].w[0] + 48u)));  if (depth < kMaxDepth) unit_00BE(c, 149u, depth + 1u); else { c.pc = 0x003F9F68u; return; } if (c.pc != 0x003F9A28u) [[unlikely]] return; }
L_003F9A28:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[29].w[0] + 48u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F9A38u); c.r[6].d[0] = c.r[23].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BE(c, 153u, depth + 1u); else { c.pc = 0x003FA068u; return; } if (c.pc != 0x003F9A38u) [[unlikely]] return; }
L_003F9A38:
    set32(c.r[4], ld32((c.r[20].w[0] + 136u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 48u)));
    set32(c.r[6], 0u + 3u);
    set32(c.r[5], ld32((c.r[30].w[0] + 56u)));
    st32((c.r[2].w[0] + 28u), c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 40u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 48u)));
    st32((c.r[3].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[29].w[0] + 48u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 44u)));
    c.budget -= 12;
    { const bool t = c.r[5].d[0] == c.r[6].d[0]; st32((c.r[4].w[0] + 24u), c.r[2].w[0]);  if (t) { goto L_003F9A80; } }
    set32(c.r[2], ld32((c.r[20].w[0] + 308u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { st32((c.r[20].w[0] + 308u), 0u);  goto L_003F9A84; }
    set32(c.r[2], ld32((c.r[29].w[0] + 48u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 308u), c.r[2].w[0]);  if (t) { goto L_003F9A84; } }
L_003F9A80:
    st32((c.r[20].w[0] + 308u), 0u);
    c.budget -= 1;
L_003F9A84:
    set32(c.r[2], ld32((c.r[20].w[0] + 308u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003F9B14; } }
    set32(c.r[3], ld32((c.r[19].w[0] + 56u)));
    set32(c.r[2], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_003F9AC8; } }
    set32(c.r[2], ld32((c.r[30].w[0] + 24u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003F9AC8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F9ABCu); set32(c.r[4], ld32((c.r[29].w[0] + 48u)));  if (depth < kMaxDepth) unit_00BE(c, 268u, depth + 1u); else { c.pc = 0x003FB328u; return; } if (c.pc != 0x003F9ABCu) [[unlikely]] return; }
L_003F9ABC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 52u)));  if (t) { goto L_003F9AD4; } }
    c.budget -= 1;
L_003F9AC8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F9AD0u); set32(c.r[4], ld32((c.r[29].w[0] + 48u)));  if (depth < kMaxDepth) unit_00BE(c, 267u, depth + 1u); else { c.pc = 0x003FB310u; return; } if (c.pc != 0x003F9AD0u) [[unlikely]] return; }
L_003F9AD0:
    set32(c.r[2], ld32((c.r[29].w[0] + 52u)));
    c.budget -= 1;
L_003F9AD4:
    set32(c.r[4], ld32((c.r[29].w[0] + 56u)));
    set32(c.r[6], c.r[2].w[0] + 12u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F9AE4u); set32(c.r[5], c.r[2].w[0] + 8u);  if (depth < kMaxDepth) unit_00B9(c, 165u, depth + 1u); else { c.pc = 0x003E6240u; return; } if (c.pc != 0x003F9AE4u) [[unlikely]] return; }
L_003F9AE4:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[30].w[0] + 24u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F9AF4u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00BF(c, 273u, depth + 1u); else { c.pc = 0x003FE4F0u; return; } if (c.pc != 0x003F9AF4u) [[unlikely]] return; }
L_003F9AF4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 132u), 0u);  if (t) { goto L_003F9B10; } }
    c.budget -= 1;
L_003F9B00:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_003F9B14; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F9B10u); set32(c.r[4], ld32((c.r[29].w[0] + 48u)));  if (depth < kMaxDepth) unit_00BE(c, 266u, depth + 1u); else { c.pc = 0x003FB300u; return; } if (c.pc != 0x003F9B10u) [[unlikely]] return; }
L_003F9B10:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003F9B14:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 72u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 88u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 96u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 104u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 112u));
    c.r[23].d[0] = ld64((c.r[29].w[0] + 120u));
    c.r[30].d[0] = ld64((c.r[29].w[0] + 128u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 136u));
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_003F9B48:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    c.r[19].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[20].d[0]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 40u), c.r[21].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    set32(c.r[16], ld32((c.r[20].w[0] + 6960u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 308u)));
    c.budget -= 16;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[21], c.r[20].w[0] + 2380u);  if (t) { goto L_003F9B90; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0]), c.r[2].w[0]);  if (t) { goto L_003F9BB0; } }
L_003F9B90:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F9B98u);  if (depth < kMaxDepth) unit_00BE(c, 262u, depth + 1u); else { c.pc = 0x003FB260u; return; } if (c.pc != 0x003F9B98u) [[unlikely]] return; }
L_003F9B98:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[19].w[0]), c.r[2].w[0]);  if (t) { goto L_003F9BB0; } }
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[21].w[0] + 36u), c.r[3].w[0]);  if (t) { goto L_003F9E3C; } }
L_003F9BB0:
    set32(c.r[10], ld32((c.r[19].w[0])));
    set32(c.r[6], c.r[10].w[0] + 44u);
    c.r[2].d[0] = c.r[18].d[0] | c.r[6].d[0];
    c.r[2].d[0] = c.r[2].d[0] & 7ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_003F9C28; } }
    set32(c.r[2], c.r[18].w[0] + 64u);
    c.budget -= 1;
L_003F9BCC:
    ldl(c.r[3], (c.r[5].w[0] + 7u));
    ldr(c.r[3], (c.r[5].w[0]));
    ldl(c.r[4], (c.r[5].w[0] + 15u));
    ldr(c.r[4], (c.r[5].w[0] + 8u));
    ldl(c.r[7], (c.r[5].w[0] + 23u));
    ldr(c.r[7], (c.r[5].w[0] + 16u));
    ldl(c.r[8], (c.r[5].w[0] + 31u));
    ldr(c.r[8], (c.r[5].w[0] + 24u));
    sdl(c.r[3], (c.r[6].w[0] + 7u));
    sdr(c.r[3], (c.r[6].w[0]));
    sdl(c.r[4], (c.r[6].w[0] + 15u));
    sdr(c.r[4], (c.r[6].w[0] + 8u));
    sdl(c.r[7], (c.r[6].w[0] + 23u));
    sdr(c.r[7], (c.r[6].w[0] + 16u));
    sdl(c.r[8], (c.r[6].w[0] + 31u));
    sdr(c.r[8], (c.r[6].w[0] + 24u));
    set32(c.r[5], c.r[5].w[0] + 32u);
    c.budget -= 21;
    { const bool t = c.r[5].d[0] != c.r[2].d[0]; set32(c.r[6], c.r[6].w[0] + 32u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003F9BCCu | kUnwind; return; } goto L_003F9BCC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[20].w[0] + 56u)));  if (t) { goto L_003F9C64; } }
L_003F9C28:
    set32(c.r[2], c.r[18].w[0] + 64u);
    c.budget -= 1;
L_003F9C2C:
    c.r[9].d[0] = ld64((c.r[5].w[0]));
    c.r[3].d[0] = ld64((c.r[5].w[0] + 8u));
    c.r[4].d[0] = ld64((c.r[5].w[0] + 16u));
    c.r[7].d[0] = ld64((c.r[5].w[0] + 24u));
    st64((c.r[6].w[0]), c.r[9].d[0]);
    st64((c.r[6].w[0] + 8u), c.r[3].d[0]);
    st64((c.r[6].w[0] + 16u), c.r[4].d[0]);
    st64((c.r[6].w[0] + 24u), c.r[7].d[0]);
    set32(c.r[5], c.r[5].w[0] + 32u);
    c.budget -= 13;
    { const bool t = c.r[5].d[0] != c.r[2].d[0]; set32(c.r[6], c.r[6].w[0] + 32u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003F9C2Cu | kUnwind; return; } goto L_003F9C2C; } }
    set32(c.r[3], ld32((c.r[20].w[0] + 56u)));
    c.budget -= 1;
L_003F9C64:
    set32(c.r[2], 0u + 3u);
    ldl(c.r[8], (c.r[5].w[0] + 7u));
    ldr(c.r[8], (c.r[5].w[0]));
    ldl(c.r[9], (c.r[5].w[0] + 15u));
    ldr(c.r[9], (c.r[5].w[0] + 8u));
    set32(c.r[4], ld32((c.r[5].w[0] + 16u)));
    sdl(c.r[8], (c.r[6].w[0] + 7u));
    sdr(c.r[8], (c.r[6].w[0]));
    sdl(c.r[9], (c.r[6].w[0] + 15u));
    sdr(c.r[9], (c.r[6].w[0] + 8u));
    c.budget -= 12;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; st32((c.r[6].w[0] + 16u), c.r[4].w[0]);  if (t) { goto L_003F9D98; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 24u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[18].w[0])));  goto L_003F9CD4; }
    set32(c.r[2], ld32((c.r[16].w[0] + 308u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[18].w[0])));  goto L_003F9CD4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F9CBCu); set32(c.r[4], ld32((c.r[16].w[0] + 300u)));  if (depth < kMaxDepth) unit_00BE(c, 270u, depth + 1u); else { c.pc = 0x003FB368u; return; } if (c.pc != 0x003F9CBCu) [[unlikely]] return; }
L_003F9CBC:
    set32(c.r[2], ld32((c.r[16].w[0] + 304u)));
    st32((c.r[16].w[0] + 300u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[19].w[0])));
    st32((c.r[16].w[0] + 304u), c.r[3].w[0]);
    set32(c.r[10], ld32((c.r[19].w[0])));
    set32(c.r[3], ld32((c.r[18].w[0])));
    c.budget -= 6;
L_003F9CD4:
    set32(c.r[8], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[3].w[0] + 15u);
    set32(c.r[3], c.r[3].w[0] + 30u);
    c.r[4].d[0] = c.r[2].sd[0] < 0ll ? 1ull : 0ull;
    set32(c.r[5], c.r[8].w[0] + 15u);
    if (c.r[4].d[0] != 0) c.r[2].d[0] = c.r[3].d[0];
    c.r[9].d[0] = c.r[5].sd[0] < 0ll ? 1ull : 0ull;
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 4));
    set32(c.r[8], c.r[8].w[0] + 30u);
    set32(c.r[4], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[7], c.r[4].w[0] + 63u);
    set32(c.r[4], c.r[4].w[0] + 126u);
    set32(c.r[6], c.r[2].w[0] + 63u);
    set32(c.r[2], c.r[2].w[0] + 126u);
    c.r[3].d[0] = c.r[7].sd[0] < 0ll ? 1ull : 0ull;
    if (c.r[9].d[0] != 0) c.r[5].d[0] = c.r[8].d[0];
    if (c.r[3].d[0] != 0) c.r[7].d[0] = c.r[4].d[0];
    c.r[3].d[0] = c.r[6].sd[0] < 0ll ? 1ull : 0ull;
    if (c.r[3].d[0] != 0) c.r[6].d[0] = c.r[2].d[0];
    set32(c.r[3], ld32((c.r[16].w[0] + 300u)));
    set32(c.r[7], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[7].w[0]) >> 6));
    set32(c.r[5], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[5].w[0]) >> 4));
    mmi::mult(c, 0, c.r[7].w[0], c.r[5].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[7], c.r[7].w[0] << 6);
    set32(c.r[6], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[6].w[0]) >> 6));
    set32(c.r[4], ld32((c.r[16].w[0] + 304u)));
    mmi::mult(c, 1, c.r[6].w[0], c.r[5].w[0]);
    c.r[5].d[0] = c.lo.d[1];
    set32(c.r[6], c.r[6].w[0] << 6);
    set32(c.r[8], ld32((c.r[3].w[0] + 8u)));
    set32(c.r[9], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] << 10);
    st16((c.r[17].w[0] + 30u), static_cast<std::uint16_t>(c.r[7].w[0]));
    set32(c.r[4], c.r[9].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[8].w[0] + c.r[2].w[0]);
    set32(c.r[5], c.r[5].w[0] << 9);
    st16((c.r[17].w[0] + 28u), static_cast<std::uint16_t>(c.r[6].w[0]));
    set32(c.r[3], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[5], c.r[2].w[0] + c.r[5].w[0]);
    st32((c.r[17].w[0] + 4u), c.r[5].w[0]);
    st32((c.r[17].w[0] + 20u), c.r[3].w[0]);
    st16((c.r[17].w[0] + 14u), static_cast<std::uint16_t>(c.r[7].w[0]));
    st16((c.r[17].w[0] + 12u), static_cast<std::uint16_t>(c.r[6].w[0]));
    st32((c.r[17].w[0] + 8u), c.r[8].w[0]);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    st32((c.r[17].w[0] + 24u), c.r[9].w[0]);
    c.budget -= 48;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 16u), c.r[4].w[0]);  if (t) { goto L_003F9E1C; } }
    c.budget -= 1;
L_003F9D98:
    set32(c.r[2], ld32((c.r[18].w[0] + 24u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], ld32((c.r[16].w[0] + 260u)));  if (t) { goto L_003F9DC4; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 264u)));
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    st32((c.r[16].w[0] + 260u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 264u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 260u)));
    c.budget -= 6;
L_003F9DC4:
    set32(c.r[4], c.r[16].w[0] + 268u);
    set32(c.r[3], ld32((c.r[16].w[0] + 264u)));
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    ldl(c.r[8], (c.r[2].w[0] + 7u));
    ldr(c.r[8], (c.r[2].w[0]));
    ldl(c.r[9], (c.r[2].w[0] + 15u));
    ldr(c.r[9], (c.r[2].w[0] + 8u));
    sdl(c.r[8], (c.r[17].w[0] + 7u));
    sdr(c.r[8], (c.r[17].w[0]));
    sdl(c.r[9], (c.r[17].w[0] + 15u));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    sdr(c.r[9], (c.r[17].w[0] + 8u));
    ldl(c.r[7], (c.r[3].w[0] + 7u));
    ldr(c.r[7], (c.r[3].w[0]));
    ldl(c.r[8], (c.r[3].w[0] + 15u));
    ldr(c.r[8], (c.r[3].w[0] + 8u));
    sdl(c.r[7], (c.r[17].w[0] + 23u));
    sdr(c.r[7], (c.r[17].w[0] + 16u));
    sdl(c.r[8], (c.r[17].w[0] + 31u));
    sdr(c.r[8], (c.r[17].w[0] + 24u));
    c.budget -= 22;
L_003F9E1C:
    set32(c.r[3], ld32((c.r[10].w[0] + 8u)));
    set32(c.r[4], c.r[10].w[0] + 44u);
    st32((c.r[17].w[0] + 44u), 0u);
    c.r[2].d[0] = 0ull + 0ull;
    st32((c.r[17].w[0] + 40u), 0u);
    st32((c.r[17].w[0] + 32u), c.r[3].w[0]);
    st32((c.r[17].w[0] + 36u), c.r[4].w[0]);
    st32((c.r[21].w[0] + 36u), 0u);
    c.budget -= 8;
L_003F9E3C:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003F9E60:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 56u), c.r[17].d[0]);
    set32(c.r[17], c.r[16].w[0] + 3492u);
    st64((c.r[29].w[0] + 64u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 72u), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[18], c.r[16].w[0] + 3292u);  if (t) { goto L_003F9F50; } }
    ldl(c.r[2], (c.r[16].w[0] + 3423u));
    ldr(c.r[2], (c.r[16].w[0] + 3416u));
    ldl(c.r[3], (c.r[16].w[0] + 3431u));
    ldr(c.r[3], (c.r[16].w[0] + 3424u));
    ldl(c.r[6], (c.r[16].w[0] + 3439u));
    ldr(c.r[6], (c.r[16].w[0] + 3432u));
    set32(c.r[7], ld32((c.r[16].w[0] + 3440u)));
    sdl(c.r[2], (c.r[29].w[0] + 7u));
    sdr(c.r[2], (c.r[29].w[0]));
    sdl(c.r[3], (c.r[29].w[0] + 15u));
    sdr(c.r[3], (c.r[29].w[0] + 8u));
    sdl(c.r[6], (c.r[29].w[0] + 23u));
    sdr(c.r[6], (c.r[29].w[0] + 16u));
    st32((c.r[29].w[0] + 24u), c.r[7].w[0]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F9EC8u); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_00BE(c, 92u, depth + 1u); else { c.pc = 0x003F9398u; return; } if (c.pc != 0x003F9EC8u) [[unlikely]] return; }
L_003F9EC8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], 0u + 3u);  if (t) { goto L_003F9EE8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F9EDCu);  if (depth < kMaxDepth) unit_00BE(c, 97u, depth + 1u); else { c.pc = 0x003F9510u; return; } if (c.pc != 0x003F9EDCu) [[unlikely]] return; }
L_003F9EDC:
    set32(c.r[3], ld32((c.r[29].w[0] + 24u)));
    if (c.r[2].d[0] == 0) c.r[3].d[0] = 0ull;
    st32((c.r[29].w[0] + 24u), c.r[3].w[0]);
    c.budget -= 3;
L_003F9EE8:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F9EF8u); set32(c.r[6], c.r[29].w[0] + 36u);  if (depth < kMaxDepth) unit_00C0(c, 135u, depth + 1u); else { c.pc = 0x004015F0u; return; } if (c.pc != 0x003F9EF8u) [[unlikely]] return; }
L_003F9EF8:
    set32(c.r[5], 0u + 1u);
    ldl(c.r[2], (c.r[29].w[0] + 7u));
    ldr(c.r[2], (c.r[29].w[0]));
    ldl(c.r[3], (c.r[29].w[0] + 15u));
    ldr(c.r[3], (c.r[29].w[0] + 8u));
    ldl(c.r[4], (c.r[29].w[0] + 23u));
    ldr(c.r[4], (c.r[29].w[0] + 16u));
    set32(c.r[6], ld32((c.r[29].w[0] + 24u)));
    sdl(c.r[2], (c.r[16].w[0] + 3503u));
    sdr(c.r[2], (c.r[16].w[0] + 3496u));
    sdl(c.r[3], (c.r[16].w[0] + 3511u));
    sdr(c.r[3], (c.r[16].w[0] + 3504u));
    sdl(c.r[4], (c.r[16].w[0] + 3519u));
    sdr(c.r[4], (c.r[16].w[0] + 3512u));
    st32((c.r[16].w[0] + 3520u), c.r[6].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 32u)));
    set32(c.r[3], ld32((c.r[18].w[0] + 32u)));
    set32(c.r[4], ld32((c.r[29].w[0] + 36u)));
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    st32((c.r[17].w[0]), c.r[5].w[0]);
    st32((c.r[17].w[0] + 32u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 36u), c.r[4].w[0]);
    c.budget -= 22;
L_003F9F50:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 56u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 72u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003F9F68:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    set32(c.r[18], c.r[16].w[0] + 3264u);
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    set32(c.r[19], c.r[16].w[0] + 3412u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[19].w[0] + 36u)));
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 3524u)));
    set32(c.r[2], ld32((c.r[19].w[0] + 32u)));
    set32(c.r[5], ld32((c.r[18].w[0] + 288u)));
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    st32((c.r[17].w[0] + 12u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[19].w[0] + 32u)));
    st32((c.r[17].w[0] + 32u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 32u)));
    set32(c.r[3], ld32((c.r[18].w[0] + 288u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 25;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F9FCCu); st32((c.r[17].w[0] + 36u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00BF(c, 11u, depth + 1u); else { c.pc = 0x003FC160u; return; } if (c.pc != 0x003F9FCCu) [[unlikely]] return; }
L_003F9FCC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003FA02C; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 60u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[16], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[16], ld32((c.r[16].w[0] - 30560u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F9FF0u);  if (depth < kMaxDepth) unit_00BF(c, 72u, depth + 1u); else { c.pc = 0x003FCA88u; return; } if (c.pc != 0x003F9FF0u) [[unlikely]] return; }
L_003F9FF0:
    set32(c.r[3], ld32((c.r[18].w[0] + 284u)));
    set32(c.r[4], ld32((c.r[19].w[0] + 36u)));
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    set32(c.r[5], c.r[2].w[0] << 5);
    set32(c.r[5], c.r[5].w[0] - c.r[2].w[0]);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[2].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FA018u); set32(c.r[5], c.r[5].w[0] << 3);  if (depth < kMaxDepth) unit_00B9(c, 198u, depth + 1u); else { c.pc = 0x003E66B0u; return; } if (c.pc != 0x003FA018u) [[unlikely]] return; }
L_003FA018:
    st32((c.r[17].w[0] + 32u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 288u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[17].w[0] + 12u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 36u), c.r[2].w[0]);
    c.budget -= 5;
L_003FA02C:
    set32(c.r[3], ld32((c.r[17].w[0] + 12u)));
    set32(c.r[2], ld32((c.r[18].w[0] + 576u)));
    c.r[2].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_003FA04C; } }
    st32((c.r[18].w[0] + 576u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 16u)));
    st32((c.r[18].w[0] + 580u), c.r[2].w[0]);
    c.budget -= 3;
L_003FA04C:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003FA068:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 40u), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 68u)));
    set32(c.r[18], ld32((c.r[4].w[0] + 6960u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 13;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[18].w[0] + 2384u);  if (t) { goto L_003FA0A4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FA0A4u); set32(c.r[5], ld32((c.r[16].w[0] + 40u)));  if (depth < kMaxDepth) unit_00BE(c, 166u, depth + 1u); else { c.pc = 0x003FA288u; return; } if (c.pc != 0x003FA0A4u) [[unlikely]] return; }
L_003FA0A4:
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 4u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FA0B8u); set32(c.r[7], c.r[29].w[0] + 8u);  if (depth < kMaxDepth) unit_00BE(c, 158u, depth + 1u); else { c.pc = 0x003FA110u; return; } if (c.pc != 0x003FA0B8u) [[unlikely]] return; }
L_003FA0B8:
    set32(c.r[2], ld32((c.r[29].w[0])));
    set32(c.r[3], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; set32(c.r[5], c.r[18].w[0] + 2384u);  if (t) { goto L_003FA0F0; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 40u)));
    set32(c.r[5], ld32((c.r[29].w[0] + 4u)));
    set32(c.r[6], ld32((c.r[29].w[0] + 8u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FA0DCu); set32(c.r[4], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0009(c, 40u, depth + 1u); else { c.pc = 0x00124D20u; return; } if (c.pc != 0x003FA0DCu) [[unlikely]] return; }
L_003FA0DC:
    set32(c.r[3], ld32((c.r[16].w[0] + 40u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 8u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 4u), c.r[2].w[0]);  if (t) { goto L_003FA0F8; } }
    c.budget -= 1;
L_003FA0F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FA0F8u); set32(c.r[4], ld32((c.r[16].w[0] + 40u)));  if (depth < kMaxDepth) unit_00BE(c, 166u, depth + 1u); else { c.pc = 0x003FA288u; return; } if (c.pc != 0x003FA0F8u) [[unlikely]] return; }
L_003FA0F8:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 40u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003FA110:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 40u), c.r[19].d[0]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[20].d[0]);
    c.r[20].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 56u), c.r[21].d[0]);
    c.r[21].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    c.r[7].d[0] = c.r[29].d[0] + 0ull;
    st32((c.r[17].w[0]), 0u);
    set32(c.r[5], 0u + 1u);
    set32(c.r[3], ld32((c.r[19].w[0])));
    c.r[6].d[0] = c.r[6].d[0] | 65535ull;
    st32((c.r[20].w[0]), 0u);
    set32(c.r[2], ld32((c.r[3].w[0] + 24u)));
    c.budget -= 22;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003FA168u); st32((c.r[21].w[0]), 0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003FA168u) [[unlikely]] return; }
L_003FA168:
    set32(c.r[6], 0u + 204u);
    set32(c.r[4], ld32((c.r[29].w[0])));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FA178u); set32(c.r[5], ld32((c.r[29].w[0] + 4u)));  if (depth < kMaxDepth) unit_00B8(c, 147u, depth + 1u); else { c.pc = 0x003E3368u; return; } if (c.pc != 0x003FA178u) [[unlikely]] return; }
L_003FA178:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x00450000u);  if (t) { goto L_003FA228; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FA18Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B8(c, 143u, depth + 1u); else { c.pc = 0x003E31D0u; return; } if (c.pc != 0x003FA18Cu) [[unlikely]] return; }
L_003FA18C:
    c.r[2].d[0] = c.r[2].d[0] & 4ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], ld32((c.r[29].w[0] + 4u)));  if (t) { goto L_003FA248; } }
    set32(c.r[6], ld32((c.r[29].w[0])));
    set32(c.r[2], c.r[16].w[0] - c.r[6].w[0]);
    set32(c.r[2], c.r[2].w[0] + 6u);
    c.r[2].d[0] = c.r[5].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x00450000u);  if (t) { goto L_003FA228; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 5u));
    set32(c.r[4], 0u + 3u);
    c.r[2].d[0] = c.r[2].d[0] >> 3;
    c.r[2].d[0] = c.r[2].d[0] & 7ull;
    set32(c.r[2], c.r[2].w[0] << 2);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] - 31056u)));
    c.budget -= 10;
    { const bool t = c.r[3].d[0] != c.r[4].d[0]; st32((c.r[17].w[0]), c.r[3].w[0]);  if (t) { goto L_003FA248; } }
    set32(c.r[2], c.r[6].w[0] - c.r[16].w[0]);
    set32(c.r[6], 0u + 34u);
    set32(c.r[18], c.r[2].w[0] + c.r[5].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FA1F0u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B8(c, 147u, depth + 1u); else { c.pc = 0x003E3368u; return; } if (c.pc != 0x003FA1F0u) [[unlikely]] return; }
L_003FA1F0:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[17].d[0] == 0ull) { set32(c.r[3], ld32((c.r[19].w[0])));  goto L_003FA24C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FA204u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B8(c, 143u, depth + 1u); else { c.pc = 0x003E31D0u; return; } if (c.pc != 0x003FA204u) [[unlikely]] return; }
L_003FA204:
    c.r[2].d[0] = c.r[2].d[0] & 32ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003FA248; } }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FA21Cu); set32(c.r[6], 0u + 2u);  if (depth < kMaxDepth) unit_00B8(c, 147u, depth + 1u); else { c.pc = 0x003E3368u; return; } if (c.pc != 0x003FA21Cu) [[unlikely]] return; }
L_003FA21C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[2].w[0] - c.r[17].w[0]);  if (t) { goto L_003FA240; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00450000u);
    c.budget -= 1;
L_003FA228:
    set32(c.r[3], c.r[3].w[0] - 16852u);
    set32(c.r[2], ld32((c.r[3].w[0])));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0]), c.r[2].w[0]);  if (t) { goto L_003FA248; } }
    c.budget -= 1;
L_003FA240:
    st32((c.r[20].w[0]), c.r[17].w[0]);
    st32((c.r[21].w[0]), c.r[2].w[0]);
    c.budget -= 2;
L_003FA248:
    set32(c.r[3], ld32((c.r[19].w[0])));
    c.budget -= 1;
L_003FA24C:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    set32(c.r[2], ld32((c.r[3].w[0] + 28u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003FA260u); c.r[6].d[0] = c.r[29].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003FA260u) [[unlikely]] return; }
L_003FA260:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 56u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003FA288:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[17].w[0])));
    set32(c.r[5], ld32((c.r[16].w[0])));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FA2B0u); set32(c.r[6], ld32((c.r[16].w[0] + 4u)));  if (depth < kMaxDepth) unit_0009(c, 40u, depth + 1u); else { c.pc = 0x00124D20u; return; } if (c.pc != 0x003FA2B0u) [[unlikely]] return; }
L_003FA2B0:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    st32((c.r[17].w[0] + 4u), c.r[3].w[0]);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003FA2D0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[16].d[0]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 56u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FA2F4u); set32(c.r[5], ld32((c.r[17].w[0] + 6968u)));  if (depth < kMaxDepth) unit_00BC(c, 223u, depth + 1u); else { c.pc = 0x003F1C18u; return; } if (c.pc != 0x003FA2F4u) [[unlikely]] return; }
L_003FA2F4:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[16].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_003FA398; }
    set32(c.r[2], ld32((c.r[29].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003FA394; } }
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FA314u); set32(c.r[6], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_00BD(c, 399u, depth + 1u); else { c.pc = 0x003F78C8u; return; } if (c.pc != 0x003FA314u) [[unlikely]] return; }
L_003FA314:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[3], ld32((c.r[29].w[0])));  if (t) { goto L_003FA340; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 12u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[5], c.r[2].w[0] - 3u);
    c.budget -= 6;
    { const bool t = c.r[5].sd[0] >= 0;  if (t) { goto L_003FA38C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_003FA38C; } }
L_003FA340:
    c.r[2].d[0] = c.r[4].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[6], ld32((c.r[29].w[0] + 8u)));  if (t) { goto L_003FA364; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 4u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = c.r[4].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], c.r[4].w[0] - c.r[3].w[0]);  if (t) { goto L_003FA38C; } }
    set32(c.r[6], ld32((c.r[29].w[0] + 8u)));
    c.budget -= 1;
L_003FA364:
    c.r[2].d[0] = c.r[4].d[0] < c.r[6].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_003FA38C; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 12u)));
    set32(c.r[2], c.r[6].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = c.r[4].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], ld32((c.r[29].w[0] + 4u)));  if (t) { goto L_003FA38C; } }
    set32(c.r[2], c.r[4].w[0] - c.r[6].w[0]);
    set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 2;
L_003FA38C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FA394u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BE(c, 172u, depth + 1u); else { c.pc = 0x003FA3A8u; return; } if (c.pc != 0x003FA394u) [[unlikely]] return; }
L_003FA394:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_003FA398:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 56u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003FA3A8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FA3BCu); set32(c.r[5], ld32((c.r[4].w[0] + 6968u)));  if (depth < kMaxDepth) unit_00BC(c, 229u, depth + 1u); else { c.pc = 0x003F1D10u; return; } if (c.pc != 0x003FA3BCu) [[unlikely]] return; }
L_003FA3BC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003FA3C8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[5], 0u + 5u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FA3ECu); set32(c.r[18], c.r[17].w[0] + 7936u);  if (depth < kMaxDepth) unit_00C0(c, 20u, depth + 1u); else { c.pc = 0x00400258u; return; } if (c.pc != 0x003FA3ECu) [[unlikely]] return; }
L_003FA3EC:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003FA548; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FA400u); st32((c.r[17].w[0] + 6960u), c.r[18].w[0]);  if (depth < kMaxDepth) unit_00BE(c, 192u, depth + 1u); else { c.pc = 0x003FA560u; return; } if (c.pc != 0x003FA400u) [[unlikely]] return; }
L_003FA400:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003FA548; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FA410u);  if (depth < kMaxDepth) unit_00BF(c, 15u, depth + 1u); else { c.pc = 0x003FC220u; return; } if (c.pc != 0x003FA410u) [[unlikely]] return; }
L_003FA410:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FA418u);  if (depth < kMaxDepth) unit_00B9(c, 150u, depth + 1u); else { c.pc = 0x003E60D0u; return; } if (c.pc != 0x003FA418u) [[unlikely]] return; }
L_003FA418:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00400000u);
    set32(c.r[5], c.r[5].w[0] - 22232u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[16].d[0] != 0ull; c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003FA458; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[5].d[0] = c.r[5].d[0] | 3850ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 9;
    { set32(c.r[29], c.r[29].w[0] + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003F4840u | kUnwind; return; } [[clang::musttail]] return unit_00BD(c, 82u, depth); }
L_003FA458:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FA460u);  if (depth < kMaxDepth) unit_00B8(c, 157u, depth + 1u); else { c.pc = 0x003E3A60u; return; } if (c.pc != 0x003FA460u) [[unlikely]] return; }
L_003FA460:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_003FA498; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FA470u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BE(c, 213u, depth + 1u); else { c.pc = 0x003FAAD8u; return; } if (c.pc != 0x003FA470u) [[unlikely]] return; }
L_003FA470:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[5].d[0] = c.r[5].d[0] | 3851ull;
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 9;
    { set32(c.r[29], c.r[29].w[0] + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003F4840u | kUnwind; return; } [[clang::musttail]] return unit_00BD(c, 82u, depth); }
L_003FA498:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FA4A0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C0(c, 20u, depth + 1u); else { c.pc = 0x00400258u; return; } if (c.pc != 0x003FA4A0u) [[unlikely]] return; }
L_003FA4A0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FA4B0u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00B9(c, 173u, depth + 1u); else { c.pc = 0x003E62D8u; return; } if (c.pc != 0x003FA4B0u) [[unlikely]] return; }
L_003FA4B0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FA4BCu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00C0(c, 20u, depth + 1u); else { c.pc = 0x00400258u; return; } if (c.pc != 0x003FA4BCu) [[unlikely]] return; }
L_003FA4BC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 2u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FA4CCu); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B9(c, 173u, depth + 1u); else { c.pc = 0x003E62D8u; return; } if (c.pc != 0x003FA4CCu) [[unlikely]] return; }
L_003FA4CC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 3u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FA4DCu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00B9(c, 173u, depth + 1u); else { c.pc = 0x003E62D8u; return; } if (c.pc != 0x003FA4DCu) [[unlikely]] return; }
L_003FA4DC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 4u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FA4ECu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00B9(c, 173u, depth + 1u); else { c.pc = 0x003E62D8u; return; } if (c.pc != 0x003FA4ECu) [[unlikely]] return; }
L_003FA4EC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 5u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FA4FCu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00B9(c, 173u, depth + 1u); else { c.pc = 0x003E62D8u; return; } if (c.pc != 0x003FA4FCu) [[unlikely]] return; }
L_003FA4FC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[17].w[0] + 56u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FA50Cu); set32(c.r[5], 0u + 6u);  if (depth < kMaxDepth) unit_00B9(c, 173u, depth + 1u); else { c.pc = 0x003E62D8u; return; } if (c.pc != 0x003FA50Cu) [[unlikely]] return; }
L_003FA50C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    set32(c.r[5], 0u + 7u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FA520u); c.r[6].d[0] = c.r[6].d[0] | 65535ull;  if (depth < kMaxDepth) unit_00B9(c, 173u, depth + 1u); else { c.pc = 0x003E62D8u; return; } if (c.pc != 0x003FA520u) [[unlikely]] return; }
L_003FA520:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 8u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FA530u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00B9(c, 173u, depth + 1u); else { c.pc = 0x003E62D8u; return; } if (c.pc != 0x003FA530u) [[unlikely]] return; }
L_003FA530:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 9u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FA540u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00B9(c, 173u, depth + 1u); else { c.pc = 0x003E62D8u; return; } if (c.pc != 0x003FA540u) [[unlikely]] return; }
L_003FA540:
    st32((c.r[18].w[0]), c.r[16].w[0]);
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_003FA548:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003FA560:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FA57Cu); c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BE(c, 199u, depth + 1u); else { c.pc = 0x003FA758u; return; } if (c.pc != 0x003FA57Cu) [[unlikely]] return; }
L_003FA57C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003FA5A0; } }
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[5].d[0] = c.r[5].d[0] | 3861ull;
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003F4840u | kUnwind; return; } [[clang::musttail]] return unit_00BD(c, 82u, depth); }
L_003FA5A0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[7], c.r[2].w[0] + 3752u);
    ldl(c.r[3], (c.r[7].w[0] + 7u));
    ldr(c.r[3], (c.r[7].w[0]));
    ldl(c.r[5], (c.r[7].w[0] + 15u));
    ldr(c.r[5], (c.r[7].w[0] + 8u));
    ldl(c.r[6], (c.r[7].w[0] + 23u));
    ldr(c.r[6], (c.r[7].w[0] + 16u));
    sdl(c.r[3], (c.r[16].w[0] + 11u));
    sdr(c.r[3], (c.r[16].w[0] + 4u));
    sdl(c.r[5], (c.r[16].w[0] + 19u));
    sdr(c.r[5], (c.r[16].w[0] + 12u));
    sdl(c.r[6], (c.r[16].w[0] + 27u));
    sdr(c.r[6], (c.r[16].w[0] + 20u));
    ldl(c.r[3], (c.r[7].w[0] + 31u));
    ldr(c.r[3], (c.r[7].w[0] + 24u));
    set32(c.r[5], ld32((c.r[7].w[0] + 32u)));
    sdl(c.r[3], (c.r[16].w[0] + 35u));
    sdr(c.r[3], (c.r[16].w[0] + 28u));
    st32((c.r[16].w[0] + 36u), c.r[5].w[0]);
    set32(c.r[3], c.r[16].w[0] + 48u);
    set32(c.r[7], 0u + 5u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[11], c.r[4].w[0] + 3792u);
    ldl(c.r[8], (c.r[11].w[0] + 7u));
    ldr(c.r[8], (c.r[11].w[0]));
    sdl(c.r[8], (c.r[16].w[0] + 47u));
    sdr(c.r[8], (c.r[16].w[0] + 40u));
    set32(c.r[8], 0u + 192u);
    set32(c.r[9], 0u + 1u);
    c.r[5].d[0] = c.r[3].d[0] + 0ull;
    set32(c.r[11], c.r[2].w[0] + 3800u);
    ldl(c.r[4], (c.r[11].w[0] + 7u));
    ldr(c.r[4], (c.r[11].w[0]));
    ldl(c.r[6], (c.r[11].w[0] + 15u));
    ldr(c.r[6], (c.r[11].w[0] + 8u));
    ldl(c.r[10], (c.r[11].w[0] + 23u));
    ldr(c.r[10], (c.r[11].w[0] + 16u));
    sdl(c.r[4], (c.r[3].w[0] + 7u));
    sdr(c.r[4], (c.r[3].w[0]));
    sdl(c.r[6], (c.r[3].w[0] + 15u));
    sdr(c.r[6], (c.r[3].w[0] + 8u));
    sdl(c.r[10], (c.r[3].w[0] + 23u));
    sdr(c.r[10], (c.r[3].w[0] + 16u));
    ldl(c.r[4], (c.r[11].w[0] + 31u));
    ldr(c.r[4], (c.r[11].w[0] + 24u));
    ldl(c.r[6], (c.r[11].w[0] + 39u));
    ldr(c.r[6], (c.r[11].w[0] + 32u));
    ldl(c.r[10], (c.r[11].w[0] + 47u));
    ldr(c.r[10], (c.r[11].w[0] + 40u));
    sdl(c.r[4], (c.r[3].w[0] + 31u));
    sdr(c.r[4], (c.r[3].w[0] + 24u));
    sdl(c.r[6], (c.r[3].w[0] + 39u));
    sdr(c.r[6], (c.r[3].w[0] + 32u));
    sdl(c.r[10], (c.r[3].w[0] + 47u));
    sdr(c.r[10], (c.r[3].w[0] + 40u));
    ldl(c.r[4], (c.r[11].w[0] + 55u));
    ldr(c.r[4], (c.r[11].w[0] + 48u));
    ldl(c.r[6], (c.r[11].w[0] + 63u));
    ldr(c.r[6], (c.r[11].w[0] + 56u));
    sdl(c.r[4], (c.r[3].w[0] + 55u));
    sdr(c.r[4], (c.r[3].w[0] + 48u));
    sdl(c.r[6], (c.r[3].w[0] + 63u));
    sdr(c.r[6], (c.r[3].w[0] + 56u));
    set32(c.r[6], 0u + 16u);
    st32((c.r[16].w[0] + 116u), c.r[7].w[0]);
    set32(c.r[4], c.r[16].w[0] + 316u);
    st32((c.r[16].w[0] + 120u), c.r[8].w[0]);
    st32((c.r[16].w[0] + 264u), c.r[9].w[0]);
    st32((c.r[16].w[0]), 0u);
    st32((c.r[16].w[0] + 112u), 0u);
    st32((c.r[16].w[0] + 260u), 0u);
    st32((c.r[16].w[0] + 124u), 0u);
    st32((c.r[16].w[0] + 128u), 0u);
    st32((c.r[16].w[0] + 300u), 0u);
    st32((c.r[16].w[0] + 304u), 0u);
    c.budget -= 79;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FA6DCu); st32((c.r[16].w[0] + 308u), 0u);  if (depth < kMaxDepth) unit_00BE(c, 203u, depth + 1u); else { c.pc = 0x003FA820u; return; } if (c.pc != 0x003FA6DCu) [[unlikely]] return; }
L_003FA6DC:
    st32((c.r[16].w[0] + 132u), 0u);
    st32((c.r[16].w[0] + 136u), 0u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FA6ECu); set32(c.r[4], c.r[16].w[0] + 140u);  if (depth < kMaxDepth) unit_00BE(c, 206u, depth + 1u); else { c.pc = 0x003FA8B0u; return; } if (c.pc != 0x003FA6ECu) [[unlikely]] return; }
L_003FA6EC:
    set32(c.r[3], 0u - 1u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    st32((c.r[16].w[0] + 224u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    st32((c.r[16].w[0] + 228u), 0u);
    st32((c.r[16].w[0] + 232u), c.r[2].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FA70Cu); set32(c.r[4], c.r[16].w[0] + 236u);  if (depth < kMaxDepth) unit_00BE(c, 37u, depth + 1u); else { c.pc = 0x003F8590u; return; } if (c.pc != 0x003FA70Cu) [[unlikely]] return; }
L_003FA70C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FA714u); set32(c.r[4], c.r[16].w[0] + 2364u);  if (depth < kMaxDepth) unit_00BE(c, 207u, depth + 1u); else { c.pc = 0x003FA8D0u; return; } if (c.pc != 0x003FA714u) [[unlikely]] return; }
L_003FA714:
    set32(c.r[4], 0u + 15u);
    set32(c.r[2], c.r[16].w[0] + 2512u);
    set32(c.r[3], c.r[16].w[0] + 2276u);
    c.budget -= 3;
L_003FA720:
    set32(c.r[4], c.r[4].w[0] - 1u);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] - 128u);
    c.budget -= 7;
    { const bool t = c.r[4].sd[0] >= 0; set32(c.r[2], c.r[2].w[0] - 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003FA720u | kUnwind; return; } goto L_003FA720; } }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = 0ull + 0ull;
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003FA758:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[3], c.r[5].w[0] + 3752u);
    set32(c.r[2], ld32((c.r[3].w[0] + 28u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(16ll) ? 1ull : 0ull;
    c.budget -= 7;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[3].w[0] + 16u)));  goto L_003FA780; }
L_003FA774:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u - 1u);  c.pc = t; return; }
L_003FA780:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);  if (t) { goto L_003FA798; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 32u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003FA814; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.budget -= 1;
L_003FA798:
    c.r[3].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[2].w[0] + 3792u);
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.budget -= 4;
L_003FA7A8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[4].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003FA774u | kUnwind; return; } goto L_003FA774; } }
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[2].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 7;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[4].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003FA7A8u | kUnwind; return; } goto L_003FA7A8; }
    set32(c.r[2], c.r[5].w[0] + 3752u);
    set32(c.r[4], ld32((c.r[2].w[0] + 28u)));
    c.budget -= 4;
    { const bool t = c.r[4].sd[0] <= 0; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_003FA814; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], c.r[2].w[0] + 3800u);
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.budget -= 5;
L_003FA7F0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[4].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003FA774u | kUnwind; return; } goto L_003FA774; } }
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[2].d[0] = c.r[3].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[4].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003FA7F0u | kUnwind; return; } goto L_003FA7F0; }
L_003FA814:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_003FA820:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    c.budget -= 8;
    { const bool t = c.r[6].sd[0] <= 0; st64((c.r[29].w[0] + 32u), c.r[31].d[0]);  if (t) { goto L_003FA894; } }
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[19], 0u + 1u);
    set32(c.r[2], ld32((c.r[18].w[0])));
    c.budget -= 4;
L_003FA850:
    set32(c.r[18], c.r[18].w[0] + 4u);
    st32((c.r[16].w[0]), 0u);
    set32(c.r[4], c.r[16].w[0] + 44u);
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[17], c.r[17].w[0] - 1u);
    st32((c.r[16].w[0] + 4u), 0u);
    st32((c.r[16].w[0] + 12u), 0u);
    st32((c.r[16].w[0] + 16u), c.r[19].w[0]);
    st32((c.r[16].w[0] + 20u), 0u);
    st32((c.r[16].w[0] + 24u), 0u);
    st32((c.r[16].w[0] + 28u), 0u);
    st32((c.r[16].w[0] + 32u), 0u);
    st32((c.r[16].w[0] + 36u), 0u);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FA88Cu); set32(c.r[16], c.r[16].w[0] + 128u);  if (depth < kMaxDepth) unit_00BE(c, 206u, depth + 1u); else { c.pc = 0x003FA8B0u; return; } if (c.pc != 0x003FA88Cu) [[unlikely]] return; }
L_003FA88C:
    c.budget -= 2;
    if (c.r[17].d[0] != 0ull) { set32(c.r[2], ld32((c.r[18].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003FA850u | kUnwind; return; } goto L_003FA850; }
L_003FA894:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003FA8B0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[5], 0u - 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[6], 0u + 21u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003E0EE8u | kUnwind; return; } [[clang::musttail]] return unit_00B8(c, 53u, depth); }
L_003FA8D0:
    st32((c.r[4].w[0]), 0u);
    set32(c.r[5], 0u + 16u);
    st32((c.r[4].w[0] + 4u), 0u);
    set32(c.r[8], c.r[4].w[0] + 16u);
    st32((c.r[4].w[0] + 8u), 0u);
    set32(c.r[7], c.r[4].w[0] + 12u);
    st32((c.r[4].w[0] + 12u), 0u);
    set32(c.r[6], 0u + 15u);
    st32((c.r[4].w[0] + 16u), 0u);
    st32((c.r[4].w[0] + 20u), 0u);
    st32((c.r[4].w[0] + 24u), 0u);
    c.budget -= 12;
L_003FA900:
    set32(c.r[2], c.r[7].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[8].w[0] + c.r[5].w[0]);
    set32(c.r[6], c.r[6].w[0] - 1u);
    st32((c.r[2].w[0]), 0u);
    st32((c.r[3].w[0]), 0u);
    c.budget -= 7;
    { const bool t = c.r[6].sd[0] >= 0; set32(c.r[5], c.r[5].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003FA900u | kUnwind; return; } goto L_003FA900; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003FA928:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; c.r[3].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(-1ll) ? 1ull : 0ull;  if (t) { goto L_003FA958; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_003FA950; } }
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(-3ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003FA95C; } }
L_003FA950:
    c.budget -= 2;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003F4840u | kUnwind; return; } [[clang::musttail]] return unit_00BD(c, 82u, depth); }
L_003FA958:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_003FA95C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003FA968:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    set32(c.r[16], ld32((c.r[18].w[0] + 6960u)));
    set32(c.r[17], ld32((c.r[16].w[0])));
    c.budget -= 10;
    { const bool t = c.r[17].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003FAABC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[9], c.r[2].w[0] + 3752u);
    ldl(c.r[6], (c.r[16].w[0] + 11u));
    ldr(c.r[6], (c.r[16].w[0] + 4u));
    ldl(c.r[7], (c.r[16].w[0] + 19u));
    ldr(c.r[7], (c.r[16].w[0] + 12u));
    ldl(c.r[8], (c.r[16].w[0] + 27u));
    ldr(c.r[8], (c.r[16].w[0] + 20u));
    sdl(c.r[6], (c.r[9].w[0] + 7u));
    sdr(c.r[6], (c.r[9].w[0]));
    sdl(c.r[7], (c.r[9].w[0] + 15u));
    sdr(c.r[7], (c.r[9].w[0] + 8u));
    sdl(c.r[8], (c.r[9].w[0] + 23u));
    sdr(c.r[8], (c.r[9].w[0] + 16u));
    ldl(c.r[6], (c.r[16].w[0] + 35u));
    ldr(c.r[6], (c.r[16].w[0] + 28u));
    set32(c.r[7], ld32((c.r[16].w[0] + 36u)));
    sdl(c.r[6], (c.r[9].w[0] + 31u));
    sdr(c.r[6], (c.r[9].w[0] + 24u));
    st32((c.r[9].w[0] + 32u), c.r[7].w[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[8], c.r[3].w[0] + 3792u);
    ldl(c.r[2], (c.r[16].w[0] + 47u));
    ldr(c.r[2], (c.r[16].w[0] + 40u));
    sdl(c.r[2], (c.r[8].w[0] + 7u));
    sdr(c.r[2], (c.r[8].w[0]));
    set32(c.r[6], c.r[5].w[0] + 3800u);
    ldl(c.r[9], (c.r[16].w[0] + 55u));
    ldr(c.r[9], (c.r[16].w[0] + 48u));
    ldl(c.r[2], (c.r[16].w[0] + 63u));
    ldr(c.r[2], (c.r[16].w[0] + 56u));
    ldl(c.r[3], (c.r[16].w[0] + 71u));
    ldr(c.r[3], (c.r[16].w[0] + 64u));
    sdl(c.r[9], (c.r[6].w[0] + 7u));
    sdr(c.r[9], (c.r[6].w[0]));
    sdl(c.r[2], (c.r[6].w[0] + 15u));
    sdr(c.r[2], (c.r[6].w[0] + 8u));
    sdl(c.r[3], (c.r[6].w[0] + 23u));
    sdr(c.r[3], (c.r[6].w[0] + 16u));
    ldl(c.r[9], (c.r[16].w[0] + 79u));
    ldr(c.r[9], (c.r[16].w[0] + 72u));
    ldl(c.r[2], (c.r[16].w[0] + 87u));
    ldr(c.r[2], (c.r[16].w[0] + 80u));
    ldl(c.r[3], (c.r[16].w[0] + 95u));
    ldr(c.r[3], (c.r[16].w[0] + 88u));
    sdl(c.r[9], (c.r[6].w[0] + 31u));
    sdr(c.r[9], (c.r[6].w[0] + 24u));
    sdl(c.r[2], (c.r[6].w[0] + 39u));
    sdr(c.r[2], (c.r[6].w[0] + 32u));
    sdl(c.r[3], (c.r[6].w[0] + 47u));
    sdr(c.r[3], (c.r[6].w[0] + 40u));
    ldl(c.r[9], (c.r[16].w[0] + 103u));
    ldr(c.r[9], (c.r[16].w[0] + 96u));
    ldl(c.r[2], (c.r[16].w[0] + 111u));
    ldr(c.r[2], (c.r[16].w[0] + 104u));
    sdl(c.r[9], (c.r[6].w[0] + 55u));
    sdr(c.r[9], (c.r[6].w[0] + 48u));
    sdl(c.r[2], (c.r[6].w[0] + 63u));
    c.budget -= 61;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FAA84u); sdr(c.r[2], (c.r[6].w[0] + 56u));  if (depth < kMaxDepth) unit_00BF(c, 41u, depth + 1u); else { c.pc = 0x003FC620u; return; } if (c.pc != 0x003FAA84u) [[unlikely]] return; }
L_003FAA84:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FAA8Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BE(c, 213u, depth + 1u); else { c.pc = 0x003FAAD8u; return; } if (c.pc != 0x003FAA8Cu) [[unlikely]] return; }
L_003FAA8C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_003FAAB8; } }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[5].d[0] = c.r[5].d[0] | 3852ull;
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003F4840u | kUnwind; return; } [[clang::musttail]] return unit_00BD(c, 82u, depth); }
L_003FAAB8:
    st32((c.r[16].w[0]), 0u);
    c.budget -= 1;
L_003FAABC:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003FAAD8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003E6258u | kUnwind; return; } [[clang::musttail]] return unit_00B9(c, 166u, depth); }
L_003FAAF0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_003FAAF8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_003FAB00:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_003FAB08:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_003FAB10:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = c.r[5].d[0] | 3853ull;
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003F4840u | kUnwind; return; } [[clang::musttail]] return unit_00BD(c, 82u, depth); }
L_003FAB30:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = c.r[5].d[0] | 3853ull;
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003F4840u | kUnwind; return; } [[clang::musttail]] return unit_00BD(c, 82u, depth); }
L_003FAB50:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 40u), c.r[31].d[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FAB74u); set32(c.r[18], c.r[16].w[0] + 3264u);  if (depth < kMaxDepth) unit_00BE(c, 258u, depth + 1u); else { c.pc = 0x003FB1C0u; return; } if (c.pc != 0x003FAB74u) [[unlikely]] return; }
L_003FAB74:
    set32(c.r[3], 0u - 1u);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003FAB90; } }
    st32((c.r[17].w[0]), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003FABD8; } }
L_003FAB90:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FAB98u);  if (depth < kMaxDepth) unit_00BE(c, 271u, depth + 1u); else { c.pc = 0x003FB390u; return; } if (c.pc != 0x003FAB98u) [[unlikely]] return; }
L_003FAB98:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; c.r[5].d[0] = c.r[3].d[0] + 0ull;  if (t) { goto L_003FABB8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0]), 0u);  if (t) { goto L_003FABD8; } }
    c.budget -= 1;
L_003FABB8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FABC0u);  if (depth < kMaxDepth) unit_00BE(c, 224u, depth + 1u); else { c.pc = 0x003FABF0u; return; } if (c.pc != 0x003FABC0u) [[unlikely]] return; }
L_003FABC0:
    c.r[2].d[0] = 0ull + 0ull;
    set32(c.r[3], ld32((c.r[17].w[0])));
    set32(c.r[4], ld32((c.r[3].w[0] + 20u)));
    st32((c.r[18].w[0] + 568u), c.r[4].w[0]);
    set32(c.r[5], ld32((c.r[3].w[0] + 24u)));
    st32((c.r[18].w[0] + 572u), c.r[5].w[0]);
    c.budget -= 6;
L_003FABD8:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 40u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003FABF0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FAC1Cu); set32(c.r[19], ld32((c.r[17].w[0] + 6960u)));  if (depth < kMaxDepth) unit_00BE(c, 253u, depth + 1u); else { c.pc = 0x003FB148u; return; } if (c.pc != 0x003FAC1Cu) [[unlikely]] return; }
L_003FAC1C:
    set32(c.r[3], 0u + 1u);
    set32(c.r[5], c.r[16].w[0] + 44u);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + 4u);
    set32(c.r[4], ld32((c.r[5].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[5].w[0])));
    st32((c.r[2].w[0] + 16u), c.r[4].w[0]);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    set32(c.r[7], ld32((c.r[17].w[0] + 56u)));
    set32(c.r[3], ld32((c.r[5].w[0] + 4u)));
    set32(c.r[8], ld32((c.r[16].w[0] + 40u)));
    st32((c.r[2].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[6], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[5].w[0] + 8u)));
    set32(c.r[9], ld32((c.r[5].w[0] + 56u)));
    st32((c.r[2].w[0] + 8u), c.r[3].w[0]);
    st32((c.r[18].w[0]), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0] + 12u)));
    st32((c.r[19].w[0] + 112u), c.r[16].w[0]);
    st32((c.r[2].w[0] + 12u), c.r[3].w[0]);
    st32((c.r[2].w[0] + 28u), c.r[7].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    st32((c.r[2].w[0] + 32u), c.r[6].w[0]);
    st32((c.r[2].w[0] + 20u), c.r[3].w[0]);
    st32((c.r[2].w[0] + 56u), c.r[8].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 16u)));
    st32((c.r[2].w[0] + 24u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 20u)));
    st32((c.r[2].w[0] + 36u), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 24u)));
    st32((c.r[2].w[0] + 40u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 28u)));
    st32((c.r[2].w[0] + 44u), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 32u)));
    st32((c.r[2].w[0] + 48u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 36u)));
    st32((c.r[2].w[0] + 52u), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0] + 64u)));
    set32(c.r[4], ld32((c.r[5].w[0] + 80u)));
    st32((c.r[2].w[0] + 68u), c.r[3].w[0]);
    set32(c.r[6], ld32((c.r[5].w[0] + 60u)));
    set32(c.r[3], ld32((c.r[5].w[0] + 68u)));
    set32(c.r[7], ld32((c.r[5].w[0] + 76u)));
    st32((c.r[2].w[0] + 72u), c.r[3].w[0]);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[3], ld32((c.r[5].w[0] + 72u)));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    st32((c.r[2].w[0] + 60u), c.r[9].w[0]);
    st32((c.r[2].w[0] + 84u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 64u), c.r[6].w[0]);
    st32((c.r[2].w[0] + 76u), c.r[3].w[0]);
    st32((c.r[2].w[0] + 80u), c.r[7].w[0]);
    c.budget -= 57;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003FAD00:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FAD20u); c.r[4].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BD(c, 102u, depth + 1u); else { c.pc = 0x003F4AF8u; return; } if (c.pc != 0x003FAD20u) [[unlikely]] return; }
L_003FAD20:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FAD2Cu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BE(c, 230u, depth + 1u); else { c.pc = 0x003FAD50u; return; } if (c.pc != 0x003FAD2Cu) [[unlikely]] return; }
L_003FAD2C:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FAD38u); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BD(c, 103u, depth + 1u); else { c.pc = 0x003F4B10u; return; } if (c.pc != 0x003FAD38u) [[unlikely]] return; }
L_003FAD38:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[17].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003FAD50:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FAD78u); set32(c.r[19], ld32((c.r[17].w[0] + 6960u)));  if (depth < kMaxDepth) unit_00BE(c, 234u, depth + 1u); else { c.pc = 0x003FAE20u; return; } if (c.pc != 0x003FAD78u) [[unlikely]] return; }
L_003FAD78:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], ld32((c.r[18].w[0])));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003FADB8; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[5].d[0] = c.r[5].d[0] | 3854ull;
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 9;
    { set32(c.r[29], c.r[29].w[0] + 48u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003F4840u | kUnwind; return; } [[clang::musttail]] return unit_00BD(c, 82u, depth); }
L_003FADB8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FADC0u);  if (depth < kMaxDepth) unit_00BE(c, 251u, depth + 1u); else { c.pc = 0x003FB100u; return; } if (c.pc != 0x003FADC0u) [[unlikely]] return; }
L_003FADC0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    set32(c.r[3], ld32((c.r[19].w[0] + 112u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[5].d[0] = c.r[5].d[0] | 3855ull;  if (t) { goto L_003FADF0; } }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 48u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003F4840u | kUnwind; return; } [[clang::musttail]] return unit_00BD(c, 82u, depth); }
L_003FADF0:
    st32((c.r[18].w[0]), 0u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FADFCu); c.r[4].d[0] = c.r[3].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BE(c, 269u, depth + 1u); else { c.pc = 0x003FB340u; return; } if (c.pc != 0x003FADFCu) [[unlikely]] return; }
L_003FADFC:
    c.r[2].d[0] = 0ull + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003FAE20:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[5].w[0] - 4u);  c.pc = t; return; }
L_003FAE28:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 24u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[16], ld32((c.r[17].w[0] + 6960u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FAE4Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BE(c, 238u, depth + 1u); else { c.pc = 0x003FAE98u; return; } if (c.pc != 0x003FAE4Cu) [[unlikely]] return; }
L_003FAE4C:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_003FAE88; }
    set32(c.r[3], ld32((c.r[29].w[0])));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; st32((c.r[16].w[0] + 116u), c.r[2].w[0]);  if (t) { goto L_003FAE78; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FAE70u); set32(c.r[5], 0u + 48u);  if (depth < kMaxDepth) unit_00C0(c, 20u, depth + 1u); else { c.pc = 0x00400258u; return; } if (c.pc != 0x003FAE70u) [[unlikely]] return; }
L_003FAE70:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], 0u + 200u);  goto L_003FAE7C; }
L_003FAE78:
    set32(c.r[2], 0u + 192u);
    c.budget -= 1;
L_003FAE7C:
    st32((c.r[16].w[0] + 120u), c.r[2].w[0]);
    c.r[2].d[0] = 0ull + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 3;
L_003FAE88:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003FAE98:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[16].d[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 40u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 56u), c.r[31].d[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FAEC0u); st32((c.r[18].w[0]), 0u);  if (depth < kMaxDepth) unit_00BE(c, 242u, depth + 1u); else { c.pc = 0x003FAF88u; return; } if (c.pc != 0x003FAEC0u) [[unlikely]] return; }
L_003FAEC0:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_003FAF74; }
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003FAF70; } }
    ldl(c.r[2], (c.r[4].w[0] + 19u));
    ldr(c.r[2], (c.r[4].w[0] + 12u));
    ldl(c.r[3], (c.r[4].w[0] + 27u));
    ldr(c.r[3], (c.r[4].w[0] + 20u));
    ldl(c.r[5], (c.r[4].w[0] + 35u));
    ldr(c.r[5], (c.r[4].w[0] + 28u));
    ldl(c.r[6], (c.r[4].w[0] + 43u));
    ldr(c.r[6], (c.r[4].w[0] + 36u));
    sdl(c.r[2], (c.r[17].w[0] + 3299u));
    sdr(c.r[2], (c.r[17].w[0] + 3292u));
    sdl(c.r[3], (c.r[17].w[0] + 3307u));
    sdr(c.r[3], (c.r[17].w[0] + 3300u));
    sdl(c.r[5], (c.r[17].w[0] + 3315u));
    sdr(c.r[5], (c.r[17].w[0] + 3308u));
    sdl(c.r[6], (c.r[17].w[0] + 3323u));
    sdr(c.r[6], (c.r[17].w[0] + 3316u));
    ldl(c.r[2], (c.r[4].w[0] + 51u));
    ldr(c.r[2], (c.r[4].w[0] + 44u));
    sdl(c.r[2], (c.r[17].w[0] + 3331u));
    sdr(c.r[2], (c.r[17].w[0] + 3324u));
    set32(c.r[3], c.r[4].w[0] + 52u);
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] + 512u)));
    set32(c.r[6], c.r[29].w[0] + 16u);
    st32((c.r[29].w[0]), c.r[3].w[0]);
    c.budget -= 28;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FAF48u); st32((c.r[29].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00B9(c, 29u, depth + 1u); else { c.pc = 0x003E43A0u; return; } if (c.pc != 0x003FAF48u) [[unlikely]] return; }
L_003FAF48:
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[5].d[0] | 3867ull;  if (t) { goto L_003FAF68; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FAF60u);  if (depth < kMaxDepth) unit_00BD(c, 82u, depth + 1u); else { c.pc = 0x003F4840u; return; } if (c.pc != 0x003FAF60u) [[unlikely]] return; }
L_003FAF60:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_003FAF74; } }
L_003FAF68:
    set32(c.r[3], 0u + 1u);
    st32((c.r[18].w[0]), c.r[3].w[0]);
    c.budget -= 2;
L_003FAF70:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_003FAF74:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 56u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003FAF88:
    set32(c.r[3], ld32((c.r[4].w[0] + 10928u)));
    c.r[2].d[0] = 0ull + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 6960u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[5], c.r[3].w[0] + 2756u);  if (t) { goto L_003FAFB0; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 136u)));
    c.r[3].d[0] = 0ull + 0ull;
    c.r[3].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.r[2].d[0] = 0ull + 0ull;
    if (c.r[3].d[0] == 0) c.r[2].d[0] = c.r[5].d[0];
    c.budget -= 5;
L_003FAFB0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003FAFB8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FAFD4u); c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BD(c, 94u, depth + 1u); else { c.pc = 0x003F4A60u; return; } if (c.pc != 0x003FAFD4u) [[unlikely]] return; }
L_003FAFD4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_003FAFF8; } }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[5].d[0] = c.r[5].d[0] | 392ull;
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003F4840u | kUnwind; return; } [[clang::musttail]] return unit_00BD(c, 82u, depth); }
L_003FAFF8:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FB004u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BE(c, 251u, depth + 1u); else { c.pc = 0x003FB100u; return; } if (c.pc != 0x003FB004u) [[unlikely]] return; }
L_003FB004:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003FB028; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FB01Cu); c.r[5].d[0] = c.r[5].d[0] | 3888ull;  if (depth < kMaxDepth) unit_00BD(c, 82u, depth + 1u); else { c.pc = 0x003F4840u; return; } if (c.pc != 0x003FB01Cu) [[unlikely]] return; }
L_003FB01C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[16].w[0] + 2420u)));  if (t) { goto L_003FB038; } }
    c.budget -= 1;
L_003FB028:
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[3].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 2420u)));
    c.budget -= 4;
L_003FB038:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    st32((c.r[16].w[0] + 2420u), c.r[2].w[0]);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003FB058:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FB074u); c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BD(c, 94u, depth + 1u); else { c.pc = 0x003F4A60u; return; } if (c.pc != 0x003FB074u) [[unlikely]] return; }
L_003FB074:
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_003FB098; } }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[5].d[0] = c.r[5].d[0] | 393ull;
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003F4840u | kUnwind; return; } [[clang::musttail]] return unit_00BD(c, 82u, depth); }
L_003FB098:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FB0A4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BE(c, 251u, depth + 1u); else { c.pc = 0x003FB100u; return; } if (c.pc != 0x003FB0A4u) [[unlikely]] return; }
L_003FB0A4:
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    c.budget -= 4;
    { const bool t = c.r[6].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003FB0C8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FB0BCu); c.r[5].d[0] = c.r[5].d[0] | 3889ull;  if (depth < kMaxDepth) unit_00BD(c, 82u, depth + 1u); else { c.pc = 0x003F4840u; return; } if (c.pc != 0x003FB0BCu) [[unlikely]] return; }
L_003FB0BC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[16].w[0] + 2420u)));  if (t) { goto L_003FB0E0; } }
    c.budget -= 1;
L_003FB0C8:
    set32(c.r[2], ld32((c.r[6].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[3].d[0] = c.r[2].sd[0] < 0ll ? 1ull : 0ull;
    if (c.r[3].d[0] != 0) c.r[2].d[0] = 0ull;
    st32((c.r[6].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 2420u)));
    c.budget -= 6;
L_003FB0E0:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    st32((c.r[16].w[0] + 2420u), c.r[2].w[0]);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003FB100:
    set32(c.r[2], ld32((c.r[4].w[0] + 6960u)));
    set32(c.r[4], c.r[4].w[0] + 5344u);
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[6], c.r[2].w[0] + 316u);
    set32(c.r[3], c.r[4].w[0] + 4u);
    c.budget -= 6;
L_003FB118:
    set32(c.r[4], c.r[4].w[0] + 92u);
    c.r[2].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[5].d[0]; set32(c.r[6], c.r[6].w[0] + 128u);  if (t) { goto L_003FB140; } }
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.r[2].d[0] = c.r[7].sd[0] < 16ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], c.r[4].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003FB118u | kUnwind; return; } goto L_003FB118; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003FB140:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003FB148:
    set32(c.r[2], ld32((c.r[4].w[0] + 6960u)));
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[6], ld32((c.r[2].w[0] + 312u)));
    c.budget -= 5;
    { const bool t = c.r[6].sd[0] <= 0; set32(c.r[3], c.r[2].w[0] + 316u);  if (t) { goto L_003FB184; } }
    set32(c.r[4], c.r[4].w[0] + 5344u);
    c.budget -= 1;
L_003FB160:
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[5].d[0]; set32(c.r[4], c.r[4].w[0] + 92u);  if (t) { goto L_003FB188; } }
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.r[2].d[0] = c.r[7].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], c.r[3].w[0] + 128u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003FB160u | kUnwind; return; } goto L_003FB160; } }
L_003FB184:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003FB188:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003FB190:
    set32(c.r[3], ld32((c.r[4].w[0] + 6960u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[3].w[0] + 124u), c.r[2].w[0]);  c.pc = t; return; }
L_003FB1A0:
    set32(c.r[3], ld32((c.r[4].w[0] + 6960u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[3].w[0] + 124u)));  c.pc = t; return; }
L_003FB1B0:
    set32(c.r[2], ld32((c.r[4].w[0] + 6960u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[2].w[0] + 128u), c.r[5].w[0]);  c.pc = t; return; }
L_003FB1C0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FB1D8u); c.r[4].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BD(c, 102u, depth + 1u); else { c.pc = 0x003F4AF8u; return; } if (c.pc != 0x003FB1D8u) [[unlikely]] return; }
L_003FB1D8:
    set32(c.r[5], ld32((c.r[16].w[0] + 6960u)));
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[5].w[0] + 312u)));
    c.budget -= 5;
    { const bool t = c.r[2].sd[0] <= 0; set32(c.r[4], c.r[5].w[0] + 316u);  if (t) { goto L_003FB22C; } }
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[7], 0u + 2u);
    set32(c.r[6], 0u + 4u);
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.budget -= 5;
L_003FB200:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[7].d[0]; set32(c.r[4], c.r[4].w[0] + 128u);  if (t) { goto L_003FB210; } }
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[6].d[0]) { set32(c.r[3], c.r[3].w[0] - 1u);  goto L_003FB218; }
L_003FB210:
    set32(c.r[16], c.r[16].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 2;
L_003FB218:
    c.budget -= 5;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], ld32((c.r[4].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003FB200u | kUnwind; return; } goto L_003FB200; }
L_003FB22C:
    set32(c.r[3], ld32((c.r[5].w[0] + 124u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u - 1u);  if (t) { goto L_003FB240; } }
    if (c.r[16].d[0] == 0) c.r[16].d[0] = c.r[2].d[0];
    c.budget -= 1;
L_003FB240:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FB248u); c.r[4].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BD(c, 103u, depth + 1u); else { c.pc = 0x003F4B10u; return; } if (c.pc != 0x003FB248u) [[unlikely]] return; }
L_003FB248:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003FB260:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FB278u); c.r[4].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BD(c, 102u, depth + 1u); else { c.pc = 0x003F4AF8u; return; } if (c.pc != 0x003FB278u) [[unlikely]] return; }
L_003FB278:
    set32(c.r[2], ld32((c.r[16].w[0] + 6960u)));
    c.r[3].d[0] = 0ull + 0ull;
    set32(c.r[4], ld32((c.r[2].w[0] + 312u)));
    c.budget -= 5;
    { const bool t = c.r[4].sd[0] <= 0; set32(c.r[16], c.r[2].w[0] + 316u);  if (t) { goto L_003FB2D8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[16].w[0])));  if (t) { goto L_003FB2A8; } }
    c.budget -= 1;
L_003FB298:
    c.r[2].d[0] = c.r[3].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[16], c.r[16].w[0] + 128u);  if (t) { goto L_003FB2D8; } }
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 1;
L_003FB2A8:
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], c.r[3].w[0] + 1u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003FB298u | kUnwind; return; } goto L_003FB298; }
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], c.r[3].w[0] + 1u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003FB298u | kUnwind; return; } goto L_003FB298; }
    set32(c.r[2], 0u + 1u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 2;
L_003FB2D8:
    c.r[2].d[0] = c.r[3].d[0] ^ c.r[4].d[0];
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FB2E8u); if (c.r[2].d[0] == 0) c.r[16].d[0] = 0ull;  if (depth < kMaxDepth) unit_00BD(c, 103u, depth + 1u); else { c.pc = 0x003F4B10u; return; } if (c.pc != 0x003FB2E8u) [[unlikely]] return; }
L_003FB2E8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003FB300:
    c.budget -= 2;
    if (c.r[4].d[0] != 0ull) { st32((c.r[4].w[0]), 0u);  goto L_003FB308; }
L_003FB308:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003FB310:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[2], 0u + 2u);  if (t) { goto L_003FB31C; } }
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.budget -= 1;
L_003FB31C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003FB328:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[2], 0u + 4u);  if (t) { goto L_003FB334; } }
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.budget -= 1;
L_003FB334:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003FB340:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[2], 0u + 4u);  if (t) { goto L_003FB360; } }
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { st32((c.r[4].w[0]), 0u);  goto L_003FB360; }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0]), c.r[2].w[0]);  c.pc = t; return; }
L_003FB360:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003FB368:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[2], 0u + 4u);  if (t) { goto L_003FB388; } }
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { st32((c.r[4].w[0]), 0u);  goto L_003FB388; }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0]), c.r[2].w[0]);  c.pc = t; return; }
L_003FB388:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003FB390:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 40u), c.r[19].d[0]);
    c.r[18].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[20].d[0]);
    c.r[20].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 72u), c.r[23].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 56u), c.r[21].d[0]);
    st64((c.r[29].w[0] + 64u), c.r[22].d[0]);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FB3D0u); c.r[23].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BD(c, 102u, depth + 1u); else { c.pc = 0x003F4AF8u; return; } if (c.pc != 0x003FB3D0u) [[unlikely]] return; }
L_003FB3D0:
    set32(c.r[19], ld32((c.r[16].w[0] + 6960u)));
    set32(c.r[2], ld32((c.r[19].w[0] + 312u)));
    set32(c.r[16], c.r[19].w[0] + 316u);
    c.budget -= 5;
    { const bool t = c.r[2].sd[0] <= 0; st32((c.r[23].w[0]), 0u);  if (t) { goto L_003FB424; } }
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[22], 0u + 2u);
    set32(c.r[21], 0u + 4u);
    c.budget -= 3;
L_003FB3F0:
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[22].d[0]; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_003FB408; } }
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[21].d[0]) { set32(c.r[17], c.r[17].w[0] - 1u);  goto L_003FB41C; }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_003FB408:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FB410u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BE(c, 284u, depth + 1u); else { c.pc = 0x003FB5B0u; return; } if (c.pc != 0x003FB410u) [[unlikely]] return; }
L_003FB410:
    set32(c.r[20], c.r[20].w[0] + 1u);
    if (c.r[2].d[0] != 0) c.r[18].d[0] = c.r[16].d[0];
    set32(c.r[17], c.r[17].w[0] - 1u);
    c.budget -= 3;
L_003FB41C:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 128u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003FB3F0u | kUnwind; return; } goto L_003FB3F0; } }
L_003FB424:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[20].d[0] != c.r[2].d[0];  if (t) { goto L_003FB43C; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 124u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { st32((c.r[23].w[0]), c.r[20].w[0]);  goto L_003FB43C; }
L_003FB43C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FB444u); c.r[4].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BD(c, 103u, depth + 1u); else { c.pc = 0x003F4B10u; return; } if (c.pc != 0x003FB444u) [[unlikely]] return; }
L_003FB444:
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 56u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[23].d[0] = ld64((c.r[29].w[0] + 72u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_003FB478:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 48u), c.r[20].d[0]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    c.r[18].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 40u), c.r[19].d[0]);
    c.r[19].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 56u), c.r[21].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 64u), c.r[22].d[0]);
    st64((c.r[29].w[0] + 72u), c.r[23].d[0]);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FB4B8u); c.r[21].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00BD(c, 102u, depth + 1u); else { c.pc = 0x003F4AF8u; return; } if (c.pc != 0x003FB4B8u) [[unlikely]] return; }
L_003FB4B8:
    set32(c.r[2], ld32((c.r[20].w[0] + 6960u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 312u)));
    c.budget -= 4;
    { const bool t = c.r[3].sd[0] <= 0; set32(c.r[16], c.r[2].w[0] + 316u);  if (t) { goto L_003FB530; } }
    c.r[17].d[0] = c.r[3].d[0] + 0ull;
    set32(c.r[23], 0u + 2u);
    set32(c.r[22], 0u + 4u);
    c.budget -= 4;
L_003FB4D8:
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[23].d[0]; c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_003FB4F0; } }
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[22].d[0]) { set32(c.r[17], c.r[17].w[0] - 1u);  goto L_003FB528; }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_003FB4F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FB4F8u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BE(c, 284u, depth + 1u); else { c.pc = 0x003FB5B0u; return; } if (c.pc != 0x003FB4F8u) [[unlikely]] return; }
L_003FB4F8:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[21], c.r[21].w[0] + 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003FB518; } }
    c.r[18].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003FB524; } }
    c.budget -= 1;
L_003FB518:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FB520u);  if (depth < kMaxDepth) unit_00BE(c, 284u, depth + 1u); else { c.pc = 0x003FB5B0u; return; } if (c.pc != 0x003FB520u) [[unlikely]] return; }
L_003FB520:
    if (c.r[2].d[0] != 0) c.r[18].d[0] = c.r[16].d[0];
    c.budget -= 1;
L_003FB524:
    set32(c.r[17], c.r[17].w[0] - 1u);
    c.budget -= 1;
L_003FB528:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 128u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003FB4D8u | kUnwind; return; } goto L_003FB4D8; } }
L_003FB530:
    set32(c.r[3], ld32((c.r[20].w[0] + 72u)));
    set32(c.r[2], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_003FB574; } }
    c.r[2].d[0] = c.r[21].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003FB574; } }
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FB558u); set32(c.r[5], 0u + 15u);  if (depth < kMaxDepth) unit_00C0(c, 20u, depth + 1u); else { c.pc = 0x00400258u; return; } if (c.pc != 0x003FB558u) [[unlikely]] return; }
L_003FB558:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[16], 0u + 1u);  if (t) { goto L_003FB574; } }
    set32(c.r[6], ld32((c.r[18].w[0] + 16u)));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FB570u); set32(c.r[5], ld32((c.r[18].w[0] + 12u)));  if (depth < kMaxDepth) unit_00C0(c, 163u, depth + 1u); else { c.pc = 0x00401B98u; return; } if (c.pc != 0x003FB570u) [[unlikely]] return; }
L_003FB570:
    c.r[16].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 1;
L_003FB574:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FB57Cu); c.r[4].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BD(c, 103u, depth + 1u); else { c.pc = 0x003F4B10u; return; } if (c.pc != 0x003FB57Cu) [[unlikely]] return; }
L_003FB57C:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[17].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 56u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[23].d[0] = ld64((c.r[29].w[0] + 72u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_003FB5B0:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_003FB5C4; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[2], ld32((c.r[5].w[0] + 12u)));
    c.r[2].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
L_003FB5C4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003FB5D0:
    c.r[7].d[0] = c.r[4].d[0] + 0ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x0FFF0000u);
    set32(c.r[4], ld32((c.r[7].w[0] + 8u)));
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    set32(c.r[6], ld32((c.r[7].w[0] + 4u)));
    set32(c.r[4], c.r[4].w[0] << 4);
    set32(c.r[4], c.r[4].w[0] + c.r[6].w[0]);
    set32(c.r[4], c.r[4].w[0] + 16u);
    c.r[4].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 11;
    { const bool t = c.r[5].d[0] == c.r[4].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003FB614; } }
    set32(c.r[2], ld32((c.r[7].w[0])));
    set32(c.r[2], c.r[5].w[0] - c.r[2].w[0]);
    set32(c.r[4], c.r[2].w[0] + 2047u);
    c.r[3].d[0] = c.r[2].sd[0] < 0ll ? 1ull : 0ull;
    if (c.r[3].d[0] != 0) c.r[2].d[0] = c.r[4].d[0];
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 11));
    c.budget -= 6;
L_003FB614:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003FB620:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FB634u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0005(c, 85u, depth + 1u); else { c.pc = 0x00114960u; return; } if (c.pc != 0x003FB634u) [[unlikely]] return; }
L_003FB634:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[5].d[0] = c.r[5].d[0] | 62752ull;
    c.r[6].sd[0] = static_cast<std::int32_t>(0x10000000u);
    set32(c.r[2], ld32((c.r[5].w[0])));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[6].d[0] = c.r[6].d[0] | 62864ull;
    c.r[4].d[0] = c.r[4].d[0] | 45056ull;
    c.r[2].d[0] = c.r[2].d[0] | c.r[7].d[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFFFE0000u);
    st32((c.r[6].w[0]), c.r[2].w[0]);
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    st32((c.r[4].w[0]), c.r[16].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    set32(c.r[2], ld32((c.r[5].w[0])));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    st32((c.r[6].w[0]), c.r[2].w[0]);
    c.budget -= 20;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001149A8u | kUnwind; return; } [[clang::musttail]] return unit_0005(c, 87u, depth); }
L_003FB688:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FB69Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0005(c, 85u, depth + 1u); else { c.pc = 0x00114960u; return; } if (c.pc != 0x003FB69Cu) [[unlikely]] return; }
L_003FB69C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[5].d[0] = c.r[5].d[0] | 62752ull;
    c.r[6].sd[0] = static_cast<std::int32_t>(0x10000000u);
    set32(c.r[2], ld32((c.r[5].w[0])));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[6].d[0] = c.r[6].d[0] | 62864ull;
    c.r[4].d[0] = c.r[4].d[0] | 46080ull;
    c.r[2].d[0] = c.r[2].d[0] | c.r[7].d[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFFFE0000u);
    st32((c.r[6].w[0]), c.r[2].w[0]);
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    st32((c.r[4].w[0]), c.r[16].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    set32(c.r[2], ld32((c.r[5].w[0])));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    st32((c.r[6].w[0]), c.r[2].w[0]);
    c.budget -= 20;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001149A8u | kUnwind; return; } [[clang::musttail]] return unit_0005(c, 87u, depth); }
L_003FB6F0:
    c.r[6].d[0] = c.r[6].d[0] << 32;
    c.r[5].d[0] = c.r[5].d[0] << 32;
    c.r[6].d[0] = c.r[6].d[0] >> 4;
    c.r[7].d[0] = c.r[7].d[0] << 32;
    c.r[5].d[0] = c.r[5].d[0] | c.r[6].d[0];
    c.r[7].d[0] = c.r[7].d[0] >> 32;
    c.r[5].d[0] = c.r[5].d[0] | c.r[7].d[0];
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; st64((c.r[4].w[0]), c.r[5].d[0]);  c.pc = t; return; }
L_003FB718:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x0FFF0000u);
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[6].d[0] = c.r[6].d[0] & c.r[2].d[0];
    set32(c.r[2], 0u + 1u);
    st64((c.r[29].w[0] + 32u), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[6].d[0] = c.r[6].d[0] | c.r[3].d[0];
    set32(c.r[10], c.r[7].w[0] << 11);
    st64((c.r[29].w[0] + 40u), c.r[31].d[0]);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    st32((c.r[16].w[0] + 84u), c.r[9].w[0]);
    st32((c.r[16].w[0] + 24u), c.r[10].w[0]);
    st32((c.r[16].w[0] + 8u), c.r[7].w[0]);
    st32((c.r[16].w[0]), c.r[5].w[0]);
    st32((c.r[16].w[0] + 80u), c.r[8].w[0]);
    st32((c.r[16].w[0] + 4u), c.r[6].w[0]);
    st32((c.r[29].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FB76Cu); st32((c.r[29].w[0] + 8u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0002(c, 500u, depth + 1u); else { c.pc = 0x0010BC20u; return; } if (c.pc != 0x003FB76Cu) [[unlikely]] return; }
L_003FB76C:
    st32((c.r[16].w[0] + 64u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FB778u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BE(c, 294u, depth + 1u); else { c.pc = 0x003FB790u; return; } if (c.pc != 0x003FB778u) [[unlikely]] return; }
L_003FB778:
    st64((c.r[16].w[0] + 72u), 0ull);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 40u));
    set32(c.r[2], 0u + 1u);
    c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003FB790:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], 0u + 1u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    st32((c.r[17].w[0] + 68u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 84u)));
    st32((c.r[17].w[0] + 12u), 0u);
    st32((c.r[17].w[0] + 16u), 0u);
    st32((c.r[17].w[0] + 20u), 0u);
    st32((c.r[17].w[0] + 88u), 0u);
    c.budget -= 16;
    { const bool t = c.r[3].sd[0] <= 0; st32((c.r[17].w[0] + 92u), 0u);  if (t) { goto L_003FB7FC; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 80u)));
    set32(c.r[4], 0u - 1u);
    c.budget -= 2;
L_003FB7D8:
    st32((c.r[3].w[0] + 16u), 0u);
    set32(c.r[18], c.r[18].w[0] + 1u);
    st32((c.r[3].w[0] + 20u), 0u);
    st64((c.r[3].w[0]), c.r[4].d[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 84u)));
    st64((c.r[3].w[0] + 8u), c.r[4].d[0]);
    c.r[2].d[0] = c.r[18].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], c.r[3].w[0] + 24u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003FB7D8u | kUnwind; return; } goto L_003FB7D8; } }
L_003FB7FC:
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_003FB850; } }
    c.r[16].sd[0] = static_cast<std::int32_t>(0x0FFF0000u);
    c.r[16].d[0] = c.r[16].d[0] | 65535ull;
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.budget -= 4;
L_003FB818:
    set32(c.r[5], c.r[18].w[0] << 11);
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[4], c.r[18].w[0] << 4);
    set32(c.r[5], c.r[5].w[0] + c.r[2].w[0]);
    set32(c.r[6], 0u + 3u);
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    c.r[5].d[0] = c.r[5].d[0] & c.r[16].d[0];
    set32(c.r[7], 0u + 128u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FB840u); set32(c.r[18], c.r[18].w[0] + 1u);  if (depth < kMaxDepth) unit_00BE(c, 290u, depth + 1u); else { c.pc = 0x003FB6F0u; return; } if (c.pc != 0x003FB840u) [[unlikely]] return; }
L_003FB840:
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    c.r[2].d[0] = c.r[18].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[17].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003FB818u | kUnwind; return; } goto L_003FB818; }
L_003FB850:
    set32(c.r[5], ld32((c.r[17].w[0] + 4u)));
    c.r[16].sd[0] = static_cast<std::int32_t>(0x0FFF0000u);
    c.r[16].d[0] = c.r[16].d[0] | 65535ull;
    set32(c.r[4], c.r[18].w[0] << 4);
    set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);
    c.r[5].d[0] = c.r[5].d[0] & c.r[16].d[0];
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FB874u); set32(c.r[6], 0u + 2u);  if (depth < kMaxDepth) unit_00BE(c, 290u, depth + 1u); else { c.pc = 0x003FB6F0u; return; } if (c.pc != 0x003FB874u) [[unlikely]] return; }
L_003FB874:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x10000000u);
    set32(c.r[6], ld32((c.r[17].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[6].d[0] = c.r[6].d[0] & c.r[16].d[0];
    c.r[3].d[0] = c.r[3].d[0] | 46096ull;
    c.r[2].d[0] = c.r[2].d[0] & c.r[16].d[0];
    c.r[5].d[0] = c.r[5].d[0] | 46128ull;
    c.r[4].d[0] = c.r[4].d[0] | 46112ull;
    st32((c.r[4].w[0]), 0u);
    set32(c.r[4], 0u + 5u);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FB8B0u); st32((c.r[5].w[0]), c.r[6].w[0]);  if (depth < kMaxDepth) unit_00BE(c, 288u, depth + 1u); else { c.pc = 0x003FB688u; return; } if (c.pc != 0x003FB8B0u) [[unlikely]] return; }
L_003FB8B0:
    set32(c.r[2], 0u + 1u);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003FB8D0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    c.r[19].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[20].d[0]);
    c.r[20].d[0] = c.r[8].d[0] + 0ull;
    st64((c.r[29].w[0] + 40u), c.r[31].d[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FB908u); set32(c.r[4], ld32((c.r[16].w[0] + 64u)));  if (depth < kMaxDepth) unit_0002(c, 508u, depth + 1u); else { c.pc = 0x0010BC60u; return; } if (c.pc != 0x003FB908u) [[unlikely]] return; }
L_003FB908:
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[6], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 24u)));
    set32(c.r[3], c.r[3].w[0] << 11);
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    c.budget -= 10;
    if (c.r[4].d[0] == 0ull) { breakpoint(c, 0x003FB92Cu);  goto L_003FB930; }
L_003FB930:
    mmi::div(c, 0, c.r[3].w[0], c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] - c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] << 11);
    set32(c.r[2], c.r[2].w[0] - 4096u);
    set32(c.r[5], c.r[2].w[0] - c.r[6].w[0]);
    c.r[7].d[0] = c.hi.d[0];
    set32(c.r[4], c.r[4].w[0] - c.r[7].w[0]);
    c.r[2].d[0] = c.r[4].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 10;
    if (c.r[2].d[0] != 0ull) { st32((c.r[17].w[0]), c.r[4].w[0]);  goto L_003FB978; }
    set32(c.r[2], ld32((c.r[16].w[0])));
    st32((c.r[17].w[0]), c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[7].w[0]);
    st32((c.r[20].w[0]), 0u);
    st32((c.r[18].w[0]), c.r[2].w[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0]), 0u);  if (t) { goto L_003FB998; } }
    c.budget -= 1;
L_003FB978:
    set32(c.r[4], ld32((c.r[16].w[0])));
    set32(c.r[2], ld32((c.r[16].w[0] + 24u)));
    set32(c.r[3], c.r[4].w[0] + c.r[7].w[0]);
    set32(c.r[2], c.r[2].w[0] - c.r[7].w[0]);
    st32((c.r[18].w[0]), c.r[3].w[0]);
    set32(c.r[2], c.r[5].w[0] - c.r[2].w[0]);
    st32((c.r[19].w[0]), c.r[4].w[0]);
    st32((c.r[20].w[0]), c.r[2].w[0]);
    c.budget -= 8;
L_003FB998:
    set32(c.r[4], ld32((c.r[16].w[0] + 64u)));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 40u));
    c.budget -= 9;
    { set32(c.r[29], c.r[29].w[0] + 48u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0010BC40u | kUnwind; return; } [[clang::musttail]] return unit_0002(c, 504u, depth); }
L_003FB9C0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FB9E0u); set32(c.r[4], ld32((c.r[16].w[0] + 64u)));  if (depth < kMaxDepth) unit_0002(c, 508u, depth + 1u); else { c.pc = 0x0010BC60u; return; } if (c.pc != 0x003FB9E0u) [[unlikely]] return; }
L_003FB9E0:
    set32(c.r[3], ld32((c.r[16].w[0] + 20u)));
    c.r[2].d[0] = ld64((c.r[16].w[0] + 72u));
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 64u)));
    c.r[2].d[0] = c.r[17].d[0] + c.r[2].d[0];
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    st32((c.r[16].w[0] + 20u), c.r[3].w[0]);
    st64((c.r[16].w[0] + 72u), c.r[2].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 12;
    { set32(c.r[29], c.r[29].w[0] + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0010BC40u | kUnwind; return; } [[clang::musttail]] return unit_0002(c, 504u, depth); }
L_003FBA10:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FBA30u); set32(c.r[4], ld32((c.r[16].w[0] + 64u)));  if (depth < kMaxDepth) unit_0002(c, 508u, depth + 1u); else { c.pc = 0x0010BC60u; return; } if (c.pc != 0x003FBA30u) [[unlikely]] return; }
L_003FBA30:
    set32(c.r[3], ld32((c.r[16].w[0] + 20u)));
    c.r[2].d[0] = ld64((c.r[16].w[0] + 72u));
    set32(c.r[3], c.r[3].w[0] - c.r[17].w[0]);
    c.r[2].d[0] = c.r[2].d[0] - c.r[17].d[0];
    st32((c.r[16].w[0] + 20u), c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] >= 0; st64((c.r[16].w[0] + 72u), c.r[2].d[0]);  if (t) { goto L_003FBA70; } }
    c.budget -= 1;
L_003FBA50:
    c.budget -= 7;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003FBA50u | kUnwind; return; } goto L_003FBA50; } }
    c.budget -= 1;
L_003FBA70:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FBA78u); set32(c.r[4], ld32((c.r[16].w[0] + 64u)));  if (depth < kMaxDepth) unit_0002(c, 504u, depth + 1u); else { c.pc = 0x0010BC40u; return; } if (c.pc != 0x003FBA78u) [[unlikely]] return; }
L_003FBA78:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003FBA90:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 56u), c.r[23].d[0]);
    c.r[23].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 40u), c.r[21].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[22].d[0]);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FBAC8u); set32(c.r[4], ld32((c.r[17].w[0] + 64u)));  if (depth < kMaxDepth) unit_0002(c, 508u, depth + 1u); else { c.pc = 0x0010BC60u; return; } if (c.pc != 0x003FBAC8u) [[unlikely]] return; }
L_003FBAC8:
    set32(c.r[3], ld32((c.r[17].w[0] + 68u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003FBAE8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FBADCu); set32(c.r[4], ld32((c.r[17].w[0] + 64u)));  if (depth < kMaxDepth) unit_0002(c, 504u, depth + 1u); else { c.pc = 0x0010BC40u; return; } if (c.pc != 0x003FBADCu) [[unlikely]] return; }
L_003FBADC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003FBC60; } }
    c.budget -= 1;
L_003FBAE8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FBAF0u); set32(c.r[4], 0u + 5u);  if (depth < kMaxDepth) unit_00BE(c, 288u, depth + 1u); else { c.pc = 0x003FB688u; return; } if (c.pc != 0x003FBAF0u) [[unlikely]] return; }
L_003FBAF0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[2].d[0] = c.r[2].d[0] | 46080ull;
    c.r[3].d[0] = c.r[3].d[0] | 46096ull;
    set32(c.r[21], ld32((c.r[2].w[0])));
    set32(c.r[5], ld32((c.r[3].w[0])));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FBB10u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BE(c, 285u, depth + 1u); else { c.pc = 0x003FB5D0u; return; } if (c.pc != 0x003FBB10u) [[unlikely]] return; }
L_003FBB10:
    set32(c.r[6], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[17].w[0] + 12u)));
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    c.budget -= 5;
    if (c.r[6].d[0] == 0ull) { breakpoint(c, 0x003FBB20u);  goto L_003FBB24; }
L_003FBB24:
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    mmi::div(c, 0, c.r[2].w[0], c.r[6].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 16u)));
    c.r[4].d[0] = c.hi.d[0];
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] - c.r[4].w[0]);
    mmi::div(c, 0, c.r[3].w[0], c.r[6].w[0]);
    st32((c.r[17].w[0] + 16u), c.r[2].w[0]);
    c.r[5].d[0] = c.hi.d[0];
    set32(c.r[7], c.r[5].w[0] + c.r[2].w[0]);
    st32((c.r[17].w[0] + 12u), c.r[5].w[0]);
    mmi::div(c, 0, c.r[7].w[0], c.r[6].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 20u)));
    c.r[3].d[0] = c.r[4].sd[0] < 0ll ? 1ull : 0ull;
    set32(c.r[5], c.r[4].w[0] + 2047u);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    if (c.r[3].d[0] != 0) c.r[2].d[0] = c.r[5].d[0];
    set32(c.r[19], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 11));
    set32(c.r[3], c.r[19].w[0] << 11);
    set32(c.r[4], c.r[4].w[0] - c.r[3].w[0]);
    c.r[16].d[0] = c.hi.d[0];
    c.budget -= 23;
    { const bool t = c.r[19].sd[0] <= 0; st32((c.r[17].w[0] + 20u), c.r[4].w[0]);  if (t) { goto L_003FBBC0; } }
    set32(c.r[2], c.r[7].w[0] + c.r[6].w[0]);
    set32(c.r[7], 0u + 128u);
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 5;
    if (c.r[6].d[0] == 0ull) { breakpoint(c, 0x003FBB90u);  goto L_003FBB94; }
L_003FBB94:
    mmi::div(c, 0, c.r[2].w[0], c.r[6].w[0]);
    set32(c.r[6], 0u + 3u);
    set32(c.r[8], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[23], 0u + 1u);
    set32(c.r[3], ld32((c.r[17].w[0])));
    c.r[4].d[0] = c.hi.d[0];
    set32(c.r[5], c.r[4].w[0] << 11);
    set32(c.r[4], c.r[4].w[0] << 4);
    set32(c.r[4], c.r[8].w[0] + c.r[4].w[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FBBC0u); set32(c.r[5], c.r[3].w[0] + c.r[5].w[0]);  if (depth < kMaxDepth) unit_00BE(c, 290u, depth + 1u); else { c.pc = 0x003FB6F0u; return; } if (c.pc != 0x003FBBC0u) [[unlikely]] return; }
L_003FBBC0:
    c.budget -= 2;
    { const bool t = c.r[19].sd[0] <= 0; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_003FBC24; } }
    set32(c.r[20], c.r[19].w[0] - 1u);
    set32(c.r[22], 0u + 3u);
    c.budget -= 2;
L_003FBBD0:
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    c.r[7].d[0] = c.r[18].d[0] ^ c.r[20].d[0];
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[4], c.r[16].w[0] << 4);
    set32(c.r[5], c.r[16].w[0] << 11);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[5], c.r[2].w[0] + c.r[5].w[0]);
    if (c.r[7].d[0] != 0) c.r[6].d[0] = c.r[22].d[0];
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FBBFCu); set32(c.r[7], 0u + 128u);  if (depth < kMaxDepth) unit_00BE(c, 290u, depth + 1u); else { c.pc = 0x003FB6F0u; return; } if (c.pc != 0x003FBBFCu) [[unlikely]] return; }
L_003FBBFC:
    set32(c.r[3], c.r[16].w[0] + 1u);
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[5].d[0] = c.r[18].sd[0] < c.r[19].sd[0] ? 1ull : 0ull;
    mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.budget -= 7;
    if (c.r[2].d[0] == 0ull) { breakpoint(c, 0x003FBC14u);  goto L_003FBC18; }
L_003FBC18:
    c.r[4].d[0] = c.hi.d[0];
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003FBBD0u | kUnwind; return; } goto L_003FBBD0; } }
L_003FBC24:
    set32(c.r[2], ld32((c.r[17].w[0] + 16u)));
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[17].w[0] + 16u), c.r[2].w[0]);  if (t) { goto L_003FBC54; } }
    c.budget -= 2;
    { const bool t = c.r[23].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x0FFF0000u);  if (t) { goto L_003FBC4C; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x30000000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[2].d[0] = c.r[21].d[0] & c.r[2].d[0];
    c.r[21].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 4;
L_003FBC4C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FBC54u); c.r[4].d[0] = c.r[21].d[0] | 256ull;  if (depth < kMaxDepth) unit_00BE(c, 288u, depth + 1u); else { c.pc = 0x003FB688u; return; } if (c.pc != 0x003FBC54u) [[unlikely]] return; }
L_003FBC54:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FBC5Cu); set32(c.r[4], ld32((c.r[17].w[0] + 64u)));  if (depth < kMaxDepth) unit_0002(c, 504u, depth + 1u); else { c.pc = 0x0010BC40u; return; } if (c.pc != 0x003FBC5Cu) [[unlikely]] return; }
L_003FBC5C:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_003FBC60:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[23].d[0] = ld64((c.r[29].w[0] + 56u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003FBC90:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FBCA8u); set32(c.r[4], ld32((c.r[16].w[0] + 64u)));  if (depth < kMaxDepth) unit_0002(c, 508u, depth + 1u); else { c.pc = 0x0010BC60u; return; } if (c.pc != 0x003FBCA8u) [[unlikely]] return; }
L_003FBCA8:
    st32((c.r[16].w[0] + 68u), 0u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FBCB4u); set32(c.r[4], 0u + 5u);  if (depth < kMaxDepth) unit_00BE(c, 288u, depth + 1u); else { c.pc = 0x003FB688u; return; } if (c.pc != 0x003FBCB4u) [[unlikely]] return; }
L_003FBCB4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[2].d[0] = c.r[2].d[0] | 46096ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x10000000u);
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.r[4].d[0] = c.r[4].d[0] | 46128ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x10000000u);
    st32((c.r[16].w[0] + 28u), c.r[3].w[0]);
    c.r[5].d[0] = c.r[5].d[0] | 46112ull;
    c.r[6].d[0] = c.r[6].d[0] | 46080ull;
    c.r[7].sd[0] = static_cast<std::int32_t>(0x10000000u);
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.r[7].d[0] = c.r[7].d[0] | 8208ull;
    st32((c.r[16].w[0] + 32u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[5].w[0])));
    st32((c.r[16].w[0] + 36u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[6].w[0])));
    st32((c.r[16].w[0] + 40u), c.r[3].w[0]);
    c.budget -= 19;
L_003FBD00:
    set32(c.r[2], ld32((c.r[7].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 240ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003FBD00u | kUnwind; return; } goto L_003FBD00; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FBD24u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00BE(c, 286u, depth + 1u); else { c.pc = 0x003FB620u; return; } if (c.pc != 0x003FBD24u) [[unlikely]] return; }
L_003FBD24:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[2].d[0] = c.r[2].d[0] | 45072ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.r[3].d[0] = c.r[3].d[0] | 45088ull;
    c.r[6].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x10000000u);
    st32((c.r[16].w[0] + 44u), c.r[4].w[0]);
    c.r[6].d[0] = c.r[6].d[0] | 45056ull;
    c.r[7].d[0] = c.r[7].d[0] | 8224ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x10000000u);
    set32(c.r[8], ld32((c.r[3].w[0])));
    c.r[5].d[0] = c.r[5].d[0] | 8208ull;
    set32(c.r[4], ld32((c.r[16].w[0] + 64u)));
    st32((c.r[16].w[0] + 48u), c.r[8].w[0]);
    set32(c.r[2], ld32((c.r[6].w[0])));
    st32((c.r[16].w[0] + 52u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[7].w[0])));
    st32((c.r[16].w[0] + 56u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[5].w[0])));
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FBD7Cu); st32((c.r[16].w[0] + 60u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0002(c, 504u, depth + 1u); else { c.pc = 0x0010BC40u; return; } if (c.pc != 0x003FBD7Cu) [[unlikely]] return; }
L_003FBD7C:
    set32(c.r[2], 0u + 1u);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003FBD90:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 40u), c.r[21].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[22].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 56u), c.r[31].d[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FBDC0u); set32(c.r[4], ld32((c.r[16].w[0] + 64u)));  if (depth < kMaxDepth) unit_0002(c, 508u, depth + 1u); else { c.pc = 0x0010BC60u; return; } if (c.pc != 0x003FBDC0u) [[unlikely]] return; }
L_003FBDC0:
    set32(c.r[4], ld32((c.r[16].w[0] + 56u)));
    set32(c.r[9], ld32((c.r[16].w[0] + 28u)));
    set32(c.r[2], c.r[4].w[0] >> 8);
    set32(c.r[3], c.r[4].w[0] >> 16);
    c.r[2].d[0] = c.r[2].d[0] & 15ull;
    c.r[3].d[0] = c.r[3].d[0] & 3ull;
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[7], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[3].w[0] << 4);
    set32(c.r[5], ld32((c.r[16].w[0] + 36u)));
    set32(c.r[18], c.r[9].w[0] - c.r[2].w[0]);
    set32(c.r[10], ld32((c.r[16].w[0] + 40u)));
    c.r[2].d[0] = c.r[18].d[0] < c.r[7].d[0] ? 1ull : 0ull;
    set32(c.r[21], c.r[5].w[0] + c.r[3].w[0]);
    c.r[22].d[0] = c.r[4].d[0] & 127ull;
    set32(c.r[20], ld32((c.r[16].w[0] + 32u)));
    c.budget -= 18;
    { const bool t = c.r[2].d[0] == 0ull; c.r[19].d[0] = c.r[10].d[0] | 256ull;  if (t) { goto L_003FBEB0; } }
    set32(c.r[6], ld32((c.r[16].w[0] + 8u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x0FFF0000u);
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[4], c.r[7].w[0] - c.r[18].w[0]);
    set32(c.r[8], c.r[6].w[0] << 11);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[20].d[0] = c.r[3].d[0] & c.r[2].d[0];
    set32(c.r[21], c.r[4].w[0] >> 4);
    c.budget -= 10;
    { const bool t = c.r[9].d[0] == c.r[7].d[0]; set32(c.r[18], c.r[18].w[0] + c.r[8].w[0]);  if (t) { goto L_003FBE3C; } }
    set32(c.r[2], c.r[7].w[0] + c.r[8].w[0]);
    c.budget -= 3;
    { const bool t = c.r[9].d[0] != c.r[2].d[0]; set32(c.r[4], 0u + 3u);  if (t) { goto L_003FBE40; } }
L_003FBE3C:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003FBE40:
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x0FFF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    set32(c.r[4], c.r[4].w[0] << 28);
    set32(c.r[3], c.r[6].w[0] - c.r[3].w[0]);
    c.r[2].d[0] = c.r[10].d[0] & c.r[2].d[0];
    mmi::div(c, 0, c.r[3].w[0], c.r[6].w[0]);
    c.r[2].d[0] = c.r[2].d[0] | c.r[4].d[0];
    c.r[19].d[0] = c.r[2].d[0] | 256ull;
    c.budget -= 11;
    if (c.r[6].d[0] == 0ull) { breakpoint(c, 0x003FBE68u);  goto L_003FBE6C; }
L_003FBE6C:
    c.r[5].d[0] = c.hi.d[0];
    c.budget -= 3;
    if (c.r[5].sd[0] < 0) { set32(c.r[3], ld32((c.r[16].w[0] + 16u)));  goto L_003FBE98; }
    c.budget -= 2;
    if (c.r[6].d[0] == 0ull) { breakpoint(c, 0x003FBE7Cu);  goto L_003FBE80; }
L_003FBE80:
    set32(c.r[3], ld32((c.r[16].w[0] + 16u)));
    c.r[2].d[0] = c.r[5].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 44u)));  goto L_003FBF98; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[6].w[0] - 1u);  if (t) { goto L_003FBE9C; } }
L_003FBE98:
    set32(c.r[2], c.r[6].w[0] - 1u);
    c.budget -= 1;
L_003FBE9C:
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[16].w[0] + 12u), c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 16u), c.r[3].w[0]);  if (t) { goto L_003FBF94; } }
    c.budget -= 1;
L_003FBEB0:
    c.r[5].d[0] = c.r[9].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FBEBCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BE(c, 285u, depth + 1u); else { c.pc = 0x003FB5D0u; return; } if (c.pc != 0x003FBEBCu) [[unlikely]] return; }
L_003FBEBC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FBECCu); c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BE(c, 285u, depth + 1u); else { c.pc = 0x003FB5D0u; return; } if (c.pc != 0x003FBECCu) [[unlikely]] return; }
L_003FBECC:
    c.r[14].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == c.r[14].d[0]; c.r[9].sd[0] = static_cast<std::int32_t>(0x0FFF0000u);  if (t) { goto L_003FBF94; } }
    set32(c.r[12], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[8], ld32((c.r[16].w[0])));
    set32(c.r[11], 0u + 3u);
    set32(c.r[2], ld32((c.r[16].w[0] + 28u)));
    set32(c.r[3], c.r[12].w[0] << 11);
    c.budget -= 7;
    if (c.r[3].d[0] == 0ull) { breakpoint(c, 0x003FBEF0u);  goto L_003FBEF4; }
L_003FBEF4:
    set32(c.r[4], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[2], c.r[2].w[0] - c.r[8].w[0]);
    set32(c.r[13], ld32((c.r[16].w[0] + 16u)));
    mmi::divu(c, 0, c.r[2].w[0], c.r[3].w[0]);
    set32(c.r[3], c.r[17].w[0] << 11);
    set32(c.r[2], c.r[4].w[0] + c.r[13].w[0]);
    set32(c.r[5], c.r[14].w[0] + c.r[12].w[0]);
    set32(c.r[5], c.r[5].w[0] - c.r[4].w[0]);
    set32(c.r[3], c.r[8].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 40u)));
    set32(c.r[10], ld32((c.r[16].w[0] + 4u)));
    c.r[9].d[0] = c.r[9].d[0] | 65535ull;
    c.r[4].d[0] = c.r[4].d[0] & c.r[9].d[0];
    set32(c.r[3], c.r[3].w[0] - c.r[18].w[0]);
    set32(c.r[21], c.r[3].w[0] >> 4);
    c.r[6].d[0] = c.hi.d[0];
    mmi::div(c, 0, c.r[2].w[0], c.r[12].w[0]);
    set32(c.r[6], c.r[8].w[0] + c.r[6].w[0]);
    set32(c.r[2], c.r[17].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[10].w[0]);
    c.r[20].d[0] = c.r[2].d[0] & c.r[9].d[0];
    c.r[7].d[0] = c.hi.d[0];
    mmi::div(c, 0, c.r[5].w[0], c.r[12].w[0]);
    set32(c.r[7], c.r[7].w[0] << 11);
    set32(c.r[8], c.r[8].w[0] + c.r[7].w[0]);
    c.r[6].d[0] = c.r[6].d[0] ^ c.r[8].d[0];
    if (c.r[6].d[0] == 0) c.r[11].d[0] = 0ull;
    set32(c.r[11], c.r[11].w[0] << 28);
    c.r[4].d[0] = c.r[4].d[0] | c.r[11].d[0];
    c.r[2].d[0] = c.hi.d[0];
    c.budget -= 32;
    { const bool t = c.r[2].sd[0] < 0; c.r[19].d[0] = c.r[4].d[0] | 256ull;  if (t) { goto L_003FBF88; } }
    c.r[2].d[0] = c.r[2].sd[0] < c.r[13].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[12].d[0] == 0ull) { breakpoint(c, 0x003FBF7Cu);  goto L_003FBF80; }
L_003FBF80:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 44u)));  goto L_003FBF98; }
L_003FBF88:
    set32(c.r[2], c.r[13].w[0] + 1u);
    st32((c.r[16].w[0] + 12u), c.r[14].w[0]);
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    c.budget -= 3;
L_003FBF94:
    set32(c.r[3], ld32((c.r[16].w[0] + 44u)));
    c.budget -= 1;
L_003FBF98:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);  goto L_003FBFD4; }
    set32(c.r[2], ld32((c.r[16].w[0] + 48u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);  if (t) { goto L_003FBFD0; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[2].d[0] = c.r[2].d[0] | 45072ull;
    c.r[4].d[0] = c.r[4].d[0] | 45088ull;
    st32((c.r[2].w[0]), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 48u)));
    st32((c.r[4].w[0]), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 52u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FBFD0u); c.r[4].d[0] = c.r[4].d[0] | 256ull;  if (depth < kMaxDepth) unit_00BE(c, 286u, depth + 1u); else { c.pc = 0x003FB620u; return; } if (c.pc != 0x003FBFD0u) [[unlikely]] return; }
L_003FBFD0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.budget -= 1;
L_003FBFD4:
    c.r[3].d[0] = c.r[3].d[0] | 8208ull;
    c.budget -= 1;
L_003FBFD8:
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const bool t = c.r[2].sd[0] < 0; c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003FBFD8u | kUnwind; return; } goto L_003FBFD8; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[2].d[0] = c.r[2].d[0] | 8192ull;
    c.r[3].d[0] = c.r[3].d[0] | 8208ull;
    c.budget -= 3;
    [[clang::musttail]] return unit_00BF(c, 1u, depth);
}

}
