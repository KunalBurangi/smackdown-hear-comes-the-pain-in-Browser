#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_00B9[4096] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 3,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    6, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0,
    0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0,
    14, 0, 15, 0, 16, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    18, 0, 0, 0, 19, 0, 0, 0, 20, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 22, 0, 0, 0, 23, 0, 0, 0, 24, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 27, 0, 0,
    0, 0, 0, 28, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0,
    0, 32, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 41, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 42,
    0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 49, 0, 0, 0,
    0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 53, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0,
    57, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 61, 0, 62, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 68, 0, 69, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 72, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 75, 0, 0, 0, 0, 0, 76,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 80, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 84, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0, 87, 0,
    0, 88, 0, 0, 89, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 94, 0, 0, 0, 0, 0, 0, 0, 0, 0, 95, 0, 96, 0, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 98, 0, 0, 0,
    0, 0, 99, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 107, 0, 108, 0, 0, 0, 0, 0, 0, 0,
    0, 109, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 112, 0, 0, 0,
    0, 0, 113, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 117, 0, 118, 0, 0, 119, 0, 0, 120, 0, 121, 0, 122, 0, 123, 0, 124, 0, 125, 0, 0, 0, 0, 0, 126, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 128, 0, 0, 0, 0, 0, 0, 129, 0, 130, 0, 0, 0,
    0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 0,
    135, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 139, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 142, 0, 143, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 145, 0, 0,
    0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 149, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 152,
    0, 153, 0, 0, 154, 0, 0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 157, 0,
    0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 159, 0, 160, 0, 161, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 162, 0, 0, 0, 0, 0,
    163, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 166, 0, 0, 0, 0, 167, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 168, 0, 0, 169, 0, 0, 0, 0, 0, 0, 170, 0, 171, 0, 172, 0, 173, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0, 177, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 179, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0, 0, 183, 0, 0, 0, 0, 0,
    184, 0, 0, 0, 0, 0, 0, 0, 0, 185, 0, 0, 0, 0, 186, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 0, 188, 0, 0, 189,
    0, 0, 0, 190, 0, 191, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 0, 0, 0, 193, 0, 0, 194, 0, 0,
    0, 0, 195, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 197, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 199, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 201, 0, 0, 202, 0, 0,
    203, 0, 0, 204, 0, 0, 205, 0, 0, 0, 206, 0, 207, 0, 208, 0, 0, 0, 0, 0, 209, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 210, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 211, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 212, 0, 213, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 214, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 215, 0, 0, 0, 0, 216, 0, 0, 0, 0, 0, 0, 0, 217, 0, 218, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 219, 0, 0, 0, 220, 0, 0, 0, 221, 0, 222, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 223, 0, 0, 0, 0, 0, 0, 0, 224, 0, 0, 225, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 226, 0,
    0, 0, 0, 0, 0, 0, 0, 227, 0, 0, 0, 0, 228, 0, 0, 229, 0, 0, 0, 0, 0, 0, 230, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    231, 0, 0, 0, 232, 0, 0, 233, 0, 0, 234, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 235, 0, 0, 0, 236, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 237, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 238, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 239, 0, 0, 240,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 241, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 242, 0, 0, 0, 0, 0, 243, 0,
    0, 0, 244, 0, 245, 0, 0, 0, 0, 0, 0, 0, 0, 246, 0, 0, 0, 0, 247, 0, 0, 0, 0, 0, 248, 0, 0, 0, 0, 0, 249, 0,
    0, 0, 250, 0, 0, 0, 251, 0, 0, 0, 252, 0, 0, 0, 253, 0, 0, 0, 254, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 256, 0, 257, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 258, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 259, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 260, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 262, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    263, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 264, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 265,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 266, 0, 0, 0, 0, 267,
    0, 268, 0, 0, 269, 0, 0, 0, 0, 270, 0, 0, 0, 0, 0, 0, 271, 0, 0, 0, 272, 0, 0, 0, 273, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 274, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 275, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 276, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 277, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 278, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 279, 0, 0, 0, 280, 0, 0, 0, 281, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 282, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 283, 0, 0, 0, 284, 0, 0, 0, 285, 0, 0, 0,
    286, 0, 0, 0, 0, 0, 287, 0, 0, 0, 288, 0, 0, 289, 0, 0, 0, 290, 0, 0, 0, 291, 0, 0, 0, 0, 0, 292, 0, 0, 0, 293,
    0, 0, 0, 294, 0, 0, 0, 295, 0, 0, 0, 296, 0, 0, 0, 297, 0, 0, 0, 298, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 299, 0,
    0, 0, 0, 0, 0, 0, 300, 0, 0, 0, 0, 0, 0, 0, 0, 0, 301, 0, 0, 0, 302, 0, 0, 0, 303, 0, 0, 0, 304, 0, 0, 0,
    0, 0, 305, 0, 0, 0, 0, 0, 0, 0, 0, 0, 306, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 307, 0, 0, 0,
    0, 308, 0, 0, 0, 0, 0, 0, 0, 0, 309, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 310, 0, 0, 0, 0, 0, 311, 0,
    0, 0, 0, 312, 0, 0, 0, 0, 0, 0, 0, 313, 0, 0, 314, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 315, 0, 0, 0, 0, 0, 0, 0, 0, 316, 0, 0, 0, 0, 0, 0, 0, 317, 0, 0, 0, 0, 318,
    0, 319, 0, 0, 0, 0, 0, 0, 0, 320, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 321, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 322, 0, 0, 323, 0, 0, 0, 324, 0, 0, 0, 325, 0, 326, 0, 0, 0, 0, 327, 0, 328, 0, 0,
    0, 0, 0, 0, 329, 0, 0, 0, 0, 0, 0, 0, 0, 330, 0, 331, 0, 0, 332, 0, 0, 0, 0, 0, 333, 0, 334, 0, 0, 0, 335, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 336, 0, 0, 0, 0, 337, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 338, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 339, 0, 0, 0, 0, 0, 0, 0, 0, 0, 340, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 341,
    0, 0, 0, 0, 0, 0, 0, 342, 0, 0, 0, 0, 0, 0, 343, 0, 0, 0, 0, 0, 0, 0, 0, 0, 344, 0, 0, 0, 345, 0, 0, 0,
    0, 0, 0, 346, 0, 0, 0, 0, 347, 0, 0, 0, 0, 0, 348, 0, 349, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    350, 0, 0, 0, 0, 0, 0, 351, 0, 0, 352, 0, 0, 0, 0, 353, 0, 0, 0, 0, 354, 0, 0, 0, 0, 355, 0, 0, 0, 0, 0, 0,
    356, 0, 0, 0, 0, 0, 0, 357, 0, 0, 0, 0, 358, 0, 359, 0, 360, 0, 361, 0, 0, 0, 362, 0, 0, 0, 363, 0, 0, 0, 0, 0,
    0, 0, 364, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 365, 0, 0, 0, 0, 0, 0, 0, 366, 0, 0, 0, 0, 0, 367,
    0, 0, 0, 0, 368, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 369, 0,
};

void unit_00B9(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_003E4000;
    case 2u: goto L_003E4058;
    case 3u: goto L_003E407C;
    case 4u: goto L_003E40D0;
    case 5u: goto L_003E40D8;
    case 6u: goto L_003E4100;
    case 7u: goto L_003E4118;
    case 8u: goto L_003E4140;
    case 9u: goto L_003E4174;
    case 10u: goto L_003E4188;
    case 11u: goto L_003E41B4;
    case 12u: goto L_003E41CC;
    case 13u: goto L_003E41E8;
    case 14u: goto L_003E4200;
    case 15u: goto L_003E4208;
    case 16u: goto L_003E4210;
    case 17u: goto L_003E4230;
    case 18u: goto L_003E4280;
    case 19u: goto L_003E4290;
    case 20u: goto L_003E42A0;
    case 21u: goto L_003E42B4;
    case 22u: goto L_003E42CC;
    case 23u: goto L_003E42DC;
    case 24u: goto L_003E42EC;
    case 25u: goto L_003E4330;
    case 26u: goto L_003E435C;
    case 27u: goto L_003E4374;
    case 28u: goto L_003E438C;
    case 29u: goto L_003E43A0;
    case 30u: goto L_003E43D0;
    case 31u: goto L_003E43EC;
    case 32u: goto L_003E4404;
    case 33u: goto L_003E4420;
    case 34u: goto L_003E4440;
    case 35u: goto L_003E4474;
    case 36u: goto L_003E449C;
    case 37u: goto L_003E44B0;
    case 38u: goto L_003E44E8;
    case 39u: goto L_003E4544;
    case 40u: goto L_003E4A68;
    case 41u: goto L_003E4AF8;
    case 42u: goto L_003E4B7C;
    case 43u: goto L_003E4B94;
    case 44u: goto L_003E4BAC;
    case 45u: goto L_003E4BD0;
    case 46u: goto L_003E4C2C;
    case 47u: goto L_003E4E40;
    case 48u: goto L_003E4E58;
    case 49u: goto L_003E4E70;
    case 50u: goto L_003E4E90;
    case 51u: goto L_003E4ED8;
    case 52u: goto L_003E5338;
    case 53u: goto L_003E5378;
    case 54u: goto L_003E5430;
    case 55u: goto L_003E5448;
    case 56u: goto L_003E5460;
    case 57u: goto L_003E5480;
    case 58u: goto L_003E54C0;
    case 59u: goto L_003E5518;
    case 60u: goto L_003E5530;
    case 61u: goto L_003E5548;
    case 62u: goto L_003E5550;
    case 63u: goto L_003E5570;
    case 64u: goto L_003E55BC;
    case 65u: goto L_003E55F4;
    case 66u: goto L_003E562C;
    case 67u: goto L_003E5644;
    case 68u: goto L_003E565C;
    case 69u: goto L_003E5664;
    case 70u: goto L_003E5690;
    case 71u: goto L_003E56D8;
    case 72u: goto L_003E56F0;
    case 73u: goto L_003E5718;
    case 74u: goto L_003E5754;
    case 75u: goto L_003E5764;
    case 76u: goto L_003E577C;
    case 77u: goto L_003E57AC;
    case 78u: goto L_003E57C0;
    case 79u: goto L_003E57D8;
    case 80u: goto L_003E57F4;
    case 81u: goto L_003E5820;
    case 82u: goto L_003E5858;
    case 83u: goto L_003E58A8;
    case 84u: goto L_003E58BC;
    case 85u: goto L_003E58CC;
    case 86u: goto L_003E58E8;
    case 87u: goto L_003E58F8;
    case 88u: goto L_003E5904;
    case 89u: goto L_003E5910;
    case 90u: goto L_003E591C;
    case 91u: goto L_003E5960;
    case 92u: goto L_003E5994;
    case 93u: goto L_003E59C0;
    case 94u: goto L_003E5A08;
    case 95u: goto L_003E5A30;
    case 96u: goto L_003E5A38;
    case 97u: goto L_003E5A58;
    case 98u: goto L_003E5A70;
    case 99u: goto L_003E5A88;
    case 100u: goto L_003E5A98;
    case 101u: goto L_003E5AB4;
    case 102u: goto L_003E5ACC;
    case 103u: goto L_003E5AE4;
    case 104u: goto L_003E5B10;
    case 105u: goto L_003E5B40;
    case 106u: goto L_003E5B60;
    case 107u: goto L_003E5BD8;
    case 108u: goto L_003E5BE0;
    case 109u: goto L_003E5C04;
    case 110u: goto L_003E5C30;
    case 111u: goto L_003E5C58;
    case 112u: goto L_003E5C70;
    case 113u: goto L_003E5C88;
    case 114u: goto L_003E5C98;
    case 115u: goto L_003E5CC8;
    case 116u: goto L_003E5CE8;
    case 117u: goto L_003E5D10;
    case 118u: goto L_003E5D18;
    case 119u: goto L_003E5D24;
    case 120u: goto L_003E5D30;
    case 121u: goto L_003E5D38;
    case 122u: goto L_003E5D40;
    case 123u: goto L_003E5D48;
    case 124u: goto L_003E5D50;
    case 125u: goto L_003E5D58;
    case 126u: goto L_003E5D70;
    case 127u: goto L_003E5DC0;
    case 128u: goto L_003E5DCC;
    case 129u: goto L_003E5DE8;
    case 130u: goto L_003E5DF0;
    case 131u: goto L_003E5E10;
    case 132u: goto L_003E5E30;
    case 133u: goto L_003E5E44;
    case 134u: goto L_003E5E60;
    case 135u: goto L_003E5E80;
    case 136u: goto L_003E5E90;
    case 137u: goto L_003E5EB0;
    case 138u: goto L_003E5ED8;
    case 139u: goto L_003E5F08;
    case 140u: goto L_003E5F28;
    case 141u: goto L_003E5F50;
    case 142u: goto L_003E5F88;
    case 143u: goto L_003E5F90;
    case 144u: goto L_003E5FE8;
    case 145u: goto L_003E5FF4;
    case 146u: goto L_003E600C;
    case 147u: goto L_003E6040;
    case 148u: goto L_003E60A8;
    case 149u: goto L_003E60B8;
    case 150u: goto L_003E60D0;
    case 151u: goto L_003E60E4;
    case 152u: goto L_003E60FC;
    case 153u: goto L_003E6104;
    case 154u: goto L_003E6110;
    case 155u: goto L_003E6128;
    case 156u: goto L_003E6148;
    case 157u: goto L_003E6178;
    case 158u: goto L_003E6194;
    case 159u: goto L_003E61AC;
    case 160u: goto L_003E61B4;
    case 161u: goto L_003E61BC;
    case 162u: goto L_003E61E8;
    case 163u: goto L_003E6200;
    case 164u: goto L_003E621C;
    case 165u: goto L_003E6240;
    case 166u: goto L_003E6258;
    case 167u: goto L_003E626C;
    case 168u: goto L_003E6298;
    case 169u: goto L_003E62A4;
    case 170u: goto L_003E62C0;
    case 171u: goto L_003E62C8;
    case 172u: goto L_003E62D0;
    case 173u: goto L_003E62D8;
    case 174u: goto L_003E6320;
    case 175u: goto L_003E6338;
    case 176u: goto L_003E6390;
    case 177u: goto L_003E63B0;
    case 178u: goto L_003E63E0;
    case 179u: goto L_003E6408;
    case 180u: goto L_003E6418;
    case 181u: goto L_003E6438;
    case 182u: goto L_003E6450;
    case 183u: goto L_003E6468;
    case 184u: goto L_003E6480;
    case 185u: goto L_003E64A4;
    case 186u: goto L_003E64B8;
    case 187u: goto L_003E64D4;
    case 188u: goto L_003E64F0;
    case 189u: goto L_003E64FC;
    case 190u: goto L_003E650C;
    case 191u: goto L_003E6514;
    case 192u: goto L_003E6540;
    case 193u: goto L_003E6568;
    case 194u: goto L_003E6574;
    case 195u: goto L_003E6588;
    case 196u: goto L_003E6598;
    case 197u: goto L_003E6698;
    case 198u: goto L_003E66B0;
    case 199u: goto L_003E6708;
    case 200u: goto L_003E6720;
    case 201u: goto L_003E6768;
    case 202u: goto L_003E6774;
    case 203u: goto L_003E6780;
    case 204u: goto L_003E678C;
    case 205u: goto L_003E6798;
    case 206u: goto L_003E67A8;
    case 207u: goto L_003E67B0;
    case 208u: goto L_003E67B8;
    case 209u: goto L_003E67D0;
    case 210u: goto L_003E68B8;
    case 211u: goto L_003E6908;
    case 212u: goto L_003E6944;
    case 213u: goto L_003E694C;
    case 214u: goto L_003E69F0;
    case 215u: goto L_003E6A2C;
    case 216u: goto L_003E6A40;
    case 217u: goto L_003E6A60;
    case 218u: goto L_003E6A68;
    case 219u: goto L_003E6A94;
    case 220u: goto L_003E6AA4;
    case 221u: goto L_003E6AB4;
    case 222u: goto L_003E6ABC;
    case 223u: goto L_003E6B20;
    case 224u: goto L_003E6B40;
    case 225u: goto L_003E6B4C;
    case 226u: goto L_003E6B78;
    case 227u: goto L_003E6B9C;
    case 228u: goto L_003E6BB0;
    case 229u: goto L_003E6BBC;
    case 230u: goto L_003E6BD8;
    case 231u: goto L_003E6C80;
    case 232u: goto L_003E6C90;
    case 233u: goto L_003E6C9C;
    case 234u: goto L_003E6CA8;
    case 235u: goto L_003E6D04;
    case 236u: goto L_003E6D14;
    case 237u: goto L_003E6D50;
    case 238u: goto L_003E6D94;
    case 239u: goto L_003E6DF0;
    case 240u: goto L_003E6DFC;
    case 241u: goto L_003E6E40;
    case 242u: goto L_003E6EE0;
    case 243u: goto L_003E6EF8;
    case 244u: goto L_003E6F08;
    case 245u: goto L_003E6F10;
    case 246u: goto L_003E6F34;
    case 247u: goto L_003E6F48;
    case 248u: goto L_003E6F60;
    case 249u: goto L_003E6F78;
    case 250u: goto L_003E6F88;
    case 251u: goto L_003E6F98;
    case 252u: goto L_003E6FA8;
    case 253u: goto L_003E6FB8;
    case 254u: goto L_003E6FC8;
    case 255u: goto L_003E6FD8;
    case 256u: goto L_003E7038;
    case 257u: goto L_003E7040;
    case 258u: goto L_003E7074;
    case 259u: goto L_003E7110;
    case 260u: goto L_003E7174;
    case 261u: goto L_003E71C8;
    case 262u: goto L_003E722C;
    case 263u: goto L_003E7280;
    case 264u: goto L_003E72E4;
    case 265u: goto L_003E737C;
    case 266u: goto L_003E73E8;
    case 267u: goto L_003E73FC;
    case 268u: goto L_003E7404;
    case 269u: goto L_003E7410;
    case 270u: goto L_003E7424;
    case 271u: goto L_003E7440;
    case 272u: goto L_003E7450;
    case 273u: goto L_003E7460;
    case 274u: goto L_003E7488;
    case 275u: goto L_003E74C0;
    case 276u: goto L_003E74F0;
    case 277u: goto L_003E7588;
    case 278u: goto L_003E75D8;
    case 279u: goto L_003E7650;
    case 280u: goto L_003E7660;
    case 281u: goto L_003E7670;
    case 282u: goto L_003E7698;
    case 283u: goto L_003E76D0;
    case 284u: goto L_003E76E0;
    case 285u: goto L_003E76F0;
    case 286u: goto L_003E7700;
    case 287u: goto L_003E7718;
    case 288u: goto L_003E7728;
    case 289u: goto L_003E7734;
    case 290u: goto L_003E7744;
    case 291u: goto L_003E7754;
    case 292u: goto L_003E776C;
    case 293u: goto L_003E777C;
    case 294u: goto L_003E778C;
    case 295u: goto L_003E779C;
    case 296u: goto L_003E77AC;
    case 297u: goto L_003E77BC;
    case 298u: goto L_003E77CC;
    case 299u: goto L_003E77F8;
    case 300u: goto L_003E7818;
    case 301u: goto L_003E7840;
    case 302u: goto L_003E7850;
    case 303u: goto L_003E7860;
    case 304u: goto L_003E7870;
    case 305u: goto L_003E7888;
    case 306u: goto L_003E78B0;
    case 307u: goto L_003E78F0;
    case 308u: goto L_003E7904;
    case 309u: goto L_003E7928;
    case 310u: goto L_003E7960;
    case 311u: goto L_003E7978;
    case 312u: goto L_003E798C;
    case 313u: goto L_003E79AC;
    case 314u: goto L_003E79B8;
    case 315u: goto L_003E7A24;
    case 316u: goto L_003E7A48;
    case 317u: goto L_003E7A68;
    case 318u: goto L_003E7A7C;
    case 319u: goto L_003E7A84;
    case 320u: goto L_003E7AA4;
    case 321u: goto L_003E7AF8;
    case 322u: goto L_003E7B24;
    case 323u: goto L_003E7B30;
    case 324u: goto L_003E7B40;
    case 325u: goto L_003E7B50;
    case 326u: goto L_003E7B58;
    case 327u: goto L_003E7B6C;
    case 328u: goto L_003E7B74;
    case 329u: goto L_003E7B90;
    case 330u: goto L_003E7BB4;
    case 331u: goto L_003E7BBC;
    case 332u: goto L_003E7BC8;
    case 333u: goto L_003E7BE0;
    case 334u: goto L_003E7BE8;
    case 335u: goto L_003E7BF8;
    case 336u: goto L_003E7C28;
    case 337u: goto L_003E7C3C;
    case 338u: goto L_003E7C78;
    case 339u: goto L_003E7CA8;
    case 340u: goto L_003E7CD0;
    case 341u: goto L_003E7CFC;
    case 342u: goto L_003E7D1C;
    case 343u: goto L_003E7D38;
    case 344u: goto L_003E7D60;
    case 345u: goto L_003E7D70;
    case 346u: goto L_003E7D8C;
    case 347u: goto L_003E7DA0;
    case 348u: goto L_003E7DB8;
    case 349u: goto L_003E7DC0;
    case 350u: goto L_003E7E00;
    case 351u: goto L_003E7E1C;
    case 352u: goto L_003E7E28;
    case 353u: goto L_003E7E3C;
    case 354u: goto L_003E7E50;
    case 355u: goto L_003E7E64;
    case 356u: goto L_003E7E80;
    case 357u: goto L_003E7E9C;
    case 358u: goto L_003E7EB0;
    case 359u: goto L_003E7EB8;
    case 360u: goto L_003E7EC0;
    case 361u: goto L_003E7EC8;
    case 362u: goto L_003E7ED8;
    case 363u: goto L_003E7EE8;
    case 364u: goto L_003E7F08;
    case 365u: goto L_003E7F44;
    case 366u: goto L_003E7F64;
    case 367u: goto L_003E7F7C;
    case 368u: goto L_003E7F90;
    case 369u: goto L_003E7FF8;
    default: bad_entry(c, 0x003E4000u); return;
    }
L_003E4000:
    st32((c.r[18].w[0]), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 636u)));
    c.budget -= 4;
    if (c.r[4].d[0] != c.r[6].d[0]) { set32(c.r[2], ld32((c.r[16].w[0] + 656u)));  goto L_003E4018; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_003E4030; } }
L_003E4018:
    set32(c.r[3], 0u + 1800u);
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { breakpoint(c, 0x003E4020u);  goto L_003E4024; }
L_003E4024:
    mmi::mult(c, 0, c.r[2].w[0], c.r[4].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    mmi::div(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.budget -= 3;
L_003E4030:
    st32((c.r[19].w[0]), c.r[2].w[0]);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = 0ull + 0ull;
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003E4058:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E407Cu); c.r[18].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B9(c, 178u, depth + 1u); else { c.pc = 0x003E63E0u; return; } if (c.pc != 0x003E407Cu) [[unlikely]] return; }
L_003E407C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFF030000u);
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[5].d[0] | 526ull;  if (t) { goto L_003E40A8; } }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003E3B50u | kUnwind; return; } [[clang::musttail]] return unit_00B8(c, 161u, depth); }
L_003E40A8:
    set32(c.r[3], ld32((c.r[16].w[0] + 648u)));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    st32((c.r[17].w[0]), c.r[3].w[0]);
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    set32(c.r[4], ld32((c.r[16].w[0] + 652u)));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    st32((c.r[18].w[0]), c.r[4].w[0]);
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003E40D0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003E40D8:
    set32(c.r[2], c.r[5].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] + 904u);
    st32((c.r[4].w[0] + 8u), c.r[8].w[0]);
    st32((c.r[4].w[0]), c.r[6].w[0]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 4u), c.r[7].w[0]);  c.pc = t; return; }
L_003E4100:
    set32(c.r[4], c.r[4].w[0] + 952u);
    st32((c.r[4].w[0]), c.r[5].w[0]);
    st32((c.r[4].w[0] + 4u), c.r[6].w[0]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 8u), 0u);  c.pc = t; return; }
L_003E4118:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull; set32(c.r[4], c.r[4].w[0] + 952u);  if (t) { goto L_003E4128; } }
    set32(c.r[2], ld32((c.r[4].w[0])));
    st32((c.r[5].w[0]), c.r[2].w[0]);
    c.budget -= 2;
L_003E4128:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_003E4138; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    st32((c.r[6].w[0]), c.r[2].w[0]);
    c.budget -= 2;
L_003E4138:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003E4140:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 32u), c.r[16].d[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 40u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 56u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 64u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 72u), c.r[21].d[0]);
    st64((c.r[29].w[0] + 80u), c.r[22].d[0]);
    st64((c.r[29].w[0] + 88u), c.r[23].d[0]);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E4174u); c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B9(c, 178u, depth + 1u); else { c.pc = 0x003E63E0u; return; } if (c.pc != 0x003E4174u) [[unlikely]] return; }
L_003E4174:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_003E4190; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFF030000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E4188u); c.r[5].d[0] = c.r[5].d[0] | 524ull;  if (depth < kMaxDepth) unit_00B8(c, 161u, depth + 1u); else { c.pc = 0x003E3B50u; return; } if (c.pc != 0x003E4188u) [[unlikely]] return; }
L_003E4188:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_003E4308; } }
L_003E4190:
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    st32((c.r[17].w[0] + 960u), 0u);
    c.r[7].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[8], ld32((c.r[2].w[0] + 24u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.budget -= 9;
    { const std::uint32_t t = c.r[8].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003E41B4u); c.r[6].d[0] = c.r[6].d[0] | 65535ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003E41B4u) [[unlikely]] return; }
L_003E41B4:
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    set32(c.r[2], ld32((c.r[3].w[0] + 28u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003E41CCu); c.r[6].d[0] = c.r[29].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003E41CCu) [[unlikely]] return; }
L_003E41CC:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[29].w[0])));
    set32(c.r[5], c.r[29].w[0] + 16u);
    set32(c.r[2], ld32((c.r[29].w[0] + 4u)));
    st32((c.r[29].w[0] + 16u), c.r[3].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E41E8u); st32((c.r[29].w[0] + 20u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00B9(c, 34u, depth + 1u); else { c.pc = 0x003E4440u; return; } if (c.pc != 0x003E41E8u) [[unlikely]] return; }
L_003E41E8:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_003E4218; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E4200u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B9(c, 184u, depth + 1u); else { c.pc = 0x003E6480u; return; } if (c.pc != 0x003E4200u) [[unlikely]] return; }
L_003E4200:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_003E4308; } }
L_003E4208:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E4210u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B8(c, 161u, depth + 1u); else { c.pc = 0x003E3B50u; return; } if (c.pc != 0x003E4210u) [[unlikely]] return; }
L_003E4210:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_003E4308; } }
L_003E4218:
    set32(c.r[19], 0u + 16u);
    set32(c.r[21], 0u + 4u);
    set32(c.r[23], 0u + 8u);
    set32(c.r[20], 0u + 32u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; set32(c.r[22], 0u + 64u);  if (t) { goto L_003E42CC; } }
L_003E4230:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[19].d[0]; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003E42A8; } }
    c.r[2].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(17ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003E4260; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[21].d[0]; c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003E4298; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[23].d[0];  if (t) { goto L_003E4288; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], 0u - 1u);  if (t) { goto L_003E42D4; } }
    c.budget -= 1;
L_003E4260:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[20].d[0]; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003E42C0; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[22].d[0]; set32(c.r[5], 0u - 1u);  if (t) { goto L_003E42D4; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E4280u); set32(c.r[18], 0u + 64u);  if (depth < kMaxDepth) unit_00B9(c, 38u, depth + 1u); else { c.pc = 0x003E44E8u; return; } if (c.pc != 0x003E4280u) [[unlikely]] return; }
L_003E4280:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003E42D0; } }
L_003E4288:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E4290u); set32(c.r[18], 0u + 8u);  if (depth < kMaxDepth) unit_00B9(c, 45u, depth + 1u); else { c.pc = 0x003E4BD0u; return; } if (c.pc != 0x003E4290u) [[unlikely]] return; }
L_003E4290:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003E42D0; } }
L_003E4298:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E42A0u); set32(c.r[18], 0u + 4u);  if (depth < kMaxDepth) unit_00B9(c, 50u, depth + 1u); else { c.pc = 0x003E4E90u; return; } if (c.pc != 0x003E42A0u) [[unlikely]] return; }
L_003E42A0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003E42D0; } }
L_003E42A8:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E42B4u); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B9(c, 57u, depth + 1u); else { c.pc = 0x003E5480u; return; } if (c.pc != 0x003E42B4u) [[unlikely]] return; }
L_003E42B4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003E42D0; } }
    c.budget -= 1;
L_003E42C0:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E42CCu); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B9(c, 63u, depth + 1u); else { c.pc = 0x003E5570u; return; } if (c.pc != 0x003E42CCu) [[unlikely]] return; }
L_003E42CC:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003E42D0:
    set32(c.r[5], 0u - 1u);
    c.budget -= 1;
L_003E42D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E42DCu); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B9(c, 106u, depth + 1u); else { c.pc = 0x003E5B60u; return; } if (c.pc != 0x003E42DCu) [[unlikely]] return; }
L_003E42DC:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x003E4208u | kUnwind; return; } goto L_003E4208; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E42ECu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B9(c, 25u, depth + 1u); else { c.pc = 0x003E4330u; return; } if (c.pc != 0x003E42ECu) [[unlikely]] return; }
L_003E42EC:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[2].d[0] = c.r[3].d[0] & 3ull;  if (t) { goto L_003E4300; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003E4230u | kUnwind; return; } goto L_003E4230; } }
L_003E4300:
    c.r[2].d[0] = 0ull + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 2;
L_003E4308:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 56u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 72u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[23].d[0] = ld64((c.r[29].w[0] + 88u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_003E4330:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = c.r[6].d[0] | 65535ull;
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0] + 24u)));
    c.budget -= 11;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003E435Cu); c.r[7].d[0] = c.r[29].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003E435Cu) [[unlikely]] return; }
L_003E435C:
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    set32(c.r[2], ld32((c.r[3].w[0] + 28u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003E4374u); c.r[6].d[0] = c.r[29].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003E4374u) [[unlikely]] return; }
L_003E4374:
    set32(c.r[3], ld32((c.r[29].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003E438C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E438Cu); set32(c.r[4], ld32((c.r[29].w[0])));  if (depth < kMaxDepth) unit_00B8(c, 143u, depth + 1u); else { c.pc = 0x003E31D0u; return; } if (c.pc != 0x003E438Cu) [[unlikely]] return; }
L_003E438C:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003E43A0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[5], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E43D0u); set32(c.r[4], ld32((c.r[18].w[0])));  if (depth < kMaxDepth) unit_00B4(c, 124u, depth + 1u); else { c.pc = 0x003D0F08u; return; } if (c.pc != 0x003E43D0u) [[unlikely]] return; }
L_003E43D0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u - 1u);
    c.budget -= 5;
    { const bool t = c.r[17].d[0] == 0ull; c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003E4424; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E43ECu);  if (depth < kMaxDepth) unit_00B9(c, 8u, depth + 1u); else { c.pc = 0x003E4140u; return; } if (c.pc != 0x003E43ECu) [[unlikely]] return; }
L_003E43EC:
    set32(c.r[3], ld32((c.r[17].w[0])));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] + 36u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003E4404u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003E4404u) [[unlikely]] return; }
L_003E4404:
    set32(c.r[3], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[5], ld32((c.r[17].w[0])));
    set32(c.r[3], c.r[3].w[0] - c.r[2].w[0]);
    st32((c.r[19].w[0]), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[5].w[0] + 12u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003E4420u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003E4420u) [[unlikely]] return; }
L_003E4420:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_003E4424:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003E4440:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 852u)));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != 0ull; c.r[2].d[0] = c.r[3].d[0] + 0ull;  if (t) { goto L_003E44D0; } }
    set32(c.r[4], ld32((c.r[16].w[0])));
    set32(c.r[6], 0u + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E4474u); set32(c.r[5], ld32((c.r[16].w[0] + 4u)));  if (depth < kMaxDepth) unit_00B8(c, 147u, depth + 1u); else { c.pc = 0x003E3368u; return; } if (c.pc != 0x003E4474u) [[unlikely]] return; }
L_003E4474:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], c.r[3].w[0] + 4u);  if (t) { goto L_003E44CC; } }
    set32(c.r[5], ld32((c.r[16].w[0])));
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.r[4].d[0] = c.r[3].d[0] + 0ull;
    set32(c.r[5], c.r[3].w[0] - c.r[5].w[0]);
    set32(c.r[6], 0u - 1u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E449Cu); set32(c.r[5], c.r[2].w[0] - c.r[5].w[0]);  if (depth < kMaxDepth) unit_00B8(c, 147u, depth + 1u); else { c.pc = 0x003E3368u; return; } if (c.pc != 0x003E449Cu) [[unlikely]] return; }
L_003E449C:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 852u)));  goto L_003E44D0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E44B0u); c.r[4].d[0] = c.r[3].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B8(c, 143u, depth + 1u); else { c.pc = 0x003E31D0u; return; } if (c.pc != 0x003E44B0u) [[unlikely]] return; }
L_003E44B0:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].d[0] = c.r[3].d[0] & 16ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 2u);  if (t) { goto L_003E44C8; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_003E44CC; } }
L_003E44C8:
    st32((c.r[17].w[0] + 852u), c.r[2].w[0]);
    c.budget -= 1;
L_003E44CC:
    set32(c.r[2], ld32((c.r[17].w[0] + 852u)));
    c.budget -= 1;
L_003E44D0:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003E44E8:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[2], 0u + 1u);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[17].d[0]);
    set32(c.r[17], c.r[16].w[0] + 464u);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 40u), c.r[19].d[0]);
    set32(c.r[19], c.r[16].w[0] + 840u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    st32((c.r[16].w[0] + 900u), c.r[2].w[0]);
    set32(c.r[5], 0u + 1u);
    set32(c.r[3], ld32((c.r[17].w[0] + 52u)));
    c.r[6].d[0] = c.r[6].d[0] | 65535ull;
    set32(c.r[4], ld32((c.r[18].w[0])));
    c.r[7].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] + 1u);
    set32(c.r[2], ld32((c.r[4].w[0] + 24u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 23;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003E4544u); st32((c.r[17].w[0] + 52u), c.r[3].w[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003E4544u) [[unlikely]] return; }
L_003E4544:
    set32(c.r[3], ld32((c.r[19].w[0])));
    set32(c.r[2], 0u - 4u);
    c.r[7].d[0] = c.r[3].d[0] & c.r[2].d[0];
    set32(c.r[3], c.r[3].w[0] - c.r[7].w[0]);
    set32(c.r[7], c.r[7].w[0] + 4u);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0])));
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.r[2].d[0] = ld8((c.r[7].w[0]));
    set32(c.r[7], c.r[7].w[0] + 1u);
    set32(c.r[6], c.r[6].w[0] << 8);
    c.r[4].d[0] = ld8((c.r[7].w[0]));
    c.r[6].d[0] = c.r[6].d[0] | c.r[2].d[0];
    set32(c.r[7], c.r[7].w[0] + 1u);
    set32(c.r[6], c.r[6].w[0] << 8);
    c.r[2].d[0] = ld8((c.r[7].w[0]));
    set32(c.r[5], c.r[3].w[0] << 3);
    c.r[6].d[0] = c.r[6].d[0] | c.r[4].d[0];
    set32(c.r[6], c.r[6].w[0] << 8);
    c.r[3].d[0] = c.r[5].sd[0] < 32ll ? 1ull : 0ull;
    c.r[6].d[0] = c.r[6].d[0] | c.r[2].d[0];
    c.budget -= 22;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[7], c.r[7].w[0] + 1u);  if (t) { goto L_003E45D8; } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0])));
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.r[2].d[0] = ld8((c.r[7].w[0]));
    set32(c.r[7], c.r[7].w[0] + 1u);
    set32(c.r[6], c.r[6].w[0] << 8);
    c.r[3].d[0] = ld8((c.r[7].w[0]));
    c.r[6].d[0] = c.r[6].d[0] | c.r[2].d[0];
    set32(c.r[7], c.r[7].w[0] + 1u);
    set32(c.r[6], c.r[6].w[0] << 8);
    c.r[2].d[0] = ld8((c.r[7].w[0]));
    c.r[6].d[0] = c.r[6].d[0] | c.r[3].d[0];
    set32(c.r[5], c.r[5].w[0] - 32u);
    set32(c.r[6], c.r[6].w[0] << 8);
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.r[6].d[0] = c.r[6].d[0] | c.r[2].d[0];
    c.budget -= 15;
L_003E45D8:
    set32(c.r[3], c.r[6].w[0] << (c.r[5].w[0] & 31u));
    c.r[2].d[0] = c.r[5].d[0] ^ 0ull;
    c.r[8].d[0] = c.r[6].d[0] + 0ull;
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0])));
    set32(c.r[7], c.r[7].w[0] + 1u);
    if (c.r[2].d[0] != 0) c.r[8].d[0] = c.r[3].d[0];
    c.r[2].d[0] = ld8((c.r[7].w[0]));
    set32(c.r[7], c.r[7].w[0] + 1u);
    set32(c.r[6], c.r[6].w[0] << 8);
    c.r[3].d[0] = ld8((c.r[7].w[0]));
    c.r[6].d[0] = c.r[6].d[0] | c.r[2].d[0];
    set32(c.r[7], c.r[7].w[0] + 1u);
    set32(c.r[6], c.r[6].w[0] << 8);
    c.r[2].d[0] = ld8((c.r[7].w[0]));
    c.r[6].d[0] = c.r[6].d[0] | c.r[3].d[0];
    c.r[4].d[0] = c.r[5].sd[0] < 20ll ? 1ull : 0ull;
    set32(c.r[6], c.r[6].w[0] << 8);
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.budget -= 20;
    { const bool t = c.r[4].d[0] != 0ull; c.r[6].d[0] = c.r[6].d[0] | c.r[2].d[0];  if (t) { goto L_003E4698; } }
    set32(c.r[5], c.r[5].w[0] - 20u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull; set32(c.r[2], 0u + 12u);  if (t) { goto L_003E4650; } }
    set32(c.r[2], c.r[2].w[0] - c.r[5].w[0]);
    set32(c.r[2], c.r[6].w[0] >> (c.r[2].w[0] & 31u));
    c.r[8].d[0] = c.r[8].d[0] | c.r[2].d[0];
    set32(c.r[3], c.r[8].w[0] >> 20);
    set32(c.r[8], c.r[6].w[0] << (c.r[5].w[0] & 31u));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0]), c.r[3].w[0]);  if (t) { goto L_003E465C; } }
L_003E4650:
    set32(c.r[2], c.r[8].w[0] >> 20);
    c.r[8].d[0] = c.r[6].d[0] + 0ull;
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_003E465C:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0])));
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.r[2].d[0] = ld8((c.r[7].w[0]));
    set32(c.r[7], c.r[7].w[0] + 1u);
    set32(c.r[6], c.r[6].w[0] << 8);
    c.r[3].d[0] = ld8((c.r[7].w[0]));
    c.r[6].d[0] = c.r[6].d[0] | c.r[2].d[0];
    set32(c.r[7], c.r[7].w[0] + 1u);
    set32(c.r[6], c.r[6].w[0] << 8);
    c.r[2].d[0] = ld8((c.r[7].w[0]));
    c.r[6].d[0] = c.r[6].d[0] | c.r[3].d[0];
    set32(c.r[7], c.r[7].w[0] + 1u);
    set32(c.r[6], c.r[6].w[0] << 8);
    c.budget -= 15;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = c.r[6].d[0] | c.r[2].d[0];  if (t) { goto L_003E46A8; } }
L_003E4698:
    set32(c.r[2], c.r[8].w[0] >> 20);
    set32(c.r[8], c.r[8].w[0] << 12);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[5], c.r[5].w[0] + 12u);
    c.budget -= 4;
L_003E46A8:
    c.r[2].d[0] = c.r[5].sd[0] < 20ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[8].w[0] >> 20);  if (t) { goto L_003E4728; } }
    set32(c.r[5], c.r[5].w[0] - 20u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull; set32(c.r[2], 0u + 12u);  if (t) { goto L_003E46E0; } }
    set32(c.r[2], c.r[2].w[0] - c.r[5].w[0]);
    set32(c.r[2], c.r[6].w[0] >> (c.r[2].w[0] & 31u));
    c.r[8].d[0] = c.r[8].d[0] | c.r[2].d[0];
    set32(c.r[3], c.r[8].w[0] >> 20);
    set32(c.r[8], c.r[6].w[0] << (c.r[5].w[0] & 31u));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 4u), c.r[3].w[0]);  if (t) { goto L_003E46EC; } }
    c.budget -= 1;
L_003E46E0:
    set32(c.r[2], c.r[8].w[0] >> 20);
    c.r[8].d[0] = c.r[6].d[0] + 0ull;
    st32((c.r[17].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 3;
L_003E46EC:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0])));
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.r[2].d[0] = ld8((c.r[7].w[0]));
    set32(c.r[7], c.r[7].w[0] + 1u);
    set32(c.r[6], c.r[6].w[0] << 8);
    c.r[3].d[0] = ld8((c.r[7].w[0]));
    c.r[6].d[0] = c.r[6].d[0] | c.r[2].d[0];
    set32(c.r[7], c.r[7].w[0] + 1u);
    set32(c.r[6], c.r[6].w[0] << 8);
    c.r[2].d[0] = ld8((c.r[7].w[0]));
    c.r[6].d[0] = c.r[6].d[0] | c.r[3].d[0];
    set32(c.r[7], c.r[7].w[0] + 1u);
    set32(c.r[6], c.r[6].w[0] << 8);
    c.budget -= 15;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = c.r[6].d[0] | c.r[2].d[0];  if (t) { goto L_003E4734; } }
L_003E4728:
    set32(c.r[8], c.r[8].w[0] << 12);
    st32((c.r[17].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[5], c.r[5].w[0] + 12u);
    c.budget -= 3;
L_003E4734:
    c.r[2].d[0] = c.r[5].sd[0] < 28ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[8].w[0] >> 28);  if (t) { goto L_003E47B0; } }
    set32(c.r[5], c.r[5].w[0] - 28u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull; set32(c.r[2], 0u + 4u);  if (t) { goto L_003E4768; } }
    set32(c.r[2], c.r[2].w[0] - c.r[5].w[0]);
    set32(c.r[2], c.r[6].w[0] >> (c.r[2].w[0] & 31u));
    c.r[8].d[0] = c.r[8].d[0] | c.r[2].d[0];
    set32(c.r[3], c.r[8].w[0] >> 28);
    set32(c.r[8], c.r[6].w[0] << (c.r[5].w[0] & 31u));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 632u), c.r[3].w[0]);  if (t) { goto L_003E4774; } }
L_003E4768:
    set32(c.r[2], c.r[8].w[0] >> 28);
    c.r[8].d[0] = c.r[6].d[0] + 0ull;
    st32((c.r[16].w[0] + 632u), c.r[2].w[0]);
    c.budget -= 3;
L_003E4774:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0])));
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.r[2].d[0] = ld8((c.r[7].w[0]));
    set32(c.r[7], c.r[7].w[0] + 1u);
    set32(c.r[6], c.r[6].w[0] << 8);
    c.r[3].d[0] = ld8((c.r[7].w[0]));
    c.r[6].d[0] = c.r[6].d[0] | c.r[2].d[0];
    set32(c.r[7], c.r[7].w[0] + 1u);
    set32(c.r[6], c.r[6].w[0] << 8);
    c.r[2].d[0] = ld8((c.r[7].w[0]));
    c.r[6].d[0] = c.r[6].d[0] | c.r[3].d[0];
    set32(c.r[7], c.r[7].w[0] + 1u);
    set32(c.r[6], c.r[6].w[0] << 8);
    c.budget -= 15;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = c.r[6].d[0] | c.r[2].d[0];  if (t) { goto L_003E47BC; } }
L_003E47B0:
    set32(c.r[8], c.r[8].w[0] << 4);
    st32((c.r[16].w[0] + 632u), c.r[2].w[0]);
    set32(c.r[5], c.r[5].w[0] + 4u);
    c.budget -= 3;
L_003E47BC:
    c.r[2].d[0] = c.r[5].sd[0] < 28ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[8].w[0] >> 28);  if (t) { goto L_003E4830; } }
    set32(c.r[5], c.r[5].w[0] - 28u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull; set32(c.r[2], 0u + 4u);  if (t) { goto L_003E47F0; } }
    set32(c.r[2], c.r[2].w[0] - c.r[5].w[0]);
    set32(c.r[2], c.r[6].w[0] >> (c.r[2].w[0] & 31u));
    c.r[8].d[0] = c.r[8].d[0] | c.r[2].d[0];
    set32(c.r[4], c.r[8].w[0] >> 28);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; set32(c.r[8], c.r[6].w[0] << (c.r[5].w[0] & 31u));  if (t) { goto L_003E47F4; } }
    c.budget -= 1;
L_003E47F0:
    c.r[8].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 1;
L_003E47F4:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0])));
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.r[2].d[0] = ld8((c.r[7].w[0]));
    set32(c.r[7], c.r[7].w[0] + 1u);
    set32(c.r[6], c.r[6].w[0] << 8);
    c.r[3].d[0] = ld8((c.r[7].w[0]));
    c.r[6].d[0] = c.r[6].d[0] | c.r[2].d[0];
    set32(c.r[7], c.r[7].w[0] + 1u);
    set32(c.r[6], c.r[6].w[0] << 8);
    c.r[2].d[0] = ld8((c.r[7].w[0]));
    c.r[6].d[0] = c.r[6].d[0] | c.r[3].d[0];
    set32(c.r[7], c.r[7].w[0] + 1u);
    set32(c.r[6], c.r[6].w[0] << 8);
    c.budget -= 15;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = c.r[6].d[0] | c.r[2].d[0];  if (t) { goto L_003E4838; } }
L_003E4830:
    set32(c.r[8], c.r[8].w[0] << 4);
    set32(c.r[5], c.r[5].w[0] + 4u);
    c.budget -= 2;
L_003E4838:
    c.r[2].d[0] = c.r[5].sd[0] < 14ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[17].w[0] + 16u), c.r[4].w[0]);  if (t) { goto L_003E48B8; } }
    set32(c.r[5], c.r[5].w[0] - 14u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull; set32(c.r[2], 0u + 18u);  if (t) { goto L_003E4870; } }
    set32(c.r[2], c.r[2].w[0] - c.r[5].w[0]);
    set32(c.r[2], c.r[6].w[0] >> (c.r[2].w[0] & 31u));
    c.r[8].d[0] = c.r[8].d[0] | c.r[2].d[0];
    set32(c.r[3], c.r[8].w[0] >> 14);
    set32(c.r[8], c.r[6].w[0] << (c.r[5].w[0] & 31u));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 636u), c.r[3].w[0]);  if (t) { goto L_003E487C; } }
    c.budget -= 1;
L_003E4870:
    set32(c.r[2], c.r[8].w[0] >> 14);
    c.r[8].d[0] = c.r[6].d[0] + 0ull;
    st32((c.r[16].w[0] + 636u), c.r[2].w[0]);
    c.budget -= 3;
L_003E487C:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0])));
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.r[2].d[0] = ld8((c.r[7].w[0]));
    set32(c.r[7], c.r[7].w[0] + 1u);
    set32(c.r[6], c.r[6].w[0] << 8);
    c.r[3].d[0] = ld8((c.r[7].w[0]));
    c.r[6].d[0] = c.r[6].d[0] | c.r[2].d[0];
    set32(c.r[7], c.r[7].w[0] + 1u);
    set32(c.r[6], c.r[6].w[0] << 8);
    c.r[2].d[0] = ld8((c.r[7].w[0]));
    c.r[6].d[0] = c.r[6].d[0] | c.r[3].d[0];
    set32(c.r[7], c.r[7].w[0] + 1u);
    set32(c.r[6], c.r[6].w[0] << 8);
    c.budget -= 15;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = c.r[6].d[0] | c.r[2].d[0];  if (t) { goto L_003E48C8; } }
L_003E48B8:
    set32(c.r[2], c.r[8].w[0] >> 14);
    set32(c.r[8], c.r[8].w[0] << 18);
    st32((c.r[16].w[0] + 636u), c.r[2].w[0]);
    set32(c.r[5], c.r[5].w[0] + 18u);
    c.budget -= 4;
L_003E48C8:
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.r[2].d[0] = c.r[5].sd[0] < 32ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[8], c.r[8].w[0] << 1);  goto L_003E4918; }
    set32(c.r[5], c.r[5].w[0] - 32u);
    set32(c.r[8], c.r[6].w[0] << (c.r[5].w[0] & 31u));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0])));
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.r[2].d[0] = ld8((c.r[7].w[0]));
    set32(c.r[7], c.r[7].w[0] + 1u);
    set32(c.r[6], c.r[6].w[0] << 8);
    c.r[3].d[0] = ld8((c.r[7].w[0]));
    c.r[6].d[0] = c.r[6].d[0] | c.r[2].d[0];
    set32(c.r[7], c.r[7].w[0] + 1u);
    set32(c.r[6], c.r[6].w[0] << 8);
    c.r[2].d[0] = ld8((c.r[7].w[0]));
    c.r[6].d[0] = c.r[6].d[0] | c.r[3].d[0];
    set32(c.r[7], c.r[7].w[0] + 1u);
    set32(c.r[6], c.r[6].w[0] << 8);
    c.r[6].d[0] = c.r[6].d[0] | c.r[2].d[0];
    c.budget -= 16;
L_003E4918:
    c.r[2].d[0] = c.r[5].sd[0] < 22ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[8].w[0] >> 22);  if (t) { goto L_003E4998; } }
    set32(c.r[5], c.r[5].w[0] - 22u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull; set32(c.r[2], 0u + 10u);  if (t) { goto L_003E4950; } }
    set32(c.r[2], c.r[2].w[0] - c.r[5].w[0]);
    set32(c.r[2], c.r[6].w[0] >> (c.r[2].w[0] & 31u));
    c.r[8].d[0] = c.r[8].d[0] | c.r[2].d[0];
    set32(c.r[3], c.r[8].w[0] >> 22);
    set32(c.r[8], c.r[6].w[0] << (c.r[5].w[0] & 31u));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 640u), c.r[3].w[0]);  if (t) { goto L_003E495C; } }
    c.budget -= 1;
L_003E4950:
    set32(c.r[2], c.r[8].w[0] >> 22);
    c.r[8].d[0] = c.r[6].d[0] + 0ull;
    st32((c.r[16].w[0] + 640u), c.r[2].w[0]);
    c.budget -= 3;
L_003E495C:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0])));
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.r[2].d[0] = ld8((c.r[7].w[0]));
    set32(c.r[7], c.r[7].w[0] + 1u);
    set32(c.r[6], c.r[6].w[0] << 8);
    c.r[3].d[0] = ld8((c.r[7].w[0]));
    c.r[6].d[0] = c.r[6].d[0] | c.r[2].d[0];
    set32(c.r[7], c.r[7].w[0] + 1u);
    set32(c.r[6], c.r[6].w[0] << 8);
    c.r[2].d[0] = ld8((c.r[7].w[0]));
    c.r[6].d[0] = c.r[6].d[0] | c.r[3].d[0];
    set32(c.r[7], c.r[7].w[0] + 1u);
    set32(c.r[6], c.r[6].w[0] << 8);
    c.budget -= 15;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = c.r[6].d[0] | c.r[2].d[0];  if (t) { goto L_003E49A4; } }
L_003E4998:
    set32(c.r[8], c.r[8].w[0] << 10);
    st32((c.r[16].w[0] + 640u), c.r[2].w[0]);
    set32(c.r[5], c.r[5].w[0] + 10u);
    c.budget -= 3;
L_003E49A4:
    set32(c.r[2], c.r[8].w[0] >> 31);
    set32(c.r[3], 0u + 31u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[3].d[0]; st32((c.r[16].w[0] + 644u), c.r[2].w[0]);  if (t) { goto L_003E49F8; } }
    c.r[8].d[0] = c.r[6].d[0] + 0ull;
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0])));
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[2].d[0] = ld8((c.r[7].w[0]));
    set32(c.r[7], c.r[7].w[0] + 1u);
    set32(c.r[6], c.r[6].w[0] << 8);
    c.r[3].d[0] = ld8((c.r[7].w[0]));
    c.r[6].d[0] = c.r[6].d[0] | c.r[2].d[0];
    set32(c.r[7], c.r[7].w[0] + 1u);
    set32(c.r[6], c.r[6].w[0] << 8);
    c.r[2].d[0] = ld8((c.r[7].w[0]));
    c.r[6].d[0] = c.r[6].d[0] | c.r[3].d[0];
    set32(c.r[7], c.r[7].w[0] + 1u);
    set32(c.r[6], c.r[6].w[0] << 8);
    c.budget -= 17;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = c.r[6].d[0] | c.r[2].d[0];  if (t) { goto L_003E4A00; } }
L_003E49F8:
    set32(c.r[5], c.r[5].w[0] + 1u);
    set32(c.r[8], c.r[8].w[0] << 1);
    c.budget -= 2;
L_003E4A00:
    set32(c.r[2], 0u + 31u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[2].d[0]; set32(c.r[4], c.r[8].w[0] >> 31);  if (t) { goto L_003E4A50; } }
    c.r[8].d[0] = c.r[6].d[0] + 0ull;
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0])));
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[2].d[0] = ld8((c.r[7].w[0]));
    set32(c.r[7], c.r[7].w[0] + 1u);
    set32(c.r[6], c.r[6].w[0] << 8);
    c.r[3].d[0] = ld8((c.r[7].w[0]));
    c.r[6].d[0] = c.r[6].d[0] | c.r[2].d[0];
    set32(c.r[7], c.r[7].w[0] + 1u);
    set32(c.r[6], c.r[6].w[0] << 8);
    c.r[2].d[0] = ld8((c.r[7].w[0]));
    c.r[6].d[0] = c.r[6].d[0] | c.r[3].d[0];
    set32(c.r[7], c.r[7].w[0] + 1u);
    set32(c.r[6], c.r[6].w[0] << 8);
    c.budget -= 17;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = c.r[6].d[0] | c.r[2].d[0];  if (t) { goto L_003E4A58; } }
L_003E4A50:
    set32(c.r[5], c.r[5].w[0] + 1u);
    set32(c.r[8], c.r[8].w[0] << 1);
    c.budget -= 2;
L_003E4A58:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[4], 0u + 63u);  if (t) { goto L_003E4AD0; } }
    c.r[2].d[0] = c.r[5].sd[0] < 24ll ? 1ull : 0ull;
    c.budget -= 2;
L_003E4A68:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[5], c.r[5].w[0] + 8u);  goto L_003E4AC0; }
    set32(c.r[5], c.r[5].w[0] - 24u);
    c.r[8].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[3], c.r[6].w[0] << (c.r[5].w[0] & 31u));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0])));
    c.r[2].d[0] = c.r[5].d[0] ^ 0ull;
    set32(c.r[7], c.r[7].w[0] + 1u);
    if (c.r[2].d[0] != 0) c.r[8].d[0] = c.r[3].d[0];
    c.r[2].d[0] = ld8((c.r[7].w[0]));
    set32(c.r[6], c.r[6].w[0] << 8);
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.r[3].d[0] = ld8((c.r[7].w[0]));
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.r[6].d[0] = c.r[6].d[0] | c.r[2].d[0];
    c.r[2].d[0] = ld8((c.r[7].w[0]));
    set32(c.r[6], c.r[6].w[0] << 8);
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.r[6].d[0] = c.r[6].d[0] | c.r[3].d[0];
    set32(c.r[6], c.r[6].w[0] << 8);
    c.budget -= 20;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = c.r[6].d[0] | c.r[2].d[0];  if (t) { goto L_003E4AC4; } }
L_003E4AC0:
    set32(c.r[8], c.r[8].w[0] << 8);
    c.budget -= 1;
L_003E4AC4:
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.budget -= 3;
    { const bool t = c.r[4].sd[0] >= 0; c.r[2].d[0] = c.r[5].sd[0] < 24ll ? 1ull : 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003E4A68u | kUnwind; return; } goto L_003E4A68; } }
L_003E4AD0:
    set32(c.r[2], 0u + 31u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[2].d[0]; set32(c.r[4], c.r[8].w[0] >> 31);  if (t) { goto L_003E4AE8; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[7], c.r[7].w[0] + 4u);  if (t) { goto L_003E4AEC; } }
L_003E4AE8:
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 1;
L_003E4AEC:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[4], 0u + 63u);  if (t) { goto L_003E4B1C; } }
    c.r[2].d[0] = c.r[5].sd[0] < 24ll ? 1ull : 0ull;
    c.budget -= 1;
L_003E4AF8:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[5], c.r[5].w[0] + 8u);  goto L_003E4B08; }
    set32(c.r[5], c.r[5].w[0] - 24u);
    set32(c.r[7], c.r[7].w[0] + 4u);
    c.budget -= 2;
L_003E4B08:
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.budget -= 5;
    { const bool t = c.r[4].sd[0] >= 0; c.r[2].d[0] = c.r[5].sd[0] < 24ll ? 1ull : 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003E4AF8u | kUnwind; return; } goto L_003E4AF8; } }
L_003E4B1C:
    set32(c.r[3], ld32((c.r[17].w[0])));
    c.r[8].d[0] = c.r[5].d[0] & 7ull;
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[5], c.r[5].w[0] - c.r[8].w[0]);
    set32(c.r[3], c.r[3].w[0] + 15u);
    set32(c.r[5], c.r[5].w[0] + 7u);
    set32(c.r[2], c.r[2].w[0] + 15u);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 4));
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 4));
    set32(c.r[5], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[5].w[0]) >> 3));
    mmi::mult(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[6], ld32((c.r[16].w[0] + 840u)));
    set32(c.r[5], c.r[7].w[0] + c.r[5].w[0]);
    c.r[7].d[0] = c.r[29].d[0] + 0ull;
    st32((c.r[17].w[0] + 12u), c.r[2].w[0]);
    set32(c.r[5], c.r[5].w[0] - 8u);
    st32((c.r[17].w[0] + 8u), c.r[3].w[0]);
    set32(c.r[5], c.r[5].w[0] - c.r[6].w[0]);
    set32(c.r[4], c.r[4].w[0] - 1u);
    st32((c.r[16].w[0] + 848u), c.r[8].w[0]);
    st32((c.r[16].w[0] + 784u), c.r[4].w[0]);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 24;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E4B7Cu); c.r[6].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B4(c, 230u, depth + 1u); else { c.pc = 0x003D2388u; return; } if (c.pc != 0x003E4B7Cu) [[unlikely]] return; }
L_003E4B7C:
    set32(c.r[3], ld32((c.r[18].w[0])));
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] + 32u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003E4B94u); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003E4B94u) [[unlikely]] return; }
L_003E4B94:
    set32(c.r[3], ld32((c.r[18].w[0])));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    set32(c.r[2], ld32((c.r[3].w[0] + 28u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003E4BACu); c.r[6].d[0] = c.r[29].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003E4BACu) [[unlikely]] return; }
L_003E4BAC:
    c.r[2].d[0] = 0ull + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003E4BD0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[2], 0u + 2u);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    st64((c.r[29].w[0] + 24u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 40u), c.r[19].d[0]);
    set32(c.r[19], c.r[17].w[0] + 840u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    set32(c.r[16], c.r[17].w[0] + 464u);
    st32((c.r[17].w[0] + 900u), c.r[2].w[0]);
    set32(c.r[5], 0u + 1u);
    set32(c.r[3], ld32((c.r[16].w[0] + 48u)));
    c.r[6].d[0] = c.r[6].d[0] | 65535ull;
    set32(c.r[4], ld32((c.r[18].w[0])));
    c.r[7].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] + 1u);
    set32(c.r[2], ld32((c.r[4].w[0] + 24u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 23;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003E4C2Cu); st32((c.r[16].w[0] + 48u), c.r[3].w[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003E4C2Cu) [[unlikely]] return; }
L_003E4C2C:
    set32(c.r[3], ld32((c.r[19].w[0])));
    set32(c.r[2], 0u - 4u);
    c.r[10].d[0] = c.r[3].d[0] & c.r[2].d[0];
    set32(c.r[3], c.r[3].w[0] - c.r[10].w[0]);
    set32(c.r[10], c.r[10].w[0] + 4u);
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[10].w[0])));
    set32(c.r[10], c.r[10].w[0] + 1u);
    c.r[2].d[0] = ld8((c.r[10].w[0]));
    set32(c.r[10], c.r[10].w[0] + 1u);
    set32(c.r[9], c.r[9].w[0] << 8);
    c.r[4].d[0] = ld8((c.r[10].w[0]));
    c.r[9].d[0] = c.r[9].d[0] | c.r[2].d[0];
    set32(c.r[10], c.r[10].w[0] + 1u);
    set32(c.r[9], c.r[9].w[0] << 8);
    c.r[2].d[0] = ld8((c.r[10].w[0]));
    set32(c.r[11], c.r[3].w[0] << 3);
    c.r[9].d[0] = c.r[9].d[0] | c.r[4].d[0];
    set32(c.r[9], c.r[9].w[0] << 8);
    c.r[3].d[0] = c.r[11].sd[0] < 32ll ? 1ull : 0ull;
    c.r[9].d[0] = c.r[9].d[0] | c.r[2].d[0];
    c.budget -= 22;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[10], c.r[10].w[0] + 1u);  if (t) { goto L_003E4CC0; } }
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[10].w[0])));
    set32(c.r[10], c.r[10].w[0] + 1u);
    c.r[2].d[0] = ld8((c.r[10].w[0]));
    set32(c.r[10], c.r[10].w[0] + 1u);
    set32(c.r[9], c.r[9].w[0] << 8);
    c.r[3].d[0] = ld8((c.r[10].w[0]));
    c.r[9].d[0] = c.r[9].d[0] | c.r[2].d[0];
    set32(c.r[10], c.r[10].w[0] + 1u);
    set32(c.r[9], c.r[9].w[0] << 8);
    c.r[2].d[0] = ld8((c.r[10].w[0]));
    c.r[9].d[0] = c.r[9].d[0] | c.r[3].d[0];
    set32(c.r[11], c.r[11].w[0] - 32u);
    set32(c.r[9], c.r[9].w[0] << 8);
    set32(c.r[10], c.r[10].w[0] + 1u);
    c.r[9].d[0] = c.r[9].d[0] | c.r[2].d[0];
    c.budget -= 15;
L_003E4CC0:
    set32(c.r[3], c.r[9].w[0] << (c.r[11].w[0] & 31u));
    c.r[2].d[0] = c.r[11].d[0] ^ 0ull;
    c.r[12].d[0] = c.r[9].d[0] + 0ull;
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[10].w[0])));
    set32(c.r[10], c.r[10].w[0] + 1u);
    if (c.r[2].d[0] != 0) c.r[12].d[0] = c.r[3].d[0];
    c.r[2].d[0] = ld8((c.r[10].w[0]));
    set32(c.r[10], c.r[10].w[0] + 1u);
    set32(c.r[9], c.r[9].w[0] << 8);
    c.r[3].d[0] = ld8((c.r[10].w[0]));
    c.r[9].d[0] = c.r[9].d[0] | c.r[2].d[0];
    set32(c.r[10], c.r[10].w[0] + 1u);
    set32(c.r[9], c.r[9].w[0] << 8);
    c.r[2].d[0] = ld8((c.r[10].w[0]));
    c.r[9].d[0] = c.r[9].d[0] | c.r[3].d[0];
    c.r[4].d[0] = c.r[11].sd[0] < 7ll ? 1ull : 0ull;
    set32(c.r[9], c.r[9].w[0] << 8);
    set32(c.r[10], c.r[10].w[0] + 1u);
    c.budget -= 20;
    { const bool t = c.r[4].d[0] != 0ull; c.r[9].d[0] = c.r[9].d[0] | c.r[2].d[0];  if (t) { goto L_003E4D80; } }
    set32(c.r[11], c.r[11].w[0] - 7u);
    c.budget -= 3;
    { const bool t = c.r[11].d[0] == 0ull; set32(c.r[2], 0u + 25u);  if (t) { goto L_003E4D38; } }
    set32(c.r[2], c.r[2].w[0] - c.r[11].w[0]);
    set32(c.r[2], c.r[9].w[0] >> (c.r[2].w[0] & 31u));
    c.r[12].d[0] = c.r[12].d[0] | c.r[2].d[0];
    set32(c.r[4], c.r[12].w[0] >> 7);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; set32(c.r[12], c.r[9].w[0] << (c.r[11].w[0] & 31u));  if (t) { goto L_003E4D40; } }
    c.budget -= 1;
L_003E4D38:
    set32(c.r[4], c.r[12].w[0] >> 7);
    c.r[12].d[0] = c.r[9].d[0] + 0ull;
    c.budget -= 2;
L_003E4D40:
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[10].w[0])));
    set32(c.r[10], c.r[10].w[0] + 1u);
    c.r[2].d[0] = ld8((c.r[10].w[0]));
    set32(c.r[10], c.r[10].w[0] + 1u);
    set32(c.r[9], c.r[9].w[0] << 8);
    c.r[3].d[0] = ld8((c.r[10].w[0]));
    c.r[9].d[0] = c.r[9].d[0] | c.r[2].d[0];
    set32(c.r[10], c.r[10].w[0] + 1u);
    set32(c.r[9], c.r[9].w[0] << 8);
    c.r[2].d[0] = ld8((c.r[10].w[0]));
    c.r[9].d[0] = c.r[9].d[0] | c.r[3].d[0];
    set32(c.r[10], c.r[10].w[0] + 1u);
    set32(c.r[9], c.r[9].w[0] << 8);
    c.budget -= 15;
    { const bool t = 0ull == 0ull; c.r[9].d[0] = c.r[9].d[0] | c.r[2].d[0];  if (t) { goto L_003E4D8C; } }
    c.budget -= 1;
L_003E4D80:
    set32(c.r[4], c.r[12].w[0] >> 7);
    set32(c.r[12], c.r[12].w[0] << 25);
    set32(c.r[11], c.r[11].w[0] + 25u);
    c.budget -= 3;
L_003E4D8C:
    c.r[8].d[0] = c.r[4].d[0] & 63ull;
    set32(c.r[4], c.r[4].w[0] >> 6);
    c.r[7].d[0] = c.r[4].d[0] & 63ull;
    set32(c.r[4], c.r[4].w[0] >> 7);
    c.r[6].d[0] = c.r[4].d[0] & 63ull;
    set32(c.r[4], c.r[4].w[0] >> 6);
    set32(c.r[2], c.r[4].w[0] >> 5);
    c.r[3].d[0] = c.r[4].d[0] & 31ull;
    set32(c.r[5], 0u + 31u);
    set32(c.r[4], c.r[12].w[0] >> 31);
    st32((c.r[16].w[0] + 28u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 44u), c.r[8].w[0]);
    st32((c.r[16].w[0] + 40u), c.r[7].w[0]);
    st32((c.r[16].w[0] + 36u), c.r[6].w[0]);
    st32((c.r[16].w[0] + 32u), c.r[3].w[0]);
    c.budget -= 17;
    { const bool t = c.r[11].d[0] != c.r[5].d[0]; st32((c.r[17].w[0] + 648u), c.r[4].w[0]);  if (t) { goto L_003E4DE0; } }
    c.r[12].d[0] = c.r[9].d[0] + 0ull;
    c.r[11].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[10], c.r[10].w[0] + 4u);  if (t) { goto L_003E4DE8; } }
L_003E4DE0:
    set32(c.r[11], c.r[11].w[0] + 1u);
    set32(c.r[12], c.r[12].w[0] << 1);
    c.budget -= 2;
L_003E4DE8:
    set32(c.r[2], c.r[12].w[0] >> 31);
    set32(c.r[3], 0u + 31u);
    c.budget -= 4;
    { const bool t = c.r[11].d[0] != c.r[3].d[0]; st32((c.r[17].w[0] + 652u), c.r[2].w[0]);  if (t) { goto L_003E4E08; } }
    c.r[11].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[10], c.r[10].w[0] + 4u);  if (t) { goto L_003E4E0C; } }
    c.budget -= 1;
L_003E4E08:
    set32(c.r[11], c.r[11].w[0] + 1u);
    c.budget -= 1;
L_003E4E0C:
    c.r[2].d[0] = c.r[11].d[0] & 7ull;
    set32(c.r[3], ld32((c.r[17].w[0] + 840u)));
    set32(c.r[5], c.r[11].w[0] - c.r[2].w[0]);
    st32((c.r[17].w[0] + 848u), c.r[2].w[0]);
    set32(c.r[5], c.r[5].w[0] + 7u);
    c.r[7].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[5], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[5].w[0]) >> 3));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], c.r[10].w[0] + c.r[5].w[0]);
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 8u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E4E40u); set32(c.r[5], c.r[5].w[0] - c.r[3].w[0]);  if (depth < kMaxDepth) unit_00B4(c, 230u, depth + 1u); else { c.pc = 0x003D2388u; return; } if (c.pc != 0x003E4E40u) [[unlikely]] return; }
L_003E4E40:
    set32(c.r[3], ld32((c.r[18].w[0])));
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] + 32u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003E4E58u); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003E4E58u) [[unlikely]] return; }
L_003E4E58:
    set32(c.r[3], ld32((c.r[18].w[0])));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    set32(c.r[2], ld32((c.r[3].w[0] + 28u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003E4E70u); c.r[6].d[0] = c.r[29].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003E4E70u) [[unlikely]] return; }
L_003E4E70:
    c.r[2].d[0] = 0ull + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003E4E90:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[2], 0u + 3u);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    set32(c.r[18], c.r[16].w[0] + 840u);
    st64((c.r[29].w[0] + 40u), c.r[31].d[0]);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    st32((c.r[16].w[0] + 900u), c.r[2].w[0]);
    set32(c.r[5], 0u + 1u);
    set32(c.r[3], ld32((c.r[17].w[0])));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[6].d[0] | 65535ull;
    set32(c.r[2], ld32((c.r[3].w[0] + 24u)));
    c.budget -= 18;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003E4ED8u); c.r[7].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003E4ED8u) [[unlikely]] return; }
L_003E4ED8:
    set32(c.r[3], ld32((c.r[18].w[0])));
    set32(c.r[2], 0u - 4u);
    set32(c.r[9], c.r[16].w[0] + 464u);
    c.r[8].d[0] = c.r[3].d[0] & c.r[2].d[0];
    set32(c.r[3], c.r[3].w[0] - c.r[8].w[0]);
    set32(c.r[8], c.r[8].w[0] + 4u);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0])));
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.r[2].d[0] = ld8((c.r[8].w[0]));
    set32(c.r[8], c.r[8].w[0] + 1u);
    set32(c.r[6], c.r[6].w[0] << 8);
    c.r[4].d[0] = ld8((c.r[8].w[0]));
    c.r[6].d[0] = c.r[6].d[0] | c.r[2].d[0];
    set32(c.r[8], c.r[8].w[0] + 1u);
    set32(c.r[6], c.r[6].w[0] << 8);
    c.r[2].d[0] = ld8((c.r[8].w[0]));
    set32(c.r[5], c.r[3].w[0] << 3);
    c.r[6].d[0] = c.r[6].d[0] | c.r[4].d[0];
    set32(c.r[6], c.r[6].w[0] << 8);
    c.r[3].d[0] = c.r[5].sd[0] < 32ll ? 1ull : 0ull;
    c.r[6].d[0] = c.r[6].d[0] | c.r[2].d[0];
    c.budget -= 23;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[8], c.r[8].w[0] + 1u);  if (t) { goto L_003E4F70; } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0])));
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.r[2].d[0] = ld8((c.r[8].w[0]));
    set32(c.r[8], c.r[8].w[0] + 1u);
    set32(c.r[6], c.r[6].w[0] << 8);
    c.r[3].d[0] = ld8((c.r[8].w[0]));
    c.r[6].d[0] = c.r[6].d[0] | c.r[2].d[0];
    set32(c.r[8], c.r[8].w[0] + 1u);
    set32(c.r[6], c.r[6].w[0] << 8);
    c.r[2].d[0] = ld8((c.r[8].w[0]));
    c.r[6].d[0] = c.r[6].d[0] | c.r[3].d[0];
    set32(c.r[5], c.r[5].w[0] - 32u);
    set32(c.r[6], c.r[6].w[0] << 8);
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.r[6].d[0] = c.r[6].d[0] | c.r[2].d[0];
    c.budget -= 15;
L_003E4F70:
    set32(c.r[3], c.r[6].w[0] << (c.r[5].w[0] & 31u));
    c.r[2].d[0] = c.r[5].d[0] ^ 0ull;
    c.r[7].d[0] = c.r[6].d[0] + 0ull;
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0])));
    set32(c.r[8], c.r[8].w[0] + 1u);
    if (c.r[2].d[0] != 0) c.r[7].d[0] = c.r[3].d[0];
    c.r[2].d[0] = ld8((c.r[8].w[0]));
    set32(c.r[8], c.r[8].w[0] + 1u);
    set32(c.r[6], c.r[6].w[0] << 8);
    c.r[3].d[0] = ld8((c.r[8].w[0]));
    c.r[6].d[0] = c.r[6].d[0] | c.r[2].d[0];
    set32(c.r[8], c.r[8].w[0] + 1u);
    set32(c.r[6], c.r[6].w[0] << 8);
    c.r[2].d[0] = ld8((c.r[8].w[0]));
    c.r[6].d[0] = c.r[6].d[0] | c.r[3].d[0];
    c.r[4].d[0] = c.r[5].sd[0] < 22ll ? 1ull : 0ull;
    set32(c.r[6], c.r[6].w[0] << 8);
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.budget -= 20;
    { const bool t = c.r[4].d[0] != 0ull; c.r[6].d[0] = c.r[6].d[0] | c.r[2].d[0];  if (t) { goto L_003E5030; } }
    set32(c.r[5], c.r[5].w[0] - 22u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull; set32(c.r[2], 0u + 10u);  if (t) { goto L_003E4FE8; } }
    set32(c.r[2], c.r[2].w[0] - c.r[5].w[0]);
    set32(c.r[2], c.r[6].w[0] >> (c.r[2].w[0] & 31u));
    c.r[7].d[0] = c.r[7].d[0] | c.r[2].d[0];
    set32(c.r[3], c.r[7].w[0] >> 22);
    set32(c.r[7], c.r[6].w[0] << (c.r[5].w[0] & 31u));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[9].w[0] + 20u), c.r[3].w[0]);  if (t) { goto L_003E4FF4; } }
L_003E4FE8:
    set32(c.r[2], c.r[7].w[0] >> 22);
    c.r[7].d[0] = c.r[6].d[0] + 0ull;
    st32((c.r[9].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 3;
L_003E4FF4:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0])));
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.r[2].d[0] = ld8((c.r[8].w[0]));
    set32(c.r[8], c.r[8].w[0] + 1u);
    set32(c.r[6], c.r[6].w[0] << 8);
    c.r[3].d[0] = ld8((c.r[8].w[0]));
    c.r[6].d[0] = c.r[6].d[0] | c.r[2].d[0];
    set32(c.r[8], c.r[8].w[0] + 1u);
    set32(c.r[6], c.r[6].w[0] << 8);
    c.r[2].d[0] = ld8((c.r[8].w[0]));
    c.r[6].d[0] = c.r[6].d[0] | c.r[3].d[0];
    set32(c.r[8], c.r[8].w[0] + 1u);
    set32(c.r[6], c.r[6].w[0] << 8);
    c.budget -= 15;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = c.r[6].d[0] | c.r[2].d[0];  if (t) { goto L_003E5040; } }
L_003E5030:
    set32(c.r[2], c.r[7].w[0] >> 22);
    set32(c.r[7], c.r[7].w[0] << 10);
    st32((c.r[9].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[5], c.r[5].w[0] + 10u);
    c.budget -= 4;
L_003E5040:
    c.r[2].d[0] = c.r[5].sd[0] < 29ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[7].w[0] >> 29);  if (t) { goto L_003E50B0; } }
    set32(c.r[5], c.r[5].w[0] - 29u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull; set32(c.r[2], 0u + 3u);  if (t) { goto L_003E5070; } }
    set32(c.r[2], c.r[2].w[0] - c.r[5].w[0]);
    set32(c.r[2], c.r[6].w[0] >> (c.r[2].w[0] & 31u));
    c.r[7].d[0] = c.r[7].d[0] | c.r[2].d[0];
    set32(c.r[4], c.r[7].w[0] >> 29);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; set32(c.r[7], c.r[6].w[0] << (c.r[5].w[0] & 31u));  if (t) { goto L_003E5074; } }
L_003E5070:
    c.r[7].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 1;
L_003E5074:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0])));
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.r[2].d[0] = ld8((c.r[8].w[0]));
    set32(c.r[8], c.r[8].w[0] + 1u);
    set32(c.r[6], c.r[6].w[0] << 8);
    c.r[3].d[0] = ld8((c.r[8].w[0]));
    c.r[6].d[0] = c.r[6].d[0] | c.r[2].d[0];
    set32(c.r[8], c.r[8].w[0] + 1u);
    set32(c.r[6], c.r[6].w[0] << 8);
    c.r[2].d[0] = ld8((c.r[8].w[0]));
    c.r[6].d[0] = c.r[6].d[0] | c.r[3].d[0];
    set32(c.r[8], c.r[8].w[0] + 1u);
    set32(c.r[6], c.r[6].w[0] << 8);
    c.budget -= 15;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = c.r[6].d[0] | c.r[2].d[0];  if (t) { goto L_003E50B8; } }
L_003E50B0:
    set32(c.r[7], c.r[7].w[0] << 3);
    set32(c.r[5], c.r[5].w[0] + 3u);
    c.budget -= 2;
L_003E50B8:
    c.r[2].d[0] = c.r[5].sd[0] < 16ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[9].w[0] + 24u), c.r[4].w[0]);  if (t) { goto L_003E5138; } }
    set32(c.r[5], c.r[5].w[0] - 16u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull; set32(c.r[2], 0u + 16u);  if (t) { goto L_003E50F0; } }
    set32(c.r[2], c.r[2].w[0] - c.r[5].w[0]);
    set32(c.r[2], c.r[6].w[0] >> (c.r[2].w[0] & 31u));
    c.r[7].d[0] = c.r[7].d[0] | c.r[2].d[0];
    set32(c.r[3], c.r[7].w[0] >> 16);
    set32(c.r[7], c.r[6].w[0] << (c.r[5].w[0] & 31u));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 656u), c.r[3].w[0]);  if (t) { goto L_003E50FC; } }
    c.budget -= 1;
L_003E50F0:
    set32(c.r[2], c.r[7].w[0] >> 16);
    c.r[7].d[0] = c.r[6].d[0] + 0ull;
    st32((c.r[16].w[0] + 656u), c.r[2].w[0]);
    c.budget -= 3;
L_003E50FC:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0])));
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.r[2].d[0] = ld8((c.r[8].w[0]));
    set32(c.r[8], c.r[8].w[0] + 1u);
    set32(c.r[6], c.r[6].w[0] << 8);
    c.r[3].d[0] = ld8((c.r[8].w[0]));
    c.r[6].d[0] = c.r[6].d[0] | c.r[2].d[0];
    set32(c.r[8], c.r[8].w[0] + 1u);
    set32(c.r[6], c.r[6].w[0] << 8);
    c.r[2].d[0] = ld8((c.r[8].w[0]));
    c.r[6].d[0] = c.r[6].d[0] | c.r[3].d[0];
    set32(c.r[8], c.r[8].w[0] + 1u);
    set32(c.r[6], c.r[6].w[0] << 8);
    c.budget -= 15;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = c.r[6].d[0] | c.r[2].d[0];  if (t) { goto L_003E5148; } }
L_003E5138:
    set32(c.r[2], c.r[7].w[0] >> 16);
    set32(c.r[7], c.r[7].w[0] << 16);
    st32((c.r[16].w[0] + 656u), c.r[2].w[0]);
    set32(c.r[5], c.r[5].w[0] + 16u);
    c.budget -= 4;
L_003E5148:
    set32(c.r[10], ld32((c.r[9].w[0] + 24u)));
    set32(c.r[2], c.r[10].w[0] - 2u);
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 3u);  if (t) { goto L_003E525C; } }
    set32(c.r[9], c.r[16].w[0] + 708u);
    set32(c.r[2], c.r[7].w[0] >> 31);
    set32(c.r[3], 0u + 31u);
    c.budget -= 5;
    { const bool t = c.r[5].d[0] != c.r[3].d[0]; st32((c.r[9].w[0]), c.r[2].w[0]);  if (t) { goto L_003E51B8; } }
    c.r[7].d[0] = c.r[6].d[0] + 0ull;
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0])));
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[2].d[0] = ld8((c.r[8].w[0]));
    set32(c.r[8], c.r[8].w[0] + 1u);
    set32(c.r[6], c.r[6].w[0] << 8);
    c.r[3].d[0] = ld8((c.r[8].w[0]));
    c.r[6].d[0] = c.r[6].d[0] | c.r[2].d[0];
    set32(c.r[8], c.r[8].w[0] + 1u);
    set32(c.r[6], c.r[6].w[0] << 8);
    c.r[2].d[0] = ld8((c.r[8].w[0]));
    c.r[6].d[0] = c.r[6].d[0] | c.r[3].d[0];
    set32(c.r[8], c.r[8].w[0] + 1u);
    set32(c.r[6], c.r[6].w[0] << 8);
    c.budget -= 17;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = c.r[6].d[0] | c.r[2].d[0];  if (t) { goto L_003E51C0; } }
    c.budget -= 1;
L_003E51B8:
    set32(c.r[5], c.r[5].w[0] + 1u);
    set32(c.r[7], c.r[7].w[0] << 1);
    c.budget -= 2;
L_003E51C0:
    c.r[2].d[0] = c.r[5].sd[0] < 29ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[7].w[0] >> 29);  if (t) { goto L_003E5230; } }
    set32(c.r[5], c.r[5].w[0] - 29u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull; set32(c.r[2], 0u + 3u);  if (t) { goto L_003E51F0; } }
    set32(c.r[2], c.r[2].w[0] - c.r[5].w[0]);
    set32(c.r[2], c.r[6].w[0] >> (c.r[2].w[0] & 31u));
    c.r[7].d[0] = c.r[7].d[0] | c.r[2].d[0];
    set32(c.r[4], c.r[7].w[0] >> 29);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; set32(c.r[7], c.r[6].w[0] << (c.r[5].w[0] & 31u));  if (t) { goto L_003E51F4; } }
L_003E51F0:
    c.r[7].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 1;
L_003E51F4:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0])));
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.r[2].d[0] = ld8((c.r[8].w[0]));
    set32(c.r[8], c.r[8].w[0] + 1u);
    set32(c.r[6], c.r[6].w[0] << 8);
    c.r[3].d[0] = ld8((c.r[8].w[0]));
    c.r[6].d[0] = c.r[6].d[0] | c.r[2].d[0];
    set32(c.r[8], c.r[8].w[0] + 1u);
    set32(c.r[6], c.r[6].w[0] << 8);
    c.r[2].d[0] = ld8((c.r[8].w[0]));
    c.r[6].d[0] = c.r[6].d[0] | c.r[3].d[0];
    set32(c.r[8], c.r[8].w[0] + 1u);
    set32(c.r[6], c.r[6].w[0] << 8);
    c.budget -= 15;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = c.r[6].d[0] | c.r[2].d[0];  if (t) { goto L_003E5238; } }
L_003E5230:
    set32(c.r[7], c.r[7].w[0] << 3);
    set32(c.r[5], c.r[5].w[0] + 3u);
    c.budget -= 2;
L_003E5238:
    set32(c.r[4], c.r[4].w[0] - 1u);
    set32(c.r[2], 0u + 27u);
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] - c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << (c.r[4].w[0] & 31u));
    st32((c.r[9].w[0] + 8u), c.r[2].w[0]);
    st32((c.r[9].w[0] + 12u), c.r[3].w[0]);
    st32((c.r[9].w[0] + 4u), c.r[4].w[0]);
    set32(c.r[2], 0u + 3u);
    c.budget -= 9;
L_003E525C:
    c.budget -= 2;
    if (c.r[10].d[0] != c.r[2].d[0]) { set32(c.r[2], ld32((c.r[16].w[0] + 692u)));  goto L_003E536C; }
    set32(c.r[9], c.r[16].w[0] + 744u);
    set32(c.r[2], c.r[7].w[0] >> 31);
    set32(c.r[3], 0u + 31u);
    c.budget -= 5;
    { const bool t = c.r[5].d[0] != c.r[3].d[0]; st32((c.r[9].w[0]), c.r[2].w[0]);  if (t) { goto L_003E52C0; } }
    c.r[7].d[0] = c.r[6].d[0] + 0ull;
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0])));
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[2].d[0] = ld8((c.r[8].w[0]));
    set32(c.r[8], c.r[8].w[0] + 1u);
    set32(c.r[6], c.r[6].w[0] << 8);
    c.r[3].d[0] = ld8((c.r[8].w[0]));
    c.r[6].d[0] = c.r[6].d[0] | c.r[2].d[0];
    set32(c.r[8], c.r[8].w[0] + 1u);
    set32(c.r[6], c.r[6].w[0] << 8);
    c.r[2].d[0] = ld8((c.r[8].w[0]));
    c.r[6].d[0] = c.r[6].d[0] | c.r[3].d[0];
    set32(c.r[8], c.r[8].w[0] + 1u);
    set32(c.r[6], c.r[6].w[0] << 8);
    c.budget -= 17;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = c.r[6].d[0] | c.r[2].d[0];  if (t) { goto L_003E52C8; } }
    c.budget -= 1;
L_003E52C0:
    set32(c.r[5], c.r[5].w[0] + 1u);
    set32(c.r[7], c.r[7].w[0] << 1);
    c.budget -= 2;
L_003E52C8:
    c.r[2].d[0] = c.r[5].sd[0] < 29ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[7].w[0] >> 29);  if (t) { goto L_003E5340; } }
    set32(c.r[5], c.r[5].w[0] - 29u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull; set32(c.r[2], 0u + 3u);  if (t) { goto L_003E52F8; } }
    set32(c.r[2], c.r[2].w[0] - c.r[5].w[0]);
    set32(c.r[2], c.r[6].w[0] >> (c.r[2].w[0] & 31u));
    c.r[7].d[0] = c.r[7].d[0] | c.r[2].d[0];
    set32(c.r[4], c.r[7].w[0] >> 29);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; set32(c.r[7], c.r[6].w[0] << (c.r[5].w[0] & 31u));  if (t) { goto L_003E52FC; } }
L_003E52F8:
    c.r[7].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 1;
L_003E52FC:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0])));
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.r[2].d[0] = ld8((c.r[8].w[0]));
    set32(c.r[8], c.r[8].w[0] + 1u);
    set32(c.r[6], c.r[6].w[0] << 8);
    c.r[3].d[0] = ld8((c.r[8].w[0]));
    c.r[6].d[0] = c.r[6].d[0] | c.r[2].d[0];
    set32(c.r[8], c.r[8].w[0] + 1u);
    set32(c.r[6], c.r[6].w[0] << 8);
    c.r[2].d[0] = ld8((c.r[8].w[0]));
    c.r[6].d[0] = c.r[6].d[0] | c.r[3].d[0];
    set32(c.r[8], c.r[8].w[0] + 1u);
    set32(c.r[6], c.r[6].w[0] << 8);
    c.budget -= 15;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = c.r[6].d[0] | c.r[2].d[0];  if (t) { goto L_003E5348; } }
L_003E5338:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[8], c.r[8].w[0] + 4u);  if (t) { goto L_003E5400; } }
L_003E5340:
    set32(c.r[7], c.r[7].w[0] << 3);
    set32(c.r[5], c.r[5].w[0] + 3u);
    c.budget -= 2;
L_003E5348:
    set32(c.r[4], c.r[4].w[0] - 1u);
    set32(c.r[2], 0u + 27u);
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] - c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << (c.r[4].w[0] & 31u));
    st32((c.r[9].w[0] + 8u), c.r[2].w[0]);
    st32((c.r[9].w[0] + 12u), c.r[3].w[0]);
    st32((c.r[9].w[0] + 4u), c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 692u)));
    c.budget -= 9;
L_003E536C:
    st32((c.r[16].w[0] + 684u), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[9], ld32((c.r[16].w[0] + 840u)));  if (t) { goto L_003E53E8; } }
L_003E5378:
    c.r[2].d[0] = c.r[5].sd[0] < 32ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[7], c.r[7].w[0] << 9);  goto L_003E53C4; }
    set32(c.r[5], c.r[5].w[0] - 32u);
    set32(c.r[7], c.r[6].w[0] << (c.r[5].w[0] & 31u));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0])));
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.r[2].d[0] = ld8((c.r[8].w[0]));
    set32(c.r[8], c.r[8].w[0] + 1u);
    set32(c.r[6], c.r[6].w[0] << 8);
    c.r[3].d[0] = ld8((c.r[8].w[0]));
    c.r[6].d[0] = c.r[6].d[0] | c.r[2].d[0];
    set32(c.r[8], c.r[8].w[0] + 1u);
    set32(c.r[6], c.r[6].w[0] << 8);
    c.r[2].d[0] = ld8((c.r[8].w[0]));
    c.r[6].d[0] = c.r[6].d[0] | c.r[3].d[0];
    set32(c.r[8], c.r[8].w[0] + 1u);
    set32(c.r[6], c.r[6].w[0] << 8);
    c.r[6].d[0] = c.r[6].d[0] | c.r[2].d[0];
    c.budget -= 16;
L_003E53C4:
    set32(c.r[3], c.r[5].w[0] + 7u);
    set32(c.r[4], ld32((c.r[16].w[0] + 844u)));
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 3));
    set32(c.r[3], c.r[8].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[3].w[0] - 8u);
    set32(c.r[3], c.r[3].w[0] - c.r[9].w[0]);
    c.r[3].d[0] = c.r[3].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], 0u - 3u);  if (t) { goto L_003E5464; } }
L_003E53E8:
    c.budget -= 2;
    if (c.r[7].sd[0] < 0) { set32(c.r[5], c.r[5].w[0] + 9u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003E5378u | kUnwind; return; } goto L_003E5378; }
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.r[2].d[0] = c.r[5].sd[0] < 32ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[5].w[0] - 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003E5338u | kUnwind; return; } goto L_003E5338; }
L_003E5400:
    c.r[2].d[0] = c.r[5].d[0] & 7ull;
    c.r[7].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - c.r[2].w[0]);
    st32((c.r[16].w[0] + 848u), c.r[2].w[0]);
    set32(c.r[5], c.r[5].w[0] + 7u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[5].w[0]) >> 3));
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], c.r[8].w[0] + c.r[5].w[0]);
    set32(c.r[5], c.r[5].w[0] - 8u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E5430u); set32(c.r[5], c.r[5].w[0] - c.r[9].w[0]);  if (depth < kMaxDepth) unit_00B4(c, 230u, depth + 1u); else { c.pc = 0x003D2388u; return; } if (c.pc != 0x003E5430u) [[unlikely]] return; }
L_003E5430:
    set32(c.r[3], ld32((c.r[17].w[0])));
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] + 32u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003E5448u); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003E5448u) [[unlikely]] return; }
L_003E5448:
    set32(c.r[3], ld32((c.r[17].w[0])));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    set32(c.r[2], ld32((c.r[3].w[0] + 28u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003E5460u); c.r[6].d[0] = c.r[29].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003E5460u) [[unlikely]] return; }
L_003E5460:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003E5464:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 40u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003E5480:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[17].d[0]);
    c.r[6].d[0] = c.r[6].d[0] | 65535ull;
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 40u), c.r[31].d[0]);
    set32(c.r[17], c.r[18].w[0] + 840u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[3], ld32((c.r[2].w[0] + 24u)));
    c.budget -= 16;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003E54C0u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003E54C0u) [[unlikely]] return; }
L_003E54C0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[9], ld32((c.r[17].w[0])));
    set32(c.r[2], 0u - 4u);
    c.r[7].d[0] = c.r[29].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[8].d[0] = c.r[9].d[0] & c.r[2].d[0];
    set32(c.r[3], c.r[9].w[0] - c.r[8].w[0]);
    set32(c.r[3], c.r[3].w[0] << 3);
    c.r[2].d[0] = c.r[3].sd[0] < 32ll ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[8], c.r[8].w[0] + 8u);  if (t) { goto L_003E54F4; } }
    set32(c.r[3], c.r[3].w[0] - 32u);
    set32(c.r[8], c.r[8].w[0] + 4u);
    c.budget -= 2;
L_003E54F4:
    c.r[2].d[0] = c.r[3].d[0] & 7ull;
    set32(c.r[5], c.r[3].w[0] - c.r[2].w[0]);
    st32((c.r[18].w[0] + 848u), c.r[2].w[0]);
    set32(c.r[5], c.r[5].w[0] + 7u);
    set32(c.r[5], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[5].w[0]) >> 3));
    set32(c.r[5], c.r[8].w[0] + c.r[5].w[0]);
    set32(c.r[5], c.r[5].w[0] - 4u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E5518u); set32(c.r[5], c.r[5].w[0] - c.r[9].w[0]);  if (depth < kMaxDepth) unit_00B4(c, 230u, depth + 1u); else { c.pc = 0x003D2388u; return; } if (c.pc != 0x003E5518u) [[unlikely]] return; }
L_003E5518:
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] + 32u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003E5530u); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003E5530u) [[unlikely]] return; }
L_003E5530:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] + 28u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003E5548u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003E5548u) [[unlikely]] return; }
L_003E5548:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E5550u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B9(c, 94u, depth + 1u); else { c.pc = 0x003E5A08u; return; } if (c.pc != 0x003E5550u) [[unlikely]] return; }
L_003E5550:
    c.r[2].d[0] = 0ull + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 40u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003E5570:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    st64((c.r[29].w[0] + 24u), c.r[17].d[0]);
    c.r[6].d[0] = c.r[6].d[0] | 65535ull;
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 40u), c.r[19].d[0]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[20].d[0]);
    set32(c.r[5], 0u + 1u);
    st64((c.r[29].w[0] + 56u), c.r[21].d[0]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    set32(c.r[20], c.r[21].w[0] + 840u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[19].w[0])));
    set32(c.r[3], ld32((c.r[2].w[0] + 24u)));
    c.budget -= 19;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003E55BCu); c.r[7].d[0] = c.r[20].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003E55BCu) [[unlikely]] return; }
L_003E55BC:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[20].w[0])));
    set32(c.r[3], 0u - 4u);
    c.r[18].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] - c.r[18].w[0]);
    set32(c.r[17], c.r[2].w[0] << 3);
    c.r[3].d[0] = c.r[17].sd[0] < 32ll ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[18], c.r[18].w[0] + 8u);  if (t) { goto L_003E55EC; } }
    set32(c.r[17], c.r[17].w[0] - 32u);
    set32(c.r[18], c.r[18].w[0] + 4u);
    c.budget -= 2;
L_003E55EC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E55F4u); set32(c.r[6], ld32((c.r[21].w[0] + 844u)));  if (depth < kMaxDepth) unit_00B9(c, 70u, depth + 1u); else { c.pc = 0x003E5690u; return; } if (c.pc != 0x003E55F4u) [[unlikely]] return; }
L_003E55F4:
    set32(c.r[3], ld32((c.r[20].w[0])));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].d[0] = c.r[17].d[0] & 7ull;
    set32(c.r[5], c.r[17].w[0] - c.r[2].w[0]);
    st32((c.r[21].w[0] + 848u), c.r[2].w[0]);
    set32(c.r[5], c.r[5].w[0] + 7u);
    c.r[7].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[5], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[5].w[0]) >> 3));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[5], c.r[18].w[0] + c.r[5].w[0]);
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 4u);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E562Cu); set32(c.r[5], c.r[5].w[0] - c.r[3].w[0]);  if (depth < kMaxDepth) unit_00B4(c, 230u, depth + 1u); else { c.pc = 0x003D2388u; return; } if (c.pc != 0x003E562Cu) [[unlikely]] return; }
L_003E562C:
    set32(c.r[3], ld32((c.r[19].w[0])));
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] + 32u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003E5644u); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003E5644u) [[unlikely]] return; }
L_003E5644:
    set32(c.r[3], ld32((c.r[19].w[0])));
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] + 28u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003E565Cu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003E565Cu) [[unlikely]] return; }
L_003E565C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E5664u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B9(c, 94u, depth + 1u); else { c.pc = 0x003E5A08u; return; } if (c.pc != 0x003E5664u) [[unlikely]] return; }
L_003E5664:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[17].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 56u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003E5690:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 48u), c.r[18].d[0]);
    set32(c.r[18], 0u + 4u);
    st64((c.r[29].w[0] + 56u), c.r[19].d[0]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 72u), c.r[21].d[0]);
    c.r[21].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 96u), c.r[30].d[0]);
    c.r[30].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[16].d[0]);
    st64((c.r[29].w[0] + 40u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 64u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 80u), c.r[22].d[0]);
    st64((c.r[29].w[0] + 88u), c.r[23].d[0]);
    st64((c.r[29].w[0] + 104u), c.r[31].d[0]);
    set32(c.r[22], ld32((c.r[19].w[0] + 900u)));
    c.budget -= 18;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[6].w[0] - 3u);  if (t) { goto L_003E56DC; } }
L_003E56D8:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_003E56DC:
    c.r[2].d[0] = c.r[18].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[3].d[0] = c.r[18].d[0] ^ c.r[16].d[0];  if (t) { goto L_003E56F8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E56F0u); set32(c.r[4], c.r[21].w[0] + c.r[18].w[0]);  if (depth < kMaxDepth) unit_00B8(c, 143u, depth + 1u); else { c.pc = 0x003E31D0u; return; } if (c.pc != 0x003E56F0u) [[unlikely]] return; }
L_003E56F0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[3].d[0] = c.r[18].d[0] ^ c.r[16].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003E56D8u | kUnwind; return; } goto L_003E56D8; } }
L_003E56F8:
    set32(c.r[23], 0u - 1u);
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[22].d[0] != c.r[2].d[0]; if (c.r[3].d[0] != 0) c.r[23].d[0] = 0ull;  if (t) { goto L_003E571C; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E5718u); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B9(c, 82u, depth + 1u); else { c.pc = 0x003E5858u; return; } if (c.pc != 0x003E5718u) [[unlikely]] return; }
L_003E5718:
    c.r[30].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_003E571C:
    set32(c.r[2], c.r[22].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[22].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[20], c.r[2].w[0] + 896u);
    set32(c.r[3], c.r[19].w[0] + c.r[20].w[0]);
    set32(c.r[17], ld32((c.r[3].w[0] + 8u)));
    c.budget -= 8;
    { const bool t = c.r[17].d[0] == 0ull; c.r[7].d[0] = c.r[29].d[0] + 0ull;  if (t) { goto L_003E57F4; } }
    set32(c.r[3], ld32((c.r[17].w[0])));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] + 24u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003E5754u); c.r[6].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003E5754u) [[unlikely]] return; }
L_003E5754:
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[29].w[0])));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E5764u); set32(c.r[6], ld32((c.r[29].w[0] + 4u)));  if (depth < kMaxDepth) unit_0009(c, 40u, depth + 1u); else { c.pc = 0x00124D20u; return; } if (c.pc != 0x003E5764u) [[unlikely]] return; }
L_003E5764:
    set32(c.r[3], ld32((c.r[17].w[0])));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    set32(c.r[2], ld32((c.r[3].w[0] + 32u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003E577Cu); c.r[6].d[0] = c.r[29].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003E577Cu) [[unlikely]] return; }
L_003E577C:
    set32(c.r[4], ld32((c.r[29].w[0] + 4u)));
    c.r[2].d[0] = c.r[4].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], c.r[19].w[0] + c.r[20].w[0]);  if (t) { goto L_003E57DC; } }
    set32(c.r[3], ld32((c.r[17].w[0])));
    set32(c.r[16], c.r[29].w[0] + 16u);
    set32(c.r[6], c.r[18].w[0] - c.r[4].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] + 24u)));
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003E57ACu); c.r[7].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003E57ACu) [[unlikely]] return; }
L_003E57AC:
    set32(c.r[5], ld32((c.r[29].w[0] + 4u)));
    set32(c.r[4], ld32((c.r[29].w[0] + 16u)));
    set32(c.r[6], ld32((c.r[29].w[0] + 20u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E57C0u); set32(c.r[5], c.r[21].w[0] + c.r[5].w[0]);  if (depth < kMaxDepth) unit_0009(c, 40u, depth + 1u); else { c.pc = 0x00124D20u; return; } if (c.pc != 0x003E57C0u) [[unlikely]] return; }
L_003E57C0:
    set32(c.r[3], ld32((c.r[17].w[0])));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] + 32u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003E57D8u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003E57D8u) [[unlikely]] return; }
L_003E57D8:
    set32(c.r[2], c.r[19].w[0] + c.r[20].w[0]);
    c.budget -= 1;
L_003E57DC:
    set32(c.r[3], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { set32(c.r[2], 0u + 3u);  goto L_003E57F8; }
    set32(c.r[4], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003E57F4u); c.r[5].d[0] = c.r[22].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003E57F4u) [[unlikely]] return; }
L_003E57F4:
    set32(c.r[2], 0u + 3u);
    c.budget -= 1;
L_003E57F8:
    c.budget -= 2;
    { const bool t = c.r[22].d[0] != c.r[2].d[0]; c.r[2].d[0] = c.r[30].d[0] + 0ull;  if (t) { goto L_003E5824; } }
    set32(c.r[4], ld32((c.r[19].w[0] + 952u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; c.r[5].d[0] = c.r[21].d[0] + 0ull;  if (t) { goto L_003E5824; } }
    set32(c.r[6], ld32((c.r[19].w[0] + 956u)));
    c.r[2].d[0] = c.r[18].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    if (c.r[2].d[0] != 0) c.r[6].d[0] = c.r[18].d[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E5820u); st32((c.r[19].w[0] + 960u), c.r[6].w[0]);  if (depth < kMaxDepth) unit_0009(c, 40u, depth + 1u); else { c.pc = 0x00124D20u; return; } if (c.pc != 0x003E5820u) [[unlikely]] return; }
L_003E5820:
    c.r[2].d[0] = c.r[30].d[0] + 0ull;
    c.budget -= 1;
L_003E5824:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));
    if (c.r[30].d[0] == 0) c.r[2].d[0] = c.r[23].d[0];
    c.r[17].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 56u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 72u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[23].d[0] = ld64((c.r[29].w[0] + 88u));
    c.r[30].d[0] = ld64((c.r[29].w[0] + 96u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 104u));
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_003E5858:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    set32(c.r[19], c.r[6].w[0] - 4u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[20].d[0]);
    set32(c.r[20], c.r[5].w[0] + 4u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 40u), c.r[21].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[22].d[0]);
    st64((c.r[29].w[0] + 56u), c.r[23].d[0]);
    c.budget -= 15;
    { const bool t = c.r[19].sd[0] <= 0; st64((c.r[29].w[0] + 64u), c.r[31].d[0]);  if (t) { goto L_003E592C; } }
    c.r[23].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[22].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[21], 0u + 3u);
    set32(c.r[16], c.r[20].w[0] + c.r[18].w[0]);
    c.budget -= 5;
L_003E58A8:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[23].w[0] + 25440u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E58BCu); set32(c.r[6], 0u + 7u);  if (depth < kMaxDepth) unit_000A(c, 3u, depth + 1u); else { c.pc = 0x00128038u; return; } if (c.pc != 0x003E58BCu) [[unlikely]] return; }
L_003E58BC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[16].w[0] + 16u);  if (t) { goto L_003E58D8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E58CCu);  if (depth < kMaxDepth) unit_0008(c, 170u, depth + 1u); else { c.pc = 0x00121A60u; return; } if (c.pc != 0x003E58CCu) [[unlikely]] return; }
L_003E58CC:
    c.r[3].d[0] = 0ull + 0ull;
    if (c.r[2].d[0] != 0) c.r[3].d[0] = c.r[21].d[0];
    st32((c.r[17].w[0] + 868u), c.r[3].w[0]);
    c.budget -= 3;
L_003E58D8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[22].w[0] + 25448u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E58E8u); set32(c.r[6], 0u + 7u);  if (depth < kMaxDepth) unit_000A(c, 3u, depth + 1u); else { c.pc = 0x00128038u; return; } if (c.pc != 0x003E58E8u) [[unlikely]] return; }
L_003E58E8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[16].w[0] + 16u);  if (t) { goto L_003E5914; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E58F8u);  if (depth < kMaxDepth) unit_0008(c, 170u, depth + 1u); else { c.pc = 0x00121A60u; return; } if (c.pc != 0x003E58F8u) [[unlikely]] return; }
L_003E58F8:
    set32(c.r[4], c.r[16].w[0] + 24u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E5904u); st32((c.r[17].w[0] + 856u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0008(c, 170u, depth + 1u); else { c.pc = 0x00121A60u; return; } if (c.pc != 0x003E5904u) [[unlikely]] return; }
L_003E5904:
    set32(c.r[4], c.r[16].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E5910u); st32((c.r[17].w[0] + 860u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0008(c, 170u, depth + 1u); else { c.pc = 0x00121A60u; return; } if (c.pc != 0x003E5910u) [[unlikely]] return; }
L_003E5910:
    st32((c.r[17].w[0] + 864u), c.r[2].w[0]);
    c.budget -= 1;
L_003E5914:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E591Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B8(c, 143u, depth + 1u); else { c.pc = 0x003E31D0u; return; } if (c.pc != 0x003E591Cu) [[unlikely]] return; }
L_003E591C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[3].d[0] = c.r[18].sd[0] < c.r[19].sd[0] ? 1ull : 0ull;  if (t) { goto L_003E592C; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[16], c.r[20].w[0] + c.r[18].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003E58A8u | kUnwind; return; } goto L_003E58A8; } }
L_003E592C:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = 0ull + 0ull;
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
L_003E5960:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[6], 0u - 1u);
    set32(c.r[4], ld32((c.r[18].w[0])));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E5994u); set32(c.r[5], ld32((c.r[17].w[0])));  if (depth < kMaxDepth) unit_00B8(c, 147u, depth + 1u); else { c.pc = 0x003E3368u; return; } if (c.pc != 0x003E5994u) [[unlikely]] return; }
L_003E5994:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = c.r[16].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003E59B8; } }
    set32(c.r[5], ld32((c.r[17].w[0])));
    set32(c.r[4], ld32((c.r[18].w[0])));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003E59CC; } }
    c.budget -= 1;
L_003E59B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E59C0u);  if (depth < kMaxDepth) unit_00B8(c, 143u, depth + 1u); else { c.pc = 0x003E31D0u; return; } if (c.pc != 0x003E59C0u) [[unlikely]] return; }
L_003E59C0:
    set32(c.r[4], ld32((c.r[18].w[0])));
    set32(c.r[3], ld32((c.r[17].w[0])));
    set32(c.r[5], c.r[16].w[0] - c.r[4].w[0]);
    c.budget -= 3;
L_003E59CC:
    set32(c.r[3], c.r[3].w[0] - c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    st32((c.r[17].w[0]), c.r[3].w[0]);
    st32((c.r[18].w[0]), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[19].w[0])));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    st32((c.r[19].w[0]), c.r[3].w[0]);
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003E5A08:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 32u), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 56u), c.r[19].d[0]);
    set32(c.r[19], c.r[29].w[0] + 16u);
    st64((c.r[29].w[0] + 40u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[18].d[0]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st64((c.r[29].w[0] + 64u), c.r[31].d[0]);  if (t) { goto L_003E5AF0; } }
    c.budget -= 1;
L_003E5A30:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E5A38u); set32(c.r[4], ld32((c.r[29].w[0])));  if (depth < kMaxDepth) unit_00B8(c, 147u, depth + 1u); else { c.pc = 0x003E3368u; return; } if (c.pc != 0x003E5A38u) [[unlikely]] return; }
L_003E5A38:
    c.r[7].d[0] = c.r[19].d[0] + 0ull;
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 5;
    { const bool t = c.r[17].d[0] != 0ull; c.r[6].d[0] = c.r[29].d[0] + 0ull;  if (t) { goto L_003E5A90; } }
    set32(c.r[5], ld32((c.r[29].w[0] + 4u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E5A58u); set32(c.r[5], c.r[5].w[0] - 3u);  if (depth < kMaxDepth) unit_00B4(c, 230u, depth + 1u); else { c.pc = 0x003D2388u; return; } if (c.pc != 0x003E5A58u) [[unlikely]] return; }
L_003E5A58:
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] + 32u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003E5A70u); c.r[6].d[0] = c.r[29].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003E5A70u) [[unlikely]] return; }
L_003E5A70:
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    set32(c.r[2], ld32((c.r[3].w[0] + 28u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003E5A88u); c.r[6].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003E5A88u) [[unlikely]] return; }
L_003E5A88:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[16].w[0])));  if (t) { goto L_003E5AF4; } }
L_003E5A90:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E5A98u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B8(c, 143u, depth + 1u); else { c.pc = 0x003E31D0u; return; } if (c.pc != 0x003E5A98u) [[unlikely]] return; }
L_003E5A98:
    c.r[7].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[29].w[0])));
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E5AB4u); set32(c.r[5], c.r[17].w[0] - c.r[5].w[0]);  if (depth < kMaxDepth) unit_00B4(c, 230u, depth + 1u); else { c.pc = 0x003D2388u; return; } if (c.pc != 0x003E5AB4u) [[unlikely]] return; }
L_003E5AB4:
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] + 32u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003E5ACCu); c.r[6].d[0] = c.r[29].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003E5ACCu) [[unlikely]] return; }
L_003E5ACC:
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] + 28u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003E5AE4u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003E5AE4u) [[unlikely]] return; }
L_003E5AE4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_003E5B44; } }
    c.budget -= 1;
L_003E5AF0:
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.budget -= 1;
L_003E5AF4:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = c.r[6].d[0] | 65535ull;
    set32(c.r[2], ld32((c.r[3].w[0] + 24u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003E5B10u); c.r[7].d[0] = c.r[29].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003E5B10u) [[unlikely]] return; }
L_003E5B10:
    set32(c.r[2], ld32((c.r[29].w[0] + 4u)));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[6], 0u - 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003E5A30u | kUnwind; return; } goto L_003E5A30; } }
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] + 28u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003E5B40u); c.r[18].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003E5B40u) [[unlikely]] return; }
L_003E5B40:
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_003E5B44:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 56u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003E5B60:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    set32(c.r[5], c.r[4].w[0] + 548u);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 832u)));
    c.budget -= 12;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[6], ld32((c.r[4].w[0] + 404u)));  if (t) { goto L_003E5BC4; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 836u)));
    st32((c.r[4].w[0] + 832u), 0u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[4].w[0] + 836u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[5].w[0] + 12u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 8;
    { const bool t = c.r[6].d[0] != 0ull; st32((c.r[5].w[0] + 12u), c.r[2].w[0]);  if (t) { goto L_003E5BB8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 2u);  if (t) { goto L_003E5C10; } }
L_003E5BB8:
    set32(c.r[2], ld32((c.r[5].w[0] + 16u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[5].w[0] + 16u), c.r[2].w[0]);
    c.budget -= 3;
L_003E5BC4:
    set32(c.r[2], 0u - 3u);
    set32(c.r[17], 0u - 2u);
    if (c.r[6].d[0] != 0) c.r[17].d[0] = c.r[2].d[0];
    set32(c.r[18], 0u + 4u);
    c.budget -= 5;
L_003E5BD8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E5BE0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B9(c, 94u, depth + 1u); else { c.pc = 0x003E5A08u; return; } if (c.pc != 0x003E5BE0u) [[unlikely]] return; }
L_003E5BE0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    set32(c.r[6], 0u + 4u);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; c.r[3].d[0] = c.r[2].d[0] & c.r[19].d[0];  if (t) { goto L_003E5C0C; } }
    c.budget -= 2;
    if (c.r[3].d[0] != 0ull) { c.r[17].d[0] = 0ull + 0ull;  goto L_003E5C0C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E5C04u);  if (depth < kMaxDepth) unit_00B9(c, 110u, depth + 1u); else { c.pc = 0x003E5C30u; return; } if (c.pc != 0x003E5C04u) [[unlikely]] return; }
L_003E5C04:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[18].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003E5BD8u | kUnwind; return; } goto L_003E5BD8; } }
L_003E5C0C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003E5C10:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003E5C30:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0] + 24u)));
    c.budget -= 10;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003E5C58u); c.r[7].d[0] = c.r[29].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003E5C58u) [[unlikely]] return; }
L_003E5C58:
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] + 32u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003E5C70u); c.r[6].d[0] = c.r[29].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003E5C70u) [[unlikely]] return; }
L_003E5C70:
    set32(c.r[2], ld32((c.r[29].w[0] + 4u)));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003E5C88:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] + 25456u);  c.pc = t; return; }
L_003E5C98:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], c.r[3].w[0] - 1368u);
    set32(c.r[2], c.r[2].w[0] + 25456u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E5CC8u); st32((c.r[3].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00B9(c, 126u, depth + 1u); else { c.pc = 0x003E5D70u; return; } if (c.pc != 0x003E5CC8u) [[unlikely]] return; }
L_003E5CC8:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003E5D08; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFF030000u);
    c.r[3].d[0] = c.r[3].d[0] | 65285ull;
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[3].d[0]) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_003E5D60; }
    c.budget -= 1;
L_003E5CE8:
    c.budget -= 7;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003E5CE8u | kUnwind; return; } goto L_003E5CE8; } }
    c.budget -= 1;
L_003E5D08:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E5D10u);  if (depth < kMaxDepth) unit_00B9(c, 129u, depth + 1u); else { c.pc = 0x003E5DE8u; return; } if (c.pc != 0x003E5D10u) [[unlikely]] return; }
L_003E5D10:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E5D18u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B9(c, 131u, depth + 1u); else { c.pc = 0x003E5E10u; return; } if (c.pc != 0x003E5D18u) [[unlikely]] return; }
L_003E5D18:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E5D24u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B9(c, 143u, depth + 1u); else { c.pc = 0x003E5F90u; return; } if (c.pc != 0x003E5D24u) [[unlikely]] return; }
L_003E5D24:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E5D30u); set32(c.r[16], ld32((c.r[2].w[0] - 1280u)));  if (depth < kMaxDepth) unit_00B8(c, 155u, depth + 1u); else { c.pc = 0x003E3A28u; return; } if (c.pc != 0x003E5D30u) [[unlikely]] return; }
L_003E5D30:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E5D38u);  if (depth < kMaxDepth) unit_00B9(c, 4u, depth + 1u); else { c.pc = 0x003E40D0u; return; } if (c.pc != 0x003E5D38u) [[unlikely]] return; }
L_003E5D38:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E5D40u); set32(c.r[4], c.r[16].w[0] + 6112u);  if (depth < kMaxDepth) unit_00B9(c, 132u, depth + 1u); else { c.pc = 0x003E5E30u; return; } if (c.pc != 0x003E5D40u) [[unlikely]] return; }
L_003E5D40:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E5D48u);  if (depth < kMaxDepth) unit_00B9(c, 139u, depth + 1u); else { c.pc = 0x003E5F08u; return; } if (c.pc != 0x003E5D48u) [[unlikely]] return; }
L_003E5D48:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E5D50u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B9(c, 142u, depth + 1u); else { c.pc = 0x003E5F88u; return; } if (c.pc != 0x003E5D50u) [[unlikely]] return; }
L_003E5D50:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E5D58u);  if (depth < kMaxDepth) unit_00B9(c, 179u, depth + 1u); else { c.pc = 0x003E6408u; return; } if (c.pc != 0x003E5D58u) [[unlikely]] return; }
L_003E5D58:
    c.r[2].d[0] = 0ull + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 2;
L_003E5D60:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003E5D70:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x5A5A0000u);
    set32(c.r[4], ld32((c.r[2].w[0] + 25600u)));
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[3].d[0] = c.r[3].d[0] | 23130ull;
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_003E5DA8; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFF030000u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[4].d[0] = 0ull + 0ull;
    c.r[5].d[0] = c.r[5].d[0] | 65282ull;
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003E3B50u | kUnwind; return; } [[clang::musttail]] return unit_00B8(c, 161u, depth); }
L_003E5DA8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[4], 0u + 4u);
    c.r[3].d[0] = ld8((c.r[2].w[0] + 25620u));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[4].d[0]; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_003E5DD8; } }
    c.budget -= 1;
L_003E5DC0:
    set32(c.r[1], 0u - 1u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[1].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003E5DCCu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003E5DCCu) [[unlikely]] return; }
L_003E5DCC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003E5DC0u | kUnwind; return; } goto L_003E5DC0; } }
    c.budget -= 1;
L_003E5DD8:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003E5DE8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003E5DF0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[3].w[0] - 1296u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003E5E08; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x02000000u);
    c.r[4].d[0] = c.r[4].d[0] | c.r[2].d[0];
    c.budget -= 2;
L_003E5E08:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; return; }
L_003E5E10:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[3].w[0] - 1292u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003E5E28; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x02000000u);
    c.r[4].d[0] = c.r[4].d[0] | c.r[2].d[0];
    c.budget -= 2;
L_003E5E28:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; return; }
L_003E5E30:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E5E44u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B9(c, 135u, depth + 1u); else { c.pc = 0x003E5E80u; return; } if (c.pc != 0x003E5E44u) [[unlikely]] return; }
L_003E5E44:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00450000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 23208u);
    c.budget -= 5;
    { const bool t = c.r[16].d[0] == 0ull; set32(c.r[6], 0u + 256u);  if (t) { goto L_003E5E6C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E5E60u);  if (depth < kMaxDepth) unit_00B8(c, 47u, depth + 1u); else { c.pc = 0x003E0D08u; return; } if (c.pc != 0x003E5E60u) [[unlikely]] return; }
L_003E5E60:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00450000u);
    set32(c.r[2], c.r[16].w[0] + 384u);
    st32((c.r[3].w[0] - 23220u), c.r[2].w[0]);
    c.budget -= 3;
L_003E5E6C:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003E5E80:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00450000u);
    set32(c.r[3], 0u + 383u);
    set32(c.r[4], c.r[2].w[0] - 23208u);
    c.budget -= 4;
L_003E5E90:
    set32(c.r[3], c.r[3].w[0] - 1u);
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(0u));
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[4], c.r[4].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003E5E90u | kUnwind; return; } goto L_003E5E90; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003E5EB0:
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[2].d[0] = c.r[3].sd[0] < 256ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[4].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003E5EB0u | kUnwind; return; } goto L_003E5EB0; } }
    set32(c.r[2], 0u - 1u);
    set32(c.r[3], 0u + 383u);
    c.budget -= 3;
L_003E5ED8:
    set32(c.r[3], c.r[3].w[0] - 1u);
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[4], c.r[4].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003E5ED8u | kUnwind; return; } goto L_003E5ED8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00450000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00450000u);
    set32(c.r[2], c.r[2].w[0] - 22824u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[3].w[0] - 23220u), c.r[2].w[0]);  c.pc = t; return; }
L_003E5F08:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], c.r[2].w[0] - 1360u);
    set32(c.r[4], ld32((c.r[2].w[0] + 84u)));
    c.budget -= 5;
    { const bool t = c.r[4].sd[0] <= 0; set32(c.r[3], ld32((c.r[2].w[0] + 88u)));  if (t) { goto L_003E5F44; } }
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
L_003E5F28:
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[3].w[0] + 392u), c.r[4].w[0]);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], c.r[3].w[0] + 992u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003E5F28u | kUnwind; return; } goto L_003E5F28; } }
L_003E5F44:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003E5F50:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00450000u);
    set32(c.r[2], ld32((c.r[3].w[0] - 1280u)));
    set32(c.r[5], c.r[2].w[0] + 4448u);
    set32(c.r[3], c.r[2].w[0] + 4384u);
    set32(c.r[2], c.r[2].w[0] + 4352u);
    st32((c.r[4].w[0] + 44u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 48u), c.r[2].w[0]);
    st32((c.r[4].w[0] + 52u), c.r[5].w[0]);
    set32(c.r[2], ld32((c.r[6].w[0] - 23220u)));
    st32((c.r[4].w[0] + 272u), c.r[2].w[0]);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 64u), c.r[2].w[0]);  c.pc = t; return; }
L_003E5F88:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003E5F90:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[2], 0u - 64u);
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    set32(c.r[17], c.r[19].w[0] << 5);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    set32(c.r[18], c.r[5].w[0] + 63u);
    set32(c.r[17], c.r[17].w[0] - c.r[19].w[0]);
    c.r[18].d[0] = c.r[18].d[0] & c.r[2].d[0];
    set32(c.r[17], c.r[17].w[0] << 5);
    set32(c.r[6], c.r[19].w[0] << 8);
    set32(c.r[17], c.r[18].w[0] + c.r[17].w[0]);
    st64((c.r[29].w[0] + 32u), c.r[20].d[0]);
    set32(c.r[6], c.r[6].w[0] + 2048u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[20], c.r[17].w[0] + 1056u);
    c.r[5].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 40u), c.r[31].d[0]);
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E5FE8u); c.r[16].sd[0] = static_cast<std::int32_t>(0x00590000u);  if (depth < kMaxDepth) unit_00B8(c, 53u, depth + 1u); else { c.pc = 0x003E0EE8u; return; } if (c.pc != 0x003E5FE8u) [[unlikely]] return; }
L_003E5FE8:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E5FF4u); set32(c.r[5], 0u + 7136u);  if (depth < kMaxDepth) unit_00B9(c, 170u, depth + 1u); else { c.pc = 0x003E62C0u; return; } if (c.pc != 0x003E5FF4u) [[unlikely]] return; }
L_003E5FF4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[16], c.r[16].w[0] - 1360u);
    set32(c.r[5], c.r[5].w[0] + 25536u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E600Cu); set32(c.r[6], 0u + 16u);  if (depth < kMaxDepth) unit_00B8(c, 47u, depth + 1u); else { c.pc = 0x003E0D08u; return; } if (c.pc != 0x003E600Cu) [[unlikely]] return; }
L_003E600C:
    st32((c.r[16].w[0] + 76u), c.r[17].w[0]);
    st32((c.r[16].w[0] + 88u), c.r[18].w[0]);
    st32((c.r[16].w[0] + 80u), c.r[20].w[0]);
    st32((c.r[16].w[0] + 84u), c.r[19].w[0]);
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 40u));
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003E6040:
    set32(c.r[5], 0u + 1u);
    set32(c.r[3], 0u - 1u);
    set32(c.r[2], 0u + 3u);
    st32((c.r[4].w[0] + 80u), c.r[5].w[0]);
    st32((c.r[4].w[0] + 56u), c.r[2].w[0]);
    st32((c.r[4].w[0] + 72u), c.r[3].w[0]);
    st32((c.r[4].w[0]), 0u);
    st32((c.r[4].w[0] + 4u), 0u);
    st32((c.r[4].w[0] + 8u), 0u);
    st32((c.r[4].w[0] + 12u), 0u);
    st32((c.r[4].w[0] + 16u), 0u);
    st32((c.r[4].w[0] + 20u), 0u);
    st32((c.r[4].w[0] + 24u), 0u);
    st32((c.r[4].w[0] + 28u), 0u);
    st32((c.r[4].w[0] + 32u), 0u);
    st32((c.r[4].w[0] + 36u), 0u);
    st32((c.r[4].w[0] + 40u), 0u);
    st32((c.r[4].w[0] + 44u), 0u);
    st32((c.r[4].w[0] + 48u), 0u);
    st32((c.r[4].w[0] + 52u), 0u);
    st32((c.r[4].w[0] + 60u), c.r[5].w[0]);
    st32((c.r[4].w[0] + 64u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 68u), c.r[3].w[0]);
    c.budget -= 25;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 76u), c.r[5].w[0]);  c.pc = t; return; }
L_003E60A8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E60B8u);  if (depth < kMaxDepth) unit_00B9(c, 181u, depth + 1u); else { c.pc = 0x003E6438u; return; } if (c.pc != 0x003E60B8u) [[unlikely]] return; }
L_003E60B8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[4], ld32((c.r[2].w[0] - 1280u)));
    set32(c.r[5], 0u + 7136u);
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 16u);  goto L_003E62C8; }
L_003E60D0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E60E4u);  if (depth < kMaxDepth) unit_00B9(c, 155u, depth + 1u); else { c.pc = 0x003E6128u; return; } if (c.pc != 0x003E60E4u) [[unlikely]] return; }
L_003E60E4:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], 0u + 964u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003E6118; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E60FCu);  if (depth < kMaxDepth) unit_00B9(c, 170u, depth + 1u); else { c.pc = 0x003E62C0u; return; } if (c.pc != 0x003E60FCu) [[unlikely]] return; }
L_003E60FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E6104u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B9(c, 157u, depth + 1u); else { c.pc = 0x003E6178u; return; } if (c.pc != 0x003E6104u) [[unlikely]] return; }
L_003E6104:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E6110u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B9(c, 182u, depth + 1u); else { c.pc = 0x003E6450u; return; } if (c.pc != 0x003E6110u) [[unlikely]] return; }
L_003E6110:
    st32((c.r[16].w[0] + 896u), c.r[2].w[0]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 2;
L_003E6118:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003E6128:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 1360u);
    set32(c.r[5], ld32((c.r[2].w[0] + 84u)));
    c.budget -= 6;
    { const bool t = c.r[5].sd[0] <= 0; set32(c.r[4], ld32((c.r[2].w[0] + 88u)));  if (t) { goto L_003E616C; } }
    set32(c.r[7], 0u + 1u);
    set32(c.r[3], ld32((c.r[4].w[0] + 392u)));
    c.budget -= 2;
L_003E6148:
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[7].d[0]; set32(c.r[4], c.r[4].w[0] + 992u);  if (t) { goto L_003E6170; } }
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.r[2].d[0] = c.r[6].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 392u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003E6148u | kUnwind; return; } goto L_003E6148; }
L_003E616C:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003E6170:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003E6178:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E6194u); c.r[17].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00B9(c, 141u, depth + 1u); else { c.pc = 0x003E5F50u; return; } if (c.pc != 0x003E6194u) [[unlikely]] return; }
L_003E6194:
    st32((c.r[16].w[0] + 396u), 0u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[5], c.r[5].w[0] - 1360u);
    set32(c.r[6], 0u + 16u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E61ACu); set32(c.r[4], c.r[16].w[0] + 400u);  if (depth < kMaxDepth) unit_00B8(c, 47u, depth + 1u); else { c.pc = 0x003E0D08u; return; } if (c.pc != 0x003E61ACu) [[unlikely]] return; }
L_003E61AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E61B4u); set32(c.r[4], c.r[16].w[0] + 548u);  if (depth < kMaxDepth) unit_00B8(c, 156u, depth + 1u); else { c.pc = 0x003E3A48u; return; } if (c.pc != 0x003E61B4u) [[unlikely]] return; }
L_003E61B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E61BCu); set32(c.r[4], c.r[16].w[0] + 464u);  if (depth < kMaxDepth) unit_00B9(c, 147u, depth + 1u); else { c.pc = 0x003E6040u; return; } if (c.pc != 0x003E61BCu) [[unlikely]] return; }
L_003E61BC:
    st32((c.r[16].w[0] + 832u), 0u);
    set32(c.r[2], ld32((c.r[16].w[0] + 428u)));
    st32((c.r[16].w[0] + 836u), 0u);
    st32((c.r[16].w[0] + 884u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 852u), 0u);
    st32((c.r[16].w[0] + 856u), 0u);
    st32((c.r[16].w[0] + 860u), 0u);
    st32((c.r[16].w[0] + 864u), 0u);
    st32((c.r[16].w[0] + 868u), 0u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 11;
L_003E61E8:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E6200u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00B9(c, 5u, depth + 1u); else { c.pc = 0x003E40D8u; return; } if (c.pc != 0x003E6200u) [[unlikely]] return; }
L_003E6200:
    c.r[2].d[0] = c.r[17].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003E61E8u | kUnwind; return; } goto L_003E61E8; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E621Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00B9(c, 6u, depth + 1u); else { c.pc = 0x003E4100u; return; } if (c.pc != 0x003E621Cu) [[unlikely]] return; }
L_003E621C:
    set32(c.r[2], 0u + 2u);
    st32((c.r[16].w[0] + 392u), c.r[2].w[0]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003E6240:
    set32(c.r[4], c.r[4].w[0] + 120u);
    set32(c.r[2], ld32((c.r[4].w[0] + 24u)));
    st32((c.r[5].w[0]), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 28u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[6].w[0]), c.r[3].w[0]);  c.pc = t; return; }
L_003E6258:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E626Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B9(c, 178u, depth + 1u); else { c.pc = 0x003E63E0u; return; } if (c.pc != 0x003E626Cu) [[unlikely]] return; }
L_003E626C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFF030000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[5].d[0] | 513ull;  if (t) { goto L_003E6290; } }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[4].d[0] = 0ull + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003E3B50u | kUnwind; return; } [[clang::musttail]] return unit_00B8(c, 161u, depth); }
L_003E6290:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E6298u);  if (depth < kMaxDepth) unit_00B9(c, 183u, depth + 1u); else { c.pc = 0x003E6468u; return; } if (c.pc != 0x003E6298u) [[unlikely]] return; }
L_003E6298:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E62A4u); set32(c.r[5], 0u + 964u);  if (depth < kMaxDepth) unit_00B9(c, 171u, depth + 1u); else { c.pc = 0x003E62C8u; return; } if (c.pc != 0x003E62A4u) [[unlikely]] return; }
L_003E62A4:
    set32(c.r[2], 0u + 1u);
    st32((c.r[16].w[0] + 392u), c.r[2].w[0]);
    c.r[2].d[0] = 0ull + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003E62C0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003E62C8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003E62D0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003E62D8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], 0u + 8u);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    c.budget -= 11;
    { const bool t = c.r[18].d[0] != c.r[2].d[0]; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_003E6310; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x003E0000u);  if (t) { goto L_003E6310; } }
    set32(c.r[17], c.r[2].w[0] + 25296u);
    c.budget -= 1;
L_003E6310:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_003E6330; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E6320u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B9(c, 176u, depth + 1u); else { c.pc = 0x003E6390u; return; } if (c.pc != 0x003E6320u) [[unlikely]] return; }
L_003E6320:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[2].w[0] - 1360u);  if (t) { goto L_003E6364; } }
    c.budget -= 1;
L_003E6330:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E6338u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B9(c, 178u, depth + 1u); else { c.pc = 0x003E63E0u; return; } if (c.pc != 0x003E6338u) [[unlikely]] return; }
L_003E6338:
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFF030000u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_003E6360; } }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[5].d[0] = c.r[5].d[0] | 514ull;
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003E3B50u | kUnwind; return; } [[clang::musttail]] return unit_00B8(c, 161u, depth); }
L_003E6360:
    set32(c.r[4], c.r[16].w[0] + 400u);
    c.budget -= 1;
L_003E6364:
    set32(c.r[3], c.r[18].w[0] << 2);
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    st32((c.r[3].w[0]), c.r[17].w[0]);
    c.r[2].d[0] = 0ull + 0ull;
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003E6390:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], c.r[2].w[0] - 1360u);
    set32(c.r[6], ld32((c.r[2].w[0] + 84u)));
    c.budget -= 5;
    { const bool t = c.r[6].sd[0] <= 0; set32(c.r[3], ld32((c.r[2].w[0] + 88u)));  if (t) { goto L_003E63D4; } }
    set32(c.r[2], c.r[4].w[0] << 2);
    set32(c.r[7], 0u + 2u);
    set32(c.r[4], c.r[2].w[0] + 400u);
    c.budget -= 3;
L_003E63B0:
    set32(c.r[2], ld32((c.r[3].w[0] + 392u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[7].d[0]; set32(c.r[6], c.r[6].w[0] - 1u);  if (t) { goto L_003E63C4; } }
    set32(c.r[2], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[2].w[0]), c.r[5].w[0]);
    c.budget -= 2;
L_003E63C4:
    c.budget -= 4;
    { const bool t = c.r[6].d[0] != 0ull; set32(c.r[3], c.r[3].w[0] + 992u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003E63B0u | kUnwind; return; } goto L_003E63B0; } }
L_003E63D4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003E63E0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st32((c.r[2].w[0] - 1268u), c.r[4].w[0]);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_003E63FC; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 392u)));
    c.r[3].d[0] = c.r[3].d[0] ^ 2ull;
    if (c.r[3].d[0] == 0) c.r[2].d[0] = 0ull;
    c.budget -= 3;
L_003E63FC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003E6408:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E6418u);  if (depth < kMaxDepth) unit_00B8(c, 5u, depth + 1u); else { c.pc = 0x003E0418u; return; } if (c.pc != 0x003E6418u) [[unlikely]] return; }
L_003E6418:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[5], c.r[5].w[0] - 1264u);
    set32(c.r[4], 0u + 8u);
    set32(c.r[6], 0u + 14400u);
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003DAE88u | kUnwind; return; } [[clang::musttail]] return unit_00B6(c, 93u, depth); }
L_003E6438:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003DAEB0u | kUnwind; return; } [[clang::musttail]] return unit_00B6(c, 95u, depth); }
L_003E6450:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003DAED8u | kUnwind; return; } [[clang::musttail]] return unit_00B6(c, 97u, depth); }
L_003E6468:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 896u)));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003DAF08u | kUnwind; return; } [[clang::musttail]] return unit_00B6(c, 99u, depth); }
L_003E6480:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E64A4u); c.r[19].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B6(c, 90u, depth + 1u); else { c.pc = 0x003DAE48u; return; } if (c.pc != 0x003E64A4u) [[unlikely]] return; }
L_003E64A4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_003E6520; } }
    set32(c.r[16], c.r[17].w[0] + 904u);
    set32(c.r[6], ld32((c.r[16].w[0])));
    c.budget -= 3;
L_003E64B8:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[7], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[18], c.r[18].w[0] + 1u);
    set32(c.r[8], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[16], c.r[16].w[0] + 12u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E64D4u); set32(c.r[4], ld32((c.r[17].w[0] + 896u)));  if (depth < kMaxDepth) unit_00B6(c, 113u, depth + 1u); else { c.pc = 0x003DB020u; return; } if (c.pc != 0x003E64D4u) [[unlikely]] return; }
L_003E64D4:
    c.r[2].d[0] = c.r[18].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[6], ld32((c.r[16].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003E64B8u | kUnwind; return; } goto L_003E64B8; }
    set32(c.r[6], ld32((c.r[17].w[0] + 956u)));
    set32(c.r[4], ld32((c.r[17].w[0] + 896u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E64F0u); set32(c.r[5], ld32((c.r[17].w[0] + 952u)));  if (depth < kMaxDepth) unit_00B6(c, 115u, depth + 1u); else { c.pc = 0x003DB048u; return; } if (c.pc != 0x003E64F0u) [[unlikely]] return; }
L_003E64F0:
    set32(c.r[4], ld32((c.r[17].w[0] + 896u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E64FCu); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B6(c, 119u, depth + 1u); else { c.pc = 0x003DB098u; return; } if (c.pc != 0x003E64FCu) [[unlikely]] return; }
L_003E64FC:
    set32(c.r[4], ld32((c.r[17].w[0] + 896u)));
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E650Cu); set32(c.r[6], c.r[17].w[0] + 960u);  if (depth < kMaxDepth) unit_00B6(c, 117u, depth + 1u); else { c.pc = 0x003DB070u; return; } if (c.pc != 0x003E650Cu) [[unlikely]] return; }
L_003E650C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E6514u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B9(c, 192u, depth + 1u); else { c.pc = 0x003E6540u; return; } if (c.pc != 0x003E6514u) [[unlikely]] return; }
L_003E6514:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003E6524; } }
    c.budget -= 1;
L_003E6520:
    set32(c.r[2], 0u - 1u);
    c.budget -= 1;
L_003E6524:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003E6540:
    set32(c.r[29], c.r[29].w[0] - 176u);
    st64((c.r[29].w[0] + 128u), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 136u), c.r[17].d[0]);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    st64((c.r[29].w[0] + 144u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 152u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 160u), c.r[31].d[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E6568u); set32(c.r[4], ld32((c.r[16].w[0] + 896u)));  if (depth < kMaxDepth) unit_00B6(c, 121u, depth + 1u); else { c.pc = 0x003DB0C0u; return; } if (c.pc != 0x003E6568u) [[unlikely]] return; }
L_003E6568:
    set32(c.r[4], ld32((c.r[16].w[0] + 896u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E6574u); set32(c.r[5], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_00B6(c, 123u, depth + 1u); else { c.pc = 0x003DB0E8u; return; } if (c.pc != 0x003E6574u) [[unlikely]] return; }
L_003E6574:
    set32(c.r[4], ld32((c.r[16].w[0] + 896u)));
    set32(c.r[5], c.r[29].w[0] + 100u);
    set32(c.r[6], c.r[29].w[0] + 104u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E6588u); set32(c.r[7], c.r[29].w[0] + 108u);  if (depth < kMaxDepth) unit_00B6(c, 125u, depth + 1u); else { c.pc = 0x003DB110u; return; } if (c.pc != 0x003E6588u) [[unlikely]] return; }
L_003E6588:
    set32(c.r[4], ld32((c.r[16].w[0] + 896u)));
    set32(c.r[5], c.r[29].w[0] + 112u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E6598u); set32(c.r[6], c.r[29].w[0] + 116u);  if (depth < kMaxDepth) unit_00B6(c, 127u, depth + 1u); else { c.pc = 0x003DB138u; return; } if (c.pc != 0x003E6598u) [[unlikely]] return; }
L_003E6598:
    set32(c.r[2], ld32((c.r[29].w[0])));
    set32(c.r[3], ld32((c.r[29].w[0] + 4u)));
    set32(c.r[4], ld32((c.r[29].w[0] + 8u)));
    set32(c.r[5], ld32((c.r[29].w[0] + 12u)));
    set32(c.r[7], ld32((c.r[29].w[0] + 20u)));
    set32(c.r[9], ld32((c.r[29].w[0] + 28u)));
    set32(c.r[10], ld32((c.r[29].w[0] + 32u)));
    set32(c.r[19], ld32((c.r[29].w[0] + 64u)));
    set32(c.r[11], ld32((c.r[29].w[0] + 36u)));
    set32(c.r[12], ld32((c.r[29].w[0] + 40u)));
    set32(c.r[13], ld32((c.r[29].w[0] + 44u)));
    set32(c.r[14], ld32((c.r[29].w[0] + 48u)));
    set32(c.r[15], ld32((c.r[29].w[0] + 52u)));
    set32(c.r[6], ld32((c.r[29].w[0] + 16u)));
    set32(c.r[8], ld32((c.r[29].w[0] + 24u)));
    set32(c.r[17], ld32((c.r[29].w[0] + 56u)));
    set32(c.r[18], ld32((c.r[29].w[0] + 60u)));
    st32((c.r[16].w[0] + 464u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 468u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 472u), c.r[4].w[0]);
    st32((c.r[16].w[0] + 476u), c.r[5].w[0]);
    st32((c.r[16].w[0] + 480u), c.r[6].w[0]);
    st32((c.r[16].w[0] + 484u), c.r[7].w[0]);
    st32((c.r[16].w[0] + 488u), c.r[8].w[0]);
    st32((c.r[16].w[0] + 492u), c.r[9].w[0]);
    st32((c.r[16].w[0] + 496u), c.r[10].w[0]);
    st32((c.r[16].w[0] + 500u), c.r[11].w[0]);
    st32((c.r[16].w[0] + 504u), c.r[12].w[0]);
    st32((c.r[16].w[0] + 508u), c.r[13].w[0]);
    st32((c.r[16].w[0] + 512u), c.r[14].w[0]);
    st32((c.r[16].w[0] + 516u), c.r[15].w[0]);
    st32((c.r[16].w[0] + 520u), c.r[17].w[0]);
    st32((c.r[16].w[0] + 524u), c.r[18].w[0]);
    st32((c.r[16].w[0] + 528u), c.r[19].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 100u)));
    set32(c.r[5], ld32((c.r[29].w[0] + 96u)));
    set32(c.r[4], c.r[3].w[0] + 2047u);
    c.r[2].d[0] = c.r[3].sd[0] < 0ll ? 1ull : 0ull;
    set32(c.r[8], ld32((c.r[29].w[0] + 104u)));
    if (c.r[2].d[0] != 0) c.r[3].d[0] = c.r[4].d[0];
    set32(c.r[9], ld32((c.r[29].w[0] + 112u)));
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 11));
    set32(c.r[2], ld32((c.r[29].w[0] + 116u)));
    set32(c.r[10], ld32((c.r[29].w[0] + 68u)));
    set32(c.r[6], ld32((c.r[29].w[0] + 72u)));
    set32(c.r[7], ld32((c.r[29].w[0] + 76u)));
    set32(c.r[4], ld32((c.r[29].w[0] + 80u)));
    st32((c.r[16].w[0] + 532u), c.r[10].w[0]);
    st32((c.r[16].w[0] + 652u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 536u), c.r[6].w[0]);
    st32((c.r[16].w[0] + 540u), c.r[7].w[0]);
    st32((c.r[16].w[0] + 544u), c.r[4].w[0]);
    st32((c.r[16].w[0] + 636u), c.r[5].w[0]);
    st32((c.r[16].w[0] + 640u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 656u), c.r[8].w[0]);
    st32((c.r[16].w[0] + 648u), c.r[9].w[0]);
    c.r[17].d[0] = ld64((c.r[29].w[0] + 136u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 128u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 144u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 152u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 160u));
    c.budget -= 63;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 176u);  c.pc = t; return; }
L_003E6698:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  goto L_003E66B0; }
L_003E66B0:
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    mmi::mult(c, 0, c.r[4].w[0], c.r[2].w[0]);
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].d[0] = c.r[4].d[0] ^ c.r[2].d[0];
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[4].d[0] = c.r[4].sd[0] < 0ll ? 1ull : 0ull;
    c.r[7].d[0] = c.lo.d[0];
    c.r[3].d[0] = c.hi.d[0];
    c.r[7].d[0] = c.r[7].d[0] << 32;
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.r[7].d[0] = c.r[7].d[0] >> 32;
    c.budget -= 14;
    { const bool t = c.r[6].d[0] != 0ull; c.r[3].d[0] = c.r[3].d[0] | c.r[7].d[0];  if (t) { goto L_003E6700; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.budget -= 5;
    { const bool t = 0ull == 0ull; if (c.r[4].d[0] != 0) c.r[2].d[0] = c.r[3].d[0];  if (t) { goto L_003E6710; } }
    c.budget -= 1;
L_003E6700:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E6708u); c.r[4].d[0] = c.r[3].d[0] + 0ull;  if (depth < kMaxDepth) unit_0006(c, 222u, depth + 1u); else { c.pc = 0x0011A680u; return; } if (c.pc != 0x003E6708u) [[unlikely]] return; }
L_003E6708:
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.budget -= 2;
L_003E6710:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003E6720:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[3].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.budget -= 9;
    { const bool t = c.r[18].d[0] != 0ull; st64((c.r[29].w[0] + 24u), c.r[31].d[0]);  if (t) { goto L_003E6760; } }
    c.r[3].d[0] = c.r[3].d[0] ^ c.r[17].d[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    c.r[3].d[0] = c.r[3].sd[0] < 0ll ? 1ull : 0ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.budget -= 7;
    { const bool t = 0ull == 0ull; if (c.r[3].d[0] != 0) c.r[2].d[0] = c.r[4].d[0];  if (t) { goto L_003E67B8; } }
L_003E6760:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E6768u);  if (depth < kMaxDepth) unit_0007(c, 75u, depth + 1u); else { c.pc = 0x0011CEF8u; return; } if (c.pc != 0x003E6768u) [[unlikely]] return; }
L_003E6768:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E6774u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 75u, depth + 1u); else { c.pc = 0x0011CEF8u; return; } if (c.pc != 0x003E6774u) [[unlikely]] return; }
L_003E6774:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E6780u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 55u, depth + 1u); else { c.pc = 0x0011C960u; return; } if (c.pc != 0x003E6780u) [[unlikely]] return; }
L_003E6780:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E678Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 75u, depth + 1u); else { c.pc = 0x0011CEF8u; return; } if (c.pc != 0x003E678Cu) [[unlikely]] return; }
L_003E678C:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E6798u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 65u, depth + 1u); else { c.pc = 0x0011CC10u; return; } if (c.pc != 0x003E6798u) [[unlikely]] return; }
L_003E6798:
    c.r[5].d[0] = 0ull | 65408ull;
    c.r[5].d[0] = c.r[5].d[0] << 46;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E67A8u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 45u, depth + 1u); else { c.pc = 0x0011C8A0u; return; } if (c.pc != 0x003E67A8u) [[unlikely]] return; }
L_003E67A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E67B0u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0006(c, 163u, depth + 1u); else { c.pc = 0x00119938u; return; } if (c.pc != 0x003E67B0u) [[unlikely]] return; }
L_003E67B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E67B8u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 78u, depth + 1u); else { c.pc = 0x0011CFB0u; return; } if (c.pc != 0x003E67B8u) [[unlikely]] return; }
L_003E67B8:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003E67D0:
    set32(c.r[13], ld32((c.r[4].w[0] + 20u)));
    set32(c.r[3], 0u + 1u);
    set32(c.r[14], ld32((c.r[4].w[0])));
    set32(c.r[11], 0u + 2u);
    c.r[2].d[0] = 0ll < c.r[13].sd[0] ? 1ull : 0ull;
    c.r[15].d[0] = c.r[5].d[0] + 0ull;
    c.r[24].d[0] = c.r[6].d[0] + 0ull;
    if (c.r[2].d[0] == 0) c.r[13].d[0] = c.r[3].d[0];
    c.r[25].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 11;
    { const bool t = c.r[14].d[0] != c.r[11].d[0]; set32(c.r[12], ld32((c.r[4].w[0] + 4u)));  if (t) { goto L_003E6828; } }
    set32(c.r[4], c.r[12].w[0] + 16383u);
    c.r[3].d[0] = c.r[12].sd[0] < 0ll ? 1ull : 0ull;
    if (c.r[3].d[0] != 0) c.r[12].d[0] = c.r[4].d[0];
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[12].w[0]) >> 14));
    mmi::mult(c, 0, c.r[2].w[0], c.r[13].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] << 11);
    st32((c.r[15].w[0]), c.r[2].w[0]);
    st32((c.r[24].w[0]), 0u);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st32((c.r[25].w[0]), 0u);  if (t) { goto L_003E6860; } }
    c.budget -= 1;
L_003E6828:
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[14].d[0] != c.r[2].d[0]; c.r[3].d[0] = c.r[12].sd[0] < 0ll ? 1ull : 0ull;  if (t) { goto L_003E6870; } }
    c.r[2].d[0] = c.r[12].sd[0] < 0ll ? 1ull : 0ull;
    set32(c.r[4], c.r[12].w[0] + 16383u);
    if (c.r[2].d[0] != 0) c.r[12].d[0] = c.r[4].d[0];
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[12].w[0]) >> 14));
    mmi::mult(c, 0, c.r[3].w[0], c.r[13].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[3].w[0] << 10);
    set32(c.r[3], c.r[3].w[0] + 2048u);
    set32(c.r[2], c.r[2].w[0] << 11);
    st32((c.r[15].w[0]), c.r[2].w[0]);
    st32((c.r[24].w[0]), 0u);
    st32((c.r[25].w[0]), c.r[3].w[0]);
    c.budget -= 11;
L_003E6860:
    st32((c.r[8].w[0]), 0u);
    st32((c.r[9].w[0]), 0u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[10].w[0]), 0u);  c.pc = t; return; }
L_003E6870:
    set32(c.r[4], c.r[12].w[0] + 16383u);
    if (c.r[3].d[0] != 0) c.r[12].d[0] = c.r[4].d[0];
    set32(c.r[5], 0u + 24012u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[12].w[0]) >> 14));
    set32(c.r[6], 0u + 24332u);
    mmi::mult(c, 0, c.r[2].w[0], c.r[13].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] << 10);
    c.r[7].d[0] = 0ull | 33216ull;
    set32(c.r[2], c.r[2].w[0] + 2048u);
    set32(c.r[3], c.r[3].w[0] << 11);
    st32((c.r[15].w[0]), c.r[3].w[0]);
    st32((c.r[24].w[0]), 0u);
    st32((c.r[25].w[0]), c.r[2].w[0]);
    st32((c.r[8].w[0]), c.r[5].w[0]);
    st32((c.r[9].w[0]), c.r[6].w[0]);
    c.budget -= 17;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[10].w[0]), c.r[7].w[0]);  c.pc = t; return; }
L_003E68B8:
    set32(c.r[10], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[11], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[3], c.r[10].w[0] >> 31);
    set32(c.r[3], c.r[10].w[0] + c.r[3].w[0]);
    set32(c.r[4], c.r[11].w[0] >> 31);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 1));
    set32(c.r[4], c.r[11].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[3].w[0] + 31u);
    set32(c.r[3], c.r[3].w[0] + 62u);
    c.r[9].d[0] = c.r[2].sd[0] < 0ll ? 1ull : 0ull;
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 1));
    if (c.r[9].d[0] != 0) c.r[2].d[0] = c.r[3].d[0];
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 5));
    set32(c.r[2], c.r[2].w[0] << 5);
    st32((c.r[7].w[0]), c.r[2].w[0]);
    st32((c.r[8].w[0]), c.r[4].w[0]);
    st32((c.r[5].w[0]), c.r[10].w[0]);
    c.budget -= 19;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[6].w[0]), c.r[11].w[0]);  c.pc = t; return; }
L_003E6908:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 40u), c.r[19].d[0]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    set32(c.r[6], c.r[29].w[0] + 4u);
    set32(c.r[7], c.r[29].w[0] + 8u);
    set32(c.r[8], c.r[29].w[0] + 12u);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E6944u); set32(c.r[18], ld32((c.r[16].w[0] + 16u)));  if (depth < kMaxDepth) unit_00B9(c, 210u, depth + 1u); else { c.pc = 0x003E68B8u; return; } if (c.pc != 0x003E6944u) [[unlikely]] return; }
L_003E6944:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E694Cu); set32(c.r[4], ld32((c.r[16].w[0] + 36u)));  if (depth < kMaxDepth) unit_00B9(c, 214u, depth + 1u); else { c.pc = 0x003E69F0u; return; } if (c.pc != 0x003E694Cu) [[unlikely]] return; }
L_003E694C:
    set32(c.r[9], 0u + 2u);
    set32(c.r[5], ld32((c.r[29].w[0])));
    set32(c.r[4], ld32((c.r[29].w[0] + 4u)));
    set32(c.r[7], c.r[5].w[0] + 15u);
    c.r[3].d[0] = c.r[5].sd[0] < 0ll ? 1ull : 0ull;
    mmi::mult(c, 0, c.r[5].w[0], c.r[4].w[0]);
    c.r[8].d[0] = c.lo.d[0];
    if (c.r[3].d[0] != 0) c.r[5].d[0] = c.r[7].d[0];
    set32(c.r[6], c.r[4].w[0] + 15u);
    c.r[3].d[0] = c.r[4].sd[0] < 0ll ? 1ull : 0ull;
    if (c.r[3].d[0] != 0) c.r[4].d[0] = c.r[6].d[0];
    set32(c.r[5], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[5].w[0]) >> 4));
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 4));
    mmi::mult(c, 0, c.r[5].w[0], c.r[4].w[0]);
    c.r[7].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[8].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] + c.r[8].w[0]);
    set32(c.r[6], c.r[3].w[0] >> 31);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    c.r[5].d[0] = c.r[7].d[0] + 0ull;
    set32(c.r[4], c.r[7].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[7].w[0]);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 1));
    set32(c.r[5], c.r[5].w[0] << 10);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00080000u);
    c.r[1].d[0] = c.r[1].d[0] | 26896ull;
    set32(c.r[3], c.r[1].w[0] + c.r[3].w[0]);
    set32(c.r[4], c.r[4].w[0] << 7);
    set32(c.r[5], c.r[5].w[0] + 64u);
    st32((c.r[17].w[0]), c.r[3].w[0]);
    mmi::mult(c, 0, c.r[18].w[0], c.r[5].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    c.budget -= 31;
    { const bool t = c.r[2].d[0] == c.r[9].d[0]; set32(c.r[4], c.r[4].w[0] + 64u);  if (t) { goto L_003E69CC; } }
    mmi::mult(c, 0, c.r[18].w[0], c.r[4].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    c.budget -= 1;
L_003E69CC:
    st32((c.r[19].w[0]), c.r[3].w[0]);
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003E69F0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[2], 0u + 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_003E6A30; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[3], 0u + 2u);  if (t) { goto L_003E6A30; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 3u);  if (t) { goto L_003E6A30; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; set32(c.r[3], 0u + 3u);  if (t) { goto L_003E6A30; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E6A2Cu); set32(c.r[4], c.r[4].w[0] + 25744u);  if (depth < kMaxDepth) unit_00BB(c, 314u, depth + 1u); else { c.pc = 0x003EE380u; return; } if (c.pc != 0x003E6A2Cu) [[unlikely]] return; }
L_003E6A2C:
    set32(c.r[3], 0u + 3u);
    c.budget -= 1;
L_003E6A30:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003E6A40:
    set32(c.r[2], 0u + 16384u);
    st32((c.r[5].w[0]), c.r[2].w[0]);
    set32(c.r[3], 0u + 1792u);
    st32((c.r[6].w[0]), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[5].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);  c.pc = t; return; }
L_003E6A60:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 256u);  c.pc = t; return; }
L_003E6A68:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 4u);
    set32(c.r[7], c.r[29].w[0] + 8u);
    set32(c.r[8], c.r[29].w[0] + 12u);
    set32(c.r[9], c.r[29].w[0] + 16u);
    set32(c.r[10], c.r[29].w[0] + 20u);
    st64((c.r[29].w[0] + 48u), c.r[16].d[0]);
    st64((c.r[29].w[0] + 56u), c.r[31].d[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E6A94u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B9(c, 209u, depth + 1u); else { c.pc = 0x003E67D0u; return; } if (c.pc != 0x003E6A94u) [[unlikely]] return; }
L_003E6A94:
    set32(c.r[5], c.r[29].w[0] + 24u);
    set32(c.r[6], c.r[29].w[0] + 28u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E6AA4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B9(c, 211u, depth + 1u); else { c.pc = 0x003E6908u; return; } if (c.pc != 0x003E6AA4u) [[unlikely]] return; }
L_003E6AA4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E6AB4u); set32(c.r[6], c.r[29].w[0] + 36u);  if (depth < kMaxDepth) unit_00B9(c, 216u, depth + 1u); else { c.pc = 0x003E6A40u; return; } if (c.pc != 0x003E6AB4u) [[unlikely]] return; }
L_003E6AB4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E6ABCu); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B9(c, 217u, depth + 1u); else { c.pc = 0x003E6A60u; return; } if (c.pc != 0x003E6ABCu) [[unlikely]] return; }
L_003E6ABC:
    set32(c.r[4], ld32((c.r[29].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 4u)));
    set32(c.r[5], ld32((c.r[29].w[0] + 12u)));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[29].w[0] + 24u)));
    set32(c.r[6], ld32((c.r[29].w[0])));
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[8], ld32((c.r[29].w[0] + 16u)));
    set32(c.r[3], c.r[3].w[0] + 64u);
    set32(c.r[5], ld32((c.r[29].w[0] + 28u)));
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[7], ld32((c.r[29].w[0] + 20u)));
    set32(c.r[6], c.r[6].w[0] + c.r[8].w[0]);
    set32(c.r[4], c.r[4].w[0] + 64u);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[5], c.r[5].w[0] + c.r[7].w[0]);
    c.r[16].d[0] = ld64((c.r[29].w[0] + 48u));
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 56u));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[3].w[0] + 2048u);
    c.budget -= 24;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003E6B20:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[5], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E6B40u); set32(c.r[4], ld32((c.r[16].w[0] + 8u)));  if (depth < kMaxDepth) unit_00BA(c, 485u, depth + 1u); else { c.pc = 0x003EB788u; return; } if (c.pc != 0x003E6B40u) [[unlikely]] return; }
L_003E6B40:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E6B4Cu); c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BB(c, 45u, depth + 1u); else { c.pc = 0x003EC4F0u; return; } if (c.pc != 0x003E6B4Cu) [[unlikely]] return; }
L_003E6B4C:
    set32(c.r[3], 0u + 1u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00020000u);
    set32(c.r[4], c.r[4].w[0] + c.r[17].w[0]);
    c.r[2].d[0] = c.r[2].d[0] ^ c.r[3].d[0];
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    if (c.r[2].d[0] == 0) c.r[17].d[0] = c.r[4].d[0];
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003E6B78:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.budget -= 6;
    { const bool t = c.r[17].d[0] != 0ull; st64((c.r[29].w[0] + 16u), c.r[31].d[0]);  if (t) { goto L_003E6BA8; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E6B9Cu); set32(c.r[4], c.r[4].w[0] + 25840u);  if (depth < kMaxDepth) unit_00BB(c, 314u, depth + 1u); else { c.pc = 0x003EE380u; return; } if (c.pc != 0x003E6B9Cu) [[unlikely]] return; }
L_003E6B9C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003E6BC0; } }
    c.budget -= 1;
L_003E6BA8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E6BB0u);  if (depth < kMaxDepth) unit_00B9(c, 218u, depth + 1u); else { c.pc = 0x003E6A68u; return; } if (c.pc != 0x003E6BB0u) [[unlikely]] return; }
L_003E6BB0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E6BBCu); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B9(c, 223u, depth + 1u); else { c.pc = 0x003E6B20u; return; } if (c.pc != 0x003E6BBCu) [[unlikely]] return; }
L_003E6BBC:
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    c.budget -= 1;
L_003E6BC0:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003E6BD8:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[6], ld32((c.r[4].w[0] + 296u)));
    c.budget -= 5;
    { const bool t = c.r[6].d[0] == 0ull; set32(c.r[7], ld32((c.r[4].w[0] + 64u)));  if (t) { goto L_003E6C9C; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 332u)));
    c.budget -= 3;
    if (c.r[6].d[0] != c.r[2].d[0]) { set32(c.r[2], ld32((c.r[4].w[0] + 300u)));  goto L_003E6C20; }
    set32(c.r[2], ld32((c.r[4].w[0] + 340u)));
    set32(c.r[3], 0u + 1u);
    set32(c.r[4], ld32((c.r[4].w[0] + 336u)));
    st32((c.r[29].w[0] + 4u), c.r[6].w[0]);
    st32((c.r[29].w[0]), c.r[3].w[0]);
    st32((c.r[29].w[0] + 8u), c.r[4].w[0]);
    st32((c.r[29].w[0] + 12u), c.r[2].w[0]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 16u), 0u);  if (t) { goto L_003E6C70; } }
    c.budget -= 1;
L_003E6C20:
    c.budget -= 2;
    if (c.r[6].d[0] != c.r[2].d[0]) { set32(c.r[2], ld32((c.r[4].w[0] + 316u)));  goto L_003E6C50; }
    set32(c.r[2], ld32((c.r[4].w[0] + 312u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 304u)));
    set32(c.r[4], ld32((c.r[4].w[0] + 308u)));
    st32((c.r[29].w[0] + 4u), c.r[6].w[0]);
    st32((c.r[29].w[0] + 8u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 12u), c.r[4].w[0]);
    st32((c.r[29].w[0] + 16u), c.r[2].w[0]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0]), 0u);  if (t) { goto L_003E6C70; } }
    c.budget -= 1;
L_003E6C50:
    set32(c.r[5], ld32((c.r[4].w[0] + 328u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 320u)));
    set32(c.r[4], ld32((c.r[4].w[0] + 324u)));
    st32((c.r[29].w[0]), c.r[2].w[0]);
    st32((c.r[29].w[0] + 4u), c.r[6].w[0]);
    st32((c.r[29].w[0] + 8u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 12u), c.r[4].w[0]);
    st32((c.r[29].w[0] + 16u), c.r[5].w[0]);
    c.budget -= 8;
L_003E6C70:
    st32((c.r[29].w[0] + 20u), 0u);
    c.r[4].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E6C80u); c.r[5].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BF(c, 339u, depth + 1u); else { c.pc = 0x003FECD0u; return; } if (c.pc != 0x003E6C80u) [[unlikely]] return; }
L_003E6C80:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u - 312u);  if (t) { goto L_003E6C9C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E6C90u);  if (depth < kMaxDepth) unit_00BA(c, 195u, depth + 1u); else { c.pc = 0x003E9720u; return; } if (c.pc != 0x003E6C90u) [[unlikely]] return; }
L_003E6C90:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E6C9Cu); set32(c.r[4], c.r[4].w[0] + 25888u);  if (depth < kMaxDepth) unit_00BB(c, 314u, depth + 1u); else { c.pc = 0x003EE380u; return; } if (c.pc != 0x003E6C9Cu) [[unlikely]] return; }
L_003E6C9C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003E6CA8:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00080000u);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    c.r[18].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 40u), c.r[31].d[0]);
    c.r[2].d[0] = c.r[2].d[0] | 16592ull;
    set32(c.r[3], ld32((c.r[5].w[0] + 12u)));
    set32(c.r[7], ld32((c.r[5].w[0] + 8u)));
    st32((c.r[29].w[0] + 4u), c.r[2].w[0]);
    mmi::mult(c, 0, c.r[7].w[0], c.r[3].w[0]);
    c.r[7].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[7].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[7].w[0]);
    set32(c.r[3], c.r[2].w[0] >> 31);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    set32(c.r[2], c.r[2].w[0] + 10304u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 23;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E6D04u); st32((c.r[29].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00BA(c, 10u, depth + 1u); else { c.pc = 0x003E81D0u; return; } if (c.pc != 0x003E6D04u) [[unlikely]] return; }
L_003E6D04:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E6D14u); set32(c.r[5], ld32((c.r[29].w[0] + 4u)));  if (depth < kMaxDepth) unit_00BA(c, 10u, depth + 1u); else { c.pc = 0x003E81D0u; return; } if (c.pc != 0x003E6D14u) [[unlikely]] return; }
L_003E6D14:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[16].w[0] + 4u), c.r[3].w[0]);  if (t) { goto L_003E6D2C; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull; c.r[2].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_003E6D34; } }
L_003E6D2C:
    set32(c.r[18], 0u - 1u);
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 2;
L_003E6D34:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 40u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003E6D50:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    c.r[19].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 40u), c.r[21].d[0]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[22].d[0]);
    c.r[22].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 56u), c.r[31].d[0]);
    set32(c.r[17], ld32((c.r[5].w[0] + 8u)));
    set32(c.r[16], ld32((c.r[5].w[0] + 12u)));
    set32(c.r[4], ld32((c.r[5].w[0] + 36u)));
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E6D94u); set32(c.r[20], ld32((c.r[5].w[0] + 16u)));  if (depth < kMaxDepth) unit_00B9(c, 214u, depth + 1u); else { c.pc = 0x003E69F0u; return; } if (c.pc != 0x003E6D94u) [[unlikely]] return; }
L_003E6D94:
    set32(c.r[6], c.r[17].w[0] + 15u);
    c.r[4].d[0] = c.r[17].sd[0] < 0ll ? 1ull : 0ull;
    c.r[3].d[0] = c.r[16].sd[0] < 0ll ? 1ull : 0ull;
    set32(c.r[5], c.r[16].w[0] + 15u);
    if (c.r[4].d[0] != 0) c.r[17].d[0] = c.r[6].d[0];
    if (c.r[3].d[0] != 0) c.r[16].d[0] = c.r[5].d[0];
    set32(c.r[4], 0u + 2u);
    set32(c.r[17], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[17].w[0]) >> 4));
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != c.r[4].d[0]; set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[16].w[0]) >> 4));  if (t) { goto L_003E6DC8; } }
    mmi::mult(c, 0, c.r[17].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] << 10);  if (t) { goto L_003E6DD8; } }
L_003E6DC8:
    mmi::mult(c, 0, c.r[17].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 7);
    c.budget -= 4;
L_003E6DD8:
    c.budget -= 2;
    { const bool t = c.r[20].sd[0] <= 0; set32(c.r[18], c.r[2].w[0] + 64u);  if (t) { goto L_003E6E10; } }
    c.r[16].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[20], 0u - 1u);
    c.r[17].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 4;
L_003E6DF0:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E6DFCu); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BA(c, 10u, depth + 1u); else { c.pc = 0x003E81D0u; return; } if (c.pc != 0x003E6DFCu) [[unlikely]] return; }
L_003E6DFC:
    set32(c.r[16], c.r[16].w[0] - 1u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[17], c.r[17].w[0] + 4u);
    c.budget -= 5;
    { const bool t = c.r[16].d[0] != 0ull; if (c.r[2].d[0] == 0) c.r[19].d[0] = c.r[20].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003E6DF0u | kUnwind; return; } goto L_003E6DF0; } }
L_003E6E10:
    c.r[2].d[0] = c.r[19].d[0] + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 56u));
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003E6E40:
    set32(c.r[29], c.r[29].w[0] - 304u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st64((c.r[29].w[0] + 224u), c.r[16].d[0]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st64((c.r[29].w[0] + 232u), c.r[17].d[0]);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st64((c.r[29].w[0] + 240u), c.r[18].d[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st64((c.r[29].w[0] + 248u), c.r[19].d[0]);
    set32(c.r[18], c.r[3].w[0] + 13144u);
    st64((c.r[29].w[0] + 256u), c.r[20].d[0]);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st64((c.r[29].w[0] + 264u), c.r[21].d[0]);
    set32(c.r[21], c.r[2].w[0] + 13140u);
    st64((c.r[29].w[0] + 272u), c.r[22].d[0]);
    c.r[22].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 280u), c.r[23].d[0]);
    c.r[23].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 288u), c.r[30].d[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st64((c.r[29].w[0] + 296u), c.r[31].d[0]);
    set32(c.r[19], c.r[5].w[0] + 13148u);
    set32(c.r[20], c.r[6].w[0] + 13152u);
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[23].w[0] + 16u)));
    set32(c.r[16], c.r[16].w[0] + 13168u);
    set32(c.r[30], ld32((c.r[23].w[0])));
    set32(c.r[17], c.r[17].w[0] + 13164u);
    st32((c.r[29].w[0] + 192u), c.r[2].w[0]);
    c.r[8].d[0] = c.r[20].d[0] + 0ull;
    c.r[9].d[0] = c.r[16].d[0] + 0ull;
    c.r[10].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[23].w[0] + 8u)));
    c.r[7].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    st32((c.r[29].w[0] + 196u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[23].w[0] + 12u)));
    c.budget -= 40;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E6EE0u); st32((c.r[29].w[0] + 200u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00B9(c, 209u, depth + 1u); else { c.pc = 0x003E67D0u; return; } if (c.pc != 0x003E6EE0u) [[unlikely]] return; }
L_003E6EE0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[5], c.r[5].w[0] + 13156u);
    set32(c.r[6], c.r[6].w[0] + 13160u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E6EF8u); c.r[4].d[0] = c.r[23].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B9(c, 211u, depth + 1u); else { c.pc = 0x003E6908u; return; } if (c.pc != 0x003E6EF8u) [[unlikely]] return; }
L_003E6EF8:
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 160u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E6F08u); set32(c.r[6], c.r[29].w[0] + 164u);  if (depth < kMaxDepth) unit_00B9(c, 216u, depth + 1u); else { c.pc = 0x003E6A40u; return; } if (c.pc != 0x003E6F08u) [[unlikely]] return; }
L_003E6F08:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E6F10u);  if (depth < kMaxDepth) unit_00B9(c, 217u, depth + 1u); else { c.pc = 0x003E6A60u; return; } if (c.pc != 0x003E6F10u) [[unlikely]] return; }
L_003E6F10:
    st32((c.r[29].w[0] + 208u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[18].w[0])));
    set32(c.r[2], ld32((c.r[19].w[0])));
    set32(c.r[3], ld32((c.r[20].w[0])));
    set32(c.r[5], c.r[5].w[0] + c.r[2].w[0]);
    set32(c.r[5], c.r[5].w[0] + c.r[3].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E6F34u); set32(c.r[5], c.r[5].w[0] + 64u);  if (depth < kMaxDepth) unit_00BA(c, 10u, depth + 1u); else { c.pc = 0x003E81D0u; return; } if (c.pc != 0x003E6F34u) [[unlikely]] return; }
L_003E6F34:
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    st32((c.r[29].w[0] + 184u), c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[21].w[0])));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E6F48u); set32(c.r[5], c.r[5].w[0] + 64u);  if (depth < kMaxDepth) unit_00BA(c, 10u, depth + 1u); else { c.pc = 0x003E81D0u; return; } if (c.pc != 0x003E6F48u) [[unlikely]] return; }
L_003E6F48:
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    set32(c.r[3], c.r[29].w[0] + 80u);
    c.r[5].d[0] = c.r[23].d[0] + 0ull;
    c.r[6].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E6F60u); c.r[19].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B9(c, 234u, depth + 1u); else { c.pc = 0x003E6CA8u; return; } if (c.pc != 0x003E6F60u) [[unlikely]] return; }
L_003E6F60:
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    set32(c.r[7], c.r[29].w[0] + 96u);
    c.r[5].d[0] = c.r[23].d[0] + 0ull;
    c.r[6].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E6F78u); c.r[20].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B9(c, 237u, depth + 1u); else { c.pc = 0x003E6D50u; return; } if (c.pc != 0x003E6F78u) [[unlikely]] return; }
L_003E6F78:
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[16].w[0])));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E6F88u); c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BA(c, 10u, depth + 1u); else { c.pc = 0x003E81D0u; return; } if (c.pc != 0x003E6F88u) [[unlikely]] return; }
L_003E6F88:
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[17].w[0])));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E6F98u); c.r[21].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BA(c, 10u, depth + 1u); else { c.pc = 0x003E81D0u; return; } if (c.pc != 0x003E6F98u) [[unlikely]] return; }
L_003E6F98:
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    set32(c.r[5], 0u + 2048u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E6FA8u); c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BA(c, 10u, depth + 1u); else { c.pc = 0x003E81D0u; return; } if (c.pc != 0x003E6FA8u) [[unlikely]] return; }
L_003E6FA8:
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[29].w[0] + 160u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E6FB8u); st32((c.r[29].w[0] + 188u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00BA(c, 10u, depth + 1u); else { c.pc = 0x003E81D0u; return; } if (c.pc != 0x003E6FB8u) [[unlikely]] return; }
L_003E6FB8:
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[29].w[0] + 164u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E6FC8u); st32((c.r[29].w[0] + 204u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00BA(c, 10u, depth + 1u); else { c.pc = 0x003E81D0u; return; } if (c.pc != 0x003E6FC8u) [[unlikely]] return; }
L_003E6FC8:
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[29].w[0] + 208u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E6FD8u); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BA(c, 10u, depth + 1u); else { c.pc = 0x003E81D0u; return; } if (c.pc != 0x003E6FD8u) [[unlikely]] return; }
L_003E6FD8:
    set32(c.r[8], ld32((c.r[29].w[0] + 184u)));
    c.budget -= 3;
    { const bool t = c.r[8].d[0] == 0ull; st32((c.r[29].w[0] + 212u), c.r[2].w[0]);  if (t) { goto L_003E702C; } }
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);  if (t) { goto L_003E7030; } }
    c.budget -= 2;
    { const bool t = c.r[20].d[0] != 0ull;  if (t) { goto L_003E7030; } }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != 0ull;  if (t) { goto L_003E7030; } }
    c.budget -= 2;
    { const bool t = c.r[21].d[0] == 0ull;  if (t) { goto L_003E7030; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; set32(c.r[9], ld32((c.r[29].w[0] + 188u)));  if (t) { goto L_003E7030; } }
    c.budget -= 2;
    { const bool t = c.r[9].d[0] == 0ull; set32(c.r[10], ld32((c.r[29].w[0] + 204u)));  if (t) { goto L_003E7030; } }
    c.budget -= 2;
    { const bool t = c.r[10].d[0] == 0ull;  if (t) { goto L_003E7030; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003E7030; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull; set32(c.r[2], 0u - 64u);  if (t) { goto L_003E7048; } }
L_003E702C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.budget -= 1;
L_003E7030:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E7038u); set32(c.r[4], c.r[4].w[0] + 25928u);  if (depth < kMaxDepth) unit_00BB(c, 314u, depth + 1u); else { c.pc = 0x003EE380u; return; } if (c.pc != 0x003E7038u) [[unlikely]] return; }
L_003E7038:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E7040u); c.r[4].d[0] = c.r[22].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BA(c, 26u, depth + 1u); else { c.pc = 0x003E8370u; return; } if (c.pc != 0x003E7040u) [[unlikely]] return; }
L_003E7040:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003E748C; } }
L_003E7048:
    set32(c.r[3], c.r[19].w[0] + 63u);
    c.r[3].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 168u);
    set32(c.r[6], c.r[29].w[0] + 172u);
    set32(c.r[7], c.r[29].w[0] + 176u);
    set32(c.r[8], c.r[29].w[0] + 180u);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[19].sd[0] = static_cast<std::int32_t>(0x00450000u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E7074u); st32((c.r[16].w[0] + 13136u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_00B9(c, 210u, depth + 1u); else { c.pc = 0x003E68B8u; return; } if (c.pc != 0x003E7074u) [[unlikely]] return; }
L_003E7074:
    set32(c.r[3], ld32((c.r[29].w[0] + 180u)));
    c.r[20].sd[0] = static_cast<std::int32_t>(0x00450000u);
    set32(c.r[7], ld32((c.r[29].w[0] + 168u)));
    set32(c.r[2], c.r[19].w[0] - 21896u);
    set32(c.r[6], ld32((c.r[29].w[0] + 172u)));
    set32(c.r[4], c.r[20].w[0] - 21856u);
    set32(c.r[5], ld32((c.r[29].w[0] + 176u)));
    set32(c.r[8], 0u + 2u);
    st32((c.r[4].w[0] + 24u), c.r[17].w[0]);
    st32((c.r[2].w[0]), c.r[5].w[0]);
    st32((c.r[2].w[0] + 32u), 0u);
    st32((c.r[2].w[0] + 4u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 8u), c.r[21].w[0]);
    st32((c.r[2].w[0] + 20u), c.r[7].w[0]);
    st32((c.r[2].w[0] + 24u), c.r[6].w[0]);
    st32((c.r[2].w[0] + 8u), c.r[7].w[0]);
    st32((c.r[2].w[0] + 12u), c.r[6].w[0]);
    st32((c.r[2].w[0] + 16u), 0u);
    set32(c.r[3], ld32((c.r[29].w[0] + 192u)));
    c.budget -= 21;
    { const bool t = c.r[30].d[0] == c.r[8].d[0]; st32((c.r[2].w[0] + 28u), c.r[3].w[0]);  if (t) { goto L_003E71B0; } }
    c.r[2].d[0] = c.r[30].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 3u);  if (t) { goto L_003E70E8; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[30].d[0] == c.r[2].d[0]; c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);  if (t) { goto L_003E70F8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00450000u);  if (t) { goto L_003E7348; } }
L_003E70E8:
    c.budget -= 2;
    { const bool t = c.r[30].d[0] == c.r[2].d[0]; c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);  if (t) { goto L_003E7268; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00450000u);  if (t) { goto L_003E7348; } }
L_003E70F8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00450000u);
    set32(c.r[3], c.r[3].w[0] - 22112u);
    c.r[2].d[0] = c.r[3].d[0] & 7ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[29].d[0] + 0ull;  if (t) { goto L_003E7170; } }
    set32(c.r[2], c.r[3].w[0] + 64u);
    c.budget -= 1;
L_003E7110:
    ldl(c.r[4], (c.r[3].w[0] + 7u));
    ldr(c.r[4], (c.r[3].w[0]));
    ldl(c.r[6], (c.r[3].w[0] + 15u));
    ldr(c.r[6], (c.r[3].w[0] + 8u));
    ldl(c.r[7], (c.r[3].w[0] + 23u));
    ldr(c.r[7], (c.r[3].w[0] + 16u));
    ldl(c.r[8], (c.r[3].w[0] + 31u));
    ldr(c.r[8], (c.r[3].w[0] + 24u));
    sdl(c.r[4], (c.r[5].w[0] + 7u));
    sdr(c.r[4], (c.r[5].w[0]));
    sdl(c.r[6], (c.r[5].w[0] + 15u));
    sdr(c.r[6], (c.r[5].w[0] + 8u));
    sdl(c.r[7], (c.r[5].w[0] + 23u));
    sdr(c.r[7], (c.r[5].w[0] + 16u));
    sdl(c.r[8], (c.r[5].w[0] + 31u));
    sdr(c.r[8], (c.r[5].w[0] + 24u));
    set32(c.r[3], c.r[3].w[0] + 32u);
    c.budget -= 21;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[5], c.r[5].w[0] + 32u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003E7110u | kUnwind; return; } goto L_003E7110; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[16].w[0] + 13136u)));  if (t) { goto L_003E731C; } }
    c.budget -= 1;
L_003E7170:
    set32(c.r[2], c.r[3].w[0] + 64u);
    c.budget -= 1;
L_003E7174:
    c.r[9].d[0] = ld64((c.r[3].w[0]));
    c.r[10].d[0] = ld64((c.r[3].w[0] + 8u));
    c.r[4].d[0] = ld64((c.r[3].w[0] + 16u));
    c.r[6].d[0] = ld64((c.r[3].w[0] + 24u));
    st64((c.r[5].w[0]), c.r[9].d[0]);
    st64((c.r[5].w[0] + 8u), c.r[10].d[0]);
    st64((c.r[5].w[0] + 16u), c.r[4].d[0]);
    st64((c.r[5].w[0] + 24u), c.r[6].d[0]);
    set32(c.r[3], c.r[3].w[0] + 32u);
    c.budget -= 13;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[5], c.r[5].w[0] + 32u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003E7174u | kUnwind; return; } goto L_003E7174; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[16].w[0] + 13136u)));  if (t) { goto L_003E731C; } }
L_003E71B0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00450000u);
    set32(c.r[3], c.r[3].w[0] - 22040u);
    c.r[2].d[0] = c.r[3].d[0] & 7ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[29].d[0] + 0ull;  if (t) { goto L_003E7228; } }
    set32(c.r[2], c.r[3].w[0] + 64u);
    c.budget -= 1;
L_003E71C8:
    ldl(c.r[4], (c.r[3].w[0] + 7u));
    ldr(c.r[4], (c.r[3].w[0]));
    ldl(c.r[6], (c.r[3].w[0] + 15u));
    ldr(c.r[6], (c.r[3].w[0] + 8u));
    ldl(c.r[7], (c.r[3].w[0] + 23u));
    ldr(c.r[7], (c.r[3].w[0] + 16u));
    ldl(c.r[8], (c.r[3].w[0] + 31u));
    ldr(c.r[8], (c.r[3].w[0] + 24u));
    sdl(c.r[4], (c.r[5].w[0] + 7u));
    sdr(c.r[4], (c.r[5].w[0]));
    sdl(c.r[6], (c.r[5].w[0] + 15u));
    sdr(c.r[6], (c.r[5].w[0] + 8u));
    sdl(c.r[7], (c.r[5].w[0] + 23u));
    sdr(c.r[7], (c.r[5].w[0] + 16u));
    sdl(c.r[8], (c.r[5].w[0] + 31u));
    sdr(c.r[8], (c.r[5].w[0] + 24u));
    set32(c.r[3], c.r[3].w[0] + 32u);
    c.budget -= 21;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[5], c.r[5].w[0] + 32u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003E71C8u | kUnwind; return; } goto L_003E71C8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[16].w[0] + 13136u)));  if (t) { goto L_003E731C; } }
    c.budget -= 1;
L_003E7228:
    set32(c.r[2], c.r[3].w[0] + 64u);
    c.budget -= 1;
L_003E722C:
    c.r[9].d[0] = ld64((c.r[3].w[0]));
    c.r[10].d[0] = ld64((c.r[3].w[0] + 8u));
    c.r[4].d[0] = ld64((c.r[3].w[0] + 16u));
    c.r[6].d[0] = ld64((c.r[3].w[0] + 24u));
    st64((c.r[5].w[0]), c.r[9].d[0]);
    st64((c.r[5].w[0] + 8u), c.r[10].d[0]);
    st64((c.r[5].w[0] + 16u), c.r[4].d[0]);
    st64((c.r[5].w[0] + 24u), c.r[6].d[0]);
    set32(c.r[3], c.r[3].w[0] + 32u);
    c.budget -= 13;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[5], c.r[5].w[0] + 32u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003E722Cu | kUnwind; return; } goto L_003E722C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[16].w[0] + 13136u)));  if (t) { goto L_003E731C; } }
L_003E7268:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00450000u);
    set32(c.r[3], c.r[3].w[0] - 21968u);
    c.r[2].d[0] = c.r[3].d[0] & 7ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[29].d[0] + 0ull;  if (t) { goto L_003E72E0; } }
    set32(c.r[2], c.r[3].w[0] + 64u);
    c.budget -= 1;
L_003E7280:
    ldl(c.r[4], (c.r[3].w[0] + 7u));
    ldr(c.r[4], (c.r[3].w[0]));
    ldl(c.r[6], (c.r[3].w[0] + 15u));
    ldr(c.r[6], (c.r[3].w[0] + 8u));
    ldl(c.r[7], (c.r[3].w[0] + 23u));
    ldr(c.r[7], (c.r[3].w[0] + 16u));
    ldl(c.r[8], (c.r[3].w[0] + 31u));
    ldr(c.r[8], (c.r[3].w[0] + 24u));
    sdl(c.r[4], (c.r[5].w[0] + 7u));
    sdr(c.r[4], (c.r[5].w[0]));
    sdl(c.r[6], (c.r[5].w[0] + 15u));
    sdr(c.r[6], (c.r[5].w[0] + 8u));
    sdl(c.r[7], (c.r[5].w[0] + 23u));
    sdr(c.r[7], (c.r[5].w[0] + 16u));
    sdl(c.r[8], (c.r[5].w[0] + 31u));
    sdr(c.r[8], (c.r[5].w[0] + 24u));
    set32(c.r[3], c.r[3].w[0] + 32u);
    c.budget -= 21;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[5], c.r[5].w[0] + 32u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003E7280u | kUnwind; return; } goto L_003E7280; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[16].w[0] + 13136u)));  if (t) { goto L_003E731C; } }
    c.budget -= 1;
L_003E72E0:
    set32(c.r[2], c.r[3].w[0] + 64u);
    c.budget -= 1;
L_003E72E4:
    c.r[9].d[0] = ld64((c.r[3].w[0]));
    c.r[10].d[0] = ld64((c.r[3].w[0] + 8u));
    c.r[4].d[0] = ld64((c.r[3].w[0] + 16u));
    c.r[6].d[0] = ld64((c.r[3].w[0] + 24u));
    st64((c.r[5].w[0]), c.r[9].d[0]);
    st64((c.r[5].w[0] + 8u), c.r[10].d[0]);
    st64((c.r[5].w[0] + 16u), c.r[4].d[0]);
    st64((c.r[5].w[0] + 24u), c.r[6].d[0]);
    set32(c.r[3], c.r[3].w[0] + 32u);
    c.budget -= 13;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[5], c.r[5].w[0] + 32u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003E72E4u | kUnwind; return; } goto L_003E72E4; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 13136u)));
    c.budget -= 1;
L_003E731C:
    set32(c.r[4], 0u + 2048u);
    set32(c.r[7], ld32((c.r[3].w[0])));
    st32((c.r[5].w[0]), c.r[7].w[0]);
    st32((c.r[22].w[0] + 304u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[2].w[0] + 13140u)));
    st32((c.r[22].w[0] + 312u), c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] - 2048u);
    st32((c.r[22].w[0] + 308u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00450000u);
    c.budget -= 11;
L_003E7348:
    set32(c.r[18], c.r[3].w[0] + 13144u);
    set32(c.r[3], ld32((c.r[2].w[0] - 21828u)));
    set32(c.r[4], ld32((c.r[18].w[0])));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[29].w[0] + 40u), c.r[3].w[0]);  if (t) { goto L_003E7374; } }
    mmi::div(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { breakpoint(c, 0x003E7364u);  goto L_003E7368; }
L_003E7368:
    c.r[2].d[0] = c.hi.d[0];
    set32(c.r[2], c.r[4].w[0] - c.r[2].w[0]);
    st32((c.r[18].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_003E7374:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E737Cu); set32(c.r[4], ld32((c.r[23].w[0] + 36u)));  if (depth < kMaxDepth) unit_00B9(c, 214u, depth + 1u); else { c.pc = 0x003E69F0u; return; } if (c.pc != 0x003E737Cu) [[unlikely]] return; }
L_003E737C:
    set32(c.r[7], ld32((c.r[18].w[0])));
    set32(c.r[6], c.r[29].w[0] + 80u);
    set32(c.r[10], c.r[29].w[0] + 96u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[8], ld32((c.r[3].w[0] + 13148u)));
    set32(c.r[4], c.r[19].w[0] - 21896u);
    set32(c.r[3], ld32((c.r[5].w[0] + 13152u)));
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    c.r[6].d[0] = c.r[10].d[0] + 0ull;
    set32(c.r[10], ld32((c.r[29].w[0] + 184u)));
    set32(c.r[9], ld32((c.r[29].w[0] + 160u)));
    st32((c.r[29].w[0] + 4u), c.r[10].w[0]);
    st32((c.r[29].w[0] + 8u), c.r[7].w[0]);
    st32((c.r[29].w[0] + 12u), c.r[8].w[0]);
    st32((c.r[29].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[7], ld32((c.r[29].w[0] + 196u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 192u)));
    set32(c.r[8], ld32((c.r[29].w[0] + 200u)));
    set32(c.r[10], ld32((c.r[29].w[0] + 204u)));
    st32((c.r[29].w[0] + 56u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 44u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 48u), c.r[7].w[0]);
    st32((c.r[29].w[0] + 52u), c.r[8].w[0]);
    st32((c.r[29].w[0] + 60u), c.r[10].w[0]);
    c.budget -= 27;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E73E8u); st32((c.r[29].w[0] + 64u), c.r[9].w[0]);  if (depth < kMaxDepth) unit_00BD(c, 306u, depth + 1u); else { c.pc = 0x003F68D8u; return; } if (c.pc != 0x003E73E8u) [[unlikely]] return; }
L_003E73E8:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[30].d[0] != c.r[2].d[0];  if (t) { goto L_003E73FC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E73FCu); set32(c.r[4], c.r[20].w[0] - 21856u);  if (depth < kMaxDepth) unit_00BB(c, 501u, depth + 1u); else { c.pc = 0x003EF530u; return; } if (c.pc != 0x003E73FCu) [[unlikely]] return; }
L_003E73FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E7404u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_00BF(c, 10u, depth + 1u); else { c.pc = 0x003FC150u; return; } if (c.pc != 0x003E7404u) [[unlikely]] return; }
L_003E7404:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E7410u); c.r[4].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BF(c, 241u, depth + 1u); else { c.pc = 0x003FE0E8u; return; } if (c.pc != 0x003E7410u) [[unlikely]] return; }
L_003E7410:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != 0ull; c.r[5].sd[0] = static_cast<std::int32_t>(0x003F0000u);  if (t) { goto L_003E7430; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E7424u); set32(c.r[4], 0u - 305u);  if (depth < kMaxDepth) unit_00BA(c, 195u, depth + 1u); else { c.pc = 0x003E9720u; return; } if (c.pc != 0x003E7424u) [[unlikely]] return; }
L_003E7424:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[4].w[0] + 25960u);  if (t) { goto L_003E7458; } }
L_003E7430:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 26568u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E7440u); c.r[6].d[0] = c.r[22].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BD(c, 87u, depth + 1u); else { c.pc = 0x003F48F0u; return; } if (c.pc != 0x003E7440u) [[unlikely]] return; }
L_003E7440:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 212u)));  goto L_003E7468; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E7450u); set32(c.r[4], 0u - 303u);  if (depth < kMaxDepth) unit_00BA(c, 195u, depth + 1u); else { c.pc = 0x003E9720u; return; } if (c.pc != 0x003E7450u) [[unlikely]] return; }
L_003E7450:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[4], c.r[4].w[0] + 26008u);
    c.budget -= 2;
L_003E7458:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E7460u);  if (depth < kMaxDepth) unit_00BB(c, 314u, depth + 1u); else { c.pc = 0x003EE380u; return; } if (c.pc != 0x003E7460u) [[unlikely]] return; }
L_003E7460:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003E748C; } }
L_003E7468:
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    set32(c.r[6], 0u + 2048u);
    set32(c.r[7], 0u + 64u);
    st32((c.r[22].w[0] + 272u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 208u)));
    st32((c.r[22].w[0] + 276u), c.r[3].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E7488u); set32(c.r[5], ld32((c.r[29].w[0] + 188u)));  if (depth < kMaxDepth) unit_00B9(c, 275u, depth + 1u); else { c.pc = 0x003E74C0u; return; } if (c.pc != 0x003E7488u) [[unlikely]] return; }
L_003E7488:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_003E748C:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 224u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 232u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 240u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 248u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 256u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 264u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 272u));
    c.r[23].d[0] = ld64((c.r[29].w[0] + 280u));
    c.r[30].d[0] = ld64((c.r[29].w[0] + 288u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 296u));
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 304u);  c.pc = t; return; }
L_003E74C0:
    set32(c.r[2], c.r[4].w[0] + 188u);
    set32(c.r[6], c.r[6].w[0] - c.r[7].w[0]);
    set32(c.r[3], c.r[5].w[0] + c.r[7].w[0]);
    st32((c.r[4].w[0] + 220u), c.r[7].w[0]);
    st32((c.r[4].w[0] + 228u), 0u);
    st32((c.r[4].w[0] + 216u), c.r[5].w[0]);
    st32((c.r[4].w[0] + 224u), 0u);
    st32((c.r[4].w[0] + 212u), c.r[2].w[0]);
    st32((c.r[2].w[0] + 4u), c.r[6].w[0]);
    st32((c.r[2].w[0] + 8u), c.r[7].w[0]);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[2].w[0]), c.r[3].w[0]);  c.pc = t; return; }
L_003E74F0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[5], ld32((c.r[16].w[0] + 212u)));
    c.budget -= 10;
    if (c.r[5].d[0] != 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 28u)));  goto L_003E7540; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    set32(c.r[4], c.r[4].w[0] + 26048u);
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 9;
    { set32(c.r[29], c.r[29].w[0] + 48u);  [[clang::musttail]] return unit_00BB(c, 314u, depth); }
L_003E7540:
    set32(c.r[19], ld32((c.r[5].w[0] + 8u)));
    set32(c.r[18], c.r[3].w[0] + 4u);
    set32(c.r[2], ld32((c.r[5].w[0] + 4u)));
    mmi::mult(c, 0, c.r[18].w[0], c.r[19].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    c.r[2].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[17], ld32((c.r[5].w[0])));  if (t) { goto L_003E7580; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    set32(c.r[4], c.r[4].w[0] + 26104u);
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 9;
    { set32(c.r[29], c.r[29].w[0] + 48u);  [[clang::musttail]] return unit_00BB(c, 314u, depth); }
L_003E7580:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E7588u);  if (depth < kMaxDepth) unit_00BA(c, 171u, depth + 1u); else { c.pc = 0x003E9560u; return; } if (c.pc != 0x003E7588u) [[unlikely]] return; }
L_003E7588:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_003E75C0; }
    set32(c.r[4], ld32((c.r[16].w[0] + 64u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[7].d[0] = c.r[19].d[0] + 0ull;
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 11;
    { set32(c.r[29], c.r[29].w[0] + 48u);  [[clang::musttail]] return unit_00BD(c, 323u, depth); }
L_003E75C0:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003E75D8:
    c.r[8].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], c.r[8].w[0] + 200u);
    c.budget -= 6;
    { const bool t = c.r[5].d[0] != 0ull; set32(c.r[2], c.r[8].w[0] + 188u);  if (t) { goto L_003E7608; } }
    st32((c.r[3].w[0] + 8u), 0u);
    st32((c.r[8].w[0] + 212u), c.r[2].w[0]);
    st32((c.r[3].w[0]), 0u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 4u), 0u);  if (t) { goto L_003E7644; } }
    c.budget -= 1;
L_003E7608:
    set32(c.r[2], ld32((c.r[8].w[0] + 28u)));
    set32(c.r[2], c.r[2].w[0] + 4u);
    mmi::mult(c, 0, c.r[2].w[0], c.r[7].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.r[2].d[0] = c.r[6].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[2].d[0] == 0ull) { st32((c.r[3].w[0]), c.r[5].w[0]);  goto L_003E7638; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[4], c.r[4].w[0] + 26168u);
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00BB(c, 314u, depth); }
L_003E7638:
    st32((c.r[3].w[0] + 4u), c.r[6].w[0]);
    st32((c.r[3].w[0] + 8u), c.r[7].w[0]);
    st32((c.r[8].w[0] + 212u), c.r[3].w[0]);
    c.budget -= 3;
L_003E7644:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003E74F0u | kUnwind; return; } goto L_003E74F0; }
L_003E7650:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E7660u);  if (depth < kMaxDepth) unit_00BF(c, 280u, depth + 1u); else { c.pc = 0x003FE5D8u; return; } if (c.pc != 0x003E7660u) [[unlikely]] return; }
L_003E7660:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u - 306u);  if (t) { goto L_003E7688; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E7670u);  if (depth < kMaxDepth) unit_00BA(c, 195u, depth + 1u); else { c.pc = 0x003E9720u; return; } if (c.pc != 0x003E7670u) [[unlikely]] return; }
L_003E7670:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[4], c.r[4].w[0] + 26224u);
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00BB(c, 314u, depth); }
L_003E7688:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003E7698:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[5], 0u + 8u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    mmi::mult(c, 0, c.r[16].w[0], c.r[17].w[0]);
    c.r[16].d[0] = c.lo.d[0];
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[6].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    set32(c.r[18], ld32((c.r[4].w[0] + 64u)));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E76D0u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BF(c, 444u, depth + 1u); else { c.pc = 0x003FFF68u; return; } if (c.pc != 0x003E76D0u) [[unlikely]] return; }
L_003E76D0:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E76E0u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_00BF(c, 444u, depth + 1u); else { c.pc = 0x003FFF68u; return; } if (c.pc != 0x003E76E0u) [[unlikely]] return; }
L_003E76E0:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E76F0u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00BF(c, 444u, depth + 1u); else { c.pc = 0x003FFF68u; return; } if (c.pc != 0x003E76F0u) [[unlikely]] return; }
L_003E76F0:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[6], 0u + 4u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E7700u); set32(c.r[5], 0u + 23u);  if (depth < kMaxDepth) unit_00BF(c, 444u, depth + 1u); else { c.pc = 0x003FFF68u; return; } if (c.pc != 0x003E7700u) [[unlikely]] return; }
L_003E7700:
    set32(c.r[4], c.r[16].w[0] << 5);
    set32(c.r[4], c.r[4].w[0] - c.r[16].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[16].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E7718u); set32(c.r[4], c.r[4].w[0] << 3);  if (depth < kMaxDepth) unit_0007(c, 75u, depth + 1u); else { c.pc = 0x0011CEF8u; return; } if (c.pc != 0x003E7718u) [[unlikely]] return; }
L_003E7718:
    c.r[5].d[0] = 0ull | 65408ull;
    c.r[5].d[0] = c.r[5].d[0] << 46;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E7728u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 45u, depth + 1u); else { c.pc = 0x0011C8A0u; return; } if (c.pc != 0x003E7728u) [[unlikely]] return; }
L_003E7728:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E7734u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 78u, depth + 1u); else { c.pc = 0x0011CFB0u; return; } if (c.pc != 0x003E7734u) [[unlikely]] return; }
L_003E7734:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E7744u); c.r[17].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 75u, depth + 1u); else { c.pc = 0x0011CEF8u; return; } if (c.pc != 0x003E7744u) [[unlikely]] return; }
L_003E7744:
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E7754u); set32(c.r[16], c.r[16].w[0] - 1u);  if (depth < kMaxDepth) unit_0007(c, 71u, depth + 1u); else { c.pc = 0x0011CEA8u; return; } if (c.pc != 0x003E7754u) [[unlikely]] return; }
L_003E7754:
    set32(c.r[5], 0u + 45u);
    c.r[2].d[0] = 0ll < c.r[2].sd[0] ? 1ull : 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    if (c.r[2].d[0] != 0) c.r[17].d[0] = c.r[16].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E776Cu); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BF(c, 444u, depth + 1u); else { c.pc = 0x003FFF68u; return; } if (c.pc != 0x003E776Cu) [[unlikely]] return; }
L_003E776C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E777Cu); set32(c.r[5], 0u + 44u);  if (depth < kMaxDepth) unit_00BF(c, 444u, depth + 1u); else { c.pc = 0x003FFF68u; return; } if (c.pc != 0x003E777Cu) [[unlikely]] return; }
L_003E777C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E778Cu); set32(c.r[5], 0u + 42u);  if (depth < kMaxDepth) unit_00BF(c, 444u, depth + 1u); else { c.pc = 0x003FFF68u; return; } if (c.pc != 0x003E778Cu) [[unlikely]] return; }
L_003E778C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], 0u + 15u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E779Cu); set32(c.r[6], 0u + 2u);  if (depth < kMaxDepth) unit_00BF(c, 444u, depth + 1u); else { c.pc = 0x003FFF68u; return; } if (c.pc != 0x003E779Cu) [[unlikely]] return; }
L_003E779C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], 0u + 51u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E77ACu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00BF(c, 444u, depth + 1u); else { c.pc = 0x003FFF68u; return; } if (c.pc != 0x003E77ACu) [[unlikely]] return; }
L_003E77AC:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], 0u + 14u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E77BCu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00BF(c, 444u, depth + 1u); else { c.pc = 0x003FFF68u; return; } if (c.pc != 0x003E77BCu) [[unlikely]] return; }
L_003E77BC:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], 0u + 28u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E77CCu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00BF(c, 444u, depth + 1u); else { c.pc = 0x003FFF68u; return; } if (c.pc != 0x003E77CCu) [[unlikely]] return; }
L_003E77CC:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[5], 0u + 5u);
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[6].d[0] = 0ull + 0ull;
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 10;
    { set32(c.r[29], c.r[29].w[0] + 48u);  [[clang::musttail]] return unit_00BD(c, 311u, depth); }
L_003E77F8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[16], ld32((c.r[17].w[0] + 64u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E7818u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BF(c, 296u, depth + 1u); else { c.pc = 0x003FE758u; return; } if (c.pc != 0x003E7818u) [[unlikely]] return; }
L_003E7818:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x003F0000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 26568u);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003E7838; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[4].w[0] + 26256u);  if (t) { goto L_003E7858; } }
L_003E7838:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E7840u);  if (depth < kMaxDepth) unit_00BD(c, 87u, depth + 1u); else { c.pc = 0x003F48F0u; return; } if (c.pc != 0x003E7840u) [[unlikely]] return; }
L_003E7840:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003E7868; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E7850u); set32(c.r[4], 0u - 303u);  if (depth < kMaxDepth) unit_00BA(c, 195u, depth + 1u); else { c.pc = 0x003E9720u; return; } if (c.pc != 0x003E7850u) [[unlikely]] return; }
L_003E7850:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[4], c.r[4].w[0] + 26312u);
    c.budget -= 2;
L_003E7858:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E7860u);  if (depth < kMaxDepth) unit_00BB(c, 314u, depth + 1u); else { c.pc = 0x003EE380u; return; } if (c.pc != 0x003E7860u) [[unlikely]] return; }
L_003E7860:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_003E7874; } }
L_003E7868:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E7870u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B9(c, 276u, depth + 1u); else { c.pc = 0x003E74F0u; return; } if (c.pc != 0x003E7870u) [[unlikely]] return; }
L_003E7870:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003E7874:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003E7888:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[6], ld32((c.r[2].w[0] + 312u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 304u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 308u)));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 9;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003D1450u | kUnwind; return; } [[clang::musttail]] return unit_00B4(c, 157u, depth); }
L_003E78B0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 48u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[16].d[0]);
    st64((c.r[29].w[0] + 40u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 56u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 64u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 72u), c.r[21].d[0]);
    c.budget -= 10;
    { const bool t = c.r[18].d[0] != 0ull; st64((c.r[29].w[0] + 80u), c.r[31].d[0]);  if (t) { goto L_003E78E8; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[4].w[0] + 26368u);  if (t) { goto L_003E7984; } }
    c.budget -= 1;
L_003E78E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E78F0u);  if (depth < kMaxDepth) unit_00B9(c, 340u, depth + 1u); else { c.pc = 0x003E7CD0u; return; } if (c.pc != 0x003E78F0u) [[unlikely]] return; }
L_003E78F0:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003E7C00; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E7904u);  if (depth < kMaxDepth) unit_00BA(c, 140u, depth + 1u); else { c.pc = 0x003E92A8u; return; } if (c.pc != 0x003E7904u) [[unlikely]] return; }
L_003E7904:
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[16], c.r[2].w[0] + 104u);
    set32(c.r[17], c.r[2].w[0] + 4u);
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 8u);  if (t) { goto L_003E7950; } }
    c.r[3].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.budget -= 3;
L_003E7928:
    c.r[2].d[0] = c.r[4].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], c.r[3].w[0] + 528u);  if (t) { goto L_003E794C; } }
    c.r[16].d[0] = c.r[3].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 6;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], c.r[4].w[0] + 1u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003E7928u | kUnwind; return; } goto L_003E7928; }
L_003E794C:
    set32(c.r[2], 0u + 8u);
    c.budget -= 1;
L_003E7950:
    c.budget -= 2;
    if (c.r[4].d[0] != c.r[2].d[0]) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_003E7970; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E7960u); set32(c.r[4], 0u - 11u);  if (depth < kMaxDepth) unit_00BA(c, 195u, depth + 1u); else { c.pc = 0x003E9720u; return; } if (c.pc != 0x003E7960u) [[unlikely]] return; }
L_003E7960:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[4].w[0] + 26416u);  if (t) { goto L_003E7984; } }
    c.budget -= 1;
L_003E7970:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E7978u); set32(c.r[21], 0u - 1u);  if (depth < kMaxDepth) unit_00B9(c, 336u, depth + 1u); else { c.pc = 0x003E7C28u; return; } if (c.pc != 0x003E7978u) [[unlikely]] return; }
L_003E7978:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[21].d[0]; c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);  if (t) { goto L_003E7998; } }
    set32(c.r[4], c.r[4].w[0] + 26464u);
    c.budget -= 1;
L_003E7984:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E798Cu);  if (depth < kMaxDepth) unit_00BB(c, 314u, depth + 1u); else { c.pc = 0x003EE380u; return; } if (c.pc != 0x003E798Cu) [[unlikely]] return; }
L_003E798C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003E7C00; } }
    c.budget -= 1;
L_003E7998:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003E79AC; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E79ACu); set32(c.r[6], 0u + 528u);  if (depth < kMaxDepth) unit_0009(c, 49u, depth + 1u); else { c.pc = 0x00124ED8u; return; } if (c.pc != 0x003E79ACu) [[unlikely]] return; }
L_003E79AC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E79B8u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B9(c, 338u, depth + 1u); else { c.pc = 0x003E7C78u; return; } if (c.pc != 0x003E79B8u) [[unlikely]] return; }
L_003E79B8:
    ldl(c.r[2], (c.r[18].w[0] + 7u));
    ldr(c.r[2], (c.r[18].w[0]));
    ldl(c.r[3], (c.r[18].w[0] + 15u));
    ldr(c.r[3], (c.r[18].w[0] + 8u));
    ldl(c.r[4], (c.r[18].w[0] + 23u));
    ldr(c.r[4], (c.r[18].w[0] + 16u));
    ldl(c.r[5], (c.r[18].w[0] + 31u));
    ldr(c.r[5], (c.r[18].w[0] + 24u));
    sdl(c.r[2], (c.r[16].w[0] + 19u));
    sdr(c.r[2], (c.r[16].w[0] + 12u));
    sdl(c.r[3], (c.r[16].w[0] + 27u));
    sdr(c.r[3], (c.r[16].w[0] + 20u));
    sdl(c.r[4], (c.r[16].w[0] + 35u));
    sdr(c.r[4], (c.r[16].w[0] + 28u));
    sdl(c.r[5], (c.r[16].w[0] + 43u));
    sdr(c.r[5], (c.r[16].w[0] + 36u));
    ldl(c.r[2], (c.r[18].w[0] + 39u));
    ldr(c.r[2], (c.r[18].w[0] + 32u));
    ldl(c.r[3], (c.r[18].w[0] + 47u));
    ldr(c.r[3], (c.r[18].w[0] + 40u));
    sdl(c.r[2], (c.r[16].w[0] + 51u));
    sdr(c.r[2], (c.r[16].w[0] + 44u));
    sdl(c.r[3], (c.r[16].w[0] + 59u));
    sdr(c.r[3], (c.r[16].w[0] + 52u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 27;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E7A24u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B9(c, 241u, depth + 1u); else { c.pc = 0x003E6E40u; return; } if (c.pc != 0x003E7A24u) [[unlikely]] return; }
L_003E7A24:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[19].d[0] != 0ull; st32((c.r[16].w[0] + 64u), c.r[19].w[0]);  if (t) { goto L_003E7A40; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[4].w[0] + 26528u);  if (t) { goto L_003E7BD8; } }
    c.budget -= 1;
L_003E7A40:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E7A48u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B9(c, 276u, depth + 1u); else { c.pc = 0x003E74F0u; return; } if (c.pc != 0x003E7A48u) [[unlikely]] return; }
L_003E7A48:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 4u);
    set32(c.r[7], c.r[29].w[0] + 8u);
    set32(c.r[8], c.r[29].w[0] + 12u);
    set32(c.r[9], c.r[29].w[0] + 16u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E7A68u); set32(c.r[10], c.r[29].w[0] + 20u);  if (depth < kMaxDepth) unit_00B9(c, 209u, depth + 1u); else { c.pc = 0x003E67D0u; return; } if (c.pc != 0x003E7A68u) [[unlikely]] return; }
L_003E7A68:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[17].w[0] + 4u)));
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E7A7Cu); set32(c.r[7], ld32((c.r[17].w[0] + 8u)));  if (depth < kMaxDepth) unit_00B9(c, 282u, depth + 1u); else { c.pc = 0x003E7698u; return; } if (c.pc != 0x003E7A7Cu) [[unlikely]] return; }
L_003E7A7C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E7A84u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B9(c, 305u, depth + 1u); else { c.pc = 0x003E7888u; return; } if (c.pc != 0x003E7A84u) [[unlikely]] return; }
L_003E7A84:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[16].w[0] + 300u), c.r[2].w[0]);  if (t) { goto L_003E7A98; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[4].w[0] + 26568u);  if (t) { goto L_003E7BD8; } }
L_003E7A98:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E7AA4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00B4(c, 124u, depth + 1u); else { c.pc = 0x003D0F08u; return; } if (c.pc != 0x003E7AA4u) [[unlikely]] return; }
L_003E7AA4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[16].w[0] + 332u), c.r[2].w[0]);  if (t) { goto L_003E7AB8; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[4].w[0] + 26608u);  if (t) { goto L_003E7BD8; } }
L_003E7AB8:
    set32(c.r[2], ld32((c.r[29].w[0])));
    set32(c.r[20], 0u + 1u);
    st32((c.r[16].w[0] + 60u), c.r[20].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00450000u);
    st32((c.r[16].w[0] + 88u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] - 22184u);
    st32((c.r[16].w[0] + 104u), 0u);
    set32(c.r[17], c.r[16].w[0] + 72u);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[18].w[0] + 32u)));
    set32(c.r[5], 0u + 3u);
    st32((c.r[16].w[0] + 8u), 0u);
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E7AF8u); st32((c.r[16].w[0] + 80u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00C0(c, 29u, depth + 1u); else { c.pc = 0x00400520u; return; } if (c.pc != 0x003E7AF8u) [[unlikely]] return; }
L_003E7AF8:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { st32((c.r[17].w[0]), 0u);  goto L_003E7B00; }
L_003E7B00:
    st32((c.r[16].w[0] + 108u), c.r[20].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    st8((c.r[16].w[0] + 112u), static_cast<std::uint8_t>(0u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st8((c.r[16].w[0] + 113u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 114u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 115u), static_cast<std::uint8_t>(0u));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E7B24u); st32((c.r[16].w[0] + 92u), 0u);  if (depth < kMaxDepth) unit_00BB(c, 432u, depth + 1u); else { c.pc = 0x003EEEE8u; return; } if (c.pc != 0x003E7B24u) [[unlikely]] return; }
L_003E7B24:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E7B30u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00BB(c, 434u, depth + 1u); else { c.pc = 0x003EEEF8u; return; } if (c.pc != 0x003E7B30u) [[unlikely]] return; }
L_003E7B30:
    st32((c.r[16].w[0] + 84u), c.r[20].w[0]);
    st32((c.r[16].w[0] + 132u), 0u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E7B40u); set32(c.r[4], ld32((c.r[16].w[0] + 300u)));  if (depth < kMaxDepth) unit_00BB(c, 476u, depth + 1u); else { c.pc = 0x003EF1F0u; return; } if (c.pc != 0x003E7B40u) [[unlikely]] return; }
L_003E7B40:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[16].w[0] + 68u), c.r[2].w[0]);  if (t) { goto L_003E7BE0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E7B50u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BA(c, 293u, depth + 1u); else { c.pc = 0x003EA1E0u; return; } if (c.pc != 0x003E7B50u) [[unlikely]] return; }
L_003E7B50:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E7B58u); set32(c.r[4], ld32((c.r[16].w[0] + 300u)));  if (depth < kMaxDepth) unit_00B3(c, 255u, depth + 1u); else { c.pc = 0x003CDF10u; return; } if (c.pc != 0x003E7B58u) [[unlikely]] return; }
L_003E7B58:
    st32((c.r[16].w[0] + 116u), 0u);
    st32((c.r[16].w[0] + 76u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E7B6Cu); set32(c.r[5], ld32((c.r[16].w[0] + 68u)));  if (depth < kMaxDepth) unit_00B3(c, 266u, depth + 1u); else { c.pc = 0x003CE068u; return; } if (c.pc != 0x003E7B6Cu) [[unlikely]] return; }
L_003E7B6C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E7B74u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B9(c, 343u, depth + 1u); else { c.pc = 0x003E7D38u; return; } if (c.pc != 0x003E7B74u) [[unlikely]] return; }
L_003E7B74:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[21].d[0];  if (t) { goto L_003E7BE0; } }
    set32(c.r[7], ld32((c.r[18].w[0] + 12u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 172u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 176u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E7B90u); set32(c.r[6], ld32((c.r[18].w[0] + 8u)));  if (depth < kMaxDepth) unit_00BA(c, 486u, depth + 1u); else { c.pc = 0x003EB790u; return; } if (c.pc != 0x003E7B90u) [[unlikely]] return; }
L_003E7B90:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { st32((c.r[16].w[0] + 168u), c.r[2].w[0]);  goto L_003E7BA8; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[4].w[0] + 26648u);  if (t) { goto L_003E7BD8; } }
    c.budget -= 1;
L_003E7BA8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E7BB4u); set32(c.r[5], ld32((c.r[16].w[0] + 44u)));  if (depth < kMaxDepth) unit_00BB(c, 11u, depth + 1u); else { c.pc = 0x003EC118u; return; } if (c.pc != 0x003E7BB4u) [[unlikely]] return; }
L_003E7BB4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E7BBCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BB(c, 46u, depth + 1u); else { c.pc = 0x003EC518u; return; } if (c.pc != 0x003E7BBCu) [[unlikely]] return; }
L_003E7BBC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E7BC8u); st32((c.r[16].w[0] + 232u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00BB(c, 53u, depth + 1u); else { c.pc = 0x003EC5A8u; return; } if (c.pc != 0x003E7BC8u) [[unlikely]] return; }
L_003E7BC8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003E7BF0; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[4], c.r[4].w[0] + 26680u);
    c.budget -= 2;
L_003E7BD8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E7BE0u);  if (depth < kMaxDepth) unit_00BB(c, 314u, depth + 1u); else { c.pc = 0x003EE380u; return; } if (c.pc != 0x003E7BE0u) [[unlikely]] return; }
L_003E7BE0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E7BE8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B9(c, 350u, depth + 1u); else { c.pc = 0x003E7E00u; return; } if (c.pc != 0x003E7BE8u) [[unlikely]] return; }
L_003E7BE8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003E7C00; } }
L_003E7BF0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E7BF8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BB(c, 56u, depth + 1u); else { c.pc = 0x003EC608u; return; } if (c.pc != 0x003E7BF8u) [[unlikely]] return; }
L_003E7BF8:
    st32((c.r[16].w[0] + 4u), c.r[20].w[0]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 2;
L_003E7C00:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 56u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 72u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_003E7C28:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E7C3Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BA(c, 140u, depth + 1u); else { c.pc = 0x003E92A8u; return; } if (c.pc != 0x003E7C3Cu) [[unlikely]] return; }
L_003E7C3C:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 24u)));
    set32(c.r[6], 0u - 1u);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_003E7C64; } }
    set32(c.r[3], ld32((c.r[5].w[0] + 40u)));
    c.r[4].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[5].w[0] + 44u)));
    if (c.r[3].d[0] != 0) c.r[4].d[0] = 0ull;
    if (c.r[2].d[0] == 0) c.r[4].d[0] = c.r[6].d[0];
    c.budget -= 5;
L_003E7C64:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003E7C78:
    set32(c.r[3], ld32((c.r[5].w[0] + 24u)));
    set32(c.r[2], c.r[4].w[0] + 344u);
    set32(c.r[6], ld32((c.r[5].w[0] + 28u)));
    set32(c.r[7], c.r[4].w[0] + 488u);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    set32(c.r[8], 0u + 31u);
    st32((c.r[2].w[0] + 4u), c.r[6].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0] + 24u)));
    st32((c.r[2].w[0] + 12u), 0u);
    st32((c.r[2].w[0] + 8u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 360u), 0u);
    c.budget -= 12;
L_003E7CA8:
    set32(c.r[8], c.r[8].w[0] - 1u);
    st32((c.r[7].w[0]), 0u);
    c.budget -= 7;
    { const bool t = c.r[8].sd[0] >= 0; set32(c.r[7], c.r[7].w[0] - 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003E7CA8u | kUnwind; return; } goto L_003E7CA8; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003E7CD0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[3], 0u + 2u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; set32(c.r[4], 0u + 1u);  if (t) { goto L_003E7D00; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E7CFCu); set32(c.r[4], c.r[4].w[0] + 26720u);  if (depth < kMaxDepth) unit_00BB(c, 314u, depth + 1u); else { c.pc = 0x003EE380u; return; } if (c.pc != 0x003E7CFCu) [[unlikely]] return; }
L_003E7CFC:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003E7D00:
    set32(c.r[2], ld32((c.r[16].w[0] + 36u)));
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(3ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_003E7D24; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E7D1Cu); set32(c.r[4], c.r[4].w[0] + 26768u);  if (depth < kMaxDepth) unit_00BB(c, 314u, depth + 1u); else { c.pc = 0x003EE380u; return; } if (c.pc != 0x003E7D1Cu) [[unlikely]] return; }
L_003E7D1C:
    c.r[4].d[0] = 0ull + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 2;
L_003E7D24:
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003E7D38:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    set32(c.r[17], c.r[16].w[0] + 12u);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 8u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E7D60u); set32(c.r[5], ld32((c.r[17].w[0] + 12u)));  if (depth < kMaxDepth) unit_00BA(c, 485u, depth + 1u); else { c.pc = 0x003EB788u; return; } if (c.pc != 0x003E7D60u) [[unlikely]] return; }
L_003E7D60:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E7D70u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BA(c, 10u, depth + 1u); else { c.pc = 0x003E81D0u; return; } if (c.pc != 0x003E7D70u) [[unlikely]] return; }
L_003E7D70:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[4].w[0] + 26808u);  if (t) { goto L_003E7DB0; } }
    st32((c.r[16].w[0] + 172u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E7D8Cu); st32((c.r[16].w[0] + 176u), c.r[18].w[0]);  if (depth < kMaxDepth) unit_00BB(c, 45u, depth + 1u); else { c.pc = 0x003EC4F0u; return; } if (c.pc != 0x003E7D8Cu) [[unlikely]] return; }
L_003E7D8C:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003E7DD8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E7DA0u); c.r[5].sd[0] = static_cast<std::int32_t>(0x00020000u);  if (depth < kMaxDepth) unit_00BA(c, 10u, depth + 1u); else { c.pc = 0x003E81D0u; return; } if (c.pc != 0x003E7DA0u) [[unlikely]] return; }
L_003E7DA0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[4], c.r[4].w[0] + 26848u);  if (t) { goto L_003E7DC8; } }
L_003E7DB0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E7DB8u);  if (depth < kMaxDepth) unit_00BB(c, 314u, depth + 1u); else { c.pc = 0x003EE380u; return; } if (c.pc != 0x003E7DB8u) [[unlikely]] return; }
L_003E7DB8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E7DC0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BA(c, 26u, depth + 1u); else { c.pc = 0x003E8370u; return; } if (c.pc != 0x003E7DC0u) [[unlikely]] return; }
L_003E7DC0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_003E7DE4; } }
L_003E7DC8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00020000u);
    st32((c.r[16].w[0] + 236u), c.r[3].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 240u), c.r[2].w[0]);  if (t) { goto L_003E7DE0; } }
L_003E7DD8:
    st32((c.r[16].w[0] + 240u), 0u);
    st32((c.r[16].w[0] + 236u), 0u);
    c.budget -= 2;
L_003E7DE0:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003E7DE4:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003E7E00:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 5;
    { const bool t = c.r[16].d[0] == 0ull; st64((c.r[29].w[0] + 8u), c.r[31].d[0]);  if (t) { goto L_003E7EF8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E7E1Cu);  if (depth < kMaxDepth) unit_00BA(c, 267u, depth + 1u); else { c.pc = 0x003E9F20u; return; } if (c.pc != 0x003E7E1Cu) [[unlikely]] return; }
L_003E7E1C:
    st32((c.r[16].w[0] + 4u), 0u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E7E28u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BB(c, 51u, depth + 1u); else { c.pc = 0x003EC578u; return; } if (c.pc != 0x003E7E28u) [[unlikely]] return; }
L_003E7E28:
    set32(c.r[4], ld32((c.r[16].w[0] + 168u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 76u)));  goto L_003E7E40; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E7E3Cu);  if (depth < kMaxDepth) unit_00BA(c, 487u, depth + 1u); else { c.pc = 0x003EB7A8u; return; } if (c.pc != 0x003E7E3Cu) [[unlikely]] return; }
L_003E7E3C:
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 1;
L_003E7E40:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 68u)));  goto L_003E7E54; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E7E50u);  if (depth < kMaxDepth) unit_00B3(c, 264u, depth + 1u); else { c.pc = 0x003CE018u; return; } if (c.pc != 0x003E7E50u) [[unlikely]] return; }
L_003E7E50:
    set32(c.r[4], ld32((c.r[16].w[0] + 68u)));
    c.budget -= 1;
L_003E7E54:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 300u)));  goto L_003E7E68; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E7E64u);  if (depth < kMaxDepth) unit_00BB(c, 477u, depth + 1u); else { c.pc = 0x003EF208u; return; } if (c.pc != 0x003E7E64u) [[unlikely]] return; }
L_003E7E64:
    set32(c.r[4], ld32((c.r[16].w[0] + 300u)));
    c.budget -= 1;
L_003E7E68:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 332u)));  goto L_003E7E84; }
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003E7E80u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003E7E80u) [[unlikely]] return; }
L_003E7E80:
    set32(c.r[4], ld32((c.r[16].w[0] + 332u)));
    c.budget -= 1;
L_003E7E84:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 64u)));  goto L_003E7EA0; }
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003E7E9Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003E7E9Cu) [[unlikely]] return; }
L_003E7E9C:
    set32(c.r[4], ld32((c.r[16].w[0] + 64u)));
    c.budget -= 1;
L_003E7EA0:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003E7EB0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E7EB0u);  if (depth < kMaxDepth) unit_00B9(c, 279u, depth + 1u); else { c.pc = 0x003E7650u; return; } if (c.pc != 0x003E7EB0u) [[unlikely]] return; }
L_003E7EB0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E7EB8u); set32(c.r[4], c.r[16].w[0] + 492u);  if (depth < kMaxDepth) unit_00BB(c, 272u, depth + 1u); else { c.pc = 0x003EDFA0u; return; } if (c.pc != 0x003E7EB8u) [[unlikely]] return; }
L_003E7EB8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E7EC0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BA(c, 26u, depth + 1u); else { c.pc = 0x003E8370u; return; } if (c.pc != 0x003E7EC0u) [[unlikely]] return; }
L_003E7EC0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E7EC8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BA(c, 31u, depth + 1u); else { c.pc = 0x003E83F0u; return; } if (c.pc != 0x003E7EC8u) [[unlikely]] return; }
L_003E7EC8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);  if (t) { goto L_003E7ED8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E7ED8u); set32(c.r[4], c.r[4].w[0] + 26888u);  if (depth < kMaxDepth) unit_00BB(c, 314u, depth + 1u); else { c.pc = 0x003EE380u; return; } if (c.pc != 0x003E7ED8u) [[unlikely]] return; }
L_003E7ED8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E7EE8u); set32(c.r[6], 0u + 528u);  if (depth < kMaxDepth) unit_0009(c, 49u, depth + 1u); else { c.pc = 0x00124ED8u; return; } if (c.pc != 0x003E7EE8u) [[unlikely]] return; }
L_003E7EE8:
    st32((c.r[16].w[0] + 4u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00450000u);
    set32(c.r[2], c.r[2].w[0] - 22184u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 4;
L_003E7EF8:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003E7F08:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 104u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 96u), c.r[16].d[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 112u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 120u), c.r[19].d[0]);
    c.budget -= 10;
    { const bool t = c.r[17].d[0] == 0ull; st64((c.r[29].w[0] + 128u), c.r[31].d[0]);  if (t) { goto L_003E7F38; } }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != 0ull;  if (t) { goto L_003E7F50; } }
L_003E7F38:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E7F44u); set32(c.r[4], c.r[4].w[0] + 26912u);  if (depth < kMaxDepth) unit_00BB(c, 314u, depth + 1u); else { c.pc = 0x003EE380u; return; } if (c.pc != 0x003E7F44u) [[unlikely]] return; }
L_003E7F44:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0] + 96u));  if (t) { [[clang::musttail]] return unit_00BA(c, 5u, depth); } }
    c.budget -= 1;
L_003E7F50:
    c.budget -= 2;
    if (c.r[16].sd[0] > 0) { c.r[4].d[0] = c.r[29].d[0] + 0ull;  goto L_003E7F70; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E7F64u); set32(c.r[4], c.r[4].w[0] + 26952u);  if (depth < kMaxDepth) unit_00BB(c, 314u, depth + 1u); else { c.pc = 0x003EE380u; return; } if (c.pc != 0x003E7F64u) [[unlikely]] return; }
L_003E7F64:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0] + 96u));  if (t) { [[clang::musttail]] return unit_00BA(c, 5u, depth); } }
    c.budget -= 1;
L_003E7F70:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E7F7Cu); set32(c.r[6], 0u + 32u);  if (depth < kMaxDepth) unit_0009(c, 49u, depth + 1u); else { c.pc = 0x00124ED8u; return; } if (c.pc != 0x003E7F7Cu) [[unlikely]] return; }
L_003E7F7C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[19], c.r[29].w[0] + 32u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E7F90u); c.r[6].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BC(c, 321u, depth + 1u); else { c.pc = 0x003F2E18u; return; } if (c.pc != 0x003E7F90u) [[unlikely]] return; }
L_003E7F90:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 32u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 33u)));  if (t) { goto L_003E7FA4; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003E7FF0; } }
L_003E7FA4:
    ldl(c.r[2], (c.r[29].w[0] + 7u));
    ldr(c.r[2], (c.r[29].w[0]));
    ldl(c.r[3], (c.r[29].w[0] + 15u));
    ldr(c.r[3], (c.r[29].w[0] + 8u));
    ldl(c.r[4], (c.r[29].w[0] + 23u));
    ldr(c.r[4], (c.r[29].w[0] + 16u));
    ldl(c.r[5], (c.r[29].w[0] + 31u));
    ldr(c.r[5], (c.r[29].w[0] + 24u));
    sdl(c.r[2], (c.r[18].w[0] + 7u));
    sdr(c.r[2], (c.r[18].w[0]));
    sdl(c.r[3], (c.r[18].w[0] + 15u));
    sdr(c.r[3], (c.r[18].w[0] + 8u));
    sdl(c.r[4], (c.r[18].w[0] + 23u));
    sdr(c.r[4], (c.r[18].w[0] + 16u));
    sdl(c.r[5], (c.r[18].w[0] + 31u));
    sdr(c.r[5], (c.r[18].w[0] + 24u));
    c.budget -= 18;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0]), 0u);  if (t) { [[clang::musttail]] return unit_00BA(c, 4u, depth); } }
    c.budget -= 1;
L_003E7FF0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E7FF8u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BA(c, 6u, depth + 1u); else { c.pc = 0x003E80A0u; return; } if (c.pc != 0x003E7FF8u) [[unlikely]] return; }
L_003E7FF8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[29].w[0] + 56u)));
    c.budget -= 2;
    [[clang::musttail]] return unit_00BA(c, 1u, depth);
}

}
