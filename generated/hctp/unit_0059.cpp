#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0059[4096] = {
    1, 2, 0, 3, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 6, 0, 0, 0, 0, 7, 0, 0,
    0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    12, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    14, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    18, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    22, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    24, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 26, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 28, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    33, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 41, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    49, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    50, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    62, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 67, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 69,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0,
    71, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    73, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    85, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 89, 0, 0, 0, 90, 0, 0, 0, 91, 0, 0, 0, 0, 92, 0, 0,
    0, 93, 0, 0, 0, 94, 0, 0, 0, 0, 95, 0, 0, 0, 96, 0, 0, 0, 97, 0, 0, 0, 0, 98, 0, 0, 0, 99, 0, 0, 0, 100,
    0, 0, 0, 0, 101, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    105, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0,
    0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 110, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 0, 113, 0,
    0, 0, 0, 0, 114, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 118, 0,
    0, 119, 0, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 122, 0, 0, 123, 0, 0, 0, 0,
    0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 0, 0, 0, 126, 0, 0, 0, 127, 0, 0, 0, 0, 0,
    128, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 0, 131, 0, 132, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 136, 0, 0, 0, 0, 137, 0, 0, 0,
    138, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 139, 0, 140, 0, 0, 0, 0, 141, 0, 0, 0, 142, 0, 143, 0, 144, 0,
    145, 0, 146, 0, 147, 0, 148, 0, 149, 0, 150, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 152, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 154, 0, 0, 0, 0, 155, 0, 156, 0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 160, 0, 0, 0, 0, 161, 0, 0, 162, 0, 0, 0, 0, 163, 0, 164, 0,
    0, 0, 0, 165, 0, 0, 0, 166, 0, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    169, 0, 0, 0, 0, 170, 0, 0, 171, 0, 0, 0, 0, 172, 0, 0, 0, 173, 0, 0, 0, 0, 174, 0, 0, 0, 0, 175, 0, 0, 0, 0,
    176, 0, 0, 0, 0, 0, 177, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0,
    0, 181, 0, 0, 182, 0, 0, 0, 0, 183, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0, 185, 0, 0, 186,
    0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    190, 0, 0, 0, 0, 191, 0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 193,
    0, 0, 0, 0, 194, 0, 0, 195, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 197, 0, 0, 0, 0, 198, 0, 0,
    0, 199, 0, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0, 0, 203, 0, 0, 0, 204,
    0, 0, 0, 0, 0, 0, 0, 205, 0, 0, 0, 0, 206, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 207, 0, 0, 0, 0, 208, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 209, 0, 0, 0, 0, 210, 0, 0, 0, 0, 211, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    212, 0, 0, 0, 0, 0, 0, 0, 0, 213, 0, 0, 214, 0, 0, 0, 0, 215, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 216,
    0, 0, 0, 0, 217, 0, 0, 0, 218, 0, 0, 219, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 220, 0, 0, 0, 0,
    221, 0, 0, 0, 0, 222, 0, 0, 0, 0, 223, 0, 0, 0, 0, 0, 0, 0, 0, 0, 224, 0, 0, 0, 0, 225, 0, 0, 226, 0, 0, 0,
    0, 227, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 228, 0, 0, 0, 0, 229, 0, 0, 230, 0, 0, 0, 0, 231, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 232, 0, 0, 0, 0, 233, 0, 0, 0, 0, 234, 0, 0, 0, 0, 235, 0, 0, 0, 236, 0, 0, 0,
    0, 237, 0, 0, 238, 0, 0, 0, 0, 239, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 240, 0, 0, 0, 0, 241, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 242, 0, 0, 0, 0, 243, 0, 0, 244, 0, 0, 0, 0, 245, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 246, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 247, 0, 0, 0, 0, 248, 0, 0, 0, 0, 0, 249, 0, 0, 0, 0, 250,
    0, 0, 0, 251, 0, 0, 0, 0, 252, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 253, 0, 0, 0, 254, 0, 0, 0, 0, 255, 0, 0,
    0, 256, 0, 0, 0, 0, 0, 257, 0, 0, 0, 0, 258, 0, 0, 259, 0, 0, 0, 0, 260, 0, 261, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 262, 0, 0, 0, 0, 263, 0, 0, 0, 0, 264, 0, 0, 0, 0, 265, 0, 0, 0, 0, 266, 0, 0, 0, 267, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 268, 0, 0, 0, 269, 0, 0, 0, 0, 270, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 271,
    0, 0, 0, 272, 0, 0, 0, 0, 273, 0, 0, 0, 274, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 275, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 276, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 277,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 278, 0, 0, 0, 0, 0, 279, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 280,
    0, 0, 0, 0, 0, 0, 0, 281, 0, 0, 0, 282, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 283, 0,
    0, 0, 284, 0, 0, 0, 0, 0, 0, 285, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 286, 0, 0, 0, 0, 0, 0, 0,
    0, 287, 0, 0, 0, 288, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 289, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 290, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 291, 0, 0, 0, 0, 0, 292, 0, 0, 0, 0, 293,
    0, 0, 0, 0, 0, 294, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 295, 0, 0, 0, 296, 0, 0, 0,
    0, 0, 0, 297, 0, 0, 0, 0, 0, 0, 0, 298, 0, 0, 0, 299, 0, 0, 0, 0, 0, 0, 0, 0, 300, 0, 301, 0, 0, 0, 0, 302,
    0, 0, 0, 0, 303, 0, 0, 0, 304, 0, 0, 0, 0, 305, 0, 0, 0, 0, 0, 0, 0, 0, 0, 306, 0, 0, 307, 0, 0, 0, 0, 308,
    0, 309, 0, 0, 310, 0, 0, 0, 0, 311, 0, 312, 0, 0, 313, 0, 0, 0, 0, 314, 0, 315, 0, 0, 316, 0, 0, 0, 0, 317, 0, 318,
    0, 0, 0, 0, 0, 0, 0, 0, 319, 0, 0, 0, 0, 320, 0, 0, 321, 0, 0, 0, 0, 322, 0, 0, 323, 0, 0, 0, 0, 324, 0, 325,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 326, 0, 0, 0, 0, 327, 0, 0, 0, 0, 0, 328, 0, 0, 0, 0, 329,
    0, 0, 330, 0, 0, 0, 0, 331, 0, 0, 0, 0, 332, 0, 0, 0, 0, 333, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 334, 0, 0, 0, 0, 335, 0, 0, 336, 0, 0,
    0, 0, 337, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 338, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 339, 0, 0, 0, 340, 0, 0, 0, 0, 341, 0, 0, 0, 0, 0, 0, 0, 342, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 343, 0, 0, 0, 344, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 345, 0, 0, 346, 0, 0, 0, 0, 347, 0, 0, 348, 0,
    0, 0, 0, 349, 0, 0, 350, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 351, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 352, 0, 0, 0, 0, 0, 0, 0, 353, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 354,
    0, 0, 0, 0, 0, 355, 0, 0, 0, 0, 0, 0, 0, 0, 0, 356, 0, 0, 0, 0, 0, 0, 0, 0, 0, 357, 0, 0, 0, 0, 0, 358,
    0, 0, 0, 0, 0, 359, 0, 0, 0, 0, 360, 0, 0, 0, 0, 0, 0, 0, 0, 0, 361, 0, 0, 0, 0, 0, 0, 362, 0, 0, 363, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 364, 0, 0, 0, 0, 0, 0, 365, 0, 366, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 367, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 368, 0, 0, 0, 0, 0, 0, 0, 0, 369, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 370, 0, 0, 0, 0, 0, 371, 0, 0, 372, 0, 0, 0, 0, 0, 0, 0, 373, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 374, 0, 0, 0, 0, 375, 0, 0, 0, 0, 0, 376, 0, 0, 0, 0, 0, 0, 0, 0, 377, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 378, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 379, 0, 0, 0, 380, 0, 0, 0, 381, 0, 0, 0, 0, 0, 0, 382, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 383, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 384, 0, 0, 0, 0, 385, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 386, 0, 0, 0, 0, 0, 0, 0, 0, 0, 387, 0, 0, 0, 0, 388, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 389, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 390, 0, 0, 0, 0, 391, 0, 0, 0, 0, 0, 392, 0, 0, 0, 0, 393, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 394, 0, 0, 0, 0, 395, 0, 0, 396, 0, 0, 0, 0, 397, 0, 0, 0, 398, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 399, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 400, 0, 0, 0, 0, 401, 0, 0, 0, 0, 402, 0,
    0, 0, 0, 0, 0, 0, 0, 403, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 404, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 405, 0, 0, 0, 0, 406, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 407, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 408, 0, 0, 0, 0, 0, 0, 0, 0, 0, 409, 0, 0, 0, 410, 0, 0, 0, 0, 411, 0, 0, 412,
    0, 0, 0, 0, 0, 0, 0, 0, 413, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 414, 0, 0, 0, 0, 0, 0, 415, 0,
    0, 0, 0, 0, 0, 416, 0, 0, 0, 0, 417, 0, 0, 0, 0, 418, 0, 0, 0, 0, 0, 0, 0, 0, 419, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 420, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 421, 0, 0, 0, 0, 0, 422, 0, 0, 0, 0, 423, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 424, 0, 0, 0, 0, 425, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_0059(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_00264000;
    case 2u: goto L_00264004;
    case 3u: goto L_0026400C;
    case 4u: goto L_00264014;
    case 5u: goto L_002640CC;
    case 6u: goto L_002640E0;
    case 7u: goto L_002640F4;
    case 8u: goto L_00264114;
    case 9u: goto L_00264150;
    case 10u: goto L_0026416C;
    case 11u: goto L_002641AC;
    case 12u: goto L_00264200;
    case 13u: goto L_00264214;
    case 14u: goto L_00264280;
    case 15u: goto L_00264294;
    case 16u: goto L_002642B0;
    case 17u: goto L_002642C0;
    case 18u: goto L_00264300;
    case 19u: goto L_00264314;
    case 20u: goto L_00264334;
    case 21u: goto L_00264344;
    case 22u: goto L_00264380;
    case 23u: goto L_00264394;
    case 24u: goto L_00264400;
    case 25u: goto L_00264420;
    case 26u: goto L_00264478;
    case 27u: goto L_002644D0;
    case 28u: goto L_002644F8;
    case 29u: goto L_00264550;
    case 30u: goto L_0026457C;
    case 31u: goto L_002645C0;
    case 32u: goto L_002645D0;
    case 33u: goto L_00264600;
    case 34u: goto L_00264650;
    case 35u: goto L_00264680;
    case 36u: goto L_002646DC;
    case 37u: goto L_00264730;
    case 38u: goto L_002647A8;
    case 39u: goto L_00264820;
    case 40u: goto L_00264850;
    case 41u: goto L_00264890;
    case 42u: goto L_002648A4;
    case 43u: goto L_002648E0;
    case 44u: goto L_00264920;
    case 45u: goto L_00264950;
    case 46u: goto L_00264964;
    case 47u: goto L_002649B0;
    case 48u: goto L_002649C4;
    case 49u: goto L_00264A00;
    case 50u: goto L_00264A80;
    case 51u: goto L_00264AD0;
    case 52u: goto L_00264B00;
    case 53u: goto L_00264B30;
    case 54u: goto L_00264B50;
    case 55u: goto L_00264C04;
    case 56u: goto L_00264C70;
    case 57u: goto L_00264C9C;
    case 58u: goto L_00264D10;
    case 59u: goto L_00264D50;
    case 60u: goto L_00264DBC;
    case 61u: goto L_00264DCC;
    case 62u: goto L_00264E00;
    case 63u: goto L_00264E40;
    case 64u: goto L_00264EB4;
    case 65u: goto L_00264EE0;
    case 66u: goto L_00264F20;
    case 67u: goto L_00264F34;
    case 68u: goto L_00264F44;
    case 69u: goto L_00264F7C;
    case 70u: goto L_00264FE0;
    case 71u: goto L_00265000;
    case 72u: goto L_00265040;
    case 73u: goto L_00265080;
    case 74u: goto L_002650C0;
    case 75u: goto L_00265158;
    case 76u: goto L_002651F8;
    case 77u: goto L_00265398;
    case 78u: goto L_002653A8;
    case 79u: goto L_00265430;
    case 80u: goto L_00265444;
    case 81u: goto L_002654A0;
    case 82u: goto L_002654F0;
    case 83u: goto L_002655B0;
    case 84u: goto L_002655D8;
    case 85u: goto L_00265600;
    case 86u: goto L_00265660;
    case 87u: goto L_00265694;
    case 88u: goto L_002656AC;
    case 89u: goto L_002656C0;
    case 90u: goto L_002656D0;
    case 91u: goto L_002656E0;
    case 92u: goto L_002656F4;
    case 93u: goto L_00265704;
    case 94u: goto L_00265714;
    case 95u: goto L_00265728;
    case 96u: goto L_00265738;
    case 97u: goto L_00265748;
    case 98u: goto L_0026575C;
    case 99u: goto L_0026576C;
    case 100u: goto L_0026577C;
    case 101u: goto L_00265790;
    case 102u: goto L_002657A0;
    case 103u: goto L_002657C8;
    case 104u: goto L_002657D4;
    case 105u: goto L_00265800;
    case 106u: goto L_00265840;
    case 107u: goto L_0026584C;
    case 108u: goto L_00265870;
    case 109u: goto L_00265890;
    case 110u: goto L_002658A8;
    case 111u: goto L_002658B4;
    case 112u: goto L_002658D8;
    case 113u: goto L_002658F8;
    case 114u: goto L_00265910;
    case 115u: goto L_0026591C;
    case 116u: goto L_00265940;
    case 117u: goto L_00265960;
    case 118u: goto L_00265978;
    case 119u: goto L_00265984;
    case 120u: goto L_002659A8;
    case 121u: goto L_002659C8;
    case 122u: goto L_002659E0;
    case 123u: goto L_002659EC;
    case 124u: goto L_00265A10;
    case 125u: goto L_00265A30;
    case 126u: goto L_00265A58;
    case 127u: goto L_00265A68;
    case 128u: goto L_00265A80;
    case 129u: goto L_00265AA0;
    case 130u: goto L_00265B20;
    case 131u: goto L_00265B34;
    case 132u: goto L_00265B3C;
    case 133u: goto L_00265B98;
    case 134u: goto L_00265BAC;
    case 135u: goto L_00265BC8;
    case 136u: goto L_00265BDC;
    case 137u: goto L_00265BF0;
    case 138u: goto L_00265C00;
    case 139u: goto L_00265C3C;
    case 140u: goto L_00265C44;
    case 141u: goto L_00265C58;
    case 142u: goto L_00265C68;
    case 143u: goto L_00265C70;
    case 144u: goto L_00265C78;
    case 145u: goto L_00265C80;
    case 146u: goto L_00265C88;
    case 147u: goto L_00265C90;
    case 148u: goto L_00265C98;
    case 149u: goto L_00265CA0;
    case 150u: goto L_00265CA8;
    case 151u: goto L_00265CC0;
    case 152u: goto L_00265D84;
    case 153u: goto L_00265D98;
    case 154u: goto L_00265E08;
    case 155u: goto L_00265E1C;
    case 156u: goto L_00265E24;
    case 157u: goto L_00265E38;
    case 158u: goto L_00265E5C;
    case 159u: goto L_00265E90;
    case 160u: goto L_00265EBC;
    case 161u: goto L_00265ED0;
    case 162u: goto L_00265EDC;
    case 163u: goto L_00265EF0;
    case 164u: goto L_00265EF8;
    case 165u: goto L_00265F0C;
    case 166u: goto L_00265F1C;
    case 167u: goto L_00265F40;
    case 168u: goto L_00265F54;
    case 169u: goto L_00265F80;
    case 170u: goto L_00265F94;
    case 171u: goto L_00265FA0;
    case 172u: goto L_00265FB4;
    case 173u: goto L_00265FC4;
    case 174u: goto L_00265FD8;
    case 175u: goto L_00265FEC;
    case 176u: goto L_00266000;
    case 177u: goto L_00266018;
    case 178u: goto L_00266030;
    case 179u: goto L_00266044;
    case 180u: goto L_00266070;
    case 181u: goto L_00266084;
    case 182u: goto L_00266090;
    case 183u: goto L_002660A4;
    case 184u: goto L_002660DC;
    case 185u: goto L_002660F0;
    case 186u: goto L_002660FC;
    case 187u: goto L_00266110;
    case 188u: goto L_00266140;
    case 189u: goto L_00266154;
    case 190u: goto L_00266180;
    case 191u: goto L_00266194;
    case 192u: goto L_002661A8;
    case 193u: goto L_002661FC;
    case 194u: goto L_00266210;
    case 195u: goto L_0026621C;
    case 196u: goto L_00266230;
    case 197u: goto L_00266260;
    case 198u: goto L_00266274;
    case 199u: goto L_00266284;
    case 200u: goto L_002662A4;
    case 201u: goto L_002662B8;
    case 202u: goto L_002662D8;
    case 203u: goto L_002662EC;
    case 204u: goto L_002662FC;
    case 205u: goto L_0026631C;
    case 206u: goto L_00266330;
    case 207u: goto L_00266364;
    case 208u: goto L_00266378;
    case 209u: goto L_002663B0;
    case 210u: goto L_002663C4;
    case 211u: goto L_002663D8;
    case 212u: goto L_00266400;
    case 213u: goto L_00266424;
    case 214u: goto L_00266430;
    case 215u: goto L_00266444;
    case 216u: goto L_0026647C;
    case 217u: goto L_00266490;
    case 218u: goto L_002664A0;
    case 219u: goto L_002664AC;
    case 220u: goto L_002664EC;
    case 221u: goto L_00266500;
    case 222u: goto L_00266514;
    case 223u: goto L_00266528;
    case 224u: goto L_00266550;
    case 225u: goto L_00266564;
    case 226u: goto L_00266570;
    case 227u: goto L_00266584;
    case 228u: goto L_002665B0;
    case 229u: goto L_002665C4;
    case 230u: goto L_002665D0;
    case 231u: goto L_002665E4;
    case 232u: goto L_00266624;
    case 233u: goto L_00266638;
    case 234u: goto L_0026664C;
    case 235u: goto L_00266660;
    case 236u: goto L_00266670;
    case 237u: goto L_00266684;
    case 238u: goto L_00266690;
    case 239u: goto L_002666A4;
    case 240u: goto L_002666E4;
    case 241u: goto L_002666F8;
    case 242u: goto L_00266730;
    case 243u: goto L_00266744;
    case 244u: goto L_00266750;
    case 245u: goto L_00266764;
    case 246u: goto L_0026678C;
    case 247u: goto L_002667BC;
    case 248u: goto L_002667D0;
    case 249u: goto L_002667E8;
    case 250u: goto L_002667FC;
    case 251u: goto L_0026680C;
    case 252u: goto L_00266820;
    case 253u: goto L_00266850;
    case 254u: goto L_00266860;
    case 255u: goto L_00266874;
    case 256u: goto L_00266884;
    case 257u: goto L_0026689C;
    case 258u: goto L_002668B0;
    case 259u: goto L_002668BC;
    case 260u: goto L_002668D0;
    case 261u: goto L_002668D8;
    case 262u: goto L_00266914;
    case 263u: goto L_00266928;
    case 264u: goto L_0026693C;
    case 265u: goto L_00266950;
    case 266u: goto L_00266964;
    case 267u: goto L_00266974;
    case 268u: goto L_002669A8;
    case 269u: goto L_002669B8;
    case 270u: goto L_002669CC;
    case 271u: goto L_002669FC;
    case 272u: goto L_00266A0C;
    case 273u: goto L_00266A20;
    case 274u: goto L_00266A30;
    case 275u: goto L_00266A60;
    case 276u: goto L_00266ACC;
    case 277u: goto L_00266AFC;
    case 278u: goto L_00266B30;
    case 279u: goto L_00266B48;
    case 280u: goto L_00266B7C;
    case 281u: goto L_00266B9C;
    case 282u: goto L_00266BAC;
    case 283u: goto L_00266BF8;
    case 284u: goto L_00266C08;
    case 285u: goto L_00266C24;
    case 286u: goto L_00266C60;
    case 287u: goto L_00266C84;
    case 288u: goto L_00266C94;
    case 289u: goto L_00266CC0;
    case 290u: goto L_00266D10;
    case 291u: goto L_00266D50;
    case 292u: goto L_00266D68;
    case 293u: goto L_00266D7C;
    case 294u: goto L_00266D94;
    case 295u: goto L_00266DE0;
    case 296u: goto L_00266DF0;
    case 297u: goto L_00266E0C;
    case 298u: goto L_00266E2C;
    case 299u: goto L_00266E3C;
    case 300u: goto L_00266E60;
    case 301u: goto L_00266E68;
    case 302u: goto L_00266E7C;
    case 303u: goto L_00266E90;
    case 304u: goto L_00266EA0;
    case 305u: goto L_00266EB4;
    case 306u: goto L_00266EDC;
    case 307u: goto L_00266EE8;
    case 308u: goto L_00266EFC;
    case 309u: goto L_00266F04;
    case 310u: goto L_00266F10;
    case 311u: goto L_00266F24;
    case 312u: goto L_00266F2C;
    case 313u: goto L_00266F38;
    case 314u: goto L_00266F4C;
    case 315u: goto L_00266F54;
    case 316u: goto L_00266F60;
    case 317u: goto L_00266F74;
    case 318u: goto L_00266F7C;
    case 319u: goto L_00266FA0;
    case 320u: goto L_00266FB4;
    case 321u: goto L_00266FC0;
    case 322u: goto L_00266FD4;
    case 323u: goto L_00266FE0;
    case 324u: goto L_00266FF4;
    case 325u: goto L_00266FFC;
    case 326u: goto L_0026703C;
    case 327u: goto L_00267050;
    case 328u: goto L_00267068;
    case 329u: goto L_0026707C;
    case 330u: goto L_00267088;
    case 331u: goto L_0026709C;
    case 332u: goto L_002670B0;
    case 333u: goto L_002670C4;
    case 334u: goto L_00267154;
    case 335u: goto L_00267168;
    case 336u: goto L_00267174;
    case 337u: goto L_00267188;
    case 338u: goto L_002671E4;
    case 339u: goto L_00267210;
    case 340u: goto L_00267220;
    case 341u: goto L_00267234;
    case 342u: goto L_00267254;
    case 343u: goto L_00267290;
    case 344u: goto L_002672A0;
    case 345u: goto L_002672CC;
    case 346u: goto L_002672D8;
    case 347u: goto L_002672EC;
    case 348u: goto L_002672F8;
    case 349u: goto L_0026730C;
    case 350u: goto L_00267318;
    case 351u: goto L_00267360;
    case 352u: goto L_00267390;
    case 353u: goto L_002673B0;
    case 354u: goto L_0026747C;
    case 355u: goto L_00267494;
    case 356u: goto L_002674BC;
    case 357u: goto L_002674E4;
    case 358u: goto L_002674FC;
    case 359u: goto L_00267514;
    case 360u: goto L_00267528;
    case 361u: goto L_00267550;
    case 362u: goto L_0026756C;
    case 363u: goto L_00267578;
    case 364u: goto L_002675AC;
    case 365u: goto L_002675C8;
    case 366u: goto L_002675D0;
    case 367u: goto L_00267604;
    case 368u: goto L_00267630;
    case 369u: goto L_00267654;
    case 370u: goto L_0026769C;
    case 371u: goto L_002676B4;
    case 372u: goto L_002676C0;
    case 373u: goto L_002676E0;
    case 374u: goto L_00267728;
    case 375u: goto L_0026773C;
    case 376u: goto L_00267754;
    case 377u: goto L_00267778;
    case 378u: goto L_002677C4;
    case 379u: goto L_00267834;
    case 380u: goto L_00267844;
    case 381u: goto L_00267854;
    case 382u: goto L_00267870;
    case 383u: goto L_002678C4;
    case 384u: goto L_002679C8;
    case 385u: goto L_002679DC;
    case 386u: goto L_00267A08;
    case 387u: goto L_00267A30;
    case 388u: goto L_00267A44;
    case 389u: goto L_00267AB8;
    case 390u: goto L_00267B1C;
    case 391u: goto L_00267B30;
    case 392u: goto L_00267B48;
    case 393u: goto L_00267B5C;
    case 394u: goto L_00267B94;
    case 395u: goto L_00267BA8;
    case 396u: goto L_00267BB4;
    case 397u: goto L_00267BC8;
    case 398u: goto L_00267BD8;
    case 399u: goto L_00267C20;
    case 400u: goto L_00267C50;
    case 401u: goto L_00267C64;
    case 402u: goto L_00267C78;
    case 403u: goto L_00267C9C;
    case 404u: goto L_00267CDC;
    case 405u: goto L_00267D0C;
    case 406u: goto L_00267D20;
    case 407u: goto L_00267D50;
    case 408u: goto L_00267DA4;
    case 409u: goto L_00267DCC;
    case 410u: goto L_00267DDC;
    case 411u: goto L_00267DF0;
    case 412u: goto L_00267DFC;
    case 413u: goto L_00267E20;
    case 414u: goto L_00267E5C;
    case 415u: goto L_00267E78;
    case 416u: goto L_00267E94;
    case 417u: goto L_00267EA8;
    case 418u: goto L_00267EBC;
    case 419u: goto L_00267EE0;
    case 420u: goto L_00267F08;
    case 421u: goto L_00267F38;
    case 422u: goto L_00267F50;
    case 423u: goto L_00267F64;
    case 424u: goto L_00267FC0;
    case 425u: goto L_00267FD4;
    default: bad_entry(c, 0x00264000u); return;
    }
L_00264000:
    set32(c.r[4], c.r[17].w[0] + 224u);
    c.budget -= 1;
L_00264004:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002640CC; } }
L_0026400C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00264014u); set32(c.r[5], c.r[16].w[0] + 224u);  if (depth < kMaxDepth) unit_0011(c, 14u, depth + 1u); else { c.pc = 0x001443A0u; return; } if (c.pc != 0x00264014u) [[unlikely]] return; }
L_00264014:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41700000u);
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002640CC; } }
    c.f[2] = ld32((c.r[16].w[0] + 228u));
    c.f[3] = ld32((c.r[17].w[0] + 228u));
    fpu_compare(c, fp::key(c.f[3]) <= fp::key(c.f[2]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.f[1] = c.f[2];  if (t) { goto L_00264044; } }
    c.f[1] = c.f[3];
    c.budget -= 1;
L_00264044:
    fpu_compare(c, fp::key(c.f[3]) < fp::key(c.f[2]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition); c.f[0] = c.f[2];  if (t) { goto L_00264054; } }
    c.f[0] = c.f[3];
    c.budget -= 1;
L_00264054:
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00264074; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);  if (t) { goto L_0026407C; } }
L_00264074:
    c.f[1] = c.f[1] ^ fp::kSign;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.budget -= 2;
L_0026407C:
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_002640C0; } }
    c.f[1] = fp::sub(c.f[3], c.f[2]);
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[2].sd[0] = static_cast<std::int32_t>(0x41880000u);  if (t) { goto L_002640C8; } }
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002640C8; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_002640C0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_002640D0; } }
L_002640C8:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002640CC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_002640D0:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002640E0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_00264128; } }
L_002640F4:
    set32(c.r[3], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 28320u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00264124; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00264114u);  if (depth < kMaxDepth) unit_0059(c, 72u, depth + 1u); else { c.pc = 0x00265040u; return; } if (c.pc != 0x00264114u) [[unlikely]] return; }
L_00264114:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00264124; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00264138; } }
L_00264124:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_00264128:
    c.r[2].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(8ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002640F4u | kUnwind; return; } goto L_002640F4; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_00264138:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00264150:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_002641D0; } }
L_0026416C:
    set32(c.r[3], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 28352u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002641CC; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 48u)));
    set32(c.r[2], 0u + 5u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002641CC; } }
    c.r[3].d[0] = ld8((c.r[17].w[0] + 370u));
    c.r[2].d[0] = ld8((c.r[4].w[0] + 370u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[5], c.r[4].w[0] + 224u);  if (t) { goto L_002641CC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002641ACu); set32(c.r[4], c.r[17].w[0] + 224u);  if (depth < kMaxDepth) unit_0011(c, 13u, depth + 1u); else { c.pc = 0x00144360u; return; } if (c.pc != 0x002641ACu) [[unlikely]] return; }
L_002641AC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42700000u);
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[2], 0u + 1u);  if (t) { goto L_002641CC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_002641E4; } }
L_002641CC:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_002641D0:
    c.r[2].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(72ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0026416Cu | kUnwind; return; } goto L_0026416C; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 2;
L_002641E4:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00264200:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[3], 0u + 5u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[5], c.r[5].w[0] + 28352u);  if (t) { goto L_0026425C; } }
L_00264214:
    set32(c.r[2], c.r[5].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00264258; } }
    c.r[4].d[0] = ld8((c.r[2].w[0] + 392u));
    c.r[4].d[0] = c.r[4].d[0] << 58;
    c.r[4].d[0] = c.r[4].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00264258; } }
    c.r[4].d[0] = ld8((c.r[2].w[0] + 370u));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_00264258; } }
    set32(c.r[4], ld32((c.r[2].w[0] + 48u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00264258; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0026426C; } }
L_00264258:
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.budget -= 1;
L_0026425C:
    c.r[2].d[0] = c.r[6].d[0] < static_cast<std::uint64_t>(72ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[6].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00264214u | kUnwind; return; } goto L_00264214; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0026426C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00264280:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_002642D4; } }
L_00264294:
    set32(c.r[2], c.r[2].w[0] + 31224u);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_002642D0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002642B0u);  if (depth < kMaxDepth) unit_0035(c, 43u, depth + 1u); else { c.pc = 0x001D5040u; return; } if (c.pc != 0x002642B0u) [[unlikely]] return; }
L_002642B0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_002642D0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002642C0u);  if (depth < kMaxDepth) unit_0035(c, 45u, depth + 1u); else { c.pc = 0x001D50B0u; return; } if (c.pc != 0x002642C0u) [[unlikely]] return; }
L_002642C0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002642D0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_002642E4; } }
L_002642D0:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_002642D4:
    c.r[2].d[0] = c.r[16].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00264294u | kUnwind; return; } goto L_00264294; } }
    set32(c.r[2], 0u - 1u);
    c.budget -= 1;
L_002642E4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00264300:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_00264358; } }
L_00264314:
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] + 31224u);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00264354; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00264334u);  if (depth < kMaxDepth) unit_0035(c, 43u, depth + 1u); else { c.pc = 0x001D5040u; return; } if (c.pc != 0x00264334u) [[unlikely]] return; }
L_00264334:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00264354; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00264344u);  if (depth < kMaxDepth) unit_0035(c, 45u, depth + 1u); else { c.pc = 0x001D50B0u; return; } if (c.pc != 0x00264344u) [[unlikely]] return; }
L_00264344:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00264354; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00264368; } }
L_00264354:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_00264358:
    c.r[2].d[0] = c.r[16].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x00520000u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00264314u | kUnwind; return; } goto L_00264314; } }
    set32(c.r[2], 0u - 1u);
    c.budget -= 1;
L_00264368:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00264380:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[3], 0u + 11u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[5], c.r[5].w[0] + 28352u);  if (t) { goto L_002643DC; } }
L_00264394:
    set32(c.r[2], c.r[5].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002643D8; } }
    c.r[4].d[0] = ld8((c.r[2].w[0] + 392u));
    c.r[4].d[0] = c.r[4].d[0] << 58;
    c.r[4].d[0] = c.r[4].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002643D8; } }
    c.r[4].d[0] = ld8((c.r[2].w[0] + 370u));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002643D8; } }
    set32(c.r[4], ld32((c.r[2].w[0] + 48u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002643D8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002643EC; } }
L_002643D8:
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.budget -= 1;
L_002643DC:
    c.r[2].d[0] = c.r[6].d[0] < static_cast<std::uint64_t>(72ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[6].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00264394u | kUnwind; return; } goto L_00264394; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002643EC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00264400:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_0026449C; } }
L_00264420:
    set32(c.r[3], c.r[17].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 28352u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[16], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00264498; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 48u)));
    set32(c.r[2], 0u + 11u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 71u);  if (t) { goto L_00264450; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00264498; } }
L_00264450:
    set32(c.r[3], ld32((c.r[16].w[0] + 164u)));
    set32(c.r[2], 0u + 15010u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00264498; } }
    c.r[3].d[0] = ld8((c.r[18].w[0] + 370u));
    c.r[2].d[0] = ld8((c.r[16].w[0] + 370u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[4], c.r[18].w[0] + 224u);  if (t) { goto L_00264498; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00264478u); set32(c.r[5], c.r[16].w[0] + 224u);  if (depth < kMaxDepth) unit_0011(c, 13u, depth + 1u); else { c.pc = 0x00144360u; return; } if (c.pc != 0x00264478u) [[unlikely]] return; }
L_00264478:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42700000u);
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00264498; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_002644B0; } }
L_00264498:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_0026449C:
    c.r[2].d[0] = c.r[17].d[0] < static_cast<std::uint64_t>(72ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00264420u | kUnwind; return; } goto L_00264420; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 2;
L_002644B0:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002644D0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_00264588; } }
L_002644F8:
    set32(c.r[4], c.r[17].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + 28352u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[16], ld32((c.r[3].w[0])));
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00264584; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 48u)));
    set32(c.r[3], 0u + 11u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 71u);  if (t) { goto L_00264528; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00264584; } }
L_00264528:
    set32(c.r[4], ld32((c.r[16].w[0] + 164u)));
    set32(c.r[3], 0u + 15010u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00264584; } }
    c.r[4].d[0] = ld8((c.r[18].w[0] + 370u));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 370u));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[4], c.r[18].w[0] + 224u);  if (t) { goto L_00264584; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00264550u); set32(c.r[5], c.r[16].w[0] + 224u);  if (depth < kMaxDepth) unit_0011(c, 13u, depth + 1u); else { c.pc = 0x00144360u; return; } if (c.pc != 0x00264550u) [[unlikely]] return; }
L_00264550:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42700000u);
    c.f[1] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00264584; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_00264584; } }
    set32(c.r[5], c.r[18].w[0] + 224u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026457Cu); set32(c.r[6], c.r[16].w[0] + 224u);  if (depth < kMaxDepth) unit_005C(c, 29u, depth + 1u); else { c.pc = 0x002705F0u; return; } if (c.pc != 0x0026457Cu) [[unlikely]] return; }
L_0026457C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  if (t) { goto L_002645A8; } }
L_00264584:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_00264588:
    c.r[3].d[0] = c.r[17].d[0] < static_cast<std::uint64_t>(72ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x00520000u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002644F8u | kUnwind; return; } goto L_002644F8; } }
    st16((c.r[29].w[0] + 92u), static_cast<std::uint16_t>(0u));
    set32(c.r[3], c.r[29].w[0] + 92u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0])));
    st16((c.r[19].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 5;
L_002645A8:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_002645C0:
    set32(c.r[2], ld32((c.r[4].w[0] + 164u)));
    c.r[2].d[0] = c.r[2].d[0] ^ 713ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  c.pc = t; return; }
L_002645D0:
    set32(c.r[3], ld32((c.r[4].w[0] + 164u)));
    set32(c.r[2], c.r[3].w[0] - 4460u);
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(3ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002645F4; } }
    set32(c.r[2], 0u + 4464u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002645F4; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_002645F4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00264600:
    set32(c.r[3], ld32((c.r[4].w[0] + 164u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_00264648; } }
    set32(c.r[2], 0u + 676u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 570u);  if (t) { goto L_00264644; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00264644; } }
    set32(c.r[2], 0u + 4301u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 21u);  if (t) { goto L_00264644; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00264644; } }
    set32(c.r[2], 0u + 571u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00264648; } }
L_00264644:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_00264648:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00264650:
    set32(c.r[3], ld32((c.r[4].w[0] + 164u)));
    set32(c.r[2], c.r[3].w[0] - 1683u);
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(4ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00264674; } }
    set32(c.r[2], 0u + 1670u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00264674; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_00264674:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00264680:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[2], 0u - 1u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 8;
    { const bool t = c.r[17].d[0] != c.r[2].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002646D4; } }
    c.r[4].d[0] = ld64((c.r[16].w[0] + 704u));
    set32(c.r[3], 0u + 8u);
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00264718; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 172u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00264718; } }
    c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_0026471C; } }
L_002646D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002646DCu);  if (depth < kMaxDepth) unit_0034(c, 203u, depth + 1u); else { c.pc = 0x001D2C20u; return; } if (c.pc != 0x002646DCu) [[unlikely]] return; }
L_002646DC:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == c.r[2].d[0];  if (t) { goto L_002646EC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00264718; } }
L_002646EC:
    c.r[4].d[0] = ld64((c.r[16].w[0] + 704u));
    set32(c.r[3], 0u + 8u);
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00264718; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 172u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00264718; } }
    c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_00264718:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_0026471C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00264730:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[2], 0u - 1u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 8;
    { const bool t = c.r[17].d[0] != c.r[2].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002647A0; } }
    c.r[4].d[0] = ld64((c.r[16].w[0] + 704u));
    set32(c.r[3], 0u + 8u);
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.r[2].d[0] = 0ull + 0ull;
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_00264780; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 172u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00264780; } }
    c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_00264780:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_00264800; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 900u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00264800; } }
    c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_00264804; } }
L_002647A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002647A8u);  if (depth < kMaxDepth) unit_0034(c, 203u, depth + 1u); else { c.pc = 0x001D2C20u; return; } if (c.pc != 0x002647A8u) [[unlikely]] return; }
L_002647A8:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == c.r[2].d[0];  if (t) { goto L_002647B8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00264800; } }
L_002647B8:
    c.r[4].d[0] = ld64((c.r[16].w[0] + 704u));
    set32(c.r[3], 0u + 8u);
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.r[2].d[0] = 0ull + 0ull;
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_002647E8; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 172u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002647E8; } }
    c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_002647E8:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_00264800; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 900u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00264800; } }
    c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_00264800:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_00264804:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00264820:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], 0u + 8u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[2].d[0] = c.r[2].d[0] << 32;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].d[0] = ld64((c.r[4].w[0] + 704u));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0026487C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00264850u);  if (depth < kMaxDepth) unit_0034(c, 203u, depth + 1u); else { c.pc = 0x001D2C20u; return; } if (c.pc != 0x00264850u) [[unlikely]] return; }
L_00264850:
    set32(c.r[3], c.r[2].w[0] << 2);
    set32(c.r[4], ld32((c.r[16].w[0] + 176u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[2], c.r[2].w[0] - 21392u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[2], c.r[2].w[0] - 3u);
    c.budget -= 9;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { goto L_0026487C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00264880; } }
L_0026487C:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00264880:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00264890:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002648A4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0034(c, 205u, depth + 1u); else { c.pc = 0x001D2C60u; return; } if (c.pc != 0x002648A4u) [[unlikely]] return; }
L_002648A4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002648C4; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 176u)));
    c.r[1].d[0] = c.r[2].sd[0] < 30ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002648C8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002648C8; } }
L_002648C4:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002648C8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002648E0:
    set32(c.r[3], ld32((c.r[4].w[0] + 164u)));
    set32(c.r[2], 0u + 15731u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0026490C; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 172u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00264908; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0026490C; } }
L_00264908:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0026490C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00264920:
    set32(c.r[3], ld32((c.r[4].w[0] + 164u)));
    set32(c.r[2], 0u + 15731u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00264948; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 172u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00264944; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00264948; } }
L_00264944:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00264948:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00264950:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00264964u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x00264964u) [[unlikely]] return; }
L_00264964:
    c.r[2].d[0] = ld8((c.r[2].w[0] + 9u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00264978; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00264998; } }
L_00264978:
    set32(c.r[3], ld32((c.r[16].w[0] + 164u)));
    set32(c.r[2], 0u + 1556u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_00264998; } }
    set32(c.r[2], 0u + 1557u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00264998; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_00264998:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002649B0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002649C4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0059(c, 50u, depth + 1u); else { c.pc = 0x00264A80u; return; } if (c.pc != 0x002649C4u) [[unlikely]] return; }
L_002649C4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002649D4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002649E4; } }
L_002649D4:
    c.r[3].d[0] = ld64((c.r[16].w[0] + 704u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00030000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
L_002649E4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00264A00:
    set32(c.r[3], ld32((c.r[4].w[0] + 164u)));
    c.r[2].d[0] = c.r[3].sd[0] < 1900ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 12080u);  if (t) { goto L_00264A24; } }
    c.r[1].d[0] = c.r[3].sd[0] < 1910ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00264A24; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00264A70; } }
L_00264A24:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00264A34; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00264A70; } }
L_00264A34:
    set32(c.r[2], 0u + 12081u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 12082u);  if (t) { goto L_00264A48; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00264A70; } }
L_00264A48:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00264A58; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00264A70; } }
L_00264A58:
    set32(c.r[2], 0u + 12083u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[2].d[0] = c.r[3].d[0] ^ 12085ull;  if (t) { goto L_00264A6C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00264A70; } }
L_00264A6C:
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 1;
L_00264A70:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00264A80:
    c.r[3].d[0] = ld64((c.r[4].w[0] + 704u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00020000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00264AB4; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 164u)));
    set32(c.r[2], 0u + 712u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 713u);  if (t) { goto L_00264AB0; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00264ABC; } }
L_00264AB0:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_00264AB4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00264AC0; } }
L_00264ABC:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00264AC0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00264AD0:
    set32(c.r[3], ld32((c.r[4].w[0] + 164u)));
    set32(c.r[2], 0u + 570u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_00264AF0; } }
    set32(c.r[2], 0u + 571u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00264AF0; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_00264AF0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00264B00:
    c.r[4].d[0] = ld64((c.r[4].w[0] + 704u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x0C6B0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[3].d[0] = c.r[3].d[0] | 16386ull;
    c.r[2].d[0] = c.r[2].d[0] | 256ull;
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;  c.pc = t; return; }
L_00264B30:
    c.r[3].d[0] = ld64((c.r[4].w[0] + 704u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x0C080000u);
    c.r[2].d[0] = c.r[2].d[0] | 16384ull;
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;  c.pc = t; return; }
L_00264B50:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[2], 0u + 2416u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 164u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_00264B70; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_00264C60; } }
L_00264B70:
    c.r[3].d[0] = ld64((c.r[4].w[0] + 704u));
    c.r[2].d[0] = c.r[3].d[0] & 48ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = c.r[3].d[0] & 4ull;  if (t) { goto L_00264B8C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00264C5C; } }
L_00264B8C:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);  if (t) { goto L_00264BA0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00264C5C; } }
L_00264BA0:
    c.f[1] = ld32((c.r[4].w[0] + 212u));
    c.f[0] = ld32((c.r[1].w[0] + 32024u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00264BC4; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = ld32((c.r[1].w[0] + 32016u));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.f[1] = fp::sub(c.f[1], c.f[0]);  if (t) { goto L_00264BE4; } }
L_00264BC4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = ld32((c.r[1].w[0] + 32008u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[2].sd[0] = static_cast<std::int32_t>(0x447A0000u);  if (t) { goto L_00264BE8; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = ld32((c.r[1].w[0] + 32016u));
    c.f[1] = fp::add(c.f[1], c.f[0]);
    c.budget -= 3;
L_00264BE4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x447A0000u);
    c.budget -= 1;
L_00264BE8:
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[4], c.f[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00264C04u);  if (depth < kMaxDepth) unit_0008(c, 168u, depth + 1u); else { c.pc = 0x00121A30u; return; } if (c.pc != 0x00264C04u) [[unlikely]] return; }
L_00264C04:
    set32(c.r[4], 0u + 1570u);
    set32(c.r[3], 0u + 785u);
    mmi::div(c, 0, c.r[2].w[0], c.r[4].w[0]);
    c.r[4].d[0] = c.hi.d[0];
    mmi::div(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.hi.d[0];
    c.r[2].d[0] = c.r[4].sd[0] < 75ll ? 1ull : 0ull;
    c.budget -= 13;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].d[0] = c.r[4].sd[0] < 1496ll ? 1ull : 0ull;  if (t) { goto L_00264C40; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] != 0ull; c.r[2].d[0] = c.r[3].sd[0] < 37ll ? 1ull : 0ull;  if (t) { goto L_00264C48; } }
L_00264C40:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00264C5C; } }
L_00264C48:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].d[0] = c.r[3].sd[0] < 1534ll ? 1ull : 0ull;  if (t) { goto L_00264C58; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00264C5C; } }
L_00264C58:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_00264C5C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_00264C60:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00264C70:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], 0u + 15700u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 164u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00264C94; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00264CFC; } }
L_00264C94:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00264C9Cu);  if (depth < kMaxDepth) unit_0059(c, 66u, depth + 1u); else { c.pc = 0x00264F20u; return; } if (c.pc != 0x00264C9Cu) [[unlikely]] return; }
L_00264C9C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00264CAC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00264CFC; } }
L_00264CAC:
    c.r[5].d[0] = ld64((c.r[16].w[0] + 704u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x02000000u);
    set32(c.r[3], 0u + 3072u);
    c.r[4].d[0] = c.r[4].d[0] << 32;
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00264CFC; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x0C400000u);
    set32(c.r[3], 0u + 32u);
    c.r[4].d[0] = c.r[4].d[0] | 256ull;
    c.r[4].d[0] = c.r[4].d[0] << 32;
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 10;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00264CFC; } }
    c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_00264CFC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00264D10:
    set32(c.r[3], ld32((c.r[4].w[0] + 164u)));
    set32(c.r[2], 0u + 5950u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_00264D38; } }
    set32(c.r[2], 0u + 6005u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 6007u);  if (t) { goto L_00264D34; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00264D40; } }
L_00264D34:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_00264D38:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00264D44; } }
L_00264D40:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00264D44:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00264D50:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00080000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[2].d[0] = c.r[2].d[0] << 32;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].d[0] = ld64((c.r[4].w[0] + 704u));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_00264D94; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 392u));
    c.r[2].d[0] = c.r[2].d[0] << 61;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00264D94; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00264D94:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00264DD8; } }
    set32(c.r[2], 0u + 256u);
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00264DD4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00264DBCu);  if (depth < kMaxDepth) unit_0059(c, 58u, depth + 1u); else { c.pc = 0x00264D10u; return; } if (c.pc != 0x00264DBCu) [[unlikely]] return; }
L_00264DBC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00264DD4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00264DCCu);  if (depth < kMaxDepth) unit_0059(c, 53u, depth + 1u); else { c.pc = 0x00264B30u; return; } if (c.pc != 0x00264DCCu) [[unlikely]] return; }
L_00264DCC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00264DE0; } }
L_00264DD4:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_00264DD8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_00264DE8; } }
L_00264DE0:
    c.r[2].d[0] = 0ull + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 2;
L_00264DE8:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00264E00:
    set32(c.r[2], ld32((c.r[4].w[0] + 640u)));
    c.r[1].d[0] = c.r[5].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00264E38; } }
    c.r[3].d[0] = ld64((c.r[4].w[0] + 704u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01000000u);
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00264E34; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00264E38; } }
L_00264E34:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00264E38:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00264E40:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 720u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 912u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00264E64; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00264F10; } }
L_00264E64:
    c.r[1].d[0] = c.r[3].sd[0] < 0ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00264E80; } }
    c.r[2].d[0] = c.r[3].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);  if (t) { goto L_00264E88; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00264E80:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_00264F14; } }
L_00264E88:
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 28320u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[2].w[0] + 436u);  if (t) { goto L_00264EA8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00264F10; } }
L_00264EA8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x434F0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00264EB4u); c.r[5].d[0] = c.r[2].d[0] | 19785ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x00264EB4u) [[unlikely]] return; }
L_00264EB4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00264EC4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 16u)));  if (t) { goto L_00264EC8; } }
L_00264EC4:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00264EC8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00264F0C; } }
    set32(c.r[2], ld32((c.r[2].w[0] + 44u)));
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[2].w[0] + 128u);  if (t) { goto L_00264F00; } }
L_00264EE0:
    set32(c.r[3], ld32((c.r[16].w[0] + 164u)));
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_00264EFC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00264F10; } }
L_00264EFC:
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 1;
L_00264F00:
    c.r[2].d[0] = c.r[5].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[5].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00264EE0u | kUnwind; return; } goto L_00264EE0; } }
L_00264F0C:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00264F10:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_00264F14:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00264F20:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00264F34u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0034(c, 85u, depth + 1u); else { c.pc = 0x001D0B30u; return; } if (c.pc != 0x00264F34u) [[unlikely]] return; }
L_00264F34:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00264F6C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00264F44u);  if (depth < kMaxDepth) unit_0034(c, 199u, depth + 1u); else { c.pc = 0x001D2AD0u; return; } if (c.pc != 0x00264F44u) [[unlikely]] return; }
L_00264F44:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00264F6C; } }
    c.r[2].d[0] = ld64((c.r[16].w[0] + 704u));
    c.r[2].d[0] = c.r[2].d[0] & 3072ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x434F0000u);  if (t) { goto L_00264F70; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00264FC4; } }
L_00264F6C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x434F0000u);
    c.budget -= 1;
L_00264F70:
    set32(c.r[4], c.r[16].w[0] + 436u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00264F7Cu); c.r[5].d[0] = c.r[2].d[0] | 19785ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x00264F7Cu) [[unlikely]] return; }
L_00264F7C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00264F8C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 16u)));  if (t) { goto L_00264F90; } }
L_00264F8C:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00264F90:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00264FC0; } }
    set32(c.r[3], ld32((c.r[2].w[0] + 44u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[3].d[0] = ld64((c.r[3].w[0] + 312u));
    set32(c.r[2], ld32((c.r[1].w[0] + 31456u)));
    c.r[3].d[0] = c.r[3].d[0] + static_cast<std::uint64_t>(300ll);
    c.r[1].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00264FC0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00264FC4; } }
L_00264FC0:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00264FC4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00264FE0:
    c.r[3].d[0] = ld64((c.r[4].w[0] + 704u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x0DC80000u);
    c.r[2].d[0] = c.r[2].d[0] | 264ull;
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[2].d[0] ^ 1ull;  c.pc = t; return; }
L_00265000:
    c.r[3].d[0] = ld64((c.r[4].w[0] + 704u));
    set32(c.r[2], 0u + 2u);
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00265034; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 172u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00265030; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00265034; } }
L_00265030:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00265034:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00265040:
    set32(c.r[3], ld32((c.r[4].w[0] + 164u)));
    c.r[2].d[0] = c.r[3].sd[0] < 12080ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 12091u);  if (t) { goto L_00265064; } }
    c.r[1].d[0] = c.r[3].sd[0] < 12086ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00265064; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00265078; } }
L_00265064:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00265074; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00265078; } }
L_00265074:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00265078:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00265080:
    set32(c.r[3], ld32((c.r[4].w[0] + 164u)));
    set32(c.r[2], 0u + 12008u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 12009u);  if (t) { goto L_00265098; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002650B0; } }
L_00265098:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002650A8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002650B0; } }
L_002650A8:
    c.r[2].d[0] = c.r[3].d[0] ^ 12001ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 2;
L_002650B0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002650C0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].d[0] = ld64((c.r[4].w[0] + 712u));
    set32(c.r[16], ld32((c.r[4].w[0] + 164u)));
    c.r[2].d[0] = c.r[2].d[0] & 512ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[2].d[0] == 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002650F0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00265410; } }
L_002650F0:
    set32(c.r[2], 0u + 21u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[2].d[0];  if (t) { goto L_00265120; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 176u)));
    c.r[1].d[0] = c.r[2].sd[0] < 31ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_00265120; } }
    c.r[1].d[0] = c.r[2].sd[0] < 70ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00265120; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00265410; } }
L_00265120:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 8896u)));
    c.r[2].d[0] = c.r[2].sd[0] < 30ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 1554u);  if (t) { goto L_00265304; } }
    c.r[2].d[0] = c.r[16].sd[0] < 1900ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].d[0] = c.r[16].sd[0] < 1910ll ? 1ull : 0ull;  if (t) { goto L_00265150; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00265150; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_00265414; } }
L_00265150:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00265158u);  if (depth < kMaxDepth) unit_003D(c, 81u, depth + 1u); else { c.pc = 0x001F53D0u; return; } if (c.pc != 0x00265158u) [[unlikely]] return; }
L_00265158:
    set32(c.r[3], 0u + 35u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_00265184; } }
    c.r[2].d[0] = c.r[16].sd[0] < 12005ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 12080u);  if (t) { goto L_00265188; } }
    c.r[1].d[0] = c.r[16].sd[0] < 12013ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00265184; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00265410; } }
L_00265184:
    set32(c.r[2], 0u + 12080u);
    c.budget -= 1;
L_00265188:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 12081u);  if (t) { goto L_00265198; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00265410; } }
L_00265198:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != c.r[2].d[0];  if (t) { goto L_002651A8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00265410; } }
L_002651A8:
    set32(c.r[2], 0u + 12082u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 12083u);  if (t) { goto L_002651BC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00265410; } }
L_002651BC:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != c.r[2].d[0];  if (t) { goto L_002651CC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00265410; } }
L_002651CC:
    set32(c.r[2], 0u + 12085u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 1660u);  if (t) { goto L_002651E0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00265410; } }
L_002651E0:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != c.r[2].d[0];  if (t) { goto L_002651F0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00265410; } }
L_002651F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002651F8u);  if (depth < kMaxDepth) unit_003D(c, 81u, depth + 1u); else { c.pc = 0x001F53D0u; return; } if (c.pc != 0x002651F8u) [[unlikely]] return; }
L_002651F8:
    set32(c.r[3], 0u + 33u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 32u);  if (t) { goto L_002652A8; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_00265270; } }
    set32(c.r[3], 0u + 31u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 30u);  if (t) { goto L_00265254; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_00265228; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], ld32((c.r[17].w[0] + 164u)));  if (t) { goto L_002652C8; } }
L_00265228:
    set32(c.r[2], 0u + 12043u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[2].d[0]; c.r[2].d[0] = c.r[16].sd[0] < 12000ll ? 1ull : 0ull;  if (t) { goto L_0026523C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00265410; } }
L_0026523C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].d[0] = c.r[16].sd[0] < 13000ll ? 1ull : 0ull;  if (t) { goto L_002652C4; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002652C4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00265410; } }
L_00265254:
    c.r[2].d[0] = c.r[16].sd[0] < 12000ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].d[0] = c.r[16].sd[0] < 13000ll ? 1ull : 0ull;  if (t) { goto L_002652C4; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002652C4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00265410; } }
L_00265270:
    c.r[2].d[0] = c.r[16].sd[0] < 12073ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = c.r[16].sd[0] < 12000ll ? 1ull : 0ull;  if (t) { goto L_00265290; } }
    c.r[1].d[0] = c.r[16].sd[0] < 12076ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00265290; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00265410; } }
L_00265290:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].d[0] = c.r[16].sd[0] < 13000ll ? 1ull : 0ull;  if (t) { goto L_002652C4; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002652C4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00265410; } }
L_002652A8:
    c.r[2].d[0] = c.r[16].sd[0] < 12000ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].d[0] = c.r[16].sd[0] < 13000ll ? 1ull : 0ull;  if (t) { goto L_002652C4; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002652C4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00265410; } }
L_002652C4:
    set32(c.r[16], ld32((c.r[17].w[0] + 164u)));
    c.budget -= 1;
L_002652C8:
    set32(c.r[2], 0u + 12009u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_002652F8; } }
    set32(c.r[2], 0u + 12510u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 12020u);  if (t) { goto L_002652F4; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == c.r[2].d[0];  if (t) { goto L_002652F4; } }
    set32(c.r[2], 0u + 5235u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[2].d[0];  if (t) { goto L_00265300; } }
L_002652F4:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_002652F8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00265410; } }
L_00265300:
    set32(c.r[2], 0u + 1554u);
    c.budget -= 1;
L_00265304:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 541u);  if (t) { goto L_00265314; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00265410; } }
L_00265314:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != c.r[2].d[0];  if (t) { goto L_00265324; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00265410; } }
L_00265324:
    set32(c.r[2], 0u + 360u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 5565u);  if (t) { goto L_00265338; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00265410; } }
L_00265338:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != c.r[2].d[0];  if (t) { goto L_00265348; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00265410; } }
L_00265348:
    set32(c.r[2], 0u + 5655u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 5828u);  if (t) { goto L_0026535C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00265410; } }
L_0026535C:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != c.r[2].d[0];  if (t) { goto L_0026536C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00265410; } }
L_0026536C:
    set32(c.r[2], 0u + 807u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 235u);  if (t) { goto L_00265380; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00265410; } }
L_00265380:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != c.r[2].d[0]; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00265390; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00265410; } }
L_00265390:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00265398u);  if (depth < kMaxDepth) unit_0034(c, 127u, depth + 1u); else { c.pc = 0x001D1230u; return; } if (c.pc != 0x00265398u) [[unlikely]] return; }
L_00265398:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_002653B0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002653A8u);  if (depth < kMaxDepth) unit_0034(c, 128u, depth + 1u); else { c.pc = 0x001D1350u; return; } if (c.pc != 0x002653A8u) [[unlikely]] return; }
L_002653A8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002653B8; } }
L_002653B0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00265410; } }
L_002653B8:
    c.r[3].d[0] = ld64((c.r[17].w[0] + 704u));
    c.r[2].d[0] = 0ull | 49152ull;
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002653DC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00265410; } }
L_002653DC:
    c.r[2].d[0] = ld64((c.r[17].w[0] + 712u));
    c.r[2].d[0] = c.r[2].d[0] & 224ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002653F8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00265410; } }
L_002653F8:
    c.r[2].d[0] = ld8((c.r[17].w[0] + 393u));
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00265410; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_00265410:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_00265414:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00265430:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00265444u); set32(c.r[16], ld32((c.r[4].w[0] + 164u)));  if (depth < kMaxDepth) unit_0059(c, 56u, depth + 1u); else { c.pc = 0x00264C70u; return; } if (c.pc != 0x00265444u) [[unlikely]] return; }
L_00265444:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00265454; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00265484; } }
L_00265454:
    set32(c.r[2], 0u + 284u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[2].d[0]; c.r[2].d[0] = c.r[16].sd[0] < 511ll ? 1ull : 0ull;  if (t) { goto L_00265468; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00265484; } }
L_00265468:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].d[0] = c.r[16].sd[0] < 515ll ? 1ull : 0ull;  if (t) { goto L_00265480; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00265484; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00265484; } }
L_00265480:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00265484:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002654A0:
    set32(c.r[3], ld32((c.r[4].w[0] + 164u)));
    set32(c.r[2], 0u + 53u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 220u);  if (t) { goto L_002654B8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002654E8; } }
L_002654B8:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002654C8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002654E8; } }
L_002654C8:
    set32(c.r[2], 0u + 234u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_002654DC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002654E8; } }
L_002654DC:
    c.r[2].d[0] = ld64((c.r[4].w[0] + 704u));
    c.r[2].d[0] = c.r[2].d[0] & 512ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
L_002654E8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002654F0:
    set32(c.r[2], ld32((c.r[4].w[0] + 164u)));
    c.r[5].d[0] = c.r[2].d[0] ^ 230ull;
    c.r[3].d[0] = c.r[2].d[0] ^ 231ull;
    c.r[5].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[6].d[0] = c.r[5].d[0] | c.r[3].d[0];
    c.r[3].d[0] = c.r[2].d[0] ^ 232ull;
    c.r[5].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[3].d[0] = c.r[2].d[0] ^ 233ull;
    c.r[5].d[0] = c.r[5].d[0] | c.r[6].d[0];
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[6].d[0] = c.r[3].d[0] | c.r[5].d[0];
    c.r[3].d[0] = c.r[2].d[0] ^ 240ull;
    c.r[5].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[3].d[0] = c.r[2].d[0] ^ 241ull;
    c.r[5].d[0] = c.r[5].d[0] | c.r[6].d[0];
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[6].d[0] = c.r[3].d[0] | c.r[5].d[0];
    c.r[3].d[0] = c.r[2].d[0] ^ 242ull;
    c.r[5].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[3].d[0] = c.r[2].d[0] ^ 243ull;
    c.r[5].d[0] = c.r[5].d[0] | c.r[6].d[0];
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[6].d[0] = c.r[3].d[0] | c.r[5].d[0];
    c.r[3].d[0] = c.r[2].d[0] ^ 290ull;
    c.r[5].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[3].d[0] = c.r[2].d[0] ^ 291ull;
    c.r[5].d[0] = c.r[5].d[0] | c.r[6].d[0];
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[5].d[0] = c.r[3].d[0] | c.r[5].d[0];
    c.r[3].d[0] = c.r[2].d[0] ^ 292ull;
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 293ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 38;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00265590; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002655A0; } }
L_00265590:
    c.r[3].d[0] = ld64((c.r[4].w[0] + 704u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x002C0000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
L_002655A0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002655B0:
    set32(c.r[2], 0u + 34u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[2].d[0]; set32(c.r[29], c.r[29].w[0] - 128u);  if (t) { goto L_002655C4; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != 0ull; c.r[8].sd[0] = static_cast<std::int32_t>(0x00420000u);  if (t) { goto L_002655CC; } }
L_002655C4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00265650; } }
L_002655CC:
    set32(c.r[7], c.r[29].w[0]);
    set32(c.r[8], c.r[8].w[0] - 21360u);
    set32(c.r[6], 0u + 4u);
    c.budget -= 3;
L_002655D8:
    ld128((c.r[8].w[0]) & ~15u, c.r[3]);
    set32(c.r[6], c.r[6].w[0] - 1u);
    ld128((c.r[8].w[0] + 16u) & ~15u, c.r[2]);
    st128((c.r[7].w[0]) & ~15u, c.r[3]);
    set32(c.r[8], c.r[8].w[0] + 32u);
    st128((c.r[7].w[0] + 16u) & ~15u, c.r[2]);
    c.budget -= 8;
    { const bool t = c.r[6].sd[0] > 0; set32(c.r[7], c.r[7].w[0] + 32u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002655D8u | kUnwind; return; } goto L_002655D8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_00265640; } }
L_00265600:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], c.r[7].w[0] << 3);  if (t) { goto L_0026563C; } }
    set32(c.r[3], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[6], c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[6].w[0])));
    c.budget -= 5;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_00265628; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[3].w[0] + 4u)));  if (t) { goto L_00265650; } }
L_00265628:
    set32(c.r[2], ld32((c.r[6].w[0] + 64u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_0026563C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[3].w[0] + 68u)));  if (t) { goto L_00265650; } }
L_0026563C:
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.budget -= 1;
L_00265640:
    c.r[2].d[0] = c.r[7].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[4].w[0] + c.r[7].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00265600u | kUnwind; return; } goto L_00265600; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00265650:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_00265660:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] - 1760u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0] + 168u), c.r[2].w[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00265694u); set32(c.r[4], c.r[17].w[0] + 24u);  if (depth < kMaxDepth) unit_005C(c, 58u, depth + 1u); else { c.pc = 0x00271220u; return; } if (c.pc != 0x00265694u) [[unlikely]] return; }
L_00265694:
    st32((c.r[17].w[0] + 16u), c.r[16].w[0]);
    set32(c.r[2], 0u + 1u);
    st32((c.r[17].w[0] + 20u), c.r[18].w[0]);
    set32(c.r[4], 0u + 28u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002656ACu); st8((c.r[17].w[0] + 148u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x002656ACu) [[unlikely]] return; }
L_002656AC:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull; set32(c.r[4], 0u + 28u);  if (t) { goto L_002656D8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002656C0u);  if (depth < kMaxDepth) unit_0010(c, 59u, depth + 1u); else { c.pc = 0x00140BF0u; return; } if (c.pc != 0x002656C0u) [[unlikely]] return; }
L_002656C0:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002656D0u); set32(c.r[6], 0u + 10u);  if (depth < kMaxDepth) unit_0013(c, 15u, depth + 1u); else { c.pc = 0x0014C300u; return; } if (c.pc != 0x002656D0u) [[unlikely]] return; }
L_002656D0:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], 0u + 28u);
    c.budget -= 2;
L_002656D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002656E0u); st32((c.r[17].w[0] + 152u), c.r[18].w[0]);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x002656E0u) [[unlikely]] return; }
L_002656E0:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull; set32(c.r[4], 0u + 28u);  if (t) { goto L_0026570C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002656F4u);  if (depth < kMaxDepth) unit_0010(c, 59u, depth + 1u); else { c.pc = 0x00140BF0u; return; } if (c.pc != 0x002656F4u) [[unlikely]] return; }
L_002656F4:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00265704u); set32(c.r[6], 0u + 10u);  if (depth < kMaxDepth) unit_0013(c, 15u, depth + 1u); else { c.pc = 0x0014C300u; return; } if (c.pc != 0x00265704u) [[unlikely]] return; }
L_00265704:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], 0u + 28u);
    c.budget -= 2;
L_0026570C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00265714u); st32((c.r[17].w[0] + 156u), c.r[18].w[0]);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00265714u) [[unlikely]] return; }
L_00265714:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull; set32(c.r[4], 0u + 28u);  if (t) { goto L_00265740; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00265728u);  if (depth < kMaxDepth) unit_0010(c, 59u, depth + 1u); else { c.pc = 0x00140BF0u; return; } if (c.pc != 0x00265728u) [[unlikely]] return; }
L_00265728:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00265738u); set32(c.r[6], 0u + 10u);  if (depth < kMaxDepth) unit_0013(c, 15u, depth + 1u); else { c.pc = 0x0014C300u; return; } if (c.pc != 0x00265738u) [[unlikely]] return; }
L_00265738:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], 0u + 28u);
    c.budget -= 2;
L_00265740:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00265748u); st32((c.r[17].w[0] + 160u), c.r[18].w[0]);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00265748u) [[unlikely]] return; }
L_00265748:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull; set32(c.r[4], 0u + 28u);  if (t) { goto L_00265774; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026575Cu);  if (depth < kMaxDepth) unit_0010(c, 59u, depth + 1u); else { c.pc = 0x00140BF0u; return; } if (c.pc != 0x0026575Cu) [[unlikely]] return; }
L_0026575C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026576Cu); set32(c.r[6], 0u + 10u);  if (depth < kMaxDepth) unit_0013(c, 15u, depth + 1u); else { c.pc = 0x0014C300u; return; } if (c.pc != 0x0026576Cu) [[unlikely]] return; }
L_0026576C:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], 0u + 28u);
    c.budget -= 2;
L_00265774:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026577Cu); st32((c.r[17].w[0] + 136u), c.r[18].w[0]);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0026577Cu) [[unlikely]] return; }
L_0026577C:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_002657A4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00265790u);  if (depth < kMaxDepth) unit_0010(c, 59u, depth + 1u); else { c.pc = 0x00140BF0u; return; } if (c.pc != 0x00265790u) [[unlikely]] return; }
L_00265790:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002657A0u); set32(c.r[6], 0u + 10u);  if (depth < kMaxDepth) unit_0013(c, 15u, depth + 1u); else { c.pc = 0x0014C300u; return; } if (c.pc != 0x002657A0u) [[unlikely]] return; }
L_002657A0:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_002657A4:
    st32((c.r[17].w[0] + 140u), c.r[18].w[0]);
    st8((c.r[17].w[0] + 132u), static_cast<std::uint8_t>(0u));
    st8((c.r[17].w[0] + 133u), static_cast<std::uint8_t>(0u));
    st8((c.r[17].w[0] + 134u), static_cast<std::uint8_t>(0u));
    st8((c.r[17].w[0] + 135u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[16].w[0] + 912u)));
    st32((c.r[17].w[0] + 24u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002657C8u); st32((c.r[17].w[0] + 164u), 0u);  if (depth < kMaxDepth) unit_0010(c, 15u, depth + 1u); else { c.pc = 0x00140210u; return; } if (c.pc != 0x002657C8u) [[unlikely]] return; }
L_002657C8:
    set32(c.r[5], 0u + 100u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002657D4u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0006(c, 228u, depth + 1u); else { c.pc = 0x0011B928u; return; } if (c.pc != 0x002657D4u) [[unlikely]] return; }
L_002657D4:
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    st32((c.r[17].w[0] + 4u), 0u);
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00265800:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00265A80; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] - 1760u);
    st32((c.r[17].w[0] + 168u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 152u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00265894; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[17].w[0] + 152u)));  if (t) { goto L_00265874; } }
L_00265840:
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026584Cu); set32(c.r[18], ld32((c.r[2].w[0] + 8u)));  if (depth < kMaxDepth) unit_0013(c, 30u, depth + 1u); else { c.pc = 0x0014C540u; return; } if (c.pc != 0x0026584Cu) [[unlikely]] return; }
L_0026584C:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_00265870; } }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_00265870; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00265870u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00265870u) [[unlikely]] return; }
L_00265870:
    set32(c.r[4], ld32((c.r[17].w[0] + 152u)));
    c.budget -= 1;
L_00265874:
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00265840u | kUnwind; return; } goto L_00265840; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[5], 0u + 1u);  if (t) { goto L_00265890; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00265890u);  if (depth < kMaxDepth) unit_0013(c, 18u, depth + 1u); else { c.pc = 0x0014C370u; return; } if (c.pc != 0x00265890u) [[unlikely]] return; }
L_00265890:
    st32((c.r[17].w[0] + 152u), 0u);
    c.budget -= 1;
L_00265894:
    set32(c.r[2], ld32((c.r[17].w[0] + 156u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002658FC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[17].w[0] + 156u)));  if (t) { goto L_002658DC; } }
L_002658A8:
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002658B4u); set32(c.r[18], ld32((c.r[2].w[0] + 8u)));  if (depth < kMaxDepth) unit_0013(c, 30u, depth + 1u); else { c.pc = 0x0014C540u; return; } if (c.pc != 0x002658B4u) [[unlikely]] return; }
L_002658B4:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_002658D8; } }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_002658D8; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002658D8u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002658D8u) [[unlikely]] return; }
L_002658D8:
    set32(c.r[4], ld32((c.r[17].w[0] + 156u)));
    c.budget -= 1;
L_002658DC:
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002658A8u | kUnwind; return; } goto L_002658A8; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[5], 0u + 1u);  if (t) { goto L_002658F8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002658F8u);  if (depth < kMaxDepth) unit_0013(c, 18u, depth + 1u); else { c.pc = 0x0014C370u; return; } if (c.pc != 0x002658F8u) [[unlikely]] return; }
L_002658F8:
    st32((c.r[17].w[0] + 156u), 0u);
    c.budget -= 1;
L_002658FC:
    set32(c.r[2], ld32((c.r[17].w[0] + 160u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00265964; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[17].w[0] + 160u)));  if (t) { goto L_00265944; } }
L_00265910:
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026591Cu); set32(c.r[18], ld32((c.r[2].w[0] + 8u)));  if (depth < kMaxDepth) unit_0013(c, 30u, depth + 1u); else { c.pc = 0x0014C540u; return; } if (c.pc != 0x0026591Cu) [[unlikely]] return; }
L_0026591C:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_00265940; } }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_00265940; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00265940u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00265940u) [[unlikely]] return; }
L_00265940:
    set32(c.r[4], ld32((c.r[17].w[0] + 160u)));
    c.budget -= 1;
L_00265944:
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00265910u | kUnwind; return; } goto L_00265910; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[5], 0u + 1u);  if (t) { goto L_00265960; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00265960u);  if (depth < kMaxDepth) unit_0013(c, 18u, depth + 1u); else { c.pc = 0x0014C370u; return; } if (c.pc != 0x00265960u) [[unlikely]] return; }
L_00265960:
    st32((c.r[17].w[0] + 160u), 0u);
    c.budget -= 1;
L_00265964:
    set32(c.r[2], ld32((c.r[17].w[0] + 136u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002659CC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[17].w[0] + 136u)));  if (t) { goto L_002659AC; } }
L_00265978:
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00265984u); set32(c.r[18], ld32((c.r[2].w[0] + 8u)));  if (depth < kMaxDepth) unit_0013(c, 30u, depth + 1u); else { c.pc = 0x0014C540u; return; } if (c.pc != 0x00265984u) [[unlikely]] return; }
L_00265984:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_002659A8; } }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_002659A8; } }
    set32(c.r[25], ld32((c.r[18].w[0] + 56u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002659A8u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002659A8u) [[unlikely]] return; }
L_002659A8:
    set32(c.r[4], ld32((c.r[17].w[0] + 136u)));
    c.budget -= 1;
L_002659AC:
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00265978u | kUnwind; return; } goto L_00265978; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[5], 0u + 1u);  if (t) { goto L_002659C8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002659C8u);  if (depth < kMaxDepth) unit_0013(c, 18u, depth + 1u); else { c.pc = 0x0014C370u; return; } if (c.pc != 0x002659C8u) [[unlikely]] return; }
L_002659C8:
    st32((c.r[17].w[0] + 136u), 0u);
    c.budget -= 1;
L_002659CC:
    set32(c.r[2], ld32((c.r[17].w[0] + 140u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00265A34; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[17].w[0] + 140u)));  if (t) { goto L_00265A14; } }
L_002659E0:
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002659ECu); set32(c.r[18], ld32((c.r[2].w[0] + 8u)));  if (depth < kMaxDepth) unit_0013(c, 30u, depth + 1u); else { c.pc = 0x0014C540u; return; } if (c.pc != 0x002659ECu) [[unlikely]] return; }
L_002659EC:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_00265A10; } }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_00265A10; } }
    set32(c.r[25], ld32((c.r[18].w[0] + 56u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00265A10u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00265A10u) [[unlikely]] return; }
L_00265A10:
    set32(c.r[4], ld32((c.r[17].w[0] + 140u)));
    c.budget -= 1;
L_00265A14:
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002659E0u | kUnwind; return; } goto L_002659E0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[5], 0u + 1u);  if (t) { goto L_00265A30; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00265A30u);  if (depth < kMaxDepth) unit_0013(c, 18u, depth + 1u); else { c.pc = 0x0014C370u; return; } if (c.pc != 0x00265A30u) [[unlikely]] return; }
L_00265A30:
    st32((c.r[17].w[0] + 140u), 0u);
    c.budget -= 1;
L_00265A34:
    set32(c.r[4], ld32((c.r[17].w[0] + 164u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00265A58; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00265A58; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00265A58u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00265A58u) [[unlikely]] return; }
L_00265A58:
    set32(c.r[4], c.r[17].w[0] + 24u);
    set32(c.r[5], 0u - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00265A68u); st32((c.r[17].w[0] + 164u), 0u);  if (depth < kMaxDepth) unit_005C(c, 60u, depth + 1u); else { c.pc = 0x00271260u; return; } if (c.pc != 0x00265A68u) [[unlikely]] return; }
L_00265A68:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00265A84; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00265A80u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x00265A80u) [[unlikely]] return; }
L_00265A80:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00265A84:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00265AA0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[3], 0u + 1u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 464u)));
    c.budget -= 9;
    { const bool t = c.r[5].d[0] != c.r[3].d[0]; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00265AD0; } }
    set32(c.r[3], 0u + 32u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_00265BDC; } }
L_00265AD0:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 6u);  if (t) { goto L_00265AE8; } }
    set32(c.r[3], 0u + 17u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_00265BDC; } }
L_00265AE8:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_00265AFC; } }
    set32(c.r[3], 0u + 17u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_00265BDC; } }
L_00265AFC:
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 24u);  if (t) { goto L_00265B10; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_00265BDC; } }
L_00265B10:
    set32(c.r[2], 0u + 264u);
    set32(c.r[5], c.r[29].w[0] + 60u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00265B20u); st16((c.r[29].w[0] + 60u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_005D(c, 630u, depth + 1u); else { c.pc = 0x00277940u; return; } if (c.pc != 0x00265B20u) [[unlikely]] return; }
L_00265B20:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00265B34; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 136u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00265B34u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0013(c, 28u, depth + 1u); else { c.pc = 0x0014C4E0u; return; } if (c.pc != 0x00265B34u) [[unlikely]] return; }
L_00265B34:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00265B3Cu);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x00265B3Cu) [[unlikely]] return; }
L_00265B3C:
    c.r[3].d[0] = ld8((c.r[2].w[0] + 14u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00265B64; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 371u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u + 11u);  if (t) { goto L_00265B60; } }
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_00265B64; } }
L_00265B60:
    st32((c.r[17].w[0] + 8u), c.r[3].w[0]);
    c.budget -= 1;
L_00265B64:
    set32(c.r[4], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[3], 0u + 11u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00265BB4; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00265B84; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_00265BE0; } }
L_00265B84:
    set32(c.r[2], 0u + 284u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st16((c.r[29].w[0] + 60u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00265B98u); set32(c.r[5], c.r[29].w[0] + 60u);  if (depth < kMaxDepth) unit_005D(c, 630u, depth + 1u); else { c.pc = 0x00277940u; return; } if (c.pc != 0x00265B98u) [[unlikely]] return; }
L_00265B98:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_00265BDC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00265BACu); set32(c.r[4], ld32((c.r[17].w[0] + 136u)));  if (depth < kMaxDepth) unit_0013(c, 28u, depth + 1u); else { c.pc = 0x0014C4E0u; return; } if (c.pc != 0x00265BACu) [[unlikely]] return; }
L_00265BAC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00265BDC; } }
L_00265BB4:
    set32(c.r[2], 0u + 23809u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st16((c.r[29].w[0] + 60u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00265BC8u); set32(c.r[5], c.r[29].w[0] + 60u);  if (depth < kMaxDepth) unit_005D(c, 630u, depth + 1u); else { c.pc = 0x00277940u; return; } if (c.pc != 0x00265BC8u) [[unlikely]] return; }
L_00265BC8:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_00265BDC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00265BDCu); set32(c.r[4], ld32((c.r[17].w[0] + 136u)));  if (depth < kMaxDepth) unit_0013(c, 28u, depth + 1u); else { c.pc = 0x0014C4E0u; return; } if (c.pc != 0x00265BDCu) [[unlikely]] return; }
L_00265BDC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_00265BE0:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00265BF0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00265C00:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 464u)));
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(10ll) ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00265CA8; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + 32032u);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x00264000u < 16384u) { entry = entries_0059[(t - 0x00264000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00265C3C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00265C44u);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x00265C44u) [[unlikely]] return; }
L_00265C44:
    c.r[2].d[0] = ld8((c.r[2].w[0] + 14u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00265C60; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00265C58u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0059(c, 290u, depth + 1u); else { c.pc = 0x00266D10u; return; } if (c.pc != 0x00265C58u) [[unlikely]] return; }
L_00265C58:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_00265CAC; } }
L_00265C60:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00265C68u);  if (depth < kMaxDepth) unit_0059(c, 289u, depth + 1u); else { c.pc = 0x00266CC0u; return; } if (c.pc != 0x00265C68u) [[unlikely]] return; }
L_00265C68:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00265CA8; } }
L_00265C70:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00265C78u);  if (depth < kMaxDepth) unit_0059(c, 353u, depth + 1u); else { c.pc = 0x002673B0u; return; } if (c.pc != 0x00265C78u) [[unlikely]] return; }
L_00265C78:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00265CA8; } }
L_00265C80:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00265C88u);  if (depth < kMaxDepth) unit_0059(c, 275u, depth + 1u); else { c.pc = 0x00266A60u; return; } if (c.pc != 0x00265C88u) [[unlikely]] return; }
L_00265C88:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00265CA8; } }
L_00265C90:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00265C98u);  if (depth < kMaxDepth) unit_0059(c, 275u, depth + 1u); else { c.pc = 0x00266A60u; return; } if (c.pc != 0x00265C98u) [[unlikely]] return; }
L_00265C98:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00265CA8; } }
L_00265CA0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00265CA8u);  if (depth < kMaxDepth) unit_0059(c, 275u, depth + 1u); else { c.pc = 0x00266A60u; return; } if (c.pc != 0x00265CA8u) [[unlikely]] return; }
L_00265CA8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_00265CAC:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00265CC0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[3], 0u + 39u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[5], ld32((c.r[17].w[0] + 8u)));
    c.budget -= 10;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; set32(c.r[16], ld32((c.r[4].w[0] + 984u)));  if (t) { goto L_00266A28; } }
    set32(c.r[3], 0u + 37u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 36u);  if (t) { goto L_00266A40; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_00266A40; } }
    set32(c.r[3], 0u + 35u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 34u);  if (t) { goto L_00266A40; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_0026696C; } }
    set32(c.r[3], 0u + 33u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 32u);  if (t) { goto L_0026687C; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_00266498; } }
    set32(c.r[3], 0u + 12u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 3u);  if (t) { goto L_0026644C; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_00266338; } }
    set32(c.r[3], 0u + 8u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 17u);  if (t) { goto L_002662F4; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_00266238; } }
    set32(c.r[3], 0u + 26u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 2u);  if (t) { goto L_00266238; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_002661B0; } }
    set32(c.r[3], 0u + 10u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_00266118; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_00265D7C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_00266A44; } }
L_00265D7C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00265D84u);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x00265D84u) [[unlikely]] return; }
L_00265D84:
    c.r[2].d[0] = ld8((c.r[2].w[0] + 32u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00265E1C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00265D98u);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x00265D98u) [[unlikely]] return; }
L_00265D98:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.r[3].d[0] = ld8((c.r[1].w[0] - 25569u));
    set32(c.r[2], 0u + 1u);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00265E1C; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 136u)));
    set32(c.r[4], ld32((c.r[17].w[0])));
    set32(c.r[2], ld32((c.r[2].w[0] + 12u)));
    set32(c.r[3], c.r[4].w[0] << 4);
    set32(c.r[4], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], c.r[3].w[0] + 30u);  if (t) { goto L_00265E1C; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 31456u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00265E1C; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 16u)));
    c.r[2].d[0] = ld64((c.r[2].w[0] + 704u));
    c.r[2].d[0] = c.r[2].d[0] & 3ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00265E1C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00265E08u); set32(c.r[5], 0u + 2817u);  if (depth < kMaxDepth) unit_005D(c, 628u, depth + 1u); else { c.pc = 0x00277920u; return; } if (c.pc != 0x00265E08u) [[unlikely]] return; }
L_00265E08:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00265E1C; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 136u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00265E1Cu); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0013(c, 28u, depth + 1u); else { c.pc = 0x0014C4E0u; return; } if (c.pc != 0x00265E1Cu) [[unlikely]] return; }
L_00265E1C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00265E24u);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x00265E24u) [[unlikely]] return; }
L_00265E24:
    c.r[2].d[0] = ld8((c.r[2].w[0] + 9u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00265EF0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00265E38u); set32(c.r[4], ld32((c.r[17].w[0] + 16u)));  if (depth < kMaxDepth) unit_006F(c, 292u, depth + 1u); else { c.pc = 0x002BFF20u; return; } if (c.pc != 0x00265E38u) [[unlikely]] return; }
L_00265E38:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00265EF0; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 912u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 980u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00265EF0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00265E5Cu); set32(c.r[5], 0u + 264u);  if (depth < kMaxDepth) unit_005A(c, 31u, depth + 1u); else { c.pc = 0x002686A0u; return; } if (c.pc != 0x00265E5Cu) [[unlikely]] return; }
L_00265E5C:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00265EF0; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 16u)));
    set32(c.r[2], 0u + 8u);
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[3].d[0] = ld64((c.r[3].w[0] + 704u));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00265EF0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00265E90u);  if (depth < kMaxDepth) unit_005A(c, 33u, depth + 1u); else { c.pc = 0x002686F0u; return; } if (c.pc != 0x00265E90u) [[unlikely]] return; }
L_00265E90:
    set32(c.r[3], ld32((c.r[17].w[0] + 16u)));
    set32(c.r[2], 0u + 8u);
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[3].d[0] = ld64((c.r[3].w[0] + 704u));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00265ED4; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00265EBCu); set32(c.r[5], 0u + 4618u);  if (depth < kMaxDepth) unit_005D(c, 628u, depth + 1u); else { c.pc = 0x00277920u; return; } if (c.pc != 0x00265EBCu) [[unlikely]] return; }
L_00265EBC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00265ED0; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 136u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00265ED0u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0013(c, 28u, depth + 1u); else { c.pc = 0x0014C4E0u; return; } if (c.pc != 0x00265ED0u) [[unlikely]] return; }
L_00265ED0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00265ED4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00265EDCu); set32(c.r[5], 0u + 264u);  if (depth < kMaxDepth) unit_005D(c, 628u, depth + 1u); else { c.pc = 0x00277920u; return; } if (c.pc != 0x00265EDCu) [[unlikely]] return; }
L_00265EDC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00265EF0; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 136u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00265EF0u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0013(c, 28u, depth + 1u); else { c.pc = 0x0014C4E0u; return; } if (c.pc != 0x00265EF0u) [[unlikely]] return; }
L_00265EF0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00265EF8u);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x00265EF8u) [[unlikely]] return; }
L_00265EF8:
    c.r[2].d[0] = ld8((c.r[2].w[0] + 19u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00265FBC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00265F0Cu); set32(c.r[4], ld32((c.r[17].w[0] + 16u)));  if (depth < kMaxDepth) unit_006F(c, 285u, depth + 1u); else { c.pc = 0x002BFCC0u; return; } if (c.pc != 0x00265F0Cu) [[unlikely]] return; }
L_00265F0C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00265F1C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00265F1Cu); set32(c.r[4], ld32((c.r[17].w[0] + 16u)));  if (depth < kMaxDepth) unit_006F(c, 282u, depth + 1u); else { c.pc = 0x002BFBF0u; return; } if (c.pc != 0x00265F1Cu) [[unlikely]] return; }
L_00265F1C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002660A4; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 16u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 912u)));
    set32(c.r[4], ld32((c.r[4].w[0] + 980u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_002660A4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00265F40u); set32(c.r[5], 0u + 264u);  if (depth < kMaxDepth) unit_005A(c, 31u, depth + 1u); else { c.pc = 0x002686A0u; return; } if (c.pc != 0x00265F40u) [[unlikely]] return; }
L_00265F40:
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_002660A4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00265F54u);  if (depth < kMaxDepth) unit_005A(c, 33u, depth + 1u); else { c.pc = 0x002686F0u; return; } if (c.pc != 0x00265F54u) [[unlikely]] return; }
L_00265F54:
    set32(c.r[3], ld32((c.r[17].w[0] + 16u)));
    set32(c.r[2], 0u + 8u);
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[3].d[0] = ld64((c.r[3].w[0] + 704u));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00265F98; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00265F80u); set32(c.r[5], 0u + 4618u);  if (depth < kMaxDepth) unit_005D(c, 628u, depth + 1u); else { c.pc = 0x00277920u; return; } if (c.pc != 0x00265F80u) [[unlikely]] return; }
L_00265F80:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00265F94; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 136u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00265F94u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0013(c, 28u, depth + 1u); else { c.pc = 0x0014C4E0u; return; } if (c.pc != 0x00265F94u) [[unlikely]] return; }
L_00265F94:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00265F98:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00265FA0u); set32(c.r[5], 0u + 264u);  if (depth < kMaxDepth) unit_005D(c, 628u, depth + 1u); else { c.pc = 0x00277920u; return; } if (c.pc != 0x00265FA0u) [[unlikely]] return; }
L_00265FA0:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_002660A4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00265FB4u); set32(c.r[4], ld32((c.r[17].w[0] + 136u)));  if (depth < kMaxDepth) unit_0013(c, 28u, depth + 1u); else { c.pc = 0x0014C4E0u; return; } if (c.pc != 0x00265FB4u) [[unlikely]] return; }
L_00265FB4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[17].w[0] + 136u)));  if (t) { goto L_002660A8; } }
L_00265FBC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00265FC4u);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x00265FC4u) [[unlikely]] return; }
L_00265FC4:
    c.r[3].d[0] = ld8((c.r[2].w[0] + 16u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002660A4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00265FD8u);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x00265FD8u) [[unlikely]] return; }
L_00265FD8:
    c.r[2].d[0] = ld8((c.r[2].w[0] + 35u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0026600C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00265FECu);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x00265FECu) [[unlikely]] return; }
L_00265FEC:
    c.r[2].d[0] = ld8((c.r[2].w[0] + 36u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0026600C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00266000u);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x00266000u) [[unlikely]] return; }
L_00266000:
    c.r[3].d[0] = ld8((c.r[2].w[0] + 1u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002660A4; } }
L_0026600C:
    set32(c.r[4], ld32((c.r[17].w[0] + 16u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00266018u); set32(c.r[16], ld32((c.r[4].w[0] + 984u)));  if (depth < kMaxDepth) unit_006F(c, 264u, depth + 1u); else { c.pc = 0x002BF670u; return; } if (c.pc != 0x00266018u) [[unlikely]] return; }
L_00266018:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002660A4; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[16].d[0]; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_002660A4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00266030u); set32(c.r[5], 0u + 264u);  if (depth < kMaxDepth) unit_005A(c, 31u, depth + 1u); else { c.pc = 0x002686A0u; return; } if (c.pc != 0x00266030u) [[unlikely]] return; }
L_00266030:
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_002660A4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00266044u);  if (depth < kMaxDepth) unit_005A(c, 33u, depth + 1u); else { c.pc = 0x002686F0u; return; } if (c.pc != 0x00266044u) [[unlikely]] return; }
L_00266044:
    set32(c.r[3], ld32((c.r[17].w[0] + 16u)));
    set32(c.r[2], 0u + 8u);
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[3].d[0] = ld64((c.r[3].w[0] + 704u));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00266088; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00266070u); set32(c.r[5], 0u + 4618u);  if (depth < kMaxDepth) unit_005D(c, 628u, depth + 1u); else { c.pc = 0x00277920u; return; } if (c.pc != 0x00266070u) [[unlikely]] return; }
L_00266070:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00266084; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 136u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00266084u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0013(c, 28u, depth + 1u); else { c.pc = 0x0014C4E0u; return; } if (c.pc != 0x00266084u) [[unlikely]] return; }
L_00266084:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00266088:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00266090u); set32(c.r[5], 0u + 264u);  if (depth < kMaxDepth) unit_005D(c, 628u, depth + 1u); else { c.pc = 0x00277920u; return; } if (c.pc != 0x00266090u) [[unlikely]] return; }
L_00266090:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_002660A4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002660A4u); set32(c.r[4], ld32((c.r[17].w[0] + 136u)));  if (depth < kMaxDepth) unit_0013(c, 28u, depth + 1u); else { c.pc = 0x0014C4E0u; return; } if (c.pc != 0x002660A4u) [[unlikely]] return; }
L_002660A4:
    set32(c.r[3], ld32((c.r[17].w[0] + 136u)));
    c.budget -= 1;
L_002660A8:
    set32(c.r[4], ld32((c.r[17].w[0] + 16u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 12u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[4], ld32((c.r[4].w[0] + 984u)));  if (t) { goto L_00266A40; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00266A40; } }
    set32(c.r[4], ld32((c.r[4].w[0] + 464u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00266A40; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002660DCu); set32(c.r[5], 0u + 264u);  if (depth < kMaxDepth) unit_005A(c, 31u, depth + 1u); else { c.pc = 0x002686A0u; return; } if (c.pc != 0x002660DCu) [[unlikely]] return; }
L_002660DC:
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00266A40; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002660F0u);  if (depth < kMaxDepth) unit_005A(c, 33u, depth + 1u); else { c.pc = 0x002686F0u; return; } if (c.pc != 0x002660F0u) [[unlikely]] return; }
L_002660F0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002660FCu); set32(c.r[5], 0u + 264u);  if (depth < kMaxDepth) unit_005D(c, 628u, depth + 1u); else { c.pc = 0x00277920u; return; } if (c.pc != 0x002660FCu) [[unlikely]] return; }
L_002660FC:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_00266A40; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00266110u); set32(c.r[4], ld32((c.r[17].w[0] + 136u)));  if (depth < kMaxDepth) unit_0013(c, 28u, depth + 1u); else { c.pc = 0x0014C4E0u; return; } if (c.pc != 0x00266110u) [[unlikely]] return; }
L_00266110:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00266A40; } }
L_00266118:
    set32(c.r[3], ld32((c.r[17].w[0] + 136u)));
    set32(c.r[4], ld32((c.r[3].w[0] + 12u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_0026615C; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 371u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0026615C; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00266140u); set32(c.r[5], 0u + 264u);  if (depth < kMaxDepth) unit_005D(c, 628u, depth + 1u); else { c.pc = 0x00277920u; return; } if (c.pc != 0x00266140u) [[unlikely]] return; }
L_00266140:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_00266A40; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00266154u); set32(c.r[4], ld32((c.r[17].w[0] + 136u)));  if (depth < kMaxDepth) unit_0013(c, 28u, depth + 1u); else { c.pc = 0x0014C4E0u; return; } if (c.pc != 0x00266154u) [[unlikely]] return; }
L_00266154:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00266A40; } }
L_0026615C:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_00266A40; } }
    c.r[3].d[0] = ld64((c.r[16].w[0] + 712u));
    c.r[3].d[0] = c.r[3].d[0] & 128ull;
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00266A40; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00266180u); set32(c.r[5], 0u + 264u);  if (depth < kMaxDepth) unit_005A(c, 31u, depth + 1u); else { c.pc = 0x002686A0u; return; } if (c.pc != 0x00266180u) [[unlikely]] return; }
L_00266180:
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00266A40; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00266194u); set32(c.r[5], 0u + 264u);  if (depth < kMaxDepth) unit_005D(c, 628u, depth + 1u); else { c.pc = 0x00277920u; return; } if (c.pc != 0x00266194u) [[unlikely]] return; }
L_00266194:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_00266A40; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002661A8u); set32(c.r[4], ld32((c.r[17].w[0] + 136u)));  if (depth < kMaxDepth) unit_0013(c, 28u, depth + 1u); else { c.pc = 0x0014C4E0u; return; } if (c.pc != 0x002661A8u) [[unlikely]] return; }
L_002661A8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00266A40; } }
L_002661B0:
    set32(c.r[3], ld32((c.r[17].w[0] + 136u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 12u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00266A40; } }
    c.r[5].d[0] = ld64((c.r[4].w[0] + 704u));
    c.r[3].d[0] = c.r[5].d[0] & 3ull;
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00266A40; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 464u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[2].d[0] = c.r[5].d[0] & 128ull;  if (t) { goto L_00266210; } }
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00266214; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002661FCu); set32(c.r[5], 0u + 8708u);  if (depth < kMaxDepth) unit_005D(c, 628u, depth + 1u); else { c.pc = 0x00277920u; return; } if (c.pc != 0x002661FCu) [[unlikely]] return; }
L_002661FC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00266210; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 136u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00266210u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0013(c, 28u, depth + 1u); else { c.pc = 0x0014C4E0u; return; } if (c.pc != 0x00266210u) [[unlikely]] return; }
L_00266210:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00266214:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026621Cu); set32(c.r[5], 0u + 10498u);  if (depth < kMaxDepth) unit_005D(c, 628u, depth + 1u); else { c.pc = 0x00277920u; return; } if (c.pc != 0x0026621Cu) [[unlikely]] return; }
L_0026621C:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_00266A40; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00266230u); set32(c.r[4], ld32((c.r[17].w[0] + 136u)));  if (depth < kMaxDepth) unit_0013(c, 28u, depth + 1u); else { c.pc = 0x0014C4E0u; return; } if (c.pc != 0x00266230u) [[unlikely]] return; }
L_00266230:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00266A40; } }
L_00266238:
    set32(c.r[2], ld32((c.r[17].w[0] + 136u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0026627C; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 371u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0026627C; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00266260u); set32(c.r[5], 0u + 264u);  if (depth < kMaxDepth) unit_005D(c, 628u, depth + 1u); else { c.pc = 0x00277920u; return; } if (c.pc != 0x00266260u) [[unlikely]] return; }
L_00266260:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_00266A40; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00266274u); set32(c.r[4], ld32((c.r[17].w[0] + 136u)));  if (depth < kMaxDepth) unit_0013(c, 28u, depth + 1u); else { c.pc = 0x0014C4E0u; return; } if (c.pc != 0x00266274u) [[unlikely]] return; }
L_00266274:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00266A40; } }
L_0026627C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00266284u);  if (depth < kMaxDepth) unit_0071(c, 31u, depth + 1u); else { c.pc = 0x002C45A0u; return; } if (c.pc != 0x00266284u) [[unlikely]] return; }
L_00266284:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002662C0; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 136u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 12u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_002662C0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002662A4u); set32(c.r[5], 0u + 23811u);  if (depth < kMaxDepth) unit_005D(c, 628u, depth + 1u); else { c.pc = 0x00277920u; return; } if (c.pc != 0x002662A4u) [[unlikely]] return; }
L_002662A4:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_00266A40; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002662B8u); set32(c.r[4], ld32((c.r[17].w[0] + 136u)));  if (depth < kMaxDepth) unit_0013(c, 28u, depth + 1u); else { c.pc = 0x0014C4E0u; return; } if (c.pc != 0x002662B8u) [[unlikely]] return; }
L_002662B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00266A40; } }
L_002662C0:
    set32(c.r[3], ld32((c.r[17].w[0] + 136u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 12u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00266A40; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002662D8u); set32(c.r[5], 0u + 23813u);  if (depth < kMaxDepth) unit_005D(c, 628u, depth + 1u); else { c.pc = 0x00277920u; return; } if (c.pc != 0x002662D8u) [[unlikely]] return; }
L_002662D8:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_00266A40; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002662ECu); set32(c.r[4], ld32((c.r[17].w[0] + 136u)));  if (depth < kMaxDepth) unit_0013(c, 28u, depth + 1u); else { c.pc = 0x0014C4E0u; return; } if (c.pc != 0x002662ECu) [[unlikely]] return; }
L_002662EC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00266A40; } }
L_002662F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002662FCu);  if (depth < kMaxDepth) unit_0059(c, 51u, depth + 1u); else { c.pc = 0x00264AD0u; return; } if (c.pc != 0x002662FCu) [[unlikely]] return; }
L_002662FC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00266A40; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 136u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 12u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00266A40; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026631Cu); set32(c.r[5], 0u + 3331u);  if (depth < kMaxDepth) unit_005D(c, 628u, depth + 1u); else { c.pc = 0x00277920u; return; } if (c.pc != 0x0026631Cu) [[unlikely]] return; }
L_0026631C:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_00266A40; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00266330u); set32(c.r[4], ld32((c.r[17].w[0] + 136u)));  if (depth < kMaxDepth) unit_0013(c, 28u, depth + 1u); else { c.pc = 0x0014C4E0u; return; } if (c.pc != 0x00266330u) [[unlikely]] return; }
L_00266330:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00266A40; } }
L_00266338:
    c.r[3].d[0] = ld64((c.r[4].w[0] + 712u));
    c.r[3].d[0] = c.r[3].d[0] & 224ull;
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00266380; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 136u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 12u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00266A40; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00266364u); set32(c.r[5], 0u + 3587u);  if (depth < kMaxDepth) unit_005D(c, 628u, depth + 1u); else { c.pc = 0x00277920u; return; } if (c.pc != 0x00266364u) [[unlikely]] return; }
L_00266364:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_00266A40; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00266378u); set32(c.r[4], ld32((c.r[17].w[0] + 136u)));  if (depth < kMaxDepth) unit_0013(c, 28u, depth + 1u); else { c.pc = 0x0014C4E0u; return; } if (c.pc != 0x00266378u) [[unlikely]] return; }
L_00266378:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00266A40; } }
L_00266380:
    c.r[3].d[0] = ld64((c.r[16].w[0] + 712u));
    c.r[3].d[0] = c.r[3].d[0] & 128ull;
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002663E0; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 176u)));
    c.r[1].d[0] = c.r[3].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002663E0; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002663B0u); set32(c.r[5], 0u + 264u);  if (depth < kMaxDepth) unit_005A(c, 31u, depth + 1u); else { c.pc = 0x002686A0u; return; } if (c.pc != 0x002663B0u) [[unlikely]] return; }
L_002663B0:
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_002663E0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002663C4u); set32(c.r[5], 0u + 264u);  if (depth < kMaxDepth) unit_005D(c, 628u, depth + 1u); else { c.pc = 0x00277920u; return; } if (c.pc != 0x002663C4u) [[unlikely]] return; }
L_002663C4:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_00266A40; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002663D8u); set32(c.r[4], ld32((c.r[17].w[0] + 136u)));  if (depth < kMaxDepth) unit_0013(c, 28u, depth + 1u); else { c.pc = 0x0014C4E0u; return; } if (c.pc != 0x002663D8u) [[unlikely]] return; }
L_002663D8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00266A40; } }
L_002663E0:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00266A40; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 464u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00266A40; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00266400u); set32(c.r[5], 0u + 264u);  if (depth < kMaxDepth) unit_005A(c, 31u, depth + 1u); else { c.pc = 0x002686A0u; return; } if (c.pc != 0x00266400u) [[unlikely]] return; }
L_00266400:
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00266A40; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 136u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 12u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00266A40; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00266424u);  if (depth < kMaxDepth) unit_005A(c, 33u, depth + 1u); else { c.pc = 0x002686F0u; return; } if (c.pc != 0x00266424u) [[unlikely]] return; }
L_00266424:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00266430u); set32(c.r[5], 0u + 264u);  if (depth < kMaxDepth) unit_005D(c, 628u, depth + 1u); else { c.pc = 0x00277920u; return; } if (c.pc != 0x00266430u) [[unlikely]] return; }
L_00266430:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_00266A40; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00266444u); set32(c.r[4], ld32((c.r[17].w[0] + 136u)));  if (depth < kMaxDepth) unit_0013(c, 28u, depth + 1u); else { c.pc = 0x0014C4E0u; return; } if (c.pc != 0x00266444u) [[unlikely]] return; }
L_00266444:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00266A40; } }
L_0026644C:
    set32(c.r[3], ld32((c.r[17].w[0] + 136u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 12u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00266A40; } }
    c.r[3].d[0] = ld64((c.r[4].w[0] + 704u));
    c.r[3].d[0] = c.r[3].d[0] & 3ull;
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00266A40; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026647Cu); set32(c.r[5], 0u + 23810u);  if (depth < kMaxDepth) unit_005D(c, 628u, depth + 1u); else { c.pc = 0x00277920u; return; } if (c.pc != 0x0026647Cu) [[unlikely]] return; }
L_0026647C:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_00266A40; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00266490u); set32(c.r[4], ld32((c.r[17].w[0] + 136u)));  if (depth < kMaxDepth) unit_0013(c, 28u, depth + 1u); else { c.pc = 0x0014C4E0u; return; } if (c.pc != 0x00266490u) [[unlikely]] return; }
L_00266490:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00266A40; } }
L_00266498:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002664A0u);  if (depth < kMaxDepth) unit_0070(c, 153u, depth + 1u); else { c.pc = 0x002C29F0u; return; } if (c.pc != 0x002664A0u) [[unlikely]] return; }
L_002664A0:
    set32(c.r[4], ld32((c.r[17].w[0] + 16u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002664ACu); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0071(c, 28u, depth + 1u); else { c.pc = 0x002C44E0u; return; } if (c.pc != 0x002664ACu) [[unlikely]] return; }
L_002664AC:
    set32(c.r[4], ld32((c.r[17].w[0] + 16u)));
    c.r[3].d[0] = ld64((c.r[4].w[0] + 704u));
    c.r[3].d[0] = c.r[3].d[0] & 128ull;
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00266530; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 136u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 12u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00266530; } }
    c.r[2].d[0] = ld8((c.r[4].w[0] + 370u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00266508; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002664ECu); set32(c.r[5], 0u + 8708u);  if (depth < kMaxDepth) unit_005D(c, 628u, depth + 1u); else { c.pc = 0x00277920u; return; } if (c.pc != 0x002664ECu) [[unlikely]] return; }
L_002664EC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00266654; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 136u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00266500u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0013(c, 28u, depth + 1u); else { c.pc = 0x0014C4E0u; return; } if (c.pc != 0x00266500u) [[unlikely]] return; }
L_00266500:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[17].w[0] + 16u)));  if (t) { goto L_00266658; } }
L_00266508:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00266514u); set32(c.r[5], 0u + 8705u);  if (depth < kMaxDepth) unit_005D(c, 628u, depth + 1u); else { c.pc = 0x00277920u; return; } if (c.pc != 0x00266514u) [[unlikely]] return; }
L_00266514:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00266654; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 136u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00266528u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0013(c, 28u, depth + 1u); else { c.pc = 0x0014C4E0u; return; } if (c.pc != 0x00266528u) [[unlikely]] return; }
L_00266528:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00266654; } }
L_00266530:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00266590; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 984u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[3], 0u + 37u);  if (t) { goto L_00266588; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00266550u); set32(c.r[5], 0u + 10u);  if (depth < kMaxDepth) unit_005A(c, 31u, depth + 1u); else { c.pc = 0x002686A0u; return; } if (c.pc != 0x00266550u) [[unlikely]] return; }
L_00266550:
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00266584; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00266564u);  if (depth < kMaxDepth) unit_005A(c, 33u, depth + 1u); else { c.pc = 0x002686F0u; return; } if (c.pc != 0x00266564u) [[unlikely]] return; }
L_00266564:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00266570u); set32(c.r[5], 0u + 10u);  if (depth < kMaxDepth) unit_005D(c, 566u, depth + 1u); else { c.pc = 0x002773A0u; return; } if (c.pc != 0x00266570u) [[unlikely]] return; }
L_00266570:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_00266584; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00266584u); set32(c.r[4], ld32((c.r[17].w[0] + 136u)));  if (depth < kMaxDepth) unit_0013(c, 28u, depth + 1u); else { c.pc = 0x0014C4E0u; return; } if (c.pc != 0x00266584u) [[unlikely]] return; }
L_00266584:
    set32(c.r[3], 0u + 37u);
    c.budget -= 1;
L_00266588:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_00266A40; } }
L_00266590:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_002665F0; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 984u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[16].d[0]; set32(c.r[3], 0u + 36u);  if (t) { goto L_002665E8; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002665B0u); set32(c.r[5], 0u + 9u);  if (depth < kMaxDepth) unit_005A(c, 31u, depth + 1u); else { c.pc = 0x002686A0u; return; } if (c.pc != 0x002665B0u) [[unlikely]] return; }
L_002665B0:
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_002665E4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002665C4u);  if (depth < kMaxDepth) unit_005A(c, 33u, depth + 1u); else { c.pc = 0x002686F0u; return; } if (c.pc != 0x002665C4u) [[unlikely]] return; }
L_002665C4:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002665D0u); set32(c.r[5], 0u + 9u);  if (depth < kMaxDepth) unit_005D(c, 566u, depth + 1u); else { c.pc = 0x002773A0u; return; } if (c.pc != 0x002665D0u) [[unlikely]] return; }
L_002665D0:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_002665E4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002665E4u); set32(c.r[4], ld32((c.r[17].w[0] + 136u)));  if (depth < kMaxDepth) unit_0013(c, 28u, depth + 1u); else { c.pc = 0x0014C4E0u; return; } if (c.pc != 0x002665E4u) [[unlikely]] return; }
L_002665E4:
    set32(c.r[3], 0u + 36u);
    c.budget -= 1;
L_002665E8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_00266A40; } }
L_002665F0:
    set32(c.r[2], ld32((c.r[4].w[0] + 984u)));
    c.r[2].d[0] = ld64((c.r[2].w[0] + 712u));
    c.r[2].d[0] = c.r[2].d[0] & 128ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00266654; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 176u)));
    c.r[1].d[0] = c.r[2].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00266654; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00266624u); set32(c.r[5], 0u + 264u);  if (depth < kMaxDepth) unit_005A(c, 31u, depth + 1u); else { c.pc = 0x002686A0u; return; } if (c.pc != 0x00266624u) [[unlikely]] return; }
L_00266624:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00266654; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00266638u); set32(c.r[5], 0u + 264u);  if (depth < kMaxDepth) unit_005D(c, 628u, depth + 1u); else { c.pc = 0x00277920u; return; } if (c.pc != 0x00266638u) [[unlikely]] return; }
L_00266638:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_00266A40; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026664Cu); set32(c.r[4], ld32((c.r[17].w[0] + 136u)));  if (depth < kMaxDepth) unit_0013(c, 28u, depth + 1u); else { c.pc = 0x0014C4E0u; return; } if (c.pc != 0x0026664Cu) [[unlikely]] return; }
L_0026664C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00266A40; } }
L_00266654:
    set32(c.r[4], ld32((c.r[17].w[0] + 16u)));
    c.budget -= 1;
L_00266658:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00266660u);  if (depth < kMaxDepth) unit_0070(c, 147u, depth + 1u); else { c.pc = 0x002C28D0u; return; } if (c.pc != 0x00266660u) [[unlikely]] return; }
L_00266660:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_002666AC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00266670u); set32(c.r[5], 0u + 7u);  if (depth < kMaxDepth) unit_005A(c, 31u, depth + 1u); else { c.pc = 0x002686A0u; return; } if (c.pc != 0x00266670u) [[unlikely]] return; }
L_00266670:
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_002666AC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00266684u);  if (depth < kMaxDepth) unit_005A(c, 33u, depth + 1u); else { c.pc = 0x002686F0u; return; } if (c.pc != 0x00266684u) [[unlikely]] return; }
L_00266684:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00266690u); set32(c.r[5], 0u + 7u);  if (depth < kMaxDepth) unit_005D(c, 566u, depth + 1u); else { c.pc = 0x002773A0u; return; } if (c.pc != 0x00266690u) [[unlikely]] return; }
L_00266690:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_00266A40; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002666A4u); set32(c.r[4], ld32((c.r[17].w[0] + 136u)));  if (depth < kMaxDepth) unit_0013(c, 28u, depth + 1u); else { c.pc = 0x0014C4E0u; return; } if (c.pc != 0x002666A4u) [[unlikely]] return; }
L_002666A4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00266A40; } }
L_002666AC:
    set32(c.r[3], ld32((c.r[17].w[0] + 136u)));
    set32(c.r[4], ld32((c.r[3].w[0] + 12u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_00266700; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 16u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 984u)));
    c.r[3].d[0] = ld64((c.r[3].w[0] + 712u));
    c.r[3].d[0] = c.r[3].d[0] & 224ull;
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00266700; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002666E4u); set32(c.r[5], 0u + 264u);  if (depth < kMaxDepth) unit_005D(c, 628u, depth + 1u); else { c.pc = 0x00277920u; return; } if (c.pc != 0x002666E4u) [[unlikely]] return; }
L_002666E4:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_00266A40; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002666F8u); set32(c.r[4], ld32((c.r[17].w[0] + 136u)));  if (depth < kMaxDepth) unit_0013(c, 28u, depth + 1u); else { c.pc = 0x0014C4E0u; return; } if (c.pc != 0x002666F8u) [[unlikely]] return; }
L_002666F8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00266A40; } }
L_00266700:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_0026676C; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 16u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 984u)));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 371u));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0026676C; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_0026676C; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00266730u); set32(c.r[5], 0u + 264u);  if (depth < kMaxDepth) unit_005D(c, 628u, depth + 1u); else { c.pc = 0x00277920u; return; } if (c.pc != 0x00266730u) [[unlikely]] return; }
L_00266730:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00266748; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 136u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00266744u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0013(c, 28u, depth + 1u); else { c.pc = 0x0014C4E0u; return; } if (c.pc != 0x00266744u) [[unlikely]] return; }
L_00266744:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00266748:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00266750u); set32(c.r[5], 0u + 11u);  if (depth < kMaxDepth) unit_005D(c, 566u, depth + 1u); else { c.pc = 0x002773A0u; return; } if (c.pc != 0x00266750u) [[unlikely]] return; }
L_00266750:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_00266A40; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00266764u); set32(c.r[4], ld32((c.r[17].w[0] + 136u)));  if (depth < kMaxDepth) unit_0013(c, 28u, depth + 1u); else { c.pc = 0x0014C4E0u; return; } if (c.pc != 0x00266764u) [[unlikely]] return; }
L_00266764:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00266A40; } }
L_0026676C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], ld32((c.r[1].w[0] + 31608u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00266828; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_00266828; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026678Cu); set32(c.r[4], ld32((c.r[17].w[0] + 16u)));  if (depth < kMaxDepth) unit_0070(c, 187u, depth + 1u); else { c.pc = 0x002C3420u; return; } if (c.pc != 0x0026678Cu) [[unlikely]] return; }
L_0026678C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00266828; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_00266828; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 16u)));
    c.r[3].d[0] = ld64((c.r[3].w[0] + 704u));
    c.r[3].d[0] = c.r[3].d[0] & 3ull;
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00266828; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002667BCu);  if (depth < kMaxDepth) unit_003D(c, 81u, depth + 1u); else { c.pc = 0x001F53D0u; return; } if (c.pc != 0x002667BCu) [[unlikely]] return; }
L_002667BC:
    set32(c.r[3], 0u + 32u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_00266828; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002667D0u);  if (depth < kMaxDepth) unit_003D(c, 81u, depth + 1u); else { c.pc = 0x001F53D0u; return; } if (c.pc != 0x002667D0u) [[unlikely]] return; }
L_002667D0:
    c.r[1].d[0] = c.r[2].sd[0] < 30ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00266804; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002667E8u); set32(c.r[5], 0u + 6u);  if (depth < kMaxDepth) unit_005D(c, 566u, depth + 1u); else { c.pc = 0x002773A0u; return; } if (c.pc != 0x002667E8u) [[unlikely]] return; }
L_002667E8:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_00266A40; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002667FCu); set32(c.r[4], ld32((c.r[17].w[0] + 136u)));  if (depth < kMaxDepth) unit_0013(c, 28u, depth + 1u); else { c.pc = 0x0014C4E0u; return; } if (c.pc != 0x002667FCu) [[unlikely]] return; }
L_002667FC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00266A40; } }
L_00266804:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026680Cu); set32(c.r[5], 0u + 5u);  if (depth < kMaxDepth) unit_005D(c, 566u, depth + 1u); else { c.pc = 0x002773A0u; return; } if (c.pc != 0x0026680Cu) [[unlikely]] return; }
L_0026680C:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_00266A40; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00266820u); set32(c.r[4], ld32((c.r[17].w[0] + 136u)));  if (depth < kMaxDepth) unit_0013(c, 28u, depth + 1u); else { c.pc = 0x0014C4E0u; return; } if (c.pc != 0x00266820u) [[unlikely]] return; }
L_00266820:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00266A40; } }
L_00266828:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], ld32((c.r[1].w[0] + 31608u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00266A40; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 136u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 12u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00266A40; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00266850u); set32(c.r[4], ld32((c.r[17].w[0] + 16u)));  if (depth < kMaxDepth) unit_0070(c, 187u, depth + 1u); else { c.pc = 0x002C3420u; return; } if (c.pc != 0x00266850u) [[unlikely]] return; }
L_00266850:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00266A40; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00266860u); set32(c.r[5], 0u + 11u);  if (depth < kMaxDepth) unit_005D(c, 566u, depth + 1u); else { c.pc = 0x002773A0u; return; } if (c.pc != 0x00266860u) [[unlikely]] return; }
L_00266860:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_00266A40; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00266874u); set32(c.r[4], ld32((c.r[17].w[0] + 136u)));  if (depth < kMaxDepth) unit_0013(c, 28u, depth + 1u); else { c.pc = 0x0014C4E0u; return; } if (c.pc != 0x00266874u) [[unlikely]] return; }
L_00266874:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00266A40; } }
L_0026687C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00266884u);  if (depth < kMaxDepth) unit_0070(c, 196u, depth + 1u); else { c.pc = 0x002C35E0u; return; } if (c.pc != 0x00266884u) [[unlikely]] return; }
L_00266884:
    set32(c.r[3], ld32((c.r[17].w[0] + 16u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 984u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_002668D0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026689Cu); set32(c.r[5], 0u + 264u);  if (depth < kMaxDepth) unit_005A(c, 31u, depth + 1u); else { c.pc = 0x002686A0u; return; } if (c.pc != 0x0026689Cu) [[unlikely]] return; }
L_0026689C:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_002668D0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002668B0u);  if (depth < kMaxDepth) unit_005A(c, 33u, depth + 1u); else { c.pc = 0x002686F0u; return; } if (c.pc != 0x002668B0u) [[unlikely]] return; }
L_002668B0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002668BCu); set32(c.r[5], 0u + 264u);  if (depth < kMaxDepth) unit_005D(c, 628u, depth + 1u); else { c.pc = 0x00277920u; return; } if (c.pc != 0x002668BCu) [[unlikely]] return; }
L_002668BC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002668D0; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 136u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002668D0u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0013(c, 28u, depth + 1u); else { c.pc = 0x0014C4E0u; return; } if (c.pc != 0x002668D0u) [[unlikely]] return; }
L_002668D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002668D8u); set32(c.r[4], ld32((c.r[17].w[0] + 16u)));  if (depth < kMaxDepth) unit_0070(c, 196u, depth + 1u); else { c.pc = 0x002C35E0u; return; } if (c.pc != 0x002668D8u) [[unlikely]] return; }
L_002668D8:
    set32(c.r[3], ld32((c.r[17].w[0] + 136u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 12u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00266A40; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00266A40; } }
    c.r[2].d[0] = ld8((c.r[2].w[0] + 370u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00266948; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 16u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 370u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00266944; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00266914u);  if (depth < kMaxDepth) unit_0070(c, 145u, depth + 1u); else { c.pc = 0x002C2880u; return; } if (c.pc != 0x00266914u) [[unlikely]] return; }
L_00266914:
    c.r[1].d[0] = c.r[2].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00266944; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00266928u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_005D(c, 566u, depth + 1u); else { c.pc = 0x002773A0u; return; } if (c.pc != 0x00266928u) [[unlikely]] return; }
L_00266928:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_00266A40; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026693Cu); set32(c.r[4], ld32((c.r[17].w[0] + 136u)));  if (depth < kMaxDepth) unit_0013(c, 28u, depth + 1u); else { c.pc = 0x0014C4E0u; return; } if (c.pc != 0x0026693Cu) [[unlikely]] return; }
L_0026693C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00266A40; } }
L_00266944:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00266948:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00266950u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_005D(c, 566u, depth + 1u); else { c.pc = 0x002773A0u; return; } if (c.pc != 0x00266950u) [[unlikely]] return; }
L_00266950:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_00266A40; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00266964u); set32(c.r[4], ld32((c.r[17].w[0] + 136u)));  if (depth < kMaxDepth) unit_0013(c, 28u, depth + 1u); else { c.pc = 0x0014C4E0u; return; } if (c.pc != 0x00266964u) [[unlikely]] return; }
L_00266964:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00266A40; } }
L_0026696C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00266974u);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x00266974u) [[unlikely]] return; }
L_00266974:
    c.r[3].d[0] = ld8((c.r[2].w[0] + 26u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002669D4; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 136u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 12u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00266A40; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 16u)));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 370u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_00266A40; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002669A8u);  if (depth < kMaxDepth) unit_0070(c, 208u, depth + 1u); else { c.pc = 0x002C3850u; return; } if (c.pc != 0x002669A8u) [[unlikely]] return; }
L_002669A8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00266A40; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002669B8u); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_005D(c, 566u, depth + 1u); else { c.pc = 0x002773A0u; return; } if (c.pc != 0x002669B8u) [[unlikely]] return; }
L_002669B8:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_00266A40; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002669CCu); set32(c.r[4], ld32((c.r[17].w[0] + 136u)));  if (depth < kMaxDepth) unit_0013(c, 28u, depth + 1u); else { c.pc = 0x0014C4E0u; return; } if (c.pc != 0x002669CCu) [[unlikely]] return; }
L_002669CC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00266A40; } }
L_002669D4:
    set32(c.r[3], ld32((c.r[17].w[0] + 136u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 12u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00266A40; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 16u)));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 370u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00266A40; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002669FCu);  if (depth < kMaxDepth) unit_0070(c, 142u, depth + 1u); else { c.pc = 0x002C27E0u; return; } if (c.pc != 0x002669FCu) [[unlikely]] return; }
L_002669FC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00266A40; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00266A0Cu); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_005D(c, 566u, depth + 1u); else { c.pc = 0x002773A0u; return; } if (c.pc != 0x00266A0Cu) [[unlikely]] return; }
L_00266A0C:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_00266A40; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00266A20u); set32(c.r[4], ld32((c.r[17].w[0] + 136u)));  if (depth < kMaxDepth) unit_0013(c, 28u, depth + 1u); else { c.pc = 0x0014C4E0u; return; } if (c.pc != 0x00266A20u) [[unlikely]] return; }
L_00266A20:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00266A40; } }
L_00266A28:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00266A30u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0059(c, 56u, depth + 1u); else { c.pc = 0x00264C70u; return; } if (c.pc != 0x00266A30u) [[unlikely]] return; }
L_00266A30:
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u + 32u);  if (t) { goto L_00266A40; } }
    st32((c.r[17].w[0] + 8u), c.r[3].w[0]);
    c.budget -= 1;
L_00266A40:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_00266A44:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00266A60:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u + 19u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 8u)));
    c.budget -= 8;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 18u);  if (t) { goto L_00266CA8; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00266C78; } }
    set32(c.r[3], 0u + 17u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 16u);  if (t) { goto L_00266BEC; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00266B90; } }
    set32(c.r[3], 0u + 26u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 25u);  if (t) { goto L_00266B24; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00266AF4; } }
    set32(c.r[3], 0u + 24u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00266AC4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_00266CAC; } }
L_00266AC4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00266ACCu); set32(c.r[4], ld32((c.r[16].w[0] + 16u)));  if (depth < kMaxDepth) unit_0059(c, 56u, depth + 1u); else { c.pc = 0x00264C70u; return; } if (c.pc != 0x00266ACCu) [[unlikely]] return; }
L_00266ACC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], 0u + 26u);  if (t) { goto L_00266AEC; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[3], 0u + 1u);
    set32(c.r[4], ld32((c.r[4].w[0] + 768u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00266CA8; } }
    set32(c.r[3], 0u + 26u);
    c.budget -= 1;
L_00266AEC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_00266CA8; } }
L_00266AF4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00266AFCu); set32(c.r[4], ld32((c.r[16].w[0] + 16u)));  if (depth < kMaxDepth) unit_0059(c, 56u, depth + 1u); else { c.pc = 0x00264C70u; return; } if (c.pc != 0x00266AFCu) [[unlikely]] return; }
L_00266AFC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], 0u + 26u);  if (t) { goto L_00266B1C; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[3], 0u + 1u);
    set32(c.r[4], ld32((c.r[4].w[0] + 768u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00266CA8; } }
    set32(c.r[3], 0u + 26u);
    c.budget -= 1;
L_00266B1C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_00266CA8; } }
L_00266B24:
    set32(c.r[4], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00266B30u); set32(c.r[5], 0u + 60u);  if (depth < kMaxDepth) unit_0070(c, 38u, depth + 1u); else { c.pc = 0x002C0B90u; return; } if (c.pc != 0x00266B30u) [[unlikely]] return; }
L_00266B30:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00266B40; } }
    set32(c.r[2], 0u + 25u);
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 2;
L_00266B40:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00266B48u); set32(c.r[4], ld32((c.r[16].w[0] + 16u)));  if (depth < kMaxDepth) unit_0070(c, 83u, depth + 1u); else { c.pc = 0x002C19D0u; return; } if (c.pc != 0x00266B48u) [[unlikely]] return; }
L_00266B48:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], 0u + 25u);  if (t) { goto L_00266B54; } }
    st32((c.r[16].w[0] + 8u), c.r[3].w[0]);
    c.budget -= 1;
L_00266B54:
    set32(c.r[4], ld32((c.r[16].w[0] + 16u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.r[5].d[0] = ld64((c.r[4].w[0] + 704u));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u + 25u);  if (t) { goto L_00266B88; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00266B7Cu);  if (depth < kMaxDepth) unit_0059(c, 56u, depth + 1u); else { c.pc = 0x00264C70u; return; } if (c.pc != 0x00266B7Cu) [[unlikely]] return; }
L_00266B7C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00266CA8; } }
    set32(c.r[3], 0u + 25u);
    c.budget -= 1;
L_00266B88:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_00266CA8; } }
L_00266B90:
    set32(c.r[4], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00266B9Cu); set32(c.r[5], 0u + 60u);  if (depth < kMaxDepth) unit_0070(c, 38u, depth + 1u); else { c.pc = 0x002C0B90u; return; } if (c.pc != 0x00266B9Cu) [[unlikely]] return; }
L_00266B9C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00266BCC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00266BACu); set32(c.r[4], ld32((c.r[16].w[0] + 16u)));  if (depth < kMaxDepth) unit_0070(c, 42u, depth + 1u); else { c.pc = 0x002C0CB0u; return; } if (c.pc != 0x00266BACu) [[unlikely]] return; }
L_00266BAC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00266BCC; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.r[1].d[0] = c.r[3].sd[0] < 481ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[3], 0u + 17u);  if (t) { goto L_00266BCC; } }
    st32((c.r[16].w[0] + 8u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 4u), 0u);
    c.budget -= 2;
L_00266BCC:
    set32(c.r[4], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[3], 0u + 1u);
    set32(c.r[4], ld32((c.r[4].w[0] + 768u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 17u);  if (t) { goto L_00266CA8; } }
    st32((c.r[16].w[0] + 8u), c.r[3].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 4u), 0u);  if (t) { goto L_00266CA8; } }
L_00266BEC:
    set32(c.r[4], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00266BF8u); set32(c.r[5], 0u + 60u);  if (depth < kMaxDepth) unit_0070(c, 38u, depth + 1u); else { c.pc = 0x002C0B90u; return; } if (c.pc != 0x00266BF8u) [[unlikely]] return; }
L_00266BF8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00266C10; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00266C08u); set32(c.r[4], ld32((c.r[16].w[0] + 16u)));  if (depth < kMaxDepth) unit_0070(c, 42u, depth + 1u); else { c.pc = 0x002C0CB0u; return; } if (c.pc != 0x00266C08u) [[unlikely]] return; }
L_00266C08:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00266C1C; } }
L_00266C10:
    st32((c.r[16].w[0] + 4u), 0u);
    set32(c.r[2], 0u + 16u);
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 3;
L_00266C1C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00266C24u); set32(c.r[4], ld32((c.r[16].w[0] + 16u)));  if (depth < kMaxDepth) unit_0070(c, 83u, depth + 1u); else { c.pc = 0x002C19D0u; return; } if (c.pc != 0x00266C24u) [[unlikely]] return; }
L_00266C24:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00266C38; } }
    st32((c.r[16].w[0] + 4u), 0u);
    set32(c.r[3], 0u + 16u);
    st32((c.r[16].w[0] + 8u), c.r[3].w[0]);
    c.budget -= 3;
L_00266C38:
    set32(c.r[4], ld32((c.r[16].w[0] + 16u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.r[5].d[0] = ld64((c.r[4].w[0] + 704u));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00266C68; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00266C60u);  if (depth < kMaxDepth) unit_0059(c, 56u, depth + 1u); else { c.pc = 0x00264C70u; return; } if (c.pc != 0x00266C60u) [[unlikely]] return; }
L_00266C60:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00266CA8; } }
L_00266C68:
    st32((c.r[16].w[0] + 4u), 0u);
    set32(c.r[3], 0u + 16u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_00266CA8; } }
L_00266C78:
    set32(c.r[4], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00266C84u); set32(c.r[5], 0u + 60u);  if (depth < kMaxDepth) unit_0070(c, 38u, depth + 1u); else { c.pc = 0x002C0B90u; return; } if (c.pc != 0x00266C84u) [[unlikely]] return; }
L_00266C84:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00266C9C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00266C94u); set32(c.r[4], ld32((c.r[16].w[0] + 16u)));  if (depth < kMaxDepth) unit_0070(c, 42u, depth + 1u); else { c.pc = 0x002C0CB0u; return; } if (c.pc != 0x00266C94u) [[unlikely]] return; }
L_00266C94:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00266CA8; } }
L_00266C9C:
    st32((c.r[16].w[0] + 4u), 0u);
    set32(c.r[3], 0u + 16u);
    st32((c.r[16].w[0] + 8u), c.r[3].w[0]);
    c.budget -= 3;
L_00266CA8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_00266CAC:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00266CC0:
    set32(c.r[5], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_00266CE0; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_00266D04; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00266D04; } }
L_00266CE0:
    set32(c.r[3], ld32((c.r[4].w[0] + 16u)));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 370u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00490000u);  if (t) { goto L_00266D00; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 8896u)));
    c.r[3].d[0] = c.r[3].sd[0] < 30ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00266D04; } }
L_00266D00:
    st32((c.r[4].w[0] + 8u), 0u);
    c.budget -= 1;
L_00266D04:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00266D10:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(13ll) ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[1].d[0] == 0ull; c.r[18].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00267390; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + 32112u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x00264000u < 16384u) { entry = entries_0059[(t - 0x00264000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00266D50:
    set32(c.r[3], ld32((c.r[18].w[0] + 16u)));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 370u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], 0u + 3u);  if (t) { goto L_00266D74; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00266D68u);  if (depth < kMaxDepth) unit_003D(c, 344u, depth + 1u); else { c.pc = 0x001F7FB0u; return; } if (c.pc != 0x00266D68u) [[unlikely]] return; }
L_00266D68:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00267390; } }
    set32(c.r[3], 0u + 3u);
    c.budget -= 1;
L_00266D74:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_00267390; } }
L_00266D7C:
    set32(c.r[3], ld32((c.r[18].w[0] + 16u)));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 371u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], 0u + 7u);  if (t) { goto L_00267390; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_00267390; } }
L_00266D94:
    set32(c.r[3], ld32((c.r[18].w[0] + 16u)));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 371u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u + 3u);  if (t) { goto L_00266DA8; } }
    st32((c.r[18].w[0] + 8u), c.r[3].w[0]);
    c.budget -= 1;
L_00266DA8:
    set32(c.r[4], ld32((c.r[18].w[0] + 16u)));
    set32(c.r[3], 0u + 1u);
    set32(c.r[4], ld32((c.r[4].w[0] + 768u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 12u);  if (t) { goto L_00266DC0; } }
    st32((c.r[18].w[0] + 8u), c.r[3].w[0]);
    c.budget -= 1;
L_00266DC0:
    set32(c.r[3], ld32((c.r[18].w[0] + 20u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 348u)));
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(301ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_00267390; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 16u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00266DE0u); set32(c.r[5], 0u + 60u);  if (depth < kMaxDepth) unit_0070(c, 38u, depth + 1u); else { c.pc = 0x002C0B90u; return; } if (c.pc != 0x00266DE0u) [[unlikely]] return; }
L_00266DE0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], 0u + 12u);  if (t) { goto L_00267390; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_00267390; } }
L_00266DF0:
    set32(c.r[4], ld32((c.r[18].w[0] + 16u)));
    set32(c.r[3], 0u + 1u);
    set32(c.r[4], ld32((c.r[4].w[0] + 768u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 12u);  if (t) { goto L_00267390; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_00267390; } }
L_00266E0C:
    set32(c.r[2], ld32((c.r[18].w[0] + 16u)));
    c.r[2].d[0] = ld64((c.r[2].w[0] + 712u));
    c.r[2].d[0] = c.r[2].d[0] & 224ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00267234; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00266E2Cu); set32(c.r[4], ld32((c.r[18].w[0] + 20u)));  if (depth < kMaxDepth) unit_0052(c, 292u, depth + 1u); else { c.pc = 0x0024BBC0u; return; } if (c.pc != 0x00266E2Cu) [[unlikely]] return; }
L_00266E2C:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[18].w[0] + 16u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00266E3Cu); set32(c.r[4], ld32((c.r[2].w[0] + 624u)));  if (depth < kMaxDepth) unit_0070(c, 110u, depth + 1u); else { c.pc = 0x002C1FF0u; return; } if (c.pc != 0x00266E3Cu) [[unlikely]] return; }
L_00266E3C:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002670A8; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 16u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 912u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 912u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_002670A8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00266E60u);  if (depth < kMaxDepth) unit_005A(c, 33u, depth + 1u); else { c.pc = 0x002686F0u; return; } if (c.pc != 0x00266E60u) [[unlikely]] return; }
L_00266E60:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00266E68u); set32(c.r[4], ld32((c.r[18].w[0] + 16u)));  if (depth < kMaxDepth) unit_0070(c, 83u, depth + 1u); else { c.pc = 0x002C19D0u; return; } if (c.pc != 0x00266E68u) [[unlikely]] return; }
L_00266E68:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_00266E98; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00266E7Cu); set32(c.r[5], 0u + 264u);  if (depth < kMaxDepth) unit_005D(c, 628u, depth + 1u); else { c.pc = 0x00277920u; return; } if (c.pc != 0x00266E7Cu) [[unlikely]] return; }
L_00266E7C:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull; c.r[1].d[0] = c.r[17].d[0] < static_cast<std::uint64_t>(7ll) ? 1ull : 0ull;  if (t) { goto L_00266EB8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00266E90u); set32(c.r[4], ld32((c.r[18].w[0] + 136u)));  if (depth < kMaxDepth) unit_0013(c, 28u, depth + 1u); else { c.pc = 0x0014C4E0u; return; } if (c.pc != 0x00266E90u) [[unlikely]] return; }
L_00266E90:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00266EB4; } }
L_00266E98:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00266EA0u); set32(c.r[5], 0u + 269u);  if (depth < kMaxDepth) unit_005D(c, 628u, depth + 1u); else { c.pc = 0x00277920u; return; } if (c.pc != 0x00266EA0u) [[unlikely]] return; }
L_00266EA0:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_00266EB4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00266EB4u); set32(c.r[4], ld32((c.r[18].w[0] + 136u)));  if (depth < kMaxDepth) unit_0013(c, 28u, depth + 1u); else { c.pc = 0x0014C4E0u; return; } if (c.pc != 0x00266EB4u) [[unlikely]] return; }
L_00266EB4:
    c.r[1].d[0] = c.r[17].d[0] < static_cast<std::uint64_t>(7ll) ? 1ull : 0ull;
    c.budget -= 1;
L_00266EB8:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[3], 0u + 8u);  if (t) { goto L_002670A0; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[3], c.r[17].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + 32080u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x00264000u < 16384u) { entry = entries_0059[(t - 0x00264000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00266EDC:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00266EE8u); set32(c.r[5], 0u + 3587u);  if (depth < kMaxDepth) unit_005D(c, 628u, depth + 1u); else { c.pc = 0x00277920u; return; } if (c.pc != 0x00266EE8u) [[unlikely]] return; }
L_00266EE8:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0026709C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00266EFCu); set32(c.r[4], ld32((c.r[18].w[0] + 136u)));  if (depth < kMaxDepth) unit_0013(c, 28u, depth + 1u); else { c.pc = 0x0014C4E0u; return; } if (c.pc != 0x00266EFCu) [[unlikely]] return; }
L_00266EFC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0026709C; } }
L_00266F04:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00266F10u); set32(c.r[5], 0u + 3331u);  if (depth < kMaxDepth) unit_005D(c, 628u, depth + 1u); else { c.pc = 0x00277920u; return; } if (c.pc != 0x00266F10u) [[unlikely]] return; }
L_00266F10:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0026709C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00266F24u); set32(c.r[4], ld32((c.r[18].w[0] + 136u)));  if (depth < kMaxDepth) unit_0013(c, 28u, depth + 1u); else { c.pc = 0x0014C4E0u; return; } if (c.pc != 0x00266F24u) [[unlikely]] return; }
L_00266F24:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0026709C; } }
L_00266F2C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00266F38u); set32(c.r[5], 0u + 23553u);  if (depth < kMaxDepth) unit_005D(c, 628u, depth + 1u); else { c.pc = 0x00277920u; return; } if (c.pc != 0x00266F38u) [[unlikely]] return; }
L_00266F38:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0026709C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00266F4Cu); set32(c.r[4], ld32((c.r[18].w[0] + 136u)));  if (depth < kMaxDepth) unit_0013(c, 28u, depth + 1u); else { c.pc = 0x0014C4E0u; return; } if (c.pc != 0x00266F4Cu) [[unlikely]] return; }
L_00266F4C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0026709C; } }
L_00266F54:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00266F60u); set32(c.r[5], 0u + 23556u);  if (depth < kMaxDepth) unit_005D(c, 628u, depth + 1u); else { c.pc = 0x00277920u; return; } if (c.pc != 0x00266F60u) [[unlikely]] return; }
L_00266F60:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0026709C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00266F74u); set32(c.r[4], ld32((c.r[18].w[0] + 136u)));  if (depth < kMaxDepth) unit_0013(c, 28u, depth + 1u); else { c.pc = 0x0014C4E0u; return; } if (c.pc != 0x00266F74u) [[unlikely]] return; }
L_00266F74:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0026709C; } }
L_00266F7C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 31234u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0026709C; } }
    set32(c.r[2], 0u + 1u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    st8((c.r[18].w[0] + 132u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00266FA0u); set32(c.r[5], 0u + 3331u);  if (depth < kMaxDepth) unit_005D(c, 628u, depth + 1u); else { c.pc = 0x00277920u; return; } if (c.pc != 0x00266FA0u) [[unlikely]] return; }
L_00266FA0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_00266FB8; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 136u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00266FB4u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0013(c, 28u, depth + 1u); else { c.pc = 0x0014C4E0u; return; } if (c.pc != 0x00266FB4u) [[unlikely]] return; }
L_00266FB4:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_00266FB8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00266FC0u); set32(c.r[5], 0u + 5124u);  if (depth < kMaxDepth) unit_005D(c, 628u, depth + 1u); else { c.pc = 0x00277920u; return; } if (c.pc != 0x00266FC0u) [[unlikely]] return; }
L_00266FC0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_00266FD8; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 136u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00266FD4u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0013(c, 28u, depth + 1u); else { c.pc = 0x0014C4E0u; return; } if (c.pc != 0x00266FD4u) [[unlikely]] return; }
L_00266FD4:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_00266FD8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00266FE0u); set32(c.r[5], 0u + 3586u);  if (depth < kMaxDepth) unit_005D(c, 628u, depth + 1u); else { c.pc = 0x00277920u; return; } if (c.pc != 0x00266FE0u) [[unlikely]] return; }
L_00266FE0:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0026709C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00266FF4u); set32(c.r[4], ld32((c.r[18].w[0] + 136u)));  if (depth < kMaxDepth) unit_0013(c, 28u, depth + 1u); else { c.pc = 0x0014C4E0u; return; } if (c.pc != 0x00266FF4u) [[unlikely]] return; }
L_00266FF4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0026709C; } }
L_00266FFC:
    set32(c.r[5], ld32((c.r[18].w[0] + 16u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[16], 0u + 1u);
    set32(c.r[4], 0u + 3u);
    set32(c.r[3], c.r[3].w[0] + 31232u);
    set32(c.r[5], ld32((c.r[5].w[0] + 624u)));
    if (c.r[5].d[0] != 0) c.r[16].d[0] = c.r[4].d[0];
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 11;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0026709C; } }
    set32(c.r[2], 0u + 1u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    st8((c.r[18].w[0] + 132u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026703Cu); set32(c.r[5], 0u + 3331u);  if (depth < kMaxDepth) unit_005D(c, 628u, depth + 1u); else { c.pc = 0x00277920u; return; } if (c.pc != 0x0026703Cu) [[unlikely]] return; }
L_0026703C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00267050; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 136u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00267050u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0013(c, 28u, depth + 1u); else { c.pc = 0x0014C4E0u; return; } if (c.pc != 0x00267050u) [[unlikely]] return; }
L_00267050:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[2].d[0]; set32(c.r[5], 0u + 5126u);  if (t) { goto L_00267060; } }
    set32(c.r[5], 0u + 5127u);
    c.budget -= 1;
L_00267060:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00267068u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_005D(c, 628u, depth + 1u); else { c.pc = 0x00277920u; return; } if (c.pc != 0x00267068u) [[unlikely]] return; }
L_00267068:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_00267080; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 136u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026707Cu); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0013(c, 28u, depth + 1u); else { c.pc = 0x0014C4E0u; return; } if (c.pc != 0x0026707Cu) [[unlikely]] return; }
L_0026707C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_00267080:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00267088u); set32(c.r[5], 0u + 3586u);  if (depth < kMaxDepth) unit_005D(c, 628u, depth + 1u); else { c.pc = 0x00277920u; return; } if (c.pc != 0x00267088u) [[unlikely]] return; }
L_00267088:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0026709C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026709Cu); set32(c.r[4], ld32((c.r[18].w[0] + 136u)));  if (depth < kMaxDepth) unit_0013(c, 28u, depth + 1u); else { c.pc = 0x0014C4E0u; return; } if (c.pc != 0x0026709Cu) [[unlikely]] return; }
L_0026709C:
    set32(c.r[3], 0u + 8u);
    c.budget -= 1;
L_002670A0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_00267390; } }
L_002670A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002670B0u);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x002670B0u) [[unlikely]] return; }
L_002670B0:
    c.r[2].d[0] = ld8((c.r[2].w[0] + 14u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00267188; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002670C4u); set32(c.r[4], ld32((c.r[18].w[0] + 16u)));  if (depth < kMaxDepth) unit_0070(c, 22u, depth + 1u); else { c.pc = 0x002C0520u; return; } if (c.pc != 0x002670C4u) [[unlikely]] return; }
L_002670C4:
    set32(c.r[3], ld32((c.r[18].w[0] + 136u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 12u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00267188; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 16u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 164u)));
    set32(c.r[3], c.r[3].w[0] - 732u);
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] != 0ull; c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_002670F0; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002670F0:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_00267188; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00267188; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 984u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_00267188; } }
    c.f[1] = ld32((c.r[4].w[0] + 1024u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00267188; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 20u)));
    set32(c.r[2], 0u + 180u);
    set32(c.r[3], ld32((c.r[3].w[0] + 332u)));
    mmi::divu(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.hi.d[0];
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_00267188; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00267154u); set32(c.r[5], 0u + 303u);  if (depth < kMaxDepth) unit_005D(c, 628u, depth + 1u); else { c.pc = 0x00277920u; return; } if (c.pc != 0x00267154u) [[unlikely]] return; }
L_00267154:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_0026716C; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 136u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00267168u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0013(c, 28u, depth + 1u); else { c.pc = 0x0014C4E0u; return; } if (c.pc != 0x00267168u) [[unlikely]] return; }
L_00267168:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_0026716C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00267174u); set32(c.r[5], 0u + 23560u);  if (depth < kMaxDepth) unit_005D(c, 628u, depth + 1u); else { c.pc = 0x00277920u; return; } if (c.pc != 0x00267174u) [[unlikely]] return; }
L_00267174:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00267188; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 136u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00267188u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0013(c, 28u, depth + 1u); else { c.pc = 0x0014C4E0u; return; } if (c.pc != 0x00267188u) [[unlikely]] return; }
L_00267188:
    set32(c.r[2], ld32((c.r[18].w[0] + 136u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00267234; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 20u)));
    set32(c.r[2], 0u + 900u);
    set32(c.r[3], ld32((c.r[3].w[0] + 332u)));
    mmi::divu(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.hi.d[0];
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(3601ll) ? 1ull : 0ull;  if (t) { goto L_00267234; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_00267234; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 16u)));
    c.r[2].d[0] = ld64((c.r[4].w[0] + 712u));
    c.r[2].d[0] = c.r[2].d[0] & 64ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], 0u + 3600u);  if (t) { goto L_00267234; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002671E4u);  if (depth < kMaxDepth) unit_0070(c, 96u, depth + 1u); else { c.pc = 0x002C1C90u; return; } if (c.pc != 0x002671E4u) [[unlikely]] return; }
L_002671E4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00267234; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00267234; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 16u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 912u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 912u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00267234; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00267210u);  if (depth < kMaxDepth) unit_0070(c, 117u, depth + 1u); else { c.pc = 0x002C2160u; return; } if (c.pc != 0x00267210u) [[unlikely]] return; }
L_00267210:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_00267234; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00267220u); set32(c.r[5], 0u + 23558u);  if (depth < kMaxDepth) unit_005D(c, 628u, depth + 1u); else { c.pc = 0x00277920u; return; } if (c.pc != 0x00267220u) [[unlikely]] return; }
L_00267220:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00267234; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 136u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00267234u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0013(c, 28u, depth + 1u); else { c.pc = 0x0014C4E0u; return; } if (c.pc != 0x00267234u) [[unlikely]] return; }
L_00267234:
    set32(c.r[4], ld32((c.r[18].w[0] + 16u)));
    c.r[2].d[0] = ld8((c.r[4].w[0] + 371u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 3u);  if (t) { goto L_0026724C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_00267284; } }
L_0026724C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00267254u);  if (depth < kMaxDepth) unit_0059(c, 51u, depth + 1u); else { c.pc = 0x00264AD0u; return; } if (c.pc != 0x00267254u) [[unlikely]] return; }
L_00267254:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00267268; } }
    set32(c.r[2], 0u + 8u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_00267284; } }
L_00267268:
    set32(c.r[2], ld32((c.r[18].w[0] + 16u)));
    c.r[2].d[0] = ld64((c.r[2].w[0] + 712u));
    c.r[2].d[0] = c.r[2].d[0] & 224ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 12u);  if (t) { goto L_00267284; } }
    st32((c.r[18].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 1;
L_00267284:
    set32(c.r[2], ld32((c.r[18].w[0] + 16u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00267290u); set32(c.r[4], ld32((c.r[2].w[0] + 624u)));  if (depth < kMaxDepth) unit_0070(c, 110u, depth + 1u); else { c.pc = 0x002C1FF0u; return; } if (c.pc != 0x00267290u) [[unlikely]] return; }
L_00267290:
    set32(c.r[4], ld32((c.r[18].w[0] + 16u)));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002672A0u); set32(c.r[5], 0u + 600u);  if (depth < kMaxDepth) unit_0070(c, 38u, depth + 1u); else { c.pc = 0x002C0B90u; return; } if (c.pc != 0x002672A0u) [[unlikely]] return; }
L_002672A0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00267390; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00267390; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 16u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 912u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 912u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_00267390; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002672CCu);  if (depth < kMaxDepth) unit_005A(c, 33u, depth + 1u); else { c.pc = 0x002686F0u; return; } if (c.pc != 0x002672CCu) [[unlikely]] return; }
L_002672CC:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002672D8u); set32(c.r[5], 0u + 269u);  if (depth < kMaxDepth) unit_005D(c, 628u, depth + 1u); else { c.pc = 0x00277920u; return; } if (c.pc != 0x002672D8u) [[unlikely]] return; }
L_002672D8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_002672F0; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 136u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002672ECu); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0013(c, 28u, depth + 1u); else { c.pc = 0x0014C4E0u; return; } if (c.pc != 0x002672ECu) [[unlikely]] return; }
L_002672EC:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_002672F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002672F8u); set32(c.r[5], 0u + 3587u);  if (depth < kMaxDepth) unit_005D(c, 628u, depth + 1u); else { c.pc = 0x00277920u; return; } if (c.pc != 0x002672F8u) [[unlikely]] return; }
L_002672F8:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull; set32(c.r[3], 0u + 7u);  if (t) { goto L_00267310; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026730Cu); set32(c.r[4], ld32((c.r[18].w[0] + 136u)));  if (depth < kMaxDepth) unit_0013(c, 28u, depth + 1u); else { c.pc = 0x0014C4E0u; return; } if (c.pc != 0x0026730Cu) [[unlikely]] return; }
L_0026730C:
    set32(c.r[3], 0u + 7u);
    c.budget -= 1;
L_00267310:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_00267390; } }
L_00267318:
    set32(c.r[3], ld32((c.r[18].w[0] + 16u)));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 371u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u + 3u);  if (t) { goto L_0026732C; } }
    st32((c.r[18].w[0] + 8u), c.r[3].w[0]);
    c.budget -= 1;
L_0026732C:
    set32(c.r[4], ld32((c.r[18].w[0] + 16u)));
    c.r[3].d[0] = ld64((c.r[4].w[0] + 712u));
    c.r[3].d[0] = c.r[3].d[0] & 224ull;
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], 0u + 10u);  if (t) { goto L_0026734C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_00267390; } }
L_0026734C:
    c.r[3].d[0] = ld8((c.r[4].w[0] + 370u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], 0u + 12u);  if (t) { goto L_00267390; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_00267390; } }
L_00267360:
    set32(c.r[3], ld32((c.r[18].w[0] + 16u)));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 371u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u + 3u);  if (t) { goto L_00267374; } }
    st32((c.r[18].w[0] + 8u), c.r[3].w[0]);
    c.budget -= 1;
L_00267374:
    set32(c.r[3], ld32((c.r[18].w[0] + 16u)));
    c.r[3].d[0] = ld64((c.r[3].w[0] + 712u));
    c.r[3].d[0] = c.r[3].d[0] & 224ull;
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], 0u + 10u);  if (t) { goto L_00267390; } }
    st32((c.r[18].w[0] + 8u), c.r[3].w[0]);
    c.budget -= 1;
L_00267390:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002673B0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[3], 0u + 37u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 8u)));
    c.budget -= 9;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 36u);  if (t) { goto L_002675C0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00267564; } }
    set32(c.r[3], 0u + 35u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 34u);  if (t) { goto L_00267614; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0026750C; } }
    set32(c.r[3], 0u + 33u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 32u);  if (t) { goto L_002674F4; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00267448; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00267418; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_00267618; } }
L_00267418:
    set32(c.r[3], ld32((c.r[16].w[0] + 16u)));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 370u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], 0u + 32u);  if (t) { goto L_00267440; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 8896u)));
    c.r[3].d[0] = c.r[3].sd[0] < 30ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00267614; } }
    set32(c.r[3], 0u + 32u);
    c.budget -= 1;
L_00267440:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_00267614; } }
L_00267448:
    set32(c.r[2], ld32((c.r[16].w[0] + 16u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 370u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_00267474; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 8896u)));
    c.r[1].d[0] = c.r[2].sd[0] < 30ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[2], 0u + 2u);  if (t) { goto L_00267470; } }
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 1;
L_00267470:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00267474:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026747Cu);  if (depth < kMaxDepth) unit_0070(c, 208u, depth + 1u); else { c.pc = 0x002C3850u; return; } if (c.pc != 0x0026747Cu) [[unlikely]] return; }
L_0026747C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], 0u + 34u);  if (t) { goto L_0026748C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_00267614; } }
L_0026748C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00267494u); set32(c.r[4], ld32((c.r[16].w[0] + 16u)));  if (depth < kMaxDepth) unit_0070(c, 196u, depth + 1u); else { c.pc = 0x002C35E0u; return; } if (c.pc != 0x00267494u) [[unlikely]] return; }
L_00267494:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], 0u + 33u);  if (t) { goto L_002674A4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_00267614; } }
L_002674A4:
    set32(c.r[4], ld32((c.r[16].w[0] + 16u)));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 370u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002674CC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002674BCu);  if (depth < kMaxDepth) unit_0070(c, 142u, depth + 1u); else { c.pc = 0x002C27E0u; return; } if (c.pc != 0x002674BCu) [[unlikely]] return; }
L_002674BC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], 0u + 34u);  if (t) { goto L_002674CC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_00267614; } }
L_002674CC:
    set32(c.r[4], ld32((c.r[16].w[0] + 16u)));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 370u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00267614; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002674E4u);  if (depth < kMaxDepth) unit_0071(c, 28u, depth + 1u); else { c.pc = 0x002C44E0u; return; } if (c.pc != 0x002674E4u) [[unlikely]] return; }
L_002674E4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], 0u + 32u);  if (t) { goto L_00267614; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_00267614; } }
L_002674F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002674FCu); set32(c.r[4], ld32((c.r[16].w[0] + 16u)));  if (depth < kMaxDepth) unit_0070(c, 196u, depth + 1u); else { c.pc = 0x002C35E0u; return; } if (c.pc != 0x002674FCu) [[unlikely]] return; }
L_002674FC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], 0u + 32u);  if (t) { goto L_00267614; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_00267614; } }
L_0026750C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00267514u);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x00267514u) [[unlikely]] return; }
L_00267514:
    c.r[3].d[0] = ld8((c.r[2].w[0] + 26u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_00267538; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00267528u);  if (depth < kMaxDepth) unit_0070(c, 208u, depth + 1u); else { c.pc = 0x002C3850u; return; } if (c.pc != 0x00267528u) [[unlikely]] return; }
L_00267528:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], 0u + 32u);  if (t) { goto L_00267614; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_00267614; } }
L_00267538:
    set32(c.r[4], ld32((c.r[16].w[0] + 16u)));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 370u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u + 32u);  if (t) { goto L_0026755C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00267550u);  if (depth < kMaxDepth) unit_0070(c, 142u, depth + 1u); else { c.pc = 0x002C27E0u; return; } if (c.pc != 0x00267550u) [[unlikely]] return; }
L_00267550:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00267614; } }
    set32(c.r[3], 0u + 32u);
    c.budget -= 1;
L_0026755C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_00267614; } }
L_00267564:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026756Cu); set32(c.r[4], ld32((c.r[16].w[0] + 16u)));  if (depth < kMaxDepth) unit_0070(c, 153u, depth + 1u); else { c.pc = 0x002C29F0u; return; } if (c.pc != 0x0026756Cu) [[unlikely]] return; }
L_0026756C:
    set32(c.r[4], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00267578u); c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0071(c, 28u, depth + 1u); else { c.pc = 0x002C44E0u; return; } if (c.pc != 0x00267578u) [[unlikely]] return; }
L_00267578:
    set32(c.r[3], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 984u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[17].d[0]; set32(c.r[3], 0u + 32u);  if (t) { goto L_00267590; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull;  if (t) { goto L_00267594; } }
L_00267590:
    st32((c.r[16].w[0] + 8u), c.r[3].w[0]);
    c.budget -= 1;
L_00267594:
    set32(c.r[4], ld32((c.r[16].w[0] + 16u)));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 370u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u + 32u);  if (t) { goto L_002675B8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002675ACu);  if (depth < kMaxDepth) unit_0070(c, 153u, depth + 1u); else { c.pc = 0x002C29F0u; return; } if (c.pc != 0x002675ACu) [[unlikely]] return; }
L_002675AC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00267614; } }
    set32(c.r[3], 0u + 32u);
    c.budget -= 1;
L_002675B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_00267614; } }
L_002675C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002675C8u); set32(c.r[4], ld32((c.r[16].w[0] + 16u)));  if (depth < kMaxDepth) unit_0070(c, 153u, depth + 1u); else { c.pc = 0x002C29F0u; return; } if (c.pc != 0x002675C8u) [[unlikely]] return; }
L_002675C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002675D0u); set32(c.r[4], ld32((c.r[16].w[0] + 16u)));  if (depth < kMaxDepth) unit_0071(c, 28u, depth + 1u); else { c.pc = 0x002C44E0u; return; } if (c.pc != 0x002675D0u) [[unlikely]] return; }
L_002675D0:
    set32(c.r[3], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 984u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[3], 0u + 32u);  if (t) { goto L_002675E8; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002675EC; } }
L_002675E8:
    st32((c.r[16].w[0] + 8u), c.r[3].w[0]);
    c.budget -= 1;
L_002675EC:
    set32(c.r[4], ld32((c.r[16].w[0] + 16u)));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 370u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u + 32u);  if (t) { goto L_00267610; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00267604u);  if (depth < kMaxDepth) unit_0071(c, 28u, depth + 1u); else { c.pc = 0x002C44E0u; return; } if (c.pc != 0x00267604u) [[unlikely]] return; }
L_00267604:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00267614; } }
    set32(c.r[3], 0u + 32u);
    c.budget -= 1;
L_00267610:
    st32((c.r[16].w[0] + 8u), c.r[3].w[0]);
    c.budget -= 1;
L_00267614:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_00267618:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00267630:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[17], ld32((c.r[4].w[0] + 16u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00267654u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 112u, depth + 1u); else { c.pc = 0x001B9B80u; return; } if (c.pc != 0x00267654u) [[unlikely]] return; }
L_00267654:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00267668; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 468u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[2].d[0] | 8ull;  if (t) { goto L_0026766C; } }
L_00267668:
    set32(c.r[3], ld32((c.r[17].w[0] + 468u)));
    c.budget -= 1;
L_0026766C:
    c.r[2].d[0] = c.r[3].d[0] & 8ull;
    set32(c.r[2], c.r[2].w[0] >> 3);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[16].w[0] + 24u);  if (t) { goto L_002676B8; } }
    set32(c.r[2], c.r[3].w[0] << 1);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    c.r[18].d[0] = ld16((c.r[16].w[0] + 88u));
    set32(c.r[2], ld32((c.r[1].w[0] - 1536u)));
    set32(c.r[17], c.r[3].w[0] << 6);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026769Cu); set32(c.r[4], c.r[2].w[0] + c.r[17].w[0]);  if (depth < kMaxDepth) unit_000F(c, 320u, depth + 1u); else { c.pc = 0x0013F1E0u; return; } if (c.pc != 0x0026769Cu) [[unlikely]] return; }
L_0026769C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[1].w[0] - 1536u)));
    set32(c.r[6], c.r[16].w[0] + 90u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002676B4u); set32(c.r[4], c.r[2].w[0] + c.r[17].w[0]);  if (depth < kMaxDepth) unit_000F(c, 306u, depth + 1u); else { c.pc = 0x0013EC60u; return; } if (c.pc != 0x002676B4u) [[unlikely]] return; }
L_002676B4:
    set32(c.r[4], c.r[16].w[0] + 24u);
    c.budget -= 1;
L_002676B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002676C0u);  if (depth < kMaxDepth) unit_005C(c, 48u, depth + 1u); else { c.pc = 0x002710A0u; return; } if (c.pc != 0x002676C0u) [[unlikely]] return; }
L_002676C0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002676E0:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 16u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[4].w[0] + 20u)));
    set32(c.r[4], ld32((c.r[4].w[0] + 140u)));
    set32(c.r[17], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 16;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[18], ld32((c.r[3].w[0] + 984u)));  if (t) { goto L_00267780; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[21], ld32((c.r[4].w[0])));  if (t) { goto L_00267778; } }
L_00267728:
    set32(c.r[19], ld32((c.r[21].w[0] + 8u)));
    c.r[20].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[21], ld32((c.r[21].w[0])));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026773Cu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 121u, depth + 1u); else { c.pc = 0x00271DC0u; return; } if (c.pc != 0x0026773Cu) [[unlikely]] return; }
L_0026773C:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00267778; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 140u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00267754u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0013(c, 32u, depth + 1u); else { c.pc = 0x0014C590u; return; } if (c.pc != 0x00267754u) [[unlikely]] return; }
L_00267754:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_00267778; } }
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_00267778; } }
    set32(c.r[25], ld32((c.r[19].w[0] + 56u)));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00267778u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00267778u) [[unlikely]] return; }
L_00267778:
    c.budget -= 2;
    { const bool t = c.r[21].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00267728u | kUnwind; return; } goto L_00267728; } }
L_00267780:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 135u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002677B0; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002677B0; } }
    set32(c.r[2], ld32((c.r[2].w[0] + 340u)));
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(301ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_002677B0; } }
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 135u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_002677B0:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 133u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_002677CC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002677C4u);  if (depth < kMaxDepth) unit_005A(c, 33u, depth + 1u); else { c.pc = 0x002686F0u; return; } if (c.pc != 0x002677C4u) [[unlikely]] return; }
L_002677C4:
    st8((c.r[16].w[0] + 132u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 133u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_002677CC:
    set32(c.r[2], ld32((c.r[16].w[0] + 136u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002677E8; } }
    set32(c.r[2], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002677E8; } }
    st8((c.r[16].w[0] + 132u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_002677E8:
    set32(c.r[3], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[2], 0u + 64u);
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[4].d[0] = ld64((c.r[3].w[0] + 704u));
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0026782C; } }
    set32(c.r[3], ld32((c.r[3].w[0] + 164u)));
    set32(c.r[2], 0u + 235u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[2].d[0] = 0ull | 32768ull;  if (t) { goto L_0026782C; } }
    c.r[2].d[0] = c.r[2].d[0] << 16;
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0026783C; } }
L_0026782C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00267834u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005A(c, 33u, depth + 1u); else { c.pc = 0x002686F0u; return; } if (c.pc != 0x00267834u) [[unlikely]] return; }
L_00267834:
    st8((c.r[16].w[0] + 132u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 133u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_0026783C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00267844u); set32(c.r[4], ld32((c.r[16].w[0] + 16u)));  if (depth < kMaxDepth) unit_0059(c, 39u, depth + 1u); else { c.pc = 0x00264820u; return; } if (c.pc != 0x00267844u) [[unlikely]] return; }
L_00267844:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00267870; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00267854u);  if (depth < kMaxDepth) unit_005A(c, 33u, depth + 1u); else { c.pc = 0x002686F0u; return; } if (c.pc != 0x00267854u) [[unlikely]] return; }
L_00267854:
    st8((c.r[16].w[0] + 132u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], 0u + 1545u);
    st8((c.r[16].w[0] + 133u), static_cast<std::uint8_t>(0u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st16((c.r[29].w[0] + 124u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00267870u); set32(c.r[5], c.r[29].w[0] + 124u);  if (depth < kMaxDepth) unit_005D(c, 630u, depth + 1u); else { c.pc = 0x00277940u; return; } if (c.pc != 0x00267870u) [[unlikely]] return; }
L_00267870:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 132u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002678DC; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[2], 0u + 256u);
    c.r[2].d[0] = c.r[2].d[0] << 32;
    set32(c.r[4], ld32((c.r[5].w[0] + 984u)));
    c.r[3].d[0] = ld64((c.r[4].w[0] + 704u));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002678BC; } }
    c.r[3].d[0] = ld64((c.r[5].w[0] + 704u));
    set32(c.r[2], 0u + 64u);
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002678DC; } }
L_002678BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002678C4u);  if (depth < kMaxDepth) unit_006F(c, 263u, depth + 1u); else { c.pc = 0x002BF630u; return; } if (c.pc != 0x002678C4u) [[unlikely]] return; }
L_002678C4:
    set32(c.r[3], ld32((c.r[2].w[0] + 912u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 912u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002678DC; } }
    st8((c.r[16].w[0] + 132u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_002678DC:
    set32(c.r[3], ld32((c.r[16].w[0] + 136u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 12u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002678FC; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    c.r[2].d[0] = ld16((c.r[2].w[0] + 48u));
    st16((c.r[16].w[0] + 144u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 4;
L_002678FC:
    set32(c.r[2], ld32((c.r[16].w[0] + 136u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] > 0;  if (t) { goto L_002679DC; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 164u)));
    c.r[2].d[0] = c.r[2].d[0] ^ 50ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00267930; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 168u)));
    c.r[2].d[0] = c.r[2].d[0] ^ 2ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 3;
L_00267930:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002679DC; } }
    c.r[2].d[0] = ld64((c.r[3].w[0] + 704u));
    c.r[2].d[0] = c.r[2].d[0] & 4ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002679DC; } }
    set32(c.r[3], ld32((c.r[3].w[0] + 984u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00060000u);
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[3].d[0] = ld64((c.r[3].w[0] + 704u));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002679DC; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 336u)));
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(181ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[2], 0u + 5891u);  if (t) { goto L_002679B8; } }
    c.r[3].d[0] = ld8((c.r[17].w[0] + 383u));
    set32(c.r[2], 0u + 255u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], c.r[3].w[0] - 245u);  if (t) { goto L_002679B4; } }
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_002679B4; } }
    c.r[2].d[0] = ld8((c.r[17].w[0] + 375u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002679B4; } }
    c.r[2].d[0] = ld8((c.r[17].w[0] + 376u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002679DC; } }
L_002679B4:
    set32(c.r[2], 0u + 5891u);
    c.budget -= 1;
L_002679B8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st16((c.r[29].w[0] + 124u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002679C8u); set32(c.r[5], c.r[29].w[0] + 124u);  if (depth < kMaxDepth) unit_005D(c, 630u, depth + 1u); else { c.pc = 0x00277940u; return; } if (c.pc != 0x002679C8u) [[unlikely]] return; }
L_002679C8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002679DC; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 136u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002679DCu); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0013(c, 28u, depth + 1u); else { c.pc = 0x0014C4E0u; return; } if (c.pc != 0x002679DCu) [[unlikely]] return; }
L_002679DC:
    set32(c.r[4], ld32((c.r[16].w[0] + 16u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00800000u);
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[3].d[0] = ld64((c.r[4].w[0] + 704u));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00267A44; } }
    set32(c.r[6], ld32((c.r[16].w[0] + 20u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00267A08u); set32(c.r[5], 0u + 522u);  if (depth < kMaxDepth) unit_0058(c, 160u, depth + 1u); else { c.pc = 0x00261C80u; return; } if (c.pc != 0x00267A08u) [[unlikely]] return; }
L_00267A08:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00267A44; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 136u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 7425u);  if (t) { goto L_00267A44; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st16((c.r[29].w[0] + 124u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00267A30u); set32(c.r[5], c.r[29].w[0] + 124u);  if (depth < kMaxDepth) unit_005D(c, 630u, depth + 1u); else { c.pc = 0x00277940u; return; } if (c.pc != 0x00267A30u) [[unlikely]] return; }
L_00267A30:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00267A44; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 136u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00267A44u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0013(c, 28u, depth + 1u); else { c.pc = 0x0014C4E0u; return; } if (c.pc != 0x00267A44u) [[unlikely]] return; }
L_00267A44:
    set32(c.r[2], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 988u)));
    c.budget -= 4;
    { const bool t = c.r[3].sd[0] < 0; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_00267A7C; } }
    c.r[2].d[0] = ld64((c.r[2].w[0] + 712u));
    c.r[2].d[0] = c.r[2].d[0] & 128ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00267A7C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 28320u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[19], ld32((c.r[2].w[0])));
    c.budget -= 5;
L_00267A7C:
    set32(c.r[2], ld32((c.r[16].w[0] + 20u)));
    c.r[3].d[0] = ld8((c.r[2].w[0] + 428u));
    c.r[2].d[0] = c.r[3].d[0] << 56;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = c.r[3].d[0] << 57;  if (t) { goto L_00267AA0; } }
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00267B5C; } }
L_00267AA0:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_00267B5C; } }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == c.r[19].d[0]; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00267B5C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00267AB8u);  if (depth < kMaxDepth) unit_005A(c, 33u, depth + 1u); else { c.pc = 0x002686F0u; return; } if (c.pc != 0x00267AB8u) [[unlikely]] return; }
L_00267AB8:
    st8((c.r[16].w[0] + 132u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[3], ld32((c.r[19].w[0] + 624u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 624u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_00267B08; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_00267B08; } }
    set32(c.r[3], ld32((c.r[19].w[0] + 464u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[3].d[0] = c.r[2].d[0] & 255ull;  if (t) { goto L_00267B08; } }
    c.r[2].d[0] = ld8((c.r[19].w[0] + 371u));
    set32(c.r[2], c.r[2].w[0] - 4u);
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_00267B00; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00267B00:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], 0u + 269u);  if (t) { goto L_00267B38; } }
L_00267B08:
    set32(c.r[2], 0u + 4618u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st16((c.r[29].w[0] + 124u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00267B1Cu); set32(c.r[5], c.r[29].w[0] + 124u);  if (depth < kMaxDepth) unit_005D(c, 630u, depth + 1u); else { c.pc = 0x00277940u; return; } if (c.pc != 0x00267B1Cu) [[unlikely]] return; }
L_00267B1C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00267B5C; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 136u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00267B30u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0013(c, 28u, depth + 1u); else { c.pc = 0x0014C4E0u; return; } if (c.pc != 0x00267B30u) [[unlikely]] return; }
L_00267B30:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[16].w[0] + 136u)));  if (t) { goto L_00267B60; } }
L_00267B38:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st16((c.r[29].w[0] + 124u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00267B48u); set32(c.r[5], c.r[29].w[0] + 124u);  if (depth < kMaxDepth) unit_005D(c, 630u, depth + 1u); else { c.pc = 0x00277940u; return; } if (c.pc != 0x00267B48u) [[unlikely]] return; }
L_00267B48:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00267B5C; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 136u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00267B5Cu); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0013(c, 28u, depth + 1u); else { c.pc = 0x0014C4E0u; return; } if (c.pc != 0x00267B5Cu) [[unlikely]] return; }
L_00267B5C:
    set32(c.r[2], ld32((c.r[16].w[0] + 136u)));
    c.budget -= 1;
L_00267B60:
    set32(c.r[2], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00267BAC; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 624u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 984u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 624u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 269u);  if (t) { goto L_00267BA8; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st16((c.r[29].w[0] + 124u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00267B94u); set32(c.r[5], c.r[29].w[0] + 124u);  if (depth < kMaxDepth) unit_005D(c, 630u, depth + 1u); else { c.pc = 0x00277940u; return; } if (c.pc != 0x00267B94u) [[unlikely]] return; }
L_00267B94:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00267BA8; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 136u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00267BA8u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0013(c, 28u, depth + 1u); else { c.pc = 0x0014C4E0u; return; } if (c.pc != 0x00267BA8u) [[unlikely]] return; }
L_00267BA8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00267BAC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00267BB4u);  if (depth < kMaxDepth) unit_006F(c, 262u, depth + 1u); else { c.pc = 0x002BF580u; return; } if (c.pc != 0x00267BB4u) [[unlikely]] return; }
L_00267BB4:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 132u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[19].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00267BD8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00267BC8u); set32(c.r[4], ld32((c.r[16].w[0] + 16u)));  if (depth < kMaxDepth) unit_0059(c, 79u, depth + 1u); else { c.pc = 0x00265430u; return; } if (c.pc != 0x00267BC8u) [[unlikely]] return; }
L_00267BC8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00267BD8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00267BD8u);  if (depth < kMaxDepth) unit_005A(c, 33u, depth + 1u); else { c.pc = 0x002686F0u; return; } if (c.pc != 0x00267BD8u) [[unlikely]] return; }
L_00267BD8:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 132u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00267C20; } }
    c.r[4].d[0] = ld64((c.r[17].w[0] + 704u));
    set32(c.r[3], 0u + 64u);
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00267C18; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 984u)));
    set32(c.r[3], 0u + 63u);
    set32(c.r[4], ld32((c.r[4].w[0] + 164u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00267C20; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_00267C18:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00267C20u);  if (depth < kMaxDepth) unit_005A(c, 33u, depth + 1u); else { c.pc = 0x002686F0u; return; } if (c.pc != 0x00267C20u) [[unlikely]] return; }
L_00267C20:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 132u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00267C78; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 376u)));
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(301ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_00267C78; } }
    c.budget -= 2;
    { const bool t = c.r[19].d[0] != c.r[18].d[0]; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00267C78; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00267C50u);  if (depth < kMaxDepth) unit_005A(c, 33u, depth + 1u); else { c.pc = 0x002686F0u; return; } if (c.pc != 0x00267C50u) [[unlikely]] return; }
L_00267C50:
    set32(c.r[2], 0u + 266u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st16((c.r[29].w[0] + 124u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00267C64u); set32(c.r[5], c.r[29].w[0] + 124u);  if (depth < kMaxDepth) unit_005D(c, 630u, depth + 1u); else { c.pc = 0x00277940u; return; } if (c.pc != 0x00267C64u) [[unlikely]] return; }
L_00267C64:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_00267C78; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00267C78u); set32(c.r[4], ld32((c.r[16].w[0] + 136u)));  if (depth < kMaxDepth) unit_0013(c, 28u, depth + 1u); else { c.pc = 0x0014C4E0u; return; } if (c.pc != 0x00267C78u) [[unlikely]] return; }
L_00267C78:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 132u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00267D20; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 376u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00267D20; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00267C9Cu); set32(c.r[4], ld32((c.r[16].w[0] + 16u)));  if (depth < kMaxDepth) unit_006F(c, 292u, depth + 1u); else { c.pc = 0x002BFF20u; return; } if (c.pc != 0x00267C9Cu) [[unlikely]] return; }
L_00267C9C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00267D20; } }
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_00267D20; } }
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == c.r[18].d[0];  if (t) { goto L_00267D20; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 16u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.r[4].d[0] = ld64((c.r[4].w[0] + 704u));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00267D20; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00267CDCu);  if (depth < kMaxDepth) unit_005A(c, 33u, depth + 1u); else { c.pc = 0x002686F0u; return; } if (c.pc != 0x00267CDCu) [[unlikely]] return; }
L_00267CDC:
    set32(c.r[3], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[19].w[0] + 624u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 624u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 272u);  if (t) { goto L_00267CFC; } }
    set32(c.r[2], 0u + 264u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[29].w[0] + 124u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00267D00; } }
L_00267CFC:
    st16((c.r[29].w[0] + 124u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 1;
L_00267D00:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00267D0Cu); set32(c.r[5], c.r[29].w[0] + 124u);  if (depth < kMaxDepth) unit_005D(c, 630u, depth + 1u); else { c.pc = 0x00277940u; return; } if (c.pc != 0x00267D0Cu) [[unlikely]] return; }
L_00267D0C:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_00267D20; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00267D20u); set32(c.r[4], ld32((c.r[16].w[0] + 136u)));  if (depth < kMaxDepth) unit_0013(c, 28u, depth + 1u); else { c.pc = 0x0014C4E0u; return; } if (c.pc != 0x00267D20u) [[unlikely]] return; }
L_00267D20:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_00267D50:
    set32(c.r[29], c.r[29].w[0] - 480u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    c.r[23].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[22], ld32((c.r[6].w[0])));
    st32((c.r[29].w[0] + 192u), 0u);
    c.budget -= 21;
    { const bool t = 0ull == 0ull; st16((c.r[29].w[0] + 476u), static_cast<std::uint16_t>(0u));  if (t) { [[clang::musttail]] return unit_005A(c, 3u, depth); } }
L_00267DA4:
    set32(c.r[16], ld32((c.r[22].w[0] + 8u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 8896u)));
    c.r[2].d[0] = c.r[2].sd[0] < 30ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[22], ld32((c.r[22].w[0])));  if (t) { goto L_00267E04; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[4], c.r[16].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00267DCCu); set32(c.r[5], c.r[5].w[0] + 32168u);  if (depth < kMaxDepth) unit_000A(c, 19u, depth + 1u); else { c.pc = 0x00128400u; return; } if (c.pc != 0x00267DCCu) [[unlikely]] return; }
L_00267DCC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00267E04; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00267DDCu);  if (depth < kMaxDepth) unit_003D(c, 81u, depth + 1u); else { c.pc = 0x001F53D0u; return; } if (c.pc != 0x00267DDCu) [[unlikely]] return; }
L_00267DDC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 208u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00267DF0u); set32(c.r[5], c.r[5].w[0] + 32176u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x00127458u; return; } if (c.pc != 0x00267DF0u) [[unlikely]] return; }
L_00267DF0:
    set32(c.r[4], c.r[16].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00267DFCu); set32(c.r[5], c.r[29].w[0] + 208u);  if (depth < kMaxDepth) unit_000A(c, 19u, depth + 1u); else { c.pc = 0x00128400u; return; } if (c.pc != 0x00267DFCu) [[unlikely]] return; }
L_00267DFC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[3].d[0] = 0ull < c.r[22].d[0] ? 1ull : 0ull;  if (t) { [[clang::musttail]] return unit_005A(c, 4u, depth); } }
L_00267E04:
    set32(c.r[3], ld32((c.r[20].w[0] + 16u)));
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], ld32((c.r[3].w[0] + 464u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[5].sd[0] = static_cast<std::int32_t>(0x00460000u);  if (t) { goto L_00267E88; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00267E20u);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x00267E20u) [[unlikely]] return; }
L_00267E20:
    c.r[3].d[0] = ld8((c.r[2].w[0]));
    c.r[2].d[0] = c.r[3].sd[0] < 44ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].d[0] = c.r[3].sd[0] < 47ll ? 1ull : 0ull;  if (t) { goto L_00267E40; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00267E44; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_00267E44; } }
L_00267E40:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00267E44:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].sd[0] = static_cast<std::int32_t>(0x00460000u);  if (t) { goto L_00267E6C; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[4], c.r[16].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00267E5Cu); set32(c.r[5], c.r[5].w[0] + 32184u);  if (depth < kMaxDepth) unit_000A(c, 19u, depth + 1u); else { c.pc = 0x00128400u; return; } if (c.pc != 0x00267E5Cu) [[unlikely]] return; }
L_00267E5C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00267F24; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_005A(c, 3u, depth); } }
L_00267E6C:
    set32(c.r[4], c.r[16].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00267E78u); set32(c.r[5], c.r[5].w[0] + 32192u);  if (depth < kMaxDepth) unit_000A(c, 19u, depth + 1u); else { c.pc = 0x00128400u; return; } if (c.pc != 0x00267E78u) [[unlikely]] return; }
L_00267E78:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_005A(c, 3u, depth); } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[20].w[0] + 20u)));  if (t) { goto L_00267F28; } }
L_00267E88:
    set32(c.r[4], c.r[16].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00267E94u); set32(c.r[5], c.r[5].w[0] + 32184u);  if (depth < kMaxDepth) unit_000A(c, 19u, depth + 1u); else { c.pc = 0x00128400u; return; } if (c.pc != 0x00267E94u) [[unlikely]] return; }
L_00267E94:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[5].sd[0] = static_cast<std::int32_t>(0x00460000u);  if (t) { [[clang::musttail]] return unit_005A(c, 3u, depth); } }
    set32(c.r[4], c.r[16].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00267EA8u); set32(c.r[5], c.r[5].w[0] + 32192u);  if (depth < kMaxDepth) unit_000A(c, 19u, depth + 1u); else { c.pc = 0x00128400u; return; } if (c.pc != 0x00267EA8u) [[unlikely]] return; }
L_00267EA8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[5].sd[0] = static_cast<std::int32_t>(0x00460000u);  if (t) { [[clang::musttail]] return unit_005A(c, 3u, depth); } }
    set32(c.r[4], c.r[16].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00267EBCu); set32(c.r[5], c.r[5].w[0] + 32200u);  if (depth < kMaxDepth) unit_000A(c, 19u, depth + 1u); else { c.pc = 0x00128400u; return; } if (c.pc != 0x00267EBCu) [[unlikely]] return; }
L_00267EBC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].sd[0] = static_cast<std::int32_t>(0x00460000u);  if (t) { goto L_00267ED4; } }
    set32(c.r[3], ld32((c.r[20].w[0] + 16u)));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 371u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_005A(c, 3u, depth); } }
L_00267ED4:
    set32(c.r[4], c.r[16].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00267EE0u); set32(c.r[5], c.r[5].w[0] + 32208u);  if (depth < kMaxDepth) unit_000A(c, 19u, depth + 1u); else { c.pc = 0x00128400u; return; } if (c.pc != 0x00267EE0u) [[unlikely]] return; }
L_00267EE0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].sd[0] = static_cast<std::int32_t>(0x00460000u);  if (t) { goto L_00267EFC; } }
    set32(c.r[4], ld32((c.r[20].w[0] + 16u)));
    set32(c.r[3], 0u + 1u);
    c.r[4].d[0] = ld8((c.r[4].w[0] + 371u));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { [[clang::musttail]] return unit_005A(c, 3u, depth); } }
L_00267EFC:
    set32(c.r[4], c.r[16].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00267F08u); set32(c.r[5], c.r[5].w[0] + 32216u);  if (depth < kMaxDepth) unit_000A(c, 19u, depth + 1u); else { c.pc = 0x00128400u; return; } if (c.pc != 0x00267F08u) [[unlikely]] return; }
L_00267F08:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00267F24; } }
    set32(c.r[4], ld32((c.r[20].w[0] + 16u)));
    set32(c.r[3], 0u + 6u);
    set32(c.r[4], ld32((c.r[4].w[0] + 464u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { [[clang::musttail]] return unit_005A(c, 3u, depth); } }
L_00267F24:
    set32(c.r[3], ld32((c.r[20].w[0] + 20u)));
    c.budget -= 1;
L_00267F28:
    set32(c.r[3], c.r[3].w[0] + 416u);
    st32((c.r[29].w[0] + 472u), 0u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 176u), c.r[3].w[0]);  if (t) { [[clang::musttail]] return unit_005A(c, 2u, depth); } }
L_00267F38:
    set32(c.r[5], ld32((c.r[20].w[0] + 16u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[29].w[0] + 176u)));
    set32(c.r[7], ld32((c.r[20].w[0] + 20u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00267F50u); set32(c.r[8], c.r[29].w[0] + 472u);  if (depth < kMaxDepth) unit_005A(c, 250u, depth + 1u); else { c.pc = 0x0026A570u; return; } if (c.pc != 0x00267F50u) [[unlikely]] return; }
L_00267F50:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_005A(c, 3u, depth); } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00267F64u); set32(c.r[4], ld32((c.r[20].w[0] + 16u)));  if (depth < kMaxDepth) unit_002E(c, 112u, depth + 1u); else { c.pc = 0x001B9B80u; return; } if (c.pc != 0x00267F64u) [[unlikely]] return; }
L_00267F64:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], c.r[29].w[0] + 476u);  if (t) { goto L_00267F78; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0])));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[21].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { [[clang::musttail]] return unit_005A(c, 9u, depth); } }
L_00267F78:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != 0ull; set32(c.r[3], c.r[29].w[0] + 476u);  if (t) { goto L_00267F8C; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0])));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[21].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { [[clang::musttail]] return unit_005A(c, 9u, depth); } }
L_00267F8C:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 12u)));
    set32(c.r[17], c.r[18].w[0] + 32u);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 14u)));
    c.r[30].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[3].w[0] << 2);
    st32((c.r[29].w[0] + 160u), c.r[3].w[0]);
    set32(c.r[3], c.r[5].w[0] << 3);
    set32(c.r[4], c.r[17].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 160u)));
    mmi::mult(c, 0, c.r[3].w[0], c.r[5].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    c.budget -= 13;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 192u), c.r[3].w[0]);  if (t) { [[clang::musttail]] return unit_005A(c, 1u, depth); } }
L_00267FC0:
    set32(c.r[4], ld32((c.r[20].w[0] + 16u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[20].w[0] + 20u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00267FD4u); c.r[23].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0058(c, 233u, depth + 1u); else { c.pc = 0x00262910u; return; } if (c.pc != 0x00267FD4u) [[unlikely]] return; }
L_00267FD4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00267FE8; } }
    set32(c.r[17], c.r[17].w[0] + 8u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { [[clang::musttail]] return unit_005A(c, 2u, depth); } }
L_00267FE8:
    set32(c.r[3], ld32((c.r[29].w[0] + 160u)));
    c.r[23].d[0] = 0ull + 0ull;
    c.r[19].d[0] = 0ull + 0ull;
    set32(c.r[30], c.r[30].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + 8u);
    set32(c.r[17], c.r[17].w[0] + c.r[3].w[0]);
    c.budget -= 6;
    [[clang::musttail]] return unit_005A(c, 1u, depth);
}

}
