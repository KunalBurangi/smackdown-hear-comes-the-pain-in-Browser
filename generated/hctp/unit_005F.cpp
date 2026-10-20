#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_005F[4096] = {
    1, 0, 0, 0, 0, 0, 2, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 5, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 7, 0, 0, 0, 0, 0, 8, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0,
    10, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 15, 0, 0, 0, 0, 0, 16, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0,
    0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 24, 0, 0, 0, 0, 0, 25, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    27, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    31, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 33,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 39, 0,
    0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 41, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 43, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 49, 0, 50, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52,
    0, 0, 0, 0, 0, 53, 0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0,
    56, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 59, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 62, 0, 0, 0,
    0, 63, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 66, 0, 0, 0,
    0, 67, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 70, 0, 0, 0,
    0, 71, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 74, 0, 0, 0,
    0, 75, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 78, 0, 0, 0,
    0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 82, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 96, 0, 0, 0, 97, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 98, 0, 99, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 100,
    0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 103, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 104, 0, 105, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 110, 0, 111,
    0, 0, 112, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 113, 0, 114, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 115, 0, 116, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0,
    118, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 122, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 125, 0, 0, 0, 0, 126, 0, 0, 0, 127, 0, 0, 0,
    0, 128, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 131, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 0,
    135, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 142, 0,
    0, 0, 0, 0, 0, 143, 0, 0, 0, 144, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0,
    0, 150, 0, 0, 0, 151, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 157, 0, 0,
    0, 158, 0, 0, 0, 159, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 161, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 165, 0, 0,
    0, 166, 0, 0, 0, 167, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0,
    175, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 177, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 0,
    0, 182, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 183, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 184, 0, 0, 0, 0, 0, 185, 0, 0, 0, 0, 186, 0, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 188, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 190, 0, 0, 0,
    0, 191, 0, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 0, 197, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 199, 0,
    0, 0, 0, 0, 200, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 203, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 204, 0, 0, 0, 0, 0, 0, 205, 0, 0, 0, 0, 206, 0, 0,
    0, 0, 0, 0, 207, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 209, 0, 0, 0, 0, 0, 0, 210, 0, 0, 0, 0, 0, 211, 0, 0, 0, 0, 0, 0, 212, 0, 0, 0, 213, 0, 0,
    0, 214, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 215, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 216, 0, 0, 0, 0, 0, 0, 217, 0, 0, 0, 0, 218, 0, 0, 0, 0, 0, 0, 219, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    220, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 0, 222, 0, 0, 0,
    0, 0, 0, 0, 223, 0, 0, 0, 0, 0, 0, 0, 224, 0, 0, 0, 0, 0, 225, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 226, 0, 0,
    0, 0, 227, 0, 0, 0, 0, 228, 0, 0, 0, 0, 229, 0, 0, 0, 230, 0, 0, 0, 0, 231, 0, 0, 0, 0, 232, 0, 0, 0, 0, 0,
    0, 0, 233, 0, 0, 0, 234, 0, 0, 0, 0, 0, 235, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 236, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 237, 0, 0, 0, 0, 0, 0, 0, 238, 0, 0, 0, 0, 239, 0, 0, 0, 0, 0, 0,
    240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 241, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    242, 0, 0, 0, 0, 0, 0, 0, 243, 0, 0, 0, 0, 244, 0, 0, 0, 0, 245, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 246, 0, 0, 0, 0, 0, 247, 0, 0, 0, 0, 0, 0, 248, 0, 0, 0, 0, 0, 0, 249, 0, 0, 0, 0, 0, 0, 0, 0, 250,
    0, 251, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 252, 0, 0, 0, 0, 0,
    253, 0, 0, 0, 0, 0, 254, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    256, 0, 0, 0, 0, 0, 0, 257, 0, 0, 0, 0, 0, 0, 258, 0, 0, 0, 0, 0, 0, 0, 259, 0, 260, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 261, 0, 0, 0, 0, 0, 262, 0, 0, 0, 0, 0, 263, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 264, 0, 0, 0, 0, 0, 0, 265, 0, 0, 0, 0, 0, 266, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 267, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 268, 0, 0, 0, 0,
    0, 269, 0, 270, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 271, 0, 0, 0, 0, 0, 0, 0, 0, 272, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 273, 0, 0, 0, 0, 0, 274, 0, 0, 0, 0, 0, 275, 0, 0, 0, 276, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 277, 0, 0, 0, 0, 0, 278, 0, 0, 0, 0, 0, 279, 0, 0, 0, 280, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    281, 0, 0, 0, 0, 0, 282, 0, 0, 0, 0, 0, 283, 0, 0, 0, 284, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 285, 0, 0, 0,
    0, 0, 286, 0, 0, 0, 0, 0, 287, 0, 0, 0, 288, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 289, 0, 0, 0, 0, 0, 290, 0,
    0, 0, 0, 0, 291, 0, 0, 0, 292, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 293, 0, 0, 0, 0, 0, 294, 0, 0, 0, 0, 0,
    295, 0, 0, 0, 296, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 297, 0, 0, 0, 0, 0, 298, 0, 0, 0, 0, 0, 299, 0, 0, 0,
    300, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 301, 0, 0, 0, 0, 0, 302, 0, 0, 0, 0, 0, 303, 0, 0, 0, 304, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 305, 0, 0, 0, 0, 0, 306, 0, 0, 0, 0, 0, 307, 0, 0, 0, 308, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 309, 0, 0, 0, 0, 0, 310, 0, 0, 0, 0, 0, 311, 0, 0, 0, 312, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    313, 0, 0, 0, 0, 0, 314, 0, 0, 0, 0, 0, 315, 0, 0, 0, 316, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 317, 0, 0, 0,
    0, 0, 318, 0, 0, 0, 0, 0, 319, 0, 0, 0, 320, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 321, 0, 0, 0, 0, 0, 322, 0,
    0, 0, 0, 0, 323, 0, 0, 0, 324, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 325, 0, 0, 0, 0, 0, 326, 0, 0, 0, 0, 0,
    327, 0, 0, 0, 328, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 329, 0, 0, 0, 0, 0, 330, 0, 0, 0, 0, 0, 331, 0, 0, 0,
    332, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 333, 0, 0, 0, 0, 0, 334, 0, 0, 0, 0, 0, 335, 0, 0, 0, 336, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 337, 0, 0, 0, 0, 0, 338, 0, 0, 0, 0, 0, 339, 0, 0, 0, 340, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 341, 0, 0, 0, 0, 0, 342, 0, 0, 0, 0, 0, 343, 0, 0, 0, 344, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    345, 0, 0, 0, 0, 0, 346, 0, 0, 0, 0, 0, 347, 0, 0, 0, 348, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 349, 0, 0, 0,
    0, 0, 350, 0, 0, 0, 0, 0, 351, 0, 0, 0, 352, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 353, 0, 0, 0, 0, 0, 354, 0,
    0, 0, 0, 0, 355, 0, 0, 0, 356, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 357, 0, 0, 0, 0, 0, 358, 0, 0, 0, 0, 0,
    359, 0, 0, 0, 360, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 361, 0, 0, 0, 0, 0, 362, 0, 0, 0, 0, 0, 363, 0, 0, 0,
    364, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 365, 0, 0, 0, 0, 0, 366, 0, 0, 0, 0, 0, 367, 0, 0, 0, 368, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 369, 0, 0, 0, 0, 0, 370, 0, 0, 0, 0, 0, 371, 0, 0, 0, 372, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 373, 0, 0, 0, 0, 0, 374, 0, 0, 0, 0, 0, 375, 0, 0, 0, 376, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    377, 0, 0, 0, 0, 0, 378, 0, 0, 0, 0, 0, 379, 0, 0, 0, 380, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 381, 0, 0, 0,
    0, 0, 382, 0, 0, 0, 0, 0, 383, 0, 0, 0, 384, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 385, 0, 0, 0, 0, 0, 386, 0,
    0, 0, 0, 0, 387, 0, 0, 0, 388, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 389, 0, 0, 0, 0, 0, 390, 0, 0, 0, 0, 0,
    391, 0, 0, 0, 392, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 393, 0, 0, 0, 0, 0, 394, 0, 0, 0, 0, 0, 395, 0, 0, 0,
    396, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 397, 0, 0, 0, 0, 0, 398, 0, 0, 0, 0, 0, 399, 0, 0, 0, 400, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 401, 0, 0, 0, 0, 0, 402, 0, 0, 0, 0, 0, 403, 0, 0, 0, 404, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 405, 0, 0, 0, 0, 0, 406, 0, 0, 0, 0, 0, 407, 0, 0, 0, 408, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    409, 0, 0, 0, 0, 0, 410, 0, 0, 0, 0, 0, 411, 0, 0, 0, 412, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 413, 0, 0, 0,
    0, 0, 414, 0, 0, 0, 0, 0, 415, 0, 0, 0, 416, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 417, 0, 0, 0, 0, 0, 418, 0,
    0, 0, 0, 0, 419, 0, 0, 0, 420, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 421, 0, 0, 0, 0, 0, 422, 0, 0, 0, 0, 0,
    423, 0, 0, 0, 424, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 425, 0, 0, 0, 0, 0, 426, 0, 0, 0, 0, 0, 427, 0, 0, 0,
    428, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 429, 0, 0, 0, 0, 0, 430, 0, 0, 0, 0, 0, 431, 0, 0, 0, 432, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 433, 0, 0, 0, 0, 0, 434, 0, 0, 0, 0, 0, 435, 0, 0, 0, 436, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 437, 0, 0, 0, 0, 0, 438, 0, 0, 0, 0, 0, 439, 0, 0, 0, 440, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    441, 0, 0, 0, 0, 0, 442, 0, 0, 0, 0, 0, 443, 0, 0, 0, 444, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 445, 0, 0, 0,
    0, 0, 446, 0, 0, 0, 0, 0, 447, 0, 0, 0, 448, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 449, 0, 0, 0, 0, 0, 450, 0,
    0, 0, 0, 0, 451, 0, 0, 0, 452, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 453, 0, 0, 0, 0, 0, 454, 0, 0, 0, 0, 0,
    455, 0, 0, 0, 456, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 457, 0, 0, 0, 0, 0, 458, 0, 0, 0, 0, 0, 459, 0, 0, 0,
    460, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 461, 0, 0, 0, 0, 0, 462, 0, 0, 0, 0, 0, 463, 0, 0, 0, 464, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 465, 0, 0, 0, 0, 0, 466, 0, 0, 0, 0, 0, 467, 0, 0, 0, 468, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 469, 0, 0, 0, 0, 0, 470, 0, 0, 0, 0, 0, 471, 0, 0, 0, 472, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    473, 0, 0, 0, 0, 0, 474, 0, 0, 0, 0, 0, 475, 0, 0, 0, 476, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 477, 0, 0, 0,
    0, 0, 478, 0, 0, 0, 0, 0, 479, 0, 0, 0, 480, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 481, 0, 0, 0, 0, 0, 482, 0,
    0, 0, 0, 0, 483, 0, 0, 0, 484, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 485, 0, 0, 0, 0, 0, 486, 0, 0, 0, 0, 0,
    487, 0, 0, 0, 488, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 489, 0, 0, 0, 0, 0, 490, 0, 0, 0, 0, 0, 491, 0, 0, 0,
};

void unit_005F(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_0027C000;
    case 2u: goto L_0027C018;
    case 3u: goto L_0027C028;
    case 4u: goto L_0027C058;
    case 5u: goto L_0027C06C;
    case 6u: goto L_0027C0B0;
    case 7u: goto L_0027C0B8;
    case 8u: goto L_0027C0D0;
    case 9u: goto L_0027C0DC;
    case 10u: goto L_0027C100;
    case 11u: goto L_0027C11C;
    case 12u: goto L_0027C148;
    case 13u: goto L_0027C15C;
    case 14u: goto L_0027C1A0;
    case 15u: goto L_0027C1A8;
    case 16u: goto L_0027C1C0;
    case 17u: goto L_0027C1CC;
    case 18u: goto L_0027C1F0;
    case 19u: goto L_0027C20C;
    case 20u: goto L_0027C250;
    case 21u: goto L_0027C258;
    case 22u: goto L_0027C2A0;
    case 23u: goto L_0027C2A8;
    case 24u: goto L_0027C304;
    case 25u: goto L_0027C31C;
    case 26u: goto L_0027C328;
    case 27u: goto L_0027C380;
    case 28u: goto L_0027C398;
    case 29u: goto L_0027C3BC;
    case 30u: goto L_0027C3C4;
    case 31u: goto L_0027C400;
    case 32u: goto L_0027C464;
    case 33u: goto L_0027C47C;
    case 34u: goto L_0027C4C4;
    case 35u: goto L_0027C51C;
    case 36u: goto L_0027C540;
    case 37u: goto L_0027C554;
    case 38u: goto L_0027C5B0;
    case 39u: goto L_0027C5F8;
    case 40u: goto L_0027C604;
    case 41u: goto L_0027C644;
    case 42u: goto L_0027C64C;
    case 43u: goto L_0027C68C;
    case 44u: goto L_0027C6A0;
    case 45u: goto L_0027C6BC;
    case 46u: goto L_0027C704;
    case 47u: goto L_0027C744;
    case 48u: goto L_0027C74C;
    case 49u: goto L_0027C78C;
    case 50u: goto L_0027C794;
    case 51u: goto L_0027C7A0;
    case 52u: goto L_0027C7FC;
    case 53u: goto L_0027C814;
    case 54u: goto L_0027C81C;
    case 55u: goto L_0027C85C;
    case 56u: goto L_0027C880;
    case 57u: goto L_0027C894;
    case 58u: goto L_0027C8D0;
    case 59u: goto L_0027C910;
    case 60u: goto L_0027C918;
    case 61u: goto L_0027C958;
    case 62u: goto L_0027C970;
    case 63u: goto L_0027C984;
    case 64u: goto L_0027C998;
    case 65u: goto L_0027C9D8;
    case 66u: goto L_0027C9F0;
    case 67u: goto L_0027CA04;
    case 68u: goto L_0027CA18;
    case 69u: goto L_0027CA58;
    case 70u: goto L_0027CA70;
    case 71u: goto L_0027CA84;
    case 72u: goto L_0027CA98;
    case 73u: goto L_0027CAD8;
    case 74u: goto L_0027CAF0;
    case 75u: goto L_0027CB04;
    case 76u: goto L_0027CB18;
    case 77u: goto L_0027CB58;
    case 78u: goto L_0027CB70;
    case 79u: goto L_0027CB84;
    case 80u: goto L_0027CBB8;
    case 81u: goto L_0027CBC8;
    case 82u: goto L_0027CC08;
    case 83u: goto L_0027CC20;
    case 84u: goto L_0027CC34;
    case 85u: goto L_0027CC68;
    case 86u: goto L_0027CCA8;
    case 87u: goto L_0027CCC0;
    case 88u: goto L_0027CCDC;
    case 89u: goto L_0027CD08;
    case 90u: goto L_0027CD50;
    case 91u: goto L_0027CD6C;
    case 92u: goto L_0027CDAC;
    case 93u: goto L_0027CDD0;
    case 94u: goto L_0027CDE8;
    case 95u: goto L_0027CE4C;
    case 96u: goto L_0027CE5C;
    case 97u: goto L_0027CE6C;
    case 98u: goto L_0027CEB0;
    case 99u: goto L_0027CEB8;
    case 100u: goto L_0027CEFC;
    case 101u: goto L_0027CF20;
    case 102u: goto L_0027CF38;
    case 103u: goto L_0027CF78;
    case 104u: goto L_0027CFCC;
    case 105u: goto L_0027CFD4;
    case 106u: goto L_0027D028;
    case 107u: goto L_0027D040;
    case 108u: goto L_0027D058;
    case 109u: goto L_0027D0AC;
    case 110u: goto L_0027D0F4;
    case 111u: goto L_0027D0FC;
    case 112u: goto L_0027D108;
    case 113u: goto L_0027D150;
    case 114u: goto L_0027D158;
    case 115u: goto L_0027D1A0;
    case 116u: goto L_0027D1A8;
    case 117u: goto L_0027D1E8;
    case 118u: goto L_0027D200;
    case 119u: goto L_0027D220;
    case 120u: goto L_0027D240;
    case 121u: goto L_0027D258;
    case 122u: goto L_0027D284;
    case 123u: goto L_0027D298;
    case 124u: goto L_0027D2BC;
    case 125u: goto L_0027D2CC;
    case 126u: goto L_0027D2E0;
    case 127u: goto L_0027D2F0;
    case 128u: goto L_0027D304;
    case 129u: goto L_0027D318;
    case 130u: goto L_0027D338;
    case 131u: goto L_0027D348;
    case 132u: goto L_0027D360;
    case 133u: goto L_0027D390;
    case 134u: goto L_0027D3E0;
    case 135u: goto L_0027D400;
    case 136u: goto L_0027D418;
    case 137u: goto L_0027D434;
    case 138u: goto L_0027D444;
    case 139u: goto L_0027D474;
    case 140u: goto L_0027D4C4;
    case 141u: goto L_0027D4E0;
    case 142u: goto L_0027D4F8;
    case 143u: goto L_0027D514;
    case 144u: goto L_0027D524;
    case 145u: goto L_0027D534;
    case 146u: goto L_0027D564;
    case 147u: goto L_0027D5B4;
    case 148u: goto L_0027D5D0;
    case 149u: goto L_0027D5E8;
    case 150u: goto L_0027D604;
    case 151u: goto L_0027D614;
    case 152u: goto L_0027D624;
    case 153u: goto L_0027D654;
    case 154u: goto L_0027D6A4;
    case 155u: goto L_0027D6C0;
    case 156u: goto L_0027D6D8;
    case 157u: goto L_0027D6F4;
    case 158u: goto L_0027D704;
    case 159u: goto L_0027D714;
    case 160u: goto L_0027D724;
    case 161u: goto L_0027D754;
    case 162u: goto L_0027D7A4;
    case 163u: goto L_0027D7C0;
    case 164u: goto L_0027D7D8;
    case 165u: goto L_0027D7F4;
    case 166u: goto L_0027D804;
    case 167u: goto L_0027D814;
    case 168u: goto L_0027D844;
    case 169u: goto L_0027D894;
    case 170u: goto L_0027D8B0;
    case 171u: goto L_0027D8C4;
    case 172u: goto L_0027D8E0;
    case 173u: goto L_0027D910;
    case 174u: goto L_0027D960;
    case 175u: goto L_0027D980;
    case 176u: goto L_0027D994;
    case 177u: goto L_0027D9B0;
    case 178u: goto L_0027D9E4;
    case 179u: goto L_0027DA34;
    case 180u: goto L_0027DA50;
    case 181u: goto L_0027DA64;
    case 182u: goto L_0027DA84;
    case 183u: goto L_0027DAB8;
    case 184u: goto L_0027DB08;
    case 185u: goto L_0027DB20;
    case 186u: goto L_0027DB34;
    case 187u: goto L_0027DB54;
    case 188u: goto L_0027DB88;
    case 189u: goto L_0027DBD8;
    case 190u: goto L_0027DBF0;
    case 191u: goto L_0027DC04;
    case 192u: goto L_0027DC24;
    case 193u: goto L_0027DC58;
    case 194u: goto L_0027DCA8;
    case 195u: goto L_0027DCC0;
    case 196u: goto L_0027DCD4;
    case 197u: goto L_0027DCF4;
    case 198u: goto L_0027DD28;
    case 199u: goto L_0027DD78;
    case 200u: goto L_0027DD90;
    case 201u: goto L_0027DDA4;
    case 202u: goto L_0027DDC0;
    case 203u: goto L_0027DDF4;
    case 204u: goto L_0027DE44;
    case 205u: goto L_0027DE60;
    case 206u: goto L_0027DE74;
    case 207u: goto L_0027DE90;
    case 208u: goto L_0027DEC4;
    case 209u: goto L_0027DF14;
    case 210u: goto L_0027DF30;
    case 211u: goto L_0027DF48;
    case 212u: goto L_0027DF64;
    case 213u: goto L_0027DF74;
    case 214u: goto L_0027DF84;
    case 215u: goto L_0027DFB4;
    case 216u: goto L_0027E004;
    case 217u: goto L_0027E020;
    case 218u: goto L_0027E034;
    case 219u: goto L_0027E050;
    case 220u: goto L_0027E080;
    case 221u: goto L_0027E0D0;
    case 222u: goto L_0027E0F0;
    case 223u: goto L_0027E110;
    case 224u: goto L_0027E130;
    case 225u: goto L_0027E148;
    case 226u: goto L_0027E174;
    case 227u: goto L_0027E188;
    case 228u: goto L_0027E19C;
    case 229u: goto L_0027E1B0;
    case 230u: goto L_0027E1C0;
    case 231u: goto L_0027E1D4;
    case 232u: goto L_0027E1E8;
    case 233u: goto L_0027E208;
    case 234u: goto L_0027E218;
    case 235u: goto L_0027E230;
    case 236u: goto L_0027E260;
    case 237u: goto L_0027E2B0;
    case 238u: goto L_0027E2D0;
    case 239u: goto L_0027E2E4;
    case 240u: goto L_0027E300;
    case 241u: goto L_0027E330;
    case 242u: goto L_0027E380;
    case 243u: goto L_0027E3A0;
    case 244u: goto L_0027E3B4;
    case 245u: goto L_0027E3C8;
    case 246u: goto L_0027E408;
    case 247u: goto L_0027E420;
    case 248u: goto L_0027E43C;
    case 249u: goto L_0027E458;
    case 250u: goto L_0027E47C;
    case 251u: goto L_0027E484;
    case 252u: goto L_0027E4E8;
    case 253u: goto L_0027E500;
    case 254u: goto L_0027E518;
    case 255u: goto L_0027E558;
    case 256u: goto L_0027E580;
    case 257u: goto L_0027E59C;
    case 258u: goto L_0027E5B8;
    case 259u: goto L_0027E5D8;
    case 260u: goto L_0027E5E0;
    case 261u: goto L_0027E644;
    case 262u: goto L_0027E65C;
    case 263u: goto L_0027E674;
    case 264u: goto L_0027E6B4;
    case 265u: goto L_0027E6D0;
    case 266u: goto L_0027E6E8;
    case 267u: goto L_0027E710;
    case 268u: goto L_0027E76C;
    case 269u: goto L_0027E784;
    case 270u: goto L_0027E78C;
    case 271u: goto L_0027E7CC;
    case 272u: goto L_0027E7F0;
    case 273u: goto L_0027E820;
    case 274u: goto L_0027E838;
    case 275u: goto L_0027E850;
    case 276u: goto L_0027E860;
    case 277u: goto L_0027E890;
    case 278u: goto L_0027E8A8;
    case 279u: goto L_0027E8C0;
    case 280u: goto L_0027E8D0;
    case 281u: goto L_0027E900;
    case 282u: goto L_0027E918;
    case 283u: goto L_0027E930;
    case 284u: goto L_0027E940;
    case 285u: goto L_0027E970;
    case 286u: goto L_0027E988;
    case 287u: goto L_0027E9A0;
    case 288u: goto L_0027E9B0;
    case 289u: goto L_0027E9E0;
    case 290u: goto L_0027E9F8;
    case 291u: goto L_0027EA10;
    case 292u: goto L_0027EA20;
    case 293u: goto L_0027EA50;
    case 294u: goto L_0027EA68;
    case 295u: goto L_0027EA80;
    case 296u: goto L_0027EA90;
    case 297u: goto L_0027EAC0;
    case 298u: goto L_0027EAD8;
    case 299u: goto L_0027EAF0;
    case 300u: goto L_0027EB00;
    case 301u: goto L_0027EB30;
    case 302u: goto L_0027EB48;
    case 303u: goto L_0027EB60;
    case 304u: goto L_0027EB70;
    case 305u: goto L_0027EBA0;
    case 306u: goto L_0027EBB8;
    case 307u: goto L_0027EBD0;
    case 308u: goto L_0027EBE0;
    case 309u: goto L_0027EC10;
    case 310u: goto L_0027EC28;
    case 311u: goto L_0027EC40;
    case 312u: goto L_0027EC50;
    case 313u: goto L_0027EC80;
    case 314u: goto L_0027EC98;
    case 315u: goto L_0027ECB0;
    case 316u: goto L_0027ECC0;
    case 317u: goto L_0027ECF0;
    case 318u: goto L_0027ED08;
    case 319u: goto L_0027ED20;
    case 320u: goto L_0027ED30;
    case 321u: goto L_0027ED60;
    case 322u: goto L_0027ED78;
    case 323u: goto L_0027ED90;
    case 324u: goto L_0027EDA0;
    case 325u: goto L_0027EDD0;
    case 326u: goto L_0027EDE8;
    case 327u: goto L_0027EE00;
    case 328u: goto L_0027EE10;
    case 329u: goto L_0027EE40;
    case 330u: goto L_0027EE58;
    case 331u: goto L_0027EE70;
    case 332u: goto L_0027EE80;
    case 333u: goto L_0027EEB0;
    case 334u: goto L_0027EEC8;
    case 335u: goto L_0027EEE0;
    case 336u: goto L_0027EEF0;
    case 337u: goto L_0027EF20;
    case 338u: goto L_0027EF38;
    case 339u: goto L_0027EF50;
    case 340u: goto L_0027EF60;
    case 341u: goto L_0027EF90;
    case 342u: goto L_0027EFA8;
    case 343u: goto L_0027EFC0;
    case 344u: goto L_0027EFD0;
    case 345u: goto L_0027F000;
    case 346u: goto L_0027F018;
    case 347u: goto L_0027F030;
    case 348u: goto L_0027F040;
    case 349u: goto L_0027F070;
    case 350u: goto L_0027F088;
    case 351u: goto L_0027F0A0;
    case 352u: goto L_0027F0B0;
    case 353u: goto L_0027F0E0;
    case 354u: goto L_0027F0F8;
    case 355u: goto L_0027F110;
    case 356u: goto L_0027F120;
    case 357u: goto L_0027F150;
    case 358u: goto L_0027F168;
    case 359u: goto L_0027F180;
    case 360u: goto L_0027F190;
    case 361u: goto L_0027F1C0;
    case 362u: goto L_0027F1D8;
    case 363u: goto L_0027F1F0;
    case 364u: goto L_0027F200;
    case 365u: goto L_0027F230;
    case 366u: goto L_0027F248;
    case 367u: goto L_0027F260;
    case 368u: goto L_0027F270;
    case 369u: goto L_0027F2A0;
    case 370u: goto L_0027F2B8;
    case 371u: goto L_0027F2D0;
    case 372u: goto L_0027F2E0;
    case 373u: goto L_0027F310;
    case 374u: goto L_0027F328;
    case 375u: goto L_0027F340;
    case 376u: goto L_0027F350;
    case 377u: goto L_0027F380;
    case 378u: goto L_0027F398;
    case 379u: goto L_0027F3B0;
    case 380u: goto L_0027F3C0;
    case 381u: goto L_0027F3F0;
    case 382u: goto L_0027F408;
    case 383u: goto L_0027F420;
    case 384u: goto L_0027F430;
    case 385u: goto L_0027F460;
    case 386u: goto L_0027F478;
    case 387u: goto L_0027F490;
    case 388u: goto L_0027F4A0;
    case 389u: goto L_0027F4D0;
    case 390u: goto L_0027F4E8;
    case 391u: goto L_0027F500;
    case 392u: goto L_0027F510;
    case 393u: goto L_0027F540;
    case 394u: goto L_0027F558;
    case 395u: goto L_0027F570;
    case 396u: goto L_0027F580;
    case 397u: goto L_0027F5B0;
    case 398u: goto L_0027F5C8;
    case 399u: goto L_0027F5E0;
    case 400u: goto L_0027F5F0;
    case 401u: goto L_0027F620;
    case 402u: goto L_0027F638;
    case 403u: goto L_0027F650;
    case 404u: goto L_0027F660;
    case 405u: goto L_0027F690;
    case 406u: goto L_0027F6A8;
    case 407u: goto L_0027F6C0;
    case 408u: goto L_0027F6D0;
    case 409u: goto L_0027F700;
    case 410u: goto L_0027F718;
    case 411u: goto L_0027F730;
    case 412u: goto L_0027F740;
    case 413u: goto L_0027F770;
    case 414u: goto L_0027F788;
    case 415u: goto L_0027F7A0;
    case 416u: goto L_0027F7B0;
    case 417u: goto L_0027F7E0;
    case 418u: goto L_0027F7F8;
    case 419u: goto L_0027F810;
    case 420u: goto L_0027F820;
    case 421u: goto L_0027F850;
    case 422u: goto L_0027F868;
    case 423u: goto L_0027F880;
    case 424u: goto L_0027F890;
    case 425u: goto L_0027F8C0;
    case 426u: goto L_0027F8D8;
    case 427u: goto L_0027F8F0;
    case 428u: goto L_0027F900;
    case 429u: goto L_0027F930;
    case 430u: goto L_0027F948;
    case 431u: goto L_0027F960;
    case 432u: goto L_0027F970;
    case 433u: goto L_0027F9A0;
    case 434u: goto L_0027F9B8;
    case 435u: goto L_0027F9D0;
    case 436u: goto L_0027F9E0;
    case 437u: goto L_0027FA10;
    case 438u: goto L_0027FA28;
    case 439u: goto L_0027FA40;
    case 440u: goto L_0027FA50;
    case 441u: goto L_0027FA80;
    case 442u: goto L_0027FA98;
    case 443u: goto L_0027FAB0;
    case 444u: goto L_0027FAC0;
    case 445u: goto L_0027FAF0;
    case 446u: goto L_0027FB08;
    case 447u: goto L_0027FB20;
    case 448u: goto L_0027FB30;
    case 449u: goto L_0027FB60;
    case 450u: goto L_0027FB78;
    case 451u: goto L_0027FB90;
    case 452u: goto L_0027FBA0;
    case 453u: goto L_0027FBD0;
    case 454u: goto L_0027FBE8;
    case 455u: goto L_0027FC00;
    case 456u: goto L_0027FC10;
    case 457u: goto L_0027FC40;
    case 458u: goto L_0027FC58;
    case 459u: goto L_0027FC70;
    case 460u: goto L_0027FC80;
    case 461u: goto L_0027FCB0;
    case 462u: goto L_0027FCC8;
    case 463u: goto L_0027FCE0;
    case 464u: goto L_0027FCF0;
    case 465u: goto L_0027FD20;
    case 466u: goto L_0027FD38;
    case 467u: goto L_0027FD50;
    case 468u: goto L_0027FD60;
    case 469u: goto L_0027FD90;
    case 470u: goto L_0027FDA8;
    case 471u: goto L_0027FDC0;
    case 472u: goto L_0027FDD0;
    case 473u: goto L_0027FE00;
    case 474u: goto L_0027FE18;
    case 475u: goto L_0027FE30;
    case 476u: goto L_0027FE40;
    case 477u: goto L_0027FE70;
    case 478u: goto L_0027FE88;
    case 479u: goto L_0027FEA0;
    case 480u: goto L_0027FEB0;
    case 481u: goto L_0027FEE0;
    case 482u: goto L_0027FEF8;
    case 483u: goto L_0027FF10;
    case 484u: goto L_0027FF20;
    case 485u: goto L_0027FF50;
    case 486u: goto L_0027FF68;
    case 487u: goto L_0027FF80;
    case 488u: goto L_0027FF90;
    case 489u: goto L_0027FFC0;
    case 490u: goto L_0027FFD8;
    case 491u: goto L_0027FFF0;
    default: bad_entry(c, 0x0027C000u); return;
    }
L_0027C000:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027C018u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 107u, depth + 1u); else { c.pc = 0x00271B70u; return; } if (c.pc != 0x0027C018u) [[unlikely]] return; }
L_0027C018:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] - 320u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027C028u); st32((c.r[16].w[0] + 56u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_003D(c, 81u, depth + 1u); else { c.pc = 0x001F53D0u; return; } if (c.pc != 0x0027C028u) [[unlikely]] return; }
L_0027C028:
    set32(c.r[3], 0u + 35u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_0027C03C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0027C0E0; } }
L_0027C03C:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42700000u);
    c.f[12] = c.r[2].w[0];
    set32(c.r[2], ld32((c.r[3].w[0] + 20u)));
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027C058u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0058(c, 310u, depth + 1u); else { c.pc = 0x00263BE0u; return; } if (c.pc != 0x0027C058u) [[unlikely]] return; }
L_0027C058:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull; set32(c.r[4], 0u + 24u);  if (t) { goto L_0027C0DC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027C06Cu);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0027C06Cu) [[unlikely]] return; }
L_0027C06C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0027C0A8; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[4], c.r[4].w[0] + 6048u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 5088u);
    st32((c.r[2].w[0] + 16u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 12u), c.r[5].w[0]);
    st32((c.r[2].w[0]), 0u);
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 8u), 0u);
    st32((c.r[2].w[0] + 16u), c.r[3].w[0]);
    st32((c.r[2].w[0] + 20u), c.r[17].w[0]);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 13;
L_0027C0A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027C0B0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 98u, depth + 1u); else { c.pc = 0x00271A60u; return; } if (c.pc != 0x0027C0B0u) [[unlikely]] return; }
L_0027C0B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027C0B8u); set32(c.r[4], 0u + 24u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0027C0B8u) [[unlikely]] return; }
L_0027C0B8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0027C0D4; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027C0D0u); set32(c.r[6], 0u - 1u);  if (depth < kMaxDepth) unit_0064(c, 211u, depth + 1u); else { c.pc = 0x00292E10u; return; } if (c.pc != 0x0027C0D0u) [[unlikely]] return; }
L_0027C0D0:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0027C0D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027C0DCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 98u, depth + 1u); else { c.pc = 0x00271A60u; return; } if (c.pc != 0x0027C0DCu) [[unlikely]] return; }
L_0027C0DC:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0027C0E0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0027C100:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027C11Cu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_005C(c, 107u, depth + 1u); else { c.pc = 0x00271B70u; return; } if (c.pc != 0x0027C11Cu) [[unlikely]] return; }
L_0027C11C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] - 336u);
    st32((c.r[17].w[0] + 56u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43C80000u);
    set32(c.r[5], ld32((c.r[17].w[0] + 52u)));
    c.f[12] = c.r[2].w[0];
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20u)));
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027C148u); set32(c.r[16], c.r[17].w[0] + 8u);  if (depth < kMaxDepth) unit_0058(c, 310u, depth + 1u); else { c.pc = 0x00263BE0u; return; } if (c.pc != 0x0027C148u) [[unlikely]] return; }
L_0027C148:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull; set32(c.r[4], 0u + 24u);  if (t) { goto L_0027C1CC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027C15Cu);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0027C15Cu) [[unlikely]] return; }
L_0027C15C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0027C198; } }
    set32(c.r[5], ld32((c.r[17].w[0] + 4u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[4], c.r[4].w[0] + 6048u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 5088u);
    st32((c.r[2].w[0] + 16u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 12u), c.r[5].w[0]);
    st32((c.r[2].w[0]), 0u);
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 8u), 0u);
    st32((c.r[2].w[0] + 16u), c.r[3].w[0]);
    st32((c.r[2].w[0] + 20u), c.r[18].w[0]);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 13;
L_0027C198:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027C1A0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 98u, depth + 1u); else { c.pc = 0x00271A60u; return; } if (c.pc != 0x0027C1A0u) [[unlikely]] return; }
L_0027C1A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027C1A8u); set32(c.r[4], 0u + 24u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0027C1A8u) [[unlikely]] return; }
L_0027C1A8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0027C1C4; } }
    set32(c.r[6], ld32((c.r[16].w[0] + 44u)));
    set32(c.r[5], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027C1C0u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0064(c, 211u, depth + 1u); else { c.pc = 0x00292E10u; return; } if (c.pc != 0x0027C1C0u) [[unlikely]] return; }
L_0027C1C0:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0027C1C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027C1CCu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 98u, depth + 1u); else { c.pc = 0x00271A60u; return; } if (c.pc != 0x0027C1CCu) [[unlikely]] return; }
L_0027C1CC:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0027C1F0:
    set32(c.r[29], c.r[29].w[0] - 208u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027C20Cu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_005C(c, 107u, depth + 1u); else { c.pc = 0x00271B70u; return; } if (c.pc != 0x0027C20Cu) [[unlikely]] return; }
L_0027C20C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], 0u + 9735u);
    set32(c.r[3], c.r[3].w[0] - 352u);
    st32((c.r[18].w[0] + 56u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 52u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[5].sd[0] = static_cast<std::int32_t>(0x00420000u);  if (t) { goto L_0027C388; } }
    set32(c.r[2], 0u + 9736u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_0027C38C; } }
    set32(c.r[2], 0u + 5135u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[4], c.r[29].w[0] + 128u);  if (t) { goto L_0027C248; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_0027C520; } }
L_0027C248:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027C250u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_007F(c, 83u, depth + 1u); else { c.pc = 0x002FCCF0u; return; } if (c.pc != 0x0027C250u) [[unlikely]] return; }
L_0027C250:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027C258u); set32(c.r[4], 0u + 48u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0027C258u) [[unlikely]] return; }
L_0027C258:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0027C298; } }
    set32(c.r[5], ld32((c.r[18].w[0] + 4u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[4], c.r[4].w[0] + 6048u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 5056u);
    st32((c.r[2].w[0] + 16u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 12u), c.r[5].w[0]);
    st32((c.r[2].w[0]), 0u);
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 8u), 0u);
    st32((c.r[2].w[0] + 16u), c.r[3].w[0]);
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[3]);
    st128((c.r[2].w[0] + 32u) & ~15u, c.r[3]);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 14;
L_0027C298:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027C2A0u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 98u, depth + 1u); else { c.pc = 0x00271A60u; return; } if (c.pc != 0x0027C2A0u) [[unlikely]] return; }
L_0027C2A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027C2A8u); set32(c.r[4], 0u + 64u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0027C2A8u) [[unlikely]] return; }
L_0027C2A8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0027C314; } }
    set32(c.r[7], ld32((c.r[18].w[0] + 4u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[5], c.r[5].w[0] + 6048u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 5952u);
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[6], c.r[2].w[0] + 32u);
    set32(c.r[4], c.r[29].w[0] + 196u);
    st32((c.r[2].w[0] + 16u), c.r[5].w[0]);
    st32((c.r[2].w[0] + 12u), c.r[7].w[0]);
    st32((c.r[2].w[0]), 0u);
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 8u), 0u);
    st32((c.r[2].w[0] + 16u), c.r[3].w[0]);
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[3]);
    st128((c.r[2].w[0] + 32u) & ~15u, c.r[3]);
    set32(c.r[2], ld32((c.r[2].w[0] + 12u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20u)));
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027C304u); set32(c.r[5], c.r[2].w[0] + 224u);  if (depth < kMaxDepth) unit_005C(c, 29u, depth + 1u); else { c.pc = 0x002705F0u; return; } if (c.pc != 0x0027C304u) [[unlikely]] return; }
L_0027C304:
    c.r[3].d[0] = ld16((c.r[29].w[0] + 196u));
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st16((c.r[16].w[0] + 48u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
L_0027C314:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027C31Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 98u, depth + 1u); else { c.pc = 0x00271A60u; return; } if (c.pc != 0x0027C31Cu) [[unlikely]] return; }
L_0027C31C:
    set32(c.r[4], 0u + 24u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027C328u); st16((c.r[29].w[0] + 204u), static_cast<std::uint16_t>(0u));  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0027C328u) [[unlikely]] return; }
L_0027C328:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0027C378; } }
    set32(c.r[3], c.r[29].w[0] + 204u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0])));
    set32(c.r[6], c.r[29].w[0] + 192u);
    set32(c.r[4], c.r[4].w[0] + 6048u);
    st16((c.r[6].w[0]), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[5], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1760u);
    st32((c.r[2].w[0] + 16u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 12u), c.r[5].w[0]);
    st32((c.r[2].w[0]), 0u);
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 8u), 0u);
    st32((c.r[2].w[0] + 16u), c.r[3].w[0]);
    c.r[3].d[0] = ld16((c.r[29].w[0] + 192u));
    st16((c.r[2].w[0] + 20u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 18;
L_0027C378:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027C380u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 98u, depth + 1u); else { c.pc = 0x00271A60u; return; } if (c.pc != 0x0027C380u) [[unlikely]] return; }
L_0027C380:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0027C51C; } }
L_0027C388:
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0027C38C:
    set32(c.r[5], c.r[5].w[0] - 20288u);
    set32(c.r[4], c.r[29].w[0] + 64u);
    set32(c.r[3], 0u + 4u);
    c.budget -= 3;
L_0027C398:
    ld128((c.r[5].w[0]) & ~15u, c.r[2]);
    set32(c.r[3], c.r[3].w[0] - 1u);
    st128((c.r[4].w[0]) & ~15u, c.r[2]);
    set32(c.r[5], c.r[5].w[0] + 16u);
    set32(c.r[4], c.r[4].w[0] + 16u);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0027C398u | kUnwind; return; } goto L_0027C398; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027C3BCu); set32(c.r[4], c.r[29].w[0] + 168u);  if (depth < kMaxDepth) unit_0069(c, 345u, depth + 1u); else { c.pc = 0x002A76E0u; return; } if (c.pc != 0x0027C3BCu) [[unlikely]] return; }
L_0027C3BC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_0027C3EC; } }
L_0027C3C4:
    set32(c.r[3], c.r[2].w[0] + 168u);
    c.r[2].d[0] = ld8((c.r[3].w[0] + 2u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0027C3E8; } }
    c.r[2].d[0] = ld8((c.r[3].w[0] + 6u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0027C3E8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0027C3F8; } }
L_0027C3E8:
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.budget -= 1;
L_0027C3EC:
    c.r[2].d[0] = c.r[4].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[4].w[0] + c.r[29].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0027C3C4u | kUnwind; return; } goto L_0027C3C4; } }
L_0027C3F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027C400u); set32(c.r[4], 0u + 64u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0027C400u) [[unlikely]] return; }
L_0027C400:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0027C474; } }
    set32(c.r[8], ld32((c.r[18].w[0] + 4u)));
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[7], c.r[7].w[0] + 6048u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[17].w[0] << 4);
    set32(c.r[5], c.r[5].w[0] + 5952u);
    set32(c.r[3], c.r[3].w[0] + c.r[29].w[0]);
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[6], c.r[2].w[0] + 32u);
    set32(c.r[4], c.r[29].w[0] + 188u);
    st32((c.r[2].w[0] + 16u), c.r[7].w[0]);
    st32((c.r[2].w[0] + 12u), c.r[8].w[0]);
    st32((c.r[2].w[0]), 0u);
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 8u), 0u);
    st32((c.r[2].w[0] + 16u), c.r[5].w[0]);
    ld128((c.r[3].w[0] + 64u) & ~15u, c.r[3]);
    st128((c.r[2].w[0] + 32u) & ~15u, c.r[3]);
    set32(c.r[2], ld32((c.r[2].w[0] + 12u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20u)));
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 23;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027C464u); set32(c.r[5], c.r[2].w[0] + 224u);  if (depth < kMaxDepth) unit_005C(c, 29u, depth + 1u); else { c.pc = 0x002705F0u; return; } if (c.pc != 0x0027C464u) [[unlikely]] return; }
L_0027C464:
    c.r[3].d[0] = ld16((c.r[29].w[0] + 188u));
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st16((c.r[16].w[0] + 48u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
L_0027C474:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027C47Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 98u, depth + 1u); else { c.pc = 0x00271A60u; return; } if (c.pc != 0x0027C47Cu) [[unlikely]] return; }
L_0027C47C:
    c.r[1].d[0] = c.r[17].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; st16((c.r[29].w[0] + 200u), static_cast<std::uint16_t>(0u));  if (t) { goto L_0027C4A4; } }
    c.r[4].d[0] = ld8((c.r[29].w[0] + 201u));
    set32(c.r[2], 0u - 129u);
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(128ll);
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[29].w[0] + 201u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0027C4BC; } }
L_0027C4A4:
    c.r[4].d[0] = ld8((c.r[29].w[0] + 201u));
    set32(c.r[2], 0u - 65u);
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(64ll);
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[29].w[0] + 201u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 6;
L_0027C4BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027C4C4u); set32(c.r[4], 0u + 24u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0027C4C4u) [[unlikely]] return; }
L_0027C4C4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0027C514; } }
    set32(c.r[3], c.r[29].w[0] + 200u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0])));
    set32(c.r[6], c.r[29].w[0] + 184u);
    set32(c.r[4], c.r[4].w[0] + 6048u);
    st16((c.r[6].w[0]), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[5], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1728u);
    st32((c.r[2].w[0] + 16u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 12u), c.r[5].w[0]);
    st32((c.r[2].w[0]), 0u);
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 8u), 0u);
    st32((c.r[2].w[0] + 16u), c.r[3].w[0]);
    c.r[3].d[0] = ld16((c.r[29].w[0] + 184u));
    st16((c.r[2].w[0] + 20u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 18;
L_0027C514:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027C51Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 98u, depth + 1u); else { c.pc = 0x00271A60u; return; } if (c.pc != 0x0027C51Cu) [[unlikely]] return; }
L_0027C51C:
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_0027C520:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 208u);  c.pc = t; return; }
L_0027C540:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027C554u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 107u, depth + 1u); else { c.pc = 0x00271B70u; return; } if (c.pc != 0x0027C554u) [[unlikely]] return; }
L_0027C554:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] - 368u);
    st32((c.r[16].w[0] + 56u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20u)));
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.r[2].d[0] = ld64((c.r[3].w[0] + 704u));
    c.r[2].d[0] = c.r[2].d[0] & 128ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0027C588; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_0027C694; } }
L_0027C588:
    c.r[2].d[0] = ld8((c.r[3].w[0] + 370u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u + 20u);  if (t) { goto L_0027C5FC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[3], c.r[29].w[0] + 32u);
    set32(c.r[2], c.r[2].w[0] - 20224u);
    set32(c.r[4], 0u + 48u);
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027C5B0u); st128((c.r[3].w[0]) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0027C5B0u) [[unlikely]] return; }
L_0027C5B0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0027C5F0; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[4], c.r[4].w[0] + 6048u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 5056u);
    st32((c.r[2].w[0] + 16u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 12u), c.r[5].w[0]);
    st32((c.r[2].w[0]), 0u);
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 8u), 0u);
    st32((c.r[2].w[0] + 16u), c.r[3].w[0]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[3]);
    st128((c.r[2].w[0] + 32u) & ~15u, c.r[3]);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 14;
L_0027C5F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027C5F8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 98u, depth + 1u); else { c.pc = 0x00271A60u; return; } if (c.pc != 0x0027C5F8u) [[unlikely]] return; }
L_0027C5F8:
    set32(c.r[4], 0u + 20u);
    c.budget -= 1;
L_0027C5FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027C604u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0027C604u) [[unlikely]] return; }
L_0027C604:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0027C63C; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[4], c.r[4].w[0] + 6048u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 2176u);
    st32((c.r[2].w[0] + 16u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 12u), c.r[5].w[0]);
    st32((c.r[2].w[0]), 0u);
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 8u), 0u);
    st32((c.r[2].w[0] + 16u), c.r[3].w[0]);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 12;
L_0027C63C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027C644u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 98u, depth + 1u); else { c.pc = 0x00271A60u; return; } if (c.pc != 0x0027C644u) [[unlikely]] return; }
L_0027C644:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027C64Cu); set32(c.r[4], 0u + 20u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0027C64Cu) [[unlikely]] return; }
L_0027C64C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0027C684; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[4], c.r[4].w[0] + 6048u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 2144u);
    st32((c.r[2].w[0] + 16u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 12u), c.r[5].w[0]);
    st32((c.r[2].w[0]), 0u);
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 8u), 0u);
    st32((c.r[2].w[0] + 16u), c.r[3].w[0]);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 12;
L_0027C684:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027C68Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 98u, depth + 1u); else { c.pc = 0x00271A60u; return; } if (c.pc != 0x0027C68Cu) [[unlikely]] return; }
L_0027C68C:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 2;
L_0027C694:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0027C6A0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027C6BCu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_005C(c, 107u, depth + 1u); else { c.pc = 0x00271B70u; return; } if (c.pc != 0x0027C6BCu) [[unlikely]] return; }
L_0027C6BC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] - 384u);
    st32((c.r[17].w[0] + 56u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20u)));
    set32(c.r[16], ld32((c.r[2].w[0])));
    c.r[2].d[0] = ld64((c.r[16].w[0] + 704u));
    c.r[2].d[0] = c.r[2].d[0] & 128ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0027C6F0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_0027C864; } }
L_0027C6F0:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 370u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u + 20u);  if (t) { goto L_0027C78C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027C704u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0027C704u) [[unlikely]] return; }
L_0027C704:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0027C73C; } }
    set32(c.r[5], ld32((c.r[17].w[0] + 4u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[4], c.r[4].w[0] + 6048u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 4608u);
    st32((c.r[2].w[0] + 16u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 12u), c.r[5].w[0]);
    st32((c.r[2].w[0]), 0u);
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 8u), 0u);
    st32((c.r[2].w[0] + 16u), c.r[3].w[0]);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 12;
L_0027C73C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027C744u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 98u, depth + 1u); else { c.pc = 0x00271A60u; return; } if (c.pc != 0x0027C744u) [[unlikely]] return; }
L_0027C744:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027C74Cu); set32(c.r[4], 0u + 20u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0027C74Cu) [[unlikely]] return; }
L_0027C74C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0027C784; } }
    set32(c.r[5], ld32((c.r[17].w[0] + 4u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[4], c.r[4].w[0] + 6048u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 4544u);
    st32((c.r[2].w[0] + 16u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 12u), c.r[5].w[0]);
    st32((c.r[2].w[0]), 0u);
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 8u), 0u);
    st32((c.r[2].w[0] + 16u), c.r[3].w[0]);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 12;
L_0027C784:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027C78Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 98u, depth + 1u); else { c.pc = 0x00271A60u; return; } if (c.pc != 0x0027C78Cu) [[unlikely]] return; }
L_0027C78C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027C794u); c.r[4].d[0] = ld8((c.r[16].w[0] + 368u));  if (depth < kMaxDepth) unit_006F(c, 225u, depth + 1u); else { c.pc = 0x002BE5B0u; return; } if (c.pc != 0x0027C794u) [[unlikely]] return; }
L_0027C794:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027C7A0u); set32(c.r[4], 0u + 64u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0027C7A0u) [[unlikely]] return; }
L_0027C7A0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0027C80C; } }
    set32(c.r[7], ld32((c.r[17].w[0] + 4u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[5], c.r[5].w[0] + 6048u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 5952u);
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[6], c.r[2].w[0] + 32u);
    set32(c.r[4], c.r[29].w[0] + 76u);
    st32((c.r[2].w[0] + 16u), c.r[5].w[0]);
    st32((c.r[2].w[0] + 12u), c.r[7].w[0]);
    st32((c.r[2].w[0]), 0u);
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 8u), 0u);
    st32((c.r[2].w[0] + 16u), c.r[3].w[0]);
    ld128((c.r[18].w[0]) & ~15u, c.r[3]);
    st128((c.r[2].w[0] + 32u) & ~15u, c.r[3]);
    set32(c.r[2], ld32((c.r[2].w[0] + 12u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20u)));
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027C7FCu); set32(c.r[5], c.r[2].w[0] + 224u);  if (depth < kMaxDepth) unit_005C(c, 29u, depth + 1u); else { c.pc = 0x002705F0u; return; } if (c.pc != 0x0027C7FCu) [[unlikely]] return; }
L_0027C7FC:
    c.r[3].d[0] = ld16((c.r[29].w[0] + 76u));
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st16((c.r[16].w[0] + 48u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
L_0027C80C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027C814u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 98u, depth + 1u); else { c.pc = 0x00271A60u; return; } if (c.pc != 0x0027C814u) [[unlikely]] return; }
L_0027C814:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027C81Cu); set32(c.r[4], 0u + 20u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0027C81Cu) [[unlikely]] return; }
L_0027C81C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0027C854; } }
    set32(c.r[5], ld32((c.r[17].w[0] + 4u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[4], c.r[4].w[0] + 6048u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 2176u);
    st32((c.r[2].w[0] + 16u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 12u), c.r[5].w[0]);
    st32((c.r[2].w[0]), 0u);
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 8u), 0u);
    st32((c.r[2].w[0] + 16u), c.r[3].w[0]);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 12;
L_0027C854:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027C85Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 98u, depth + 1u); else { c.pc = 0x00271A60u; return; } if (c.pc != 0x0027C85Cu) [[unlikely]] return; }
L_0027C85C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 2;
L_0027C864:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0027C880:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027C894u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 107u, depth + 1u); else { c.pc = 0x00271B70u; return; } if (c.pc != 0x0027C894u) [[unlikely]] return; }
L_0027C894:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] - 400u);
    st32((c.r[16].w[0] + 56u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20u)));
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.r[2].d[0] = ld64((c.r[2].w[0] + 704u));
    c.r[2].d[0] = c.r[2].d[0] & 128ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], 0u + 20u);  if (t) { goto L_0027C8C8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0027C95C; } }
L_0027C8C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027C8D0u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0027C8D0u) [[unlikely]] return; }
L_0027C8D0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0027C908; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[4], c.r[4].w[0] + 6048u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 2272u);
    st32((c.r[2].w[0] + 16u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 12u), c.r[5].w[0]);
    st32((c.r[2].w[0]), 0u);
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 8u), 0u);
    st32((c.r[2].w[0] + 16u), c.r[3].w[0]);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 12;
L_0027C908:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027C910u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 98u, depth + 1u); else { c.pc = 0x00271A60u; return; } if (c.pc != 0x0027C910u) [[unlikely]] return; }
L_0027C910:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027C918u); set32(c.r[4], 0u + 20u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0027C918u) [[unlikely]] return; }
L_0027C918:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0027C950; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[4], c.r[4].w[0] + 6048u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 2144u);
    st32((c.r[2].w[0] + 16u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 12u), c.r[5].w[0]);
    st32((c.r[2].w[0]), 0u);
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 8u), 0u);
    st32((c.r[2].w[0] + 16u), c.r[3].w[0]);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 12;
L_0027C950:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027C958u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 98u, depth + 1u); else { c.pc = 0x00271A60u; return; } if (c.pc != 0x0027C958u) [[unlikely]] return; }
L_0027C958:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0027C95C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0027C970:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027C984u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 107u, depth + 1u); else { c.pc = 0x00271B70u; return; } if (c.pc != 0x0027C984u) [[unlikely]] return; }
L_0027C984:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[4], 0u + 20u);
    set32(c.r[2], c.r[2].w[0] - 416u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027C998u); st32((c.r[16].w[0] + 56u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0027C998u) [[unlikely]] return; }
L_0027C998:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0027C9D0; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[4], c.r[4].w[0] + 6048u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 2144u);
    st32((c.r[2].w[0] + 16u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 12u), c.r[5].w[0]);
    st32((c.r[2].w[0]), 0u);
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 8u), 0u);
    st32((c.r[2].w[0] + 16u), c.r[3].w[0]);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 12;
L_0027C9D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027C9D8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 98u, depth + 1u); else { c.pc = 0x00271A60u; return; } if (c.pc != 0x0027C9D8u) [[unlikely]] return; }
L_0027C9D8:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0027C9F0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027CA04u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 107u, depth + 1u); else { c.pc = 0x00271B70u; return; } if (c.pc != 0x0027CA04u) [[unlikely]] return; }
L_0027CA04:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[4], 0u + 20u);
    set32(c.r[2], c.r[2].w[0] - 432u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027CA18u); st32((c.r[16].w[0] + 56u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0027CA18u) [[unlikely]] return; }
L_0027CA18:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0027CA50; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[4], c.r[4].w[0] + 6048u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 2112u);
    st32((c.r[2].w[0] + 16u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 12u), c.r[5].w[0]);
    st32((c.r[2].w[0]), 0u);
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 8u), 0u);
    st32((c.r[2].w[0] + 16u), c.r[3].w[0]);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 12;
L_0027CA50:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027CA58u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 98u, depth + 1u); else { c.pc = 0x00271A60u; return; } if (c.pc != 0x0027CA58u) [[unlikely]] return; }
L_0027CA58:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0027CA70:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027CA84u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 107u, depth + 1u); else { c.pc = 0x00271B70u; return; } if (c.pc != 0x0027CA84u) [[unlikely]] return; }
L_0027CA84:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[4], 0u + 20u);
    set32(c.r[2], c.r[2].w[0] - 448u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027CA98u); st32((c.r[16].w[0] + 56u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0027CA98u) [[unlikely]] return; }
L_0027CA98:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0027CAD0; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[4], c.r[4].w[0] + 6048u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 2080u);
    st32((c.r[2].w[0] + 16u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 12u), c.r[5].w[0]);
    st32((c.r[2].w[0]), 0u);
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 8u), 0u);
    st32((c.r[2].w[0] + 16u), c.r[3].w[0]);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 12;
L_0027CAD0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027CAD8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 98u, depth + 1u); else { c.pc = 0x00271A60u; return; } if (c.pc != 0x0027CAD8u) [[unlikely]] return; }
L_0027CAD8:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0027CAF0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027CB04u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 107u, depth + 1u); else { c.pc = 0x00271B70u; return; } if (c.pc != 0x0027CB04u) [[unlikely]] return; }
L_0027CB04:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[4], 0u + 20u);
    set32(c.r[2], c.r[2].w[0] - 464u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027CB18u); st32((c.r[16].w[0] + 56u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0027CB18u) [[unlikely]] return; }
L_0027CB18:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0027CB50; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[4], c.r[4].w[0] + 6048u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 2016u);
    st32((c.r[2].w[0] + 16u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 12u), c.r[5].w[0]);
    st32((c.r[2].w[0]), 0u);
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 8u), 0u);
    st32((c.r[2].w[0] + 16u), c.r[3].w[0]);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 12;
L_0027CB50:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027CB58u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 98u, depth + 1u); else { c.pc = 0x00271A60u; return; } if (c.pc != 0x0027CB58u) [[unlikely]] return; }
L_0027CB58:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0027CB70:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027CB84u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 107u, depth + 1u); else { c.pc = 0x00271B70u; return; } if (c.pc != 0x0027CB84u) [[unlikely]] return; }
L_0027CB84:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] - 480u);
    st32((c.r[16].w[0] + 56u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20u)));
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.r[2].d[0] = ld64((c.r[4].w[0] + 704u));
    c.r[2].d[0] = c.r[2].d[0] & 128ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0027CBC0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027CBB8u);  if (depth < kMaxDepth) unit_0059(c, 72u, depth + 1u); else { c.pc = 0x00265040u; return; } if (c.pc != 0x0027CBB8u) [[unlikely]] return; }
L_0027CBB8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0027CC08; } }
L_0027CBC0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027CBC8u); set32(c.r[4], 0u + 20u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0027CBC8u) [[unlikely]] return; }
L_0027CBC8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0027CC00; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[4], c.r[4].w[0] + 6048u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 2272u);
    st32((c.r[2].w[0] + 16u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 12u), c.r[5].w[0]);
    st32((c.r[2].w[0]), 0u);
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 8u), 0u);
    st32((c.r[2].w[0] + 16u), c.r[3].w[0]);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 12;
L_0027CC00:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027CC08u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 98u, depth + 1u); else { c.pc = 0x00271A60u; return; } if (c.pc != 0x0027CC08u) [[unlikely]] return; }
L_0027CC08:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0027CC20:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027CC34u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 107u, depth + 1u); else { c.pc = 0x00271B70u; return; } if (c.pc != 0x0027CC34u) [[unlikely]] return; }
L_0027CC34:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] - 496u);
    st32((c.r[16].w[0] + 56u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20u)));
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.r[2].d[0] = ld64((c.r[2].w[0] + 704u));
    c.r[2].d[0] = c.r[2].d[0] & 128ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0027CCAC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027CC68u); set32(c.r[4], 0u + 20u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0027CC68u) [[unlikely]] return; }
L_0027CC68:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0027CCA0; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[4], c.r[4].w[0] + 6048u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 2240u);
    st32((c.r[2].w[0] + 16u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 12u), c.r[5].w[0]);
    st32((c.r[2].w[0]), 0u);
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 8u), 0u);
    st32((c.r[2].w[0] + 16u), c.r[3].w[0]);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 12;
L_0027CCA0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027CCA8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 98u, depth + 1u); else { c.pc = 0x00271A60u; return; } if (c.pc != 0x0027CCA8u) [[unlikely]] return; }
L_0027CCA8:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0027CCAC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0027CCC0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027CCDCu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 107u, depth + 1u); else { c.pc = 0x00271B70u; return; } if (c.pc != 0x0027CCDCu) [[unlikely]] return; }
L_0027CCDC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] - 512u);
    st32((c.r[16].w[0] + 56u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20u)));
    set32(c.r[17], ld32((c.r[2].w[0])));
    c.r[2].d[0] = ld8((c.r[17].w[0] + 370u));
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[18], c.r[16].w[0] + 8u);  if (t) { goto L_0027CD50; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027CD08u); set32(c.r[4], 0u + 24u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0027CD08u) [[unlikely]] return; }
L_0027CD08:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0027CD48; } }
    set32(c.r[5], ld32((c.r[18].w[0] + 44u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[6], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[4], c.r[4].w[0] + 6048u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 4192u);
    st32((c.r[2].w[0] + 16u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 12u), c.r[6].w[0]);
    st32((c.r[2].w[0]), 0u);
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 8u), 0u);
    st32((c.r[2].w[0] + 16u), c.r[3].w[0]);
    st32((c.r[2].w[0] + 20u), c.r[5].w[0]);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 14;
L_0027CD48:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027CD50u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 98u, depth + 1u); else { c.pc = 0x00271A60u; return; } if (c.pc != 0x0027CD50u) [[unlikely]] return; }
L_0027CD50:
    c.r[2].d[0] = ld64((c.r[17].w[0] + 704u));
    c.r[2].d[0] = c.r[2].d[0] & 128ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0027CDB0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027CD6Cu); set32(c.r[4], 0u + 20u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0027CD6Cu) [[unlikely]] return; }
L_0027CD6C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0027CDA4; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[4], c.r[4].w[0] + 6048u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 2208u);
    st32((c.r[2].w[0] + 16u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 12u), c.r[5].w[0]);
    st32((c.r[2].w[0]), 0u);
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 8u), 0u);
    st32((c.r[2].w[0] + 16u), c.r[3].w[0]);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 12;
L_0027CDA4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027CDACu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 98u, depth + 1u); else { c.pc = 0x00271A60u; return; } if (c.pc != 0x0027CDACu) [[unlikely]] return; }
L_0027CDAC:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0027CDB0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0027CDD0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027CDE8u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_005C(c, 107u, depth + 1u); else { c.pc = 0x00271B70u; return; } if (c.pc != 0x0027CDE8u) [[unlikely]] return; }
L_0027CDE8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[16], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] - 528u);
    set32(c.r[3], 0u + 3u);
    st32((c.r[17].w[0] + 56u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20u)));
    set32(c.r[5], ld32((c.r[2].w[0])));
    set32(c.r[4], ld32((c.r[5].w[0] + 624u)));
    c.r[2].d[0] = ld8((c.r[5].w[0] + 370u));
    c.budget -= 12;
    { const bool t = c.r[2].d[0] != 0ull; if (c.r[4].d[0] != 0) c.r[16].d[0] = c.r[3].d[0];  if (t) { goto L_0027CEFC; } }
    c.r[2].d[0] = ld64((c.r[5].w[0] + 704u));
    c.r[2].d[0] = c.r[2].d[0] & 128ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0027CF00; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], c.r[2].w[0] + 31224u);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0027CEFC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027CE4Cu);  if (depth < kMaxDepth) unit_0035(c, 43u, depth + 1u); else { c.pc = 0x001D5040u; return; } if (c.pc != 0x0027CE4Cu) [[unlikely]] return; }
L_0027CE4C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0027CEFC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027CE5Cu);  if (depth < kMaxDepth) unit_0035(c, 45u, depth + 1u); else { c.pc = 0x001D50B0u; return; } if (c.pc != 0x0027CE5Cu) [[unlikely]] return; }
L_0027CE5C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], 0u + 24u);  if (t) { goto L_0027CEFC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027CE6Cu);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0027CE6Cu) [[unlikely]] return; }
L_0027CE6C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0027CEA8; } }
    set32(c.r[5], ld32((c.r[17].w[0] + 4u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[4], c.r[4].w[0] + 6048u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 5984u);
    st32((c.r[2].w[0] + 16u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 12u), c.r[5].w[0]);
    st32((c.r[2].w[0]), 0u);
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 8u), 0u);
    st32((c.r[2].w[0] + 16u), c.r[3].w[0]);
    st32((c.r[2].w[0] + 20u), c.r[16].w[0]);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 13;
L_0027CEA8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027CEB0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 98u, depth + 1u); else { c.pc = 0x00271A60u; return; } if (c.pc != 0x0027CEB0u) [[unlikely]] return; }
L_0027CEB0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027CEB8u); set32(c.r[4], 0u + 24u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0027CEB8u) [[unlikely]] return; }
L_0027CEB8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0027CEF4; } }
    set32(c.r[5], ld32((c.r[17].w[0] + 4u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[4], c.r[4].w[0] + 6048u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 5696u);
    st32((c.r[2].w[0] + 16u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 12u), c.r[5].w[0]);
    st32((c.r[2].w[0]), 0u);
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 8u), 0u);
    st32((c.r[2].w[0] + 16u), c.r[3].w[0]);
    st32((c.r[2].w[0] + 20u), c.r[16].w[0]);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 13;
L_0027CEF4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027CEFCu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 98u, depth + 1u); else { c.pc = 0x00271A60u; return; } if (c.pc != 0x0027CEFCu) [[unlikely]] return; }
L_0027CEFC:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0027CF00:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0027CF20:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027CF38u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_005C(c, 107u, depth + 1u); else { c.pc = 0x00271B70u; return; } if (c.pc != 0x0027CF38u) [[unlikely]] return; }
L_0027CF38:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] - 544u);
    st32((c.r[17].w[0] + 56u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20u)));
    set32(c.r[16], ld32((c.r[2].w[0])));
    c.r[2].d[0] = ld8((c.r[16].w[0] + 370u));
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0027D02C; } }
    c.r[2].d[0] = ld64((c.r[16].w[0] + 704u));
    c.r[2].d[0] = c.r[2].d[0] & 128ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u + 24u);  if (t) { goto L_0027D028; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027CF78u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0027CF78u) [[unlikely]] return; }
L_0027CF78:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0027CFC4; } }
    set32(c.r[6], ld32((c.r[16].w[0] + 624u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[7], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[4], c.r[4].w[0] + 6048u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[8], 0u + 1u);
    set32(c.r[5], 0u + 3u);
    set32(c.r[3], c.r[3].w[0] + 5760u);
    if (c.r[6].d[0] != 0) c.r[8].d[0] = c.r[5].d[0];
    st32((c.r[2].w[0] + 16u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 12u), c.r[7].w[0]);
    st32((c.r[2].w[0]), 0u);
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 8u), 0u);
    st32((c.r[2].w[0] + 16u), c.r[3].w[0]);
    st32((c.r[2].w[0] + 20u), c.r[8].w[0]);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 17;
L_0027CFC4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027CFCCu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 98u, depth + 1u); else { c.pc = 0x00271A60u; return; } if (c.pc != 0x0027CFCCu) [[unlikely]] return; }
L_0027CFCC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027CFD4u); set32(c.r[4], 0u + 24u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0027CFD4u) [[unlikely]] return; }
L_0027CFD4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0027D020; } }
    set32(c.r[6], ld32((c.r[16].w[0] + 624u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[7], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[4], c.r[4].w[0] + 6048u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[8], 0u + 1u);
    set32(c.r[5], 0u + 3u);
    set32(c.r[3], c.r[3].w[0] + 5664u);
    if (c.r[6].d[0] != 0) c.r[8].d[0] = c.r[5].d[0];
    st32((c.r[2].w[0] + 16u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 12u), c.r[7].w[0]);
    st32((c.r[2].w[0]), 0u);
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 8u), 0u);
    st32((c.r[2].w[0] + 16u), c.r[3].w[0]);
    st32((c.r[2].w[0] + 20u), c.r[8].w[0]);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 17;
L_0027D020:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027D028u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 98u, depth + 1u); else { c.pc = 0x00271A60u; return; } if (c.pc != 0x0027D028u) [[unlikely]] return; }
L_0027D028:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0027D02C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0027D040:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027D058u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_005C(c, 107u, depth + 1u); else { c.pc = 0x00271B70u; return; } if (c.pc != 0x0027D058u) [[unlikely]] return; }
L_0027D058:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], c.r[2].w[0] - 560u);
    set32(c.r[3], c.r[3].w[0] + 31232u);
    st32((c.r[17].w[0] + 56u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 52u)));
    set32(c.r[2], 0u + 1u);
    set32(c.r[5], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    set32(c.r[5], ld32((c.r[5].w[0] + 20u)));
    c.budget -= 13;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[16], c.r[17].w[0] + 8u);  if (t) { goto L_0027D094; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0027D1EC; } }
L_0027D094:
    set32(c.r[2], ld32((c.r[5].w[0])));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 370u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], 0u + 24u);  if (t) { goto L_0027D0F4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027D0ACu);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0027D0ACu) [[unlikely]] return; }
L_0027D0AC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0027D0EC; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 44u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[6], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[4], c.r[4].w[0] + 6048u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 4224u);
    st32((c.r[2].w[0] + 16u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 12u), c.r[6].w[0]);
    st32((c.r[2].w[0]), 0u);
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 8u), 0u);
    st32((c.r[2].w[0] + 16u), c.r[3].w[0]);
    st32((c.r[2].w[0] + 20u), c.r[5].w[0]);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 14;
L_0027D0EC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027D0F4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 98u, depth + 1u); else { c.pc = 0x00271A60u; return; } if (c.pc != 0x0027D0F4u) [[unlikely]] return; }
L_0027D0F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027D0FCu); set32(c.r[4], ld32((c.r[16].w[0] + 44u)));  if (depth < kMaxDepth) unit_006F(c, 220u, depth + 1u); else { c.pc = 0x002BE510u; return; } if (c.pc != 0x0027D0FCu) [[unlikely]] return; }
L_0027D0FC:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027D108u); set32(c.r[4], 0u + 48u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0027D108u) [[unlikely]] return; }
L_0027D108:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0027D148; } }
    set32(c.r[5], ld32((c.r[17].w[0] + 4u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[4], c.r[4].w[0] + 6048u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 5056u);
    st32((c.r[2].w[0] + 16u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 12u), c.r[5].w[0]);
    st32((c.r[2].w[0]), 0u);
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 8u), 0u);
    st32((c.r[2].w[0] + 16u), c.r[3].w[0]);
    ld128((c.r[16].w[0]) & ~15u, c.r[3]);
    st128((c.r[2].w[0] + 32u) & ~15u, c.r[3]);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 14;
L_0027D148:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027D150u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 98u, depth + 1u); else { c.pc = 0x00271A60u; return; } if (c.pc != 0x0027D150u) [[unlikely]] return; }
L_0027D150:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027D158u); set32(c.r[4], 0u + 24u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0027D158u) [[unlikely]] return; }
L_0027D158:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0027D198; } }
    set32(c.r[6], ld32((c.r[17].w[0] + 4u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[5], c.r[5].w[0] + 6048u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[4], c.r[4].w[0] + 2336u);
    set32(c.r[3], 0u - 1u);
    st32((c.r[2].w[0] + 16u), c.r[5].w[0]);
    st32((c.r[2].w[0] + 12u), c.r[6].w[0]);
    st32((c.r[2].w[0]), 0u);
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 8u), 0u);
    st32((c.r[2].w[0] + 16u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 20u), c.r[3].w[0]);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 14;
L_0027D198:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027D1A0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 98u, depth + 1u); else { c.pc = 0x00271A60u; return; } if (c.pc != 0x0027D1A0u) [[unlikely]] return; }
L_0027D1A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027D1A8u); set32(c.r[4], 0u + 20u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0027D1A8u) [[unlikely]] return; }
L_0027D1A8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0027D1E0; } }
    set32(c.r[5], ld32((c.r[17].w[0] + 4u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[4], c.r[4].w[0] + 6048u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 2304u);
    st32((c.r[2].w[0] + 16u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 12u), c.r[5].w[0]);
    st32((c.r[2].w[0]), 0u);
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 8u), 0u);
    st32((c.r[2].w[0] + 16u), c.r[3].w[0]);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 12;
L_0027D1E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027D1E8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 98u, depth + 1u); else { c.pc = 0x00271A60u; return; } if (c.pc != 0x0027D1E8u) [[unlikely]] return; }
L_0027D1E8:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0027D1EC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0027D200:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027D220u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_005C(c, 107u, depth + 1u); else { c.pc = 0x00271B70u; return; } if (c.pc != 0x0027D220u) [[unlikely]] return; }
L_0027D220:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] - 576u);
    st32((c.r[19].w[0] + 56u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[17], ld32((c.r[2].w[0] + 20u)));
    set32(c.r[16], ld32((c.r[17].w[0])));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027D240u); c.r[18].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x0027D240u) [[unlikely]] return; }
L_0027D240:
    c.r[3].d[0] = ld8((c.r[2].w[0]));
    set32(c.r[2], 0u + 22u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0027D27C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027D258u);  if (depth < kMaxDepth) unit_0070(c, 13u, depth + 1u); else { c.pc = 0x002C02E0u; return; } if (c.pc != 0x0027D258u) [[unlikely]] return; }
L_0027D258:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_0027D34C; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 912u)));
    set32(c.r[3], ld32((c.r[18].w[0] + 912u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0027D34C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_0027D34C; } }
L_0027D27C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027D284u);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x0027D284u) [[unlikely]] return; }
L_0027D284:
    c.r[2].d[0] = ld8((c.r[2].w[0] + 9u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0027D2E8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027D298u);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x0027D298u) [[unlikely]] return; }
L_0027D298:
    c.r[2].d[0] = ld8((c.r[2].w[0] + 1u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0027D2D0; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 464u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0027D2C4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027D2BCu);  if (depth < kMaxDepth) unit_0070(c, 196u, depth + 1u); else { c.pc = 0x002C35E0u; return; } if (c.pc != 0x0027D2BCu) [[unlikely]] return; }
L_0027D2BC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0027D2D0; } }
L_0027D2C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027D2CCu); set32(c.r[4], ld32((c.r[17].w[0])));  if (depth < kMaxDepth) unit_006F(c, 264u, depth + 1u); else { c.pc = 0x002BF670u; return; } if (c.pc != 0x0027D2CCu) [[unlikely]] return; }
L_0027D2CC:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0027D2D0:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != 0ull;  if (t) { goto L_0027D34C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027D2E0u); set32(c.r[4], ld32((c.r[17].w[0])));  if (depth < kMaxDepth) unit_006F(c, 292u, depth + 1u); else { c.pc = 0x002BFF20u; return; } if (c.pc != 0x0027D2E0u) [[unlikely]] return; }
L_0027D2E0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0027D34C; } }
L_0027D2E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027D2F0u);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x0027D2F0u) [[unlikely]] return; }
L_0027D2F0:
    c.r[2].d[0] = ld8((c.r[2].w[0] + 19u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0027D320; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027D304u); set32(c.r[4], ld32((c.r[17].w[0])));  if (depth < kMaxDepth) unit_006F(c, 285u, depth + 1u); else { c.pc = 0x002BFCC0u; return; } if (c.pc != 0x0027D304u) [[unlikely]] return; }
L_0027D304:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[18].d[0] != 0ull;  if (t) { goto L_0027D34C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027D318u); set32(c.r[4], ld32((c.r[17].w[0])));  if (depth < kMaxDepth) unit_006F(c, 282u, depth + 1u); else { c.pc = 0x002BFBF0u; return; } if (c.pc != 0x0027D318u) [[unlikely]] return; }
L_0027D318:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0027D34C; } }
L_0027D320:
    set32(c.r[3], ld32((c.r[16].w[0] + 464u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0027D340; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027D338u);  if (depth < kMaxDepth) unit_0070(c, 196u, depth + 1u); else { c.pc = 0x002C35E0u; return; } if (c.pc != 0x0027D338u) [[unlikely]] return; }
L_0027D338:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0027D34C; } }
L_0027D340:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027D348u); set32(c.r[4], ld32((c.r[17].w[0])));  if (depth < kMaxDepth) unit_006F(c, 264u, depth + 1u); else { c.pc = 0x002BF670u; return; } if (c.pc != 0x0027D348u) [[unlikely]] return; }
L_0027D348:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0027D34C:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != 0ull;  if (t) { goto L_0027D364; } }
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027D360u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006F(c, 270u, depth + 1u); else { c.pc = 0x002BF850u; return; } if (c.pc != 0x0027D360u) [[unlikely]] return; }
L_0027D360:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0027D364:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_0027D378; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 912u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 64u), c.r[2].w[0]);  if (t) { goto L_0027D37C; } }
L_0027D378:
    st32((c.r[19].w[0] + 64u), c.r[2].w[0]);
    c.budget -= 1;
L_0027D37C:
    set32(c.r[2], ld32((c.r[19].w[0] + 64u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] < 0; c.r[2].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_0027D3E4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027D390u); set32(c.r[4], 0u + 24u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0027D390u) [[unlikely]] return; }
L_0027D390:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0027D3D8; } }
    set32(c.r[6], ld32((c.r[19].w[0] + 64u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[7], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[5], c.r[5].w[0] + 6048u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], 0u + 30u);
    set32(c.r[4], c.r[4].w[0] + 1856u);
    st32((c.r[2].w[0] + 16u), c.r[5].w[0]);
    st32((c.r[2].w[0] + 12u), c.r[7].w[0]);
    st32((c.r[2].w[0]), 0u);
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 8u), 0u);
    st32((c.r[2].w[0] + 16u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 20u), c.r[6].w[0]);
    st32((c.r[2].w[0] + 8u), c.r[3].w[0]);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 16;
L_0027D3D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027D3E0u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 98u, depth + 1u); else { c.pc = 0x00271A60u; return; } if (c.pc != 0x0027D3E0u) [[unlikely]] return; }
L_0027D3E0:
    c.r[2].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_0027D3E4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0027D400:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027D418u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 107u, depth + 1u); else { c.pc = 0x00271B70u; return; } if (c.pc != 0x0027D418u) [[unlikely]] return; }
L_0027D418:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] - 592u);
    st32((c.r[16].w[0] + 56u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[17], ld32((c.r[2].w[0] + 20u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027D434u); set32(c.r[4], ld32((c.r[17].w[0])));  if (depth < kMaxDepth) unit_0070(c, 18u, depth + 1u); else { c.pc = 0x002C0400u; return; } if (c.pc != 0x0027D434u) [[unlikely]] return; }
L_0027D434:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0027D444; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027D444u); set32(c.r[4], ld32((c.r[17].w[0])));  if (depth < kMaxDepth) unit_006F(c, 279u, depth + 1u); else { c.pc = 0x002BFAD0u; return; } if (c.pc != 0x0027D444u) [[unlikely]] return; }
L_0027D444:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0027D458; } }
    set32(c.r[2], ld32((c.r[2].w[0] + 912u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 64u), c.r[2].w[0]);  if (t) { goto L_0027D460; } }
L_0027D458:
    set32(c.r[2], 0u - 1u);
    st32((c.r[16].w[0] + 64u), c.r[2].w[0]);
    c.budget -= 2;
L_0027D460:
    set32(c.r[2], ld32((c.r[16].w[0] + 64u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] < 0; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0027D4C8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027D474u); set32(c.r[4], 0u + 24u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0027D474u) [[unlikely]] return; }
L_0027D474:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0027D4BC; } }
    set32(c.r[6], ld32((c.r[16].w[0] + 64u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[7], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[5], c.r[5].w[0] + 6048u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], 0u + 30u);
    set32(c.r[4], c.r[4].w[0] + 1856u);
    st32((c.r[2].w[0] + 16u), c.r[5].w[0]);
    st32((c.r[2].w[0] + 12u), c.r[7].w[0]);
    st32((c.r[2].w[0]), 0u);
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 8u), 0u);
    st32((c.r[2].w[0] + 16u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 20u), c.r[6].w[0]);
    st32((c.r[2].w[0] + 8u), c.r[3].w[0]);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 16;
L_0027D4BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027D4C4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 98u, depth + 1u); else { c.pc = 0x00271A60u; return; } if (c.pc != 0x0027D4C4u) [[unlikely]] return; }
L_0027D4C4:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0027D4C8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0027D4E0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027D4F8u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 107u, depth + 1u); else { c.pc = 0x00271B70u; return; } if (c.pc != 0x0027D4F8u) [[unlikely]] return; }
L_0027D4F8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] - 608u);
    st32((c.r[16].w[0] + 56u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[17], ld32((c.r[2].w[0] + 20u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027D514u); set32(c.r[4], ld32((c.r[17].w[0])));  if (depth < kMaxDepth) unit_0070(c, 53u, depth + 1u); else { c.pc = 0x002C1020u; return; } if (c.pc != 0x0027D514u) [[unlikely]] return; }
L_0027D514:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0027D534; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027D524u); set32(c.r[4], ld32((c.r[17].w[0])));  if (depth < kMaxDepth) unit_0070(c, 18u, depth + 1u); else { c.pc = 0x002C0400u; return; } if (c.pc != 0x0027D524u) [[unlikely]] return; }
L_0027D524:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0027D534; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027D534u); set32(c.r[4], ld32((c.r[17].w[0])));  if (depth < kMaxDepth) unit_006F(c, 279u, depth + 1u); else { c.pc = 0x002BFAD0u; return; } if (c.pc != 0x0027D534u) [[unlikely]] return; }
L_0027D534:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0027D548; } }
    set32(c.r[2], ld32((c.r[2].w[0] + 912u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 64u), c.r[2].w[0]);  if (t) { goto L_0027D550; } }
L_0027D548:
    set32(c.r[2], 0u - 1u);
    st32((c.r[16].w[0] + 64u), c.r[2].w[0]);
    c.budget -= 2;
L_0027D550:
    set32(c.r[2], ld32((c.r[16].w[0] + 64u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] < 0; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0027D5B8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027D564u); set32(c.r[4], 0u + 24u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0027D564u) [[unlikely]] return; }
L_0027D564:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0027D5AC; } }
    set32(c.r[6], ld32((c.r[16].w[0] + 64u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[7], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[5], c.r[5].w[0] + 6048u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], 0u + 30u);
    set32(c.r[4], c.r[4].w[0] + 1856u);
    st32((c.r[2].w[0] + 16u), c.r[5].w[0]);
    st32((c.r[2].w[0] + 12u), c.r[7].w[0]);
    st32((c.r[2].w[0]), 0u);
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 8u), 0u);
    st32((c.r[2].w[0] + 16u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 20u), c.r[6].w[0]);
    st32((c.r[2].w[0] + 8u), c.r[3].w[0]);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 16;
L_0027D5AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027D5B4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 98u, depth + 1u); else { c.pc = 0x00271A60u; return; } if (c.pc != 0x0027D5B4u) [[unlikely]] return; }
L_0027D5B4:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0027D5B8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0027D5D0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027D5E8u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 107u, depth + 1u); else { c.pc = 0x00271B70u; return; } if (c.pc != 0x0027D5E8u) [[unlikely]] return; }
L_0027D5E8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] - 624u);
    st32((c.r[16].w[0] + 56u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[17], ld32((c.r[2].w[0] + 20u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027D604u); set32(c.r[4], ld32((c.r[17].w[0])));  if (depth < kMaxDepth) unit_0070(c, 46u, depth + 1u); else { c.pc = 0x002C0DB0u; return; } if (c.pc != 0x0027D604u) [[unlikely]] return; }
L_0027D604:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0027D624; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027D614u); set32(c.r[4], ld32((c.r[17].w[0])));  if (depth < kMaxDepth) unit_0070(c, 18u, depth + 1u); else { c.pc = 0x002C0400u; return; } if (c.pc != 0x0027D614u) [[unlikely]] return; }
L_0027D614:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0027D624; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027D624u); set32(c.r[4], ld32((c.r[17].w[0])));  if (depth < kMaxDepth) unit_006F(c, 279u, depth + 1u); else { c.pc = 0x002BFAD0u; return; } if (c.pc != 0x0027D624u) [[unlikely]] return; }
L_0027D624:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0027D638; } }
    set32(c.r[2], ld32((c.r[2].w[0] + 912u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 64u), c.r[2].w[0]);  if (t) { goto L_0027D640; } }
L_0027D638:
    set32(c.r[2], 0u - 1u);
    st32((c.r[16].w[0] + 64u), c.r[2].w[0]);
    c.budget -= 2;
L_0027D640:
    set32(c.r[2], ld32((c.r[16].w[0] + 64u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] < 0; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0027D6A8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027D654u); set32(c.r[4], 0u + 24u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0027D654u) [[unlikely]] return; }
L_0027D654:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0027D69C; } }
    set32(c.r[6], ld32((c.r[16].w[0] + 64u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[7], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[5], c.r[5].w[0] + 6048u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], 0u + 30u);
    set32(c.r[4], c.r[4].w[0] + 1856u);
    st32((c.r[2].w[0] + 16u), c.r[5].w[0]);
    st32((c.r[2].w[0] + 12u), c.r[7].w[0]);
    st32((c.r[2].w[0]), 0u);
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 8u), 0u);
    st32((c.r[2].w[0] + 16u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 20u), c.r[6].w[0]);
    st32((c.r[2].w[0] + 8u), c.r[3].w[0]);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 16;
L_0027D69C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027D6A4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 98u, depth + 1u); else { c.pc = 0x00271A60u; return; } if (c.pc != 0x0027D6A4u) [[unlikely]] return; }
L_0027D6A4:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0027D6A8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0027D6C0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027D6D8u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 107u, depth + 1u); else { c.pc = 0x00271B70u; return; } if (c.pc != 0x0027D6D8u) [[unlikely]] return; }
L_0027D6D8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] - 640u);
    st32((c.r[16].w[0] + 56u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[17], ld32((c.r[2].w[0] + 20u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027D6F4u); set32(c.r[4], ld32((c.r[17].w[0])));  if (depth < kMaxDepth) unit_0070(c, 29u, depth + 1u); else { c.pc = 0x002C07D0u; return; } if (c.pc != 0x0027D6F4u) [[unlikely]] return; }
L_0027D6F4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0027D724; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027D704u); set32(c.r[4], ld32((c.r[17].w[0])));  if (depth < kMaxDepth) unit_0070(c, 32u, depth + 1u); else { c.pc = 0x002C0980u; return; } if (c.pc != 0x0027D704u) [[unlikely]] return; }
L_0027D704:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0027D724; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027D714u); set32(c.r[4], ld32((c.r[17].w[0])));  if (depth < kMaxDepth) unit_0070(c, 62u, depth + 1u); else { c.pc = 0x002C12E0u; return; } if (c.pc != 0x0027D714u) [[unlikely]] return; }
L_0027D714:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0027D724; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027D724u); set32(c.r[4], ld32((c.r[17].w[0])));  if (depth < kMaxDepth) unit_0070(c, 18u, depth + 1u); else { c.pc = 0x002C0400u; return; } if (c.pc != 0x0027D724u) [[unlikely]] return; }
L_0027D724:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0027D738; } }
    set32(c.r[2], ld32((c.r[2].w[0] + 912u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 64u), c.r[2].w[0]);  if (t) { goto L_0027D740; } }
L_0027D738:
    set32(c.r[2], 0u - 1u);
    st32((c.r[16].w[0] + 64u), c.r[2].w[0]);
    c.budget -= 2;
L_0027D740:
    set32(c.r[2], ld32((c.r[16].w[0] + 64u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] < 0; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0027D7A8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027D754u); set32(c.r[4], 0u + 24u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0027D754u) [[unlikely]] return; }
L_0027D754:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0027D79C; } }
    set32(c.r[6], ld32((c.r[16].w[0] + 64u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[7], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[5], c.r[5].w[0] + 6048u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], 0u + 30u);
    set32(c.r[4], c.r[4].w[0] + 1856u);
    st32((c.r[2].w[0] + 16u), c.r[5].w[0]);
    st32((c.r[2].w[0] + 12u), c.r[7].w[0]);
    st32((c.r[2].w[0]), 0u);
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 8u), 0u);
    st32((c.r[2].w[0] + 16u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 20u), c.r[6].w[0]);
    st32((c.r[2].w[0] + 8u), c.r[3].w[0]);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 16;
L_0027D79C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027D7A4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 98u, depth + 1u); else { c.pc = 0x00271A60u; return; } if (c.pc != 0x0027D7A4u) [[unlikely]] return; }
L_0027D7A4:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0027D7A8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0027D7C0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027D7D8u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 107u, depth + 1u); else { c.pc = 0x00271B70u; return; } if (c.pc != 0x0027D7D8u) [[unlikely]] return; }
L_0027D7D8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] - 656u);
    st32((c.r[16].w[0] + 56u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[17], ld32((c.r[2].w[0] + 20u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027D7F4u); set32(c.r[4], ld32((c.r[17].w[0])));  if (depth < kMaxDepth) unit_0070(c, 70u, depth + 1u); else { c.pc = 0x002C15A0u; return; } if (c.pc != 0x0027D7F4u) [[unlikely]] return; }
L_0027D7F4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0027D814; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027D804u); set32(c.r[4], ld32((c.r[17].w[0])));  if (depth < kMaxDepth) unit_0070(c, 35u, depth + 1u); else { c.pc = 0x002C0A90u; return; } if (c.pc != 0x0027D804u) [[unlikely]] return; }
L_0027D804:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0027D814; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027D814u); set32(c.r[4], ld32((c.r[17].w[0])));  if (depth < kMaxDepth) unit_0070(c, 18u, depth + 1u); else { c.pc = 0x002C0400u; return; } if (c.pc != 0x0027D814u) [[unlikely]] return; }
L_0027D814:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0027D828; } }
    set32(c.r[2], ld32((c.r[2].w[0] + 912u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 64u), c.r[2].w[0]);  if (t) { goto L_0027D830; } }
L_0027D828:
    set32(c.r[2], 0u - 1u);
    st32((c.r[16].w[0] + 64u), c.r[2].w[0]);
    c.budget -= 2;
L_0027D830:
    set32(c.r[2], ld32((c.r[16].w[0] + 64u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] < 0; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0027D898; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027D844u); set32(c.r[4], 0u + 24u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0027D844u) [[unlikely]] return; }
L_0027D844:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0027D88C; } }
    set32(c.r[6], ld32((c.r[16].w[0] + 64u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[7], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[5], c.r[5].w[0] + 6048u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], 0u + 30u);
    set32(c.r[4], c.r[4].w[0] + 1856u);
    st32((c.r[2].w[0] + 16u), c.r[5].w[0]);
    st32((c.r[2].w[0] + 12u), c.r[7].w[0]);
    st32((c.r[2].w[0]), 0u);
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 8u), 0u);
    st32((c.r[2].w[0] + 16u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 20u), c.r[6].w[0]);
    st32((c.r[2].w[0] + 8u), c.r[3].w[0]);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 16;
L_0027D88C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027D894u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 98u, depth + 1u); else { c.pc = 0x00271A60u; return; } if (c.pc != 0x0027D894u) [[unlikely]] return; }
L_0027D894:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0027D898:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0027D8B0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027D8C4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 107u, depth + 1u); else { c.pc = 0x00271B70u; return; } if (c.pc != 0x0027D8C4u) [[unlikely]] return; }
L_0027D8C4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] - 672u);
    st32((c.r[16].w[0] + 56u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027D8E0u); set32(c.r[4], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_006F(c, 276u, depth + 1u); else { c.pc = 0x002BF9F0u; return; } if (c.pc != 0x0027D8E0u) [[unlikely]] return; }
L_0027D8E0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0027D8F4; } }
    set32(c.r[2], ld32((c.r[2].w[0] + 912u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 64u), c.r[2].w[0]);  if (t) { goto L_0027D8FC; } }
L_0027D8F4:
    set32(c.r[2], 0u - 1u);
    st32((c.r[16].w[0] + 64u), c.r[2].w[0]);
    c.budget -= 2;
L_0027D8FC:
    set32(c.r[2], ld32((c.r[16].w[0] + 64u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] < 0; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0027D964; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027D910u); set32(c.r[4], 0u + 24u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0027D910u) [[unlikely]] return; }
L_0027D910:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0027D958; } }
    set32(c.r[6], ld32((c.r[16].w[0] + 64u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[7], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[5], c.r[5].w[0] + 6048u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], 0u + 30u);
    set32(c.r[4], c.r[4].w[0] + 1856u);
    st32((c.r[2].w[0] + 16u), c.r[5].w[0]);
    st32((c.r[2].w[0] + 12u), c.r[7].w[0]);
    st32((c.r[2].w[0]), 0u);
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 8u), 0u);
    st32((c.r[2].w[0] + 16u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 20u), c.r[6].w[0]);
    st32((c.r[2].w[0] + 8u), c.r[3].w[0]);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 16;
L_0027D958:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027D960u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 98u, depth + 1u); else { c.pc = 0x00271A60u; return; } if (c.pc != 0x0027D960u) [[unlikely]] return; }
L_0027D960:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0027D964:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0027D980:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027D994u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 107u, depth + 1u); else { c.pc = 0x00271B70u; return; } if (c.pc != 0x0027D994u) [[unlikely]] return; }
L_0027D994:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] - 688u);
    st32((c.r[16].w[0] + 56u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027D9B0u); set32(c.r[4], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_006F(c, 262u, depth + 1u); else { c.pc = 0x002BF580u; return; } if (c.pc != 0x0027D9B0u) [[unlikely]] return; }
L_0027D9B0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0027D9C0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0027DA38; } }
L_0027D9C0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0027D9D0; } }
    set32(c.r[2], ld32((c.r[2].w[0] + 912u)));
    st32((c.r[16].w[0] + 64u), c.r[2].w[0]);
    c.budget -= 2;
L_0027D9D0:
    set32(c.r[2], ld32((c.r[16].w[0] + 64u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] < 0; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0027DA38; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027D9E4u); set32(c.r[4], 0u + 24u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0027D9E4u) [[unlikely]] return; }
L_0027D9E4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0027DA2C; } }
    set32(c.r[6], ld32((c.r[16].w[0] + 64u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[7], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[5], c.r[5].w[0] + 6048u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], 0u + 30u);
    set32(c.r[4], c.r[4].w[0] + 1856u);
    st32((c.r[2].w[0] + 16u), c.r[5].w[0]);
    st32((c.r[2].w[0] + 12u), c.r[7].w[0]);
    st32((c.r[2].w[0]), 0u);
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 8u), 0u);
    st32((c.r[2].w[0] + 16u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 20u), c.r[6].w[0]);
    st32((c.r[2].w[0] + 8u), c.r[3].w[0]);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 16;
L_0027DA2C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027DA34u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 98u, depth + 1u); else { c.pc = 0x00271A60u; return; } if (c.pc != 0x0027DA34u) [[unlikely]] return; }
L_0027DA34:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0027DA38:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0027DA50:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027DA64u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 107u, depth + 1u); else { c.pc = 0x00271B70u; return; } if (c.pc != 0x0027DA64u) [[unlikely]] return; }
L_0027DA64:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] - 704u);
    st32((c.r[16].w[0] + 56u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20u)));
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027DA84u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_006F(c, 273u, depth + 1u); else { c.pc = 0x002BF920u; return; } if (c.pc != 0x0027DA84u) [[unlikely]] return; }
L_0027DA84:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0027DA94; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0027DB0C; } }
L_0027DA94:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0027DAA4; } }
    set32(c.r[2], ld32((c.r[2].w[0] + 912u)));
    st32((c.r[16].w[0] + 64u), c.r[2].w[0]);
    c.budget -= 2;
L_0027DAA4:
    set32(c.r[2], ld32((c.r[16].w[0] + 64u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] < 0; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0027DB0C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027DAB8u); set32(c.r[4], 0u + 24u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0027DAB8u) [[unlikely]] return; }
L_0027DAB8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0027DB00; } }
    set32(c.r[6], ld32((c.r[16].w[0] + 64u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[7], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[5], c.r[5].w[0] + 6048u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], 0u + 30u);
    set32(c.r[4], c.r[4].w[0] + 1856u);
    st32((c.r[2].w[0] + 16u), c.r[5].w[0]);
    st32((c.r[2].w[0] + 12u), c.r[7].w[0]);
    st32((c.r[2].w[0]), 0u);
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 8u), 0u);
    st32((c.r[2].w[0] + 16u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 20u), c.r[6].w[0]);
    st32((c.r[2].w[0] + 8u), c.r[3].w[0]);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 16;
L_0027DB00:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027DB08u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 98u, depth + 1u); else { c.pc = 0x00271A60u; return; } if (c.pc != 0x0027DB08u) [[unlikely]] return; }
L_0027DB08:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0027DB0C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0027DB20:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027DB34u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 107u, depth + 1u); else { c.pc = 0x00271B70u; return; } if (c.pc != 0x0027DB34u) [[unlikely]] return; }
L_0027DB34:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] - 720u);
    st32((c.r[16].w[0] + 56u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20u)));
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027DB54u); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_006F(c, 273u, depth + 1u); else { c.pc = 0x002BF920u; return; } if (c.pc != 0x0027DB54u) [[unlikely]] return; }
L_0027DB54:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0027DB64; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0027DBDC; } }
L_0027DB64:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0027DB74; } }
    set32(c.r[2], ld32((c.r[2].w[0] + 912u)));
    st32((c.r[16].w[0] + 64u), c.r[2].w[0]);
    c.budget -= 2;
L_0027DB74:
    set32(c.r[2], ld32((c.r[16].w[0] + 64u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] < 0; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0027DBDC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027DB88u); set32(c.r[4], 0u + 24u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0027DB88u) [[unlikely]] return; }
L_0027DB88:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0027DBD0; } }
    set32(c.r[6], ld32((c.r[16].w[0] + 64u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[7], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[5], c.r[5].w[0] + 6048u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], 0u + 30u);
    set32(c.r[4], c.r[4].w[0] + 1856u);
    st32((c.r[2].w[0] + 16u), c.r[5].w[0]);
    st32((c.r[2].w[0] + 12u), c.r[7].w[0]);
    st32((c.r[2].w[0]), 0u);
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 8u), 0u);
    st32((c.r[2].w[0] + 16u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 20u), c.r[6].w[0]);
    st32((c.r[2].w[0] + 8u), c.r[3].w[0]);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 16;
L_0027DBD0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027DBD8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 98u, depth + 1u); else { c.pc = 0x00271A60u; return; } if (c.pc != 0x0027DBD8u) [[unlikely]] return; }
L_0027DBD8:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0027DBDC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0027DBF0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027DC04u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 107u, depth + 1u); else { c.pc = 0x00271B70u; return; } if (c.pc != 0x0027DC04u) [[unlikely]] return; }
L_0027DC04:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] - 736u);
    st32((c.r[16].w[0] + 56u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20u)));
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027DC24u); set32(c.r[5], 0u + 6u);  if (depth < kMaxDepth) unit_006F(c, 273u, depth + 1u); else { c.pc = 0x002BF920u; return; } if (c.pc != 0x0027DC24u) [[unlikely]] return; }
L_0027DC24:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0027DC34; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0027DCAC; } }
L_0027DC34:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0027DC44; } }
    set32(c.r[2], ld32((c.r[2].w[0] + 912u)));
    st32((c.r[16].w[0] + 64u), c.r[2].w[0]);
    c.budget -= 2;
L_0027DC44:
    set32(c.r[2], ld32((c.r[16].w[0] + 64u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] < 0; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0027DCAC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027DC58u); set32(c.r[4], 0u + 24u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0027DC58u) [[unlikely]] return; }
L_0027DC58:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0027DCA0; } }
    set32(c.r[6], ld32((c.r[16].w[0] + 64u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[7], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[5], c.r[5].w[0] + 6048u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], 0u + 30u);
    set32(c.r[4], c.r[4].w[0] + 1856u);
    st32((c.r[2].w[0] + 16u), c.r[5].w[0]);
    st32((c.r[2].w[0] + 12u), c.r[7].w[0]);
    st32((c.r[2].w[0]), 0u);
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 8u), 0u);
    st32((c.r[2].w[0] + 16u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 20u), c.r[6].w[0]);
    st32((c.r[2].w[0] + 8u), c.r[3].w[0]);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 16;
L_0027DCA0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027DCA8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 98u, depth + 1u); else { c.pc = 0x00271A60u; return; } if (c.pc != 0x0027DCA8u) [[unlikely]] return; }
L_0027DCA8:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0027DCAC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0027DCC0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027DCD4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 107u, depth + 1u); else { c.pc = 0x00271B70u; return; } if (c.pc != 0x0027DCD4u) [[unlikely]] return; }
L_0027DCD4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] - 752u);
    st32((c.r[16].w[0] + 56u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20u)));
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027DCF4u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_006F(c, 273u, depth + 1u); else { c.pc = 0x002BF920u; return; } if (c.pc != 0x0027DCF4u) [[unlikely]] return; }
L_0027DCF4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0027DD04; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0027DD7C; } }
L_0027DD04:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0027DD14; } }
    set32(c.r[2], ld32((c.r[2].w[0] + 912u)));
    st32((c.r[16].w[0] + 64u), c.r[2].w[0]);
    c.budget -= 2;
L_0027DD14:
    set32(c.r[2], ld32((c.r[16].w[0] + 64u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] < 0; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0027DD7C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027DD28u); set32(c.r[4], 0u + 24u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0027DD28u) [[unlikely]] return; }
L_0027DD28:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0027DD70; } }
    set32(c.r[6], ld32((c.r[16].w[0] + 64u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[7], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[5], c.r[5].w[0] + 6048u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], 0u + 30u);
    set32(c.r[4], c.r[4].w[0] + 1856u);
    st32((c.r[2].w[0] + 16u), c.r[5].w[0]);
    st32((c.r[2].w[0] + 12u), c.r[7].w[0]);
    st32((c.r[2].w[0]), 0u);
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 8u), 0u);
    st32((c.r[2].w[0] + 16u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 20u), c.r[6].w[0]);
    st32((c.r[2].w[0] + 8u), c.r[3].w[0]);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 16;
L_0027DD70:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027DD78u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 98u, depth + 1u); else { c.pc = 0x00271A60u; return; } if (c.pc != 0x0027DD78u) [[unlikely]] return; }
L_0027DD78:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0027DD7C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0027DD90:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027DDA4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 107u, depth + 1u); else { c.pc = 0x00271B70u; return; } if (c.pc != 0x0027DDA4u) [[unlikely]] return; }
L_0027DDA4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] - 768u);
    st32((c.r[16].w[0] + 56u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027DDC0u); set32(c.r[4], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_006F(c, 287u, depth + 1u); else { c.pc = 0x002BFD70u; return; } if (c.pc != 0x0027DDC0u) [[unlikely]] return; }
L_0027DDC0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0027DDD0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0027DE48; } }
L_0027DDD0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0027DDE0; } }
    set32(c.r[2], ld32((c.r[2].w[0] + 912u)));
    st32((c.r[16].w[0] + 64u), c.r[2].w[0]);
    c.budget -= 2;
L_0027DDE0:
    set32(c.r[2], ld32((c.r[16].w[0] + 64u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] < 0; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0027DE48; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027DDF4u); set32(c.r[4], 0u + 24u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0027DDF4u) [[unlikely]] return; }
L_0027DDF4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0027DE3C; } }
    set32(c.r[6], ld32((c.r[16].w[0] + 64u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[7], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[5], c.r[5].w[0] + 6048u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], 0u + 30u);
    set32(c.r[4], c.r[4].w[0] + 1856u);
    st32((c.r[2].w[0] + 16u), c.r[5].w[0]);
    st32((c.r[2].w[0] + 12u), c.r[7].w[0]);
    st32((c.r[2].w[0]), 0u);
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 8u), 0u);
    st32((c.r[2].w[0] + 16u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 20u), c.r[6].w[0]);
    st32((c.r[2].w[0] + 8u), c.r[3].w[0]);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 16;
L_0027DE3C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027DE44u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 98u, depth + 1u); else { c.pc = 0x00271A60u; return; } if (c.pc != 0x0027DE44u) [[unlikely]] return; }
L_0027DE44:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0027DE48:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0027DE60:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027DE74u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 107u, depth + 1u); else { c.pc = 0x00271B70u; return; } if (c.pc != 0x0027DE74u) [[unlikely]] return; }
L_0027DE74:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] - 784u);
    st32((c.r[16].w[0] + 56u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027DE90u); set32(c.r[4], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0070(c, 22u, depth + 1u); else { c.pc = 0x002C0520u; return; } if (c.pc != 0x0027DE90u) [[unlikely]] return; }
L_0027DE90:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0027DEA0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0027DF18; } }
L_0027DEA0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0027DEB0; } }
    set32(c.r[2], ld32((c.r[2].w[0] + 912u)));
    st32((c.r[16].w[0] + 64u), c.r[2].w[0]);
    c.budget -= 2;
L_0027DEB0:
    set32(c.r[2], ld32((c.r[16].w[0] + 64u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] < 0; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0027DF18; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027DEC4u); set32(c.r[4], 0u + 24u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0027DEC4u) [[unlikely]] return; }
L_0027DEC4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0027DF0C; } }
    set32(c.r[6], ld32((c.r[16].w[0] + 64u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[7], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[5], c.r[5].w[0] + 6048u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], 0u + 30u);
    set32(c.r[4], c.r[4].w[0] + 1856u);
    st32((c.r[2].w[0] + 16u), c.r[5].w[0]);
    st32((c.r[2].w[0] + 12u), c.r[7].w[0]);
    st32((c.r[2].w[0]), 0u);
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 8u), 0u);
    st32((c.r[2].w[0] + 16u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 20u), c.r[6].w[0]);
    st32((c.r[2].w[0] + 8u), c.r[3].w[0]);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 16;
L_0027DF0C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027DF14u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 98u, depth + 1u); else { c.pc = 0x00271A60u; return; } if (c.pc != 0x0027DF14u) [[unlikely]] return; }
L_0027DF14:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0027DF18:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0027DF30:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027DF48u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 107u, depth + 1u); else { c.pc = 0x00271B70u; return; } if (c.pc != 0x0027DF48u) [[unlikely]] return; }
L_0027DF48:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] - 800u);
    st32((c.r[16].w[0] + 56u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[17], ld32((c.r[2].w[0] + 20u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027DF64u); set32(c.r[4], ld32((c.r[17].w[0])));  if (depth < kMaxDepth) unit_0070(c, 18u, depth + 1u); else { c.pc = 0x002C0400u; return; } if (c.pc != 0x0027DF64u) [[unlikely]] return; }
L_0027DF64:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0027DF84; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027DF74u); set32(c.r[4], ld32((c.r[17].w[0])));  if (depth < kMaxDepth) unit_0070(c, 18u, depth + 1u); else { c.pc = 0x002C0400u; return; } if (c.pc != 0x0027DF74u) [[unlikely]] return; }
L_0027DF74:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0027DF84; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027DF84u); set32(c.r[4], ld32((c.r[17].w[0])));  if (depth < kMaxDepth) unit_006F(c, 279u, depth + 1u); else { c.pc = 0x002BFAD0u; return; } if (c.pc != 0x0027DF84u) [[unlikely]] return; }
L_0027DF84:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0027DF98; } }
    set32(c.r[2], ld32((c.r[2].w[0] + 912u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 64u), c.r[2].w[0]);  if (t) { goto L_0027DFA0; } }
L_0027DF98:
    set32(c.r[2], 0u - 1u);
    st32((c.r[16].w[0] + 64u), c.r[2].w[0]);
    c.budget -= 2;
L_0027DFA0:
    set32(c.r[2], ld32((c.r[16].w[0] + 64u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] < 0; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0027E008; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027DFB4u); set32(c.r[4], 0u + 24u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0027DFB4u) [[unlikely]] return; }
L_0027DFB4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0027DFFC; } }
    set32(c.r[6], ld32((c.r[16].w[0] + 64u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[7], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[5], c.r[5].w[0] + 6048u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], 0u + 30u);
    set32(c.r[4], c.r[4].w[0] + 1856u);
    st32((c.r[2].w[0] + 16u), c.r[5].w[0]);
    st32((c.r[2].w[0] + 12u), c.r[7].w[0]);
    st32((c.r[2].w[0]), 0u);
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 8u), 0u);
    st32((c.r[2].w[0] + 16u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 20u), c.r[6].w[0]);
    st32((c.r[2].w[0] + 8u), c.r[3].w[0]);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 16;
L_0027DFFC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027E004u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 98u, depth + 1u); else { c.pc = 0x00271A60u; return; } if (c.pc != 0x0027E004u) [[unlikely]] return; }
L_0027E004:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0027E008:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0027E020:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027E034u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 107u, depth + 1u); else { c.pc = 0x00271B70u; return; } if (c.pc != 0x0027E034u) [[unlikely]] return; }
L_0027E034:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] - 816u);
    st32((c.r[16].w[0] + 56u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027E050u); set32(c.r[4], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0070(c, 153u, depth + 1u); else { c.pc = 0x002C29F0u; return; } if (c.pc != 0x0027E050u) [[unlikely]] return; }
L_0027E050:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0027E064; } }
    set32(c.r[2], ld32((c.r[2].w[0] + 912u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 64u), c.r[2].w[0]);  if (t) { goto L_0027E06C; } }
L_0027E064:
    set32(c.r[2], 0u - 1u);
    st32((c.r[16].w[0] + 64u), c.r[2].w[0]);
    c.budget -= 2;
L_0027E06C:
    set32(c.r[2], ld32((c.r[16].w[0] + 64u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] < 0; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0027E0D4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027E080u); set32(c.r[4], 0u + 24u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0027E080u) [[unlikely]] return; }
L_0027E080:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0027E0C8; } }
    set32(c.r[6], ld32((c.r[16].w[0] + 64u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[7], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[5], c.r[5].w[0] + 6048u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], 0u + 30u);
    set32(c.r[4], c.r[4].w[0] + 1856u);
    st32((c.r[2].w[0] + 16u), c.r[5].w[0]);
    st32((c.r[2].w[0] + 12u), c.r[7].w[0]);
    st32((c.r[2].w[0]), 0u);
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 8u), 0u);
    st32((c.r[2].w[0] + 16u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 20u), c.r[6].w[0]);
    st32((c.r[2].w[0] + 8u), c.r[3].w[0]);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 16;
L_0027E0C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027E0D0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 98u, depth + 1u); else { c.pc = 0x00271A60u; return; } if (c.pc != 0x0027E0D0u) [[unlikely]] return; }
L_0027E0D0:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0027E0D4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0027E0F0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027E110u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_005C(c, 107u, depth + 1u); else { c.pc = 0x00271B70u; return; } if (c.pc != 0x0027E110u) [[unlikely]] return; }
L_0027E110:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] - 832u);
    st32((c.r[19].w[0] + 56u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[17], ld32((c.r[2].w[0] + 20u)));
    set32(c.r[16], ld32((c.r[17].w[0])));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027E130u); c.r[18].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x0027E130u) [[unlikely]] return; }
L_0027E130:
    c.r[3].d[0] = ld8((c.r[2].w[0]));
    set32(c.r[2], 0u + 22u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0027E16C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027E148u);  if (depth < kMaxDepth) unit_0070(c, 13u, depth + 1u); else { c.pc = 0x002C02E0u; return; } if (c.pc != 0x0027E148u) [[unlikely]] return; }
L_0027E148:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_0027E21C; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 912u)));
    set32(c.r[3], ld32((c.r[18].w[0] + 912u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0027E21C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_0027E21C; } }
L_0027E16C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027E174u);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x0027E174u) [[unlikely]] return; }
L_0027E174:
    c.r[2].d[0] = ld8((c.r[2].w[0] + 9u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0027E1B8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027E188u);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x0027E188u) [[unlikely]] return; }
L_0027E188:
    c.r[2].d[0] = ld8((c.r[2].w[0] + 1u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0027E1A0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027E19Cu); set32(c.r[4], ld32((c.r[17].w[0])));  if (depth < kMaxDepth) unit_006F(c, 267u, depth + 1u); else { c.pc = 0x002BF760u; return; } if (c.pc != 0x0027E19Cu) [[unlikely]] return; }
L_0027E19C:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0027E1A0:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != 0ull;  if (t) { goto L_0027E21C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027E1B0u); set32(c.r[4], ld32((c.r[17].w[0])));  if (depth < kMaxDepth) unit_006F(c, 292u, depth + 1u); else { c.pc = 0x002BFF20u; return; } if (c.pc != 0x0027E1B0u) [[unlikely]] return; }
L_0027E1B0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0027E21C; } }
L_0027E1B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027E1C0u);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x0027E1C0u) [[unlikely]] return; }
L_0027E1C0:
    c.r[2].d[0] = ld8((c.r[2].w[0] + 19u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0027E1F0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027E1D4u); set32(c.r[4], ld32((c.r[17].w[0])));  if (depth < kMaxDepth) unit_006F(c, 285u, depth + 1u); else { c.pc = 0x002BFCC0u; return; } if (c.pc != 0x0027E1D4u) [[unlikely]] return; }
L_0027E1D4:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[18].d[0] != 0ull;  if (t) { goto L_0027E21C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027E1E8u); set32(c.r[4], ld32((c.r[17].w[0])));  if (depth < kMaxDepth) unit_006F(c, 282u, depth + 1u); else { c.pc = 0x002BFBF0u; return; } if (c.pc != 0x0027E1E8u) [[unlikely]] return; }
L_0027E1E8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0027E21C; } }
L_0027E1F0:
    set32(c.r[3], ld32((c.r[16].w[0] + 464u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0027E210; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027E208u);  if (depth < kMaxDepth) unit_0070(c, 196u, depth + 1u); else { c.pc = 0x002C35E0u; return; } if (c.pc != 0x0027E208u) [[unlikely]] return; }
L_0027E208:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0027E21C; } }
L_0027E210:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027E218u); set32(c.r[4], ld32((c.r[17].w[0])));  if (depth < kMaxDepth) unit_006F(c, 264u, depth + 1u); else { c.pc = 0x002BF670u; return; } if (c.pc != 0x0027E218u) [[unlikely]] return; }
L_0027E218:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0027E21C:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != 0ull;  if (t) { goto L_0027E234; } }
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027E230u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006F(c, 270u, depth + 1u); else { c.pc = 0x002BF850u; return; } if (c.pc != 0x0027E230u) [[unlikely]] return; }
L_0027E230:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0027E234:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_0027E248; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 912u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 64u), c.r[2].w[0]);  if (t) { goto L_0027E24C; } }
L_0027E248:
    st32((c.r[19].w[0] + 64u), c.r[2].w[0]);
    c.budget -= 1;
L_0027E24C:
    set32(c.r[2], ld32((c.r[19].w[0] + 64u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] < 0; c.r[2].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_0027E2B4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027E260u); set32(c.r[4], 0u + 24u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0027E260u) [[unlikely]] return; }
L_0027E260:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0027E2A8; } }
    set32(c.r[6], ld32((c.r[19].w[0] + 64u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[7], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[5], c.r[5].w[0] + 6048u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], 0u + 30u);
    set32(c.r[4], c.r[4].w[0] + 1856u);
    st32((c.r[2].w[0] + 16u), c.r[5].w[0]);
    st32((c.r[2].w[0] + 12u), c.r[7].w[0]);
    st32((c.r[2].w[0]), 0u);
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 8u), 0u);
    st32((c.r[2].w[0] + 16u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 20u), c.r[6].w[0]);
    st32((c.r[2].w[0] + 8u), c.r[3].w[0]);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 16;
L_0027E2A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027E2B0u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 98u, depth + 1u); else { c.pc = 0x00271A60u; return; } if (c.pc != 0x0027E2B0u) [[unlikely]] return; }
L_0027E2B0:
    c.r[2].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_0027E2B4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0027E2D0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027E2E4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 107u, depth + 1u); else { c.pc = 0x00271B70u; return; } if (c.pc != 0x0027E2E4u) [[unlikely]] return; }
L_0027E2E4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] - 848u);
    st32((c.r[16].w[0] + 56u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027E300u); set32(c.r[4], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0071(c, 28u, depth + 1u); else { c.pc = 0x002C44E0u; return; } if (c.pc != 0x0027E300u) [[unlikely]] return; }
L_0027E300:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0027E314; } }
    set32(c.r[2], ld32((c.r[2].w[0] + 912u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 64u), c.r[2].w[0]);  if (t) { goto L_0027E31C; } }
L_0027E314:
    set32(c.r[2], 0u - 1u);
    st32((c.r[16].w[0] + 64u), c.r[2].w[0]);
    c.budget -= 2;
L_0027E31C:
    set32(c.r[2], ld32((c.r[16].w[0] + 64u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] < 0; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0027E384; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027E330u); set32(c.r[4], 0u + 24u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0027E330u) [[unlikely]] return; }
L_0027E330:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0027E378; } }
    set32(c.r[6], ld32((c.r[16].w[0] + 64u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[7], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[5], c.r[5].w[0] + 6048u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], 0u + 30u);
    set32(c.r[4], c.r[4].w[0] + 1856u);
    st32((c.r[2].w[0] + 16u), c.r[5].w[0]);
    st32((c.r[2].w[0] + 12u), c.r[7].w[0]);
    st32((c.r[2].w[0]), 0u);
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 8u), 0u);
    st32((c.r[2].w[0] + 16u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 20u), c.r[6].w[0]);
    st32((c.r[2].w[0] + 8u), c.r[3].w[0]);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 16;
L_0027E378:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027E380u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 98u, depth + 1u); else { c.pc = 0x00271A60u; return; } if (c.pc != 0x0027E380u) [[unlikely]] return; }
L_0027E380:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0027E384:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0027E3A0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027E3B4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 107u, depth + 1u); else { c.pc = 0x00271B70u; return; } if (c.pc != 0x0027E3B4u) [[unlikely]] return; }
L_0027E3B4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[4], 0u + 20u);
    set32(c.r[2], c.r[2].w[0] - 864u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027E3C8u); st32((c.r[16].w[0] + 56u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0027E3C8u) [[unlikely]] return; }
L_0027E3C8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0027E400; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[4], c.r[4].w[0] + 6048u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 1824u);
    st32((c.r[2].w[0] + 16u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 12u), c.r[5].w[0]);
    st32((c.r[2].w[0]), 0u);
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 8u), 0u);
    st32((c.r[2].w[0] + 16u), c.r[3].w[0]);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 12;
L_0027E400:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027E408u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 98u, depth + 1u); else { c.pc = 0x00271A60u; return; } if (c.pc != 0x0027E408u) [[unlikely]] return; }
L_0027E408:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0027E420:
    set32(c.r[29], c.r[29].w[0] - 208u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027E43Cu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_005C(c, 107u, depth + 1u); else { c.pc = 0x00271B70u; return; } if (c.pc != 0x0027E43Cu) [[unlikely]] return; }
L_0027E43C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[2], c.r[2].w[0] - 880u);
    set32(c.r[6], c.r[6].w[0] - 20208u);
    st32((c.r[18].w[0] + 56u), c.r[2].w[0]);
    set32(c.r[5], c.r[29].w[0] + 64u);
    set32(c.r[4], 0u + 4u);
    c.budget -= 7;
L_0027E458:
    ld128((c.r[6].w[0]) & ~15u, c.r[3]);
    set32(c.r[4], c.r[4].w[0] - 1u);
    ld128((c.r[6].w[0] + 16u) & ~15u, c.r[2]);
    st128((c.r[5].w[0]) & ~15u, c.r[3]);
    set32(c.r[6], c.r[6].w[0] + 32u);
    st128((c.r[5].w[0] + 16u) & ~15u, c.r[2]);
    c.budget -= 8;
    { const bool t = c.r[4].sd[0] > 0; set32(c.r[5], c.r[5].w[0] + 32u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0027E458u | kUnwind; return; } goto L_0027E458; } }
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0027E47C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027E484u); set32(c.r[4], 0u + 64u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0027E484u) [[unlikely]] return; }
L_0027E484:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0027E4F8; } }
    set32(c.r[8], ld32((c.r[18].w[0] + 4u)));
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[7], c.r[7].w[0] + 6048u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[17].w[0] << 4);
    set32(c.r[5], c.r[5].w[0] + 5920u);
    set32(c.r[3], c.r[3].w[0] + c.r[29].w[0]);
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[6], c.r[2].w[0] + 32u);
    set32(c.r[4], c.r[29].w[0] + 204u);
    st32((c.r[2].w[0] + 16u), c.r[7].w[0]);
    st32((c.r[2].w[0] + 12u), c.r[8].w[0]);
    st32((c.r[2].w[0]), 0u);
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 8u), 0u);
    st32((c.r[2].w[0] + 16u), c.r[5].w[0]);
    ld128((c.r[3].w[0] + 64u) & ~15u, c.r[3]);
    st128((c.r[2].w[0] + 32u) & ~15u, c.r[3]);
    set32(c.r[2], ld32((c.r[2].w[0] + 12u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20u)));
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 23;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027E4E8u); set32(c.r[5], c.r[2].w[0] + 224u);  if (depth < kMaxDepth) unit_005C(c, 29u, depth + 1u); else { c.pc = 0x002705F0u; return; } if (c.pc != 0x0027E4E8u) [[unlikely]] return; }
L_0027E4E8:
    c.r[3].d[0] = ld16((c.r[29].w[0] + 204u));
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st16((c.r[16].w[0] + 48u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
L_0027E4F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027E500u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 98u, depth + 1u); else { c.pc = 0x00271A60u; return; } if (c.pc != 0x0027E500u) [[unlikely]] return; }
L_0027E500:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], 0u + 20u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0027E47Cu | kUnwind; return; } goto L_0027E47C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027E518u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0027E518u) [[unlikely]] return; }
L_0027E518:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0027E550; } }
    set32(c.r[5], ld32((c.r[18].w[0] + 4u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[4], c.r[4].w[0] + 6048u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 2048u);
    st32((c.r[2].w[0] + 16u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 12u), c.r[5].w[0]);
    st32((c.r[2].w[0]), 0u);
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 8u), 0u);
    st32((c.r[2].w[0] + 16u), c.r[3].w[0]);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 12;
L_0027E550:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027E558u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 98u, depth + 1u); else { c.pc = 0x00271A60u; return; } if (c.pc != 0x0027E558u) [[unlikely]] return; }
L_0027E558:
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 208u);  c.pc = t; return; }
L_0027E580:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027E59Cu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_005C(c, 107u, depth + 1u); else { c.pc = 0x00271B70u; return; } if (c.pc != 0x0027E59Cu) [[unlikely]] return; }
L_0027E59C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[2], c.r[2].w[0] - 896u);
    set32(c.r[5], c.r[5].w[0] - 20080u);
    st32((c.r[18].w[0] + 56u), c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 64u);
    set32(c.r[3], 0u + 4u);
    c.budget -= 7;
L_0027E5B8:
    ld128((c.r[5].w[0]) & ~15u, c.r[2]);
    set32(c.r[3], c.r[3].w[0] - 1u);
    st128((c.r[4].w[0]) & ~15u, c.r[2]);
    set32(c.r[5], c.r[5].w[0] + 16u);
    set32(c.r[4], c.r[4].w[0] + 16u);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0027E5B8u | kUnwind; return; } goto L_0027E5B8; } }
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0027E5D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027E5E0u); set32(c.r[4], 0u + 64u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0027E5E0u) [[unlikely]] return; }
L_0027E5E0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0027E654; } }
    set32(c.r[8], ld32((c.r[18].w[0] + 4u)));
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[7], c.r[7].w[0] + 6048u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[17].w[0] << 4);
    set32(c.r[5], c.r[5].w[0] + 5952u);
    set32(c.r[3], c.r[3].w[0] + c.r[29].w[0]);
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[6], c.r[2].w[0] + 32u);
    set32(c.r[4], c.r[29].w[0] + 140u);
    st32((c.r[2].w[0] + 16u), c.r[7].w[0]);
    st32((c.r[2].w[0] + 12u), c.r[8].w[0]);
    st32((c.r[2].w[0]), 0u);
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 8u), 0u);
    st32((c.r[2].w[0] + 16u), c.r[5].w[0]);
    ld128((c.r[3].w[0] + 64u) & ~15u, c.r[3]);
    st128((c.r[2].w[0] + 32u) & ~15u, c.r[3]);
    set32(c.r[2], ld32((c.r[2].w[0] + 12u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20u)));
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 23;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027E644u); set32(c.r[5], c.r[2].w[0] + 224u);  if (depth < kMaxDepth) unit_005C(c, 29u, depth + 1u); else { c.pc = 0x002705F0u; return; } if (c.pc != 0x0027E644u) [[unlikely]] return; }
L_0027E644:
    c.r[3].d[0] = ld16((c.r[29].w[0] + 140u));
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st16((c.r[16].w[0] + 48u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
L_0027E654:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027E65Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 98u, depth + 1u); else { c.pc = 0x00271A60u; return; } if (c.pc != 0x0027E65Cu) [[unlikely]] return; }
L_0027E65C:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], 0u + 20u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0027E5D8u | kUnwind; return; } goto L_0027E5D8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027E674u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0027E674u) [[unlikely]] return; }
L_0027E674:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0027E6AC; } }
    set32(c.r[5], ld32((c.r[18].w[0] + 4u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[4], c.r[4].w[0] + 6048u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 2048u);
    st32((c.r[2].w[0] + 16u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 12u), c.r[5].w[0]);
    st32((c.r[2].w[0]), 0u);
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 8u), 0u);
    st32((c.r[2].w[0] + 16u), c.r[3].w[0]);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 12;
L_0027E6AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027E6B4u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 98u, depth + 1u); else { c.pc = 0x00271A60u; return; } if (c.pc != 0x0027E6B4u) [[unlikely]] return; }
L_0027E6B4:
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_0027E6D0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027E6E8u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_005C(c, 107u, depth + 1u); else { c.pc = 0x00271B70u; return; } if (c.pc != 0x0027E6E8u) [[unlikely]] return; }
L_0027E6E8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[3], c.r[3].w[0] - 912u);
    set32(c.r[2], c.r[2].w[0] - 20016u);
    st32((c.r[17].w[0] + 56u), c.r[3].w[0]);
    set32(c.r[4], 0u + 64u);
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    set32(c.r[3], c.r[29].w[0] + 48u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027E710u); st128((c.r[3].w[0]) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0027E710u) [[unlikely]] return; }
L_0027E710:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0027E77C; } }
    set32(c.r[7], ld32((c.r[17].w[0] + 4u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[5], c.r[5].w[0] + 6048u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 5952u);
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[6], c.r[2].w[0] + 32u);
    set32(c.r[4], c.r[29].w[0] + 76u);
    st32((c.r[2].w[0] + 16u), c.r[5].w[0]);
    st32((c.r[2].w[0] + 12u), c.r[7].w[0]);
    st32((c.r[2].w[0]), 0u);
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 8u), 0u);
    st32((c.r[2].w[0] + 16u), c.r[3].w[0]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[3]);
    st128((c.r[2].w[0] + 32u) & ~15u, c.r[3]);
    set32(c.r[2], ld32((c.r[2].w[0] + 12u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20u)));
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027E76Cu); set32(c.r[5], c.r[2].w[0] + 224u);  if (depth < kMaxDepth) unit_005C(c, 29u, depth + 1u); else { c.pc = 0x002705F0u; return; } if (c.pc != 0x0027E76Cu) [[unlikely]] return; }
L_0027E76C:
    c.r[3].d[0] = ld16((c.r[29].w[0] + 76u));
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st16((c.r[16].w[0] + 48u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
L_0027E77C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027E784u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 98u, depth + 1u); else { c.pc = 0x00271A60u; return; } if (c.pc != 0x0027E784u) [[unlikely]] return; }
L_0027E784:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027E78Cu); set32(c.r[4], 0u + 20u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0027E78Cu) [[unlikely]] return; }
L_0027E78C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0027E7C4; } }
    set32(c.r[5], ld32((c.r[17].w[0] + 4u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[4], c.r[4].w[0] + 6048u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 1792u);
    st32((c.r[2].w[0] + 16u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 12u), c.r[5].w[0]);
    st32((c.r[2].w[0]), 0u);
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 8u), 0u);
    st32((c.r[2].w[0] + 16u), c.r[3].w[0]);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 12;
L_0027E7C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027E7CCu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 98u, depth + 1u); else { c.pc = 0x00271A60u; return; } if (c.pc != 0x0027E7CCu) [[unlikely]] return; }
L_0027E7CC:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0027E7F0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0027E838; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 912u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027E820u); st32((c.r[17].w[0] + 56u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_005C(c, 111u, depth + 1u); else { c.pc = 0x00271C40u; return; } if (c.pc != 0x0027E820u) [[unlikely]] return; }
L_0027E820:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0027E83C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027E838u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x0027E838u) [[unlikely]] return; }
L_0027E838:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0027E83C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0027E850:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 1u);  c.pc = t; return; }
L_0027E860:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0027E8A8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 896u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027E890u); st32((c.r[17].w[0] + 56u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_005C(c, 111u, depth + 1u); else { c.pc = 0x00271C40u; return; } if (c.pc != 0x0027E890u) [[unlikely]] return; }
L_0027E890:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0027E8AC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027E8A8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x0027E8A8u) [[unlikely]] return; }
L_0027E8A8:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0027E8AC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0027E8C0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 1u);  c.pc = t; return; }
L_0027E8D0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0027E918; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 880u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027E900u); st32((c.r[17].w[0] + 56u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_005C(c, 111u, depth + 1u); else { c.pc = 0x00271C40u; return; } if (c.pc != 0x0027E900u) [[unlikely]] return; }
L_0027E900:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0027E91C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027E918u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x0027E918u) [[unlikely]] return; }
L_0027E918:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0027E91C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0027E930:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 1u);  c.pc = t; return; }
L_0027E940:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0027E988; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 864u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027E970u); st32((c.r[17].w[0] + 56u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_005C(c, 111u, depth + 1u); else { c.pc = 0x00271C40u; return; } if (c.pc != 0x0027E970u) [[unlikely]] return; }
L_0027E970:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0027E98C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027E988u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x0027E988u) [[unlikely]] return; }
L_0027E988:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0027E98C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0027E9A0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 1u);  c.pc = t; return; }
L_0027E9B0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0027E9F8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 848u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027E9E0u); st32((c.r[17].w[0] + 56u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_005C(c, 111u, depth + 1u); else { c.pc = 0x00271C40u; return; } if (c.pc != 0x0027E9E0u) [[unlikely]] return; }
L_0027E9E0:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0027E9FC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027E9F8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x0027E9F8u) [[unlikely]] return; }
L_0027E9F8:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0027E9FC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0027EA10:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 1u);  c.pc = t; return; }
L_0027EA20:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0027EA68; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 832u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027EA50u); st32((c.r[17].w[0] + 56u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_005C(c, 111u, depth + 1u); else { c.pc = 0x00271C40u; return; } if (c.pc != 0x0027EA50u) [[unlikely]] return; }
L_0027EA50:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0027EA6C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027EA68u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x0027EA68u) [[unlikely]] return; }
L_0027EA68:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0027EA6C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0027EA80:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 1u);  c.pc = t; return; }
L_0027EA90:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0027EAD8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 816u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027EAC0u); st32((c.r[17].w[0] + 56u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_005C(c, 111u, depth + 1u); else { c.pc = 0x00271C40u; return; } if (c.pc != 0x0027EAC0u) [[unlikely]] return; }
L_0027EAC0:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0027EADC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027EAD8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x0027EAD8u) [[unlikely]] return; }
L_0027EAD8:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0027EADC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0027EAF0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 1u);  c.pc = t; return; }
L_0027EB00:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0027EB48; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 800u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027EB30u); st32((c.r[17].w[0] + 56u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_005C(c, 111u, depth + 1u); else { c.pc = 0x00271C40u; return; } if (c.pc != 0x0027EB30u) [[unlikely]] return; }
L_0027EB30:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0027EB4C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027EB48u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x0027EB48u) [[unlikely]] return; }
L_0027EB48:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0027EB4C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0027EB60:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 1u);  c.pc = t; return; }
L_0027EB70:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0027EBB8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 784u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027EBA0u); st32((c.r[17].w[0] + 56u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_005C(c, 111u, depth + 1u); else { c.pc = 0x00271C40u; return; } if (c.pc != 0x0027EBA0u) [[unlikely]] return; }
L_0027EBA0:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0027EBBC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027EBB8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x0027EBB8u) [[unlikely]] return; }
L_0027EBB8:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0027EBBC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0027EBD0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 1u);  c.pc = t; return; }
L_0027EBE0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0027EC28; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 768u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027EC10u); st32((c.r[17].w[0] + 56u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_005C(c, 111u, depth + 1u); else { c.pc = 0x00271C40u; return; } if (c.pc != 0x0027EC10u) [[unlikely]] return; }
L_0027EC10:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0027EC2C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027EC28u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x0027EC28u) [[unlikely]] return; }
L_0027EC28:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0027EC2C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0027EC40:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 1u);  c.pc = t; return; }
L_0027EC50:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0027EC98; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 752u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027EC80u); st32((c.r[17].w[0] + 56u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_005C(c, 111u, depth + 1u); else { c.pc = 0x00271C40u; return; } if (c.pc != 0x0027EC80u) [[unlikely]] return; }
L_0027EC80:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0027EC9C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027EC98u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x0027EC98u) [[unlikely]] return; }
L_0027EC98:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0027EC9C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0027ECB0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 1u);  c.pc = t; return; }
L_0027ECC0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0027ED08; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 736u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027ECF0u); st32((c.r[17].w[0] + 56u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_005C(c, 111u, depth + 1u); else { c.pc = 0x00271C40u; return; } if (c.pc != 0x0027ECF0u) [[unlikely]] return; }
L_0027ECF0:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0027ED0C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027ED08u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x0027ED08u) [[unlikely]] return; }
L_0027ED08:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0027ED0C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0027ED20:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 1u);  c.pc = t; return; }
L_0027ED30:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0027ED78; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 720u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027ED60u); st32((c.r[17].w[0] + 56u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_005C(c, 111u, depth + 1u); else { c.pc = 0x00271C40u; return; } if (c.pc != 0x0027ED60u) [[unlikely]] return; }
L_0027ED60:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0027ED7C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027ED78u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x0027ED78u) [[unlikely]] return; }
L_0027ED78:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0027ED7C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0027ED90:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 1u);  c.pc = t; return; }
L_0027EDA0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0027EDE8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 704u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027EDD0u); st32((c.r[17].w[0] + 56u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_005C(c, 111u, depth + 1u); else { c.pc = 0x00271C40u; return; } if (c.pc != 0x0027EDD0u) [[unlikely]] return; }
L_0027EDD0:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0027EDEC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027EDE8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x0027EDE8u) [[unlikely]] return; }
L_0027EDE8:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0027EDEC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0027EE00:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 1u);  c.pc = t; return; }
L_0027EE10:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0027EE58; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 688u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027EE40u); st32((c.r[17].w[0] + 56u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_005C(c, 111u, depth + 1u); else { c.pc = 0x00271C40u; return; } if (c.pc != 0x0027EE40u) [[unlikely]] return; }
L_0027EE40:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0027EE5C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027EE58u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x0027EE58u) [[unlikely]] return; }
L_0027EE58:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0027EE5C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0027EE70:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 1u);  c.pc = t; return; }
L_0027EE80:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0027EEC8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 672u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027EEB0u); st32((c.r[17].w[0] + 56u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_005C(c, 111u, depth + 1u); else { c.pc = 0x00271C40u; return; } if (c.pc != 0x0027EEB0u) [[unlikely]] return; }
L_0027EEB0:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0027EECC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027EEC8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x0027EEC8u) [[unlikely]] return; }
L_0027EEC8:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0027EECC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0027EEE0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 1u);  c.pc = t; return; }
L_0027EEF0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0027EF38; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 656u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027EF20u); st32((c.r[17].w[0] + 56u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_005C(c, 111u, depth + 1u); else { c.pc = 0x00271C40u; return; } if (c.pc != 0x0027EF20u) [[unlikely]] return; }
L_0027EF20:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0027EF3C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027EF38u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x0027EF38u) [[unlikely]] return; }
L_0027EF38:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0027EF3C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0027EF50:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 1u);  c.pc = t; return; }
L_0027EF60:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0027EFA8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 640u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027EF90u); st32((c.r[17].w[0] + 56u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_005C(c, 111u, depth + 1u); else { c.pc = 0x00271C40u; return; } if (c.pc != 0x0027EF90u) [[unlikely]] return; }
L_0027EF90:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0027EFAC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027EFA8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x0027EFA8u) [[unlikely]] return; }
L_0027EFA8:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0027EFAC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0027EFC0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 1u);  c.pc = t; return; }
L_0027EFD0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0027F018; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 624u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027F000u); st32((c.r[17].w[0] + 56u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_005C(c, 111u, depth + 1u); else { c.pc = 0x00271C40u; return; } if (c.pc != 0x0027F000u) [[unlikely]] return; }
L_0027F000:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0027F01C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027F018u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x0027F018u) [[unlikely]] return; }
L_0027F018:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0027F01C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0027F030:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 1u);  c.pc = t; return; }
L_0027F040:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0027F088; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 608u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027F070u); st32((c.r[17].w[0] + 56u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_005C(c, 111u, depth + 1u); else { c.pc = 0x00271C40u; return; } if (c.pc != 0x0027F070u) [[unlikely]] return; }
L_0027F070:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0027F08C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027F088u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x0027F088u) [[unlikely]] return; }
L_0027F088:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0027F08C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0027F0A0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 1u);  c.pc = t; return; }
L_0027F0B0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0027F0F8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 592u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027F0E0u); st32((c.r[17].w[0] + 56u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_005C(c, 111u, depth + 1u); else { c.pc = 0x00271C40u; return; } if (c.pc != 0x0027F0E0u) [[unlikely]] return; }
L_0027F0E0:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0027F0FC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027F0F8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x0027F0F8u) [[unlikely]] return; }
L_0027F0F8:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0027F0FC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0027F110:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 1u);  c.pc = t; return; }
L_0027F120:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0027F168; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 576u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027F150u); st32((c.r[17].w[0] + 56u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_005C(c, 111u, depth + 1u); else { c.pc = 0x00271C40u; return; } if (c.pc != 0x0027F150u) [[unlikely]] return; }
L_0027F150:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0027F16C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027F168u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x0027F168u) [[unlikely]] return; }
L_0027F168:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0027F16C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0027F180:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 1u);  c.pc = t; return; }
L_0027F190:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0027F1D8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 560u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027F1C0u); st32((c.r[17].w[0] + 56u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_005C(c, 111u, depth + 1u); else { c.pc = 0x00271C40u; return; } if (c.pc != 0x0027F1C0u) [[unlikely]] return; }
L_0027F1C0:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0027F1DC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027F1D8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x0027F1D8u) [[unlikely]] return; }
L_0027F1D8:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0027F1DC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0027F1F0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 1u);  c.pc = t; return; }
L_0027F200:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0027F248; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 544u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027F230u); st32((c.r[17].w[0] + 56u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_005C(c, 111u, depth + 1u); else { c.pc = 0x00271C40u; return; } if (c.pc != 0x0027F230u) [[unlikely]] return; }
L_0027F230:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0027F24C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027F248u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x0027F248u) [[unlikely]] return; }
L_0027F248:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0027F24C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0027F260:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 1u);  c.pc = t; return; }
L_0027F270:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0027F2B8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 528u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027F2A0u); st32((c.r[17].w[0] + 56u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_005C(c, 111u, depth + 1u); else { c.pc = 0x00271C40u; return; } if (c.pc != 0x0027F2A0u) [[unlikely]] return; }
L_0027F2A0:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0027F2BC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027F2B8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x0027F2B8u) [[unlikely]] return; }
L_0027F2B8:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0027F2BC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0027F2D0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 1u);  c.pc = t; return; }
L_0027F2E0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0027F328; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 512u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027F310u); st32((c.r[17].w[0] + 56u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_005C(c, 111u, depth + 1u); else { c.pc = 0x00271C40u; return; } if (c.pc != 0x0027F310u) [[unlikely]] return; }
L_0027F310:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0027F32C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027F328u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x0027F328u) [[unlikely]] return; }
L_0027F328:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0027F32C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0027F340:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 1u);  c.pc = t; return; }
L_0027F350:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0027F398; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 496u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027F380u); st32((c.r[17].w[0] + 56u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_005C(c, 111u, depth + 1u); else { c.pc = 0x00271C40u; return; } if (c.pc != 0x0027F380u) [[unlikely]] return; }
L_0027F380:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0027F39C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027F398u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x0027F398u) [[unlikely]] return; }
L_0027F398:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0027F39C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0027F3B0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 1u);  c.pc = t; return; }
L_0027F3C0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0027F408; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 480u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027F3F0u); st32((c.r[17].w[0] + 56u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_005C(c, 111u, depth + 1u); else { c.pc = 0x00271C40u; return; } if (c.pc != 0x0027F3F0u) [[unlikely]] return; }
L_0027F3F0:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0027F40C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027F408u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x0027F408u) [[unlikely]] return; }
L_0027F408:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0027F40C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0027F420:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 1u);  c.pc = t; return; }
L_0027F430:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0027F478; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 464u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027F460u); st32((c.r[17].w[0] + 56u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_005C(c, 111u, depth + 1u); else { c.pc = 0x00271C40u; return; } if (c.pc != 0x0027F460u) [[unlikely]] return; }
L_0027F460:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0027F47C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027F478u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x0027F478u) [[unlikely]] return; }
L_0027F478:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0027F47C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0027F490:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 1u);  c.pc = t; return; }
L_0027F4A0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0027F4E8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 448u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027F4D0u); st32((c.r[17].w[0] + 56u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_005C(c, 111u, depth + 1u); else { c.pc = 0x00271C40u; return; } if (c.pc != 0x0027F4D0u) [[unlikely]] return; }
L_0027F4D0:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0027F4EC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027F4E8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x0027F4E8u) [[unlikely]] return; }
L_0027F4E8:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0027F4EC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0027F500:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 1u);  c.pc = t; return; }
L_0027F510:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0027F558; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 432u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027F540u); st32((c.r[17].w[0] + 56u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_005C(c, 111u, depth + 1u); else { c.pc = 0x00271C40u; return; } if (c.pc != 0x0027F540u) [[unlikely]] return; }
L_0027F540:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0027F55C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027F558u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x0027F558u) [[unlikely]] return; }
L_0027F558:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0027F55C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0027F570:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 1u);  c.pc = t; return; }
L_0027F580:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0027F5C8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 416u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027F5B0u); st32((c.r[17].w[0] + 56u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_005C(c, 111u, depth + 1u); else { c.pc = 0x00271C40u; return; } if (c.pc != 0x0027F5B0u) [[unlikely]] return; }
L_0027F5B0:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0027F5CC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027F5C8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x0027F5C8u) [[unlikely]] return; }
L_0027F5C8:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0027F5CC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0027F5E0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 1u);  c.pc = t; return; }
L_0027F5F0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0027F638; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 400u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027F620u); st32((c.r[17].w[0] + 56u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_005C(c, 111u, depth + 1u); else { c.pc = 0x00271C40u; return; } if (c.pc != 0x0027F620u) [[unlikely]] return; }
L_0027F620:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0027F63C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027F638u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x0027F638u) [[unlikely]] return; }
L_0027F638:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0027F63C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0027F650:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 1u);  c.pc = t; return; }
L_0027F660:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0027F6A8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 384u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027F690u); st32((c.r[17].w[0] + 56u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_005C(c, 111u, depth + 1u); else { c.pc = 0x00271C40u; return; } if (c.pc != 0x0027F690u) [[unlikely]] return; }
L_0027F690:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0027F6AC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027F6A8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x0027F6A8u) [[unlikely]] return; }
L_0027F6A8:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0027F6AC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0027F6C0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 1u);  c.pc = t; return; }
L_0027F6D0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0027F718; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 368u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027F700u); st32((c.r[17].w[0] + 56u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_005C(c, 111u, depth + 1u); else { c.pc = 0x00271C40u; return; } if (c.pc != 0x0027F700u) [[unlikely]] return; }
L_0027F700:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0027F71C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027F718u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x0027F718u) [[unlikely]] return; }
L_0027F718:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0027F71C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0027F730:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 1u);  c.pc = t; return; }
L_0027F740:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0027F788; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 352u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027F770u); st32((c.r[17].w[0] + 56u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_005C(c, 111u, depth + 1u); else { c.pc = 0x00271C40u; return; } if (c.pc != 0x0027F770u) [[unlikely]] return; }
L_0027F770:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0027F78C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027F788u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x0027F788u) [[unlikely]] return; }
L_0027F788:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0027F78C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0027F7A0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 1u);  c.pc = t; return; }
L_0027F7B0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0027F7F8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 336u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027F7E0u); st32((c.r[17].w[0] + 56u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_005C(c, 111u, depth + 1u); else { c.pc = 0x00271C40u; return; } if (c.pc != 0x0027F7E0u) [[unlikely]] return; }
L_0027F7E0:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0027F7FC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027F7F8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x0027F7F8u) [[unlikely]] return; }
L_0027F7F8:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0027F7FC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0027F810:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 1u);  c.pc = t; return; }
L_0027F820:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0027F868; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 320u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027F850u); st32((c.r[17].w[0] + 56u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_005C(c, 111u, depth + 1u); else { c.pc = 0x00271C40u; return; } if (c.pc != 0x0027F850u) [[unlikely]] return; }
L_0027F850:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0027F86C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027F868u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x0027F868u) [[unlikely]] return; }
L_0027F868:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0027F86C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0027F880:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 1u);  c.pc = t; return; }
L_0027F890:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0027F8D8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 304u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027F8C0u); st32((c.r[17].w[0] + 56u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_005C(c, 111u, depth + 1u); else { c.pc = 0x00271C40u; return; } if (c.pc != 0x0027F8C0u) [[unlikely]] return; }
L_0027F8C0:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0027F8DC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027F8D8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x0027F8D8u) [[unlikely]] return; }
L_0027F8D8:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0027F8DC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0027F8F0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 1u);  c.pc = t; return; }
L_0027F900:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0027F948; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 288u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027F930u); st32((c.r[17].w[0] + 56u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_005C(c, 111u, depth + 1u); else { c.pc = 0x00271C40u; return; } if (c.pc != 0x0027F930u) [[unlikely]] return; }
L_0027F930:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0027F94C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027F948u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x0027F948u) [[unlikely]] return; }
L_0027F948:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0027F94C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0027F960:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 1u);  c.pc = t; return; }
L_0027F970:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0027F9B8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 272u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027F9A0u); st32((c.r[17].w[0] + 56u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_005C(c, 111u, depth + 1u); else { c.pc = 0x00271C40u; return; } if (c.pc != 0x0027F9A0u) [[unlikely]] return; }
L_0027F9A0:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0027F9BC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027F9B8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x0027F9B8u) [[unlikely]] return; }
L_0027F9B8:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0027F9BC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0027F9D0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 1u);  c.pc = t; return; }
L_0027F9E0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0027FA28; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 256u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027FA10u); st32((c.r[17].w[0] + 56u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_005C(c, 111u, depth + 1u); else { c.pc = 0x00271C40u; return; } if (c.pc != 0x0027FA10u) [[unlikely]] return; }
L_0027FA10:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0027FA2C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027FA28u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x0027FA28u) [[unlikely]] return; }
L_0027FA28:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0027FA2C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0027FA40:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 1u);  c.pc = t; return; }
L_0027FA50:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0027FA98; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 240u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027FA80u); st32((c.r[17].w[0] + 56u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_005C(c, 111u, depth + 1u); else { c.pc = 0x00271C40u; return; } if (c.pc != 0x0027FA80u) [[unlikely]] return; }
L_0027FA80:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0027FA9C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027FA98u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x0027FA98u) [[unlikely]] return; }
L_0027FA98:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0027FA9C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0027FAB0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 1u);  c.pc = t; return; }
L_0027FAC0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0027FB08; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 224u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027FAF0u); st32((c.r[17].w[0] + 56u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_005C(c, 111u, depth + 1u); else { c.pc = 0x00271C40u; return; } if (c.pc != 0x0027FAF0u) [[unlikely]] return; }
L_0027FAF0:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0027FB0C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027FB08u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x0027FB08u) [[unlikely]] return; }
L_0027FB08:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0027FB0C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0027FB20:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 1u);  c.pc = t; return; }
L_0027FB30:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0027FB78; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 208u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027FB60u); st32((c.r[17].w[0] + 56u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_005C(c, 111u, depth + 1u); else { c.pc = 0x00271C40u; return; } if (c.pc != 0x0027FB60u) [[unlikely]] return; }
L_0027FB60:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0027FB7C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027FB78u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x0027FB78u) [[unlikely]] return; }
L_0027FB78:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0027FB7C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0027FB90:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 1u);  c.pc = t; return; }
L_0027FBA0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0027FBE8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 192u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027FBD0u); st32((c.r[17].w[0] + 56u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_005C(c, 111u, depth + 1u); else { c.pc = 0x00271C40u; return; } if (c.pc != 0x0027FBD0u) [[unlikely]] return; }
L_0027FBD0:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0027FBEC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027FBE8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x0027FBE8u) [[unlikely]] return; }
L_0027FBE8:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0027FBEC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0027FC00:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 1u);  c.pc = t; return; }
L_0027FC10:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0027FC58; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 176u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027FC40u); st32((c.r[17].w[0] + 56u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_005C(c, 111u, depth + 1u); else { c.pc = 0x00271C40u; return; } if (c.pc != 0x0027FC40u) [[unlikely]] return; }
L_0027FC40:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0027FC5C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027FC58u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x0027FC58u) [[unlikely]] return; }
L_0027FC58:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0027FC5C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0027FC70:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 1u);  c.pc = t; return; }
L_0027FC80:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0027FCC8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 160u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027FCB0u); st32((c.r[17].w[0] + 56u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_005C(c, 111u, depth + 1u); else { c.pc = 0x00271C40u; return; } if (c.pc != 0x0027FCB0u) [[unlikely]] return; }
L_0027FCB0:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0027FCCC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027FCC8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x0027FCC8u) [[unlikely]] return; }
L_0027FCC8:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0027FCCC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0027FCE0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 1u);  c.pc = t; return; }
L_0027FCF0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0027FD38; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 144u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027FD20u); st32((c.r[17].w[0] + 56u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_005C(c, 111u, depth + 1u); else { c.pc = 0x00271C40u; return; } if (c.pc != 0x0027FD20u) [[unlikely]] return; }
L_0027FD20:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0027FD3C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027FD38u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x0027FD38u) [[unlikely]] return; }
L_0027FD38:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0027FD3C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0027FD50:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 1u);  c.pc = t; return; }
L_0027FD60:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0027FDA8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 128u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027FD90u); st32((c.r[17].w[0] + 56u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_005C(c, 111u, depth + 1u); else { c.pc = 0x00271C40u; return; } if (c.pc != 0x0027FD90u) [[unlikely]] return; }
L_0027FD90:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0027FDAC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027FDA8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x0027FDA8u) [[unlikely]] return; }
L_0027FDA8:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0027FDAC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0027FDC0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 1u);  c.pc = t; return; }
L_0027FDD0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0027FE18; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 112u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027FE00u); st32((c.r[17].w[0] + 56u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_005C(c, 111u, depth + 1u); else { c.pc = 0x00271C40u; return; } if (c.pc != 0x0027FE00u) [[unlikely]] return; }
L_0027FE00:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0027FE1C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027FE18u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x0027FE18u) [[unlikely]] return; }
L_0027FE18:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0027FE1C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0027FE30:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 1u);  c.pc = t; return; }
L_0027FE40:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0027FE88; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 96u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027FE70u); st32((c.r[17].w[0] + 56u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_005C(c, 111u, depth + 1u); else { c.pc = 0x00271C40u; return; } if (c.pc != 0x0027FE70u) [[unlikely]] return; }
L_0027FE70:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0027FE8C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027FE88u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x0027FE88u) [[unlikely]] return; }
L_0027FE88:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0027FE8C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0027FEA0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 1u);  c.pc = t; return; }
L_0027FEB0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0027FEF8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 80u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027FEE0u); st32((c.r[17].w[0] + 56u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_005C(c, 111u, depth + 1u); else { c.pc = 0x00271C40u; return; } if (c.pc != 0x0027FEE0u) [[unlikely]] return; }
L_0027FEE0:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0027FEFC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027FEF8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x0027FEF8u) [[unlikely]] return; }
L_0027FEF8:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0027FEFC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0027FF10:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 1u);  c.pc = t; return; }
L_0027FF20:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0027FF68; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 64u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027FF50u); st32((c.r[17].w[0] + 56u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_005C(c, 111u, depth + 1u); else { c.pc = 0x00271C40u; return; } if (c.pc != 0x0027FF50u) [[unlikely]] return; }
L_0027FF50:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0027FF6C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027FF68u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x0027FF68u) [[unlikely]] return; }
L_0027FF68:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0027FF6C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0027FF80:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 1u);  c.pc = t; return; }
L_0027FF90:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0027FFD8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 48u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027FFC0u); st32((c.r[17].w[0] + 56u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_005C(c, 111u, depth + 1u); else { c.pc = 0x00271C40u; return; } if (c.pc != 0x0027FFC0u) [[unlikely]] return; }
L_0027FFC0:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0027FFDC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027FFD8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x0027FFD8u) [[unlikely]] return; }
L_0027FFD8:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0027FFDC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0027FFF0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 1u);  c.pc = t; return; }
}

}
