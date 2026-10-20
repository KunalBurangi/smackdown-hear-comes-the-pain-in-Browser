#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0023[4096] = {
    1, 2, 3, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0,
    10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0,
    0, 0, 18, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 24, 0,
    0, 0, 0, 0, 25, 0, 0, 26, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 33, 34, 0, 0,
    0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    39, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 46, 0, 47, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 50, 0, 51, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 53, 0, 54, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 59, 0, 60, 0, 0,
    0, 0, 0, 0, 61, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 64, 0, 0, 65, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0,
    0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0,
    0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 77, 0,
    0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0, 0, 81,
    0, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 85,
    0, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0,
    0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0,
    0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0,
    0, 109, 0, 0, 0, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    111, 0, 0, 0, 0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 120, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    123, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 129, 0,
    0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0, 132, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 0, 0,
    134, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 0,
    137, 0, 138, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 141, 0, 142, 0, 0, 0, 143, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 145, 0, 0, 146, 0, 0, 0, 147, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 149, 0,
    150, 0, 0, 151, 0, 152, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0, 155, 0, 0, 0,
    0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 159, 0, 0, 0, 0, 0, 0, 160, 0, 0, 0, 0, 161, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 164, 0, 0,
    0, 165, 0, 0, 0, 0, 0, 0, 166, 0, 0, 0, 0, 167, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 170, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 174, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    177, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 179, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0,
    181, 0, 0, 0, 182, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 183, 0, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0, 0, 185, 0, 0, 0,
    186, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0,
    190, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 193, 0, 0, 0,
    0, 194, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 197, 0, 0, 198, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 199, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 200,
    0, 0, 0, 201, 0, 0, 0, 0, 0, 202, 0, 0, 0, 0, 0, 0, 203, 0, 0, 0, 204, 0, 0, 0, 205, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 206, 0, 0, 0, 0, 207, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 0, 0, 0, 0, 209, 0, 0, 0,
    210, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 211, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 212, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 215, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 216, 0, 0, 0, 0, 217, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 218, 0, 0, 0, 0, 0, 0, 0, 0, 0, 219, 0, 0, 0, 0, 0, 0, 0, 0, 0, 220, 0, 0, 0, 0, 0, 0, 221, 0, 0,
    0, 222, 0, 0, 0, 0, 0, 223, 0, 0, 0, 0, 0, 0, 0, 224, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 225, 0, 0, 0, 0, 0, 0, 226, 0, 0, 0,
    0, 227, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 228, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 229, 0, 0, 0, 0, 0, 230, 0,
    0, 0, 0, 0, 231, 0, 0, 0, 0, 0, 232, 0, 0, 233, 0, 234, 0, 235, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 236, 0, 0, 0, 0, 237, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 238, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 239, 0, 0, 0, 0, 0, 240, 0, 0, 0, 0, 0, 241, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    242, 0, 243, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 244, 0, 0, 0, 0, 0, 0, 0,
    245, 0, 0, 0, 0, 0, 0, 0, 246, 0, 0, 0, 247, 0, 0, 0, 248, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    249, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 250, 0, 0, 0, 0, 0, 0, 0, 251, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    252, 0, 0, 0, 253, 0, 0, 0, 0, 0, 0, 0, 254, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0,
    256, 0, 0, 0, 257, 0, 0, 0, 0, 0, 0, 0, 0, 258, 0, 0, 0, 0, 259, 0, 0, 0, 0, 0, 0, 0, 0, 0, 260, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 261, 0, 0, 0, 0, 262, 0, 0, 0, 263, 0, 0, 264, 0, 0, 265, 0, 0, 266, 0,
    0, 0, 0, 267, 0, 0, 0, 0, 268, 0, 0, 0, 269, 0, 0, 0, 270, 0, 0, 0, 271, 0, 0, 0, 0, 0, 0, 0, 272, 0, 0, 0,
    0, 0, 0, 0, 273, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 274, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 275, 0, 0, 0,
    0, 0, 276, 0, 0, 0, 0, 0, 277, 0, 0, 0, 0, 0, 278, 0, 0, 0, 0, 0, 279, 0, 0, 0, 0, 0, 0, 280, 0, 0, 0, 0,
    0, 0, 0, 0, 281, 0, 0, 0, 0, 0, 282, 0, 0, 0, 0, 0, 283, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 284, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 285, 0, 0, 0, 286, 0, 287, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 288, 0, 289, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 290, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 291, 0, 0, 0, 0, 0, 0, 292, 0,
    0, 0, 0, 0, 0, 293, 0, 0, 0, 0, 0, 0, 294, 0, 0, 0, 0, 0, 295, 0, 0, 0, 296, 0, 0, 297, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 298, 0, 0, 0, 0, 0, 0, 0, 0, 0, 299, 0, 0, 0, 0, 300, 0, 0, 0, 0,
    301, 0, 0, 0, 0, 302, 0, 0, 0, 303, 0, 304, 0, 0, 305, 0, 0, 306, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 307, 0, 0, 0, 0, 0, 0, 308, 0, 0, 0, 0, 0, 0, 309, 0, 0, 310, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 311, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 312, 0, 0, 0, 0, 0, 313, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 314, 0,
    315, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 316, 0, 0, 0, 0, 0, 0, 0, 0, 0, 317, 0, 0, 0, 0,
    0, 0, 318, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    319, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 320, 0, 321, 0, 322, 0, 0, 0, 0, 0, 0, 0, 0, 323, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 324, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 325, 0, 0, 0,
    0, 0, 0, 0, 326, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 327, 0, 0, 328, 0, 329, 0, 0, 0, 0, 330,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 331, 0, 0, 0, 0, 0, 332, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 333, 0, 0, 0, 0, 0, 0, 0, 334, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 335, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 336, 0, 0, 337, 0, 338, 0, 339, 0, 0, 340, 0, 0, 341, 0, 0, 0, 0, 0, 342, 0, 343, 0, 0, 344, 0, 0, 345, 0,
    0, 0, 0, 346, 0, 0, 347, 0, 0, 0, 0, 0, 0, 348, 0, 0, 349, 0, 0, 0, 0, 0, 0, 0, 350, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 351, 0, 0, 0, 352, 0, 0, 0, 353, 0, 354, 0, 0, 0, 0, 0, 355, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 356, 0, 0, 0, 0, 0, 357, 0, 0, 0, 0, 0, 0, 0, 358, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    359, 0, 0, 0, 0, 0, 360, 0, 0, 361, 0, 0, 0, 0, 0, 0, 362, 0, 0, 0, 0, 0, 0, 0, 363, 0, 0, 0, 0, 0, 0, 364,
    0, 0, 0, 0, 365, 366, 0, 0, 367, 0, 0, 0, 0, 0, 0, 368, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 369, 0, 370, 0, 0, 0, 0, 0, 0, 0, 0, 371, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    372, 0, 0, 0, 0, 0, 0, 0, 373, 0, 0, 0, 0, 0, 0, 374, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 375, 0, 0, 376,
    377, 0, 0, 378, 0, 0, 0, 0, 0, 0, 379, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 380, 0, 0, 0, 381, 0, 0, 0, 382, 0, 0, 0, 0, 0,
    383, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 384, 0, 0, 0, 385, 0, 386, 0, 0, 0, 0, 387, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 388, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 389, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 390, 0, 0, 391, 0, 0, 0, 392,
    0, 0, 0, 393, 0, 0, 0, 394, 0, 395, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 396, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 397, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 398, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 399, 0, 0, 400, 0, 0, 0, 0, 0, 0, 0, 0, 0, 401, 0, 0, 0, 0, 0,
    0, 0, 0, 402, 0, 0, 0, 403, 0, 0, 0, 0, 0, 0, 0, 0, 404, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    405, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 406, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 407, 0, 0, 408, 0, 0, 409, 0, 0, 410, 0, 0, 411, 0, 0, 412, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 413, 0,
    0, 0, 414, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 415, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 416, 0, 0, 0,
    0, 0, 0, 417, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 418, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    419, 0, 0, 0, 0, 0, 420, 0, 0, 0, 0, 0, 0, 0, 0, 421, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 422,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 423, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 424, 0, 0, 0, 0,
    425, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 426, 0, 0, 0, 427, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 428, 0, 0, 0, 0, 0, 0, 0, 429, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 430,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 431, 0, 432, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_0023(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_0018C000;
    case 2u: goto L_0018C004;
    case 3u: goto L_0018C008;
    case 4u: goto L_0018C010;
    case 5u: goto L_0018C040;
    case 6u: goto L_0018C090;
    case 7u: goto L_0018C0B8;
    case 8u: goto L_0018C0C8;
    case 9u: goto L_0018C0E4;
    case 10u: goto L_0018C100;
    case 11u: goto L_0018C1B0;
    case 12u: goto L_0018C1D0;
    case 13u: goto L_0018C240;
    case 14u: goto L_0018C270;
    case 15u: goto L_0018C2BC;
    case 16u: goto L_0018C2D4;
    case 17u: goto L_0018C2EC;
    case 18u: goto L_0018C308;
    case 19u: goto L_0018C324;
    case 20u: goto L_0018C37C;
    case 21u: goto L_0018C3E0;
    case 22u: goto L_0018C40C;
    case 23u: goto L_0018C460;
    case 24u: goto L_0018C478;
    case 25u: goto L_0018C490;
    case 26u: goto L_0018C49C;
    case 27u: goto L_0018C4B8;
    case 28u: goto L_0018C530;
    case 29u: goto L_0018C550;
    case 30u: goto L_0018C578;
    case 31u: goto L_0018C5A0;
    case 32u: goto L_0018C5C0;
    case 33u: goto L_0018C5F0;
    case 34u: goto L_0018C5F4;
    case 35u: goto L_0018C610;
    case 36u: goto L_0018C640;
    case 37u: goto L_0018C668;
    case 38u: goto L_0018C690;
    case 39u: goto L_0018C700;
    case 40u: goto L_0018C728;
    case 41u: goto L_0018C758;
    case 42u: goto L_0018C7D0;
    case 43u: goto L_0018C7E4;
    case 44u: goto L_0018C820;
    case 45u: goto L_0018C860;
    case 46u: goto L_0018C890;
    case 47u: goto L_0018C898;
    case 48u: goto L_0018C8F0;
    case 49u: goto L_0018C940;
    case 50u: goto L_0018C94C;
    case 51u: goto L_0018C954;
    case 52u: goto L_0018C96C;
    case 53u: goto L_0018C9A0;
    case 54u: goto L_0018C9A8;
    case 55u: goto L_0018C9BC;
    case 56u: goto L_0018C9F0;
    case 57u: goto L_0018CA30;
    case 58u: goto L_0018CA64;
    case 59u: goto L_0018CA6C;
    case 60u: goto L_0018CA74;
    case 61u: goto L_0018CA90;
    case 62u: goto L_0018CAA4;
    case 63u: goto L_0018CAE0;
    case 64u: goto L_0018CB08;
    case 65u: goto L_0018CB14;
    case 66u: goto L_0018CB30;
    case 67u: goto L_0018CB60;
    case 68u: goto L_0018CB88;
    case 69u: goto L_0018CBD0;
    case 70u: goto L_0018CBF0;
    case 71u: goto L_0018CC10;
    case 72u: goto L_0018CC40;
    case 73u: goto L_0018CC74;
    case 74u: goto L_0018CC94;
    case 75u: goto L_0018CCB4;
    case 76u: goto L_0018CCD8;
    case 77u: goto L_0018CCF8;
    case 78u: goto L_0018CD1C;
    case 79u: goto L_0018CD38;
    case 80u: goto L_0018CD58;
    case 81u: goto L_0018CD7C;
    case 82u: goto L_0018CD98;
    case 83u: goto L_0018CDBC;
    case 84u: goto L_0018CDDC;
    case 85u: goto L_0018CDFC;
    case 86u: goto L_0018CE18;
    case 87u: goto L_0018CE34;
    case 88u: goto L_0018CE50;
    case 89u: goto L_0018CE70;
    case 90u: goto L_0018CE8C;
    case 91u: goto L_0018CEB0;
    case 92u: goto L_0018CED4;
    case 93u: goto L_0018CEF8;
    case 94u: goto L_0018CF14;
    case 95u: goto L_0018CF30;
    case 96u: goto L_0018CF4C;
    case 97u: goto L_0018CF70;
    case 98u: goto L_0018CFB0;
    case 99u: goto L_0018CFC8;
    case 100u: goto L_0018CFE8;
    case 101u: goto L_0018D030;
    case 102u: goto L_0018D048;
    case 103u: goto L_0018D074;
    case 104u: goto L_0018D0B0;
    case 105u: goto L_0018D0D4;
    case 106u: goto L_0018D0F0;
    case 107u: goto L_0018D13C;
    case 108u: goto L_0018D160;
    case 109u: goto L_0018D184;
    case 110u: goto L_0018D1AC;
    case 111u: goto L_0018D200;
    case 112u: goto L_0018D220;
    case 113u: goto L_0018D238;
    case 114u: goto L_0018D264;
    case 115u: goto L_0018D2A0;
    case 116u: goto L_0018D2C4;
    case 117u: goto L_0018D2EC;
    case 118u: goto L_0018D340;
    case 119u: goto L_0018D360;
    case 120u: goto L_0018D374;
    case 121u: goto L_0018D3B0;
    case 122u: goto L_0018D3D8;
    case 123u: goto L_0018D400;
    case 124u: goto L_0018D418;
    case 125u: goto L_0018D430;
    case 126u: goto L_0018D448;
    case 127u: goto L_0018D460;
    case 128u: goto L_0018D4A0;
    case 129u: goto L_0018D4F8;
    case 130u: goto L_0018D518;
    case 131u: goto L_0018D538;
    case 132u: goto L_0018D544;
    case 133u: goto L_0018D55C;
    case 134u: goto L_0018D580;
    case 135u: goto L_0018D5B0;
    case 136u: goto L_0018D5E0;
    case 137u: goto L_0018D600;
    case 138u: goto L_0018D608;
    case 139u: goto L_0018D670;
    case 140u: goto L_0018D6A0;
    case 141u: goto L_0018D6E0;
    case 142u: goto L_0018D6E8;
    case 143u: goto L_0018D6F8;
    case 144u: goto L_0018D740;
    case 145u: goto L_0018D74C;
    case 146u: goto L_0018D758;
    case 147u: goto L_0018D768;
    case 148u: goto L_0018D7A8;
    case 149u: goto L_0018D7F8;
    case 150u: goto L_0018D800;
    case 151u: goto L_0018D80C;
    case 152u: goto L_0018D814;
    case 153u: goto L_0018D870;
    case 154u: goto L_0018D8E0;
    case 155u: goto L_0018D8F0;
    case 156u: goto L_0018D910;
    case 157u: goto L_0018D940;
    case 158u: goto L_0018D954;
    case 159u: goto L_0018D984;
    case 160u: goto L_0018D9A0;
    case 161u: goto L_0018D9B4;
    case 162u: goto L_0018D9C4;
    case 163u: goto L_0018D9E0;
    case 164u: goto L_0018D9F4;
    case 165u: goto L_0018DA04;
    case 166u: goto L_0018DA20;
    case 167u: goto L_0018DA34;
    case 168u: goto L_0018DA44;
    case 169u: goto L_0018DA60;
    case 170u: goto L_0018DA88;
    case 171u: goto L_0018DAA0;
    case 172u: goto L_0018DABC;
    case 173u: goto L_0018DAE0;
    case 174u: goto L_0018DB08;
    case 175u: goto L_0018DB44;
    case 176u: goto L_0018DB58;
    case 177u: goto L_0018DB80;
    case 178u: goto L_0018DBC0;
    case 179u: goto L_0018DBCC;
    case 180u: goto L_0018DBE4;
    case 181u: goto L_0018DC00;
    case 182u: goto L_0018DC10;
    case 183u: goto L_0018DC3C;
    case 184u: goto L_0018DC58;
    case 185u: goto L_0018DC70;
    case 186u: goto L_0018DC80;
    case 187u: goto L_0018DCC0;
    case 188u: goto L_0018DD30;
    case 189u: goto L_0018DD68;
    case 190u: goto L_0018DD80;
    case 191u: goto L_0018DDB8;
    case 192u: goto L_0018DE54;
    case 193u: goto L_0018DE70;
    case 194u: goto L_0018DE84;
    case 195u: goto L_0018DEA0;
    case 196u: goto L_0018DEB8;
    case 197u: goto L_0018DED4;
    case 198u: goto L_0018DEE0;
    case 199u: goto L_0018DF40;
    case 200u: goto L_0018DF7C;
    case 201u: goto L_0018DF8C;
    case 202u: goto L_0018DFA4;
    case 203u: goto L_0018DFC0;
    case 204u: goto L_0018DFD0;
    case 205u: goto L_0018DFE0;
    case 206u: goto L_0018E014;
    case 207u: goto L_0018E028;
    case 208u: goto L_0018E048;
    case 209u: goto L_0018E070;
    case 210u: goto L_0018E080;
    case 211u: goto L_0018E0B0;
    case 212u: goto L_0018E0F0;
    case 213u: goto L_0018E130;
    case 214u: goto L_0018E160;
    case 215u: goto L_0018E190;
    case 216u: goto L_0018E1BC;
    case 217u: goto L_0018E1D0;
    case 218u: goto L_0018E208;
    case 219u: goto L_0018E230;
    case 220u: goto L_0018E258;
    case 221u: goto L_0018E274;
    case 222u: goto L_0018E284;
    case 223u: goto L_0018E29C;
    case 224u: goto L_0018E2BC;
    case 225u: goto L_0018E354;
    case 226u: goto L_0018E370;
    case 227u: goto L_0018E384;
    case 228u: goto L_0018E3B0;
    case 229u: goto L_0018E3E0;
    case 230u: goto L_0018E3F8;
    case 231u: goto L_0018E410;
    case 232u: goto L_0018E428;
    case 233u: goto L_0018E434;
    case 234u: goto L_0018E43C;
    case 235u: goto L_0018E444;
    case 236u: goto L_0018E4B0;
    case 237u: goto L_0018E4C4;
    case 238u: goto L_0018E4F0;
    case 239u: goto L_0018E520;
    case 240u: goto L_0018E538;
    case 241u: goto L_0018E550;
    case 242u: goto L_0018E580;
    case 243u: goto L_0018E588;
    case 244u: goto L_0018E5E0;
    case 245u: goto L_0018E600;
    case 246u: goto L_0018E620;
    case 247u: goto L_0018E630;
    case 248u: goto L_0018E640;
    case 249u: goto L_0018E680;
    case 250u: goto L_0018E6B0;
    case 251u: goto L_0018E6D0;
    case 252u: goto L_0018E700;
    case 253u: goto L_0018E710;
    case 254u: goto L_0018E730;
    case 255u: goto L_0018E760;
    case 256u: goto L_0018E780;
    case 257u: goto L_0018E790;
    case 258u: goto L_0018E7B4;
    case 259u: goto L_0018E7C8;
    case 260u: goto L_0018E7F0;
    case 261u: goto L_0018E830;
    case 262u: goto L_0018E844;
    case 263u: goto L_0018E854;
    case 264u: goto L_0018E860;
    case 265u: goto L_0018E86C;
    case 266u: goto L_0018E878;
    case 267u: goto L_0018E88C;
    case 268u: goto L_0018E8A0;
    case 269u: goto L_0018E8B0;
    case 270u: goto L_0018E8C0;
    case 271u: goto L_0018E8D0;
    case 272u: goto L_0018E8F0;
    case 273u: goto L_0018E910;
    case 274u: goto L_0018E940;
    case 275u: goto L_0018E970;
    case 276u: goto L_0018E988;
    case 277u: goto L_0018E9A0;
    case 278u: goto L_0018E9B8;
    case 279u: goto L_0018E9D0;
    case 280u: goto L_0018E9EC;
    case 281u: goto L_0018EA10;
    case 282u: goto L_0018EA28;
    case 283u: goto L_0018EA40;
    case 284u: goto L_0018EA90;
    case 285u: goto L_0018EACC;
    case 286u: goto L_0018EADC;
    case 287u: goto L_0018EAE4;
    case 288u: goto L_0018EB10;
    case 289u: goto L_0018EB18;
    case 290u: goto L_0018EBB0;
    case 291u: goto L_0018EBDC;
    case 292u: goto L_0018EBF8;
    case 293u: goto L_0018EC14;
    case 294u: goto L_0018EC30;
    case 295u: goto L_0018EC48;
    case 296u: goto L_0018EC58;
    case 297u: goto L_0018EC64;
    case 298u: goto L_0018ECB0;
    case 299u: goto L_0018ECD8;
    case 300u: goto L_0018ECEC;
    case 301u: goto L_0018ED00;
    case 302u: goto L_0018ED14;
    case 303u: goto L_0018ED24;
    case 304u: goto L_0018ED2C;
    case 305u: goto L_0018ED38;
    case 306u: goto L_0018ED44;
    case 307u: goto L_0018ED90;
    case 308u: goto L_0018EDAC;
    case 309u: goto L_0018EDC8;
    case 310u: goto L_0018EDD4;
    case 311u: goto L_0018EE20;
    case 312u: goto L_0018EE88;
    case 313u: goto L_0018EEA0;
    case 314u: goto L_0018EEF8;
    case 315u: goto L_0018EF00;
    case 316u: goto L_0018EF44;
    case 317u: goto L_0018EF6C;
    case 318u: goto L_0018EF88;
    case 319u: goto L_0018F000;
    case 320u: goto L_0018F044;
    case 321u: goto L_0018F04C;
    case 322u: goto L_0018F054;
    case 323u: goto L_0018F078;
    case 324u: goto L_0018F0A0;
    case 325u: goto L_0018F0F0;
    case 326u: goto L_0018F110;
    case 327u: goto L_0018F154;
    case 328u: goto L_0018F160;
    case 329u: goto L_0018F168;
    case 330u: goto L_0018F17C;
    case 331u: goto L_0018F1C4;
    case 332u: goto L_0018F1DC;
    case 333u: goto L_0018F220;
    case 334u: goto L_0018F240;
    case 335u: goto L_0018F2E0;
    case 336u: goto L_0018F30C;
    case 337u: goto L_0018F318;
    case 338u: goto L_0018F320;
    case 339u: goto L_0018F328;
    case 340u: goto L_0018F334;
    case 341u: goto L_0018F340;
    case 342u: goto L_0018F358;
    case 343u: goto L_0018F360;
    case 344u: goto L_0018F36C;
    case 345u: goto L_0018F378;
    case 346u: goto L_0018F38C;
    case 347u: goto L_0018F398;
    case 348u: goto L_0018F3B4;
    case 349u: goto L_0018F3C0;
    case 350u: goto L_0018F3E0;
    case 351u: goto L_0018F430;
    case 352u: goto L_0018F440;
    case 353u: goto L_0018F450;
    case 354u: goto L_0018F458;
    case 355u: goto L_0018F470;
    case 356u: goto L_0018F498;
    case 357u: goto L_0018F4B0;
    case 358u: goto L_0018F4D0;
    case 359u: goto L_0018F500;
    case 360u: goto L_0018F518;
    case 361u: goto L_0018F524;
    case 362u: goto L_0018F540;
    case 363u: goto L_0018F560;
    case 364u: goto L_0018F57C;
    case 365u: goto L_0018F590;
    case 366u: goto L_0018F594;
    case 367u: goto L_0018F5A0;
    case 368u: goto L_0018F5BC;
    case 369u: goto L_0018F620;
    case 370u: goto L_0018F628;
    case 371u: goto L_0018F64C;
    case 372u: goto L_0018F680;
    case 373u: goto L_0018F6A0;
    case 374u: goto L_0018F6BC;
    case 375u: goto L_0018F6F0;
    case 376u: goto L_0018F6FC;
    case 377u: goto L_0018F700;
    case 378u: goto L_0018F70C;
    case 379u: goto L_0018F728;
    case 380u: goto L_0018F7C8;
    case 381u: goto L_0018F7D8;
    case 382u: goto L_0018F7E8;
    case 383u: goto L_0018F800;
    case 384u: goto L_0018F834;
    case 385u: goto L_0018F844;
    case 386u: goto L_0018F84C;
    case 387u: goto L_0018F860;
    case 388u: goto L_0018F894;
    case 389u: goto L_0018F914;
    case 390u: goto L_0018F960;
    case 391u: goto L_0018F96C;
    case 392u: goto L_0018F97C;
    case 393u: goto L_0018F98C;
    case 394u: goto L_0018F99C;
    case 395u: goto L_0018F9A4;
    case 396u: goto L_0018F9D0;
    case 397u: goto L_0018FA14;
    case 398u: goto L_0018FA50;
    case 399u: goto L_0018FAB4;
    case 400u: goto L_0018FAC0;
    case 401u: goto L_0018FAE8;
    case 402u: goto L_0018FB0C;
    case 403u: goto L_0018FB1C;
    case 404u: goto L_0018FB40;
    case 405u: goto L_0018FB80;
    case 406u: goto L_0018FBD8;
    case 407u: goto L_0018FC0C;
    case 408u: goto L_0018FC18;
    case 409u: goto L_0018FC24;
    case 410u: goto L_0018FC30;
    case 411u: goto L_0018FC3C;
    case 412u: goto L_0018FC48;
    case 413u: goto L_0018FC78;
    case 414u: goto L_0018FC88;
    case 415u: goto L_0018FCB4;
    case 416u: goto L_0018FCF0;
    case 417u: goto L_0018FD0C;
    case 418u: goto L_0018FD58;
    case 419u: goto L_0018FD80;
    case 420u: goto L_0018FD98;
    case 421u: goto L_0018FDBC;
    case 422u: goto L_0018FDFC;
    case 423u: goto L_0018FE38;
    case 424u: goto L_0018FE6C;
    case 425u: goto L_0018FE80;
    case 426u: goto L_0018FEC0;
    case 427u: goto L_0018FED0;
    case 428u: goto L_0018FF30;
    case 429u: goto L_0018FF50;
    case 430u: goto L_0018FF7C;
    case 431u: goto L_0018FFD0;
    case 432u: goto L_0018FFD8;
    default: bad_entry(c, 0x0018C000u); return;
    }
L_0018C000:
    set32(c.r[2], c.r[4].w[0] + c.r[3].w[0]);
    c.budget -= 1;
L_0018C004:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0018C008:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0018C010:
    c.budget -= 2;
    { const bool t = c.r[5].sd[0] >= 0; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0018C020; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0018C080; } }
L_0018C020:
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.r[2].d[0] = c.r[5].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_0018C038; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0018C080; } }
L_0018C038:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[3].sd[0] < 20ll ? 1ull : 0ull;  if (t) { goto L_0018C074; } }
L_0018C040:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x000E0000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.r[2].d[0] = ld8((c.r[1].w[0] + 6954u));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != c.r[5].d[0]; set32(c.r[2], 0u + 15476u);  if (t) { goto L_0018C06C; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00090000u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.r[1].d[0] = c.r[1].d[0] | 25104ull;
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] + c.r[1].w[0]);  if (t) { goto L_0018C080; } }
L_0018C06C:
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[2].d[0] = c.r[3].sd[0] < 20ll ? 1ull : 0ull;
    c.budget -= 2;
L_0018C074:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[4].w[0] + c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0018C040u | kUnwind; return; } goto L_0018C040; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0018C080:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0018C090:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018C0B8u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0022(c, 500u, depth + 1u); else { c.pc = 0x0018BFA0u; return; } if (c.pc != 0x0018C0B8u) [[unlikely]] return; }
L_0018C0B8:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018C0C8u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 500u, depth + 1u); else { c.pc = 0x0018BFA0u; return; } if (c.pc != 0x0018C0C8u) [[unlikely]] return; }
L_0018C0C8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00410000u);
    set32(c.r[4], c.r[29].w[0] + 88u);
    set32(c.r[3], c.r[3].w[0] + 4504u);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[3].d[0] = ld64((c.r[3].w[0]));
    st64((c.r[4].w[0]), c.r[3].d[0]);
    set32(c.r[3], c.r[19].w[0] + c.r[5].w[0]);
    c.budget -= 7;
L_0018C0E4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x000E0000u);
    set32(c.r[1], c.r[3].w[0] + c.r[1].w[0]);
    c.r[3].d[0] = ld8((c.r[1].w[0] + 6944u));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[18].d[0];  if (t) { goto L_0018C0FC; } }
    st32((c.r[29].w[0] + 88u), c.r[5].w[0]);
    c.budget -= 1;
L_0018C0FC:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[17].d[0];  if (t) { goto L_0018C108; } }
    goto L_0018C104;
L_0018C100:
    c.budget -= 1;
L_0018C104:
    st32((c.r[29].w[0] + 92u), c.r[5].w[0]);
    c.budget -= 1;
L_0018C108:
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.r[3].d[0] = c.r[5].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], c.r[19].w[0] + c.r[5].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0018C0E4u | kUnwind; return; } goto L_0018C0E4; } }
    set32(c.r[3], ld32((c.r[29].w[0] + 92u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x000E0000u);
    set32(c.r[3], c.r[3].w[0] + c.r[19].w[0]);
    set32(c.r[1], c.r[3].w[0] + c.r[1].w[0]);
    st8((c.r[1].w[0] + 6944u), static_cast<std::uint8_t>(c.r[18].w[0]));
    set32(c.r[3], ld32((c.r[29].w[0] + 88u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x000E0000u);
    set32(c.r[3], c.r[3].w[0] + c.r[19].w[0]);
    set32(c.r[1], c.r[3].w[0] + c.r[1].w[0]);
    st8((c.r[1].w[0] + 6944u), static_cast<std::uint8_t>(c.r[17].w[0]));
    set32(c.r[4], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 12u)));
    st32((c.r[16].w[0] + 12u), c.r[3].w[0]);
    st32((c.r[2].w[0] + 12u), c.r[4].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0] + 12u)));
    set32(c.r[6], ld32((c.r[16].w[0] + 12u)));
    c.r[1].d[0] = c.r[6].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 19;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0018C17C; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[4], c.r[6].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 12u), c.r[3].w[0]);  if (t) { goto L_0018C190; } }
L_0018C17C:
    set32(c.r[4], ld32((c.r[2].w[0] + 16u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 20u)));
    set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[16].w[0] + 12u), c.r[3].w[0]);
    c.budget -= 5;
L_0018C190:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0018C1B0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00410000u);
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[3], c.r[3].w[0] + 4512u);
    set32(c.r[7], c.r[29].w[0] + 8u);
    c.r[3].d[0] = ld64((c.r[3].w[0]));
    c.r[8].d[0] = 0ull + 0ull;
    st64((c.r[7].w[0]), c.r[3].d[0]);
    set32(c.r[3], c.r[4].w[0] + c.r[8].w[0]);
    c.budget -= 8;
L_0018C1D0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x000E0000u);
    set32(c.r[1], c.r[3].w[0] + c.r[1].w[0]);
    c.r[3].d[0] = ld8((c.r[1].w[0] + 6954u));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[5].d[0];  if (t) { goto L_0018C1E8; } }
    st32((c.r[29].w[0] + 8u), c.r[8].w[0]);
    c.budget -= 1;
L_0018C1E8:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[6].d[0];  if (t) { goto L_0018C1F4; } }
    st32((c.r[29].w[0] + 12u), c.r[8].w[0]);
    c.budget -= 1;
L_0018C1F4:
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.r[3].d[0] = c.r[8].sd[0] < 20ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], c.r[4].w[0] + c.r[8].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0018C1D0u | kUnwind; return; } goto L_0018C1D0; } }
    set32(c.r[3], ld32((c.r[29].w[0] + 12u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x000E0000u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[1], c.r[3].w[0] + c.r[1].w[0]);
    st8((c.r[1].w[0] + 6954u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[3], ld32((c.r[29].w[0] + 8u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x000E0000u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[1], c.r[3].w[0] + c.r[1].w[0]);
    st8((c.r[1].w[0] + 6954u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0018C240:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[4].d[0] = 0ull | 61492ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 12;
    { const bool t = 0ull == 0ull; set32(c.r[5], 0u - 1u);  if (t) { goto L_0018C28C; } }
L_0018C270:
    set32(c.r[3], c.r[19].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[3].w[0] + 8u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] != c.r[3].d[0];  if (t) { goto L_0018C288; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_0018C298; } }
L_0018C288:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_0018C28C:
    c.r[3].d[0] = c.r[18].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; mmi::mult(c, 0, c.r[18].w[0], c.r[4].w[0]); c.r[3].d[0] = c.lo.d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0018C270u | kUnwind; return; } goto L_0018C270; } }
L_0018C298:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_0018C3B8; } }
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[4], ld32((c.r[16].w[0] + 32u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0018C2BC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018C2BCu);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100210u; return; } if (c.pc != 0x0018C2BCu) [[unlikely]] return; }
L_0018C2BC:
    st32((c.r[16].w[0] + 32u), 0u);
    set32(c.r[4], ld32((c.r[16].w[0] + 36u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0018C2D4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018C2D4u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100210u; return; } if (c.pc != 0x0018C2D4u) [[unlikely]] return; }
L_0018C2D4:
    st32((c.r[16].w[0] + 36u), 0u);
    set32(c.r[4], ld32((c.r[16].w[0] + 40u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0018C2EC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018C2ECu);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100210u; return; } if (c.pc != 0x0018C2ECu) [[unlikely]] return; }
L_0018C2EC:
    st32((c.r[16].w[0] + 40u), 0u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[17], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 20u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018C308u); set32(c.r[16], c.r[3].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_0022(c, 423u, depth + 1u); else { c.pc = 0x0018B280u; return; } if (c.pc != 0x0018C308u) [[unlikely]] return; }
L_0018C308:
    set32(c.r[3], c.r[18].w[0] + c.r[19].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x000E0000u);
    set32(c.r[1], c.r[3].w[0] + c.r[1].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = ld8((c.r[1].w[0] + 6944u));
    set32(c.r[4], 0u + 10u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x000E0000u);
    c.budget -= 7;
L_0018C324:
    set32(c.r[3], c.r[19].w[0] + c.r[5].w[0]);
    c.r[1].d[0] = c.r[1].d[0] | 6944ull;
    set32(c.r[7], c.r[3].w[0] + c.r[1].w[0]);
    c.r[3].d[0] = ld8((c.r[7].w[0]));
    c.r[1].d[0] = c.r[6].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull; c.r[1].d[0] = c.r[3].sd[0] < 10ll ? 1ull : 0ull;  if (t) { goto L_0018C354; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0018C354; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[7].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0018C360; } }
L_0018C354:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[6].d[0];  if (t) { goto L_0018C360; } }
    st8((c.r[7].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 1;
L_0018C360:
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.r[3].d[0] = c.r[5].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x000E0000u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0018C324u | kUnwind; return; } goto L_0018C324; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.r[4].d[0] = 0ull | 61492ull;
    mmi::mult(c, 0, c.r[5].w[0], c.r[4].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    c.budget -= 3;
L_0018C37C:
    set32(c.r[3], c.r[19].w[0] + c.r[3].w[0]);
    set32(c.r[6], c.r[3].w[0] + 20u);
    set32(c.r[3], ld32((c.r[3].w[0] + 20u)));
    c.r[1].d[0] = c.r[17].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0018C39C; } }
    set32(c.r[3], c.r[3].w[0] - c.r[16].w[0]);
    st32((c.r[6].w[0]), c.r[3].w[0]);
    c.budget -= 2;
L_0018C39C:
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.r[3].d[0] = c.r[5].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; mmi::mult(c, 0, c.r[5].w[0], c.r[4].w[0]); c.r[3].d[0] = c.lo.d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0018C37Cu | kUnwind; return; } goto L_0018C37C; } }
    set32(c.r[3], ld32((c.r[19].w[0])));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st32((c.r[19].w[0]), c.r[3].w[0]);
    c.budget -= 3;
L_0018C3B8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0018C3E0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[5], 0u - 1u);
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 11;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u + 15476u);  if (t) { goto L_0018C430; } }
L_0018C40C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00090000u);
    c.r[1].d[0] = c.r[1].d[0] | 25104ull;
    set32(c.r[3], c.r[18].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[1].w[0]);
    c.budget -= 6;
    { const bool t = c.r[17].d[0] != c.r[3].d[0];  if (t) { goto L_0018C42C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0018C43C; } }
L_0018C42C:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_0018C430:
    c.r[3].d[0] = c.r[16].sd[0] < 20ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; mmi::mult(c, 0, c.r[16].w[0], c.r[4].w[0]); c.r[3].d[0] = c.lo.d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0018C40Cu | kUnwind; return; } goto L_0018C40C; } }
L_0018C43C:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_0018C510; } }
    st8((c.r[17].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[4], ld32((c.r[17].w[0] + 32u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0018C460; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018C460u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100210u; return; } if (c.pc != 0x0018C460u) [[unlikely]] return; }
L_0018C460:
    st32((c.r[17].w[0] + 32u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 36u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0018C478; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018C478u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100210u; return; } if (c.pc != 0x0018C478u) [[unlikely]] return; }
L_0018C478:
    st32((c.r[17].w[0] + 36u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 40u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0018C490; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018C490u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100210u; return; } if (c.pc != 0x0018C490u) [[unlikely]] return; }
L_0018C490:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018C49Cu); st32((c.r[17].w[0] + 40u), 0u);  if (depth < kMaxDepth) unit_0022(c, 344u, depth + 1u); else { c.pc = 0x0018A710u; return; } if (c.pc != 0x0018C49Cu) [[unlikely]] return; }
L_0018C49C:
    set32(c.r[3], c.r[16].w[0] + c.r[18].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x000E0000u);
    set32(c.r[1], c.r[3].w[0] + c.r[1].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = ld8((c.r[1].w[0] + 6954u));
    set32(c.r[4], 0u + 20u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x000E0000u);
    c.budget -= 7;
L_0018C4B8:
    set32(c.r[3], c.r[18].w[0] + c.r[5].w[0]);
    c.r[1].d[0] = c.r[1].d[0] | 6954ull;
    set32(c.r[7], c.r[3].w[0] + c.r[1].w[0]);
    c.r[3].d[0] = ld8((c.r[7].w[0]));
    c.r[1].d[0] = c.r[6].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull; c.r[1].d[0] = c.r[3].sd[0] < 20ll ? 1ull : 0ull;  if (t) { goto L_0018C4E8; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0018C4E8; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[7].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0018C4F4; } }
L_0018C4E8:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[6].d[0];  if (t) { goto L_0018C4F4; } }
    st8((c.r[7].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 1;
L_0018C4F4:
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.r[3].d[0] = c.r[5].sd[0] < 20ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x000E0000u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0018C4B8u | kUnwind; return; } goto L_0018C4B8; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st32((c.r[18].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 3;
L_0018C510:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0018C530:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0]), 0u);
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[17].w[0] + c.r[16].w[0]);
    c.budget -= 8;
L_0018C550:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x000E0000u);
    set32(c.r[1], c.r[3].w[0] + c.r[1].w[0]);
    set32(c.r[2], 0u + 10u);
    c.r[3].d[0] = ld8((c.r[1].w[0] + 6944u));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[2].d[0] = 0ull | 61492ull;  if (t) { goto L_0018C578; } }
    mmi::mult(c, 0, c.r[16].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018C578u); set32(c.r[4], c.r[2].w[0] + 8u);  if (depth < kMaxDepth) unit_0022(c, 423u, depth + 1u); else { c.pc = 0x0018B280u; return; } if (c.pc != 0x0018C578u) [[unlikely]] return; }
L_0018C578:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], c.r[17].w[0] + c.r[16].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0018C550u | kUnwind; return; } goto L_0018C550; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x000E0000u);
    set32(c.r[5], 0u + 10u);
    c.r[1].d[0] = c.r[1].d[0] | 6944ull;
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018C5A0u); set32(c.r[4], c.r[17].w[0] + c.r[1].w[0]);  if (depth < kMaxDepth) unit_0009(c, 49u, depth + 1u); else { c.pc = 0x00124ED8u; return; } if (c.pc != 0x0018C5A0u) [[unlikely]] return; }
L_0018C5A0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0018C5C0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x000E0000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[5], 0u + 20u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[1].d[0] = c.r[1].d[0] | 6954ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0] + 4u), 0u);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018C5F0u); set32(c.r[4], c.r[17].w[0] + c.r[1].w[0]);  if (depth < kMaxDepth) unit_0009(c, 49u, depth + 1u); else { c.pc = 0x00124ED8u; return; } if (c.pc != 0x0018C5F0u) [[unlikely]] return; }
L_0018C5F0:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0018C5F4:
    set32(c.r[2], 0u + 15476u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00090000u);
    mmi::mult(c, 0, c.r[16].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.r[1].d[0] = c.r[1].d[0] | 25104ull;
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018C610u); set32(c.r[4], c.r[2].w[0] + c.r[1].w[0]);  if (depth < kMaxDepth) unit_0022(c, 344u, depth + 1u); else { c.pc = 0x0018A710u; return; } if (c.pc != 0x0018C610u) [[unlikely]] return; }
L_0018C610:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[3].d[0] = c.r[16].sd[0] < 20ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0018C5F4u | kUnwind; return; } goto L_0018C5F4; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0018C640:
    set32(c.r[29], c.r[29].w[0] - 80u);
    set32(c.r[3], 0u + 10u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 10;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0018C6C8; } }
L_0018C668:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x000E0000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.r[2].d[0] = ld8((c.r[1].w[0] + 6944u));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; c.r[2].d[0] = 0ull | 61492ull;  if (t) { goto L_0018C6C4; } }
    mmi::mult(c, 0, c.r[16].w[0], c.r[2].w[0]);
    c.r[19].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[17].w[0] + c.r[19].w[0]);
    set32(c.r[18], c.r[2].w[0] + 8u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018C690u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 423u, depth + 1u); else { c.pc = 0x0018B280u; return; } if (c.pc != 0x0018C690u) [[unlikely]] return; }
L_0018C690:
    set32(c.r[4], c.r[19].w[0] + c.r[17].w[0]);
    set32(c.r[5], 0u + 1u);
    st8((c.r[4].w[0] + 8u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[3], c.r[16].w[0] + c.r[17].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x000E0000u);
    set32(c.r[1], c.r[3].w[0] + c.r[1].w[0]);
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    st8((c.r[1].w[0] + 6944u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[17].w[0])));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 13;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0]), c.r[3].w[0]);  if (t) { goto L_0018C6D8; } }
L_0018C6C4:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_0018C6C8:
    c.r[2].d[0] = c.r[16].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[17].w[0] + c.r[16].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0018C668u | kUnwind; return; } goto L_0018C668; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0018C6D8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0018C700:
    set32(c.r[29], c.r[29].w[0] - 80u);
    set32(c.r[3], 0u + 20u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 10;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0018C798; } }
L_0018C728:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x000E0000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.r[2].d[0] = ld8((c.r[1].w[0] + 6954u));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; set32(c.r[2], 0u + 15476u);  if (t) { goto L_0018C794; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00090000u);
    mmi::mult(c, 0, c.r[16].w[0], c.r[2].w[0]);
    c.r[19].d[0] = c.lo.d[0];
    c.r[1].d[0] = c.r[1].d[0] | 25104ull;
    set32(c.r[2], c.r[17].w[0] + c.r[19].w[0]);
    set32(c.r[18], c.r[2].w[0] + c.r[1].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018C758u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 344u, depth + 1u); else { c.pc = 0x0018A710u; return; } if (c.pc != 0x0018C758u) [[unlikely]] return; }
L_0018C758:
    set32(c.r[4], c.r[19].w[0] + c.r[17].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00090000u);
    set32(c.r[5], 0u + 1u);
    set32(c.r[1], c.r[4].w[0] + c.r[1].w[0]);
    st8((c.r[1].w[0] + 25104u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[3], c.r[16].w[0] + c.r[17].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x000E0000u);
    set32(c.r[1], c.r[3].w[0] + c.r[1].w[0]);
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    st8((c.r[1].w[0] + 6954u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 15;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 4u), c.r[3].w[0]);  if (t) { goto L_0018C7A8; } }
L_0018C794:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_0018C798:
    c.r[2].d[0] = c.r[16].sd[0] < 20ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[17].w[0] + c.r[16].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0018C728u | kUnwind; return; } goto L_0018C728; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0018C7A8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0018C7D0:
    c.r[8].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[3], 0u + 1u);
    c.r[5].d[0] = 0ull | 61492ull;
    mmi::mult(c, 0, c.r[7].w[0], c.r[5].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.budget -= 5;
L_0018C7E4:
    set32(c.r[6], c.r[4].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = ld8((c.r[6].w[0] + 8u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0018C800; } }
    set32(c.r[2], ld32((c.r[6].w[0] + 32u)));
    set32(c.r[2], c.r[3].w[0] << (c.r[2].w[0] & 31u));
    c.r[8].d[0] = c.r[8].d[0] | c.r[2].d[0];
    c.budget -= 3;
L_0018C800:
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.r[2].d[0] = c.r[7].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; mmi::mult(c, 0, c.r[7].w[0], c.r[5].w[0]); c.r[2].d[0] = c.lo.d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0018C7E4u | kUnwind; return; } goto L_0018C7E4; } }
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[3], 0u + 1u);
    set32(c.r[5], 0u + 15476u);
    mmi::mult(c, 0, c.r[7].w[0], c.r[5].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.budget -= 4;
L_0018C820:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00090000u);
    set32(c.r[6], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[1], c.r[6].w[0] + c.r[1].w[0]);
    c.r[2].d[0] = ld8((c.r[1].w[0] + 25104u));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00090000u);  if (t) { goto L_0018C848; } }
    set32(c.r[1], c.r[6].w[0] + c.r[1].w[0]);
    set32(c.r[2], ld32((c.r[1].w[0] + 25128u)));
    set32(c.r[2], c.r[3].w[0] << (c.r[2].w[0] & 31u));
    c.r[8].d[0] = c.r[8].d[0] | c.r[2].d[0];
    c.budget -= 4;
L_0018C848:
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.r[2].d[0] = c.r[7].sd[0] < 20ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; mmi::mult(c, 0, c.r[7].w[0], c.r[5].w[0]); c.r[2].d[0] = c.lo.d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0018C820u | kUnwind; return; } goto L_0018C820; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0018C878; } }
L_0018C860:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0018C870; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0018C888; } }
L_0018C870:
    set32(c.r[8], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[8].w[0]) >> 1));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 2;
L_0018C878:
    c.r[3].d[0] = c.r[2].sd[0] < 30ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[3].d[0] = c.r[8].d[0] & 1ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0018C860u | kUnwind; return; } goto L_0018C860; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0018C888:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0018C890:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_0018C8D8; } }
L_0018C898:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x000E0000u);
    set32(c.r[2], ld32((c.r[4].w[0])));
    set32(c.r[1], c.r[3].w[0] + c.r[1].w[0]);
    c.r[3].d[0] = ld8((c.r[1].w[0] + 6944u));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[2].d[0] = 0ull | 61492ull;  if (t) { goto L_0018C8D4; } }
    mmi::mult(c, 0, c.r[5].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 20u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 24u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 28u)));
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);  if (t) { goto L_0018C8E8; } }
L_0018C8D4:
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 1;
L_0018C8D8:
    c.r[2].d[0] = c.r[5].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], c.r[4].w[0] + c.r[5].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0018C898u | kUnwind; return; } goto L_0018C898; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0018C8E8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0018C8F0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[6], ld32((c.r[4].w[0])));
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[6].w[0] + c.r[3].w[0]);
    st8((c.r[5].w[0] + 182u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 160u)));
    c.budget -= 16;
    { const bool t = c.r[3].d[0] != 0ull; c.r[19].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0018C940; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[4], c.r[19].w[0] + 160u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018C940u); set32(c.r[5], c.r[5].w[0] + 13440u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x00127458u; return; } if (c.pc != 0x0018C940u) [[unlikely]] return; }
L_0018C940:
    set32(c.r[18], ld32((c.r[20].w[0])));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_0018C988; } }
L_0018C94C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018C954u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 500u, depth + 1u); else { c.pc = 0x0018BFA0u; return; } if (c.pc != 0x0018C954u) [[unlikely]] return; }
L_0018C954:
    c.r[21].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], c.r[17].w[0] << 3);
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[16], c.r[19].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018C96Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0023(c, 56u, depth + 1u); else { c.pc = 0x0018C9F0u; return; } if (c.pc != 0x0018C96Cu) [[unlikely]] return; }
L_0018C96C:
    c.r[3].d[0] = ld8((c.r[21].w[0] + 48u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0018C984; } }
    c.r[3].d[0] = ld16((c.r[16].w[0]));
    c.r[3].d[0] = c.r[3].d[0] | 32768ull;
    st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 3;
L_0018C984:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_0018C988:
    c.r[3].d[0] = c.r[17].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0018C94Cu | kUnwind; return; } goto L_0018C94C; } }
    set32(c.r[16], ld32((c.r[20].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_0018C9C0; } }
L_0018C9A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018C9A8u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0023(c, 4u, depth + 1u); else { c.pc = 0x0018C010u; return; } if (c.pc != 0x0018C9A8u) [[unlikely]] return; }
L_0018C9A8:
    set32(c.r[3], c.r[17].w[0] + c.r[18].w[0]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], c.r[3].w[0] << 3);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018C9BCu); set32(c.r[5], c.r[19].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_0023(c, 56u, depth + 1u); else { c.pc = 0x0018C9F0u; return; } if (c.pc != 0x0018C9BCu) [[unlikely]] return; }
L_0018C9BC:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_0018C9C0:
    c.r[3].d[0] = c.r[17].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0018C9A0u | kUnwind; return; } goto L_0018C9A0; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_0018C9F0:
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    st16((c.r[5].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[4].w[0] + 20u)));
    st16((c.r[5].w[0] + 2u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    st8((c.r[5].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[4].w[0] + 12u)));
    st8((c.r[5].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[4].w[0] + 16u)));
    st8((c.r[5].w[0] + 6u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[5].w[0] + 7u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_0018CA30:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 11;
    { const bool t = c.r[17].d[0] != 0ull; c.r[16].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_0018CAA8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018CA64u);  if (depth < kMaxDepth) unit_0023(c, 28u, depth + 1u); else { c.pc = 0x0018C530u; return; } if (c.pc != 0x0018CA64u) [[unlikely]] return; }
L_0018CA64:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018CA6Cu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0023(c, 32u, depth + 1u); else { c.pc = 0x0018C5C0u; return; } if (c.pc != 0x0018CA6Cu) [[unlikely]] return; }
L_0018CA6C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 182u)));  if (t) { goto L_0018CAAC; } }
L_0018CA74:
    set32(c.r[2], c.r[17].w[0] << 3);
    set32(c.r[4], c.r[18].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = ld8((c.r[4].w[0] + 4u));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_0018CA9C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018CA90u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 479u, depth + 1u); else { c.pc = 0x0018BC80u; return; } if (c.pc != 0x0018CA90u) [[unlikely]] return; }
L_0018CA90:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[17].w[0] + 1u);  if (t) { goto L_0018CAA8; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0018CA9C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018CAA4u);  if (depth < kMaxDepth) unit_0022(c, 397u, depth + 1u); else { c.pc = 0x0018AF10u; return; } if (c.pc != 0x0018CAA4u) [[unlikely]] return; }
L_0018CAA4:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_0018CAA8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 182u)));
    c.budget -= 1;
L_0018CAAC:
    c.r[1].d[0] = c.r[17].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0018CAC4; } }
    c.r[3].d[0] = c.r[17].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0018CA74u | kUnwind; return; } goto L_0018CA74; } }
L_0018CAC4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0018CAE0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018CB08u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 500u, depth + 1u); else { c.pc = 0x0018BFA0u; return; } if (c.pc != 0x0018CB08u) [[unlikely]] return; }
L_0018CB08:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018CB14u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0023(c, 13u, depth + 1u); else { c.pc = 0x0018C240u; return; } if (c.pc != 0x0018CB14u) [[unlikely]] return; }
L_0018CB14:
    c.r[2].d[0] = ld16((c.r[17].w[0]));
    c.r[16].d[0] = c.r[16].d[0] & 255ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018CB30u); st16((c.r[17].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0022(c, 479u, depth + 1u); else { c.pc = 0x0018BC80u; return; } if (c.pc != 0x0018CB30u) [[unlikely]] return; }
L_0018CB30:
    c.r[3].d[0] = ld16((c.r[17].w[0]));
    set32(c.r[3], c.r[3].w[0] - c.r[16].w[0]);
    st16((c.r[17].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0018CB60:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    c.r[6].d[0] = c.r[7].d[0] + 0ull;
    c.r[7].d[0] = c.r[8].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018CB88u); set32(c.r[8], c.r[29].w[0] + 44u);  if (depth < kMaxDepth) unit_001A(c, 42u, depth + 1u); else { c.pc = 0x00168960u; return; } if (c.pc != 0x0018CB88u) [[unlikely]] return; }
L_0018CB88:
    set32(c.r[3], ld32((c.r[29].w[0] + 44u)));
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.f[3] = ld32((c.r[3].w[0] + 4u));
    c.f[2] = ld32((c.r[3].w[0] + 8u));
    c.f[1] = ld32((c.r[3].w[0] + 12u));
    c.f[0] = ld32((c.r[3].w[0] + 16u));
    st32((c.r[16].w[0]), c.f[3]);
    st32((c.r[16].w[0] + 4u), c.f[2]);
    st32((c.r[16].w[0] + 8u), c.f[1]);
    st32((c.r[16].w[0] + 12u), c.f[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 15;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0018CBD0:
    c.r[2].d[0] = c.r[6].d[0] + 0ull;
    c.r[8].d[0] = c.r[7].d[0] + 0ull;
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[5], ld32((c.r[1].w[0] + 28312u)));
    c.budget -= 7;
    { c.r[7].d[0] = c.r[2].d[0] + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x0018CB60u | kUnwind; return; } goto L_0018CB60; }
L_0018CBF0:
    c.r[2].d[0] = c.r[6].d[0] + 0ull;
    c.r[8].d[0] = c.r[7].d[0] + 0ull;
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[5], ld32((c.r[1].w[0] + 28288u)));
    c.budget -= 7;
    { c.r[7].d[0] = c.r[2].d[0] + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x0018CB60u | kUnwind; return; } goto L_0018CB60; }
L_0018CC10:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[3].d[0] = c.r[4].sd[0] < 128ll ? 1ull : 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0018CC4C; } }
    set32(c.r[3], c.r[4].w[0] - 128u);
    c.r[1].d[0] = c.r[3].sd[0] < 32ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[1].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(25ll) ? 1ull : 0ull;  if (t) { goto L_0018CC50; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018CC40u); set32(c.r[4], c.r[4].w[0] - 128u);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x0018CC40u) [[unlikely]] return; }
L_0018CC40:
    ld128((c.r[2].w[0]) & ~15u, c.r[3]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st128((c.r[16].w[0]) & ~15u, c.r[3]);  if (t) { goto L_0018CF98; } }
L_0018CC4C:
    c.r[1].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(25ll) ? 1ull : 0ull;
    c.budget -= 1;
L_0018CC50:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[3], 0u + 255u);  if (t) { goto L_0018CF94; } }
    set32(c.r[3], c.r[4].w[0] << 2);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[4], c.r[4].w[0] + 13456u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x0018C000u < 16384u) { entry = entries_0023[(t - 0x0018C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0018CC74:
    set32(c.r[3], 0u + 255u);
    set32(c.r[4], 0u + 143u);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    st32((c.r[16].w[0] + 4u), c.r[4].w[0]);
    set32(c.r[3], 0u + 128u);
    st32((c.r[16].w[0] + 8u), c.r[4].w[0]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 12u), c.r[3].w[0]);  if (t) { goto L_0018CF90; } }
L_0018CC94:
    set32(c.r[5], 0u + 255u);
    set32(c.r[4], 0u + 111u);
    st32((c.r[16].w[0]), c.r[5].w[0]);
    set32(c.r[3], 0u + 128u);
    st32((c.r[16].w[0] + 4u), c.r[5].w[0]);
    st32((c.r[16].w[0] + 8u), c.r[4].w[0]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 12u), c.r[3].w[0]);  if (t) { goto L_0018CF90; } }
L_0018CCB4:
    set32(c.r[4], 0u + 132u);
    set32(c.r[3], 0u + 232u);
    st32((c.r[16].w[0]), c.r[4].w[0]);
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[4], 0u + 9u);
    set32(c.r[3], 0u + 128u);
    st32((c.r[16].w[0] + 8u), c.r[4].w[0]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 12u), c.r[3].w[0]);  if (t) { goto L_0018CF90; } }
L_0018CCD8:
    set32(c.r[3], 0u + 143u);
    set32(c.r[4], 0u + 255u);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    st32((c.r[16].w[0] + 4u), c.r[4].w[0]);
    set32(c.r[3], 0u + 128u);
    st32((c.r[16].w[0] + 8u), c.r[4].w[0]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 12u), c.r[3].w[0]);  if (t) { goto L_0018CF90; } }
L_0018CCF8:
    set32(c.r[4], 0u + 47u);
    set32(c.r[3], 0u + 191u);
    st32((c.r[16].w[0]), c.r[4].w[0]);
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[4], 0u + 143u);
    set32(c.r[3], 0u + 128u);
    st32((c.r[16].w[0] + 8u), c.r[4].w[0]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 12u), c.r[3].w[0]);  if (t) { goto L_0018CF90; } }
L_0018CD1C:
    set32(c.r[4], 0u + 255u);
    set32(c.r[3], 0u + 128u);
    st32((c.r[16].w[0]), c.r[4].w[0]);
    st32((c.r[16].w[0] + 4u), c.r[4].w[0]);
    st32((c.r[16].w[0] + 8u), 0u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 12u), c.r[3].w[0]);  if (t) { goto L_0018CF90; } }
L_0018CD38:
    st32((c.r[16].w[0]), 0u);
    set32(c.r[3], 0u + 143u);
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[3], 0u + 255u);
    st32((c.r[16].w[0] + 8u), c.r[3].w[0]);
    set32(c.r[3], 0u + 128u);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 12u), c.r[3].w[0]);  if (t) { goto L_0018CF90; } }
L_0018CD58:
    set32(c.r[4], 0u + 255u);
    set32(c.r[3], 0u + 143u);
    st32((c.r[16].w[0]), c.r[4].w[0]);
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[4], 0u + 207u);
    set32(c.r[3], 0u + 128u);
    st32((c.r[16].w[0] + 8u), c.r[4].w[0]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 12u), c.r[3].w[0]);  if (t) { goto L_0018CF90; } }
L_0018CD7C:
    set32(c.r[4], 0u + 255u);
    set32(c.r[3], 0u + 128u);
    st32((c.r[16].w[0]), c.r[4].w[0]);
    st32((c.r[16].w[0] + 4u), 0u);
    st32((c.r[16].w[0] + 8u), c.r[4].w[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 12u), c.r[3].w[0]);  if (t) { goto L_0018CF90; } }
L_0018CD98:
    set32(c.r[4], 0u + 255u);
    set32(c.r[3], 0u + 143u);
    st32((c.r[16].w[0]), c.r[4].w[0]);
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[4], 0u + 79u);
    set32(c.r[3], 0u + 128u);
    st32((c.r[16].w[0] + 8u), c.r[4].w[0]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 12u), c.r[3].w[0]);  if (t) { goto L_0018CF90; } }
L_0018CDBC:
    set32(c.r[3], 0u + 244u);
    set32(c.r[4], 0u + 74u);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    st32((c.r[16].w[0] + 4u), c.r[4].w[0]);
    set32(c.r[3], 0u + 128u);
    st32((c.r[16].w[0] + 8u), 0u);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 12u), c.r[3].w[0]);  if (t) { goto L_0018CF90; } }
L_0018CDDC:
    set32(c.r[3], 0u + 255u);
    set32(c.r[4], 0u + 143u);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    st32((c.r[16].w[0] + 4u), 0u);
    set32(c.r[3], 0u + 128u);
    st32((c.r[16].w[0] + 8u), c.r[4].w[0]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 12u), c.r[3].w[0]);  if (t) { goto L_0018CF90; } }
L_0018CDFC:
    st32((c.r[16].w[0]), 0u);
    set32(c.r[3], 0u + 143u);
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[3], 0u + 128u);
    st32((c.r[16].w[0] + 8u), 0u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 12u), c.r[3].w[0]);  if (t) { goto L_0018CF90; } }
L_0018CE18:
    st32((c.r[16].w[0]), 0u);
    set32(c.r[4], 0u + 207u);
    st32((c.r[16].w[0] + 4u), 0u);
    set32(c.r[3], 0u + 128u);
    st32((c.r[16].w[0] + 8u), c.r[4].w[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 12u), c.r[3].w[0]);  if (t) { goto L_0018CF90; } }
L_0018CE34:
    set32(c.r[4], 0u + 143u);
    set32(c.r[3], 0u + 128u);
    st32((c.r[16].w[0]), c.r[4].w[0]);
    st32((c.r[16].w[0] + 4u), 0u);
    st32((c.r[16].w[0] + 8u), c.r[4].w[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 12u), c.r[3].w[0]);  if (t) { goto L_0018CF90; } }
L_0018CE50:
    set32(c.r[3], 0u + 143u);
    set32(c.r[4], 0u + 79u);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    st32((c.r[16].w[0] + 4u), c.r[4].w[0]);
    set32(c.r[3], 0u + 128u);
    st32((c.r[16].w[0] + 8u), 0u);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 12u), c.r[3].w[0]);  if (t) { goto L_0018CF90; } }
L_0018CE70:
    st32((c.r[16].w[0]), 0u);
    set32(c.r[4], 0u + 143u);
    st32((c.r[16].w[0] + 4u), 0u);
    set32(c.r[3], 0u + 128u);
    st32((c.r[16].w[0] + 8u), c.r[4].w[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 12u), c.r[3].w[0]);  if (t) { goto L_0018CF90; } }
L_0018CE8C:
    set32(c.r[4], 0u + 175u);
    set32(c.r[3], 0u + 143u);
    st32((c.r[16].w[0]), c.r[4].w[0]);
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[4], 0u + 111u);
    set32(c.r[3], 0u + 128u);
    st32((c.r[16].w[0] + 8u), c.r[4].w[0]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 12u), c.r[3].w[0]);  if (t) { goto L_0018CF90; } }
L_0018CEB0:
    set32(c.r[4], 0u + 239u);
    set32(c.r[3], 0u + 207u);
    st32((c.r[16].w[0]), c.r[4].w[0]);
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[4], 0u + 175u);
    set32(c.r[3], 0u + 128u);
    st32((c.r[16].w[0] + 8u), c.r[4].w[0]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 12u), c.r[3].w[0]);  if (t) { goto L_0018CF90; } }
L_0018CED4:
    set32(c.r[4], 0u + 111u);
    set32(c.r[3], 0u + 47u);
    st32((c.r[16].w[0]), c.r[4].w[0]);
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[4], 0u + 79u);
    set32(c.r[3], 0u + 128u);
    st32((c.r[16].w[0] + 8u), c.r[4].w[0]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 12u), c.r[3].w[0]);  if (t) { goto L_0018CF90; } }
L_0018CEF8:
    set32(c.r[4], 0u + 79u);
    set32(c.r[3], 0u + 128u);
    st32((c.r[16].w[0]), c.r[4].w[0]);
    st32((c.r[16].w[0] + 4u), c.r[4].w[0]);
    st32((c.r[16].w[0] + 8u), c.r[4].w[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 12u), c.r[3].w[0]);  if (t) { goto L_0018CF90; } }
L_0018CF14:
    set32(c.r[4], 0u + 143u);
    set32(c.r[3], 0u + 128u);
    st32((c.r[16].w[0]), c.r[4].w[0]);
    st32((c.r[16].w[0] + 4u), c.r[4].w[0]);
    st32((c.r[16].w[0] + 8u), c.r[4].w[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 12u), c.r[3].w[0]);  if (t) { goto L_0018CF90; } }
L_0018CF30:
    set32(c.r[4], 0u + 255u);
    set32(c.r[3], 0u + 128u);
    st32((c.r[16].w[0]), c.r[4].w[0]);
    st32((c.r[16].w[0] + 4u), c.r[4].w[0]);
    st32((c.r[16].w[0] + 8u), c.r[4].w[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 12u), c.r[3].w[0]);  if (t) { goto L_0018CF90; } }
L_0018CF4C:
    set32(c.r[4], 0u + 255u);
    set32(c.r[3], 0u + 48u);
    st32((c.r[16].w[0]), c.r[4].w[0]);
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[4], 0u + 16u);
    set32(c.r[3], 0u + 128u);
    st32((c.r[16].w[0] + 8u), c.r[4].w[0]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 12u), c.r[3].w[0]);  if (t) { goto L_0018CF90; } }
L_0018CF70:
    set32(c.r[4], 0u + 249u);
    set32(c.r[3], 0u + 184u);
    st32((c.r[16].w[0]), c.r[4].w[0]);
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[4], 0u + 104u);
    set32(c.r[3], 0u + 128u);
    st32((c.r[16].w[0] + 8u), c.r[4].w[0]);
    st32((c.r[16].w[0] + 12u), c.r[3].w[0]);
    c.budget -= 8;
L_0018CF90:
    set32(c.r[3], 0u + 255u);
    c.budget -= 1;
L_0018CF94:
    st32((c.r[16].w[0] + 12u), c.r[3].w[0]);
    c.budget -= 1;
L_0018CF98:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0018CFB0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 6;
L_0018CFC8:
    c.r[2].d[0] = 0ull | 61492ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x000F0000u);
    mmi::mult(c, 0, c.r[16].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.r[1].d[0] = c.r[1].d[0] | 18412ull;
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[4], c.r[2].w[0] + c.r[1].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018CFE8u); set32(c.r[5], c.r[2].w[0] + 8u);  if (depth < kMaxDepth) unit_0022(c, 414u, depth + 1u); else { c.pc = 0x0018B140u; return; } if (c.pc != 0x0018CFE8u) [[unlikely]] return; }
L_0018CFE8:
    set32(c.r[5], c.r[17].w[0] + c.r[16].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x000E0000u);
    set32(c.r[1], c.r[5].w[0] + c.r[1].w[0]);
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[4].d[0] = ld8((c.r[1].w[0] + 6944u));
    c.r[3].d[0] = c.r[16].sd[0] < 10ll ? 1ull : 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x001D0000u);
    set32(c.r[1], c.r[5].w[0] + c.r[1].w[0]);
    c.budget -= 10;
    { const bool t = c.r[3].d[0] != 0ull; st8((c.r[1].w[0] + 25348u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0018CFC8u | kUnwind; return; } goto L_0018CFC8; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0018D030:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 6;
L_0018D048:
    set32(c.r[2], 0u + 15476u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00180000u);
    mmi::mult(c, 0, c.r[16].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.r[1].d[0] = c.r[1].d[0] | 43508ull;
    set32(c.r[6], 0u + 1u);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[4], c.r[2].w[0] + c.r[1].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00090000u);
    c.r[1].d[0] = c.r[1].d[0] | 25104ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018D074u); set32(c.r[5], c.r[2].w[0] + c.r[1].w[0]);  if (depth < kMaxDepth) unit_0022(c, 401u, depth + 1u); else { c.pc = 0x0018AFC0u; return; } if (c.pc != 0x0018D074u) [[unlikely]] return; }
L_0018D074:
    set32(c.r[5], c.r[17].w[0] + c.r[16].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x000E0000u);
    set32(c.r[1], c.r[5].w[0] + c.r[1].w[0]);
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[4].d[0] = ld8((c.r[1].w[0] + 6954u));
    c.r[3].d[0] = c.r[16].sd[0] < 20ll ? 1ull : 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x001D0000u);
    set32(c.r[1], c.r[5].w[0] + c.r[1].w[0]);
    c.budget -= 10;
    { const bool t = c.r[3].d[0] != 0ull; st8((c.r[1].w[0] + 25358u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0018D048u | kUnwind; return; } goto L_0018D048; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0018D0B0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0]), 0u);
    c.r[16].d[0] = 0ull + 0ull;
    c.r[2].d[0] = 0ull | 61492ull;
    c.budget -= 9;
L_0018D0D4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x000F0000u);
    mmi::mult(c, 0, c.r[16].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.r[1].d[0] = c.r[1].d[0] | 18412ull;
    set32(c.r[18], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[4], c.r[18].w[0] + 8u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018D0F0u); set32(c.r[5], c.r[18].w[0] + c.r[1].w[0]);  if (depth < kMaxDepth) unit_0022(c, 414u, depth + 1u); else { c.pc = 0x0018B140u; return; } if (c.pc != 0x0018D0F0u) [[unlikely]] return; }
L_0018D0F0:
    set32(c.r[3], c.r[17].w[0] + c.r[16].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x001D0000u);
    set32(c.r[1], c.r[3].w[0] + c.r[1].w[0]);
    c.r[2].d[0] = ld8((c.r[1].w[0] + 25348u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x000E0000u);
    set32(c.r[1], c.r[3].w[0] + c.r[1].w[0]);
    st8((c.r[1].w[0] + 6944u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[18].w[0] + 8u));
    c.budget -= 10;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0018D124; } }
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_0018D124:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = 0ull | 61492ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0018D0D4u | kUnwind; return; } goto L_0018D0D4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018D13Cu);  if (depth < kMaxDepth) unit_0087(c, 346u, depth + 1u); else { c.pc = 0x0031F2D0u; return; } if (c.pc != 0x0018D13Cu) [[unlikely]] return; }
L_0018D13C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0018D160:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0] + 4u), 0u);
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[2], 0u + 15476u);
    c.budget -= 9;
L_0018D184:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00090000u);
    mmi::mult(c, 0, c.r[16].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.r[1].d[0] = c.r[1].d[0] | 25104ull;
    set32(c.r[6], 0u + 1u);
    set32(c.r[18], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[4], c.r[18].w[0] + c.r[1].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00180000u);
    c.r[1].d[0] = c.r[1].d[0] | 43508ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018D1ACu); set32(c.r[5], c.r[18].w[0] + c.r[1].w[0]);  if (depth < kMaxDepth) unit_0022(c, 401u, depth + 1u); else { c.pc = 0x0018AFC0u; return; } if (c.pc != 0x0018D1ACu) [[unlikely]] return; }
L_0018D1AC:
    set32(c.r[3], c.r[17].w[0] + c.r[16].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x001D0000u);
    set32(c.r[1], c.r[3].w[0] + c.r[1].w[0]);
    c.r[2].d[0] = ld8((c.r[1].w[0] + 25358u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x000E0000u);
    set32(c.r[1], c.r[3].w[0] + c.r[1].w[0]);
    st8((c.r[1].w[0] + 6954u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00090000u);
    set32(c.r[1], c.r[18].w[0] + c.r[1].w[0]);
    c.r[2].d[0] = ld8((c.r[1].w[0] + 25104u));
    c.budget -= 12;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0018D1E8; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[17].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 3;
L_0018D1E8:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < 20ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 15476u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0018D184u | kUnwind; return; } goto L_0018D184; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018D200u);  if (depth < kMaxDepth) unit_0087(c, 346u, depth + 1u); else { c.pc = 0x0031F2D0u; return; } if (c.pc != 0x0018D200u) [[unlikely]] return; }
L_0018D200:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0018D220:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 6;
L_0018D238:
    set32(c.r[2], 0u + 15476u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x001D0000u);
    mmi::mult(c, 0, c.r[16].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.r[1].d[0] = c.r[1].d[0] | 25380ull;
    set32(c.r[6], 0u + 1u);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[4], c.r[2].w[0] + c.r[1].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00090000u);
    c.r[1].d[0] = c.r[1].d[0] | 25104ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018D264u); set32(c.r[5], c.r[2].w[0] + c.r[1].w[0]);  if (depth < kMaxDepth) unit_0022(c, 401u, depth + 1u); else { c.pc = 0x0018AFC0u; return; } if (c.pc != 0x0018D264u) [[unlikely]] return; }
L_0018D264:
    set32(c.r[5], c.r[17].w[0] + c.r[16].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x000E0000u);
    set32(c.r[1], c.r[5].w[0] + c.r[1].w[0]);
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[4].d[0] = ld8((c.r[1].w[0] + 6954u));
    c.r[3].d[0] = c.r[16].sd[0] < 20ll ? 1ull : 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00220000u);
    set32(c.r[1], c.r[5].w[0] + c.r[1].w[0]);
    c.budget -= 10;
    { const bool t = c.r[3].d[0] != 0ull; st8((c.r[1].w[0] + 7220u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0018D238u | kUnwind; return; } goto L_0018D238; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0018D2A0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0] + 4u), 0u);
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[2], 0u + 15476u);
    c.budget -= 9;
L_0018D2C4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00090000u);
    mmi::mult(c, 0, c.r[16].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.r[1].d[0] = c.r[1].d[0] | 25104ull;
    set32(c.r[6], 0u + 1u);
    set32(c.r[18], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[4], c.r[18].w[0] + c.r[1].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x001D0000u);
    c.r[1].d[0] = c.r[1].d[0] | 25380ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018D2ECu); set32(c.r[5], c.r[18].w[0] + c.r[1].w[0]);  if (depth < kMaxDepth) unit_0022(c, 401u, depth + 1u); else { c.pc = 0x0018AFC0u; return; } if (c.pc != 0x0018D2ECu) [[unlikely]] return; }
L_0018D2EC:
    set32(c.r[3], c.r[17].w[0] + c.r[16].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00220000u);
    set32(c.r[1], c.r[3].w[0] + c.r[1].w[0]);
    c.r[2].d[0] = ld8((c.r[1].w[0] + 7220u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x000E0000u);
    set32(c.r[1], c.r[3].w[0] + c.r[1].w[0]);
    st8((c.r[1].w[0] + 6954u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00090000u);
    set32(c.r[1], c.r[18].w[0] + c.r[1].w[0]);
    c.r[2].d[0] = ld8((c.r[1].w[0] + 25104u));
    c.budget -= 12;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0018D328; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[17].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 3;
L_0018D328:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < 20ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 15476u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0018D2C4u | kUnwind; return; } goto L_0018D2C4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018D340u);  if (depth < kMaxDepth) unit_0087(c, 346u, depth + 1u); else { c.pc = 0x0031F2D0u; return; } if (c.pc != 0x0018D340u) [[unlikely]] return; }
L_0018D340:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0018D360:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018D374u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 487u, depth + 1u); else { c.pc = 0x0018BE00u; return; } if (c.pc != 0x0018D374u) [[unlikely]] return; }
L_0018D374:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x000F0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[1].d[0] = c.r[1].d[0] | 18412ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00190000u);
    set32(c.r[4], c.r[16].w[0] + c.r[1].w[0]);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00190000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x000F0000u);
    set32(c.r[2], c.r[2].w[0] - 13376u);
    set32(c.r[1], c.r[16].w[0] + c.r[1].w[0]);
    set32(c.r[5], c.r[5].w[0] - 20064u);
    st32((c.r[1].w[0] + 18408u), c.r[2].w[0]);
    set32(c.r[6], c.r[6].w[0] - 19968u);
    c.r[7].d[0] = 0ull | 61492ull;
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018D3B0u); set32(c.r[8], 0u + 10u);  if (depth < kMaxDepth) unit_0000(c, 89u, depth + 1u); else { c.pc = 0x00100790u; return; } if (c.pc != 0x0018D3B0u) [[unlikely]] return; }
L_0018D3B0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00180000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00190000u);
    c.r[1].d[0] = c.r[1].d[0] | 43508ull;
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00190000u);
    set32(c.r[4], c.r[16].w[0] + c.r[1].w[0]);
    set32(c.r[5], c.r[5].w[0] - 22992u);
    set32(c.r[6], c.r[6].w[0] - 22896u);
    set32(c.r[7], 0u + 15476u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018D3D8u); set32(c.r[8], 0u + 20u);  if (depth < kMaxDepth) unit_0000(c, 89u, depth + 1u); else { c.pc = 0x00100790u; return; } if (c.pc != 0x0018D3D8u) [[unlikely]] return; }
L_0018D3D8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x001D0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00190000u);
    c.r[1].d[0] = c.r[1].d[0] | 25380ull;
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00190000u);
    set32(c.r[4], c.r[16].w[0] + c.r[1].w[0]);
    set32(c.r[5], c.r[5].w[0] - 22992u);
    set32(c.r[6], c.r[6].w[0] - 22896u);
    set32(c.r[7], 0u + 15476u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018D400u); set32(c.r[8], 0u + 20u);  if (depth < kMaxDepth) unit_0000(c, 89u, depth + 1u); else { c.pc = 0x00100790u; return; } if (c.pc != 0x0018D400u) [[unlikely]] return; }
L_0018D400:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00220000u);
    set32(c.r[5], 0u + 10u);
    c.r[1].d[0] = c.r[1].d[0] | 7240ull;
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018D418u); set32(c.r[4], c.r[16].w[0] + c.r[1].w[0]);  if (depth < kMaxDepth) unit_0009(c, 49u, depth + 1u); else { c.pc = 0x00124ED8u; return; } if (c.pc != 0x0018D418u) [[unlikely]] return; }
L_0018D418:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x001D0000u);
    set32(c.r[5], 0u + 10u);
    c.r[1].d[0] = c.r[1].d[0] | 25348ull;
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018D430u); set32(c.r[4], c.r[16].w[0] + c.r[1].w[0]);  if (depth < kMaxDepth) unit_0009(c, 49u, depth + 1u); else { c.pc = 0x00124ED8u; return; } if (c.pc != 0x0018D430u) [[unlikely]] return; }
L_0018D430:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x001D0000u);
    set32(c.r[5], 0u + 20u);
    c.r[1].d[0] = c.r[1].d[0] | 25358ull;
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018D448u); set32(c.r[4], c.r[16].w[0] + c.r[1].w[0]);  if (depth < kMaxDepth) unit_0009(c, 49u, depth + 1u); else { c.pc = 0x00124ED8u; return; } if (c.pc != 0x0018D448u) [[unlikely]] return; }
L_0018D448:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00220000u);
    set32(c.r[5], 0u + 20u);
    c.r[1].d[0] = c.r[1].d[0] | 7220ull;
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018D460u); set32(c.r[4], c.r[16].w[0] + c.r[1].w[0]);  if (depth < kMaxDepth) unit_0009(c, 49u, depth + 1u); else { c.pc = 0x00124ED8u; return; } if (c.pc != 0x0018D460u) [[unlikely]] return; }
L_0018D460:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00220000u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[1], c.r[16].w[0] + c.r[1].w[0]);
    st32((c.r[1].w[0] + 7252u), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00220000u);
    set32(c.r[1], c.r[16].w[0] + c.r[1].w[0]);
    st32((c.r[1].w[0] + 7256u), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st32((c.r[1].w[0] + 26160u), c.r[16].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0018D4A0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0018D55C; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x001D0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[1].d[0] = c.r[1].d[0] | 25380ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00190000u);
    set32(c.r[4], c.r[17].w[0] + c.r[1].w[0]);
    set32(c.r[2], c.r[2].w[0] - 13376u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x000F0000u);
    set32(c.r[5], c.r[5].w[0] - 22896u);
    set32(c.r[1], c.r[17].w[0] + c.r[1].w[0]);
    set32(c.r[6], 0u + 15476u);
    st32((c.r[1].w[0] + 18408u), c.r[2].w[0]);
    set32(c.r[7], 0u + 20u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018D4F8u); st32((c.r[1].w[0] + 26160u), 0u);  if (depth < kMaxDepth) unit_0000(c, 86u, depth + 1u); else { c.pc = 0x00100720u; return; } if (c.pc != 0x0018D4F8u) [[unlikely]] return; }
L_0018D4F8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00180000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00190000u);
    c.r[1].d[0] = c.r[1].d[0] | 43508ull;
    set32(c.r[5], c.r[5].w[0] - 22896u);
    set32(c.r[4], c.r[17].w[0] + c.r[1].w[0]);
    set32(c.r[6], 0u + 15476u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018D518u); set32(c.r[7], 0u + 20u);  if (depth < kMaxDepth) unit_0000(c, 86u, depth + 1u); else { c.pc = 0x00100720u; return; } if (c.pc != 0x0018D518u) [[unlikely]] return; }
L_0018D518:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x000F0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00190000u);
    c.r[1].d[0] = c.r[1].d[0] | 18412ull;
    set32(c.r[5], c.r[5].w[0] - 19968u);
    set32(c.r[4], c.r[17].w[0] + c.r[1].w[0]);
    c.r[6].d[0] = 0ull | 61492ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018D538u); set32(c.r[7], 0u + 10u);  if (depth < kMaxDepth) unit_0000(c, 86u, depth + 1u); else { c.pc = 0x00100720u; return; } if (c.pc != 0x0018D538u) [[unlikely]] return; }
L_0018D538:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018D544u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 494u, depth + 1u); else { c.pc = 0x0018BEE0u; return; } if (c.pc != 0x0018D544u) [[unlikely]] return; }
L_0018D544:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0018D560; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018D55Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x0018D55Cu) [[unlikely]] return; }
L_0018D55C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0018D560:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0018D580:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00220000u);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.r[1].d[0] = c.r[1].d[0] | 7240ull;
    set32(c.r[6], 0u + 10u);
    set32(c.r[4], c.r[2].w[0] + c.r[1].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x000E0000u);
    c.r[1].d[0] = c.r[1].d[0] | 6944ull;
    c.budget -= 9;
    { set32(c.r[5], c.r[2].w[0] + c.r[1].w[0]);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00124D20u | kUnwind; return; } [[clang::musttail]] return unit_0009(c, 40u, depth); }
L_0018D5B0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x000E0000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[1].d[0] = c.r[1].d[0] | 6944ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[6], 0u + 10u);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], c.r[16].w[0] + c.r[1].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00220000u);
    c.r[1].d[0] = c.r[1].d[0] | 7240ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018D5E0u); set32(c.r[5], c.r[16].w[0] + c.r[1].w[0]);  if (depth < kMaxDepth) unit_0009(c, 40u, depth + 1u); else { c.pc = 0x00124D20u; return; } if (c.pc != 0x0018D5E0u) [[unlikely]] return; }
L_0018D5E0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x000E0000u);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[1].d[0] = c.r[1].d[0] | 6944ull;
    c.r[10].d[0] = 0ull + 0ull;
    set32(c.r[8], c.r[16].w[0] + c.r[1].w[0]);
    c.r[7].d[0] = 0ull | 61492ull;
    c.budget -= 8;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u + 10u);  if (t) { goto L_0018D650; } }
L_0018D600:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[9].d[0] = 0ull + 0ull;  if (t) { goto L_0018D638; } }
L_0018D608:
    c.r[3].d[0] = ld8((c.r[3].w[0]));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[10].d[0]; mmi::mult(c, 0, c.r[9].w[0], c.r[7].w[0]); c.r[3].d[0] = c.lo.d[0];  if (t) { goto L_0018D634; } }
    set32(c.r[3], c.r[16].w[0] + c.r[3].w[0]);
    st32((c.r[3].w[0] + 20u), c.r[5].w[0]);
    set32(c.r[6], ld32((c.r[3].w[0] + 20u)));
    set32(c.r[5], ld32((c.r[3].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 28u)));
    set32(c.r[5], c.r[6].w[0] + c.r[5].w[0]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; set32(c.r[5], c.r[3].w[0] + c.r[5].w[0]);  if (t) { goto L_0018D644; } }
L_0018D634:
    set32(c.r[9], c.r[9].w[0] + 1u);
    c.budget -= 1;
L_0018D638:
    c.r[3].d[0] = c.r[9].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], c.r[8].w[0] + c.r[9].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0018D608u | kUnwind; return; } goto L_0018D608; } }
L_0018D644:
    c.budget -= 2;
    { const bool t = c.r[9].d[0] != c.r[4].d[0]; set32(c.r[10], c.r[10].w[0] + 1u);  if (t) { goto L_0018D650; } }
    c.r[10].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 1;
L_0018D650:
    c.r[3].d[0] = c.r[10].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0018D600u | kUnwind; return; } goto L_0018D600; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0018D670:
    set32(c.r[3], ld32((c.r[5].w[0] + 12u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00220000u);
    set32(c.r[1], c.r[4].w[0] + c.r[1].w[0]);
    st32((c.r[1].w[0] + 7252u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0] + 20u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00220000u);
    set32(c.r[1], c.r[4].w[0] + c.r[1].w[0]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[1].w[0] + 7256u), c.r[3].w[0]);  c.pc = t; return; }
L_0018D6A0:
    set32(c.r[29], c.r[29].w[0] - 352u);
    c.r[5].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    set32(c.r[6], 0u + 80u);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[22].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    set32(c.r[4], c.r[29].w[0] + 272u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018D6E0u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0009(c, 49u, depth + 1u); else { c.pc = 0x00124ED8u; return; } if (c.pc != 0x0018D6E0u) [[unlikely]] return; }
L_0018D6E0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[21].d[0] = 0ull + 0ull;  if (t) { goto L_0018D898; } }
L_0018D6E8:
    set32(c.r[2], c.r[4].w[0] - c.r[21].w[0]);
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018D6F8u); set32(c.r[5], c.r[2].w[0] - 1u);  if (depth < kMaxDepth) unit_0023(c, 4u, depth + 1u); else { c.pc = 0x0018C010u; return; } if (c.pc != 0x0018D6F8u) [[unlikely]] return; }
L_0018D6F8:
    set32(c.r[3], c.r[21].w[0] << 2);
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] + c.r[29].w[0]);
    c.budget -= 5;
    { const bool t = c.r[20].d[0] == 0ull; st32((c.r[3].w[0] + 272u), c.r[20].w[0]);  if (t) { goto L_0018D8A8; } }
    set32(c.r[3], ld32((c.r[20].w[0] + 32u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0018D894; } }
    set32(c.r[3], ld32((c.r[20].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0018D894; } }
    set32(c.r[3], ld32((c.r[20].w[0] + 40u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0018D894; } }
    set32(c.r[16], ld32((c.r[20].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[20].w[0] + 20u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018D740u); set32(c.r[4], c.r[16].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_0007(c, 75u, depth + 1u); else { c.pc = 0x0011CEF8u; return; } if (c.pc != 0x0018D740u) [[unlikely]] return; }
L_0018D740:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018D74Cu); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 75u, depth + 1u); else { c.pc = 0x0011CEF8u; return; } if (c.pc != 0x0018D74Cu) [[unlikely]] return; }
L_0018D74C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018D758u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 65u, depth + 1u); else { c.pc = 0x0011CC10u; return; } if (c.pc != 0x0018D758u) [[unlikely]] return; }
L_0018D758:
    st64((c.r[29].w[0] + 200u), c.r[2].d[0]);
    set32(c.r[8], c.r[20].w[0] + 48u);
    set32(c.r[7], c.r[29].w[0] + 208u);
    set32(c.r[6], 0u + 32u);
    c.budget -= 4;
L_0018D768:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0])));
    set32(c.r[6], c.r[6].w[0] - 1u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0] + 1u)));
    st8((c.r[7].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[8], c.r[8].w[0] + 2u);
    st8((c.r[7].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 8;
    { const bool t = c.r[6].sd[0] > 0; set32(c.r[7], c.r[7].w[0] + 2u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0018D768u | kUnwind; return; } goto L_0018D768; } }
    set32(c.r[19], ld32((c.r[20].w[0] + 12u)));
    set32(c.r[18], c.r[21].w[0] - 1u);
    set32(c.r[23], ld32((c.r[20].w[0] + 16u)));
    set32(c.r[3], ld32((c.r[20].w[0] + 20u)));
    set32(c.r[4], c.r[19].w[0] + c.r[23].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 176u), c.r[3].w[0]);  if (t) { goto L_0018D858; } }
L_0018D7A8:
    set32(c.r[3], c.r[3].w[0] + c.r[29].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0] + 272u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[17], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[6], ld32((c.r[4].w[0] + 16u)));
    c.r[3].d[0] = c.r[3].d[0] ^ 255ull;
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 20u)));
    st32((c.r[29].w[0] + 160u), c.r[3].w[0]);
    set32(c.r[3], c.r[17].w[0] + c.r[6].w[0]);
    set32(c.r[30], c.r[4].w[0] + c.r[3].w[0]);
    c.r[1].d[0] = c.r[30].sd[0] < c.r[19].sd[0] ? 1ull : 0ull;
    c.budget -= 14;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0018D854; } }
    set32(c.r[3], ld32((c.r[29].w[0] + 176u)));
    c.r[3].d[0] = c.r[3].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0018D854; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[16].sd[0] < c.r[23].sd[0] ? 1ull : 0ull;  if (t) { goto L_0018D84C; } }
L_0018D7F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018D800u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 75u, depth + 1u); else { c.pc = 0x0011CEF8u; return; } if (c.pc != 0x0018D800u) [[unlikely]] return; }
L_0018D800:
    c.r[5].d[0] = ld64((c.r[29].w[0] + 200u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018D80Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 55u, depth + 1u); else { c.pc = 0x0011C960u; return; } if (c.pc != 0x0018D80Cu) [[unlikely]] return; }
L_0018D80C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018D814u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 78u, depth + 1u); else { c.pc = 0x0011CFB0u; return; } if (c.pc != 0x0018D814u) [[unlikely]] return; }
L_0018D814:
    set32(c.r[4], c.r[2].w[0] + c.r[19].w[0]);
    c.r[3].d[0] = c.r[4].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[1].d[0] = c.r[4].sd[0] < c.r[30].sd[0] ? 1ull : 0ull;  if (t) { goto L_0018D844; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0018D844; } }
    c.r[3].d[0] = ld8((c.r[29].w[0] + 160u));
    set32(c.r[6], c.r[16].w[0] + c.r[29].w[0]);
    c.r[4].d[0] = c.r[3].d[0] + 0ull;
    c.r[3].d[0] = ld8((c.r[6].w[0] + 208u));
    c.r[3].d[0] = c.r[3].d[0] & c.r[4].d[0];
    st8((c.r[6].w[0] + 208u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 6;
L_0018D844:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[3].d[0] = c.r[16].sd[0] < c.r[23].sd[0] ? 1ull : 0ull;
    c.budget -= 2;
L_0018D84C:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0018D7F8u | kUnwind; return; } goto L_0018D7F8; } }
L_0018D854:
    set32(c.r[18], c.r[18].w[0] - 1u);
    c.budget -= 1;
L_0018D858:
    c.budget -= 2;
    { const bool t = c.r[18].sd[0] >= 0; set32(c.r[3], c.r[18].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0018D7A8u | kUnwind; return; } goto L_0018D7A8; } }
    set32(c.r[3], 0u + 1u);
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[20].w[0] + 15472u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0018D888; } }
L_0018D870:
    c.r[3].d[0] = ld8((c.r[3].w[0] + 208u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0018D884; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[20].w[0] + 15472u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0018D894; } }
L_0018D884:
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.budget -= 1;
L_0018D888:
    c.r[3].d[0] = c.r[4].sd[0] < 64ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], c.r[4].w[0] + c.r[29].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0018D870u | kUnwind; return; } goto L_0018D870; } }
L_0018D894:
    set32(c.r[21], c.r[21].w[0] + 1u);
    c.budget -= 1;
L_0018D898:
    set32(c.r[4], ld32((c.r[22].w[0] + 4u)));
    c.r[3].d[0] = c.r[21].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0018D6E8u | kUnwind; return; } goto L_0018D6E8; } }
L_0018D8A8:
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 352u);  c.pc = t; return; }
L_0018D8E0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0018D8F0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].d[0] = ld8((c.r[4].w[0] + 40u));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0018D94C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018D910u); set32(c.r[4], 0u + 44u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0018D910u) [[unlikely]] return; }
L_0018D910:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[7].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0018D940; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0018D924; } }
    set32(c.r[7], c.r[7].w[0] + 20u);
    c.budget -= 1;
L_0018D924:
    set32(c.r[8], ld32((c.r[16].w[0] + 28u)));
    set32(c.r[5], 0u + 1u);
    set32(c.r[9], ld32((c.r[16].w[0] + 32u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018D940u); c.r[10].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 371u, depth + 1u); else { c.pc = 0x0012EBA0u; return; } if (c.pc != 0x0018D940u) [[unlikely]] return; }
L_0018D940:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 41u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 40u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0018D98C; } }
L_0018D94C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018D954u); set32(c.r[4], 0u + 44u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0018D954u) [[unlikely]] return; }
L_0018D954:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[7].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0018D984; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0018D968; } }
    set32(c.r[7], c.r[7].w[0] + 20u);
    c.budget -= 1;
L_0018D968:
    set32(c.r[8], ld32((c.r[16].w[0] + 28u)));
    set32(c.r[5], 0u + 1u);
    set32(c.r[9], ld32((c.r[16].w[0] + 32u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018D984u); c.r[10].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 381u, depth + 1u); else { c.pc = 0x0012ED90u; return; } if (c.pc != 0x0018D984u) [[unlikely]] return; }
L_0018D984:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 41u));
    st8((c.r[2].w[0] + 40u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_0018D98C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0018D9A0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018D9B4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_000C(c, 25u, depth + 1u); else { c.pc = 0x00130270u; return; } if (c.pc != 0x0018D9B4u) [[unlikely]] return; }
L_0018D9B4:
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0018D9C4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0018D9C4u) [[unlikely]] return; }
L_0018D9C4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0018D9E0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018D9F4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_000C(c, 26u, depth + 1u); else { c.pc = 0x00130280u; return; } if (c.pc != 0x0018D9F4u) [[unlikely]] return; }
L_0018D9F4:
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0018DA04u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0018DA04u) [[unlikely]] return; }
L_0018DA04:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0018DA20:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018DA34u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_000C(c, 27u, depth + 1u); else { c.pc = 0x00130290u; return; } if (c.pc != 0x0018DA34u) [[unlikely]] return; }
L_0018DA34:
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0018DA44u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0018DA44u) [[unlikely]] return; }
L_0018DA44:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0018DA60:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    c.budget -= 5;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_0018DA88; } }
    set32(c.r[2], ld32((c.r[5].w[0] + 24u)));
    st32((c.r[4].w[0] + 44u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[5].w[0] + 24u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018DA88u); st32((c.r[4].w[0] + 164u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000C(c, 32u, depth + 1u); else { c.pc = 0x00130300u; return; } if (c.pc != 0x0018DA88u) [[unlikely]] return; }
L_0018DA88:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0018DAA0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018DABCu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_000C(c, 29u, depth + 1u); else { c.pc = 0x001302B0u; return; } if (c.pc != 0x0018DABCu) [[unlikely]] return; }
L_0018DABC:
    st32((c.r[17].w[0] + 164u), c.r[16].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0018DAE0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[8].d[0] + 0ull;
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018DB08u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000C(c, 12u, depth + 1u); else { c.pc = 0x001300B0u; return; } if (c.pc != 0x0018DB08u) [[unlikely]] return; }
L_0018DB08:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] - 13232u);
    set32(c.r[3], c.r[3].w[0] - 13144u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    set32(c.r[4], c.r[16].w[0] + 64u);
    st32((c.r[16].w[0] + 20u), c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x54530000u);
    st8((c.r[16].w[0] + 40u), static_cast<std::uint8_t>(c.r[18].w[0]));
    c.r[2].d[0] = c.r[2].d[0] | 21318ull;
    st8((c.r[16].w[0] + 41u), static_cast<std::uint8_t>(c.r[17].w[0]));
    set32(c.r[5], 0u + 11u);
    st32((c.r[16].w[0] + 44u), 0u);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018DB44u); st32((c.r[16].w[0] + 48u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0023(c, 236u, depth + 1u); else { c.pc = 0x0018E4B0u; return; } if (c.pc != 0x0018DB44u) [[unlikely]] return; }
L_0018DB44:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 26392u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 548u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018DB58u); set32(c.r[4], c.r[16].w[0] + 64u);  if (depth < kMaxDepth) unit_0023(c, 203u, depth + 1u); else { c.pc = 0x0018DFC0u; return; } if (c.pc != 0x0018DB58u) [[unlikely]] return; }
L_0018DB58:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0018DB80:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0018DBE4; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] - 13232u);
    set32(c.r[2], c.r[2].w[0] - 13144u);
    st32((c.r[17].w[0]), c.r[3].w[0]);
    set32(c.r[4], c.r[17].w[0] + 64u);
    st32((c.r[17].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018DBC0u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0023(c, 238u, depth + 1u); else { c.pc = 0x0018E4F0u; return; } if (c.pc != 0x0018DBC0u) [[unlikely]] return; }
L_0018DBC0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018DBCCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000C(c, 15u, depth + 1u); else { c.pc = 0x00130130u; return; } if (c.pc != 0x0018DBCCu) [[unlikely]] return; }
L_0018DBCC:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0018DBE8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018DBE4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x0018DBE4u) [[unlikely]] return; }
L_0018DBE4:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0018DBE8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0018DC00:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] + 64u);  goto L_0018E550; }
L_0018DC10:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[4], c.r[19].w[0] + 64u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018DC3Cu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0023(c, 205u, depth + 1u); else { c.pc = 0x0018DFE0u; return; } if (c.pc != 0x0018DC3Cu) [[unlikely]] return; }
L_0018DC3C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00410000u);
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[3], c.r[3].w[0] + 4528u);
    c.r[16].d[0] = 0ull + 0ull;
    ld128((c.r[3].w[0]) & ~15u, c.r[3]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st128((c.r[4].w[0]) & ~15u, c.r[3]);  if (t) { goto L_0018DC98; } }
L_0018DC58:
    set32(c.r[2], c.r[16].w[0] << 3);
    set32(c.r[4], c.r[19].w[0] + 64u);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[6], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018DC70u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0023(c, 210u, depth + 1u); else { c.pc = 0x0018E080u; return; } if (c.pc != 0x0018DC70u) [[unlikely]] return; }
L_0018DC70:
    set32(c.r[4], c.r[19].w[0] + 64u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018DC80u); set32(c.r[6], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0023(c, 212u, depth + 1u); else { c.pc = 0x0018E0F0u; return; } if (c.pc != 0x0018DC80u) [[unlikely]] return; }
L_0018DC80:
    c.f[1] = ld32((c.r[29].w[0] + 84u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42200000u);
    c.f[0] = c.r[3].w[0];
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 84u), c.f[0]);
    c.budget -= 6;
L_0018DC98:
    c.r[3].d[0] = c.r[16].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0018DC58u | kUnwind; return; } goto L_0018DC58; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0018DCC0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] - 13248u);
    st32((c.r[4].w[0] + 52u), c.r[2].w[0]);
    set32(c.r[2], c.r[4].w[0] + 16u);
    st32((c.r[4].w[0] + 48u), c.r[5].w[0]);
    st128((c.r[2].w[0]) & ~15u, c.vu0.vf[0]);
    set32(c.r[5], 0u + 1u);
    set32(c.r[3], 0u + 1u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[2] = c.r[2].w[0];
    st32((c.r[4].w[0] + 32u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[2].w[0];
    st32((c.r[4].w[0] + 36u), c.f[2]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    st32((c.r[4].w[0] + 40u), c.f[1]);
    st32((c.r[4].w[0] + 44u), c.f[0]);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 25;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_0018DD30:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0018DD6C; } }
    c.r[2].d[0] = c.r[5].d[0] << 48;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] - 13248u);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] <= 0; st32((c.r[16].w[0] + 52u), c.r[3].w[0]);  if (t) { goto L_0018DD68; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018DD68u);  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x0018DD68u) [[unlikely]] return; }
L_0018DD68:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0018DD6C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0018DD80:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0] + 48u)));
    c.budget -= 10;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0018DE84; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0018DE84; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018DDB8u);  if (depth < kMaxDepth) unit_0022(c, 132u, depth + 1u); else { c.pc = 0x00188B30u; return; } if (c.pc != 0x0018DDB8u) [[unlikely]] return; }
L_0018DDB8:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != 0ull;  if (t) { goto L_0018DDC8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 60u), c.r[2].w[0]);  if (t) { goto L_0018DDDC; } }
L_0018DDC8:
    set32(c.r[3], ld32((c.r[16].w[0] + 60u)));
    c.r[1].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0018DDDC; } }
    st32((c.r[16].w[0] + 60u), c.r[2].w[0]);
    c.budget -= 1;
L_0018DDDC:
    c.r[2].d[0] = c.r[18].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0018DDF4; } }
    ld128((c.r[17].w[0] + 32u) & ~15u, c.r[2]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st128((c.r[16].w[0] + 16u) & ~15u, c.r[2]);  if (t) { goto L_0018DE28; } }
L_0018DDF4:
    c.f[0] = ld32((c.r[17].w[0] + 36u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[2] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::mul(c.f[0], c.f[2]);
    st32((c.r[17].w[0] + 36u), c.f[0]);
    ld128((c.r[17].w[0] + 32u) & ~15u, c.r[2]);
    st128((c.r[16].w[0] + 16u) & ~15u, c.r[2]);
    c.f[0] = ld32((c.r[17].w[0] + 36u));
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    st32((c.r[17].w[0] + 36u), c.f[0]);
    c.budget -= 13;
L_0018DE28:
    set32(c.r[2], ld32((c.r[17].w[0] + 48u)));
    st32((c.r[16].w[0] + 352u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 356u), 0u);
    c.r[2].d[0] = ld8((c.r[17].w[0]));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0018DE5C; } }
    set32(c.r[25], ld32((c.r[16].w[0] + 176u)));
    set32(c.r[5], c.r[17].w[0] + 16u);
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0018DE54u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0018DE54u) [[unlikely]] return; }
L_0018DE54:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[25], ld32((c.r[16].w[0] + 176u)));  if (t) { goto L_0018DE74; } }
L_0018DE5C:
    set32(c.r[25], ld32((c.r[16].w[0] + 176u)));
    set32(c.r[5], c.r[17].w[0] + 16u);
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0018DE70u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0018DE70u) [[unlikely]] return; }
L_0018DE70:
    set32(c.r[25], ld32((c.r[16].w[0] + 176u)));
    c.budget -= 1;
L_0018DE74:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 60u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0018DE84u); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0018DE84u) [[unlikely]] return; }
L_0018DE84:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0018DEA0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018DEB8u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_000F(c, 264u, depth + 1u); else { c.pc = 0x0013E560u; return; } if (c.pc != 0x0018DEB8u) [[unlikely]] return; }
L_0018DEB8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[4], 0u + 9u);
    set32(c.r[2], c.r[2].w[0] - 13264u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    st32((c.r[17].w[0] + 16u), 0u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018DED4u); st32((c.r[17].w[0] + 20u), 0u);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x0018DED4u) [[unlikely]] return; }
L_0018DED4:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018DEE0u); set32(c.r[4], 0u + 8u);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x0018DEE0u) [[unlikely]] return; }
L_0018DEE0:
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    set32(c.r[3], 0u + 30u);
    st128((c.r[17].w[0] + 32u) & ~15u, c.r[2]);
    ld128((c.r[16].w[0]) & ~15u, c.r[4]);
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    st128((c.r[17].w[0] + 48u) & ~15u, c.r[4]);
    st32((c.r[17].w[0] + 84u), c.r[3].w[0]);
    st32((c.r[17].w[0] + 80u), 0u);
    st32((c.r[17].w[0] + 92u), 0u);
    st8((c.r[17].w[0] + 88u), static_cast<std::uint8_t>(0u));
    ld128((c.r[17].w[0] + 32u) & ~15u, c.r[3]);
    st128((c.r[17].w[0] + 64u) & ~15u, c.r[3]);
    st32((c.r[17].w[0] + 96u), 0u);
    st32((c.r[17].w[0] + 100u), 0u);
    st32((c.r[17].w[0] + 12u), 0u);
    st32((c.r[17].w[0] + 104u), 0u);
    st32((c.r[17].w[0] + 108u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 22;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0018DF40:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0018DFA4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] - 13264u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 20u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull; c.r[5].sd[0] = static_cast<std::int32_t>(0x00190000u);  if (t) { goto L_0018DF7C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018DF7Cu); set32(c.r[5], c.r[5].w[0] - 8912u);  if (depth < kMaxDepth) unit_0000(c, 82u, depth + 1u); else { c.pc = 0x00100680u; return; } if (c.pc != 0x0018DF7Cu) [[unlikely]] return; }
L_0018DF7C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018DF8Cu); st32((c.r[17].w[0] + 20u), 0u);  if (depth < kMaxDepth) unit_000F(c, 266u, depth + 1u); else { c.pc = 0x0013E5B0u; return; } if (c.pc != 0x0018DF8Cu) [[unlikely]] return; }
L_0018DF8C:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0018DFA8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018DFA4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x0018DFA4u) [[unlikely]] return; }
L_0018DFA4:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0018DFA8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0018DFC0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 16u), c.r[5].w[0]);  c.pc = t; return; }
L_0018DFD0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 96u), c.r[5].w[0]);  c.pc = t; return; }
L_0018DFE0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[4].w[0] + 12u), c.r[16].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 20u)));
    c.budget -= 10;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0018E014; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00190000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018E014u); set32(c.r[5], c.r[5].w[0] - 8912u);  if (depth < kMaxDepth) unit_0000(c, 82u, depth + 1u); else { c.pc = 0x00100680u; return; } if (c.pc != 0x0018E014u) [[unlikely]] return; }
L_0018E014:
    c.budget -= 2;
    { const bool t = c.r[16].sd[0] <= 0; st32((c.r[17].w[0] + 20u), 0u);  if (t) { goto L_0018E050; } }
    set32(c.r[2], c.r[16].w[0] << 6);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018E028u); set32(c.r[4], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x001001F0u; return; } if (c.pc != 0x0018E028u) [[unlikely]] return; }
L_0018E028:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00190000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00190000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 8080u);
    set32(c.r[6], c.r[6].w[0] - 8912u);
    set32(c.r[7], 0u + 64u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018E048u); c.r[8].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 94u, depth + 1u); else { c.pc = 0x001008C0u; return; } if (c.pc != 0x0018E048u) [[unlikely]] return; }
L_0018E048:
    st32((c.r[17].w[0] + 20u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 108u), c.r[16].w[0]);
    c.budget -= 2;
L_0018E050:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0018E070:
    c.budget -= 2;
    { c.r[5].d[0] = 0ull + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x0018DCC0u | kUnwind; return; } goto L_0018DCC0; }
L_0018E080:
    set32(c.r[7], ld32((c.r[4].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[7].d[0] == 0ull;  if (t) { goto L_0018E0A4; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 12u)));
    c.r[1].d[0] = c.r[5].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[3], c.r[5].w[0] << 6);  if (t) { goto L_0018E0A4; } }
    set32(c.r[3], c.r[7].w[0] + c.r[3].w[0]);
    st32((c.r[3].w[0] + 48u), c.r[6].w[0]);
    c.budget -= 2;
L_0018E0A4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0018E0B0:
    set32(c.r[7], ld32((c.r[4].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[7].d[0] == 0ull;  if (t) { goto L_0018E0DC; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 12u)));
    c.r[1].d[0] = c.r[5].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0018E0DC; } }
    ld128((c.r[6].w[0]) & ~15u, c.r[4]);
    set32(c.r[3], c.r[5].w[0] << 6);
    set32(c.r[3], c.r[7].w[0] + c.r[3].w[0]);
    st128((c.r[3].w[0] + 32u) & ~15u, c.r[4]);
    c.budget -= 4;
L_0018E0DC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0018E0F0:
    set32(c.r[7], ld32((c.r[4].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[7].d[0] == 0ull;  if (t) { goto L_0018E11C; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 12u)));
    c.r[1].d[0] = c.r[5].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0018E11C; } }
    ld128((c.r[6].w[0]) & ~15u, c.r[4]);
    set32(c.r[3], c.r[5].w[0] << 6);
    set32(c.r[3], c.r[7].w[0] + c.r[3].w[0]);
    st128((c.r[3].w[0] + 16u) & ~15u, c.r[4]);
    c.budget -= 4;
L_0018E11C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0018E130:
    set32(c.r[7], ld32((c.r[4].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[7].d[0] == 0ull;  if (t) { goto L_0018E154; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 12u)));
    c.r[1].d[0] = c.r[5].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[3], c.r[5].w[0] << 6);  if (t) { goto L_0018E154; } }
    set32(c.r[3], c.r[7].w[0] + c.r[3].w[0]);
    st8((c.r[3].w[0] + 1u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.budget -= 2;
L_0018E154:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0018E160:
    set32(c.r[7], ld32((c.r[4].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[7].d[0] == 0ull;  if (t) { goto L_0018E184; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 12u)));
    c.r[1].d[0] = c.r[5].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[3], c.r[5].w[0] << 6);  if (t) { goto L_0018E184; } }
    set32(c.r[3], c.r[7].w[0] + c.r[3].w[0]);
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.budget -= 2;
L_0018E184:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0018E190:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 16u)));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == 0ull; c.r[18].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0018E354; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018E1BCu); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x0018E1BCu) [[unlikely]] return; }
L_0018E1BC:
    ld128((c.r[2].w[0]) & ~15u, c.r[3]);
    set32(c.r[2], ld32((c.r[18].w[0] + 16u)));
    st128((c.r[2].w[0] + 48u) & ~15u, c.r[3]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[17], ld32((c.r[18].w[0] + 104u)));  if (t) { goto L_0018E2C0; } }
L_0018E1D0:
    set32(c.r[2], ld32((c.r[18].w[0] + 100u)));
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != c.r[2].d[0];  if (t) { goto L_0018E208; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 96u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0018E208; } }
    ld128((c.r[18].w[0] + 64u) & ~15u, c.r[2]);
    set32(c.r[3], c.r[17].w[0] << 6);
    set32(c.r[6], 0u + 1u);
    st128((c.r[4].w[0] + 48u) & ~15u, c.r[2]);
    set32(c.r[2], ld32((c.r[18].w[0] + 20u)));
    set32(c.r[5], ld32((c.r[18].w[0] + 96u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018E208u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0023(c, 190u, depth + 1u); else { c.pc = 0x0018DD80u; return; } if (c.pc != 0x0018E208u) [[unlikely]] return; }
L_0018E208:
    set32(c.r[3], ld32((c.r[18].w[0] + 100u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0018E238; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 20u)));
    set32(c.r[3], c.r[17].w[0] << 6);
    set32(c.r[5], ld32((c.r[18].w[0] + 16u)));
    set32(c.r[6], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018E230u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0023(c, 190u, depth + 1u); else { c.pc = 0x0018DD80u; return; } if (c.pc != 0x0018E230u) [[unlikely]] return; }
L_0018E230:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[17].w[0] + 1u);  if (t) { goto L_0018E2C0; } }
L_0018E238:
    set32(c.r[2], ld32((c.r[18].w[0] + 20u)));
    set32(c.r[16], c.r[17].w[0] << 6);
    set32(c.r[3], c.r[2].w[0] + c.r[16].w[0]);
    c.r[2].d[0] = ld8((c.r[3].w[0] + 1u));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], 0u + 2u);  if (t) { goto L_0018E268; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018E258u);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x0018E258u) [[unlikely]] return; }
L_0018E258:
    ld128((c.r[2].w[0]) & ~15u, c.r[3]);
    set32(c.r[2], ld32((c.r[18].w[0] + 16u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st128((c.r[2].w[0] + 48u) & ~15u, c.r[3]);  if (t) { goto L_0018E2A8; } }
L_0018E268:
    set32(c.r[19], ld32((c.r[3].w[0] + 48u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018E274u); set32(c.r[4], 0u + 91u);  if (depth < kMaxDepth) unit_000B(c, 461u, depth + 1u); else { c.pc = 0x0012FD60u; return; } if (c.pc != 0x0018E274u) [[unlikely]] return; }
L_0018E274:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] != c.r[2].d[0]; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_0018E294; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018E284u); set32(c.r[4], 0u + 3u);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x0018E284u) [[unlikely]] return; }
L_0018E284:
    ld128((c.r[2].w[0]) & ~15u, c.r[3]);
    set32(c.r[2], ld32((c.r[18].w[0] + 16u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st128((c.r[2].w[0] + 48u) & ~15u, c.r[3]);  if (t) { goto L_0018E2A8; } }
L_0018E294:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018E29Cu);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x0018E29Cu) [[unlikely]] return; }
L_0018E29C:
    ld128((c.r[2].w[0]) & ~15u, c.r[3]);
    set32(c.r[2], ld32((c.r[18].w[0] + 16u)));
    st128((c.r[2].w[0] + 48u) & ~15u, c.r[3]);
    c.budget -= 3;
L_0018E2A8:
    set32(c.r[2], ld32((c.r[18].w[0] + 20u)));
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[5], ld32((c.r[18].w[0] + 16u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018E2BCu); set32(c.r[4], c.r[2].w[0] + c.r[16].w[0]);  if (depth < kMaxDepth) unit_0023(c, 190u, depth + 1u); else { c.pc = 0x0018DD80u; return; } if (c.pc != 0x0018E2BCu) [[unlikely]] return; }
L_0018E2BC:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_0018E2C0:
    set32(c.r[2], ld32((c.r[18].w[0] + 12u)));
    c.r[1].d[0] = c.r[17].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0018E2E0; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 108u)));
    c.r[2].d[0] = c.r[17].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0018E1D0u | kUnwind; return; } goto L_0018E1D0; } }
L_0018E2E0:
    c.r[2].d[0] = ld8((c.r[18].w[0] + 88u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0018E318; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 92u)));
    set32(c.r[3], c.r[2].w[0] - 1u);
    st32((c.r[18].w[0] + 92u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 80u)));
    set32(c.r[2], 0u - c.r[2].w[0]);
    c.r[1].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[4], c.r[18].w[0] + 32u);  if (t) { goto L_0018E34C; } }
    st32((c.r[18].w[0] + 92u), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 88u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0018E348; } }
L_0018E318:
    set32(c.r[2], ld32((c.r[18].w[0] + 92u)));
    set32(c.r[4], c.r[2].w[0] + 1u);
    st32((c.r[18].w[0] + 92u), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 84u)));
    set32(c.r[2], ld32((c.r[18].w[0] + 80u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.r[1].d[0] = c.r[2].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0018E348; } }
    st32((c.r[18].w[0] + 92u), c.r[2].w[0]);
    set32(c.r[2], 0u + 1u);
    st8((c.r[18].w[0] + 88u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
L_0018E348:
    set32(c.r[4], c.r[18].w[0] + 32u);
    c.budget -= 1;
L_0018E34C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018E354u);  if (depth < kMaxDepth) unit_002A(c, 280u, depth + 1u); else { c.pc = 0x001AB050u; return; } if (c.pc != 0x0018E354u) [[unlikely]] return; }
L_0018E354:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0018E370:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018E384u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0023(c, 195u, depth + 1u); else { c.pc = 0x0018DEA0u; return; } if (c.pc != 0x0018E384u) [[unlikely]] return; }
L_0018E384:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] - 13280u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    st8((c.r[16].w[0] + 112u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 116u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0018E3B0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0018E3F8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 13280u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018E3E0u); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0023(c, 199u, depth + 1u); else { c.pc = 0x0018DF40u; return; } if (c.pc != 0x0018E3E0u) [[unlikely]] return; }
L_0018E3E0:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0018E3FC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018E3F8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x0018E3F8u) [[unlikely]] return; }
L_0018E3F8:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0018E3FC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0018E410:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018E428u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 132u, depth + 1u); else { c.pc = 0x00188B30u; return; } if (c.pc != 0x0018E428u) [[unlikely]] return; }
L_0018E428:
    set32(c.r[4], ld32((c.r[16].w[0] + 116u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018E434u); c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 133u, depth + 1u); else { c.pc = 0x00188B40u; return; } if (c.pc != 0x0018E434u) [[unlikely]] return; }
L_0018E434:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018E43Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0023(c, 215u, depth + 1u); else { c.pc = 0x0018E190u; return; } if (c.pc != 0x0018E43Cu) [[unlikely]] return; }
L_0018E43C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018E444u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 133u, depth + 1u); else { c.pc = 0x00188B40u; return; } if (c.pc != 0x0018E444u) [[unlikely]] return; }
L_0018E444:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 112u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0018E474; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 116u)));
    set32(c.r[3], c.r[3].w[0] + 16u);
    st32((c.r[16].w[0] + 116u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 116u)));
    c.r[3].d[0] = c.r[3].sd[0] < 255ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u + 255u);  if (t) { goto L_0018E490; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 116u), c.r[3].w[0]);  if (t) { goto L_0018E490; } }
L_0018E474:
    set32(c.r[3], ld32((c.r[16].w[0] + 116u)));
    set32(c.r[3], c.r[3].w[0] - 32u);
    st32((c.r[16].w[0] + 116u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 116u)));
    c.budget -= 6;
    { const bool t = c.r[3].sd[0] >= 0;  if (t) { goto L_0018E490; } }
    st32((c.r[16].w[0] + 116u), 0u);
    c.budget -= 1;
L_0018E490:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0018E4B0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018E4C4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0023(c, 195u, depth + 1u); else { c.pc = 0x0018DEA0u; return; } if (c.pc != 0x0018E4C4u) [[unlikely]] return; }
L_0018E4C4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] - 13296u);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0018E4F0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0018E538; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 13296u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018E520u); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0023(c, 199u, depth + 1u); else { c.pc = 0x0018DF40u; return; } if (c.pc != 0x0018E520u) [[unlikely]] return; }
L_0018E520:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0018E53C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018E538u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x0018E538u) [[unlikely]] return; }
L_0018E538:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0018E53C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0018E550:
    set32(c.r[7], ld32((c.r[4].w[0] + 20u)));
    set32(c.r[3], c.r[5].w[0] << 6);
    set32(c.r[5], c.r[6].w[0] << 6);
    set32(c.r[6], c.r[7].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[7].w[0] + c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 48u)));
    set32(c.r[7], ld32((c.r[6].w[0] + 48u)));
    st32((c.r[6].w[0] + 48u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 20u)));
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[3].w[0] + 48u), c.r[7].w[0]);  c.pc = t; return; }
L_0018E580:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[4].w[0] + 12u)));  if (t) { goto L_0018E5B0; } }
L_0018E588:
    set32(c.r[7], ld32((c.r[4].w[0] + 20u)));
    set32(c.r[3], c.r[5].w[0] + 1u);
    set32(c.r[6], c.r[3].w[0] << 6);
    set32(c.r[3], c.r[5].w[0] << 6);
    set32(c.r[5], c.r[5].w[0] + 1u);
    set32(c.r[6], c.r[7].w[0] + c.r[6].w[0]);
    set32(c.r[3], c.r[7].w[0] + c.r[3].w[0]);
    set32(c.r[6], ld32((c.r[6].w[0] + 48u)));
    st32((c.r[3].w[0] + 48u), c.r[6].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 10;
L_0018E5B0:
    set32(c.r[6], c.r[3].w[0] - 1u);
    c.r[3].d[0] = c.r[5].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0018E588u | kUnwind; return; } goto L_0018E588; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 20u)));
    set32(c.r[5], c.r[6].w[0] << 6);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    st32((c.r[3].w[0] + 48u), 0u);
    set32(c.r[3], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 12u), c.r[3].w[0]);  c.pc = t; return; }
L_0018E5E0:
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0018E5F8; } }
    st32((c.r[3].w[0] + 36u), 0u);
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    st8((c.r[3].w[0] + 33u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
L_0018E5F8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0018E600:
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[5], 0u + 1u);  if (t) { goto L_0018E618; } }
    st32((c.r[3].w[0] + 36u), c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    st8((c.r[3].w[0] + 33u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 3;
L_0018E618:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0018E620:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 20u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0018DA60u | kUnwind; return; } goto L_0018DA60; }
L_0018E630:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 20u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0018DB80u | kUnwind; return; } goto L_0018DB80; }
L_0018E640:
    st32((c.r[4].w[0] + 12u), 0u);
    set32(c.r[3], 0u - 1u);
    st32((c.r[4].w[0]), c.r[3].w[0]);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    st8((c.r[4].w[0] + 10u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 6u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 7u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 8u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 9u), static_cast<std::uint8_t>(0u));
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 16u), 0u);  c.pc = t; return; }
L_0018E680:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0018E6B4; } }
    c.r[2].d[0] = c.r[5].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_0018E6B0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018E6B0u);  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x0018E6B0u) [[unlikely]] return; }
L_0018E6B0:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0018E6B4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0018E6D0:
    set32(c.r[3], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0018E6E8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0018E6F0; } }
L_0018E6E8:
    c.r[2].d[0] = c.r[3].d[0] ^ 3ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 2;
L_0018E6F0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0018E700:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 12u), c.r[5].w[0]);  c.pc = t; return; }
L_0018E710:
    set32(c.r[2], 0u - 1u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    set32(c.r[2], 0u + 4u);
    st32((c.r[4].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[2], 0u + 1u);
    st32((c.r[4].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; return; }
L_0018E730:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0018E764; } }
    c.r[2].d[0] = c.r[5].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_0018E760; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018E760u);  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x0018E760u) [[unlikely]] return; }
L_0018E760:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0018E764:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0018E780:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[1].w[0] + 26168u)));  c.pc = t; return; }
L_0018E790:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[1].w[0] + 26168u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0018E7D4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018E7B4u); set32(c.r[4], 0u + 108u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0018E7B4u) [[unlikely]] return; }
L_0018E7B4:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0018E7CC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018E7C8u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0023(c, 260u, depth + 1u); else { c.pc = 0x0018E7F0u; return; } if (c.pc != 0x0018E7C8u) [[unlikely]] return; }
L_0018E7C8:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0018E7CC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st32((c.r[1].w[0] + 26168u), c.r[4].w[0]);
    c.budget -= 2;
L_0018E7D4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0018E7F0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00190000u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    set32(c.r[6], c.r[6].w[0] - 6352u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    set32(c.r[7], 0u + 12u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00190000u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], c.r[5].w[0] - 6384u);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[8], 0u + 6u);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018E830u); set32(c.r[4], c.r[16].w[0] + 32u);  if (depth < kMaxDepth) unit_0000(c, 89u, depth + 1u); else { c.pc = 0x00100790u; return; } if (c.pc != 0x0018E830u) [[unlikely]] return; }
L_0018E830:
    set32(c.r[17], c.r[19].w[0] << 6);
    st32((c.r[16].w[0] + 4u), 0u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018E844u); st32((c.r[16].w[0]), c.r[19].w[0]);  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x001001F0u; return; } if (c.pc != 0x0018E844u) [[unlikely]] return; }
L_0018E844:
    set32(c.r[18], c.r[19].w[0] << 1);
    st32((c.r[16].w[0] + 12u), c.r[2].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018E854u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x001001F0u; return; } if (c.pc != 0x0018E854u) [[unlikely]] return; }
L_0018E854:
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018E860u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x001001F0u; return; } if (c.pc != 0x0018E860u) [[unlikely]] return; }
L_0018E860:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018E86Cu); st32((c.r[16].w[0] + 20u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x001001F0u; return; } if (c.pc != 0x0018E86Cu) [[unlikely]] return; }
L_0018E86C:
    st32((c.r[16].w[0] + 24u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018E878u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x001001F0u; return; } if (c.pc != 0x0018E878u) [[unlikely]] return; }
L_0018E878:
    st32((c.r[16].w[0] + 28u), c.r[2].w[0]);
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018E88Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 49u, depth + 1u); else { c.pc = 0x00124ED8u; return; } if (c.pc != 0x0018E88Cu) [[unlikely]] return; }
L_0018E88C:
    set32(c.r[4], ld32((c.r[16].w[0] + 16u)));
    c.r[17].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018E8A0u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 49u, depth + 1u); else { c.pc = 0x00124ED8u; return; } if (c.pc != 0x0018E8A0u) [[unlikely]] return; }
L_0018E8A0:
    set32(c.r[4], ld32((c.r[16].w[0] + 20u)));
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018E8B0u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 49u, depth + 1u); else { c.pc = 0x00124ED8u; return; } if (c.pc != 0x0018E8B0u) [[unlikely]] return; }
L_0018E8B0:
    set32(c.r[4], ld32((c.r[16].w[0] + 24u)));
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018E8C0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 49u, depth + 1u); else { c.pc = 0x00124ED8u; return; } if (c.pc != 0x0018E8C0u) [[unlikely]] return; }
L_0018E8C0:
    set32(c.r[4], ld32((c.r[16].w[0] + 28u)));
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018E8D0u); c.r[6].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 49u, depth + 1u); else { c.pc = 0x00124ED8u; return; } if (c.pc != 0x0018E8D0u) [[unlikely]] return; }
L_0018E8D0:
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    set32(c.r[17], c.r[2].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] << 5);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018E8F0u); set32(c.r[4], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x001001F0u; return; } if (c.pc != 0x0018E8F0u) [[unlikely]] return; }
L_0018E8F0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00190000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00190000u);
    c.r[8].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 6592u);
    set32(c.r[6], c.r[6].w[0] - 6528u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018E910u); set32(c.r[7], 0u + 20u);  if (depth < kMaxDepth) unit_0000(c, 94u, depth + 1u); else { c.pc = 0x001008C0u; return; } if (c.pc != 0x0018E910u) [[unlikely]] return; }
L_0018E910:
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 104u), 0u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0018E940:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0018EA28; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0018E970; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018E970u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100210u; return; } if (c.pc != 0x0018E970u) [[unlikely]] return; }
L_0018E970:
    st32((c.r[17].w[0] + 12u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 16u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0018E988; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018E988u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100210u; return; } if (c.pc != 0x0018E988u) [[unlikely]] return; }
L_0018E988:
    st32((c.r[17].w[0] + 16u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 20u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0018E9A0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018E9A0u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100210u; return; } if (c.pc != 0x0018E9A0u) [[unlikely]] return; }
L_0018E9A0:
    st32((c.r[17].w[0] + 20u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 24u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0018E9B8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018E9B8u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100210u; return; } if (c.pc != 0x0018E9B8u) [[unlikely]] return; }
L_0018E9B8:
    st32((c.r[17].w[0] + 24u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 28u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0018E9D0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018E9D0u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100210u; return; } if (c.pc != 0x0018E9D0u) [[unlikely]] return; }
L_0018E9D0:
    st32((c.r[17].w[0] + 28u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 8u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0018E9EC; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00190000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018E9ECu); set32(c.r[5], c.r[5].w[0] - 6528u);  if (depth < kMaxDepth) unit_0000(c, 82u, depth + 1u); else { c.pc = 0x00100680u; return; } if (c.pc != 0x0018E9ECu) [[unlikely]] return; }
L_0018E9EC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00190000u);
    st32((c.r[17].w[0] + 8u), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], c.r[17].w[0] + 32u);
    set32(c.r[5], c.r[5].w[0] - 6352u);
    set32(c.r[6], 0u + 12u);
    set32(c.r[7], 0u + 6u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018EA10u); st32((c.r[1].w[0] + 26168u), 0u);  if (depth < kMaxDepth) unit_0000(c, 86u, depth + 1u); else { c.pc = 0x00100720u; return; } if (c.pc != 0x0018EA10u) [[unlikely]] return; }
L_0018EA10:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0018EA2C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018EA28u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x0018EA28u) [[unlikely]] return; }
L_0018EA28:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0018EA2C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0018EA40:
    c.budget -= 2;
    { const bool t = c.r[6].sd[0] >= 0; c.r[2].d[0] = c.r[6].sd[0] < 24ll ? 1ull : 0ull;  if (t) { goto L_0018EA50; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0018EA80; } }
L_0018EA50:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0018EA60; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0018EA80; } }
L_0018EA60:
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    mmi::mult(c, 0, c.r[6].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[4], c.r[5].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 8;
L_0018EA80:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0018EA90:
    set32(c.r[29], c.r[29].w[0] - 96u);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const bool t = c.r[6].sd[0] < 0; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0018EB84; } }
    c.r[1].d[0] = c.r[6].sd[0] < 24ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_0018EB84; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018EACCu);  if (depth < kMaxDepth) unit_0023(c, 283u, depth + 1u); else { c.pc = 0x0018EA40u; return; } if (c.pc != 0x0018EACCu) [[unlikely]] return; }
L_0018EACC:
    set32(c.r[16], ld32((c.r[16].w[0] + 4u)));
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[20].d[0] = 0ull + 0ull;  if (t) { goto L_0018EAF8; } }
L_0018EADC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018EAE4u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0023(c, 251u, depth + 1u); else { c.pc = 0x0018E6D0u; return; } if (c.pc != 0x0018EAE4u) [[unlikely]] return; }
L_0018EAE4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[18], c.r[19].w[0] + 20u);  if (t) { goto L_0018EB08; } }
    st8((c.r[19].w[0] + 10u), static_cast<std::uint8_t>(0u));
    set32(c.r[20], c.r[20].w[0] + 1u);
    set32(c.r[19], c.r[19].w[0] + 20u);
    c.budget -= 3;
L_0018EAF8:
    c.r[3].d[0] = c.r[20].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0018EADCu | kUnwind; return; } goto L_0018EADC; } }
    set32(c.r[18], c.r[19].w[0] + 20u);
    c.budget -= 1;
L_0018EB08:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[20].w[0] + 1u);  if (t) { goto L_0018EB58; } }
L_0018EB10:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018EB18u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0023(c, 251u, depth + 1u); else { c.pc = 0x0018E6D0u; return; } if (c.pc != 0x0018EB18u) [[unlikely]] return; }
L_0018EB18:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0018EB4C; } }
    c.r[3].d[0] = ld8((c.r[19].w[0] + 10u));
    set32(c.r[4], c.r[17].w[0] - c.r[20].w[0]);
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.r[4].d[0] = c.r[4].d[0] & 255ull;
    c.r[1].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0018EB40; } }
    st8((c.r[19].w[0] + 10u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 1;
L_0018EB40:
    c.r[20].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_0018EB50; } }
L_0018EB4C:
    st8((c.r[18].w[0] + 10u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_0018EB50:
    set32(c.r[18], c.r[18].w[0] + 20u);
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 2;
L_0018EB58:
    c.r[3].d[0] = c.r[17].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0018EB10u | kUnwind; return; } goto L_0018EB10; } }
    c.r[3].d[0] = ld8((c.r[19].w[0] + 10u));
    set32(c.r[4], c.r[17].w[0] - c.r[20].w[0]);
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.r[4].d[0] = c.r[4].d[0] & 255ull;
    c.r[1].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0018EB84; } }
    st8((c.r[19].w[0] + 10u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 1;
L_0018EB84:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0018EBB0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0018EBDC; } }
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018EBDCu); set32(c.r[6], c.r[2].w[0] << 6);  if (depth < kMaxDepth) unit_0009(c, 49u, depth + 1u); else { c.pc = 0x00124ED8u; return; } if (c.pc != 0x0018EBDCu) [[unlikely]] return; }
L_0018EBDC:
    set32(c.r[4], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0018EBF8; } }
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018EBF8u); set32(c.r[6], c.r[2].w[0] << 1);  if (depth < kMaxDepth) unit_0009(c, 49u, depth + 1u); else { c.pc = 0x00124ED8u; return; } if (c.pc != 0x0018EBF8u) [[unlikely]] return; }
L_0018EBF8:
    set32(c.r[4], ld32((c.r[16].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0018EC14; } }
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018EC14u); set32(c.r[6], c.r[2].w[0] << 1);  if (depth < kMaxDepth) unit_0009(c, 49u, depth + 1u); else { c.pc = 0x00124ED8u; return; } if (c.pc != 0x0018EC14u) [[unlikely]] return; }
L_0018EC14:
    set32(c.r[4], ld32((c.r[16].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0018EC30; } }
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018EC30u); set32(c.r[6], c.r[2].w[0] << 1);  if (depth < kMaxDepth) unit_0009(c, 49u, depth + 1u); else { c.pc = 0x00124ED8u; return; } if (c.pc != 0x0018EC30u) [[unlikely]] return; }
L_0018EC30:
    set32(c.r[4], ld32((c.r[16].w[0] + 28u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0018EC48; } }
    set32(c.r[6], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018EC48u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 49u, depth + 1u); else { c.pc = 0x00124ED8u; return; } if (c.pc != 0x0018EC48u) [[unlikely]] return; }
L_0018EC48:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018EC58u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0023(c, 283u, depth + 1u); else { c.pc = 0x0018EA40u; return; } if (c.pc != 0x0018EC58u) [[unlikely]] return; }
L_0018EC58:
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_0018EC84; } }
L_0018EC64:
    set32(c.r[4], c.r[4].w[0] + 1u);
    st32((c.r[6].w[0] + 12u), 0u);
    c.r[3].d[0] = c.r[4].sd[0] < 24ll ? 1ull : 0ull;
    set32(c.r[6], c.r[6].w[0] + 20u);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0018EC64u | kUnwind; return; } goto L_0018EC64; } }
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 1;
L_0018EC84:
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.r[3].d[0] = c.r[5].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0018EC64u | kUnwind; return; } goto L_0018EC64; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0018ECB0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[5].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018ECD8u); set32(c.r[6], c.r[2].w[0] << 6);  if (depth < kMaxDepth) unit_0009(c, 49u, depth + 1u); else { c.pc = 0x00124ED8u; return; } if (c.pc != 0x0018ECD8u) [[unlikely]] return; }
L_0018ECD8:
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018ECECu); set32(c.r[6], c.r[2].w[0] << 1);  if (depth < kMaxDepth) unit_0009(c, 49u, depth + 1u); else { c.pc = 0x00124ED8u; return; } if (c.pc != 0x0018ECECu) [[unlikely]] return; }
L_0018ECEC:
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], ld32((c.r[16].w[0] + 20u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018ED00u); set32(c.r[6], c.r[2].w[0] << 1);  if (depth < kMaxDepth) unit_0009(c, 49u, depth + 1u); else { c.pc = 0x00124ED8u; return; } if (c.pc != 0x0018ED00u) [[unlikely]] return; }
L_0018ED00:
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], ld32((c.r[16].w[0] + 24u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018ED14u); set32(c.r[6], c.r[2].w[0] << 1);  if (depth < kMaxDepth) unit_0009(c, 49u, depth + 1u); else { c.pc = 0x00124ED8u; return; } if (c.pc != 0x0018ED14u) [[unlikely]] return; }
L_0018ED14:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018ED24u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0023(c, 283u, depth + 1u); else { c.pc = 0x0018EA40u; return; } if (c.pc != 0x0018ED24u) [[unlikely]] return; }
L_0018ED24:
    set32(c.r[17], 0u + 1u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 2;
L_0018ED2C:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018ED38u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0023(c, 283u, depth + 1u); else { c.pc = 0x0018EA40u; return; } if (c.pc != 0x0018ED38u) [[unlikely]] return; }
L_0018ED38:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_0018ED50; } }
L_0018ED44:
    st32((c.r[5].w[0] + 12u), 0u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    set32(c.r[5], c.r[5].w[0] + 20u);
    c.budget -= 3;
L_0018ED50:
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0018ED44u | kUnwind; return; } goto L_0018ED44; } }
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[3].d[0] = c.r[17].sd[0] < 13ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0018ED2Cu | kUnwind; return; } goto L_0018ED2C; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0018ED90:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0018EDF4; } }
L_0018EDAC:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != c.r[2].d[0]; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0018EDBC; } }
    set32(c.r[17], c.r[17].w[0] + 12u);
    c.budget -= 1;
L_0018EDBC:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018EDC8u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0023(c, 283u, depth + 1u); else { c.pc = 0x0018EA40u; return; } if (c.pc != 0x0018EDC8u) [[unlikely]] return; }
L_0018EDC8:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_0018EDE0; } }
L_0018EDD4:
    st32((c.r[5].w[0] + 12u), 0u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    set32(c.r[5], c.r[5].w[0] + 20u);
    c.budget -= 3;
L_0018EDE0:
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0018EDD4u | kUnwind; return; } goto L_0018EDD4; } }
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_0018EDF4:
    c.r[3].d[0] = c.r[17].sd[0] < 24ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0018EDACu | kUnwind; return; } goto L_0018EDAC; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0018EE20:
    set32(c.r[29], c.r[29].w[0] - 400u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.r[1].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 14;
    { const bool t = c.r[1].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0018EE60; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0018EFD8; } }
L_0018EE60:
    set32(c.r[21], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[21].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);  if (t) { goto L_0018EE74; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_0018EFD8; } }
L_0018EE74:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[1].w[0] + 28312u)));
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018EE88u); set32(c.r[6], 0u + 256u);  if (depth < kMaxDepth) unit_0009(c, 40u, depth + 1u); else { c.pc = 0x00124D20u; return; } if (c.pc != 0x0018EE88u) [[unlikely]] return; }
L_0018EE88:
    set32(c.r[2], 0u + 1u);
    set32(c.r[4], c.r[29].w[0] + 368u);
    st32((c.r[21].w[0] + 256u), c.r[2].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018EEA0u); set32(c.r[6], 0u + 16u);  if (depth < kMaxDepth) unit_0009(c, 49u, depth + 1u); else { c.pc = 0x00124ED8u; return; } if (c.pc != 0x0018EEA0u) [[unlikely]] return; }
L_0018EEA0:
    c.r[4].d[0] = ld16((c.r[29].w[0] + 370u));
    set32(c.r[2], 0u - 16384u);
    c.r[3].d[0] = c.r[18].d[0] & 16383ull;
    c.r[19].d[0] = 0ull + 0ull;
    c.r[20].d[0] = 0ull + 0ull;
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st16((c.r[29].w[0] + 370u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 368u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] << 1);
    st32((c.r[29].w[0] + 376u), c.r[3].w[0]);
    st32((c.r[21].w[0] + 260u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 372u)));
    st32((c.r[21].w[0] + 264u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 376u)));
    st32((c.r[21].w[0] + 268u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 380u)));
    st32((c.r[21].w[0] + 272u), c.r[2].w[0]);
    c.budget -= 22;
    { const bool t = 0ull == 0ull; set32(c.r[21], c.r[21].w[0] + 276u);  if (t) { goto L_0018EFA8; } }
L_0018EEF8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018EF00u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0023(c, 319u, depth + 1u); else { c.pc = 0x0018F000u; return; } if (c.pc != 0x0018EF00u) [[unlikely]] return; }
L_0018EF00:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0018EFA4; } }
    set32(c.r[2], c.r[20].w[0] - c.r[19].w[0]);
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_0018EF24; } }
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] - 1u);
    st8((c.r[21].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[21], c.r[21].w[0] + 1u);
    c.budget -= 4;
L_0018EF24:
    set32(c.r[2], c.r[29].w[0] + 112u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[29].w[0] + 396u), c.r[2].w[0]);
    set32(c.r[5], c.r[29].w[0] + 396u);
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    c.r[19].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018EF44u); c.r[18].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0023(c, 324u, depth + 1u); else { c.pc = 0x0018F0A0u; return; } if (c.pc != 0x0018EF44u) [[unlikely]] return; }
L_0018EF44:
    set32(c.r[18], c.r[18].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.r[1].d[0] = c.r[20].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0018EF70; } }
    set32(c.r[2], c.r[18].w[0] + c.r[29].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[2].w[0] + 112u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018EF6Cu); c.r[6].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0023(c, 326u, depth + 1u); else { c.pc = 0x0018F110u; return; } if (c.pc != 0x0018EF6Cu) [[unlikely]] return; }
L_0018EF6C:
    set32(c.r[18], c.r[18].w[0] + c.r[2].w[0]);
    c.budget -= 1;
L_0018EF70:
    set32(c.r[2], 0u + 96u);
    c.r[3].d[0] = 0ull + 0ull;
    st8((c.r[21].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[21].w[0] + 1u), static_cast<std::uint8_t>(c.r[18].w[0]));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; set32(c.r[21], c.r[21].w[0] + 2u);  if (t) { goto L_0018EF98; } }
L_0018EF88:
    c.r[2].d[0] = ld8((c.r[2].w[0] + 112u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[21].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[21], c.r[21].w[0] + 1u);
    c.budget -= 4;
L_0018EF98:
    c.r[2].d[0] = c.r[3].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[3].w[0] + c.r[29].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0018EF88u | kUnwind; return; } goto L_0018EF88; } }
L_0018EFA4:
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.budget -= 1;
L_0018EFA8:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[2].d[0] = c.r[20].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0018EEF8u | kUnwind; return; } goto L_0018EEF8; } }
    st8((c.r[21].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[2], 0u + 1u);
    st8((c.r[21].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[21], c.r[21].w[0] + 2u);
    set32(c.r[3], c.r[21].w[0] - c.r[3].w[0]);
    st32((c.r[17].w[0] + 104u), c.r[3].w[0]);
    c.budget -= 7;
L_0018EFD8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 400u);  c.pc = t; return; }
L_0018F000:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[3], c.r[5].w[0] << 6);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld8((c.r[2].w[0]));
    c.budget -= 12;
    { const bool t = c.r[2].d[0] == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0018F038; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0018F084; } }
L_0018F038:
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018F044u); c.r[16].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0023(c, 283u, depth + 1u); else { c.pc = 0x0018EA40u; return; } if (c.pc != 0x0018F044u) [[unlikely]] return; }
L_0018F044:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0018F078; } }
L_0018F04C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018F054u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0023(c, 251u, depth + 1u); else { c.pc = 0x0018E6D0u; return; } if (c.pc != 0x0018F054u) [[unlikely]] return; }
L_0018F054:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0018F064; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0018F084; } }
L_0018F064:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018F078u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0023(c, 283u, depth + 1u); else { c.pc = 0x0018EA40u; return; } if (c.pc != 0x0018F078u) [[unlikely]] return; }
L_0018F078:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0018F04Cu | kUnwind; return; } goto L_0018F04C; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0018F084:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0018F0A0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], c.r[6].w[0] << 6);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[7], c.r[2].w[0] + c.r[3].w[0]);
    c.r[3].d[0] = ld8((c.r[7].w[0]));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != 0ull; c.r[2].d[0] = c.r[3].d[0] & 128ull;  if (t) { goto L_0018F0CC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0018F0F4; } }
L_0018F0CC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0018F0DC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0018F0F4; } }
L_0018F0DC:
    set32(c.r[4], ld32((c.r[5].w[0])));
    c.r[16].d[0] = c.r[3].d[0] & 127ull;
    set32(c.r[6], c.r[16].w[0] + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018F0F0u); c.r[5].d[0] = c.r[7].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 40u, depth + 1u); else { c.pc = 0x00124D20u; return; } if (c.pc != 0x0018F0F0u) [[unlikely]] return; }
L_0018F0F0:
    set32(c.r[2], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_0018F0F4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0018F110:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[22].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[6].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018F154u); c.r[17].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0023(c, 283u, depth + 1u); else { c.pc = 0x0018EA40u; return; } if (c.pc != 0x0018F154u) [[unlikely]] return; }
L_0018F154:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[23].d[0] = c.r[21].d[0] + 0ull;  if (t) { goto L_0018F1E0; } }
L_0018F160:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018F168u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0023(c, 251u, depth + 1u); else { c.pc = 0x0018E6D0u; return; } if (c.pc != 0x0018F168u) [[unlikely]] return; }
L_0018F168:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0018F1C8; } }
    set32(c.r[18], ld32((c.r[19].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018F17Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0023(c, 333u, depth + 1u); else { c.pc = 0x0018F220u; return; } if (c.pc != 0x0018F17Cu) [[unlikely]] return; }
L_0018F17C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u + 255u);
    c.budget -= 4;
    { const bool t = c.r[18].d[0] == c.r[2].d[0];  if (t) { goto L_0018F1A4; } }
    st8((c.r[21].w[0]), static_cast<std::uint8_t>(c.r[18].w[0]));
    c.r[2].d[0] = ld8((c.r[19].w[0] + 10u));
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[21].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0018F1B0; } }
L_0018F1A4:
    set32(c.r[2], 0u + 126u);
    st8((c.r[21].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[21].w[0] + 1u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
L_0018F1B0:
    set32(c.r[21], c.r[21].w[0] + 2u);
    set32(c.r[5], c.r[19].w[0] + 4u);
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018F1C4u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 40u, depth + 1u); else { c.pc = 0x00124D20u; return; } if (c.pc != 0x0018F1C4u) [[unlikely]] return; }
L_0018F1C4:
    set32(c.r[21], c.r[21].w[0] + c.r[16].w[0]);
    c.budget -= 1;
L_0018F1C8:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018F1DCu); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0023(c, 283u, depth + 1u); else { c.pc = 0x0018EA40u; return; } if (c.pc != 0x0018F1DCu) [[unlikely]] return; }
L_0018F1DC:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0018F1E0:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] != 0ull; set32(c.r[2], c.r[21].w[0] - c.r[23].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0018F160u | kUnwind; return; } goto L_0018F160; } }
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_0018F220:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[2], 0u + 126u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[2].d[0]; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_0018F238; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 6u);  if (t) { goto L_0018F2C8; } }
L_0018F238:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018F240u); c.r[4].d[0] = c.r[4].d[0] & 255ull;  if (depth < kMaxDepth) unit_002D(c, 87u, depth + 1u); else { c.pc = 0x001B4ED0u; return; } if (c.pc != 0x0018F240u) [[unlikely]] return; }
L_0018F240:
    c.r[4].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[2], 0u + 10u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_0018F2C4; } }
    set32(c.r[2], 0u + 14u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 2u);  if (t) { goto L_0018F2BC; } }
    set32(c.r[2], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 2u);  if (t) { goto L_0018F2B4; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_0018F2B0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_0018F2B0; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 4u);  if (t) { goto L_0018F2A8; } }
    set32(c.r[2], 0u + 6u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; set32(c.r[3], 0u + 5u);  if (t) { goto L_0018F2A4; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0018F2A4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0018F2C8; } }
L_0018F2A4:
    set32(c.r[2], 0u + 4u);
    c.budget -= 1;
L_0018F2A8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_0018F2CC; } }
L_0018F2B0:
    set32(c.r[2], 0u + 2u);
    c.budget -= 1;
L_0018F2B4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0018F2C8; } }
L_0018F2BC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0018F2C8; } }
L_0018F2C4:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0018F2C8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_0018F2CC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0018F2E0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 9;
    { const bool t = c.r[6].d[0] != 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0018F30C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018F30Cu);  if (depth < kMaxDepth) unit_0023(c, 298u, depth + 1u); else { c.pc = 0x0018ECB0u; return; } if (c.pc != 0x0018F30Cu) [[unlikely]] return; }
L_0018F30C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018F318u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0023(c, 426u, depth + 1u); else { c.pc = 0x0018FEC0u; return; } if (c.pc != 0x0018F318u) [[unlikely]] return; }
L_0018F318:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[18], ld32((c.r[16].w[0] + 4u)));  if (t) { goto L_0018F344; } }
L_0018F320:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018F328u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0023(c, 4u, depth + 1u); else { c.pc = 0x0018C010u; return; } if (c.pc != 0x0018F328u) [[unlikely]] return; }
L_0018F328:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018F334u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 379u, depth + 1u); else { c.pc = 0x0018AC30u; return; } if (c.pc != 0x0018F334u) [[unlikely]] return; }
L_0018F334:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018F340u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0023(c, 426u, depth + 1u); else { c.pc = 0x0018FEC0u; return; } if (c.pc != 0x0018F340u) [[unlikely]] return; }
L_0018F340:
    set32(c.r[18], c.r[18].w[0] - 1u);
    c.budget -= 1;
L_0018F344:
    c.budget -= 2;
    { const bool t = c.r[18].sd[0] > 0; set32(c.r[5], c.r[18].w[0] - 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0018F320u | kUnwind; return; } goto L_0018F320; } }
    set32(c.r[18], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_0018F37C; } }
L_0018F358:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018F360u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 500u, depth + 1u); else { c.pc = 0x0018BFA0u; return; } if (c.pc != 0x0018F360u) [[unlikely]] return; }
L_0018F360:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018F36Cu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 446u, depth + 1u); else { c.pc = 0x0018B5E0u; return; } if (c.pc != 0x0018F36Cu) [[unlikely]] return; }
L_0018F36C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018F378u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0023(c, 426u, depth + 1u); else { c.pc = 0x0018FEC0u; return; } if (c.pc != 0x0018F378u) [[unlikely]] return; }
L_0018F378:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.budget -= 1;
L_0018F37C:
    c.r[2].d[0] = c.r[19].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0018F358u | kUnwind; return; } goto L_0018F358; } }
    set32(c.r[18], 0u + 1u);
    c.budget -= 1;
L_0018F38C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018F398u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0023(c, 284u, depth + 1u); else { c.pc = 0x0018EA90u; return; } if (c.pc != 0x0018F398u) [[unlikely]] return; }
L_0018F398:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[2].d[0] = c.r[18].sd[0] < 13ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0018F38Cu | kUnwind; return; } goto L_0018F38C; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018F3B4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0023(c, 426u, depth + 1u); else { c.pc = 0x0018FEC0u; return; } if (c.pc != 0x0018F3B4u) [[unlikely]] return; }
L_0018F3B4:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018F3C0u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0023(c, 383u, depth + 1u); else { c.pc = 0x0018F800u; return; } if (c.pc != 0x0018F3C0u) [[unlikely]] return; }
L_0018F3C0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0018F3E0:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[22].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[20], ld32((c.r[5].w[0])));
    c.budget -= 14;
    { const bool t = c.r[20].sd[0] <= 0; c.r[21].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0018F4D0; } }
    c.r[23].d[0] = c.r[6].d[0] & 255ull;
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[23].d[0] != c.r[2].d[0];  if (t) { goto L_0018F438; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018F430u);  if (depth < kMaxDepth) unit_0023(c, 290u, depth + 1u); else { c.pc = 0x0018EBB0u; return; } if (c.pc != 0x0018F430u) [[unlikely]] return; }
L_0018F430:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_0018F444; } }
L_0018F438:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018F440u);  if (depth < kMaxDepth) unit_0023(c, 307u, depth + 1u); else { c.pc = 0x0018ED90u; return; } if (c.pc != 0x0018F440u) [[unlikely]] return; }
L_0018F440:
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0018F444:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_0018F480; } }
L_0018F450:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018F458u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 500u, depth + 1u); else { c.pc = 0x0018BFA0u; return; } if (c.pc != 0x0018F458u) [[unlikely]] return; }
L_0018F458:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull; c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0018F4D0; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018F470u); c.r[5].d[0] = c.r[22].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 451u, depth + 1u); else { c.pc = 0x0018B740u; return; } if (c.pc != 0x0018F470u) [[unlikely]] return; }
L_0018F470:
    set32(c.r[3], ld32((c.r[17].w[0] + 16u)));
    c.r[16].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[19], c.r[19].w[0] + 1u);
    set32(c.r[18], c.r[18].w[0] + c.r[3].w[0]);
    c.budget -= 4;
L_0018F480:
    c.r[3].d[0] = c.r[19].sd[0] < c.r[20].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0018F450u | kUnwind; return; } goto L_0018F450; } }
    st32((c.r[22].w[0] + 4u), c.r[18].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0018F4B4; } }
L_0018F498:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[2].d[0]; c.r[4].d[0] = c.r[22].d[0] + 0ull;  if (t) { goto L_0018F4A8; } }
    set32(c.r[16], c.r[16].w[0] + 12u);
    c.budget -= 1;
L_0018F4A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018F4B0u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0023(c, 284u, depth + 1u); else { c.pc = 0x0018EA90u; return; } if (c.pc != 0x0018F4B0u) [[unlikely]] return; }
L_0018F4B0:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_0018F4B4:
    c.r[3].d[0] = c.r[16].sd[0] < 24ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[6], 0u + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0018F498u | kUnwind; return; } goto L_0018F498; } }
    c.budget -= 2;
    { const bool t = c.r[23].d[0] != c.r[6].d[0]; c.r[4].d[0] = c.r[22].d[0] + 0ull;  if (t) { goto L_0018F4D0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018F4D0u); c.r[5].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0023(c, 335u, depth + 1u); else { c.pc = 0x0018F2E0u; return; } if (c.pc != 0x0018F4D0u) [[unlikely]] return; }
L_0018F4D0:
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_0018F500:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[6], 0u + 1u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018F518u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0023(c, 350u, depth + 1u); else { c.pc = 0x0018F3E0u; return; } if (c.pc != 0x0018F518u) [[unlikely]] return; }
L_0018F518:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018F524u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0023(c, 426u, depth + 1u); else { c.pc = 0x0018FEC0u; return; } if (c.pc != 0x0018F524u) [[unlikely]] return; }
L_0018F524:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0018F540:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018F560u); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0023(c, 290u, depth + 1u); else { c.pc = 0x0018EBB0u; return; } if (c.pc != 0x0018F560u) [[unlikely]] return; }
L_0018F560:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x000E0000u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[1].d[0] = c.r[1].d[0] | 6976ull;
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[16], c.r[16].w[0] + c.r[1].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018F57Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 451u, depth + 1u); else { c.pc = 0x0018B740u; return; } if (c.pc != 0x0018F57Cu) [[unlikely]] return; }
L_0018F57C:
    set32(c.r[2], ld32((c.r[16].w[0] + 16u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018F590u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0022(c, 446u, depth + 1u); else { c.pc = 0x0018B5E0u; return; } if (c.pc != 0x0018F590u) [[unlikely]] return; }
L_0018F590:
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0018F594:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018F5A0u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0023(c, 284u, depth + 1u); else { c.pc = 0x0018EA90u; return; } if (c.pc != 0x0018F5A0u) [[unlikely]] return; }
L_0018F5A0:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[2].d[0] = c.r[18].sd[0] < 24ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0018F594u | kUnwind; return; } goto L_0018F594; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018F5BCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0023(c, 426u, depth + 1u); else { c.pc = 0x0018FEC0u; return; } if (c.pc != 0x0018F5BCu) [[unlikely]] return; }
L_0018F5BC:
    set32(c.r[9], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[6], 0u + 131u);
    set32(c.r[8], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[5], 0u + 82u);
    set32(c.r[7], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[3], 0u + 4u);
    set32(c.r[4], ld32((c.r[17].w[0] + 12u)));
    set32(c.r[2], 0u + 16u);
    set32(c.r[8], c.r[9].w[0] + c.r[8].w[0]);
    set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[7], c.r[7].w[0] << 6);
    set32(c.r[4], c.r[4].w[0] + c.r[7].w[0]);
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[6].w[0]));
    set32(c.r[4], ld32((c.r[17].w[0] + 12u)));
    set32(c.r[4], c.r[7].w[0] + c.r[4].w[0]);
    st8((c.r[4].w[0] + 1u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[4], ld32((c.r[17].w[0] + 12u)));
    set32(c.r[4], c.r[7].w[0] + c.r[4].w[0]);
    st8((c.r[4].w[0] + 2u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], ld32((c.r[17].w[0] + 12u)));
    set32(c.r[4], c.r[7].w[0] + c.r[4].w[0]);
    st8((c.r[4].w[0] + 3u), static_cast<std::uint8_t>(0u));
    st8((c.r[29].w[0] + 72u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[29].w[0] + 73u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 25;
L_0018F620:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018F628u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0023(c, 425u, depth + 1u); else { c.pc = 0x0018FE80u; return; } if (c.pc != 0x0018F628u) [[unlikely]] return; }
L_0018F628:
    c.r[3].d[0] = c.r[2].d[0] & 65280ull;
    st8((c.r[29].w[0] + 75u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 8));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st8((c.r[29].w[0] + 76u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[5], c.r[29].w[0] + 72u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018F64Cu); st8((c.r[29].w[0] + 74u), static_cast<std::uint8_t>(c.r[16].w[0]));  if (depth < kMaxDepth) unit_0023(c, 396u, depth + 1u); else { c.pc = 0x0018F9D0u; return; } if (c.pc != 0x0018F64Cu) [[unlikely]] return; }
L_0018F64C:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[3].d[0] = c.r[16].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0018F620u | kUnwind; return; } goto L_0018F620; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0018F680:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018F6A0u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0023(c, 290u, depth + 1u); else { c.pc = 0x0018EBB0u; return; } if (c.pc != 0x0018F6A0u) [[unlikely]] return; }
L_0018F6A0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x000E0000u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[1].d[0] = c.r[1].d[0] | 6976ull;
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[16], c.r[18].w[0] + c.r[1].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018F6BCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 451u, depth + 1u); else { c.pc = 0x0018B740u; return; } if (c.pc != 0x0018F6BCu) [[unlikely]] return; }
L_0018F6BC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x000F0000u);
    set32(c.r[2], 0u + 2u);
    c.r[1].d[0] = c.r[1].d[0] | 2932ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[4], c.r[18].w[0] + c.r[1].w[0]);
    st32((c.r[4].w[0] + 12u), c.r[2].w[0]);
    set32(c.r[6], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 20u)));
    set32(c.r[3], c.r[6].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018F6F0u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0022(c, 379u, depth + 1u); else { c.pc = 0x0018AC30u; return; } if (c.pc != 0x0018F6F0u) [[unlikely]] return; }
L_0018F6F0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018F6FCu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 446u, depth + 1u); else { c.pc = 0x0018B5E0u; return; } if (c.pc != 0x0018F6FCu) [[unlikely]] return; }
L_0018F6FC:
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0018F700:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018F70Cu); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0023(c, 284u, depth + 1u); else { c.pc = 0x0018EA90u; return; } if (c.pc != 0x0018F70Cu) [[unlikely]] return; }
L_0018F70C:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[2].d[0] = c.r[18].sd[0] < 24ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0018F700u | kUnwind; return; } goto L_0018F700; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018F728u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0023(c, 426u, depth + 1u); else { c.pc = 0x0018FEC0u; return; } if (c.pc != 0x0018F728u) [[unlikely]] return; }
L_0018F728:
    set32(c.r[7], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[5], 0u + 131u);
    set32(c.r[3], ld32((c.r[17].w[0] + 12u)));
    set32(c.r[4], 0u + 82u);
    set32(c.r[2], 0u + 607u);
    set32(c.r[6], c.r[7].w[0] << 6);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[3], ld32((c.r[17].w[0] + 12u)));
    set32(c.r[3], c.r[6].w[0] + c.r[3].w[0]);
    st8((c.r[3].w[0] + 1u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[17].w[0] + 12u)));
    set32(c.r[3], c.r[6].w[0] + c.r[3].w[0]);
    st8((c.r[3].w[0] + 2u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[17].w[0] + 12u)));
    set32(c.r[3], c.r[6].w[0] + c.r[3].w[0]);
    st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 20;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], c.r[7].w[0] - 1u);  if (t) { goto L_0018F788; } }
    set32(c.r[2], 0u + 606u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0018F7B8; } }
    set32(c.r[2], c.r[7].w[0] - 1u);
    c.budget -= 1;
L_0018F788:
    set32(c.r[4], 0u + 130u);
    set32(c.r[5], c.r[2].w[0] << 6);
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], ld32((c.r[17].w[0] + 12u)));
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[2], ld32((c.r[17].w[0] + 12u)));
    set32(c.r[2], c.r[5].w[0] + c.r[2].w[0]);
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[17].w[0] + 12u)));
    set32(c.r[2], c.r[5].w[0] + c.r[2].w[0]);
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(0u));
    c.budget -= 12;
L_0018F7B8:
    set32(c.r[5], ld32((c.r[17].w[0] + 24u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018F7C8u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0023(c, 398u, depth + 1u); else { c.pc = 0x0018FA50u; return; } if (c.pc != 0x0018F7C8u) [[unlikely]] return; }
L_0018F7C8:
    set32(c.r[5], ld32((c.r[17].w[0] + 16u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018F7D8u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0023(c, 398u, depth + 1u); else { c.pc = 0x0018FA50u; return; } if (c.pc != 0x0018F7D8u) [[unlikely]] return; }
L_0018F7D8:
    set32(c.r[5], ld32((c.r[17].w[0] + 20u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018F7E8u); set32(c.r[6], 0u + 2u);  if (depth < kMaxDepth) unit_0023(c, 398u, depth + 1u); else { c.pc = 0x0018FA50u; return; } if (c.pc != 0x0018F7E8u) [[unlikely]] return; }
L_0018F7E8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0018F800:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[22].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[17], ld32((c.r[5].w[0])));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018F834u); c.r[21].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 256u, depth + 1u); else { c.pc = 0x00189B70u; return; } if (c.pc != 0x0018F834u) [[unlikely]] return; }
L_0018F834:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_0018F9A4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[19].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;  if (t) { goto L_0018F8F8; } }
L_0018F844:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018F84Cu); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 500u, depth + 1u); else { c.pc = 0x0018BFA0u; return; } if (c.pc != 0x0018F84Cu) [[unlikely]] return; }
L_0018F84C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[5], ld32((c.r[2].w[0] + 8u)));
    set32(c.r[4], ld32((c.r[1].w[0] + 26128u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018F860u); c.r[20].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0024(c, 41u, depth + 1u); else { c.pc = 0x00190560u; return; } if (c.pc != 0x0018F860u) [[unlikely]] return; }
L_0018F860:
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.r[3].d[0] = ld8((c.r[20].w[0] + 48u));
    c.r[4].d[0] = c.r[4].d[0] << 45;
    set32(c.r[2], 0u + 1u);
    c.r[4].d[0] = c.r[4].d[0] >> 48;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[16].d[0] = c.r[4].d[0] & 65535ull;  if (t) { goto L_0018F88C; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[2].d[0] = c.r[16].d[0] & 65535ull;
    set32(c.r[2], c.r[3].w[0] - c.r[2].w[0]);
    c.r[16].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 4;
L_0018F88C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018F894u);  if (depth < kMaxDepth) unit_0022(c, 128u, depth + 1u); else { c.pc = 0x00188AE0u; return; } if (c.pc != 0x0018F894u) [[unlikely]] return; }
L_0018F894:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0018F8F0; } }
    set32(c.r[8], ld32((c.r[20].w[0] + 12u)));
    c.r[9].d[0] = c.r[16].d[0] & 65535ull;
    set32(c.r[7], ld32((c.r[20].w[0] + 16u)));
    c.r[2].d[0] = c.r[9].d[0] & 65280ull;
    set32(c.r[5], ld32((c.r[22].w[0] + 12u)));
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 8));
    set32(c.r[6], 0u + 131u);
    set32(c.r[4], 0u + 82u);
    set32(c.r[18], c.r[8].w[0] + c.r[7].w[0]);
    set32(c.r[7], c.r[18].w[0] << 6);
    set32(c.r[2], c.r[5].w[0] + c.r[7].w[0]);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[6].w[0]));
    set32(c.r[2], ld32((c.r[22].w[0] + 12u)));
    set32(c.r[2], c.r[2].w[0] + c.r[7].w[0]);
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[2], ld32((c.r[22].w[0] + 12u)));
    set32(c.r[2], c.r[2].w[0] + c.r[7].w[0]);
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(c.r[9].w[0]));
    set32(c.r[2], ld32((c.r[22].w[0] + 12u)));
    set32(c.r[2], c.r[2].w[0] + c.r[7].w[0]);
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 21;
L_0018F8F0:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.r[2].d[0] = c.r[19].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 2;
L_0018F8F8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0018F844u | kUnwind; return; } goto L_0018F844; } }
    set32(c.r[2], ld32((c.r[22].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == c.r[2].d[0];  if (t) { goto L_0018F958; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018F914u);  if (depth < kMaxDepth) unit_0022(c, 128u, depth + 1u); else { c.pc = 0x00188AE0u; return; } if (c.pc != 0x0018F914u) [[unlikely]] return; }
L_0018F914:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0018F958; } }
    set32(c.r[2], ld32((c.r[22].w[0] + 12u)));
    set32(c.r[5], c.r[18].w[0] << 6);
    set32(c.r[4], 0u + 131u);
    set32(c.r[3], 0u + 82u);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[2], ld32((c.r[22].w[0] + 12u)));
    set32(c.r[2], c.r[5].w[0] + c.r[2].w[0]);
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[22].w[0] + 12u)));
    set32(c.r[2], c.r[5].w[0] + c.r[2].w[0]);
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[22].w[0] + 12u)));
    set32(c.r[2], c.r[5].w[0] + c.r[2].w[0]);
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(0u));
    c.budget -= 15;
L_0018F958:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018F960u);  if (depth < kMaxDepth) unit_0022(c, 128u, depth + 1u); else { c.pc = 0x00188AE0u; return; } if (c.pc != 0x0018F960u) [[unlikely]] return; }
L_0018F960:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018F96Cu); c.r[4].d[0] = c.r[22].d[0] + 0ull;  if (depth < kMaxDepth) unit_0023(c, 416u, depth + 1u); else { c.pc = 0x0018FCF0u; return; } if (c.pc != 0x0018F96Cu) [[unlikely]] return; }
L_0018F96C:
    set32(c.r[5], ld32((c.r[22].w[0] + 24u)));
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018F97Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0023(c, 398u, depth + 1u); else { c.pc = 0x0018FA50u; return; } if (c.pc != 0x0018F97Cu) [[unlikely]] return; }
L_0018F97C:
    set32(c.r[5], ld32((c.r[22].w[0] + 16u)));
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018F98Cu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0023(c, 398u, depth + 1u); else { c.pc = 0x0018FA50u; return; } if (c.pc != 0x0018F98Cu) [[unlikely]] return; }
L_0018F98C:
    set32(c.r[5], ld32((c.r[22].w[0] + 20u)));
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018F99Cu); set32(c.r[6], 0u + 2u);  if (depth < kMaxDepth) unit_0023(c, 398u, depth + 1u); else { c.pc = 0x0018FA50u; return; } if (c.pc != 0x0018F99Cu) [[unlikely]] return; }
L_0018F99C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018F9A4u); c.r[4].d[0] = c.r[22].d[0] + 0ull;  if (depth < kMaxDepth) unit_0023(c, 405u, depth + 1u); else { c.pc = 0x0018FB80u; return; } if (c.pc != 0x0018F9A4u) [[unlikely]] return; }
L_0018F9A4:
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
L_0018F9D0:
    set32(c.r[3], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[6], c.r[6].w[0] << 6);
    set32(c.r[7], c.r[3].w[0] + c.r[6].w[0]);
    c.r[3].d[0] = ld8((c.r[7].w[0]));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; c.r[8].d[0] = c.r[3].d[0] & 127ull;  if (t) { goto L_0018F9EC; } }
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0018F9EC:
    c.r[3].d[0] = ld8((c.r[5].w[0]));
    set32(c.r[3], c.r[8].w[0] + c.r[3].w[0]);
    c.r[1].d[0] = c.r[3].sd[0] < 63ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0018FA40; } }
    c.r[3].d[0] = c.r[3].d[0] | 128ull;
    set32(c.r[8], c.r[6].w[0] + c.r[8].w[0]);
    st8((c.r[7].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_0018FA30; } }
L_0018FA14:
    set32(c.r[3], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[6], c.r[5].w[0] + c.r[7].w[0]);
    c.r[6].d[0] = ld8((c.r[6].w[0] + 1u));
    set32(c.r[3], c.r[8].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[7].w[0]);
    st8((c.r[3].w[0] + 1u), static_cast<std::uint8_t>(c.r[6].w[0]));
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.budget -= 7;
L_0018FA30:
    c.r[3].d[0] = ld8((c.r[5].w[0]));
    c.r[3].d[0] = c.r[7].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0018FA14u | kUnwind; return; } goto L_0018FA14; } }
L_0018FA40:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0018FA50:
    set32(c.r[29], c.r[29].w[0] - 144u);
    set32(c.r[3], 0u + 4u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    set32(c.r[22], c.r[29].w[0] + 140u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st8((c.r[29].w[0] + 136u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[16], c.r[29].w[0] + 139u);
    set32(c.r[3], 0u + 16u);
    st8((c.r[29].w[0] + 138u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[29].w[0] + 137u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(0u));
    st8((c.r[22].w[0]), static_cast<std::uint8_t>(0u));
    c.r[3].d[0] = ld16((c.r[5].w[0]));
    c.budget -= 23;
    { const bool t = c.r[3].d[0] != 0ull; c.r[19].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_0018FAB8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018FAB4u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0023(c, 425u, depth + 1u); else { c.pc = 0x0018FE80u; return; } if (c.pc != 0x0018FAB4u) [[unlikely]] return; }
L_0018FAB4:
    st16((c.r[20].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 1;
L_0018FAB8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_0018FB44; } }
L_0018FAC0:
    set32(c.r[2], c.r[18].w[0] << 1);
    set32(c.r[17], c.r[20].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = ld16((c.r[17].w[0]));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_0018FB14; } }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull; set32(c.r[6], c.r[18].w[0] - 1u);  if (t) { goto L_0018FAE8; } }
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018FAE8u); set32(c.r[5], c.r[29].w[0] + 136u);  if (depth < kMaxDepth) unit_0023(c, 396u, depth + 1u); else { c.pc = 0x0018F9D0u; return; } if (c.pc != 0x0018FAE8u) [[unlikely]] return; }
L_0018FAE8:
    c.r[2].d[0] = ld16((c.r[17].w[0]));
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 136u);
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] & 65280ull;
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 8));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018FB0Cu); st8((c.r[22].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0023(c, 396u, depth + 1u); else { c.pc = 0x0018F9D0u; return; } if (c.pc != 0x0018FB0Cu) [[unlikely]] return; }
L_0018FB0C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[18], c.r[18].w[0] + 1u);  if (t) { goto L_0018FB44; } }
L_0018FB14:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018FB1Cu);  if (depth < kMaxDepth) unit_0023(c, 425u, depth + 1u); else { c.pc = 0x0018FE80u; return; } if (c.pc != 0x0018FB1Cu) [[unlikely]] return; }
L_0018FB1C:
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[5], c.r[29].w[0] + 136u);
    c.r[2].d[0] = c.r[2].d[0] & 65280ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 8));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018FB40u); st8((c.r[22].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0023(c, 396u, depth + 1u); else { c.pc = 0x0018F9D0u; return; } if (c.pc != 0x0018FB40u) [[unlikely]] return; }
L_0018FB40:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_0018FB44:
    set32(c.r[3], ld32((c.r[21].w[0] + 4u)));
    c.r[3].d[0] = c.r[18].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0018FAC0u | kUnwind; return; } goto L_0018FAC0; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_0018FB80:
    set32(c.r[29], c.r[29].w[0] - 112u);
    set32(c.r[3], 0u + 2u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[17], c.r[29].w[0] + 110u);
    st8((c.r[29].w[0] + 108u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[16], c.r[29].w[0] + 109u);
    set32(c.r[3], 0u + 81u);
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[17].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[3], 0u + 1u);
    st8((c.r[29].w[0] + 104u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], 0u + 109u);
    st8((c.r[29].w[0] + 111u), static_cast<std::uint8_t>(0u));
    st8((c.r[29].w[0] + 105u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], c.r[19].w[0] << 1);
    c.budget -= 22;
L_0018FBD8:
    c.r[1].d[0] = c.r[19].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;
    set32(c.r[3], c.r[3].w[0] + c.r[19].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[20].w[0] + c.r[3].w[0]);
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[5], c.r[3].w[0] + 32u);  if (t) { goto L_0018FC50; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[3], c.r[19].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + 13568u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x0018C000u < 16384u) { entry = entries_0023[(t - 0x0018C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0018FC0C:
    set32(c.r[3], 0u + 32u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0018FC50; } }
L_0018FC18:
    set32(c.r[3], 0u + 33u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0018FC50; } }
L_0018FC24:
    set32(c.r[3], 0u + 35u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0018FC50; } }
L_0018FC30:
    set32(c.r[3], 0u + 34u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0018FC50; } }
L_0018FC3C:
    set32(c.r[3], 0u + 37u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0018FC50; } }
L_0018FC48:
    set32(c.r[3], 0u + 36u);
    st8((c.r[17].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_0018FC50:
    set32(c.r[18], ld32((c.r[5].w[0])));
    set32(c.r[3], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[18].d[0] == c.r[3].d[0];  if (t) { goto L_0018FCB4; } }
    set32(c.r[2], 0u + 81u);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[5], c.r[29].w[0] + 108u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018FC78u); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0023(c, 396u, depth + 1u); else { c.pc = 0x0018F9D0u; return; } if (c.pc != 0x0018FC78u) [[unlikely]] return; }
L_0018FC78:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 104u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018FC88u); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0023(c, 396u, depth + 1u); else { c.pc = 0x0018F9D0u; return; } if (c.pc != 0x0018FC88u) [[unlikely]] return; }
L_0018FC88:
    set32(c.r[3], ld32((c.r[20].w[0] + 4u)));
    set32(c.r[18], c.r[18].w[0] + 4u);
    c.r[2].d[0] = c.r[18].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 80u);  if (t) { goto L_0018FCA0; } }
    c.r[18].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 1;
L_0018FCA0:
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018FCB4u); set32(c.r[5], c.r[29].w[0] + 108u);  if (depth < kMaxDepth) unit_0023(c, 396u, depth + 1u); else { c.pc = 0x0018F9D0u; return; } if (c.pc != 0x0018FCB4u) [[unlikely]] return; }
L_0018FCB4:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.r[3].d[0] = c.r[19].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], c.r[19].w[0] << 1);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0018FBD8u | kUnwind; return; } goto L_0018FBD8; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_0018FCF0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018FD0Cu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 131u, depth + 1u); else { c.pc = 0x00188B20u; return; } if (c.pc != 0x0018FD0Cu) [[unlikely]] return; }
L_0018FD0C:
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[2], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] != c.r[2].d[0];  if (t) { goto L_0018FDC4; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0018FD60; } }
    set32(c.r[2], 0u + 3u);
    set32(c.r[16], c.r[29].w[0] + 57u);
    st8((c.r[29].w[0] + 56u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], 0u + 49u);
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 6u);
    st8((c.r[29].w[0] + 58u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 164u);
    st8((c.r[29].w[0] + 59u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[6], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018FD58u); set32(c.r[5], c.r[29].w[0] + 56u);  if (depth < kMaxDepth) unit_0023(c, 396u, depth + 1u); else { c.pc = 0x0018F9D0u; return; } if (c.pc != 0x0018FD58u) [[unlikely]] return; }
L_0018FD58:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 103u);  if (t) { goto L_0018FD84; } }
L_0018FD60:
    set32(c.r[16], c.r[29].w[0] + 57u);
    st8((c.r[29].w[0] + 56u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], 0u + 88u);
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[6], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018FD80u); set32(c.r[5], c.r[29].w[0] + 56u);  if (depth < kMaxDepth) unit_0023(c, 396u, depth + 1u); else { c.pc = 0x0018F9D0u; return; } if (c.pc != 0x0018FD80u) [[unlikely]] return; }
L_0018FD80:
    set32(c.r[2], 0u + 103u);
    c.budget -= 1;
L_0018FD84:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[5], c.r[29].w[0] + 56u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018FD98u); set32(c.r[6], 0u + 2u);  if (depth < kMaxDepth) unit_0023(c, 396u, depth + 1u); else { c.pc = 0x0018F9D0u; return; } if (c.pc != 0x0018FD98u) [[unlikely]] return; }
L_0018FD98:
    set32(c.r[6], 0u + 2u);
    set32(c.r[2], 0u + 192u);
    st8((c.r[29].w[0] + 56u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[5], c.r[29].w[0] + 56u);
    set32(c.r[2], 0u + 48u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018FDBCu); st8((c.r[29].w[0] + 58u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0023(c, 396u, depth + 1u); else { c.pc = 0x0018F9D0u; return; } if (c.pc != 0x0018FDBCu) [[unlikely]] return; }
L_0018FDBC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_0018FE70; } }
L_0018FDC4:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], 0u + 3u);  if (t) { goto L_0018FE04; } }
    set32(c.r[3], 0u + 3u);
    set32(c.r[2], 0u + 49u);
    st8((c.r[29].w[0] + 56u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st8((c.r[29].w[0] + 57u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], 0u + 6u);
    set32(c.r[2], 0u + 164u);
    st8((c.r[29].w[0] + 58u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[29].w[0] + 59u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[6], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018FDFCu); set32(c.r[5], c.r[29].w[0] + 56u);  if (depth < kMaxDepth) unit_0023(c, 396u, depth + 1u); else { c.pc = 0x0018F9D0u; return; } if (c.pc != 0x0018FDFCu) [[unlikely]] return; }
L_0018FDFC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0018FE6C; } }
L_0018FE04:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != c.r[2].d[0]; set32(c.r[3], 0u + 2u);  if (t) { goto L_0018FE40; } }
    st8((c.r[29].w[0] + 56u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], 0u + 49u);
    st8((c.r[29].w[0] + 57u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 166u);
    st8((c.r[29].w[0] + 58u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 6u);
    st8((c.r[29].w[0] + 59u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[6], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018FE38u); set32(c.r[5], c.r[29].w[0] + 56u);  if (depth < kMaxDepth) unit_0023(c, 396u, depth + 1u); else { c.pc = 0x0018F9D0u; return; } if (c.pc != 0x0018FE38u) [[unlikely]] return; }
L_0018FE38:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0018FE6C; } }
L_0018FE40:
    set32(c.r[2], 0u + 1u);
    st8((c.r[29].w[0] + 56u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
    { const bool t = c.r[16].d[0] != 0ull; st8((c.r[29].w[0] + 57u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0018FE58; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[29].w[0] + 58u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0018FE5C; } }
L_0018FE58:
    st8((c.r[29].w[0] + 58u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_0018FE5C:
    set32(c.r[6], ld32((c.r[17].w[0] + 4u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018FE6Cu); set32(c.r[5], c.r[29].w[0] + 56u);  if (depth < kMaxDepth) unit_0023(c, 396u, depth + 1u); else { c.pc = 0x0018F9D0u; return; } if (c.pc != 0x0018FE6Cu) [[unlikely]] return; }
L_0018FE6C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_0018FE70:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0018FE80:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0018FE90; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1000u);  if (t) { goto L_0018FEB4; } }
L_0018FE90:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { goto L_0018FEA0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 10u);  if (t) { goto L_0018FEB4; } }
L_0018FEA0:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[2].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0018FEB4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 210u);  if (t) { goto L_0018FEB4; } }
L_0018FEB4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0018FEC0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0018FED0:
    set32(c.r[2], c.r[5].w[0] << 1);
    set32(c.r[3], 0u - 1u);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 32u)));
    c.budget -= 8;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[5], c.r[2].w[0] + 32u);  if (t) { goto L_0018FF14; } }
    c.r[2].d[0] = c.r[6].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[4].w[0] + 4u);  if (t) { goto L_0018FF14; } }
    c.r[1].d[0] = c.r[6].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0018FF14; } }
    st32((c.r[5].w[0]), c.r[3].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0018FF1C; } }
L_0018FF14:
    st32((c.r[5].w[0]), c.r[6].w[0]);
    set32(c.r[2], 0u + 1u);
    c.budget -= 2;
L_0018FF1C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0018FF30:
    set32(c.r[2], c.r[5].w[0] << 1);
    set32(c.r[3], 0u - 1u);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; set32(c.r[7], c.r[2].w[0] + 32u);  if (t) { goto L_0018FFB8; } }
L_0018FF50:
    set32(c.r[4], ld32((c.r[7].w[0])));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0018FFA8; } }
    c.r[2].d[0] = c.r[6].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[4].w[0] + 4u);  if (t) { goto L_0018FFB0; } }
    c.r[1].d[0] = c.r[6].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0018FFB0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0018FF90; } }
L_0018FF7C:
    set32(c.r[2], ld32((c.r[7].w[0] + 12u)));
    set32(c.r[5], c.r[5].w[0] + 1u);
    st32((c.r[7].w[0]), c.r[2].w[0]);
    set32(c.r[7], c.r[7].w[0] + 12u);
    c.budget -= 5;
L_0018FF90:
    c.budget -= 2;
    { const bool t = c.r[5].sd[0] < 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0018FF7Cu | kUnwind; return; } goto L_0018FF7C; } }
    set32(c.r[3], 0u - 1u);
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[7].w[0]), c.r[3].w[0]);  if (t) { goto L_0018FFC0; } }
L_0018FFA8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0018FFC0; } }
L_0018FFB0:
    set32(c.r[7], c.r[7].w[0] + 12u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 2;
L_0018FFB8:
    c.budget -= 2;
    { const bool t = c.r[5].sd[0] <= 0; c.r[2].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0018FF50u | kUnwind; return; } goto L_0018FF50; } }
L_0018FFC0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0018FFD0:
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[5], 0u - 1u);
    c.budget -= 2;
L_0018FFD8:
    set32(c.r[3], c.r[7].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[7].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[7], c.r[7].w[0] + 1u);
    set32(c.r[6], c.r[4].w[0] + c.r[3].w[0]);
    c.r[3].d[0] = c.r[7].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[6].w[0] + 32u), c.r[5].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0018FFD8u | kUnwind; return; } goto L_0018FFD8; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
}

}
