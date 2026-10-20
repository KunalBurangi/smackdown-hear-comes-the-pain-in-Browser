#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_00B0[4096] = {
    1, 2, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0,
    0, 0, 6, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0,
    0, 0, 11, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 13, 0, 14, 0, 0, 0, 0, 15, 0, 16, 0, 17, 0, 18, 0, 0, 0, 0,
    0, 19, 0, 0, 0, 0, 20, 0, 21, 0, 0, 22, 0, 0, 23, 0, 0, 24, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0,
    0, 29, 0, 0, 30, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 33, 0, 34, 0, 0, 0, 0, 35, 0, 0, 36,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0,
    0, 0, 0, 41, 0, 42, 0, 43, 0, 0, 0, 44, 0, 0, 45, 0, 0, 46, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 48, 0, 49,
    0, 0, 50, 0, 0, 51, 0, 0, 52, 0, 0, 0, 0, 53, 0, 54, 0, 0, 55, 0, 0, 56, 0, 0, 57, 0, 0, 58, 0, 0, 59, 0,
    0, 60, 0, 0, 61, 0, 62, 0, 0, 0, 63, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 65, 0, 66, 0, 0, 0, 0, 67, 0, 0, 68,
    0, 0, 0, 69, 0, 0, 70, 0, 0, 71, 0, 0, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0,
    0, 74, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 82,
    0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0,
    0, 0, 86, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    89, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 91, 0, 92, 0, 0, 93, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 94, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 97,
    0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 102,
    0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 105, 0, 0, 106, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 107, 0, 108, 0, 0, 0, 0, 0, 0, 109, 0, 0, 110, 0, 0, 111, 0, 112, 0, 113, 0, 0, 0, 0, 114, 0, 0, 0, 0, 115,
    0, 116, 0, 0, 0, 0, 117, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 119, 0, 120, 0, 0, 121, 0, 0, 0, 0, 0, 0,
    122, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 123, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 126, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0,
    0, 0, 131, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 0, 0, 134, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 0, 0, 137, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 139, 0, 0, 0, 0, 140, 0, 0, 141, 0, 142, 0, 0, 0, 143, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 147, 0,
    0, 0, 0, 0, 148, 0, 149, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 156, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 0, 0, 0, 161, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 164, 0, 165, 0, 166, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 171, 0, 172, 0,
    0, 0, 173, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 174, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0,
    177, 0, 0, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    183, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 185, 0, 0, 0, 0, 0, 0, 186, 0, 0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0,
    190, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 193, 0, 0, 0, 0, 0, 194, 0, 0, 0,
    0, 0, 195, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 0, 0,
    199, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 201, 0, 202, 0, 0, 0, 0, 0, 0, 0, 0, 203, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 204, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 205, 0, 0, 0, 0, 0, 206, 0, 0, 207, 0, 0, 208, 0,
    209, 0, 0, 0, 0, 0, 210, 0, 0, 0, 0, 211, 0, 0, 0, 0, 0, 0, 0, 0, 212, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 213,
    0, 0, 0, 0, 0, 214, 0, 0, 0, 215, 0, 0, 0, 0, 216, 0, 0, 0, 0, 0, 217, 0, 0, 218, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 219, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 220, 0, 221, 0, 0, 0, 0, 0, 222, 0, 0, 0, 0, 0, 0, 0,
    0, 223, 0, 0, 0, 0, 224, 0, 0, 0, 0, 0, 0, 0, 225, 0, 0, 0, 0, 0, 0, 0, 226, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 227, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 228, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 229, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 230, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 231, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 232, 0, 0, 0, 0, 0, 0, 233, 0, 0, 0, 0, 0, 0, 0,
    234, 0, 0, 0, 0, 0, 0, 0, 235, 0, 0, 0, 0, 0, 0, 0, 0, 236, 0, 0, 0, 0, 237, 0, 0, 0, 0, 0, 0, 0, 238, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 239, 0, 0, 0, 0, 0, 0, 240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 241, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 242, 0, 0, 0, 0, 0, 0, 0, 243, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 244, 0, 0, 0, 0, 0, 0, 0, 0, 245, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 246, 0, 0, 0, 247, 0, 0, 0, 0, 0, 0,
    0, 0, 248, 0, 0, 0, 0, 0, 0, 0, 0, 0, 249, 0, 0, 0, 250, 0, 0, 0, 251, 0, 0, 0, 252, 0, 0, 0, 253, 0, 0, 0,
    254, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 256, 0, 0, 257, 0, 0, 0, 0, 0, 258, 0, 0, 0, 0, 0, 0, 259, 0, 0, 0, 0,
    0, 0, 260, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 261, 0, 0, 0, 262, 0, 263, 0, 0, 0, 0, 0,
    0, 0, 0, 264, 0, 0, 0, 0, 265, 0, 266, 0, 0, 0, 0, 0, 0, 0, 0, 267, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 268, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 269, 0, 0, 0, 0, 0, 0, 0, 0, 270, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 271, 0, 0, 0, 0, 0, 0,
    272, 0, 0, 0, 0, 273, 0, 0, 0, 0, 0, 0, 0, 0, 274, 0, 0, 0, 275, 0, 0, 0, 0, 0, 276, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 277, 0, 0, 0, 278, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 279, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 280, 0, 281, 0, 282, 0, 0, 0, 0, 0, 0, 283, 0, 0, 0, 0, 284, 0, 0, 0, 0, 0, 285, 0, 0, 0, 0, 0,
    0, 0, 286, 0, 0, 0, 0, 287, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 288, 0, 0, 0, 0, 0, 289, 0,
    0, 0, 0, 0, 290, 0, 291, 0, 0, 0, 0, 0, 292, 0, 0, 0, 0, 0, 293, 0, 294, 0, 0, 0, 295, 0, 0, 0, 0, 0, 296, 0,
    0, 0, 0, 0, 0, 0, 297, 0, 0, 0, 0, 0, 298, 0, 0, 0, 0, 0, 299, 0, 0, 0, 0, 0, 300, 0, 0, 0, 0, 0, 0, 0,
    301, 0, 0, 0, 0, 0, 0, 0, 302, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 303, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 304, 0, 0, 0, 0, 0, 0, 0,
    305, 0, 0, 0, 306, 0, 0, 0, 0, 0, 307, 0, 0, 0, 0, 308, 0, 0, 0, 309, 0, 0, 0, 310, 0, 0, 0, 311, 0, 0, 0, 312,
    0, 0, 0, 313, 0, 0, 0, 314, 0, 0, 0, 315, 0, 0, 0, 316, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 317, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 318, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 319, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 320, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    321, 0, 0, 0, 0, 0, 322, 0, 0, 0, 323, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    324, 0, 0, 0, 0, 325, 0, 0, 0, 0, 0, 0, 0, 0, 326, 0, 0, 0, 0, 0, 327, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 328, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 329, 0, 0, 0, 0, 0, 0, 0, 0, 0, 330, 0, 0, 0, 0, 0, 0, 0, 0, 331, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    332, 0, 0, 0, 0, 0, 333, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 334, 0, 0, 0, 0, 0, 0, 0, 335, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 336, 0, 0, 0, 337, 0, 0, 0, 0, 0, 338, 0, 0, 0, 0, 0,
    339, 0, 0, 0, 340, 0, 0, 0, 341, 0, 0, 0, 0, 0, 0, 342, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 343, 0, 0, 0, 0, 0, 0, 0, 344, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 345, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 346, 0, 0, 0, 0, 0, 347, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 348, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 349, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 350, 0, 0, 0, 0, 0, 0, 0, 0, 351, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 352, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 353, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    354, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 355, 0, 0, 0, 356, 0, 0, 0, 0, 0, 0, 0, 357, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 358, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 359, 0, 360, 0, 361, 0, 0, 0, 362,
    0, 0, 0, 0, 0, 363, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 364, 0, 0, 0, 0, 0, 0, 0, 0, 0, 365, 0, 0, 0,
    0, 0, 0, 366, 0, 0, 367, 0, 0, 0, 0, 0, 368, 0, 0, 0, 0, 0, 0, 369, 0, 370, 0, 371, 0, 372, 0, 0, 0, 0, 0, 0,
    0, 0, 373, 0, 0, 0, 0, 0, 374, 0, 0, 0, 0, 0, 375, 0, 0, 0, 0, 0, 0, 376, 0, 0, 377, 0, 0, 0, 0, 378, 0, 0,
    0, 0, 0, 0, 379, 0, 0, 0, 0, 0, 0, 0, 0, 0, 380, 0, 381, 0, 0, 0, 0, 0, 382, 0, 0, 0, 0, 0, 0, 383, 0, 0,
    384, 0, 0, 0, 0, 385, 0, 0, 0, 0, 0, 0, 386, 0, 0, 0, 0, 0, 0, 387, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 388, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 389, 0, 0, 0, 0, 0, 0, 0,
    390, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 391, 0, 0, 0, 0, 0, 0, 0, 392, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 393, 0, 0, 0, 0, 0, 0, 0, 394, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 395, 0, 0, 0, 0, 0, 0, 0, 396, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_00B0(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_003C0000;
    case 2u: goto L_003C0004;
    case 3u: goto L_003C0020;
    case 4u: goto L_003C0050;
    case 5u: goto L_003C0068;
    case 6u: goto L_003C0088;
    case 7u: goto L_003C00A0;
    case 8u: goto L_003C00B8;
    case 9u: goto L_003C00D0;
    case 10u: goto L_003C00F0;
    case 11u: goto L_003C0108;
    case 12u: goto L_003C0120;
    case 13u: goto L_003C0138;
    case 14u: goto L_003C0140;
    case 15u: goto L_003C0154;
    case 16u: goto L_003C015C;
    case 17u: goto L_003C0164;
    case 18u: goto L_003C016C;
    case 19u: goto L_003C0184;
    case 20u: goto L_003C0198;
    case 21u: goto L_003C01A0;
    case 22u: goto L_003C01AC;
    case 23u: goto L_003C01B8;
    case 24u: goto L_003C01C4;
    case 25u: goto L_003C01C8;
    case 26u: goto L_003C01F0;
    case 27u: goto L_003C0244;
    case 28u: goto L_003C026C;
    case 29u: goto L_003C0284;
    case 30u: goto L_003C0290;
    case 31u: goto L_003C02A4;
    case 32u: goto L_003C02C4;
    case 33u: goto L_003C02D4;
    case 34u: goto L_003C02DC;
    case 35u: goto L_003C02F0;
    case 36u: goto L_003C02FC;
    case 37u: goto L_003C0360;
    case 38u: goto L_003C038C;
    case 39u: goto L_003C03B8;
    case 40u: goto L_003C03F8;
    case 41u: goto L_003C040C;
    case 42u: goto L_003C0414;
    case 43u: goto L_003C041C;
    case 44u: goto L_003C042C;
    case 45u: goto L_003C0438;
    case 46u: goto L_003C0444;
    case 47u: goto L_003C0458;
    case 48u: goto L_003C0474;
    case 49u: goto L_003C047C;
    case 50u: goto L_003C0488;
    case 51u: goto L_003C0494;
    case 52u: goto L_003C04A0;
    case 53u: goto L_003C04B4;
    case 54u: goto L_003C04BC;
    case 55u: goto L_003C04C8;
    case 56u: goto L_003C04D4;
    case 57u: goto L_003C04E0;
    case 58u: goto L_003C04EC;
    case 59u: goto L_003C04F8;
    case 60u: goto L_003C0504;
    case 61u: goto L_003C0510;
    case 62u: goto L_003C0518;
    case 63u: goto L_003C0528;
    case 64u: goto L_003C0538;
    case 65u: goto L_003C0554;
    case 66u: goto L_003C055C;
    case 67u: goto L_003C0570;
    case 68u: goto L_003C057C;
    case 69u: goto L_003C058C;
    case 70u: goto L_003C0598;
    case 71u: goto L_003C05A4;
    case 72u: goto L_003C05C8;
    case 73u: goto L_003C05F8;
    case 74u: goto L_003C0604;
    case 75u: goto L_003C0624;
    case 76u: goto L_003C0638;
    case 77u: goto L_003C0668;
    case 78u: goto L_003C0694;
    case 79u: goto L_003C06A8;
    case 80u: goto L_003C06C8;
    case 81u: goto L_003C06EC;
    case 82u: goto L_003C06FC;
    case 83u: goto L_003C0714;
    case 84u: goto L_003C0740;
    case 85u: goto L_003C0768;
    case 86u: goto L_003C0788;
    case 87u: goto L_003C0798;
    case 88u: goto L_003C07C0;
    case 89u: goto L_003C0800;
    case 90u: goto L_003C083C;
    case 91u: goto L_003C084C;
    case 92u: goto L_003C0854;
    case 93u: goto L_003C0860;
    case 94u: goto L_003C0888;
    case 95u: goto L_003C08C0;
    case 96u: goto L_003C08E0;
    case 97u: goto L_003C08FC;
    case 98u: goto L_003C0914;
    case 99u: goto L_003C0930;
    case 100u: goto L_003C0950;
    case 101u: goto L_003C0960;
    case 102u: goto L_003C097C;
    case 103u: goto L_003C0994;
    case 104u: goto L_003C09B4;
    case 105u: goto L_003C09C0;
    case 106u: goto L_003C09CC;
    case 107u: goto L_003C0A08;
    case 108u: goto L_003C0A10;
    case 109u: goto L_003C0A2C;
    case 110u: goto L_003C0A38;
    case 111u: goto L_003C0A44;
    case 112u: goto L_003C0A4C;
    case 113u: goto L_003C0A54;
    case 114u: goto L_003C0A68;
    case 115u: goto L_003C0A7C;
    case 116u: goto L_003C0A84;
    case 117u: goto L_003C0A98;
    case 118u: goto L_003C0AAC;
    case 119u: goto L_003C0AD0;
    case 120u: goto L_003C0AD8;
    case 121u: goto L_003C0AE4;
    case 122u: goto L_003C0B00;
    case 123u: goto L_003C0B38;
    case 124u: goto L_003C0B48;
    case 125u: goto L_003C0BB0;
    case 126u: goto L_003C0BE8;
    case 127u: goto L_003C0C10;
    case 128u: goto L_003C0C9C;
    case 129u: goto L_003C0CBC;
    case 130u: goto L_003C0CE4;
    case 131u: goto L_003C0D08;
    case 132u: goto L_003C0D24;
    case 133u: goto L_003C0D50;
    case 134u: goto L_003C0D74;
    case 135u: goto L_003C0DA4;
    case 136u: goto L_003C0DD0;
    case 137u: goto L_003C0DF4;
    case 138u: goto L_003C0E28;
    case 139u: goto L_003C0E30;
    case 140u: goto L_003C0E44;
    case 141u: goto L_003C0E50;
    case 142u: goto L_003C0E58;
    case 143u: goto L_003C0E68;
    case 144u: goto L_003C0EB0;
    case 145u: goto L_003C0EC8;
    case 146u: goto L_003C0EE0;
    case 147u: goto L_003C0EF8;
    case 148u: goto L_003C0F10;
    case 149u: goto L_003C0F18;
    case 150u: goto L_003C0F30;
    case 151u: goto L_003C0FA0;
    case 152u: goto L_003C0FC8;
    case 153u: goto L_003C0FF0;
    case 154u: goto L_003C1018;
    case 155u: goto L_003C106C;
    case 156u: goto L_003C1094;
    case 157u: goto L_003C10A4;
    case 158u: goto L_003C10C0;
    case 159u: goto L_003C10E8;
    case 160u: goto L_003C1110;
    case 161u: goto L_003C1138;
    case 162u: goto L_003C1148;
    case 163u: goto L_003C1168;
    case 164u: goto L_003C11A0;
    case 165u: goto L_003C11A8;
    case 166u: goto L_003C11B0;
    case 167u: goto L_003C11E0;
    case 168u: goto L_003C1210;
    case 169u: goto L_003C1230;
    case 170u: goto L_003C1258;
    case 171u: goto L_003C1270;
    case 172u: goto L_003C1278;
    case 173u: goto L_003C1288;
    case 174u: goto L_003C12F8;
    case 175u: goto L_003C1338;
    case 176u: goto L_003C1360;
    case 177u: goto L_003C1380;
    case 178u: goto L_003C13A8;
    case 179u: goto L_003C13BC;
    case 180u: goto L_003C13E0;
    case 181u: goto L_003C1410;
    case 182u: goto L_003C1430;
    case 183u: goto L_003C1480;
    case 184u: goto L_003C14B8;
    case 185u: goto L_003C1528;
    case 186u: goto L_003C1544;
    case 187u: goto L_003C155C;
    case 188u: goto L_003C15B0;
    case 189u: goto L_003C15E0;
    case 190u: goto L_003C1600;
    case 191u: goto L_003C1638;
    case 192u: goto L_003C1660;
    case 193u: goto L_003C16D8;
    case 194u: goto L_003C16F0;
    case 195u: goto L_003C1708;
    case 196u: goto L_003C1724;
    case 197u: goto L_003C18A0;
    case 198u: goto L_003C18E0;
    case 199u: goto L_003C1900;
    case 200u: goto L_003C1940;
    case 201u: goto L_003C19B0;
    case 202u: goto L_003C19B8;
    case 203u: goto L_003C19DC;
    case 204u: goto L_003C1A10;
    case 205u: goto L_003C1A48;
    case 206u: goto L_003C1A60;
    case 207u: goto L_003C1A6C;
    case 208u: goto L_003C1A78;
    case 209u: goto L_003C1A80;
    case 210u: goto L_003C1A98;
    case 211u: goto L_003C1AAC;
    case 212u: goto L_003C1AD0;
    case 213u: goto L_003C1AFC;
    case 214u: goto L_003C1B14;
    case 215u: goto L_003C1B24;
    case 216u: goto L_003C1B38;
    case 217u: goto L_003C1B50;
    case 218u: goto L_003C1B5C;
    case 219u: goto L_003C1B90;
    case 220u: goto L_003C1BC0;
    case 221u: goto L_003C1BC8;
    case 222u: goto L_003C1BE0;
    case 223u: goto L_003C1C04;
    case 224u: goto L_003C1C18;
    case 225u: goto L_003C1C38;
    case 226u: goto L_003C1C58;
    case 227u: goto L_003C1C9C;
    case 228u: goto L_003C1CD0;
    case 229u: goto L_003C1D30;
    case 230u: goto L_003C1D90;
    case 231u: goto L_003C1E10;
    case 232u: goto L_003C1E44;
    case 233u: goto L_003C1E60;
    case 234u: goto L_003C1E80;
    case 235u: goto L_003C1EA0;
    case 236u: goto L_003C1EC4;
    case 237u: goto L_003C1ED8;
    case 238u: goto L_003C1EF8;
    case 239u: goto L_003C1F2C;
    case 240u: goto L_003C1F48;
    case 241u: goto L_003C1F78;
    case 242u: goto L_003C1FB8;
    case 243u: goto L_003C1FD8;
    case 244u: goto L_003C2004;
    case 245u: goto L_003C2028;
    case 246u: goto L_003C2054;
    case 247u: goto L_003C2064;
    case 248u: goto L_003C2088;
    case 249u: goto L_003C20B0;
    case 250u: goto L_003C20C0;
    case 251u: goto L_003C20D0;
    case 252u: goto L_003C20E0;
    case 253u: goto L_003C20F0;
    case 254u: goto L_003C2100;
    case 255u: goto L_003C2110;
    case 256u: goto L_003C212C;
    case 257u: goto L_003C2138;
    case 258u: goto L_003C2150;
    case 259u: goto L_003C216C;
    case 260u: goto L_003C2188;
    case 261u: goto L_003C21D0;
    case 262u: goto L_003C21E0;
    case 263u: goto L_003C21E8;
    case 264u: goto L_003C220C;
    case 265u: goto L_003C2220;
    case 266u: goto L_003C2228;
    case 267u: goto L_003C224C;
    case 268u: goto L_003C22D0;
    case 269u: goto L_003C230C;
    case 270u: goto L_003C2330;
    case 271u: goto L_003C2364;
    case 272u: goto L_003C2380;
    case 273u: goto L_003C2394;
    case 274u: goto L_003C23B8;
    case 275u: goto L_003C23C8;
    case 276u: goto L_003C23E0;
    case 277u: goto L_003C2408;
    case 278u: goto L_003C2418;
    case 279u: goto L_003C2464;
    case 280u: goto L_003C2490;
    case 281u: goto L_003C2498;
    case 282u: goto L_003C24A0;
    case 283u: goto L_003C24BC;
    case 284u: goto L_003C24D0;
    case 285u: goto L_003C24E8;
    case 286u: goto L_003C2508;
    case 287u: goto L_003C251C;
    case 288u: goto L_003C2560;
    case 289u: goto L_003C2578;
    case 290u: goto L_003C2590;
    case 291u: goto L_003C2598;
    case 292u: goto L_003C25B0;
    case 293u: goto L_003C25C8;
    case 294u: goto L_003C25D0;
    case 295u: goto L_003C25E0;
    case 296u: goto L_003C25F8;
    case 297u: goto L_003C2618;
    case 298u: goto L_003C2630;
    case 299u: goto L_003C2648;
    case 300u: goto L_003C2660;
    case 301u: goto L_003C2680;
    case 302u: goto L_003C26A0;
    case 303u: goto L_003C26E8;
    case 304u: goto L_003C2760;
    case 305u: goto L_003C2780;
    case 306u: goto L_003C2790;
    case 307u: goto L_003C27A8;
    case 308u: goto L_003C27BC;
    case 309u: goto L_003C27CC;
    case 310u: goto L_003C27DC;
    case 311u: goto L_003C27EC;
    case 312u: goto L_003C27FC;
    case 313u: goto L_003C280C;
    case 314u: goto L_003C281C;
    case 315u: goto L_003C282C;
    case 316u: goto L_003C283C;
    case 317u: goto L_003C2878;
    case 318u: goto L_003C2940;
    case 319u: goto L_003C299C;
    case 320u: goto L_003C2A28;
    case 321u: goto L_003C2A80;
    case 322u: goto L_003C2A98;
    case 323u: goto L_003C2AA8;
    case 324u: goto L_003C2B00;
    case 325u: goto L_003C2B14;
    case 326u: goto L_003C2B38;
    case 327u: goto L_003C2B50;
    case 328u: goto L_003C2BB0;
    case 329u: goto L_003C2C08;
    case 330u: goto L_003C2C30;
    case 331u: goto L_003C2C54;
    case 332u: goto L_003C2C80;
    case 333u: goto L_003C2C98;
    case 334u: goto L_003C2CD0;
    case 335u: goto L_003C2CF0;
    case 336u: goto L_003C2D40;
    case 337u: goto L_003C2D50;
    case 338u: goto L_003C2D68;
    case 339u: goto L_003C2D80;
    case 340u: goto L_003C2D90;
    case 341u: goto L_003C2DA0;
    case 342u: goto L_003C2DBC;
    case 343u: goto L_003C2E10;
    case 344u: goto L_003C2E30;
    case 345u: goto L_003C2E90;
    case 346u: goto L_003C2F18;
    case 347u: goto L_003C2F30;
    case 348u: goto L_003C2FD0;
    case 349u: goto L_003C305C;
    case 350u: goto L_003C308C;
    case 351u: goto L_003C30B0;
    case 352u: goto L_003C30E0;
    case 353u: goto L_003C3260;
    case 354u: goto L_003C3300;
    case 355u: goto L_003C3388;
    case 356u: goto L_003C3398;
    case 357u: goto L_003C33B8;
    case 358u: goto L_003C3428;
    case 359u: goto L_003C345C;
    case 360u: goto L_003C3464;
    case 361u: goto L_003C346C;
    case 362u: goto L_003C347C;
    case 363u: goto L_003C3494;
    case 364u: goto L_003C3548;
    case 365u: goto L_003C3570;
    case 366u: goto L_003C358C;
    case 367u: goto L_003C3598;
    case 368u: goto L_003C35B0;
    case 369u: goto L_003C35CC;
    case 370u: goto L_003C35D4;
    case 371u: goto L_003C35DC;
    case 372u: goto L_003C35E4;
    case 373u: goto L_003C3608;
    case 374u: goto L_003C3620;
    case 375u: goto L_003C3638;
    case 376u: goto L_003C3654;
    case 377u: goto L_003C3660;
    case 378u: goto L_003C3674;
    case 379u: goto L_003C3690;
    case 380u: goto L_003C36B8;
    case 381u: goto L_003C36C0;
    case 382u: goto L_003C36D8;
    case 383u: goto L_003C36F4;
    case 384u: goto L_003C3700;
    case 385u: goto L_003C3714;
    case 386u: goto L_003C3730;
    case 387u: goto L_003C374C;
    case 388u: goto L_003C37EC;
    case 389u: goto L_003C38E0;
    case 390u: goto L_003C3900;
    case 391u: goto L_003C3AD0;
    case 392u: goto L_003C3AF0;
    case 393u: goto L_003C3CC0;
    case 394u: goto L_003C3CE0;
    case 395u: goto L_003C3EB0;
    case 396u: goto L_003C3ED0;
    default: bad_entry(c, 0x003C0000u); return;
    }
L_003C0000:
    set32(c.r[5], c.r[5].w[0] - c.r[16].w[0]);
    c.budget -= 1;
L_003C0004:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[19].d[0] == 0ull; set32(c.r[3], 0u - 1u);  if (t) { goto L_003C0024; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 32u)));
    set32(c.r[6], c.r[29].w[0] + 66u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C0020u); set32(c.r[5], ld32((c.r[29].w[0] + 36u)));  if (depth < kMaxDepth) unit_00AC(c, 162u, depth + 1u); else { c.pc = 0x003B1F90u; return; } if (c.pc != 0x003C0020u) [[unlikely]] return; }
L_003C0020:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_003C0024:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 64u)));
    c.r[22].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 66u)));
    c.budget -= 4;
    { const bool t = c.r[19].d[0] == 0ull; set32(c.r[16], c.r[16].w[0] + c.r[2].w[0]);  if (t) { goto L_003C0070; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; c.r[6].d[0] = c.r[21].d[0] + 0ull;  if (t) { goto L_003C00D8; } }
    set32(c.r[3], ld32((c.r[17].w[0])));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] + 28u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003C0050u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003C0050u) [[unlikely]] return; }
L_003C0050:
    set32(c.r[3], ld32((c.r[17].w[0])));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    set32(c.r[2], ld32((c.r[3].w[0] + 28u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003C0068u); c.r[6].d[0] = c.r[29].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003C0068u) [[unlikely]] return; }
L_003C0068:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_003C017C; } }
L_003C0070:
    set32(c.r[3], ld32((c.r[17].w[0])));
    c.r[6].d[0] = c.r[21].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] + 28u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003C0088u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003C0088u) [[unlikely]] return; }
L_003C0088:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[16], c.r[29].w[0] + 16u);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C00A0u); c.r[7].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B4(c, 230u, depth + 1u); else { c.pc = 0x003D2388u; return; } if (c.pc != 0x003C00A0u) [[unlikely]] return; }
L_003C00A0:
    set32(c.r[3], ld32((c.r[17].w[0])));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] + 32u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003C00B8u); c.r[6].d[0] = c.r[29].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003C00B8u) [[unlikely]] return; }
L_003C00B8:
    set32(c.r[3], ld32((c.r[17].w[0])));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] + 28u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003C00D0u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003C00D0u) [[unlikely]] return; }
L_003C00D0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003C0138; } }
L_003C00D8:
    set32(c.r[3], ld32((c.r[17].w[0])));
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] + 32u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003C00F0u); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003C00F0u) [[unlikely]] return; }
L_003C00F0:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[16], c.r[29].w[0] + 48u);
    c.r[5].d[0] = c.r[22].d[0] + 0ull;
    c.r[6].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C0108u); c.r[7].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B4(c, 230u, depth + 1u); else { c.pc = 0x003D2388u; return; } if (c.pc != 0x003C0108u) [[unlikely]] return; }
L_003C0108:
    set32(c.r[3], ld32((c.r[17].w[0])));
    c.r[6].d[0] = c.r[21].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] + 32u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003C0120u); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003C0120u) [[unlikely]] return; }
L_003C0120:
    set32(c.r[3], ld32((c.r[17].w[0])));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] + 28u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003C0138u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003C0138u) [[unlikely]] return; }
L_003C0138:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C0140u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 214u, depth + 1u); else { c.pc = 0x003B9818u; return; } if (c.pc != 0x003C0140u) [[unlikely]] return; }
L_003C0140:
    set32(c.r[3], ld32((c.r[20].w[0] + 164u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C0154u); st32((c.r[20].w[0] + 164u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_00AE(c, 135u, depth + 1u); else { c.pc = 0x003B8D60u; return; } if (c.pc != 0x003C0154u) [[unlikely]] return; }
L_003C0154:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C015Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 133u, depth + 1u); else { c.pc = 0x003B8D30u; return; } if (c.pc != 0x003C015Cu) [[unlikely]] return; }
L_003C015C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C0164u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 209u, depth + 1u); else { c.pc = 0x003B9770u; return; } if (c.pc != 0x003C0164u) [[unlikely]] return; }
L_003C0164:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C016Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 125u, depth + 1u); else { c.pc = 0x003B8C68u; return; } if (c.pc != 0x003C016Cu) [[unlikely]] return; }
L_003C016C:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[3].d[0]) { set32(c.r[5], ld32((c.r[20].w[0] + 72u)));  goto L_003C0190; }
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 1;
L_003C017C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C0184u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00AF(c, 392u, depth + 1u); else { c.pc = 0x003BF2F0u; return; } if (c.pc != 0x003C0184u) [[unlikely]] return; }
L_003C0184:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0] + 80u));  if (t) { goto L_003C01C8; } }
    c.budget -= 1;
L_003C0190:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C0198u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 129u, depth + 1u); else { c.pc = 0x003B8CC0u; return; } if (c.pc != 0x003C0198u) [[unlikely]] return; }
L_003C0198:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C01A0u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 235u, depth + 1u); else { c.pc = 0x003B9950u; return; } if (c.pc != 0x003C01A0u) [[unlikely]] return; }
L_003C01A0:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C01ACu); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 223u, depth + 1u); else { c.pc = 0x003B9890u; return; } if (c.pc != 0x003C01ACu) [[unlikely]] return; }
L_003C01AC:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C01B8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 227u, depth + 1u); else { c.pc = 0x003B98B0u; return; } if (c.pc != 0x003C01B8u) [[unlikely]] return; }
L_003C01B8:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C01C4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 225u, depth + 1u); else { c.pc = 0x003B98A0u; return; } if (c.pc != 0x003C01C4u) [[unlikely]] return; }
L_003C01C4:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 80u));
    c.budget -= 1;
L_003C01C8:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 88u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 96u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 104u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 112u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 120u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 128u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 136u));
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_003C01F0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 48u), c.r[16].d[0]);
    set32(c.r[16], 0u + 2048u);
    st64((c.r[29].w[0] + 56u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 64u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 72u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 80u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 88u), c.r[31].d[0]);
    st32((c.r[29].w[0] + 32u), 0u);
    set32(c.r[19], ld32((c.r[17].w[0] + 4u)));
    c.r[2].d[0] = ld8((c.r[17].w[0] + 2u));
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 15;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[29].w[0] + 36u), 0u);  if (t) { goto L_003C0288; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 172u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_003C0288; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C0244u); set32(c.r[4], ld32((c.r[17].w[0] + 8u)));  if (depth < kMaxDepth) unit_00AF(c, 53u, depth + 1u); else { c.pc = 0x003BC700u; return; } if (c.pc != 0x003C0244u) [[unlikely]] return; }
L_003C0244:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[3].d[0]) { c.r[16].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_003C05AC; }
    set32(c.r[4], ld32((c.r[17].w[0] + 16u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[5], ld32((c.r[17].w[0] + 180u)));  goto L_003C0270; }
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0] + 20u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003C026Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003C026Cu) [[unlikely]] return; }
L_003C026C:
    set32(c.r[5], ld32((c.r[17].w[0] + 180u)));
    c.budget -= 1;
L_003C0270:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[17].w[0] + 184u)));
    set32(c.r[7], ld32((c.r[17].w[0] + 188u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C0284u); set32(c.r[8], ld32((c.r[17].w[0] + 192u)));  if (depth < kMaxDepth) unit_00AF(c, 237u, depth + 1u); else { c.pc = 0x003BDDF0u; return; } if (c.pc != 0x003C0284u) [[unlikely]] return; }
L_003C0284:
    st8((c.r[17].w[0] + 172u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_003C0288:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C0290u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 125u, depth + 1u); else { c.pc = 0x003B8C68u; return; } if (c.pc != 0x003C0290u) [[unlikely]] return; }
L_003C0290:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { c.r[16].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_003C05AC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C02A4u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 231u, depth + 1u); else { c.pc = 0x003B98F0u; return; } if (c.pc != 0x003C02A4u) [[unlikely]] return; }
L_003C02A4:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 3u)));
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].d[0] = c.r[5].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; c.r[6].d[0] = c.r[29].d[0] + 0ull;  if (t) { goto L_003C02E8; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C02C4u); set32(c.r[7], 0u + 16u);  if (depth < kMaxDepth) unit_00AC(c, 215u, depth + 1u); else { c.pc = 0x003B3BC0u; return; } if (c.pc != 0x003C02C4u) [[unlikely]] return; }
L_003C02C4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[4], c.r[4].w[0] + 14016u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C02D4u); c.r[5].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 207u, depth + 1u); else { c.pc = 0x003B3A48u; return; } if (c.pc != 0x003C02D4u) [[unlikely]] return; }
L_003C02D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C02DCu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AF(c, 259u, depth + 1u); else { c.pc = 0x003BDFE0u; return; } if (c.pc != 0x003C02DCu) [[unlikely]] return; }
L_003C02DC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_003C05AC; } }
    c.budget -= 1;
L_003C02E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C02F0u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 230u, depth + 1u); else { c.pc = 0x003B98D8u; return; } if (c.pc != 0x003C02F0u) [[unlikely]] return; }
L_003C02F0:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C02FCu); c.r[20].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 237u, depth + 1u); else { c.pc = 0x003B9980u; return; } if (c.pc != 0x003C02FCu) [[unlikely]] return; }
L_003C02FC:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[18].sd[0] <= 0) { set32(c.r[3], ld32((c.r[17].w[0] + 56u)));  goto L_003C0330; }
    set32(c.r[2], ld32((c.r[17].w[0] + 56u)));
    mmi::div(c, 0, c.r[20].w[0], c.r[2].w[0]);
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { breakpoint(c, 0x003C0314u);  goto L_003C0318; }
L_003C0318:
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 72u), c.r[3].w[0]);  if (t) { goto L_003C0358; } }
    c.budget -= 1;
L_003C0330:
    mmi::div(c, 0, c.r[20].w[0], c.r[3].w[0]);
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { breakpoint(c, 0x003C0338u);  goto L_003C033C; }
L_003C033C:
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[4].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[2].w[0] >> 31);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    st32((c.r[17].w[0] + 72u), c.r[2].w[0]);
    c.budget -= 7;
L_003C0358:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C0360u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 233u, depth + 1u); else { c.pc = 0x003B9920u; return; } if (c.pc != 0x003C0360u) [[unlikely]] return; }
L_003C0360:
    set32(c.r[5], ld32((c.r[17].w[0] + 72u)));
    set32(c.r[2], c.r[2].w[0] << 1);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    if (c.r[2].d[0] == 0ull) { breakpoint(c, 0x003C0374u);  goto L_003C0378; }
L_003C0378:
    mmi::div(c, 0, c.r[5].w[0], c.r[2].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    mmi::mult(c, 0, c.r[5].w[0], c.r[2].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C038Cu); st32((c.r[17].w[0] + 72u), c.r[5].w[0]);  if (depth < kMaxDepth) unit_00AE(c, 129u, depth + 1u); else { c.pc = 0x003B8CC0u; return; } if (c.pc != 0x003C038Cu) [[unlikely]] return; }
L_003C038C:
    c.budget -= 2;
    if (c.r[18].sd[0] <= 0) { set32(c.r[4], ld32((c.r[17].w[0] + 8u)));  goto L_003C0460; }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 2u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_003C03B0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 80u), 0u);  if (t) { goto L_003C040C; } }
    c.budget -= 1;
L_003C03B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C03B8u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 242u, depth + 1u); else { c.pc = 0x003B9A10u; return; } if (c.pc != 0x003C03B8u) [[unlikely]] return; }
L_003C03B8:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { breakpoint(c, 0x003C03BCu);  goto L_003C03C0; }
L_003C03C0:
    mmi::div(c, 0, c.r[2].w[0], c.r[16].w[0]);
    set32(c.r[2], c.r[2].w[0] + 2047u);
    c.r[3].d[0] = c.hi.d[0];
    mmi::div(c, 0, c.r[2].w[0], c.r[16].w[0]);
    set32(c.r[3], c.r[16].w[0] - c.r[3].w[0]);
    st32((c.r[17].w[0] + 80u), c.r[3].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    mmi::div(c, 0, c.r[3].w[0], c.r[16].w[0]);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.hi.d[0];
    st32((c.r[17].w[0] + 80u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 8u)));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C03F8u); st32((c.r[17].w[0] + 140u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00AF(c, 72u, depth + 1u); else { c.pc = 0x003BC8F0u; return; } if (c.pc != 0x003C03F8u) [[unlikely]] return; }
L_003C03F8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x003C0000u);
    set32(c.r[4], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[5], c.r[5].w[0] - 848u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C040Cu); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AF(c, 71u, depth + 1u); else { c.pc = 0x003BC8E0u; return; } if (c.pc != 0x003C040Cu) [[unlikely]] return; }
L_003C040C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C0414u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 241u, depth + 1u); else { c.pc = 0x003B99F8u; return; } if (c.pc != 0x003C0414u) [[unlikely]] return; }
L_003C0414:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C041Cu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 239u, depth + 1u); else { c.pc = 0x003B99B0u; return; } if (c.pc != 0x003C041Cu) [[unlikely]] return; }
L_003C041C:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    st32((c.r[17].w[0] + 144u), c.r[2].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C042Cu); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 223u, depth + 1u); else { c.pc = 0x003B9890u; return; } if (c.pc != 0x003C042Cu) [[unlikely]] return; }
L_003C042C:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C0438u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 227u, depth + 1u); else { c.pc = 0x003B98B0u; return; } if (c.pc != 0x003C0438u) [[unlikely]] return; }
L_003C0438:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C0444u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 225u, depth + 1u); else { c.pc = 0x003B98A0u; return; } if (c.pc != 0x003C0444u) [[unlikely]] return; }
L_003C0444:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x003C0000u);
    set32(c.r[5], c.r[5].w[0] - 1432u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C0458u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 222u, depth + 1u); else { c.pc = 0x003B9880u; return; } if (c.pc != 0x003C0458u) [[unlikely]] return; }
L_003C0458:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003C04B4; } }
L_003C0460:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003C0474; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C0474u); c.r[5].d[0] = c.r[5].d[0] | 65535ull;  if (depth < kMaxDepth) unit_00AF(c, 72u, depth + 1u); else { c.pc = 0x003BC8F0u; return; } if (c.pc != 0x003C0474u) [[unlikely]] return; }
L_003C0474:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C047Cu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 235u, depth + 1u); else { c.pc = 0x003B9950u; return; } if (c.pc != 0x003C047Cu) [[unlikely]] return; }
L_003C047C:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C0488u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 223u, depth + 1u); else { c.pc = 0x003B9890u; return; } if (c.pc != 0x003C0488u) [[unlikely]] return; }
L_003C0488:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C0494u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 227u, depth + 1u); else { c.pc = 0x003B98B0u; return; } if (c.pc != 0x003C0494u) [[unlikely]] return; }
L_003C0494:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C04A0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 225u, depth + 1u); else { c.pc = 0x003B98A0u; return; } if (c.pc != 0x003C04A0u) [[unlikely]] return; }
L_003C04A0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x003C0000u);
    set32(c.r[5], c.r[5].w[0] - 248u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C04B4u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 222u, depth + 1u); else { c.pc = 0x003B9880u; return; } if (c.pc != 0x003C04B4u) [[unlikely]] return; }
L_003C04B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C04BCu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 230u, depth + 1u); else { c.pc = 0x003B98D8u; return; } if (c.pc != 0x003C04BCu) [[unlikely]] return; }
L_003C04BC:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C04C8u); c.r[20].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 231u, depth + 1u); else { c.pc = 0x003B98F0u; return; } if (c.pc != 0x003C04C8u) [[unlikely]] return; }
L_003C04C8:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C04D4u); c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 235u, depth + 1u); else { c.pc = 0x003B9950u; return; } if (c.pc != 0x003C04D4u) [[unlikely]] return; }
L_003C04D4:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C04E0u); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 232u, depth + 1u); else { c.pc = 0x003B9908u; return; } if (c.pc != 0x003C04E0u) [[unlikely]] return; }
L_003C04E0:
    set32(c.r[4], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C04ECu); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 91u, depth + 1u); else { c.pc = 0x003B88E8u; return; } if (c.pc != 0x003C04ECu) [[unlikely]] return; }
L_003C04EC:
    set32(c.r[4], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C04F8u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 87u, depth + 1u); else { c.pc = 0x003B8898u; return; } if (c.pc != 0x003C04F8u) [[unlikely]] return; }
L_003C04F8:
    set32(c.r[4], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C0504u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 86u, depth + 1u); else { c.pc = 0x003B8880u; return; } if (c.pc != 0x003C0504u) [[unlikely]] return; }
L_003C0504:
    set32(c.r[4], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C0510u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 100u, depth + 1u); else { c.pc = 0x003B8990u; return; } if (c.pc != 0x003C0510u) [[unlikely]] return; }
L_003C0510:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C0518u); set32(c.r[4], ld32((c.r[17].w[0] + 4u)));  if (depth < kMaxDepth) unit_00AE(c, 244u, depth + 1u); else { c.pc = 0x003B9A40u; return; } if (c.pc != 0x003C0518u) [[unlikely]] return; }
L_003C0518:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 64u)));
    set32(c.r[4], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C0528u); set32(c.r[5], c.r[5].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_00AE(c, 88u, depth + 1u); else { c.pc = 0x003B88B0u; return; } if (c.pc != 0x003C0528u) [[unlikely]] return; }
L_003C0528:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C0538u); set32(c.r[6], c.r[29].w[0] + 36u);  if (depth < kMaxDepth) unit_00AF(c, 377u, depth + 1u); else { c.pc = 0x003BF190u; return; } if (c.pc != 0x003C0538u) [[unlikely]] return; }
L_003C0538:
    set32(c.r[5], ld32((c.r[29].w[0] + 32u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != 0ull; set32(c.r[6], ld32((c.r[29].w[0] + 36u)));  if (t) { goto L_003C054C; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_003C0554; } }
L_003C054C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C0554u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AF(c, 376u, depth + 1u); else { c.pc = 0x003BF188u; return; } if (c.pc != 0x003C0554u) [[unlikely]] return; }
L_003C0554:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C055Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AF(c, 470u, depth + 1u); else { c.pc = 0x003BFD40u; return; } if (c.pc != 0x003C055Cu) [[unlikely]] return; }
L_003C055C:
    set32(c.r[4], ld32((c.r[17].w[0] + 116u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[4].d[0] = c.r[19].d[0] + 0ull;  goto L_003C0574; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C0570u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AB(c, 318u, depth + 1u); else { c.pc = 0x003AE730u; return; } if (c.pc != 0x003C0570u) [[unlikely]] return; }
L_003C0570:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_003C0574:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C057Cu); set32(c.r[16], 0u + 2u);  if (depth < kMaxDepth) unit_00AE(c, 229u, depth + 1u); else { c.pc = 0x003B98C0u; return; } if (c.pc != 0x003C057Cu) [[unlikely]] return; }
L_003C057C:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[16].d[0]) { set32(c.r[4], ld32((c.r[17].w[0] + 12u)));  goto L_003C059C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C058Cu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 254u, depth + 1u); else { c.pc = 0x003B9B78u; return; } if (c.pc != 0x003C058Cu) [[unlikely]] return; }
L_003C058C:
    set32(c.r[4], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C0598u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 104u, depth + 1u); else { c.pc = 0x003B89B0u; return; } if (c.pc != 0x003C0598u) [[unlikely]] return; }
L_003C0598:
    set32(c.r[4], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 1;
L_003C059C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C05A4u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00AE(c, 76u, depth + 1u); else { c.pc = 0x003B87A0u; return; } if (c.pc != 0x003C05A4u) [[unlikely]] return; }
L_003C05A4:
    st8((c.r[17].w[0] + 1u), static_cast<std::uint8_t>(c.r[16].w[0]));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 2;
L_003C05AC:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 56u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 72u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 88u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_003C05C8:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 40u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 56u), c.r[31].d[0]);
    set32(c.r[18], ld32((c.r[17].w[0] + 12u)));
    set32(c.r[20], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C05F8u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 79u, depth + 1u); else { c.pc = 0x003B87E8u; return; } if (c.pc != 0x003C05F8u) [[unlikely]] return; }
L_003C05F8:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C0604u); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 80u, depth + 1u); else { c.pc = 0x003B8800u; return; } if (c.pc != 0x003C0604u) [[unlikely]] return; }
L_003C0604:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[17].w[0] + 72u)));
    set32(c.r[2], c.r[2].w[0] << 1);
    c.r[16].d[0] = c.r[16].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[16].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 112u)));  goto L_003C0648; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C0624u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 233u, depth + 1u); else { c.pc = 0x003B9920u; return; } if (c.pc != 0x003C0624u) [[unlikely]] return; }
L_003C0624:
    c.r[2].d[0] = c.r[2].sd[0] < c.r[19].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 112u)));  goto L_003C0648; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C0638u); set32(c.r[4], ld32((c.r[17].w[0] + 4u)));  if (depth < kMaxDepth) unit_00AE(c, 125u, depth + 1u); else { c.pc = 0x003B8C68u; return; } if (c.pc != 0x003C0638u) [[unlikely]] return; }
L_003C0638:
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_003C068C; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 112u)));
    c.budget -= 1;
L_003C0648:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_003C0688; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 114u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], 0u + 3u);  goto L_003C0680; }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C0668u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00AE(c, 77u, depth + 1u); else { c.pc = 0x003B87B8u; return; } if (c.pc != 0x003C0668u) [[unlikely]] return; }
L_003C0668:
    st32((c.r[17].w[0] + 156u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[2], c.r[2].w[0] + 23748u);
    set32(c.r[3], ld32((c.r[2].w[0])));
    st32((c.r[17].w[0] + 160u), c.r[3].w[0]);
    set32(c.r[2], 0u + 3u);
    c.budget -= 6;
L_003C0680:
    st8((c.r[17].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 1u);
    c.budget -= 2;
L_003C0688:
    st8((c.r[17].w[0] + 113u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 1;
L_003C068C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C0694u); set32(c.r[4], ld32((c.r[17].w[0] + 4u)));  if (depth < kMaxDepth) unit_00AE(c, 125u, depth + 1u); else { c.pc = 0x003B8C68u; return; } if (c.pc != 0x003C0694u) [[unlikely]] return; }
L_003C0694:
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_003C0720; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C06A8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AF(c, 297u, depth + 1u); else { c.pc = 0x003BE6F0u; return; } if (c.pc != 0x003C06A8u) [[unlikely]] return; }
L_003C06A8:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[17].w[0] + 72u)));
    mmi::mult(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.budget -= 5;
    { const bool t = c.r[3].sd[0] <= 0; set32(c.r[19], c.r[2].w[0] << 1);  if (t) { goto L_003C071C; } }
    set32(c.r[18], c.r[17].w[0] + 24u);
    c.r[17].d[0] = c.r[3].d[0] + 0ull;
    set32(c.r[16], ld32((c.r[18].w[0])));
    c.budget -= 3;
L_003C06C8:
    set32(c.r[18], c.r[18].w[0] + 4u);
    c.r[7].d[0] = c.r[29].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] + 24u)));
    c.budget -= 9;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003C06ECu); set32(c.r[17], c.r[17].w[0] - 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003C06ECu) [[unlikely]] return; }
L_003C06EC:
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], ld32((c.r[29].w[0])));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C06FCu); set32(c.r[6], ld32((c.r[29].w[0] + 4u)));  if (depth < kMaxDepth) unit_0009(c, 49u, depth + 1u); else { c.pc = 0x00124ED8u; return; } if (c.pc != 0x003C06FCu) [[unlikely]] return; }
L_003C06FC:
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    set32(c.r[2], ld32((c.r[3].w[0] + 32u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003C0714u); c.r[6].d[0] = c.r[29].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003C0714u) [[unlikely]] return; }
L_003C0714:
    c.budget -= 2;
    if (c.r[17].d[0] != 0ull) { set32(c.r[16], ld32((c.r[18].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003C06C8u | kUnwind; return; } goto L_003C06C8; }
L_003C071C:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_003C0720:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 56u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003C0740:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 40u), c.r[31].d[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C0768u); set32(c.r[4], ld32((c.r[19].w[0] + 4u)));  if (depth < kMaxDepth) unit_00AE(c, 125u, depth + 1u); else { c.pc = 0x003B8C68u; return; } if (c.pc != 0x003C0768u) [[unlikely]] return; }
L_003C0768:
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_003C07E0; }
    set32(c.r[4], ld32((c.r[19].w[0] + 4u)));
    c.r[18].d[0] = 0ull + 0ull;
    c.r[20].sd[0] = static_cast<std::int32_t>(0x00430000u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C0788u); set32(c.r[16], c.r[19].w[0] + 24u);  if (depth < kMaxDepth) unit_00AE(c, 231u, depth + 1u); else { c.pc = 0x003B98F0u; return; } if (c.pc != 0x003C0788u) [[unlikely]] return; }
L_003C0788:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00430000u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 8416u), c.r[17].w[0]);  if (t) { goto L_003C079C; } }
L_003C0798:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_003C079C:
    c.r[2].d[0] = c.r[18].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003C07CC; } }
    set32(c.r[4], ld32((c.r[16].w[0])));
    set32(c.r[16], c.r[16].w[0] + 4u);
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0] + 36u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003C07C0u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003C07C0u) [[unlikely]] return; }
L_003C07C0:
    c.r[3].d[0] = c.r[2].sd[0] < 64ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[20].w[0] + 8420u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003C0798u | kUnwind; return; } goto L_003C0798; } }
L_003C07CC:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != c.r[17].d[0]; c.r[16].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_003C07E0; } }
    set32(c.r[2], 0u + 4u);
    st32((c.r[19].w[0] + 168u), 0u);
    st8((c.r[19].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
L_003C07E0:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 40u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003C0800:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 64u), c.r[20].d[0]);
    c.r[20].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 72u), c.r[21].d[0]);
    st64((c.r[29].w[0] + 80u), c.r[22].d[0]);
    c.r[22].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 88u), c.r[23].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[16].d[0]);
    st64((c.r[29].w[0] + 40u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 56u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 96u), c.r[30].d[0]);
    st64((c.r[29].w[0] + 104u), c.r[31].d[0]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C083Cu); set32(c.r[4], ld32((c.r[22].w[0] + 12u)));  if (depth < kMaxDepth) unit_00AE(c, 79u, depth + 1u); else { c.pc = 0x003B87E8u; return; } if (c.pc != 0x003C083Cu) [[unlikely]] return; }
L_003C083C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00430000u);
    st32((c.r[3].w[0] + 8424u), c.r[2].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C084Cu); set32(c.r[4], ld32((c.r[22].w[0] + 4u)));  if (depth < kMaxDepth) unit_00AE(c, 231u, depth + 1u); else { c.pc = 0x003B98F0u; return; } if (c.pc != 0x003C084Cu) [[unlikely]] return; }
L_003C084C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C0854u); c.r[23].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 155u, depth + 1u); else { c.pc = 0x003B1E00u; return; } if (c.pc != 0x003C0854u) [[unlikely]] return; }
L_003C0854:
    c.budget -= 2;
    { const bool t = c.r[23].sd[0] <= 0; set32(c.r[21], ld32((c.r[22].w[0] + 72u)));  if (t) { goto L_003C08A8; } }
    set32(c.r[17], c.r[22].w[0] + 24u);
    c.budget -= 1;
L_003C0860:
    set32(c.r[4], ld32((c.r[17].w[0])));
    set32(c.r[17], c.r[17].w[0] + 4u);
    set32(c.r[16], c.r[20].w[0] << 3);
    set32(c.r[20], c.r[20].w[0] + 1u);
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[6], c.r[21].w[0] << 1);
    set32(c.r[7], c.r[29].w[0] + c.r[16].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 24u)));
    c.budget -= 10;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003C0888u); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003C0888u) [[unlikely]] return; }
L_003C0888:
    c.r[4].d[0] = c.r[20].sd[0] < c.r[23].sd[0] ? 1ull : 0ull;
    set32(c.r[2], c.r[29].w[0] + 4u);
    set32(c.r[16], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[3], c.r[3].w[0] >> 1);
    c.r[2].d[0] = c.r[3].d[0] < c.r[21].d[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[4].d[0] != 0ull; if (c.r[2].d[0] != 0) c.r[21].d[0] = c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003C0860u | kUnwind; return; } goto L_003C0860; } }
L_003C08A8:
    c.budget -= 2;
    { const bool t = c.r[23].sd[0] <= 0; c.r[20].d[0] = 0ull + 0ull;  if (t) { goto L_003C093C; } }
    set32(c.r[30], c.r[21].w[0] << 1);
    set32(c.r[19], c.r[22].w[0] + 24u);
    set32(c.r[2], c.r[29].w[0] + 16u);
    c.budget -= 4;
L_003C08C0:
    set32(c.r[16], c.r[20].w[0] << 3);
    set32(c.r[17], c.r[29].w[0] + c.r[16].w[0]);
    set32(c.r[18], c.r[2].w[0] + c.r[16].w[0]);
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[30].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C08E0u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B4(c, 230u, depth + 1u); else { c.pc = 0x003D2388u; return; } if (c.pc != 0x003C08E0u) [[unlikely]] return; }
L_003C08E0:
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[29].w[0] + 4u);
    set32(c.r[4], ld32((c.r[17].w[0])));
    set32(c.r[16], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C08FCu); set32(c.r[6], ld32((c.r[16].w[0])));  if (depth < kMaxDepth) unit_0009(c, 49u, depth + 1u); else { c.pc = 0x00124ED8u; return; } if (c.pc != 0x003C08FCu) [[unlikely]] return; }
L_003C08FC:
    set32(c.r[4], ld32((c.r[19].w[0])));
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0] + 32u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003C0914u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003C0914u) [[unlikely]] return; }
L_003C0914:
    set32(c.r[4], ld32((c.r[19].w[0])));
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0] + 28u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003C0930u); set32(c.r[19], c.r[19].w[0] + 4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003C0930u) [[unlikely]] return; }
L_003C0930:
    c.r[3].d[0] = c.r[20].sd[0] < c.r[23].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[2], c.r[29].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003C08C0u | kUnwind; return; } goto L_003C08C0; } }
L_003C093C:
    set32(c.r[2], ld32((c.r[22].w[0] + 168u)));
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[21].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C0950u); st32((c.r[22].w[0] + 168u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00AC(c, 156u, depth + 1u); else { c.pc = 0x003B1E18u; return; } if (c.pc != 0x003C0950u) [[unlikely]] return; }
L_003C0950:
    c.budget -= 2;
    { const bool t = c.r[23].sd[0] <= 0;  if (t) { goto L_003C098C; } }
    c.r[20].d[0] = c.r[23].d[0] + 0ull;
    set32(c.r[16], c.r[22].w[0] + 24u);
    c.budget -= 2;
L_003C0960:
    set32(c.r[4], ld32((c.r[16].w[0])));
    set32(c.r[16], c.r[16].w[0] + 4u);
    set32(c.r[5], 0u + 1u);
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0] + 36u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003C097Cu); set32(c.r[20], c.r[20].w[0] - 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003C097Cu) [[unlikely]] return; }
L_003C097C:
    set32(c.r[2], c.r[2].w[0] >> 1);
    c.r[3].d[0] = c.r[2].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[20].d[0] != 0ull; if (c.r[3].d[0] == 0) c.r[17].d[0] = c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003C0960u | kUnwind; return; } goto L_003C0960; } }
L_003C098C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C0994u); set32(c.r[4], ld32((c.r[22].w[0] + 12u)));  if (depth < kMaxDepth) unit_00AE(c, 79u, depth + 1u); else { c.pc = 0x003B87E8u; return; } if (c.pc != 0x003C0994u) [[unlikely]] return; }
L_003C0994:
    set32(c.r[3], ld32((c.r[22].w[0] + 168u)));
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    c.budget -= 5;
    if (c.r[2].sd[0] > 0) { c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_003C09D8; }
    set32(c.r[4], ld32((c.r[22].w[0] + 12u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C09B4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 76u, depth + 1u); else { c.pc = 0x003B87A0u; return; } if (c.pc != 0x003C09B4u) [[unlikely]] return; }
L_003C09B4:
    set32(c.r[4], ld32((c.r[22].w[0] + 12u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C09C0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 77u, depth + 1u); else { c.pc = 0x003B87B8u; return; } if (c.pc != 0x003C09C0u) [[unlikely]] return; }
L_003C09C0:
    set32(c.r[4], ld32((c.r[22].w[0] + 12u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C09CCu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00B4(c, 60u, depth + 1u); else { c.pc = 0x003D0800u; return; } if (c.pc != 0x003C09CCu) [[unlikely]] return; }
L_003C09CC:
    set32(c.r[2], 0u + 5u);
    st8((c.r[22].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 3;
L_003C09D8:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 56u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 72u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[23].d[0] = ld64((c.r[29].w[0] + 88u));
    c.r[30].d[0] = ld64((c.r[29].w[0] + 96u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 104u));
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_003C0A08:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003C0A10:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C0A2Cu); c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 155u, depth + 1u); else { c.pc = 0x003B1E00u; return; } if (c.pc != 0x003C0A2Cu) [[unlikely]] return; }
L_003C0A2C:
    set32(c.r[4], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C0A38u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 76u, depth + 1u); else { c.pc = 0x003B87A0u; return; } if (c.pc != 0x003C0A38u) [[unlikely]] return; }
L_003C0A38:
    set32(c.r[4], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C0A44u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 77u, depth + 1u); else { c.pc = 0x003B87B8u; return; } if (c.pc != 0x003C0A44u) [[unlikely]] return; }
L_003C0A44:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C0A4Cu); set32(c.r[4], ld32((c.r[17].w[0] + 4u)));  if (depth < kMaxDepth) unit_00AE(c, 135u, depth + 1u); else { c.pc = 0x003B8D60u; return; } if (c.pc != 0x003C0A4Cu) [[unlikely]] return; }
L_003C0A4C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C0A54u);  if (depth < kMaxDepth) unit_00AC(c, 156u, depth + 1u); else { c.pc = 0x003B1E18u; return; } if (c.pc != 0x003C0A54u) [[unlikely]] return; }
L_003C0A54:
    set32(c.r[4], ld32((c.r[17].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003C0A7C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C0A68u);  if (depth < kMaxDepth) unit_00AF(c, 67u, depth + 1u); else { c.pc = 0x003BC890u; return; } if (c.pc != 0x003C0A68u) [[unlikely]] return; }
L_003C0A68:
    set32(c.r[4], ld32((c.r[17].w[0] + 20u)));
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0] + 20u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003C0A7Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003C0A7Cu) [[unlikely]] return; }
L_003C0A7C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C0A84u); c.r[18].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 155u, depth + 1u); else { c.pc = 0x003B1E00u; return; } if (c.pc != 0x003C0A84u) [[unlikely]] return; }
L_003C0A84:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 3u)));
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { set32(c.r[4], ld32((c.r[17].w[0] + 8u)));  goto L_003C0AC0; }
    set32(c.r[16], c.r[17].w[0] + 24u);
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 2;
L_003C0A98:
    set32(c.r[16], c.r[16].w[0] + 4u);
    set32(c.r[2], ld32((c.r[4].w[0])));
    set32(c.r[3], ld32((c.r[2].w[0] + 20u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003C0AACu); set32(c.r[18], c.r[18].w[0] + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003C0AACu) [[unlikely]] return; }
L_003C0AAC:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 3u)));
    c.r[2].d[0] = c.r[18].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[16].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003C0A98u | kUnwind; return; } goto L_003C0A98; }
    set32(c.r[4], ld32((c.r[17].w[0] + 8u)));
    c.budget -= 1;
L_003C0AC0:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_003C0ADC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C0AD0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00AF(c, 54u, depth + 1u); else { c.pc = 0x003BC708u; return; } if (c.pc != 0x003C0AD0u) [[unlikely]] return; }
L_003C0AD0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C0AD8u); set32(c.r[4], ld32((c.r[17].w[0] + 8u)));  if (depth < kMaxDepth) unit_00AF(c, 57u, depth + 1u); else { c.pc = 0x003BC7A0u; return; } if (c.pc != 0x003C0AD8u) [[unlikely]] return; }
L_003C0AD8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003C0ADC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C0AE4u); set32(c.r[5], ld32((c.r[4].w[0] + 20u)));  if (depth < kMaxDepth) unit_00AF(c, 232u, depth + 1u); else { c.pc = 0x003BDD00u; return; } if (c.pc != 0x003C0AE4u) [[unlikely]] return; }
L_003C0AE4:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003B1E18u | kUnwind; return; } [[clang::musttail]] return unit_00AC(c, 156u, depth); }
L_003C0B00:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], 0u + 3u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[17].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));
    c.budget -= 9;
    if (c.r[17].d[0] != c.r[2].d[0]) { st16((c.r[16].w[0] + 104u), static_cast<std::uint16_t>(0u));  goto L_003C0BC4; }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 114u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { st16((c.r[16].w[0] + 104u), static_cast<std::uint16_t>(0u));  goto L_003C0BC4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C0B38u); set32(c.r[4], ld32((c.r[16].w[0] + 4u)));  if (depth < kMaxDepth) unit_00AE(c, 125u, depth + 1u); else { c.pc = 0x003B8C68u; return; } if (c.pc != 0x003C0B38u) [[unlikely]] return; }
L_003C0B38:
    c.budget -= 2;
    if (c.r[2].d[0] == c.r[17].d[0]) { st16((c.r[16].w[0] + 104u), static_cast<std::uint16_t>(0u));  goto L_003C0BC4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C0B48u); set32(c.r[4], ld32((c.r[16].w[0] + 4u)));  if (depth < kMaxDepth) unit_00AE(c, 214u, depth + 1u); else { c.pc = 0x003B9818u; return; } if (c.pc != 0x003C0B48u) [[unlikely]] return; }
L_003C0B48:
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 100u)));
    c.budget -= 4;
    if (c.r[2].d[0] != c.r[6].d[0]) { st16((c.r[16].w[0] + 104u), static_cast<std::uint16_t>(0u));  goto L_003C0B88; }
    c.r[4].d[0] = ld16((c.r[16].w[0] + 104u));
    set32(c.r[5], ld32((c.r[16].w[0] + 56u)));
    set32(c.r[4], c.r[4].w[0] + 1u);
    set32(c.r[3], c.r[4].w[0] << 16);
    set32(c.r[2], c.r[5].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 16));
    c.r[2].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[2].d[0] == 0ull; st16((c.r[16].w[0] + 104u), static_cast<std::uint16_t>(c.r[4].w[0]));  if (t) { goto L_003C0B88; } }
    set32(c.r[2], 0u - 2u);
    st16((c.r[16].w[0] + 96u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 2;
L_003C0B88:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 96u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[16].w[0] + 100u), c.r[6].w[0]);  if (t) { goto L_003C0BC4; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 109u));
    set32(c.r[2], c.r[3].w[0] - 1u);
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003C0BB4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C0BB0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AF(c, 259u, depth + 1u); else { c.pc = 0x003BDFE0u; return; } if (c.pc != 0x003C0BB0u) [[unlikely]] return; }
L_003C0BB0:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 109u));
    c.budget -= 1;
L_003C0BB4:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], c.r[17].w[0] - 1u);  if (t) { goto L_003C0BC8; } }
    st16((c.r[16].w[0] + 96u), static_cast<std::uint16_t>(0u));
    st16((c.r[16].w[0] + 104u), static_cast<std::uint16_t>(0u));
    c.budget -= 2;
L_003C0BC4:
    set32(c.r[2], c.r[17].w[0] - 1u);
    c.budget -= 1;
L_003C0BC8:
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(3ll) ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { st16((c.r[16].w[0] + 106u), static_cast<std::uint16_t>(0u));  goto L_003C0CD0; }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 114u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { st16((c.r[16].w[0] + 106u), static_cast<std::uint16_t>(0u));  goto L_003C0CD0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C0BE8u); set32(c.r[4], ld32((c.r[16].w[0] + 4u)));  if (depth < kMaxDepth) unit_00AE(c, 125u, depth + 1u); else { c.pc = 0x003B8C68u; return; } if (c.pc != 0x003C0BE8u) [[unlikely]] return; }
L_003C0BE8:
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[3].d[0]) { st16((c.r[16].w[0] + 106u), static_cast<std::uint16_t>(0u));  goto L_003C0CD0; }
    set32(c.r[4], ld32((c.r[16].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003C0C18; } }
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0] + 36u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003C0C10u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003C0C10u) [[unlikely]] return; }
L_003C0C10:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].sd[0] < 64ll ? 1ull : 0ull;  if (t) { goto L_003C0C1C; } }
L_003C0C18:
    c.r[2].d[0] = c.r[2].sd[0] < 64ll ? 1ull : 0ull;
    c.budget -= 1;
L_003C0C1C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st16((c.r[16].w[0] + 106u), static_cast<std::uint16_t>(0u));  goto L_003C0CD0; }
    c.r[2].d[0] = ld16((c.r[16].w[0] + 106u));
    set32(c.r[3], 0u + 3u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 5;
    { const bool t = c.r[17].d[0] != c.r[3].d[0]; st16((c.r[16].w[0] + 106u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_003C0C50; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 56u)));
    set32(c.r[3], c.r[2].w[0] << 16);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 16));
    set32(c.r[2], c.r[4].w[0] << 2);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);  if (t) { goto L_003C0C68; } }
L_003C0C50:
    set32(c.r[4], ld32((c.r[16].w[0] + 56u)));
    set32(c.r[3], c.r[2].w[0] << 16);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 16));
    set32(c.r[2], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    c.budget -= 6;
L_003C0C68:
    c.r[2].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 96u)));  goto L_003C0C80; }
    set32(c.r[2], 0u - 1u);
    st16((c.r[16].w[0] + 96u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 96u)));
    c.budget -= 3;
L_003C0C80:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_003C0CD0; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 109u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[2].d[0]; c.r[3].d[0] = ld8((c.r[16].w[0] + 109u));  if (t) { goto L_003C0CA8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C0C9Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AF(c, 259u, depth + 1u); else { c.pc = 0x003BDFE0u; return; } if (c.pc != 0x003C0C9Cu) [[unlikely]] return; }
L_003C0C9C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = ld8((c.r[16].w[0] + 109u));  if (t) { goto L_003C0CC0; } }
    c.budget -= 1;
L_003C0CA8:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { goto L_003C0CC0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C0CBCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B0(c, 108u, depth + 1u); else { c.pc = 0x003C0A10u; return; } if (c.pc != 0x003C0CBCu) [[unlikely]] return; }
L_003C0CBC:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 109u));
    c.budget -= 1;
L_003C0CC0:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 8u)));  goto L_003C0CD4; }
    st16((c.r[16].w[0] + 96u), static_cast<std::uint16_t>(0u));
    st16((c.r[16].w[0] + 106u), static_cast<std::uint16_t>(0u));
    c.budget -= 2;
L_003C0CD0:
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 1;
L_003C0CD4:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_003C0D3C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C0CE4u);  if (depth < kMaxDepth) unit_00AF(c, 53u, depth + 1u); else { c.pc = 0x003BC700u; return; } if (c.pc != 0x003C0CE4u) [[unlikely]] return; }
L_003C0CE4:
    set32(c.r[3], 0u + 4u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_003C0D3C; }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 109u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[2].d[0]; c.r[3].d[0] = ld8((c.r[16].w[0] + 109u));  if (t) { goto L_003C0D10; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C0D08u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AF(c, 259u, depth + 1u); else { c.pc = 0x003BDFE0u; return; } if (c.pc != 0x003C0D08u) [[unlikely]] return; }
L_003C0D08:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = ld8((c.r[16].w[0] + 109u));  if (t) { goto L_003C0D28; } }
L_003C0D10:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { goto L_003C0D28; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C0D24u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B0(c, 108u, depth + 1u); else { c.pc = 0x003C0A10u; return; } if (c.pc != 0x003C0D24u) [[unlikely]] return; }
L_003C0D24:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 109u));
    c.budget -= 1;
L_003C0D28:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_003C0D3C; }
    st16((c.r[16].w[0] + 106u), static_cast<std::uint16_t>(0u));
    st16((c.r[16].w[0] + 96u), static_cast<std::uint16_t>(0u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
L_003C0D3C:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003C0D50:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_003C0D90; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C0D74u);  if (depth < kMaxDepth) unit_00AF(c, 53u, depth + 1u); else { c.pc = 0x003BC700u; return; } if (c.pc != 0x003C0D74u) [[unlikely]] return; }
L_003C0D74:
    set32(c.r[3], 0u + 4u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[4], ld32((c.r[16].w[0] + 148u)));  goto L_003C0D94; }
    set32(c.r[2], 0u - 1u);
    set32(c.r[3], 0u + 6u);
    st16((c.r[16].w[0] + 96u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
L_003C0D90:
    set32(c.r[4], ld32((c.r[16].w[0] + 148u)));
    c.budget -= 1;
L_003C0D94:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_003C0DC4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C0DA4u);  if (depth < kMaxDepth) unit_00B3(c, 283u, depth + 1u); else { c.pc = 0x003CE400u; return; } if (c.pc != 0x003C0DA4u) [[unlikely]] return; }
L_003C0DA4:
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_003C0DC4; }
    set32(c.r[2], 0u + 6u);
    set32(c.r[3], 0u - 1u);
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st16((c.r[16].w[0] + 96u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
L_003C0DC4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003C0DD0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 7;
    if (c.r[2].d[0] == 0ull) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_003C0E5C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C0DF4u);  if (depth < kMaxDepth) unit_00AF(c, 265u, depth + 1u); else { c.pc = 0x003BE0A0u; return; } if (c.pc != 0x003C0DF4u) [[unlikely]] return; }
L_003C0DF4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_003C0E5C; }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 2u)));
    c.r[2].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(5ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_003C0E5C; }
    set32(c.r[2], c.r[3].w[0] << 2);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 14080u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x003C0000u < 16384u) { entry = entries_00B0[(t - 0x003C0000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_003C0E28:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C0E30u); set32(c.r[4], ld32((c.r[16].w[0] + 8u)));  if (depth < kMaxDepth) unit_00AF(c, 53u, depth + 1u); else { c.pc = 0x003BC700u; return; } if (c.pc != 0x003C0E30u) [[unlikely]] return; }
L_003C0E30:
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_003C0E5C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C0E44u); set32(c.r[4], ld32((c.r[16].w[0] + 4u)));  if (depth < kMaxDepth) unit_00AE(c, 131u, depth + 1u); else { c.pc = 0x003B8D00u; return; } if (c.pc != 0x003C0E44u) [[unlikely]] return; }
L_003C0E44:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_003C0E5C; } }
    c.budget -= 1;
L_003C0E50:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C0E58u); set32(c.r[4], ld32((c.r[16].w[0] + 4u)));  if (depth < kMaxDepth) unit_00AE(c, 131u, depth + 1u); else { c.pc = 0x003B8D00u; return; } if (c.pc != 0x003C0E58u) [[unlikely]] return; }
L_003C0E58:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_003C0E5C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003C0E68:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 5;
    { const bool t = c.r[16].d[0] != 0ull; st64((c.r[29].w[0] + 8u), c.r[31].d[0]);  if (t) { goto L_003C0E98; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    set32(c.r[4], c.r[4].w[0] + 14104u);
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003B39F0u | kUnwind; return; } [[clang::musttail]] return unit_00AC(c, 204u, depth); }
L_003C0E98:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));
    set32(c.r[2], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_003C0EB8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C0EB0u);  if (depth < kMaxDepth) unit_00B0(c, 84u, depth + 1u); else { c.pc = 0x003C0740u; return; } if (c.pc != 0x003C0EB0u) [[unlikely]] return; }
L_003C0EB0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003C0F10; } }
L_003C0EB8:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 2u);  if (t) { goto L_003C0ED0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C0EC8u);  if (depth < kMaxDepth) unit_00B0(c, 26u, depth + 1u); else { c.pc = 0x003C01F0u; return; } if (c.pc != 0x003C0EC8u) [[unlikely]] return; }
L_003C0EC8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003C0F10; } }
L_003C0ED0:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 4u);  if (t) { goto L_003C0EE8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C0EE0u);  if (depth < kMaxDepth) unit_00B0(c, 72u, depth + 1u); else { c.pc = 0x003C05C8u; return; } if (c.pc != 0x003C0EE0u) [[unlikely]] return; }
L_003C0EE0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003C0F10; } }
L_003C0EE8:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 5u);  if (t) { goto L_003C0F00; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C0EF8u);  if (depth < kMaxDepth) unit_00B0(c, 89u, depth + 1u); else { c.pc = 0x003C0800u; return; } if (c.pc != 0x003C0EF8u) [[unlikely]] return; }
L_003C0EF8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003C0F10; } }
L_003C0F00:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_003C0F10; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C0F10u);  if (depth < kMaxDepth) unit_00B0(c, 107u, depth + 1u); else { c.pc = 0x003C0A08u; return; } if (c.pc != 0x003C0F10u) [[unlikely]] return; }
L_003C0F10:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C0F18u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B0(c, 136u, depth + 1u); else { c.pc = 0x003C0DD0u; return; } if (c.pc != 0x003C0F18u) [[unlikely]] return; }
L_003C0F18:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003C0D50u | kUnwind; return; } goto L_003C0D50; }
L_003C0F30:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[3].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003C0F90; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_003C0F80; } }
    set32(c.r[4], ld32((c.r[3].w[0] + 148u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003C0F90; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 40u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_003C0F78; } }
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003BD128u | kUnwind; return; } [[clang::musttail]] return unit_00AF(c, 134u, depth); }
L_003C0F78:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003C0F90; } }
L_003C0F80:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003BD128u | kUnwind; return; } [[clang::musttail]] return unit_00AF(c, 134u, depth); }
L_003C0F90:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003C0FA0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00430000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] + 8440u);
    set32(c.r[6], 0u + 960u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 9;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00124ED8u | kUnwind; return; } [[clang::musttail]] return unit_0009(c, 49u, depth); }
L_003C0FC8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00430000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] + 8440u);
    set32(c.r[6], 0u + 960u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 9;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00124ED8u | kUnwind; return; } [[clang::musttail]] return unit_0009(c, 49u, depth); }
L_003C0FF0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00430000u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[3], c.r[4].w[0] + 8440u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_003C103C; } }
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_003C1018:
    c.r[2].d[0] = c.r[17].sd[0] < 16ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], c.r[3].w[0] + 60u);  if (t) { goto L_003C103C; } }
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 6;
    if (c.r[2].d[0] != 0ull) { set32(c.r[17], c.r[17].w[0] + 1u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003C1018u | kUnwind; return; } goto L_003C1018; }
L_003C103C:
    set32(c.r[3], 0u + 16u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == c.r[3].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003C10A8; } }
    set32(c.r[16], c.r[17].w[0] << 4);
    set32(c.r[2], c.r[4].w[0] + 8440u);
    set32(c.r[16], c.r[16].w[0] - c.r[17].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[16], c.r[16].w[0] << 2);
    set32(c.r[6], 0u + 60u);
    set32(c.r[16], c.r[16].w[0] + c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C106Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 49u, depth + 1u); else { c.pc = 0x00124ED8u; return; } if (c.pc != 0x003C106Cu) [[unlikely]] return; }
L_003C106C:
    set32(c.r[3], 0u + 1u);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    set32(c.r[4], 0u + 500u);
    st32((c.r[16].w[0] + 4u), c.r[17].w[0]);
    c.r[5].d[0] = 0ull | 44100ull;
    st32((c.r[16].w[0] + 8u), 0u);
    set32(c.r[6], c.r[16].w[0] + 48u);
    st32((c.r[16].w[0] + 12u), 0u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C1094u); set32(c.r[7], c.r[16].w[0] + 50u);  if (depth < kMaxDepth) unit_00AC(c, 157u, depth + 1u); else { c.pc = 0x003B1E30u; return; } if (c.pc != 0x003C1094u) [[unlikely]] return; }
L_003C1094:
    set32(c.r[4], c.r[16].w[0] + 40u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C10A4u); set32(c.r[6], 0u + 8u);  if (depth < kMaxDepth) unit_0009(c, 49u, depth + 1u); else { c.pc = 0x00124ED8u; return; } if (c.pc != 0x003C10A4u) [[unlikely]] return; }
L_003C10A4:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_003C10A8:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003C10C0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[7], c.r[2].w[0] + 50u);
    c.r[4].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[6], c.r[2].w[0] + 48u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 9;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003B1E30u | kUnwind; return; } [[clang::musttail]] return unit_00AC(c, 157u, depth); }
L_003C10E8:
    c.r[3].d[0] = ld16((c.r[5].w[0]));
    st16((c.r[4].w[0] + 40u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[2].d[0] = ld16((c.r[6].w[0]));
    st16((c.r[4].w[0] + 42u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[3].d[0] = ld16((c.r[5].w[0] + 2u));
    st16((c.r[4].w[0] + 44u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[2].d[0] = ld16((c.r[6].w[0] + 2u));
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; st16((c.r[4].w[0] + 46u), static_cast<std::uint16_t>(c.r[2].w[0]));  c.pc = t; return; }
L_003C1110:
    c.r[3].d[0] = ld16((c.r[4].w[0] + 40u));
    st16((c.r[5].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[2].d[0] = ld16((c.r[4].w[0] + 42u));
    st16((c.r[6].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[3].d[0] = ld16((c.r[4].w[0] + 44u));
    st16((c.r[5].w[0] + 2u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[2].d[0] = ld16((c.r[4].w[0] + 46u));
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; st16((c.r[6].w[0] + 2u), static_cast<std::uint16_t>(c.r[2].w[0]));  c.pc = t; return; }
L_003C1138:
    st16((c.r[4].w[0] + 56u), static_cast<std::uint16_t>(c.r[7].w[0]));
    st16((c.r[4].w[0] + 52u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st16((c.r[4].w[0] + 54u), static_cast<std::uint16_t>(c.r[6].w[0]));  c.pc = t; return; }
L_003C1148:
    c.r[2].d[0] = ld16((c.r[4].w[0] + 52u));
    st16((c.r[5].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[3].d[0] = ld16((c.r[4].w[0] + 54u));
    st16((c.r[6].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[2].d[0] = ld16((c.r[4].w[0] + 56u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; st16((c.r[7].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));  c.pc = t; return; }
L_003C1168:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_003C1190; } }
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 60u);
    st32((c.r[2].w[0]), 0u);
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00124ED8u | kUnwind; return; } [[clang::musttail]] return unit_0009(c, 49u, depth); }
L_003C1190:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003C11A0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 8u), c.r[5].w[0]);  c.pc = t; return; }
L_003C11A8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[4].w[0] + 12u)));  c.pc = t; return; }
L_003C11B0:
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_003C11D8; } }
    st32((c.r[4].w[0] + 24u), c.r[5].w[0]);
    st32((c.r[4].w[0] + 28u), c.r[6].w[0]);
    set32(c.r[2], 0u + 1u);
    st32((c.r[4].w[0] + 32u), c.r[7].w[0]);
    st32((c.r[4].w[0] + 20u), c.r[3].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 36u), 0u);  c.pc = t; return; }
L_003C11D8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_003C11E0:
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], 0u + 2u);  if (t) { goto L_003C1208; } }
    st32((c.r[4].w[0] + 36u), c.r[8].w[0]);
    st32((c.r[4].w[0] + 24u), c.r[5].w[0]);
    set32(c.r[2], 0u + 1u);
    st32((c.r[4].w[0] + 28u), c.r[6].w[0]);
    st32((c.r[4].w[0] + 20u), c.r[3].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 32u), c.r[7].w[0]);  c.pc = t; return; }
L_003C1208:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_003C1210:
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_003C1224; } }
    st32((c.r[4].w[0] + 16u), 0u);
    st32((c.r[4].w[0] + 12u), c.r[2].w[0]);
    c.budget -= 2;
L_003C1224:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003C1230:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[5].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[6], 0u + 8u);
    st32((c.r[4].w[0] + 12u), 0u);
    set32(c.r[4], c.r[4].w[0] + 40u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 9;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00124ED8u | kUnwind; return; } [[clang::musttail]] return unit_0009(c, 49u, depth); }
L_003C1258:
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[3], 0u + 3u);
    c.budget -= 4;
    if (c.r[2].d[0] == c.r[3].d[0]) { st32((c.r[4].w[0] + 12u), 0u);  goto L_003C1268; }
L_003C1268:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003C1270:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[4].w[0] + 16u)));  c.pc = t; return; }
L_003C1278:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[3].w[0] + 8432u), c.r[2].w[0]);  c.pc = t; return; }
L_003C1288:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 40u), c.r[17].d[0]);
    set32(c.r[17], 0u + 1u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != c.r[17].d[0]; set32(c.r[2], 0u + 2u);  if (t) { goto L_003C12B8; } }
    set32(c.r[3], 0u + 2u);
    st32((c.r[16].w[0] + 12u), c.r[2].w[0]);
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
L_003C12B8:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_003C136C; }
    set32(c.r[2], ld32((c.r[16].w[0] + 20u)));
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[17].d[0]) { c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 54u)));  goto L_003C1300; }
    set32(c.r[4], ld32((c.r[16].w[0] + 24u)));
    set32(c.r[7], c.r[16].w[0] + 40u);
    set32(c.r[5], ld32((c.r[16].w[0] + 28u)));
    set32(c.r[10], c.r[16].w[0] + 52u);
    set32(c.r[6], ld32((c.r[16].w[0] + 32u)));
    c.r[8].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 48u)));
    c.r[9].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 50u)));
    c.r[11].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 54u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 56u)));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C12F8u); st32((c.r[29].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00AC(c, 189u, depth + 1u); else { c.pc = 0x003B2FF8u; return; } if (c.pc != 0x003C12F8u) [[unlikely]] return; }
L_003C12F8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 16u), c.r[2].w[0]);  if (t) { goto L_003C1360; } }
L_003C1300:
    set32(c.r[12], c.r[16].w[0] + 52u);
    set32(c.r[4], ld32((c.r[16].w[0] + 24u)));
    set32(c.r[7], c.r[16].w[0] + 40u);
    set32(c.r[5], ld32((c.r[16].w[0] + 28u)));
    set32(c.r[9], c.r[16].w[0] + 44u);
    set32(c.r[6], ld32((c.r[16].w[0] + 32u)));
    set32(c.r[8], ld32((c.r[16].w[0] + 36u)));
    c.r[10].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 48u)));
    c.r[11].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 50u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 56u)));
    st32((c.r[29].w[0] + 8u), c.r[3].w[0]);
    st32((c.r[29].w[0]), c.r[12].w[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C1338u); st32((c.r[29].w[0] + 16u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00AC(c, 198u, depth + 1u); else { c.pc = 0x003B38E8u; return; } if (c.pc != 0x003C1338u) [[unlikely]] return; }
L_003C1338:
    set32(c.r[3], c.r[2].w[0] >> 31);
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 1));
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != c.r[17].d[0]; set32(c.r[2], 0u + 3u);  if (t) { goto L_003C1364; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C1360u);  if (depth < kMaxDepth) unit_00B0(c, 172u, depth + 1u); else { c.pc = 0x003C1278u; return; } if (c.pc != 0x003C1360u) [[unlikely]] return; }
L_003C1360:
    set32(c.r[2], 0u + 3u);
    c.budget -= 1;
L_003C1364:
    st32((c.r[16].w[0] + 12u), c.r[2].w[0]);
    c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 2;
L_003C136C:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003C1380:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00430000u);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[16], c.r[2].w[0] + 8440u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    set32(c.r[17], 0u + 15u);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    set32(c.r[18], 0u + 1u);
    c.budget -= 10;
L_003C13A8:
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[18].d[0]) { set32(c.r[17], c.r[17].w[0] - 1u);  goto L_003C13C0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C13BCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B0(c, 173u, depth + 1u); else { c.pc = 0x003C1288u; return; } if (c.pc != 0x003C13BCu) [[unlikely]] return; }
L_003C13BC:
    set32(c.r[17], c.r[17].w[0] - 1u);
    c.budget -= 1;
L_003C13C0:
    c.budget -= 2;
    { const bool t = c.r[17].sd[0] >= 0; set32(c.r[16], c.r[16].w[0] + 60u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003C13A8u | kUnwind; return; } goto L_003C13A8; } }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003C13E0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00430000u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[16], c.r[2].w[0] + 21696u);
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; st64((c.r[29].w[0] + 8u), c.r[31].d[0]);  if (t) { goto L_003C1414; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00430000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] + 21840u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C1410u); set32(c.r[6], 0u + 704u);  if (depth < kMaxDepth) unit_0009(c, 49u, depth + 1u); else { c.pc = 0x00124ED8u; return; } if (c.pc != 0x003C1410u) [[unlikely]] return; }
L_003C1410:
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 1;
L_003C1414:
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003C1430:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00430000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], c.r[3].w[0] + 21696u);
    set32(c.r[2], ld32((c.r[3].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[3].w[0]), c.r[2].w[0]);  if (t) { goto L_003C1470; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00430000u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] + 21840u);
    set32(c.r[6], 0u + 704u);
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00124ED8u | kUnwind; return; } [[clang::musttail]] return unit_0009(c, 49u, depth); }
L_003C1470:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003C1480:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00430000u);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[3], c.r[5].w[0] + 21840u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 11;
    { const bool t = c.r[2].d[0] == 0ull; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_003C14E8; } }
    c.r[4].d[0] = c.r[3].d[0] + 0ull;
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.budget -= 3;
L_003C14B8:
    c.r[3].d[0] = c.r[7].sd[0] < 16ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[4], c.r[4].w[0] + 44u);  if (t) { goto L_003C14F4; } }
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.budget -= 6;
    if (c.r[2].d[0] != 0ull) { set32(c.r[7], c.r[7].w[0] + 1u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003C14B8u | kUnwind; return; } goto L_003C14B8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003C14EC; } }
    c.budget -= 1;
L_003C14E8:
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_003C14EC:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[16], c.r[7].w[0] << 1);  if (t) { goto L_003C1500; } }
L_003C14F4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003C1594; } }
    c.budget -= 1;
L_003C1500:
    set32(c.r[2], c.r[5].w[0] + 21840u);
    set32(c.r[16], c.r[16].w[0] + c.r[7].w[0]);
    set32(c.r[6], 0u + 44u);
    set32(c.r[16], c.r[16].w[0] << 2);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[16], c.r[16].w[0] - c.r[7].w[0]);
    set32(c.r[16], c.r[16].w[0] << 2);
    set32(c.r[16], c.r[16].w[0] + c.r[2].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C1528u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 49u, depth + 1u); else { c.pc = 0x00124ED8u; return; } if (c.pc != 0x003C1528u) [[unlikely]] return; }
L_003C1528:
    st32((c.r[16].w[0] + 4u), c.r[18].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0])));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    st32((c.r[16].w[0] + 16u), 0u);
    set32(c.r[2], ld32((c.r[3].w[0] + 36u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003C1544u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003C1544u) [[unlikely]] return; }
L_003C1544:
    set32(c.r[3], ld32((c.r[18].w[0])));
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] + 36u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003C155Cu); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003C155Cu) [[unlikely]] return; }
L_003C155C:
    st32((c.r[16].w[0] + 36u), 0u);
    set32(c.r[17], c.r[17].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[3].d[0] = c.r[17].sd[0] < 0ll ? 1ull : 0ull;
    set32(c.r[4], c.r[17].w[0] + 3u);
    st32((c.r[16].w[0] + 20u), c.r[17].w[0]);
    if (c.r[3].d[0] != 0) c.r[17].d[0] = c.r[4].d[0];
    set32(c.r[17], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[17].w[0]) >> 2));
    set32(c.r[3], 0u + 1u);
    st32((c.r[16].w[0] + 24u), c.r[17].w[0]);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    st32((c.r[16].w[0] + 28u), 0u);
    st32((c.r[16].w[0] + 32u), 0u);
    st32((c.r[16].w[0] + 40u), 0u);
    c.budget -= 14;
L_003C1594:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003C15B0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_003C15D0; } }
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 44u);
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00124ED8u | kUnwind; return; } [[clang::musttail]] return unit_0009(c, 49u, depth); }
L_003C15D0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003C15E0:
    set32(c.r[6], c.r[4].w[0] + 7u);
    c.r[3].d[0] = c.r[4].sd[0] < 0ll ? 1ull : 0ull;
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    if (c.r[3].d[0] != 0) c.r[2].d[0] = c.r[6].d[0];
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 3));
    c.budget -= 7;
    { const bool t = c.r[2].sd[0] <= 0; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_003C161C; } }
    c.budget -= 1;
L_003C1600:
    set32(c.r[5], c.r[5].w[0] << 8);
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; c.r[5].d[0] = c.r[5].d[0] | 255ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003C1600u | kUnwind; return; } goto L_003C1600; } }
L_003C161C:
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    if (c.r[3].d[0] != 0) c.r[2].d[0] = c.r[6].d[0];
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 3));
    set32(c.r[3], c.r[2].w[0] << 3);
    set32(c.r[2], c.r[4].w[0] - c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_003C1654; } }
L_003C1638:
    set32(c.r[5], c.r[5].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; c.r[5].d[0] = c.r[5].d[0] | 1ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003C1638u | kUnwind; return; } goto L_003C1638; } }
L_003C1654:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[5].d[0] + 0ull;  c.pc = t; return; }
L_003C1660:
    set32(c.r[29], c.r[29].w[0] - 80u);
    set32(c.r[2], 0u + 32u);
    st64((c.r[29].w[0] + 40u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[16].d[0]);
    st64((c.r[29].w[0] + 56u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 12u)));
    set32(c.r[6], ld32((c.r[17].w[0] + 36u)));
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    set32(c.r[4], c.r[2].w[0] + 7u);
    c.r[3].d[0] = c.r[2].sd[0] < 0ll ? 1ull : 0ull;
    if (c.r[3].d[0] != 0) c.r[2].d[0] = c.r[4].d[0];
    c.r[5].d[0] = c.r[6].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 17;
    { const bool t = c.r[5].d[0] == 0ull; set32(c.r[18], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 3));  if (t) { goto L_003C1738; } }
    set32(c.r[19], c.r[17].w[0] + 28u);
    ldl(c.r[2], (c.r[19].w[0] + 7u));
    ldr(c.r[2], (c.r[19].w[0]));
    sdl(c.r[2], (c.r[29].w[0] + 7u));
    sdr(c.r[2], (c.r[29].w[0]));
    set32(c.r[5], ld32((c.r[29].w[0] + 4u)));
    c.budget -= 8;
    { const bool t = c.r[5].d[0] == 0ull; set32(c.r[16], c.r[29].w[0] + 16u);  if (t) { goto L_003C1708; } }
    set32(c.r[5], c.r[5].w[0] - c.r[6].w[0]);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C16D8u); c.r[6].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B4(c, 230u, depth + 1u); else { c.pc = 0x003D2388u; return; } if (c.pc != 0x003C16D8u) [[unlikely]] return; }
L_003C16D8:
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0] + 32u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003C16F0u); c.r[6].d[0] = c.r[29].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003C16F0u) [[unlikely]] return; }
L_003C16F0:
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0] + 28u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003C1708u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003C1708u) [[unlikely]] return; }
L_003C1708:
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[5], 0u + 1u);
    set32(c.r[6], ld32((c.r[17].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0] + 24u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003C1724u); c.r[7].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003C1724u) [[unlikely]] return; }
L_003C1724:
    set32(c.r[3], ld32((c.r[19].w[0])));
    set32(c.r[2], ld32((c.r[17].w[0] + 32u)));
    st32((c.r[17].w[0] + 40u), c.r[3].w[0]);
    st32((c.r[17].w[0] + 36u), c.r[2].w[0]);
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
L_003C1738:
    c.r[2].d[0] = c.r[18].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    set32(c.r[3], 0u + 3u);
    if (c.r[2].d[0] == 0) c.r[18].d[0] = c.r[6].d[0];
    c.budget -= 5;
    if (c.r[18].d[0] != c.r[3].d[0]) { set32(c.r[2], 0u + 2u);  goto L_003C1798; }
    set32(c.r[7], ld32((c.r[17].w[0] + 40u)));
    set32(c.r[6], c.r[6].w[0] - 3u);
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    c.r[3].d[0] = ld8((c.r[7].w[0]));
    set32(c.r[7], c.r[7].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] << 8);
    c.r[4].d[0] = ld8((c.r[7].w[0]));
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    set32(c.r[3], ld32((c.r[17].w[0] + 12u)));
    set32(c.r[7], c.r[7].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] << 8);
    c.r[5].d[0] = ld8((c.r[7].w[0]));
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.r[2].d[0] = c.r[2].d[0] | c.r[4].d[0];
    set32(c.r[3], c.r[3].w[0] + 24u);
    set32(c.r[2], c.r[2].w[0] << 8);
    st32((c.r[17].w[0] + 36u), c.r[6].w[0]);
    c.budget -= 19;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] | c.r[5].d[0];  if (t) { goto L_003C1878; } }
L_003C1798:
    c.budget -= 2;
    if (c.r[18].d[0] != c.r[2].d[0]) { set32(c.r[2], 0u + 1u);  goto L_003C17E0; }
    set32(c.r[7], ld32((c.r[17].w[0] + 40u)));
    set32(c.r[6], c.r[6].w[0] - 2u);
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    c.r[4].d[0] = ld8((c.r[7].w[0]));
    set32(c.r[7], c.r[7].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] << 8);
    c.r[5].d[0] = ld8((c.r[7].w[0]));
    set32(c.r[3], ld32((c.r[17].w[0] + 12u)));
    c.r[2].d[0] = c.r[2].d[0] | c.r[4].d[0];
    set32(c.r[2], c.r[2].w[0] << 8);
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.r[2].d[0] = c.r[2].d[0] | c.r[5].d[0];
    set32(c.r[3], c.r[3].w[0] + 16u);
    c.budget -= 15;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 36u), c.r[6].w[0]);  if (t) { goto L_003C1878; } }
    c.budget -= 1;
L_003C17E0:
    c.budget -= 2;
    if (c.r[18].d[0] != c.r[2].d[0]) { set32(c.r[2], 0u + 4u);  goto L_003C1818; }
    set32(c.r[7], ld32((c.r[17].w[0] + 40u)));
    set32(c.r[5], c.r[6].w[0] - 1u);
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    c.r[4].d[0] = ld8((c.r[7].w[0]));
    set32(c.r[7], c.r[7].w[0] + 1u);
    set32(c.r[3], ld32((c.r[17].w[0] + 12u)));
    set32(c.r[2], c.r[2].w[0] << 8);
    c.r[2].d[0] = c.r[2].d[0] | c.r[4].d[0];
    st32((c.r[17].w[0] + 36u), c.r[5].w[0]);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[3].w[0] + 8u);  if (t) { goto L_003C1878; } }
    c.budget -= 1;
L_003C1818:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != c.r[2].d[0]; c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_003C1888; } }
    set32(c.r[7], ld32((c.r[17].w[0] + 40u)));
    set32(c.r[6], c.r[6].w[0] - 4u);
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    c.r[3].d[0] = ld8((c.r[7].w[0]));
    set32(c.r[7], c.r[7].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] << 8);
    c.r[4].d[0] = ld8((c.r[7].w[0]));
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    set32(c.r[3], ld32((c.r[17].w[0] + 12u)));
    set32(c.r[7], c.r[7].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] << 8);
    c.r[5].d[0] = ld8((c.r[7].w[0]));
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.r[2].d[0] = c.r[2].d[0] | c.r[4].d[0];
    c.r[4].d[0] = ld8((c.r[7].w[0]));
    set32(c.r[2], c.r[2].w[0] << 8);
    set32(c.r[3], c.r[3].w[0] + 32u);
    c.r[2].d[0] = c.r[2].d[0] | c.r[5].d[0];
    set32(c.r[7], c.r[7].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] << 8);
    st32((c.r[17].w[0] + 36u), c.r[6].w[0]);
    c.r[2].d[0] = c.r[2].d[0] | c.r[4].d[0];
    c.budget -= 22;
L_003C1878:
    st32((c.r[17].w[0] + 40u), c.r[7].w[0]);
    st32((c.r[17].w[0] + 8u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 12u), c.r[3].w[0]);
    c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 4;
L_003C1888:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 56u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003C18A0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00430000u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] + 21700u);
    set32(c.r[6], ld32((c.r[17].w[0] + 12u)));
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.r[5].d[0] = c.r[6].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 14;
    { const bool t = c.r[5].d[0] == 0ull; st32((c.r[2].w[0]), c.r[3].w[0]);  if (t) { goto L_003C18E4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C18E0u);  if (depth < kMaxDepth) unit_00B0(c, 192u, depth + 1u); else { c.pc = 0x003C1660u; return; } if (c.pc != 0x003C18E0u) [[unlikely]] return; }
L_003C18E0:
    set32(c.r[6], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 1;
L_003C18E4:
    c.r[2].d[0] = c.r[6].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003C1900:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00430000u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] + 21700u);
    set32(c.r[6], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.r[5].d[0] = c.r[6].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 14;
    { const bool t = c.r[5].d[0] == 0ull; st32((c.r[2].w[0]), c.r[3].w[0]);  if (t) { goto L_003C1968; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C1940u);  if (depth < kMaxDepth) unit_00B0(c, 192u, depth + 1u); else { c.pc = 0x003C1660u; return; } if (c.pc != 0x003C1940u) [[unlikely]] return; }
L_003C1940:
    set32(c.r[6], ld32((c.r[16].w[0] + 12u)));
    c.r[3].d[0] = c.r[6].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003C1968; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 16u)));
    st32((c.r[16].w[0] + 12u), 0u);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 16u), c.r[3].w[0]);  if (t) { goto L_003C1998; } }
    c.budget -= 1;
L_003C1968:
    set32(c.r[3], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[5], c.r[17].w[0] << 2);
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[6], c.r[6].w[0] - c.r[17].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 21704u)));
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> (c.r[6].w[0] & 31u)));
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 12u), c.r[6].w[0]);
    c.r[2].d[0] = c.r[2].d[0] & c.r[4].d[0];
    c.budget -= 12;
L_003C1998:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003C19B0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[4].w[0] + 16u)));  c.pc = t; return; }
L_003C19B8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0] + 36u)));
    c.budget -= 9;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003C19DCu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003C19DCu) [[unlikely]] return; }
L_003C19DC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003C1A00; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003C1A00; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_003C1A00; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003C1A00:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003C1A10:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[2], c.r[16].w[0] << 2);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[18].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[18], c.r[18].w[0] + c.r[2].w[0]);
    set32(c.r[18], ld32((c.r[18].w[0] + 21704u)));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C1A48u); c.r[19].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B0(c, 201u, depth + 1u); else { c.pc = 0x003C19B0u; return; } if (c.pc != 0x003C1A48u) [[unlikely]] return; }
L_003C1A48:
    c.r[2].d[0] = c.r[2].d[0] & 7ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], 0u + 8u);  if (t) { goto L_003C1A60; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C1A60u); set32(c.r[5], c.r[5].w[0] - c.r[2].w[0]);  if (depth < kMaxDepth) unit_00B0(c, 199u, depth + 1u); else { c.pc = 0x003C1900u; return; } if (c.pc != 0x003C1A60u) [[unlikely]] return; }
L_003C1A60:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C1A6Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B0(c, 199u, depth + 1u); else { c.pc = 0x003C1900u; return; } if (c.pc != 0x003C1A6Cu) [[unlikely]] return; }
L_003C1A6C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_003C1A84; } }
    c.budget -= 1;
L_003C1A78:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C1A80u);  if (depth < kMaxDepth) unit_00B0(c, 199u, depth + 1u); else { c.pc = 0x003C1900u; return; } if (c.pc != 0x003C1A80u) [[unlikely]] return; }
L_003C1A80:
    c.r[16].d[0] = c.r[16].d[0] | c.r[2].d[0];
    c.budget -= 1;
L_003C1A84:
    c.r[2].d[0] = c.r[16].d[0] & c.r[18].d[0];
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[19].d[0]; set32(c.r[16], c.r[16].w[0] << 8);  if (t) { goto L_003C1AA4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C1A98u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B0(c, 202u, depth + 1u); else { c.pc = 0x003C19B8u; return; } if (c.pc != 0x003C1A98u) [[unlikely]] return; }
L_003C1A98:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], 0u + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003C1A78u | kUnwind; return; } goto L_003C1A78; } }
L_003C1AA4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C1AACu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B0(c, 202u, depth + 1u); else { c.pc = 0x003C19B8u; return; } if (c.pc != 0x003C1AACu) [[unlikely]] return; }
L_003C1AAC:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003C1AD0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00430000u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 40u), c.r[31].d[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C1AFCu); set32(c.r[19], ld32((c.r[2].w[0] + 21752u)));  if (depth < kMaxDepth) unit_00B0(c, 201u, depth + 1u); else { c.pc = 0x003C19B0u; return; } if (c.pc != 0x003C1AFCu) [[unlikely]] return; }
L_003C1AFC:
    c.r[2].d[0] = c.r[2].d[0] & 7ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], 0u + 8u);  if (t) { goto L_003C1B14; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C1B14u); set32(c.r[5], c.r[5].w[0] - c.r[2].w[0]);  if (depth < kMaxDepth) unit_00B0(c, 199u, depth + 1u); else { c.pc = 0x003C1900u; return; } if (c.pc != 0x003C1B14u) [[unlikely]] return; }
L_003C1B14:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[18].sd[0] = static_cast<std::int32_t>(0x80010000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C1B24u); set32(c.r[5], 0u + 12u);  if (depth < kMaxDepth) unit_00B0(c, 199u, depth + 1u); else { c.pc = 0x003C1900u; return; } if (c.pc != 0x003C1B24u) [[unlikely]] return; }
L_003C1B24:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[20], 0u + 4095u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = c.r[18].d[0] | 12ull;  if (t) { goto L_003C1B54; } }
    c.budget -= 1;
L_003C1B38:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[20].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_003C1B70; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == c.r[18].d[0]; set32(c.r[2], 0u + 2u);  if (t) { goto L_003C1B70; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C1B50u); set32(c.r[16], c.r[16].w[0] << 4);  if (depth < kMaxDepth) unit_00B0(c, 199u, depth + 1u); else { c.pc = 0x003C1900u; return; } if (c.pc != 0x003C1B50u) [[unlikely]] return; }
L_003C1B50:
    c.r[16].d[0] = c.r[16].d[0] | c.r[2].d[0];
    c.budget -= 1;
L_003C1B54:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C1B5Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B0(c, 202u, depth + 1u); else { c.pc = 0x003C19B8u; return; } if (c.pc != 0x003C1B5Cu) [[unlikely]] return; }
L_003C1B5C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[3].d[0] = c.r[16].d[0] & c.r[19].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003C1B38u | kUnwind; return; } goto L_003C1B38; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003C1B70:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 40u));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003C1B90:
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[6], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 9400u)));
    set32(c.r[3], c.r[3].w[0] << 12);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[1], c.r[1].w[0] + 9408u);
    set32(c.r[3], c.r[1].w[0] + c.r[3].w[0]);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[5].w[0]), c.r[3].w[0]);  c.pc = t; return; }
L_003C1BC0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_003C1BC8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00430000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00430000u);
    st32((c.r[2].w[0] + 22804u), c.r[4].w[0]);
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[3].w[0] + 22808u), c.r[5].w[0]);  c.pc = t; return; }
L_003C1BE0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[3], ld32((c.r[2].w[0] + 22804u)));
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_003C1C04; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00430000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003C1C04u); set32(c.r[4], ld32((c.r[2].w[0] + 22808u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003C1C04u) [[unlikely]] return; }
L_003C1C04:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003C1C18:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00430000u);
    c.r[2].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] + 22800u);
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0]), c.r[3].w[0]);  c.pc = t; return; }
L_003C1C38:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00430000u);
    c.r[2].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] + 22800u);
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0]), c.r[3].w[0]);  c.pc = t; return; }
L_003C1C58:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[3], ld32((c.r[2].w[0] + 22800u)));
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    c.r[19].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[20].d[0]);
    c.r[20].d[0] = c.r[8].d[0] + 0ull;
    c.budget -= 15;
    { const bool t = c.r[3].d[0] != 0ull; st64((c.r[29].w[0] + 40u), c.r[31].d[0]);  if (t) { goto L_003C1C9C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C1C9Cu);  if (depth < kMaxDepth) unit_00B0(c, 224u, depth + 1u); else { c.pc = 0x003C1C18u; return; } if (c.pc != 0x003C1C9Cu) [[unlikely]] return; }
L_003C1C9C:
    st16((c.r[18].w[0]), static_cast<std::uint16_t>(0u));
    st16((c.r[19].w[0]), static_cast<std::uint16_t>(0u));
    c.budget -= 4;
    { const bool t = c.r[17].d[0] != 0ull; st16((c.r[20].w[0]), static_cast<std::uint16_t>(0u));  if (t) { goto L_003C1CB4; } }
    c.budget -= 2;
    { const bool t = c.r[16].sd[0] <= 0; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003C1DEC; } }
L_003C1CB4:
    c.r[11].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[11].w[0] + 4712u);
    c.budget -= 5;
    { const bool t = c.r[16].sd[0] <= 0; c.r[10].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 512u)));  if (t) { goto L_003C1D24; } }
    c.r[8].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 2;
L_003C1CD0:
    set32(c.r[3], c.r[17].w[0] + c.r[7].w[0]);
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.r[6].d[0] = c.r[7].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[8].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 256u)));
    mmi::mult(c, 0, c.r[10].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[5], c.r[3].w[0] + 1023u);
    c.r[4].d[0] = c.r[3].sd[0] < 0ll ? 1ull : 0ull;
    c.r[2].d[0] = c.r[3].d[0] + 0ull;
    if (c.r[4].d[0] != 0) c.r[2].d[0] = c.r[5].d[0];
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 10));
    set32(c.r[2], c.r[2].w[0] << 10);
    set32(c.r[3], c.r[3].w[0] - c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[8].w[0]);
    c.budget -= 19;
    { const bool t = c.r[6].d[0] != 0ull; c.r[10].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0])));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003C1CD0u | kUnwind; return; } goto L_003C1CD0; } }
    set32(c.r[2], c.r[11].w[0] + 4712u);
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_003C1D24:
    c.budget -= 2;
    { const bool t = c.r[16].sd[0] <= 0; c.r[8].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 1024u)));  if (t) { goto L_003C1D7C; } }
    c.r[9].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_003C1D30:
    set32(c.r[3], c.r[17].w[0] + c.r[7].w[0]);
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.r[6].d[0] = c.r[7].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[9].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 256u)));
    mmi::mult(c, 0, c.r[8].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[5], c.r[3].w[0] + 1023u);
    c.r[4].d[0] = c.r[3].sd[0] < 0ll ? 1ull : 0ull;
    c.r[2].d[0] = c.r[3].d[0] + 0ull;
    if (c.r[4].d[0] != 0) c.r[2].d[0] = c.r[5].d[0];
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 10));
    set32(c.r[2], c.r[2].w[0] << 10);
    set32(c.r[3], c.r[3].w[0] - c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[9].w[0]);
    c.budget -= 19;
    { const bool t = c.r[6].d[0] != 0ull; c.r[8].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0])));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003C1D30u | kUnwind; return; } goto L_003C1D30; } }
L_003C1D7C:
    set32(c.r[2], c.r[11].w[0] + 4712u);
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = c.r[16].sd[0] <= 0; c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 1536u)));  if (t) { goto L_003C1DDC; } }
    c.r[9].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_003C1D90:
    set32(c.r[3], c.r[17].w[0] + c.r[7].w[0]);
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.r[6].d[0] = c.r[7].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[9].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 256u)));
    mmi::mult(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    c.r[4].d[0] = c.r[3].sd[0] < 0ll ? 1ull : 0ull;
    set32(c.r[5], c.r[3].w[0] + 1023u);
    c.r[2].d[0] = c.r[3].d[0] + 0ull;
    if (c.r[4].d[0] != 0) c.r[2].d[0] = c.r[5].d[0];
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 10));
    set32(c.r[2], c.r[2].w[0] << 10);
    set32(c.r[3], c.r[3].w[0] - c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[9].w[0]);
    c.budget -= 19;
    { const bool t = c.r[6].d[0] != 0ull; c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0])));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003C1D90u | kUnwind; return; } goto L_003C1D90; } }
L_003C1DDC:
    st16((c.r[18].w[0]), static_cast<std::uint16_t>(c.r[10].w[0]));
    c.r[2].d[0] = 0ull + 0ull;
    st16((c.r[19].w[0]), static_cast<std::uint16_t>(c.r[8].w[0]));
    st16((c.r[20].w[0]), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.budget -= 4;
L_003C1DEC:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 40u));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003C1E10:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], ld32((c.r[2].w[0] + 22800u)));
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 11;
    { const bool t = c.r[3].d[0] != 0ull; st64((c.r[29].w[0] + 24u), c.r[31].d[0]);  if (t) { goto L_003C1E44; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C1E44u);  if (depth < kMaxDepth) unit_00B0(c, 224u, depth + 1u); else { c.pc = 0x003C1C18u; return; } if (c.pc != 0x003C1E44u) [[unlikely]] return; }
L_003C1E44:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.r[8].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + 14152u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C1E60u); set32(c.r[5], 0u + 6u);  if (depth < kMaxDepth) unit_00B0(c, 226u, depth + 1u); else { c.pc = 0x003C1C58u; return; } if (c.pc != 0x003C1E60u) [[unlikely]] return; }
L_003C1E60:
    c.r[2].d[0] = 0ull + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003C1E80:
    c.r[7].d[0] = ld16((c.r[5].w[0]));
    c.r[2].d[0] = 0ull + 0ull;
    c.r[5].d[0] = ld16((c.r[4].w[0]));
    c.r[3].d[0] = ld16((c.r[6].w[0]));
    mmi::mult(c, 0, c.r[5].w[0], c.r[7].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));  c.pc = t; return; }
L_003C1EA0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00430000u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[16], c.r[2].w[0] + 23256u);
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; st64((c.r[29].w[0] + 8u), c.r[31].d[0]);  if (t) { goto L_003C1EDC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C1EC4u);  if (depth < kMaxDepth) unit_00B1(c, 29u, depth + 1u); else { c.pc = 0x003C57F8u; return; } if (c.pc != 0x003C1EC4u) [[unlikely]] return; }
L_003C1EC4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[4], c.r[4].w[0] + 23304u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C1ED8u); set32(c.r[6], 0u + 64u);  if (depth < kMaxDepth) unit_0009(c, 49u, depth + 1u); else { c.pc = 0x00124ED8u; return; } if (c.pc != 0x003C1ED8u) [[unlikely]] return; }
L_003C1ED8:
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 1;
L_003C1EDC:
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003C1EF8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00430000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], c.r[3].w[0] + 23256u);
    set32(c.r[2], ld32((c.r[3].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[3].w[0]), c.r[2].w[0]);  if (t) { goto L_003C1F38; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00430000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] + 23304u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C1F2Cu); set32(c.r[6], 0u + 64u);  if (depth < kMaxDepth) unit_0009(c, 49u, depth + 1u); else { c.pc = 0x00124ED8u; return; } if (c.pc != 0x003C1F2Cu) [[unlikely]] return; }
L_003C1F2C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00B1(c, 35u, depth); }
L_003C1F38:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003C1F48:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].sd[0] = static_cast<std::int32_t>(0x00430000u);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    set32(c.r[3], c.r[18].w[0] + 23304u);
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 11;
    { const bool t = c.r[2].d[0] == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_003C1F9C; } }
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_003C1F78:
    c.r[2].d[0] = c.r[17].sd[0] < 16ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], c.r[3].w[0] + 4u);  if (t) { goto L_003C1F9C; } }
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 6;
    if (c.r[2].d[0] != 0ull) { set32(c.r[17], c.r[17].w[0] + 1u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003C1F78u | kUnwind; return; } goto L_003C1F78; }
L_003C1F9C:
    set32(c.r[3], 0u + 16u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == c.r[3].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003C2010; } }
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C1FB8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 49u, depth + 1u); else { c.pc = 0x00124ED8u; return; } if (c.pc != 0x003C1FB8u) [[unlikely]] return; }
L_003C1FB8:
    set32(c.r[3], c.r[18].w[0] + 23304u);
    set32(c.r[2], c.r[17].w[0] << 2);
    set32(c.r[4], c.r[16].w[0] + 2600u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[5], 0u + 4116u);
    st32((c.r[2].w[0]), c.r[16].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C1FD8u); st8((c.r[16].w[0] + 422u), static_cast<std::uint8_t>(c.r[17].w[0]));  if (depth < kMaxDepth) unit_00B1(c, 36u, depth + 1u); else { c.pc = 0x003C5940u; return; } if (c.pc != 0x003C1FD8u) [[unlikely]] return; }
L_003C1FD8:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; st32((c.r[16].w[0] + 432u), c.r[3].w[0]);  if (t) { goto L_003C2010; } }
    set32(c.r[2], c.r[16].w[0] + 35u);
    set32(c.r[3], 0u - 32u);
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    st32((c.r[16].w[0]), c.r[2].w[0]);
    set32(c.r[4], c.r[16].w[0] + 484u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C2004u); set32(c.r[6], 0u + 8u);  if (depth < kMaxDepth) unit_0009(c, 49u, depth + 1u); else { c.pc = 0x00124ED8u; return; } if (c.pc != 0x003C2004u) [[unlikely]] return; }
L_003C2004:
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0] + 420u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
L_003C2010:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003C2028:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 432u)));
    c.r[17].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 422u)));
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_003C2054; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C2054u); st32((c.r[16].w[0] + 432u), 0u);  if (depth < kMaxDepth) unit_00B1(c, 39u, depth + 1u); else { c.pc = 0x003C5A18u; return; } if (c.pc != 0x003C2054u) [[unlikely]] return; }
L_003C2054:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C2064u); set32(c.r[6], 0u + 2600u);  if (depth < kMaxDepth) unit_0009(c, 49u, depth + 1u); else { c.pc = 0x00124ED8u; return; } if (c.pc != 0x003C2064u) [[unlikely]] return; }
L_003C2064:
    set32(c.r[3], c.r[17].w[0] << 2);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[1], c.r[1].w[0] + c.r[3].w[0]);
    st32((c.r[1].w[0] + 23304u), 0u);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003C2088:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[5].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    set32(c.r[4], c.r[16].w[0] + 436u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[6], 0u + 48u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C20B0u); set32(c.r[17], ld32((c.r[16].w[0] + 432u)));  if (depth < kMaxDepth) unit_0009(c, 49u, depth + 1u); else { c.pc = 0x00124ED8u; return; } if (c.pc != 0x003C20B0u) [[unlikely]] return; }
L_003C20B0:
    set32(c.r[4], c.r[16].w[0] + 484u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C20C0u); set32(c.r[6], 0u + 60u);  if (depth < kMaxDepth) unit_0009(c, 49u, depth + 1u); else { c.pc = 0x00124ED8u; return; } if (c.pc != 0x003C20C0u) [[unlikely]] return; }
L_003C20C0:
    set32(c.r[4], c.r[16].w[0] + 544u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C20D0u); set32(c.r[6], 0u + 256u);  if (depth < kMaxDepth) unit_0009(c, 49u, depth + 1u); else { c.pc = 0x00124ED8u; return; } if (c.pc != 0x003C20D0u) [[unlikely]] return; }
L_003C20D0:
    set32(c.r[4], c.r[16].w[0] + 800u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C20E0u); set32(c.r[6], 0u + 256u);  if (depth < kMaxDepth) unit_0009(c, 49u, depth + 1u); else { c.pc = 0x00124ED8u; return; } if (c.pc != 0x003C20E0u) [[unlikely]] return; }
L_003C20E0:
    set32(c.r[4], c.r[16].w[0] + 1056u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C20F0u); set32(c.r[6], 0u + 768u);  if (depth < kMaxDepth) unit_0009(c, 49u, depth + 1u); else { c.pc = 0x00124ED8u; return; } if (c.pc != 0x003C20F0u) [[unlikely]] return; }
L_003C20F0:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C2100u); set32(c.r[6], 0u + 384u);  if (depth < kMaxDepth) unit_0009(c, 49u, depth + 1u); else { c.pc = 0x00124ED8u; return; } if (c.pc != 0x003C2100u) [[unlikely]] return; }
L_003C2100:
    set32(c.r[4], c.r[16].w[0] + 1824u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C2110u); set32(c.r[6], 0u + 768u);  if (depth < kMaxDepth) unit_0009(c, 49u, depth + 1u); else { c.pc = 0x00124ED8u; return; } if (c.pc != 0x003C2110u) [[unlikely]] return; }
L_003C2110:
    st8((c.r[16].w[0] + 421u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[16].w[0] + 432u)));
    st32((c.r[16].w[0] + 424u), 0u);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_003C213C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C212Cu); st32((c.r[16].w[0] + 432u), 0u);  if (depth < kMaxDepth) unit_00B1(c, 39u, depth + 1u); else { c.pc = 0x003C5A18u; return; } if (c.pc != 0x003C212Cu) [[unlikely]] return; }
L_003C212C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C2138u); set32(c.r[5], 0u + 4116u);  if (depth < kMaxDepth) unit_00B1(c, 36u, depth + 1u); else { c.pc = 0x003C5940u; return; } if (c.pc != 0x003C2138u) [[unlikely]] return; }
L_003C2138:
    st32((c.r[16].w[0] + 432u), c.r[2].w[0]);
    c.budget -= 1;
L_003C213C:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003C2150:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C216Cu); c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B0(c, 248u, depth + 1u); else { c.pc = 0x003C2088u; return; } if (c.pc != 0x003C216Cu) [[unlikely]] return; }
L_003C216C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    st32((c.r[16].w[0] + 428u), c.r[17].w[0]);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003C2188:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 88u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 112u), c.r[20].d[0]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 80u), c.r[16].d[0]);
    st64((c.r[29].w[0] + 96u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 104u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 120u), c.r[21].d[0]);
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    set32(c.r[19], ld32((c.r[20].w[0] + 428u)));
    c.budget -= 12;
    { const bool t = c.r[19].d[0] == 0ull; set32(c.r[17], c.r[20].w[0] + 484u);  if (t) { goto L_003C230C; } }
    c.r[21].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 64u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C21D0u); set32(c.r[16], c.r[21].w[0] - 12936u);  if (depth < kMaxDepth) unit_0009(c, 49u, depth + 1u); else { c.pc = 0x00124ED8u; return; } if (c.pc != 0x003C21D0u) [[unlikely]] return; }
L_003C21D0:
    set32(c.r[18], c.r[16].w[0] + 4u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[18].d[0]; st32((c.r[29].w[0] + 64u), 0u);  if (t) { goto L_003C21F8; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_003C21E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C21E8u); set32(c.r[5], 0u + 8u);  if (depth < kMaxDepth) unit_00B0(c, 199u, depth + 1u); else { c.pc = 0x003C1900u; return; } if (c.pc != 0x003C21E8u) [[unlikely]] return; }
L_003C21E8:
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] != c.r[18].d[0]; c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003C21E0u | kUnwind; return; } goto L_003C21E0; } }
L_003C21F8:
    set32(c.r[4], c.r[21].w[0] - 12936u);
    set32(c.r[5], 0u + 4u);
    set32(c.r[6], c.r[29].w[0] + 64u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C220Cu); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00AD(c, 196u, depth + 1u); else { c.pc = 0x003B5D10u; return; } if (c.pc != 0x003C220Cu) [[unlikely]] return; }
L_003C220C:
    set32(c.r[3], ld32((c.r[29].w[0] + 64u)));
    set32(c.r[18], c.r[18].w[0] + c.r[3].w[0]);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == c.r[18].d[0]; set32(c.r[4], c.r[21].w[0] - 12936u);  if (t) { goto L_003C223C; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_003C2220:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C2228u); set32(c.r[5], 0u + 8u);  if (depth < kMaxDepth) unit_00B0(c, 199u, depth + 1u); else { c.pc = 0x003C1900u; return; } if (c.pc != 0x003C2228u) [[unlikely]] return; }
L_003C2228:
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] != c.r[18].d[0]; c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003C2220u | kUnwind; return; } goto L_003C2220; } }
    set32(c.r[4], c.r[21].w[0] - 12936u);
    c.budget -= 1;
L_003C223C:
    set32(c.r[5], 0u + 512u);
    set32(c.r[6], c.r[29].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C224Cu); c.r[7].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AD(c, 196u, depth + 1u); else { c.pc = 0x003B5D10u; return; } if (c.pc != 0x003C224Cu) [[unlikely]] return; }
L_003C224C:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0; c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 61u)));  if (t) { goto L_003C230C; } }
    set32(c.r[6], 0u + 1u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 3u)));
    set32(c.r[4], ld32((c.r[29].w[0] + 4u)));
    c.r[5].d[0] = c.r[7].sd[0] < 16ll ? 1ull : 0ull;
    set32(c.r[2], ld32((c.r[29].w[0] + 8u)));
    ldl(c.r[8], (c.r[29].w[0] + 43u));
    ldr(c.r[8], (c.r[29].w[0] + 36u));
    lwl(c.r[9], (c.r[29].w[0] + 47u));
    lwr(c.r[9], (c.r[29].w[0] + 44u));
    sdl(c.r[8], (c.r[17].w[0] + 35u));
    sdr(c.r[8], (c.r[17].w[0] + 28u));
    swl(c.r[9], (c.r[17].w[0] + 39u));
    swr(c.r[9], (c.r[17].w[0] + 36u));
    st32((c.r[17].w[0] + 4u), c.r[3].w[0]);
    ldl(c.r[8], (c.r[29].w[0] + 55u));
    ldr(c.r[8], (c.r[29].w[0] + 48u));
    lwl(c.r[9], (c.r[29].w[0] + 59u));
    lwr(c.r[9], (c.r[29].w[0] + 56u));
    sdl(c.r[8], (c.r[17].w[0] + 47u));
    sdr(c.r[8], (c.r[17].w[0] + 40u));
    swl(c.r[9], (c.r[17].w[0] + 51u));
    swr(c.r[9], (c.r[17].w[0] + 48u));
    st32((c.r[17].w[0] + 8u), c.r[4].w[0]);
    st32((c.r[17].w[0] + 12u), c.r[2].w[0]);
    c.budget -= 26;
    { const bool t = c.r[5].d[0] != 0ull; st32((c.r[17].w[0]), c.r[6].w[0]);  if (t) { goto L_003C22D8; } }
    st16((c.r[17].w[0] + 52u), static_cast<std::uint16_t>(0u));
    set32(c.r[6], c.r[17].w[0] + 58u);
    set32(c.r[4], c.r[17].w[0] + 54u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C22D0u); set32(c.r[5], c.r[17].w[0] + 56u);  if (depth < kMaxDepth) unit_00B0(c, 231u, depth + 1u); else { c.pc = 0x003C1E10u; return; } if (c.pc != 0x003C22D0u) [[unlikely]] return; }
L_003C22D0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0] + 80u));  if (t) { goto L_003C2310; } }
L_003C22D8:
    c.r[2].d[0] = c.r[7].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[17].w[0] + 52u);  if (t) { goto L_003C2300; } }
    ldl(c.r[2], (c.r[20].w[0] + 2599u));
    ldr(c.r[2], (c.r[20].w[0] + 2592u));
    sdl(c.r[2], (c.r[17].w[0] + 59u));
    sdr(c.r[2], (c.r[17].w[0] + 52u));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0] + 80u));  if (t) { goto L_003C2310; } }
    c.budget -= 1;
L_003C2300:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C230Cu); set32(c.r[6], 0u + 8u);  if (depth < kMaxDepth) unit_0009(c, 49u, depth + 1u); else { c.pc = 0x00124ED8u; return; } if (c.pc != 0x003C230Cu) [[unlikely]] return; }
L_003C230C:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 80u));
    c.budget -= 1;
L_003C2310:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 88u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 96u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 104u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 112u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 120u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_003C2330:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[2], 0u - 1u);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 428u)));
    c.budget -= 11;
    { const bool t = c.r[3].d[0] == 0ull; c.r[4].d[0] = c.r[3].d[0] + 0ull;  if (t) { goto L_003C23EC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C2364u); set32(c.r[19], 0u + 1u);  if (depth < kMaxDepth) unit_00B0(c, 212u, depth + 1u); else { c.pc = 0x003C1AD0u; return; } if (c.pc != 0x003C2364u) [[unlikely]] return; }
L_003C2364:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[19].d[0]; set32(c.r[5], 0u + 20u);  if (t) { goto L_003C2378; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_003C23EC; } }
    c.budget -= 1;
L_003C2378:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C2380u); set32(c.r[4], ld32((c.r[18].w[0] + 428u)));  if (depth < kMaxDepth) unit_00B0(c, 197u, depth + 1u); else { c.pc = 0x003C18A0u; return; } if (c.pc != 0x003C2380u) [[unlikely]] return; }
L_003C2380:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[16], c.r[18].w[0] + 436u);  if (t) { goto L_003C239C; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 428u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C2394u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B0(c, 304u, depth + 1u); else { c.pc = 0x003C2760u; return; } if (c.pc != 0x003C2394u) [[unlikely]] return; }
L_003C2394:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003C23A8; } }
L_003C239C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_003C23EC; } }
    c.budget -= 1;
L_003C23A8:
    set32(c.r[16], c.r[18].w[0] + 484u);
    set32(c.r[17], c.r[18].w[0] + 544u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C23B8u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B0(c, 318u, depth + 1u); else { c.pc = 0x003C2940u; return; } if (c.pc != 0x003C23B8u) [[unlikely]] return; }
L_003C23B8:
    set32(c.r[4], ld32((c.r[18].w[0] + 428u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C23C8u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B0(c, 320u, depth + 1u); else { c.pc = 0x003C2A28u; return; } if (c.pc != 0x003C23C8u) [[unlikely]] return; }
L_003C23C8:
    set32(c.r[4], ld32((c.r[18].w[0] + 428u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[7], c.r[18].w[0] + 800u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C23E0u); set32(c.r[8], c.r[18].w[0] + 1056u);  if (depth < kMaxDepth) unit_00B0(c, 328u, depth + 1u); else { c.pc = 0x003C2BB0u; return; } if (c.pc != 0x003C23E0u) [[unlikely]] return; }
L_003C23E0:
    st8((c.r[18].w[0] + 421u), static_cast<std::uint8_t>(c.r[19].w[0]));
    st32((c.r[18].w[0] + 424u), 0u);
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
L_003C23EC:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003C2408:
    set32(c.r[2], ld32((c.r[4].w[0] + 424u)));
    c.r[2].d[0] = c.r[2].d[0] ^ 12ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  c.pc = t; return; }
L_003C2418:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[2].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 40u), c.r[21].d[0]);
    c.r[21].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[4], 0u + 12u);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[22].d[0]);
    st64((c.r[29].w[0] + 56u), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 424u)));
    c.budget -= 17;
    { const bool t = c.r[3].d[0] == c.r[4].d[0]; set32(c.r[22], ld32((c.r[17].w[0] + 488u)));  if (t) { goto L_003C2534; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C2464u); c.r[20].sd[0] = static_cast<std::int32_t>(0x00430000u);  if (depth < kMaxDepth) unit_00B1(c, 26u, depth + 1u); else { c.pc = 0x003C57E0u; return; } if (c.pc != 0x003C2464u) [[unlikely]] return; }
L_003C2464:
    set32(c.r[16], c.r[20].w[0] + 23368u);
    set32(c.r[4], ld32((c.r[17].w[0] + 428u)));
    st32((c.r[16].w[0]), c.r[2].w[0]);
    set32(c.r[5], c.r[17].w[0] + 484u);
    set32(c.r[9], ld32((c.r[17].w[0])));
    set32(c.r[6], c.r[17].w[0] + 544u);
    set32(c.r[8], ld32((c.r[17].w[0] + 424u)));
    set32(c.r[7], c.r[17].w[0] + 1056u);
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C2490u); set32(c.r[8], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[8].w[0]) >> 2));  if (depth < kMaxDepth) unit_00B0(c, 345u, depth + 1u); else { c.pc = 0x003C2E90u; return; } if (c.pc != 0x003C2490u) [[unlikely]] return; }
L_003C2490:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C2498u);  if (depth < kMaxDepth) unit_00B1(c, 26u, depth + 1u); else { c.pc = 0x003C57E0u; return; } if (c.pc != 0x003C2498u) [[unlikely]] return; }
L_003C2498:
    st32((c.r[16].w[0] + 12u), c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[17].w[0])));
    c.budget -= 2;
L_003C24A0:
    set32(c.r[2], c.r[18].w[0] << 6);
    set32(c.r[4], ld32((c.r[17].w[0] + 432u)));
    set32(c.r[7], c.r[19].w[0] + c.r[2].w[0]);
    set32(c.r[5], c.r[5].w[0] + c.r[2].w[0]);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C24BCu); set32(c.r[18], c.r[18].w[0] + 1u);  if (depth < kMaxDepth) unit_00B1(c, 41u, depth + 1u); else { c.pc = 0x003C5A58u; return; } if (c.pc != 0x003C24BCu) [[unlikely]] return; }
L_003C24BC:
    c.r[2].d[0] = c.r[18].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[5], ld32((c.r[17].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003C24A0u | kUnwind; return; } goto L_003C24A0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C24D0u);  if (depth < kMaxDepth) unit_00B1(c, 26u, depth + 1u); else { c.pc = 0x003C57E0u; return; } if (c.pc != 0x003C24D0u) [[unlikely]] return; }
L_003C24D0:
    set32(c.r[3], c.r[20].w[0] + 23368u);
    c.r[4].d[0] = c.r[22].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull; st32((c.r[3].w[0] + 16u), c.r[2].w[0]);  if (t) { goto L_003C2514; } }
    c.r[18].d[0] = 0ull + 0ull;
    set32(c.r[5], ld32((c.r[17].w[0])));
    c.budget -= 2;
L_003C24E8:
    set32(c.r[2], c.r[18].w[0] << 6);
    set32(c.r[4], ld32((c.r[17].w[0] + 432u)));
    set32(c.r[7], c.r[21].w[0] + c.r[2].w[0]);
    set32(c.r[5], c.r[5].w[0] + c.r[2].w[0]);
    set32(c.r[6], 0u + 1u);
    set32(c.r[5], c.r[5].w[0] + 192u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C2508u); set32(c.r[18], c.r[18].w[0] + 1u);  if (depth < kMaxDepth) unit_00B1(c, 41u, depth + 1u); else { c.pc = 0x003C5A58u; return; } if (c.pc != 0x003C2508u) [[unlikely]] return; }
L_003C2508:
    c.r[2].d[0] = c.r[18].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[5], ld32((c.r[17].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003C24E8u | kUnwind; return; } goto L_003C24E8; }
L_003C2514:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C251Cu);  if (depth < kMaxDepth) unit_00B1(c, 26u, depth + 1u); else { c.pc = 0x003C57E0u; return; } if (c.pc != 0x003C251Cu) [[unlikely]] return; }
L_003C251C:
    set32(c.r[3], c.r[20].w[0] + 23368u);
    st32((c.r[3].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[2], 0u + 96u);
    set32(c.r[3], ld32((c.r[17].w[0] + 424u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[17].w[0] + 424u), c.r[3].w[0]);
    c.budget -= 6;
L_003C2534:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 56u));
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003C2560:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 421u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003C2570; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 492u)));
    c.budget -= 1;
L_003C2570:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003C2578:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 421u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003C2588; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 488u)));
    c.budget -= 1;
L_003C2588:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003C2590:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 16u);  c.pc = t; return; }
L_003C2598:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  goto L_003C25C8; }
L_003C25B0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 421u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003C25C0; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 496u)));
    c.budget -= 1;
L_003C25C0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003C25C8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 96u);  c.pc = t; return; }
L_003C25D0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C25E0u);  if (depth < kMaxDepth) unit_00B0(c, 293u, depth + 1u); else { c.pc = 0x003C25C8u; return; } if (c.pc != 0x003C25E0u) [[unlikely]] return; }
L_003C25E0:
    set32(c.r[3], c.r[2].w[0] << 1);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[3].w[0] << 2);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003C25F8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C2618u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 237u, depth + 1u); else { c.pc = 0x00127D00u; return; } if (c.pc != 0x003C2618u) [[unlikely]] return; }
L_003C2618:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[6], c.r[16].w[0] + 2594u);
    set32(c.r[7], c.r[16].w[0] + 2596u);
    set32(c.r[8], c.r[16].w[0] + 2598u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C2630u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B0(c, 226u, depth + 1u); else { c.pc = 0x003C1C58u; return; } if (c.pc != 0x003C2630u) [[unlikely]] return; }
L_003C2630:
    st16((c.r[16].w[0] + 2592u), static_cast<std::uint16_t>(0u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003C2648:
    ldl(c.r[2], (c.r[5].w[0] + 7u));
    ldr(c.r[2], (c.r[5].w[0]));
    sdl(c.r[2], (c.r[4].w[0] + 2599u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; sdr(c.r[2], (c.r[4].w[0] + 2592u));  c.pc = t; return; }
L_003C2660:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 421u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003C2678; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 512u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 514u)));  goto L_003C2678; }
L_003C2678:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003C2680:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 421u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003C2698; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 516u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 517u)));  goto L_003C2698; }
L_003C2698:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003C26A0:
    set32(c.r[2], 0u - 45u);
    st32((c.r[5].w[0]), 0u);
    st32((c.r[6].w[0]), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 421u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003C26E0; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 518u)));
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 520u)));  goto L_003C26D0; }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 519u)));
    st32((c.r[5].w[0]), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 520u)));
    c.budget -= 3;
L_003C26D0:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_003C26E0; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 521u)));
    st32((c.r[6].w[0]), c.r[2].w[0]);
    c.budget -= 2;
L_003C26E0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003C26E8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 421u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003C2758; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 488u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 522u)));  goto L_003C2740; }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[5].d[0] != c.r[2].d[0]) { c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 522u)));  goto L_003C2730; }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 534u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_003C2728; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = ld8((c.r[4].w[0] + 535u));  if (t) { goto L_003C274C; } }
    c.budget -= 1;
L_003C2728:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 15u);  c.pc = t; return; }
L_003C2730:
    c.budget -= 2;
    if (c.r[2].sd[0] > 0) { c.r[2].d[0] = ld8((c.r[4].w[0] + 523u));  goto L_003C274C; }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u - 15u);  c.pc = t; return; }
L_003C2740:
    c.budget -= 2;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = 0ull + 0ull;  goto L_003C2758; }
    c.r[2].d[0] = ld8((c.r[4].w[0] + 523u));
    c.budget -= 1;
L_003C274C:
    set32(c.r[2], c.r[2].w[0] << 24);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 27));  c.pc = t; return; }
L_003C2758:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003C2760:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C2780u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B0(c, 199u, depth + 1u); else { c.pc = 0x003C1900u; return; } if (c.pc != 0x003C2780u) [[unlikely]] return; }
L_003C2780:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C2790u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_00B0(c, 199u, depth + 1u); else { c.pc = 0x003C1900u; return; } if (c.pc != 0x003C2790u) [[unlikely]] return; }
L_003C2790:
    set32(c.r[3], 0u + 4u);
    set32(c.r[3], c.r[3].w[0] - c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[17].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C27A8u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00B0(c, 199u, depth + 1u); else { c.pc = 0x003C1900u; return; } if (c.pc != 0x003C27A8u) [[unlikely]] return; }
L_003C27A8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    set32(c.r[5], 0u + 4u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C27BCu); st32((c.r[17].w[0] + 8u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00B0(c, 199u, depth + 1u); else { c.pc = 0x003C1900u; return; } if (c.pc != 0x003C27BCu) [[unlikely]] return; }
L_003C27BC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[17].w[0] + 12u), c.r[2].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C27CCu); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_00B0(c, 199u, depth + 1u); else { c.pc = 0x003C1900u; return; } if (c.pc != 0x003C27CCu) [[unlikely]] return; }
L_003C27CC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[17].w[0] + 16u), c.r[2].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C27DCu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00B0(c, 199u, depth + 1u); else { c.pc = 0x003C1900u; return; } if (c.pc != 0x003C27DCu) [[unlikely]] return; }
L_003C27DC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[17].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C27ECu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00B0(c, 199u, depth + 1u); else { c.pc = 0x003C1900u; return; } if (c.pc != 0x003C27ECu) [[unlikely]] return; }
L_003C27EC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[17].w[0] + 24u), c.r[2].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C27FCu); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_00B0(c, 199u, depth + 1u); else { c.pc = 0x003C1900u; return; } if (c.pc != 0x003C27FCu) [[unlikely]] return; }
L_003C27FC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[17].w[0] + 28u), c.r[2].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C280Cu); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_00B0(c, 199u, depth + 1u); else { c.pc = 0x003C1900u; return; } if (c.pc != 0x003C280Cu) [[unlikely]] return; }
L_003C280C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[17].w[0] + 32u), c.r[2].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C281Cu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00B0(c, 199u, depth + 1u); else { c.pc = 0x003C1900u; return; } if (c.pc != 0x003C281Cu) [[unlikely]] return; }
L_003C281C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[17].w[0] + 36u), c.r[2].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C282Cu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00B0(c, 199u, depth + 1u); else { c.pc = 0x003C1900u; return; } if (c.pc != 0x003C282Cu) [[unlikely]] return; }
L_003C282C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[17].w[0] + 40u), c.r[2].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C283Cu); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_00B0(c, 199u, depth + 1u); else { c.pc = 0x003C1900u; return; } if (c.pc != 0x003C283Cu) [[unlikely]] return; }
L_003C283C:
    set32(c.r[4], ld32((c.r[17].w[0] + 28u)));
    set32(c.r[3], 0u + 3u);
    st32((c.r[17].w[0] + 44u), c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003C285C; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 32u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_003C2864; } }
L_003C285C:
    set32(c.r[2], 0u - 1u);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 2;
L_003C2864:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003C2878:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[9].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    if (c.r[5].d[0] == 0ull) { breakpoint(c, 0x003C2888u);  goto L_003C288C; }
L_003C288C:
    set32(c.r[10], ld32((c.r[9].w[0] + 12u)));
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[11], ld32((c.r[9].w[0])));
    set32(c.r[8], ld32((c.r[9].w[0] + 4u)));
    set32(c.r[7], c.r[11].w[0] << 1);
    set32(c.r[12], ld32((c.r[9].w[0] + 16u)));
    set32(c.r[8], c.r[8].w[0] - 1u);
    set32(c.r[7], c.r[7].w[0] + c.r[11].w[0]);
    set32(c.r[2], c.r[8].w[0] << 4);
    set32(c.r[3], c.r[7].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] - c.r[7].w[0]);
    set32(c.r[7], c.r[11].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - c.r[8].w[0]);
    set32(c.r[8], 0u + 1000u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[7], c.r[7].w[0] + c.r[12].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[10].w[0]);
    set32(c.r[7], c.r[7].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[9], 0u + 1u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 22848u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[2], c.r[2].w[0] + c.r[7].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 22816u)));
    mmi::div(c, 0, c.r[3].w[0], c.r[5].w[0]);
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    c.r[3].d[0] = c.lo.d[0];
    mmi::div(c, 0, c.r[2].w[0], c.r[8].w[0]);
    c.r[6].d[0] = c.lo.d[0];
    c.budget -= 33;
    if (c.r[11].d[0] != c.r[9].d[0]) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_003C2934; }
    set32(c.r[7], 0u + 48u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] != c.r[7].d[0]; set32(c.r[2], c.r[3].w[0] - 56u);  if (t) { goto L_003C292C; } }
    c.r[2].d[0] = c.r[3].sd[0] < 56ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_003C2934; } }
    set32(c.r[2], c.r[3].w[0] - 56u);
    c.budget -= 1;
L_003C292C:
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(25ll) ? 1ull : 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 2;
L_003C2934:
    c.budget -= 2;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003C1B90u | kUnwind; return; } goto L_003C1B90; }
L_003C2940:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 9;
    if (c.r[4].d[0] != 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 4u)));  goto L_003C2980; }
    set32(c.r[3], ld32((c.r[17].w[0] + 28u)));
    set32(c.r[2], 0u + 3u);
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[2], 0u + 2u);  goto L_003C2978; }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_003C2978:
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 2;
L_003C2980:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[2], 0u + 32u);  goto L_003C29A0; }
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C299Cu); set32(c.r[6], c.r[16].w[0] + 24u);  if (depth < kMaxDepth) unit_00B0(c, 317u, depth + 1u); else { c.pc = 0x003C2878u; return; } if (c.pc != 0x003C299Cu) [[unlikely]] return; }
L_003C299C:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 1;
L_003C29A0:
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 28u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 5;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[2], ld32((c.r[16].w[0] + 16u)));  goto L_003C29E0; }
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[17].w[0] + 32u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 23208u)));
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 20u), c.r[3].w[0]);  if (t) { goto L_003C29E4; } }
    c.budget -= 1;
L_003C29E0:
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 1;
L_003C29E4:
    c.budget -= 2;
    if (c.r[4].d[0] != 0ull) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_003C2A14; }
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[3], ld32((c.r[17].w[0] + 16u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 22816u)));
    st32((c.r[16].w[0] + 8u), c.r[3].w[0]);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 10;
L_003C2A14:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003C2A28:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    c.r[18].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 72u), c.r[23].d[0]);
    c.r[23].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 80u), c.r[30].d[0]);
    c.r[30].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 40u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 56u), c.r[21].d[0]);
    st64((c.r[29].w[0] + 64u), c.r[22].d[0]);
    st64((c.r[29].w[0] + 88u), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[5].w[0] + 24u)));
    set32(c.r[22], ld32((c.r[5].w[0] + 20u)));
    st32((c.r[29].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0] + 16u)));
    st32((c.r[29].w[0]), c.r[3].w[0]);
    c.budget -= 21;
    { const bool t = c.r[22].sd[0] <= 0; set32(c.r[21], ld32((c.r[5].w[0] + 4u)));  if (t) { goto L_003C2AC4; } }
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_003C2A80:
    c.budget -= 2;
    if (c.r[21].sd[0] <= 0) { set32(c.r[18], c.r[18].w[0] + 1u);  goto L_003C2AB8; }
    set32(c.r[2], c.r[18].w[0] << 2);
    c.r[19].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[17], c.r[2].w[0] + c.r[30].w[0]);
    c.r[16].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
L_003C2A98:
    set32(c.r[5], ld32((c.r[19].w[0] + 4u)));
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C2AA8u); set32(c.r[16], c.r[16].w[0] - 1u);  if (depth < kMaxDepth) unit_00B0(c, 199u, depth + 1u); else { c.pc = 0x003C1900u; return; } if (c.pc != 0x003C2AA8u) [[unlikely]] return; }
L_003C2AA8:
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 128u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003C2A98u | kUnwind; return; } goto L_003C2A98; } }
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_003C2AB8:
    c.r[2].d[0] = c.r[18].sd[0] < c.r[22].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[20], c.r[20].w[0] + 384u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003C2A80u | kUnwind; return; } goto L_003C2A80; } }
L_003C2AC4:
    set32(c.r[4], ld32((c.r[29].w[0])));
    c.r[18].d[0] = c.r[22].d[0] + 0ull;
    c.r[2].d[0] = c.r[18].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { set32(c.r[18], ld32((c.r[29].w[0])));  goto L_003C2B28; }
    set32(c.r[3], c.r[18].w[0] << 2);
    set32(c.r[2], c.r[18].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    set32(c.r[18], c.r[4].w[0] - c.r[18].w[0]);
    set32(c.r[16], c.r[3].w[0] + c.r[30].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] << 7);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[17], c.r[2].w[0] + 4u);
    c.budget -= 10;
L_003C2B00:
    set32(c.r[5], ld32((c.r[17].w[0])));
    set32(c.r[17], c.r[17].w[0] + 384u);
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C2B14u); set32(c.r[18], c.r[18].w[0] - 1u);  if (depth < kMaxDepth) unit_00B0(c, 199u, depth + 1u); else { c.pc = 0x003C1900u; return; } if (c.pc != 0x003C2B14u) [[unlikely]] return; }
L_003C2B14:
    st32((c.r[16].w[0]), c.r[2].w[0]);
    st32((c.r[16].w[0] + 128u), c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = c.r[18].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003C2B00u | kUnwind; return; } goto L_003C2B00; } }
    set32(c.r[18], ld32((c.r[29].w[0])));
    c.budget -= 1;
L_003C2B28:
    c.r[2].d[0] = c.r[18].sd[0] < 32ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_003C2B80; }
    c.budget -= 1;
L_003C2B38:
    c.budget -= 2;
    if (c.r[21].sd[0] <= 0) { set32(c.r[18], c.r[18].w[0] + 1u);  goto L_003C2B70; }
    set32(c.r[2], c.r[18].w[0] << 2);
    c.r[16].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[30].w[0]);
    c.budget -= 4;
L_003C2B50:
    set32(c.r[16], c.r[16].w[0] - 1u);
    st32((c.r[2].w[0]), 0u);
    c.budget -= 7;
    { const bool t = c.r[16].d[0] != 0ull; set32(c.r[2], c.r[2].w[0] + 128u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003C2B50u | kUnwind; return; } goto L_003C2B50; } }
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_003C2B70:
    c.r[2].d[0] = c.r[18].sd[0] < 32ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003C2B38u | kUnwind; return; } goto L_003C2B38; } }
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_003C2B80:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 56u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[23].d[0] = ld64((c.r[29].w[0] + 72u));
    c.r[30].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 88u));
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_003C2BB0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    set32(c.r[2], ld32((c.r[6].w[0])));
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 64u), c.r[22].d[0]);
    c.r[22].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 40u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 56u), c.r[21].d[0]);
    st64((c.r[29].w[0] + 72u), c.r[23].d[0]);
    st64((c.r[29].w[0] + 80u), c.r[30].d[0]);
    st64((c.r[29].w[0] + 88u), c.r[31].d[0]);
    st32((c.r[29].w[0]), c.r[6].w[0]);
    st32((c.r[29].w[0] + 4u), c.r[8].w[0]);
    set32(c.r[30], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 20;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[21], ld32((c.r[16].w[0] + 4u)));  if (t) { goto L_003C2C10; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C2C08u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_00B0(c, 199u, depth + 1u); else { c.pc = 0x003C1900u; return; } if (c.pc != 0x003C2C08u) [[unlikely]] return; }
L_003C2C08:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[22].w[0]), c.r[2].w[0]);  if (t) { goto L_003C2C14; } }
L_003C2C10:
    st32((c.r[22].w[0]), 0u);
    c.budget -= 1;
L_003C2C14:
    set32(c.r[2], ld32((c.r[22].w[0])));
    set32(c.r[19], 0u + 1u);
    c.r[3].d[0] = c.r[19].sd[0] < c.r[30].sd[0] ? 1ull : 0ull;
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull; c.r[17].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 52u)));  if (t) { goto L_003C2C70; } }
L_003C2C30:
    set32(c.r[3], ld32((c.r[29].w[0])));
    set32(c.r[16], c.r[19].w[0] << 2);
    set32(c.r[2], c.r[16].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[19], c.r[19].w[0] + 1u);  if (t) { goto L_003C2C64; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C2C54u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_00B0(c, 199u, depth + 1u); else { c.pc = 0x003C1900u; return; } if (c.pc != 0x003C2C54u) [[unlikely]] return; }
L_003C2C54:
    set32(c.r[3], c.r[16].w[0] + c.r[22].w[0]);
    c.r[4].d[0] = c.r[17].d[0] & 3ull;
    c.r[2].d[0] = c.r[2].d[0] ^ c.r[4].d[0];
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.budget -= 4;
L_003C2C64:
    c.r[2].d[0] = c.r[19].sd[0] < c.r[30].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[17], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[17].w[0]) >> 2));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003C2C30u | kUnwind; return; } goto L_003C2C30; } }
L_003C2C70:
    c.r[19].d[0] = c.r[30].d[0] + 0ull;
    c.r[2].d[0] = c.r[19].sd[0] < 32ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003C2CC4; } }
L_003C2C80:
    c.budget -= 2;
    if (c.r[21].sd[0] <= 0) { set32(c.r[19], c.r[19].w[0] + 1u);  goto L_003C2CB8; }
    set32(c.r[2], c.r[19].w[0] << 2);
    c.r[17].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[22].w[0]);
    c.budget -= 4;
L_003C2C98:
    set32(c.r[17], c.r[17].w[0] - 1u);
    st32((c.r[2].w[0]), 0u);
    c.budget -= 7;
    { const bool t = c.r[17].d[0] != 0ull; set32(c.r[2], c.r[2].w[0] + 128u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003C2C98u | kUnwind; return; } goto L_003C2C98; } }
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.budget -= 1;
L_003C2CB8:
    c.r[2].d[0] = c.r[19].sd[0] < 32ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003C2C80u | kUnwind; return; } goto L_003C2C80; } }
L_003C2CC4:
    c.budget -= 2;
    { const bool t = c.r[30].sd[0] <= 0; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_003C2DFC; } }
    c.budget -= 1;
L_003C2CD0:
    c.budget -= 2;
    if (c.r[21].sd[0] <= 0) { set32(c.r[19], c.r[19].w[0] + 1u);  goto L_003C2DF0; }
    set32(c.r[4], ld32((c.r[29].w[0] + 4u)));
    set32(c.r[2], c.r[19].w[0] << 2);
    set32(c.r[23], 0u + 63u);
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[16], c.r[2].w[0] + c.r[4].w[0]);
    c.r[17].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 6;
L_003C2CF0:
    set32(c.r[3], ld32((c.r[29].w[0])));
    set32(c.r[2], c.r[20].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], c.r[20].w[0] + c.r[22].w[0]);  if (t) { goto L_003C2DD0; } }
    set32(c.r[3], 0u + 1u);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[3].d[0]) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_003C2D60; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_003C2D38; }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 3u);  if (t) { goto L_003C2DB0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_003C2D88; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[17].w[0] - 1u);  if (t) { goto L_003C2DE0; } }
L_003C2D38:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C2D40u); set32(c.r[5], 0u + 6u);  if (depth < kMaxDepth) unit_00B0(c, 199u, depth + 1u); else { c.pc = 0x003C1900u; return; } if (c.pc != 0x003C2D40u) [[unlikely]] return; }
L_003C2D40:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C2D50u); set32(c.r[5], 0u + 6u);  if (depth < kMaxDepth) unit_00B0(c, 199u, depth + 1u); else { c.pc = 0x003C1900u; return; } if (c.pc != 0x003C2D50u) [[unlikely]] return; }
L_003C2D50:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    st32((c.r[16].w[0] + 128u), c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[5], 0u + 6u);  if (t) { goto L_003C2D78; } }
L_003C2D60:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C2D68u); set32(c.r[5], 0u + 6u);  if (depth < kMaxDepth) unit_00B0(c, 199u, depth + 1u); else { c.pc = 0x003C1900u; return; } if (c.pc != 0x003C2D68u) [[unlikely]] return; }
L_003C2D68:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    st32((c.r[16].w[0]), c.r[2].w[0]);
    set32(c.r[5], 0u + 6u);
    st32((c.r[16].w[0] + 128u), c.r[2].w[0]);
    c.budget -= 4;
L_003C2D78:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C2D80u); set32(c.r[17], c.r[17].w[0] - 1u);  if (depth < kMaxDepth) unit_00B0(c, 199u, depth + 1u); else { c.pc = 0x003C1900u; return; } if (c.pc != 0x003C2D80u) [[unlikely]] return; }
L_003C2D80:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 256u), c.r[2].w[0]);  if (t) { goto L_003C2DE0; } }
L_003C2D88:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C2D90u); set32(c.r[5], 0u + 6u);  if (depth < kMaxDepth) unit_00B0(c, 199u, depth + 1u); else { c.pc = 0x003C1900u; return; } if (c.pc != 0x003C2D90u) [[unlikely]] return; }
L_003C2D90:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C2DA0u); set32(c.r[5], 0u + 6u);  if (depth < kMaxDepth) unit_00B0(c, 199u, depth + 1u); else { c.pc = 0x003C1900u; return; } if (c.pc != 0x003C2DA0u) [[unlikely]] return; }
L_003C2DA0:
    st32((c.r[16].w[0] + 128u), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 256u), c.r[2].w[0]);  if (t) { goto L_003C2DDC; } }
    c.budget -= 1;
L_003C2DB0:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C2DBCu); set32(c.r[5], 0u + 6u);  if (depth < kMaxDepth) unit_00B0(c, 199u, depth + 1u); else { c.pc = 0x003C1900u; return; } if (c.pc != 0x003C2DBCu) [[unlikely]] return; }
L_003C2DBC:
    st32((c.r[16].w[0]), c.r[2].w[0]);
    st32((c.r[16].w[0] + 256u), c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 128u), c.r[2].w[0]);  if (t) { goto L_003C2DDC; } }
    c.budget -= 1;
L_003C2DD0:
    st32((c.r[16].w[0] + 256u), c.r[23].w[0]);
    st32((c.r[16].w[0] + 128u), c.r[23].w[0]);
    st32((c.r[16].w[0]), c.r[23].w[0]);
    c.budget -= 3;
L_003C2DDC:
    set32(c.r[17], c.r[17].w[0] - 1u);
    c.budget -= 1;
L_003C2DE0:
    set32(c.r[16], c.r[16].w[0] + 384u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != 0ull; set32(c.r[20], c.r[20].w[0] + 128u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003C2CF0u | kUnwind; return; } goto L_003C2CF0; } }
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.budget -= 1;
L_003C2DF0:
    c.r[2].d[0] = c.r[19].sd[0] < c.r[30].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003C2CD0u | kUnwind; return; } goto L_003C2CD0; } }
L_003C2DFC:
    c.r[19].d[0] = c.r[30].d[0] + 0ull;
    c.r[2].d[0] = c.r[19].sd[0] < 32ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_003C2E60; }
    c.budget -= 1;
L_003C2E10:
    c.budget -= 2;
    if (c.r[21].sd[0] <= 0) { set32(c.r[19], c.r[19].w[0] + 1u);  goto L_003C2E50; }
    set32(c.r[4], ld32((c.r[29].w[0] + 4u)));
    set32(c.r[2], c.r[19].w[0] << 2);
    set32(c.r[3], 0u + 63u);
    c.r[17].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    c.budget -= 6;
L_003C2E30:
    set32(c.r[17], c.r[17].w[0] - 1u);
    st32((c.r[2].w[0] + 256u), c.r[3].w[0]);
    st32((c.r[2].w[0] + 128u), c.r[3].w[0]);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = c.r[17].d[0] != 0ull; set32(c.r[2], c.r[2].w[0] + 384u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003C2E30u | kUnwind; return; } goto L_003C2E30; } }
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.budget -= 1;
L_003C2E50:
    c.r[2].d[0] = c.r[19].sd[0] < 32ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003C2E10u | kUnwind; return; } goto L_003C2E10; } }
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_003C2E60:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 56u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[23].d[0] = ld64((c.r[29].w[0] + 72u));
    c.r[30].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 88u));
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_003C2E90:
    set32(c.r[29], c.r[29].w[0] - 128u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00430000u);
    st64((c.r[29].w[0] + 96u), c.r[22].d[0]);
    c.r[22].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 104u), c.r[23].d[0]);
    c.r[23].d[0] = c.r[9].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[16].d[0]);
    st64((c.r[29].w[0] + 56u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 64u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 72u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 80u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 88u), c.r[21].d[0]);
    st64((c.r[29].w[0] + 112u), c.r[30].d[0]);
    st64((c.r[29].w[0] + 120u), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[5].w[0] + 16u)));
    st32((c.r[29].w[0] + 20u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[10], ld32((c.r[5].w[0] + 24u)));
    st32((c.r[29].w[0] + 8u), c.r[7].w[0]);
    st32((c.r[29].w[0] + 28u), c.r[10].w[0]);
    st32((c.r[29].w[0]), c.r[4].w[0]);
    st32((c.r[29].w[0] + 4u), c.r[6].w[0]);
    st32((c.r[29].w[0] + 12u), c.r[8].w[0]);
    set32(c.r[7], ld32((c.r[29].w[0] + 20u)));
    set32(c.r[4], ld32((c.r[5].w[0] + 4u)));
    st32((c.r[29].w[0] + 16u), c.r[4].w[0]);
    set32(c.r[5], ld32((c.r[5].w[0] + 20u)));
    st32((c.r[3].w[0] + 23400u), 0u);
    st32((c.r[29].w[0] + 24u), c.r[5].w[0]);
    c.budget -= 31;
    { const bool t = c.r[7].sd[0] <= 0; st32((c.r[2].w[0] + 21700u), 0u);  if (t) { goto L_003C3370; } }
    st32((c.r[29].w[0] + 36u), 0u);
    st32((c.r[29].w[0] + 40u), 0u);
    c.budget -= 3;
L_003C2F18:
    c.r[30].d[0] = 0ull + 0ull;
    set32(c.r[8], ld32((c.r[29].w[0] + 24u)));
    c.r[8].d[0] = c.r[22].sd[0] < c.r[8].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 32u), c.r[8].w[0]);  if (t) { goto L_003C3320; } }
    c.budget -= 1;
L_003C2F30:
    set32(c.r[10], ld32((c.r[29].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + c.r[22].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[10].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const bool t = c.r[5].d[0] == 0ull; set32(c.r[3], c.r[30].w[0] << 1);  if (t) { goto L_003C32A8; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 12u)));
    set32(c.r[18], c.r[3].w[0] + c.r[30].w[0]);
    set32(c.r[2], c.r[5].w[0] << 1);
    set32(c.r[3], c.r[18].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 5);
    set32(c.r[7], ld32((c.r[29].w[0] + 40u)));
    set32(c.r[3], c.r[3].w[0] + c.r[22].w[0]);
    set32(c.r[10], ld32((c.r[29].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[8], ld32((c.r[29].w[0] + 28u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[7].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[10].w[0]);
    set32(c.r[6], c.r[2].w[0] + c.r[8].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[3], c.r[3].w[0] + 22544u);
    set32(c.r[4], ld32((c.r[6].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[17], 0u + 3u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[20], ld32((c.r[6].w[0] + 20u)));
    set32(c.r[19], ld32((c.r[6].w[0] + 16u)));
    c.budget -= 26;
    { const bool t = c.r[4].d[0] != c.r[17].d[0]; set32(c.r[21], ld32((c.r[2].w[0])));  if (t) { goto L_003C30D0; } }
    set32(c.r[17], ld32((c.r[6].w[0] + 4u)));
    c.r[2].d[0] = c.r[17].sd[0] < 9ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], ld32((c.r[29].w[0])));  if (t) { goto L_003C3050; } }
    set32(c.r[5], c.r[17].w[0] << 1);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C2FD0u); set32(c.r[5], c.r[5].w[0] + c.r[17].w[0]);  if (depth < kMaxDepth) unit_00B0(c, 199u, depth + 1u); else { c.pc = 0x003C1900u; return; } if (c.pc != 0x003C2FD0u) [[unlikely]] return; }
L_003C2FD0:
    set32(c.r[3], c.r[17].w[0] << 2);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[4], c.r[4].w[0] + 23264u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[4], c.r[18].w[0] << 5);
    set32(c.r[5], ld32((c.r[3].w[0])));
    set32(c.r[4], c.r[4].w[0] + c.r[22].w[0]);
    set32(c.r[4], c.r[4].w[0] << 1);
    c.r[3].d[0] = c.r[2].d[0] & c.r[5].d[0];
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> (c.r[17].w[0] & 31u)));
    mmi::mult(c, 0, c.r[3].w[0], c.r[19].w[0]);
    c.r[7].d[0] = c.lo.d[0];
    c.r[5].d[0] = c.r[2].d[0] & c.r[5].d[0];
    mmi::mult(c, 0, c.r[5].w[0], c.r[19].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[4], c.r[4].w[0] + c.r[23].w[0]);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> (c.r[17].w[0] & 31u)));
    set32(c.r[6], c.r[7].w[0] + c.r[20].w[0]);
    set32(c.r[6], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[6].w[0]) >> 1));
    mmi::mult(c, 0, c.r[6].w[0], c.r[21].w[0]);
    c.r[6].d[0] = c.lo.d[0];
    set32(c.r[6], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[6].w[0]) >> 16));
    st16((c.r[4].w[0] + 128u), static_cast<std::uint16_t>(c.r[6].w[0]));
    set32(c.r[6], c.r[3].w[0] + c.r[20].w[0]);
    set32(c.r[6], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[6].w[0]) >> 1));
    mmi::mult(c, 0, c.r[2].w[0], c.r[19].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    mmi::mult(c, 0, c.r[6].w[0], c.r[21].w[0]);
    c.r[6].d[0] = c.lo.d[0];
    set32(c.r[6], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[6].w[0]) >> 16));
    st16((c.r[4].w[0] + 64u), static_cast<std::uint16_t>(c.r[6].w[0]));
    set32(c.r[6], c.r[3].w[0] + c.r[20].w[0]);
    set32(c.r[6], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[6].w[0]) >> 1));
    mmi::mult(c, 0, c.r[6].w[0], c.r[21].w[0]);
    c.r[6].d[0] = c.lo.d[0];
    set32(c.r[6], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[6].w[0]) >> 16));
    c.budget -= 32;
    { const bool t = 0ull == 0ull; st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[6].w[0]));  if (t) { goto L_003C32CC; } }
L_003C3050:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C305Cu); set32(c.r[16], c.r[18].w[0] << 5);  if (depth < kMaxDepth) unit_00B0(c, 199u, depth + 1u); else { c.pc = 0x003C1900u; return; } if (c.pc != 0x003C305Cu) [[unlikely]] return; }
L_003C305C:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    mmi::mult(c, 0, c.r[2].w[0], c.r[19].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[16], c.r[16].w[0] + c.r[22].w[0]);
    set32(c.r[16], c.r[16].w[0] << 1);
    set32(c.r[4], ld32((c.r[29].w[0])));
    set32(c.r[16], c.r[16].w[0] + c.r[23].w[0]);
    set32(c.r[6], c.r[3].w[0] + c.r[20].w[0]);
    set32(c.r[6], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[6].w[0]) >> 1));
    mmi::mult(c, 0, c.r[6].w[0], c.r[21].w[0]);
    c.r[6].d[0] = c.lo.d[0];
    set32(c.r[6], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[6].w[0]) >> 16));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C308Cu); st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[6].w[0]));  if (depth < kMaxDepth) unit_00B0(c, 199u, depth + 1u); else { c.pc = 0x003C1900u; return; } if (c.pc != 0x003C308Cu) [[unlikely]] return; }
L_003C308C:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    mmi::mult(c, 0, c.r[2].w[0], c.r[19].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[4], ld32((c.r[29].w[0])));
    set32(c.r[6], c.r[3].w[0] + c.r[20].w[0]);
    set32(c.r[6], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[6].w[0]) >> 1));
    mmi::mult(c, 0, c.r[6].w[0], c.r[21].w[0]);
    c.r[6].d[0] = c.lo.d[0];
    set32(c.r[6], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[6].w[0]) >> 16));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C30B0u); st16((c.r[16].w[0] + 64u), static_cast<std::uint16_t>(c.r[6].w[0]));  if (depth < kMaxDepth) unit_00B0(c, 199u, depth + 1u); else { c.pc = 0x003C1900u; return; } if (c.pc != 0x003C30B0u) [[unlikely]] return; }
L_003C30B0:
    mmi::mult(c, 0, c.r[2].w[0], c.r[19].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[6], c.r[3].w[0] + c.r[20].w[0]);
    set32(c.r[6], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[6].w[0]) >> 1));
    mmi::mult(c, 0, c.r[6].w[0], c.r[21].w[0]);
    c.r[6].d[0] = c.lo.d[0];
    set32(c.r[6], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[6].w[0]) >> 16));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 128u), static_cast<std::uint16_t>(c.r[6].w[0]));  if (t) { goto L_003C32CC; } }
    c.budget -= 1;
L_003C30D0:
    set32(c.r[5], ld32((c.r[6].w[0] + 4u)));
    set32(c.r[4], ld32((c.r[29].w[0])));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C30E0u); set32(c.r[16], ld32((c.r[6].w[0])));  if (depth < kMaxDepth) unit_00B0(c, 199u, depth + 1u); else { c.pc = 0x003C1900u; return; } if (c.pc != 0x003C30E0u) [[unlikely]] return; }
L_003C30E0:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != c.r[17].d[0]; c.r[7].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_003C3150; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[3], c.r[18].w[0] << 5);
    set32(c.r[4], c.r[2].w[0] + 27824u);
    set32(c.r[3], c.r[3].w[0] + c.r[22].w[0]);
    set32(c.r[2], c.r[7].w[0] + c.r[4].w[0]);
    set32(c.r[4], c.r[4].w[0] + 32u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    set32(c.r[2], c.r[7].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[7].w[0]);
    mmi::mult(c, 0, c.r[5].w[0], c.r[19].w[0]);
    c.r[8].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[3].w[0] + c.r[23].w[0]);
    set32(c.r[6], c.r[8].w[0] + c.r[20].w[0]);
    set32(c.r[6], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[6].w[0]) >> 1));
    mmi::mult(c, 0, c.r[6].w[0], c.r[21].w[0]);
    c.r[6].d[0] = c.lo.d[0];
    set32(c.r[6], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[6].w[0]) >> 16));
    st16((c.r[3].w[0]), static_cast<std::uint16_t>(c.r[6].w[0]));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    mmi::mult(c, 0, c.r[5].w[0], c.r[19].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[6], c.r[2].w[0] + c.r[20].w[0]);
    set32(c.r[6], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[6].w[0]) >> 1));
    mmi::mult(c, 0, c.r[6].w[0], c.r[21].w[0]);
    c.r[6].d[0] = c.lo.d[0];
    set32(c.r[6], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[6].w[0]) >> 16));
    st16((c.r[3].w[0] + 64u), static_cast<std::uint16_t>(c.r[6].w[0]));
    c.budget -= 26;
    { const bool t = 0ull == 0ull; c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 32u)));  if (t) { goto L_003C3234; } }
L_003C3150:
    set32(c.r[2], 0u + 5u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 9u);  if (t) { goto L_003C31C8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[3], c.r[18].w[0] << 5);
    set32(c.r[4], c.r[2].w[0] + 27920u);
    set32(c.r[3], c.r[3].w[0] + c.r[22].w[0]);
    set32(c.r[2], c.r[7].w[0] + c.r[4].w[0]);
    set32(c.r[4], c.r[4].w[0] + 128u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    set32(c.r[2], c.r[7].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[7].w[0]);
    mmi::mult(c, 0, c.r[5].w[0], c.r[19].w[0]);
    c.r[8].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[3].w[0] + c.r[23].w[0]);
    set32(c.r[6], c.r[8].w[0] + c.r[20].w[0]);
    set32(c.r[6], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[6].w[0]) >> 1));
    mmi::mult(c, 0, c.r[6].w[0], c.r[21].w[0]);
    c.r[6].d[0] = c.lo.d[0];
    set32(c.r[6], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[6].w[0]) >> 16));
    st16((c.r[3].w[0]), static_cast<std::uint16_t>(c.r[6].w[0]));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    mmi::mult(c, 0, c.r[5].w[0], c.r[19].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[6], c.r[2].w[0] + c.r[20].w[0]);
    set32(c.r[6], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[6].w[0]) >> 1));
    mmi::mult(c, 0, c.r[6].w[0], c.r[21].w[0]);
    c.r[6].d[0] = c.lo.d[0];
    set32(c.r[6], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[6].w[0]) >> 16));
    st16((c.r[3].w[0] + 64u), static_cast<std::uint16_t>(c.r[6].w[0]));
    c.budget -= 26;
    { const bool t = 0ull == 0ull; c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 128u)));  if (t) { goto L_003C3234; } }
    c.budget -= 1;
L_003C31C8:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != c.r[2].d[0]; set32(c.r[2], c.r[18].w[0] << 5);  if (t) { goto L_003C3250; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[3], c.r[18].w[0] << 5);
    set32(c.r[4], c.r[2].w[0] + 28304u);
    set32(c.r[3], c.r[3].w[0] + c.r[22].w[0]);
    set32(c.r[2], c.r[7].w[0] + c.r[4].w[0]);
    set32(c.r[4], c.r[4].w[0] + 1024u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    set32(c.r[2], c.r[7].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[7].w[0]);
    mmi::mult(c, 0, c.r[5].w[0], c.r[19].w[0]);
    c.r[8].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[3].w[0] + c.r[23].w[0]);
    set32(c.r[6], c.r[8].w[0] + c.r[20].w[0]);
    set32(c.r[6], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[6].w[0]) >> 1));
    mmi::mult(c, 0, c.r[6].w[0], c.r[21].w[0]);
    c.r[6].d[0] = c.lo.d[0];
    set32(c.r[6], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[6].w[0]) >> 16));
    st16((c.r[3].w[0]), static_cast<std::uint16_t>(c.r[6].w[0]));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    mmi::mult(c, 0, c.r[5].w[0], c.r[19].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[6], c.r[2].w[0] + c.r[20].w[0]);
    set32(c.r[6], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[6].w[0]) >> 1));
    mmi::mult(c, 0, c.r[6].w[0], c.r[21].w[0]);
    c.r[6].d[0] = c.lo.d[0];
    set32(c.r[6], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[6].w[0]) >> 16));
    st16((c.r[3].w[0] + 64u), static_cast<std::uint16_t>(c.r[6].w[0]));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1024u)));
    c.budget -= 25;
L_003C3234:
    mmi::mult(c, 0, c.r[5].w[0], c.r[19].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[6], c.r[2].w[0] + c.r[20].w[0]);
    set32(c.r[6], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[6].w[0]) >> 1));
    mmi::mult(c, 0, c.r[6].w[0], c.r[21].w[0]);
    c.r[6].d[0] = c.lo.d[0];
    set32(c.r[6], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[6].w[0]) >> 16));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st16((c.r[3].w[0] + 128u), static_cast<std::uint16_t>(c.r[6].w[0]));  if (t) { goto L_003C32CC; } }
L_003C3250:
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[22].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[5], c.r[2].w[0] + c.r[23].w[0]);
    c.budget -= 4;
L_003C3260:
    mmi::div(c, 0, c.r[7].w[0], c.r[16].w[0]);
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[4].d[0] = c.r[17].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[16].d[0] == 0ull) { breakpoint(c, 0x003C3270u);  goto L_003C3274; }
L_003C3274:
    c.r[2].d[0] = c.hi.d[0];
    c.r[3].d[0] = c.lo.d[0];
    mmi::mult(c, 0, c.r[2].w[0], c.r[19].w[0]);
    c.r[7].d[0] = c.lo.d[0];
    set32(c.r[6], c.r[7].w[0] + c.r[20].w[0]);
    c.r[7].d[0] = c.r[3].d[0] + 0ull;
    set32(c.r[6], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[6].w[0]) >> 1));
    mmi::mult(c, 0, c.r[6].w[0], c.r[21].w[0]);
    c.r[6].d[0] = c.lo.d[0];
    set32(c.r[6], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[6].w[0]) >> 16));
    st16((c.r[5].w[0]), static_cast<std::uint16_t>(c.r[6].w[0]));
    c.budget -= 11;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] + 64u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003C3260u | kUnwind; return; } goto L_003C3260; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[8], ld32((c.r[29].w[0] + 16u)));  if (t) { goto L_003C32D0; } }
L_003C32A8:
    set32(c.r[2], c.r[30].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[30].w[0]);
    set32(c.r[2], c.r[2].w[0] << 5);
    set32(c.r[2], c.r[2].w[0] + c.r[22].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[23].w[0]);
    st16((c.r[2].w[0] + 128u), static_cast<std::uint16_t>(0u));
    st16((c.r[2].w[0]), static_cast<std::uint16_t>(0u));
    st16((c.r[2].w[0] + 64u), static_cast<std::uint16_t>(0u));
    c.budget -= 9;
L_003C32CC:
    set32(c.r[8], ld32((c.r[29].w[0] + 16u)));
    c.budget -= 1;
L_003C32D0:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    if (c.r[8].d[0] != c.r[2].d[0]) { set32(c.r[30], c.r[30].w[0] + 1u);  goto L_003C3320; }
    set32(c.r[10], ld32((c.r[29].w[0] + 32u)));
    c.budget -= 3;
    if (c.r[10].d[0] != 0ull) { set32(c.r[30], c.r[30].w[0] + 1u);  goto L_003C3320; }
    set32(c.r[4], ld32((c.r[29].w[0] + 36u)));
    set32(c.r[3], c.r[22].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[23].w[0]);
    set32(c.r[17], 0u + 2u);
    set32(c.r[2], c.r[23].w[0] + c.r[4].w[0]);
    set32(c.r[4], c.r[2].w[0] + 192u);
    c.budget -= 6;
L_003C3300:
    c.r[2].d[0] = ld16((c.r[3].w[0]));
    set32(c.r[3], c.r[3].w[0] + 64u);
    set32(c.r[17], c.r[17].w[0] - 1u);
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 7;
    { const bool t = c.r[17].sd[0] >= 0; set32(c.r[4], c.r[4].w[0] + 64u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003C3300u | kUnwind; return; } goto L_003C3300; } }
    set32(c.r[30], c.r[30].w[0] + 1u);
    c.budget -= 1;
L_003C3320:
    set32(c.r[7], ld32((c.r[29].w[0] + 32u)));
    c.budget -= 3;
    { const bool t = c.r[7].d[0] == 0ull; set32(c.r[8], ld32((c.r[29].w[0] + 16u)));  if (t) { goto L_003C3340; } }
    c.r[2].d[0] = c.r[30].sd[0] < c.r[8].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[30].w[0] << 5);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003C2F30u | kUnwind; return; } goto L_003C2F30; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[10], ld32((c.r[29].w[0] + 36u)));  if (t) { goto L_003C334C; } }
L_003C3340:
    c.budget -= 2;
    { const bool t = c.r[30].sd[0] <= 0; set32(c.r[2], c.r[30].w[0] << 5);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003C2F30u | kUnwind; return; } goto L_003C2F30; } }
    set32(c.r[10], ld32((c.r[29].w[0] + 36u)));
    c.budget -= 1;
L_003C334C:
    set32(c.r[22], c.r[22].w[0] + 1u);
    set32(c.r[4], ld32((c.r[29].w[0] + 40u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 20u)));
    set32(c.r[10], c.r[10].w[0] + 2u);
    set32(c.r[4], c.r[4].w[0] + 384u);
    st32((c.r[29].w[0] + 36u), c.r[10].w[0]);
    c.r[2].d[0] = c.r[22].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[29].w[0] + 40u), c.r[4].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003C2F18u | kUnwind; return; } goto L_003C2F18; } }
L_003C3370:
    set32(c.r[22], ld32((c.r[29].w[0] + 20u)));
    c.r[2].d[0] = c.r[22].sd[0] < 32ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_003C33FC; } }
    set32(c.r[7], ld32((c.r[29].w[0] + 16u)));
    c.budget -= 2;
L_003C3388:
    c.budget -= 2;
    { const bool t = c.r[7].sd[0] <= 0; c.r[30].d[0] = 0ull + 0ull;  if (t) { goto L_003C33E8; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_003C3398:
    set32(c.r[2], c.r[3].w[0] + c.r[30].w[0]);
    set32(c.r[17], 0u + 2u);
    set32(c.r[2], c.r[2].w[0] << 5);
    set32(c.r[2], c.r[2].w[0] + c.r[22].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[23].w[0]);
    set32(c.r[2], c.r[2].w[0] + 128u);
    c.budget -= 8;
L_003C33B8:
    set32(c.r[17], c.r[17].w[0] - 1u);
    st16((c.r[2].w[0]), static_cast<std::uint16_t>(0u));
    c.budget -= 7;
    { const bool t = c.r[17].sd[0] >= 0; set32(c.r[2], c.r[2].w[0] - 64u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003C33B8u | kUnwind; return; } goto L_003C33B8; } }
    set32(c.r[8], ld32((c.r[29].w[0] + 16u)));
    set32(c.r[30], c.r[30].w[0] + 1u);
    c.r[2].d[0] = c.r[30].sd[0] < c.r[8].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], c.r[3].w[0] + 2u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003C3398u | kUnwind; return; } goto L_003C3398; } }
L_003C33E8:
    set32(c.r[22], c.r[22].w[0] + 1u);
    c.r[2].d[0] = c.r[22].sd[0] < 32ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[7], ld32((c.r[29].w[0] + 16u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003C3388u | kUnwind; return; } goto L_003C3388; } }
    c.r[16].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_003C33FC:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 56u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 72u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 88u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 96u));
    c.r[23].d[0] = ld64((c.r[29].w[0] + 104u));
    c.r[30].d[0] = ld64((c.r[29].w[0] + 112u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 120u));
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_003C3428:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    set32(c.r[18], c.r[16].w[0] + 24u);
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 40u), c.r[21].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C345Cu); c.r[20].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AF(c, 259u, depth + 1u); else { c.pc = 0x003BDFE0u; return; } if (c.pc != 0x003C345Cu) [[unlikely]] return; }
L_003C345C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C3464u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B0(c, 365u, depth + 1u); else { c.pc = 0x003C3570u; return; } if (c.pc != 0x003C3464u) [[unlikely]] return; }
L_003C3464:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C346Cu);  if (depth < kMaxDepth) unit_00B1(c, 49u, depth + 1u); else { c.pc = 0x003C5BA0u; return; } if (c.pc != 0x003C346Cu) [[unlikely]] return; }
L_003C346C:
    set32(c.r[17], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[21], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C347Cu); set32(c.r[16], ld32((c.r[21].w[0] + 4u)));  if (depth < kMaxDepth) unit_00AD(c, 479u, depth + 1u); else { c.pc = 0x003B7E30u; return; } if (c.pc != 0x003C347Cu) [[unlikely]] return; }
L_003C347C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C3494u); c.r[8].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B1(c, 56u, depth + 1u); else { c.pc = 0x003C5C98u; return; } if (c.pc != 0x003C3494u) [[unlikely]] return; }
L_003C3494:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x003C0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x003C0000u);
    c.r[8].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x003C0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x003C0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003C0000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x003C0000u);
    set32(c.r[12], c.r[5].w[0] + 13832u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[11], c.r[4].w[0] + 13856u);
    c.r[4].d[0] = c.r[8].d[0] + 0ull;
    set32(c.r[9], c.r[2].w[0] + 13720u);
    set32(c.r[10], c.r[3].w[0] + 13880u);
    set32(c.r[6], c.r[6].w[0] + 24176u);
    set32(c.r[7], c.r[7].w[0] + 25856u);
    c.budget -= 17;
    { const bool t = c.r[8].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] + 14184u);  if (t) { goto L_003C3508; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    set32(c.r[4], c.r[4].w[0] + 14160u);
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 11;
    { set32(c.r[29], c.r[29].w[0] + 64u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003B3A48u | kUnwind; return; } [[clang::musttail]] return unit_00AC(c, 207u, depth); }
L_003C3508:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00430000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00420000u);
    st32((c.r[16].w[0] + 176u), c.r[8].w[0]);
    st32((c.r[2].w[0] + 8400u), c.r[9].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    st32((c.r[3].w[0] + 8244u), c.r[10].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00420000u);
    st32((c.r[2].w[0] + 8240u), c.r[11].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    st32((c.r[3].w[0] + 8236u), c.r[12].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00420000u);
    st32((c.r[2].w[0] + 8232u), c.r[6].w[0]);
    st32((c.r[3].w[0] + 8776u), c.r[7].w[0]);
    set32(c.r[6], ld32((c.r[21].w[0] + 84u)));
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C3548u); set32(c.r[5], ld32((c.r[21].w[0] + 80u)));  if (depth < kMaxDepth) unit_00B1(c, 116u, depth + 1u); else { c.pc = 0x003C6380u; return; } if (c.pc != 0x003C3548u) [[unlikely]] return; }
L_003C3548:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 9;
    { set32(c.r[29], c.r[29].w[0] + 64u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003B7E48u | kUnwind; return; } [[clang::musttail]] return unit_00AD(c, 480u, depth); }
L_003C3570:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[2], ld32((c.r[2].w[0] + 8400u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_003C358C; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003C358Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003C358Cu) [[unlikely]] return; }
L_003C358C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003C3598:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C35B0u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AF(c, 259u, depth + 1u); else { c.pc = 0x003BDFE0u; return; } if (c.pc != 0x003C35B0u) [[unlikely]] return; }
L_003C35B0:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[17], ld32((c.r[2].w[0] + 4u)));
    set32(c.r[16], ld32((c.r[17].w[0] + 176u)));
    c.budget -= 5;
    if (c.r[16].d[0] == 0ull) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_003C35F8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C35CCu);  if (depth < kMaxDepth) unit_00AD(c, 479u, depth + 1u); else { c.pc = 0x003B7E30u; return; } if (c.pc != 0x003C35CCu) [[unlikely]] return; }
L_003C35CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C35D4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B1(c, 77u, depth + 1u); else { c.pc = 0x003C5EE8u; return; } if (c.pc != 0x003C35D4u) [[unlikely]] return; }
L_003C35D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C35DCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B1(c, 63u, depth + 1u); else { c.pc = 0x003C5DE8u; return; } if (c.pc != 0x003C35DCu) [[unlikely]] return; }
L_003C35DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C35E4u); st32((c.r[17].w[0] + 176u), 0u);  if (depth < kMaxDepth) unit_00AD(c, 480u, depth + 1u); else { c.pc = 0x003B7E48u; return; } if (c.pc != 0x003C35E4u) [[unlikely]] return; }
L_003C35E4:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 32u);  [[clang::musttail]] return unit_00B1(c, 52u, depth); }
L_003C35F8:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003C3608:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00B1(c, 143u, depth); }
L_003C3620:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00B1(c, 144u, depth); }
L_003C3638:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C3654u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AD(c, 479u, depth + 1u); else { c.pc = 0x003B7E30u; return; } if (c.pc != 0x003C3654u) [[unlikely]] return; }
L_003C3654:
    set32(c.r[18], ld32((c.r[16].w[0] + 176u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C3660u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B1(c, 67u, depth + 1u); else { c.pc = 0x003C5E60u; return; } if (c.pc != 0x003C3660u) [[unlikely]] return; }
L_003C3660:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 4u)));  goto L_003C3678; }
    st32((c.r[16].w[0] + 136u), 0u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C3674u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B1(c, 77u, depth + 1u); else { c.pc = 0x003C5EE8u; return; } if (c.pc != 0x003C3674u) [[unlikely]] return; }
L_003C3674:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 1;
L_003C3678:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[2], 0u + 2u);  goto L_003C36A0; }
    st32((c.r[16].w[0] + 136u), 0u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C3690u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B1(c, 72u, depth + 1u); else { c.pc = 0x003C5E90u; return; } if (c.pc != 0x003C3690u) [[unlikely]] return; }
L_003C3690:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (t) { goto L_003C3718; } }
    c.budget -= 1;
L_003C36A0:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_003C371C; }
    set32(c.r[2], ld32((c.r[16].w[0] + 184u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_003C36D0; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_003C36B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C36C0u); set32(c.r[17], c.r[17].w[0] + 1u);  if (depth < kMaxDepth) unit_00B1(c, 108u, depth + 1u); else { c.pc = 0x003C62B8u; return; } if (c.pc != 0x003C36C0u) [[unlikely]] return; }
L_003C36C0:
    set32(c.r[2], ld32((c.r[16].w[0] + 184u)));
    c.r[2].d[0] = c.r[17].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x003C36B8u | kUnwind; return; } goto L_003C36B8; }
L_003C36D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C36D8u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B1(c, 113u, depth + 1u); else { c.pc = 0x003C6368u; return; } if (c.pc != 0x003C36D8u) [[unlikely]] return; }
L_003C36D8:
    set32(c.r[3], ld32((c.r[16].w[0] + 136u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[16].w[0] + 144u), c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C36F4u); st32((c.r[16].w[0] + 136u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_00B1(c, 112u, depth + 1u); else { c.pc = 0x003C6360u; return; } if (c.pc != 0x003C36F4u) [[unlikely]] return; }
L_003C36F4:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C3700u); st32((c.r[16].w[0] + 148u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00B1(c, 67u, depth + 1u); else { c.pc = 0x003C5E60u; return; } if (c.pc != 0x003C3700u) [[unlikely]] return; }
L_003C3700:
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_003C371C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C3714u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B1(c, 77u, depth + 1u); else { c.pc = 0x003C5EE8u; return; } if (c.pc != 0x003C3714u) [[unlikely]] return; }
L_003C3714:
    st32((c.r[16].w[0] + 4u), 0u);
    c.budget -= 1;
L_003C3718:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_003C371C:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003B7E48u | kUnwind; return; } [[clang::musttail]] return unit_00AD(c, 480u, depth); }
L_003C3730:
    c.r[7].d[0] = c.r[4].d[0] + 0ull;
    c.r[3].d[0] = c.r[5].d[0] + 0ull;
    c.r[2].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[12], c.r[5].w[0]);
    set32(c.r[13], c.r[6].w[0]);
    set32(c.r[14], c.r[6].w[0] + 64u);
    set32(c.r[15], c.r[6].w[0] + 32u);
    c.budget -= 7;
L_003C374C:
    ld128((c.r[4].w[0]) & ~15u, c.r[8]);
    ld128((c.r[12].w[0]) & ~15u, c.r[9]);
    { Reg128 scratch; mmi::phmadh(c, c.r[10], c.r[8], c.r[9], false); }
    ld128((c.r[4].w[0] + 16u) & ~15u, c.r[8]);
    ld128((c.r[12].w[0] + 16u) & ~15u, c.r[9]);
    { Reg128 scratch; mmi::phmadh(c, c.r[11], c.r[8], c.r[9], false); }
    mmi::paddw(c.r[10], c.r[10], c.r[11]);
    ld128((c.r[4].w[0] + 32u) & ~15u, c.r[8]);
    ld128((c.r[12].w[0] + 32u) & ~15u, c.r[9]);
    { Reg128 scratch; mmi::phmadh(c, c.r[11], c.r[8], c.r[9], false); }
    mmi::paddw(c.r[10], c.r[10], c.r[11]);
    ld128((c.r[4].w[0] + 48u) & ~15u, c.r[8]);
    ld128((c.r[12].w[0] + 48u) & ~15u, c.r[9]);
    { Reg128 scratch; mmi::phmadh(c, c.r[11], c.r[8], c.r[9], false); }
    mmi::paddw(c.r[10], c.r[10], c.r[11]);
    mmi::pxor(c.r[8], c.r[8], c.r[8]);
    c.sa = ((c.r[8].w[0] ^ 4u) & 7u) * 2u;
    mmi::qfsrv(c.r[11], c.r[10], c.r[10], c.sa);
    mmi::paddw(c.r[10], c.r[10], c.r[11]);
    mmi::pxor(c.r[9], c.r[9], c.r[9]);
    c.sa = ((c.r[9].w[0] ^ 2u) & 7u) * 2u;
    mmi::qfsrv(c.r[11], c.r[10], c.r[10], c.sa);
    mmi::paddw(c.r[10], c.r[10], c.r[11]);
    mmi::psraw(c.r[10], c.r[10], 13u);
    st16((c.r[13].w[0]), static_cast<std::uint16_t>(c.r[10].w[0]));
    set32(c.r[10], 0u - c.r[10].w[0]);
    set32(c.r[10], c.r[10].w[0] - 1u);
    st16((c.r[14].w[0]), static_cast<std::uint16_t>(c.r[10].w[0]));
    set32(c.r[12], c.r[12].w[0] + 64u);
    set32(c.r[13], c.r[13].w[0] + 2u);
    c.budget -= 34;
    { const bool t = c.r[13].d[0] != c.r[15].d[0]; set32(c.r[14], c.r[14].w[0] - 2u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003C374Cu | kUnwind; return; } goto L_003C374C; } }
    st16((c.r[13].w[0]), static_cast<std::uint16_t>(0u));
    set32(c.r[12], c.r[12].w[0] + 1088u);
    set32(c.r[13], c.r[6].w[0] + 66u);
    set32(c.r[14], c.r[6].w[0] + 126u);
    set32(c.r[15], c.r[6].w[0] + 96u);
    c.budget -= 6;
L_003C37EC:
    ld128((c.r[4].w[0]) & ~15u, c.r[8]);
    ld128((c.r[12].w[0]) & ~15u, c.r[9]);
    { Reg128 scratch; mmi::phmadh(c, c.r[10], c.r[8], c.r[9], false); }
    ld128((c.r[4].w[0] + 16u) & ~15u, c.r[8]);
    ld128((c.r[12].w[0] + 16u) & ~15u, c.r[9]);
    { Reg128 scratch; mmi::phmadh(c, c.r[11], c.r[8], c.r[9], false); }
    mmi::paddw(c.r[10], c.r[10], c.r[11]);
    ld128((c.r[4].w[0] + 32u) & ~15u, c.r[8]);
    ld128((c.r[12].w[0] + 32u) & ~15u, c.r[9]);
    { Reg128 scratch; mmi::phmadh(c, c.r[11], c.r[8], c.r[9], false); }
    mmi::paddw(c.r[10], c.r[10], c.r[11]);
    ld128((c.r[4].w[0] + 48u) & ~15u, c.r[8]);
    ld128((c.r[12].w[0] + 48u) & ~15u, c.r[9]);
    { Reg128 scratch; mmi::phmadh(c, c.r[11], c.r[8], c.r[9], false); }
    mmi::paddw(c.r[10], c.r[10], c.r[11]);
    mmi::pxor(c.r[8], c.r[8], c.r[8]);
    c.sa = ((c.r[8].w[0] ^ 4u) & 7u) * 2u;
    mmi::qfsrv(c.r[11], c.r[10], c.r[10], c.sa);
    mmi::paddw(c.r[10], c.r[10], c.r[11]);
    mmi::pxor(c.r[9], c.r[9], c.r[9]);
    c.sa = ((c.r[9].w[0] ^ 2u) & 7u) * 2u;
    mmi::qfsrv(c.r[11], c.r[10], c.r[10], c.sa);
    mmi::paddw(c.r[10], c.r[10], c.r[11]);
    mmi::psraw(c.r[10], c.r[10], 13u);
    st16((c.r[13].w[0]), static_cast<std::uint16_t>(c.r[10].w[0]));
    st16((c.r[14].w[0]), static_cast<std::uint16_t>(c.r[10].w[0]));
    set32(c.r[12], c.r[12].w[0] + 64u);
    set32(c.r[13], c.r[13].w[0] + 2u);
    c.budget -= 32;
    { const bool t = c.r[13].d[0] != c.r[15].d[0]; set32(c.r[14], c.r[14].w[0] - 2u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003C37ECu | kUnwind; return; } goto L_003C37EC; } }
    ld128((c.r[4].w[0]) & ~15u, c.r[8]);
    ld128((c.r[12].w[0]) & ~15u, c.r[9]);
    { Reg128 scratch; mmi::phmadh(c, c.r[10], c.r[8], c.r[9], false); }
    ld128((c.r[4].w[0] + 16u) & ~15u, c.r[8]);
    ld128((c.r[12].w[0] + 16u) & ~15u, c.r[9]);
    { Reg128 scratch; mmi::phmadh(c, c.r[11], c.r[8], c.r[9], false); }
    mmi::paddw(c.r[10], c.r[10], c.r[11]);
    ld128((c.r[4].w[0] + 32u) & ~15u, c.r[8]);
    ld128((c.r[12].w[0] + 32u) & ~15u, c.r[9]);
    { Reg128 scratch; mmi::phmadh(c, c.r[11], c.r[8], c.r[9], false); }
    mmi::paddw(c.r[10], c.r[10], c.r[11]);
    ld128((c.r[4].w[0] + 48u) & ~15u, c.r[8]);
    ld128((c.r[12].w[0] + 48u) & ~15u, c.r[9]);
    { Reg128 scratch; mmi::phmadh(c, c.r[11], c.r[8], c.r[9], false); }
    mmi::paddw(c.r[10], c.r[10], c.r[11]);
    mmi::pxor(c.r[8], c.r[8], c.r[8]);
    c.sa = ((c.r[8].w[0] ^ 4u) & 7u) * 2u;
    mmi::qfsrv(c.r[11], c.r[10], c.r[10], c.sa);
    mmi::paddw(c.r[10], c.r[10], c.r[11]);
    mmi::pxor(c.r[9], c.r[9], c.r[9]);
    c.sa = ((c.r[9].w[0] ^ 2u) & 7u) * 2u;
    mmi::qfsrv(c.r[11], c.r[10], c.r[10], c.sa);
    mmi::paddw(c.r[10], c.r[10], c.r[11]);
    mmi::psraw(c.r[10], c.r[10], 13u);
    c.budget -= 29;
    { const std::uint32_t t = c.r[31].w[0]; st16((c.r[13].w[0]), static_cast<std::uint16_t>(c.r[10].w[0]));  c.pc = t; return; }
L_003C38E0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[24].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    set32(c.r[18], 0u + 32u);
    c.budget -= 8;
L_003C3900:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[24].w[0])));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    set32(c.r[17], c.r[2].w[0] + 2u);
    set32(c.r[24], c.r[24].w[0] + 2u);
    set32(c.r[2], c.r[2].w[0] + 192u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    set32(c.r[2], c.r[2].w[0] + 64u);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[24].w[0])));
    set32(c.r[24], c.r[24].w[0] + 2u);
    mmi::mult(c, 0, c.r[7].w[0], c.r[4].w[0]);
    c.r[25].d[0] = c.lo.d[0];
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[24].w[0])));
    set32(c.r[24], c.r[24].w[0] + 2u);
    set32(c.r[2], c.r[2].w[0] + 192u);
    mmi::mult(c, 1, c.r[5].w[0], c.r[3].w[0]);
    c.r[5].d[0] = c.lo.d[1];
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[24].w[0])));
    set32(c.r[24], c.r[24].w[0] + 2u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    set32(c.r[2], c.r[2].w[0] + 64u);
    mmi::mult(c, 0, c.r[6].w[0], c.r[4].w[0]);
    c.r[6].d[0] = c.lo.d[0];
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    c.r[8].sd[0] = static_cast<std::int16_t>(ld16((c.r[24].w[0])));
    set32(c.r[24], c.r[24].w[0] + 2u);
    set32(c.r[2], c.r[2].w[0] + 192u);
    mmi::mult(c, 0, c.r[7].w[0], c.r[3].w[0]);
    c.r[7].d[0] = c.lo.d[0];
    c.r[11].sd[0] = static_cast<std::int16_t>(ld16((c.r[24].w[0])));
    set32(c.r[24], c.r[24].w[0] + 2u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    set32(c.r[2], c.r[2].w[0] + 64u);
    mmi::mult(c, 0, c.r[8].w[0], c.r[4].w[0]);
    c.r[8].d[0] = c.lo.d[0];
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    c.r[13].sd[0] = static_cast<std::int16_t>(ld16((c.r[24].w[0])));
    set32(c.r[24], c.r[24].w[0] + 2u);
    set32(c.r[2], c.r[2].w[0] + 192u);
    mmi::mult(c, 0, c.r[11].w[0], c.r[3].w[0]);
    c.r[11].d[0] = c.lo.d[0];
    set32(c.r[25], c.r[25].w[0] + c.r[5].w[0]);
    c.r[14].sd[0] = static_cast<std::int16_t>(ld16((c.r[24].w[0])));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    set32(c.r[2], c.r[2].w[0] + 64u);
    set32(c.r[24], c.r[24].w[0] + 2u);
    mmi::mult(c, 0, c.r[13].w[0], c.r[4].w[0]);
    c.r[13].d[0] = c.lo.d[0];
    set32(c.r[25], c.r[25].w[0] + c.r[6].w[0]);
    c.r[15].sd[0] = static_cast<std::int16_t>(ld16((c.r[24].w[0])));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    set32(c.r[2], c.r[2].w[0] + 192u);
    set32(c.r[24], c.r[24].w[0] + 2u);
    mmi::mult(c, 0, c.r[14].w[0], c.r[3].w[0]);
    c.r[14].d[0] = c.lo.d[0];
    set32(c.r[25], c.r[25].w[0] + c.r[7].w[0]);
    c.r[12].sd[0] = static_cast<std::int16_t>(ld16((c.r[24].w[0])));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    set32(c.r[2], c.r[2].w[0] + 64u);
    set32(c.r[24], c.r[24].w[0] + 2u);
    mmi::mult(c, 0, c.r[15].w[0], c.r[4].w[0]);
    c.r[15].d[0] = c.lo.d[0];
    set32(c.r[25], c.r[25].w[0] + c.r[8].w[0]);
    c.r[10].sd[0] = static_cast<std::int16_t>(ld16((c.r[24].w[0])));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    set32(c.r[2], c.r[2].w[0] + 192u);
    set32(c.r[24], c.r[24].w[0] + 2u);
    mmi::mult(c, 0, c.r[12].w[0], c.r[3].w[0]);
    c.r[12].d[0] = c.lo.d[0];
    c.r[9].sd[0] = static_cast<std::int16_t>(ld16((c.r[24].w[0])));
    set32(c.r[24], c.r[24].w[0] + 2u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    set32(c.r[2], c.r[2].w[0] + 64u);
    set32(c.r[25], c.r[25].w[0] + c.r[11].w[0]);
    mmi::mult(c, 0, c.r[10].w[0], c.r[4].w[0]);
    c.r[10].d[0] = c.lo.d[0];
    c.r[8].sd[0] = static_cast<std::int16_t>(ld16((c.r[24].w[0])));
    set32(c.r[24], c.r[24].w[0] + 2u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    set32(c.r[2], c.r[2].w[0] + 192u);
    set32(c.r[25], c.r[25].w[0] + c.r[13].w[0]);
    mmi::mult(c, 0, c.r[9].w[0], c.r[3].w[0]);
    c.r[9].d[0] = c.lo.d[0];
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[24].w[0])));
    set32(c.r[24], c.r[24].w[0] + 2u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    set32(c.r[2], c.r[2].w[0] + 64u);
    set32(c.r[25], c.r[25].w[0] + c.r[14].w[0]);
    mmi::mult(c, 0, c.r[8].w[0], c.r[4].w[0]);
    c.r[8].d[0] = c.lo.d[0];
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[24].w[0])));
    set32(c.r[24], c.r[24].w[0] + 2u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    set32(c.r[25], c.r[25].w[0] + c.r[15].w[0]);
    mmi::mult(c, 0, c.r[7].w[0], c.r[3].w[0]);
    c.r[7].d[0] = c.lo.d[0];
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[24].w[0])));
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 192u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x03FF0000u);
    set32(c.r[25], c.r[25].w[0] + c.r[12].w[0]);
    mmi::mult(c, 0, c.r[5].w[0], c.r[4].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    set32(c.r[25], c.r[25].w[0] + c.r[10].w[0]);
    mmi::mult(c, 0, c.r[3].w[0], c.r[6].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[25], c.r[25].w[0] + c.r[9].w[0]);
    c.r[2].d[0] = c.r[2].d[0] | 63488ull;
    set32(c.r[25], c.r[25].w[0] + c.r[8].w[0]);
    set32(c.r[25], c.r[25].w[0] + c.r[7].w[0]);
    set32(c.r[25], c.r[25].w[0] + c.r[5].w[0]);
    set32(c.r[25], c.r[25].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = c.r[2].sd[0] < c.r[25].sd[0] ? 1ull : 0ull;
    c.budget -= 99;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[24], c.r[24].w[0] + 2u);  if (t) { goto L_003C3A98; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 32767u);  if (t) { goto L_003C3AAC; } }
    c.budget -= 1;
L_003C3A98:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFC000000u);
    c.r[2].d[0] = c.r[25].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[25].w[0]) >> 11));  goto L_003C3AAC; }
    set32(c.r[2], 0u - 32768u);
    c.budget -= 1;
L_003C3AAC:
    st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[18], c.r[18].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[18].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 2u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003C3900u | kUnwind; return; } goto L_003C3900; } }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003C3AD0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[24].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    set32(c.r[18], 0u + 32u);
    c.budget -= 8;
L_003C3AF0:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[24].w[0])));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    set32(c.r[17], c.r[2].w[0] + 2u);
    set32(c.r[24], c.r[24].w[0] + 2u);
    set32(c.r[2], c.r[2].w[0] + 192u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    set32(c.r[2], c.r[2].w[0] + 64u);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[24].w[0])));
    set32(c.r[24], c.r[24].w[0] + 2u);
    mmi::mult(c, 0, c.r[7].w[0], c.r[4].w[0]);
    c.r[25].d[0] = c.lo.d[0];
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[24].w[0])));
    set32(c.r[24], c.r[24].w[0] + 2u);
    set32(c.r[2], c.r[2].w[0] + 192u);
    mmi::mult(c, 1, c.r[5].w[0], c.r[3].w[0]);
    c.r[5].d[0] = c.lo.d[1];
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[24].w[0])));
    set32(c.r[24], c.r[24].w[0] + 2u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    set32(c.r[2], c.r[2].w[0] + 64u);
    mmi::mult(c, 0, c.r[6].w[0], c.r[4].w[0]);
    c.r[6].d[0] = c.lo.d[0];
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    c.r[8].sd[0] = static_cast<std::int16_t>(ld16((c.r[24].w[0])));
    set32(c.r[24], c.r[24].w[0] + 2u);
    set32(c.r[2], c.r[2].w[0] + 192u);
    mmi::mult(c, 0, c.r[7].w[0], c.r[3].w[0]);
    c.r[7].d[0] = c.lo.d[0];
    c.r[11].sd[0] = static_cast<std::int16_t>(ld16((c.r[24].w[0])));
    set32(c.r[24], c.r[24].w[0] + 2u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    set32(c.r[2], c.r[2].w[0] + 64u);
    mmi::mult(c, 0, c.r[8].w[0], c.r[4].w[0]);
    c.r[8].d[0] = c.lo.d[0];
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    c.r[13].sd[0] = static_cast<std::int16_t>(ld16((c.r[24].w[0])));
    set32(c.r[24], c.r[24].w[0] + 2u);
    set32(c.r[2], c.r[2].w[0] + 192u);
    mmi::mult(c, 0, c.r[11].w[0], c.r[3].w[0]);
    c.r[11].d[0] = c.lo.d[0];
    set32(c.r[25], c.r[25].w[0] + c.r[5].w[0]);
    c.r[14].sd[0] = static_cast<std::int16_t>(ld16((c.r[24].w[0])));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    set32(c.r[2], c.r[2].w[0] + 64u);
    set32(c.r[24], c.r[24].w[0] + 2u);
    mmi::mult(c, 0, c.r[13].w[0], c.r[4].w[0]);
    c.r[13].d[0] = c.lo.d[0];
    set32(c.r[25], c.r[25].w[0] + c.r[6].w[0]);
    c.r[15].sd[0] = static_cast<std::int16_t>(ld16((c.r[24].w[0])));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    set32(c.r[2], c.r[2].w[0] + 192u);
    set32(c.r[24], c.r[24].w[0] + 2u);
    mmi::mult(c, 0, c.r[14].w[0], c.r[3].w[0]);
    c.r[14].d[0] = c.lo.d[0];
    set32(c.r[25], c.r[25].w[0] + c.r[7].w[0]);
    c.r[12].sd[0] = static_cast<std::int16_t>(ld16((c.r[24].w[0])));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    set32(c.r[2], c.r[2].w[0] + 64u);
    set32(c.r[24], c.r[24].w[0] + 2u);
    mmi::mult(c, 0, c.r[15].w[0], c.r[4].w[0]);
    c.r[15].d[0] = c.lo.d[0];
    set32(c.r[25], c.r[25].w[0] + c.r[8].w[0]);
    c.r[10].sd[0] = static_cast<std::int16_t>(ld16((c.r[24].w[0])));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    set32(c.r[2], c.r[2].w[0] + 192u);
    set32(c.r[24], c.r[24].w[0] + 2u);
    mmi::mult(c, 0, c.r[12].w[0], c.r[3].w[0]);
    c.r[12].d[0] = c.lo.d[0];
    c.r[9].sd[0] = static_cast<std::int16_t>(ld16((c.r[24].w[0])));
    set32(c.r[24], c.r[24].w[0] + 2u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    set32(c.r[2], c.r[2].w[0] + 64u);
    set32(c.r[25], c.r[25].w[0] + c.r[11].w[0]);
    mmi::mult(c, 0, c.r[10].w[0], c.r[4].w[0]);
    c.r[10].d[0] = c.lo.d[0];
    c.r[8].sd[0] = static_cast<std::int16_t>(ld16((c.r[24].w[0])));
    set32(c.r[24], c.r[24].w[0] + 2u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    set32(c.r[2], c.r[2].w[0] + 192u);
    set32(c.r[25], c.r[25].w[0] + c.r[13].w[0]);
    mmi::mult(c, 0, c.r[9].w[0], c.r[3].w[0]);
    c.r[9].d[0] = c.lo.d[0];
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[24].w[0])));
    set32(c.r[24], c.r[24].w[0] + 2u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    set32(c.r[2], c.r[2].w[0] + 64u);
    set32(c.r[25], c.r[25].w[0] + c.r[14].w[0]);
    mmi::mult(c, 0, c.r[8].w[0], c.r[4].w[0]);
    c.r[8].d[0] = c.lo.d[0];
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[24].w[0])));
    set32(c.r[24], c.r[24].w[0] + 2u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    set32(c.r[25], c.r[25].w[0] + c.r[15].w[0]);
    mmi::mult(c, 0, c.r[7].w[0], c.r[3].w[0]);
    c.r[7].d[0] = c.lo.d[0];
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[24].w[0])));
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] - 1856u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x03FF0000u);
    set32(c.r[25], c.r[25].w[0] + c.r[12].w[0]);
    mmi::mult(c, 0, c.r[5].w[0], c.r[4].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    set32(c.r[25], c.r[25].w[0] + c.r[10].w[0]);
    mmi::mult(c, 0, c.r[3].w[0], c.r[6].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[25], c.r[25].w[0] + c.r[9].w[0]);
    c.r[2].d[0] = c.r[2].d[0] | 63488ull;
    set32(c.r[25], c.r[25].w[0] + c.r[8].w[0]);
    set32(c.r[25], c.r[25].w[0] + c.r[7].w[0]);
    set32(c.r[25], c.r[25].w[0] + c.r[5].w[0]);
    set32(c.r[25], c.r[25].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = c.r[2].sd[0] < c.r[25].sd[0] ? 1ull : 0ull;
    c.budget -= 99;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[24], c.r[24].w[0] + 2u);  if (t) { goto L_003C3C88; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 32767u);  if (t) { goto L_003C3C9C; } }
    c.budget -= 1;
L_003C3C88:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFC000000u);
    c.r[2].d[0] = c.r[25].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[25].w[0]) >> 11));  goto L_003C3C9C; }
    set32(c.r[2], 0u - 32768u);
    c.budget -= 1;
L_003C3C9C:
    st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[18], c.r[18].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[18].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 2u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003C3AF0u | kUnwind; return; } goto L_003C3AF0; } }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003C3CC0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[24].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    set32(c.r[18], 0u + 32u);
    c.budget -= 8;
L_003C3CE0:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[24].w[0])));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    set32(c.r[17], c.r[2].w[0] + 2u);
    set32(c.r[24], c.r[24].w[0] + 2u);
    set32(c.r[2], c.r[2].w[0] + 192u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    set32(c.r[2], c.r[2].w[0] + 64u);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[24].w[0])));
    set32(c.r[24], c.r[24].w[0] + 2u);
    mmi::mult(c, 0, c.r[7].w[0], c.r[4].w[0]);
    c.r[25].d[0] = c.lo.d[0];
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[24].w[0])));
    set32(c.r[24], c.r[24].w[0] + 2u);
    set32(c.r[2], c.r[2].w[0] + 192u);
    mmi::mult(c, 1, c.r[5].w[0], c.r[3].w[0]);
    c.r[5].d[0] = c.lo.d[1];
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[24].w[0])));
    set32(c.r[24], c.r[24].w[0] + 2u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    set32(c.r[2], c.r[2].w[0] + 64u);
    mmi::mult(c, 0, c.r[6].w[0], c.r[4].w[0]);
    c.r[6].d[0] = c.lo.d[0];
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    c.r[8].sd[0] = static_cast<std::int16_t>(ld16((c.r[24].w[0])));
    set32(c.r[24], c.r[24].w[0] + 2u);
    set32(c.r[2], c.r[2].w[0] + 192u);
    mmi::mult(c, 0, c.r[7].w[0], c.r[3].w[0]);
    c.r[7].d[0] = c.lo.d[0];
    c.r[11].sd[0] = static_cast<std::int16_t>(ld16((c.r[24].w[0])));
    set32(c.r[24], c.r[24].w[0] + 2u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    set32(c.r[2], c.r[2].w[0] + 64u);
    mmi::mult(c, 0, c.r[8].w[0], c.r[4].w[0]);
    c.r[8].d[0] = c.lo.d[0];
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    c.r[13].sd[0] = static_cast<std::int16_t>(ld16((c.r[24].w[0])));
    set32(c.r[24], c.r[24].w[0] + 2u);
    set32(c.r[2], c.r[2].w[0] + 192u);
    mmi::mult(c, 0, c.r[11].w[0], c.r[3].w[0]);
    c.r[11].d[0] = c.lo.d[0];
    set32(c.r[25], c.r[25].w[0] + c.r[5].w[0]);
    c.r[14].sd[0] = static_cast<std::int16_t>(ld16((c.r[24].w[0])));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    set32(c.r[2], c.r[2].w[0] + 64u);
    set32(c.r[24], c.r[24].w[0] + 2u);
    mmi::mult(c, 0, c.r[13].w[0], c.r[4].w[0]);
    c.r[13].d[0] = c.lo.d[0];
    set32(c.r[25], c.r[25].w[0] + c.r[6].w[0]);
    c.r[15].sd[0] = static_cast<std::int16_t>(ld16((c.r[24].w[0])));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    set32(c.r[2], c.r[2].w[0] + 192u);
    set32(c.r[24], c.r[24].w[0] + 2u);
    mmi::mult(c, 0, c.r[14].w[0], c.r[3].w[0]);
    c.r[14].d[0] = c.lo.d[0];
    set32(c.r[25], c.r[25].w[0] + c.r[7].w[0]);
    c.r[12].sd[0] = static_cast<std::int16_t>(ld16((c.r[24].w[0])));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    set32(c.r[2], c.r[2].w[0] + 64u);
    set32(c.r[24], c.r[24].w[0] + 2u);
    mmi::mult(c, 0, c.r[15].w[0], c.r[4].w[0]);
    c.r[15].d[0] = c.lo.d[0];
    set32(c.r[25], c.r[25].w[0] + c.r[8].w[0]);
    c.r[10].sd[0] = static_cast<std::int16_t>(ld16((c.r[24].w[0])));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    set32(c.r[2], c.r[2].w[0] + 192u);
    set32(c.r[24], c.r[24].w[0] + 2u);
    mmi::mult(c, 0, c.r[12].w[0], c.r[3].w[0]);
    c.r[12].d[0] = c.lo.d[0];
    c.r[9].sd[0] = static_cast<std::int16_t>(ld16((c.r[24].w[0])));
    set32(c.r[24], c.r[24].w[0] + 2u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    set32(c.r[2], c.r[2].w[0] + 64u);
    set32(c.r[25], c.r[25].w[0] + c.r[11].w[0]);
    mmi::mult(c, 0, c.r[10].w[0], c.r[4].w[0]);
    c.r[10].d[0] = c.lo.d[0];
    c.r[8].sd[0] = static_cast<std::int16_t>(ld16((c.r[24].w[0])));
    set32(c.r[24], c.r[24].w[0] + 2u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    set32(c.r[2], c.r[2].w[0] + 192u);
    set32(c.r[25], c.r[25].w[0] + c.r[13].w[0]);
    mmi::mult(c, 0, c.r[9].w[0], c.r[3].w[0]);
    c.r[9].d[0] = c.lo.d[0];
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[24].w[0])));
    set32(c.r[24], c.r[24].w[0] + 2u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1984u);
    set32(c.r[25], c.r[25].w[0] + c.r[14].w[0]);
    mmi::mult(c, 0, c.r[8].w[0], c.r[4].w[0]);
    c.r[8].d[0] = c.lo.d[0];
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[24].w[0])));
    set32(c.r[24], c.r[24].w[0] + 2u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    set32(c.r[25], c.r[25].w[0] + c.r[15].w[0]);
    mmi::mult(c, 0, c.r[7].w[0], c.r[3].w[0]);
    c.r[7].d[0] = c.lo.d[0];
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[24].w[0])));
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 192u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x03FF0000u);
    set32(c.r[25], c.r[25].w[0] + c.r[12].w[0]);
    mmi::mult(c, 0, c.r[5].w[0], c.r[4].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    set32(c.r[25], c.r[25].w[0] + c.r[10].w[0]);
    mmi::mult(c, 0, c.r[3].w[0], c.r[6].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[25], c.r[25].w[0] + c.r[9].w[0]);
    c.r[2].d[0] = c.r[2].d[0] | 63488ull;
    set32(c.r[25], c.r[25].w[0] + c.r[8].w[0]);
    set32(c.r[25], c.r[25].w[0] + c.r[7].w[0]);
    set32(c.r[25], c.r[25].w[0] + c.r[5].w[0]);
    set32(c.r[25], c.r[25].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = c.r[2].sd[0] < c.r[25].sd[0] ? 1ull : 0ull;
    c.budget -= 99;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[24], c.r[24].w[0] + 2u);  if (t) { goto L_003C3E78; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 32767u);  if (t) { goto L_003C3E8C; } }
    c.budget -= 1;
L_003C3E78:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFC000000u);
    c.r[2].d[0] = c.r[25].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[25].w[0]) >> 11));  goto L_003C3E8C; }
    set32(c.r[2], 0u - 32768u);
    c.budget -= 1;
L_003C3E8C:
    st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[18], c.r[18].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[18].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 2u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003C3CE0u | kUnwind; return; } goto L_003C3CE0; } }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003C3EB0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[24].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    set32(c.r[18], 0u + 32u);
    c.budget -= 8;
L_003C3ED0:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[24].w[0])));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    set32(c.r[17], c.r[2].w[0] + 2u);
    set32(c.r[24], c.r[24].w[0] + 2u);
    set32(c.r[2], c.r[2].w[0] + 192u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    set32(c.r[2], c.r[2].w[0] + 64u);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[24].w[0])));
    set32(c.r[24], c.r[24].w[0] + 2u);
    mmi::mult(c, 0, c.r[7].w[0], c.r[4].w[0]);
    c.r[25].d[0] = c.lo.d[0];
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[24].w[0])));
    set32(c.r[24], c.r[24].w[0] + 2u);
    set32(c.r[2], c.r[2].w[0] + 192u);
    mmi::mult(c, 1, c.r[5].w[0], c.r[3].w[0]);
    c.r[5].d[0] = c.lo.d[1];
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[24].w[0])));
    set32(c.r[24], c.r[24].w[0] + 2u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    set32(c.r[2], c.r[2].w[0] + 64u);
    mmi::mult(c, 0, c.r[6].w[0], c.r[4].w[0]);
    c.r[6].d[0] = c.lo.d[0];
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    c.r[8].sd[0] = static_cast<std::int16_t>(ld16((c.r[24].w[0])));
    set32(c.r[24], c.r[24].w[0] + 2u);
    set32(c.r[2], c.r[2].w[0] + 192u);
    mmi::mult(c, 0, c.r[7].w[0], c.r[3].w[0]);
    c.r[7].d[0] = c.lo.d[0];
    c.r[11].sd[0] = static_cast<std::int16_t>(ld16((c.r[24].w[0])));
    set32(c.r[24], c.r[24].w[0] + 2u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    set32(c.r[2], c.r[2].w[0] + 64u);
    mmi::mult(c, 0, c.r[8].w[0], c.r[4].w[0]);
    c.r[8].d[0] = c.lo.d[0];
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    c.r[13].sd[0] = static_cast<std::int16_t>(ld16((c.r[24].w[0])));
    set32(c.r[24], c.r[24].w[0] + 2u);
    set32(c.r[2], c.r[2].w[0] + 192u);
    mmi::mult(c, 0, c.r[11].w[0], c.r[3].w[0]);
    c.r[11].d[0] = c.lo.d[0];
    set32(c.r[25], c.r[25].w[0] + c.r[5].w[0]);
    c.r[14].sd[0] = static_cast<std::int16_t>(ld16((c.r[24].w[0])));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    set32(c.r[2], c.r[2].w[0] + 64u);
    set32(c.r[24], c.r[24].w[0] + 2u);
    mmi::mult(c, 0, c.r[13].w[0], c.r[4].w[0]);
    c.r[13].d[0] = c.lo.d[0];
    set32(c.r[25], c.r[25].w[0] + c.r[6].w[0]);
    c.r[15].sd[0] = static_cast<std::int16_t>(ld16((c.r[24].w[0])));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    set32(c.r[2], c.r[2].w[0] + 192u);
    set32(c.r[24], c.r[24].w[0] + 2u);
    mmi::mult(c, 0, c.r[14].w[0], c.r[3].w[0]);
    c.r[14].d[0] = c.lo.d[0];
    set32(c.r[25], c.r[25].w[0] + c.r[7].w[0]);
    c.r[12].sd[0] = static_cast<std::int16_t>(ld16((c.r[24].w[0])));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    set32(c.r[2], c.r[2].w[0] + 64u);
    set32(c.r[24], c.r[24].w[0] + 2u);
    mmi::mult(c, 0, c.r[15].w[0], c.r[4].w[0]);
    c.r[15].d[0] = c.lo.d[0];
    set32(c.r[25], c.r[25].w[0] + c.r[8].w[0]);
    c.r[10].sd[0] = static_cast<std::int16_t>(ld16((c.r[24].w[0])));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    set32(c.r[2], c.r[2].w[0] + 192u);
    set32(c.r[24], c.r[24].w[0] + 2u);
    mmi::mult(c, 0, c.r[12].w[0], c.r[3].w[0]);
    c.r[12].d[0] = c.lo.d[0];
    c.r[9].sd[0] = static_cast<std::int16_t>(ld16((c.r[24].w[0])));
    set32(c.r[24], c.r[24].w[0] + 2u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    set32(c.r[2], c.r[2].w[0] + 64u);
    set32(c.r[25], c.r[25].w[0] + c.r[11].w[0]);
    mmi::mult(c, 0, c.r[10].w[0], c.r[4].w[0]);
    c.r[10].d[0] = c.lo.d[0];
    c.r[8].sd[0] = static_cast<std::int16_t>(ld16((c.r[24].w[0])));
    set32(c.r[24], c.r[24].w[0] + 2u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1856u);
    set32(c.r[25], c.r[25].w[0] + c.r[13].w[0]);
    mmi::mult(c, 0, c.r[9].w[0], c.r[3].w[0]);
    c.r[9].d[0] = c.lo.d[0];
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[24].w[0])));
    set32(c.r[24], c.r[24].w[0] + 2u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    set32(c.r[2], c.r[2].w[0] + 64u);
    c.budget -= 76;
    [[clang::musttail]] return unit_00B1(c, 1u, depth);
}

}
