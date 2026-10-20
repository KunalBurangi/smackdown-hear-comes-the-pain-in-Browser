#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0000[4096] = {
    0, 0, 1, 0, 0, 0, 2, 0, 3, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7,
    8, 0, 0, 0, 0, 0, 9, 0, 10, 0, 11, 0, 0, 0, 0, 0, 12, 0, 0, 0, 13, 0, 14, 0, 15, 0, 0, 0, 16, 0, 0, 0,
    17, 0, 0, 0, 18, 0, 0, 0, 19, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 22,
    0, 23, 0, 0, 24, 0, 25, 0, 26, 0, 27, 0, 28, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 31,
    0, 0, 32, 33, 34, 35, 0, 0, 0, 0, 0, 36, 0, 37, 0, 38, 0, 0, 0, 0, 0, 39, 0, 40, 0, 41, 0, 42, 0, 43, 0, 0,
    0, 44, 0, 45, 0, 0, 0, 0, 46, 0, 0, 0, 47, 0, 48, 0, 0, 0, 0, 0, 49, 0, 0, 0, 50, 0, 0, 0, 51, 0, 52, 0,
    0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 56, 0, 0, 57, 0, 58, 0, 59, 0, 0, 60, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 64, 0, 0, 0, 65, 0, 66, 0, 67, 0, 68, 0, 0, 0, 0, 0, 0,
    0, 69, 0, 70, 0, 0, 71, 0, 72, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0,
    76, 0, 0, 0, 77, 0, 0, 0, 78, 0, 0, 0, 79, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0,
    82, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 84, 0, 0, 0, 0, 0, 85, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    90, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 93, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 96, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    102, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 109, 0, 0,
    0, 0, 0, 110, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 112, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 114, 115, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0,
    0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 120, 0, 0, 121, 0, 0, 0, 0, 0, 0, 0, 0, 122, 0, 123, 0,
    124, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 0, 126, 0, 0,
    0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 128, 129, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    130, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    132, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 133, 0, 134, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 135, 0,
    136, 0, 0, 137, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    139, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    142, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 0,
    147, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 153, 0, 0, 0, 0,
    0, 154, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 156, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 159, 160, 161, 0, 0, 0, 0, 0, 0, 0, 0, 0, 162, 0, 0, 0, 0, 0,
    163, 0, 0, 0, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    166, 0, 0, 167, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 169, 170, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 172, 0, 0, 0, 0,
    173, 174, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 176, 0, 0, 177, 0, 0, 178, 0, 0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 180,
    181, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 182, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 183, 0, 0,
    184, 0, 0, 0, 0, 185, 0, 0, 186, 0, 0, 187, 0, 188, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 191, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 193, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    195, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 199, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 200, 201, 0, 0, 0, 0, 202, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    203, 0, 0, 204, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 205, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    206, 0, 0, 207, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 209, 0, 0, 0, 0, 0, 0, 0, 0, 210,
    211, 0, 212, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 215, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 216, 0, 0, 0, 0, 217, 0,
    0, 0, 0, 0, 0, 0, 0, 218, 0, 0, 219, 0, 0, 0, 220, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 221, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 222, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    223, 0, 0, 0, 0, 0, 0, 0, 224, 0, 0, 0, 0, 0, 0, 225, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    226, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 227, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 228, 0,
    0, 0, 0, 0, 0, 0, 229, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 230, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 231, 0, 0, 0, 0, 0, 0, 232, 0, 0, 0, 0, 233, 0, 0, 234,
    0, 0, 0, 0, 0, 0, 235, 0, 0, 236, 0, 0, 0, 0, 237, 238, 0, 239, 0, 0, 0, 0, 0, 0, 240, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 241, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 242, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 243, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 244, 245, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    246, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 247, 0, 248, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    249, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 250, 0, 0, 0, 251, 0, 0, 0, 0, 0, 0, 0, 0, 0, 252, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 253, 0, 0, 0, 0, 0, 0, 0, 0, 0, 254, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0,
    0, 0, 0, 256, 0, 0, 0, 0, 0, 0, 257, 0, 0, 0, 0, 0, 0, 258, 0, 0, 0, 0, 0, 0, 259, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 260, 0, 0, 0, 0, 0, 261, 0, 0, 0, 0, 0, 262, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    263, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 264, 265, 0, 0, 0, 0, 0, 0, 0, 0, 266, 0, 0, 0, 267, 0, 0, 0,
    268, 0, 0, 0, 0, 0, 269, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 270, 0, 0, 0, 271, 0, 272, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 273, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 274, 0, 0, 0, 275, 0, 276, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 277, 0, 0, 0, 0, 0, 0, 0, 0, 0, 278, 0, 0, 0, 279, 0, 0, 0, 0, 0, 0, 0, 0, 0, 280, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 281, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 282, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 283, 0, 284, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 285, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 286, 287, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    288, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 289, 0, 0, 0, 290, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    291, 0, 292, 0, 0, 0, 0, 0, 293, 0, 0, 0, 0, 0, 0, 294, 0, 0, 295, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    296, 0, 297, 0, 0, 0, 0, 0, 0, 0, 0, 298, 0, 0, 299, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    300, 0, 0, 0, 0, 0, 0, 0, 0, 301, 0, 0, 302, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 303, 0,
    0, 0, 0, 304, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 305, 0, 0, 0, 0, 0, 0, 0, 0, 306, 0, 0, 307, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 308, 0, 0, 0, 0, 0, 0, 0, 0, 309, 0, 0, 310, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 311, 0, 0, 0, 0, 0, 0, 0, 0, 0, 312, 0, 0, 0, 313, 0,
    0, 0, 0, 0, 0, 0, 0, 314, 0, 0, 0, 0, 315, 0, 0, 0, 0, 0, 316, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 317, 0, 0, 0, 0, 0, 318, 0, 0, 0, 0, 0, 319, 0, 0, 0, 320, 0, 0, 0,
    321, 0, 0, 0, 322, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 323, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 324, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 325, 0, 0, 0, 0, 0,
    326, 0, 0, 0, 0, 327, 0, 0, 0, 0, 0, 0, 0, 0, 0, 328, 0, 0, 0, 0, 0, 0, 0, 0, 329, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 330, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 331, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 332, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 333, 0, 0, 0,
    0, 0, 334, 0, 0, 0, 0, 0, 335, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 336, 0, 0, 0, 0, 0, 0, 337, 338, 0, 339, 0, 0, 0, 0, 0, 0, 0, 0, 0, 340, 0, 0, 0,
    341, 0, 0, 0, 0, 0, 0, 0, 342, 0, 0, 0, 0, 343, 0, 0, 344, 0, 0, 0, 0, 0, 0, 0, 0, 0, 345, 0, 0, 0, 0, 0,
    346, 0, 347, 0, 0, 0, 0, 0, 0, 0, 0, 0, 348, 0, 0, 0, 349, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 350, 0, 0, 0,
    351, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 352, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 353, 0, 0, 0, 0, 0, 0, 0, 354, 0, 0, 0, 0, 0, 0, 0, 355, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 356, 0, 0, 0, 0, 0, 357, 0, 0, 0, 0, 0, 358, 0, 0, 0, 0, 0, 359, 0, 0, 0, 0, 0, 360, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 361, 0, 0, 0, 362, 0, 0, 0, 0, 0, 0, 0, 0, 0, 363, 0, 0, 0, 364, 0, 0, 0, 365, 0,
    0, 0, 366, 0, 0, 0, 367, 0, 0, 0, 0, 0, 0, 0, 0, 0, 368, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 369, 370, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 371,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 372, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 373, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 374, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 375, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 376, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 377, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    378, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 379, 0, 0, 0, 0, 0, 0, 0, 380, 0, 0, 0, 381, 0, 0, 0, 0, 0, 0, 0,
    382, 0, 0, 0, 0, 0, 0, 0, 0, 0, 383, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 384, 0, 0, 0, 0, 385, 0, 0, 386,
    0, 0, 0, 387, 0, 0, 0, 388, 0, 0, 0, 389, 0, 0, 390, 0, 0, 0, 0, 0, 0, 0, 391, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 392, 0, 0, 393, 0, 0, 0, 394, 0, 0, 395, 0, 0, 0, 396, 0, 0, 397, 0, 0, 0, 0, 0, 0, 0, 0, 0, 398,
};

void unit_0000(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_00100008;
    case 2u: goto L_00100018;
    case 3u: goto L_00100020;
    case 4u: goto L_00100040;
    case 5u: goto L_00100080;
    case 6u: goto L_0010012C;
    case 7u: goto L_0010017C;
    case 8u: goto L_00100180;
    case 9u: goto L_00100198;
    case 10u: goto L_001001A0;
    case 11u: goto L_001001A8;
    case 12u: goto L_001001C0;
    case 13u: goto L_001001D0;
    case 14u: goto L_001001D8;
    case 15u: goto L_001001E0;
    case 16u: goto L_001001F0;
    case 17u: goto L_00100200;
    case 18u: goto L_00100210;
    case 19u: goto L_00100220;
    case 20u: goto L_00100230;
    case 21u: goto L_0010025C;
    case 22u: goto L_0010027C;
    case 23u: goto L_00100284;
    case 24u: goto L_00100290;
    case 25u: goto L_00100298;
    case 26u: goto L_001002A0;
    case 27u: goto L_001002A8;
    case 28u: goto L_001002B0;
    case 29u: goto L_001002C4;
    case 30u: goto L_001002F0;
    case 31u: goto L_001002FC;
    case 32u: goto L_00100308;
    case 33u: goto L_0010030C;
    case 34u: goto L_00100310;
    case 35u: goto L_00100314;
    case 36u: goto L_0010032C;
    case 37u: goto L_00100334;
    case 38u: goto L_0010033C;
    case 39u: goto L_00100354;
    case 40u: goto L_0010035C;
    case 41u: goto L_00100364;
    case 42u: goto L_0010036C;
    case 43u: goto L_00100374;
    case 44u: goto L_00100384;
    case 45u: goto L_0010038C;
    case 46u: goto L_001003A0;
    case 47u: goto L_001003B0;
    case 48u: goto L_001003B8;
    case 49u: goto L_001003D0;
    case 50u: goto L_001003E0;
    case 51u: goto L_001003F0;
    case 52u: goto L_001003F8;
    case 53u: goto L_00100410;
    case 54u: goto L_0010044C;
    case 55u: goto L_00100458;
    case 56u: goto L_00100488;
    case 57u: goto L_00100494;
    case 58u: goto L_0010049C;
    case 59u: goto L_001004A4;
    case 60u: goto L_001004B0;
    case 61u: goto L_001004C4;
    case 62u: goto L_00100510;
    case 63u: goto L_00100528;
    case 64u: goto L_0010053C;
    case 65u: goto L_0010054C;
    case 66u: goto L_00100554;
    case 67u: goto L_0010055C;
    case 68u: goto L_00100564;
    case 69u: goto L_00100584;
    case 70u: goto L_0010058C;
    case 71u: goto L_00100598;
    case 72u: goto L_001005A0;
    case 73u: goto L_001005C0;
    case 74u: goto L_001005D4;
    case 75u: goto L_001005EC;
    case 76u: goto L_00100600;
    case 77u: goto L_00100610;
    case 78u: goto L_00100620;
    case 79u: goto L_00100630;
    case 80u: goto L_00100640;
    case 81u: goto L_00100670;
    case 82u: goto L_00100680;
    case 83u: goto L_001006D0;
    case 84u: goto L_001006E0;
    case 85u: goto L_001006F8;
    case 86u: goto L_00100720;
    case 87u: goto L_00100750;
    case 88u: goto L_00100760;
    case 89u: goto L_00100790;
    case 90u: goto L_00100800;
    case 91u: goto L_0010080C;
    case 92u: goto L_00100860;
    case 93u: goto L_00100878;
    case 94u: goto L_001008C0;
    case 95u: goto L_00100950;
    case 96u: goto L_0010095C;
    case 97u: goto L_001009B0;
    case 98u: goto L_001009C8;
    case 99u: goto L_00100A20;
    case 100u: goto L_00100A38;
    case 101u: goto L_00100A54;
    case 102u: goto L_00100A80;
    case 103u: goto L_00100AB0;
    case 104u: goto L_00100AD0;
    case 105u: goto L_00100ADC;
    case 106u: goto L_00100B10;
    case 107u: goto L_00100B48;
    case 108u: goto L_00100BBC;
    case 109u: goto L_00100BF4;
    case 110u: goto L_00100C0C;
    case 111u: goto L_00100C18;
    case 112u: goto L_00100C68;
    case 113u: goto L_00100CD8;
    case 114u: goto L_00100CE8;
    case 115u: goto L_00100CEC;
    case 116u: goto L_00100D50;
    case 117u: goto L_00100D74;
    case 118u: goto L_00100D90;
    case 119u: goto L_00100DAC;
    case 120u: goto L_00100DC0;
    case 121u: goto L_00100DCC;
    case 122u: goto L_00100DF0;
    case 123u: goto L_00100DF8;
    case 124u: goto L_00100E00;
    case 125u: goto L_00100E54;
    case 126u: goto L_00100E74;
    case 127u: goto L_00100E90;
    case 128u: goto L_0010103C;
    case 129u: goto L_00101040;
    case 130u: goto L_00101080;
    case 131u: goto L_001010C0;
    case 132u: goto L_00101100;
    case 133u: goto L_00101140;
    case 134u: goto L_00101148;
    case 135u: goto L_00101178;
    case 136u: goto L_00101180;
    case 137u: goto L_0010118C;
    case 138u: goto L_001011C0;
    case 139u: goto L_00101200;
    case 140u: goto L_00101238;
    case 141u: goto L_00101268;
    case 142u: goto L_00101300;
    case 143u: goto L_00101390;
    case 144u: goto L_001013C4;
    case 145u: goto L_0010143C;
    case 146u: goto L_001014E8;
    case 147u: goto L_00101500;
    case 148u: goto L_001015F0;
    case 149u: goto L_00101628;
    case 150u: goto L_0010163C;
    case 151u: goto L_0010169C;
    case 152u: goto L_001016D8;
    case 153u: goto L_001016EC;
    case 154u: goto L_00101704;
    case 155u: goto L_00101740;
    case 156u: goto L_00101770;
    case 157u: goto L_001017A8;
    case 158u: goto L_001017E8;
    case 159u: goto L_00101838;
    case 160u: goto L_0010183C;
    case 161u: goto L_00101840;
    case 162u: goto L_00101868;
    case 163u: goto L_00101880;
    case 164u: goto L_001018A8;
    case 165u: goto L_001018C0;
    case 166u: goto L_00101900;
    case 167u: goto L_0010190C;
    case 168u: goto L_00101924;
    case 169u: goto L_0010193C;
    case 170u: goto L_00101940;
    case 171u: goto L_00101954;
    case 172u: goto L_0010196C;
    case 173u: goto L_00101980;
    case 174u: goto L_00101984;
    case 175u: goto L_0010199C;
    case 176u: goto L_001019B4;
    case 177u: goto L_001019C0;
    case 178u: goto L_001019CC;
    case 179u: goto L_001019E4;
    case 180u: goto L_001019FC;
    case 181u: goto L_00101A00;
    case 182u: goto L_00101A88;
    case 183u: goto L_00101AF4;
    case 184u: goto L_00101B00;
    case 185u: goto L_00101B14;
    case 186u: goto L_00101B20;
    case 187u: goto L_00101B2C;
    case 188u: goto L_00101B34;
    case 189u: goto L_00101B4C;
    case 190u: goto L_00101C3C;
    case 191u: goto L_00101C70;
    case 192u: goto L_00101DB0;
    case 193u: goto L_00101DE8;
    case 194u: goto L_00101E3C;
    case 195u: goto L_00101E80;
    case 196u: goto L_00101EF0;
    case 197u: goto L_00101F30;
    case 198u: goto L_00101FCC;
    case 199u: goto L_00102004;
    case 200u: goto L_0010203C;
    case 201u: goto L_00102040;
    case 202u: goto L_00102054;
    case 203u: goto L_00102080;
    case 204u: goto L_0010208C;
    case 205u: goto L_001020C0;
    case 206u: goto L_00102100;
    case 207u: goto L_0010210C;
    case 208u: goto L_00102140;
    case 209u: goto L_00102158;
    case 210u: goto L_0010217C;
    case 211u: goto L_00102180;
    case 212u: goto L_00102188;
    case 213u: goto L_001021C0;
    case 214u: goto L_00102218;
    case 215u: goto L_00102260;
    case 216u: goto L_001022E4;
    case 217u: goto L_001022F8;
    case 218u: goto L_0010231C;
    case 219u: goto L_00102328;
    case 220u: goto L_00102338;
    case 221u: goto L_00102378;
    case 222u: goto L_001023C0;
    case 223u: goto L_00102400;
    case 224u: goto L_00102420;
    case 225u: goto L_0010243C;
    case 226u: goto L_00102480;
    case 227u: goto L_001024B8;
    case 228u: goto L_001024F8;
    case 229u: goto L_00102518;
    case 230u: goto L_00102568;
    case 231u: goto L_001025C0;
    case 232u: goto L_001025DC;
    case 233u: goto L_001025F0;
    case 234u: goto L_001025FC;
    case 235u: goto L_00102618;
    case 236u: goto L_00102624;
    case 237u: goto L_00102638;
    case 238u: goto L_0010263C;
    case 239u: goto L_00102644;
    case 240u: goto L_00102660;
    case 241u: goto L_001026E8;
    case 242u: goto L_00102774;
    case 243u: goto L_001027A8;
    case 244u: goto L_0010283C;
    case 245u: goto L_00102840;
    case 246u: goto L_00102880;
    case 247u: goto L_001028C0;
    case 248u: goto L_001028C8;
    case 249u: goto L_00102900;
    case 250u: goto L_00102940;
    case 251u: goto L_00102950;
    case 252u: goto L_00102978;
    case 253u: goto L_001029AC;
    case 254u: goto L_001029D4;
    case 255u: goto L_001029F0;
    case 256u: goto L_00102A0C;
    case 257u: goto L_00102A28;
    case 258u: goto L_00102A44;
    case 259u: goto L_00102A60;
    case 260u: goto L_00102AA8;
    case 261u: goto L_00102AC0;
    case 262u: goto L_00102AD8;
    case 263u: goto L_00102B80;
    case 264u: goto L_00102C38;
    case 265u: goto L_00102C3C;
    case 266u: goto L_00102C60;
    case 267u: goto L_00102C70;
    case 268u: goto L_00102C80;
    case 269u: goto L_00102C98;
    case 270u: goto L_00102CC8;
    case 271u: goto L_00102CD8;
    case 272u: goto L_00102CE0;
    case 273u: goto L_00102D08;
    case 274u: goto L_00102D48;
    case 275u: goto L_00102D58;
    case 276u: goto L_00102D60;
    case 277u: goto L_00102D90;
    case 278u: goto L_00102DB8;
    case 279u: goto L_00102DC8;
    case 280u: goto L_00102DF0;
    case 281u: goto L_00102E18;
    case 282u: goto L_00102E50;
    case 283u: goto L_00102EB4;
    case 284u: goto L_00102EBC;
    case 285u: goto L_00102EF8;
    case 286u: goto L_0010303C;
    case 287u: goto L_00103040;
    case 288u: goto L_00103080;
    case 289u: goto L_001030C0;
    case 290u: goto L_001030D0;
    case 291u: goto L_00103100;
    case 292u: goto L_00103108;
    case 293u: goto L_00103120;
    case 294u: goto L_0010313C;
    case 295u: goto L_00103148;
    case 296u: goto L_00103180;
    case 297u: goto L_00103188;
    case 298u: goto L_001031AC;
    case 299u: goto L_001031B8;
    case 300u: goto L_00103200;
    case 301u: goto L_00103224;
    case 302u: goto L_00103230;
    case 303u: goto L_00103278;
    case 304u: goto L_0010328C;
    case 305u: goto L_001032C0;
    case 306u: goto L_001032E4;
    case 307u: goto L_001032F0;
    case 308u: goto L_00103340;
    case 309u: goto L_00103364;
    case 310u: goto L_00103370;
    case 311u: goto L_001033C0;
    case 312u: goto L_001033E8;
    case 313u: goto L_001033F8;
    case 314u: goto L_0010341C;
    case 315u: goto L_00103430;
    case 316u: goto L_00103448;
    case 317u: goto L_001034B0;
    case 318u: goto L_001034C8;
    case 319u: goto L_001034E0;
    case 320u: goto L_001034F0;
    case 321u: goto L_00103500;
    case 322u: goto L_00103510;
    case 323u: goto L_00103558;
    case 324u: goto L_00103594;
    case 325u: goto L_001035E8;
    case 326u: goto L_00103600;
    case 327u: goto L_00103614;
    case 328u: goto L_0010363C;
    case 329u: goto L_00103660;
    case 330u: goto L_0010369C;
    case 331u: goto L_001036F8;
    case 332u: goto L_00103724;
    case 333u: goto L_00103770;
    case 334u: goto L_00103788;
    case 335u: goto L_001037A0;
    case 336u: goto L_00103820;
    case 337u: goto L_0010383C;
    case 338u: goto L_00103840;
    case 339u: goto L_00103848;
    case 340u: goto L_00103870;
    case 341u: goto L_00103880;
    case 342u: goto L_001038A0;
    case 343u: goto L_001038B4;
    case 344u: goto L_001038C0;
    case 345u: goto L_001038E8;
    case 346u: goto L_00103900;
    case 347u: goto L_00103908;
    case 348u: goto L_00103930;
    case 349u: goto L_00103940;
    case 350u: goto L_00103970;
    case 351u: goto L_00103980;
    case 352u: goto L_001039B8;
    case 353u: goto L_00103A28;
    case 354u: goto L_00103A48;
    case 355u: goto L_00103A68;
    case 356u: goto L_00103A90;
    case 357u: goto L_00103AA8;
    case 358u: goto L_00103AC0;
    case 359u: goto L_00103AD8;
    case 360u: goto L_00103AF0;
    case 361u: goto L_00103B20;
    case 362u: goto L_00103B30;
    case 363u: goto L_00103B58;
    case 364u: goto L_00103B68;
    case 365u: goto L_00103B78;
    case 366u: goto L_00103B88;
    case 367u: goto L_00103B98;
    case 368u: goto L_00103BC0;
    case 369u: goto L_00103C38;
    case 370u: goto L_00103C3C;
    case 371u: goto L_00103C7C;
    case 372u: goto L_00103CAC;
    case 373u: goto L_00103CE0;
    case 374u: goto L_00103D24;
    case 375u: goto L_00103D58;
    case 376u: goto L_00103D88;
    case 377u: goto L_00103DCC;
    case 378u: goto L_00103E00;
    case 379u: goto L_00103E30;
    case 380u: goto L_00103E50;
    case 381u: goto L_00103E60;
    case 382u: goto L_00103E80;
    case 383u: goto L_00103EA8;
    case 384u: goto L_00103EDC;
    case 385u: goto L_00103EF0;
    case 386u: goto L_00103EFC;
    case 387u: goto L_00103F0C;
    case 388u: goto L_00103F1C;
    case 389u: goto L_00103F2C;
    case 390u: goto L_00103F38;
    case 391u: goto L_00103F58;
    case 392u: goto L_00103F90;
    case 393u: goto L_00103F9C;
    case 394u: goto L_00103FAC;
    case 395u: goto L_00103FB8;
    case 396u: goto L_00103FC8;
    case 397u: goto L_00103FD4;
    case 398u: goto L_00103FFC;
    default: bad_entry(c, 0x00100000u); return;
    }
L_00100008:
    mmi::padduw(c.r[1], c.r[0], c.r[0]);
    mmi::padduw(c.r[2], c.r[0], c.r[0]);
    mmi::padduw(c.r[3], c.r[0], c.r[0]);
    mmi::padduw(c.r[4], c.r[0], c.r[0]);
    c.budget -= 4;
L_00100018:
    mmi::padduw(c.r[5], c.r[0], c.r[0]);
    mmi::padduw(c.r[6], c.r[0], c.r[0]);
    c.budget -= 2;
L_00100020:
    mmi::padduw(c.r[7], c.r[0], c.r[0]);
    mmi::padduw(c.r[8], c.r[0], c.r[0]);
    mmi::padduw(c.r[9], c.r[0], c.r[0]);
    mmi::padduw(c.r[10], c.r[0], c.r[0]);
    mmi::padduw(c.r[11], c.r[0], c.r[0]);
    mmi::padduw(c.r[12], c.r[0], c.r[0]);
    mmi::padduw(c.r[13], c.r[0], c.r[0]);
    mmi::padduw(c.r[14], c.r[0], c.r[0]);
    c.budget -= 8;
L_00100040:
    mmi::padduw(c.r[15], c.r[0], c.r[0]);
    mmi::padduw(c.r[16], c.r[0], c.r[0]);
    mmi::padduw(c.r[17], c.r[0], c.r[0]);
    mmi::padduw(c.r[18], c.r[0], c.r[0]);
    mmi::padduw(c.r[19], c.r[0], c.r[0]);
    mmi::padduw(c.r[20], c.r[0], c.r[0]);
    mmi::padduw(c.r[21], c.r[0], c.r[0]);
    mmi::padduw(c.r[22], c.r[0], c.r[0]);
    mmi::padduw(c.r[23], c.r[0], c.r[0]);
    mmi::padduw(c.r[24], c.r[0], c.r[0]);
    mmi::padduw(c.r[25], c.r[0], c.r[0]);
    mmi::padduw(c.r[28], c.r[0], c.r[0]);
    mmi::padduw(c.r[29], c.r[0], c.r[0]);
    mmi::padduw(c.r[30], c.r[0], c.r[0]);
    mmi::padduw(c.r[31], c.r[0], c.r[0]);
    c.hi.d[0] = 0ull;
    c.budget -= 16;
L_00100080:
    c.hi.d[1] = 0ull;
    c.lo.d[0] = 0ull;
    c.lo.d[1] = 0ull;
    c.sa = ((0u ^ 0u) & 7u) * 2u;
    c.f[0] = 0u;
    c.f[1] = 0u;
    c.f[2] = 0u;
    c.f[3] = 0u;
    c.f[4] = 0u;
    c.f[5] = 0u;
    c.f[6] = 0u;
    c.f[7] = 0u;
    c.f[8] = 0u;
    c.f[9] = 0u;
    c.f[10] = 0u;
    c.f[11] = 0u;
    c.f[12] = 0u;
    c.f[13] = 0u;
    c.f[14] = 0u;
    c.f[15] = 0u;
    c.f[16] = 0u;
    c.f[17] = 0u;
    c.f[18] = 0u;
    c.f[19] = 0u;
    c.f[20] = 0u;
    c.f[21] = 0u;
    c.f[22] = 0u;
    c.f[23] = 0u;
    c.f[24] = 0u;
    c.f[25] = 0u;
    c.f[26] = 0u;
    c.f[27] = 0u;
    c.f[28] = 0u;
    c.f[29] = 0u;
    c.f[30] = 0u;
    c.f[31] = 0u;
    c.facc = fp::add(c.f[0], c.f[1]);
    ctc1(c, 31u, 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[2], c.r[2].w[0] - 26496u);
    set32(c.r[3], c.r[3].w[0] + 4096u);
    c.budget -= 43;
L_0010012C:
    st128((c.r[2].w[0]) & ~15u, c.r[0]);
    c.r[1].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[2], c.r[2].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0010012Cu | kUnwind; return; } goto L_0010012C; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x01FF0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00100000u);
    set32(c.r[4], c.r[4].w[0] + 6256u);
    set32(c.r[5], c.r[5].w[0]);
    set32(c.r[6], c.r[6].w[0]);
    set32(c.r[7], c.r[7].w[0] - 26944u);
    set32(c.r[8], c.r[8].w[0] + 464u);
    c.r[28].d[0] = c.r[4].d[0] | 0ull;
    set32(c.r[3], 0u + 60u);
    c.budget -= 12;
    c.pc = 0x0010017Cu; syscall(c, 0x00100178u); if (c.pc != 0x0010017Cu) return;
    c.budget -= 1;
L_0010017C:
    c.r[29].d[0] = c.r[2].d[0] | 0ull;
    c.budget -= 1;
L_00100180:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00000000u);
    set32(c.r[4], c.r[4].w[0] + 4096u);
    set32(c.r[5], c.r[5].w[0] - 1u);
    set32(c.r[3], 0u + 61u);
    c.budget -= 5;
    c.pc = 0x00100198u; syscall(c, 0x00100194u); if (c.pc != 0x00100198u) return;
    c.budget -= 1;
L_00100198:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001001A0u);  if (depth < kMaxDepth) unit_0005(c, 111u, depth + 1u); else { c.pc = 0x00114BE8u; return; } if (c.pc != 0x001001A0u) [[unlikely]] return; }
L_001001A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001001A8u); c.r[4].d[0] = 0ull | 0ull;  if (depth < kMaxDepth) unit_0002(c, 580u, depth + 1u); else { c.pc = 0x0010BEA0u; return; } if (c.pc != 0x001001A8u) [[unlikely]] return; }
L_001001A8:
    set_interrupts(c, true);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], c.r[2].w[0] - 26944u);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001001C0u); set32(c.r[5], c.r[2].w[0] + 4u);  if (depth < kMaxDepth) unit_0000(c, 53u, depth + 1u); else { c.pc = 0x00100410u; return; } if (c.pc != 0x001001C0u) [[unlikely]] return; }
L_001001C0:
    c.budget -= 2;
    { c.r[4].d[0] = c.r[2].d[0] | 0ull;  [[clang::musttail]] return unit_0005(c, 163u, depth); }
L_001001D0:
    set32(c.r[3], 0u + 35u);
    c.budget -= 1;
    c.pc = 0x001001D8u; syscall(c, 0x001001D4u); if (c.pc != 0x001001D8u) return;
    c.budget -= 1;
L_001001D8:
    c.budget -= 2;
L_001001E0:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_0010(c, 72u, depth); }
L_001001F0:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_0010(c, 72u, depth); }
L_00100200:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_0010(c, 83u, depth); }
L_00100210:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_0010(c, 83u, depth); }
L_00100220:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00100230:
    set32(c.r[29], c.r[29].w[0] - 128u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[1].w[0] + 3840u)));
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], 0u + 1u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010025Cu); st32((c.r[29].w[0] + 124u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x0010025Cu) [[unlikely]] return; }
L_0010025C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00450000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00450000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00450000u);
    set32(c.r[4], c.r[29].w[0] + 48u);
    set32(c.r[5], c.r[5].w[0] + 12560u);
    set32(c.r[6], c.r[6].w[0] + 12576u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010027Cu); set32(c.r[7], c.r[7].w[0] + 12592u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x00127458u; return; } if (c.pc != 0x0010027Cu) [[unlikely]] return; }
L_0010027C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00100284u); set32(c.r[4], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0013(c, 35u, depth + 1u); else { c.pc = 0x0014C630u; return; } if (c.pc != 0x00100284u) [[unlikely]] return; }
L_00100284:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00100290u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0011(c, 112u, depth + 1u); else { c.pc = 0x00146510u; return; } if (c.pc != 0x00100290u) [[unlikely]] return; }
L_00100290:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00100298u);  if (depth < kMaxDepth) unit_0000(c, 19u, depth + 1u); else { c.pc = 0x00100220u; return; } if (c.pc != 0x00100298u) [[unlikely]] return; }
L_00100298:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001002A0u);  if (depth < kMaxDepth) unit_0016(c, 261u, depth + 1u); else { c.pc = 0x0015A620u; return; } if (c.pc != 0x001002A0u) [[unlikely]] return; }
L_001002A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001002A8u);  if (depth < kMaxDepth) unit_0016(c, 257u, depth + 1u); else { c.pc = 0x0015A5D0u; return; } if (c.pc != 0x001002A8u) [[unlikely]] return; }
L_001002A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001002B0u);  if (depth < kMaxDepth) unit_0013(c, 41u, depth + 1u); else { c.pc = 0x0014C7A0u; return; } if (c.pc != 0x001002B0u) [[unlikely]] return; }
L_001002B0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[1].w[0] + 3840u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001002C4u); st32((c.r[29].w[0] + 120u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x001002C4u) [[unlikely]] return; }
L_001002C4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[9], 0u + 1u);
    set32(c.r[16], ld32((c.r[1].w[0] + 20144u)));
    set32(c.r[5], 0u + 640u);
    set32(c.r[6], 0u + 224u);
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[8], 0u + 49u);
    set32(c.r[10], 0u + 2u);
    c.r[11].d[0] = c.r[9].d[0] + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001002F0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0013(c, 63u, depth + 1u); else { c.pc = 0x0014CB60u; return; } if (c.pc != 0x001002F0u) [[unlikely]] return; }
L_001002F0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001002FCu); c.r[5].sd[0] = static_cast<std::int32_t>(0x000C0000u);  if (depth < kMaxDepth) unit_0013(c, 64u, depth + 1u); else { c.pc = 0x0014CC10u; return; } if (c.pc != 0x001002FCu) [[unlikely]] return; }
L_001002FC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00100308u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0013(c, 67u, depth + 1u); else { c.pc = 0x0014CEA0u; return; } if (c.pc != 0x00100308u) [[unlikely]] return; }
L_00100308:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0010030C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00100314u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0013(c, 218u, depth + 1u); else { c.pc = 0x0014F060u; return; } if (c.pc != 0x00100314u) [[unlikely]] return; }
    goto L_00100314;
L_00100310:
    set32(c.r[5], 0u + 1u);
    c.budget -= 1;
L_00100314:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00450000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = ld32((c.r[1].w[0] + 12656u));
    c.f[13] = c.f[12];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010032Cu); c.f[14] = c.f[12];  if (depth < kMaxDepth) unit_0013(c, 96u, depth + 1u); else { c.pc = 0x0014D700u; return; } if (c.pc != 0x0010032Cu) [[unlikely]] return; }
L_0010032C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00100334u); set32(c.r[4], ld32((c.r[29].w[0] + 120u)));  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x00100334u) [[unlikely]] return; }
L_00100334:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010033Cu);  if (depth < kMaxDepth) unit_000F(c, 103u, depth + 1u); else { c.pc = 0x0013CE00u; return; } if (c.pc != 0x0010033Cu) [[unlikely]] return; }
L_0010033C:
    set32(c.r[6], 0u + 128u);
    set32(c.r[4], 0u + 5u);
    set32(c.r[5], 0u + 3u);
    set32(c.r[7], 0u + 64u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00100354u); c.r[8].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 113u, depth + 1u); else { c.pc = 0x0013CEC0u; return; } if (c.pc != 0x00100354u) [[unlikely]] return; }
L_00100354:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010035Cu);  if (depth < kMaxDepth) unit_0011(c, 8u, depth + 1u); else { c.pc = 0x00144170u; return; } if (c.pc != 0x0010035Cu) [[unlikely]] return; }
L_0010035C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00100364u);  if (depth < kMaxDepth) unit_0011(c, 92u, depth + 1u); else { c.pc = 0x00145C50u; return; } if (c.pc != 0x00100364u) [[unlikely]] return; }
L_00100364:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010036Cu);  if (depth < kMaxDepth) unit_0034(c, 226u, depth + 1u); else { c.pc = 0x001D3400u; return; } if (c.pc != 0x0010036Cu) [[unlikely]] return; }
L_0010036C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00100374u); set32(c.r[4], 0u + 4u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00100374u) [[unlikely]] return; }
L_00100374:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00100384; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00100384u); set32(c.r[5], 0u + 8u);  if (depth < kMaxDepth) unit_000F(c, 339u, depth + 1u); else { c.pc = 0x0013F600u; return; } if (c.pc != 0x00100384u) [[unlikely]] return; }
L_00100384:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010038Cu); set32(c.r[4], ld32((c.r[29].w[0] + 124u)));  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x0010038Cu) [[unlikely]] return; }
L_0010038C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_001003A0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001003B0u);  if (depth < kMaxDepth) unit_000F(c, 107u, depth + 1u); else { c.pc = 0x0013CE50u; return; } if (c.pc != 0x001003B0u) [[unlikely]] return; }
L_001003B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001003B8u);  if (depth < kMaxDepth) unit_0013(c, 44u, depth + 1u); else { c.pc = 0x0014C7E0u; return; } if (c.pc != 0x001003B8u) [[unlikely]] return; }
L_001003B8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001003D0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001003E0u);  if (depth < kMaxDepth) unit_000F(c, 112u, depth + 1u); else { c.pc = 0x0013CEB0u; return; } if (c.pc != 0x001003E0u) [[unlikely]] return; }
L_001003E0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 20144u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001003F0u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0013(c, 104u, depth + 1u); else { c.pc = 0x0014DB00u; return; } if (c.pc != 0x001003F0u) [[unlikely]] return; }
L_001003F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001003F8u);  if (depth < kMaxDepth) unit_0010(c, 41u, depth + 1u); else { c.pc = 0x001407E0u; return; } if (c.pc != 0x001003F8u) [[unlikely]] return; }
L_001003F8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00100410:
    set32(c.r[29], c.r[29].w[0] - 96u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x01FF0000u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    set32(c.r[3], c.r[3].w[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    set32(c.r[2], c.r[2].w[0] + 4096u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = 0ull + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 15;
    { const bool t = 0ull == 0ull; set32(c.r[19], c.r[3].w[0] - c.r[2].w[0]);  if (t) { goto L_0010045C; } }
L_0010044C:
    set32(c.r[19], c.r[19].w[0] - 16384u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00100458u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 6u, depth + 1u); else { c.pc = 0x00124150u; return; } if (c.pc != 0x00100458u) [[unlikely]] return; }
L_00100458:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0010045C:
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0010044Cu | kUnwind; return; } goto L_0010044C; } }
    set32(c.r[2], 0u - 4u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00450000u);
    c.r[2].d[0] = c.r[19].d[0] & c.r[2].d[0];
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[6], c.r[6].w[0] + 12544u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00100488u); set32(c.r[5], c.r[2].w[0] - 16u);  if (depth < kMaxDepth) unit_0010(c, 48u, depth + 1u); else { c.pc = 0x00140920u; return; } if (c.pc != 0x00100488u) [[unlikely]] return; }
L_00100488:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00450000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00100494u); set32(c.r[4], c.r[4].w[0] + 12608u);  if (depth < kMaxDepth) unit_0009(c, 124u, depth + 1u); else { c.pc = 0x001260E0u; return; } if (c.pc != 0x00100494u) [[unlikely]] return; }
L_00100494:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010049Cu);  if (depth < kMaxDepth) unit_0000(c, 80u, depth + 1u); else { c.pc = 0x00100640u; return; } if (c.pc != 0x0010049Cu) [[unlikely]] return; }
L_0010049C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001004A4u);  if (depth < kMaxDepth) unit_000B(c, 80u, depth + 1u); else { c.pc = 0x0012CB30u; return; } if (c.pc != 0x001004A4u) [[unlikely]] return; }
L_001004A4:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001004B0u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 20u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x001004B0u) [[unlikely]] return; }
L_001004B0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[4], 0u + 1u);
    set32(c.r[2], ld32((c.r[1].w[0] + 3840u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001004C4u); st32((c.r[29].w[0] + 92u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x001004C4u) [[unlikely]] return; }
L_001004C4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[16], ld32((c.r[1].w[0] + 20144u)));
    c.r[4].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = 0ull | 32768ull;
    set32(c.r[5], 0u + 1u);
    c.r[3].d[0] = c.r[2].d[0] << 16;
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    set32(c.r[2], 0u + 16546u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[1], c.r[16].w[0] + c.r[1].w[0]);
    st64((c.r[1].w[0] + 416u), c.r[3].d[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[16].w[0] + c.r[1].w[0]);
    st64((c.r[1].w[0] + 784u), c.r[3].d[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x12000000u);
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00100510u); st64((c.r[1].w[0]), c.r[2].d[0]);  if (depth < kMaxDepth) unit_0013(c, 104u, depth + 1u); else { c.pc = 0x0014DB00u; return; } if (c.pc != 0x00100510u) [[unlikely]] return; }
L_00100510:
    set32(c.r[2], 0u + 16546u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x12000000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st64((c.r[1].w[0]), c.r[2].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00100528u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0013(c, 104u, depth + 1u); else { c.pc = 0x0014DB00u; return; } if (c.pc != 0x00100528u) [[unlikely]] return; }
L_00100528:
    c.r[2].d[0] = 0ull | 65314ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x12000000u);
    set32(c.r[4], 0u + 12u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010053Cu); st64((c.r[1].w[0]), c.r[2].d[0]);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0010053Cu) [[unlikely]] return; }
L_0010053C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0010054C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010054Cu);  if (depth < kMaxDepth) unit_009E(c, 83u, depth + 1u); else { c.pc = 0x00378D50u; return; } if (c.pc != 0x0010054Cu) [[unlikely]] return; }
L_0010054C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00100554u); set32(c.r[4], ld32((c.r[29].w[0] + 92u)));  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x00100554u) [[unlikely]] return; }
L_00100554:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_00100568; } }
L_0010055C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00100564u);  if (depth < kMaxDepth) unit_0000(c, 49u, depth + 1u); else { c.pc = 0x001003D0u; return; } if (c.pc != 0x00100564u) [[unlikely]] return; }
L_00100564:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 1;
L_00100568:
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0010055Cu | kUnwind; return; } goto L_0010055C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00100584u);  if (depth < kMaxDepth) unit_0000(c, 46u, depth + 1u); else { c.pc = 0x001003A0u; return; } if (c.pc != 0x00100584u) [[unlikely]] return; }
L_00100584:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010058Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 10u, depth + 1u); else { c.pc = 0x001241A8u; return; } if (c.pc != 0x0010058Cu) [[unlikely]] return; }
L_0010058C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00450000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00100598u); set32(c.r[4], c.r[4].w[0] + 12640u);  if (depth < kMaxDepth) unit_0009(c, 124u, depth + 1u); else { c.pc = 0x001260E0u; return; } if (c.pc != 0x00100598u) [[unlikely]] return; }
L_00100598:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001005A0u);  if (depth < kMaxDepth) unit_0000(c, 81u, depth + 1u); else { c.pc = 0x00100670u; return; } if (c.pc != 0x001005A0u) [[unlikely]] return; }
L_001005A0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[2].d[0] = 0ull + 0ull;
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_001005C0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.budget -= 3;
    { const bool t = c.r[4].sd[0] <= 0; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_001005DC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001005D4u);  if (depth < kMaxDepth) unit_0006(c, 237u, depth + 1u); else { c.pc = 0x0011BF38u; return; } if (c.pc != 0x001005D4u) [[unlikely]] return; }
L_001005D4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_001005F4; } }
L_001005DC:
    c.r[3].d[0] = c.r[4].d[0] >> 1;
    c.r[2].d[0] = c.r[4].d[0] & 1ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001005ECu); c.r[4].d[0] = c.r[3].d[0] | c.r[2].d[0];  if (depth < kMaxDepth) unit_0006(c, 237u, depth + 1u); else { c.pc = 0x0011BF38u; return; } if (c.pc != 0x001005ECu) [[unlikely]] return; }
L_001005EC:
    c.f[0] = fp::add(c.f[0], c.f[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 2;
L_001005F4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00100600:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00100610u);  if (depth < kMaxDepth) unit_0007(c, 71u, depth + 1u); else { c.pc = 0x0011CEA8u; return; } if (c.pc != 0x00100610u) [[unlikely]] return; }
L_00100610:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = c.r[2].sd[0] < 0ll ? 1ull : 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00100620:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00100630u);  if (depth < kMaxDepth) unit_0007(c, 71u, depth + 1u); else { c.pc = 0x0011CEA8u; return; } if (c.pc != 0x00100630u) [[unlikely]] return; }
L_00100630:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = 0ll < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00100640:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[4], c.r[4].w[0] - 22192u);
    set32(c.r[5], c.r[5].w[0] - 22124u);
    set32(c.r[6], c.r[6].w[0] - 26624u);
    c.budget -= 9;
    { set32(c.r[7], c.r[7].w[0] - 26624u);  goto L_00100AB0; }
L_00100670:
    c.budget -= 2;
    {  goto L_00100A20; }
L_00100680:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 11;
    { const bool t = c.r[20].d[0] == 0ull; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_001006F8; } }
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_001006F0; } }
    set32(c.r[17], ld32((c.r[20].w[0] - 12u)));
    c.r[18].d[0] = 0ull + 0ull;
    set32(c.r[16], ld32((c.r[20].w[0] - 16u)));
    c.r[1].d[0] = 0ull < c.r[17].d[0] ? 1ull : 0ull;
    mmi::mult(c, 0, c.r[16].w[0], c.r[17].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[21], c.r[20].w[0] + c.r[2].w[0]);  if (t) { goto L_001006F0; } }
L_001006D0:
    set32(c.r[21], c.r[21].w[0] - c.r[16].w[0]);
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[19].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001006E0u); set32(c.r[5], 0u - 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001006E0u) [[unlikely]] return; }
L_001006E0:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[2].d[0] = c.r[18].d[0] < c.r[17].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001006D0u | kUnwind; return; } goto L_001006D0; } }
L_001006F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001006F8u); set32(c.r[4], c.r[20].w[0] - 16u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100210u; return; } if (c.pc != 0x001006F8u) [[unlikely]] return; }
L_001006F8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_00100720:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    c.r[17].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::mult(c, 0, c.r[18].w[0], c.r[17].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    c.budget -= 12;
    { const bool t = c.r[17].d[0] == 0ull; set32(c.r[16], c.r[4].w[0] + c.r[3].w[0]);  if (t) { goto L_00100770; } }
L_00100750:
    set32(c.r[16], c.r[16].w[0] - c.r[18].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[19].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00100760u); set32(c.r[5], 0u - 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00100760u) [[unlikely]] return; }
L_00100760:
    set32(c.r[17], c.r[17].w[0] - 1u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00100750u | kUnwind; return; } goto L_00100750; } }
    c.budget -= 1;
L_00100770:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00100790:
    set32(c.r[29], c.r[29].w[0] - 176u);
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    set32(c.r[23], c.r[29].w[0] + 156u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    set32(c.r[22], c.r[29].w[0] + 148u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[8].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[17], c.r[29].w[0] + 160u);
    st32((c.r[29].w[0] + 144u), c.r[4].w[0]);
    set32(c.r[16], c.r[29].w[0] + 152u);
    st32((c.r[22].w[0]), c.r[20].w[0]);
    st32((c.r[16].w[0]), c.r[19].w[0]);
    st32((c.r[23].w[0]), c.r[6].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0])));
    st32((c.r[17].w[0]), c.r[3].w[0]);
    st32((c.r[17].w[0]), 0u);
    set32(c.r[3], ld32((c.r[17].w[0])));
    c.r[1].d[0] = c.r[3].d[0] < c.r[19].d[0] ? 1ull : 0ull;
    c.budget -= 28;
    { const bool t = c.r[1].d[0] == 0ull; c.r[18].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00100828; } }
L_00100800:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[21].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0010080Cu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0010080Cu) [[unlikely]] return; }
L_0010080C:
    set32(c.r[3], ld32((c.r[17].w[0])));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[17].w[0]), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0])));
    c.r[3].d[0] = c.r[3].d[0] < c.r[19].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[18], c.r[18].w[0] + c.r[20].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00100800u | kUnwind; return; } goto L_00100800; } }
L_00100828:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[5], ld32((c.r[17].w[0])));
    c.r[1].d[0] = c.r[5].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00100890; } }
    set32(c.r[3], ld32((c.r[23].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00100890; } }
    set32(c.r[4], ld32((c.r[22].w[0])));
    set32(c.r[3], ld32((c.r[29].w[0] + 144u)));
    mmi::mult(c, 0, c.r[4].w[0], c.r[5].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    c.budget -= 5;
    { const bool t = c.r[5].d[0] == 0ull; set32(c.r[16], c.r[3].w[0] + c.r[4].w[0]);  if (t) { goto L_00100890; } }
    c.budget -= 1;
L_00100860:
    set32(c.r[3], ld32((c.r[22].w[0])));
    set32(c.r[2], ld32((c.r[23].w[0])));
    set32(c.r[5], 0u - 1u);
    set32(c.r[16], c.r[16].w[0] - c.r[3].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00100878u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00100878u) [[unlikely]] return; }
L_00100878:
    set32(c.r[3], ld32((c.r[17].w[0])));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st32((c.r[17].w[0]), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0])));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00100860u | kUnwind; return; } goto L_00100860; } }
L_00100890:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 176u);  c.pc = t; return; }
L_001008C0:
    set32(c.r[29], c.r[29].w[0] - 192u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[22].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[8].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 16;
    { const bool t = c.r[4].d[0] == 0ull; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_001009E0; } }
    st32((c.r[19].w[0]), c.r[21].w[0]);
    st32((c.r[19].w[0] + 4u), c.r[20].w[0]);
    c.budget -= 4;
    { const bool t = c.r[22].d[0] == 0ull; set32(c.r[19], c.r[19].w[0] + 16u);  if (t) { goto L_001009E0; } }
    st32((c.r[29].w[0] + 160u), c.r[19].w[0]);
    set32(c.r[23], c.r[29].w[0] + 164u);
    st32((c.r[23].w[0]), c.r[21].w[0]);
    set32(c.r[16], c.r[29].w[0] + 168u);
    st32((c.r[16].w[0]), c.r[20].w[0]);
    set32(c.r[30], c.r[29].w[0] + 172u);
    st32((c.r[30].w[0]), c.r[6].w[0]);
    set32(c.r[17], c.r[29].w[0] + 176u);
    set32(c.r[2], ld32((c.r[16].w[0])));
    st32((c.r[17].w[0]), c.r[2].w[0]);
    st32((c.r[17].w[0]), 0u);
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.r[1].d[0] = c.r[2].d[0] < c.r[20].d[0] ? 1ull : 0ull;
    c.budget -= 15;
    { const bool t = c.r[1].d[0] == 0ull; c.r[18].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_00100978; } }
    c.budget -= 1;
L_00100950:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[22].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0010095Cu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0010095Cu) [[unlikely]] return; }
L_0010095C:
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.r[2].d[0] = c.r[2].d[0] < c.r[20].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[18], c.r[18].w[0] + c.r[21].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00100950u | kUnwind; return; } goto L_00100950; } }
L_00100978:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.r[1].d[0] = c.r[4].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001009E0; } }
    set32(c.r[2], ld32((c.r[30].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001009E0; } }
    set32(c.r[3], ld32((c.r[23].w[0])));
    set32(c.r[2], ld32((c.r[29].w[0] + 160u)));
    mmi::mult(c, 0, c.r[3].w[0], c.r[4].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);  if (t) { goto L_001009E0; } }
    c.budget -= 1;
L_001009B0:
    set32(c.r[3], ld32((c.r[23].w[0])));
    set32(c.r[2], ld32((c.r[30].w[0])));
    set32(c.r[5], 0u - 1u);
    set32(c.r[16], c.r[16].w[0] - c.r[3].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001009C8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001009C8u) [[unlikely]] return; }
L_001009C8:
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001009B0u | kUnwind; return; } goto L_001009B0; } }
L_001009E0:
    c.r[2].d[0] = c.r[19].d[0] + 0ull;
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
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 192u);  c.pc = t; return; }
L_00100A20:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00490000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[1].w[0] - 26496u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00100A68; } }
L_00100A38:
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00490000u);
    st32((c.r[1].w[0] - 26496u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00100A54u); set32(c.r[5], 0u - 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00100A54u) [[unlikely]] return; }
L_00100A54:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[3], ld32((c.r[1].w[0] - 26496u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00100A38u | kUnwind; return; } goto L_00100A38; } }
    c.budget -= 1;
L_00100A68:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00100A80:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[1].w[0] - 26496u)));
    st32((c.r[6].w[0]), c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00490000u);
    st32((c.r[6].w[0] + 4u), c.r[5].w[0]);
    st32((c.r[6].w[0] + 8u), c.r[4].w[0]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[1].w[0] - 26496u), c.r[6].w[0]);  c.pc = t; return; }
L_00100AB0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[1].d[0] = c.r[4].d[0] < c.r[17].d[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00100AF0; } }
L_00100AD0:
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00100ADCu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00100ADCu) [[unlikely]] return; }
L_00100ADC:
    set32(c.r[16], c.r[16].w[0] + 4u);
    c.r[3].d[0] = c.r[16].d[0] < c.r[17].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00100AD0u | kUnwind; return; } goto L_00100AD0; } }
L_00100AF0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00100B10:
    set32(c.r[1], ld32((c.r[25].w[0])));
    set32(c.r[24], ld32((c.r[25].w[0] + 4u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 5;
    { const bool t = c.r[24].sd[0] < 0; set32(c.r[4], c.r[4].w[0] + c.r[1].w[0]);  if (t) { goto L_00100B3C; } }
    set32(c.r[25], c.r[4].w[0] + c.r[25].w[0]);
    set32(c.r[25], ld32((c.r[25].w[0])));
    set32(c.r[25], c.r[25].w[0] + c.r[24].w[0]);
    set32(c.r[25], ld32((c.r[25].w[0])));
    c.budget -= 6;
L_00100B3C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[25].w[0];  c.pc = t; if (t - 0x00100000u < 16384u) { entry = entries_0000[(t - 0x00100000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00100B48:
    set32(c.r[29], c.r[29].w[0] - 80u);
    set32(c.r[4], c.r[4].w[0] << 16);
    st64((c.r[29].w[0] + 48u), c.r[19].d[0]);
    set32(c.r[5], c.r[5].w[0] << 16);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    set32(c.r[6], c.r[6].w[0] << 16);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    set32(c.r[7], c.r[7].w[0] << 16);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 16));
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[17], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[5].w[0]) >> 16));
    set32(c.r[18], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[6].w[0]) >> 16));
    set32(c.r[2], 0u + 1u);
    c.budget -= 16;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; set32(c.r[19], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[7].w[0]) >> 16));  if (t) { goto L_00100C48; } }
    c.r[2].d[0] = c.r[4].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], 0u + 5u);  goto L_00100BA4; }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  if (t) { goto L_00100BB4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_00100CC4; } }
L_00100BA4:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  if (t) { goto L_00100C60; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_00100CC4; } }
L_00100BB4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00100BBCu);  if (depth < kMaxDepth) unit_0000(c, 113u, depth + 1u); else { c.pc = 0x00100CD8u; return; } if (c.pc != 0x00100BBCu) [[unlikely]] return; }
L_00100BBC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x12000000u);
    set32(c.r[4], 0u + 512u);
    c.r[3].d[0] = c.r[3].d[0] | 4096ull;
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    st64((c.r[3].w[0]), c.r[4].d[0]);
    st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[17].w[0]));
    c.r[4].d[0] = 0ull | 65280ull;
    c.r[2].d[0] = ld64((c.r[3].w[0]));
    st16((c.r[16].w[0] + 2u), static_cast<std::uint16_t>(c.r[18].w[0]));
    c.r[2].d[0] = c.r[2].d[0] >> 16;
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00100BF4u); st16((c.r[16].w[0] + 6u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0002(c, 604u, depth + 1u); else { c.pc = 0x0010BF60u; return; } if (c.pc != 0x00100BF4u) [[unlikely]] return; }
L_00100BF4:
    c.r[3].d[0] = 0ull < c.r[19].d[0] ? 1ull : 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; st16((c.r[16].w[0] + 4u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_00100C20; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00100C0Cu); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_0003(c, 71u, depth + 1u); else { c.pc = 0x0010C700u; return; } if (c.pc != 0x00100C0Cu) [[unlikely]] return; }
L_00100C0C:
    set32(c.r[5], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00100C18u); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_0002(c, 404u, depth + 1u); else { c.pc = 0x0010B920u; return; } if (c.pc != 0x00100C18u) [[unlikely]] return; }
L_00100C18:
    st32((c.r[16].w[0] + 12u), 0u);
    st32((c.r[16].w[0] + 8u), 0u);
    c.budget -= 2;
L_00100C20:
    c.r[4].d[0] = c.r[17].d[0] & 1ull;
    c.r[5].d[0] = c.r[18].d[0] & 255ull;
    c.r[6].d[0] = c.r[19].d[0] & 1ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 10;
    { set32(c.r[29], c.r[29].w[0] + 80u);  [[clang::musttail]] return unit_0002(c, 372u, depth); }
L_00100C48:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x12000000u);
    set32(c.r[3], 0u + 256u);
    c.r[2].d[0] = c.r[2].d[0] | 4096ull;
    st64((c.r[2].w[0]), c.r[3].d[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  if (t) { goto L_00100CC0; } }
L_00100C60:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00100C68u);  if (depth < kMaxDepth) unit_0000(c, 113u, depth + 1u); else { c.pc = 0x00100CD8u; return; } if (c.pc != 0x00100C68u) [[unlikely]] return; }
L_00100C68:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x12000000u);
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[3].d[0] = c.r[3].d[0] | 4096ull;
    c.r[6].d[0] = 0ull < c.r[19].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = ld64((c.r[3].w[0]));
    c.r[4].d[0] = c.r[17].d[0] & 1ull;
    st16((c.r[16].w[0] + 4u), static_cast<std::uint16_t>(c.r[6].w[0]));
    c.r[5].d[0] = c.r[18].d[0] & 255ull;
    c.r[2].d[0] = c.r[2].d[0] >> 16;
    st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[17].w[0]));
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    st16((c.r[16].w[0] + 2u), static_cast<std::uint16_t>(c.r[18].w[0]));
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.r[6].d[0] = c.r[19].d[0] & 1ull;
    st16((c.r[16].w[0] + 6u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 22;
    { set32(c.r[29], c.r[29].w[0] + 80u);  [[clang::musttail]] return unit_0002(c, 372u, depth); }
L_00100CC0:
    c.r[19].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_00100CC4:
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00100CD8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00410000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] - 24048u);  c.pc = t; return; }
L_00100CE8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.budget -= 1;
L_00100CEC:
    set32(c.r[7], 0u + 1u);
    c.r[2].d[0] = c.r[2].d[0] | 15376ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    st32((c.r[2].w[0]), c.r[7].w[0]);
    c.r[3].d[0] = c.r[3].d[0] | 15392ull;
    set32(c.r[2], 0u + 2u);
    c.r[4].d[0] = 0ull + 0ull;
    st32((c.r[3].w[0]), c.r[2].w[0]);
    set32(c.r[4], cfc2(c, 28u));
    c.r[4].d[0] = c.r[4].d[0] | 512ull;
    ctc2(c, 28u, c.r[4].w[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00410000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x10000000u);
    set32(c.r[5], c.r[5].w[0] - 24032u);
    c.r[6].d[0] = c.r[6].d[0] | 20480ull;
    ld128((c.r[5].w[0]) & ~15u, c.r[4]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[3].d[0] = c.r[3].d[0] | 12288ull;
    st128((c.r[6].w[0]) & ~15u, c.r[4]);
    ld128((c.r[5].w[0] + 16u) & ~15u, c.r[2]);
    st128((c.r[6].w[0]) & ~15u, c.r[2]);
    c.budget -= 25;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[3].w[0]), c.r[7].w[0]);  c.pc = t; return; }
L_00100D50:
    set32(c.r[29], c.r[29].w[0] - 320u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00450000u);
    st64((c.r[29].w[0] + 288u), c.r[18].d[0]);
    set32(c.r[5], 0u + 1u);
    st64((c.r[29].w[0] + 304u), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] + 12664u);
    st64((c.r[29].w[0] + 272u), c.r[17].d[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00100D74u); st64((c.r[29].w[0] + 256u), c.r[16].d[0]);  if (depth < kMaxDepth) unit_0003(c, 464u, depth + 1u); else { c.pc = 0x0010FDC0u; return; } if (c.pc != 0x00100D74u) [[unlikely]] return; }
L_00100D74:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[18].sd[0] >= 0; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_00100D88; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_00100DD8; } }
L_00100D88:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[29].d[0] + 0ull;  if (t) { goto L_00100D94; } }
L_00100D90:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_00100D94:
    c.r[2].d[0] = c.r[17].d[0] < static_cast<std::uint64_t>(256ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00100DB8; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00100DACu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0004(c, 34u, depth + 1u); else { c.pc = 0x00110400u; return; } if (c.pc != 0x00100DACu) [[unlikely]] return; }
L_00100DAC:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00100D90u | kUnwind; return; } goto L_00100D90; } }
L_00100DB8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00100DC0u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0004(c, 4u, depth + 1u); else { c.pc = 0x00110048u; return; } if (c.pc != 0x00100DC0u) [[unlikely]] return; }
L_00100DC0:
    set32(c.r[4], c.r[17].w[0] - 9u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00100DCCu); set32(c.r[4], c.r[29].w[0] + c.r[4].w[0]);  if (depth < kMaxDepth) unit_0008(c, 170u, depth + 1u); else { c.pc = 0x00121A60u; return; } if (c.pc != 0x00100DCCu) [[unlikely]] return; }
L_00100DCC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x01310000u);
    c.r[3].d[0] = c.r[3].d[0] | 22128ull;
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
L_00100DD8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 304u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 288u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 272u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 256u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 320u);  c.pc = t; return; }
L_00100DF0:
    set32(c.r[3], 0u + 128u);
    c.budget -= 1;
    c.pc = 0x00100DF8u; syscall(c, 0x00100DF4u); if (c.pc != 0x00100DF8u) return;
    c.budget -= 1;
L_00100DF8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00100E00:
    set32(c.r[29], c.r[29].w[0] - 144u);
    set32(c.r[5], c.r[5].w[0] << 16);
    st64((c.r[29].w[0] + 112u), c.r[22].d[0]);
    set32(c.r[6], c.r[6].w[0] << 16);
    st64((c.r[29].w[0] + 96u), c.r[21].d[0]);
    set32(c.r[7], c.r[7].w[0] << 16);
    st64((c.r[29].w[0] + 80u), c.r[20].d[0]);
    set32(c.r[8], c.r[8].w[0] << 16);
    st64((c.r[29].w[0] + 64u), c.r[19].d[0]);
    set32(c.r[9], c.r[9].w[0] << 16);
    st64((c.r[29].w[0] + 48u), c.r[18].d[0]);
    set32(c.r[22], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[5].w[0]) >> 16));
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    set32(c.r[18], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[7].w[0]) >> 16));
    st64((c.r[29].w[0] + 32u), c.r[17].d[0]);
    set32(c.r[16], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[6].w[0]) >> 16));
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    set32(c.r[21], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[8].w[0]) >> 16));
    set32(c.r[20], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[9].w[0]) >> 16));
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00100E54u); c.r[19].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 113u, depth + 1u); else { c.pc = 0x00100CD8u; return; } if (c.pc != 0x00100E54u) [[unlikely]] return; }
L_00100E54:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = ld16((c.r[17].w[0] + 2u));
    set32(c.r[2], c.r[4].w[0] - 2u);
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[2].d[0] != 0ull) { st32((c.r[29].w[0] + 12u), 0u);  goto L_00100EA0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00100E74u);  if (depth < kMaxDepth) unit_0000(c, 116u, depth + 1u); else { c.pc = 0x00100D50u; return; } if (c.pc != 0x00100E74u) [[unlikely]] return; }
L_00100E74:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[29].d[0] + 0ull;  if (t) { goto L_00100E98; } }
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 2u)));
    c.r[6].d[0] = c.r[29].d[0] | 4ull;
    c.r[7].d[0] = c.r[29].d[0] | 8ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00100E90u); c.r[8].d[0] = c.r[29].d[0] | 12ull;  if (depth < kMaxDepth) unit_0000(c, 122u, depth + 1u); else { c.pc = 0x00100DF0u; return; } if (c.pc != 0x00100E90u) [[unlikely]] return; }
L_00100E90:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = ld16((c.r[17].w[0] + 2u));  if (t) { goto L_00100EAC; } }
L_00100E98:
    c.r[4].d[0] = ld16((c.r[17].w[0] + 2u));
    st32((c.r[29].w[0] + 12u), 0u);
    c.budget -= 2;
L_00100EA0:
    st32((c.r[29].w[0] + 8u), 0u);
    st32((c.r[29].w[0] + 4u), 0u);
    st32((c.r[29].w[0]), 0u);
    c.budget -= 3;
L_00100EAC:
    set32(c.r[3], 0u + 102u);
    c.r[6].d[0] = ld16((c.r[17].w[0]));
    st64((c.r[19].w[0]), c.r[3].d[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0])));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 2u);  if (t) { goto L_00100ED4; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 3u);  if (t) { goto L_00100ED4; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_00100ED4:
    st64((c.r[19].w[0] + 8u), c.r[2].d[0]);
    set32(c.r[2], c.r[16].w[0] + 63u);
    c.r[3].d[0] = c.r[22].d[0] & 15ull;
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 6));
    set32(c.r[4], c.r[4].w[0] << 16);
    c.r[2].d[0] = c.r[2].d[0] & 63ull;
    c.r[3].d[0] = c.r[3].d[0] << 15;
    c.r[2].d[0] = c.r[2].d[0] << 9;
    set32(c.r[5], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 16));
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    set32(c.r[4], 0u + 2u);
    c.budget -= 13;
    { const bool t = c.r[5].d[0] != c.r[4].d[0]; st64((c.r[19].w[0] + 16u), c.r[3].d[0]);  if (t) { goto L_00100FB0; } }
    set32(c.r[2], c.r[6].w[0] << 16);
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 16));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; set32(c.r[2], c.r[16].w[0] + 2559u);  if (t) { goto L_00100F84; } }
    set32(c.r[3], c.r[16].w[0] + 2559u);
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { breakpoint(c, 0x00100F24u);  goto L_00100F28; }
L_00100F28:
    mmi::div(c, 0, c.r[3].w[0], c.r[16].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 4u)));
    set32(c.r[5], ld32((c.r[29].w[0])));
    set32(c.r[2], c.r[20].w[0] + c.r[2].w[0]);
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 50u);
    c.r[5].d[0] = c.r[5].d[0] + static_cast<std::uint64_t>(636ll);
    c.r[2].d[0] = c.r[2].d[0] & 4095ull;
    c.r[7].d[0] = c.r[2].d[0] << 12;
    c.r[3].d[0] = c.lo.d[0];
    mmi::mult(c, 0, c.r[3].w[0], c.r[16].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    mmi::mult(c, 1, c.r[21].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.lo.d[1];
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.r[10].d[0] = c.r[3].d[0] << 23;
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.r[3].d[0] = c.r[4].d[0] << 32;
    c.r[5].d[0] = c.r[2].d[0] + c.r[5].d[0];
    c.budget -= 19;
    { const bool t = c.r[6].d[0] == 0ull; c.r[5].d[0] = c.r[5].d[0] & 4095ull;  if (t) { goto L_00101038; } }
    set32(c.r[2], c.r[18].w[0] << 1);
    c.r[3].d[0] = c.r[10].d[0] | c.r[3].d[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] - 1u);  if (t) { goto L_00101040; } }
L_00100F84:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { breakpoint(c, 0x00100F88u);  goto L_00100F8C; }
L_00100F8C:
    mmi::div(c, 0, c.r[2].w[0], c.r[16].w[0]);
    set32(c.r[7], c.r[18].w[0] - 1u);
    set32(c.r[5], ld32((c.r[29].w[0])));
    c.r[7].d[0] = c.r[7].d[0] << 44;
    set32(c.r[3], ld32((c.r[29].w[0] + 4u)));
    c.r[5].d[0] = c.r[5].d[0] + static_cast<std::uint64_t>(636ll);
    set32(c.r[3], c.r[20].w[0] + c.r[3].w[0]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[3].w[0] + 25u);  if (t) { goto L_00101080; } }
L_00100FB0:
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 80u);  if (t) { goto L_001010C4; } }
    set32(c.r[2], c.r[6].w[0] << 16);
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 16));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; set32(c.r[2], c.r[16].w[0] + 2559u);  if (t) { goto L_00101058; } }
    set32(c.r[3], c.r[16].w[0] + 2559u);
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { breakpoint(c, 0x00100FD8u);  goto L_00100FDC; }
L_00100FDC:
    mmi::div(c, 0, c.r[3].w[0], c.r[16].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 4u)));
    set32(c.r[5], ld32((c.r[29].w[0])));
    set32(c.r[2], c.r[20].w[0] + c.r[2].w[0]);
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 72u);
    c.r[5].d[0] = c.r[5].d[0] + static_cast<std::uint64_t>(656ll);
    c.r[2].d[0] = c.r[2].d[0] & 4095ull;
    c.r[7].d[0] = c.r[2].d[0] << 12;
    c.r[3].d[0] = c.lo.d[0];
    mmi::mult(c, 0, c.r[3].w[0], c.r[16].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    mmi::mult(c, 1, c.r[21].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.lo.d[1];
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.r[10].d[0] = c.r[3].d[0] << 23;
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.r[3].d[0] = c.r[4].d[0] << 32;
    c.r[5].d[0] = c.r[2].d[0] + c.r[5].d[0];
    c.budget -= 19;
    { const bool t = c.r[6].d[0] == 0ull; c.r[5].d[0] = c.r[5].d[0] & 4095ull;  if (t) { goto L_00101038; } }
    set32(c.r[2], c.r[18].w[0] << 1);
    c.r[3].d[0] = c.r[10].d[0] | c.r[3].d[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] - 1u);  if (t) { goto L_00101040; } }
L_00101038:
    set32(c.r[2], c.r[18].w[0] - 1u);
    c.budget -= 1;
L_0010103C:
    c.r[3].d[0] = c.r[10].d[0] | c.r[3].d[0];
    c.budget -= 1;
L_00101040:
    c.r[2].d[0] = c.r[2].d[0] << 44;
    c.r[2].d[0] = c.r[5].d[0] | c.r[2].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.r[2].d[0] = c.r[3].d[0] | c.r[7].d[0];
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st64((c.r[19].w[0] + 24u), c.r[2].d[0]);  if (t) { goto L_00101148; } }
L_00101058:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { breakpoint(c, 0x0010105Cu);  goto L_00101060; }
L_00101060:
    mmi::div(c, 0, c.r[2].w[0], c.r[16].w[0]);
    set32(c.r[7], c.r[18].w[0] - 1u);
    set32(c.r[5], ld32((c.r[29].w[0])));
    c.r[7].d[0] = c.r[7].d[0] << 44;
    set32(c.r[3], ld32((c.r[29].w[0] + 4u)));
    c.r[5].d[0] = c.r[5].d[0] + static_cast<std::uint64_t>(656ll);
    set32(c.r[3], c.r[20].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[3].w[0] + 36u);
    c.budget -= 8;
L_00101080:
    c.r[3].d[0] = c.r[3].d[0] & 4095ull;
    c.r[3].d[0] = c.r[3].d[0] << 12;
    c.r[2].d[0] = c.lo.d[0];
    mmi::mult(c, 0, c.r[21].w[0], c.r[2].w[0]);
    c.r[6].d[0] = c.lo.d[0];
    mmi::mult(c, 1, c.r[2].w[0], c.r[16].w[0]);
    c.r[4].d[0] = c.lo.d[1];
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[5].d[0] = c.r[6].d[0] + c.r[5].d[0];
    c.r[2].d[0] = c.r[2].d[0] << 23;
    c.r[5].d[0] = c.r[5].d[0] & 4095ull;
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.r[5].d[0] = c.r[5].d[0] | c.r[7].d[0];
    c.r[4].d[0] = c.r[4].d[0] << 32;
    c.r[2].d[0] = c.r[2].d[0] | c.r[4].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[5].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 17;
    { const bool t = 0ull == 0ull; st64((c.r[19].w[0] + 24u), c.r[2].d[0]);  if (t) { goto L_00101148; } }
    goto L_001010C4;
L_001010C0:
    st64((c.r[19].w[0] + 24u), c.r[2].d[0]);
    c.budget -= 1;
L_001010C4:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != c.r[2].d[0]; c.r[4].sd[0] = static_cast<std::int32_t>(0x00450000u);  if (t) { goto L_00101140; } }
    set32(c.r[2], 0u + 720u);
    set32(c.r[5], ld32((c.r[29].w[0])));
    set32(c.r[2], c.r[2].w[0] - c.r[16].w[0]);
    set32(c.r[6], c.r[21].w[0] << 1);
    set32(c.r[3], c.r[2].w[0] >> 31);
    set32(c.r[4], ld32((c.r[29].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[7].d[0] = c.r[6].d[0] + static_cast<std::uint64_t>(232ll);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    set32(c.r[6], c.r[16].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[4], c.r[20].w[0] + c.r[4].w[0]);
    c.r[5].d[0] = c.r[2].d[0] + c.r[5].d[0];
    c.budget -= 13;
L_00101100:
    set32(c.r[3], c.r[18].w[0] - 1u);
    c.r[5].d[0] = c.r[5].d[0] + c.r[7].d[0];
    set32(c.r[6], c.r[6].w[0] - 1u);
    c.r[3].d[0] = c.r[3].d[0] << 44;
    c.r[6].d[0] = c.r[6].d[0] << 32;
    c.r[5].d[0] = c.r[5].d[0] & 4095ull;
    set32(c.r[4], c.r[4].w[0] + 35u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00800000u);
    c.r[3].d[0] = c.r[3].d[0] | c.r[6].d[0];
    c.r[5].d[0] = c.r[5].d[0] | c.r[2].d[0];
    c.r[4].d[0] = c.r[4].d[0] & 4095ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    c.r[4].d[0] = c.r[4].d[0] << 12;
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 16;
    { const bool t = 0ull == 0ull; st64((c.r[19].w[0] + 24u), c.r[3].d[0]);  if (t) { goto L_00101148; } }
L_00101140:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00101148u); set32(c.r[4], c.r[4].w[0] + 12680u);  if (depth < kMaxDepth) unit_0003(c, 243u, depth + 1u); else { c.pc = 0x0010DCC0u; return; } if (c.pc != 0x00101148u) [[unlikely]] return; }
L_00101148:
    st64((c.r[19].w[0] + 32u), 0ull);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 112u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 96u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_00101178:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.budget -= 2;
L_00101180:
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010118Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 113u, depth + 1u); else { c.pc = 0x00100CD8u; return; } if (c.pc != 0x0010118Cu) [[unlikely]] return; }
L_0010118C:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 6u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[4].d[0] = ld64((c.r[16].w[0]));  if (t) { goto L_001011DC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x12000000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x12000000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x12000000u);
    st64((c.r[2].w[0]), c.r[4].d[0]);
    c.r[3].d[0] = c.r[3].d[0] | 112ull;
    c.r[6].d[0] = c.r[6].d[0] | 128ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x12000000u);
    c.r[5].d[0] = ld64((c.r[16].w[0] + 16u));
    c.r[4].d[0] = c.r[4].d[0] | 192ull;
    c.budget -= 9;
L_001011C0:
    st64((c.r[3].w[0]), c.r[5].d[0]);
    c.r[2].d[0] = ld64((c.r[16].w[0] + 24u));
    st64((c.r[6].w[0]), c.r[2].d[0]);
    c.r[3].d[0] = ld64((c.r[16].w[0] + 32u));
    st64((c.r[4].w[0]), c.r[3].d[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_00101228; } }
L_001011DC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x12000000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x12000000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x12000000u);
    st64((c.r[3].w[0]), c.r[4].d[0]);
    c.r[2].d[0] = c.r[2].d[0] | 32ull;
    c.r[6].d[0] = c.r[6].d[0] | 144ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x12000000u);
    c.r[3].d[0] = ld64((c.r[16].w[0] + 8u));
    c.r[5].d[0] = c.r[5].d[0] | 160ull;
    c.budget -= 9;
L_00101200:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x12000000u);
    st64((c.r[2].w[0]), c.r[3].d[0]);
    c.r[4].d[0] = c.r[4].d[0] | 224ull;
    c.r[2].d[0] = ld64((c.r[16].w[0] + 16u));
    st64((c.r[6].w[0]), c.r[2].d[0]);
    c.r[3].d[0] = ld64((c.r[16].w[0] + 24u));
    st64((c.r[5].w[0]), c.r[3].d[0]);
    c.r[2].d[0] = ld64((c.r[16].w[0] + 32u));
    st64((c.r[4].w[0]), c.r[2].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 10;
L_00101228:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00101238:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[6], c.r[6].w[0] << 16);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[17], c.r[4].w[0] << 16);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    set32(c.r[16], c.r[5].w[0] << 16);
    set32(c.r[16], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[16].w[0]) >> 16));
    set32(c.r[17], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[17].w[0]) >> 16));
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00101268u); set32(c.r[18], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[6].w[0]) >> 16));  if (depth < kMaxDepth) unit_0000(c, 113u, depth + 1u); else { c.pc = 0x00100CD8u; return; } if (c.pc != 0x00101268u) [[unlikely]] return; }
L_00101268:
    set32(c.r[3], c.r[16].w[0] + 63u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], 0u - 1u);
    set32(c.r[16], c.r[16].w[0] + 126u);
    c.r[2].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.r[17].d[0] = c.r[17].d[0] & 2ull;
    if (c.r[2].d[0] != 0) c.r[16].d[0] = c.r[3].d[0];
    c.budget -= 9;
    { const bool t = c.r[17].d[0] == 0ull; set32(c.r[16], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[16].w[0]) >> 6));  if (t) { goto L_001012A4; } }
    set32(c.r[2], c.r[18].w[0] + 63u);
    set32(c.r[3], c.r[18].w[0] + 126u);
    c.r[4].d[0] = c.r[4].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    if (c.r[4].d[0] != 0) c.r[3].d[0] = c.r[2].d[0];
    c.budget -= 6;
    { const bool t = 0ull == 0ull; set32(c.r[6], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 6));  if (t) { goto L_001012B8; } }
L_001012A4:
    set32(c.r[2], c.r[18].w[0] + 31u);
    set32(c.r[3], c.r[18].w[0] + 62u);
    c.r[4].d[0] = c.r[4].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    if (c.r[4].d[0] != 0) c.r[3].d[0] = c.r[2].d[0];
    set32(c.r[6], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 5));
    c.budget -= 5;
L_001012B8:
    c.r[2].d[0] = ld64((c.r[5].w[0]));
    c.r[3].d[0] = 0ull | 65535ull;
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    set32(c.r[4], 0u + 1u);
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != c.r[4].d[0]; mmi::mult(c, 0, c.r[16].w[0], c.r[6].w[0]); c.r[2].d[0] = c.lo.d[0];  if (t) { goto L_001012E0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] << 16);  if (t) { goto L_001012E4; } }
L_001012E0:
    set32(c.r[2], c.r[2].w[0] << 17);
    c.budget -= 1;
L_001012E4:
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 16));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00101300:
    set32(c.r[29], c.r[29].w[0] - 112u);
    set32(c.r[6], c.r[6].w[0] << 16);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    set32(c.r[5], c.r[5].w[0] << 16);
    set32(c.r[18], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[6].w[0]) >> 16));
    st64((c.r[29].w[0] + 64u), c.r[20].d[0]);
    set32(c.r[2], c.r[18].w[0] + 63u);
    set32(c.r[20], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[5].w[0]) >> 16));
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 6));
    c.r[3].d[0] = c.r[20].d[0] & 15ull;
    c.r[2].d[0] = c.r[2].d[0] & 63ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[3].d[0] = c.r[3].d[0] << 24;
    c.r[2].d[0] = c.r[2].d[0] << 16;
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st64((c.r[29].w[0] + 80u), c.r[21].d[0]);
    set32(c.r[7], c.r[7].w[0] << 16);
    st64((c.r[29].w[0] + 48u), c.r[19].d[0]);
    set32(c.r[8], c.r[8].w[0] << 16);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    set32(c.r[9], c.r[9].w[0] << 16);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    set32(c.r[3], 0u + 76u);
    set32(c.r[4], 0u + 78u);
    set32(c.r[17], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[7].w[0]) >> 16));
    set32(c.r[21], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[8].w[0]) >> 16));
    set32(c.r[19], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[9].w[0]) >> 16));
    st64((c.r[16].w[0] + 8u), c.r[3].d[0]);
    st64((c.r[16].w[0]), c.r[2].d[0]);
    c.budget -= 32;
    { const bool t = c.r[21].d[0] != 0ull; st64((c.r[16].w[0] + 24u), c.r[4].d[0]);  if (t) { goto L_001013B4; } }
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00101390u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 140u, depth + 1u); else { c.pc = 0x00101238u; return; } if (c.pc != 0x00101390u) [[unlikely]] return; }
L_00101390:
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[3].d[0] = c.r[19].d[0] & 15ull;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.r[3].d[0] = c.r[3].d[0] << 24;
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.r[4].d[0] = 0ull | 32768ull;
    c.r[4].d[0] = c.r[4].d[0] << 17;
    c.budget -= 9;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] | c.r[4].d[0];  if (t) { goto L_001013D8; } }
L_001013B4:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001013C4u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 140u, depth + 1u); else { c.pc = 0x00101238u; return; } if (c.pc != 0x001013C4u) [[unlikely]] return; }
L_001013C4:
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[3].d[0] = c.r[19].d[0] & 15ull;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.r[3].d[0] = c.r[3].d[0] << 24;
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 5;
L_001013D8:
    st64((c.r[16].w[0] + 16u), c.r[2].d[0]);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[17].w[0]) >> 1));
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[18].w[0]) >> 1));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    set32(c.r[4], 0u + 2048u);
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.r[2].d[0] = c.r[4].d[0] - c.r[2].d[0];
    c.r[4].d[0] = c.r[4].d[0] - c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] << 36;
    set32(c.r[6], c.r[18].w[0] - 1u);
    set32(c.r[5], c.r[17].w[0] - 1u);
    c.r[4].d[0] = c.r[4].d[0] << 4;
    c.r[3].d[0] = ld64((c.r[16].w[0] + 64u));
    c.r[7].d[0] = ld64((c.r[16].w[0] + 80u));
    c.r[5].d[0] = c.r[5].d[0] << 48;
    c.r[4].d[0] = c.r[4].d[0] | c.r[2].d[0];
    c.r[6].d[0] = c.r[6].d[0] << 16;
    set32(c.r[11], 0u + 1u);
    c.r[6].d[0] = c.r[6].d[0] | c.r[5].d[0];
    set32(c.r[2], 0u + 24u);
    c.r[3].d[0] = c.r[3].d[0] | c.r[11].d[0];
    c.r[7].d[0] = c.r[7].d[0] | c.r[11].d[0];
    set32(c.r[5], 0u + 64u);
    c.budget -= 25;
L_0010143C:
    set32(c.r[8], 0u + 26u);
    set32(c.r[9], 0u + 70u);
    set32(c.r[10], 0u + 69u);
    st64((c.r[16].w[0] + 40u), c.r[2].d[0]);
    st64((c.r[16].w[0] + 32u), c.r[4].d[0]);
    c.r[2].d[0] = c.r[20].d[0] & 2ull;
    st64((c.r[16].w[0] + 56u), c.r[5].d[0]);
    st64((c.r[16].w[0] + 48u), c.r[6].d[0]);
    st64((c.r[16].w[0] + 72u), c.r[8].d[0]);
    st64((c.r[16].w[0] + 64u), c.r[3].d[0]);
    st64((c.r[16].w[0] + 88u), c.r[9].d[0]);
    st64((c.r[16].w[0] + 80u), c.r[7].d[0]);
    c.budget -= 14;
    { const bool t = c.r[2].d[0] == 0ull; st64((c.r[16].w[0] + 104u), c.r[10].d[0]);  if (t) { goto L_00101480; } }
    c.r[2].d[0] = ld64((c.r[16].w[0] + 96u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] | c.r[11].d[0];  if (t) { goto L_0010148C; } }
L_00101480:
    c.r[2].d[0] = ld64((c.r[16].w[0] + 96u));
    set32(c.r[3], 0u - 2u);
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.budget -= 3;
L_0010148C:
    st64((c.r[16].w[0] + 96u), c.r[2].d[0]);
    set32(c.r[2], 0u + 71u);
    c.budget -= 4;
    { const bool t = c.r[21].d[0] == 0ull; st64((c.r[16].w[0] + 120u), c.r[2].d[0]);  if (t) { goto L_001014B0; } }
    c.r[2].d[0] = c.r[21].d[0] & 3ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[2].d[0] = c.r[2].d[0] << 17;
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];  if (t) { goto L_001014B4; } }
L_001014B0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00030000u);
    c.budget -= 1;
L_001014B4:
    st64((c.r[16].w[0] + 112u), c.r[2].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    set32(c.r[2], 0u + 8u);
    c.r[21].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_001014E8:
    set32(c.r[7], c.r[7].w[0] << 16);
    set32(c.r[9], c.r[9].w[0] << 16);
    set32(c.r[7], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[7].w[0]) >> 16));
    set32(c.r[9], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[9].w[0]) >> 16));
    set32(c.r[9], c.r[7].w[0] + c.r[9].w[0]);
    set32(c.r[6], c.r[6].w[0] << 16);
    c.budget -= 6;
L_00101500:
    set32(c.r[8], c.r[8].w[0] << 16);
    c.r[12].d[0] = ld8((c.r[29].w[0]));
    set32(c.r[6], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[6].w[0]) >> 16));
    set32(c.r[8], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[8].w[0]) >> 16));
    set32(c.r[9], c.r[9].w[0] << 4);
    set32(c.r[7], c.r[7].w[0] << 4);
    c.r[3].d[0] = ld32((c.r[29].w[0] + 16u));
    set32(c.r[8], c.r[6].w[0] + c.r[8].w[0]);
    c.r[11].d[0] = c.r[11].d[0] & 255ull;
    c.r[13].d[0] = ld8((c.r[29].w[0] + 8u));
    c.r[11].d[0] = c.r[11].d[0] << 8;
    c.r[2].d[0] = 0ull | 65024ull;
    c.r[2].d[0] = c.r[2].d[0] << 46;
    set32(c.r[8], c.r[8].w[0] << 4);
    set32(c.r[6], c.r[6].w[0] << 4);
    c.r[10].d[0] = c.r[10].d[0] & 255ull;
    c.r[12].d[0] = c.r[12].d[0] << 16;
    c.r[7].d[0] = c.r[7].d[0] << 16;
    c.r[9].d[0] = c.r[9].d[0] << 16;
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.r[10].d[0] = c.r[10].d[0] | c.r[2].d[0];
    c.r[12].d[0] = c.r[12].d[0] | c.r[11].d[0];
    c.r[7].d[0] = c.r[6].d[0] | c.r[7].d[0];
    c.r[9].d[0] = c.r[8].d[0] | c.r[9].d[0];
    set32(c.r[5], c.r[5].w[0] << 16);
    c.r[6].d[0] = c.r[4].d[0] + 0ull;
    c.r[9].d[0] = c.r[9].d[0] | c.r[3].d[0];
    c.r[7].d[0] = c.r[7].d[0] | c.r[3].d[0];
    c.r[10].d[0] = c.r[10].d[0] | c.r[12].d[0];
    c.r[13].d[0] = c.r[13].d[0] << 24;
    set32(c.r[8], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[5].w[0]) >> 16));
    set32(c.r[4], 0u + 71u);
    set32(c.r[5], 0u + 5u);
    c.r[10].d[0] = c.r[10].d[0] | c.r[13].d[0];
    c.r[11].sd[0] = static_cast<std::int32_t>(0x00030000u);
    set32(c.r[2], 0u + 6u);
    set32(c.r[3], 0u + 1u);
    st64((c.r[6].w[0] + 16u), c.r[2].d[0]);
    st64((c.r[6].w[0] + 40u), c.r[3].d[0]);
    st64((c.r[6].w[0] + 32u), c.r[10].d[0]);
    st64((c.r[6].w[0] + 48u), c.r[7].d[0]);
    st64((c.r[6].w[0] + 72u), c.r[5].d[0]);
    st64((c.r[6].w[0] + 64u), c.r[9].d[0]);
    st64((c.r[6].w[0] + 88u), c.r[4].d[0]);
    st64((c.r[6].w[0] + 8u), c.r[4].d[0]);
    st64((c.r[6].w[0]), c.r[11].d[0]);
    st64((c.r[6].w[0] + 24u), 0ull);
    c.budget -= 49;
    { const bool t = c.r[8].d[0] == 0ull; st64((c.r[6].w[0] + 56u), c.r[5].d[0]);  if (t) { goto L_001015DC; } }
    c.r[2].d[0] = c.r[8].d[0] & 3ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[2].d[0] = c.r[2].d[0] << 17;
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st64((c.r[6].w[0] + 80u), c.r[2].d[0]);  if (t) { goto L_001015E0; } }
L_001015DC:
    st64((c.r[6].w[0] + 80u), c.r[11].d[0]);
    c.budget -= 1;
L_001015E0:
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 6u);  c.pc = t; return; }
L_001015F0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[3].d[0] = c.r[3].d[0] | 40960ull;
    c.r[6].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 256ull;
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_00101644; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x01000000u);
    c.r[3].d[0] = c.r[3].d[0] | 40960ull;
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 5;
L_00101628:
    c.r[2].d[0] = c.r[5].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[4].w[0] + 1u);  if (t) { goto L_00101690; } }
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 256ull;
    c.budget -= 2;
L_0010163C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = c.r[4].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00101628u | kUnwind; return; } goto L_00101628; } }
L_00101644:
    c.r[2].d[0] = ld64((c.r[6].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[3].d[0] = c.r[3].d[0] | 40992ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x70000000u);
    c.r[2].d[0] = c.r[2].d[0] & 32767ull;
    c.r[5].d[0] = c.r[6].d[0] & c.r[4].d[0];
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.budget -= 12;
    { const bool t = c.r[5].d[0] != c.r[4].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0x0FFF0000u);  if (t) { goto L_001016A4; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[2].d[0] = c.r[6].d[0] & c.r[2].d[0];
    c.r[3].d[0] = c.r[3].d[0] | 40976ull;
    c.budget -= 7;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] | c.r[4].d[0];  if (t) { goto L_001016B4; } }
L_00101690:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00450000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010169Cu); set32(c.r[4], c.r[4].w[0] + 12736u);  if (depth < kMaxDepth) unit_0003(c, 243u, depth + 1u); else { c.pc = 0x0010DCC0u; return; } if (c.pc != 0x0010169Cu) [[unlikely]] return; }
L_0010169C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_001016CC; } }
L_001016A4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[3].d[0] = c.r[3].d[0] | 40976ull;
    c.r[2].d[0] = c.r[6].d[0] & c.r[2].d[0];
    c.budget -= 4;
L_001016B4:
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    set32(c.r[4], 0u + 257u);
    c.r[3].d[0] = c.r[3].d[0] | 40960ull;
    c.r[2].d[0] = 0ull + 0ull;
    st32((c.r[3].w[0]), c.r[4].w[0]);
    c.budget -= 6;
L_001016CC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001016D8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001016ECu);  if (depth < kMaxDepth) unit_0000(c, 113u, depth + 1u); else { c.pc = 0x00100CD8u; return; } if (c.pc != 0x001016ECu) [[unlikely]] return; }
L_001016EC:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00101738; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00101704u);  if (depth < kMaxDepth) unit_0003(c, 22u, depth + 1u); else { c.pc = 0x0010C0B0u; return; } if (c.pc != 0x00101704u) [[unlikely]] return; }
L_00101704:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_00101760; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x12000000u);
    c.r[3].d[0] = c.r[3].d[0] | 4096ull;
    c.r[2].d[0] = ld64((c.r[3].w[0]));
    c.r[2].d[0] = c.r[2].d[0] >> 13;
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_00101764; } }
L_00101738:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00101740u);  if (depth < kMaxDepth) unit_0003(c, 27u, depth + 1u); else { c.pc = 0x0010C140u; return; } if (c.pc != 0x00101740u) [[unlikely]] return; }
L_00101740:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 13);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));
    c.r[4].d[0] = c.r[2].d[0] & 1ull;
    set32(c.r[2], 0u + 1u);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_00101760; } }
    c.r[2].d[0] = c.r[4].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.budget -= 2;
L_00101760:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_00101764:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00101770:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_00101A04; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[2].d[0] = c.r[2].d[0] | 36864ull;
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.r[3].d[0] = c.r[3].d[0] & 256ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);  if (t) { goto L_001017C4; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x01000000u);
    c.r[3].d[0] = c.r[3].d[0] | 36864ull;
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 4;
L_001017A8:
    c.r[2].d[0] = c.r[4].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] + 1u);  if (t) { goto L_001018CC; } }
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 256ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = c.r[5].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001017A8u | kUnwind; return; } goto L_001017A8; } }
L_001017C4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[2].d[0] = c.r[2].d[0] | 40960ull;
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.r[3].d[0] = c.r[3].d[0] & 256ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);  if (t) { goto L_00101804; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x01000000u);
    c.r[3].d[0] = c.r[3].d[0] | 40960ull;
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 3;
L_001017E8:
    c.r[2].d[0] = c.r[4].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] + 1u);  if (t) { goto L_001018D8; } }
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 256ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = c.r[5].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001017E8u | kUnwind; return; } goto L_001017E8; } }
L_00101804:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x1F000000u);
    c.r[2].d[0] = c.r[2].d[0] | 15360ull;
    c.r[4].d[0] = c.r[4].d[0] | 3ull;
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.r[3].d[0] = c.r[3].d[0] & c.r[4].d[0];
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x1F000000u);  if (t) { goto L_00101854; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x01000000u);
    c.r[4].d[0] = c.r[4].d[0] | 15360ull;
    c.r[3].d[0] = c.r[3].d[0] | 3ull;
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 5;
L_00101838:
    c.r[2].d[0] = c.r[6].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 1;
L_0010183C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] + 1u);  if (t) { goto L_001018E4; } }
    goto L_00101844;
L_00101840:
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 1;
L_00101844:
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = c.r[5].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00101838u | kUnwind; return; } goto L_00101838; } }
L_00101854:
    set32(c.r[6], cfc2(c, 29u));
    c.r[2].d[0] = c.r[6].d[0] & 256ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x01000000u);  if (t) { goto L_00101884; } }
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 1;
L_00101868:
    c.r[2].d[0] = c.r[3].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] + 1u);  if (t) { goto L_001018F0; } }
    set32(c.r[6], cfc2(c, 29u));
    c.r[2].d[0] = c.r[6].d[0] & 256ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = c.r[5].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00101868u | kUnwind; return; } goto L_00101868; } }
    goto L_00101884;
L_00101880:
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 1;
L_00101884:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[2].d[0] = c.r[2].d[0] | 12320ull;
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.r[3].d[0] = c.r[3].d[0] & 3072ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);  if (t) { goto L_001018C4; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x01000000u);
    c.r[3].d[0] = c.r[3].d[0] | 12320ull;
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 3;
L_001018A8:
    c.r[2].d[0] = c.r[4].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] + 1u);  if (t) { goto L_001018FC; } }
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 3072ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = c.r[5].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001018A8u | kUnwind; return; } goto L_001018A8; } }
    goto L_001018C4;
L_001018C0:
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 1;
L_001018C4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00101A78; } }
L_001018CC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00450000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[4].w[0] + 12784u);  if (t) { goto L_00101904; } }
L_001018D8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00450000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[4].w[0] + 13008u);  if (t) { goto L_00101904; } }
L_001018E4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00450000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[4].w[0] + 13056u);  if (t) { goto L_00101904; } }
L_001018F0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00450000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[4].w[0] + 13104u);  if (t) { goto L_00101904; } }
L_001018FC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00450000u);
    c.budget -= 1;
L_00101900:
    set32(c.r[4], c.r[4].w[0] + 13144u);
    c.budget -= 1;
L_00101904:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010190Cu);  if (depth < kMaxDepth) unit_0003(c, 243u, depth + 1u); else { c.pc = 0x0010DCC0u; return; } if (c.pc != 0x0010190Cu) [[unlikely]] return; }
L_0010190C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00450000u);
    c.r[2].d[0] = c.r[2].d[0] | 36864ull;
    set32(c.r[4], c.r[4].w[0] + 12832u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00101924u); set32(c.r[5], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0003(c, 243u, depth + 1u); else { c.pc = 0x0010DCC0u; return; } if (c.pc != 0x00101924u) [[unlikely]] return; }
L_00101924:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00450000u);
    c.r[2].d[0] = c.r[2].d[0] | 36912ull;
    set32(c.r[4], c.r[4].w[0] + 12848u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010193Cu); set32(c.r[5], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0003(c, 243u, depth + 1u); else { c.pc = 0x0010DCC0u; return; } if (c.pc != 0x0010193Cu) [[unlikely]] return; }
L_0010193C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.budget -= 1;
L_00101940:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00450000u);
    c.r[2].d[0] = c.r[2].d[0] | 36880ull;
    set32(c.r[4], c.r[4].w[0] + 12864u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00101954u); set32(c.r[5], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0003(c, 243u, depth + 1u); else { c.pc = 0x0010DCC0u; return; } if (c.pc != 0x00101954u) [[unlikely]] return; }
L_00101954:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00450000u);
    c.r[2].d[0] = c.r[2].d[0] | 36896ull;
    set32(c.r[4], c.r[4].w[0] + 12880u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010196Cu); set32(c.r[5], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0003(c, 243u, depth + 1u); else { c.pc = 0x0010DCC0u; return; } if (c.pc != 0x0010196Cu) [[unlikely]] return; }
L_0010196C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00450000u);
    c.r[2].d[0] = c.r[2].d[0] | 40960ull;
    set32(c.r[4], c.r[4].w[0] + 12896u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00101984u); set32(c.r[5], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0003(c, 243u, depth + 1u); else { c.pc = 0x0010DCC0u; return; } if (c.pc != 0x00101984u) [[unlikely]] return; }
    goto L_00101984;
L_00101980:
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 1;
L_00101984:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00450000u);
    c.r[2].d[0] = c.r[2].d[0] | 41008ull;
    set32(c.r[4], c.r[4].w[0] + 12912u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010199Cu); set32(c.r[5], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0003(c, 243u, depth + 1u); else { c.pc = 0x0010DCC0u; return; } if (c.pc != 0x0010199Cu) [[unlikely]] return; }
L_0010199C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00450000u);
    c.r[2].d[0] = c.r[2].d[0] | 40976ull;
    set32(c.r[4], c.r[4].w[0] + 12928u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001019B4u); set32(c.r[5], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0003(c, 243u, depth + 1u); else { c.pc = 0x0010DCC0u; return; } if (c.pc != 0x001019B4u) [[unlikely]] return; }
L_001019B4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00450000u);
    c.r[2].d[0] = c.r[2].d[0] | 40992ull;
    c.budget -= 3;
L_001019C0:
    set32(c.r[4], c.r[4].w[0] + 12944u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001019CCu); set32(c.r[5], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0003(c, 243u, depth + 1u); else { c.pc = 0x0010DCC0u; return; } if (c.pc != 0x001019CCu) [[unlikely]] return; }
L_001019CC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00450000u);
    c.r[2].d[0] = c.r[2].d[0] | 15360ull;
    set32(c.r[4], c.r[4].w[0] + 12960u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001019E4u); set32(c.r[5], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0003(c, 243u, depth + 1u); else { c.pc = 0x0010DCC0u; return; } if (c.pc != 0x001019E4u) [[unlikely]] return; }
L_001019E4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00450000u);
    c.r[2].d[0] = c.r[2].d[0] | 12320ull;
    set32(c.r[4], c.r[4].w[0] + 12984u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001019FCu); set32(c.r[5], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0003(c, 243u, depth + 1u); else { c.pc = 0x0010DCC0u; return; } if (c.pc != 0x001019FCu) [[unlikely]] return; }
L_001019FC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_00101A78; } }
    goto L_00101A04;
L_00101A00:
    set32(c.r[2], 0u - 1u);
    c.budget -= 1;
L_00101A04:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[3].d[0] = c.r[3].d[0] | 36864ull;
    c.r[5].d[0] = c.r[5].d[0] | 40960ull;
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x10000000u);
    set32(c.r[6], ld32((c.r[5].w[0])));
    c.r[4].d[0] = c.r[4].d[0] | 15360ull;
    c.r[2].d[0] = c.r[2].d[0] & 256ull;
    set32(c.r[5], ld32((c.r[4].w[0])));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[6].d[0] = c.r[6].d[0] & 256ull;
    c.r[4].d[0] = c.r[2].d[0] | 2ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x1F000000u);
    if (c.r[6].d[0] != 0) c.r[2].d[0] = c.r[4].d[0];
    c.r[3].d[0] = c.r[3].d[0] | 3ull;
    c.r[5].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[4].d[0] = c.r[2].d[0] | 4ull;
    if (c.r[5].d[0] != 0) c.r[2].d[0] = c.r[4].d[0];
    set32(c.r[6], cfc2(c, 29u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[6].d[0] = c.r[6].d[0] & 256ull;
    c.r[3].d[0] = c.r[3].d[0] | 12320ull;
    c.r[5].d[0] = c.r[2].d[0] | 8ull;
    set32(c.r[4], ld32((c.r[3].w[0])));
    if (c.r[6].d[0] != 0) c.r[2].d[0] = c.r[5].d[0];
    c.r[3].d[0] = c.r[2].d[0] | 16ull;
    c.r[4].d[0] = c.r[4].d[0] & 3072ull;
    if (c.r[4].d[0] != 0) c.r[2].d[0] = c.r[3].d[0];
    c.budget -= 29;
L_00101A78:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00101A88:
    set32(c.r[7], c.r[7].w[0] << 16);
    set32(c.r[6], c.r[6].w[0] << 16);
    set32(c.r[8], c.r[8].w[0] << 16);
    set32(c.r[13], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[7].w[0]) >> 16));
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[5], c.r[5].w[0] << 16);
    set32(c.r[9], c.r[9].w[0] << 16);
    set32(c.r[10], c.r[10].w[0] << 16);
    set32(c.r[11], c.r[11].w[0] << 16);
    set32(c.r[12], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[6].w[0]) >> 16));
    set32(c.r[15], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[8].w[0]) >> 16));
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[7], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[5].w[0]) >> 16));
    set32(c.r[24], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[9].w[0]) >> 16));
    set32(c.r[10], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[10].w[0]) >> 16));
    set32(c.r[8], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[11].w[0]) >> 16));
    c.r[14].d[0] = c.r[4].d[0] + 0ull;
    c.r[2].d[0] = c.r[13].d[0] < static_cast<std::uint64_t>(59ll) ? 1ull : 0ull;
    c.budget -= 20;
    { const bool t = c.r[2].d[0] == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_00101B34; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00450000u);
    set32(c.r[3], c.r[13].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 13232u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[4].w[0];  c.pc = t; if (t - 0x00100000u < 16384u) { entry = entries_0000[(t - 0x00100000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00101AF4:
    mmi::mult(c, 0, c.r[10].w[0], c.r[8].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[6], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 2));  if (t) { goto L_00101B34; } }
L_00101B00:
    mmi::mult(c, 0, c.r[10].w[0], c.r[8].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[6], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 4));  if (t) { goto L_00101B34; } }
L_00101B14:
    mmi::mult(c, 0, c.r[10].w[0], c.r[8].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[6], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 3));  if (t) { goto L_00101B34; } }
L_00101B20:
    mmi::mult(c, 0, c.r[10].w[0], c.r[8].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[6], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 4));  if (t) { goto L_00101B34; } }
L_00101B2C:
    mmi::mult(c, 0, c.r[10].w[0], c.r[8].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[6], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 5));
    c.budget -= 2;
L_00101B34:
    set32(c.r[2], 0u + 32767u);
    c.r[2].d[0] = c.r[2].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x00450000u);  if (t) { goto L_00101B54; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00101B4Cu); set32(c.r[4], c.r[4].w[0] + 13184u);  if (depth < kMaxDepth) unit_0003(c, 243u, depth + 1u); else { c.pc = 0x0010DCC0u; return; } if (c.pc != 0x00101B4Cu) [[unlikely]] return; }
L_00101B4C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00101C60; } }
L_00101B54:
    mmi::por(c.r[2], c.r[0], c.r[0]);
    c.r[3].d[0] = c.r[6].d[0] & 32767ull;
    st128((c.r[14].w[0] + 80u) & ~15u, c.r[2]);
    c.r[6].d[0] = c.r[7].d[0] << 48;
    st128((c.r[14].w[0]) & ~15u, c.r[2]);
    c.r[7].sd[0] = static_cast<std::int32_t>(0xF3FF0000u);
    c.r[7].d[0] = c.r[7].d[0] | 65535ull;
    c.r[7].d[0] = c.r[7].d[0] << 16;
    c.r[7].d[0] = c.r[7].d[0] | 65535ull;
    c.r[7].d[0] = c.r[7].d[0] << 16;
    c.r[7].d[0] = c.r[7].d[0] | 65535ull;
    c.r[4].d[0] = ld64((c.r[14].w[0] + 80u));
    set32(c.r[2], 0u - 32768u);
    c.r[5].d[0] = ld64((c.r[14].w[0]));
    c.r[12].d[0] = c.r[12].d[0] << 48;
    c.r[4].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[11].d[0] = ld64((c.r[14].w[0] + 8u));
    c.r[5].d[0] = c.r[5].d[0] & c.r[2].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    set32(c.r[2], 0u + 4u);
    c.r[3].d[0] = 0ull | 32768ull;
    c.r[5].d[0] = c.r[5].d[0] | c.r[2].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    set32(c.r[2], 0u - 1u);
    c.r[2].d[0] = c.r[2].d[0] >> 4;
    set32(c.r[3], 0u - 16u);
    c.r[5].d[0] = c.r[5].d[0] & c.r[2].d[0];
    c.r[11].d[0] = c.r[11].d[0] & c.r[3].d[0];
    c.r[4].d[0] = c.r[4].d[0] & c.r[7].d[0];
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 16);
    c.r[10].d[0] = c.r[10].d[0] << 48;
    c.r[8].d[0] = c.r[8].d[0] << 48;
    c.r[6].d[0] = c.r[6].d[0] | c.r[12].d[0];
    c.r[8].d[0] = static_cast<std::uint64_t>(c.r[8].sd[0] >> 16);
    c.r[2].d[0] = 0ull | 32768ull;
    c.r[2].d[0] = c.r[2].d[0] << 45;
    set32(c.r[3], 0u + 14u);
    c.r[7].d[0] = 0ull | 32768ull;
    c.r[7].d[0] = c.r[7].d[0] << 44;
    c.r[9].d[0] = c.r[15].d[0] << 48;
    c.r[10].d[0] = static_cast<std::uint64_t>(c.r[10].sd[0] >> 48);
    c.r[5].d[0] = c.r[5].d[0] | c.r[2].d[0];
    c.r[10].d[0] = c.r[10].d[0] | c.r[8].d[0];
    c.r[11].d[0] = c.r[11].d[0] | c.r[3].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[7].d[0];
    c.r[13].d[0] = c.r[13].d[0] << 56;
    c.r[9].d[0] = static_cast<std::uint64_t>(c.r[9].sd[0] >> 16);
    c.r[12].d[0] = c.r[24].d[0] << 48;
    c.r[6].d[0] = c.r[6].d[0] | c.r[13].d[0];
    c.r[9].d[0] = c.r[9].d[0] | c.r[12].d[0];
    set32(c.r[2], 0u + 80u);
    set32(c.r[3], 0u + 81u);
    set32(c.r[7], 0u + 82u);
    set32(c.r[8], 0u + 83u);
    st64((c.r[14].w[0] + 80u), c.r[4].d[0]);
    st64((c.r[14].w[0]), c.r[5].d[0]);
    st64((c.r[14].w[0] + 8u), c.r[11].d[0]);
    st64((c.r[14].w[0] + 16u), c.r[6].d[0]);
    c.budget -= 58;
L_00101C3C:
    st64((c.r[14].w[0] + 24u), c.r[2].d[0]);
    st64((c.r[14].w[0] + 32u), c.r[9].d[0]);
    st64((c.r[14].w[0] + 40u), c.r[3].d[0]);
    st64((c.r[14].w[0] + 48u), c.r[10].d[0]);
    st64((c.r[14].w[0] + 56u), c.r[7].d[0]);
    st64((c.r[14].w[0] + 72u), c.r[8].d[0]);
    st64((c.r[14].w[0] + 64u), 0ull);
    set32(c.r[2], 0u + 6u);
    c.budget -= 9;
L_00101C60:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00101C70:
    set32(c.r[29], c.r[29].w[0] - 16u);
    mmi::por(c.r[2], c.r[0], c.r[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[5], c.r[5].w[0] << 16);
    st128((c.r[4].w[0] + 16u) & ~15u, c.r[2]);
    set32(c.r[5], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[5].w[0]) >> 16));
    set32(c.r[2], 0u - 32768u);
    set32(c.r[7], c.r[7].w[0] << 16);
    c.r[12].d[0] = ld64((c.r[4].w[0] + 16u));
    set32(c.r[8], c.r[8].w[0] << 16);
    set32(c.r[10], c.r[10].w[0] << 16);
    set32(c.r[11], c.r[11].w[0] << 16);
    c.r[12].d[0] = c.r[12].d[0] & c.r[2].d[0];
    c.r[13].d[0] = ld64((c.r[4].w[0] + 24u));
    set32(c.r[2], 0u + 5u);
    set32(c.r[7], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[7].w[0]) >> 16));
    c.r[12].d[0] = c.r[12].d[0] | c.r[2].d[0];
    set32(c.r[8], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[8].w[0]) >> 16));
    c.r[2].d[0] = 0ull | 32768ull;
    set32(c.r[10], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[10].w[0]) >> 16));
    c.r[12].d[0] = c.r[12].d[0] | c.r[2].d[0];
    set32(c.r[11], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[11].w[0]) >> 16));
    set32(c.r[2], 0u - 1u);
    c.r[2].d[0] = c.r[2].d[0] >> 4;
    c.r[5].d[0] = c.r[5].d[0] << 48;
    set32(c.r[6], c.r[6].w[0] << 16);
    set32(c.r[3], 0u - 16u);
    c.r[12].d[0] = c.r[12].d[0] & c.r[2].d[0];
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 48);
    c.r[7].d[0] = c.r[7].d[0] << 48;
    c.r[8].d[0] = c.r[8].d[0] << 48;
    c.r[10].d[0] = c.r[10].d[0] << 48;
    c.r[11].d[0] = c.r[11].d[0] << 48;
    c.r[13].d[0] = c.r[13].d[0] & c.r[3].d[0];
    c.r[5].d[0] = c.r[6].d[0] | c.r[5].d[0];
    set32(c.r[9], c.r[9].w[0] << 16);
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 24);
    c.r[11].d[0] = static_cast<std::uint64_t>(c.r[11].sd[0] >> 16);
    c.r[2].d[0] = 0ull | 32768ull;
    c.r[2].d[0] = c.r[2].d[0] << 45;
    set32(c.r[14], 0u + 14u);
    c.r[8].d[0] = static_cast<std::uint64_t>(c.r[8].sd[0] >> 48);
    c.r[10].d[0] = static_cast<std::uint64_t>(c.r[10].sd[0] >> 48);
    c.r[5].d[0] = c.r[5].d[0] | c.r[7].d[0];
    c.r[8].d[0] = c.r[9].d[0] | c.r[8].d[0];
    c.r[10].d[0] = c.r[10].d[0] | c.r[11].d[0];
    c.r[12].d[0] = c.r[12].d[0] | c.r[2].d[0];
    c.r[13].d[0] = c.r[13].d[0] | c.r[14].d[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x06000000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x50000000u);
    c.r[3].d[0] = c.r[3].d[0] | 32768ull;
    c.r[7].sd[0] = static_cast<std::int32_t>(0x13000000u);
    c.r[6].d[0] = c.r[6].d[0] | 6ull;
    set32(c.r[9], 0u + 80u);
    set32(c.r[11], 0u + 81u);
    set32(c.r[14], 0u + 82u);
    set32(c.r[15], 0u + 97u);
    set32(c.r[16], 0u + 1u);
    set32(c.r[2], 0u + 83u);
    st32((c.r[4].w[0] + 4u), c.r[3].w[0]);
    st64((c.r[4].w[0] + 104u), c.r[2].d[0]);
    st32((c.r[4].w[0] + 8u), c.r[7].w[0]);
    st32((c.r[4].w[0] + 12u), c.r[6].w[0]);
    st64((c.r[4].w[0] + 16u), c.r[12].d[0]);
    st64((c.r[4].w[0] + 24u), c.r[13].d[0]);
    st64((c.r[4].w[0] + 32u), c.r[5].d[0]);
    st64((c.r[4].w[0] + 40u), c.r[9].d[0]);
    st64((c.r[4].w[0] + 48u), c.r[8].d[0]);
    st64((c.r[4].w[0] + 56u), c.r[11].d[0]);
    st64((c.r[4].w[0] + 64u), c.r[10].d[0]);
    st64((c.r[4].w[0] + 72u), c.r[14].d[0]);
    st64((c.r[4].w[0] + 88u), c.r[15].d[0]);
    st64((c.r[4].w[0] + 96u), c.r[16].d[0]);
    st32((c.r[4].w[0]), 0u);
    st64((c.r[4].w[0] + 80u), 0ull);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[2], 0u + 7u);
    c.budget -= 80;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00101DB0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[3].d[0] = c.r[3].d[0] | 40960ull;
    c.r[7].d[0] = c.r[4].d[0] + 0ull;
    c.r[8].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 256ull;
    c.budget -= 10;
    { const bool t = c.r[2].d[0] == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_00101E04; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x01000000u);
    c.r[3].d[0] = c.r[3].d[0] | 40960ull;
    c.r[2].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 4;
L_00101DE8:
    c.r[2].d[0] = c.r[4].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[6], c.r[6].w[0] + 1u);  if (t) { goto L_00101EE4; } }
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 256ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = c.r[6].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00101DE8u | kUnwind; return; } goto L_00101DE8; } }
L_00101E04:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    set32(c.r[5], 0u + 6u);
    c.r[2].d[0] = c.r[2].d[0] | 40992ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x70000000u);
    st32((c.r[2].w[0]), c.r[5].w[0]);
    c.r[3].d[0] = c.r[7].d[0] & c.r[4].d[0];
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != c.r[4].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0x0FFF0000u);  if (t) { goto L_00101E40; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[2].d[0] = c.r[7].d[0] & c.r[2].d[0];
    c.r[3].d[0] = c.r[3].d[0] | 40976ull;
    c.budget -= 7;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] | c.r[4].d[0];  if (t) { goto L_00101E50; } }
    goto L_00101E40;
L_00101E3C:
    c.r[2].d[0] = c.r[2].d[0] | c.r[4].d[0];
    c.budget -= 1;
L_00101E40:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[3].d[0] = c.r[3].d[0] | 40976ull;
    c.r[2].d[0] = c.r[7].d[0] & c.r[2].d[0];
    c.budget -= 4;
L_00101E50:
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    set32(c.r[4], 0u + 257u);
    c.r[2].d[0] = c.r[2].d[0] | 40960ull;
    st32((c.r[2].w[0]), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.r[3].d[0] = c.r[3].d[0] & 256ull;
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);  if (t) { goto L_00101E9C; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x01000000u);
    c.r[3].d[0] = c.r[3].d[0] | 40960ull;
    c.r[2].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 3;
L_00101E80:
    c.r[2].d[0] = c.r[4].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[6], c.r[6].w[0] + 1u);  if (t) { goto L_00101EE4; } }
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 256ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = c.r[6].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00101E80u | kUnwind; return; } goto L_00101E80; } }
L_00101E9C:
    c.r[2].d[0] = ld64((c.r[7].w[0] + 80u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[3].d[0] = c.r[3].d[0] | 40992ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x70000000u);
    c.r[2].d[0] = c.r[2].d[0] & 32767ull;
    c.r[4].d[0] = c.r[8].d[0] & c.r[5].d[0];
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.budget -= 11;
    { const bool t = c.r[4].d[0] != c.r[5].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0x0FFF0000u);  if (t) { goto L_00101EF8; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[2].d[0] = c.r[8].d[0] & c.r[2].d[0];
    c.r[3].d[0] = c.r[3].d[0] | 40976ull;
    c.budget -= 7;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] | c.r[4].d[0];  if (t) { goto L_00101F08; } }
L_00101EE4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00450000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00101EF0u); set32(c.r[4], c.r[4].w[0] + 13472u);  if (depth < kMaxDepth) unit_0003(c, 243u, depth + 1u); else { c.pc = 0x0010DCC0u; return; } if (c.pc != 0x00101EF0u) [[unlikely]] return; }
L_00101EF0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_00101F20; } }
L_00101EF8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[3].d[0] = c.r[3].d[0] | 40976ull;
    c.r[2].d[0] = c.r[8].d[0] & c.r[2].d[0];
    c.budget -= 4;
L_00101F08:
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    set32(c.r[4], 0u + 257u);
    c.r[3].d[0] = c.r[3].d[0] | 40960ull;
    c.r[2].d[0] = 0ull + 0ull;
    st32((c.r[3].w[0]), c.r[4].w[0]);
    c.budget -= 6;
L_00101F20:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00101F30:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 112u), c.r[22].d[0]);
    st64((c.r[29].w[0] + 96u), c.r[21].d[0]);
    c.r[22].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 80u), c.r[20].d[0]);
    c.r[21].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 64u), c.r[19].d[0]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[18].d[0]);
    c.r[19].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[17].d[0]);
    c.r[18].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    c.r[17].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    c.r[16].d[0] = 0ull + 0ull;
    c.r[9].d[0] = ld64((c.r[20].w[0] + 64u));
    c.r[2].d[0] = ld64((c.r[20].w[0] + 32u));
    c.r[4].d[0] = c.r[9].d[0] & 4095ull;
    c.r[3].d[0] = c.r[9].d[0] >> 32;
    c.r[2].d[0] = c.r[2].d[0] >> 24;
    c.r[8].d[0] = c.r[4].d[0] << 32;
    c.r[8].d[0] = static_cast<std::uint64_t>(c.r[8].sd[0] >> 32);
    c.r[2].d[0] = c.r[2].d[0] & 63ull;
    c.r[3].d[0] = c.r[3].d[0] & 4095ull;
    c.r[4].d[0] = c.r[2].d[0] << 32;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    c.r[7].d[0] = c.r[3].d[0] << 32;
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 32);
    c.r[2].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(59ll) ? 1ull : 0ull;
    c.budget -= 32;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_0010210C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00450000u);
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 13760u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[4].w[0];  c.pc = t; if (t - 0x00100000u < 16384u) { entry = entries_0000[(t - 0x00100000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00101FCC:
    mmi::mult(c, 0, c.r[8].w[0], c.r[7].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65528ull;
    set32(c.r[6], c.r[4].w[0] << 2);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[6].w[0]) >> 4));
    c.r[19].d[0] = c.r[6].d[0] & 15ull;
    c.r[18].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 9;
    { const bool t = c.r[19].d[0] == 0ull; c.r[17].d[0] = c.r[3].d[0] & 7ull;  if (t) { goto L_001020E4; } }
    set32(c.r[2], c.r[7].w[0] + 3u);
    c.r[5].d[0] = c.r[2].d[0] & 8188ull;
    mmi::mult(c, 0, c.r[8].w[0], c.r[5].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 2));  if (t) { goto L_00102100; } }
L_00102004:
    mmi::mult(c, 0, c.r[8].w[0], c.r[7].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[3].d[0] = c.r[3].d[0] | 65528ull;
    set32(c.r[2], c.r[5].w[0] << 1);
    set32(c.r[6], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[6].w[0]) >> 4));
    c.r[19].d[0] = c.r[6].d[0] & 15ull;
    c.r[18].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 10;
    { const bool t = c.r[19].d[0] == 0ull; c.r[17].d[0] = c.r[4].d[0] & 7ull;  if (t) { goto L_001020E4; } }
    set32(c.r[2], c.r[7].w[0] + 15u);
    c.r[5].d[0] = c.r[2].d[0] & 8176ull;
    mmi::mult(c, 0, c.r[8].w[0], c.r[5].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] << 1);
    c.budget -= 4;
L_0010203C:
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 1;
L_00102040:
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 4));
    set32(c.r[3], c.r[2].w[0] - c.r[18].w[0]);
    set32(c.r[3], c.r[3].w[0] - c.r[17].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[22], c.r[3].w[0] - 1u);  if (t) { goto L_0010210C; } }
L_00102054:
    mmi::mult(c, 0, c.r[8].w[0], c.r[7].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[5].d[0] = c.r[5].d[0] | 65528ull;
    set32(c.r[6], c.r[3].w[0] << 1);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[6].w[0]) >> 4));
    c.r[19].d[0] = c.r[6].d[0] & 15ull;
    c.r[18].d[0] = c.r[2].d[0] & c.r[5].d[0];
    c.budget -= 9;
    { const bool t = c.r[19].d[0] == 0ull; c.r[17].d[0] = c.r[2].d[0] & 7ull;  if (t) { goto L_001020E4; } }
    set32(c.r[2], c.r[7].w[0] + 7u);
    c.r[5].d[0] = c.r[2].d[0] & c.r[5].d[0];
    c.budget -= 2;
L_00102080:
    mmi::mult(c, 0, c.r[8].w[0], c.r[5].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 3));  if (t) { goto L_00102100; } }
L_0010208C:
    mmi::mult(c, 0, c.r[8].w[0], c.r[7].w[0]);
    c.r[6].d[0] = c.lo.d[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[3].d[0] = c.r[3].d[0] | 65528ull;
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[6].w[0]) >> 4));
    c.r[19].d[0] = c.r[6].d[0] & 15ull;
    c.r[18].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.budget -= 8;
    { const bool t = c.r[19].d[0] == 0ull; c.r[17].d[0] = c.r[2].d[0] & 7ull;  if (t) { goto L_001020E4; } }
    set32(c.r[2], c.r[7].w[0] + 7u);
    c.r[5].d[0] = c.r[2].d[0] & c.r[3].d[0];
    mmi::mult(c, 0, c.r[8].w[0], c.r[5].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 4));  if (t) { goto L_00102100; } }
L_001020C0:
    mmi::mult(c, 0, c.r[8].w[0], c.r[7].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[5].d[0] = c.r[5].d[0] | 65528ull;
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 5));
    set32(c.r[6], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    c.r[19].d[0] = c.r[6].d[0] & 15ull;
    c.r[18].d[0] = c.r[3].d[0] & c.r[5].d[0];
    c.budget -= 9;
    { const bool t = c.r[19].d[0] != 0ull; c.r[17].d[0] = c.r[3].d[0] & 7ull;  if (t) { goto L_001020F0; } }
L_001020E4:
    c.r[5].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[22].d[0] = 0ull + 0ull;  if (t) { goto L_0010210C; } }
L_001020F0:
    set32(c.r[2], c.r[7].w[0] + 7u);
    c.r[5].d[0] = c.r[2].d[0] & c.r[5].d[0];
    mmi::mult(c, 0, c.r[8].w[0], c.r[5].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 5));
    c.budget -= 4;
L_00102100:
    set32(c.r[2], c.r[2].w[0] - c.r[18].w[0]);
    set32(c.r[2], c.r[2].w[0] - c.r[17].w[0]);
    set32(c.r[22], c.r[2].w[0] - 1u);
    c.budget -= 3;
L_0010210C:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull; c.r[3].d[0] = c.r[9].d[0] & 4095ull;  if (t) { goto L_00102134; } }
    c.r[5].d[0] = c.r[5].d[0] << 32;
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    set32(c.r[2], c.r[20].w[0] + 64u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[4].d[0];
    st64((c.r[2].w[0]), c.r[3].d[0]);
    c.budget -= 8;
L_00102134:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[2].d[0] = c.r[2].d[0] | 36864ull;
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.budget -= 3;
L_00102140:
    c.r[3].d[0] = c.r[3].d[0] & 256ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);  if (t) { goto L_00102174; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x01000000u);
    c.r[3].d[0] = c.r[3].d[0] | 36864ull;
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
L_00102158:
    c.r[2].d[0] = c.r[4].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 1u);  if (t) { goto L_001022D8; } }
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 256ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00102158u | kUnwind; return; } goto L_00102158; } }
L_00102174:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010217Cu);  if (depth < kMaxDepth) unit_0002(c, 600u, depth + 1u); else { c.pc = 0x0010BF40u; return; } if (c.pc != 0x0010217Cu) [[unlikely]] return; }
L_0010217C:
    set32(c.r[4], 0u + 512u);
    c.budget -= 1;
L_00102180:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00102188u); c.r[4].d[0] = c.r[2].d[0] | c.r[4].d[0];  if (depth < kMaxDepth) unit_0002(c, 604u, depth + 1u); else { c.pc = 0x0010BF60u; return; } if (c.pc != 0x00102188u) [[unlikely]] return; }
L_00102188:
    c.r[11].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], 0u + 2u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x12000000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[2].d[0] = c.r[2].d[0] | 4096ull;
    c.r[3].d[0] = c.r[3].d[0] | 36896ull;
    st64((c.r[2].w[0]), c.r[4].d[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[4], 0u + 7u);
    c.r[2].d[0] = c.r[20].d[0] & c.r[5].d[0];
    st32((c.r[3].w[0]), c.r[4].w[0]);
    c.budget -= 13;
    { const bool t = c.r[2].d[0] != c.r[5].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0x0FFF0000u);  if (t) { goto L_001021D8; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.budget -= 1;
L_001021C0:
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[2].d[0] = c.r[20].d[0] & c.r[2].d[0];
    c.r[3].d[0] = c.r[3].d[0] | 36880ull;
    c.budget -= 6;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] | c.r[4].d[0];  if (t) { goto L_001021E8; } }
L_001021D8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[3].d[0] = c.r[3].d[0] | 36880ull;
    c.r[2].d[0] = c.r[20].d[0] & c.r[2].d[0];
    c.budget -= 4;
L_001021E8:
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    set32(c.r[4], 0u + 257u);
    c.r[2].d[0] = c.r[2].d[0] | 36864ull;
    st32((c.r[2].w[0]), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.r[3].d[0] = c.r[3].d[0] & 256ull;
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);  if (t) { goto L_00102234; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x01000000u);
    c.r[3].d[0] = c.r[3].d[0] | 36864ull;
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
L_00102218:
    c.r[2].d[0] = c.r[4].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 1u);  if (t) { goto L_001022D8; } }
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 256ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00102218u | kUnwind; return; } goto L_00102218; } }
L_00102234:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x12000000u);
    c.r[2].d[0] = c.r[2].d[0] | 4096ull;
    c.r[3].d[0] = ld64((c.r[2].w[0]));
    c.r[3].d[0] = c.r[3].d[0] & 2ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);  if (t) { goto L_00102280; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x12000000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x01000000u);
    c.r[3].d[0] = c.r[3].d[0] | 4096ull;
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
L_00102260:
    c.r[2].d[0] = c.r[4].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 1u);  if (t) { goto L_001022EC; } }
    c.r[2].d[0] = ld64((c.r[3].w[0]));
    c.r[2].d[0] = c.r[2].d[0] & 2ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00102260u | kUnwind; return; } goto L_00102260; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.budget -= 1;
L_00102280:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00800000u);
    c.r[2].d[0] = c.r[2].d[0] | 15360ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x12000000u);
    st32((c.r[2].w[0]), c.r[4].w[0]);
    c.r[3].d[0] = c.r[3].d[0] | 4160ull;
    set32(c.r[2], 0u + 1u);
    st64((c.r[3].w[0]), c.r[2].d[0]);
    c.budget -= 9;
    { const bool t = c.r[18].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);  if (t) { goto L_001023DC; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x70000000u);
    c.r[2].d[0] = c.r[2].d[0] | 36896ull;
    c.r[3].d[0] = c.r[21].d[0] & c.r[4].d[0];
    st32((c.r[2].w[0]), c.r[18].w[0]);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != c.r[4].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0x0FFF0000u);  if (t) { goto L_0010237C; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[2].d[0] = c.r[21].d[0] & c.r[2].d[0];
    c.r[3].d[0] = c.r[3].d[0] | 36880ull;
    c.budget -= 7;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] | c.r[4].d[0];  if (t) { goto L_0010238C; } }
L_001022D8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00450000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001022E4u); set32(c.r[4], c.r[4].w[0] + 13536u);  if (depth < kMaxDepth) unit_0003(c, 243u, depth + 1u); else { c.pc = 0x0010DCC0u; return; } if (c.pc != 0x001022E4u) [[unlikely]] return; }
L_001022E4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_00102594; } }
L_001022EC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00450000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001022F8u); set32(c.r[4], c.r[4].w[0] + 13592u);  if (depth < kMaxDepth) unit_0003(c, 243u, depth + 1u); else { c.pc = 0x0010DCC0u; return; } if (c.pc != 0x001022F8u) [[unlikely]] return; }
L_001022F8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00410000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x10000000u);
    set32(c.r[2], c.r[2].w[0] - 24000u);
    c.r[4].d[0] = c.r[4].d[0] | 20480ull;
    ld128((c.r[2].w[0]) & ~15u, c.r[3]);
    set32(c.r[2], 0u - 1u);
    st128((c.r[4].w[0]) & ~15u, c.r[3]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));  if (t) { goto L_00102598; } }
L_0010231C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00450000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[4].w[0] + 13640u);  if (t) { goto L_00102330; } }
L_00102328:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00450000u);
    set32(c.r[4], c.r[4].w[0] + 13704u);
    c.budget -= 2;
L_00102330:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00102338u);  if (depth < kMaxDepth) unit_0003(c, 243u, depth + 1u); else { c.pc = 0x0010DCC0u; return; } if (c.pc != 0x00102338u) [[unlikely]] return; }
L_00102338:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x12000000u);
    set32(c.r[4], 0u + 256u);
    c.r[2].d[0] = c.r[2].d[0] | 4096ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x12000000u);
    st64((c.r[2].w[0]), c.r[4].d[0]);
    c.r[3].d[0] = c.r[3].d[0] | 4160ull;
    st64((c.r[3].w[0]), 0ull);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    set32(c.r[4], 0u + 1u);
    c.r[2].d[0] = c.r[2].d[0] | 12288ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    st32((c.r[2].w[0]), c.r[4].w[0]);
    c.r[3].d[0] = c.r[3].d[0] | 15376ull;
    set32(c.r[2], 0u - 1u);
    st32((c.r[3].w[0]), c.r[4].w[0]);
    c.budget -= 17;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));  if (t) { goto L_00102598; } }
    goto L_0010237C;
L_00102378:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));
    c.budget -= 1;
L_0010237C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[3].d[0] = c.r[3].d[0] | 36880ull;
    c.r[2].d[0] = c.r[21].d[0] & c.r[2].d[0];
    c.budget -= 4;
L_0010238C:
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    set32(c.r[4], 0u + 256u);
    c.r[2].d[0] = c.r[2].d[0] | 36864ull;
    st32((c.r[2].w[0]), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.r[3].d[0] = c.r[3].d[0] & 256ull;
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001023DC; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x01000000u);
    c.r[3].d[0] = c.r[3].d[0] | 36864ull;
    c.budget -= 4;
L_001023C0:
    c.r[2].d[0] = c.r[4].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0010231Cu | kUnwind; return; } goto L_0010231C; } }
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 256ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001023C0u | kUnwind; return; } goto L_001023C0; } }
L_001023DC:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_00102454; } }
    c.r[9].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x10000000u);
    set32(c.r[2], c.r[18].w[0] << 4);
    c.r[9].d[0] = c.r[9].d[0] | 15360ull;
    set32(c.r[6], c.r[2].w[0] + c.r[21].w[0]);
    c.r[10].sd[0] = static_cast<std::int32_t>(0x1F000000u);
    c.r[8].d[0] = c.r[8].d[0] | 20480ull;
    c.budget -= 7;
L_00102400:
    set32(c.r[2], ld32((c.r[9].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & c.r[10].d[0];
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);  if (t) { goto L_0010243C; } }
    c.r[7].sd[0] = static_cast<std::int32_t>(0x01000000u);
    c.r[3].d[0] = c.r[3].d[0] | 15360ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x1F000000u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
L_00102420:
    c.r[2].d[0] = c.r[7].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00102328u | kUnwind; return; } goto L_00102328; } }
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & c.r[4].d[0];
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00102420u | kUnwind; return; } goto L_00102420; } }
L_0010243C:
    ld128((c.r[8].w[0]) & ~15u, c.r[2]);
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.r[3].d[0] = c.r[5].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    st128((c.r[6].w[0]) & ~15u, c.r[2]);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[6], c.r[6].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00102400u | kUnwind; return; } goto L_00102400; } }
L_00102454:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);  if (t) { goto L_00102548; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x1F000000u);
    c.r[2].d[0] = c.r[2].d[0] | 15360ull;
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.r[3].d[0] = c.r[3].d[0] & c.r[4].d[0];
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);  if (t) { goto L_001024A0; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x01000000u);
    c.r[3].d[0] = c.r[3].d[0] | 15360ull;
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
L_00102480:
    c.r[2].d[0] = c.r[5].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00102328u | kUnwind; return; } goto L_00102328; } }
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & c.r[4].d[0];
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00102480u | kUnwind; return; } goto L_00102480; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.budget -= 1;
L_001024A0:
    c.r[5].d[0] = 0ull + 0ull;
    c.r[3].d[0] = c.r[3].d[0] | 20480ull;
    ld128((c.r[3].w[0]) & ~15u, c.r[2]);
    c.budget -= 5;
    { const bool t = c.r[19].d[0] == 0ull; st128((c.r[29].w[0]) & ~15u, c.r[2]);  if (t) { goto L_001024DC; } }
    set32(c.r[6], c.r[18].w[0] + c.r[17].w[0]);
    c.budget -= 1;
L_001024B8:
    set32(c.r[3], c.r[6].w[0] << 4);
    set32(c.r[2], c.r[29].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[21].w[0]);
    c.r[4].d[0] = ld8((c.r[2].w[0]));
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.r[2].d[0] = c.r[5].sd[0] < c.r[19].sd[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull; st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001024B8u | kUnwind; return; } goto L_001024B8; } }
L_001024DC:
    c.budget -= 2;
    { const bool t = c.r[22].sd[0] <= 0; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_00102548; } }
    c.r[8].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[8].d[0] = c.r[8].d[0] | 15360ull;
    c.r[9].sd[0] = static_cast<std::int32_t>(0x1F000000u);
    c.r[7].d[0] = c.r[7].d[0] | 20480ull;
    c.budget -= 5;
L_001024F8:
    set32(c.r[2], ld32((c.r[8].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & c.r[9].d[0];
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);  if (t) { goto L_00102534; } }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x01000000u);
    c.r[3].d[0] = c.r[3].d[0] | 15360ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x1F000000u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
L_00102518:
    c.r[2].d[0] = c.r[6].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00102328u | kUnwind; return; } goto L_00102328; } }
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & c.r[4].d[0];
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00102518u | kUnwind; return; } goto L_00102518; } }
L_00102534:
    ld128((c.r[7].w[0]) & ~15u, c.r[2]);
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.r[3].d[0] = c.r[5].sd[0] < c.r[22].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; st128((c.r[29].w[0]) & ~15u, c.r[2]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001024F8u | kUnwind; return; } goto L_001024F8; } }
L_00102548:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x12000000u);
    c.r[2].d[0] = c.r[2].d[0] | 15360ull;
    c.r[3].d[0] = c.r[3].d[0] | 4160ull;
    st32((c.r[2].w[0]), 0u);
    c.r[4].d[0] = c.r[11].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00102568u); st64((c.r[3].w[0]), 0ull);  if (depth < kMaxDepth) unit_0002(c, 604u, depth + 1u); else { c.pc = 0x0010BF60u; return; } if (c.pc != 0x00102568u) [[unlikely]] return; }
L_00102568:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00410000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x12000000u);
    set32(c.r[3], c.r[3].w[0] - 24000u);
    c.r[2].d[0] = c.r[2].d[0] | 4096ull;
    ld128((c.r[3].w[0]) & ~15u, c.r[5]);
    set32(c.r[4], 0u + 2u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    st64((c.r[2].w[0]), c.r[4].d[0]);
    c.r[3].d[0] = c.r[3].d[0] | 20480ull;
    c.r[2].d[0] = 0ull + 0ull;
    st128((c.r[3].w[0]) & ~15u, c.r[5]);
    c.budget -= 11;
L_00102594:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));
    c.budget -= 1;
L_00102598:
    c.r[22].d[0] = ld64((c.r[29].w[0] + 112u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 96u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_001025C0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001025DCu); c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 113u, depth + 1u); else { c.pc = 0x00100CD8u; return; } if (c.pc != 0x001025DCu) [[unlikely]] return; }
L_001025DC:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != 0ull; set32(c.r[18], ld32((c.r[16].w[0] + 8u)));  if (t) { goto L_00102608; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001025F0u); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_0003(c, 71u, depth + 1u); else { c.pc = 0x0010C700u; return; } if (c.pc != 0x001025F0u) [[unlikely]] return; }
L_001025F0:
    set32(c.r[5], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001025FCu); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_0002(c, 404u, depth + 1u); else { c.pc = 0x0010B920u; return; } if (c.pc != 0x001025FCu) [[unlikely]] return; }
L_001025FC:
    st32((c.r[16].w[0] + 8u), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 12u), 0u);  if (t) { goto L_00102644; } }
L_00102608:
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { st32((c.r[16].w[0] + 8u), c.r[17].w[0]);  goto L_00102628; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00102618u); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_0003(c, 71u, depth + 1u); else { c.pc = 0x0010C700u; return; } if (c.pc != 0x00102618u) [[unlikely]] return; }
L_00102618:
    set32(c.r[5], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00102624u); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_0002(c, 404u, depth + 1u); else { c.pc = 0x0010B920u; return; } if (c.pc != 0x00102624u) [[unlikely]] return; }
L_00102624:
    st32((c.r[16].w[0] + 8u), c.r[17].w[0]);
    c.budget -= 1;
L_00102628:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[4], 0u + 2u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00102638u); set32(c.r[6], 0u - 1u);  if (depth < kMaxDepth) unit_0002(c, 400u, depth + 1u); else { c.pc = 0x0010B900u; return; } if (c.pc != 0x00102638u) [[unlikely]] return; }
L_00102638:
    st32((c.r[16].w[0] + 12u), c.r[2].w[0]);
    c.budget -= 1;
L_0010263C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00102644u); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_0003(c, 75u, depth + 1u); else { c.pc = 0x0010C768u; return; } if (c.pc != 0x00102644u) [[unlikely]] return; }
L_00102644:
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00102660:
    c.r[2].d[0] = ld64((c.r[4].w[0] + 48u));
    set32(c.r[5], c.r[5].w[0] << 16);
    set32(c.r[6], c.r[6].w[0] << 16);
    set32(c.r[5], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[5].w[0]) >> 16));
    c.r[3].d[0] = c.r[2].d[0] >> 16;
    set32(c.r[6], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[6].w[0]) >> 16));
    c.r[2].d[0] = c.r[2].d[0] >> 48;
    c.r[3].d[0] = c.r[3].d[0] & 2047ull;
    c.r[2].d[0] = c.r[2].d[0] & 2047ull;
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.r[6].d[0] = c.r[6].d[0] << 48;
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[5].d[0] = c.r[5].d[0] << 48;
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[2].d[0] = c.r[2].d[0] >> 1;
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 48);
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 48);
    c.r[3].d[0] = c.r[3].d[0] >> 1;
    c.r[6].d[0] = c.r[6].d[0] - c.r[2].d[0];
    c.r[5].d[0] = c.r[5].d[0] - c.r[3].d[0];
    c.r[2].d[0] = c.r[6].d[0] << 4;
    set32(c.r[7], c.r[7].w[0] << 16);
    c.budget -= 27;
    { const bool t = c.r[7].d[0] == 0ull; c.r[5].d[0] = c.r[5].d[0] << 4;  if (t) { goto L_001026D8; } }
    c.r[2].d[0] = c.r[2].d[0] + static_cast<std::uint64_t>(8ll);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] << 32;  if (t) { goto L_001026DC; } }
L_001026D8:
    c.r[2].d[0] = c.r[6].d[0] << 36;
    c.budget -= 1;
L_001026DC:
    c.r[2].d[0] = c.r[5].d[0] | c.r[2].d[0];
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st64((c.r[4].w[0] + 32u), c.r[2].d[0]);  c.pc = t; return; }
L_001026E8:
    set32(c.r[29], c.r[29].w[0] - 112u);
    set32(c.r[6], c.r[6].w[0] << 16);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    set32(c.r[5], c.r[5].w[0] << 16);
    st64((c.r[29].w[0] + 64u), c.r[20].d[0]);
    set32(c.r[18], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[6].w[0]) >> 16));
    set32(c.r[20], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[5].w[0]) >> 16));
    set32(c.r[6], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[6].w[0]) >> 22));
    c.r[2].d[0] = c.r[20].d[0] & 15ull;
    c.r[6].d[0] = c.r[6].d[0] & 63ull;
    c.r[2].d[0] = c.r[2].d[0] << 24;
    c.r[6].d[0] = c.r[6].d[0] << 16;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[6].d[0] = c.r[6].d[0] | c.r[2].d[0];
    st64((c.r[29].w[0] + 80u), c.r[21].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[19].d[0]);
    set32(c.r[7], c.r[7].w[0] << 16);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    set32(c.r[8], c.r[8].w[0] << 16);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    set32(c.r[9], c.r[9].w[0] << 16);
    set32(c.r[2], 0u + 77u);
    set32(c.r[3], 0u + 79u);
    set32(c.r[17], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[7].w[0]) >> 16));
    set32(c.r[21], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[8].w[0]) >> 16));
    set32(c.r[19], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[9].w[0]) >> 16));
    st64((c.r[16].w[0] + 8u), c.r[2].d[0]);
    st64((c.r[16].w[0]), c.r[6].d[0]);
    c.budget -= 31;
    { const bool t = c.r[21].d[0] != 0ull; st64((c.r[16].w[0] + 24u), c.r[3].d[0]);  if (t) { goto L_00102798; } }
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00102774u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 140u, depth + 1u); else { c.pc = 0x00101238u; return; } if (c.pc != 0x00102774u) [[unlikely]] return; }
L_00102774:
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[3].d[0] = c.r[19].d[0] & 15ull;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.r[3].d[0] = c.r[3].d[0] << 24;
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.r[4].d[0] = 0ull | 32768ull;
    c.r[4].d[0] = c.r[4].d[0] << 17;
    c.budget -= 9;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] | c.r[4].d[0];  if (t) { goto L_001027BC; } }
L_00102798:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001027A8u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 140u, depth + 1u); else { c.pc = 0x00101238u; return; } if (c.pc != 0x001027A8u) [[unlikely]] return; }
L_001027A8:
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[3].d[0] = c.r[19].d[0] & 15ull;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.r[3].d[0] = c.r[3].d[0] << 24;
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 5;
L_001027BC:
    st64((c.r[16].w[0] + 16u), c.r[2].d[0]);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[17].w[0]) >> 1));
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[18].w[0]) >> 1));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    set32(c.r[4], 0u + 2048u);
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.r[2].d[0] = c.r[4].d[0] - c.r[2].d[0];
    c.r[4].d[0] = c.r[4].d[0] - c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] << 36;
    set32(c.r[6], c.r[18].w[0] - 1u);
    set32(c.r[5], c.r[17].w[0] - 1u);
    c.r[4].d[0] = c.r[4].d[0] << 4;
    c.r[3].d[0] = ld64((c.r[16].w[0] + 64u));
    c.r[7].d[0] = ld64((c.r[16].w[0] + 80u));
    c.r[5].d[0] = c.r[5].d[0] << 48;
    c.r[4].d[0] = c.r[4].d[0] | c.r[2].d[0];
    c.r[6].d[0] = c.r[6].d[0] << 16;
    set32(c.r[11], 0u + 1u);
    c.r[6].d[0] = c.r[6].d[0] | c.r[5].d[0];
    set32(c.r[2], 0u + 25u);
    c.r[3].d[0] = c.r[3].d[0] | c.r[11].d[0];
    c.r[7].d[0] = c.r[7].d[0] | c.r[11].d[0];
    set32(c.r[5], 0u + 65u);
    set32(c.r[8], 0u + 26u);
    set32(c.r[9], 0u + 70u);
    set32(c.r[10], 0u + 69u);
    st64((c.r[16].w[0] + 40u), c.r[2].d[0]);
    st64((c.r[16].w[0] + 32u), c.r[4].d[0]);
    c.r[2].d[0] = c.r[20].d[0] & 2ull;
    st64((c.r[16].w[0] + 56u), c.r[5].d[0]);
    c.budget -= 32;
L_0010283C:
    st64((c.r[16].w[0] + 48u), c.r[6].d[0]);
    c.budget -= 1;
L_00102840:
    st64((c.r[16].w[0] + 72u), c.r[8].d[0]);
    st64((c.r[16].w[0] + 64u), c.r[3].d[0]);
    st64((c.r[16].w[0] + 88u), c.r[9].d[0]);
    st64((c.r[16].w[0] + 80u), c.r[7].d[0]);
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; st64((c.r[16].w[0] + 104u), c.r[10].d[0]);  if (t) { goto L_00102864; } }
    c.r[2].d[0] = ld64((c.r[16].w[0] + 96u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] | c.r[11].d[0];  if (t) { goto L_00102870; } }
L_00102864:
    c.r[2].d[0] = ld64((c.r[16].w[0] + 96u));
    set32(c.r[3], 0u - 2u);
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.budget -= 3;
L_00102870:
    st64((c.r[16].w[0] + 96u), c.r[2].d[0]);
    set32(c.r[2], 0u + 72u);
    c.budget -= 4;
    { const bool t = c.r[21].d[0] == 0ull; st64((c.r[16].w[0] + 120u), c.r[2].d[0]);  if (t) { goto L_00102894; } }
L_00102880:
    c.r[2].d[0] = c.r[21].d[0] & 3ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[2].d[0] = c.r[2].d[0] << 17;
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];  if (t) { goto L_00102898; } }
L_00102894:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00030000u);
    c.budget -= 1;
L_00102898:
    st64((c.r[16].w[0] + 112u), c.r[2].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    set32(c.r[2], 0u + 8u);
    c.r[21].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 10;
L_001028C0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_001028C8:
    c.r[2].d[0] = ld64((c.r[4].w[0] + 48u));
    set32(c.r[5], c.r[5].w[0] << 16);
    set32(c.r[6], c.r[6].w[0] << 16);
    set32(c.r[5], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[5].w[0]) >> 16));
    c.r[3].d[0] = c.r[2].d[0] >> 16;
    set32(c.r[6], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[6].w[0]) >> 16));
    c.r[2].d[0] = c.r[2].d[0] >> 48;
    c.r[3].d[0] = c.r[3].d[0] & 2047ull;
    c.r[2].d[0] = c.r[2].d[0] & 2047ull;
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.r[6].d[0] = c.r[6].d[0] << 48;
    c.budget -= 14;
L_00102900:
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[5].d[0] = c.r[5].d[0] << 48;
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[2].d[0] = c.r[2].d[0] >> 1;
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 48);
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 48);
    c.r[3].d[0] = c.r[3].d[0] >> 1;
    c.r[6].d[0] = c.r[6].d[0] - c.r[2].d[0];
    c.r[5].d[0] = c.r[5].d[0] - c.r[3].d[0];
    c.r[2].d[0] = c.r[6].d[0] << 4;
    set32(c.r[7], c.r[7].w[0] << 16);
    c.budget -= 13;
    { const bool t = c.r[7].d[0] == 0ull; c.r[5].d[0] = c.r[5].d[0] << 4;  if (t) { goto L_00102940; } }
    c.r[2].d[0] = c.r[2].d[0] + static_cast<std::uint64_t>(8ll);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] << 32;  if (t) { goto L_00102944; } }
L_00102940:
    c.r[2].d[0] = c.r[6].d[0] << 36;
    c.budget -= 1;
L_00102944:
    c.r[2].d[0] = c.r[5].d[0] | c.r[2].d[0];
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st64((c.r[4].w[0] + 32u), c.r[2].d[0]);  c.pc = t; return; }
L_00102950:
    set32(c.r[29], c.r[29].w[0] - 208u);
    set32(c.r[5], c.r[5].w[0] << 16);
    st64((c.r[29].w[0] + 48u), c.r[16].d[0]);
    set32(c.r[8], c.r[8].w[0] << 16);
    st64((c.r[29].w[0] + 176u), c.r[30].d[0]);
    set32(c.r[16], c.r[9].w[0] << 16);
    st64((c.r[29].w[0] + 160u), c.r[23].d[0]);
    set32(c.r[10], c.r[10].w[0] << 16);
    st64((c.r[29].w[0] + 144u), c.r[22].d[0]);
    set32(c.r[16], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[16].w[0]) >> 16));
    c.budget -= 10;
L_00102978:
    st64((c.r[29].w[0] + 128u), c.r[21].d[0]);
    set32(c.r[22], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[8].w[0]) >> 16));
    st64((c.r[29].w[0] + 80u), c.r[18].d[0]);
    set32(c.r[21], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[5].w[0]) >> 16));
    st64((c.r[29].w[0] + 64u), c.r[17].d[0]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 112u), c.r[20].d[0]);
    set32(c.r[23], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[10].w[0]) >> 16));
    st64((c.r[29].w[0] + 96u), c.r[19].d[0]);
    set32(c.r[17], c.r[6].w[0] << 16);
    st64((c.r[29].w[0] + 192u), c.r[31].d[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001029ACu); set32(c.r[30], c.r[7].w[0] << 16);  if (depth < kMaxDepth) unit_0000(c, 113u, depth + 1u); else { c.pc = 0x00100CD8u; return; } if (c.pc != 0x001029ACu) [[unlikely]] return; }
L_001029AC:
    set32(c.r[19], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[17].w[0]) >> 16));
    set32(c.r[20], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[30].w[0]) >> 16));
    st32((c.r[29].w[0] + 32u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.r[7].d[0] = c.r[20].d[0] + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001029D4u); c.r[9].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 124u, depth + 1u); else { c.pc = 0x00100E00u; return; } if (c.pc != 0x001029D4u) [[unlikely]] return; }
L_001029D4:
    set32(c.r[4], c.r[18].w[0] + 40u);
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.r[7].d[0] = c.r[20].d[0] + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001029F0u); c.r[9].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 124u, depth + 1u); else { c.pc = 0x00100E00u; return; } if (c.pc != 0x001029F0u) [[unlikely]] return; }
L_001029F0:
    set32(c.r[4], c.r[18].w[0] + 96u);
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.r[7].d[0] = c.r[20].d[0] + 0ull;
    c.r[8].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00102A0Cu); c.r[9].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 142u, depth + 1u); else { c.pc = 0x00101300u; return; } if (c.pc != 0x00102A0Cu) [[unlikely]] return; }
L_00102A0C:
    set32(c.r[4], c.r[18].w[0] + 224u);
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.r[7].d[0] = c.r[20].d[0] + 0ull;
    c.r[8].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00102A28u); c.r[9].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 241u, depth + 1u); else { c.pc = 0x001026E8u; return; } if (c.pc != 0x00102A28u) [[unlikely]] return; }
L_00102A28:
    set32(c.r[4], c.r[18].w[0] + 464u);
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.r[7].d[0] = c.r[20].d[0] + 0ull;
    c.r[8].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00102A44u); c.r[9].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 142u, depth + 1u); else { c.pc = 0x00101300u; return; } if (c.pc != 0x00102A44u) [[unlikely]] return; }
L_00102A44:
    c.r[9].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[18].w[0] + 592u);
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.r[7].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00102A60u); c.r[8].d[0] = c.r[22].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 241u, depth + 1u); else { c.pc = 0x001026E8u; return; } if (c.pc != 0x00102A60u) [[unlikely]] return; }
L_00102A60:
    c.budget -= 2;
    { const bool t = c.r[23].d[0] == 0ull; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[17].w[0]) >> 17));  if (t) { goto L_00102AD8; } }
    set32(c.r[16], 0u + 2048u);
    set32(c.r[17], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[30].w[0]) >> 17));
    st32((c.r[29].w[0]), 0u);
    set32(c.r[17], c.r[16].w[0] - c.r[17].w[0]);
    st32((c.r[29].w[0] + 8u), 0u);
    set32(c.r[16], c.r[16].w[0] - c.r[2].w[0]);
    set32(c.r[4], c.r[18].w[0] + 352u);
    st32((c.r[29].w[0] + 16u), 0u);
    c.r[5].d[0] = c.r[22].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.r[8].d[0] = c.r[19].d[0] + 0ull;
    c.r[9].d[0] = c.r[20].d[0] + 0ull;
    c.r[10].d[0] = 0ull + 0ull;
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00102AA8u); c.r[11].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 146u, depth + 1u); else { c.pc = 0x001014E8u; return; } if (c.pc != 0x00102AA8u) [[unlikely]] return; }
L_00102AA8:
    c.r[5].d[0] = c.r[22].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[29].w[0]), 0u);
    st32((c.r[29].w[0] + 8u), 0u);
    set32(c.r[4], c.r[18].w[0] + 720u);
    c.budget -= 6;
L_00102AC0:
    st32((c.r[29].w[0] + 16u), 0u);
    c.r[8].d[0] = c.r[19].d[0] + 0ull;
    c.r[9].d[0] = c.r[20].d[0] + 0ull;
    c.r[10].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00102AD8u); c.r[11].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 146u, depth + 1u); else { c.pc = 0x001014E8u; return; } if (c.pc != 0x00102AD8u) [[unlikely]] return; }
L_00102AD8:
    mmi::por(c.r[2], c.r[0], c.r[0]);
    set32(c.r[7], 0u + 22u);
    st128((c.r[18].w[0] + 80u) & ~15u, c.r[2]);
    set32(c.r[6], 0u - 32768u);
    st128((c.r[18].w[0] + 448u) & ~15u, c.r[2]);
    set32(c.r[3], 0u + 16u);
    c.r[4].d[0] = ld64((c.r[18].w[0] + 80u));
    set32(c.r[2], 0u + 16u);
    c.r[5].d[0] = ld64((c.r[18].w[0] + 448u));
    if (c.r[23].d[0] != 0) c.r[2].d[0] = c.r[7].d[0];
    c.r[4].d[0] = c.r[4].d[0] & c.r[6].d[0];
    if (c.r[23].d[0] != 0) c.r[3].d[0] = c.r[7].d[0];
    c.r[5].d[0] = c.r[5].d[0] & c.r[6].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[2].d[0];
    c.r[5].d[0] = c.r[5].d[0] | c.r[3].d[0];
    c.r[2].d[0] = 0ull | 32768ull;
    c.r[6].d[0] = ld64((c.r[18].w[0] + 88u));
    c.r[5].d[0] = c.r[5].d[0] | c.r[2].d[0];
    c.r[7].d[0] = ld64((c.r[18].w[0] + 456u));
    c.r[4].d[0] = c.r[4].d[0] | c.r[2].d[0];
    set32(c.r[3], 0u - 1u);
    c.r[3].d[0] = c.r[3].d[0] >> 4;
    set32(c.r[2], 0u - 16u);
    c.r[5].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[7].d[0] = c.r[7].d[0] & c.r[2].d[0];
    c.r[4].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.r[6].d[0] = c.r[6].d[0] & c.r[2].d[0];
    c.r[3].d[0] = 0ull | 32768ull;
    c.r[3].d[0] = c.r[3].d[0] << 45;
    set32(c.r[2], 0u + 14u);
    c.r[5].d[0] = c.r[5].d[0] | c.r[3].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.r[6].d[0] = c.r[6].d[0] | c.r[2].d[0];
    c.r[7].d[0] = c.r[7].d[0] | c.r[2].d[0];
    st64((c.r[18].w[0] + 80u), c.r[4].d[0]);
    st64((c.r[18].w[0] + 88u), c.r[6].d[0]);
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    st64((c.r[18].w[0] + 448u), c.r[5].d[0]);
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 42;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00102B80u); st64((c.r[18].w[0] + 456u), c.r[7].d[0]);  if (depth < kMaxDepth) unit_0000(c, 140u, depth + 1u); else { c.pc = 0x00101238u; return; } if (c.pc != 0x00102B80u) [[unlikely]] return; }
L_00102B80:
    set32(c.r[3], ld32((c.r[29].w[0] + 32u)));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], 0u + 1u);
    c.r[4].d[0] = c.r[4].d[0] << 32;
    c.r[4].d[0] = c.r[4].d[0] | 1ull;
    c.r[2].d[0] = ld64((c.r[3].w[0]));
    c.r[3].d[0] = 0ull | 65535ull;
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.budget -= 12;
    { const bool t = c.r[2].d[0] == c.r[4].d[0]; set32(c.r[3], ld32((c.r[29].w[0] + 32u)));  if (t) { goto L_00102BBC; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 192u));  if (t) { goto L_00102C08; } }
L_00102BBC:
    set32(c.r[5], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[5].w[0]) >> 1));
    c.r[6].d[0] = ld64((c.r[18].w[0] + 56u));
    c.r[7].d[0] = ld64((c.r[18].w[0] + 96u));
    set32(c.r[3], c.r[5].w[0] << 16);
    c.r[4].d[0] = ld64((c.r[18].w[0] + 224u));
    set32(c.r[2], 0u - 512u);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 16));
    c.r[5].d[0] = c.r[5].d[0] & 511ull;
    c.r[4].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[3].d[0] = c.r[3].d[0] & 511ull;
    c.r[6].d[0] = c.r[6].d[0] & c.r[2].d[0];
    c.r[7].d[0] = c.r[7].d[0] & c.r[2].d[0];
    c.r[6].d[0] = c.r[6].d[0] | c.r[3].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];
    c.r[7].d[0] = c.r[7].d[0] | c.r[5].d[0];
    st64((c.r[18].w[0] + 224u), c.r[4].d[0]);
    st64((c.r[18].w[0] + 56u), c.r[6].d[0]);
    st64((c.r[18].w[0] + 96u), c.r[7].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 192u));
    c.budget -= 19;
L_00102C08:
    c.r[30].d[0] = ld64((c.r[29].w[0] + 176u));
    c.r[23].d[0] = ld64((c.r[29].w[0] + 160u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 144u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 128u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 112u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 96u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 208u);  c.pc = t; return; }
L_00102C38:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.budget -= 1;
L_00102C3C:
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[5].d[0] & 1ull;
    set32(c.r[4], 0u + 40u);
    mmi::mult(c, 0, c.r[16].w[0], c.r[4].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00102C60u); set32(c.r[4], c.r[2].w[0] + c.r[17].w[0]);  if (depth < kMaxDepth) unit_0000(c, 135u, depth + 1u); else { c.pc = 0x00101178u; return; } if (c.pc != 0x00102C60u) [[unlikely]] return; }
L_00102C60:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00102C78; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00102C70u); set32(c.r[4], c.r[17].w[0] + 448u);  if (depth < kMaxDepth) unit_0000(c, 148u, depth + 1u); else { c.pc = 0x001015F0u; return; } if (c.pc != 0x00102C70u) [[unlikely]] return; }
L_00102C70:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_00102C84; } }
L_00102C78:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00102C80u); set32(c.r[4], c.r[17].w[0] + 80u);  if (depth < kMaxDepth) unit_0000(c, 148u, depth + 1u); else { c.pc = 0x001015F0u; return; } if (c.pc != 0x00102C80u) [[unlikely]] return; }
L_00102C80:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_00102C84:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00102C98:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x01000000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 256ull;
    c.budget -= 11;
    { const bool t = c.r[2].d[0] == 0ull; c.r[18].sd[0] = static_cast<std::int32_t>(0x00450000u);  if (t) { goto L_00102CF0; } }
    set32(c.r[17], c.r[17].w[0] - 1u);
    c.budget -= 1;
L_00102CC8:
    c.budget -= 2;
    { const bool t = c.r[17].sd[0] >= 0;  if (t) { goto L_00102CE0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00102CD8u); set32(c.r[4], c.r[18].w[0] + 14000u);  if (depth < kMaxDepth) unit_0003(c, 243u, depth + 1u); else { c.pc = 0x0010DCC0u; return; } if (c.pc != 0x00102CD8u) [[unlikely]] return; }
L_00102CD8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00102CE0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 315u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x00102CE0u) [[unlikely]] return; }
L_00102CE0:
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 256ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] - 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00102CC8u | kUnwind; return; } goto L_00102CC8; } }
L_00102CF0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00102D08:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x01000000u);
    st64((c.r[29].w[0] + 48u), c.r[19].d[0]);
    if (c.r[6].d[0] != 0) c.r[16].d[0] = c.r[6].d[0];
    set32(c.r[2], ld32((c.r[17].w[0] + 16u)));
    c.r[2].d[0] = c.r[2].d[0] < c.r[18].d[0] ? 1ull : 0ull;
    c.budget -= 14;
    { const bool t = c.r[2].d[0] == 0ull; c.r[19].sd[0] = static_cast<std::int32_t>(0x00450000u);  if (t) { goto L_00102D70; } }
    set32(c.r[16], c.r[16].w[0] - 1u);
    c.budget -= 2;
L_00102D48:
    c.budget -= 2;
    { const bool t = c.r[16].sd[0] >= 0;  if (t) { goto L_00102D60; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00102D58u); set32(c.r[4], c.r[19].w[0] + 14000u);  if (depth < kMaxDepth) unit_0003(c, 243u, depth + 1u); else { c.pc = 0x0010DCC0u; return; } if (c.pc != 0x00102D58u) [[unlikely]] return; }
L_00102D58:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00102D60u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 315u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x00102D60u) [[unlikely]] return; }
L_00102D60:
    set32(c.r[2], ld32((c.r[17].w[0] + 16u)));
    c.r[2].d[0] = c.r[2].d[0] < c.r[18].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] - 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00102D48u | kUnwind; return; } goto L_00102D48; } }
L_00102D70:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00102D90:
    set32(c.r[3], 0u + 7u);
    set32(c.r[2], c.r[4].w[0] >> 28);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0x0FFF0000u);  if (t) { goto L_00102DB0; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[4].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.budget -= 4;
L_00102DB0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; return; }
L_00102DB8:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull; set32(c.r[2], c.r[5].w[0] - 1u);  if (t) { goto L_00102DE4; } }
    set32(c.r[3], 0u - 1u);
    c.budget -= 2;
L_00102DC8:
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[2], c.r[2].w[0] - 1u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00102DC8u | kUnwind; return; } goto L_00102DC8; } }
L_00102DE4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00102DF0:
    c.r[2].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(10ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00410000u);  if (t) { goto L_00102E10; } }
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 23968u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[3].w[0])));  c.pc = t; return; }
L_00102E10:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_00102E18:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    st64((c.r[29].w[0] + 48u), c.r[17].d[0]);
    c.r[2].d[0] = c.r[2].d[0] | 57344ull;
    st64((c.r[29].w[0] + 32u), c.r[16].d[0]);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00450000u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00410000u);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] - 23968u);
    set32(c.r[5], ld32((c.r[2].w[0])));
    set32(c.r[6], c.r[6].w[0] + 14024u);
    set32(c.r[4], 0u + 9u);
    c.r[17].d[0] = c.r[5].d[0] & 1ull;
    c.budget -= 14;
L_00102E50:
    set32(c.r[2], ld32((c.r[6].w[0])));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], c.r[3].w[0] + 4u);  goto L_00102E7C; }
    set32(c.r[2], ld32((c.r[3].w[0])));
    st32((c.r[2].w[0] + 128u), 0u);
    st32((c.r[2].w[0]), 0u);
    st32((c.r[2].w[0] + 48u), 0u);
    st32((c.r[2].w[0] + 16u), 0u);
    st32((c.r[2].w[0] + 80u), 0u);
    st32((c.r[2].w[0] + 64u), 0u);
    set32(c.r[3], c.r[3].w[0] + 4u);
    c.budget -= 8;
L_00102E7C:
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.budget -= 3;
    { const bool t = c.r[4].sd[0] >= 0; set32(c.r[6], c.r[6].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00102E50u | kUnwind; return; } goto L_00102E50; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[2].d[0] = 0ull | 65311ull;
    c.r[3].d[0] = c.r[3].d[0] | 57360ull;
    c.r[6].sd[0] = static_cast<std::int32_t>(0xFF1F0000u);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[5], 0u + 20u);
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & c.r[6].d[0];
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00102EB4u); st32((c.r[3].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0000(c, 278u, depth + 1u); else { c.pc = 0x00102DB8u; return; } if (c.pc != 0x00102EB4u) [[unlikely]] return; }
L_00102EB4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00102EBCu); c.r[4].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 285u, depth + 1u); else { c.pc = 0x00102EF8u; return; } if (c.pc != 0x00102EBCu) [[unlikely]] return; }
L_00102EBC:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[3].d[0]; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00102EE0; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[3].d[0] = c.r[3].d[0] | 57344ull;
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.r[2].d[0] = c.r[2].d[0] | 1ull;
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 6;
L_00102EE0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00102EF8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[2].d[0] = c.r[2].d[0] | 57344ull;
    c.r[3].d[0] = c.r[3].d[0] | 57376ull;
    set32(c.r[10], ld32((c.r[2].w[0])));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x10000000u);
    set32(c.r[6], ld32((c.r[3].w[0])));
    c.r[9].d[0] = c.r[4].d[0] + 0ull;
    c.r[5].d[0] = c.r[5].d[0] | 57392ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    set32(c.r[5], ld32((c.r[5].w[0])));
    c.r[3].d[0] = c.r[3].d[0] | 57424ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[4].d[0] = ld8((c.r[9].w[0]));
    set32(c.r[6], ld32((c.r[3].w[0])));
    c.r[2].d[0] = c.r[2].d[0] | 57408ull;
    set32(c.r[8], ld32((c.r[2].w[0])));
    c.r[4].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(10ll) ? 1ull : 0ull;
    c.budget -= 20;
    if (c.r[4].d[0] != 0ull) { c.r[2].d[0] = ld8((c.r[9].w[0] + 1u));  goto L_00102F50; }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u - 1u);  c.pc = t; return; }
L_00102F50:
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(10ll) ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = ld8((c.r[9].w[0] + 2u));  goto L_00102F64; }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u - 2u);  c.pc = t; return; }
L_00102F64:
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(10ll) ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[11].d[0] = ld8((c.r[9].w[0] + 3u));  goto L_00102F78; }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u - 3u);  c.pc = t; return; }
L_00102F78:
    c.r[2].d[0] = c.r[11].d[0] < static_cast<std::uint64_t>(7ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00450000u);  if (t) { goto L_00102F8C; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u - 4u);  c.pc = t; return; }
L_00102F8C:
    c.r[3].d[0] = ld8((c.r[9].w[0]));
    set32(c.r[2], c.r[2].w[0] + 14064u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00450000u);
    c.r[5].d[0] = ld8((c.r[9].w[0] + 1u));
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] + 14080u);
    c.r[8].d[0] = ld8((c.r[3].w[0]));
    set32(c.r[5], c.r[5].w[0] + c.r[4].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65487ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00450000u);
    c.r[7].d[0] = ld8((c.r[9].w[0] + 2u));
    c.r[2].d[0] = c.r[10].d[0] & c.r[2].d[0];
    set32(c.r[4], c.r[4].w[0] + 14096u);
    set32(c.r[8], c.r[8].w[0] << 4);
    c.r[6].d[0] = ld8((c.r[5].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[10].d[0] = c.r[2].d[0] | c.r[8].d[0];
    set32(c.r[7], c.r[7].w[0] + c.r[4].w[0]);
    c.r[3].d[0] = c.r[3].d[0] | 65343ull;
    set32(c.r[6], c.r[6].w[0] << 6);
    c.r[3].d[0] = c.r[10].d[0] & c.r[3].d[0];
    c.r[4].d[0] = ld8((c.r[7].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[10].d[0] = c.r[3].d[0] | c.r[6].d[0];
    c.r[2].d[0] = c.r[2].d[0] | 65523ull;
    set32(c.r[4], c.r[4].w[0] << 2);
    c.r[2].d[0] = c.r[10].d[0] & c.r[2].d[0];
    c.budget -= 30;
    { const bool t = c.r[11].d[0] == 0ull; c.r[10].d[0] = c.r[2].d[0] | c.r[4].d[0];  if (t) { goto L_00103028; } }
    c.r[3].d[0] = ld8((c.r[9].w[0] + 3u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[10].d[0] = c.r[10].d[0] | 2ull;
    c.r[2].d[0] = c.r[2].d[0] | 64767ull;
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.r[2].d[0] = c.r[10].d[0] & c.r[2].d[0];
    set32(c.r[3], c.r[3].w[0] << 8);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; c.r[10].d[0] = c.r[2].d[0] | c.r[3].d[0];  if (t) { goto L_00103034; } }
L_00103028:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65533ull;
    c.r[10].d[0] = c.r[10].d[0] & c.r[2].d[0];
    c.budget -= 3;
L_00103034:
    c.r[2].d[0] = ld16((c.r[9].w[0] + 4u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.budget -= 2;
L_0010303C:
    c.r[6].d[0] = ld16((c.r[9].w[0] + 6u));
    c.budget -= 1;
L_00103040:
    c.r[4].d[0] = c.r[4].d[0] | 57344ull;
    c.r[5].d[0] = ld16((c.r[9].w[0] + 10u));
    set32(c.r[2], c.r[2].w[0] << 16);
    set32(c.r[8], ld32((c.r[9].w[0] + 16u)));
    c.r[6].d[0] = c.r[2].d[0] | c.r[6].d[0];
    c.r[7].d[0] = ld16((c.r[9].w[0] + 8u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    st32((c.r[4].w[0]), c.r[10].w[0]);
    c.r[3].d[0] = c.r[3].d[0] | 57376ull;
    set32(c.r[5], c.r[5].w[0] << 16);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    st32((c.r[3].w[0]), c.r[6].w[0]);
    c.r[5].d[0] = c.r[5].d[0] | c.r[7].d[0];
    c.r[2].d[0] = c.r[2].d[0] | 57392ull;
    set32(c.r[6], ld32((c.r[9].w[0] + 12u)));
    st32((c.r[2].w[0]), c.r[5].w[0]);
    c.budget -= 16;
L_00103080:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[3].d[0] = c.r[3].d[0] | 57424ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    st32((c.r[3].w[0]), c.r[6].w[0]);
    c.r[2].d[0] = c.r[2].d[0] | 57408ull;
    st32((c.r[2].w[0]), c.r[8].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[6], c.r[3].w[0] - 26488u);
    ldl(c.r[2], (c.r[9].w[0] + 7u));
    ldr(c.r[2], (c.r[9].w[0]));
    ldl(c.r[4], (c.r[9].w[0] + 15u));
    ldr(c.r[4], (c.r[9].w[0] + 8u));
    set32(c.r[5], ld32((c.r[9].w[0] + 16u)));
    sdl(c.r[2], (c.r[6].w[0] + 7u));
    sdr(c.r[2], (c.r[6].w[0]));
    sdl(c.r[4], (c.r[6].w[0] + 15u));
    c.budget -= 16;
L_001030C0:
    sdr(c.r[4], (c.r[6].w[0] + 8u));
    st32((c.r[6].w[0] + 16u), c.r[5].w[0]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_001030D0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[8], c.r[3].w[0] - 26488u);
    ldl(c.r[5], (c.r[8].w[0] + 7u));
    ldr(c.r[5], (c.r[8].w[0]));
    ldl(c.r[6], (c.r[8].w[0] + 15u));
    ldr(c.r[6], (c.r[8].w[0] + 8u));
    set32(c.r[7], ld32((c.r[8].w[0] + 16u)));
    sdl(c.r[5], (c.r[4].w[0] + 7u));
    sdr(c.r[5], (c.r[4].w[0]));
    sdl(c.r[6], (c.r[4].w[0] + 15u));
    sdr(c.r[6], (c.r[4].w[0] + 8u));
    st32((c.r[4].w[0] + 16u), c.r[7].w[0]);
    c.budget -= 12;
L_00103100:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; return; }
L_00103108:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[3].d[0] = c.r[3].d[0] | 57440ull;
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[3].w[0]), c.r[4].w[0]);  c.pc = t; return; }
L_00103120:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010313Cu); c.r[4].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 277u, depth + 1u); else { c.pc = 0x00102D90u; return; } if (c.pc != 0x0010313Cu) [[unlikely]] return; }
L_0010313C:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00103148u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 269u, depth + 1u); else { c.pc = 0x00102C98u; return; } if (c.pc != 0x00103148u) [[unlikely]] return; }
L_00103148:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[16].w[0] + 48u)));
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.budget -= 5;
    if (c.r[3].d[0] != c.r[2].d[0]) { st32((c.r[16].w[0] + 48u), c.r[17].w[0]);  goto L_0010315C; }
L_0010315C:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[3], 0u - 13u);
    st32((c.r[16].w[0] + 32u), 0u);
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[2].d[0] = c.r[2].d[0] | 261ull;
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 9;
L_00103180:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00103188:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001031ACu); c.r[4].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 277u, depth + 1u); else { c.pc = 0x00102D90u; return; } if (c.pc != 0x001031ACu) [[unlikely]] return; }
L_001031AC:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001031B8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 269u, depth + 1u); else { c.pc = 0x00102C98u; return; } if (c.pc != 0x001031B8u) [[unlikely]] return; }
L_001031B8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[16].w[0] + 16u)));
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.budget -= 5;
    if (c.r[3].d[0] != c.r[2].d[0]) { st32((c.r[16].w[0] + 16u), c.r[17].w[0]);  goto L_001031CC; }
L_001031CC:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[3], 0u - 13u);
    st32((c.r[16].w[0] + 32u), c.r[18].w[0]);
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[2].d[0] = c.r[2].d[0] | 257ull;
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00103200:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00103224u); c.r[4].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 277u, depth + 1u); else { c.pc = 0x00102D90u; return; } if (c.pc != 0x00103224u) [[unlikely]] return; }
L_00103224:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00103230u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 269u, depth + 1u); else { c.pc = 0x00102C98u; return; } if (c.pc != 0x00103230u) [[unlikely]] return; }
L_00103230:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[16].w[0] + 16u)));
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.budget -= 5;
    if (c.r[3].d[0] != c.r[2].d[0]) { st32((c.r[16].w[0] + 16u), c.r[17].w[0]);  goto L_00103244; }
L_00103244:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[3], 0u - 13u);
    st32((c.r[16].w[0] + 32u), c.r[18].w[0]);
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[2].d[0] = c.r[2].d[0] | 265ull;
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00103278:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010328Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 269u, depth + 1u); else { c.pc = 0x00102C98u; return; } if (c.pc != 0x0010328Cu) [[unlikely]] return; }
L_0010328C:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[3], 0u - 13u);
    set32(c.r[4], 0u - 2u);
    st32((c.r[16].w[0] + 32u), 0u);
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[2].d[0] = c.r[2].d[0] | 4ull;
    c.r[2].d[0] = c.r[2].d[0] & c.r[4].d[0];
    c.r[2].d[0] = c.r[2].d[0] | 256ull;
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001032C0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001032E4u); c.r[4].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 277u, depth + 1u); else { c.pc = 0x00102D90u; return; } if (c.pc != 0x001032E4u) [[unlikely]] return; }
L_001032E4:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001032F0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 269u, depth + 1u); else { c.pc = 0x00102C98u; return; } if (c.pc != 0x001032F0u) [[unlikely]] return; }
L_001032F0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[16].w[0] + 16u)));
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.budget -= 5;
    if (c.r[3].d[0] != c.r[2].d[0]) { st32((c.r[16].w[0] + 16u), c.r[17].w[0]);  goto L_00103304; }
L_00103304:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[3], 0u - 13u);
    set32(c.r[4], 0u - 2u);
    st32((c.r[16].w[0] + 32u), c.r[18].w[0]);
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[4].d[0];
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[2].d[0] = c.r[2].d[0] | 256ull;
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00103340:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00103364u); c.r[4].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 277u, depth + 1u); else { c.pc = 0x00102D90u; return; } if (c.pc != 0x00103364u) [[unlikely]] return; }
L_00103364:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00103370u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 269u, depth + 1u); else { c.pc = 0x00102C98u; return; } if (c.pc != 0x00103370u) [[unlikely]] return; }
L_00103370:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[16].w[0] + 16u)));
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.budget -= 5;
    if (c.r[3].d[0] != c.r[2].d[0]) { st32((c.r[16].w[0] + 16u), c.r[17].w[0]);  goto L_00103384; }
L_00103384:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[3], 0u - 13u);
    set32(c.r[4], 0u - 2u);
    st32((c.r[16].w[0] + 32u), c.r[18].w[0]);
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[2].d[0] = c.r[2].d[0] | 8ull;
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[4].d[0];
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[2].d[0] = c.r[2].d[0] | 256ull;
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 15;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001033C0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[2].d[0]; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_001033E0; } }
    set32(c.r[2], ld32((c.r[4].w[0])));
    set32(c.r[2], c.r[2].w[0] >> 8);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] & 1ull;  if (t) { goto L_001033EC; } }
L_001033E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001033E8u);  if (depth < kMaxDepth) unit_0000(c, 269u, depth + 1u); else { c.pc = 0x00102C98u; return; } if (c.pc != 0x001033E8u) [[unlikely]] return; }
L_001033E8:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001033EC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001033F8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[6].d[0] != c.r[2].d[0]; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_00103414; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] < c.r[5].d[0] ? 1ull : 0ull;  if (t) { goto L_00103420; } }
L_00103414:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010341Cu); c.r[6].d[0] = c.r[7].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 273u, depth + 1u); else { c.pc = 0x00102D08u; return; } if (c.pc != 0x0010341Cu) [[unlikely]] return; }
L_0010341C:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00103420:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00103430:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00103448u); st64((c.r[29].w[0]), c.r[16].d[0]);  if (depth < kMaxDepth) unit_0005(c, 85u, depth + 1u); else { c.pc = 0x00114960u; return; } if (c.pc != 0x00103448u) [[unlikely]] return; }
L_00103448:
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[2].d[0] = c.r[2].d[0] | 62752ull;
    set32(c.r[6], ld32((c.r[2].w[0])));
    c.r[3].d[0] = c.r[6].d[0] & c.r[4].d[0];
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);  if (t) { goto L_00103478; } }
    c.r[3].d[0] = c.r[6].d[0] | c.r[4].d[0];
    c.r[2].d[0] = c.r[2].d[0] | 62864ull;
    st32((c.r[2].w[0]), c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.budget -= 4;
L_00103478:
    c.r[4].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 57344ull;
    c.r[4].d[0] = c.r[4].d[0] | 65279ull;
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    set32(c.r[16], ld32((c.r[17].w[0])));
    c.r[3].d[0] = c.r[3].d[0] | 62864ull;
    c.r[4].d[0] = c.r[16].d[0] & c.r[4].d[0];
    st32((c.r[17].w[0]), c.r[4].w[0]);
    st32((c.r[3].w[0]), c.r[6].w[0]);
    c.budget -= 12;
    { const bool t = c.r[7].d[0] == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001034B4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001034B0u);  if (depth < kMaxDepth) unit_0005(c, 87u, depth + 1u); else { c.pc = 0x001149A8u; return; } if (c.pc != 0x001034B0u) [[unlikely]] return; }
L_001034B0:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_001034B4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001034C8:
    set32(c.r[2], ld32((c.r[4].w[0])));
    st32((c.r[4].w[0]), c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] >> 8);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[2].d[0] & 1ull;  c.pc = t; return; }
L_001034E0:
    st32((c.r[4].w[0]), c.r[5].w[0]);
    st32((c.r[4].w[0] + 8u), 0u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 4u), c.r[5].w[0]);  c.pc = t; return; }
L_001034F0:
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    st32((c.r[4].w[0] + 8u), 0u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0]), c.r[2].w[0]);  c.pc = t; return; }
L_00103500:
    set32(c.r[5], ld32((c.r[4].w[0])));
    c.r[2].d[0] = c.r[5].d[0] & 12ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[6], ld32((c.r[4].w[0] + 8u)));  if (t) { goto L_0010352C; } }
L_00103510:
    st32((c.r[5].w[0]), 0u);
    set32(c.r[5], c.r[5].w[0] + 4u);
    c.r[2].d[0] = c.r[5].d[0] & 12ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00103510u | kUnwind; return; } goto L_00103510; } }
L_0010352C:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull; set32(c.r[2], c.r[5].w[0] - c.r[6].w[0]);  if (t) { goto L_00103548; } }
    set32(c.r[3], ld32((c.r[6].w[0])));
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 4));
    set32(c.r[2], c.r[2].w[0] - 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[6].w[0]), c.r[3].w[0]);
    c.budget -= 5;
L_00103548:
    st32((c.r[4].w[0] + 8u), 0u);
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0]), c.r[5].w[0]);  c.pc = t; return; }
L_00103558:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 80u), c.r[21].d[0]);
    st64((c.r[29].w[0] + 64u), c.r[20].d[0]);
    c.r[21].d[0] = c.r[8].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[19].d[0]);
    c.r[20].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00103594u); c.r[16].d[0] = c.r[9].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 321u, depth + 1u); else { c.pc = 0x00103500u; return; } if (c.pc != 0x00103594u) [[unlikely]] return; }
L_00103594:
    set32(c.r[3], ld32((c.r[18].w[0])));
    c.r[16].d[0] = c.r[16].d[0] | c.r[19].d[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x9FFF0000u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    st32((c.r[3].w[0]), c.r[16].w[0]);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    set32(c.r[3], c.r[3].w[0] + 4u);
    c.r[17].d[0] = c.r[17].d[0] & c.r[2].d[0];
    set32(c.r[4], c.r[3].w[0] + 12u);
    st32((c.r[3].w[0]), c.r[17].w[0]);
    st32((c.r[18].w[0]), c.r[4].w[0]);
    st32((c.r[3].w[0] + 4u), c.r[20].w[0]);
    st32((c.r[3].w[0] + 8u), c.r[21].w[0]);
    c.r[21].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 21;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_001035E8:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 6;
L_00103600:
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00103614u); c.r[16].d[0] = c.r[7].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 321u, depth + 1u); else { c.pc = 0x00103500u; return; } if (c.pc != 0x00103614u) [[unlikely]] return; }
L_00103614:
    set32(c.r[3], ld32((c.r[17].w[0])));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[16].d[0] = c.r[16].d[0] | c.r[4].d[0];
    st32((c.r[17].w[0] + 8u), c.r[2].w[0]);
    st32((c.r[3].w[0]), c.r[16].w[0]);
    set32(c.r[3], c.r[3].w[0] + 4u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    set32(c.r[2], c.r[3].w[0] + 12u);
    st32((c.r[3].w[0] + 4u), c.r[18].w[0]);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.budget -= 10;
L_0010363C:
    st32((c.r[3].w[0] + 8u), c.r[19].w[0]);
    c.r[19].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    st32((c.r[3].w[0]), 0u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00103660:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 48u), c.r[19].d[0]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 80u), c.r[21].d[0]);
    st64((c.r[29].w[0] + 64u), c.r[20].d[0]);
    c.r[21].d[0] = c.r[8].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    c.r[20].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010369Cu); c.r[16].d[0] = c.r[9].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 321u, depth + 1u); else { c.pc = 0x00103500u; return; } if (c.pc != 0x0010369Cu) [[unlikely]] return; }
L_0010369C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x30000000u);
    set32(c.r[2], ld32((c.r[19].w[0])));
    c.r[17].d[0] = c.r[17].d[0] | c.r[4].d[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x9FFF0000u);
    c.r[16].d[0] = c.r[16].d[0] | c.r[17].d[0];
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    st32((c.r[2].w[0]), c.r[16].w[0]);
    c.r[18].d[0] = c.r[18].d[0] & c.r[3].d[0];
    set32(c.r[2], c.r[2].w[0] + 4u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    set32(c.r[3], c.r[2].w[0] + 12u);
    st32((c.r[2].w[0]), c.r[18].w[0]);
    st32((c.r[19].w[0]), c.r[3].w[0]);
    st32((c.r[2].w[0] + 4u), c.r[20].w[0]);
    st32((c.r[2].w[0] + 8u), c.r[21].w[0]);
    c.r[21].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 23;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_001036F8:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00103724u); c.r[16].d[0] = c.r[7].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 321u, depth + 1u); else { c.pc = 0x00103500u; return; } if (c.pc != 0x00103724u) [[unlikely]] return; }
L_00103724:
    set32(c.r[3], ld32((c.r[17].w[0])));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x70000000u);
    c.r[16].d[0] = c.r[16].d[0] | c.r[4].d[0];
    st32((c.r[17].w[0] + 8u), c.r[2].w[0]);
    st32((c.r[3].w[0]), c.r[16].w[0]);
    set32(c.r[3], c.r[3].w[0] + 4u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    set32(c.r[2], c.r[3].w[0] + 12u);
    st32((c.r[3].w[0] + 4u), c.r[18].w[0]);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    st32((c.r[3].w[0] + 8u), c.r[19].w[0]);
    c.r[19].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    st32((c.r[3].w[0]), 0u);
    c.budget -= 18;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00103770:
    set32(c.r[2], ld32((c.r[4].w[0])));
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[5], c.r[2].w[0] + c.r[5].w[0]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0]), c.r[5].w[0]);  c.pc = t; return; }
L_00103788:
    set32(c.r[2], ld32((c.r[4].w[0])));
    set32(c.r[3], c.r[2].w[0] + 16u);
    st128((c.r[2].w[0]) & ~15u, c.r[5]);
    st32((c.r[4].w[0]), c.r[3].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 12u), c.r[2].w[0]);  c.pc = t; return; }
L_001037A0:
    c.r[9].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[5], 0u + 2u);
    set32(c.r[8], ld32((c.r[9].w[0] + 12u)));
    set32(c.r[10], ld32((c.r[9].w[0])));
    c.r[7].d[0] = ld64((c.r[8].w[0]));
    set32(c.r[2], c.r[10].w[0] - c.r[8].w[0]);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 3));
    c.r[3].d[0] = c.r[7].d[0] >> 58;
    set32(c.r[6], c.r[2].w[0] - 2u);
    c.r[3].d[0] = c.r[3].d[0] & 3ull;
    set32(c.r[4], c.r[6].w[0] >> 1);
    c.r[2].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 14;
    { const bool t = c.r[3].d[0] == c.r[5].d[0]; if (c.r[2].d[0] != 0) c.r[6].d[0] = c.r[4].d[0];  if (t) { goto L_00103800; } }
    c.r[2].d[0] = c.r[7].d[0] >> 60;
    set32(c.r[4], 0u + 16u);
    if (c.r[2].d[0] == 0) c.r[2].d[0] = c.r[4].d[0];
    set32(c.r[3], c.r[6].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    if (c.r[2].d[0] == 0ull) { breakpoint(c, 0x001037ECu);  goto L_001037F0; }
L_001037F0:
    set32(c.r[3], c.r[3].w[0] - 1u);
    mmi::divu(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    c.r[6].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 4;
L_00103800:
    c.r[2].d[0] = c.r[6].d[0] << 32;
    c.r[5].d[0] = c.r[10].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] >> 32;
    st32((c.r[9].w[0] + 12u), 0u);
    c.r[2].d[0] = c.r[7].d[0] + c.r[2].d[0];
    c.r[3].d[0] = c.r[5].d[0] & 12ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull; st64((c.r[8].w[0]), c.r[2].d[0]);  if (t) { goto L_0010383C; } }
L_00103820:
    st32((c.r[5].w[0]), 0u);
    set32(c.r[5], c.r[5].w[0] + 4u);
    c.r[2].d[0] = c.r[5].d[0] & 12ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00103820u | kUnwind; return; } goto L_00103820; } }
L_0010383C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[9].w[0]), c.r[5].w[0]);  c.pc = t; return; }
L_00103840:
    st32((c.r[9].w[0]), c.r[5].w[0]);
    c.budget -= 1;
    c.pc = 0x00103844u; [[clang::musttail]] return dispatch(c, 0u, depth);
L_00103848:
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.r[5].d[0] = c.r[5].d[0] << 32;
    c.r[5].d[0] = c.r[5].d[0] >> 32;
    st64((c.r[2].w[0]), c.r[6].d[0]);
    set32(c.r[2], c.r[2].w[0] + 8u);
    st64((c.r[2].w[0]), c.r[5].d[0]);
    set32(c.r[2], c.r[2].w[0] + 8u);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0]), c.r[2].w[0]);  c.pc = t; return; }
L_00103870:
    ld128((c.r[5].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[5].w[0] + 16u) & ~15u, c.vu0.vf[5]);
    ld128((c.r[5].w[0] + 32u) & ~15u, c.vu0.vf[6]);
    ld128((c.r[5].w[0] + 48u) & ~15u, c.vu0.vf[7]);
    c.budget -= 4;
L_00103880:
    ld128((c.r[6].w[0]) & ~15u, c.vu0.vf[8]);
    vu::mulabc(c.vu0, 15u, 4u, c.vu0.vf[8].w[0]);
    vu::maddabc(c.vu0, 15u, 5u, c.vu0.vf[8].w[1]);
    vu::maddabc(c.vu0, 15u, 6u, c.vu0.vf[8].w[2]);
    vu::maddbc(c.vu0, 15u, 9u, 7u, c.vu0.vf[8].w[3]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; st128((c.r[4].w[0]) & ~15u, c.vu0.vf[9]);  c.pc = t; return; }
L_001038A0:
    ld128((c.r[5].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[5].w[0] + 16u) & ~15u, c.vu0.vf[5]);
    ld128((c.r[5].w[0] + 32u) & ~15u, c.vu0.vf[6]);
    ld128((c.r[5].w[0] + 48u) & ~15u, c.vu0.vf[7]);
    set32(c.r[7], 0u + 4u);
    c.budget -= 5;
L_001038B4:
    ld128((c.r[6].w[0]) & ~15u, c.vu0.vf[8]);
    vu::mulabc(c.vu0, 15u, 4u, c.vu0.vf[8].w[0]);
    vu::maddabc(c.vu0, 15u, 5u, c.vu0.vf[8].w[1]);
    c.budget -= 3;
L_001038C0:
    vu::maddabc(c.vu0, 15u, 6u, c.vu0.vf[8].w[2]);
    vu::maddbc(c.vu0, 15u, 9u, 7u, c.vu0.vf[8].w[3]);
    st128((c.r[4].w[0]) & ~15u, c.vu0.vf[9]);
    set32(c.r[7], c.r[7].w[0] - 1u);
    set32(c.r[6], c.r[6].w[0] + 16u);
    c.budget -= 7;
    { const bool t = 0ull != c.r[7].d[0]; set32(c.r[4], c.r[4].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001038B4u | kUnwind; return; } goto L_001038B4; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001038E8:
    ld128((c.r[5].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[6].w[0]) & ~15u, c.vu0.vf[5]);
    vu::opmula(c.vu0, 4u, 5u);
    vu::opmsub(c.vu0, 6u, 5u, 4u);
    vu::sub(c.vu0, 1u, 6u, 6u, 6u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; st128((c.r[4].w[0]) & ~15u, c.vu0.vf[6]);  c.pc = t; return; }
L_00103900:
    st128((c.r[4].w[0]) & ~15u, c.vu0.vf[6]);
    c.budget -= 1;
    c.pc = 0x00103904u; [[clang::musttail]] return dispatch(c, 0u, depth);
L_00103908:
    ld128((c.r[4].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[5].w[0]) & ~15u, c.vu0.vf[5]);
    vu::mul(c.vu0, 14u, 5u, 4u, 5u);
    vu::addbc(c.vu0, 8u, 5u, 5u, c.vu0.vf[5].w[1]);
    vu::addbc(c.vu0, 8u, 5u, 5u, c.vu0.vf[5].w[2]);
    c.r[2] = c.vu0.vf[5];
    c.f[0] = c.r[2].w[0];
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00103930:
    ld128((c.r[5].w[0]) & ~15u, c.vu0.vf[4]);
    vu::mul(c.vu0, 14u, 5u, 4u, 4u);
    vu::addbc(c.vu0, 8u, 5u, 5u, c.vu0.vf[5].w[1]);
    vu::addbc(c.vu0, 8u, 5u, 5u, c.vu0.vf[5].w[2]);
    c.budget -= 4;
L_00103940:
    vu::sqrt(c.vu0, c.vu0.vf[5].w[0]);
    vu::addbc(c.vu0, 8u, 5u, 0u, c.vu0.q);
    vu::div(c.vu0, c.vu0.vf[0].w[3], c.vu0.vf[5].w[0]);
    vu::sub(c.vu0, 15u, 6u, 0u, 0u);
    vu::mulbc(c.vu0, 14u, 6u, 4u, c.vu0.q);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; st128((c.r[4].w[0]) & ~15u, c.vu0.vf[6]);  c.pc = t; return; }
L_00103970:
    ld128((c.r[5].w[0]) & ~15u, c.r[8]);
    ld128((c.r[5].w[0] + 16u) & ~15u, c.r[9]);
    ld128((c.r[5].w[0] + 32u) & ~15u, c.r[10]);
    ld128((c.r[5].w[0] + 48u) & ~15u, c.r[11]);
    c.budget -= 4;
L_00103980:
    mmi::pextlw(c.r[12], c.r[9], c.r[8]);
    mmi::pextuw(c.r[13], c.r[9], c.r[8]);
    mmi::pextlw(c.r[14], c.r[11], c.r[10]);
    mmi::pextuw(c.r[15], c.r[11], c.r[10]);
    mmi::pcpyld(c.r[8], c.r[14], c.r[12]);
    mmi::pcpyud(c.r[9], c.r[12], c.r[14]);
    mmi::pcpyld(c.r[10], c.r[15], c.r[13]);
    mmi::pcpyud(c.r[11], c.r[13], c.r[15]);
    st128((c.r[4].w[0]) & ~15u, c.r[8]);
    st128((c.r[4].w[0] + 16u) & ~15u, c.r[9]);
    st128((c.r[4].w[0] + 32u) & ~15u, c.r[10]);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; st128((c.r[4].w[0] + 48u) & ~15u, c.r[11]);  c.pc = t; return; }
L_001039B8:
    ld128((c.r[5].w[0]) & ~15u, c.r[8]);
    ld128((c.r[5].w[0] + 16u) & ~15u, c.r[9]);
    ld128((c.r[5].w[0] + 32u) & ~15u, c.r[10]);
    ld128((c.r[5].w[0] + 48u) & ~15u, c.vu0.vf[4]);
    vu::move(c.vu0, 15u, 5u, 4u);
    vu::sub(c.vu0, 14u, 4u, 4u, 4u);
    vu::move(c.vu0, 15u, 9u, 4u);
    c.r[11] = c.vu0.vf[4];
    mmi::pextlw(c.r[12], c.r[9], c.r[8]);
    mmi::pextuw(c.r[13], c.r[9], c.r[8]);
    mmi::pextlw(c.r[14], c.r[11], c.r[10]);
    mmi::pextuw(c.r[15], c.r[11], c.r[10]);
    mmi::pcpyld(c.r[8], c.r[14], c.r[12]);
    mmi::pcpyud(c.r[9], c.r[12], c.r[14]);
    mmi::pcpyld(c.r[10], c.r[15], c.r[13]);
    c.vu0.vf[6] = c.r[8];
    c.vu0.vf[7] = c.r[9];
    c.vu0.vf[8] = c.r[10];
    vu::mulabc(c.vu0, 14u, 6u, c.vu0.vf[5].w[0]);
    vu::maddabc(c.vu0, 14u, 7u, c.vu0.vf[5].w[1]);
    vu::maddbc(c.vu0, 14u, 4u, 8u, c.vu0.vf[5].w[2]);
    vu::sub(c.vu0, 14u, 4u, 9u, 4u);
    st128((c.r[4].w[0]) & ~15u, c.r[8]);
    st128((c.r[4].w[0] + 16u) & ~15u, c.r[9]);
    st128((c.r[4].w[0] + 32u) & ~15u, c.r[10]);
    c.budget -= 27;
    { const std::uint32_t t = c.r[31].w[0]; st128((c.r[4].w[0] + 48u) & ~15u, c.vu0.vf[4]);  c.pc = t; return; }
L_00103A28:
    ld128((c.r[5].w[0]) & ~15u, c.vu0.vf[4]);
    set32(c.r[8], c.f[12]);
    c.vu0.vf[5] = c.r[8];
    vu::div(c.vu0, c.vu0.vf[0].w[3], c.vu0.vf[5].w[0]);
    vu::mulbc(c.vu0, 15u, 4u, 4u, c.vu0.q);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; st128((c.r[4].w[0]) & ~15u, c.vu0.vf[4]);  c.pc = t; return; }
L_00103A48:
    ld128((c.r[5].w[0]) & ~15u, c.vu0.vf[4]);
    set32(c.r[8], c.f[12]);
    c.vu0.vf[5] = c.r[8];
    vu::div(c.vu0, c.vu0.vf[0].w[3], c.vu0.vf[5].w[0]);
    vu::mulbc(c.vu0, 14u, 4u, 4u, c.vu0.q);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; st128((c.r[4].w[0]) & ~15u, c.vu0.vf[4]);  c.pc = t; return; }
L_00103A68:
    ld128((c.r[5].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[6].w[0]) & ~15u, c.vu0.vf[5]);
    set32(c.r[8], c.f[12]);
    c.vu0.vf[6] = c.r[8];
    vu::addbc(c.vu0, 8u, 7u, 0u, c.vu0.vf[0].w[3]);
    vu::sub(c.vu0, 8u, 8u, 7u, 6u);
    vu::mulabc(c.vu0, 15u, 4u, c.vu0.vf[6].w[0]);
    vu::maddbc(c.vu0, 15u, 9u, 5u, c.vu0.vf[8].w[0]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; st128((c.r[4].w[0]) & ~15u, c.vu0.vf[9]);  c.pc = t; return; }
L_00103A90:
    ld128((c.r[5].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[6].w[0]) & ~15u, c.vu0.vf[5]);
    vu::add(c.vu0, 15u, 6u, 4u, 5u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; st128((c.r[4].w[0]) & ~15u, c.vu0.vf[6]);  c.pc = t; return; }
L_00103AA8:
    ld128((c.r[5].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[6].w[0]) & ~15u, c.vu0.vf[5]);
    vu::sub(c.vu0, 15u, 6u, 4u, 5u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; st128((c.r[4].w[0]) & ~15u, c.vu0.vf[6]);  c.pc = t; return; }
L_00103AC0:
    ld128((c.r[5].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[6].w[0]) & ~15u, c.vu0.vf[5]);
    vu::mul(c.vu0, 15u, 6u, 4u, 5u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; st128((c.r[4].w[0]) & ~15u, c.vu0.vf[6]);  c.pc = t; return; }
L_00103AD8:
    ld128((c.r[5].w[0]) & ~15u, c.vu0.vf[4]);
    set32(c.r[8], c.f[12]);
    c.vu0.vf[5] = c.r[8];
    vu::mulbc(c.vu0, 15u, 6u, 4u, c.vu0.vf[5].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; st128((c.r[4].w[0]) & ~15u, c.vu0.vf[6]);  c.pc = t; return; }
L_00103AF0:
    ld128((c.r[6].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[5].w[0] + 48u) & ~15u, c.vu0.vf[5]);
    ld128((c.r[5].w[0]) & ~15u, c.r[7]);
    ld128((c.r[5].w[0] + 16u) & ~15u, c.r[8]);
    ld128((c.r[5].w[0] + 32u) & ~15u, c.r[9]);
    vu::add(c.vu0, 14u, 5u, 5u, 4u);
    st128((c.r[4].w[0]) & ~15u, c.r[7]);
    st128((c.r[4].w[0] + 16u) & ~15u, c.r[8]);
    st128((c.r[4].w[0] + 32u) & ~15u, c.r[9]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; st128((c.r[4].w[0] + 48u) & ~15u, c.vu0.vf[5]);  c.pc = t; return; }
L_00103B20:
    ld128((c.r[5].w[0]) & ~15u, c.r[6]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st128((c.r[4].w[0]) & ~15u, c.r[6]);  c.pc = t; return; }
L_00103B30:
    ld128((c.r[5].w[0]) & ~15u, c.r[6]);
    ld128((c.r[5].w[0] + 16u) & ~15u, c.r[7]);
    ld128((c.r[5].w[0] + 32u) & ~15u, c.r[8]);
    ld128((c.r[5].w[0] + 48u) & ~15u, c.r[9]);
    st128((c.r[4].w[0]) & ~15u, c.r[6]);
    st128((c.r[4].w[0] + 16u) & ~15u, c.r[7]);
    st128((c.r[4].w[0] + 32u) & ~15u, c.r[8]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; st128((c.r[4].w[0] + 48u) & ~15u, c.r[9]);  c.pc = t; return; }
L_00103B58:
    ld128((c.r[5].w[0]) & ~15u, c.vu0.vf[4]);
    vu::ftoi(c.vu0, 15u, 5u, 4u, 4);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st128((c.r[4].w[0]) & ~15u, c.vu0.vf[5]);  c.pc = t; return; }
L_00103B68:
    ld128((c.r[5].w[0]) & ~15u, c.vu0.vf[4]);
    vu::ftoi(c.vu0, 15u, 5u, 4u, 0);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st128((c.r[4].w[0]) & ~15u, c.vu0.vf[5]);  c.pc = t; return; }
L_00103B78:
    ld128((c.r[5].w[0]) & ~15u, c.vu0.vf[4]);
    vu::itof(c.vu0, 15u, 5u, 4u, 4);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st128((c.r[4].w[0]) & ~15u, c.vu0.vf[5]);  c.pc = t; return; }
L_00103B88:
    ld128((c.r[5].w[0]) & ~15u, c.vu0.vf[4]);
    vu::itof(c.vu0, 15u, 5u, 4u, 0);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st128((c.r[4].w[0]) & ~15u, c.vu0.vf[5]);  c.pc = t; return; }
L_00103B98:
    vu::sub(c.vu0, 15u, 4u, 0u, 0u);
    vu::add(c.vu0, 1u, 4u, 4u, 0u);
    vu::mr32(c.vu0, 15u, 5u, 4u);
    vu::mr32(c.vu0, 15u, 6u, 5u);
    vu::mr32(c.vu0, 15u, 7u, 6u);
    st128((c.r[4].w[0] + 48u) & ~15u, c.vu0.vf[4]);
    st128((c.r[4].w[0] + 32u) & ~15u, c.vu0.vf[5]);
    st128((c.r[4].w[0] + 16u) & ~15u, c.vu0.vf[6]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; st128((c.r[4].w[0]) & ~15u, c.vu0.vf[7]);  c.pc = t; return; }
L_00103BC0:
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00410000u);
    set32(c.r[8], c.r[8].w[0] - 23920u);
    ld128((c.r[8].w[0]) & ~15u, c.vu0.vf[5]);
    vu::mr32(c.vu0, 1u, 6u, 6u);
    vu::addbc(c.vu0, 8u, 4u, 0u, c.vu0.vf[6].w[0]);
    vu::mul(c.vu0, 8u, 6u, 6u, 6u);
    vu::mulbc(c.vu0, 7u, 4u, 4u, c.vu0.vf[0].w[0]);
    vu::mulbc(c.vu0, 15u, 8u, 5u, c.vu0.vf[6].w[3]);
    vu::sub(c.vu0, 15u, 5u, 0u, 0u);
    vu::mulbc(c.vu0, 15u, 8u, 8u, c.vu0.vf[6].w[0]);
    vu::mulbc(c.vu0, 14u, 8u, 8u, c.vu0.vf[6].w[0]);
    vu::addbc(c.vu0, 8u, 4u, 4u, c.vu0.vf[8].w[3]);
    vu::mulbc(c.vu0, 12u, 8u, 8u, c.vu0.vf[6].w[0]);
    vu::addbc(c.vu0, 8u, 4u, 4u, c.vu0.vf[8].w[2]);
    vu::mulbc(c.vu0, 8u, 8u, 8u, c.vu0.vf[6].w[0]);
    vu::addbc(c.vu0, 8u, 4u, 4u, c.vu0.vf[8].w[1]);
    vu::addbc(c.vu0, 8u, 4u, 4u, c.vu0.vf[8].w[0]);
    vu::addbc(c.vu0, 12u, 4u, 5u, c.vu0.vf[4].w[0]);
    vu::mul(c.vu0, 8u, 7u, 4u, 4u);
    vu::subbc(c.vu0, 1u, 7u, 0u, c.vu0.vf[7].w[0]);
    vu::sqrt(c.vu0, c.vu0.vf[7].w[3]);
    c.budget -= 24;
    { const bool t = c.r[7].d[0] != 0ull; vu::addbc(c.vu0, 8u, 7u, 0u, c.vu0.q);  if (t) { goto L_00103C28; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; vu::addbc(c.vu0, 8u, 4u, 5u, c.vu0.vf[7].w[0]);  if (t) { goto L_00103C2C; } }
L_00103C28:
    vu::subbc(c.vu0, 8u, 4u, 5u, c.vu0.vf[7].w[0]);
    c.budget -= 1;
L_00103C2C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00103C38:
    c.f[0] = 0u;
    c.budget -= 1;
L_00103C3C:
    fpu_compare(c, fp::key(c.f[12]) < fp::key(c.f[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3FC90000u);
    c.r[1].d[0] = c.r[1].d[0] | 4059ull;
    c.f[0] = c.r[1].w[0];
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00103C60; } }
    c.f[12] = fp::add(c.f[0], c.f[12]);
    c.budget -= 3;
    { set32(c.r[7], 0u + 1u);  goto L_00103C68; }
L_00103C60:
    c.f[12] = fp::sub(c.f[0], c.f[12]);
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_00103C68:
    set32(c.r[8], c.f[12]);
    c.vu0.vf[6] = c.r[8];
    c.r[6].d[0] = c.r[31].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00103C7Cu);  if (depth < kMaxDepth) unit_0000(c, 368u, depth + 1u); else { c.pc = 0x00103BC0u; return; } if (c.pc != 0x00103C7Cu) [[unlikely]] return; }
L_00103C7C:
    c.r[31].d[0] = c.r[6].d[0] + 0ull;
    vu::move(c.vu0, 15u, 6u, 5u);
    vu::move(c.vu0, 15u, 7u, 5u);
    vu::move(c.vu0, 15u, 9u, 0u);
    vu::sub(c.vu0, 14u, 9u, 9u, 9u);
    vu::mr32(c.vu0, 15u, 8u, 9u);
    vu::sub(c.vu0, 3u, 4u, 4u, 4u);
    vu::addbc(c.vu0, 4u, 6u, 5u, c.vu0.vf[4].w[0]);
    vu::addbc(c.vu0, 8u, 6u, 5u, c.vu0.vf[4].w[1]);
    vu::subbc(c.vu0, 8u, 7u, 5u, c.vu0.vf[4].w[0]);
    vu::addbc(c.vu0, 4u, 7u, 5u, c.vu0.vf[4].w[1]);
    set32(c.r[7], 0u + 4u);
    c.budget -= 12;
L_00103CAC:
    ld128((c.r[5].w[0]) & ~15u, c.vu0.vf[4]);
    vu::mulabc(c.vu0, 15u, 6u, c.vu0.vf[4].w[0]);
    vu::maddabc(c.vu0, 15u, 7u, c.vu0.vf[4].w[1]);
    vu::maddabc(c.vu0, 15u, 8u, c.vu0.vf[4].w[2]);
    vu::maddbc(c.vu0, 15u, 5u, 9u, c.vu0.vf[4].w[3]);
    st128((c.r[4].w[0]) & ~15u, c.vu0.vf[5]);
    set32(c.r[7], c.r[7].w[0] - 1u);
    set32(c.r[5], c.r[5].w[0] + 16u);
    c.budget -= 10;
    { const bool t = 0ull != c.r[7].d[0]; set32(c.r[4], c.r[4].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00103CACu | kUnwind; return; } goto L_00103CAC; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00103CE0:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[12]) < fp::key(c.f[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3FC90000u);
    c.r[1].d[0] = c.r[1].d[0] | 4059ull;
    c.f[0] = c.r[1].w[0];
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00103D08; } }
    c.f[12] = fp::add(c.f[0], c.f[12]);
    c.budget -= 3;
    { set32(c.r[7], 0u + 1u);  goto L_00103D10; }
L_00103D08:
    c.f[12] = fp::sub(c.f[0], c.f[12]);
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_00103D10:
    set32(c.r[8], c.f[12]);
    c.vu0.vf[6] = c.r[8];
    c.r[6].d[0] = c.r[31].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00103D24u);  if (depth < kMaxDepth) unit_0000(c, 368u, depth + 1u); else { c.pc = 0x00103BC0u; return; } if (c.pc != 0x00103D24u) [[unlikely]] return; }
L_00103D24:
    c.r[31].d[0] = c.r[6].d[0] + 0ull;
    vu::move(c.vu0, 15u, 6u, 5u);
    vu::move(c.vu0, 15u, 7u, 5u);
    vu::move(c.vu0, 15u, 8u, 5u);
    vu::move(c.vu0, 15u, 9u, 5u);
    vu::addbc(c.vu0, 8u, 6u, 5u, c.vu0.vf[0].w[3]);
    vu::addbc(c.vu0, 1u, 9u, 5u, c.vu0.vf[0].w[3]);
    vu::sub(c.vu0, 3u, 4u, 4u, 4u);
    vu::addbc(c.vu0, 2u, 7u, 5u, c.vu0.vf[4].w[0]);
    vu::addbc(c.vu0, 4u, 7u, 5u, c.vu0.vf[4].w[1]);
    vu::subbc(c.vu0, 4u, 8u, 5u, c.vu0.vf[4].w[0]);
    vu::addbc(c.vu0, 2u, 8u, 5u, c.vu0.vf[4].w[1]);
    set32(c.r[7], 0u + 4u);
    c.budget -= 13;
L_00103D58:
    ld128((c.r[5].w[0]) & ~15u, c.vu0.vf[4]);
    vu::mulabc(c.vu0, 15u, 6u, c.vu0.vf[4].w[0]);
    vu::maddabc(c.vu0, 15u, 7u, c.vu0.vf[4].w[1]);
    vu::maddabc(c.vu0, 15u, 8u, c.vu0.vf[4].w[2]);
    vu::maddbc(c.vu0, 15u, 5u, 9u, c.vu0.vf[4].w[3]);
    st128((c.r[4].w[0]) & ~15u, c.vu0.vf[5]);
    set32(c.r[7], c.r[7].w[0] - 1u);
    set32(c.r[5], c.r[5].w[0] + 16u);
    c.budget -= 10;
    { const bool t = 0ull != c.r[7].d[0]; set32(c.r[4], c.r[4].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00103D58u | kUnwind; return; } goto L_00103D58; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00103D88:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[12]) < fp::key(c.f[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3FC90000u);
    c.r[1].d[0] = c.r[1].d[0] | 4059ull;
    c.f[0] = c.r[1].w[0];
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00103DB0; } }
    c.f[12] = fp::add(c.f[0], c.f[12]);
    c.budget -= 3;
    { set32(c.r[7], 0u + 1u);  goto L_00103DB8; }
L_00103DB0:
    c.f[12] = fp::sub(c.f[0], c.f[12]);
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_00103DB8:
    set32(c.r[8], c.f[12]);
    c.vu0.vf[6] = c.r[8];
    c.r[6].d[0] = c.r[31].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00103DCCu);  if (depth < kMaxDepth) unit_0000(c, 368u, depth + 1u); else { c.pc = 0x00103BC0u; return; } if (c.pc != 0x00103DCCu) [[unlikely]] return; }
L_00103DCC:
    c.r[31].d[0] = c.r[6].d[0] + 0ull;
    vu::move(c.vu0, 15u, 6u, 5u);
    vu::move(c.vu0, 15u, 7u, 5u);
    vu::move(c.vu0, 15u, 8u, 5u);
    vu::move(c.vu0, 15u, 9u, 5u);
    vu::addbc(c.vu0, 4u, 7u, 5u, c.vu0.vf[0].w[3]);
    vu::addbc(c.vu0, 1u, 9u, 5u, c.vu0.vf[0].w[3]);
    vu::sub(c.vu0, 3u, 4u, 4u, 4u);
    vu::subbc(c.vu0, 2u, 6u, 5u, c.vu0.vf[4].w[0]);
    vu::addbc(c.vu0, 8u, 6u, 5u, c.vu0.vf[4].w[1]);
    vu::addbc(c.vu0, 8u, 8u, 5u, c.vu0.vf[4].w[0]);
    vu::addbc(c.vu0, 2u, 8u, 5u, c.vu0.vf[4].w[1]);
    set32(c.r[7], 0u + 4u);
    c.budget -= 13;
L_00103E00:
    ld128((c.r[5].w[0]) & ~15u, c.vu0.vf[4]);
    vu::mulabc(c.vu0, 15u, 6u, c.vu0.vf[4].w[0]);
    vu::maddabc(c.vu0, 15u, 7u, c.vu0.vf[4].w[1]);
    vu::maddabc(c.vu0, 15u, 8u, c.vu0.vf[4].w[2]);
    vu::maddbc(c.vu0, 15u, 5u, 9u, c.vu0.vf[4].w[3]);
    st128((c.r[4].w[0]) & ~15u, c.vu0.vf[5]);
    set32(c.r[7], c.r[7].w[0] - 1u);
    set32(c.r[5], c.r[5].w[0] + 16u);
    c.budget -= 10;
    { const bool t = 0ull != c.r[7].d[0]; set32(c.r[4], c.r[4].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00103E00u | kUnwind; return; } goto L_00103E00; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00103E30:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00103E50u); c.f[12] = ld32((c.r[17].w[0] + 8u));  if (depth < kMaxDepth) unit_0000(c, 369u, depth + 1u); else { c.pc = 0x00103C38u; return; } if (c.pc != 0x00103E50u) [[unlikely]] return; }
L_00103E50:
    c.f[12] = ld32((c.r[17].w[0] + 4u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00103E60u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 376u, depth + 1u); else { c.pc = 0x00103D88u; return; } if (c.pc != 0x00103E60u) [[unlikely]] return; }
L_00103E60:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = ld32((c.r[17].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 8;
    { set32(c.r[29], c.r[29].w[0] + 48u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00103CE0u | kUnwind; return; } goto L_00103CE0; }
L_00103E80:
    set32(c.r[8], c.f[12]);
    set32(c.r[9], c.f[13]);
    ld128((c.r[5].w[0]) & ~15u, c.vu0.vf[6]);
    c.vu0.vf[4] = c.r[8];
    c.vu0.vf[5] = c.r[9];
    vu::maxbc(c.vu0, 15u, 6u, 6u, c.vu0.vf[4].w[0]);
    vu::minibc(c.vu0, 15u, 6u, 6u, c.vu0.vf[5].w[0]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; st128((c.r[4].w[0]) & ~15u, c.vu0.vf[6]);  c.pc = t; return; }
L_00103EA8:
    set32(c.r[29], c.r[29].w[0] - 176u);
    st64((c.r[29].w[0] + 144u), c.r[20].d[0]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 128u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 112u), c.r[18].d[0]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 96u), c.r[17].d[0]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    c.r[17].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 80u), c.r[16].d[0]);
    st64((c.r[29].w[0] + 160u), c.r[31].d[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00103EDCu); c.r[4].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 367u, depth + 1u); else { c.pc = 0x00103B98u; return; } if (c.pc != 0x00103EDCu) [[unlikely]] return; }
L_00103EDC:
    set32(c.r[16], c.r[29].w[0] + 64u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00103EF0u); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 345u, depth + 1u); else { c.pc = 0x001038E8u; return; } if (c.pc != 0x00103EF0u) [[unlikely]] return; }
L_00103EF0:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00103EFCu); c.r[4].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 348u, depth + 1u); else { c.pc = 0x00103930u; return; } if (c.pc != 0x00103EFCu) [[unlikely]] return; }
L_00103EFC:
    set32(c.r[16], c.r[29].w[0] + 32u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00103F0Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 348u, depth + 1u); else { c.pc = 0x00103930u; return; } if (c.pc != 0x00103F0Cu) [[unlikely]] return; }
L_00103F0C:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00103F1Cu); c.r[6].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 345u, depth + 1u); else { c.pc = 0x001038E8u; return; } if (c.pc != 0x00103F1Cu) [[unlikely]] return; }
L_00103F1C:
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00103F2Cu); c.r[5].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 360u, depth + 1u); else { c.pc = 0x00103AF0u; return; } if (c.pc != 0x00103F2Cu) [[unlikely]] return; }
L_00103F2C:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00103F38u); c.r[5].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 352u, depth + 1u); else { c.pc = 0x001039B8u; return; } if (c.pc != 0x00103F38u) [[unlikely]] return; }
L_00103F38:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 160u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 144u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 128u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 112u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 96u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 80u));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 176u);  c.pc = t; return; }
L_00103F58:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st32((c.r[29].w[0] + 80u), c.f[20]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[20] = c.r[1].w[0];
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[17].d[0]);
    c.r[18].d[0] = c.r[7].d[0] + 0ull;
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.f[12] = c.f[20];
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00103F90u); c.r[4].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 359u, depth + 1u); else { c.pc = 0x00103AD8u; return; } if (c.pc != 0x00103F90u) [[unlikely]] return; }
L_00103F90:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00103F9Cu); c.r[5].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 348u, depth + 1u); else { c.pc = 0x00103930u; return; } if (c.pc != 0x00103F9Cu) [[unlikely]] return; }
L_00103F9C:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.f[12] = c.f[20];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00103FACu); c.r[4].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 359u, depth + 1u); else { c.pc = 0x00103AD8u; return; } if (c.pc != 0x00103FACu) [[unlikely]] return; }
L_00103FAC:
    set32(c.r[4], c.r[16].w[0] + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00103FB8u); c.r[5].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 348u, depth + 1u); else { c.pc = 0x00103930u; return; } if (c.pc != 0x00103FB8u) [[unlikely]] return; }
L_00103FB8:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.f[12] = c.f[20];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00103FC8u); c.r[4].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 359u, depth + 1u); else { c.pc = 0x00103AD8u; return; } if (c.pc != 0x00103FC8u) [[unlikely]] return; }
L_00103FC8:
    set32(c.r[4], c.r[16].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00103FD4u); c.r[5].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 348u, depth + 1u); else { c.pc = 0x00103930u; return; } if (c.pc != 0x00103FD4u) [[unlikely]] return; }
L_00103FD4:
    c.f[0] = 0u;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[1].w[0];
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[16].w[0] + 48u), c.f[0]);
    st32((c.r[16].w[0] + 60u), c.f[1]);
    st32((c.r[16].w[0] + 56u), c.f[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00103FFCu); st32((c.r[16].w[0] + 52u), c.f[0]);  if (depth < kMaxDepth) unit_0000(c, 350u, depth + 1u); else { c.pc = 0x00103970u; return; } if (c.pc != 0x00103FFCu) [[unlikely]] return; }
L_00103FFC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
    [[clang::musttail]] return unit_0001(c, 1u, depth);
}

}
