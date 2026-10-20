#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_00B4[4096] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 3, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 19, 0, 0, 20, 0, 21, 0, 22, 0, 23, 0, 24, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 28, 0, 29, 0, 0, 0, 0, 30, 0, 0, 0, 0, 31, 0, 0, 0, 0, 32,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0,
    0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 39, 0,
    0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 51, 0, 0, 0,
    52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0,
    56, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 0, 0, 0, 59, 0,
    60, 0, 61, 0, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 65, 0,
    0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    69, 0, 0, 0, 0, 0, 0, 0, 70, 0, 71, 0, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0,
    0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0, 81, 0, 82, 0, 0, 0, 0, 83, 0, 0, 0, 0, 84, 0, 85, 0, 0, 0, 0, 0,
    86, 0, 0, 0, 0, 0, 0, 0, 87, 0, 88, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 89, 90, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0,
    93, 0, 0, 0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 96, 0, 0,
    0, 0, 97, 0, 98, 0, 99, 0, 0, 0, 100, 0, 101, 0, 0, 0, 0, 102, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 104, 0,
    105, 0, 0, 0, 0, 106, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 109, 0, 0, 0, 0, 110, 0, 0, 0,
    0, 0, 111, 0, 0, 0, 0, 0, 112, 0, 0, 0, 113, 0, 0, 0, 114, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 116, 0, 0, 0,
    117, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0, 121, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 124, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 126, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0,
    0, 0, 129, 0, 130, 0, 0, 0, 131, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 134, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 141, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 142, 0,
    0, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 145,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 146, 0, 147, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 148, 0, 149, 0,
    150, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0,
    154, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 156, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 0, 0, 0, 158, 0,
    0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 160, 0, 161, 0, 0, 0, 0, 0, 0, 0, 162, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0,
    165, 0, 166, 0, 0, 0, 167, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    173, 0, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 177, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    179, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 183, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 185, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 186, 0, 187, 0, 0, 0, 0, 0, 0, 0, 0, 188, 0, 189, 0, 190, 0, 191, 0,
    0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 195, 0,
    0, 0, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 197, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 199, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0,
    0, 0, 202, 0, 203, 0, 0, 0, 204, 0, 0, 0, 0, 0, 0, 0, 205, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 206, 0, 0, 0, 0, 0, 0, 0, 0, 0, 207, 0, 0, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 0, 0, 209, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 210, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 211, 0, 0, 0,
    0, 0, 212, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 213, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 0, 0, 0, 215, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 217, 0, 0, 0, 0, 0, 218, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 219, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 220, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 221, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 222, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 223, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    224, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 225, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 226, 0, 0, 0, 0, 0, 227, 0, 0, 0, 0, 0, 0, 0, 0, 0, 228, 0, 0, 0, 229, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 230, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 231, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    232, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 233, 0, 0, 0, 0, 0, 0, 0, 0, 0, 234, 0, 0, 0, 235, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 236, 0, 0, 0, 0, 0, 0, 0, 237, 0, 0, 0, 0, 0, 238, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 239, 0, 0, 0, 240, 0, 0, 0, 241, 0, 0, 0, 0, 0, 0, 0, 0, 242, 0, 0, 0, 0, 0, 243, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 244, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 245, 0, 0, 0, 0, 0, 246, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 247, 0, 0, 0, 0, 248, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    249, 0, 0, 0, 0, 0, 250, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 251, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 252,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 253, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 254, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 256, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 257, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 258, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 259, 0, 0, 0, 0, 260, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 261, 0, 0, 0, 0, 0, 0, 0, 262, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 263, 0, 0, 0, 0, 0, 0,
    264, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 265, 0, 0, 0, 0, 0, 266, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    267, 0, 0, 0, 268, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 269, 0, 0, 0, 0, 0, 0, 0, 0, 270, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 271, 0, 272, 0, 0, 0, 0, 0, 0, 0, 273, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 274, 0, 0, 0, 0, 0, 0, 0, 0, 275, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 276, 0, 0, 0,
    0, 0, 277, 0, 0, 0, 0, 0, 0, 0, 0, 0, 278, 0, 279, 0, 0, 0, 0, 0, 0, 0, 0, 0, 280, 0, 0, 0, 0, 0, 0, 0,
    281, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 282, 0, 283, 0, 0, 0, 0, 0, 0, 0, 284, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 285, 0, 0, 0, 0, 0, 0, 0, 0, 286, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 287, 0, 0, 0, 0, 0, 288, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 289, 0,
    290, 0, 0, 0, 0, 0, 0, 0, 0, 0, 291, 0, 0, 0, 0, 292, 293, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 294, 0, 0, 0, 0, 295, 296, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 297, 0, 0, 0, 0, 298, 0, 0,
    0, 0, 0, 299, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 300, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 301, 0, 0,
    0, 0, 0, 0, 0, 302, 0, 0, 0, 0, 0, 0, 0, 0, 303, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 304, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 305, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 306, 0, 0, 0, 0,
    307, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 308, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 309, 0, 0, 0, 0, 0, 310, 0,
    0, 0, 311, 0, 0, 0, 0, 0, 0, 0, 0, 0, 312, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 313, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 314, 0, 0, 0, 0, 315, 0, 0, 0, 0, 0, 316, 0,
    0, 0, 0, 0, 317, 0, 0, 0, 0, 0, 318, 0, 0, 0, 0, 0, 319, 0, 0, 0, 0, 0, 320, 0, 0, 0, 0, 0, 321, 0, 0, 0,
    0, 0, 322, 0, 0, 0, 0, 0, 323, 0, 0, 0, 0, 0, 324, 0, 0, 0, 0, 0, 325, 0, 0, 0, 0, 0, 326, 0, 0, 0, 0, 0,
    327, 0, 0, 0, 0, 0, 328, 0, 0, 0, 329, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 330, 0, 0, 0, 331, 0, 0, 0, 0, 0, 0, 332, 0, 0, 0, 0, 333, 0, 0, 0, 0, 0, 0, 0, 0, 334, 0, 0,
    0, 0, 0, 0, 335, 0, 0, 0, 336, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 337, 0, 0, 0, 338, 0, 0, 0, 0, 0, 0, 339, 0,
    0, 0, 0, 0, 340, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 341, 0, 0, 0, 0, 0, 0, 0, 342, 0, 0, 0, 0, 0, 343, 0,
    0, 0, 0, 0, 0, 0, 0, 344, 0, 0, 0, 0, 0, 0, 0, 0, 345, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 346, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 347, 0, 348, 0, 0, 0, 0, 0, 349, 0, 350,
    0, 0, 351, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 352, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 353, 0, 0, 0, 0, 0, 0,
    0, 0, 354, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 355, 0, 356, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 357, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 358, 0, 359, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    360, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 361, 0, 0, 0, 0, 0, 0, 362, 0, 363, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 364, 0, 0, 0, 0, 0, 0, 0, 0, 0, 365, 0, 0, 0, 0, 0, 0, 0, 0, 366, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 367, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 368, 0, 0, 0, 369, 0, 0, 0, 0, 0, 0, 370, 0, 0,
    0, 0, 0, 0, 0, 0, 371, 0, 0, 0, 0, 0, 372, 0, 0, 0, 0, 0, 373, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 374, 0, 0, 0, 0, 0, 375, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 376, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 377, 0, 0, 0, 0, 0, 0, 378, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 379, 0, 0, 0, 0, 0, 0, 0, 0, 380, 0, 0, 0, 0, 0, 381, 0, 0, 0, 0, 0, 382, 0, 0, 0, 0, 0,
    383, 0, 0, 0, 0, 0, 384, 0, 0, 0, 0, 0, 385, 0, 0, 0, 0, 0, 386, 0, 0, 0, 0, 0, 387, 0, 0, 0, 0, 0, 388, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 389, 0, 0, 0, 0, 0, 0, 390, 0, 0, 0, 0, 391, 0, 0, 0, 0, 392, 0, 0, 393, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 394, 0, 0, 0, 0, 0, 0, 0, 0, 395, 0, 0, 0, 0, 0, 0, 396, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 397, 0, 0, 0, 0, 0, 0, 0, 0, 0, 398, 0, 0, 0, 0, 0, 0, 0, 0, 399, 0, 0, 0, 0, 400, 0, 0, 0,
    0, 0, 401, 0, 0, 0, 0, 0, 402, 0, 0, 0, 0, 0, 0, 0, 0, 0, 403, 0, 0, 0, 0, 0, 404, 0, 0, 0, 0, 0, 0, 0,
    405, 0, 0, 0, 0, 0, 406, 0, 407, 0, 0, 0, 408, 0, 0, 0, 0, 409, 0, 0, 0, 0, 410, 0, 0, 0, 411, 0, 0, 0, 412, 0,
    413, 0, 414, 0, 415, 0, 416, 0, 417, 0, 418, 0, 419, 0, 420, 0, 421, 0, 422, 0, 423, 0, 424, 0, 425, 0, 426, 0, 427, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 428, 0, 0, 0, 429, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_00B4(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_003D0000;
    case 2u: goto L_003D0034;
    case 3u: goto L_003D004C;
    case 4u: goto L_003D0050;
    case 5u: goto L_003D0080;
    case 6u: goto L_003D00D0;
    case 7u: goto L_003D00D4;
    case 8u: goto L_003D0110;
    case 9u: goto L_003D0134;
    case 10u: goto L_003D0140;
    case 11u: goto L_003D0168;
    case 12u: goto L_003D0190;
    case 13u: goto L_003D01CC;
    case 14u: goto L_003D01E8;
    case 15u: goto L_003D021C;
    case 16u: goto L_003D0230;
    case 17u: goto L_003D0268;
    case 18u: goto L_003D02A8;
    case 19u: goto L_003D02BC;
    case 20u: goto L_003D02C8;
    case 21u: goto L_003D02D0;
    case 22u: goto L_003D02D8;
    case 23u: goto L_003D02E0;
    case 24u: goto L_003D02E8;
    case 25u: goto L_003D0318;
    case 26u: goto L_003D0360;
    case 27u: goto L_003D03A4;
    case 28u: goto L_003D03B8;
    case 29u: goto L_003D03C0;
    case 30u: goto L_003D03D4;
    case 31u: goto L_003D03E8;
    case 32u: goto L_003D03FC;
    case 33u: goto L_003D0438;
    case 34u: goto L_003D0470;
    case 35u: goto L_003D0484;
    case 36u: goto L_003D04A8;
    case 37u: goto L_003D04C4;
    case 38u: goto L_003D04E0;
    case 39u: goto L_003D04F8;
    case 40u: goto L_003D050C;
    case 41u: goto L_003D0530;
    case 42u: goto L_003D0544;
    case 43u: goto L_003D0578;
    case 44u: goto L_003D05D0;
    case 45u: goto L_003D0610;
    case 46u: goto L_003D0628;
    case 47u: goto L_003D0668;
    case 48u: goto L_003D0698;
    case 49u: goto L_003D06A8;
    case 50u: goto L_003D06DC;
    case 51u: goto L_003D06F0;
    case 52u: goto L_003D0700;
    case 53u: goto L_003D0730;
    case 54u: goto L_003D0750;
    case 55u: goto L_003D0768;
    case 56u: goto L_003D0780;
    case 57u: goto L_003D07C0;
    case 58u: goto L_003D07D0;
    case 59u: goto L_003D07F8;
    case 60u: goto L_003D0800;
    case 61u: goto L_003D0808;
    case 62u: goto L_003D0828;
    case 63u: goto L_003D0848;
    case 64u: goto L_003D0858;
    case 65u: goto L_003D0878;
    case 66u: goto L_003D0898;
    case 67u: goto L_003D08B8;
    case 68u: goto L_003D08D0;
    case 69u: goto L_003D0900;
    case 70u: goto L_003D0920;
    case 71u: goto L_003D0928;
    case 72u: goto L_003D0948;
    case 73u: goto L_003D0998;
    case 74u: goto L_003D09B8;
    case 75u: goto L_003D09D4;
    case 76u: goto L_003D09F8;
    case 77u: goto L_003D0A10;
    case 78u: goto L_003D0A4C;
    case 79u: goto L_003D0A5C;
    case 80u: goto L_003D0A90;
    case 81u: goto L_003D0AB0;
    case 82u: goto L_003D0AB8;
    case 83u: goto L_003D0ACC;
    case 84u: goto L_003D0AE0;
    case 85u: goto L_003D0AE8;
    case 86u: goto L_003D0B00;
    case 87u: goto L_003D0B20;
    case 88u: goto L_003D0B28;
    case 89u: goto L_003D0B5C;
    case 90u: goto L_003D0B60;
    case 91u: goto L_003D0BB0;
    case 92u: goto L_003D0BE0;
    case 93u: goto L_003D0C00;
    case 94u: goto L_003D0C28;
    case 95u: goto L_003D0C60;
    case 96u: goto L_003D0C74;
    case 97u: goto L_003D0C88;
    case 98u: goto L_003D0C90;
    case 99u: goto L_003D0C98;
    case 100u: goto L_003D0CA8;
    case 101u: goto L_003D0CB0;
    case 102u: goto L_003D0CC4;
    case 103u: goto L_003D0CD8;
    case 104u: goto L_003D0CF8;
    case 105u: goto L_003D0D00;
    case 106u: goto L_003D0D14;
    case 107u: goto L_003D0D28;
    case 108u: goto L_003D0D48;
    case 109u: goto L_003D0D5C;
    case 110u: goto L_003D0D70;
    case 111u: goto L_003D0D88;
    case 112u: goto L_003D0DA0;
    case 113u: goto L_003D0DB0;
    case 114u: goto L_003D0DC0;
    case 115u: goto L_003D0DD8;
    case 116u: goto L_003D0DF0;
    case 117u: goto L_003D0E00;
    case 118u: goto L_003D0E18;
    case 119u: goto L_003D0E30;
    case 120u: goto L_003D0E48;
    case 121u: goto L_003D0E68;
    case 122u: goto L_003D0E98;
    case 123u: goto L_003D0EB8;
    case 124u: goto L_003D0F08;
    case 125u: goto L_003D0F38;
    case 126u: goto L_003D0FBC;
    case 127u: goto L_003D0FD0;
    case 128u: goto L_003D0FF0;
    case 129u: goto L_003D1008;
    case 130u: goto L_003D1010;
    case 131u: goto L_003D1020;
    case 132u: goto L_003D1030;
    case 133u: goto L_003D1068;
    case 134u: goto L_003D1078;
    case 135u: goto L_003D10A4;
    case 136u: goto L_003D1118;
    case 137u: goto L_003D1138;
    case 138u: goto L_003D1174;
    case 139u: goto L_003D11A0;
    case 140u: goto L_003D11D0;
    case 141u: goto L_003D120C;
    case 142u: goto L_003D1278;
    case 143u: goto L_003D1298;
    case 144u: goto L_003D12C8;
    case 145u: goto L_003D12FC;
    case 146u: goto L_003D133C;
    case 147u: goto L_003D1344;
    case 148u: goto L_003D1370;
    case 149u: goto L_003D1378;
    case 150u: goto L_003D1380;
    case 151u: goto L_003D13A0;
    case 152u: goto L_003D13BC;
    case 153u: goto L_003D13E4;
    case 154u: goto L_003D1400;
    case 155u: goto L_003D1410;
    case 156u: goto L_003D1440;
    case 157u: goto L_003D1450;
    case 158u: goto L_003D1478;
    case 159u: goto L_003D1498;
    case 160u: goto L_003D1518;
    case 161u: goto L_003D1520;
    case 162u: goto L_003D1540;
    case 163u: goto L_003D1554;
    case 164u: goto L_003D156C;
    case 165u: goto L_003D1580;
    case 166u: goto L_003D1588;
    case 167u: goto L_003D1598;
    case 168u: goto L_003D15AC;
    case 169u: goto L_003D15E0;
    case 170u: goto L_003D161C;
    case 171u: goto L_003D1630;
    case 172u: goto L_003D165C;
    case 173u: goto L_003D1780;
    case 174u: goto L_003D17A0;
    case 175u: goto L_003D17DC;
    case 176u: goto L_003D1830;
    case 177u: goto L_003D1870;
    case 178u: goto L_003D18D0;
    case 179u: goto L_003D1900;
    case 180u: goto L_003D193C;
    case 181u: goto L_003D19B4;
    case 182u: goto L_003D1A3C;
    case 183u: goto L_003D1A68;
    case 184u: goto L_003D1A98;
    case 185u: goto L_003D1AC4;
    case 186u: goto L_003D1B34;
    case 187u: goto L_003D1B3C;
    case 188u: goto L_003D1B60;
    case 189u: goto L_003D1B68;
    case 190u: goto L_003D1B70;
    case 191u: goto L_003D1B78;
    case 192u: goto L_003D1B90;
    case 193u: goto L_003D1BA8;
    case 194u: goto L_003D1BC8;
    case 195u: goto L_003D1BF8;
    case 196u: goto L_003D1C18;
    case 197u: goto L_003D1C68;
    case 198u: goto L_003D1CA0;
    case 199u: goto L_003D1D38;
    case 200u: goto L_003D1D50;
    case 201u: goto L_003D1D70;
    case 202u: goto L_003D1D88;
    case 203u: goto L_003D1D90;
    case 204u: goto L_003D1DA0;
    case 205u: goto L_003D1DC0;
    case 206u: goto L_003D1E08;
    case 207u: goto L_003D1E30;
    case 208u: goto L_003D1E58;
    case 209u: goto L_003D1E78;
    case 210u: goto L_003D1EA8;
    case 211u: goto L_003D1EF0;
    case 212u: goto L_003D1F08;
    case 213u: goto L_003D1F8C;
    case 214u: goto L_003D1FC0;
    case 215u: goto L_003D1FE0;
    case 216u: goto L_003D2020;
    case 217u: goto L_003D2048;
    case 218u: goto L_003D2060;
    case 219u: goto L_003D20E0;
    case 220u: goto L_003D2138;
    case 221u: goto L_003D2178;
    case 222u: goto L_003D21A0;
    case 223u: goto L_003D2214;
    case 224u: goto L_003D2280;
    case 225u: goto L_003D22B8;
    case 226u: goto L_003D2310;
    case 227u: goto L_003D2328;
    case 228u: goto L_003D2350;
    case 229u: goto L_003D2360;
    case 230u: goto L_003D2388;
    case 231u: goto L_003D23E8;
    case 232u: goto L_003D2480;
    case 233u: goto L_003D2530;
    case 234u: goto L_003D2558;
    case 235u: goto L_003D2568;
    case 236u: goto L_003D2590;
    case 237u: goto L_003D25B0;
    case 238u: goto L_003D25C8;
    case 239u: goto L_003D2610;
    case 240u: goto L_003D2620;
    case 241u: goto L_003D2630;
    case 242u: goto L_003D2654;
    case 243u: goto L_003D266C;
    case 244u: goto L_003D2698;
    case 245u: goto L_003D26D8;
    case 246u: goto L_003D26F0;
    case 247u: goto L_003D272C;
    case 248u: goto L_003D2740;
    case 249u: goto L_003D2780;
    case 250u: goto L_003D2798;
    case 251u: goto L_003D27C8;
    case 252u: goto L_003D27FC;
    case 253u: goto L_003D2838;
    case 254u: goto L_003D2868;
    case 255u: goto L_003D28B0;
    case 256u: goto L_003D28D8;
    case 257u: goto L_003D2928;
    case 258u: goto L_003D2978;
    case 259u: goto L_003D29B4;
    case 260u: goto L_003D29C8;
    case 261u: goto L_003D2A10;
    case 262u: goto L_003D2A30;
    case 263u: goto L_003D2A64;
    case 264u: goto L_003D2A80;
    case 265u: goto L_003D2AC0;
    case 266u: goto L_003D2AD8;
    case 267u: goto L_003D2B00;
    case 268u: goto L_003D2B10;
    case 269u: goto L_003D2B3C;
    case 270u: goto L_003D2B60;
    case 271u: goto L_003D2BA0;
    case 272u: goto L_003D2BA8;
    case 273u: goto L_003D2BC8;
    case 274u: goto L_003D2C1C;
    case 275u: goto L_003D2C40;
    case 276u: goto L_003D2C70;
    case 277u: goto L_003D2C88;
    case 278u: goto L_003D2CB0;
    case 279u: goto L_003D2CB8;
    case 280u: goto L_003D2CE0;
    case 281u: goto L_003D2D00;
    case 282u: goto L_003D2D40;
    case 283u: goto L_003D2D48;
    case 284u: goto L_003D2D68;
    case 285u: goto L_003D2DBC;
    case 286u: goto L_003D2DE0;
    case 287u: goto L_003D2E10;
    case 288u: goto L_003D2E28;
    case 289u: goto L_003D2E78;
    case 290u: goto L_003D2E80;
    case 291u: goto L_003D2EA8;
    case 292u: goto L_003D2EBC;
    case 293u: goto L_003D2EC0;
    case 294u: goto L_003D2F10;
    case 295u: goto L_003D2F24;
    case 296u: goto L_003D2F28;
    case 297u: goto L_003D2F60;
    case 298u: goto L_003D2F74;
    case 299u: goto L_003D2F8C;
    case 300u: goto L_003D2FC0;
    case 301u: goto L_003D2FF4;
    case 302u: goto L_003D3014;
    case 303u: goto L_003D3038;
    case 304u: goto L_003D3078;
    case 305u: goto L_003D30B8;
    case 306u: goto L_003D30EC;
    case 307u: goto L_003D3100;
    case 308u: goto L_003D3130;
    case 309u: goto L_003D3160;
    case 310u: goto L_003D3178;
    case 311u: goto L_003D3188;
    case 312u: goto L_003D31B0;
    case 313u: goto L_003D31E8;
    case 314u: goto L_003D324C;
    case 315u: goto L_003D3260;
    case 316u: goto L_003D3278;
    case 317u: goto L_003D3290;
    case 318u: goto L_003D32A8;
    case 319u: goto L_003D32C0;
    case 320u: goto L_003D32D8;
    case 321u: goto L_003D32F0;
    case 322u: goto L_003D3308;
    case 323u: goto L_003D3320;
    case 324u: goto L_003D3338;
    case 325u: goto L_003D3350;
    case 326u: goto L_003D3368;
    case 327u: goto L_003D3380;
    case 328u: goto L_003D3398;
    case 329u: goto L_003D33A8;
    case 330u: goto L_003D3410;
    case 331u: goto L_003D3420;
    case 332u: goto L_003D343C;
    case 333u: goto L_003D3450;
    case 334u: goto L_003D3474;
    case 335u: goto L_003D3490;
    case 336u: goto L_003D34A0;
    case 337u: goto L_003D34CC;
    case 338u: goto L_003D34DC;
    case 339u: goto L_003D34F8;
    case 340u: goto L_003D3510;
    case 341u: goto L_003D3540;
    case 342u: goto L_003D3560;
    case 343u: goto L_003D3578;
    case 344u: goto L_003D359C;
    case 345u: goto L_003D35C0;
    case 346u: goto L_003D3620;
    case 347u: goto L_003D3654;
    case 348u: goto L_003D365C;
    case 349u: goto L_003D3674;
    case 350u: goto L_003D367C;
    case 351u: goto L_003D3688;
    case 352u: goto L_003D36B8;
    case 353u: goto L_003D36E4;
    case 354u: goto L_003D3708;
    case 355u: goto L_003D3754;
    case 356u: goto L_003D375C;
    case 357u: goto L_003D3788;
    case 358u: goto L_003D37B4;
    case 359u: goto L_003D37BC;
    case 360u: goto L_003D3800;
    case 361u: goto L_003D383C;
    case 362u: goto L_003D3858;
    case 363u: goto L_003D3860;
    case 364u: goto L_003D3898;
    case 365u: goto L_003D38C0;
    case 366u: goto L_003D38E4;
    case 367u: goto L_003D3918;
    case 368u: goto L_003D3948;
    case 369u: goto L_003D3958;
    case 370u: goto L_003D3974;
    case 371u: goto L_003D3998;
    case 372u: goto L_003D39B0;
    case 373u: goto L_003D39C8;
    case 374u: goto L_003D3A20;
    case 375u: goto L_003D3A38;
    case 376u: goto L_003D3A90;
    case 377u: goto L_003D3AC4;
    case 378u: goto L_003D3AE0;
    case 379u: goto L_003D3B14;
    case 380u: goto L_003D3B38;
    case 381u: goto L_003D3B50;
    case 382u: goto L_003D3B68;
    case 383u: goto L_003D3B80;
    case 384u: goto L_003D3B98;
    case 385u: goto L_003D3BB0;
    case 386u: goto L_003D3BC8;
    case 387u: goto L_003D3BE0;
    case 388u: goto L_003D3BF8;
    case 389u: goto L_003D3C20;
    case 390u: goto L_003D3C3C;
    case 391u: goto L_003D3C50;
    case 392u: goto L_003D3C64;
    case 393u: goto L_003D3C70;
    case 394u: goto L_003D3CA0;
    case 395u: goto L_003D3CC4;
    case 396u: goto L_003D3CE0;
    case 397u: goto L_003D3D10;
    case 398u: goto L_003D3D38;
    case 399u: goto L_003D3D5C;
    case 400u: goto L_003D3D70;
    case 401u: goto L_003D3D88;
    case 402u: goto L_003D3DA0;
    case 403u: goto L_003D3DC8;
    case 404u: goto L_003D3DE0;
    case 405u: goto L_003D3E00;
    case 406u: goto L_003D3E18;
    case 407u: goto L_003D3E20;
    case 408u: goto L_003D3E30;
    case 409u: goto L_003D3E44;
    case 410u: goto L_003D3E58;
    case 411u: goto L_003D3E68;
    case 412u: goto L_003D3E78;
    case 413u: goto L_003D3E80;
    case 414u: goto L_003D3E88;
    case 415u: goto L_003D3E90;
    case 416u: goto L_003D3E98;
    case 417u: goto L_003D3EA0;
    case 418u: goto L_003D3EA8;
    case 419u: goto L_003D3EB0;
    case 420u: goto L_003D3EB8;
    case 421u: goto L_003D3EC0;
    case 422u: goto L_003D3EC8;
    case 423u: goto L_003D3ED0;
    case 424u: goto L_003D3ED8;
    case 425u: goto L_003D3EE0;
    case 426u: goto L_003D3EE8;
    case 427u: goto L_003D3EF0;
    case 428u: goto L_003D3F38;
    case 429u: goto L_003D3F48;
    default: bad_entry(c, 0x003D0000u); return;
    }
L_003D0000:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[19].sd[0] = static_cast<std::int32_t>(0x00440000u);  if (t) { goto L_003D0088; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00440000u);
    c.r[21].sd[0] = static_cast<std::int32_t>(0x00440000u);
    set32(c.r[3], ld32((c.r[2].w[0] - 7696u)));
    set32(c.r[16], c.r[21].w[0] - 7672u);
    c.r[18].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[2], c.r[3].w[0] << 10);
    st32((c.r[19].w[0] - 7660u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + 64u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D0034u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0004(c, 374u, depth + 1u); else { c.pc = 0x00112C00u; return; } if (c.pc != 0x003D0034u) [[unlikely]] return; }
L_003D0034:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[20].w[0]), c.r[2].w[0]);  if (t) { goto L_003D0070; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[5], ld32((c.r[16].w[0])));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D004Cu); set32(c.r[4], c.r[4].w[0] + 23128u);  if (depth < kMaxDepth) unit_0003(c, 243u, depth + 1u); else { c.pc = 0x0010DCC0u; return; } if (c.pc != 0x003D004Cu) [[unlikely]] return; }
L_003D004C:
    c.budget -= 1;
L_003D0050:
    c.budget -= 7;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003D0050u | kUnwind; return; } goto L_003D0050; } }
    c.budget -= 1;
L_003D0070:
    set32(c.r[5], ld32((c.r[18].w[0] - 7672u)));
    set32(c.r[4], c.r[22].w[0] + 22704u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D0080u); set32(c.r[6], ld32((c.r[17].w[0] - 7668u)));  if (depth < kMaxDepth) unit_0003(c, 243u, depth + 1u); else { c.pc = 0x0010DCC0u; return; } if (c.pc != 0x003D0080u) [[unlikely]] return; }
L_003D0080:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[17].w[0] - 7668u)));  if (t) { goto L_003D0090; } }
L_003D0088:
    c.r[21].sd[0] = static_cast<std::int32_t>(0x00440000u);
    set32(c.r[2], ld32((c.r[17].w[0] - 7668u)));
    c.budget -= 2;
L_003D0090:
    set32(c.r[3], 0u - 64u);
    set32(c.r[5], ld32((c.r[19].w[0] - 7660u)));
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00440000u);
    set32(c.r[2], c.r[2].w[0] + 63u);
    set32(c.r[4], 0u + 10u);
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    set32(c.r[3], ld32((c.r[21].w[0] - 7672u)));
    st32((c.r[29].w[0]), c.r[5].w[0]);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[6], 0u + 3u);
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 4u), c.r[2].w[0]);
    st32((c.r[9].w[0] - 7664u), c.r[2].w[0]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D00D0u); st32((c.r[29].w[0] + 8u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_00B2(c, 326u, depth + 1u); else { c.pc = 0x003CA7C0u; return; } if (c.pc != 0x003D00D0u) [[unlikely]] return; }
L_003D00D0:
    set32(c.r[3], c.r[23].w[0] - 7644u);
    c.budget -= 1;
L_003D00D4:
    c.r[23].d[0] = ld64((c.r[29].w[0] + 72u));
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 24u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 56u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_003D0110:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[6], 0u + 1u);
    st32((c.r[29].w[0]), c.r[4].w[0]);
    set32(c.r[4], 0u + 11u);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D0134u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00B2(c, 326u, depth + 1u); else { c.pc = 0x003CA7C0u; return; } if (c.pc != 0x003D0134u) [[unlikely]] return; }
L_003D0134:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003D0140:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[4], 0u + 12u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 10;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003CA7C0u | kUnwind; return; } [[clang::musttail]] return unit_00B2(c, 326u, depth); }
L_003D0168:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[4], 0u + 13u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 10;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003CA7C0u | kUnwind; return; } [[clang::musttail]] return unit_00B2(c, 326u, depth); }
L_003D0190:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00440000u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[16], c.r[3].w[0] - 7648u);
    set32(c.r[2], ld32((c.r[16].w[0])));
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    set32(c.r[17], 0u + 1u);
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == c.r[17].d[0]; st64((c.r[29].w[0] + 16u), c.r[31].d[0]);  if (t) { goto L_003D01D0; } }
    set32(c.r[4], 0u + 14u);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D01CCu); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00B2(c, 326u, depth + 1u); else { c.pc = 0x003CA7C0u; return; } if (c.pc != 0x003D01CCu) [[unlikely]] return; }
L_003D01CC:
    st32((c.r[16].w[0]), c.r[17].w[0]);
    c.budget -= 1;
L_003D01D0:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003D01E8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00440000u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[16], c.r[2].w[0] - 7648u);
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull; st64((c.r[29].w[0] + 8u), c.r[31].d[0]);  if (t) { goto L_003D0220; } }
    set32(c.r[4], 0u + 15u);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D021Cu); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00B2(c, 326u, depth + 1u); else { c.pc = 0x003CA7C0u; return; } if (c.pc != 0x003D021Cu) [[unlikely]] return; }
L_003D021C:
    st32((c.r[16].w[0]), 0u);
    c.budget -= 1;
L_003D0220:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003D0230:
    set32(c.r[2], ld32((c.r[4].w[0] + 72u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[5].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0x00440000u);  if (t) { goto L_003D025C; } }
    set32(c.r[3], ld32((c.r[2].w[0] - 7648u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[2], c.r[5].w[0] << 24);  if (t) { goto L_003D0254; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[2].d[0]; set32(c.r[2], c.r[5].w[0] << 24);  if (t) { goto L_003D025C; } }
L_003D0254:
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 24));
    st32((c.r[4].w[0] + 72u), c.r[2].w[0]);
    c.budget -= 2;
L_003D025C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003D0268:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00440000u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[3], c.r[3].w[0] - 7644u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[3].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[3].w[0]), c.r[2].w[0]);  if (t) { goto L_003D0300; } }
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00440000u);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00440000u);
    set32(c.r[16], c.r[16].w[0] - 7668u);
    set32(c.r[17], c.r[17].w[0] + 3128u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D02A8u); set32(c.r[4], ld32((c.r[16].w[0])));  if (depth < kMaxDepth) unit_0004(c, 380u, depth + 1u); else { c.pc = 0x00112D68u; return; } if (c.pc != 0x003D02A8u) [[unlikely]] return; }
L_003D02A8:
    st32((c.r[16].w[0]), 0u);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00440000u);
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D02BCu); set32(c.r[16], c.r[16].w[0] - 7636u);  if (depth < kMaxDepth) unit_00B2(c, 304u, depth + 1u); else { c.pc = 0x003CA470u; return; } if (c.pc != 0x003D02BCu) [[unlikely]] return; }
L_003D02BC:
    st32((c.r[17].w[0]), 0u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D02C8u); set32(c.r[4], ld32((c.r[16].w[0])));  if (depth < kMaxDepth) unit_0004(c, 380u, depth + 1u); else { c.pc = 0x00112D68u; return; } if (c.pc != 0x003D02C8u) [[unlikely]] return; }
L_003D02C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D02D0u); st32((c.r[16].w[0]), 0u);  if (depth < kMaxDepth) unit_00B3(c, 428u, depth + 1u); else { c.pc = 0x003CF9E8u; return; } if (c.pc != 0x003D02D0u) [[unlikely]] return; }
L_003D02D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D02D8u);  if (depth < kMaxDepth) unit_00B4(c, 11u, depth + 1u); else { c.pc = 0x003D0168u; return; } if (c.pc != 0x003D02D8u) [[unlikely]] return; }
L_003D02D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D02E0u);  if (depth < kMaxDepth) unit_00B2(c, 323u, depth + 1u); else { c.pc = 0x003CA748u; return; } if (c.pc != 0x003D02E0u) [[unlikely]] return; }
L_003D02E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D02E8u);  if (depth < kMaxDepth) unit_00B4(c, 300u, depth + 1u); else { c.pc = 0x003D2FC0u; return; } if (c.pc != 0x003D02E8u) [[unlikely]] return; }
L_003D02E8:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 32u);  goto L_003D2A80; }
L_003D0300:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003D0318:
    set32(c.r[29], c.r[29].w[0] - 96u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00440000u);
    st64((c.r[29].w[0] + 40u), c.r[17].d[0]);
    c.r[17].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 56u), c.r[19].d[0]);
    set32(c.r[19], c.r[2].w[0] + 1592u);
    st64((c.r[29].w[0] + 72u), c.r[21].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[16].d[0]);
    st64((c.r[29].w[0] + 64u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 80u), c.r[22].d[0]);
    st64((c.r[29].w[0] + 88u), c.r[31].d[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0])));
    c.budget -= 16;
    { const bool t = c.r[2].d[0] == 0ull; c.r[21].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003D0384; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[3].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 2;
L_003D0360:
    set32(c.r[17], c.r[17].w[0] + 1u);
    set32(c.r[4], c.r[4].w[0] + 96u);
    c.r[2].d[0] = c.r[17].sd[0] < 16ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], c.r[3].w[0] + 96u);  if (t) { goto L_003D0384; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[19].d[0] = c.r[3].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003D0360u | kUnwind; return; } goto L_003D0360; } }
L_003D0384:
    set32(c.r[3], 0u + 16u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == c.r[3].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003D0640; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 96u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D03A4u); c.r[17].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 49u, depth + 1u); else { c.pc = 0x00124ED8u; return; } if (c.pc != 0x003D03A4u) [[unlikely]] return; }
L_003D03A4:
    c.budget -= 2;
    { const bool t = c.r[18].sd[0] <= 0; st32((c.r[19].w[0] + 4u), c.r[18].w[0]);  if (t) { goto L_003D0420; } }
    set32(c.r[20], c.r[19].w[0] + 8u);
    c.r[22].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[16].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
L_003D03B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D03C0u);  if (depth < kMaxDepth) unit_00B3(c, 435u, depth + 1u); else { c.pc = 0x003CFAC8u; return; } if (c.pc != 0x003D03C0u) [[unlikely]] return; }
L_003D03C0:
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 4u);  if (t) { goto L_003D0410; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D03D4u); set32(c.r[4], c.r[22].w[0] + 23192u);  if (depth < kMaxDepth) unit_0003(c, 243u, depth + 1u); else { c.pc = 0x0010DCC0u; return; } if (c.pc != 0x003D03D4u) [[unlikely]] return; }
L_003D03D4:
    c.budget -= 2;
    { const bool t = c.r[18].sd[0] <= 0; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003D0640; } }
    c.r[17].d[0] = c.r[20].d[0] + 0ull;
    c.r[16].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.budget -= 3;
L_003D03E8:
    set32(c.r[17], c.r[17].w[0] + 4u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_003D03FC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D03FCu);  if (depth < kMaxDepth) unit_00B3(c, 437u, depth + 1u); else { c.pc = 0x003CFB40u; return; } if (c.pc != 0x003D03FCu) [[unlikely]] return; }
L_003D03FC:
    set32(c.r[16], c.r[16].w[0] - 1u);
    c.budget -= 3;
    if (c.r[16].d[0] != 0ull) { set32(c.r[2], ld32((c.r[17].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003D03E8u | kUnwind; return; } goto L_003D03E8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003D0640; } }
L_003D0410:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003D03B8u | kUnwind; return; } goto L_003D03B8; } }
L_003D0420:
    st32((c.r[29].w[0]), c.r[18].w[0]);
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = c.r[18].sd[0] <= 0; st32((c.r[29].w[0] + 4u), 0u);  if (t) { goto L_003D0458; } }
    set32(c.r[6], c.r[29].w[0] + 8u);
    set32(c.r[5], c.r[19].w[0] + 8u);
    c.budget -= 2;
L_003D0438:
    set32(c.r[2], ld32((c.r[5].w[0])));
    set32(c.r[5], c.r[5].w[0] + 4u);
    set32(c.r[17], c.r[17].w[0] + 1u);
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    c.r[4].d[0] = c.r[17].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;
    st32((c.r[6].w[0]), c.r[3].w[0]);
    c.budget -= 8;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[6], c.r[6].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003D0438u | kUnwind; return; } goto L_003D0438; } }
L_003D0458:
    set32(c.r[4], 0u + 8u);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[6], 0u + 4u);
    set32(c.r[7], c.r[29].w[0] + 16u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D0470u); set32(c.r[8], 0u + 1u);  if (depth < kMaxDepth) unit_00B2(c, 326u, depth + 1u); else { c.pc = 0x003CA7C0u; return; } if (c.pc != 0x003D0470u) [[unlikely]] return; }
L_003D0470:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[19].w[0] + 32u), c.r[2].w[0]);  if (t) { goto L_003D0490; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D0484u); set32(c.r[4], c.r[4].w[0] + 23232u);  if (depth < kMaxDepth) unit_0003(c, 243u, depth + 1u); else { c.pc = 0x0010DCC0u; return; } if (c.pc != 0x003D0484u) [[unlikely]] return; }
L_003D0484:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003D0640; } }
    c.budget -= 1;
L_003D0490:
    c.budget -= 2;
    { const bool t = c.r[18].sd[0] <= 0; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_003D0568; } }
    set32(c.r[20], c.r[19].w[0] + 8u);
    c.r[22].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[16], c.r[19].w[0] + 16u);
    set32(c.r[2], c.r[17].w[0] << 2);
    c.budget -= 4;
L_003D04A8:
    set32(c.r[17], c.r[17].w[0] + 1u);
    set32(c.r[3], c.r[20].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[21].w[0]);
    set32(c.r[6], ld32((c.r[3].w[0])));
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D04C4u); set32(c.r[5], ld32((c.r[6].w[0] + 8u)));  if (depth < kMaxDepth) unit_00B2(c, 260u, depth + 1u); else { c.pc = 0x003C9E18u; return; } if (c.pc != 0x003D04C4u) [[unlikely]] return; }
L_003D04C4:
    c.r[3].d[0] = c.r[17].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 4u);  if (t) { goto L_003D0560; } }
    set32(c.r[4], c.r[22].w[0] + 23272u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D04E0u); c.r[21].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0003(c, 243u, depth + 1u); else { c.pc = 0x0010DCC0u; return; } if (c.pc != 0x003D04E0u) [[unlikely]] return; }
L_003D04E0:
    c.budget -= 2;
    { const bool t = c.r[18].sd[0] <= 0; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003D0640; } }
    c.r[17].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[16], c.r[19].w[0] + 16u);
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 4;
L_003D04F8:
    set32(c.r[16], c.r[16].w[0] + 4u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_003D050C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D050Cu);  if (depth < kMaxDepth) unit_00B2(c, 266u, depth + 1u); else { c.pc = 0x003C9F08u; return; } if (c.pc != 0x003D050Cu) [[unlikely]] return; }
L_003D050C:
    set32(c.r[2], ld32((c.r[19].w[0] + 32u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u + 9u);  if (t) { goto L_003D0530; } }
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[6], 0u + 1u);
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D0530u); st32((c.r[29].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00B2(c, 326u, depth + 1u); else { c.pc = 0x003CA7C0u; return; } if (c.pc != 0x003D0530u) [[unlikely]] return; }
L_003D0530:
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[17], c.r[17].w[0] + 4u);  if (t) { goto L_003D0544; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D0544u);  if (depth < kMaxDepth) unit_00B3(c, 437u, depth + 1u); else { c.pc = 0x003CFB40u; return; } if (c.pc != 0x003D0544u) [[unlikely]] return; }
L_003D0544:
    set32(c.r[21], c.r[21].w[0] + 1u);
    c.r[2].d[0] = c.r[21].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[16].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003D04F8u | kUnwind; return; } goto L_003D04F8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003D0640; } }
    c.budget -= 1;
L_003D0560:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[2], c.r[17].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003D04A8u | kUnwind; return; } goto L_003D04A8; } }
L_003D0568:
    c.budget -= 2;
    { const bool t = c.r[18].sd[0] <= 0; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_003D0594; } }
    set32(c.r[5], c.r[19].w[0] + 24u);
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 2;
L_003D0578:
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[4], c.r[4].w[0] + 4u);
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;
    st32((c.r[5].w[0]), c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003D0578u | kUnwind; return; } goto L_003D0578; } }
L_003D0594:
    st8((c.r[19].w[0] + 36u), static_cast<std::uint8_t>(0u));
    st8((c.r[19].w[0] + 37u), static_cast<std::uint8_t>(0u));
    st8((c.r[19].w[0] + 38u), static_cast<std::uint8_t>(c.r[18].w[0]));
    st8((c.r[19].w[0] + 39u), static_cast<std::uint8_t>(c.r[18].w[0]));
    st32((c.r[19].w[0] + 48u), 0u);
    st32((c.r[19].w[0] + 52u), 0u);
    st32((c.r[19].w[0] + 72u), 0u);
    st32((c.r[19].w[0] + 76u), 0u);
    st8((c.r[19].w[0] + 83u), static_cast<std::uint8_t>(0u));
    c.budget -= 11;
    { const bool t = c.r[18].sd[0] <= 0; st8((c.r[19].w[0] + 82u), static_cast<std::uint8_t>(0u));  if (t) { goto L_003D05EC; } }
    c.r[17].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[3], c.r[19].w[0] + 64u);
    set32(c.r[2], c.r[19].w[0] + 56u);
    c.budget -= 4;
L_003D05D0:
    set32(c.r[17], c.r[17].w[0] - 1u);
    st32((c.r[2].w[0]), 0u);
    st32((c.r[3].w[0]), 0u);
    set32(c.r[3], c.r[3].w[0] + 4u);
    c.budget -= 7;
    { const bool t = c.r[17].d[0] != 0ull; set32(c.r[2], c.r[2].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003D05D0u | kUnwind; return; } goto L_003D05D0; } }
L_003D05EC:
    set32(c.r[17], 0u + 1u);
    st8((c.r[19].w[0] + 80u), static_cast<std::uint8_t>(0u));
    st8((c.r[19].w[0] + 81u), static_cast<std::uint8_t>(c.r[17].w[0]));
    st32((c.r[19].w[0] + 84u), 0u);
    set32(c.r[4], ld32((c.r[21].w[0])));
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0] + 36u)));
    c.budget -= 9;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003D0610u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003D0610u) [[unlikely]] return; }
L_003D0610:
    set32(c.r[4], ld32((c.r[21].w[0])));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0] + 36u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003D0628u); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003D0628u) [[unlikely]] return; }
L_003D0628:
    set32(c.r[3], 0u + 16384u);
    set32(c.r[16], c.r[16].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = c.r[19].d[0] + 0ull;
    st32((c.r[19].w[0] + 88u), c.r[16].w[0]);
    st32((c.r[19].w[0] + 92u), c.r[3].w[0]);
    st8((c.r[19].w[0]), static_cast<std::uint8_t>(c.r[17].w[0]));
    c.budget -= 6;
L_003D0640:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 56u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 72u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 88u));
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_003D0668:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 24u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    st64((c.r[29].w[0] + 40u), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 9;
    { const bool t = c.r[3].sd[0] <= 0; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_003D06BC; } }
    set32(c.r[16], c.r[17].w[0] + 16u);
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
L_003D0698:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[16], c.r[16].w[0] + 4u);  if (t) { goto L_003D06AC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D06A8u);  if (depth < kMaxDepth) unit_00B2(c, 266u, depth + 1u); else { c.pc = 0x003C9F08u; return; } if (c.pc != 0x003D06A8u) [[unlikely]] return; }
L_003D06A8:
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 1;
L_003D06AC:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[2].d[0] = c.r[18].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[16].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003D0698u | kUnwind; return; } goto L_003D0698; }
L_003D06BC:
    set32(c.r[2], ld32((c.r[17].w[0] + 32u)));
    set32(c.r[4], 0u + 9u);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[6], 0u + 1u);
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D06DCu); st32((c.r[29].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00B2(c, 326u, depth + 1u); else { c.pc = 0x003CA7C0u; return; } if (c.pc != 0x003D06DCu) [[unlikely]] return; }
L_003D06DC:
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] <= 0; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_003D0714; } }
    set32(c.r[16], c.r[17].w[0] + 8u);
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 2;
L_003D06F0:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[16], c.r[16].w[0] + 4u);  if (t) { goto L_003D0704; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D0700u);  if (depth < kMaxDepth) unit_00B3(c, 437u, depth + 1u); else { c.pc = 0x003CFB40u; return; } if (c.pc != 0x003D0700u) [[unlikely]] return; }
L_003D0700:
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 1;
L_003D0704:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[2].d[0] = c.r[18].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[16].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003D06F0u | kUnwind; return; } goto L_003D06F0; }
L_003D0714:
    st8((c.r[17].w[0]), static_cast<std::uint8_t>(0u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 40u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003D0730:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] + 23312u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0010DCC0u | kUnwind; return; } [[clang::musttail]] return unit_0003(c, 243u, depth); }
L_003D0750:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[5].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D0768u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B4(c, 56u, depth + 1u); else { c.pc = 0x003D0780u; return; } if (c.pc != 0x003D0768u) [[unlikely]] return; }
L_003D0768:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 16u);  goto L_003D07F8; }
L_003D0780:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[2], 0u + 1u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st8((c.r[17].w[0] + 80u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 11;
    { const bool t = c.r[5].d[0] == c.r[2].d[0]; c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 38u)));  if (t) { goto L_003D07DC; } }
    c.budget -= 2;
    { const bool t = c.r[3].sd[0] <= 0; c.r[16].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_003D07E0; } }
    c.r[18].d[0] = c.r[3].d[0] + 0ull;
    set32(c.r[19], 0u + 1u);
    set32(c.r[16], c.r[17].w[0] + 16u);
    c.budget -= 3;
L_003D07C0:
    set32(c.r[4], ld32((c.r[16].w[0])));
    set32(c.r[16], c.r[16].w[0] + 4u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D07D0u); set32(c.r[18], c.r[18].w[0] - 1u);  if (depth < kMaxDepth) unit_00B2(c, 269u, depth + 1u); else { c.pc = 0x003C9F40u; return; } if (c.pc != 0x003D07D0u) [[unlikely]] return; }
L_003D07D0:
    st8((c.r[17].w[0] + 81u), static_cast<std::uint8_t>(c.r[19].w[0]));
    c.budget -= 3;
    { const bool t = c.r[18].d[0] != 0ull; st8((c.r[17].w[0] + 80u), static_cast<std::uint8_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003D07C0u | kUnwind; return; } goto L_003D07C0; } }
L_003D07DC:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_003D07E0:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003D07F8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 36u), static_cast<std::uint8_t>(c.r[5].w[0]));  c.pc = t; return; }
L_003D0800:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 83u), static_cast<std::uint8_t>(c.r[5].w[0]));  c.pc = t; return; }
L_003D0808:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] + 23344u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0010DCC0u | kUnwind; return; } [[clang::musttail]] return unit_0003(c, 243u, depth); }
L_003D0828:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] + 23384u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0010DCC0u | kUnwind; return; } [[clang::musttail]] return unit_0003(c, 243u, depth); }
L_003D0848:
    c.r[2].d[0] = 0ull | 48000ull;
    st32((c.r[5].w[0]), 0u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[6].w[0]), c.r[2].w[0]);  c.pc = t; return; }
L_003D0858:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0] + 36u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003D0878u); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003D0878u) [[unlikely]] return; }
L_003D0878:
    set32(c.r[3], 0u + 16384u);
    set32(c.r[3], c.r[3].w[0] - c.r[2].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[2], c.r[3].w[0] >> 31);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 1));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003D0898:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0] + 36u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003D08B8u); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003D08B8u) [[unlikely]] return; }
L_003D08B8:
    set32(c.r[3], c.r[2].w[0] >> 31);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 1));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003D08D0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[3], 0u + 1u);
    st64((c.r[29].w[0] + 24u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 40u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 56u), c.r[31].d[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 80u)));
    c.budget -= 12;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_003D0A70; } }
L_003D0900:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 38u)));
    c.r[18].d[0] = 0ull + 0ull;
    c.r[3].d[0] = ld8((c.r[17].w[0] + 38u));
    c.budget -= 5;
    { const bool t = c.r[2].sd[0] <= 0; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_003D0970; } }
    set32(c.r[20], 0u + 1u);
    set32(c.r[16], c.r[17].w[0] + 8u);
    c.budget -= 3;
L_003D0920:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D0928u); set32(c.r[4], ld32((c.r[16].w[0] + 8u)));  if (depth < kMaxDepth) unit_00B2(c, 252u, depth + 1u); else { c.pc = 0x003C9D30u; return; } if (c.pc != 0x003D0928u) [[unlikely]] return; }
L_003D0928:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[20].d[0]; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_003D0958; } }
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[4], ld32((c.r[2].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0] + 36u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003D0948u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003D0948u) [[unlikely]] return; }
L_003D0948:
    set32(c.r[3], ld32((c.r[17].w[0] + 92u)));
    set32(c.r[4], c.r[18].w[0] + 1u);
    c.r[2].d[0] = c.r[2].d[0] ^ c.r[3].d[0];
    if (c.r[2].d[0] == 0) c.r[18].d[0] = c.r[4].d[0];
    c.budget -= 4;
L_003D0958:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 38u)));
    set32(c.r[19], c.r[19].w[0] + 1u);
    set32(c.r[16], c.r[16].w[0] + 4u);
    c.r[2].d[0] = c.r[19].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; c.r[3].d[0] = ld8((c.r[17].w[0] + 38u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003D0920u | kUnwind; return; } goto L_003D0920; } }
L_003D0970:
    set32(c.r[2], c.r[3].w[0] << 24);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 24));
    c.budget -= 4;
    { const bool t = c.r[18].d[0] != c.r[2].d[0]; c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_003D0A70; } }
    c.budget -= 2;
    { const bool t = c.r[18].sd[0] <= 0; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_003D0A70; } }
    set32(c.r[18], c.r[17].w[0] + 16u);
    set32(c.r[16], c.r[17].w[0] + 8u);
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 4;
L_003D0998:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    c.r[7].d[0] = c.r[29].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], ld32((c.r[2].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0] + 24u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003D09B8u); c.r[6].d[0] = c.r[6].d[0] | 65535ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003D09B8u) [[unlikely]] return; }
L_003D09B8:
    set32(c.r[7], ld32((c.r[16].w[0])));
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[7].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0] + 32u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003D09D4u); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003D09D4u) [[unlikely]] return; }
L_003D09D4:
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], ld32((c.r[3].w[0] + 8u)));
    c.r[6].d[0] = c.r[6].d[0] | 65535ull;
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0] + 24u)));
    c.budget -= 9;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003D09F8u); c.r[7].d[0] = c.r[29].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003D09F8u) [[unlikely]] return; }
L_003D09F8:
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[3], ld32((c.r[29].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 92u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[6].d[0] = c.r[29].d[0] + 0ull;  if (t) { goto L_003D0A30; } }
    c.budget -= 1;
L_003D0A10:
    c.budget -= 7;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003D0A10u | kUnwind; return; } goto L_003D0A10; } }
    c.budget -= 1;
L_003D0A30:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[16], c.r[16].w[0] + 4u);
    set32(c.r[4], ld32((c.r[2].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0] + 32u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003D0A4Cu); set32(c.r[19], c.r[19].w[0] + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003D0A4Cu) [[unlikely]] return; }
L_003D0A4C:
    st8((c.r[17].w[0] + 83u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], ld32((c.r[18].w[0])));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D0A5Cu); set32(c.r[18], c.r[18].w[0] + 4u);  if (depth < kMaxDepth) unit_00B2(c, 268u, depth + 1u); else { c.pc = 0x003C9F30u; return; } if (c.pc != 0x003D0A5Cu) [[unlikely]] return; }
L_003D0A5C:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 38u)));
    c.r[2].d[0] = c.r[19].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[16].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003D0998u | kUnwind; return; } goto L_003D0998; }
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_003D0A70:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 56u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003D0A90:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    set32(c.r[17], 0u + 15u);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D0AB0u); set32(c.r[18], 0u + 1u);  if (depth < kMaxDepth) unit_00B4(c, 114u, depth + 1u); else { c.pc = 0x003D0DC0u; return; } if (c.pc != 0x003D0AB0u) [[unlikely]] return; }
L_003D0AB0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00440000u);
    set32(c.r[16], c.r[2].w[0] + 1592u);
    c.budget -= 2;
L_003D0AB8:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[18].d[0]) { set32(c.r[17], c.r[17].w[0] - 1u);  goto L_003D0AD0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D0ACCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B4(c, 68u, depth + 1u); else { c.pc = 0x003D08D0u; return; } if (c.pc != 0x003D0ACCu) [[unlikely]] return; }
L_003D0ACC:
    set32(c.r[17], c.r[17].w[0] - 1u);
    c.budget -= 1;
L_003D0AD0:
    c.budget -= 2;
    { const bool t = c.r[17].sd[0] >= 0; set32(c.r[16], c.r[16].w[0] + 96u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003D0AB8u | kUnwind; return; } goto L_003D0AB8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D0AE0u);  if (depth < kMaxDepth) unit_00B4(c, 115u, depth + 1u); else { c.pc = 0x003D0DD8u; return; } if (c.pc != 0x003D0AE0u) [[unlikely]] return; }
L_003D0AE0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D0AE8u);  if (depth < kMaxDepth) unit_00B2(c, 253u, depth + 1u); else { c.pc = 0x003C9D38u; return; } if (c.pc != 0x003D0AE8u) [[unlikely]] return; }
L_003D0AE8:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 32u);  goto L_003D2E10; }
L_003D0B00:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] + 23424u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0010DCC0u | kUnwind; return; } [[clang::musttail]] return unit_0003(c, 243u, depth); }
L_003D0B20:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 38u), static_cast<std::uint8_t>(c.r[5].w[0]));  c.pc = t; return; }
L_003D0B28:
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    c.r[2].d[0] = 0ull | 48000ull;
    mmi::div(c, 0, c.r[2].w[0], c.r[6].w[0]);
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 7;
    if (c.r[6].d[0] == 0ull) { breakpoint(c, 0x003D0B40u);  goto L_003D0B44; }
L_003D0B44:
    c.r[3].d[0] = c.hi.d[0];
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.r[2].d[0] = 0ull | 48000ull;  goto L_003D0B80; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D0B5Cu); set32(c.r[4], c.r[4].w[0] + 23464u);  if (depth < kMaxDepth) unit_0003(c, 243u, depth + 1u); else { c.pc = 0x0010DCC0u; return; } if (c.pc != 0x003D0B5Cu) [[unlikely]] return; }
L_003D0B5C:
    c.budget -= 1;
L_003D0B60:
    c.budget -= 7;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003D0B60u | kUnwind; return; } goto L_003D0B60; } }
    c.budget -= 1;
L_003D0B80:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == c.r[2].d[0]; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_003D0BD4; } }
    mmi::div(c, 0, c.r[2].w[0], c.r[6].w[0]);
    c.budget -= 3;
    if (c.r[6].d[0] == 0ull) { breakpoint(c, 0x003D0B90u);  goto L_003D0B94; }
L_003D0B94:
    c.r[2].d[0] = c.lo.d[0];
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_003D0BD0; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D0BB0u); set32(c.r[4], c.r[4].w[0] + 23464u);  if (depth < kMaxDepth) unit_0003(c, 243u, depth + 1u); else { c.pc = 0x0010DCC0u; return; } if (c.pc != 0x003D0BB0u) [[unlikely]] return; }
L_003D0BB0:
    c.budget -= 7;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003D0BB0u | kUnwind; return; } goto L_003D0BB0; } }
    c.budget -= 1;
L_003D0BD0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_003D0BD4:
    st32((c.r[4].w[0] + 40u), c.r[6].w[0]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003D0BE0:
    c.r[2].d[0] = 0ll < c.r[5].sd[0] ? 1ull : 0ull;
    set32(c.r[6], 0u - 999u);
    if (c.r[2].d[0] != 0) c.r[5].d[0] = 0ull;
    c.r[3].d[0] = c.r[5].sd[0] < -999ll ? 1ull : 0ull;
    if (c.r[3].d[0] != 0) c.r[5].d[0] = c.r[6].d[0];
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 48u), c.r[5].w[0]);  c.pc = t; return; }
L_003D0C00:
    c.r[3].d[0] = c.r[6].sd[0] < -15ll ? 1ull : 0ull;
    set32(c.r[2], 0u - 15u);
    if (c.r[3].d[0] == 0) c.r[2].d[0] = c.r[6].d[0];
    set32(c.r[6], 0u + 15u);
    set32(c.r[5], c.r[5].w[0] << 2);
    c.r[3].d[0] = c.r[2].sd[0] < 16ll ? 1ull : 0ull;
    set32(c.r[5], c.r[5].w[0] + c.r[4].w[0]);
    if (c.r[3].d[0] == 0) c.r[2].d[0] = c.r[6].d[0];
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[5].w[0] + 56u), c.r[2].w[0]);  c.pc = t; return; }
L_003D0C28:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[2], 0u + 16u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[2].d[0]; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_003D0C50; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[4], c.r[4].w[0] + 23496u);
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0010DCC0u | kUnwind; return; } [[clang::musttail]] return unit_0003(c, 243u, depth); }
L_003D0C50:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003D0C60:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D0C74u); set32(c.r[4], c.r[4].w[0] + 23544u);  if (depth < kMaxDepth) unit_0003(c, 243u, depth + 1u); else { c.pc = 0x0010DCC0u; return; } if (c.pc != 0x003D0C74u) [[unlikely]] return; }
L_003D0C74:
    c.r[2].d[0] = 0ull + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003D0C88:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[4].w[0] + 40u)));  c.pc = t; return; }
L_003D0C90:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[4].w[0] + 48u)));  c.pc = t; return; }
L_003D0C98:
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[4].w[0]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[5].w[0] + 56u)));  c.pc = t; return; }
L_003D0CA8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 16u);  c.pc = t; return; }
L_003D0CB0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D0CC4u); set32(c.r[4], c.r[4].w[0] + 23584u);  if (depth < kMaxDepth) unit_0003(c, 243u, depth + 1u); else { c.pc = 0x0010DCC0u; return; } if (c.pc != 0x003D0CC4u) [[unlikely]] return; }
L_003D0CC4:
    c.r[2].d[0] = 0ull + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003D0CD8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] + 23624u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0010DCC0u | kUnwind; return; } [[clang::musttail]] return unit_0003(c, 243u, depth); }
L_003D0CF8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003D0D00:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D0D14u); set32(c.r[4], c.r[4].w[0] + 23664u);  if (depth < kMaxDepth) unit_0003(c, 243u, depth + 1u); else { c.pc = 0x0010DCC0u; return; } if (c.pc != 0x003D0D14u) [[unlikely]] return; }
L_003D0D14:
    c.r[2].d[0] = 0ull + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003D0D28:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] + 23704u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0010DCC0u | kUnwind; return; } [[clang::musttail]] return unit_0003(c, 243u, depth); }
L_003D0D48:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D0D5Cu); set32(c.r[4], c.r[4].w[0] + 23752u);  if (depth < kMaxDepth) unit_0003(c, 243u, depth + 1u); else { c.pc = 0x0010DCC0u; return; } if (c.pc != 0x003D0D5Cu) [[unlikely]] return; }
L_003D0D5C:
    c.r[2].d[0] = 0ull + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003D0D70:
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[3].w[0] + 8u)));  c.pc = t; return; }
L_003D0D88:
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[3].w[0] + 4u)));  c.pc = t; return; }
L_003D0DA0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00440000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[2].w[0] + 5392u), 0u);  c.pc = t; return; }
L_003D0DB0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00440000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[2].w[0] + 5392u), 0u);  c.pc = t; return; }
L_003D0DC0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00440000u);
    set32(c.r[3], c.r[3].w[0] + 5392u);
    set32(c.r[2], ld32((c.r[3].w[0])));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[3].w[0]), c.r[2].w[0]);  c.pc = t; return; }
L_003D0DD8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00440000u);
    set32(c.r[3], c.r[3].w[0] + 5392u);
    set32(c.r[2], ld32((c.r[3].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[3].w[0]), c.r[2].w[0]);  c.pc = t; return; }
L_003D0DF0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00440000u);
    set32(c.r[2], c.r[2].w[0] + 5400u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[2].w[0]), 0u);  c.pc = t; return; }
L_003D0E00:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  goto L_003D3278; }
L_003D0E18:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  goto L_003D3290; }
L_003D0E30:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  goto L_003D3450; }
L_003D0E48:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] + 23808u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003D0E30u | kUnwind; return; } goto L_003D0E30; }
L_003D0E68:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00440000u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[16], c.r[2].w[0] + 5456u);
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; st64((c.r[29].w[0] + 8u), c.r[31].d[0]);  if (t) { goto L_003D0E9C; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00440000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] + 5464u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D0E98u); set32(c.r[6], 0u + 1152u);  if (depth < kMaxDepth) unit_0009(c, 49u, depth + 1u); else { c.pc = 0x00124ED8u; return; } if (c.pc != 0x003D0E98u) [[unlikely]] return; }
L_003D0E98:
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 1;
L_003D0E9C:
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003D0EB8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00440000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], c.r[3].w[0] + 5456u);
    set32(c.r[2], ld32((c.r[3].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[3].w[0]), c.r[2].w[0]);  if (t) { goto L_003D0EF8; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00440000u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] + 5464u);
    set32(c.r[6], 0u + 1152u);
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00124ED8u | kUnwind; return; } [[clang::musttail]] return unit_0009(c, 49u, depth); }
L_003D0EF8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003D0F08:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00440000u);
    set32(c.r[2], c.r[6].w[0] + 5464u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    set32(c.r[3], c.r[2].w[0] + 4u);
    c.r[8].d[0] = c.r[4].d[0] + 0ull;
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 11;
    { const bool t = c.r[2].d[0] == 0ull; c.r[7].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003D0F5C; } }
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.budget -= 1;
L_003D0F38:
    c.r[2].d[0] = c.r[4].sd[0] < 32ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], c.r[3].w[0] + 36u);  if (t) { goto L_003D0F5C; } }
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 6;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], c.r[4].w[0] + 1u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003D0F38u | kUnwind; return; } goto L_003D0F38; }
L_003D0F5C:
    set32(c.r[3], 0u + 32u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003D0FC0; } }
    set32(c.r[16], c.r[4].w[0] << 3);
    set32(c.r[2], c.r[6].w[0] + 5464u);
    set32(c.r[16], c.r[16].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00440000u);
    set32(c.r[16], c.r[16].w[0] << 2);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x003D0000u);
    set32(c.r[16], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] + 5408u);
    set32(c.r[6], c.r[6].w[0] + 23792u);
    set32(c.r[2], 0u + 1u);
    set32(c.r[5], c.r[5].w[0] + 3656u);
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0]), c.r[3].w[0]);
    st32((c.r[16].w[0] + 20u), c.r[8].w[0]);
    st32((c.r[16].w[0] + 24u), c.r[7].w[0]);
    st32((c.r[16].w[0] + 8u), c.r[6].w[0]);
    st32((c.r[16].w[0] + 28u), c.r[5].w[0]);
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D0FBCu); st32((c.r[16].w[0] + 32u), c.r[16].w[0]);  if (depth < kMaxDepth) unit_00B4(c, 131u, depth + 1u); else { c.pc = 0x003D1020u; return; } if (c.pc != 0x003D0FBCu) [[unlikely]] return; }
L_003D0FBC:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_003D0FC0:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003D0FD0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 5;
    { const bool t = c.r[16].d[0] == 0ull; st64((c.r[29].w[0] + 8u), c.r[31].d[0]);  if (t) { goto L_003D0FF4; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D0FF0u); set32(c.r[6], 0u + 36u);  if (depth < kMaxDepth) unit_0009(c, 49u, depth + 1u); else { c.pc = 0x00124ED8u; return; } if (c.pc != 0x003D0FF0u) [[unlikely]] return; }
L_003D0FF0:
    st32((c.r[16].w[0] + 4u), 0u);
    c.budget -= 1;
L_003D0FF4:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003D1008:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[4].w[0] + 8u)));  c.pc = t; return; }
L_003D1010:
    st32((c.r[4].w[0] + 32u), c.r[6].w[0]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 28u), c.r[5].w[0]);  c.pc = t; return; }
L_003D1020:
    set32(c.r[2], ld32((c.r[4].w[0] + 24u)));
    st32((c.r[4].w[0] + 16u), 0u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 12u), c.r[2].w[0]);  c.pc = t; return; }
L_003D1030:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[2].d[0]; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_003D1048; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[4].w[0] + 12u)));  if (t) { goto L_003D106C; } }
L_003D1048:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003D106C; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 28u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_003D106C; }
    set32(c.r[4], ld32((c.r[4].w[0] + 32u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003D1068u); set32(c.r[5], 0u - 3u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003D1068u) [[unlikely]] return; }
L_003D1068:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003D106C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003D1078:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D10A4u); c.r[19].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B4(c, 117u, depth + 1u); else { c.pc = 0x003D0E00u; return; } if (c.pc != 0x003D10A4u) [[unlikely]] return; }
L_003D10A4:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_003D10B8; } }
    st32((c.r[16].w[0]), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 4u), 0u);  if (t) { goto L_003D1118; } }
L_003D10B8:
    c.budget -= 2;
    if (c.r[18].d[0] != c.r[2].d[0]) { set32(c.r[2], ld32((c.r[17].w[0] + 28u)));  goto L_003D1100; }
    set32(c.r[2], ld32((c.r[17].w[0] + 12u)));
    set32(c.r[5], ld32((c.r[17].w[0] + 20u)));
    c.r[3].d[0] = c.r[2].sd[0] < c.r[19].sd[0] ? 1ull : 0ull;
    if (c.r[3].d[0] == 0) c.r[2].d[0] = c.r[19].d[0];
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 16u)));
    set32(c.r[3], ld32((c.r[17].w[0] + 12u)));
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[5], c.r[5].w[0] + c.r[4].w[0]);
    st32((c.r[17].w[0] + 16u), c.r[2].w[0]);
    st32((c.r[16].w[0]), c.r[5].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] - c.r[2].w[0]);
    c.budget -= 15;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 12u), c.r[3].w[0]);  if (t) { goto L_003D1118; } }
    c.budget -= 1;
L_003D1100:
    st32((c.r[16].w[0]), 0u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[16].w[0] + 4u), 0u);  if (t) { goto L_003D1118; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 32u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003D1118u); set32(c.r[5], 0u - 3u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003D1118u) [[unlikely]] return; }
L_003D1118:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 48u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003D0E18u | kUnwind; return; } goto L_003D0E18; }
L_003D1138:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 10;
    { const bool t = c.r[2].sd[0] <= 0; c.r[18].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003D11B8; } }
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_003D11BC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D1174u);  if (depth < kMaxDepth) unit_00B4(c, 117u, depth + 1u); else { c.pc = 0x003D0E00u; return; } if (c.pc != 0x003D1174u) [[unlikely]] return; }
L_003D1174:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_003D11A0; } }
    c.budget -= 2;
    if (c.r[17].d[0] == c.r[2].d[0]) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_003D11A4; }
    set32(c.r[2], ld32((c.r[18].w[0] + 28u)));
    st32((c.r[16].w[0]), 0u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[16].w[0] + 4u), 0u);  if (t) { goto L_003D11A0; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 32u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003D11A0u); set32(c.r[5], 0u - 3u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003D11A0u) [[unlikely]] return; }
L_003D11A0:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_003D11A4:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003D0E18u | kUnwind; return; } goto L_003D0E18; }
L_003D11B8:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_003D11BC:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003D11D0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 10;
    { const bool t = c.r[2].sd[0] <= 0; c.r[18].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003D12B0; } }
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_003D12B4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D120Cu);  if (depth < kMaxDepth) unit_00B4(c, 117u, depth + 1u); else { c.pc = 0x003D0E00u; return; } if (c.pc != 0x003D120Cu) [[unlikely]] return; }
L_003D120C:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_003D1260; } }
    c.budget -= 2;
    if (c.r[18].d[0] != c.r[2].d[0]) { set32(c.r[2], ld32((c.r[16].w[0] + 28u)));  goto L_003D1280; }
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[4], c.r[4].w[0] - c.r[2].w[0]);
    set32(c.r[7], ld32((c.r[16].w[0] + 24u)));
    c.r[2].d[0] = c.r[4].sd[0] < 0ll ? 1ull : 0ull;
    set32(c.r[3], ld32((c.r[16].w[0] + 20u)));
    if (c.r[2].d[0] != 0) c.r[4].d[0] = 0ull;
    set32(c.r[6], ld32((c.r[17].w[0])));
    st32((c.r[16].w[0] + 16u), c.r[4].w[0]);
    set32(c.r[6], c.r[6].w[0] - c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[5], c.r[5].w[0] + c.r[2].w[0]);
    c.r[3].d[0] = c.r[7].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    if (c.r[3].d[0] != 0) c.r[5].d[0] = c.r[7].d[0];
    c.budget -= 17;
    { const bool t = c.r[4].d[0] == c.r[6].d[0]; st32((c.r[16].w[0] + 12u), c.r[5].w[0]);  if (t) { goto L_003D1298; } }
L_003D1260:
    set32(c.r[2], ld32((c.r[16].w[0] + 28u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_003D129C; }
    set32(c.r[4], ld32((c.r[16].w[0] + 32u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003D1278u); set32(c.r[5], 0u - 3u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003D1278u) [[unlikely]] return; }
L_003D1278:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_003D129C; } }
L_003D1280:
    st32((c.r[17].w[0]), 0u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[17].w[0] + 4u), 0u);  if (t) { goto L_003D1298; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 32u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003D1298u); set32(c.r[5], 0u - 3u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003D1298u) [[unlikely]] return; }
L_003D1298:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_003D129C:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003D0E18u | kUnwind; return; } goto L_003D0E18; }
L_003D12B0:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_003D12B4:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003D12C8:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 40u), c.r[31].d[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D12FCu); c.r[20].d[0] = c.r[7].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B4(c, 117u, depth + 1u); else { c.pc = 0x003D0E00u; return; } if (c.pc != 0x003D12FCu) [[unlikely]] return; }
L_003D12FC:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_003D133C; } }
    c.budget -= 2;
    if (c.r[19].d[0] != c.r[2].d[0]) { set32(c.r[2], ld32((c.r[16].w[0] + 28u)));  goto L_003D1328; }
    set32(c.r[4], ld32((c.r[16].w[0] + 12u)));
    c.r[2].d[0] = c.r[4].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[17].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_003D133C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003D133C; } }
    c.budget -= 1;
L_003D1328:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_003D133C; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 32u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003D133Cu); set32(c.r[5], 0u - 3u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003D133Cu) [[unlikely]] return; }
L_003D133C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D1344u); st32((c.r[20].w[0]), c.r[17].w[0]);  if (depth < kMaxDepth) unit_00B4(c, 118u, depth + 1u); else { c.pc = 0x003D0E18u; return; } if (c.pc != 0x003D1344u) [[unlikely]] return; }
L_003D1344:
    c.r[2].d[0] = c.r[17].d[0] ^ c.r[18].d[0];
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 40u));
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003D1370:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[4].w[0] + 20u)));  c.pc = t; return; }
L_003D1378:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[4].w[0] + 24u)));  c.pc = t; return; }
L_003D1380:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] + 23888u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003D0E30u | kUnwind; return; } goto L_003D0E30; }
L_003D13A0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00440000u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[2], c.r[2].w[0] + 6616u);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D13BCu); set32(c.r[3], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_00B4(c, 117u, depth + 1u); else { c.pc = 0x003D0E00u; return; } if (c.pc != 0x003D13BCu) [[unlikely]] return; }
L_003D13BC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00440000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00440000u);
    set32(c.r[16], c.r[2].w[0] + 6672u);
    set32(c.r[4], c.r[4].w[0] + 6680u);
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[6], 0u + 16384u);  if (t) { goto L_003D13E8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D13E4u);  if (depth < kMaxDepth) unit_0009(c, 49u, depth + 1u); else { c.pc = 0x00124ED8u; return; } if (c.pc != 0x003D13E4u) [[unlikely]] return; }
L_003D13E4:
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 1;
L_003D13E8:
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003D0E18u | kUnwind; return; } goto L_003D0E18; }
L_003D1400:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D1410u);  if (depth < kMaxDepth) unit_00B4(c, 117u, depth + 1u); else { c.pc = 0x003D0E00u; return; } if (c.pc != 0x003D1410u) [[unlikely]] return; }
L_003D1410:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00440000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00440000u);
    set32(c.r[3], c.r[3].w[0] + 6672u);
    set32(c.r[4], c.r[4].w[0] + 6680u);
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 16384u);
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[3].w[0]), c.r[2].w[0]);  if (t) { goto L_003D1440; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D1440u);  if (depth < kMaxDepth) unit_0009(c, 49u, depth + 1u); else { c.pc = 0x00124ED8u; return; } if (c.pc != 0x003D1440u) [[unlikely]] return; }
L_003D1440:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003D0E18u | kUnwind; return; } goto L_003D0E18; }
L_003D1450:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D1478u); c.r[19].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B4(c, 117u, depth + 1u); else { c.pc = 0x003D0E00u; return; } if (c.pc != 0x003D1478u) [[unlikely]] return; }
L_003D1478:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00440000u);
    set32(c.r[2], c.r[5].w[0] + 6680u);
    set32(c.r[2], c.r[2].w[0] + 4u);
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_003D14BC; } }
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.budget -= 2;
L_003D1498:
    c.r[2].d[0] = c.r[4].sd[0] < 256ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], c.r[3].w[0] + 64u);  if (t) { goto L_003D14BC; } }
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 6;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], c.r[4].w[0] + 1u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003D1498u | kUnwind; return; } goto L_003D1498; }
L_003D14BC:
    set32(c.r[2], 0u + 256u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_003D1518; } }
    set32(c.r[2], c.r[5].w[0] + 6680u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[4], c.r[4].w[0] << 6);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00440000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x003D0000u);
    set32(c.r[16], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] + 6624u);
    set32(c.r[5], c.r[5].w[0] + 23872u);
    set32(c.r[6], c.r[6].w[0] + 4992u);
    set32(c.r[2], 0u + 1u);
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0]), c.r[3].w[0]);
    st32((c.r[16].w[0] + 28u), c.r[17].w[0]);
    st32((c.r[16].w[0] + 32u), c.r[18].w[0]);
    st32((c.r[16].w[0] + 36u), c.r[19].w[0]);
    st32((c.r[16].w[0] + 8u), c.r[5].w[0]);
    st32((c.r[16].w[0] + 56u), c.r[6].w[0]);
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D1518u); st32((c.r[16].w[0] + 60u), c.r[16].w[0]);  if (depth < kMaxDepth) unit_00B4(c, 167u, depth + 1u); else { c.pc = 0x003D1598u; return; } if (c.pc != 0x003D1518u) [[unlikely]] return; }
L_003D1518:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D1520u);  if (depth < kMaxDepth) unit_00B4(c, 118u, depth + 1u); else { c.pc = 0x003D0E18u; return; } if (c.pc != 0x003D1520u) [[unlikely]] return; }
L_003D1520:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003D1540:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D1554u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B4(c, 117u, depth + 1u); else { c.pc = 0x003D0E00u; return; } if (c.pc != 0x003D1554u) [[unlikely]] return; }
L_003D1554:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; set32(c.r[6], 0u + 64u);  if (t) { goto L_003D1570; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D156Cu);  if (depth < kMaxDepth) unit_0009(c, 49u, depth + 1u); else { c.pc = 0x00124ED8u; return; } if (c.pc != 0x003D156Cu) [[unlikely]] return; }
L_003D156C:
    st32((c.r[16].w[0] + 4u), 0u);
    c.budget -= 1;
L_003D1570:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003D0E18u | kUnwind; return; } goto L_003D0E18; }
L_003D1580:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[4].w[0] + 8u)));  c.pc = t; return; }
L_003D1588:
    st32((c.r[4].w[0] + 60u), c.r[6].w[0]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 56u), c.r[5].w[0]);  c.pc = t; return; }
L_003D1598:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D15ACu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B4(c, 117u, depth + 1u); else { c.pc = 0x003D0E00u; return; } if (c.pc != 0x003D15ACu) [[unlikely]] return; }
L_003D15AC:
    set32(c.r[2], ld32((c.r[16].w[0] + 32u)));
    st32((c.r[16].w[0] + 52u), 0u);
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 12u), 0u);
    st32((c.r[16].w[0] + 20u), 0u);
    st32((c.r[16].w[0] + 24u), 0u);
    st32((c.r[16].w[0] + 40u), 0u);
    st32((c.r[16].w[0] + 44u), 0u);
    st32((c.r[16].w[0] + 48u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 13;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003D0E18u | kUnwind; return; } goto L_003D0E18; }
L_003D15E0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[2].d[0]; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_003D15F8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[4].w[0] + 12u)));  if (t) { goto L_003D1620; } }
L_003D15F8:
    c.budget -= 2;
    if (c.r[5].d[0] != 0ull) { set32(c.r[2], ld32((c.r[4].w[0] + 56u)));  goto L_003D1608; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[4].w[0] + 16u)));  if (t) { goto L_003D1620; } }
L_003D1608:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_003D1620; }
    set32(c.r[4], ld32((c.r[4].w[0] + 60u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003D161Cu); set32(c.r[5], 0u - 3u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003D161Cu) [[unlikely]] return; }
L_003D161C:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003D1620:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003D1630:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D165Cu); c.r[19].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B4(c, 117u, depth + 1u); else { c.pc = 0x003D0E00u; return; } if (c.pc != 0x003D165Cu) [[unlikely]] return; }
L_003D165C:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_003D16E0; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 32u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 36u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[6], ld32((c.r[16].w[0] + 28u)));
    c.r[3].d[0] = c.r[5].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    if (c.r[3].d[0] != 0) c.r[2].d[0] = c.r[5].d[0];
    c.r[4].d[0] = c.r[2].sd[0] < c.r[19].sd[0] ? 1ull : 0ull;
    if (c.r[4].d[0] == 0) c.r[2].d[0] = c.r[19].d[0];
    st32((c.r[17].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 32u)));
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[6], c.r[6].w[0] + c.r[4].w[0]);
    mmi::div(c, 0, c.r[2].w[0], c.r[3].w[0]);
    st32((c.r[17].w[0]), c.r[6].w[0]);
    c.budget -= 20;
    if (c.r[3].d[0] == 0ull) { breakpoint(c, 0x003D16B0u);  goto L_003D16B4; }
L_003D16B4:
    set32(c.r[4], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 40u)));
    c.r[5].d[0] = c.hi.d[0];
    st32((c.r[16].w[0] + 20u), c.r[5].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[4], c.r[4].w[0] - c.r[2].w[0]);
    st32((c.r[16].w[0] + 16u), c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 40u), c.r[3].w[0]);  if (t) { goto L_003D1780; } }
L_003D16E0:
    c.budget -= 2;
    if (c.r[18].d[0] != c.r[2].d[0]) { set32(c.r[2], ld32((c.r[16].w[0] + 56u)));  goto L_003D1768; }
    set32(c.r[3], ld32((c.r[16].w[0] + 24u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 32u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 36u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[6], ld32((c.r[16].w[0] + 28u)));
    c.r[3].d[0] = c.r[5].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    if (c.r[3].d[0] != 0) c.r[2].d[0] = c.r[5].d[0];
    c.r[4].d[0] = c.r[2].sd[0] < c.r[19].sd[0] ? 1ull : 0ull;
    if (c.r[4].d[0] == 0) c.r[2].d[0] = c.r[19].d[0];
    st32((c.r[17].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 32u)));
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[6], c.r[6].w[0] + c.r[4].w[0]);
    mmi::div(c, 0, c.r[2].w[0], c.r[3].w[0]);
    st32((c.r[17].w[0]), c.r[6].w[0]);
    c.budget -= 20;
    if (c.r[3].d[0] == 0ull) { breakpoint(c, 0x003D1734u);  goto L_003D1738; }
L_003D1738:
    set32(c.r[4], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 48u)));
    c.r[5].d[0] = c.hi.d[0];
    st32((c.r[16].w[0] + 24u), c.r[5].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[4], c.r[4].w[0] - c.r[2].w[0]);
    st32((c.r[16].w[0] + 12u), c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 48u), c.r[3].w[0]);  if (t) { goto L_003D1780; } }
    c.budget -= 1;
L_003D1768:
    st32((c.r[17].w[0]), 0u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[17].w[0] + 4u), 0u);  if (t) { goto L_003D1780; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 60u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003D1780u); set32(c.r[5], 0u - 3u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003D1780u) [[unlikely]] return; }
L_003D1780:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 48u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003D0E18u | kUnwind; return; } goto L_003D0E18; }
L_003D17A0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 10;
    { const bool t = c.r[2].sd[0] <= 0; c.r[18].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003D18E8; } }
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_003D18EC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D17DCu);  if (depth < kMaxDepth) unit_00B4(c, 117u, depth + 1u); else { c.pc = 0x003D0E00u; return; } if (c.pc != 0x003D17DCu) [[unlikely]] return; }
L_003D17DC:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] != c.r[2].d[0];  if (t) { goto L_003D1888; } }
    set32(c.r[5], ld32((c.r[17].w[0])));
    set32(c.r[9], ld32((c.r[16].w[0] + 28u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[7], c.r[5].w[0] - c.r[9].w[0]);
    set32(c.r[6], ld32((c.r[16].w[0] + 36u)));
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    c.r[3].d[0] = c.r[7].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[3].d[0] == 0ull; st32((c.r[16].w[0] + 12u), c.r[2].w[0]);  if (t) { goto L_003D1838; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[6], c.r[6].w[0] - c.r[7].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 32u)));
    c.r[2].d[0] = c.r[3].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    set32(c.r[4], c.r[4].w[0] + c.r[7].w[0]);
    if (c.r[2].d[0] != 0) c.r[6].d[0] = c.r[3].d[0];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D1830u); set32(c.r[4], c.r[9].w[0] + c.r[4].w[0]);  if (depth < kMaxDepth) unit_0009(c, 40u, depth + 1u); else { c.pc = 0x00124D20u; return; } if (c.pc != 0x003D1830u) [[unlikely]] return; }
L_003D1830:
    set32(c.r[5], ld32((c.r[17].w[0])));
    set32(c.r[9], ld32((c.r[16].w[0] + 28u)));
    c.budget -= 2;
L_003D1838:
    set32(c.r[8], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[3], c.r[5].w[0] - c.r[9].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 32u)));
    set32(c.r[7], c.r[3].w[0] + c.r[8].w[0]);
    c.r[2].d[0] = c.r[4].sd[0] < c.r[7].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 52u)));  goto L_003D1878; }
    set32(c.r[6], c.r[7].w[0] - c.r[4].w[0]);
    c.r[4].d[0] = c.r[9].d[0] + 0ull;
    c.r[2].d[0] = c.r[8].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    if (c.r[2].d[0] != 0) c.r[6].d[0] = c.r[8].d[0];
    set32(c.r[5], c.r[7].w[0] - c.r[6].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D1870u); set32(c.r[5], c.r[4].w[0] + c.r[5].w[0]);  if (depth < kMaxDepth) unit_0009(c, 40u, depth + 1u); else { c.pc = 0x00124D20u; return; } if (c.pc != 0x003D1870u) [[unlikely]] return; }
L_003D1870:
    set32(c.r[8], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 52u)));
    c.budget -= 2;
L_003D1878:
    set32(c.r[2], c.r[2].w[0] + c.r[8].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 52u), c.r[2].w[0]);  if (t) { goto L_003D18D0; } }
    c.budget -= 1;
L_003D1888:
    c.budget -= 2;
    if (c.r[18].d[0] != 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 56u)));  goto L_003D18B8; }
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 44u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[4], c.r[4].w[0] + c.r[3].w[0]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 44u), c.r[4].w[0]);  if (t) { goto L_003D18D0; } }
    c.budget -= 1;
L_003D18B8:
    st32((c.r[17].w[0]), 0u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[17].w[0] + 4u), 0u);  if (t) { goto L_003D18D0; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 60u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003D18D0u); set32(c.r[5], 0u - 3u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003D18D0u) [[unlikely]] return; }
L_003D18D0:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003D0E18u | kUnwind; return; } goto L_003D0E18; }
L_003D18E8:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_003D18EC:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003D1900:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 10;
    { const bool t = c.r[2].sd[0] <= 0; c.r[18].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003D1A80; } }
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_003D1A84; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D193Cu);  if (depth < kMaxDepth) unit_00B4(c, 117u, depth + 1u); else { c.pc = 0x003D0E00u; return; } if (c.pc != 0x003D193Cu) [[unlikely]] return; }
L_003D193C:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_003D19C8; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 32u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[7], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { breakpoint(c, 0x003D1954u);  goto L_003D1958; }
L_003D1958:
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0])));
    set32(c.r[3], c.r[3].w[0] - c.r[7].w[0]);
    set32(c.r[5], ld32((c.r[16].w[0] + 28u)));
    mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] - c.r[5].w[0]);
    c.r[6].d[0] = c.hi.d[0];
    mmi::div(c, 0, c.r[4].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.hi.d[0];
    c.budget -= 11;
    if (c.r[6].d[0] != c.r[3].d[0]) { set32(c.r[2], ld32((c.r[16].w[0] + 56u)));  goto L_003D19A0; }
    st32((c.r[16].w[0] + 20u), c.r[6].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 16u), c.r[2].w[0]);  if (t) { goto L_003D19B4; } }
    c.budget -= 1;
L_003D19A0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 40u)));  goto L_003D19BC; }
    set32(c.r[4], ld32((c.r[16].w[0] + 60u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003D19B4u); set32(c.r[5], 0u - 3u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003D19B4u) [[unlikely]] return; }
L_003D19B4:
    set32(c.r[7], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 40u)));
    c.budget -= 2;
L_003D19BC:
    set32(c.r[2], c.r[2].w[0] - c.r[7].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 40u), c.r[2].w[0]);  if (t) { goto L_003D1A68; } }
L_003D19C8:
    c.budget -= 2;
    if (c.r[18].d[0] != c.r[2].d[0]) { set32(c.r[2], ld32((c.r[16].w[0] + 56u)));  goto L_003D1A50; }
    set32(c.r[2], ld32((c.r[16].w[0] + 32u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 24u)));
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { breakpoint(c, 0x003D19DCu);  goto L_003D19E0; }
L_003D19E0:
    set32(c.r[5], ld32((c.r[17].w[0])));
    set32(c.r[3], ld32((c.r[16].w[0] + 28u)));
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[7], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[5], c.r[5].w[0] - c.r[3].w[0]);
    set32(c.r[4], c.r[4].w[0] - c.r[7].w[0]);
    mmi::div(c, 1, c.r[5].w[0], c.r[2].w[0]);
    mmi::div(c, 0, c.r[4].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.hi.d[1];
    c.r[4].d[0] = c.hi.d[0];
    c.budget -= 12;
    if (c.r[4].d[0] != c.r[3].d[0]) { set32(c.r[2], ld32((c.r[16].w[0] + 56u)));  goto L_003D1A28; }
    st32((c.r[16].w[0] + 24u), c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 12u), c.r[2].w[0]);  if (t) { goto L_003D1A3C; } }
L_003D1A28:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 48u)));  goto L_003D1A44; }
    set32(c.r[4], ld32((c.r[16].w[0] + 60u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003D1A3Cu); set32(c.r[5], 0u - 3u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003D1A3Cu) [[unlikely]] return; }
L_003D1A3C:
    set32(c.r[7], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 48u)));
    c.budget -= 2;
L_003D1A44:
    set32(c.r[2], c.r[2].w[0] - c.r[7].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 48u), c.r[2].w[0]);  if (t) { goto L_003D1A68; } }
L_003D1A50:
    st32((c.r[17].w[0]), 0u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[17].w[0] + 4u), 0u);  if (t) { goto L_003D1A68; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 60u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003D1A68u); set32(c.r[5], 0u - 3u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003D1A68u) [[unlikely]] return; }
L_003D1A68:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003D0E18u | kUnwind; return; } goto L_003D0E18; }
L_003D1A80:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_003D1A84:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003D1A98:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D1AC4u); c.r[19].d[0] = c.r[7].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B4(c, 117u, depth + 1u); else { c.pc = 0x003D0E00u; return; } if (c.pc != 0x003D1AC4u) [[unlikely]] return; }
L_003D1AC4:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_003D1AE8; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 20u)));
    set32(c.r[3], ld32((c.r[17].w[0] + 32u)));
    set32(c.r[5], ld32((c.r[17].w[0] + 36u)));
    set32(c.r[3], c.r[3].w[0] - c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[17].w[0] + 16u)));  if (t) { goto L_003D1B04; } }
    c.budget -= 1;
L_003D1AE8:
    c.budget -= 2;
    if (c.r[16].d[0] != c.r[2].d[0]) { set32(c.r[2], ld32((c.r[17].w[0] + 56u)));  goto L_003D1B20; }
    set32(c.r[2], ld32((c.r[17].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[17].w[0] + 32u)));
    set32(c.r[5], ld32((c.r[17].w[0] + 36u)));
    set32(c.r[3], c.r[3].w[0] - c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 5;
L_003D1B04:
    set32(c.r[16], c.r[3].w[0] + c.r[5].w[0]);
    c.r[2].d[0] = c.r[4].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    if (c.r[2].d[0] != 0) c.r[16].d[0] = c.r[4].d[0];
    c.r[3].d[0] = c.r[16].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = 0ull == 0ull; if (c.r[3].d[0] == 0) c.r[16].d[0] = c.r[18].d[0];  if (t) { goto L_003D1B34; } }
    c.budget -= 1;
L_003D1B20:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_003D1B34; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 60u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003D1B34u); set32(c.r[5], 0u - 3u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003D1B34u) [[unlikely]] return; }
L_003D1B34:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D1B3Cu); st32((c.r[19].w[0]), c.r[16].w[0]);  if (depth < kMaxDepth) unit_00B4(c, 118u, depth + 1u); else { c.pc = 0x003D0E18u; return; } if (c.pc != 0x003D1B3Cu) [[unlikely]] return; }
L_003D1B3C:
    c.r[2].d[0] = c.r[16].d[0] ^ c.r[18].d[0];
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003D1B60:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[4].w[0] + 28u)));  c.pc = t; return; }
L_003D1B68:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[4].w[0] + 32u)));  c.pc = t; return; }
L_003D1B70:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[4].w[0] + 36u)));  c.pc = t; return; }
L_003D1B78:
    set32(c.r[5], c.r[5].w[0] << 1);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[4].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[5].w[0] + 40u), c.r[7].w[0]);  c.pc = t; return; }
L_003D1B90:
    set32(c.r[5], c.r[5].w[0] << 1);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[4].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[5].w[0] + 40u)));  c.pc = t; return; }
L_003D1BA8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] + 23920u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003D0E30u | kUnwind; return; } goto L_003D0E30; }
L_003D1BC8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00440000u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[16], c.r[2].w[0] + 23112u);
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; st64((c.r[29].w[0] + 8u), c.r[31].d[0]);  if (t) { goto L_003D1BFC; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00440000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] + 23120u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D1BF8u); set32(c.r[6], 0u + 3072u);  if (depth < kMaxDepth) unit_0009(c, 49u, depth + 1u); else { c.pc = 0x00124ED8u; return; } if (c.pc != 0x003D1BF8u) [[unlikely]] return; }
L_003D1BF8:
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 1;
L_003D1BFC:
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003D1C18:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00440000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], c.r[3].w[0] + 23112u);
    set32(c.r[2], ld32((c.r[3].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[3].w[0]), c.r[2].w[0]);  if (t) { goto L_003D1C58; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00440000u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] + 23120u);
    set32(c.r[6], 0u + 3072u);
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00124ED8u | kUnwind; return; } [[clang::musttail]] return unit_0009(c, 49u, depth); }
L_003D1C58:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003D1C68:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00440000u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[3], c.r[8].w[0] + 23120u);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.r[9].d[0] = c.r[4].d[0] + 0ull;
    c.r[10].d[0] = c.r[5].d[0] + 0ull;
    c.r[7].d[0] = c.r[6].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 4u)));
    c.budget -= 11;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_003D1CC4; } }
    set32(c.r[3], c.r[3].w[0] + 4u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.budget -= 3;
L_003D1CA0:
    c.r[2].d[0] = c.r[4].sd[0] < 64ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], c.r[3].w[0] + 48u);  if (t) { goto L_003D1CC4; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 6;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], c.r[4].w[0] + 1u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003D1CA0u | kUnwind; return; } goto L_003D1CA0; }
L_003D1CC4:
    set32(c.r[3], 0u + 64u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003D1D3C; } }
    set32(c.r[16], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[8].w[0] + 23120u);
    set32(c.r[16], c.r[16].w[0] + c.r[4].w[0]);
    set32(c.r[4], c.r[7].w[0] + 15u);
    c.r[2].d[0] = c.r[7].sd[0] < 0ll ? 1ull : 0ull;
    set32(c.r[16], c.r[16].w[0] << 4);
    set32(c.r[16], c.r[16].w[0] + c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00440000u);
    if (c.r[2].d[0] != 0) c.r[7].d[0] = c.r[4].d[0];
    set32(c.r[2], 0u + 1u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x003D0000u);
    set32(c.r[3], c.r[3].w[0] + 23064u);
    set32(c.r[5], c.r[5].w[0] + 23904u);
    set32(c.r[7], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[7].w[0]) >> 4));
    set32(c.r[6], c.r[6].w[0] + 7080u);
    st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0]), c.r[3].w[0]);
    st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(c.r[9].w[0]));
    st32((c.r[16].w[0] + 8u), c.r[5].w[0]);
    st32((c.r[16].w[0] + 12u), c.r[10].w[0]);
    st32((c.r[16].w[0] + 16u), c.r[7].w[0]);
    st32((c.r[16].w[0] + 40u), c.r[6].w[0]);
    c.budget -= 26;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D1D38u); st32((c.r[16].w[0] + 44u), c.r[16].w[0]);  if (depth < kMaxDepth) unit_00B4(c, 204u, depth + 1u); else { c.pc = 0x003D1DA0u; return; } if (c.pc != 0x003D1D38u) [[unlikely]] return; }
L_003D1D38:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_003D1D3C:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003D1D50:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 5;
    { const bool t = c.r[16].d[0] == 0ull; st64((c.r[29].w[0] + 8u), c.r[31].d[0]);  if (t) { goto L_003D1D74; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D1D70u); set32(c.r[6], 0u + 48u);  if (depth < kMaxDepth) unit_0009(c, 49u, depth + 1u); else { c.pc = 0x00124ED8u; return; } if (c.pc != 0x003D1D70u) [[unlikely]] return; }
L_003D1D70:
    st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_003D1D74:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003D1D88:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[4].w[0] + 8u)));  c.pc = t; return; }
L_003D1D90:
    st32((c.r[4].w[0] + 44u), c.r[6].w[0]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 40u), c.r[5].w[0]);  c.pc = t; return; }
L_003D1DA0:
    set32(c.r[2], ld32((c.r[4].w[0] + 16u)));
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] <= 0; st32((c.r[4].w[0] + 20u), c.r[7].w[0]);  if (t) { goto L_003D1DE8; } }
    c.r[5].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 2;
L_003D1DC0:
    st32((c.r[5].w[0] + 12u), 0u);
    set32(c.r[6], c.r[6].w[0] + 1u);
    set32(c.r[3], c.r[5].w[0] + 16u);
    st32((c.r[5].w[0] + 8u), 0u);
    set32(c.r[2], ld32((c.r[4].w[0] + 16u)));
    st32((c.r[5].w[0]), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[2].d[0] = c.r[6].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull; c.r[5].d[0] = c.r[3].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003D1DC0u | kUnwind; return; } goto L_003D1DC0; } }
L_003D1DE8:
    set32(c.r[2], c.r[6].w[0] << 4);
    set32(c.r[6], 0u + 3u);
    set32(c.r[2], c.r[2].w[0] + c.r[7].w[0]);
    set32(c.r[4], c.r[4].w[0] + 36u);
    st32((c.r[2].w[0] + 12u), 0u);
    st32((c.r[2].w[0]), 0u);
    st32((c.r[2].w[0] + 8u), 0u);
    c.budget -= 8;
L_003D1E08:
    set32(c.r[6], c.r[6].w[0] - 1u);
    st32((c.r[4].w[0]), 0u);
    c.budget -= 7;
    { const bool t = c.r[6].sd[0] >= 0; set32(c.r[4], c.r[4].w[0] - 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003D1E08u | kUnwind; return; } goto L_003D1E08; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003D1E30:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(4ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_003D1E60; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 40u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_003D1E98; }
    set32(c.r[4], ld32((c.r[4].w[0] + 44u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003D1E58u); set32(c.r[5], 0u - 3u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003D1E58u) [[unlikely]] return; }
L_003D1E58:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003D1E98; } }
L_003D1E60:
    set32(c.r[2], c.r[5].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 24u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_003D1E94; } }
    c.budget -= 1;
L_003D1E78:
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003D1E78u | kUnwind; return; } goto L_003D1E78; } }
L_003D1E94:
    c.r[2].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 1;
L_003D1E98:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003D1EA8:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    c.r[2].d[0] = c.r[18].d[0] < static_cast<std::uint64_t>(4ll) ? 1ull : 0ull;
    st64((c.r[29].w[0] + 32u), c.r[16].d[0]);
    st64((c.r[29].w[0] + 40u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 56u), c.r[19].d[0]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    c.budget -= 12;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003D1F00; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 40u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { st32((c.r[17].w[0] + 4u), 0u);  goto L_003D1EF4; }
    set32(c.r[4], ld32((c.r[16].w[0] + 44u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003D1EF0u); set32(c.r[5], 0u - 3u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003D1EF0u) [[unlikely]] return; }
L_003D1EF0:
    st32((c.r[17].w[0] + 4u), 0u);
    c.budget -= 1;
L_003D1EF4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0]), 0u);  if (t) { goto L_003D1FC0; } }
    c.budget -= 1;
L_003D1F00:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D1F08u);  if (depth < kMaxDepth) unit_00B4(c, 117u, depth + 1u); else { c.pc = 0x003D0E00u; return; } if (c.pc != 0x003D1F08u) [[unlikely]] return; }
L_003D1F08:
    set32(c.r[2], c.r[18].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[5], c.r[2].w[0] + 24u);
    set32(c.r[4], ld32((c.r[5].w[0])));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[18], c.r[4].w[0] + 8u);  if (t) { goto L_003D1FB0; } }
    ldl(c.r[2], (c.r[18].w[0] + 7u));
    ldr(c.r[2], (c.r[18].w[0]));
    sdl(c.r[2], (c.r[29].w[0] + 7u));
    sdr(c.r[2], (c.r[29].w[0]));
    set32(c.r[2], ld32((c.r[29].w[0] + 4u)));
    c.r[2].d[0] = c.r[19].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    if (c.r[2].d[0] != 0ull) { c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 5u)));  goto L_003D1F68; }
    set32(c.r[3], ld32((c.r[4].w[0])));
    ldl(c.r[8], (c.r[29].w[0] + 7u));
    ldr(c.r[8], (c.r[29].w[0]));
    sdl(c.r[8], (c.r[17].w[0] + 7u));
    sdr(c.r[8], (c.r[17].w[0]));
    st32((c.r[5].w[0]), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 20u)));
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 20u), c.r[4].w[0]);  if (t) { goto L_003D1FB8; } }
L_003D1F68:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { st32((c.r[17].w[0] + 4u), 0u);  goto L_003D1FB4; }
    set32(c.r[16], c.r[29].w[0] + 16u);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D1F8Cu); c.r[7].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B4(c, 230u, depth + 1u); else { c.pc = 0x003D2388u; return; } if (c.pc != 0x003D1F8Cu) [[unlikely]] return; }
L_003D1F8C:
    ldl(c.r[8], (c.r[29].w[0] + 7u));
    ldr(c.r[8], (c.r[29].w[0]));
    sdl(c.r[8], (c.r[17].w[0] + 7u));
    sdr(c.r[8], (c.r[17].w[0]));
    ldl(c.r[5], (c.r[16].w[0] + 7u));
    ldr(c.r[5], (c.r[16].w[0]));
    sdl(c.r[5], (c.r[18].w[0] + 7u));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; sdr(c.r[5], (c.r[18].w[0]));  if (t) { goto L_003D1FB8; } }
L_003D1FB0:
    st32((c.r[17].w[0] + 4u), 0u);
    c.budget -= 1;
L_003D1FB4:
    st32((c.r[17].w[0]), 0u);
    c.budget -= 1;
L_003D1FB8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D1FC0u);  if (depth < kMaxDepth) unit_00B4(c, 118u, depth + 1u); else { c.pc = 0x003D0E18u; return; } if (c.pc != 0x003D1FC0u) [[unlikely]] return; }
L_003D1FC0:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 56u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003D1FE0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    c.r[2].d[0] = c.r[18].d[0] < static_cast<std::uint64_t>(4ll) ? 1ull : 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003D2028; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 40u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_003D2120; }
    set32(c.r[4], ld32((c.r[16].w[0] + 44u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003D2020u); set32(c.r[5], 0u - 3u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003D2020u) [[unlikely]] return; }
L_003D2020:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_003D2120; } }
L_003D2028:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_003D2120; }
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_003D2120; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D2048u);  if (depth < kMaxDepth) unit_00B4(c, 117u, depth + 1u); else { c.pc = 0x003D0E00u; return; } if (c.pc != 0x003D2048u) [[unlikely]] return; }
L_003D2048:
    set32(c.r[2], c.r[18].w[0] << 2);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[5], c.r[2].w[0] + 24u);
    set32(c.r[2], ld32((c.r[5].w[0])));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_003D207C; } }
L_003D2060:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003D2060u | kUnwind; return; } goto L_003D2060; } }
L_003D207C:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 5u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[4], ld32((c.r[16].w[0] + 20u)));  goto L_003D20C0; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 20u)));  goto L_003D20C0; }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[6], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[3], ld32((c.r[17].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    c.budget -= 6;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[4], ld32((c.r[16].w[0] + 20u)));  goto L_003D20C0; }
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[6].w[0] + c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 12u), c.r[2].w[0]);  if (t) { goto L_003D2104; } }
    c.budget -= 1;
L_003D20C0:
    c.budget -= 2;
    if (c.r[4].d[0] != 0ull) { set32(c.r[2], ld32((c.r[4].w[0])));  goto L_003D20E8; }
    set32(c.r[2], ld32((c.r[16].w[0] + 40u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_003D2108; }
    set32(c.r[4], ld32((c.r[16].w[0] + 44u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003D20E0u); set32(c.r[5], 0u - 3u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003D20E0u) [[unlikely]] return; }
L_003D20E0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_003D2108; } }
L_003D20E8:
    ldl(c.r[3], (c.r[17].w[0] + 7u));
    ldr(c.r[3], (c.r[17].w[0]));
    sdl(c.r[3], (c.r[4].w[0] + 15u));
    sdr(c.r[3], (c.r[4].w[0] + 8u));
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    st32((c.r[4].w[0]), 0u);
    st32((c.r[5].w[0]), c.r[4].w[0]);
    c.budget -= 7;
L_003D2104:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_003D2108:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003D0E18u | kUnwind; return; } goto L_003D0E18; }
L_003D2120:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003D2138:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    c.r[2].d[0] = c.r[18].d[0] < static_cast<std::uint64_t>(4ll) ? 1ull : 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003D2180; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 40u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_003D2268; }
    set32(c.r[4], ld32((c.r[16].w[0] + 44u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003D2178u); set32(c.r[5], 0u - 3u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003D2178u) [[unlikely]] return; }
L_003D2178:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_003D2268; } }
L_003D2180:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_003D2268; }
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_003D2268; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D21A0u);  if (depth < kMaxDepth) unit_00B4(c, 117u, depth + 1u); else { c.pc = 0x003D0E00u; return; } if (c.pc != 0x003D21A0u) [[unlikely]] return; }
L_003D21A0:
    set32(c.r[5], c.r[18].w[0] << 2);
    set32(c.r[8], c.r[16].w[0] + 8u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 5u)));
    set32(c.r[3], c.r[5].w[0] + c.r[8].w[0]);
    set32(c.r[4], 0u + 1u);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != c.r[4].d[0]; set32(c.r[6], ld32((c.r[3].w[0] + 16u)));  if (t) { goto L_003D21F0; } }
    c.budget -= 2;
    if (c.r[6].d[0] == 0ull) { set32(c.r[6], ld32((c.r[16].w[0] + 20u)));  goto L_003D21F4; }
    set32(c.r[4], ld32((c.r[17].w[0])));
    set32(c.r[7], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[6].w[0] + 8u)));
    set32(c.r[2], c.r[4].w[0] + c.r[7].w[0]);
    c.budget -= 6;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[6], ld32((c.r[16].w[0] + 20u)));  goto L_003D21F4; }
    set32(c.r[2], ld32((c.r[6].w[0] + 12u)));
    st32((c.r[6].w[0] + 8u), c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[7].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[6].w[0] + 12u), c.r[2].w[0]);  if (t) { goto L_003D224C; } }
L_003D21F0:
    set32(c.r[6], ld32((c.r[16].w[0] + 20u)));
    c.budget -= 1;
L_003D21F4:
    c.budget -= 2;
    if (c.r[6].d[0] != 0ull) { set32(c.r[2], ld32((c.r[6].w[0])));  goto L_003D2220; }
    set32(c.r[2], ld32((c.r[16].w[0] + 40u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_003D2250; }
    set32(c.r[4], ld32((c.r[16].w[0] + 44u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003D2214u); set32(c.r[5], 0u - 3u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003D2214u) [[unlikely]] return; }
L_003D2214:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_003D2250; } }
    c.budget -= 1;
L_003D2220:
    set32(c.r[3], c.r[5].w[0] + 16u);
    set32(c.r[3], c.r[8].w[0] + c.r[3].w[0]);
    ldl(c.r[4], (c.r[17].w[0] + 7u));
    ldr(c.r[4], (c.r[17].w[0]));
    sdl(c.r[4], (c.r[6].w[0] + 15u));
    sdr(c.r[4], (c.r[6].w[0] + 8u));
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    st32((c.r[6].w[0]), 0u);
    set32(c.r[2], ld32((c.r[3].w[0])));
    st32((c.r[6].w[0]), c.r[2].w[0]);
    st32((c.r[3].w[0]), c.r[6].w[0]);
    c.budget -= 11;
L_003D224C:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_003D2250:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003D0E18u | kUnwind; return; } goto L_003D0E18; }
L_003D2268:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003D2280:
    set32(c.r[2], c.r[5].w[0] << 2);
    c.r[5].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(4ll) ? 1ull : 0ull;
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[8].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[8].w[0]);
    c.budget -= 8;
    { const bool t = c.r[5].d[0] != 0ull; st32((c.r[7].w[0]), 0u);  if (t) { goto L_003D22C0; } }
    set32(c.r[2], ld32((c.r[8].w[0] + 40u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_003D2300; }
    set32(c.r[4], ld32((c.r[8].w[0] + 44u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003D22B8u); set32(c.r[5], 0u - 3u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003D22B8u) [[unlikely]] return; }
L_003D22B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003D2300; } }
L_003D22C0:
    set32(c.r[3], ld32((c.r[2].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003D2300; } }
    ldl(c.r[2], (c.r[3].w[0] + 15u));
    ldr(c.r[2], (c.r[3].w[0] + 8u));
    sdl(c.r[2], (c.r[29].w[0] + 7u));
    sdr(c.r[2], (c.r[29].w[0]));
    set32(c.r[4], 0u + 1u);
    set32(c.r[3], ld32((c.r[29].w[0] + 4u)));
    st32((c.r[7].w[0]), c.r[3].w[0]);
    c.r[2].d[0] = c.r[3].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.r[6].d[0] = c.r[3].d[0] ^ c.r[6].d[0];
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0] + 5u)));
    c.budget -= 12;
    { const bool t = c.r[3].d[0] == c.r[4].d[0]; c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  if (t) { goto L_003D2300; } }
    c.r[2].d[0] = c.r[6].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 1;
L_003D2300:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003D2310:
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0] + 24u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003D2344; } }
    c.budget -= 1;
L_003D2328:
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[2], c.r[2].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003D2328u | kUnwind; return; } goto L_003D2328; } }
L_003D2344:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003D2350:
    set32(c.r[3], ld32((c.r[4].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003D237C; } }
    c.budget -= 1;
L_003D2360:
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[2], c.r[2].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003D2360u | kUnwind; return; } goto L_003D2360; } }
L_003D237C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003D2388:
    ldl(c.r[2], (c.r[4].w[0] + 7u));
    ldr(c.r[2], (c.r[4].w[0]));
    sdl(c.r[2], (c.r[6].w[0] + 7u));
    sdr(c.r[2], (c.r[6].w[0]));
    set32(c.r[2], ld32((c.r[6].w[0] + 4u)));
    st32((c.r[7].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[6].w[0] + 4u)));
    c.r[2].d[0] = c.r[5].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 10;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[7].w[0] + 4u)));  goto L_003D23BC; }
    st32((c.r[6].w[0] + 4u), c.r[5].w[0]);
    c.r[3].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[7].w[0] + 4u)));
    c.budget -= 3;
L_003D23BC:
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[7].w[0] + 4u), c.r[2].w[0]);  if (t) { goto L_003D23D0; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[7].w[0]), 0u);  c.pc = t; return; }
L_003D23D0:
    set32(c.r[2], ld32((c.r[6].w[0])));
    set32(c.r[3], ld32((c.r[6].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[7].w[0]), c.r[2].w[0]);  c.pc = t; return; }
L_003D23E8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00440000u);
    c.r[2].d[0] = c.r[4].d[0] & 15ull;
    set32(c.r[3], c.r[3].w[0] + 26192u);
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 4));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[6].d[0] = ld8((c.r[2].w[0]));
    c.r[2].d[0] = c.r[4].d[0] & 15ull;
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 4));
    st8((c.r[5].w[0] + 6u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[6].d[0] = c.r[4].d[0] & 15ull;
    set32(c.r[6], c.r[6].w[0] + c.r[3].w[0]);
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 4));
    c.r[7].d[0] = ld8((c.r[2].w[0]));
    c.r[2].d[0] = c.r[4].d[0] & 15ull;
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 4));
    st8((c.r[5].w[0] + 5u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.r[8].d[0] = c.r[4].d[0] & 15ull;
    set32(c.r[8], c.r[8].w[0] + c.r[3].w[0]);
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 4));
    c.r[9].d[0] = ld8((c.r[6].w[0]));
    c.r[7].d[0] = c.r[4].d[0] & 15ull;
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 4));
    set32(c.r[7], c.r[7].w[0] + c.r[3].w[0]);
    st8((c.r[5].w[0] + 4u), static_cast<std::uint8_t>(c.r[9].w[0]));
    c.r[4].d[0] = c.r[4].d[0] & 15ull;
    set32(c.r[4], c.r[4].w[0] + c.r[3].w[0]);
    c.r[6].d[0] = ld8((c.r[2].w[0]));
    st8((c.r[5].w[0] + 3u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[2].d[0] = ld8((c.r[8].w[0]));
    st8((c.r[5].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].d[0] = ld8((c.r[7].w[0]));
    st8((c.r[5].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[2].d[0] = ld8((c.r[4].w[0]));
    c.budget -= 37;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  c.pc = t; return; }
L_003D2480:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00440000u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1u)));
    set32(c.r[6], c.r[6].w[0] + 26216u);
    set32(c.r[2], c.r[2].w[0] << 2);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 2u)));
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[9], ld32((c.r[2].w[0])));
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[7], ld32((c.r[3].w[0])));
    set32(c.r[5], c.r[5].w[0] << 2);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    set32(c.r[3], c.r[9].w[0] << 4);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[9], c.r[3].w[0] + c.r[7].w[0]);
    set32(c.r[8], ld32((c.r[5].w[0])));
    set32(c.r[5], c.r[9].w[0] << 4);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    set32(c.r[9], c.r[5].w[0] + c.r[8].w[0]);
    set32(c.r[7], ld32((c.r[2].w[0])));
    set32(c.r[3], c.r[3].w[0] << 2);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    set32(c.r[5], c.r[9].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[9], c.r[5].w[0] + c.r[7].w[0]);
    set32(c.r[8], ld32((c.r[3].w[0])));
    set32(c.r[2], c.r[2].w[0] << 2);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 6u)));
    set32(c.r[4], c.r[9].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    set32(c.r[9], c.r[4].w[0] + c.r[8].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0])));
    set32(c.r[2], c.r[9].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[9], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    set32(c.r[2], c.r[9].w[0] << 4);
    c.budget -= 43;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);  c.pc = t; return; }
L_003D2530:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D2558u); set32(c.r[6], ld32((c.r[16].w[0] + 4u)));  if (depth < kMaxDepth) unit_0009(c, 49u, depth + 1u); else { c.pc = 0x00124ED8u; return; } if (c.pc != 0x003D2558u) [[unlikely]] return; }
L_003D2558:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D2568u); set32(c.r[6], 0u + 7u);  if (depth < kMaxDepth) unit_000A(c, 12u, depth + 1u); else { c.pc = 0x001281F0u; return; } if (c.pc != 0x003D2568u) [[unlikely]] return; }
L_003D2568:
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[5], ld32((c.r[16].w[0])));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    set32(c.r[4], c.r[4].w[0] - 16u);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[5], c.r[5].w[0] + 8u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 9;
    { set32(c.r[29], c.r[29].w[0] + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003D23E8u | kUnwind; return; } goto L_003D23E8; }
L_003D2590:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[2], c.r[4].w[0] + 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[16].w[0]), c.r[2].w[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D25B0u); set32(c.r[4], c.r[4].w[0] + 8u);  if (depth < kMaxDepth) unit_00B4(c, 232u, depth + 1u); else { c.pc = 0x003D2480u; return; } if (c.pc != 0x003D25B0u) [[unlikely]] return; }
L_003D25B0:
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003D25C8:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    c.r[19].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 40u), c.r[21].d[0]);
    c.r[21].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st32((c.r[19].w[0]), 0u);
    st32((c.r[19].w[0] + 4u), 0u);
    set32(c.r[2], ld32((c.r[4].w[0])));
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 18;
    { const bool t = 0ull == 0ull; set32(c.r[20], c.r[2].w[0] + c.r[3].w[0]);  if (t) { goto L_003D2638; } }
L_003D2610:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_003D2628; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D2620u);  if (depth < kMaxDepth) unit_000A(c, 3u, depth + 1u); else { c.pc = 0x00128038u; return; } if (c.pc != 0x003D2620u) [[unlikely]] return; }
L_003D2620:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_003D2678; }
L_003D2628:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D2630u); set32(c.r[4], c.r[16].w[0] + 8u);  if (depth < kMaxDepth) unit_00B4(c, 232u, depth + 1u); else { c.pc = 0x003D2480u; return; } if (c.pc != 0x003D2630u) [[unlikely]] return; }
L_003D2630:
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[16], c.r[2].w[0] + 16u);
    c.budget -= 2;
L_003D2638:
    c.r[17].d[0] = c.r[16].d[0] < c.r[20].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003D2670; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D2654u); set32(c.r[6], 0u + 7u);  if (depth < kMaxDepth) unit_000A(c, 3u, depth + 1u); else { c.pc = 0x00128038u; return; } if (c.pc != 0x003D2654u) [[unlikely]] return; }
L_003D2654:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[6], 0u + 7u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003D2610u | kUnwind; return; } goto L_003D2610; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D266Cu); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B4(c, 236u, depth + 1u); else { c.pc = 0x003D2590u; return; } if (c.pc != 0x003D266Cu) [[unlikely]] return; }
L_003D266C:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003D2670:
    if (c.r[17].d[0] != 0) c.r[2].d[0] = c.r[16].d[0];
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 2;
L_003D2678:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003D2698:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], c.r[2].w[0] - 2496u);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    set32(c.r[16], c.r[16].w[0] - 2240u);
    st32((c.r[2].w[0]), c.r[4].w[0]);
    st32((c.r[2].w[0] + 4u), c.r[5].w[0]);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[2].w[0] + 8u), c.r[6].w[0]);
    set32(c.r[6], 0u + 3u);
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], 0u + 32u);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D26D8u); set32(c.r[8], 0u + 1u);  if (depth < kMaxDepth) unit_00B2(c, 326u, depth + 1u); else { c.pc = 0x003CA7C0u; return; } if (c.pc != 0x003D26D8u) [[unlikely]] return; }
L_003D26D8:
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003D26F0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], c.r[2].w[0] - 2496u);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    set32(c.r[16], c.r[16].w[0] - 2240u);
    st32((c.r[2].w[0]), c.r[4].w[0]);
    st32((c.r[2].w[0] + 4u), c.r[5].w[0]);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], 0u + 33u);
    set32(c.r[6], 0u + 2u);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D272Cu); set32(c.r[8], 0u + 1u);  if (depth < kMaxDepth) unit_00B2(c, 326u, depth + 1u); else { c.pc = 0x003CA7C0u; return; } if (c.pc != 0x003D272Cu) [[unlikely]] return; }
L_003D272C:
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003D2740:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], c.r[2].w[0] - 2496u);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    set32(c.r[16], c.r[16].w[0] - 2240u);
    st32((c.r[2].w[0]), c.r[4].w[0]);
    st32((c.r[2].w[0] + 4u), c.r[5].w[0]);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[2].w[0] + 8u), c.r[6].w[0]);
    set32(c.r[6], 0u + 3u);
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], 0u + 34u);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D2780u); set32(c.r[8], 0u + 1u);  if (depth < kMaxDepth) unit_00B2(c, 326u, depth + 1u); else { c.pc = 0x003CA7C0u; return; } if (c.pc != 0x003D2780u) [[unlikely]] return; }
L_003D2780:
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003D2798:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[5], c.r[5].w[0] - 2496u);
    st32((c.r[5].w[0]), c.r[4].w[0]);
    set32(c.r[4], 0u + 35u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[6], 0u + 1u);
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 12;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003CA7C0u | kUnwind; return; } [[clang::musttail]] return unit_00B2(c, 326u, depth); }
L_003D27C8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[5], c.r[5].w[0] - 2496u);
    set32(c.r[16], c.r[16].w[0] - 2240u);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[5].w[0]), c.r[4].w[0]);
    set32(c.r[4], 0u + 36u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D27FCu); set32(c.r[8], 0u + 4u);  if (depth < kMaxDepth) unit_00B2(c, 326u, depth + 1u); else { c.pc = 0x003CA7C0u; return; } if (c.pc != 0x003D27FCu) [[unlikely]] return; }
L_003D27FC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[7], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[3], c.r[3].w[0] - 2560u);
    set32(c.r[6], ld32((c.r[16].w[0])));
    c.r[2].d[0] = c.r[3].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 8u)));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    st32((c.r[3].w[0]), c.r[6].w[0]);
    st32((c.r[3].w[0] + 4u), c.r[4].w[0]);
    st32((c.r[3].w[0] + 8u), c.r[5].w[0]);
    st32((c.r[3].w[0] + 12u), c.r[7].w[0]);
    c.budget -= 15;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003D2838:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[5], c.r[5].w[0] - 2496u);
    st32((c.r[5].w[0]), c.r[4].w[0]);
    set32(c.r[4], 0u + 37u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[6], 0u + 1u);
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 12;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003CA7C0u | kUnwind; return; } [[clang::musttail]] return unit_00B2(c, 326u, depth); }
L_003D2868:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], c.r[2].w[0] - 2496u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[16], c.r[16].w[0] - 2240u);
    st32((c.r[2].w[0]), c.r[4].w[0]);
    set32(c.r[4], 0u + 38u);
    st32((c.r[2].w[0] + 4u), c.r[5].w[0]);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[2].w[0] + 8u), c.r[6].w[0]);
    set32(c.r[6], 0u + 3u);
    c.r[17].d[0] = c.r[7].d[0] + 0ull;
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D28B0u); set32(c.r[8], 0u + 2u);  if (depth < kMaxDepth) unit_00B2(c, 326u, depth + 1u); else { c.pc = 0x003CA7C0u; return; } if (c.pc != 0x003D28B0u) [[unlikely]] return; }
L_003D28B0:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    st32((c.r[17].w[0]), c.r[3].w[0]);
    st32((c.r[17].w[0] + 4u), c.r[2].w[0]);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003D28D8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[9].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], c.r[2].w[0] - 2496u);
    set32(c.r[6], 0u + 4u);
    set32(c.r[3], ld32((c.r[9].w[0])));
    c.r[7].d[0] = 0ull + 0ull;
    st32((c.r[2].w[0]), c.r[4].w[0]);
    set32(c.r[4], 0u + 39u);
    st32((c.r[2].w[0] + 4u), c.r[5].w[0]);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[2].w[0] + 8u), c.r[3].w[0]);
    c.r[8].d[0] = 0ull + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[3], ld32((c.r[9].w[0] + 4u)));
    st32((c.r[2].w[0] + 12u), c.r[3].w[0]);
    c.budget -= 19;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003CA7C0u | kUnwind; return; } [[clang::musttail]] return unit_00B2(c, 326u, depth); }
L_003D2928:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[9].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], c.r[2].w[0] - 2496u);
    set32(c.r[6], 0u + 4u);
    set32(c.r[3], ld32((c.r[9].w[0])));
    c.r[7].d[0] = 0ull + 0ull;
    st32((c.r[2].w[0]), c.r[4].w[0]);
    set32(c.r[4], 0u + 40u);
    st32((c.r[2].w[0] + 4u), c.r[5].w[0]);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[2].w[0] + 8u), c.r[3].w[0]);
    c.r[8].d[0] = 0ull + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[3], ld32((c.r[9].w[0] + 4u)));
    st32((c.r[2].w[0] + 12u), c.r[3].w[0]);
    c.budget -= 19;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003CA7C0u | kUnwind; return; } [[clang::musttail]] return unit_00B2(c, 326u, depth); }
L_003D2978:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], c.r[2].w[0] - 2496u);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    set32(c.r[16], c.r[16].w[0] - 2240u);
    st32((c.r[2].w[0]), c.r[4].w[0]);
    st32((c.r[2].w[0] + 4u), c.r[5].w[0]);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], 0u + 41u);
    set32(c.r[6], 0u + 2u);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D29B4u); set32(c.r[8], 0u + 1u);  if (depth < kMaxDepth) unit_00B2(c, 326u, depth + 1u); else { c.pc = 0x003CA7C0u; return; } if (c.pc != 0x003D29B4u) [[unlikely]] return; }
L_003D29B4:
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003D29C8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], c.r[2].w[0] - 2496u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[16], c.r[16].w[0] - 2240u);
    st32((c.r[2].w[0]), c.r[4].w[0]);
    set32(c.r[4], 0u + 42u);
    st32((c.r[2].w[0] + 4u), c.r[5].w[0]);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[2].w[0] + 8u), c.r[6].w[0]);
    set32(c.r[6], 0u + 3u);
    c.r[17].d[0] = c.r[7].d[0] + 0ull;
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D2A10u); set32(c.r[8], 0u + 1u);  if (depth < kMaxDepth) unit_00B2(c, 326u, depth + 1u); else { c.pc = 0x003CA7C0u; return; } if (c.pc != 0x003D2A10u) [[unlikely]] return; }
L_003D2A10:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    st32((c.r[17].w[0]), c.r[3].w[0]);
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003D2A30:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00440000u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[16], c.r[2].w[0] + 26668u);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00440000u);
    set32(c.r[4], ld32((c.r[16].w[0])));
    set32(c.r[3], c.r[3].w[0] + 26664u);
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 11;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[2], c.r[4].w[0] + 1u);  if (t) { goto L_003D2A6C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D2A64u);  if (depth < kMaxDepth) unit_00B2(c, 317u, depth + 1u); else { c.pc = 0x003CA658u; return; } if (c.pc != 0x003D2A64u) [[unlikely]] return; }
L_003D2A64:
    set32(c.r[4], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[4].w[0] + 1u);
    c.budget -= 2;
L_003D2A6C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003D2A80:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00440000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], c.r[3].w[0] + 26668u);
    set32(c.r[2], ld32((c.r[3].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[3].w[0]), c.r[2].w[0]);  if (t) { goto L_003D2AB0; } }
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003CA748u | kUnwind; return; } [[clang::musttail]] return unit_00B2(c, 323u, depth); }
L_003D2AB0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003D2AC0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.budget -= 6;
    { const bool t = c.r[16].d[0] != 0ull; st64((c.r[29].w[0] + 16u), c.r[31].d[0]);  if (t) { goto L_003D2AF8; } }
L_003D2AD8:
    c.budget -= 7;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003D2AD8u | kUnwind; return; } goto L_003D2AD8; } }
    c.budget -= 1;
L_003D2AF8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D2B00u); set32(c.r[17], ld32((c.r[16].w[0])));  if (depth < kMaxDepth) unit_00B4(c, 117u, depth + 1u); else { c.pc = 0x003D0E00u; return; } if (c.pc != 0x003D2B00u) [[unlikely]] return; }
L_003D2B00:
    c.budget -= 2;
    if (c.r[17].sd[0] <= 0) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_003D2B4C; }
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 2;
L_003D2B10:
    set32(c.r[16], c.r[5].w[0] + 16u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[17], c.r[17].w[0] - 1u);  goto L_003D2B40; }
    set32(c.r[2], ld32((c.r[5].w[0] + 20u)));
    set32(c.r[6], c.r[5].w[0] + 24u);
    set32(c.r[4], ld32((c.r[2].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0] + 32u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003D2B3Cu); c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 17u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003D2B3Cu) [[unlikely]] return; }
L_003D2B3C:
    set32(c.r[17], c.r[17].w[0] - 1u);
    c.budget -= 1;
L_003D2B40:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull; c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003D2B10u | kUnwind; return; } goto L_003D2B10; } }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_003D2B4C:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 4;
    { set32(c.r[29], c.r[29].w[0] + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003D0E18u | kUnwind; return; } goto L_003D0E18; }
L_003D2B60:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 24u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    c.r[18].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 40u), c.r[19].d[0]);
    c.r[19].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 56u), c.r[21].d[0]);
    st64((c.r[29].w[0] + 64u), c.r[22].d[0]);
    c.r[22].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 72u), c.r[23].d[0]);
    set32(c.r[23], 0u + 1u);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D2BA0u); set32(c.r[21], c.r[22].w[0] + 16u);  if (depth < kMaxDepth) unit_00B4(c, 117u, depth + 1u); else { c.pc = 0x003D0E00u; return; } if (c.pc != 0x003D2BA0u) [[unlikely]] return; }
L_003D2BA0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00440000u);
    set32(c.r[17], c.r[2].w[0] + 26696u);
    c.budget -= 2;
L_003D2BA8:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[23].d[0]) { set32(c.r[19], c.r[19].w[0] + 1u);  goto L_003D2C2C; }
    set32(c.r[2], c.r[18].w[0] << 4);
    set32(c.r[20], 0u + 128u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[2].w[0] + c.r[21].w[0]);  if (t) { goto L_003D2BF8; } }
    c.budget -= 1;
L_003D2BC8:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[2].d[0] = ld8((c.r[17].w[0] + 12u));
    set32(c.r[3], ld32((c.r[17].w[0] + 16u)));
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    c.r[2].d[0] = ld16((c.r[17].w[0] + 2u));
    ldl(c.r[3], (c.r[29].w[0] + 7u));
    ldr(c.r[3], (c.r[29].w[0]));
    sdl(c.r[3], (c.r[16].w[0] + 15u));
    sdr(c.r[3], (c.r[16].w[0] + 8u));
    st16((c.r[16].w[0] + 2u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[16], c.r[16].w[0] + 16u);
    c.budget -= 12;
L_003D2BF8:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == c.r[20].d[0]; c.r[6].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);  if (t) { goto L_003D2C38; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[5], ld32((c.r[17].w[0] + 12u)));
    c.r[6].d[0] = c.r[6].d[0] | 65535ull;
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0] + 24u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003D2C1Cu); c.r[7].d[0] = c.r[29].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003D2C1Cu) [[unlikely]] return; }
L_003D2C1C:
    set32(c.r[3], ld32((c.r[29].w[0] + 4u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { st8((c.r[16].w[0]), static_cast<std::uint8_t>(0u));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003D2BC8u | kUnwind; return; } goto L_003D2BC8; }
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.budget -= 1;
L_003D2C2C:
    c.r[2].d[0] = c.r[19].sd[0] < 32ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 20u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003D2BA8u | kUnwind; return; } goto L_003D2BA8; } }
L_003D2C38:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D2C40u);  if (depth < kMaxDepth) unit_00B4(c, 118u, depth + 1u); else { c.pc = 0x003D0E18u; return; } if (c.pc != 0x003D2C40u) [[unlikely]] return; }
L_003D2C40:
    st32((c.r[22].w[0]), c.r[18].w[0]);
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
L_003D2C70:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.budget -= 6;
    { const bool t = c.r[16].d[0] != 0ull; st64((c.r[29].w[0] + 16u), c.r[31].d[0]);  if (t) { goto L_003D2CA8; } }
L_003D2C88:
    c.budget -= 7;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003D2C88u | kUnwind; return; } goto L_003D2C88; } }
    c.budget -= 1;
L_003D2CA8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D2CB0u); set32(c.r[17], ld32((c.r[16].w[0])));  if (depth < kMaxDepth) unit_00B4(c, 117u, depth + 1u); else { c.pc = 0x003D0E00u; return; } if (c.pc != 0x003D2CB0u) [[unlikely]] return; }
L_003D2CB0:
    c.budget -= 2;
    if (c.r[17].sd[0] <= 0) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_003D2CF0; }
L_003D2CB8:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 16u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[17], c.r[17].w[0] - 1u);  goto L_003D2CE4; }
    set32(c.r[2], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[6], c.r[16].w[0] + 24u);
    set32(c.r[4], ld32((c.r[2].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0] + 32u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003D2CE0u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003D2CE0u) [[unlikely]] return; }
L_003D2CE0:
    set32(c.r[17], c.r[17].w[0] - 1u);
    c.budget -= 1;
L_003D2CE4:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003D2CB8u | kUnwind; return; } goto L_003D2CB8; } }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_003D2CF0:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 4;
    { set32(c.r[29], c.r[29].w[0] + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003D0E18u | kUnwind; return; } goto L_003D0E18; }
L_003D2D00:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 24u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    c.r[18].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 40u), c.r[19].d[0]);
    c.r[19].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 56u), c.r[21].d[0]);
    st64((c.r[29].w[0] + 64u), c.r[22].d[0]);
    c.r[22].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 72u), c.r[23].d[0]);
    set32(c.r[23], 0u + 1u);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D2D40u); set32(c.r[21], c.r[22].w[0] + 16u);  if (depth < kMaxDepth) unit_00B4(c, 117u, depth + 1u); else { c.pc = 0x003D0E00u; return; } if (c.pc != 0x003D2D40u) [[unlikely]] return; }
L_003D2D40:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00440000u);
    set32(c.r[17], c.r[2].w[0] + 26696u);
    c.budget -= 2;
L_003D2D48:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[23].d[0]) { set32(c.r[19], c.r[19].w[0] + 1u);  goto L_003D2DCC; }
    set32(c.r[2], c.r[18].w[0] << 4);
    set32(c.r[20], 0u + 128u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[2].w[0] + c.r[21].w[0]);  if (t) { goto L_003D2D98; } }
    c.budget -= 1;
L_003D2D68:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[2].d[0] = ld8((c.r[17].w[0] + 12u));
    set32(c.r[3], ld32((c.r[17].w[0] + 16u)));
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    c.r[2].d[0] = ld16((c.r[17].w[0] + 2u));
    ldl(c.r[3], (c.r[29].w[0] + 7u));
    ldr(c.r[3], (c.r[29].w[0]));
    sdl(c.r[3], (c.r[16].w[0] + 15u));
    sdr(c.r[3], (c.r[16].w[0] + 8u));
    st16((c.r[16].w[0] + 2u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[16], c.r[16].w[0] + 16u);
    c.budget -= 12;
L_003D2D98:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == c.r[20].d[0]; c.r[6].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);  if (t) { goto L_003D2DD8; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[5], ld32((c.r[17].w[0] + 12u)));
    c.r[6].d[0] = c.r[6].d[0] | 65535ull;
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0] + 24u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003D2DBCu); c.r[7].d[0] = c.r[29].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003D2DBCu) [[unlikely]] return; }
L_003D2DBC:
    set32(c.r[3], ld32((c.r[29].w[0] + 4u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { st8((c.r[16].w[0]), static_cast<std::uint8_t>(0u));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003D2D68u | kUnwind; return; } goto L_003D2D68; }
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.budget -= 1;
L_003D2DCC:
    c.r[2].d[0] = c.r[19].sd[0] < 32ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 20u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003D2D48u | kUnwind; return; } goto L_003D2D48; } }
L_003D2DD8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D2DE0u);  if (depth < kMaxDepth) unit_00B4(c, 118u, depth + 1u); else { c.pc = 0x003D0E18u; return; } if (c.pc != 0x003D2DE0u) [[unlikely]] return; }
L_003D2DE0:
    st32((c.r[22].w[0]), c.r[18].w[0]);
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
L_003D2E10:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003CA8C8u | kUnwind; return; } [[clang::musttail]] return unit_00B2(c, 332u, depth); }
L_003D2E28:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 40u), c.r[21].d[0]);
    c.r[21].sd[0] = static_cast<std::int32_t>(0x00440000u);
    set32(c.r[2], ld32((c.r[21].w[0] + 26676u)));
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[20].d[0]);
    c.budget -= 11;
    { const bool t = c.r[2].d[0] != 0ull; st64((c.r[29].w[0] + 48u), c.r[31].d[0]);  if (t) { goto L_003D2F8C; } }
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00440000u);
    c.r[20].sd[0] = static_cast<std::int32_t>(0x00440000u);
    set32(c.r[16], c.r[16].w[0] + 27344u);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[16], c.r[16].w[0] + 64u);
    set32(c.r[6], 0u + 2256u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D2E78u); set32(c.r[19], c.r[20].w[0] + 26684u);  if (depth < kMaxDepth) unit_0009(c, 49u, depth + 1u); else { c.pc = 0x00124ED8u; return; } if (c.pc != 0x003D2E78u) [[unlikely]] return; }
L_003D2E78:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D2E80u); c.r[18].sd[0] = static_cast<std::int32_t>(0x00440000u);  if (depth < kMaxDepth) unit_00B2(c, 317u, depth + 1u); else { c.pc = 0x003CA658u; return; } if (c.pc != 0x003D2E80u) [[unlikely]] return; }
L_003D2E80:
    set32(c.r[2], 0u - 64u);
    set32(c.r[3], ld32((c.r[19].w[0])));
    set32(c.r[4], 0u + 2176u);
    c.r[16].d[0] = c.r[16].d[0] & c.r[2].d[0];
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00440000u);
    st32((c.r[18].w[0] + 27340u), c.r[4].w[0]);
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[17].w[0] + 26680u), c.r[16].w[0]);  if (t) { goto L_003D2EE0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D2EA8u); set32(c.r[4], 0u + 2256u);  if (depth < kMaxDepth) unit_0004(c, 374u, depth + 1u); else { c.pc = 0x00112C00u; return; } if (c.pc != 0x003D2EA8u) [[unlikely]] return; }
L_003D2EA8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[19].w[0]), c.r[2].w[0]);  if (t) { goto L_003D2EE0; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D2EBCu); set32(c.r[4], c.r[4].w[0] + 24032u);  if (depth < kMaxDepth) unit_0003(c, 243u, depth + 1u); else { c.pc = 0x0010DCC0u; return; } if (c.pc != 0x003D2EBCu) [[unlikely]] return; }
L_003D2EBC:
    c.budget -= 1;
L_003D2EC0:
    c.budget -= 7;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003D2EC0u | kUnwind; return; } goto L_003D2EC0; } }
    c.budget -= 1;
L_003D2EE0:
    set32(c.r[2], ld32((c.r[20].w[0] + 26684u)));
    set32(c.r[3], 0u - 64u);
    set32(c.r[5], ld32((c.r[17].w[0] + 26680u)));
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00440000u);
    set32(c.r[2], c.r[2].w[0] + 64u);
    set32(c.r[7], ld32((c.r[18].w[0] + 27340u)));
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.r[4].d[0] = 0ull + 0ull;
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[8].w[0] + 26688u), c.r[2].w[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D2F10u); c.r[16].sd[0] = static_cast<std::int32_t>(0x00440000u);  if (depth < kMaxDepth) unit_00B2(c, 297u, depth + 1u); else { c.pc = 0x003CA2D8u; return; } if (c.pc != 0x003D2F10u) [[unlikely]] return; }
L_003D2F10:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[16].w[0] + 27336u), c.r[2].w[0]);  if (t) { goto L_003D2F48; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D2F24u); set32(c.r[4], c.r[4].w[0] + 24080u);  if (depth < kMaxDepth) unit_0003(c, 243u, depth + 1u); else { c.pc = 0x0010DCC0u; return; } if (c.pc != 0x003D2F24u) [[unlikely]] return; }
L_003D2F24:
    c.budget -= 1;
L_003D2F28:
    c.budget -= 7;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003D2F28u | kUnwind; return; } goto L_003D2F28; } }
    c.budget -= 1;
L_003D2F48:
    set32(c.r[16], c.r[16].w[0] + 27336u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x003D0000u);
    set32(c.r[4], ld32((c.r[16].w[0])));
    set32(c.r[5], c.r[5].w[0] + 10944u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D2F60u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00B2(c, 308u, depth + 1u); else { c.pc = 0x003CA4D8u; return; } if (c.pc != 0x003D2F60u) [[unlikely]] return; }
L_003D2F60:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x003D0000u);
    set32(c.r[4], ld32((c.r[16].w[0])));
    set32(c.r[5], c.r[5].w[0] + 11104u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D2F74u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00B2(c, 309u, depth + 1u); else { c.pc = 0x003CA4E8u; return; } if (c.pc != 0x003D2F74u) [[unlikely]] return; }
L_003D2F74:
    set32(c.r[4], 0u + 3u);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D2F8Cu); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00B2(c, 326u, depth + 1u); else { c.pc = 0x003CA7C0u; return; } if (c.pc != 0x003D2F8Cu) [[unlikely]] return; }
L_003D2F8C:
    set32(c.r[3], c.r[21].w[0] + 26676u);
    c.r[21].d[0] = ld64((c.r[29].w[0] + 40u));
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003D2FC0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00440000u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[3], c.r[3].w[0] + 26676u);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[3].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[3].w[0]), c.r[2].w[0]);  if (t) { goto L_003D3028; } }
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00440000u);
    set32(c.r[16], c.r[16].w[0] + 27336u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D2FF4u); set32(c.r[4], ld32((c.r[16].w[0])));  if (depth < kMaxDepth) unit_00B2(c, 304u, depth + 1u); else { c.pc = 0x003CA470u; return; } if (c.pc != 0x003D2FF4u) [[unlikely]] return; }
L_003D2FF4:
    st32((c.r[16].w[0]), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00440000u);
    set32(c.r[16], c.r[2].w[0] + 26684u);
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; c.r[4].d[0] = c.r[3].d[0] + 0ull;  if (t) { goto L_003D3018; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D3014u);  if (depth < kMaxDepth) unit_0004(c, 380u, depth + 1u); else { c.pc = 0x00112D68u; return; } if (c.pc != 0x003D3014u) [[unlikely]] return; }
L_003D3014:
    st32((c.r[16].w[0]), 0u);
    c.budget -= 1;
L_003D3018:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003CA748u | kUnwind; return; } [[clang::musttail]] return unit_00B2(c, 323u, depth); }
L_003D3028:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003D3038:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00440000u);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    set32(c.r[16], c.r[2].w[0] + 26696u);
    st64((c.r[29].w[0] + 24u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 40u), c.r[19].d[0]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.budget -= 14;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_003D309C; } }
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[3].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 2;
L_003D3078:
    set32(c.r[4], c.r[4].w[0] + 1u);
    set32(c.r[5], c.r[5].w[0] + 20u);
    c.r[2].d[0] = c.r[4].sd[0] < 32ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], c.r[3].w[0] + 20u);  if (t) { goto L_003D309C; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[3].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003D3078u | kUnwind; return; } goto L_003D3078; } }
L_003D309C:
    set32(c.r[3], 0u + 32u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003D3114; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D30B8u); set32(c.r[6], 0u + 20u);  if (depth < kMaxDepth) unit_0009(c, 49u, depth + 1u); else { c.pc = 0x00124ED8u; return; } if (c.pc != 0x003D30B8u) [[unlikely]] return; }
L_003D30B8:
    st32((c.r[16].w[0] + 4u), c.r[19].w[0]);
    st32((c.r[16].w[0] + 12u), c.r[17].w[0]);
    c.r[4].d[0] = 0ull + 0ull;
    st32((c.r[16].w[0] + 8u), c.r[18].w[0]);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[6], 0u + 4u);
    c.r[7].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[8], 0u + 1u);
    st32((c.r[29].w[0]), c.r[19].w[0]);
    st32((c.r[29].w[0] + 4u), c.r[18].w[0]);
    st32((c.r[29].w[0] + 8u), c.r[17].w[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D30ECu); st32((c.r[29].w[0] + 12u), c.r[16].w[0]);  if (depth < kMaxDepth) unit_00B2(c, 326u, depth + 1u); else { c.pc = 0x003CA7C0u; return; } if (c.pc != 0x003D30ECu) [[unlikely]] return; }
L_003D30EC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[16].w[0] + 16u), c.r[2].w[0]);  if (t) { goto L_003D3108; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D3100u); set32(c.r[4], c.r[4].w[0] + 24120u);  if (depth < kMaxDepth) unit_0003(c, 243u, depth + 1u); else { c.pc = 0x0010DCC0u; return; } if (c.pc != 0x003D3100u) [[unlikely]] return; }
L_003D3100:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003D3114; } }
L_003D3108:
    set32(c.r[3], 0u + 1u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
L_003D3114:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003D3130:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[6], 0u + 1u);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[4], 0u + 1u);
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 16u)));
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D3160u); st32((c.r[29].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00B2(c, 326u, depth + 1u); else { c.pc = 0x003CA7C0u; return; } if (c.pc != 0x003D3160u) [[unlikely]] return; }
L_003D3160:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(0u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003D3178:
    c.r[2].d[0] = ld16((c.r[4].w[0] + 2u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st16((c.r[4].w[0] + 2u), static_cast<std::uint16_t>(c.r[2].w[0]));  c.pc = t; return; }
L_003D3188:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] - 1504u);
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003D31D8; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003D31B0u); set32(c.r[4], ld32((c.r[2].w[0] + 4u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003D31B0u) [[unlikely]] return; }
L_003D31B0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00440000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00440000u);
    set32(c.r[4], c.r[2].w[0] + 29612u);
    set32(c.r[3], c.r[3].w[0] + 29608u);
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 7;
    if (c.r[2].d[0] == 0ull) { st32((c.r[4].w[0]), c.r[16].w[0]);  goto L_003D31CC; }
L_003D31CC:
    set32(c.r[2], ld32((c.r[3].w[0])));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_003D31D8:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003D31E8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[6].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[17].w[0] - 1496u)));
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull; st64((c.r[29].w[0] + 16u), c.r[31].d[0]);  if (t) { goto L_003D3260; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00440000u);
    set32(c.r[2], c.r[2].w[0] + 29608u);
    set32(c.r[3], ld32((c.r[2].w[0])));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[3], c.r[17].w[0] - 1496u);  if (t) { goto L_003D3254; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00440000u);
    set32(c.r[16], c.r[2].w[0] + 29612u);
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[6].d[0];  if (t) { goto L_003D324C; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[5], ld32((c.r[16].w[0])));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D324Cu); set32(c.r[4], c.r[4].w[0] + 24208u);  if (depth < kMaxDepth) unit_00B4(c, 329u, depth + 1u); else { c.pc = 0x003D33A8u; return; } if (c.pc != 0x003D324Cu) [[unlikely]] return; }
L_003D324C:
    st32((c.r[16].w[0]), 0u);
    set32(c.r[3], c.r[17].w[0] - 1496u);
    c.budget -= 2;
L_003D3254:
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 3;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003D3260u); set32(c.r[4], ld32((c.r[3].w[0] + 4u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003D3260u) [[unlikely]] return; }
L_003D3260:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003D3278:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[4], 0u + 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003D3188u | kUnwind; return; } goto L_003D3188; }
L_003D3290:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[4], 0u + 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003D31E8u | kUnwind; return; } goto L_003D31E8; }
L_003D32A8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[4], 0u + 2u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003D3188u | kUnwind; return; } goto L_003D3188; }
L_003D32C0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[4], 0u + 3u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003D3188u | kUnwind; return; } goto L_003D3188; }
L_003D32D8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[4], 0u + 4u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003D3188u | kUnwind; return; } goto L_003D3188; }
L_003D32F0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[4], 0u + 5u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003D3188u | kUnwind; return; } goto L_003D3188; }
L_003D3308:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[4], 0u + 1000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003D3188u | kUnwind; return; } goto L_003D3188; }
L_003D3320:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[4], 0u + 2u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003D31E8u | kUnwind; return; } goto L_003D31E8; }
L_003D3338:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[4], 0u + 3u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003D31E8u | kUnwind; return; } goto L_003D31E8; }
L_003D3350:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[4], 0u + 4u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003D31E8u | kUnwind; return; } goto L_003D31E8; }
L_003D3368:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[4], 0u + 5u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003D31E8u | kUnwind; return; } goto L_003D31E8; }
L_003D3380:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[4], 0u + 1000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003D31E8u | kUnwind; return; } goto L_003D31E8; }
L_003D3398:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00440000u);
    set32(c.r[3], c.r[3].w[0] + 29612u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[3].w[0])));  c.pc = t; return; }
L_003D33A8:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00440000u);
    set32(c.r[16], c.r[16].w[0] + 29680u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 72u), c.r[5].d[0]);
    c.r[5].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 80u), c.r[6].d[0]);
    set32(c.r[6], 0u + 128u);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st64((c.r[29].w[0] + 88u), c.r[7].d[0]);
    st64((c.r[29].w[0] + 96u), c.r[8].d[0]);
    st64((c.r[29].w[0] + 104u), c.r[9].d[0]);
    st64((c.r[29].w[0] + 112u), c.r[10].d[0]);
    st64((c.r[29].w[0] + 120u), c.r[11].d[0]);
    st32((c.r[29].w[0] + 40u), c.f[12]);
    st32((c.r[29].w[0] + 44u), c.f[13]);
    st32((c.r[29].w[0] + 48u), c.f[14]);
    st32((c.r[29].w[0] + 52u), c.f[15]);
    st32((c.r[29].w[0] + 56u), c.f[16]);
    st32((c.r[29].w[0] + 60u), c.f[17]);
    st32((c.r[29].w[0] + 64u), c.f[18]);
    c.budget -= 26;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D3410u); st32((c.r[29].w[0] + 68u), c.f[19]);  if (depth < kMaxDepth) unit_0009(c, 49u, depth + 1u); else { c.pc = 0x00124ED8u; return; } if (c.pc != 0x003D3410u) [[unlikely]] return; }
L_003D3410:
    set32(c.r[6], c.r[29].w[0] + 72u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D3420u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 31u, depth + 1u); else { c.pc = 0x0012C458u; return; } if (c.pc != 0x003D3420u) [[unlikely]] return; }
L_003D3420:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], c.r[2].w[0] - 1488u);
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull; c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003D343C; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003D343Cu); set32(c.r[4], ld32((c.r[2].w[0] + 4u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003D343Cu) [[unlikely]] return; }
L_003D343C:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_003D3450:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00440000u);
    set32(c.r[16], c.r[16].w[0] + 29680u);
    set32(c.r[6], 0u + 127u);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D3474u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000A(c, 12u, depth + 1u); else { c.pc = 0x001281F0u; return; } if (c.pc != 0x003D3474u) [[unlikely]] return; }
L_003D3474:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], c.r[2].w[0] - 1488u);
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull; c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003D3490; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003D3490u); set32(c.r[4], ld32((c.r[2].w[0] + 4u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003D3490u) [[unlikely]] return; }
L_003D3490:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003D34A0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[6], 0u + 127u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00440000u);
    set32(c.r[16], c.r[16].w[0] + 29680u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D34CCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000A(c, 12u, depth + 1u); else { c.pc = 0x001281F0u; return; } if (c.pc != 0x003D34CCu) [[unlikely]] return; }
L_003D34CC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D34DCu); set32(c.r[6], 0u + 127u);  if (depth < kMaxDepth) unit_0009(c, 243u, depth + 1u); else { c.pc = 0x00127E88u; return; } if (c.pc != 0x003D34DCu) [[unlikely]] return; }
L_003D34DC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], c.r[2].w[0] - 1488u);
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull; c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003D34F8; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003D34F8u); set32(c.r[4], ld32((c.r[2].w[0] + 4u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003D34F8u) [[unlikely]] return; }
L_003D34F8:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003D3510:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 40u), c.r[31].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[20].d[0]);
    c.r[20].d[0] = c.r[6].d[0] + 0ull;
    c.r[2].d[0] = c.r[18].sd[0] < 32ll ? 1ull : 0ull;
    c.budget -= 12;
L_003D3540:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);  if (t) { goto L_003D358C; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[2].d[0] = c.r[18].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[5], 0u + 10u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D3560u); set32(c.r[17], c.r[19].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_0006(c, 224u, depth + 1u); else { c.pc = 0x0011AD18u; return; } if (c.pc != 0x003D3560u) [[unlikely]] return; }
L_003D3560:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[5], 0u + 10u);
    st8((c.r[17].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D3578u); c.r[18].d[0] = c.r[18].d[0] + static_cast<std::uint64_t>(1ll);  if (depth < kMaxDepth) unit_0006(c, 222u, depth + 1u); else { c.pc = 0x0011A680u; return; } if (c.pc != 0x003D3578u) [[unlikely]] return; }
L_003D3578:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != 0ull; c.r[2].d[0] = c.r[18].sd[0] < 32ll ? 1ull : 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003D3540u | kUnwind; return; } goto L_003D3540; } }
    st8((c.r[17].w[0]), static_cast<std::uint8_t>(0u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 2;
L_003D358C:
    c.r[18].d[0] = 0ull + 0ull;
    set32(c.r[16], c.r[2].w[0] - 1984u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D359Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 237u, depth + 1u); else { c.pc = 0x00127D00u; return; } if (c.pc != 0x003D359Cu) [[unlikely]] return; }
L_003D359C:
    c.r[3].d[0] = c.r[20].d[0] + static_cast<std::uint64_t>(-1ll);
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[5].d[0] = c.r[2].d[0] >> 32;
    c.r[2].d[0] = c.r[5].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    if (c.r[2].d[0] == 0) c.r[5].d[0] = c.r[3].d[0];
    c.budget -= 7;
    { const bool t = c.r[5].sd[0] <= 0;  if (t) { goto L_003D35F0; } }
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[5].d[0] + static_cast<std::uint64_t>(-1ll);
    c.budget -= 2;
L_003D35C0:
    c.r[2].d[0] = c.r[6].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.r[6].d[0] = c.r[6].d[0] + static_cast<std::uint64_t>(-1ll);
    set32(c.r[2], c.r[2].w[0] + c.r[7].w[0]);
    c.r[3].d[0] = c.r[18].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.r[4].d[0] = ld8((c.r[2].w[0]));
    c.r[18].d[0] = c.r[18].d[0] + static_cast<std::uint64_t>(1ll);
    set32(c.r[3], c.r[19].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = c.r[18].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 12;
    { const bool t = c.r[2].d[0] != 0ull; st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003D35C0u | kUnwind; return; } goto L_003D35C0; } }
L_003D35F0:
    c.r[2].d[0] = c.r[18].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[2], c.r[19].w[0] + c.r[2].w[0]);
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 40u));
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(0u));
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003D3620:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[16].d[0] = c.r[16].d[0] << 32;
    c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 32);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D3654u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B4(c, 340u, depth + 1u); else { c.pc = 0x003D3510u; return; } if (c.pc != 0x003D3654u) [[unlikely]] return; }
L_003D3654:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D365Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 237u, depth + 1u); else { c.pc = 0x00127D00u; return; } if (c.pc != 0x003D365Cu) [[unlikely]] return; }
L_003D365C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[16], c.r[16].w[0] - c.r[2].w[0]);
    set32(c.r[5], c.r[5].w[0] + 24280u);
    set32(c.r[6], c.r[16].w[0] - 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D3674u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 243u, depth + 1u); else { c.pc = 0x00127E88u; return; } if (c.pc != 0x003D3674u) [[unlikely]] return; }
L_003D3674:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D367Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 237u, depth + 1u); else { c.pc = 0x00127D00u; return; } if (c.pc != 0x003D367Cu) [[unlikely]] return; }
L_003D367C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D3688u); set32(c.r[17], c.r[17].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_0009(c, 237u, depth + 1u); else { c.pc = 0x00127D00u; return; } if (c.pc != 0x003D3688u) [[unlikely]] return; }
L_003D3688:
    set32(c.r[6], 0u + 4u);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[6], c.r[6].w[0] - c.r[2].w[0]);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[6].d[0] = c.r[6].d[0] << 32;
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[6].d[0] = c.r[6].d[0] >> 32;
    c.budget -= 12;
    { set32(c.r[29], c.r[29].w[0] + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003D3510u | kUnwind; return; } goto L_003D3510; }
L_003D36B8:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D36E4u); c.r[19].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B4(c, 316u, depth + 1u); else { c.pc = 0x003D3278u; return; } if (c.pc != 0x003D36E4u) [[unlikely]] return; }
L_003D36E4:
    set32(c.r[5], c.r[17].w[0] << 1);
    set32(c.r[2], c.r[5].w[0] + c.r[17].w[0]);
    set32(c.r[2], c.r[2].w[0] << 4);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[1], c.r[1].w[0] - 1952u);
    set32(c.r[2], c.r[1].w[0] + c.r[2].w[0]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);  if (t) { goto L_003D372C; } }
    c.budget -= 1;
L_003D3708:
    c.r[2].d[0] = c.r[16].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 6u);  if (t) { goto L_003D3744; } }
    set32(c.r[2], c.r[5].w[0] + c.r[17].w[0]);
    set32(c.r[4], c.r[6].w[0] - 1952u);
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    c.budget -= 6;
L_003D372C:
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[16], c.r[16].w[0] + 1u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003D3708u | kUnwind; return; } goto L_003D3708; }
    st32((c.r[2].w[0] + 4u), c.r[18].w[0]);
    st32((c.r[2].w[0]), c.r[19].w[0]);
    set32(c.r[2], 0u + 6u);
    c.budget -= 3;
L_003D3744:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != c.r[2].d[0]; c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);  if (t) { goto L_003D3754; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D3754u); set32(c.r[4], c.r[4].w[0] + 24288u);  if (depth < kMaxDepth) unit_00B4(c, 333u, depth + 1u); else { c.pc = 0x003D3450u; return; } if (c.pc != 0x003D3754u) [[unlikely]] return; }
L_003D3754:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D375Cu);  if (depth < kMaxDepth) unit_00B4(c, 317u, depth + 1u); else { c.pc = 0x003D3290u; return; } if (c.pc != 0x003D375Cu) [[unlikely]] return; }
L_003D375C:
    set32(c.r[2], 0u - 1u);
    c.r[3].d[0] = c.r[16].d[0] ^ 6ull;
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    if (c.r[3].d[0] != 0) c.r[2].d[0] = c.r[16].d[0];
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003D3788:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[2].d[0] = c.r[17].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003D37B4; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D37B4u); set32(c.r[4], c.r[4].w[0] + 24336u);  if (depth < kMaxDepth) unit_00B4(c, 333u, depth + 1u); else { c.pc = 0x003D3450u; return; } if (c.pc != 0x003D37B4u) [[unlikely]] return; }
L_003D37B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D37BCu);  if (depth < kMaxDepth) unit_00B4(c, 316u, depth + 1u); else { c.pc = 0x003D3278u; return; } if (c.pc != 0x003D37BCu) [[unlikely]] return; }
L_003D37BC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], c.r[16].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] - 1952u);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[3], c.r[3].w[0] << 1);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[3].w[0]), 0u);
    st32((c.r[4].w[0] + 4u), 0u);
    c.budget -= 16;
    { set32(c.r[29], c.r[29].w[0] + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003D3290u | kUnwind; return; } goto L_003D3290; }
L_003D3800:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[2].d[0] = c.r[17].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.budget -= 12;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003D383C; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D383Cu); set32(c.r[4], c.r[4].w[0] + 24368u);  if (depth < kMaxDepth) unit_00B4(c, 333u, depth + 1u); else { c.pc = 0x003D3450u; return; } if (c.pc != 0x003D383Cu) [[unlikely]] return; }
L_003D383C:
    c.budget -= 2;
    { const bool t = c.r[16].sd[0] < 0; c.r[2].d[0] = c.r[17].sd[0] < 8ll ? 1ull : 0ull;  if (t) { goto L_003D384C; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003D3858; } }
L_003D384C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D3858u); set32(c.r[4], c.r[4].w[0] + 24408u);  if (depth < kMaxDepth) unit_00B4(c, 333u, depth + 1u); else { c.pc = 0x003D3450u; return; } if (c.pc != 0x003D3858u) [[unlikely]] return; }
L_003D3858:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D3860u);  if (depth < kMaxDepth) unit_00B4(c, 316u, depth + 1u); else { c.pc = 0x003D3278u; return; } if (c.pc != 0x003D3860u) [[unlikely]] return; }
L_003D3860:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[2], c.r[16].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[2], c.r[2].w[0] << 3);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[16], c.r[16].w[0] - 1952u);
    set32(c.r[16], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.budget -= 12;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[4], c.r[4].w[0] + 24448u);  if (t) { goto L_003D3898; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D3898u);  if (depth < kMaxDepth) unit_00B4(c, 333u, depth + 1u); else { c.pc = 0x003D3450u; return; } if (c.pc != 0x003D3898u) [[unlikely]] return; }
L_003D3898:
    st32((c.r[16].w[0] + 4u), c.r[18].w[0]);
    st32((c.r[16].w[0]), c.r[19].w[0]);
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 9;
    { set32(c.r[29], c.r[29].w[0] + 48u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003D3290u | kUnwind; return; } goto L_003D3290; }
L_003D38C0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D38E4u); c.r[18].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B4(c, 316u, depth + 1u); else { c.pc = 0x003D3278u; return; } if (c.pc != 0x003D38E4u) [[unlikely]] return; }
L_003D38E4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[16], c.r[16].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] - 1568u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    set32(c.r[3], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[16], c.r[16].w[0] + c.r[2].w[0]);
    st32((c.r[16].w[0]), c.r[17].w[0]);
    st32((c.r[3].w[0] + 4u), c.r[18].w[0]);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 13;
    { set32(c.r[29], c.r[29].w[0] + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003D3290u | kUnwind; return; } goto L_003D3290; }
L_003D3918:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], c.r[2].w[0] - 1568u);
    set32(c.r[4], c.r[4].w[0] << 3);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.budget -= 10;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_003D394C; }
    c.budget -= 2;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003D3948u); set32(c.r[4], ld32((c.r[3].w[0] + 4u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003D3948u) [[unlikely]] return; }
L_003D3948:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_003D394C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003D3958:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D3974u); c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B4(c, 316u, depth + 1u); else { c.pc = 0x003D3278u; return; } if (c.pc != 0x003D3974u) [[unlikely]] return; }
L_003D3974:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[2], c.r[2].w[0] - 1488u);
    st32((c.r[2].w[0] + 4u), c.r[16].w[0]);
    st32((c.r[2].w[0]), c.r[17].w[0]);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 9;
    { set32(c.r[29], c.r[29].w[0] + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003D3290u | kUnwind; return; } goto L_003D3290; }
L_003D3998:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], c.r[2].w[0] - 1504u);
    st32((c.r[2].w[0] + 4u), c.r[5].w[0]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[2].w[0]), c.r[4].w[0]);  c.pc = t; return; }
L_003D39B0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], c.r[2].w[0] - 1496u);
    st32((c.r[2].w[0] + 4u), c.r[5].w[0]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[2].w[0]), c.r[4].w[0]);  c.pc = t; return; }
L_003D39C8:
    set32(c.r[2], c.r[4].w[0] << 1);
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    st64((c.r[29].w[0] + 32u), c.r[20].d[0]);
    set32(c.r[2], c.r[2].w[0] << 4);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    set32(c.r[20], c.r[4].w[0] << 2);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00440000u);
    set32(c.r[17], c.r[17].w[0] + 29648u);
    set32(c.r[17], c.r[17].w[0] + c.r[20].w[0]);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    set32(c.r[18], 0u + 5u);
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    c.r[19].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 40u), c.r[21].d[0]);
    set32(c.r[21], 0u + 1u);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[16], c.r[16].w[0] - 1952u);
    set32(c.r[16], c.r[16].w[0] + c.r[2].w[0]);
    c.budget -= 22;
L_003D3A20:
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[18], c.r[18].w[0] - 1u);  goto L_003D3A44; }
    st32((c.r[17].w[0]), c.r[21].w[0]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003D3A38u); set32(c.r[4], ld32((c.r[16].w[0] + 4u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003D3A38u) [[unlikely]] return; }
L_003D3A38:
    st32((c.r[17].w[0]), 0u);
    c.r[19].d[0] = c.r[19].d[0] | c.r[2].d[0];
    set32(c.r[18], c.r[18].w[0] - 1u);
    c.budget -= 3;
L_003D3A44:
    c.budget -= 2;
    { const bool t = c.r[18].sd[0] >= 0; set32(c.r[16], c.r[16].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003D3A20u | kUnwind; return; } goto L_003D3A20; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00440000u);
    set32(c.r[4], c.r[4].w[0] + 29616u);
    set32(c.r[4], c.r[4].w[0] + c.r[20].w[0]);
    c.r[20].d[0] = ld64((c.r[29].w[0] + 32u));
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.r[2].d[0] = c.r[19].d[0] + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    st32((c.r[4].w[0]), c.r[3].w[0]);
    c.budget -= 16;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003D3A90:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[2].d[0] = c.r[17].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003D3AC4; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D3AC4u); set32(c.r[4], c.r[4].w[0] + 24504u);  if (depth < kMaxDepth) unit_00B4(c, 333u, depth + 1u); else { c.pc = 0x003D3450u; return; } if (c.pc != 0x003D3AC4u) [[unlikely]] return; }
L_003D3AC4:
    c.budget -= 2;
    { const bool t = c.r[16].sd[0] < 0; c.r[2].d[0] = c.r[17].sd[0] < 8ll ? 1ull : 0ull;  if (t) { goto L_003D3AD4; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[16].w[0] << 1);  if (t) { goto L_003D3AE4; } }
L_003D3AD4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D3AE0u); set32(c.r[4], c.r[4].w[0] + 24544u);  if (depth < kMaxDepth) unit_00B4(c, 333u, depth + 1u); else { c.pc = 0x003D3450u; return; } if (c.pc != 0x003D3AE0u) [[unlikely]] return; }
L_003D3AE0:
    set32(c.r[2], c.r[16].w[0] << 1);
    c.budget -= 1;
L_003D3AE4:
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[2], c.r[2].w[0] << 3);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[1], c.r[1].w[0] - 1952u);
    set32(c.r[2], c.r[1].w[0] + c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.budget -= 10;
    if (c.r[3].d[0] == 0ull) { c.r[2].d[0] = c.r[18].d[0] + 0ull;  goto L_003D3B1C; }
    c.budget -= 2;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003D3B14u); set32(c.r[4], ld32((c.r[2].w[0] + 4u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003D3B14u) [[unlikely]] return; }
L_003D3B14:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 2;
L_003D3B1C:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003D3B38:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003D39C8u | kUnwind; return; } goto L_003D39C8; }
L_003D3B50:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[4], 0u + 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003D39C8u | kUnwind; return; } goto L_003D39C8; }
L_003D3B68:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[4], 0u + 2u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003D39C8u | kUnwind; return; } goto L_003D39C8; }
L_003D3B80:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[4], 0u + 3u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003D39C8u | kUnwind; return; } goto L_003D39C8; }
L_003D3B98:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[4], 0u + 4u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003D39C8u | kUnwind; return; } goto L_003D39C8; }
L_003D3BB0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[4], 0u + 5u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003D39C8u | kUnwind; return; } goto L_003D39C8; }
L_003D3BC8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[4], 0u + 6u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003D39C8u | kUnwind; return; } goto L_003D39C8; }
L_003D3BE0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[4], 0u + 7u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003D39C8u | kUnwind; return; } goto L_003D39C8; }
L_003D3BF8:
    set32(c.r[3], c.r[4].w[0] << 2);
    c.r[4].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(7ll) ? 1ull : 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00440000u);
    set32(c.r[1], c.r[1].w[0] + 29616u);
    set32(c.r[3], c.r[1].w[0] + c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003D3C18; } }
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 1;
L_003D3C18:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003D3C20:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00440000u);
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] + 29648u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D3C3Cu); set32(c.r[6], 0u + 32u);  if (depth < kMaxDepth) unit_0009(c, 49u, depth + 1u); else { c.pc = 0x00124ED8u; return; } if (c.pc != 0x003D3C3Cu) [[unlikely]] return; }
L_003D3C3C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[4].w[0] - 1504u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D3C50u); set32(c.r[6], 0u + 8u);  if (depth < kMaxDepth) unit_0009(c, 49u, depth + 1u); else { c.pc = 0x00124ED8u; return; } if (c.pc != 0x003D3C50u) [[unlikely]] return; }
L_003D3C50:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[4].w[0] - 1496u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D3C64u); set32(c.r[6], 0u + 8u);  if (depth < kMaxDepth) unit_0009(c, 49u, depth + 1u); else { c.pc = 0x00124ED8u; return; } if (c.pc != 0x003D3C64u) [[unlikely]] return; }
L_003D3C64:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00440000u);
    set32(c.r[3], c.r[3].w[0] + 29616u);
    set32(c.r[2], 0u + 5u);
    c.budget -= 3;
L_003D3C70:
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[3].w[0]), 0u);
    c.budget -= 7;
    { const bool t = c.r[2].sd[0] >= 0; set32(c.r[3], c.r[3].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003D3C70u | kUnwind; return; } goto L_003D3C70; } }
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st32((c.r[2].w[0] - 1480u), 0u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003D3CA0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00440000u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[16], c.r[2].w[0] + 29604u);
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull; st64((c.r[29].w[0] + 8u), c.r[31].d[0]);  if (t) { goto L_003D3CC4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D3CC4u);  if (depth < kMaxDepth) unit_00B4(c, 389u, depth + 1u); else { c.pc = 0x003D3C20u; return; } if (c.pc != 0x003D3CC4u) [[unlikely]] return; }
L_003D3CC4:
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003D3CE0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00440000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] + 29604u);
    set32(c.r[3], ld32((c.r[2].w[0])));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 10;
    { const bool t = c.r[4].d[0] != 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_003D3D30; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D3D10u);  if (depth < kMaxDepth) unit_00B4(c, 389u, depth + 1u); else { c.pc = 0x003D3C20u; return; } if (c.pc != 0x003D3D10u) [[unlikely]] return; }
L_003D3D10:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[4], c.r[4].w[0] - 1488u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 8u);
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00124ED8u | kUnwind; return; } [[clang::musttail]] return unit_0009(c, 49u, depth); }
L_003D3D30:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003D3D38:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[2], ld32((c.r[2].w[0] - 1480u)));
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; st64((c.r[29].w[0] + 8u), c.r[31].d[0]);  if (t) { goto L_003D3D68; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003D3D5Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003D3D5Cu) [[unlikely]] return; }
L_003D3D5C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_003D3D88; } }
    c.budget -= 1;
L_003D3D68:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D3D70u);  if (depth < kMaxDepth) unit_00B4(c, 316u, depth + 1u); else { c.pc = 0x003D3278u; return; } if (c.pc != 0x003D3D70u) [[unlikely]] return; }
L_003D3D70:
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], ld32((c.r[16].w[0])));
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D3D88u); c.r[16].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;  if (depth < kMaxDepth) unit_00B4(c, 317u, depth + 1u); else { c.pc = 0x003D3290u; return; } if (c.pc != 0x003D3D88u) [[unlikely]] return; }
L_003D3D88:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003D3DA0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[5], c.r[2].w[0] - 1480u);
    set32(c.r[3], ld32((c.r[5].w[0])));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003D3DBC; } }
    st32((c.r[5].w[0]), c.r[4].w[0]);
    set32(c.r[2], 0u + 1u);
    c.budget -= 2;
L_003D3DBC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003D3DC8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003D3DA0u | kUnwind; return; } goto L_003D3DA0; }
L_003D3DE0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[3], c.r[3].w[0] - 1472u);
    set32(c.r[2], c.r[2].w[0] + 24592u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D3E00u); st32((c.r[3].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00B4(c, 407u, depth + 1u); else { c.pc = 0x003D3E20u; return; } if (c.pc != 0x003D3E00u) [[unlikely]] return; }
L_003D3E00:
    set32(c.r[4], 0u + 128u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    st32((c.r[2].w[0]), 0u);
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  goto L_003D3E30; }
L_003D3E18:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003D3E20:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00440000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] + 29808u);  c.pc = t; return; }
L_003D3E30:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D3E44u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B4(c, 407u, depth + 1u); else { c.pc = 0x003D3E20u; return; } if (c.pc != 0x003D3E44u) [[unlikely]] return; }
L_003D3E44:
    st32((c.r[2].w[0]), c.r[16].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003D3E58:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D3E68u);  if (depth < kMaxDepth) unit_00B4(c, 407u, depth + 1u); else { c.pc = 0x003D3E20u; return; } if (c.pc != 0x003D3E68u) [[unlikely]] return; }
L_003D3E68:
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003D3E78:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003D3E80:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003D3E88:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003D3E90:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003D3E98:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003D3EA0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003D3EA8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003D3EB0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003D3EB8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003D3EC0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003D3EC8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003D3ED0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003D3ED8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003D3EE0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003D3EE8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003D3EF0:
    c.r[9].d[0] = c.r[5].d[0] + 0ull;
    c.r[8].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[9].w[0] + 16u)));
    set32(c.r[5], ld32((c.r[9].w[0] + 20u)));
    c.r[2].d[0] = c.r[3].sd[0] < 0ll ? 1ull : 0ull;
    set32(c.r[6], c.r[3].w[0] + 15u);
    if (c.r[2].d[0] != 0) c.r[3].d[0] = c.r[6].d[0];
    c.r[2].d[0] = c.r[5].sd[0] < 0ll ? 1ull : 0ull;
    set32(c.r[7], c.r[5].w[0] + 15u);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 4));
    if (c.r[2].d[0] != 0) c.r[5].d[0] = c.r[7].d[0];
    set32(c.r[7], ld32((c.r[4].w[0])));
    set32(c.r[5], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[5].w[0]) >> 4));
    c.budget -= 15;
    { const bool t = c.r[3].sd[0] <= 0; set32(c.r[11], ld32((c.r[9].w[0] + 4u)));  if (t) { [[clang::musttail]] return unit_00B5(c, 3u, depth); } }
    c.r[12].d[0] = c.r[3].d[0] + 0ull;
    set32(c.r[13], c.r[5].w[0] << 10);
    c.budget -= 3;
L_003D3F38:
    c.r[6].d[0] = c.r[11].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[5].sd[0] <= 0; set32(c.r[7], c.r[7].w[0] + c.r[13].w[0]);  if (t) { [[clang::musttail]] return unit_00B5(c, 2u, depth); } }
    c.r[10].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 1;
L_003D3F48:
    c.r[2].d[0] = ld8((c.r[7].w[0]));
    set32(c.r[10], c.r[10].w[0] - 1u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[8].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0])));
    st32((c.r[6].w[0]), c.r[3].w[0]);
    c.r[2].d[0] = ld8((c.r[7].w[0] + 4u));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[8].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0])));
    st32((c.r[6].w[0] + 4u), c.r[3].w[0]);
    c.r[2].d[0] = ld8((c.r[7].w[0] + 8u));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[8].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0])));
    st32((c.r[6].w[0] + 8u), c.r[3].w[0]);
    c.r[2].d[0] = ld8((c.r[7].w[0] + 12u));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[8].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0])));
    st32((c.r[6].w[0] + 12u), c.r[3].w[0]);
    c.r[2].d[0] = ld8((c.r[7].w[0] + 16u));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[8].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0])));
    st32((c.r[6].w[0] + 16u), c.r[3].w[0]);
    c.r[2].d[0] = ld8((c.r[7].w[0] + 20u));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[8].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0])));
    st32((c.r[6].w[0] + 20u), c.r[3].w[0]);
    c.r[2].d[0] = ld8((c.r[7].w[0] + 24u));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[8].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0])));
    st32((c.r[6].w[0] + 24u), c.r[3].w[0]);
    c.r[2].d[0] = ld8((c.r[7].w[0] + 28u));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[8].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0])));
    st32((c.r[6].w[0] + 28u), c.r[3].w[0]);
    c.r[2].d[0] = ld8((c.r[7].w[0] + 32u));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[8].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0])));
    st32((c.r[6].w[0] + 32u), c.r[3].w[0]);
    c.budget -= 46;
    [[clang::musttail]] return unit_00B5(c, 1u, depth);
}

}
