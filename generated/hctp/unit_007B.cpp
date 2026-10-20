#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_007B[4096] = {
    1, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0,
    0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0,
    0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    15, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 19,
    0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0,
    0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 30, 0, 0,
    0, 31, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 34, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 36, 0, 0, 0, 37, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0,
    39, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 43, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 45, 0, 0, 0, 46, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 51, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 54, 0, 0, 0, 55, 0, 0, 0,
    56, 0, 57, 0, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 61, 0, 0,
    0, 62, 0, 0, 0, 63, 0, 0, 0, 0, 64, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 67,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 69, 0, 0, 0, 70, 71, 0, 0, 0, 72,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 74, 0, 75, 0, 76, 0, 77, 0, 0, 0, 0,
    78, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 85, 0, 0, 0, 0,
    0, 86, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 88, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0,
    0, 0, 91, 0, 0, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 95, 0, 0, 96, 0, 0, 0, 0, 0, 0, 0, 97, 0, 0, 98, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 99,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0,
    0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0, 0, 0, 106,
    0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0,
    0, 115, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 119, 0, 0,
    0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 121, 0, 0, 0, 122, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0,
    124, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 126, 0, 0, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 0, 0, 128, 0, 129, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 130, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0,
    135, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 137, 0, 0, 138, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0,
    0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0, 143, 0, 0, 0, 0, 144,
    0, 0, 0, 0, 145, 0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 148, 0, 0, 0, 0, 149, 0, 0, 0, 0,
    150, 0, 0, 0, 0, 151, 0, 0, 0, 0, 152, 0, 0, 0, 0, 153, 0, 0, 0, 0, 154, 0, 0, 0, 0, 155, 0, 0, 0, 0, 156, 0,
    0, 0, 0, 0, 157, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 160, 0, 0, 0, 0, 0, 161, 0, 0, 0,
    0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 0, 0, 164, 0, 165, 0, 166, 0, 0, 0, 167, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 170, 0,
    0, 0, 171, 0, 0, 0, 172, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 174, 0, 175, 0, 0, 0, 0, 176, 0, 0, 0, 177, 0, 0, 0,
    178, 0, 0, 0, 179, 0, 0, 0, 0, 0, 0, 180, 0, 181, 0, 0, 0, 0, 182, 0, 0, 0, 183, 0, 0, 0, 184, 0, 0, 0, 185, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 186, 0, 0, 0, 0, 187, 0,
    0, 0, 188, 0, 0, 0, 189, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 191, 0, 192, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0, 196, 0, 197, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 199, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0, 0,
    203, 0, 0, 0, 204, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 205, 0, 0, 0, 0,
    0, 0, 206, 0, 0, 0, 0, 0, 0, 207, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 208, 0, 0, 0, 0, 209, 0, 0, 0, 0, 210, 0, 0, 0, 0, 211, 0, 0, 0, 212, 0, 0, 213, 0, 0, 0, 0, 0,
    0, 0, 214, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 215, 0, 0, 0, 0, 216, 0, 0, 217, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 218, 0, 0, 0, 0, 219, 0, 220, 0, 0, 0, 0, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 222, 0, 0, 0, 0, 0, 0, 0, 0, 223, 0, 0,
    0, 0, 224, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 225, 0, 0, 0, 0, 226, 0, 0, 0, 0, 0, 0, 0, 227, 0, 0,
    0, 228, 0, 0, 0, 0, 229, 0, 230, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 231,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 232, 0, 0, 0, 0, 0, 0, 233, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 234, 0, 0, 0, 0, 235, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 236, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 237, 0, 0, 0, 0, 0, 0, 0, 238, 0, 239, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 241, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 242, 0, 243, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 244, 0, 0, 0, 0,
    0, 0, 0, 0, 245, 0, 0, 0, 0, 246, 0, 0, 0, 0, 247, 0, 0, 0, 0, 248, 0, 0, 0, 0, 0, 0, 0, 0, 249, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 250, 0, 0, 0, 0, 0, 251, 0, 0, 0, 0, 252, 0, 0, 0, 0, 253, 0,
    0, 0, 0, 254, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 256, 0,
    0, 0, 0, 0, 257, 0, 0, 0, 258, 0, 0, 0, 0, 0, 0, 0, 0, 259, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 260, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 262, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 263, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 264, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 265, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 266, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 267, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 268, 0, 0, 0, 0, 0, 0, 0, 269, 0, 0, 0, 0, 0, 0, 0, 0, 270, 0, 0, 0, 0, 0, 0, 0,
    271, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 272, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 273, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 274, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 275, 0, 0, 0, 276, 0, 0, 0, 277, 0,
    0, 278, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 279, 0, 0, 0, 0, 0, 0, 280, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 281, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 282, 0, 283, 0, 0, 0, 284, 0, 0, 285, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 286, 0, 0, 0, 0, 0, 0, 0, 287, 0, 0, 0, 0, 0, 0, 288,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 289, 0, 290, 0, 0, 0, 291, 0, 0, 292, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 293, 0, 0, 0, 0, 0, 0, 0, 294, 295, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 296, 0, 0, 0, 0, 297, 0, 0, 0, 0, 0, 298, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 299, 0, 300, 0, 0, 0, 301, 0, 0, 302, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 303, 0, 0, 0, 0, 0, 0, 0, 304, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    305, 0, 0, 0, 0, 0, 0, 0, 306, 0, 0, 0, 0, 0, 307, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 308, 0, 309, 0, 0, 310, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 311, 0, 0, 0, 0, 0, 0, 0, 312,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 313, 0, 0, 0, 0, 314, 0,
    0, 0, 0, 0, 315, 0, 0, 0, 0, 0, 316, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 317, 0, 318, 0, 0, 319, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 320, 0, 0, 0, 0, 0, 0, 0, 321, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 322, 0, 0, 0, 0, 0, 0, 0, 0, 323, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 324, 0, 0, 0, 0, 325, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 326, 0, 0, 0, 0, 0, 0, 0, 0, 327, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 328, 0, 0, 0, 0,
    329, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 330, 0, 0, 0, 0, 0, 0, 0, 0, 331, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 332, 0, 0, 0, 0, 333, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 334, 0, 0, 0, 0, 0, 0, 0, 0, 335, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 336, 0, 0, 0, 0, 337,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 338, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 339, 0, 0, 0, 0, 0, 340,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 341, 0, 0, 0, 0, 0, 0, 342, 0, 0, 0, 0, 0, 0, 0, 0, 0, 343, 0, 0, 0, 0, 0,
    344, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 345, 0,
    0, 0, 0, 346, 0, 0, 0, 0, 0, 347, 0, 0, 0, 348, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 349, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 350, 0, 0, 0, 0, 0, 0,
    0, 351, 0, 0, 0, 352, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 353, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 354, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 355, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 356, 0, 0, 0, 357, 0, 0, 0, 358, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    359, 0, 0, 0, 0, 0, 0, 0, 360, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 361, 0, 0, 0, 0, 0, 0, 0, 362, 0, 0, 0,
    363, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 364, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 365, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 366, 0, 0, 0, 0, 0, 0, 0, 367, 0, 0, 0, 368, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 369, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 370, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 371, 0, 0, 0, 0, 0, 0, 0, 372, 0, 0, 0, 373, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 374, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 375, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 376, 0, 0, 0, 0,
    0, 0, 0, 377, 378, 0, 0, 0, 379, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 380, 0, 381, 0, 0, 0, 382, 0, 0, 383, 0, 0, 384, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 385, 0, 0, 0, 0, 0, 0, 0, 386, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 387, 0, 388, 0, 0, 0, 389, 0, 0, 390, 0, 0, 391, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 392, 0,
    0, 0, 0, 0, 0, 0, 393, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 394, 0, 0, 0, 0, 395, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 396, 0, 397, 0, 0, 0, 398, 0, 0, 399, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 400, 0, 0, 0, 0, 0, 0, 0, 401, 0, 0, 0, 0, 0, 0, 0, 0, 0, 402, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 403, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 404, 0, 0, 0, 0, 405, 0, 0, 0, 0, 406, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 407, 0, 0, 0, 0, 408, 0, 0, 0, 0, 0, 0, 409, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 410, 0, 0, 0, 0, 0,
    411, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 412, 0, 0, 0, 0, 0, 413, 0, 0, 0, 0,
    0, 414, 0, 0, 0, 0, 0, 0, 415, 0, 0, 0, 0, 0, 0, 0, 0, 416, 0, 0, 0, 0, 417, 0, 0, 0, 0, 418, 0, 419, 0, 0,
    0, 0, 420, 0, 0, 0, 421, 0, 0, 0, 0, 0, 0, 0, 422, 0, 0, 423, 0, 424, 0, 425, 0, 0, 426, 0, 0, 0, 0, 427, 0, 0,
    0, 428, 0, 429, 0, 0, 0, 0, 0, 0, 0, 0, 430, 0, 0, 0, 0, 0, 0, 0, 431, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 432, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 433, 0, 0, 0, 0, 0, 0, 0, 0, 0, 434, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 435, 0, 0, 0, 0, 0, 436, 0, 0, 0, 0, 0, 437, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 438, 0, 0, 0, 439, 0, 0, 0, 0, 0, 0, 440, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_007B(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_002EC000;
    case 2u: goto L_002EC010;
    case 3u: goto L_002EC034;
    case 4u: goto L_002EC048;
    case 5u: goto L_002EC09C;
    case 6u: goto L_002EC0EC;
    case 7u: goto L_002EC10C;
    case 8u: goto L_002EC134;
    case 9u: goto L_002EC16C;
    case 10u: goto L_002EC188;
    case 11u: goto L_002EC1E0;
    case 12u: goto L_002EC214;
    case 13u: goto L_002EC240;
    case 14u: goto L_002EC254;
    case 15u: goto L_002EC280;
    case 16u: goto L_002EC29C;
    case 17u: goto L_002EC2B4;
    case 18u: goto L_002EC2E0;
    case 19u: goto L_002EC2FC;
    case 20u: goto L_002EC30C;
    case 21u: goto L_002EC334;
    case 22u: goto L_002EC350;
    case 23u: goto L_002EC364;
    case 24u: goto L_002EC390;
    case 25u: goto L_002EC3CC;
    case 26u: goto L_002EC3F0;
    case 27u: goto L_002EC408;
    case 28u: goto L_002EC444;
    case 29u: goto L_002EC45C;
    case 30u: goto L_002EC474;
    case 31u: goto L_002EC484;
    case 32u: goto L_002EC49C;
    case 33u: goto L_002EC4E8;
    case 34u: goto L_002EC4F4;
    case 35u: goto L_002EC520;
    case 36u: goto L_002EC538;
    case 37u: goto L_002EC548;
    case 38u: goto L_002EC560;
    case 39u: goto L_002EC580;
    case 40u: goto L_002EC5A8;
    case 41u: goto L_002EC5B4;
    case 42u: goto L_002EC5D8;
    case 43u: goto L_002EC604;
    case 44u: goto L_002EC61C;
    case 45u: goto L_002EC634;
    case 46u: goto L_002EC644;
    case 47u: goto L_002EC65C;
    case 48u: goto L_002EC6A8;
    case 49u: goto L_002EC6B4;
    case 50u: goto L_002EC6E0;
    case 51u: goto L_002EC6F0;
    case 52u: goto L_002EC71C;
    case 53u: goto L_002EC748;
    case 54u: goto L_002EC760;
    case 55u: goto L_002EC770;
    case 56u: goto L_002EC780;
    case 57u: goto L_002EC788;
    case 58u: goto L_002EC7B0;
    case 59u: goto L_002EC7BC;
    case 60u: goto L_002EC7E4;
    case 61u: goto L_002EC7F4;
    case 62u: goto L_002EC804;
    case 63u: goto L_002EC814;
    case 64u: goto L_002EC828;
    case 65u: goto L_002EC834;
    case 66u: goto L_002EC868;
    case 67u: goto L_002EC87C;
    case 68u: goto L_002EC8C8;
    case 69u: goto L_002EC8D8;
    case 70u: goto L_002EC8E8;
    case 71u: goto L_002EC8EC;
    case 72u: goto L_002EC8FC;
    case 73u: goto L_002EC930;
    case 74u: goto L_002EC954;
    case 75u: goto L_002EC95C;
    case 76u: goto L_002EC964;
    case 77u: goto L_002EC96C;
    case 78u: goto L_002EC980;
    case 79u: goto L_002EC990;
    case 80u: goto L_002EC9B8;
    case 81u: goto L_002EC9CC;
    case 82u: goto L_002EC9E4;
    case 83u: goto L_002ECA10;
    case 84u: goto L_002ECA5C;
    case 85u: goto L_002ECA6C;
    case 86u: goto L_002ECA84;
    case 87u: goto L_002ECAA0;
    case 88u: goto L_002ECAB0;
    case 89u: goto L_002ECAC0;
    case 90u: goto L_002ECAE4;
    case 91u: goto L_002ECB08;
    case 92u: goto L_002ECB30;
    case 93u: goto L_002ECB44;
    case 94u: goto L_002ECB60;
    case 95u: goto L_002ECB88;
    case 96u: goto L_002ECB94;
    case 97u: goto L_002ECBB4;
    case 98u: goto L_002ECBC0;
    case 99u: goto L_002ECBFC;
    case 100u: goto L_002ECC34;
    case 101u: goto L_002ECC54;
    case 102u: goto L_002ECC74;
    case 103u: goto L_002ECC94;
    case 104u: goto L_002ECCA8;
    case 105u: goto L_002ECD54;
    case 106u: goto L_002ECD7C;
    case 107u: goto L_002ECD98;
    case 108u: goto L_002ECDB4;
    case 109u: goto L_002ECDD0;
    case 110u: goto L_002ECDEC;
    case 111u: goto L_002ECE14;
    case 112u: goto L_002ECE30;
    case 113u: goto L_002ECE4C;
    case 114u: goto L_002ECE68;
    case 115u: goto L_002ECE84;
    case 116u: goto L_002ECEA0;
    case 117u: goto L_002ECEBC;
    case 118u: goto L_002ECED8;
    case 119u: goto L_002ECEF4;
    case 120u: goto L_002ECF10;
    case 121u: goto L_002ECF3C;
    case 122u: goto L_002ECF4C;
    case 123u: goto L_002ECF60;
    case 124u: goto L_002ECF80;
    case 125u: goto L_002ECFE0;
    case 126u: goto L_002ED008;
    case 127u: goto L_002ED030;
    case 128u: goto L_002ED058;
    case 129u: goto L_002ED060;
    case 130u: goto L_002ED08C;
    case 131u: goto L_002ED0A0;
    case 132u: goto L_002ED0BC;
    case 133u: goto L_002ED0D0;
    case 134u: goto L_002ED0EC;
    case 135u: goto L_002ED100;
    case 136u: goto L_002ED12C;
    case 137u: goto L_002ED148;
    case 138u: goto L_002ED154;
    case 139u: goto L_002ED16C;
    case 140u: goto L_002ED190;
    case 141u: goto L_002ED1B4;
    case 142u: goto L_002ED1D4;
    case 143u: goto L_002ED1E8;
    case 144u: goto L_002ED1FC;
    case 145u: goto L_002ED210;
    case 146u: goto L_002ED224;
    case 147u: goto L_002ED244;
    case 148u: goto L_002ED258;
    case 149u: goto L_002ED26C;
    case 150u: goto L_002ED280;
    case 151u: goto L_002ED294;
    case 152u: goto L_002ED2A8;
    case 153u: goto L_002ED2BC;
    case 154u: goto L_002ED2D0;
    case 155u: goto L_002ED2E4;
    case 156u: goto L_002ED2F8;
    case 157u: goto L_002ED310;
    case 158u: goto L_002ED320;
    case 159u: goto L_002ED344;
    case 160u: goto L_002ED358;
    case 161u: goto L_002ED370;
    case 162u: goto L_002ED390;
    case 163u: goto L_002ED3B0;
    case 164u: goto L_002ED3D4;
    case 165u: goto L_002ED3DC;
    case 166u: goto L_002ED3E4;
    case 167u: goto L_002ED3F4;
    case 168u: goto L_002ED434;
    case 169u: goto L_002ED464;
    case 170u: goto L_002ED478;
    case 171u: goto L_002ED488;
    case 172u: goto L_002ED498;
    case 173u: goto L_002ED4A8;
    case 174u: goto L_002ED4C4;
    case 175u: goto L_002ED4CC;
    case 176u: goto L_002ED4E0;
    case 177u: goto L_002ED4F0;
    case 178u: goto L_002ED500;
    case 179u: goto L_002ED510;
    case 180u: goto L_002ED52C;
    case 181u: goto L_002ED534;
    case 182u: goto L_002ED548;
    case 183u: goto L_002ED558;
    case 184u: goto L_002ED568;
    case 185u: goto L_002ED578;
    case 186u: goto L_002ED5E4;
    case 187u: goto L_002ED5F8;
    case 188u: goto L_002ED608;
    case 189u: goto L_002ED618;
    case 190u: goto L_002ED628;
    case 191u: goto L_002ED69C;
    case 192u: goto L_002ED6A4;
    case 193u: goto L_002ED6B4;
    case 194u: goto L_002ED720;
    case 195u: goto L_002ED73C;
    case 196u: goto L_002ED74C;
    case 197u: goto L_002ED754;
    case 198u: goto L_002ED768;
    case 199u: goto L_002ED7B0;
    case 200u: goto L_002ED824;
    case 201u: goto L_002ED840;
    case 202u: goto L_002ED86C;
    case 203u: goto L_002ED880;
    case 204u: goto L_002ED890;
    case 205u: goto L_002ED8EC;
    case 206u: goto L_002ED908;
    case 207u: goto L_002ED924;
    case 208u: goto L_002ED990;
    case 209u: goto L_002ED9A4;
    case 210u: goto L_002ED9B8;
    case 211u: goto L_002ED9CC;
    case 212u: goto L_002ED9DC;
    case 213u: goto L_002ED9E8;
    case 214u: goto L_002EDA08;
    case 215u: goto L_002EDA50;
    case 216u: goto L_002EDA64;
    case 217u: goto L_002EDA70;
    case 218u: goto L_002EDA9C;
    case 219u: goto L_002EDAB0;
    case 220u: goto L_002EDAB8;
    case 221u: goto L_002EDADC;
    case 222u: goto L_002EDB50;
    case 223u: goto L_002EDB74;
    case 224u: goto L_002EDB88;
    case 225u: goto L_002EDBC0;
    case 226u: goto L_002EDBD4;
    case 227u: goto L_002EDBF4;
    case 228u: goto L_002EDC04;
    case 229u: goto L_002EDC18;
    case 230u: goto L_002EDC20;
    case 231u: goto L_002EDC7C;
    case 232u: goto L_002EDCCC;
    case 233u: goto L_002EDCE8;
    case 234u: goto L_002EDD40;
    case 235u: goto L_002EDD54;
    case 236u: goto L_002EDDAC;
    case 237u: goto L_002EDE1C;
    case 238u: goto L_002EDE3C;
    case 239u: goto L_002EDE44;
    case 240u: goto L_002EDE80;
    case 241u: goto L_002EDEB4;
    case 242u: goto L_002EDEF0;
    case 243u: goto L_002EDEF8;
    case 244u: goto L_002EDF6C;
    case 245u: goto L_002EDF90;
    case 246u: goto L_002EDFA4;
    case 247u: goto L_002EDFB8;
    case 248u: goto L_002EDFCC;
    case 249u: goto L_002EDFF0;
    case 250u: goto L_002EE038;
    case 251u: goto L_002EE050;
    case 252u: goto L_002EE064;
    case 253u: goto L_002EE078;
    case 254u: goto L_002EE08C;
    case 255u: goto L_002EE0B0;
    case 256u: goto L_002EE0F8;
    case 257u: goto L_002EE110;
    case 258u: goto L_002EE120;
    case 259u: goto L_002EE144;
    case 260u: goto L_002EE1AC;
    case 261u: goto L_002EE210;
    case 262u: goto L_002EE278;
    case 263u: goto L_002EE33C;
    case 264u: goto L_002EE368;
    case 265u: goto L_002EE3D4;
    case 266u: goto L_002EE410;
    case 267u: goto L_002EE44C;
    case 268u: goto L_002EE49C;
    case 269u: goto L_002EE4BC;
    case 270u: goto L_002EE4E0;
    case 271u: goto L_002EE500;
    case 272u: goto L_002EE574;
    case 273u: goto L_002EE5E0;
    case 274u: goto L_002EE61C;
    case 275u: goto L_002EE658;
    case 276u: goto L_002EE668;
    case 277u: goto L_002EE678;
    case 278u: goto L_002EE684;
    case 279u: goto L_002EE6BC;
    case 280u: goto L_002EE6D8;
    case 281u: goto L_002EE704;
    case 282u: goto L_002EE754;
    case 283u: goto L_002EE75C;
    case 284u: goto L_002EE76C;
    case 285u: goto L_002EE778;
    case 286u: goto L_002EE7C0;
    case 287u: goto L_002EE7E0;
    case 288u: goto L_002EE7FC;
    case 289u: goto L_002EE84C;
    case 290u: goto L_002EE854;
    case 291u: goto L_002EE864;
    case 292u: goto L_002EE870;
    case 293u: goto L_002EE8B8;
    case 294u: goto L_002EE8D8;
    case 295u: goto L_002EE8DC;
    case 296u: goto L_002EE93C;
    case 297u: goto L_002EE950;
    case 298u: goto L_002EE968;
    case 299u: goto L_002EE9C8;
    case 300u: goto L_002EE9D0;
    case 301u: goto L_002EE9E0;
    case 302u: goto L_002EE9EC;
    case 303u: goto L_002EEA34;
    case 304u: goto L_002EEA54;
    case 305u: goto L_002EEA80;
    case 306u: goto L_002EEAA0;
    case 307u: goto L_002EEAB8;
    case 308u: goto L_002EEB0C;
    case 309u: goto L_002EEB14;
    case 310u: goto L_002EEB20;
    case 311u: goto L_002EEB5C;
    case 312u: goto L_002EEB7C;
    case 313u: goto L_002EEBE4;
    case 314u: goto L_002EEBF8;
    case 315u: goto L_002EEC10;
    case 316u: goto L_002EEC28;
    case 317u: goto L_002EEC88;
    case 318u: goto L_002EEC90;
    case 319u: goto L_002EEC9C;
    case 320u: goto L_002EECD8;
    case 321u: goto L_002EECF8;
    case 322u: goto L_002EED38;
    case 323u: goto L_002EED5C;
    case 324u: goto L_002EEDB4;
    case 325u: goto L_002EEDC8;
    case 326u: goto L_002EEE14;
    case 327u: goto L_002EEE38;
    case 328u: goto L_002EEE6C;
    case 329u: goto L_002EEE80;
    case 330u: goto L_002EEED0;
    case 331u: goto L_002EEEF4;
    case 332u: goto L_002EEF48;
    case 333u: goto L_002EEF5C;
    case 334u: goto L_002EEF88;
    case 335u: goto L_002EEFAC;
    case 336u: goto L_002EEFE8;
    case 337u: goto L_002EEFFC;
    case 338u: goto L_002EF040;
    case 339u: goto L_002EF0E4;
    case 340u: goto L_002EF0FC;
    case 341u: goto L_002EF124;
    case 342u: goto L_002EF140;
    case 343u: goto L_002EF168;
    case 344u: goto L_002EF180;
    case 345u: goto L_002EF1F8;
    case 346u: goto L_002EF20C;
    case 347u: goto L_002EF224;
    case 348u: goto L_002EF234;
    case 349u: goto L_002EF2A4;
    case 350u: goto L_002EF2E4;
    case 351u: goto L_002EF304;
    case 352u: goto L_002EF314;
    case 353u: goto L_002EF35C;
    case 354u: goto L_002EF394;
    case 355u: goto L_002EF3E8;
    case 356u: goto L_002EF420;
    case 357u: goto L_002EF430;
    case 358u: goto L_002EF440;
    case 359u: goto L_002EF480;
    case 360u: goto L_002EF4A0;
    case 361u: goto L_002EF4D0;
    case 362u: goto L_002EF4F0;
    case 363u: goto L_002EF500;
    case 364u: goto L_002EF534;
    case 365u: goto L_002EF56C;
    case 366u: goto L_002EF5AC;
    case 367u: goto L_002EF5CC;
    case 368u: goto L_002EF5DC;
    case 369u: goto L_002EF614;
    case 370u: goto L_002EF64C;
    case 371u: goto L_002EF68C;
    case 372u: goto L_002EF6AC;
    case 373u: goto L_002EF6BC;
    case 374u: goto L_002EF6F4;
    case 375u: goto L_002EF72C;
    case 376u: goto L_002EF76C;
    case 377u: goto L_002EF78C;
    case 378u: goto L_002EF790;
    case 379u: goto L_002EF7A0;
    case 380u: goto L_002EF828;
    case 381u: goto L_002EF830;
    case 382u: goto L_002EF840;
    case 383u: goto L_002EF84C;
    case 384u: goto L_002EF858;
    case 385u: goto L_002EF898;
    case 386u: goto L_002EF8B8;
    case 387u: goto L_002EF908;
    case 388u: goto L_002EF910;
    case 389u: goto L_002EF920;
    case 390u: goto L_002EF92C;
    case 391u: goto L_002EF938;
    case 392u: goto L_002EF978;
    case 393u: goto L_002EF998;
    case 394u: goto L_002EF9C8;
    case 395u: goto L_002EF9DC;
    case 396u: goto L_002EFA2C;
    case 397u: goto L_002EFA34;
    case 398u: goto L_002EFA44;
    case 399u: goto L_002EFA50;
    case 400u: goto L_002EFA98;
    case 401u: goto L_002EFAB8;
    case 402u: goto L_002EFAE0;
    case 403u: goto L_002EFB20;
    case 404u: goto L_002EFB8C;
    case 405u: goto L_002EFBA0;
    case 406u: goto L_002EFBB4;
    case 407u: goto L_002EFC08;
    case 408u: goto L_002EFC1C;
    case 409u: goto L_002EFC38;
    case 410u: goto L_002EFC68;
    case 411u: goto L_002EFC80;
    case 412u: goto L_002EFCD4;
    case 413u: goto L_002EFCEC;
    case 414u: goto L_002EFD04;
    case 415u: goto L_002EFD20;
    case 416u: goto L_002EFD44;
    case 417u: goto L_002EFD58;
    case 418u: goto L_002EFD6C;
    case 419u: goto L_002EFD74;
    case 420u: goto L_002EFD88;
    case 421u: goto L_002EFD98;
    case 422u: goto L_002EFDB8;
    case 423u: goto L_002EFDC4;
    case 424u: goto L_002EFDCC;
    case 425u: goto L_002EFDD4;
    case 426u: goto L_002EFDE0;
    case 427u: goto L_002EFDF4;
    case 428u: goto L_002EFE04;
    case 429u: goto L_002EFE0C;
    case 430u: goto L_002EFE30;
    case 431u: goto L_002EFE50;
    case 432u: goto L_002EFE90;
    case 433u: goto L_002EFED0;
    case 434u: goto L_002EFEF8;
    case 435u: goto L_002EFF20;
    case 436u: goto L_002EFF38;
    case 437u: goto L_002EFF50;
    case 438u: goto L_002EFFAC;
    case 439u: goto L_002EFFBC;
    case 440u: goto L_002EFFD8;
    default: bad_entry(c, 0x002EC000u); return;
    }
L_002EC000:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002EC010:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x474F0000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.r[7].d[0] = c.r[2].d[0] | 16970ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EC034u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_002C(c, 200u, depth + 1u); else { c.pc = 0x001B1A30u; return; } if (c.pc != 0x002EC034u) [[unlikely]] return; }
L_002EC034:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 15584u);
    st32((c.r[18].w[0] + 56u), c.r[2].w[0]);
    set32(c.r[2], 0u + 5u);
    c.budget -= 5;
L_002EC048:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 3u);  if (t) { goto L_002EC058; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != c.r[2].d[0];  if (t) { goto L_002EC0A8; } }
L_002EC058:
    set32(c.r[3], ld32((c.r[18].w[0] + 68u)));
    set32(c.r[16], c.r[17].w[0] << 2);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[2], ld32((c.r[1].w[0] + 26176u)));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    c.f[0] = ld32((c.r[3].w[0]));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    set32(c.r[3], c.r[3].w[0] - 1000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 2072u)));
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EC09Cu); c.r[7].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_005B(c, 303u, depth + 1u); else { c.pc = 0x0026E9C0u; return; } if (c.pc != 0x002EC09Cu) [[unlikely]] return; }
L_002EC09C:
    set32(c.r[3], c.r[18].w[0] + c.r[16].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 96u), c.r[2].w[0]);  if (t) { goto L_002EC0F4; } }
L_002EC0A8:
    set32(c.r[3], ld32((c.r[18].w[0] + 68u)));
    set32(c.r[16], c.r[17].w[0] << 2);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[1].w[0] + 26176u)));
    set32(c.r[6], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    c.f[0] = ld32((c.r[3].w[0]));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    set32(c.r[3], c.r[3].w[0] - 1000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 2072u)));
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EC0ECu); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_005B(c, 303u, depth + 1u); else { c.pc = 0x0026E9C0u; return; } if (c.pc != 0x002EC0ECu) [[unlikely]] return; }
L_002EC0EC:
    set32(c.r[3], c.r[18].w[0] + c.r[16].w[0]);
    st32((c.r[3].w[0] + 96u), c.r[2].w[0]);
    c.budget -= 2;
L_002EC0F4:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 5u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002EC048u | kUnwind; return; } goto L_002EC048; } }
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[2], 0u + 3u);
    c.budget -= 2;
L_002EC10C:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != c.r[2].d[0];  if (t) { goto L_002EC144; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 68u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 26176u)));
    c.f[0] = ld32((c.r[2].w[0] + 52u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EC134u); set32(c.r[5], c.r[2].w[0] - 2000u);  if (depth < kMaxDepth) unit_0024(c, 249u, depth + 1u); else { c.pc = 0x00191DE0u; return; } if (c.pc != 0x002EC134u) [[unlikely]] return; }
L_002EC134:
    set32(c.r[3], c.r[16].w[0] << 2);
    set32(c.r[3], c.r[18].w[0] + c.r[3].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 120u), c.r[2].w[0]);  if (t) { goto L_002EC174; } }
L_002EC144:
    set32(c.r[2], ld32((c.r[18].w[0] + 68u)));
    set32(c.r[17], c.r[16].w[0] << 2);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 26176u)));
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    c.f[0] = ld32((c.r[2].w[0] + 24u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EC16Cu); set32(c.r[5], c.r[2].w[0] - 2000u);  if (depth < kMaxDepth) unit_0024(c, 249u, depth + 1u); else { c.pc = 0x00191DE0u; return; } if (c.pc != 0x002EC16Cu) [[unlikely]] return; }
L_002EC16C:
    set32(c.r[3], c.r[18].w[0] + c.r[17].w[0]);
    st32((c.r[3].w[0] + 120u), c.r[2].w[0]);
    c.budget -= 2;
L_002EC174:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 3u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002EC10Cu | kUnwind; return; } goto L_002EC10C; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002EC188:
    set32(c.r[4], ld32((c.r[18].w[0] + 68u)));
    set32(c.r[6], c.r[5].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + 1u);
    set32(c.r[3], c.r[18].w[0] + c.r[6].w[0]);
    c.r[2].d[0] = c.r[5].sd[0] < 4ll ? 1ull : 0ull;
    set32(c.r[4], c.r[4].w[0] + c.r[6].w[0]);
    c.f[0] = ld32((c.r[4].w[0] + 36u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[4], c.f[0]);
    c.budget -= 11;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[3].w[0] + 136u), c.r[4].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002EC188u | kUnwind; return; } goto L_002EC188; } }
    st32((c.r[18].w[0] + 152u), 0u);
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    st8((c.r[18].w[0] + 156u), static_cast<std::uint8_t>(0u));
    st8((c.r[18].w[0] + 157u), static_cast<std::uint8_t>(0u));
    st8((c.r[18].w[0] + 158u), static_cast<std::uint8_t>(0u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002EC1E0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const bool t = c.r[18].d[0] == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002EC2B4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 15584u);
    st32((c.r[18].w[0] + 56u), c.r[2].w[0]);
    c.budget -= 4;
L_002EC214:
    set32(c.r[2], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 96u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[19], c.r[2].w[0] + 96u);  if (t) { goto L_002EC240; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002EC240; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002EC240u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002EC240u) [[unlikely]] return; }
L_002EC240:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[19].w[0]), 0u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002EC214u | kUnwind; return; } goto L_002EC214; } }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002EC254:
    set32(c.r[2], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 120u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[19], c.r[2].w[0] + 120u);  if (t) { goto L_002EC280; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002EC280; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002EC280u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002EC280u) [[unlikely]] return; }
L_002EC280:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[19].w[0]), 0u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002EC254u | kUnwind; return; } goto L_002EC254; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EC29Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002C(c, 203u, depth + 1u); else { c.pc = 0x001B1AC0u; return; } if (c.pc != 0x002EC29Cu) [[unlikely]] return; }
L_002EC29C:
    c.r[2].d[0] = c.r[17].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_002EC2B8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EC2B4u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x002EC2B4u) [[unlikely]] return; }
L_002EC2B4:
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_002EC2B8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002EC2E0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 7;
L_002EC2FC:
    set32(c.r[25], ld32((c.r[17].w[0] + 56u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002EC30Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002EC30Cu) [[unlikely]] return; }
L_002EC30C:
    ld128((c.r[2].w[0]) & ~15u, c.r[3]);
    set32(c.r[4], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[17].w[0] + c.r[4].w[0]);
    set32(c.r[18], c.r[2].w[0] + 96u);
    set32(c.r[2], ld32((c.r[2].w[0] + 96u)));
    st128((c.r[2].w[0] + 224u) & ~15u, c.r[3]);
    set32(c.r[25], ld32((c.r[17].w[0] + 56u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 10;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002EC334u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002EC334u) [[unlikely]] return; }
L_002EC334:
    ld128((c.r[2].w[0]) & ~15u, c.r[4]);
    set32(c.r[16], c.r[16].w[0] + 1u);
    set32(c.r[3], ld32((c.r[18].w[0])));
    c.r[2].d[0] = c.r[16].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; st128((c.r[3].w[0] + 208u) & ~15u, c.r[4]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002EC2FCu | kUnwind; return; } goto L_002EC2FC; } }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002EC350:
    set32(c.r[2], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 120u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EC364u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0049(c, 92u, depth + 1u); else { c.pc = 0x00225420u; return; } if (c.pc != 0x002EC364u) [[unlikely]] return; }
L_002EC364:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[3].d[0] = c.r[16].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002EC350u | kUnwind; return; } goto L_002EC350; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002EC390:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].d[0] = ld8((c.r[4].w[0] + 156u));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002EC3D4; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 31072u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00030000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    set32(c.r[4], ld32((c.r[1].w[0] + 4492u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EC3CCu); set32(c.r[5], ld32((c.r[17].w[0] + 120u)));  if (depth < kMaxDepth) unit_0047(c, 171u, depth + 1u); else { c.pc = 0x0021E250u; return; } if (c.pc != 0x002EC3CCu) [[unlikely]] return; }
L_002EC3CC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = ld8((c.r[17].w[0] + 157u));  if (t) { goto L_002EC3F4; } }
L_002EC3D4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 31072u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00030000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    set32(c.r[4], ld32((c.r[1].w[0] + 4492u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EC3F0u); set32(c.r[5], ld32((c.r[17].w[0] + 132u)));  if (depth < kMaxDepth) unit_0047(c, 171u, depth + 1u); else { c.pc = 0x0021E250u; return; } if (c.pc != 0x002EC3F0u) [[unlikely]] return; }
L_002EC3F0:
    c.r[2].d[0] = ld8((c.r[17].w[0] + 157u));
    c.budget -= 1;
L_002EC3F4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002EC548; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 124u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EC408u); set32(c.r[5], 0u + 13u);  if (depth < kMaxDepth) unit_0026(c, 139u, depth + 1u); else { c.pc = 0x001991D0u; return; } if (c.pc != 0x002EC408u) [[unlikely]] return; }
L_002EC408:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002EC548; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 164u)));
    set32(c.r[2], 0u + 660u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002EC548; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 152u)));
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[5], ld32((c.r[17].w[0] + 140u)));
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 96u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EC444u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0030(c, 19u, depth + 1u); else { c.pc = 0x001C02C0u; return; } if (c.pc != 0x002EC444u) [[unlikely]] return; }
L_002EC444:
    set32(c.r[4], ld32((c.r[17].w[0] + 116u)));
    set32(c.r[5], 0u + 39u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EC45Cu); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0030(c, 19u, depth + 1u); else { c.pc = 0x001C02C0u; return; } if (c.pc != 0x002EC45Cu) [[unlikely]] return; }
L_002EC45C:
    set32(c.r[4], ld32((c.r[17].w[0] + 108u)));
    set32(c.r[6], 0u + 1u);
    set32(c.r[5], ld32((c.r[17].w[0] + 140u)));
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EC474u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0030(c, 19u, depth + 1u); else { c.pc = 0x001C02C0u; return; } if (c.pc != 0x002EC474u) [[unlikely]] return; }
L_002EC474:
    set32(c.r[4], ld32((c.r[17].w[0] + 108u)));
    set32(c.r[5], 0u + 30u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EC484u); set32(c.r[6], 0u + 130u);  if (depth < kMaxDepth) unit_005B(c, 358u, depth + 1u); else { c.pc = 0x0026F230u; return; } if (c.pc != 0x002EC484u) [[unlikely]] return; }
L_002EC484:
    set32(c.r[4], ld32((c.r[17].w[0] + 104u)));
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[5], ld32((c.r[17].w[0] + 140u)));
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EC49Cu); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0030(c, 19u, depth + 1u); else { c.pc = 0x001C02C0u; return; } if (c.pc != 0x002EC49Cu) [[unlikely]] return; }
L_002EC49C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00420000u);
    c.r[9].d[0] = ld8((c.r[1].w[0] + 28008u));
    set32(c.r[3], c.r[3].w[0] - 25200u);
    set32(c.r[2], 0u + 6u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 12014u);
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[6], c.r[3].w[0] + c.r[9].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[6].d[0] = ld8((c.r[6].w[0]));
    set32(c.r[3], c.r[9].w[0] + 1u);
    mmi::div(c, 0, c.r[6].w[0], c.r[2].w[0]);
    c.r[6].d[0] = c.hi.d[0];
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EC4E8u); st8((c.r[1].w[0] + 28008u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_0030(c, 19u, depth + 1u); else { c.pc = 0x001C02C0u; return; } if (c.pc != 0x002EC4E8u) [[unlikely]] return; }
L_002EC4E8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EC4F4u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_003F(c, 317u, depth + 1u); else { c.pc = 0x001FF2F0u; return; } if (c.pc != 0x002EC4F4u) [[unlikely]] return; }
L_002EC4F4:
    set32(c.r[2], 0u + 1u);
    st8((c.r[17].w[0] + 157u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[17].w[0] + 158u));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_002EC53C; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 100u)));
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[5], ld32((c.r[17].w[0] + 140u)));
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EC520u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0030(c, 19u, depth + 1u); else { c.pc = 0x001C02C0u; return; } if (c.pc != 0x002EC520u) [[unlikely]] return; }
L_002EC520:
    set32(c.r[4], ld32((c.r[17].w[0] + 112u)));
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[5], ld32((c.r[17].w[0] + 140u)));
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EC538u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0030(c, 19u, depth + 1u); else { c.pc = 0x001C02C0u; return; } if (c.pc != 0x002EC538u) [[unlikely]] return; }
L_002EC538:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002EC53C:
    set32(c.r[5], 0u + 33u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EC548u); set32(c.r[6], 0u + 5u);  if (depth < kMaxDepth) unit_00AB(c, 236u, depth + 1u); else { c.pc = 0x003ADA80u; return; } if (c.pc != 0x002EC548u) [[unlikely]] return; }
L_002EC548:
    c.r[2].d[0] = ld8((c.r[17].w[0] + 158u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002EC6F0; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 128u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EC560u); set32(c.r[5], 0u + 13u);  if (depth < kMaxDepth) unit_0026(c, 139u, depth + 1u); else { c.pc = 0x001991D0u; return; } if (c.pc != 0x002EC560u) [[unlikely]] return; }
L_002EC560:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002EC6F0; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 164u)));
    set32(c.r[2], 0u + 660u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[4], 0u + 24u);  if (t) { goto L_002EC6F0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EC580u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x002EC580u) [[unlikely]] return; }
L_002EC580:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u + 24u);  if (t) { goto L_002EC5AC; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[17].w[0] + 68u)));
    c.f[0] = ld32((c.r[2].w[0] + 60u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[6], c.f[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EC5A8u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_0049(c, 163u, depth + 1u); else { c.pc = 0x00226320u; return; } if (c.pc != 0x002EC5A8u) [[unlikely]] return; }
L_002EC5A8:
    set32(c.r[4], 0u + 24u);
    c.budget -= 1;
L_002EC5AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EC5B4u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x002EC5B4u) [[unlikely]] return; }
L_002EC5B4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002EC5D8; } }
    set32(c.r[5], 0u + 300u);
    set32(c.r[2], ld32((c.r[17].w[0] + 68u)));
    c.f[0] = ld32((c.r[2].w[0] + 60u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[6], c.f[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EC5D8u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0049(c, 163u, depth + 1u); else { c.pc = 0x00226320u; return; } if (c.pc != 0x002EC5D8u) [[unlikely]] return; }
L_002EC5D8:
    set32(c.r[2], 0u + 1u);
    c.r[6].d[0] = 0ull + 0ull;
    st32((c.r[17].w[0] + 152u), c.r[2].w[0]);
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[17].w[0] + 152u)));
    set32(c.r[5], ld32((c.r[17].w[0] + 136u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 96u)));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EC604u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0030(c, 19u, depth + 1u); else { c.pc = 0x001C02C0u; return; } if (c.pc != 0x002EC604u) [[unlikely]] return; }
L_002EC604:
    set32(c.r[4], ld32((c.r[17].w[0] + 116u)));
    set32(c.r[5], 0u + 38u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EC61Cu); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0030(c, 19u, depth + 1u); else { c.pc = 0x001C02C0u; return; } if (c.pc != 0x002EC61Cu) [[unlikely]] return; }
L_002EC61C:
    set32(c.r[4], ld32((c.r[17].w[0] + 112u)));
    set32(c.r[6], 0u + 1u);
    set32(c.r[5], ld32((c.r[17].w[0] + 136u)));
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EC634u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0030(c, 19u, depth + 1u); else { c.pc = 0x001C02C0u; return; } if (c.pc != 0x002EC634u) [[unlikely]] return; }
L_002EC634:
    set32(c.r[4], ld32((c.r[17].w[0] + 112u)));
    set32(c.r[5], 0u + 30u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EC644u); set32(c.r[6], 0u + 150u);  if (depth < kMaxDepth) unit_005B(c, 358u, depth + 1u); else { c.pc = 0x0026F230u; return; } if (c.pc != 0x002EC644u) [[unlikely]] return; }
L_002EC644:
    set32(c.r[4], ld32((c.r[17].w[0] + 104u)));
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[5], ld32((c.r[17].w[0] + 136u)));
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EC65Cu); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0030(c, 19u, depth + 1u); else { c.pc = 0x001C02C0u; return; } if (c.pc != 0x002EC65Cu) [[unlikely]] return; }
L_002EC65C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00420000u);
    c.r[9].d[0] = ld8((c.r[1].w[0] + 28008u));
    set32(c.r[3], c.r[3].w[0] - 25200u);
    set32(c.r[2], 0u + 6u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 12014u);
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[6], c.r[3].w[0] + c.r[9].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[6].d[0] = ld8((c.r[6].w[0]));
    set32(c.r[3], c.r[9].w[0] + 1u);
    mmi::div(c, 0, c.r[6].w[0], c.r[2].w[0]);
    c.r[6].d[0] = c.hi.d[0];
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EC6A8u); st8((c.r[1].w[0] + 28008u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_0030(c, 19u, depth + 1u); else { c.pc = 0x001C02C0u; return; } if (c.pc != 0x002EC6A8u) [[unlikely]] return; }
L_002EC6A8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EC6B4u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_003F(c, 317u, depth + 1u); else { c.pc = 0x001FF2F0u; return; } if (c.pc != 0x002EC6B4u) [[unlikely]] return; }
L_002EC6B4:
    set32(c.r[2], 0u + 1u);
    st8((c.r[17].w[0] + 158u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[17].w[0] + 157u));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_002EC6E4; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 108u)));
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[5], ld32((c.r[17].w[0] + 136u)));
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EC6E0u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0030(c, 19u, depth + 1u); else { c.pc = 0x001C02C0u; return; } if (c.pc != 0x002EC6E0u) [[unlikely]] return; }
L_002EC6E0:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002EC6E4:
    set32(c.r[5], 0u + 33u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EC6F0u); set32(c.r[6], 0u + 5u);  if (depth < kMaxDepth) unit_00AB(c, 236u, depth + 1u); else { c.pc = 0x003ADA80u; return; } if (c.pc != 0x002EC6F0u) [[unlikely]] return; }
L_002EC6F0:
    c.r[2].d[0] = ld8((c.r[17].w[0] + 156u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002EC81C; } }
    c.r[2].d[0] = ld8((c.r[17].w[0] + 158u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_002EC8EC; } }
    c.r[2].d[0] = ld8((c.r[17].w[0] + 157u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002EC8E8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EC71Cu); set32(c.r[4], ld32((c.r[17].w[0] + 120u)));  if (depth < kMaxDepth) unit_007A(c, 521u, depth + 1u); else { c.pc = 0x002EBF40u; return; } if (c.pc != 0x002EC71Cu) [[unlikely]] return; }
L_002EC71C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002EC8E8; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 152u)));
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[5], ld32((c.r[17].w[0] + 144u)));
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 96u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EC748u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0030(c, 19u, depth + 1u); else { c.pc = 0x001C02C0u; return; } if (c.pc != 0x002EC748u) [[unlikely]] return; }
L_002EC748:
    set32(c.r[4], ld32((c.r[17].w[0] + 104u)));
    set32(c.r[6], 0u + 1u);
    set32(c.r[5], ld32((c.r[17].w[0] + 144u)));
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EC760u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0030(c, 19u, depth + 1u); else { c.pc = 0x001C02C0u; return; } if (c.pc != 0x002EC760u) [[unlikely]] return; }
L_002EC760:
    set32(c.r[4], ld32((c.r[17].w[0] + 104u)));
    set32(c.r[5], 0u + 30u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EC770u); set32(c.r[6], 0u + 150u);  if (depth < kMaxDepth) unit_005B(c, 358u, depth + 1u); else { c.pc = 0x0026F230u; return; } if (c.pc != 0x002EC770u) [[unlikely]] return; }
L_002EC770:
    set32(c.r[4], ld32((c.r[17].w[0] + 116u)));
    set32(c.r[5], 0u + 30u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EC780u); c.r[6].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_005B(c, 358u, depth + 1u); else { c.pc = 0x0026F230u; return; } if (c.pc != 0x002EC780u) [[unlikely]] return; }
L_002EC780:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EC788u); set32(c.r[4], 0u + 24u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x002EC788u) [[unlikely]] return; }
L_002EC788:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u + 24u);  if (t) { goto L_002EC7B4; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[17].w[0] + 68u)));
    c.f[0] = ld32((c.r[2].w[0] + 56u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[6], c.f[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EC7B0u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_0049(c, 163u, depth + 1u); else { c.pc = 0x00226320u; return; } if (c.pc != 0x002EC7B0u) [[unlikely]] return; }
L_002EC7B0:
    set32(c.r[4], 0u + 24u);
    c.budget -= 1;
L_002EC7B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EC7BCu);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x002EC7BCu) [[unlikely]] return; }
L_002EC7BC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], 0u + 1u);  if (t) { goto L_002EC7E8; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], 0u + 10u);
    set32(c.r[2], ld32((c.r[17].w[0] + 68u)));
    c.f[0] = ld32((c.r[2].w[0] + 56u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[6], c.f[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EC7E4u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0049(c, 163u, depth + 1u); else { c.pc = 0x00226320u; return; } if (c.pc != 0x002EC7E4u) [[unlikely]] return; }
L_002EC7E4:
    set32(c.r[5], 0u + 1u);
    c.budget -= 1;
L_002EC7E8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EC7F4u); st8((c.r[17].w[0] + 156u), static_cast<std::uint8_t>(c.r[5].w[0]));  if (depth < kMaxDepth) unit_003F(c, 317u, depth + 1u); else { c.pc = 0x001FF2F0u; return; } if (c.pc != 0x002EC7F4u) [[unlikely]] return; }
L_002EC7F4:
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[5], 0u + 111u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EC804u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00AB(c, 236u, depth + 1u); else { c.pc = 0x003ADA80u; return; } if (c.pc != 0x002EC804u) [[unlikely]] return; }
L_002EC804:
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[5], 0u + 33u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EC814u); set32(c.r[6], 0u + 5u);  if (depth < kMaxDepth) unit_00AB(c, 236u, depth + 1u); else { c.pc = 0x003ADA80u; return; } if (c.pc != 0x002EC814u) [[unlikely]] return; }
L_002EC814:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002EC8E8; } }
L_002EC81C:
    set32(c.r[4], ld32((c.r[17].w[0] + 132u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EC828u); set32(c.r[5], 0u + 4u);  if (depth < kMaxDepth) unit_0026(c, 139u, depth + 1u); else { c.pc = 0x001991D0u; return; } if (c.pc != 0x002EC828u) [[unlikely]] return; }
L_002EC828:
    set32(c.r[4], ld32((c.r[17].w[0] + 120u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EC834u); c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_007A(c, 521u, depth + 1u); else { c.pc = 0x002EBF40u; return; } if (c.pc != 0x002EC834u) [[unlikely]] return; }
L_002EC834:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002EC844; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_002EC8E8; } }
L_002EC844:
    set32(c.r[2], ld32((c.r[17].w[0] + 152u)));
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[5], ld32((c.r[17].w[0] + 148u)));
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 96u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EC868u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0030(c, 19u, depth + 1u); else { c.pc = 0x001C02C0u; return; } if (c.pc != 0x002EC868u) [[unlikely]] return; }
L_002EC868:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_002EC8D0; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EC87Cu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_003F(c, 317u, depth + 1u); else { c.pc = 0x001FF2F0u; return; } if (c.pc != 0x002EC87Cu) [[unlikely]] return; }
L_002EC87C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00420000u);
    c.r[9].d[0] = ld8((c.r[1].w[0] + 28008u));
    set32(c.r[3], c.r[3].w[0] - 25200u);
    set32(c.r[2], 0u + 6u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], 0u + 12014u);
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[6], c.r[3].w[0] + c.r[9].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[6].d[0] = ld8((c.r[6].w[0]));
    set32(c.r[3], c.r[9].w[0] + 1u);
    mmi::div(c, 0, c.r[6].w[0], c.r[2].w[0]);
    c.r[6].d[0] = c.hi.d[0];
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EC8C8u); st8((c.r[1].w[0] + 28008u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_0030(c, 19u, depth + 1u); else { c.pc = 0x001C02C0u; return; } if (c.pc != 0x002EC8C8u) [[unlikely]] return; }
L_002EC8C8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_002EC8DC; } }
L_002EC8D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EC8D8u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_003F(c, 317u, depth + 1u); else { c.pc = 0x001FF2F0u; return; } if (c.pc != 0x002EC8D8u) [[unlikely]] return; }
L_002EC8D8:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002EC8DC:
    set32(c.r[5], 0u + 33u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EC8E8u); set32(c.r[6], 0u + 5u);  if (depth < kMaxDepth) unit_00AB(c, 236u, depth + 1u); else { c.pc = 0x003ADA80u; return; } if (c.pc != 0x002EC8E8u) [[unlikely]] return; }
L_002EC8E8:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002EC8EC:
    set32(c.r[2], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EC8FCu); set32(c.r[4], ld32((c.r[2].w[0] + 96u)));  if (depth < kMaxDepth) unit_005B(c, 349u, depth + 1u); else { c.pc = 0x0026EE80u; return; } if (c.pc != 0x002EC8FCu) [[unlikely]] return; }
L_002EC8FC:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[3].d[0] = c.r[16].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002EC8ECu | kUnwind; return; } goto L_002EC8EC; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002EC930:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 152u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EC954u); set32(c.r[4], ld32((c.r[2].w[0] + 96u)));  if (depth < kMaxDepth) unit_005B(c, 353u, depth + 1u); else { c.pc = 0x0026EF90u; return; } if (c.pc != 0x002EC954u) [[unlikely]] return; }
L_002EC954:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EC95Cu); set32(c.r[4], ld32((c.r[16].w[0] + 104u)));  if (depth < kMaxDepth) unit_005B(c, 353u, depth + 1u); else { c.pc = 0x0026EF90u; return; } if (c.pc != 0x002EC95Cu) [[unlikely]] return; }
L_002EC95C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EC964u); set32(c.r[4], ld32((c.r[16].w[0] + 108u)));  if (depth < kMaxDepth) unit_005B(c, 353u, depth + 1u); else { c.pc = 0x0026EF90u; return; } if (c.pc != 0x002EC964u) [[unlikely]] return; }
L_002EC964:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EC96Cu); set32(c.r[4], ld32((c.r[16].w[0] + 112u)));  if (depth < kMaxDepth) unit_005B(c, 353u, depth + 1u); else { c.pc = 0x0026EF90u; return; } if (c.pc != 0x002EC96Cu) [[unlikely]] return; }
L_002EC96C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002EC980:
    c.budget -= 2;
    { set32(c.r[4], ld32((c.r[4].w[0] + 116u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0026EF90u | kUnwind; return; } [[clang::musttail]] return unit_005B(c, 353u, depth); }
L_002EC990:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EC9B8u); set32(c.r[5], 0u + 28u);  if (depth < kMaxDepth) unit_0010(c, 29u, depth + 1u); else { c.pc = 0x00140690u; return; } if (c.pc != 0x002EC9B8u) [[unlikely]] return; }
L_002EC9B8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[4], 0u + 352u);
    set32(c.r[2], c.r[2].w[0] + 15776u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EC9CCu); st32((c.r[18].w[0] + 8u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x002EC9CCu) [[unlikely]] return; }
L_002EC9CC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_002EC9E4; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EC9E4u); c.r[7].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_007B(c, 94u, depth + 1u); else { c.pc = 0x002ECB60u; return; } if (c.pc != 0x002EC9E4u) [[unlikely]] return; }
L_002EC9E4:
    st32((c.r[18].w[0] + 12u), c.r[2].w[0]);
    st32((c.r[18].w[0] + 16u), c.r[16].w[0]);
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002ECA10:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002ECA84; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] + 15776u);
    st32((c.r[17].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002ECA5C; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002ECA5C; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002ECA5Cu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002ECA5Cu) [[unlikely]] return; }
L_002ECA5C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ECA6Cu); st32((c.r[17].w[0] + 12u), 0u);  if (depth < kMaxDepth) unit_0010(c, 31u, depth + 1u); else { c.pc = 0x00140700u; return; } if (c.pc != 0x002ECA6Cu) [[unlikely]] return; }
L_002ECA6C:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_002ECA88; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ECA84u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x002ECA84u) [[unlikely]] return; }
L_002ECA84:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002ECA88:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002ECAA0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002ECAB0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002ECAC0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 44u)));
    c.budget -= 9;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002ECAE4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002ECAE4u) [[unlikely]] return; }
L_002ECAE4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002ECB44; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_002ECB08; } }
    set32(c.r[25], ld32((c.r[16].w[0] + 8u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002ECB08u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002ECB08u) [[unlikely]] return; }
L_002ECB08:
    set32(c.r[4], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002ECB44; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002ECB28; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_002ECB48; } }
L_002ECB28:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ECB30u); set32(c.r[4], 0u + 16u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x002ECB30u) [[unlikely]] return; }
L_002ECB30:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_002ECB44; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ECB44u);  if (depth < kMaxDepth) unit_0096(c, 68u, depth + 1u); else { c.pc = 0x00358BA0u; return; } if (c.pc != 0x002ECB44u) [[unlikely]] return; }
L_002ECB44:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_002ECB48:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002ECB60:
    set32(c.r[29], c.r[29].w[0] - 480u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    c.r[17].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ECB88u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_000B(c, 298u, depth + 1u); else { c.pc = 0x0012E440u; return; } if (c.pc != 0x002ECB88u) [[unlikely]] return; }
L_002ECB88:
    set32(c.r[4], c.r[19].w[0] + 20u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ECB94u); set32(c.r[5], 0u + 5u);  if (depth < kMaxDepth) unit_000F(c, 264u, depth + 1u); else { c.pc = 0x0013E560u; return; } if (c.pc != 0x002ECB94u) [[unlikely]] return; }
L_002ECB94:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 15664u);
    set32(c.r[2], c.r[2].w[0] + 15752u);
    st32((c.r[19].w[0]), c.r[3].w[0]);
    set32(c.r[4], 0u + 9u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ECBB4u); st32((c.r[19].w[0] + 20u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x002ECBB4u) [[unlikely]] return; }
L_002ECBB4:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ECBC0u); set32(c.r[4], 0u + 8u);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x002ECBC0u) [[unlikely]] return; }
L_002ECBC0:
    ld128((c.r[2].w[0]) & ~15u, c.r[6]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[5], c.r[5].w[0] - 10432u);
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[3], 0u + 25u);
    st128((c.r[19].w[0] + 256u) & ~15u, c.r[6]);
    set32(c.r[2], 0u + 30u);
    ld128((c.r[16].w[0]) & ~15u, c.r[6]);
    st128((c.r[19].w[0] + 272u) & ~15u, c.r[6]);
    st32((c.r[19].w[0] + 308u), c.r[2].w[0]);
    st32((c.r[19].w[0] + 304u), 0u);
    st32((c.r[19].w[0] + 316u), 0u);
    st8((c.r[19].w[0] + 312u), static_cast<std::uint8_t>(0u));
    ld128((c.r[19].w[0] + 256u) & ~15u, c.r[2]);
    st128((c.r[19].w[0] + 288u) & ~15u, c.r[2]);
    c.budget -= 15;
L_002ECBFC:
    ld128((c.r[5].w[0]) & ~15u, c.r[2]);
    set32(c.r[3], c.r[3].w[0] - 1u);
    st128((c.r[4].w[0]) & ~15u, c.r[2]);
    set32(c.r[5], c.r[5].w[0] + 16u);
    set32(c.r[4], c.r[4].w[0] + 16u);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002ECBFCu | kUnwind; return; } goto L_002ECBFC; } }
    st32((c.r[19].w[0] + 36u), c.r[18].w[0]);
    c.r[3].d[0] = 0ull + 0ull;
    st32((c.r[19].w[0] + 32u), c.r[17].w[0]);
    st32((c.r[19].w[0] + 104u), 0u);
    st32((c.r[19].w[0] + 108u), 0u);
    st32((c.r[19].w[0] + 120u), 0u);
    st32((c.r[19].w[0] + 124u), 0u);
    c.budget -= 7;
L_002ECC34:
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[19].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[2].w[0] + 112u), 0u);
    c.r[2].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002ECC34u | kUnwind; return; } goto L_002ECC34; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002ECC54:
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[19].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[2].w[0] + 128u), 0u);
    c.r[2].d[0] = c.r[3].sd[0] < 20ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002ECC54u | kUnwind; return; } goto L_002ECC54; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002ECC74:
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[19].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[2].w[0] + 320u), 0u);
    c.r[2].d[0] = c.r[3].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002ECC74u | kUnwind; return; } goto L_002ECC74; } }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002ECC94:
    set32(c.r[2], c.r[16].w[0] << 2);
    set32(c.r[4], 0u + 40u);
    set32(c.r[2], c.r[19].w[0] + c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ECCA8u); set32(c.r[17], c.r[2].w[0] + 208u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x002ECCA8u) [[unlikely]] return; }
L_002ECCA8:
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[2], c.r[16].w[0] << 2);
    set32(c.r[5], ld32((c.r[17].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[16], c.r[16].w[0] + 1u);
    set32(c.r[3], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[4], c.r[3].w[0] + 80u);
    c.r[2].d[0] = c.r[16].sd[0] < 10ll ? 1ull : 0ull;
    set32(c.r[3], ld32((c.r[4].w[0])));
    st32((c.r[5].w[0]), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    st32((c.r[5].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    st32((c.r[5].w[0] + 8u), c.r[3].w[0]);
    c.f[0] = ld32((c.r[4].w[0] + 12u));
    st32((c.r[5].w[0] + 12u), c.f[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 16u)));
    st32((c.r[5].w[0] + 16u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 20u)));
    st8((c.r[5].w[0] + 20u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    st32((c.r[5].w[0] + 24u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 28u)));
    st32((c.r[5].w[0] + 28u), c.r[3].w[0]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 32u));
    st8((c.r[5].w[0] + 32u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[4].w[0] + 36u)));
    c.budget -= 30;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[5].w[0] + 36u), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002ECC94u | kUnwind; return; } goto L_002ECC94; } }
    set32(c.r[2], 0u + 2u);
    st32((c.r[19].w[0] + 52u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 52u)));
    st32((c.r[19].w[0] + 60u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 52u)));
    set32(c.r[2], c.r[2].w[0] + 7u);
    st32((c.r[19].w[0] + 64u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 52u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[19].w[0] + 56u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[19].w[0] + 36u)));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ECD54u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 104u, depth + 1u); else { c.pc = 0x0012CEC0u; return; } if (c.pc != 0x002ECD54u) [[unlikely]] return; }
L_002ECD54:
    set32(c.r[2], ld32((c.r[2].w[0] + 360u)));
    st32((c.r[19].w[0] + 84u), c.r[2].w[0]);
    st32((c.r[19].w[0] + 80u), c.r[2].w[0]);
    st32((c.r[19].w[0] + 76u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[19].w[0] + 36u)));
    c.r[2].d[0] = c.r[4].sd[0] < 86ll ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_002ECE00; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ECD7Cu);  if (depth < kMaxDepth) unit_000B(c, 104u, depth + 1u); else { c.pc = 0x0012CEC0u; return; } if (c.pc != 0x002ECD7Cu) [[unlikely]] return; }
L_002ECD7C:
    c.r[2].d[0] = ld8((c.r[2].w[0]));
    st8((c.r[19].w[0] + 98u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[19].w[0] + 93u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[19].w[0] + 88u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[4], ld32((c.r[19].w[0] + 36u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ECD98u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 104u, depth + 1u); else { c.pc = 0x0012CEC0u; return; } if (c.pc != 0x002ECD98u) [[unlikely]] return; }
L_002ECD98:
    c.r[2].d[0] = ld8((c.r[2].w[0] + 1u));
    st8((c.r[19].w[0] + 99u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[19].w[0] + 94u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[19].w[0] + 89u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[4], ld32((c.r[19].w[0] + 36u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ECDB4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 104u, depth + 1u); else { c.pc = 0x0012CEC0u; return; } if (c.pc != 0x002ECDB4u) [[unlikely]] return; }
L_002ECDB4:
    c.r[2].d[0] = ld8((c.r[2].w[0] + 4u));
    st8((c.r[19].w[0] + 100u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[19].w[0] + 95u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[19].w[0] + 90u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[4], ld32((c.r[19].w[0] + 36u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ECDD0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 104u, depth + 1u); else { c.pc = 0x0012CEC0u; return; } if (c.pc != 0x002ECDD0u) [[unlikely]] return; }
L_002ECDD0:
    c.r[2].d[0] = ld8((c.r[2].w[0] + 3u));
    st8((c.r[19].w[0] + 101u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[19].w[0] + 96u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[19].w[0] + 91u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[4], ld32((c.r[19].w[0] + 36u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ECDECu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 104u, depth + 1u); else { c.pc = 0x0012CEC0u; return; } if (c.pc != 0x002ECDECu) [[unlikely]] return; }
L_002ECDEC:
    c.r[2].d[0] = ld8((c.r[2].w[0] + 2u));
    st8((c.r[19].w[0] + 102u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[19].w[0] + 97u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[19].w[0] + 92u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_002ECF20; } }
L_002ECE00:
    set32(c.r[2], ld32((c.r[19].w[0] + 32u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_002ECE98; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ECE14u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 104u, depth + 1u); else { c.pc = 0x0012CEC0u; return; } if (c.pc != 0x002ECE14u) [[unlikely]] return; }
L_002ECE14:
    c.r[2].d[0] = ld8((c.r[2].w[0] + 8u));
    st8((c.r[19].w[0] + 98u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[19].w[0] + 93u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[19].w[0] + 88u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[4], ld32((c.r[19].w[0] + 36u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ECE30u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 104u, depth + 1u); else { c.pc = 0x0012CEC0u; return; } if (c.pc != 0x002ECE30u) [[unlikely]] return; }
L_002ECE30:
    c.r[2].d[0] = ld8((c.r[2].w[0] + 9u));
    st8((c.r[19].w[0] + 99u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[19].w[0] + 94u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[19].w[0] + 89u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[4], ld32((c.r[19].w[0] + 36u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ECE4Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 104u, depth + 1u); else { c.pc = 0x0012CEC0u; return; } if (c.pc != 0x002ECE4Cu) [[unlikely]] return; }
L_002ECE4C:
    c.r[2].d[0] = ld8((c.r[2].w[0] + 12u));
    st8((c.r[19].w[0] + 100u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[19].w[0] + 95u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[19].w[0] + 90u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[4], ld32((c.r[19].w[0] + 36u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ECE68u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 104u, depth + 1u); else { c.pc = 0x0012CEC0u; return; } if (c.pc != 0x002ECE68u) [[unlikely]] return; }
L_002ECE68:
    c.r[2].d[0] = ld8((c.r[2].w[0] + 11u));
    st8((c.r[19].w[0] + 101u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[19].w[0] + 96u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[19].w[0] + 91u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[4], ld32((c.r[19].w[0] + 36u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ECE84u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 104u, depth + 1u); else { c.pc = 0x0012CEC0u; return; } if (c.pc != 0x002ECE84u) [[unlikely]] return; }
L_002ECE84:
    c.r[2].d[0] = ld8((c.r[2].w[0] + 10u));
    st8((c.r[19].w[0] + 102u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[19].w[0] + 97u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[19].w[0] + 92u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_002ECF20; } }
L_002ECE98:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ECEA0u);  if (depth < kMaxDepth) unit_000B(c, 104u, depth + 1u); else { c.pc = 0x0012CEC0u; return; } if (c.pc != 0x002ECEA0u) [[unlikely]] return; }
L_002ECEA0:
    c.r[2].d[0] = ld8((c.r[2].w[0]));
    st8((c.r[19].w[0] + 98u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[19].w[0] + 93u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[19].w[0] + 88u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[4], ld32((c.r[19].w[0] + 36u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ECEBCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 104u, depth + 1u); else { c.pc = 0x0012CEC0u; return; } if (c.pc != 0x002ECEBCu) [[unlikely]] return; }
L_002ECEBC:
    c.r[2].d[0] = ld8((c.r[2].w[0] + 1u));
    st8((c.r[19].w[0] + 99u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[19].w[0] + 94u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[19].w[0] + 89u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[4], ld32((c.r[19].w[0] + 36u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ECED8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 104u, depth + 1u); else { c.pc = 0x0012CEC0u; return; } if (c.pc != 0x002ECED8u) [[unlikely]] return; }
L_002ECED8:
    c.r[2].d[0] = ld8((c.r[2].w[0] + 4u));
    st8((c.r[19].w[0] + 100u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[19].w[0] + 95u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[19].w[0] + 90u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[4], ld32((c.r[19].w[0] + 36u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ECEF4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 104u, depth + 1u); else { c.pc = 0x0012CEC0u; return; } if (c.pc != 0x002ECEF4u) [[unlikely]] return; }
L_002ECEF4:
    c.r[2].d[0] = ld8((c.r[2].w[0] + 3u));
    st8((c.r[19].w[0] + 101u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[19].w[0] + 96u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[19].w[0] + 91u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[4], ld32((c.r[19].w[0] + 36u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ECF10u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 104u, depth + 1u); else { c.pc = 0x0012CEC0u; return; } if (c.pc != 0x002ECF10u) [[unlikely]] return; }
L_002ECF10:
    c.r[2].d[0] = ld8((c.r[2].w[0] + 2u));
    st8((c.r[19].w[0] + 102u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[19].w[0] + 97u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[19].w[0] + 92u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
L_002ECF20:
    set32(c.r[3], 0u + 25u);
    set32(c.r[2], 0u + 3u);
    st8((c.r[19].w[0] + 72u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[4], 0u + 48u);
    st32((c.r[19].w[0] + 40u), 0u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ECF3Cu); st32((c.r[19].w[0] + 48u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x002ECF3Cu) [[unlikely]] return; }
L_002ECF3C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002ECF4C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ECF4Cu);  if (depth < kMaxDepth) unit_007B(c, 405u, depth + 1u); else { c.pc = 0x002EFBA0u; return; } if (c.pc != 0x002ECF4Cu) [[unlikely]] return; }
L_002ECF4C:
    st32((c.r[19].w[0] + 120u), c.r[2].w[0]);
    set32(c.r[25], ld32((c.r[19].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002ECF60u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002ECF60u) [[unlikely]] return; }
L_002ECF60:
    c.r[2].d[0] = c.r[19].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 480u);  c.pc = t; return; }
L_002ECF80:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 9;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002ED16C; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 15664u);
    set32(c.r[2], c.r[2].w[0] + 15752u);
    st32((c.r[17].w[0]), c.r[3].w[0]);
    st32((c.r[17].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 104u)));
    c.budget -= 9;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002ECFE0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002ECFE0; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002ECFE0u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002ECFE0u) [[unlikely]] return; }
L_002ECFE0:
    st32((c.r[17].w[0] + 104u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 108u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002ED008; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002ED008; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002ED008u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002ED008u) [[unlikely]] return; }
L_002ED008:
    st32((c.r[17].w[0] + 108u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 124u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002ED030; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002ED030; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002ED030u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002ED030u) [[unlikely]] return; }
L_002ED030:
    st32((c.r[17].w[0] + 124u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 120u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002ED058; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002ED058; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002ED058u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002ED058u) [[unlikely]] return; }
L_002ED058:
    st32((c.r[17].w[0] + 120u), 0u);
    c.r[19].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_002ED060:
    set32(c.r[2], c.r[19].w[0] << 2);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 112u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[18], c.r[2].w[0] + 112u);  if (t) { goto L_002ED08C; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002ED08C; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002ED08Cu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002ED08Cu) [[unlikely]] return; }
L_002ED08C:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.r[2].d[0] = c.r[19].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[18].w[0]), 0u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002ED060u | kUnwind; return; } goto L_002ED060; } }
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002ED0A0:
    set32(c.r[2], c.r[18].w[0] << 2);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 208u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[19], c.r[2].w[0] + 208u);  if (t) { goto L_002ED0BC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ED0BCu);  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x002ED0BCu) [[unlikely]] return; }
L_002ED0BC:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[2].d[0] = c.r[18].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[19].w[0]), 0u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002ED0A0u | kUnwind; return; } goto L_002ED0A0; } }
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002ED0D0:
    set32(c.r[2], c.r[18].w[0] << 2);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 128u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[19], c.r[2].w[0] + 128u);  if (t) { goto L_002ED0EC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ED0ECu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_007B(c, 432u, depth + 1u); else { c.pc = 0x002EFE90u; return; } if (c.pc != 0x002ED0ECu) [[unlikely]] return; }
L_002ED0EC:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[2].d[0] = c.r[18].sd[0] < 20ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[19].w[0]), 0u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002ED0D0u | kUnwind; return; } goto L_002ED0D0; } }
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002ED100:
    set32(c.r[2], c.r[18].w[0] << 2);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 320u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[19], c.r[2].w[0] + 320u);  if (t) { goto L_002ED12C; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002ED12C; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002ED12Cu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002ED12Cu) [[unlikely]] return; }
L_002ED12C:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[2].d[0] = c.r[18].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[19].w[0]), 0u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002ED100u | kUnwind; return; } goto L_002ED100; } }
    set32(c.r[4], c.r[17].w[0] + 20u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ED148u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000F(c, 266u, depth + 1u); else { c.pc = 0x0013E5B0u; return; } if (c.pc != 0x002ED148u) [[unlikely]] return; }
L_002ED148:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ED154u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 300u, depth + 1u); else { c.pc = 0x0012E490u; return; } if (c.pc != 0x002ED154u) [[unlikely]] return; }
L_002ED154:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_002ED170; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ED16Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x002ED16Cu) [[unlikely]] return; }
L_002ED16C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002ED170:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002ED190:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[17], ld32((c.r[4].w[0] + 76u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 36u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ED1B4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 104u, depth + 1u); else { c.pc = 0x0012CEC0u; return; } if (c.pc != 0x002ED1B4u) [[unlikely]] return; }
L_002ED1B4:
    st32((c.r[2].w[0] + 360u), c.r[17].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 36u)));
    c.r[2].d[0] = c.r[4].sd[0] < 86ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002ED22C; } }
    c.r[17].d[0] = ld8((c.r[16].w[0] + 93u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ED1D4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 104u, depth + 1u); else { c.pc = 0x0012CEC0u; return; } if (c.pc != 0x002ED1D4u) [[unlikely]] return; }
L_002ED1D4:
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[17].w[0]));
    set32(c.r[4], ld32((c.r[16].w[0] + 36u)));
    c.r[17].d[0] = ld8((c.r[16].w[0] + 94u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ED1E8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 104u, depth + 1u); else { c.pc = 0x0012CEC0u; return; } if (c.pc != 0x002ED1E8u) [[unlikely]] return; }
L_002ED1E8:
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[17].w[0]));
    set32(c.r[4], ld32((c.r[16].w[0] + 36u)));
    c.r[17].d[0] = ld8((c.r[16].w[0] + 95u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ED1FCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 104u, depth + 1u); else { c.pc = 0x0012CEC0u; return; } if (c.pc != 0x002ED1FCu) [[unlikely]] return; }
L_002ED1FC:
    st8((c.r[2].w[0] + 4u), static_cast<std::uint8_t>(c.r[17].w[0]));
    set32(c.r[4], ld32((c.r[16].w[0] + 36u)));
    c.r[17].d[0] = ld8((c.r[16].w[0] + 96u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ED210u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 104u, depth + 1u); else { c.pc = 0x0012CEC0u; return; } if (c.pc != 0x002ED210u) [[unlikely]] return; }
L_002ED210:
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(c.r[17].w[0]));
    set32(c.r[4], ld32((c.r[16].w[0] + 36u)));
    c.r[17].d[0] = ld8((c.r[16].w[0] + 97u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ED224u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 104u, depth + 1u); else { c.pc = 0x0012CEC0u; return; } if (c.pc != 0x002ED224u) [[unlikely]] return; }
L_002ED224:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(c.r[17].w[0]));  if (t) { goto L_002ED2FC; } }
L_002ED22C:
    set32(c.r[2], ld32((c.r[16].w[0] + 32u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002ED29C; } }
    c.r[17].d[0] = ld8((c.r[16].w[0] + 93u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ED244u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 104u, depth + 1u); else { c.pc = 0x0012CEC0u; return; } if (c.pc != 0x002ED244u) [[unlikely]] return; }
L_002ED244:
    st8((c.r[2].w[0] + 8u), static_cast<std::uint8_t>(c.r[17].w[0]));
    set32(c.r[4], ld32((c.r[16].w[0] + 36u)));
    c.r[17].d[0] = ld8((c.r[16].w[0] + 94u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ED258u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 104u, depth + 1u); else { c.pc = 0x0012CEC0u; return; } if (c.pc != 0x002ED258u) [[unlikely]] return; }
L_002ED258:
    st8((c.r[2].w[0] + 9u), static_cast<std::uint8_t>(c.r[17].w[0]));
    set32(c.r[4], ld32((c.r[16].w[0] + 36u)));
    c.r[17].d[0] = ld8((c.r[16].w[0] + 95u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ED26Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 104u, depth + 1u); else { c.pc = 0x0012CEC0u; return; } if (c.pc != 0x002ED26Cu) [[unlikely]] return; }
L_002ED26C:
    st8((c.r[2].w[0] + 12u), static_cast<std::uint8_t>(c.r[17].w[0]));
    set32(c.r[4], ld32((c.r[16].w[0] + 36u)));
    c.r[17].d[0] = ld8((c.r[16].w[0] + 96u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ED280u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 104u, depth + 1u); else { c.pc = 0x0012CEC0u; return; } if (c.pc != 0x002ED280u) [[unlikely]] return; }
L_002ED280:
    st8((c.r[2].w[0] + 11u), static_cast<std::uint8_t>(c.r[17].w[0]));
    set32(c.r[4], ld32((c.r[16].w[0] + 36u)));
    c.r[17].d[0] = ld8((c.r[16].w[0] + 97u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ED294u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 104u, depth + 1u); else { c.pc = 0x0012CEC0u; return; } if (c.pc != 0x002ED294u) [[unlikely]] return; }
L_002ED294:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 10u), static_cast<std::uint8_t>(c.r[17].w[0]));  if (t) { goto L_002ED2FC; } }
L_002ED29C:
    c.r[17].d[0] = ld8((c.r[16].w[0] + 93u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ED2A8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 104u, depth + 1u); else { c.pc = 0x0012CEC0u; return; } if (c.pc != 0x002ED2A8u) [[unlikely]] return; }
L_002ED2A8:
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[17].w[0]));
    set32(c.r[4], ld32((c.r[16].w[0] + 36u)));
    c.r[17].d[0] = ld8((c.r[16].w[0] + 94u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ED2BCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 104u, depth + 1u); else { c.pc = 0x0012CEC0u; return; } if (c.pc != 0x002ED2BCu) [[unlikely]] return; }
L_002ED2BC:
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[17].w[0]));
    set32(c.r[4], ld32((c.r[16].w[0] + 36u)));
    c.r[17].d[0] = ld8((c.r[16].w[0] + 95u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ED2D0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 104u, depth + 1u); else { c.pc = 0x0012CEC0u; return; } if (c.pc != 0x002ED2D0u) [[unlikely]] return; }
L_002ED2D0:
    st8((c.r[2].w[0] + 4u), static_cast<std::uint8_t>(c.r[17].w[0]));
    set32(c.r[4], ld32((c.r[16].w[0] + 36u)));
    c.r[17].d[0] = ld8((c.r[16].w[0] + 96u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ED2E4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 104u, depth + 1u); else { c.pc = 0x0012CEC0u; return; } if (c.pc != 0x002ED2E4u) [[unlikely]] return; }
L_002ED2E4:
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(c.r[17].w[0]));
    set32(c.r[4], ld32((c.r[16].w[0] + 36u)));
    c.r[17].d[0] = ld8((c.r[16].w[0] + 97u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ED2F8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 104u, depth + 1u); else { c.pc = 0x0012CEC0u; return; } if (c.pc != 0x002ED2F8u) [[unlikely]] return; }
L_002ED2F8:
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(c.r[17].w[0]));
    c.budget -= 1;
L_002ED2FC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002ED310:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x0012E5D0u | kUnwind; return; } [[clang::musttail]] return unit_000B(c, 317u, depth); }
L_002ED320:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[4].w[0] + 120u)));
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002ED390; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ED344u); set32(c.r[4], c.r[16].w[0] + 8u);  if (depth < kMaxDepth) unit_0011(c, 177u, depth + 1u); else { c.pc = 0x00146C10u; return; } if (c.pc != 0x002ED344u) [[unlikely]] return; }
L_002ED344:
    c.r[3].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[4], c.r[16].w[0] + 8u);  if (t) { goto L_002ED35C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ED358u);  if (depth < kMaxDepth) unit_0011(c, 182u, depth + 1u); else { c.pc = 0x00146C90u; return; } if (c.pc != 0x002ED358u) [[unlikely]] return; }
L_002ED358:
    c.r[3].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 1;
L_002ED35C:
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002ED390; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ED370u);  if (depth < kMaxDepth) unit_002A(c, 135u, depth + 1u); else { c.pc = 0x001A9560u; return; } if (c.pc != 0x002ED370u) [[unlikely]] return; }
L_002ED370:
    c.r[4].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002ED390; } }
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002ED390u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002ED390u) [[unlikely]] return; }
L_002ED390:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002ED3B0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ED3D4u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_000B(c, 318u, depth + 1u); else { c.pc = 0x0012E5E0u; return; } if (c.pc != 0x002ED3D4u) [[unlikely]] return; }
L_002ED3D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ED3DCu); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_0076(c, 191u, depth + 1u); else { c.pc = 0x002D9970u; return; } if (c.pc != 0x002ED3DCu) [[unlikely]] return; }
L_002ED3DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ED3E4u); set32(c.r[4], 0u + 256u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x002ED3E4u) [[unlikely]] return; }
L_002ED3E4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002ED3F4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ED3F4u);  if (depth < kMaxDepth) unit_0017(c, 177u, depth + 1u); else { c.pc = 0x0015E070u; return; } if (c.pc != 0x002ED3F4u) [[unlikely]] return; }
L_002ED3F4:
    st32((c.r[19].w[0] + 124u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], ld32((c.r[1].w[0] + 20144u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42960000u);
    set32(c.r[5], ld32((c.r[19].w[0] + 124u)));
    set32(c.r[4], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[3].w[0] + c.r[1].w[0]);
    set32(c.r[3], ld32((c.r[1].w[0] + 1420u)));
    set32(c.r[3], c.r[3].w[0] << 1);
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[5].w[0] + 160u), c.f[0]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ED434u); st32((c.r[5].w[0] + 164u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x002ED434u) [[unlikely]] return; }
L_002ED434:
    set32(c.r[5], ld32((c.r[19].w[0] + 124u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], ld32((c.r[2].w[0])));
    set32(c.r[4], 0u + 160u);
    st32((c.r[5].w[0] + 48u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    st32((c.r[5].w[0] + 52u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    st32((c.r[5].w[0] + 56u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[1].w[0] + 26392u)));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ED464u); set32(c.r[16], c.r[2].w[0] + 624u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x002ED464u) [[unlikely]] return; }
L_002ED464:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002ED478; } }
    set32(c.r[5], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ED478u); set32(c.r[6], 0u + 2u);  if (depth < kMaxDepth) unit_002A(c, 287u, depth + 1u); else { c.pc = 0x001AB200u; return; } if (c.pc != 0x002ED478u) [[unlikely]] return; }
L_002ED478:
    st32((c.r[19].w[0] + 104u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ED488u); set32(c.r[5], 0u + 10000u);  if (depth < kMaxDepth) unit_002A(c, 5u, depth + 1u); else { c.pc = 0x001A80A0u; return; } if (c.pc != 0x002ED488u) [[unlikely]] return; }
L_002ED488:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ED498u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002A(c, 3u, depth + 1u); else { c.pc = 0x001A8060u; return; } if (c.pc != 0x002ED498u) [[unlikely]] return; }
L_002ED498:
    set32(c.r[4], ld32((c.r[19].w[0] + 104u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ED4A8u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 322u, depth + 1u); else { c.pc = 0x00196E30u; return; } if (c.pc != 0x002ED4A8u) [[unlikely]] return; }
L_002ED4A8:
    set32(c.r[2], ld32((c.r[19].w[0] + 104u)));
    st32((c.r[2].w[0] + 104u), 0u);
    set32(c.r[4], ld32((c.r[19].w[0] + 104u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002ED4C4u); set32(c.r[5], 0u + 55u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002ED4C4u) [[unlikely]] return; }
L_002ED4C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ED4CCu); set32(c.r[4], 0u + 160u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x002ED4CCu) [[unlikely]] return; }
L_002ED4CC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002ED4E0; } }
    set32(c.r[5], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ED4E0u); set32(c.r[6], 0u + 2u);  if (depth < kMaxDepth) unit_002A(c, 287u, depth + 1u); else { c.pc = 0x001AB200u; return; } if (c.pc != 0x002ED4E0u) [[unlikely]] return; }
L_002ED4E0:
    st32((c.r[19].w[0] + 108u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ED4F0u); set32(c.r[5], 0u + 10014u);  if (depth < kMaxDepth) unit_002A(c, 5u, depth + 1u); else { c.pc = 0x001A80A0u; return; } if (c.pc != 0x002ED4F0u) [[unlikely]] return; }
L_002ED4F0:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ED500u); set32(c.r[5], 0u + 11u);  if (depth < kMaxDepth) unit_002A(c, 3u, depth + 1u); else { c.pc = 0x001A8060u; return; } if (c.pc != 0x002ED500u) [[unlikely]] return; }
L_002ED500:
    set32(c.r[4], ld32((c.r[19].w[0] + 108u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ED510u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 322u, depth + 1u); else { c.pc = 0x00196E30u; return; } if (c.pc != 0x002ED510u) [[unlikely]] return; }
L_002ED510:
    set32(c.r[2], ld32((c.r[19].w[0] + 108u)));
    st32((c.r[2].w[0] + 104u), 0u);
    set32(c.r[4], ld32((c.r[19].w[0] + 108u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002ED52Cu); set32(c.r[5], 0u + 2u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002ED52Cu) [[unlikely]] return; }
L_002ED52C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ED534u); set32(c.r[4], 0u + 160u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x002ED534u) [[unlikely]] return; }
L_002ED534:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002ED548; } }
    set32(c.r[5], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ED548u); set32(c.r[6], 0u + 5u);  if (depth < kMaxDepth) unit_0025(c, 304u, depth + 1u); else { c.pc = 0x00196C90u; return; } if (c.pc != 0x002ED548u) [[unlikely]] return; }
L_002ED548:
    st32((c.r[19].w[0] + 112u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ED558u); set32(c.r[5], 0u + 10011u);  if (depth < kMaxDepth) unit_002A(c, 5u, depth + 1u); else { c.pc = 0x001A80A0u; return; } if (c.pc != 0x002ED558u) [[unlikely]] return; }
L_002ED558:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ED568u); set32(c.r[5], 0u + 8u);  if (depth < kMaxDepth) unit_002A(c, 3u, depth + 1u); else { c.pc = 0x001A8060u; return; } if (c.pc != 0x002ED568u) [[unlikely]] return; }
L_002ED568:
    set32(c.r[4], ld32((c.r[19].w[0] + 112u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ED578u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 322u, depth + 1u); else { c.pc = 0x00196E30u; return; } if (c.pc != 0x002ED578u) [[unlikely]] return; }
L_002ED578:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.f[1] = ld32((c.r[1].w[0] - 22928u));
    set32(c.r[7], ld32((c.r[19].w[0] + 112u)));
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[6].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    c.r[5].sd[0] = static_cast<std::int32_t>(0x43B40000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43320000u);
    set32(c.r[4], 0u + 160u);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    st32((c.r[7].w[0] + 112u), c.f[1]);
    c.f[1] = ld32((c.r[1].w[0] - 22928u));
    st32((c.r[7].w[0] + 116u), c.f[1]);
    st32((c.r[7].w[0] + 120u), c.r[6].w[0]);
    st32((c.r[7].w[0] + 124u), c.r[6].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 112u)));
    st32((c.r[2].w[0] + 96u), c.r[5].w[0]);
    st32((c.r[2].w[0] + 100u), c.r[3].w[0]);
    st32((c.r[2].w[0] + 104u), c.f[0]);
    st32((c.r[2].w[0] + 108u), c.r[6].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 112u)));
    st32((c.r[2].w[0] + 104u), c.f[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 112u)));
    c.budget -= 27;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ED5E4u); st8((c.r[2].w[0] + 16u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x002ED5E4u) [[unlikely]] return; }
L_002ED5E4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002ED5F8; } }
    set32(c.r[5], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ED5F8u); set32(c.r[6], 0u + 5u);  if (depth < kMaxDepth) unit_0025(c, 304u, depth + 1u); else { c.pc = 0x00196C90u; return; } if (c.pc != 0x002ED5F8u) [[unlikely]] return; }
L_002ED5F8:
    st32((c.r[19].w[0] + 116u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ED608u); set32(c.r[5], 0u + 10011u);  if (depth < kMaxDepth) unit_002A(c, 5u, depth + 1u); else { c.pc = 0x001A80A0u; return; } if (c.pc != 0x002ED608u) [[unlikely]] return; }
L_002ED608:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 8u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ED618u); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_002A(c, 3u, depth + 1u); else { c.pc = 0x001A8060u; return; } if (c.pc != 0x002ED618u) [[unlikely]] return; }
L_002ED618:
    set32(c.r[4], ld32((c.r[19].w[0] + 116u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ED628u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 322u, depth + 1u); else { c.pc = 0x00196E30u; return; } if (c.pc != 0x002ED628u) [[unlikely]] return; }
L_002ED628:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[2], 0u + 559u);
    c.f[2] = ld32((c.r[1].w[0] - 22928u));
    set32(c.r[5], ld32((c.r[19].w[0] + 116u)));
    c.f[0] = c.r[2].w[0];
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43320000u);
    c.r[18].d[0] = 0ull + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    st32((c.r[5].w[0] + 112u), c.f[2]);
    c.f[2] = ld32((c.r[1].w[0] - 22928u));
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[5].w[0] + 116u), c.f[2]);
    st32((c.r[5].w[0] + 120u), c.r[4].w[0]);
    st32((c.r[5].w[0] + 124u), c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 116u)));
    st32((c.r[2].w[0] + 96u), c.f[1]);
    st32((c.r[2].w[0] + 100u), c.r[3].w[0]);
    st32((c.r[2].w[0] + 104u), c.f[0]);
    st32((c.r[2].w[0] + 108u), c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 116u)));
    st32((c.r[2].w[0] + 104u), c.f[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 116u)));
    st8((c.r[2].w[0] + 16u), static_cast<std::uint8_t>(0u));
    c.budget -= 29;
L_002ED69C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ED6A4u); set32(c.r[4], 0u + 64u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x002ED6A4u) [[unlikely]] return; }
L_002ED6A4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], c.r[18].w[0] << 2);  if (t) { goto L_002ED6B8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ED6B4u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_007B(c, 431u, depth + 1u); else { c.pc = 0x002EFE50u; return; } if (c.pc != 0x002ED6B4u) [[unlikely]] return; }
L_002ED6B4:
    set32(c.r[3], c.r[18].w[0] << 2);
    c.budget -= 1;
L_002ED6B8:
    c.r[4].d[0] = c.r[18].d[0] & 1ull;
    set32(c.r[3], c.r[19].w[0] + c.r[3].w[0]);
    c.r[17].d[0] = 0ull < c.r[4].d[0] ? 1ull : 0ull;
    st32((c.r[3].w[0] + 128u), c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[16], c.r[3].w[0] + 128u);  if (t) { goto L_002ED6F4; } }
    c.budget -= 2;
    { const bool t = c.r[18].sd[0] >= 0; set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[18].w[0]) >> 1));  if (t) { goto L_002ED6E0; } }
    set32(c.r[2], c.r[18].w[0] + 1u);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    c.budget -= 2;
L_002ED6E0:
    set32(c.r[2], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[20], c.r[2].w[0] + 381u);  if (t) { goto L_002ED714; } }
L_002ED6F4:
    c.budget -= 2;
    { const bool t = c.r[18].sd[0] >= 0; set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[18].w[0]) >> 1));  if (t) { goto L_002ED704; } }
    set32(c.r[2], c.r[18].w[0] + 1u);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    c.budget -= 2;
L_002ED704:
    set32(c.r[2], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[20], c.r[2].w[0] + 373u);
    c.budget -= 4;
L_002ED714:
    set32(c.r[4], ld32((c.r[19].w[0] + 120u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ED720u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_007B(c, 430u, depth + 1u); else { c.pc = 0x002EFE30u; return; } if (c.pc != 0x002ED720u) [[unlikely]] return; }
L_002ED720:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    c.r[9].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[7], 0u + 157u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ED73Cu); set32(c.r[8], 0u + 7u);  if (depth < kMaxDepth) unit_007B(c, 437u, depth + 1u); else { c.pc = 0x002EFF50u; return; } if (c.pc != 0x002ED73Cu) [[unlikely]] return; }
L_002ED73C:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[2].d[0] = c.r[18].sd[0] < 20ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002ED69Cu | kUnwind; return; } goto L_002ED69C; } }
L_002ED74C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ED754u); set32(c.r[4], 0u + 256u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x002ED754u) [[unlikely]] return; }
L_002ED754:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[3], c.r[16].w[0] << 2);  if (t) { goto L_002ED770; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ED768u);  if (depth < kMaxDepth) unit_0017(c, 177u, depth + 1u); else { c.pc = 0x0015E070u; return; } if (c.pc != 0x002ED768u) [[unlikely]] return; }
L_002ED768:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], c.r[16].w[0] << 2);
    c.budget -= 2;
L_002ED770:
    set32(c.r[3], c.r[19].w[0] + c.r[3].w[0]);
    set32(c.r[16], c.r[16].w[0] + 1u);
    st32((c.r[3].w[0] + 320u), c.r[4].w[0]);
    c.r[3].d[0] = c.r[16].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002ED74Cu | kUnwind; return; } goto L_002ED74C; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_002ED7B0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0] + 104u)));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_002ED7E0; } }
    c.r[3].d[0] = ld8((c.r[3].w[0] + 137u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002ED7E0; } }
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_002ED7E0:
    set32(c.r[3], ld32((c.r[17].w[0] + 108u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002ED7FC; } }
    c.r[3].d[0] = ld8((c.r[3].w[0] + 137u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002ED7FC; } }
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_002ED7FC:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 72u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st8((c.r[17].w[0] + 72u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_002ED86C; } }
    st8((c.r[17].w[0] + 72u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ED824u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_007B(c, 261u, depth + 1u); else { c.pc = 0x002EE210u; return; } if (c.pc != 0x002ED824u) [[unlikely]] return; }
L_002ED824:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_002ED86C; } }
    st8((c.r[17].w[0] + 72u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], 0u + 1u);
    st32((c.r[17].w[0] + 40u), c.r[2].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], 0u + 255u);
    c.budget -= 5;
L_002ED840:
    set32(c.r[2], c.r[5].w[0] << 2);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[5], c.r[5].w[0] + 1u);
    set32(c.r[3], ld32((c.r[2].w[0] + 208u)));
    c.r[2].d[0] = c.r[5].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[3].w[0] + 16u), c.r[4].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002ED840u | kUnwind; return; } goto L_002ED840; } }
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002ED86Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002ED86Cu) [[unlikely]] return; }
L_002ED86C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002ED880:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x0012E600u | kUnwind; return; } [[clang::musttail]] return unit_000B(c, 319u, depth); }
L_002ED890:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    set32(c.r[3], 0u + 3u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0] + 48u)));
    set32(c.r[16], ld32((c.r[1].w[0] - 1536u)));
    c.budget -= 11;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002ED9F0; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 25376u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002EDF6C; } }
    set32(c.r[6], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], 0u + 5u);
    c.budget -= 4;
    { const bool t = c.r[6].d[0] != c.r[3].d[0];  if (t) { goto L_002EDF6C; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002ED914; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ED8ECu);  if (depth < kMaxDepth) unit_001A(c, 231u, depth + 1u); else { c.pc = 0x0016A360u; return; } if (c.pc != 0x002ED8ECu) [[unlikely]] return; }
L_002ED8EC:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_002ED9DC; } }
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 36u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002ED908u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002ED908u) [[unlikely]] return; }
L_002ED908:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 3u);  if (t) { goto L_002ED9E0; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_002ED914:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 2u);  if (t) { goto L_002ED980; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ED924u);  if (depth < kMaxDepth) unit_001A(c, 231u, depth + 1u); else { c.pc = 0x0016A360u; return; } if (c.pc != 0x002ED924u) [[unlikely]] return; }
L_002ED924:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_002ED9DC; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 84u)));
    st32((c.r[17].w[0] + 80u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 76u), c.r[2].w[0]);
    c.r[2].d[0] = ld8((c.r[17].w[0] + 88u));
    st8((c.r[17].w[0] + 98u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[17].w[0] + 93u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[17].w[0] + 89u));
    st8((c.r[17].w[0] + 99u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[17].w[0] + 94u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[17].w[0] + 90u));
    st8((c.r[17].w[0] + 100u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[17].w[0] + 95u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[17].w[0] + 91u));
    st8((c.r[17].w[0] + 101u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[17].w[0] + 96u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[17].w[0] + 92u));
    st8((c.r[17].w[0] + 102u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 19;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 97u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_002ED9DC; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 1;
L_002ED980:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_002ED9DC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ED990u);  if (depth < kMaxDepth) unit_001A(c, 231u, depth + 1u); else { c.pc = 0x0016A360u; return; } if (c.pc != 0x002ED990u) [[unlikely]] return; }
L_002ED990:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_002ED9DC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ED9A4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_007B(c, 140u, depth + 1u); else { c.pc = 0x002ED190u; return; } if (c.pc != 0x002ED9A4u) [[unlikely]] return; }
L_002ED9A4:
    set32(c.r[4], ld32((c.r[17].w[0] + 104u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002ED9B8u); set32(c.r[5], 0u + 56u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002ED9B8u) [[unlikely]] return; }
L_002ED9B8:
    set32(c.r[4], ld32((c.r[17].w[0] + 108u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002ED9CCu); set32(c.r[5], 0u + 3u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002ED9CCu) [[unlikely]] return; }
L_002ED9CC:
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002ED9DCu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002ED9DCu) [[unlikely]] return; }
L_002ED9DC:
    set32(c.r[2], 0u + 3u);
    c.budget -= 1;
L_002ED9E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ED9E8u); st32((c.r[17].w[0] + 48u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_001A(c, 271u, depth + 1u); else { c.pc = 0x0016A9E0u; return; } if (c.pc != 0x002ED9E8u) [[unlikely]] return; }
L_002ED9E8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_002EDF70; } }
L_002ED9F0:
    set32(c.r[3], ld32((c.r[17].w[0] + 40u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 2u);  if (t) { goto L_002EDCD8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EDA08u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 314u, depth + 1u); else { c.pc = 0x0013F0C0u; return; } if (c.pc != 0x002EDA08u) [[unlikely]] return; }
L_002EDA08:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_002EDBCC; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 52u)));
    set32(c.r[2], 0u + 91u);
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 208u)));
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 362u);  if (t) { goto L_002EDA7C; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 76u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 84u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_002EDA5C; } }
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002EDA50u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002EDA50u) [[unlikely]] return; }
L_002EDA50:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u + 400u);  if (t) { goto L_002EDA68; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002EDA5C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EDA64u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_007B(c, 403u, depth + 1u); else { c.pc = 0x002EFB20u; return; } if (c.pc != 0x002EDA64u) [[unlikely]] return; }
L_002EDA64:
    set32(c.r[4], 0u + 400u);
    c.budget -= 1;
L_002EDA68:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EDA70u);  if (depth < kMaxDepth) unit_002C(c, 36u, depth + 1u); else { c.pc = 0x001B0690u; return; } if (c.pc != 0x002EDA70u) [[unlikely]] return; }
L_002EDA70:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = ld8((c.r[17].w[0] + 312u));  if (t) { goto L_002EDEFC; } }
    set32(c.r[2], 0u + 362u);
    c.budget -= 1;
L_002EDA7C:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002EDAC0; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 76u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 84u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_002EDAA8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EDA9Cu); set32(c.r[4], 0u + 403u);  if (depth < kMaxDepth) unit_002C(c, 36u, depth + 1u); else { c.pc = 0x001B0690u; return; } if (c.pc != 0x002EDA9Cu) [[unlikely]] return; }
L_002EDA9C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002EDEF8; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002EDAA8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EDAB0u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_007B(c, 403u, depth + 1u); else { c.pc = 0x002EFB20u; return; } if (c.pc != 0x002EDAB0u) [[unlikely]] return; }
L_002EDAB0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EDAB8u); set32(c.r[4], 0u + 400u);  if (depth < kMaxDepth) unit_002C(c, 36u, depth + 1u); else { c.pc = 0x001B0690u; return; } if (c.pc != 0x002EDAB8u) [[unlikely]] return; }
L_002EDAB8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002EDEF8; } }
L_002EDAC0:
    set32(c.r[2], ld32((c.r[17].w[0] + 60u)));
    set32(c.r[18], ld32((c.r[17].w[0] + 76u)));
    set32(c.r[2], c.r[4].w[0] - c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    c.r[4].d[0] = ld8((c.r[2].w[0] + 88u));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EDADCu); c.r[16].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 148u, depth + 1u); else { c.pc = 0x0012D600u; return; } if (c.pc != 0x002EDADCu) [[unlikely]] return; }
L_002EDADC:
    c.r[1].d[0] = c.r[18].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002EDB14; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 52u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 60u)));
    set32(c.r[2], c.r[3].w[0] - c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    c.r[3].d[0] = ld8((c.r[2].w[0] + 88u));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 93u));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002EDB14; } }
    set32(c.r[2], c.r[16].w[0] + 1u);
    c.r[16].d[0] = c.r[2].d[0] << 56;
    c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 56);
    c.budget -= 3;
L_002EDB14:
    set32(c.r[3], ld32((c.r[17].w[0] + 52u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 60u)));
    set32(c.r[2], c.r[3].w[0] - c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    c.r[2].d[0] = ld8((c.r[2].w[0] + 88u));
    c.r[2].d[0] = c.r[2].sd[0] < 20ll ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002EDB40; } }
    set32(c.r[2], c.r[16].w[0] + 1u);
    c.r[16].d[0] = c.r[2].d[0] << 56;
    c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 56);
    c.budget -= 3;
L_002EDB40:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; set32(c.r[2], 0u + 2u);  if (t) { goto L_002EDB5C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EDB50u); set32(c.r[4], 0u + 403u);  if (depth < kMaxDepth) unit_002C(c, 36u, depth + 1u); else { c.pc = 0x001B0690u; return; } if (c.pc != 0x002EDB50u) [[unlikely]] return; }
L_002EDB50:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002EDEF8; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 1;
L_002EDB5C:
    st32((c.r[17].w[0] + 40u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 112u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002EDB74u); set32(c.r[5], 0u + 4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002EDB74u) [[unlikely]] return; }
L_002EDB74:
    set32(c.r[4], ld32((c.r[17].w[0] + 116u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002EDB88u); set32(c.r[5], 0u + 5u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002EDB88u) [[unlikely]] return; }
L_002EDB88:
    c.r[2].d[0] = ld8((c.r[17].w[0] + 93u));
    set32(c.r[4], 0u + 400u);
    st8((c.r[17].w[0] + 98u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[17].w[0] + 94u));
    st8((c.r[17].w[0] + 99u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[17].w[0] + 95u));
    st8((c.r[17].w[0] + 100u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[17].w[0] + 96u));
    st8((c.r[17].w[0] + 101u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[17].w[0] + 97u));
    st8((c.r[17].w[0] + 102u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[17].w[0] + 76u)));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EDBC0u); st32((c.r[17].w[0] + 80u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_002C(c, 36u, depth + 1u); else { c.pc = 0x001B0690u; return; } if (c.pc != 0x002EDBC0u) [[unlikely]] return; }
L_002EDBC0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002EDEF8; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_002EDBCC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EDBD4u);  if (depth < kMaxDepth) unit_000F(c, 315u, depth + 1u); else { c.pc = 0x0013F0D0u; return; } if (c.pc != 0x002EDBD4u) [[unlikely]] return; }
L_002EDBD4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002EDC28; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 76u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 84u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_002EDC10; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EDBF4u); set32(c.r[4], 0u + 401u);  if (depth < kMaxDepth) unit_002C(c, 36u, depth + 1u); else { c.pc = 0x001B0690u; return; } if (c.pc != 0x002EDBF4u) [[unlikely]] return; }
L_002EDBF4:
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 36u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002EDC04u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002EDC04u) [[unlikely]] return; }
L_002EDC04:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002EDEF8; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002EDC10:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EDC18u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_007B(c, 403u, depth + 1u); else { c.pc = 0x002EFB20u; return; } if (c.pc != 0x002EDC18u) [[unlikely]] return; }
L_002EDC18:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EDC20u); set32(c.r[4], 0u + 401u);  if (depth < kMaxDepth) unit_002C(c, 36u, depth + 1u); else { c.pc = 0x001B0690u; return; } if (c.pc != 0x002EDC20u) [[unlikely]] return; }
L_002EDC20:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002EDEF8; } }
L_002EDC28:
    c.r[4].d[0] = ld16((c.r[16].w[0] + 4u));
    c.r[2].d[0] = c.r[4].d[0] & 4096ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002EDC48; } }
    c.r[3].d[0] = ld16((c.r[16].w[0] + 168u));
    c.r[2].d[0] = c.r[3].d[0] & 4096ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = c.r[4].d[0] & 16384ull;  if (t) { goto L_002EDC88; } }
L_002EDC48:
    set32(c.r[2], ld32((c.r[17].w[0] + 52u)));
    set32(c.r[3], c.r[2].w[0] - 1u);
    st32((c.r[17].w[0] + 52u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 60u)));
    c.r[1].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[4], 0u + 402u);  if (t) { goto L_002EDC74; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 64u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[17].w[0] + 52u), c.r[2].w[0]);
    set32(c.r[4], 0u + 402u);
    c.budget -= 4;
L_002EDC74:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EDC7Cu);  if (depth < kMaxDepth) unit_002C(c, 36u, depth + 1u); else { c.pc = 0x001B0690u; return; } if (c.pc != 0x002EDC7Cu) [[unlikely]] return; }
L_002EDC7C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002EDEF8; } }
    c.r[2].d[0] = c.r[4].d[0] & 16384ull;
    c.budget -= 1;
L_002EDC88:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002EDC9C; } }
    c.r[2].d[0] = c.r[3].d[0] & 16384ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002EDEF8; } }
L_002EDC9C:
    set32(c.r[2], ld32((c.r[17].w[0] + 52u)));
    set32(c.r[3], c.r[2].w[0] + 1u);
    st32((c.r[17].w[0] + 52u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 64u)));
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], 0u + 402u);  if (t) { goto L_002EDCC4; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 60u)));
    st32((c.r[17].w[0] + 52u), c.r[2].w[0]);
    set32(c.r[4], 0u + 402u);
    c.budget -= 3;
L_002EDCC4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EDCCCu);  if (depth < kMaxDepth) unit_002C(c, 36u, depth + 1u); else { c.pc = 0x001B0690u; return; } if (c.pc != 0x002EDCCCu) [[unlikely]] return; }
L_002EDCCC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002EDEF8; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 1;
L_002EDCD8:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002EDEF8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EDCE8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 314u, depth + 1u); else { c.pc = 0x0013F0C0u; return; } if (c.pc != 0x002EDCE8u) [[unlikely]] return; }
L_002EDCE8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_002EDD4C; } }
    c.r[3].d[0] = ld8((c.r[17].w[0] + 93u));
    set32(c.r[2], 0u + 1u);
    set32(c.r[4], 0u + 400u);
    st8((c.r[17].w[0] + 98u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[17].w[0] + 94u));
    st8((c.r[17].w[0] + 99u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[17].w[0] + 95u));
    st8((c.r[17].w[0] + 100u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[17].w[0] + 96u));
    st8((c.r[17].w[0] + 101u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[17].w[0] + 97u));
    st8((c.r[17].w[0] + 102u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[17].w[0] + 76u)));
    st32((c.r[17].w[0] + 80u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 112u)));
    st8((c.r[3].w[0] + 16u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[17].w[0] + 116u)));
    st8((c.r[3].w[0] + 16u), static_cast<std::uint8_t>(0u));
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EDD40u); st32((c.r[17].w[0] + 40u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_002C(c, 36u, depth + 1u); else { c.pc = 0x001B0690u; return; } if (c.pc != 0x002EDD40u) [[unlikely]] return; }
L_002EDD40:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002EDEF8; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_002EDD4C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EDD54u);  if (depth < kMaxDepth) unit_000F(c, 315u, depth + 1u); else { c.pc = 0x0013F0D0u; return; } if (c.pc != 0x002EDD54u) [[unlikely]] return; }
L_002EDD54:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002EDDB4; } }
    c.r[3].d[0] = ld8((c.r[17].w[0] + 98u));
    set32(c.r[2], 0u + 1u);
    set32(c.r[4], 0u + 401u);
    st8((c.r[17].w[0] + 93u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[17].w[0] + 99u));
    st8((c.r[17].w[0] + 94u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[17].w[0] + 100u));
    st8((c.r[17].w[0] + 95u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[17].w[0] + 101u));
    st8((c.r[17].w[0] + 96u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[17].w[0] + 102u));
    st8((c.r[17].w[0] + 97u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[17].w[0] + 80u)));
    st32((c.r[17].w[0] + 76u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 112u)));
    st8((c.r[3].w[0] + 16u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[17].w[0] + 116u)));
    st8((c.r[3].w[0] + 16u), static_cast<std::uint8_t>(0u));
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EDDACu); st32((c.r[17].w[0] + 40u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_002C(c, 36u, depth + 1u); else { c.pc = 0x001B0690u; return; } if (c.pc != 0x002EDDACu) [[unlikely]] return; }
L_002EDDAC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002EDEF8; } }
L_002EDDB4:
    c.r[4].d[0] = ld16((c.r[16].w[0] + 4u));
    c.r[2].d[0] = c.r[4].d[0] & 32768ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002EDDD4; } }
    c.r[3].d[0] = ld16((c.r[16].w[0] + 168u));
    c.r[2].d[0] = c.r[3].d[0] & 32768ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = c.r[4].d[0] & 8192ull;  if (t) { goto L_002EDE50; } }
L_002EDDD4:
    set32(c.r[3], ld32((c.r[17].w[0] + 52u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 60u)));
    set32(c.r[2], c.r[3].w[0] - c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    c.r[3].d[0] = ld8((c.r[2].w[0] + 93u));
    set32(c.r[4], c.r[2].w[0] + 93u);
    c.r[2].d[0] = ld8((c.r[2].w[0] + 88u));
    c.r[1].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002EDEF8; } }
    set32(c.r[2], c.r[3].w[0] - 1u);
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[17].w[0] + 52u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 60u)));
    set32(c.r[2], c.r[3].w[0] - c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EDE1Cu); c.r[4].d[0] = ld8((c.r[2].w[0] + 93u));  if (depth < kMaxDepth) unit_000B(c, 148u, depth + 1u); else { c.pc = 0x0012D600u; return; } if (c.pc != 0x002EDE1Cu) [[unlikely]] return; }
L_002EDE1C:
    set32(c.r[3], ld32((c.r[17].w[0] + 76u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[17].w[0] + 76u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 112u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002EDE3Cu); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002EDE3Cu) [[unlikely]] return; }
L_002EDE3C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EDE44u); set32(c.r[4], 0u + 431u);  if (depth < kMaxDepth) unit_002C(c, 36u, depth + 1u); else { c.pc = 0x001B0690u; return; } if (c.pc != 0x002EDE44u) [[unlikely]] return; }
L_002EDE44:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002EDEF8; } }
    c.r[2].d[0] = c.r[4].d[0] & 8192ull;
    c.budget -= 1;
L_002EDE50:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002EDE64; } }
    c.r[2].d[0] = c.r[3].d[0] & 8192ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002EDEF8; } }
L_002EDE64:
    set32(c.r[3], ld32((c.r[17].w[0] + 52u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 60u)));
    set32(c.r[2], c.r[3].w[0] - c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    c.r[4].d[0] = ld8((c.r[2].w[0] + 93u));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EDE80u); set32(c.r[16], ld32((c.r[17].w[0] + 76u)));  if (depth < kMaxDepth) unit_000B(c, 148u, depth + 1u); else { c.pc = 0x0012D600u; return; } if (c.pc != 0x002EDE80u) [[unlikely]] return; }
L_002EDE80:
    c.r[2].d[0] = c.r[16].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002EDEF8; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 52u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 60u)));
    set32(c.r[2], c.r[3].w[0] - c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    c.r[4].d[0] = ld8((c.r[2].w[0] + 93u));
    c.r[1].d[0] = c.r[4].sd[0] < 20ll ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002EDEF8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EDEB4u);  if (depth < kMaxDepth) unit_000B(c, 148u, depth + 1u); else { c.pc = 0x0012D600u; return; } if (c.pc != 0x002EDEB4u) [[unlikely]] return; }
L_002EDEB4:
    set32(c.r[3], ld32((c.r[17].w[0] + 76u)));
    set32(c.r[2], c.r[3].w[0] - c.r[2].w[0]);
    st32((c.r[17].w[0] + 76u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 52u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 60u)));
    set32(c.r[2], c.r[3].w[0] - c.r[2].w[0]);
    set32(c.r[3], c.r[2].w[0] + c.r[17].w[0]);
    c.r[2].d[0] = ld8((c.r[3].w[0] + 93u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[3].w[0] + 93u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[4], ld32((c.r[17].w[0] + 116u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 15;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002EDEF0u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002EDEF0u) [[unlikely]] return; }
L_002EDEF0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EDEF8u); set32(c.r[4], 0u + 431u);  if (depth < kMaxDepth) unit_002C(c, 36u, depth + 1u); else { c.pc = 0x001B0690u; return; } if (c.pc != 0x002EDEF8u) [[unlikely]] return; }
L_002EDEF8:
    c.r[2].d[0] = ld8((c.r[17].w[0] + 312u));
    c.budget -= 1;
L_002EDEFC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002EDF30; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 316u)));
    set32(c.r[3], c.r[2].w[0] - 1u);
    st32((c.r[17].w[0] + 316u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 304u)));
    set32(c.r[2], 0u - c.r[2].w[0]);
    c.r[1].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[4], c.r[17].w[0] + 256u);  if (t) { goto L_002EDF64; } }
    st32((c.r[17].w[0] + 316u), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 312u), static_cast<std::uint8_t>(0u));  if (t) { goto L_002EDF60; } }
L_002EDF30:
    set32(c.r[2], ld32((c.r[17].w[0] + 316u)));
    set32(c.r[4], c.r[2].w[0] + 1u);
    st32((c.r[17].w[0] + 316u), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 308u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 304u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.r[1].d[0] = c.r[2].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002EDF60; } }
    st32((c.r[17].w[0] + 316u), c.r[2].w[0]);
    set32(c.r[2], 0u + 1u);
    st8((c.r[17].w[0] + 312u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
L_002EDF60:
    set32(c.r[4], c.r[17].w[0] + 256u);
    c.budget -= 1;
L_002EDF64:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EDF6Cu);  if (depth < kMaxDepth) unit_002A(c, 280u, depth + 1u); else { c.pc = 0x001AB050u; return; } if (c.pc != 0x002EDF6Cu) [[unlikely]] return; }
L_002EDF6C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_002EDF70:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002EDF90:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EDFA4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 320u, depth + 1u); else { c.pc = 0x0012E610u; return; } if (c.pc != 0x002EDFA4u) [[unlikely]] return; }
L_002EDFA4:
    set32(c.r[4], ld32((c.r[16].w[0] + 104u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002EDFB8u); set32(c.r[5], 0u + 56u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002EDFB8u) [[unlikely]] return; }
L_002EDFB8:
    set32(c.r[4], ld32((c.r[16].w[0] + 108u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002EDFCCu); set32(c.r[5], 0u + 3u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002EDFCCu) [[unlikely]] return; }
L_002EDFCC:
    set32(c.r[3], 0u + 3u);
    st32((c.r[16].w[0] + 40u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002EDFF0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 104u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002EE010; } }
    c.r[3].d[0] = ld8((c.r[3].w[0] + 137u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002EE038; } }
L_002EE010:
    set32(c.r[3], ld32((c.r[4].w[0] + 108u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002EE028; } }
    c.r[3].d[0] = ld8((c.r[3].w[0] + 137u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002EE038; } }
L_002EE028:
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002EE038u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002EE038u) [[unlikely]] return; }
L_002EE038:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002EE050:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EE064u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 321u, depth + 1u); else { c.pc = 0x0012E630u; return; } if (c.pc != 0x002EE064u) [[unlikely]] return; }
L_002EE064:
    set32(c.r[4], ld32((c.r[16].w[0] + 104u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002EE078u); set32(c.r[5], 0u + 56u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002EE078u) [[unlikely]] return; }
L_002EE078:
    set32(c.r[4], ld32((c.r[16].w[0] + 108u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002EE08Cu); set32(c.r[5], 0u + 3u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002EE08Cu) [[unlikely]] return; }
L_002EE08C:
    set32(c.r[3], 0u + 3u);
    st32((c.r[16].w[0] + 40u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002EE0B0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 104u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002EE0D0; } }
    c.r[3].d[0] = ld8((c.r[3].w[0] + 137u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002EE0F8; } }
L_002EE0D0:
    set32(c.r[3], ld32((c.r[4].w[0] + 108u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002EE0E8; } }
    c.r[3].d[0] = ld8((c.r[3].w[0] + 137u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002EE0F8; } }
L_002EE0E8:
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002EE0F8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002EE0F8u) [[unlikely]] return; }
L_002EE0F8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002EE110:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x0012E640u | kUnwind; return; } [[clang::musttail]] return unit_000B(c, 322u, depth); }
L_002EE120:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 72u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002EE144; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EE144u);  if (depth < kMaxDepth) unit_007B(c, 261u, depth + 1u); else { c.pc = 0x002EE210u; return; } if (c.pc != 0x002EE144u) [[unlikely]] return; }
L_002EE144:
    set32(c.r[4], ld32((c.r[16].w[0] + 40u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002EE1F0; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 52u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 60u)));
    set32(c.r[2], c.r[3].w[0] - c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.r[3].d[0] = ld8((c.r[2].w[0] + 93u));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 88u));
    c.r[1].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002EE188; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 112u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 16u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002EE190; } }
L_002EE188:
    set32(c.r[2], ld32((c.r[16].w[0] + 112u)));
    st8((c.r[2].w[0] + 16u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_002EE190:
    set32(c.r[3], ld32((c.r[16].w[0] + 52u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 60u)));
    set32(c.r[2], c.r[3].w[0] - c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.r[4].d[0] = ld8((c.r[2].w[0] + 93u));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EE1ACu); set32(c.r[17], ld32((c.r[16].w[0] + 76u)));  if (depth < kMaxDepth) unit_000B(c, 148u, depth + 1u); else { c.pc = 0x0012D600u; return; } if (c.pc != 0x002EE1ACu) [[unlikely]] return; }
L_002EE1AC:
    c.r[3].d[0] = c.r[17].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002EE1E8; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 52u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 60u)));
    set32(c.r[3], c.r[4].w[0] - c.r[3].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    c.r[3].d[0] = ld8((c.r[3].w[0] + 93u));
    c.r[1].d[0] = c.r[3].sd[0] < 20ll ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002EE1E8; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 116u)));
    set32(c.r[4], 0u + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 16u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_002EE1F0; } }
L_002EE1E8:
    set32(c.r[3], ld32((c.r[16].w[0] + 116u)));
    st8((c.r[3].w[0] + 16u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_002EE1F0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002EE210:
    set32(c.r[29], c.r[29].w[0] - 224u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    set32(c.r[3], c.r[29].w[0] + 160u);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00420000u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    set32(c.r[4], c.r[4].w[0] - 10032u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[20].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    ld128((c.r[4].w[0]) & ~15u, c.r[2]);
    c.f[0] = ld32((c.r[4].w[0] + 16u));
    st128((c.r[3].w[0]) & ~15u, c.r[2]);
    st32((c.r[3].w[0] + 16u), c.f[0]);
    set32(c.r[2], ld32((c.r[1].w[0] + 26392u)));
    set32(c.r[22], ld32((c.r[2].w[0] + 332u)));
    set32(c.r[19], ld32((c.r[2].w[0] + 440u)));
    set32(c.r[17], ld32((c.r[2].w[0] + 444u)));
    set32(c.r[2], c.r[20].w[0] << 2);
    c.budget -= 26;
L_002EE278:
    set32(c.r[3], c.r[21].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0] + 208u)));
    set32(c.r[16], c.r[3].w[0] + 208u);
    set32(c.r[2], 0u + 3u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 20u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_002EE29C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = c.r[22].d[0] + 0ull;  if (t) { goto L_002EE2AC; } }
L_002EE29C:
    set32(c.r[2], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002EE2AC; } }
    c.r[18].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_002EE2AC:
    set32(c.r[3], ld32((c.r[21].w[0] + 40u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[2], 0u + 3u);  if (t) { goto L_002EE2E4; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[2], c.r[2].w[0] + 51u);
    st32((c.r[4].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[3], c.r[2].w[0] + 16u);
    set32(c.r[2], ld32((c.r[2].w[0] + 16u)));
    c.r[1].d[0] = c.r[2].sd[0] < 256ll ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[2], 0u + 255u);  if (t) { goto L_002EE310; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0]), c.r[2].w[0]);  if (t) { goto L_002EE310; } }
L_002EE2E4:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002EE310; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[2], c.r[2].w[0] - 85u);
    st32((c.r[4].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[3], c.r[2].w[0] + 16u);
    set32(c.r[2], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 8;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_002EE310; } }
    st32((c.r[3].w[0]), 0u);
    c.budget -= 1;
L_002EE310:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_002EE500; } }
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = ld32((c.r[3].w[0] + 12u));
    st32((c.r[18].w[0] + 16u), c.f[0]);
    st32((c.r[18].w[0] + 20u), c.f[0]);
    st32((c.r[18].w[0] + 24u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EE33Cu); set32(c.r[4], ld32((c.r[2].w[0] + 24u)));  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x002EE33Cu) [[unlikely]] return; }
L_002EE33C:
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    st128((c.r[18].w[0] + 48u) & ~15u, c.r[2]);
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], ld32((c.r[2].w[0] + 16u)));
    st32((c.r[18].w[0] + 60u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], ld32((c.r[2].w[0] + 16u)));
    st32((c.r[18].w[0] + 300u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EE368u); set32(c.r[4], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_000B(c, 461u, depth + 1u); else { c.pc = 0x0012FD60u; return; } if (c.pc != 0x002EE368u) [[unlikely]] return; }
L_002EE368:
    st32((c.r[18].w[0] + 352u), c.r[2].w[0]);
    st32((c.r[18].w[0] + 356u), 0u);
    set32(c.r[2], 0u + 1u);
    set32(c.r[4], ld32((c.r[16].w[0])));
    set32(c.r[3], ld32((c.r[4].w[0] + 28u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002EE418; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002EE3DC; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002EE3A0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);  if (t) { goto L_002EE41C; } }
L_002EE3A0:
    c.f[2] = ld32((c.r[4].w[0] + 4u));
    set32(c.r[25], ld32((c.r[18].w[0] + 176u)));
    c.f[1] = ld32((c.r[4].w[0] + 8u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.f[0] = c.r[2].w[0];
    c.f[14] = fp::cvt_s_w(c.f[0]);
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.f[12] = fp::cvt_s_w(c.f[2]);
    c.budget -= 13;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002EE3D4u); c.f[13] = fp::cvt_s_w(c.f[1]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002EE3D4u) [[unlikely]] return; }
L_002EE3D4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);  if (t) { goto L_002EE450; } }
L_002EE3DC:
    c.f[2] = ld32((c.r[4].w[0] + 4u));
    set32(c.r[25], ld32((c.r[18].w[0] + 176u)));
    c.f[1] = ld32((c.r[4].w[0] + 8u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.f[0] = c.r[2].w[0];
    c.f[14] = fp::cvt_s_w(c.f[0]);
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.f[12] = fp::cvt_s_w(c.f[2]);
    c.budget -= 13;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002EE410u); c.f[13] = fp::cvt_s_w(c.f[1]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002EE410u) [[unlikely]] return; }
L_002EE410:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002EE44C; } }
L_002EE418:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.budget -= 1;
L_002EE41C:
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    set32(c.r[25], ld32((c.r[18].w[0] + 176u)));
    c.f[0] = c.r[2].w[0];
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.f[14] = fp::cvt_s_w(c.f[0]);
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.f[1] = ld32((c.r[3].w[0] + 4u));
    c.f[0] = ld32((c.r[3].w[0] + 8u));
    c.f[12] = fp::cvt_s_w(c.f[1]);
    c.budget -= 12;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002EE44Cu); c.f[13] = fp::cvt_s_w(c.f[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002EE44Cu) [[unlikely]] return; }
L_002EE44C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.budget -= 1;
L_002EE450:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[18].w[0] + 304u), c.r[3].w[0]);
    set32(c.r[5], 0u + 1u);
    st32((c.r[18].w[0] + 308u), c.r[3].w[0]);
    st32((c.r[18].w[0] + 312u), 0u);
    st32((c.r[18].w[0] + 316u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[21].w[0] + 40u)));
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != c.r[5].d[0];  if (t) { goto L_002EE4C4; } }
    set32(c.r[2], ld32((c.r[21].w[0] + 52u)));
    c.budget -= 3;
    { const bool t = c.r[20].d[0] == c.r[2].d[0];  if (t) { goto L_002EE500; } }
    set32(c.r[25], ld32((c.r[18].w[0] + 176u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u - 1u);
    set32(c.r[25], ld32((c.r[25].w[0] + 68u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002EE49Cu); set32(c.r[8], 0u + 2u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002EE49Cu) [[unlikely]] return; }
L_002EE49C:
    set32(c.r[25], ld32((c.r[18].w[0] + 176u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u - 1u);
    set32(c.r[25], ld32((c.r[25].w[0] + 68u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002EE4BCu); c.r[8].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002EE4BCu) [[unlikely]] return; }
L_002EE4BC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[21].w[0] + 40u)));  if (t) { goto L_002EE504; } }
L_002EE4C4:
    set32(c.r[25], ld32((c.r[18].w[0] + 176u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u - 1u);
    set32(c.r[25], ld32((c.r[25].w[0] + 68u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002EE4E0u); set32(c.r[8], 0u + 2u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002EE4E0u) [[unlikely]] return; }
L_002EE4E0:
    set32(c.r[25], ld32((c.r[18].w[0] + 176u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u - 1u);
    set32(c.r[25], ld32((c.r[25].w[0] + 68u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002EE500u); c.r[8].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002EE500u) [[unlikely]] return; }
L_002EE500:
    set32(c.r[3], ld32((c.r[21].w[0] + 40u)));
    c.budget -= 1;
L_002EE504:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 2u);  if (t) { goto L_002EE68C; } }
    set32(c.r[2], ld32((c.r[21].w[0] + 52u)));
    c.budget -= 3;
    { const bool t = c.r[20].d[0] != c.r[2].d[0];  if (t) { goto L_002EE6BC; } }
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 4u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 20u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002EE6BC; } }
    ld128((c.r[18].w[0] + 16u) & ~15u, c.r[3]);
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[1] = c.r[2].w[0];
    st128((c.r[4].w[0]) & ~15u, c.r[3]);
    c.f[0] = ld32((c.r[29].w[0] + 144u));
    st32((c.r[17].w[0] + 16u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 148u));
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    st32((c.r[17].w[0] + 20u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 152u));
    st32((c.r[17].w[0] + 24u), c.f[0]);
    ld128((c.r[21].w[0] + 288u) & ~15u, c.r[2]);
    st128((c.r[17].w[0] + 48u) & ~15u, c.r[2]);
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EE574u); set32(c.r[4], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_000B(c, 461u, depth + 1u); else { c.pc = 0x0012FD60u; return; } if (c.pc != 0x002EE574u) [[unlikely]] return; }
L_002EE574:
    st32((c.r[17].w[0] + 352u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 356u), 0u);
    set32(c.r[2], 0u + 1u);
    set32(c.r[4], ld32((c.r[16].w[0])));
    set32(c.r[3], ld32((c.r[4].w[0] + 28u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002EE624; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002EE5E8; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002EE5AC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);  if (t) { goto L_002EE628; } }
L_002EE5AC:
    c.f[2] = ld32((c.r[4].w[0] + 4u));
    set32(c.r[25], ld32((c.r[17].w[0] + 176u)));
    c.f[1] = ld32((c.r[4].w[0] + 8u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.f[0] = c.r[2].w[0];
    c.f[14] = fp::cvt_s_w(c.f[0]);
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.f[12] = fp::cvt_s_w(c.f[2]);
    c.budget -= 13;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002EE5E0u); c.f[13] = fp::cvt_s_w(c.f[1]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002EE5E0u) [[unlikely]] return; }
L_002EE5E0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[25], ld32((c.r[17].w[0] + 176u)));  if (t) { goto L_002EE65C; } }
L_002EE5E8:
    c.f[2] = ld32((c.r[4].w[0] + 4u));
    set32(c.r[25], ld32((c.r[17].w[0] + 176u)));
    c.f[1] = ld32((c.r[4].w[0] + 8u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.f[0] = c.r[2].w[0];
    c.f[14] = fp::cvt_s_w(c.f[0]);
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.f[12] = fp::cvt_s_w(c.f[2]);
    c.budget -= 13;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002EE61Cu); c.f[13] = fp::cvt_s_w(c.f[1]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002EE61Cu) [[unlikely]] return; }
L_002EE61C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002EE658; } }
L_002EE624:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.budget -= 1;
L_002EE628:
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    set32(c.r[25], ld32((c.r[17].w[0] + 176u)));
    c.f[0] = c.r[2].w[0];
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.f[14] = fp::cvt_s_w(c.f[0]);
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.f[1] = ld32((c.r[3].w[0] + 4u));
    c.f[0] = ld32((c.r[3].w[0] + 8u));
    c.f[12] = fp::cvt_s_w(c.f[1]);
    c.budget -= 12;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002EE658u); c.f[13] = fp::cvt_s_w(c.f[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002EE658u) [[unlikely]] return; }
L_002EE658:
    set32(c.r[25], ld32((c.r[17].w[0] + 176u)));
    c.budget -= 1;
L_002EE65C:
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002EE668u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002EE668u) [[unlikely]] return; }
L_002EE668:
    set32(c.r[25], ld32((c.r[18].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002EE678u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002EE678u) [[unlikely]] return; }
L_002EE678:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EE684u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_007B(c, 338u, depth + 1u); else { c.pc = 0x002EF040u; return; } if (c.pc != 0x002EE684u) [[unlikely]] return; }
L_002EE684:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[20], c.r[20].w[0] + 1u);  if (t) { goto L_002EE6C0; } }
L_002EE68C:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002EE6BC; } }
    set32(c.r[2], ld32((c.r[21].w[0] + 52u)));
    c.budget -= 3;
    { const bool t = c.r[20].d[0] != c.r[2].d[0];  if (t) { goto L_002EE6BC; } }
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 4u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 20u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (t) { goto L_002EE6BC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EE6BCu); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_007B(c, 338u, depth + 1u); else { c.pc = 0x002EF040u; return; } if (c.pc != 0x002EE6BCu) [[unlikely]] return; }
L_002EE6BC:
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.budget -= 1;
L_002EE6C0:
    c.r[2].d[0] = c.r[20].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[20].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002EE278u | kUnwind; return; } goto L_002EE278; } }
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_002EE7E0; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002EE6D8:
    set32(c.r[2], c.r[21].w[0] + c.r[4].w[0]);
    c.r[3].d[0] = ld8((c.r[2].w[0] + 93u));
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.r[2].d[0] = c.r[4].sd[0] < 5ll ? 1ull : 0ull;
    set32(c.r[6], c.r[6].w[0] + c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002EE6D8u | kUnwind; return; } goto L_002EE6D8; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[4], c.r[29].w[0] + 208u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EE704u); set32(c.r[5], c.r[5].w[0] - 22976u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x00127458u; return; } if (c.pc != 0x002EE704u) [[unlikely]] return; }
L_002EE704:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43700000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[12] = c.r[2].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x428A0000u);
    c.f[1] = ld32((c.r[1].w[0] - 22928u));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.f[0] = c.r[2].w[0];
    c.f[13] = c.r[3].w[0];
    c.f[14] = fp::cvt_s_w(c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    st32((c.r[19].w[0] + 16u), c.f[1]);
    c.f[0] = ld32((c.r[1].w[0] - 22928u));
    st32((c.r[19].w[0] + 20u), c.f[0]);
    st32((c.r[19].w[0] + 24u), c.r[5].w[0]);
    set32(c.r[25], ld32((c.r[19].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 20;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002EE754u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002EE754u) [[unlikely]] return; }
L_002EE754:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EE75Cu); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x002EE75Cu) [[unlikely]] return; }
L_002EE75C:
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EE76Cu); st128((c.r[19].w[0] + 48u) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_007B(c, 402u, depth + 1u); else { c.pc = 0x002EFAE0u; return; } if (c.pc != 0x002EE76Cu) [[unlikely]] return; }
L_002EE76C:
    st32((c.r[19].w[0] + 60u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EE778u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_007B(c, 402u, depth + 1u); else { c.pc = 0x002EFAE0u; return; } if (c.pc != 0x002EE778u) [[unlikely]] return; }
L_002EE778:
    st32((c.r[19].w[0] + 300u), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    set32(c.r[2], c.r[29].w[0] + 208u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    st32((c.r[19].w[0] + 352u), c.r[2].w[0]);
    set32(c.r[5], 0u + 1u);
    st32((c.r[19].w[0] + 356u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[19].w[0] + 304u), c.r[3].w[0]);
    c.r[6].d[0] = 0ull + 0ull;
    st32((c.r[19].w[0] + 308u), c.r[3].w[0]);
    set32(c.r[7], 0u - 1u);
    st32((c.r[19].w[0] + 312u), 0u);
    st32((c.r[19].w[0] + 316u), c.r[2].w[0]);
    set32(c.r[25], ld32((c.r[19].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 68u)));
    c.budget -= 18;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002EE7C0u); set32(c.r[8], 0u + 2u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002EE7C0u) [[unlikely]] return; }
L_002EE7C0:
    set32(c.r[25], ld32((c.r[19].w[0] + 176u)));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u - 1u);
    set32(c.r[25], ld32((c.r[25].w[0] + 68u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002EE7E0u); c.r[8].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002EE7E0u) [[unlikely]] return; }
L_002EE7E0:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_002EE8DC; } }
    set32(c.r[6], ld32((c.r[21].w[0] + 76u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[4], c.r[29].w[0] + 208u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EE7FCu); set32(c.r[5], c.r[5].w[0] - 22976u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x00127458u; return; } if (c.pc != 0x002EE7FCu) [[unlikely]] return; }
L_002EE7FC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43FA0000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[12] = c.r[2].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x423C0000u);
    c.f[1] = ld32((c.r[1].w[0] - 22936u));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.f[0] = c.r[2].w[0];
    c.f[13] = c.r[3].w[0];
    c.f[14] = fp::cvt_s_w(c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    st32((c.r[19].w[0] + 16u), c.f[1]);
    c.f[0] = ld32((c.r[1].w[0] - 22936u));
    st32((c.r[19].w[0] + 20u), c.f[0]);
    st32((c.r[19].w[0] + 24u), c.r[5].w[0]);
    set32(c.r[25], ld32((c.r[19].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 20;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002EE84Cu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002EE84Cu) [[unlikely]] return; }
L_002EE84C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EE854u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x002EE854u) [[unlikely]] return; }
L_002EE854:
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EE864u); st128((c.r[19].w[0] + 48u) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_007B(c, 402u, depth + 1u); else { c.pc = 0x002EFAE0u; return; } if (c.pc != 0x002EE864u) [[unlikely]] return; }
L_002EE864:
    st32((c.r[19].w[0] + 60u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EE870u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_007B(c, 402u, depth + 1u); else { c.pc = 0x002EFAE0u; return; } if (c.pc != 0x002EE870u) [[unlikely]] return; }
L_002EE870:
    st32((c.r[19].w[0] + 300u), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    set32(c.r[2], c.r[29].w[0] + 208u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    st32((c.r[19].w[0] + 352u), c.r[2].w[0]);
    set32(c.r[5], 0u + 1u);
    st32((c.r[19].w[0] + 356u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[19].w[0] + 304u), c.r[3].w[0]);
    c.r[6].d[0] = 0ull + 0ull;
    st32((c.r[19].w[0] + 308u), c.r[3].w[0]);
    set32(c.r[7], 0u - 1u);
    st32((c.r[19].w[0] + 312u), 0u);
    st32((c.r[19].w[0] + 316u), c.r[2].w[0]);
    set32(c.r[25], ld32((c.r[19].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 68u)));
    c.budget -= 18;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002EE8B8u); set32(c.r[8], 0u + 2u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002EE8B8u) [[unlikely]] return; }
L_002EE8B8:
    set32(c.r[25], ld32((c.r[19].w[0] + 176u)));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u - 1u);
    set32(c.r[25], ld32((c.r[25].w[0] + 68u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002EE8D8u); c.r[8].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002EE8D8u) [[unlikely]] return; }
L_002EE8D8:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002EE8DC:
    set32(c.r[2], c.r[21].w[0] + c.r[16].w[0]);
    c.r[2].d[0] = ld8((c.r[2].w[0] + 93u));
    c.r[3].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull; c.r[5].sd[0] = static_cast<std::int32_t>(0x00470000u);  if (t) { goto L_002EE958; } }
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_002EE904; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_002EE91C; } }
L_002EE904:
    set32(c.r[2], c.r[2].w[0] >> 1);
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::add(c.f[1], c.f[1]);
    c.budget -= 6;
L_002EE91C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[0] = c.r[2].w[0];
    fpu_div(c, 12u, c.f[1], c.f[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EE93Cu);  if (depth < kMaxDepth) unit_0007(c, 36u, depth + 1u); else { c.pc = 0x0011C438u; return; } if (c.pc != 0x002EE93Cu) [[unlikely]] return; }
L_002EE93C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[4], c.r[29].w[0] + 208u);
    set32(c.r[5], c.r[5].w[0] - 22968u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EE950u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x00127458u; return; } if (c.pc != 0x002EE950u) [[unlikely]] return; }
L_002EE950:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002EE968; } }
L_002EE958:
    set32(c.r[6], c.r[2].w[0] >> 1);
    set32(c.r[4], c.r[29].w[0] + 208u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EE968u); set32(c.r[5], c.r[5].w[0] - 22976u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x00127458u; return; } if (c.pc != 0x002EE968u) [[unlikely]] return; }
L_002EE968:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_002EEA54; } }
    set32(c.r[2], c.r[16].w[0] << 3);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[2], c.r[2].w[0] - c.r[16].w[0]);
    st32((c.r[19].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    st32((c.r[19].w[0] + 20u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + 100u);
    st32((c.r[19].w[0] + 24u), c.r[3].w[0]);
    c.f[1] = c.r[2].w[0];
    set32(c.r[25], ld32((c.r[19].w[0] + 176u)));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[2], 0u + 283u);
    c.f[0] = c.r[2].w[0];
    c.f[13] = fp::cvt_s_w(c.f[1]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.f[12] = fp::cvt_s_w(c.f[0]);
    c.f[0] = c.r[2].w[0];
    c.budget -= 22;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002EE9C8u); c.f[14] = fp::cvt_s_w(c.f[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002EE9C8u) [[unlikely]] return; }
L_002EE9C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EE9D0u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x002EE9D0u) [[unlikely]] return; }
L_002EE9D0:
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EE9E0u); st128((c.r[19].w[0] + 48u) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_007B(c, 402u, depth + 1u); else { c.pc = 0x002EFAE0u; return; } if (c.pc != 0x002EE9E0u) [[unlikely]] return; }
L_002EE9E0:
    st32((c.r[19].w[0] + 60u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EE9ECu); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_007B(c, 402u, depth + 1u); else { c.pc = 0x002EFAE0u; return; } if (c.pc != 0x002EE9ECu) [[unlikely]] return; }
L_002EE9EC:
    st32((c.r[19].w[0] + 300u), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    set32(c.r[2], c.r[29].w[0] + 208u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    st32((c.r[19].w[0] + 352u), c.r[2].w[0]);
    set32(c.r[5], 0u + 1u);
    st32((c.r[19].w[0] + 356u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[19].w[0] + 304u), c.r[3].w[0]);
    c.r[6].d[0] = 0ull + 0ull;
    st32((c.r[19].w[0] + 308u), c.r[3].w[0]);
    set32(c.r[7], 0u - 1u);
    st32((c.r[19].w[0] + 312u), 0u);
    st32((c.r[19].w[0] + 316u), c.r[2].w[0]);
    set32(c.r[25], ld32((c.r[19].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 68u)));
    c.budget -= 18;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002EEA34u); set32(c.r[8], 0u + 2u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002EEA34u) [[unlikely]] return; }
L_002EEA34:
    set32(c.r[25], ld32((c.r[19].w[0] + 176u)));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u - 1u);
    set32(c.r[25], ld32((c.r[25].w[0] + 68u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002EEA54u); c.r[8].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002EEA54u) [[unlikely]] return; }
L_002EEA54:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[3].d[0] = c.r[16].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002EE8DCu | kUnwind; return; } goto L_002EE8DC; } }
    set32(c.r[4], ld32((c.r[21].w[0] + 52u)));
    set32(c.r[3], 0u + 7u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_002EEA80; } }
    set32(c.r[3], 0u + 8u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002EF00C; } }
L_002EEA80:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_002EEB7C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[4].d[0] = 0ull + 0ull;
    st32((c.r[19].w[0] + 16u), c.r[2].w[0]);
    st32((c.r[19].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EEAA0u); st32((c.r[19].w[0] + 24u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x002EEAA0u) [[unlikely]] return; }
L_002EEAA0:
    ld128((c.r[2].w[0]) & ~15u, c.r[3]);
    set32(c.r[2], c.r[16].w[0] << 2);
    st128((c.r[19].w[0] + 48u) & ~15u, c.r[3]);
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EEAB8u); set32(c.r[4], ld32((c.r[2].w[0] + 160u)));  if (depth < kMaxDepth) unit_000B(c, 461u, depth + 1u); else { c.pc = 0x0012FD60u; return; } if (c.pc != 0x002EEAB8u) [[unlikely]] return; }
L_002EEAB8:
    c.f[1] = c.r[16].w[0];
    st32((c.r[19].w[0] + 352u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42600000u);
    st32((c.r[19].w[0] + 356u), 0u);
    c.f[1] = fp::cvt_s_w(c.f[1]);
    set32(c.r[25], ld32((c.r[19].w[0] + 176u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43B30000u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.f[2] = c.r[2].w[0];
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.f[12] = c.r[3].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.f[13] = fp::add(c.f[0], c.f[1]);
    c.f[0] = c.r[2].w[0];
    c.budget -= 21;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002EEB0Cu); c.f[14] = fp::cvt_s_w(c.f[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002EEB0Cu) [[unlikely]] return; }
L_002EEB0C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EEB14u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_007B(c, 402u, depth + 1u); else { c.pc = 0x002EFAE0u; return; } if (c.pc != 0x002EEB14u) [[unlikely]] return; }
L_002EEB14:
    st32((c.r[19].w[0] + 60u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EEB20u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_007B(c, 402u, depth + 1u); else { c.pc = 0x002EFAE0u; return; } if (c.pc != 0x002EEB20u) [[unlikely]] return; }
L_002EEB20:
    st32((c.r[19].w[0] + 300u), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    st32((c.r[19].w[0] + 304u), c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[19].w[0] + 308u), c.r[3].w[0]);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    st32((c.r[19].w[0] + 312u), 0u);
    set32(c.r[5], 0u + 1u);
    st32((c.r[19].w[0] + 316u), c.r[2].w[0]);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[25], ld32((c.r[19].w[0] + 176u)));
    set32(c.r[7], 0u - 1u);
    set32(c.r[25], ld32((c.r[25].w[0] + 68u)));
    c.budget -= 15;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002EEB5Cu); set32(c.r[8], 0u + 2u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002EEB5Cu) [[unlikely]] return; }
L_002EEB5C:
    set32(c.r[25], ld32((c.r[19].w[0] + 176u)));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u - 1u);
    set32(c.r[25], ld32((c.r[25].w[0] + 68u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002EEB7Cu); c.r[8].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002EEB7Cu) [[unlikely]] return; }
L_002EEB7C:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull; set32(c.r[3], c.r[16].w[0] << 2);  if (t) { goto L_002EECFC; } }
    set32(c.r[2], c.r[21].w[0] + c.r[16].w[0]);
    c.r[2].d[0] = ld8((c.r[2].w[0] + 93u));
    c.r[3].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull; c.r[5].sd[0] = static_cast<std::int32_t>(0x00470000u);  if (t) { goto L_002EEC00; } }
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_002EEBAC; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_002EEBC4; } }
L_002EEBAC:
    set32(c.r[2], c.r[2].w[0] >> 1);
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::add(c.f[1], c.f[1]);
    c.budget -= 6;
L_002EEBC4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[0] = c.r[2].w[0];
    fpu_div(c, 12u, c.f[1], c.f[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EEBE4u);  if (depth < kMaxDepth) unit_0007(c, 36u, depth + 1u); else { c.pc = 0x0011C438u; return; } if (c.pc != 0x002EEBE4u) [[unlikely]] return; }
L_002EEBE4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 192u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EEBF8u); set32(c.r[5], c.r[5].w[0] - 22968u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x00127458u; return; } if (c.pc != 0x002EEBF8u) [[unlikely]] return; }
L_002EEBF8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);  if (t) { goto L_002EEC14; } }
L_002EEC00:
    set32(c.r[6], c.r[2].w[0] >> 1);
    set32(c.r[4], c.r[29].w[0] + 192u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EEC10u); set32(c.r[5], c.r[5].w[0] - 22976u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x00127458u; return; } if (c.pc != 0x002EEC10u) [[unlikely]] return; }
L_002EEC10:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.budget -= 1;
L_002EEC14:
    c.r[4].d[0] = 0ull + 0ull;
    st32((c.r[19].w[0] + 16u), c.r[2].w[0]);
    st32((c.r[19].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EEC28u); st32((c.r[19].w[0] + 24u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x002EEC28u) [[unlikely]] return; }
L_002EEC28:
    ld128((c.r[2].w[0]) & ~15u, c.r[6]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42600000u);
    c.f[3] = c.r[3].w[0];
    set32(c.r[5], c.r[29].w[0] + 192u);
    c.f[2] = c.r[16].w[0];
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x44080000u);
    c.f[12] = c.r[3].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43060000u);
    st128((c.r[19].w[0] + 48u) & ~15u, c.r[6]);
    c.f[1] = c.r[2].w[0];
    st32((c.r[19].w[0] + 352u), c.r[5].w[0]);
    st32((c.r[19].w[0] + 356u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    set32(c.r[25], ld32((c.r[19].w[0] + 176u)));
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.f[0] = c.r[2].w[0];
    c.f[14] = fp::cvt_s_w(c.f[0]);
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.f[0] = fp::cvt_s_w(c.f[2]);
    c.f[0] = fp::mul(c.f[3], c.f[0]);
    c.budget -= 24;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002EEC88u); c.f[13] = fp::add(c.f[1], c.f[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002EEC88u) [[unlikely]] return; }
L_002EEC88:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EEC90u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_007B(c, 402u, depth + 1u); else { c.pc = 0x002EFAE0u; return; } if (c.pc != 0x002EEC90u) [[unlikely]] return; }
L_002EEC90:
    st32((c.r[19].w[0] + 60u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EEC9Cu); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_007B(c, 402u, depth + 1u); else { c.pc = 0x002EFAE0u; return; } if (c.pc != 0x002EEC9Cu) [[unlikely]] return; }
L_002EEC9C:
    st32((c.r[19].w[0] + 300u), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    st32((c.r[19].w[0] + 304u), c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[19].w[0] + 308u), c.r[3].w[0]);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    st32((c.r[19].w[0] + 312u), 0u);
    set32(c.r[5], 0u + 1u);
    st32((c.r[19].w[0] + 316u), c.r[2].w[0]);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[25], ld32((c.r[19].w[0] + 176u)));
    set32(c.r[7], 0u - 1u);
    set32(c.r[25], ld32((c.r[25].w[0] + 68u)));
    c.budget -= 15;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002EECD8u); set32(c.r[8], 0u + 2u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002EECD8u) [[unlikely]] return; }
L_002EECD8:
    set32(c.r[25], ld32((c.r[19].w[0] + 176u)));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u - 1u);
    set32(c.r[25], ld32((c.r[25].w[0] + 68u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002EECF8u); c.r[8].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002EECF8u) [[unlikely]] return; }
L_002EECF8:
    set32(c.r[3], c.r[16].w[0] << 2);
    c.budget -= 1;
L_002EECFC:
    set32(c.r[3], c.r[21].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0] + 320u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[18], c.r[3].w[0] + 320u);  if (t) { goto L_002EEFFC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x431E0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41900000u);
    st32((c.r[4].w[0] + 160u), c.r[2].w[0]);
    st32((c.r[4].w[0] + 164u), c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[3], ld32((c.r[18].w[0])));
    set32(c.r[4], 0u + 7u);
    st32((c.r[3].w[0] + 16u), c.r[2].w[0]);
    st32((c.r[3].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EED38u); st32((c.r[3].w[0] + 24u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x002EED38u) [[unlikely]] return; }
L_002EED38:
    set32(c.r[5], ld32((c.r[18].w[0])));
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[2].w[0])));
    st32((c.r[5].w[0] + 48u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    st32((c.r[5].w[0] + 52u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EED5Cu); st32((c.r[5].w[0] + 56u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_007B(c, 402u, depth + 1u); else { c.pc = 0x002EFAE0u; return; } if (c.pc != 0x002EED5Cu) [[unlikely]] return; }
L_002EED5C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42600000u);
    set32(c.r[4], ld32((c.r[18].w[0])));
    c.f[3] = c.r[3].w[0];
    c.f[2] = c.r[16].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42FC0000u);
    c.f[1] = c.r[3].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43B50000u);
    st32((c.r[4].w[0] + 60u), c.r[2].w[0]);
    c.f[12] = c.r[3].w[0];
    set32(c.r[4], ld32((c.r[18].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    c.f[0] = c.r[3].w[0];
    c.f[14] = fp::cvt_s_w(c.f[0]);
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    c.f[0] = fp::cvt_s_w(c.f[2]);
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.f[20] = fp::mul(c.f[3], c.f[0]);
    c.f[21] = fp::add(c.f[1], c.f[20]);
    c.budget -= 22;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002EEDB4u); c.f[13] = c.f[21];  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002EEDB4u) [[unlikely]] return; }
L_002EEDB4:
    set32(c.r[4], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 56u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002EEDC8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002EEDC8u) [[unlikely]] return; }
L_002EEDC8:
    set32(c.r[17], c.r[21].w[0] + c.r[16].w[0]);
    set32(c.r[6], ld32((c.r[18].w[0])));
    c.r[5].d[0] = ld8((c.r[17].w[0] + 88u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41900000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[4], 0u + 15u);
    set32(c.r[20], c.r[17].w[0] + 88u);
    set32(c.r[5], c.r[5].w[0] << 3);
    set32(c.r[5], c.r[5].w[0] - 2u);
    c.f[0] = c.r[5].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[6].w[0] + 160u), c.f[0]);
    st32((c.r[6].w[0] + 164u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0])));
    st32((c.r[3].w[0] + 16u), c.r[2].w[0]);
    st32((c.r[3].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EEE14u); st32((c.r[3].w[0] + 24u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x002EEE14u) [[unlikely]] return; }
L_002EEE14:
    set32(c.r[5], ld32((c.r[18].w[0])));
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[2].w[0])));
    st32((c.r[5].w[0] + 48u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    st32((c.r[5].w[0] + 52u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EEE38u); st32((c.r[5].w[0] + 56u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_007B(c, 402u, depth + 1u); else { c.pc = 0x002EFAE0u; return; } if (c.pc != 0x002EEE38u) [[unlikely]] return; }
L_002EEE38:
    set32(c.r[4], ld32((c.r[18].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43B50000u);
    c.f[12] = c.r[3].w[0];
    c.f[13] = c.f[21];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    c.f[0] = c.r[3].w[0];
    st32((c.r[4].w[0] + 60u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 13;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002EEE6Cu); c.f[14] = fp::cvt_s_w(c.f[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002EEE6Cu) [[unlikely]] return; }
L_002EEE6C:
    set32(c.r[4], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 56u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002EEE80u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002EEE80u) [[unlikely]] return; }
L_002EEE80:
    c.r[3].d[0] = ld8((c.r[20].w[0]));
    c.r[2].d[0] = ld8((c.r[17].w[0] + 93u));
    c.r[1].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002EEF5C; } }
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[18].w[0])));
    set32(c.r[2], c.r[2].w[0] << 3);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41900000u);
    c.f[0] = c.r[2].w[0];
    set32(c.r[4], 0u + 3u);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[5].w[0] + 160u), c.f[0]);
    st32((c.r[5].w[0] + 164u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0])));
    st32((c.r[3].w[0] + 16u), c.r[2].w[0]);
    st32((c.r[3].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EEED0u); st32((c.r[3].w[0] + 24u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x002EEED0u) [[unlikely]] return; }
L_002EEED0:
    set32(c.r[5], ld32((c.r[18].w[0])));
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[2].w[0])));
    st32((c.r[5].w[0] + 48u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    st32((c.r[5].w[0] + 52u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EEEF4u); st32((c.r[5].w[0] + 56u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_007B(c, 402u, depth + 1u); else { c.pc = 0x002EFAE0u; return; } if (c.pc != 0x002EEEF4u) [[unlikely]] return; }
L_002EEEF4:
    set32(c.r[5], ld32((c.r[18].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x43B50000u);
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    c.f[0] = c.r[3].w[0];
    c.f[1] = c.r[4].w[0];
    c.f[14] = fp::cvt_s_w(c.f[0]);
    st32((c.r[5].w[0] + 60u), c.r[2].w[0]);
    c.r[2].d[0] = ld8((c.r[17].w[0] + 88u));
    set32(c.r[4], ld32((c.r[18].w[0])));
    c.f[13] = c.f[21];
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] - 2u);
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 21;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002EEF48u); c.f[12] = fp::add(c.f[1], c.f[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002EEF48u) [[unlikely]] return; }
L_002EEF48:
    set32(c.r[4], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 56u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002EEF5Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002EEF5Cu) [[unlikely]] return; }
L_002EEF5C:
    set32(c.r[6], ld32((c.r[18].w[0])));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[4].d[0] = 0ull + 0ull;
    c.r[3].d[0] = c.r[2].d[0] | 65535ull;
    st32((c.r[6].w[0] + 16u), c.r[5].w[0]);
    st32((c.r[6].w[0] + 20u), c.r[5].w[0]);
    st32((c.r[6].w[0] + 24u), c.r[5].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0])));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EEF88u); st32((c.r[2].w[0] + 132u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x002EEF88u) [[unlikely]] return; }
L_002EEF88:
    set32(c.r[5], ld32((c.r[18].w[0])));
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[2].w[0])));
    st32((c.r[5].w[0] + 48u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    st32((c.r[5].w[0] + 52u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EEFACu); st32((c.r[5].w[0] + 56u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_007B(c, 402u, depth + 1u); else { c.pc = 0x002EFAE0u; return; } if (c.pc != 0x002EEFACu) [[unlikely]] return; }
L_002EEFAC:
    set32(c.r[4], ld32((c.r[18].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43B40000u);
    c.f[12] = c.r[3].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42F80000u);
    c.f[0] = c.r[3].w[0];
    st32((c.r[4].w[0] + 60u), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    set32(c.r[4], ld32((c.r[18].w[0])));
    c.f[13] = fp::add(c.f[0], c.f[20]);
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    c.f[0] = c.r[3].w[0];
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 15;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002EEFE8u); c.f[14] = fp::cvt_s_w(c.f[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002EEFE8u) [[unlikely]] return; }
L_002EEFE8:
    set32(c.r[4], ld32((c.r[18].w[0])));
    set32(c.r[5], 0u + 160u);
    set32(c.r[6], 0u + 20u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EEFFCu); set32(c.r[7], 0u + 2u);  if (depth < kMaxDepth) unit_0062(c, 298u, depth + 1u); else { c.pc = 0x0028B8C0u; return; } if (c.pc != 0x002EEFFCu) [[unlikely]] return; }
L_002EEFFC:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[3].d[0] = c.r[16].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002EEA80u | kUnwind; return; } goto L_002EEA80; } }
L_002EF00C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 224u);  c.pc = t; return; }
L_002EF040:
    set32(c.r[29], c.r[29].w[0] - 192u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00420000u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    set32(c.r[7], c.r[29].w[0] + 144u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    set32(c.r[6], c.r[6].w[0] - 9968u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00420000u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], c.r[5].w[0] - 10000u);
    ld128((c.r[5].w[0]) & ~15u, c.r[3]);
    c.f[0] = ld32((c.r[5].w[0] + 16u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st128((c.r[7].w[0]) & ~15u, c.r[3]);
    set32(c.r[5], c.r[29].w[0] + 112u);
    st32((c.r[7].w[0] + 16u), c.f[0]);
    ld128((c.r[6].w[0]) & ~15u, c.r[3]);
    c.f[0] = ld32((c.r[6].w[0] + 16u));
    st128((c.r[5].w[0]) & ~15u, c.r[3]);
    st32((c.r[5].w[0] + 16u), c.f[0]);
    set32(c.r[5], ld32((c.r[4].w[0] + 60u)));
    set32(c.r[4], ld32((c.r[1].w[0] + 26392u)));
    c.r[3].d[0] = c.r[19].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    set32(c.r[17], ld32((c.r[4].w[0] + 444u)));
    c.budget -= 30;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[18], ld32((c.r[4].w[0] + 440u)));  if (t) { goto L_002EFAB8; } }
    set32(c.r[3], c.r[5].w[0] + 5u);
    c.r[1].d[0] = c.r[19].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002EFAB8; } }
    set32(c.r[3], ld32((c.r[20].w[0] + 52u)));
    set32(c.r[2], ld32((c.r[20].w[0] + 56u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_002EF0DC; } }
    st32((c.r[20].w[0] + 56u), c.r[3].w[0]);
    c.budget -= 1;
L_002EF0DC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[20].w[0] + 60u)));  if (t) { goto L_002EF104; } }
L_002EF0E4:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[2], c.r[16].w[0] << 2);  if (t) { goto L_002EF144; } }
    set32(c.r[2], c.r[20].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 128u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EF0FCu); set32(c.r[5], 0u + 15u);  if (depth < kMaxDepth) unit_007C(c, 18u, depth + 1u); else { c.pc = 0x002F02D0u; return; } if (c.pc != 0x002EF0FCu) [[unlikely]] return; }
L_002EF0FC:
    set32(c.r[16], c.r[16].w[0] + 1u);
    set32(c.r[2], ld32((c.r[20].w[0] + 60u)));
    c.budget -= 2;
L_002EF104:
    set32(c.r[2], c.r[19].w[0] - c.r[2].w[0]);
    set32(c.r[2], c.r[20].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = ld8((c.r[2].w[0] + 88u));
    c.r[2].d[0] = c.r[16].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].d[0] = c.r[16].sd[0] < 20ll ? 1ull : 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002EF0E4u | kUnwind; return; } goto L_002EF0E4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[20].w[0] + 60u)));  if (t) { goto L_002EF148; } }
L_002EF124:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull; c.r[2].d[0] = c.r[16].sd[0] < 20ll ? 1ull : 0ull;  if (t) { goto L_002EF188; } }
    set32(c.r[2], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[20].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 128u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EF140u); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_007C(c, 18u, depth + 1u); else { c.pc = 0x002F02D0u; return; } if (c.pc != 0x002EF140u) [[unlikely]] return; }
L_002EF140:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_002EF144:
    set32(c.r[2], ld32((c.r[20].w[0] + 60u)));
    c.budget -= 1;
L_002EF148:
    set32(c.r[2], c.r[19].w[0] - c.r[2].w[0]);
    set32(c.r[2], c.r[20].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = ld8((c.r[2].w[0] + 93u));
    c.r[2].d[0] = c.r[16].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].d[0] = c.r[16].sd[0] < 20ll ? 1ull : 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002EF124u | kUnwind; return; } goto L_002EF124; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002EF184; } }
L_002EF168:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[2], c.r[16].w[0] << 2);  if (t) { goto L_002EF190; } }
    set32(c.r[2], c.r[20].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 128u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EF180u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_007C(c, 18u, depth + 1u); else { c.pc = 0x002F02D0u; return; } if (c.pc != 0x002EF180u) [[unlikely]] return; }
L_002EF180:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_002EF184:
    c.r[2].d[0] = c.r[16].sd[0] < 20ll ? 1ull : 0ull;
    c.budget -= 1;
L_002EF188:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].d[0] = c.r[16].sd[0] < 20ll ? 1ull : 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002EF168u | kUnwind; return; } goto L_002EF168; } }
L_002EF190:
    set32(c.r[2], ld32((c.r[20].w[0] + 60u)));
    set32(c.r[2], c.r[19].w[0] - c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[20].w[0]);
    c.r[2].d[0] = ld8((c.r[2].w[0] + 93u));
    c.r[3].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull; c.r[5].sd[0] = static_cast<std::int32_t>(0x00470000u);  if (t) { goto L_002EF214; } }
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_002EF1C0; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_002EF1D8; } }
L_002EF1C0:
    set32(c.r[2], c.r[2].w[0] >> 1);
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::add(c.f[1], c.f[1]);
    c.budget -= 6;
L_002EF1D8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[0] = c.r[2].w[0];
    fpu_div(c, 12u, c.f[1], c.f[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EF1F8u);  if (depth < kMaxDepth) unit_0007(c, 36u, depth + 1u); else { c.pc = 0x0011C438u; return; } if (c.pc != 0x002EF1F8u) [[unlikely]] return; }
L_002EF1F8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EF20Cu); set32(c.r[5], c.r[5].w[0] - 22968u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x00127458u; return; } if (c.pc != 0x002EF20Cu) [[unlikely]] return; }
L_002EF20C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002EF224; } }
L_002EF214:
    set32(c.r[6], c.r[2].w[0] >> 1);
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EF224u); set32(c.r[5], c.r[5].w[0] - 22976u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x00127458u; return; } if (c.pc != 0x002EF224u) [[unlikely]] return; }
L_002EF224:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_002EF304; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EF234u);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x002EF234u) [[unlikely]] return; }
L_002EF234:
    ld128((c.r[2].w[0]) & ~15u, c.r[8]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43080000u);
    set32(c.r[7], 0u + 255u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[5], c.r[29].w[0] + 176u);
    c.f[13] = c.r[3].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43E50000u);
    st128((c.r[18].w[0] + 48u) & ~15u, c.r[8]);
    c.f[12] = c.r[2].w[0];
    st32((c.r[18].w[0] + 60u), c.r[7].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.f[0] = c.r[2].w[0];
    c.f[14] = fp::cvt_s_w(c.f[0]);
    c.f[0] = ld32((c.r[1].w[0] - 22928u));
    st32((c.r[18].w[0] + 16u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[0] = ld32((c.r[1].w[0] - 22928u));
    st32((c.r[18].w[0] + 20u), c.f[0]);
    st32((c.r[18].w[0] + 24u), c.r[6].w[0]);
    st32((c.r[18].w[0] + 352u), c.r[5].w[0]);
    st32((c.r[18].w[0] + 356u), 0u);
    set32(c.r[25], ld32((c.r[18].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 28;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002EF2A4u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002EF2A4u) [[unlikely]] return; }
L_002EF2A4:
    set32(c.r[2], 0u + 255u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    st32((c.r[18].w[0] + 300u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    st32((c.r[18].w[0] + 304u), c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[18].w[0] + 308u), c.r[3].w[0]);
    set32(c.r[5], 0u + 1u);
    st32((c.r[18].w[0] + 312u), 0u);
    c.r[6].d[0] = 0ull + 0ull;
    st32((c.r[18].w[0] + 316u), c.r[2].w[0]);
    set32(c.r[7], 0u - 1u);
    set32(c.r[25], ld32((c.r[18].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 68u)));
    c.budget -= 16;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002EF2E4u); set32(c.r[8], 0u + 2u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002EF2E4u) [[unlikely]] return; }
L_002EF2E4:
    set32(c.r[25], ld32((c.r[18].w[0] + 176u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u - 1u);
    set32(c.r[25], ld32((c.r[25].w[0] + 68u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002EF304u); c.r[8].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002EF304u) [[unlikely]] return; }
L_002EF304:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_002EF4A0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EF314u);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x002EF314u) [[unlikely]] return; }
L_002EF314:
    ld128((c.r[2].w[0]) & ~15u, c.r[5]);
    set32(c.r[4], 0u + 255u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st128((c.r[18].w[0] + 48u) & ~15u, c.r[5]);
    set32(c.r[2], c.r[19].w[0] << 2);
    st32((c.r[18].w[0] + 60u), c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[20].w[0]);
    c.f[0] = ld32((c.r[1].w[0] - 22936u));
    set32(c.r[16], c.r[2].w[0] + 208u);
    st32((c.r[18].w[0] + 16u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[0] = ld32((c.r[1].w[0] - 22936u));
    st32((c.r[18].w[0] + 20u), c.f[0]);
    st32((c.r[18].w[0] + 24u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 208u)));
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EF35Cu); set32(c.r[4], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_000B(c, 461u, depth + 1u); else { c.pc = 0x0012FD60u; return; } if (c.pc != 0x002EF35Cu) [[unlikely]] return; }
L_002EF35C:
    st32((c.r[18].w[0] + 352u), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42DC0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43E50000u);
    st32((c.r[18].w[0] + 356u), 0u);
    c.f[12] = c.r[2].w[0];
    set32(c.r[25], ld32((c.r[18].w[0] + 176u)));
    c.f[13] = c.r[3].w[0];
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.f[0] = c.r[2].w[0];
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 14;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002EF394u); c.f[14] = fp::cvt_s_w(c.f[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002EF394u) [[unlikely]] return; }
L_002EF394:
    set32(c.r[2], ld32((c.r[20].w[0] + 40u)));
    set32(c.r[8], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[8].d[0]; set32(c.r[2], 0u + 255u);  if (t) { goto L_002EF448; } }
    ld128((c.r[18].w[0] + 16u) & ~15u, c.r[3]);
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[1] = c.r[2].w[0];
    st128((c.r[4].w[0]) & ~15u, c.r[3]);
    c.f[0] = ld32((c.r[29].w[0] + 96u));
    st32((c.r[17].w[0] + 16u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 100u));
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    st32((c.r[17].w[0] + 20u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 104u));
    st32((c.r[17].w[0] + 24u), c.f[0]);
    ld128((c.r[20].w[0] + 288u) & ~15u, c.r[2]);
    st128((c.r[17].w[0] + 48u) & ~15u, c.r[2]);
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EF3E8u); set32(c.r[4], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_000B(c, 461u, depth + 1u); else { c.pc = 0x0012FD60u; return; } if (c.pc != 0x002EF3E8u) [[unlikely]] return; }
L_002EF3E8:
    st32((c.r[17].w[0] + 352u), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42DC0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43E50000u);
    st32((c.r[17].w[0] + 356u), 0u);
    c.f[12] = c.r[2].w[0];
    set32(c.r[25], ld32((c.r[17].w[0] + 176u)));
    c.f[13] = c.r[3].w[0];
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.f[0] = c.r[2].w[0];
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 14;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002EF420u); c.f[14] = fp::cvt_s_w(c.f[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002EF420u) [[unlikely]] return; }
L_002EF420:
    set32(c.r[25], ld32((c.r[17].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002EF430u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002EF430u) [[unlikely]] return; }
L_002EF430:
    set32(c.r[25], ld32((c.r[18].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002EF440u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002EF440u) [[unlikely]] return; }
L_002EF440:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[20].w[0] + 124u)));  if (t) { goto L_002EF4A4; } }
L_002EF448:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    st32((c.r[18].w[0] + 300u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    st32((c.r[18].w[0] + 304u), c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[18].w[0] + 308u), c.r[3].w[0]);
    set32(c.r[5], 0u + 1u);
    st32((c.r[18].w[0] + 312u), 0u);
    c.r[6].d[0] = 0ull + 0ull;
    st32((c.r[18].w[0] + 316u), c.r[2].w[0]);
    set32(c.r[25], ld32((c.r[18].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 68u)));
    c.budget -= 14;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002EF480u); set32(c.r[7], 0u - 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002EF480u) [[unlikely]] return; }
L_002EF480:
    set32(c.r[25], ld32((c.r[18].w[0] + 176u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u - 1u);
    set32(c.r[25], ld32((c.r[25].w[0] + 68u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002EF4A0u); c.r[8].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002EF4A0u) [[unlikely]] return; }
L_002EF4A0:
    set32(c.r[4], ld32((c.r[20].w[0] + 124u)));
    c.budget -= 1;
L_002EF4A4:
    set32(c.r[2], 0u + 355u);
    c.f[0] = c.r[2].w[0];
    c.f[12] = 0u;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00260000u);
    c.f[13] = fp::cvt_s_w(c.f[0]);
    c.r[2].d[0] = c.r[2].d[0] | 22647ull;
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    c.f[0] = c.r[2].w[0];
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 11;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002EF4D0u); c.f[14] = fp::cvt_s_w(c.f[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002EF4D0u) [[unlikely]] return; }
L_002EF4D0:
    set32(c.r[2], ld32((c.r[20].w[0] + 124u)));
    set32(c.r[3], 0u + 178u);
    st32((c.r[2].w[0] + 60u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[20].w[0] + 124u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002EF4F0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002EF4F0u) [[unlikely]] return; }
L_002EF4F0:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_002EF5CC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EF500u);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x002EF500u) [[unlikely]] return; }
L_002EF500:
    ld128((c.r[2].w[0]) & ~15u, c.r[5]);
    set32(c.r[4], 0u + 255u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st128((c.r[18].w[0] + 48u) & ~15u, c.r[5]);
    set32(c.r[2], c.r[19].w[0] << 2);
    st32((c.r[18].w[0] + 60u), c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[20].w[0]);
    st32((c.r[18].w[0] + 16u), c.r[3].w[0]);
    st32((c.r[18].w[0] + 20u), c.r[3].w[0]);
    st32((c.r[18].w[0] + 24u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 208u)));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EF534u); set32(c.r[4], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_000B(c, 461u, depth + 1u); else { c.pc = 0x0012FD60u; return; } if (c.pc != 0x002EF534u) [[unlikely]] return; }
L_002EF534:
    st32((c.r[18].w[0] + 352u), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43A00000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42600000u);
    st32((c.r[18].w[0] + 356u), 0u);
    c.f[12] = c.r[2].w[0];
    set32(c.r[25], ld32((c.r[18].w[0] + 176u)));
    c.f[13] = c.r[3].w[0];
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.f[0] = c.r[2].w[0];
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 14;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002EF56Cu); c.f[14] = fp::cvt_s_w(c.f[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002EF56Cu) [[unlikely]] return; }
L_002EF56C:
    set32(c.r[2], 0u + 255u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    st32((c.r[18].w[0] + 300u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    st32((c.r[18].w[0] + 304u), c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[18].w[0] + 308u), c.r[3].w[0]);
    set32(c.r[5], 0u + 1u);
    st32((c.r[18].w[0] + 312u), 0u);
    c.r[6].d[0] = 0ull + 0ull;
    st32((c.r[18].w[0] + 316u), c.r[2].w[0]);
    set32(c.r[7], 0u - 1u);
    set32(c.r[25], ld32((c.r[18].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 68u)));
    c.budget -= 16;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002EF5ACu); set32(c.r[8], 0u + 2u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002EF5ACu) [[unlikely]] return; }
L_002EF5AC:
    set32(c.r[25], ld32((c.r[18].w[0] + 176u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u - 1u);
    set32(c.r[25], ld32((c.r[25].w[0] + 68u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002EF5CCu); c.r[8].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002EF5CCu) [[unlikely]] return; }
L_002EF5CC:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_002EF6AC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EF5DCu);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x002EF5DCu) [[unlikely]] return; }
L_002EF5DC:
    ld128((c.r[2].w[0]) & ~15u, c.r[4]);
    set32(c.r[3], 0u + 255u);
    st128((c.r[18].w[0] + 48u) & ~15u, c.r[4]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[18].w[0] + 60u), c.r[3].w[0]);
    st32((c.r[18].w[0] + 16u), c.r[2].w[0]);
    st32((c.r[18].w[0] + 20u), c.r[2].w[0]);
    st32((c.r[18].w[0] + 24u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 60u)));
    set32(c.r[2], c.r[19].w[0] - c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EF614u); set32(c.r[4], ld32((c.r[2].w[0] + 144u)));  if (depth < kMaxDepth) unit_000B(c, 461u, depth + 1u); else { c.pc = 0x0012FD60u; return; } if (c.pc != 0x002EF614u) [[unlikely]] return; }
L_002EF614:
    st32((c.r[18].w[0] + 352u), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43AC0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42600000u);
    st32((c.r[18].w[0] + 356u), 0u);
    c.f[12] = c.r[2].w[0];
    set32(c.r[25], ld32((c.r[18].w[0] + 176u)));
    c.f[13] = c.r[3].w[0];
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.f[0] = c.r[2].w[0];
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 14;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002EF64Cu); c.f[14] = fp::cvt_s_w(c.f[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002EF64Cu) [[unlikely]] return; }
L_002EF64C:
    set32(c.r[2], 0u + 255u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    st32((c.r[18].w[0] + 300u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    st32((c.r[18].w[0] + 304u), c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[18].w[0] + 308u), c.r[3].w[0]);
    set32(c.r[5], 0u + 1u);
    st32((c.r[18].w[0] + 312u), 0u);
    c.r[6].d[0] = 0ull + 0ull;
    st32((c.r[18].w[0] + 316u), c.r[2].w[0]);
    set32(c.r[7], 0u - 1u);
    set32(c.r[25], ld32((c.r[18].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 68u)));
    c.budget -= 16;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002EF68Cu); set32(c.r[8], 0u + 2u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002EF68Cu) [[unlikely]] return; }
L_002EF68C:
    set32(c.r[25], ld32((c.r[18].w[0] + 176u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u - 1u);
    set32(c.r[25], ld32((c.r[25].w[0] + 68u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002EF6ACu); c.r[8].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002EF6ACu) [[unlikely]] return; }
L_002EF6AC:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_002EF790; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EF6BCu); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x002EF6BCu) [[unlikely]] return; }
L_002EF6BC:
    ld128((c.r[2].w[0]) & ~15u, c.r[4]);
    set32(c.r[3], 0u + 255u);
    st128((c.r[18].w[0] + 48u) & ~15u, c.r[4]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[18].w[0] + 60u), c.r[3].w[0]);
    st32((c.r[18].w[0] + 16u), c.r[2].w[0]);
    st32((c.r[18].w[0] + 20u), c.r[2].w[0]);
    st32((c.r[18].w[0] + 24u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 60u)));
    set32(c.r[2], c.r[19].w[0] - c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EF6F4u); set32(c.r[4], ld32((c.r[2].w[0] + 112u)));  if (depth < kMaxDepth) unit_000B(c, 461u, depth + 1u); else { c.pc = 0x0012FD60u; return; } if (c.pc != 0x002EF6F4u) [[unlikely]] return; }
L_002EF6F4:
    st32((c.r[18].w[0] + 352u), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43B80000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42600000u);
    st32((c.r[18].w[0] + 356u), 0u);
    c.f[12] = c.r[2].w[0];
    set32(c.r[25], ld32((c.r[18].w[0] + 176u)));
    c.f[13] = c.r[3].w[0];
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.f[0] = c.r[2].w[0];
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 14;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002EF72Cu); c.f[14] = fp::cvt_s_w(c.f[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002EF72Cu) [[unlikely]] return; }
L_002EF72C:
    set32(c.r[2], 0u + 255u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    st32((c.r[18].w[0] + 300u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    st32((c.r[18].w[0] + 304u), c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[18].w[0] + 308u), c.r[3].w[0]);
    set32(c.r[5], 0u + 1u);
    st32((c.r[18].w[0] + 312u), 0u);
    c.r[6].d[0] = 0ull + 0ull;
    st32((c.r[18].w[0] + 316u), c.r[2].w[0]);
    set32(c.r[7], 0u - 1u);
    set32(c.r[25], ld32((c.r[18].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 68u)));
    c.budget -= 16;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002EF76Cu); set32(c.r[8], 0u + 2u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002EF76Cu) [[unlikely]] return; }
L_002EF76C:
    set32(c.r[25], ld32((c.r[18].w[0] + 176u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u - 1u);
    set32(c.r[25], ld32((c.r[25].w[0] + 68u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002EF78Cu); c.r[8].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002EF78Cu) [[unlikely]] return; }
L_002EF78C:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002EF790:
    set32(c.r[2], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[20].w[0] + c.r[2].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EF7A0u); set32(c.r[4], ld32((c.r[2].w[0] + 128u)));  if (depth < kMaxDepth) unit_007C(c, 22u, depth + 1u); else { c.pc = 0x002F03B0u; return; } if (c.pc != 0x002EF7A0u) [[unlikely]] return; }
L_002EF7A0:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[3].d[0] = c.r[16].sd[0] < 20ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002EF790u | kUnwind; return; } goto L_002EF790; } }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_002EF998; } }
    set32(c.r[4], ld32((c.r[20].w[0] + 52u)));
    set32(c.r[3], ld32((c.r[20].w[0] + 60u)));
    set32(c.r[3], c.r[4].w[0] - c.r[3].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[20].w[0]);
    c.r[3].d[0] = ld8((c.r[3].w[0] + 93u));
    c.r[1].d[0] = c.r[3].sd[0] < 20ll ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002EF998; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x44050000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[12] = c.r[2].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x436B0000u);
    c.f[1] = ld32((c.r[1].w[0] - 22936u));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.f[0] = c.r[2].w[0];
    c.f[13] = c.r[3].w[0];
    c.f[14] = fp::cvt_s_w(c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    st32((c.r[18].w[0] + 16u), c.f[1]);
    c.f[0] = ld32((c.r[1].w[0] - 22936u));
    st32((c.r[18].w[0] + 20u), c.f[0]);
    st32((c.r[18].w[0] + 24u), c.r[5].w[0]);
    set32(c.r[25], ld32((c.r[18].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 20;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002EF828u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002EF828u) [[unlikely]] return; }
L_002EF828:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EF830u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x002EF830u) [[unlikely]] return; }
L_002EF830:
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EF840u); st128((c.r[18].w[0] + 48u) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_007B(c, 402u, depth + 1u); else { c.pc = 0x002EFAE0u; return; } if (c.pc != 0x002EF840u) [[unlikely]] return; }
L_002EF840:
    st32((c.r[18].w[0] + 60u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EF84Cu); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_007B(c, 402u, depth + 1u); else { c.pc = 0x002EFAE0u; return; } if (c.pc != 0x002EF84Cu) [[unlikely]] return; }
L_002EF84C:
    st32((c.r[18].w[0] + 300u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EF858u); set32(c.r[4], 0u + 364u);  if (depth < kMaxDepth) unit_000B(c, 461u, depth + 1u); else { c.pc = 0x0012FD60u; return; } if (c.pc != 0x002EF858u) [[unlikely]] return; }
L_002EF858:
    st32((c.r[18].w[0] + 352u), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    st32((c.r[18].w[0] + 356u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[18].w[0] + 304u), c.r[3].w[0]);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    st32((c.r[18].w[0] + 308u), c.r[3].w[0]);
    set32(c.r[5], 0u + 1u);
    st32((c.r[18].w[0] + 312u), 0u);
    c.r[6].d[0] = 0ull + 0ull;
    st32((c.r[18].w[0] + 316u), c.r[2].w[0]);
    set32(c.r[7], 0u - 1u);
    set32(c.r[25], ld32((c.r[18].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 68u)));
    c.budget -= 16;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002EF898u); set32(c.r[8], 0u + 2u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002EF898u) [[unlikely]] return; }
L_002EF898:
    set32(c.r[25], ld32((c.r[18].w[0] + 176u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u - 1u);
    set32(c.r[25], ld32((c.r[25].w[0] + 68u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002EF8B8u); c.r[8].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002EF8B8u) [[unlikely]] return; }
L_002EF8B8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43C80000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[12] = c.r[2].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x436B0000u);
    c.f[1] = ld32((c.r[1].w[0] - 22936u));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.f[0] = c.r[2].w[0];
    c.f[13] = c.r[3].w[0];
    c.f[14] = fp::cvt_s_w(c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    st32((c.r[18].w[0] + 16u), c.f[1]);
    c.f[0] = ld32((c.r[1].w[0] - 22936u));
    st32((c.r[18].w[0] + 20u), c.f[0]);
    st32((c.r[18].w[0] + 24u), c.r[5].w[0]);
    set32(c.r[25], ld32((c.r[18].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 20;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002EF908u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002EF908u) [[unlikely]] return; }
L_002EF908:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EF910u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x002EF910u) [[unlikely]] return; }
L_002EF910:
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EF920u); st128((c.r[18].w[0] + 48u) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_007B(c, 402u, depth + 1u); else { c.pc = 0x002EFAE0u; return; } if (c.pc != 0x002EF920u) [[unlikely]] return; }
L_002EF920:
    st32((c.r[18].w[0] + 60u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EF92Cu); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_007B(c, 402u, depth + 1u); else { c.pc = 0x002EFAE0u; return; } if (c.pc != 0x002EF92Cu) [[unlikely]] return; }
L_002EF92C:
    st32((c.r[18].w[0] + 300u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EF938u); set32(c.r[4], 0u + 365u);  if (depth < kMaxDepth) unit_000B(c, 461u, depth + 1u); else { c.pc = 0x0012FD60u; return; } if (c.pc != 0x002EF938u) [[unlikely]] return; }
L_002EF938:
    st32((c.r[18].w[0] + 352u), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    st32((c.r[18].w[0] + 356u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[18].w[0] + 304u), c.r[3].w[0]);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    st32((c.r[18].w[0] + 308u), c.r[3].w[0]);
    set32(c.r[5], 0u + 1u);
    st32((c.r[18].w[0] + 312u), 0u);
    c.r[6].d[0] = 0ull + 0ull;
    st32((c.r[18].w[0] + 316u), c.r[2].w[0]);
    set32(c.r[7], 0u - 1u);
    set32(c.r[25], ld32((c.r[18].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 68u)));
    c.budget -= 16;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002EF978u); set32(c.r[8], 0u + 2u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002EF978u) [[unlikely]] return; }
L_002EF978:
    set32(c.r[25], ld32((c.r[18].w[0] + 176u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u - 1u);
    set32(c.r[25], ld32((c.r[25].w[0] + 68u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002EF998u); c.r[8].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002EF998u) [[unlikely]] return; }
L_002EF998:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_002EFAB8; } }
    set32(c.r[4], ld32((c.r[20].w[0] + 52u)));
    set32(c.r[3], ld32((c.r[20].w[0] + 60u)));
    set32(c.r[3], c.r[4].w[0] - c.r[3].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[20].w[0]);
    c.r[4].d[0] = ld8((c.r[3].w[0] + 93u));
    c.r[1].d[0] = c.r[4].sd[0] < 20ll ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002EFAB8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EF9C8u);  if (depth < kMaxDepth) unit_000B(c, 148u, depth + 1u); else { c.pc = 0x0012D600u; return; } if (c.pc != 0x002EF9C8u) [[unlikely]] return; }
L_002EF9C8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EF9DCu); set32(c.r[5], c.r[5].w[0] - 22976u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x00127458u; return; } if (c.pc != 0x002EF9DCu) [[unlikely]] return; }
L_002EF9DC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43EA0000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[12] = c.r[2].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x436B0000u);
    c.f[1] = ld32((c.r[1].w[0] - 22936u));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.f[0] = c.r[2].w[0];
    c.f[13] = c.r[3].w[0];
    c.f[14] = fp::cvt_s_w(c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    st32((c.r[18].w[0] + 16u), c.f[1]);
    c.f[0] = ld32((c.r[1].w[0] - 22936u));
    st32((c.r[18].w[0] + 20u), c.f[0]);
    st32((c.r[18].w[0] + 24u), c.r[5].w[0]);
    set32(c.r[25], ld32((c.r[18].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 20;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002EFA2Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002EFA2Cu) [[unlikely]] return; }
L_002EFA2C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EFA34u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x002EFA34u) [[unlikely]] return; }
L_002EFA34:
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EFA44u); st128((c.r[18].w[0] + 48u) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_007B(c, 402u, depth + 1u); else { c.pc = 0x002EFAE0u; return; } if (c.pc != 0x002EFA44u) [[unlikely]] return; }
L_002EFA44:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EFA50u); st32((c.r[18].w[0] + 60u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_007B(c, 402u, depth + 1u); else { c.pc = 0x002EFAE0u; return; } if (c.pc != 0x002EFA50u) [[unlikely]] return; }
L_002EFA50:
    st32((c.r[18].w[0] + 300u), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    set32(c.r[2], c.r[29].w[0] + 176u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    st32((c.r[18].w[0] + 352u), c.r[2].w[0]);
    set32(c.r[5], 0u + 1u);
    st32((c.r[18].w[0] + 356u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[18].w[0] + 304u), c.r[3].w[0]);
    c.r[6].d[0] = 0ull + 0ull;
    st32((c.r[18].w[0] + 308u), c.r[3].w[0]);
    set32(c.r[7], 0u - 1u);
    st32((c.r[18].w[0] + 312u), 0u);
    st32((c.r[18].w[0] + 316u), c.r[2].w[0]);
    set32(c.r[25], ld32((c.r[18].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 68u)));
    c.budget -= 18;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002EFA98u); set32(c.r[8], 0u + 2u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002EFA98u) [[unlikely]] return; }
L_002EFA98:
    set32(c.r[25], ld32((c.r[18].w[0] + 176u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u - 1u);
    set32(c.r[25], ld32((c.r[25].w[0] + 68u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002EFAB8u); c.r[8].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002EFAB8u) [[unlikely]] return; }
L_002EFAB8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 192u);  c.pc = t; return; }
L_002EFAE0:
    set32(c.r[3], ld32((c.r[4].w[0] + 208u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], 0u + 255u);  if (t) { goto L_002EFB0C; } }
    set32(c.r[4], ld32((c.r[4].w[0] + 40u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[2], 0u + 3u);  if (t) { goto L_002EFB00; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { goto L_002EFB08; } }
L_002EFB00:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[3].w[0] + 16u)));  if (t) { goto L_002EFB0C; } }
L_002EFB08:
    set32(c.r[2], 0u + 255u);
    c.budget -= 1;
L_002EFB0C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002EFB20:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] - 9944u);
    c.r[11].d[0] = ld64((c.r[2].w[0]));
    c.f[0] = ld32((c.r[2].w[0] + 8u));
    set32(c.r[13], c.r[29].w[0] + 16u);
    c.r[10].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[10], c.r[10].w[0] - 9928u);
    set32(c.r[12], c.r[29].w[0] + 28u);
    set32(c.r[6], 0u + 4u);
    set32(c.r[7], 0u + 14u);
    c.r[8].d[0] = 0ull + 0ull;
    st64((c.r[13].w[0]), c.r[11].d[0]);
    set32(c.r[2], c.r[5].w[0] << 2);
    st32((c.r[13].w[0] + 8u), c.f[0]);
    set32(c.r[3], c.r[2].w[0] + c.r[29].w[0]);
    c.r[11].sd[0] = static_cast<std::int16_t>(ld16((c.r[10].w[0])));
    set32(c.r[2], c.r[5].w[0] + c.r[29].w[0]);
    c.r[10].d[0] = ld8((c.r[10].w[0] + 2u));
    st16((c.r[12].w[0]), static_cast<std::uint16_t>(c.r[11].w[0]));
    st8((c.r[12].w[0] + 2u), static_cast<std::uint8_t>(c.r[10].w[0]));
    st32((c.r[4].w[0] + 48u), c.r[5].w[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 28u)));
    set32(c.r[4], ld32((c.r[3].w[0] + 16u)));
    c.budget -= 27;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EFB8Cu); c.r[9].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_001A(c, 267u, depth + 1u); else { c.pc = 0x0016A910u; return; } if (c.pc != 0x002EFB8Cu) [[unlikely]] return; }
L_002EFB8C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002EFBA0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EFBB4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0012(c, 39u, depth + 1u); else { c.pc = 0x001486F0u; return; } if (c.pc != 0x002EFBB4u) [[unlikely]] return; }
L_002EFBB4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] + 15648u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    st32((c.r[16].w[0] + 32u), 0u);
    st32((c.r[16].w[0] + 36u), 0u);
    st32((c.r[16].w[0] + 40u), 0u);
    set32(c.r[4], ld32((c.r[16].w[0] + 32u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 40u)));
    set32(c.r[3], c.r[2].w[0] - c.r[4].w[0]);
    c.budget -= 11;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 5));  if (t) { goto L_002EFBE8; } }
    set32(c.r[2], c.r[3].w[0] + 31u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 5));
    c.budget -= 2;
L_002EFBE8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002EFC48; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002EFC14; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002EFC08; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EFC08u); set32(c.r[4], c.r[4].w[0] - 16u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100210u; return; } if (c.pc != 0x002EFC08u) [[unlikely]] return; }
L_002EFC08:
    st32((c.r[16].w[0] + 40u), 0u);
    st32((c.r[16].w[0] + 36u), 0u);
    st32((c.r[16].w[0] + 32u), 0u);
    c.budget -= 3;
L_002EFC14:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EFC1Cu); set32(c.r[4], 0u + 48u);  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x001001F0u; return; } if (c.pc != 0x002EFC1Cu) [[unlikely]] return; }
L_002EFC1C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00180000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 176u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u + 32u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EFC38u); set32(c.r[8], 0u + 1u);  if (depth < kMaxDepth) unit_0000(c, 94u, depth + 1u); else { c.pc = 0x001008C0u; return; } if (c.pc != 0x002EFC38u) [[unlikely]] return; }
L_002EFC38:
    st32((c.r[16].w[0] + 32u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 32u)));
    set32(c.r[2], c.r[2].w[0] + 32u);
    st32((c.r[16].w[0] + 36u), c.r[2].w[0]);
    c.budget -= 4;
L_002EFC48:
    set32(c.r[2], ld32((c.r[16].w[0] + 32u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 22960u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 32u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EFC68u); st32((c.r[16].w[0] + 40u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0012(c, 45u, depth + 1u); else { c.pc = 0x001487B0u; return; } if (c.pc != 0x002EFC68u) [[unlikely]] return; }
L_002EFC68:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002EFC80:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002EFD04; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[17].w[0] + 32u);
    set32(c.r[3], c.r[3].w[0] + 15648u);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[17].w[0]), c.r[3].w[0]);  if (t) { goto L_002EFCE0; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_002EFCE4; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 32u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002EFCE0; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[2].w[0] - 16u);  if (t) { goto L_002EFCD4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EFCD4u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100210u; return; } if (c.pc != 0x002EFCD4u) [[unlikely]] return; }
L_002EFCD4:
    st32((c.r[17].w[0] + 40u), 0u);
    st32((c.r[17].w[0] + 36u), 0u);
    st32((c.r[17].w[0] + 32u), 0u);
    c.budget -= 3;
L_002EFCE0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002EFCE4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EFCECu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0012(c, 42u, depth + 1u); else { c.pc = 0x00148750u; return; } if (c.pc != 0x002EFCECu) [[unlikely]] return; }
L_002EFCEC:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_002EFD08; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EFD04u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x002EFD04u) [[unlikely]] return; }
L_002EFD04:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002EFD08:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002EFD20:
    set32(c.r[29], c.r[29].w[0] - 2304u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EFD44u); c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 59u, depth + 1u); else { c.pc = 0x00140BF0u; return; } if (c.pc != 0x002EFD44u) [[unlikely]] return; }
L_002EFD44:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 3840u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EFD58u); st32((c.r[29].w[0] + 2300u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x002EFD58u) [[unlikely]] return; }
L_002EFD58:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 2280u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EFD6Cu); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0017(c, 125u, depth + 1u); else { c.pc = 0x0015D850u; return; } if (c.pc != 0x002EFD6Cu) [[unlikely]] return; }
L_002EFD6C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EFD74u); set32(c.r[4], 0u + 12u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x002EFD74u) [[unlikely]] return; }
L_002EFD74:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002EFD88; } }
    set32(c.r[5], c.r[29].w[0] + 2280u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EFD88u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0017(c, 127u, depth + 1u); else { c.pc = 0x0015D890u; return; } if (c.pc != 0x002EFD88u) [[unlikely]] return; }
L_002EFD88:
    st32((c.r[29].w[0] + 2296u), c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 2296u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EFD98u); set32(c.r[5], c.r[18].w[0] + 32u);  if (depth < kMaxDepth) unit_0025(c, 350u, depth + 1u); else { c.pc = 0x00197140u; return; } if (c.pc != 0x002EFD98u) [[unlikely]] return; }
L_002EFD98:
    set32(c.r[3], 0u + 11264u);
    set32(c.r[2], 0u + 11267u);
    st16((c.r[29].w[0] + 2292u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[4], c.r[29].w[0] + 64u);
    st16((c.r[29].w[0] + 2294u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[5], c.r[29].w[0] + 2292u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EFDB8u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0020(c, 15u, depth + 1u); else { c.pc = 0x001801C0u; return; } if (c.pc != 0x002EFDB8u) [[unlikely]] return; }
L_002EFDB8:
    set32(c.r[5], c.r[18].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EFDC4u); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0020(c, 43u, depth + 1u); else { c.pc = 0x00180690u; return; } if (c.pc != 0x002EFDC4u) [[unlikely]] return; }
L_002EFDC4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EFDCCu); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0020(c, 46u, depth + 1u); else { c.pc = 0x00180720u; return; } if (c.pc != 0x002EFDCCu) [[unlikely]] return; }
L_002EFDCC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EFDD4u); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0020(c, 48u, depth + 1u); else { c.pc = 0x00180760u; return; } if (c.pc != 0x002EFDD4u) [[unlikely]] return; }
L_002EFDD4:
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EFDE0u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0020(c, 26u, depth + 1u); else { c.pc = 0x00180340u; return; } if (c.pc != 0x002EFDE0u) [[unlikely]] return; }
L_002EFDE0:
    set32(c.r[4], ld32((c.r[29].w[0] + 2296u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[5], 0u + 1u);  if (t) { goto L_002EFDF4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EFDF4u);  if (depth < kMaxDepth) unit_0017(c, 138u, depth + 1u); else { c.pc = 0x0015D9D0u; return; } if (c.pc != 0x002EFDF4u) [[unlikely]] return; }
L_002EFDF4:
    set32(c.r[4], c.r[29].w[0] + 2280u);
    set32(c.r[5], 0u - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EFE04u); st32((c.r[29].w[0] + 2296u), 0u);  if (depth < kMaxDepth) unit_0017(c, 138u, depth + 1u); else { c.pc = 0x0015D9D0u; return; } if (c.pc != 0x002EFE04u) [[unlikely]] return; }
L_002EFE04:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EFE0Cu); set32(c.r[4], ld32((c.r[29].w[0] + 2300u)));  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x002EFE0Cu) [[unlikely]] return; }
L_002EFE0C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 2304u);  c.pc = t; return; }
L_002EFE30:
    set32(c.r[2], ld32((c.r[4].w[0] + 32u)));
    set32(c.r[3], c.r[5].w[0] << 5);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = ld64((c.r[2].w[0] + 16u));  c.pc = t; return; }
L_002EFE50:
    st32((c.r[4].w[0]), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[4].w[0] + 4u), 0u);
    set32(c.r[2], 0u + 255u);
    st32((c.r[4].w[0] + 8u), 0u);
    st32((c.r[4].w[0] + 12u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[3], 0u + 14u);
    st32((c.r[4].w[0] + 20u), 0u);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0] + 24u), 0u);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 28u), c.r[3].w[0]);  c.pc = t; return; }
L_002EFE90:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002EFF38; } }
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002EFED0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002EFED0; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002EFED0u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002EFED0u) [[unlikely]] return; }
L_002EFED0:
    st32((c.r[17].w[0]), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002EFEF8; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002EFEF8; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002EFEF8u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002EFEF8u) [[unlikely]] return; }
L_002EFEF8:
    st32((c.r[17].w[0] + 4u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 8u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; c.r[2].d[0] = c.r[16].d[0] << 48;  if (t) { goto L_002EFF24; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002EFF20; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002EFF20u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002EFF20u) [[unlikely]] return; }
L_002EFF20:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.budget -= 1;
L_002EFF24:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0; st32((c.r[17].w[0] + 8u), 0u);  if (t) { goto L_002EFF38; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EFF38u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x002EFF38u) [[unlikely]] return; }
L_002EFF38:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002EFF50:
    set32(c.r[29], c.r[29].w[0] - 112u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    set32(c.r[2], 0u + 255u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[7].d[0] + 0ull;
    st32((c.r[29].w[0] + 4u), c.f[21]);
    c.r[16].d[0] = c.r[9].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    st32((c.r[4].w[0] + 12u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 16u), c.r[2].w[0]);
    st32((c.r[4].w[0] + 20u), c.r[18].w[0]);
    st32((c.r[4].w[0] + 24u), c.r[17].w[0]);
    st32((c.r[4].w[0] + 28u), c.r[8].w[0]);
    c.budget -= 23;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EFFACu); set32(c.r[4], 0u + 272u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x002EFFACu) [[unlikely]] return; }
L_002EFFAC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002EFFBC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EFFBCu); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 188u, depth + 1u); else { c.pc = 0x0015ED60u; return; } if (c.pc != 0x002EFFBCu) [[unlikely]] return; }
L_002EFFBC:
    st32((c.r[20].w[0]), c.r[2].w[0]);
    set32(c.r[7], 0u + 8u);
    set32(c.r[4], ld32((c.r[20].w[0])));
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EFFD8u); c.r[8].d[0] = c.r[7].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 190u, depth + 1u); else { c.pc = 0x0015EE00u; return; } if (c.pc != 0x002EFFD8u) [[unlikely]] return; }
L_002EFFD8:
    c.r[16].d[0] = c.r[16].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);  if (t) { [[clang::musttail]] return unit_007C(c, 3u, depth); } }
    c.f[0] = c.r[18].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[20] = c.r[2].w[0];
    set32(c.r[4], ld32((c.r[20].w[0])));
    c.f[2] = ld32((c.r[20].w[0] + 12u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = fp::cvt_s_w(c.f[0]);
    c.budget -= 7;
    [[clang::musttail]] return unit_007C(c, 1u, depth);
}

}
