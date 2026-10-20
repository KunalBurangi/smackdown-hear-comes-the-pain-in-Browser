#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0048[4096] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 3, 0, 0, 0, 0, 4, 5, 0, 6, 0, 0, 7, 0, 0, 0, 0, 8,
    0, 0, 0, 0, 0, 0, 9, 0, 10, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 14,
    0, 0, 15, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 19, 0, 0,
    0, 0, 0, 0, 20, 0, 0, 0, 0, 21, 0, 0, 22, 0, 0, 0, 23, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0,
    26, 0, 0, 27, 0, 28, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 32, 0, 0, 0,
    0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 34, 0, 35, 0, 0, 36, 0, 0, 0, 0,
    0, 0, 37, 0, 0, 0, 38, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 41, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 43, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 46, 0, 0, 0, 0, 0, 47, 0, 0, 0, 48, 0, 0, 49,
    0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 53, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0,
    60, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0, 62, 0, 0, 63, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 66,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0,
    0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 78, 0, 0, 0, 0, 0, 79, 0, 0, 0, 80, 0, 0, 81, 0, 0, 0, 0, 82, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    85, 0, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    88, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 0, 0,
    0, 94, 0, 0, 0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 98, 0, 0, 99, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 105, 0,
    0, 0, 0, 0, 106, 0, 0, 0, 107, 0, 0, 108, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    111, 0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 113, 0,
    0, 0, 0, 114, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 117, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 120, 0, 0, 121, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 122, 0, 0, 123,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 124, 0, 0,
    125, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 126, 0, 0, 127, 0, 0, 128, 0, 0, 0, 0, 129, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 131, 0, 0, 0, 0, 0, 132, 0, 0, 0, 133, 0, 0, 134, 0, 0, 0, 0,
    135, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 0, 0, 138, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 140, 0, 141, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 145, 0, 0, 0, 146,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 147, 0, 0, 148, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 150, 0, 0, 151, 0,
    0, 152, 0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 154, 0, 0, 0, 0, 155, 0, 0, 0, 156, 0, 0, 0, 0, 0, 157, 0, 0,
    158, 0, 0, 0, 159, 0, 0, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 161, 0, 162, 0, 0, 163, 0, 0, 0, 0, 164,
    0, 0, 165, 0, 0, 0, 0, 0, 0, 166, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 170, 0, 0,
    0, 0, 0, 171, 0, 0, 172, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0, 0, 0, 175, 0, 176,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 177, 0, 0, 0, 178, 0, 0, 0, 0, 0, 179, 0, 180, 0, 0, 0, 0, 0, 0, 0, 181, 0, 0,
    182, 0, 183, 0, 0, 0, 184, 0, 0, 185, 0, 186, 0, 187, 0, 188, 0, 0, 189, 0, 190, 0, 0, 191, 192, 0, 0, 193, 0, 0, 0, 0,
    0, 194, 0, 195, 0, 196, 0, 0, 197, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 199, 0, 0, 0, 200, 0, 0, 201, 0, 0, 0, 0, 0,
    202, 0, 0, 203, 0, 0, 0, 0, 0, 204, 0, 0, 205, 0, 0, 0, 0, 0, 206, 0, 207, 0, 208, 0, 209, 0, 210, 0, 211, 0, 212, 0,
    213, 0, 214, 0, 215, 0, 216, 0, 0, 217, 0, 0, 0, 0, 0, 218, 0, 0, 0, 0, 219, 0, 0, 0, 0, 0, 220, 0, 0, 0, 0, 221,
    0, 0, 0, 0, 0, 222, 0, 0, 0, 0, 223, 0, 0, 0, 0, 0, 0, 0, 224, 0, 225, 0, 0, 0, 0, 226, 0, 0, 0, 0, 0, 227,
    0, 0, 0, 0, 228, 0, 0, 0, 0, 0, 0, 0, 229, 0, 0, 0, 230, 0, 231, 0, 0, 232, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 233, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 234, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 235, 0, 0, 0, 0, 0,
    0, 236, 0, 0, 237, 0, 0, 0, 0, 0, 0, 0, 0, 0, 238, 0, 0, 0, 0, 0, 239, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    240, 0, 0, 0, 0, 0, 241, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 242, 0, 0, 0, 0, 243, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 244, 0, 0, 0, 0, 0, 245, 0, 0, 0, 0, 0, 0, 0, 246, 0, 0, 0, 0, 247, 0, 0, 248, 0, 0, 249, 0, 0,
    250, 0, 0, 251, 0, 0, 0, 0, 0, 252, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 253, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 254,
    0, 0, 0, 0, 255, 0, 256, 0, 0, 0, 0, 257, 0, 0, 0, 0, 258, 0, 259, 0, 0, 0, 0, 0, 0, 0, 0, 260, 0, 261, 0, 0,
    0, 0, 262, 0, 0, 0, 0, 263, 0, 0, 0, 0, 0, 264, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 265, 0, 0, 266, 0, 0, 0, 0, 0, 267, 0, 268, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 269, 0, 0, 0,
    0, 0, 0, 0, 0, 270, 0, 0, 0, 0, 0, 0, 0, 271, 0, 272, 0, 0, 0, 0, 0, 273, 0, 0, 274, 0, 0, 0, 0, 0, 0, 275,
    0, 276, 0, 0, 0, 0, 277, 0, 0, 0, 0, 278, 0, 0, 0, 0, 0, 279, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 280, 0, 0, 281, 0, 0, 0, 0, 0, 0, 282, 0, 283,
    0, 0, 0, 0, 0, 0, 0, 0, 284, 0, 0, 0, 0, 0, 0, 0, 0, 0, 285, 0, 286, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 287,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 288, 0, 289, 0, 0, 0, 0, 0, 0, 0, 0, 290, 0, 0, 0, 291, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 292, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 293, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 294, 0, 0, 0, 0, 0, 0, 0, 0, 295, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 296, 0, 0, 0, 0, 0, 297, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 298, 0,
    0, 0, 299, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 300, 0, 0, 0, 301, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 302, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 303, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 304, 0, 0, 0, 305, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 306, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 307, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 308, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 309, 0, 0, 0, 0, 0, 0, 0, 310, 0, 0, 0, 311, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 312, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 313, 0, 0, 0, 0, 314, 0, 0, 0, 0, 315, 0, 316, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    317, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 318, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 319, 0, 0, 0, 0, 320, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 321, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 322, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    323, 0, 324, 0, 0, 0, 0, 0, 0, 0, 0, 0, 325, 0, 0, 0, 0, 0, 326, 0, 0, 0, 0, 0, 0, 327, 0, 0, 0, 0, 0, 0,
    328, 0, 0, 0, 329, 0, 0, 0, 0, 0, 0, 330, 0, 0, 0, 0, 0, 0, 331, 0, 0, 0, 0, 0, 0, 332, 0, 0, 0, 0, 0, 0,
    333, 0, 0, 0, 0, 0, 0, 334, 0, 0, 0, 0, 0, 0, 335, 0, 0, 0, 0, 0, 336, 0, 0, 0, 337, 0, 0, 0, 0, 0, 0, 338,
    0, 0, 0, 0, 0, 0, 339, 0, 0, 0, 0, 0, 0, 340, 0, 0, 0, 0, 0, 0, 341, 0, 0, 0, 0, 0, 0, 342, 0, 0, 0, 0,
    0, 0, 343, 0, 0, 0, 0, 0, 344, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 345, 0, 0, 346, 0, 0, 0, 0,
    0, 347, 0, 0, 0, 0, 0, 0, 348, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 349, 0, 0, 350, 0, 0, 0, 0,
    0, 351, 0, 0, 0, 0, 0, 0, 352, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 353, 0, 0, 354, 0, 0, 0, 0,
    0, 355, 0, 0, 0, 0, 0, 0, 356, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 357, 0, 0, 358, 0,
    0, 359, 0, 0, 0, 0, 0, 360, 0, 0, 0, 0, 0, 0, 0, 0, 361, 0, 0, 0, 362, 0, 0, 0, 363, 0, 0, 0, 364, 0, 0, 0,
    365, 0, 0, 0, 366, 0, 0, 0, 367, 0, 0, 0, 368, 0, 0, 0, 369, 0, 0, 0, 370, 0, 0, 0, 371, 0, 0, 0, 372, 0, 0, 0,
    373, 0, 0, 0, 374, 0, 0, 0, 375, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 376, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 377, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_0048(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_00220000;
    case 2u: goto L_00220038;
    case 3u: goto L_0022003C;
    case 4u: goto L_00220050;
    case 5u: goto L_00220054;
    case 6u: goto L_0022005C;
    case 7u: goto L_00220068;
    case 8u: goto L_0022007C;
    case 9u: goto L_00220098;
    case 10u: goto L_002200A0;
    case 11u: goto L_002200B8;
    case 12u: goto L_002200D0;
    case 13u: goto L_002200E8;
    case 14u: goto L_002200FC;
    case 15u: goto L_00220108;
    case 16u: goto L_00220124;
    case 17u: goto L_00220144;
    case 18u: goto L_00220160;
    case 19u: goto L_00220174;
    case 20u: goto L_00220190;
    case 21u: goto L_002201A4;
    case 22u: goto L_002201B0;
    case 23u: goto L_002201C0;
    case 24u: goto L_002201D4;
    case 25u: goto L_002201EC;
    case 26u: goto L_00220200;
    case 27u: goto L_0022020C;
    case 28u: goto L_00220214;
    case 29u: goto L_00220228;
    case 30u: goto L_00220240;
    case 31u: goto L_00220260;
    case 32u: goto L_00220270;
    case 33u: goto L_00220288;
    case 34u: goto L_002202D8;
    case 35u: goto L_002202E0;
    case 36u: goto L_002202EC;
    case 37u: goto L_00220308;
    case 38u: goto L_00220318;
    case 39u: goto L_00220324;
    case 40u: goto L_00220364;
    case 41u: goto L_00220404;
    case 42u: goto L_0022043C;
    case 43u: goto L_00220484;
    case 44u: goto L_00220498;
    case 45u: goto L_002204BC;
    case 46u: goto L_002204C8;
    case 47u: goto L_002204E0;
    case 48u: goto L_002204F0;
    case 49u: goto L_002204FC;
    case 50u: goto L_00220510;
    case 51u: goto L_0022053C;
    case 52u: goto L_002205E4;
    case 53u: goto L_00220638;
    case 54u: goto L_00220644;
    case 55u: goto L_002206E8;
    case 56u: goto L_00220710;
    case 57u: goto L_00220824;
    case 58u: goto L_00220840;
    case 59u: goto L_002208EC;
    case 60u: goto L_00220900;
    case 61u: goto L_00220914;
    case 62u: goto L_00220934;
    case 63u: goto L_00220940;
    case 64u: goto L_00220958;
    case 65u: goto L_00220AD0;
    case 66u: goto L_00220AFC;
    case 67u: goto L_00220B68;
    case 68u: goto L_00220B94;
    case 69u: goto L_00220BAC;
    case 70u: goto L_00220BD0;
    case 71u: goto L_00220BE8;
    case 72u: goto L_00220C20;
    case 73u: goto L_00220C70;
    case 74u: goto L_00220C8C;
    case 75u: goto L_00220CD0;
    case 76u: goto L_00220CE4;
    case 77u: goto L_00220D1C;
    case 78u: goto L_00220D28;
    case 79u: goto L_00220D40;
    case 80u: goto L_00220D50;
    case 81u: goto L_00220D5C;
    case 82u: goto L_00220D70;
    case 83u: goto L_00220D9C;
    case 84u: goto L_00220E44;
    case 85u: goto L_00220E80;
    case 86u: goto L_00220EA8;
    case 87u: goto L_00220ED0;
    case 88u: goto L_00220F00;
    case 89u: goto L_00220F1C;
    case 90u: goto L_00220F6C;
    case 91u: goto L_00220FA4;
    case 92u: goto L_00220FC8;
    case 93u: goto L_00220FE0;
    case 94u: goto L_00221004;
    case 95u: goto L_0022102C;
    case 96u: goto L_00221048;
    case 97u: goto L_0022105C;
    case 98u: goto L_00221090;
    case 99u: goto L_0022109C;
    case 100u: goto L_002210B4;
    case 101u: goto L_002210D0;
    case 102u: goto L_00221128;
    case 103u: goto L_0022113C;
    case 104u: goto L_0022116C;
    case 105u: goto L_00221178;
    case 106u: goto L_00221190;
    case 107u: goto L_002211A0;
    case 108u: goto L_002211AC;
    case 109u: goto L_002211C0;
    case 110u: goto L_002211EC;
    case 111u: goto L_00221280;
    case 112u: goto L_00221294;
    case 113u: goto L_002212F8;
    case 114u: goto L_0022130C;
    case 115u: goto L_00221318;
    case 116u: goto L_002213A0;
    case 117u: goto L_002213AC;
    case 118u: goto L_002213C4;
    case 119u: goto L_00221460;
    case 120u: goto L_0022146C;
    case 121u: goto L_00221478;
    case 122u: goto L_002214F0;
    case 123u: goto L_002214FC;
    case 124u: goto L_00221574;
    case 125u: goto L_00221580;
    case 126u: goto L_002215CC;
    case 127u: goto L_002215D8;
    case 128u: goto L_002215E4;
    case 129u: goto L_002215F8;
    case 130u: goto L_0022162C;
    case 131u: goto L_00221638;
    case 132u: goto L_00221650;
    case 133u: goto L_00221660;
    case 134u: goto L_0022166C;
    case 135u: goto L_00221680;
    case 136u: goto L_002216AC;
    case 137u: goto L_00221754;
    case 138u: goto L_00221778;
    case 139u: goto L_002217BC;
    case 140u: goto L_002217D8;
    case 141u: goto L_002217E0;
    case 142u: goto L_00221810;
    case 143u: goto L_00221828;
    case 144u: goto L_00221854;
    case 145u: goto L_0022186C;
    case 146u: goto L_0022187C;
    case 147u: goto L_002218AC;
    case 148u: goto L_002218B8;
    case 149u: goto L_002218D0;
    case 150u: goto L_002218EC;
    case 151u: goto L_002218F8;
    case 152u: goto L_00221904;
    case 153u: goto L_00221924;
    case 154u: goto L_00221938;
    case 155u: goto L_0022194C;
    case 156u: goto L_0022195C;
    case 157u: goto L_00221974;
    case 158u: goto L_00221980;
    case 159u: goto L_00221990;
    case 160u: goto L_002219A8;
    case 161u: goto L_002219D4;
    case 162u: goto L_002219DC;
    case 163u: goto L_002219E8;
    case 164u: goto L_002219FC;
    case 165u: goto L_00221A08;
    case 166u: goto L_00221A24;
    case 167u: goto L_00221AA8;
    case 168u: goto L_00221AC8;
    case 169u: goto L_00221AE4;
    case 170u: goto L_00221AF4;
    case 171u: goto L_00221B0C;
    case 172u: goto L_00221B18;
    case 173u: goto L_00221B30;
    case 174u: goto L_00221B4C;
    case 175u: goto L_00221B74;
    case 176u: goto L_00221B7C;
    case 177u: goto L_00221BA4;
    case 178u: goto L_00221BB4;
    case 179u: goto L_00221BCC;
    case 180u: goto L_00221BD4;
    case 181u: goto L_00221BF4;
    case 182u: goto L_00221C00;
    case 183u: goto L_00221C08;
    case 184u: goto L_00221C18;
    case 185u: goto L_00221C24;
    case 186u: goto L_00221C2C;
    case 187u: goto L_00221C34;
    case 188u: goto L_00221C3C;
    case 189u: goto L_00221C48;
    case 190u: goto L_00221C50;
    case 191u: goto L_00221C5C;
    case 192u: goto L_00221C60;
    case 193u: goto L_00221C6C;
    case 194u: goto L_00221C84;
    case 195u: goto L_00221C8C;
    case 196u: goto L_00221C94;
    case 197u: goto L_00221CA0;
    case 198u: goto L_00221CE0;
    case 199u: goto L_00221D4C;
    case 200u: goto L_00221D5C;
    case 201u: goto L_00221D68;
    case 202u: goto L_00221D80;
    case 203u: goto L_00221D8C;
    case 204u: goto L_00221DA4;
    case 205u: goto L_00221DB0;
    case 206u: goto L_00221DC8;
    case 207u: goto L_00221DD0;
    case 208u: goto L_00221DD8;
    case 209u: goto L_00221DE0;
    case 210u: goto L_00221DE8;
    case 211u: goto L_00221DF0;
    case 212u: goto L_00221DF8;
    case 213u: goto L_00221E00;
    case 214u: goto L_00221E08;
    case 215u: goto L_00221E10;
    case 216u: goto L_00221E18;
    case 217u: goto L_00221E24;
    case 218u: goto L_00221E3C;
    case 219u: goto L_00221E50;
    case 220u: goto L_00221E68;
    case 221u: goto L_00221E7C;
    case 222u: goto L_00221E94;
    case 223u: goto L_00221EA8;
    case 224u: goto L_00221EC8;
    case 225u: goto L_00221ED0;
    case 226u: goto L_00221EE4;
    case 227u: goto L_00221EFC;
    case 228u: goto L_00221F10;
    case 229u: goto L_00221F30;
    case 230u: goto L_00221F40;
    case 231u: goto L_00221F48;
    case 232u: goto L_00221F54;
    case 233u: goto L_00221F90;
    case 234u: goto L_00221FBC;
    case 235u: goto L_00221FE8;
    case 236u: goto L_00222004;
    case 237u: goto L_00222010;
    case 238u: goto L_00222038;
    case 239u: goto L_00222050;
    case 240u: goto L_00222080;
    case 241u: goto L_00222098;
    case 242u: goto L_002220C8;
    case 243u: goto L_002220DC;
    case 244u: goto L_00222110;
    case 245u: goto L_00222128;
    case 246u: goto L_00222148;
    case 247u: goto L_0022215C;
    case 248u: goto L_00222168;
    case 249u: goto L_00222174;
    case 250u: goto L_00222180;
    case 251u: goto L_0022218C;
    case 252u: goto L_002221A4;
    case 253u: goto L_002221D0;
    case 254u: goto L_002221FC;
    case 255u: goto L_00222210;
    case 256u: goto L_00222218;
    case 257u: goto L_0022222C;
    case 258u: goto L_00222240;
    case 259u: goto L_00222248;
    case 260u: goto L_0022226C;
    case 261u: goto L_00222274;
    case 262u: goto L_00222288;
    case 263u: goto L_0022229C;
    case 264u: goto L_002222B4;
    case 265u: goto L_00222314;
    case 266u: goto L_00222320;
    case 267u: goto L_00222338;
    case 268u: goto L_00222340;
    case 269u: goto L_00222370;
    case 270u: goto L_00222394;
    case 271u: goto L_002223B4;
    case 272u: goto L_002223BC;
    case 273u: goto L_002223D4;
    case 274u: goto L_002223E0;
    case 275u: goto L_002223FC;
    case 276u: goto L_00222404;
    case 277u: goto L_00222418;
    case 278u: goto L_0022242C;
    case 279u: goto L_00222444;
    case 280u: goto L_002224CC;
    case 281u: goto L_002224D8;
    case 282u: goto L_002224F4;
    case 283u: goto L_002224FC;
    case 284u: goto L_00222520;
    case 285u: goto L_00222548;
    case 286u: goto L_00222550;
    case 287u: goto L_0022257C;
    case 288u: goto L_002225B4;
    case 289u: goto L_002225BC;
    case 290u: goto L_002225E0;
    case 291u: goto L_002225F0;
    case 292u: goto L_002227B0;
    case 293u: goto L_002227E0;
    case 294u: goto L_00222818;
    case 295u: goto L_0022283C;
    case 296u: goto L_00222B28;
    case 297u: goto L_00222B40;
    case 298u: goto L_00222B78;
    case 299u: goto L_00222B88;
    case 300u: goto L_00222C94;
    case 301u: goto L_00222CA4;
    case 302u: goto L_00222CEC;
    case 303u: goto L_00222D18;
    case 304u: goto L_00222DDC;
    case 305u: goto L_00222DEC;
    case 306u: goto L_00222E34;
    case 307u: goto L_00222F54;
    case 308u: goto L_00223058;
    case 309u: goto L_00223090;
    case 310u: goto L_002230B0;
    case 311u: goto L_002230C0;
    case 312u: goto L_002230EC;
    case 313u: goto L_00223320;
    case 314u: goto L_00223334;
    case 315u: goto L_00223348;
    case 316u: goto L_00223350;
    case 317u: goto L_00223380;
    case 318u: goto L_002233AC;
    case 319u: goto L_002235E0;
    case 320u: goto L_002235F4;
    case 321u: goto L_00223620;
    case 322u: goto L_0022364C;
    case 323u: goto L_00223880;
    case 324u: goto L_00223888;
    case 325u: goto L_002238B0;
    case 326u: goto L_002238C8;
    case 327u: goto L_002238E4;
    case 328u: goto L_00223900;
    case 329u: goto L_00223910;
    case 330u: goto L_0022392C;
    case 331u: goto L_00223948;
    case 332u: goto L_00223964;
    case 333u: goto L_00223980;
    case 334u: goto L_0022399C;
    case 335u: goto L_002239B8;
    case 336u: goto L_002239D0;
    case 337u: goto L_002239E0;
    case 338u: goto L_002239FC;
    case 339u: goto L_00223A18;
    case 340u: goto L_00223A34;
    case 341u: goto L_00223A50;
    case 342u: goto L_00223A6C;
    case 343u: goto L_00223A88;
    case 344u: goto L_00223AA0;
    case 345u: goto L_00223AE0;
    case 346u: goto L_00223AEC;
    case 347u: goto L_00223B04;
    case 348u: goto L_00223B20;
    case 349u: goto L_00223B60;
    case 350u: goto L_00223B6C;
    case 351u: goto L_00223B84;
    case 352u: goto L_00223BA0;
    case 353u: goto L_00223BE0;
    case 354u: goto L_00223BEC;
    case 355u: goto L_00223C04;
    case 356u: goto L_00223C20;
    case 357u: goto L_00223C6C;
    case 358u: goto L_00223C78;
    case 359u: goto L_00223C84;
    case 360u: goto L_00223C9C;
    case 361u: goto L_00223CC0;
    case 362u: goto L_00223CD0;
    case 363u: goto L_00223CE0;
    case 364u: goto L_00223CF0;
    case 365u: goto L_00223D00;
    case 366u: goto L_00223D10;
    case 367u: goto L_00223D20;
    case 368u: goto L_00223D30;
    case 369u: goto L_00223D40;
    case 370u: goto L_00223D50;
    case 371u: goto L_00223D60;
    case 372u: goto L_00223D70;
    case 373u: goto L_00223D80;
    case 374u: goto L_00223D90;
    case 375u: goto L_00223DA0;
    case 376u: goto L_00223E14;
    case 377u: goto L_00223EB0;
    default: bad_entry(c, 0x00220000u); return;
    }
L_00220000:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x50000000u);
    st64((c.r[16].w[0]), c.r[6].d[0]);
    c.r[4].d[0] = c.r[30].d[0] + 0ull;
    st128((c.r[22].w[0]) & ~15u, c.r[0]);
    set32(c.r[16], c.r[16].w[0] + 16u);
    st32((c.r[22].w[0] + 8u), c.r[3].w[0]);
    set32(c.r[16], c.r[16].w[0] + 16384u);
    set32(c.r[3], c.r[16].w[0] - c.r[22].w[0]);
    set32(c.r[5], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] >> 4);
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00220038u); st32((c.r[22].w[0] + 12u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0017(c, 91u, depth + 1u); else { c.pc = 0x0015D1F0u; return; } if (c.pc != 0x00220038u) [[unlikely]] return; }
L_00220038:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_0022003C:
    c.r[2].d[0] = c.r[17].sd[0] < 12ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[17].w[0] + 21000u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0021FDE8u | kUnwind; return; } [[clang::musttail]] return unit_0047(c, 457u, depth); } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00220050u); c.r[4].d[0] = c.r[23].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x00220050u) [[unlikely]] return; }
L_00220050:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_00220054:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022005Cu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0016(c, 413u, depth + 1u); else { c.pc = 0x0015B710u; return; } if (c.pc != 0x0022005Cu) [[unlikely]] return; }
L_0022005C:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00220068u); c.r[5].d[0] = 0ull | 40000ull;  if (depth < kMaxDepth) unit_0017(c, 122u, depth + 1u); else { c.pc = 0x0015D740u; return; } if (c.pc != 0x00220068u) [[unlikely]] return; }
L_00220068:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_00220084; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022007Cu); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 142u, depth + 1u); else { c.pc = 0x0015DA70u; return; } if (c.pc != 0x0022007Cu) [[unlikely]] return; }
L_0022007C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00220088; } }
L_00220084:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00220088:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_00220158; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_00220148; } }
L_00220098:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002200A0u); c.r[5].d[0] = 0ull | 40000ull;  if (depth < kMaxDepth) unit_0017(c, 122u, depth + 1u); else { c.pc = 0x0015D740u; return; } if (c.pc != 0x002200A0u) [[unlikely]] return; }
L_002200A0:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002200B8; } }
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002200B8u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 147u, depth + 1u); else { c.pc = 0x0015DBB0u; return; } if (c.pc != 0x002200B8u) [[unlikely]] return; }
L_002200B8:
    c.r[2].d[0] = c.r[16].d[0] & 1ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_002200EC; } }
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002200D0u); c.r[5].d[0] = 0ull | 40100ull;  if (depth < kMaxDepth) unit_0017(c, 122u, depth + 1u); else { c.pc = 0x0015D740u; return; } if (c.pc != 0x002200D0u) [[unlikely]] return; }
L_002200D0:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002200E8; } }
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002200E8u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 147u, depth + 1u); else { c.pc = 0x0015DBB0u; return; } if (c.pc != 0x002200E8u) [[unlikely]] return; }
L_002200E8:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_002200EC:
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002200FCu); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0017(c, 166u, depth + 1u); else { c.pc = 0x0015DEF0u; return; } if (c.pc != 0x002200FCu) [[unlikely]] return; }
L_002200FC:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00220108u); set32(c.r[4], 0u + 272u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00220108u) [[unlikely]] return; }
L_00220108:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], c.r[16].w[0] << 2);  if (t) { goto L_00220128; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.f[12] = c.r[3].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00220124u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0013(c, 243u, depth + 1u); else { c.pc = 0x0014F930u; return; } if (c.pc != 0x00220124u) [[unlikely]] return; }
L_00220124:
    set32(c.r[3], c.r[16].w[0] << 2);
    c.budget -= 1;
L_00220128:
    set32(c.r[3], c.r[3].w[0] + c.r[21].w[0]);
    st32((c.r[3].w[0] + 2388u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0] + 2388u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 152u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00220144u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00220144u) [[unlikely]] return; }
L_00220144:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_00220148:
    c.r[2].d[0] = c.r[16].sd[0] < 16ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00220098u | kUnwind; return; } goto L_00220098; } }
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 1;
L_00220158:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00220160u); c.r[5].d[0] = 0ull | 40001ull;  if (depth < kMaxDepth) unit_0017(c, 122u, depth + 1u); else { c.pc = 0x0015D740u; return; } if (c.pc != 0x00220160u) [[unlikely]] return; }
L_00220160:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_0022017C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00220174u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 142u, depth + 1u); else { c.pc = 0x0015DA70u; return; } if (c.pc != 0x00220174u) [[unlikely]] return; }
L_00220174:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00220180; } }
L_0022017C:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00220180:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00220308; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00220190u); set32(c.r[4], 0u + 8u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00220190u) [[unlikely]] return; }
L_00220190:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[19].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002201A8; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002201A4u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0016(c, 410u, depth + 1u); else { c.pc = 0x0015B6A0u; return; } if (c.pc != 0x002201A4u) [[unlikely]] return; }
L_002201A4:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_002201A8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_002202F0; } }
L_002201B0:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 7234u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002201C0u); c.r[5].d[0] = c.r[2].d[0] & 65535ull;  if (depth < kMaxDepth) unit_0017(c, 122u, depth + 1u); else { c.pc = 0x0015D740u; return; } if (c.pc != 0x002201C0u) [[unlikely]] return; }
L_002201C0:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_002201DC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002201D4u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 152u, depth + 1u); else { c.pc = 0x0015DC50u; return; } if (c.pc != 0x002201D4u) [[unlikely]] return; }
L_002201D4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[22].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002201E4; } }
L_002201DC:
    c.r[2].d[0] = 0ull + 0ull;
    c.r[22].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 2;
L_002201E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002201ECu); set32(c.r[4], 0u + 16u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x002201ECu) [[unlikely]] return; }
L_002201EC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00220204; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00220200u); c.r[5].d[0] = c.r[22].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 89u, depth + 1u); else { c.pc = 0x0015D1B0u; return; } if (c.pc != 0x00220200u) [[unlikely]] return; }
L_00220200:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00220204:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022020Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0047(c, 184u, depth + 1u); else { c.pc = 0x0021E3C0u; return; } if (c.pc != 0x0022020Cu) [[unlikely]] return; }
L_0022020C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00220214u);  if (depth < kMaxDepth) unit_0025(c, 227u, depth + 1u); else { c.pc = 0x00196270u; return; } if (c.pc != 0x00220214u) [[unlikely]] return; }
L_00220214:
    c.r[23].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[23].d[0] == 0ull;  if (t) { goto L_00220270; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00220228u);  if (depth < kMaxDepth) unit_003D(c, 84u, depth + 1u); else { c.pc = 0x001F5400u; return; } if (c.pc != 0x00220228u) [[unlikely]] return; }
L_00220228:
    c.r[3].d[0] = ld8((c.r[2].w[0] + 86u));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00220270; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00220240u);  if (depth < kMaxDepth) unit_003F(c, 299u, depth + 1u); else { c.pc = 0x001FF0D0u; return; } if (c.pc != 0x00220240u) [[unlikely]] return; }
L_00220240:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00420000u);
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 23952u);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00220260u); c.r[9].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0025(c, 230u, depth + 1u); else { c.pc = 0x001962B0u; return; } if (c.pc != 0x00220260u) [[unlikely]] return; }
L_00220260:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00030000u);
    set32(c.r[1], c.r[21].w[0] + c.r[1].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00220270u); st32((c.r[1].w[0] + 4544u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_003F(c, 303u, depth + 1u); else { c.pc = 0x001FF110u; return; } if (c.pc != 0x00220270u) [[unlikely]] return; }
L_00220270:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00420000u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 23952u);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00220288u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0016(c, 424u, depth + 1u); else { c.pc = 0x0015B880u; return; } if (c.pc != 0x00220288u) [[unlikely]] return; }
L_00220288:
    set32(c.r[5], ld32((c.r[19].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], c.r[17].w[0] << 2);
    set32(c.r[4], c.r[17].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] - 28128u);
    set32(c.r[2], c.r[2].w[0] + c.r[21].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[5].w[0])));
    set32(c.r[4], ld32((c.r[4].w[0])));
    set32(c.r[4], ld32((c.r[4].w[0])));
    set32(c.r[4], ld32((c.r[4].w[0] + 44u)));
    c.r[4].d[0] = ld64((c.r[4].w[0]));
    st64((c.r[3].w[0]), c.r[4].d[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 2388u)));
    c.budget -= 16;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002202D8; } }
    c.r[5].d[0] = ld64((c.r[3].w[0]));
    set32(c.r[7], 0u - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002202D8u); c.r[6].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0014(c, 33u, depth + 1u); else { c.pc = 0x001504F0u; return; } if (c.pc != 0x002202D8u) [[unlikely]] return; }
L_002202D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002202E0u); c.r[4].d[0] = c.r[22].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x002202E0u) [[unlikely]] return; }
L_002202E0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002202ECu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0017(c, 91u, depth + 1u); else { c.pc = 0x0015D1F0u; return; } if (c.pc != 0x002202ECu) [[unlikely]] return; }
L_002202EC:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_002202F0:
    c.r[2].d[0] = c.r[17].sd[0] < 16ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[17].w[0] + 32767u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002201B0u | kUnwind; return; } goto L_002201B0; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00220308u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0016(c, 413u, depth + 1u); else { c.pc = 0x0015B710u; return; } if (c.pc != 0x00220308u) [[unlikely]] return; }
L_00220308:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[4].w[0] + 28640u);  if (t) { goto L_00220344; } }
L_00220318:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[4].w[0] + c.r[2].w[0]);  if (t) { goto L_00220334; } }
L_00220324:
    set32(c.r[2], c.r[5].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[5], c.r[5].w[0] + 1u);
    st32((c.r[2].w[0]), 0u);
    c.budget -= 4;
L_00220334:
    c.r[2].d[0] = c.r[5].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00220324u | kUnwind; return; } goto L_00220324; } }
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.budget -= 1;
L_00220344:
    c.r[2].d[0] = c.r[6].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[6].w[0] << 4);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00220318u | kUnwind; return; } goto L_00220318; } }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[6], c.r[6].w[0] + 28640u);
    set32(c.r[5], c.r[5].w[0] + 28768u);
    set32(c.r[4], 0u + 8u);
    c.budget -= 5;
L_00220364:
    set32(c.r[3], ld32((c.r[6].w[0])));
    set32(c.r[4], c.r[4].w[0] - 1u);
    set32(c.r[2], ld32((c.r[6].w[0] + 4u)));
    st32((c.r[5].w[0]), c.r[3].w[0]);
    set32(c.r[6], c.r[6].w[0] + 8u);
    st32((c.r[5].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 8;
    { const bool t = c.r[4].sd[0] > 0; set32(c.r[5], c.r[5].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00220364u | kUnwind; return; } goto L_00220364; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.f[3] = ld32((c.r[1].w[0] + 24520u));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    set32(c.r[6], c.r[6].w[0] + 28704u);
    set32(c.r[5], c.r[5].w[0] + 28832u);
    set32(c.r[4], 0u + 8u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st32((c.r[1].w[0] + 28736u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[2] = ld32((c.r[1].w[0] + 24512u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[1] = ld32((c.r[1].w[0] + 24504u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = ld32((c.r[1].w[0] + 24496u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st32((c.r[1].w[0] + 28704u), c.f[3]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st32((c.r[1].w[0] + 28720u), c.f[2]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st32((c.r[1].w[0] + 28708u), c.f[1]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st32((c.r[1].w[0] + 28724u), c.f[2]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st32((c.r[1].w[0] + 28728u), c.f[2]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st32((c.r[1].w[0] + 28740u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st32((c.r[1].w[0] + 28712u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st32((c.r[1].w[0] + 28744u), c.f[0]);
    c.budget -= 32;
L_00220404:
    set32(c.r[3], ld32((c.r[6].w[0])));
    set32(c.r[4], c.r[4].w[0] - 1u);
    set32(c.r[2], ld32((c.r[6].w[0] + 4u)));
    st32((c.r[5].w[0]), c.r[3].w[0]);
    set32(c.r[6], c.r[6].w[0] + 8u);
    st32((c.r[5].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 8;
    { const bool t = c.r[4].sd[0] > 0; set32(c.r[5], c.r[5].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00220404u | kUnwind; return; } goto L_00220404; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], c.r[4].w[0] + 29856u);
    set32(c.r[5], c.r[5].w[0] + 28640u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022043Cu); set32(c.r[6], 0u + 1216u);  if (depth < kMaxDepth) unit_0009(c, 40u, depth + 1u); else { c.pc = 0x00124D20u; return; } if (c.pc != 0x0022043Cu) [[unlikely]] return; }
L_0022043C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[6], ld32((c.r[1].w[0] + 20144u)));
    c.r[3].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = 0ull | 32768ull;
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] << 16;
    c.r[5].d[0] = 0ull | 50001ull;
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[6].w[0] + c.r[1].w[0]);
    st64((c.r[1].w[0] + 416u), c.r[2].d[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], ld32((c.r[1].w[0] + 20144u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[3].w[0] + c.r[1].w[0]);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00220484u); st64((c.r[1].w[0] + 784u), c.r[2].d[0]);  if (depth < kMaxDepth) unit_0017(c, 122u, depth + 1u); else { c.pc = 0x0015D740u; return; } if (c.pc != 0x00220484u) [[unlikely]] return; }
L_00220484:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_002204A0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00220498u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 142u, depth + 1u); else { c.pc = 0x0015DA70u; return; } if (c.pc != 0x00220498u) [[unlikely]] return; }
L_00220498:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002204A4; } }
L_002204A0:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002204A4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_002208E4; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002204BCu); set32(c.r[6], 0u + 4096u);  if (depth < kMaxDepth) unit_0009(c, 49u, depth + 1u); else { c.pc = 0x00124ED8u; return; } if (c.pc != 0x002204BCu) [[unlikely]] return; }
L_002204BC:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002204C8u); c.r[5].d[0] = 0ull | 50001ull;  if (depth < kMaxDepth) unit_0017(c, 122u, depth + 1u); else { c.pc = 0x0015D740u; return; } if (c.pc != 0x002204C8u) [[unlikely]] return; }
L_002204C8:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002204E0; } }
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002204E0u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 147u, depth + 1u); else { c.pc = 0x0015DBB0u; return; } if (c.pc != 0x002204E0u) [[unlikely]] return; }
L_002204E0:
    set32(c.r[4], c.r[29].w[0] + 23184u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002204F0u); set32(c.r[6], 0u + 12800u);  if (depth < kMaxDepth) unit_0009(c, 49u, depth + 1u); else { c.pc = 0x00124ED8u; return; } if (c.pc != 0x002204F0u) [[unlikely]] return; }
L_002204F0:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002204FCu); c.r[5].d[0] = 0ull | 50001ull;  if (depth < kMaxDepth) unit_0017(c, 122u, depth + 1u); else { c.pc = 0x0015D740u; return; } if (c.pc != 0x002204FCu) [[unlikely]] return; }
L_002204FC:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_00220518; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00220510u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 144u, depth + 1u); else { c.pc = 0x0015DB40u; return; } if (c.pc != 0x00220510u) [[unlikely]] return; }
L_00220510:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_00220520; } }
L_00220518:
    c.r[2].d[0] = 0ull + 0ull;
    c.r[19].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_00220520:
    c.r[10].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 47u);
    set32(c.r[5], 0u + 13u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u + 10u);  if (t) { goto L_002205CC; } }
L_0022053C:
    c.r[7].d[0] = ld8((c.r[3].w[0]));
    c.budget -= 3;
    { const bool t = c.r[7].d[0] == c.r[6].d[0]; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_002205DC; } }
    c.budget -= 2;
    { const bool t = c.r[9].d[0] == 0ull;  if (t) { goto L_0022057C; } }
    c.budget -= 2;
    { const bool t = c.r[7].d[0] == c.r[5].d[0]; set32(c.r[3], c.r[19].w[0] << 6);  if (t) { goto L_00220560; } }
    c.budget -= 2;
    { const bool t = c.r[7].d[0] != c.r[4].d[0];  if (t) { goto L_0022057C; } }
L_00220560:
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[3].w[0] + c.r[29].w[0]);
    set32(c.r[19], c.r[19].w[0] + 1u);
    set32(c.r[3], c.r[10].w[0] + c.r[3].w[0]);
    st8((c.r[3].w[0] + 23184u), static_cast<std::uint8_t>(0u));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; c.r[10].d[0] = 0ull + 0ull;  if (t) { goto L_002205C8; } }
L_0022057C:
    c.budget -= 2;
    { const bool t = c.r[9].d[0] == 0ull; c.r[3].d[0] = c.r[7].d[0] & 255ull;  if (t) { goto L_00220598; } }
    c.r[3].d[0] = c.r[7].d[0] & 255ull;
    c.r[1].d[0] = c.r[3].sd[0] < 32ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[3].d[0] = c.r[7].d[0] & 255ull;  if (t) { goto L_002205A8; } }
    c.r[3].d[0] = c.r[7].d[0] & 255ull;
    c.budget -= 1;
L_00220598:
    c.r[1].d[0] = c.r[3].sd[0] < 33ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_002205C8; } }
    c.r[3].d[0] = c.r[7].d[0] & 255ull;
    c.budget -= 1;
L_002205A8:
    c.r[1].d[0] = c.r[3].sd[0] < 123ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[3], c.r[19].w[0] << 6);  if (t) { goto L_002205C8; } }
    set32(c.r[9], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[29].w[0]);
    set32(c.r[3], c.r[10].w[0] + c.r[3].w[0]);
    st8((c.r[3].w[0] + 23184u), static_cast<std::uint8_t>(c.r[7].w[0]));
    set32(c.r[10], c.r[10].w[0] + 1u);
    c.budget -= 5;
L_002205C8:
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.budget -= 1;
L_002205CC:
    c.r[3].d[0] = c.r[8].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], c.r[18].w[0] + c.r[8].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0022053Cu | kUnwind; return; } goto L_0022053C; } }
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002205DC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[17].sd[0] < c.r[19].sd[0] ? 1ull : 0ull;  if (t) { goto L_002208D8; } }
L_002205E4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00460000u);
    st64((c.r[29].w[0]), c.r[3].d[0]);
    set32(c.r[2], c.r[29].w[0] + 23056u);
    st64((c.r[29].w[0] + 8u), c.r[2].d[0]);
    set32(c.r[3], c.r[29].w[0] + 23088u);
    st64((c.r[29].w[0] + 16u), c.r[3].d[0]);
    set32(c.r[2], c.r[29].w[0] + 23120u);
    st64((c.r[29].w[0] + 24u), c.r[2].d[0]);
    set32(c.r[3], c.r[29].w[0] + 23152u);
    set32(c.r[2], c.r[17].w[0] << 6);
    st64((c.r[29].w[0] + 32u), c.r[3].d[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[5], c.r[5].w[0] + 24128u);
    set32(c.r[4], c.r[2].w[0] + 23184u);
    set32(c.r[6], c.r[29].w[0] + 572u);
    set32(c.r[7], c.r[29].w[0] + 22864u);
    set32(c.r[8], c.r[29].w[0] + 22896u);
    set32(c.r[9], c.r[29].w[0] + 22928u);
    set32(c.r[10], c.r[29].w[0] + 22960u);
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00220638u); set32(c.r[11], c.r[29].w[0] + 22992u);  if (depth < kMaxDepth) unit_0009(c, 207u, depth + 1u); else { c.pc = 0x001274F0u; return; } if (c.pc != 0x00220638u) [[unlikely]] return; }
L_00220638:
    c.r[22].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_002208C0; } }
L_00220644:
    set32(c.r[2], 0u + 121u);
    set32(c.r[4], c.r[3].w[0] + c.r[29].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 22864u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 114u);  if (t) { goto L_00220898; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00220870; } }
    set32(c.r[2], 0u + 103u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 104u);  if (t) { goto L_00220838; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00220820; } }
    set32(c.r[2], 0u + 119u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 101u);  if (t) { goto L_00220808; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002207F0; } }
    set32(c.r[2], 0u + 110u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 122u);  if (t) { goto L_002207C8; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002207A0; } }
    set32(c.r[2], 0u + 107u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 115u);  if (t) { goto L_00220778; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00220750; } }
    set32(c.r[2], 0u + 97u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 109u);  if (t) { goto L_00220728; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[5].sd[0] = static_cast<std::int32_t>(0x00460000u);  if (t) { goto L_00220700; } }
    set32(c.r[2], 0u + 108u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[5].sd[0] = static_cast<std::int32_t>(0x00460000u);  if (t) { goto L_002206D8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[16].w[0] + 1u);  if (t) { goto L_002208C0; } }
L_002206D8:
    set32(c.r[4], c.r[4].w[0] + 22864u);
    set32(c.r[5], c.r[5].w[0] + 24168u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002206E8u); set32(c.r[6], c.r[29].w[0] + 568u);  if (depth < kMaxDepth) unit_0009(c, 207u, depth + 1u); else { c.pc = 0x001274F0u; return; } if (c.pc != 0x002206E8u) [[unlikely]] return; }
L_002206E8:
    set32(c.r[2], ld32((c.r[29].w[0] + 572u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 568u)));
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[21].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st16((c.r[2].w[0] + 468u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_002208BC; } }
L_00220700:
    set32(c.r[4], c.r[4].w[0] + 22864u);
    set32(c.r[5], c.r[5].w[0] + 24176u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00220710u); set32(c.r[6], c.r[29].w[0] + 568u);  if (depth < kMaxDepth) unit_0009(c, 207u, depth + 1u); else { c.pc = 0x001274F0u; return; } if (c.pc != 0x00220710u) [[unlikely]] return; }
L_00220710:
    set32(c.r[2], ld32((c.r[29].w[0] + 572u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 568u)));
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[21].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st16((c.r[2].w[0] + 470u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_002208BC; } }
L_00220728:
    set32(c.r[4], ld32((c.r[29].w[0] + 572u)));
    set32(c.r[2], 0u - 3u);
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    set32(c.r[4], c.r[4].w[0] << 3);
    set32(c.r[5], c.r[21].w[0] + c.r[4].w[0]);
    c.r[4].d[0] = ld8((c.r[5].w[0] + 473u));
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st8((c.r[5].w[0] + 473u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_002208BC; } }
L_00220750:
    set32(c.r[4], ld32((c.r[29].w[0] + 572u)));
    set32(c.r[2], 0u - 5u);
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(4ll);
    set32(c.r[4], c.r[4].w[0] << 3);
    set32(c.r[5], c.r[21].w[0] + c.r[4].w[0]);
    c.r[4].d[0] = ld8((c.r[5].w[0] + 473u));
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st8((c.r[5].w[0] + 473u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_002208BC; } }
L_00220778:
    set32(c.r[4], ld32((c.r[29].w[0] + 572u)));
    set32(c.r[2], 0u - 9u);
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(8ll);
    set32(c.r[4], c.r[4].w[0] << 3);
    set32(c.r[5], c.r[21].w[0] + c.r[4].w[0]);
    c.r[4].d[0] = ld8((c.r[5].w[0] + 473u));
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st8((c.r[5].w[0] + 473u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_002208BC; } }
L_002207A0:
    set32(c.r[4], ld32((c.r[29].w[0] + 572u)));
    set32(c.r[2], 0u - 17u);
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(16ll);
    set32(c.r[4], c.r[4].w[0] << 3);
    set32(c.r[5], c.r[21].w[0] + c.r[4].w[0]);
    c.r[4].d[0] = ld8((c.r[5].w[0] + 473u));
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st8((c.r[5].w[0] + 473u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_002208BC; } }
L_002207C8:
    set32(c.r[4], ld32((c.r[29].w[0] + 572u)));
    set32(c.r[2], 0u - 33u);
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(32ll);
    set32(c.r[4], c.r[4].w[0] << 3);
    set32(c.r[5], c.r[21].w[0] + c.r[4].w[0]);
    c.r[4].d[0] = ld8((c.r[5].w[0] + 473u));
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st8((c.r[5].w[0] + 473u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_002208BC; } }
L_002207F0:
    set32(c.r[2], ld32((c.r[29].w[0] + 572u)));
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[21].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 472u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002208BC; } }
L_00220808:
    set32(c.r[2], ld32((c.r[29].w[0] + 572u)));
    set32(c.r[3], 0u + 2u);
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[21].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 472u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002208BC; } }
L_00220820:
    set32(c.r[2], ld32((c.r[29].w[0] + 572u)));
    c.budget -= 1;
L_00220824:
    set32(c.r[3], 0u + 4u);
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[21].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 472u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002208BC; } }
L_00220838:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00220840u);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x00220840u) [[unlikely]] return; }
L_00220840:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] - 25559u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002208BC; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 572u)));
    set32(c.r[3], 0u + 8u);
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[21].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 472u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002208BC; } }
L_00220870:
    set32(c.r[4], ld32((c.r[29].w[0] + 572u)));
    set32(c.r[2], 0u - 65u);
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(64ll);
    set32(c.r[4], c.r[4].w[0] << 3);
    set32(c.r[5], c.r[21].w[0] + c.r[4].w[0]);
    c.r[4].d[0] = ld8((c.r[5].w[0] + 473u));
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st8((c.r[5].w[0] + 473u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_002208BC; } }
L_00220898:
    set32(c.r[4], ld32((c.r[29].w[0] + 572u)));
    set32(c.r[2], 0u - 129u);
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(128ll);
    set32(c.r[4], c.r[4].w[0] << 3);
    set32(c.r[5], c.r[21].w[0] + c.r[4].w[0]);
    c.r[4].d[0] = ld8((c.r[5].w[0] + 473u));
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[5].w[0] + 473u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 9;
L_002208BC:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_002208C0:
    set32(c.r[2], c.r[22].w[0] - 1u);
    c.r[2].d[0] = c.r[16].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], c.r[16].w[0] << 5);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00220644u | kUnwind; return; } goto L_00220644; } }
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].sd[0] < c.r[19].sd[0] ? 1ull : 0ull;
    c.budget -= 2;
L_002208D8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], c.r[29].w[0] + 23024u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002205E4u | kUnwind; return; } goto L_002205E4; } }
    c.r[19].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002208E4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[19].sd[0] < 16ll ? 1ull : 0ull;  if (t) { goto L_00220BB4; } }
L_002208EC:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 27243u);
    c.r[16].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00220900u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 122u, depth + 1u); else { c.pc = 0x0015D740u; return; } if (c.pc != 0x00220900u) [[unlikely]] return; }
L_00220900:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_0022091C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00220914u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 142u, depth + 1u); else { c.pc = 0x0015DA70u; return; } if (c.pc != 0x00220914u) [[unlikely]] return; }
L_00220914:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00220920; } }
L_0022091C:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00220920:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_00220BAC; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00220934u); set32(c.r[6], 0u + 512u);  if (depth < kMaxDepth) unit_0009(c, 49u, depth + 1u); else { c.pc = 0x00124ED8u; return; } if (c.pc != 0x00220934u) [[unlikely]] return; }
L_00220934:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00220940u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 122u, depth + 1u); else { c.pc = 0x0015D740u; return; } if (c.pc != 0x00220940u) [[unlikely]] return; }
L_00220940:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00220958; } }
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00220958u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 147u, depth + 1u); else { c.pc = 0x0015DBB0u; return; } if (c.pc != 0x00220958u) [[unlikely]] return; }
L_00220958:
    set32(c.r[3], c.r[29].w[0] + 22780u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00460000u);
    st64((c.r[29].w[0]), c.r[3].d[0]);
    set32(c.r[2], c.r[29].w[0] + 22684u);
    st64((c.r[29].w[0] + 8u), c.r[2].d[0]);
    set32(c.r[3], c.r[29].w[0] + 22784u);
    st64((c.r[29].w[0] + 16u), c.r[3].d[0]);
    set32(c.r[2], c.r[29].w[0] + 22688u);
    st64((c.r[29].w[0] + 24u), c.r[2].d[0]);
    set32(c.r[3], c.r[29].w[0] + 22788u);
    st64((c.r[29].w[0] + 32u), c.r[3].d[0]);
    set32(c.r[2], c.r[29].w[0] + 22692u);
    st64((c.r[29].w[0] + 40u), c.r[2].d[0]);
    set32(c.r[3], c.r[29].w[0] + 22792u);
    st64((c.r[29].w[0] + 48u), c.r[3].d[0]);
    set32(c.r[2], c.r[29].w[0] + 22696u);
    st64((c.r[29].w[0] + 56u), c.r[2].d[0]);
    set32(c.r[3], c.r[29].w[0] + 22796u);
    st64((c.r[29].w[0] + 64u), c.r[3].d[0]);
    set32(c.r[2], c.r[29].w[0] + 22700u);
    st64((c.r[29].w[0] + 72u), c.r[2].d[0]);
    set32(c.r[3], c.r[29].w[0] + 22800u);
    st64((c.r[29].w[0] + 80u), c.r[3].d[0]);
    set32(c.r[2], c.r[29].w[0] + 22704u);
    st64((c.r[29].w[0] + 88u), c.r[2].d[0]);
    set32(c.r[3], c.r[29].w[0] + 22804u);
    st64((c.r[29].w[0] + 96u), c.r[3].d[0]);
    set32(c.r[2], c.r[29].w[0] + 22708u);
    st64((c.r[29].w[0] + 104u), c.r[2].d[0]);
    set32(c.r[3], c.r[29].w[0] + 22808u);
    st64((c.r[29].w[0] + 112u), c.r[3].d[0]);
    set32(c.r[2], c.r[29].w[0] + 22712u);
    st64((c.r[29].w[0] + 120u), c.r[2].d[0]);
    set32(c.r[3], c.r[29].w[0] + 22812u);
    st64((c.r[29].w[0] + 128u), c.r[3].d[0]);
    set32(c.r[2], c.r[29].w[0] + 22716u);
    st64((c.r[29].w[0] + 136u), c.r[2].d[0]);
    set32(c.r[3], c.r[29].w[0] + 22816u);
    st64((c.r[29].w[0] + 144u), c.r[3].d[0]);
    set32(c.r[2], c.r[29].w[0] + 22720u);
    st64((c.r[29].w[0] + 152u), c.r[2].d[0]);
    set32(c.r[3], c.r[29].w[0] + 22820u);
    st64((c.r[29].w[0] + 160u), c.r[3].d[0]);
    set32(c.r[2], c.r[29].w[0] + 22724u);
    st64((c.r[29].w[0] + 168u), c.r[2].d[0]);
    set32(c.r[3], c.r[29].w[0] + 22824u);
    st64((c.r[29].w[0] + 176u), c.r[3].d[0]);
    set32(c.r[2], c.r[29].w[0] + 22728u);
    st64((c.r[29].w[0] + 184u), c.r[2].d[0]);
    set32(c.r[3], c.r[29].w[0] + 22828u);
    st64((c.r[29].w[0] + 192u), c.r[3].d[0]);
    set32(c.r[2], c.r[29].w[0] + 22732u);
    st64((c.r[29].w[0] + 200u), c.r[2].d[0]);
    set32(c.r[3], c.r[29].w[0] + 22832u);
    st64((c.r[29].w[0] + 208u), c.r[3].d[0]);
    set32(c.r[2], c.r[29].w[0] + 22736u);
    st64((c.r[29].w[0] + 216u), c.r[2].d[0]);
    set32(c.r[3], c.r[29].w[0] + 22836u);
    st64((c.r[29].w[0] + 224u), c.r[3].d[0]);
    set32(c.r[2], c.r[29].w[0] + 22740u);
    st64((c.r[29].w[0] + 232u), c.r[2].d[0]);
    set32(c.r[3], c.r[29].w[0] + 22840u);
    st64((c.r[29].w[0] + 240u), c.r[3].d[0]);
    set32(c.r[2], c.r[29].w[0] + 22744u);
    st64((c.r[29].w[0] + 248u), c.r[2].d[0]);
    set32(c.r[3], c.r[29].w[0] + 22844u);
    st64((c.r[29].w[0] + 256u), c.r[3].d[0]);
    set32(c.r[2], c.r[29].w[0] + 22748u);
    st64((c.r[29].w[0] + 264u), c.r[2].d[0]);
    set32(c.r[3], c.r[29].w[0] + 22848u);
    st64((c.r[29].w[0] + 272u), c.r[3].d[0]);
    set32(c.r[2], c.r[29].w[0] + 22752u);
    st64((c.r[29].w[0] + 280u), c.r[2].d[0]);
    set32(c.r[3], c.r[29].w[0] + 22852u);
    st64((c.r[29].w[0] + 288u), c.r[3].d[0]);
    set32(c.r[2], c.r[29].w[0] + 22756u);
    st64((c.r[29].w[0] + 296u), c.r[2].d[0]);
    set32(c.r[3], c.r[29].w[0] + 22856u);
    st64((c.r[29].w[0] + 304u), c.r[3].d[0]);
    set32(c.r[2], c.r[29].w[0] + 22760u);
    st64((c.r[29].w[0] + 312u), c.r[2].d[0]);
    set32(c.r[3], c.r[29].w[0] + 22860u);
    set32(c.r[2], c.r[29].w[0] + 22764u);
    st64((c.r[29].w[0] + 320u), c.r[3].d[0]);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    st64((c.r[29].w[0] + 328u), c.r[2].d[0]);
    set32(c.r[5], c.r[5].w[0] + 24192u);
    set32(c.r[6], c.r[29].w[0] + 22768u);
    set32(c.r[7], c.r[29].w[0] + 22672u);
    set32(c.r[8], c.r[29].w[0] + 22772u);
    set32(c.r[9], c.r[29].w[0] + 22676u);
    set32(c.r[10], c.r[29].w[0] + 22776u);
    c.budget -= 94;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00220AD0u); set32(c.r[11], c.r[29].w[0] + 22680u);  if (depth < kMaxDepth) unit_0009(c, 207u, depth + 1u); else { c.pc = 0x001274F0u; return; } if (c.pc != 0x00220AD0u) [[unlikely]] return; }
L_00220AD0:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].sd[0] >= 0; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));  if (t) { goto L_00220AE4; } }
    set32(c.r[2], c.r[17].w[0] + 1u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    c.budget -= 2;
L_00220AE4:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] <= 0; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_00220BAC; } }
    set32(c.r[3], c.r[17].w[0] + 1u);
    c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u - 2u);  if (t) { goto L_00220B24; } }
L_00220AFC:
    set32(c.r[2], c.r[7].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[7], c.r[7].w[0] + 1u);
    set32(c.r[2], ld32((c.r[2].w[0] + 22768u)));
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[6], c.r[21].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = ld8((c.r[6].w[0] + 473u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[4].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[5].d[0];
    st8((c.r[6].w[0] + 473u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 10;
L_00220B24:
    c.budget -= 2;
    { const bool t = c.r[17].sd[0] >= 0; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[17].w[0]) >> 1));  if (t) { goto L_00220B30; } }
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 1));
    c.budget -= 1;
L_00220B30:
    c.r[2].d[0] = c.r[7].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00220AFCu | kUnwind; return; } goto L_00220AFC; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 22768u)));
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[2], c.r[21].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = ld8((c.r[2].w[0] + 473u));
    c.r[2].d[0] = c.r[2].d[0] << 62;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_00220B60; } }
    set32(c.r[16], 0u + 1u);
    c.budget -= 1;
L_00220B60:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00220B68u); set32(c.r[4], 0u + 152u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00220B68u) [[unlikely]] return; }
L_00220B68:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[6], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[17].w[0]) >> 1));  if (t) { goto L_00220B94; } }
    c.budget -= 2;
    { const bool t = c.r[17].sd[0] >= 0; c.r[9].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00220B80; } }
    set32(c.r[3], c.r[17].w[0] + 1u);
    set32(c.r[6], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 1));
    c.budget -= 2;
L_00220B80:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[21].w[0] + 1748u);
    set32(c.r[7], c.r[29].w[0] + 22768u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00220B94u); set32(c.r[8], c.r[29].w[0] + 22672u);  if (depth < kMaxDepth) unit_004B(c, 152u, depth + 1u); else { c.pc = 0x0022E340u; return; } if (c.pc != 0x00220B94u) [[unlikely]] return; }
L_00220B94:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00220BA4; } }
    set32(c.r[2], c.r[2].w[0] + 36u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 2;
L_00220BA4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00220BACu); set32(c.r[4], c.r[21].w[0] + 436u);  if (depth < kMaxDepth) unit_000F(c, 40u, depth + 1u); else { c.pc = 0x0013C4A0u; return; } if (c.pc != 0x00220BACu) [[unlikely]] return; }
L_00220BAC:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.r[2].d[0] = c.r[19].sd[0] < 16ll ? 1ull : 0ull;
    c.budget -= 2;
L_00220BB4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[19].w[0] + 32767u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002208ECu | kUnwind; return; } goto L_002208EC; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x434D0000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 31088u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00220BD0u); c.r[5].d[0] = c.r[2].d[0] | 20300ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x00220BD0u) [[unlikely]] return; }
L_00220BD0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[23].d[0] = 0ull + 0ull;  if (t) { goto L_00220BDC; } }
    set32(c.r[23], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 1;
L_00220BDC:
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_00220CB4; } }
L_00220BE8:
    set32(c.r[2], c.r[2].w[0] + c.r[21].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 1748u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[1].d[0] = c.r[17].sd[0] < 20ll ? 1ull : 0ull;  if (t) { goto L_00220CB0; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull; c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_00220CC4; } }
    set32(c.r[2], c.r[19].w[0] << 3);
    set32(c.r[2], c.r[21].w[0] + c.r[2].w[0]);
    set32(c.r[16], c.r[2].w[0] + 468u);
    c.r[2].d[0] = ld16((c.r[2].w[0] + 468u));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_00220CB0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_00220C44; } }
L_00220C20:
    c.r[3].d[0] = ld16((c.r[16].w[0]));
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    c.r[2].d[0] = ld16((c.r[2].w[0] + 22592u));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], c.r[4].w[0] + 1u);  if (t) { goto L_00220C40; } }
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00220C50; } }
L_00220C40:
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.budget -= 1;
L_00220C44:
    c.r[2].d[0] = c.r[4].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[4].w[0] << 1);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00220C20u | kUnwind; return; } goto L_00220C20; } }
L_00220C50:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);  if (t) { goto L_00220CB0; } }
    c.r[5].d[0] = ld16((c.r[16].w[0]));
    set32(c.r[4], ld32((c.r[1].w[0] + 28304u)));
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00220C70u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_001A(c, 42u, depth + 1u); else { c.pc = 0x00168960u; return; } if (c.pc != 0x00220C70u) [[unlikely]] return; }
L_00220C70:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00220CAC; } }
    c.r[6].d[0] = ld16((c.r[16].w[0]));
    set32(c.r[5], c.r[17].w[0] + 8u);
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00220C8Cu); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_003F(c, 356u, depth + 1u); else { c.pc = 0x001FF8C0u; return; } if (c.pc != 0x00220C8Cu) [[unlikely]] return; }
L_00220C8C:
    c.r[4].d[0] = ld16((c.r[16].w[0]));
    set32(c.r[2], c.r[17].w[0] << 1);
    set32(c.r[3], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[2], c.r[17].w[0] + 1u);
    set32(c.r[17], c.r[17].w[0] + 1u);
    st16((c.r[3].w[0] + 22592u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00220CB0; } }
L_00220CAC:
    st16((c.r[16].w[0]), static_cast<std::uint16_t>(0u));
    c.budget -= 1;
L_00220CB0:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.budget -= 1;
L_00220CB4:
    c.r[2].d[0] = c.r[19].d[0] < static_cast<std::uint64_t>(160ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[19].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00220BE8u | kUnwind; return; } goto L_00220BE8; } }
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 1;
L_00220CC4:
    c.r[5].d[0] = 0ull | 50003ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00220CD0u); c.r[30].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 122u, depth + 1u); else { c.pc = 0x0015D740u; return; } if (c.pc != 0x00220CD0u) [[unlikely]] return; }
L_00220CD0:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_00220CEC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00220CE4u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 142u, depth + 1u); else { c.pc = 0x0015DA70u; return; } if (c.pc != 0x00220CE4u) [[unlikely]] return; }
L_00220CE4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00220CF0; } }
L_00220CEC:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00220CF0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00220FF0; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], ld32((c.r[1].w[0] + 31520u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00220FF0; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00220D1Cu); set32(c.r[6], 0u + 4096u);  if (depth < kMaxDepth) unit_0009(c, 49u, depth + 1u); else { c.pc = 0x00124ED8u; return; } if (c.pc != 0x00220D1Cu) [[unlikely]] return; }
L_00220D1C:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00220D28u); c.r[5].d[0] = 0ull | 50003ull;  if (depth < kMaxDepth) unit_0017(c, 122u, depth + 1u); else { c.pc = 0x0015D740u; return; } if (c.pc != 0x00220D28u) [[unlikely]] return; }
L_00220D28:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00220D40; } }
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00220D40u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 147u, depth + 1u); else { c.pc = 0x0015DBB0u; return; } if (c.pc != 0x00220D40u) [[unlikely]] return; }
L_00220D40:
    set32(c.r[4], c.r[29].w[0] + 16192u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00220D50u); set32(c.r[6], 0u + 6400u);  if (depth < kMaxDepth) unit_0009(c, 49u, depth + 1u); else { c.pc = 0x00124ED8u; return; } if (c.pc != 0x00220D50u) [[unlikely]] return; }
L_00220D50:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00220D5Cu); c.r[5].d[0] = 0ull | 50003ull;  if (depth < kMaxDepth) unit_0017(c, 122u, depth + 1u); else { c.pc = 0x0015D740u; return; } if (c.pc != 0x00220D5Cu) [[unlikely]] return; }
L_00220D5C:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_00220D78; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00220D70u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 144u, depth + 1u); else { c.pc = 0x0015DB40u; return; } if (c.pc != 0x00220D70u) [[unlikely]] return; }
L_00220D70:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_00220D80; } }
L_00220D78:
    c.r[2].d[0] = 0ull + 0ull;
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_00220D80:
    c.r[8].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[5], 0u + 47u);
    set32(c.r[4], 0u + 13u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 10u);  if (t) { goto L_00220E2C; } }
L_00220D9C:
    c.r[10].d[0] = ld8((c.r[9].w[0]));
    c.budget -= 3;
    { const bool t = c.r[10].d[0] == c.r[5].d[0]; c.r[22].d[0] = 0ull + 0ull;  if (t) { goto L_00220E3C; } }
    c.budget -= 2;
    { const bool t = c.r[7].d[0] == 0ull;  if (t) { goto L_00220DDC; } }
    c.budget -= 2;
    { const bool t = c.r[10].d[0] == c.r[4].d[0]; set32(c.r[9], c.r[16].w[0] << 6);  if (t) { goto L_00220DC0; } }
    c.budget -= 2;
    { const bool t = c.r[10].d[0] != c.r[3].d[0];  if (t) { goto L_00220DDC; } }
L_00220DC0:
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[9], c.r[9].w[0] + c.r[29].w[0]);
    set32(c.r[16], c.r[16].w[0] + 1u);
    set32(c.r[8], c.r[8].w[0] + c.r[9].w[0]);
    st8((c.r[8].w[0] + 16192u), static_cast<std::uint8_t>(0u));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; c.r[8].d[0] = 0ull + 0ull;  if (t) { goto L_00220E28; } }
L_00220DDC:
    c.budget -= 2;
    { const bool t = c.r[7].d[0] == 0ull; c.r[9].d[0] = c.r[10].d[0] & 255ull;  if (t) { goto L_00220DF8; } }
    c.r[9].d[0] = c.r[10].d[0] & 255ull;
    c.r[1].d[0] = c.r[9].sd[0] < 32ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[9].d[0] = c.r[10].d[0] & 255ull;  if (t) { goto L_00220E08; } }
    c.r[9].d[0] = c.r[10].d[0] & 255ull;
    c.budget -= 1;
L_00220DF8:
    c.r[1].d[0] = c.r[9].sd[0] < 33ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_00220E28; } }
    c.r[9].d[0] = c.r[10].d[0] & 255ull;
    c.budget -= 1;
L_00220E08:
    c.r[1].d[0] = c.r[9].sd[0] < 123ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[9], c.r[16].w[0] << 6);  if (t) { goto L_00220E28; } }
    set32(c.r[7], 0u + 1u);
    set32(c.r[9], c.r[9].w[0] + c.r[29].w[0]);
    set32(c.r[9], c.r[8].w[0] + c.r[9].w[0]);
    st8((c.r[9].w[0] + 16192u), static_cast<std::uint8_t>(c.r[10].w[0]));
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.budget -= 5;
L_00220E28:
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.budget -= 1;
L_00220E2C:
    c.r[9].d[0] = c.r[6].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[9].d[0] != 0ull; set32(c.r[9], c.r[18].w[0] + c.r[6].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00220D9Cu | kUnwind; return; } goto L_00220D9C; } }
    c.r[22].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00220E3C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[22].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;  if (t) { goto L_00220FE8; } }
L_00220E44:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00460000u);
    st64((c.r[29].w[0]), c.r[2].d[0]);
    set32(c.r[3], c.r[29].w[0] + 16188u);
    set32(c.r[2], c.r[22].w[0] << 6);
    st64((c.r[29].w[0] + 8u), c.r[3].d[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[5], c.r[5].w[0] + 24352u);
    set32(c.r[4], c.r[2].w[0] + 16192u);
    set32(c.r[6], c.r[29].w[0] + 564u);
    set32(c.r[7], c.r[29].w[0] + 556u);
    set32(c.r[8], c.r[29].w[0] + 560u);
    set32(c.r[9], c.r[29].w[0] + 552u);
    set32(c.r[10], c.r[29].w[0] + 16176u);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00220E80u); set32(c.r[11], c.r[29].w[0] + 16180u);  if (depth < kMaxDepth) unit_0009(c, 207u, depth + 1u); else { c.pc = 0x001274F0u; return; } if (c.pc != 0x00220E80u) [[unlikely]] return; }
L_00220E80:
    c.f[0] = ld32((c.r[29].w[0] + 552u));
    c.r[19].d[0] = 0ull + 0ull;
    c.f[1] = ld32((c.r[29].w[0] + 560u));
    c.f[2] = ld32((c.r[29].w[0] + 556u));
    c.f[3] = ld32((c.r[29].w[0] + 564u));
    st32((c.r[29].w[0] + 16172u), c.f[0]);
    st32((c.r[29].w[0] + 16168u), c.f[1]);
    st32((c.r[29].w[0] + 16164u), c.f[2]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 16160u), c.f[3]);  if (t) { goto L_00220EEC; } }
L_00220EA8:
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0] + 16176u)));
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == 0ull; set32(c.r[2], c.r[19].w[0] << 2);  if (t) { goto L_00220EDC; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[4], ld32((c.r[1].w[0] + 28304u)));
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00220ED0u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_001A(c, 42u, depth + 1u); else { c.pc = 0x00168960u; return; } if (c.pc != 0x00220ED0u) [[unlikely]] return; }
L_00220ED0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00220EE8; } }
    set32(c.r[2], c.r[19].w[0] << 2);
    c.budget -= 1;
L_00220EDC:
    set32(c.r[3], 0u - 1u);
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    st32((c.r[2].w[0] + 16176u), c.r[3].w[0]);
    c.budget -= 3;
L_00220EE8:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.budget -= 1;
L_00220EEC:
    c.r[2].d[0] = c.r[19].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[19].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00220EA8u | kUnwind; return; } goto L_00220EA8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_00220F90; } }
L_00220F00:
    set32(c.r[2], 0u - 1u);
    set32(c.r[4], c.r[3].w[0] + c.r[29].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 16176u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_00220F8C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = c.r[30].d[0] + 0ull;  if (t) { goto L_00220F40; } }
L_00220F1C:
    set32(c.r[2], ld32((c.r[4].w[0] + 16176u)));
    set32(c.r[3], c.r[3].w[0] + c.r[29].w[0]);
    c.r[3].d[0] = ld16((c.r[3].w[0] + 22592u));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00220F3C; } }
    st32((c.r[4].w[0] + 16176u), c.r[5].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[6], 0u + 1u);  if (t) { goto L_00220F4C; } }
L_00220F3C:
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 1;
L_00220F40:
    c.r[2].d[0] = c.r[5].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], c.r[5].w[0] << 1);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00220F1Cu | kUnwind; return; } goto L_00220F1C; } }
L_00220F4C:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != 0ull; set32(c.r[2], c.r[19].w[0] << 2);  if (t) { goto L_00220F8C; } }
    set32(c.r[5], c.r[17].w[0] + 8u);
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[2].w[0] + 16176u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00220F6Cu); set32(c.r[7], 0u + 3u);  if (depth < kMaxDepth) unit_003F(c, 356u, depth + 1u); else { c.pc = 0x001FF8C0u; return; } if (c.pc != 0x00220F6Cu) [[unlikely]] return; }
L_00220F6C:
    set32(c.r[3], c.r[19].w[0] << 2);
    set32(c.r[2], c.r[17].w[0] << 1);
    set32(c.r[4], c.r[3].w[0] + c.r[29].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 16176u)));
    st16((c.r[2].w[0] + 22592u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st32((c.r[4].w[0] + 16176u), c.r[17].w[0]);
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 8;
L_00220F8C:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.budget -= 1;
L_00220F90:
    c.r[2].d[0] = c.r[19].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], c.r[19].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00220F00u | kUnwind; return; } goto L_00220F00; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00220FA4u); set32(c.r[4], 0u + 96u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00220FA4u) [[unlikely]] return; }
L_00220FA4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00220FC8; } }
    set32(c.r[6], ld32((c.r[29].w[0] + 16176u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[7], ld32((c.r[29].w[0] + 16180u)));
    set32(c.r[8], ld32((c.r[29].w[0] + 16184u)));
    set32(c.r[9], ld32((c.r[29].w[0] + 16188u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00220FC8u); set32(c.r[5], c.r[29].w[0] + 16160u);  if (depth < kMaxDepth) unit_004B(c, 17u, depth + 1u); else { c.pc = 0x0022C3D0u; return; } if (c.pc != 0x00220FC8u) [[unlikely]] return; }
L_00220FC8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00220FD8; } }
    set32(c.r[2], c.r[2].w[0] + 24u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 2;
L_00220FD8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00220FE0u); set32(c.r[4], c.r[21].w[0] + 436u);  if (depth < kMaxDepth) unit_000F(c, 40u, depth + 1u); else { c.pc = 0x0013C4A0u; return; } if (c.pc != 0x00220FE0u) [[unlikely]] return; }
L_00220FE0:
    set32(c.r[22], c.r[22].w[0] + 1u);
    c.r[2].d[0] = c.r[22].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 2;
L_00220FE8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[29].w[0] + 16184u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00220E44u | kUnwind; return; } goto L_00220E44; } }
L_00220FF0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x46410000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 31088u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00221004u); c.r[5].d[0] = c.r[2].d[0] | 17477ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x00221004u) [[unlikely]] return; }
L_00221004:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_00221010; } }
    set32(c.r[4], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 1;
L_00221010:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00030000u);  if (t) { goto L_00221030; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022102Cu); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0040(c, 36u, depth + 1u); else { c.pc = 0x00200AB0u; return; } if (c.pc != 0x0022102Cu) [[unlikely]] return; }
L_0022102C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00030000u);
    c.budget -= 1;
L_00221030:
    c.r[1].d[0] = c.r[1].d[0] | 4528ull;
    set32(c.r[2], c.r[21].w[0] + c.r[1].w[0]);
    st128((c.r[2].w[0]) & ~15u, c.vu0.vf[0]);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00221048u); c.r[5].d[0] = 0ull | 50004ull;  if (depth < kMaxDepth) unit_0017(c, 122u, depth + 1u); else { c.pc = 0x0015D740u; return; } if (c.pc != 0x00221048u) [[unlikely]] return; }
L_00221048:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_00221064; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022105Cu); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 142u, depth + 1u); else { c.pc = 0x0015DA70u; return; } if (c.pc != 0x0022105Cu) [[unlikely]] return; }
L_0022105C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00221068; } }
L_00221064:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00221068:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_00221120; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], ld32((c.r[1].w[0] + 31520u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_0022111C; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00221090u); set32(c.r[6], 0u + 256u);  if (depth < kMaxDepth) unit_0009(c, 49u, depth + 1u); else { c.pc = 0x00124ED8u; return; } if (c.pc != 0x00221090u) [[unlikely]] return; }
L_00221090:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022109Cu); c.r[5].d[0] = 0ull | 50004ull;  if (depth < kMaxDepth) unit_0017(c, 122u, depth + 1u); else { c.pc = 0x0015D740u; return; } if (c.pc != 0x0022109Cu) [[unlikely]] return; }
L_0022109C:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002210B4; } }
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002210B4u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 147u, depth + 1u); else { c.pc = 0x0015DBB0u; return; } if (c.pc != 0x002210B4u) [[unlikely]] return; }
L_002210B4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 24376u);
    set32(c.r[6], c.r[29].w[0] + 548u);
    set32(c.r[7], c.r[29].w[0] + 544u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002210D0u); set32(c.r[8], c.r[29].w[0] + 540u);  if (depth < kMaxDepth) unit_0009(c, 207u, depth + 1u); else { c.pc = 0x001274F0u; return; } if (c.pc != 0x002210D0u) [[unlikely]] return; }
L_002210D0:
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_0022111C; } }
    c.f[0] = ld32((c.r[29].w[0] + 540u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00030000u);
    c.f[1] = ld32((c.r[29].w[0] + 544u));
    set32(c.r[1], c.r[21].w[0] + c.r[1].w[0]);
    c.f[2] = ld32((c.r[29].w[0] + 548u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[1].w[0] + 4528u), c.f[2]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00030000u);
    set32(c.r[1], c.r[21].w[0] + c.r[1].w[0]);
    st32((c.r[1].w[0] + 4532u), c.f[1]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00030000u);
    set32(c.r[1], c.r[21].w[0] + c.r[1].w[0]);
    st32((c.r[1].w[0] + 4536u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00030000u);
    set32(c.r[1], c.r[21].w[0] + c.r[1].w[0]);
    st32((c.r[1].w[0] + 4540u), c.r[2].w[0]);
    c.budget -= 16;
L_0022111C:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 1;
L_00221120:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00221128u); c.r[5].d[0] = 0ull | 50005ull;  if (depth < kMaxDepth) unit_0017(c, 122u, depth + 1u); else { c.pc = 0x0015D740u; return; } if (c.pc != 0x00221128u) [[unlikely]] return; }
L_00221128:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_00221144; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022113Cu); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 142u, depth + 1u); else { c.pc = 0x0015DA70u; return; } if (c.pc != 0x0022113Cu) [[unlikely]] return; }
L_0022113C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00221148; } }
L_00221144:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00221148:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);  if (t) { goto L_002213BC; } }
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], ld32((c.r[1].w[0] + 31520u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_002213BC; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022116Cu); set32(c.r[6], 0u + 8192u);  if (depth < kMaxDepth) unit_0009(c, 49u, depth + 1u); else { c.pc = 0x00124ED8u; return; } if (c.pc != 0x0022116Cu) [[unlikely]] return; }
L_0022116C:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00221178u); c.r[5].d[0] = 0ull | 50005ull;  if (depth < kMaxDepth) unit_0017(c, 122u, depth + 1u); else { c.pc = 0x0015D740u; return; } if (c.pc != 0x00221178u) [[unlikely]] return; }
L_00221178:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00221190; } }
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00221190u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 147u, depth + 1u); else { c.pc = 0x0015DBB0u; return; } if (c.pc != 0x00221190u) [[unlikely]] return; }
L_00221190:
    set32(c.r[4], c.r[29].w[0] + 8480u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002211A0u); set32(c.r[6], 0u + 7680u);  if (depth < kMaxDepth) unit_0009(c, 49u, depth + 1u); else { c.pc = 0x00124ED8u; return; } if (c.pc != 0x002211A0u) [[unlikely]] return; }
L_002211A0:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002211ACu); c.r[5].d[0] = 0ull | 50005ull;  if (depth < kMaxDepth) unit_0017(c, 122u, depth + 1u); else { c.pc = 0x0015D740u; return; } if (c.pc != 0x002211ACu) [[unlikely]] return; }
L_002211AC:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_002211C8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002211C0u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 144u, depth + 1u); else { c.pc = 0x0015DB40u; return; } if (c.pc != 0x002211C0u) [[unlikely]] return; }
L_002211C0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_002211D0; } }
L_002211C8:
    c.r[2].d[0] = 0ull + 0ull;
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_002211D0:
    c.r[10].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 47u);
    set32(c.r[5], 0u + 13u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u + 10u);  if (t) { goto L_0022127C; } }
L_002211EC:
    c.r[7].d[0] = ld8((c.r[3].w[0]));
    c.budget -= 3;
    { const bool t = c.r[7].d[0] == c.r[6].d[0]; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0022128C; } }
    c.budget -= 2;
    { const bool t = c.r[9].d[0] == 0ull;  if (t) { goto L_0022122C; } }
    c.budget -= 2;
    { const bool t = c.r[7].d[0] == c.r[5].d[0]; set32(c.r[3], c.r[17].w[0] << 8);  if (t) { goto L_00221210; } }
    c.budget -= 2;
    { const bool t = c.r[7].d[0] != c.r[4].d[0];  if (t) { goto L_0022122C; } }
L_00221210:
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[3].w[0] + c.r[29].w[0]);
    set32(c.r[17], c.r[17].w[0] + 1u);
    set32(c.r[3], c.r[10].w[0] + c.r[3].w[0]);
    st8((c.r[3].w[0] + 8480u), static_cast<std::uint8_t>(0u));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; c.r[10].d[0] = 0ull + 0ull;  if (t) { goto L_00221278; } }
L_0022122C:
    c.budget -= 2;
    { const bool t = c.r[9].d[0] == 0ull; c.r[3].d[0] = c.r[7].d[0] & 255ull;  if (t) { goto L_00221248; } }
    c.r[3].d[0] = c.r[7].d[0] & 255ull;
    c.r[1].d[0] = c.r[3].sd[0] < 32ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[3].d[0] = c.r[7].d[0] & 255ull;  if (t) { goto L_00221258; } }
    c.r[3].d[0] = c.r[7].d[0] & 255ull;
    c.budget -= 1;
L_00221248:
    c.r[1].d[0] = c.r[3].sd[0] < 33ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_00221278; } }
    c.r[3].d[0] = c.r[7].d[0] & 255ull;
    c.budget -= 1;
L_00221258:
    c.r[1].d[0] = c.r[3].sd[0] < 123ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[3], c.r[17].w[0] << 8);  if (t) { goto L_00221278; } }
    set32(c.r[9], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[29].w[0]);
    set32(c.r[3], c.r[10].w[0] + c.r[3].w[0]);
    st8((c.r[3].w[0] + 8480u), static_cast<std::uint8_t>(c.r[7].w[0]));
    set32(c.r[10], c.r[10].w[0] + 1u);
    c.budget -= 5;
L_00221278:
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.budget -= 1;
L_0022127C:
    c.r[3].d[0] = c.r[8].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 1;
L_00221280:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], c.r[18].w[0] + c.r[8].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002211ECu | kUnwind; return; } goto L_002211EC; } }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0022128C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;  if (t) { goto L_002213B4; } }
L_00221294:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00460000u);
    st64((c.r[29].w[0]), c.r[3].d[0]);
    set32(c.r[2], c.r[29].w[0] + 8468u);
    st64((c.r[29].w[0] + 8u), c.r[2].d[0]);
    set32(c.r[3], c.r[29].w[0] + 8452u);
    st64((c.r[29].w[0] + 16u), c.r[3].d[0]);
    set32(c.r[2], c.r[29].w[0] + 8436u);
    st64((c.r[29].w[0] + 24u), c.r[2].d[0]);
    set32(c.r[3], c.r[29].w[0] + 8472u);
    st64((c.r[29].w[0] + 32u), c.r[3].d[0]);
    set32(c.r[2], c.r[29].w[0] + 8456u);
    st64((c.r[29].w[0] + 40u), c.r[2].d[0]);
    set32(c.r[3], c.r[29].w[0] + 8440u);
    set32(c.r[2], c.r[16].w[0] << 8);
    st64((c.r[29].w[0] + 48u), c.r[3].d[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[5], c.r[5].w[0] + 24400u);
    set32(c.r[4], c.r[2].w[0] + 8480u);
    set32(c.r[6], c.r[29].w[0] + 536u);
    set32(c.r[7], c.r[29].w[0] + 532u);
    set32(c.r[8], c.r[29].w[0] + 528u);
    set32(c.r[9], c.r[29].w[0] + 524u);
    set32(c.r[10], c.r[29].w[0] + 8464u);
    c.budget -= 25;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002212F8u); set32(c.r[11], c.r[29].w[0] + 8448u);  if (depth < kMaxDepth) unit_0009(c, 207u, depth + 1u); else { c.pc = 0x001274F0u; return; } if (c.pc != 0x002212F8u) [[unlikely]] return; }
L_002212F8:
    set32(c.r[2], c.r[2].w[0] - 4u);
    set32(c.r[4], 0u + 3u);
    mmi::div(c, 0, c.r[2].w[0], c.r[4].w[0]);
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 5;
L_0022130C:
    c.r[3].d[0] = c.lo.d[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[5].sd[0] = static_cast<std::int32_t>(0x3F800000u);  if (t) { goto L_00221360; } }
L_00221318:
    set32(c.r[2], c.r[7].w[0] << 4);
    set32(c.r[6], c.r[6].w[0] + c.r[29].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    c.f[0] = ld32((c.r[6].w[0] + 8432u));
    c.f[1] = ld32((c.r[6].w[0] + 8448u));
    c.f[2] = ld32((c.r[6].w[0] + 8464u));
    st32((c.r[2].w[0] + 8384u), c.f[2]);
    st32((c.r[2].w[0] + 8388u), c.f[1]);
    st32((c.r[2].w[0] + 8392u), c.f[0]);
    c.budget -= 11;
    { const bool t = c.r[4].d[0] != 0ull; st32((c.r[2].w[0] + 8396u), c.r[5].w[0]);  if (t) { goto L_00221348; } }
    breakpoint(c, 0x00221344u);
    c.budget -= 1;
L_00221348:
    c.r[1].d[0] = c.r[7].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[2], c.r[7].w[0] << 4);  if (t) { goto L_0022135C; } }
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    st32((c.r[2].w[0] + 8396u), 0u);
    c.budget -= 2;
L_0022135C:
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.budget -= 1;
L_00221360:
    c.r[2].d[0] = c.r[7].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[6], c.r[7].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00221318u | kUnwind; return; } goto L_00221318; } }
    c.f[0] = ld32((c.r[29].w[0] + 524u));
    set32(c.r[4], c.r[29].w[0] + 8384u);
    c.f[1] = ld32((c.r[29].w[0] + 528u));
    set32(c.r[5], c.r[29].w[0] + 8400u);
    c.f[2] = ld32((c.r[29].w[0] + 532u));
    set32(c.r[6], c.r[29].w[0] + 8416u);
    c.f[3] = ld32((c.r[29].w[0] + 536u));
    set32(c.r[7], c.r[29].w[0] + 8368u);
    st32((c.r[29].w[0] + 8380u), c.f[0]);
    st32((c.r[29].w[0] + 8376u), c.f[1]);
    st32((c.r[29].w[0] + 8372u), c.f[2]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002213A0u); st32((c.r[29].w[0] + 8368u), c.f[3]);  if (depth < kMaxDepth) unit_0041(c, 159u, depth + 1u); else { c.pc = 0x00207090u; return; } if (c.pc != 0x002213A0u) [[unlikely]] return; }
L_002213A0:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002213ACu); set32(c.r[4], c.r[21].w[0] + 436u);  if (depth < kMaxDepth) unit_000F(c, 40u, depth + 1u); else { c.pc = 0x0013C4A0u; return; } if (c.pc != 0x002213ACu) [[unlikely]] return; }
L_002213AC:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 2;
L_002213B4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], c.r[29].w[0] + 8432u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00221294u | kUnwind; return; } goto L_00221294; } }
L_002213BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002213C4u);  if (depth < kMaxDepth) unit_0048(c, 328u, depth + 1u); else { c.pc = 0x00223900u; return; } if (c.pc != 0x002213C4u) [[unlikely]] return; }
L_002213C4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_002215DC; } }
    set32(c.r[3], ld32((c.r[21].w[0] + 464u)));
    set32(c.r[2], 0u + 28u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);  if (t) { goto L_002215D8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC1B00000u);
    c.f[3] = ld32((c.r[1].w[0] + 24488u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41700000u);
    c.f[0] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC1700000u);
    c.f[2] = c.r[2].w[0];
    st32((c.r[29].w[0] + 8308u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC1700000u);
    c.f[1] = ld32((c.r[1].w[0] + 24488u));
    c.f[0] = c.r[3].w[0];
    st32((c.r[29].w[0] + 8304u), c.f[3]);
    st32((c.r[29].w[0] + 8316u), c.f[0]);
    c.f[0] = c.r[2].w[0];
    st32((c.r[29].w[0] + 8352u), c.f[2]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC1700000u);
    st32((c.r[29].w[0] + 8312u), c.f[1]);
    c.f[1] = c.r[2].w[0];
    st32((c.r[29].w[0] + 8356u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x44800000u);
    c.f[0] = c.r[2].w[0];
    st32((c.r[29].w[0] + 8360u), c.f[1]);
    set32(c.r[2], c.r[29].w[0] + 8336u);
    st32((c.r[29].w[0] + 8364u), c.f[0]);
    st128((c.r[2].w[0]) & ~15u, c.vu0.vf[0]);
    set32(c.r[2], c.r[29].w[0] + 8320u);
    st128((c.r[2].w[0]) & ~15u, c.vu0.vf[0]);
    c.f[0] = 0u;
    set32(c.r[4], c.r[29].w[0] + 8352u);
    set32(c.r[5], c.r[29].w[0] + 8320u);
    set32(c.r[6], c.r[29].w[0] + 8320u);
    c.budget -= 33;
L_00221460:
    set32(c.r[7], c.r[29].w[0] + 8304u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022146Cu); st32((c.r[29].w[0] + 8332u), c.f[0]);  if (depth < kMaxDepth) unit_0041(c, 162u, depth + 1u); else { c.pc = 0x00207110u; return; } if (c.pc != 0x0022146Cu) [[unlikely]] return; }
L_0022146C:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00221478u); set32(c.r[4], c.r[21].w[0] + 436u);  if (depth < kMaxDepth) unit_000F(c, 40u, depth + 1u); else { c.pc = 0x0013C4A0u; return; } if (c.pc != 0x00221478u) [[unlikely]] return; }
L_00221478:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC1B00000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    st32((c.r[29].w[0] + 8308u), c.r[2].w[0]);
    c.f[1] = ld32((c.r[1].w[0] + 24480u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41700000u);
    set32(c.r[4], c.r[29].w[0] + 8352u);
    st32((c.r[29].w[0] + 8316u), c.r[2].w[0]);
    set32(c.r[5], c.r[29].w[0] + 8336u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41D80000u);
    set32(c.r[6], c.r[29].w[0] + 8320u);
    st32((c.r[29].w[0] + 8352u), c.r[2].w[0]);
    set32(c.r[7], c.r[29].w[0] + 8304u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC1600000u);
    st32((c.r[29].w[0] + 8344u), 0u);
    st32((c.r[29].w[0] + 8356u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC1D80000u);
    st32((c.r[29].w[0] + 8360u), c.r[2].w[0]);
    c.f[0] = ld32((c.r[1].w[0] + 24488u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x44C00000u);
    st32((c.r[29].w[0] + 8364u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 8304u), c.f[1]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC2200000u);
    st32((c.r[29].w[0] + 8336u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC1500000u);
    st32((c.r[29].w[0] + 8340u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 8312u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x44000000u);
    c.budget -= 30;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002214F0u); st32((c.r[29].w[0] + 8348u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0041(c, 162u, depth + 1u); else { c.pc = 0x00207110u; return; } if (c.pc != 0x002214F0u) [[unlikely]] return; }
L_002214F0:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002214FCu); set32(c.r[4], c.r[21].w[0] + 436u);  if (depth < kMaxDepth) unit_000F(c, 40u, depth + 1u); else { c.pc = 0x0013C4A0u; return; } if (c.pc != 0x002214FCu) [[unlikely]] return; }
L_002214FC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0xC1D80000u);
    c.f[0] = ld32((c.r[1].w[0] + 24488u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC1B00000u);
    st32((c.r[29].w[0] + 8308u), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x44C00000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41700000u);
    st32((c.r[29].w[0] + 8364u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 8316u), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC20C0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC1600000u);
    st32((c.r[29].w[0] + 8352u), c.r[4].w[0]);
    st32((c.r[29].w[0] + 8356u), c.r[2].w[0]);
    set32(c.r[5], c.r[29].w[0] + 8336u);
    st32((c.r[29].w[0] + 8304u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = ld32((c.r[1].w[0] + 24480u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41D80000u);
    st32((c.r[29].w[0] + 8360u), c.r[2].w[0]);
    set32(c.r[6], c.r[29].w[0] + 8320u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x420C0000u);
    st32((c.r[29].w[0] + 8340u), c.r[4].w[0]);
    st32((c.r[29].w[0] + 8336u), c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 8352u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43800000u);
    st32((c.r[29].w[0] + 8344u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 8348u), c.r[2].w[0]);
    set32(c.r[7], c.r[29].w[0] + 8304u);
    c.budget -= 30;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00221574u); st32((c.r[29].w[0] + 8312u), c.f[0]);  if (depth < kMaxDepth) unit_0041(c, 162u, depth + 1u); else { c.pc = 0x00207110u; return; } if (c.pc != 0x00221574u) [[unlikely]] return; }
L_00221574:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00221580u); set32(c.r[4], c.r[21].w[0] + 436u);  if (depth < kMaxDepth) unit_000F(c, 40u, depth + 1u); else { c.pc = 0x0013C4A0u; return; } if (c.pc != 0x00221580u) [[unlikely]] return; }
L_00221580:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41700000u);
    c.f[0] = ld32((c.r[1].w[0] + 24480u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC1B00000u);
    st32((c.r[29].w[0] + 8308u), c.r[2].w[0]);
    set32(c.r[5], c.r[29].w[0] + 8320u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC1700000u);
    st32((c.r[29].w[0] + 8316u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 8356u), c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 8352u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x44C00000u);
    st32((c.r[29].w[0] + 8352u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 8364u), c.r[2].w[0]);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[29].w[0] + 8360u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 8304u), c.f[0]);
    set32(c.r[7], c.r[29].w[0] + 8304u);
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002215CCu); st32((c.r[29].w[0] + 8312u), c.f[0]);  if (depth < kMaxDepth) unit_0041(c, 162u, depth + 1u); else { c.pc = 0x00207110u; return; } if (c.pc != 0x002215CCu) [[unlikely]] return; }
L_002215CC:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002215D8u); set32(c.r[4], c.r[21].w[0] + 436u);  if (depth < kMaxDepth) unit_000F(c, 40u, depth + 1u); else { c.pc = 0x0013C4A0u; return; } if (c.pc != 0x002215D8u) [[unlikely]] return; }
L_002215D8:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 1;
L_002215DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002215E4u); c.r[5].d[0] = 0ull | 50006ull;  if (depth < kMaxDepth) unit_0017(c, 122u, depth + 1u); else { c.pc = 0x0015D740u; return; } if (c.pc != 0x002215E4u) [[unlikely]] return; }
L_002215E4:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_00221600; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002215F8u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 142u, depth + 1u); else { c.pc = 0x0015DA70u; return; } if (c.pc != 0x002215F8u) [[unlikely]] return; }
L_002215F8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00221604; } }
L_00221600:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00221604:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (t) { goto L_002217D0; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], ld32((c.r[1].w[0] + 31520u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_002217CC; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022162Cu); set32(c.r[6], 0u + 8192u);  if (depth < kMaxDepth) unit_0009(c, 49u, depth + 1u); else { c.pc = 0x00124ED8u; return; } if (c.pc != 0x0022162Cu) [[unlikely]] return; }
L_0022162C:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00221638u); c.r[5].d[0] = 0ull | 50006ull;  if (depth < kMaxDepth) unit_0017(c, 122u, depth + 1u); else { c.pc = 0x0015D740u; return; } if (c.pc != 0x00221638u) [[unlikely]] return; }
L_00221638:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00221650; } }
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00221650u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 147u, depth + 1u); else { c.pc = 0x0015DBB0u; return; } if (c.pc != 0x00221650u) [[unlikely]] return; }
L_00221650:
    set32(c.r[4], c.r[29].w[0] + 624u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00221660u); set32(c.r[6], 0u + 7680u);  if (depth < kMaxDepth) unit_0009(c, 49u, depth + 1u); else { c.pc = 0x00124ED8u; return; } if (c.pc != 0x00221660u) [[unlikely]] return; }
L_00221660:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022166Cu); c.r[5].d[0] = 0ull | 50006ull;  if (depth < kMaxDepth) unit_0017(c, 122u, depth + 1u); else { c.pc = 0x0015D740u; return; } if (c.pc != 0x0022166Cu) [[unlikely]] return; }
L_0022166C:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_00221688; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00221680u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 144u, depth + 1u); else { c.pc = 0x0015DB40u; return; } if (c.pc != 0x00221680u) [[unlikely]] return; }
L_00221680:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_00221690; } }
L_00221688:
    c.r[2].d[0] = 0ull + 0ull;
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_00221690:
    c.r[10].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 47u);
    set32(c.r[5], 0u + 13u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u + 10u);  if (t) { goto L_0022173C; } }
L_002216AC:
    c.r[7].d[0] = ld8((c.r[3].w[0]));
    c.budget -= 3;
    { const bool t = c.r[7].d[0] == c.r[6].d[0]; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0022174C; } }
    c.budget -= 2;
    { const bool t = c.r[9].d[0] == 0ull;  if (t) { goto L_002216EC; } }
    c.budget -= 2;
    { const bool t = c.r[7].d[0] == c.r[5].d[0]; set32(c.r[3], c.r[17].w[0] << 8);  if (t) { goto L_002216D0; } }
    c.budget -= 2;
    { const bool t = c.r[7].d[0] != c.r[4].d[0];  if (t) { goto L_002216EC; } }
L_002216D0:
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[3].w[0] + c.r[29].w[0]);
    set32(c.r[17], c.r[17].w[0] + 1u);
    set32(c.r[3], c.r[10].w[0] + c.r[3].w[0]);
    st8((c.r[3].w[0] + 624u), static_cast<std::uint8_t>(0u));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; c.r[10].d[0] = 0ull + 0ull;  if (t) { goto L_00221738; } }
L_002216EC:
    c.budget -= 2;
    { const bool t = c.r[9].d[0] == 0ull; c.r[3].d[0] = c.r[7].d[0] & 255ull;  if (t) { goto L_00221708; } }
    c.r[3].d[0] = c.r[7].d[0] & 255ull;
    c.r[1].d[0] = c.r[3].sd[0] < 32ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[3].d[0] = c.r[7].d[0] & 255ull;  if (t) { goto L_00221718; } }
    c.r[3].d[0] = c.r[7].d[0] & 255ull;
    c.budget -= 1;
L_00221708:
    c.r[1].d[0] = c.r[3].sd[0] < 33ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_00221738; } }
    c.r[3].d[0] = c.r[7].d[0] & 255ull;
    c.budget -= 1;
L_00221718:
    c.r[1].d[0] = c.r[3].sd[0] < 123ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[3], c.r[17].w[0] << 8);  if (t) { goto L_00221738; } }
    set32(c.r[9], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[29].w[0]);
    set32(c.r[3], c.r[10].w[0] + c.r[3].w[0]);
    st8((c.r[3].w[0] + 624u), static_cast<std::uint8_t>(c.r[7].w[0]));
    set32(c.r[10], c.r[10].w[0] + 1u);
    c.budget -= 5;
L_00221738:
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.budget -= 1;
L_0022173C:
    c.r[3].d[0] = c.r[8].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], c.r[18].w[0] + c.r[8].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002216ACu | kUnwind; return; } goto L_002216AC; } }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0022174C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;  if (t) { goto L_002217C4; } }
L_00221754:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[5], c.r[5].w[0] + 24448u);
    set32(c.r[6], c.r[29].w[0] + 520u);
    set32(c.r[4], c.r[2].w[0] + 624u);
    set32(c.r[7], c.r[29].w[0] + 516u);
    set32(c.r[8], c.r[29].w[0] + 512u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00221778u); set32(c.r[9], c.r[29].w[0] + 508u);  if (depth < kMaxDepth) unit_0009(c, 207u, depth + 1u); else { c.pc = 0x001274F0u; return; } if (c.pc != 0x00221778u) [[unlikely]] return; }
L_00221778:
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_0022178C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    st32((c.r[29].w[0] + 508u), c.r[2].w[0]);
    c.budget -= 2;
L_0022178C:
    c.f[0] = ld32((c.r[29].w[0] + 508u));
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.f[1] = ld32((c.r[29].w[0] + 512u));
    set32(c.r[5], c.r[29].w[0] + 608u);
    c.f[2] = ld32((c.r[29].w[0] + 516u));
    c.r[6].d[0] = 0ull + 0ull;
    c.f[3] = ld32((c.r[29].w[0] + 520u));
    st32((c.r[29].w[0] + 620u), c.f[0]);
    st32((c.r[29].w[0] + 616u), c.f[1]);
    st32((c.r[29].w[0] + 612u), c.f[2]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002217BCu); st32((c.r[29].w[0] + 608u), c.f[3]);  if (depth < kMaxDepth) unit_004B(c, 143u, depth + 1u); else { c.pc = 0x0022E1D0u; return; } if (c.pc != 0x002217BCu) [[unlikely]] return; }
L_002217BC:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 2;
L_002217C4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[16].w[0] << 8);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00221754u | kUnwind; return; } goto L_00221754; } }
L_002217CC:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 1;
L_002217D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002217D8u);  if (depth < kMaxDepth) unit_0047(c, 71u, depth + 1u); else { c.pc = 0x0021D450u; return; } if (c.pc != 0x002217D8u) [[unlikely]] return; }
L_002217D8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_002218D4; } }
L_002217E0:
    set32(c.r[2], c.r[2].w[0] + c.r[21].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 1748u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], c.r[16].w[0] << 3);  if (t) { goto L_002218D0; } }
    set32(c.r[2], c.r[2].w[0] + c.r[21].w[0]);
    c.r[5].d[0] = ld16((c.r[2].w[0] + 470u));
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);  if (t) { goto L_002218D0; } }
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[4], ld32((c.r[1].w[0] + 28304u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00221810u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_001A(c, 50u, depth + 1u); else { c.pc = 0x00168C20u; return; } if (c.pc != 0x00221810u) [[unlikely]] return; }
L_00221810:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[1].d[0] = c.r[16].sd[0] < 140ll ? 1ull : 0ull;  if (t) { goto L_002218D0; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[4], 0u + 8784u);  if (t) { goto L_00221874; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00221828u); set32(c.r[4], 0u + 176u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00221828u) [[unlikely]] return; }
L_00221828:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[16].w[0] << 3);  if (t) { goto L_00221854; } }
    set32(c.r[3], c.r[16].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[21].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[21].w[0]);
    c.r[5].d[0] = ld16((c.r[4].w[0] + 470u));
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[8], ld32((c.r[3].w[0] + 1748u)));
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00221854u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0043(c, 163u, depth + 1u); else { c.pc = 0x0020F340u; return; } if (c.pc != 0x00221854u) [[unlikely]] return; }
L_00221854:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00221864; } }
    set32(c.r[2], c.r[2].w[0] + 24u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 2;
L_00221864:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022186Cu); set32(c.r[4], c.r[21].w[0] + 436u);  if (depth < kMaxDepth) unit_000F(c, 40u, depth + 1u); else { c.pc = 0x0013C4A0u; return; } if (c.pc != 0x0022186Cu) [[unlikely]] return; }
L_0022186C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[16].w[0] << 2);  if (t) { goto L_002218BC; } }
L_00221874:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022187Cu);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0022187Cu) [[unlikely]] return; }
L_0022187C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002218B0; } }
    set32(c.r[4], c.r[16].w[0] << 3);
    set32(c.r[3], c.r[16].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[21].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[21].w[0]);
    c.r[5].d[0] = ld16((c.r[4].w[0] + 470u));
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[8], ld32((c.r[3].w[0] + 1748u)));
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002218ACu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0043(c, 182u, depth + 1u); else { c.pc = 0x0020F890u; return; } if (c.pc != 0x002218ACu) [[unlikely]] return; }
L_002218AC:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_002218B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002218B8u); set32(c.r[4], c.r[21].w[0] + 436u);  if (depth < kMaxDepth) unit_000F(c, 40u, depth + 1u); else { c.pc = 0x0013C4A0u; return; } if (c.pc != 0x002218B8u) [[unlikely]] return; }
L_002218B8:
    set32(c.r[2], c.r[16].w[0] << 2);
    c.budget -= 1;
L_002218BC:
    set32(c.r[2], c.r[2].w[0] + c.r[21].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 1748u)));
    st32((c.r[3].w[0] + 256u), 0u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002218D0u); set32(c.r[4], ld32((c.r[2].w[0] + 1748u)));  if (depth < kMaxDepth) unit_0047(c, 129u, depth + 1u); else { c.pc = 0x0021D9C0u; return; } if (c.pc != 0x002218D0u) [[unlikely]] return; }
L_002218D0:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_002218D4:
    c.r[2].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(160ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[16].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002217E0u | kUnwind; return; } goto L_002217E0; } }
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002218ECu); c.r[5].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_004B(c, 85u, depth + 1u); else { c.pc = 0x0022D330u; return; } if (c.pc != 0x002218ECu) [[unlikely]] return; }
L_002218EC:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002218F8u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0045(c, 73u, depth + 1u); else { c.pc = 0x00216160u; return; } if (c.pc != 0x002218F8u) [[unlikely]] return; }
L_002218F8:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00221904u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0017(c, 138u, depth + 1u); else { c.pc = 0x0015D9D0u; return; } if (c.pc != 0x00221904u) [[unlikely]] return; }
L_00221904:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00030000u);
    set32(c.r[1], c.r[21].w[0] + c.r[1].w[0]);
    st32((c.r[1].w[0] + 4504u), 0u);
    set32(c.r[2], ld32((c.r[21].w[0] + 2504u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002219B8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00221924u);  if (depth < kMaxDepth) unit_003D(c, 81u, depth + 1u); else { c.pc = 0x001F53D0u; return; } if (c.pc != 0x00221924u) [[unlikely]] return; }
L_00221924:
    set32(c.r[3], 0u + 35u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[4], 0u + 11328u);  if (t) { goto L_00221978; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00221938u);  if (depth < kMaxDepth) unit_003D(c, 81u, depth + 1u); else { c.pc = 0x001F53D0u; return; } if (c.pc != 0x00221938u) [[unlikely]] return; }
L_00221938:
    set32(c.r[3], 0u + 36u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[4], 0u + 480u);  if (t) { goto L_00221974; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022194Cu);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0022194Cu) [[unlikely]] return; }
L_0022194C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0022195C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022195Cu);  if (depth < kMaxDepth) unit_0046(c, 68u, depth + 1u); else { c.pc = 0x00219570u; return; } if (c.pc != 0x0022195Cu) [[unlikely]] return; }
L_0022195C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0022196C; } }
    set32(c.r[2], c.r[2].w[0] + 436u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 2;
L_0022196C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00221974u); set32(c.r[4], c.r[21].w[0] + 436u);  if (depth < kMaxDepth) unit_000F(c, 40u, depth + 1u); else { c.pc = 0x0013C4A0u; return; } if (c.pc != 0x00221974u) [[unlikely]] return; }
L_00221974:
    set32(c.r[4], 0u + 11328u);
    c.budget -= 1;
L_00221978:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00221980u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00221980u) [[unlikely]] return; }
L_00221980:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00221990; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00221990u); c.r[5].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0045(c, 143u, depth + 1u); else { c.pc = 0x00216F80u; return; } if (c.pc != 0x00221990u) [[unlikely]] return; }
L_00221990:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002219A0; } }
    set32(c.r[2], c.r[2].w[0] + 36u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 2;
L_002219A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002219A8u); set32(c.r[4], c.r[21].w[0] + 436u);  if (depth < kMaxDepth) unit_000F(c, 40u, depth + 1u); else { c.pc = 0x0013C4A0u; return; } if (c.pc != 0x002219A8u) [[unlikely]] return; }
L_002219A8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00030000u);
    set32(c.r[2], 0u + 1u);
    set32(c.r[1], c.r[21].w[0] + c.r[1].w[0]);
    st32((c.r[1].w[0] + 4504u), c.r[2].w[0]);
    c.budget -= 4;
L_002219B8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], c.r[29].w[0] + 592u);
    set32(c.r[6], ld32((c.r[1].w[0] + 31112u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[5], ld32((c.r[1].w[0] + 31104u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002219D4u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0017(c, 125u, depth + 1u); else { c.pc = 0x0015D850u; return; } if (c.pc != 0x002219D4u) [[unlikely]] return; }
L_002219D4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_00221AB0; } }
L_002219DC:
    set32(c.r[4], c.r[29].w[0] + 592u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002219E8u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 147u, depth + 1u); else { c.pc = 0x0015DBB0u; return; } if (c.pc != 0x002219E8u) [[unlikely]] return; }
L_002219E8:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002219FCu); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0017(c, 166u, depth + 1u); else { c.pc = 0x0015DEF0u; return; } if (c.pc != 0x002219FCu) [[unlikely]] return; }
L_002219FC:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00221A08u); set32(c.r[4], 0u + 272u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00221A08u) [[unlikely]] return; }
L_00221A08:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[3].d[0] = c.r[16].d[0] & 65535ull;  if (t) { goto L_00221A28; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.f[12] = c.r[3].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00221A24u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0013(c, 243u, depth + 1u); else { c.pc = 0x0014F930u; return; } if (c.pc != 0x00221A24u) [[unlikely]] return; }
L_00221A24:
    c.r[3].d[0] = c.r[16].d[0] & 65535ull;
    c.budget -= 1;
L_00221A28:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00030000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[29].w[0] + 576u);
    set32(c.r[3], c.r[3].w[0] + c.r[21].w[0]);
    set32(c.r[1], c.r[3].w[0] + c.r[1].w[0]);
    st32((c.r[1].w[0] + 4388u), c.r[2].w[0]);
    st128((c.r[4].w[0]) & ~15u, c.vu0.vf[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40400000u);
    c.f[1] = c.r[2].w[0];
    c.budget -= 11;
    { const bool t = c.r[16].sd[0] < 0; set32(c.r[3], c.r[16].w[0] >> 1);  if (t) { goto L_00221A60; } }
    c.f[0] = c.r[16].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_00221A78; } }
L_00221A60:
    c.r[2].d[0] = c.r[16].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::add(c.f[0], c.f[0]);
    c.budget -= 6;
L_00221A78:
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    c.r[2].d[0] = c.r[16].d[0] & 65535ull;
    set32(c.r[2], c.r[2].w[0] << 2);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00030000u);
    set32(c.r[2], c.r[2].w[0] + c.r[21].w[0]);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    st32((c.r[29].w[0] + 576u), c.f[0]);
    set32(c.r[4], ld32((c.r[1].w[0] + 4388u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 152u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.budget -= 12;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00221AA8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00221AA8u) [[unlikely]] return; }
L_00221AA8:
    set32(c.r[2], c.r[16].w[0] + 1u);
    c.r[16].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 2;
L_00221AB0:
    c.r[2].d[0] = c.r[16].d[0] & 65535ull;
    c.r[2].d[0] = c.r[2].sd[0] < 16ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[6].d[0] = c.r[16].d[0] & 65535ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002219DCu | kUnwind; return; } goto L_002219DC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00221AC8u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100210u; return; } if (c.pc != 0x00221AC8u) [[unlikely]] return; }
L_00221AC8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00030000u);
    set32(c.r[1], c.r[21].w[0] + c.r[1].w[0]);
    set32(c.r[2], ld32((c.r[1].w[0] + 4452u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_00221B10; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00221AE4u); set32(c.r[4], 0u + 96u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00221AE4u) [[unlikely]] return; }
L_00221AE4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00221AF4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00221AF4u); c.r[5].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0047(c, 149u, depth + 1u); else { c.pc = 0x0021DD20u; return; } if (c.pc != 0x00221AF4u) [[unlikely]] return; }
L_00221AF4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00221B04; } }
    set32(c.r[2], c.r[2].w[0] + 28u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 2;
L_00221B04:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00221B0Cu); set32(c.r[4], c.r[21].w[0] + 436u);  if (depth < kMaxDepth) unit_000F(c, 40u, depth + 1u); else { c.pc = 0x0013C4A0u; return; } if (c.pc != 0x00221B0Cu) [[unlikely]] return; }
L_00221B0C:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00221B10:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].sd[0] < 3ll ? 1ull : 0ull;  if (t) { goto L_00221B54; } }
L_00221B18:
    set32(c.r[3], c.r[16].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + 28640u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], c.r[2].w[0] + 64u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00221B30u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 348u, depth + 1u); else { c.pc = 0x00103930u; return; } if (c.pc != 0x00221B30u) [[unlikely]] return; }
L_00221B30:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], c.r[16].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + 28640u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], c.r[2].w[0] + 192u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00221B4Cu); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 348u, depth + 1u); else { c.pc = 0x00103930u; return; } if (c.pc != 0x00221B4Cu) [[unlikely]] return; }
L_00221B4C:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 2;
L_00221B54:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00221B18u | kUnwind; return; } goto L_00221B18; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], c.r[4].w[0] + 28640u);
    set32(c.r[5], c.r[5].w[0] + 29856u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00221B74u); set32(c.r[6], 0u + 1216u);  if (depth < kMaxDepth) unit_0009(c, 40u, depth + 1u); else { c.pc = 0x00124D20u; return; } if (c.pc != 0x00221B74u) [[unlikely]] return; }
L_00221B74:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00221B7Cu);  if (depth < kMaxDepth) unit_004B(c, 32u, depth + 1u); else { c.pc = 0x0022C790u; return; } if (c.pc != 0x00221B7Cu) [[unlikely]] return; }
L_00221B7C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], ld32((c.r[1].w[0] + 31520u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[4], 0u + 56u);  if (t) { goto L_00221B9C; } }
    set32(c.r[2], 0u + 6u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00221BCC; } }
L_00221B9C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00221BA4u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00221BA4u) [[unlikely]] return; }
L_00221BA4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00221BB4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00221BB4u);  if (depth < kMaxDepth) unit_003F(c, 333u, depth + 1u); else { c.pc = 0x001FF510u; return; } if (c.pc != 0x00221BB4u) [[unlikely]] return; }
L_00221BB4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00221BC4; } }
    set32(c.r[2], c.r[2].w[0] + 24u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 2;
L_00221BC4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00221BCCu); set32(c.r[4], c.r[21].w[0] + 436u);  if (depth < kMaxDepth) unit_000F(c, 40u, depth + 1u); else { c.pc = 0x0013C4A0u; return; } if (c.pc != 0x00221BCCu) [[unlikely]] return; }
L_00221BCC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00221BD4u); set32(c.r[4], 0u + 52u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00221BD4u) [[unlikely]] return; }
L_00221BD4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00221BF8; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 29856u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00221BF4u); set32(c.r[6], c.r[6].w[0] + 28640u);  if (depth < kMaxDepth) unit_004B(c, 8u, depth + 1u); else { c.pc = 0x0022C1C0u; return; } if (c.pc != 0x00221BF4u) [[unlikely]] return; }
L_00221BF4:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00221BF8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00221C00u); set32(c.r[4], c.r[21].w[0] + 436u);  if (depth < kMaxDepth) unit_000F(c, 40u, depth + 1u); else { c.pc = 0x0013C4A0u; return; } if (c.pc != 0x00221C00u) [[unlikely]] return; }
L_00221C00:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00221C08u); set32(c.r[4], 0u + 40u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00221C08u) [[unlikely]] return; }
L_00221C08:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00221C1C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00221C18u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0047(c, 140u, depth + 1u); else { c.pc = 0x0021DC30u; return; } if (c.pc != 0x00221C18u) [[unlikely]] return; }
L_00221C18:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00221C1C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00221C24u); set32(c.r[4], c.r[21].w[0] + 436u);  if (depth < kMaxDepth) unit_000F(c, 40u, depth + 1u); else { c.pc = 0x0013C4A0u; return; } if (c.pc != 0x00221C24u) [[unlikely]] return; }
L_00221C24:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00221C2Cu); set32(c.r[4], 0u + 40u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00221C2Cu) [[unlikely]] return; }
L_00221C2C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00221C40; } }
L_00221C34:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00221C3Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0047(c, 143u, depth + 1u); else { c.pc = 0x0021DC80u; return; } if (c.pc != 0x00221C3Cu) [[unlikely]] return; }
L_00221C3C:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00221C40:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00221C48u); set32(c.r[4], c.r[21].w[0] + 436u);  if (depth < kMaxDepth) unit_000F(c, 40u, depth + 1u); else { c.pc = 0x0013C4A0u; return; } if (c.pc != 0x00221C48u) [[unlikely]] return; }
L_00221C48:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00221C50u); set32(c.r[4], 0u + 40u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00221C50u) [[unlikely]] return; }
L_00221C50:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00221C64; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00221C60u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0047(c, 146u, depth + 1u); else { c.pc = 0x0021DCD0u; return; } if (c.pc != 0x00221C60u) [[unlikely]] return; }
    goto L_00221C60;
L_00221C5C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00221C60:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00221C64:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00221C6Cu); set32(c.r[4], c.r[21].w[0] + 436u);  if (depth < kMaxDepth) unit_000F(c, 40u, depth + 1u); else { c.pc = 0x0013C4A0u; return; } if (c.pc != 0x00221C6Cu) [[unlikely]] return; }
L_00221C6C:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00221C7C; } }
    set32(c.r[4], c.r[4].w[0] + 436u);
    c.budget -= 1;
L_00221C7C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00221C84u);  if (depth < kMaxDepth) unit_004B(c, 52u, depth + 1u); else { c.pc = 0x0022CF90u; return; } if (c.pc != 0x00221C84u) [[unlikely]] return; }
L_00221C84:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00221C8Cu);  if (depth < kMaxDepth) unit_003E(c, 407u, depth + 1u); else { c.pc = 0x001FBB90u; return; } if (c.pc != 0x00221C8Cu) [[unlikely]] return; }
L_00221C8C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00221C94u);  if (depth < kMaxDepth) unit_003F(c, 299u, depth + 1u); else { c.pc = 0x001FF0D0u; return; } if (c.pc != 0x00221C94u) [[unlikely]] return; }
L_00221C94:
    set32(c.r[4], c.r[29].w[0] + 592u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00221CA0u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0017(c, 138u, depth + 1u); else { c.pc = 0x0015D9D0u; return; } if (c.pc != 0x00221CA0u) [[unlikely]] return; }
L_00221CA0:
    c.r[2].d[0] = c.r[21].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 480u));
    ld128((c.r[29].w[0] + 464u) & ~15u, c.r[30]);
    c.r[1].d[0] = 0ull | 36288ull;
    ld128((c.r[29].w[0] + 448u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 432u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 416u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 400u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 384u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 368u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 352u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 336u) & ~15u, c.r[16]);
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + c.r[1].w[0]);  c.pc = t; return; }
L_00221CE0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 9;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002221A4; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] - 5552u);
    set32(c.r[2], c.r[2].w[0] - 5532u);
    st32((c.r[17].w[0]), c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    st32((c.r[17].w[0] + 416u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] - 5516u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] - 5500u);
    st32((c.r[17].w[0] + 424u), c.r[3].w[0]);
    st32((c.r[17].w[0] + 460u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[1].w[0] + 26176u)));
    c.budget -= 16;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00221D4C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00221D4Cu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0024(c, 72u, depth + 1u); else { c.pc = 0x00190960u; return; } if (c.pc != 0x00221D4Cu) [[unlikely]] return; }
L_00221D4C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[1].w[0] + 26176u), 0u);  if (t) { goto L_00221D6C; } }
L_00221D5C:
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00221D68u); set32(c.r[4], ld32((c.r[2].w[0] + 1748u)));  if (depth < kMaxDepth) unit_0015(c, 93u, depth + 1u); else { c.pc = 0x00156F20u; return; } if (c.pc != 0x00221D68u) [[unlikely]] return; }
L_00221D68:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_00221D6C:
    c.r[2].d[0] = c.r[18].d[0] < static_cast<std::uint64_t>(160ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[18].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00221D5Cu | kUnwind; return; } goto L_00221D5C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_00221D90; } }
L_00221D80:
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00221D8Cu); set32(c.r[4], ld32((c.r[2].w[0] + 2388u)));  if (depth < kMaxDepth) unit_0015(c, 93u, depth + 1u); else { c.pc = 0x00156F20u; return; } if (c.pc != 0x00221D8Cu) [[unlikely]] return; }
L_00221D8C:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_00221D90:
    c.r[2].d[0] = c.r[18].d[0] < static_cast<std::uint64_t>(16ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[18].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00221D80u | kUnwind; return; } goto L_00221D80; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_00221DB4; } }
L_00221DA4:
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00221DB0u); set32(c.r[4], ld32((c.r[2].w[0] + 2452u)));  if (depth < kMaxDepth) unit_0015(c, 93u, depth + 1u); else { c.pc = 0x00156F20u; return; } if (c.pc != 0x00221DB0u) [[unlikely]] return; }
L_00221DB0:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_00221DB4:
    c.r[2].d[0] = c.r[18].d[0] < static_cast<std::uint64_t>(12ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[18].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00221DA4u | kUnwind; return; } goto L_00221DA4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00221DC8u); set32(c.r[4], ld32((c.r[17].w[0] + 2500u)));  if (depth < kMaxDepth) unit_0015(c, 93u, depth + 1u); else { c.pc = 0x00156F20u; return; } if (c.pc != 0x00221DC8u) [[unlikely]] return; }
L_00221DC8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00221DD0u); set32(c.r[4], ld32((c.r[17].w[0] + 2504u)));  if (depth < kMaxDepth) unit_0015(c, 93u, depth + 1u); else { c.pc = 0x00156F20u; return; } if (c.pc != 0x00221DD0u) [[unlikely]] return; }
L_00221DD0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00221DD8u); set32(c.r[4], ld32((c.r[17].w[0] + 2508u)));  if (depth < kMaxDepth) unit_0015(c, 93u, depth + 1u); else { c.pc = 0x00156F20u; return; } if (c.pc != 0x00221DD8u) [[unlikely]] return; }
L_00221DD8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00221DE0u); set32(c.r[4], ld32((c.r[17].w[0] + 2512u)));  if (depth < kMaxDepth) unit_0015(c, 93u, depth + 1u); else { c.pc = 0x00156F20u; return; } if (c.pc != 0x00221DE0u) [[unlikely]] return; }
L_00221DE0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00221DE8u); set32(c.r[4], ld32((c.r[17].w[0] + 2516u)));  if (depth < kMaxDepth) unit_0015(c, 93u, depth + 1u); else { c.pc = 0x00156F20u; return; } if (c.pc != 0x00221DE8u) [[unlikely]] return; }
L_00221DE8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00221DF0u); set32(c.r[4], ld32((c.r[17].w[0] + 2520u)));  if (depth < kMaxDepth) unit_0015(c, 93u, depth + 1u); else { c.pc = 0x00156F20u; return; } if (c.pc != 0x00221DF0u) [[unlikely]] return; }
L_00221DF0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00221DF8u); set32(c.r[4], ld32((c.r[17].w[0] + 2524u)));  if (depth < kMaxDepth) unit_0015(c, 93u, depth + 1u); else { c.pc = 0x00156F20u; return; } if (c.pc != 0x00221DF8u) [[unlikely]] return; }
L_00221DF8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00221E00u); set32(c.r[4], ld32((c.r[17].w[0] + 2528u)));  if (depth < kMaxDepth) unit_0015(c, 93u, depth + 1u); else { c.pc = 0x00156F20u; return; } if (c.pc != 0x00221E00u) [[unlikely]] return; }
L_00221E00:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00221E08u); set32(c.r[4], ld32((c.r[17].w[0] + 2532u)));  if (depth < kMaxDepth) unit_0015(c, 93u, depth + 1u); else { c.pc = 0x00156F20u; return; } if (c.pc != 0x00221E08u) [[unlikely]] return; }
L_00221E08:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00221E10u); set32(c.r[4], ld32((c.r[17].w[0] + 2536u)));  if (depth < kMaxDepth) unit_0015(c, 93u, depth + 1u); else { c.pc = 0x00156F20u; return; } if (c.pc != 0x00221E10u) [[unlikely]] return; }
L_00221E10:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_00221E28; } }
L_00221E18:
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00221E24u); set32(c.r[4], ld32((c.r[2].w[0] + 2540u)));  if (depth < kMaxDepth) unit_0015(c, 93u, depth + 1u); else { c.pc = 0x00156F20u; return; } if (c.pc != 0x00221E24u) [[unlikely]] return; }
L_00221E24:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_00221E28:
    c.r[2].d[0] = c.r[18].d[0] < static_cast<std::uint64_t>(32ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[18].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00221E18u | kUnwind; return; } goto L_00221E18; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_00221E54; } }
L_00221E3C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00030000u);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00221E50u); set32(c.r[4], ld32((c.r[1].w[0] + 4256u)));  if (depth < kMaxDepth) unit_0015(c, 93u, depth + 1u); else { c.pc = 0x00156F20u; return; } if (c.pc != 0x00221E50u) [[unlikely]] return; }
L_00221E50:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_00221E54:
    c.r[2].d[0] = c.r[18].d[0] < static_cast<std::uint64_t>(3ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[18].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00221E3Cu | kUnwind; return; } goto L_00221E3C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_00221E80; } }
L_00221E68:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00030000u);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00221E7Cu); set32(c.r[4], ld32((c.r[1].w[0] + 4268u)));  if (depth < kMaxDepth) unit_0015(c, 93u, depth + 1u); else { c.pc = 0x00156F20u; return; } if (c.pc != 0x00221E7Cu) [[unlikely]] return; }
L_00221E7C:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_00221E80:
    c.r[2].d[0] = c.r[18].d[0] < static_cast<std::uint64_t>(10ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[18].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00221E68u | kUnwind; return; } goto L_00221E68; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_00221EAC; } }
L_00221E94:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00030000u);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00221EA8u); set32(c.r[4], ld32((c.r[1].w[0] + 4308u)));  if (depth < kMaxDepth) unit_0015(c, 93u, depth + 1u); else { c.pc = 0x00156F20u; return; } if (c.pc != 0x00221EA8u) [[unlikely]] return; }
L_00221EA8:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_00221EAC:
    c.r[2].d[0] = c.r[18].d[0] < static_cast<std::uint64_t>(15ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[18].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00221E94u | kUnwind; return; } goto L_00221E94; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00030000u);
    set32(c.r[1], c.r[17].w[0] + c.r[1].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00221EC8u); set32(c.r[4], ld32((c.r[1].w[0] + 4384u)));  if (depth < kMaxDepth) unit_0015(c, 93u, depth + 1u); else { c.pc = 0x00156F20u; return; } if (c.pc != 0x00221EC8u) [[unlikely]] return; }
L_00221EC8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_00221EE8; } }
L_00221ED0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00030000u);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00221EE4u); set32(c.r[4], ld32((c.r[1].w[0] + 4388u)));  if (depth < kMaxDepth) unit_0015(c, 93u, depth + 1u); else { c.pc = 0x00156F20u; return; } if (c.pc != 0x00221EE4u) [[unlikely]] return; }
L_00221EE4:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_00221EE8:
    c.r[2].d[0] = c.r[18].d[0] < static_cast<std::uint64_t>(16ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[18].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00221ED0u | kUnwind; return; } goto L_00221ED0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_00221F14; } }
L_00221EFC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00030000u);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00221F10u); set32(c.r[4], ld32((c.r[1].w[0] + 4452u)));  if (depth < kMaxDepth) unit_0015(c, 93u, depth + 1u); else { c.pc = 0x00156F20u; return; } if (c.pc != 0x00221F10u) [[unlikely]] return; }
L_00221F10:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_00221F14:
    c.r[2].d[0] = c.r[18].d[0] < static_cast<std::uint64_t>(5ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[18].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00221EFCu | kUnwind; return; } goto L_00221EFC; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00030000u);
    set32(c.r[1], c.r[17].w[0] + c.r[1].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00221F30u); set32(c.r[4], ld32((c.r[1].w[0] + 4472u)));  if (depth < kMaxDepth) unit_0015(c, 93u, depth + 1u); else { c.pc = 0x00156F20u; return; } if (c.pc != 0x00221F30u) [[unlikely]] return; }
L_00221F30:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00030000u);
    set32(c.r[1], c.r[17].w[0] + c.r[1].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00221F40u); set32(c.r[4], ld32((c.r[1].w[0] + 4476u)));  if (depth < kMaxDepth) unit_0015(c, 93u, depth + 1u); else { c.pc = 0x00156F20u; return; } if (c.pc != 0x00221F40u) [[unlikely]] return; }
L_00221F40:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_00221F58; } }
L_00221F48:
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00221F54u); set32(c.r[4], ld32((c.r[2].w[0] + 2860u)));  if (depth < kMaxDepth) unit_0015(c, 93u, depth + 1u); else { c.pc = 0x00156F20u; return; } if (c.pc != 0x00221F54u) [[unlikely]] return; }
L_00221F54:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_00221F58:
    c.r[2].d[0] = c.r[18].d[0] < static_cast<std::uint64_t>(12ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[18].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00221F48u | kUnwind; return; } goto L_00221F48; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00030000u);
    set32(c.r[1], c.r[17].w[0] + c.r[1].w[0]);
    set32(c.r[4], ld32((c.r[1].w[0] + 4508u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00030000u);  if (t) { goto L_00221F94; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00221F90; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00221F90u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00221F90u) [[unlikely]] return; }
L_00221F90:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00030000u);
    c.budget -= 1;
L_00221F94:
    set32(c.r[1], c.r[17].w[0] + c.r[1].w[0]);
    set32(c.r[4], ld32((c.r[1].w[0] + 4516u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00030000u);  if (t) { goto L_00221FC0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00221FBC; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00221FBCu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00221FBCu) [[unlikely]] return; }
L_00221FBC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00030000u);
    c.budget -= 1;
L_00221FC0:
    set32(c.r[1], c.r[17].w[0] + c.r[1].w[0]);
    set32(c.r[4], ld32((c.r[1].w[0] + 4512u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00030000u);  if (t) { goto L_00221FEC; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00221FE8; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00221FE8u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00221FE8u) [[unlikely]] return; }
L_00221FE8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00030000u);
    c.budget -= 1;
L_00221FEC:
    set32(c.r[1], c.r[17].w[0] + c.r[1].w[0]);
    set32(c.r[4], ld32((c.r[1].w[0] + 4496u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_00222008; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00222004u);  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x00222004u) [[unlikely]] return; }
L_00222004:
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00222008:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[18].d[0] < static_cast<std::uint64_t>(32ll) ? 1ull : 0ull;  if (t) { goto L_00222040; } }
L_00222010:
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 2732u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00222038; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00222038; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00222038u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00222038u) [[unlikely]] return; }
L_00222038:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[2].d[0] = c.r[18].d[0] < static_cast<std::uint64_t>(32ll) ? 1ull : 0ull;
    c.budget -= 2;
L_00222040:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[18].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00222010u | kUnwind; return; } goto L_00222010; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_00222084; } }
L_00222050:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00030000u);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    set32(c.r[4], ld32((c.r[1].w[0] + 4368u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00222080; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00222080; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00222080u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00222080u) [[unlikely]] return; }
L_00222080:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_00222084:
    c.r[2].d[0] = c.r[18].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[18].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00222050u | kUnwind; return; } goto L_00222050; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_002220CC; } }
L_00222098:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00030000u);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    set32(c.r[4], ld32((c.r[1].w[0] + 4376u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002220C8; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002220C8; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002220C8u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002220C8u) [[unlikely]] return; }
L_002220C8:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_002220CC:
    c.r[2].d[0] = c.r[18].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[18].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00222098u | kUnwind; return; } goto L_00222098; } }
    c.r[19].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002220DC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], c.r[19].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 28352u);
    set32(c.r[18], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[18].w[0])));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00222110; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00222110; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00222110u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00222110u) [[unlikely]] return; }
L_00222110:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.r[2].d[0] = c.r[19].sd[0] < 64ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[18].w[0]), 0u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002220DCu | kUnwind; return; } goto L_002220DC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00222128u);  if (depth < kMaxDepth) unit_0025(c, 227u, depth + 1u); else { c.pc = 0x00196270u; return; } if (c.pc != 0x00222128u) [[unlikely]] return; }
L_00222128:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull; set32(c.r[4], c.r[17].w[0] + 436u);  if (t) { goto L_00222160; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00030000u);
    set32(c.r[1], c.r[17].w[0] + c.r[1].w[0]);
    set32(c.r[5], ld32((c.r[1].w[0] + 4544u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00222148u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 228u, depth + 1u); else { c.pc = 0x00196280u; return; } if (c.pc != 0x00222148u) [[unlikely]] return; }
L_00222148:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00030000u);
    set32(c.r[1], c.r[17].w[0] + c.r[1].w[0]);
    set32(c.r[5], ld32((c.r[1].w[0] + 4548u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022215Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 228u, depth + 1u); else { c.pc = 0x00196280u; return; } if (c.pc != 0x0022215Cu) [[unlikely]] return; }
L_0022215C:
    set32(c.r[4], c.r[17].w[0] + 436u);
    c.budget -= 1;
L_00222160:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00222168u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000F(c, 31u, depth + 1u); else { c.pc = 0x0013C3B0u; return; } if (c.pc != 0x00222168u) [[unlikely]] return; }
L_00222168:
    set32(c.r[4], c.r[17].w[0] + 424u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00222174u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000F(c, 266u, depth + 1u); else { c.pc = 0x0013E5B0u; return; } if (c.pc != 0x00222174u) [[unlikely]] return; }
L_00222174:
    set32(c.r[4], c.r[17].w[0] + 416u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00222180u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E490u; return; } if (c.pc != 0x00222180u) [[unlikely]] return; }
L_00222180:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022218Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0030(c, 13u, depth + 1u); else { c.pc = 0x001C0200u; return; } if (c.pc != 0x0022218Cu) [[unlikely]] return; }
L_0022218C:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_002221A8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002221A4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x002221A4u) [[unlikely]] return; }
L_002221A4:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002221A8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002221D0:
    set32(c.r[29], c.r[29].w[0] - 2432u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002221FCu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0048(c, 328u, depth + 1u); else { c.pc = 0x00223900u; return; } if (c.pc != 0x002221FCu) [[unlikely]] return; }
L_002221FC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);  if (t) { goto L_00222340; } }
    set32(c.r[2], ld32((c.r[1].w[0] + 3840u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00222210u); st32((c.r[29].w[0] + 2428u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_003F(c, 299u, depth + 1u); else { c.pc = 0x001FF0D0u; return; } if (c.pc != 0x00222210u) [[unlikely]] return; }
L_00222210:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00222218u); set32(c.r[4], 0u + 8u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00222218u) [[unlikely]] return; }
L_00222218:
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[20].d[0] == 0ull; c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_00222230; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022222Cu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0016(c, 410u, depth + 1u); else { c.pc = 0x0015B6A0u; return; } if (c.pc != 0x0022222Cu) [[unlikely]] return; }
L_0022222C:
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00222230:
    set32(c.r[2], c.r[16].w[0] << 3);
    c.r[19].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[17], c.r[2].w[0] << 9);
    c.budget -= 4;
L_00222240:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00222248u);  if (depth < kMaxDepth) unit_000B(c, 79u, depth + 1u); else { c.pc = 0x0012CB20u; return; } if (c.pc != 0x00222248u) [[unlikely]] return; }
L_00222248:
    set32(c.r[3], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[4], c.r[29].w[0] + 112u);
    set32(c.r[2], c.r[19].w[0] << 3);
    set32(c.r[6], 0u + 2304u);
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    set32(c.r[2], c.r[2].w[0] << 8);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022226Cu); set32(c.r[5], c.r[2].w[0] + 884u);  if (depth < kMaxDepth) unit_0009(c, 40u, depth + 1u); else { c.pc = 0x00124D20u; return; } if (c.pc != 0x0022226Cu) [[unlikely]] return; }
L_0022226C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00222274u); set32(c.r[4], 0u + 16u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00222274u) [[unlikely]] return; }
L_00222274:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_0022228C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00222288u); set32(c.r[5], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_0017(c, 89u, depth + 1u); else { c.pc = 0x0015D1B0u; return; } if (c.pc != 0x00222288u) [[unlikely]] return; }
L_00222288:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0022228C:
    set32(c.r[2], c.r[19].w[0] << 3);
    set32(c.r[16], c.r[21].w[0] + c.r[2].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022229Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0047(c, 184u, depth + 1u); else { c.pc = 0x0021E3C0u; return; } if (c.pc != 0x0022229Cu) [[unlikely]] return; }
L_0022229C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00420000u);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 23952u);
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002222B4u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0016(c, 424u, depth + 1u); else { c.pc = 0x0015B880u; return; } if (c.pc != 0x002222B4u) [[unlikely]] return; }
L_002222B4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[3], c.r[16].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] - 28128u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[20].w[0])));
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[2].w[0] + 44u)));
    c.r[2].d[0] = ld64((c.r[2].w[0]));
    st64((c.r[5].w[0]), c.r[2].d[0]);
    set32(c.r[3], ld32((c.r[1].w[0] + 31072u)));
    c.budget -= 15;
    { const bool t = c.r[3].d[0] == 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_00222318; } }
    set32(c.r[2], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 2388u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00222314; } }
    c.r[5].d[0] = ld64((c.r[5].w[0]));
    set32(c.r[7], 0u - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00222314u); c.r[6].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0014(c, 33u, depth + 1u); else { c.pc = 0x001504F0u; return; } if (c.pc != 0x00222314u) [[unlikely]] return; }
L_00222314:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_00222318:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00222320u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0017(c, 91u, depth + 1u); else { c.pc = 0x0015D1F0u; return; } if (c.pc != 0x00222320u) [[unlikely]] return; }
L_00222320:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.r[2].d[0] = c.r[19].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00222240u | kUnwind; return; } goto L_00222240; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00222338u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0016(c, 413u, depth + 1u); else { c.pc = 0x0015B710u; return; } if (c.pc != 0x00222338u) [[unlikely]] return; }
L_00222338:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00222340u); set32(c.r[4], ld32((c.r[29].w[0] + 2428u)));  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x00222340u) [[unlikely]] return; }
L_00222340:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 2432u);  c.pc = t; return; }
L_00222370:
    set32(c.r[29], c.r[29].w[0] - 2416u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00222394u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0048(c, 328u, depth + 1u); else { c.pc = 0x00223900u; return; } if (c.pc != 0x00222394u) [[unlikely]] return; }
L_00222394:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002224FC; } }
    set32(c.r[3], ld32((c.r[20].w[0] + 2120u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);  if (t) { goto L_002224FC; } }
    set32(c.r[2], ld32((c.r[1].w[0] + 3840u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002223B4u); st32((c.r[29].w[0] + 2412u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_003F(c, 299u, depth + 1u); else { c.pc = 0x001FF0D0u; return; } if (c.pc != 0x002223B4u) [[unlikely]] return; }
L_002223B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002223BCu); set32(c.r[4], 0u + 8u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x002223BCu) [[unlikely]] return; }
L_002223BC:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[19].d[0] == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_002223DC; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002223D4u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0016(c, 410u, depth + 1u); else { c.pc = 0x0015B6A0u; return; } if (c.pc != 0x002223D4u) [[unlikely]] return; }
L_002223D4:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_002223DC:
    set32(c.r[2], c.r[18].w[0] << 3);
    c.budget -= 1;
L_002223E0:
    set32(c.r[4], c.r[29].w[0] + 96u);
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    set32(c.r[6], 0u + 2304u);
    set32(c.r[2], c.r[2].w[0] << 8);
    set32(c.r[2], c.r[20].w[0] + c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002223FCu); set32(c.r[5], c.r[2].w[0] + 2120u);  if (depth < kMaxDepth) unit_0009(c, 40u, depth + 1u); else { c.pc = 0x00124D20u; return; } if (c.pc != 0x002223FCu) [[unlikely]] return; }
L_002223FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00222404u); set32(c.r[4], 0u + 16u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00222404u) [[unlikely]] return; }
L_00222404:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0022241C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00222418u); set32(c.r[5], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_0017(c, 89u, depth + 1u); else { c.pc = 0x0015D1B0u; return; } if (c.pc != 0x00222418u) [[unlikely]] return; }
L_00222418:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0022241C:
    set32(c.r[2], ld32((c.r[20].w[0] + 912u)));
    set32(c.r[16], c.r[18].w[0] << 3);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022242Cu); set32(c.r[4], c.r[2].w[0] + c.r[16].w[0]);  if (depth < kMaxDepth) unit_0047(c, 184u, depth + 1u); else { c.pc = 0x0021E3C0u; return; } if (c.pc != 0x0022242Cu) [[unlikely]] return; }
L_0022242C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00420000u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 23952u);
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00222444u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0016(c, 424u, depth + 1u); else { c.pc = 0x0015B880u; return; } if (c.pc != 0x00222444u) [[unlikely]] return; }
L_00222444:
    set32(c.r[3], ld32((c.r[19].w[0])));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], ld32((c.r[20].w[0] + 912u)));
    set32(c.r[4], c.r[4].w[0] - 28128u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[3], ld32((c.r[3].w[0] + 44u)));
    c.r[3].d[0] = ld64((c.r[3].w[0]));
    st64((c.r[2].w[0]), c.r[3].d[0]);
    set32(c.r[5], ld32((c.r[1].w[0] + 31072u)));
    c.budget -= 17;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_002224CC; } }
    set32(c.r[3], ld32((c.r[20].w[0] + 912u)));
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[5].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 2388u)));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], c.r[3].w[0] + c.r[16].w[0]);  if (t) { goto L_002224CC; } }
    set32(c.r[7], 0u - 1u);
    set32(c.r[3], c.r[2].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[5].w[0] + c.r[2].w[0]);
    c.r[5].d[0] = ld64((c.r[3].w[0]));
    set32(c.r[4], ld32((c.r[2].w[0] + 2388u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002224CCu); c.r[6].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0014(c, 33u, depth + 1u); else { c.pc = 0x001504F0u; return; } if (c.pc != 0x002224CCu) [[unlikely]] return; }
L_002224CC:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002224D8u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0017(c, 91u, depth + 1u); else { c.pc = 0x0015D1F0u; return; } if (c.pc != 0x002224D8u) [[unlikely]] return; }
L_002224D8:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[2].d[0] = c.r[18].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[18].w[0] << 3);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002223E0u | kUnwind; return; } goto L_002223E0; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002224F4u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0016(c, 413u, depth + 1u); else { c.pc = 0x0015B710u; return; } if (c.pc != 0x002224F4u) [[unlikely]] return; }
L_002224F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002224FCu); set32(c.r[4], ld32((c.r[29].w[0] + 2412u)));  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x002224FCu) [[unlikely]] return; }
L_002224FC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 2416u);  c.pc = t; return; }
L_00222520:
    set32(c.r[29], c.r[29].w[0] - 96u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00460000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], c.r[5].w[0] + 24464u);
    set32(c.r[6], ld32((c.r[1].w[0] - 28000u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00222548u); set32(c.r[4], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x00127458u; return; } if (c.pc != 0x00222548u) [[unlikely]] return; }
L_00222548:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00222550u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0038(c, 30u, depth + 1u); else { c.pc = 0x001E04E0u; return; } if (c.pc != 0x00222550u) [[unlikely]] return; }
L_00222550:
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.r[2].d[0] = c.r[2].d[0] & 4096ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_00222574; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], ld32((c.r[1].w[0] - 28000u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st32((c.r[1].w[0] - 28000u), c.r[2].w[0]);
    c.budget -= 5;
L_00222574:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022257Cu);  if (depth < kMaxDepth) unit_0038(c, 30u, depth + 1u); else { c.pc = 0x001E04E0u; return; } if (c.pc != 0x0022257Cu) [[unlikely]] return; }
L_0022257C:
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.r[2].d[0] = c.r[2].d[0] & 16384ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00030000u);  if (t) { goto L_002225A4; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], ld32((c.r[1].w[0] - 28000u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st32((c.r[1].w[0] - 28000u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00030000u);
    c.budget -= 6;
L_002225A4:
    set32(c.r[1], c.r[16].w[0] + c.r[1].w[0]);
    set32(c.r[2], ld32((c.r[1].w[0] + 4492u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002225B4u); set32(c.r[4], ld32((c.r[2].w[0] + 28u)));  if (depth < kMaxDepth) unit_000F(c, 44u, depth + 1u); else { c.pc = 0x0013C550u; return; } if (c.pc != 0x002225B4u) [[unlikely]] return; }
L_002225B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002225BCu);  if (depth < kMaxDepth) unit_004B(c, 33u, depth + 1u); else { c.pc = 0x0022C7B0u; return; } if (c.pc != 0x002225BCu) [[unlikely]] return; }
L_002225BC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00030000u);
    set32(c.r[4], c.r[16].w[0] + 436u);
    set32(c.r[1], c.r[16].w[0] + c.r[1].w[0]);
    set32(c.r[2], ld32((c.r[1].w[0] + 4480u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00030000u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[1], c.r[16].w[0] + c.r[1].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002225E0u); st32((c.r[1].w[0] + 4480u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000F(c, 48u, depth + 1u); else { c.pc = 0x0013C5A0u; return; } if (c.pc != 0x002225E0u) [[unlikely]] return; }
L_002225E0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_002225F0:
    set32(c.r[29], c.r[29].w[0] - 320u);
    set32(c.r[3], c.r[5].w[0] << 2);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[3].w[0] + 1748u)));
    c.budget -= 11;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00223090; } }
    set32(c.r[3], c.r[16].w[0] << 3);
    set32(c.r[4], c.r[17].w[0] + c.r[3].w[0]);
    c.r[5].d[0] = ld8((c.r[4].w[0] + 473u));
    c.r[3].d[0] = c.r[5].d[0] & 1ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00223090; } }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 474u));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00223090; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_0022267C; } }
    c.r[3].d[0] = c.r[5].d[0] << 61;
    set32(c.r[4], 0u + 1u);
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_00223090; } }
    c.r[3].d[0] = c.r[5].d[0] << 62;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[4].d[0]; set32(c.r[3], c.r[16].w[0] << 3);  if (t) { goto L_002226BC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_00223094; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_0022267C:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 2u);  if (t) { goto L_002226A0; } }
    c.r[3].d[0] = c.r[5].d[0] << 61;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002226B8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00223090; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 1;
L_002226A0:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != c.r[3].d[0];  if (t) { goto L_002226B8; } }
    c.r[3].d[0] = c.r[5].d[0] << 62;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00223090; } }
L_002226B8:
    set32(c.r[3], c.r[16].w[0] << 3);
    c.budget -= 1;
L_002226BC:
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    c.r[3].d[0] = ld8((c.r[3].w[0] + 472u));
    c.r[3].d[0] = c.r[3].d[0] & 4ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], c.r[16].w[0] << 3);  if (t) { goto L_002226E4; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], ld32((c.r[1].w[0] + 31704u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00223090; } }
    set32(c.r[3], c.r[16].w[0] << 3);
    c.budget -= 1;
L_002226E4:
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    c.r[3].d[0] = ld8((c.r[3].w[0] + 472u));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], c.r[16].w[0] << 3);  if (t) { goto L_00222724; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], 0u + 1u);
    set32(c.r[4], ld32((c.r[1].w[0] + 31520u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00223090; } }
    set32(c.r[3], 0u + 5u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00222720; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00223090; } }
L_00222720:
    set32(c.r[3], c.r[16].w[0] << 3);
    c.budget -= 1;
L_00222724:
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    c.r[3].d[0] = ld8((c.r[3].w[0] + 472u));
    c.r[3].d[0] = c.r[3].d[0] & 2ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], c.r[16].w[0] << 3);  if (t) { goto L_00222760; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], 0u + 1u);
    set32(c.r[4], ld32((c.r[1].w[0] + 31520u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0022275C; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], ld32((c.r[1].w[0] + 31608u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00223090; } }
L_0022275C:
    set32(c.r[3], c.r[16].w[0] << 3);
    c.budget -= 1;
L_00222760:
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    c.r[3].d[0] = ld8((c.r[3].w[0] + 472u));
    c.r[3].d[0] = c.r[3].d[0] & 8ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00222788; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], 0u + 1u);
    set32(c.r[4], ld32((c.r[1].w[0] + 31520u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00223090; } }
L_00222788:
    set32(c.r[2], c.r[16].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    c.r[2].d[0] = ld16((c.r[2].w[0] + 468u));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], c.r[16].w[0] << 3);  if (t) { goto L_0022281C; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x434D0000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 31088u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002227B0u); c.r[5].d[0] = c.r[2].d[0] | 20300ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x002227B0u) [[unlikely]] return; }
L_002227B0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002227C0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 16u)));  if (t) { goto L_002227C4; } }
L_002227C0:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002227C4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00222818; } }
    set32(c.r[2], c.r[16].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    c.r[2].d[0] = ld16((c.r[2].w[0] + 468u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002227E0u); set32(c.r[18], c.r[2].w[0] - 1u);  if (depth < kMaxDepth) unit_003D(c, 84u, depth + 1u); else { c.pc = 0x001F5400u; return; } if (c.pc != 0x002227E0u) [[unlikely]] return; }
L_002227E0:
    c.r[3].d[0] = ld8((c.r[2].w[0] + 86u));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00222818; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], c.r[18].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + 28640u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[14] = ld32((c.r[2].w[0] + 264u));
    c.f[13] = ld32((c.r[2].w[0] + 260u));
    c.f[12] = ld32((c.r[2].w[0] + 256u));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00222818u); set32(c.r[4], ld32((c.r[1].w[0] + 20144u)));  if (depth < kMaxDepth) unit_0013(c, 96u, depth + 1u); else { c.pc = 0x0014D700u; return; } if (c.pc != 0x00222818u) [[unlikely]] return; }
L_00222818:
    set32(c.r[2], c.r[16].w[0] << 3);
    c.budget -= 1;
L_0022281C:
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = ld8((c.r[2].w[0] + 473u));
    c.r[2].d[0] = c.r[2].d[0] << 59;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], c.r[16].w[0] << 3);  if (t) { goto L_00222840; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022283Cu); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_003F(c, 265u, depth + 1u); else { c.pc = 0x001FE540u; return; } if (c.pc != 0x0022283Cu) [[unlikely]] return; }
L_0022283C:
    set32(c.r[2], c.r[16].w[0] << 3);
    c.budget -= 1;
L_00222840:
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = ld8((c.r[2].w[0] + 473u));
    c.r[2].d[0] = c.r[2].d[0] << 62;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], c.r[16].w[0] << 3);  if (t) { goto L_00222918; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[11], ld32((c.r[1].w[0] + 20144u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[11].w[0] + c.r[1].w[0]);
    set32(c.r[2], ld32((c.r[1].w[0] + 1364u)));
    c.r[1].d[0] = c.r[2].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_00222914; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
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
    set32(c.r[3], 0u + 72u);
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
    c.budget -= 39;
L_00222914:
    set32(c.r[2], c.r[16].w[0] << 3);
    c.budget -= 1;
L_00222918:
    set32(c.r[3], c.r[17].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = ld8((c.r[3].w[0] + 473u));
    c.r[2].d[0] = c.r[2].d[0] << 61;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], c.r[16].w[0] << 3);  if (t) { goto L_00222A04; } }
    c.r[3].d[0] = ld8((c.r[3].w[0] + 475u));
    set32(c.r[2], 0u + 128u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00222A00; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[2].d[0] = c.r[3].d[0] << 32;
    set32(c.r[10], ld32((c.r[1].w[0] + 20144u)));
    c.r[11].d[0] = c.r[2].d[0] | 100ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[10].w[0] + c.r[1].w[0]);
    set32(c.r[2], ld32((c.r[1].w[0] + 1364u)));
    c.r[1].d[0] = c.r[2].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_00222A00; } }
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
    set32(c.r[2], 0u + 66u);
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
L_00222A00:
    set32(c.r[2], c.r[16].w[0] << 3);
    c.budget -= 1;
L_00222A04:
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    c.r[3].d[0] = ld8((c.r[2].w[0] + 473u));
    c.r[2].d[0] = c.r[3].d[0] << 62;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00222A3C; } }
    c.r[2].d[0] = c.r[3].d[0] << 61;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00222A3C; } }
    c.r[2].d[0] = c.r[3].d[0] << 60;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], c.r[16].w[0] << 3);  if (t) { goto L_00222B00; } }
L_00222A3C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[11], ld32((c.r[1].w[0] + 20144u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[11].w[0] + c.r[1].w[0]);
    set32(c.r[2], ld32((c.r[1].w[0] + 1364u)));
    c.r[1].d[0] = c.r[2].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_00222AFC; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
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
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00050000u);
    c.r[9].d[0] = c.r[10].d[0] | c.r[9].d[0];
    c.r[3].d[0] = c.r[2].d[0] | 29ull;
    st64((c.r[9].w[0]), c.r[8].d[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    st64((c.r[9].w[0] + 8u), 0ull);
    set32(c.r[2], 0u + 71u);
    st64((c.r[9].w[0] + 16u), 0ull);
    set32(c.r[1], c.r[11].w[0] + c.r[1].w[0]);
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
    c.budget -= 40;
L_00222AFC:
    set32(c.r[2], c.r[16].w[0] << 3);
    c.budget -= 1;
L_00222B00:
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = ld8((c.r[2].w[0] + 473u));
    c.r[2].d[0] = c.r[2].d[0] << 58;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00222B30; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 20144u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00222B28u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0013(c, 218u, depth + 1u); else { c.pc = 0x0014F060u; return; } if (c.pc != 0x00222B28u) [[unlikely]] return; }
L_00222B28:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[16].w[0] << 2);  if (t) { goto L_00222B44; } }
L_00222B30:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 20144u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00222B40u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0013(c, 218u, depth + 1u); else { c.pc = 0x0014F060u; return; } if (c.pc != 0x00222B40u) [[unlikely]] return; }
L_00222B40:
    set32(c.r[2], c.r[16].w[0] << 2);
    c.budget -= 1;
L_00222B44:
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 1748u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 228u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], c.r[16].w[0] << 2);  if (t) { goto L_00222B7C; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 31496u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00222B78; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 152u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00222B78u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00222B78u) [[unlikely]] return; }
L_00222B78:
    set32(c.r[2], c.r[16].w[0] << 2);
    c.budget -= 1;
L_00222B7C:
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00222B88u); set32(c.r[4], ld32((c.r[2].w[0] + 1748u)));  if (depth < kMaxDepth) unit_0015(c, 28u, depth + 1u); else { c.pc = 0x001550D0u; return; } if (c.pc != 0x00222B88u) [[unlikely]] return; }
L_00222B88:
    set32(c.r[3], c.r[16].w[0] << 3);
    set32(c.r[3], c.r[17].w[0] + c.r[3].w[0]);
    c.r[3].d[0] = ld8((c.r[3].w[0] + 473u));
    c.r[3].d[0] = c.r[3].d[0] << 57;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], c.r[16].w[0] << 3);  if (t) { goto L_00222CF0; } }
    set32(c.r[2], c.r[29].w[0] + 192u);
    st128((c.r[2].w[0] + 48u) & ~15u, c.vu0.vf[0]);
    vu::mr32(c.vu0, 15u, 1u, 0u);
    st128((c.r[2].w[0] + 32u) & ~15u, c.vu0.vf[1]);
    vu::mr32(c.vu0, 15u, 2u, 1u);
    st128((c.r[2].w[0] + 16u) & ~15u, c.vu0.vf[2]);
    vu::mr32(c.vu0, 15u, 3u, 2u);
    st128((c.r[2].w[0]) & ~15u, c.vu0.vf[3]);
    set32(c.r[3], c.r[29].w[0] + 192u);
    set32(c.r[4], c.r[29].w[0] + 256u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[0] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], c.r[2].w[0] + 31840u);
    st32((c.r[29].w[0] + 192u), c.f[0]);
    ld128((c.r[2].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[2].w[0] + 16u) & ~15u, c.vu0.vf[5]);
    ld128((c.r[2].w[0] + 32u) & ~15u, c.vu0.vf[6]);
    ld128((c.r[2].w[0] + 48u) & ~15u, c.vu0.vf[7]);
    ld128((c.r[3].w[0]) & ~15u, c.vu0.vf[10]);
    ld128((c.r[3].w[0] + 16u) & ~15u, c.vu0.vf[11]);
    ld128((c.r[3].w[0] + 32u) & ~15u, c.vu0.vf[12]);
    ld128((c.r[3].w[0] + 48u) & ~15u, c.vu0.vf[13]);
    vu::mulabc(c.vu0, 15u, 4u, c.vu0.vf[10].w[0]);
    vu::maddabc(c.vu0, 15u, 5u, c.vu0.vf[10].w[1]);
    vu::maddabc(c.vu0, 15u, 6u, c.vu0.vf[10].w[2]);
    vu::maddbc(c.vu0, 15u, 10u, 7u, c.vu0.vf[10].w[3]);
    vu::mulabc(c.vu0, 15u, 4u, c.vu0.vf[11].w[0]);
    vu::maddabc(c.vu0, 15u, 5u, c.vu0.vf[11].w[1]);
    vu::maddabc(c.vu0, 15u, 6u, c.vu0.vf[11].w[2]);
    st128((c.r[4].w[0]) & ~15u, c.vu0.vf[10]);
    vu::maddbc(c.vu0, 15u, 11u, 7u, c.vu0.vf[11].w[3]);
    vu::mulabc(c.vu0, 15u, 4u, c.vu0.vf[12].w[0]);
    vu::maddabc(c.vu0, 15u, 5u, c.vu0.vf[12].w[1]);
    vu::maddabc(c.vu0, 15u, 6u, c.vu0.vf[12].w[2]);
    st128((c.r[4].w[0] + 16u) & ~15u, c.vu0.vf[11]);
    vu::maddbc(c.vu0, 15u, 12u, 7u, c.vu0.vf[12].w[3]);
    vu::mulabc(c.vu0, 15u, 4u, c.vu0.vf[13].w[0]);
    vu::maddabc(c.vu0, 15u, 5u, c.vu0.vf[13].w[1]);
    vu::maddabc(c.vu0, 15u, 6u, c.vu0.vf[13].w[2]);
    st128((c.r[4].w[0] + 32u) & ~15u, c.vu0.vf[12]);
    vu::maddbc(c.vu0, 15u, 13u, 7u, c.vu0.vf[13].w[3]);
    st128((c.r[4].w[0] + 48u) & ~15u, c.vu0.vf[13]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], c.r[29].w[0] + 256u);
    set32(c.r[3], ld32((c.r[1].w[0] + 28272u)));
    set32(c.r[3], c.r[3].w[0] + 224u);
    ld128((c.r[2].w[0]) & ~15u, c.r[6]);
    ld128((c.r[2].w[0] + 16u) & ~15u, c.r[7]);
    ld128((c.r[2].w[0] + 32u) & ~15u, c.r[8]);
    ld128((c.r[2].w[0] + 48u) & ~15u, c.r[9]);
    st128((c.r[3].w[0]) & ~15u, c.r[6]);
    st128((c.r[3].w[0] + 16u) & ~15u, c.r[7]);
    st128((c.r[3].w[0] + 32u) & ~15u, c.r[8]);
    st128((c.r[3].w[0] + 48u) & ~15u, c.r[9]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 20144u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 60;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00222C94u); set32(c.r[5], ld32((c.r[1].w[0] + 28272u)));  if (depth < kMaxDepth) unit_0013(c, 99u, depth + 1u); else { c.pc = 0x0014D7F0u; return; } if (c.pc != 0x00222C94u) [[unlikely]] return; }
L_00222C94:
    set32(c.r[2], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00222CA4u); set32(c.r[4], ld32((c.r[2].w[0] + 1748u)));  if (depth < kMaxDepth) unit_0015(c, 28u, depth + 1u); else { c.pc = 0x001550D0u; return; } if (c.pc != 0x00222CA4u) [[unlikely]] return; }
L_00222CA4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], ld32((c.r[1].w[0] + 28272u)));
    set32(c.r[2], c.r[2].w[0] + 31840u);
    set32(c.r[3], c.r[3].w[0] + 224u);
    ld128((c.r[2].w[0]) & ~15u, c.r[6]);
    ld128((c.r[2].w[0] + 16u) & ~15u, c.r[7]);
    ld128((c.r[2].w[0] + 32u) & ~15u, c.r[8]);
    ld128((c.r[2].w[0] + 48u) & ~15u, c.r[9]);
    st128((c.r[3].w[0]) & ~15u, c.r[6]);
    st128((c.r[3].w[0] + 16u) & ~15u, c.r[7]);
    st128((c.r[3].w[0] + 32u) & ~15u, c.r[8]);
    st128((c.r[3].w[0] + 48u) & ~15u, c.r[9]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 20144u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00222CECu); set32(c.r[5], ld32((c.r[1].w[0] + 28272u)));  if (depth < kMaxDepth) unit_0013(c, 99u, depth + 1u); else { c.pc = 0x0014D7F0u; return; } if (c.pc != 0x00222CECu) [[unlikely]] return; }
L_00222CEC:
    set32(c.r[3], c.r[16].w[0] << 3);
    c.budget -= 1;
L_00222CF0:
    set32(c.r[3], c.r[17].w[0] + c.r[3].w[0]);
    c.r[3].d[0] = ld8((c.r[3].w[0] + 473u));
    c.r[3].d[0] = c.r[3].d[0] << 56;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], c.r[16].w[0] << 3);  if (t) { goto L_00222E38; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[12] = ld32((c.r[1].w[0] + 24472u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00222D18u); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0011(c, 29u, depth + 1u); else { c.pc = 0x00144640u; return; } if (c.pc != 0x00222D18u) [[unlikely]] return; }
L_00222D18:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], c.r[29].w[0] + 64u);
    set32(c.r[2], c.r[2].w[0] + 31840u);
    set32(c.r[4], c.r[29].w[0] + 128u);
    ld128((c.r[2].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[2].w[0] + 16u) & ~15u, c.vu0.vf[5]);
    ld128((c.r[2].w[0] + 32u) & ~15u, c.vu0.vf[6]);
    ld128((c.r[2].w[0] + 48u) & ~15u, c.vu0.vf[7]);
    ld128((c.r[3].w[0]) & ~15u, c.vu0.vf[10]);
    ld128((c.r[3].w[0] + 16u) & ~15u, c.vu0.vf[11]);
    ld128((c.r[3].w[0] + 32u) & ~15u, c.vu0.vf[12]);
    ld128((c.r[3].w[0] + 48u) & ~15u, c.vu0.vf[13]);
    vu::mulabc(c.vu0, 15u, 4u, c.vu0.vf[10].w[0]);
    vu::maddabc(c.vu0, 15u, 5u, c.vu0.vf[10].w[1]);
    vu::maddabc(c.vu0, 15u, 6u, c.vu0.vf[10].w[2]);
    vu::maddbc(c.vu0, 15u, 10u, 7u, c.vu0.vf[10].w[3]);
    vu::mulabc(c.vu0, 15u, 4u, c.vu0.vf[11].w[0]);
    vu::maddabc(c.vu0, 15u, 5u, c.vu0.vf[11].w[1]);
    vu::maddabc(c.vu0, 15u, 6u, c.vu0.vf[11].w[2]);
    st128((c.r[4].w[0]) & ~15u, c.vu0.vf[10]);
    vu::maddbc(c.vu0, 15u, 11u, 7u, c.vu0.vf[11].w[3]);
    vu::mulabc(c.vu0, 15u, 4u, c.vu0.vf[12].w[0]);
    vu::maddabc(c.vu0, 15u, 5u, c.vu0.vf[12].w[1]);
    vu::maddabc(c.vu0, 15u, 6u, c.vu0.vf[12].w[2]);
    st128((c.r[4].w[0] + 16u) & ~15u, c.vu0.vf[11]);
    vu::maddbc(c.vu0, 15u, 12u, 7u, c.vu0.vf[12].w[3]);
    vu::mulabc(c.vu0, 15u, 4u, c.vu0.vf[13].w[0]);
    vu::maddabc(c.vu0, 15u, 5u, c.vu0.vf[13].w[1]);
    vu::maddabc(c.vu0, 15u, 6u, c.vu0.vf[13].w[2]);
    st128((c.r[4].w[0] + 32u) & ~15u, c.vu0.vf[12]);
    vu::maddbc(c.vu0, 15u, 13u, 7u, c.vu0.vf[13].w[3]);
    st128((c.r[4].w[0] + 48u) & ~15u, c.vu0.vf[13]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], c.r[29].w[0] + 128u);
    set32(c.r[3], ld32((c.r[1].w[0] + 28272u)));
    set32(c.r[3], c.r[3].w[0] + 224u);
    ld128((c.r[2].w[0]) & ~15u, c.r[6]);
    ld128((c.r[2].w[0] + 16u) & ~15u, c.r[7]);
    ld128((c.r[2].w[0] + 32u) & ~15u, c.r[8]);
    ld128((c.r[2].w[0] + 48u) & ~15u, c.r[9]);
    st128((c.r[3].w[0]) & ~15u, c.r[6]);
    st128((c.r[3].w[0] + 16u) & ~15u, c.r[7]);
    st128((c.r[3].w[0] + 32u) & ~15u, c.r[8]);
    st128((c.r[3].w[0] + 48u) & ~15u, c.r[9]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 20144u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 49;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00222DDCu); set32(c.r[5], ld32((c.r[1].w[0] + 28272u)));  if (depth < kMaxDepth) unit_0013(c, 99u, depth + 1u); else { c.pc = 0x0014D7F0u; return; } if (c.pc != 0x00222DDCu) [[unlikely]] return; }
L_00222DDC:
    set32(c.r[2], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00222DECu); set32(c.r[4], ld32((c.r[2].w[0] + 1748u)));  if (depth < kMaxDepth) unit_0015(c, 28u, depth + 1u); else { c.pc = 0x001550D0u; return; } if (c.pc != 0x00222DECu) [[unlikely]] return; }
L_00222DEC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], ld32((c.r[1].w[0] + 28272u)));
    set32(c.r[2], c.r[2].w[0] + 31840u);
    set32(c.r[3], c.r[3].w[0] + 224u);
    ld128((c.r[2].w[0]) & ~15u, c.r[6]);
    ld128((c.r[2].w[0] + 16u) & ~15u, c.r[7]);
    ld128((c.r[2].w[0] + 32u) & ~15u, c.r[8]);
    ld128((c.r[2].w[0] + 48u) & ~15u, c.r[9]);
    st128((c.r[3].w[0]) & ~15u, c.r[6]);
    st128((c.r[3].w[0] + 16u) & ~15u, c.r[7]);
    st128((c.r[3].w[0] + 32u) & ~15u, c.r[8]);
    st128((c.r[3].w[0] + 48u) & ~15u, c.r[9]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 20144u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00222E34u); set32(c.r[5], ld32((c.r[1].w[0] + 28272u)));  if (depth < kMaxDepth) unit_0013(c, 99u, depth + 1u); else { c.pc = 0x0014D7F0u; return; } if (c.pc != 0x00222E34u) [[unlikely]] return; }
L_00222E34:
    set32(c.r[3], c.r[16].w[0] << 3);
    c.budget -= 1;
L_00222E38:
    set32(c.r[3], c.r[17].w[0] + c.r[3].w[0]);
    c.r[4].d[0] = ld8((c.r[3].w[0] + 473u));
    c.r[3].d[0] = c.r[4].d[0] << 62;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00222E70; } }
    c.r[3].d[0] = c.r[4].d[0] << 61;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00222E70; } }
    c.r[3].d[0] = c.r[4].d[0] << 60;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], c.r[16].w[0] << 3);  if (t) { goto L_00222F34; } }
L_00222E70:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[12], ld32((c.r[1].w[0] + 20144u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[12].w[0] + c.r[1].w[0]);
    set32(c.r[3], ld32((c.r[1].w[0] + 1364u)));
    c.r[1].d[0] = c.r[3].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_00222F30; } }
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
    c.r[4].d[0] = c.r[3].d[0] | 1293ull;
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
L_00222F30:
    set32(c.r[3], c.r[16].w[0] << 3);
    c.budget -= 1;
L_00222F34:
    set32(c.r[3], c.r[17].w[0] + c.r[3].w[0]);
    c.r[3].d[0] = ld8((c.r[3].w[0] + 473u));
    c.r[3].d[0] = c.r[3].d[0] << 59;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], c.r[16].w[0] << 3);  if (t) { goto L_00222F58; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00222F54u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003F(c, 265u, depth + 1u); else { c.pc = 0x001FE540u; return; } if (c.pc != 0x00222F54u) [[unlikely]] return; }
L_00222F54:
    set32(c.r[3], c.r[16].w[0] << 3);
    c.budget -= 1;
L_00222F58:
    set32(c.r[3], c.r[17].w[0] + c.r[3].w[0]);
    c.r[3].d[0] = ld8((c.r[3].w[0] + 473u));
    c.r[3].d[0] = c.r[3].d[0] << 62;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], c.r[16].w[0] << 3);  if (t) { goto L_00223030; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[12], ld32((c.r[1].w[0] + 20144u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[12].w[0] + c.r[1].w[0]);
    set32(c.r[3], ld32((c.r[1].w[0] + 1364u)));
    c.r[1].d[0] = c.r[3].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0022302C; } }
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
    set32(c.r[4], 0u + 68u);
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
L_0022302C:
    set32(c.r[3], c.r[16].w[0] << 3);
    c.budget -= 1;
L_00223030:
    set32(c.r[3], c.r[17].w[0] + c.r[3].w[0]);
    c.r[3].d[0] = ld8((c.r[3].w[0] + 473u));
    c.r[3].d[0] = c.r[3].d[0] << 58;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], c.r[16].w[0] << 3);  if (t) { goto L_0022305C; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 20144u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00223058u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0013(c, 218u, depth + 1u); else { c.pc = 0x0014F060u; return; } if (c.pc != 0x00223058u) [[unlikely]] return; }
L_00223058:
    set32(c.r[3], c.r[16].w[0] << 3);
    c.budget -= 1;
L_0022305C:
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    c.r[3].d[0] = ld16((c.r[3].w[0] + 468u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00223090; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.f[14] = ld32((c.r[1].w[0] + 28824u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.f[13] = ld32((c.r[1].w[0] + 28820u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.f[12] = ld32((c.r[1].w[0] + 28816u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00223090u); set32(c.r[4], ld32((c.r[1].w[0] + 20144u)));  if (depth < kMaxDepth) unit_0013(c, 96u, depth + 1u); else { c.pc = 0x0014D700u; return; } if (c.pc != 0x00223090u) [[unlikely]] return; }
L_00223090:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_00223094:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 320u);  c.pc = t; return; }
L_002230B0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002230C0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[1].w[0] + 31072u)));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 392u));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00223368; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002230ECu);  if (depth < kMaxDepth) unit_0047(c, 131u, depth + 1u); else { c.pc = 0x0021D9F0u; return; } if (c.pc != 0x002230ECu) [[unlikely]] return; }
L_002230EC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[11], ld32((c.r[1].w[0] + 20144u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[11].w[0] + c.r[1].w[0]);
    set32(c.r[2], ld32((c.r[1].w[0] + 1364u)));
    c.r[1].d[0] = c.r[2].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_002231AC; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
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
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00050000u);
    c.r[9].d[0] = c.r[10].d[0] | c.r[9].d[0];
    c.r[3].d[0] = c.r[2].d[0] | 29ull;
    st64((c.r[9].w[0]), c.r[8].d[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    st64((c.r[9].w[0] + 8u), 0ull);
    set32(c.r[2], 0u + 71u);
    st64((c.r[9].w[0] + 16u), 0ull);
    set32(c.r[1], c.r[11].w[0] + c.r[1].w[0]);
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
    c.budget -= 40;
L_002231AC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[11], ld32((c.r[1].w[0] + 20144u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[11].w[0] + c.r[1].w[0]);
    set32(c.r[2], ld32((c.r[1].w[0] + 1364u)));
    c.r[1].d[0] = c.r[2].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_00223268; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
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
    c.budget -= 39;
L_00223268:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[10], ld32((c.r[1].w[0] + 20144u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[10].w[0] + c.r[1].w[0]);
    set32(c.r[2], ld32((c.r[1].w[0] + 1364u)));
    c.r[1].d[0] = c.r[2].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] != 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_00223320; } }
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
    set32(c.r[2], 0u + 8u);
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
L_00223320:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[1].w[0] + 31072u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00223334u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0048(c, 291u, depth + 1u); else { c.pc = 0x002225F0u; return; } if (c.pc != 0x00223334u) [[unlikely]] return; }
L_00223334:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < 150ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00223320u | kUnwind; return; } goto L_00223320; } }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00223348:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00223350u);  if (depth < kMaxDepth) unit_003D(c, 81u, depth + 1u); else { c.pc = 0x001F53D0u; return; } if (c.pc != 0x00223350u) [[unlikely]] return; }
L_00223350:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[3].d[0] = c.r[16].sd[0] < 150ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00223348u | kUnwind; return; } goto L_00223348; } }
L_00223368:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00223380:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[1].w[0] + 31072u)));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 392u));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00223604; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002233ACu);  if (depth < kMaxDepth) unit_0047(c, 131u, depth + 1u); else { c.pc = 0x0021D9F0u; return; } if (c.pc != 0x002233ACu) [[unlikely]] return; }
L_002233AC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[11], ld32((c.r[1].w[0] + 20144u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[11].w[0] + c.r[1].w[0]);
    set32(c.r[2], ld32((c.r[1].w[0] + 1364u)));
    c.r[1].d[0] = c.r[2].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0022346C; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
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
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00050000u);
    c.r[9].d[0] = c.r[10].d[0] | c.r[9].d[0];
    c.r[3].d[0] = c.r[2].d[0] | 29ull;
    st64((c.r[9].w[0]), c.r[8].d[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    st64((c.r[9].w[0] + 8u), 0ull);
    set32(c.r[2], 0u + 71u);
    st64((c.r[9].w[0] + 16u), 0ull);
    set32(c.r[1], c.r[11].w[0] + c.r[1].w[0]);
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
    c.budget -= 40;
L_0022346C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[11], ld32((c.r[1].w[0] + 20144u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[11].w[0] + c.r[1].w[0]);
    set32(c.r[2], ld32((c.r[1].w[0] + 1364u)));
    c.r[1].d[0] = c.r[2].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_00223528; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
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
    c.budget -= 39;
L_00223528:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[10], ld32((c.r[1].w[0] + 20144u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[10].w[0] + c.r[1].w[0]);
    set32(c.r[2], ld32((c.r[1].w[0] + 1364u)));
    c.r[1].d[0] = c.r[2].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] != 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_002235E0; } }
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
    set32(c.r[2], 0u + 8u);
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
L_002235E0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[1].w[0] + 31072u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002235F4u); set32(c.r[6], 0u + 2u);  if (depth < kMaxDepth) unit_0048(c, 291u, depth + 1u); else { c.pc = 0x002225F0u; return; } if (c.pc != 0x002235F4u) [[unlikely]] return; }
L_002235F4:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[3].d[0] = c.r[16].sd[0] < 150ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002235E0u | kUnwind; return; } goto L_002235E0; } }
L_00223604:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00223620:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[1].w[0] + 31072u)));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 392u));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002238E4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022364Cu);  if (depth < kMaxDepth) unit_0047(c, 131u, depth + 1u); else { c.pc = 0x0021D9F0u; return; } if (c.pc != 0x0022364Cu) [[unlikely]] return; }
L_0022364C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[11], ld32((c.r[1].w[0] + 20144u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[11].w[0] + c.r[1].w[0]);
    set32(c.r[2], ld32((c.r[1].w[0] + 1364u)));
    c.r[1].d[0] = c.r[2].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0022370C; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
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
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00050000u);
    c.r[9].d[0] = c.r[10].d[0] | c.r[9].d[0];
    c.r[3].d[0] = c.r[2].d[0] | 29ull;
    st64((c.r[9].w[0]), c.r[8].d[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    st64((c.r[9].w[0] + 8u), 0ull);
    set32(c.r[2], 0u + 71u);
    st64((c.r[9].w[0] + 16u), 0ull);
    set32(c.r[1], c.r[11].w[0] + c.r[1].w[0]);
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
    c.budget -= 40;
L_0022370C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[11], ld32((c.r[1].w[0] + 20144u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[11].w[0] + c.r[1].w[0]);
    set32(c.r[2], ld32((c.r[1].w[0] + 1364u)));
    c.r[1].d[0] = c.r[2].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_002237C8; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
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
    c.budget -= 39;
L_002237C8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[10], ld32((c.r[1].w[0] + 20144u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[10].w[0] + c.r[1].w[0]);
    set32(c.r[2], ld32((c.r[1].w[0] + 1364u)));
    c.r[1].d[0] = c.r[2].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] != 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_00223880; } }
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
    set32(c.r[2], 0u + 8u);
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
L_00223880:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00223888u);  if (depth < kMaxDepth) unit_003D(c, 81u, depth + 1u); else { c.pc = 0x001F53D0u; return; } if (c.pc != 0x00223888u) [[unlikely]] return; }
L_00223888:
    set32(c.r[3], 0u + 26u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);  if (t) { goto L_002238A0; } }
    set32(c.r[2], 0u + 56u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[2].d[0];  if (t) { goto L_002238B0; } }
L_002238A0:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[1].w[0] + 31072u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002238B0u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0048(c, 291u, depth + 1u); else { c.pc = 0x002225F0u; return; } if (c.pc != 0x002238B0u) [[unlikely]] return; }
L_002238B0:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < 150ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00223880u | kUnwind; return; } goto L_00223880; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002238C8u);  if (depth < kMaxDepth) unit_003D(c, 81u, depth + 1u); else { c.pc = 0x001F53D0u; return; } if (c.pc != 0x002238C8u) [[unlikely]] return; }
L_002238C8:
    set32(c.r[3], 0u + 26u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);  if (t) { goto L_002238E4; } }
    set32(c.r[5], 0u + 56u);
    set32(c.r[4], ld32((c.r[1].w[0] + 31072u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002238E4u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0048(c, 291u, depth + 1u); else { c.pc = 0x002225F0u; return; } if (c.pc != 0x002238E4u) [[unlikely]] return; }
L_002238E4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00223900:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00223910u);  if (depth < kMaxDepth) unit_003D(c, 81u, depth + 1u); else { c.pc = 0x001F53D0u; return; } if (c.pc != 0x00223910u) [[unlikely]] return; }
L_00223910:
    c.r[1].d[0] = c.r[2].sd[0] < 30ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00223924; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002239C0; } }
L_00223924:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022392Cu);  if (depth < kMaxDepth) unit_003D(c, 81u, depth + 1u); else { c.pc = 0x001F53D0u; return; } if (c.pc != 0x0022392Cu) [[unlikely]] return; }
L_0022392C:
    set32(c.r[3], 0u + 39u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_00223940; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002239C0; } }
L_00223940:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00223948u);  if (depth < kMaxDepth) unit_003D(c, 81u, depth + 1u); else { c.pc = 0x001F53D0u; return; } if (c.pc != 0x00223948u) [[unlikely]] return; }
L_00223948:
    set32(c.r[3], 0u + 42u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_0022395C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002239C0; } }
L_0022395C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00223964u);  if (depth < kMaxDepth) unit_003D(c, 81u, depth + 1u); else { c.pc = 0x001F53D0u; return; } if (c.pc != 0x00223964u) [[unlikely]] return; }
L_00223964:
    set32(c.r[3], 0u + 48u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_00223978; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002239C0; } }
L_00223978:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00223980u);  if (depth < kMaxDepth) unit_003D(c, 81u, depth + 1u); else { c.pc = 0x001F53D0u; return; } if (c.pc != 0x00223980u) [[unlikely]] return; }
L_00223980:
    set32(c.r[3], 0u + 49u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_00223994; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002239C0; } }
L_00223994:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022399Cu);  if (depth < kMaxDepth) unit_003D(c, 81u, depth + 1u); else { c.pc = 0x001F53D0u; return; } if (c.pc != 0x0022399Cu) [[unlikely]] return; }
L_0022399C:
    set32(c.r[3], 0u + 52u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_002239B0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002239C0; } }
L_002239B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002239B8u);  if (depth < kMaxDepth) unit_003D(c, 81u, depth + 1u); else { c.pc = 0x001F53D0u; return; } if (c.pc != 0x002239B8u) [[unlikely]] return; }
L_002239B8:
    c.r[2].d[0] = c.r[2].d[0] ^ 53ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 2;
L_002239C0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002239D0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002239E0u);  if (depth < kMaxDepth) unit_003D(c, 81u, depth + 1u); else { c.pc = 0x001F53D0u; return; } if (c.pc != 0x002239E0u) [[unlikely]] return; }
L_002239E0:
    c.r[2].d[0] = c.r[2].sd[0] < 30ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002239F4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00223A90; } }
L_002239F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002239FCu);  if (depth < kMaxDepth) unit_003D(c, 81u, depth + 1u); else { c.pc = 0x001F53D0u; return; } if (c.pc != 0x002239FCu) [[unlikely]] return; }
L_002239FC:
    set32(c.r[3], 0u + 10u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_00223A10; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00223A90; } }
L_00223A10:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00223A18u);  if (depth < kMaxDepth) unit_003D(c, 81u, depth + 1u); else { c.pc = 0x001F53D0u; return; } if (c.pc != 0x00223A18u) [[unlikely]] return; }
L_00223A18:
    set32(c.r[3], 0u + 11u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_00223A2C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00223A90; } }
L_00223A2C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00223A34u);  if (depth < kMaxDepth) unit_003D(c, 81u, depth + 1u); else { c.pc = 0x001F53D0u; return; } if (c.pc != 0x00223A34u) [[unlikely]] return; }
L_00223A34:
    set32(c.r[3], 0u + 14u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_00223A48; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00223A90; } }
L_00223A48:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00223A50u);  if (depth < kMaxDepth) unit_003D(c, 81u, depth + 1u); else { c.pc = 0x001F53D0u; return; } if (c.pc != 0x00223A50u) [[unlikely]] return; }
L_00223A50:
    set32(c.r[3], 0u + 15u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_00223A64; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00223A90; } }
L_00223A64:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00223A6Cu);  if (depth < kMaxDepth) unit_003D(c, 81u, depth + 1u); else { c.pc = 0x001F53D0u; return; } if (c.pc != 0x00223A6Cu) [[unlikely]] return; }
L_00223A6C:
    set32(c.r[3], 0u + 18u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_00223A80; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00223A90; } }
L_00223A80:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00223A88u);  if (depth < kMaxDepth) unit_003D(c, 81u, depth + 1u); else { c.pc = 0x001F53D0u; return; } if (c.pc != 0x00223A88u) [[unlikely]] return; }
L_00223A88:
    c.r[2].d[0] = c.r[2].d[0] ^ 19ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 2;
L_00223A90:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00223AA0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00223B04; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] - 5696u);
    set32(c.r[2], c.r[2].w[0] - 5680u);
    st32((c.r[17].w[0] + 24u), c.r[3].w[0]);
    set32(c.r[4], c.r[17].w[0] + 28u);
    st32((c.r[17].w[0] + 28u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00223AE0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000F(c, 266u, depth + 1u); else { c.pc = 0x0013E5B0u; return; } if (c.pc != 0x00223AE0u) [[unlikely]] return; }
L_00223AE0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00223AECu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000F(c, 31u, depth + 1u); else { c.pc = 0x0013C3B0u; return; } if (c.pc != 0x00223AECu) [[unlikely]] return; }
L_00223AEC:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00223B08; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00223B04u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x00223B04u) [[unlikely]] return; }
L_00223B04:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00223B08:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00223B20:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00223B84; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] - 5648u);
    set32(c.r[2], c.r[2].w[0] - 5632u);
    st32((c.r[17].w[0] + 24u), c.r[3].w[0]);
    set32(c.r[4], c.r[17].w[0] + 28u);
    st32((c.r[17].w[0] + 28u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00223B60u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000F(c, 266u, depth + 1u); else { c.pc = 0x0013E5B0u; return; } if (c.pc != 0x00223B60u) [[unlikely]] return; }
L_00223B60:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00223B6Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000F(c, 31u, depth + 1u); else { c.pc = 0x0013C3B0u; return; } if (c.pc != 0x00223B6Cu) [[unlikely]] return; }
L_00223B6C:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00223B88; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00223B84u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x00223B84u) [[unlikely]] return; }
L_00223B84:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00223B88:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00223BA0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00223C04; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] - 5600u);
    set32(c.r[2], c.r[2].w[0] - 5584u);
    st32((c.r[17].w[0] + 24u), c.r[3].w[0]);
    set32(c.r[4], c.r[17].w[0] + 28u);
    st32((c.r[17].w[0] + 28u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00223BE0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000F(c, 266u, depth + 1u); else { c.pc = 0x0013E5B0u; return; } if (c.pc != 0x00223BE0u) [[unlikely]] return; }
L_00223BE0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00223BECu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000F(c, 31u, depth + 1u); else { c.pc = 0x0013C3B0u; return; } if (c.pc != 0x00223BECu) [[unlikely]] return; }
L_00223BEC:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00223C08; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00223C04u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x00223C04u) [[unlikely]] return; }
L_00223C04:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00223C08:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00223C20:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00223C9C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] - 5456u);
    set32(c.r[3], c.r[3].w[0] - 5440u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[4], c.r[17].w[0] + 28u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] - 5424u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00223C6Cu); st32((c.r[17].w[0] + 52u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000F(c, 31u, depth + 1u); else { c.pc = 0x0013C3B0u; return; } if (c.pc != 0x00223C6Cu) [[unlikely]] return; }
L_00223C6C:
    set32(c.r[4], c.r[17].w[0] + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00223C78u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000F(c, 266u, depth + 1u); else { c.pc = 0x0013E5B0u; return; } if (c.pc != 0x00223C78u) [[unlikely]] return; }
L_00223C78:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00223C84u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000F(c, 252u, depth + 1u); else { c.pc = 0x0013E3C0u; return; } if (c.pc != 0x00223C84u) [[unlikely]] return; }
L_00223C84:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00223CA0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00223C9Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x00223C9Cu) [[unlikely]] return; }
L_00223C9C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00223CA0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00223CC0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0021DE00u | kUnwind; return; } [[clang::musttail]] return unit_0047(c, 154u, depth); }
L_00223CD0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00223C20u | kUnwind; return; } goto L_00223C20; }
L_00223CE0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 28u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00223C20u | kUnwind; return; } goto L_00223C20; }
L_00223CF0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 416u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00222520u | kUnwind; return; } goto L_00222520; }
L_00223D00:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 416u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00221CE0u | kUnwind; return; } goto L_00221CE0; }
L_00223D10:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 424u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002230B0u | kUnwind; return; } goto L_002230B0; }
L_00223D20:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 424u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00221CE0u | kUnwind; return; } goto L_00221CE0; }
L_00223D30:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 436u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00221CE0u | kUnwind; return; } goto L_00221CE0; }
L_00223D40:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 28u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002230C0u | kUnwind; return; } goto L_002230C0; }
L_00223D50:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 28u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00223BA0u | kUnwind; return; } goto L_00223BA0; }
L_00223D60:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 28u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00223380u | kUnwind; return; } goto L_00223380; }
L_00223D70:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 28u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00223B20u | kUnwind; return; } goto L_00223B20; }
L_00223D80:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 28u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00223620u | kUnwind; return; } goto L_00223620; }
L_00223D90:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 28u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00223AA0u | kUnwind; return; } goto L_00223AA0; }
L_00223DA0:
    ld128((c.r[5].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[5].w[0] + 16u) & ~15u, c.vu0.vf[5]);
    ld128((c.r[5].w[0] + 32u) & ~15u, c.vu0.vf[6]);
    ld128((c.r[5].w[0] + 48u) & ~15u, c.vu0.vf[7]);
    c.r[2].d[0] = c.r[2].d[0] ^ c.r[2].d[0];
    c.r[2].d[0] = 0ull | 17792ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00420000u);
    c.r[2].d[0] = c.r[2].d[0] << 16;
    c.r[2].d[0] = c.r[2].d[0] << 16;
    c.r[2].d[0] = c.r[2].d[0] | 17792ull;
    c.r[2].d[0] = c.r[2].d[0] << 16;
    c.r[2].d[0] = 0ull | 17679ull;
    c.r[2].d[0] = c.r[2].d[0] << 16;
    c.r[2].d[0] = c.r[2].d[0] | 49152ull;
    c.r[2].d[0] = c.r[2].d[0] << 16;
    c.r[2].d[0] = c.r[2].d[0] | 17679ull;
    c.r[2].d[0] = c.r[2].d[0] << 16;
    c.r[2].d[0] = c.r[2].d[0] | 49152ull;
    ld128((c.r[1].w[0] - 23856u) & ~15u, c.r[2]);
    c.vu0.vf[29] = c.r[2];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00420000u);
    ld128((c.r[1].w[0] - 23840u) & ~15u, c.r[2]);
    c.vu0.vf[30] = c.r[2];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00420000u);
    ld128((c.r[1].w[0] - 23824u) & ~15u, c.r[2]);
    c.vu0.vf[10] = c.r[2];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00420000u);
    ld128((c.r[1].w[0] - 23808u) & ~15u, c.r[2]);
    c.vu0.vf[11] = c.r[2];
    c.budget -= 29;
L_00223E14:
    ld128((c.r[6].w[0]) & ~15u, c.vu0.vf[8]);
    set32(c.r[6], c.r[6].w[0] + 16u);
    vu::move(c.vu0, 1u, 8u, 0u);
    vu::mulabc(c.vu0, 15u, 4u, c.vu0.vf[8].w[0]);
    vu::maddabc(c.vu0, 15u, 5u, c.vu0.vf[8].w[1]);
    vu::maddabc(c.vu0, 15u, 6u, c.vu0.vf[8].w[2]);
    vu::maddbc(c.vu0, 15u, 12u, 7u, c.vu0.vf[8].w[3]);
    vu::div(c.vu0, c.vu0.vf[0].w[3], c.vu0.vf[12].w[3]);
    vu::mulbc(c.vu0, 14u, 12u, 12u, c.vu0.q);
    vu::ftoi(c.vu0, 15u, 13u, 12u, 4);
    ctc2(c, 16u, 0u);
    vu::sub(c.vu0, 12u, 0u, 29u, 12u);
    vu::sub(c.vu0, 12u, 0u, 12u, 30u);
    set32(c.r[2], cfc2(c, 16u));
    ctc2(c, 16u, 0u);
    vu::sub(c.vu0, 12u, 0u, 11u, 12u);
    vu::sub(c.vu0, 13u, 0u, 12u, 10u);
    set32(c.r[3], cfc2(c, 16u));
    c.r[2].d[0] = c.r[2].d[0] & 192ull;
    c.r[3].d[0] = c.r[3].d[0] & 192ull;
    set32(c.r[3], c.r[3].w[0] >> 4);
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    vu::set_vi(c.vu0, 1u, c.r[2].w[0]);
    vu::mfir(c.vu0, 1u, 13u, 1u);
    st128((c.r[4].w[0]) & ~15u, c.vu0.vf[13]);
    set32(c.r[7], c.r[7].w[0] - 1u);
    c.budget -= 37;
    { const bool t = 0ull != c.r[7].d[0]; set32(c.r[4], c.r[4].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00223E14u | kUnwind; return; } goto L_00223E14; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00223EB0:
    set32(c.r[29], c.r[29].w[0] - 128u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.r[11].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[10].d[0] = c.r[9].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[1].w[0] + 20144u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    set32(c.r[2], ld32((c.r[1].w[0] + 1428u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 15;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00223EF8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x70000000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = c.r[2].d[0] | 8192ull;  if (t) { goto L_00223EFC; } }
L_00223EF8:
    c.r[18].sd[0] = static_cast<std::int32_t>(0x70000000u);
    c.budget -= 1;
L_00223EFC:
    set32(c.r[2], c.r[6].w[0] >> 8);
    set32(c.r[17], c.r[18].w[0] + 32u);
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    c.r[5].d[0] = c.r[6].d[0] & 255ull;
    set32(c.r[2], c.r[6].w[0] >> 16);
    c.r[9].d[0] = 0ull | 32769ull;
    set32(c.r[6], c.r[6].w[0] >> 24);
    set32(c.r[17], c.r[17].w[0] + 16u);
    c.r[13].d[0] = c.r[6].d[0] & 255ull;
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.r[6].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[7].d[0] = c.r[6].d[0] | 16384ull;
    c.r[12].d[0] = c.r[7].d[0] << 32;
    c.r[6].sd[0] = static_cast<std::int32_t>(0x55550000u);
    c.r[7].d[0] = c.r[6].d[0] | 21845ull;
    c.r[9].d[0] = c.r[9].d[0] | c.r[12].d[0];
    c.r[7].d[0] = c.r[7].d[0] << 32;
    c.r[6].d[0] = c.r[6].d[0] | 21790ull;
    st64((c.r[18].w[0] + 32u), c.r[9].d[0]);
    c.r[6].d[0] = c.r[6].d[0] | c.r[7].d[0];
    st64((c.r[18].w[0] + 40u), c.r[6].d[0]);
    set32(c.r[12], c.r[29].w[0] + 64u);
    set32(c.r[6], 0u + 66u);
    st64((c.r[17].w[0] + 8u), c.r[6].d[0]);
    st64((c.r[17].w[0]), c.r[8].d[0]);
    set32(c.r[17], c.r[17].w[0] + 16u);
    st32((c.r[17].w[0]), c.r[5].w[0]);
    st32((c.r[17].w[0] + 4u), c.r[3].w[0]);
    st32((c.r[17].w[0] + 8u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 12u), c.r[13].w[0]);
    set32(c.r[2], ld32((c.r[1].w[0] + 20144u)));
    set32(c.r[17], c.r[17].w[0] + 16u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[1].d[0] = c.r[1].d[0] | 1168ull;
    set32(c.r[2], c.r[2].w[0] + c.r[1].w[0]);
    ld128((c.r[2].w[0]) & ~15u, c.r[6]);
    ld128((c.r[2].w[0] + 16u) & ~15u, c.r[7]);
    ld128((c.r[2].w[0] + 32u) & ~15u, c.r[8]);
    ld128((c.r[2].w[0] + 48u) & ~15u, c.r[9]);
    st128((c.r[12].w[0]) & ~15u, c.r[6]);
    st128((c.r[12].w[0] + 16u) & ~15u, c.r[7]);
    st128((c.r[12].w[0] + 32u) & ~15u, c.r[8]);
    c.budget -= 45;
    { const bool t = c.r[10].d[0] == 0ull; st128((c.r[12].w[0] + 48u) & ~15u, c.r[9]);  if (t) { [[clang::musttail]] return unit_0049(c, 2u, depth); } }
    set32(c.r[2], c.r[29].w[0] + 64u);
    set32(c.r[3], c.r[29].w[0] + 64u);
    ld128((c.r[2].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[2].w[0] + 16u) & ~15u, c.vu0.vf[5]);
    ld128((c.r[2].w[0] + 32u) & ~15u, c.vu0.vf[6]);
    ld128((c.r[2].w[0] + 48u) & ~15u, c.vu0.vf[7]);
    ld128((c.r[10].w[0]) & ~15u, c.vu0.vf[10]);
    ld128((c.r[10].w[0] + 16u) & ~15u, c.vu0.vf[11]);
    ld128((c.r[10].w[0] + 32u) & ~15u, c.vu0.vf[12]);
    ld128((c.r[10].w[0] + 48u) & ~15u, c.vu0.vf[13]);
    vu::mulabc(c.vu0, 15u, 4u, c.vu0.vf[10].w[0]);
    vu::maddabc(c.vu0, 15u, 5u, c.vu0.vf[10].w[1]);
    vu::maddabc(c.vu0, 15u, 6u, c.vu0.vf[10].w[2]);
    vu::maddbc(c.vu0, 15u, 10u, 7u, c.vu0.vf[10].w[3]);
    vu::mulabc(c.vu0, 15u, 4u, c.vu0.vf[11].w[0]);
    vu::maddabc(c.vu0, 15u, 5u, c.vu0.vf[11].w[1]);
    vu::maddabc(c.vu0, 15u, 6u, c.vu0.vf[11].w[2]);
    st128((c.r[3].w[0]) & ~15u, c.vu0.vf[10]);
    vu::maddbc(c.vu0, 15u, 11u, 7u, c.vu0.vf[11].w[3]);
    vu::mulabc(c.vu0, 15u, 4u, c.vu0.vf[12].w[0]);
    c.budget -= 20;
    [[clang::musttail]] return unit_0049(c, 1u, depth);
}

}
