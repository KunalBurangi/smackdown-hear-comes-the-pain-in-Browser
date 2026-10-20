#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_008B[4096] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 3, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0,
    6, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 9, 0, 0, 0, 0, 0, 10, 0, 0, 0,
    0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0,
    15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    17, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 19, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 21, 0, 22, 0, 0, 0, 23, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 26, 0, 27, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 34, 0, 0, 35, 0,
    0, 0, 0, 0, 36, 0, 0, 37, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 43, 0, 0, 0, 44, 0, 0, 0, 45, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 49, 0,
    0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 57, 0, 0, 0,
    58, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 61, 0, 0, 62, 0, 0,
    0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0,
    0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 70, 0, 0, 0, 0, 0, 71, 0,
    0, 0, 0, 0, 72, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0,
    75, 0, 0, 0, 76, 0, 0, 0, 77, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0,
    0, 0, 0, 80, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 82, 0, 83, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 84, 0,
    85, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 87, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 89, 0, 0, 90, 0, 0, 91, 0, 0, 92, 0, 0, 93, 0, 0, 94, 0,
    0, 95, 0, 0, 96, 0, 0, 97, 0, 0, 98, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0,
    101, 0, 0, 0, 102, 0, 0, 0, 103, 0, 0, 0, 104, 0, 0, 0, 105, 0, 0, 0, 106, 0, 0, 0, 107, 0, 0, 0, 108, 0, 0, 0,
    109, 0, 0, 0, 110, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 112, 0, 0, 0, 113, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0,
    0, 115, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 119, 0, 0, 0, 0, 120, 0, 0,
    0, 0, 0, 0, 121, 0, 0, 0, 122, 0, 0, 0, 0, 123, 0, 0, 124, 0, 0, 0, 125, 0, 0, 0, 0, 126, 0, 0, 127, 0, 0, 0,
    128, 0, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 130, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 134, 0, 0,
    0, 0, 0, 0, 135, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 137, 0, 0, 138, 0, 0, 0, 0,
    0, 139, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 141, 0, 0, 142, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    144, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 147, 0, 0, 148, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 151, 0, 0, 152, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0, 155, 0, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 160, 0, 0, 0, 0, 0, 0, 0, 161, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 162, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 166, 0, 0,
    0, 0, 167, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 168, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0, 172, 0, 0, 0, 0, 173, 0, 0,
    0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 177, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0,
    181, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 183, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 185, 0, 186, 0, 0, 187, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 0, 0, 191, 0, 0,
    0, 0, 192, 0, 0, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0,
    0, 0, 196, 0, 0, 0, 0, 0, 0, 0, 197, 0, 0, 0, 0, 198, 0, 0, 0, 0, 199, 0, 0, 0, 0, 200, 0, 0, 0, 0, 201, 0,
    0, 202, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 203, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 204, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 205, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 206, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 207, 0, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 0, 0, 0,
    209, 0, 0, 0, 0, 0, 0, 0, 210, 0, 0, 0, 0, 0, 0, 211, 0, 0, 0, 0, 0, 0, 212, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 213, 0, 0, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 0, 0, 0, 0, 0, 215, 216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 217, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 218, 0, 0, 219, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    220, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 221, 0, 0, 0, 0, 222, 0, 0, 0,
    0, 0, 0, 0, 0, 223, 0, 0, 0, 0, 0, 0, 0, 0, 0, 224, 0, 225, 0, 0, 226, 0, 0, 0, 0, 0, 0, 0, 227, 0, 0, 0,
    0, 0, 0, 0, 0, 228, 0, 0, 229, 0, 0, 0, 0, 0, 230, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 231, 0, 0, 0, 0, 232, 0,
    0, 233, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 234, 0, 0, 0, 0, 0, 0, 0, 235, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 236, 0, 0, 0, 237, 0, 0, 0, 0, 0, 238, 0, 0, 0, 0, 0, 0, 239, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 240, 0, 0, 0, 0, 241, 0, 0, 0, 0, 242, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 243, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 244, 0, 0, 0, 0, 245, 0, 0, 0,
    0, 0, 0, 0, 246, 0, 0, 0, 0, 0, 0, 0, 247, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 248, 0, 0, 0, 0, 0, 0, 0,
    249, 0, 0, 0, 0, 0, 0, 250, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 251, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 252, 0, 0, 0, 253, 0, 0, 0, 0, 0, 0, 254, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 256, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 257, 0, 0, 0, 0, 258, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 259, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    260, 0, 0, 261, 0, 0, 0, 0, 0, 262, 0, 0, 0, 0, 0, 0, 263, 0, 0, 0, 0, 0, 0, 0, 0, 264, 0, 265, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 266, 0, 0, 0, 0, 267, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 268, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 269, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 270, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 271, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 272, 0, 273, 0, 274, 0, 275, 0, 0, 276, 0, 277, 0, 278, 0, 0, 279, 0, 0, 280, 0, 281, 0, 282, 0, 0, 283,
    0, 0, 284, 0, 285, 0, 286, 0, 0, 287, 0, 0, 288, 0, 289, 0, 290, 0, 0, 291, 0, 0, 292, 0, 0, 0, 0, 0, 293, 0, 0, 0,
    0, 0, 0, 0, 0, 294, 0, 295, 0, 0, 296, 0, 0, 0, 297, 0, 0, 0, 298, 0, 0, 0, 299, 0, 0, 0, 0, 0, 300, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    301, 0, 0, 0, 0, 0, 302, 0, 0, 0, 303, 0, 0, 0, 0, 0, 0, 0, 0, 0, 304, 0, 0, 0, 0, 0, 0, 0, 305, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 306, 0, 0, 0, 0, 0, 307, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    308, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 309, 0, 0, 0, 0, 0, 310, 0, 0, 0, 0, 0, 311, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 312, 0, 0, 0, 0, 0, 0, 0, 313, 0, 0, 0,
    0, 0, 0, 0, 0, 314, 0, 0, 0, 0, 0, 315, 0, 0, 0, 0, 316, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 317, 0, 0, 0, 0, 0, 0, 0, 318, 0, 0, 0, 0, 0, 319, 0, 0, 0, 0, 0, 0, 320, 0, 0, 0,
    321, 0, 0, 0, 322, 0, 0, 0, 323, 0, 0, 0, 324, 0, 0, 0, 325, 0, 0, 0, 326, 0, 0, 0, 327, 0, 0, 0, 328, 0, 0, 0,
    329, 0, 0, 0, 330, 0, 0, 0, 0, 0, 0, 0, 0, 0, 331, 0, 332, 0, 0, 333, 0, 334, 0, 0, 335, 0, 336, 0, 0, 0, 0, 0,
    337, 0, 0, 0, 0, 0, 0, 0, 0, 338, 0, 0, 0, 0, 0, 339, 0, 0, 340, 0, 0, 0, 0, 0, 0, 0, 0, 0, 341, 0, 0, 0,
    342, 0, 0, 0, 343, 0, 0, 0, 0, 0, 0, 0, 344, 0, 0, 0, 0, 0, 0, 0, 345, 0, 0, 0, 0, 0, 0, 0, 346, 0, 0, 0,
    0, 0, 0, 0, 347, 0, 0, 0, 0, 0, 0, 0, 348, 0, 0, 0, 0, 0, 0, 0, 349, 0, 0, 0, 0, 0, 0, 0, 350, 0, 0, 0,
    0, 0, 0, 0, 351, 0, 0, 352, 0, 0, 0, 0, 353, 0, 0, 0, 0, 0, 354, 0, 0, 355, 0, 0, 0, 0, 356, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 357, 0, 0, 358, 0, 0, 0, 359, 0, 0, 0, 360, 0, 0, 0, 361, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 362, 0, 0, 0, 0, 0, 0, 0, 0, 363, 0, 0, 0, 364, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 365, 0, 0, 366, 0, 367, 0, 368, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 369, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 370, 0, 0, 0, 0, 0, 0, 371, 0, 0, 0, 372,
    0, 0, 0, 373, 0, 0, 0, 374, 0, 0, 0, 375, 0, 0, 0, 376, 0, 0, 0, 377, 0, 0, 0, 378, 0, 0, 0, 379, 0, 0, 0, 0,
    0, 0, 0, 0, 380, 0, 0, 0, 381, 0, 0, 0, 0, 0, 0, 382, 0, 0, 0, 0, 0, 0, 0, 383, 0, 0, 0, 0, 0, 0, 0, 0,
    384, 0, 0, 385, 0, 0, 0, 0, 386, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 387, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    388, 0, 0, 389, 0, 0, 390, 0, 0, 391, 0, 0, 392, 0, 0, 393, 0, 0, 394, 0, 0, 395, 0, 0, 396, 0, 0, 397, 0, 0, 398, 0,
    0, 399, 0, 0, 400, 0, 0, 401, 0, 0, 402, 0, 0, 0, 0, 0, 403, 0, 0, 0, 0, 0, 0, 0, 404, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 405, 0, 0, 0, 0, 0, 0, 0, 0, 406, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 407, 0,
    0, 408, 0, 0, 409, 0, 0, 410, 0, 0, 411, 0, 0, 412, 0, 0, 413, 0, 0, 414, 0, 0, 415, 0, 0, 416, 0, 0, 417, 0, 0, 418,
    0, 0, 419, 0, 0, 420, 0, 0, 421, 0, 0, 422, 0, 0, 0, 0, 0, 423, 0, 0, 0, 0, 0, 0, 424, 0, 0, 0, 0, 0, 0, 0,
};

void unit_008B(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
#if defined(PS2_HIT_TRACE)
    if (entry == 169u) hit_trace(c, 0x0032DAA0u);
#endif
dispatch_entry:
    switch (entry) {
    case 1u: goto L_0032C000;
    case 2u: goto L_0032C024;
    case 3u: goto L_0032C02C;
    case 4u: goto L_0032C044;
    case 5u: goto L_0032C078;
    case 6u: goto L_0032C080;
    case 7u: goto L_0032C098;
    case 8u: goto L_0032C0CC;
    case 9u: goto L_0032C0D8;
    case 10u: goto L_0032C0F0;
    case 11u: goto L_0032C108;
    case 12u: goto L_0032C134;
    case 13u: goto L_0032C154;
    case 14u: goto L_0032C174;
    case 15u: goto L_0032C180;
    case 16u: goto L_0032C1AC;
    case 17u: goto L_0032C200;
    case 18u: goto L_0032C2A8;
    case 19u: goto L_0032C2B8;
    case 20u: goto L_0032C2C4;
    case 21u: goto L_0032C314;
    case 22u: goto L_0032C31C;
    case 23u: goto L_0032C32C;
    case 24u: goto L_0032C338;
    case 25u: goto L_0032C38C;
    case 26u: goto L_0032C3D8;
    case 27u: goto L_0032C3E0;
    case 28u: goto L_0032C410;
    case 29u: goto L_0032C430;
    case 30u: goto L_0032C47C;
    case 31u: goto L_0032C4A4;
    case 32u: goto L_0032C4B4;
    case 33u: goto L_0032C4E0;
    case 34u: goto L_0032C4EC;
    case 35u: goto L_0032C4F8;
    case 36u: goto L_0032C510;
    case 37u: goto L_0032C51C;
    case 38u: goto L_0032C534;
    case 39u: goto L_0032C550;
    case 40u: goto L_0032C56C;
    case 41u: goto L_0032C594;
    case 42u: goto L_0032C5BC;
    case 43u: goto L_0032C5CC;
    case 44u: goto L_0032C5DC;
    case 45u: goto L_0032C5EC;
    case 46u: goto L_0032C614;
    case 47u: goto L_0032C628;
    case 48u: goto L_0032C668;
    case 49u: goto L_0032C678;
    case 50u: goto L_0032C684;
    case 51u: goto L_0032C6B0;
    case 52u: goto L_0032C6D4;
    case 53u: goto L_0032C6E8;
    case 54u: goto L_0032C720;
    case 55u: goto L_0032C740;
    case 56u: goto L_0032C764;
    case 57u: goto L_0032C770;
    case 58u: goto L_0032C780;
    case 59u: goto L_0032C7B0;
    case 60u: goto L_0032C7CC;
    case 61u: goto L_0032C7E8;
    case 62u: goto L_0032C7F4;
    case 63u: goto L_0032C814;
    case 64u: goto L_0032C834;
    case 65u: goto L_0032C854;
    case 66u: goto L_0032C874;
    case 67u: goto L_0032C894;
    case 68u: goto L_0032C8B4;
    case 69u: goto L_0032C8D4;
    case 70u: goto L_0032C8E0;
    case 71u: goto L_0032C8F8;
    case 72u: goto L_0032C910;
    case 73u: goto L_0032C924;
    case 74u: goto L_0032C974;
    case 75u: goto L_0032C980;
    case 76u: goto L_0032C990;
    case 77u: goto L_0032C9A0;
    case 78u: goto L_0032C9B0;
    case 79u: goto L_0032C9F8;
    case 80u: goto L_0032CA0C;
    case 81u: goto L_0032CA1C;
    case 82u: goto L_0032CA94;
    case 83u: goto L_0032CA9C;
    case 84u: goto L_0032CAF8;
    case 85u: goto L_0032CB00;
    case 86u: goto L_0032CB30;
    case 87u: goto L_0032CB84;
    case 88u: goto L_0032CBB0;
    case 89u: goto L_0032CBBC;
    case 90u: goto L_0032CBC8;
    case 91u: goto L_0032CBD4;
    case 92u: goto L_0032CBE0;
    case 93u: goto L_0032CBEC;
    case 94u: goto L_0032CBF8;
    case 95u: goto L_0032CC04;
    case 96u: goto L_0032CC10;
    case 97u: goto L_0032CC1C;
    case 98u: goto L_0032CC28;
    case 99u: goto L_0032CC40;
    case 100u: goto L_0032CC60;
    case 101u: goto L_0032CC80;
    case 102u: goto L_0032CC90;
    case 103u: goto L_0032CCA0;
    case 104u: goto L_0032CCB0;
    case 105u: goto L_0032CCC0;
    case 106u: goto L_0032CCD0;
    case 107u: goto L_0032CCE0;
    case 108u: goto L_0032CCF0;
    case 109u: goto L_0032CD00;
    case 110u: goto L_0032CD10;
    case 111u: goto L_0032CD24;
    case 112u: goto L_0032CD40;
    case 113u: goto L_0032CD50;
    case 114u: goto L_0032CD64;
    case 115u: goto L_0032CD84;
    case 116u: goto L_0032CDA0;
    case 117u: goto L_0032CDB4;
    case 118u: goto L_0032CDD0;
    case 119u: goto L_0032CDE0;
    case 120u: goto L_0032CDF4;
    case 121u: goto L_0032CE10;
    case 122u: goto L_0032CE20;
    case 123u: goto L_0032CE34;
    case 124u: goto L_0032CE40;
    case 125u: goto L_0032CE50;
    case 126u: goto L_0032CE64;
    case 127u: goto L_0032CE70;
    case 128u: goto L_0032CE80;
    case 129u: goto L_0032CEA4;
    case 130u: goto L_0032CEB0;
    case 131u: goto L_0032CF40;
    case 132u: goto L_0032D124;
    case 133u: goto L_0032D160;
    case 134u: goto L_0032D174;
    case 135u: goto L_0032D190;
    case 136u: goto L_0032D1A0;
    case 137u: goto L_0032D1E0;
    case 138u: goto L_0032D1EC;
    case 139u: goto L_0032D204;
    case 140u: goto L_0032D220;
    case 141u: goto L_0032D23C;
    case 142u: goto L_0032D248;
    case 143u: goto L_0032D2A0;
    case 144u: goto L_0032D480;
    case 145u: goto L_0032D4B4;
    case 146u: goto L_0032D4D0;
    case 147u: goto L_0032D510;
    case 148u: goto L_0032D51C;
    case 149u: goto L_0032D534;
    case 150u: goto L_0032D550;
    case 151u: goto L_0032D588;
    case 152u: goto L_0032D594;
    case 153u: goto L_0032D5F0;
    case 154u: goto L_0032D630;
    case 155u: goto L_0032D63C;
    case 156u: goto L_0032D654;
    case 157u: goto L_0032D670;
    case 158u: goto L_0032D6B8;
    case 159u: goto L_0032D720;
    case 160u: goto L_0032D784;
    case 161u: goto L_0032D7A4;
    case 162u: goto L_0032D808;
    case 163u: goto L_0032D824;
    case 164u: goto L_0032D924;
    case 165u: goto L_0032D958;
    case 166u: goto L_0032D974;
    case 167u: goto L_0032D988;
    case 168u: goto L_0032DA90;
    case 169u: goto L_0032DAA0;
    case 170u: goto L_0032DB30;
    case 171u: goto L_0032DB40;
    case 172u: goto L_0032DB60;
    case 173u: goto L_0032DB74;
    case 174u: goto L_0032DB90;
    case 175u: goto L_0032DBC0;
    case 176u: goto L_0032DBE0;
    case 177u: goto L_0032DBF8;
    case 178u: goto L_0032DC20;
    case 179u: goto L_0032DC50;
    case 180u: goto L_0032DC68;
    case 181u: goto L_0032DC80;
    case 182u: goto L_0032DCD4;
    case 183u: goto L_0032DD0C;
    case 184u: goto L_0032DD24;
    case 185u: goto L_0032DEBC;
    case 186u: goto L_0032DEC4;
    case 187u: goto L_0032DED0;
    case 188u: goto L_0032DF98;
    case 189u: goto L_0032DFCC;
    case 190u: goto L_0032E1D0;
    case 191u: goto L_0032E1F4;
    case 192u: goto L_0032E208;
    case 193u: goto L_0032E220;
    case 194u: goto L_0032E250;
    case 195u: goto L_0032E270;
    case 196u: goto L_0032E288;
    case 197u: goto L_0032E2A8;
    case 198u: goto L_0032E2BC;
    case 199u: goto L_0032E2D0;
    case 200u: goto L_0032E2E4;
    case 201u: goto L_0032E2F8;
    case 202u: goto L_0032E304;
    case 203u: goto L_0032E334;
    case 204u: goto L_0032E360;
    case 205u: goto L_0032E3A0;
    case 206u: goto L_0032E3F0;
    case 207u: goto L_0032E444;
    case 208u: goto L_0032E45C;
    case 209u: goto L_0032E480;
    case 210u: goto L_0032E4A0;
    case 211u: goto L_0032E4BC;
    case 212u: goto L_0032E4D8;
    case 213u: goto L_0032E504;
    case 214u: goto L_0032E524;
    case 215u: goto L_0032E54C;
    case 216u: goto L_0032E550;
    case 217u: goto L_0032E588;
    case 218u: goto L_0032E5BC;
    case 219u: goto L_0032E5C8;
    case 220u: goto L_0032E600;
    case 221u: goto L_0032E65C;
    case 222u: goto L_0032E670;
    case 223u: goto L_0032E694;
    case 224u: goto L_0032E6BC;
    case 225u: goto L_0032E6C4;
    case 226u: goto L_0032E6D0;
    case 227u: goto L_0032E6F0;
    case 228u: goto L_0032E714;
    case 229u: goto L_0032E720;
    case 230u: goto L_0032E738;
    case 231u: goto L_0032E764;
    case 232u: goto L_0032E778;
    case 233u: goto L_0032E784;
    case 234u: goto L_0032E7B0;
    case 235u: goto L_0032E7D0;
    case 236u: goto L_0032E81C;
    case 237u: goto L_0032E82C;
    case 238u: goto L_0032E844;
    case 239u: goto L_0032E860;
    case 240u: goto L_0032E94C;
    case 241u: goto L_0032E960;
    case 242u: goto L_0032E974;
    case 243u: goto L_0032E99C;
    case 244u: goto L_0032E9DC;
    case 245u: goto L_0032E9F0;
    case 246u: goto L_0032EA10;
    case 247u: goto L_0032EA30;
    case 248u: goto L_0032EA60;
    case 249u: goto L_0032EA80;
    case 250u: goto L_0032EA9C;
    case 251u: goto L_0032EC78;
    case 252u: goto L_0032ECC0;
    case 253u: goto L_0032ECD0;
    case 254u: goto L_0032ECEC;
    case 255u: goto L_0032ED18;
    case 256u: goto L_0032ED28;
    case 257u: goto L_0032ED58;
    case 258u: goto L_0032ED6C;
    case 259u: goto L_0032EDC0;
    case 260u: goto L_0032EE00;
    case 261u: goto L_0032EE0C;
    case 262u: goto L_0032EE24;
    case 263u: goto L_0032EE40;
    case 264u: goto L_0032EE64;
    case 265u: goto L_0032EE6C;
    case 266u: goto L_0032EEAC;
    case 267u: goto L_0032EEC0;
    case 268u: goto L_0032EEF0;
    case 269u: goto L_0032EF38;
    case 270u: goto L_0032EF64;
    case 271u: goto L_0032EFE0;
    case 272u: goto L_0032F014;
    case 273u: goto L_0032F01C;
    case 274u: goto L_0032F024;
    case 275u: goto L_0032F02C;
    case 276u: goto L_0032F038;
    case 277u: goto L_0032F040;
    case 278u: goto L_0032F048;
    case 279u: goto L_0032F054;
    case 280u: goto L_0032F060;
    case 281u: goto L_0032F068;
    case 282u: goto L_0032F070;
    case 283u: goto L_0032F07C;
    case 284u: goto L_0032F088;
    case 285u: goto L_0032F090;
    case 286u: goto L_0032F098;
    case 287u: goto L_0032F0A4;
    case 288u: goto L_0032F0B0;
    case 289u: goto L_0032F0B8;
    case 290u: goto L_0032F0C0;
    case 291u: goto L_0032F0CC;
    case 292u: goto L_0032F0D8;
    case 293u: goto L_0032F0F0;
    case 294u: goto L_0032F114;
    case 295u: goto L_0032F11C;
    case 296u: goto L_0032F128;
    case 297u: goto L_0032F138;
    case 298u: goto L_0032F148;
    case 299u: goto L_0032F158;
    case 300u: goto L_0032F170;
    case 301u: goto L_0032F300;
    case 302u: goto L_0032F318;
    case 303u: goto L_0032F328;
    case 304u: goto L_0032F350;
    case 305u: goto L_0032F370;
    case 306u: goto L_0032F430;
    case 307u: goto L_0032F448;
    case 308u: goto L_0032F480;
    case 309u: goto L_0032F4B0;
    case 310u: goto L_0032F4C8;
    case 311u: goto L_0032F4E0;
    case 312u: goto L_0032F5D0;
    case 313u: goto L_0032F5F0;
    case 314u: goto L_0032F614;
    case 315u: goto L_0032F62C;
    case 316u: goto L_0032F640;
    case 317u: goto L_0032F69C;
    case 318u: goto L_0032F6BC;
    case 319u: goto L_0032F6D4;
    case 320u: goto L_0032F6F0;
    case 321u: goto L_0032F700;
    case 322u: goto L_0032F710;
    case 323u: goto L_0032F720;
    case 324u: goto L_0032F730;
    case 325u: goto L_0032F740;
    case 326u: goto L_0032F750;
    case 327u: goto L_0032F760;
    case 328u: goto L_0032F770;
    case 329u: goto L_0032F780;
    case 330u: goto L_0032F790;
    case 331u: goto L_0032F7B8;
    case 332u: goto L_0032F7C0;
    case 333u: goto L_0032F7CC;
    case 334u: goto L_0032F7D4;
    case 335u: goto L_0032F7E0;
    case 336u: goto L_0032F7E8;
    case 337u: goto L_0032F800;
    case 338u: goto L_0032F824;
    case 339u: goto L_0032F83C;
    case 340u: goto L_0032F848;
    case 341u: goto L_0032F870;
    case 342u: goto L_0032F880;
    case 343u: goto L_0032F890;
    case 344u: goto L_0032F8B0;
    case 345u: goto L_0032F8D0;
    case 346u: goto L_0032F8F0;
    case 347u: goto L_0032F910;
    case 348u: goto L_0032F930;
    case 349u: goto L_0032F950;
    case 350u: goto L_0032F970;
    case 351u: goto L_0032F990;
    case 352u: goto L_0032F99C;
    case 353u: goto L_0032F9B0;
    case 354u: goto L_0032F9C8;
    case 355u: goto L_0032F9D4;
    case 356u: goto L_0032F9E8;
    case 357u: goto L_0032FA28;
    case 358u: goto L_0032FA34;
    case 359u: goto L_0032FA44;
    case 360u: goto L_0032FA54;
    case 361u: goto L_0032FA64;
    case 362u: goto L_0032FAB0;
    case 363u: goto L_0032FAD4;
    case 364u: goto L_0032FAE4;
    case 365u: goto L_0032FB0C;
    case 366u: goto L_0032FB18;
    case 367u: goto L_0032FB20;
    case 368u: goto L_0032FB28;
    case 369u: goto L_0032FB94;
    case 370u: goto L_0032FBD0;
    case 371u: goto L_0032FBEC;
    case 372u: goto L_0032FBFC;
    case 373u: goto L_0032FC0C;
    case 374u: goto L_0032FC1C;
    case 375u: goto L_0032FC2C;
    case 376u: goto L_0032FC3C;
    case 377u: goto L_0032FC4C;
    case 378u: goto L_0032FC5C;
    case 379u: goto L_0032FC6C;
    case 380u: goto L_0032FC90;
    case 381u: goto L_0032FCA0;
    case 382u: goto L_0032FCBC;
    case 383u: goto L_0032FCDC;
    case 384u: goto L_0032FD00;
    case 385u: goto L_0032FD0C;
    case 386u: goto L_0032FD20;
    case 387u: goto L_0032FD54;
    case 388u: goto L_0032FD80;
    case 389u: goto L_0032FD8C;
    case 390u: goto L_0032FD98;
    case 391u: goto L_0032FDA4;
    case 392u: goto L_0032FDB0;
    case 393u: goto L_0032FDBC;
    case 394u: goto L_0032FDC8;
    case 395u: goto L_0032FDD4;
    case 396u: goto L_0032FDE0;
    case 397u: goto L_0032FDEC;
    case 398u: goto L_0032FDF8;
    case 399u: goto L_0032FE04;
    case 400u: goto L_0032FE10;
    case 401u: goto L_0032FE1C;
    case 402u: goto L_0032FE28;
    case 403u: goto L_0032FE40;
    case 404u: goto L_0032FE60;
    case 405u: goto L_0032FEA8;
    case 406u: goto L_0032FECC;
    case 407u: goto L_0032FEF8;
    case 408u: goto L_0032FF04;
    case 409u: goto L_0032FF10;
    case 410u: goto L_0032FF1C;
    case 411u: goto L_0032FF28;
    case 412u: goto L_0032FF34;
    case 413u: goto L_0032FF40;
    case 414u: goto L_0032FF4C;
    case 415u: goto L_0032FF58;
    case 416u: goto L_0032FF64;
    case 417u: goto L_0032FF70;
    case 418u: goto L_0032FF7C;
    case 419u: goto L_0032FF88;
    case 420u: goto L_0032FF94;
    case 421u: goto L_0032FFA0;
    case 422u: goto L_0032FFAC;
    case 423u: goto L_0032FFC4;
    case 424u: goto L_0032FFE0;
    default: bad_entry(c, 0x0032C000u); return;
    }
L_0032C000:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42F00000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41400000u);
    st32((c.r[18].w[0] + 176u), c.r[3].w[0]);
    set32(c.r[4], c.r[18].w[0] + 16u);
    st32((c.r[18].w[0] + 180u), c.r[2].w[0]);
    set32(c.r[25], ld32((c.r[18].w[0] + 192u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 9;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0032C024u); set32(c.r[5], c.r[29].w[0] + 80u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0032C024u) [[unlikely]] return; }
L_0032C024:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032C02Cu); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x0032C02Cu) [[unlikely]] return; }
L_0032C02C:
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    st128((c.r[18].w[0] + 64u) & ~15u, c.r[2]);
    set32(c.r[25], ld32((c.r[18].w[0] + 192u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0032C044u); set32(c.r[4], c.r[18].w[0] + 16u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0032C044u) [[unlikely]] return; }
L_0032C044:
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41400000u);
    set32(c.r[4], c.r[18].w[0] + 16u);
    set32(c.r[3], c.r[3].w[0] << 1);
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[18].w[0] + 176u), c.f[0]);
    st32((c.r[18].w[0] + 180u), c.r[2].w[0]);
    set32(c.r[25], ld32((c.r[18].w[0] + 192u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 13;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0032C078u); set32(c.r[5], c.r[29].w[0] + 64u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0032C078u) [[unlikely]] return; }
L_0032C078:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032C080u); set32(c.r[4], 0u + 4u);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x0032C080u) [[unlikely]] return; }
L_0032C080:
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    st128((c.r[18].w[0] + 64u) & ~15u, c.r[2]);
    set32(c.r[25], ld32((c.r[18].w[0] + 192u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0032C098u); set32(c.r[4], c.r[18].w[0] + 16u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0032C098u) [[unlikely]] return; }
L_0032C098:
    c.f[2] = ld32((c.r[29].w[0] + 100u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41B80000u);
    c.f[1] = ld32((c.r[29].w[0] + 84u));
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.f[0] = ld32((c.r[29].w[0] + 68u));
    c.f[3] = c.r[3].w[0];
    c.f[2] = fp::add(c.f[2], c.f[3]);
    c.f[1] = fp::add(c.f[1], c.f[3]);
    c.f[0] = fp::add(c.f[0], c.f[3]);
    st32((c.r[29].w[0] + 100u), c.f[2]);
    st32((c.r[29].w[0] + 84u), c.f[1]);
    st32((c.r[29].w[0] + 68u), c.f[0]);
    c.budget -= 13;
L_0032C0CC:
    c.r[3].d[0] = c.r[17].sd[0] < 9ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], c.r[17].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0032BFACu | kUnwind; return; } [[clang::musttail]] return unit_008A(c, 368u, depth); } }
L_0032C0D8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_0032C0F0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032C108u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 264u, depth + 1u); else { c.pc = 0x0013E560u; return; } if (c.pc != 0x0032C108u) [[unlikely]] return; }
L_0032C108:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00330000u);
    set32(c.r[2], c.r[2].w[0] + 21568u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00330000u);
    set32(c.r[4], c.r[16].w[0] + 12u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    set32(c.r[5], c.r[5].w[0] - 15344u);
    set32(c.r[6], c.r[6].w[0] - 23952u);
    set32(c.r[7], 0u + 28u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032C134u); set32(c.r[8], 0u + 10u);  if (depth < kMaxDepth) unit_0000(c, 89u, depth + 1u); else { c.pc = 0x00100790u; return; } if (c.pc != 0x0032C134u) [[unlikely]] return; }
L_0032C134:
    set32(c.r[7], 0u + 30u);
    set32(c.r[4], c.r[16].w[0] + 292u);
    set32(c.r[5], 0u + 316u);
    set32(c.r[6], 0u + 43u);
    c.r[8].d[0] = c.r[7].d[0] + 0ull;
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032C154u); set32(c.r[10], 0u + 20u);  if (depth < kMaxDepth) unit_008A(c, 214u, depth + 1u); else { c.pc = 0x0032A240u; return; } if (c.pc != 0x0032C154u) [[unlikely]] return; }
L_0032C154:
    set32(c.r[7], 0u + 30u);
    set32(c.r[4], c.r[16].w[0] + 320u);
    set32(c.r[5], 0u + 316u);
    set32(c.r[6], 0u + 349u);
    c.r[8].d[0] = c.r[7].d[0] + 0ull;
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032C174u); set32(c.r[10], 0u + 20u);  if (depth < kMaxDepth) unit_008A(c, 214u, depth + 1u); else { c.pc = 0x0032A240u; return; } if (c.pc != 0x0032C174u) [[unlikely]] return; }
L_0032C174:
    set32(c.r[17], c.r[16].w[0] + 368u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032C180u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 177u, depth + 1u); else { c.pc = 0x0015E070u; return; } if (c.pc != 0x0032C180u) [[unlikely]] return; }
L_0032C180:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[4], c.r[16].w[0] + 624u);
    set32(c.r[2], c.r[2].w[0] + 21488u);
    set32(c.r[5], 0u + 316u);
    st32((c.r[17].w[0] + 176u), c.r[2].w[0]);
    set32(c.r[6], 0u + 73u);
    set32(c.r[7], 0u + 30u);
    set32(c.r[8], 0u + 276u);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032C1ACu); set32(c.r[10], 0u + 20u);  if (depth < kMaxDepth) unit_008A(c, 214u, depth + 1u); else { c.pc = 0x0032A240u; return; } if (c.pc != 0x0032C1ACu) [[unlikely]] return; }
L_0032C1AC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 26120u)));
    set32(c.r[12], ld32((c.r[2].w[0] + 4u)));
    c.r[1].d[0] = c.r[12].sd[0] < 11ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);  if (t) { goto L_0032C1C8; } }
    set32(c.r[12], 0u + 10u);
    c.budget -= 1;
L_0032C1C8:
    set32(c.r[3], c.r[29].w[0] + 48u);
    set32(c.r[2], c.r[2].w[0] - 4544u);
    c.r[11].d[0] = 0ull + 0ull;
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    st128((c.r[3].w[0]) & ~15u, c.r[2]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42080000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[1] = c.r[2].w[0];
    set32(c.r[7], 0u + 284u);
    set32(c.r[6], 0u + 30u);
    set32(c.r[5], 0u + 20u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    set32(c.r[9], c.r[29].w[0] + 52u);
    c.f[2] = c.r[2].w[0];
    c.budget -= 14;
L_0032C200:
    c.f[0] = ld32((c.r[29].w[0] + 48u));
    set32(c.r[2], c.r[11].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] - c.r[11].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[10], c.r[16].w[0] + c.r[2].w[0]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    st32((c.r[10].w[0] + 12u), c.r[2].w[0]);
    c.f[0] = ld32((c.r[9].w[0]));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    st32((c.r[10].w[0] + 16u), c.r[2].w[0]);
    c.f[0] = ld32((c.r[29].w[0] + 56u));
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[0]));
    c.budget -= 18;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0032C258; } }
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[10].w[0] + 28u), c.r[2].w[0]);  if (t) { goto L_0032C270; } }
L_0032C258:
    c.f[0] = fp::sub(c.f[0], c.f[2]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    c.r[2].d[0] = c.r[2].d[0] | c.r[8].d[0];
    st32((c.r[10].w[0] + 28u), c.r[2].w[0]);
    c.budget -= 6;
L_0032C270:
    c.r[4].d[0] = c.r[11].sd[0] < c.r[12].sd[0] ? 1ull : 0ull;
    st32((c.r[10].w[0] + 20u), c.r[7].w[0]);
    set32(c.r[3], c.r[16].w[0] + c.r[11].w[0]);
    st32((c.r[10].w[0] + 24u), c.r[6].w[0]);
    set32(c.r[11], c.r[11].w[0] + 1u);
    st32((c.r[10].w[0] + 32u), c.r[5].w[0]);
    c.r[2].d[0] = c.r[11].sd[0] < 10ll ? 1ull : 0ull;
    st8((c.r[3].w[0] + 656u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.f[0] = ld32((c.r[9].w[0]));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.budget -= 12;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[9].w[0]), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0032C200u | kUnwind; return; } goto L_0032C200; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032C2A8u); set32(c.r[4], 0u + 272u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0032C2A8u) [[unlikely]] return; }
L_0032C2A8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0032C2D0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032C2B8u); set32(c.r[4], 0u + 37u);  if (depth < kMaxDepth) unit_0022(c, 105u, depth + 1u); else { c.pc = 0x00188790u; return; } if (c.pc != 0x0032C2B8u) [[unlikely]] return; }
L_0032C2B8:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032C2C4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 188u, depth + 1u); else { c.pc = 0x0015ED60u; return; } if (c.pc != 0x0032C2C4u) [[unlikely]] return; }
L_0032C2C4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] + 21424u);
    st32((c.r[17].w[0] + 176u), c.r[2].w[0]);
    c.budget -= 3;
L_0032C2D0:
    st32((c.r[16].w[0] + 348u), c.r[17].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43A50000u);
    set32(c.r[4], ld32((c.r[16].w[0] + 348u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42680000u);
    c.f[13] = c.r[2].w[0];
    st32((c.r[4].w[0] + 16u), c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x47980000u);
    st32((c.r[4].w[0] + 20u), c.r[3].w[0]);
    c.f[14] = c.r[2].w[0];
    st32((c.r[4].w[0] + 24u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 348u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 17;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0032C314u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0032C314u) [[unlikely]] return; }
L_0032C314:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032C31Cu); set32(c.r[4], 0u + 272u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0032C31Cu) [[unlikely]] return; }
L_0032C31C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0032C344; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032C32Cu); set32(c.r[4], 0u + 37u);  if (depth < kMaxDepth) unit_0022(c, 105u, depth + 1u); else { c.pc = 0x00188790u; return; } if (c.pc != 0x0032C32Cu) [[unlikely]] return; }
L_0032C32C:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032C338u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 188u, depth + 1u); else { c.pc = 0x0015ED60u; return; } if (c.pc != 0x0032C338u) [[unlikely]] return; }
L_0032C338:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] + 21424u);
    st32((c.r[17].w[0] + 176u), c.r[2].w[0]);
    c.budget -= 3;
L_0032C344:
    st32((c.r[16].w[0] + 352u), c.r[17].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43A50000u);
    set32(c.r[6], ld32((c.r[16].w[0] + 352u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[2].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43B60000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x47980000u);
    c.f[13] = c.r[3].w[0];
    c.f[14] = c.r[2].w[0];
    st32((c.r[6].w[0] + 16u), c.r[5].w[0]);
    st32((c.r[6].w[0] + 20u), c.r[4].w[0]);
    st32((c.r[6].w[0] + 24u), c.r[5].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 352u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 18;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0032C38Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0032C38Cu) [[unlikely]] return; }
L_0032C38C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43A30000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.f[12] = c.r[2].w[0];
    set32(c.r[6], ld32((c.r[1].w[0] + 26392u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x41000000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43990000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42780000u);
    c.f[13] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x47000000u);
    c.f[14] = c.r[2].w[0];
    set32(c.r[2], ld32((c.r[6].w[0] + 332u)));
    st32((c.r[16].w[0] + 356u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 652u), 0u);
    st32((c.r[16].w[0] + 528u), c.r[5].w[0]);
    st32((c.r[16].w[0] + 532u), c.r[3].w[0]);
    set32(c.r[25], ld32((c.r[16].w[0] + 544u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 19;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0032C3D8u); set32(c.r[4], c.r[16].w[0] + 368u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0032C3D8u) [[unlikely]] return; }
L_0032C3D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032C3E0u); set32(c.r[4], 0u + 8u);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x0032C3E0u) [[unlikely]] return; }
L_0032C3E0:
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st128((c.r[16].w[0] + 416u) & ~15u, c.r[2]);
    st32((c.r[16].w[0] + 384u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 388u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 392u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0032C410:
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.budget -= 7;
    { set32(c.r[10], 0u + 20u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0032A240u | kUnwind; return; } [[clang::musttail]] return unit_008A(c, 214u, depth); }
L_0032C430:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0032C534; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] + 21568u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 348u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0032C47C; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0032C47C; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0032C47Cu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0032C47Cu) [[unlikely]] return; }
L_0032C47C:
    st32((c.r[17].w[0] + 348u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 352u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0032C4A4; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0032C4A4; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0032C4A4u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0032C4A4u) [[unlikely]] return; }
L_0032C4A4:
    set32(c.r[4], c.r[17].w[0] + 624u);
    set32(c.r[5], 0u - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032C4B4u); st32((c.r[17].w[0] + 352u), 0u);  if (depth < kMaxDepth) unit_008A(c, 215u, depth + 1u); else { c.pc = 0x0032A270u; return; } if (c.pc != 0x0032C4B4u) [[unlikely]] return; }
L_0032C4B4:
    set32(c.r[4], c.r[17].w[0] + 368u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);  if (t) { goto L_0032C4E0; } }
    set32(c.r[2], c.r[2].w[0] + 21488u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[17].w[0] + 544u), c.r[2].w[0]);  if (t) { goto L_0032C4E0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 17408u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032C4E0u); st32((c.r[17].w[0] + 544u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0012(c, 264u, depth + 1u); else { c.pc = 0x0014ADA0u; return; } if (c.pc != 0x0032C4E0u) [[unlikely]] return; }
L_0032C4E0:
    set32(c.r[4], c.r[17].w[0] + 320u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032C4ECu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008A(c, 215u, depth + 1u); else { c.pc = 0x0032A270u; return; } if (c.pc != 0x0032C4ECu) [[unlikely]] return; }
L_0032C4EC:
    set32(c.r[4], c.r[17].w[0] + 292u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032C4F8u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008A(c, 215u, depth + 1u); else { c.pc = 0x0032A270u; return; } if (c.pc != 0x0032C4F8u) [[unlikely]] return; }
L_0032C4F8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00330000u);
    set32(c.r[4], c.r[17].w[0] + 12u);
    set32(c.r[5], c.r[5].w[0] - 23952u);
    set32(c.r[6], 0u + 28u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032C510u); set32(c.r[7], 0u + 10u);  if (depth < kMaxDepth) unit_0000(c, 86u, depth + 1u); else { c.pc = 0x00100720u; return; } if (c.pc != 0x0032C510u) [[unlikely]] return; }
L_0032C510:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032C51Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000F(c, 266u, depth + 1u); else { c.pc = 0x0013E5B0u; return; } if (c.pc != 0x0032C51Cu) [[unlikely]] return; }
L_0032C51C:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0032C538; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032C534u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x0032C534u) [[unlikely]] return; }
L_0032C534:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0032C538:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0032C550:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[17].w[0] + c.r[16].w[0]);
    c.budget -= 7;
L_0032C56C:
    c.r[2].d[0] = ld8((c.r[2].w[0] + 656u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], c.r[16].w[0] << 3);  if (t) { goto L_0032C594; } }
    set32(c.r[2], c.r[2].w[0] - c.r[16].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[25], ld32((c.r[2].w[0] + 36u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0032C594u); set32(c.r[4], c.r[2].w[0] + 12u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0032C594u) [[unlikely]] return; }
L_0032C594:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[17].w[0] + c.r[16].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0032C56Cu | kUnwind; return; } goto L_0032C56C; } }
    set32(c.r[2], 0u + 255u);
    st32((c.r[17].w[0] + 428u), c.r[2].w[0]);
    set32(c.r[25], ld32((c.r[17].w[0] + 544u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0032C5BCu); set32(c.r[4], c.r[17].w[0] + 368u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0032C5BCu) [[unlikely]] return; }
L_0032C5BC:
    set32(c.r[25], ld32((c.r[17].w[0] + 316u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0032C5CCu); set32(c.r[4], c.r[17].w[0] + 292u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0032C5CCu) [[unlikely]] return; }
L_0032C5CC:
    set32(c.r[25], ld32((c.r[17].w[0] + 344u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0032C5DCu); set32(c.r[4], c.r[17].w[0] + 320u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0032C5DCu) [[unlikely]] return; }
L_0032C5DC:
    set32(c.r[25], ld32((c.r[17].w[0] + 648u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0032C5ECu); set32(c.r[4], c.r[17].w[0] + 624u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0032C5ECu) [[unlikely]] return; }
L_0032C5EC:
    set32(c.r[2], ld32((c.r[17].w[0] + 348u)));
    set32(c.r[3], 0u + 255u);
    st32((c.r[2].w[0] + 60u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 352u)));
    st32((c.r[2].w[0] + 60u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 348u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 10;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0032C614u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0032C614u) [[unlikely]] return; }
L_0032C614:
    set32(c.r[4], ld32((c.r[17].w[0] + 352u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0032C628u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0032C628u) [[unlikely]] return; }
L_0032C628:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[5], c.r[29].w[0] + 48u);
    set32(c.r[2], c.r[2].w[0] - 4528u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    ld128((c.r[2].w[0]) & ~15u, c.r[3]);
    c.r[4].d[0] = 0ull + 0ull;
    st128((c.r[5].w[0]) & ~15u, c.r[3]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = ld32((c.r[1].w[0] - 12712u));
    set32(c.r[3], ld32((c.r[17].w[0] + 356u)));
    st32((c.r[3].w[0] + 16u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[0] = ld32((c.r[1].w[0] - 12712u));
    st32((c.r[3].w[0] + 20u), c.f[0]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032C668u); st32((c.r[3].w[0] + 24u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x0032C668u) [[unlikely]] return; }
L_0032C668:
    ld128((c.r[2].w[0]) & ~15u, c.r[3]);
    set32(c.r[2], ld32((c.r[17].w[0] + 356u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032C678u); st128((c.r[2].w[0] + 48u) & ~15u, c.r[3]);  if (depth < kMaxDepth) unit_0022(c, 132u, depth + 1u); else { c.pc = 0x00188B30u; return; } if (c.pc != 0x0032C678u) [[unlikely]] return; }
L_0032C678:
    set32(c.r[3], ld32((c.r[17].w[0] + 356u)));
    c.r[16].d[0] = 0ull + 0ull;
    st32((c.r[3].w[0] + 60u), c.r[2].w[0]);
    c.budget -= 3;
L_0032C684:
    set32(c.r[3], c.r[17].w[0] + c.r[16].w[0]);
    c.r[3].d[0] = ld8((c.r[3].w[0] + 656u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0032C6E8; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 652u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[4], c.r[29].w[0] + 72u);
    set32(c.r[5], c.r[5].w[0] - 12808u);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032C6B0u); set32(c.r[6], c.r[2].w[0] + 1u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x00127458u; return; } if (c.pc != 0x0032C6B0u) [[unlikely]] return; }
L_0032C6B0:
    set32(c.r[3], ld32((c.r[17].w[0] + 356u)));
    set32(c.r[2], c.r[29].w[0] + 72u);
    st32((c.r[3].w[0] + 352u), c.r[2].w[0]);
    st32((c.r[3].w[0] + 356u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 356u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 9;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0032C6D4u); set32(c.r[5], c.r[29].w[0] + 48u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0032C6D4u) [[unlikely]] return; }
L_0032C6D4:
    set32(c.r[4], ld32((c.r[17].w[0] + 356u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0032C6E8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0032C6E8u) [[unlikely]] return; }
L_0032C6E8:
    c.f[1] = ld32((c.r[29].w[0] + 52u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42080000u);
    c.f[0] = c.r[3].w[0];
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[3].d[0] = c.r[16].sd[0] < 10ll ? 1ull : 0ull;
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[29].w[0] + 52u), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0032C684u | kUnwind; return; } goto L_0032C684; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0032C720:
    c.r[1].d[0] = c.r[5].sd[0] < 11ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[3], c.r[5].w[0] + c.r[4].w[0]);  if (t) { goto L_0032C730; } }
    st8((c.r[3].w[0] + 656u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.budget -= 1;
L_0032C730:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0032C740:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[7], 0u + 73u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[8], 0u + 349u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[9], 0u + 10u);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032C764u); set32(c.r[4], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_008B(c, 304u, depth + 1u); else { c.pc = 0x0032F350u; return; } if (c.pc != 0x0032C764u) [[unlikely]] return; }
L_0032C764:
    set32(c.r[5], c.r[16].w[0] + 624u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032C770u); set32(c.r[4], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_008B(c, 305u, depth + 1u); else { c.pc = 0x0032F370u; return; } if (c.pc != 0x0032C770u) [[unlikely]] return; }
L_0032C770:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0032C780:
    c.r[3].d[0] = c.r[5].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0032C790; } }
    set32(c.r[5], 0u + 9u);
    c.budget -= 1;
L_0032C790:
    c.budget -= 2;
    { const bool t = c.r[5].sd[0] < 0; set32(c.r[3], c.r[5].w[0] << 3);  if (t) { goto L_0032C7A8; } }
    set32(c.r[3], c.r[3].w[0] - c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[3].w[0] + 32u), c.r[6].w[0]);
    c.budget -= 4;
L_0032C7A8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0032C7B0:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032C7CCu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_000F(c, 264u, depth + 1u); else { c.pc = 0x0013E560u; return; } if (c.pc != 0x0032C7CCu) [[unlikely]] return; }
L_0032C7CC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[4], c.r[17].w[0] + 16u);
    set32(c.r[2], c.r[2].w[0] + 21552u);
    set32(c.r[5], 0u + 5u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032C7E8u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_008A(c, 257u, depth + 1u); else { c.pc = 0x0032AE80u; return; } if (c.pc != 0x0032C7E8u) [[unlikely]] return; }
L_0032C7E8:
    set32(c.r[4], c.r[17].w[0] + 208u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032C7F4u); set32(c.r[5], 0u + 11u);  if (depth < kMaxDepth) unit_0023(c, 195u, depth + 1u); else { c.pc = 0x0018DEA0u; return; } if (c.pc != 0x0032C7F4u) [[unlikely]] return; }
L_0032C7F4:
    set32(c.r[4], c.r[17].w[0] + 320u);
    set32(c.r[5], 0u + 372u);
    set32(c.r[6], 0u + 281u);
    set32(c.r[7], 0u + 84u);
    set32(c.r[8], 0u + 16u);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00F10000u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032C814u); set32(c.r[10], 0u + 20u);  if (depth < kMaxDepth) unit_008A(c, 214u, depth + 1u); else { c.pc = 0x0032A240u; return; } if (c.pc != 0x0032C814u) [[unlikely]] return; }
L_0032C814:
    set32(c.r[4], c.r[17].w[0] + 348u);
    set32(c.r[5], 0u + 372u);
    set32(c.r[6], 0u + 297u);
    set32(c.r[7], 0u + 84u);
    set32(c.r[8], 0u + 16u);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00F10000u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032C834u); set32(c.r[10], 0u + 20u);  if (depth < kMaxDepth) unit_008A(c, 214u, depth + 1u); else { c.pc = 0x0032A240u; return; } if (c.pc != 0x0032C834u) [[unlikely]] return; }
L_0032C834:
    set32(c.r[4], c.r[17].w[0] + 376u);
    set32(c.r[5], 0u + 372u);
    set32(c.r[6], 0u + 314u);
    set32(c.r[7], 0u + 84u);
    set32(c.r[8], 0u + 16u);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00F10000u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032C854u); set32(c.r[10], 0u + 20u);  if (depth < kMaxDepth) unit_008A(c, 214u, depth + 1u); else { c.pc = 0x0032A240u; return; } if (c.pc != 0x0032C854u) [[unlikely]] return; }
L_0032C854:
    set32(c.r[4], c.r[17].w[0] + 404u);
    set32(c.r[5], 0u + 372u);
    set32(c.r[6], 0u + 331u);
    set32(c.r[7], 0u + 84u);
    set32(c.r[8], 0u + 16u);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00F10000u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032C874u); set32(c.r[10], 0u + 20u);  if (depth < kMaxDepth) unit_008A(c, 214u, depth + 1u); else { c.pc = 0x0032A240u; return; } if (c.pc != 0x0032C874u) [[unlikely]] return; }
L_0032C874:
    set32(c.r[4], c.r[17].w[0] + 432u);
    set32(c.r[5], 0u + 372u);
    set32(c.r[6], 0u + 348u);
    set32(c.r[7], 0u + 84u);
    set32(c.r[8], 0u + 16u);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00F10000u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032C894u); set32(c.r[10], 0u + 20u);  if (depth < kMaxDepth) unit_008A(c, 214u, depth + 1u); else { c.pc = 0x0032A240u; return; } if (c.pc != 0x0032C894u) [[unlikely]] return; }
L_0032C894:
    set32(c.r[4], c.r[17].w[0] + 460u);
    set32(c.r[5], 0u + 372u);
    set32(c.r[6], 0u + 365u);
    set32(c.r[7], 0u + 84u);
    set32(c.r[8], 0u + 16u);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00F10000u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032C8B4u); set32(c.r[10], 0u + 20u);  if (depth < kMaxDepth) unit_008A(c, 214u, depth + 1u); else { c.pc = 0x0032A240u; return; } if (c.pc != 0x0032C8B4u) [[unlikely]] return; }
L_0032C8B4:
    set32(c.r[4], c.r[17].w[0] + 488u);
    set32(c.r[5], 0u + 372u);
    set32(c.r[6], 0u + 381u);
    set32(c.r[7], 0u + 84u);
    set32(c.r[8], 0u + 16u);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00F10000u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032C8D4u); set32(c.r[10], 0u + 20u);  if (depth < kMaxDepth) unit_008A(c, 214u, depth + 1u); else { c.pc = 0x0032A240u; return; } if (c.pc != 0x0032C8D4u) [[unlikely]] return; }
L_0032C8D4:
    set32(c.r[18], c.r[17].w[0] + 528u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032C8E0u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 177u, depth + 1u); else { c.pc = 0x0015E070u; return; } if (c.pc != 0x0032C8E0u) [[unlikely]] return; }
L_0032C8E0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[16], c.r[17].w[0] + 784u);
    set32(c.r[2], c.r[2].w[0] + 21488u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032C8F8u); st32((c.r[18].w[0] + 176u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0017(c, 177u, depth + 1u); else { c.pc = 0x0015E070u; return; } if (c.pc != 0x0032C8F8u) [[unlikely]] return; }
L_0032C8F8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[4], c.r[17].w[0] + 208u);
    set32(c.r[2], c.r[2].w[0] + 21488u);
    set32(c.r[5], 0u + 7u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032C910u); st32((c.r[16].w[0] + 176u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0023(c, 205u, depth + 1u); else { c.pc = 0x0018DFE0u; return; } if (c.pc != 0x0032C910u) [[unlikely]] return; }
L_0032C910:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 26392u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 440u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032C924u); set32(c.r[4], c.r[17].w[0] + 208u);  if (depth < kMaxDepth) unit_0023(c, 203u, depth + 1u); else { c.pc = 0x0018DFC0u; return; } if (c.pc != 0x0032C924u) [[unlikely]] return; }
L_0032C924:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[5], c.r[29].w[0] + 96u);
    set32(c.r[6], c.r[6].w[0] - 4512u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    ld128((c.r[6].w[0]) & ~15u, c.r[4]);
    c.f[0] = ld32((c.r[6].w[0] + 24u));
    c.r[3].d[0] = ld64((c.r[6].w[0] + 16u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[16].d[0] = 0ull + 0ull;
    st128((c.r[5].w[0]) & ~15u, c.r[4]);
    st64((c.r[5].w[0] + 16u), c.r[3].d[0]);
    st32((c.r[5].w[0] + 24u), c.f[0]);
    c.f[1] = ld32((c.r[1].w[0] - 12704u));
    st32((c.r[29].w[0] + 72u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 76u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[0] = ld32((c.r[1].w[0] - 12720u));
    st32((c.r[29].w[0] + 64u), c.f[1]);
    st32((c.r[29].w[0] + 68u), c.f[0]);
    set32(c.r[2], c.r[16].w[0] << 2);
    c.budget -= 20;
L_0032C974:
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032C980u); set32(c.r[4], ld32((c.r[2].w[0] + 96u)));  if (depth < kMaxDepth) unit_000B(c, 461u, depth + 1u); else { c.pc = 0x0012FD60u; return; } if (c.pc != 0x0032C980u) [[unlikely]] return; }
L_0032C980:
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[17].w[0] + 208u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032C990u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0023(c, 210u, depth + 1u); else { c.pc = 0x0018E080u; return; } if (c.pc != 0x0032C990u) [[unlikely]] return; }
L_0032C990:
    set32(c.r[4], c.r[17].w[0] + 208u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032C9A0u); set32(c.r[6], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0023(c, 211u, depth + 1u); else { c.pc = 0x0018E0B0u; return; } if (c.pc != 0x0032C9A0u) [[unlikely]] return; }
L_0032C9A0:
    set32(c.r[4], c.r[17].w[0] + 208u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032C9B0u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0023(c, 214u, depth + 1u); else { c.pc = 0x0018E160u; return; } if (c.pc != 0x0032C9B0u) [[unlikely]] return; }
L_0032C9B0:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < 7ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[16].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0032C974u | kUnwind; return; } goto L_0032C974; } }
    set32(c.r[2], 0u + 295u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43CF0000u);
    c.f[0] = c.r[2].w[0];
    st32((c.r[29].w[0] + 80u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x4B720000u);
    set32(c.r[4], c.r[17].w[0] + 208u);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[29].w[0] + 88u), c.r[3].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 92u), c.r[2].w[0]);
    set32(c.r[6], c.r[29].w[0] + 80u);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032C9F8u); st32((c.r[29].w[0] + 84u), c.f[0]);  if (depth < kMaxDepth) unit_0023(c, 212u, depth + 1u); else { c.pc = 0x0018E0F0u; return; } if (c.pc != 0x0032C9F8u) [[unlikely]] return; }
L_0032C9F8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[16], c.r[29].w[0] + 84u);
    c.f[0] = ld32((c.r[1].w[0] - 12728u));
    c.r[18].d[0] = 0ull + 0ull;
    st32((c.r[16].w[0]), c.f[0]);
    c.budget -= 5;
L_0032CA0C:
    set32(c.r[4], c.r[17].w[0] + 208u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032CA1Cu); set32(c.r[6], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0023(c, 212u, depth + 1u); else { c.pc = 0x0018E0F0u; return; } if (c.pc != 0x0032CA1Cu) [[unlikely]] return; }
L_0032CA1C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.f[1] = ld32((c.r[16].w[0]));
    c.r[2].d[0] = c.r[18].sd[0] < 7ll ? 1ull : 0ull;
    c.f[0] = ld32((c.r[1].w[0] - 12736u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[16].w[0]), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0032CA0Cu | kUnwind; return; } goto L_0032CA0C; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43800000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42F20000u);
    st32((c.r[17].w[0] + 688u), c.r[3].w[0]);
    set32(c.r[4], c.r[17].w[0] + 528u);
    st32((c.r[17].w[0] + 692u), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43B90000u);
    st32((c.r[17].w[0] + 544u), c.r[3].w[0]);
    c.f[12] = c.r[2].w[0];
    st32((c.r[17].w[0] + 548u), c.r[3].w[0]);
    st32((c.r[17].w[0] + 552u), c.r[3].w[0]);
    set32(c.r[2], 0u + 279u);
    set32(c.r[25], ld32((c.r[17].w[0] + 704u)));
    c.f[0] = c.r[2].w[0];
    c.f[13] = fp::cvt_s_w(c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00F00000u);
    c.r[2].d[0] = c.r[2].d[0] | 32768ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.f[0] = c.r[2].w[0];
    c.budget -= 22;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0032CA94u); c.f[14] = fp::cvt_s_w(c.f[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0032CA94u) [[unlikely]] return; }
L_0032CA94:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032CA9Cu); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x0032CA9Cu) [[unlikely]] return; }
L_0032CA9C:
    ld128((c.r[2].w[0]) & ~15u, c.r[8]);
    set32(c.r[3], 0u + 281u);
    c.f[1] = c.r[3].w[0];
    c.r[7].sd[0] = static_cast<std::int32_t>(0x437C0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x42EA0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[13] = fp::cvt_s_w(c.f[1]);
    set32(c.r[4], c.r[17].w[0] + 784u);
    st128((c.r[17].w[0] + 576u) & ~15u, c.r[8]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43BA0000u);
    st32((c.r[17].w[0] + 944u), c.r[7].w[0]);
    st32((c.r[17].w[0] + 948u), c.r[6].w[0]);
    st32((c.r[17].w[0] + 800u), c.r[5].w[0]);
    c.f[12] = c.r[2].w[0];
    st32((c.r[17].w[0] + 804u), c.r[5].w[0]);
    st32((c.r[17].w[0] + 808u), c.r[5].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00F00000u);
    set32(c.r[25], ld32((c.r[17].w[0] + 960u)));
    c.r[2].d[0] = c.r[2].d[0] | 36864ull;
    c.f[0] = c.r[2].w[0];
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 23;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0032CAF8u); c.f[14] = fp::cvt_s_w(c.f[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0032CAF8u) [[unlikely]] return; }
L_0032CAF8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032CB00u); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x0032CB00u) [[unlikely]] return; }
L_0032CB00:
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    st128((c.r[17].w[0] + 832u) & ~15u, c.r[2]);
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_0032CB30:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0032CC40; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[4], c.r[16].w[0] + 784u);
    set32(c.r[2], c.r[2].w[0] + 21552u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_0032CB84; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] + 21488u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[16].w[0] + 960u), c.r[2].w[0]);  if (t) { goto L_0032CB84; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 17408u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032CB84u); st32((c.r[16].w[0] + 960u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0012(c, 264u, depth + 1u); else { c.pc = 0x0014ADA0u; return; } if (c.pc != 0x0032CB84u) [[unlikely]] return; }
L_0032CB84:
    set32(c.r[4], c.r[16].w[0] + 528u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);  if (t) { goto L_0032CBB0; } }
    set32(c.r[2], c.r[2].w[0] + 21488u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[16].w[0] + 704u), c.r[2].w[0]);  if (t) { goto L_0032CBB0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 17408u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032CBB0u); st32((c.r[16].w[0] + 704u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0012(c, 264u, depth + 1u); else { c.pc = 0x0014ADA0u; return; } if (c.pc != 0x0032CBB0u) [[unlikely]] return; }
L_0032CBB0:
    set32(c.r[4], c.r[16].w[0] + 488u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032CBBCu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008A(c, 215u, depth + 1u); else { c.pc = 0x0032A270u; return; } if (c.pc != 0x0032CBBCu) [[unlikely]] return; }
L_0032CBBC:
    set32(c.r[4], c.r[16].w[0] + 460u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032CBC8u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008A(c, 215u, depth + 1u); else { c.pc = 0x0032A270u; return; } if (c.pc != 0x0032CBC8u) [[unlikely]] return; }
L_0032CBC8:
    set32(c.r[4], c.r[16].w[0] + 432u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032CBD4u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008A(c, 215u, depth + 1u); else { c.pc = 0x0032A270u; return; } if (c.pc != 0x0032CBD4u) [[unlikely]] return; }
L_0032CBD4:
    set32(c.r[4], c.r[16].w[0] + 404u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032CBE0u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008A(c, 215u, depth + 1u); else { c.pc = 0x0032A270u; return; } if (c.pc != 0x0032CBE0u) [[unlikely]] return; }
L_0032CBE0:
    set32(c.r[4], c.r[16].w[0] + 376u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032CBECu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008A(c, 215u, depth + 1u); else { c.pc = 0x0032A270u; return; } if (c.pc != 0x0032CBECu) [[unlikely]] return; }
L_0032CBEC:
    set32(c.r[4], c.r[16].w[0] + 348u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032CBF8u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008A(c, 215u, depth + 1u); else { c.pc = 0x0032A270u; return; } if (c.pc != 0x0032CBF8u) [[unlikely]] return; }
L_0032CBF8:
    set32(c.r[4], c.r[16].w[0] + 320u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032CC04u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008A(c, 215u, depth + 1u); else { c.pc = 0x0032A270u; return; } if (c.pc != 0x0032CC04u) [[unlikely]] return; }
L_0032CC04:
    set32(c.r[4], c.r[16].w[0] + 208u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032CC10u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0023(c, 199u, depth + 1u); else { c.pc = 0x0018DF40u; return; } if (c.pc != 0x0032CC10u) [[unlikely]] return; }
L_0032CC10:
    set32(c.r[4], c.r[16].w[0] + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032CC1Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008A(c, 261u, depth + 1u); else { c.pc = 0x0032AF10u; return; } if (c.pc != 0x0032CC1Cu) [[unlikely]] return; }
L_0032CC1C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032CC28u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000F(c, 266u, depth + 1u); else { c.pc = 0x0013E5B0u; return; } if (c.pc != 0x0032CC28u) [[unlikely]] return; }
L_0032CC28:
    c.r[2].d[0] = c.r[17].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0032CC44; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032CC40u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x0032CC40u) [[unlikely]] return; }
L_0032CC40:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0032CC44:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0032CC60:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[16].w[0] + 704u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 56u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0032CC80u); set32(c.r[4], c.r[16].w[0] + 528u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0032CC80u) [[unlikely]] return; }
L_0032CC80:
    set32(c.r[25], ld32((c.r[16].w[0] + 960u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 56u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0032CC90u); set32(c.r[4], c.r[16].w[0] + 784u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0032CC90u) [[unlikely]] return; }
L_0032CC90:
    set32(c.r[25], ld32((c.r[16].w[0] + 344u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0032CCA0u); set32(c.r[4], c.r[16].w[0] + 320u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0032CCA0u) [[unlikely]] return; }
L_0032CCA0:
    set32(c.r[25], ld32((c.r[16].w[0] + 372u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0032CCB0u); set32(c.r[4], c.r[16].w[0] + 348u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0032CCB0u) [[unlikely]] return; }
L_0032CCB0:
    set32(c.r[25], ld32((c.r[16].w[0] + 400u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0032CCC0u); set32(c.r[4], c.r[16].w[0] + 376u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0032CCC0u) [[unlikely]] return; }
L_0032CCC0:
    set32(c.r[25], ld32((c.r[16].w[0] + 428u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0032CCD0u); set32(c.r[4], c.r[16].w[0] + 404u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0032CCD0u) [[unlikely]] return; }
L_0032CCD0:
    set32(c.r[25], ld32((c.r[16].w[0] + 456u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0032CCE0u); set32(c.r[4], c.r[16].w[0] + 432u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0032CCE0u) [[unlikely]] return; }
L_0032CCE0:
    set32(c.r[25], ld32((c.r[16].w[0] + 484u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0032CCF0u); set32(c.r[4], c.r[16].w[0] + 460u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0032CCF0u) [[unlikely]] return; }
L_0032CCF0:
    set32(c.r[25], ld32((c.r[16].w[0] + 512u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0032CD00u); set32(c.r[4], c.r[16].w[0] + 488u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0032CD00u) [[unlikely]] return; }
L_0032CD00:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0032CD10:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032CD24u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 132u, depth + 1u); else { c.pc = 0x00188B30u; return; } if (c.pc != 0x0032CD24u) [[unlikely]] return; }
L_0032CD24:
    set32(c.r[3], ld32((c.r[16].w[0] + 60u)));
    c.r[1].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0032CD38; } }
    st32((c.r[16].w[0] + 60u), c.r[2].w[0]);
    c.budget -= 1;
L_0032CD38:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032CD40u);  if (depth < kMaxDepth) unit_0017(c, 179u, depth + 1u); else { c.pc = 0x0015E0B0u; return; } if (c.pc != 0x0032CD40u) [[unlikely]] return; }
L_0032CD40:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0032CD50:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032CD64u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 132u, depth + 1u); else { c.pc = 0x00188B30u; return; } if (c.pc != 0x0032CD64u) [[unlikely]] return; }
L_0032CD64:
    st32((c.r[16].w[0] + 60u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 60u)));
    c.r[1].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0032CD7C; } }
    st32((c.r[16].w[0] + 60u), c.r[2].w[0]);
    c.budget -= 1;
L_0032CD7C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032CD84u);  if (depth < kMaxDepth) unit_0017(c, 182u, depth + 1u); else { c.pc = 0x0015E530u; return; } if (c.pc != 0x0032CD84u) [[unlikely]] return; }
L_0032CD84:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0032CDA0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032CDB4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 132u, depth + 1u); else { c.pc = 0x00188B30u; return; } if (c.pc != 0x0032CDB4u) [[unlikely]] return; }
L_0032CDB4:
    set32(c.r[3], ld32((c.r[16].w[0] + 60u)));
    c.r[1].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0032CDC8; } }
    st32((c.r[16].w[0] + 60u), c.r[2].w[0]);
    c.budget -= 1;
L_0032CDC8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032CDD0u);  if (depth < kMaxDepth) unit_0017(c, 191u, depth + 1u); else { c.pc = 0x0015EEA0u; return; } if (c.pc != 0x0032CDD0u) [[unlikely]] return; }
L_0032CDD0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0032CDE0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032CDF4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 132u, depth + 1u); else { c.pc = 0x00188B30u; return; } if (c.pc != 0x0032CDF4u) [[unlikely]] return; }
L_0032CDF4:
    set32(c.r[3], ld32((c.r[16].w[0] + 60u)));
    c.r[1].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0032CE08; } }
    st32((c.r[16].w[0] + 60u), c.r[2].w[0]);
    c.budget -= 1;
L_0032CE08:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032CE10u);  if (depth < kMaxDepth) unit_0017(c, 198u, depth + 1u); else { c.pc = 0x0015F450u; return; } if (c.pc != 0x0032CE10u) [[unlikely]] return; }
L_0032CE10:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0032CE20:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032CE34u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 132u, depth + 1u); else { c.pc = 0x00188B30u; return; } if (c.pc != 0x0032CE34u) [[unlikely]] return; }
L_0032CE34:
    st32((c.r[16].w[0] + 60u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032CE40u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 191u, depth + 1u); else { c.pc = 0x0015EEA0u; return; } if (c.pc != 0x0032CE40u) [[unlikely]] return; }
L_0032CE40:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0032CE50:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032CE64u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 132u, depth + 1u); else { c.pc = 0x00188B30u; return; } if (c.pc != 0x0032CE64u) [[unlikely]] return; }
L_0032CE64:
    st32((c.r[16].w[0] + 60u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032CE70u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 198u, depth + 1u); else { c.pc = 0x0015F450u; return; } if (c.pc != 0x0032CE70u) [[unlikely]] return; }
L_0032CE70:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0032CE80:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032CEA4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 249u, depth + 1u); else { c.pc = 0x0013E370u; return; } if (c.pc != 0x0032CEA4u) [[unlikely]] return; }
L_0032CEA4:
    set32(c.r[4], c.r[16].w[0] + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032CEB0u); set32(c.r[5], 0u + 16u);  if (depth < kMaxDepth) unit_000F(c, 264u, depth + 1u); else { c.pc = 0x0013E560u; return; } if (c.pc != 0x0032CEB0u) [[unlikely]] return; }
L_0032CEB0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.f[0] = c.r[18].w[0];
    set32(c.r[2], c.r[2].w[0] + 21296u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] + 21312u);
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.f[1] = c.r[2].w[0];
    fpu_div(c, 0u, c.f[1], c.f[0]);
    st32((c.r[16].w[0] + 28u), c.f[0]);
    c.budget -= 16;
    { const bool t = c.r[17].sd[0] < 0; st32((c.r[16].w[0] + 32u), 0u);  if (t) { goto L_0032CEFC; } }
    c.f[0] = c.r[17].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0032CF18; } }
L_0032CEFC:
    set32(c.r[3], c.r[17].w[0] >> 1);
    c.r[2].d[0] = c.r[17].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::add(c.f[0], c.f[0]);
    c.budget -= 7;
L_0032CF18:
    st32((c.r[16].w[0] + 36u), c.f[0]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0032CF40:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43000000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.f[0] = c.r[2].w[0];
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.f[2] = ld32((c.r[4].w[0] + 28u));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.f[1] = ld32((c.r[4].w[0] + 32u));
    c.f[1] = fp::add(c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 12;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[4].w[0] + 32u), c.f[1]);  if (t) { goto L_0032CF74; } }
    st32((c.r[16].w[0] + 32u), c.f[0]);
    c.budget -= 1;
L_0032CF74:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[10], ld32((c.r[1].w[0] + 20144u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[10].w[0] + c.r[1].w[0]);
    set32(c.r[2], ld32((c.r[1].w[0] + 1364u)));
    c.r[1].d[0] = c.r[2].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0032D02C; } }
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
    set32(c.r[2], 0u + 71u);
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
    st64((c.r[8].w[0] + 48u), 0ull);
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
L_0032D02C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], 0u - 320u);
    set32(c.r[11], ld32((c.r[1].w[0] + 20144u)));
    set32(c.r[2], 0u - 256u);
    st32((c.r[29].w[0] + 32u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 36u), c.r[2].w[0]);
    set32(c.r[3], 0u + 320u);
    set32(c.r[2], 0u + 256u);
    st32((c.r[29].w[0] + 40u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 44u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[11].w[0] + c.r[1].w[0]);
    set32(c.r[2], ld32((c.r[1].w[0] + 1364u)));
    c.r[1].d[0] = c.r[2].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 16;
    { const bool t = c.r[1].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);  if (t) { goto L_0032D104; } }
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
L_0032D104:
    c.f[0] = ld32((c.r[16].w[0] + 32u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[6].d[0] = c.r[2].d[0] | 65535ull;
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032D124u); set32(c.r[5], c.r[2].w[0] << 24);  if (depth < kMaxDepth) unit_0049(c, 8u, depth + 1u); else { c.pc = 0x002242E0u; return; } if (c.pc != 0x0032D124u) [[unlikely]] return; }
L_0032D124:
    c.f[1] = ld32((c.r[16].w[0] + 32u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0032D190; } }
    c.f[1] = ld32((c.r[16].w[0] + 36u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[4], 0u + 40u);  if (t) { goto L_0032D174; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032D160u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0032D160u) [[unlikely]] return; }
L_0032D160:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[5], 0u + 4u);  if (t) { goto L_0032D174; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032D174u);  if (depth < kMaxDepth) unit_008B(c, 140u, depth + 1u); else { c.pc = 0x0032D220u; return; } if (c.pc != 0x0032D174u) [[unlikely]] return; }
L_0032D174:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0032D190; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0032D190u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0032D190u) [[unlikely]] return; }
L_0032D190:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0032D1A0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0032D204; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 21296u);
    set32(c.r[2], c.r[2].w[0] + 21312u);
    st32((c.r[17].w[0]), c.r[3].w[0]);
    set32(c.r[4], c.r[17].w[0] + 16u);
    st32((c.r[17].w[0] + 16u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032D1E0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000F(c, 266u, depth + 1u); else { c.pc = 0x0013E5B0u; return; } if (c.pc != 0x0032D1E0u) [[unlikely]] return; }
L_0032D1E0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032D1ECu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000F(c, 252u, depth + 1u); else { c.pc = 0x0013E3C0u; return; } if (c.pc != 0x0032D1ECu) [[unlikely]] return; }
L_0032D1EC:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0032D208; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032D204u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x0032D204u) [[unlikely]] return; }
L_0032D204:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0032D208:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0032D220:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032D23Cu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 249u, depth + 1u); else { c.pc = 0x0013E370u; return; } if (c.pc != 0x0032D23Cu) [[unlikely]] return; }
L_0032D23C:
    set32(c.r[4], c.r[17].w[0] + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032D248u); set32(c.r[5], 0u + 16u);  if (depth < kMaxDepth) unit_000F(c, 264u, depth + 1u); else { c.pc = 0x0013E560u; return; } if (c.pc != 0x0032D248u) [[unlikely]] return; }
L_0032D248:
    c.f[0] = c.r[16].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    set32(c.r[2], c.r[2].w[0] + 21248u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] + 21264u);
    st32((c.r[17].w[0] + 16u), c.r[2].w[0]);
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.f[1] = c.r[3].w[0];
    fpu_div(c, 0u, c.f[1], c.f[0]);
    c.f[0] = c.f[0] ^ fp::kSign;
    st32((c.r[17].w[0] + 28u), c.f[0]);
    st32((c.r[17].w[0] + 32u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 21;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0032D2A0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.f[0] = 0u;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.f[2] = ld32((c.r[4].w[0] + 28u));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.f[1] = ld32((c.r[4].w[0] + 32u));
    c.f[1] = fp::add(c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 11;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[4].w[0] + 32u), c.f[1]);  if (t) { goto L_0032D2D0; } }
    st32((c.r[16].w[0] + 32u), c.f[0]);
    c.budget -= 1;
L_0032D2D0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[10], ld32((c.r[1].w[0] + 20144u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[10].w[0] + c.r[1].w[0]);
    set32(c.r[2], ld32((c.r[1].w[0] + 1364u)));
    c.r[1].d[0] = c.r[2].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0032D388; } }
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
    set32(c.r[2], 0u + 71u);
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
    st64((c.r[8].w[0] + 48u), 0ull);
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
L_0032D388:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], 0u - 320u);
    set32(c.r[11], ld32((c.r[1].w[0] + 20144u)));
    set32(c.r[2], 0u - 256u);
    st32((c.r[29].w[0] + 32u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 36u), c.r[2].w[0]);
    set32(c.r[3], 0u + 320u);
    set32(c.r[2], 0u + 256u);
    st32((c.r[29].w[0] + 40u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 44u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[11].w[0] + c.r[1].w[0]);
    set32(c.r[2], ld32((c.r[1].w[0] + 1364u)));
    c.r[1].d[0] = c.r[2].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 16;
    { const bool t = c.r[1].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);  if (t) { goto L_0032D460; } }
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
L_0032D460:
    c.f[0] = ld32((c.r[16].w[0] + 32u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[6].d[0] = c.r[2].d[0] | 65535ull;
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032D480u); set32(c.r[5], c.r[2].w[0] << 24);  if (depth < kMaxDepth) unit_0049(c, 8u, depth + 1u); else { c.pc = 0x002242E0u; return; } if (c.pc != 0x0032D480u) [[unlikely]] return; }
L_0032D480:
    c.f[1] = ld32((c.r[16].w[0] + 32u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0032D4B4; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0032D4B4; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0032D4B4u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0032D4B4u) [[unlikely]] return; }
L_0032D4B4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0032D4D0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0032D534; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 21248u);
    set32(c.r[2], c.r[2].w[0] + 21264u);
    st32((c.r[17].w[0]), c.r[3].w[0]);
    set32(c.r[4], c.r[17].w[0] + 16u);
    st32((c.r[17].w[0] + 16u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032D510u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000F(c, 266u, depth + 1u); else { c.pc = 0x0013E5B0u; return; } if (c.pc != 0x0032D510u) [[unlikely]] return; }
L_0032D510:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032D51Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000F(c, 252u, depth + 1u); else { c.pc = 0x0013E3C0u; return; } if (c.pc != 0x0032D51Cu) [[unlikely]] return; }
L_0032D51C:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0032D538; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032D534u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x0032D534u) [[unlikely]] return; }
L_0032D534:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0032D538:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0032D550:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
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
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032D588u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0023(c, 187u, depth + 1u); else { c.pc = 0x0018DCC0u; return; } if (c.pc != 0x0032D588u) [[unlikely]] return; }
L_0032D588:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032D594u); set32(c.r[4], c.r[20].w[0] + 64u);  if (depth < kMaxDepth) unit_000F(c, 264u, depth + 1u); else { c.pc = 0x0013E560u; return; } if (c.pc != 0x0032D594u) [[unlikely]] return; }
L_0032D594:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] + 21216u);
    set32(c.r[3], c.r[3].w[0] + 21228u);
    st32((c.r[20].w[0] + 52u), c.r[2].w[0]);
    st32((c.r[20].w[0] + 64u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[20].d[0] + 0ull;
    st32((c.r[20].w[0] + 96u), c.r[17].w[0]);
    st32((c.r[20].w[0] + 80u), c.r[19].w[0]);
    st32((c.r[20].w[0] + 84u), c.r[18].w[0]);
    st32((c.r[20].w[0] + 76u), 0u);
    st8((c.r[20].w[0] + 92u), static_cast<std::uint8_t>(0u));
    st32((c.r[20].w[0] + 88u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 21;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0032D5F0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0032D654; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 21216u);
    set32(c.r[2], c.r[2].w[0] + 21228u);
    st32((c.r[17].w[0] + 52u), c.r[3].w[0]);
    set32(c.r[4], c.r[17].w[0] + 64u);
    st32((c.r[17].w[0] + 64u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032D630u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000F(c, 266u, depth + 1u); else { c.pc = 0x0013E5B0u; return; } if (c.pc != 0x0032D630u) [[unlikely]] return; }
L_0032D630:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032D63Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0023(c, 188u, depth + 1u); else { c.pc = 0x0018DD30u; return; } if (c.pc != 0x0032D63Cu) [[unlikely]] return; }
L_0032D63C:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0032D658; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032D654u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x0032D654u) [[unlikely]] return; }
L_0032D654:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0032D658:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0032D670:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const bool t = c.r[6].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0032D688; } }
    st32((c.r[16].w[0] + 96u), c.r[6].w[0]);
    c.budget -= 1;
L_0032D688:
    set32(c.r[3], ld32((c.r[16].w[0] + 96u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0032D704; } }
    st32((c.r[16].w[0] + 48u), c.r[5].w[0]);
    ld128((c.r[16].w[0] + 32u) & ~15u, c.r[3]);
    set32(c.r[2], ld32((c.r[16].w[0] + 96u)));
    st128((c.r[2].w[0] + 16u) & ~15u, c.r[3]);
    set32(c.r[2], ld32((c.r[16].w[0] + 96u)));
    st32((c.r[2].w[0] + 352u), c.r[5].w[0]);
    st32((c.r[2].w[0] + 356u), 0u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032D6B8u); set32(c.r[4], ld32((c.r[16].w[0] + 96u)));  if (depth < kMaxDepth) unit_0018(c, 67u, depth + 1u); else { c.pc = 0x00162250u; return; } if (c.pc != 0x0032D6B8u) [[unlikely]] return; }
L_0032D6B8:
    st32((c.r[16].w[0] + 88u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 88u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 84u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 80u)));
    set32(c.r[3], c.r[3].w[0] + 5u);
    set32(c.r[4], c.r[5].w[0] - c.r[4].w[0]);
    c.r[1].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_0032D6FC; } }
    st8((c.r[16].w[0] + 92u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[16].w[0] + 88u)));
    set32(c.r[3], c.r[3].w[0] + 20u);
    st32((c.r[16].w[0] + 88u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 88u)));
    set32(c.r[3], c.r[3].w[0] - 20u);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_0032D704; } }
L_0032D6FC:
    st8((c.r[16].w[0] + 92u), static_cast<std::uint8_t>(0u));
    st32((c.r[16].w[0] + 76u), 0u);
    c.budget -= 2;
L_0032D704:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0032D720:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 96u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0032DA90; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 48u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0032DA90; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 92u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_0032D77C; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[16].w[0] + 76u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 88u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 76u)));
    c.r[1].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0032D778; } }
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    st32((c.r[16].w[0] + 76u), c.r[2].w[0]);
    c.budget -= 2;
L_0032D778:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0032D77C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032D784u);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x0032D784u) [[unlikely]] return; }
L_0032D784:
    set32(c.r[4], ld32((c.r[16].w[0] + 96u)));
    set32(c.r[3], ld32((c.r[2].w[0])));
    st32((c.r[4].w[0] + 48u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    st32((c.r[4].w[0] + 52u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032D7A4u); st32((c.r[4].w[0] + 56u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0022(c, 132u, depth + 1u); else { c.pc = 0x00188B30u; return; } if (c.pc != 0x0032D7A4u) [[unlikely]] return; }
L_0032D7A4:
    set32(c.r[3], ld32((c.r[16].w[0] + 96u)));
    set32(c.r[5], c.r[29].w[0] + 32u);
    st32((c.r[3].w[0] + 60u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 96u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 48u)));
    st32((c.r[3].w[0] + 352u), c.r[2].w[0]);
    st32((c.r[3].w[0] + 356u), 0u);
    ld128((c.r[16].w[0] + 32u) & ~15u, c.r[3]);
    set32(c.r[2], ld32((c.r[16].w[0] + 96u)));
    st128((c.r[2].w[0] + 16u) & ~15u, c.r[3]);
    ld128((c.r[16].w[0] + 16u) & ~15u, c.r[2]);
    st128((c.r[5].w[0]) & ~15u, c.r[2]);
    c.f[1] = ld32((c.r[16].w[0] + 76u));
    c.f[0] = ld32((c.r[29].w[0] + 32u));
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    st32((c.r[29].w[0] + 32u), c.f[0]);
    c.r[2].d[0] = ld8((c.r[16].w[0]));
    c.budget -= 20;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0032D810; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 96u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0032D808u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0032D808u) [[unlikely]] return; }
L_0032D808:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = ld8((c.r[16].w[0] + 92u));  if (t) { goto L_0032D828; } }
L_0032D810:
    set32(c.r[4], ld32((c.r[16].w[0] + 96u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0032D824u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0032D824u) [[unlikely]] return; }
L_0032D824:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 92u));
    c.budget -= 1;
L_0032D828:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);  if (t) { goto L_0032DA7C; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 84u)));
    set32(c.r[10], ld32((c.r[1].w[0] + 20144u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 80u)));
    c.r[2].d[0] = c.r[2].d[0] << 16;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[4].d[0] = c.r[3].d[0] | c.r[2].d[0];
    set32(c.r[1], c.r[10].w[0] + c.r[1].w[0]);
    set32(c.r[3], ld32((c.r[1].w[0] + 1424u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[3], c.r[3].w[0] - 1u);
    set32(c.r[1], c.r[10].w[0] + c.r[1].w[0]);
    c.r[3].d[0] = c.r[3].d[0] << 32;
    set32(c.r[2], ld32((c.r[1].w[0] + 1364u)));
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[1].d[0] = c.r[2].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 18;
    { const bool t = c.r[1].d[0] != 0ull; c.r[11].d[0] = c.r[4].d[0] | c.r[3].d[0];  if (t) { goto L_0032D910; } }
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
L_0032D910:
    set32(c.r[4], ld32((c.r[16].w[0] + 96u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0032D924u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0032D924u) [[unlikely]] return; }
L_0032D924:
    c.f[1] = ld32((c.r[16].w[0] + 88u));
    c.f[0] = ld32((c.r[29].w[0] + 32u));
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[29].w[0] + 32u), c.f[0]);
    c.r[2].d[0] = ld8((c.r[16].w[0]));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0032D960; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 96u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0032D958u); set32(c.r[5], c.r[29].w[0] + 32u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0032D958u) [[unlikely]] return; }
L_0032D958:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[16].w[0] + 96u)));  if (t) { goto L_0032D978; } }
L_0032D960:
    set32(c.r[4], ld32((c.r[16].w[0] + 96u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0032D974u); set32(c.r[5], c.r[29].w[0] + 32u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0032D974u) [[unlikely]] return; }
L_0032D974:
    set32(c.r[4], ld32((c.r[16].w[0] + 96u)));
    c.budget -= 1;
L_0032D978:
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0032D988u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0032D988u) [[unlikely]] return; }
L_0032D988:
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
    { const bool t = c.r[1].d[0] != 0ull; c.r[12].d[0] = c.r[6].d[0] | c.r[5].d[0];  if (t) { goto L_0032DA90; } }
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
    c.budget -= 39;
    { const bool t = 0ull == 0ull; st32((c.r[1].w[0] + 1364u), c.r[4].w[0]);  if (t) { goto L_0032DA90; } }
L_0032DA7C:
    set32(c.r[4], ld32((c.r[16].w[0] + 96u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0032DA90u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0032DA90u) [[unlikely]] return; }
L_0032DA90:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0032DAA0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[8], ld32((c.r[4].w[0] + 432u)));
    c.budget -= 5;
    { const bool t = c.r[8].d[0] == 0ull;  if (t) { goto L_0032DB30; } }
    set32(c.r[7], ld32((c.r[8].w[0] + 164u)));
    c.r[3].d[0] = c.r[7].sd[0] < 7000ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0032DB30; } }
    c.r[1].d[0] = c.r[7].sd[0] < 7010ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[9], c.r[8].w[0] + 396u);  if (t) { goto L_0032DADC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_0032DB34; } }
    set32(c.r[9], c.r[8].w[0] + 396u);
    c.budget -= 1;
L_0032DADC:
    c.r[8].d[0] = ld8((c.r[8].w[0] + 396u));
    c.r[7].d[0] = c.r[8].d[0] & 63ull;
    c.budget -= 4;
    { const bool t = c.r[7].d[0] == 0ull;  if (t) { goto L_0032DB30; } }
    c.r[5].d[0] = ld8((c.r[5].w[0] + 1u));
    c.r[3].d[0] = c.r[7].d[0] & 255ull;
    set32(c.r[5], c.r[6].w[0] + c.r[5].w[0]);
    c.r[5].d[0] = ld8((c.r[5].w[0]));
    c.r[3].d[0] = c.r[3].d[0] & c.r[5].d[0];
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0032DB30; } }
    c.r[3].d[0] = c.r[7].d[0] ^ c.r[5].d[0];
    set32(c.r[2], 0u - 64u);
    c.r[2].d[0] = c.r[8].d[0] & c.r[2].d[0];
    c.r[3].d[0] = c.r[3].d[0] & 63ull;
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    set32(c.r[4], c.r[4].w[0] + 368u);
    st8((c.r[9].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032DB30u); set32(c.r[6], 0u + 60u);  if (depth < kMaxDepth) unit_0009(c, 49u, depth + 1u); else { c.pc = 0x00124ED8u; return; } if (c.pc != 0x0032DB30u) [[unlikely]] return; }
L_0032DB30:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_0032DB34:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0032DB40:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00540000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[1].w[0] - 1640u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[4], 0u + 80u);  if (t) { goto L_0032DB80; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032DB60u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0032DB60u) [[unlikely]] return; }
L_0032DB60:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0032DB78; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032DB74u);  if (depth < kMaxDepth) unit_008B(c, 176u, depth + 1u); else { c.pc = 0x0032DBE0u; return; } if (c.pc != 0x0032DB74u) [[unlikely]] return; }
L_0032DB74:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0032DB78:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00540000u);
    st32((c.r[1].w[0] - 1640u), c.r[4].w[0]);
    c.budget -= 2;
L_0032DB80:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0032DB90:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00540000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[1].w[0] - 1640u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0032DBC0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0032DBC0; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0032DBC0u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0032DBC0u) [[unlikely]] return; }
L_0032DBC0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00540000u);
    st32((c.r[1].w[0] - 1640u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0032DBE0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[5], 0u + 8u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032DBF8u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 264u, depth + 1u); else { c.pc = 0x0013E560u; return; } if (c.pc != 0x0032DBF8u) [[unlikely]] return; }
L_0032DBF8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[16].w[0] + 16u);
    set32(c.r[2], c.r[2].w[0] + 21200u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    st128((c.r[3].w[0]) & ~15u, c.vu0.vf[0]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0032DC20:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0032DC68; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 21200u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032DC50u); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000F(c, 266u, depth + 1u); else { c.pc = 0x0013E5B0u; return; } if (c.pc != 0x0032DC50u) [[unlikely]] return; }
L_0032DC50:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0032DC6C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032DC68u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x0032DC68u) [[unlikely]] return; }
L_0032DC68:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0032DC6C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0032DC80:
    set32(c.r[29], c.r[29].w[0] - 368u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[1].w[0] + 28324u)));
    c.budget -= 10;
    { const bool t = c.r[16].d[0] == 0ull; c.r[19].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0032E1A8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[2], c.r[2].w[0] - 4480u);
    set32(c.r[7], c.r[29].w[0] + 352u);
    c.r[6].d[0] = ld64((c.r[2].w[0]));
    set32(c.r[5], c.r[5].w[0] - 4464u);
    set32(c.r[4], c.r[29].w[0] + 288u);
    set32(c.r[3], 0u + 4u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 8u)));
    st64((c.r[7].w[0]), c.r[6].d[0]);
    st16((c.r[7].w[0] + 8u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 11;
L_0032DCD4:
    ld128((c.r[5].w[0]) & ~15u, c.r[2]);
    set32(c.r[3], c.r[3].w[0] - 1u);
    st128((c.r[4].w[0]) & ~15u, c.r[2]);
    set32(c.r[5], c.r[5].w[0] + 16u);
    set32(c.r[4], c.r[4].w[0] + 16u);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0032DCD4u | kUnwind; return; } goto L_0032DCD4; } }
    set32(c.r[2], c.r[29].w[0] + 272u);
    st128((c.r[2].w[0]) & ~15u, c.vu0.vf[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 52u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 152u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0032DD0Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0032DD0Cu) [[unlikely]] return; }
L_0032DD0C:
    set32(c.r[4], ld32((c.r[16].w[0] + 52u)));
    set32(c.r[5], c.r[29].w[0] + 208u);
    set32(c.r[25], ld32((c.r[4].w[0] + 152u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0032DD24u); set32(c.r[6], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0032DD24u) [[unlikely]] return; }
L_0032DD24:
    set32(c.r[3], c.r[29].w[0] + 256u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x42480000u);
    ld128((c.r[3].w[0]) & ~15u, c.r[7]);
    set32(c.r[8], c.r[29].w[0] + 192u);
    c.f[4] = c.r[4].w[0];
    set32(c.r[6], c.r[29].w[0] + 192u);
    c.f[2] = 0u;
    set32(c.r[5], c.r[29].w[0] + 176u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x41200000u);
    set32(c.r[9], c.r[29].w[0] + 272u);
    c.f[3] = c.r[4].w[0];
    st128((c.r[8].w[0]) & ~15u, c.r[7]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42480000u);
    st32((c.r[29].w[0] + 196u), c.f[2]);
    set32(c.r[7], c.r[29].w[0] + 176u);
    c.f[5] = ld32((c.r[29].w[0] + 272u));
    c.f[2] = ld32((c.r[29].w[0] + 280u));
    c.f[0] = c.r[3].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.f[1] = c.r[3].w[0];
    c.f[4] = fp::sub(c.f[5], c.f[4]);
    c.f[0] = fp::sub(c.f[2], c.f[0]);
    st32((c.r[29].w[0] + 272u), c.f[4]);
    st32((c.r[29].w[0] + 280u), c.f[0]);
    ld128((c.r[6].w[0]) & ~15u, c.r[3]);
    st128((c.r[5].w[0]) & ~15u, c.r[3]);
    c.f[2] = ld32((c.r[29].w[0] + 176u));
    c.f[0] = ld32((c.r[29].w[0] + 184u));
    fpu_div(c, 2u, c.f[2], c.f[3]);
    fpu_div(c, 0u, c.f[0], c.f[1]);
    c.f[1] = fp::cvt_w_s(c.f[2]);
    set32(c.r[4], c.f[1]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 1);
    c.f[1] = c.r[3].w[0];
    set32(c.r[4], c.f[0]);
    c.f[0] = fp::cvt_s_w(c.f[1]);
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 1);
    st32((c.r[29].w[0] + 176u), c.f[0]);
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[29].w[0] + 184u), c.f[0]);
    ld128((c.r[9].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[7].w[0]) & ~15u, c.vu0.vf[5]);
    vu::add(c.vu0, 14u, 4u, 4u, 5u);
    st128((c.r[9].w[0]) & ~15u, c.vu0.vf[4]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[12], ld32((c.r[1].w[0] + 20144u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[12].w[0] + c.r[1].w[0]);
    set32(c.r[3], ld32((c.r[1].w[0] + 1364u)));
    c.r[1].d[0] = c.r[3].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 60;
    { const bool t = c.r[1].d[0] != 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_0032DEB4; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    set32(c.r[1], c.r[12].w[0] + c.r[1].w[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x50000000u);
    set32(c.r[11], ld32((c.r[1].w[0] + 1380u)));
    c.r[10].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[7].d[0] = c.r[5].d[0] | 2ull;
    c.r[9].d[0] = c.r[3].d[0] | 3ull;
    c.r[4].d[0] = c.r[3].d[0] << 32;
    c.r[8].sd[0] = static_cast<std::int32_t>(0x11000000u);
    c.r[3].d[0] = 0ull | 32769ull;
    set32(c.r[5], 0u + 14u);
    c.r[6].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00050000u);
    c.r[10].d[0] = c.r[11].d[0] | c.r[10].d[0];
    c.r[4].d[0] = c.r[3].d[0] | 12801ull;
    st64((c.r[10].w[0]), c.r[9].d[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    st64((c.r[10].w[0] + 8u), 0ull);
    set32(c.r[3], 0u + 71u);
    st64((c.r[10].w[0] + 16u), 0ull);
    set32(c.r[1], c.r[12].w[0] + c.r[1].w[0]);
    st32((c.r[10].w[0] + 24u), c.r[8].w[0]);
    st32((c.r[10].w[0] + 28u), c.r[7].w[0]);
    st64((c.r[10].w[0] + 32u), c.r[6].d[0]);
    st64((c.r[10].w[0] + 40u), c.r[5].d[0]);
    st64((c.r[10].w[0] + 48u), c.r[4].d[0]);
    st64((c.r[10].w[0] + 56u), c.r[3].d[0]);
    set32(c.r[3], ld32((c.r[1].w[0] + 1380u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[3], c.r[3].w[0] + 64u);
    set32(c.r[1], c.r[12].w[0] + c.r[1].w[0]);
    st32((c.r[1].w[0] + 1380u), c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[12].w[0] + c.r[1].w[0]);
    set32(c.r[3], ld32((c.r[1].w[0] + 1364u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[3], c.r[3].w[0] - 4u);
    set32(c.r[1], c.r[12].w[0] + c.r[1].w[0]);
    st32((c.r[1].w[0] + 1364u), c.r[3].w[0]);
    c.budget -= 40;
L_0032DEB4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[18].sd[0] < 10ll ? 1ull : 0ull;  if (t) { goto L_0032E020; } }
L_0032DEBC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_0032DFE4; } }
L_0032DEC4:
    set32(c.r[5], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[29].w[0] + 96u);  if (t) { goto L_0032DF10; } }
L_0032DED0:
    ld128((c.r[29].w[0] + 272u) & ~15u, c.r[3]);
    set32(c.r[2], c.r[6].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[2], c.r[2].w[0] + 288u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[3]);
    ld128((c.r[5].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[2].w[0]) & ~15u, c.vu0.vf[5]);
    vu::add(c.vu0, 14u, 4u, 4u, 5u);
    st128((c.r[5].w[0]) & ~15u, c.vu0.vf[4]);
    set32(c.r[2], c.r[6].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[6], c.r[6].w[0] + 1u);
    ld128((c.r[5].w[0]) & ~15u, c.r[3]);
    st128((c.r[4].w[0]) & ~15u, c.r[3]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[3]);
    st128((c.r[2].w[0] + 112u) & ~15u, c.r[3]);
    c.budget -= 16;
L_0032DF10:
    c.r[2].d[0] = c.r[6].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], c.r[18].w[0] + c.r[29].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0032DED0u | kUnwind; return; } goto L_0032DED0; } }
    set32(c.r[2], c.r[17].w[0] + c.r[29].w[0]);
    c.r[4].d[0] = ld8((c.r[3].w[0] + 352u));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 352u));
    mmi::mult(c, 0, c.r[4].w[0], c.r[4].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[3], 0u + 255u);
    mmi::mult(c, 1, c.r[2].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[1];
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[4].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[4], c.r[3].w[0] - c.r[2].w[0]);
    c.budget -= 13;
    { const bool t = c.r[4].sd[0] >= 0; c.r[1].d[0] = c.r[4].sd[0] < 256ll ? 1ull : 0ull;  if (t) { goto L_0032DF58; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0032DF64; } }
L_0032DF58:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] & 255ull;  if (t) { goto L_0032DF64; } }
    c.r[16].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 1;
L_0032DF64:
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[6]);
    c.r[2].d[0] = c.r[16].d[0] & 255ull;
    set32(c.r[3], c.r[2].w[0] << 24);
    set32(c.r[4], c.r[19].w[0] + 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00400000u);
    c.r[2].d[0] = c.r[2].d[0] | 8200ull;
    c.r[5].d[0] = c.r[3].d[0] | c.r[2].d[0];
    st128((c.r[19].w[0] + 32u) & ~15u, c.r[6]);
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[2]);
    st128((c.r[19].w[0] + 48u) & ~15u, c.r[2]);
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[2]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032DF98u); st128((c.r[19].w[0] + 64u) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_0049(c, 6u, depth + 1u); else { c.pc = 0x00224130u; return; } if (c.pc != 0x0032DF98u) [[unlikely]] return; }
L_0032DF98:
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[6]);
    c.r[2].d[0] = c.r[16].d[0] & 255ull;
    set32(c.r[3], c.r[2].w[0] << 24);
    set32(c.r[4], c.r[19].w[0] + 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00200000u);
    c.r[2].d[0] = c.r[2].d[0] | 4100ull;
    c.r[5].d[0] = c.r[3].d[0] | c.r[2].d[0];
    st128((c.r[19].w[0] + 32u) & ~15u, c.r[6]);
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[2]);
    st128((c.r[19].w[0] + 48u) & ~15u, c.r[2]);
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[2]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032DFCCu); st128((c.r[19].w[0] + 64u) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_0049(c, 6u, depth + 1u); else { c.pc = 0x00224130u; return; } if (c.pc != 0x0032DFCCu) [[unlikely]] return; }
L_0032DFCC:
    c.f[1] = ld32((c.r[29].w[0] + 272u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.f[0] = c.r[3].w[0];
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 272u), c.f[0]);
    c.budget -= 6;
L_0032DFE4:
    c.r[3].d[0] = c.r[17].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0032DEC4u | kUnwind; return; } goto L_0032DEC4; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.f[2] = c.r[3].w[0];
    c.f[3] = ld32((c.r[29].w[0] + 272u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.f[1] = ld32((c.r[29].w[0] + 280u));
    c.f[0] = c.r[3].w[0];
    c.f[2] = fp::sub(c.f[3], c.f[2]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 272u), c.f[2]);
    st32((c.r[29].w[0] + 280u), c.f[0]);
    c.r[3].d[0] = c.r[18].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 12;
L_0032E020:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0032DEBCu | kUnwind; return; } goto L_0032DEBC; } }
    set32(c.r[12], ld32((c.r[1].w[0] + 20144u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[12].w[0] + c.r[1].w[0]);
    set32(c.r[3], ld32((c.r[1].w[0] + 1364u)));
    c.r[1].d[0] = c.r[3].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0032E0E4; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    set32(c.r[1], c.r[12].w[0] + c.r[1].w[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x50000000u);
    set32(c.r[11], ld32((c.r[1].w[0] + 1380u)));
    c.r[10].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[7].d[0] = c.r[5].d[0] | 2ull;
    c.r[9].d[0] = c.r[3].d[0] | 3ull;
    c.r[4].d[0] = c.r[3].d[0] << 32;
    c.r[8].sd[0] = static_cast<std::int32_t>(0x11000000u);
    c.r[3].d[0] = 0ull | 32769ull;
    set32(c.r[5], 0u + 14u);
    c.r[6].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00050000u);
    c.r[10].d[0] = c.r[11].d[0] | c.r[10].d[0];
    c.r[4].d[0] = c.r[3].d[0] | 12813ull;
    st64((c.r[10].w[0]), c.r[9].d[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    st64((c.r[10].w[0] + 8u), 0ull);
    set32(c.r[3], 0u + 71u);
    st64((c.r[10].w[0] + 16u), 0ull);
    set32(c.r[1], c.r[12].w[0] + c.r[1].w[0]);
    st32((c.r[10].w[0] + 24u), c.r[8].w[0]);
    st32((c.r[10].w[0] + 28u), c.r[7].w[0]);
    st64((c.r[10].w[0] + 32u), c.r[6].d[0]);
    st64((c.r[10].w[0] + 40u), c.r[5].d[0]);
    st64((c.r[10].w[0] + 48u), c.r[4].d[0]);
    st64((c.r[10].w[0] + 56u), c.r[3].d[0]);
    set32(c.r[3], ld32((c.r[1].w[0] + 1380u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[3], c.r[3].w[0] + 64u);
    set32(c.r[1], c.r[12].w[0] + c.r[1].w[0]);
    st32((c.r[1].w[0] + 1380u), c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[12].w[0] + c.r[1].w[0]);
    set32(c.r[3], ld32((c.r[1].w[0] + 1364u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[3], c.r[3].w[0] - 4u);
    set32(c.r[1], c.r[12].w[0] + c.r[1].w[0]);
    st32((c.r[1].w[0] + 1364u), c.r[3].w[0]);
    c.budget -= 40;
L_0032E0E4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[12], ld32((c.r[1].w[0] + 20144u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[12].w[0] + c.r[1].w[0]);
    set32(c.r[3], ld32((c.r[1].w[0] + 1364u)));
    c.r[1].d[0] = c.r[3].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);  if (t) { goto L_0032E1A8; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    set32(c.r[1], c.r[12].w[0] + c.r[1].w[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x50000000u);
    set32(c.r[11], ld32((c.r[1].w[0] + 1380u)));
    c.r[10].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[7].d[0] = c.r[5].d[0] | 2ull;
    c.r[9].d[0] = c.r[3].d[0] | 3ull;
    c.r[4].d[0] = c.r[3].d[0] << 32;
    c.r[8].sd[0] = static_cast<std::int32_t>(0x11000000u);
    c.r[3].d[0] = 0ull | 32769ull;
    set32(c.r[5], 0u + 14u);
    c.r[6].d[0] = c.r[3].d[0] | c.r[4].d[0];
    set32(c.r[3], 0u + 128u);
    c.r[10].d[0] = c.r[11].d[0] | c.r[10].d[0];
    c.r[4].d[0] = c.r[3].d[0] << 32;
    st64((c.r[10].w[0]), c.r[9].d[0]);
    set32(c.r[3], 0u + 104u);
    st64((c.r[10].w[0] + 8u), 0ull);
    c.r[4].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st64((c.r[10].w[0] + 16u), 0ull);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    st32((c.r[10].w[0] + 24u), c.r[8].w[0]);
    set32(c.r[3], 0u + 66u);
    st32((c.r[10].w[0] + 28u), c.r[7].w[0]);
    set32(c.r[1], c.r[12].w[0] + c.r[1].w[0]);
    st64((c.r[10].w[0] + 32u), c.r[6].d[0]);
    st64((c.r[10].w[0] + 40u), c.r[5].d[0]);
    st64((c.r[10].w[0] + 48u), c.r[4].d[0]);
    st64((c.r[10].w[0] + 56u), c.r[3].d[0]);
    set32(c.r[3], ld32((c.r[1].w[0] + 1380u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[3], c.r[3].w[0] + 64u);
    set32(c.r[1], c.r[12].w[0] + c.r[1].w[0]);
    st32((c.r[1].w[0] + 1380u), c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[12].w[0] + c.r[1].w[0]);
    set32(c.r[3], ld32((c.r[1].w[0] + 1364u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[3], c.r[3].w[0] - 4u);
    set32(c.r[1], c.r[12].w[0] + c.r[1].w[0]);
    st32((c.r[1].w[0] + 1364u), c.r[3].w[0]);
    c.budget -= 41;
L_0032E1A8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 368u);  c.pc = t; return; }
L_0032E1D0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00540000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[1].w[0] - 1632u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0032E214; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00060000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032E1F4u); c.r[4].d[0] = c.r[2].d[0] | 4128ull;  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0032E1F4u) [[unlikely]] return; }
L_0032E1F4:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0032E20C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032E208u);  if (depth < kMaxDepth) unit_008B(c, 195u, depth + 1u); else { c.pc = 0x0032E270u; return; } if (c.pc != 0x0032E208u) [[unlikely]] return; }
L_0032E208:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0032E20C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00540000u);
    st32((c.r[1].w[0] - 1632u), c.r[4].w[0]);
    c.budget -= 2;
L_0032E214:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0032E220:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00540000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[1].w[0] - 1632u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0032E250; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0032E250; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0032E250u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0032E250u) [[unlikely]] return; }
L_0032E250:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00540000u);
    st32((c.r[1].w[0] - 1632u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0032E270:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[5].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032E288u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 256u, depth + 1u); else { c.pc = 0x0013E440u; return; } if (c.pc != 0x0032E288u) [[unlikely]] return; }
L_0032E288:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], c.r[2].w[0] + 21184u);
    set32(c.r[4], 0u + 2u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[1].w[0] + 28324u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032E2A8u); st32((c.r[16].w[0] + 8u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0087(c, 336u, depth + 1u); else { c.pc = 0x0031F190u; return; } if (c.pc != 0x0032E2A8u) [[unlikely]] return; }
L_0032E2A8:
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[25], ld32((c.r[2].w[0] + 460u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0032E2BCu); set32(c.r[4], c.r[2].w[0] + 436u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0032E2BCu) [[unlikely]] return; }
L_0032E2BC:
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[25], ld32((c.r[2].w[0] + 460u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0032E2D0u); set32(c.r[4], c.r[2].w[0] + 436u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0032E2D0u) [[unlikely]] return; }
L_0032E2D0:
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[25], ld32((c.r[2].w[0] + 460u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0032E2E4u); set32(c.r[4], c.r[2].w[0] + 436u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0032E2E4u) [[unlikely]] return; }
L_0032E2E4:
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[25], ld32((c.r[2].w[0] + 460u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0032E2F8u); set32(c.r[4], c.r[2].w[0] + 436u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0032E2F8u) [[unlikely]] return; }
L_0032E2F8:
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032E304u); set32(c.r[5], 0u + 7000u);  if (depth < kMaxDepth) unit_0030(c, 17u, depth + 1u); else { c.pc = 0x001C02A0u; return; } if (c.pc != 0x0032E304u) [[unlikely]] return; }
L_0032E304:
    set32(c.r[6], ld32((c.r[16].w[0] + 8u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4D6F0000u);
    c.r[5].d[0] = c.r[2].d[0] | 18543ull;
    set32(c.r[3], 0u - 2u);
    c.r[4].d[0] = 0ull & 1ull;
    c.r[2].d[0] = ld8((c.r[6].w[0] + 392u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[4].d[0];
    st8((c.r[6].w[0] + 392u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032E334u); set32(c.r[4], c.r[2].w[0] + 436u);  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x0032E334u) [[unlikely]] return; }
L_0032E334:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0032E344; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 16u)));  if (t) { goto L_0032E348; } }
L_0032E344:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0032E348:
    st32((c.r[16].w[0] + 12u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4D6F0000u);
    c.r[5].d[0] = c.r[2].d[0] | 17524ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032E360u); set32(c.r[4], c.r[2].w[0] + 436u);  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x0032E360u) [[unlikely]] return; }
L_0032E360:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0032E370; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 16u)));  if (t) { goto L_0032E374; } }
L_0032E370:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0032E374:
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0032E388; } }
    st8((c.r[2].w[0] + 4u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_0032E388:
    set32(c.r[2], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_0032E398; } }
    st8((c.r[2].w[0] + 4u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_0032E398:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[3].sd[0] < 96ll ? 1ull : 0ull;  if (t) { goto L_0032E3CC; } }
L_0032E3A0:
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] + 4128u);
    st128((c.r[2].w[0] + 48u) & ~15u, c.vu0.vf[0]);
    vu::mr32(c.vu0, 15u, 1u, 0u);
    st128((c.r[2].w[0] + 32u) & ~15u, c.vu0.vf[1]);
    vu::mr32(c.vu0, 15u, 2u, 1u);
    st128((c.r[2].w[0] + 16u) & ~15u, c.vu0.vf[2]);
    vu::mr32(c.vu0, 15u, 3u, 2u);
    st128((c.r[2].w[0]) & ~15u, c.vu0.vf[3]);
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[2].d[0] = c.r[3].sd[0] < 96ll ? 1ull : 0ull;
    c.budget -= 11;
L_0032E3CC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[3].w[0] << 6);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0032E3A0u | kUnwind; return; } goto L_0032E3A0; } }
    st32((c.r[16].w[0] + 20u), 0u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0032E3F0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0032E45C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] + 21184u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0032E428; } }
    st8((c.r[3].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 1;
L_0032E428:
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0032E43C; } }
    set32(c.r[2], 0u + 1u);
    st8((c.r[3].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_0032E43C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032E444u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E490u; return; } if (c.pc != 0x0032E444u) [[unlikely]] return; }
L_0032E444:
    c.r[2].d[0] = c.r[17].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0032E460; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032E45Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x0032E45Cu) [[unlikely]] return; }
L_0032E45C:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0032E460:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0032E480:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032E4A0u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0022(c, 124u, depth + 1u); else { c.pc = 0x00188A50u; return; } if (c.pc != 0x0032E4A0u) [[unlikely]] return; }
L_0032E4A0:
    set32(c.r[3], ld32((c.r[19].w[0] + 20u)));
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.r[1].d[0] = c.r[3].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_0032E5E0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[17].sd[0] < 244ll ? 1ull : 0ull;  if (t) { goto L_0032E5D8; } }
L_0032E4BC:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_0032E4E0; } }
    set32(c.r[4], ld32((c.r[19].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0032E4D8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0032E4D8u) [[unlikely]] return; }
L_0032E4D8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[19].w[0] + 12u)));  if (t) { goto L_0032E4F4; } }
L_0032E4E0:
    set32(c.r[3], ld32((c.r[19].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 176u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[3].w[0] + 176u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[19].w[0] + 12u)));
    c.budget -= 5;
L_0032E4F4:
    set32(c.r[25], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0032E504u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0032E504u) [[unlikely]] return; }
L_0032E504:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_0032E5D0; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 8u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 52u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 152u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0032E524u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0032E524u) [[unlikely]] return; }
L_0032E524:
    set32(c.r[3], ld32((c.r[19].w[0] + 8u)));
    set32(c.r[6], 0u - 1u);
    set32(c.r[2], ld32((c.r[19].w[0] + 20u)));
    set32(c.r[4], ld32((c.r[3].w[0] + 52u)));
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[19].w[0] + c.r[2].w[0]);
    set32(c.r[25], ld32((c.r[4].w[0] + 152u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 10;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0032E54Cu); set32(c.r[5], c.r[2].w[0] + 32u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0032E54Cu) [[unlikely]] return; }
L_0032E54C:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0032E550:
    set32(c.r[3], ld32((c.r[19].w[0] + 8u)));
    set32(c.r[2], c.r[16].w[0] << 6);
    set32(c.r[5], ld32((c.r[19].w[0] + 20u)));
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[3].w[0] + 52u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 152u)));
    set32(c.r[3], c.r[5].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 11);
    set32(c.r[3], c.r[19].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 14;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0032E588u); set32(c.r[5], c.r[2].w[0] + 4128u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0032E588u) [[unlikely]] return; }
L_0032E588:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[3].d[0] = c.r[16].sd[0] < 96ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0032E550u | kUnwind; return; } goto L_0032E550; } }
    set32(c.r[3], ld32((c.r[19].w[0] + 20u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[19].w[0] + 20u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[19].w[0] + 20u)));
    c.r[3].d[0] = c.r[3].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull; c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_0032E5D0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032E5BCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_008B(c, 220u, depth + 1u); else { c.pc = 0x0032E600u; return; } if (c.pc != 0x0032E5BCu) [[unlikely]] return; }
L_0032E5BC:
    set32(c.r[4], ld32((c.r[19].w[0] + 8u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032E5C8u); set32(c.r[5], 0u + 7000u);  if (depth < kMaxDepth) unit_0030(c, 17u, depth + 1u); else { c.pc = 0x001C02A0u; return; } if (c.pc != 0x0032E5C8u) [[unlikely]] return; }
L_0032E5C8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  if (t) { goto L_0032E5E4; } }
L_0032E5D0:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[3].d[0] = c.r[17].sd[0] < 244ll ? 1ull : 0ull;
    c.budget -= 2;
L_0032E5D8:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[17].d[0] & 3ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0032E4BCu | kUnwind; return; } goto L_0032E4BC; } }
L_0032E5E0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_0032E5E4:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0032E600:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[1].d[0] = c.r[17].sd[0] < 64ll ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[1].d[0] == 0ull; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_0032E6D0; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 20u)));
    c.r[1].d[0] = c.r[17].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0032E6D0; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 8u)));
    set32(c.r[2], c.r[17].w[0] << 6);
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    set32(c.r[6], 0u - 1u);
    set32(c.r[4], ld32((c.r[3].w[0] + 52u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 152u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 9;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0032E65Cu); set32(c.r[5], c.r[2].w[0] + 32u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0032E65Cu) [[unlikely]] return; }
L_0032E65C:
    set32(c.r[2], c.r[17].w[0] << 1);
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[2], c.r[2].w[0] << 11);
    set32(c.r[19], c.r[18].w[0] + c.r[2].w[0]);
    c.budget -= 5;
L_0032E670:
    set32(c.r[3], ld32((c.r[18].w[0] + 8u)));
    set32(c.r[2], c.r[16].w[0] << 6);
    set32(c.r[2], c.r[19].w[0] + c.r[2].w[0]);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[3].w[0] + 52u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 152u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 9;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0032E694u); set32(c.r[5], c.r[2].w[0] + 4128u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0032E694u) [[unlikely]] return; }
L_0032E694:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < 96ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0032E670u | kUnwind; return; } goto L_0032E670; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 8u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 52u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 152u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0032E6BCu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0032E6BCu) [[unlikely]] return; }
L_0032E6BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032E6C4u);  if (depth < kMaxDepth) unit_0023(c, 256u, depth + 1u); else { c.pc = 0x0018E780u; return; } if (c.pc != 0x0032E6C4u) [[unlikely]] return; }
L_0032E6C4:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032E6D0u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0024(c, 9u, depth + 1u); else { c.pc = 0x00190140u; return; } if (c.pc != 0x0032E6D0u) [[unlikely]] return; }
L_0032E6D0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0032E6F0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[4], ld32((c.r[1].w[0] - 1632u)));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0032E714; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032E714u);  if (depth < kMaxDepth) unit_008B(c, 220u, depth + 1u); else { c.pc = 0x0032E600u; return; } if (c.pc != 0x0032E714u) [[unlikely]] return; }
L_0032E714:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0032E720:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032E738u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_000F(c, 264u, depth + 1u); else { c.pc = 0x0013E560u; return; } if (c.pc != 0x0032E738u) [[unlikely]] return; }
L_0032E738:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], c.r[2].w[0] + 21168u);
    set32(c.r[4], 0u + 272u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[1].w[0] + 26392u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 332u)));
    st32((c.r[17].w[0] + 12u), c.r[2].w[0]);
    st8((c.r[17].w[0] + 16u), static_cast<std::uint8_t>(0u));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032E764u); st32((c.r[17].w[0] + 20u), 0u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0032E764u) [[unlikely]] return; }
L_0032E764:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull; set32(c.r[4], 0u + 40u);  if (t) { goto L_0032E788; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032E778u);  if (depth < kMaxDepth) unit_0022(c, 105u, depth + 1u); else { c.pc = 0x00188790u; return; } if (c.pc != 0x0032E778u) [[unlikely]] return; }
L_0032E778:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032E784u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 188u, depth + 1u); else { c.pc = 0x0015ED60u; return; } if (c.pc != 0x0032E784u) [[unlikely]] return; }
L_0032E784:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0032E788:
    st32((c.r[17].w[0] + 24u), c.r[16].w[0]);
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0032E7B0:
    set32(c.r[3], 0u + 1u);
    st32((c.r[4].w[0] + 20u), c.r[3].w[0]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 16u));
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 16u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_0032E7D0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0032E844; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] + 21168u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 24u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0032E81C; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0032E81C; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0032E81Cu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0032E81Cu) [[unlikely]] return; }
L_0032E81C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032E82Cu); st32((c.r[17].w[0] + 24u), 0u);  if (depth < kMaxDepth) unit_000F(c, 266u, depth + 1u); else { c.pc = 0x0013E5B0u; return; } if (c.pc != 0x0032E82Cu) [[unlikely]] return; }
L_0032E82C:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0032E848; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032E844u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x0032E844u) [[unlikely]] return; }
L_0032E844:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0032E848:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0032E860:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 20u)));
    c.f[20] = c.r[2].w[0];
    c.budget -= 10;
    { const bool t = c.r[4].sd[0] <= 0; c.r[1].d[0] = c.r[4].sd[0] < 3ll ? 1ull : 0ull;  if (t) { goto L_0032E908; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0032E8C0; } }
    c.f[0] = c.r[4].w[0];
    set32(c.r[2], c.r[4].w[0] + 1u);
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.f[0] = c.r[2].w[0];
    fpu_div(c, 0u, c.f[1], c.f[0]);
    c.budget -= 12;
    { const bool t = 0ull == 0ull; c.f[20] = fp::add(c.f[20], c.f[0]);  if (t) { goto L_0032E908; } }
L_0032E8C0:
    c.r[1].d[0] = c.r[4].sd[0] < 9ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[3], c.r[4].w[0] - 3u);  if (t) { goto L_0032E904; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[2] = c.r[3].w[0];
    set32(c.r[2], c.r[4].w[0] + 1u);
    c.f[0] = ld32((c.r[1].w[0] - 12744u));
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    c.f[1] = c.r[3].w[0];
    fpu_div(c, 1u, c.f[2], c.f[1]);
    c.budget -= 14;
    { const bool t = 0ull == 0ull; c.f[20] = fp::sub(c.f[0], c.f[1]);  if (t) { goto L_0032E908; } }
L_0032E904:
    st32((c.r[16].w[0] + 20u), 0u);
    c.budget -= 1;
L_0032E908:
    set32(c.r[5], ld32((c.r[16].w[0] + 24u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43D30000u);
    c.f[12] = c.r[2].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43B70000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.f[0] = c.r[2].w[0];
    st32((c.r[5].w[0] + 16u), c.f[20]);
    st32((c.r[5].w[0] + 20u), c.f[20]);
    st32((c.r[5].w[0] + 24u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 24u)));
    c.f[13] = c.r[3].w[0];
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 17;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0032E94Cu); c.f[14] = fp::cvt_s_w(c.f[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0032E94Cu) [[unlikely]] return; }
L_0032E94C:
    set32(c.r[4], ld32((c.r[16].w[0] + 24u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0032E960u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0032E960u) [[unlikely]] return; }
L_0032E960:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F400000u);
    set32(c.r[4], 0u + 686u);
    c.f[0] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032E974u); c.f[20] = fp::mul(c.f[20], c.f[0]);  if (depth < kMaxDepth) unit_000B(c, 461u, depth + 1u); else { c.pc = 0x0012FD60u; return; } if (c.pc != 0x0032E974u) [[unlikely]] return; }
L_0032E974:
    set32(c.r[5], ld32((c.r[16].w[0] + 12u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[4], 0u + 18u);
    st32((c.r[5].w[0] + 352u), c.r[2].w[0]);
    st32((c.r[5].w[0] + 356u), 0u);
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    st32((c.r[2].w[0] + 16u), c.f[20]);
    st32((c.r[2].w[0] + 20u), c.f[20]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032E99Cu); st32((c.r[2].w[0] + 24u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x0032E99Cu) [[unlikely]] return; }
L_0032E99C:
    ld128((c.r[2].w[0]) & ~15u, c.r[5]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43B70000u);
    set32(c.r[4], ld32((c.r[16].w[0] + 12u)));
    c.f[13] = c.r[3].w[0];
    set32(c.r[2], 0u + 515u);
    st128((c.r[4].w[0] + 48u) & ~15u, c.r[5]);
    c.f[0] = c.r[2].w[0];
    set32(c.r[4], ld32((c.r[16].w[0] + 12u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.f[12] = fp::cvt_s_w(c.f[0]);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    c.f[0] = c.r[2].w[0];
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 16;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0032E9DCu); c.f[14] = fp::cvt_s_w(c.f[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0032E9DCu) [[unlikely]] return; }
L_0032E9DC:
    set32(c.r[4], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0032E9F0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0032E9F0u) [[unlikely]] return; }
L_0032E9F0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0032EA10:
    st128((c.r[4].w[0]) & ~15u, c.vu0.vf[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 16u), c.f[0]);  c.pc = t; return; }
L_0032EA30:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0032EA64; } }
    c.r[2].d[0] = c.r[5].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_0032EA60; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032EA60u);  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x0032EA60u) [[unlikely]] return; }
L_0032EA60:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0032EA64:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0032EA80:
    set32(c.r[29], c.r[29].w[0] - 592u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00420000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[7], c.r[7].w[0] - 4400u);
    c.f[1] = ld32((c.r[4].w[0] + 16u));
    set32(c.r[6], c.r[29].w[0] + 16u);
    set32(c.r[5], 0u + 18u);
    c.budget -= 7;
L_0032EA9C:
    ld128((c.r[7].w[0]) & ~15u, c.r[3]);
    set32(c.r[5], c.r[5].w[0] - 1u);
    ld128((c.r[7].w[0] + 16u) & ~15u, c.r[2]);
    st128((c.r[6].w[0]) & ~15u, c.r[3]);
    set32(c.r[7], c.r[7].w[0] + 32u);
    st128((c.r[6].w[0] + 16u) & ~15u, c.r[2]);
    c.budget -= 8;
    { const bool t = c.r[5].sd[0] > 0; set32(c.r[6], c.r[6].w[0] + 32u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0032EA9Cu | kUnwind; return; } goto L_0032EA9C; } }
    c.f[0] = c.f[1] ^ fp::kSign;
    c.r[3].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 36u), c.f[1]);
    st32((c.r[29].w[0] + 16u), c.f[0]);
    st32((c.r[29].w[0] + 20u), c.f[0]);
    st32((c.r[29].w[0] + 24u), c.f[0]);
    st32((c.r[29].w[0] + 32u), c.f[0]);
    st32((c.r[29].w[0] + 40u), c.f[0]);
    st32((c.r[29].w[0] + 48u), c.f[1]);
    st32((c.r[29].w[0] + 52u), c.f[0]);
    st32((c.r[29].w[0] + 56u), c.f[0]);
    st32((c.r[29].w[0] + 64u), c.f[1]);
    st32((c.r[29].w[0] + 68u), c.f[0]);
    st32((c.r[29].w[0] + 72u), c.f[0]);
    st32((c.r[29].w[0] + 80u), c.f[1]);
    st32((c.r[29].w[0] + 84u), c.f[1]);
    st32((c.r[29].w[0] + 88u), c.f[0]);
    st32((c.r[29].w[0] + 96u), c.f[0]);
    st32((c.r[29].w[0] + 100u), c.f[1]);
    st32((c.r[29].w[0] + 104u), c.f[0]);
    st32((c.r[29].w[0] + 112u), c.f[0]);
    st32((c.r[29].w[0] + 116u), c.f[0]);
    st32((c.r[29].w[0] + 120u), c.f[0]);
    st32((c.r[29].w[0] + 128u), c.f[1]);
    st32((c.r[29].w[0] + 132u), c.f[0]);
    st32((c.r[29].w[0] + 136u), c.f[0]);
    st32((c.r[29].w[0] + 144u), c.f[0]);
    st32((c.r[29].w[0] + 148u), c.f[0]);
    st32((c.r[29].w[0] + 152u), c.f[1]);
    st32((c.r[29].w[0] + 160u), c.f[1]);
    st32((c.r[29].w[0] + 164u), c.f[0]);
    st32((c.r[29].w[0] + 168u), c.f[0]);
    st32((c.r[29].w[0] + 176u), c.f[0]);
    st32((c.r[29].w[0] + 180u), c.f[0]);
    st32((c.r[29].w[0] + 184u), c.f[1]);
    st32((c.r[29].w[0] + 192u), c.f[1]);
    st32((c.r[29].w[0] + 196u), c.f[0]);
    st32((c.r[29].w[0] + 200u), c.f[1]);
    st32((c.r[29].w[0] + 208u), c.f[1]);
    st32((c.r[29].w[0] + 212u), c.f[0]);
    st32((c.r[29].w[0] + 216u), c.f[0]);
    st32((c.r[29].w[0] + 224u), c.f[1]);
    st32((c.r[29].w[0] + 228u), c.f[0]);
    st32((c.r[29].w[0] + 232u), c.f[1]);
    st32((c.r[29].w[0] + 240u), c.f[1]);
    st32((c.r[29].w[0] + 244u), c.f[1]);
    st32((c.r[29].w[0] + 248u), c.f[0]);
    st32((c.r[29].w[0] + 256u), c.f[1]);
    st32((c.r[29].w[0] + 260u), c.f[0]);
    st32((c.r[29].w[0] + 264u), c.f[1]);
    st32((c.r[29].w[0] + 272u), c.f[1]);
    st32((c.r[29].w[0] + 276u), c.f[1]);
    st32((c.r[29].w[0] + 280u), c.f[0]);
    st32((c.r[29].w[0] + 288u), c.f[1]);
    st32((c.r[29].w[0] + 292u), c.f[1]);
    st32((c.r[29].w[0] + 296u), c.f[1]);
    st32((c.r[29].w[0] + 304u), c.f[1]);
    st32((c.r[29].w[0] + 308u), c.f[1]);
    st32((c.r[29].w[0] + 312u), c.f[1]);
    st32((c.r[29].w[0] + 320u), c.f[1]);
    st32((c.r[29].w[0] + 324u), c.f[0]);
    st32((c.r[29].w[0] + 328u), c.f[1]);
    st32((c.r[29].w[0] + 336u), c.f[0]);
    st32((c.r[29].w[0] + 340u), c.f[1]);
    st32((c.r[29].w[0] + 344u), c.f[1]);
    st32((c.r[29].w[0] + 352u), c.f[0]);
    st32((c.r[29].w[0] + 356u), c.f[1]);
    st32((c.r[29].w[0] + 360u), c.f[1]);
    st32((c.r[29].w[0] + 368u), c.f[0]);
    st32((c.r[29].w[0] + 372u), c.f[0]);
    st32((c.r[29].w[0] + 376u), c.f[1]);
    st32((c.r[29].w[0] + 384u), c.f[1]);
    st32((c.r[29].w[0] + 388u), c.f[0]);
    st32((c.r[29].w[0] + 392u), c.f[1]);
    st32((c.r[29].w[0] + 400u), c.f[1]);
    st32((c.r[29].w[0] + 404u), c.f[1]);
    st32((c.r[29].w[0] + 408u), c.f[1]);
    st32((c.r[29].w[0] + 416u), c.f[0]);
    st32((c.r[29].w[0] + 420u), c.f[1]);
    st32((c.r[29].w[0] + 424u), c.f[1]);
    st32((c.r[29].w[0] + 432u), c.f[1]);
    st32((c.r[29].w[0] + 436u), c.f[1]);
    st32((c.r[29].w[0] + 440u), c.f[0]);
    st32((c.r[29].w[0] + 448u), c.f[0]);
    st32((c.r[29].w[0] + 452u), c.f[1]);
    st32((c.r[29].w[0] + 456u), c.f[1]);
    st32((c.r[29].w[0] + 464u), c.f[1]);
    st32((c.r[29].w[0] + 468u), c.f[1]);
    st32((c.r[29].w[0] + 472u), c.f[0]);
    st32((c.r[29].w[0] + 480u), c.f[0]);
    st32((c.r[29].w[0] + 484u), c.f[1]);
    st32((c.r[29].w[0] + 488u), c.f[0]);
    st32((c.r[29].w[0] + 496u), c.f[0]);
    st32((c.r[29].w[0] + 500u), c.f[1]);
    st32((c.r[29].w[0] + 504u), c.f[1]);
    st32((c.r[29].w[0] + 512u), c.f[0]);
    st32((c.r[29].w[0] + 516u), c.f[1]);
    st32((c.r[29].w[0] + 520u), c.f[0]);
    st32((c.r[29].w[0] + 528u), c.f[0]);
    st32((c.r[29].w[0] + 532u), c.f[0]);
    st32((c.r[29].w[0] + 536u), c.f[1]);
    st32((c.r[29].w[0] + 544u), c.f[0]);
    st32((c.r[29].w[0] + 548u), c.f[1]);
    st32((c.r[29].w[0] + 568u), c.f[1]);
    st32((c.r[29].w[0] + 552u), c.f[0]);
    st32((c.r[29].w[0] + 560u), c.f[0]);
    st32((c.r[29].w[0] + 564u), c.f[0]);
    st32((c.r[29].w[0] + 576u), c.f[0]);
    st32((c.r[29].w[0] + 580u), c.f[0]);
    c.budget -= 111;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 584u), c.f[0]);  if (t) { goto L_0032EC94; } }
L_0032EC78:
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[2], c.r[2].w[0] + 16u);
    ld128((c.r[2].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[4].w[0]) & ~15u, c.vu0.vf[5]);
    vu::add(c.vu0, 14u, 4u, 4u, 5u);
    st128((c.r[2].w[0]) & ~15u, c.vu0.vf[4]);
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 7;
L_0032EC94:
    c.r[2].d[0] = c.r[3].sd[0] < 36ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[3].w[0] << 4);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0032EC78u | kUnwind; return; } goto L_0032EC78; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    set32(c.r[4], c.r[29].w[0] + 16u);
    set32(c.r[5], 0u + 36u);
    set32(c.r[7], 0u + 67u);
    c.r[6].d[0] = c.r[2].d[0] | 255ull;
    set32(c.r[8], 0u + 72u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032ECC0u); c.r[9].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0048(c, 377u, depth + 1u); else { c.pc = 0x00223EB0u; return; } if (c.pc != 0x0032ECC0u) [[unlikely]] return; }
L_0032ECC0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 592u);  c.pc = t; return; }
L_0032ECD0:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032ECECu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_000F(c, 264u, depth + 1u); else { c.pc = 0x0013E560u; return; } if (c.pc != 0x0032ECECu) [[unlikely]] return; }
L_0032ECEC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00330000u);
    set32(c.r[2], c.r[2].w[0] + 21152u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00330000u);
    set32(c.r[4], c.r[17].w[0] + 32u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[5], c.r[5].w[0] - 5616u);
    set32(c.r[6], c.r[6].w[0] - 5584u);
    set32(c.r[7], 0u + 32u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032ED18u); set32(c.r[8], 0u + 15u);  if (depth < kMaxDepth) unit_0000(c, 89u, depth + 1u); else { c.pc = 0x00100790u; return; } if (c.pc != 0x0032ED18u) [[unlikely]] return; }
L_0032ED18:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[4], c.r[29].w[0] + 64u);
    set32(c.r[5], c.r[5].w[0] - 3824u);
    set32(c.r[3], 0u + 3u);
    c.budget -= 4;
L_0032ED28:
    ld128((c.r[5].w[0]) & ~15u, c.r[2]);
    set32(c.r[3], c.r[3].w[0] - 1u);
    st128((c.r[4].w[0]) & ~15u, c.r[2]);
    set32(c.r[5], c.r[5].w[0] + 16u);
    set32(c.r[4], c.r[4].w[0] + 16u);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0032ED28u | kUnwind; return; } goto L_0032ED28; } }
    c.r[2].d[0] = ld64((c.r[5].w[0]));
    c.f[0] = ld32((c.r[5].w[0] + 8u));
    c.r[16].d[0] = 0ull + 0ull;
    st64((c.r[4].w[0]), c.r[2].d[0]);
    st32((c.r[4].w[0] + 8u), c.f[0]);
    c.budget -= 5;
L_0032ED58:
    set32(c.r[18], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[18].w[0] + c.r[29].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0] + 64u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032ED6Cu); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0030(c, 33u, depth + 1u); else { c.pc = 0x001C04E0u; return; } if (c.pc != 0x0032ED6Cu) [[unlikely]] return; }
L_0032ED6C:
    set32(c.r[4], c.r[17].w[0] + c.r[18].w[0]);
    set32(c.r[3], c.r[17].w[0] + c.r[16].w[0]);
    st32((c.r[4].w[0] + 512u), c.r[2].w[0]);
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < 15ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; st8((c.r[3].w[0] + 12u), static_cast<std::uint8_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0032ED58u | kUnwind; return; } goto L_0032ED58; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3FC00000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    st32((c.r[17].w[0] + 48u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 80u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[17].w[0] + 112u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_0032EDC0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0032EE24; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00330000u);
    set32(c.r[2], c.r[2].w[0] + 21152u);
    set32(c.r[4], c.r[17].w[0] + 32u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[5], c.r[5].w[0] - 5584u);
    set32(c.r[6], 0u + 32u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032EE00u); set32(c.r[7], 0u + 15u);  if (depth < kMaxDepth) unit_0000(c, 86u, depth + 1u); else { c.pc = 0x00100720u; return; } if (c.pc != 0x0032EE00u) [[unlikely]] return; }
L_0032EE00:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032EE0Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000F(c, 266u, depth + 1u); else { c.pc = 0x0013E5B0u; return; } if (c.pc != 0x0032EE0Cu) [[unlikely]] return; }
L_0032EE0C:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0032EE28; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032EE24u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x0032EE24u) [[unlikely]] return; }
L_0032EE24:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0032EE28:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0032EE40:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032EE64u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0023(c, 256u, depth + 1u); else { c.pc = 0x0018E780u; return; } if (c.pc != 0x0032EE64u) [[unlikely]] return; }
L_0032EE64:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_0032EE6C:
    set32(c.r[2], c.r[16].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 32u)));
    c.r[1].d[0] = c.r[18].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] != 0ull; c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_0032EEB8; } }
    set32(c.r[2], c.r[3].w[0] + 4u);
    c.r[1].d[0] = c.r[18].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_0032EEB4; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_0032EEB4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032EEACu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_008B(c, 271u, depth + 1u); else { c.pc = 0x0032EFE0u; return; } if (c.pc != 0x0032EEACu) [[unlikely]] return; }
L_0032EEAC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[16].w[0] + 1u);  if (t) { goto L_0032EEC4; } }
L_0032EEB4:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_0032EEB8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032EEC0u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_008B(c, 293u, depth + 1u); else { c.pc = 0x0032F0F0u; return; } if (c.pc != 0x0032EEC0u) [[unlikely]] return; }
L_0032EEC0:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_0032EEC4:
    c.r[3].d[0] = c.r[16].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0032EE6Cu | kUnwind; return; } goto L_0032EE6C; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0032EEF0:
    set32(c.r[29], c.r[29].w[0] - 128u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[1].w[0] + 28324u)));
    c.budget -= 10;
    { const bool t = c.r[16].d[0] == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0032EFBC; } }
    c.r[1].d[0] = c.r[17].sd[0] < 15ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0032EFBC; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x43410000u);  if (t) { goto L_0032EF30; } }
    set32(c.r[4], c.r[4].w[0] + 436u);
    c.budget -= 1;
L_0032EF30:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032EF38u); c.r[5].d[0] = c.r[2].d[0] | 21569ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x0032EF38u) [[unlikely]] return; }
L_0032EF38:
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], c.r[17].w[0] + c.r[18].w[0]);
    st8((c.r[2].w[0] + 12u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[4], ld32((c.r[16].w[0] + 52u)));
    set32(c.r[2], c.r[17].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    set32(c.r[6], ld32((c.r[2].w[0] + 512u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 152u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 11;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0032EF64u); set32(c.r[5], c.r[29].w[0] + 64u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0032EF64u) [[unlikely]] return; }
L_0032EF64:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 4u);  if (t) { goto L_0032EF8C; } }
    c.f[1] = ld32((c.r[29].w[0] + 116u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 116u), c.f[0]);
    set32(c.r[3], 0u + 4u);
    c.budget -= 7;
L_0032EF8C:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != c.r[3].d[0];  if (t) { goto L_0032EFAC; } }
    c.f[1] = ld32((c.r[29].w[0] + 116u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 116u), c.f[0]);
    c.budget -= 6;
L_0032EFAC:
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[4]);
    set32(c.r[3], c.r[17].w[0] << 5);
    set32(c.r[3], c.r[3].w[0] + c.r[18].w[0]);
    st128((c.r[3].w[0] + 32u) & ~15u, c.r[4]);
    c.budget -= 4;
L_0032EFBC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_0032EFE0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[1].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0032F0D8; } }
    set32(c.r[3], c.r[5].w[0] << 2);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[5], c.r[5].w[0] - 12800u);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x0032C000u < 16384u) { entry = entries_008B[(t - 0x0032C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0032F014:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032F01Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_008B(c, 268u, depth + 1u); else { c.pc = 0x0032EEF0u; return; } if (c.pc != 0x0032F01Cu) [[unlikely]] return; }
L_0032F01C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_0032F0DC; } }
L_0032F024:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032F02Cu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_008B(c, 268u, depth + 1u); else { c.pc = 0x0032EEF0u; return; } if (c.pc != 0x0032F02Cu) [[unlikely]] return; }
L_0032F02C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032F038u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_008B(c, 268u, depth + 1u); else { c.pc = 0x0032EEF0u; return; } if (c.pc != 0x0032F038u) [[unlikely]] return; }
L_0032F038:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0032F0D8; } }
L_0032F040:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032F048u); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_008B(c, 268u, depth + 1u); else { c.pc = 0x0032EEF0u; return; } if (c.pc != 0x0032F048u) [[unlikely]] return; }
L_0032F048:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032F054u); set32(c.r[5], 0u + 4u);  if (depth < kMaxDepth) unit_008B(c, 268u, depth + 1u); else { c.pc = 0x0032EEF0u; return; } if (c.pc != 0x0032F054u) [[unlikely]] return; }
L_0032F054:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032F060u); set32(c.r[5], 0u + 5u);  if (depth < kMaxDepth) unit_008B(c, 268u, depth + 1u); else { c.pc = 0x0032EEF0u; return; } if (c.pc != 0x0032F060u) [[unlikely]] return; }
L_0032F060:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0032F0D8; } }
L_0032F068:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032F070u); set32(c.r[5], 0u + 6u);  if (depth < kMaxDepth) unit_008B(c, 268u, depth + 1u); else { c.pc = 0x0032EEF0u; return; } if (c.pc != 0x0032F070u) [[unlikely]] return; }
L_0032F070:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032F07Cu); set32(c.r[5], 0u + 7u);  if (depth < kMaxDepth) unit_008B(c, 268u, depth + 1u); else { c.pc = 0x0032EEF0u; return; } if (c.pc != 0x0032F07Cu) [[unlikely]] return; }
L_0032F07C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032F088u); set32(c.r[5], 0u + 8u);  if (depth < kMaxDepth) unit_008B(c, 268u, depth + 1u); else { c.pc = 0x0032EEF0u; return; } if (c.pc != 0x0032F088u) [[unlikely]] return; }
L_0032F088:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0032F0D8; } }
L_0032F090:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032F098u); set32(c.r[5], 0u + 9u);  if (depth < kMaxDepth) unit_008B(c, 268u, depth + 1u); else { c.pc = 0x0032EEF0u; return; } if (c.pc != 0x0032F098u) [[unlikely]] return; }
L_0032F098:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032F0A4u); set32(c.r[5], 0u + 10u);  if (depth < kMaxDepth) unit_008B(c, 268u, depth + 1u); else { c.pc = 0x0032EEF0u; return; } if (c.pc != 0x0032F0A4u) [[unlikely]] return; }
L_0032F0A4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032F0B0u); set32(c.r[5], 0u + 11u);  if (depth < kMaxDepth) unit_008B(c, 268u, depth + 1u); else { c.pc = 0x0032EEF0u; return; } if (c.pc != 0x0032F0B0u) [[unlikely]] return; }
L_0032F0B0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0032F0D8; } }
L_0032F0B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032F0C0u); set32(c.r[5], 0u + 12u);  if (depth < kMaxDepth) unit_008B(c, 268u, depth + 1u); else { c.pc = 0x0032EEF0u; return; } if (c.pc != 0x0032F0C0u) [[unlikely]] return; }
L_0032F0C0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032F0CCu); set32(c.r[5], 0u + 13u);  if (depth < kMaxDepth) unit_008B(c, 268u, depth + 1u); else { c.pc = 0x0032EEF0u; return; } if (c.pc != 0x0032F0CCu) [[unlikely]] return; }
L_0032F0CC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032F0D8u); set32(c.r[5], 0u + 14u);  if (depth < kMaxDepth) unit_008B(c, 268u, depth + 1u); else { c.pc = 0x0032EEF0u; return; } if (c.pc != 0x0032F0D8u) [[unlikely]] return; }
L_0032F0D8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_0032F0DC:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0032F0F0:
    c.r[1].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[3], c.r[5].w[0] << 2);  if (t) { goto L_0032F164; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[5], c.r[5].w[0] - 12768u);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 6;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x0032C000u < 16384u) { entry = entries_008B[(t - 0x0032C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0032F114:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 12u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0032F164; } }
L_0032F11C:
    st8((c.r[4].w[0] + 13u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 14u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0032F164; } }
L_0032F128:
    st8((c.r[4].w[0] + 15u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 16u), static_cast<std::uint8_t>(0u));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 17u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0032F164; } }
L_0032F138:
    st8((c.r[4].w[0] + 18u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 19u), static_cast<std::uint8_t>(0u));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 20u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0032F164; } }
L_0032F148:
    st8((c.r[4].w[0] + 21u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 22u), static_cast<std::uint8_t>(0u));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 23u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0032F164; } }
L_0032F158:
    st8((c.r[4].w[0] + 24u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 25u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 26u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
L_0032F164:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0032F170:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[12], ld32((c.r[1].w[0] + 20144u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[12].w[0] + c.r[1].w[0]);
    set32(c.r[3], ld32((c.r[1].w[0] + 1364u)));
    c.r[1].d[0] = c.r[3].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 12;
    { const bool t = c.r[1].d[0] != 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0032F240; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    set32(c.r[1], c.r[12].w[0] + c.r[1].w[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x50000000u);
    set32(c.r[11], ld32((c.r[1].w[0] + 1380u)));
    c.r[10].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[7].d[0] = c.r[5].d[0] | 2ull;
    c.r[9].d[0] = c.r[3].d[0] | 3ull;
    c.r[4].d[0] = c.r[3].d[0] << 32;
    c.r[8].sd[0] = static_cast<std::int32_t>(0x11000000u);
    c.r[3].d[0] = 0ull | 32769ull;
    set32(c.r[5], 0u + 14u);
    c.r[6].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00050000u);
    c.r[10].d[0] = c.r[11].d[0] | c.r[10].d[0];
    c.r[4].d[0] = c.r[3].d[0] | 12813ull;
    st64((c.r[10].w[0]), c.r[9].d[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    st64((c.r[10].w[0] + 8u), 0ull);
    set32(c.r[3], 0u + 71u);
    st64((c.r[10].w[0] + 16u), 0ull);
    set32(c.r[1], c.r[12].w[0] + c.r[1].w[0]);
    st32((c.r[10].w[0] + 24u), c.r[8].w[0]);
    st32((c.r[10].w[0] + 28u), c.r[7].w[0]);
    st64((c.r[10].w[0] + 32u), c.r[6].d[0]);
    st64((c.r[10].w[0] + 40u), c.r[5].d[0]);
    st64((c.r[10].w[0] + 48u), c.r[4].d[0]);
    st64((c.r[10].w[0] + 56u), c.r[3].d[0]);
    set32(c.r[3], ld32((c.r[1].w[0] + 1380u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[3], c.r[3].w[0] + 64u);
    set32(c.r[1], c.r[12].w[0] + c.r[1].w[0]);
    st32((c.r[1].w[0] + 1380u), c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[12].w[0] + c.r[1].w[0]);
    set32(c.r[3], ld32((c.r[1].w[0] + 1364u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[3], c.r[3].w[0] - 4u);
    set32(c.r[1], c.r[12].w[0] + c.r[1].w[0]);
    st32((c.r[1].w[0] + 1364u), c.r[3].w[0]);
    c.budget -= 40;
L_0032F240:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[12], ld32((c.r[1].w[0] + 20144u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[12].w[0] + c.r[1].w[0]);
    set32(c.r[3], ld32((c.r[1].w[0] + 1364u)));
    c.r[1].d[0] = c.r[3].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] != 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0032F2FC; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    set32(c.r[1], c.r[12].w[0] + c.r[1].w[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x50000000u);
    set32(c.r[11], ld32((c.r[1].w[0] + 1380u)));
    c.r[10].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[7].d[0] = c.r[5].d[0] | 2ull;
    c.r[9].d[0] = c.r[3].d[0] | 3ull;
    c.r[4].d[0] = c.r[3].d[0] << 32;
    c.r[8].sd[0] = static_cast<std::int32_t>(0x11000000u);
    c.r[3].d[0] = 0ull | 32769ull;
    set32(c.r[5], 0u + 14u);
    c.r[6].d[0] = c.r[3].d[0] | c.r[4].d[0];
    set32(c.r[4], 0u + 72u);
    set32(c.r[3], 0u + 66u);
    c.r[10].d[0] = c.r[11].d[0] | c.r[10].d[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    st64((c.r[10].w[0]), c.r[9].d[0]);
    set32(c.r[1], c.r[12].w[0] + c.r[1].w[0]);
    st64((c.r[10].w[0] + 8u), 0ull);
    st64((c.r[10].w[0] + 16u), 0ull);
    st32((c.r[10].w[0] + 24u), c.r[8].w[0]);
    st32((c.r[10].w[0] + 28u), c.r[7].w[0]);
    st64((c.r[10].w[0] + 32u), c.r[6].d[0]);
    st64((c.r[10].w[0] + 40u), c.r[5].d[0]);
    st64((c.r[10].w[0] + 48u), c.r[4].d[0]);
    st64((c.r[10].w[0] + 56u), c.r[3].d[0]);
    set32(c.r[3], ld32((c.r[1].w[0] + 1380u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[3], c.r[3].w[0] + 64u);
    set32(c.r[1], c.r[12].w[0] + c.r[1].w[0]);
    st32((c.r[1].w[0] + 1380u), c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[12].w[0] + c.r[1].w[0]);
    set32(c.r[3], ld32((c.r[1].w[0] + 1364u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[3], c.r[3].w[0] - 4u);
    set32(c.r[1], c.r[12].w[0] + c.r[1].w[0]);
    st32((c.r[1].w[0] + 1364u), c.r[3].w[0]);
    c.budget -= 39;
L_0032F2FC:
    set32(c.r[4], c.r[17].w[0] + c.r[16].w[0]);
    c.budget -= 1;
L_0032F300:
    set32(c.r[3], 0u + 1u);
    c.r[4].d[0] = ld8((c.r[4].w[0] + 12u));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0032F328; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032F318u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_008B(c, 268u, depth + 1u); else { c.pc = 0x0032EEF0u; return; } if (c.pc != 0x0032F318u) [[unlikely]] return; }
L_0032F318:
    set32(c.r[2], c.r[16].w[0] << 5);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032F328u); set32(c.r[4], c.r[2].w[0] + 32u);  if (depth < kMaxDepth) unit_008B(c, 249u, depth + 1u); else { c.pc = 0x0032EA80u; return; } if (c.pc != 0x0032F328u) [[unlikely]] return; }
L_0032F328:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[3].d[0] = c.r[16].sd[0] < 15ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[4], c.r[17].w[0] + c.r[16].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0032F300u | kUnwind; return; } goto L_0032F300; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0032F350:
    st32((c.r[4].w[0] + 16u), c.r[5].w[0]);
    st32((c.r[4].w[0] + 12u), c.r[6].w[0]);
    st32((c.r[4].w[0]), c.r[7].w[0]);
    st32((c.r[4].w[0] + 4u), c.r[8].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 8u), c.r[9].w[0]);  c.pc = t; return; }
L_0032F370:
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[8], ld32((c.r[4].w[0] + 12u)));
    c.r[1].d[0] = c.r[8].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0032F3A0; } }
    set32(c.r[3], ld32((c.r[4].w[0])));
    st32((c.r[5].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[6], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[3], c.r[6].w[0] - c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[5].w[0] + 12u), c.r[3].w[0]);  if (t) { goto L_0032F428; } }
L_0032F3A0:
    c.f[0] = c.r[3].w[0];
    set32(c.r[7], ld32((c.r[4].w[0] + 4u)));
    c.f[1] = c.r[8].w[0];
    set32(c.r[6], ld32((c.r[4].w[0])));
    c.f[2] = fp::cvt_s_w(c.f[0]);
    set32(c.r[3], c.r[8].w[0] - c.r[3].w[0]);
    set32(c.r[6], c.r[7].w[0] - c.r[6].w[0]);
    c.f[1] = fp::cvt_s_w(c.f[1]);
    fpu_div(c, 1u, c.f[2], c.f[1]);
    c.f[0] = c.r[6].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[3] = fp::mul(c.f[0], c.f[1]);
    c.f[1] = c.r[3].w[0];
    c.f[2] = fp::sub(c.f[0], c.f[3]);
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = fp::cvt_w_s(c.f[3]);
    set32(c.r[3], c.f[0]);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_compare(c, fp::key(c.f[3]) == fp::key(c.f[0]));
    c.budget -= 23;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; fpu_div(c, 2u, c.f[2], c.f[1]);  if (t) { goto L_0032F400; } }
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 1;
L_0032F400:
    st32((c.r[5].w[0] + 12u), c.r[3].w[0]);
    c.f[0] = ld32((c.r[4].w[0] + 16u));
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::mul(c.f[0], c.f[2]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[4], c.f[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[5].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 10;
L_0032F428:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0032F430:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[5].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032F448u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 256u, depth + 1u); else { c.pc = 0x0013E440u; return; } if (c.pc != 0x0032F448u) [[unlikely]] return; }
L_0032F448:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], 0u - 1u);
    set32(c.r[2], c.r[2].w[0] + 21136u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    st32((c.r[16].w[0] + 8u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 12u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0032F480:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0032F4C8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 21136u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032F4B0u); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E490u; return; } if (c.pc != 0x0032F4B0u) [[unlikely]] return; }
L_0032F4B0:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0032F4CC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032F4C8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x0032F4C8u) [[unlikely]] return; }
L_0032F4C8:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0032F4CC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0032F4E0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[6], ld32((c.r[1].w[0] - 1536u)));
    c.r[3].d[0] = ld16((c.r[6].w[0]));
    c.r[3].d[0] = c.r[3].d[0] & 32768ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0032F510; } }
    set32(c.r[5], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_0032F510; } }
    st32((c.r[4].w[0] + 8u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 12u), 0u);
    c.budget -= 2;
L_0032F510:
    c.r[3].d[0] = ld16((c.r[6].w[0]));
    c.r[3].d[0] = c.r[3].d[0] & 8192ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0032F538; } }
    set32(c.r[5], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_0032F538; } }
    st32((c.r[4].w[0] + 8u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 12u), 0u);
    c.budget -= 2;
L_0032F538:
    c.r[3].d[0] = ld16((c.r[6].w[0]));
    c.r[3].d[0] = c.r[3].d[0] & 4096ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0032F55C; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0032F55C; } }
    st32((c.r[4].w[0] + 8u), 0u);
    st32((c.r[4].w[0] + 12u), 0u);
    c.budget -= 2;
L_0032F55C:
    c.r[3].d[0] = ld16((c.r[6].w[0]));
    c.r[3].d[0] = c.r[3].d[0] & 16384ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0032F584; } }
    set32(c.r[5], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_0032F584; } }
    st32((c.r[4].w[0] + 8u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 12u), 0u);
    c.budget -= 2;
L_0032F584:
    c.r[3].d[0] = ld16((c.r[6].w[0]));
    c.r[3].d[0] = c.r[3].d[0] & 61440ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0032F5A4; } }
    st32((c.r[4].w[0] + 12u), 0u);
    set32(c.r[3], 0u - 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_0032F5B0; } }
L_0032F5A4:
    set32(c.r[3], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[4].w[0] + 12u), c.r[3].w[0]);
    c.budget -= 3;
L_0032F5B0:
    set32(c.r[3], ld32((c.r[4].w[0] + 12u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[1].d[0] = c.r[3].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] != 0ull; c.r[3].d[0] = 0ull | 65535ull;  if (t) { goto L_0032F5C8; } }
    st32((c.r[4].w[0] + 12u), c.r[3].w[0]);
    c.budget -= 1;
L_0032F5C8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0032F5D0:
    set32(c.r[3], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[2], 0u + 30u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);  if (t) { goto L_0032F5E4; } }
    breakpoint(c, 0x0032F5E0u);
    c.budget -= 1;
L_0032F5E4:
    c.r[2].d[0] = c.lo.d[0];
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0032F5F0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[2].d[0] = ld8((c.r[4].w[0] + 284u));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0032F61C; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 56u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0032F614u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0032F614u) [[unlikely]] return; }
L_0032F614:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_0032F630; } }
L_0032F61C:
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0032F62Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0032F62Cu) [[unlikely]] return; }
L_0032F62C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_0032F630:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0032F640:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0032F6D4; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 21344u);
    set32(c.r[2], c.r[2].w[0] + 21404u);
    st32((c.r[16].w[0] + 176u), c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0] + 272u), c.r[2].w[0]);  if (t) { goto L_0032F6BC; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 21632u);
    set32(c.r[2], c.r[2].w[0] + 21692u);
    st32((c.r[16].w[0] + 176u), c.r[3].w[0]);
    set32(c.r[4], c.r[16].w[0] + 272u);
    st32((c.r[16].w[0] + 272u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032F69Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000F(c, 266u, depth + 1u); else { c.pc = 0x0013E5B0u; return; } if (c.pc != 0x0032F69Cu) [[unlikely]] return; }
L_0032F69C:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; c.r[2].d[0] = c.r[17].d[0] << 48;  if (t) { goto L_0032F6C0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] - 17536u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032F6BCu); st32((c.r[16].w[0] + 176u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0012(c, 264u, depth + 1u); else { c.pc = 0x0014ADA0u; return; } if (c.pc != 0x0032F6BCu) [[unlikely]] return; }
L_0032F6BC:
    c.r[2].d[0] = c.r[17].d[0] << 48;
    c.budget -= 1;
L_0032F6C0:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0032F6D8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032F6D4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x0032F6D4u) [[unlikely]] return; }
L_0032F6D4:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0032F6D8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0032F6F0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 28u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00321020u | kUnwind; return; } [[clang::musttail]] return unit_0088(c, 172u, depth); }
L_0032F700:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 272u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0032BB60u | kUnwind; return; } [[clang::musttail]] return unit_008A(c, 339u, depth); }
L_0032F710:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 272u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0032F5F0u | kUnwind; return; } goto L_0032F5F0; }
L_0032F720:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 272u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0032F640u | kUnwind; return; } goto L_0032F640; }
L_0032F730:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0032CF40u | kUnwind; return; } goto L_0032CF40; }
L_0032F740:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0032D1A0u | kUnwind; return; } goto L_0032D1A0; }
L_0032F750:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0032D2A0u | kUnwind; return; } goto L_0032D2A0; }
L_0032F760:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0032D4D0u | kUnwind; return; } goto L_0032D4D0; }
L_0032F770:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 64u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0032D720u | kUnwind; return; } goto L_0032D720; }
L_0032F780:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 64u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0032D5F0u | kUnwind; return; } goto L_0032D5F0; }
L_0032F790:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[1].w[0] + 26120u)));
    c.budget -= 8;
    { const bool t = c.r[16].d[0] == 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0032F7E8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032F7B8u); set32(c.r[4], 0u - c.r[17].w[0]);  if (depth < kMaxDepth) unit_0087(c, 336u, depth + 1u); else { c.pc = 0x0031F190u; return; } if (c.pc != 0x0032F7B8u) [[unlikely]] return; }
L_0032F7B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032F7C0u);  if (depth < kMaxDepth) unit_0022(c, 256u, depth + 1u); else { c.pc = 0x00189B70u; return; } if (c.pc != 0x0032F7C0u) [[unlikely]] return; }
L_0032F7C0:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032F7CCu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 228u, depth + 1u); else { c.pc = 0x00189700u; return; } if (c.pc != 0x0032F7CCu) [[unlikely]] return; }
L_0032F7CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032F7D4u);  if (depth < kMaxDepth) unit_0023(c, 256u, depth + 1u); else { c.pc = 0x0018E780u; return; } if (c.pc != 0x0032F7D4u) [[unlikely]] return; }
L_0032F7D4:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032F7E0u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0023(c, 372u, depth + 1u); else { c.pc = 0x0018F680u; return; } if (c.pc != 0x0032F7E0u) [[unlikely]] return; }
L_0032F7E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032F7E8u); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_009D(c, 279u, depth + 1u); else { c.pc = 0x00376E00u; return; } if (c.pc != 0x0032F7E8u) [[unlikely]] return; }
L_0032F7E8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0032F800:
    set32(c.r[29], c.r[29].w[0] - 144u);
    set32(c.r[5], 0u + 12u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032F824u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_000F(c, 264u, depth + 1u); else { c.pc = 0x0013E560u; return; } if (c.pc != 0x0032F824u) [[unlikely]] return; }
L_0032F824:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[4], c.r[19].w[0] + 16u);
    set32(c.r[2], c.r[2].w[0] + 23664u);
    set32(c.r[5], 0u + 11u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032F83Cu); st32((c.r[19].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0023(c, 195u, depth + 1u); else { c.pc = 0x0018DEA0u; return; } if (c.pc != 0x0032F83Cu) [[unlikely]] return; }
L_0032F83C:
    set32(c.r[4], c.r[19].w[0] + 128u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032F848u); set32(c.r[5], 0u + 11u);  if (depth < kMaxDepth) unit_0023(c, 195u, depth + 1u); else { c.pc = 0x0018DEA0u; return; } if (c.pc != 0x0032F848u) [[unlikely]] return; }
L_0032F848:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00420000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00420000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00420000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[4], c.r[19].w[0] + 240u);
    set32(c.r[5], c.r[5].w[0] - 3736u);
    set32(c.r[6], c.r[6].w[0] - 3728u);
    set32(c.r[7], c.r[7].w[0] - 3720u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032F870u); set32(c.r[8], c.r[8].w[0] - 3712u);  if (depth < kMaxDepth) unit_008A(c, 48u, depth + 1u); else { c.pc = 0x003286E0u; return; } if (c.pc != 0x0032F870u) [[unlikely]] return; }
L_0032F870:
    set32(c.r[4], c.r[19].w[0] + 288u);
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032F880u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_008A(c, 257u, depth + 1u); else { c.pc = 0x0032AE80u; return; } if (c.pc != 0x0032F880u) [[unlikely]] return; }
L_0032F880:
    set32(c.r[4], c.r[19].w[0] + 480u);
    set32(c.r[5], 0u + 4u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032F890u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_008A(c, 257u, depth + 1u); else { c.pc = 0x0032AE80u; return; } if (c.pc != 0x0032F890u) [[unlikely]] return; }
L_0032F890:
    set32(c.r[4], c.r[19].w[0] + 672u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 74u);
    set32(c.r[7], 0u + 120u);
    set32(c.r[8], 0u + 40u);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032F8B0u); set32(c.r[10], 0u + 20u);  if (depth < kMaxDepth) unit_008A(c, 214u, depth + 1u); else { c.pc = 0x0032A240u; return; } if (c.pc != 0x0032F8B0u) [[unlikely]] return; }
L_0032F8B0:
    set32(c.r[4], c.r[19].w[0] + 700u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 114u);
    set32(c.r[7], 0u + 120u);
    set32(c.r[8], 0u + 24u);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032F8D0u); set32(c.r[10], 0u + 20u);  if (depth < kMaxDepth) unit_008A(c, 214u, depth + 1u); else { c.pc = 0x0032A240u; return; } if (c.pc != 0x0032F8D0u) [[unlikely]] return; }
L_0032F8D0:
    set32(c.r[4], c.r[19].w[0] + 728u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 138u);
    set32(c.r[7], 0u + 120u);
    set32(c.r[8], 0u + 24u);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032F8F0u); set32(c.r[10], 0u + 20u);  if (depth < kMaxDepth) unit_008A(c, 214u, depth + 1u); else { c.pc = 0x0032A240u; return; } if (c.pc != 0x0032F8F0u) [[unlikely]] return; }
L_0032F8F0:
    set32(c.r[4], c.r[19].w[0] + 756u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 162u);
    set32(c.r[7], 0u + 120u);
    set32(c.r[8], 0u + 24u);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032F910u); set32(c.r[10], 0u + 20u);  if (depth < kMaxDepth) unit_008A(c, 214u, depth + 1u); else { c.pc = 0x0032A240u; return; } if (c.pc != 0x0032F910u) [[unlikely]] return; }
L_0032F910:
    set32(c.r[4], c.r[19].w[0] + 784u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 186u);
    set32(c.r[7], 0u + 120u);
    set32(c.r[8], 0u + 24u);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032F930u); set32(c.r[10], 0u + 20u);  if (depth < kMaxDepth) unit_008A(c, 214u, depth + 1u); else { c.pc = 0x0032A240u; return; } if (c.pc != 0x0032F930u) [[unlikely]] return; }
L_0032F930:
    set32(c.r[4], c.r[19].w[0] + 812u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 210u);
    set32(c.r[7], 0u + 120u);
    set32(c.r[8], 0u + 24u);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032F950u); set32(c.r[10], 0u + 20u);  if (depth < kMaxDepth) unit_008A(c, 214u, depth + 1u); else { c.pc = 0x0032A240u; return; } if (c.pc != 0x0032F950u) [[unlikely]] return; }
L_0032F950:
    set32(c.r[4], c.r[19].w[0] + 840u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 234u);
    set32(c.r[7], 0u + 120u);
    set32(c.r[8], 0u + 24u);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032F970u); set32(c.r[10], 0u + 20u);  if (depth < kMaxDepth) unit_008A(c, 214u, depth + 1u); else { c.pc = 0x0032A240u; return; } if (c.pc != 0x0032F970u) [[unlikely]] return; }
L_0032F970:
    set32(c.r[4], c.r[19].w[0] + 868u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 258u);
    set32(c.r[7], 0u + 120u);
    set32(c.r[8], 0u + 24u);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032F990u); set32(c.r[10], 0u + 20u);  if (depth < kMaxDepth) unit_008A(c, 214u, depth + 1u); else { c.pc = 0x0032A240u; return; } if (c.pc != 0x0032F990u) [[unlikely]] return; }
L_0032F990:
    set32(c.r[16], c.r[19].w[0] + 896u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032F99Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 177u, depth + 1u); else { c.pc = 0x0015E070u; return; } if (c.pc != 0x0032F99Cu) [[unlikely]] return; }
L_0032F99C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[4], c.r[19].w[0] + 1152u);
    set32(c.r[2], c.r[2].w[0] + 21488u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032F9B0u); st32((c.r[16].w[0] + 176u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_008A(c, 86u, depth + 1u); else { c.pc = 0x00328F10u; return; } if (c.pc != 0x0032F9B0u) [[unlikely]] return; }
L_0032F9B0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00420000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[4], c.r[19].w[0] + 16u);
    set32(c.r[5], c.r[5].w[0] - 3704u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032F9C8u); set32(c.r[6], c.r[6].w[0] - 3696u);  if (depth < kMaxDepth) unit_008A(c, 12u, depth + 1u); else { c.pc = 0x00328180u; return; } if (c.pc != 0x0032F9C8u) [[unlikely]] return; }
L_0032F9C8:
    set32(c.r[4], c.r[19].w[0] + 128u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032F9D4u); set32(c.r[5], 0u + 8u);  if (depth < kMaxDepth) unit_0023(c, 205u, depth + 1u); else { c.pc = 0x0018DFE0u; return; } if (c.pc != 0x0032F9D4u) [[unlikely]] return; }
L_0032F9D4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 26392u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 440u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032F9E8u); set32(c.r[4], c.r[19].w[0] + 128u);  if (depth < kMaxDepth) unit_0023(c, 203u, depth + 1u); else { c.pc = 0x0018DFC0u; return; } if (c.pc != 0x0032F9E8u) [[unlikely]] return; }
L_0032F9E8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[5], c.r[29].w[0] + 112u);
    set32(c.r[3], c.r[3].w[0] - 3680u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    ld128((c.r[3].w[0]) & ~15u, c.r[4]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[16].d[0] = 0ull + 0ull;
    ld128((c.r[3].w[0] + 16u) & ~15u, c.r[3]);
    st128((c.r[5].w[0]) & ~15u, c.r[4]);
    st128((c.r[5].w[0] + 16u) & ~15u, c.r[3]);
    c.f[0] = ld32((c.r[1].w[0] - 12608u));
    st32((c.r[29].w[0] + 80u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 88u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 92u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 84u), c.f[0]);
    set32(c.r[2], c.r[16].w[0] << 2);
    c.budget -= 16;
L_0032FA28:
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032FA34u); set32(c.r[4], ld32((c.r[2].w[0] + 112u)));  if (depth < kMaxDepth) unit_000B(c, 461u, depth + 1u); else { c.pc = 0x0012FD60u; return; } if (c.pc != 0x0032FA34u) [[unlikely]] return; }
L_0032FA34:
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[19].w[0] + 128u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032FA44u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0023(c, 210u, depth + 1u); else { c.pc = 0x0018E080u; return; } if (c.pc != 0x0032FA44u) [[unlikely]] return; }
L_0032FA44:
    set32(c.r[4], c.r[19].w[0] + 128u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032FA54u); set32(c.r[6], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0023(c, 211u, depth + 1u); else { c.pc = 0x0018E0B0u; return; } if (c.pc != 0x0032FA54u) [[unlikely]] return; }
L_0032FA54:
    set32(c.r[4], c.r[19].w[0] + 128u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032FA64u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0023(c, 214u, depth + 1u); else { c.pc = 0x0018E160u; return; } if (c.pc != 0x0032FA64u) [[unlikely]] return; }
L_0032FA64:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[16].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0032FA28u | kUnwind; return; } goto L_0032FA28; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42700000u);
    set32(c.r[18], c.r[29].w[0] + 100u);
    st32((c.r[29].w[0] + 96u), c.r[2].w[0]);
    set32(c.r[17], c.r[29].w[0] + 104u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42BC0000u);
    set32(c.r[16], c.r[29].w[0] + 108u);
    st32((c.r[18].w[0]), c.r[2].w[0]);
    set32(c.r[4], c.r[19].w[0] + 128u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x48000000u);
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[6], c.r[29].w[0] + 96u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032FAB0u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0023(c, 212u, depth + 1u); else { c.pc = 0x0018E0F0u; return; } if (c.pc != 0x0032FAB0u) [[unlikely]] return; }
L_0032FAB0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42700000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42FC0000u);
    st32((c.r[29].w[0] + 96u), c.r[3].w[0]);
    st32((c.r[18].w[0]), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x48000000u);
    st32((c.r[17].w[0]), c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[17], 0u + 1u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 9;
L_0032FAD4:
    set32(c.r[4], c.r[19].w[0] + 128u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032FAE4u); set32(c.r[6], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_0023(c, 212u, depth + 1u); else { c.pc = 0x0018E0F0u; return; } if (c.pc != 0x0032FAE4u) [[unlikely]] return; }
L_0032FAE4:
    c.f[1] = ld32((c.r[29].w[0] + 100u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41C00000u);
    c.f[0] = c.r[2].w[0];
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].sd[0] < 8ll ? 1ull : 0ull;
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[29].w[0] + 100u), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0032FAD4u | kUnwind; return; } goto L_0032FAD4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032FB0Cu);  if (depth < kMaxDepth) unit_0022(c, 256u, depth + 1u); else { c.pc = 0x00189B70u; return; } if (c.pc != 0x0032FB0Cu) [[unlikely]] return; }
L_0032FB0C:
    set32(c.r[5], ld32((c.r[2].w[0] + 40u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032FB18u); set32(c.r[4], c.r[19].w[0] + 1152u);  if (depth < kMaxDepth) unit_008A(c, 142u, depth + 1u); else { c.pc = 0x003295D0u; return; } if (c.pc != 0x0032FB18u) [[unlikely]] return; }
L_0032FB18:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032FB20u);  if (depth < kMaxDepth) unit_0022(c, 124u, depth + 1u); else { c.pc = 0x00188A50u; return; } if (c.pc != 0x0032FB20u) [[unlikely]] return; }
L_0032FB20:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032FB28u); set32(c.r[16], c.r[2].w[0] << 2);  if (depth < kMaxDepth) unit_0022(c, 128u, depth + 1u); else { c.pc = 0x00188AE0u; return; } if (c.pc != 0x0032FB28u) [[unlikely]] return; }
L_0032FB28:
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_0032FB48; } }
    c.budget -= 2;
    { const bool t = c.r[16].sd[0] >= 0; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[16].w[0]) >> 1));  if (t) { goto L_0032FB44; } }
    set32(c.r[2], c.r[16].w[0] + 1u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    c.budget -= 2;
L_0032FB44:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0032FB48:
    set32(c.r[2], 0u + 240u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x43500000u);
    set32(c.r[3], c.r[2].w[0] - c.r[16].w[0]);
    set32(c.r[4], c.r[19].w[0] + 896u);
    c.f[1] = c.r[3].w[0];
    set32(c.r[2], c.r[16].w[0] + 120u);
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42940000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x48600000u);
    st32((c.r[19].w[0] + 1056u), c.f[1]);
    st32((c.r[19].w[0] + 1060u), c.r[5].w[0]);
    set32(c.r[25], ld32((c.r[19].w[0] + 1072u)));
    c.f[13] = c.r[3].w[0];
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.f[14] = c.r[2].w[0];
    c.budget -= 19;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0032FB94u); c.f[12] = fp::cvt_s_w(c.f[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0032FB94u) [[unlikely]] return; }
L_0032FB94:
    st32((c.r[19].w[0] + 944u), 0u);
    set32(c.r[3], 0u + 128u);
    st32((c.r[19].w[0] + 948u), 0u);
    c.r[2].d[0] = c.r[19].d[0] + 0ull;
    st32((c.r[19].w[0] + 952u), 0u);
    st32((c.r[19].w[0] + 956u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_0032FBD0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[5], 0u + 255u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032FBECu); set32(c.r[4], c.r[16].w[0] + 240u);  if (depth < kMaxDepth) unit_008A(c, 60u, depth + 1u); else { c.pc = 0x00328870u; return; } if (c.pc != 0x0032FBECu) [[unlikely]] return; }
L_0032FBEC:
    set32(c.r[25], ld32((c.r[16].w[0] + 696u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0032FBFCu); set32(c.r[4], c.r[16].w[0] + 672u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0032FBFCu) [[unlikely]] return; }
L_0032FBFC:
    set32(c.r[25], ld32((c.r[16].w[0] + 724u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0032FC0Cu); set32(c.r[4], c.r[16].w[0] + 700u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0032FC0Cu) [[unlikely]] return; }
L_0032FC0C:
    set32(c.r[25], ld32((c.r[16].w[0] + 752u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0032FC1Cu); set32(c.r[4], c.r[16].w[0] + 728u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0032FC1Cu) [[unlikely]] return; }
L_0032FC1C:
    set32(c.r[25], ld32((c.r[16].w[0] + 780u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0032FC2Cu); set32(c.r[4], c.r[16].w[0] + 756u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0032FC2Cu) [[unlikely]] return; }
L_0032FC2C:
    set32(c.r[25], ld32((c.r[16].w[0] + 808u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0032FC3Cu); set32(c.r[4], c.r[16].w[0] + 784u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0032FC3Cu) [[unlikely]] return; }
L_0032FC3C:
    set32(c.r[25], ld32((c.r[16].w[0] + 836u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0032FC4Cu); set32(c.r[4], c.r[16].w[0] + 812u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0032FC4Cu) [[unlikely]] return; }
L_0032FC4C:
    set32(c.r[25], ld32((c.r[16].w[0] + 864u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0032FC5Cu); set32(c.r[4], c.r[16].w[0] + 840u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0032FC5Cu) [[unlikely]] return; }
L_0032FC5C:
    set32(c.r[25], ld32((c.r[16].w[0] + 892u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0032FC6Cu); set32(c.r[4], c.r[16].w[0] + 868u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0032FC6Cu) [[unlikely]] return; }
L_0032FC6C:
    st32((c.r[16].w[0] + 944u), 0u);
    set32(c.r[2], 0u + 128u);
    st32((c.r[16].w[0] + 948u), 0u);
    st32((c.r[16].w[0] + 952u), 0u);
    st32((c.r[16].w[0] + 956u), c.r[2].w[0]);
    set32(c.r[25], ld32((c.r[16].w[0] + 1072u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 9;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0032FC90u); set32(c.r[4], c.r[16].w[0] + 896u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0032FC90u) [[unlikely]] return; }
L_0032FC90:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0032FCA0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[7].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[8], 0u + 1u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032FCBCu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0087(c, 356u, depth + 1u); else { c.pc = 0x0031F380u; return; } if (c.pc != 0x0032FCBCu) [[unlikely]] return; }
L_0032FCBC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 23488u);
    set32(c.r[2], c.r[2].w[0] + 23576u);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    set32(c.r[4], c.r[16].w[0] + 208u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032FCDCu); st32((c.r[16].w[0] + 20u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_008B(c, 337u, depth + 1u); else { c.pc = 0x0032F800u; return; } if (c.pc != 0x0032FCDCu) [[unlikely]] return; }
L_0032FCDC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4D4F0000u);
    set32(c.r[3], 0u + 120u);
    c.r[4].d[0] = c.r[2].d[0] | 21583ull;
    st32((c.r[16].w[0] + 48u), c.r[4].w[0]);
    set32(c.r[2], 0u + 121u);
    st32((c.r[16].w[0] + 180u), 0u);
    st16((c.r[16].w[0] + 188u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032FD00u); st16((c.r[16].w[0] + 190u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_008A(c, 31u, depth + 1u); else { c.pc = 0x00328420u; return; } if (c.pc != 0x0032FD00u) [[unlikely]] return; }
L_0032FD00:
    set32(c.r[4], 0u + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032FD0Cu); st8((c.r[16].w[0] + 2288u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0076(c, 191u, depth + 1u); else { c.pc = 0x002D9970u; return; } if (c.pc != 0x0032FD0Cu) [[unlikely]] return; }
L_0032FD0C:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0032FD20:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0032FE40; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[4], c.r[17].w[0] + 1152u);
    set32(c.r[2], c.r[2].w[0] + 23664u);
    set32(c.r[5], 0u - 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032FD54u); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_008A(c, 126u, depth + 1u); else { c.pc = 0x00329390u; return; } if (c.pc != 0x0032FD54u) [[unlikely]] return; }
L_0032FD54:
    set32(c.r[4], c.r[17].w[0] + 896u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);  if (t) { goto L_0032FD80; } }
    set32(c.r[2], c.r[2].w[0] + 21488u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[17].w[0] + 1072u), c.r[2].w[0]);  if (t) { goto L_0032FD80; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 17408u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032FD80u); st32((c.r[17].w[0] + 1072u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0012(c, 264u, depth + 1u); else { c.pc = 0x0014ADA0u; return; } if (c.pc != 0x0032FD80u) [[unlikely]] return; }
L_0032FD80:
    set32(c.r[4], c.r[17].w[0] + 868u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032FD8Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008A(c, 215u, depth + 1u); else { c.pc = 0x0032A270u; return; } if (c.pc != 0x0032FD8Cu) [[unlikely]] return; }
L_0032FD8C:
    set32(c.r[4], c.r[17].w[0] + 840u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032FD98u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008A(c, 215u, depth + 1u); else { c.pc = 0x0032A270u; return; } if (c.pc != 0x0032FD98u) [[unlikely]] return; }
L_0032FD98:
    set32(c.r[4], c.r[17].w[0] + 812u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032FDA4u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008A(c, 215u, depth + 1u); else { c.pc = 0x0032A270u; return; } if (c.pc != 0x0032FDA4u) [[unlikely]] return; }
L_0032FDA4:
    set32(c.r[4], c.r[17].w[0] + 784u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032FDB0u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008A(c, 215u, depth + 1u); else { c.pc = 0x0032A270u; return; } if (c.pc != 0x0032FDB0u) [[unlikely]] return; }
L_0032FDB0:
    set32(c.r[4], c.r[17].w[0] + 756u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032FDBCu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008A(c, 215u, depth + 1u); else { c.pc = 0x0032A270u; return; } if (c.pc != 0x0032FDBCu) [[unlikely]] return; }
L_0032FDBC:
    set32(c.r[4], c.r[17].w[0] + 728u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032FDC8u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008A(c, 215u, depth + 1u); else { c.pc = 0x0032A270u; return; } if (c.pc != 0x0032FDC8u) [[unlikely]] return; }
L_0032FDC8:
    set32(c.r[4], c.r[17].w[0] + 700u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032FDD4u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008A(c, 215u, depth + 1u); else { c.pc = 0x0032A270u; return; } if (c.pc != 0x0032FDD4u) [[unlikely]] return; }
L_0032FDD4:
    set32(c.r[4], c.r[17].w[0] + 672u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032FDE0u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008A(c, 215u, depth + 1u); else { c.pc = 0x0032A270u; return; } if (c.pc != 0x0032FDE0u) [[unlikely]] return; }
L_0032FDE0:
    set32(c.r[4], c.r[17].w[0] + 480u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032FDECu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008A(c, 261u, depth + 1u); else { c.pc = 0x0032AF10u; return; } if (c.pc != 0x0032FDECu) [[unlikely]] return; }
L_0032FDEC:
    set32(c.r[4], c.r[17].w[0] + 288u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032FDF8u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008A(c, 261u, depth + 1u); else { c.pc = 0x0032AF10u; return; } if (c.pc != 0x0032FDF8u) [[unlikely]] return; }
L_0032FDF8:
    set32(c.r[4], c.r[17].w[0] + 240u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032FE04u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008A(c, 53u, depth + 1u); else { c.pc = 0x003287A0u; return; } if (c.pc != 0x0032FE04u) [[unlikely]] return; }
L_0032FE04:
    set32(c.r[4], c.r[17].w[0] + 128u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032FE10u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0023(c, 199u, depth + 1u); else { c.pc = 0x0018DF40u; return; } if (c.pc != 0x0032FE10u) [[unlikely]] return; }
L_0032FE10:
    set32(c.r[4], c.r[17].w[0] + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032FE1Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0023(c, 199u, depth + 1u); else { c.pc = 0x0018DF40u; return; } if (c.pc != 0x0032FE1Cu) [[unlikely]] return; }
L_0032FE1C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032FE28u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000F(c, 266u, depth + 1u); else { c.pc = 0x0013E5B0u; return; } if (c.pc != 0x0032FE28u) [[unlikely]] return; }
L_0032FE28:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0032FE44; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032FE40u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x0032FE40u) [[unlikely]] return; }
L_0032FE40:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0032FE44:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0032FE60:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0032FFC4; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 23488u);
    set32(c.r[2], c.r[2].w[0] + 23576u);
    st32((c.r[17].w[0]), c.r[3].w[0]);
    st32((c.r[17].w[0] + 20u), c.r[2].w[0]);
    c.r[2].d[0] = ld8((c.r[17].w[0] + 2288u));
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], c.r[17].w[0] + 208u);  if (t) { goto L_0032FEAC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032FEA8u);  if (depth < kMaxDepth) unit_008B(c, 190u, depth + 1u); else { c.pc = 0x0032E1D0u; return; } if (c.pc != 0x0032FEA8u) [[unlikely]] return; }
L_0032FEA8:
    set32(c.r[2], c.r[17].w[0] + 208u);
    c.budget -= 1;
L_0032FEAC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0032FFA4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[4], c.r[17].w[0] + 1360u);
    set32(c.r[2], c.r[2].w[0] + 23664u);
    set32(c.r[5], 0u - 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032FECCu); st32((c.r[17].w[0] + 208u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_008A(c, 126u, depth + 1u); else { c.pc = 0x00329390u; return; } if (c.pc != 0x0032FECCu) [[unlikely]] return; }
L_0032FECC:
    set32(c.r[4], c.r[17].w[0] + 1104u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);  if (t) { goto L_0032FEF8; } }
    set32(c.r[2], c.r[2].w[0] + 21488u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[17].w[0] + 1280u), c.r[2].w[0]);  if (t) { goto L_0032FEF8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 17408u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032FEF8u); st32((c.r[17].w[0] + 1280u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0012(c, 264u, depth + 1u); else { c.pc = 0x0014ADA0u; return; } if (c.pc != 0x0032FEF8u) [[unlikely]] return; }
L_0032FEF8:
    set32(c.r[4], c.r[17].w[0] + 1076u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032FF04u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008A(c, 215u, depth + 1u); else { c.pc = 0x0032A270u; return; } if (c.pc != 0x0032FF04u) [[unlikely]] return; }
L_0032FF04:
    set32(c.r[4], c.r[17].w[0] + 1048u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032FF10u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008A(c, 215u, depth + 1u); else { c.pc = 0x0032A270u; return; } if (c.pc != 0x0032FF10u) [[unlikely]] return; }
L_0032FF10:
    set32(c.r[4], c.r[17].w[0] + 1020u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032FF1Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008A(c, 215u, depth + 1u); else { c.pc = 0x0032A270u; return; } if (c.pc != 0x0032FF1Cu) [[unlikely]] return; }
L_0032FF1C:
    set32(c.r[4], c.r[17].w[0] + 992u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032FF28u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008A(c, 215u, depth + 1u); else { c.pc = 0x0032A270u; return; } if (c.pc != 0x0032FF28u) [[unlikely]] return; }
L_0032FF28:
    set32(c.r[4], c.r[17].w[0] + 964u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032FF34u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008A(c, 215u, depth + 1u); else { c.pc = 0x0032A270u; return; } if (c.pc != 0x0032FF34u) [[unlikely]] return; }
L_0032FF34:
    set32(c.r[4], c.r[17].w[0] + 936u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032FF40u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008A(c, 215u, depth + 1u); else { c.pc = 0x0032A270u; return; } if (c.pc != 0x0032FF40u) [[unlikely]] return; }
L_0032FF40:
    set32(c.r[4], c.r[17].w[0] + 908u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032FF4Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008A(c, 215u, depth + 1u); else { c.pc = 0x0032A270u; return; } if (c.pc != 0x0032FF4Cu) [[unlikely]] return; }
L_0032FF4C:
    set32(c.r[4], c.r[17].w[0] + 880u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032FF58u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008A(c, 215u, depth + 1u); else { c.pc = 0x0032A270u; return; } if (c.pc != 0x0032FF58u) [[unlikely]] return; }
L_0032FF58:
    set32(c.r[4], c.r[17].w[0] + 688u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032FF64u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008A(c, 261u, depth + 1u); else { c.pc = 0x0032AF10u; return; } if (c.pc != 0x0032FF64u) [[unlikely]] return; }
L_0032FF64:
    set32(c.r[4], c.r[17].w[0] + 496u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032FF70u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008A(c, 261u, depth + 1u); else { c.pc = 0x0032AF10u; return; } if (c.pc != 0x0032FF70u) [[unlikely]] return; }
L_0032FF70:
    set32(c.r[4], c.r[17].w[0] + 448u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032FF7Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008A(c, 53u, depth + 1u); else { c.pc = 0x003287A0u; return; } if (c.pc != 0x0032FF7Cu) [[unlikely]] return; }
L_0032FF7C:
    set32(c.r[4], c.r[17].w[0] + 336u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032FF88u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0023(c, 199u, depth + 1u); else { c.pc = 0x0018DF40u; return; } if (c.pc != 0x0032FF88u) [[unlikely]] return; }
L_0032FF88:
    set32(c.r[4], c.r[17].w[0] + 224u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032FF94u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0023(c, 199u, depth + 1u); else { c.pc = 0x0018DF40u; return; } if (c.pc != 0x0032FF94u) [[unlikely]] return; }
L_0032FF94:
    set32(c.r[4], c.r[17].w[0] + 208u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032FFA0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000F(c, 266u, depth + 1u); else { c.pc = 0x0013E5B0u; return; } if (c.pc != 0x0032FFA0u) [[unlikely]] return; }
L_0032FFA0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0032FFA4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032FFACu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0087(c, 359u, depth + 1u); else { c.pc = 0x0031F410u; return; } if (c.pc != 0x0032FFACu) [[unlikely]] return; }
L_0032FFAC:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0032FFC8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032FFC4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x0032FFC4u) [[unlikely]] return; }
L_0032FFC4:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0032FFC8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0032FFE0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], 0u + 8u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0] + 32u), c.r[2].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00330000u); set32(c.r[4], 0u + 64u);  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x001001F0u; return; } if (c.pc != 0x00330000u) [[unlikely]] return; }
    [[clang::musttail]] return unit_008C(c, 1u, depth);
}

}
