#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0039[4096] = {
    1, 2, 3, 4, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 11, 0, 0, 12, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0,
    0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0,
    0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0,
    0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0,
    0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 41, 0,
    0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 45, 0, 0,
    0, 46, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    54, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 57, 0, 0, 0, 0, 58, 0, 0, 0,
    0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0,
    63, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 67,
    0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 70, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 0, 77, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 79,
    0, 0, 80, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 82, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 87, 0, 88, 0, 0, 0, 0, 0, 0, 89, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0,
    0, 93, 0, 0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    99, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0,
    0, 0, 108, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 109, 0, 0, 110, 0, 111, 0, 0, 0, 0, 0, 0,
    112, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 117, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 119, 0, 0, 120, 0, 0, 121, 0, 0, 122, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 123,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 130, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0,
    0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0,
    136, 0, 0, 0, 137, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 140, 0, 141, 0,
    142, 0, 0, 0, 143, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 0, 147, 0, 0, 148, 0, 0, 0,
    0, 0, 0, 0, 149, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 153, 0, 0, 0, 154, 0, 0, 0, 155, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 157,
    0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 0, 0, 0, 161, 0,
    0, 0, 162, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 164, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 166,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 167, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 168, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 171, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 173, 0, 0, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 176, 0, 0,
    0, 0, 0, 0, 0, 0, 177, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 180, 0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 183, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 185, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 186, 0, 0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 189, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 193, 0,
    0, 194, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 197, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0,
    199, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0, 0,
    0, 0, 203, 0, 0, 204, 0, 0, 0, 0, 0, 0, 0, 205, 0, 0, 0, 0, 0, 0, 206, 0, 0, 0, 207, 0, 0, 0, 0, 0, 0, 208,
    0, 0, 0, 0, 0, 209, 0, 0, 0, 0, 0, 210, 0, 0, 0, 211, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 212, 0, 0, 0,
    0, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 215, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 216, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 217, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 218, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 219, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 220, 0, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 222, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 223, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 224, 0, 0, 0, 0, 225, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 226,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 227, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 228, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 229, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 230, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 231, 0, 0, 0, 0, 232, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 233, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 234, 0, 0, 0, 0, 0, 0, 0, 235, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 236, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 237, 0, 0, 0, 0, 0, 238, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 239, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 240, 0, 0, 0, 0, 0, 0, 241, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 242, 0, 0, 0, 0, 0, 0, 243, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 244, 0, 0, 0, 0, 0, 0, 245, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 246, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 247, 0, 0, 0, 0, 0, 0, 248, 0, 0, 0, 0, 0, 0, 249, 0, 0, 0, 0, 0, 0, 250, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 251, 0, 0, 0, 0, 0, 252, 0, 0, 0, 0, 253, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 254, 0, 0, 0, 0, 0, 255, 0,
    0, 256, 0, 0, 0, 257, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 258, 0, 0, 0, 259, 0, 0,
    0, 0, 260, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 262, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 263, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 264, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 265, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 266, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 267, 0, 0, 0, 268, 0, 0, 0, 0, 269, 0, 0, 0, 0, 270, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 271, 0, 0, 0, 0, 272, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 273, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 274, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 275, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 276, 0, 0, 0, 0, 0, 0, 0, 277, 0, 0, 0, 0, 278, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 279, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 280, 0, 0, 0, 0, 0, 0,
    0, 0, 281, 0, 0, 0, 0, 0, 0, 0, 0, 0, 282, 0, 0, 0, 0, 283, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 284, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_0039(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_001E4000;
    case 2u: goto L_001E4004;
    case 3u: goto L_001E4008;
    case 4u: goto L_001E400C;
    case 5u: goto L_001E401C;
    case 6u: goto L_001E404C;
    case 7u: goto L_001E4050;
    case 8u: goto L_001E4080;
    case 9u: goto L_001E40AC;
    case 10u: goto L_001E413C;
    case 11u: goto L_001E4148;
    case 12u: goto L_001E4154;
    case 13u: goto L_001E4160;
    case 14u: goto L_001E4190;
    case 15u: goto L_001E4230;
    case 16u: goto L_001E4258;
    case 17u: goto L_001E42C0;
    case 18u: goto L_001E42E0;
    case 19u: goto L_001E4318;
    case 20u: goto L_001E434C;
    case 21u: goto L_001E4358;
    case 22u: goto L_001E43F0;
    case 23u: goto L_001E4404;
    case 24u: goto L_001E4490;
    case 25u: goto L_001E44B0;
    case 26u: goto L_001E44D0;
    case 27u: goto L_001E4510;
    case 28u: goto L_001E4530;
    case 29u: goto L_001E4550;
    case 30u: goto L_001E4570;
    case 31u: goto L_001E4584;
    case 32u: goto L_001E45B4;
    case 33u: goto L_001E45D0;
    case 34u: goto L_001E45E0;
    case 35u: goto L_001E4610;
    case 36u: goto L_001E4644;
    case 37u: goto L_001E4670;
    case 38u: goto L_001E468C;
    case 39u: goto L_001E46E8;
    case 40u: goto L_001E470C;
    case 41u: goto L_001E4878;
    case 42u: goto L_001E4894;
    case 43u: goto L_001E48A8;
    case 44u: goto L_001E48E0;
    case 45u: goto L_001E48F4;
    case 46u: goto L_001E4904;
    case 47u: goto L_001E4918;
    case 48u: goto L_001E4964;
    case 49u: goto L_001E4990;
    case 50u: goto L_001E49E0;
    case 51u: goto L_001E4A80;
    case 52u: goto L_001E4AAC;
    case 53u: goto L_001E4AC8;
    case 54u: goto L_001E4B00;
    case 55u: goto L_001E4B0C;
    case 56u: goto L_001E4B4C;
    case 57u: goto L_001E4B5C;
    case 58u: goto L_001E4B70;
    case 59u: goto L_001E4B88;
    case 60u: goto L_001E4BB4;
    case 61u: goto L_001E4BC4;
    case 62u: goto L_001E4BE8;
    case 63u: goto L_001E4C00;
    case 64u: goto L_001E4C20;
    case 65u: goto L_001E4C2C;
    case 66u: goto L_001E4C50;
    case 67u: goto L_001E4C7C;
    case 68u: goto L_001E4C94;
    case 69u: goto L_001E4CBC;
    case 70u: goto L_001E4CC4;
    case 71u: goto L_001E4CE0;
    case 72u: goto L_001E4D10;
    case 73u: goto L_001E4DEC;
    case 74u: goto L_001E4EE8;
    case 75u: goto L_001E4F2C;
    case 76u: goto L_001E4F54;
    case 77u: goto L_001E4F78;
    case 78u: goto L_001E4FD0;
    case 79u: goto L_001E4FFC;
    case 80u: goto L_001E5008;
    case 81u: goto L_001E503C;
    case 82u: goto L_001E5048;
    case 83u: goto L_001E50B8;
    case 84u: goto L_001E50EC;
    case 85u: goto L_001E5120;
    case 86u: goto L_001E5138;
    case 87u: goto L_001E5154;
    case 88u: goto L_001E515C;
    case 89u: goto L_001E5178;
    case 90u: goto L_001E51B0;
    case 91u: goto L_001E5238;
    case 92u: goto L_001E5260;
    case 93u: goto L_001E5284;
    case 94u: goto L_001E52A8;
    case 95u: goto L_001E52C0;
    case 96u: goto L_001E52E0;
    case 97u: goto L_001E53B0;
    case 98u: goto L_001E53D8;
    case 99u: goto L_001E5400;
    case 100u: goto L_001E5420;
    case 101u: goto L_001E5430;
    case 102u: goto L_001E5470;
    case 103u: goto L_001E54BC;
    case 104u: goto L_001E54DC;
    case 105u: goto L_001E5594;
    case 106u: goto L_001E55C0;
    case 107u: goto L_001E55E8;
    case 108u: goto L_001E5608;
    case 109u: goto L_001E5650;
    case 110u: goto L_001E565C;
    case 111u: goto L_001E5664;
    case 112u: goto L_001E5680;
    case 113u: goto L_001E56AC;
    case 114u: goto L_001E56E0;
    case 115u: goto L_001E5710;
    case 116u: goto L_001E575C;
    case 117u: goto L_001E5770;
    case 118u: goto L_001E57F4;
    case 119u: goto L_001E588C;
    case 120u: goto L_001E5898;
    case 121u: goto L_001E58A4;
    case 122u: goto L_001E58B0;
    case 123u: goto L_001E58FC;
    case 124u: goto L_001E5940;
    case 125u: goto L_001E596C;
    case 126u: goto L_001E5A30;
    case 127u: goto L_001E5A54;
    case 128u: goto L_001E5AB4;
    case 129u: goto L_001E5AC4;
    case 130u: goto L_001E5B14;
    case 131u: goto L_001E5B24;
    case 132u: goto L_001E5B74;
    case 133u: goto L_001E5B98;
    case 134u: goto L_001E5BC0;
    case 135u: goto L_001E5BF0;
    case 136u: goto L_001E5C00;
    case 137u: goto L_001E5C10;
    case 138u: goto L_001E5C20;
    case 139u: goto L_001E5C64;
    case 140u: goto L_001E5C70;
    case 141u: goto L_001E5C78;
    case 142u: goto L_001E5C80;
    case 143u: goto L_001E5C90;
    case 144u: goto L_001E5CA0;
    case 145u: goto L_001E5CC8;
    case 146u: goto L_001E5D44;
    case 147u: goto L_001E5D64;
    case 148u: goto L_001E5D70;
    case 149u: goto L_001E5D90;
    case 150u: goto L_001E5DA4;
    case 151u: goto L_001E5E28;
    case 152u: goto L_001E5E40;
    case 153u: goto L_001E5E88;
    case 154u: goto L_001E5E98;
    case 155u: goto L_001E5EA8;
    case 156u: goto L_001E5EBC;
    case 157u: goto L_001E5EFC;
    case 158u: goto L_001E5F14;
    case 159u: goto L_001E5F40;
    case 160u: goto L_001E5F50;
    case 161u: goto L_001E5F78;
    case 162u: goto L_001E5F88;
    case 163u: goto L_001E5FB8;
    case 164u: goto L_001E5FCC;
    case 165u: goto L_001E5FE0;
    case 166u: goto L_001E5FFC;
    case 167u: goto L_001E6104;
    case 168u: goto L_001E6130;
    case 169u: goto L_001E6140;
    case 170u: goto L_001E6164;
    case 171u: goto L_001E6178;
    case 172u: goto L_001E61D0;
    case 173u: goto L_001E6208;
    case 174u: goto L_001E622C;
    case 175u: goto L_001E6260;
    case 176u: goto L_001E6274;
    case 177u: goto L_001E6298;
    case 178u: goto L_001E62A8;
    case 179u: goto L_001E62E0;
    case 180u: goto L_001E6308;
    case 181u: goto L_001E6318;
    case 182u: goto L_001E636C;
    case 183u: goto L_001E642C;
    case 184u: goto L_001E64A8;
    case 185u: goto L_001E64E8;
    case 186u: goto L_001E6510;
    case 187u: goto L_001E6528;
    case 188u: goto L_001E6560;
    case 189u: goto L_001E6578;
    case 190u: goto L_001E662C;
    case 191u: goto L_001E66B0;
    case 192u: goto L_001E66DC;
    case 193u: goto L_001E66F8;
    case 194u: goto L_001E6704;
    case 195u: goto L_001E6724;
    case 196u: goto L_001E6734;
    case 197u: goto L_001E6750;
    case 198u: goto L_001E6768;
    case 199u: goto L_001E6780;
    case 200u: goto L_001E6790;
    case 201u: goto L_001E67C0;
    case 202u: goto L_001E67EC;
    case 203u: goto L_001E6808;
    case 204u: goto L_001E6814;
    case 205u: goto L_001E6834;
    case 206u: goto L_001E6850;
    case 207u: goto L_001E6860;
    case 208u: goto L_001E687C;
    case 209u: goto L_001E6894;
    case 210u: goto L_001E68AC;
    case 211u: goto L_001E68BC;
    case 212u: goto L_001E68F0;
    case 213u: goto L_001E6914;
    case 214u: goto L_001E6934;
    case 215u: goto L_001E6978;
    case 216u: goto L_001E69F0;
    case 217u: goto L_001E6A30;
    case 218u: goto L_001E6B74;
    case 219u: goto L_001E6BB4;
    case 220u: goto L_001E6C14;
    case 221u: goto L_001E6C2C;
    case 222u: goto L_001E6CB0;
    case 223u: goto L_001E6CF0;
    case 224u: goto L_001E6D50;
    case 225u: goto L_001E6D64;
    case 226u: goto L_001E6DFC;
    case 227u: goto L_001E6E3C;
    case 228u: goto L_001E6E98;
    case 229u: goto L_001E6F0C;
    case 230u: goto L_001E6F4C;
    case 231u: goto L_001E6FC0;
    case 232u: goto L_001E6FD4;
    case 233u: goto L_001E7010;
    case 234u: goto L_001E70A0;
    case 235u: goto L_001E70C0;
    case 236u: goto L_001E70F0;
    case 237u: goto L_001E7138;
    case 238u: goto L_001E7150;
    case 239u: goto L_001E72C8;
    case 240u: goto L_001E7328;
    case 241u: goto L_001E7344;
    case 242u: goto L_001E738C;
    case 243u: goto L_001E73A8;
    case 244u: goto L_001E7450;
    case 245u: goto L_001E746C;
    case 246u: goto L_001E75DC;
    case 247u: goto L_001E7604;
    case 248u: goto L_001E7620;
    case 249u: goto L_001E763C;
    case 250u: goto L_001E7658;
    case 251u: goto L_001E7688;
    case 252u: goto L_001E76A0;
    case 253u: goto L_001E76B4;
    case 254u: goto L_001E76E0;
    case 255u: goto L_001E76F8;
    case 256u: goto L_001E7704;
    case 257u: goto L_001E7714;
    case 258u: goto L_001E7764;
    case 259u: goto L_001E7774;
    case 260u: goto L_001E7788;
    case 261u: goto L_001E77D0;
    case 262u: goto L_001E77F8;
    case 263u: goto L_001E795C;
    case 264u: goto L_001E79B8;
    case 265u: goto L_001E79F4;
    case 266u: goto L_001E7A24;
    case 267u: goto L_001E7AB4;
    case 268u: goto L_001E7AC4;
    case 269u: goto L_001E7AD8;
    case 270u: goto L_001E7AEC;
    case 271u: goto L_001E7B48;
    case 272u: goto L_001E7B5C;
    case 273u: goto L_001E7B94;
    case 274u: goto L_001E7C08;
    case 275u: goto L_001E7C4C;
    case 276u: goto L_001E7CAC;
    case 277u: goto L_001E7CCC;
    case 278u: goto L_001E7CE0;
    case 279u: goto L_001E7D44;
    case 280u: goto L_001E7DE4;
    case 281u: goto L_001E7E08;
    case 282u: goto L_001E7E30;
    case 283u: goto L_001E7E44;
    case 284u: goto L_001E7E70;
    default: bad_entry(c, 0x001E4000u); return;
    }
L_001E4000:
    c.budget -= 1;
L_001E4004:
    set32(c.r[23], c.r[23].w[0] + 1u);
    c.budget -= 1;
L_001E4008:
    c.r[2].d[0] = c.r[23].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 1;
L_001E400C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[23].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001E2DD0u | kUnwind; return; } [[clang::musttail]] return unit_0038(c, 212u, depth); } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001E404C; } }
L_001E401C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[1].w[0] + 31448u), 0u);  if (t) { goto L_001E4048; } }
    set32(c.r[3], ld32((c.r[19].w[0] + 684u)));
    set32(c.r[2], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], c.r[3].w[0] - 1u);
    st32((c.r[19].w[0] + 684u), c.r[3].w[0]);
    st32((c.r[1].w[0] + 31448u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st32((c.r[1].w[0] + 31440u), 0u);
    c.budget -= 8;
L_001E4048:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_001E404C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));
    c.budget -= 1;
L_001E4050:
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 240u);  c.pc = t; return; }
L_001E4080:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[6], 0u + 1204u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[2].d[0] = ld8((c.r[5].w[0] + 368u));
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E40ACu); st8((c.r[4].w[0] + 368u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0039(c, 33u, depth + 1u); else { c.pc = 0x001E45D0u; return; } if (c.pc != 0x001E40ACu) [[unlikely]] return; }
L_001E40AC:
    st8((c.r[16].w[0] + 371u), static_cast<std::uint8_t>(0u));
    set32(c.r[8], 0u + 1u);
    st8((c.r[17].w[0] + 371u), static_cast<std::uint8_t>(c.r[8].w[0]));
    set32(c.r[5], 0u - 65u);
    c.r[3].d[0] = ld8((c.r[16].w[0] + 394u));
    c.r[6].d[0] = 0ull + static_cast<std::uint64_t>(64ll);
    set32(c.r[4], 0u - 2u);
    c.r[7].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.r[3].d[0] = c.r[3].d[0] & c.r[5].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[6].d[0];
    st8((c.r[16].w[0] + 394u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[17].w[0] + 394u));
    c.r[3].d[0] = c.r[3].d[0] & c.r[5].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[6].d[0];
    st8((c.r[17].w[0] + 394u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 393u));
    c.r[3].d[0] = c.r[3].d[0] & c.r[4].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[7].d[0];
    st8((c.r[16].w[0] + 393u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[17].w[0] + 393u));
    c.r[3].d[0] = c.r[3].d[0] & c.r[4].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[7].d[0];
    st8((c.r[17].w[0] + 393u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[17].w[0] + 740u)));
    c.budget -= 26;
    { const bool t = c.r[3].d[0] != c.r[8].d[0];  if (t) { goto L_001E4170; } }
    c.r[4].d[0] = ld8((c.r[17].w[0] + 898u));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 898u));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001E4170; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 468u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 468u)));
    st32((c.r[17].w[0] + 468u), c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E413Cu); st32((c.r[16].w[0] + 468u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_002E(c, 112u, depth + 1u); else { c.pc = 0x001B9B80u; return; } if (c.pc != 0x001E413Cu) [[unlikely]] return; }
L_001E413C:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E4148u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 112u, depth + 1u); else { c.pc = 0x001B9B80u; return; } if (c.pc != 0x001E4148u) [[unlikely]] return; }
L_001E4148:
    c.r[5].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E4154u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 110u, depth + 1u); else { c.pc = 0x001B9B30u; return; } if (c.pc != 0x001E4154u) [[unlikely]] return; }
L_001E4154:
    c.r[5].d[0] = 0ull < c.r[18].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E4160u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 110u, depth + 1u); else { c.pc = 0x001B9B30u; return; } if (c.pc != 0x001E4160u) [[unlikely]] return; }
L_001E4160:
    set32(c.r[4], ld32((c.r[17].w[0] + 736u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 736u)));
    st32((c.r[17].w[0] + 736u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 736u), c.r[4].w[0]);
    c.budget -= 4;
L_001E4170:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001E4190:
    set32(c.r[3], ld32((c.r[4].w[0] + 240u)));
    c.f[0] = 0u;
    c.f[2] = ld32((c.r[3].w[0]));
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.f[3] = c.f[2] ^ fp::kSign;  if (t) { goto L_001E41AC; } }
    c.f[3] = c.f[2];
    c.budget -= 1;
L_001E41AC:
    c.f[1] = ld32((c.r[3].w[0] + 8u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.f[0] = c.f[1] ^ fp::kSign;  if (t) { goto L_001E41C8; } }
    c.f[0] = c.f[1];
    c.budget -= 1;
L_001E41C8:
    fpu_compare(c, fp::key(c.f[3]) <= fp::key(c.f[0]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001E41FC; } }
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[3], 0u + 3u);  if (t) { goto L_001E41F4; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 744u), c.r[3].w[0]);  if (t) { goto L_001E421C; } }
L_001E41F4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 744u), c.r[3].w[0]);  if (t) { goto L_001E421C; } }
L_001E41FC:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[3], 0u + 2u);  if (t) { goto L_001E4218; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 744u), 0u);  if (t) { goto L_001E421C; } }
L_001E4218:
    st32((c.r[4].w[0] + 744u), c.r[3].w[0]);
    c.budget -= 1;
L_001E421C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001E4230:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    ld128((c.r[4].w[0] + 224u) & ~15u, c.r[2]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[2]);
    c.r[2].d[0] = ld8((c.r[4].w[0] + 368u));
    set32(c.r[5], 0u - c.r[2].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E4258u); set32(c.r[4], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_0038(c, 90u, depth + 1u); else { c.pc = 0x001E14E0u; return; } if (c.pc != 0x001E4258u) [[unlikely]] return; }
L_001E4258:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 368u));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001E4290; } }
    c.f[2] = ld32((c.r[29].w[0] + 32u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC1B00000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[1] = c.r[2].w[0];
    c.f[0] = ld32((c.r[1].w[0] + 21640u));
    c.f[1] = fp::sub(c.f[1], c.f[2]);
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.f[0] = fp::add(c.f[2], c.f[0]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 32u), c.f[0]);  if (t) { goto L_001E42B4; } }
L_001E4290:
    c.f[2] = ld32((c.r[29].w[0] + 32u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41B00000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[1] = c.r[2].w[0];
    c.f[0] = ld32((c.r[1].w[0] + 21640u));
    c.f[1] = fp::sub(c.f[1], c.f[2]);
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.f[0] = fp::add(c.f[2], c.f[0]);
    st32((c.r[29].w[0] + 32u), c.f[0]);
    c.budget -= 9;
L_001E42B4:
    c.r[5].d[0] = ld8((c.r[16].w[0] + 368u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E42C0u); set32(c.r[4], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_0038(c, 90u, depth + 1u); else { c.pc = 0x001E14E0u; return; } if (c.pc != 0x001E42C0u) [[unlikely]] return; }
L_001E42C0:
    c.f[0] = ld32((c.r[29].w[0] + 32u));
    st32((c.r[16].w[0] + 224u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 40u));
    st32((c.r[16].w[0] + 232u), c.f[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001E42E0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    set32(c.r[2], 0u + 10000u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    c.f[0] = c.r[2].w[0];
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    set32(c.r[18], 0u - 1u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    c.f[20] = fp::cvt_s_w(c.f[0]);
    c.budget -= 14;
L_001E4318:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], c.r[17].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 28352u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[16], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00490000u);  if (t) { goto L_001E4418; } }
    set32(c.r[2], 0u + 30u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 8896u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001E4370; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E434Cu); set32(c.r[4], ld32((c.r[19].w[0] + 912u)));  if (depth < kMaxDepth) unit_004A(c, 4u, depth + 1u); else { c.pc = 0x00228080u; return; } if (c.pc != 0x001E434Cu) [[unlikely]] return; }
L_001E434C:
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E4358u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_004A(c, 6u, depth + 1u); else { c.pc = 0x002280C0u; return; } if (c.pc != 0x001E4358u) [[unlikely]] return; }
L_001E4358:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == c.r[2].d[0];  if (t) { goto L_001E4370; } }
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == 0ull;  if (t) { goto L_001E4370; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001E4418; } }
L_001E4370:
    c.r[3].d[0] = ld8((c.r[19].w[0] + 370u));
    c.r[2].d[0] = ld8((c.r[16].w[0] + 370u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001E4418; } }
    c.f[2] = ld32((c.r[19].w[0] + 228u));
    c.f[1] = ld32((c.r[16].w[0] + 228u));
    c.f[0] = 0u;
    c.f[2] = fp::sub(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.f[1] = c.f[2] ^ fp::kSign;  if (t) { goto L_001E43A4; } }
    c.f[1] = c.f[2];
    c.budget -= 1;
L_001E43A4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001E43E8; } }
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[2].sd[0] = static_cast<std::int32_t>(0x41880000u);  if (t) { goto L_001E4418; } }
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001E4418; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_001E43E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E43F0u);  if (depth < kMaxDepth) unit_0038(c, 106u, depth + 1u); else { c.pc = 0x001E1950u; return; } if (c.pc != 0x001E43F0u) [[unlikely]] return; }
L_001E43F0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001E4418; } }
    set32(c.r[4], ld32((c.r[19].w[0] + 240u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E4404u); set32(c.r[5], c.r[16].w[0] + 224u);  if (depth < kMaxDepth) unit_0011(c, 14u, depth + 1u); else { c.pc = 0x001443A0u; return; } if (c.pc != 0x001E4404u) [[unlikely]] return; }
L_001E4404:
    fpu_compare(c, fp::key(c.f[20]) <= fp::key(c.f[0]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001E4418; } }
    c.f[20] = c.f[0];
    c.r[18].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 2;
L_001E4418:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].sd[0] < 64ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001E4318u | kUnwind; return; } goto L_001E4318; } }
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] != c.r[2].d[0]; c.r[3].sd[0] = static_cast<std::int32_t>(0x00520000u);  if (t) { goto L_001E443C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));  if (t) { goto L_001E4468; } }
L_001E443C:
    set32(c.r[4], c.r[18].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + 28352u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.f[0] = ld32((c.r[3].w[0] + 736u));
    fpu_compare(c, fp::key(c.f[20]) <= fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001E4460; } }
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001E4460:
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.budget -= 2;
L_001E4468:
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_001E4490:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41700000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x001E42E0u | kUnwind; return; } goto L_001E42E0; }
L_001E44B0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43500000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] + 436u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E44D0u); c.r[5].d[0] = c.r[2].d[0] | 21071ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x001E44D0u) [[unlikely]] return; }
L_001E44D0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_001E44DC; } }
    set32(c.r[3], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 1;
L_001E44DC:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[2], c.r[16].w[0] << 1);  if (t) { goto L_001E44EC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001E44F4; } }
L_001E44EC:
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld16((c.r[2].w[0] + 48u));
    c.budget -= 2;
L_001E44F4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001E4510:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E4530u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0039(c, 25u, depth + 1u); else { c.pc = 0x001E44B0u; return; } if (c.pc != 0x001E4530u) [[unlikely]] return; }
L_001E4530:
    c.r[5].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_001E4540; } }
    set32(c.r[5], 0u + 1700u);
    c.budget -= 1;
L_001E4540:
    c.r[8].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E4550u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0030(c, 19u, depth + 1u); else { c.pc = 0x001C02C0u; return; } if (c.pc != 0x001E4550u) [[unlikely]] return; }
L_001E4550:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001E4570:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E4584u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0034(c, 93u, depth + 1u); else { c.pc = 0x001D0C90u; return; } if (c.pc != 0x001E4584u) [[unlikely]] return; }
L_001E4584:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001E45A0; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 168u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_001E45B4; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_001E45A0:
    set32(c.r[5], 0u + 50u);
    set32(c.r[6], 0u + 2u);
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E45B4u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0030(c, 19u, depth + 1u); else { c.pc = 0x001C02C0u; return; } if (c.pc != 0x001E45B4u) [[unlikely]] return; }
L_001E45B4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001E45D0:
    c.budget -= 2;
    { c.r[7].d[0] = 0ull + 0ull;  goto L_001E45E0; }
L_001E45E0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E4610u); c.r[16].d[0] = c.r[7].d[0] + 0ull;  if (depth < kMaxDepth) unit_003F(c, 312u, depth + 1u); else { c.pc = 0x001FF210u; return; } if (c.pc != 0x001E4610u) [[unlikely]] return; }
L_001E4610:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull; set32(c.r[3], 0u + 3u);  if (t) { goto L_001E4650; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);  if (t) { goto L_001E4650; } }
    set32(c.r[3], c.r[2].w[0] << 2);
    set32(c.r[4], ld32((c.r[1].w[0] + 28288u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[20], c.r[2].w[0] + 200u);
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E4644u); c.r[6].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_001A(c, 50u, depth + 1u); else { c.pc = 0x00168C20u; return; } if (c.pc != 0x001E4644u) [[unlikely]] return; }
L_001E4644:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001E4650; } }
    c.r[16].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 1;
L_001E4650:
    st32((c.r[19].w[0] + 60u), c.r[18].w[0]);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E4670u); st32((c.r[18].w[0] + 60u), c.r[19].w[0]);  if (depth < kMaxDepth) unit_0030(c, 19u, depth + 1u); else { c.pc = 0x001C02C0u; return; } if (c.pc != 0x001E4670u) [[unlikely]] return; }
L_001E4670:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[7], 0u + 1u);
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E468Cu); st32((c.r[19].w[0] + 60u), c.r[18].w[0]);  if (depth < kMaxDepth) unit_0030(c, 19u, depth + 1u); else { c.pc = 0x001C02C0u; return; } if (c.pc != 0x001E468Cu) [[unlikely]] return; }
L_001E468C:
    st32((c.r[18].w[0] + 60u), c.r[19].w[0]);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[19].w[0] + 912u)));
    st32((c.r[18].w[0] + 988u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 920u)));
    st32((c.r[18].w[0] + 992u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 924u)));
    st32((c.r[18].w[0] + 996u), c.r[2].w[0]);
    c.r[2].d[0] = ld16((c.r[19].w[0] + 928u));
    st16((c.r[18].w[0] + 1000u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[18].w[0] + 912u)));
    st32((c.r[19].w[0] + 988u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 920u)));
    st32((c.r[19].w[0] + 992u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 924u)));
    st32((c.r[19].w[0] + 996u), c.r[2].w[0]);
    c.r[2].d[0] = ld16((c.r[18].w[0] + 928u));
    c.budget -= 19;
    { const bool t = c.r[19].d[0] == 0ull; st16((c.r[19].w[0] + 1000u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_001E46DC; } }
    set32(c.r[4], c.r[4].w[0] + 436u);
    c.budget -= 1;
L_001E46DC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43500000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E46E8u); c.r[5].d[0] = c.r[2].d[0] | 21071ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x001E46E8u) [[unlikely]] return; }
L_001E46E8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_001E46F4; } }
    set32(c.r[16], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 1;
L_001E46F4:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_001E4700; } }
    set32(c.r[4], c.r[4].w[0] + 436u);
    c.budget -= 1;
L_001E4700:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43500000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E470Cu); c.r[5].d[0] = c.r[2].d[0] | 21071ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x001E470Cu) [[unlikely]] return; }
L_001E470C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_001E4718; } }
    set32(c.r[6], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 1;
L_001E4718:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 396u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], c.r[6].w[0] + 40u);  if (t) { goto L_001E4728; } }
    set32(c.r[5], c.r[6].w[0] + 32u);
    c.budget -= 1;
L_001E4728:
    c.r[2].d[0] = ld8((c.r[5].w[0]));
    st8((c.r[19].w[0] + 1012u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[5].w[0] + 1u));
    st8((c.r[19].w[0] + 1013u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[5].w[0] + 2u));
    st8((c.r[19].w[0] + 1014u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[5].w[0] + 3u));
    st8((c.r[19].w[0] + 1015u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[5].w[0] + 4u));
    st8((c.r[19].w[0] + 1016u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[4].d[0] = ld8((c.r[5].w[0] + 5u));
    c.r[3].d[0] = ld8((c.r[5].w[0] + 6u));
    c.r[2].d[0] = ld8((c.r[5].w[0] + 7u));
    st8((c.r[19].w[0] + 1017u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[19].w[0] + 1018u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[19].w[0] + 1019u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 396u)));
    c.budget -= 19;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001E477C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], c.r[6].w[0] + 32u);  if (t) { goto L_001E4780; } }
L_001E477C:
    set32(c.r[5], c.r[6].w[0] + 40u);
    c.budget -= 1;
L_001E4780:
    c.r[2].d[0] = ld8((c.r[5].w[0]));
    st8((c.r[19].w[0] + 1004u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[5].w[0] + 1u));
    st8((c.r[19].w[0] + 1005u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[5].w[0] + 2u));
    st8((c.r[19].w[0] + 1006u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[5].w[0] + 3u));
    st8((c.r[19].w[0] + 1007u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[5].w[0] + 4u));
    st8((c.r[19].w[0] + 1008u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[4].d[0] = ld8((c.r[5].w[0] + 5u));
    c.r[3].d[0] = ld8((c.r[5].w[0] + 6u));
    c.r[2].d[0] = ld8((c.r[5].w[0] + 7u));
    st8((c.r[19].w[0] + 1009u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[19].w[0] + 1010u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[19].w[0] + 1011u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 396u)));
    c.budget -= 19;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001E47D4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], c.r[16].w[0] + 32u);  if (t) { goto L_001E47D8; } }
L_001E47D4:
    set32(c.r[5], c.r[16].w[0] + 40u);
    c.budget -= 1;
L_001E47D8:
    c.r[2].d[0] = ld8((c.r[5].w[0]));
    st8((c.r[18].w[0] + 1012u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[5].w[0] + 1u));
    st8((c.r[18].w[0] + 1013u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[5].w[0] + 2u));
    st8((c.r[18].w[0] + 1014u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[5].w[0] + 3u));
    st8((c.r[18].w[0] + 1015u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[5].w[0] + 4u));
    st8((c.r[18].w[0] + 1016u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[4].d[0] = ld8((c.r[5].w[0] + 5u));
    c.r[3].d[0] = ld8((c.r[5].w[0] + 6u));
    c.r[2].d[0] = ld8((c.r[5].w[0] + 7u));
    st8((c.r[18].w[0] + 1017u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[18].w[0] + 1018u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[18].w[0] + 1019u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 396u)));
    c.budget -= 19;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[7], c.r[16].w[0] + 40u);  if (t) { goto L_001E4828; } }
    set32(c.r[7], c.r[16].w[0] + 32u);
    c.budget -= 1;
L_001E4828:
    c.r[3].d[0] = ld8((c.r[7].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x53590000u);
    c.r[5].d[0] = c.r[2].d[0] | 20035ull;
    set32(c.r[4], c.r[19].w[0] + 436u);
    st8((c.r[18].w[0] + 1004u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[2].d[0] = ld8((c.r[7].w[0] + 1u));
    st8((c.r[18].w[0] + 1005u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[7].w[0] + 2u));
    st8((c.r[18].w[0] + 1006u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[7].w[0] + 3u));
    st8((c.r[18].w[0] + 1007u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[7].w[0] + 4u));
    st8((c.r[18].w[0] + 1008u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[6].d[0] = ld8((c.r[7].w[0] + 5u));
    c.r[3].d[0] = ld8((c.r[7].w[0] + 6u));
    c.r[2].d[0] = ld8((c.r[7].w[0] + 7u));
    st8((c.r[18].w[0] + 1009u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[18].w[0] + 1010u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E4878u); st8((c.r[18].w[0] + 1011u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x001E4878u) [[unlikely]] return; }
L_001E4878:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_001E4884; } }
    set32(c.r[16], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 1;
L_001E4884:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x53590000u);
    set32(c.r[4], c.r[18].w[0] + 436u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E4894u); c.r[5].d[0] = c.r[2].d[0] | 20035ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x001E4894u) [[unlikely]] return; }
L_001E4894:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_001E48A0; } }
    set32(c.r[5], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 1;
L_001E48A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E48A8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0033(c, 96u, depth + 1u); else { c.pc = 0x001CD3E0u; return; } if (c.pc != 0x001E48A8u) [[unlikely]] return; }
L_001E48A8:
    c.r[7].d[0] = ld8((c.r[19].w[0] + 392u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43410000u);
    set32(c.r[3], 0u - 5u);
    c.r[5].d[0] = c.r[2].d[0] | 21569ull;
    c.r[6].d[0] = 0ull + static_cast<std::uint64_t>(4ll);
    set32(c.r[4], c.r[19].w[0] + 436u);
    c.r[2].d[0] = c.r[7].d[0] & c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[6].d[0];
    st8((c.r[19].w[0] + 392u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[18].w[0] + 392u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[6].d[0];
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E48E0u); st8((c.r[18].w[0] + 392u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x001E48E0u) [[unlikely]] return; }
L_001E48E0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_001E48EC; } }
    set32(c.r[4], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 1;
L_001E48EC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E48F4u);  if (depth < kMaxDepth) unit_0031(c, 202u, depth + 1u); else { c.pc = 0x001C6F20u; return; } if (c.pc != 0x001E48F4u) [[unlikely]] return; }
L_001E48F4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43410000u);
    set32(c.r[4], c.r[18].w[0] + 436u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E4904u); c.r[5].d[0] = c.r[2].d[0] | 21569ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x001E4904u) [[unlikely]] return; }
L_001E4904:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_001E4910; } }
    set32(c.r[4], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 1;
L_001E4910:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E4918u);  if (depth < kMaxDepth) unit_0031(c, 202u, depth + 1u); else { c.pc = 0x001C6F20u; return; } if (c.pc != 0x001E4918u) [[unlikely]] return; }
L_001E4918:
    c.r[2].d[0] = ld8((c.r[19].w[0] + 393u));
    set32(c.r[3], 0u - 3u);
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[4].d[0];
    st8((c.r[19].w[0] + 393u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[18].w[0] + 393u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[4].d[0];
    c.budget -= 11;
    { const bool t = c.r[18].d[0] == 0ull; st8((c.r[18].w[0] + 393u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_001E4948; } }
    set32(c.r[18], c.r[18].w[0] + 416u);
    c.budget -= 1;
L_001E4948:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull; c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_001E4958; } }
    set32(c.r[19], c.r[19].w[0] + 416u);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 2;
L_001E4958:
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E4964u); set32(c.r[4], 0u + 4u);  if (depth < kMaxDepth) unit_000F(c, 237u, depth + 1u); else { c.pc = 0x0013E1B0u; return; } if (c.pc != 0x001E4964u) [[unlikely]] return; }
L_001E4964:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_001E4990:
    c.r[3].d[0] = c.r[4].d[0] & 65535ull;
    c.r[2].d[0] = c.r[3].d[0] & 16384ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_001E49A4; } }
    c.r[4].d[0] = c.r[4].d[0] | 1ull;
    c.budget -= 1;
L_001E49A4:
    c.r[2].d[0] = c.r[3].d[0] & 4096ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = c.r[3].d[0] & 32768ull;  if (t) { goto L_001E49B4; } }
    c.r[4].d[0] = c.r[4].d[0] | 4ull;
    c.budget -= 1;
L_001E49B4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001E49C0; } }
    c.r[4].d[0] = c.r[4].d[0] | 2ull;
    c.budget -= 1;
L_001E49C0:
    c.r[2].d[0] = c.r[3].d[0] & 8192ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);  if (t) { goto L_001E49D0; } }
    c.r[4].d[0] = c.r[4].d[0] | 8ull;
    c.budget -= 1;
L_001E49D0:
    set32(c.r[2], c.r[2].w[0] - 28272u);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));  c.pc = t; return; }
L_001E49E0:
    set32(c.r[3], ld32((c.r[4].w[0] + 944u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);  if (t) { goto L_001E49F8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E4A70; } }
L_001E49F8:
    set32(c.r[2], c.r[3].w[0] << 9);
    c.f[2] = ld32((c.r[1].w[0] + 21688u));
    c.f[3] = ld32((c.r[4].w[0] + 212u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[1] = ld32((c.r[1].w[0] + 21696u));
    set32(c.r[4], c.r[2].w[0] + 256u);
    c.f[2] = fp::add(c.f[2], c.f[3]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::mul(c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 14;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001E4A40; } }
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[3], c.f[1]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[3].d[0] & 65535ull;  if (t) { goto L_001E4A5C; } }
L_001E4A40:
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[3], c.f[1]);
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.r[2].d[0] = c.r[3].d[0] & 65535ull;
    c.budget -= 7;
L_001E4A5C:
    c.r[2].d[0] = c.r[2].d[0] & 4095ull;
    set32(c.r[2], c.r[4].w[0] - c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] + 4096u);
    c.r[2].d[0] = c.r[2].d[0] & 4095ull;
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 9));
    c.budget -= 5;
L_001E4A70:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001E4A80:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_001E4AA0; } }
    set32(c.r[4], c.r[4].w[0] + 436u);
    c.budget -= 1;
L_001E4AA0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x53410000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E4AACu); c.r[5].d[0] = c.r[2].d[0] | 21057ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x001E4AACu) [[unlikely]] return; }
L_001E4AAC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_001E4AB8; } }
    set32(c.r[4], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 1;
L_001E4AB8:
    set32(c.r[2], 0u + 10000u);
    c.f[0] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E4AC8u); c.f[12] = fp::cvt_s_w(c.f[0]);  if (depth < kMaxDepth) unit_0030(c, 165u, depth + 1u); else { c.pc = 0x001C3DA0u; return; } if (c.pc != 0x001E4AC8u) [[unlikely]] return; }
L_001E4AC8:
    set32(c.r[4], ld32((c.r[17].w[0] + 944u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; set32(c.r[5], 0u + 88u);  if (t) { goto L_001E4ADC; } }
    set32(c.r[5], 0u + 89u);
    c.budget -= 1;
L_001E4ADC:
    set32(c.r[3], ld32((c.r[17].w[0] + 164u)));
    set32(c.r[2], 0u + 51u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u - 1u);  if (t) { goto L_001E4AF8; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; set32(c.r[5], 0u + 90u);  if (t) { goto L_001E4AF8; } }
    set32(c.r[5], 0u + 91u);
    c.budget -= 1;
L_001E4AF8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E4B00u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 25u, depth + 1u); else { c.pc = 0x001E44B0u; return; } if (c.pc != 0x001E4B00u) [[unlikely]] return; }
L_001E4B00:
    c.r[16].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E4B0Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0034(c, 175u, depth + 1u); else { c.pc = 0x001D2340u; return; } if (c.pc != 0x001E4B0Cu) [[unlikely]] return; }
L_001E4B0C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001E4B28; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 944u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[16], 0u + 3398u);  if (t) { goto L_001E4B28; } }
    set32(c.r[16], 0u + 3425u);
    c.budget -= 1;
L_001E4B28:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 585u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001E4B9C; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 984u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001E4B9C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E4B4Cu);  if (depth < kMaxDepth) unit_0034(c, 109u, depth + 1u); else { c.pc = 0x001D0F00u; return; } if (c.pc != 0x001E4B4Cu) [[unlikely]] return; }
L_001E4B4C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001E4B9C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E4B5Cu);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x001E4B5Cu) [[unlikely]] return; }
L_001E4B5C:
    c.r[2].d[0] = ld8((c.r[2].w[0] + 9u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_001E4B9C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E4B70u); set32(c.r[5], 0u + 8u);  if (depth < kMaxDepth) unit_0039(c, 25u, depth + 1u); else { c.pc = 0x001E44B0u; return; } if (c.pc != 0x001E4B70u) [[unlikely]] return; }
L_001E4B70:
    c.r[3].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[2], 0u + 6274u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_001E4B98; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E4B88u); set32(c.r[5], 0u + 9u);  if (depth < kMaxDepth) unit_0039(c, 25u, depth + 1u); else { c.pc = 0x001E44B0u; return; } if (c.pc != 0x001E4B88u) [[unlikely]] return; }
L_001E4B88:
    c.r[3].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[2], 0u + 6274u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001E4B9C; } }
L_001E4B98:
    set32(c.r[16], 0u + 3428u);
    c.budget -= 1;
L_001E4B9C:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 585u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_001E4C24; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E4BB4u);  if (depth < kMaxDepth) unit_0034(c, 209u, depth + 1u); else { c.pc = 0x001D2D80u; return; } if (c.pc != 0x001E4BB4u) [[unlikely]] return; }
L_001E4BB4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001E4C24; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E4BC4u); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 585u)));  if (depth < kMaxDepth) unit_0035(c, 43u, depth + 1u); else { c.pc = 0x001D5040u; return; } if (c.pc != 0x001E4BC4u) [[unlikely]] return; }
L_001E4BC4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u - 1u);  if (t) { goto L_001E4BD0; } }
    set32(c.r[4], ld32((c.r[2].w[0] + 164u)));
    c.budget -= 1;
L_001E4BD0:
    set32(c.r[3], 0u + 152u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001E4BF0; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E4BE8u); set32(c.r[5], 0u + 74u);  if (depth < kMaxDepth) unit_0039(c, 25u, depth + 1u); else { c.pc = 0x001E44B0u; return; } if (c.pc != 0x001E4BE8u) [[unlikely]] return; }
L_001E4BE8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] & 65535ull;  if (t) { goto L_001E4C24; } }
L_001E4BF0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001E4C24; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E4C00u);  if (depth < kMaxDepth) unit_0034(c, 103u, depth + 1u); else { c.pc = 0x001D0E60u; return; } if (c.pc != 0x001E4C00u) [[unlikely]] return; }
L_001E4C00:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001E4C24; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 944u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[2].d[0] = ~(c.r[2].d[0] | 0ull);
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E4C20u); set32(c.r[5], c.r[2].w[0] + 70u);  if (depth < kMaxDepth) unit_0039(c, 25u, depth + 1u); else { c.pc = 0x001E44B0u; return; } if (c.pc != 0x001E4C20u) [[unlikely]] return; }
L_001E4C20:
    c.r[16].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 1;
L_001E4C24:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E4C2Cu);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x001E4C2Cu) [[unlikely]] return; }
L_001E4C2C:
    c.r[2].d[0] = ld8((c.r[2].w[0] + 4u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001E4CD8; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 164u)));
    set32(c.r[2], 0u + 51u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_001E4CD4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E4C50u);  if (depth < kMaxDepth) unit_0034(c, 209u, depth + 1u); else { c.pc = 0x001D2D80u; return; } if (c.pc != 0x001E4C50u) [[unlikely]] return; }
L_001E4C50:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001E4CD4; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 585u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001E4CD4; } }
    c.r[2].d[0] = ld8((c.r[17].w[0] + 370u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_001E4CD4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E4C7Cu);  if (depth < kMaxDepth) unit_0038(c, 89u, depth + 1u); else { c.pc = 0x001E1460u; return; } if (c.pc != 0x001E4C7Cu) [[unlikely]] return; }
L_001E4C7C:
    c.r[18].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[4], c.r[29].w[0] + 64u);
    ld128((c.r[17].w[0] + 224u) & ~15u, c.r[2]);
    set32(c.r[5], 0u - c.r[18].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E4C94u); st128((c.r[4].w[0]) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_0038(c, 90u, depth + 1u); else { c.pc = 0x001E14E0u; return; } if (c.pc != 0x001E4C94u) [[unlikely]] return; }
L_001E4C94:
    c.f[1] = ld32((c.r[29].w[0] + 72u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC1600000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_001E4CD4; } }
    set32(c.r[5], 0u + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E4CBCu); st8((c.r[17].w[0] + 368u), static_cast<std::uint8_t>(c.r[18].w[0]));  if (depth < kMaxDepth) unit_0039(c, 25u, depth + 1u); else { c.pc = 0x001E44B0u; return; } if (c.pc != 0x001E4CBCu) [[unlikely]] return; }
L_001E4CBC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E4CC4u); c.r[16].d[0] = c.r[2].d[0] & 65535ull;  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x001E4CC4u) [[unlikely]] return; }
L_001E4CC4:
    c.r[2].d[0] = ld8((c.r[2].w[0] + 20u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001E4CD4; } }
    set32(c.r[16], 0u + 3700u);
    c.budget -= 1;
L_001E4CD4:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_001E4CD8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E4CE0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0030(c, 17u, depth + 1u); else { c.pc = 0x001C02A0u; return; } if (c.pc != 0x001E4CE0u) [[unlikely]] return; }
L_001E4CE0:
    c.r[5].d[0] = ld8((c.r[17].w[0] + 393u));
    set32(c.r[3], 0u - 129u);
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(128ll);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st8((c.r[17].w[0] + 393u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001E4D10:
    set32(c.r[29], c.r[29].w[0] - 144u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0xC1DC0000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41DC0000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[2], 0u + 10u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 128u), c.r[5].w[0]);
    st32((c.r[29].w[0] + 132u), c.r[5].w[0]);
    st32((c.r[29].w[0] + 136u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 140u), c.r[3].w[0]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 370u));
    c.budget -= 14;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001E4F20; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 240u)));
    c.f[0] = ld32((c.r[29].w[0] + 128u));
    c.f[1] = ld32((c.r[2].w[0]));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001E4D9C; } }
    c.f[0] = ld32((c.r[29].w[0] + 136u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001E4D9C; } }
    c.f[1] = ld32((c.r[2].w[0] + 8u));
    c.f[0] = ld32((c.r[29].w[0] + 132u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001E4D9C; } }
    c.f[0] = ld32((c.r[29].w[0] + 140u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001E4DA0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_001E4DA0; } }
L_001E4D9C:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001E4DA0:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_001E4F24; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 984u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001E4F20; } }
    c.r[3].d[0] = ld8((c.r[2].w[0] + 370u));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001E4F20; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC1200000u);
    st32((c.r[29].w[0] + 112u), 0u);
    st32((c.r[29].w[0] + 120u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[29].w[0] + 116u), 0u);
    st32((c.r[29].w[0] + 124u), c.r[2].w[0]);
    c.f[12] = ld32((c.r[17].w[0] + 1020u));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E4DECu); set32(c.r[4], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0011(c, 29u, depth + 1u); else { c.pc = 0x00144640u; return; } if (c.pc != 0x001E4DECu) [[unlikely]] return; }
L_001E4DEC:
    set32(c.r[3], c.r[29].w[0] + 112u);
    set32(c.r[2], c.r[29].w[0] + 48u);
    ld128((c.r[2].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[2].w[0] + 16u) & ~15u, c.vu0.vf[5]);
    ld128((c.r[2].w[0] + 32u) & ~15u, c.vu0.vf[6]);
    ld128((c.r[2].w[0] + 48u) & ~15u, c.vu0.vf[7]);
    ld128((c.r[3].w[0]) & ~15u, c.vu0.vf[8]);
    vu::mulabc(c.vu0, 15u, 4u, c.vu0.vf[8].w[0]);
    vu::maddabc(c.vu0, 15u, 5u, c.vu0.vf[8].w[1]);
    vu::maddabc(c.vu0, 15u, 6u, c.vu0.vf[8].w[2]);
    vu::maddbc(c.vu0, 15u, 12u, 7u, c.vu0.vf[8].w[3]);
    st128((c.r[3].w[0]) & ~15u, c.vu0.vf[12]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[4] = ld32((c.r[1].w[0] + 21624u));
    c.f[6] = ld32((c.r[17].w[0] + 224u));
    c.f[1] = ld32((c.r[29].w[0] + 112u));
    c.f[5] = ld32((c.r[29].w[0] + 120u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[3] = ld32((c.r[1].w[0] + 21624u));
    c.f[1] = fp::add(c.f[1], c.f[6]);
    st32((c.r[29].w[0] + 112u), c.f[1]);
    c.f[6] = ld32((c.r[17].w[0] + 232u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[2] = ld32((c.r[1].w[0] + 21656u));
    c.f[1] = ld32((c.r[29].w[0] + 112u));
    c.f[5] = fp::add(c.f[5], c.f[6]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = ld32((c.r[1].w[0] + 21656u));
    st32((c.r[29].w[0] + 128u), c.f[4]);
    st32((c.r[29].w[0] + 132u), c.f[3]);
    st32((c.r[29].w[0] + 136u), c.f[2]);
    st32((c.r[29].w[0] + 140u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 128u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 36;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[29].w[0] + 120u), c.f[5]);  if (t) { goto L_001E4EB8; } }
    c.f[0] = ld32((c.r[29].w[0] + 136u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001E4EBC; } }
    c.f[0] = ld32((c.r[29].w[0] + 132u));
    c.f[1] = ld32((c.r[29].w[0] + 120u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001E4EB8; } }
    c.f[0] = ld32((c.r[29].w[0] + 140u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_001E4EB8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] & 255ull;  if (t) { goto L_001E4EC0; } }
L_001E4EB8:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001E4EBC:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 1;
L_001E4EC0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001E4F20; } }
    c.r[5].d[0] = ld8((c.r[17].w[0] + 400u));
    set32(c.r[2], 0u - 9u);
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(8ll);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[2].d[0] = c.r[5].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E4EE8u); st8((c.r[17].w[0] + 400u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0038(c, 92u, depth + 1u); else { c.pc = 0x001E1700u; return; } if (c.pc != 0x001E4EE8u) [[unlikely]] return; }
L_001E4EE8:
    c.r[7].d[0] = ld8((c.r[17].w[0] + 392u));
    c.r[3].d[0] = 0ull & 1ull;
    set32(c.r[5], 0u - 33u);
    set32(c.r[6], c.r[3].w[0] << 5);
    set32(c.r[4], c.r[3].w[0] << 3);
    set32(c.r[3], 0u - 9u);
    c.r[5].d[0] = c.r[7].d[0] & c.r[5].d[0];
    c.r[5].d[0] = c.r[5].d[0] | c.r[6].d[0];
    st8((c.r[17].w[0] + 392u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].d[0] = ld8((c.r[17].w[0] + 400u));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 14;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 400u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001E5104; } }
L_001E4F20:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001E4F24:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E4F2Cu);  if (depth < kMaxDepth) unit_0035(c, 78u, depth + 1u); else { c.pc = 0x001D5900u; return; } if (c.pc != 0x001E4F2Cu) [[unlikely]] return; }
L_001E4F2C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_001E4FC8; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 944u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[5], 0u + 75u);  if (t) { goto L_001E4F4C; } }
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 1));
    set32(c.r[5], c.r[2].w[0] + 76u);
    c.budget -= 2;
L_001E4F4C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E4F54u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 25u, depth + 1u); else { c.pc = 0x001E44B0u; return; } if (c.pc != 0x001E4F54u) [[unlikely]] return; }
L_001E4F54:
    c.r[6].d[0] = ld8((c.r[17].w[0] + 400u));
    c.r[5].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[2], 0u - 9u);
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(8ll);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[2].d[0] = c.r[6].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E4F78u); st8((c.r[17].w[0] + 400u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0030(c, 17u, depth + 1u); else { c.pc = 0x001C02A0u; return; } if (c.pc != 0x001E4F78u) [[unlikely]] return; }
L_001E4F78:
    c.r[9].d[0] = ld8((c.r[17].w[0] + 392u));
    c.r[3].d[0] = 0ull & 1ull;
    set32(c.r[7], 0u - 33u);
    set32(c.r[8], c.r[3].w[0] << 5);
    set32(c.r[6], c.r[3].w[0] << 3);
    set32(c.r[5], 0u - 9u);
    set32(c.r[3], 0u - 2u);
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.r[7].d[0] = c.r[9].d[0] & c.r[7].d[0];
    c.r[7].d[0] = c.r[7].d[0] | c.r[8].d[0];
    st8((c.r[17].w[0] + 392u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.r[7].d[0] = ld8((c.r[17].w[0] + 400u));
    c.r[5].d[0] = c.r[7].d[0] & c.r[5].d[0];
    c.r[5].d[0] = c.r[5].d[0] | c.r[6].d[0];
    st8((c.r[17].w[0] + 400u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].d[0] = ld8((c.r[17].w[0] + 393u));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 20;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 393u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001E5104; } }
L_001E4FC8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E4FD0u);  if (depth < kMaxDepth) unit_0034(c, 146u, depth + 1u); else { c.pc = 0x001D1790u; return; } if (c.pc != 0x001E4FD0u) [[unlikely]] return; }
L_001E4FD0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001E5018; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 944u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[2], c.r[2].w[0] - 28287u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld8((c.r[2].w[0]));
    set32(c.r[16], c.r[2].w[0] + 56u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E4FFCu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 25u, depth + 1u); else { c.pc = 0x001E44B0u; return; } if (c.pc != 0x001E4FFCu) [[unlikely]] return; }
L_001E4FFC:
    c.r[16].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E5008u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0034(c, 175u, depth + 1u); else { c.pc = 0x001D2340u; return; } if (c.pc != 0x001E5008u) [[unlikely]] return; }
L_001E5008:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001E50E4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 3850u);  if (t) { goto L_001E50E0; } }
L_001E5018:
    set32(c.r[3], ld32((c.r[17].w[0] + 944u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[2], c.r[2].w[0] - 28303u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld8((c.r[2].w[0]));
    set32(c.r[16], c.r[2].w[0] + 24u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E503Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 25u, depth + 1u); else { c.pc = 0x001E44B0u; return; } if (c.pc != 0x001E503Cu) [[unlikely]] return; }
L_001E503C:
    c.r[16].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E5048u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0034(c, 175u, depth + 1u); else { c.pc = 0x001D2340u; return; } if (c.pc != 0x001E5048u) [[unlikely]] return; }
L_001E5048:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001E5068; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 944u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[2], c.r[2].w[0] + 20898u);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[16].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    c.budget -= 6;
L_001E5068:
    set32(c.r[2], ld32((c.r[17].w[0] + 984u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001E5094; } }
    c.r[3].d[0] = ld8((c.r[2].w[0] + 393u));
    c.r[3].d[0] = c.r[3].d[0] << 59;
    set32(c.r[2], 0u + 2u);
    c.r[3].d[0] = c.r[3].d[0] >> 61;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001E5094; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 260u);  if (t) { goto L_001E50E0; } }
L_001E5094:
    set32(c.r[3], ld32((c.r[17].w[0] + 944u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001E50E0; } }
    st16((c.r[17].w[0] + 560u), static_cast<std::uint16_t>(0u));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E50B8u); st32((c.r[17].w[0] + 60u), 0u);  if (depth < kMaxDepth) unit_0030(c, 17u, depth + 1u); else { c.pc = 0x001C02A0u; return; } if (c.pc != 0x001E50B8u) [[unlikely]] return; }
L_001E50B8:
    set32(c.r[5], 0u + 1u);
    set32(c.r[3], 0u - 129u);
    st32((c.r[17].w[0] + 628u), c.r[5].w[0]);
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(128ll);
    st16((c.r[17].w[0] + 562u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.r[5].d[0] = ld8((c.r[17].w[0] + 393u));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 393u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001E5104; } }
L_001E50E0:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_001E50E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E50ECu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0030(c, 17u, depth + 1u); else { c.pc = 0x001C02A0u; return; } if (c.pc != 0x001E50ECu) [[unlikely]] return; }
L_001E50EC:
    c.r[5].d[0] = ld8((c.r[17].w[0] + 393u));
    set32(c.r[3], 0u - 129u);
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(128ll);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st8((c.r[17].w[0] + 393u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 6;
L_001E5104:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_001E5120:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E5138u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0038(c, 89u, depth + 1u); else { c.pc = 0x001E1460u; return; } if (c.pc != 0x001E5138u) [[unlikely]] return; }
L_001E5138:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 2u);
    set32(c.r[5], 0u + 83u);
    c.r[2].d[0] = c.r[2].d[0] & 3ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E5154u); st8((c.r[16].w[0] + 368u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0039(c, 25u, depth + 1u); else { c.pc = 0x001E44B0u; return; } if (c.pc != 0x001E5154u) [[unlikely]] return; }
L_001E5154:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E515Cu); c.r[17].d[0] = c.r[2].d[0] & 65535ull;  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x001E515Cu) [[unlikely]] return; }
L_001E515C:
    c.r[2].d[0] = ld8((c.r[2].w[0] + 20u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_001E5170; } }
    set32(c.r[17], 0u + 3759u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 2;
L_001E5170:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E5178u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0030(c, 17u, depth + 1u); else { c.pc = 0x001C02A0u; return; } if (c.pc != 0x001E5178u) [[unlikely]] return; }
L_001E5178:
    c.r[5].d[0] = ld8((c.r[16].w[0] + 393u));
    set32(c.r[3], 0u - 129u);
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(128ll);
    set32(c.r[2], 0u + 1u);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st8((c.r[16].w[0] + 393u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001E51B0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.f[0] = c.r[2].w[0];
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.f[2] = ld32((c.r[1].w[0] + 21688u));
    c.f[3] = ld32((c.r[4].w[0] + 212u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[1] = ld32((c.r[1].w[0] + 21696u));
    c.f[2] = fp::add(c.f[2], c.f[3]);
    c.f[1] = fp::mul(c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 16;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001E5200; } }
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[3], c.f[1]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[16].w[0] + 944u)));  if (t) { goto L_001E521C; } }
L_001E5200:
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[3], c.f[1]);
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    set32(c.r[4], ld32((c.r[16].w[0] + 944u)));
    c.budget -= 7;
L_001E521C:
    c.r[2].d[0] = c.r[3].d[0] & 65535ull;
    c.r[3].d[0] = c.r[2].d[0] & 4095ull;
    set32(c.r[2], 0u - 1u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[2].d[0]; set32(c.r[2], c.r[4].w[0] << 9);  if (t) { goto L_001E5248; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E5238u);  if (depth < kMaxDepth) unit_003F(c, 310u, depth + 1u); else { c.pc = 0x001FF1A0u; return; } if (c.pc != 0x001E5238u) [[unlikely]] return; }
L_001E5238:
    set32(c.r[17], 0u + 1u);
    set32(c.r[3], 0u + 3u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; if (c.r[2].d[0] == 0) c.r[17].d[0] = c.r[3].d[0];  if (t) { goto L_001E5258; } }
L_001E5248:
    set32(c.r[2], c.r[2].w[0] + 4608u);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    c.r[17].d[0] = c.r[2].d[0] & 4095ull;
    set32(c.r[17], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[17].w[0]) >> 10));
    c.budget -= 4;
L_001E5258:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E5260u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0034(c, 63u, depth + 1u); else { c.pc = 0x001D0740u; return; } if (c.pc != 0x001E5260u) [[unlikely]] return; }
L_001E5260:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001E528C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[3], c.r[17].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] - 28136u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E5284u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0030(c, 17u, depth + 1u); else { c.pc = 0x001C02A0u; return; } if (c.pc != 0x001E5284u) [[unlikely]] return; }
L_001E5284:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_001E52AC; } }
L_001E528C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[3], c.r[17].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] - 28128u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E52A8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0030(c, 17u, depth + 1u); else { c.pc = 0x001C02A0u; return; } if (c.pc != 0x001E52A8u) [[unlikely]] return; }
L_001E52A8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_001E52AC:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001E52C0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 240u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E52E0u); set32(c.r[5], ld32((c.r[5].w[0] + 240u)));  if (depth < kMaxDepth) unit_0011(c, 24u, depth + 1u); else { c.pc = 0x00144550u; return; } if (c.pc != 0x001E52E0u) [[unlikely]] return; }
L_001E52E0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[3] = ld32((c.r[1].w[0] + 21688u));
    c.f[4] = ld32((c.r[16].w[0] + 212u));
    c.f[1] = c.r[2].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[2] = ld32((c.r[1].w[0] + 21696u));
    c.f[3] = fp::add(c.f[3], c.f[4]);
    c.f[2] = fp::mul(c.f[2], c.f[3]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[2]));
    c.budget -= 12;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001E5320; } }
    c.f[2] = fp::cvt_w_s(c.f[2]);
    set32(c.r[3], c.f[2]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E5338; } }
L_001E5320:
    c.f[2] = fp::sub(c.f[2], c.f[1]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[2] = fp::cvt_w_s(c.f[2]);
    set32(c.r[3], c.f[2]);
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.budget -= 6;
L_001E5338:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.r[2].d[0] = c.r[3].d[0] & 65535ull;
    c.f[3] = ld32((c.r[1].w[0] + 21688u));
    c.r[5].d[0] = c.r[2].d[0] & 4095ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[1] = c.r[2].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[2] = ld32((c.r[1].w[0] + 21696u));
    c.f[0] = fp::add(c.f[3], c.f[0]);
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 13;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001E537C; } }
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[3].d[0] & 65535ull;  if (t) { goto L_001E5398; } }
L_001E537C:
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.r[2].d[0] = c.r[3].d[0] & 65535ull;
    c.budget -= 7;
L_001E5398:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] & 4095ull;
    set32(c.r[2], c.r[2].w[0] - c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] + 6656u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E53B0u); c.r[17].d[0] = c.r[2].d[0] & 4095ull;  if (depth < kMaxDepth) unit_0034(c, 77u, depth + 1u); else { c.pc = 0x001D0940u; return; } if (c.pc != 0x001E53B0u) [[unlikely]] return; }
L_001E53B0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001E53E0; } }
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[17].w[0]) >> 10));
    set32(c.r[3], c.r[2].w[0] << 1);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[2], c.r[2].w[0] - 28120u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E53D8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0030(c, 17u, depth + 1u); else { c.pc = 0x001C02A0u; return; } if (c.pc != 0x001E53D8u) [[unlikely]] return; }
L_001E53D8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_001E5404; } }
L_001E53E0:
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[17].w[0]) >> 10));
    set32(c.r[3], c.r[2].w[0] << 1);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[2], c.r[2].w[0] - 28112u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E5400u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0030(c, 17u, depth + 1u); else { c.pc = 0x001C02A0u; return; } if (c.pc != 0x001E5400u) [[unlikely]] return; }
L_001E5400:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_001E5404:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001E5420:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[3].w[0] + 20928u);  if (t) { goto L_001E5458; } }
L_001E5430:
    set32(c.r[2], c.r[3].w[0] + c.r[5].w[0]);
    c.r[2].d[0] = ld16((c.r[2].w[0]));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[2].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0x00460000u);  if (t) { goto L_001E5454; } }
    set32(c.r[2], c.r[2].w[0] + 20931u);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    c.r[2].d[0] = ld8((c.r[2].w[0]));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] << 1);  if (t) { goto L_001E5468; } }
L_001E5454:
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.budget -= 1;
L_001E5458:
    c.r[2].d[0] = c.r[6].sd[0] < 81ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], c.r[6].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001E5430u | kUnwind; return; } goto L_001E5430; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001E5468:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001E5470:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001E55A8; } }
    set32(c.r[3], c.r[16].w[0] << 2);
    set32(c.r[2], 0u + 240u);
    set32(c.r[4], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);  if (t) { goto L_001E54B0; } }
    breakpoint(c, 0x001E54ACu);
    c.budget -= 1;
L_001E54B0:
    c.r[16].d[0] = c.lo.d[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E54BCu);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x001E54BCu) [[unlikely]] return; }
L_001E54BC:
    c.r[3].d[0] = ld8((c.r[2].w[0] + 23u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], c.r[16].w[0] << 2);  if (t) { goto L_001E54D4; } }
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[7], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 1));  if (t) { goto L_001E54F4; } }
L_001E54D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E54DCu);  if (depth < kMaxDepth) unit_0038(c, 28u, depth + 1u); else { c.pc = 0x001E04B0u; return; } if (c.pc != 0x001E54DCu) [[unlikely]] return; }
L_001E54DC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[3], c.r[3].w[0] - 28104u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    mmi::mult(c, 0, c.r[16].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[7], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 1));
    c.budget -= 6;
L_001E54F4:
    c.budget -= 2;
    { const bool t = c.r[7].d[0] != 0ull;  if (t) { goto L_001E5500; } }
    set32(c.r[7], 0u + 1u);
    c.budget -= 1;
L_001E5500:
    set32(c.r[4], ld32((c.r[17].w[0] + 684u)));
    set32(c.r[3], ld32((c.r[17].w[0] + 688u)));
    c.r[1].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001E55A8; } }
    set32(c.r[6], ld32((c.r[17].w[0] + 696u)));
    set32(c.r[3], c.r[7].w[0] << 2);
    set32(c.r[4], c.r[3].w[0] + c.r[7].w[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] - 28096u);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[5].w[0] + c.r[6].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.budget -= 12;
    { const bool t = c.r[4].d[0] != 0ull; mmi::div(c, 0, c.r[3].w[0], c.r[4].w[0]);  if (t) { goto L_001E5548; } }
    breakpoint(c, 0x001E5544u);
    c.budget -= 1;
L_001E5548:
    set32(c.r[3], ld32((c.r[17].w[0] + 692u)));
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[17].w[0] + 692u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 692u)));
    c.r[3].d[0] = c.r[3].sd[0] < 100ll ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001E55A8; } }
    st32((c.r[17].w[0] + 692u), 0u);
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[17].w[0] + 684u)));
    set32(c.r[5], 0u + 604u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[17].w[0] + 684u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 696u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E5594u); st32((c.r[17].w[0] + 696u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_002C(c, 35u, depth + 1u); else { c.pc = 0x001B0680u; return; } if (c.pc != 0x001E5594u) [[unlikely]] return; }
L_001E5594:
    set32(c.r[3], ld32((c.r[17].w[0] + 696u)));
    c.r[1].d[0] = c.r[3].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[3], 0u + 4u);  if (t) { goto L_001E55A8; } }
    st32((c.r[17].w[0] + 696u), c.r[3].w[0]);
    c.budget -= 1;
L_001E55A8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001E55C0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x434F0000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E55E8u); c.r[5].d[0] = c.r[2].d[0] | 20549ull;  if (depth < kMaxDepth) unit_000F(c, 30u, depth + 1u); else { c.pc = 0x0013C370u; return; } if (c.pc != 0x001E55E8u) [[unlikely]] return; }
L_001E55E8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[4], c.r[16].w[0] + 544u);
    set32(c.r[2], c.r[2].w[0] - 8576u);
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[17].w[0] + 24u), c.r[2].w[0]);
    set32(c.r[6], 0u + 368u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E5608u); st32((c.r[17].w[0] + 28u), c.r[16].w[0]);  if (depth < kMaxDepth) unit_0009(c, 49u, depth + 1u); else { c.pc = 0x00124ED8u; return; } if (c.pc != 0x001E5608u) [[unlikely]] return; }
L_001E5608:
    set32(c.r[3], 0u - 1u);
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 585u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 752u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 612u), c.r[3].w[0]);
    st8((c.r[16].w[0] + 608u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 609u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[16].w[0] + 568u), c.r[3].w[0]);
    st16((c.r[16].w[0] + 598u), static_cast<std::uint16_t>(0u));
    st16((c.r[16].w[0] + 592u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st32((c.r[16].w[0] + 736u), 0u);
    st8((c.r[16].w[0] + 594u), static_cast<std::uint8_t>(0u));
    st32((c.r[16].w[0] + 740u), 0u);
    st32((c.r[16].w[0] + 756u), 0u);
    st32((c.r[16].w[0] + 692u), 0u);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E5650u); st32((c.r[16].w[0] + 684u), 0u);  if (depth < kMaxDepth) unit_004A(c, 184u, depth + 1u); else { c.pc = 0x0022A600u; return; } if (c.pc != 0x001E5650u) [[unlikely]] return; }
L_001E5650:
    set32(c.r[4], c.r[16].w[0] + 436u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E565Cu); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 40u, depth + 1u); else { c.pc = 0x0013C4A0u; return; } if (c.pc != 0x001E565Cu) [[unlikely]] return; }
L_001E565C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E5664u);  if (depth < kMaxDepth) unit_003D(c, 81u, depth + 1u); else { c.pc = 0x001F53D0u; return; } if (c.pc != 0x001E5664u) [[unlikely]] return; }
L_001E5664:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001E5680:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 912u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 980u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001E56A4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001E56F8; } }
L_001E56A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E56ACu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002E(c, 281u, depth + 1u); else { c.pc = 0x001BB030u; return; } if (c.pc != 0x001E56ACu) [[unlikely]] return; }
L_001E56AC:
    set32(c.r[4], ld32((c.r[16].w[0] + 984u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001E56EC; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 464u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001E56E8; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 624u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 624u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001E56E8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E56E0u);  if (depth < kMaxDepth) unit_0034(c, 120u, depth + 1u); else { c.pc = 0x001D1020u; return; } if (c.pc != 0x001E56E0u) [[unlikely]] return; }
L_001E56E0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001E56F4; } }
L_001E56E8:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001E56EC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_001E56FC; } }
L_001E56F4:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_001E56F8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_001E56FC:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001E5710:
    set32(c.r[29], c.r[29].w[0] - 240u);
    set32(c.r[2], 0u - 1u);
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[20], ld32((c.r[4].w[0] + 28u)));
    set32(c.r[3], ld32((c.r[20].w[0] + 164u)));
    c.budget -= 16;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[21].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001E575C; } }
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E575Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0039(c, 27u, depth + 1u); else { c.pc = 0x001E4510u; return; } if (c.pc != 0x001E575Cu) [[unlikely]] return; }
L_001E575C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4D6F0000u);
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] | 17524ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E5770u); st8((c.r[20].w[0] + 584u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x001E5770u) [[unlikely]] return; }
L_001E5770:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001E5780; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 16u)));  if (t) { goto L_001E5784; } }
L_001E5780:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001E5784:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001E5790; } }
    st32((c.r[2].w[0] + 40u), 0u);
    c.budget -= 1;
L_001E5790:
    set32(c.r[2], ld32((c.r[20].w[0] + 868u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001E57A4; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[20].w[0] + 868u), c.r[2].w[0]);
    c.budget -= 2;
L_001E57A4:
    st32((c.r[20].w[0] + 872u), 0u);
    set32(c.r[2], ld32((c.r[20].w[0] + 876u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001E57D0; } }
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[20].w[0] + 876u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 876u)));
    c.r[1].d[0] = c.r[2].sd[0] < 6001ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_001E57D0; } }
    st32((c.r[20].w[0] + 876u), 0u);
    c.budget -= 1;
L_001E57D0:
    set32(c.r[2], ld32((c.r[20].w[0] + 740u)));
    set32(c.r[17], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[17].d[0];  if (t) { goto L_001E58D0; } }
    set32(c.r[2], ld32((c.r[20].w[0] + 736u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001E58D0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[17].sd[0] < 8ll ? 1ull : 0ull;  if (t) { goto L_001E58C8; } }
L_001E57F4:
    set32(c.r[3], ld32((c.r[20].w[0] + 912u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], c.r[2].w[0] + 28320u);
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    c.r[3].d[0] = c.r[3].d[0] & 7ull;
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[16], ld32((c.r[2].w[0])));
    c.budget -= 10;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_001E58C0; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 624u)));
    set32(c.r[2], ld32((c.r[20].w[0] + 624u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001E58C0; } }
    c.r[3].d[0] = ld8((c.r[20].w[0] + 898u));
    c.r[2].d[0] = ld8((c.r[16].w[0] + 898u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001E58C0; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 372u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001E58C0; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 371u));
    c.r[1].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001E58C0; } }
    c.r[2].d[0] = ld16((c.r[20].w[0] + 474u));
    c.r[2].d[0] = c.r[2].d[0] & 256ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001E5874; } }
    c.r[2].d[0] = ld8((c.r[20].w[0] + 372u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001E58C0; } }
L_001E5874:
    set32(c.r[3], ld32((c.r[20].w[0] + 468u)));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 468u)));
    st32((c.r[20].w[0] + 468u), c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E588Cu); st32((c.r[16].w[0] + 468u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_002E(c, 112u, depth + 1u); else { c.pc = 0x001B9B80u; return; } if (c.pc != 0x001E588Cu) [[unlikely]] return; }
L_001E588C:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E5898u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 112u, depth + 1u); else { c.pc = 0x001B9B80u; return; } if (c.pc != 0x001E5898u) [[unlikely]] return; }
L_001E5898:
    c.r[5].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E58A4u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 110u, depth + 1u); else { c.pc = 0x001B9B30u; return; } if (c.pc != 0x001E58A4u) [[unlikely]] return; }
L_001E58A4:
    c.r[5].d[0] = 0ull < c.r[18].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E58B0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 110u, depth + 1u); else { c.pc = 0x001B9B30u; return; } if (c.pc != 0x001E58B0u) [[unlikely]] return; }
L_001E58B0:
    set32(c.r[3], ld32((c.r[20].w[0] + 736u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 736u)));
    st32((c.r[20].w[0] + 736u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 736u), c.r[3].w[0]);
    c.budget -= 4;
L_001E58C0:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 2;
L_001E58C8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001E57F4u | kUnwind; return; } goto L_001E57F4; } }
L_001E58D0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 31544u)));
    c.r[1].d[0] = c.r[2].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00490000u);  if (t) { goto L_001E5A4C; } }
    set32(c.r[2], ld32((c.r[1].w[0] + 8984u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[17], 0u + 1u);  if (t) { goto L_001E58F4; } }
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001E58F4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_001E5950; } }
L_001E58FC:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);  if (t) { goto L_001E595C; } }
    set32(c.r[3], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 28320u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001E594C; } }
    c.r[2].d[0] = ld8((c.r[4].w[0] + 392u));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001E594C; } }
    c.r[2].d[0] = ld8((c.r[4].w[0] + 370u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001E594C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E5940u);  if (depth < kMaxDepth) unit_002E(c, 112u, depth + 1u); else { c.pc = 0x001B9B80u; return; } if (c.pc != 0x001E5940u) [[unlikely]] return; }
L_001E5940:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001E594C; } }
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001E594C:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_001E5950:
    c.r[2].d[0] = c.r[16].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001E58FCu | kUnwind; return; } goto L_001E58FC; } }
L_001E595C:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_001E5A4C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], ld32((c.r[20].w[0] + 912u)));  if (t) { goto L_001E5A40; } }
L_001E596C:
    set32(c.r[3], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 28320u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x00490000u);  if (t) { goto L_001E5A3C; } }
    set32(c.r[2], c.r[16].w[0] << 5);
    set32(c.r[3], c.r[3].w[0] + 8644u);
    set32(c.r[4], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0])));
    set32(c.r[3], 0u + 3u);
    c.budget -= 7;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; c.r[4].sd[0] = static_cast<std::int32_t>(0x00490000u);  if (t) { goto L_001E5A3C; } }
    set32(c.r[3], ld32((c.r[20].w[0] + 624u)));
    set32(c.r[4], c.r[4].w[0] + 8649u);
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);  if (t) { goto L_001E5A3C; } }
    set32(c.r[3], ld32((c.r[1].w[0] + 31600u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] < 0;  if (t) { goto L_001E5A3C; } }
    c.r[3].d[0] = ld16((c.r[20].w[0] + 474u));
    c.r[3].d[0] = c.r[3].d[0] & 1024ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001E5A20; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[4], c.r[4].w[0] + 8640u);
    set32(c.r[3], ld32((c.r[1].w[0] - 1536u)));
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    c.r[5].d[0] = ld8((c.r[4].w[0]));
    set32(c.r[4], c.r[5].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 6);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].d[0] = ld16((c.r[3].w[0] + 4u));
    c.r[3].d[0] = c.r[3].d[0] & 1024ull;
    c.budget -= 14;
    { const bool t = c.r[3].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x00490000u);  if (t) { goto L_001E5A3C; } }
    set32(c.r[3], c.r[3].w[0] + 8648u);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = ld8((c.r[2].w[0]));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001E5A3C; } }
L_001E5A20:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00200000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E5A30u); set32(c.r[5], c.r[5].w[0] - 17296u);  if (depth < kMaxDepth) unit_003F(c, 230u, depth + 1u); else { c.pc = 0x001FDF80u; return; } if (c.pc != 0x001E5A30u) [[unlikely]] return; }
L_001E5A30:
    set32(c.r[2], 0u - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st32((c.r[1].w[0] + 31600u), c.r[2].w[0]);
    c.budget -= 3;
L_001E5A3C:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_001E5A40:
    c.r[2].d[0] = c.r[16].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001E596Cu | kUnwind; return; } goto L_001E596C; } }
L_001E5A4C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E5A54u);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x001E5A54u) [[unlikely]] return; }
L_001E5A54:
    c.r[3].d[0] = ld8((c.r[2].w[0] + 20u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001E5B74; } }
    c.r[6].d[0] = ld8((c.r[20].w[0] + 370u));
    set32(c.r[3], 0u + 10u);
    c.budget -= 4;
    { const bool t = c.r[6].d[0] != c.r[3].d[0];  if (t) { goto L_001E5B74; } }
    set32(c.r[3], ld32((c.r[20].w[0] + 240u)));
    c.f[0] = 0u;
    c.f[21] = ld32((c.r[3].w[0] + 8u));
    fpu_compare(c, fp::key(c.f[21]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001E5A90; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], ld32((c.r[20].w[0] + 240u)));  if (t) { goto L_001E5A98; } }
L_001E5A90:
    c.f[21] = c.f[21] ^ fp::kSign;
    set32(c.r[6], ld32((c.r[20].w[0] + 240u)));
    c.budget -= 2;
L_001E5A98:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 31216u)));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull; c.f[20] = ld32((c.r[6].w[0]));  if (t) { goto L_001E5AF8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E5AB4u); c.f[12] = c.f[21];  if (depth < kMaxDepth) unit_0007(c, 36u, depth + 1u); else { c.pc = 0x0011C438u; return; } if (c.pc != 0x001E5AB4u) [[unlikely]] return; }
L_001E5AB4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40220000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E5AC4u); c.r[5].d[0] = c.r[3].d[0] << 32;  if (depth < kMaxDepth) unit_0000(c, 76u, depth + 1u); else { c.pc = 0x00100600u; return; } if (c.pc != 0x001E5AC4u) [[unlikely]] return; }
L_001E5AC4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001E5AF8; } }
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001E5AF8; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC1980000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[20]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001E5B54; } }
L_001E5AF8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 31216u)));
    c.r[3].d[0] = c.r[3].d[0] & 4ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull; c.f[12] = c.f[21];  if (t) { goto L_001E5B74; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E5B14u);  if (depth < kMaxDepth) unit_0007(c, 36u, depth + 1u); else { c.pc = 0x0011C438u; return; } if (c.pc != 0x001E5B14u) [[unlikely]] return; }
L_001E5B14:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40220000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E5B24u); c.r[5].d[0] = c.r[3].d[0] << 32;  if (depth < kMaxDepth) unit_0000(c, 76u, depth + 1u); else { c.pc = 0x00100600u; return; } if (c.pc != 0x001E5B24u) [[unlikely]] return; }
L_001E5B24:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001E5B74; } }
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[20]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[3].sd[0] = static_cast<std::int32_t>(0x41980000u);  if (t) { goto L_001E5B74; } }
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001E5B74; } }
L_001E5B54:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], ld32((c.r[1].w[0] + 31456u)));
    c.r[3].d[0] = c.r[3].d[0] & 63ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00420000u);  if (t) { goto L_001E5B74; } }
    set32(c.r[5], ld32((c.r[1].w[0] - 28088u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E5B74u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_003F(c, 317u, depth + 1u); else { c.pc = 0x001FF2F0u; return; } if (c.pc != 0x001E5B74u) [[unlikely]] return; }
L_001E5B74:
    c.r[3].d[0] = ld8((c.r[20].w[0] + 392u));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_001E6678; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x53590000u);  if (t) { goto L_001E5B90; } }
    set32(c.r[4], c.r[4].w[0] + 436u);
    c.budget -= 1;
L_001E5B90:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E5B98u); c.r[5].d[0] = c.r[2].d[0] | 20035ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x001E5B98u) [[unlikely]] return; }
L_001E5B98:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_001E5BA4; } }
    set32(c.r[17], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 1;
L_001E5BA4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], 0u + 5u);
    set32(c.r[3], ld32((c.r[1].w[0] + 31520u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001E5C24; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E5BC0u); set32(c.r[4], ld32((c.r[20].w[0] + 240u)));  if (depth < kMaxDepth) unit_0038(c, 64u, depth + 1u); else { c.pc = 0x001E0CD0u; return; } if (c.pc != 0x001E5BC0u) [[unlikely]] return; }
L_001E5BC0:
    st8((c.r[20].w[0] + 369u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[20].w[0] + 393u));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001E5C24; } }
    c.r[2].d[0] = ld8((c.r[20].w[0] + 392u));
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_001E5C24; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E5BF0u);  if (depth < kMaxDepth) unit_0033(c, 101u, depth + 1u); else { c.pc = 0x001CD4B0u; return; } if (c.pc != 0x001E5BF0u) [[unlikely]] return; }
L_001E5BF0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_001E5C18; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E5C00u);  if (depth < kMaxDepth) unit_0034(c, 131u, depth + 1u); else { c.pc = 0x001D14A0u; return; } if (c.pc != 0x001E5C00u) [[unlikely]] return; }
L_001E5C00:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_001E5C18; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E5C10u);  if (depth < kMaxDepth) unit_0034(c, 132u, depth + 1u); else { c.pc = 0x001D14B0u; return; } if (c.pc != 0x001E5C10u) [[unlikely]] return; }
L_001E5C10:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001E5C24; } }
L_001E5C18:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E5C20u); set32(c.r[4], ld32((c.r[20].w[0] + 240u)));  if (depth < kMaxDepth) unit_0038(c, 65u, depth + 1u); else { c.pc = 0x001E0D30u; return; } if (c.pc != 0x001E5C20u) [[unlikely]] return; }
L_001E5C20:
    st8((c.r[20].w[0] + 368u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 1;
L_001E5C24:
    set32(c.r[3], ld32((c.r[20].w[0] + 164u)));
    set32(c.r[2], ld32((c.r[20].w[0] + 576u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_001E5C38; } }
    st32((c.r[20].w[0] + 576u), 0u);
    c.budget -= 1;
L_001E5C38:
    set32(c.r[2], ld32((c.r[20].w[0] + 576u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_001E5C5C; } }
    set32(c.r[2], ld32((c.r[20].w[0] + 572u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_001E5C58; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[20].w[0] + 572u), c.r[2].w[0]);
    c.budget -= 2;
L_001E5C58:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 1;
L_001E5C5C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E5C64u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0034(c, 189u, depth + 1u); else { c.pc = 0x001D2700u; return; } if (c.pc != 0x001E5C64u) [[unlikely]] return; }
L_001E5C64:
    st8((c.r[20].w[0] + 594u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E5C70u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0034(c, 158u, depth + 1u); else { c.pc = 0x001D1A70u; return; } if (c.pc != 0x001E5C70u) [[unlikely]] return; }
L_001E5C70:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E5C78u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0034(c, 162u, depth + 1u); else { c.pc = 0x001D1F30u; return; } if (c.pc != 0x001E5C78u) [[unlikely]] return; }
L_001E5C78:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E5C80u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0034(c, 138u, depth + 1u); else { c.pc = 0x001D15E0u; return; } if (c.pc != 0x001E5C80u) [[unlikely]] return; }
L_001E5C80:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_001E5CA8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E5C90u);  if (depth < kMaxDepth) unit_0034(c, 139u, depth + 1u); else { c.pc = 0x001D1610u; return; } if (c.pc != 0x001E5C90u) [[unlikely]] return; }
L_001E5C90:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_001E5CA8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E5CA0u);  if (depth < kMaxDepth) unit_0034(c, 140u, depth + 1u); else { c.pc = 0x001D1640u; return; } if (c.pc != 0x001E5CA0u) [[unlikely]] return; }
L_001E5CA0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_001E5D3C; } }
L_001E5CA8:
    set32(c.r[2], ld32((c.r[20].w[0] + 172u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001E5D38; } }
    set32(c.r[2], ld32((c.r[20].w[0] + 168u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_001E5CD0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E5CC8u);  if (depth < kMaxDepth) unit_0034(c, 140u, depth + 1u); else { c.pc = 0x001D1640u; return; } if (c.pc != 0x001E5CC8u) [[unlikely]] return; }
L_001E5CC8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001E5D38; } }
L_001E5CD0:
    set32(c.r[3], ld32((c.r[20].w[0] + 164u)));
    set32(c.r[2], 0u + 15110u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 15115u);  if (t) { goto L_001E5D38; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001E5D38; } }
    set32(c.r[3], ld32((c.r[20].w[0] + 176u)));
    c.r[1].d[0] = c.r[3].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[2], 0u + 8u);  if (t) { goto L_001E5D14; } }
    c.r[4].d[0] = ld8((c.r[20].w[0] + 395u));
    set32(c.r[2], 0u - 33u);
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(32ll);
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[20].w[0] + 395u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_001E5D38; } }
L_001E5D14:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001E5D38; } }
    c.r[4].d[0] = ld8((c.r[20].w[0] + 395u));
    c.r[2].d[0] = 0ull & 1ull;
    set32(c.r[3], c.r[2].w[0] << 5);
    set32(c.r[2], 0u - 33u);
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[20].w[0] + 395u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 7;
L_001E5D38:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 1;
L_001E5D3C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E5D44u);  if (depth < kMaxDepth) unit_002E(c, 112u, depth + 1u); else { c.pc = 0x001B9B80u; return; } if (c.pc != 0x001E5D44u) [[unlikely]] return; }
L_001E5D44:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001E5D58; } }
    set32(c.r[2], ld32((c.r[20].w[0] + 468u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[2].d[0] | 8ull;  if (t) { goto L_001E5D5C; } }
L_001E5D58:
    set32(c.r[4], ld32((c.r[20].w[0] + 468u)));
    c.budget -= 1;
L_001E5D5C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E5D64u);  if (depth < kMaxDepth) unit_0038(c, 30u, depth + 1u); else { c.pc = 0x001E04E0u; return; } if (c.pc != 0x001E5D64u) [[unlikely]] return; }
L_001E5D64:
    c.r[16].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E5D70u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 112u, depth + 1u); else { c.pc = 0x001B9B80u; return; } if (c.pc != 0x001E5D70u) [[unlikely]] return; }
L_001E5D70:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001E5D84; } }
    set32(c.r[2], ld32((c.r[20].w[0] + 468u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[2].d[0] | 8ull;  if (t) { goto L_001E5D88; } }
L_001E5D84:
    set32(c.r[4], ld32((c.r[20].w[0] + 468u)));
    c.budget -= 1;
L_001E5D88:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E5D90u);  if (depth < kMaxDepth) unit_0038(c, 31u, depth + 1u); else { c.pc = 0x001E0500u; return; } if (c.pc != 0x001E5D90u) [[unlikely]] return; }
L_001E5D90:
    c.r[19].d[0] = c.r[2].d[0] & 65535ull;
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[2].d[0] = ld16((c.r[20].w[0] + 474u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E5DA4u); st16((c.r[20].w[0] + 476u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_002E(c, 112u, depth + 1u); else { c.pc = 0x001B9B80u; return; } if (c.pc != 0x001E5DA4u) [[unlikely]] return; }
L_001E5DA4:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 31472u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001E5DD0; } }
    c.f[1] = ld32((c.r[20].w[0] + 1240u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001E5DD8; } }
L_001E5DD0:
    c.r[16].d[0] = 0ull + 0ull;
    c.r[19].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_001E5DD8:
    c.r[2].d[0] = ld8((c.r[20].w[0] + 372u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001E5E08; } }
    c.r[2].d[0] = ld8((c.r[20].w[0] + 370u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001E5E08; } }
    c.r[3].d[0] = ld8((c.r[20].w[0] + 371u));
    set32(c.r[2], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001E5E08; } }
    c.r[16].d[0] = 0ull + 0ull;
    c.r[19].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_001E5E08:
    c.r[3].d[0] = ld8((c.r[20].w[0] + 371u));
    set32(c.r[2], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001E5E54; } }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != 0ull;  if (t) { goto L_001E5E34; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E5E28u);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x001E5E28u) [[unlikely]] return; }
L_001E5E28:
    c.r[2].d[0] = ld8((c.r[2].w[0] + 9u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001E5E54; } }
L_001E5E34:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E5E40u); c.r[19].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x001E5E40u) [[unlikely]] return; }
L_001E5E40:
    c.r[2].d[0] = ld8((c.r[2].w[0] + 9u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001E5E54; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[20].w[0] + 1240u), c.r[2].w[0]);
    c.budget -= 2;
L_001E5E54:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 31472u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001E5EBC; } }
    set32(c.r[2], ld32((c.r[20].w[0] + 768u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001E5EBC; } }
    c.r[2].d[0] = ld8((c.r[20].w[0] + 370u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_001E5EBC; } }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E5E88u); c.r[19].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0034(c, 133u, depth + 1u); else { c.pc = 0x001D14E0u; return; } if (c.pc != 0x001E5E88u) [[unlikely]] return; }
L_001E5E88:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_001E5EB4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E5E98u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0034(c, 132u, depth + 1u); else { c.pc = 0x001D14B0u; return; } if (c.pc != 0x001E5E98u) [[unlikely]] return; }
L_001E5E98:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_001E5EB0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E5EA8u);  if (depth < kMaxDepth) unit_0034(c, 131u, depth + 1u); else { c.pc = 0x001D14A0u; return; } if (c.pc != 0x001E5EA8u) [[unlikely]] return; }
L_001E5EA8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001E5EBC; } }
L_001E5EB0:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 1;
L_001E5EB4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E5EBCu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0039(c, 27u, depth + 1u); else { c.pc = 0x001E4510u; return; } if (c.pc != 0x001E5EBCu) [[unlikely]] return; }
L_001E5EBC:
    st16((c.r[20].w[0] + 472u), static_cast<std::uint16_t>(c.r[19].w[0]));
    set32(c.r[2], 0u + 198u);
    st16((c.r[20].w[0] + 474u), static_cast<std::uint16_t>(c.r[16].w[0]));
    set32(c.r[3], ld32((c.r[20].w[0] + 164u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_001E6300; } }
    set32(c.r[2], 0u + 220u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 234u);  if (t) { goto L_001E62FC; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001E62FC; } }
    set32(c.r[2], 0u + 53u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_001E62FC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E5EFCu);  if (depth < kMaxDepth) unit_0034(c, 238u, depth + 1u); else { c.pc = 0x001D36A0u; return; } if (c.pc != 0x001E5EFCu) [[unlikely]] return; }
L_001E5EFC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001E62FC; } }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != 0ull;  if (t) { goto L_001E61D8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E5F14u);  if (depth < kMaxDepth) unit_0038(c, 37u, depth + 1u); else { c.pc = 0x001E06F0u; return; } if (c.pc != 0x001E5F14u) [[unlikely]] return; }
L_001E5F14:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001E6138; } }
    set32(c.r[3], ld32((c.r[20].w[0] + 980u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001E61D8; } }
    set32(c.r[2], ld32((c.r[20].w[0] + 984u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_001E61D8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E5F40u);  if (depth < kMaxDepth) unit_0033(c, 101u, depth + 1u); else { c.pc = 0x001CD4B0u; return; } if (c.pc != 0x001E5F40u) [[unlikely]] return; }
L_001E5F40:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_001E5F98; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E5F50u);  if (depth < kMaxDepth) unit_0034(c, 134u, depth + 1u); else { c.pc = 0x001D14F0u; return; } if (c.pc != 0x001E5F50u) [[unlikely]] return; }
L_001E5F50:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001E5F98; } }
    set32(c.r[2], ld32((c.r[20].w[0] + 60u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001E61D8; } }
    set32(c.r[2], ld32((c.r[2].w[0] + 912u)));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[16], ld32((c.r[20].w[0] + 980u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E5F78u); st32((c.r[20].w[0] + 980u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0039(c, 112u, depth + 1u); else { c.pc = 0x001E5680u; return; } if (c.pc != 0x001E5F78u) [[unlikely]] return; }
L_001E5F78:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_001E5F90; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E5F88u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002E(c, 281u, depth + 1u); else { c.pc = 0x001BB030u; return; } if (c.pc != 0x001E5F88u) [[unlikely]] return; }
L_001E5F88:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = ld16((c.r[20].w[0] + 474u));  if (t) { goto L_001E61DC; } }
L_001E5F90:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 980u), c.r[16].w[0]);  if (t) { goto L_001E61D8; } }
L_001E5F98:
    set32(c.r[3], ld32((c.r[20].w[0] + 944u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001E61D8; } }
    set32(c.r[2], ld32((c.r[20].w[0] + 984u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 912u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E5FB8u); set32(c.r[4], ld32((c.r[20].w[0] + 912u)));  if (depth < kMaxDepth) unit_003F(c, 348u, depth + 1u); else { c.pc = 0x001FF740u; return; } if (c.pc != 0x001E5FB8u) [[unlikely]] return; }
L_001E5FB8:
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[22], ld32((c.r[20].w[0] + 980u)));
    set32(c.r[17], c.f[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_001E6118; } }
L_001E5FCC:
    set32(c.r[2], ld32((c.r[20].w[0] + 980u)));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E5FE0u); st32((c.r[20].w[0] + 980u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0039(c, 112u, depth + 1u); else { c.pc = 0x001E5680u; return; } if (c.pc != 0x001E5FE0u) [[unlikely]] return; }
L_001E5FE0:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001E6114; } }
    set32(c.r[2], ld32((c.r[20].w[0] + 984u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 912u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E5FFCu); set32(c.r[4], ld32((c.r[20].w[0] + 912u)));  if (depth < kMaxDepth) unit_003F(c, 348u, depth + 1u); else { c.pc = 0x001FF740u; return; } if (c.pc != 0x001E5FFCu) [[unlikely]] return; }
L_001E5FFC:
    set32(c.r[2], ld32((c.r[20].w[0] + 984u)));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    c.r[3].d[0] = ld8((c.r[20].w[0] + 370u));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 370u));
    set32(c.r[4], c.f[0]);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[1].d[0] = c.r[4].sd[0] < 16ll ? 1ull : 0ull;  if (t) { goto L_001E6114; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001E6114; } }
    c.r[1].d[0] = c.r[17].sd[0] < 20ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[1].d[0] = c.r[17].sd[0] < 10ll ? 1ull : 0ull;  if (t) { goto L_001E603C; } }
    c.r[1].d[0] = c.r[4].sd[0] < 9ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001E6114; } }
    c.r[1].d[0] = c.r[17].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 1;
L_001E603C:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull; c.r[1].d[0] = c.r[4].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;  if (t) { goto L_001E6054; } }
    c.r[1].d[0] = c.r[4].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001E6114; } }
    c.r[1].d[0] = c.r[4].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 1;
L_001E6054:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[2], c.r[29].w[0] + 176u);  if (t) { goto L_001E6114; } }
    st128((c.r[2].w[0]) & ~15u, c.vu0.vf[0]);
    set32(c.r[2], c.r[29].w[0] + 192u);
    st128((c.r[2].w[0]) & ~15u, c.vu0.vf[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    ld128((c.r[20].w[0] + 208u) & ~15u, c.r[2]);
    c.f[1] = ld32((c.r[1].w[0] + 21616u));
    st128((c.r[29].w[0] + 176u) & ~15u, c.r[2]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    ld128((c.r[20].w[0] + 224u) & ~15u, c.r[2]);
    c.f[0] = ld32((c.r[1].w[0] + 21672u));
    st128((c.r[29].w[0] + 192u) & ~15u, c.r[2]);
    set32(c.r[2], ld32((c.r[20].w[0] + 240u)));
    st32((c.r[29].w[0] + 208u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 944u)));
    c.f[2] = c.r[2].w[0];
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.f[1] = fp::mul(c.f[1], c.f[2]);
    st32((c.r[29].w[0] + 180u), c.f[1]);
    c.f[1] = ld32((c.r[29].w[0] + 180u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 23;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);  if (t) { goto L_001E60CC; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = ld32((c.r[1].w[0] + 21688u));
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 180u), c.f[0]);  if (t) { goto L_001E60EC; } }
L_001E60CC:
    c.f[0] = ld32((c.r[1].w[0] + 21664u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001E60EC; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = ld32((c.r[1].w[0] + 21688u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 180u), c.f[0]);
    c.budget -= 4;
L_001E60EC:
    set32(c.r[2], ld32((c.r[20].w[0] + 984u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[12] = ld32((c.r[1].w[0] + 21616u));
    set32(c.r[5], ld32((c.r[2].w[0] + 240u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E6104u); set32(c.r[4], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_0011(c, 83u, depth + 1u); else { c.pc = 0x00145900u; return; } if (c.pc != 0x001E6104u) [[unlikely]] return; }
L_001E6104:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001E6114; } }
    set32(c.r[22], ld32((c.r[20].w[0] + 980u)));
    c.budget -= 1;
L_001E6114:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_001E6118:
    c.r[2].d[0] = c.r[16].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001E5FCCu | kUnwind; return; } goto L_001E5FCC; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E6130u); st32((c.r[20].w[0] + 980u), c.r[22].w[0]);  if (depth < kMaxDepth) unit_002E(c, 281u, depth + 1u); else { c.pc = 0x001BB030u; return; } if (c.pc != 0x001E6130u) [[unlikely]] return; }
L_001E6130:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E61D8; } }
L_001E6138:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E6140u);  if (depth < kMaxDepth) unit_0038(c, 37u, depth + 1u); else { c.pc = 0x001E06F0u; return; } if (c.pc != 0x001E6140u) [[unlikely]] return; }
L_001E6140:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_001E61A8; } }
    c.r[2].d[0] = ld16((c.r[20].w[0] + 474u));
    c.r[2].d[0] = c.r[2].d[0] & 8ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_001E61D8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].sd[0] < 8ll ? 1ull : 0ull;  if (t) { goto L_001E6198; } }
L_001E6164:
    set32(c.r[2], ld32((c.r[20].w[0] + 980u)));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E6178u); st32((c.r[20].w[0] + 980u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0039(c, 112u, depth + 1u); else { c.pc = 0x001E5680u; return; } if (c.pc != 0x001E6178u) [[unlikely]] return; }
L_001E6178:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001E6190; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[20].w[0] + 591u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_001E61D8; } }
L_001E6190:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 2;
L_001E6198:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001E6164u | kUnwind; return; } goto L_001E6164; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E61D8; } }
L_001E61A8:
    c.r[2].d[0] = ld16((c.r[20].w[0] + 474u));
    c.r[2].d[0] = c.r[2].d[0] & 8ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001E61D8; } }
    set32(c.r[2], ld32((c.r[20].w[0] + 980u)));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E61D0u); st32((c.r[20].w[0] + 980u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_002E(c, 281u, depth + 1u); else { c.pc = 0x001BB030u; return; } if (c.pc != 0x001E61D0u) [[unlikely]] return; }
L_001E61D0:
    set32(c.r[2], 0u + 1u);
    st8((c.r[20].w[0] + 591u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_001E61D8:
    c.r[2].d[0] = ld16((c.r[20].w[0] + 474u));
    c.budget -= 1;
L_001E61DC:
    c.r[2].d[0] = c.r[2].d[0] & 8ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001E6214; } }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_001E6214; } }
    set32(c.r[2], ld32((c.r[20].w[0] + 980u)));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E6208u); st32((c.r[20].w[0] + 980u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_002E(c, 281u, depth + 1u); else { c.pc = 0x001BB030u; return; } if (c.pc != 0x001E6208u) [[unlikely]] return; }
L_001E6208:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[20].w[0] + 591u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_001E62FC; } }
L_001E6214:
    c.r[2].d[0] = ld16((c.r[20].w[0] + 472u));
    c.r[2].d[0] = c.r[2].d[0] & 8ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[16], 0u + 10u);  if (t) { goto L_001E62F8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E622Cu);  if (depth < kMaxDepth) unit_0038(c, 37u, depth + 1u); else { c.pc = 0x001E06F0u; return; } if (c.pc != 0x001E622Cu) [[unlikely]] return; }
L_001E622C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001E6238; } }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001E6238:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 591u)));
    c.r[1].d[0] = c.r[16].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001E62E8; } }
    set32(c.r[2], ld32((c.r[20].w[0] + 984u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001E62E8; } }
    set32(c.r[4], ld32((c.r[20].w[0] + 912u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E6260u); set32(c.r[5], ld32((c.r[2].w[0] + 912u)));  if (depth < kMaxDepth) unit_003F(c, 348u, depth + 1u); else { c.pc = 0x001FF740u; return; } if (c.pc != 0x001E6260u) [[unlikely]] return; }
L_001E6260:
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[17], ld32((c.r[20].w[0] + 980u)));
    set32(c.r[18], c.f[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_001E62C8; } }
L_001E6274:
    set32(c.r[2], ld32((c.r[20].w[0] + 980u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[20].w[0] + 980u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[20].w[0] + 912u)));
    set32(c.r[2], ld32((c.r[20].w[0] + 980u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_001E62C4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E6298u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002E(c, 281u, depth + 1u); else { c.pc = 0x001BB030u; return; } if (c.pc != 0x001E6298u) [[unlikely]] return; }
L_001E6298:
    set32(c.r[2], ld32((c.r[20].w[0] + 984u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 912u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E62A8u); set32(c.r[4], ld32((c.r[20].w[0] + 912u)));  if (depth < kMaxDepth) unit_003F(c, 348u, depth + 1u); else { c.pc = 0x001FF740u; return; } if (c.pc != 0x001E62A8u) [[unlikely]] return; }
L_001E62A8:
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    c.r[1].d[0] = c.r[2].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001E62C4; } }
    set32(c.r[17], ld32((c.r[20].w[0] + 980u)));
    c.budget -= 1;
L_001E62C4:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_001E62C8:
    c.r[2].d[0] = c.r[16].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001E6274u | kUnwind; return; } goto L_001E6274; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E62E0u); st32((c.r[20].w[0] + 980u), c.r[17].w[0]);  if (depth < kMaxDepth) unit_002E(c, 281u, depth + 1u); else { c.pc = 0x001BB030u; return; } if (c.pc != 0x001E62E0u) [[unlikely]] return; }
L_001E62E0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E62FC; } }
L_001E62E8:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 591u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[20].w[0] + 591u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_001E62FC; } }
L_001E62F8:
    st8((c.r[20].w[0] + 591u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_001E62FC:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_001E6300:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E6308u);  if (depth < kMaxDepth) unit_0039(c, 49u, depth + 1u); else { c.pc = 0x001E4990u; return; } if (c.pc != 0x001E6308u) [[unlikely]] return; }
L_001E6308:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E6318u); c.r[17].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002E(c, 112u, depth + 1u); else { c.pc = 0x001B9B80u; return; } if (c.pc != 0x001E6318u) [[unlikely]] return; }
L_001E6318:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);  if (t) { goto L_001E6324; } }
    set32(c.r[17], 0u + 1u);
    c.budget -= 1;
L_001E6324:
    set32(c.r[2], ld32((c.r[1].w[0] + 31472u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001E6348; } }
    c.f[1] = ld32((c.r[20].w[0] + 1240u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u - 1u);  if (t) { goto L_001E6350; } }
L_001E6348:
    set32(c.r[17], 0u + 1u);
    set32(c.r[2], 0u - 1u);
    c.budget -= 2;
L_001E6350:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != c.r[2].d[0];  if (t) { goto L_001E649C; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull;  if (t) { goto L_001E649C; } }
    set32(c.r[17], ld32((c.r[21].w[0] + 28u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E636Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 112u, depth + 1u); else { c.pc = 0x001B9B80u; return; } if (c.pc != 0x001E636Cu) [[unlikely]] return; }
L_001E636C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001E6380; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 468u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[2].d[0] | 8ull;  if (t) { goto L_001E6384; } }
L_001E6380:
    set32(c.r[4], ld32((c.r[17].w[0] + 468u)));
    c.budget -= 1;
L_001E6384:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[2], ld32((c.r[1].w[0] - 1536u)));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 6);
    set32(c.r[4], c.r[29].w[0] + 160u);
    set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);
    st128((c.r[4].w[0]) & ~15u, c.vu0.vf[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    c.f[1] = 0u;
    c.r[3].d[0] = ld8((c.r[5].w[0] + 10u));
    c.r[2].d[0] = ld8((c.r[5].w[0] + 11u));
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    c.r[4].d[0] = c.r[3].d[0] & 255ull;
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    c.r[1].d[0] = c.r[4].sd[0] < 121ll ? 1ull : 0ull;
    st32((c.r[29].w[0] + 148u), c.f[1]);
    set32(c.r[2], c.r[4].w[0] - 127u);
    c.f[1] = c.r[2].w[0];
    st32((c.r[29].w[0] + 156u), c.f[0]);
    set32(c.r[2], c.r[3].w[0] - 127u);
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[29].w[0] + 144u), c.f[1]);
    c.budget -= 31;
    { const bool t = c.r[1].d[0] != 0ull; st32((c.r[29].w[0] + 152u), c.f[0]);  if (t) { goto L_001E6420; } }
    c.r[1].d[0] = c.r[4].sd[0] < 134ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[1].d[0] = c.r[3].sd[0] < 121ll ? 1ull : 0ull;  if (t) { goto L_001E6420; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[4], c.r[29].w[0] + 160u);  if (t) { goto L_001E6424; } }
    c.r[2].d[0] = c.r[3].sd[0] < 134ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001E649C; } }
L_001E6420:
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.budget -= 1;
L_001E6424:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E642Cu); set32(c.r[5], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_0011(c, 24u, depth + 1u); else { c.pc = 0x00144550u; return; } if (c.pc != 0x001E642Cu) [[unlikely]] return; }
L_001E642C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[3] = ld32((c.r[1].w[0] + 21688u));
    st32((c.r[29].w[0] + 236u), c.f[0]);
    c.f[2] = ld32((c.r[29].w[0] + 236u));
    c.f[0] = c.r[2].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[1] = ld32((c.r[1].w[0] + 21696u));
    c.f[2] = fp::add(c.f[3], c.f[2]);
    c.f[1] = fp::mul(c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 13;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001E6470; } }
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[3], c.f[1]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[3].d[0] & 65535ull;  if (t) { goto L_001E648C; } }
L_001E6470:
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[3], c.f[1]);
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.r[2].d[0] = c.r[3].d[0] & 65535ull;
    c.budget -= 7;
L_001E648C:
    c.r[2].d[0] = c.r[2].d[0] & 4095ull;
    set32(c.r[2], c.r[2].w[0] + 256u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 9));
    c.r[16].d[0] = c.r[2].d[0] & 7ull;
    c.budget -= 4;
L_001E649C:
    st32((c.r[20].w[0] + 944u), c.r[16].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[5], 0u + 31u);  if (t) { goto L_001E64C4; } }
L_001E64A8:
    set32(c.r[4], c.r[5].w[0] + c.r[20].w[0]);
    set32(c.r[3], c.r[2].w[0] + c.r[20].w[0]);
    set32(c.r[5], c.r[5].w[0] - 1u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 947u)));
    st8((c.r[4].w[0] + 948u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld16((c.r[3].w[0] + 476u));
    st16((c.r[3].w[0] + 478u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 7;
L_001E64C4:
    c.budget -= 2;
    { const bool t = c.r[5].sd[0] > 0; set32(c.r[2], c.r[5].w[0] << 1);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001E64A8u | kUnwind; return; } goto L_001E64A8; } }
    set32(c.r[3], ld32((c.r[20].w[0] + 944u)));
    set32(c.r[2], 0u - 1u);
    st8((c.r[20].w[0] + 948u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[20].w[0] + 474u));
    st16((c.r[20].w[0] + 478u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E64E8u); st32((c.r[20].w[0] + 620u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x001E64E8u) [[unlikely]] return; }
L_001E64E8:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 596u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_001E65E4; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[20].w[0] + 596u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 596u)));
    c.budget -= 5;
    { const bool t = c.r[2].sd[0] > 0;  if (t) { goto L_001E65DC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E6510u);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x001E6510u) [[unlikely]] return; }
L_001E6510:
    c.r[3].d[0] = ld8((c.r[2].w[0] + 23u));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_001E6530; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E6528u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0039(c, 27u, depth + 1u); else { c.pc = 0x001E4510u; return; } if (c.pc != 0x001E6528u) [[unlikely]] return; }
L_001E6528:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[20].w[0] + 472u), static_cast<std::uint16_t>(0u));  if (t) { goto L_001E65E0; } }
L_001E6530:
    set32(c.r[3], ld32((c.r[20].w[0] + 240u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42280000u);
    c.f[0] = c.r[2].w[0];
    c.f[1] = ld32((c.r[3].w[0] + 8u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_001E6558; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[20].w[0] + 596u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_001E65DC; } }
L_001E6558:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E6560u); set32(c.r[5], 0u + 716u);  if (depth < kMaxDepth) unit_0030(c, 17u, depth + 1u); else { c.pc = 0x001C02A0u; return; } if (c.pc != 0x001E6560u) [[unlikely]] return; }
L_001E6560:
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == 0ull; c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_001E6570; } }
    set32(c.r[6], c.r[6].w[0] + 436u);
    c.budget -= 1;
L_001E6570:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E6578u); set32(c.r[5], 0u + 300u);  if (depth < kMaxDepth) unit_002F(c, 16u, depth + 1u); else { c.pc = 0x001BD040u; return; } if (c.pc != 0x001E6578u) [[unlikely]] return; }
L_001E6578:
    c.r[9].d[0] = ld8((c.r[20].w[0] + 394u));
    c.r[2].d[0] = 0ull & 1ull;
    set32(c.r[7], 0u - 65u);
    set32(c.r[6], c.r[2].w[0] << 6);
    set32(c.r[3], c.r[2].w[0] << 2);
    c.r[8].d[0] = 0ull + static_cast<std::uint64_t>(64ll);
    set32(c.r[4], 0u - 5u);
    c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(4ll);
    c.r[2].d[0] = c.r[9].d[0] & c.r[7].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[8].d[0];
    st8((c.r[20].w[0] + 394u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[20].w[0] + 402u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[7].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[6].d[0];
    st8((c.r[20].w[0] + 402u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[20].w[0] + 392u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[4].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[5].d[0];
    st8((c.r[20].w[0] + 392u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[20].w[0] + 400u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[4].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[20].w[0] + 400u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st16((c.r[20].w[0] + 596u), static_cast<std::uint16_t>(0u));
    st8((c.r[20].w[0] + 589u), static_cast<std::uint8_t>(0u));
    c.budget -= 25;
L_001E65DC:
    st16((c.r[20].w[0] + 472u), static_cast<std::uint16_t>(0u));
    c.budget -= 1;
L_001E65E0:
    st16((c.r[20].w[0] + 474u), static_cast<std::uint16_t>(0u));
    c.budget -= 1;
L_001E65E4:
    set32(c.r[2], ld32((c.r[20].w[0] + 612u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_001E6610; } }
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[20].w[0] + 612u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 612u)));
    c.r[1].d[0] = c.r[2].sd[0] < 31ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_001E6610; } }
    set32(c.r[2], 0u - 1u);
    st32((c.r[20].w[0] + 612u), c.r[2].w[0]);
    c.budget -= 2;
L_001E6610:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 608u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0; c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_001E6624; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    st8((c.r[20].w[0] + 608u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_001E6624:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E662Cu);  if (depth < kMaxDepth) unit_0038(c, 96u, depth + 1u); else { c.pc = 0x001E1780u; return; } if (c.pc != 0x001E662Cu) [[unlikely]] return; }
L_001E662C:
    set32(c.r[3], ld32((c.r[20].w[0] + 752u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_001E6654; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    st32((c.r[20].w[0] + 752u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[20].w[0] + 752u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001E6654; } }
    c.r[3].d[0] = 0ull | 65535ull;
    st32((c.r[20].w[0] + 748u), c.r[3].w[0]);
    c.budget -= 2;
L_001E6654:
    c.r[3].d[0] = ld8((c.r[20].w[0] + 372u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001E6678; } }
    c.r[5].d[0] = ld8((c.r[20].w[0] + 392u));
    set32(c.r[3], 0u - 5u);
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(4ll);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st8((c.r[20].w[0] + 392u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 6;
L_001E6678:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 240u);  c.pc = t; return; }
L_001E66B0:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_001E66D0; } }
    set32(c.r[4], c.r[4].w[0] + 436u);
    c.budget -= 1;
L_001E66D0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x53590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E66DCu); c.r[5].d[0] = c.r[2].d[0] | 20035ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x001E66DCu) [[unlikely]] return; }
L_001E66DC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_001E66E8; } }
    set32(c.r[18], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 1;
L_001E66E8:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_001E67A0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E66F8u); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0033(c, 108u, depth + 1u); else { c.pc = 0x001CD5D0u; return; } if (c.pc != 0x001E66F8u) [[unlikely]] return; }
L_001E66F8:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_001E6794; } }
L_001E6704:
    set32(c.r[2], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 80u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[18].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0x43480000u);  if (t) { goto L_001E672C; } }
    set32(c.r[4], ld32((c.r[4].w[0] + 28u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E6724u); set32(c.r[5], 0u + 660u);  if (depth < kMaxDepth) unit_0030(c, 17u, depth + 1u); else { c.pc = 0x001C02A0u; return; } if (c.pc != 0x001E6724u) [[unlikely]] return; }
L_001E6724:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[16].w[0] + 1u);  if (t) { goto L_001E6794; } }
L_001E672C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E6734u); c.r[5].d[0] = c.r[2].d[0] | 16722ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x001E6734u) [[unlikely]] return; }
L_001E6734:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_001E6740; } }
    set32(c.r[19], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 1;
L_001E6740:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull; c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_001E6790; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E6750u);  if (depth < kMaxDepth) unit_0034(c, 158u, depth + 1u); else { c.pc = 0x001D1A70u; return; } if (c.pc != 0x001E6750u) [[unlikely]] return; }
L_001E6750:
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[5].d[0]; set32(c.r[3], 0u + 2u);  if (t) { goto L_001E6770; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E6768u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0030(c, 17u, depth + 1u); else { c.pc = 0x001C02A0u; return; } if (c.pc != 0x001E6768u) [[unlikely]] return; }
L_001E6768:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E6790; } }
L_001E6770:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_001E6788; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E6780u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0030(c, 17u, depth + 1u); else { c.pc = 0x001C02A0u; return; } if (c.pc != 0x001E6780u) [[unlikely]] return; }
L_001E6780:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E6790; } }
L_001E6788:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E6790u);  if (depth < kMaxDepth) unit_0039(c, 27u, depth + 1u); else { c.pc = 0x001E4510u; return; } if (c.pc != 0x001E6790u) [[unlikely]] return; }
L_001E6790:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_001E6794:
    c.r[3].d[0] = c.r[16].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001E6704u | kUnwind; return; } goto L_001E6704; } }
L_001E67A0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_001E67C0:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_001E67E0; } }
    set32(c.r[4], c.r[4].w[0] + 436u);
    c.budget -= 1;
L_001E67E0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x53590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E67ECu); c.r[5].d[0] = c.r[2].d[0] | 20035ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x001E67ECu) [[unlikely]] return; }
L_001E67EC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_001E67F8; } }
    set32(c.r[18], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 1;
L_001E67F8:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_001E68CC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E6808u); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0033(c, 108u, depth + 1u); else { c.pc = 0x001CD5D0u; return; } if (c.pc != 0x001E6808u) [[unlikely]] return; }
L_001E6808:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_001E68C0; } }
L_001E6814:
    set32(c.r[2], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 80u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[18].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0x43480000u);  if (t) { goto L_001E6858; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43480000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E6834u); c.r[5].d[0] = c.r[2].d[0] | 16722ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x001E6834u) [[unlikely]] return; }
L_001E6834:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_001E6840; } }
    set32(c.r[4], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 1;
L_001E6840:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[5], 0u + 1u);  if (t) { goto L_001E68BC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E6850u);  if (depth < kMaxDepth) unit_0039(c, 27u, depth + 1u); else { c.pc = 0x001E4510u; return; } if (c.pc != 0x001E6850u) [[unlikely]] return; }
L_001E6850:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[16].w[0] + 1u);  if (t) { goto L_001E68C0; } }
L_001E6858:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E6860u); c.r[5].d[0] = c.r[2].d[0] | 16722ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x001E6860u) [[unlikely]] return; }
L_001E6860:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_001E686C; } }
    set32(c.r[19], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 1;
L_001E686C:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull; c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_001E68BC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E687Cu);  if (depth < kMaxDepth) unit_0034(c, 158u, depth + 1u); else { c.pc = 0x001D1A70u; return; } if (c.pc != 0x001E687Cu) [[unlikely]] return; }
L_001E687C:
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[5].d[0]; set32(c.r[3], 0u + 2u);  if (t) { goto L_001E689C; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E6894u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0030(c, 17u, depth + 1u); else { c.pc = 0x001C02A0u; return; } if (c.pc != 0x001E6894u) [[unlikely]] return; }
L_001E6894:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E68BC; } }
L_001E689C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_001E68B4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E68ACu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0030(c, 17u, depth + 1u); else { c.pc = 0x001C02A0u; return; } if (c.pc != 0x001E68ACu) [[unlikely]] return; }
L_001E68AC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E68BC; } }
L_001E68B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E68BCu);  if (depth < kMaxDepth) unit_0039(c, 27u, depth + 1u); else { c.pc = 0x001E4510u; return; } if (c.pc != 0x001E68BCu) [[unlikely]] return; }
L_001E68BC:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_001E68C0:
    c.r[3].d[0] = c.r[16].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001E6814u | kUnwind; return; } goto L_001E6814; } }
L_001E68CC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_001E68F0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], 0u + 660u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 164u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001E6FA4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E6914u);  if (depth < kMaxDepth) unit_0034(c, 142u, depth + 1u); else { c.pc = 0x001D16A0u; return; } if (c.pc != 0x001E6914u) [[unlikely]] return; }
L_001E6914:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001E692C; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 168u)));
    set32(c.r[2], 0u + 112u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001E6FA8; } }
L_001E692C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E6934u);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x001E6934u) [[unlikely]] return; }
L_001E6934:
    c.r[2].d[0] = ld8((c.r[2].w[0] + 20u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001E6C0C; } }
    c.f[1] = ld32((c.r[16].w[0] + 228u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC2200000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001E6C08; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 395u));
    c.r[2].d[0] = c.r[2].d[0] << 60;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001E6C08; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E6978u);  if (depth < kMaxDepth) unit_0034(c, 173u, depth + 1u); else { c.pc = 0x001D2260u; return; } if (c.pc != 0x001E6978u) [[unlikely]] return; }
L_001E6978:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001E6A78; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 240u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00420000u);
    c.f[0] = ld32((c.r[1].w[0] - 28080u));
    c.f[1] = ld32((c.r[2].w[0]));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[1].sd[0] = static_cast<std::int32_t>(0x00420000u);  if (t) { goto L_001E69DC; } }
    c.f[0] = ld32((c.r[1].w[0] - 28072u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001E69DC; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00420000u);
    c.f[1] = ld32((c.r[2].w[0] + 8u));
    c.f[0] = ld32((c.r[1].w[0] - 28076u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[1].sd[0] = static_cast<std::int32_t>(0x00420000u);  if (t) { goto L_001E69DC; } }
    c.f[0] = ld32((c.r[1].w[0] - 28068u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001E69E0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_001E69E0; } }
L_001E69DC:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001E69E0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001E6A78; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E69F0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 191u, depth + 1u); else { c.pc = 0x001E66B0u; return; } if (c.pc != 0x001E69F0u) [[unlikely]] return; }
L_001E69F0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[0] = ld32((c.r[1].w[0] + 21608u));
    c.f[1] = ld32((c.r[16].w[0] + 224u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    st32((c.r[16].w[0] + 224u), c.f[0]);
    c.f[1] = ld32((c.r[16].w[0] + 232u));
    c.f[0] = ld32((c.r[1].w[0] + 21608u));
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    c.budget -= 12;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0] + 232u), c.f[0]);  if (t) { goto L_001E6A24; } }
    set32(c.r[4], c.r[4].w[0] + 436u);
    c.budget -= 1;
L_001E6A24:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x47520000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E6A30u); c.r[5].d[0] = c.r[2].d[0] | 16726ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x001E6A30u) [[unlikely]] return; }
L_001E6A30:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001E6A40; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 16u)));  if (t) { goto L_001E6A44; } }
L_001E6A40:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001E6A44:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);  if (t) { goto L_001E6A70; } }
    c.f[1] = ld32((c.r[1].w[0] + 21640u));
    c.f[0] = ld32((c.r[16].w[0] + 224u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    st32((c.r[2].w[0] + 64u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 232u));
    c.f[1] = ld32((c.r[1].w[0] + 21640u));
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    st32((c.r[2].w[0] + 72u), c.f[0]);
    c.budget -= 9;
L_001E6A70:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_001E6FA8; } }
L_001E6A78:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 31216u)));
    c.r[2].d[0] = c.r[3].d[0] & 2ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = c.r[3].d[0] & 8ull;  if (t) { goto L_001E6AF8; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 240u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00420000u);
    c.f[0] = ld32((c.r[1].w[0] - 28064u));
    c.f[1] = ld32((c.r[2].w[0]));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[1].sd[0] = static_cast<std::int32_t>(0x00420000u);  if (t) { goto L_001E6AE8; } }
    c.f[0] = ld32((c.r[1].w[0] - 28056u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001E6AE8; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00420000u);
    c.f[1] = ld32((c.r[2].w[0] + 8u));
    c.f[0] = ld32((c.r[1].w[0] - 28060u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[1].sd[0] = static_cast<std::int32_t>(0x00420000u);  if (t) { goto L_001E6AE8; } }
    c.f[0] = ld32((c.r[1].w[0] - 28052u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001E6AEC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_001E6AEC; } }
L_001E6AE8:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001E6AEC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001E6B6C; } }
    c.r[2].d[0] = c.r[3].d[0] & 8ull;
    c.budget -= 1;
L_001E6AF8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001E6C08; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 240u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00420000u);
    c.f[0] = ld32((c.r[1].w[0] - 28048u));
    c.f[1] = ld32((c.r[2].w[0]));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[1].sd[0] = static_cast<std::int32_t>(0x00420000u);  if (t) { goto L_001E6B5C; } }
    c.f[0] = ld32((c.r[1].w[0] - 28040u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001E6B5C; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00420000u);
    c.f[1] = ld32((c.r[2].w[0] + 8u));
    c.f[0] = ld32((c.r[1].w[0] - 28044u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[1].sd[0] = static_cast<std::int32_t>(0x00420000u);  if (t) { goto L_001E6B5C; } }
    c.f[0] = ld32((c.r[1].w[0] - 28036u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001E6B60; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_001E6B60; } }
L_001E6B5C:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001E6B60:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001E6C08; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_001E6B6C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E6B74u);  if (depth < kMaxDepth) unit_0039(c, 191u, depth + 1u); else { c.pc = 0x001E66B0u; return; } if (c.pc != 0x001E6B74u) [[unlikely]] return; }
L_001E6B74:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[0] = ld32((c.r[1].w[0] + 21600u));
    c.f[1] = ld32((c.r[16].w[0] + 224u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    st32((c.r[16].w[0] + 224u), c.f[0]);
    c.f[1] = ld32((c.r[16].w[0] + 232u));
    c.f[0] = ld32((c.r[1].w[0] + 21600u));
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    c.budget -= 12;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0] + 232u), c.f[0]);  if (t) { goto L_001E6BA8; } }
    set32(c.r[4], c.r[4].w[0] + 436u);
    c.budget -= 1;
L_001E6BA8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x47520000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E6BB4u); c.r[5].d[0] = c.r[2].d[0] | 16726ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x001E6BB4u) [[unlikely]] return; }
L_001E6BB4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001E6BC4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 16u)));  if (t) { goto L_001E6BC8; } }
L_001E6BC4:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001E6BC8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001E6C00; } }
    c.f[1] = ld32((c.r[16].w[0] + 224u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = ld32((c.r[1].w[0] + 21592u));
    c.f[1] = c.f[1] ^ fp::kSign;
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    st32((c.r[2].w[0] + 64u), c.f[0]);
    c.f[1] = ld32((c.r[16].w[0] + 232u));
    c.f[0] = ld32((c.r[1].w[0] + 21592u));
    c.f[1] = c.f[1] ^ fp::kSign;
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    st32((c.r[2].w[0] + 72u), c.f[0]);
    c.budget -= 12;
L_001E6C00:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_001E6FA8; } }
L_001E6C08:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_001E6C0C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E6C14u);  if (depth < kMaxDepth) unit_0058(c, 65u, depth + 1u); else { c.pc = 0x002607E0u; return; } if (c.pc != 0x001E6C14u) [[unlikely]] return; }
L_001E6C14:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001E6C24; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_001E6FA8; } }
L_001E6C24:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E6C2Cu);  if (depth < kMaxDepth) unit_003D(c, 81u, depth + 1u); else { c.pc = 0x001F53D0u; return; } if (c.pc != 0x001E6C2Cu) [[unlikely]] return; }
L_001E6C2C:
    set32(c.r[3], 0u + 22u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_001E6D48; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 240u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43960000u);
    c.f[0] = c.r[2].w[0];
    c.f[1] = ld32((c.r[3].w[0] + 8u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[2].sd[0] = static_cast<std::int32_t>(0x437A0000u);  if (t) { goto L_001E6D48; } }
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001E6D48; } }
    c.f[1] = ld32((c.r[16].w[0] + 228u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC2100000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);  if (t) { goto L_001E6D48; } }
    c.f[0] = ld32((c.r[1].w[0] + 21584u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001E6D48; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 395u));
    c.r[2].d[0] = c.r[2].d[0] << 60;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001E6D48; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E6CB0u);  if (depth < kMaxDepth) unit_0039(c, 191u, depth + 1u); else { c.pc = 0x001E66B0u; return; } if (c.pc != 0x001E6CB0u) [[unlikely]] return; }
L_001E6CB0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[0] = ld32((c.r[1].w[0] + 21600u));
    c.f[1] = ld32((c.r[16].w[0] + 224u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    st32((c.r[16].w[0] + 224u), c.f[0]);
    c.f[1] = ld32((c.r[16].w[0] + 232u));
    c.f[0] = ld32((c.r[1].w[0] + 21600u));
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    c.budget -= 12;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0] + 232u), c.f[0]);  if (t) { goto L_001E6CE4; } }
    set32(c.r[4], c.r[4].w[0] + 436u);
    c.budget -= 1;
L_001E6CE4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x47520000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E6CF0u); c.r[5].d[0] = c.r[2].d[0] | 16726ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x001E6CF0u) [[unlikely]] return; }
L_001E6CF0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_001E6CFC; } }
    set32(c.r[3], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 1;
L_001E6CFC:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_001E6D40; } }
    set32(c.r[2], 0u + 6u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    st8((c.r[16].w[0] + 380u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.f[1] = ld32((c.r[16].w[0] + 224u));
    c.f[0] = ld32((c.r[1].w[0] + 21576u));
    c.f[1] = c.f[1] ^ fp::kSign;
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    st32((c.r[3].w[0] + 64u), c.f[0]);
    c.f[1] = ld32((c.r[16].w[0] + 232u));
    c.f[0] = ld32((c.r[1].w[0] + 21576u));
    c.f[1] = c.f[1] ^ fp::kSign;
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    st32((c.r[3].w[0] + 72u), c.f[0]);
    set32(c.r[2], 0u + 1u);
    c.budget -= 15;
L_001E6D40:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_001E6FAC; } }
L_001E6D48:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E6D50u);  if (depth < kMaxDepth) unit_003D(c, 81u, depth + 1u); else { c.pc = 0x001F53D0u; return; } if (c.pc != 0x001E6D50u) [[unlikely]] return; }
L_001E6D50:
    c.r[1].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_001E6D70; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E6D64u);  if (depth < kMaxDepth) unit_003D(c, 81u, depth + 1u); else { c.pc = 0x001F53D0u; return; } if (c.pc != 0x001E6D64u) [[unlikely]] return; }
L_001E6D64:
    set32(c.r[3], 0u + 8u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_001E6E90; } }
L_001E6D70:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 395u));
    c.r[2].d[0] = c.r[2].d[0] << 60;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001E6E90; } }
    c.f[1] = ld32((c.r[16].w[0] + 228u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC2B80000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001E6E90; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 240u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = ld32((c.r[1].w[0] + 21568u));
    c.f[1] = ld32((c.r[2].w[0] + 8u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001E6DF4; } }
    c.f[1] = ld32((c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41700000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001E6DF0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC1D00000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001E6E90; } }
L_001E6DF0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_001E6DF4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E6DFCu);  if (depth < kMaxDepth) unit_0039(c, 191u, depth + 1u); else { c.pc = 0x001E66B0u; return; } if (c.pc != 0x001E6DFCu) [[unlikely]] return; }
L_001E6DFC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[0] = ld32((c.r[1].w[0] + 21560u));
    c.f[1] = ld32((c.r[16].w[0] + 224u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    st32((c.r[16].w[0] + 224u), c.f[0]);
    c.f[1] = ld32((c.r[16].w[0] + 232u));
    c.f[0] = ld32((c.r[1].w[0] + 21600u));
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    c.budget -= 12;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0] + 232u), c.f[0]);  if (t) { goto L_001E6E30; } }
    set32(c.r[4], c.r[4].w[0] + 436u);
    c.budget -= 1;
L_001E6E30:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x47520000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E6E3Cu); c.r[5].d[0] = c.r[2].d[0] | 16726ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x001E6E3Cu) [[unlikely]] return; }
L_001E6E3C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_001E6E48; } }
    set32(c.r[3], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 1;
L_001E6E48:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_001E6E88; } }
    set32(c.r[2], 0u + 6u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    st8((c.r[16].w[0] + 380u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.f[1] = ld32((c.r[1].w[0] + 21592u));
    c.f[0] = ld32((c.r[16].w[0] + 224u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    st32((c.r[3].w[0] + 64u), c.f[0]);
    c.f[1] = ld32((c.r[16].w[0] + 232u));
    c.f[0] = ld32((c.r[1].w[0] + 21576u));
    c.f[1] = c.f[1] ^ fp::kSign;
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    st32((c.r[3].w[0] + 72u), c.f[0]);
    set32(c.r[2], 0u + 1u);
    c.budget -= 14;
L_001E6E88:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E6FA8; } }
L_001E6E90:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E6E98u);  if (depth < kMaxDepth) unit_003D(c, 81u, depth + 1u); else { c.pc = 0x001F53D0u; return; } if (c.pc != 0x001E6E98u) [[unlikely]] return; }
L_001E6E98:
    set32(c.r[3], 0u + 31u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_001E6FA4; } }
    c.f[1] = ld32((c.r[16].w[0] + 228u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC1F00000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001E6FA4; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 395u));
    c.r[2].d[0] = c.r[2].d[0] << 60;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001E6FA4; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 240u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x428C0000u);
    c.f[0] = c.r[2].w[0];
    c.f[1] = ld32((c.r[3].w[0]));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[2].sd[0] = static_cast<std::int32_t>(0x42B80000u);  if (t) { goto L_001E6FA4; } }
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001E6FA4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E6F0Cu);  if (depth < kMaxDepth) unit_0039(c, 191u, depth + 1u); else { c.pc = 0x001E66B0u; return; } if (c.pc != 0x001E6F0Cu) [[unlikely]] return; }
L_001E6F0C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[0] = ld32((c.r[1].w[0] + 21552u));
    c.f[1] = ld32((c.r[16].w[0] + 224u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    st32((c.r[16].w[0] + 224u), c.f[0]);
    c.f[1] = ld32((c.r[16].w[0] + 232u));
    c.f[0] = ld32((c.r[1].w[0] + 21552u));
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    c.budget -= 12;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0] + 232u), c.f[0]);  if (t) { goto L_001E6F40; } }
    set32(c.r[4], c.r[4].w[0] + 436u);
    c.budget -= 1;
L_001E6F40:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x47520000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E6F4Cu); c.r[5].d[0] = c.r[2].d[0] | 16726ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x001E6F4Cu) [[unlikely]] return; }
L_001E6F4C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_001E6F58; } }
    set32(c.r[3], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 1;
L_001E6F58:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_001E6F9C; } }
    set32(c.r[2], 0u + 6u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    st8((c.r[16].w[0] + 380u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.f[1] = ld32((c.r[16].w[0] + 224u));
    c.f[0] = ld32((c.r[1].w[0] + 21592u));
    c.f[1] = c.f[1] ^ fp::kSign;
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    st32((c.r[3].w[0] + 64u), c.f[0]);
    c.f[1] = ld32((c.r[16].w[0] + 232u));
    c.f[0] = ld32((c.r[1].w[0] + 21592u));
    c.f[1] = c.f[1] ^ fp::kSign;
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    st32((c.r[3].w[0] + 72u), c.f[0]);
    set32(c.r[2], 0u + 1u);
    c.budget -= 15;
L_001E6F9C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E6FA8; } }
L_001E6FA4:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001E6FA8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_001E6FAC:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001E6FC0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E6FD4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0034(c, 175u, depth + 1u); else { c.pc = 0x001D2340u; return; } if (c.pc != 0x001E6FD4u) [[unlikely]] return; }
L_001E6FD4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001E70A8; } }
    set32(c.r[2], c.r[29].w[0] + 32u);
    st128((c.r[2].w[0]) & ~15u, c.vu0.vf[0]);
    set32(c.r[2], c.r[29].w[0] + 48u);
    st128((c.r[2].w[0]) & ~15u, c.vu0.vf[0]);
    set32(c.r[4], c.r[29].w[0] + 32u);
    ld128((c.r[16].w[0] + 208u) & ~15u, c.r[2]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[2]);
    ld128((c.r[16].w[0] + 224u) & ~15u, c.r[2]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[2]);
    c.r[2].d[0] = ld8((c.r[16].w[0] + 368u));
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E7010u); set32(c.r[5], 0u - c.r[2].w[0]);  if (depth < kMaxDepth) unit_0038(c, 91u, depth + 1u); else { c.pc = 0x001E1610u; return; } if (c.pc != 0x001E7010u) [[unlikely]] return; }
L_001E7010:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[1] = ld32((c.r[29].w[0] + 36u));
    c.f[0] = ld32((c.r[1].w[0] + 21544u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001E703C; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = ld32((c.r[1].w[0] + 21616u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001E7064; } }
L_001E703C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[1] = ld32((c.r[29].w[0] + 36u));
    c.f[0] = ld32((c.r[1].w[0] + 21536u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);  if (t) { goto L_001E7064; } }
    c.f[0] = ld32((c.r[1].w[0] + 21528u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001E70A8; } }
L_001E7064:
    c.f[1] = ld32((c.r[29].w[0] + 36u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);  if (t) { goto L_001E708C; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = ld32((c.r[1].w[0] + 21680u));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 36u), c.f[0]);  if (t) { goto L_001E7094; } }
L_001E708C:
    c.f[0] = ld32((c.r[1].w[0] + 21520u));
    st32((c.r[29].w[0] + 36u), c.f[0]);
    c.budget -= 2;
L_001E7094:
    c.r[5].d[0] = ld8((c.r[16].w[0] + 368u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E70A0u); set32(c.r[4], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_0038(c, 91u, depth + 1u); else { c.pc = 0x001E1610u; return; } if (c.pc != 0x001E70A0u) [[unlikely]] return; }
L_001E70A0:
    c.f[0] = ld32((c.r[29].w[0] + 36u));
    st32((c.r[16].w[0] + 212u), c.f[0]);
    c.budget -= 2;
L_001E70A8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001E70C0:
    set32(c.r[29], c.r[29].w[0] - 480u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[16], ld32((c.r[4].w[0] + 28u)));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E70F0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0034(c, 127u, depth + 1u); else { c.pc = 0x001D1230u; return; } if (c.pc != 0x001E70F0u) [[unlikely]] return; }
L_001E70F0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001E7130; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 164u)));
    set32(c.r[2], 0u + 4450u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001E712C; } }
    set32(c.r[2], 0u + 4451u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001E712C; } }
    set32(c.r[2], 0u + 4453u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001E712C; } }
    set32(c.r[2], 0u + 4452u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001E7138; } }
L_001E712C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_001E7130:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E7138u);  if (depth < kMaxDepth) unit_0038(c, 66u, depth + 1u); else { c.pc = 0x001E0DC0u; return; } if (c.pc != 0x001E7138u) [[unlikely]] return; }
L_001E7138:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 31184u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001E7158; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E7150u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 212u, depth + 1u); else { c.pc = 0x001E68F0u; return; } if (c.pc != 0x001E7150u) [[unlikely]] return; }
L_001E7150:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { [[clang::musttail]] return unit_003A(c, 266u, depth); } }
L_001E7158:
    set32(c.r[3], ld32((c.r[16].w[0] + 164u)));
    set32(c.r[2], 0u + 3071u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001E7194; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 168u)));
    set32(c.r[2], 0u + 10u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001E7194; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 176u)));
    c.r[2].d[0] = c.r[3].sd[0] < 24ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001E7194; } }
    c.r[1].d[0] = c.r[3].sd[0] < 145ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_001E7270; } }
L_001E7194:
    set32(c.r[3], ld32((c.r[16].w[0] + 164u)));
    set32(c.r[2], 0u + 5207u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001E71C0; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 176u)));
    c.r[2].d[0] = c.r[3].sd[0] < 108ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001E71C0; } }
    c.r[1].d[0] = c.r[3].sd[0] < 203ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_001E7270; } }
L_001E71C0:
    set32(c.r[3], ld32((c.r[16].w[0] + 164u)));
    set32(c.r[2], 0u + 6016u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001E71EC; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 176u)));
    c.r[2].d[0] = c.r[3].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001E71EC; } }
    c.r[1].d[0] = c.r[3].sd[0] < 41ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_001E7270; } }
L_001E71EC:
    set32(c.r[3], ld32((c.r[16].w[0] + 164u)));
    set32(c.r[2], 0u + 4849u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001E7218; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 176u)));
    c.r[2].d[0] = c.r[3].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001E7218; } }
    c.r[1].d[0] = c.r[3].sd[0] < 47ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_001E7270; } }
L_001E7218:
    set32(c.r[3], ld32((c.r[16].w[0] + 164u)));
    set32(c.r[2], 0u + 4788u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001E7244; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 176u)));
    c.r[2].d[0] = c.r[3].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001E7244; } }
    c.r[1].d[0] = c.r[3].sd[0] < 201ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_001E7270; } }
L_001E7244:
    set32(c.r[3], ld32((c.r[16].w[0] + 164u)));
    set32(c.r[2], 0u + 4857u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001E72D0; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 176u)));
    c.r[2].d[0] = c.r[3].sd[0] < 74ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001E72D0; } }
    c.r[1].d[0] = c.r[3].sd[0] < 125ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001E72D0; } }
L_001E7270:
    set32(c.r[2], ld32((c.r[16].w[0] + 60u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001E72D0; } }
    c.f[2] = ld32((c.r[2].w[0] + 228u));
    c.f[1] = ld32((c.r[16].w[0] + 228u));
    c.f[0] = 0u;
    c.f[1] = fp::sub(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001E72A4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x3FC00000u);  if (t) { goto L_001E72AC; } }
L_001E72A4:
    c.f[1] = c.f[1] ^ fp::kSign;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3FC00000u);
    c.budget -= 2;
L_001E72AC:
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001E72D0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E72C8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 201u, depth + 1u); else { c.pc = 0x001E67C0u; return; } if (c.pc != 0x001E72C8u) [[unlikely]] return; }
L_001E72C8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));  if (t) { [[clang::musttail]] return unit_003A(c, 267u, depth); } }
L_001E72D0:
    set32(c.r[3], ld32((c.r[16].w[0] + 164u)));
    set32(c.r[2], 0u + 3071u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001E7344; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 168u)));
    set32(c.r[2], 0u + 10u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001E7344; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 176u)));
    set32(c.r[2], 0u + 24u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001E7344; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 172u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001E7344; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 370u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001E7344; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x53590000u);
    set32(c.r[4], c.r[16].w[0] + 436u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E7328u); c.r[5].d[0] = c.r[2].d[0] | 20035ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x001E7328u) [[unlikely]] return; }
L_001E7328:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_001E733C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[2].w[0] + 16u)));  if (t) { goto L_001E733C; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001E733C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E7344u);  if (depth < kMaxDepth) unit_0033(c, 100u, depth + 1u); else { c.pc = 0x001CD470u; return; } if (c.pc != 0x001E7344u) [[unlikely]] return; }
L_001E7344:
    set32(c.r[3], ld32((c.r[16].w[0] + 164u)));
    set32(c.r[2], 0u + 5207u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001E73A8; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 176u)));
    set32(c.r[2], 0u + 108u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001E73A8; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 172u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001E73A8; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 370u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001E73A8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x53590000u);
    set32(c.r[4], c.r[16].w[0] + 436u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E738Cu); c.r[5].d[0] = c.r[2].d[0] | 20035ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x001E738Cu) [[unlikely]] return; }
L_001E738C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_001E73A0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[2].w[0] + 16u)));  if (t) { goto L_001E73A0; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001E73A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E73A8u);  if (depth < kMaxDepth) unit_0033(c, 100u, depth + 1u); else { c.pc = 0x001CD470u; return; } if (c.pc != 0x001E73A8u) [[unlikely]] return; }
L_001E73A8:
    set32(c.r[2], ld32((c.r[16].w[0] + 172u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001E746C; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 370u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001E746C; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 164u)));
    set32(c.r[2], 0u + 6016u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001E73E0; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 176u)));
    set32(c.r[2], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0x53590000u);  if (t) { goto L_001E7444; } }
L_001E73E0:
    set32(c.r[3], ld32((c.r[16].w[0] + 164u)));
    set32(c.r[2], 0u + 4849u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001E7400; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 176u)));
    set32(c.r[2], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001E7440; } }
L_001E7400:
    set32(c.r[3], ld32((c.r[16].w[0] + 164u)));
    set32(c.r[2], 0u + 4788u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001E7420; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 176u)));
    set32(c.r[2], 0u + 8u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001E7440; } }
L_001E7420:
    set32(c.r[3], ld32((c.r[16].w[0] + 164u)));
    set32(c.r[2], 0u + 4857u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001E746C; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 176u)));
    set32(c.r[2], 0u + 74u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001E746C; } }
L_001E7440:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x53590000u);
    c.budget -= 1;
L_001E7444:
    set32(c.r[4], c.r[16].w[0] + 436u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E7450u); c.r[5].d[0] = c.r[2].d[0] | 20035ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x001E7450u) [[unlikely]] return; }
L_001E7450:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_001E7464; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[2].w[0] + 16u)));  if (t) { goto L_001E7464; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001E7464:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E746Cu);  if (depth < kMaxDepth) unit_0033(c, 100u, depth + 1u); else { c.pc = 0x001CD470u; return; } if (c.pc != 0x001E746Cu) [[unlikely]] return; }
L_001E746C:
    set32(c.r[3], ld32((c.r[16].w[0] + 164u)));
    set32(c.r[2], 0u + 3071u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001E74B4; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 168u)));
    set32(c.r[2], 0u + 10u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001E74B4; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 176u)));
    set32(c.r[2], 0u + 144u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001E74B4; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 172u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001E74B4; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 370u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x53590000u);  if (t) { goto L_001E75D0; } }
L_001E74B4:
    set32(c.r[3], ld32((c.r[16].w[0] + 164u)));
    set32(c.r[2], 0u + 5207u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001E74EC; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 176u)));
    set32(c.r[2], 0u + 202u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001E74EC; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 172u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001E74EC; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 370u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001E75CC; } }
L_001E74EC:
    set32(c.r[3], ld32((c.r[16].w[0] + 164u)));
    set32(c.r[2], 0u + 6016u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001E7524; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 176u)));
    set32(c.r[2], 0u + 40u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001E7524; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 172u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001E7524; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 370u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001E75CC; } }
L_001E7524:
    set32(c.r[3], ld32((c.r[16].w[0] + 164u)));
    set32(c.r[2], 0u + 4849u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001E755C; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 176u)));
    set32(c.r[2], 0u + 46u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001E755C; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 172u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001E755C; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 370u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001E75CC; } }
L_001E755C:
    set32(c.r[3], ld32((c.r[16].w[0] + 164u)));
    set32(c.r[2], 0u + 4788u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001E7594; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 176u)));
    set32(c.r[2], 0u + 200u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001E7594; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 172u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001E7594; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 370u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001E75CC; } }
L_001E7594:
    set32(c.r[3], ld32((c.r[16].w[0] + 164u)));
    set32(c.r[2], 0u + 4857u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001E76FC; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 176u)));
    set32(c.r[2], 0u + 124u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001E76F8; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 172u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001E76F8; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 370u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001E76F8; } }
L_001E75CC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x53590000u);
    c.budget -= 1;
L_001E75D0:
    set32(c.r[4], c.r[16].w[0] + 436u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E75DCu); c.r[5].d[0] = c.r[2].d[0] | 20035ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x001E75DCu) [[unlikely]] return; }
L_001E75DC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_001E75F0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], ld32((c.r[2].w[0] + 16u)));  if (t) { goto L_001E75F0; } }
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001E75F0:
    set32(c.r[3], ld32((c.r[16].w[0] + 60u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x53590000u);
    c.r[5].d[0] = c.r[2].d[0] | 20035ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E7604u); set32(c.r[4], c.r[3].w[0] + 436u);  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x001E7604u) [[unlikely]] return; }
L_001E7604:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_001E7618; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[2].w[0] + 16u)));  if (t) { goto L_001E7618; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001E7618:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E7620u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0033(c, 96u, depth + 1u); else { c.pc = 0x001CD3E0u; return; } if (c.pc != 0x001E7620u) [[unlikely]] return; }
L_001E7620:
    set32(c.r[3], ld32((c.r[16].w[0] + 164u)));
    set32(c.r[2], 0u + 3071u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 6016u);  if (t) { goto L_001E7648; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E763Cu); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_002F(c, 56u, depth + 1u); else { c.pc = 0x001BDC70u; return; } if (c.pc != 0x001E763Cu) [[unlikely]] return; }
L_001E763C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E76F8; } }
    set32(c.r[2], 0u + 6016u);
    c.budget -= 1;
L_001E7648:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[4], 0u + 144u);  if (t) { goto L_001E76AC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E7658u); set32(c.r[4], 0u + 144u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x001E7658u) [[unlikely]] return; }
L_001E7658:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001E7688; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    set32(c.r[5], ld32((c.r[16].w[0] + 60u)));
    c.f[13] = ld32((c.r[1].w[0] + 21672u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC1700000u);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = c.r[4].w[0];
    c.f[14] = c.r[3].w[0];
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E7688u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_002F(c, 226u, depth + 1u); else { c.pc = 0x001BFCF0u; return; } if (c.pc != 0x001E7688u) [[unlikely]] return; }
L_001E7688:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001E7698; } }
    set32(c.r[2], c.r[2].w[0] + 24u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 2;
L_001E7698:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E76A0u); set32(c.r[4], c.r[16].w[0] + 436u);  if (depth < kMaxDepth) unit_000F(c, 40u, depth + 1u); else { c.pc = 0x0013C4A0u; return; } if (c.pc != 0x001E76A0u) [[unlikely]] return; }
L_001E76A0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E76F8; } }
    set32(c.r[4], 0u + 144u);
    c.budget -= 1;
L_001E76AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E76B4u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x001E76B4u) [[unlikely]] return; }
L_001E76B4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001E76E0; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC1700000u);
    set32(c.r[5], ld32((c.r[16].w[0] + 60u)));
    c.f[13] = ld32((c.r[1].w[0] + 21672u));
    c.f[12] = 0u;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.f[14] = c.r[3].w[0];
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E76E0u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002F(c, 226u, depth + 1u); else { c.pc = 0x001BFCF0u; return; } if (c.pc != 0x001E76E0u) [[unlikely]] return; }
L_001E76E0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001E76F0; } }
    set32(c.r[2], c.r[2].w[0] + 24u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 2;
L_001E76F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E76F8u); set32(c.r[4], c.r[16].w[0] + 436u);  if (depth < kMaxDepth) unit_000F(c, 40u, depth + 1u); else { c.pc = 0x0013C4A0u; return; } if (c.pc != 0x001E76F8u) [[unlikely]] return; }
L_001E76F8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_001E76FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E7704u);  if (depth < kMaxDepth) unit_0034(c, 93u, depth + 1u); else { c.pc = 0x001D0C90u; return; } if (c.pc != 0x001E7704u) [[unlikely]] return; }
L_001E7704:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001E771C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E7714u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_003B(c, 94u, depth + 1u); else { c.pc = 0x001EDF00u; return; } if (c.pc != 0x001E7714u) [[unlikely]] return; }
L_001E7714:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_003A(c, 266u, depth); } }
L_001E771C:
    set32(c.r[4], ld32((c.r[16].w[0] + 164u)));
    set32(c.r[3], 0u + 222u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001E775C; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 168u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { [[clang::musttail]] return unit_003A(c, 266u, depth); } }
    set32(c.r[3], ld32((c.r[16].w[0] + 180u)));
    c.r[1].d[0] = c.r[3].sd[0] < 7ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { [[clang::musttail]] return unit_003A(c, 266u, depth); } }
    st32((c.r[16].w[0] + 176u), 0u);
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 168u), c.r[3].w[0]);  if (t) { [[clang::musttail]] return unit_003A(c, 266u, depth); } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_001E775C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E7764u);  if (depth < kMaxDepth) unit_0034(c, 99u, depth + 1u); else { c.pc = 0x001D0E10u; return; } if (c.pc != 0x001E7764u) [[unlikely]] return; }
L_001E7764:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001E7780; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E7774u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_003C(c, 56u, depth + 1u); else { c.pc = 0x001F09E0u; return; } if (c.pc != 0x001E7774u) [[unlikely]] return; }
L_001E7774:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_003A(c, 266u, depth); } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_001E7780:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E7788u);  if (depth < kMaxDepth) unit_0034(c, 200u, depth + 1u); else { c.pc = 0x001D2B10u; return; } if (c.pc != 0x001E7788u) [[unlikely]] return; }
L_001E7788:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001E77A4; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 395u));
    c.r[2].d[0] = c.r[2].d[0] << 59;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001E7AE4; } }
L_001E77A4:
    c.r[7].d[0] = ld8((c.r[16].w[0] + 392u));
    c.r[2].d[0] = 0ull & 1ull;
    set32(c.r[6], c.r[2].w[0] << 2);
    set32(c.r[3], 0u - 5u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x53590000u);
    set32(c.r[4], c.r[16].w[0] + 436u);
    c.r[5].d[0] = c.r[2].d[0] | 20035ull;
    c.r[2].d[0] = c.r[7].d[0] & c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[6].d[0];
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E77D0u); st8((c.r[16].w[0] + 392u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x001E77D0u) [[unlikely]] return; }
L_001E77D0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_001E77E4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], ld32((c.r[2].w[0] + 16u)));  if (t) { goto L_001E77E4; } }
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001E77E4:
    set32(c.r[2], ld32((c.r[16].w[0] + 172u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_001E7AAC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E77F8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0034(c, 175u, depth + 1u); else { c.pc = 0x001D2340u; return; } if (c.pc != 0x001E77F8u) [[unlikely]] return; }
L_001E77F8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001E7AA8; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 944u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001E7814; } }
    st8((c.r[16].w[0] + 588u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 1;
L_001E7814:
    set32(c.r[3], ld32((c.r[16].w[0] + 60u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[2] = c.r[2].w[0];
    c.f[0] = ld32((c.r[16].w[0] + 224u));
    set32(c.r[2], 0u + 6u);
    c.f[1] = ld32((c.r[3].w[0] + 224u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    st32((c.r[29].w[0] + 448u), c.f[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 60u)));
    c.f[0] = ld32((c.r[16].w[0] + 228u));
    c.f[1] = ld32((c.r[3].w[0] + 228u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    st32((c.r[29].w[0] + 452u), c.f[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 60u)));
    c.f[0] = ld32((c.r[16].w[0] + 232u));
    c.f[1] = ld32((c.r[3].w[0] + 232u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[29].w[0] + 476u), 0u);
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    st32((c.r[29].w[0] + 456u), c.f[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 944u)));
    c.budget -= 25;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 2u);  if (t) { goto L_001E788C; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = ld32((c.r[1].w[0] + 21512u));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 476u), c.f[0]);  if (t) { goto L_001E78A0; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 1;
L_001E788C:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001E78A0; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = ld32((c.r[1].w[0] + 21504u));
    st32((c.r[29].w[0] + 476u), c.f[0]);
    c.budget -= 3;
L_001E78A0:
    c.f[2] = ld32((c.r[16].w[0] + 212u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[1] = ld32((c.r[29].w[0] + 476u));
    c.f[0] = ld32((c.r[1].w[0] + 21672u));
    c.f[1] = fp::add(c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[29].w[0] + 476u), c.f[1]);  if (t) { goto L_001E78D4; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = ld32((c.r[1].w[0] + 21688u));
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 476u), c.f[0]);  if (t) { goto L_001E78F8; } }
L_001E78D4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = ld32((c.r[1].w[0] + 21664u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001E78F8; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = ld32((c.r[1].w[0] + 21688u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 476u), c.f[0]);
    c.budget -= 4;
L_001E78F8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[1] = ld32((c.r[29].w[0] + 476u));
    c.f[0] = ld32((c.r[1].w[0] + 21672u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001E7924; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = ld32((c.r[1].w[0] + 21688u));
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 476u), c.f[0]);  if (t) { goto L_001E7948; } }
L_001E7924:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = ld32((c.r[1].w[0] + 21664u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001E7948; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = ld32((c.r[1].w[0] + 21688u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 476u), c.f[0]);
    c.budget -= 4;
L_001E7948:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[12] = ld32((c.r[29].w[0] + 476u));
    c.f[13] = ld32((c.r[1].w[0] + 21496u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E795Cu); set32(c.r[4], c.r[16].w[0] + 212u);  if (depth < kMaxDepth) unit_0010(c, 277u, depth + 1u); else { c.pc = 0x00143F70u; return; } if (c.pc != 0x001E795Cu) [[unlikely]] return; }
L_001E795C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[1] = ld32((c.r[16].w[0] + 212u));
    c.f[0] = ld32((c.r[1].w[0] + 21672u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001E7988; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = ld32((c.r[1].w[0] + 21688u));
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 212u), c.f[0]);  if (t) { goto L_001E79AC; } }
L_001E7988:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = ld32((c.r[1].w[0] + 21664u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001E79AC; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = ld32((c.r[1].w[0] + 21688u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[16].w[0] + 212u), c.f[0]);
    c.budget -= 4;
L_001E79AC:
    c.f[12] = ld32((c.r[16].w[0] + 212u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E79B8u); set32(c.r[4], c.r[29].w[0] + 384u);  if (depth < kMaxDepth) unit_0011(c, 29u, depth + 1u); else { c.pc = 0x00144640u; return; } if (c.pc != 0x001E79B8u) [[unlikely]] return; }
L_001E79B8:
    c.f[2] = ld32((c.r[29].w[0] + 448u));
    set32(c.r[2], c.r[29].w[0] + 368u);
    c.f[1] = ld32((c.r[29].w[0] + 452u));
    c.f[0] = ld32((c.r[29].w[0] + 456u));
    st32((c.r[29].w[0] + 432u), c.f[2]);
    st32((c.r[29].w[0] + 436u), c.f[1]);
    st32((c.r[29].w[0] + 440u), c.f[0]);
    st128((c.r[2].w[0]) & ~15u, c.vu0.vf[0]);
    set32(c.r[4], c.r[29].w[0] + 368u);
    set32(c.r[5], c.r[29].w[0] + 384u);
    set32(c.r[6], c.r[29].w[0] + 368u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40A00000u);
    c.f[0] = c.r[2].w[0];
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E79F4u); st32((c.r[29].w[0] + 376u), c.f[0]);  if (depth < kMaxDepth) unit_0011(c, 20u, depth + 1u); else { c.pc = 0x001444C0u; return; } if (c.pc != 0x001E79F4u) [[unlikely]] return; }
L_001E79F4:
    c.f[0] = ld32((c.r[29].w[0] + 368u));
    set32(c.r[4], c.r[29].w[0] + 368u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC0A00000u);
    set32(c.r[5], c.r[29].w[0] + 384u);
    c.r[6].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[16].w[0] + 224u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 376u));
    st32((c.r[16].w[0] + 232u), c.f[0]);
    st32((c.r[29].w[0] + 376u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 368u), 0u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E7A24u); st32((c.r[29].w[0] + 372u), 0u);  if (depth < kMaxDepth) unit_0011(c, 20u, depth + 1u); else { c.pc = 0x001444C0u; return; } if (c.pc != 0x001E7A24u) [[unlikely]] return; }
L_001E7A24:
    c.f[0] = ld32((c.r[29].w[0] + 368u));
    set32(c.r[2], ld32((c.r[16].w[0] + 60u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    st32((c.r[2].w[0] + 224u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 376u));
    set32(c.r[2], ld32((c.r[16].w[0] + 60u)));
    st32((c.r[2].w[0] + 232u), c.f[0]);
    c.f[0] = ld32((c.r[1].w[0] + 21672u));
    set32(c.r[2], ld32((c.r[16].w[0] + 60u)));
    c.f[1] = ld32((c.r[16].w[0] + 212u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[2].w[0] + 212u), c.f[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 60u)));
    c.f[0] = ld32((c.r[1].w[0] + 21672u));
    c.f[1] = ld32((c.r[2].w[0] + 212u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 19;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[3], c.r[2].w[0] + 212u);  if (t) { goto L_001E7A84; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = ld32((c.r[1].w[0] + 21688u));
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0]), c.f[0]);  if (t) { goto L_001E7AA8; } }
L_001E7A84:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = ld32((c.r[1].w[0] + 21664u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001E7AA8; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = ld32((c.r[1].w[0] + 21688u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[3].w[0]), c.f[0]);
    c.budget -= 4;
L_001E7AA8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001E7AAC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E7AB4u);  if (depth < kMaxDepth) unit_0033(c, 101u, depth + 1u); else { c.pc = 0x001CD4B0u; return; } if (c.pc != 0x001E7AB4u) [[unlikely]] return; }
L_001E7AB4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001E7AD0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E7AC4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_003C(c, 230u, depth + 1u); else { c.pc = 0x001F2F10u; return; } if (c.pc != 0x001E7AC4u) [[unlikely]] return; }
L_001E7AC4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_003A(c, 266u, depth); } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_001E7AD0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E7AD8u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0039(c, 27u, depth + 1u); else { c.pc = 0x001E4510u; return; } if (c.pc != 0x001E7AD8u) [[unlikely]] return; }
L_001E7AD8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_003A(c, 266u, depth); } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_001E7AE4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E7AECu);  if (depth < kMaxDepth) unit_0034(c, 201u, depth + 1u); else { c.pc = 0x001D2B50u; return; } if (c.pc != 0x001E7AECu) [[unlikely]] return; }
L_001E7AEC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001E7B54; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 60u)));
    c.f[1] = ld32((c.r[16].w[0] + 228u));
    c.f[0] = 0u;
    c.f[2] = ld32((c.r[3].w[0] + 228u));
    c.f[1] = fp::sub(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001E7B1C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x3FC00000u);  if (t) { goto L_001E7B24; } }
L_001E7B1C:
    c.f[1] = c.f[1] ^ fp::kSign;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3FC00000u);
    c.budget -= 2;
L_001E7B24:
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { [[clang::musttail]] return unit_003A(c, 266u, depth); } }
    set32(c.r[5], ld32((c.r[16].w[0] + 60u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E7B48u); set32(c.r[6], 0u + 883u);  if (depth < kMaxDepth) unit_0039(c, 33u, depth + 1u); else { c.pc = 0x001E45D0u; return; } if (c.pc != 0x001E7B48u) [[unlikely]] return; }
L_001E7B48:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_003A(c, 266u, depth); } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_001E7B54:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E7B5Cu);  if (depth < kMaxDepth) unit_0034(c, 205u, depth + 1u); else { c.pc = 0x001D2C60u; return; } if (c.pc != 0x001E7B5Cu) [[unlikely]] return; }
L_001E7B5C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { [[clang::musttail]] return unit_003A(c, 16u, depth); } }
    c.r[5].d[0] = ld8((c.r[16].w[0] + 395u));
    set32(c.r[2], 0u - 9u);
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(8ll);
    c.r[2].d[0] = c.r[5].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[16].w[0] + 395u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[16].w[0] + 172u)));
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { [[clang::musttail]] return unit_003A(c, 10u, depth); } }
    set32(c.r[19], ld32((c.r[16].w[0] + 60u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E7B94u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0034(c, 207u, depth + 1u); else { c.pc = 0x001D2D50u; return; } if (c.pc != 0x001E7B94u) [[unlikely]] return; }
L_001E7B94:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u + 1111u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == c.r[2].d[0];  if (t) { goto L_001E7BA8; } }
    set32(c.r[2], 0u + 1155u);
    c.budget -= 1;
L_001E7BA8:
    set32(c.r[2], ld32((c.r[16].w[0] + 892u)));
    c.f[0] = 0u;
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[16].w[0] + 892u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 60u)));
    c.f[1] = ld32((c.r[16].w[0] + 228u));
    c.f[2] = ld32((c.r[2].w[0] + 228u));
    c.f[1] = fp::sub(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 11;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001E7BDC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);  if (t) { goto L_001E7BE4; } }
L_001E7BDC:
    c.f[1] = c.f[1] ^ fp::kSign;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.budget -= 2;
L_001E7BE4:
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_001E7C00; } }
    st32((c.r[16].w[0] + 892u), 0u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 2;
L_001E7C00:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E7C08u);  if (depth < kMaxDepth) unit_0034(c, 175u, depth + 1u); else { c.pc = 0x001D2340u; return; } if (c.pc != 0x001E7C08u) [[unlikely]] return; }
L_001E7C08:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001E7C14; } }
    st32((c.r[16].w[0] + 892u), 0u);
    c.budget -= 1;
L_001E7C14:
    c.r[2].d[0] = ld16((c.r[16].w[0] + 472u));
    c.r[2].d[0] = c.r[2].d[0] & 32ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001E7C30; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 892u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] > 0; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001E7CD8; } }
L_001E7C30:
    set32(c.r[2], ld32((c.r[16].w[0] + 180u)));
    c.r[1].d[0] = c.r[2].sd[0] < 11ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[2], 0u + 1011u);  if (t) { goto L_001E7C58; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E7C4Cu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0039(c, 27u, depth + 1u); else { c.pc = 0x001E4510u; return; } if (c.pc != 0x001E7C4Cu) [[unlikely]] return; }
L_001E7C4C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_003A(c, 266u, depth); } }
    set32(c.r[2], 0u + 1011u);
    c.budget -= 1;
L_001E7C58:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 1058u);  if (t) { goto L_001E7C6C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[20], 0u + 1001u);  if (t) { goto L_001E7CA0; } }
    set32(c.r[2], 0u + 1058u);
    c.budget -= 1;
L_001E7C6C:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 1111u);  if (t) { goto L_001E7C80; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[20], 0u + 1051u);  if (t) { goto L_001E7CA0; } }
    set32(c.r[2], 0u + 1111u);
    c.budget -= 1;
L_001E7C80:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 1155u);  if (t) { goto L_001E7C94; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[20], 0u + 1101u);  if (t) { goto L_001E7CA0; } }
    set32(c.r[2], 0u + 1155u);
    c.budget -= 1;
L_001E7C94:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != c.r[2].d[0]; c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_001E7CA4; } }
    set32(c.r[20], 0u + 1151u);
    c.budget -= 1;
L_001E7CA0:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_001E7CA4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E7CACu); c.r[17].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0034(c, 175u, depth + 1u); else { c.pc = 0x001D2340u; return; } if (c.pc != 0x001E7CACu) [[unlikely]] return; }
L_001E7CAC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001E7CBC; } }
    set32(c.r[17], 0u + 10u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 2;
L_001E7CBC:
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E7CCCu); c.r[7].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 34u, depth + 1u); else { c.pc = 0x001E45E0u; return; } if (c.pc != 0x001E7CCCu) [[unlikely]] return; }
L_001E7CCC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_003A(c, 266u, depth); } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_001E7CD8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E7CE0u);  if (depth < kMaxDepth) unit_0034(c, 207u, depth + 1u); else { c.pc = 0x001D2D50u; return; } if (c.pc != 0x001E7CE0u) [[unlikely]] return; }
L_001E7CE0:
    c.r[4].d[0] = ld16((c.r[16].w[0] + 474u));
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.r[3].d[0] = c.r[4].d[0] & 64ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull; c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_001E7D4C; } }
    set32(c.r[2], 0u + 1011u);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 1058u);  if (t) { goto L_001E7D08; } }
    set32(c.r[20], 0u + 8200u);
    set32(c.r[2], 0u + 1058u);
    c.budget -= 2;
L_001E7D08:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 1111u);  if (t) { goto L_001E7D18; } }
    set32(c.r[20], 0u + 8220u);
    set32(c.r[2], 0u + 1111u);
    c.budget -= 2;
L_001E7D18:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 1155u);  if (t) { goto L_001E7D28; } }
    set32(c.r[20], 0u + 8210u);
    set32(c.r[2], 0u + 1155u);
    c.budget -= 2;
L_001E7D28:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != c.r[2].d[0]; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001E7D38; } }
    set32(c.r[20], 0u + 8230u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 2;
L_001E7D38:
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E7D44u); c.r[6].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 33u, depth + 1u); else { c.pc = 0x001E45D0u; return; } if (c.pc != 0x001E7D44u) [[unlikely]] return; }
L_001E7D44:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_003A(c, 266u, depth); } }
L_001E7D4C:
    set32(c.r[5], ld32((c.r[16].w[0] + 944u)));
    set32(c.r[3], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[3].d[0]; c.r[3].d[0] = c.r[4].d[0] & 32ull;  if (t) { goto L_001E7DF0; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 888u)));
    c.r[1].d[0] = c.r[3].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[3], 0u + 1111u);  if (t) { goto L_001E7D78; } }
    set32(c.r[3], 0u + 10u);
    st32((c.r[16].w[0] + 888u), c.r[3].w[0]);
    set32(c.r[3], 0u + 1111u);
    c.budget -= 3;
L_001E7D78:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == c.r[3].d[0];  if (t) { goto L_001E7D84; } }
    set32(c.r[3], 0u + 1155u);
    c.budget -= 1;
L_001E7D84:
    c.r[3].d[0] = ld16((c.r[16].w[0] + 474u));
    c.r[3].d[0] = c.r[3].d[0] & 32ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001E7F9C; } }
    set32(c.r[2], 0u + 1111u);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 1011u);  if (t) { goto L_001E7DAC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[20], 0u + 1101u);  if (t) { goto L_001E7DD4; } }
    set32(c.r[2], 0u + 1011u);
    c.budget -= 1;
L_001E7DAC:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 1058u);  if (t) { goto L_001E7DC0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[20], 0u + 1001u);  if (t) { goto L_001E7DD4; } }
    set32(c.r[2], 0u + 1058u);
    c.budget -= 1;
L_001E7DC0:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != c.r[2].d[0]; set32(c.r[20], 0u + 1151u);  if (t) { goto L_001E7DD4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[20], 0u + 1051u);  if (t) { goto L_001E7DD4; } }
    set32(c.r[20], 0u + 1151u);
    c.budget -= 1;
L_001E7DD4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E7DE4u); c.r[6].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 33u, depth + 1u); else { c.pc = 0x001E45D0u; return; } if (c.pc != 0x001E7DE4u) [[unlikely]] return; }
L_001E7DE4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_003A(c, 266u, depth); } }
    c.r[3].d[0] = c.r[4].d[0] & 32ull;
    c.budget -= 1;
L_001E7DF0:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001E7E4C; } }
    set32(c.r[17], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[5].w[0]) >> 1));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E7E08u); set32(c.r[5], c.r[17].w[0] + 42u);  if (depth < kMaxDepth) unit_0039(c, 25u, depth + 1u); else { c.pc = 0x001E44B0u; return; } if (c.pc != 0x001E7E08u) [[unlikely]] return; }
L_001E7E08:
    c.r[20].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[2], 0u + 1111u);
    c.budget -= 4;
    { const bool t = c.r[18].d[0] == c.r[2].d[0]; set32(c.r[5], c.r[17].w[0] + 47u);  if (t) { goto L_001E7E28; } }
    set32(c.r[2], 0u + 1155u);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] != c.r[2].d[0]; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001E7E38; } }
    set32(c.r[5], c.r[17].w[0] + 47u);
    c.budget -= 1;
L_001E7E28:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E7E30u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 25u, depth + 1u); else { c.pc = 0x001E44B0u; return; } if (c.pc != 0x001E7E30u) [[unlikely]] return; }
L_001E7E30:
    c.r[20].d[0] = c.r[2].d[0] & 65535ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 2;
L_001E7E38:
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E7E44u); c.r[6].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 33u, depth + 1u); else { c.pc = 0x001E45D0u; return; } if (c.pc != 0x001E7E44u) [[unlikely]] return; }
L_001E7E44:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_003A(c, 266u, depth); } }
L_001E7E4C:
    set32(c.r[3], ld32((c.r[16].w[0] + 888u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001E7E68; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 888u), c.r[3].w[0]);  if (t) { goto L_001E7F9C; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_001E7E68:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E7E70u);  if (depth < kMaxDepth) unit_003C(c, 29u, depth + 1u); else { c.pc = 0x001F0370u; return; } if (c.pc != 0x001E7E70u) [[unlikely]] return; }
L_001E7E70:
    st32((c.r[29].w[0] + 472u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[2] = ld32((c.r[16].w[0] + 212u));
    c.f[1] = ld32((c.r[29].w[0] + 472u));
    c.f[0] = ld32((c.r[1].w[0] + 21672u));
    c.f[1] = fp::sub(c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[29].w[0] + 472u), c.f[1]);  if (t) { goto L_001E7EA8; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = ld32((c.r[1].w[0] + 21688u));
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 472u), c.f[0]);  if (t) { goto L_001E7ECC; } }
L_001E7EA8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = ld32((c.r[1].w[0] + 21664u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001E7ECC; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = ld32((c.r[1].w[0] + 21688u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 472u), c.f[0]);
    c.budget -= 4;
L_001E7ECC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[1] = ld32((c.r[29].w[0] + 472u));
    c.f[0] = ld32((c.r[1].w[0] + 21672u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001E7EF8; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = ld32((c.r[1].w[0] + 21688u));
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 472u), c.f[0]);  if (t) { goto L_001E7F1C; } }
L_001E7EF8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = ld32((c.r[1].w[0] + 21664u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001E7F1C; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = ld32((c.r[1].w[0] + 21688u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 472u), c.f[0]);
    c.budget -= 4;
L_001E7F1C:
    set32(c.r[4], ld32((c.r[16].w[0] + 60u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[3], c.r[18].w[0] + 3u);
    set32(c.r[4], ld32((c.r[4].w[0] + 164u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; c.f[2] = ld32((c.r[1].w[0] + 21488u));  if (t) { goto L_001E7F3C; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[2] = ld32((c.r[1].w[0] + 21480u));
    c.budget -= 2;
L_001E7F3C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = ld32((c.r[1].w[0] + 21672u));
    c.f[1] = ld32((c.r[29].w[0] + 472u));
    c.f[0] = fp::sub(c.f[0], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[6], c.r[18].w[0] + 3u);  if (t) { goto L_001E7F74; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = ld32((c.r[1].w[0] + 21664u));
    c.f[0] = fp::add(c.f[0], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001E7F7C; } }
    set32(c.r[6], c.r[18].w[0] + 3u);
    c.budget -= 1;
L_001E7F74:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[16].w[0] + 164u)));  if (t) { goto L_001E7FA0; } }
L_001E7F7C:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[6], c.r[18].w[0] + 1u);  if (t) { goto L_001E7F9C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], c.r[18].w[0] + 2u);  if (t) { goto L_001E7F9C; } }
    set32(c.r[6], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_001E7F9C:
    set32(c.r[3], ld32((c.r[16].w[0] + 164u)));
    c.budget -= 1;
L_001E7FA0:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == c.r[3].d[0];  if (t) { goto L_001E7FC0; } }
    st32((c.r[16].w[0] + 164u), c.r[6].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 60u)));
    st32((c.r[3].w[0] + 164u), c.r[6].w[0]);
    st32((c.r[16].w[0] + 176u), 0u);
    set32(c.r[3], ld32((c.r[16].w[0] + 60u)));
    st32((c.r[3].w[0] + 176u), 0u);
    c.budget -= 6;
L_001E7FC0:
    set32(c.r[4], ld32((c.r[16].w[0] + 60u)));
    set32(c.r[3], c.r[18].w[0] + 1u);
    set32(c.r[4], ld32((c.r[4].w[0] + 164u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_001E7FE0; } }
    set32(c.r[3], c.r[18].w[0] + 2u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { [[clang::musttail]] return unit_003A(c, 7u, depth); } }
L_001E7FE0:
    set32(c.r[3], ld32((c.r[16].w[0] + 60u)));
    set32(c.r[2], c.r[18].w[0] + 1u);
    set32(c.r[3], ld32((c.r[3].w[0] + 164u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { [[clang::musttail]] return unit_003A(c, 1u, depth); } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[2] = ld32((c.r[1].w[0] + 21472u));  if (t) { [[clang::musttail]] return unit_003A(c, 2u, depth); } }
    [[clang::musttail]] return unit_003A(c, 1u, depth);
}

}
