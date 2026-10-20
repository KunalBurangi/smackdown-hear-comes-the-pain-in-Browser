#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0083[4096] = {
    1, 0, 0, 2, 3, 0, 4, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 7, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 9, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 15, 0, 0, 0, 0, 16, 0,
    0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0,
    20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 22, 0,
    0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 24, 0, 0, 0, 25, 0, 0, 0, 26, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 30, 31, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 32, 0, 0, 33, 34, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 38,
    0, 39, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 41, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0,
    0, 0, 0, 44, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 47, 0, 0, 48, 0, 0, 0, 0, 0, 49, 0, 0,
    0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0,
    56, 0, 0, 57, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    60, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 64,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 68, 0, 0, 69, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 75, 0, 76, 0, 0, 77,
    0, 78, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 80, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    82, 0, 0, 0, 0, 0, 0, 0, 0, 0, 83, 0, 84, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0,
    89, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 92,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 0,
    94, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 95, 0, 96,
    0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0, 100, 0, 101, 0, 0, 0, 0, 0, 0, 102,
    0, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 104, 105, 0, 106, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 109, 0, 0, 0, 110, 0, 0, 0, 111,
    0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0,
    114, 0, 0, 0, 115, 0, 0, 0, 0, 116, 0, 117, 0, 0, 0, 118, 0, 0, 0, 119, 0, 0, 0, 120, 0, 0, 0, 121, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 122, 0, 123, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0,
    0, 0, 126, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 128, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 130,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 134,
    0, 0, 135, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 138, 0, 0, 0, 139, 0, 0, 0,
    0, 0, 0, 140, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 142, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 146, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 148, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0,
    152, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 0, 157,
    0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 161, 0, 0, 0, 162, 0, 0, 0, 163, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 166, 0, 0, 0, 167, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 171, 0,
    172, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 173, 0, 174, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 0,
    0, 177, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 179, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 181, 0, 0, 182, 0, 0, 0, 0, 0, 0, 0, 183, 0, 0, 0, 0, 0,
    184, 0, 0, 0, 0, 185, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 186, 0,
    0, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 190, 0, 0, 0, 0, 191, 0,
    0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 193, 0, 0, 194, 0, 195, 0, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0, 0, 197, 0, 0, 0,
    0, 198, 0, 0, 0, 0, 0, 0, 0, 199, 0, 0, 0, 0, 200, 0, 0, 0, 0, 201, 0, 0, 0, 202, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 203, 0, 0, 0, 0, 0, 0, 204, 0, 0, 0, 0, 0, 0, 0, 0,
    205, 0, 0, 0, 0, 0, 0, 206, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 207, 0, 0, 0, 0, 0, 0, 0, 0, 0, 208, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 209, 0, 0, 0, 0, 0, 0, 210, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 211, 0, 0, 0, 0, 0, 0, 0, 0, 212, 0, 0, 0, 0, 0, 0, 0, 0, 213, 0, 214, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 215, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 216, 0, 217, 0, 218, 0, 0, 219, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 220, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 0, 0, 0, 222, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 223, 0, 0, 0, 0, 0, 0, 0, 0, 0, 224, 0, 0, 0, 0, 0, 0, 0, 0, 0, 225, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 226, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 227, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 228, 0, 0, 0, 0, 229, 0, 0, 0, 0, 0, 0, 0, 0, 0, 230,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 231, 0, 0, 0, 0, 0, 0, 0, 232, 0, 0, 0,
    0, 0, 0, 233, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 234, 0, 0, 0, 0, 0, 0, 0, 0, 235, 0, 0, 0,
    0, 0, 0, 0, 236, 0, 0, 0, 0, 0, 0, 237, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 238, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 239, 0, 0, 0, 0, 0, 0, 0, 0, 0, 240, 0, 0, 0, 0, 0, 241, 0,
    0, 0, 0, 0, 242, 0, 0, 0, 0, 0, 0, 0, 0, 0, 243, 0, 0, 0, 0, 0, 0, 0, 0, 244, 0, 0, 0, 0, 0, 0, 0, 0,
    245, 0, 0, 0, 0, 246, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 247, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 248, 0, 0, 0, 0, 249, 0, 0, 0, 250, 0, 251, 0, 252, 0, 0, 0, 0, 0, 0, 253, 0, 0, 0,
    0, 0, 0, 254, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 256, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 257, 0, 0, 0, 0,
    0, 0, 258, 0, 0, 0, 0, 0, 0, 259, 0, 0, 0, 0, 0, 260, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 261, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 262, 0, 0, 0, 263, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 264, 0, 0, 0, 0, 265, 0, 0, 0, 0, 0, 0, 266, 0, 267, 0, 268, 0, 0, 0, 0, 0, 0, 269, 0, 0, 0, 0, 0, 0,
    270, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 271, 0, 0, 0, 0,
    272, 0, 0, 0, 273, 0, 0, 274, 0, 0, 0, 0, 0, 0, 0, 0, 275, 0, 0, 276, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    277, 0, 0, 278, 0, 0, 0, 0, 0, 0, 0, 0, 279, 0, 280, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 281, 0, 0, 0, 0, 0, 0, 282, 0, 0, 0, 0, 0, 0, 283, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 284, 0, 285, 0, 0, 286, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 287, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 288, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 289, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 290,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 291, 0, 0, 0, 292, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 293, 0, 0, 0, 0, 294, 0, 0, 295, 0, 296, 0, 297, 0, 0, 0, 0, 0, 0, 298, 0, 0, 0, 0, 0, 299, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 300, 0, 0, 0, 0, 0, 301, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 302, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 303, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 304, 0, 0, 0, 0, 305, 0, 0, 306, 0, 307, 0, 308, 0, 0, 0, 0, 0, 0, 309, 0, 0,
    0, 0, 0, 310, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    311, 0, 0, 0, 0, 0, 312, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 313, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    314, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 315, 0, 0, 0, 0, 0, 316, 0, 0, 0, 0, 0, 0, 0,
    317, 0, 0, 318, 0, 319, 0, 0, 0, 0, 320, 0, 0, 0, 0, 0, 321, 0, 0, 0, 0, 322, 0, 0, 0, 0, 0, 323, 0, 0, 0, 0,
    0, 0, 0, 324, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 325, 0, 0, 0, 0, 0, 326, 0, 0, 327, 0,
    0, 0, 0, 328, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 329, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 330, 0, 0, 0, 0, 0, 0, 331, 0, 0, 0, 0, 0, 0, 0, 0, 0, 332, 0, 0, 0, 0, 0, 0, 0, 0, 333, 0, 0, 0,
    0, 0, 0, 334, 0, 0, 335, 0, 336, 0, 0, 0, 0, 337, 0, 0, 0, 0, 338, 0, 0, 0, 0, 0, 339, 0, 0, 0, 0, 340, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 341, 0, 0, 0, 0, 0, 342, 0, 0, 343, 0, 0, 0, 0, 344, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 345, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 346, 0, 347, 0,
    0, 0, 0, 0, 0, 348, 0, 0, 349, 0, 350, 0, 0, 0, 0, 351, 0, 0, 0, 0, 0, 352, 0, 0, 0, 0, 353, 0, 0, 0, 0, 354,
    0, 0, 0, 0, 0, 355, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 356, 0, 0, 0, 0, 0, 357, 0, 0,
    358, 0, 0, 0, 0, 359, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 360, 0, 0, 0, 0, 0, 0, 0, 0, 361, 0, 0,
    0, 0, 0, 0, 362, 0, 0, 0, 0, 0, 0, 363, 0, 0, 0, 0, 0, 0, 364, 0, 0, 0, 0, 0, 0, 365, 0, 0, 0, 366, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 367, 0, 0, 368, 0, 0, 0, 0, 0, 0, 369, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    370, 0, 0, 0, 0, 0, 0, 0, 371, 0, 0, 372, 0, 0, 0, 0, 0, 373, 0, 0, 0, 0, 0, 0, 0, 0, 374, 0, 0, 0, 0, 0,
    375, 0, 0, 0, 0, 0, 0, 0, 0, 376, 0, 0, 0, 0, 0, 377, 0, 0, 0, 0, 0, 0, 0, 0, 378, 0, 0, 0, 0, 379, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 380, 0, 0, 0, 0, 381, 0, 0, 0, 0, 382, 0, 0,
    0, 0, 383, 0, 0, 0, 0, 0, 0, 0, 384, 0, 0, 0, 385, 0, 0, 0, 386, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 387, 0, 0, 388, 0, 0, 389, 0, 0, 390, 0, 0, 0, 0, 391, 0, 0, 0, 392, 0, 0, 0, 0, 0, 0, 393, 0, 0, 0, 394, 0,
    0, 0, 395, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 396, 0, 0, 397, 0, 0, 0, 398, 0, 0, 0, 0, 399, 0, 400,
    0, 0, 0, 401, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 402, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 403, 0, 0, 0, 0,
    0, 0, 404, 0, 0, 0, 0, 0, 0, 405, 0, 0, 0, 0, 0, 0, 406, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 407, 0, 0, 0, 0,
    0, 0, 408, 0, 0, 0, 0, 0, 0, 0, 409, 0, 0, 0, 410, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 411, 0, 0, 412, 0, 413, 0, 0, 0, 0, 414, 0,
    415, 0, 0, 0, 0, 0, 416, 0, 0, 417, 0, 418, 0, 0, 0, 0, 0, 0, 0, 0, 419, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 420, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 421, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 422, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 423, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 424, 0, 0, 0, 0, 0, 0, 0, 0, 0, 425, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 426, 0, 0, 0, 427,
    0, 0, 0, 0, 0, 428, 0, 0, 0, 0, 429, 0, 0, 0, 0, 0, 0, 0, 0, 0, 430, 0, 0, 0, 0, 431, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 432, 0, 0, 0, 0, 0, 0, 433, 0, 0, 0, 0, 434, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 435,
    0, 0, 436, 0, 0, 0, 0, 437, 0, 0, 0, 0, 0, 438, 0, 0, 0, 0, 439, 0, 440, 0, 0, 441, 0, 0, 0, 0, 442, 0, 0, 0,
    0, 0, 443, 0, 0, 0, 0, 444, 0, 445, 0, 0, 0, 446, 0, 0, 0, 0, 0, 447, 0, 0, 0, 0, 448, 0, 0, 449, 0, 0, 0, 0,
    450, 0, 0, 0, 451, 0, 0, 0, 0, 452, 0, 0, 453, 0, 0, 0, 0, 454, 0, 0, 0, 0, 0, 455, 0, 0, 0, 0, 456, 0, 0, 0,
};

void unit_0083(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_0030C000;
    case 2u: goto L_0030C00C;
    case 3u: goto L_0030C010;
    case 4u: goto L_0030C018;
    case 5u: goto L_0030C028;
    case 6u: goto L_0030C068;
    case 7u: goto L_0030C074;
    case 8u: goto L_0030C0B0;
    case 9u: goto L_0030C0B8;
    case 10u: goto L_0030C0D0;
    case 11u: goto L_0030C11C;
    case 12u: goto L_0030C130;
    case 13u: goto L_0030C1AC;
    case 14u: goto L_0030C1DC;
    case 15u: goto L_0030C1E4;
    case 16u: goto L_0030C1F8;
    case 17u: goto L_0030C20C;
    case 18u: goto L_0030C244;
    case 19u: goto L_0030C264;
    case 20u: goto L_0030C280;
    case 21u: goto L_0030C2E4;
    case 22u: goto L_0030C2F8;
    case 23u: goto L_0030C310;
    case 24u: goto L_0030C328;
    case 25u: goto L_0030C338;
    case 26u: goto L_0030C348;
    case 27u: goto L_0030C354;
    case 28u: goto L_0030C394;
    case 29u: goto L_0030C3BC;
    case 30u: goto L_0030C3D8;
    case 31u: goto L_0030C3DC;
    case 32u: goto L_0030C404;
    case 33u: goto L_0030C410;
    case 34u: goto L_0030C414;
    case 35u: goto L_0030C440;
    case 36u: goto L_0030C4C0;
    case 37u: goto L_0030C4D8;
    case 38u: goto L_0030C4FC;
    case 39u: goto L_0030C504;
    case 40u: goto L_0030C524;
    case 41u: goto L_0030C530;
    case 42u: goto L_0030C53C;
    case 43u: goto L_0030C570;
    case 44u: goto L_0030C58C;
    case 45u: goto L_0030C598;
    case 46u: goto L_0030C5BC;
    case 47u: goto L_0030C5D0;
    case 48u: goto L_0030C5DC;
    case 49u: goto L_0030C5F4;
    case 50u: goto L_0030C60C;
    case 51u: goto L_0030C694;
    case 52u: goto L_0030C6BC;
    case 53u: goto L_0030C6D4;
    case 54u: goto L_0030C6F4;
    case 55u: goto L_0030C764;
    case 56u: goto L_0030C780;
    case 57u: goto L_0030C78C;
    case 58u: goto L_0030C7A0;
    case 59u: goto L_0030C7C4;
    case 60u: goto L_0030C800;
    case 61u: goto L_0030C820;
    case 62u: goto L_0030C82C;
    case 63u: goto L_0030C860;
    case 64u: goto L_0030C87C;
    case 65u: goto L_0030C8B0;
    case 66u: goto L_0030C910;
    case 67u: goto L_0030C954;
    case 68u: goto L_0030C988;
    case 69u: goto L_0030C994;
    case 70u: goto L_0030C9A4;
    case 71u: goto L_0030C9D4;
    case 72u: goto L_0030C9E4;
    case 73u: goto L_0030CA44;
    case 74u: goto L_0030CAD0;
    case 75u: goto L_0030CAE8;
    case 76u: goto L_0030CAF0;
    case 77u: goto L_0030CAFC;
    case 78u: goto L_0030CB04;
    case 79u: goto L_0030CB0C;
    case 80u: goto L_0030CB78;
    case 81u: goto L_0030CBD4;
    case 82u: goto L_0030CC80;
    case 83u: goto L_0030CCA8;
    case 84u: goto L_0030CCB0;
    case 85u: goto L_0030CCC4;
    case 86u: goto L_0030CD08;
    case 87u: goto L_0030CD28;
    case 88u: goto L_0030CDE4;
    case 89u: goto L_0030CE00;
    case 90u: goto L_0030CE38;
    case 91u: goto L_0030CE64;
    case 92u: goto L_0030CE7C;
    case 93u: goto L_0030CEE4;
    case 94u: goto L_0030CF00;
    case 95u: goto L_0030CF74;
    case 96u: goto L_0030CF7C;
    case 97u: goto L_0030CF8C;
    case 98u: goto L_0030CFA8;
    case 99u: goto L_0030CFB8;
    case 100u: goto L_0030CFD8;
    case 101u: goto L_0030CFE0;
    case 102u: goto L_0030CFFC;
    case 103u: goto L_0030D020;
    case 104u: goto L_0030D030;
    case 105u: goto L_0030D034;
    case 106u: goto L_0030D03C;
    case 107u: goto L_0030D0A4;
    case 108u: goto L_0030D0C8;
    case 109u: goto L_0030D0DC;
    case 110u: goto L_0030D0EC;
    case 111u: goto L_0030D0FC;
    case 112u: goto L_0030D10C;
    case 113u: goto L_0030D170;
    case 114u: goto L_0030D180;
    case 115u: goto L_0030D190;
    case 116u: goto L_0030D1A4;
    case 117u: goto L_0030D1AC;
    case 118u: goto L_0030D1BC;
    case 119u: goto L_0030D1CC;
    case 120u: goto L_0030D1DC;
    case 121u: goto L_0030D1EC;
    case 122u: goto L_0030D218;
    case 123u: goto L_0030D220;
    case 124u: goto L_0030D234;
    case 125u: goto L_0030D268;
    case 126u: goto L_0030D288;
    case 127u: goto L_0030D2A0;
    case 128u: goto L_0030D2B8;
    case 129u: goto L_0030D2C8;
    case 130u: goto L_0030D2FC;
    case 131u: goto L_0030D328;
    case 132u: goto L_0030D36C;
    case 133u: goto L_0030D3CC;
    case 134u: goto L_0030D3FC;
    case 135u: goto L_0030D408;
    case 136u: goto L_0030D434;
    case 137u: goto L_0030D448;
    case 138u: goto L_0030D460;
    case 139u: goto L_0030D470;
    case 140u: goto L_0030D48C;
    case 141u: goto L_0030D4A4;
    case 142u: goto L_0030D510;
    case 143u: goto L_0030D520;
    case 144u: goto L_0030D5B0;
    case 145u: goto L_0030D5C0;
    case 146u: goto L_0030D614;
    case 147u: goto L_0030D624;
    case 148u: goto L_0030D684;
    case 149u: goto L_0030D6BC;
    case 150u: goto L_0030D6D4;
    case 151u: goto L_0030D6E8;
    case 152u: goto L_0030D700;
    case 153u: goto L_0030D718;
    case 154u: goto L_0030D730;
    case 155u: goto L_0030D744;
    case 156u: goto L_0030D75C;
    case 157u: goto L_0030D77C;
    case 158u: goto L_0030D78C;
    case 159u: goto L_0030D7BC;
    case 160u: goto L_0030D7CC;
    case 161u: goto L_0030D808;
    case 162u: goto L_0030D818;
    case 163u: goto L_0030D828;
    case 164u: goto L_0030D838;
    case 165u: goto L_0030D864;
    case 166u: goto L_0030D88C;
    case 167u: goto L_0030D89C;
    case 168u: goto L_0030D8B4;
    case 169u: goto L_0030D8C8;
    case 170u: goto L_0030D8E0;
    case 171u: goto L_0030D8F8;
    case 172u: goto L_0030D900;
    case 173u: goto L_0030D964;
    case 174u: goto L_0030D96C;
    case 175u: goto L_0030D9CC;
    case 176u: goto L_0030D9EC;
    case 177u: goto L_0030DA04;
    case 178u: goto L_0030DA14;
    case 179u: goto L_0030DA74;
    case 180u: goto L_0030DAA4;
    case 181u: goto L_0030DABC;
    case 182u: goto L_0030DAC8;
    case 183u: goto L_0030DAE8;
    case 184u: goto L_0030DB00;
    case 185u: goto L_0030DB14;
    case 186u: goto L_0030DB78;
    case 187u: goto L_0030DB9C;
    case 188u: goto L_0030DBB4;
    case 189u: goto L_0030DBD8;
    case 190u: goto L_0030DBE4;
    case 191u: goto L_0030DBF8;
    case 192u: goto L_0030DC18;
    case 193u: goto L_0030DC28;
    case 194u: goto L_0030DC34;
    case 195u: goto L_0030DC3C;
    case 196u: goto L_0030DC5C;
    case 197u: goto L_0030DC70;
    case 198u: goto L_0030DC84;
    case 199u: goto L_0030DCA4;
    case 200u: goto L_0030DCB8;
    case 201u: goto L_0030DCCC;
    case 202u: goto L_0030DCDC;
    case 203u: goto L_0030DD40;
    case 204u: goto L_0030DD5C;
    case 205u: goto L_0030DD80;
    case 206u: goto L_0030DD9C;
    case 207u: goto L_0030DDD0;
    case 208u: goto L_0030DDF8;
    case 209u: goto L_0030DE20;
    case 210u: goto L_0030DE3C;
    case 211u: goto L_0030DE90;
    case 212u: goto L_0030DEB4;
    case 213u: goto L_0030DED8;
    case 214u: goto L_0030DEE0;
    case 215u: goto L_0030DF18;
    case 216u: goto L_0030DF44;
    case 217u: goto L_0030DF4C;
    case 218u: goto L_0030DF54;
    case 219u: goto L_0030DF60;
    case 220u: goto L_0030DF90;
    case 221u: goto L_0030DFC4;
    case 222u: goto L_0030DFEC;
    case 223u: goto L_0030E014;
    case 224u: goto L_0030E03C;
    case 225u: goto L_0030E064;
    case 226u: goto L_0030E0B4;
    case 227u: goto L_0030E110;
    case 228u: goto L_0030E140;
    case 229u: goto L_0030E154;
    case 230u: goto L_0030E17C;
    case 231u: goto L_0030E1D0;
    case 232u: goto L_0030E1F0;
    case 233u: goto L_0030E20C;
    case 234u: goto L_0030E24C;
    case 235u: goto L_0030E270;
    case 236u: goto L_0030E290;
    case 237u: goto L_0030E2AC;
    case 238u: goto L_0030E2E8;
    case 239u: goto L_0030E338;
    case 240u: goto L_0030E360;
    case 241u: goto L_0030E378;
    case 242u: goto L_0030E390;
    case 243u: goto L_0030E3B8;
    case 244u: goto L_0030E3DC;
    case 245u: goto L_0030E400;
    case 246u: goto L_0030E414;
    case 247u: goto L_0030E450;
    case 248u: goto L_0030E4A0;
    case 249u: goto L_0030E4B4;
    case 250u: goto L_0030E4C4;
    case 251u: goto L_0030E4CC;
    case 252u: goto L_0030E4D4;
    case 253u: goto L_0030E4F0;
    case 254u: goto L_0030E50C;
    case 255u: goto L_0030E560;
    case 256u: goto L_0030E574;
    case 257u: goto L_0030E5EC;
    case 258u: goto L_0030E608;
    case 259u: goto L_0030E624;
    case 260u: goto L_0030E63C;
    case 261u: goto L_0030E66C;
    case 262u: goto L_0030E6A0;
    case 263u: goto L_0030E6B0;
    case 264u: goto L_0030E708;
    case 265u: goto L_0030E71C;
    case 266u: goto L_0030E738;
    case 267u: goto L_0030E740;
    case 268u: goto L_0030E748;
    case 269u: goto L_0030E764;
    case 270u: goto L_0030E780;
    case 271u: goto L_0030E7EC;
    case 272u: goto L_0030E800;
    case 273u: goto L_0030E810;
    case 274u: goto L_0030E81C;
    case 275u: goto L_0030E840;
    case 276u: goto L_0030E84C;
    case 277u: goto L_0030E880;
    case 278u: goto L_0030E88C;
    case 279u: goto L_0030E8B0;
    case 280u: goto L_0030E8B8;
    case 281u: goto L_0030E934;
    case 282u: goto L_0030E950;
    case 283u: goto L_0030E96C;
    case 284u: goto L_0030E998;
    case 285u: goto L_0030E9A0;
    case 286u: goto L_0030E9AC;
    case 287u: goto L_0030E9DC;
    case 288u: goto L_0030EA08;
    case 289u: goto L_0030EA4C;
    case 290u: goto L_0030EA7C;
    case 291u: goto L_0030EAB0;
    case 292u: goto L_0030EAC0;
    case 293u: goto L_0030EB08;
    case 294u: goto L_0030EB1C;
    case 295u: goto L_0030EB28;
    case 296u: goto L_0030EB30;
    case 297u: goto L_0030EB38;
    case 298u: goto L_0030EB54;
    case 299u: goto L_0030EB6C;
    case 300u: goto L_0030EBE0;
    case 301u: goto L_0030EBF8;
    case 302u: goto L_0030EC28;
    case 303u: goto L_0030EC60;
    case 304u: goto L_0030ECA8;
    case 305u: goto L_0030ECBC;
    case 306u: goto L_0030ECC8;
    case 307u: goto L_0030ECD0;
    case 308u: goto L_0030ECD8;
    case 309u: goto L_0030ECF4;
    case 310u: goto L_0030ED0C;
    case 311u: goto L_0030ED80;
    case 312u: goto L_0030ED98;
    case 313u: goto L_0030EDC8;
    case 314u: goto L_0030EE00;
    case 315u: goto L_0030EE48;
    case 316u: goto L_0030EE60;
    case 317u: goto L_0030EE80;
    case 318u: goto L_0030EE8C;
    case 319u: goto L_0030EE94;
    case 320u: goto L_0030EEA8;
    case 321u: goto L_0030EEC0;
    case 322u: goto L_0030EED4;
    case 323u: goto L_0030EEEC;
    case 324u: goto L_0030EF0C;
    case 325u: goto L_0030EFD4;
    case 326u: goto L_0030EFEC;
    case 327u: goto L_0030EFF8;
    case 328u: goto L_0030F00C;
    case 329u: goto L_0030F040;
    case 330u: goto L_0030F088;
    case 331u: goto L_0030F0A4;
    case 332u: goto L_0030F0CC;
    case 333u: goto L_0030F0F0;
    case 334u: goto L_0030F10C;
    case 335u: goto L_0030F118;
    case 336u: goto L_0030F120;
    case 337u: goto L_0030F134;
    case 338u: goto L_0030F148;
    case 339u: goto L_0030F160;
    case 340u: goto L_0030F174;
    case 341u: goto L_0030F240;
    case 342u: goto L_0030F258;
    case 343u: goto L_0030F264;
    case 344u: goto L_0030F278;
    case 345u: goto L_0030F2B0;
    case 346u: goto L_0030F2F0;
    case 347u: goto L_0030F2F8;
    case 348u: goto L_0030F314;
    case 349u: goto L_0030F320;
    case 350u: goto L_0030F328;
    case 351u: goto L_0030F33C;
    case 352u: goto L_0030F354;
    case 353u: goto L_0030F368;
    case 354u: goto L_0030F37C;
    case 355u: goto L_0030F394;
    case 356u: goto L_0030F45C;
    case 357u: goto L_0030F474;
    case 358u: goto L_0030F480;
    case 359u: goto L_0030F494;
    case 360u: goto L_0030F4D0;
    case 361u: goto L_0030F4F4;
    case 362u: goto L_0030F510;
    case 363u: goto L_0030F52C;
    case 364u: goto L_0030F548;
    case 365u: goto L_0030F564;
    case 366u: goto L_0030F574;
    case 367u: goto L_0030F618;
    case 368u: goto L_0030F624;
    case 369u: goto L_0030F640;
    case 370u: goto L_0030F680;
    case 371u: goto L_0030F6A0;
    case 372u: goto L_0030F6AC;
    case 373u: goto L_0030F6C4;
    case 374u: goto L_0030F6E8;
    case 375u: goto L_0030F700;
    case 376u: goto L_0030F724;
    case 377u: goto L_0030F73C;
    case 378u: goto L_0030F760;
    case 379u: goto L_0030F774;
    case 380u: goto L_0030F7CC;
    case 381u: goto L_0030F7E0;
    case 382u: goto L_0030F7F4;
    case 383u: goto L_0030F808;
    case 384u: goto L_0030F828;
    case 385u: goto L_0030F838;
    case 386u: goto L_0030F848;
    case 387u: goto L_0030F884;
    case 388u: goto L_0030F890;
    case 389u: goto L_0030F89C;
    case 390u: goto L_0030F8A8;
    case 391u: goto L_0030F8BC;
    case 392u: goto L_0030F8CC;
    case 393u: goto L_0030F8E8;
    case 394u: goto L_0030F8F8;
    case 395u: goto L_0030F908;
    case 396u: goto L_0030F944;
    case 397u: goto L_0030F950;
    case 398u: goto L_0030F960;
    case 399u: goto L_0030F974;
    case 400u: goto L_0030F97C;
    case 401u: goto L_0030F98C;
    case 402u: goto L_0030F9C0;
    case 403u: goto L_0030F9EC;
    case 404u: goto L_0030FA08;
    case 405u: goto L_0030FA24;
    case 406u: goto L_0030FA40;
    case 407u: goto L_0030FA6C;
    case 408u: goto L_0030FA88;
    case 409u: goto L_0030FAA8;
    case 410u: goto L_0030FAB8;
    case 411u: goto L_0030FB50;
    case 412u: goto L_0030FB5C;
    case 413u: goto L_0030FB64;
    case 414u: goto L_0030FB78;
    case 415u: goto L_0030FB80;
    case 416u: goto L_0030FB98;
    case 417u: goto L_0030FBA4;
    case 418u: goto L_0030FBAC;
    case 419u: goto L_0030FBD0;
    case 420u: goto L_0030FC08;
    case 421u: goto L_0030FC40;
    case 422u: goto L_0030FCA0;
    case 423u: goto L_0030FCE8;
    case 424u: goto L_0030FD10;
    case 425u: goto L_0030FD38;
    case 426u: goto L_0030FD6C;
    case 427u: goto L_0030FD7C;
    case 428u: goto L_0030FD94;
    case 429u: goto L_0030FDA8;
    case 430u: goto L_0030FDD0;
    case 431u: goto L_0030FDE4;
    case 432u: goto L_0030FE20;
    case 433u: goto L_0030FE3C;
    case 434u: goto L_0030FE50;
    case 435u: goto L_0030FE7C;
    case 436u: goto L_0030FE88;
    case 437u: goto L_0030FE9C;
    case 438u: goto L_0030FEB4;
    case 439u: goto L_0030FEC8;
    case 440u: goto L_0030FED0;
    case 441u: goto L_0030FEDC;
    case 442u: goto L_0030FEF0;
    case 443u: goto L_0030FF08;
    case 444u: goto L_0030FF1C;
    case 445u: goto L_0030FF24;
    case 446u: goto L_0030FF34;
    case 447u: goto L_0030FF4C;
    case 448u: goto L_0030FF60;
    case 449u: goto L_0030FF6C;
    case 450u: goto L_0030FF80;
    case 451u: goto L_0030FF90;
    case 452u: goto L_0030FFA4;
    case 453u: goto L_0030FFB0;
    case 454u: goto L_0030FFC4;
    case 455u: goto L_0030FFDC;
    case 456u: goto L_0030FFF0;
    default: bad_entry(c, 0x0030C000u); return;
    }
L_0030C000:
    c.r[2].d[0] = c.r[4].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0030BFF0u | kUnwind; return; } [[clang::musttail]] return unit_0082(c, 425u, depth); } }
L_0030C00C:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0030C010:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030C018u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0082(c, 299u, depth + 1u); else { c.pc = 0x0030B080u; return; } if (c.pc != 0x0030C018u) [[unlikely]] return; }
L_0030C018:
    set32(c.r[2], ld32((c.r[29].w[0] + 304u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030C028u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0082(c, 296u, depth + 1u); else { c.pc = 0x0030AFF0u; return; } if (c.pc != 0x0030C028u) [[unlikely]] return; }
L_0030C028:
    set32(c.r[2], c.r[16].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[2], c.r[2].w[0] << 4);
    st32((c.r[29].w[0] + 208u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 208u)));
    set32(c.r[2], c.r[23].w[0] + c.r[2].w[0]);
    st32((c.r[29].w[0] + 192u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 192u)));
    set32(c.r[18], c.r[2].w[0] + 4u);
    set32(c.r[2], ld32((c.r[29].w[0] + 332u)));
    c.budget -= 14;
    { const bool t = c.r[16].d[0] != c.r[2].d[0]; c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (t) { goto L_0030C07C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030C068u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0082(c, 299u, depth + 1u); else { c.pc = 0x0030B080u; return; } if (c.pc != 0x0030C068u) [[unlikely]] return; }
L_0030C068:
    set32(c.r[5], ld32((c.r[19].w[0] + 12u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030C074u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0082(c, 296u, depth + 1u); else { c.pc = 0x0030AFF0u; return; } if (c.pc != 0x0030C074u) [[unlikely]] return; }
L_0030C074:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[19].w[0] + 12u)));  if (t) { goto L_0030C358; } }
L_0030C07C:
    set32(c.r[22], ld32((c.r[18].w[0])));
    set32(c.r[2], 0u + 13u);
    c.budget -= 4;
    { const bool t = c.r[22].d[0] != c.r[2].d[0]; c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_0030C0D8; } }
    set32(c.r[2], c.r[16].w[0] << 2);
    c.r[5].d[0] = c.r[30].d[0] + 0ull;
    set32(c.r[3], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[21].w[0] + c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030C0B0u); set32(c.r[4], c.r[2].w[0] + 188u);  if (depth < kMaxDepth) unit_008E(c, 389u, depth + 1u); else { c.pc = 0x0033B950u; return; } if (c.pc != 0x0030C0B0u) [[unlikely]] return; }
L_0030C0B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030C0B8u); c.r[17].d[0] = c.r[2].d[0] & 65535ull;  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x0030C0B8u) [[unlikely]] return; }
L_0030C0B8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.r[6].d[0] = ld8((c.r[1].w[0] - 25576u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030C0D0u); set32(c.r[4], c.r[29].w[0] + 368u);  if (depth < kMaxDepth) unit_008D(c, 319u, depth + 1u); else { c.pc = 0x00337A20u; return; } if (c.pc != 0x0030C0D0u) [[unlikely]] return; }
L_0030C0D0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[20].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0030C0E0; } }
L_0030C0D8:
    set32(c.r[20], 0u + 118u);
    st8((c.r[29].w[0] + 272u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_0030C0E0:
    set32(c.r[2], 0u + 118u);
    c.budget -= 3;
    { const bool t = c.r[20].d[0] != c.r[2].d[0]; c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (t) { goto L_0030C340; } }
    c.r[2].d[0] = ld8((c.r[29].w[0] + 272u));
    set32(c.r[3], c.r[30].w[0] << 5);
    c.r[2].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[29].w[0] + 176u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 192u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[19], c.r[2].w[0] + 20u);
    set32(c.r[2], ld32((c.r[29].w[0] + 176u)));
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 50u);  if (t) { goto L_0030C228; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030C11Cu); set32(c.r[4], ld32((c.r[18].w[0])));  if (depth < kMaxDepth) unit_008D(c, 238u, depth + 1u); else { c.pc = 0x00336B70u; return; } if (c.pc != 0x0030C11Cu) [[unlikely]] return; }
L_0030C11C:
    set32(c.r[4], c.r[29].w[0] + 880u);
    c.r[5].d[0] = c.r[22].d[0] + 0ull;
    c.r[6].d[0] = c.r[30].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030C130u); set32(c.r[7], c.r[29].w[0] + 908u);  if (depth < kMaxDepth) unit_008E(c, 241u, depth + 1u); else { c.pc = 0x0033A120u; return; } if (c.pc != 0x0030C130u) [[unlikely]] return; }
L_0030C130:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; set32(c.r[3], c.r[2].w[0] << 5);  if (t) { goto L_0030C144; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], 0u + 118u);  if (t) { goto L_0030C154; } }
L_0030C144:
    set32(c.r[2], ld32((c.r[29].w[0] + 208u)));
    set32(c.r[2], c.r[2].w[0] + c.r[23].w[0]);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[17], ld32((c.r[2].w[0] + 32u)));
    c.budget -= 4;
L_0030C154:
    set32(c.r[4], ld32((c.r[29].w[0] + 908u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[2].d[0]; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0030C16C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 340u), c.r[2].w[0]);  if (t) { goto L_0030C184; } }
L_0030C16C:
    set32(c.r[2], ld32((c.r[29].w[0] + 208u)));
    set32(c.r[3], c.r[2].w[0] + c.r[23].w[0]);
    set32(c.r[2], c.r[4].w[0] << 5);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 32u)));
    st32((c.r[29].w[0] + 340u), c.r[2].w[0]);
    c.budget -= 6;
L_0030C184:
    set32(c.r[4], c.r[29].w[0] + 880u);
    st32((c.r[29].w[0] + 344u), c.r[22].w[0]);
    set32(c.r[5], c.r[29].w[0] + 400u);
    st32((c.r[29].w[0] + 336u), c.r[17].w[0]);
    set32(c.r[6], c.r[29].w[0] + 368u);
    st32((c.r[29].w[0] + 348u), c.r[30].w[0]);
    c.r[7].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[8], ld32((c.r[21].w[0] + 168u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030C1ACu); set32(c.r[9], c.r[29].w[0] + 336u);  if (depth < kMaxDepth) unit_008E(c, 38u, depth + 1u); else { c.pc = 0x003385C0u; return; } if (c.pc != 0x0030C1ACu) [[unlikely]] return; }
L_0030C1AC:
    c.r[22].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[22].d[0] != 0ull;  if (t) { goto L_0030C1C4; } }
    set32(c.r[2], 0u + 50u);
    set32(c.r[22], 0u + 1u);
    st32((c.r[29].w[0] + 400u), c.r[2].w[0]);
    c.budget -= 3;
L_0030C1C4:
    set32(c.r[2], 0u + 118u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != c.r[2].d[0]; set32(c.r[4], c.r[29].w[0] + 400u);  if (t) { goto L_0030C1DC; } }
    c.r[5].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030C1DCu); set32(c.r[6], c.r[29].w[0] + 368u);  if (depth < kMaxDepth) unit_008E(c, 63u, depth + 1u); else { c.pc = 0x00338A60u; return; } if (c.pc != 0x0030C1DCu) [[unlikely]] return; }
L_0030C1DC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_0030C218; } }
L_0030C1E4:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[20], ld32((c.r[2].w[0] + 400u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030C1F8u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0082(c, 299u, depth + 1u); else { c.pc = 0x0030B080u; return; } if (c.pc != 0x0030C1F8u) [[unlikely]] return; }
L_0030C1F8:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_0030C214; } }
    set32(c.r[5], ld32((c.r[19].w[0] + 12u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030C20Cu); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0082(c, 296u, depth + 1u); else { c.pc = 0x0030AFF0u; return; } if (c.pc != 0x0030C20Cu) [[unlikely]] return; }
L_0030C20C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0030C224; } }
L_0030C214:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_0030C218:
    c.r[2].d[0] = c.r[17].sd[0] < c.r[22].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[17].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0030C1E4u | kUnwind; return; } goto L_0030C1E4; } }
L_0030C224:
    set32(c.r[2], 0u + 50u);
    c.budget -= 1;
L_0030C228:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == c.r[2].d[0];  if (t) { goto L_0030C23C; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 176u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0030C354; } }
L_0030C23C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030C244u);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x0030C244u) [[unlikely]] return; }
L_0030C244:
    set32(c.r[3], ld32((c.r[29].w[0] + 208u)));
    c.r[1].d[0] = 0ull | 40076ull;
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], 0u + 255u);
    set32(c.r[23], c.r[3].w[0] + c.r[1].w[0]);
    st16((c.r[18].w[0] + 4u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[3], c.r[17].w[0] << 5);
    c.budget -= 8;
L_0030C264:
    set32(c.r[2], 0u + 118u);
    set32(c.r[22], c.r[23].w[0] + c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[22].w[0] + 28u)));
    c.budget -= 5;
    { const bool t = c.r[5].d[0] == c.r[2].d[0]; c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (t) { goto L_0030C288; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030C280u);  if (depth < kMaxDepth) unit_0082(c, 296u, depth + 1u); else { c.pc = 0x0030AFF0u; return; } if (c.pc != 0x0030C280u) [[unlikely]] return; }
L_0030C280:
    set32(c.r[2], 0u + 255u);
    st8((c.r[22].w[0] + 38u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_0030C288:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], c.r[17].w[0] << 5);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0030C264u | kUnwind; return; } goto L_0030C264; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[2].d[0]; c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(502ll);  if (t) { goto L_0030C2D0; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[2].d[0]; c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(501ll);  if (t) { goto L_0030C2C8; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(500ll);  if (t) { goto L_0030C2C0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0030C2D4; } }
L_0030C2C0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[29].w[0] + 240u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_0030C2D4; } }
L_0030C2C8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[29].w[0] + 240u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_0030C2D4; } }
L_0030C2D0:
    st16((c.r[29].w[0] + 240u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 1;
L_0030C2D4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], ld32((c.r[1].w[0] - 27616u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030C2E4u); c.r[5].d[0] = ld16((c.r[29].w[0] + 240u));  if (depth < kMaxDepth) unit_0058(c, 46u, depth + 1u); else { c.pc = 0x00260440u; return; } if (c.pc != 0x0030C2E4u) [[unlikely]] return; }
L_0030C2E4:
    st32((c.r[2].w[0] + 4u), 0u);
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030C2F8u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0083(c, 35u, depth + 1u); else { c.pc = 0x0030C440u; return; } if (c.pc != 0x0030C2F8u) [[unlikely]] return; }
L_0030C2F8:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u + 500u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030C310u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0082(c, 394u, depth + 1u); else { c.pc = 0x0030BB30u; return; } if (c.pc != 0x0030C310u) [[unlikely]] return; }
L_0030C310:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[6], 0u + 1u);
    set32(c.r[7], 0u + 510u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030C328u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0082(c, 394u, depth + 1u); else { c.pc = 0x0030BB30u; return; } if (c.pc != 0x0030C328u) [[unlikely]] return; }
L_0030C328:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], ld32((c.r[1].w[0] - 27616u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030C338u); c.r[5].d[0] = ld16((c.r[29].w[0] + 240u));  if (depth < kMaxDepth) unit_0058(c, 46u, depth + 1u); else { c.pc = 0x00260440u; return; } if (c.pc != 0x0030C338u) [[unlikely]] return; }
L_0030C338:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 4u), 0u);  if (t) { goto L_0030C354; } }
L_0030C340:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030C348u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0082(c, 299u, depth + 1u); else { c.pc = 0x0030B080u; return; } if (c.pc != 0x0030C348u) [[unlikely]] return; }
L_0030C348:
    set32(c.r[5], ld32((c.r[19].w[0] + 12u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030C354u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0082(c, 296u, depth + 1u); else { c.pc = 0x0030AFF0u; return; } if (c.pc != 0x0030C354u) [[unlikely]] return; }
L_0030C354:
    set32(c.r[3], ld32((c.r[19].w[0] + 12u)));
    c.budget -= 1;
L_0030C358:
    set32(c.r[2], 0u + 118u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0030C394; } }
    c.r[2].d[0] = ld8((c.r[29].w[0] + 272u));
    c.r[2].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0030C394; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 192u)));
    set32(c.r[3], c.r[30].w[0] << 5);
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.r[7].d[0] = c.r[30].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 368u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030C394u); set32(c.r[4], c.r[2].w[0] + 20u);  if (depth < kMaxDepth) unit_008E(c, 282u, depth + 1u); else { c.pc = 0x0033A870u; return; } if (c.pc != 0x0030C394u) [[unlikely]] return; }
L_0030C394:
    set32(c.r[2], ld32((c.r[29].w[0] + 328u)));
    set32(c.r[3], 0u + 999u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0030C3D8; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 384u)));
    set32(c.r[3], 0u + 255u);
    st16((c.r[18].w[0] + 4u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld16((c.r[18].w[0] + 4u));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_0030C3D8; } }
L_0030C3BC:
    set32(c.r[2], c.r[4].w[0] << 5);
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[2].w[0] + 38u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[2].d[0] = c.r[4].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0030C3BCu | kUnwind; return; } goto L_0030C3BC; } }
L_0030C3D8:
    set32(c.r[4], ld32((c.r[29].w[0] + 384u)));
    c.budget -= 1;
L_0030C3DC:
    set32(c.r[2], 0u + 255u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { goto L_0030C3FC; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 328u)));
    set32(c.r[3], 0u + 999u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0030C3FC; } }
    st16((c.r[18].w[0] + 4u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.budget -= 1;
L_0030C3FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030C404u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0082(c, 291u, depth + 1u); else { c.pc = 0x0030AF40u; return; } if (c.pc != 0x0030C404u) [[unlikely]] return; }
L_0030C404:
    set32(c.r[4], c.r[29].w[0] + 880u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030C410u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008D(c, 214u, depth + 1u); else { c.pc = 0x00336760u; return; } if (c.pc != 0x0030C410u) [[unlikely]] return; }
L_0030C410:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));
    c.budget -= 1;
L_0030C414:
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 912u);  c.pc = t; return; }
L_0030C440:
    set32(c.r[29], c.r[29].w[0] - 736u);
    set32(c.r[2], 0u + 2u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 16;
    { const bool t = c.r[21].d[0] == c.r[2].d[0]; st32((c.r[29].w[0] + 160u), c.r[6].w[0]);  if (t) { goto L_0030C4AC; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[21].d[0] == c.r[2].d[0];  if (t) { goto L_0030C4A4; } }
    c.budget -= 2;
    { const bool t = c.r[21].d[0] == 0ull;  if (t) { goto L_0030C49C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0030C4B0; } }
L_0030C49C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[20].d[0] = 0ull + static_cast<std::uint64_t>(500ll);  if (t) { goto L_0030C4B0; } }
L_0030C4A4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[20].d[0] = 0ull + static_cast<std::uint64_t>(501ll);  if (t) { goto L_0030C4B0; } }
L_0030C4AC:
    c.r[20].d[0] = 0ull + static_cast<std::uint64_t>(502ll);
    c.budget -= 1;
L_0030C4B0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], ld32((c.r[1].w[0] - 27616u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030C4C0u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0058(c, 46u, depth + 1u); else { c.pc = 0x00260440u; return; } if (c.pc != 0x0030C4C0u) [[unlikely]] return; }
L_0030C4C0:
    set32(c.r[4], ld32((c.r[2].w[0] + 4u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0030C82C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030C4D8u);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x0030C4D8u) [[unlikely]] return; }
L_0030C4D8:
    c.r[7].d[0] = ld16((c.r[16].w[0] + 180u));
    c.r[1].d[0] = 0ull | 40072ull;
    c.r[9].d[0] = ld16((c.r[16].w[0] + 182u));
    set32(c.r[23], c.r[2].w[0] + c.r[1].w[0]);
    set32(c.r[6], ld32((c.r[16].w[0] + 172u)));
    set32(c.r[4], c.r[29].w[0] + 704u);
    set32(c.r[8], ld32((c.r[16].w[0] + 176u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030C4FCu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_008D(c, 213u, depth + 1u); else { c.pc = 0x00336740u; return; } if (c.pc != 0x0030C4FCu) [[unlikely]] return; }
L_0030C4FC:
    c.r[19].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[19].w[0] << 1);
    c.budget -= 2;
L_0030C504:
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[23].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030C524u); set32(c.r[17], c.r[2].w[0] + 20u);  if (depth < kMaxDepth) unit_008D(c, 238u, depth + 1u); else { c.pc = 0x00336B70u; return; } if (c.pc != 0x0030C524u) [[unlikely]] return; }
L_0030C524:
    c.r[30].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 22u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_0030C544; } }
L_0030C530:
    set32(c.r[5], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030C53Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0082(c, 299u, depth + 1u); else { c.pc = 0x0030B080u; return; } if (c.pc != 0x0030C53Cu) [[unlikely]] return; }
L_0030C53C:
    set32(c.r[17], c.r[17].w[0] + 32u);
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 2;
L_0030C544:
    c.r[2].d[0] = c.r[18].sd[0] < c.r[30].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0030C530u | kUnwind; return; } goto L_0030C530; } }
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.r[2].d[0] = c.r[19].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[19].w[0] << 1);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0030C504u | kUnwind; return; } goto L_0030C504; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], ld32((c.r[1].w[0] - 27616u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030C570u); set32(c.r[5], 0u + 355u);  if (depth < kMaxDepth) unit_0058(c, 46u, depth + 1u); else { c.pc = 0x00260440u; return; } if (c.pc != 0x0030C570u) [[unlikely]] return; }
L_0030C570:
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);  if (t) { goto L_0030C598; } }
    set32(c.r[4], ld32((c.r[1].w[0] - 27616u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030C58Cu); set32(c.r[5], 0u + 355u);  if (depth < kMaxDepth) unit_0058(c, 46u, depth + 1u); else { c.pc = 0x00260440u; return; } if (c.pc != 0x0030C58Cu) [[unlikely]] return; }
L_0030C58C:
    set32(c.r[5], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030C598u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0082(c, 295u, depth + 1u); else { c.pc = 0x0030AFB0u; return; } if (c.pc != 0x0030C598u) [[unlikely]] return; }
L_0030C598:
    set32(c.r[2], c.r[21].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[21].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[21].w[0]);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[23].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030C5BCu); set32(c.r[19], c.r[2].w[0] + 4u);  if (depth < kMaxDepth) unit_008D(c, 238u, depth + 1u); else { c.pc = 0x00336B70u; return; } if (c.pc != 0x0030C5BCu) [[unlikely]] return; }
L_0030C5BC:
    c.r[21].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 22u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 160u)));
    st32((c.r[19].w[0]), c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030C5D0u); set32(c.r[4], ld32((c.r[19].w[0])));  if (depth < kMaxDepth) unit_008D(c, 238u, depth + 1u); else { c.pc = 0x00336B70u; return; } if (c.pc != 0x0030C5D0u) [[unlikely]] return; }
L_0030C5D0:
    c.r[30].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 22u)));
    c.r[17].d[0] = 0ull + 0ull;
    c.r[1].d[0] = c.r[17].sd[0] < c.r[30].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
L_0030C5DC:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[3], c.r[17].w[0] << 5);  if (t) { goto L_0030C660; } }
    set32(c.r[4], ld32((c.r[19].w[0])));
    set32(c.r[2], c.r[17].w[0] << 5);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030C5F4u); set32(c.r[18], c.r[19].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_008D(c, 238u, depth + 1u); else { c.pc = 0x00336B70u; return; } if (c.pc != 0x0030C5F4u) [[unlikely]] return; }
L_0030C5F4:
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[29].w[0] + 160u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 16u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030C60Cu); st8((c.r[18].w[0] + 25u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_000C(c, 52u, depth + 1u); else { c.pc = 0x00130530u; return; } if (c.pc != 0x0030C60Cu) [[unlikely]] return; }
L_0030C60C:
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[4], 0u + 2u);  if (t) { goto L_0030C654; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[4].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_0030C648; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0030C640; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0030C638; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 255u);  if (t) { goto L_0030C678; } }
L_0030C638:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 20u), 0u);  if (t) { goto L_0030C674; } }
L_0030C640:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 20u), c.r[4].w[0]);  if (t) { goto L_0030C674; } }
L_0030C648:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 20u), c.r[2].w[0]);  if (t) { goto L_0030C674; } }
L_0030C654:
    set32(c.r[2], 0u + 6u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 20u), c.r[2].w[0]);  if (t) { goto L_0030C674; } }
L_0030C660:
    set32(c.r[2], 0u + 118u);
    set32(c.r[18], c.r[19].w[0] + c.r[3].w[0]);
    st32((c.r[18].w[0] + 28u), c.r[2].w[0]);
    st8((c.r[18].w[0] + 25u), static_cast<std::uint8_t>(c.r[17].w[0]));
    st32((c.r[18].w[0] + 20u), 0u);
    c.budget -= 5;
L_0030C674:
    set32(c.r[2], 0u + 255u);
    c.budget -= 1;
L_0030C678:
    set32(c.r[17], c.r[17].w[0] + 1u);
    st8((c.r[18].w[0] + 38u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[17].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].d[0] = c.r[17].sd[0] < c.r[30].sd[0] ? 1ull : 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0030C5DCu | kUnwind; return; } goto L_0030C5DC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[23], c.r[19].w[0] + 16u);  if (t) { goto L_0030C804; } }
L_0030C694:
    c.budget -= 2;
    { const bool t = c.r[21].sd[0] >= 0; c.r[4].d[0] = c.r[21].d[0] & 1ull;  if (t) { goto L_0030C6A8; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[3], 0u + 502u);  if (t) { goto L_0030C6AC; } }
    set32(c.r[4], c.r[4].w[0] - 2u);
    c.budget -= 1;
L_0030C6A8:
    set32(c.r[3], 0u + 502u);
    c.budget -= 1;
L_0030C6AC:
    set32(c.r[2], 0u + 512u);
    if (c.r[4].d[0] != 0) c.r[3].d[0] = c.r[2].d[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030C6BCu); c.r[17].d[0] = c.r[3].d[0] & 65535ull;  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x0030C6BCu) [[unlikely]] return; }
L_0030C6BC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.r[6].d[0] = ld8((c.r[1].w[0] - 25576u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030C6D4u); set32(c.r[4], c.r[29].w[0] + 192u);  if (depth < kMaxDepth) unit_008D(c, 319u, depth + 1u); else { c.pc = 0x00337A20u; return; } if (c.pc != 0x0030C6D4u) [[unlikely]] return; }
L_0030C6D4:
    set32(c.r[3], 0u + 118u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_0030C784; } }
    set32(c.r[5], ld32((c.r[19].w[0])));
    set32(c.r[4], c.r[29].w[0] + 704u);
    c.r[6].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030C6F4u); set32(c.r[7], c.r[29].w[0] + 732u);  if (depth < kMaxDepth) unit_008E(c, 241u, depth + 1u); else { c.pc = 0x0033A120u; return; } if (c.pc != 0x0030C6F4u) [[unlikely]] return; }
L_0030C6F4:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; set32(c.r[17], 0u + 118u);  if (t) { goto L_0030C708; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[29].w[0] + 732u)));  if (t) { goto L_0030C718; } }
L_0030C708:
    set32(c.r[2], c.r[2].w[0] << 5);
    set32(c.r[2], c.r[19].w[0] + c.r[2].w[0]);
    set32(c.r[17], ld32((c.r[2].w[0] + 28u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 732u)));
    c.budget -= 4;
L_0030C718:
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], c.r[3].w[0] << 5);  if (t) { goto L_0030C72C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0030C734; } }
L_0030C72C:
    set32(c.r[2], c.r[19].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 28u)));
    c.budget -= 2;
L_0030C734:
    st32((c.r[29].w[0] + 180u), c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 704u);
    st32((c.r[29].w[0] + 176u), c.r[17].w[0]);
    set32(c.r[5], c.r[29].w[0] + 224u);
    set32(c.r[2], ld32((c.r[19].w[0])));
    set32(c.r[6], c.r[29].w[0] + 192u);
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[29].w[0] + 184u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 188u), c.r[21].w[0]);
    set32(c.r[8], ld32((c.r[16].w[0] + 168u)));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030C764u); set32(c.r[9], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_008E(c, 38u, depth + 1u); else { c.pc = 0x003385C0u; return; } if (c.pc != 0x0030C764u) [[unlikely]] return; }
L_0030C764:
    c.r[22].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u + 118u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] != c.r[2].d[0]; set32(c.r[4], c.r[29].w[0] + 224u);  if (t) { goto L_0030C780; } }
    c.r[5].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030C780u); set32(c.r[6], c.r[29].w[0] + 192u);  if (depth < kMaxDepth) unit_008E(c, 63u, depth + 1u); else { c.pc = 0x00338A60u; return; } if (c.pc != 0x0030C780u) [[unlikely]] return; }
L_0030C780:
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0030C784:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[17].sd[0] < c.r[22].sd[0] ? 1ull : 0ull;  if (t) { goto L_0030C7D8; } }
L_0030C78C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[18], ld32((c.r[2].w[0] + 224u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030C7A0u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0082(c, 299u, depth + 1u); else { c.pc = 0x0030B080u; return; } if (c.pc != 0x0030C7A0u) [[unlikely]] return; }
L_0030C7A0:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0030C7D0; } }
    set32(c.r[2], c.r[21].w[0] << 5);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[4], c.r[23].w[0] + c.r[2].w[0]);
    set32(c.r[6], c.r[29].w[0] + 192u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030C7C4u); c.r[7].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_008E(c, 282u, depth + 1u); else { c.pc = 0x0033A870u; return; } if (c.pc != 0x0030C7C4u) [[unlikely]] return; }
L_0030C7C4:
    set32(c.r[2], ld32((c.r[29].w[0] + 208u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[19].w[0] + 4u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_0030C7E0; } }
L_0030C7D0:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].sd[0] < c.r[22].sd[0] ? 1ull : 0ull;
    c.budget -= 2;
L_0030C7D8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[17].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0030C78Cu | kUnwind; return; } goto L_0030C78C; } }
L_0030C7E0:
    c.r[2].d[0] = c.r[17].sd[0] < c.r[22].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[21].w[0] << 5);  if (t) { goto L_0030C800; } }
    set32(c.r[5], 0u + 50u);
    set32(c.r[4], c.r[23].w[0] + c.r[2].w[0]);
    set32(c.r[6], c.r[29].w[0] + 192u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030C800u); c.r[7].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_008E(c, 282u, depth + 1u); else { c.pc = 0x0033A870u; return; } if (c.pc != 0x0030C800u) [[unlikely]] return; }
L_0030C800:
    set32(c.r[21], c.r[21].w[0] + 1u);
    c.budget -= 1;
L_0030C804:
    c.r[2].d[0] = c.r[21].sd[0] < c.r[30].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0030C694u | kUnwind; return; } goto L_0030C694; } }
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[1].w[0] - 27616u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030C820u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0058(c, 37u, depth + 1u); else { c.pc = 0x00260310u; return; } if (c.pc != 0x0030C820u) [[unlikely]] return; }
L_0030C820:
    set32(c.r[4], c.r[29].w[0] + 704u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030C82Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008D(c, 214u, depth + 1u); else { c.pc = 0x00336760u; return; } if (c.pc != 0x0030C82Cu) [[unlikely]] return; }
L_0030C82C:
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
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 736u);  c.pc = t; return; }
L_0030C860:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030C87Cu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x0030C87Cu) [[unlikely]] return; }
L_0030C87C:
    set32(c.r[3], c.r[17].w[0] << 1);
    c.r[1].d[0] = 0ull | 40076ull;
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[6], 0u + 118u);
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    set32(c.r[5], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[4], 0u + 255u);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 13;
    { const bool t = 0ull == 0ull; set32(c.r[10], c.r[3].w[0] + c.r[1].w[0]);  if (t) { goto L_0030C8E8; } }
L_0030C8B0:
    set32(c.r[7], c.r[10].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[7].w[0] + 28u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[6].d[0];  if (t) { goto L_0030C8F4; } }
    c.r[3].d[0] = ld8((c.r[7].w[0] + 24u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[8], c.r[7].w[0] + 24u);  if (t) { goto L_0030C8D4; } }
    st8((c.r[8].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[7].w[0] + 16u), static_cast<std::uint8_t>(c.r[9].w[0]));
    c.budget -= 2;
L_0030C8D4:
    c.budget -= 2;
    { const bool t = c.r[9].d[0] != c.r[16].d[0];  if (t) { goto L_0030C8E4; } }
    st8((c.r[8].w[0]), static_cast<std::uint8_t>(0u));
    st8((c.r[7].w[0] + 16u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 2;
L_0030C8E4:
    set32(c.r[9], c.r[9].w[0] + 1u);
    c.budget -= 1;
L_0030C8E8:
    c.r[3].d[0] = c.r[9].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], c.r[9].w[0] << 5);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0030C8B0u | kUnwind; return; } goto L_0030C8B0; } }
L_0030C8F4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0030C910:
    set32(c.r[29], c.r[29].w[0] - 112u);
    set32(c.r[3], 0u + 118u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    set32(c.r[19], 0u - 1u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[19].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[17], c.r[21].w[0] + 12u);
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 17;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_0030C96C; } }
L_0030C954:
    set32(c.r[2], c.r[20].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 28u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0030C978; } }
    set32(c.r[16], c.r[16].w[0] + 1u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.budget -= 2;
L_0030C96C:
    c.r[2].d[0] = c.r[4].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[4].w[0] << 5);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0030C954u | kUnwind; return; } goto L_0030C954; } }
L_0030C978:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[20].w[0] + 16u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030C988u); set32(c.r[6], 0u + 192u);  if (depth < kMaxDepth) unit_0010(c, 107u, depth + 1u); else { c.pc = 0x001415A0u; return; } if (c.pc != 0x0030C988u) [[unlikely]] return; }
L_0030C988:
    set32(c.r[4], c.r[17].w[0] + 192u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030C994u); set32(c.r[5], 0u + 64u);  if (depth < kMaxDepth) unit_0010(c, 111u, depth + 1u); else { c.pc = 0x00141670u; return; } if (c.pc != 0x0030C994u) [[unlikely]] return; }
L_0030C994:
    set32(c.r[5], 0u + 6u);
    set32(c.r[4], 0u + 118u);
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], c.r[5].w[0] << 5);
    c.budget -= 4;
L_0030C9A4:
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    st32((c.r[2].w[0] + 12u), c.r[4].w[0]);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));
    st32((c.r[2].w[0] + 4u), 0u);
    st8((c.r[2].w[0] + 8u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[2].w[0] + 9u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.r[2].d[0] = c.r[5].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[5].w[0] << 5);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0030C9A4u | kUnwind; return; } goto L_0030C9A4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030C9D4u); set32(c.r[4], ld32((c.r[20].w[0])));  if (depth < kMaxDepth) unit_006E(c, 95u, depth + 1u); else { c.pc = 0x002B86C0u; return; } if (c.pc != 0x0030C9D4u) [[unlikely]] return; }
L_0030C9D4:
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[3], 0u + 3u);
    set32(c.r[4], 0u + 255u);
    set32(c.r[2], c.r[5].w[0] << 5);
    c.budget -= 4;
L_0030C9E4:
    set32(c.r[6], c.r[20].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = ld8((c.r[6].w[0] + 16u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[4].d[0]; c.r[1].d[0] = c.r[5].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;  if (t) { goto L_0030CA00; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0030CA00; } }
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 1;
L_0030CA00:
    set32(c.r[2], ld32((c.r[6].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_0030CA10; } }
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 1;
L_0030CA10:
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.r[2].d[0] = c.r[5].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[5].w[0] << 5);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0030C9E4u | kUnwind; return; } goto L_0030C9E4; } }
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[19].d[0] == c.r[2].d[0]; set32(c.r[3], c.r[21].w[0] + 12u);  if (t) { goto L_0030CA3C; } }
    set32(c.r[2], c.r[19].w[0] << 5);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(0u));
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[19].w[0]));
    c.budget -= 4;
L_0030CA3C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030CA44u); st16((c.r[21].w[0] + 2u), static_cast<std::uint16_t>(c.r[19].w[0]));  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x0030CA44u) [[unlikely]] return; }
L_0030CA44:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[3], 0u - 1u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] - 25572u)));
    st16((c.r[21].w[0] + 4u), static_cast<std::uint16_t>(c.r[4].w[0]));
    set32(c.r[4], ld32((c.r[20].w[0])));
    st8((c.r[21].w[0] + 268u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].d[0] = ld16((c.r[20].w[0] + 6u));
    c.budget -= 10;
    { const bool t = c.r[18].d[0] == c.r[3].d[0]; st16((c.r[21].w[0] + 6u), static_cast<std::uint16_t>(c.r[4].w[0]));  if (t) { goto L_0030CA98; } }
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == c.r[3].d[0]; set32(c.r[4], c.r[19].w[0] << 5);  if (t) { goto L_0030CA98; } }
    set32(c.r[3], c.r[18].w[0] << 5);
    set32(c.r[4], c.r[4].w[0] + c.r[20].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[20].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 25u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 25u)));
    c.r[3].d[0] = c.r[4].d[0] ^ c.r[3].d[0];
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st16((c.r[21].w[0] + 6u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_0030CAA0; } }
L_0030CA98:
    set32(c.r[3], 0u + 1u);
    st16((c.r[21].w[0] + 6u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 2;
L_0030CAA0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_0030CAD0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030CAE8u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_000B(c, 79u, depth + 1u); else { c.pc = 0x0012CB20u; return; } if (c.pc != 0x0030CAE8u) [[unlikely]] return; }
L_0030CAE8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030CAF0u); c.r[4].d[0] = ld8((c.r[2].w[0]));  if (depth < kMaxDepth) unit_000C(c, 51u, depth + 1u); else { c.pc = 0x00130510u; return; } if (c.pc != 0x0030CAF0u) [[unlikely]] return; }
L_0030CAF0:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030CAFCu); c.r[17].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 79u, depth + 1u); else { c.pc = 0x0012CB20u; return; } if (c.pc != 0x0030CAFCu) [[unlikely]] return; }
L_0030CAFC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030CB04u); c.r[4].d[0] = ld8((c.r[2].w[0]));  if (depth < kMaxDepth) unit_008D(c, 238u, depth + 1u); else { c.pc = 0x00336B70u; return; } if (c.pc != 0x0030CB04u) [[unlikely]] return; }
L_0030CB04:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030CB0Cu); c.r[16].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 22u)));  if (depth < kMaxDepth) unit_000B(c, 79u, depth + 1u); else { c.pc = 0x0012CB20u; return; } if (c.pc != 0x0030CB0Cu) [[unlikely]] return; }
L_0030CB0C:
    set32(c.r[4], 0u + 13u);
    set32(c.r[3], c.r[2].w[0] + 256u);
    c.budget -= 4;
    { const bool t = c.r[18].d[0] == c.r[4].d[0]; set32(c.r[7], 0u - 1u);  if (t) { goto L_0030CB60; } }
    set32(c.r[4], 0u + 12u);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == c.r[4].d[0]; set32(c.r[4], 0u + 10u);  if (t) { goto L_0030CB60; } }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == c.r[4].d[0];  if (t) { goto L_0030CB60; } }
    set32(c.r[4], 0u + 8u);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == c.r[4].d[0]; set32(c.r[4], 0u + 7u);  if (t) { goto L_0030CB60; } }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == c.r[4].d[0];  if (t) { goto L_0030CB60; } }
    set32(c.r[4], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == c.r[4].d[0]; set32(c.r[4], 0u + 2u);  if (t) { goto L_0030CB60; } }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == c.r[4].d[0];  if (t) { goto L_0030CB60; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[17].d[0] & 255ull;  if (t) { goto L_0030CB68; } }
L_0030CB60:
    c.r[17].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.r[4].d[0] = c.r[17].d[0] & 255ull;
    c.budget -= 2;
L_0030CB68:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; c.r[8].d[0] = 0ull + 0ull;  if (t) { goto L_0030CC60; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], 0u + 25500u);  if (t) { goto L_0030CBAC; } }
L_0030CB78:
    set32(c.r[6], c.r[3].w[0] + c.r[4].w[0]);
    c.r[4].d[0] = ld16((c.r[6].w[0] + 10u));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[5].d[0]; c.r[11].d[0] = c.r[7].d[0] << 56;  if (t) { goto L_0030CBBC; } }
    set32(c.r[4], ld32((c.r[6].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_0030CBB8; } }
    c.r[4].d[0] = ld8((c.r[6].w[0] + 8u));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_0030CBA8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 9u)));  if (t) { goto L_0030CBB8; } }
L_0030CBA8:
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.budget -= 1;
L_0030CBAC:
    c.r[4].d[0] = c.r[8].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[4], c.r[8].w[0] << 5);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0030CB78u | kUnwind; return; } goto L_0030CB78; } }
L_0030CBB8:
    c.r[11].d[0] = c.r[7].d[0] << 56;
    c.budget -= 1;
L_0030CBBC:
    c.r[8].d[0] = 0ull + 0ull;
    c.r[11].d[0] = static_cast<std::uint64_t>(c.r[11].sd[0] >> 56);
    set32(c.r[6], 0u + 100u);
    set32(c.r[7], 0u + 25500u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; set32(c.r[5], 0u + 53u);  if (t) { goto L_0030CC54; } }
L_0030CBD4:
    set32(c.r[9], c.r[3].w[0] + c.r[4].w[0]);
    c.r[10].d[0] = ld16((c.r[9].w[0] + 10u));
    c.budget -= 4;
    { const bool t = c.r[10].d[0] == c.r[7].d[0];  if (t) { goto L_0030CC60; } }
    set32(c.r[4], ld32((c.r[9].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[4], c.r[10].w[0] - 10000u);  if (t) { goto L_0030CC60; } }
    c.budget -= 2;
    { const bool t = c.r[4].sd[0] < 0;  if (t) { goto L_0030CC10; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != 0ull; mmi::div(c, 0, c.r[4].w[0], c.r[6].w[0]);  if (t) { goto L_0030CC04; } }
    breakpoint(c, 0x0030CC00u);
    c.budget -= 1;
L_0030CC04:
    c.r[4].d[0] = c.lo.d[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0030CC14; } }
L_0030CC10:
    set32(c.r[4], 0u - 1u);
    c.budget -= 1;
L_0030CC14:
    c.budget -= 2;
    { const bool t = c.r[4].sd[0] < 0;  if (t) { goto L_0030CC24; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[4].w[0] + 86u);  if (t) { goto L_0030CC34; } }
L_0030CC24:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != 0ull; mmi::div(c, 0, c.r[10].w[0], c.r[6].w[0]);  if (t) { goto L_0030CC30; } }
    breakpoint(c, 0x0030CC2Cu);
    c.budget -= 1;
L_0030CC30:
    c.r[4].d[0] = c.lo.d[0];
    c.budget -= 1;
L_0030CC34:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[5].d[0];  if (t) { goto L_0030CC50; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[9].w[0] + 9u)));
    c.budget -= 3;
    { const bool t = c.r[11].d[0] != c.r[4].d[0];  if (t) { goto L_0030CC50; } }
    st8((c.r[9].w[0] + 8u), static_cast<std::uint8_t>(0u));
    st8((c.r[9].w[0]), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_0030CC50:
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.budget -= 1;
L_0030CC54:
    c.r[4].d[0] = c.r[8].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[4], c.r[8].w[0] << 5);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0030CBD4u | kUnwind; return; } goto L_0030CBD4; } }
L_0030CC60:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0030CC80:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[18], 0u + 118u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030CCA8u); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x0030CCA8u) [[unlikely]] return; }
L_0030CCA8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030CCB0u); c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0054(c, 366u, depth + 1u); else { c.pc = 0x00252540u; return; } if (c.pc != 0x0030CCB0u) [[unlikely]] return; }
L_0030CCB0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[17].w[0] + c.r[1].w[0]);
    set32(c.r[4], ld32((c.r[1].w[0] - 25584u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030CCC4u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0083(c, 235u, depth + 1u); else { c.pc = 0x0030E270u; return; } if (c.pc != 0x0030CCC4u) [[unlikely]] return; }
L_0030CCC4:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_0030CCD8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = c.r[3].d[0] + 0ull;  if (t) { goto L_0030CDD4; } }
L_0030CCD8:
    set32(c.r[3], c.r[2].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[17], c.r[2].w[0] + 4u);
    c.r[2].d[0] = ld16((c.r[2].w[0] + 16u));
    set32(c.r[2], c.r[2].w[0] << 5);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030CD08u); set32(c.r[16], ld32((c.r[2].w[0] + 28u)));  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x0030CD08u) [[unlikely]] return; }
L_0030CD08:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[7], 0u - 1u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    set32(c.r[6], 0u - 2u);
    set32(c.r[8], ld32((c.r[1].w[0] - 25584u)));
    c.r[9].d[0] = 0ull + 0ull;
    c.r[3].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[2], c.r[9].w[0] << 5);
    c.budget -= 8;
L_0030CD28:
    set32(c.r[5], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[5].w[0] + 28u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0030CD5C; } }
    set32(c.r[2], ld32((c.r[5].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0030CD5C; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[16].d[0];  if (t) { goto L_0030CD50; } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 25u)));
    c.budget -= 1;
L_0030CD50:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[8].d[0];  if (t) { goto L_0030CD5C; } }
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 25u)));
    c.budget -= 1;
L_0030CD5C:
    set32(c.r[9], c.r[9].w[0] + 1u);
    c.r[2].d[0] = c.r[9].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[9].w[0] << 5);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0030CD28u | kUnwind; return; } goto L_0030CD28; } }
    c.r[3].d[0] = c.r[7].d[0] << 56;
    c.r[2].d[0] = c.r[6].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0030CDA4; } }
    c.r[3].d[0] = ld16((c.r[17].w[0] + 14u));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 118u);  if (t) { goto L_0030CDC0; } }
    set32(c.r[2], c.r[3].w[0] << 5);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[18], ld32((c.r[2].w[0] + 28u)));  if (t) { goto L_0030CDBC; } }
L_0030CDA4:
    c.r[3].d[0] = ld16((c.r[17].w[0] + 12u));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], c.r[3].w[0] << 5);  if (t) { goto L_0030CDBC; } }
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[18], ld32((c.r[2].w[0] + 28u)));
    c.budget -= 2;
L_0030CDBC:
    set32(c.r[2], 0u + 118u);
    c.budget -= 1;
L_0030CDC0:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == c.r[2].d[0];  if (t) { goto L_0030CDD0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_0030CDD8; } }
L_0030CDD0:
    set32(c.r[18], 0u - 1u);
    c.budget -= 1;
L_0030CDD4:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_0030CDD8:
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030CDE4u); set32(c.r[5], 0u + 720u);  if (depth < kMaxDepth) unit_0058(c, 37u, depth + 1u); else { c.pc = 0x00260310u; return; } if (c.pc != 0x0030CDE4u) [[unlikely]] return; }
L_0030CDE4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0030CE00:
    set32(c.r[29], c.r[29].w[0] - 736u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030CE38u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_000B(c, 79u, depth + 1u); else { c.pc = 0x0012CB20u; return; } if (c.pc != 0x0030CE38u) [[unlikely]] return; }
L_0030CE38:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], 0u + 255u);
    set32(c.r[2], 0u - 1u);
    st32((c.r[29].w[0] + 732u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 176u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 176u)));
    st32((c.r[29].w[0] + 728u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 160u), c.r[2].w[0]);
    c.r[4].d[0] = ld8((c.r[20].w[0] + 268u));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030CE64u); c.r[18].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_008D(c, 238u, depth + 1u); else { c.pc = 0x00336B70u; return; } if (c.pc != 0x0030CE64u) [[unlikely]] return; }
L_0030CE64:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 688u)));
    set32(c.r[3], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; c.r[23].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 22u)));  if (t) { goto L_0030CE90; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030CE7Cu); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_008E(c, 291u, depth + 1u); else { c.pc = 0x0033A990u; return; } if (c.pc != 0x0030CE7Cu) [[unlikely]] return; }
L_0030CE7C:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 688u)));
    st32((c.r[29].w[0] + 208u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 689u)));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 192u), c.r[2].w[0]);  if (t) { goto L_0030CEC0; } }
L_0030CE90:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 689u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0030CEA4; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { goto L_0030CEB0; } }
L_0030CEA4:
    c.r[2].d[0] = c.r[4].d[0] ^ 0ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    st8((c.r[19].w[0] + 689u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
L_0030CEB0:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 688u)));
    st32((c.r[29].w[0] + 208u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 689u)));
    st32((c.r[29].w[0] + 192u), c.r[2].w[0]);
    c.budget -= 4;
L_0030CEC0:
    c.budget -= 2;
    { const bool t = c.r[21].d[0] == 0ull; set32(c.r[4], c.r[29].w[0] + 732u);  if (t) { goto L_0030CED8; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 208u)));
    st16((c.r[21].w[0] + 12u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[29].w[0] + 192u)));
    st16((c.r[21].w[0] + 14u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 4;
L_0030CED8:
    set32(c.r[5], c.r[29].w[0] + 728u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030CEE4u); set32(c.r[6], c.r[20].w[0] + 12u);  if (depth < kMaxDepth) unit_008E(c, 392u, depth + 1u); else { c.pc = 0x0033BA00u; return; } if (c.pc != 0x0030CEE4u) [[unlikely]] return; }
L_0030CEE4:
    c.r[3].d[0] = ld8((c.r[20].w[0] + 268u));
    set32(c.r[2], 0u + 13u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 255u);  if (t) { goto L_0030D218; } }
    st32((c.r[29].w[0] + 732u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030CF00u); st32((c.r[29].w[0] + 728u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000B(c, 79u, depth + 1u); else { c.pc = 0x0012CB20u; return; } if (c.pc != 0x0030CF00u) [[unlikely]] return; }
L_0030CF00:
    set32(c.r[3], ld32((c.r[29].w[0] + 208u)));
    set32(c.r[3], c.r[3].w[0] << 5);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[4].d[0] = ld16((c.r[2].w[0] + 266u));
    set32(c.r[3], c.r[4].w[0] - 10000u);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] < 0;  if (t) { goto L_0030CF38; } }
    set32(c.r[2], 0u + 100u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);  if (t) { goto L_0030CF2C; } }
    breakpoint(c, 0x0030CF28u);
    c.budget -= 1;
L_0030CF2C:
    c.r[2].d[0] = c.lo.d[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0030CF3C; } }
L_0030CF38:
    set32(c.r[2], 0u - 1u);
    c.budget -= 1;
L_0030CF3C:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0; c.r[3].d[0] = c.r[4].d[0] & 65535ull;  if (t) { goto L_0030CF4C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[2].w[0] + 86u);  if (t) { goto L_0030CF60; } }
L_0030CF4C:
    set32(c.r[2], 0u + 100u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);  if (t) { goto L_0030CF5C; } }
    breakpoint(c, 0x0030CF58u);
    c.budget -= 1;
L_0030CF5C:
    c.r[16].d[0] = c.lo.d[0];
    c.budget -= 1;
L_0030CF60:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[5], 0u + 174u);
    set32(c.r[4], ld32((c.r[1].w[0] - 27616u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030CF74u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0058(c, 37u, depth + 1u); else { c.pc = 0x00260310u; return; } if (c.pc != 0x0030CF74u) [[unlikely]] return; }
L_0030CF74:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030CF7Cu);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x0030CF7Cu) [[unlikely]] return; }
L_0030CF7C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030CF8Cu); set32(c.r[17], ld32((c.r[1].w[0] - 25584u)));  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x0030CF8Cu) [[unlikely]] return; }
L_0030CF8C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.r[2].d[0] = ld16((c.r[1].w[0] - 24836u));
    c.budget -= 5;
    { const bool t = c.r[17].d[0] == c.r[2].d[0]; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0030CFD0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030CFA8u);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x0030CFA8u) [[unlikely]] return; }
L_0030CFA8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030CFB8u); set32(c.r[17], ld32((c.r[1].w[0] - 25584u)));  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x0030CFB8u) [[unlikely]] return; }
L_0030CFB8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.r[2].d[0] = ld16((c.r[1].w[0] - 24834u));
    c.budget -= 5;
    { const bool t = c.r[17].d[0] != c.r[2].d[0]; c.r[22].d[0] = 0ull + 0ull;  if (t) { goto L_0030D034; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0030CFD0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030CFD8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 104u, depth + 1u); else { c.pc = 0x0012CEC0u; return; } if (c.pc != 0x0030CFD8u) [[unlikely]] return; }
L_0030CFD8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030CFE0u); c.r[17].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 353u)));  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x0030CFE0u) [[unlikely]] return; }
L_0030CFE0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] - 25571u)));
    c.budget -= 5;
    { const bool t = c.r[17].d[0] == c.r[2].d[0];  if (t) { goto L_0030D030; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030CFFCu);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x0030CFFCu) [[unlikely]] return; }
L_0030CFFC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[5], 0u + 1u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[1].w[0] - 25584u)));
    set32(c.r[6], c.r[29].w[0] + 724u);
    c.r[7].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030D020u); st32((c.r[29].w[0] + 724u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0083(c, 329u, depth + 1u); else { c.pc = 0x0030F040u; return; } if (c.pc != 0x0030D020u) [[unlikely]] return; }
L_0030D020:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030D030u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0083(c, 402u, depth + 1u); else { c.pc = 0x0030F9C0u; return; } if (c.pc != 0x0030D030u) [[unlikely]] return; }
L_0030D030:
    c.r[22].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0030D034:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030D03Cu); set32(c.r[16], c.r[22].w[0] << 5);  if (depth < kMaxDepth) unit_000B(c, 79u, depth + 1u); else { c.pc = 0x0012CB20u; return; } if (c.pc != 0x0030D03Cu) [[unlikely]] return; }
L_0030D03C:
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.r[4].d[0] = ld16((c.r[2].w[0] + 266u));
    set32(c.r[3], c.r[4].w[0] - 10000u);
    c.budget -= 5;
    { const bool t = c.r[3].sd[0] < 0;  if (t) { goto L_0030D06C; } }
    set32(c.r[2], 0u + 100u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);  if (t) { goto L_0030D060; } }
    breakpoint(c, 0x0030D05Cu);
    c.budget -= 1;
L_0030D060:
    c.r[2].d[0] = c.lo.d[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0030D070; } }
L_0030D06C:
    set32(c.r[2], 0u - 1u);
    c.budget -= 1;
L_0030D070:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0; c.r[3].d[0] = c.r[4].d[0] & 65535ull;  if (t) { goto L_0030D080; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[2].w[0] + 86u);  if (t) { goto L_0030D094; } }
L_0030D080:
    set32(c.r[2], 0u + 100u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);  if (t) { goto L_0030D090; } }
    breakpoint(c, 0x0030D08Cu);
    c.budget -= 1;
L_0030D090:
    c.r[17].d[0] = c.lo.d[0];
    c.budget -= 1;
L_0030D094:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], ld32((c.r[1].w[0] - 27616u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030D0A4u); set32(c.r[5], 0u + 310u);  if (depth < kMaxDepth) unit_0058(c, 46u, depth + 1u); else { c.pc = 0x00260440u; return; } if (c.pc != 0x0030D0A4u) [[unlikely]] return; }
L_0030D0A4:
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[17].d[0];  if (t) { goto L_0030D0C0; } }
    st8((c.r[19].w[0] + 689u), static_cast<std::uint8_t>(c.r[22].w[0]));
    c.budget -= 3;
    { const bool t = c.r[21].d[0] == 0ull; st32((c.r[29].w[0] + 192u), c.r[22].w[0]);  if (t) { goto L_0030D0C0; } }
    st16((c.r[21].w[0] + 14u), static_cast<std::uint16_t>(c.r[22].w[0]));
    c.budget -= 1;
L_0030D0C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030D0C8u);  if (depth < kMaxDepth) unit_000B(c, 79u, depth + 1u); else { c.pc = 0x0012CB20u; return; } if (c.pc != 0x0030D0C8u) [[unlikely]] return; }
L_0030D0C8:
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[17], c.r[20].w[0] + c.r[16].w[0]);
    c.r[2].d[0] = ld8((c.r[2].w[0] + 256u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030D0DCu); st8((c.r[17].w[0] + 12u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_000B(c, 79u, depth + 1u); else { c.pc = 0x0012CB20u; return; } if (c.pc != 0x0030D0DCu) [[unlikely]] return; }
L_0030D0DC:
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 260u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030D0ECu); st32((c.r[17].w[0] + 16u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000B(c, 79u, depth + 1u); else { c.pc = 0x0012CB20u; return; } if (c.pc != 0x0030D0ECu) [[unlikely]] return; }
L_0030D0EC:
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.r[2].d[0] = ld8((c.r[2].w[0] + 264u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030D0FCu); st8((c.r[17].w[0] + 20u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_000B(c, 79u, depth + 1u); else { c.pc = 0x0012CB20u; return; } if (c.pc != 0x0030D0FCu) [[unlikely]] return; }
L_0030D0FC:
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 265u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030D10Cu); st8((c.r[17].w[0] + 21u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_000B(c, 79u, depth + 1u); else { c.pc = 0x0012CB20u; return; } if (c.pc != 0x0030D10Cu) [[unlikely]] return; }
L_0030D10C:
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.r[4].d[0] = ld16((c.r[2].w[0] + 266u));
    set32(c.r[3], c.r[4].w[0] - 10000u);
    c.budget -= 5;
    { const bool t = c.r[3].sd[0] < 0;  if (t) { goto L_0030D13C; } }
    set32(c.r[2], 0u + 100u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);  if (t) { goto L_0030D130; } }
    breakpoint(c, 0x0030D12Cu);
    c.budget -= 1;
L_0030D130:
    c.r[2].d[0] = c.lo.d[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0030D140; } }
L_0030D13C:
    set32(c.r[2], 0u - 1u);
    c.budget -= 1;
L_0030D140:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0; c.r[3].d[0] = c.r[4].d[0] & 65535ull;  if (t) { goto L_0030D150; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] + 86u);  if (t) { goto L_0030D164; } }
L_0030D150:
    set32(c.r[2], 0u + 100u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);  if (t) { goto L_0030D160; } }
    breakpoint(c, 0x0030D15Cu);
    c.budget -= 1;
L_0030D160:
    c.r[2].d[0] = c.lo.d[0];
    c.budget -= 1;
L_0030D164:
    set32(c.r[17], c.r[20].w[0] + c.r[16].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030D170u); st32((c.r[17].w[0] + 24u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000B(c, 79u, depth + 1u); else { c.pc = 0x0012CB20u; return; } if (c.pc != 0x0030D170u) [[unlikely]] return; }
L_0030D170:
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 268u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030D180u); st8((c.r[17].w[0] + 28u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_000B(c, 79u, depth + 1u); else { c.pc = 0x0012CB20u; return; } if (c.pc != 0x0030D180u) [[unlikely]] return; }
L_0030D180:
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 269u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030D190u); st8((c.r[17].w[0] + 29u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_000B(c, 79u, depth + 1u); else { c.pc = 0x0012CB20u; return; } if (c.pc != 0x0030D190u) [[unlikely]] return; }
L_0030D190:
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[4], c.r[17].w[0] + 30u);
    set32(c.r[5], c.r[2].w[0] + 270u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030D1A4u); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_0010(c, 107u, depth + 1u); else { c.pc = 0x001415A0u; return; } if (c.pc != 0x0030D1A4u) [[unlikely]] return; }
L_0030D1A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030D1ACu);  if (depth < kMaxDepth) unit_000B(c, 79u, depth + 1u); else { c.pc = 0x0012CB20u; return; } if (c.pc != 0x0030D1ACu) [[unlikely]] return; }
L_0030D1AC:
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.r[2].d[0] = ld8((c.r[2].w[0] + 274u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030D1BCu); st8((c.r[17].w[0] + 34u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_000B(c, 79u, depth + 1u); else { c.pc = 0x0012CB20u; return; } if (c.pc != 0x0030D1BCu) [[unlikely]] return; }
L_0030D1BC:
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 275u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030D1CCu); st8((c.r[17].w[0] + 35u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_000B(c, 79u, depth + 1u); else { c.pc = 0x0012CB20u; return; } if (c.pc != 0x0030D1CCu) [[unlikely]] return; }
L_0030D1CC:
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 276u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030D1DCu); st16((c.r[17].w[0] + 36u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_000B(c, 79u, depth + 1u); else { c.pc = 0x0012CB20u; return; } if (c.pc != 0x0030D1DCu) [[unlikely]] return; }
L_0030D1DC:
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 278u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030D1ECu); st16((c.r[17].w[0] + 38u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_000B(c, 79u, depth + 1u); else { c.pc = 0x0012CB20u; return; } if (c.pc != 0x0030D1ECu) [[unlikely]] return; }
L_0030D1EC:
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[22], c.r[22].w[0] + 1u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 286u)));
    c.r[2].d[0] = c.r[22].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; st8((c.r[17].w[0] + 40u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0030D034u | kUnwind; return; } goto L_0030D034; } }
    c.budget -= 2;
    { const bool t = c.r[21].d[0] == 0ull; set32(c.r[4], c.r[21].w[0] + 16u);  if (t) { goto L_0030D218; } }
    set32(c.r[5], c.r[20].w[0] + 12u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030D218u); set32(c.r[6], 0u + 192u);  if (depth < kMaxDepth) unit_0010(c, 107u, depth + 1u); else { c.pc = 0x001415A0u; return; } if (c.pc != 0x0030D218u) [[unlikely]] return; }
L_0030D218:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030D220u);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x0030D220u) [[unlikely]] return; }
L_0030D220:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] - 25573u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030D234u); st8((c.r[29].w[0] + 448u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x0030D234u) [[unlikely]] return; }
L_0030D234:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[3], ld32((c.r[29].w[0] + 732u)));
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] - 25575u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 728u)));
    st8((c.r[29].w[0] + 449u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st32((c.r[29].w[0] + 452u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 456u), c.r[2].w[0]);
    c.r[2].d[0] = ld8((c.r[20].w[0] + 268u));
    st32((c.r[29].w[0] + 460u), c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[19].w[0] + 600u)));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030D268u); c.r[4].d[0] = ld8((c.r[20].w[0] + 268u));  if (depth < kMaxDepth) unit_006E(c, 111u, depth + 1u); else { c.pc = 0x002B8900u; return; } if (c.pc != 0x0030D268u) [[unlikely]] return; }
L_0030D268:
    st32((c.r[29].w[0] + 464u), c.r[2].w[0]);
    c.r[3].d[0] = ld8((c.r[20].w[0] + 268u));
    set32(c.r[2], 0u + 71u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);  if (t) { goto L_0030D318; } }
    set32(c.r[4], ld32((c.r[1].w[0] - 27616u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030D288u); set32(c.r[5], 0u + 420u);  if (depth < kMaxDepth) unit_0058(c, 46u, depth + 1u); else { c.pc = 0x00260440u; return; } if (c.pc != 0x0030D288u) [[unlikely]] return; }
L_0030D288:
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], ld32((c.r[1].w[0] - 27616u)));
    set32(c.r[5], 0u + 421u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030D2A0u); st32((c.r[29].w[0] + 648u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0058(c, 46u, depth + 1u); else { c.pc = 0x00260440u; return; } if (c.pc != 0x0030D2A0u) [[unlikely]] return; }
L_0030D2A0:
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], ld32((c.r[1].w[0] - 27616u)));
    set32(c.r[5], 0u + 422u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030D2B8u); st32((c.r[29].w[0] + 652u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0058(c, 46u, depth + 1u); else { c.pc = 0x00260440u; return; } if (c.pc != 0x0030D2B8u) [[unlikely]] return; }
L_0030D2B8:
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    c.r[16].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 656u), c.r[2].w[0]);
    set32(c.r[6], c.r[19].w[0] + c.r[16].w[0]);
    c.budget -= 4;
L_0030D2C8:
    set32(c.r[2], c.r[16].w[0] + c.r[29].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 710u)));
    set32(c.r[5], c.r[2].w[0] + 448u);
    set32(c.r[2], c.r[16].w[0] << 2);
    set32(c.r[3], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[17], c.r[3].w[0] + 448u);
    set32(c.r[2], c.r[19].w[0] + c.r[2].w[0]);
    st8((c.r[5].w[0] + 224u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 713u)));
    st8((c.r[5].w[0] + 227u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[4], ld32((c.r[17].w[0] + 200u)));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030D2FCu); set32(c.r[5], ld32((c.r[2].w[0] + 716u)));  if (depth < kMaxDepth) unit_006E(c, 111u, depth + 1u); else { c.pc = 0x002B8900u; return; } if (c.pc != 0x0030D2FCu) [[unlikely]] return; }
L_0030D2FC:
    st32((c.r[17].w[0] + 212u), c.r[2].w[0]);
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[6], c.r[19].w[0] + c.r[16].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0030D2C8u | kUnwind; return; } goto L_0030D2C8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 680u), c.r[16].w[0]);  if (t) { goto L_0030D320; } }
L_0030D318:
    set32(c.r[2], 0u + 1u);
    st32((c.r[29].w[0] + 680u), c.r[2].w[0]);
    c.budget -= 2;
L_0030D320:
    c.r[16].d[0] = 0ull + 0ull;
    c.r[1].d[0] = c.r[16].sd[0] < c.r[23].sd[0] ? 1ull : 0ull;
    c.budget -= 2;
L_0030D328:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[2], c.r[16].w[0] << 2);  if (t) { goto L_0030D394; } }
    set32(c.r[3], c.r[16].w[0] << 5);
    set32(c.r[2], c.r[16].w[0] << 2);
    set32(c.r[6], c.r[20].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[6].w[0] + 24u)));
    set32(c.r[3], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[2], c.r[16].w[0] + c.r[29].w[0]);
    set32(c.r[5], c.r[6].w[0] + 24u);
    st32((c.r[3].w[0] + 468u), c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 21u)));
    st8((c.r[2].w[0] + 492u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[6].w[0] + 16u)));
    c.budget -= 13;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[17], c.r[6].w[0] + 21u);  if (t) { goto L_0030D3AC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030D36Cu); set32(c.r[22], ld32((c.r[5].w[0])));  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x0030D36Cu) [[unlikely]] return; }
L_0030D36C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    set32(c.r[2], ld32((c.r[1].w[0] - 25584u)));
    c.budget -= 5;
    { const bool t = c.r[22].d[0] != c.r[2].d[0];  if (t) { goto L_0030D38C; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    st32((c.r[29].w[0] + 160u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 176u), c.r[16].w[0]);
    c.budget -= 3;
L_0030D38C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[18], c.r[18].w[0] + 1u);  if (t) { goto L_0030D3AC; } }
L_0030D394:
    set32(c.r[4], 0u + 118u);
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[3], 0u + 255u);
    st32((c.r[2].w[0] + 468u), c.r[4].w[0]);
    set32(c.r[2], c.r[16].w[0] + c.r[29].w[0]);
    st8((c.r[2].w[0] + 492u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 6;
L_0030D3AC:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].d[0] = c.r[16].sd[0] < c.r[23].sd[0] ? 1ull : 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0030D328u | kUnwind; return; } goto L_0030D328; } }
    set32(c.r[4], c.r[29].w[0] + 498u);
    set32(c.r[5], c.r[19].w[0] + 728u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030D3CCu); set32(c.r[6], 0u + 144u);  if (depth < kMaxDepth) unit_0010(c, 107u, depth + 1u); else { c.pc = 0x001415A0u; return; } if (c.pc != 0x0030D3CCu) [[unlikely]] return; }
L_0030D3CC:
    st32((c.r[29].w[0] + 644u), c.r[18].w[0]);
    set32(c.r[2], c.r[29].w[0] + 642u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 688u)));
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 689u)));
    st8((c.r[29].w[0] + 643u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 688u)));
    set32(c.r[2], c.r[2].w[0] << 5);
    set32(c.r[2], c.r[2].w[0] + c.r[20].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 21u)));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030D3FCu); st32((c.r[29].w[0] + 224u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_006D(c, 225u, depth + 1u); else { c.pc = 0x002B6350u; return; } if (c.pc != 0x0030D3FCu) [[unlikely]] return; }
L_0030D3FC:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030D408u); set32(c.r[5], c.r[29].w[0] + 448u);  if (depth < kMaxDepth) unit_006D(c, 252u, depth + 1u); else { c.pc = 0x002B66B0u; return; } if (c.pc != 0x0030D408u) [[unlikely]] return; }
L_0030D408:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[3], c.r[29].w[0] + 712u);
    set32(c.r[2], c.r[2].w[0] - 7200u);
    c.r[22].d[0] = 0ull + 0ull;
    c.r[2].d[0] = ld64((c.r[2].w[0]));
    st64((c.r[3].w[0]), c.r[2].d[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0])));
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull; c.r[23].d[0] = 0ull + 0ull;  if (t) { goto L_0030D48C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030D434u); set32(c.r[4], c.r[29].w[0] + 720u);  if (depth < kMaxDepth) unit_009C(c, 217u, depth + 1u); else { c.pc = 0x003716D0u; return; } if (c.pc != 0x0030D434u) [[unlikely]] return; }
L_0030D434:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[1].w[0] - 27616u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030D448u); set32(c.r[5], 0u + 400u);  if (depth < kMaxDepth) unit_0058(c, 46u, depth + 1u); else { c.pc = 0x00260440u; return; } if (c.pc != 0x0030D448u) [[unlikely]] return; }
L_0030D448:
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], ld32((c.r[1].w[0] - 27616u)));
    set32(c.r[5], 0u + 400u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030D460u); set32(c.r[6], c.r[16].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_0058(c, 37u, depth + 1u); else { c.pc = 0x00260310u; return; } if (c.pc != 0x0030D460u) [[unlikely]] return; }
L_0030D460:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], ld32((c.r[1].w[0] - 27616u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030D470u); set32(c.r[5], 0u + 401u);  if (depth < kMaxDepth) unit_0058(c, 46u, depth + 1u); else { c.pc = 0x00260440u; return; } if (c.pc != 0x0030D470u) [[unlikely]] return; }
L_0030D470:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 720u)));
    set32(c.r[5], 0u + 401u);
    set32(c.r[4], ld32((c.r[1].w[0] - 27616u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030D48Cu); set32(c.r[6], c.r[3].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_0058(c, 37u, depth + 1u); else { c.pc = 0x00260310u; return; } if (c.pc != 0x0030D48Cu) [[unlikely]] return; }
L_0030D48C:
    set32(c.r[3], ld32((c.r[29].w[0] + 732u)));
    set32(c.r[2], 0u + 255u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0030D840; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;  if (t) { goto L_0030D650; } }
L_0030D4A4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0030D4C4; } }
    set32(c.r[3], ld32((c.r[29].w[0] + 728u)));
    set32(c.r[2], 0u + 255u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[17].d[0] = c.r[3].d[0] & 255ull;  if (t) { goto L_0030D4C4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[29].w[0] + 642u);  if (t) { goto L_0030D4CC; } }
L_0030D4C4:
    c.r[17].d[0] = ld8((c.r[29].w[0] + 732u));
    set32(c.r[2], c.r[29].w[0] + 642u);
    c.budget -= 2;
L_0030D4CC:
    c.r[2].d[0] = ld8((c.r[2].w[0]));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[16].d[0]; set32(c.r[2], c.r[16].w[0] << 5);  if (t) { goto L_0030D56C; } }
    set32(c.r[3], c.r[16].w[0] << 5);
    c.r[2].d[0] = c.r[17].d[0] & 255ull;
    set32(c.r[4], c.r[20].w[0] + c.r[3].w[0]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 34u));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[5], c.r[4].w[0] + 34u);  if (t) { goto L_0030D4F4; } }
    c.r[23].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_0030D4F4:
    set32(c.r[2], c.r[22].w[0] << 2);
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[17].w[0]));
    set32(c.r[3], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[30], c.r[3].w[0] + 712u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030D510u); st32((c.r[30].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_006D(c, 225u, depth + 1u); else { c.pc = 0x002B6350u; return; } if (c.pc != 0x0030D510u) [[unlikely]] return; }
L_0030D510:
    set32(c.r[5], ld32((c.r[30].w[0])));
    c.r[6].d[0] = c.r[17].d[0] & 255ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030D520u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_006D(c, 337u, depth + 1u); else { c.pc = 0x002B7630u; return; } if (c.pc != 0x0030D520u) [[unlikely]] return; }
L_0030D520:
    c.r[3].d[0] = c.r[23].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0030D544; } }
    c.r[3].d[0] = ld8((c.r[2].w[0]));
    c.r[1].d[0] = c.r[3].sd[0] < 99ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0030D544; } }
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_0030D544:
    c.r[3].d[0] = ld8((c.r[2].w[0] + 2u));
    c.r[1].d[0] = c.r[3].sd[0] < 99ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0030D55C; } }
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_0030D55C:
    set32(c.r[3], 0u + 1u);
    set32(c.r[22], c.r[22].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0030D648; } }
L_0030D56C:
    set32(c.r[30], c.r[20].w[0] + c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[30].w[0] + 21u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 224u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0030D60C; } }
    c.r[3].d[0] = ld8((c.r[30].w[0] + 34u));
    c.r[2].d[0] = c.r[17].d[0] & 255ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[4], c.r[30].w[0] + 34u);  if (t) { goto L_0030D594; } }
    c.r[23].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_0030D594:
    set32(c.r[2], c.r[22].w[0] << 2);
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[17].w[0]));
    set32(c.r[3], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[2], ld32((c.r[30].w[0] + 24u)));
    set32(c.r[30], c.r[3].w[0] + 712u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030D5B0u); st32((c.r[30].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_006D(c, 225u, depth + 1u); else { c.pc = 0x002B6350u; return; } if (c.pc != 0x0030D5B0u) [[unlikely]] return; }
L_0030D5B0:
    set32(c.r[5], ld32((c.r[30].w[0])));
    c.r[6].d[0] = c.r[17].d[0] & 255ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030D5C0u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_006D(c, 337u, depth + 1u); else { c.pc = 0x002B7630u; return; } if (c.pc != 0x0030D5C0u) [[unlikely]] return; }
L_0030D5C0:
    c.r[3].d[0] = c.r[23].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0030D5E4; } }
    c.r[3].d[0] = ld8((c.r[2].w[0]));
    c.r[1].d[0] = c.r[3].sd[0] < 99ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0030D5E4; } }
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_0030D5E4:
    c.r[3].d[0] = ld8((c.r[2].w[0] + 2u));
    c.r[1].d[0] = c.r[3].sd[0] < 99ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0030D5FC; } }
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_0030D5FC:
    set32(c.r[3], 0u + 1u);
    set32(c.r[22], c.r[22].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0030D648; } }
L_0030D60C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030D614u);  if (depth < kMaxDepth) unit_006D(c, 225u, depth + 1u); else { c.pc = 0x002B6350u; return; } if (c.pc != 0x0030D614u) [[unlikely]] return; }
L_0030D614:
    set32(c.r[5], ld32((c.r[30].w[0] + 24u)));
    c.r[6].d[0] = c.r[17].d[0] & 255ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030D624u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_006D(c, 337u, depth + 1u); else { c.pc = 0x002B7630u; return; } if (c.pc != 0x0030D624u) [[unlikely]] return; }
L_0030D624:
    c.r[3].d[0] = ld8((c.r[2].w[0] + 3u));
    c.r[1].d[0] = c.r[3].sd[0] < 99ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0030D63C; } }
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_0030D63C:
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], 0u + 255u);
    st8((c.r[30].w[0] + 34u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
L_0030D648:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;
    c.budget -= 2;
L_0030D650:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = c.r[16].sd[0] < 2ll ? 1ull : 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0030D4A4u | kUnwind; return; } goto L_0030D4A4; } }
    set32(c.r[5], ld32((c.r[29].w[0] + 732u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[2].d[0]; c.r[1].d[0] = c.r[18].sd[0] < 4ll ? 1ull : 0ull;  if (t) { goto L_0030D674; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_0030D7E8; } }
L_0030D674:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_0030D7E8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[4].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;  if (t) { goto L_0030D6A0; } }
L_0030D684:
    set32(c.r[2], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[20].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 24u)));
    set32(c.r[4], c.r[4].w[0] + 1u);
    st32((c.r[2].w[0] + 696u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[4].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
L_0030D6A0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], c.r[4].w[0] << 5);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0030D684u | kUnwind; return; } goto L_0030D684; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_0030D710; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030D6BCu);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x0030D6BCu) [[unlikely]] return; }
L_0030D6BC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[5], c.r[29].w[0] + 696u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.r[4].d[0] = ld16((c.r[1].w[0] - 24832u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030D6D4u); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_008E(c, 61u, depth + 1u); else { c.pc = 0x00338A00u; return; } if (c.pc != 0x0030D6D4u) [[unlikely]] return; }
L_0030D6D4:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0030D6F8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030D6E8u);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x0030D6E8u) [[unlikely]] return; }
L_0030D6E8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld16((c.r[1].w[0] - 24830u));  if (t) { goto L_0030D768; } }
L_0030D6F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030D700u);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x0030D700u) [[unlikely]] return; }
L_0030D700:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld16((c.r[1].w[0] - 24832u));  if (t) { goto L_0030D768; } }
L_0030D710:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030D718u);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x0030D718u) [[unlikely]] return; }
L_0030D718:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[5], c.r[29].w[0] + 696u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.r[4].d[0] = ld16((c.r[1].w[0] - 24828u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030D730u); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_008E(c, 61u, depth + 1u); else { c.pc = 0x00338A00u; return; } if (c.pc != 0x0030D730u) [[unlikely]] return; }
L_0030D730:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0030D754; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030D744u);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x0030D744u) [[unlikely]] return; }
L_0030D744:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld16((c.r[1].w[0] - 24826u));  if (t) { goto L_0030D768; } }
L_0030D754:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030D75Cu);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x0030D75Cu) [[unlikely]] return; }
L_0030D75C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.r[16].d[0] = ld16((c.r[1].w[0] - 24828u));
    c.budget -= 3;
L_0030D768:
    c.r[2].d[0] = c.r[23].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0030D7B4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030D77Cu);  if (depth < kMaxDepth) unit_006D(c, 225u, depth + 1u); else { c.pc = 0x002B6350u; return; } if (c.pc != 0x0030D77Cu) [[unlikely]] return; }
L_0030D77C:
    set32(c.r[6], ld32((c.r[29].w[0] + 732u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030D78Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006D(c, 337u, depth + 1u); else { c.pc = 0x002B7630u; return; } if (c.pc != 0x0030D78Cu) [[unlikely]] return; }
L_0030D78C:
    c.r[3].d[0] = ld8((c.r[2].w[0] + 2u));
    c.r[1].d[0] = c.r[3].sd[0] < 99ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0030D7A4; } }
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_0030D7A4:
    set32(c.r[3], 0u + 1u);
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 716u), c.r[16].w[0]);  if (t) { goto L_0030D7E8; } }
L_0030D7B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030D7BCu);  if (depth < kMaxDepth) unit_006D(c, 225u, depth + 1u); else { c.pc = 0x002B6350u; return; } if (c.pc != 0x0030D7BCu) [[unlikely]] return; }
L_0030D7BC:
    set32(c.r[6], ld32((c.r[29].w[0] + 732u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030D7CCu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_006D(c, 337u, depth + 1u); else { c.pc = 0x002B7630u; return; } if (c.pc != 0x0030D7CCu) [[unlikely]] return; }
L_0030D7CC:
    c.r[3].d[0] = ld8((c.r[2].w[0] + 3u));
    c.r[1].d[0] = c.r[3].sd[0] < 99ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0030D7E4; } }
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_0030D7E4:
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_0030D7E8:
    set32(c.r[16], ld32((c.r[29].w[0] + 732u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 3u);  if (t) { goto L_0030D800; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != c.r[2].d[0];  if (t) { goto L_0030D840; } }
L_0030D800:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030D808u);  if (depth < kMaxDepth) unit_006D(c, 225u, depth + 1u); else { c.pc = 0x002B6350u; return; } if (c.pc != 0x0030D808u) [[unlikely]] return; }
L_0030D808:
    set32(c.r[5], ld32((c.r[29].w[0] + 712u)));
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030D818u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_006D(c, 337u, depth + 1u); else { c.pc = 0x002B7630u; return; } if (c.pc != 0x0030D818u) [[unlikely]] return; }
L_0030D818:
    set32(c.r[16], c.r[29].w[0] + 716u);
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030D828u); st8((c.r[2].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_006D(c, 225u, depth + 1u); else { c.pc = 0x002B6350u; return; } if (c.pc != 0x0030D828u) [[unlikely]] return; }
L_0030D828:
    set32(c.r[5], ld32((c.r[16].w[0])));
    set32(c.r[6], ld32((c.r[29].w[0] + 732u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030D838u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_006D(c, 337u, depth + 1u); else { c.pc = 0x002B7630u; return; } if (c.pc != 0x0030D838u) [[unlikely]] return; }
L_0030D838:
    set32(c.r[3], ld32((c.r[29].w[0] + 712u)));
    st8((c.r[2].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_0030D840:
    c.r[3].d[0] = ld8((c.r[20].w[0] + 268u));
    set32(c.r[2], ld32((c.r[29].w[0] + 732u)));
    st32((c.r[29].w[0] + 240u), c.r[3].w[0]);
    st16((c.r[29].w[0] + 244u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 6u)));
    st16((c.r[29].w[0] + 246u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st16((c.r[29].w[0] + 248u), static_cast<std::uint16_t>(c.r[18].w[0]));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030D864u); c.r[4].d[0] = ld8((c.r[20].w[0] + 268u));  if (depth < kMaxDepth) unit_006E(c, 95u, depth + 1u); else { c.pc = 0x002B86C0u; return; } if (c.pc != 0x0030D864u) [[unlikely]] return; }
L_0030D864:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[3], ld32((c.r[29].w[0] + 208u)));
    st16((c.r[29].w[0] + 250u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[4], c.r[29].w[0] + 256u);
    set32(c.r[2], ld32((c.r[29].w[0] + 192u)));
    set32(c.r[5], c.r[20].w[0] + 12u);
    set32(c.r[6], 0u + 192u);
    st16((c.r[29].w[0] + 252u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030D88Cu); st16((c.r[29].w[0] + 254u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0010(c, 107u, depth + 1u); else { c.pc = 0x001415A0u; return; } if (c.pc != 0x0030D88Cu) [[unlikely]] return; }
L_0030D88C:
    c.r[2].d[0] = 0ull < c.r[23].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030D89Cu); c.r[16].d[0] = c.r[2].d[0] & 255ull;  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x0030D89Cu) [[unlikely]] return; }
L_0030D89C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[4], c.r[29].w[0] + 240u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    set32(c.r[5], ld32((c.r[1].w[0] - 25584u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030D8B4u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_009F(c, 13u, depth + 1u); else { c.pc = 0x0037C5B0u; return; } if (c.pc != 0x0030D8B4u) [[unlikely]] return; }
L_0030D8B4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[1].w[0] - 27616u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030D8C8u); set32(c.r[5], 0u + 403u);  if (depth < kMaxDepth) unit_0058(c, 46u, depth + 1u); else { c.pc = 0x00260440u; return; } if (c.pc != 0x0030D8C8u) [[unlikely]] return; }
L_0030D8C8:
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], ld32((c.r[1].w[0] - 27616u)));
    set32(c.r[5], 0u + 403u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030D8E0u); set32(c.r[6], c.r[17].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_0058(c, 37u, depth + 1u); else { c.pc = 0x00260310u; return; } if (c.pc != 0x0030D8E0u) [[unlikely]] return; }
L_0030D8E0:
    c.r[3].d[0] = ld8((c.r[20].w[0] + 268u));
    set32(c.r[2], 0u + 13u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[23].d[0] = c.r[16].d[0] & 255ull;  if (t) { goto L_0030DA9C; } }
    c.r[30].d[0] = c.r[16].d[0] & 255ull;
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_0030D8F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030D900u); set32(c.r[17], c.r[16].w[0] << 1);  if (depth < kMaxDepth) unit_000B(c, 79u, depth + 1u); else { c.pc = 0x0012CB20u; return; } if (c.pc != 0x0030D900u) [[unlikely]] return; }
L_0030D900:
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    c.r[4].d[0] = ld16((c.r[2].w[0] + 520u));
    set32(c.r[3], c.r[4].w[0] - 10000u);
    c.budget -= 5;
    { const bool t = c.r[3].sd[0] < 0;  if (t) { goto L_0030D930; } }
    set32(c.r[2], 0u + 100u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);  if (t) { goto L_0030D924; } }
    breakpoint(c, 0x0030D920u);
    c.budget -= 1;
L_0030D924:
    c.r[2].d[0] = c.lo.d[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0030D934; } }
L_0030D930:
    set32(c.r[2], 0u - 1u);
    c.budget -= 1;
L_0030D934:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0; c.r[3].d[0] = c.r[4].d[0] & 65535ull;  if (t) { goto L_0030D944; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], c.r[2].w[0] + 86u);  if (t) { goto L_0030D958; } }
L_0030D944:
    set32(c.r[2], 0u + 100u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);  if (t) { goto L_0030D954; } }
    breakpoint(c, 0x0030D950u);
    c.budget -= 1;
L_0030D954:
    c.r[5].d[0] = c.lo.d[0];
    c.budget -= 1;
L_0030D958:
    set32(c.r[4], c.r[29].w[0] + 240u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030D964u); c.r[6].d[0] = c.r[30].d[0] + 0ull;  if (depth < kMaxDepth) unit_009F(c, 30u, depth + 1u); else { c.pc = 0x0037C8C0u; return; } if (c.pc != 0x0030D964u) [[unlikely]] return; }
L_0030D964:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030D96Cu); c.r[22].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 79u, depth + 1u); else { c.pc = 0x0012CB20u; return; } if (c.pc != 0x0030D96Cu) [[unlikely]] return; }
L_0030D96C:
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    c.r[4].d[0] = ld16((c.r[2].w[0] + 520u));
    set32(c.r[3], c.r[4].w[0] - 10000u);
    c.budget -= 5;
    { const bool t = c.r[3].sd[0] < 0;  if (t) { goto L_0030D99C; } }
    set32(c.r[2], 0u + 100u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);  if (t) { goto L_0030D990; } }
    breakpoint(c, 0x0030D98Cu);
    c.budget -= 1;
L_0030D990:
    c.r[2].d[0] = c.lo.d[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0030D9A0; } }
L_0030D99C:
    set32(c.r[2], 0u - 1u);
    c.budget -= 1;
L_0030D9A0:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0; c.r[3].d[0] = c.r[4].d[0] & 65535ull;  if (t) { goto L_0030D9B0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[23], c.r[2].w[0] + 86u);  if (t) { goto L_0030D9C4; } }
L_0030D9B0:
    set32(c.r[2], 0u + 100u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);  if (t) { goto L_0030D9C0; } }
    breakpoint(c, 0x0030D9BCu);
    c.budget -= 1;
L_0030D9C0:
    c.r[23].d[0] = c.lo.d[0];
    c.budget -= 1;
L_0030D9C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030D9CCu);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x0030D9CCu) [[unlikely]] return; }
L_0030D9CC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    set32(c.r[2], ld32((c.r[1].w[0] - 25584u)));
    c.budget -= 5;
    { const bool t = c.r[23].d[0] != c.r[2].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);  if (t) { goto L_0030DA0C; } }
    set32(c.r[4], ld32((c.r[1].w[0] - 27616u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030D9ECu); set32(c.r[5], 0u + 404u);  if (depth < kMaxDepth) unit_0058(c, 46u, depth + 1u); else { c.pc = 0x00260440u; return; } if (c.pc != 0x0030D9ECu) [[unlikely]] return; }
L_0030D9EC:
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], ld32((c.r[1].w[0] - 27616u)));
    set32(c.r[5], 0u + 404u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030DA04u); set32(c.r[6], c.r[22].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_0058(c, 37u, depth + 1u); else { c.pc = 0x00260310u; return; } if (c.pc != 0x0030DA04u) [[unlikely]] return; }
L_0030DA04:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[16].w[0] + 1u);  if (t) { goto L_0030DA88; } }
L_0030DA0C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030DA14u);  if (depth < kMaxDepth) unit_000B(c, 79u, depth + 1u); else { c.pc = 0x0012CB20u; return; } if (c.pc != 0x0030DA14u) [[unlikely]] return; }
L_0030DA14:
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    c.r[4].d[0] = ld16((c.r[2].w[0] + 520u));
    set32(c.r[3], c.r[4].w[0] - 10000u);
    c.budget -= 5;
    { const bool t = c.r[3].sd[0] < 0;  if (t) { goto L_0030DA44; } }
    set32(c.r[2], 0u + 100u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);  if (t) { goto L_0030DA38; } }
    breakpoint(c, 0x0030DA34u);
    c.budget -= 1;
L_0030DA38:
    c.r[2].d[0] = c.lo.d[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0030DA48; } }
L_0030DA44:
    set32(c.r[2], 0u - 1u);
    c.budget -= 1;
L_0030DA48:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0; c.r[3].d[0] = c.r[4].d[0] & 65535ull;  if (t) { goto L_0030DA58; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[2].w[0] + 86u);  if (t) { goto L_0030DA6C; } }
L_0030DA58:
    set32(c.r[2], 0u + 100u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);  if (t) { goto L_0030DA68; } }
    breakpoint(c, 0x0030DA64u);
    c.budget -= 1;
L_0030DA68:
    c.r[4].d[0] = c.lo.d[0];
    c.budget -= 1;
L_0030DA6C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030DA74u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 104u, depth + 1u); else { c.pc = 0x0012CEC0u; return; } if (c.pc != 0x0030DA74u) [[unlikely]] return; }
L_0030DA74:
    c.r[3].d[0] = ld8((c.r[2].w[0] + 356u));
    c.r[4].d[0] = c.r[22].d[0] & 255ull;
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st8((c.r[2].w[0] + 356u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 5;
L_0030DA88:
    c.r[2].d[0] = c.r[16].sd[0] < 30ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0030D8F8u | kUnwind; return; } goto L_0030D8F8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[29].w[0] + 732u)));  if (t) { goto L_0030DB38; } }
L_0030DA9C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0030DB28; } }
L_0030DAA4:
    set32(c.r[4], c.r[29].w[0] + 240u);
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[17], c.r[2].w[0] + 268u);
    set32(c.r[5], ld32((c.r[17].w[0])));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030DABCu); c.r[6].d[0] = c.r[23].d[0] + 0ull;  if (depth < kMaxDepth) unit_009F(c, 30u, depth + 1u); else { c.pc = 0x0037C8C0u; return; } if (c.pc != 0x0030DABCu) [[unlikely]] return; }
L_0030DABC:
    set32(c.r[30], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030DAC8u); c.r[22].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x0030DAC8u) [[unlikely]] return; }
L_0030DAC8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    set32(c.r[2], ld32((c.r[1].w[0] - 25584u)));
    c.budget -= 5;
    { const bool t = c.r[30].d[0] != c.r[2].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);  if (t) { goto L_0030DB08; } }
    set32(c.r[4], ld32((c.r[1].w[0] - 27616u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030DAE8u); set32(c.r[5], 0u + 404u);  if (depth < kMaxDepth) unit_0058(c, 46u, depth + 1u); else { c.pc = 0x00260440u; return; } if (c.pc != 0x0030DAE8u) [[unlikely]] return; }
L_0030DAE8:
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], ld32((c.r[1].w[0] - 27616u)));
    set32(c.r[5], 0u + 404u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030DB00u); set32(c.r[6], c.r[22].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_0058(c, 37u, depth + 1u); else { c.pc = 0x00260310u; return; } if (c.pc != 0x0030DB00u) [[unlikely]] return; }
L_0030DB00:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[16].w[0] + 1u);  if (t) { goto L_0030DB28; } }
L_0030DB08:
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030DB14u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 104u, depth + 1u); else { c.pc = 0x0012CEC0u; return; } if (c.pc != 0x0030DB14u) [[unlikely]] return; }
L_0030DB14:
    c.r[3].d[0] = ld8((c.r[2].w[0] + 356u));
    c.r[4].d[0] = c.r[22].d[0] & 255ull;
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st8((c.r[2].w[0] + 356u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 5;
L_0030DB28:
    c.r[2].d[0] = c.r[16].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[16].w[0] << 5);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0030DAA4u | kUnwind; return; } goto L_0030DAA4; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 732u)));
    c.budget -= 1;
L_0030DB38:
    set32(c.r[2], 0u + 255u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_0030DC3C; } }
    set32(c.r[3], ld32((c.r[29].w[0] + 728u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0030DB58; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_0030DBEC; } }
L_0030DB58:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; set32(c.r[17], c.r[29].w[0] + 716u);  if (t) { goto L_0030DB70; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { goto L_0030DBBC; } }
L_0030DB70:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030DB78u); set32(c.r[16], ld32((c.r[17].w[0])));  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x0030DB78u) [[unlikely]] return; }
L_0030DB78:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    set32(c.r[2], ld32((c.r[1].w[0] - 25584u)));
    c.budget -= 5;
    { const bool t = c.r[16].d[0] != c.r[2].d[0];  if (t) { goto L_0030DBA4; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 732u)));
    set32(c.r[6], ld32((c.r[29].w[0] + 712u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030DB9Cu); set32(c.r[5], ld32((c.r[17].w[0])));  if (depth < kMaxDepth) unit_0088(c, 564u, depth + 1u); else { c.pc = 0x00323800u; return; } if (c.pc != 0x0030DB9Cu) [[unlikely]] return; }
L_0030DB9C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[29].w[0] + 732u)));  if (t) { goto L_0030DBDC; } }
L_0030DBA4:
    set32(c.r[4], ld32((c.r[29].w[0] + 732u)));
    set32(c.r[5], ld32((c.r[29].w[0] + 712u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030DBB4u); set32(c.r[6], ld32((c.r[17].w[0])));  if (depth < kMaxDepth) unit_0088(c, 564u, depth + 1u); else { c.pc = 0x00323800u; return; } if (c.pc != 0x0030DBB4u) [[unlikely]] return; }
L_0030DBB4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0030DBD8; } }
L_0030DBBC:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 688u)));
    set32(c.r[4], ld32((c.r[29].w[0] + 732u)));
    set32(c.r[2], c.r[2].w[0] << 5);
    set32(c.r[2], c.r[2].w[0] + c.r[20].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0] + 24u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030DBD8u); set32(c.r[6], 0u + 25500u);  if (depth < kMaxDepth) unit_0088(c, 564u, depth + 1u); else { c.pc = 0x00323800u; return; } if (c.pc != 0x0030DBD8u) [[unlikely]] return; }
L_0030DBD8:
    set32(c.r[4], ld32((c.r[29].w[0] + 732u)));
    c.budget -= 1;
L_0030DBDC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030DBE4u);  if (depth < kMaxDepth) unit_0083(c, 432u, depth + 1u); else { c.pc = 0x0030FE20u; return; } if (c.pc != 0x0030DBE4u) [[unlikely]] return; }
L_0030DBE4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 688u)));  if (t) { goto L_0030DC40; } }
L_0030DBEC:
    set32(c.r[5], ld32((c.r[29].w[0] + 712u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030DBF8u); set32(c.r[6], 0u + 25500u);  if (depth < kMaxDepth) unit_0088(c, 564u, depth + 1u); else { c.pc = 0x00323800u; return; } if (c.pc != 0x0030DBF8u) [[unlikely]] return; }
L_0030DBF8:
    set32(c.r[2], c.r[29].w[0] + 716u);
    set32(c.r[6], 0u + 25500u);
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 5;
    { const bool t = c.r[5].d[0] != c.r[6].d[0];  if (t) { goto L_0030DC20; } }
    set32(c.r[5], ld32((c.r[29].w[0] + 712u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030DC18u); set32(c.r[4], ld32((c.r[29].w[0] + 728u)));  if (depth < kMaxDepth) unit_0088(c, 564u, depth + 1u); else { c.pc = 0x00323800u; return; } if (c.pc != 0x0030DC18u) [[unlikely]] return; }
L_0030DC18:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[29].w[0] + 732u)));  if (t) { goto L_0030DC2C; } }
L_0030DC20:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030DC28u); set32(c.r[4], ld32((c.r[29].w[0] + 728u)));  if (depth < kMaxDepth) unit_0088(c, 564u, depth + 1u); else { c.pc = 0x00323800u; return; } if (c.pc != 0x0030DC28u) [[unlikely]] return; }
L_0030DC28:
    set32(c.r[4], ld32((c.r[29].w[0] + 732u)));
    c.budget -= 1;
L_0030DC2C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030DC34u);  if (depth < kMaxDepth) unit_0083(c, 432u, depth + 1u); else { c.pc = 0x0030FE20u; return; } if (c.pc != 0x0030DC34u) [[unlikely]] return; }
L_0030DC34:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030DC3Cu); set32(c.r[4], ld32((c.r[29].w[0] + 728u)));  if (depth < kMaxDepth) unit_0083(c, 432u, depth + 1u); else { c.pc = 0x0030FE20u; return; } if (c.pc != 0x0030DC3Cu) [[unlikely]] return; }
L_0030DC3C:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 688u)));
    c.budget -= 1;
L_0030DC40:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], ld32((c.r[1].w[0] - 27616u)));
    set32(c.r[2], c.r[2].w[0] << 5);
    set32(c.r[2], c.r[2].w[0] + c.r[20].w[0]);
    set32(c.r[6], ld32((c.r[2].w[0] + 24u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030DC5Cu); set32(c.r[5], 0u + 895u);  if (depth < kMaxDepth) unit_0058(c, 37u, depth + 1u); else { c.pc = 0x00260310u; return; } if (c.pc != 0x0030DC5Cu) [[unlikely]] return; }
L_0030DC5C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[5], 0u + 896u);
    set32(c.r[4], ld32((c.r[1].w[0] - 27616u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030DC70u); set32(c.r[6], 0u + 118u);  if (depth < kMaxDepth) unit_0058(c, 37u, depth + 1u); else { c.pc = 0x00260310u; return; } if (c.pc != 0x0030DC70u) [[unlikely]] return; }
L_0030DC70:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[5], 0u + 897u);
    set32(c.r[4], ld32((c.r[1].w[0] - 27616u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030DC84u); set32(c.r[6], 0u + 118u);  if (depth < kMaxDepth) unit_0058(c, 37u, depth + 1u); else { c.pc = 0x00260310u; return; } if (c.pc != 0x0030DC84u) [[unlikely]] return; }
L_0030DC84:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 689u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], ld32((c.r[1].w[0] - 27616u)));
    set32(c.r[2], c.r[2].w[0] << 5);
    set32(c.r[2], c.r[2].w[0] + c.r[20].w[0]);
    set32(c.r[6], ld32((c.r[2].w[0] + 24u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030DCA4u); set32(c.r[5], 0u + 898u);  if (depth < kMaxDepth) unit_0058(c, 37u, depth + 1u); else { c.pc = 0x00260310u; return; } if (c.pc != 0x0030DCA4u) [[unlikely]] return; }
L_0030DCA4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[5], 0u + 899u);
    set32(c.r[4], ld32((c.r[1].w[0] - 27616u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030DCB8u); set32(c.r[6], 0u + 118u);  if (depth < kMaxDepth) unit_0058(c, 37u, depth + 1u); else { c.pc = 0x00260310u; return; } if (c.pc != 0x0030DCB8u) [[unlikely]] return; }
L_0030DCB8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[5], 0u + 900u);
    set32(c.r[4], ld32((c.r[1].w[0] - 27616u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030DCCCu); set32(c.r[6], 0u + 118u);  if (depth < kMaxDepth) unit_0058(c, 37u, depth + 1u); else { c.pc = 0x00260310u; return; } if (c.pc != 0x0030DCCCu) [[unlikely]] return; }
L_0030DCCC:
    c.r[17].d[0] = 0ull + 0ull;
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[22].d[0] = 0ull + 0ull;  if (t) { goto L_0030DDA4; } }
L_0030DCDC:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 688u)));
    set32(c.r[3], c.r[22].w[0] << 5);
    set32(c.r[3], c.r[20].w[0] + c.r[3].w[0]);
    set32(c.r[6], ld32((c.r[3].w[0] + 24u)));
    set32(c.r[2], c.r[2].w[0] << 5);
    set32(c.r[2], c.r[20].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 24u)));
    c.budget -= 9;
    { const bool t = c.r[6].d[0] == c.r[2].d[0];  if (t) { goto L_0030DDA0; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 689u)));
    set32(c.r[2], c.r[2].w[0] << 5);
    set32(c.r[2], c.r[20].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 24u)));
    c.budget -= 6;
    { const bool t = c.r[6].d[0] == c.r[2].d[0];  if (t) { goto L_0030DDA0; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 21u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 224u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0030DD68; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0030DD48; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], ld32((c.r[1].w[0] - 27616u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030DD40u); set32(c.r[5], 0u + 896u);  if (depth < kMaxDepth) unit_0058(c, 37u, depth + 1u); else { c.pc = 0x00260310u; return; } if (c.pc != 0x0030DD40u) [[unlikely]] return; }
L_0030DD40:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[17].w[0] + 1u);  if (t) { goto L_0030DD60; } }
L_0030DD48:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != c.r[2].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);  if (t) { goto L_0030DD5C; } }
    set32(c.r[4], ld32((c.r[1].w[0] - 27616u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030DD5Cu); set32(c.r[5], 0u + 897u);  if (depth < kMaxDepth) unit_0058(c, 37u, depth + 1u); else { c.pc = 0x00260310u; return; } if (c.pc != 0x0030DD5Cu) [[unlikely]] return; }
L_0030DD5C:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_0030DD60:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[22], c.r[22].w[0] + 1u);  if (t) { goto L_0030DDA4; } }
L_0030DD68:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0030DD88; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], ld32((c.r[1].w[0] - 27616u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030DD80u); set32(c.r[5], 0u + 899u);  if (depth < kMaxDepth) unit_0058(c, 37u, depth + 1u); else { c.pc = 0x00260310u; return; } if (c.pc != 0x0030DD80u) [[unlikely]] return; }
L_0030DD80:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[16].w[0] + 1u);  if (t) { goto L_0030DDA0; } }
L_0030DD88:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != c.r[2].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);  if (t) { goto L_0030DD9C; } }
    set32(c.r[4], ld32((c.r[1].w[0] - 27616u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030DD9Cu); set32(c.r[5], 0u + 900u);  if (depth < kMaxDepth) unit_0058(c, 37u, depth + 1u); else { c.pc = 0x00260310u; return; } if (c.pc != 0x0030DD9Cu) [[unlikely]] return; }
L_0030DD9C:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_0030DDA0:
    set32(c.r[22], c.r[22].w[0] + 1u);
    c.budget -= 1;
L_0030DDA4:
    c.r[2].d[0] = c.r[22].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0030DCDCu | kUnwind; return; } goto L_0030DCDC; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 688u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 176u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);  if (t) { goto L_0030DDD8; } }
    set32(c.r[5], 0u + 909u);
    set32(c.r[4], ld32((c.r[1].w[0] - 27616u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030DDD0u); set32(c.r[6], 0u + 2u);  if (depth < kMaxDepth) unit_0058(c, 37u, depth + 1u); else { c.pc = 0x00260310u; return; } if (c.pc != 0x0030DDD0u) [[unlikely]] return; }
L_0030DDD0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0030DEC4; } }
L_0030DDD8:
    set32(c.r[3], ld32((c.r[29].w[0] + 160u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 224u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);  if (t) { goto L_0030DE00; } }
    set32(c.r[5], 0u + 909u);
    set32(c.r[4], ld32((c.r[1].w[0] - 27616u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030DDF8u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0058(c, 37u, depth + 1u); else { c.pc = 0x00260310u; return; } if (c.pc != 0x0030DDF8u) [[unlikely]] return; }
L_0030DDF8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0030DEC4; } }
L_0030DE00:
    set32(c.r[2], ld32((c.r[29].w[0] + 176u)));
    set32(c.r[3], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);  if (t) { goto L_0030DE28; } }
    set32(c.r[5], 0u + 909u);
    set32(c.r[4], ld32((c.r[1].w[0] - 27616u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030DE20u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0058(c, 37u, depth + 1u); else { c.pc = 0x00260310u; return; } if (c.pc != 0x0030DE20u) [[unlikely]] return; }
L_0030DE20:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0030DEC4; } }
L_0030DE28:
    c.r[3].d[0] = ld8((c.r[20].w[0] + 268u));
    set32(c.r[2], 0u + 13u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0030DEC4; } }
    set32(c.r[2], c.r[16].w[0] << 1);
    c.budget -= 1;
L_0030DE3C:
    set32(c.r[2], c.r[19].w[0] + c.r[2].w[0]);
    c.r[4].d[0] = ld16((c.r[2].w[0] + 520u));
    set32(c.r[3], c.r[4].w[0] - 10000u);
    c.budget -= 5;
    { const bool t = c.r[3].sd[0] < 0; set32(c.r[2], 0u - 1u);  if (t) { goto L_0030DE64; } }
    set32(c.r[2], 0u + 100u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);  if (t) { goto L_0030DE60; } }
    breakpoint(c, 0x0030DE5Cu);
    c.budget -= 1;
L_0030DE60:
    c.r[2].d[0] = c.lo.d[0];
    c.budget -= 1;
L_0030DE64:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0; c.r[3].d[0] = c.r[4].d[0] & 65535ull;  if (t) { goto L_0030DE74; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[2].w[0] + 86u);  if (t) { goto L_0030DE88; } }
L_0030DE74:
    set32(c.r[2], 0u + 100u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);  if (t) { goto L_0030DE84; } }
    breakpoint(c, 0x0030DE80u);
    c.budget -= 1;
L_0030DE84:
    c.r[17].d[0] = c.lo.d[0];
    c.budget -= 1;
L_0030DE88:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030DE90u);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x0030DE90u) [[unlikely]] return; }
L_0030DE90:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    set32(c.r[2], ld32((c.r[1].w[0] - 25584u)));
    c.budget -= 5;
    { const bool t = c.r[17].d[0] != c.r[2].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);  if (t) { goto L_0030DEB4; } }
    set32(c.r[5], 0u + 909u);
    set32(c.r[4], ld32((c.r[1].w[0] - 27616u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030DEB4u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0058(c, 37u, depth + 1u); else { c.pc = 0x00260310u; return; } if (c.pc != 0x0030DEB4u) [[unlikely]] return; }
L_0030DEB4:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < 30ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[16].w[0] << 1);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0030DE3Cu | kUnwind; return; } goto L_0030DE3C; } }
L_0030DEC4:
    c.budget -= 2;
    { const bool t = c.r[21].d[0] == 0ull; set32(c.r[4], c.r[21].w[0] + 16u);  if (t) { goto L_0030DED8; } }
    set32(c.r[5], c.r[20].w[0] + 12u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030DED8u); set32(c.r[6], 0u + 192u);  if (depth < kMaxDepth) unit_0010(c, 107u, depth + 1u); else { c.pc = 0x001415A0u; return; } if (c.pc != 0x0030DED8u) [[unlikely]] return; }
L_0030DED8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030DEE0u);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x0030DEE0u) [[unlikely]] return; }
L_0030DEE0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.r[3].d[0] = ld8((c.r[1].w[0] - 25576u));
    set32(c.r[2], 0u + 3u);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0030DF44; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 732u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0030DF44; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 689u)));
    set32(c.r[2], c.r[2].w[0] << 5);
    set32(c.r[2], c.r[2].w[0] + c.r[20].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030DF18u); set32(c.r[16], ld32((c.r[2].w[0] + 24u)));  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x0030DF18u) [[unlikely]] return; }
L_0030DF18:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    st32((c.r[1].w[0] - 25564u), c.r[16].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 689u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], ld32((c.r[1].w[0] - 27616u)));
    set32(c.r[2], c.r[2].w[0] << 5);
    set32(c.r[2], c.r[2].w[0] + c.r[20].w[0]);
    set32(c.r[6], ld32((c.r[2].w[0] + 24u)));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030DF44u); set32(c.r[5], 0u + 304u);  if (depth < kMaxDepth) unit_0058(c, 37u, depth + 1u); else { c.pc = 0x00260310u; return; } if (c.pc != 0x0030DF44u) [[unlikely]] return; }
L_0030DF44:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030DF4Cu);  if (depth < kMaxDepth) unit_0084(c, 33u, depth + 1u); else { c.pc = 0x003101F0u; return; } if (c.pc != 0x0030DF4Cu) [[unlikely]] return; }
L_0030DF4C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030DF54u);  if (depth < kMaxDepth) unit_000B(c, 79u, depth + 1u); else { c.pc = 0x0012CB20u; return; } if (c.pc != 0x0030DF54u) [[unlikely]] return; }
L_0030DF54:
    set32(c.r[4], c.r[2].w[0] + 600u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030DF60u); set32(c.r[5], 0u + 272u);  if (depth < kMaxDepth) unit_0010(c, 111u, depth + 1u); else { c.pc = 0x00141670u; return; } if (c.pc != 0x0030DF60u) [[unlikely]] return; }
L_0030DF60:
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
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 736u);  c.pc = t; return; }
L_0030DF90:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030DFC4u); c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x0030DFC4u) [[unlikely]] return; }
L_0030DFC4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.r[2].d[0] = ld16((c.r[1].w[0] - 25464u));
    c.r[1].d[0] = c.r[18].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0030DFE4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_0030E114; } }
L_0030DFE4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030DFECu);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x0030DFECu) [[unlikely]] return; }
L_0030DFEC:
    set32(c.r[3], c.r[18].w[0] << 1);
    c.r[1].d[0] = 0ull | 40076ull;
    set32(c.r[3], c.r[3].w[0] + c.r[18].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[18].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[20], c.r[2].w[0] + c.r[1].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030E014u); set32(c.r[4], ld32((c.r[20].w[0])));  if (depth < kMaxDepth) unit_008E(c, 382u, depth + 1u); else { c.pc = 0x0033B850u; return; } if (c.pc != 0x0030E014u) [[unlikely]] return; }
L_0030E014:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0030E028; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_0030E114; } }
L_0030E028:
    set32(c.r[2], 0u + 3u);
    set32(c.r[21], 0u - 1u);
    st16((c.r[20].w[0] + 6u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[22].d[0] = 0ull + 0ull;  if (t) { goto L_0030E080; } }
L_0030E03C:
    set32(c.r[19], c.r[20].w[0] + c.r[2].w[0]);
    set32(c.r[18], ld32((c.r[19].w[0] + 28u)));
    c.budget -= 4;
    { const bool t = c.r[18].d[0] != c.r[16].d[0]; set32(c.r[2], 0u + 118u);  if (t) { goto L_0030E054; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_0030E114; } }
L_0030E054:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == c.r[2].d[0];  if (t) { goto L_0030E08C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030E064u);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x0030E064u) [[unlikely]] return; }
L_0030E064:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    set32(c.r[2], ld32((c.r[1].w[0] - 25584u)));
    c.budget -= 5;
    { const bool t = c.r[18].d[0] != c.r[2].d[0];  if (t) { goto L_0030E07C; } }
    c.r[21].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 25u)));
    c.budget -= 1;
L_0030E07C:
    set32(c.r[22], c.r[22].w[0] + 1u);
    c.budget -= 1;
L_0030E080:
    c.r[2].d[0] = c.r[22].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[22].w[0] << 5);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0030E03Cu | kUnwind; return; } goto L_0030E03C; } }
L_0030E08C:
    c.r[2].d[0] = c.r[22].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], c.r[22].w[0] << 5);  if (t) { goto L_0030E0A0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_0030E114; } }
L_0030E0A0:
    set32(c.r[2], 0u + 3u);
    set32(c.r[3], c.r[20].w[0] + c.r[3].w[0]);
    st32((c.r[3].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030E0B4u); set32(c.r[18], c.r[3].w[0] + 16u);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x0030E0B4u) [[unlikely]] return; }
L_0030E0B4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    set32(c.r[2], ld32((c.r[1].w[0] - 25584u)));
    c.budget -= 5;
    { const bool t = c.r[16].d[0] != c.r[2].d[0];  if (t) { goto L_0030E0D0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 8u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0030E0D8; } }
L_0030E0D0:
    set32(c.r[2], 0u + 1u);
    st8((c.r[18].w[0] + 8u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_0030E0D8:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_0030E0F0; } }
    c.budget -= 2;
    { const bool t = c.r[21].d[0] == c.r[2].d[0];  if (t) { goto L_0030E0F0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 9u), static_cast<std::uint8_t>(c.r[21].w[0]));  if (t) { goto L_0030E100; } }
L_0030E0F0:
    c.budget -= 2;
    { const bool t = c.r[21].sd[0] <= 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_0030E0FC; } }
    set32(c.r[2], c.r[21].w[0] - 1u);
    c.budget -= 1;
L_0030E0FC:
    st8((c.r[18].w[0] + 9u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 1;
L_0030E100:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030E110u); st32((c.r[18].w[0] + 12u), c.r[16].w[0]);  if (depth < kMaxDepth) unit_000B(c, 102u, depth + 1u); else { c.pc = 0x0012CDE0u; return; } if (c.pc != 0x0030E110u) [[unlikely]] return; }
L_0030E110:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0030E114:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_0030E140:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030E154u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x0030E154u) [[unlikely]] return; }
L_0030E154:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.r[2].d[0] = ld16((c.r[1].w[0] - 25464u));
    c.r[1].d[0] = c.r[2].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0030E174; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 3u);  if (t) { goto L_0030E1D4; } }
L_0030E174:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030E17Cu);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x0030E17Cu) [[unlikely]] return; }
L_0030E17C:
    set32(c.r[4], c.r[16].w[0] << 1);
    c.r[1].d[0] = 0ull | 40076ull;
    set32(c.r[4], c.r[4].w[0] + c.r[16].w[0]);
    set32(c.r[3], 0u + 3u);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[16].w[0]);
    set32(c.r[4], c.r[4].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[4], c.r[2].w[0] + c.r[1].w[0]);
    c.r[2].d[0] = ld16((c.r[4].w[0] + 6u));
    c.budget -= 12;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0030E1B4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 2u);  if (t) { goto L_0030E1D4; } }
L_0030E1B4:
    c.r[2].d[0] = ld16((c.r[4].w[0] + 12u));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] << 5);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[16], ld32((c.r[2].w[0] + 28u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030E1D0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 102u, depth + 1u); else { c.pc = 0x0012CDE0u; return; } if (c.pc != 0x0030E1D0u) [[unlikely]] return; }
L_0030E1D0:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0030E1D4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0030E1F0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030E20Cu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x0030E20Cu) [[unlikely]] return; }
L_0030E20C:
    set32(c.r[3], c.r[17].w[0] << 1);
    c.r[1].d[0] = 0ull | 40076ull;
    set32(c.r[5], c.r[3].w[0] + c.r[17].w[0]);
    set32(c.r[4], c.r[16].w[0] << 5);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[3], 0u + 118u);
    set32(c.r[5], c.r[5].w[0] + c.r[17].w[0]);
    set32(c.r[5], c.r[5].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[1].w[0]);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[16], ld32((c.r[2].w[0] + 28u)));
    c.budget -= 14;
    { const bool t = c.r[16].d[0] == c.r[3].d[0]; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0030E254; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030E24Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 102u, depth + 1u); else { c.pc = 0x0012CDE0u; return; } if (c.pc != 0x0030E24Cu) [[unlikely]] return; }
L_0030E24C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0030E25C; } }
L_0030E254:
    set32(c.r[16], 0u - 1u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 2;
L_0030E25C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0030E270:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030E290u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x0030E290u) [[unlikely]] return; }
L_0030E290:
    c.r[1].d[0] = 0ull | 40072ull;
    set32(c.r[16], 0u - 1u);
    set32(c.r[6], c.r[2].w[0] + c.r[1].w[0]);
    set32(c.r[8], 0u + 2u);
    set32(c.r[4], 0u + 118u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0030E324; } }
L_0030E2AC:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; set32(c.r[3], c.r[8].w[0] << 1);  if (t) { goto L_0030E2C8; } }
    set32(c.r[3], c.r[17].w[0] + c.r[8].w[0]);
    c.r[3].d[0] = ld8((c.r[3].w[0]));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0030E320; } }
    set32(c.r[3], c.r[8].w[0] << 1);
    c.budget -= 1;
L_0030E2C8:
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[3].w[0] + c.r[8].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[8].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[3], c.r[6].w[0] + c.r[3].w[0]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; set32(c.r[5], c.r[3].w[0] + 20u);  if (t) { goto L_0030E30C; } }
L_0030E2E8:
    set32(c.r[3], ld32((c.r[5].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_0030E318; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[18].d[0];  if (t) { goto L_0030E304; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[8].d[0] + 0ull;  if (t) { goto L_0030E318; } }
L_0030E304:
    set32(c.r[5], c.r[5].w[0] + 32u);
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.budget -= 2;
L_0030E30C:
    c.r[3].d[0] = c.r[7].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0030E2E8u | kUnwind; return; } goto L_0030E2E8; } }
L_0030E318:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != c.r[2].d[0];  if (t) { goto L_0030E32C; } }
L_0030E320:
    set32(c.r[8], c.r[8].w[0] - 1u);
    c.budget -= 1;
L_0030E324:
    c.budget -= 2;
    { const bool t = c.r[8].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0030E2ACu | kUnwind; return; } goto L_0030E2AC; } }
L_0030E32C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030E338u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 102u, depth + 1u); else { c.pc = 0x0012CDE0u; return; } if (c.pc != 0x0030E338u) [[unlikely]] return; }
L_0030E338:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0030E360:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030E378u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x0030E378u) [[unlikely]] return; }
L_0030E378:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.r[16].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] - 25571u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030E390u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 108u, depth + 1u); else { c.pc = 0x0012D050u; return; } if (c.pc != 0x0030E390u) [[unlikely]] return; }
L_0030E390:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0030E3A4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0030E3D0; } }
L_0030E3A4:
    c.r[16].d[0] = c.r[16].d[0] << 56;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030E3B8u); c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 56);  if (depth < kMaxDepth) unit_000B(c, 104u, depth + 1u); else { c.pc = 0x0012CEC0u; return; } if (c.pc != 0x0030E3B8u) [[unlikely]] return; }
L_0030E3B8:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 353u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[2].d[0];  if (t) { goto L_0030E3CC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 1u);  if (t) { goto L_0030E3D0; } }
L_0030E3CC:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0030E3D0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030E3DCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 102u, depth + 1u); else { c.pc = 0x0012CDE0u; return; } if (c.pc != 0x0030E3DCu) [[unlikely]] return; }
L_0030E3DC:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0030E400:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030E414u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x0030E414u) [[unlikely]] return; }
L_0030E414:
    set32(c.r[3], c.r[16].w[0] << 1);
    c.r[1].d[0] = 0ull | 40076ull;
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[1].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0030E450:
    set32(c.r[29], c.r[29].w[0] - 2064u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    c.r[23].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    set32(c.r[19], c.r[29].w[0] + 176u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 172u), c.r[7].w[0]);
    c.r[16].d[0] = c.r[9].d[0] + 0ull;
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030E4A0u); st32((c.r[29].w[0] + 168u), c.r[8].w[0]);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x0030E4A0u) [[unlikely]] return; }
L_0030E4A0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    set32(c.r[4], ld32((c.r[1].w[0] - 25584u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030E4B4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 104u, depth + 1u); else { c.pc = 0x0012CEC0u; return; } if (c.pc != 0x0030E4B4u) [[unlikely]] return; }
L_0030E4B4:
    c.r[22].d[0] = c.r[2].d[0] + 0ull;
    c.r[30].d[0] = c.r[16].d[0] & 255ull;
    c.r[18].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
L_0030E4C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030E4CCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 104u, depth + 1u); else { c.pc = 0x0012CEC0u; return; } if (c.pc != 0x0030E4CCu) [[unlikely]] return; }
L_0030E4CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030E4D4u); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x0030E4D4u) [[unlikely]] return; }
L_0030E4D4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    set32(c.r[2], ld32((c.r[1].w[0] - 25584u)));
    c.budget -= 5;
    { const bool t = c.r[18].d[0] == c.r[2].d[0]; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_0030E5A0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030E4F0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 108u, depth + 1u); else { c.pc = 0x0012D050u; return; } if (c.pc != 0x0030E4F0u) [[unlikely]] return; }
L_0030E4F0:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0030E5A0; } }
    set32(c.r[5], ld32((c.r[29].w[0] + 172u)));
    set32(c.r[6], ld32((c.r[29].w[0] + 168u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030E50Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_008E(c, 61u, depth + 1u); else { c.pc = 0x00338A00u; return; } if (c.pc != 0x0030E50Cu) [[unlikely]] return; }
L_0030E50C:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0030E5A0; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[22].w[0] + 353u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 353u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0030E5A0; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[22].w[0] + 354u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 354u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0030E5A0; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 346u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0030E5A0; } }
    st32((c.r[19].w[0]), c.r[18].w[0]);
    st32((c.r[19].w[0] + 4u), c.r[16].w[0]);
    c.budget -= 4;
    { const bool t = c.r[30].d[0] == 0ull; st32((c.r[19].w[0] + 8u), c.r[22].w[0]);  if (t) { goto L_0030E594; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030E560u);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x0030E560u) [[unlikely]] return; }
L_0030E560:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    set32(c.r[4], ld32((c.r[1].w[0] - 25584u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030E574u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_008E(c, 336u, depth + 1u); else { c.pc = 0x0033B310u; return; } if (c.pc != 0x0030E574u) [[unlikely]] return; }
L_0030E574:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0030E588; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 12u), 0u);  if (t) { goto L_0030E598; } }
L_0030E588:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 12u), c.r[2].w[0]);  if (t) { goto L_0030E598; } }
L_0030E594:
    st32((c.r[19].w[0] + 12u), 0u);
    c.budget -= 1;
L_0030E598:
    set32(c.r[19], c.r[19].w[0] + 16u);
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 2;
L_0030E5A0:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[2].d[0] = c.r[18].sd[0] < 118ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0030E4C4u | kUnwind; return; } goto L_0030E4C4; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[21].d[0] == c.r[2].d[0]; c.r[7].sd[0] = static_cast<std::int32_t>(0x00330000u);  if (t) { goto L_0030E610; } }
    c.budget -= 2;
    { const bool t = c.r[21].d[0] == 0ull; c.r[7].sd[0] = static_cast<std::int32_t>(0x00330000u);  if (t) { goto L_0030E5F4; } }
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[21].d[0] == c.r[2].d[0]; c.r[7].sd[0] = static_cast<std::int32_t>(0x00330000u);  if (t) { goto L_0030E5D8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[1].d[0] = c.r[17].sd[0] < c.r[20].sd[0] ? 1ull : 0ull;  if (t) { goto L_0030E628; } }
L_0030E5D8:
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[6], 0u + 16u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030E5ECu); set32(c.r[7], c.r[7].w[0] + 28976u);  if (depth < kMaxDepth) unit_0009(c, 126u, depth + 1u); else { c.pc = 0x00126150u; return; } if (c.pc != 0x0030E5ECu) [[unlikely]] return; }
L_0030E5EC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0030E624; } }
L_0030E5F4:
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[6], 0u + 16u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030E608u); set32(c.r[7], c.r[7].w[0] + 28672u);  if (depth < kMaxDepth) unit_0009(c, 126u, depth + 1u); else { c.pc = 0x00126150u; return; } if (c.pc != 0x0030E608u) [[unlikely]] return; }
L_0030E608:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0030E624; } }
L_0030E610:
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[6], 0u + 16u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030E624u); set32(c.r[7], c.r[7].w[0] + 29232u);  if (depth < kMaxDepth) unit_0009(c, 126u, depth + 1u); else { c.pc = 0x00126150u; return; } if (c.pc != 0x0030E624u) [[unlikely]] return; }
L_0030E624:
    c.r[1].d[0] = c.r[17].sd[0] < c.r[20].sd[0] ? 1ull : 0ull;
    c.budget -= 1;
L_0030E628:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[5], c.r[29].w[0] + 176u);  if (t) { goto L_0030E634; } }
    c.r[20].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0030E634:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_0030E654; } }
L_0030E63C:
    set32(c.r[3], ld32((c.r[5].w[0])));
    set32(c.r[2], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[23].w[0] + c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    set32(c.r[5], c.r[5].w[0] + 16u);
    c.budget -= 6;
L_0030E654:
    c.r[2].d[0] = c.r[4].sd[0] < c.r[20].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0030E63Cu | kUnwind; return; } goto L_0030E63C; } }
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030E66Cu); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_008D(c, 216u, depth + 1u); else { c.pc = 0x003367B0u; return; } if (c.pc != 0x0030E66Cu) [[unlikely]] return; }
L_0030E66C:
    c.r[2].d[0] = c.r[20].d[0] + 0ull;
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 2064u);  c.pc = t; return; }
L_0030E6A0:
    c.budget -= 2;
    { set32(c.r[9], 0u + 1u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0030E450u | kUnwind; return; } goto L_0030E450; }
L_0030E6B0:
    set32(c.r[29], c.r[29].w[0] - 2096u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[22].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[10].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[23].d[0] = c.r[20].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[9].d[0] + 0ull;
    st32((c.r[29].w[0] + 204u), c.r[7].w[0]);
    set32(c.r[18], c.r[29].w[0] + 208u);
    st32((c.r[29].w[0] + 200u), c.r[8].w[0]);
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030E708u); c.r[16].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x0030E708u) [[unlikely]] return; }
L_0030E708:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    set32(c.r[4], ld32((c.r[1].w[0] - 25584u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030E71Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 104u, depth + 1u); else { c.pc = 0x0012CEC0u; return; } if (c.pc != 0x0030E71Cu) [[unlikely]] return; }
L_0030E71C:
    c.r[30].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].d[0] = c.r[21].d[0] & 255ull;
    st32((c.r[29].w[0] + 176u), c.r[2].w[0]);
    c.r[2].d[0] = c.r[17].d[0] & 255ull;
    st32((c.r[29].w[0] + 160u), c.r[2].w[0]);
    c.r[17].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 7;
L_0030E738:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030E740u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 104u, depth + 1u); else { c.pc = 0x0012CEC0u; return; } if (c.pc != 0x0030E740u) [[unlikely]] return; }
L_0030E740:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030E748u); c.r[21].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x0030E748u) [[unlikely]] return; }
L_0030E748:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    set32(c.r[2], ld32((c.r[1].w[0] - 25584u)));
    c.budget -= 5;
    { const bool t = c.r[17].d[0] == c.r[2].d[0]; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0030E8E8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030E764u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 108u, depth + 1u); else { c.pc = 0x0012D050u; return; } if (c.pc != 0x0030E764u) [[unlikely]] return; }
L_0030E764:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0030E8E8; } }
    set32(c.r[5], ld32((c.r[29].w[0] + 204u)));
    set32(c.r[6], ld32((c.r[29].w[0] + 200u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030E780u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_008E(c, 61u, depth + 1u); else { c.pc = 0x00338A00u; return; } if (c.pc != 0x0030E780u) [[unlikely]] return; }
L_0030E780:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0030E8E8; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[30].w[0] + 353u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0] + 353u)));
    c.r[3].d[0] = c.r[3].d[0] ^ c.r[2].d[0];
    set32(c.r[2], ld32((c.r[29].w[0] + 176u)));
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0030E8E8; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[30].w[0] + 354u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0] + 354u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0030E8E8; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0] + 346u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0030E8E8; } }
    st32((c.r[18].w[0]), c.r[17].w[0]);
    st32((c.r[18].w[0] + 4u), c.r[21].w[0]);
    st32((c.r[18].w[0] + 8u), c.r[30].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 160u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 100u);  if (t) { goto L_0030E8DC; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030E7ECu); set32(c.r[5], 0u + 118u);  if (depth < kMaxDepth) unit_008E(c, 338u, depth + 1u); else { c.pc = 0x0033B340u; return; } if (c.pc != 0x0030E7ECu) [[unlikely]] return; }
L_0030E7EC:
    c.r[21].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[21].sd[0] < 0; c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (t) { goto L_0030E8D0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030E800u);  if (depth < kMaxDepth) unit_001C(c, 264u, depth + 1u); else { c.pc = 0x00173050u; return; } if (c.pc != 0x0030E800u) [[unlikely]] return; }
L_0030E800:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 22u)));
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030E810u); st32((c.r[18].w[0] + 12u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_001C(c, 264u, depth + 1u); else { c.pc = 0x00173050u; return; } if (c.pc != 0x0030E810u) [[unlikely]] return; }
L_0030E810:
    c.r[4].d[0] = ld16((c.r[2].w[0] + 26u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030E81Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 104u, depth + 1u); else { c.pc = 0x0012CEC0u; return; } if (c.pc != 0x0030E81Cu) [[unlikely]] return; }
L_0030E81C:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 346u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (t) { goto L_0030E838; } }
    set32(c.r[2], 0u + 100u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 12u), c.r[2].w[0]);  if (t) { goto L_0030E8A4; } }
L_0030E838:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030E840u);  if (depth < kMaxDepth) unit_001C(c, 264u, depth + 1u); else { c.pc = 0x00173050u; return; } if (c.pc != 0x0030E840u) [[unlikely]] return; }
L_0030E840:
    c.r[4].d[0] = ld16((c.r[2].w[0] + 28u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030E84Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 104u, depth + 1u); else { c.pc = 0x0012CEC0u; return; } if (c.pc != 0x0030E84Cu) [[unlikely]] return; }
L_0030E84C:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 346u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0030E868; } }
    set32(c.r[2], 0u + 100u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 12u), c.r[2].w[0]);  if (t) { goto L_0030E8A4; } }
L_0030E868:
    set32(c.r[3], ld32((c.r[18].w[0] + 12u)));
    set32(c.r[2], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (t) { goto L_0030E8A8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030E880u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_001C(c, 264u, depth + 1u); else { c.pc = 0x00173050u; return; } if (c.pc != 0x0030E880u) [[unlikely]] return; }
L_0030E880:
    c.r[4].d[0] = ld16((c.r[2].w[0] + 30u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030E88Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 104u, depth + 1u); else { c.pc = 0x0012CEC0u; return; } if (c.pc != 0x0030E88Cu) [[unlikely]] return; }
L_0030E88C:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 346u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0030E8A4; } }
    set32(c.r[2], 0u + 100u);
    st32((c.r[18].w[0] + 12u), c.r[2].w[0]);
    c.budget -= 2;
L_0030E8A4:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 1;
L_0030E8A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030E8B0u);  if (depth < kMaxDepth) unit_001C(c, 264u, depth + 1u); else { c.pc = 0x00173050u; return; } if (c.pc != 0x0030E8B0u) [[unlikely]] return; }
L_0030E8B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030E8B8u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_001C(c, 335u, depth + 1u); else { c.pc = 0x00173940u; return; } if (c.pc != 0x0030E8B8u) [[unlikely]] return; }
L_0030E8B8:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0030E8E0; } }
    set32(c.r[2], 0u + 100u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 12u), c.r[2].w[0]);  if (t) { goto L_0030E8E0; } }
L_0030E8D0:
    set32(c.r[2], 0u + 100u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 12u), c.r[2].w[0]);  if (t) { goto L_0030E8E0; } }
L_0030E8DC:
    st32((c.r[18].w[0] + 12u), c.r[2].w[0]);
    c.budget -= 1;
L_0030E8E0:
    set32(c.r[18], c.r[18].w[0] + 16u);
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 2;
L_0030E8E8:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].sd[0] < 118ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0030E738u | kUnwind; return; } goto L_0030E738; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[22].d[0] == c.r[2].d[0]; c.r[7].sd[0] = static_cast<std::int32_t>(0x00330000u);  if (t) { goto L_0030E958; } }
    c.budget -= 2;
    { const bool t = c.r[22].d[0] == 0ull; c.r[7].sd[0] = static_cast<std::int32_t>(0x00330000u);  if (t) { goto L_0030E93C; } }
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[22].d[0] == c.r[2].d[0]; c.r[7].sd[0] = static_cast<std::int32_t>(0x00330000u);  if (t) { goto L_0030E920; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[1].d[0] = c.r[16].sd[0] < c.r[19].sd[0] ? 1ull : 0ull;  if (t) { goto L_0030E970; } }
L_0030E920:
    set32(c.r[4], c.r[29].w[0] + 208u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], 0u + 16u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030E934u); set32(c.r[7], c.r[7].w[0] + 28976u);  if (depth < kMaxDepth) unit_0009(c, 126u, depth + 1u); else { c.pc = 0x00126150u; return; } if (c.pc != 0x0030E934u) [[unlikely]] return; }
L_0030E934:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0030E96C; } }
L_0030E93C:
    set32(c.r[4], c.r[29].w[0] + 208u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], 0u + 16u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030E950u); set32(c.r[7], c.r[7].w[0] + 28672u);  if (depth < kMaxDepth) unit_0009(c, 126u, depth + 1u); else { c.pc = 0x00126150u; return; } if (c.pc != 0x0030E950u) [[unlikely]] return; }
L_0030E950:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0030E96C; } }
L_0030E958:
    set32(c.r[4], c.r[29].w[0] + 208u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], 0u + 16u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030E96Cu); set32(c.r[7], c.r[7].w[0] + 29232u);  if (depth < kMaxDepth) unit_0009(c, 126u, depth + 1u); else { c.pc = 0x00126150u; return; } if (c.pc != 0x0030E96Cu) [[unlikely]] return; }
L_0030E96C:
    c.r[1].d[0] = c.r[16].sd[0] < c.r[19].sd[0] ? 1ull : 0ull;
    c.budget -= 1;
L_0030E970:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0030E97C; } }
    c.r[19].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0030E97C:
    set32(c.r[2], ld32((c.r[29].w[0] + 220u)));
    c.r[1].d[0] = c.r[2].sd[0] < 100ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[18], c.r[29].w[0] + 208u);  if (t) { goto L_0030EA44; } }
    set32(c.r[4], ld32((c.r[18].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030E998u); set32(c.r[5], 0u + 118u);  if (depth < kMaxDepth) unit_008E(c, 338u, depth + 1u); else { c.pc = 0x0033B340u; return; } if (c.pc != 0x0030E998u) [[unlikely]] return; }
L_0030E998:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030E9A0u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_001C(c, 264u, depth + 1u); else { c.pc = 0x00173050u; return; } if (c.pc != 0x0030E9A0u) [[unlikely]] return; }
L_0030E9A0:
    c.r[21].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_0030E9C4; } }
L_0030E9AC:
    set32(c.r[18], c.r[18].w[0] + 16u);
    set32(c.r[2], c.r[21].w[0] + c.r[2].w[0]);
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = ld16((c.r[2].w[0] + 26u));
    st32((c.r[20].w[0]), c.r[2].w[0]);
    set32(c.r[20], c.r[20].w[0] + 4u);
    c.budget -= 6;
L_0030E9C4:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0] + 22u)));
    c.r[2].d[0] = c.r[17].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[17].w[0] << 1);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0030E9ACu | kUnwind; return; } goto L_0030E9AC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[17].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;  if (t) { goto L_0030EA34; } }
L_0030E9DC:
    c.budget -= 2;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 2));  if (t) { goto L_0030E9EC; } }
    set32(c.r[2], c.r[3].w[0] + 3u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 2));
    c.budget -= 2;
L_0030E9EC:
    c.r[1].d[0] = c.r[2].sd[0] < c.r[19].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[4].d[0] = c.r[23].d[0] + 0ull;  if (t) { goto L_0030EA74; } }
    set32(c.r[4], ld32((c.r[18].w[0])));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0] + 22u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030EA08u); c.r[5].d[0] = c.r[23].d[0] + 0ull;  if (depth < kMaxDepth) unit_008E(c, 61u, depth + 1u); else { c.pc = 0x00338A00u; return; } if (c.pc != 0x0030EA08u) [[unlikely]] return; }
L_0030EA08:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0030EA1C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[18], c.r[18].w[0] + 16u);  if (t) { goto L_0030EA2C; } }
L_0030EA1C:
    set32(c.r[2], ld32((c.r[18].w[0])));
    st32((c.r[20].w[0]), c.r[2].w[0]);
    set32(c.r[18], c.r[18].w[0] + 16u);
    set32(c.r[20], c.r[20].w[0] + 4u);
    c.budget -= 4;
L_0030EA2C:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 2;
L_0030EA34:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], c.r[20].w[0] - c.r[23].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0030E9DCu | kUnwind; return; } goto L_0030E9DC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0030EA70; } }
L_0030EA44:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_0030EA64; } }
L_0030EA4C:
    set32(c.r[3], ld32((c.r[18].w[0])));
    set32(c.r[2], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[20].w[0] + c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    set32(c.r[18], c.r[18].w[0] + 16u);
    c.budget -= 6;
L_0030EA64:
    c.r[2].d[0] = c.r[4].sd[0] < c.r[19].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0030EA4Cu | kUnwind; return; } goto L_0030EA4C; } }
L_0030EA70:
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    c.budget -= 1;
L_0030EA74:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030EA7Cu); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_008D(c, 216u, depth + 1u); else { c.pc = 0x003367B0u; return; } if (c.pc != 0x0030EA7Cu) [[unlikely]] return; }
L_0030EA7C:
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 2096u);  c.pc = t; return; }
L_0030EAB0:
    set32(c.r[9], 0u + 1u);
    c.budget -= 3;
    { c.r[10].d[0] = c.r[9].d[0] + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x0030E6B0u | kUnwind; return; } goto L_0030E6B0; }
L_0030EAC0:
    set32(c.r[29], c.r[29].w[0] - 1584u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    c.r[30].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    c.r[23].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[22].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    set32(c.r[20], c.r[29].w[0] + 160u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030EB08u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x0030EB08u) [[unlikely]] return; }
L_0030EB08:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    set32(c.r[4], ld32((c.r[1].w[0] - 25584u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030EB1Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 104u, depth + 1u); else { c.pc = 0x0012CEC0u; return; } if (c.pc != 0x0030EB1Cu) [[unlikely]] return; }
L_0030EB1C:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[19].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
L_0030EB28:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030EB30u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 104u, depth + 1u); else { c.pc = 0x0012CEC0u; return; } if (c.pc != 0x0030EB30u) [[unlikely]] return; }
L_0030EB30:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030EB38u); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x0030EB38u) [[unlikely]] return; }
L_0030EB38:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    set32(c.r[2], ld32((c.r[1].w[0] - 25584u)));
    c.budget -= 5;
    { const bool t = c.r[19].d[0] == c.r[2].d[0]; c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_0030EBBC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030EB54u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 108u, depth + 1u); else { c.pc = 0x0012D050u; return; } if (c.pc != 0x0030EB54u) [[unlikely]] return; }
L_0030EB54:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_0030EBBC; } }
    c.r[5].d[0] = c.r[23].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030EB6Cu); c.r[6].d[0] = c.r[30].d[0] + 0ull;  if (depth < kMaxDepth) unit_008E(c, 61u, depth + 1u); else { c.pc = 0x00338A00u; return; } if (c.pc != 0x0030EB6Cu) [[unlikely]] return; }
L_0030EB6C:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0030EBBC; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 353u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 353u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0030EBBC; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 354u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 354u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0030EBBC; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 346u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0030EBBC; } }
    st32((c.r[20].w[0]), c.r[19].w[0]);
    set32(c.r[18], c.r[18].w[0] + 1u);
    st32((c.r[20].w[0] + 4u), c.r[16].w[0]);
    st32((c.r[20].w[0] + 8u), c.r[17].w[0]);
    set32(c.r[20], c.r[20].w[0] + 12u);
    c.budget -= 5;
L_0030EBBC:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.r[2].d[0] = c.r[19].sd[0] < 118ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0030EB28u | kUnwind; return; } goto L_0030EB28; } }
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[6], 0u + 12u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030EBE0u); set32(c.r[7], 0u + 50u);  if (depth < kMaxDepth) unit_008E(c, 239u, depth + 1u); else { c.pc = 0x0033A0F0u; return; } if (c.pc != 0x0030EBE0u) [[unlikely]] return; }
L_0030EBE0:
    c.r[1].d[0] = c.r[18].sd[0] < c.r[21].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[5], c.r[29].w[0] + 160u);  if (t) { goto L_0030EBF0; } }
    c.r[21].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_0030EBF0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_0030EC10; } }
L_0030EBF8:
    set32(c.r[3], ld32((c.r[5].w[0])));
    set32(c.r[2], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[22].w[0] + c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    set32(c.r[5], c.r[5].w[0] + 12u);
    c.budget -= 6;
L_0030EC10:
    c.r[2].d[0] = c.r[4].sd[0] < c.r[21].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0030EBF8u | kUnwind; return; } goto L_0030EBF8; } }
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030EC28u); c.r[5].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_008D(c, 216u, depth + 1u); else { c.pc = 0x003367B0u; return; } if (c.pc != 0x0030EC28u) [[unlikely]] return; }
L_0030EC28:
    c.r[2].d[0] = c.r[21].d[0] + 0ull;
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 1584u);  c.pc = t; return; }
L_0030EC60:
    set32(c.r[29], c.r[29].w[0] - 1584u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    c.r[30].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    c.r[23].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[22].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    set32(c.r[20], c.r[29].w[0] + 160u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030ECA8u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x0030ECA8u) [[unlikely]] return; }
L_0030ECA8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    set32(c.r[4], ld32((c.r[1].w[0] - 25584u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030ECBCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 104u, depth + 1u); else { c.pc = 0x0012CEC0u; return; } if (c.pc != 0x0030ECBCu) [[unlikely]] return; }
L_0030ECBC:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[19].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
L_0030ECC8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030ECD0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 104u, depth + 1u); else { c.pc = 0x0012CEC0u; return; } if (c.pc != 0x0030ECD0u) [[unlikely]] return; }
L_0030ECD0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030ECD8u); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x0030ECD8u) [[unlikely]] return; }
L_0030ECD8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    set32(c.r[2], ld32((c.r[1].w[0] - 25584u)));
    c.budget -= 5;
    { const bool t = c.r[19].d[0] == c.r[2].d[0]; c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_0030ED5C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030ECF4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 108u, depth + 1u); else { c.pc = 0x0012D050u; return; } if (c.pc != 0x0030ECF4u) [[unlikely]] return; }
L_0030ECF4:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_0030ED5C; } }
    c.r[5].d[0] = c.r[23].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030ED0Cu); c.r[6].d[0] = c.r[30].d[0] + 0ull;  if (depth < kMaxDepth) unit_008E(c, 61u, depth + 1u); else { c.pc = 0x00338A00u; return; } if (c.pc != 0x0030ED0Cu) [[unlikely]] return; }
L_0030ED0C:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0030ED5C; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 353u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 353u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0030ED5C; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 354u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 354u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0030ED5C; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 346u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0030ED5C; } }
    st32((c.r[20].w[0]), c.r[19].w[0]);
    set32(c.r[18], c.r[18].w[0] + 1u);
    st32((c.r[20].w[0] + 4u), c.r[16].w[0]);
    st32((c.r[20].w[0] + 8u), c.r[17].w[0]);
    set32(c.r[20], c.r[20].w[0] + 12u);
    c.budget -= 5;
L_0030ED5C:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.r[2].d[0] = c.r[19].sd[0] < 118ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0030ECC8u | kUnwind; return; } goto L_0030ECC8; } }
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[6], 0u + 12u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030ED80u); set32(c.r[7], 0u + 50u);  if (depth < kMaxDepth) unit_008E(c, 239u, depth + 1u); else { c.pc = 0x0033A0F0u; return; } if (c.pc != 0x0030ED80u) [[unlikely]] return; }
L_0030ED80:
    c.r[1].d[0] = c.r[18].sd[0] < c.r[21].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[5], c.r[29].w[0] + 160u);  if (t) { goto L_0030ED90; } }
    c.r[21].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_0030ED90:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_0030EDB0; } }
L_0030ED98:
    set32(c.r[3], ld32((c.r[5].w[0])));
    set32(c.r[2], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[22].w[0] + c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    set32(c.r[5], c.r[5].w[0] + 12u);
    c.budget -= 6;
L_0030EDB0:
    c.r[2].d[0] = c.r[4].sd[0] < c.r[21].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0030ED98u | kUnwind; return; } goto L_0030ED98; } }
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030EDC8u); c.r[5].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_008D(c, 216u, depth + 1u); else { c.pc = 0x003367B0u; return; } if (c.pc != 0x0030EDC8u) [[unlikely]] return; }
L_0030EDC8:
    c.r[2].d[0] = c.r[21].d[0] + 0ull;
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 1584u);  c.pc = t; return; }
L_0030EE00:
    set32(c.r[29], c.r[29].w[0] - 2048u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    c.r[30].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    c.r[23].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    set32(c.r[20], c.r[29].w[0] + 160u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030EE48u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 108u, depth + 1u); else { c.pc = 0x0012D050u; return; } if (c.pc != 0x0030EE48u) [[unlikely]] return; }
L_0030EE48:
    c.r[22].d[0] = c.r[16].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[22].d[0] != 0ull; c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (t) { goto L_0030EE78; } }
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030EE60u); set32(c.r[5], 0u + 118u);  if (depth < kMaxDepth) unit_008E(c, 336u, depth + 1u); else { c.pc = 0x0033B310u; return; } if (c.pc != 0x0030EE60u) [[unlikely]] return; }
L_0030EE60:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0030EE74; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 118u);  if (t) { goto L_0030F010; } }
L_0030EE74:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 1;
L_0030EE78:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030EE80u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 104u, depth + 1u); else { c.pc = 0x0012CEC0u; return; } if (c.pc != 0x0030EE80u) [[unlikely]] return; }
L_0030EE80:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[18].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
L_0030EE8C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030EE94u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 104u, depth + 1u); else { c.pc = 0x0012CEC0u; return; } if (c.pc != 0x0030EE94u) [[unlikely]] return; }
L_0030EE94:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030EEA8u); c.r[19].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 108u, depth + 1u); else { c.pc = 0x0012D050u; return; } if (c.pc != 0x0030EEA8u) [[unlikely]] return; }
L_0030EEA8:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_0030EF94; } }
    c.r[5].d[0] = c.r[23].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030EEC0u); c.r[6].d[0] = c.r[30].d[0] + 0ull;  if (depth < kMaxDepth) unit_008E(c, 61u, depth + 1u); else { c.pc = 0x00338A00u; return; } if (c.pc != 0x0030EEC0u) [[unlikely]] return; }
L_0030EEC0:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (t) { goto L_0030EF94; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030EED4u);  if (depth < kMaxDepth) unit_008E(c, 330u, depth + 1u); else { c.pc = 0x0033B260u; return; } if (c.pc != 0x0030EED4u) [[unlikely]] return; }
L_0030EED4:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_0030EEE4; } }
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.budget -= 1;
L_0030EEE4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030EEECu); set32(c.r[5], 0u + 118u);  if (depth < kMaxDepth) unit_008E(c, 336u, depth + 1u); else { c.pc = 0x0033B310u; return; } if (c.pc != 0x0030EEECu) [[unlikely]] return; }
L_0030EEEC:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0030EF04; } }
    c.budget -= 2;
    { const bool t = c.r[22].d[0] == 0ull;  if (t) { goto L_0030EF94; } }
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.budget -= 1;
L_0030EF04:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030EF0Cu);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x0030EF0Cu) [[unlikely]] return; }
L_0030EF0C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    set32(c.r[2], ld32((c.r[1].w[0] - 25584u)));
    c.budget -= 5;
    { const bool t = c.r[18].d[0] == c.r[2].d[0];  if (t) { goto L_0030EF94; } }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == c.r[21].d[0];  if (t) { goto L_0030EF94; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 353u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 353u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0030EF94; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 354u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 354u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0030EF94; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 346u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0030EF5C; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0030EF5C:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 346u)));
    c.r[4].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    set32(c.r[2], 0u + 1u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0030EF74; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0030EF74:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { goto L_0030EF94; } }
    st32((c.r[20].w[0]), c.r[18].w[0]);
    st32((c.r[20].w[0] + 4u), c.r[16].w[0]);
    st32((c.r[20].w[0] + 8u), c.r[17].w[0]);
    st32((c.r[20].w[0] + 12u), c.r[19].w[0]);
    set32(c.r[20], c.r[20].w[0] + 16u);
    c.budget -= 5;
L_0030EF94:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[2].d[0] = c.r[18].sd[0] < 118ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0030EE8Cu | kUnwind; return; } goto L_0030EE8C; } }
    set32(c.r[2], c.r[29].w[0] + 160u);
    set32(c.r[2], c.r[20].w[0] - c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] >= 0; set32(c.r[16], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 4));  if (t) { goto L_0030EFBC; } }
    set32(c.r[2], c.r[2].w[0] + 15u);
    set32(c.r[16], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 4));
    c.budget -= 2;
L_0030EFBC:
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00330000u);
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], 0u + 16u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030EFD4u); set32(c.r[7], c.r[7].w[0] + 29648u);  if (depth < kMaxDepth) unit_0009(c, 126u, depth + 1u); else { c.pc = 0x00126150u; return; } if (c.pc != 0x0030EFD4u) [[unlikely]] return; }
L_0030EFD4:
    c.budget -= 2;
    { const bool t = c.r[16].sd[0] <= 0; c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (t) { goto L_0030F000; } }
    set32(c.r[16], ld32((c.r[29].w[0] + 160u)));
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030EFECu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 102u, depth + 1u); else { c.pc = 0x0012CDE0u; return; } if (c.pc != 0x0030EFECu) [[unlikely]] return; }
L_0030EFEC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030EFF8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 102u, depth + 1u); else { c.pc = 0x0012CDE0u; return; } if (c.pc != 0x0030EFF8u) [[unlikely]] return; }
L_0030EFF8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0030F010; } }
L_0030F000:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030F00Cu); set32(c.r[16], 0u + 118u);  if (depth < kMaxDepth) unit_000B(c, 102u, depth + 1u); else { c.pc = 0x0012CDE0u; return; } if (c.pc != 0x0030F00Cu) [[unlikely]] return; }
L_0030F00C:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0030F010:
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
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 2048u);  c.pc = t; return; }
L_0030F040:
    set32(c.r[29], c.r[29].w[0] - 2048u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    c.r[23].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[22].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    set32(c.r[20], c.r[29].w[0] + 160u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030F088u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 108u, depth + 1u); else { c.pc = 0x0012D050u; return; } if (c.pc != 0x0030F088u) [[unlikely]] return; }
L_0030F088:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (t) { goto L_0030F09C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 118u);  if (t) { goto L_0030F27C; } }
L_0030F09C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030F0A4u);  if (depth < kMaxDepth) unit_008E(c, 330u, depth + 1u); else { c.pc = 0x0033B260u; return; } if (c.pc != 0x0030F0A4u) [[unlikely]] return; }
L_0030F0A4:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[30].d[0] = c.r[16].d[0] & 255ull;  if (t) { goto L_0030F0B8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 118u);  if (t) { goto L_0030F27C; } }
L_0030F0B8:
    c.budget -= 2;
    { const bool t = c.r[30].d[0] != 0ull; c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (t) { goto L_0030F0E4; } }
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030F0CCu); set32(c.r[5], 0u + 118u);  if (depth < kMaxDepth) unit_008E(c, 336u, depth + 1u); else { c.pc = 0x0033B310u; return; } if (c.pc != 0x0030F0CCu) [[unlikely]] return; }
L_0030F0CC:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0030F0E0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 118u);  if (t) { goto L_0030F27C; } }
L_0030F0E0:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 1;
L_0030F0E4:
    c.r[5].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030F0F0u); c.r[6].d[0] = c.r[23].d[0] + 0ull;  if (depth < kMaxDepth) unit_008E(c, 61u, depth + 1u); else { c.pc = 0x00338A00u; return; } if (c.pc != 0x0030F0F0u) [[unlikely]] return; }
L_0030F0F0:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (t) { goto L_0030F104; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 118u);  if (t) { goto L_0030F27C; } }
L_0030F104:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030F10Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 104u, depth + 1u); else { c.pc = 0x0012CEC0u; return; } if (c.pc != 0x0030F10Cu) [[unlikely]] return; }
L_0030F10C:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[19].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
L_0030F118:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030F120u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 104u, depth + 1u); else { c.pc = 0x0012CEC0u; return; } if (c.pc != 0x0030F120u) [[unlikely]] return; }
L_0030F120:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030F134u); c.r[18].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 108u, depth + 1u); else { c.pc = 0x0012D050u; return; } if (c.pc != 0x0030F134u) [[unlikely]] return; }
L_0030F134:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_0030F200; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030F148u);  if (depth < kMaxDepth) unit_008E(c, 330u, depth + 1u); else { c.pc = 0x0033B260u; return; } if (c.pc != 0x0030F148u) [[unlikely]] return; }
L_0030F148:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_0030F200; } }
    c.r[5].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030F160u); c.r[6].d[0] = c.r[23].d[0] + 0ull;  if (depth < kMaxDepth) unit_008E(c, 61u, depth + 1u); else { c.pc = 0x00338A00u; return; } if (c.pc != 0x0030F160u) [[unlikely]] return; }
L_0030F160:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_0030F200; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030F174u); set32(c.r[5], 0u + 118u);  if (depth < kMaxDepth) unit_008E(c, 336u, depth + 1u); else { c.pc = 0x0033B310u; return; } if (c.pc != 0x0030F174u) [[unlikely]] return; }
L_0030F174:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0030F18C; } }
    c.budget -= 2;
    { const bool t = c.r[30].d[0] == 0ull;  if (t) { goto L_0030F200; } }
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_0030F18C:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == c.r[21].d[0];  if (t) { goto L_0030F200; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 353u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 353u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0030F200; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 354u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 354u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0030F200; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 346u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0030F1C8; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0030F1C8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 346u)));
    c.r[4].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    set32(c.r[2], 0u + 1u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0030F1E0; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0030F1E0:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { goto L_0030F200; } }
    st32((c.r[20].w[0]), c.r[19].w[0]);
    st32((c.r[20].w[0] + 4u), c.r[16].w[0]);
    st32((c.r[20].w[0] + 8u), c.r[17].w[0]);
    st32((c.r[20].w[0] + 12u), c.r[18].w[0]);
    set32(c.r[20], c.r[20].w[0] + 16u);
    c.budget -= 5;
L_0030F200:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.r[2].d[0] = c.r[19].sd[0] < 118ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0030F118u | kUnwind; return; } goto L_0030F118; } }
    set32(c.r[2], c.r[29].w[0] + 160u);
    set32(c.r[2], c.r[20].w[0] - c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] >= 0; set32(c.r[16], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 4));  if (t) { goto L_0030F228; } }
    set32(c.r[2], c.r[2].w[0] + 15u);
    set32(c.r[16], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 4));
    c.budget -= 2;
L_0030F228:
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00330000u);
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], 0u + 16u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030F240u); set32(c.r[7], c.r[7].w[0] + 29488u);  if (depth < kMaxDepth) unit_0009(c, 126u, depth + 1u); else { c.pc = 0x00126150u; return; } if (c.pc != 0x0030F240u) [[unlikely]] return; }
L_0030F240:
    c.budget -= 2;
    { const bool t = c.r[16].sd[0] <= 0; c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (t) { goto L_0030F26C; } }
    set32(c.r[16], ld32((c.r[29].w[0] + 160u)));
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030F258u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 102u, depth + 1u); else { c.pc = 0x0012CDE0u; return; } if (c.pc != 0x0030F258u) [[unlikely]] return; }
L_0030F258:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030F264u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 102u, depth + 1u); else { c.pc = 0x0012CDE0u; return; } if (c.pc != 0x0030F264u) [[unlikely]] return; }
L_0030F264:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0030F27C; } }
L_0030F26C:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030F278u); set32(c.r[16], 0u + 118u);  if (depth < kMaxDepth) unit_000B(c, 102u, depth + 1u); else { c.pc = 0x0012CDE0u; return; } if (c.pc != 0x0030F278u) [[unlikely]] return; }
L_0030F278:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0030F27C:
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
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 2048u);  c.pc = t; return; }
L_0030F2B0:
    set32(c.r[29], c.r[29].w[0] - 2032u);
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    c.r[23].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[22].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[5].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    set32(c.r[20], c.r[29].w[0] + 144u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030F2F0u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_000B(c, 108u, depth + 1u); else { c.pc = 0x0012D050u; return; } if (c.pc != 0x0030F2F0u) [[unlikely]] return; }
L_0030F2F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030F2F8u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_008E(c, 330u, depth + 1u); else { c.pc = 0x0033B260u; return; } if (c.pc != 0x0030F2F8u) [[unlikely]] return; }
L_0030F2F8:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (t) { goto L_0030F30C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 118u);  if (t) { goto L_0030F498; } }
L_0030F30C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030F314u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 104u, depth + 1u); else { c.pc = 0x0012CEC0u; return; } if (c.pc != 0x0030F314u) [[unlikely]] return; }
L_0030F314:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[18].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
L_0030F320:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030F328u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 104u, depth + 1u); else { c.pc = 0x0012CEC0u; return; } if (c.pc != 0x0030F328u) [[unlikely]] return; }
L_0030F328:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030F33Cu); c.r[19].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 108u, depth + 1u); else { c.pc = 0x0012D050u; return; } if (c.pc != 0x0030F33Cu) [[unlikely]] return; }
L_0030F33C:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_0030F41C; } }
    c.r[5].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030F354u); c.r[6].d[0] = c.r[23].d[0] + 0ull;  if (depth < kMaxDepth) unit_008E(c, 61u, depth + 1u); else { c.pc = 0x00338A00u; return; } if (c.pc != 0x0030F354u) [[unlikely]] return; }
L_0030F354:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (t) { goto L_0030F41C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030F368u);  if (depth < kMaxDepth) unit_008E(c, 330u, depth + 1u); else { c.pc = 0x0033B260u; return; } if (c.pc != 0x0030F368u) [[unlikely]] return; }
L_0030F368:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_0030F41C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030F37Cu); set32(c.r[5], 0u + 118u);  if (depth < kMaxDepth) unit_008E(c, 336u, depth + 1u); else { c.pc = 0x0033B310u; return; } if (c.pc != 0x0030F37Cu) [[unlikely]] return; }
L_0030F37C:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0030F38C; } }
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.budget -= 1;
L_0030F38C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030F394u);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x0030F394u) [[unlikely]] return; }
L_0030F394:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    set32(c.r[2], ld32((c.r[1].w[0] - 25584u)));
    c.budget -= 5;
    { const bool t = c.r[18].d[0] == c.r[2].d[0];  if (t) { goto L_0030F41C; } }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == c.r[21].d[0];  if (t) { goto L_0030F41C; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 353u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 353u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0030F41C; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 354u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 354u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0030F41C; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 346u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0030F3E4; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0030F3E4:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 346u)));
    c.r[4].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    set32(c.r[2], 0u + 1u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0030F3FC; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0030F3FC:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { goto L_0030F41C; } }
    st32((c.r[20].w[0]), c.r[18].w[0]);
    st32((c.r[20].w[0] + 4u), c.r[16].w[0]);
    st32((c.r[20].w[0] + 8u), c.r[17].w[0]);
    st32((c.r[20].w[0] + 12u), c.r[19].w[0]);
    set32(c.r[20], c.r[20].w[0] + 16u);
    c.budget -= 5;
L_0030F41C:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[2].d[0] = c.r[18].sd[0] < 118ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0030F320u | kUnwind; return; } goto L_0030F320; } }
    set32(c.r[2], c.r[29].w[0] + 144u);
    set32(c.r[2], c.r[20].w[0] - c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] >= 0; set32(c.r[16], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 4));  if (t) { goto L_0030F444; } }
    set32(c.r[2], c.r[2].w[0] + 15u);
    set32(c.r[16], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 4));
    c.budget -= 2;
L_0030F444:
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00330000u);
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], 0u + 16u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030F45Cu); set32(c.r[7], c.r[7].w[0] + 29648u);  if (depth < kMaxDepth) unit_0009(c, 126u, depth + 1u); else { c.pc = 0x00126150u; return; } if (c.pc != 0x0030F45Cu) [[unlikely]] return; }
L_0030F45C:
    c.budget -= 2;
    { const bool t = c.r[16].sd[0] <= 0; c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (t) { goto L_0030F488; } }
    set32(c.r[16], ld32((c.r[29].w[0] + 144u)));
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030F474u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 102u, depth + 1u); else { c.pc = 0x0012CDE0u; return; } if (c.pc != 0x0030F474u) [[unlikely]] return; }
L_0030F474:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030F480u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 102u, depth + 1u); else { c.pc = 0x0012CDE0u; return; } if (c.pc != 0x0030F480u) [[unlikely]] return; }
L_0030F480:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0030F498; } }
L_0030F488:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030F494u); set32(c.r[16], 0u + 118u);  if (depth < kMaxDepth) unit_000B(c, 102u, depth + 1u); else { c.pc = 0x0012CDE0u; return; } if (c.pc != 0x0030F494u) [[unlikely]] return; }
L_0030F494:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0030F498:
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 2032u);  c.pc = t; return; }
L_0030F4D0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030F4F4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 108u, depth + 1u); else { c.pc = 0x0012D050u; return; } if (c.pc != 0x0030F4F4u) [[unlikely]] return; }
L_0030F4F4:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0030F508; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0030F628; } }
L_0030F508:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030F510u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 108u, depth + 1u); else { c.pc = 0x0012D050u; return; } if (c.pc != 0x0030F510u) [[unlikely]] return; }
L_0030F510:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_0030F524; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0030F628; } }
L_0030F524:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030F52Cu); set32(c.r[5], 0u + 118u);  if (depth < kMaxDepth) unit_008E(c, 336u, depth + 1u); else { c.pc = 0x0033B310u; return; } if (c.pc != 0x0030F52Cu) [[unlikely]] return; }
L_0030F52C:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0030F540; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0030F628; } }
L_0030F540:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030F548u); set32(c.r[5], 0u + 118u);  if (depth < kMaxDepth) unit_008E(c, 336u, depth + 1u); else { c.pc = 0x0033B310u; return; } if (c.pc != 0x0030F548u) [[unlikely]] return; }
L_0030F548:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_0030F55C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0030F628; } }
L_0030F55C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030F564u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 104u, depth + 1u); else { c.pc = 0x0012CEC0u; return; } if (c.pc != 0x0030F564u) [[unlikely]] return; }
L_0030F564:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030F574u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 104u, depth + 1u); else { c.pc = 0x0012CEC0u; return; } if (c.pc != 0x0030F574u) [[unlikely]] return; }
L_0030F574:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != c.r[17].d[0];  if (t) { goto L_0030F584; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0030F628; } }
L_0030F584:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 353u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 353u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0030F59C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0030F628; } }
L_0030F59C:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 354u)));
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 354u)));
    c.budget -= 4;
    { const bool t = c.r[7].d[0] != c.r[6].d[0];  if (t) { goto L_0030F5B4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0030F628; } }
L_0030F5B4:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 346u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0030F5C8; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0030F5C8:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 346u)));
    c.r[5].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    set32(c.r[3], 0u + 1u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0030F5E0; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0030F5E0:
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_0030F5F4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0030F628; } }
L_0030F5F4:
    st8((c.r[16].w[0] + 354u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    st8((c.r[2].w[0] + 354u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 357u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 357u)));
    st8((c.r[16].w[0] + 357u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030F618u); st8((c.r[2].w[0] + 357u), static_cast<std::uint8_t>(c.r[6].w[0]));  if (depth < kMaxDepth) unit_000B(c, 102u, depth + 1u); else { c.pc = 0x0012CDE0u; return; } if (c.pc != 0x0030F618u) [[unlikely]] return; }
L_0030F618:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030F624u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 102u, depth + 1u); else { c.pc = 0x0012CDE0u; return; } if (c.pc != 0x0030F624u) [[unlikely]] return; }
L_0030F624:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0030F628:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0030F640:
    set32(c.r[29], c.r[29].w[0] - 176u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    c.r[18].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[2], c.r[18].w[0] + 2u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030F680u); set32(c.r[4], c.r[2].w[0] << 2);  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x001001F0u; return; } if (c.pc != 0x0030F680u) [[unlikely]] return; }
L_0030F680:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[16], 0u + 118u);
    c.budget -= 4;
    { const bool t = c.r[18].sd[0] <= 0; set32(c.r[22], 0u - 1u);  if (t) { goto L_0030F6A0; } }
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[6], c.r[18].w[0] << 2);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030F6A0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 107u, depth + 1u); else { c.pc = 0x001415A0u; return; } if (c.pc != 0x0030F6A0u) [[unlikely]] return; }
L_0030F6A0:
    set32(c.r[4], 0u + 2u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030F6ACu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0088(c, 510u, depth + 1u); else { c.pc = 0x00323260u; return; } if (c.pc != 0x0030F6ACu) [[unlikely]] return; }
L_0030F6AC:
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 3;
    { const bool t = c.r[20].d[0] != c.r[2].d[0]; set32(c.r[4], 0u + 2u);  if (t) { goto L_0030F6E0; } }
    set32(c.r[4], 0u + 2u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030F6C4u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0088(c, 510u, depth + 1u); else { c.pc = 0x00323260u; return; } if (c.pc != 0x0030F6C4u) [[unlikely]] return; }
L_0030F6C4:
    c.r[16].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[2], c.r[18].w[0] << 2);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[18], c.r[18].w[0] + 2u);
    st32((c.r[2].w[0]), c.r[20].w[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 4u), c.r[16].w[0]);  if (t) { goto L_0030F78C; } }
L_0030F6E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030F6E8u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0088(c, 510u, depth + 1u); else { c.pc = 0x00323260u; return; } if (c.pc != 0x0030F6E8u) [[unlikely]] return; }
L_0030F6E8:
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 3;
    { const bool t = c.r[20].d[0] != c.r[2].d[0]; set32(c.r[4], 0u + 3u);  if (t) { goto L_0030F71C; } }
    set32(c.r[4], 0u + 2u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030F700u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0088(c, 510u, depth + 1u); else { c.pc = 0x00323260u; return; } if (c.pc != 0x0030F700u) [[unlikely]] return; }
L_0030F700:
    c.r[16].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[2], c.r[18].w[0] << 2);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[18], c.r[18].w[0] + 2u);
    st32((c.r[2].w[0]), c.r[20].w[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 4u), c.r[16].w[0]);  if (t) { goto L_0030F78C; } }
L_0030F71C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030F724u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0088(c, 510u, depth + 1u); else { c.pc = 0x00323260u; return; } if (c.pc != 0x0030F724u) [[unlikely]] return; }
L_0030F724:
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 3;
    { const bool t = c.r[20].d[0] != c.r[2].d[0]; set32(c.r[4], 0u + 3u);  if (t) { goto L_0030F758; } }
    set32(c.r[4], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030F73Cu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0088(c, 510u, depth + 1u); else { c.pc = 0x00323260u; return; } if (c.pc != 0x0030F73Cu) [[unlikely]] return; }
L_0030F73C:
    c.r[16].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[2], c.r[18].w[0] << 2);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[18], c.r[18].w[0] + 2u);
    st32((c.r[2].w[0]), c.r[20].w[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 4u), c.r[16].w[0]);  if (t) { goto L_0030F78C; } }
L_0030F758:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030F760u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0088(c, 510u, depth + 1u); else { c.pc = 0x00323260u; return; } if (c.pc != 0x0030F760u) [[unlikely]] return; }
L_0030F760:
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 3;
    { const bool t = c.r[20].d[0] != c.r[2].d[0]; set32(c.r[4], 0u + 3u);  if (t) { goto L_0030F78C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030F774u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0088(c, 510u, depth + 1u); else { c.pc = 0x00323260u; return; } if (c.pc != 0x0030F774u) [[unlikely]] return; }
L_0030F774:
    c.r[16].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[2], c.r[18].w[0] << 2);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[18], c.r[18].w[0] + 2u);
    st32((c.r[2].w[0]), c.r[20].w[0]);
    st32((c.r[2].w[0] + 4u), c.r[16].w[0]);
    c.budget -= 6;
L_0030F78C:
    set32(c.r[2], 0u + 118u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 118u);  if (t) { goto L_0030F80C; } }
    set32(c.r[3], c.r[20].w[0] << 2);
    set32(c.r[2], c.r[16].w[0] << 2);
    set32(c.r[5], c.r[3].w[0] + c.r[20].w[0]);
    set32(c.r[6], 0u + 25500u);
    set32(c.r[3], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[4], c.r[5].w[0] << 2);
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[5], c.r[2].w[0] << 2);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030F7CCu); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_001C(c, 327u, depth + 1u); else { c.pc = 0x001737A0u; return; } if (c.pc != 0x0030F7CCu) [[unlikely]] return; }
L_0030F7CC:
    c.r[21].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[21].d[0] == 0ull; c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (t) { goto L_0030F808; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030F7E0u);  if (depth < kMaxDepth) unit_001C(c, 335u, depth + 1u); else { c.pc = 0x00173940u; return; } if (c.pc != 0x0030F7E0u) [[unlikely]] return; }
L_0030F7E0:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (t) { goto L_0030F808; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030F7F4u);  if (depth < kMaxDepth) unit_001C(c, 358u, depth + 1u); else { c.pc = 0x00173E40u; return; } if (c.pc != 0x0030F7F4u) [[unlikely]] return; }
L_0030F7F4:
    c.r[22].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030F808u); set32(c.r[6], 0u + 38u);  if (depth < kMaxDepth) unit_0010(c, 107u, depth + 1u); else { c.pc = 0x001415A0u; return; } if (c.pc != 0x0030F808u) [[unlikely]] return; }
L_0030F808:
    set32(c.r[2], 0u + 118u);
    c.budget -= 1;
L_0030F80C:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] != c.r[2].d[0]; c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_0030F830; } }
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030F828u); c.r[7].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0083(c, 314u, depth + 1u); else { c.pc = 0x0030EE00u; return; } if (c.pc != 0x0030F828u) [[unlikely]] return; }
L_0030F828:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 2;
L_0030F830:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030F838u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 104u, depth + 1u); else { c.pc = 0x0012CEC0u; return; } if (c.pc != 0x0030F838u) [[unlikely]] return; }
L_0030F838:
    c.r[21].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030F848u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 104u, depth + 1u); else { c.pc = 0x0012CEC0u; return; } if (c.pc != 0x0030F848u) [[unlikely]] return; }
L_0030F848:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0] + 354u)));
    c.r[4].d[0] = c.r[20].d[0] & 65535ull;
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 354u)));
    set32(c.r[5], 0u + 25500u);
    st8((c.r[21].w[0] + 354u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[2].w[0] + 354u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0] + 357u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 357u)));
    st8((c.r[21].w[0] + 357u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[2].w[0] + 357u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0] + 353u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 353u)));
    st8((c.r[21].w[0] + 353u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030F884u); st8((c.r[2].w[0] + 353u), static_cast<std::uint8_t>(c.r[6].w[0]));  if (depth < kMaxDepth) unit_001C(c, 300u, depth + 1u); else { c.pc = 0x00173420u; return; } if (c.pc != 0x0030F884u) [[unlikely]] return; }
L_0030F884:
    c.r[4].d[0] = c.r[19].d[0] & 65535ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030F890u); set32(c.r[5], 0u + 25500u);  if (depth < kMaxDepth) unit_001C(c, 300u, depth + 1u); else { c.pc = 0x00173420u; return; } if (c.pc != 0x0030F890u) [[unlikely]] return; }
L_0030F890:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030F89Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 102u, depth + 1u); else { c.pc = 0x0012CDE0u; return; } if (c.pc != 0x0030F89Cu) [[unlikely]] return; }
L_0030F89C:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030F8A8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 102u, depth + 1u); else { c.pc = 0x0012CDE0u; return; } if (c.pc != 0x0030F8A8u) [[unlikely]] return; }
L_0030F8A8:
    set32(c.r[2], 0u + 118u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[2].d[0]; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0030F974; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030F8BCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 104u, depth + 1u); else { c.pc = 0x0012CEC0u; return; } if (c.pc != 0x0030F8BCu) [[unlikely]] return; }
L_0030F8BC:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[20].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 354u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030F8CCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 104u, depth + 1u); else { c.pc = 0x0012CEC0u; return; } if (c.pc != 0x0030F8CCu) [[unlikely]] return; }
L_0030F8CC:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 354u)));
    c.budget -= 3;
    { const bool t = c.r[20].d[0] == c.r[2].d[0]; c.r[7].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_0030F974; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030F8E8u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0083(c, 314u, depth + 1u); else { c.pc = 0x0030EE00u; return; } if (c.pc != 0x0030F8E8u) [[unlikely]] return; }
L_0030F8E8:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030F8F8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 104u, depth + 1u); else { c.pc = 0x0012CEC0u; return; } if (c.pc != 0x0030F8F8u) [[unlikely]] return; }
L_0030F8F8:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030F908u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 104u, depth + 1u); else { c.pc = 0x0012CEC0u; return; } if (c.pc != 0x0030F908u) [[unlikely]] return; }
L_0030F908:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 354u)));
    c.r[4].d[0] = c.r[16].d[0] & 65535ull;
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 354u)));
    set32(c.r[5], 0u + 25500u);
    st8((c.r[18].w[0] + 354u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[2].w[0] + 354u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 357u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 357u)));
    st8((c.r[18].w[0] + 357u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[2].w[0] + 357u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 353u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 353u)));
    st8((c.r[18].w[0] + 353u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030F944u); st8((c.r[2].w[0] + 353u), static_cast<std::uint8_t>(c.r[6].w[0]));  if (depth < kMaxDepth) unit_001C(c, 300u, depth + 1u); else { c.pc = 0x00173420u; return; } if (c.pc != 0x0030F944u) [[unlikely]] return; }
L_0030F944:
    c.r[4].d[0] = c.r[19].d[0] & 65535ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030F950u); set32(c.r[5], 0u + 25500u);  if (depth < kMaxDepth) unit_001C(c, 300u, depth + 1u); else { c.pc = 0x00173420u; return; } if (c.pc != 0x0030F950u) [[unlikely]] return; }
L_0030F950:
    c.budget -= 2;
    { const bool t = c.r[22].sd[0] < 0; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0030F974; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030F960u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 104u, depth + 1u); else { c.pc = 0x0012CEC0u; return; } if (c.pc != 0x0030F960u) [[unlikely]] return; }
L_0030F960:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 354u)));
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 128u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030F974u); st8((c.r[29].w[0] + 152u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_001C(c, 268u, depth + 1u); else { c.pc = 0x00173090u; return; } if (c.pc != 0x0030F974u) [[unlikely]] return; }
L_0030F974:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030F97Cu);  if (depth < kMaxDepth) unit_008F(c, 12u, depth + 1u); else { c.pc = 0x0033C1A0u; return; } if (c.pc != 0x0030F97Cu) [[unlikely]] return; }
L_0030F97C:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; c.r[2].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_0030F990; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030F98Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100210u; return; } if (c.pc != 0x0030F98Cu) [[unlikely]] return; }
L_0030F98C:
    c.r[2].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_0030F990:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 176u);  c.pc = t; return; }
L_0030F9C0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030F9ECu); c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 108u, depth + 1u); else { c.pc = 0x0012D050u; return; } if (c.pc != 0x0030F9ECu) [[unlikely]] return; }
L_0030F9EC:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_0030FA00; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0030FBB0; } }
L_0030FA00:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030FA08u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 108u, depth + 1u); else { c.pc = 0x0012D050u; return; } if (c.pc != 0x0030FA08u) [[unlikely]] return; }
L_0030FA08:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_0030FA1C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0030FBB0; } }
L_0030FA1C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030FA24u);  if (depth < kMaxDepth) unit_008E(c, 330u, depth + 1u); else { c.pc = 0x0033B260u; return; } if (c.pc != 0x0030FA24u) [[unlikely]] return; }
L_0030FA24:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_0030FA38; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0030FBB0; } }
L_0030FA38:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030FA40u);  if (depth < kMaxDepth) unit_008E(c, 330u, depth + 1u); else { c.pc = 0x0033B260u; return; } if (c.pc != 0x0030FA40u) [[unlikely]] return; }
L_0030FA40:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0030FA54; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0030FBB0; } }
L_0030FA54:
    c.r[16].d[0] = c.r[16].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != 0ull; c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_0030FAA0; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030FA6Cu); set32(c.r[5], 0u + 118u);  if (depth < kMaxDepth) unit_008E(c, 336u, depth + 1u); else { c.pc = 0x0033B310u; return; } if (c.pc != 0x0030FA6Cu) [[unlikely]] return; }
L_0030FA6C:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_0030FA80; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0030FBB0; } }
L_0030FA80:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030FA88u); set32(c.r[5], 0u + 118u);  if (depth < kMaxDepth) unit_008E(c, 336u, depth + 1u); else { c.pc = 0x0033B310u; return; } if (c.pc != 0x0030FA88u) [[unlikely]] return; }
L_0030FA88:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0030FA9C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0030FBB0; } }
L_0030FA9C:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_0030FAA0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030FAA8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 104u, depth + 1u); else { c.pc = 0x0012CEC0u; return; } if (c.pc != 0x0030FAA8u) [[unlikely]] return; }
L_0030FAA8:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030FAB8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 104u, depth + 1u); else { c.pc = 0x0012CEC0u; return; } if (c.pc != 0x0030FAB8u) [[unlikely]] return; }
L_0030FAB8:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] != c.r[18].d[0];  if (t) { goto L_0030FAC8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0030FBB0; } }
L_0030FAC8:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 353u)));
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 353u)));
    c.budget -= 4;
    { const bool t = c.r[7].d[0] != c.r[6].d[0];  if (t) { goto L_0030FAE0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0030FBB0; } }
L_0030FAE0:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 354u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 354u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0030FAF8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0030FBB0; } }
L_0030FAF8:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 346u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0030FB0C; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0030FB0C:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 346u)));
    c.r[5].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    set32(c.r[3], 0u + 1u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0030FB24; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0030FB24:
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_0030FB38; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0030FBB0; } }
L_0030FB38:
    st8((c.r[17].w[0] + 353u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull; st8((c.r[2].w[0] + 353u), static_cast<std::uint8_t>(c.r[7].w[0]));  if (t) { goto L_0030FB5C; } }
    c.r[4].d[0] = c.r[19].d[0] & 65535ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030FB50u); set32(c.r[5], 0u + 25500u);  if (depth < kMaxDepth) unit_001C(c, 300u, depth + 1u); else { c.pc = 0x00173420u; return; } if (c.pc != 0x0030FB50u) [[unlikely]] return; }
L_0030FB50:
    c.r[4].d[0] = c.r[18].d[0] & 65535ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030FB5Cu); set32(c.r[5], 0u + 25500u);  if (depth < kMaxDepth) unit_001C(c, 300u, depth + 1u); else { c.pc = 0x00173420u; return; } if (c.pc != 0x0030FB5Cu) [[unlikely]] return; }
L_0030FB5C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030FB64u);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x0030FB64u) [[unlikely]] return; }
L_0030FB64:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    set32(c.r[4], ld32((c.r[1].w[0] - 25584u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030FB78u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 104u, depth + 1u); else { c.pc = 0x0012CEC0u; return; } if (c.pc != 0x0030FB78u) [[unlikely]] return; }
L_0030FB78:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030FB80u); c.r[16].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 353u)));  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x0030FB80u) [[unlikely]] return; }
L_0030FB80:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030FB98u); st8((c.r[1].w[0] - 25571u), static_cast<std::uint8_t>(c.r[16].w[0]));  if (depth < kMaxDepth) unit_000B(c, 102u, depth + 1u); else { c.pc = 0x0012CDE0u; return; } if (c.pc != 0x0030FB98u) [[unlikely]] return; }
L_0030FB98:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030FBA4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 102u, depth + 1u); else { c.pc = 0x0012CDE0u; return; } if (c.pc != 0x0030FBA4u) [[unlikely]] return; }
L_0030FBA4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030FBACu);  if (depth < kMaxDepth) unit_008F(c, 12u, depth + 1u); else { c.pc = 0x0033C1A0u; return; } if (c.pc != 0x0030FBACu) [[unlikely]] return; }
L_0030FBAC:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0030FBB0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0030FBD0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.r[1].d[0] = c.r[16].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[1].d[0] != 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0030FC00; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0030FCEC; } }
L_0030FC00:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030FC08u);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x0030FC08u) [[unlikely]] return; }
L_0030FC08:
    c.r[1].d[0] = 0ull | 40072ull;
    set32(c.r[7], 0u - 1u);
    set32(c.r[5], c.r[2].w[0] + c.r[1].w[0]);
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[16].w[0] << 1);
    set32(c.r[4], 0u + 118u);
    set32(c.r[3], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    c.r[2].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    c.budget -= 14;
    { const bool t = 0ull == 0ull; set32(c.r[8], c.r[3].w[0] + 4u);  if (t) { goto L_0030FC70; } }
L_0030FC40:
    set32(c.r[3], c.r[8].w[0] + c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[3].w[0] + 28u)));
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[4].d[0]; set32(c.r[6], c.r[3].w[0] + 16u);  if (t) { goto L_0030FC7C; } }
    set32(c.r[3], ld32((c.r[6].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u - 1u);  if (t) { goto L_0030FC80; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != c.r[17].d[0];  if (t) { goto L_0030FC68; } }
    c.r[7].d[0] = c.r[9].d[0] + 0ull;
    c.budget -= 1;
L_0030FC68:
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[9], c.r[9].w[0] + 1u);
    c.budget -= 2;
L_0030FC70:
    c.r[3].d[0] = c.r[9].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], c.r[9].w[0] << 5);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0030FC40u | kUnwind; return; } goto L_0030FC40; } }
L_0030FC7C:
    set32(c.r[3], 0u - 1u);
    c.budget -= 1;
L_0030FC80:
    c.budget -= 2;
    { const bool t = c.r[7].d[0] != c.r[3].d[0]; set32(c.r[3], c.r[7].w[0] << 5);  if (t) { goto L_0030FC90; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0030FCEC; } }
L_0030FC90:
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[7], c.r[8].w[0] + c.r[3].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_0030FCCC; } }
L_0030FCA0:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 25u)));
    set32(c.r[3], c.r[8].w[0] + c.r[3].w[0]);
    set32(c.r[5], c.r[3].w[0] + 16u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 25u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0030FCC8; } }
    set32(c.r[3], ld32((c.r[5].w[0] + 12u)));
    set32(c.r[16], c.r[16].w[0] + 1u);
    st32((c.r[18].w[0]), c.r[3].w[0]);
    set32(c.r[18], c.r[18].w[0] + 4u);
    c.budget -= 4;
L_0030FCC8:
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.budget -= 1;
L_0030FCCC:
    c.r[3].d[0] = c.r[6].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], c.r[6].w[0] << 5);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0030FCA0u | kUnwind; return; } goto L_0030FCA0; } }
    set32(c.r[2], c.r[16].w[0] << 2);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030FCE8u); set32(c.r[4], c.r[18].w[0] - c.r[2].w[0]);  if (depth < kMaxDepth) unit_008D(c, 216u, depth + 1u); else { c.pc = 0x003367B0u; return; } if (c.pc != 0x0030FCE8u) [[unlikely]] return; }
L_0030FCE8:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0030FCEC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0030FD10:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030FD38u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x0030FD38u) [[unlikely]] return; }
L_0030FD38:
    set32(c.r[3], c.r[16].w[0] << 1);
    c.r[19].d[0] = c.r[18].d[0] << 56;
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    c.r[1].d[0] = 0ull | 40076ull;
    set32(c.r[3], c.r[3].w[0] << 2);
    c.r[19].d[0] = static_cast<std::uint64_t>(c.r[19].sd[0] >> 56);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[16], c.r[2].w[0] + c.r[1].w[0]);
    st16((c.r[16].w[0] + 12u), static_cast<std::uint16_t>(c.r[18].w[0]));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030FD6Cu); st16((c.r[16].w[0] + 14u), static_cast<std::uint16_t>(c.r[17].w[0]));  if (depth < kMaxDepth) unit_000B(c, 79u, depth + 1u); else { c.pc = 0x0012CB20u; return; } if (c.pc != 0x0030FD6Cu) [[unlikely]] return; }
L_0030FD6C:
    st8((c.r[2].w[0] + 688u), static_cast<std::uint8_t>(c.r[19].w[0]));
    c.r[19].d[0] = c.r[17].d[0] << 56;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030FD7Cu); c.r[19].d[0] = static_cast<std::uint64_t>(c.r[19].sd[0] >> 56);  if (depth < kMaxDepth) unit_000B(c, 79u, depth + 1u); else { c.pc = 0x0012CB20u; return; } if (c.pc != 0x0030FD7Cu) [[unlikely]] return; }
L_0030FD7C:
    st8((c.r[2].w[0] + 689u), static_cast<std::uint8_t>(c.r[19].w[0]));
    set32(c.r[2], c.r[18].w[0] << 5);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 28u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030FD94u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 102u, depth + 1u); else { c.pc = 0x0012CDE0u; return; } if (c.pc != 0x0030FD94u) [[unlikely]] return; }
L_0030FD94:
    set32(c.r[2], c.r[17].w[0] << 5);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 28u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030FDA8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 102u, depth + 1u); else { c.pc = 0x0012CDE0u; return; } if (c.pc != 0x0030FDA8u) [[unlikely]] return; }
L_0030FDA8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    set32(c.r[2], 0u + 1u);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0030FDD0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030FDE4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x0030FDE4u) [[unlikely]] return; }
L_0030FDE4:
    set32(c.r[3], c.r[16].w[0] << 1);
    c.r[1].d[0] = 0ull | 40076ull;
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[1].w[0]);
    c.r[2].d[0] = ld16((c.r[2].w[0] + 4u));
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0030FE20:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030FE3Cu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x0030FE3Cu) [[unlikely]] return; }
L_0030FE3C:
    c.r[1].d[0] = 0ull | 35856ull;
    set32(c.r[17], c.r[2].w[0] + c.r[1].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 4096u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030FE50u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 104u, depth + 1u); else { c.pc = 0x0012CEC0u; return; } if (c.pc != 0x0030FE50u) [[unlikely]] return; }
L_0030FE50:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 353u)));
    c.r[1].d[0] = c.r[18].d[0] < static_cast<std::uint64_t>(9ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[16].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;  if (t) { [[clang::musttail]] return unit_0084(c, 31u, depth); } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[3], c.r[18].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] - 14352u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x0030C000u < 16384u) { entry = entries_0083[(t - 0x0030C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0030FE7C:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030FE88u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0088(c, 510u, depth + 1u); else { c.pc = 0x00323260u; return; } if (c.pc != 0x0030FE88u) [[unlikely]] return; }
L_0030FE88:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[6].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[4], ld32((c.r[1].w[0] - 27616u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030FE9Cu); set32(c.r[5], 0u + 871u);  if (depth < kMaxDepth) unit_0058(c, 37u, depth + 1u); else { c.pc = 0x00260310u; return; } if (c.pc != 0x0030FE9Cu) [[unlikely]] return; }
L_0030FE9C:
    c.r[3].d[0] = c.r[16].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);  if (t) { [[clang::musttail]] return unit_0084(c, 31u, depth); } }
    set32(c.r[4], ld32((c.r[1].w[0] - 27616u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030FEB4u); set32(c.r[5], 0u + 871u);  if (depth < kMaxDepth) unit_0058(c, 46u, depth + 1u); else { c.pc = 0x00260440u; return; } if (c.pc != 0x0030FEB4u) [[unlikely]] return; }
L_0030FEB4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[6], ld32((c.r[2].w[0] + 4u)));
    set32(c.r[4], ld32((c.r[1].w[0] - 27616u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030FEC8u); set32(c.r[5], 0u + 870u);  if (depth < kMaxDepth) unit_0058(c, 37u, depth + 1u); else { c.pc = 0x00260310u; return; } if (c.pc != 0x0030FEC8u) [[unlikely]] return; }
L_0030FEC8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { [[clang::musttail]] return unit_0084(c, 32u, depth); } }
L_0030FED0:
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030FEDCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0088(c, 510u, depth + 1u); else { c.pc = 0x00323260u; return; } if (c.pc != 0x0030FEDCu) [[unlikely]] return; }
L_0030FEDC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[6].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[4], ld32((c.r[1].w[0] - 27616u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030FEF0u); set32(c.r[5], 0u + 872u);  if (depth < kMaxDepth) unit_0058(c, 37u, depth + 1u); else { c.pc = 0x00260310u; return; } if (c.pc != 0x0030FEF0u) [[unlikely]] return; }
L_0030FEF0:
    c.r[3].d[0] = c.r[16].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);  if (t) { [[clang::musttail]] return unit_0084(c, 31u, depth); } }
    set32(c.r[4], ld32((c.r[1].w[0] - 27616u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030FF08u); set32(c.r[5], 0u + 872u);  if (depth < kMaxDepth) unit_0058(c, 46u, depth + 1u); else { c.pc = 0x00260440u; return; } if (c.pc != 0x0030FF08u) [[unlikely]] return; }
L_0030FF08:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[6], ld32((c.r[2].w[0] + 4u)));
    set32(c.r[4], ld32((c.r[1].w[0] - 27616u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030FF1Cu); set32(c.r[5], 0u + 870u);  if (depth < kMaxDepth) unit_0058(c, 37u, depth + 1u); else { c.pc = 0x00260310u; return; } if (c.pc != 0x0030FF1Cu) [[unlikely]] return; }
L_0030FF1C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_0084(c, 31u, depth); } }
L_0030FF24:
    set32(c.r[17], ld32((c.r[17].w[0] + 4096u)));
    set32(c.r[4], 0u + 2u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030FF34u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0088(c, 510u, depth + 1u); else { c.pc = 0x00323260u; return; } if (c.pc != 0x0030FF34u) [[unlikely]] return; }
L_0030FF34:
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != c.r[2].d[0]; set32(c.r[4], 0u + 2u);  if (t) { goto L_0030FF88; } }
    set32(c.r[4], 0u + 2u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030FF4Cu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0088(c, 510u, depth + 1u); else { c.pc = 0x00323260u; return; } if (c.pc != 0x0030FF4Cu) [[unlikely]] return; }
L_0030FF4C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[6].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[4], ld32((c.r[1].w[0] - 27616u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030FF60u); set32(c.r[5], 0u + 875u);  if (depth < kMaxDepth) unit_0058(c, 37u, depth + 1u); else { c.pc = 0x00260310u; return; } if (c.pc != 0x0030FF60u) [[unlikely]] return; }
L_0030FF60:
    set32(c.r[4], 0u + 2u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030FF6Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0088(c, 510u, depth + 1u); else { c.pc = 0x00323260u; return; } if (c.pc != 0x0030FF6Cu) [[unlikely]] return; }
L_0030FF6C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[6].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[4], ld32((c.r[1].w[0] - 27616u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030FF80u); set32(c.r[5], 0u + 876u);  if (depth < kMaxDepth) unit_0058(c, 37u, depth + 1u); else { c.pc = 0x00260310u; return; } if (c.pc != 0x0030FF80u) [[unlikely]] return; }
L_0030FF80:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[16].d[0] & 255ull;  if (t) { goto L_0030FFC8; } }
L_0030FF88:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030FF90u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0088(c, 510u, depth + 1u); else { c.pc = 0x00323260u; return; } if (c.pc != 0x0030FF90u) [[unlikely]] return; }
L_0030FF90:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[6].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[4], ld32((c.r[1].w[0] - 27616u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030FFA4u); set32(c.r[5], 0u + 875u);  if (depth < kMaxDepth) unit_0058(c, 37u, depth + 1u); else { c.pc = 0x00260310u; return; } if (c.pc != 0x0030FFA4u) [[unlikely]] return; }
L_0030FFA4:
    set32(c.r[4], 0u + 2u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030FFB0u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0088(c, 510u, depth + 1u); else { c.pc = 0x00323260u; return; } if (c.pc != 0x0030FFB0u) [[unlikely]] return; }
L_0030FFB0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[6].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[4], ld32((c.r[1].w[0] - 27616u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030FFC4u); set32(c.r[5], 0u + 876u);  if (depth < kMaxDepth) unit_0058(c, 37u, depth + 1u); else { c.pc = 0x00260310u; return; } if (c.pc != 0x0030FFC4u) [[unlikely]] return; }
L_0030FFC4:
    c.r[3].d[0] = c.r[16].d[0] & 255ull;
    c.budget -= 1;
L_0030FFC8:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);  if (t) { [[clang::musttail]] return unit_0084(c, 31u, depth); } }
    set32(c.r[4], ld32((c.r[1].w[0] - 27616u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030FFDCu); set32(c.r[5], 0u + 875u);  if (depth < kMaxDepth) unit_0058(c, 46u, depth + 1u); else { c.pc = 0x00260440u; return; } if (c.pc != 0x0030FFDCu) [[unlikely]] return; }
L_0030FFDC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[6], ld32((c.r[2].w[0] + 4u)));
    set32(c.r[4], ld32((c.r[1].w[0] - 27616u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030FFF0u); set32(c.r[5], 0u + 873u);  if (depth < kMaxDepth) unit_0058(c, 37u, depth + 1u); else { c.pc = 0x00260310u; return; } if (c.pc != 0x0030FFF0u) [[unlikely]] return; }
L_0030FFF0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], ld32((c.r[1].w[0] - 27616u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00310000u); set32(c.r[5], 0u + 876u);  if (depth < kMaxDepth) unit_0058(c, 46u, depth + 1u); else { c.pc = 0x00260440u; return; } if (c.pc != 0x00310000u) [[unlikely]] return; }
    [[clang::musttail]] return unit_0084(c, 1u, depth);
}

}
