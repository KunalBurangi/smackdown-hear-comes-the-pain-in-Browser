#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0066[4096] = {
    1, 0, 2, 0, 3, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 9, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0,
    0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0,
    0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    18, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 25, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    29, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 33, 0,
    0, 0, 0, 0, 34, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0,
    38, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 42, 0, 0, 0,
    43, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 46, 0, 0, 0, 47, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 50, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 54, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 57, 0, 0, 58, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 60, 0, 0,
    61, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 63,
    0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0,
    0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 74, 0, 0, 75, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 77, 0, 78, 79, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0,
    0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 83, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 86, 0, 0, 87, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0,
    0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 91, 0, 92, 0, 0, 0, 0, 0, 93, 0, 0, 0,
    94, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 98, 0, 0, 99, 0, 100, 0, 101,
    0, 0, 102, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0,
    0, 107, 0, 0, 108, 0, 0, 0, 0, 0, 0, 109, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 112, 0,
    0, 0, 0, 0, 0, 0, 113, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0,
    117, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 121,
    0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 0, 0, 123, 0, 124, 0, 0, 0, 0, 125, 0, 126, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0,
    128, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 129, 0, 130, 0, 0, 0, 0, 0, 131, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0,
    138, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 140, 0, 141, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 143, 0, 0, 0, 144, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 0, 151, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 157, 158, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 160, 0, 0, 0, 161, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 163, 0,
    0, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 0, 0, 166, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    169, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 172, 173, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 174, 0, 0, 0, 175, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 177, 0, 0, 0, 0, 0, 0,
    0, 0, 178, 0, 0, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 0, 181, 0, 0, 0,
    182, 0, 0, 0, 183, 0, 0, 0, 184, 0, 0, 0, 185, 0, 0, 0, 0, 0, 0, 186, 0, 0, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 0, 191, 0, 0, 0,
    0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 0, 0, 0, 194, 0, 0, 0, 195, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 199, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 200, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 0, 0, 0, 202, 0,
    203, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 204, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    205, 0, 0, 0, 0, 0, 0, 0, 206, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 207, 0, 0, 0,
    208, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 209, 0, 0, 0, 210, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 211, 0, 0, 0, 0, 212, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 0, 0, 214, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 215, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 217, 0, 0, 218, 0, 0, 0, 0, 0, 0, 219, 0, 0, 0, 0, 0, 0, 220, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 0, 222, 0, 0, 0, 223, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 224, 0, 0, 0, 0, 0, 0, 225, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 226, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 227, 0, 0, 0, 0, 228, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 229, 0, 0, 0, 0, 230, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 231, 0, 0, 0,
    0, 0, 232, 0, 0, 0, 0, 0, 233, 0, 0, 0, 0, 234, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 235, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 236, 0, 0, 0,
    0, 0, 237, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 238, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 239, 0, 0, 0, 0, 0, 240, 0, 0, 0, 0, 0, 241, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 242, 0, 0, 0, 0, 0, 0, 0, 0, 0, 243, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 244, 0, 0, 0, 0, 0, 0, 245, 0, 0, 246, 0, 0, 0, 247, 0, 0, 0, 248, 0, 0, 0, 249, 0, 0, 0, 0, 0,
    0, 0, 250, 0, 0, 0, 0, 0, 0, 0, 0, 0, 251, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 252, 0, 0, 0,
    0, 0, 0, 253, 0, 0, 0, 0, 0, 0, 254, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 256, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 257, 0, 0, 0, 0, 258, 0, 0, 0, 259, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 260, 0, 0, 261, 0, 0, 0, 0, 0, 262, 0, 0, 0, 0, 0, 0, 263, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 264, 0, 0, 0, 0, 0, 0, 265, 0, 0, 0, 0, 0, 0, 0, 0, 266, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 267, 0, 0, 0, 0, 0, 268, 0, 0, 0, 0, 0, 269, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 270, 0, 0, 271, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 272, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 273, 0, 0, 0, 0, 0, 0, 0, 274, 0, 0, 0, 275, 0, 0, 0,
    276, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 277, 0, 0, 0, 0, 0, 278, 0, 0, 0, 0, 0, 279, 0, 0, 0,
    280, 0, 0, 0, 281, 0, 0, 0, 282, 0, 0, 0, 283, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 284, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 285, 0, 0, 0, 0, 0, 286, 0, 0, 0, 0, 0, 0, 0, 287, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 288, 0, 289, 0,
    0, 290, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    291, 0, 0, 0, 0, 0, 0, 0, 0, 292, 0, 0, 293, 0, 294, 0, 0, 0, 0, 0, 0, 0, 0, 0, 295, 0, 0, 296, 0, 297, 0, 0,
    0, 0, 0, 0, 0, 298, 0, 0, 299, 0, 300, 0, 0, 0, 0, 0, 0, 301, 0, 0, 302, 0, 303, 0, 0, 0, 0, 0, 0, 304, 0, 0,
    305, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 306, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 307, 0, 0, 308, 0, 0, 309, 0,
    0, 0, 0, 0, 310, 0, 0, 0, 0, 0, 0, 0, 311, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    312, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 313, 0, 0, 0, 314, 0, 0, 0, 0, 0, 0, 0, 0, 0, 315, 0, 0, 0, 0, 0,
    316, 0, 0, 0, 0, 0, 0, 0, 317, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 318, 0, 319, 0, 0, 320, 0, 0, 321, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 322, 0, 0, 0, 0, 0, 0, 0, 0, 323, 0, 0, 324, 0, 325, 0, 0, 0, 0, 0, 0, 0, 0, 0, 326,
    0, 0, 327, 0, 328, 0, 0, 0, 0, 0, 0, 0, 329, 0, 0, 330, 0, 331, 0, 0, 0, 0, 0, 0, 332, 0, 0, 333, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    334, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 335, 0, 0,
    336, 0, 0, 337, 0, 0, 338, 0, 0, 0, 0, 0, 339, 0, 0, 0, 0, 0, 0, 0, 340, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 341, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 342, 0, 0, 0, 0, 0, 0, 343, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 344, 0, 0, 0, 0, 0, 0, 0, 0, 345, 0, 0, 0, 0,
    346, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 347, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 348, 0, 0, 0, 349, 0, 0, 0, 0, 0,
    350, 0, 0, 0, 0, 0, 0, 0, 0, 351, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 352, 0, 0, 0, 0, 353, 0, 0, 0, 0, 0, 0, 0, 0, 0, 354, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 355, 0, 0,
    356, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 357, 0, 0, 0, 0, 0, 358, 0, 0, 0, 0, 0, 359, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 360, 0, 0, 0, 0, 0, 0, 0, 0, 361, 0, 0, 0, 0, 0, 362, 0, 0, 0, 363, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 364, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 365, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 366, 0, 0, 0, 0, 0, 0, 0, 367, 0, 0, 0, 368, 0, 0, 0, 369, 0, 0, 0, 370, 0, 0, 0, 371, 0, 0, 0,
    372, 0, 0, 0, 373, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 374, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 375, 0, 0, 0, 0,
    0, 376, 0, 0, 0, 0, 0, 0, 0, 377, 0, 0, 0, 0, 0, 378, 0, 0, 0, 0, 0, 379, 0, 0, 0, 0, 0, 380, 0, 0, 381, 0,
    0, 0, 0, 0, 382, 0, 0, 0, 0, 0, 0, 0, 383, 0, 0, 0, 0, 0, 0, 0, 384, 0, 0, 0, 0, 0, 0, 0, 385, 0, 0, 0,
    0, 0, 0, 0, 386, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 387, 0, 0, 0, 0, 0, 388, 0, 0, 0, 0, 0, 389, 0, 0, 0, 0,
};

void unit_0066(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_00298000;
    case 2u: goto L_00298008;
    case 3u: goto L_00298010;
    case 4u: goto L_00298030;
    case 5u: goto L_00298048;
    case 6u: goto L_00298078;
    case 7u: goto L_002980B8;
    case 8u: goto L_002980C0;
    case 9u: goto L_00298104;
    case 10u: goto L_0029810C;
    case 11u: goto L_00298154;
    case 12u: goto L_00298170;
    case 13u: goto L_00298184;
    case 14u: goto L_002981B0;
    case 15u: goto L_002981F0;
    case 16u: goto L_00298204;
    case 17u: goto L_00298230;
    case 18u: goto L_00298280;
    case 19u: goto L_00298294;
    case 20u: goto L_002982C0;
    case 21u: goto L_002982E4;
    case 22u: goto L_00298310;
    case 23u: goto L_00298340;
    case 24u: goto L_00298358;
    case 25u: goto L_00298370;
    case 26u: goto L_002983A0;
    case 27u: goto L_002983B8;
    case 28u: goto L_002983D0;
    case 29u: goto L_00298400;
    case 30u: goto L_00298418;
    case 31u: goto L_00298430;
    case 32u: goto L_00298460;
    case 33u: goto L_00298478;
    case 34u: goto L_00298490;
    case 35u: goto L_002984A0;
    case 36u: goto L_002984D0;
    case 37u: goto L_002984E8;
    case 38u: goto L_00298500;
    case 39u: goto L_00298510;
    case 40u: goto L_00298540;
    case 41u: goto L_00298558;
    case 42u: goto L_00298570;
    case 43u: goto L_00298580;
    case 44u: goto L_002985B0;
    case 45u: goto L_002985C8;
    case 46u: goto L_002985E0;
    case 47u: goto L_002985F0;
    case 48u: goto L_00298620;
    case 49u: goto L_00298638;
    case 50u: goto L_00298650;
    case 51u: goto L_00298660;
    case 52u: goto L_00298690;
    case 53u: goto L_002986A8;
    case 54u: goto L_002986C0;
    case 55u: goto L_002986D0;
    case 56u: goto L_002987AC;
    case 57u: goto L_002987B8;
    case 58u: goto L_002987C4;
    case 59u: goto L_002987E4;
    case 60u: goto L_002987F4;
    case 61u: goto L_00298800;
    case 62u: goto L_0029880C;
    case 63u: goto L_0029887C;
    case 64u: goto L_00298898;
    case 65u: goto L_002988A8;
    case 66u: goto L_002988D8;
    case 67u: goto L_00298960;
    case 68u: goto L_002989F0;
    case 69u: goto L_00298A3C;
    case 70u: goto L_00298A4C;
    case 71u: goto L_00298A70;
    case 72u: goto L_00298A88;
    case 73u: goto L_00298AB0;
    case 74u: goto L_00298AC4;
    case 75u: goto L_00298AD0;
    case 76u: goto L_00298ADC;
    case 77u: goto L_00298B10;
    case 78u: goto L_00298B18;
    case 79u: goto L_00298B1C;
    case 80u: goto L_00298B70;
    case 81u: goto L_00298B90;
    case 82u: goto L_00298BE0;
    case 83u: goto L_00298C08;
    case 84u: goto L_00298C1C;
    case 85u: goto L_00298C3C;
    case 86u: goto L_00298C48;
    case 87u: goto L_00298C54;
    case 88u: goto L_00298C6C;
    case 89u: goto L_00298C90;
    case 90u: goto L_00298CC0;
    case 91u: goto L_00298CD0;
    case 92u: goto L_00298CD8;
    case 93u: goto L_00298CF0;
    case 94u: goto L_00298D00;
    case 95u: goto L_00298D14;
    case 96u: goto L_00298D2C;
    case 97u: goto L_00298D44;
    case 98u: goto L_00298D60;
    case 99u: goto L_00298D6C;
    case 100u: goto L_00298D74;
    case 101u: goto L_00298D7C;
    case 102u: goto L_00298D88;
    case 103u: goto L_00298D9C;
    case 104u: goto L_00298DB8;
    case 105u: goto L_00298DCC;
    case 106u: goto L_00298DE4;
    case 107u: goto L_00298E04;
    case 108u: goto L_00298E10;
    case 109u: goto L_00298E2C;
    case 110u: goto L_00298E3C;
    case 111u: goto L_00298E5C;
    case 112u: goto L_00298E78;
    case 113u: goto L_00298E98;
    case 114u: goto L_00298EA4;
    case 115u: goto L_00298ED0;
    case 116u: goto L_00298EEC;
    case 117u: goto L_00298F00;
    case 118u: goto L_00298F20;
    case 119u: goto L_00299034;
    case 120u: goto L_0029906C;
    case 121u: goto L_0029907C;
    case 122u: goto L_00299090;
    case 123u: goto L_002990B0;
    case 124u: goto L_002990B8;
    case 125u: goto L_002990CC;
    case 126u: goto L_002990D4;
    case 127u: goto L_002990EC;
    case 128u: goto L_00299100;
    case 129u: goto L_00299158;
    case 130u: goto L_00299160;
    case 131u: goto L_00299178;
    case 132u: goto L_0029925C;
    case 133u: goto L_00299320;
    case 134u: goto L_00299340;
    case 135u: goto L_00299360;
    case 136u: goto L_002993BC;
    case 137u: goto L_002993E8;
    case 138u: goto L_00299400;
    case 139u: goto L_00299418;
    case 140u: goto L_00299430;
    case 141u: goto L_00299438;
    case 142u: goto L_00299550;
    case 143u: goto L_00299560;
    case 144u: goto L_00299570;
    case 145u: goto L_002995D0;
    case 146u: goto L_002995E0;
    case 147u: goto L_002996AC;
    case 148u: goto L_0029978C;
    case 149u: goto L_002997B0;
    case 150u: goto L_002997D4;
    case 151u: goto L_002997F8;
    case 152u: goto L_00299820;
    case 153u: goto L_00299868;
    case 154u: goto L_00299894;
    case 155u: goto L_002998AC;
    case 156u: goto L_002998C4;
    case 157u: goto L_002998DC;
    case 158u: goto L_002998E0;
    case 159u: goto L_00299924;
    case 160u: goto L_00299A28;
    case 161u: goto L_00299A38;
    case 162u: goto L_00299A48;
    case 163u: goto L_00299A78;
    case 164u: goto L_00299A9C;
    case 165u: goto L_00299AC0;
    case 166u: goto L_00299AE4;
    case 167u: goto L_00299B10;
    case 168u: goto L_00299B54;
    case 169u: goto L_00299B80;
    case 170u: goto L_00299B98;
    case 171u: goto L_00299BB0;
    case 172u: goto L_00299BC8;
    case 173u: goto L_00299BCC;
    case 174u: goto L_00299D14;
    case 175u: goto L_00299D24;
    case 176u: goto L_00299D34;
    case 177u: goto L_00299D64;
    case 178u: goto L_00299D88;
    case 179u: goto L_00299DAC;
    case 180u: goto L_00299DD0;
    case 181u: goto L_00299DF0;
    case 182u: goto L_00299E00;
    case 183u: goto L_00299E10;
    case 184u: goto L_00299E20;
    case 185u: goto L_00299E30;
    case 186u: goto L_00299E4C;
    case 187u: goto L_00299E70;
    case 188u: goto L_00299EA0;
    case 189u: goto L_00299EB8;
    case 190u: goto L_00299ED0;
    case 191u: goto L_00299EF0;
    case 192u: goto L_00299F10;
    case 193u: goto L_00299F30;
    case 194u: goto L_00299F58;
    case 195u: goto L_00299F68;
    case 196u: goto L_00299FA0;
    case 197u: goto L_00299FBC;
    case 198u: goto L_00299FD8;
    case 199u: goto L_0029A010;
    case 200u: goto L_0029A088;
    case 201u: goto L_0029A0D0;
    case 202u: goto L_0029A0F8;
    case 203u: goto L_0029A100;
    case 204u: goto L_0029A13C;
    case 205u: goto L_0029A180;
    case 206u: goto L_0029A1A0;
    case 207u: goto L_0029A1F0;
    case 208u: goto L_0029A200;
    case 209u: goto L_0029A254;
    case 210u: goto L_0029A264;
    case 211u: goto L_0029A2D4;
    case 212u: goto L_0029A2E8;
    case 213u: goto L_0029A350;
    case 214u: goto L_0029A370;
    case 215u: goto L_0029A3D0;
    case 216u: goto L_0029A400;
    case 217u: goto L_0029A428;
    case 218u: goto L_0029A434;
    case 219u: goto L_0029A450;
    case 220u: goto L_0029A46C;
    case 221u: goto L_0029A4C0;
    case 222u: goto L_0029A4E0;
    case 223u: goto L_0029A4F0;
    case 224u: goto L_0029A534;
    case 225u: goto L_0029A550;
    case 226u: goto L_0029A584;
    case 227u: goto L_0029A5B0;
    case 228u: goto L_0029A5C4;
    case 229u: goto L_0029A62C;
    case 230u: goto L_0029A640;
    case 231u: goto L_0029A670;
    case 232u: goto L_0029A688;
    case 233u: goto L_0029A6A0;
    case 234u: goto L_0029A6B4;
    case 235u: goto L_0029A740;
    case 236u: goto L_0029A770;
    case 237u: goto L_0029A788;
    case 238u: goto L_0029A7E0;
    case 239u: goto L_0029A810;
    case 240u: goto L_0029A828;
    case 241u: goto L_0029A840;
    case 242u: goto L_0029A89C;
    case 243u: goto L_0029A8C4;
    case 244u: goto L_0029A910;
    case 245u: goto L_0029A92C;
    case 246u: goto L_0029A938;
    case 247u: goto L_0029A948;
    case 248u: goto L_0029A958;
    case 249u: goto L_0029A968;
    case 250u: goto L_0029A988;
    case 251u: goto L_0029A9B0;
    case 252u: goto L_0029A9F0;
    case 253u: goto L_0029AA0C;
    case 254u: goto L_0029AA28;
    case 255u: goto L_0029AA60;
    case 256u: goto L_0029AA88;
    case 257u: goto L_0029AACC;
    case 258u: goto L_0029AAE0;
    case 259u: goto L_0029AAF0;
    case 260u: goto L_0029AB30;
    case 261u: goto L_0029AB3C;
    case 262u: goto L_0029AB54;
    case 263u: goto L_0029AB70;
    case 264u: goto L_0029AC30;
    case 265u: goto L_0029AC4C;
    case 266u: goto L_0029AC70;
    case 267u: goto L_0029ACA0;
    case 268u: goto L_0029ACB8;
    case 269u: goto L_0029ACD0;
    case 270u: goto L_0029AD04;
    case 271u: goto L_0029AD10;
    case 272u: goto L_0029AD84;
    case 273u: goto L_0029ADC0;
    case 274u: goto L_0029ADE0;
    case 275u: goto L_0029ADF0;
    case 276u: goto L_0029AE00;
    case 277u: goto L_0029AE40;
    case 278u: goto L_0029AE58;
    case 279u: goto L_0029AE70;
    case 280u: goto L_0029AE80;
    case 281u: goto L_0029AE90;
    case 282u: goto L_0029AEA0;
    case 283u: goto L_0029AEB0;
    case 284u: goto L_0029AEE0;
    case 285u: goto L_0029AF08;
    case 286u: goto L_0029AF20;
    case 287u: goto L_0029AF40;
    case 288u: goto L_0029AF70;
    case 289u: goto L_0029AF78;
    case 290u: goto L_0029AF84;
    case 291u: goto L_0029B000;
    case 292u: goto L_0029B024;
    case 293u: goto L_0029B030;
    case 294u: goto L_0029B038;
    case 295u: goto L_0029B060;
    case 296u: goto L_0029B06C;
    case 297u: goto L_0029B074;
    case 298u: goto L_0029B094;
    case 299u: goto L_0029B0A0;
    case 300u: goto L_0029B0A8;
    case 301u: goto L_0029B0C4;
    case 302u: goto L_0029B0D0;
    case 303u: goto L_0029B0D8;
    case 304u: goto L_0029B0F4;
    case 305u: goto L_0029B100;
    case 306u: goto L_0029B190;
    case 307u: goto L_0029B1E0;
    case 308u: goto L_0029B1EC;
    case 309u: goto L_0029B1F8;
    case 310u: goto L_0029B210;
    case 311u: goto L_0029B230;
    case 312u: goto L_0029B280;
    case 313u: goto L_0029B2B0;
    case 314u: goto L_0029B2C0;
    case 315u: goto L_0029B2E8;
    case 316u: goto L_0029B300;
    case 317u: goto L_0029B320;
    case 318u: goto L_0029B350;
    case 319u: goto L_0029B358;
    case 320u: goto L_0029B364;
    case 321u: goto L_0029B370;
    case 322u: goto L_0029B41C;
    case 323u: goto L_0029B440;
    case 324u: goto L_0029B44C;
    case 325u: goto L_0029B454;
    case 326u: goto L_0029B47C;
    case 327u: goto L_0029B488;
    case 328u: goto L_0029B490;
    case 329u: goto L_0029B4B0;
    case 330u: goto L_0029B4BC;
    case 331u: goto L_0029B4C4;
    case 332u: goto L_0029B4E0;
    case 333u: goto L_0029B4EC;
    case 334u: goto L_0029B580;
    case 335u: goto L_0029B5F4;
    case 336u: goto L_0029B600;
    case 337u: goto L_0029B60C;
    case 338u: goto L_0029B618;
    case 339u: goto L_0029B630;
    case 340u: goto L_0029B650;
    case 341u: goto L_0029B684;
    case 342u: goto L_0029B6B4;
    case 343u: goto L_0029B6D0;
    case 344u: goto L_0029B748;
    case 345u: goto L_0029B76C;
    case 346u: goto L_0029B780;
    case 347u: goto L_0029B7AC;
    case 348u: goto L_0029B7D8;
    case 349u: goto L_0029B7E8;
    case 350u: goto L_0029B800;
    case 351u: goto L_0029B824;
    case 352u: goto L_0029B884;
    case 353u: goto L_0029B898;
    case 354u: goto L_0029B8C0;
    case 355u: goto L_0029B8F4;
    case 356u: goto L_0029B900;
    case 357u: goto L_0029B930;
    case 358u: goto L_0029B948;
    case 359u: goto L_0029B960;
    case 360u: goto L_0029B988;
    case 361u: goto L_0029B9AC;
    case 362u: goto L_0029B9C4;
    case 363u: goto L_0029B9D4;
    case 364u: goto L_0029BAF4;
    case 365u: goto L_0029BC9C;
    case 366u: goto L_0029BD10;
    case 367u: goto L_0029BD30;
    case 368u: goto L_0029BD40;
    case 369u: goto L_0029BD50;
    case 370u: goto L_0029BD60;
    case 371u: goto L_0029BD70;
    case 372u: goto L_0029BD80;
    case 373u: goto L_0029BD90;
    case 374u: goto L_0029BE30;
    case 375u: goto L_0029BE6C;
    case 376u: goto L_0029BE84;
    case 377u: goto L_0029BEA4;
    case 378u: goto L_0029BEBC;
    case 379u: goto L_0029BED4;
    case 380u: goto L_0029BEEC;
    case 381u: goto L_0029BEF8;
    case 382u: goto L_0029BF10;
    case 383u: goto L_0029BF30;
    case 384u: goto L_0029BF50;
    case 385u: goto L_0029BF70;
    case 386u: goto L_0029BF90;
    case 387u: goto L_0029BFBC;
    case 388u: goto L_0029BFD4;
    case 389u: goto L_0029BFEC;
    default: bad_entry(c, 0x00298000u); return;
    }
L_00298000:
    st16((c.r[2].w[0] + 20u), static_cast<std::uint16_t>(0u));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 2;
L_00298008:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00298010u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 98u, depth + 1u); else { c.pc = 0x00271A60u; return; } if (c.pc != 0x00298010u) [[unlikely]] return; }
L_00298010:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00298030:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00298048u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_005C(c, 107u, depth + 1u); else { c.pc = 0x00271B70u; return; } if (c.pc != 0x00298048u) [[unlikely]] return; }
L_00298048:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] + 6128u);
    st32((c.r[17].w[0] + 56u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 432u));
    c.r[2].d[0] = c.r[2].d[0] << 62;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[17].w[0] + 8u);  if (t) { goto L_002980B8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00298078u); set32(c.r[4], 0u + 20u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00298078u) [[unlikely]] return; }
L_00298078:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002980B0; } }
    set32(c.r[5], ld32((c.r[17].w[0] + 4u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[4], c.r[4].w[0] + 6048u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 5504u);
    st32((c.r[2].w[0] + 16u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 12u), c.r[5].w[0]);
    st32((c.r[2].w[0]), 0u);
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 8u), 0u);
    st32((c.r[2].w[0] + 16u), c.r[3].w[0]);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 12;
L_002980B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002980B8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 98u, depth + 1u); else { c.pc = 0x00271A60u; return; } if (c.pc != 0x002980B8u) [[unlikely]] return; }
L_002980B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002980C0u); set32(c.r[4], 0u + 24u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x002980C0u) [[unlikely]] return; }
L_002980C0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002980FC; } }
    set32(c.r[5], ld32((c.r[17].w[0] + 4u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[4], c.r[4].w[0] + 6048u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 3008u);
    st32((c.r[2].w[0] + 16u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 12u), c.r[5].w[0]);
    st32((c.r[2].w[0]), 0u);
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 8u), 0u);
    st32((c.r[2].w[0] + 16u), c.r[3].w[0]);
    st16((c.r[2].w[0] + 20u), static_cast<std::uint16_t>(0u));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 13;
L_002980FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00298104u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 98u, depth + 1u); else { c.pc = 0x00271A60u; return; } if (c.pc != 0x00298104u) [[unlikely]] return; }
L_00298104:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029810Cu); set32(c.r[4], 0u + 24u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0029810Cu) [[unlikely]] return; }
L_0029810C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0029814C; } }
    set32(c.r[5], ld32((c.r[17].w[0] + 4u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[4], c.r[4].w[0] + 6048u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 2944u);
    st32((c.r[2].w[0] + 16u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 12u), c.r[5].w[0]);
    st32((c.r[2].w[0]), 0u);
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 8u), 0u);
    st32((c.r[2].w[0] + 16u), c.r[3].w[0]);
    c.r[3].d[0] = ld16((c.r[16].w[0] + 42u));
    st16((c.r[2].w[0] + 20u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 14;
L_0029814C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00298154u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 98u, depth + 1u); else { c.pc = 0x00271A60u; return; } if (c.pc != 0x00298154u) [[unlikely]] return; }
L_00298154:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00298170:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00298184u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 107u, depth + 1u); else { c.pc = 0x00271B70u; return; } if (c.pc != 0x00298184u) [[unlikely]] return; }
L_00298184:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] + 6112u);
    st32((c.r[16].w[0] + 56u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002981B0:
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[2], 0u + 256u);
    c.r[2].d[0] = c.r[2].d[0] << 32;
    set32(c.r[3], ld32((c.r[4].w[0] + 20u)));
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[3], ld32((c.r[3].w[0] + 984u)));
    c.r[3].d[0] = ld64((c.r[3].w[0] + 704u));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002981E8; } }
    set32(c.r[2], 0u + 1u);
    st8((c.r[4].w[0] + 133u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
L_002981E8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002981F0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00298204u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 107u, depth + 1u); else { c.pc = 0x00271B70u; return; } if (c.pc != 0x00298204u) [[unlikely]] return; }
L_00298204:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] + 6096u);
    st32((c.r[16].w[0] + 56u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00298230:
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 20u)));
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[2].w[0] + 984u)));
    c.r[3].d[0] = ld64((c.r[2].w[0] + 704u));
    c.r[2].d[0] = c.r[3].d[0] & 3ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00298268; } }
    c.r[2].d[0] = c.r[3].d[0] & 4ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00298270; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_00298268:
    st8((c.r[4].w[0] + 133u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_00298270:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00298280:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00298294u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 107u, depth + 1u); else { c.pc = 0x00271B70u; return; } if (c.pc != 0x00298294u) [[unlikely]] return; }
L_00298294:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] + 6080u);
    st32((c.r[16].w[0] + 56u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002982C0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[2].w[0] + 20u)));
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002982E4u); set32(c.r[4], ld32((c.r[2].w[0] + 984u)));  if (depth < kMaxDepth) unit_0059(c, 56u, depth + 1u); else { c.pc = 0x00264C70u; return; } if (c.pc != 0x002982E4u) [[unlikely]] return; }
L_002982E4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002982F8; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[3], 0u + 1u);
    st8((c.r[2].w[0] + 133u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
L_002982F8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[2].d[0] = 0ull + 0ull;
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00298310:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00298358; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 6080u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00298340u); st32((c.r[17].w[0] + 56u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_005C(c, 111u, depth + 1u); else { c.pc = 0x00271C40u; return; } if (c.pc != 0x00298340u) [[unlikely]] return; }
L_00298340:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0029835C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00298358u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x00298358u) [[unlikely]] return; }
L_00298358:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0029835C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00298370:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002983B8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 6096u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002983A0u); st32((c.r[17].w[0] + 56u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_005C(c, 111u, depth + 1u); else { c.pc = 0x00271C40u; return; } if (c.pc != 0x002983A0u) [[unlikely]] return; }
L_002983A0:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_002983BC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002983B8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x002983B8u) [[unlikely]] return; }
L_002983B8:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002983BC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002983D0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00298418; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 6112u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00298400u); st32((c.r[17].w[0] + 56u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_005C(c, 111u, depth + 1u); else { c.pc = 0x00271C40u; return; } if (c.pc != 0x00298400u) [[unlikely]] return; }
L_00298400:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0029841C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00298418u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x00298418u) [[unlikely]] return; }
L_00298418:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0029841C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00298430:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00298478; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 6128u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00298460u); st32((c.r[17].w[0] + 56u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_005C(c, 111u, depth + 1u); else { c.pc = 0x00271C40u; return; } if (c.pc != 0x00298460u) [[unlikely]] return; }
L_00298460:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0029847C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00298478u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x00298478u) [[unlikely]] return; }
L_00298478:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0029847C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00298490:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 1u);  c.pc = t; return; }
L_002984A0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002984E8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 6144u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002984D0u); st32((c.r[17].w[0] + 56u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_005C(c, 111u, depth + 1u); else { c.pc = 0x00271C40u; return; } if (c.pc != 0x002984D0u) [[unlikely]] return; }
L_002984D0:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_002984EC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002984E8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x002984E8u) [[unlikely]] return; }
L_002984E8:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002984EC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00298500:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 1u);  c.pc = t; return; }
L_00298510:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00298558; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 6160u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00298540u); st32((c.r[17].w[0] + 56u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_005C(c, 111u, depth + 1u); else { c.pc = 0x00271C40u; return; } if (c.pc != 0x00298540u) [[unlikely]] return; }
L_00298540:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0029855C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00298558u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x00298558u) [[unlikely]] return; }
L_00298558:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0029855C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00298570:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 1u);  c.pc = t; return; }
L_00298580:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002985C8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 6176u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002985B0u); st32((c.r[17].w[0] + 56u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_005C(c, 111u, depth + 1u); else { c.pc = 0x00271C40u; return; } if (c.pc != 0x002985B0u) [[unlikely]] return; }
L_002985B0:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_002985CC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002985C8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x002985C8u) [[unlikely]] return; }
L_002985C8:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002985CC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002985E0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 1u);  c.pc = t; return; }
L_002985F0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00298638; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 6192u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00298620u); st32((c.r[17].w[0] + 56u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_005C(c, 111u, depth + 1u); else { c.pc = 0x00271C40u; return; } if (c.pc != 0x00298620u) [[unlikely]] return; }
L_00298620:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0029863C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00298638u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x00298638u) [[unlikely]] return; }
L_00298638:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0029863C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00298650:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 1u);  c.pc = t; return; }
L_00298660:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002986A8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 6208u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00298690u); st32((c.r[17].w[0] + 56u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_005C(c, 111u, depth + 1u); else { c.pc = 0x00271C40u; return; } if (c.pc != 0x00298690u) [[unlikely]] return; }
L_00298690:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_002986AC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002986A8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x002986A8u) [[unlikely]] return; }
L_002986A8:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002986AC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002986C0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 1u);  c.pc = t; return; }
L_002986D0:
    set32(c.r[29], c.r[29].w[0] - 256u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] - 19376u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    set32(c.r[3], c.r[29].w[0] + 160u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[5], c.r[29].w[0] + 176u);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    ld128((c.r[2].w[0]) & ~15u, c.r[4]);
    set32(c.r[10], c.r[19].w[0] + 192u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    st128((c.r[5].w[0]) & ~15u, c.r[4]);
    set32(c.r[2], c.r[2].w[0] - 19360u);
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    st128((c.r[3].w[0]) & ~15u, c.r[2]);
    set32(c.r[17], ld32((c.r[1].w[0] + 20144u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[17].w[0] + c.r[1].w[0]);
    set32(c.r[16], ld32((c.r[1].w[0] + 1396u)));
    set32(c.r[2], c.r[16].w[0] + 160u);
    ld128((c.r[2].w[0]) & ~15u, c.r[6]);
    ld128((c.r[2].w[0] + 16u) & ~15u, c.r[7]);
    ld128((c.r[2].w[0] + 32u) & ~15u, c.r[8]);
    ld128((c.r[2].w[0] + 48u) & ~15u, c.r[9]);
    st128((c.r[10].w[0]) & ~15u, c.r[6]);
    st128((c.r[10].w[0] + 16u) & ~15u, c.r[7]);
    st128((c.r[10].w[0] + 32u) & ~15u, c.r[8]);
    st128((c.r[10].w[0] + 48u) & ~15u, c.r[9]);
    set32(c.r[3], c.r[16].w[0] + 224u);
    set32(c.r[2], c.r[19].w[0] + 128u);
    ld128((c.r[3].w[0]) & ~15u, c.r[6]);
    ld128((c.r[3].w[0] + 16u) & ~15u, c.r[7]);
    ld128((c.r[3].w[0] + 32u) & ~15u, c.r[8]);
    ld128((c.r[3].w[0] + 48u) & ~15u, c.r[9]);
    st128((c.r[2].w[0]) & ~15u, c.r[6]);
    st128((c.r[2].w[0] + 16u) & ~15u, c.r[7]);
    st128((c.r[2].w[0] + 32u) & ~15u, c.r[8]);
    st128((c.r[2].w[0] + 48u) & ~15u, c.r[9]);
    set32(c.r[2], c.r[29].w[0] + 192u);
    st128((c.r[2].w[0] + 48u) & ~15u, c.vu0.vf[0]);
    vu::mr32(c.vu0, 15u, 1u, 0u);
    st128((c.r[2].w[0] + 32u) & ~15u, c.vu0.vf[1]);
    vu::mr32(c.vu0, 15u, 2u, 1u);
    st128((c.r[2].w[0] + 16u) & ~15u, c.vu0.vf[2]);
    vu::mr32(c.vu0, 15u, 3u, 2u);
    st128((c.r[2].w[0]) & ~15u, c.vu0.vf[3]);
    c.f[12] = 0u;
    c.budget -= 55;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002987ACu); set32(c.r[4], c.r[29].w[0] + 192u);  if (depth < kMaxDepth) unit_0011(c, 29u, depth + 1u); else { c.pc = 0x00144640u; return; } if (c.pc != 0x002987ACu) [[unlikely]] return; }
L_002987AC:
    c.f[12] = 0u;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002987B8u); set32(c.r[4], c.r[29].w[0] + 192u);  if (depth < kMaxDepth) unit_0011(c, 30u, depth + 1u); else { c.pc = 0x001446D0u; return; } if (c.pc != 0x002987B8u) [[unlikely]] return; }
L_002987B8:
    c.f[12] = 0u;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002987C4u); set32(c.r[4], c.r[29].w[0] + 192u);  if (depth < kMaxDepth) unit_0011(c, 31u, depth + 1u); else { c.pc = 0x00144760u; return; } if (c.pc != 0x002987C4u) [[unlikely]] return; }
L_002987C4:
    ld128((c.r[29].w[0] + 176u) & ~15u, c.r[2]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 192u);
    st128((c.r[29].w[0] + 240u) & ~15u, c.r[2]);
    set32(c.r[25], ld32((c.r[16].w[0] + 152u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002987E4u); c.r[6].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002987E4u) [[unlikely]] return; }
L_002987E4:
    set32(c.r[25], ld32((c.r[16].w[0] + 152u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002987F4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002987F4u) [[unlikely]] return; }
L_002987F4:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00298800u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0013(c, 99u, depth + 1u); else { c.pc = 0x0014D7F0u; return; } if (c.pc != 0x00298800u) [[unlikely]] return; }
L_00298800:
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029880Cu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0013(c, 97u, depth + 1u); else { c.pc = 0x0014D740u; return; } if (c.pc != 0x0029880Cu) [[unlikely]] return; }
L_0029880C:
    set32(c.r[2], c.r[29].w[0] + 96u);
    ld128((c.r[2].w[0]) & ~15u, c.r[6]);
    ld128((c.r[2].w[0] + 16u) & ~15u, c.r[7]);
    ld128((c.r[2].w[0] + 32u) & ~15u, c.r[8]);
    ld128((c.r[2].w[0] + 48u) & ~15u, c.r[9]);
    st128((c.r[19].w[0]) & ~15u, c.r[6]);
    st128((c.r[19].w[0] + 16u) & ~15u, c.r[7]);
    st128((c.r[19].w[0] + 32u) & ~15u, c.r[8]);
    st128((c.r[19].w[0] + 48u) & ~15u, c.r[9]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[1].d[0] = c.r[1].d[0] | 976ull;
    set32(c.r[2], c.r[19].w[0] + 64u);
    set32(c.r[3], c.r[17].w[0] + c.r[1].w[0]);
    ld128((c.r[3].w[0]) & ~15u, c.r[6]);
    ld128((c.r[3].w[0] + 16u) & ~15u, c.r[7]);
    ld128((c.r[3].w[0] + 32u) & ~15u, c.r[8]);
    ld128((c.r[3].w[0] + 48u) & ~15u, c.r[9]);
    st128((c.r[2].w[0]) & ~15u, c.r[6]);
    st128((c.r[2].w[0] + 16u) & ~15u, c.r[7]);
    st128((c.r[2].w[0] + 32u) & ~15u, c.r[8]);
    st128((c.r[2].w[0] + 48u) & ~15u, c.r[9]);
    c.f[20] = 0u;
    c.budget -= 24;
    { const bool t = c.r[18].d[0] == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_00298874; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[20] = c.r[2].w[0];
    c.budget -= 2;
L_00298874:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].sd[0] < 3ll ? 1ull : 0ull;  if (t) { goto L_002988B0; } }
L_0029887C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.f[0] = c.r[2].w[0];
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = fp::sub(c.f[0], c.f[20]);
    c.f[13] = c.f[12];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00298898u); c.f[14] = c.f[12];  if (depth < kMaxDepth) unit_0013(c, 95u, depth + 1u); else { c.pc = 0x0014D6C0u; return; } if (c.pc != 0x00298898u) [[unlikely]] return; }
L_00298898:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002988A8u); set32(c.r[6], c.r[29].w[0] + 160u);  if (depth < kMaxDepth) unit_0013(c, 94u, depth + 1u); else { c.pc = 0x0014D670u; return; } if (c.pc != 0x002988A8u) [[unlikely]] return; }
L_002988A8:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 2;
L_002988B0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0029887Cu | kUnwind; return; } goto L_0029887C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.f[0] = c.r[2].w[0];
    c.f[12] = fp::add(c.f[0], c.f[20]);
    c.f[13] = c.f[12];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002988D8u); c.f[14] = c.f[12];  if (depth < kMaxDepth) unit_0013(c, 96u, depth + 1u); else { c.pc = 0x0014D700u; return; } if (c.pc != 0x002988D8u) [[unlikely]] return; }
L_002988D8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[1].w[0] + 28672u), 0u);
    c.r[2].d[0] = c.r[19].d[0] + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st32((c.r[1].w[0] + 28676u), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st32((c.r[1].w[0] + 28680u), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st32((c.r[1].w[0] + 28712u), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st32((c.r[1].w[0] + 28728u), c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st32((c.r[1].w[0] + 28856u), c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st32((c.r[1].w[0] + 28744u), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st32((c.r[1].w[0] + 28800u), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st32((c.r[1].w[0] + 28804u), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st32((c.r[1].w[0] + 28808u), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st32((c.r[1].w[0] + 28840u), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st32((c.r[1].w[0] + 28872u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 34;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 256u);  c.pc = t; return; }
L_00298960:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 9;
    { const bool t = c.r[19].d[0] == 0ull; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_00298A88; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], c.r[19].w[0] + 128u);
    set32(c.r[17], ld32((c.r[1].w[0] + 20144u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[17].w[0] + c.r[1].w[0]);
    set32(c.r[4], ld32((c.r[1].w[0] + 1396u)));
    set32(c.r[3], c.r[4].w[0] + 224u);
    ld128((c.r[2].w[0]) & ~15u, c.r[6]);
    ld128((c.r[2].w[0] + 16u) & ~15u, c.r[7]);
    ld128((c.r[2].w[0] + 32u) & ~15u, c.r[8]);
    ld128((c.r[2].w[0] + 48u) & ~15u, c.r[9]);
    st128((c.r[3].w[0]) & ~15u, c.r[6]);
    st128((c.r[3].w[0] + 16u) & ~15u, c.r[7]);
    st128((c.r[3].w[0] + 32u) & ~15u, c.r[8]);
    st128((c.r[3].w[0] + 48u) & ~15u, c.r[9]);
    set32(c.r[2], c.r[19].w[0] + 192u);
    set32(c.r[3], c.r[4].w[0] + 160u);
    ld128((c.r[2].w[0]) & ~15u, c.r[6]);
    ld128((c.r[2].w[0] + 16u) & ~15u, c.r[7]);
    ld128((c.r[2].w[0] + 32u) & ~15u, c.r[8]);
    ld128((c.r[2].w[0] + 48u) & ~15u, c.r[9]);
    st128((c.r[3].w[0]) & ~15u, c.r[6]);
    st128((c.r[3].w[0] + 16u) & ~15u, c.r[7]);
    st128((c.r[3].w[0] + 32u) & ~15u, c.r[8]);
    st128((c.r[3].w[0] + 48u) & ~15u, c.r[9]);
    c.budget -= 27;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_00298A50; } }
L_002989F0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[6], c.r[29].w[0] + 80u);
    set32(c.r[2], c.r[2].w[0] - 19344u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    ld128((c.r[2].w[0]) & ~15u, c.r[3]);
    set32(c.r[2], c.r[16].w[0] << 4);
    st128((c.r[6].w[0]) & ~15u, c.r[3]);
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    c.f[0] = ld32((c.r[2].w[0] + 64u));
    st32((c.r[29].w[0] + 80u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 68u));
    st32((c.r[29].w[0] + 84u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 72u));
    st32((c.r[29].w[0] + 88u), c.f[0]);
    c.f[12] = ld32((c.r[2].w[0]));
    c.f[13] = ld32((c.r[2].w[0] + 4u));
    c.f[14] = ld32((c.r[2].w[0] + 8u));
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00298A3Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0013(c, 95u, depth + 1u); else { c.pc = 0x0014D6C0u; return; } if (c.pc != 0x00298A3Cu) [[unlikely]] return; }
L_00298A3C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00298A4Cu); set32(c.r[6], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0013(c, 94u, depth + 1u); else { c.pc = 0x0014D670u; return; } if (c.pc != 0x00298A4Cu) [[unlikely]] return; }
L_00298A4C:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_00298A50:
    c.r[2].d[0] = c.r[16].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002989F0u | kUnwind; return; } goto L_002989F0; } }
    c.f[12] = ld32((c.r[19].w[0] + 48u));
    c.f[13] = ld32((c.r[19].w[0] + 52u));
    c.f[14] = ld32((c.r[19].w[0] + 56u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00298A70u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0013(c, 96u, depth + 1u); else { c.pc = 0x0014D700u; return; } if (c.pc != 0x00298A70u) [[unlikely]] return; }
L_00298A70:
    c.r[2].d[0] = c.r[18].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_00298A8C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00298A88u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x00298A88u) [[unlikely]] return; }
L_00298A88:
    c.r[2].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_00298A8C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_00298AB0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00298AC4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0012(c, 39u, depth + 1u); else { c.pc = 0x001486F0u; return; } if (c.pc != 0x00298AC4u) [[unlikely]] return; }
L_00298AC4:
    set32(c.r[4], c.r[16].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00298AD0u); set32(c.r[5], 0u + 8u);  if (depth < kMaxDepth) unit_000F(c, 264u, depth + 1u); else { c.pc = 0x0013E560u; return; } if (c.pc != 0x00298AD0u) [[unlikely]] return; }
L_00298AD0:
    set32(c.r[4], c.r[16].w[0] + 44u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00298ADCu); set32(c.r[5], 0u + 4u);  if (depth < kMaxDepth) unit_000F(c, 256u, depth + 1u); else { c.pc = 0x0013E440u; return; } if (c.pc != 0x00298ADCu) [[unlikely]] return; }
L_00298ADC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] + 6224u);
    set32(c.r[3], c.r[3].w[0] + 6240u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    st32((c.r[16].w[0] + 32u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + 6256u);
    st32((c.r[16].w[0] + 44u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[1].w[0] + 3840u)));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00298B10u); st32((c.r[29].w[0] + 44u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_003F(c, 299u, depth + 1u); else { c.pc = 0x001FF0D0u; return; } if (c.pc != 0x00298B10u) [[unlikely]] return; }
L_00298B10:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00298B18u); set32(c.r[4], 0u + 3u);  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x00298B18u) [[unlikely]] return; }
L_00298B18:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00298B1C:
    set32(c.r[2], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st32((c.r[3].w[0] + 124u), 0u);
    c.r[2].d[0] = c.r[4].sd[0] < 17ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[3].w[0] + 56u), 0u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00298B1Cu | kUnwind; return; } goto L_00298B1C; } }
    st32((c.r[16].w[0] + 228u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[16].w[0] + 192u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42200000u);
    st32((c.r[16].w[0] + 196u), 0u);
    st32((c.r[16].w[0] + 200u), 0u);
    st32((c.r[16].w[0] + 204u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 208u), 0u);
    st32((c.r[16].w[0] + 212u), 0u);
    st32((c.r[16].w[0] + 216u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 220u), c.r[3].w[0]);
    st8((c.r[16].w[0] + 52u), static_cast<std::uint8_t>(0u));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00298B70u); set32(c.r[4], ld32((c.r[29].w[0] + 44u)));  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x00298B70u) [[unlikely]] return; }
L_00298B70:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00298B90:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 9;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00298C6C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] + 6224u);
    set32(c.r[3], c.r[3].w[0] + 6240u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.r[19].d[0] = 0ull + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    st32((c.r[17].w[0] + 32u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + 6256u);
    st32((c.r[17].w[0] + 44u), c.r[2].w[0]);
    set32(c.r[2], c.r[19].w[0] << 2);
    c.budget -= 11;
L_00298BE0:
    set32(c.r[18], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[18].w[0] + 56u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00298C08; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00298C08; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 152u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00298C08u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00298C08u) [[unlikely]] return; }
L_00298C08:
    set32(c.r[4], ld32((c.r[18].w[0] + 124u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00298C20; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00298C1Cu);  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x00298C1Cu) [[unlikely]] return; }
L_00298C1C:
    st32((c.r[18].w[0] + 124u), 0u);
    c.budget -= 1;
L_00298C20:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.r[2].d[0] = c.r[19].sd[0] < 17ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[19].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00298BE0u | kUnwind; return; } goto L_00298BE0; } }
    set32(c.r[4], c.r[17].w[0] + 44u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00298C3Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E490u; return; } if (c.pc != 0x00298C3Cu) [[unlikely]] return; }
L_00298C3C:
    set32(c.r[4], c.r[17].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00298C48u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000F(c, 266u, depth + 1u); else { c.pc = 0x0013E5B0u; return; } if (c.pc != 0x00298C48u) [[unlikely]] return; }
L_00298C48:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00298C54u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0012(c, 42u, depth + 1u); else { c.pc = 0x00148750u; return; } if (c.pc != 0x00298C54u) [[unlikely]] return; }
L_00298C54:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00298C70; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00298C6Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x00298C6Cu) [[unlikely]] return; }
L_00298C6C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00298C70:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00298C90:
    set32(c.r[29], c.r[29].w[0] - 128u);
    c.r[7].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    set32(c.r[4], c.r[29].w[0] + 112u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00298CC0u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0017(c, 125u, depth + 1u); else { c.pc = 0x0015D850u; return; } if (c.pc != 0x00298CC0u) [[unlikely]] return; }
L_00298CC0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 3840u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00298CD0u); st32((c.r[29].w[0] + 124u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_003F(c, 299u, depth + 1u); else { c.pc = 0x001FF0D0u; return; } if (c.pc != 0x00298CD0u) [[unlikely]] return; }
L_00298CD0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00298CD8u); set32(c.r[4], 0u + 8u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00298CD8u) [[unlikely]] return; }
L_00298CD8:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[19].d[0] == 0ull; set32(c.r[4], c.r[29].w[0] + 112u);  if (t) { goto L_00298CF8; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00298CF0u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_0016(c, 410u, depth + 1u); else { c.pc = 0x0015B6A0u; return; } if (c.pc != 0x00298CF0u) [[unlikely]] return; }
L_00298CF0:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 2;
L_00298CF8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00298D00u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0017(c, 122u, depth + 1u); else { c.pc = 0x0015D740u; return; } if (c.pc != 0x00298D00u) [[unlikely]] return; }
L_00298D00:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[4], c.r[29].w[0] + 112u);  if (t) { goto L_00298D1C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00298D14u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 152u, depth + 1u); else { c.pc = 0x0015DC50u; return; } if (c.pc != 0x00298D14u) [[unlikely]] return; }
L_00298D14:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00298D24; } }
L_00298D1C:
    c.r[2].d[0] = 0ull + 0ull;
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 2;
L_00298D24:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00298D2Cu); set32(c.r[4], 0u + 16u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00298D2Cu) [[unlikely]] return; }
L_00298D2C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00298D48; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00298D44u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 89u, depth + 1u); else { c.pc = 0x0015D1B0u; return; } if (c.pc != 0x00298D44u) [[unlikely]] return; }
L_00298D44:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00298D48:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00420000u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 19328u);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00298D60u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0016(c, 424u, depth + 1u); else { c.pc = 0x0015B880u; return; } if (c.pc != 0x00298D60u) [[unlikely]] return; }
L_00298D60:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00298D6Cu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0017(c, 91u, depth + 1u); else { c.pc = 0x0015D1F0u; return; } if (c.pc != 0x00298D6Cu) [[unlikely]] return; }
L_00298D6C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00298D74u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 83u, depth + 1u); else { c.pc = 0x00141160u; return; } if (c.pc != 0x00298D74u) [[unlikely]] return; }
L_00298D74:
    c.r[18].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[18].w[0] + 1000u);
    c.budget -= 2;
L_00298D7C:
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00298D88u); c.r[5].d[0] = c.r[2].d[0] & 65535ull;  if (depth < kMaxDepth) unit_0017(c, 122u, depth + 1u); else { c.pc = 0x0015D740u; return; } if (c.pc != 0x00298D88u) [[unlikely]] return; }
L_00298D88:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[4], c.r[29].w[0] + 112u);  if (t) { goto L_00298DA4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00298D9Cu); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 144u, depth + 1u); else { c.pc = 0x0015DB40u; return; } if (c.pc != 0x00298D9Cu) [[unlikely]] return; }
L_00298D9C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00298DA8; } }
L_00298DA4:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00298DA8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00298E3C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00298DB8u);  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x001001F0u; return; } if (c.pc != 0x00298DB8u) [[unlikely]] return; }
L_00298DB8:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 112u);
    set32(c.r[2], c.r[18].w[0] + 1000u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00298DCCu); c.r[5].d[0] = c.r[2].d[0] & 65535ull;  if (depth < kMaxDepth) unit_0017(c, 122u, depth + 1u); else { c.pc = 0x0015D740u; return; } if (c.pc != 0x00298DCCu) [[unlikely]] return; }
L_00298DCC:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00298DE4; } }
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00298DE4u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 147u, depth + 1u); else { c.pc = 0x0015DBB0u; return; } if (c.pc != 0x00298DE4u) [[unlikely]] return; }
L_00298DE4:
    set32(c.r[2], c.r[18].w[0] << 2);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[16], c.r[20].w[0] + c.r[2].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00298E04u); set32(c.r[21], c.r[16].w[0] + 124u);  if (depth < kMaxDepth) unit_0017(c, 166u, depth + 1u); else { c.pc = 0x0015DEF0u; return; } if (c.pc != 0x00298E04u) [[unlikely]] return; }
L_00298E04:
    st32((c.r[21].w[0]), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00298E10u); set32(c.r[4], 0u + 272u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00298E10u) [[unlikely]] return; }
L_00298E10:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00298E2C; } }
    set32(c.r[5], ld32((c.r[21].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[3].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00298E2Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0013(c, 243u, depth + 1u); else { c.pc = 0x0014F930u; return; } if (c.pc != 0x00298E2Cu) [[unlikely]] return; }
L_00298E2C:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[16].w[0] + 56u), c.r[2].w[0]);  if (t) { goto L_00298E3C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00298E3Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100210u; return; } if (c.pc != 0x00298E3Cu) [[unlikely]] return; }
L_00298E3C:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[2].d[0] = c.r[18].sd[0] < 17ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[18].w[0] + 1000u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00298D7Cu | kUnwind; return; } goto L_00298D7C; } }
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00298E8C; } }
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[16].w[0] << 2);
    c.budget -= 2;
L_00298E5C:
    set32(c.r[2], c.r[20].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 56u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00298E78; } }
    set32(c.r[2], ld32((c.r[19].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00298E78u); set32(c.r[5], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0014(c, 27u, depth + 1u); else { c.pc = 0x00150390u; return; } if (c.pc != 0x00298E78u) [[unlikely]] return; }
L_00298E78:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < 17ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[16].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00298E5Cu | kUnwind; return; } goto L_00298E5C; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_00298E8C:
    st8((c.r[20].w[0] + 52u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00298E98u); set32(c.r[4], ld32((c.r[29].w[0] + 124u)));  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x00298E98u) [[unlikely]] return; }
L_00298E98:
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00298EA4u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0017(c, 138u, depth + 1u); else { c.pc = 0x0015D9D0u; return; } if (c.pc != 0x00298EA4u) [[unlikely]] return; }
L_00298EA4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_00298ED0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 52u));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00298EEC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00298EECu);  if (depth < kMaxDepth) unit_0066(c, 118u, depth + 1u); else { c.pc = 0x00298F20u; return; } if (c.pc != 0x00298EECu) [[unlikely]] return; }
L_00298EEC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00298F00:
    set32(c.r[6], ld32((c.r[4].w[0] + 228u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[6].d[0] == c.r[3].d[0];  if (t) { goto L_00298F18; } }
    st32((c.r[4].w[0] + 228u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 232u), c.r[5].w[0]);
    c.budget -= 2;
L_00298F18:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00298F20:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 228u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0029907C; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 2u);  if (t) { goto L_00298F5C; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[2], 0u + 2u);
    c.f[0] = ld32((c.r[1].w[0] - 30360u));
    st32((c.r[16].w[0] + 196u), c.f[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 228u), c.r[2].w[0]);  if (t) { goto L_00299008; } }
L_00298F5C:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);  if (t) { goto L_00298F9C; } }
    c.f[2] = ld32((c.r[16].w[0] + 196u));
    c.f[1] = ld32((c.r[1].w[0] - 30368u));
    c.f[0] = 0u;
    c.f[1] = fp::sub(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[16].w[0] + 196u), c.f[1]);  if (t) { goto L_00299008; } }
    st32((c.r[16].w[0] + 196u), c.f[0]);
    set32(c.r[2], 0u + 3u);
    st32((c.r[16].w[0] + 228u), c.r[2].w[0]);
    set32(c.r[2], 0u + 10u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 224u), c.r[2].w[0]);  if (t) { goto L_00299008; } }
L_00298F9C:
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 4u);  if (t) { goto L_00298FD8; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 224u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[16].w[0] + 224u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 224u)));
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] > 0; set32(c.r[2], c.r[29].w[0] + 32u);  if (t) { goto L_0029900C; } }
    set32(c.r[2], 0u + 4u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    st32((c.r[16].w[0] + 228u), c.r[2].w[0]);
    c.f[0] = ld32((c.r[1].w[0] - 30376u));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 196u), c.f[0]);  if (t) { goto L_00299008; } }
L_00298FD8:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);  if (t) { goto L_00299008; } }
    c.f[0] = ld32((c.r[1].w[0] - 30368u));
    c.f[1] = ld32((c.r[16].w[0] + 196u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[16].w[0] + 196u), c.f[1]);
    c.f[0] = ld32((c.r[1].w[0] - 30384u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00299008; } }
    st32((c.r[16].w[0] + 228u), 0u);
    c.budget -= 1;
L_00299008:
    set32(c.r[2], c.r[29].w[0] + 32u);
    c.budget -= 1;
L_0029900C:
    st128((c.r[2].w[0] + 48u) & ~15u, c.vu0.vf[0]);
    vu::mr32(c.vu0, 15u, 1u, 0u);
    st128((c.r[2].w[0] + 32u) & ~15u, c.vu0.vf[1]);
    vu::mr32(c.vu0, 15u, 2u, 1u);
    st128((c.r[2].w[0] + 16u) & ~15u, c.vu0.vf[2]);
    vu::mr32(c.vu0, 15u, 3u, 2u);
    st128((c.r[2].w[0]) & ~15u, c.vu0.vf[3]);
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00299034u); set32(c.r[5], c.r[16].w[0] + 192u);  if (depth < kMaxDepth) unit_0011(c, 48u, depth + 1u); else { c.pc = 0x00144FA0u; return; } if (c.pc != 0x00299034u) [[unlikely]] return; }
L_00299034:
    ld128((c.r[16].w[0] + 208u) & ~15u, c.r[3]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[3]);
    set32(c.r[3], ld32((c.r[16].w[0] + 232u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[16], ld32((c.r[3].w[0] + 56u)));
    c.budget -= 8;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0029907C; } }
    set32(c.r[25], ld32((c.r[16].w[0] + 152u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 32u);
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0029906Cu); set32(c.r[6], 0u - 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0029906Cu) [[unlikely]] return; }
L_0029906C:
    set32(c.r[25], ld32((c.r[16].w[0] + 152u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0029907Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0029907Cu) [[unlikely]] return; }
L_0029907C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_00299090:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 52u));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002990EC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002990B0u);  if (depth < kMaxDepth) unit_0066(c, 128u, depth + 1u); else { c.pc = 0x00299100u; return; } if (c.pc != 0x002990B0u) [[unlikely]] return; }
L_002990B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002990B8u);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x002990B8u) [[unlikely]] return; }
L_002990B8:
    c.r[2].d[0] = ld8((c.r[2].w[0] + 30u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_002990CC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002990CCu);  if (depth < kMaxDepth) unit_0066(c, 152u, depth + 1u); else { c.pc = 0x00299820u; return; } if (c.pc != 0x002990CCu) [[unlikely]] return; }
L_002990CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002990D4u);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x002990D4u) [[unlikely]] return; }
L_002990D4:
    c.r[4].d[0] = ld8((c.r[2].w[0]));
    set32(c.r[3], 0u + 22u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_002990EC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002990ECu);  if (depth < kMaxDepth) unit_0066(c, 167u, depth + 1u); else { c.pc = 0x00299B10u; return; } if (c.pc != 0x002990ECu) [[unlikely]] return; }
L_002990EC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00299100:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 228u)));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[17], ld32((c.r[1].w[0] + 20144u)));  if (t) { goto L_00299340; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 232u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[18], ld32((c.r[3].w[0] + 56u)));
    c.budget -= 6;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_00299340; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.f[12] = c.r[2].w[0];
    c.f[13] = c.f[12];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00299158u); c.f[14] = c.f[12];  if (depth < kMaxDepth) unit_0013(c, 96u, depth + 1u); else { c.pc = 0x0014D700u; return; } if (c.pc != 0x00299158u) [[unlikely]] return; }
L_00299158:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00299160u); set32(c.r[4], 0u + 256u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00299160u) [[unlikely]] return; }
L_00299160:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);  if (t) { goto L_00299180; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00299178u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0066(c, 55u, depth + 1u); else { c.pc = 0x002986D0u; return; } if (c.pc != 0x00299178u) [[unlikely]] return; }
L_00299178:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.budget -= 2;
L_00299180:
    set32(c.r[1], c.r[17].w[0] + c.r[1].w[0]);
    set32(c.r[2], ld32((c.r[1].w[0] + 1364u)));
    c.r[1].d[0] = c.r[2].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00030000u);  if (t) { goto L_00299244; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    set32(c.r[1], c.r[17].w[0] + c.r[1].w[0]);
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
    set32(c.r[2], 0u + 1u);
    c.r[9].d[0] = c.r[10].d[0] | c.r[9].d[0];
    c.r[3].d[0] = c.r[2].d[0] << 32;
    st64((c.r[9].w[0]), c.r[8].d[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x31000000u);
    st64((c.r[9].w[0] + 8u), 0ull);
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    st64((c.r[9].w[0] + 16u), 0ull);
    c.r[3].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st32((c.r[9].w[0] + 24u), c.r[7].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    st32((c.r[9].w[0] + 28u), c.r[6].w[0]);
    set32(c.r[2], 0u + 78u);
    st64((c.r[9].w[0] + 32u), c.r[5].d[0]);
    set32(c.r[1], c.r[17].w[0] + c.r[1].w[0]);
    st64((c.r[9].w[0] + 40u), c.r[4].d[0]);
    st64((c.r[9].w[0] + 48u), c.r[3].d[0]);
    st64((c.r[9].w[0] + 56u), c.r[2].d[0]);
    set32(c.r[2], ld32((c.r[1].w[0] + 1380u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[2], c.r[2].w[0] + 64u);
    set32(c.r[1], c.r[17].w[0] + c.r[1].w[0]);
    st32((c.r[1].w[0] + 1380u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[17].w[0] + c.r[1].w[0]);
    set32(c.r[2], ld32((c.r[1].w[0] + 1364u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[2], c.r[2].w[0] - 4u);
    set32(c.r[1], c.r[17].w[0] + c.r[1].w[0]);
    st32((c.r[1].w[0] + 1364u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00030000u);
    c.budget -= 44;
L_00299244:
    c.r[2].d[0] = c.r[2].d[0] | 12801ull;
    st64((c.r[18].w[0] + 192u), c.r[2].d[0]);
    set32(c.r[25], ld32((c.r[18].w[0] + 152u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 44u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0029925Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0029925Cu) [[unlikely]] return; }
L_0029925C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[17].w[0] + c.r[1].w[0]);
    set32(c.r[2], ld32((c.r[1].w[0] + 1364u)));
    c.r[1].d[0] = c.r[2].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00299318; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    set32(c.r[1], c.r[17].w[0] + c.r[1].w[0]);
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
    c.r[2].sd[0] = static_cast<std::int32_t>(0x31000000u);
    c.r[9].d[0] = c.r[10].d[0] | c.r[9].d[0];
    c.r[3].d[0] = c.r[2].d[0] | 128ull;
    st64((c.r[9].w[0]), c.r[8].d[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    st64((c.r[9].w[0] + 8u), 0ull);
    set32(c.r[2], 0u + 78u);
    st64((c.r[9].w[0] + 16u), 0ull);
    set32(c.r[1], c.r[17].w[0] + c.r[1].w[0]);
    st32((c.r[9].w[0] + 24u), c.r[7].w[0]);
    st32((c.r[9].w[0] + 28u), c.r[6].w[0]);
    st64((c.r[9].w[0] + 32u), c.r[5].d[0]);
    st64((c.r[9].w[0] + 40u), c.r[4].d[0]);
    st64((c.r[9].w[0] + 48u), c.r[3].d[0]);
    st64((c.r[9].w[0] + 56u), c.r[2].d[0]);
    set32(c.r[2], ld32((c.r[1].w[0] + 1380u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[2], c.r[2].w[0] + 64u);
    set32(c.r[1], c.r[17].w[0] + c.r[1].w[0]);
    st32((c.r[1].w[0] + 1380u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[17].w[0] + c.r[1].w[0]);
    set32(c.r[2], ld32((c.r[1].w[0] + 1364u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[2], c.r[2].w[0] - 4u);
    set32(c.r[1], c.r[17].w[0] + c.r[1].w[0]);
    st32((c.r[1].w[0] + 1364u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 41;
L_00299318:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00299320u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0066(c, 67u, depth + 1u); else { c.pc = 0x00298960u; return; } if (c.pc != 0x00299320u) [[unlikely]] return; }
L_00299320:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.f[12] = ld32((c.r[1].w[0] + 28816u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.f[13] = ld32((c.r[1].w[0] + 28820u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.f[14] = ld32((c.r[1].w[0] + 28824u));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00299340u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0013(c, 96u, depth + 1u); else { c.pc = 0x0014D700u; return; } if (c.pc != 0x00299340u) [[unlikely]] return; }
L_00299340:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00299360:
    set32(c.r[29], c.r[29].w[0] - 160u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    set32(c.r[4], 0u + 1u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[1].w[0] - 27904u)));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 18576u));
    c.budget -= 14;
    { const bool t = c.r[3].d[0] == c.r[4].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);  if (t) { goto L_002997F8; } }
    set32(c.r[3], ld32((c.r[1].w[0] + 31520u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_002997F8; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 31184u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002997F8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002993BCu);  if (depth < kMaxDepth) unit_0047(c, 130u, depth + 1u); else { c.pc = 0x0021D9D0u; return; } if (c.pc != 0x002993BCu) [[unlikely]] return; }
L_002993BC:
    set32(c.r[3], 0u + 512u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);  if (t) { goto L_002997F8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[17], ld32((c.r[1].w[0] + 20144u)));
    c.f[12] = c.r[2].w[0];
    c.f[13] = c.f[12];
    c.f[14] = c.f[12];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002993E8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0013(c, 96u, depth + 1u); else { c.pc = 0x0014D700u; return; } if (c.pc != 0x002993E8u) [[unlikely]] return; }
L_002993E8:
    c.f[12] = 0u;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.f[13] = c.f[12];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00299400u); c.f[14] = c.f[12];  if (depth < kMaxDepth) unit_0013(c, 95u, depth + 1u); else { c.pc = 0x0014D6C0u; return; } if (c.pc != 0x00299400u) [[unlikely]] return; }
L_00299400:
    c.f[12] = 0u;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.f[13] = c.f[12];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00299418u); c.f[14] = c.f[12];  if (depth < kMaxDepth) unit_0013(c, 95u, depth + 1u); else { c.pc = 0x0014D6C0u; return; } if (c.pc != 0x00299418u) [[unlikely]] return; }
L_00299418:
    c.f[12] = 0u;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 2u);
    c.f[13] = c.f[12];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00299430u); c.f[14] = c.f[12];  if (depth < kMaxDepth) unit_0013(c, 95u, depth + 1u); else { c.pc = 0x0014D6C0u; return; } if (c.pc != 0x00299430u) [[unlikely]] return; }
L_00299430:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_00299760; } }
L_00299438:
    set32(c.r[6], c.r[19].w[0] << 2);
    set32(c.r[5], ld32((c.r[1].w[0] - 27904u)));
    set32(c.r[3], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0] + 19608u)));
    set32(c.r[3], c.r[4].w[0] << 5);
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 18612u)));
    c.budget -= 11;
    { const bool t = c.r[3].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x00520000u);  if (t) { goto L_0029975C; } }
    set32(c.r[3], c.r[3].w[0] + 28320u);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[16], ld32((c.r[3].w[0])));
    c.budget -= 5;
    { const bool t = c.r[16].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);  if (t) { goto L_0029975C; } }
    set32(c.r[3], 0u + 2u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] - 18073u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_002997F8; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002994C4; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 980u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 1236u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002994A4; } }
    st16((c.r[16].w[0] + 1232u), static_cast<std::uint16_t>(0u));
    c.budget -= 1;
L_002994A4:
    set32(c.r[3], ld32((c.r[16].w[0] + 980u)));
    st32((c.r[16].w[0] + 1236u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 1232u)));
    c.r[1].d[0] = c.r[3].sd[0] < 61ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0029975C; } }
    set32(c.r[3], c.r[3].w[0] + 1u);
    st16((c.r[16].w[0] + 1232u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 2;
L_002994C4:
    c.r[4].d[0] = ld8((c.r[16].w[0] + 392u));
    c.r[3].d[0] = c.r[4].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; c.r[3].d[0] = c.r[4].d[0] << 59;  if (t) { goto L_0029975C; } }
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0029975C; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 912u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41300000u);
    set32(c.r[3], ld32((c.r[16].w[0] + 240u)));
    c.f[1] = c.r[2].w[0];
    set32(c.r[7], c.r[29].w[0] + 144u);
    set32(c.r[6], c.r[29].w[0] + 128u);
    set32(c.r[5], c.r[29].w[0] + 112u);
    set32(c.r[2], c.r[4].w[0] << 3);
    ld128((c.r[3].w[0]) & ~15u, c.r[4]);
    st128((c.r[7].w[0]) & ~15u, c.r[4]);
    set32(c.r[3], c.r[20].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 64u)));
    c.f[0] = ld32((c.r[16].w[0] + 356u));
    c.f[2] = ld32((c.r[2].w[0] + 52u));
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    c.f[0] = fp::sub(c.f[2], c.f[0]);
    st32((c.r[29].w[0] + 148u), c.f[0]);
    ld128((c.r[16].w[0] + 208u) & ~15u, c.r[2]);
    st128((c.r[6].w[0]) & ~15u, c.r[2]);
    c.f[0] = ld32((c.r[16].w[0] + 1020u));
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[2]);
    st32((c.r[29].w[0] + 132u), c.f[0]);
    set32(c.r[18], ld32((c.r[3].w[0] + 68u)));
    st128((c.r[18].w[0] + 64u) & ~15u, c.r[2]);
    set32(c.r[4], c.r[18].w[0] + 16u);
    ld128((c.r[18].w[0] + 64u) & ~15u, c.r[2]);
    c.budget -= 28;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00299550u); st128((c.r[5].w[0]) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_0011(c, 77u, depth + 1u); else { c.pc = 0x00145760u; return; } if (c.pc != 0x00299550u) [[unlikely]] return; }
L_00299550:
    set32(c.r[25], ld32((c.r[18].w[0] + 152u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00299560u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00299560u) [[unlikely]] return; }
L_00299560:
    set32(c.r[25], ld32((c.r[18].w[0] + 152u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 44u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00299570u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00299570u) [[unlikely]] return; }
L_00299570:
    set32(c.r[4], ld32((c.r[16].w[0] + 980u)));
    set32(c.r[3], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0029975C; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 984u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0029975C; } }
    c.r[3].d[0] = ld8((c.r[3].w[0] + 392u));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0029975C; } }
    set32(c.r[3], c.r[4].w[0] << 1);
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[2]);
    set32(c.r[3], c.r[3].w[0] + 1u);
    set32(c.r[5], c.r[29].w[0] + 96u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[6], c.r[29].w[0] + 128u);
    set32(c.r[3], c.r[20].w[0] + c.r[3].w[0]);
    set32(c.r[16], ld32((c.r[3].w[0] + 68u)));
    st128((c.r[16].w[0] + 64u) & ~15u, c.r[2]);
    set32(c.r[4], c.r[16].w[0] + 16u);
    ld128((c.r[16].w[0] + 64u) & ~15u, c.r[2]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002995D0u); st128((c.r[5].w[0]) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_0011(c, 77u, depth + 1u); else { c.pc = 0x00145760u; return; } if (c.pc != 0x002995D0u) [[unlikely]] return; }
L_002995D0:
    set32(c.r[25], ld32((c.r[16].w[0] + 152u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002995E0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002995E0u) [[unlikely]] return; }
L_002995E0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[17].w[0] + c.r[1].w[0]);
    set32(c.r[2], ld32((c.r[1].w[0] + 1364u)));
    c.r[1].d[0] = c.r[2].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);  if (t) { goto L_0029969C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    set32(c.r[1], c.r[17].w[0] + c.r[1].w[0]);
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
    set32(c.r[2], 0u + 128u);
    c.r[9].d[0] = c.r[10].d[0] | c.r[9].d[0];
    c.r[3].d[0] = c.r[2].d[0] << 32;
    st64((c.r[9].w[0]), c.r[8].d[0]);
    set32(c.r[2], 0u + 104u);
    st64((c.r[9].w[0] + 8u), 0ull);
    c.r[3].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st64((c.r[9].w[0] + 16u), 0ull);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    st32((c.r[9].w[0] + 24u), c.r[7].w[0]);
    set32(c.r[2], 0u + 66u);
    st32((c.r[9].w[0] + 28u), c.r[6].w[0]);
    set32(c.r[1], c.r[17].w[0] + c.r[1].w[0]);
    st64((c.r[9].w[0] + 32u), c.r[5].d[0]);
    st64((c.r[9].w[0] + 40u), c.r[4].d[0]);
    st64((c.r[9].w[0] + 48u), c.r[3].d[0]);
    st64((c.r[9].w[0] + 56u), c.r[2].d[0]);
    set32(c.r[2], ld32((c.r[1].w[0] + 1380u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[2], c.r[2].w[0] + 64u);
    set32(c.r[1], c.r[17].w[0] + c.r[1].w[0]);
    st32((c.r[1].w[0] + 1380u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[17].w[0] + c.r[1].w[0]);
    set32(c.r[2], ld32((c.r[1].w[0] + 1364u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[2], c.r[2].w[0] - 4u);
    set32(c.r[1], c.r[17].w[0] + c.r[1].w[0]);
    st32((c.r[1].w[0] + 1364u), c.r[2].w[0]);
    c.budget -= 41;
L_0029969C:
    set32(c.r[25], ld32((c.r[16].w[0] + 152u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 44u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002996ACu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002996ACu) [[unlikely]] return; }
L_002996AC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[17].w[0] + c.r[1].w[0]);
    set32(c.r[3], ld32((c.r[1].w[0] + 1364u)));
    c.r[1].d[0] = c.r[3].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);  if (t) { goto L_0029975C; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    set32(c.r[1], c.r[17].w[0] + c.r[1].w[0]);
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
    set32(c.r[4], 0u + 68u);
    set32(c.r[3], 0u + 66u);
    c.r[10].d[0] = c.r[11].d[0] | c.r[10].d[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    st64((c.r[10].w[0]), c.r[9].d[0]);
    set32(c.r[1], c.r[17].w[0] + c.r[1].w[0]);
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
    set32(c.r[1], c.r[17].w[0] + c.r[1].w[0]);
    st32((c.r[1].w[0] + 1380u), c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[17].w[0] + c.r[1].w[0]);
    set32(c.r[3], ld32((c.r[1].w[0] + 1364u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[3], c.r[3].w[0] - 4u);
    set32(c.r[1], c.r[17].w[0] + c.r[1].w[0]);
    st32((c.r[1].w[0] + 1364u), c.r[3].w[0]);
    c.budget -= 38;
L_0029975C:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.budget -= 1;
L_00299760:
    c.r[3].d[0] = c.r[19].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00299438u | kUnwind; return; } goto L_00299438; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.f[12] = ld32((c.r[1].w[0] + 28816u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.f[13] = ld32((c.r[1].w[0] + 28820u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.f[14] = ld32((c.r[1].w[0] + 28824u));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029978Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0013(c, 96u, depth + 1u); else { c.pc = 0x0014D700u; return; } if (c.pc != 0x0029978Cu) [[unlikely]] return; }
L_0029978C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.f[12] = ld32((c.r[1].w[0] + 28768u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.f[13] = ld32((c.r[1].w[0] + 28772u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.f[14] = ld32((c.r[1].w[0] + 28776u));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002997B0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0013(c, 95u, depth + 1u); else { c.pc = 0x0014D6C0u; return; } if (c.pc != 0x002997B0u) [[unlikely]] return; }
L_002997B0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.f[12] = ld32((c.r[1].w[0] + 28784u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.f[13] = ld32((c.r[1].w[0] + 28788u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.f[14] = ld32((c.r[1].w[0] + 28792u));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002997D4u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0013(c, 95u, depth + 1u); else { c.pc = 0x0014D6C0u; return; } if (c.pc != 0x002997D4u) [[unlikely]] return; }
L_002997D4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.f[12] = ld32((c.r[1].w[0] + 28800u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.f[13] = ld32((c.r[1].w[0] + 28804u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.f[14] = ld32((c.r[1].w[0] + 28808u));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002997F8u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_0013(c, 95u, depth + 1u); else { c.pc = 0x0014D6C0u; return; } if (c.pc != 0x002997F8u) [[unlikely]] return; }
L_002997F8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_00299820:
    set32(c.r[29], c.r[29].w[0] - 144u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    set32(c.r[3], 0u + 1u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], ld32((c.r[1].w[0] + 31520u)));
    c.budget -= 13;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);  if (t) { goto L_00299AE4; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 31184u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00299AE4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00299868u);  if (depth < kMaxDepth) unit_0047(c, 130u, depth + 1u); else { c.pc = 0x0021D9D0u; return; } if (c.pc != 0x00299868u) [[unlikely]] return; }
L_00299868:
    set32(c.r[3], 0u + 512u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);  if (t) { goto L_00299AE4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    set32(c.r[17], ld32((c.r[1].w[0] + 20144u)));
    c.f[12] = c.r[2].w[0];
    c.f[13] = c.f[12];
    c.f[14] = c.f[12];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00299894u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0013(c, 96u, depth + 1u); else { c.pc = 0x0014D700u; return; } if (c.pc != 0x00299894u) [[unlikely]] return; }
L_00299894:
    c.f[12] = 0u;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.f[13] = c.f[12];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002998ACu); c.f[14] = c.f[12];  if (depth < kMaxDepth) unit_0013(c, 95u, depth + 1u); else { c.pc = 0x0014D6C0u; return; } if (c.pc != 0x002998ACu) [[unlikely]] return; }
L_002998AC:
    c.f[12] = 0u;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.f[13] = c.f[12];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002998C4u); c.f[14] = c.f[12];  if (depth < kMaxDepth) unit_0013(c, 95u, depth + 1u); else { c.pc = 0x0014D6C0u; return; } if (c.pc != 0x002998C4u) [[unlikely]] return; }
L_002998C4:
    c.f[12] = 0u;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 2u);
    c.f[13] = c.f[12];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002998DCu); c.f[14] = c.f[12];  if (depth < kMaxDepth) unit_0013(c, 95u, depth + 1u); else { c.pc = 0x0014D6C0u; return; } if (c.pc != 0x002998DCu) [[unlikely]] return; }
L_002998DC:
    c.r[19].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002998E0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[3], c.r[19].w[0] << 5);
    set32(c.r[2], ld32((c.r[1].w[0] - 27904u)));
    set32(c.r[3], c.r[3].w[0] - c.r[19].w[0]);
    set32(c.r[16], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 18612u)));
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);  if (t) { goto L_00299A48; } }
    set32(c.r[3], c.r[19].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 28320u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[18], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { const bool t = c.r[18].d[0] == 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_00299A48; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00299924u);  if (depth < kMaxDepth) unit_003E(c, 47u, depth + 1u); else { c.pc = 0x001F8790u; return; } if (c.pc != 0x00299924u) [[unlikely]] return; }
L_00299924:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00299A48; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 164u)));
    set32(c.r[2], 0u + 12086u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 12071u);  if (t) { goto L_00299A48; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00299A48; } }
    set32(c.r[2], c.r[3].w[0] - 12076u);
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_00299A48; } }
    set32(c.r[5], ld32((c.r[18].w[0] + 240u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41300000u);
    c.f[1] = c.r[2].w[0];
    set32(c.r[4], c.r[29].w[0] + 128u);
    set32(c.r[3], c.r[29].w[0] + 112u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    ld128((c.r[5].w[0]) & ~15u, c.r[2]);
    st128((c.r[4].w[0]) & ~15u, c.r[2]);
    set32(c.r[2], ld32((c.r[18].w[0] + 64u)));
    c.f[0] = ld32((c.r[18].w[0] + 356u));
    c.f[2] = ld32((c.r[2].w[0] + 52u));
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    c.f[0] = fp::sub(c.f[2], c.f[0]);
    st32((c.r[29].w[0] + 132u), c.f[0]);
    ld128((c.r[18].w[0] + 208u) & ~15u, c.r[2]);
    st128((c.r[3].w[0]) & ~15u, c.r[2]);
    set32(c.r[2], ld32((c.r[1].w[0] - 27904u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.f[2] = ld32((c.r[1].w[0] - 30392u));
    c.f[1] = ld32((c.r[2].w[0] + 18684u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[0] = ld32((c.r[1].w[0] - 30400u));
    c.f[1] = fp::add(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 27;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[3], c.r[2].w[0] + 18684u);  if (t) { goto L_002999D0; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[0] = ld32((c.r[1].w[0] - 30376u));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.f[1] = fp::sub(c.f[1], c.f[0]);  if (t) { goto L_002999EC; } }
L_002999D0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[0] = ld32((c.r[1].w[0] - 30408u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);  if (t) { goto L_002999EC; } }
    c.f[0] = ld32((c.r[1].w[0] - 30376u));
    c.f[1] = fp::add(c.f[1], c.f[0]);
    c.budget -= 2;
L_002999EC:
    st32((c.r[3].w[0]), c.f[1]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[3], ld32((c.r[1].w[0] - 27904u)));
    set32(c.r[5], c.r[29].w[0] + 96u);
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[2]);
    set32(c.r[6], c.r[29].w[0] + 112u);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    c.f[0] = ld32((c.r[3].w[0] + 18684u));
    st32((c.r[29].w[0] + 116u), c.f[0]);
    set32(c.r[16], ld32((c.r[20].w[0] + 64u)));
    st128((c.r[16].w[0] + 64u) & ~15u, c.r[2]);
    set32(c.r[4], c.r[16].w[0] + 16u);
    ld128((c.r[16].w[0] + 64u) & ~15u, c.r[2]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00299A28u); st128((c.r[5].w[0]) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_0011(c, 77u, depth + 1u); else { c.pc = 0x00145760u; return; } if (c.pc != 0x00299A28u) [[unlikely]] return; }
L_00299A28:
    set32(c.r[25], ld32((c.r[16].w[0] + 152u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00299A38u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00299A38u) [[unlikely]] return; }
L_00299A38:
    set32(c.r[25], ld32((c.r[16].w[0] + 152u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 44u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00299A48u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00299A48u) [[unlikely]] return; }
L_00299A48:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.r[2].d[0] = c.r[19].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002998E0u | kUnwind; return; } goto L_002998E0; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.f[12] = ld32((c.r[1].w[0] + 28816u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.f[13] = ld32((c.r[1].w[0] + 28820u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.f[14] = ld32((c.r[1].w[0] + 28824u));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00299A78u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0013(c, 96u, depth + 1u); else { c.pc = 0x0014D700u; return; } if (c.pc != 0x00299A78u) [[unlikely]] return; }
L_00299A78:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.f[12] = ld32((c.r[1].w[0] + 28768u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.f[13] = ld32((c.r[1].w[0] + 28772u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.f[14] = ld32((c.r[1].w[0] + 28776u));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00299A9Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0013(c, 95u, depth + 1u); else { c.pc = 0x0014D6C0u; return; } if (c.pc != 0x00299A9Cu) [[unlikely]] return; }
L_00299A9C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.f[12] = ld32((c.r[1].w[0] + 28784u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.f[13] = ld32((c.r[1].w[0] + 28788u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.f[14] = ld32((c.r[1].w[0] + 28792u));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00299AC0u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0013(c, 95u, depth + 1u); else { c.pc = 0x0014D6C0u; return; } if (c.pc != 0x00299AC0u) [[unlikely]] return; }
L_00299AC0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.f[12] = ld32((c.r[1].w[0] + 28800u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.f[13] = ld32((c.r[1].w[0] + 28804u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.f[14] = ld32((c.r[1].w[0] + 28808u));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00299AE4u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_0013(c, 95u, depth + 1u); else { c.pc = 0x0014D6C0u; return; } if (c.pc != 0x00299AE4u) [[unlikely]] return; }
L_00299AE4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_00299B10:
    set32(c.r[29], c.r[29].w[0] - 128u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    set32(c.r[3], 0u + 1u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], ld32((c.r[1].w[0] + 31520u)));
    c.budget -= 12;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);  if (t) { goto L_00299DD0; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 31184u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00299DD0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00299B54u);  if (depth < kMaxDepth) unit_0047(c, 130u, depth + 1u); else { c.pc = 0x0021D9D0u; return; } if (c.pc != 0x00299B54u) [[unlikely]] return; }
L_00299B54:
    set32(c.r[3], 0u + 512u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);  if (t) { goto L_00299DD0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    set32(c.r[16], ld32((c.r[1].w[0] + 20144u)));
    c.f[12] = c.r[2].w[0];
    c.f[13] = c.f[12];
    c.f[14] = c.f[12];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00299B80u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0013(c, 96u, depth + 1u); else { c.pc = 0x0014D700u; return; } if (c.pc != 0x00299B80u) [[unlikely]] return; }
L_00299B80:
    c.f[12] = 0u;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.f[13] = c.f[12];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00299B98u); c.f[14] = c.f[12];  if (depth < kMaxDepth) unit_0013(c, 95u, depth + 1u); else { c.pc = 0x0014D6C0u; return; } if (c.pc != 0x00299B98u) [[unlikely]] return; }
L_00299B98:
    c.f[12] = 0u;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.f[13] = c.f[12];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00299BB0u); c.f[14] = c.f[12];  if (depth < kMaxDepth) unit_0013(c, 95u, depth + 1u); else { c.pc = 0x0014D6C0u; return; } if (c.pc != 0x00299BB0u) [[unlikely]] return; }
L_00299BB0:
    c.f[12] = 0u;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 2u);
    c.f[13] = c.f[12];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00299BC8u); c.f[14] = c.f[12];  if (depth < kMaxDepth) unit_0013(c, 95u, depth + 1u); else { c.pc = 0x0014D6C0u; return; } if (c.pc != 0x00299BC8u) [[unlikely]] return; }
L_00299BC8:
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00299BCC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], c.r[17].w[0] << 5);
    set32(c.r[3], ld32((c.r[1].w[0] - 27904u)));
    set32(c.r[2], c.r[2].w[0] - c.r[17].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0] + 18612u)));
    c.budget -= 9;
    { const bool t = c.r[4].d[0] == 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);  if (t) { goto L_00299D34; } }
    set32(c.r[5], c.r[17].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + 28320u);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[9], ld32((c.r[4].w[0])));
    c.budget -= 6;
    { const bool t = c.r[9].d[0] == 0ull;  if (t) { goto L_00299D34; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[5], c.r[17].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + 8384u);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 692u)));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00299D34; } }
    set32(c.r[5], ld32((c.r[9].w[0] + 164u)));
    set32(c.r[4], 0u + 12086u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[4].d[0]; set32(c.r[4], 0u + 12071u);  if (t) { goto L_00299D34; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[4].d[0];  if (t) { goto L_00299D34; } }
    set32(c.r[4], c.r[5].w[0] - 12076u);
    c.r[1].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_00299D34; } }
    set32(c.r[7], ld32((c.r[9].w[0] + 240u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x41300000u);
    c.f[1] = c.r[4].w[0];
    set32(c.r[6], c.r[29].w[0] + 112u);
    set32(c.r[5], c.r[29].w[0] + 96u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    ld128((c.r[7].w[0]) & ~15u, c.r[4]);
    st128((c.r[6].w[0]) & ~15u, c.r[4]);
    set32(c.r[4], ld32((c.r[9].w[0] + 64u)));
    c.f[0] = ld32((c.r[9].w[0] + 356u));
    c.f[2] = ld32((c.r[4].w[0] + 52u));
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    c.f[0] = fp::sub(c.f[2], c.f[0]);
    st32((c.r[29].w[0] + 116u), c.f[0]);
    ld128((c.r[9].w[0] + 208u) & ~15u, c.r[4]);
    st128((c.r[5].w[0]) & ~15u, c.r[4]);
    c.f[2] = ld32((c.r[1].w[0] - 30392u));
    c.f[1] = ld32((c.r[3].w[0] + 18684u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[0] = ld32((c.r[1].w[0] - 30400u));
    c.f[1] = fp::add(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 24;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[8], c.r[3].w[0] + 18684u);  if (t) { goto L_00299CBC; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[0] = ld32((c.r[1].w[0] - 30376u));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.f[1] = fp::sub(c.f[1], c.f[0]);  if (t) { goto L_00299CD8; } }
L_00299CBC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[0] = ld32((c.r[1].w[0] - 30408u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);  if (t) { goto L_00299CD8; } }
    c.f[0] = ld32((c.r[1].w[0] - 30376u));
    c.f[1] = fp::add(c.f[1], c.f[0]);
    c.budget -= 2;
L_00299CD8:
    st32((c.r[8].w[0]), c.f[1]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], ld32((c.r[1].w[0] - 27904u)));
    set32(c.r[5], c.r[29].w[0] + 80u);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[3]);
    set32(c.r[6], c.r[29].w[0] + 96u);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    c.f[0] = ld32((c.r[2].w[0] + 18684u));
    st32((c.r[29].w[0] + 100u), c.f[0]);
    set32(c.r[19], ld32((c.r[18].w[0] + 64u)));
    st128((c.r[19].w[0] + 64u) & ~15u, c.r[3]);
    set32(c.r[4], c.r[19].w[0] + 16u);
    ld128((c.r[19].w[0] + 64u) & ~15u, c.r[2]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00299D14u); st128((c.r[5].w[0]) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_0011(c, 77u, depth + 1u); else { c.pc = 0x00145760u; return; } if (c.pc != 0x00299D14u) [[unlikely]] return; }
L_00299D14:
    set32(c.r[25], ld32((c.r[19].w[0] + 152u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00299D24u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00299D24u) [[unlikely]] return; }
L_00299D24:
    set32(c.r[25], ld32((c.r[19].w[0] + 152u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 44u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00299D34u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00299D34u) [[unlikely]] return; }
L_00299D34:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00299BCCu | kUnwind; return; } goto L_00299BCC; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.f[12] = ld32((c.r[1].w[0] + 28816u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.f[13] = ld32((c.r[1].w[0] + 28820u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.f[14] = ld32((c.r[1].w[0] + 28824u));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00299D64u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0013(c, 96u, depth + 1u); else { c.pc = 0x0014D700u; return; } if (c.pc != 0x00299D64u) [[unlikely]] return; }
L_00299D64:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = ld32((c.r[1].w[0] + 28768u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.f[13] = ld32((c.r[1].w[0] + 28772u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.f[14] = ld32((c.r[1].w[0] + 28776u));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00299D88u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0013(c, 95u, depth + 1u); else { c.pc = 0x0014D6C0u; return; } if (c.pc != 0x00299D88u) [[unlikely]] return; }
L_00299D88:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = ld32((c.r[1].w[0] + 28784u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.f[13] = ld32((c.r[1].w[0] + 28788u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.f[14] = ld32((c.r[1].w[0] + 28792u));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00299DACu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0013(c, 95u, depth + 1u); else { c.pc = 0x0014D6C0u; return; } if (c.pc != 0x00299DACu) [[unlikely]] return; }
L_00299DAC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = ld32((c.r[1].w[0] + 28800u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.f[13] = ld32((c.r[1].w[0] + 28804u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.f[14] = ld32((c.r[1].w[0] + 28808u));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00299DD0u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_0013(c, 95u, depth + 1u); else { c.pc = 0x0014D6C0u; return; } if (c.pc != 0x00299DD0u) [[unlikely]] return; }
L_00299DD0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_00299DF0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00299090u | kUnwind; return; } goto L_00299090; }
L_00299E00:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00298B90u | kUnwind; return; } goto L_00298B90; }
L_00299E10:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 44u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00298ED0u | kUnwind; return; } goto L_00298ED0; }
L_00299E20:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 44u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00298B90u | kUnwind; return; } goto L_00298B90; }
L_00299E30:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x474F0000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[7].d[0] = c.r[2].d[0] | 16970ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00299E4Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_002C(c, 200u, depth + 1u); else { c.pc = 0x001B1A30u; return; } if (c.pc != 0x00299E4Cu) [[unlikely]] return; }
L_00299E4C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] + 6592u);
    st32((c.r[16].w[0] + 56u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00299E70:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00299EB8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 6592u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00299EA0u); st32((c.r[17].w[0] + 56u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_002C(c, 203u, depth + 1u); else { c.pc = 0x001B1AC0u; return; } if (c.pc != 0x00299EA0u) [[unlikely]] return; }
L_00299EA0:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00299EBC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00299EB8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x00299EB8u) [[unlikely]] return; }
L_00299EB8:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00299EBC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00299ED0:
    set32(c.r[2], ld32((c.r[4].w[0] + 68u)));
    c.f[0] = ld32((c.r[2].w[0]));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00299EF0:
    set32(c.r[2], ld32((c.r[4].w[0] + 68u)));
    c.f[0] = ld32((c.r[2].w[0] + 4u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00299F10:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 8;
L_00299F30:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], c.r[16].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + 28352u);
    set32(c.r[19], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[19].w[0])));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00299FD8; } }
    set32(c.r[18], ld32((c.r[3].w[0] + 48u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00299F58u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0066(c, 190u, depth + 1u); else { c.pc = 0x00299ED0u; return; } if (c.pc != 0x00299F58u) [[unlikely]] return; }
L_00299F58:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != c.r[2].d[0]; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00299FD8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00299F68u);  if (depth < kMaxDepth) unit_0066(c, 191u, depth + 1u); else { c.pc = 0x00299EF0u; return; } if (c.pc != 0x00299F68u) [[unlikely]] return; }
L_00299F68:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_00299FC4; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_00299FA8; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00299F8C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[16].w[0] + 1u);  if (t) { goto L_00299FDC; } }
L_00299F8C:
    set32(c.r[25], ld32((c.r[17].w[0] + 56u)));
    set32(c.r[5], ld32((c.r[19].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00299FA0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00299FA0u) [[unlikely]] return; }
L_00299FA0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00299FD8; } }
L_00299FA8:
    set32(c.r[25], ld32((c.r[17].w[0] + 56u)));
    set32(c.r[5], ld32((c.r[19].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 56u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00299FBCu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00299FBCu) [[unlikely]] return; }
L_00299FBC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00299FD8; } }
L_00299FC4:
    set32(c.r[25], ld32((c.r[17].w[0] + 56u)));
    set32(c.r[5], ld32((c.r[19].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 60u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00299FD8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00299FD8u) [[unlikely]] return; }
L_00299FD8:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_00299FDC:
    c.r[3].d[0] = c.r[16].sd[0] < 72ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00299F30u | kUnwind; return; } goto L_00299F30; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0029A010:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 504u)));
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] >= 0; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0029A030; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0029A0B8; } }
L_0029A030:
    set32(c.r[3], c.r[2].w[0] << 2);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], c.r[2].w[0] + 28320u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0029A054; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0029A0B8; } }
L_0029A054:
    set32(c.r[3], ld32((c.r[2].w[0] + 164u)));
    set32(c.r[2], 0u + 15476u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0029A074; } }
    set32(c.r[3], 0u - 1u);
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 504u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0029A0B8; } }
L_0029A074:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x47520000u);  if (t) { goto L_0029A080; } }
    set32(c.r[4], c.r[4].w[0] + 436u);
    c.budget -= 1;
L_0029A080:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029A088u); c.r[5].d[0] = c.r[2].d[0] | 16726ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x0029A088u) [[unlikely]] return; }
L_0029A088:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0029A098; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 16u)));  if (t) { goto L_0029A09C; } }
L_0029A098:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0029A09C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], 0u - 1u);  if (t) { goto L_0029A0B0; } }
    st32((c.r[2].w[0] + 64u), 0u);
    st32((c.r[2].w[0] + 72u), 0u);
    st32((c.r[2].w[0] + 68u), 0u);
    c.budget -= 3;
L_0029A0B0:
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 504u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_0029A0B8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0029A0D0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0029A1BC; } }
L_0029A0F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029A100u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0049(c, 323u, depth + 1u); else { c.pc = 0x00227CD0u; return; } if (c.pc != 0x0029A100u) [[unlikely]] return; }
L_0029A100:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0029A1B8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 28320u);
    set32(c.r[4], ld32((c.r[18].w[0] + 60u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { goto L_0029A1B8; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 68u)));
    c.r[16].d[0] = 0ull + 0ull;
    c.f[0] = ld32((c.r[2].w[0] + 24u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[17], c.f[0]);
    c.budget -= 5;
L_0029A13C:
    set32(c.r[3], ld32((c.r[19].w[0] + 68u)));
    set32(c.r[2], c.r[16].w[0] << 2);
    c.f[0] = 0u;
    c.f[1] = ld32((c.r[3].w[0] + 28u));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.f[2] = ld32((c.r[2].w[0] + 8u));
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.f[0] = fp::cvt_w_s(c.f[2]);
    set32(c.r[4], c.f[0]);
    c.budget -= 11;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0029A188; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 64u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[7], 0u - 1u);
    set32(c.r[8], c.r[18].w[0] + 208u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029A180u); set32(c.r[6], c.r[2].w[0] + 48u);  if (depth < kMaxDepth) unit_0066(c, 208u, depth + 1u); else { c.pc = 0x0029A200u; return; } if (c.pc != 0x0029A180u) [[unlikely]] return; }
L_0029A180:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[16].w[0] + 1u);  if (t) { goto L_0029A1A4; } }
L_0029A188:
    set32(c.r[2], ld32((c.r[18].w[0] + 64u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[7], 0u - 1u);
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029A1A0u); set32(c.r[6], c.r[2].w[0] + 48u);  if (depth < kMaxDepth) unit_0066(c, 208u, depth + 1u); else { c.pc = 0x0029A200u; return; } if (c.pc != 0x0029A1A0u) [[unlikely]] return; }
L_0029A1A0:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_0029A1A4:
    c.r[2].d[0] = c.r[16].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0029A13Cu | kUnwind; return; } goto L_0029A13C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  if (t) { goto L_0029A1CC; } }
L_0029A1B8:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_0029A1BC:
    c.r[2].d[0] = c.r[16].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0029A0F8u | kUnwind; return; } goto L_0029A0F8; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_0029A1CC:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0029A1F0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_0029A200:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    c.r[23].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[22].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[8].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 16;
    { const bool t = c.r[22].sd[0] >= 0; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_0029A248; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_0029A320; } }
L_0029A248:
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = c.r[22].d[0] + 0ull;  if (t) { goto L_0029A310; } }
L_0029A254:
    c.r[5].d[0] = c.r[22].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[1].w[0] + 26328u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029A264u); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 414u, depth + 1u); else { c.pc = 0x00197E00u; return; } if (c.pc != 0x0029A264u) [[unlikely]] return; }
L_0029A264:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0029A30C; } }
    set32(c.r[4], ld32((c.r[2].w[0] + 52u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x47500000u);
    c.r[3].d[0] = c.r[3].d[0] | 21076ull;
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0029A30C; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0029A30C; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 64u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0029A298; } }
    c.r[2].d[0] = ld8((c.r[3].w[0] + 108u));
    c.budget -= 1;
L_0029A298:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0029A2F4; } }
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[20].d[0] == c.r[2].d[0];  if (t) { goto L_0029A2B8; } }
    c.budget -= 2;
    { const bool t = c.r[20].d[0] != c.r[18].d[0];  if (t) { goto L_0029A2F4; } }
L_0029A2B8:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0029A2C4; } }
    st8((c.r[3].w[0] + 108u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 1;
L_0029A2C4:
    c.budget -= 2;
    { const bool t = c.r[21].d[0] == 0ull; c.r[5].d[0] = c.r[21].d[0] + 0ull;  if (t) { goto L_0029A2D4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029A2D4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0024(c, 356u, depth + 1u); else { c.pc = 0x001934E0u; return; } if (c.pc != 0x0029A2D4u) [[unlikely]] return; }
L_0029A2D4:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0029A2EC; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029A2E8u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0024(c, 357u, depth + 1u); else { c.pc = 0x00193500u; return; } if (c.pc != 0x0029A2E8u) [[unlikely]] return; }
L_0029A2E8:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0029A2EC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));  if (t) { goto L_0029A324; } }
L_0029A2F4:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[2].d[0] = c.r[18].sd[0] < c.r[23].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_0029A30C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0029A320; } }
L_0029A30C:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_0029A310:
    c.r[2].d[0] = c.r[17].sd[0] < 300ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0029A254u | kUnwind; return; } goto L_0029A254; } }
    set32(c.r[2], 0u - 1u);
    c.budget -= 1;
L_0029A320:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));
    c.budget -= 1;
L_0029A324:
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
L_0029A350:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[5].sd[0] < 0; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_0029A3C0; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 26328u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029A370u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0025(c, 414u, depth + 1u); else { c.pc = 0x00197E00u; return; } if (c.pc != 0x0029A370u) [[unlikely]] return; }
L_0029A370:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0029A3C0; } }
    set32(c.r[4], ld32((c.r[2].w[0] + 52u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x47500000u);
    c.r[3].d[0] = c.r[3].d[0] | 21076ull;
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0029A3C0; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0029A3C0; } }
    set32(c.r[5], ld32((c.r[2].w[0] + 64u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_0029A3A4; } }
    c.r[3].d[0] = ld8((c.r[5].w[0] + 108u));
    c.budget -= 1;
L_0029A3A4:
    c.r[4].d[0] = c.r[3].d[0] & 255ull;
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0029A3C0; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0029A3C0; } }
    st8((c.r[5].w[0] + 108u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_0029A3C0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0029A3D0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[1].w[0] + 26328u)));
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029A400u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0025(c, 414u, depth + 1u); else { c.pc = 0x00197E00u; return; } if (c.pc != 0x0029A400u) [[unlikely]] return; }
L_0029A400:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0029A434; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 52u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x47500000u);
    c.r[3].d[0] = c.r[3].d[0] | 21076ull;
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_0029A434; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029A428u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0024(c, 356u, depth + 1u); else { c.pc = 0x001934E0u; return; } if (c.pc != 0x0029A428u) [[unlikely]] return; }
L_0029A428:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029A434u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0024(c, 357u, depth + 1u); else { c.pc = 0x00193500u; return; } if (c.pc != 0x0029A434u) [[unlikely]] return; }
L_0029A434:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0029A450:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x474F0000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[7].d[0] = c.r[2].d[0] | 16970ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029A46Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_002C(c, 200u, depth + 1u); else { c.pc = 0x001B1A30u; return; } if (c.pc != 0x0029A46Cu) [[unlikely]] return; }
L_0029A46C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 6528u);
    st32((c.r[16].w[0] + 56u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 68u)));
    c.f[0] = ld32((c.r[2].w[0]));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    st32((c.r[16].w[0] + 96u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 68u)));
    c.f[0] = ld32((c.r[2].w[0] + 4u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    st32((c.r[16].w[0] + 100u), c.r[2].w[0]);
    st8((c.r[16].w[0] + 105u), static_cast<std::uint8_t>(0u));
    set32(c.r[25], ld32((c.r[16].w[0] + 56u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 36u)));
    c.budget -= 21;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0029A4C0u); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0029A4C0u) [[unlikely]] return; }
L_0029A4C0:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0029A4E0:
    c.budget -= 2;
    {  goto L_0029A4F0; }
L_0029A4F0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[2].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 5u));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0029A598; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 105u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0029A598; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 100u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0029A58C; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 56u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0029A534u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0029A534u) [[unlikely]] return; }
L_0029A534:
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    set32(c.r[3], c.r[29].w[0] + 48u);
    st128((c.r[3].w[0]) & ~15u, c.r[2]);
    set32(c.r[25], ld32((c.r[16].w[0] + 56u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0029A550u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0029A550u) [[unlikely]] return; }
L_0029A550:
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    set32(c.r[3], c.r[29].w[0] + 32u);
    set32(c.r[4], 0u - 1u);
    st128((c.r[3].w[0]) & ~15u, c.r[2]);
    c.f[12] = ld32((c.r[29].w[0] + 48u));
    set32(c.r[6], ld32((c.r[16].w[0] + 96u)));
    c.f[13] = ld32((c.r[29].w[0] + 52u));
    c.f[14] = ld32((c.r[29].w[0] + 56u));
    c.f[15] = ld32((c.r[29].w[0] + 32u));
    c.f[16] = ld32((c.r[29].w[0] + 36u));
    c.f[17] = ld32((c.r[29].w[0] + 40u));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029A584u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003E(c, 165u, depth + 1u); else { c.pc = 0x001F9D70u; return; } if (c.pc != 0x0029A584u) [[unlikely]] return; }
L_0029A584:
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0] + 105u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_0029A58C:
    set32(c.r[3], ld32((c.r[16].w[0] + 100u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st32((c.r[16].w[0] + 100u), c.r[3].w[0]);
    c.budget -= 3;
L_0029A598:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0029A5B0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029A5C4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0066(c, 219u, depth + 1u); else { c.pc = 0x0029A450u; return; } if (c.pc != 0x0029A5C4u) [[unlikely]] return; }
L_0029A5C4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 6464u);
    st32((c.r[16].w[0] + 56u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 68u)));
    c.f[0] = ld32((c.r[2].w[0] + 8u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    st32((c.r[16].w[0] + 112u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 68u)));
    c.f[0] = ld32((c.r[2].w[0] + 12u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    st32((c.r[16].w[0] + 116u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 68u)));
    c.f[0] = ld32((c.r[2].w[0] + 16u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    st32((c.r[16].w[0] + 120u), c.r[2].w[0]);
    set32(c.r[25], ld32((c.r[16].w[0] + 56u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 36u)));
    c.budget -= 26;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0029A62Cu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0029A62Cu) [[unlikely]] return; }
L_0029A62C:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0029A640:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0029A688; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 6528u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029A670u); st32((c.r[17].w[0] + 56u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_002C(c, 203u, depth + 1u); else { c.pc = 0x001B1AC0u; return; } if (c.pc != 0x0029A670u) [[unlikely]] return; }
L_0029A670:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0029A68C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029A688u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x0029A688u) [[unlikely]] return; }
L_0029A688:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0029A68C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0029A6A0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029A6B4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0066(c, 223u, depth + 1u); else { c.pc = 0x0029A4F0u; return; } if (c.pc != 0x0029A6B4u) [[unlikely]] return; }
L_0029A6B4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0029A758; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 112u)));
    c.f[1] = 0u;
    st32((c.r[4].w[0] + 164u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 116u)));
    st32((c.r[4].w[0] + 168u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 120u)));
    st32((c.r[4].w[0] + 172u), c.r[2].w[0]);
    st32((c.r[4].w[0] + 176u), 0u);
    set32(c.r[3], ld32((c.r[16].w[0] + 68u)));
    c.f[2] = ld32((c.r[3].w[0] + 20u));
    fpu_compare(c, fp::key(c.f[2]) == fp::key(c.f[1]));
    c.budget -= 13;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0029A710; } }
    c.f[0] = ld32((c.r[3].w[0] + 24u));
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0029A710; } }
    c.f[0] = ld32((c.r[3].w[0] + 28u));
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0029A72C; } }
L_0029A710:
    c.f[1] = ld32((c.r[3].w[0] + 28u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = ld32((c.r[3].w[0] + 24u));
    st32((c.r[4].w[0] + 224u), c.f[2]);
    st32((c.r[4].w[0] + 228u), c.f[0]);
    st32((c.r[4].w[0] + 232u), c.f[1]);
    st32((c.r[4].w[0] + 236u), c.r[2].w[0]);
    c.budget -= 7;
L_0029A72C:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x4C490000u);  if (t) { goto L_0029A738; } }
    set32(c.r[4], c.r[4].w[0] + 436u);
    c.budget -= 1;
L_0029A738:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029A740u); c.r[5].d[0] = c.r[2].d[0] | 18248ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x0029A740u) [[unlikely]] return; }
L_0029A740:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_0029A74C; } }
    set32(c.r[4], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 1;
L_0029A74C:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_0029A758; } }
    st32((c.r[4].w[0] + 164u), c.r[3].w[0]);
    c.budget -= 1;
L_0029A758:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0029A770:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[5], 0u + 5u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029A788u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 256u, depth + 1u); else { c.pc = 0x0013E440u; return; } if (c.pc != 0x0029A788u) [[unlikely]] return; }
L_0029A788:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[16].w[0] + 16u);
    set32(c.r[2], c.r[2].w[0] + 6432u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    st128((c.r[3].w[0]) & ~15u, c.vu0.vf[0]);
    c.f[0] = 0u;
    set32(c.r[2], c.r[16].w[0] + 48u);
    st32((c.r[16].w[0] + 32u), c.f[0]);
    st32((c.r[16].w[0] + 36u), 0u);
    st128((c.r[2].w[0]) & ~15u, c.vu0.vf[0]);
    set32(c.r[4], 0u + 1u);
    set32(c.r[3], 0u + 1u);
    st32((c.r[16].w[0] + 64u), c.r[4].w[0]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st8((c.r[16].w[0] + 68u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 19;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0029A7E0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0029A828; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 6432u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029A810u); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E490u; return; } if (c.pc != 0x0029A810u) [[unlikely]] return; }
L_0029A810:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0029A82C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029A828u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x0029A828u) [[unlikely]] return; }
L_0029A828:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0029A82C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0029A840:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 64u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st32((c.r[4].w[0] + 64u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 64u)));
    c.budget -= 12;
    { const bool t = c.r[3].sd[0] >= 0; c.r[18].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0029A8A4; } }
    c.r[3].d[0] = ld8((c.r[18].w[0] + 68u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0029A9C8; } }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_0029A89C; } }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_0029A89C; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0029A89Cu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0029A89Cu) [[unlikely]] return; }
L_0029A89C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  if (t) { goto L_0029A9CC; } }
L_0029A8A4:
    set32(c.r[4], c.r[18].w[0] + 16u);
    set32(c.r[3], c.r[18].w[0] + 48u);
    ld128((c.r[4].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[3].w[0]) & ~15u, c.vu0.vf[5]);
    vu::add(c.vu0, 14u, 4u, 4u, 5u);
    st128((c.r[4].w[0]) & ~15u, c.vu0.vf[4]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_0029A9BC; } }
L_0029A8C4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], c.r[17].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + 28320u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[16], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0029A9C8; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 392u));
    c.r[3].d[0] = c.r[3].d[0] << 61;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0029A9B8; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x53590000u);  if (t) { goto L_0029A908; } }
    set32(c.r[4], c.r[4].w[0] + 436u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x53590000u);
    c.budget -= 2;
L_0029A908:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029A910u); c.r[5].d[0] = c.r[2].d[0] | 20035ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x0029A910u) [[unlikely]] return; }
L_0029A910:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_0029A924; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[2].w[0] + 16u)));  if (t) { goto L_0029A924; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0029A924:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029A92Cu);  if (depth < kMaxDepth) unit_0033(c, 101u, depth + 1u); else { c.pc = 0x001CD4B0u; return; } if (c.pc != 0x0029A92Cu) [[unlikely]] return; }
L_0029A92C:
    c.r[19].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029A938u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0034(c, 132u, depth + 1u); else { c.pc = 0x001D14B0u; return; } if (c.pc != 0x0029A938u) [[unlikely]] return; }
L_0029A938:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0029A970; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029A948u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0034(c, 131u, depth + 1u); else { c.pc = 0x001D14A0u; return; } if (c.pc != 0x0029A948u) [[unlikely]] return; }
L_0029A948:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0029A970; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029A958u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0034(c, 133u, depth + 1u); else { c.pc = 0x001D14E0u; return; } if (c.pc != 0x0029A958u) [[unlikely]] return; }
L_0029A958:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0029A970; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029A968u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0034(c, 140u, depth + 1u); else { c.pc = 0x001D1640u; return; } if (c.pc != 0x0029A968u) [[unlikely]] return; }
L_0029A968:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0029A974; } }
L_0029A970:
    c.r[19].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0029A974:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] != 0ull;  if (t) { goto L_0029A9B8; } }
    set32(c.r[4], c.r[16].w[0] + 224u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029A988u); set32(c.r[5], c.r[18].w[0] + 16u);  if (depth < kMaxDepth) unit_0011(c, 15u, depth + 1u); else { c.pc = 0x001443D0u; return; } if (c.pc != 0x0029A988u) [[unlikely]] return; }
L_0029A988:
    c.f[1] = ld32((c.r[18].w[0] + 32u));
    c.f[1] = fp::mul(c.f[1], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0029A9B8; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0029A9B0u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0029A9B0u) [[unlikely]] return; }
L_0029A9B0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0029A9C8; } }
L_0029A9B8:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_0029A9BC:
    c.r[3].d[0] = c.r[17].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0029A8C4u | kUnwind; return; } goto L_0029A8C4; } }
L_0029A9C8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_0029A9CC:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0029A9F0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x474F0000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[7].d[0] = c.r[2].d[0] | 16970ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029AA0Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_002C(c, 200u, depth + 1u); else { c.pc = 0x001B1A30u; return; } if (c.pc != 0x0029AA0Cu) [[unlikely]] return; }
L_0029AA0C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x52450000u);
    set32(c.r[4], c.r[16].w[0] + 96u);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u + 1u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029AA28u); c.r[8].d[0] = c.r[2].d[0] | 17996ull;  if (depth < kMaxDepth) unit_0037(c, 132u, depth + 1u); else { c.pc = 0x001DEA70u; return; } if (c.pc != 0x0029AA28u) [[unlikely]] return; }
L_0029AA28:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] + 6352u);
    set32(c.r[3], c.r[3].w[0] + 6404u);
    st32((c.r[16].w[0] + 56u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 120u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0029AA60:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 140u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 56u)));
    set32(c.r[16], ld32((c.r[2].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 10;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0029AA88u); c.r[17].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0029AA88u) [[unlikely]] return; }
L_0029AA88:
    ld128((c.r[2].w[0]) & ~15u, c.r[5]);
    set32(c.r[3], 0u + 48u);
    set32(c.r[4], c.r[17].w[0] + 128u);
    st128((c.r[16].w[0]) & ~15u, c.r[5]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    set32(c.r[5], ld32((c.r[17].w[0] + 48u)));
    c.f[0] = c.r[2].w[0];
    set32(c.r[2], 0u + 1u);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 28u)));
    c.f[1] = c.r[5].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    st32((c.r[16].w[0] + 16u), c.f[0]);
    st32((c.r[16].w[0] + 20u), c.r[3].w[0]);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029AACCu); st32((c.r[17].w[0] + 132u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0010(c, 152u, depth + 1u); else { c.pc = 0x00141D80u; return; } if (c.pc != 0x0029AACCu) [[unlikely]] return; }
L_0029AACC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0029AAE0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0029AAF0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0029AB54; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 6352u);
    set32(c.r[2], c.r[2].w[0] + 6404u);
    st32((c.r[17].w[0] + 56u), c.r[3].w[0]);
    set32(c.r[4], c.r[17].w[0] + 96u);
    st32((c.r[17].w[0] + 120u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029AB30u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0037(c, 141u, depth + 1u); else { c.pc = 0x001DEBE0u; return; } if (c.pc != 0x0029AB30u) [[unlikely]] return; }
L_0029AB30:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029AB3Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002C(c, 203u, depth + 1u); else { c.pc = 0x001B1AC0u; return; } if (c.pc != 0x0029AB3Cu) [[unlikely]] return; }
L_0029AB3C:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0029AB58; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029AB54u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x0029AB54u) [[unlikely]] return; }
L_0029AB54:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0029AB58:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0029AB70:
    c.f[1] = ld32((c.r[5].w[0]));
    c.f[0] = 0u;
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[6], c.f[1]);
    st32((c.r[4].w[0]), c.r[6].w[0]);
    c.f[1] = ld32((c.r[5].w[0] + 4u));
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[6], c.f[1]);
    st32((c.r[4].w[0] + 4u), c.r[6].w[0]);
    c.f[1] = ld32((c.r[5].w[0] + 8u));
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[6], c.f[1]);
    st32((c.r[4].w[0] + 8u), c.r[6].w[0]);
    c.f[1] = ld32((c.r[5].w[0] + 12u));
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[6], c.f[1]);
    st32((c.r[4].w[0] + 12u), c.r[6].w[0]);
    c.f[1] = ld32((c.r[5].w[0] + 16u));
    st32((c.r[4].w[0] + 16u), c.f[1]);
    c.f[1] = ld32((c.r[5].w[0] + 20u));
    st32((c.r[4].w[0] + 20u), c.f[1]);
    c.f[1] = ld32((c.r[5].w[0] + 24u));
    st32((c.r[4].w[0] + 24u), c.f[1]);
    c.f[1] = ld32((c.r[5].w[0] + 28u));
    st32((c.r[4].w[0] + 28u), c.f[1]);
    c.f[1] = ld32((c.r[5].w[0] + 32u));
    st32((c.r[4].w[0] + 32u), c.f[1]);
    c.f[1] = ld32((c.r[5].w[0] + 36u));
    st32((c.r[4].w[0] + 36u), c.f[1]);
    c.f[1] = ld32((c.r[5].w[0] + 40u));
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[6], c.f[1]);
    st32((c.r[4].w[0] + 40u), c.r[6].w[0]);
    c.f[1] = ld32((c.r[5].w[0] + 44u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 43;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[3], 0u + 1u);  if (t) { goto L_0029AC20; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0029AC20:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 44u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_0029AC30:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x474F0000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[7].d[0] = c.r[2].d[0] | 16970ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029AC4Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_002C(c, 200u, depth + 1u); else { c.pc = 0x001B1A30u; return; } if (c.pc != 0x0029AC4Cu) [[unlikely]] return; }
L_0029AC4C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] + 6288u);
    st32((c.r[16].w[0] + 56u), c.r[3].w[0]);
    st8((c.r[16].w[0] + 96u), static_cast<std::uint8_t>(0u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0029AC70:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0029ACB8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 6288u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029ACA0u); st32((c.r[17].w[0] + 56u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_002C(c, 203u, depth + 1u); else { c.pc = 0x001B1AC0u; return; } if (c.pc != 0x0029ACA0u) [[unlikely]] return; }
L_0029ACA0:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0029ACBC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029ACB8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x0029ACB8u) [[unlikely]] return; }
L_0029ACB8:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0029ACBC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0029ACD0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 96u));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0029AD04; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 68u)));
    c.f[0] = 0u;
    c.f[1] = ld32((c.r[3].w[0] + 44u));
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0029AD04; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029AD04u);  if (depth < kMaxDepth) unit_0066(c, 271u, depth + 1u); else { c.pc = 0x0029AD10u; return; } if (c.pc != 0x0029AD04u) [[unlikely]] return; }
L_0029AD04:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0029AD10:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u + 1u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[4].d[0] = ld8((c.r[4].w[0] + 96u));
    c.budget -= 8;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0029AD48; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 68u)));
    c.f[0] = 0u;
    c.f[1] = ld32((c.r[3].w[0] + 44u));
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0029ADC8; } }
L_0029AD48:
    set32(c.r[2], ld32((c.r[16].w[0] + 68u)));
    c.f[1] = ld32((c.r[2].w[0] + 40u));
    c.f[0] = ld32((c.r[2].w[0]));
    c.f[12] = ld32((c.r[2].w[0] + 16u));
    c.f[13] = ld32((c.r[2].w[0] + 20u));
    c.f[14] = ld32((c.r[2].w[0] + 24u));
    c.f[15] = ld32((c.r[2].w[0] + 28u));
    c.f[1] = fp::cvt_w_s(c.f[1]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    c.f[16] = ld32((c.r[2].w[0] + 32u));
    c.f[17] = ld32((c.r[2].w[0] + 36u));
    set32(c.r[4], c.f[1]);
    set32(c.r[6], c.f[0]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029AD84u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003E(c, 165u, depth + 1u); else { c.pc = 0x001F9D70u; return; } if (c.pc != 0x0029AD84u) [[unlikely]] return; }
L_0029AD84:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_0029ADC4; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 68u)));
    c.f[2] = ld32((c.r[2].w[0] + 4u));
    c.f[1] = ld32((c.r[2].w[0] + 8u));
    c.f[0] = ld32((c.r[2].w[0] + 12u));
    c.f[2] = fp::cvt_w_s(c.f[2]);
    c.f[1] = fp::cvt_w_s(c.f[1]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[2]);
    set32(c.r[6], c.f[1]);
    set32(c.r[7], c.f[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029ADC0u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0030(c, 19u, depth + 1u); else { c.pc = 0x001C02C0u; return; } if (c.pc != 0x0029ADC0u) [[unlikely]] return; }
L_0029ADC0:
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_0029ADC4:
    st8((c.r[16].w[0] + 96u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 1;
L_0029ADC8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0029ADE0:
    set32(c.r[25], ld32((c.r[4].w[0] + 56u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 68u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0];  c.pc = t; if (t - 0x00298000u < 16384u) { entry = entries_0066[(t - 0x00298000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0029ADF0:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x0029A840u | kUnwind; return; } goto L_0029A840; }
L_0029AE00:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0029AE58; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] + 6464u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0] + 56u), c.r[2].w[0]);  if (t) { goto L_0029AE40; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 6528u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029AE40u); st32((c.r[17].w[0] + 56u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_002C(c, 203u, depth + 1u); else { c.pc = 0x001B1AC0u; return; } if (c.pc != 0x0029AE40u) [[unlikely]] return; }
L_0029AE40:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0029AE5C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029AE58u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x0029AE58u) [[unlikely]] return; }
L_0029AE58:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0029AE5C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0029AE70:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x44570000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[2].d[0] | 20558ull;  c.pc = t; return; }
L_0029AE80:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x00299F10u | kUnwind; return; } goto L_00299F10; }
L_0029AE90:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 96u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0029AAE0u | kUnwind; return; } goto L_0029AAE0; }
L_0029AEA0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 96u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0029AAF0u | kUnwind; return; } goto L_0029AAF0; }
L_0029AEB0:
    set32(c.r[3], ld32((c.r[4].w[0] + 164u)));
    c.r[2].d[0] = c.r[3].sd[0] < 4400ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0029AED0; } }
    c.r[1].d[0] = c.r[3].sd[0] < 4414ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0029AED0; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0029AED0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0029AEE0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029AF08u); set32(c.r[4], 0u + 480u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0029AF08u) [[unlikely]] return; }
L_0029AF08:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_0029AF20; } }
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029AF20u); c.r[7].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0066(c, 287u, depth + 1u); else { c.pc = 0x0029AF40u; return; } if (c.pc != 0x0029AF20u) [[unlikely]] return; }
L_0029AF20:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0029AF40:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.r[16].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029AF70u); set32(c.r[5], 0u + 5u);  if (depth < kMaxDepth) unit_000F(c, 256u, depth + 1u); else { c.pc = 0x0013E440u; return; } if (c.pc != 0x0029AF70u) [[unlikely]] return; }
L_0029AF70:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029AF78u); set32(c.r[4], c.r[19].w[0] + 16u);  if (depth < kMaxDepth) unit_0030(c, 6u, depth + 1u); else { c.pc = 0x001C0080u; return; } if (c.pc != 0x0029AF78u) [[unlikely]] return; }
L_0029AF78:
    set32(c.r[4], c.r[19].w[0] + 432u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029AF84u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 29u, depth + 1u); else { c.pc = 0x0013C330u; return; } if (c.pc != 0x0029AF84u) [[unlikely]] return; }
L_0029AF84:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 6752u);
    set32(c.r[2], c.r[2].w[0] + 6768u);
    st32((c.r[19].w[0]), c.r[3].w[0]);
    set32(c.r[5], 0u + 1u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    st32((c.r[19].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] + 6788u);
    set32(c.r[2], 0u + 2u);
    st32((c.r[19].w[0] + 456u), c.r[3].w[0]);
    set32(c.r[4], 0u + 96u);
    set32(c.r[3], ld32((c.r[18].w[0] + 164u)));
    st32((c.r[19].w[0] + 460u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 168u)));
    st32((c.r[19].w[0] + 464u), c.r[3].w[0]);
    st32((c.r[19].w[0] + 468u), c.r[16].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 60u)));
    st32((c.r[19].w[0] + 472u), c.r[3].w[0]);
    st32((c.r[19].w[0] + 180u), c.r[17].w[0]);
    st32((c.r[19].w[0] + 184u), 0u);
    st32((c.r[19].w[0] + 188u), c.r[2].w[0]);
    st32((c.r[19].w[0] + 188u), c.r[5].w[0]);
    st32((c.r[19].w[0] + 192u), 0u);
    st32((c.r[19].w[0] + 196u), 0u);
    set32(c.r[2], ld32((c.r[19].w[0] + 468u)));
    set32(c.r[3], ld32((c.r[19].w[0] + 472u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 31;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029B000u); st32((c.r[2].w[0] + 1300u), c.r[5].w[0]);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0029B000u) [[unlikely]] return; }
L_0029B000:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0029B028; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[19].w[0] + 472u)));
    set32(c.r[2], ld32((c.r[19].w[0] + 468u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029B024u); set32(c.r[5], ld32((c.r[2].w[0] + 1284u)));  if (depth < kMaxDepth) unit_002D(c, 90u, depth + 1u); else { c.pc = 0x001B4F50u; return; } if (c.pc != 0x0029B024u) [[unlikely]] return; }
L_0029B024:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0029B028:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029B030u); set32(c.r[4], c.r[19].w[0] + 432u);  if (depth < kMaxDepth) unit_000F(c, 40u, depth + 1u); else { c.pc = 0x0013C4A0u; return; } if (c.pc != 0x0029B030u) [[unlikely]] return; }
L_0029B030:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029B038u); set32(c.r[4], 0u + 84u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0029B038u) [[unlikely]] return; }
L_0029B038:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0029B064; } }
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull; c.r[6].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_0029B04C; } }
    set32(c.r[6], c.r[6].w[0] + 16u);
    c.budget -= 1;
L_0029B04C:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull; c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_0029B058; } }
    set32(c.r[5], c.r[5].w[0] + 432u);
    c.budget -= 1;
L_0029B058:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029B060u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_002D(c, 107u, depth + 1u); else { c.pc = 0x001B51F0u; return; } if (c.pc != 0x0029B060u) [[unlikely]] return; }
L_0029B060:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0029B064:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029B06Cu); set32(c.r[4], c.r[19].w[0] + 432u);  if (depth < kMaxDepth) unit_000F(c, 40u, depth + 1u); else { c.pc = 0x0013C4A0u; return; } if (c.pc != 0x0029B06Cu) [[unlikely]] return; }
L_0029B06C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029B074u); set32(c.r[4], 0u + 1664u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0029B074u) [[unlikely]] return; }
L_0029B074:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0029B098; } }
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull; c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_0029B088; } }
    set32(c.r[5], c.r[5].w[0] + 432u);
    c.budget -= 1;
L_0029B088:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029B094u); set32(c.r[6], 0u + 25u);  if (depth < kMaxDepth) unit_002D(c, 119u, depth + 1u); else { c.pc = 0x001B54E0u; return; } if (c.pc != 0x0029B094u) [[unlikely]] return; }
L_0029B094:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0029B098:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029B0A0u); set32(c.r[4], c.r[19].w[0] + 432u);  if (depth < kMaxDepth) unit_000F(c, 40u, depth + 1u); else { c.pc = 0x0013C4A0u; return; } if (c.pc != 0x0029B0A0u) [[unlikely]] return; }
L_0029B0A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029B0A8u); set32(c.r[4], 0u + 44u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0029B0A8u) [[unlikely]] return; }
L_0029B0A8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0029B0C8; } }
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull; c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_0029B0BC; } }
    set32(c.r[5], c.r[5].w[0] + 432u);
    c.budget -= 1;
L_0029B0BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029B0C4u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_002D(c, 169u, depth + 1u); else { c.pc = 0x001B63B0u; return; } if (c.pc != 0x0029B0C4u) [[unlikely]] return; }
L_0029B0C4:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0029B0C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029B0D0u); set32(c.r[4], c.r[19].w[0] + 432u);  if (depth < kMaxDepth) unit_000F(c, 40u, depth + 1u); else { c.pc = 0x0013C4A0u; return; } if (c.pc != 0x0029B0D0u) [[unlikely]] return; }
L_0029B0D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029B0D8u); set32(c.r[4], 0u + 44u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0029B0D8u) [[unlikely]] return; }
L_0029B0D8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0029B0F8; } }
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull; c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_0029B0EC; } }
    set32(c.r[5], c.r[5].w[0] + 432u);
    c.budget -= 1;
L_0029B0EC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029B0F4u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_002C(c, 471u, depth + 1u); else { c.pc = 0x001B3010u; return; } if (c.pc != 0x0029B0F4u) [[unlikely]] return; }
L_0029B0F4:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0029B0F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029B100u); set32(c.r[4], c.r[19].w[0] + 432u);  if (depth < kMaxDepth) unit_000F(c, 40u, depth + 1u); else { c.pc = 0x0013C4A0u; return; } if (c.pc != 0x0029B100u) [[unlikely]] return; }
L_0029B100:
    c.r[3].d[0] = ld8((c.r[19].w[0] + 416u));
    set32(c.r[5], 0u - 2u);
    c.r[2].d[0] = 0ull & 1ull;
    c.r[7].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    set32(c.r[4], c.r[2].w[0] << 3);
    set32(c.r[6], 0u - 9u);
    c.r[2].d[0] = c.r[19].d[0] + 0ull;
    c.r[3].d[0] = c.r[3].d[0] & c.r[5].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[7].d[0];
    st8((c.r[19].w[0] + 416u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[19].w[0] + 408u));
    c.r[3].d[0] = c.r[3].d[0] & c.r[5].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[7].d[0];
    st8((c.r[19].w[0] + 408u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[19].w[0] + 411u));
    c.r[3].d[0] = c.r[3].d[0] & c.r[6].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st8((c.r[19].w[0] + 411u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[5].d[0] = ld8((c.r[19].w[0] + 419u));
    c.r[3].d[0] = c.r[3].d[0] << 60;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    set32(c.r[4], c.r[3].w[0] << 3);
    c.r[3].d[0] = c.r[5].d[0] & c.r[6].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st8((c.r[19].w[0] + 419u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[19].w[0] + 476u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 34;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0029B190:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0029B210; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] + 6752u);
    set32(c.r[3], c.r[3].w[0] + 6768u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[4], c.r[17].w[0] + 432u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + 6788u);
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[17].w[0] + 456u), c.r[2].w[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029B1E0u); st32((c.r[17].w[0] + 68u), 0u);  if (depth < kMaxDepth) unit_000F(c, 31u, depth + 1u); else { c.pc = 0x0013C3B0u; return; } if (c.pc != 0x0029B1E0u) [[unlikely]] return; }
L_0029B1E0:
    set32(c.r[4], c.r[17].w[0] + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029B1ECu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0030(c, 13u, depth + 1u); else { c.pc = 0x001C0200u; return; } if (c.pc != 0x0029B1ECu) [[unlikely]] return; }
L_0029B1EC:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029B1F8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E490u; return; } if (c.pc != 0x0029B1F8u) [[unlikely]] return; }
L_0029B1F8:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0029B214; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029B210u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x0029B210u) [[unlikely]] return; }
L_0029B210:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0029B214:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0029B230:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 472u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    ld128((c.r[3].w[0] + 208u) & ~15u, c.r[2]);
    st128((c.r[4].w[0] + 224u) & ~15u, c.r[2]);
    ld128((c.r[3].w[0] + 224u) & ~15u, c.r[2]);
    st128((c.r[4].w[0] + 240u) & ~15u, c.r[2]);
    set32(c.r[2], ld32((c.r[4].w[0] + 472u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 168u)));
    st32((c.r[4].w[0] + 184u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 472u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 176u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[4].w[0] + 192u), c.r[2].w[0]);
    set32(c.r[25], ld32((c.r[16].w[0] + 456u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 20;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0029B280u); set32(c.r[4], c.r[16].w[0] + 432u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0029B280u) [[unlikely]] return; }
L_0029B280:
    set32(c.r[4], ld32((c.r[16].w[0] + 472u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 460u)));
    set32(c.r[4], ld32((c.r[4].w[0] + 164u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0029B2B0; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0029B2B0; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0029B2B0u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0029B2B0u) [[unlikely]] return; }
L_0029B2B0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0029B2C0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029B2E8u); set32(c.r[4], 0u + 496u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0029B2E8u) [[unlikely]] return; }
L_0029B2E8:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_0029B300; } }
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029B300u); c.r[7].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0066(c, 317u, depth + 1u); else { c.pc = 0x0029B320u; return; } if (c.pc != 0x0029B300u) [[unlikely]] return; }
L_0029B300:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0029B320:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.r[16].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029B350u); set32(c.r[5], 0u + 5u);  if (depth < kMaxDepth) unit_000F(c, 256u, depth + 1u); else { c.pc = 0x0013E440u; return; } if (c.pc != 0x0029B350u) [[unlikely]] return; }
L_0029B350:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029B358u); set32(c.r[4], c.r[19].w[0] + 16u);  if (depth < kMaxDepth) unit_0030(c, 6u, depth + 1u); else { c.pc = 0x001C0080u; return; } if (c.pc != 0x0029B358u) [[unlikely]] return; }
L_0029B358:
    set32(c.r[4], c.r[19].w[0] + 432u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029B364u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 29u, depth + 1u); else { c.pc = 0x0013C330u; return; } if (c.pc != 0x0029B364u) [[unlikely]] return; }
L_0029B364:
    set32(c.r[4], c.r[19].w[0] + 460u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029B370u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_000F(c, 264u, depth + 1u); else { c.pc = 0x0013E560u; return; } if (c.pc != 0x0029B370u) [[unlikely]] return; }
L_0029B370:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 6672u);
    set32(c.r[2], c.r[2].w[0] + 6688u);
    st32((c.r[19].w[0]), c.r[3].w[0]);
    set32(c.r[5], 0u + 1u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    st32((c.r[19].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] + 6708u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    st32((c.r[19].w[0] + 456u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + 6724u);
    st32((c.r[19].w[0] + 460u), c.r[2].w[0]);
    set32(c.r[3], 0u + 3u);
    st32((c.r[19].w[0] + 492u), c.r[18].w[0]);
    set32(c.r[2], 0u + 2u);
    set32(c.r[6], ld32((c.r[18].w[0] + 164u)));
    set32(c.r[4], 0u + 96u);
    st32((c.r[19].w[0] + 472u), c.r[6].w[0]);
    set32(c.r[6], ld32((c.r[18].w[0] + 168u)));
    st32((c.r[19].w[0] + 476u), c.r[6].w[0]);
    st32((c.r[19].w[0] + 480u), c.r[16].w[0]);
    set32(c.r[6], ld32((c.r[18].w[0] + 60u)));
    st32((c.r[19].w[0] + 484u), c.r[6].w[0]);
    st32((c.r[19].w[0] + 180u), c.r[17].w[0]);
    st32((c.r[19].w[0] + 184u), 0u);
    st32((c.r[19].w[0] + 188u), c.r[3].w[0]);
    st32((c.r[19].w[0] + 188u), c.r[2].w[0]);
    st32((c.r[19].w[0] + 192u), 0u);
    st32((c.r[19].w[0] + 196u), 0u);
    set32(c.r[2], ld32((c.r[19].w[0] + 480u)));
    set32(c.r[3], ld32((c.r[19].w[0] + 484u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[2].w[0] + 1300u), c.r[5].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 480u)));
    set32(c.r[3], ld32((c.r[19].w[0] + 484u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 1284u)));
    st32((c.r[19].w[0] + 68u), c.r[2].w[0]);
    c.budget -= 43;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029B41Cu); st32((c.r[19].w[0] + 76u), c.r[18].w[0]);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0029B41Cu) [[unlikely]] return; }
L_0029B41C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0029B444; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[19].w[0] + 484u)));
    set32(c.r[2], ld32((c.r[19].w[0] + 480u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029B440u); set32(c.r[5], ld32((c.r[2].w[0] + 1284u)));  if (depth < kMaxDepth) unit_002D(c, 90u, depth + 1u); else { c.pc = 0x001B4F50u; return; } if (c.pc != 0x0029B440u) [[unlikely]] return; }
L_0029B440:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0029B444:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029B44Cu); set32(c.r[4], c.r[19].w[0] + 432u);  if (depth < kMaxDepth) unit_000F(c, 40u, depth + 1u); else { c.pc = 0x0013C4A0u; return; } if (c.pc != 0x0029B44Cu) [[unlikely]] return; }
L_0029B44C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029B454u); set32(c.r[4], 0u + 84u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0029B454u) [[unlikely]] return; }
L_0029B454:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0029B480; } }
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull; c.r[6].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_0029B468; } }
    set32(c.r[6], c.r[6].w[0] + 16u);
    c.budget -= 1;
L_0029B468:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull; c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_0029B474; } }
    set32(c.r[5], c.r[5].w[0] + 432u);
    c.budget -= 1;
L_0029B474:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029B47Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_002D(c, 107u, depth + 1u); else { c.pc = 0x001B51F0u; return; } if (c.pc != 0x0029B47Cu) [[unlikely]] return; }
L_0029B47C:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0029B480:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029B488u); set32(c.r[4], c.r[19].w[0] + 432u);  if (depth < kMaxDepth) unit_000F(c, 40u, depth + 1u); else { c.pc = 0x0013C4A0u; return; } if (c.pc != 0x0029B488u) [[unlikely]] return; }
L_0029B488:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029B490u); set32(c.r[4], 0u + 60u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0029B490u) [[unlikely]] return; }
L_0029B490:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0029B4B4; } }
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull; c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_0029B4A4; } }
    set32(c.r[5], c.r[5].w[0] + 16u);
    c.budget -= 1;
L_0029B4A4:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029B4B0u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0030(c, 98u, depth + 1u); else { c.pc = 0x001C2260u; return; } if (c.pc != 0x0029B4B0u) [[unlikely]] return; }
L_0029B4B0:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0029B4B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029B4BCu); set32(c.r[4], c.r[19].w[0] + 432u);  if (depth < kMaxDepth) unit_000F(c, 40u, depth + 1u); else { c.pc = 0x0013C4A0u; return; } if (c.pc != 0x0029B4BCu) [[unlikely]] return; }
L_0029B4BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029B4C4u); set32(c.r[4], 0u + 44u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0029B4C4u) [[unlikely]] return; }
L_0029B4C4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0029B4E4; } }
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull; c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_0029B4D8; } }
    set32(c.r[5], c.r[5].w[0] + 432u);
    c.budget -= 1;
L_0029B4D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029B4E0u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_002C(c, 471u, depth + 1u); else { c.pc = 0x001B3010u; return; } if (c.pc != 0x0029B4E0u) [[unlikely]] return; }
L_0029B4E0:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0029B4E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029B4ECu); set32(c.r[4], c.r[19].w[0] + 432u);  if (depth < kMaxDepth) unit_000F(c, 40u, depth + 1u); else { c.pc = 0x0013C4A0u; return; } if (c.pc != 0x0029B4ECu) [[unlikely]] return; }
L_0029B4EC:
    c.r[3].d[0] = ld8((c.r[19].w[0] + 416u));
    set32(c.r[5], 0u - 2u);
    c.r[2].d[0] = 0ull & 1ull;
    c.r[7].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    set32(c.r[4], c.r[2].w[0] << 3);
    set32(c.r[6], 0u - 9u);
    c.r[2].d[0] = c.r[19].d[0] + 0ull;
    c.r[3].d[0] = c.r[3].d[0] & c.r[5].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[7].d[0];
    st8((c.r[19].w[0] + 416u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[19].w[0] + 408u));
    c.r[3].d[0] = c.r[3].d[0] & c.r[5].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[7].d[0];
    st8((c.r[19].w[0] + 408u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[19].w[0] + 411u));
    c.r[3].d[0] = c.r[3].d[0] & c.r[6].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st8((c.r[19].w[0] + 411u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[5].d[0] = ld8((c.r[19].w[0] + 419u));
    c.r[3].d[0] = c.r[3].d[0] << 60;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    set32(c.r[4], c.r[3].w[0] << 3);
    c.r[3].d[0] = c.r[5].d[0] & c.r[6].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st8((c.r[19].w[0] + 419u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[19].w[0] + 488u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 34;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0029B580:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0029B630; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 6672u);
    set32(c.r[2], c.r[2].w[0] + 6688u);
    st32((c.r[17].w[0]), c.r[3].w[0]);
    set32(c.r[6], 0u + 2u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    st32((c.r[17].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] + 6708u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] + 6724u);
    st32((c.r[17].w[0] + 456u), c.r[3].w[0]);
    st32((c.r[17].w[0] + 460u), c.r[2].w[0]);
    set32(c.r[4], c.r[17].w[0] + 460u);
    st32((c.r[17].w[0] + 68u), 0u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[17].w[0] + 480u)));
    set32(c.r[3], ld32((c.r[17].w[0] + 484u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029B5F4u); st32((c.r[2].w[0] + 1300u), c.r[6].w[0]);  if (depth < kMaxDepth) unit_000F(c, 266u, depth + 1u); else { c.pc = 0x0013E5B0u; return; } if (c.pc != 0x0029B5F4u) [[unlikely]] return; }
L_0029B5F4:
    set32(c.r[4], c.r[17].w[0] + 432u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029B600u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000F(c, 31u, depth + 1u); else { c.pc = 0x0013C3B0u; return; } if (c.pc != 0x0029B600u) [[unlikely]] return; }
L_0029B600:
    set32(c.r[4], c.r[17].w[0] + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029B60Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0030(c, 13u, depth + 1u); else { c.pc = 0x001C0200u; return; } if (c.pc != 0x0029B60Cu) [[unlikely]] return; }
L_0029B60C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029B618u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E490u; return; } if (c.pc != 0x0029B618u) [[unlikely]] return; }
L_0029B618:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0029B634; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029B630u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x0029B630u) [[unlikely]] return; }
L_0029B630:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0029B634:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0029B650:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], 0u + 12u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[4].w[0] + 40u), c.r[2].w[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[4].w[0] + 484u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 168u)));
    st32((c.r[4].w[0] + 184u), c.r[2].w[0]);
    set32(c.r[25], ld32((c.r[16].w[0] + 456u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 13;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0029B684u); set32(c.r[4], c.r[16].w[0] + 432u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0029B684u) [[unlikely]] return; }
L_0029B684:
    set32(c.r[4], ld32((c.r[16].w[0] + 492u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 472u)));
    set32(c.r[4], ld32((c.r[4].w[0] + 164u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0029B6B4; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0029B6B4; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0029B6B4u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0029B6B4u) [[unlikely]] return; }
L_0029B6B4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0029B6D0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 408u));
    c.r[3].d[0] = c.r[3].d[0] << 59;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0029B76C; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 480u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 484u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 1276u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0029B748; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 1292u)));
    set32(c.r[5], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == c.r[5].d[0]; set32(c.r[4], c.r[3].w[0] + 1292u);  if (t) { goto L_0029B748; } }
    st32((c.r[4].w[0]), c.r[5].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 484u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 884u)));
    c.budget -= 5;
    { const bool t = c.r[2].sd[0] > 0; set32(c.r[3], c.r[4].w[0] + 884u);  if (t) { goto L_0029B73C; } }
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0]), c.r[2].w[0]);  if (t) { goto L_0029B748; } }
L_0029B73C:
    set32(c.r[2], ld32((c.r[16].w[0] + 492u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029B748u); set32(c.r[6], ld32((c.r[2].w[0] + 912u)));  if (depth < kMaxDepth) unit_003E(c, 2u, depth + 1u); else { c.pc = 0x001F8010u; return; } if (c.pc != 0x0029B748u) [[unlikely]] return; }
L_0029B748:
    set32(c.r[2], ld32((c.r[16].w[0] + 480u)));
    set32(c.r[5], 0u + 64u);
    set32(c.r[3], ld32((c.r[16].w[0] + 484u)));
    set32(c.r[6], 0u + 128u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 1284u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029B76Cu); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0015(c, 43u, depth + 1u); else { c.pc = 0x00155DC0u; return; } if (c.pc != 0x0029B76Cu) [[unlikely]] return; }
L_0029B76C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0029B780:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x44740000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029B7ACu); c.r[5].d[0] = c.r[2].d[0] | 17010ull;  if (depth < kMaxDepth) unit_000F(c, 30u, depth + 1u); else { c.pc = 0x0013C370u; return; } if (c.pc != 0x0029B7ACu) [[unlikely]] return; }
L_0029B7AC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[4], c.r[17].w[0] + 48u);
    set32(c.r[2], c.r[2].w[0] + 6656u);
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[17].w[0] + 24u), c.r[2].w[0]);
    set32(c.r[6], 0u + 32u);
    st32((c.r[17].w[0] + 44u), 0u);
    st32((c.r[17].w[0] + 124u), c.r[16].w[0]);
    st32((c.r[17].w[0] + 112u), 0u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029B7D8u); st32((c.r[17].w[0] + 116u), 0u);  if (depth < kMaxDepth) unit_0009(c, 49u, depth + 1u); else { c.pc = 0x00124ED8u; return; } if (c.pc != 0x0029B7D8u) [[unlikely]] return; }
L_0029B7D8:
    set32(c.r[4], c.r[17].w[0] + 80u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029B7E8u); set32(c.r[6], 0u + 32u);  if (depth < kMaxDepth) unit_0009(c, 49u, depth + 1u); else { c.pc = 0x00124ED8u; return; } if (c.pc != 0x0029B7E8u) [[unlikely]] return; }
L_0029B7E8:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0029B7F4; } }
    set32(c.r[4], c.r[4].w[0] + 436u);
    c.budget -= 1;
L_0029B7F4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43500000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029B800u); c.r[5].d[0] = c.r[2].d[0] | 21071ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x0029B800u) [[unlikely]] return; }
L_0029B800:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_0029B80C; } }
    set32(c.r[18], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 1;
L_0029B80C:
    set32(c.r[4], ld32((c.r[16].w[0] + 60u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x43500000u);  if (t) { goto L_0029B81C; } }
    set32(c.r[4], c.r[4].w[0] + 436u);
    c.budget -= 1;
L_0029B81C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029B824u); c.r[5].d[0] = c.r[2].d[0] | 21071ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x0029B824u) [[unlikely]] return; }
L_0029B824:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_0029B830; } }
    set32(c.r[3], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 1;
L_0029B830:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 396u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[18].w[0] + 40u);  if (t) { goto L_0029B840; } }
    set32(c.r[2], c.r[18].w[0] + 32u);
    c.budget -= 1;
L_0029B840:
    c.r[2].d[0] = ld8((c.r[2].w[0] + 1u));
    st32((c.r[17].w[0] + 36u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 396u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0029B85C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[3].w[0] + 32u);  if (t) { goto L_0029B860; } }
L_0029B85C:
    set32(c.r[2], c.r[3].w[0] + 40u);
    c.budget -= 1;
L_0029B860:
    c.r[2].d[0] = ld8((c.r[2].w[0] + 1u));
    st32((c.r[17].w[0] + 40u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 60u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0029B878; } }
    set32(c.r[4], c.r[4].w[0] + 436u);
    c.budget -= 1;
L_0029B878:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00430000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029B884u); c.r[5].d[0] = c.r[2].d[0] | 18512ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x0029B884u) [[unlikely]] return; }
L_0029B884:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_0029B890; } }
    set32(c.r[4], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 1;
L_0029B890:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029B898u);  if (depth < kMaxDepth) unit_003C(c, 311u, depth + 1u); else { c.pc = 0x001F3D10u; return; } if (c.pc != 0x0029B898u) [[unlikely]] return; }
L_0029B898:
    st32((c.r[17].w[0] + 32u), c.r[2].w[0]);
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0029B8C0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[5], ld32((c.r[4].w[0] + 124u)));
    set32(c.r[3], ld32((c.r[5].w[0] + 168u)));
    c.r[1].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0029B8F4; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; st8((c.r[5].w[0] + 901u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0029B8F4; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0029B8F4u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0029B8F4u) [[unlikely]] return; }
L_0029B8F4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0029B900:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0029B948; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 6656u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029B930u); st32((c.r[17].w[0] + 24u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000F(c, 31u, depth + 1u); else { c.pc = 0x0013C3B0u; return; } if (c.pc != 0x0029B930u) [[unlikely]] return; }
L_0029B930:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0029B94C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029B948u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x0029B948u) [[unlikely]] return; }
L_0029B948:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0029B94C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0029B960:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[17].d[0] == 0ull; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_0029B97C; } }
    set32(c.r[4], c.r[4].w[0] + 436u);
    c.budget -= 1;
L_0029B97C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x44740000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029B988u); c.r[5].d[0] = c.r[2].d[0] | 17010ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x0029B988u) [[unlikely]] return; }
L_0029B988:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0029B99C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], ld32((c.r[2].w[0] + 16u)));  if (t) { goto L_0029B99C; } }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0029B99C:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_0029BA44; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029B9ACu); set32(c.r[4], 0u + 132u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0029B9ACu) [[unlikely]] return; }
L_0029B9AC:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull; set32(c.r[4], c.r[17].w[0] + 436u);  if (t) { goto L_0029B9CC; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029B9C4u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0066(c, 346u, depth + 1u); else { c.pc = 0x0029B780u; return; } if (c.pc != 0x0029B9C4u) [[unlikely]] return; }
L_0029B9C4:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[17].w[0] + 436u);
    c.budget -= 2;
L_0029B9CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029B9D4u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 40u, depth + 1u); else { c.pc = 0x0013C4A0u; return; } if (c.pc != 0x0029B9D4u) [[unlikely]] return; }
L_0029B9D4:
    set32(c.r[3], ld32((c.r[17].w[0] + 60u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 32u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 884u)));
    set32(c.r[4], c.r[5].w[0] << 1);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[5], c.r[4].w[0] + c.r[5].w[0]);  if (t) { goto L_0029B9F4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], c.r[5].w[0] - 200u);  if (t) { goto L_0029BA08; } }
L_0029B9F4:
    c.budget -= 2;
    { const bool t = c.r[5].sd[0] >= 0; set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[5].w[0]) >> 1));  if (t) { goto L_0029BA04; } }
    set32(c.r[3], c.r[5].w[0] + 1u);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 1));
    c.budget -= 2;
L_0029BA04:
    set32(c.r[5], c.r[3].w[0] - 50u);
    c.budget -= 1;
L_0029BA08:
    c.budget -= 2;
    { const bool t = c.r[5].sd[0] >= 0; c.r[1].d[0] = c.r[5].sd[0] < 101ll ? 1ull : 0ull;  if (t) { goto L_0029BA18; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.r[1].d[0] = c.r[5].sd[0] < 101ll ? 1ull : 0ull;
    c.budget -= 2;
L_0029BA18:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[4], c.r[5].w[0] << 3);  if (t) { goto L_0029BA28; } }
    set32(c.r[5], 0u + 100u);
    set32(c.r[4], c.r[5].w[0] << 3);
    c.budget -= 2;
L_0029BA28:
    set32(c.r[3], 0u + 3u);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] + 50u);
    st32((c.r[16].w[0] + 120u), c.r[4].w[0]);
    st8((c.r[17].w[0] + 901u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[16].w[0] + 32u)));
    st8((c.r[17].w[0] + 902u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 7;
L_0029BA44:
    set32(c.r[4], ld32((c.r[16].w[0] + 120u)));
    set32(c.r[3], 0u + 200u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; mmi::div(c, 0, c.r[4].w[0], c.r[3].w[0]);  if (t) { goto L_0029BA58; } }
    breakpoint(c, 0x0029BA54u);
    c.budget -= 1;
L_0029BA58:
    c.r[6].d[0] = c.lo.d[0];
    c.budget -= 3;
    { const bool t = c.r[6].d[0] != 0ull; set32(c.r[5], 0u + 4u);  if (t) { goto L_0029BA68; } }
    set32(c.r[5], 0u + 10u);
    c.budget -= 1;
L_0029BA68:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 3u);  if (t) { goto L_0029BA7C; } }
    set32(c.r[5], 0u + 6u);
    set32(c.r[3], 0u + 3u);
    c.budget -= 2;
L_0029BA7C:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != c.r[3].d[0]; set32(c.r[4], 0u + 4u);  if (t) { goto L_0029BA88; } }
    set32(c.r[4], 0u + 6u);
    c.budget -= 1;
L_0029BA88:
    set32(c.r[3], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] != c.r[3].d[0];  if (t) { goto L_0029BA98; } }
    set32(c.r[4], 0u + 10u);
    c.budget -= 1;
L_0029BA98:
    set32(c.r[3], ld32((c.r[16].w[0] + 44u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[16].w[0] + 44u), c.r[3].w[0]);
    c.r[3].d[0] = ld16((c.r[17].w[0] + 474u));
    c.r[3].d[0] = c.r[3].d[0] & 61680ull;
    if (c.r[3].d[0] == 0) c.r[5].d[0] = 0ull;
    set32(c.r[3], ld32((c.r[16].w[0] + 44u)));
    c.r[3].d[0] = c.r[3].d[0] & 7ull;
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    st32((c.r[3].w[0] + 48u), c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 60u)));
    c.r[3].d[0] = ld16((c.r[3].w[0] + 474u));
    c.r[3].d[0] = c.r[3].d[0] & 61680ull;
    if (c.r[3].d[0] == 0) c.r[4].d[0] = 0ull;
    set32(c.r[3], ld32((c.r[16].w[0] + 44u)));
    c.r[7].d[0] = 0ull + 0ull;
    c.r[3].d[0] = c.r[3].d[0] & 7ull;
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    st32((c.r[3].w[0] + 80u), c.r[4].w[0]);
    st32((c.r[16].w[0] + 112u), 0u);
    st32((c.r[16].w[0] + 116u), 0u);
    c.budget -= 23;
L_0029BAF4:
    set32(c.r[3], c.r[7].w[0] << 2);
    set32(c.r[5], ld32((c.r[16].w[0] + 112u)));
    set32(c.r[6], c.r[16].w[0] + c.r[3].w[0]);
    set32(c.r[7], c.r[7].w[0] + 1u);
    set32(c.r[4], ld32((c.r[6].w[0] + 48u)));
    c.r[3].d[0] = c.r[7].sd[0] < 8ll ? 1ull : 0ull;
    set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);
    st32((c.r[16].w[0] + 112u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[6].w[0] + 80u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 116u)));
    set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);
    c.budget -= 13;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[16].w[0] + 116u), c.r[4].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0029BAF4u | kUnwind; return; } goto L_0029BAF4; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 116u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 112u)));
    c.r[1].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_0029BB68; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 120u)));
    set32(c.r[3], c.r[3].w[0] - 3u);
    st32((c.r[16].w[0] + 120u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 120u)));
    c.budget -= 6;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_0029BBA4; } }
    st32((c.r[16].w[0] + 120u), 0u);
    set32(c.r[3], 0u + 2u);
    set32(c.r[5], 0u + 1u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 168u), c.r[3].w[0]);  if (t) { goto L_0029BBA4; } }
L_0029BB68:
    c.r[1].d[0] = c.r[3].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0029BBA4; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 120u)));
    set32(c.r[3], c.r[3].w[0] + 3u);
    st32((c.r[16].w[0] + 120u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 120u)));
    c.r[3].d[0] = c.r[3].sd[0] < 1000ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0029BBA4; } }
    set32(c.r[4], 0u + 1000u);
    set32(c.r[3], 0u + 3u);
    st32((c.r[16].w[0] + 120u), c.r[4].w[0]);
    set32(c.r[5], 0u + 1u);
    st32((c.r[17].w[0] + 168u), c.r[3].w[0]);
    c.budget -= 5;
L_0029BBA4:
    set32(c.r[4], ld32((c.r[16].w[0] + 120u)));
    set32(c.r[3], 0u + 10u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; mmi::div(c, 0, c.r[4].w[0], c.r[3].w[0]);  if (t) { goto L_0029BBB8; } }
    breakpoint(c, 0x0029BBB4u);
    c.budget -= 1;
L_0029BBB8:
    c.r[3].d[0] = c.lo.d[0];
    st8((c.r[17].w[0] + 902u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[16].w[0] + 44u)));
    c.r[1].d[0] = c.r[3].sd[0] < 301ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0029BBDC; } }
    set32(c.r[3], 0u + 3u);
    set32(c.r[5], 0u + 1u);
    st32((c.r[17].w[0] + 168u), c.r[3].w[0]);
    c.budget -= 3;
L_0029BBDC:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0029BD10; } }
    set32(c.r[3], 0u + 1u);
    c.r[2].d[0] = 0ull & 1ull;
    st32((c.r[17].w[0] + 872u), c.r[3].w[0]);
    set32(c.r[8], 0u - 33u);
    c.r[10].d[0] = ld8((c.r[17].w[0] + 398u));
    set32(c.r[9], c.r[2].w[0] << 5);
    set32(c.r[5], c.r[2].w[0] << 3);
    set32(c.r[6], 0u - 29u);
    c.r[2].d[0] = 0ull & 7ull;
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(4ll);
    set32(c.r[7], c.r[2].w[0] << 2);
    set32(c.r[4], 0u - 9u);
    set32(c.r[2], 0u - 5u);
    c.r[8].d[0] = c.r[10].d[0] & c.r[8].d[0];
    c.r[8].d[0] = c.r[8].d[0] | c.r[9].d[0];
    st8((c.r[17].w[0] + 398u), static_cast<std::uint8_t>(c.r[8].w[0]));
    st32((c.r[17].w[0] + 176u), 0u);
    set32(c.r[9], ld32((c.r[17].w[0] + 168u)));
    set32(c.r[8], ld32((c.r[17].w[0] + 60u)));
    st32((c.r[8].w[0] + 168u), c.r[9].w[0]);
    set32(c.r[8], ld32((c.r[17].w[0] + 60u)));
    st32((c.r[8].w[0] + 176u), 0u);
    set32(c.r[8], ld32((c.r[17].w[0] + 60u)));
    st32((c.r[8].w[0] + 640u), 0u);
    c.r[8].d[0] = ld8((c.r[17].w[0] + 393u));
    c.r[6].d[0] = c.r[8].d[0] & c.r[6].d[0];
    c.r[6].d[0] = c.r[6].d[0] | c.r[7].d[0];
    st8((c.r[17].w[0] + 393u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[6].d[0] = ld8((c.r[17].w[0] + 392u));
    c.r[2].d[0] = c.r[6].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[17].w[0] + 392u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[17].w[0] + 395u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[4].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[5].d[0];
    st8((c.r[17].w[0] + 395u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[17].w[0] + 60u)));
    c.r[2].d[0] = ld8((c.r[3].w[0] + 395u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[4].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[5].d[0];
    st8((c.r[3].w[0] + 395u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[4], ld32((c.r[17].w[0] + 1268u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 46;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0029BC9Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0029BC9Cu) [[unlikely]] return; }
L_0029BC9C:
    set32(c.r[5], ld32((c.r[17].w[0] + 164u)));
    set32(c.r[3], 0u + 4401u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; set32(c.r[6], 0u + 2u);  if (t) { goto L_0029BCF4; } }
    set32(c.r[3], 0u + 4403u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_0029BCF4; } }
    set32(c.r[3], 0u + 4405u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_0029BCF4; } }
    set32(c.r[3], 0u + 4407u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_0029BCF4; } }
    set32(c.r[3], 0u + 4409u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_0029BCF4; } }
    set32(c.r[3], 0u + 4411u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_0029BCF4; } }
    set32(c.r[3], 0u + 4413u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_0029BCF8; } }
L_0029BCF4:
    set32(c.r[6], 0u + 3u);
    c.budget -= 1;
L_0029BCF8:
    set32(c.r[4], ld32((c.r[17].w[0] + 168u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0029BD10; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029BD10u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0066(c, 314u, depth + 1u); else { c.pc = 0x0029B2C0u; return; } if (c.pc != 0x0029BD10u) [[unlikely]] return; }
L_0029BD10:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0029BD30:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0029B190u | kUnwind; return; } goto L_0029B190; }
L_0029BD40:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 432u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0029B190u | kUnwind; return; } goto L_0029B190; }
L_0029BD50:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0029B580u | kUnwind; return; } goto L_0029B580; }
L_0029BD60:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 432u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0029B580u | kUnwind; return; } goto L_0029B580; }
L_0029BD70:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 460u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0029B6D0u | kUnwind; return; } goto L_0029B6D0; }
L_0029BD80:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 460u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0029B580u | kUnwind; return; } goto L_0029B580; }
L_0029BD90:
    st32((c.r[4].w[0]), 0u);
    set32(c.r[2], c.r[4].w[0] + 128u);
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
    st32((c.r[4].w[0] + 56u), 0u);
    st32((c.r[4].w[0] + 76u), 0u);
    st32((c.r[4].w[0] + 80u), 0u);
    st32((c.r[4].w[0] + 84u), 0u);
    st32((c.r[4].w[0] + 88u), 0u);
    st32((c.r[4].w[0] + 92u), 0u);
    st32((c.r[4].w[0] + 96u), 0u);
    st32((c.r[4].w[0] + 100u), 0u);
    st32((c.r[4].w[0] + 104u), 0u);
    st32((c.r[4].w[0] + 108u), 0u);
    st32((c.r[4].w[0] + 112u), 0u);
    st32((c.r[4].w[0] + 116u), 0u);
    st32((c.r[4].w[0] + 160u), 0u);
    st64((c.r[4].w[0] + 168u), 0ull);
    st128((c.r[2].w[0]) & ~15u, c.vu0.vf[0]);
    set32(c.r[3], 0u + 1u);
    st128((c.r[4].w[0] + 144u) & ~15u, c.r[0]);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    st8((c.r[4].w[0] + 176u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 177u), static_cast<std::uint8_t>(0u));
    c.budget -= 37;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 178u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_0029BE30:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const bool t = c.r[18].d[0] == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { [[clang::musttail]] return unit_0067(c, 5u, depth); } }
    set32(c.r[4], ld32((c.r[18].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0029BE6C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029BE6Cu);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100210u; return; } if (c.pc != 0x0029BE6Cu) [[unlikely]] return; }
L_0029BE6C:
    st32((c.r[18].w[0] + 24u), 0u);
    set32(c.r[4], ld32((c.r[18].w[0] + 28u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0029BE84; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029BE84u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100210u; return; } if (c.pc != 0x0029BE84u) [[unlikely]] return; }
L_0029BE84:
    st32((c.r[18].w[0] + 28u), 0u);
    set32(c.r[2], ld32((c.r[18].w[0] + 40u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0029BEA4; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[2].w[0] - 16u);  if (t) { goto L_0029BEA4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029BEA4u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100210u; return; } if (c.pc != 0x0029BEA4u) [[unlikely]] return; }
L_0029BEA4:
    st32((c.r[18].w[0] + 40u), 0u);
    set32(c.r[4], ld32((c.r[18].w[0] + 44u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0029BEBC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029BEBCu);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100210u; return; } if (c.pc != 0x0029BEBCu) [[unlikely]] return; }
L_0029BEBC:
    st32((c.r[18].w[0] + 44u), 0u);
    set32(c.r[4], ld32((c.r[18].w[0] + 48u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0029BED4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029BED4u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100210u; return; } if (c.pc != 0x0029BED4u) [[unlikely]] return; }
L_0029BED4:
    st32((c.r[18].w[0] + 48u), 0u);
    set32(c.r[4], ld32((c.r[18].w[0] + 52u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0029BEEC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029BEECu);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100210u; return; } if (c.pc != 0x0029BEECu) [[unlikely]] return; }
L_0029BEEC:
    st32((c.r[18].w[0] + 52u), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0029BF18; } }
L_0029BEF8:
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 60u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[19], c.r[2].w[0] + 60u);  if (t) { goto L_0029BF10; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029BF10u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100210u; return; } if (c.pc != 0x0029BF10u) [[unlikely]] return; }
L_0029BF10:
    st32((c.r[19].w[0]), 0u);
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 2;
L_0029BF18:
    set32(c.r[2], ld32((c.r[18].w[0] + 56u)));
    c.r[2].d[0] = c.r[16].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[16].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0029BEF8u | kUnwind; return; } goto L_0029BEF8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0029BF98; } }
L_0029BF30:
    set32(c.r[2], ld32((c.r[18].w[0] + 80u)));
    set32(c.r[19], c.r[16].w[0] << 2);
    set32(c.r[20], c.r[2].w[0] + c.r[19].w[0]);
    set32(c.r[4], ld32((c.r[20].w[0])));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0029BF50; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029BF50u);  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x0029BF50u) [[unlikely]] return; }
L_0029BF50:
    st32((c.r[20].w[0]), 0u);
    set32(c.r[2], ld32((c.r[18].w[0] + 84u)));
    set32(c.r[20], c.r[2].w[0] + c.r[19].w[0]);
    set32(c.r[4], ld32((c.r[20].w[0])));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0029BF70; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029BF70u);  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x0029BF70u) [[unlikely]] return; }
L_0029BF70:
    st32((c.r[20].w[0]), 0u);
    set32(c.r[2], ld32((c.r[18].w[0] + 88u)));
    set32(c.r[19], c.r[2].w[0] + c.r[19].w[0]);
    set32(c.r[4], ld32((c.r[19].w[0])));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0029BF90; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029BF90u);  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x0029BF90u) [[unlikely]] return; }
L_0029BF90:
    st32((c.r[19].w[0]), 0u);
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 2;
L_0029BF98:
    set32(c.r[2], ld32((c.r[18].w[0] + 76u)));
    c.r[2].d[0] = c.r[16].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0029BF30u | kUnwind; return; } goto L_0029BF30; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 80u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0029BFBC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029BFBCu);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100210u; return; } if (c.pc != 0x0029BFBCu) [[unlikely]] return; }
L_0029BFBC:
    st32((c.r[18].w[0] + 80u), 0u);
    set32(c.r[4], ld32((c.r[18].w[0] + 84u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0029BFD4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029BFD4u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100210u; return; } if (c.pc != 0x0029BFD4u) [[unlikely]] return; }
L_0029BFD4:
    st32((c.r[18].w[0] + 84u), 0u);
    set32(c.r[4], ld32((c.r[18].w[0] + 88u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0029BFEC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029BFECu);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100210u; return; } if (c.pc != 0x0029BFECu) [[unlikely]] return; }
L_0029BFEC:
    st32((c.r[18].w[0] + 88u), 0u);
    set32(c.r[4], ld32((c.r[18].w[0] + 96u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_0067(c, 2u, depth); } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029C004u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100210u; return; } if (c.pc != 0x0029C004u) [[unlikely]] return; }
    [[clang::musttail]] return unit_0067(c, 2u, depth);
}

}
