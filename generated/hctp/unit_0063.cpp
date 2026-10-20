#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0063[4096] = {
    1, 2, 0, 3, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0,
    0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 17, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 22, 0, 0, 0, 23, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 26, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    28, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 33, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 38, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 46, 0,
    0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0,
    50, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 54, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 0,
    0, 58, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0, 62,
    0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 69, 0, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 72, 0, 0, 73, 0, 0, 0,
    0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 76, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0,
    80, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 82,
    0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0,
    86, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 91, 0, 0, 92, 0, 0, 93, 0, 0, 0, 94, 0, 0, 0, 0, 95, 0, 0, 0, 96, 0,
    0, 0, 0, 97, 0, 0, 98, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0,
    105, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 107, 0, 0, 108, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 110, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0, 114, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 118, 0,
    119, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 122, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 125, 0, 0, 126, 0, 0, 127,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 129, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 132, 0, 0, 133,
    0, 0, 134, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 136, 0, 0, 137, 0,
    0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    144, 0, 0, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 148,
    0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0,
    153, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0, 155, 0,
    0, 0, 0, 0, 0, 0, 0, 156, 0, 0, 157, 0, 0, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 159, 0, 0, 160, 0, 0, 161,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 162, 0, 0, 163, 0, 0, 0, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    165, 0, 0, 0, 0, 0, 0, 0, 0, 166, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 0, 0,
    0, 168, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 173, 0, 0, 0, 174, 0, 0, 175, 0, 0, 0, 176, 0, 0, 177, 0, 0, 0, 0, 0, 0, 178, 0, 0, 179, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 0, 181, 0, 0, 182, 0, 0, 0, 183, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 184, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 185, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    186, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 0, 0, 188, 0, 189, 0, 0, 0, 0, 0, 0, 0, 0, 0, 190,
    0, 191, 0, 0, 192, 0, 0, 0, 0, 0, 0, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 198, 0, 0, 0, 199, 0, 0, 200, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 202, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 203,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 204, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 205,
    0, 0, 0, 0, 0, 0, 0, 206, 0, 207, 0, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 209,
    0, 210, 0, 0, 211, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 212, 0, 0, 0, 0, 0, 0, 0, 213, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 215, 0, 0, 0, 0, 0, 0, 0, 216, 0, 0, 0, 0, 0,
    0, 0, 217, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 218, 0, 0, 0, 219, 0, 0, 220, 0, 0, 0, 0, 221, 0, 0, 0, 0,
    0, 0, 0, 0, 222, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 223, 0, 0, 0, 0, 0, 0, 224, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 225, 0, 0, 226, 0, 0, 0, 0, 0, 0,
    227, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 228, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 229, 0, 0, 0, 0, 0, 0, 0, 230, 0, 0, 0, 231, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 232, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 233, 0, 0, 0, 234, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 235, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 236, 0, 0, 0, 0, 0, 0, 0, 237, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 238, 0, 0, 239, 0, 0, 0, 0, 240, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 241, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 242, 0, 0, 243, 0,
    244, 0, 0, 0, 245, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 246, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 247, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 248, 0, 0, 0, 0, 0, 0, 249, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 250, 0, 0, 0, 251, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 252, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    253, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 254, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 256, 0, 0, 0, 0, 0, 0, 257, 0, 0, 0, 0, 0, 0, 258, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 259, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 260, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    261, 0, 0, 0, 0, 0, 0, 262, 0, 0, 0, 0, 0, 0, 0, 0, 263, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 264, 0, 0, 265, 0, 0, 0, 0, 0, 0, 0, 0, 0, 266, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 267, 0, 0, 0, 0, 0, 268, 0, 0, 269, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 270, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 271, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    272, 0, 0, 273, 0, 0, 0, 0, 274, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 275, 0, 0, 276, 0, 0, 0, 0, 0, 277, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 278, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 279, 0, 0, 0, 280, 0, 0, 281, 0, 0, 282, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 283, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 284, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 285, 0, 0, 0, 0, 0, 0, 286, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 287, 0, 0, 0, 0, 0, 0, 288, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 289, 0, 0, 290, 0, 0, 0, 0, 0, 0, 291, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 292, 0, 0, 293, 0, 0, 0, 0, 294, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 295, 0, 0, 296, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 297,
    0, 0, 298, 0, 0, 0, 299, 0, 0, 300, 0, 0, 301, 0, 0, 0, 0, 302, 0, 0, 303, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    304, 0, 0, 305, 0, 0, 0, 0, 0, 0, 306, 0, 0, 307, 0, 0, 308, 0, 0, 0, 309, 0, 0, 310, 0, 0, 311, 0, 0, 0, 0, 312,
    0, 0, 313, 0, 0, 0, 0, 0, 314, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 315, 0, 0, 0, 316, 0, 0, 317, 0, 0, 0, 0, 0,
    0, 0, 0, 318, 0, 0, 0, 319, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 320, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 321, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 322, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 323, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 324, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 325, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 326, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 327, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 328, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 329, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 330, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 331, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 332, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 333, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 334, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 335, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 336, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 337, 0, 0, 0, 0, 0, 0, 0,
    338, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 339, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    340, 0, 0, 0, 0, 0, 0, 0, 341, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 342, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 343, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 344, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 345, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 346, 0, 0, 0, 0, 0, 0, 0, 0, 347, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 348, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 349, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 350, 0, 0, 0, 0, 0, 0, 0, 0, 351, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 352, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 353, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 354, 0, 0, 0, 0, 355, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 356, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 357, 0, 0, 0, 0, 0, 0, 0, 0, 358, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 359, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 360, 0, 0, 0, 0, 0, 0, 0,
};

void unit_0063(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_0028C000;
    case 2u: goto L_0028C004;
    case 3u: goto L_0028C00C;
    case 4u: goto L_0028C020;
    case 5u: goto L_0028C040;
    case 6u: goto L_0028C078;
    case 7u: goto L_0028C090;
    case 8u: goto L_0028C0D0;
    case 9u: goto L_0028C118;
    case 10u: goto L_0028C144;
    case 11u: goto L_0028C168;
    case 12u: goto L_0028C190;
    case 13u: goto L_0028C1D8;
    case 14u: goto L_0028C204;
    case 15u: goto L_0028C228;
    case 16u: goto L_0028C250;
    case 17u: goto L_0028C288;
    case 18u: goto L_0028C29C;
    case 19u: goto L_0028C34C;
    case 20u: goto L_0028C370;
    case 21u: goto L_0028C3A8;
    case 22u: goto L_0028C3BC;
    case 23u: goto L_0028C3CC;
    case 24u: goto L_0028C3DC;
    case 25u: goto L_0028C430;
    case 26u: goto L_0028C44C;
    case 27u: goto L_0028C458;
    case 28u: goto L_0028C480;
    case 29u: goto L_0028C4E4;
    case 30u: goto L_0028C514;
    case 31u: goto L_0028C6A4;
    case 32u: goto L_0028C6C8;
    case 33u: goto L_0028C704;
    case 34u: goto L_0028C710;
    case 35u: goto L_0028C75C;
    case 36u: goto L_0028C790;
    case 37u: goto L_0028C7DC;
    case 38u: goto L_0028C7F0;
    case 39u: goto L_0028C8C4;
    case 40u: goto L_0028C8F0;
    case 41u: goto L_0028C938;
    case 42u: goto L_0028C948;
    case 43u: goto L_0028C9F8;
    case 44u: goto L_0028CA20;
    case 45u: goto L_0028CA58;
    case 46u: goto L_0028CA78;
    case 47u: goto L_0028CA98;
    case 48u: goto L_0028CAAC;
    case 49u: goto L_0028CB5C;
    case 50u: goto L_0028CB80;
    case 51u: goto L_0028CBB0;
    case 52u: goto L_0028CBC0;
    case 53u: goto L_0028CBE4;
    case 54u: goto L_0028CBF8;
    case 55u: goto L_0028CC20;
    case 56u: goto L_0028CC50;
    case 57u: goto L_0028CC60;
    case 58u: goto L_0028CC84;
    case 59u: goto L_0028CC98;
    case 60u: goto L_0028CCC0;
    case 61u: goto L_0028CCEC;
    case 62u: goto L_0028CCFC;
    case 63u: goto L_0028CD14;
    case 64u: goto L_0028CD3C;
    case 65u: goto L_0028CD48;
    case 66u: goto L_0028CD70;
    case 67u: goto L_0028CD98;
    case 68u: goto L_0028CDC0;
    case 69u: goto L_0028CDCC;
    case 70u: goto L_0028CDF0;
    case 71u: goto L_0028CE28;
    case 72u: goto L_0028CE64;
    case 73u: goto L_0028CE70;
    case 74u: goto L_0028CE90;
    case 75u: goto L_0028CED0;
    case 76u: goto L_0028CF0C;
    case 77u: goto L_0028CF24;
    case 78u: goto L_0028CF40;
    case 79u: goto L_0028CF64;
    case 80u: goto L_0028CF80;
    case 81u: goto L_0028CFE0;
    case 82u: goto L_0028CFFC;
    case 83u: goto L_0028D014;
    case 84u: goto L_0028D030;
    case 85u: goto L_0028D06C;
    case 86u: goto L_0028D080;
    case 87u: goto L_0028D0A0;
    case 88u: goto L_0028D0D0;
    case 89u: goto L_0028D0E0;
    case 90u: goto L_0028D118;
    case 91u: goto L_0028D12C;
    case 92u: goto L_0028D138;
    case 93u: goto L_0028D144;
    case 94u: goto L_0028D154;
    case 95u: goto L_0028D168;
    case 96u: goto L_0028D178;
    case 97u: goto L_0028D18C;
    case 98u: goto L_0028D198;
    case 99u: goto L_0028D1A8;
    case 100u: goto L_0028D1C8;
    case 101u: goto L_0028D1F0;
    case 102u: goto L_0028D218;
    case 103u: goto L_0028D230;
    case 104u: goto L_0028D264;
    case 105u: goto L_0028D280;
    case 106u: goto L_0028D2DC;
    case 107u: goto L_0028D2EC;
    case 108u: goto L_0028D2F8;
    case 109u: goto L_0028D320;
    case 110u: goto L_0028D3A4;
    case 111u: goto L_0028D3B0;
    case 112u: goto L_0028D3D0;
    case 113u: goto L_0028D438;
    case 114u: goto L_0028D444;
    case 115u: goto L_0028D460;
    case 116u: goto L_0028D498;
    case 117u: goto L_0028D4E8;
    case 118u: goto L_0028D4F8;
    case 119u: goto L_0028D500;
    case 120u: goto L_0028D50C;
    case 121u: goto L_0028D530;
    case 122u: goto L_0028D574;
    case 123u: goto L_0028D5A4;
    case 124u: goto L_0028D5D4;
    case 125u: goto L_0028D5E4;
    case 126u: goto L_0028D5F0;
    case 127u: goto L_0028D5FC;
    case 128u: goto L_0028D640;
    case 129u: goto L_0028D684;
    case 130u: goto L_0028D6B0;
    case 131u: goto L_0028D6E0;
    case 132u: goto L_0028D6F0;
    case 133u: goto L_0028D6FC;
    case 134u: goto L_0028D708;
    case 135u: goto L_0028D750;
    case 136u: goto L_0028D76C;
    case 137u: goto L_0028D778;
    case 138u: goto L_0028D790;
    case 139u: goto L_0028D7C0;
    case 140u: goto L_0028D7D0;
    case 141u: goto L_0028D810;
    case 142u: goto L_0028D874;
    case 143u: goto L_0028D8C0;
    case 144u: goto L_0028D900;
    case 145u: goto L_0028D928;
    case 146u: goto L_0028D950;
    case 147u: goto L_0028D968;
    case 148u: goto L_0028D97C;
    case 149u: goto L_0028D998;
    case 150u: goto L_0028D9A8;
    case 151u: goto L_0028D9D4;
    case 152u: goto L_0028D9EC;
    case 153u: goto L_0028DA00;
    case 154u: goto L_0028DA68;
    case 155u: goto L_0028DA78;
    case 156u: goto L_0028DA9C;
    case 157u: goto L_0028DAA8;
    case 158u: goto L_0028DACC;
    case 159u: goto L_0028DAE4;
    case 160u: goto L_0028DAF0;
    case 161u: goto L_0028DAFC;
    case 162u: goto L_0028DB24;
    case 163u: goto L_0028DB30;
    case 164u: goto L_0028DB58;
    case 165u: goto L_0028DB80;
    case 166u: goto L_0028DBA4;
    case 167u: goto L_0028DBE0;
    case 168u: goto L_0028DC04;
    case 169u: goto L_0028DC38;
    case 170u: goto L_0028DC58;
    case 171u: goto L_0028DC98;
    case 172u: goto L_0028DCBC;
    case 173u: goto L_0028DD04;
    case 174u: goto L_0028DD14;
    case 175u: goto L_0028DD20;
    case 176u: goto L_0028DD30;
    case 177u: goto L_0028DD3C;
    case 178u: goto L_0028DD58;
    case 179u: goto L_0028DD64;
    case 180u: goto L_0028DDA0;
    case 181u: goto L_0028DDC0;
    case 182u: goto L_0028DDCC;
    case 183u: goto L_0028DDDC;
    case 184u: goto L_0028DE10;
    case 185u: goto L_0028DE3C;
    case 186u: goto L_0028DE80;
    case 187u: goto L_0028DEAC;
    case 188u: goto L_0028DECC;
    case 189u: goto L_0028DED4;
    case 190u: goto L_0028DEFC;
    case 191u: goto L_0028DF04;
    case 192u: goto L_0028DF10;
    case 193u: goto L_0028DF38;
    case 194u: goto L_0028DF60;
    case 195u: goto L_0028DF94;
    case 196u: goto L_0028DFB4;
    case 197u: goto L_0028DFD4;
    case 198u: goto L_0028E008;
    case 199u: goto L_0028E018;
    case 200u: goto L_0028E024;
    case 201u: goto L_0028E038;
    case 202u: goto L_0028E050;
    case 203u: goto L_0028E07C;
    case 204u: goto L_0028E0D0;
    case 205u: goto L_0028E0FC;
    case 206u: goto L_0028E11C;
    case 207u: goto L_0028E124;
    case 208u: goto L_0028E13C;
    case 209u: goto L_0028E17C;
    case 210u: goto L_0028E184;
    case 211u: goto L_0028E190;
    case 212u: goto L_0028E1CC;
    case 213u: goto L_0028E1EC;
    case 214u: goto L_0028E214;
    case 215u: goto L_0028E248;
    case 216u: goto L_0028E268;
    case 217u: goto L_0028E288;
    case 218u: goto L_0028E2BC;
    case 219u: goto L_0028E2CC;
    case 220u: goto L_0028E2D8;
    case 221u: goto L_0028E2EC;
    case 222u: goto L_0028E310;
    case 223u: goto L_0028E3A4;
    case 224u: goto L_0028E3C0;
    case 225u: goto L_0028E458;
    case 226u: goto L_0028E464;
    case 227u: goto L_0028E480;
    case 228u: goto L_0028E4E8;
    case 229u: goto L_0028E510;
    case 230u: goto L_0028E530;
    case 231u: goto L_0028E540;
    case 232u: goto L_0028E570;
    case 233u: goto L_0028E5A4;
    case 234u: goto L_0028E5B4;
    case 235u: goto L_0028E5F8;
    case 236u: goto L_0028E620;
    case 237u: goto L_0028E640;
    case 238u: goto L_0028E6D0;
    case 239u: goto L_0028E6DC;
    case 240u: goto L_0028E6F0;
    case 241u: goto L_0028E720;
    case 242u: goto L_0028E76C;
    case 243u: goto L_0028E778;
    case 244u: goto L_0028E780;
    case 245u: goto L_0028E790;
    case 246u: goto L_0028E7C0;
    case 247u: goto L_0028E7F0;
    case 248u: goto L_0028E8C4;
    case 249u: goto L_0028E8E0;
    case 250u: goto L_0028E910;
    case 251u: goto L_0028E920;
    case 252u: goto L_0028E950;
    case 253u: goto L_0028E980;
    case 254u: goto L_0028E9D0;
    case 255u: goto L_0028E9E0;
    case 256u: goto L_0028EA38;
    case 257u: goto L_0028EA54;
    case 258u: goto L_0028EA70;
    case 259u: goto L_0028EB10;
    case 260u: goto L_0028EB44;
    case 261u: goto L_0028EB80;
    case 262u: goto L_0028EB9C;
    case 263u: goto L_0028EBC0;
    case 264u: goto L_0028EC3C;
    case 265u: goto L_0028EC48;
    case 266u: goto L_0028EC70;
    case 267u: goto L_0028ECA4;
    case 268u: goto L_0028ECBC;
    case 269u: goto L_0028ECC8;
    case 270u: goto L_0028ECF8;
    case 271u: goto L_0028ED30;
    case 272u: goto L_0028ED80;
    case 273u: goto L_0028ED8C;
    case 274u: goto L_0028EDA0;
    case 275u: goto L_0028EE0C;
    case 276u: goto L_0028EE18;
    case 277u: goto L_0028EE30;
    case 278u: goto L_0028EE78;
    case 279u: goto L_0028EEC4;
    case 280u: goto L_0028EED4;
    case 281u: goto L_0028EEE0;
    case 282u: goto L_0028EEEC;
    case 283u: goto L_0028EF20;
    case 284u: goto L_0028EF60;
    case 285u: goto L_0028EFC4;
    case 286u: goto L_0028EFE0;
    case 287u: goto L_0028F044;
    case 288u: goto L_0028F060;
    case 289u: goto L_0028F098;
    case 290u: goto L_0028F0A4;
    case 291u: goto L_0028F0C0;
    case 292u: goto L_0028F110;
    case 293u: goto L_0028F11C;
    case 294u: goto L_0028F130;
    case 295u: goto L_0028F1C4;
    case 296u: goto L_0028F1D0;
    case 297u: goto L_0028F1FC;
    case 298u: goto L_0028F208;
    case 299u: goto L_0028F218;
    case 300u: goto L_0028F224;
    case 301u: goto L_0028F230;
    case 302u: goto L_0028F244;
    case 303u: goto L_0028F250;
    case 304u: goto L_0028F280;
    case 305u: goto L_0028F28C;
    case 306u: goto L_0028F2A8;
    case 307u: goto L_0028F2B4;
    case 308u: goto L_0028F2C0;
    case 309u: goto L_0028F2D0;
    case 310u: goto L_0028F2DC;
    case 311u: goto L_0028F2E8;
    case 312u: goto L_0028F2FC;
    case 313u: goto L_0028F308;
    case 314u: goto L_0028F320;
    case 315u: goto L_0028F3CC;
    case 316u: goto L_0028F3DC;
    case 317u: goto L_0028F3E8;
    case 318u: goto L_0028F40C;
    case 319u: goto L_0028F41C;
    case 320u: goto L_0028F450;
    case 321u: goto L_0028F4B4;
    case 322u: goto L_0028F4E0;
    case 323u: goto L_0028F524;
    case 324u: goto L_0028F55C;
    case 325u: goto L_0028F5E0;
    case 326u: goto L_0028F61C;
    case 327u: goto L_0028F660;
    case 328u: goto L_0028F6A8;
    case 329u: goto L_0028F6D4;
    case 330u: goto L_0028F71C;
    case 331u: goto L_0028F7A0;
    case 332u: goto L_0028F7E0;
    case 333u: goto L_0028F828;
    case 334u: goto L_0028F854;
    case 335u: goto L_0028F89C;
    case 336u: goto L_0028F920;
    case 337u: goto L_0028F960;
    case 338u: goto L_0028F980;
    case 339u: goto L_0028F9D4;
    case 340u: goto L_0028FA00;
    case 341u: goto L_0028FA20;
    case 342u: goto L_0028FA74;
    case 343u: goto L_0028FAA0;
    case 344u: goto L_0028FADC;
    case 345u: goto L_0028FB38;
    case 346u: goto L_0028FBC8;
    case 347u: goto L_0028FBEC;
    case 348u: goto L_0028FC4C;
    case 349u: goto L_0028FCA0;
    case 350u: goto L_0028FD14;
    case 351u: goto L_0028FD38;
    case 352u: goto L_0028FD98;
    case 353u: goto L_0028FDF0;
    case 354u: goto L_0028FE30;
    case 355u: goto L_0028FE44;
    case 356u: goto L_0028FE84;
    case 357u: goto L_0028FF08;
    case 358u: goto L_0028FF2C;
    case 359u: goto L_0028FF8C;
    case 360u: goto L_0028FFE0;
    default: bad_entry(c, 0x0028C000u); return;
    }
L_0028C000:
    set32(c.r[2], c.r[29].w[0] + 80u);
    c.budget -= 1;
L_0028C004:
    st128((c.r[2].w[0]) & ~15u, c.vu0.vf[0]);
    set32(c.r[17], c.r[29].w[0] + 80u);
    c.budget -= 2;
L_0028C00C:
    set32(c.r[2], ld32((c.r[19].w[0] + 1392u)));
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[2].w[0] + 52u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028C020u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0049(c, 142u, depth + 1u); else { c.pc = 0x00225E00u; return; } if (c.pc != 0x0028C020u) [[unlikely]] return; }
L_0028C020:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_0028C040:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0028C07C; } }
    c.r[2].d[0] = c.r[5].d[0] << 48;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 6048u);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] <= 0; st32((c.r[16].w[0] + 16u), c.r[3].w[0]);  if (t) { goto L_0028C078; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028C078u);  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x0028C078u) [[unlikely]] return; }
L_0028C078:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0028C07C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0028C090:
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[4].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0028C0B0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0028C0BC; } }
L_0028C0B0:
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 3;
L_0028C0BC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0028C0D0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00470000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] - 30672u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 20u)));
    set32(c.r[16], c.r[5].w[0] + 24u);
    set32(c.r[5], ld32((c.r[5].w[0] + 20u)));
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[4], c.r[29].w[0] + 72u);
    set32(c.r[6], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[18], ld32((c.r[5].w[0])));
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028C118u); set32(c.r[5], c.r[18].w[0] + 224u);  if (depth < kMaxDepth) unit_005C(c, 29u, depth + 1u); else { c.pc = 0x002705F0u; return; } if (c.pc != 0x0028C118u) [[unlikely]] return; }
L_0028C118:
    set32(c.r[2], c.r[29].w[0] + 72u);
    set32(c.r[5], c.r[29].w[0] + 76u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    set32(c.r[4], c.r[18].w[0] + 224u);
    st16((c.r[5].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[3], ld32((c.r[17].w[0] + 20u)));
    set32(c.r[2], c.r[2].w[0] - 30672u);
    set32(c.r[3], c.r[3].w[0] << 4);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028C144u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0011(c, 14u, depth + 1u); else { c.pc = 0x001443A0u; return; } if (c.pc != 0x0028C144u) [[unlikely]] return; }
L_0028C144:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40400000u);
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0028C16C; } }
    c.r[5].d[0] = ld16((c.r[29].w[0] + 76u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028C168u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 56u, depth + 1u); else { c.pc = 0x002711B0u; return; } if (c.pc != 0x0028C168u) [[unlikely]] return; }
L_0028C168:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0028C16C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0028C190:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00470000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] - 30736u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 20u)));
    set32(c.r[16], c.r[5].w[0] + 24u);
    set32(c.r[5], ld32((c.r[5].w[0] + 20u)));
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[4], c.r[29].w[0] + 72u);
    set32(c.r[6], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[18], ld32((c.r[5].w[0])));
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028C1D8u); set32(c.r[5], c.r[18].w[0] + 224u);  if (depth < kMaxDepth) unit_005C(c, 29u, depth + 1u); else { c.pc = 0x002705F0u; return; } if (c.pc != 0x0028C1D8u) [[unlikely]] return; }
L_0028C1D8:
    set32(c.r[2], c.r[29].w[0] + 72u);
    set32(c.r[5], c.r[29].w[0] + 76u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    set32(c.r[4], c.r[18].w[0] + 224u);
    st16((c.r[5].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[3], ld32((c.r[17].w[0] + 20u)));
    set32(c.r[2], c.r[2].w[0] - 30736u);
    set32(c.r[3], c.r[3].w[0] << 4);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028C204u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0011(c, 14u, depth + 1u); else { c.pc = 0x001443A0u; return; } if (c.pc != 0x0028C204u) [[unlikely]] return; }
L_0028C204:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40400000u);
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0028C22C; } }
    c.r[5].d[0] = ld16((c.r[29].w[0] + 76u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028C228u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 56u, depth + 1u); else { c.pc = 0x002711B0u; return; } if (c.pc != 0x0028C228u) [[unlikely]] return; }
L_0028C228:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0028C22C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0028C250:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[5], c.r[18].w[0] + 32u);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[17], c.r[2].w[0] + 24u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20u)));
    set32(c.r[16], ld32((c.r[2].w[0])));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028C288u); set32(c.r[4], c.r[16].w[0] + 224u);  if (depth < kMaxDepth) unit_0011(c, 14u, depth + 1u); else { c.pc = 0x001443A0u; return; } if (c.pc != 0x0028C288u) [[unlikely]] return; }
L_0028C288:
    c.f[20] = c.f[0];
    set32(c.r[4], c.r[29].w[0] + 92u);
    set32(c.r[5], c.r[16].w[0] + 224u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028C29Cu); set32(c.r[6], c.r[18].w[0] + 32u);  if (depth < kMaxDepth) unit_005C(c, 29u, depth + 1u); else { c.pc = 0x002705F0u; return; } if (c.pc != 0x0028C29Cu) [[unlikely]] return; }
L_0028C29C:
    c.r[2].d[0] = ld16((c.r[29].w[0] + 92u));
    c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    st16((c.r[18].w[0] + 48u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.f[1] = ld32((c.r[16].w[0] + 304u));
    c.f[0] = ld32((c.r[1].w[0] - 30416u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 10;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[3].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0028C2DC; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[0] = ld32((c.r[1].w[0] - 30424u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0028C2DC; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0028C2DC:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);  if (t) { goto L_0028C2FC; } }
    c.f[1] = ld32((c.r[16].w[0] + 312u));
    c.f[0] = ld32((c.r[1].w[0] - 30416u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0028C2FC; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0028C2FC:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);  if (t) { goto L_0028C324; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[1] = ld32((c.r[16].w[0] + 312u));
    c.f[0] = ld32((c.r[1].w[0] - 30424u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0028C320; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0028C320:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.budget -= 1;
L_0028C324:
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[20]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[3].d[0] = c.r[5].d[0] & 255ull;  if (t) { goto L_0028C340; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0028C350; } }
L_0028C340:
    c.r[5].d[0] = ld16((c.r[18].w[0] + 48u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028C34Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 56u, depth + 1u); else { c.pc = 0x002711B0u; return; } if (c.pc != 0x0028C34Cu) [[unlikely]] return; }
L_0028C34C:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0028C350:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0028C370:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[5], c.r[17].w[0] + 32u);
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[16], c.r[2].w[0] + 24u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20u)));
    set32(c.r[18], ld32((c.r[2].w[0])));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028C3A8u); set32(c.r[4], c.r[18].w[0] + 224u);  if (depth < kMaxDepth) unit_0011(c, 14u, depth + 1u); else { c.pc = 0x001443A0u; return; } if (c.pc != 0x0028C3A8u) [[unlikely]] return; }
L_0028C3A8:
    c.f[20] = c.f[0];
    set32(c.r[4], c.r[29].w[0] + 92u);
    set32(c.r[5], c.r[18].w[0] + 224u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028C3BCu); set32(c.r[6], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_005C(c, 29u, depth + 1u); else { c.pc = 0x002705F0u; return; } if (c.pc != 0x0028C3BCu) [[unlikely]] return; }
L_0028C3BC:
    c.r[2].d[0] = ld16((c.r[29].w[0] + 92u));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028C3CCu); st16((c.r[17].w[0] + 48u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0034(c, 135u, depth + 1u); else { c.pc = 0x001D1520u; return; } if (c.pc != 0x0028C3CCu) [[unlikely]] return; }
L_0028C3CC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_0028C3F0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028C3DCu);  if (depth < kMaxDepth) unit_0059(c, 72u, depth + 1u); else { c.pc = 0x00265040u; return; } if (c.pc != 0x0028C3DCu) [[unlikely]] return; }
L_0028C3DC:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0028C3F0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0028C45C; } }
L_0028C3F0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[20]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0028C45C; } }
    c.f[1] = ld32((c.r[18].w[0] + 1024u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41700000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_0028C434; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028C430u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_005C(c, 69u, depth + 1u); else { c.pc = 0x00271340u; return; } if (c.pc != 0x0028C430u) [[unlikely]] return; }
L_0028C430:
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 1;
L_0028C434:
    c.r[2].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0028C45C; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028C44Cu); set32(c.r[5], 0u + 64u);  if (depth < kMaxDepth) unit_005C(c, 56u, depth + 1u); else { c.pc = 0x002711B0u; return; } if (c.pc != 0x0028C44Cu) [[unlikely]] return; }
L_0028C44C:
    c.r[5].d[0] = ld16((c.r[17].w[0] + 48u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028C458u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 56u, depth + 1u); else { c.pc = 0x002711B0u; return; } if (c.pc != 0x0028C458u) [[unlikely]] return; }
L_0028C458:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0028C45C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0028C480:
    set32(c.r[29], c.r[29].w[0] - 128u);
    set32(c.r[2], 0u + 8u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    c.r[2].d[0] = c.r[2].d[0] << 32;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[16], ld32((c.r[3].w[0] + 20u)));
    set32(c.r[19], c.r[3].w[0] + 24u);
    set32(c.r[4], c.r[29].w[0] + 96u);
    set32(c.r[18], ld32((c.r[16].w[0])));
    set32(c.r[17], ld32((c.r[18].w[0] + 984u)));
    ld128((c.r[17].w[0] + 224u) & ~15u, c.r[3]);
    st128((c.r[4].w[0]) & ~15u, c.r[3]);
    c.r[3].d[0] = ld64((c.r[18].w[0] + 704u));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 23;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0028C51C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028C4E4u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126B58u; return; } if (c.pc != 0x0028C4E4u) [[unlikely]] return; }
L_0028C4E4:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; c.r[3].d[0] = c.r[2].d[0] & 3ull;  if (t) { goto L_0028C4F8; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0028C4F8; } }
    set32(c.r[3], c.r[3].w[0] - 4u);
    c.budget -= 1;
L_0028C4F8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] - 20640u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[5].d[0] = ld16((c.r[2].w[0]));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028C514u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 69u, depth + 1u); else { c.pc = 0x00271340u; return; } if (c.pc != 0x0028C514u) [[unlikely]] return; }
L_0028C514:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0028C76C; } }
L_0028C51C:
    set32(c.r[3], ld32((c.r[20].w[0] + 24u)));
    set32(c.r[2], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0x42100000u);  if (t) { goto L_0028C644; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_0028C5F4; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0028C5A0; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0028C550; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[29].w[0] + 124u);  if (t) { goto L_0028C698; } }
L_0028C550:
    c.f[1] = ld32((c.r[29].w[0] + 96u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC2100000u);
    st32((c.r[29].w[0] + 104u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC1A00000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[2].sd[0] = static_cast<std::int32_t>(0x41A00000u);  if (t) { goto L_0028C57C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[1] = c.f[0];  if (t) { goto L_0028C598; } }
L_0028C57C:
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0028C598; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[1] = c.f[0];  if (t) { goto L_0028C598; } }
L_0028C598:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 96u), c.f[1]);  if (t) { goto L_0028C694; } }
L_0028C5A0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC2100000u);
    set32(c.r[3], c.r[29].w[0] + 104u);
    st32((c.r[29].w[0] + 96u), c.r[2].w[0]);
    c.f[1] = ld32((c.r[3].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC1A00000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 10;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[2].sd[0] = static_cast<std::int32_t>(0x41A00000u);  if (t) { goto L_0028C5D0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[1] = c.f[0];  if (t) { goto L_0028C5EC; } }
L_0028C5D0:
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0028C5EC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[1] = c.f[0];  if (t) { goto L_0028C5EC; } }
L_0028C5EC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0]), c.f[1]);  if (t) { goto L_0028C694; } }
L_0028C5F4:
    c.f[1] = ld32((c.r[29].w[0] + 96u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42100000u);
    st32((c.r[29].w[0] + 104u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC1A00000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[2].sd[0] = static_cast<std::int32_t>(0x41A00000u);  if (t) { goto L_0028C620; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[1] = c.f[0];  if (t) { goto L_0028C63C; } }
L_0028C620:
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0028C63C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[1] = c.f[0];  if (t) { goto L_0028C63C; } }
L_0028C63C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 96u), c.f[1]);  if (t) { goto L_0028C694; } }
L_0028C644:
    set32(c.r[3], c.r[29].w[0] + 104u);
    st32((c.r[29].w[0] + 96u), c.r[2].w[0]);
    c.f[1] = ld32((c.r[3].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC1A00000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0028C670; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[1] = c.f[0];  if (t) { goto L_0028C690; } }
L_0028C670:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0028C690; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[1] = c.f[0];  if (t) { goto L_0028C690; } }
L_0028C690:
    st32((c.r[3].w[0]), c.f[1]);
    c.budget -= 1;
L_0028C694:
    set32(c.r[4], c.r[29].w[0] + 124u);
    c.budget -= 1;
L_0028C698:
    set32(c.r[5], c.r[18].w[0] + 224u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028C6A4u); set32(c.r[6], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_005C(c, 29u, depth + 1u); else { c.pc = 0x002705F0u; return; } if (c.pc != 0x0028C6A4u) [[unlikely]] return; }
L_0028C6A4:
    c.r[2].d[0] = ld16((c.r[29].w[0] + 124u));
    set32(c.r[4], c.r[18].w[0] + 224u);
    set32(c.r[5], c.r[29].w[0] + 96u);
    st16((c.r[20].w[0] + 20u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[16].w[0] + 429u));
    c.r[2].d[0] = c.r[2].d[0] << 60;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028C6C8u); c.r[16].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;  if (depth < kMaxDepth) unit_0011(c, 14u, depth + 1u); else { c.pc = 0x001443A0u; return; } if (c.pc != 0x0028C6C8u) [[unlikely]] return; }
L_0028C6C8:
    c.f[2] = ld32((c.r[18].w[0] + 1024u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41800000u);
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0028C718; } }
    c.r[2].d[0] = ld64((c.r[17].w[0] + 704u));
    c.r[2].d[0] = c.r[2].d[0] & 3ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0028C718; } }
    c.r[5].d[0] = ld8((c.r[18].w[0] + 368u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028C704u); set32(c.r[4], c.r[29].w[0] + 120u);  if (depth < kMaxDepth) unit_005C(c, 21u, depth + 1u); else { c.pc = 0x00270370u; return; } if (c.pc != 0x0028C704u) [[unlikely]] return; }
L_0028C704:
    c.r[5].d[0] = ld16((c.r[29].w[0] + 120u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028C710u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 69u, depth + 1u); else { c.pc = 0x00271340u; return; } if (c.pc != 0x0028C710u) [[unlikely]] return; }
L_0028C710:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0028C76C; } }
L_0028C718:
    set32(c.r[2], ld32((c.r[20].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0; set32(c.r[3], c.r[2].w[0] - 1u);  if (t) { goto L_0028C730; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0]), c.r[3].w[0]);  if (t) { goto L_0028C76C; } }
L_0028C730:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0028C750; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; set32(c.r[3], 0u + 120u);  if (t) { goto L_0028C764; } }
L_0028C750:
    c.r[5].d[0] = ld16((c.r[20].w[0] + 20u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028C75Cu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 56u, depth + 1u); else { c.pc = 0x002711B0u; return; } if (c.pc != 0x0028C75Cu) [[unlikely]] return; }
L_0028C75C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0028C76C; } }
L_0028C764:
    set32(c.r[2], 0u + 1u);
    st32((c.r[20].w[0]), c.r[3].w[0]);
    c.budget -= 2;
L_0028C76C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_0028C790:
    set32(c.r[29], c.r[29].w[0] - 96u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[3], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[2], ld32((c.r[1].w[0] + 31608u)));
    set32(c.r[17], c.r[3].w[0] + 24u);
    set32(c.r[3], ld32((c.r[3].w[0] + 20u)));
    set32(c.r[16], ld32((c.r[3].w[0])));
    c.budget -= 14;
    { const bool t = c.r[2].d[0] == 0ull; c.r[18].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0028C7D0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0028C8C8; } }
L_0028C7D0:
    set32(c.r[4], c.r[16].w[0] + 224u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028C7DCu); set32(c.r[5], c.r[18].w[0] + 32u);  if (depth < kMaxDepth) unit_0011(c, 14u, depth + 1u); else { c.pc = 0x001443A0u; return; } if (c.pc != 0x0028C7DCu) [[unlikely]] return; }
L_0028C7DC:
    c.f[20] = c.f[0];
    set32(c.r[4], c.r[29].w[0] + 92u);
    set32(c.r[5], c.r[16].w[0] + 224u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028C7F0u); set32(c.r[6], c.r[18].w[0] + 32u);  if (depth < kMaxDepth) unit_005C(c, 29u, depth + 1u); else { c.pc = 0x002705F0u; return; } if (c.pc != 0x0028C7F0u) [[unlikely]] return; }
L_0028C7F0:
    c.r[2].d[0] = ld16((c.r[29].w[0] + 92u));
    c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    st16((c.r[18].w[0] + 48u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.f[1] = ld32((c.r[16].w[0] + 304u));
    c.f[0] = ld32((c.r[1].w[0] - 30432u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 10;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[3].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0028C830; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[0] = ld32((c.r[1].w[0] - 30440u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0028C830; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0028C830:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);  if (t) { goto L_0028C850; } }
    c.f[1] = ld32((c.r[16].w[0] + 312u));
    c.f[0] = ld32((c.r[1].w[0] - 30432u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0028C850; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0028C850:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);  if (t) { goto L_0028C870; } }
    c.f[1] = ld32((c.r[16].w[0] + 312u));
    c.f[0] = ld32((c.r[1].w[0] - 30440u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[4].d[0] = c.r[5].d[0] & 255ull;  if (t) { goto L_0028C874; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0028C870:
    c.r[4].d[0] = c.r[5].d[0] & 255ull;
    c.budget -= 1;
L_0028C874:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[2], 0u + 180u);  if (t) { goto L_0028C880; } }
    st32((c.r[18].w[0] + 52u), c.r[2].w[0]);
    c.budget -= 1;
L_0028C880:
    set32(c.r[3], ld32((c.r[18].w[0] + 52u)));
    set32(c.r[2], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].sd[0] <= 0; st32((c.r[18].w[0] + 52u), c.r[2].w[0]);  if (t) { goto L_0028C898; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0028C8C8; } }
L_0028C898:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[20]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0028C8B8; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0028C8C8; } }
L_0028C8B8:
    c.r[5].d[0] = ld16((c.r[18].w[0] + 48u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028C8C4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 56u, depth + 1u); else { c.pc = 0x002711B0u; return; } if (c.pc != 0x0028C8C4u) [[unlikely]] return; }
L_0028C8C4:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0028C8C8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0028C8F0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[2], ld32((c.r[1].w[0] + 31608u)));
    set32(c.r[17], c.r[3].w[0] + 24u);
    set32(c.r[3], ld32((c.r[3].w[0] + 20u)));
    set32(c.r[16], ld32((c.r[3].w[0])));
    c.budget -= 13;
    { const bool t = c.r[2].d[0] == 0ull; c.r[18].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0028C92C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0028C9FC; } }
L_0028C92C:
    set32(c.r[4], c.r[16].w[0] + 224u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028C938u); set32(c.r[5], c.r[18].w[0] + 32u);  if (depth < kMaxDepth) unit_0011(c, 14u, depth + 1u); else { c.pc = 0x001443A0u; return; } if (c.pc != 0x0028C938u) [[unlikely]] return; }
L_0028C938:
    set32(c.r[4], c.r[29].w[0] + 76u);
    set32(c.r[5], c.r[16].w[0] + 224u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028C948u); set32(c.r[6], c.r[18].w[0] + 32u);  if (depth < kMaxDepth) unit_005C(c, 29u, depth + 1u); else { c.pc = 0x002705F0u; return; } if (c.pc != 0x0028C948u) [[unlikely]] return; }
L_0028C948:
    c.r[2].d[0] = ld16((c.r[29].w[0] + 76u));
    c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    st16((c.r[18].w[0] + 48u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.f[1] = ld32((c.r[16].w[0] + 304u));
    c.f[0] = ld32((c.r[1].w[0] - 30432u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 10;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[3].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0028C988; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[0] = ld32((c.r[1].w[0] - 30440u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0028C988; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0028C988:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);  if (t) { goto L_0028C9A8; } }
    c.f[1] = ld32((c.r[16].w[0] + 312u));
    c.f[0] = ld32((c.r[1].w[0] - 30432u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0028C9A8; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0028C9A8:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);  if (t) { goto L_0028C9C8; } }
    c.f[1] = ld32((c.r[16].w[0] + 312u));
    c.f[0] = ld32((c.r[1].w[0] - 30440u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0028C9C8; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0028C9C8:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0028C9D8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_0028CA00; } }
L_0028C9D8:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 378u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0028C9EC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0028C9FC; } }
L_0028C9EC:
    c.r[5].d[0] = ld16((c.r[18].w[0] + 48u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028C9F8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 56u, depth + 1u); else { c.pc = 0x002711B0u; return; } if (c.pc != 0x0028C9F8u) [[unlikely]] return; }
L_0028C9F8:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0028C9FC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_0028CA00:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0028CA20:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[5], c.r[18].w[0] + 32u);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[17], c.r[2].w[0] + 24u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20u)));
    set32(c.r[16], ld32((c.r[2].w[0])));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028CA58u); set32(c.r[4], c.r[16].w[0] + 224u);  if (depth < kMaxDepth) unit_0011(c, 14u, depth + 1u); else { c.pc = 0x001443A0u; return; } if (c.pc != 0x0028CA58u) [[unlikely]] return; }
L_0028CA58:
    c.r[2].d[0] = ld64((c.r[16].w[0] + 704u));
    c.r[2].d[0] = c.r[2].d[0] & 128ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; c.f[20] = c.f[0];  if (t) { goto L_0028CA80; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028CA78u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_005C(c, 69u, depth + 1u); else { c.pc = 0x00271340u; return; } if (c.pc != 0x0028CA78u) [[unlikely]] return; }
L_0028CA78:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0028CB60; } }
L_0028CA80:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 379u));
    set32(c.r[2], 0u + 253u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[4], c.r[29].w[0] + 92u);  if (t) { goto L_0028CAA0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028CA98u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 84u, depth + 1u); else { c.pc = 0x00271550u; return; } if (c.pc != 0x0028CA98u) [[unlikely]] return; }
L_0028CA98:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0028CB60; } }
L_0028CAA0:
    set32(c.r[5], c.r[16].w[0] + 224u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028CAACu); set32(c.r[6], c.r[18].w[0] + 32u);  if (depth < kMaxDepth) unit_005C(c, 29u, depth + 1u); else { c.pc = 0x002705F0u; return; } if (c.pc != 0x0028CAACu) [[unlikely]] return; }
L_0028CAAC:
    c.r[2].d[0] = ld16((c.r[29].w[0] + 92u));
    c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    st16((c.r[18].w[0] + 48u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.f[1] = ld32((c.r[16].w[0] + 304u));
    c.f[0] = ld32((c.r[1].w[0] - 30416u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 10;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[3].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0028CAEC; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[0] = ld32((c.r[1].w[0] - 30424u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0028CAEC; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0028CAEC:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);  if (t) { goto L_0028CB0C; } }
    c.f[1] = ld32((c.r[16].w[0] + 312u));
    c.f[0] = ld32((c.r[1].w[0] - 30416u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0028CB0C; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0028CB0C:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);  if (t) { goto L_0028CB34; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[1] = ld32((c.r[16].w[0] + 312u));
    c.f[0] = ld32((c.r[1].w[0] - 30424u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0028CB30; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0028CB30:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.budget -= 1;
L_0028CB34:
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[20]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[3].d[0] = c.r[5].d[0] & 255ull;  if (t) { goto L_0028CB50; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0028CB60; } }
L_0028CB50:
    c.r[5].d[0] = ld16((c.r[18].w[0] + 48u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028CB5Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 56u, depth + 1u); else { c.pc = 0x002711B0u; return; } if (c.pc != 0x0028CB5Cu) [[unlikely]] return; }
L_0028CB5C:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0028CB60:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0028CB80:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[16], c.r[2].w[0] + 24u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20u)));
    set32(c.r[18], ld32((c.r[2].w[0])));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028CBB0u); set32(c.r[4], ld32((c.r[4].w[0] + 20u)));  if (depth < kMaxDepth) unit_006F(c, 221u, depth + 1u); else { c.pc = 0x002BE530u; return; } if (c.pc != 0x0028CBB0u) [[unlikely]] return; }
L_0028CBB0:
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 72u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028CBC0u); set32(c.r[5], c.r[18].w[0] + 224u);  if (depth < kMaxDepth) unit_005C(c, 29u, depth + 1u); else { c.pc = 0x002705F0u; return; } if (c.pc != 0x0028CBC0u) [[unlikely]] return; }
L_0028CBC0:
    set32(c.r[2], c.r[29].w[0] + 72u);
    set32(c.r[5], c.r[29].w[0] + 76u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    st16((c.r[5].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    set32(c.r[5], ld32((c.r[17].w[0] + 20u)));
    c.f[12] = c.r[2].w[0];
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028CBE4u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_006F(c, 237u, depth + 1u); else { c.pc = 0x002BEA10u; return; } if (c.pc != 0x0028CBE4u) [[unlikely]] return; }
L_0028CBE4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0028CC00; } }
    c.r[5].d[0] = ld16((c.r[29].w[0] + 76u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028CBF8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 56u, depth + 1u); else { c.pc = 0x002711B0u; return; } if (c.pc != 0x0028CBF8u) [[unlikely]] return; }
L_0028CBF8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0028CC04; } }
L_0028CC00:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0028CC04:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0028CC20:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[16], c.r[2].w[0] + 24u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20u)));
    set32(c.r[18], ld32((c.r[2].w[0])));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028CC50u); set32(c.r[4], ld32((c.r[4].w[0] + 20u)));  if (depth < kMaxDepth) unit_006F(c, 221u, depth + 1u); else { c.pc = 0x002BE530u; return; } if (c.pc != 0x0028CC50u) [[unlikely]] return; }
L_0028CC50:
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 72u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028CC60u); set32(c.r[5], c.r[18].w[0] + 224u);  if (depth < kMaxDepth) unit_005C(c, 29u, depth + 1u); else { c.pc = 0x002705F0u; return; } if (c.pc != 0x0028CC60u) [[unlikely]] return; }
L_0028CC60:
    set32(c.r[2], c.r[29].w[0] + 72u);
    set32(c.r[5], c.r[29].w[0] + 76u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    st16((c.r[5].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    set32(c.r[5], ld32((c.r[17].w[0] + 20u)));
    c.f[12] = c.r[2].w[0];
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028CC84u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_006F(c, 237u, depth + 1u); else { c.pc = 0x002BEA10u; return; } if (c.pc != 0x0028CC84u) [[unlikely]] return; }
L_0028CC84:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0028CCA0; } }
    c.r[5].d[0] = ld16((c.r[29].w[0] + 76u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028CC98u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 56u, depth + 1u); else { c.pc = 0x002711B0u; return; } if (c.pc != 0x0028CC98u) [[unlikely]] return; }
L_0028CC98:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0028CCA4; } }
L_0028CCA0:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0028CCA4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0028CCC0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[17], ld32((c.r[2].w[0] + 20u)));
    set32(c.r[16], ld32((c.r[17].w[0])));
    c.r[4].d[0] = ld8((c.r[16].w[0] + 369u));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028CCECu); set32(c.r[18], c.r[2].w[0] + 24u);  if (depth < kMaxDepth) unit_0035(c, 43u, depth + 1u); else { c.pc = 0x001D5040u; return; } if (c.pc != 0x0028CCECu) [[unlikely]] return; }
L_0028CCEC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0028CD04; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028CCFCu); c.r[4].d[0] = ld8((c.r[16].w[0] + 369u));  if (depth < kMaxDepth) unit_0035(c, 45u, depth + 1u); else { c.pc = 0x001D50B0u; return; } if (c.pc != 0x0028CCFCu) [[unlikely]] return; }
L_0028CCFC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0028CD0C; } }
L_0028CD04:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0028CD4C; } }
L_0028CD0C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028CD14u); c.r[4].d[0] = ld8((c.r[16].w[0] + 369u));  if (depth < kMaxDepth) unit_005C(c, 37u, depth + 1u); else { c.pc = 0x00270F30u; return; } if (c.pc != 0x0028CD14u) [[unlikely]] return; }
L_0028CD14:
    c.r[5].d[0] = c.r[2].d[0] & 65535ull;
    c.r[2].d[0] = ld8((c.r[17].w[0] + 427u));
    c.r[2].d[0] = c.r[2].d[0] << 57;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_0028CD34; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0028CD4C; } }
L_0028CD34:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028CD3Cu);  if (depth < kMaxDepth) unit_005C(c, 56u, depth + 1u); else { c.pc = 0x002711B0u; return; } if (c.pc != 0x0028CD3Cu) [[unlikely]] return; }
L_0028CD3C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028CD48u); set32(c.r[5], 0u + 128u);  if (depth < kMaxDepth) unit_005C(c, 53u, depth + 1u); else { c.pc = 0x00271110u; return; } if (c.pc != 0x0028CD48u) [[unlikely]] return; }
L_0028CD48:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0028CD4C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0028CD70:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[16], ld32((c.r[2].w[0] + 20u)));
    set32(c.r[17], c.r[2].w[0] + 24u);
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028CD98u); c.r[4].d[0] = ld8((c.r[2].w[0] + 369u));  if (depth < kMaxDepth) unit_005C(c, 37u, depth + 1u); else { c.pc = 0x00270F30u; return; } if (c.pc != 0x0028CD98u) [[unlikely]] return; }
L_0028CD98:
    c.r[5].d[0] = c.r[2].d[0] & 65535ull;
    c.r[2].d[0] = ld8((c.r[16].w[0] + 427u));
    c.r[2].d[0] = c.r[2].d[0] << 57;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0028CDB8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0028CDD0; } }
L_0028CDB8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028CDC0u);  if (depth < kMaxDepth) unit_005C(c, 56u, depth + 1u); else { c.pc = 0x002711B0u; return; } if (c.pc != 0x0028CDC0u) [[unlikely]] return; }
L_0028CDC0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028CDCCu); set32(c.r[5], 0u + 128u);  if (depth < kMaxDepth) unit_005C(c, 53u, depth + 1u); else { c.pc = 0x00271110u; return; } if (c.pc != 0x0028CDCCu) [[unlikely]] return; }
L_0028CDCC:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0028CDD0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0028CDF0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[3], 0u + 1u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[2], 0u + 3u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[16], c.r[4].w[0] + 24u);
    set32(c.r[4], ld32((c.r[4].w[0] + 20u)));
    set32(c.r[17], ld32((c.r[4].w[0])));
    set32(c.r[4], ld32((c.r[17].w[0] + 624u)));
    if (c.r[4].d[0] != 0) c.r[3].d[0] = c.r[2].d[0];
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028CE28u); c.r[4].d[0] = c.r[3].d[0] & 255ull;  if (depth < kMaxDepth) unit_005C(c, 38u, depth + 1u); else { c.pc = 0x00270F60u; return; } if (c.pc != 0x0028CE28u) [[unlikely]] return; }
L_0028CE28:
    c.r[5].d[0] = c.r[2].d[0] & 65535ull;
    c.r[2].d[0] = ld8((c.r[17].w[0] + 370u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0028CE40; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0028CE74; } }
L_0028CE40:
    c.r[2].d[0] = ld64((c.r[17].w[0] + 712u));
    c.r[2].d[0] = c.r[2].d[0] & 224ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0028CE5C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0028CE74; } }
L_0028CE5C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028CE64u);  if (depth < kMaxDepth) unit_005C(c, 56u, depth + 1u); else { c.pc = 0x002711B0u; return; } if (c.pc != 0x0028CE64u) [[unlikely]] return; }
L_0028CE64:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028CE70u); set32(c.r[5], 0u + 128u);  if (depth < kMaxDepth) unit_005C(c, 53u, depth + 1u); else { c.pc = 0x00271110u; return; } if (c.pc != 0x0028CE70u) [[unlikely]] return; }
L_0028CE70:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0028CE74:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0028CE90:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] + 6048u);
    set32(c.r[3], c.r[3].w[0] + 5600u);
    st32((c.r[4].w[0] + 16u), c.r[2].w[0]);
    st32((c.r[4].w[0] + 12u), c.r[5].w[0]);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0]), 0u);
    st32((c.r[4].w[0] + 4u), 0u);
    st32((c.r[4].w[0] + 8u), 0u);
    st32((c.r[4].w[0] + 16u), c.r[3].w[0]);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 48u), static_cast<std::uint8_t>(0u));  c.pc = t; return; }
L_0028CED0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 12u)));
    c.r[2].d[0] = ld8((c.r[4].w[0] + 48u));
    set32(c.r[16], c.r[3].w[0] + 24u);
    set32(c.r[3], ld32((c.r[3].w[0] + 20u)));
    set32(c.r[18], ld32((c.r[3].w[0])));
    c.budget -= 12;
    { const bool t = c.r[2].d[0] != 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0028CF14; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028CF0Cu); set32(c.r[5], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_006F(c, 232u, depth + 1u); else { c.pc = 0x002BE6F0u; return; } if (c.pc != 0x0028CF0Cu) [[unlikely]] return; }
L_0028CF0C:
    set32(c.r[2], 0u + 1u);
    st8((c.r[17].w[0] + 48u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_0028CF14:
    set32(c.r[4], c.r[29].w[0] + 72u);
    set32(c.r[5], c.r[18].w[0] + 224u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028CF24u); set32(c.r[6], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_005C(c, 29u, depth + 1u); else { c.pc = 0x002705F0u; return; } if (c.pc != 0x0028CF24u) [[unlikely]] return; }
L_0028CF24:
    set32(c.r[2], c.r[29].w[0] + 72u);
    set32(c.r[3], c.r[29].w[0] + 76u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    set32(c.r[4], c.r[18].w[0] + 224u);
    set32(c.r[5], c.r[17].w[0] + 32u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028CF40u); st16((c.r[3].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0011(c, 14u, depth + 1u); else { c.pc = 0x001443A0u; return; } if (c.pc != 0x0028CF40u) [[unlikely]] return; }
L_0028CF40:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40A00000u);
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0028CF68; } }
    c.r[5].d[0] = ld16((c.r[29].w[0] + 76u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028CF64u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 56u, depth + 1u); else { c.pc = 0x002711B0u; return; } if (c.pc != 0x0028CF64u) [[unlikely]] return; }
L_0028CF64:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0028CF68:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0028CF80:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 20u)));
    set32(c.r[4], c.r[2].w[0] + 24u);
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[5], c.r[2].w[0] + 392u);
    c.r[2].d[0] = ld8((c.r[3].w[0] + 370u));
    c.budget -= 11;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0028CFB4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_0028D024; } }
L_0028CFB4:
    c.r[2].d[0] = ld64((c.r[3].w[0] + 704u));
    c.r[2].d[0] = c.r[2].d[0] & 48ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0028CFE8; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 176u)));
    c.r[1].d[0] = c.r[2].sd[0] < 11ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0028CFE8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028CFE0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_005C(c, 76u, depth + 1u); else { c.pc = 0x00271410u; return; } if (c.pc != 0x0028CFE0u) [[unlikely]] return; }
L_0028CFE0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0028D020; } }
L_0028CFE8:
    c.r[2].d[0] = ld8((c.r[3].w[0] + 378u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0028D004; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028CFFCu); c.r[5].d[0] = ld16((c.r[5].w[0] + 4u));  if (depth < kMaxDepth) unit_005C(c, 56u, depth + 1u); else { c.pc = 0x002711B0u; return; } if (c.pc != 0x0028CFFCu) [[unlikely]] return; }
L_0028CFFC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0028D020; } }
L_0028D004:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0028D01C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028D014u); c.r[5].d[0] = ld16((c.r[5].w[0] + 4u));  if (depth < kMaxDepth) unit_005C(c, 79u, depth + 1u); else { c.pc = 0x00271470u; return; } if (c.pc != 0x0028D014u) [[unlikely]] return; }
L_0028D014:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0028D020; } }
L_0028D01C:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0028D020:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_0028D024:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0028D030:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[6].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    set32(c.r[3], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[4], c.r[3].w[0] + 24u);
    set32(c.r[3], ld32((c.r[3].w[0] + 20u)));
    set32(c.r[5], ld32((c.r[3].w[0])));
    c.r[3].d[0] = ld64((c.r[5].w[0] + 704u));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 13;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x41700000u);  if (t) { goto L_0028D074; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028D06Cu); c.r[5].d[0] = ld16((c.r[6].w[0] + 20u));  if (depth < kMaxDepth) unit_005C(c, 82u, depth + 1u); else { c.pc = 0x002714D0u; return; } if (c.pc != 0x0028D06Cu) [[unlikely]] return; }
L_0028D06C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0028D088; } }
L_0028D074:
    c.f[12] = c.r[2].w[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028D080u); c.r[4].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0070(c, 26u, depth + 1u); else { c.pc = 0x002C0660u; return; } if (c.pc != 0x0028D080u) [[unlikely]] return; }
L_0028D080:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 2;
L_0028D088:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0028D0A0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[4], c.r[2].w[0] + 24u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20u)));
    set32(c.r[3], c.r[2].w[0] + 392u);
    c.r[2].d[0] = ld8((c.r[2].w[0] + 432u));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0028D0D4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028D0D0u); c.r[5].d[0] = ld16((c.r[3].w[0]));  if (depth < kMaxDepth) unit_005C(c, 56u, depth + 1u); else { c.pc = 0x002711B0u; return; } if (c.pc != 0x0028D0D0u) [[unlikely]] return; }
L_0028D0D0:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0028D0D4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0028D0E0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    set32(c.r[5], c.r[29].w[0] + 80u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[19], ld32((c.r[2].w[0] + 20u)));
    set32(c.r[17], c.r[2].w[0] + 24u);
    set32(c.r[18], ld32((c.r[19].w[0])));
    set32(c.r[16], c.r[19].w[0] + 392u);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028D118u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0071(c, 33u, depth + 1u); else { c.pc = 0x002C4640u; return; } if (c.pc != 0x0028D118u) [[unlikely]] return; }
L_0028D118:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], c.r[18].w[0] + 224u);  if (t) { goto L_0028D14C; } }
    set32(c.r[4], c.r[29].w[0] + 108u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028D12Cu); set32(c.r[6], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_005C(c, 29u, depth + 1u); else { c.pc = 0x002705F0u; return; } if (c.pc != 0x0028D12Cu) [[unlikely]] return; }
L_0028D12C:
    c.r[5].d[0] = ld16((c.r[29].w[0] + 108u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028D138u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 79u, depth + 1u); else { c.pc = 0x00271470u; return; } if (c.pc != 0x0028D138u) [[unlikely]] return; }
L_0028D138:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028D144u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_005C(c, 76u, depth + 1u); else { c.pc = 0x00271410u; return; } if (c.pc != 0x0028D144u) [[unlikely]] return; }
L_0028D144:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0028D1CC; } }
L_0028D14C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028D154u); set32(c.r[4], ld32((c.r[19].w[0])));  if (depth < kMaxDepth) unit_0071(c, 36u, depth + 1u); else { c.pc = 0x002C46C0u; return; } if (c.pc != 0x0028D154u) [[unlikely]] return; }
L_0028D154:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0028D170; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028D168u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_005C(c, 79u, depth + 1u); else { c.pc = 0x00271470u; return; } if (c.pc != 0x0028D168u) [[unlikely]] return; }
L_0028D168:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[19].w[0])));  if (t) { goto L_0028D190; } }
L_0028D170:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028D178u); set32(c.r[4], ld32((c.r[19].w[0])));  if (depth < kMaxDepth) unit_0071(c, 36u, depth + 1u); else { c.pc = 0x002C46C0u; return; } if (c.pc != 0x0028D178u) [[unlikely]] return; }
L_0028D178:
    set32(c.r[3], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0028D18C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028D18Cu); set32(c.r[5], 0u + 128u);  if (depth < kMaxDepth) unit_005C(c, 53u, depth + 1u); else { c.pc = 0x00271110u; return; } if (c.pc != 0x0028D18Cu) [[unlikely]] return; }
L_0028D18C:
    set32(c.r[4], ld32((c.r[19].w[0])));
    c.budget -= 1;
L_0028D190:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028D198u);  if (depth < kMaxDepth) unit_0059(c, 49u, depth + 1u); else { c.pc = 0x00264A00u; return; } if (c.pc != 0x0028D198u) [[unlikely]] return; }
L_0028D198:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0028D1A8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028D1A8u); set32(c.r[5], 0u + 128u);  if (depth < kMaxDepth) unit_005C(c, 53u, depth + 1u); else { c.pc = 0x00271110u; return; } if (c.pc != 0x0028D1A8u) [[unlikely]] return; }
L_0028D1A8:
    c.r[2].d[0] = ld8((c.r[19].w[0] + 432u));
    c.r[2].d[0] = c.r[2].d[0] << 62;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0028D1CC; } }
    c.r[5].d[0] = ld16((c.r[16].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028D1C8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 56u, depth + 1u); else { c.pc = 0x002711B0u; return; } if (c.pc != 0x0028D1C8u) [[unlikely]] return; }
L_0028D1C8:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0028D1CC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_0028D1F0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[5].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 12u)));
    c.r[1].d[0] = c.r[2].sd[0] < 60ll ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[4], c.r[3].w[0] + 24u);  if (t) { goto L_0028D220; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028D218u); c.r[5].d[0] = ld16((c.r[5].w[0] + 20u));  if (depth < kMaxDepth) unit_005C(c, 56u, depth + 1u); else { c.pc = 0x002711B0u; return; } if (c.pc != 0x0028D218u) [[unlikely]] return; }
L_0028D218:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0028D224; } }
L_0028D220:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0028D224:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0028D230:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[4], c.r[2].w[0] + 24u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20u)));
    set32(c.r[3], c.r[2].w[0] + 392u);
    c.r[2].d[0] = ld8((c.r[2].w[0] + 432u));
    c.r[2].d[0] = c.r[2].d[0] << 59;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 11;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0028D268; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028D264u); c.r[5].d[0] = ld16((c.r[3].w[0]));  if (depth < kMaxDepth) unit_005C(c, 56u, depth + 1u); else { c.pc = 0x002711B0u; return; } if (c.pc != 0x0028D264u) [[unlikely]] return; }
L_0028D264:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0028D268:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0028D280:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[6], ld32((c.r[2].w[0] + 20u)));
    set32(c.r[16], c.r[2].w[0] + 24u);
    c.r[1].d[0] = c.r[3].sd[0] < 60ll ? 1ull : 0ull;
    set32(c.r[2], c.r[3].w[0] + 1u);
    set32(c.r[5], c.r[6].w[0] + 392u);
    c.budget -= 14;
    { const bool t = c.r[1].d[0] == 0ull; st32((c.r[4].w[0]), c.r[2].w[0]);  if (t) { goto L_0028D2E4; } }
    c.r[2].d[0] = ld8((c.r[6].w[0] + 432u));
    c.r[2].d[0] = c.r[2].d[0] << 62;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 60u);  if (t) { goto L_0028D2D0; } }
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.budget -= 1;
L_0028D2D0:
    c.r[5].d[0] = ld16((c.r[5].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028D2DCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 56u, depth + 1u); else { c.pc = 0x002711B0u; return; } if (c.pc != 0x0028D2DCu) [[unlikely]] return; }
L_0028D2DC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[17].w[0])));  if (t) { goto L_0028D2FC; } }
L_0028D2E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028D2ECu); c.r[4].d[0] = ld16((c.r[5].w[0]));  if (depth < kMaxDepth) unit_005C(c, 25u, depth + 1u); else { c.pc = 0x00270480u; return; } if (c.pc != 0x0028D2ECu) [[unlikely]] return; }
L_0028D2EC:
    c.r[5].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028D2F8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 56u, depth + 1u); else { c.pc = 0x002711B0u; return; } if (c.pc != 0x0028D2F8u) [[unlikely]] return; }
L_0028D2F8:
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.budget -= 1;
L_0028D2FC:
    c.r[1].d[0] = c.r[2].sd[0] < 121ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0028D30C; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0028D30C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0028D320:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 20u)));
    set32(c.r[16], c.r[2].w[0] + 24u);
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 370u));
    c.budget -= 10;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0028D350; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_0028D3B8; } }
L_0028D350:
    c.r[2].d[0] = ld8((c.r[3].w[0] + 432u));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0028D368; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0028D3B4; } }
L_0028D368:
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], c.r[3].w[0] + 1u);
    c.r[1].d[0] = c.r[3].sd[0] < 49ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] != 0ull; st32((c.r[4].w[0]), c.r[2].w[0]);  if (t) { goto L_0028D384; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0028D3B4; } }
L_0028D384:
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], 0u + 6u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);  if (t) { goto L_0028D398; } }
    breakpoint(c, 0x0028D394u);
    c.budget -= 1;
L_0028D398:
    c.r[5].d[0] = c.lo.d[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028D3A4u); set32(c.r[4], c.r[29].w[0] + 44u);  if (depth < kMaxDepth) unit_005C(c, 20u, depth + 1u); else { c.pc = 0x00270320u; return; } if (c.pc != 0x0028D3A4u) [[unlikely]] return; }
L_0028D3A4:
    c.r[5].d[0] = ld16((c.r[29].w[0] + 44u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028D3B0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 56u, depth + 1u); else { c.pc = 0x002711B0u; return; } if (c.pc != 0x0028D3B0u) [[unlikely]] return; }
L_0028D3B0:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0028D3B4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_0028D3B8:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0028D3D0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 20u)));
    set32(c.r[16], c.r[2].w[0] + 24u);
    set32(c.r[3], ld32((c.r[5].w[0])));
    c.r[2].d[0] = ld8((c.r[3].w[0] + 378u));
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[5].w[0] + 392u);  if (t) { goto L_0028D410; } }
    c.r[2].d[0] = ld8((c.r[3].w[0] + 379u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0028D414; } }
    c.r[2].d[0] = ld8((c.r[3].w[0] + 376u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0028D41C; } }
L_0028D410:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0028D414:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_0028D44C; } }
L_0028D41C:
    c.r[2].d[0] = ld8((c.r[5].w[0] + 432u));
    c.r[2].d[0] = c.r[2].d[0] << 62;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0028D448; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028D438u); c.r[4].d[0] = ld16((c.r[4].w[0]));  if (depth < kMaxDepth) unit_005C(c, 25u, depth + 1u); else { c.pc = 0x00270480u; return; } if (c.pc != 0x0028D438u) [[unlikely]] return; }
L_0028D438:
    c.r[5].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028D444u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 56u, depth + 1u); else { c.pc = 0x002711B0u; return; } if (c.pc != 0x0028D444u) [[unlikely]] return; }
L_0028D444:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0028D448:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_0028D44C:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0028D460:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[17], c.r[2].w[0] + 24u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20u)));
    set32(c.r[19], ld32((c.r[2].w[0])));
    set32(c.r[16], c.r[2].w[0] + 392u);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028D498u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0035(c, 76u, depth + 1u); else { c.pc = 0x001D5810u; return; } if (c.pc != 0x0028D498u) [[unlikely]] return; }
L_0028D498:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0028D4C4; } }
    c.r[2].d[0] = ld8((c.r[19].w[0] + 375u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0028D4C8; } }
    c.r[2].d[0] = ld8((c.r[19].w[0] + 378u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0028D4C4; } }
    c.r[2].d[0] = ld8((c.r[19].w[0] + 379u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0028D4D0; } }
L_0028D4C4:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0028D4C8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  if (t) { goto L_0028D514; } }
L_0028D4D0:
    c.r[2].d[0] = ld8((c.r[18].w[0] + 20u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0028D4F0; } }
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028D4E8u); set32(c.r[4], c.r[29].w[0] + 92u);  if (depth < kMaxDepth) unit_005C(c, 26u, depth + 1u); else { c.pc = 0x002704E0u; return; } if (c.pc != 0x0028D4E8u) [[unlikely]] return; }
L_0028D4E8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = ld16((c.r[29].w[0] + 92u));  if (t) { goto L_0028D504; } }
L_0028D4F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028D4F8u); set32(c.r[4], c.r[29].w[0] + 88u);  if (depth < kMaxDepth) unit_005C(c, 26u, depth + 1u); else { c.pc = 0x002704E0u; return; } if (c.pc != 0x0028D4F8u) [[unlikely]] return; }
L_0028D4F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028D500u); c.r[4].d[0] = ld16((c.r[29].w[0] + 88u));  if (depth < kMaxDepth) unit_005C(c, 25u, depth + 1u); else { c.pc = 0x00270480u; return; } if (c.pc != 0x0028D500u) [[unlikely]] return; }
L_0028D500:
    c.r[5].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 1;
L_0028D504:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028D50Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 56u, depth + 1u); else { c.pc = 0x002711B0u; return; } if (c.pc != 0x0028D50Cu) [[unlikely]] return; }
L_0028D50C:
    set32(c.r[2], 0u + 1u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 2;
L_0028D514:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0028D530:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[19], ld32((c.r[2].w[0] + 20u)));
    set32(c.r[20], c.r[2].w[0] + 24u);
    set32(c.r[18], ld32((c.r[19].w[0])));
    set32(c.r[16], c.r[19].w[0] + 392u);
    set32(c.r[17], ld32((c.r[18].w[0] + 984u)));
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028D574u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0059(c, 56u, depth + 1u); else { c.pc = 0x00264C70u; return; } if (c.pc != 0x0028D574u) [[unlikely]] return; }
L_0028D574:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0028D584; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0028D618; } }
L_0028D584:
    c.r[2].d[0] = ld8((c.r[21].w[0] + 21u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0028D5BC; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    st8((c.r[21].w[0] + 21u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028D5A4u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0071(c, 47u, depth + 1u); else { c.pc = 0x002C4BD0u; return; } if (c.pc != 0x0028D5A4u) [[unlikely]] return; }
L_0028D5A4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0028D5B8; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[21].w[0] + 20u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0028D5BC; } }
L_0028D5B8:
    st8((c.r[21].w[0] + 20u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_0028D5BC:
    c.r[2].d[0] = ld8((c.r[21].w[0] + 20u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0028D5DC; } }
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028D5D4u); set32(c.r[4], c.r[29].w[0] + 124u);  if (depth < kMaxDepth) unit_005C(c, 26u, depth + 1u); else { c.pc = 0x002704E0u; return; } if (c.pc != 0x0028D5D4u) [[unlikely]] return; }
L_0028D5D4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = ld16((c.r[29].w[0] + 124u));  if (t) { goto L_0028D5E8; } }
L_0028D5DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028D5E4u); set32(c.r[4], c.r[29].w[0] + 120u);  if (depth < kMaxDepth) unit_005C(c, 27u, depth + 1u); else { c.pc = 0x00270560u; return; } if (c.pc != 0x0028D5E4u) [[unlikely]] return; }
L_0028D5E4:
    c.r[5].d[0] = ld16((c.r[29].w[0] + 120u));
    c.budget -= 1;
L_0028D5E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028D5F0u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 56u, depth + 1u); else { c.pc = 0x002711B0u; return; } if (c.pc != 0x0028D5F0u) [[unlikely]] return; }
L_0028D5F0:
    set32(c.r[4], ld32((c.r[19].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028D5FCu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0038(c, 162u, depth + 1u); else { c.pc = 0x001E2550u; return; } if (c.pc != 0x0028D5FCu) [[unlikely]] return; }
L_0028D5FC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0028D60C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0028D618; } }
L_0028D60C:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 566u)));
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
L_0028D618:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_0028D640:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[19], ld32((c.r[2].w[0] + 20u)));
    set32(c.r[20], c.r[2].w[0] + 24u);
    set32(c.r[18], ld32((c.r[19].w[0])));
    set32(c.r[16], c.r[19].w[0] + 392u);
    set32(c.r[17], ld32((c.r[18].w[0] + 984u)));
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028D684u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0059(c, 56u, depth + 1u); else { c.pc = 0x00264C70u; return; } if (c.pc != 0x0028D684u) [[unlikely]] return; }
L_0028D684:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0028D694; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0028D724; } }
L_0028D694:
    c.r[2].d[0] = ld8((c.r[21].w[0] + 21u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[6], 0u + 1u);  if (t) { goto L_0028D6C8; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    st8((c.r[21].w[0] + 21u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028D6B0u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0071(c, 47u, depth + 1u); else { c.pc = 0x002C4BD0u; return; } if (c.pc != 0x0028D6B0u) [[unlikely]] return; }
L_0028D6B0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0028D6C4; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[21].w[0] + 20u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0028D6C8; } }
L_0028D6C4:
    st8((c.r[21].w[0] + 20u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_0028D6C8:
    c.r[2].d[0] = ld8((c.r[21].w[0] + 20u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0028D6E8; } }
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028D6E0u); set32(c.r[4], c.r[29].w[0] + 124u);  if (depth < kMaxDepth) unit_005C(c, 26u, depth + 1u); else { c.pc = 0x002704E0u; return; } if (c.pc != 0x0028D6E0u) [[unlikely]] return; }
L_0028D6E0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = ld16((c.r[29].w[0] + 124u));  if (t) { goto L_0028D6F4; } }
L_0028D6E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028D6F0u); set32(c.r[4], c.r[29].w[0] + 120u);  if (depth < kMaxDepth) unit_005C(c, 27u, depth + 1u); else { c.pc = 0x00270560u; return; } if (c.pc != 0x0028D6F0u) [[unlikely]] return; }
L_0028D6F0:
    c.r[5].d[0] = ld16((c.r[29].w[0] + 120u));
    c.budget -= 1;
L_0028D6F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028D6FCu); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 56u, depth + 1u); else { c.pc = 0x002711B0u; return; } if (c.pc != 0x0028D6FCu) [[unlikely]] return; }
L_0028D6FC:
    set32(c.r[4], ld32((c.r[19].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028D708u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0038(c, 162u, depth + 1u); else { c.pc = 0x001E2550u; return; } if (c.pc != 0x0028D708u) [[unlikely]] return; }
L_0028D708:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0028D718; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0028D724; } }
L_0028D718:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 566u)));
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
L_0028D724:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_0028D750:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 20u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028D76Cu); c.r[4].d[0] = ld16((c.r[2].w[0] + 392u));  if (depth < kMaxDepth) unit_005C(c, 25u, depth + 1u); else { c.pc = 0x00270480u; return; } if (c.pc != 0x0028D76Cu) [[unlikely]] return; }
L_0028D76C:
    c.r[5].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028D778u); set32(c.r[4], c.r[16].w[0] + 24u);  if (depth < kMaxDepth) unit_005C(c, 56u, depth + 1u); else { c.pc = 0x002711B0u; return; } if (c.pc != 0x0028D778u) [[unlikely]] return; }
L_0028D778:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[2], 0u + 1u);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0028D790:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[4], c.r[2].w[0] + 24u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 424u));
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0028D7C4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028D7C0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_005C(c, 79u, depth + 1u); else { c.pc = 0x00271470u; return; } if (c.pc != 0x0028D7C0u) [[unlikely]] return; }
L_0028D7C0:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0028D7C4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0028D7D0:
    set32(c.r[29], c.r[29].w[0] - 256u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    set32(c.r[5], c.r[29].w[0] + 128u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[18], c.r[2].w[0] + 24u);
    set32(c.r[4], 0u + 10u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20u)));
    set32(c.r[17], ld32((c.r[2].w[0])));
    set32(c.r[6], c.r[2].w[0] + 440u);
    set32(c.r[16], ld32((c.r[17].w[0] + 984u)));
    c.budget -= 16;
L_0028D810:
    set32(c.r[3], ld32((c.r[6].w[0])));
    set32(c.r[4], c.r[4].w[0] - 1u);
    set32(c.r[2], ld32((c.r[6].w[0] + 4u)));
    st32((c.r[5].w[0]), c.r[3].w[0]);
    set32(c.r[6], c.r[6].w[0] + 8u);
    st32((c.r[5].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 8;
    { const bool t = c.r[4].sd[0] > 0; set32(c.r[5], c.r[5].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0028D810u | kUnwind; return; } goto L_0028D810; } }
    set32(c.r[21], c.r[29].w[0] + 196u);
    set32(c.r[2], ld32((c.r[21].w[0])));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0028D848; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));  if (t) { goto L_0028DDE4; } }
L_0028D848:
    c.r[3].d[0] = ld64((c.r[17].w[0] + 704u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x0C000000u);
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0028D86C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0028DDE0; } }
L_0028D86C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028D874u);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x0028D874u) [[unlikely]] return; }
L_0028D874:
    c.r[2].d[0] = ld8((c.r[2].w[0] + 20u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);  if (t) { goto L_0028D89C; } }
    set32(c.r[3], ld32((c.r[29].w[0] + 200u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], c.r[2].w[0] - 27912u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[2].w[0])));  if (t) { goto L_0028D8A0; } }
L_0028D89C:
    set32(c.r[4], ld32((c.r[1].w[0] - 27912u)));
    c.budget -= 1;
L_0028D8A0:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_0028D8F8; } }
    set32(c.r[2], ld32((c.r[21].w[0])));
    set32(c.r[20], c.r[29].w[0] + 132u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[20].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028D8C0u); set32(c.r[5], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_004C(c, 349u, depth + 1u); else { c.pc = 0x00233040u; return; } if (c.pc != 0x0028D8C0u) [[unlikely]] return; }
L_0028D8C0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0028D8D4; } }
    ld128((c.r[2].w[0] + 192u) & ~15u, c.r[2]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st128((c.r[29].w[0] + 112u) & ~15u, c.r[2]);  if (t) { goto L_0028D8DC; } }
L_0028D8D4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0028DDE0; } }
L_0028D8DC:
    set32(c.r[2], ld32((c.r[21].w[0])));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[20].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0028D8F8; } }
    c.r[19].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_0028D8F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028D900u);  if (depth < kMaxDepth) unit_003D(c, 81u, depth + 1u); else { c.pc = 0x001F53D0u; return; } if (c.pc != 0x0028D900u) [[unlikely]] return; }
L_0028D900:
    set32(c.r[3], 0u + 30u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_0028D930; } }
    set32(c.r[3], ld32((c.r[29].w[0] + 128u)));
    set32(c.r[2], 0u + 15u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[4], c.r[29].w[0] + 248u);  if (t) { goto L_0028D930; } }
    set32(c.r[5], c.r[17].w[0] + 224u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028D928u); set32(c.r[6], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_005C(c, 29u, depth + 1u); else { c.pc = 0x002705F0u; return; } if (c.pc != 0x0028D928u) [[unlikely]] return; }
L_0028D928:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[20].d[0] = ld16((c.r[29].w[0] + 248u));  if (t) { goto L_0028DA6C; } }
L_0028D930:
    c.r[3].d[0] = ld8((c.r[17].w[0] + 383u));
    set32(c.r[2], 0u + 226u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0x40400000u);  if (t) { goto L_0028D958; } }
    set32(c.r[4], c.r[29].w[0] + 244u);
    set32(c.r[5], c.r[17].w[0] + 224u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028D950u); set32(c.r[6], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_005C(c, 29u, depth + 1u); else { c.pc = 0x002705F0u; return; } if (c.pc != 0x0028D950u) [[unlikely]] return; }
L_0028D950:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[20].d[0] = ld16((c.r[29].w[0] + 244u));  if (t) { goto L_0028DA6C; } }
L_0028D958:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028D968u); set32(c.r[5], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_0071(c, 45u, depth + 1u); else { c.pc = 0x002C4A70u; return; } if (c.pc != 0x0028D968u) [[unlikely]] return; }
L_0028D968:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[29].w[0] + 240u);  if (t) { goto L_0028D9A0; } }
    set32(c.r[5], c.r[17].w[0] + 224u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028D97Cu); set32(c.r[6], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_005C(c, 29u, depth + 1u); else { c.pc = 0x002705F0u; return; } if (c.pc != 0x0028D97Cu) [[unlikely]] return; }
L_0028D97C:
    c.r[20].d[0] = ld16((c.r[29].w[0] + 240u));
    c.budget -= 3;
    { const bool t = c.r[20].d[0] != 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0028DA70; } }
    set32(c.r[4], c.r[29].w[0] + 236u);
    set32(c.r[5], c.r[17].w[0] + 224u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028D998u); set32(c.r[6], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_005C(c, 34u, depth + 1u); else { c.pc = 0x00270B40u; return; } if (c.pc != 0x0028D998u) [[unlikely]] return; }
L_0028D998:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[20].d[0] = ld16((c.r[29].w[0] + 236u));  if (t) { goto L_0028DA6C; } }
L_0028D9A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028D9A8u);  if (depth < kMaxDepth) unit_003D(c, 81u, depth + 1u); else { c.pc = 0x001F53D0u; return; } if (c.pc != 0x0028D9A8u) [[unlikely]] return; }
L_0028D9A8:
    set32(c.r[3], 0u + 30u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; set32(c.r[4], c.r[29].w[0] + 224u);  if (t) { goto L_0028D9F4; } }
    c.r[3].d[0] = ld8((c.r[17].w[0] + 385u));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[5], c.r[17].w[0] + 224u);  if (t) { goto L_0028D9F8; } }
    set32(c.r[4], c.r[29].w[0] + 232u);
    set32(c.r[5], c.r[17].w[0] + 224u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028D9D4u); set32(c.r[6], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_005C(c, 29u, depth + 1u); else { c.pc = 0x002705F0u; return; } if (c.pc != 0x0028D9D4u) [[unlikely]] return; }
L_0028D9D4:
    c.r[20].d[0] = ld16((c.r[29].w[0] + 232u));
    c.budget -= 3;
    { const bool t = c.r[20].d[0] != 0ull; set32(c.r[4], c.r[29].w[0] + 228u);  if (t) { goto L_0028DA6C; } }
    set32(c.r[5], c.r[17].w[0] + 224u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028D9ECu); set32(c.r[6], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_005C(c, 34u, depth + 1u); else { c.pc = 0x00270B40u; return; } if (c.pc != 0x0028D9ECu) [[unlikely]] return; }
L_0028D9EC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[20].d[0] = ld16((c.r[29].w[0] + 228u));  if (t) { goto L_0028DA6C; } }
L_0028D9F4:
    set32(c.r[5], c.r[17].w[0] + 224u);
    c.budget -= 1;
L_0028D9F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028DA00u); set32(c.r[6], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_005C(c, 32u, depth + 1u); else { c.pc = 0x00270970u; return; } if (c.pc != 0x0028DA00u) [[unlikely]] return; }
L_0028DA00:
    set32(c.r[2], c.r[29].w[0] + 224u);
    set32(c.r[4], c.r[29].w[0] + 252u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[2], 0u + 16384u);
    c.r[3].d[0] = ld16((c.r[29].w[0] + 252u));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 4096u);  if (t) { goto L_0028DA50; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0028DA50; } }
    c.r[2].d[0] = 0ull | 32768ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 8192u);  if (t) { goto L_0028DA44; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0028DA44; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[29].w[0] + 220u);  if (t) { goto L_0028DA5C; } }
L_0028DA44:
    c.f[0] = ld32((c.r[17].w[0] + 232u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 120u), c.f[0]);  if (t) { goto L_0028DA58; } }
L_0028DA50:
    c.f[0] = ld32((c.r[17].w[0] + 224u));
    st32((c.r[29].w[0] + 112u), c.f[0]);
    c.budget -= 2;
L_0028DA58:
    set32(c.r[4], c.r[29].w[0] + 220u);
    c.budget -= 1;
L_0028DA5C:
    set32(c.r[5], c.r[17].w[0] + 224u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028DA68u); set32(c.r[6], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_005C(c, 29u, depth + 1u); else { c.pc = 0x002705F0u; return; } if (c.pc != 0x0028DA68u) [[unlikely]] return; }
L_0028DA68:
    c.r[20].d[0] = ld16((c.r[29].w[0] + 220u));
    c.budget -= 1;
L_0028DA6C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0028DA70:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028DA78u);  if (depth < kMaxDepth) unit_0071(c, 36u, depth + 1u); else { c.pc = 0x002C46C0u; return; } if (c.pc != 0x0028DA78u) [[unlikely]] return; }
L_0028DA78:
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 2u);  if (t) { goto L_0028DAB4; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 370u));
    c.r[4].d[0] = ld8((c.r[17].w[0] + 370u));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_0028DAB0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028DA9Cu); set32(c.r[5], 0u + 128u);  if (depth < kMaxDepth) unit_005C(c, 53u, depth + 1u); else { c.pc = 0x00271110u; return; } if (c.pc != 0x0028DA9Cu) [[unlikely]] return; }
L_0028DA9C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028DAA8u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 56u, depth + 1u); else { c.pc = 0x002711B0u; return; } if (c.pc != 0x0028DAA8u) [[unlikely]] return; }
L_0028DAA8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0028DDE0; } }
L_0028DAB0:
    set32(c.r[3], 0u + 2u);
    c.budget -= 1;
L_0028DAB4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_0028DB38; } }
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_0028DB38; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028DACCu);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x0028DACCu) [[unlikely]] return; }
L_0028DACC:
    c.r[2].d[0] = ld8((c.r[2].w[0] + 41u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0028DB04; } }
    c.r[5].d[0] = ld8((c.r[17].w[0] + 368u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028DAE4u); set32(c.r[4], c.r[29].w[0] + 216u);  if (depth < kMaxDepth) unit_005C(c, 21u, depth + 1u); else { c.pc = 0x00270370u; return; } if (c.pc != 0x0028DAE4u) [[unlikely]] return; }
L_0028DAE4:
    c.r[5].d[0] = ld16((c.r[29].w[0] + 216u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028DAF0u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 56u, depth + 1u); else { c.pc = 0x002711B0u; return; } if (c.pc != 0x0028DAF0u) [[unlikely]] return; }
L_0028DAF0:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028DAFCu); set32(c.r[5], 0u + 128u);  if (depth < kMaxDepth) unit_005C(c, 53u, depth + 1u); else { c.pc = 0x00271110u; return; } if (c.pc != 0x0028DAFCu) [[unlikely]] return; }
L_0028DAFC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0028DDE0; } }
L_0028DB04:
    c.r[2].d[0] = ld64((c.r[17].w[0] + 704u));
    c.r[2].d[0] = c.r[2].d[0] & 4ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0028DDDC; } }
    c.r[5].d[0] = ld8((c.r[17].w[0] + 368u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028DB24u); set32(c.r[4], c.r[29].w[0] + 212u);  if (depth < kMaxDepth) unit_005C(c, 21u, depth + 1u); else { c.pc = 0x00270370u; return; } if (c.pc != 0x0028DB24u) [[unlikely]] return; }
L_0028DB24:
    c.r[5].d[0] = ld16((c.r[29].w[0] + 212u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028DB30u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 79u, depth + 1u); else { c.pc = 0x00271470u; return; } if (c.pc != 0x0028DB30u) [[unlikely]] return; }
L_0028DB30:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0028DDDC; } }
L_0028DB38:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_0028DC0C; } }
    c.r[3].d[0] = ld8((c.r[17].w[0] + 379u));
    set32(c.r[2], 0u + 253u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0028DBAC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028DB58u);  if (depth < kMaxDepth) unit_003D(c, 81u, depth + 1u); else { c.pc = 0x001F53D0u; return; } if (c.pc != 0x0028DB58u) [[unlikely]] return; }
L_0028DB58:
    set32(c.r[3], 0u + 30u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_0028DB88; } }
    c.r[2].d[0] = ld64((c.r[17].w[0] + 704u));
    c.r[2].d[0] = c.r[2].d[0] & 4ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_0028DDDC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028DB80u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 79u, depth + 1u); else { c.pc = 0x00271470u; return; } if (c.pc != 0x0028DB80u) [[unlikely]] return; }
L_0028DB80:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0028DDDC; } }
L_0028DB88:
    c.r[2].d[0] = ld64((c.r[17].w[0] + 704u));
    c.r[2].d[0] = c.r[2].d[0] & 4ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_0028DDDC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028DBA4u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 79u, depth + 1u); else { c.pc = 0x00271470u; return; } if (c.pc != 0x0028DBA4u) [[unlikely]] return; }
L_0028DBA4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0028DDDC; } }
L_0028DBAC:
    c.r[3].d[0] = ld8((c.r[17].w[0] + 383u));
    set32(c.r[2], 0u + 245u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0028DBE8; } }
    c.f[1] = ld32((c.r[17].w[0] + 228u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC0A00000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_0028DBE8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028DBE0u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 56u, depth + 1u); else { c.pc = 0x002711B0u; return; } if (c.pc != 0x0028DBE0u) [[unlikely]] return; }
L_0028DBE0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0028DDDC; } }
L_0028DBE8:
    c.r[2].d[0] = ld64((c.r[17].w[0] + 704u));
    c.r[2].d[0] = c.r[2].d[0] & 4ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_0028DDDC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028DC04u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 79u, depth + 1u); else { c.pc = 0x00271470u; return; } if (c.pc != 0x0028DC04u) [[unlikely]] return; }
L_0028DC04:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0028DDDC; } }
L_0028DC0C:
    set32(c.r[3], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 3u);  if (t) { goto L_0028DCC4; } }
    c.r[4].d[0] = ld64((c.r[17].w[0] + 704u));
    c.r[2].d[0] = c.r[4].d[0] & 128ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0028DC40; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028DC38u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_005C(c, 69u, depth + 1u); else { c.pc = 0x00271340u; return; } if (c.pc != 0x0028DC38u) [[unlikely]] return; }
L_0028DC38:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0028DDDC; } }
L_0028DC40:
    c.r[3].d[0] = ld8((c.r[17].w[0] + 379u));
    set32(c.r[2], 0u + 253u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0028DC60; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028DC58u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 84u, depth + 1u); else { c.pc = 0x00271550u; return; } if (c.pc != 0x0028DC58u) [[unlikely]] return; }
L_0028DC58:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0028DDDC; } }
L_0028DC60:
    c.r[3].d[0] = ld8((c.r[17].w[0] + 383u));
    set32(c.r[2], 0u + 245u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[2].d[0] = c.r[4].d[0] & 4ull;  if (t) { goto L_0028DCA4; } }
    c.f[1] = ld32((c.r[17].w[0] + 228u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC1200000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0028DCA0; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028DC98u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 56u, depth + 1u); else { c.pc = 0x002711B0u; return; } if (c.pc != 0x0028DC98u) [[unlikely]] return; }
L_0028DC98:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0028DDDC; } }
L_0028DCA0:
    c.r[2].d[0] = c.r[4].d[0] & 4ull;
    c.budget -= 1;
L_0028DCA4:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0028DDDC; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028DCBCu); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 79u, depth + 1u); else { c.pc = 0x00271470u; return; } if (c.pc != 0x0028DCBCu) [[unlikely]] return; }
L_0028DCBC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0028DDDC; } }
L_0028DCC4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_0028DD44; } }
    c.r[2].d[0] = ld8((c.r[17].w[0] + 370u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_0028DD28; } }
    c.r[3].d[0] = ld64((c.r[17].w[0] + 704u));
    c.r[2].d[0] = c.r[3].d[0] & 128ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_0028DD0C; } }
    c.r[2].d[0] = c.r[3].d[0] & 4ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_0028DDDC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028DD04u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 79u, depth + 1u); else { c.pc = 0x00271470u; return; } if (c.pc != 0x0028DD04u) [[unlikely]] return; }
L_0028DD04:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0028DDDC; } }
L_0028DD0C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028DD14u); set32(c.r[5], 0u + 128u);  if (depth < kMaxDepth) unit_005C(c, 53u, depth + 1u); else { c.pc = 0x00271110u; return; } if (c.pc != 0x0028DD14u) [[unlikely]] return; }
L_0028DD14:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028DD20u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 56u, depth + 1u); else { c.pc = 0x002711B0u; return; } if (c.pc != 0x0028DD20u) [[unlikely]] return; }
L_0028DD20:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0028DDDC; } }
L_0028DD28:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028DD30u); set32(c.r[5], 0u + 128u);  if (depth < kMaxDepth) unit_005C(c, 53u, depth + 1u); else { c.pc = 0x00271110u; return; } if (c.pc != 0x0028DD30u) [[unlikely]] return; }
L_0028DD30:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028DD3Cu); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 56u, depth + 1u); else { c.pc = 0x002711B0u; return; } if (c.pc != 0x0028DD3Cu) [[unlikely]] return; }
L_0028DD3C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0028DDDC; } }
L_0028DD44:
    set32(c.r[3], 0u + 5u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_0028DD6C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028DD58u); set32(c.r[5], 0u + 128u);  if (depth < kMaxDepth) unit_005C(c, 53u, depth + 1u); else { c.pc = 0x00271110u; return; } if (c.pc != 0x0028DD58u) [[unlikely]] return; }
L_0028DD58:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028DD64u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 56u, depth + 1u); else { c.pc = 0x002711B0u; return; } if (c.pc != 0x0028DD64u) [[unlikely]] return; }
L_0028DD64:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0028DDDC; } }
L_0028DD6C:
    c.r[2].d[0] = ld8((c.r[17].w[0] + 370u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_0028DDD4; } }
    c.r[3].d[0] = ld64((c.r[17].w[0] + 704u));
    c.r[2].d[0] = c.r[3].d[0] & 128ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = c.r[3].d[0] & 4ull;  if (t) { goto L_0028DDA8; } }
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_0028DDDC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028DDA0u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 79u, depth + 1u); else { c.pc = 0x00271470u; return; } if (c.pc != 0x0028DDA0u) [[unlikely]] return; }
L_0028DDA0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0028DDDC; } }
L_0028DDA8:
    c.r[2].d[0] = ld8((c.r[17].w[0] + 378u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_0028DDC4; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028DDC0u); set32(c.r[5], 0u + 128u);  if (depth < kMaxDepth) unit_005C(c, 53u, depth + 1u); else { c.pc = 0x00271110u; return; } if (c.pc != 0x0028DDC0u) [[unlikely]] return; }
L_0028DDC0:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_0028DDC4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028DDCCu); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 56u, depth + 1u); else { c.pc = 0x002711B0u; return; } if (c.pc != 0x0028DDCCu) [[unlikely]] return; }
L_0028DDCC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0028DDDC; } }
L_0028DDD4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028DDDCu); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 56u, depth + 1u); else { c.pc = 0x002711B0u; return; } if (c.pc != 0x0028DDDCu) [[unlikely]] return; }
L_0028DDDC:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0028DDE0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.budget -= 1;
L_0028DDE4:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 256u);  c.pc = t; return; }
L_0028DE10:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[6], c.r[29].w[0] + 64u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[5], ld32((c.r[4].w[0] + 20u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 20u)));
    set32(c.r[16], ld32((c.r[4].w[0])));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028DE3Cu); set32(c.r[17], c.r[2].w[0] + 24u);  if (depth < kMaxDepth) unit_0052(c, 286u, depth + 1u); else { c.pc = 0x0024BAE0u; return; } if (c.pc != 0x0028DE3Cu) [[unlikely]] return; }
L_0028DE3C:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0028DE50; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0028E03C; } }
L_0028DE50:
    set32(c.r[2], ld32((c.r[29].w[0] + 132u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);  if (t) { goto L_0028DE64; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0028E03C; } }
L_0028DE64:
    set32(c.r[4], ld32((c.r[1].w[0] - 27912u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0028DE9C; } }
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028DE80u); set32(c.r[5], ld32((c.r[2].w[0] + 68u)));  if (depth < kMaxDepth) unit_004C(c, 349u, depth + 1u); else { c.pc = 0x00233040u; return; } if (c.pc != 0x0028DE80u) [[unlikely]] return; }
L_0028DE80:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0028DE94; } }
    ld128((c.r[2].w[0] + 192u) & ~15u, c.r[2]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st128((c.r[29].w[0] + 48u) & ~15u, c.r[2]);  if (t) { goto L_0028DE9C; } }
L_0028DE94:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0028E03C; } }
L_0028DE9C:
    set32(c.r[4], c.r[29].w[0] + 152u);
    set32(c.r[5], c.r[16].w[0] + 224u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028DEACu); set32(c.r[6], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_005C(c, 29u, depth + 1u); else { c.pc = 0x002705F0u; return; } if (c.pc != 0x0028DEACu) [[unlikely]] return; }
L_0028DEAC:
    set32(c.r[2], c.r[29].w[0] + 152u);
    set32(c.r[3], c.r[29].w[0] + 156u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    set32(c.r[4], c.r[29].w[0] + 148u);
    set32(c.r[5], c.r[16].w[0] + 224u);
    set32(c.r[6], c.r[29].w[0] + 48u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028DECCu); st16((c.r[3].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_005C(c, 34u, depth + 1u); else { c.pc = 0x00270B40u; return; } if (c.pc != 0x0028DECCu) [[unlikely]] return; }
L_0028DECC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028DED4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0071(c, 36u, depth + 1u); else { c.pc = 0x002C46C0u; return; } if (c.pc != 0x0028DED4u) [[unlikely]] return; }
L_0028DED4:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_0028DF18; } }
    c.r[2].d[0] = ld64((c.r[16].w[0] + 704u));
    c.r[2].d[0] = c.r[2].d[0] & 4ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0028E03C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028DEFCu); c.r[4].d[0] = ld8((c.r[16].w[0] + 368u));  if (depth < kMaxDepth) unit_005C(c, 38u, depth + 1u); else { c.pc = 0x00270F60u; return; } if (c.pc != 0x0028DEFCu) [[unlikely]] return; }
L_0028DEFC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028DF04u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 25u, depth + 1u); else { c.pc = 0x00270480u; return; } if (c.pc != 0x0028DF04u) [[unlikely]] return; }
L_0028DF04:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028DF10u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 79u, depth + 1u); else { c.pc = 0x00271470u; return; } if (c.pc != 0x0028DF10u) [[unlikely]] return; }
L_0028DF10:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0028E038; } }
L_0028DF18:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_0028DF68; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 379u));
    set32(c.r[2], 0u + 253u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0028DF40; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028DF38u);  if (depth < kMaxDepth) unit_005C(c, 84u, depth + 1u); else { c.pc = 0x00271550u; return; } if (c.pc != 0x0028DF38u) [[unlikely]] return; }
L_0028DF38:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0028E038; } }
L_0028DF40:
    c.r[2].d[0] = ld64((c.r[16].w[0] + 704u));
    c.r[2].d[0] = c.r[2].d[0] & 4ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0028E038; } }
    c.r[5].d[0] = ld16((c.r[29].w[0] + 156u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028DF60u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 79u, depth + 1u); else { c.pc = 0x00271470u; return; } if (c.pc != 0x0028DF60u) [[unlikely]] return; }
L_0028DF60:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0028E038; } }
L_0028DF68:
    set32(c.r[3], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_0028DFDC; } }
    c.r[4].d[0] = ld64((c.r[16].w[0] + 704u));
    c.r[2].d[0] = c.r[4].d[0] & 128ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0028DF9C; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028DF94u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_005C(c, 69u, depth + 1u); else { c.pc = 0x00271340u; return; } if (c.pc != 0x0028DF94u) [[unlikely]] return; }
L_0028DF94:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0028E038; } }
L_0028DF9C:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 379u));
    set32(c.r[2], 0u + 253u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[2].d[0] = c.r[4].d[0] & 4ull;  if (t) { goto L_0028DFBC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028DFB4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 84u, depth + 1u); else { c.pc = 0x00271550u; return; } if (c.pc != 0x0028DFB4u) [[unlikely]] return; }
L_0028DFB4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0028E038; } }
L_0028DFBC:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0028E038; } }
    c.r[5].d[0] = ld16((c.r[29].w[0] + 156u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028DFD4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 79u, depth + 1u); else { c.pc = 0x00271470u; return; } if (c.pc != 0x0028DFD4u) [[unlikely]] return; }
L_0028DFD4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0028E038; } }
L_0028DFDC:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 370u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0028E02C; } }
    c.r[2].d[0] = ld64((c.r[16].w[0] + 704u));
    c.r[2].d[0] = c.r[2].d[0] & 128ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0028E010; } }
    c.r[5].d[0] = ld16((c.r[29].w[0] + 156u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028E008u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 79u, depth + 1u); else { c.pc = 0x00271470u; return; } if (c.pc != 0x0028E008u) [[unlikely]] return; }
L_0028E008:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0028E038; } }
L_0028E010:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028E018u); set32(c.r[5], 0u + 128u);  if (depth < kMaxDepth) unit_005C(c, 53u, depth + 1u); else { c.pc = 0x00271110u; return; } if (c.pc != 0x0028E018u) [[unlikely]] return; }
L_0028E018:
    c.r[5].d[0] = ld16((c.r[29].w[0] + 156u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028E024u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 56u, depth + 1u); else { c.pc = 0x002711B0u; return; } if (c.pc != 0x0028E024u) [[unlikely]] return; }
L_0028E024:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0028E038; } }
L_0028E02C:
    c.r[5].d[0] = ld16((c.r[29].w[0] + 156u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028E038u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 56u, depth + 1u); else { c.pc = 0x002711B0u; return; } if (c.pc != 0x0028E038u) [[unlikely]] return; }
L_0028E038:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0028E03C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_0028E050:
    set32(c.r[29], c.r[29].w[0] - 176u);
    set32(c.r[5], c.r[4].w[0] + 32u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[6], c.r[29].w[0] + 64u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 20u)));
    set32(c.r[16], ld32((c.r[4].w[0])));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028E07Cu); set32(c.r[17], c.r[2].w[0] + 24u);  if (depth < kMaxDepth) unit_0052(c, 278u, depth + 1u); else { c.pc = 0x0024B9A0u; return; } if (c.pc != 0x0028E07Cu) [[unlikely]] return; }
L_0028E07C:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0028E090; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0028E2F0; } }
L_0028E090:
    set32(c.r[5], ld32((c.r[29].w[0] + 132u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0028E0A4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_0028E2F4; } }
L_0028E0A4:
    set32(c.r[3], ld32((c.r[29].w[0] + 136u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], c.r[2].w[0] - 27912u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[2], c.r[5].w[0] << 2);  if (t) { goto L_0028E0EC; } }
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028E0D0u); set32(c.r[5], ld32((c.r[2].w[0] + 68u)));  if (depth < kMaxDepth) unit_004C(c, 349u, depth + 1u); else { c.pc = 0x00233040u; return; } if (c.pc != 0x0028E0D0u) [[unlikely]] return; }
L_0028E0D0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0028E0E4; } }
    ld128((c.r[2].w[0] + 192u) & ~15u, c.r[2]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st128((c.r[29].w[0] + 48u) & ~15u, c.r[2]);  if (t) { goto L_0028E0EC; } }
L_0028E0E4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0028E2F0; } }
L_0028E0EC:
    set32(c.r[4], c.r[29].w[0] + 164u);
    set32(c.r[5], c.r[16].w[0] + 224u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028E0FCu); set32(c.r[6], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_005C(c, 29u, depth + 1u); else { c.pc = 0x002705F0u; return; } if (c.pc != 0x0028E0FCu) [[unlikely]] return; }
L_0028E0FC:
    set32(c.r[2], c.r[29].w[0] + 164u);
    set32(c.r[3], c.r[29].w[0] + 172u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    set32(c.r[4], c.r[29].w[0] + 160u);
    set32(c.r[5], c.r[16].w[0] + 224u);
    set32(c.r[6], c.r[29].w[0] + 48u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028E11Cu); st16((c.r[3].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_005C(c, 34u, depth + 1u); else { c.pc = 0x00270B40u; return; } if (c.pc != 0x0028E11Cu) [[unlikely]] return; }
L_0028E11C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028E124u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0071(c, 36u, depth + 1u); else { c.pc = 0x002C46C0u; return; } if (c.pc != 0x0028E124u) [[unlikely]] return; }
L_0028E124:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_0028E198; } }
    c.r[5].d[0] = ld8((c.r[16].w[0] + 368u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028E13Cu); set32(c.r[4], c.r[29].w[0] + 156u);  if (depth < kMaxDepth) unit_005C(c, 21u, depth + 1u); else { c.pc = 0x00270370u; return; } if (c.pc != 0x0028E13Cu) [[unlikely]] return; }
L_0028E13C:
    set32(c.r[2], c.r[29].w[0] + 156u);
    set32(c.r[3], c.r[29].w[0] + 168u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    st16((c.r[3].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[3].d[0] = ld16((c.r[29].w[0] + 172u));
    c.r[2].d[0] = ld16((c.r[29].w[0] + 168u));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0028E2F0; } }
    c.r[2].d[0] = ld64((c.r[16].w[0] + 704u));
    c.r[2].d[0] = c.r[2].d[0] & 4ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0028E2EC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028E17Cu); c.r[4].d[0] = ld8((c.r[16].w[0] + 368u));  if (depth < kMaxDepth) unit_005C(c, 38u, depth + 1u); else { c.pc = 0x00270F60u; return; } if (c.pc != 0x0028E17Cu) [[unlikely]] return; }
L_0028E17C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028E184u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 25u, depth + 1u); else { c.pc = 0x00270480u; return; } if (c.pc != 0x0028E184u) [[unlikely]] return; }
L_0028E184:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028E190u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 79u, depth + 1u); else { c.pc = 0x00271470u; return; } if (c.pc != 0x0028E190u) [[unlikely]] return; }
L_0028E190:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0028E2EC; } }
L_0028E198:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_0028E21C; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 379u));
    set32(c.r[2], 0u + 253u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0028E1F4; } }
    c.r[3].d[0] = ld64((c.r[16].w[0] + 704u));
    c.r[2].d[0] = c.r[3].d[0] & 128ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = c.r[3].d[0] & 4ull;  if (t) { goto L_0028E1D4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028E1CCu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 84u, depth + 1u); else { c.pc = 0x00271550u; return; } if (c.pc != 0x0028E1CCu) [[unlikely]] return; }
L_0028E1CC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0028E2EC; } }
L_0028E1D4:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0028E2EC; } }
    c.r[5].d[0] = ld16((c.r[29].w[0] + 172u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028E1ECu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 79u, depth + 1u); else { c.pc = 0x00271470u; return; } if (c.pc != 0x0028E1ECu) [[unlikely]] return; }
L_0028E1EC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0028E2EC; } }
L_0028E1F4:
    c.r[2].d[0] = ld64((c.r[16].w[0] + 704u));
    c.r[2].d[0] = c.r[2].d[0] & 4ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0028E2EC; } }
    c.r[5].d[0] = ld16((c.r[29].w[0] + 172u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028E214u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 79u, depth + 1u); else { c.pc = 0x00271470u; return; } if (c.pc != 0x0028E214u) [[unlikely]] return; }
L_0028E214:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0028E2EC; } }
L_0028E21C:
    set32(c.r[3], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_0028E290; } }
    c.r[4].d[0] = ld64((c.r[16].w[0] + 704u));
    c.r[2].d[0] = c.r[4].d[0] & 128ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0028E250; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028E248u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_005C(c, 69u, depth + 1u); else { c.pc = 0x00271340u; return; } if (c.pc != 0x0028E248u) [[unlikely]] return; }
L_0028E248:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0028E2EC; } }
L_0028E250:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 379u));
    set32(c.r[2], 0u + 253u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[2].d[0] = c.r[4].d[0] & 4ull;  if (t) { goto L_0028E270; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028E268u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 84u, depth + 1u); else { c.pc = 0x00271550u; return; } if (c.pc != 0x0028E268u) [[unlikely]] return; }
L_0028E268:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0028E2EC; } }
L_0028E270:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0028E2EC; } }
    c.r[5].d[0] = ld16((c.r[29].w[0] + 172u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028E288u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 79u, depth + 1u); else { c.pc = 0x00271470u; return; } if (c.pc != 0x0028E288u) [[unlikely]] return; }
L_0028E288:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0028E2EC; } }
L_0028E290:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 370u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0028E2E0; } }
    c.r[2].d[0] = ld64((c.r[16].w[0] + 704u));
    c.r[2].d[0] = c.r[2].d[0] & 128ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0028E2C4; } }
    c.r[5].d[0] = ld16((c.r[29].w[0] + 172u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028E2BCu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 79u, depth + 1u); else { c.pc = 0x00271470u; return; } if (c.pc != 0x0028E2BCu) [[unlikely]] return; }
L_0028E2BC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0028E2EC; } }
L_0028E2C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028E2CCu); set32(c.r[5], 0u + 128u);  if (depth < kMaxDepth) unit_005C(c, 53u, depth + 1u); else { c.pc = 0x00271110u; return; } if (c.pc != 0x0028E2CCu) [[unlikely]] return; }
L_0028E2CC:
    c.r[5].d[0] = ld16((c.r[29].w[0] + 172u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028E2D8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 56u, depth + 1u); else { c.pc = 0x002711B0u; return; } if (c.pc != 0x0028E2D8u) [[unlikely]] return; }
L_0028E2D8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0028E2EC; } }
L_0028E2E0:
    c.r[5].d[0] = ld16((c.r[29].w[0] + 172u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028E2ECu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 56u, depth + 1u); else { c.pc = 0x002711B0u; return; } if (c.pc != 0x0028E2ECu) [[unlikely]] return; }
L_0028E2EC:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0028E2F0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_0028E2F4:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 176u);  c.pc = t; return; }
L_0028E310:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[5], ld32((c.r[2].w[0] + 20u)));
    set32(c.r[6], c.r[2].w[0] + 24u);
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[2], ld32((c.r[5].w[0])));  if (t) { goto L_0028E350; } }
    c.r[2].d[0] = ld64((c.r[2].w[0] + 704u));
    c.r[2].d[0] = c.r[2].d[0] & 48ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0028E36C; } }
    set32(c.r[2], c.r[3].w[0] + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0]), c.r[2].w[0]);  if (t) { goto L_0028E36C; } }
L_0028E350:
    c.r[2].d[0] = ld64((c.r[2].w[0] + 704u));
    c.r[2].d[0] = c.r[2].d[0] & 48ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0028E36C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0028E3B0; } }
L_0028E36C:
    c.r[2].d[0] = ld8((c.r[5].w[0] + 424u));
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0028E3B0; } }
    set32(c.r[2], ld32((c.r[5].w[0])));
    c.r[2].d[0] = ld64((c.r[2].w[0] + 704u));
    c.r[2].d[0] = c.r[2].d[0] & 48ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0028E3AC; } }
    c.r[5].d[0] = ld16((c.r[5].w[0] + 404u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028E3A4u); c.r[4].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 79u, depth + 1u); else { c.pc = 0x00271470u; return; } if (c.pc != 0x0028E3A4u) [[unlikely]] return; }
L_0028E3A4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0028E3B0; } }
L_0028E3AC:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0028E3B0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0028E3C0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[6], ld32((c.r[2].w[0] + 20u)));
    set32(c.r[16], c.r[2].w[0] + 24u);
    set32(c.r[2], ld32((c.r[6].w[0])));
    c.budget -= 10;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[5], ld32((c.r[2].w[0] + 984u)));  if (t) { goto L_0028E408; } }
    c.r[2].d[0] = ld64((c.r[2].w[0] + 704u));
    c.r[2].d[0] = c.r[2].d[0] & 48ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0028E424; } }
    set32(c.r[2], c.r[3].w[0] + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0]), c.r[2].w[0]);  if (t) { goto L_0028E424; } }
L_0028E408:
    c.r[2].d[0] = ld64((c.r[2].w[0] + 704u));
    c.r[2].d[0] = c.r[2].d[0] & 48ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0028E424; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0028E470; } }
L_0028E424:
    c.r[2].d[0] = ld8((c.r[6].w[0] + 424u));
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0028E470; } }
    set32(c.r[2], ld32((c.r[6].w[0])));
    c.r[2].d[0] = ld64((c.r[2].w[0] + 704u));
    c.r[2].d[0] = c.r[2].d[0] & 48ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0028E46C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028E458u); c.r[4].d[0] = ld8((c.r[5].w[0] + 368u));  if (depth < kMaxDepth) unit_005C(c, 38u, depth + 1u); else { c.pc = 0x00270F60u; return; } if (c.pc != 0x0028E458u) [[unlikely]] return; }
L_0028E458:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028E464u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 79u, depth + 1u); else { c.pc = 0x00271470u; return; } if (c.pc != 0x0028E464u) [[unlikely]] return; }
L_0028E464:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0028E470; } }
L_0028E46C:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0028E470:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0028E480:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 20u)));
    set32(c.r[16], c.r[2].w[0] + 24u);
    set32(c.r[4], ld32((c.r[5].w[0])));
    c.r[2].d[0] = ld64((c.r[4].w[0] + 704u));
    c.r[2].d[0] = c.r[2].d[0] & 48ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 14;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0028E4C0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_0028E558; } }
L_0028E4C0:
    set32(c.r[3], ld32((c.r[4].w[0] + 164u)));
    set32(c.r[2], 0u + 51u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0028E4F0; } }
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028E4E8u); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_005C(c, 76u, depth + 1u); else { c.pc = 0x00271410u; return; } if (c.pc != 0x0028E4E8u) [[unlikely]] return; }
L_0028E4E8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0028E554; } }
L_0028E4F0:
    c.r[2].d[0] = ld8((c.r[5].w[0] + 424u));
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0028E528; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028E510u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_005C(c, 79u, depth + 1u); else { c.pc = 0x00271470u; return; } if (c.pc != 0x0028E510u) [[unlikely]] return; }
L_0028E510:
    set32(c.r[3], ld32((c.r[17].w[0])));
    c.r[4].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0]), c.r[3].w[0]);  if (t) { goto L_0028E554; } }
L_0028E528:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028E530u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_006F(c, 246u, depth + 1u); else { c.pc = 0x002BEEE0u; return; } if (c.pc != 0x0028E530u) [[unlikely]] return; }
L_0028E530:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0028E550; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028E540u); set32(c.r[5], 0u + 128u);  if (depth < kMaxDepth) unit_005C(c, 53u, depth + 1u); else { c.pc = 0x00271110u; return; } if (c.pc != 0x0028E540u) [[unlikely]] return; }
L_0028E540:
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.budget -= 4;
L_0028E550:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0028E554:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_0028E558:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0028E570:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[19], ld32((c.r[2].w[0] + 20u)));
    set32(c.r[17], c.r[2].w[0] + 24u);
    set32(c.r[18], ld32((c.r[19].w[0])));
    c.r[4].d[0] = ld8((c.r[18].w[0] + 369u));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028E5A4u); set32(c.r[16], c.r[19].w[0] + 392u);  if (depth < kMaxDepth) unit_0035(c, 43u, depth + 1u); else { c.pc = 0x001D5040u; return; } if (c.pc != 0x0028E5A4u) [[unlikely]] return; }
L_0028E5A4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0028E5BC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028E5B4u); c.r[4].d[0] = ld8((c.r[18].w[0] + 369u));  if (depth < kMaxDepth) unit_0035(c, 45u, depth + 1u); else { c.pc = 0x001D50B0u; return; } if (c.pc != 0x0028E5B4u) [[unlikely]] return; }
L_0028E5B4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0028E5C4; } }
L_0028E5BC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0028E5FC; } }
L_0028E5C4:
    c.r[2].d[0] = ld8((c.r[19].w[0] + 426u));
    c.r[2].d[0] = c.r[2].d[0] << 60;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0028E5FC; } }
    c.r[2].d[0] = ld8((c.r[19].w[0] + 424u));
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0028E5FC; } }
    c.r[5].d[0] = ld16((c.r[16].w[0] + 8u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028E5F8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 79u, depth + 1u); else { c.pc = 0x00271470u; return; } if (c.pc != 0x0028E5F8u) [[unlikely]] return; }
L_0028E5F8:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0028E5FC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0028E620:
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 426u));
    c.r[2].d[0] = c.r[2].d[0] << 60;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[2].d[0] ^ 1ull;  c.pc = t; return; }
L_0028E640:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].d[0] = 0ull | 32768ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[2].d[0] = c.r[2].d[0] << 32;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[16], c.r[3].w[0] + 24u);
    set32(c.r[3], ld32((c.r[3].w[0] + 20u)));
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.r[3].d[0] = ld64((c.r[4].w[0] + 704u));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 14;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0028E690; } }
    c.r[4].d[0] = ld64((c.r[4].w[0] + 712u));
    c.r[2].d[0] = c.r[4].d[0] & 512ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0028E698; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0028E690:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_0028E6E4; } }
L_0028E698:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0028E6DC; } }
    c.r[2].d[0] = c.r[4].d[0] & 1024ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0028E6E0; } }
    set32(c.r[2], 0u + 8192u);
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0028E6DC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028E6D0u); set32(c.r[5], 0u + 4096u);  if (depth < kMaxDepth) unit_005C(c, 56u, depth + 1u); else { c.pc = 0x002711B0u; return; } if (c.pc != 0x0028E6D0u) [[unlikely]] return; }
L_0028E6D0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028E6DCu); set32(c.r[5], 0u + 128u);  if (depth < kMaxDepth) unit_005C(c, 53u, depth + 1u); else { c.pc = 0x00271110u; return; } if (c.pc != 0x0028E6DCu) [[unlikely]] return; }
L_0028E6DC:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0028E6E0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_0028E6E4:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0028E6F0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[17], c.r[2].w[0] + 24u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20u)));
    set32(c.r[16], ld32((c.r[2].w[0])));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028E720u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0059(c, 32u, depth + 1u); else { c.pc = 0x002645D0u; return; } if (c.pc != 0x0028E720u) [[unlikely]] return; }
L_0028E720:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0028E730; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0028E79C; } }
L_0028E730:
    set32(c.r[3], ld32((c.r[18].w[0] + 20u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0028E748; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 368u));
    st32((c.r[18].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 2;
L_0028E748:
    c.r[2].d[0] = ld64((c.r[16].w[0] + 704u));
    c.r[2].d[0] = c.r[2].d[0] & 3ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0028E764; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_0028E7A0; } }
L_0028E764:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028E76Cu); c.r[4].d[0] = ld8((c.r[18].w[0] + 20u));  if (depth < kMaxDepth) unit_005C(c, 38u, depth + 1u); else { c.pc = 0x00270F60u; return; } if (c.pc != 0x0028E76Cu) [[unlikely]] return; }
L_0028E76C:
    c.r[5].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028E778u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 56u, depth + 1u); else { c.pc = 0x002711B0u; return; } if (c.pc != 0x0028E778u) [[unlikely]] return; }
L_0028E778:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028E780u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_007E(c, 51u, depth + 1u); else { c.pc = 0x002F8BA0u; return; } if (c.pc != 0x0028E780u) [[unlikely]] return; }
L_0028E780:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0028E798; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028E790u); set32(c.r[5], 0u + 128u);  if (depth < kMaxDepth) unit_005C(c, 53u, depth + 1u); else { c.pc = 0x00271110u; return; } if (c.pc != 0x0028E790u) [[unlikely]] return; }
L_0028E790:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0028E79C; } }
L_0028E798:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0028E79C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_0028E7A0:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0028E7C0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[16], c.r[2].w[0] + 24u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20u)));
    set32(c.r[18], ld32((c.r[2].w[0])));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028E7F0u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0059(c, 32u, depth + 1u); else { c.pc = 0x002645D0u; return; } if (c.pc != 0x0028E7F0u) [[unlikely]] return; }
L_0028E7F0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0028E800; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0028E8C8; } }
L_0028E800:
    set32(c.r[3], ld32((c.r[17].w[0] + 20u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0028E818; } }
    c.r[2].d[0] = ld8((c.r[18].w[0] + 369u));
    st32((c.r[17].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 2;
L_0028E818:
    set32(c.r[3], ld32((c.r[17].w[0] + 20u)));
    set32(c.r[2], 0u + 3u);
    c.r[4].d[0] = ld8((c.r[18].w[0] + 368u));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_0028E8A0; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0028E884; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0028E868; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0028E854; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0028E8BC; } }
L_0028E854:
    c.r[3].d[0] = 0ull | 32768ull;
    set32(c.r[2], 0u + 16384u);
    if (c.r[4].d[0] != 0) c.r[3].d[0] = c.r[2].d[0];
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = c.r[3].d[0] & 65535ull;  if (t) { goto L_0028E8B8; } }
L_0028E868:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { goto L_0028E878; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 4096u);  if (t) { goto L_0028E87C; } }
L_0028E878:
    c.r[2].d[0] = 0ull | 32768ull;
    c.budget -= 1;
L_0028E87C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = c.r[2].d[0] & 65535ull;  if (t) { goto L_0028E8B8; } }
L_0028E884:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { goto L_0028E894; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 8192u);  if (t) { goto L_0028E898; } }
L_0028E894:
    set32(c.r[2], 0u + 4096u);
    c.budget -= 1;
L_0028E898:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = c.r[2].d[0] & 65535ull;  if (t) { goto L_0028E8B8; } }
L_0028E8A0:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { goto L_0028E8B0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 16384u);  if (t) { goto L_0028E8B4; } }
L_0028E8B0:
    set32(c.r[2], 0u + 8192u);
    c.budget -= 1;
L_0028E8B4:
    c.r[5].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 1;
L_0028E8B8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0028E8BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028E8C4u);  if (depth < kMaxDepth) unit_005C(c, 56u, depth + 1u); else { c.pc = 0x002711B0u; return; } if (c.pc != 0x0028E8C4u) [[unlikely]] return; }
L_0028E8C4:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0028E8C8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0028E8E0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const bool t = c.r[4].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0028E908; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_0028E914; } }
L_0028E908:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028E910u);  if (depth < kMaxDepth) unit_0059(c, 59u, depth + 1u); else { c.pc = 0x00264D50u; return; } if (c.pc != 0x0028E910u) [[unlikely]] return; }
L_0028E910:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_0028E914:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0028E920:
    set32(c.r[3], ld32((c.r[4].w[0] + 12u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    set32(c.r[3], ld32((c.r[3].w[0] + 20u)));
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.r[3].d[0] = ld64((c.r[3].w[0] + 704u));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0028E948; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0028E948:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0028E950:
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20u)));
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.r[2].d[0] = ld64((c.r[2].w[0] + 704u));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0028E974; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0028E974:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0028E980:
    set32(c.r[4], ld32((c.r[4].w[0] + 12u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00080000u);
    c.r[3].d[0] = c.r[3].d[0] << 32;
    set32(c.r[4], ld32((c.r[4].w[0] + 20u)));
    set32(c.r[4], ld32((c.r[4].w[0])));
    set32(c.r[5], ld32((c.r[4].w[0] + 984u)));
    c.r[4].d[0] = ld64((c.r[5].w[0] + 704u));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[3].d[0] != 0ull; c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_0028E9C4; } }
    c.r[3].d[0] = ld8((c.r[5].w[0] + 392u));
    c.r[3].d[0] = c.r[3].d[0] << 61;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0028E9C4; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0028E9C4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0028E9D0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 1u);  c.pc = t; return; }
L_0028E9E0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[16], c.r[2].w[0] + 24u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20u)));
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 432u));
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 12;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0028EA18; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_0028EA5C; } }
L_0028EA18:
    c.r[3].d[0] = ld8((c.r[4].w[0] + 368u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[5], c.r[4].w[0] + 224u);
    set32(c.r[2], c.r[2].w[0] - 30800u);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[4], c.r[29].w[0] + 40u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028EA38u); set32(c.r[6], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_005C(c, 29u, depth + 1u); else { c.pc = 0x002705F0u; return; } if (c.pc != 0x0028EA38u) [[unlikely]] return; }
L_0028EA38:
    set32(c.r[2], c.r[29].w[0] + 40u);
    set32(c.r[3], c.r[29].w[0] + 44u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    st16((c.r[3].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[5].d[0] = ld16((c.r[29].w[0] + 44u));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028EA54u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 56u, depth + 1u); else { c.pc = 0x002711B0u; return; } if (c.pc != 0x0028EA54u) [[unlikely]] return; }
L_0028EA54:
    set32(c.r[2], 0u + 1u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 2;
L_0028EA5C:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0028EA70:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] + 6048u);
    set32(c.r[3], c.r[3].w[0] + 4576u);
    st32((c.r[4].w[0] + 16u), c.r[2].w[0]);
    st32((c.r[4].w[0] + 12u), c.r[5].w[0]);
    set32(c.r[2], 0u + 3u);
    st32((c.r[4].w[0]), 0u);
    st32((c.r[4].w[0] + 4u), 0u);
    st32((c.r[4].w[0] + 8u), 0u);
    st32((c.r[4].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 20u)));
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[5], ld32((c.r[3].w[0] + 984u)));
    ld128((c.r[5].w[0] + 224u) & ~15u, c.r[3]);
    st128((c.r[4].w[0] + 32u) & ~15u, c.r[3]);
    c.r[3].d[0] = ld8((c.r[5].w[0] + 368u));
    c.budget -= 20;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 2u);  if (t) { goto L_0028EAFC; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0028EAF4; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0028EAEC; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0028EAE4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0028EB04; } }
L_0028EAE4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 40u), 0u);  if (t) { goto L_0028EB00; } }
L_0028EAEC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 32u), 0u);  if (t) { goto L_0028EB00; } }
L_0028EAF4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 40u), 0u);  if (t) { goto L_0028EB00; } }
L_0028EAFC:
    st32((c.r[4].w[0] + 32u), 0u);
    c.budget -= 1;
L_0028EB00:
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 1;
L_0028EB04:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0028EB10:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[5], c.r[17].w[0] + 32u);
    set32(c.r[16], c.r[2].w[0] + 24u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20u)));
    set32(c.r[18], ld32((c.r[2].w[0])));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028EB44u); set32(c.r[4], c.r[18].w[0] + 224u);  if (depth < kMaxDepth) unit_0011(c, 14u, depth + 1u); else { c.pc = 0x001443A0u; return; } if (c.pc != 0x0028EB44u) [[unlikely]] return; }
L_0028EB44:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40A00000u);
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[3], 0u + 1u);  if (t) { goto L_0028EB60; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0028EB60:
    c.r[2].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], c.r[18].w[0] + 224u);  if (t) { goto L_0028EB74; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0028EBA0; } }
L_0028EB74:
    set32(c.r[6], c.r[17].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028EB80u); set32(c.r[4], c.r[29].w[0] + 72u);  if (depth < kMaxDepth) unit_005C(c, 29u, depth + 1u); else { c.pc = 0x002705F0u; return; } if (c.pc != 0x0028EB80u) [[unlikely]] return; }
L_0028EB80:
    set32(c.r[2], c.r[29].w[0] + 72u);
    set32(c.r[3], c.r[29].w[0] + 76u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    st16((c.r[3].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[5].d[0] = ld16((c.r[29].w[0] + 76u));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028EB9Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 56u, depth + 1u); else { c.pc = 0x002711B0u; return; } if (c.pc != 0x0028EB9Cu) [[unlikely]] return; }
L_0028EB9C:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0028EBA0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0028EBC0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 20u)));
    set32(c.r[16], c.r[2].w[0] + 24u);
    c.r[2].d[0] = ld8((c.r[3].w[0] + 427u));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 11;
    { const bool t = c.r[2].d[0] == 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0028EBF4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0028EC5C; } }
L_0028EBF4:
    c.r[2].d[0] = ld8((c.r[3].w[0] + 424u));
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0028EC10; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_0028EC60; } }
L_0028EC10:
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0028EC5C; } }
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.r[2].d[0] = ld64((c.r[2].w[0] + 704u));
    c.r[2].d[0] = c.r[2].d[0] & 3ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0028EC5C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028EC3Cu); c.r[4].d[0] = ld16((c.r[3].w[0] + 396u));  if (depth < kMaxDepth) unit_005C(c, 25u, depth + 1u); else { c.pc = 0x00270480u; return; } if (c.pc != 0x0028EC3Cu) [[unlikely]] return; }
L_0028EC3C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028EC48u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 79u, depth + 1u); else { c.pc = 0x00271470u; return; } if (c.pc != 0x0028EC48u) [[unlikely]] return; }
L_0028EC48:
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[2], 0u + 1u);
    c.budget -= 5;
L_0028EC5C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_0028EC60:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0028EC70:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[19], ld32((c.r[2].w[0] + 20u)));
    set32(c.r[16], c.r[2].w[0] + 24u);
    set32(c.r[18], ld32((c.r[19].w[0])));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028ECA4u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0059(c, 52u, depth + 1u); else { c.pc = 0x00264B00u; return; } if (c.pc != 0x0028ECA4u) [[unlikely]] return; }
L_0028ECA4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0028ECB4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0028ED0C; } }
L_0028ECB4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028ECBCu); c.r[4].d[0] = ld16((c.r[19].w[0] + 396u));  if (depth < kMaxDepth) unit_005C(c, 25u, depth + 1u); else { c.pc = 0x00270480u; return; } if (c.pc != 0x0028ECBCu) [[unlikely]] return; }
L_0028ECBC:
    c.r[5].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028ECC8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 56u, depth + 1u); else { c.pc = 0x002711B0u; return; } if (c.pc != 0x0028ECC8u) [[unlikely]] return; }
L_0028ECC8:
    c.r[2].d[0] = ld8((c.r[18].w[0] + 375u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0028ECF0; } }
    c.r[3].d[0] = ld64((c.r[18].w[0] + 704u));
    set32(c.r[2], 0u + 4096u);
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0028ED0C; } }
L_0028ECF0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028ECF8u); set32(c.r[5], 0u + 128u);  if (depth < kMaxDepth) unit_005C(c, 53u, depth + 1u); else { c.pc = 0x00271110u; return; } if (c.pc != 0x0028ECF8u) [[unlikely]] return; }
L_0028ECF8:
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[2], 0u + 1u);
    c.budget -= 5;
L_0028ED0C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0028ED30:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[16], c.r[2].w[0] + 24u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20u)));
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.r[2].d[0] = ld64((c.r[3].w[0] + 704u));
    c.r[2].d[0] = c.r[2].d[0] & 3ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 12;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0028ED68; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_0028ED94; } }
L_0028ED68:
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0028ED90; } }
    c.r[5].d[0] = ld8((c.r[3].w[0] + 368u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028ED80u); set32(c.r[4], c.r[29].w[0] + 44u);  if (depth < kMaxDepth) unit_005C(c, 21u, depth + 1u); else { c.pc = 0x00270370u; return; } if (c.pc != 0x0028ED80u) [[unlikely]] return; }
L_0028ED80:
    c.r[5].d[0] = ld16((c.r[29].w[0] + 44u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028ED8Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 56u, depth + 1u); else { c.pc = 0x002711B0u; return; } if (c.pc != 0x0028ED8Cu) [[unlikely]] return; }
L_0028ED8C:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0028ED90:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_0028ED94:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0028EDA0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[16], c.r[2].w[0] + 24u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20u)));
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.r[3].d[0] = ld64((c.r[5].w[0] + 704u));
    c.r[2].d[0] = c.r[3].d[0] & 3ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 12;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 24576u);  if (t) { goto L_0028EDD8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0028EE1C; } }
L_0028EDD8:
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0028EDF4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0028EE1C; } }
L_0028EDF4:
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0028EE1C; } }
    c.r[5].d[0] = ld8((c.r[5].w[0] + 368u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028EE0Cu); set32(c.r[4], c.r[29].w[0] + 44u);  if (depth < kMaxDepth) unit_005C(c, 22u, depth + 1u); else { c.pc = 0x002703A0u; return; } if (c.pc != 0x0028EE0Cu) [[unlikely]] return; }
L_0028EE0C:
    c.r[5].d[0] = ld16((c.r[29].w[0] + 44u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028EE18u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 56u, depth + 1u); else { c.pc = 0x002711B0u; return; } if (c.pc != 0x0028EE18u) [[unlikely]] return; }
L_0028EE18:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0028EE1C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0028EE30:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[17], c.r[2].w[0] + 24u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20u)));
    set32(c.r[16], ld32((c.r[2].w[0])));
    c.r[2].d[0] = ld64((c.r[16].w[0] + 712u));
    c.r[2].d[0] = c.r[2].d[0] & 128ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 14;
    { const bool t = c.r[2].d[0] == 0ull; c.r[18].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0028EE70; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0028EF00; } }
L_0028EE70:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028EE78u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0070(c, 91u, depth + 1u); else { c.pc = 0x002C1B80u; return; } if (c.pc != 0x0028EE78u) [[unlikely]] return; }
L_0028EE78:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0028EE88; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0028EF00; } }
L_0028EE88:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 371u));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0028EEA8; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 370u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0028EEB0; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0028EEA8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_0028EF04; } }
L_0028EEB0:
    set32(c.r[2], ld32((c.r[18].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0028EF00; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028EEC4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0070(c, 103u, depth + 1u); else { c.pc = 0x002C1E50u; return; } if (c.pc != 0x0028EEC4u) [[unlikely]] return; }
L_0028EEC4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0028EEF4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028EED4u); c.r[4].d[0] = ld8((c.r[2].w[0] + 368u));  if (depth < kMaxDepth) unit_005C(c, 38u, depth + 1u); else { c.pc = 0x00270F60u; return; } if (c.pc != 0x0028EED4u) [[unlikely]] return; }
L_0028EED4:
    c.r[5].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028EEE0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 56u, depth + 1u); else { c.pc = 0x002711B0u; return; } if (c.pc != 0x0028EEE0u) [[unlikely]] return; }
L_0028EEE0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028EEECu); set32(c.r[5], 0u + 128u);  if (depth < kMaxDepth) unit_005C(c, 53u, depth + 1u); else { c.pc = 0x00271110u; return; } if (c.pc != 0x0028EEECu) [[unlikely]] return; }
L_0028EEEC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0028EEFC; } }
L_0028EEF4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0028EF00; } }
L_0028EEFC:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0028EF00:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_0028EF04:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0028EF20:
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20u)));
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.r[2].d[0] = ld8((c.r[3].w[0] + 370u));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0028EF50; } }
    c.r[2].d[0] = ld64((c.r[3].w[0] + 712u));
    c.r[2].d[0] = c.r[2].d[0] & 64ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0028EF50; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0028EF50:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0028EF60:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[4], c.r[2].w[0] + 24u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20u)));
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.r[3].d[0] = ld64((c.r[5].w[0] + 712u));
    c.r[2].d[0] = c.r[3].d[0] & 128ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0028EF94; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_0028EFCC; } }
L_0028EF94:
    c.r[2].d[0] = ld8((c.r[5].w[0] + 370u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0028EFB4; } }
    c.r[2].d[0] = c.r[3].d[0] & 64ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], 0u + 128u);  if (t) { goto L_0028EFBC; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0028EFB4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0028EFC8; } }
L_0028EFBC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028EFC4u);  if (depth < kMaxDepth) unit_005C(c, 53u, depth + 1u); else { c.pc = 0x00271110u; return; } if (c.pc != 0x0028EFC4u) [[unlikely]] return; }
L_0028EFC4:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0028EFC8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_0028EFCC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0028EFE0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[4], c.r[2].w[0] + 24u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20u)));
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.r[3].d[0] = ld64((c.r[5].w[0] + 712u));
    c.r[2].d[0] = c.r[3].d[0] & 128ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0028F014; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_0028F04C; } }
L_0028F014:
    c.r[2].d[0] = ld8((c.r[5].w[0] + 370u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0028F034; } }
    c.r[2].d[0] = c.r[3].d[0] & 64ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], 0u + 128u);  if (t) { goto L_0028F03C; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0028F034:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0028F048; } }
L_0028F03C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028F044u);  if (depth < kMaxDepth) unit_005C(c, 53u, depth + 1u); else { c.pc = 0x00271110u; return; } if (c.pc != 0x0028F044u) [[unlikely]] return; }
L_0028F044:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0028F048:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_0028F04C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0028F060:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[16], c.r[2].w[0] + 24u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 433u));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 10;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0028F090; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_0028F0AC; } }
L_0028F090:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028F098u); c.r[4].d[0] = ld8((c.r[4].w[0] + 20u));  if (depth < kMaxDepth) unit_005C(c, 38u, depth + 1u); else { c.pc = 0x00270F60u; return; } if (c.pc != 0x0028F098u) [[unlikely]] return; }
L_0028F098:
    c.r[5].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028F0A4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 56u, depth + 1u); else { c.pc = 0x002711B0u; return; } if (c.pc != 0x0028F0A4u) [[unlikely]] return; }
L_0028F0A4:
    set32(c.r[2], 0u + 1u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 2;
L_0028F0AC:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0028F0C0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[16], c.r[2].w[0] + 24u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 433u));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 12;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], ld32((c.r[3].w[0])));  if (t) { goto L_0028F108; } }
    c.r[3].d[0] = ld8((c.r[5].w[0] + 368u));
    c.r[2].d[0] = ld8((c.r[4].w[0] + 368u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0028F108; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_0028F124; } }
L_0028F108:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028F110u); c.r[4].d[0] = ld8((c.r[4].w[0] + 368u));  if (depth < kMaxDepth) unit_005C(c, 38u, depth + 1u); else { c.pc = 0x00270F60u; return; } if (c.pc != 0x0028F110u) [[unlikely]] return; }
L_0028F110:
    c.r[5].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028F11Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 56u, depth + 1u); else { c.pc = 0x002711B0u; return; } if (c.pc != 0x0028F11Cu) [[unlikely]] return; }
L_0028F11C:
    set32(c.r[2], 0u + 1u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 2;
L_0028F124:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0028F130:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[8], ld32((c.r[2].w[0] + 20u)));
    set32(c.r[16], c.r[2].w[0] + 24u);
    set32(c.r[7], ld32((c.r[8].w[0])));
    set32(c.r[2], ld32((c.r[8].w[0] + 4u)));
    c.r[3].d[0] = ld64((c.r[7].w[0] + 704u));
    set32(c.r[6], ld32((c.r[2].w[0])));
    c.r[2].d[0] = c.r[3].d[0] & 3ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 14;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0028F17C; } }
    c.r[2].d[0] = ld8((c.r[7].w[0] + 370u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0028F17C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_0028F310; } }
L_0028F17C:
    c.r[2].d[0] = ld8((c.r[8].w[0] + 428u));
    c.r[2].d[0] = c.r[2].d[0] << 62;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0028F198; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0028F30C; } }
L_0028F198:
    set32(c.r[5], ld32((c.r[4].w[0] + 20u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_0028F258; } }
    c.r[2].d[0] = ld64((c.r[7].w[0] + 712u));
    c.r[2].d[0] = c.r[2].d[0] & 224ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0028F1D8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028F1C4u); c.r[4].d[0] = ld8((c.r[7].w[0] + 368u));  if (depth < kMaxDepth) unit_005C(c, 38u, depth + 1u); else { c.pc = 0x00270F60u; return; } if (c.pc != 0x0028F1C4u) [[unlikely]] return; }
L_0028F1C4:
    c.r[5].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028F1D0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 56u, depth + 1u); else { c.pc = 0x002711B0u; return; } if (c.pc != 0x0028F1D0u) [[unlikely]] return; }
L_0028F1D0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0028F30C; } }
L_0028F1D8:
    c.r[2].d[0] = ld8((c.r[8].w[0] + 433u));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = c.r[3].d[0] & 128ull;  if (t) { goto L_0028F23C; } }
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0028F210; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028F1FCu); c.r[4].d[0] = ld8((c.r[6].w[0] + 368u));  if (depth < kMaxDepth) unit_005C(c, 38u, depth + 1u); else { c.pc = 0x00270F60u; return; } if (c.pc != 0x0028F1FCu) [[unlikely]] return; }
L_0028F1FC:
    c.r[5].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028F208u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 79u, depth + 1u); else { c.pc = 0x00271470u; return; } if (c.pc != 0x0028F208u) [[unlikely]] return; }
L_0028F208:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0028F234; } }
L_0028F210:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028F218u); c.r[4].d[0] = ld8((c.r[6].w[0] + 368u));  if (depth < kMaxDepth) unit_005C(c, 38u, depth + 1u); else { c.pc = 0x00270F60u; return; } if (c.pc != 0x0028F218u) [[unlikely]] return; }
L_0028F218:
    c.r[5].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028F224u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 56u, depth + 1u); else { c.pc = 0x002711B0u; return; } if (c.pc != 0x0028F224u) [[unlikely]] return; }
L_0028F224:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028F230u); set32(c.r[5], 0u + 128u);  if (depth < kMaxDepth) unit_005C(c, 53u, depth + 1u); else { c.pc = 0x00271110u; return; } if (c.pc != 0x0028F230u) [[unlikely]] return; }
L_0028F230:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0028F234:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0028F30C; } }
L_0028F23C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028F244u); c.r[4].d[0] = ld8((c.r[6].w[0] + 368u));  if (depth < kMaxDepth) unit_005C(c, 38u, depth + 1u); else { c.pc = 0x00270F60u; return; } if (c.pc != 0x0028F244u) [[unlikely]] return; }
L_0028F244:
    c.r[5].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028F250u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 56u, depth + 1u); else { c.pc = 0x002711B0u; return; } if (c.pc != 0x0028F250u) [[unlikely]] return; }
L_0028F250:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0028F30C; } }
L_0028F258:
    c.r[2].d[0] = ld8((c.r[8].w[0] + 433u));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[5].d[0] & 255ull;  if (t) { goto L_0028F2F4; } }
    c.r[2].d[0] = c.r[3].d[0] & 128ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[5].d[0] & 255ull;  if (t) { goto L_0028F294; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028F280u);  if (depth < kMaxDepth) unit_005C(c, 38u, depth + 1u); else { c.pc = 0x00270F60u; return; } if (c.pc != 0x0028F280u) [[unlikely]] return; }
L_0028F280:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028F28Cu); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 79u, depth + 1u); else { c.pc = 0x00271470u; return; } if (c.pc != 0x0028F28Cu) [[unlikely]] return; }
L_0028F28C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0028F2EC; } }
L_0028F294:
    c.r[4].d[0] = ld8((c.r[7].w[0] + 368u));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[5].d[0];  if (t) { goto L_0028F2C8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028F2A8u); c.r[4].d[0] = c.r[5].d[0] & 255ull;  if (depth < kMaxDepth) unit_005C(c, 38u, depth + 1u); else { c.pc = 0x00270F60u; return; } if (c.pc != 0x0028F2A8u) [[unlikely]] return; }
L_0028F2A8:
    c.r[5].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028F2B4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 56u, depth + 1u); else { c.pc = 0x002711B0u; return; } if (c.pc != 0x0028F2B4u) [[unlikely]] return; }
L_0028F2B4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028F2C0u); set32(c.r[5], 0u + 128u);  if (depth < kMaxDepth) unit_005C(c, 53u, depth + 1u); else { c.pc = 0x00271110u; return; } if (c.pc != 0x0028F2C0u) [[unlikely]] return; }
L_0028F2C0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0028F2E8; } }
L_0028F2C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028F2D0u);  if (depth < kMaxDepth) unit_005C(c, 38u, depth + 1u); else { c.pc = 0x00270F60u; return; } if (c.pc != 0x0028F2D0u) [[unlikely]] return; }
L_0028F2D0:
    c.r[5].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028F2DCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 56u, depth + 1u); else { c.pc = 0x002711B0u; return; } if (c.pc != 0x0028F2DCu) [[unlikely]] return; }
L_0028F2DC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028F2E8u); set32(c.r[5], 0u + 128u);  if (depth < kMaxDepth) unit_005C(c, 53u, depth + 1u); else { c.pc = 0x00271110u; return; } if (c.pc != 0x0028F2E8u) [[unlikely]] return; }
L_0028F2E8:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0028F2EC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0028F30C; } }
L_0028F2F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028F2FCu);  if (depth < kMaxDepth) unit_005C(c, 38u, depth + 1u); else { c.pc = 0x00270F60u; return; } if (c.pc != 0x0028F2FCu) [[unlikely]] return; }
L_0028F2FC:
    c.r[5].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028F308u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 56u, depth + 1u); else { c.pc = 0x002711B0u; return; } if (c.pc != 0x0028F308u) [[unlikely]] return; }
L_0028F308:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0028F30C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_0028F310:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0028F320:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 20u)));
    set32(c.r[16], c.r[2].w[0] + 24u);
    c.r[2].d[0] = ld8((c.r[3].w[0] + 428u));
    c.r[2].d[0] = c.r[2].d[0] << 62;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 13;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], ld32((c.r[3].w[0])));  if (t) { goto L_0028F35C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0028F430; } }
L_0028F35C:
    c.r[2].d[0] = ld8((c.r[3].w[0] + 424u));
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0028F3F0; } }
    c.r[5].d[0] = ld64((c.r[4].w[0] + 704u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x0C000000u);
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = c.r[5].d[0] & c.r[2].d[0];
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x00040000u);  if (t) { goto L_0028F3F0; } }
    set32(c.r[2], 0u + 48u);
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.r[2].d[0] = c.r[5].d[0] & c.r[2].d[0];
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0028F3F0; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 20u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0028F3D4; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 984u)));
    set32(c.r[5], c.r[4].w[0] + 224u);
    set32(c.r[4], c.r[29].w[0] + 60u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028F3CCu); set32(c.r[6], c.r[2].w[0] + 224u);  if (depth < kMaxDepth) unit_005C(c, 34u, depth + 1u); else { c.pc = 0x00270B40u; return; } if (c.pc != 0x0028F3CCu) [[unlikely]] return; }
L_0028F3CC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = ld16((c.r[29].w[0] + 60u));  if (t) { goto L_0028F3E0; } }
L_0028F3D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028F3DCu); c.r[4].d[0] = c.r[3].d[0] & 255ull;  if (depth < kMaxDepth) unit_005C(c, 38u, depth + 1u); else { c.pc = 0x00270F60u; return; } if (c.pc != 0x0028F3DCu) [[unlikely]] return; }
L_0028F3DC:
    c.r[5].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 1;
L_0028F3E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028F3E8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 79u, depth + 1u); else { c.pc = 0x00271470u; return; } if (c.pc != 0x0028F3E8u) [[unlikely]] return; }
L_0028F3E8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0028F430; } }
L_0028F3F0:
    c.r[2].d[0] = ld64((c.r[4].w[0] + 704u));
    c.r[2].d[0] = c.r[2].d[0] & 128ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0028F430; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028F40Cu); set32(c.r[5], ld32((c.r[17].w[0] + 20u)));  if (depth < kMaxDepth) unit_006F(c, 246u, depth + 1u); else { c.pc = 0x002BEEE0u; return; } if (c.pc != 0x0028F40Cu) [[unlikely]] return; }
L_0028F40C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0028F42C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028F41Cu); set32(c.r[5], 0u + 128u);  if (depth < kMaxDepth) unit_005C(c, 53u, depth + 1u); else { c.pc = 0x00271110u; return; } if (c.pc != 0x0028F41Cu) [[unlikely]] return; }
L_0028F41C:
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.budget -= 4;
L_0028F42C:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0028F430:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0028F450:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[2].w[0] + 20u)));
    set32(c.r[4], c.r[2].w[0] + 24u);
    c.r[2].d[0] = ld16((c.r[3].w[0] + 420u));
    c.r[2].d[0] = c.r[2].sd[0] < 770ll ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0028F484; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_0028F4D4; } }
L_0028F484:
    c.r[2].d[0] = ld8((c.r[3].w[0] + 424u));
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0028F4A4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0028F4D0; } }
L_0028F4A4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], 0u + 16u);  if (t) { goto L_0028F4CC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028F4B4u);  if (depth < kMaxDepth) unit_005C(c, 53u, depth + 1u); else { c.pc = 0x00271110u; return; } if (c.pc != 0x0028F4B4u) [[unlikely]] return; }
L_0028F4B4:
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.r[4].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0]), c.r[3].w[0]);  if (t) { goto L_0028F4D0; } }
L_0028F4CC:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0028F4D0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_0028F4D4:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0028F4E0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0] + 12u)));
    c.r[2].d[0] = ld8((c.r[4].w[0] + 24u));
    set32(c.r[19], ld32((c.r[3].w[0] + 20u)));
    set32(c.r[18], ld32((c.r[19].w[0])));
    c.budget -= 13;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[3].w[0] + 24u);  if (t) { goto L_0028F534; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 984u)));
    set32(c.r[4], c.r[18].w[0] + 224u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028F524u); set32(c.r[5], c.r[2].w[0] + 224u);  if (depth < kMaxDepth) unit_0011(c, 24u, depth + 1u); else { c.pc = 0x00144550u; return; } if (c.pc != 0x0028F524u) [[unlikely]] return; }
L_0028F524:
    st32((c.r[17].w[0] + 20u), c.f[0]);
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 24u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0028F638; } }
L_0028F534:
    c.r[2].d[0] = ld16((c.r[19].w[0] + 420u));
    c.r[1].d[0] = c.r[2].sd[0] < 771ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0028F54C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  if (t) { goto L_0028F63C; } }
L_0028F54C:
    set32(c.r[2], ld32((c.r[18].w[0] + 984u)));
    set32(c.r[4], c.r[18].w[0] + 224u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028F55Cu); set32(c.r[5], c.r[2].w[0] + 224u);  if (depth < kMaxDepth) unit_0011(c, 24u, depth + 1u); else { c.pc = 0x00144550u; return; } if (c.pc != 0x0028F55Cu) [[unlikely]] return; }
L_0028F55C:
    c.f[1] = ld32((c.r[17].w[0] + 20u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.f[2] = c.f[1];  if (t) { goto L_0028F570; } }
    c.f[2] = c.f[0];
    c.budget -= 1;
L_0028F570:
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0028F584; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[1] = fp::sub(c.f[2], c.f[0]);  if (t) { goto L_0028F58C; } }
L_0028F584:
    c.f[0] = c.f[1];
    c.f[1] = fp::sub(c.f[2], c.f[0]);
    c.budget -= 2;
L_0028F58C:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0028F5A8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0028F5AC; } }
L_0028F5A8:
    c.f[1] = c.f[1] ^ fp::kSign;
    c.budget -= 1;
L_0028F5AC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[0] = ld32((c.r[1].w[0] - 30448u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0028F5EC; } }
    c.r[2].d[0] = ld64((c.r[18].w[0] + 704u));
    c.r[2].d[0] = c.r[2].d[0] & 4ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0028F5E4; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028F5E0u); set32(c.r[5], 0u + 16u);  if (depth < kMaxDepth) unit_005C(c, 53u, depth + 1u); else { c.pc = 0x00271110u; return; } if (c.pc != 0x0028F5E0u) [[unlikely]] return; }
L_0028F5E0:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0028F5E4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0028F638; } }
L_0028F5EC:
    c.r[2].d[0] = ld8((c.r[19].w[0] + 424u));
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0028F60C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0028F638; } }
L_0028F60C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0028F634; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028F61Cu); set32(c.r[5], 0u + 16u);  if (depth < kMaxDepth) unit_005C(c, 53u, depth + 1u); else { c.pc = 0x00271110u; return; } if (c.pc != 0x0028F61Cu) [[unlikely]] return; }
L_0028F61C:
    set32(c.r[3], ld32((c.r[17].w[0])));
    c.r[4].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0]), c.r[3].w[0]);  if (t) { goto L_0028F638; } }
L_0028F634:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0028F638:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_0028F63C:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0028F660:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0] + 12u)));
    c.r[2].d[0] = ld8((c.r[4].w[0] + 24u));
    set32(c.r[20], ld32((c.r[3].w[0] + 20u)));
    set32(c.r[19], ld32((c.r[20].w[0])));
    set32(c.r[18], ld32((c.r[19].w[0] + 984u)));
    c.budget -= 15;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[3].w[0] + 24u);  if (t) { goto L_0028F6B8; } }
    set32(c.r[4], c.r[19].w[0] + 224u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028F6A8u); set32(c.r[5], c.r[18].w[0] + 224u);  if (depth < kMaxDepth) unit_0011(c, 24u, depth + 1u); else { c.pc = 0x00144550u; return; } if (c.pc != 0x0028F6A8u) [[unlikely]] return; }
L_0028F6A8:
    st32((c.r[17].w[0] + 20u), c.f[0]);
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 24u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0028F7BC; } }
L_0028F6B8:
    c.r[2].d[0] = ld16((c.r[20].w[0] + 420u));
    c.r[1].d[0] = c.r[2].sd[0] < 769ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[5], c.r[18].w[0] + 224u);  if (t) { goto L_0028F714; } }
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028F6D4u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_006F(c, 256u, depth + 1u); else { c.pc = 0x002BF3F0u; return; } if (c.pc != 0x0028F6D4u) [[unlikely]] return; }
L_0028F6D4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0028F708; } }
    c.r[4].d[0] = ld64((c.r[18].w[0] + 704u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00060000u);
    c.r[3].d[0] = c.r[2].d[0] << 32;
    set32(c.r[2], 0u + 4u);
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0028F70C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0028F7BC; } }
L_0028F708:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0028F70C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));  if (t) { goto L_0028F7C0; } }
L_0028F714:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028F71Cu); set32(c.r[4], c.r[19].w[0] + 224u);  if (depth < kMaxDepth) unit_0011(c, 24u, depth + 1u); else { c.pc = 0x00144550u; return; } if (c.pc != 0x0028F71Cu) [[unlikely]] return; }
L_0028F71C:
    c.f[1] = ld32((c.r[17].w[0] + 20u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.f[2] = c.f[1];  if (t) { goto L_0028F730; } }
    c.f[2] = c.f[0];
    c.budget -= 1;
L_0028F730:
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0028F744; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[1] = fp::sub(c.f[2], c.f[0]);  if (t) { goto L_0028F74C; } }
L_0028F744:
    c.f[0] = c.f[1];
    c.f[1] = fp::sub(c.f[2], c.f[0]);
    c.budget -= 2;
L_0028F74C:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0028F768; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0028F76C; } }
L_0028F768:
    c.f[1] = c.f[1] ^ fp::kSign;
    c.budget -= 1;
L_0028F76C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[0] = ld32((c.r[1].w[0] - 30448u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0028F7AC; } }
    c.r[2].d[0] = ld64((c.r[19].w[0] + 704u));
    c.r[2].d[0] = c.r[2].d[0] & 4ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0028F7A4; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028F7A0u); set32(c.r[5], 0u + 16u);  if (depth < kMaxDepth) unit_005C(c, 53u, depth + 1u); else { c.pc = 0x00271110u; return; } if (c.pc != 0x0028F7A0u) [[unlikely]] return; }
L_0028F7A0:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0028F7A4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0028F7BC; } }
L_0028F7AC:
    c.r[2].d[0] = ld8((c.r[20].w[0] + 424u));
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
L_0028F7BC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.budget -= 1;
L_0028F7C0:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0028F7E0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0] + 12u)));
    c.r[2].d[0] = ld8((c.r[4].w[0] + 24u));
    set32(c.r[20], ld32((c.r[3].w[0] + 20u)));
    set32(c.r[19], ld32((c.r[20].w[0])));
    set32(c.r[18], ld32((c.r[19].w[0] + 984u)));
    c.budget -= 15;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[3].w[0] + 24u);  if (t) { goto L_0028F838; } }
    set32(c.r[4], c.r[19].w[0] + 224u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028F828u); set32(c.r[5], c.r[18].w[0] + 224u);  if (depth < kMaxDepth) unit_0011(c, 24u, depth + 1u); else { c.pc = 0x00144550u; return; } if (c.pc != 0x0028F828u) [[unlikely]] return; }
L_0028F828:
    st32((c.r[17].w[0] + 20u), c.f[0]);
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 24u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0028F93C; } }
L_0028F838:
    c.r[2].d[0] = ld16((c.r[20].w[0] + 420u));
    c.r[1].d[0] = c.r[2].sd[0] < 771ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[5], c.r[18].w[0] + 224u);  if (t) { goto L_0028F894; } }
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028F854u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_006F(c, 256u, depth + 1u); else { c.pc = 0x002BF3F0u; return; } if (c.pc != 0x0028F854u) [[unlikely]] return; }
L_0028F854:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0028F888; } }
    c.r[4].d[0] = ld64((c.r[18].w[0] + 704u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00060000u);
    c.r[3].d[0] = c.r[2].d[0] << 32;
    set32(c.r[2], 0u + 4u);
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0028F88C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0028F93C; } }
L_0028F888:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0028F88C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));  if (t) { goto L_0028F940; } }
L_0028F894:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028F89Cu); set32(c.r[4], c.r[19].w[0] + 224u);  if (depth < kMaxDepth) unit_0011(c, 24u, depth + 1u); else { c.pc = 0x00144550u; return; } if (c.pc != 0x0028F89Cu) [[unlikely]] return; }
L_0028F89C:
    c.f[1] = ld32((c.r[17].w[0] + 20u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.f[2] = c.f[1];  if (t) { goto L_0028F8B0; } }
    c.f[2] = c.f[0];
    c.budget -= 1;
L_0028F8B0:
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0028F8C4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[1] = fp::sub(c.f[2], c.f[0]);  if (t) { goto L_0028F8CC; } }
L_0028F8C4:
    c.f[0] = c.f[1];
    c.f[1] = fp::sub(c.f[2], c.f[0]);
    c.budget -= 2;
L_0028F8CC:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0028F8E8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0028F8EC; } }
L_0028F8E8:
    c.f[1] = c.f[1] ^ fp::kSign;
    c.budget -= 1;
L_0028F8EC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[0] = ld32((c.r[1].w[0] - 30448u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0028F92C; } }
    c.r[2].d[0] = ld64((c.r[19].w[0] + 704u));
    c.r[2].d[0] = c.r[2].d[0] & 4ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0028F924; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028F920u); set32(c.r[5], 0u + 16u);  if (depth < kMaxDepth) unit_005C(c, 53u, depth + 1u); else { c.pc = 0x00271110u; return; } if (c.pc != 0x0028F920u) [[unlikely]] return; }
L_0028F920:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0028F924:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0028F93C; } }
L_0028F92C:
    c.r[2].d[0] = ld8((c.r[20].w[0] + 424u));
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
L_0028F93C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.budget -= 1;
L_0028F940:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0028F960:
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 432u));
    c.r[2].d[0] = c.r[2].d[0] << 57;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[2].d[0] ^ 1ull;  c.pc = t; return; }
L_0028F980:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[2].w[0] + 20u)));
    set32(c.r[4], c.r[2].w[0] + 24u);
    c.r[2].d[0] = ld8((c.r[3].w[0] + 426u));
    c.r[2].d[0] = c.r[2].d[0] << 61;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 12;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0028F9B8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_0028F9EC; } }
L_0028F9B8:
    c.r[2].d[0] = ld8((c.r[3].w[0] + 424u));
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0028F9E8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028F9D4u); c.r[5].d[0] = ld16((c.r[16].w[0] + 20u));  if (depth < kMaxDepth) unit_005C(c, 53u, depth + 1u); else { c.pc = 0x00271110u; return; } if (c.pc != 0x0028F9D4u) [[unlikely]] return; }
L_0028F9D4:
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.r[4].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.budget -= 5;
L_0028F9E8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_0028F9EC:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0028FA00:
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 426u));
    c.r[2].d[0] = c.r[2].d[0] << 61;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;  c.pc = t; return; }
L_0028FA20:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[2].w[0] + 20u)));
    set32(c.r[4], c.r[2].w[0] + 24u);
    c.r[2].d[0] = ld8((c.r[3].w[0] + 424u));
    c.r[2].d[0] = c.r[2].d[0] << 60;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 12;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0028FA58; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_0028FA8C; } }
L_0028FA58:
    c.r[2].d[0] = ld8((c.r[3].w[0] + 427u));
    c.r[2].d[0] = c.r[2].d[0] << 59;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0028FA88; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028FA74u); set32(c.r[5], 0u + 16u);  if (depth < kMaxDepth) unit_005C(c, 53u, depth + 1u); else { c.pc = 0x00271110u; return; } if (c.pc != 0x0028FA74u) [[unlikely]] return; }
L_0028FA74:
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.r[4].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.budget -= 5;
L_0028FA88:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_0028FA8C:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0028FAA0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[18], ld32((c.r[2].w[0] + 20u)));
    set32(c.r[19], c.r[2].w[0] + 24u);
    set32(c.r[16], ld32((c.r[18].w[0])));
    set32(c.r[4], ld32((c.r[16].w[0] + 984u)));
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028FADCu); set32(c.r[17], c.r[18].w[0] + 392u);  if (depth < kMaxDepth) unit_0059(c, 82u, depth + 1u); else { c.pc = 0x002654F0u; return; } if (c.pc != 0x0028FADCu) [[unlikely]] return; }
L_0028FADC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0028FB00; } }
    c.r[2].d[0] = ld8((c.r[18].w[0] + 425u));
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0028FB00; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));  if (t) { goto L_0028FC7C; } }
L_0028FB00:
    c.f[1] = ld32((c.r[16].w[0] + 1024u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0028FB20; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0028FC78; } }
L_0028FB20:
    set32(c.r[2], ld32((c.r[20].w[0] + 12u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 132u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0028FB5C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028FB38u);  if (depth < kMaxDepth) unit_0070(c, 85u, depth + 1u); else { c.pc = 0x002C1A50u; return; } if (c.pc != 0x0028FB38u) [[unlikely]] return; }
L_0028FB38:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0028FB5C; } }
    c.r[2].d[0] = ld8((c.r[18].w[0] + 428u));
    c.r[2].d[0] = c.r[2].d[0] << 60;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0028FB5C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0028FC78; } }
L_0028FB5C:
    set32(c.r[2], ld32((c.r[20].w[0] + 12u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 132u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0028FBA0; } }
    c.r[3].d[0] = ld64((c.r[16].w[0] + 704u));
    set32(c.r[2], 0u + 8u);
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0028FBA0; } }
    set32(c.r[2], ld32((c.r[20].w[0] + 24u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; st32((c.r[20].w[0] + 24u), c.r[2].w[0]);  if (t) { goto L_0028FBA0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0028FC78; } }
L_0028FBA0:
    set32(c.r[2], ld32((c.r[20].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0028FC64; } }
    c.r[2].d[0] = ld64((c.r[16].w[0] + 704u));
    c.r[2].d[0] = c.r[2].d[0] & 3ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0028FBD0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028FBC8u);  if (depth < kMaxDepth) unit_0059(c, 56u, depth + 1u); else { c.pc = 0x00264C70u; return; } if (c.pc != 0x0028FBC8u) [[unlikely]] return; }
L_0028FBC8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0028FBF4; } }
L_0028FBD0:
    c.r[2].d[0] = ld8((c.r[18].w[0] + 432u));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0028FBF4; } }
    c.r[5].d[0] = ld16((c.r[17].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028FBECu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 56u, depth + 1u); else { c.pc = 0x002711B0u; return; } if (c.pc != 0x0028FBECu) [[unlikely]] return; }
L_0028FBEC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0028FC78; } }
L_0028FBF4:
    c.r[2].d[0] = ld8((c.r[18].w[0] + 424u));
    c.r[2].d[0] = c.r[2].d[0] << 57;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0028FC64; } }
    c.r[3].d[0] = ld64((c.r[16].w[0] + 704u));
    c.r[2].d[0] = c.r[3].d[0] & 3ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 8u);  if (t) { goto L_0028FC40; } }
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0028FC40; } }
    c.r[2].d[0] = c.r[3].d[0] & 4ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0028FC64; } }
L_0028FC40:
    c.r[5].d[0] = ld16((c.r[20].w[0] + 20u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028FC4Cu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 69u, depth + 1u); else { c.pc = 0x00271340u; return; } if (c.pc != 0x0028FC4Cu) [[unlikely]] return; }
L_0028FC4C:
    set32(c.r[3], ld32((c.r[20].w[0])));
    c.r[4].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0]), c.r[3].w[0]);  if (t) { goto L_0028FC78; } }
L_0028FC64:
    c.r[2].d[0] = ld8((c.r[18].w[0] + 425u));
    c.r[2].d[0] = c.r[2].d[0] << 59;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 5;
L_0028FC78:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.budget -= 1;
L_0028FC7C:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0028FCA0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    c.f[0] = 0u;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[18], ld32((c.r[2].w[0] + 20u)));
    set32(c.r[19], c.r[2].w[0] + 24u);
    set32(c.r[16], ld32((c.r[18].w[0])));
    c.f[1] = ld32((c.r[16].w[0] + 1024u));
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 17;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[17], c.r[18].w[0] + 392u);  if (t) { goto L_0028FCEC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0028FDC4; } }
L_0028FCEC:
    set32(c.r[2], ld32((c.r[20].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0028FDB0; } }
    c.r[2].d[0] = ld64((c.r[16].w[0] + 704u));
    c.r[2].d[0] = c.r[2].d[0] & 3ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0028FD1C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028FD14u);  if (depth < kMaxDepth) unit_0059(c, 56u, depth + 1u); else { c.pc = 0x00264C70u; return; } if (c.pc != 0x0028FD14u) [[unlikely]] return; }
L_0028FD14:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0028FD40; } }
L_0028FD1C:
    c.r[2].d[0] = ld8((c.r[18].w[0] + 432u));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0028FD40; } }
    c.r[5].d[0] = ld16((c.r[17].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028FD38u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 56u, depth + 1u); else { c.pc = 0x002711B0u; return; } if (c.pc != 0x0028FD38u) [[unlikely]] return; }
L_0028FD38:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0028FDC4; } }
L_0028FD40:
    c.r[2].d[0] = ld8((c.r[18].w[0] + 424u));
    c.r[2].d[0] = c.r[2].d[0] << 57;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0028FDB0; } }
    c.r[3].d[0] = ld64((c.r[16].w[0] + 704u));
    c.r[2].d[0] = c.r[3].d[0] & 3ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 8u);  if (t) { goto L_0028FD8C; } }
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0028FD8C; } }
    c.r[2].d[0] = c.r[3].d[0] & 4ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0028FDB0; } }
L_0028FD8C:
    c.r[5].d[0] = ld16((c.r[20].w[0] + 20u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028FD98u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 69u, depth + 1u); else { c.pc = 0x00271340u; return; } if (c.pc != 0x0028FD98u) [[unlikely]] return; }
L_0028FD98:
    set32(c.r[3], ld32((c.r[20].w[0])));
    c.r[4].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0]), c.r[3].w[0]);  if (t) { goto L_0028FDC4; } }
L_0028FDB0:
    c.r[2].d[0] = ld8((c.r[18].w[0] + 425u));
    c.r[2].d[0] = c.r[2].d[0] << 59;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 5;
L_0028FDC4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0028FDF0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[19], ld32((c.r[2].w[0] + 20u)));
    set32(c.r[20], c.r[2].w[0] + 24u);
    set32(c.r[17], ld32((c.r[19].w[0])));
    set32(c.r[16], ld32((c.r[17].w[0] + 984u)));
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028FE30u); set32(c.r[18], c.r[19].w[0] + 392u);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x0028FE30u) [[unlikely]] return; }
L_0028FE30:
    c.r[2].d[0] = ld8((c.r[2].w[0] + 1u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0028FE58; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028FE44u);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x0028FE44u) [[unlikely]] return; }
L_0028FE44:
    c.r[2].d[0] = ld8((c.r[2].w[0] + 39u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0028FE58; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0028FFB8; } }
L_0028FE58:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 371u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0028FE74; } }
    c.r[2].d[0] = ld8((c.r[17].w[0] + 371u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0028FE7C; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0028FE74:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));  if (t) { goto L_0028FFBC; } }
L_0028FE7C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028FE84u);  if (depth < kMaxDepth) unit_0059(c, 82u, depth + 1u); else { c.pc = 0x002654F0u; return; } if (c.pc != 0x0028FE84u) [[unlikely]] return; }
L_0028FE84:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0028FEA8; } }
    c.r[2].d[0] = ld8((c.r[19].w[0] + 425u));
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0028FEA8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0028FFB8; } }
L_0028FEA8:
    c.f[1] = ld32((c.r[17].w[0] + 1024u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0028FEC8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0028FFB8; } }
L_0028FEC8:
    set32(c.r[2], ld32((c.r[21].w[0] + 24u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; st32((c.r[21].w[0] + 24u), c.r[2].w[0]);  if (t) { goto L_0028FEE0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0028FFB8; } }
L_0028FEE0:
    set32(c.r[2], ld32((c.r[21].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0028FFA4; } }
    c.r[2].d[0] = ld64((c.r[17].w[0] + 704u));
    c.r[2].d[0] = c.r[2].d[0] & 3ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0028FF10; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028FF08u);  if (depth < kMaxDepth) unit_0059(c, 56u, depth + 1u); else { c.pc = 0x00264C70u; return; } if (c.pc != 0x0028FF08u) [[unlikely]] return; }
L_0028FF08:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0028FF34; } }
L_0028FF10:
    c.r[2].d[0] = ld8((c.r[19].w[0] + 432u));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0028FF34; } }
    c.r[5].d[0] = ld16((c.r[18].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028FF2Cu); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 56u, depth + 1u); else { c.pc = 0x002711B0u; return; } if (c.pc != 0x0028FF2Cu) [[unlikely]] return; }
L_0028FF2C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0028FFB8; } }
L_0028FF34:
    c.r[2].d[0] = ld8((c.r[19].w[0] + 424u));
    c.r[2].d[0] = c.r[2].d[0] << 57;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0028FFA4; } }
    c.r[3].d[0] = ld64((c.r[17].w[0] + 704u));
    c.r[2].d[0] = c.r[3].d[0] & 3ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 8u);  if (t) { goto L_0028FF80; } }
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0028FF80; } }
    c.r[2].d[0] = c.r[3].d[0] & 4ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0028FFA4; } }
L_0028FF80:
    c.r[5].d[0] = ld16((c.r[21].w[0] + 20u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028FF8Cu); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 69u, depth + 1u); else { c.pc = 0x00271340u; return; } if (c.pc != 0x0028FF8Cu) [[unlikely]] return; }
L_0028FF8C:
    set32(c.r[3], ld32((c.r[21].w[0])));
    c.r[4].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[21].w[0]), c.r[3].w[0]);  if (t) { goto L_0028FFB8; } }
L_0028FFA4:
    c.r[2].d[0] = ld8((c.r[19].w[0] + 425u));
    c.r[2].d[0] = c.r[2].d[0] << 59;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 5;
L_0028FFB8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.budget -= 1;
L_0028FFBC:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_0028FFE0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 8;
    [[clang::musttail]] return unit_0064(c, 1u, depth);
}

}
