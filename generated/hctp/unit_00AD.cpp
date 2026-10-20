#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_00AD[4096] = {
    1, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0,
    9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0,
    13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0,
    15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    24, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 27, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 34, 0,
    35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 41, 0, 42, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    52, 0, 53, 0, 0, 0, 0, 54, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 57, 0, 58, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0,
    0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 65, 0, 66, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 69, 0, 70, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0,
    74, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 76, 0, 0, 0, 77, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 80, 0, 81, 0, 0, 0, 82, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0,
    0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 88, 0, 89, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 90, 0, 0, 91, 0, 0, 92, 0, 0, 0, 0, 0, 93, 0, 0, 94, 0, 0, 95, 0, 0, 96, 0, 0, 0, 0,
    0, 0, 97, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 99,
    0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0,
    106, 0, 0, 0, 0, 0, 0, 0, 0, 0, 107, 0, 108, 0, 0, 0, 109, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 111, 0, 0, 112,
    0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0, 0,
    116, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 119,
    0, 0, 0, 0, 120, 0, 121, 0, 122, 0, 0, 0, 0, 123, 0, 124, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 126, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0,
    130, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 133, 0, 0, 134, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 137, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0,
    139, 0, 0, 0, 0, 0, 0, 0, 140, 0, 141, 0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 0, 148, 0,
    0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0, 0, 0, 152, 0, 153, 0,
    0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0, 156, 0, 0, 0, 157, 0, 0, 0, 0, 0,
    0, 0, 158, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 160, 0, 0, 0, 0, 0, 161, 0, 0, 0, 0, 0,
    162, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    164, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 166, 0, 0, 167, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 168,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 173, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 177, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 179, 0, 180, 0, 0, 181, 0, 0, 182, 0, 0, 183, 0, 0, 184, 0, 0, 185, 0, 0, 0, 0, 0, 186, 0, 0, 0, 0, 0, 187, 0,
    0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 0,
    192, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 198, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 199, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0,
    0, 0, 0, 202, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 203, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 204, 0, 0, 0, 205, 0, 0, 0, 206, 0, 0, 0, 0, 0, 0, 207, 0, 0, 0, 0, 0,
    0, 0, 208, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 209, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 210, 0, 0, 211, 0, 0, 0, 0, 0, 0, 0, 0, 212, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 213,
    0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 215, 0, 0, 0, 0, 216, 0, 0, 0, 0, 0, 217, 0, 0, 0, 0, 0, 0, 0, 218, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 219, 0, 0, 0, 220, 0, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 222, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 223, 0, 0, 0, 224, 0, 0, 0, 225, 0, 0, 0, 226, 0, 227, 0, 228, 0, 0, 0, 229, 0, 0, 0, 230, 0, 0, 0,
    231, 0, 0, 0, 232, 0, 0, 0, 233, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 234, 0, 235, 0, 236, 0, 237, 0, 238, 0, 239, 0,
    240, 0, 241, 0, 242, 0, 243, 0, 244, 0, 245, 0, 0, 0, 246, 0, 0, 0, 247, 0, 0, 0, 0, 248, 0, 249, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 250, 0, 0, 0, 0, 251, 0, 0, 0, 0, 0, 0, 0, 252, 0, 0, 0, 0, 0, 0, 253, 0, 254,
    0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 256, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 257, 0, 258,
    0, 259, 0, 260, 0, 261, 0, 0, 262, 0, 0, 0, 263, 0, 0, 0, 264, 0, 265, 0, 266, 0, 267, 0, 268, 0, 269, 0, 270, 0, 271, 0,
    0, 0, 0, 0, 272, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 273, 0, 0, 0, 0, 274, 0, 0, 0, 275, 0, 0, 0,
    276, 0, 0, 0, 0, 0, 277, 0, 0, 0, 0, 0, 278, 0, 279, 0, 280, 0, 0, 0, 0, 0, 0, 0, 281, 0, 0, 0, 282, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 283, 0, 0, 0, 0, 0, 284, 0, 0, 0, 0, 0, 0, 0, 0, 0, 285, 0, 0, 0, 0, 0,
    286, 0, 0, 0, 0, 0, 287, 0, 288, 0, 289, 0, 0, 0, 290, 0, 0, 0, 0, 291, 0, 0, 0, 0, 292, 0, 293, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 294, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 295, 0, 0, 0, 0, 0, 296, 0, 0, 0, 297, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 298, 0, 0, 0, 0, 0, 0, 0, 299, 0, 0, 0, 0, 0, 0, 300, 0, 0, 0, 0, 0,
    301, 0, 0, 0, 302, 0, 0, 0, 303, 0, 0, 0, 0, 0, 304, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 305, 0,
    306, 0, 0, 307, 0, 0, 0, 0, 308, 0, 0, 0, 0, 0, 309, 0, 310, 0, 311, 0, 0, 0, 0, 0, 0, 0, 312, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 313, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 314, 0, 0, 315, 0, 0,
    316, 0, 0, 0, 0, 0, 0, 0, 317, 0, 318, 0, 0, 0, 0, 0, 319, 0, 0, 0, 0, 0, 0, 0, 320, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 321, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 322, 0, 0, 0, 0, 0, 323, 0, 0, 0, 0, 0, 324,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 325, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 326, 0, 327, 0, 0, 0, 328, 0,
    0, 0, 0, 0, 0, 0, 329, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 330, 0, 0, 331, 0,
    0, 0, 0, 332, 0, 333, 0, 0, 0, 0, 0, 0, 0, 0, 0, 334, 0, 0, 335, 0, 336, 0, 0, 0, 0, 0, 0, 0, 337, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 338, 0, 0, 0, 0, 0, 0, 0, 0, 0, 339, 0, 0, 0, 0, 0, 340, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    341, 0, 342, 0, 0, 0, 0, 0, 0, 0, 0, 0, 343, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 344, 0,
    0, 0, 0, 345, 0, 346, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 347, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 348, 0, 0, 0, 0, 349, 0, 350, 0, 0, 0, 351, 0, 352, 0, 353, 0, 354, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 355, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 356, 0, 0, 0, 0, 0, 0, 0, 0, 0, 357, 0, 0, 0, 0, 0, 358, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 359, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 360, 0, 0, 0, 0, 361,
    0, 0, 0, 0, 0, 0, 362, 0, 0, 0, 363, 0, 0, 0, 0, 364, 0, 0, 0, 0, 365, 0, 366, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 367, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 368, 0, 0, 0,
    0, 369, 0, 0, 0, 0, 0, 0, 370, 0, 0, 0, 371, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 372, 0, 0, 0,
    0, 0, 0, 373, 0, 0, 0, 0, 0, 0, 0, 0, 374, 0, 0, 0, 375, 0, 0, 0, 0, 0, 0, 376, 0, 0, 0, 0, 0, 0, 0, 0,
    377, 0, 0, 0, 378, 0, 0, 0, 0, 0, 379, 0, 0, 0, 0, 0, 0, 0, 0, 380, 0, 0, 0, 0, 0, 0, 0, 0, 381, 0, 0, 0,
    0, 0, 0, 0, 382, 0, 0, 0, 0, 0, 0, 0, 0, 383, 0, 0, 0, 0, 0, 0, 0, 384, 0, 0, 0, 0, 0, 0, 385, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 386, 0, 0, 0, 0, 0, 0, 387, 0, 0, 0, 0, 0, 388, 0, 0, 0,
    0, 389, 0, 0, 0, 0, 390, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 391, 0, 0, 0, 0,
    392, 0, 0, 0, 393, 0, 0, 0, 394, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 395, 0, 0,
    0, 0, 396, 0, 0, 0, 397, 0, 0, 0, 398, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 399,
    0, 0, 0, 0, 400, 0, 0, 0, 401, 0, 0, 0, 402, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 403, 0, 0, 0, 0, 404, 0, 0, 0, 405, 0, 0, 406, 0, 0, 0, 0, 407, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 408, 0, 0, 0, 0, 409, 0, 0, 0, 410, 0, 0, 411, 0, 0, 0, 0, 0, 0, 412, 0, 0, 0, 413, 0,
    0, 0, 0, 0, 414, 0, 0, 0, 0, 0, 415, 0, 0, 0, 0, 0, 416, 0, 0, 0, 0, 0, 417, 0, 0, 0, 0, 0, 418, 0, 0, 0,
    0, 0, 419, 0, 0, 0, 420, 0, 421, 0, 422, 0, 423, 0, 424, 0, 0, 0, 425, 0, 0, 0, 426, 0, 0, 0, 0, 0, 427, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 428, 0, 0, 0, 429, 0, 0, 0, 430, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 431, 0, 0, 0, 0, 432, 0, 0, 0,
    433, 0, 434, 0, 435, 0, 436, 0, 0, 0, 437, 0, 0, 0, 0, 438, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 439, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 440, 0, 0, 0, 0, 0, 0, 0, 0, 0, 441, 0, 442, 0, 443, 0, 444, 0,
    445, 0, 0, 0, 0, 0, 446, 0, 0, 447, 0, 0, 448, 0, 0, 0, 0, 0, 0, 0, 449, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 450, 0, 0, 0, 451, 0, 452, 0, 453, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 454, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 455, 0, 0, 0,
    456, 0, 457, 0, 458, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 459, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 460, 0, 0, 0, 461, 0, 462, 0, 463, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 464, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 465, 0, 0, 0, 466, 0, 467, 0, 468, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 469, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 470, 0, 0, 0, 471, 0, 472, 0,
    473, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 474, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 475, 0, 0, 0, 476, 0, 477, 0, 478, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 479, 0, 0, 0, 0, 0, 480, 0, 0, 0, 0, 0, 481, 0, 0, 0, 482, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 483, 0, 0, 0, 0, 0, 0,
    0, 484, 0, 485, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 486, 0, 0, 0, 0, 0, 0, 487, 0, 0, 0, 0, 0, 0, 0, 488, 0, 0,
    0, 0, 0, 0, 0, 0, 489, 0, 0, 0, 0, 0, 490, 0, 0, 0, 0, 0, 491, 0, 0, 0, 0, 0, 0, 492, 0, 0, 0, 0, 493, 0,
};

void unit_00AD(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_003B4000;
    case 2u: goto L_003B4008;
    case 3u: goto L_003B4030;
    case 4u: goto L_003B4058;
    case 5u: goto L_003B4080;
    case 6u: goto L_003B40B8;
    case 7u: goto L_003B40C8;
    case 8u: goto L_003B40F0;
    case 9u: goto L_003B4100;
    case 10u: goto L_003B413C;
    case 11u: goto L_003B4148;
    case 12u: goto L_003B4174;
    case 13u: goto L_003B4180;
    case 14u: goto L_003B41F0;
    case 15u: goto L_003B4200;
    case 16u: goto L_003B4244;
    case 17u: goto L_003B4268;
    case 18u: goto L_003B4290;
    case 19u: goto L_003B42B8;
    case 20u: goto L_003B42D0;
    case 21u: goto L_003B42E8;
    case 22u: goto L_003B4330;
    case 23u: goto L_003B4344;
    case 24u: goto L_003B4380;
    case 25u: goto L_003B439C;
    case 26u: goto L_003B43D0;
    case 27u: goto L_003B4404;
    case 28u: goto L_003B4418;
    case 29u: goto L_003B4438;
    case 30u: goto L_003B4450;
    case 31u: goto L_003B44A8;
    case 32u: goto L_003B44BC;
    case 33u: goto L_003B452C;
    case 34u: goto L_003B4678;
    case 35u: goto L_003B4680;
    case 36u: goto L_003B46B0;
    case 37u: goto L_003B46F0;
    case 38u: goto L_003B4744;
    case 39u: goto L_003B47BC;
    case 40u: goto L_003B47CC;
    case 41u: goto L_003B47E8;
    case 42u: goto L_003B47F0;
    case 43u: goto L_003B4830;
    case 44u: goto L_003B4848;
    case 45u: goto L_003B486C;
    case 46u: goto L_003B48A0;
    case 47u: goto L_003B48B4;
    case 48u: goto L_003B48CC;
    case 49u: goto L_003B48E8;
    case 50u: goto L_003B4930;
    case 51u: goto L_003B4958;
    case 52u: goto L_003B4980;
    case 53u: goto L_003B4988;
    case 54u: goto L_003B499C;
    case 55u: goto L_003B49B0;
    case 56u: goto L_003B49E8;
    case 57u: goto L_003B4A1C;
    case 58u: goto L_003B4A24;
    case 59u: goto L_003B4A40;
    case 60u: goto L_003B4A54;
    case 61u: goto L_003B4A6C;
    case 62u: goto L_003B4A88;
    case 63u: goto L_003B4ABC;
    case 64u: goto L_003B4AE4;
    case 65u: goto L_003B4B14;
    case 66u: goto L_003B4B1C;
    case 67u: goto L_003B4B30;
    case 68u: goto L_003B4B60;
    case 69u: goto L_003B4B94;
    case 70u: goto L_003B4B9C;
    case 71u: goto L_003B4BB8;
    case 72u: goto L_003B4BCC;
    case 73u: goto L_003B4BE4;
    case 74u: goto L_003B4C00;
    case 75u: goto L_003B4C48;
    case 76u: goto L_003B4C60;
    case 77u: goto L_003B4C70;
    case 78u: goto L_003B4C9C;
    case 79u: goto L_003B4CB8;
    case 80u: goto L_003B4CD0;
    case 81u: goto L_003B4CD8;
    case 82u: goto L_003B4CE8;
    case 83u: goto L_003B4D28;
    case 84u: goto L_003B4D50;
    case 85u: goto L_003B4D64;
    case 86u: goto L_003B4D88;
    case 87u: goto L_003B4DB0;
    case 88u: goto L_003B4DC4;
    case 89u: goto L_003B4DCC;
    case 90u: goto L_003B4E18;
    case 91u: goto L_003B4E24;
    case 92u: goto L_003B4E30;
    case 93u: goto L_003B4E48;
    case 94u: goto L_003B4E54;
    case 95u: goto L_003B4E60;
    case 96u: goto L_003B4E6C;
    case 97u: goto L_003B4E88;
    case 98u: goto L_003B4EE0;
    case 99u: goto L_003B4EFC;
    case 100u: goto L_003B4F18;
    case 101u: goto L_003B4F30;
    case 102u: goto L_003B4F70;
    case 103u: goto L_003B4FA8;
    case 104u: goto L_003B4FD0;
    case 105u: goto L_003B4FEC;
    case 106u: goto L_003B5000;
    case 107u: goto L_003B5028;
    case 108u: goto L_003B5030;
    case 109u: goto L_003B5040;
    case 110u: goto L_003B5054;
    case 111u: goto L_003B5070;
    case 112u: goto L_003B507C;
    case 113u: goto L_003B5098;
    case 114u: goto L_003B50C0;
    case 115u: goto L_003B50DC;
    case 116u: goto L_003B5100;
    case 117u: goto L_003B512C;
    case 118u: goto L_003B5140;
    case 119u: goto L_003B517C;
    case 120u: goto L_003B5190;
    case 121u: goto L_003B5198;
    case 122u: goto L_003B51A0;
    case 123u: goto L_003B51B4;
    case 124u: goto L_003B51BC;
    case 125u: goto L_003B51D4;
    case 126u: goto L_003B51F0;
    case 127u: goto L_003B521C;
    case 128u: goto L_003B5230;
    case 129u: goto L_003B526C;
    case 130u: goto L_003B5280;
    case 131u: goto L_003B529C;
    case 132u: goto L_003B52B8;
    case 133u: goto L_003B52E8;
    case 134u: goto L_003B52F4;
    case 135u: goto L_003B5320;
    case 136u: goto L_003B5338;
    case 137u: goto L_003B534C;
    case 138u: goto L_003B5360;
    case 139u: goto L_003B5380;
    case 140u: goto L_003B53A0;
    case 141u: goto L_003B53A8;
    case 142u: goto L_003B53BC;
    case 143u: goto L_003B53E0;
    case 144u: goto L_003B541C;
    case 145u: goto L_003B5444;
    case 146u: goto L_003B548C;
    case 147u: goto L_003B54D4;
    case 148u: goto L_003B54F8;
    case 149u: goto L_003B5510;
    case 150u: goto L_003B5528;
    case 151u: goto L_003B5548;
    case 152u: goto L_003B5570;
    case 153u: goto L_003B5578;
    case 154u: goto L_003B558C;
    case 155u: goto L_003B55C8;
    case 156u: goto L_003B55D8;
    case 157u: goto L_003B55E8;
    case 158u: goto L_003B5608;
    case 159u: goto L_003B5638;
    case 160u: goto L_003B5650;
    case 161u: goto L_003B5668;
    case 162u: goto L_003B5680;
    case 163u: goto L_003B5698;
    case 164u: goto L_003B5700;
    case 165u: goto L_003B5710;
    case 166u: goto L_003B572C;
    case 167u: goto L_003B5738;
    case 168u: goto L_003B577C;
    case 169u: goto L_003B57D0;
    case 170u: goto L_003B5810;
    case 171u: goto L_003B584C;
    case 172u: goto L_003B5890;
    case 173u: goto L_003B58A8;
    case 174u: goto L_003B58B8;
    case 175u: goto L_003B58F0;
    case 176u: goto L_003B5928;
    case 177u: goto L_003B5940;
    case 178u: goto L_003B5954;
    case 179u: goto L_003B5984;
    case 180u: goto L_003B598C;
    case 181u: goto L_003B5998;
    case 182u: goto L_003B59A4;
    case 183u: goto L_003B59B0;
    case 184u: goto L_003B59BC;
    case 185u: goto L_003B59C8;
    case 186u: goto L_003B59E0;
    case 187u: goto L_003B59F8;
    case 188u: goto L_003B5A10;
    case 189u: goto L_003B5A28;
    case 190u: goto L_003B5A40;
    case 191u: goto L_003B5A60;
    case 192u: goto L_003B5A80;
    case 193u: goto L_003B5B40;
    case 194u: goto L_003B5B60;
    case 195u: goto L_003B5C50;
    case 196u: goto L_003B5D10;
    case 197u: goto L_003B5DC4;
    case 198u: goto L_003B5DF8;
    case 199u: goto L_003B5E20;
    case 200u: goto L_003B5E34;
    case 201u: goto L_003B5E70;
    case 202u: goto L_003B5E8C;
    case 203u: goto L_003B5EC8;
    case 204u: goto L_003B5F2C;
    case 205u: goto L_003B5F3C;
    case 206u: goto L_003B5F4C;
    case 207u: goto L_003B5F68;
    case 208u: goto L_003B5F88;
    case 209u: goto L_003B5FC0;
    case 210u: goto L_003B6010;
    case 211u: goto L_003B601C;
    case 212u: goto L_003B6040;
    case 213u: goto L_003B607C;
    case 214u: goto L_003B6094;
    case 215u: goto L_003B60A8;
    case 216u: goto L_003B60BC;
    case 217u: goto L_003B60D4;
    case 218u: goto L_003B60F4;
    case 219u: goto L_003B61A8;
    case 220u: goto L_003B61B8;
    case 221u: goto L_003B61D0;
    case 222u: goto L_003B61E8;
    case 223u: goto L_003B6210;
    case 224u: goto L_003B6220;
    case 225u: goto L_003B6230;
    case 226u: goto L_003B6240;
    case 227u: goto L_003B6248;
    case 228u: goto L_003B6250;
    case 229u: goto L_003B6260;
    case 230u: goto L_003B6270;
    case 231u: goto L_003B6280;
    case 232u: goto L_003B6290;
    case 233u: goto L_003B62A0;
    case 234u: goto L_003B62D0;
    case 235u: goto L_003B62D8;
    case 236u: goto L_003B62E0;
    case 237u: goto L_003B62E8;
    case 238u: goto L_003B62F0;
    case 239u: goto L_003B62F8;
    case 240u: goto L_003B6300;
    case 241u: goto L_003B6308;
    case 242u: goto L_003B6310;
    case 243u: goto L_003B6318;
    case 244u: goto L_003B6320;
    case 245u: goto L_003B6328;
    case 246u: goto L_003B6338;
    case 247u: goto L_003B6348;
    case 248u: goto L_003B635C;
    case 249u: goto L_003B6364;
    case 250u: goto L_003B63A4;
    case 251u: goto L_003B63B8;
    case 252u: goto L_003B63D8;
    case 253u: goto L_003B63F4;
    case 254u: goto L_003B63FC;
    case 255u: goto L_003B6420;
    case 256u: goto L_003B6440;
    case 257u: goto L_003B6474;
    case 258u: goto L_003B647C;
    case 259u: goto L_003B6484;
    case 260u: goto L_003B648C;
    case 261u: goto L_003B6494;
    case 262u: goto L_003B64A0;
    case 263u: goto L_003B64B0;
    case 264u: goto L_003B64C0;
    case 265u: goto L_003B64C8;
    case 266u: goto L_003B64D0;
    case 267u: goto L_003B64D8;
    case 268u: goto L_003B64E0;
    case 269u: goto L_003B64E8;
    case 270u: goto L_003B64F0;
    case 271u: goto L_003B64F8;
    case 272u: goto L_003B6510;
    case 273u: goto L_003B654C;
    case 274u: goto L_003B6560;
    case 275u: goto L_003B6570;
    case 276u: goto L_003B6580;
    case 277u: goto L_003B6598;
    case 278u: goto L_003B65B0;
    case 279u: goto L_003B65B8;
    case 280u: goto L_003B65C0;
    case 281u: goto L_003B65E0;
    case 282u: goto L_003B65F0;
    case 283u: goto L_003B6628;
    case 284u: goto L_003B6640;
    case 285u: goto L_003B6668;
    case 286u: goto L_003B6680;
    case 287u: goto L_003B6698;
    case 288u: goto L_003B66A0;
    case 289u: goto L_003B66A8;
    case 290u: goto L_003B66B8;
    case 291u: goto L_003B66CC;
    case 292u: goto L_003B66E0;
    case 293u: goto L_003B66E8;
    case 294u: goto L_003B6710;
    case 295u: goto L_003B6748;
    case 296u: goto L_003B6760;
    case 297u: goto L_003B6770;
    case 298u: goto L_003B67AC;
    case 299u: goto L_003B67CC;
    case 300u: goto L_003B67E8;
    case 301u: goto L_003B6800;
    case 302u: goto L_003B6810;
    case 303u: goto L_003B6820;
    case 304u: goto L_003B6838;
    case 305u: goto L_003B6878;
    case 306u: goto L_003B6880;
    case 307u: goto L_003B688C;
    case 308u: goto L_003B68A0;
    case 309u: goto L_003B68B8;
    case 310u: goto L_003B68C0;
    case 311u: goto L_003B68C8;
    case 312u: goto L_003B68E8;
    case 313u: goto L_003B6918;
    case 314u: goto L_003B6968;
    case 315u: goto L_003B6974;
    case 316u: goto L_003B6980;
    case 317u: goto L_003B69A0;
    case 318u: goto L_003B69A8;
    case 319u: goto L_003B69C0;
    case 320u: goto L_003B69E0;
    case 321u: goto L_003B6A20;
    case 322u: goto L_003B6A4C;
    case 323u: goto L_003B6A64;
    case 324u: goto L_003B6A7C;
    case 325u: goto L_003B6AA8;
    case 326u: goto L_003B6AE0;
    case 327u: goto L_003B6AE8;
    case 328u: goto L_003B6AF8;
    case 329u: goto L_003B6B18;
    case 330u: goto L_003B6B6C;
    case 331u: goto L_003B6B78;
    case 332u: goto L_003B6B8C;
    case 333u: goto L_003B6B94;
    case 334u: goto L_003B6BBC;
    case 335u: goto L_003B6BC8;
    case 336u: goto L_003B6BD0;
    case 337u: goto L_003B6BF0;
    case 338u: goto L_003B6C18;
    case 339u: goto L_003B6C40;
    case 340u: goto L_003B6C58;
    case 341u: goto L_003B6C80;
    case 342u: goto L_003B6C88;
    case 343u: goto L_003B6CB0;
    case 344u: goto L_003B6CF8;
    case 345u: goto L_003B6D0C;
    case 346u: goto L_003B6D14;
    case 347u: goto L_003B6D48;
    case 348u: goto L_003B6DA8;
    case 349u: goto L_003B6DBC;
    case 350u: goto L_003B6DC4;
    case 351u: goto L_003B6DD4;
    case 352u: goto L_003B6DDC;
    case 353u: goto L_003B6DE4;
    case 354u: goto L_003B6DEC;
    case 355u: goto L_003B6E28;
    case 356u: goto L_003B6E88;
    case 357u: goto L_003B6EB0;
    case 358u: goto L_003B6EC8;
    case 359u: goto L_003B6F08;
    case 360u: goto L_003B6F68;
    case 361u: goto L_003B6F7C;
    case 362u: goto L_003B6F98;
    case 363u: goto L_003B6FA8;
    case 364u: goto L_003B6FBC;
    case 365u: goto L_003B6FD0;
    case 366u: goto L_003B6FD8;
    case 367u: goto L_003B7018;
    case 368u: goto L_003B7070;
    case 369u: goto L_003B7084;
    case 370u: goto L_003B70A0;
    case 371u: goto L_003B70B0;
    case 372u: goto L_003B70F0;
    case 373u: goto L_003B710C;
    case 374u: goto L_003B7130;
    case 375u: goto L_003B7140;
    case 376u: goto L_003B715C;
    case 377u: goto L_003B7180;
    case 378u: goto L_003B7190;
    case 379u: goto L_003B71A8;
    case 380u: goto L_003B71CC;
    case 381u: goto L_003B71F0;
    case 382u: goto L_003B7210;
    case 383u: goto L_003B7234;
    case 384u: goto L_003B7254;
    case 385u: goto L_003B7270;
    case 386u: goto L_003B72BC;
    case 387u: goto L_003B72D8;
    case 388u: goto L_003B72F0;
    case 389u: goto L_003B7304;
    case 390u: goto L_003B7318;
    case 391u: goto L_003B736C;
    case 392u: goto L_003B7380;
    case 393u: goto L_003B7390;
    case 394u: goto L_003B73A0;
    case 395u: goto L_003B73F4;
    case 396u: goto L_003B7408;
    case 397u: goto L_003B7418;
    case 398u: goto L_003B7428;
    case 399u: goto L_003B747C;
    case 400u: goto L_003B7490;
    case 401u: goto L_003B74A0;
    case 402u: goto L_003B74B0;
    case 403u: goto L_003B7504;
    case 404u: goto L_003B7518;
    case 405u: goto L_003B7528;
    case 406u: goto L_003B7534;
    case 407u: goto L_003B7548;
    case 408u: goto L_003B759C;
    case 409u: goto L_003B75B0;
    case 410u: goto L_003B75C0;
    case 411u: goto L_003B75CC;
    case 412u: goto L_003B75E8;
    case 413u: goto L_003B75F8;
    case 414u: goto L_003B7610;
    case 415u: goto L_003B7628;
    case 416u: goto L_003B7640;
    case 417u: goto L_003B7658;
    case 418u: goto L_003B7670;
    case 419u: goto L_003B7688;
    case 420u: goto L_003B7698;
    case 421u: goto L_003B76A0;
    case 422u: goto L_003B76A8;
    case 423u: goto L_003B76B0;
    case 424u: goto L_003B76B8;
    case 425u: goto L_003B76C8;
    case 426u: goto L_003B76D8;
    case 427u: goto L_003B76F0;
    case 428u: goto L_003B7738;
    case 429u: goto L_003B7748;
    case 430u: goto L_003B7758;
    case 431u: goto L_003B77DC;
    case 432u: goto L_003B77F0;
    case 433u: goto L_003B7800;
    case 434u: goto L_003B7808;
    case 435u: goto L_003B7810;
    case 436u: goto L_003B7818;
    case 437u: goto L_003B7828;
    case 438u: goto L_003B783C;
    case 439u: goto L_003B7868;
    case 440u: goto L_003B78B8;
    case 441u: goto L_003B78E0;
    case 442u: goto L_003B78E8;
    case 443u: goto L_003B78F0;
    case 444u: goto L_003B78F8;
    case 445u: goto L_003B7900;
    case 446u: goto L_003B7918;
    case 447u: goto L_003B7924;
    case 448u: goto L_003B7930;
    case 449u: goto L_003B7950;
    case 450u: goto L_003B79A0;
    case 451u: goto L_003B79B0;
    case 452u: goto L_003B79B8;
    case 453u: goto L_003B79C0;
    case 454u: goto L_003B7A20;
    case 455u: goto L_003B7A70;
    case 456u: goto L_003B7A80;
    case 457u: goto L_003B7A88;
    case 458u: goto L_003B7A90;
    case 459u: goto L_003B7AF0;
    case 460u: goto L_003B7B40;
    case 461u: goto L_003B7B50;
    case 462u: goto L_003B7B58;
    case 463u: goto L_003B7B60;
    case 464u: goto L_003B7BC0;
    case 465u: goto L_003B7C10;
    case 466u: goto L_003B7C20;
    case 467u: goto L_003B7C28;
    case 468u: goto L_003B7C30;
    case 469u: goto L_003B7C90;
    case 470u: goto L_003B7CE0;
    case 471u: goto L_003B7CF0;
    case 472u: goto L_003B7CF8;
    case 473u: goto L_003B7D00;
    case 474u: goto L_003B7D60;
    case 475u: goto L_003B7DB0;
    case 476u: goto L_003B7DC0;
    case 477u: goto L_003B7DC8;
    case 478u: goto L_003B7DD0;
    case 479u: goto L_003B7E30;
    case 480u: goto L_003B7E48;
    case 481u: goto L_003B7E60;
    case 482u: goto L_003B7E70;
    case 483u: goto L_003B7EE4;
    case 484u: goto L_003B7F04;
    case 485u: goto L_003B7F0C;
    case 486u: goto L_003B7F38;
    case 487u: goto L_003B7F54;
    case 488u: goto L_003B7F74;
    case 489u: goto L_003B7F98;
    case 490u: goto L_003B7FB0;
    case 491u: goto L_003B7FC8;
    case 492u: goto L_003B7FE4;
    case 493u: goto L_003B7FF8;
    default: bad_entry(c, 0x003B4000u); return;
    }
L_003B4000:
    c.budget -= 2;
    { set32(c.r[29], c.r[29].w[0] + 16u);  goto L_003B4080; }
L_003B4008:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00420000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], 0u - 64u);
    set32(c.r[8], c.r[8].w[0] + 15312u);
    set32(c.r[9], 0u + 2048u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[8].d[0] = c.r[8].d[0] & c.r[2].d[0];
    c.budget -= 10;
    { set32(c.r[29], c.r[29].w[0] + 16u);  goto L_003B40C8; }
L_003B4030:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00420000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], 0u - 64u);
    set32(c.r[8], c.r[8].w[0] + 15312u);
    set32(c.r[9], 0u + 2048u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[8].d[0] = c.r[8].d[0] & c.r[2].d[0];
    c.budget -= 10;
    { set32(c.r[29], c.r[29].w[0] + 16u);  goto L_003B4100; }
L_003B4058:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00420000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], 0u - 64u);
    set32(c.r[8], c.r[8].w[0] + 15312u);
    set32(c.r[9], 0u + 2048u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[8].d[0] = c.r[8].d[0] & c.r[2].d[0];
    c.budget -= 10;
    { set32(c.r[29], c.r[29].w[0] + 16u);  goto L_003B4148; }
L_003B4080:
    c.r[3].d[0] = c.r[6].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.r[12].d[0] = c.r[7].d[0] + 0ull;
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[10].d[0] = c.r[8].d[0] + 0ull;
    c.r[11].d[0] = c.r[9].d[0] + 0ull;
    c.r[9].d[0] = c.r[12].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    c.r[8].d[0] = c.r[3].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B40B8u); st32((c.r[29].w[0]), 0u);  if (depth < kMaxDepth) unit_00AD(c, 13u, depth + 1u); else { c.pc = 0x003B4180u; return; } if (c.pc != 0x003B40B8u) [[unlikely]] return; }
L_003B40B8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003B40C8:
    c.r[2].d[0] = c.r[7].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[10].d[0] = c.r[8].d[0] + 0ull;
    c.r[11].d[0] = c.r[9].d[0] + 0ull;
    c.r[9].d[0] = c.r[2].d[0] + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B40F0u); st32((c.r[29].w[0]), 0u);  if (depth < kMaxDepth) unit_00AD(c, 13u, depth + 1u); else { c.pc = 0x003B4180u; return; } if (c.pc != 0x003B40F0u) [[unlikely]] return; }
L_003B40F0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003B4100:
    c.r[3].d[0] = c.r[6].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.r[12].d[0] = c.r[7].d[0] + 0ull;
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    c.r[10].d[0] = c.r[8].d[0] + 0ull;
    c.r[8].d[0] = c.r[3].d[0] + 0ull;
    c.r[11].d[0] = c.r[9].d[0] + 0ull;
    c.r[9].d[0] = c.r[12].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], 0u + 1u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B413Cu); st32((c.r[29].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00AD(c, 13u, depth + 1u); else { c.pc = 0x003B4180u; return; } if (c.pc != 0x003B413Cu) [[unlikely]] return; }
L_003B413C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003B4148:
    c.r[2].d[0] = c.r[7].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[10].d[0] = c.r[8].d[0] + 0ull;
    c.r[11].d[0] = c.r[9].d[0] + 0ull;
    c.r[9].d[0] = c.r[2].d[0] + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[2], 0u + 1u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B4174u); st32((c.r[29].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00AD(c, 13u, depth + 1u); else { c.pc = 0x003B4180u; return; } if (c.pc != 0x003B4174u) [[unlikely]] return; }
L_003B4174:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003B4180:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[20].d[0]);
    c.r[20].d[0] = c.r[10].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    c.r[16].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[9].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[11].d[0] + 0ull;
    st64((c.r[29].w[0] + 40u), c.r[19].d[0]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 56u), c.r[21].d[0]);
    c.r[21].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 64u), c.r[22].d[0]);
    c.r[22].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 72u), c.r[31].d[0]);
    c.budget -= 18;
    { const bool t = c.r[20].d[0] != 0ull; st32((c.r[29].w[0]), c.r[8].w[0]);  if (t) { goto L_003B41D8; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[4].w[0] + 7128u);  if (t) { goto L_003B41E8; } }
    c.budget -= 1;
L_003B41D8:
    c.budget -= 2;
    { const bool t = c.r[18].sd[0] > 0;  if (t) { goto L_003B41F8; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[4], c.r[4].w[0] + 7176u);
    c.budget -= 2;
L_003B41E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B41F0u);  if (depth < kMaxDepth) unit_00AC(c, 204u, depth + 1u); else { c.pc = 0x003B39F0u; return; } if (c.pc != 0x003B41F0u) [[unlikely]] return; }
L_003B41F0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 3u);  if (t) { goto L_003B4354; } }
L_003B41F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B4200u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 236u, depth + 1u); else { c.pc = 0x003B3EF8u; return; } if (c.pc != 0x003B4200u) [[unlikely]] return; }
L_003B4200:
    c.budget -= 2;
    if (c.r[2].sd[0] < 0) { c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_003B4358; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[7], c.r[2].w[0] + 15156u);
    set32(c.r[3], ld32((c.r[7].w[0])));
    c.budget -= 5;
    { const bool t = c.r[3].sd[0] < 0; c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);  if (t) { goto L_003B4228; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[4].w[0] + 7216u);  if (t) { goto L_003B42C8; } }
    c.budget -= 1;
L_003B4228:
    st32((c.r[7].w[0]), c.r[19].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 284u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B4244u); st32((c.r[2].w[0] + 15148u), 0u);  if (depth < kMaxDepth) unit_0009(c, 49u, depth + 1u); else { c.pc = 0x00124ED8u; return; } if (c.pc != 0x003B4244u) [[unlikely]] return; }
L_003B4244:
    set32(c.r[3], c.r[19].w[0] << 2);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[1], c.r[1].w[0] + c.r[3].w[0]);
    st32((c.r[1].w[0] + 13824u), c.r[17].w[0]);
    c.budget -= 6;
    { const bool t = c.r[16].d[0] != 0ull; st32((c.r[17].w[0]), 0u);  if (t) { goto L_003B42A8; } }
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B4268u); c.r[5].d[0] = c.r[22].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AD(c, 68u, depth + 1u); else { c.pc = 0x003B4B60u; return; } if (c.pc != 0x003B4268u) [[unlikely]] return; }
L_003B4268:
    c.r[19].sd[0] = static_cast<std::int32_t>(0x00420000u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[19].w[0] + 15152u), c.r[2].w[0]);  if (t) { goto L_003B42C0; } }
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[5].d[0] = c.r[22].d[0] + 0ull;
    set32(c.r[6], c.r[17].w[0] + 16u);
    c.r[7].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[8], c.r[29].w[0] + 4u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B4290u); set32(c.r[9], c.r[29].w[0] + 8u);  if (depth < kMaxDepth) unit_00AD(c, 167u, depth + 1u); else { c.pc = 0x003B5738u; return; } if (c.pc != 0x003B4290u) [[unlikely]] return; }
L_003B4290:
    c.budget -= 2;
    if (c.r[2].sd[0] < 0) { c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_003B4358; }
    set32(c.r[2], ld32((c.r[29].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 276u), c.r[2].w[0]);  if (t) { goto L_003B42E8; } }
    c.budget -= 1;
L_003B42A8:
    set32(c.r[5], ld32((c.r[29].w[0])));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B42B8u); c.r[19].sd[0] = static_cast<std::int32_t>(0x00420000u);  if (depth < kMaxDepth) unit_00AD(c, 56u, depth + 1u); else { c.pc = 0x003B49E8u; return; } if (c.pc != 0x003B42B8u) [[unlikely]] return; }
L_003B42B8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[19].w[0] + 15152u), c.r[2].w[0]);  if (t) { goto L_003B42D8; } }
L_003B42C0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[4], c.r[4].w[0] + 7264u);
    c.budget -= 2;
L_003B42C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B42D0u);  if (depth < kMaxDepth) unit_00AC(c, 204u, depth + 1u); else { c.pc = 0x003B39F0u; return; } if (c.pc != 0x003B42D0u) [[unlikely]] return; }
L_003B42D0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_003B4354; } }
L_003B42D8:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[17].w[0] + 16u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B42E8u); set32(c.r[6], 0u + 256u);  if (depth < kMaxDepth) unit_000A(c, 12u, depth + 1u); else { c.pc = 0x001281F0u; return; } if (c.pc != 0x003B42E8u) [[unlikely]] return; }
L_003B42E8:
    set32(c.r[2], ld32((c.r[29].w[0] + 80u)));
    set32(c.r[3], c.r[18].w[0] + 2047u);
    st8((c.r[17].w[0] + 14u), static_cast<std::uint8_t>(0u));
    set32(c.r[19], c.r[19].w[0] + 15152u);
    st8((c.r[17].w[0] + 15u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[18].sd[0] < 0ll ? 1ull : 0ull;
    if (c.r[2].d[0] != 0) c.r[18].d[0] = c.r[3].d[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[4], ld32((c.r[29].w[0])));
    set32(c.r[7], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[18].w[0]) >> 11));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00420000u);
    c.r[5].d[0] = c.r[7].d[0] + 0ull;
    st32((c.r[17].w[0] + 272u), c.r[4].w[0]);
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[19].w[0])));
    st32((c.r[2].w[0] + 15160u), c.r[20].w[0]);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B4330u); st32((c.r[3].w[0] + 15164u), c.r[7].w[0]);  if (depth < kMaxDepth) unit_00AD(c, 114u, depth + 1u); else { c.pc = 0x003B50C0u; return; } if (c.pc != 0x003B4330u) [[unlikely]] return; }
L_003B4330:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].sd[0] >= 0) { st32((c.r[17].w[0] + 8u), 0u);  goto L_003B4350; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B4344u); set32(c.r[4], ld32((c.r[19].w[0])));  if (depth < kMaxDepth) unit_00AD(c, 77u, depth + 1u); else { c.pc = 0x003B4C70u; return; } if (c.pc != 0x003B4344u) [[unlikely]] return; }
L_003B4344:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003B4354; } }
    c.budget -= 1;
L_003B4350:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003B4354:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_003B4358:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 56u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 72u));
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003B4380:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00420000u);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    set32(c.r[16], c.r[16].w[0] + 15152u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B439Cu); set32(c.r[4], ld32((c.r[16].w[0])));  if (depth < kMaxDepth) unit_00AD(c, 77u, depth + 1u); else { c.pc = 0x003B4C70u; return; } if (c.pc != 0x003B439Cu) [[unlikely]] return; }
L_003B439C:
    st32((c.r[16].w[0]), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00420000u);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[2], 0u - 1u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00420000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00420000u);
    st32((c.r[5].w[0] + 15156u), c.r[2].w[0]);
    st32((c.r[3].w[0] + 15148u), 0u);
    st32((c.r[4].w[0] + 15164u), 0u);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003B43D0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[16], c.r[2].w[0] + 15152u);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 8;
    { const bool t = c.r[4].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);  if (t) { goto L_003B4428; } }
    set32(c.r[3], ld32((c.r[2].w[0] + 15156u)));
    c.budget -= 3;
    if (c.r[3].sd[0] < 0) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_003B442C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B4404u);  if (depth < kMaxDepth) unit_00AD(c, 161u, depth + 1u); else { c.pc = 0x003B5668u; return; } if (c.pc != 0x003B4404u) [[unlikely]] return; }
L_003B4404:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[3].d[0]) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_003B441C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B4418u); set32(c.r[4], ld32((c.r[16].w[0])));  if (depth < kMaxDepth) unit_00AD(c, 116u, depth + 1u); else { c.pc = 0x003B5100u; return; } if (c.pc != 0x003B4418u) [[unlikely]] return; }
L_003B4418:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_003B441C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 3;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003B4380u | kUnwind; return; } goto L_003B4380; }
L_003B4428:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_003B442C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003B4438:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  goto L_003B4450; }
L_003B4450:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[29], c.r[29].w[0] - 96u);
    set32(c.r[3], ld32((c.r[2].w[0] + 15156u)));
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 40u), c.r[19].d[0]);
    c.r[19].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[20].d[0]);
    c.r[20].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 80u), c.r[30].d[0]);
    c.r[30].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 56u), c.r[21].d[0]);
    st64((c.r[29].w[0] + 64u), c.r[22].d[0]);
    st64((c.r[29].w[0] + 72u), c.r[23].d[0]);
    st64((c.r[29].w[0] + 88u), c.r[31].d[0]);
    c.budget -= 19;
    { const bool t = c.r[16].d[0] == c.r[3].d[0]; st32((c.r[29].w[0]), 0u);  if (t) { goto L_003B44B0; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B44A8u); set32(c.r[4], c.r[4].w[0] + 7312u);  if (depth < kMaxDepth) unit_00AC(c, 204u, depth + 1u); else { c.pc = 0x003B39F0u; return; } if (c.pc != 0x003B44A8u) [[unlikely]] return; }
L_003B44A8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 3u);  if (t) { goto L_003B4800; } }
L_003B44B0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B44BCu); set32(c.r[4], ld32((c.r[2].w[0] + 15152u)));  if (depth < kMaxDepth) unit_00AD(c, 161u, depth + 1u); else { c.pc = 0x003B5668u; return; } if (c.pc != 0x003B44BCu) [[unlikely]] return; }
L_003B44BC:
    set32(c.r[3], 0u + 3u);
    c.r[22].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    if (c.r[22].d[0] != c.r[3].d[0]) { c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_003B4804; }
    set32(c.r[2], c.r[16].w[0] << 2);
    set32(c.r[4], 0u + 1u);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[16], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[16], ld32((c.r[16].w[0] + 13824u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 15u)));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != c.r[4].d[0]; set32(c.r[3], c.r[16].w[0] + 282u);  if (t) { goto L_003B44F8; } }
    set32(c.r[19], c.r[16].w[0] + 280u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[30], c.r[16].w[0] + 284u);  if (t) { goto L_003B4500; } }
L_003B44F8:
    set32(c.r[20], c.r[16].w[0] + 280u);
    st32((c.r[29].w[0]), c.r[3].w[0]);
    c.budget -= 2;
L_003B4500:
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[17], 0u + 1u);  if (t) { goto L_003B4688; } }
    c.r[23].sd[0] = static_cast<std::int32_t>(0x00420000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[17], c.r[23].w[0] + 15160u);
    set32(c.r[5], c.r[5].w[0] + 7368u);
    set32(c.r[4], ld32((c.r[17].w[0])));
    set32(c.r[6], 0u + 3u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B452Cu); c.r[18].d[0] = c.r[23].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 37u, depth + 1u); else { c.pc = 0x00124C88u; return; } if (c.pc != 0x003B452Cu) [[unlikely]] return; }
L_003B452C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);  if (t) { goto L_003B4540; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[4].w[0] + 7376u);  if (t) { goto L_003B47E0; } }
    c.budget -= 1;
L_003B4540:
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[8], c.r[2].w[0] + 5u);
    c.r[5].d[0] = ld8((c.r[2].w[0] + 7u));
    c.r[3].d[0] = ld8((c.r[2].w[0] + 6u));
    set32(c.r[7], c.r[2].w[0] + 4u);
    c.r[4].d[0] = ld8((c.r[8].w[0]));
    set32(c.r[5], c.r[5].w[0] << 24);
    c.r[2].d[0] = ld8((c.r[7].w[0]));
    set32(c.r[3], c.r[3].w[0] << 16);
    set32(c.r[4], c.r[4].w[0] << 8);
    c.r[2].d[0] = c.r[2].d[0] | c.r[5].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.r[6].d[0] = c.r[6].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 17;
    { const bool t = c.r[6].d[0] == 0ull; set32(c.r[17], 0u + 1u);  if (t) { goto L_003B4590; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[4].w[0] + 7432u);  if (t) { goto L_003B47E0; } }
L_003B4590:
    c.r[2].d[0] = ld8((c.r[8].w[0]));
    c.r[3].d[0] = ld8((c.r[7].w[0]));
    set32(c.r[2], c.r[2].w[0] << 8);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 15u)));
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.r[5].d[0] = ld8((c.r[16].w[0] + 15u));
    c.r[2].d[0] = c.r[3].d[0] + 0ull;
    st16((c.r[16].w[0] + 12u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 10;
    { const bool t = c.r[4].d[0] != c.r[17].d[0]; st32((c.r[16].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_003B45C8; } }
    set32(c.r[2], c.r[2].w[0] << 2);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] + 288u);  if (t) { goto L_003B45D8; } }
    c.budget -= 1;
L_003B45C8:
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + 284u);
    set32(c.r[2], c.r[2].w[0] >> 2);
    set32(c.r[2], c.r[2].w[0] << 2);
    c.budget -= 4;
L_003B45D8:
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[2], c.r[5].w[0] << 24);
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 24));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; set32(c.r[3], ld32((c.r[18].w[0] + 15160u)));  if (t) { goto L_003B4630; } }
    c.r[6].d[0] = ld8((c.r[3].w[0] + 9u));
    c.r[5].d[0] = ld8((c.r[3].w[0] + 11u));
    c.r[4].d[0] = ld8((c.r[3].w[0] + 10u));
    set32(c.r[6], c.r[6].w[0] << 8);
    c.r[2].d[0] = ld8((c.r[3].w[0] + 8u));
    set32(c.r[5], c.r[5].w[0] << 24);
    set32(c.r[4], c.r[4].w[0] << 16);
    c.r[2].d[0] = c.r[2].d[0] | c.r[5].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[6].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[4].d[0];
    set32(c.r[5], c.r[2].w[0] + 2047u);
    c.r[3].d[0] = c.r[2].sd[0] < 0ll ? 1ull : 0ull;
    if (c.r[3].d[0] != 0) c.r[2].d[0] = c.r[5].d[0];
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 11));
    c.budget -= 16;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0]), c.r[2].w[0]);  if (t) { goto L_003B466C; } }
L_003B4630:
    c.r[6].d[0] = ld8((c.r[3].w[0] + 9u));
    c.r[5].d[0] = ld8((c.r[3].w[0] + 11u));
    c.r[4].d[0] = ld8((c.r[3].w[0] + 10u));
    set32(c.r[6], c.r[6].w[0] << 8);
    c.r[2].d[0] = ld8((c.r[3].w[0] + 8u));
    set32(c.r[5], c.r[5].w[0] << 24);
    set32(c.r[4], c.r[4].w[0] << 16);
    c.r[2].d[0] = c.r[2].d[0] | c.r[5].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[6].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[4].d[0];
    set32(c.r[5], c.r[2].w[0] + 2047u);
    c.r[3].d[0] = c.r[2].sd[0] < 0ll ? 1ull : 0ull;
    if (c.r[3].d[0] != 0) c.r[2].d[0] = c.r[5].d[0];
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 11));
    st16((c.r[20].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 15;
L_003B466C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], 0u + 3u);  if (t) { goto L_003B468C; } }
    c.budget -= 1;
L_003B4678:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B4680u); set32(c.r[22], 0u + 3u);  if (depth < kMaxDepth) unit_00AD(c, 24u, depth + 1u); else { c.pc = 0x003B4380u; return; } if (c.pc != 0x003B4680u) [[unlikely]] return; }
L_003B4680:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003B4798; } }
L_003B4688:
    c.r[23].sd[0] = static_cast<std::int32_t>(0x00420000u);
    c.budget -= 1;
L_003B468C:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[2], ld32((c.r[6].w[0] + 15164u)));
    set32(c.r[20], c.r[2].w[0] << 9);
    c.r[19].d[0] = c.r[17].sd[0] < c.r[20].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[19].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);  if (t) { goto L_003B47A4; } }
    c.r[21].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[18], c.r[21].w[0] + 15148u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 15u)));
    c.budget -= 3;
L_003B46B0:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[3], ld32((c.r[23].w[0] + 15160u)));  if (t) { goto L_003B4710; } }
    set32(c.r[2], c.r[17].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[6].d[0] = ld8((c.r[2].w[0] + 1u));
    c.r[5].d[0] = ld8((c.r[2].w[0] + 3u));
    c.r[4].d[0] = ld8((c.r[2].w[0] + 2u));
    set32(c.r[6], c.r[6].w[0] << 8);
    c.r[3].d[0] = ld8((c.r[2].w[0]));
    set32(c.r[5], c.r[5].w[0] << 24);
    set32(c.r[4], c.r[4].w[0] << 16);
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[6].d[0];
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B46F0u); c.r[4].d[0] = c.r[3].d[0] | c.r[4].d[0];  if (depth < kMaxDepth) unit_00AC(c, 232u, depth + 1u); else { c.pc = 0x003B3DF0u; return; } if (c.pc != 0x003B46F0u) [[unlikely]] return; }
L_003B46F0:
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[18].w[0])));
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[30].w[0]);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0]), c.r[4].w[0]);  if (t) { goto L_003B4774; } }
L_003B4710:
    set32(c.r[2], c.r[17].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[6].d[0] = ld8((c.r[2].w[0] + 1u));
    c.r[5].d[0] = ld8((c.r[2].w[0] + 3u));
    c.r[4].d[0] = ld8((c.r[2].w[0] + 2u));
    set32(c.r[6], c.r[6].w[0] << 8);
    c.r[3].d[0] = ld8((c.r[2].w[0]));
    set32(c.r[5], c.r[5].w[0] << 24);
    set32(c.r[4], c.r[4].w[0] << 16);
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[6].d[0];
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B4744u); c.r[4].d[0] = c.r[3].d[0] | c.r[4].d[0];  if (depth < kMaxDepth) unit_00AC(c, 232u, depth + 1u); else { c.pc = 0x003B3DF0u; return; } if (c.pc != 0x003B4744u) [[unlikely]] return; }
L_003B4744:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; c.r[5].d[0] = c.r[21].d[0] + 0ull;  if (t) { goto L_003B47D8; } }
    set32(c.r[3], ld32((c.r[18].w[0])));
    set32(c.r[6], ld32((c.r[29].w[0])));
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    st16((c.r[2].w[0]), static_cast<std::uint16_t>(c.r[4].w[0]));
    st32((c.r[18].w[0]), c.r[3].w[0]);
    c.budget -= 7;
L_003B4774:
    set32(c.r[2], ld32((c.r[5].w[0] + 15148u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 8u)));
    c.r[2].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B4678u | kUnwind; return; } goto L_003B4678; } }
    set32(c.r[17], c.r[17].w[0] + 2u);
    c.r[19].d[0] = c.r[17].sd[0] < c.r[20].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[19].d[0] != 0ull) { c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 15u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003B46B0u | kUnwind; return; } goto L_003B46B0; }
L_003B4798:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] != 0ull; c.r[2].d[0] = c.r[22].d[0] + 0ull;  if (t) { goto L_003B4800; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    c.budget -= 1;
L_003B47A4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[16], c.r[2].w[0] + 15152u);
    set32(c.r[5], ld32((c.r[3].w[0] + 15164u)));
    set32(c.r[6], ld32((c.r[23].w[0] + 15160u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B47BCu); set32(c.r[4], ld32((c.r[16].w[0])));  if (depth < kMaxDepth) unit_00AD(c, 114u, depth + 1u); else { c.pc = 0x003B50C0u; return; } if (c.pc != 0x003B47BCu) [[unlikely]] return; }
L_003B47BC:
    c.budget -= 2;
    if (c.r[2].sd[0] >= 0) { set32(c.r[2], ld32((c.r[16].w[0])));  goto L_003B47F8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B47CCu); set32(c.r[22], 0u + 4u);  if (depth < kMaxDepth) unit_00AD(c, 24u, depth + 1u); else { c.pc = 0x003B4380u; return; } if (c.pc != 0x003B47CCu) [[unlikely]] return; }
L_003B47CC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[22].d[0] + 0ull;  if (t) { goto L_003B4800; } }
    c.budget -= 1;
L_003B47D8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[4], c.r[4].w[0] + 7488u);
    c.budget -= 2;
L_003B47E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B47E8u);  if (depth < kMaxDepth) unit_00AC(c, 204u, depth + 1u); else { c.pc = 0x003B39F0u; return; } if (c.pc != 0x003B47E8u) [[unlikely]] return; }
L_003B47E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B47F0u);  if (depth < kMaxDepth) unit_00AD(c, 24u, depth + 1u); else { c.pc = 0x003B4380u; return; } if (c.pc != 0x003B47F0u) [[unlikely]] return; }
L_003B47F0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 4u);  if (t) { goto L_003B4800; } }
L_003B47F8:
    c.r[22].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 1u)));
    c.r[2].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 2;
L_003B4800:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_003B4804:
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
L_003B4830:
    set32(c.r[4], c.r[4].w[0] << 2);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 13824u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[3].w[0] + 4u)));  c.pc = t; return; }
L_003B4848:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00420000u);
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[6].w[0] + 12736u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_003B4868; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[7].d[0] = c.r[3].d[0] + 0ull;  if (t) { goto L_003B4898; } }
L_003B4868:
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 1;
L_003B486C:
    set32(c.r[2], c.r[5].w[0] << 4);
    c.r[3].d[0] = c.r[5].sd[0] < 16ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);  if (t) { goto L_003B4898; } }
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[6].w[0] + 12736u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 6;
    if (c.r[4].d[0] != 0ull) { set32(c.r[5], c.r[5].w[0] + 1u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003B486Cu | kUnwind; return; } goto L_003B486C; }
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_003B4898:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[7].d[0] + 0ull;  c.pc = t; return; }
L_003B48A0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B48B4u);  if (depth < kMaxDepth) unit_00AD(c, 44u, depth + 1u); else { c.pc = 0x003B4848u; return; } if (c.pc != 0x003B48B4u) [[unlikely]] return; }
L_003B48B4:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; set32(c.r[5], 0u + 256u);  if (t) { goto L_003B491C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B48CCu);  if (depth < kMaxDepth) unit_00AF(c, 32u, depth + 1u); else { c.pc = 0x003BC520u; return; } if (c.pc != 0x003B48CCu) [[unlikely]] return; }
L_003B48CC:
    set32(c.r[3], 0u + 1u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[4].w[0] + 7560u);  if (t) { goto L_003B48F0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B48E8u);  if (depth < kMaxDepth) unit_00AC(c, 204u, depth + 1u); else { c.pc = 0x003B39F0u; return; } if (c.pc != 0x003B48E8u) [[unlikely]] return; }
L_003B48E8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003B491C; } }
L_003B48F0:
    set32(c.r[2], 0u + 512u);
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[16].w[0] + 24u), 0u);
    st32((c.r[16].w[0] + 28u), 0u);
    st32((c.r[16].w[0] + 32u), 0u);
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(0u));
    st32((c.r[16].w[0] + 8u), 0u);
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(0u));
    st32((c.r[16].w[0] + 44u), c.r[2].w[0]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 11;
L_003B491C:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003B4930:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[3].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull; c.r[2].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_003B4960; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B4958u); set32(c.r[4], c.r[4].w[0] + 7616u);  if (depth < kMaxDepth) unit_00AC(c, 204u, depth + 1u); else { c.pc = 0x003B39F0u; return; } if (c.pc != 0x003B4958u) [[unlikely]] return; }
L_003B4958:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_003B49D8; } }
L_003B4960:
    st32((c.r[16].w[0] + 56u), c.r[3].w[0]);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x000F0000u);
    st32((c.r[16].w[0] + 52u), c.r[2].w[0]);
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.r[8].d[0] = c.r[8].d[0] | 65535ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B4980u); st32((c.r[16].w[0] + 20u), 0u);  if (depth < kMaxDepth) unit_00AF(c, 40u, depth + 1u); else { c.pc = 0x003BC630u; return; } if (c.pc != 0x003B4980u) [[unlikely]] return; }
L_003B4980:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B4988u); set32(c.r[4], ld32((c.r[16].w[0] + 4u)));  if (depth < kMaxDepth) unit_00AF(c, 53u, depth + 1u); else { c.pc = 0x003BC700u; return; } if (c.pc != 0x003B4988u) [[unlikely]] return; }
L_003B4988:
    set32(c.r[3], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_003B49A8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B499Cu); set32(c.r[4], ld32((c.r[16].w[0] + 4u)));  if (depth < kMaxDepth) unit_00AF(c, 47u, depth + 1u); else { c.pc = 0x003BC6A8u; return; } if (c.pc != 0x003B499Cu) [[unlikely]] return; }
L_003B499C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_003B49D8; } }
    c.budget -= 1;
L_003B49A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B49B0u); set32(c.r[4], ld32((c.r[16].w[0] + 4u)));  if (depth < kMaxDepth) unit_00AF(c, 116u, depth + 1u); else { c.pc = 0x003BCF88u; return; } if (c.pc != 0x003B49B0u) [[unlikely]] return; }
L_003B49B0:
    st32((c.r[16].w[0] + 60u), 0u);
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].d[0] = c.r[3].sd[0] < 0ll ? 1ull : 0ull;
    set32(c.r[4], c.r[3].w[0] + 2047u);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    if (c.r[2].d[0] != 0) c.r[3].d[0] = c.r[4].d[0];
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 11));
    c.r[2].d[0] = 0ull + 0ull;
    st32((c.r[16].w[0] + 64u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 12u), c.r[3].w[0]);
    c.budget -= 10;
L_003B49D8:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003B49E8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[8], 0u - 1u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[4], 0u + 1u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B4A1Cu); c.r[7].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 233u, depth + 1u); else { c.pc = 0x003B3E18u; return; } if (c.pc != 0x003B4A1Cu) [[unlikely]] return; }
L_003B4A1C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B4A24u);  if (depth < kMaxDepth) unit_00AD(c, 46u, depth + 1u); else { c.pc = 0x003B48A0u; return; } if (c.pc != 0x003B4A24u) [[unlikely]] return; }
L_003B4A24:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { const bool t = c.r[16].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003B4A54; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B4A40u);  if (depth < kMaxDepth) unit_00AD(c, 50u, depth + 1u); else { c.pc = 0x003B4930u; return; } if (c.pc != 0x003B4A40u) [[unlikely]] return; }
L_003B4A40:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_003B4A58; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B4A54u); c.r[16].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00AD(c, 77u, depth + 1u); else { c.pc = 0x003B4C70u; return; } if (c.pc != 0x003B4A54u) [[unlikely]] return; }
L_003B4A54:
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_003B4A58:
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[4], 0u + 1u);
    set32(c.r[5], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B4A6Cu); set32(c.r[8], 0u - 1u);  if (depth < kMaxDepth) unit_00AC(c, 233u, depth + 1u); else { c.pc = 0x003B3E18u; return; } if (c.pc != 0x003B4A6Cu) [[unlikely]] return; }
L_003B4A6C:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003B4A88:
    set32(c.r[29], c.r[29].w[0] - 304u);
    st64((c.r[29].w[0] + 272u), c.r[16].d[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 280u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[7], c.r[29].w[0] + 256u);
    set32(c.r[8], c.r[29].w[0] + 260u);
    st64((c.r[29].w[0] + 288u), c.r[31].d[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B4ABCu); set32(c.r[9], c.r[29].w[0] + 264u);  if (depth < kMaxDepth) unit_00AD(c, 167u, depth + 1u); else { c.pc = 0x003B5738u; return; } if (c.pc != 0x003B4ABCu) [[unlikely]] return; }
L_003B4ABC:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003B4AD0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 3u);  if (t) { goto L_003B4B48; } }
    c.budget -= 1;
L_003B4AD0:
    set32(c.r[3], ld32((c.r[29].w[0] + 256u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 260u)));
    st32((c.r[17].w[0] + 52u), c.r[3].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B4AE4u); st32((c.r[17].w[0] + 48u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00AD(c, 172u, depth + 1u); else { c.pc = 0x003B5890u; return; } if (c.pc != 0x003B4AE4u) [[unlikely]] return; }
L_003B4AE4:
    st32((c.r[17].w[0] + 20u), 0u);
    set32(c.r[6], ld32((c.r[17].w[0] + 52u)));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[29].w[0] + 264u)));
    set32(c.r[4], ld32((c.r[29].w[0] + 260u)));
    st32((c.r[17].w[0] + 64u), c.r[3].w[0]);
    c.r[8].d[0] = c.r[3].d[0] + 0ull;
    c.r[7].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[17].w[0] + 56u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 60u), c.r[4].w[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B4B14u); set32(c.r[4], ld32((c.r[17].w[0] + 4u)));  if (depth < kMaxDepth) unit_00AF(c, 40u, depth + 1u); else { c.pc = 0x003BC630u; return; } if (c.pc != 0x003B4B14u) [[unlikely]] return; }
L_003B4B14:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B4B1Cu); set32(c.r[4], ld32((c.r[17].w[0] + 4u)));  if (depth < kMaxDepth) unit_00AF(c, 53u, depth + 1u); else { c.pc = 0x003BC700u; return; } if (c.pc != 0x003B4B1Cu) [[unlikely]] return; }
L_003B4B1C:
    set32(c.r[3], 0u + 4u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[4], ld32((c.r[29].w[0] + 264u)));  goto L_003B4B38; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B4B30u); set32(c.r[4], ld32((c.r[17].w[0] + 4u)));  if (depth < kMaxDepth) unit_00AF(c, 47u, depth + 1u); else { c.pc = 0x003BC6A8u; return; } if (c.pc != 0x003B4B30u) [[unlikely]] return; }
L_003B4B30:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_003B4B48; } }
L_003B4B38:
    c.r[2].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[4].w[0] << 11);
    st32((c.r[17].w[0] + 12u), c.r[4].w[0]);
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    c.budget -= 4;
L_003B4B48:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 272u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 280u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 288u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 304u);  c.pc = t; return; }
L_003B4B60:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[8], 0u - 1u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[4], 0u + 2u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B4B94u); c.r[7].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 233u, depth + 1u); else { c.pc = 0x003B3E18u; return; } if (c.pc != 0x003B4B94u) [[unlikely]] return; }
L_003B4B94:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B4B9Cu);  if (depth < kMaxDepth) unit_00AD(c, 46u, depth + 1u); else { c.pc = 0x003B48A0u; return; } if (c.pc != 0x003B4B9Cu) [[unlikely]] return; }
L_003B4B9C:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { const bool t = c.r[16].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003B4BCC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B4BB8u);  if (depth < kMaxDepth) unit_00AD(c, 62u, depth + 1u); else { c.pc = 0x003B4A88u; return; } if (c.pc != 0x003B4BB8u) [[unlikely]] return; }
L_003B4BB8:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_003B4BD0; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B4BCCu); c.r[16].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00AD(c, 77u, depth + 1u); else { c.pc = 0x003B4C70u; return; } if (c.pc != 0x003B4BCCu) [[unlikely]] return; }
L_003B4BCC:
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_003B4BD0:
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[4], 0u + 2u);
    set32(c.r[5], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B4BE4u); set32(c.r[8], 0u - 1u);  if (depth < kMaxDepth) unit_00AC(c, 233u, depth + 1u); else { c.pc = 0x003B3E18u; return; } if (c.pc != 0x003B4BE4u) [[unlikely]] return; }
L_003B4BE4:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003B4C00:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    set32(c.r[5], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 7;
    if (c.r[5].d[0] == 0ull) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_003B4C64; }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 2u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_003B4C64; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[4], 0u + 1u);
    set32(c.r[3], ld32((c.r[2].w[0] + 14848u)));
    c.budget -= 5;
    if (c.r[3].d[0] != c.r[4].d[0]) { set32(c.r[3], ld32((c.r[5].w[0])));  goto L_003B4C50; }
    set32(c.r[5], ld32((c.r[16].w[0] + 40u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B4C48u); set32(c.r[4], ld32((c.r[16].w[0] + 36u)));  if (depth < kMaxDepth) unit_00AC(c, 221u, depth + 1u); else { c.pc = 0x003B3C48u; return; } if (c.pc != 0x003B4C48u) [[unlikely]] return; }
L_003B4C48:
    set32(c.r[5], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[5].w[0])));
    c.budget -= 2;
L_003B4C50:
    st32((c.r[16].w[0] + 8u), 0u);
    set32(c.r[2], ld32((c.r[3].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003B4C60u); c.r[4].d[0] = c.r[5].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003B4C60u) [[unlikely]] return; }
L_003B4C60:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_003B4C64:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003B4C70:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[5].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[7], 0u - 1u);
    set32(c.r[4], 0u + 3u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B4C9Cu); set32(c.r[8], 0u - 1u);  if (depth < kMaxDepth) unit_00AC(c, 233u, depth + 1u); else { c.pc = 0x003B3E18u; return; } if (c.pc != 0x003B4C9Cu) [[unlikely]] return; }
L_003B4C9C:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; set32(c.r[3], 0u + 2u);  if (t) { goto L_003B4D10; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 1u)));
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[16], ld32((c.r[17].w[0] + 4u)));  goto L_003B4CBC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B4CB8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AD(c, 116u, depth + 1u); else { c.pc = 0x003B5100u; return; } if (c.pc != 0x003B4CB8u) [[unlikely]] return; }
L_003B4CB8:
    set32(c.r[16], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 1;
L_003B4CBC:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003B4CD8; } }
    st8((c.r[17].w[0]), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B4CD0u); st32((c.r[17].w[0] + 4u), 0u);  if (depth < kMaxDepth) unit_00AF(c, 47u, depth + 1u); else { c.pc = 0x003BC6A8u; return; } if (c.pc != 0x003B4CD0u) [[unlikely]] return; }
L_003B4CD0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B4CD8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AF(c, 35u, depth + 1u); else { c.pc = 0x003BC568u; return; } if (c.pc != 0x003B4CD8u) [[unlikely]] return; }
L_003B4CD8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B4CE8u); set32(c.r[6], 0u + 68u);  if (depth < kMaxDepth) unit_0009(c, 49u, depth + 1u); else { c.pc = 0x00124ED8u; return; } if (c.pc != 0x003B4CE8u) [[unlikely]] return; }
L_003B4CE8:
    set32(c.r[4], 0u + 3u);
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[5], 0u + 1u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[7], 0u - 1u);
    set32(c.r[8], 0u - 1u);
    c.budget -= 10;
    { set32(c.r[29], c.r[29].w[0] + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003B3E18u | kUnwind; return; } [[clang::musttail]] return unit_00AC(c, 233u, depth); }
L_003B4D10:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003B4D28:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[16], c.r[2].w[0] + 12736u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    set32(c.r[17], 0u + 15u);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    set32(c.r[18], 0u + 1u);
    c.budget -= 10;
L_003B4D50:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[18].d[0]) { set32(c.r[17], c.r[17].w[0] - 1u);  goto L_003B4D68; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B4D64u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AD(c, 77u, depth + 1u); else { c.pc = 0x003B4C70u; return; } if (c.pc != 0x003B4D64u) [[unlikely]] return; }
L_003B4D64:
    set32(c.r[17], c.r[17].w[0] - 1u);
    c.budget -= 1;
L_003B4D68:
    c.budget -= 2;
    { const bool t = c.r[17].sd[0] >= 0; set32(c.r[16], c.r[16].w[0] + 68u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B4D50u | kUnwind; return; } goto L_003B4D50; } }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003B4D88:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B4DB0u); set32(c.r[4], ld32((c.r[16].w[0] + 4u)));  if (depth < kMaxDepth) unit_00AF(c, 53u, depth + 1u); else { c.pc = 0x003BC700u; return; } if (c.pc != 0x003B4DB0u) [[unlikely]] return; }
L_003B4DB0:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_003B4DC4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B4DC4u); set32(c.r[4], ld32((c.r[16].w[0] + 4u)));  if (depth < kMaxDepth) unit_00AF(c, 67u, depth + 1u); else { c.pc = 0x003BC890u; return; } if (c.pc != 0x003B4DC4u) [[unlikely]] return; }
L_003B4DC4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B4DCCu);  if (depth < kMaxDepth) unit_00AC(c, 155u, depth + 1u); else { c.pc = 0x003B1E00u; return; } if (c.pc != 0x003B4DCCu) [[unlikely]] return; }
L_003B4DCC:
    set32(c.r[6], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[5], 0u - 1u);
    set32(c.r[3], ld32((c.r[16].w[0] + 48u)));
    set32(c.r[2], c.r[2].w[0] - c.r[6].w[0]);
    st32((c.r[16].w[0] + 32u), 0u);
    c.r[4].d[0] = c.r[17].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    if (c.r[4].d[0] != 0) c.r[2].d[0] = c.r[17].d[0];
    st32((c.r[16].w[0] + 24u), c.r[3].w[0]);
    c.budget -= 12;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[16].w[0] + 28u), c.r[2].w[0]);  if (t) { goto L_003B4E10; } }
    set32(c.r[2], 0u + 3u);
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_003B4E64; } }
    c.budget -= 1;
L_003B4E10:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B4E18u); set32(c.r[4], ld32((c.r[16].w[0] + 4u)));  if (depth < kMaxDepth) unit_00AF(c, 72u, depth + 1u); else { c.pc = 0x003BC8F0u; return; } if (c.pc != 0x003B4E18u) [[unlikely]] return; }
L_003B4E18:
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B4E24u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AF(c, 126u, depth + 1u); else { c.pc = 0x003BD068u; return; } if (c.pc != 0x003B4E24u) [[unlikely]] return; }
L_003B4E24:
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B4E30u); set32(c.r[5], ld32((c.r[16].w[0] + 44u)));  if (depth < kMaxDepth) unit_00AF(c, 114u, depth + 1u); else { c.pc = 0x003BCF70u; return; } if (c.pc != 0x003B4E30u) [[unlikely]] return; }
L_003B4E30:
    set32(c.r[3], 0u + 2u);
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B4E48u); st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_00AF(c, 117u, depth + 1u); else { c.pc = 0x003BCF90u; return; } if (c.pc != 0x003B4E48u) [[unlikely]] return; }
L_003B4E48:
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B4E54u); set32(c.r[5], ld32((c.r[16].w[0] + 20u)));  if (depth < kMaxDepth) unit_00AF(c, 54u, depth + 1u); else { c.pc = 0x003BC708u; return; } if (c.pc != 0x003B4E54u) [[unlikely]] return; }
L_003B4E54:
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B4E60u); set32(c.r[5], ld32((c.r[16].w[0] + 28u)));  if (depth < kMaxDepth) unit_00AF(c, 61u, depth + 1u); else { c.pc = 0x003BC7E0u; return; } if (c.pc != 0x003B4E60u) [[unlikely]] return; }
L_003B4E60:
    set32(c.r[16], ld32((c.r[16].w[0] + 28u)));
    c.budget -= 1;
L_003B4E64:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B4E6Cu);  if (depth < kMaxDepth) unit_00AC(c, 156u, depth + 1u); else { c.pc = 0x003B1E18u; return; } if (c.pc != 0x003B4E6Cu) [[unlikely]] return; }
L_003B4E6C:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003B4E88:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 7;
    { const bool t = c.r[16].d[0] != 0ull; c.r[3].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_003B4EB0; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[4].w[0] + 7672u);  if (t) { goto L_003B4ED8; } }
L_003B4EB0:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_003B4EC8; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[4].w[0] + 7712u);  if (t) { goto L_003B4ED8; } }
    c.budget -= 1;
L_003B4EC8:
    c.budget -= 2;
    if (c.r[3].d[0] != 0ull) { c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));  goto L_003B4EE8; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[4], c.r[4].w[0] + 7760u);
    c.budget -= 2;
L_003B4ED8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B4EE0u);  if (depth < kMaxDepth) unit_00AC(c, 204u, depth + 1u); else { c.pc = 0x003B39F0u; return; } if (c.pc != 0x003B4EE0u) [[unlikely]] return; }
L_003B4EE0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 3u);  if (t) { goto L_003B4F04; } }
L_003B4EE8:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[7].d[0] == c.r[3].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003B4F04; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B4EFCu);  if (depth < kMaxDepth) unit_00AD(c, 86u, depth + 1u); else { c.pc = 0x003B4D88u; return; } if (c.pc != 0x003B4EFCu) [[unlikely]] return; }
L_003B4EFC:
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_003B4F04:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003B4F18:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003B4E88u | kUnwind; return; } goto L_003B4E88; }
L_003B4F30:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[20].d[0]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], 0u + 4u);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[7].d[0] = c.r[20].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 40u), c.r[31].d[0]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B4F70u); c.r[8].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 233u, depth + 1u); else { c.pc = 0x003B3E18u; return; } if (c.pc != 0x003B4F70u) [[unlikely]] return; }
L_003B4F70:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);  if (t) { goto L_003B4F80; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[4].w[0] + 7800u);  if (t) { goto L_003B4FA0; } }
L_003B4F80:
    c.budget -= 2;
    { const bool t = c.r[20].sd[0] >= 0; c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);  if (t) { goto L_003B4F90; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[4].w[0] + 7840u);  if (t) { goto L_003B4FA0; } }
L_003B4F90:
    c.budget -= 2;
    if (c.r[19].d[0] != 0ull) { c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));  goto L_003B4FB0; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[4], c.r[4].w[0] + 7888u);
    c.budget -= 2;
L_003B4FA0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B4FA8u);  if (depth < kMaxDepth) unit_00AC(c, 204u, depth + 1u); else { c.pc = 0x003B39F0u; return; } if (c.pc != 0x003B4FA8u) [[unlikely]] return; }
L_003B4FA8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 3u);  if (t) { goto L_003B509C; } }
L_003B4FB0:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003B509C; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);  if (t) { goto L_003B4FD8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B4FD0u); set32(c.r[4], c.r[4].w[0] + 7928u);  if (depth < kMaxDepth) unit_00AC(c, 204u, depth + 1u); else { c.pc = 0x003B39F0u; return; } if (c.pc != 0x003B4FD0u) [[unlikely]] return; }
L_003B4FD0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_003B509C; } }
L_003B4FD8:
    set32(c.r[18], c.r[20].w[0] << 11);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B4FECu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00B4(c, 157u, depth + 1u); else { c.pc = 0x003D1450u; return; } if (c.pc != 0x003B4FECu) [[unlikely]] return; }
L_003B4FEC:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull; set32(c.r[2], 0u - 2u);  if (t) { goto L_003B509C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B5000u);  if (depth < kMaxDepth) unit_00AC(c, 155u, depth + 1u); else { c.pc = 0x003B1E00u; return; } if (c.pc != 0x003B5000u) [[unlikely]] return; }
L_003B5000:
    st32((c.r[16].w[0] + 36u), c.r[19].w[0]);
    st32((c.r[16].w[0] + 8u), c.r[17].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00420000u);
    st32((c.r[16].w[0] + 40u), c.r[18].w[0]);
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], ld32((c.r[4].w[0] + 14848u)));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_003B5028; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B5028u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 221u, depth + 1u); else { c.pc = 0x003B3C48u; return; } if (c.pc != 0x003B5028u) [[unlikely]] return; }
L_003B5028:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B5030u);  if (depth < kMaxDepth) unit_00AC(c, 156u, depth + 1u); else { c.pc = 0x003B1E18u; return; } if (c.pc != 0x003B5030u) [[unlikely]] return; }
L_003B5030:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B5040u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AD(c, 86u, depth + 1u); else { c.pc = 0x003B4D88u; return; } if (c.pc != 0x003B5040u) [[unlikely]] return; }
L_003B5040:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[17].sd[0] > 0) { st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(0u));  goto L_003B5080; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B5054u);  if (depth < kMaxDepth) unit_00AC(c, 155u, depth + 1u); else { c.pc = 0x003B1E00u; return; } if (c.pc != 0x003B5054u) [[unlikely]] return; }
L_003B5054:
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003B5074; } }
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003B5070u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003B5070u) [[unlikely]] return; }
L_003B5070:
    st32((c.r[16].w[0] + 8u), 0u);
    c.budget -= 1;
L_003B5074:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B507Cu);  if (depth < kMaxDepth) unit_00AC(c, 156u, depth + 1u); else { c.pc = 0x003B1E18u; return; } if (c.pc != 0x003B507Cu) [[unlikely]] return; }
L_003B507C:
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_003B5080:
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[7].d[0] = c.r[20].d[0] + 0ull;
    c.r[8].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[4], 0u + 4u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B5098u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00AC(c, 233u, depth + 1u); else { c.pc = 0x003B3E18u; return; } if (c.pc != 0x003B5098u) [[unlikely]] return; }
L_003B5098:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003B509C:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 40u));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003B50C0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].d[0] = c.r[6].d[0] & 63ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_003B50F0; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B50DCu); set32(c.r[4], c.r[4].w[0] + 7976u);  if (depth < kMaxDepth) unit_00AC(c, 204u, depth + 1u); else { c.pc = 0x003B39F0u; return; } if (c.pc != 0x003B50DCu) [[unlikely]] return; }
L_003B50DC:
    set32(c.r[2], 0u - 3u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003B50F0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003B4F30u | kUnwind; return; } goto L_003B4F30; }
L_003B5100:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[5].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[7], 0u - 1u);
    set32(c.r[4], 0u + 5u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B512Cu); set32(c.r[8], 0u - 1u);  if (depth < kMaxDepth) unit_00AC(c, 233u, depth + 1u); else { c.pc = 0x003B3E18u; return; } if (c.pc != 0x003B512Cu) [[unlikely]] return; }
L_003B512C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != 0ull; set32(c.r[4], c.r[4].w[0] + 8032u);  if (t) { goto L_003B5148; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B5140u);  if (depth < kMaxDepth) unit_00AC(c, 204u, depth + 1u); else { c.pc = 0x003B39F0u; return; } if (c.pc != 0x003B5140u) [[unlikely]] return; }
L_003B5140:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 3u);  if (t) { goto L_003B51D8; } }
L_003B5148:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));
    set32(c.r[17], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[17].d[0]; set32(c.r[2], 0u + 3u);  if (t) { goto L_003B51D4; } }
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[4], ld32((c.r[16].w[0] + 4u)));  goto L_003B5168; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[17].w[0]));  if (t) { goto L_003B51D4; } }
L_003B5168:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_003B5188; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B517Cu); set32(c.r[4], c.r[4].w[0] + 8072u);  if (depth < kMaxDepth) unit_00AC(c, 204u, depth + 1u); else { c.pc = 0x003B39F0u; return; } if (c.pc != 0x003B517Cu) [[unlikely]] return; }
L_003B517C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_003B51D8; } }
    c.budget -= 1;
L_003B5188:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B5190u);  if (depth < kMaxDepth) unit_00AF(c, 67u, depth + 1u); else { c.pc = 0x003BC890u; return; } if (c.pc != 0x003B5190u) [[unlikely]] return; }
L_003B5190:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B5198u);  if (depth < kMaxDepth) unit_00AC(c, 155u, depth + 1u); else { c.pc = 0x003B1E00u; return; } if (c.pc != 0x003B5198u) [[unlikely]] return; }
L_003B5198:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B51A0u); set32(c.r[4], ld32((c.r[16].w[0] + 4u)));  if (depth < kMaxDepth) unit_00AF(c, 55u, depth + 1u); else { c.pc = 0x003BC750u; return; } if (c.pc != 0x003B51A0u) [[unlikely]] return; }
L_003B51A0:
    set32(c.r[3], ld32((c.r[16].w[0] + 20u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B51B4u); st32((c.r[16].w[0] + 32u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00AD(c, 74u, depth + 1u); else { c.pc = 0x003B4C00u; return; } if (c.pc != 0x003B51B4u) [[unlikely]] return; }
L_003B51B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B51BCu); st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[17].w[0]));  if (depth < kMaxDepth) unit_00AC(c, 156u, depth + 1u); else { c.pc = 0x003B1E18u; return; } if (c.pc != 0x003B51BCu) [[unlikely]] return; }
L_003B51BC:
    set32(c.r[4], 0u + 5u);
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[7], 0u - 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B51D4u); set32(c.r[8], 0u - 1u);  if (depth < kMaxDepth) unit_00AC(c, 233u, depth + 1u); else { c.pc = 0x003B3E18u; return; } if (c.pc != 0x003B51D4u) [[unlikely]] return; }
L_003B51D4:
    set32(c.r[2], ld32((c.r[16].w[0] + 20u)));
    c.budget -= 1;
L_003B51D8:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003B51F0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[5].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[7], 0u - 1u);
    set32(c.r[4], 0u + 7u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B521Cu); set32(c.r[8], 0u - 1u);  if (depth < kMaxDepth) unit_00AC(c, 233u, depth + 1u); else { c.pc = 0x003B3E18u; return; } if (c.pc != 0x003B521Cu) [[unlikely]] return; }
L_003B521C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != 0ull; set32(c.r[4], c.r[4].w[0] + 8120u);  if (t) { goto L_003B5238; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B5230u);  if (depth < kMaxDepth) unit_00AC(c, 204u, depth + 1u); else { c.pc = 0x003B39F0u; return; } if (c.pc != 0x003B5230u) [[unlikely]] return; }
L_003B5230:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 3u);  if (t) { goto L_003B52A0; } }
L_003B5238:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));
    set32(c.r[17], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[17].d[0]; set32(c.r[2], 0u + 3u);  if (t) { goto L_003B529C; } }
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[4], ld32((c.r[16].w[0] + 4u)));  goto L_003B5258; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[17].w[0]));  if (t) { goto L_003B529C; } }
L_003B5258:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_003B5278; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B526Cu); set32(c.r[4], c.r[4].w[0] + 8160u);  if (depth < kMaxDepth) unit_00AC(c, 204u, depth + 1u); else { c.pc = 0x003B39F0u; return; } if (c.pc != 0x003B526Cu) [[unlikely]] return; }
L_003B526C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_003B52A0; } }
    c.budget -= 1;
L_003B5278:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B5280u);  if (depth < kMaxDepth) unit_00AF(c, 65u, depth + 1u); else { c.pc = 0x003BC828u; return; } if (c.pc != 0x003B5280u) [[unlikely]] return; }
L_003B5280:
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[17].w[0]));
    set32(c.r[4], 0u + 7u);
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[7], 0u - 1u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B529Cu); set32(c.r[8], 0u - 1u);  if (depth < kMaxDepth) unit_00AC(c, 233u, depth + 1u); else { c.pc = 0x003B3E18u; return; } if (c.pc != 0x003B529Cu) [[unlikely]] return; }
L_003B529C:
    set32(c.r[2], ld32((c.r[16].w[0] + 20u)));
    c.budget -= 1;
L_003B52A0:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003B52B8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u + 2u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));
    c.budget -= 10;
    if (c.r[2].d[0] != c.r[3].d[0]) { c.r[17].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3u)));  goto L_003B5324; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B52E8u); set32(c.r[4], ld32((c.r[16].w[0] + 4u)));  if (depth < kMaxDepth) unit_00AF(c, 53u, depth + 1u); else { c.pc = 0x003BC700u; return; } if (c.pc != 0x003B52E8u) [[unlikely]] return; }
L_003B52E8:
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B52F4u); st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_00AF(c, 55u, depth + 1u); else { c.pc = 0x003BC750u; return; } if (c.pc != 0x003B52F4u) [[unlikely]] return; }
L_003B52F4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[3].d[0] = ld8((c.r[16].w[0] + 1u));
    set32(c.r[5], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[3], c.r[3].w[0] - 3u);
    set32(c.r[2], c.r[2].w[0] - c.r[5].w[0]);
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    set32(c.r[5], c.r[5].w[0] + c.r[2].w[0]);
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == 0ull; st32((c.r[16].w[0] + 32u), c.r[2].w[0]);  if (t) { goto L_003B5320; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B5320u); st32((c.r[16].w[0] + 20u), c.r[5].w[0]);  if (depth < kMaxDepth) unit_00AD(c, 74u, depth + 1u); else { c.pc = 0x003B4C00u; return; } if (c.pc != 0x003B5320u) [[unlikely]] return; }
L_003B5320:
    c.r[17].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3u)));
    c.budget -= 1;
L_003B5324:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[17].d[0] != c.r[2].d[0]) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_003B536C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B5338u); set32(c.r[4], ld32((c.r[16].w[0] + 4u)));  if (depth < kMaxDepth) unit_00AF(c, 53u, depth + 1u); else { c.pc = 0x003BC700u; return; } if (c.pc != 0x003B5338u) [[unlikely]] return; }
L_003B5338:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[18].d[0] != c.r[17].d[0]) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_003B536C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B534Cu); set32(c.r[4], ld32((c.r[16].w[0] + 4u)));  if (depth < kMaxDepth) unit_00AF(c, 55u, depth + 1u); else { c.pc = 0x003BC750u; return; } if (c.pc != 0x003B534Cu) [[unlikely]] return; }
L_003B534C:
    set32(c.r[3], ld32((c.r[16].w[0] + 20u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B5360u); st32((c.r[16].w[0] + 32u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00AD(c, 74u, depth + 1u); else { c.pc = 0x003B4C00u; return; } if (c.pc != 0x003B5360u) [[unlikely]] return; }
L_003B5360:
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[18].w[0]));
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(0u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
L_003B536C:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003B5380:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    set32(c.r[17], 0u + 15u);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B53A0u); set32(c.r[18], 0u + 1u);  if (depth < kMaxDepth) unit_00AC(c, 155u, depth + 1u); else { c.pc = 0x003B1E00u; return; } if (c.pc != 0x003B53A0u) [[unlikely]] return; }
L_003B53A0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[16], c.r[2].w[0] + 12736u);
    c.budget -= 2;
L_003B53A8:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[18].d[0]) { set32(c.r[17], c.r[17].w[0] - 1u);  goto L_003B53C0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B53BCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AD(c, 132u, depth + 1u); else { c.pc = 0x003B52B8u; return; } if (c.pc != 0x003B53BCu) [[unlikely]] return; }
L_003B53BC:
    set32(c.r[17], c.r[17].w[0] - 1u);
    c.budget -= 1;
L_003B53C0:
    c.budget -= 2;
    { const bool t = c.r[17].sd[0] >= 0; set32(c.r[16], c.r[16].w[0] + 68u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B53A8u | kUnwind; return; } goto L_003B53A8; } }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003B1E18u | kUnwind; return; } [[clang::musttail]] return unit_00AC(c, 156u, depth); }
L_003B53E0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], 0u + 6u);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B541Cu); c.r[8].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 233u, depth + 1u); else { c.pc = 0x003B3E18u; return; } if (c.pc != 0x003B541Cu) [[unlikely]] return; }
L_003B541C:
    c.budget -= 2;
    if (c.r[16].d[0] != 0ull) { c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));  goto L_003B5430; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[4].w[0] + 8208u);  if (t) { goto L_003B5484; } }
L_003B5430:
    set32(c.r[19], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[19].d[0];  if (t) { goto L_003B5444; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B5444u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AD(c, 116u, depth + 1u); else { c.pc = 0x003B5100u; return; } if (c.pc != 0x003B5444u) [[unlikely]] return; }
L_003B5444:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_003B5458; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 20u), c.r[18].w[0]);  if (t) { goto L_003B5498; } }
    c.budget -= 1;
L_003B5458:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != c.r[2].d[0];  if (t) { goto L_003B5468; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[16].w[0] + 20u)));  if (t) { goto L_003B5474; } }
L_003B5468:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != c.r[19].d[0]; c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);  if (t) { goto L_003B5480; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 1;
L_003B5474:
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 20u), c.r[2].w[0]);  if (t) { goto L_003B5498; } }
L_003B5480:
    set32(c.r[4], c.r[4].w[0] + 8248u);
    c.budget -= 1;
L_003B5484:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B548Cu);  if (depth < kMaxDepth) unit_00AC(c, 204u, depth + 1u); else { c.pc = 0x003B39F0u; return; } if (c.pc != 0x003B548Cu) [[unlikely]] return; }
L_003B548C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 3u);  if (t) { goto L_003B54D8; } }
    c.budget -= 1;
L_003B5498:
    set32(c.r[2], ld32((c.r[16].w[0] + 20u)));
    c.budget -= 3;
    if (c.r[2].sd[0] >= 0) { set32(c.r[3], ld32((c.r[16].w[0] + 12u)));  goto L_003B54B0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 20u), 0u);  if (t) { goto L_003B54BC; } }
    c.budget -= 1;
L_003B54B0:
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { st32((c.r[16].w[0] + 20u), c.r[3].w[0]);  goto L_003B54BC; }
L_003B54BC:
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    c.r[8].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[4], 0u + 6u);
    set32(c.r[5], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B54D4u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 233u, depth + 1u); else { c.pc = 0x003B3E18u; return; } if (c.pc != 0x003B54D4u) [[unlikely]] return; }
L_003B54D4:
    set32(c.r[2], ld32((c.r[16].w[0] + 20u)));
    c.budget -= 1;
L_003B54D8:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003B54F8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_003B5518; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B5510u); set32(c.r[4], c.r[4].w[0] + 8288u);  if (depth < kMaxDepth) unit_00AC(c, 204u, depth + 1u); else { c.pc = 0x003B39F0u; return; } if (c.pc != 0x003B5510u) [[unlikely]] return; }
L_003B5510:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 3u);  if (t) { goto L_003B551C; } }
L_003B5518:
    set32(c.r[2], ld32((c.r[4].w[0] + 20u)));
    c.budget -= 1;
L_003B551C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003B5528:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 5;
    { const bool t = c.r[16].d[0] != 0ull; st64((c.r[29].w[0] + 8u), c.r[31].d[0]);  if (t) { goto L_003B5550; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B5548u); set32(c.r[4], c.r[4].w[0] + 8328u);  if (depth < kMaxDepth) unit_00AC(c, 204u, depth + 1u); else { c.pc = 0x003B39F0u; return; } if (c.pc != 0x003B5548u) [[unlikely]] return; }
L_003B5548:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 3u);  if (t) { goto L_003B55B4; } }
L_003B5550:
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x000F0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65534ull;
    c.r[2].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003B5584; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B5570u); set32(c.r[4], ld32((c.r[16].w[0] + 4u)));  if (depth < kMaxDepth) unit_00AF(c, 135u, depth + 1u); else { c.pc = 0x003BD130u; return; } if (c.pc != 0x003B5570u) [[unlikely]] return; }
L_003B5570:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B5578u); set32(c.r[4], ld32((c.r[16].w[0] + 4u)));  if (depth < kMaxDepth) unit_00AF(c, 53u, depth + 1u); else { c.pc = 0x003BC700u; return; } if (c.pc != 0x003B5578u) [[unlikely]] return; }
L_003B5578:
    set32(c.r[3], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[2], 0u - 5u);  if (t) { goto L_003B55B4; } }
L_003B5584:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B558Cu); set32(c.r[4], ld32((c.r[16].w[0] + 4u)));  if (depth < kMaxDepth) unit_00AF(c, 116u, depth + 1u); else { c.pc = 0x003BCF88u; return; } if (c.pc != 0x003B558Cu) [[unlikely]] return; }
L_003B558C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x000F0000u);
    c.r[3].d[0] = c.r[2].sd[0] < 0ll ? 1ull : 0ull;
    set32(c.r[5], c.r[2].w[0] + 2047u);
    if (c.r[3].d[0] != 0) c.r[2].d[0] = c.r[5].d[0];
    set32(c.r[3], 0u - 5u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 11));
    c.r[4].d[0] = c.r[4].d[0] | 65534ull;
    c.r[4].d[0] = c.r[4].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    st32((c.r[16].w[0] + 12u), c.r[2].w[0]);
    if (c.r[4].d[0] != 0) c.r[2].d[0] = c.r[3].d[0];
    c.budget -= 10;
L_003B55B4:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003B55C8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B55D8u);  if (depth < kMaxDepth) unit_00AD(c, 150u, depth + 1u); else { c.pc = 0x003B5528u; return; } if (c.pc != 0x003B55D8u) [[unlikely]] return; }
L_003B55D8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[2], c.r[2].w[0] << 11);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003B55E8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != 0ull; st64((c.r[29].w[0] + 8u), c.r[31].d[0]);  if (t) { goto L_003B5618; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B5608u); set32(c.r[4], c.r[4].w[0] + 8376u);  if (depth < kMaxDepth) unit_00AC(c, 204u, depth + 1u); else { c.pc = 0x003B39F0u; return; } if (c.pc != 0x003B5608u) [[unlikely]] return; }
L_003B5608:
    st32((c.r[16].w[0]), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 3u);  if (t) { goto L_003B5624; } }
    c.budget -= 1;
L_003B5618:
    set32(c.r[2], ld32((c.r[4].w[0] + 24u)));
    st32((c.r[16].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 28u)));
    c.budget -= 3;
L_003B5624:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003B5638:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_003B5658; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B5650u); set32(c.r[4], c.r[4].w[0] + 8424u);  if (depth < kMaxDepth) unit_00AC(c, 204u, depth + 1u); else { c.pc = 0x003B39F0u; return; } if (c.pc != 0x003B5650u) [[unlikely]] return; }
L_003B5650:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 3u);  if (t) { goto L_003B565C; } }
L_003B5658:
    set32(c.r[2], ld32((c.r[4].w[0] + 32u)));
    c.budget -= 1;
L_003B565C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003B5668:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_003B5688; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B5680u); set32(c.r[4], c.r[4].w[0] + 8472u);  if (depth < kMaxDepth) unit_00AC(c, 204u, depth + 1u); else { c.pc = 0x003B39F0u; return; } if (c.pc != 0x003B5680u) [[unlikely]] return; }
L_003B5680:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 3u);  if (t) { goto L_003B568C; } }
L_003B5688:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1u)));
    c.budget -= 1;
L_003B568C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003B5698:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[2], c.r[4].w[0] << 2);
    c.r[4].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(256ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_003B56B8; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[4].w[0] + 8512u);  if (t) { goto L_003B56F8; } }
L_003B56B8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 13824u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_003B56D8; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[4].w[0] + 8512u);  if (t) { goto L_003B56F8; } }
L_003B56D8:
    c.budget -= 2;
    if (c.r[5].sd[0] < 0) { c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);  goto L_003B56F4; }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    c.r[2].d[0] = c.r[5].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003B5704; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.budget -= 1;
L_003B56F4:
    set32(c.r[4], c.r[4].w[0] + 8552u);
    c.budget -= 1;
L_003B56F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B5700u);  if (depth < kMaxDepth) unit_00AC(c, 204u, depth + 1u); else { c.pc = 0x003B39F0u; return; } if (c.pc != 0x003B5700u) [[unlikely]] return; }
L_003B5700:
    set32(c.r[2], 0u - 3u);
    c.budget -= 1;
L_003B5704:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003B5710:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].d[0] = c.r[7].d[0] + 0ull;
    c.r[9].d[0] = c.r[8].d[0] + 0ull;
    c.r[8].d[0] = c.r[2].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B572Cu); c.r[7].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AD(c, 167u, depth + 1u); else { c.pc = 0x003B5738u; return; } if (c.pc != 0x003B572Cu) [[unlikely]] return; }
L_003B572C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003B5738:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    c.r[19].d[0] = c.r[9].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 40u), c.r[21].d[0]);
    c.r[21].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[22].d[0]);
    c.r[22].d[0] = c.r[8].d[0] + 0ull;
    st64((c.r[29].w[0] + 56u), c.r[23].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B577Cu); c.r[23].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AD(c, 163u, depth + 1u); else { c.pc = 0x003B5698u; return; } if (c.pc != 0x003B577Cu) [[unlikely]] return; }
L_003B577C:
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[20].sd[0] >= 0) { set32(c.r[2], c.r[16].w[0] << 2);  goto L_003B57A0; }
    set32(c.r[3], 0u - 1u);
    st32((c.r[21].w[0]), 0u);
    st32((c.r[22].w[0]), c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0]), c.r[3].w[0]);  if (t) { goto L_003B5864; } }
    c.budget -= 1;
L_003B57A0:
    set32(c.r[4], 0u + 1u);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[17], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[17], ld32((c.r[17].w[0] + 13824u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 15u)));
    c.budget -= 7;
    if (c.r[3].d[0] != c.r[4].d[0]) { c.r[16].d[0] = ld16((c.r[17].w[0] + 280u));  goto L_003B5800; }
    set32(c.r[16], ld32((c.r[17].w[0] + 280u)));
    c.budget -= 3;
    { const bool t = c.r[18].sd[0] <= 0; set32(c.r[5], c.r[17].w[0] + 284u);  if (t) { goto L_003B57EC; } }
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    c.r[3].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 2;
L_003B57D0:
    set32(c.r[2], ld32((c.r[4].w[0])));
    set32(c.r[4], c.r[4].w[0] + 4u);
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B57D0u | kUnwind; return; } goto L_003B57D0; } }
L_003B57EC:
    set32(c.r[2], c.r[18].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[2].w[0])));  if (t) { goto L_003B5838; } }
    c.budget -= 1;
L_003B5800:
    c.budget -= 2;
    { const bool t = c.r[18].sd[0] <= 0; set32(c.r[5], c.r[17].w[0] + 282u);  if (t) { goto L_003B582C; } }
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    c.r[3].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 2;
L_003B5810:
    c.r[2].d[0] = ld16((c.r[4].w[0]));
    set32(c.r[4], c.r[4].w[0] + 2u);
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B5810u | kUnwind; return; } goto L_003B5810; } }
L_003B582C:
    set32(c.r[2], c.r[18].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    c.r[3].d[0] = ld16((c.r[2].w[0]));
    c.budget -= 3;
L_003B5838:
    st32((c.r[19].w[0]), c.r[3].w[0]);
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    set32(c.r[5], c.r[17].w[0] + 16u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B584Cu); set32(c.r[6], 0u + 256u);  if (depth < kMaxDepth) unit_000A(c, 12u, depth + 1u); else { c.pc = 0x001281F0u; return; } if (c.pc != 0x003B584Cu) [[unlikely]] return; }
L_003B584C:
    set32(c.r[4], ld32((c.r[17].w[0] + 272u)));
    set32(c.r[3], ld32((c.r[17].w[0] + 276u)));
    c.r[2].d[0] = c.r[20].d[0] + 0ull;
    st32((c.r[21].w[0]), c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    st32((c.r[22].w[0]), c.r[3].w[0]);
    c.budget -= 6;
L_003B5864:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[23].d[0] = ld64((c.r[29].w[0] + 56u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003B5890:
    set32(c.r[4], c.r[4].w[0] << 2);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 13824u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] + 16u);  c.pc = t; return; }
L_003B58A8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[2].w[0] + 14848u), c.r[4].w[0]);  c.pc = t; return; }
L_003B58B8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[3], 0u + 2u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_003B58E0; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[4], c.r[4].w[0] + 8592u);
    c.budget -= 4;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003B39F0u | kUnwind; return; } [[clang::musttail]] return unit_00AC(c, 204u, depth); }
L_003B58E0:
    st32((c.r[4].w[0] + 44u), c.r[5].w[0]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003B58F0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_003B5918; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[4].d[0] = c.r[3].d[0] + 0ull;  if (t) { goto L_003B5918; } }
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00AF(c, 134u, depth); }
L_003B5918:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003B5928:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00B1(c, 240u, depth); }
L_003B5940:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B5954u);  if (depth < kMaxDepth) unit_00AC(c, 155u, depth + 1u); else { c.pc = 0x003B1E00u; return; } if (c.pc != 0x003B5954u) [[unlikely]] return; }
L_003B5954:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[16], c.r[2].w[0] + 23696u);
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));  if (t) { goto L_003B5978; } }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003B1E18u | kUnwind; return; } [[clang::musttail]] return unit_00AC(c, 156u, depth); }
L_003B5978:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B5984u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00AC(c, 156u, depth + 1u); else { c.pc = 0x003B1E18u; return; } if (c.pc != 0x003B5984u) [[unlikely]] return; }
L_003B5984:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B598Cu);  if (depth < kMaxDepth) unit_00AF(c, 105u, depth + 1u); else { c.pc = 0x003BCE90u; return; } if (c.pc != 0x003B598Cu) [[unlikely]] return; }
L_003B598C:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B5998u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00B1(c, 233u, depth + 1u); else { c.pc = 0x003C7250u; return; } if (c.pc != 0x003B5998u) [[unlikely]] return; }
L_003B5998:
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B59A4u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00B2(c, 140u, depth + 1u); else { c.pc = 0x003C90E0u; return; } if (c.pc != 0x003B59A4u) [[unlikely]] return; }
L_003B59A4:
    set32(c.r[2], 0u + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B59B0u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00B1(c, 233u, depth + 1u); else { c.pc = 0x003C7250u; return; } if (c.pc != 0x003B59B0u) [[unlikely]] return; }
L_003B59B0:
    set32(c.r[2], 0u + 5u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B59BCu); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00AF(c, 105u, depth + 1u); else { c.pc = 0x003BCE90u; return; } if (c.pc != 0x003B59BCu) [[unlikely]] return; }
L_003B59BC:
    set32(c.r[2], 0u + 6u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B59C8u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00AD(c, 139u, depth + 1u); else { c.pc = 0x003B5380u; return; } if (c.pc != 0x003B59C8u) [[unlikely]] return; }
L_003B59C8:
    st32((c.r[16].w[0]), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003B59E0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003B5940u | kUnwind; return; } goto L_003B5940; }
L_003B59F8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[3], c.r[3].w[0] + 23696u);
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;  c.pc = t; return; }
L_003B5A10:
    set32(c.r[5], c.r[5].w[0] << 16);
    set32(c.r[5], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[5].w[0]) >> 16));
    set32(c.r[2], c.r[5].w[0] >> 8);
    st8((c.r[4].w[0] + 1u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  c.pc = t; return; }
L_003B5A28:
    set32(c.r[5], c.r[5].w[0] << 16);
    set32(c.r[5], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[5].w[0]) >> 16));
    set32(c.r[2], c.r[5].w[0] >> 8);
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));  c.pc = t; return; }
L_003B5A40:
    set32(c.r[2], c.r[5].w[0] >> 24);
    set32(c.r[3], c.r[5].w[0] >> 16);
    set32(c.r[6], c.r[5].w[0] >> 8);
    st8((c.r[4].w[0] + 3u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[4].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 2u), static_cast<std::uint8_t>(c.r[6].w[0]));  c.pc = t; return; }
L_003B5A60:
    set32(c.r[2], c.r[5].w[0] >> 24);
    set32(c.r[3], c.r[5].w[0] >> 8);
    set32(c.r[6], c.r[5].w[0] >> 16);
    st8((c.r[4].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[4].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[4].w[0] + 2u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));  c.pc = t; return; }
L_003B5A80:
    c.r[2].d[0] = ld8((c.r[4].w[0]));
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].d[0] = ld8((c.r[4].w[0]));
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[5].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[2].d[0] = ld8((c.r[4].w[0]));
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[5].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].d[0] = ld8((c.r[4].w[0]));
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[5].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[2].d[0] = ld8((c.r[4].w[0]));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 2u));
    c.r[6].d[0] = ld8((c.r[4].w[0] + 1u));
    set32(c.r[2], c.r[2].w[0] << 24);
    c.r[7].d[0] = ld8((c.r[4].w[0] + 3u));
    set32(c.r[4], c.r[4].w[0] + 4u);
    set32(c.r[6], c.r[6].w[0] << 16);
    set32(c.r[3], c.r[3].w[0] << 8);
    c.r[3].d[0] = c.r[3].d[0] | c.r[6].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[7].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st32((c.r[5].w[0] + 4u), c.r[2].w[0]);
    c.r[3].d[0] = ld8((c.r[4].w[0]));
    c.r[2].d[0] = ld8((c.r[4].w[0] + 2u));
    c.r[6].d[0] = ld8((c.r[4].w[0] + 1u));
    set32(c.r[3], c.r[3].w[0] << 24);
    c.r[7].d[0] = ld8((c.r[4].w[0] + 3u));
    set32(c.r[4], c.r[4].w[0] + 4u);
    set32(c.r[2], c.r[2].w[0] << 8);
    set32(c.r[6], c.r[6].w[0] << 16);
    c.r[2].d[0] = c.r[2].d[0] | c.r[6].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[7].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    st32((c.r[5].w[0] + 8u), c.r[3].w[0]);
    c.r[2].d[0] = ld8((c.r[4].w[0]));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 1u));
    set32(c.r[4], c.r[4].w[0] + 2u);
    set32(c.r[2], c.r[2].w[0] << 8);
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    st16((c.r[5].w[0] + 12u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[2].d[0] = ld8((c.r[4].w[0]));
    st8((c.r[5].w[0] + 60u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 1u));
    c.budget -= 47;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[5].w[0] + 61u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_003B5B40:
    set32(c.r[4], c.r[4].w[0] + 2u);
    c.r[2].d[0] = ld8((c.r[4].w[0]));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 1u));
    set32(c.r[2], c.r[2].w[0] << 8);
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; st16((c.r[5].w[0] + 14u), static_cast<std::uint16_t>(c.r[3].w[0]));  c.pc = t; return; }
L_003B5B60:
    c.r[2].d[0] = ld8((c.r[4].w[0]));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 1u));
    set32(c.r[4], c.r[4].w[0] + 2u);
    set32(c.r[2], c.r[2].w[0] << 8);
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    st16((c.r[5].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[2].d[0] = ld8((c.r[4].w[0]));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 1u));
    set32(c.r[4], c.r[4].w[0] + 2u);
    set32(c.r[2], c.r[2].w[0] << 8);
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    st16((c.r[5].w[0] + 2u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[2].d[0] = ld8((c.r[4].w[0]));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 2u));
    c.r[6].d[0] = ld8((c.r[4].w[0] + 1u));
    set32(c.r[2], c.r[2].w[0] << 24);
    c.r[7].d[0] = ld8((c.r[4].w[0] + 3u));
    set32(c.r[4], c.r[4].w[0] + 4u);
    set32(c.r[6], c.r[6].w[0] << 16);
    set32(c.r[3], c.r[3].w[0] << 8);
    c.r[3].d[0] = c.r[3].d[0] | c.r[6].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[7].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st32((c.r[5].w[0] + 4u), c.r[2].w[0]);
    c.r[3].d[0] = ld8((c.r[4].w[0]));
    c.r[2].d[0] = ld8((c.r[4].w[0] + 2u));
    c.r[6].d[0] = ld8((c.r[4].w[0] + 1u));
    set32(c.r[3], c.r[3].w[0] << 24);
    c.r[7].d[0] = ld8((c.r[4].w[0] + 3u));
    set32(c.r[4], c.r[4].w[0] + 4u);
    set32(c.r[6], c.r[6].w[0] << 16);
    set32(c.r[2], c.r[2].w[0] << 8);
    c.r[2].d[0] = c.r[2].d[0] | c.r[6].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[7].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    st32((c.r[5].w[0] + 8u), c.r[3].w[0]);
    c.r[2].d[0] = ld8((c.r[4].w[0]));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 2u));
    c.r[6].d[0] = ld8((c.r[4].w[0] + 1u));
    set32(c.r[2], c.r[2].w[0] << 24);
    c.r[7].d[0] = ld8((c.r[4].w[0] + 3u));
    set32(c.r[4], c.r[4].w[0] + 4u);
    set32(c.r[6], c.r[6].w[0] << 16);
    set32(c.r[3], c.r[3].w[0] << 8);
    c.r[3].d[0] = c.r[3].d[0] | c.r[6].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[7].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st32((c.r[5].w[0] + 12u), c.r[2].w[0]);
    c.r[6].d[0] = ld8((c.r[4].w[0] + 1u));
    c.r[2].d[0] = ld8((c.r[4].w[0]));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 2u));
    set32(c.r[6], c.r[6].w[0] << 16);
    c.r[7].d[0] = ld8((c.r[4].w[0] + 3u));
    set32(c.r[2], c.r[2].w[0] << 24);
    set32(c.r[3], c.r[3].w[0] << 8);
    c.r[2].d[0] = c.r[2].d[0] | c.r[7].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[6].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 60;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[5].w[0] + 16u), c.r[2].w[0]);  c.pc = t; return; }
L_003B5C50:
    c.r[6].d[0] = c.r[4].d[0] + 0ull;
    c.r[2].d[0] = ld8((c.r[6].w[0]));
    c.r[3].d[0] = ld8((c.r[6].w[0] + 1u));
    set32(c.r[6], c.r[6].w[0] + 2u);
    set32(c.r[2], c.r[2].w[0] << 8);
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    set32(c.r[4], c.r[3].w[0] << 16);
    c.budget -= 9;
    { const bool t = c.r[4].sd[0] <= 0; st16((c.r[5].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_003B5C88; } }
    c.r[2].d[0] = ld8((c.r[6].w[0]));
    c.r[3].d[0] = ld8((c.r[6].w[0] + 1u));
    set32(c.r[2], c.r[2].w[0] << 8);
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    st16((c.r[5].w[0] + 2u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 5;
L_003B5C88:
    set32(c.r[6], c.r[6].w[0] + 2u);
    c.r[2].d[0] = ld8((c.r[6].w[0]));
    set32(c.r[6], c.r[6].w[0] + 1u);
    set32(c.r[3], c.r[2].w[0] << 24);
    c.budget -= 6;
    { const bool t = c.r[3].sd[0] <= 0; st8((c.r[5].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_003B5CA8; } }
    c.r[2].d[0] = ld8((c.r[6].w[0]));
    st8((c.r[5].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_003B5CA8:
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.r[2].d[0] = ld8((c.r[6].w[0]));
    set32(c.r[6], c.r[6].w[0] + 1u);
    set32(c.r[3], c.r[2].w[0] << 24);
    c.budget -= 6;
    { const bool t = c.r[3].sd[0] <= 0; st8((c.r[5].w[0] + 6u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_003B5CC8; } }
    c.r[2].d[0] = ld8((c.r[6].w[0]));
    st8((c.r[5].w[0] + 7u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_003B5CC8:
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.r[2].d[0] = ld8((c.r[6].w[0]));
    set32(c.r[6], c.r[6].w[0] + 1u);
    set32(c.r[3], c.r[2].w[0] << 24);
    c.budget -= 6;
    { const bool t = c.r[3].sd[0] <= 0; st8((c.r[5].w[0] + 8u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_003B5CE8; } }
    c.r[2].d[0] = ld8((c.r[6].w[0]));
    st8((c.r[5].w[0] + 9u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_003B5CE8:
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.r[2].d[0] = ld8((c.r[6].w[0]));
    set32(c.r[6], c.r[6].w[0] + 1u);
    set32(c.r[3], c.r[2].w[0] << 24);
    c.budget -= 6;
    { const bool t = c.r[3].sd[0] <= 0; st8((c.r[5].w[0] + 10u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_003B5D08; } }
    c.r[2].d[0] = ld8((c.r[6].w[0]));
    st8((c.r[5].w[0] + 11u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_003B5D08:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003B5D10:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[8].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    c.r[19].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[20].d[0]);
    c.budget -= 11;
    { const bool t = c.r[6].d[0] == 0ull; st64((c.r[29].w[0] + 40u), c.r[31].d[0]);  if (t) { goto L_003B5D40; } }
    st32((c.r[6].w[0]), 0u);
    c.budget -= 1;
L_003B5D40:
    c.r[3].d[0] = c.r[8].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_003B5EA4; } }
    c.r[3].d[0] = ld8((c.r[17].w[0]));
    c.r[5].d[0] = 0ull | 32768ull;
    c.r[4].d[0] = ld8((c.r[17].w[0] + 1u));
    set32(c.r[17], c.r[17].w[0] + 2u);
    set32(c.r[3], c.r[3].w[0] << 8);
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.budget -= 8;
    { const bool t = c.r[4].d[0] != c.r[5].d[0]; set32(c.r[2], 0u - 4u);  if (t) { goto L_003B5EA4; } }
    c.r[2].d[0] = ld8((c.r[17].w[0]));
    c.r[3].d[0] = ld8((c.r[17].w[0] + 1u));
    set32(c.r[17], c.r[17].w[0] + 2u);
    set32(c.r[2], c.r[2].w[0] << 8);
    c.budget -= 6;
    { const bool t = c.r[6].d[0] == 0ull; c.r[18].d[0] = c.r[2].d[0] | c.r[3].d[0];  if (t) { goto L_003B5D88; } }
    st32((c.r[6].w[0]), c.r[18].w[0]);
    c.budget -= 1;
L_003B5D88:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003B5EA4; } }
    set32(c.r[3], c.r[18].w[0] + 4u);
    c.r[3].d[0] = c.r[8].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[2], 0u - 2u);  if (t) { goto L_003B5EA4; } }
    set32(c.r[18], c.r[18].w[0] - 6u);
    c.r[3].d[0] = c.r[18].sd[0] < 16ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_003B5EA8; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[17], c.r[17].w[0] + 16u);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B5DC4u); set32(c.r[18], c.r[18].w[0] - 16u);  if (depth < kMaxDepth) unit_00AD(c, 192u, depth + 1u); else { c.pc = 0x003B5A80u; return; } if (c.pc != 0x003B5DC4u) [[unlikely]] return; }
L_003B5DC4:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 60u)));
    set32(c.r[2], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[3].d[0] = c.r[18].sd[0] < 4ll ? 1ull : 0ull;  if (t) { goto L_003B5DE0; } }
    set32(c.r[17], c.r[17].w[0] + 12u);
    set32(c.r[18], c.r[18].w[0] - 12u);
    c.r[3].d[0] = c.r[18].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 3;
L_003B5DE0:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003B5EA4; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[17], c.r[17].w[0] + 4u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B5DF8u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AD(c, 193u, depth + 1u); else { c.pc = 0x003B5B40u; return; } if (c.pc != 0x003B5DF8u) [[unlikely]] return; }
L_003B5DF8:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 14u)));
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    c.r[2].d[0] = c.r[18].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = ld16((c.r[19].w[0] + 14u));  if (t) { goto L_003B5EA0; } }
    c.budget -= 2;
    { const bool t = c.r[3].sd[0] <= 0; c.r[20].d[0] = 0ull + 0ull;  if (t) { goto L_003B5E44; } }
    set32(c.r[16], c.r[19].w[0] + 16u);
    c.budget -= 1;
L_003B5E20:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[16], c.r[16].w[0] + 20u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B5E34u); set32(c.r[20], c.r[20].w[0] + 1u);  if (depth < kMaxDepth) unit_00AD(c, 194u, depth + 1u); else { c.pc = 0x003B5B60u; return; } if (c.pc != 0x003B5E34u) [[unlikely]] return; }
L_003B5E34:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 14u)));
    c.r[2].d[0] = c.r[20].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = ld16((c.r[19].w[0] + 14u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B5E20u | kUnwind; return; } goto L_003B5E20; } }
L_003B5E44:
    set32(c.r[2], c.r[4].w[0] << 16);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 3u)));
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 16));
    c.r[20].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    c.budget -= 9;
    { const bool t = c.r[4].sd[0] <= 0; set32(c.r[18], c.r[18].w[0] - c.r[3].w[0]);  if (t) { goto L_003B5EA0; } }
    set32(c.r[16], c.r[19].w[0] + 36u);
    c.r[2].d[0] = c.r[18].sd[0] < 12ll ? 1ull : 0ull;
    c.budget -= 2;
L_003B5E70:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[18], c.r[18].w[0] - 12u);  if (t) { goto L_003B5EA0; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[17], c.r[17].w[0] + 12u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B5E8Cu); set32(c.r[16], c.r[16].w[0] + 12u);  if (depth < kMaxDepth) unit_00AD(c, 195u, depth + 1u); else { c.pc = 0x003B5C50u; return; } if (c.pc != 0x003B5E8Cu) [[unlikely]] return; }
L_003B5E8C:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 3u)));
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.r[2].d[0] = c.r[20].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = c.r[18].sd[0] < 12ll ? 1ull : 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B5E70u | kUnwind; return; } goto L_003B5E70; } }
L_003B5EA0:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003B5EA4:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_003B5EA8:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 40u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003B5EC8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00470000u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    set32(c.r[18], c.r[2].w[0] + 8640u);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    c.r[3].d[0] = ld8((c.r[16].w[0]));
    st8((c.r[17].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = ld8((c.r[16].w[0] + 1u));
    st8((c.r[17].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = ld8((c.r[16].w[0] + 2u));
    st8((c.r[17].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = ld8((c.r[16].w[0] + 3u));
    st8((c.r[17].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[17], c.r[17].w[0] + 4u);
    c.budget -= 25;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B5F2Cu); set32(c.r[5], ld32((c.r[16].w[0] + 4u)));  if (depth < kMaxDepth) unit_00AD(c, 190u, depth + 1u); else { c.pc = 0x003B5A40u; return; } if (c.pc != 0x003B5F2Cu) [[unlikely]] return; }
L_003B5F2C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B5F3Cu); set32(c.r[17], c.r[17].w[0] + 4u);  if (depth < kMaxDepth) unit_00AD(c, 190u, depth + 1u); else { c.pc = 0x003B5A40u; return; } if (c.pc != 0x003B5F3Cu) [[unlikely]] return; }
L_003B5F3C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 12u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B5F4Cu); set32(c.r[17], c.r[17].w[0] + 2u);  if (depth < kMaxDepth) unit_00AD(c, 188u, depth + 1u); else { c.pc = 0x003B5A10u; return; } if (c.pc != 0x003B5F4Cu) [[unlikely]] return; }
L_003B5F4C:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 60u));
    set32(c.r[3], 0u + 9u);
    st8((c.r[17].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = ld8((c.r[16].w[0] + 61u));
    st8((c.r[17].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 7;
L_003B5F68:
    set32(c.r[3], c.r[3].w[0] - 1u);
    st8((c.r[17].w[0]), static_cast<std::uint8_t>(0u));
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[17], c.r[17].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B5F68u | kUnwind; return; } goto L_003B5F68; } }
    set32(c.r[3], 0u + 6u);
    c.budget -= 1;
L_003B5F88:
    c.r[2].d[0] = ld8((c.r[18].w[0]));
    set32(c.r[18], c.r[18].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] - 1u);
    st8((c.r[17].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[17], c.r[17].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B5F88u | kUnwind; return; } goto L_003B5F88; } }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003B5FC0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    set32(c.r[4], c.r[16].w[0] + 2u);
    set32(c.r[5], 0u + 32u);
    c.budget -= 13;
    { const bool t = c.r[17].d[0] == 0ull; c.r[3].d[0] = c.r[2].sd[0] < 36ll ? 1ull : 0ull;  if (t) { goto L_003B5FF8; } }
    st32((c.r[17].w[0]), 0u);
    c.budget -= 1;
L_003B5FF8:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_003B6028; } }
    set32(c.r[2], 0u - 128u);
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(0u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B6010u); st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_00AD(c, 188u, depth + 1u); else { c.pc = 0x003B5A10u; return; } if (c.pc != 0x003B6010u) [[unlikely]] return; }
L_003B6010:
    set32(c.r[4], c.r[16].w[0] + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B601Cu); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AD(c, 203u, depth + 1u); else { c.pc = 0x003B5EC8u; return; } if (c.pc != 0x003B601Cu) [[unlikely]] return; }
L_003B601C:
    set32(c.r[2], 0u + 36u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
L_003B6028:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003B6040:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st64((c.r[29].w[0] + 120u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 128u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 136u), c.r[19].d[0]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 112u), c.r[16].d[0]);
    c.budget -= 10;
    { const bool t = c.r[17].d[0] == 0ull; st64((c.r[29].w[0] + 144u), c.r[31].d[0]);  if (t) { goto L_003B6070; } }
    c.budget -= 2;
    if (c.r[19].d[0] != 0ull) { c.r[4].d[0] = c.r[29].d[0] + 0ull;  goto L_003B6088; }
L_003B6070:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B607Cu); set32(c.r[4], c.r[4].w[0] + 8648u);  if (depth < kMaxDepth) unit_00AC(c, 204u, depth + 1u); else { c.pc = 0x003B39F0u; return; } if (c.pc != 0x003B607Cu) [[unlikely]] return; }
L_003B607C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0] + 112u));  if (t) { goto L_003B6190; } }
    c.budget -= 1;
L_003B6088:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B6094u); set32(c.r[6], 0u + 32u);  if (depth < kMaxDepth) unit_0009(c, 49u, depth + 1u); else { c.pc = 0x00124ED8u; return; } if (c.pc != 0x003B6094u) [[unlikely]] return; }
L_003B6094:
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[16], c.r[29].w[0] + 32u);
    set32(c.r[6], 0u + 64u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B60A8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 49u, depth + 1u); else { c.pc = 0x00124ED8u; return; } if (c.pc != 0x003B60A8u) [[unlikely]] return; }
L_003B60A8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B60BCu); set32(c.r[6], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_00AD(c, 196u, depth + 1u); else { c.pc = 0x003B5D10u; return; } if (c.pc != 0x003B60BCu) [[unlikely]] return; }
L_003B60BC:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u - 4u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);  if (t) { goto L_003B60E0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B60D4u); set32(c.r[4], c.r[4].w[0] + 8704u);  if (depth < kMaxDepth) unit_00AC(c, 204u, depth + 1u); else { c.pc = 0x003B39F0u; return; } if (c.pc != 0x003B60D4u) [[unlikely]] return; }
L_003B60D4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0] + 112u));  if (t) { goto L_003B6190; } }
    c.budget -= 1;
L_003B60E0:
    c.budget -= 2;
    if (c.r[3].sd[0] >= 0) { c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 92u)));  goto L_003B6100; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B60F4u); set32(c.r[4], c.r[4].w[0] + 8768u);  if (depth < kMaxDepth) unit_00AC(c, 204u, depth + 1u); else { c.pc = 0x003B39F0u; return; } if (c.pc != 0x003B60F4u) [[unlikely]] return; }
L_003B60F4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0] + 112u));  if (t) { goto L_003B6190; } }
    c.budget -= 1;
L_003B6100:
    set32(c.r[2], 0u + 6u);
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[2], 0u + 1u);  goto L_003B6110; }
    set32(c.r[2], 0u + 2u);
    c.budget -= 1;
L_003B6110:
    st32((c.r[29].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 36u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 35u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 34u)));
    set32(c.r[5], ld32((c.r[29].w[0] + 40u)));
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 46u)));
    set32(c.r[7], ld32((c.r[29].w[0] + 52u)));
    set32(c.r[8], ld32((c.r[29].w[0] + 60u)));
    st32((c.r[29].w[0] + 4u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 8u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 12u), c.r[4].w[0]);
    st32((c.r[29].w[0] + 16u), c.r[5].w[0]);
    st32((c.r[29].w[0] + 20u), c.r[6].w[0]);
    st32((c.r[29].w[0] + 24u), c.r[7].w[0]);
    st32((c.r[29].w[0] + 28u), c.r[8].w[0]);
    ldl(c.r[2], (c.r[29].w[0] + 7u));
    ldr(c.r[2], (c.r[29].w[0]));
    ldl(c.r[3], (c.r[29].w[0] + 15u));
    ldr(c.r[3], (c.r[29].w[0] + 8u));
    ldl(c.r[4], (c.r[29].w[0] + 23u));
    ldr(c.r[4], (c.r[29].w[0] + 16u));
    ldl(c.r[5], (c.r[29].w[0] + 31u));
    ldr(c.r[5], (c.r[29].w[0] + 24u));
    sdl(c.r[2], (c.r[19].w[0] + 7u));
    sdr(c.r[2], (c.r[19].w[0]));
    sdl(c.r[3], (c.r[19].w[0] + 15u));
    sdr(c.r[3], (c.r[19].w[0] + 8u));
    sdl(c.r[4], (c.r[19].w[0] + 23u));
    sdr(c.r[4], (c.r[19].w[0] + 16u));
    sdl(c.r[5], (c.r[19].w[0] + 31u));
    sdr(c.r[5], (c.r[19].w[0] + 24u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 112u));
    c.budget -= 32;
L_003B6190:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 120u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 128u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 136u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_003B61A8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[2].w[0] + 23740u), c.r[4].w[0]);  c.pc = t; return; }
L_003B61B8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003B39F0u | kUnwind; return; } [[clang::musttail]] return unit_00AC(c, 204u, depth); }
L_003B61D0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003B39F0u | kUnwind; return; } [[clang::musttail]] return unit_00AC(c, 204u, depth); }
L_003B61E8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00420000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], c.r[3].w[0] + 23748u);
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.budget -= 10;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00AF(c, 345u, depth); }
L_003B6210:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B6220u);  if (depth < kMaxDepth) unit_00B3(c, 280u, depth + 1u); else { c.pc = 0x003CE3A0u; return; } if (c.pc != 0x003B6220u) [[unlikely]] return; }
L_003B6220:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003B6230:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B6240u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00AD(c, 229u, depth + 1u); else { c.pc = 0x003B6260u; return; } if (c.pc != 0x003B6240u) [[unlikely]] return; }
L_003B6240:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B6248u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00AD(c, 231u, depth + 1u); else { c.pc = 0x003B6280u; return; } if (c.pc != 0x003B6248u) [[unlikely]] return; }
L_003B6248:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B6250u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00AD(c, 223u, depth + 1u); else { c.pc = 0x003B6210u; return; } if (c.pc != 0x003B6250u) [[unlikely]] return; }
L_003B6250:
    c.r[2].d[0] = 0ull + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003B6260:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B6270u);  if (depth < kMaxDepth) unit_00AF(c, 345u, depth + 1u); else { c.pc = 0x003BEDB0u; return; } if (c.pc != 0x003B6270u) [[unlikely]] return; }
L_003B6270:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003B6280:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B6290u);  if (depth < kMaxDepth) unit_00AD(c, 177u, depth + 1u); else { c.pc = 0x003B5940u; return; } if (c.pc != 0x003B6290u) [[unlikely]] return; }
L_003B6290:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003B62A0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00420000u);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] + 23704u);
    set32(c.r[3], ld32((c.r[16].w[0] + 23728u)));
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 10;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[16].w[0] + 23728u);  goto L_003B6400; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B62D0u);  if (depth < kMaxDepth) unit_00AC(c, 154u, depth + 1u); else { c.pc = 0x003B1DF0u; return; } if (c.pc != 0x003B62D0u) [[unlikely]] return; }
L_003B62D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B62D8u);  if (depth < kMaxDepth) unit_00AC(c, 155u, depth + 1u); else { c.pc = 0x003B1E00u; return; } if (c.pc != 0x003B62D8u) [[unlikely]] return; }
L_003B62D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B62E0u);  if (depth < kMaxDepth) unit_00B4(c, 194u, depth + 1u); else { c.pc = 0x003D1BC8u; return; } if (c.pc != 0x003B62E0u) [[unlikely]] return; }
L_003B62E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B62E8u);  if (depth < kMaxDepth) unit_00B4(c, 151u, depth + 1u); else { c.pc = 0x003D13A0u; return; } if (c.pc != 0x003B62E8u) [[unlikely]] return; }
L_003B62E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B62F0u);  if (depth < kMaxDepth) unit_00B4(c, 121u, depth + 1u); else { c.pc = 0x003D0E68u; return; } if (c.pc != 0x003B62F0u) [[unlikely]] return; }
L_003B62F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B62F8u);  if (depth < kMaxDepth) unit_00AC(c, 199u, depth + 1u); else { c.pc = 0x003B3958u; return; } if (c.pc != 0x003B62F8u) [[unlikely]] return; }
L_003B62F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B6300u);  if (depth < kMaxDepth) unit_00AF(c, 18u, depth + 1u); else { c.pc = 0x003BC210u; return; } if (c.pc != 0x003B6300u) [[unlikely]] return; }
L_003B6300:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B6308u);  if (depth < kMaxDepth) unit_00AE(c, 108u, depth + 1u); else { c.pc = 0x003B8A00u; return; } if (c.pc != 0x003B6308u) [[unlikely]] return; }
L_003B6308:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B6310u);  if (depth < kMaxDepth) unit_00AC(c, 222u, depth + 1u); else { c.pc = 0x003B3C68u; return; } if (c.pc != 0x003B6310u) [[unlikely]] return; }
L_003B6310:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B6318u);  if (depth < kMaxDepth) unit_00AE(c, 67u, depth + 1u); else { c.pc = 0x003B86E8u; return; } if (c.pc != 0x003B6318u) [[unlikely]] return; }
L_003B6318:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B6320u);  if (depth < kMaxDepth) unit_00B3(c, 318u, depth + 1u); else { c.pc = 0x003CE8F8u; return; } if (c.pc != 0x003B6320u) [[unlikely]] return; }
L_003B6320:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B6328u);  if (depth < kMaxDepth) unit_00B4(c, 394u, depth + 1u); else { c.pc = 0x003D3CA0u; return; } if (c.pc != 0x003B6328u) [[unlikely]] return; }
L_003B6328:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x003B0000u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B6338u); set32(c.r[4], c.r[4].w[0] + 25016u);  if (depth < kMaxDepth) unit_00AE(c, 69u, depth + 1u); else { c.pc = 0x003B8718u; return; } if (c.pc != 0x003B6338u) [[unlikely]] return; }
L_003B6338:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x003B0000u);
    set32(c.r[4], c.r[4].w[0] + 25040u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B6348u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00B3(c, 312u, depth + 1u); else { c.pc = 0x003CE830u; return; } if (c.pc != 0x003B6348u) [[unlikely]] return; }
L_003B6348:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[4], c.r[4].w[0] + 23752u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B635Cu); set32(c.r[6], 0u + 3136u);  if (depth < kMaxDepth) unit_0009(c, 49u, depth + 1u); else { c.pc = 0x00124ED8u; return; } if (c.pc != 0x003B635Cu) [[unlikely]] return; }
L_003B635C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B6364u);  if (depth < kMaxDepth) unit_00AD(c, 425u, depth + 1u); else { c.pc = 0x003B76C8u; return; } if (c.pc != 0x003B6364u) [[unlikely]] return; }
L_003B6364:
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u + 1u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x003B0000u);
    set32(c.r[4], 0u + 5u);
    set32(c.r[5], c.r[5].w[0] + 25136u);
    c.budget -= 7;
    { const bool t = c.r[7].d[0] != c.r[2].d[0]; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_003B63D0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[3], ld32((c.r[2].w[0] + 23740u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[7].d[0]; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_003B63D0; } }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x003B0000u);
    set32(c.r[4], 0u + 2u);
    set32(c.r[5], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B63A4u); set32(c.r[6], c.r[6].w[0] + 25184u);  if (depth < kMaxDepth) unit_00B4(c, 360u, depth + 1u); else { c.pc = 0x003D3800u; return; } if (c.pc != 0x003B63A4u) [[unlikely]] return; }
L_003B63A4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x003B0000u);
    set32(c.r[5], c.r[5].w[0] + 25216u);
    set32(c.r[4], 0u + 4u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B63B8u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00B4(c, 352u, depth + 1u); else { c.pc = 0x003D36B8u; return; } if (c.pc != 0x003B63B8u) [[unlikely]] return; }
L_003B63B8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00420000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x003B0000u);
    set32(c.r[4], 0u + 5u);
    set32(c.r[5], c.r[5].w[0] + 25104u);
    c.r[6].d[0] = 0ull + 0ull;
    st32((c.r[3].w[0] + 23744u), c.r[2].w[0]);
    c.budget -= 6;
L_003B63D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B63D8u);  if (depth < kMaxDepth) unit_00B4(c, 352u, depth + 1u); else { c.pc = 0x003D36B8u; return; } if (c.pc != 0x003B63D8u) [[unlikely]] return; }
L_003B63D8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00420000u);
    st32((c.r[3].w[0] + 23736u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[4], 0u + 60u);
    set32(c.r[2], c.r[2].w[0] + 23748u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B63F4u); st32((c.r[2].w[0]), 0u);  if (depth < kMaxDepth) unit_00AF(c, 323u, depth + 1u); else { c.pc = 0x003BEA50u; return; } if (c.pc != 0x003B63F4u) [[unlikely]] return; }
L_003B63F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B63FCu);  if (depth < kMaxDepth) unit_00AC(c, 156u, depth + 1u); else { c.pc = 0x003B1E18u; return; } if (c.pc != 0x003B63FCu) [[unlikely]] return; }
L_003B63FC:
    set32(c.r[3], c.r[16].w[0] + 23728u);
    c.budget -= 1;
L_003B6400:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003B6420:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    st32((c.r[2].w[0] + 23728u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003B62A0u | kUnwind; return; } goto L_003B62A0; }
L_003B6440:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00420000u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[3], c.r[3].w[0] + 23728u);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[3].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[3].w[0]), c.r[2].w[0]);  if (t) { goto L_003B6500; } }
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00440000u);
    set32(c.r[16], c.r[16].w[0] - 30868u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B6474u); st32((c.r[16].w[0]), 0u);  if (depth < kMaxDepth) unit_00AE(c, 68u, depth + 1u); else { c.pc = 0x003B8700u; return; } if (c.pc != 0x003B6474u) [[unlikely]] return; }
L_003B6474:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B647Cu);  if (depth < kMaxDepth) unit_00AC(c, 227u, depth + 1u); else { c.pc = 0x003B3D30u; return; } if (c.pc != 0x003B647Cu) [[unlikely]] return; }
L_003B647C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B6484u);  if (depth < kMaxDepth) unit_00AF(c, 21u, depth + 1u); else { c.pc = 0x003BC248u; return; } if (c.pc != 0x003B6484u) [[unlikely]] return; }
L_003B6484:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B648Cu);  if (depth < kMaxDepth) unit_00B3(c, 324u, depth + 1u); else { c.pc = 0x003CE978u; return; } if (c.pc != 0x003B648Cu) [[unlikely]] return; }
L_003B648C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B6494u);  if (depth < kMaxDepth) unit_00AC(c, 155u, depth + 1u); else { c.pc = 0x003B1E00u; return; } if (c.pc != 0x003B6494u) [[unlikely]] return; }
L_003B6494:
    set32(c.r[4], 0u + 2u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B64A0u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00B4(c, 357u, depth + 1u); else { c.pc = 0x003D3788u; return; } if (c.pc != 0x003B64A0u) [[unlikely]] return; }
L_003B64A0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[5], ld32((c.r[2].w[0] + 23744u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B64B0u); set32(c.r[4], 0u + 4u);  if (depth < kMaxDepth) unit_00B4(c, 357u, depth + 1u); else { c.pc = 0x003D3788u; return; } if (c.pc != 0x003B64B0u) [[unlikely]] return; }
L_003B64B0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[5], ld32((c.r[2].w[0] + 23736u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B64C0u); set32(c.r[4], 0u + 5u);  if (depth < kMaxDepth) unit_00B4(c, 357u, depth + 1u); else { c.pc = 0x003D3788u; return; } if (c.pc != 0x003B64C0u) [[unlikely]] return; }
L_003B64C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B64C8u);  if (depth < kMaxDepth) unit_00B4(c, 396u, depth + 1u); else { c.pc = 0x003D3CE0u; return; } if (c.pc != 0x003B64C8u) [[unlikely]] return; }
L_003B64C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B64D0u);  if (depth < kMaxDepth) unit_00AE(c, 110u, depth + 1u); else { c.pc = 0x003B8A30u; return; } if (c.pc != 0x003B64D0u) [[unlikely]] return; }
L_003B64D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B64D8u);  if (depth < kMaxDepth) unit_00AC(c, 201u, depth + 1u); else { c.pc = 0x003B3990u; return; } if (c.pc != 0x003B64D8u) [[unlikely]] return; }
L_003B64D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B64E0u);  if (depth < kMaxDepth) unit_00B4(c, 123u, depth + 1u); else { c.pc = 0x003D0EB8u; return; } if (c.pc != 0x003B64E0u) [[unlikely]] return; }
L_003B64E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B64E8u);  if (depth < kMaxDepth) unit_00B4(c, 154u, depth + 1u); else { c.pc = 0x003D1400u; return; } if (c.pc != 0x003B64E8u) [[unlikely]] return; }
L_003B64E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B64F0u);  if (depth < kMaxDepth) unit_00B4(c, 196u, depth + 1u); else { c.pc = 0x003D1C18u; return; } if (c.pc != 0x003B64F0u) [[unlikely]] return; }
L_003B64F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B64F8u);  if (depth < kMaxDepth) unit_00AC(c, 156u, depth + 1u); else { c.pc = 0x003B1E18u; return; } if (c.pc != 0x003B64F8u) [[unlikely]] return; }
L_003B64F8:
    set32(c.r[2], 0u + 1u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 2;
L_003B6500:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003B6510:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 48u), c.r[16].d[0]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00420000u);
    st64((c.r[29].w[0] + 56u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 64u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 72u), c.r[19].d[0]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 80u), c.r[20].d[0]);
    c.r[20].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 88u), c.r[21].d[0]);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B654Cu); set32(c.r[16], c.r[16].w[0] + 27912u);  if (depth < kMaxDepth) unit_00AE(c, 412u, depth + 1u); else { c.pc = 0x003BB868u; return; } if (c.pc != 0x003B654Cu) [[unlikely]] return; }
L_003B654C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00420000u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] + 26888u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B6560u); set32(c.r[5], 0u + 1024u);  if (depth < kMaxDepth) unit_00B4(c, 157u, depth + 1u); else { c.pc = 0x003D1450u; return; } if (c.pc != 0x003B6560u) [[unlikely]] return; }
L_003B6560:
    set32(c.r[5], 0u + 32u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B6570u); c.r[21].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B4(c, 124u, depth + 1u); else { c.pc = 0x003D0F08u; return; } if (c.pc != 0x003B6570u) [[unlikely]] return; }
L_003B6570:
    set32(c.r[4], c.r[16].w[0] + 32u);
    set32(c.r[5], 0u + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B6580u); st32((c.r[29].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00B4(c, 124u, depth + 1u); else { c.pc = 0x003D0F08u; return; } if (c.pc != 0x003B6580u) [[unlikely]] return; }
L_003B6580:
    set32(c.r[16], ld32((c.r[17].w[0] + 20u)));
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[4], 0u + 2u);
    c.r[6].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B6598u); st32((c.r[29].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00AE(c, 416u, depth + 1u); else { c.pc = 0x003BB8C8u; return; } if (c.pc != 0x003B6598u) [[unlikely]] return; }
L_003B6598:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.r[7].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B65B0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 459u, depth + 1u); else { c.pc = 0x003BBE28u; return; } if (c.pc != 0x003B65B0u) [[unlikely]] return; }
L_003B65B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B65B8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 428u, depth + 1u); else { c.pc = 0x003BBB08u; return; } if (c.pc != 0x003B65B8u) [[unlikely]] return; }
L_003B65B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B65C0u);  if (depth < kMaxDepth) unit_00AF(c, 13u, depth + 1u); else { c.pc = 0x003BC180u; return; } if (c.pc != 0x003B65C0u) [[unlikely]] return; }
L_003B65C0:
    set32(c.r[3], ld32((c.r[21].w[0])));
    set32(c.r[19], c.r[29].w[0] + 16u);
    set32(c.r[6], 0u + 1024u);
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] + 24u)));
    set32(c.r[5], 0u + 1u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003B65E0u); c.r[7].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003B65E0u) [[unlikely]] return; }
L_003B65E0:
    set32(c.r[6], ld32((c.r[29].w[0] + 20u)));
    c.budget -= 3;
    if (c.r[6].d[0] != 0ull) { set32(c.r[2], ld32((c.r[16].w[0])));  goto L_003B6610; }
    c.budget -= 1;
L_003B65F0:
    c.budget -= 7;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B65F0u | kUnwind; return; } goto L_003B65F0; } }
    c.budget -= 1;
L_003B6610:
    set32(c.r[18], c.r[29].w[0] + 32u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[3], ld32((c.r[2].w[0] + 24u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003B6628u); c.r[7].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003B6628u) [[unlikely]] return; }
L_003B6628:
    set32(c.r[2], ld32((c.r[29].w[0] + 36u)));
    set32(c.r[6], ld32((c.r[29].w[0] + 20u)));
    c.r[2].d[0] = c.r[2].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], ld32((c.r[29].w[0] + 32u)));  if (t) { goto L_003B6660; } }
    c.budget -= 1;
L_003B6640:
    c.budget -= 7;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B6640u | kUnwind; return; } goto L_003B6640; } }
    c.budget -= 1;
L_003B6660:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B6668u); set32(c.r[5], ld32((c.r[29].w[0] + 16u)));  if (depth < kMaxDepth) unit_0009(c, 40u, depth + 1u); else { c.pc = 0x00124D20u; return; } if (c.pc != 0x003B6668u) [[unlikely]] return; }
L_003B6668:
    set32(c.r[3], ld32((c.r[21].w[0])));
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] + 32u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003B6680u); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003B6680u) [[unlikely]] return; }
L_003B6680:
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    set32(c.r[2], ld32((c.r[3].w[0] + 32u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003B6698u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003B6698u) [[unlikely]] return; }
L_003B6698:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B66A0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 435u, depth + 1u); else { c.pc = 0x003BBC30u; return; } if (c.pc != 0x003B66A0u) [[unlikely]] return; }
L_003B66A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B66A8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 423u, depth + 1u); else { c.pc = 0x003BBA98u; return; } if (c.pc != 0x003B66A8u) [[unlikely]] return; }
L_003B66A8:
    set32(c.r[3], ld32((c.r[21].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003B66B8u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003B66B8u) [[unlikely]] return; }
L_003B66B8:
    set32(c.r[4], ld32((c.r[29].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0] + 12u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003B66CCu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003B66CCu) [[unlikely]] return; }
L_003B66CC:
    set32(c.r[4], ld32((c.r[29].w[0])));
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0] + 12u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003B66E0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003B66E0u) [[unlikely]] return; }
L_003B66E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B66E8u);  if (depth < kMaxDepth) unit_00AE(c, 414u, depth + 1u); else { c.pc = 0x003BB898u; return; } if (c.pc != 0x003B66E8u) [[unlikely]] return; }
L_003B66E8:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 56u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 72u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 88u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_003B6710:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 6;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[2], ld32((c.r[4].w[0] + 148u)));  if (t) { goto L_003B6740; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    set32(c.r[4], c.r[4].w[0] + 8880u);
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003B39F0u | kUnwind; return; } [[clang::musttail]] return unit_00AC(c, 204u, depth); }
L_003B6740:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B6748u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B3(c, 267u, depth + 1u); else { c.pc = 0x003CE070u; return; } if (c.pc != 0x003B6748u) [[unlikely]] return; }
L_003B6748:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[4], c.r[4].w[0] + 8928u);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] >= 0; c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003B6760; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B6760u);  if (depth < kMaxDepth) unit_00AC(c, 207u, depth + 1u); else { c.pc = 0x003B3A48u; return; } if (c.pc != 0x003B6760u) [[unlikely]] return; }
L_003B6760:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003B6770:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[16].d[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 40u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[18].d[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st64((c.r[29].w[0] + 56u), c.r[31].d[0]);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 12;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[18], ld32((c.r[2].w[0] + 148u)));  if (t) { goto L_003B67B8; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B67ACu); set32(c.r[4], c.r[4].w[0] + 8960u);  if (depth < kMaxDepth) unit_00AC(c, 204u, depth + 1u); else { c.pc = 0x003B39F0u; return; } if (c.pc != 0x003B67ACu) [[unlikely]] return; }
L_003B67AC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_003B6824; } }
    c.budget -= 1;
L_003B67B8:
    set32(c.r[6], ld32((c.r[2].w[0] + 176u)));
    set32(c.r[7], c.r[29].w[0] + 16u);
    set32(c.r[8], c.r[29].w[0] + 20u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B67CCu); set32(c.r[9], c.r[29].w[0] + 24u);  if (depth < kMaxDepth) unit_00AD(c, 167u, depth + 1u); else { c.pc = 0x003B5738u; return; } if (c.pc != 0x003B67CCu) [[unlikely]] return; }
L_003B67CC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[7], 0u + 16u);  if (t) { goto L_003B6808; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B67E8u);  if (depth < kMaxDepth) unit_00AD(c, 172u, depth + 1u); else { c.pc = 0x003B5890u; return; } if (c.pc != 0x003B67E8u) [[unlikely]] return; }
L_003B67E8:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[29].w[0] + 16u)));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[7], ld32((c.r[29].w[0] + 20u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B6800u); set32(c.r[8], ld32((c.r[29].w[0] + 24u)));  if (depth < kMaxDepth) unit_00B3(c, 268u, depth + 1u); else { c.pc = 0x003CE098u; return; } if (c.pc != 0x003B6800u) [[unlikely]] return; }
L_003B6800:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_003B6824; } }
L_003B6808:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B6810u);  if (depth < kMaxDepth) unit_00AC(c, 215u, depth + 1u); else { c.pc = 0x003B3BC0u; return; } if (c.pc != 0x003B6810u) [[unlikely]] return; }
L_003B6810:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[4], c.r[4].w[0] + 9008u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B6820u); c.r[5].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 207u, depth + 1u); else { c.pc = 0x003B3A48u; return; } if (c.pc != 0x003B6820u) [[unlikely]] return; }
L_003B6820:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_003B6824:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 56u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003B6838:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 7;
    { const bool t = c.r[16].d[0] != 0ull; set32(c.r[17], ld32((c.r[16].w[0] + 148u)));  if (t) { goto L_003B6870; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    set32(c.r[4], c.r[4].w[0] + 9048u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003B39F0u | kUnwind; return; } [[clang::musttail]] return unit_00AC(c, 204u, depth); }
L_003B6870:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B6878u);  if (depth < kMaxDepth) unit_00AF(c, 251u, depth + 1u); else { c.pc = 0x003BDF40u; return; } if (c.pc != 0x003B6878u) [[unlikely]] return; }
L_003B6878:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B6880u);  if (depth < kMaxDepth) unit_00AC(c, 155u, depth + 1u); else { c.pc = 0x003B1E00u; return; } if (c.pc != 0x003B6880u) [[unlikely]] return; }
L_003B6880:
    set32(c.r[5], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B688Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AF(c, 232u, depth + 1u); else { c.pc = 0x003BDD00u; return; } if (c.pc != 0x003B688Cu) [[unlikely]] return; }
L_003B688C:
    set32(c.r[4], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0] + 20u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003B68A0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003B68A0u) [[unlikely]] return; }
L_003B68A0:
    set32(c.r[3], 0u + 4u);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 62u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B68B8u); set32(c.r[5], c.r[5].w[0] << 11);  if (depth < kMaxDepth) unit_00B3(c, 302u, depth + 1u); else { c.pc = 0x003CE6B8u; return; } if (c.pc != 0x003B68B8u) [[unlikely]] return; }
L_003B68B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B68C0u);  if (depth < kMaxDepth) unit_00AC(c, 156u, depth + 1u); else { c.pc = 0x003B1E18u; return; } if (c.pc != 0x003B68C0u) [[unlikely]] return; }
L_003B68C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B68C8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B3(c, 274u, depth + 1u); else { c.pc = 0x003CE270u; return; } if (c.pc != 0x003B68C8u) [[unlikely]] return; }
L_003B68C8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    set32(c.r[5], 0u + 1u);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 32u);  [[clang::musttail]] return unit_00AF(c, 392u, depth); }
L_003B68E8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_003B6908; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[4], c.r[4].w[0] + 9096u);
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003B39F0u | kUnwind; return; } [[clang::musttail]] return unit_00AC(c, 204u, depth); }
L_003B6908:
    set32(c.r[4], ld32((c.r[4].w[0] + 148u)));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 4;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00B3(c, 308u, depth); }
L_003B6918:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.budget -= 8;
    { const bool t = c.r[17].d[0] == 0ull; st64((c.r[29].w[0] + 24u), c.r[31].d[0]);  if (t) { goto L_003B6940; } }
    c.budget -= 2;
    if (c.r[18].d[0] != 0ull) { set32(c.r[16], ld32((c.r[17].w[0] + 148u)));  goto L_003B6960; }
L_003B6940:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    set32(c.r[4], c.r[4].w[0] + 9144u);
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 8;
    { set32(c.r[29], c.r[29].w[0] + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003B39F0u | kUnwind; return; } [[clang::musttail]] return unit_00AC(c, 204u, depth); }
L_003B6960:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B6968u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B3(c, 276u, depth + 1u); else { c.pc = 0x003CE2D8u; return; } if (c.pc != 0x003B6968u) [[unlikely]] return; }
L_003B6968:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B6974u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AD(c, 294u, depth + 1u); else { c.pc = 0x003B6710u; return; } if (c.pc != 0x003B6974u) [[unlikely]] return; }
L_003B6974:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B6980u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00B3(c, 308u, depth + 1u); else { c.pc = 0x003CE7C8u; return; } if (c.pc != 0x003B6980u) [[unlikely]] return; }
L_003B6980:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003B6838u | kUnwind; return; } goto L_003B6838; }
L_003B69A0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003B69A8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_003B69D0; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B69C0u); set32(c.r[4], c.r[4].w[0] + 9192u);  if (depth < kMaxDepth) unit_00AC(c, 204u, depth + 1u); else { c.pc = 0x003B39F0u; return; } if (c.pc != 0x003B69C0u) [[unlikely]] return; }
L_003B69C0:
    set32(c.r[2], 0u - 1u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003B69D0:
    set32(c.r[4], ld32((c.r[4].w[0] + 148u)));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 4;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00B3(c, 285u, depth); }
L_003B69E0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_003B6A00; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[4], c.r[4].w[0] + 9240u);
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003B39F0u | kUnwind; return; } [[clang::musttail]] return unit_00AC(c, 204u, depth); }
L_003B6A00:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_003B6A18; } }
    set32(c.r[4], ld32((c.r[4].w[0] + 148u)));
    c.budget -= 3;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00B3(c, 273u, depth); }
L_003B6A18:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003B6A20:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    set32(c.r[18], c.r[2].w[0] + 28032u);
    set32(c.r[2], ld32((c.r[18].w[0])));
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull; st64((c.r[29].w[0] + 24u), c.r[31].d[0]);  if (t) { goto L_003B6A84; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B6A4Cu); c.r[16].sd[0] = static_cast<std::int32_t>(0x00420000u);  if (depth < kMaxDepth) unit_0002(c, 466u, depth + 1u); else { c.pc = 0x0010BB10u; return; } if (c.pc != 0x003B6A4Cu) [[unlikely]] return; }
L_003B6A4C:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[5], ld32((c.r[2].w[0] + 28000u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B6A64u); set32(c.r[16], c.r[16].w[0] + 28120u);  if (depth < kMaxDepth) unit_0002(c, 454u, depth + 1u); else { c.pc = 0x0010BAB0u; return; } if (c.pc != 0x003B6A64u) [[unlikely]] return; }
L_003B6A64:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00430000u);
    st32((c.r[3].w[0] - 6544u), c.r[2].w[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B6A7Cu); st32((c.r[5].w[0] - 6540u), c.r[17].w[0]);  if (depth < kMaxDepth) unit_00AD(c, 379u, depth + 1u); else { c.pc = 0x003B71A8u; return; } if (c.pc != 0x003B6A7Cu) [[unlikely]] return; }
L_003B6A7C:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], ld32((c.r[18].w[0])));
    c.budget -= 2;
L_003B6A84:
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    st32((c.r[18].w[0]), c.r[2].w[0]);
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003B6AA8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00420000u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    set32(c.r[17], c.r[3].w[0] + 28032u);
    set32(c.r[2], ld32((c.r[17].w[0])));
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[2], c.r[2].w[0] - 1u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_003B6AF8; } }
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[16], c.r[16].w[0] + 28120u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B6AE0u); set32(c.r[4], ld32((c.r[16].w[0])));  if (depth < kMaxDepth) unit_00AD(c, 382u, depth + 1u); else { c.pc = 0x003B7210u; return; } if (c.pc != 0x003B6AE0u) [[unlikely]] return; }
L_003B6AE0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B6AE8u); set32(c.r[3], ld32((c.r[16].w[0])));  if (depth < kMaxDepth) unit_0002(c, 466u, depth + 1u); else { c.pc = 0x0010BB10u; return; } if (c.pc != 0x003B6AE8u) [[unlikely]] return; }
L_003B6AE8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[5], ld32((c.r[3].w[0] - 6544u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B6AF8u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 454u, depth + 1u); else { c.pc = 0x0010BAB0u; return; } if (c.pc != 0x003B6AF8u) [[unlikely]] return; }
L_003B6AF8:
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.budget -= 3;
    if (c.r[2].sd[0] < 0) { st32((c.r[17].w[0]), 0u);  goto L_003B6B04; }
L_003B6B04:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003B6B18:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[20].d[0]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    c.budget -= 10;
    { const bool t = c.r[17].d[0] == 0ull; st64((c.r[29].w[0] + 40u), c.r[31].d[0]);  if (t) { goto L_003B6BD0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[5], ld32((c.r[2].w[0] + 28000u)));
    set32(c.r[2], 0u + 1u);
    set32(c.r[16], c.r[16].w[0] + 28036u);
    c.r[18].sd[0] = static_cast<std::int32_t>(0x0BEB0000u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.r[19].d[0] = c.r[16].d[0] + 0ull;
    c.r[18].d[0] = c.r[18].d[0] | 49663ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B6B6Cu); c.r[16].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0002(c, 454u, depth + 1u); else { c.pc = 0x0010BAB0u; return; } if (c.pc != 0x003B6B6Cu) [[unlikely]] return; }
L_003B6B6C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[18].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;  if (t) { goto L_003B6B7C; } }
    c.budget -= 1;
L_003B6B78:
    c.r[2].d[0] = c.r[18].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 1;
L_003B6B7C:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x0BEB0000u);  goto L_003B6BA4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B6B8Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AD(c, 375u, depth + 1u); else { c.pc = 0x003B7140u; return; } if (c.pc != 0x003B6B8Cu) [[unlikely]] return; }
L_003B6B8C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B6B94u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AD(c, 379u, depth + 1u); else { c.pc = 0x003B71A8u; return; } if (c.pc != 0x003B6B94u) [[unlikely]] return; }
L_003B6B94:
    set32(c.r[3], ld32((c.r[19].w[0])));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[16], c.r[16].w[0] + 1u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003B6B78u | kUnwind; return; } goto L_003B6B78; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x0BEB0000u);
    c.budget -= 1;
L_003B6BA4:
    c.r[2].d[0] = c.r[2].d[0] | 49664ull;
    c.budget -= 3;
    if (c.r[16].d[0] != c.r[2].d[0]) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_003B6BC0; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B6BBCu); set32(c.r[4], c.r[4].w[0] + 9336u);  if (depth < kMaxDepth) unit_00B4(c, 333u, depth + 1u); else { c.pc = 0x003D3450u; return; } if (c.pc != 0x003B6BBCu) [[unlikely]] return; }
L_003B6BBC:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003B6BC0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B6BC8u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 454u, depth + 1u); else { c.pc = 0x0010BAB0u; return; } if (c.pc != 0x003B6BC8u) [[unlikely]] return; }
L_003B6BC8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B6BD0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AD(c, 382u, depth + 1u); else { c.pc = 0x003B7210u; return; } if (c.pc != 0x003B6BD0u) [[unlikely]] return; }
L_003B6BD0:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 40u));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003B6BF0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[2], c.r[2].w[0] + 28140u);
    set32(c.r[5], ld32((c.r[3].w[0] + 28024u)));
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 10;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003B6B18u | kUnwind; return; } goto L_003B6B18; }
L_003B6C18:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[2], c.r[2].w[0] + 28144u);
    set32(c.r[5], ld32((c.r[3].w[0] + 28028u)));
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 10;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003B6B18u | kUnwind; return; } goto L_003B6B18; }
L_003B6C40:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[3], c.r[3].w[0] + 28064u);
    c.r[2].d[0] = ld64((c.r[3].w[0]));
    c.r[2].d[0] = c.r[2].d[0] + static_cast<std::uint64_t>(1ll);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; st64((c.r[3].w[0]), c.r[2].d[0]);  c.pc = t; return; }
L_003B6C58:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[2], c.r[2].w[0] + 28152u);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.r[3].d[0] = ld64((c.r[2].w[0]));
    c.budget -= 8;
    if (c.r[3].d[0] != 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);  goto L_003B6C94; }
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 2;
L_003B6C80:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B6C88u);  if (depth < kMaxDepth) unit_00AD(c, 339u, depth + 1u); else { c.pc = 0x003B6C40u; return; } if (c.pc != 0x003B6C88u) [[unlikely]] return; }
L_003B6C88:
    c.r[2].d[0] = ld64((c.r[16].w[0]));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B6C80u | kUnwind; return; } goto L_003B6C80; } }
L_003B6C94:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] + 28160u);
    st64((c.r[2].w[0]), c.r[3].d[0]);
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0010BA60u | kUnwind; return; } [[clang::musttail]] return unit_0002(c, 444u, depth); }
L_003B6CB0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[4], c.r[2].w[0] + 28168u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[3].d[0] = ld64((c.r[4].w[0]));
    c.budget -= 11;
    { const bool t = c.r[3].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);  if (t) { goto L_003B6D20; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[17], c.r[2].w[0] + 28072u);
    set32(c.r[16], c.r[3].w[0] + 28044u);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[18], 0u + 1u);
    c.budget -= 7;
L_003B6CF8:
    c.r[2].d[0] = ld64((c.r[17].w[0]));
    c.r[2].d[0] = c.r[2].d[0] + static_cast<std::uint64_t>(1ll);
    st64((c.r[17].w[0]), c.r[2].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B6D0Cu); st32((c.r[16].w[0]), c.r[18].w[0]);  if (depth < kMaxDepth) unit_00B4(c, 381u, depth + 1u); else { c.pc = 0x003D3B50u; return; } if (c.pc != 0x003B6D0Cu) [[unlikely]] return; }
L_003B6D0C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B6D14u); st32((c.r[16].w[0]), 0u);  if (depth < kMaxDepth) unit_00AD(c, 378u, depth + 1u); else { c.pc = 0x003B7190u; return; } if (c.pc != 0x003B6D14u) [[unlikely]] return; }
L_003B6D14:
    c.r[2].d[0] = ld64((c.r[19].w[0]));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B6CF8u | kUnwind; return; } goto L_003B6CF8; } }
L_003B6D20:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    set32(c.r[3], 0u + 1u);
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[2], c.r[2].w[0] + 28176u);
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    st64((c.r[2].w[0]), c.r[3].d[0]);
    c.budget -= 10;
    { set32(c.r[29], c.r[29].w[0] + 48u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0010BA60u | kUnwind; return; } [[clang::musttail]] return unit_0002(c, 444u, depth); }
L_003B6D48:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[6], c.r[2].w[0] + 28184u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 40u), c.r[21].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.r[3].d[0] = ld64((c.r[6].w[0]));
    c.budget -= 13;
    { const bool t = c.r[3].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);  if (t) { goto L_003B6DF8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00420000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00420000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[18], c.r[2].w[0] + 28080u);
    set32(c.r[21], c.r[3].w[0] + 28140u);
    set32(c.r[20], c.r[4].w[0] + 28144u);
    set32(c.r[17], c.r[5].w[0] + 28040u);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[16], 0u + 1u);
    c.budget -= 11;
L_003B6DA8:
    c.r[2].d[0] = ld64((c.r[18].w[0]));
    c.r[2].d[0] = c.r[2].d[0] + static_cast<std::uint64_t>(1ll);
    st64((c.r[18].w[0]), c.r[2].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B6DBCu); set32(c.r[4], ld32((c.r[21].w[0])));  if (depth < kMaxDepth) unit_00AD(c, 382u, depth + 1u); else { c.pc = 0x003B7210u; return; } if (c.pc != 0x003B6DBCu) [[unlikely]] return; }
L_003B6DBC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B6DC4u);  if (depth < kMaxDepth) unit_00AD(c, 412u, depth + 1u); else { c.pc = 0x003B75E8u; return; } if (c.pc != 0x003B6DC4u) [[unlikely]] return; }
L_003B6DC4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[16].d[0];  if (t) { goto L_003B6DD4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B6DD4u); set32(c.r[4], ld32((c.r[20].w[0])));  if (depth < kMaxDepth) unit_00AD(c, 382u, depth + 1u); else { c.pc = 0x003B7210u; return; } if (c.pc != 0x003B6DD4u) [[unlikely]] return; }
L_003B6DD4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B6DDCu);  if (depth < kMaxDepth) unit_00AE(c, 3u, depth + 1u); else { c.pc = 0x003B8050u; return; } if (c.pc != 0x003B6DDCu) [[unlikely]] return; }
L_003B6DDC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B6DE4u); st32((c.r[17].w[0]), c.r[16].w[0]);  if (depth < kMaxDepth) unit_00B4(c, 382u, depth + 1u); else { c.pc = 0x003D3B68u; return; } if (c.pc != 0x003B6DE4u) [[unlikely]] return; }
L_003B6DE4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B6DECu); st32((c.r[17].w[0]), 0u);  if (depth < kMaxDepth) unit_00AD(c, 378u, depth + 1u); else { c.pc = 0x003B7190u; return; } if (c.pc != 0x003B6DECu) [[unlikely]] return; }
L_003B6DEC:
    c.r[2].d[0] = ld64((c.r[19].w[0]));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B6DA8u | kUnwind; return; } goto L_003B6DA8; } }
L_003B6DF8:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    set32(c.r[3], 0u + 1u);
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[2], c.r[2].w[0] + 28192u);
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    st64((c.r[2].w[0]), c.r[3].d[0]);
    c.budget -= 12;
    { set32(c.r[29], c.r[29].w[0] + 64u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0010BA60u | kUnwind; return; } [[clang::musttail]] return unit_0002(c, 444u, depth); }
L_003B6E28:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[5], c.r[2].w[0] + 28200u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 40u), c.r[21].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.r[3].d[0] = ld64((c.r[5].w[0]));
    c.budget -= 13;
    { const bool t = c.r[3].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);  if (t) { goto L_003B6ED4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00420000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00420000u);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x12000000u);
    set32(c.r[19], c.r[2].w[0] + 28088u);
    set32(c.r[18], c.r[3].w[0] + 28048u);
    set32(c.r[16], c.r[4].w[0] + 28260u);
    c.r[21].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[20], 0u + 1u);
    c.r[17].d[0] = c.r[17].d[0] | 224ull;
    c.budget -= 11;
L_003B6E88:
    c.r[2].d[0] = ld64((c.r[19].w[0]));
    c.r[3].d[0] = ld16((c.r[16].w[0]));
    c.r[2].d[0] = c.r[2].d[0] + static_cast<std::uint64_t>(1ll);
    st64((c.r[19].w[0]), c.r[2].d[0]);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; st32((c.r[18].w[0]), c.r[20].w[0]);  if (t) { goto L_003B6EA8; } }
    c.r[2].d[0] = ld16((c.r[16].w[0]));
    st64((c.r[17].w[0]), c.r[2].d[0]);
    c.budget -= 2;
L_003B6EA8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B6EB0u);  if (depth < kMaxDepth) unit_00B4(c, 384u, depth + 1u); else { c.pc = 0x003D3B98u; return; } if (c.pc != 0x003B6EB0u) [[unlikely]] return; }
L_003B6EB0:
    c.r[3].d[0] = ld16((c.r[16].w[0]));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { st64((c.r[17].w[0]), 0ull);  goto L_003B6EBC; }
L_003B6EBC:
    st32((c.r[18].w[0]), 0u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B6EC8u);  if (depth < kMaxDepth) unit_00AD(c, 378u, depth + 1u); else { c.pc = 0x003B7190u; return; } if (c.pc != 0x003B6EC8u) [[unlikely]] return; }
L_003B6EC8:
    c.r[2].d[0] = ld64((c.r[21].w[0]));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B6E88u | kUnwind; return; } goto L_003B6E88; } }
L_003B6ED4:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    set32(c.r[3], 0u + 1u);
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[2], c.r[2].w[0] + 28208u);
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    st64((c.r[2].w[0]), c.r[3].d[0]);
    c.budget -= 12;
    { set32(c.r[29], c.r[29].w[0] + 64u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0010BA60u | kUnwind; return; } [[clang::musttail]] return unit_0002(c, 444u, depth); }
L_003B6F08:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[5], c.r[2].w[0] + 28216u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 40u), c.r[21].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[22].d[0]);
    st64((c.r[29].w[0] + 56u), c.r[31].d[0]);
    c.r[3].d[0] = ld64((c.r[5].w[0]));
    c.budget -= 14;
    { const bool t = c.r[3].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);  if (t) { goto L_003B6FE4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00420000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[20], c.r[2].w[0] + 28096u);
    set32(c.r[19], c.r[3].w[0] + 28052u);
    set32(c.r[18], c.r[4].w[0] + 28036u);
    c.r[22].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[17], 0u + 1u);
    c.r[21].sd[0] = static_cast<std::int32_t>(0x00420000u);
    c.budget -= 10;
L_003B6F68:
    c.r[2].d[0] = ld64((c.r[20].w[0]));
    c.r[2].d[0] = c.r[2].d[0] + static_cast<std::uint64_t>(1ll);
    st64((c.r[20].w[0]), c.r[2].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B6F7Cu); st32((c.r[19].w[0]), c.r[17].w[0]);  if (depth < kMaxDepth) unit_00B4(c, 386u, depth + 1u); else { c.pc = 0x003D3BC8u; return; } if (c.pc != 0x003B6F7Cu) [[unlikely]] return; }
L_003B6F7C:
    st32((c.r[19].w[0]), 0u);
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[18].w[0])));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != c.r[17].d[0];  if (t) { goto L_003B6F98; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B6F98u); st32((c.r[18].w[0]), 0u);  if (depth < kMaxDepth) unit_00AD(c, 378u, depth + 1u); else { c.pc = 0x003B7190u; return; } if (c.pc != 0x003B6F98u) [[unlikely]] return; }
L_003B6F98:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_003B6FD8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B6FA8u);  if (depth < kMaxDepth) unit_00AD(c, 412u, depth + 1u); else { c.pc = 0x003B75E8u; return; } if (c.pc != 0x003B6FA8u) [[unlikely]] return; }
L_003B6FA8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[17].d[0]; set32(c.r[16], c.r[21].w[0] + 28144u);  if (t) { goto L_003B6FD0; } }
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B6FBCu);  if (depth < kMaxDepth) unit_00AD(c, 379u, depth + 1u); else { c.pc = 0x003B71A8u; return; } if (c.pc != 0x003B6FBCu) [[unlikely]] return; }
L_003B6FBC:
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_003B6FD0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B6FD0u); set32(c.r[4], ld32((c.r[16].w[0])));  if (depth < kMaxDepth) unit_00AD(c, 375u, depth + 1u); else { c.pc = 0x003B7140u; return; } if (c.pc != 0x003B6FD0u) [[unlikely]] return; }
L_003B6FD0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B6FD8u);  if (depth < kMaxDepth) unit_00AD(c, 378u, depth + 1u); else { c.pc = 0x003B7190u; return; } if (c.pc != 0x003B6FD8u) [[unlikely]] return; }
L_003B6FD8:
    c.r[2].d[0] = ld64((c.r[22].w[0]));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B6F68u | kUnwind; return; } goto L_003B6F68; } }
L_003B6FE4:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    set32(c.r[3], 0u + 1u);
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[2], c.r[2].w[0] + 28224u);
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 56u));
    st64((c.r[2].w[0]), c.r[3].d[0]);
    c.budget -= 13;
    { set32(c.r[29], c.r[29].w[0] + 64u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0010BA60u | kUnwind; return; } [[clang::musttail]] return unit_0002(c, 444u, depth); }
L_003B7018:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[5], c.r[2].w[0] + 28232u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 40u), c.r[21].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.r[3].d[0] = ld64((c.r[5].w[0]));
    c.budget -= 13;
    { const bool t = c.r[3].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);  if (t) { goto L_003B70BC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00420000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[20], c.r[2].w[0] + 28104u);
    set32(c.r[19], c.r[3].w[0] + 28056u);
    set32(c.r[18], c.r[4].w[0] + 28036u);
    c.r[21].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[17], 0u + 1u);
    c.budget -= 9;
L_003B7070:
    c.r[2].d[0] = ld64((c.r[20].w[0]));
    c.r[2].d[0] = c.r[2].d[0] + static_cast<std::uint64_t>(1ll);
    st64((c.r[20].w[0]), c.r[2].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B7084u); st32((c.r[19].w[0]), c.r[17].w[0]);  if (depth < kMaxDepth) unit_00B4(c, 387u, depth + 1u); else { c.pc = 0x003D3BE0u; return; } if (c.pc != 0x003B7084u) [[unlikely]] return; }
L_003B7084:
    st32((c.r[19].w[0]), 0u);
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[18].w[0])));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != c.r[17].d[0];  if (t) { goto L_003B70A0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B70A0u); st32((c.r[18].w[0]), 0u);  if (depth < kMaxDepth) unit_00AD(c, 378u, depth + 1u); else { c.pc = 0x003B7190u; return; } if (c.pc != 0x003B70A0u) [[unlikely]] return; }
L_003B70A0:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_003B70B0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B70B0u);  if (depth < kMaxDepth) unit_00AD(c, 378u, depth + 1u); else { c.pc = 0x003B7190u; return; } if (c.pc != 0x003B70B0u) [[unlikely]] return; }
L_003B70B0:
    c.r[2].d[0] = ld64((c.r[21].w[0]));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B7070u | kUnwind; return; } goto L_003B7070; } }
L_003B70BC:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    set32(c.r[3], 0u + 1u);
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[2], c.r[2].w[0] + 28240u);
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    st64((c.r[2].w[0]), c.r[3].d[0]);
    c.budget -= 12;
    { set32(c.r[29], c.r[29].w[0] + 64u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0010BA60u | kUnwind; return; } [[clang::musttail]] return unit_0002(c, 444u, depth); }
L_003B70F0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 5;
    { const bool t = c.r[16].d[0] == 0ull; st64((c.r[29].w[0] + 56u), c.r[31].d[0]);  if (t) { goto L_003B7130; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B710Cu); c.r[5].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 470u, depth + 1u); else { c.pc = 0x0010BB30u; return; } if (c.pc != 0x003B710Cu) [[unlikely]] return; }
L_003B710C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[29].w[0])));
    set32(c.r[2], 0u + 4u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[5], 0u + 12u);  if (t) { goto L_003B7128; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[5].d[0]; c.r[16].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_003B7134; } }
L_003B7128:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B7130u);  if (depth < kMaxDepth) unit_0003(c, 110u, depth + 1u); else { c.pc = 0x0010CAD0u; return; } if (c.pc != 0x003B7130u) [[unlikely]] return; }
L_003B7130:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_003B7134:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 56u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003B7140:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 5;
    { const bool t = c.r[16].d[0] == 0ull; st64((c.r[29].w[0] + 56u), c.r[31].d[0]);  if (t) { goto L_003B7180; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B715Cu); c.r[5].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 468u, depth + 1u); else { c.pc = 0x0010BB20u; return; } if (c.pc != 0x003B715Cu) [[unlikely]] return; }
L_003B715C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[29].w[0])));
    set32(c.r[2], 0u + 4u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[5], 0u + 12u);  if (t) { goto L_003B7178; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[5].d[0]; c.r[16].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_003B7184; } }
L_003B7178:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B7180u);  if (depth < kMaxDepth) unit_0002(c, 474u, depth + 1u); else { c.pc = 0x0010BB50u; return; } if (c.pc != 0x003B7180u) [[unlikely]] return; }
L_003B7180:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_003B7184:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 56u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003B7190:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0010BB40u | kUnwind; return; } [[clang::musttail]] return unit_0002(c, 472u, depth); }
L_003B71A8:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 56u), c.r[17].d[0]);
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull; st64((c.r[29].w[0] + 64u), c.r[31].d[0]);  if (t) { goto L_003B71F4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B71CCu); c.r[5].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 468u, depth + 1u); else { c.pc = 0x0010BB20u; return; } if (c.pc != 0x003B71CCu) [[unlikely]] return; }
L_003B71CC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[29].w[0])));
    set32(c.r[2], 0u + 8u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[5], 0u + 12u);  if (t) { goto L_003B71E8; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[5].d[0]; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003B71F8; } }
L_003B71E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B71F0u);  if (depth < kMaxDepth) unit_0002(c, 486u, depth + 1u); else { c.pc = 0x0010BBB0u; return; } if (c.pc != 0x003B71F0u) [[unlikely]] return; }
L_003B71F0:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_003B71F4:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003B71F8:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 56u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003B7210:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 56u), c.r[17].d[0]);
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull; st64((c.r[29].w[0] + 64u), c.r[31].d[0]);  if (t) { goto L_003B7258; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B7234u); c.r[5].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 468u, depth + 1u); else { c.pc = 0x0010BB20u; return; } if (c.pc != 0x003B7234u) [[unlikely]] return; }
L_003B7234:
    set32(c.r[3], ld32((c.r[29].w[0])));
    set32(c.r[2], 0u + 8u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[4], 0u + 12u);  if (t) { goto L_003B7258; } }
    c.budget -= 2;
    if (c.r[3].d[0] == c.r[4].d[0]) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_003B725C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B7254u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 482u, depth + 1u); else { c.pc = 0x0010BB90u; return; } if (c.pc != 0x003B7254u) [[unlikely]] return; }
L_003B7254:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_003B7258:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003B725C:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 56u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003B7270:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[7], ld32((c.r[2].w[0] - 6536u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x003B0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[5], c.r[5].w[0] + 27736u);
    set32(c.r[3], c.r[3].w[0] + 28272u);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[6], 0u + 2048u);
    set32(c.r[2], c.r[2].w[0] + 6256u);
    st64((c.r[29].w[0] + 48u), c.r[16].d[0]);
    st32((c.r[29].w[0] + 4u), c.r[5].w[0]);
    st32((c.r[29].w[0] + 8u), c.r[3].w[0]);
    st64((c.r[29].w[0] + 56u), c.r[31].d[0]);
    st32((c.r[29].w[0] + 12u), c.r[6].w[0]);
    st32((c.r[29].w[0] + 20u), c.r[7].w[0]);
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B72BCu); st32((c.r[29].w[0] + 16u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0002(c, 436u, depth + 1u); else { c.pc = 0x0010BA20u; return; } if (c.pc != 0x003B72BCu) [[unlikely]] return; }
L_003B72BC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00420000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[16], c.r[3].w[0] + 28120u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B72D8u); set32(c.r[4], ld32((c.r[16].w[0])));  if (depth < kMaxDepth) unit_0002(c, 440u, depth + 1u); else { c.pc = 0x0010BA40u; return; } if (c.pc != 0x003B72D8u) [[unlikely]] return; }
L_003B72D8:
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);  if (t) { goto L_003B72F8; } }
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B72F0u);  if (depth < kMaxDepth) unit_00AD(c, 382u, depth + 1u); else { c.pc = 0x003B7210u; return; } if (c.pc != 0x003B72F0u) [[unlikely]] return; }
L_003B72F0:
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    c.budget -= 2;
L_003B72F8:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B7304u); set32(c.r[5], ld32((c.r[2].w[0] + 28004u)));  if (depth < kMaxDepth) unit_0002(c, 454u, depth + 1u); else { c.pc = 0x0010BAB0u; return; } if (c.pc != 0x003B7304u) [[unlikely]] return; }
L_003B7304:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 56u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003B7318:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[7], ld32((c.r[2].w[0] - 6536u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x003B0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00420000u);
    st64((c.r[29].w[0] + 48u), c.r[16].d[0]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[3], c.r[3].w[0] + 30320u);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[6], 0u + 4096u);
    set32(c.r[5], c.r[5].w[0] + 27824u);
    set32(c.r[2], c.r[2].w[0] + 6256u);
    st64((c.r[29].w[0] + 56u), c.r[31].d[0]);
    st32((c.r[29].w[0] + 4u), c.r[5].w[0]);
    set32(c.r[16], c.r[16].w[0] + 28124u);
    st32((c.r[29].w[0] + 8u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 12u), c.r[6].w[0]);
    st32((c.r[29].w[0] + 20u), c.r[7].w[0]);
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B736Cu); st32((c.r[29].w[0] + 16u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0002(c, 436u, depth + 1u); else { c.pc = 0x0010BA20u; return; } if (c.pc != 0x003B736Cu) [[unlikely]] return; }
L_003B736C:
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B7380u); set32(c.r[4], ld32((c.r[16].w[0])));  if (depth < kMaxDepth) unit_0002(c, 440u, depth + 1u); else { c.pc = 0x0010BA40u; return; } if (c.pc != 0x003B7380u) [[unlikely]] return; }
L_003B7380:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B7390u); set32(c.r[5], ld32((c.r[2].w[0] + 28008u)));  if (depth < kMaxDepth) unit_0002(c, 454u, depth + 1u); else { c.pc = 0x0010BAB0u; return; } if (c.pc != 0x003B7390u) [[unlikely]] return; }
L_003B7390:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 56u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003B73A0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[7], ld32((c.r[2].w[0] - 6536u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x003B0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00430000u);
    st64((c.r[29].w[0] + 48u), c.r[16].d[0]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[3], c.r[3].w[0] - 31120u);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[6], 0u + 4096u);
    set32(c.r[5], c.r[5].w[0] + 27976u);
    set32(c.r[2], c.r[2].w[0] + 6256u);
    st64((c.r[29].w[0] + 56u), c.r[31].d[0]);
    st32((c.r[29].w[0] + 4u), c.r[5].w[0]);
    set32(c.r[16], c.r[16].w[0] + 28128u);
    st32((c.r[29].w[0] + 8u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 12u), c.r[6].w[0]);
    st32((c.r[29].w[0] + 20u), c.r[7].w[0]);
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B73F4u); st32((c.r[29].w[0] + 16u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0002(c, 436u, depth + 1u); else { c.pc = 0x0010BA20u; return; } if (c.pc != 0x003B73F4u) [[unlikely]] return; }
L_003B73F4:
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B7408u); set32(c.r[4], ld32((c.r[16].w[0])));  if (depth < kMaxDepth) unit_0002(c, 440u, depth + 1u); else { c.pc = 0x0010BA40u; return; } if (c.pc != 0x003B7408u) [[unlikely]] return; }
L_003B7408:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B7418u); set32(c.r[5], ld32((c.r[2].w[0] + 28012u)));  if (depth < kMaxDepth) unit_0002(c, 454u, depth + 1u); else { c.pc = 0x0010BAB0u; return; } if (c.pc != 0x003B7418u) [[unlikely]] return; }
L_003B7418:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 56u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003B7428:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[7], ld32((c.r[2].w[0] - 6536u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x003B0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00430000u);
    st64((c.r[29].w[0] + 48u), c.r[16].d[0]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[3], c.r[3].w[0] - 27024u);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[6], 0u + 4096u);
    set32(c.r[5], c.r[5].w[0] + 28200u);
    set32(c.r[2], c.r[2].w[0] + 6256u);
    st64((c.r[29].w[0] + 56u), c.r[31].d[0]);
    st32((c.r[29].w[0] + 4u), c.r[5].w[0]);
    set32(c.r[16], c.r[16].w[0] + 28132u);
    st32((c.r[29].w[0] + 8u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 12u), c.r[6].w[0]);
    st32((c.r[29].w[0] + 20u), c.r[7].w[0]);
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B747Cu); st32((c.r[29].w[0] + 16u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0002(c, 436u, depth + 1u); else { c.pc = 0x0010BA20u; return; } if (c.pc != 0x003B747Cu) [[unlikely]] return; }
L_003B747C:
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B7490u); set32(c.r[4], ld32((c.r[16].w[0])));  if (depth < kMaxDepth) unit_0002(c, 440u, depth + 1u); else { c.pc = 0x0010BA40u; return; } if (c.pc != 0x003B7490u) [[unlikely]] return; }
L_003B7490:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B74A0u); set32(c.r[5], ld32((c.r[2].w[0] + 28016u)));  if (depth < kMaxDepth) unit_0002(c, 454u, depth + 1u); else { c.pc = 0x0010BAB0u; return; } if (c.pc != 0x003B74A0u) [[unlikely]] return; }
L_003B74A0:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 56u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003B74B0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[7], ld32((c.r[2].w[0] - 6536u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x003B0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00430000u);
    st64((c.r[29].w[0] + 48u), c.r[16].d[0]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[3], c.r[3].w[0] - 22928u);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[6], 0u + 8192u);
    set32(c.r[5], c.r[5].w[0] + 28424u);
    set32(c.r[2], c.r[2].w[0] + 6256u);
    set32(c.r[16], c.r[16].w[0] + 28140u);
    st64((c.r[29].w[0] + 56u), c.r[31].d[0]);
    st32((c.r[29].w[0] + 4u), c.r[5].w[0]);
    st32((c.r[29].w[0] + 8u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 12u), c.r[6].w[0]);
    st32((c.r[29].w[0] + 20u), c.r[7].w[0]);
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B7504u); st32((c.r[29].w[0] + 16u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0002(c, 436u, depth + 1u); else { c.pc = 0x0010BA20u; return; } if (c.pc != 0x003B7504u) [[unlikely]] return; }
L_003B7504:
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B7518u); set32(c.r[4], ld32((c.r[16].w[0])));  if (depth < kMaxDepth) unit_0002(c, 440u, depth + 1u); else { c.pc = 0x0010BA40u; return; } if (c.pc != 0x003B7518u) [[unlikely]] return; }
L_003B7518:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B7528u); set32(c.r[5], ld32((c.r[2].w[0] + 28024u)));  if (depth < kMaxDepth) unit_0002(c, 454u, depth + 1u); else { c.pc = 0x0010BAB0u; return; } if (c.pc != 0x003B7528u) [[unlikely]] return; }
L_003B7528:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B7534u);  if (depth < kMaxDepth) unit_00AD(c, 382u, depth + 1u); else { c.pc = 0x003B7210u; return; } if (c.pc != 0x003B7534u) [[unlikely]] return; }
L_003B7534:
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 56u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003B7548:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[7], ld32((c.r[2].w[0] - 6536u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x003B0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00430000u);
    st64((c.r[29].w[0] + 48u), c.r[16].d[0]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[3], c.r[3].w[0] - 14736u);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[6], 0u + 8192u);
    set32(c.r[5], c.r[5].w[0] + 28696u);
    set32(c.r[2], c.r[2].w[0] + 6256u);
    st64((c.r[29].w[0] + 56u), c.r[31].d[0]);
    st32((c.r[29].w[0] + 4u), c.r[5].w[0]);
    set32(c.r[16], c.r[16].w[0] + 28144u);
    st32((c.r[29].w[0] + 8u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 12u), c.r[6].w[0]);
    st32((c.r[29].w[0] + 20u), c.r[7].w[0]);
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B759Cu); st32((c.r[29].w[0] + 16u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0002(c, 436u, depth + 1u); else { c.pc = 0x0010BA20u; return; } if (c.pc != 0x003B759Cu) [[unlikely]] return; }
L_003B759C:
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B75B0u); set32(c.r[4], ld32((c.r[16].w[0])));  if (depth < kMaxDepth) unit_0002(c, 440u, depth + 1u); else { c.pc = 0x0010BA40u; return; } if (c.pc != 0x003B75B0u) [[unlikely]] return; }
L_003B75B0:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B75C0u); set32(c.r[5], ld32((c.r[2].w[0] + 28028u)));  if (depth < kMaxDepth) unit_0002(c, 454u, depth + 1u); else { c.pc = 0x0010BAB0u; return; } if (c.pc != 0x003B75C0u) [[unlikely]] return; }
L_003B75C0:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B75CCu);  if (depth < kMaxDepth) unit_00AD(c, 382u, depth + 1u); else { c.pc = 0x003B7210u; return; } if (c.pc != 0x003B75CCu) [[unlikely]] return; }
L_003B75CC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[3], c.r[3].w[0] + 28140u);
    c.r[16].d[0] = ld64((c.r[29].w[0] + 48u));
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 56u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003B75E8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00420000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[3].w[0] + 27992u)));  c.pc = t; return; }
L_003B75F8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00B4(c, 381u, depth); }
L_003B7610:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00B4(c, 382u, depth); }
L_003B7628:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00B4(c, 384u, depth); }
L_003B7640:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00B4(c, 385u, depth); }
L_003B7658:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00B4(c, 386u, depth); }
L_003B7670:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00B4(c, 387u, depth); }
L_003B7688:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B7698u);  if (depth < kMaxDepth) unit_00B4(c, 381u, depth + 1u); else { c.pc = 0x003D3B50u; return; } if (c.pc != 0x003B7698u) [[unlikely]] return; }
L_003B7698:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B76A0u);  if (depth < kMaxDepth) unit_00B4(c, 382u, depth + 1u); else { c.pc = 0x003D3B68u; return; } if (c.pc != 0x003B76A0u) [[unlikely]] return; }
L_003B76A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B76A8u);  if (depth < kMaxDepth) unit_00B4(c, 385u, depth + 1u); else { c.pc = 0x003D3BB0u; return; } if (c.pc != 0x003B76A8u) [[unlikely]] return; }
L_003B76A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B76B0u);  if (depth < kMaxDepth) unit_00B4(c, 386u, depth + 1u); else { c.pc = 0x003D3BC8u; return; } if (c.pc != 0x003B76B0u) [[unlikely]] return; }
L_003B76B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B76B8u);  if (depth < kMaxDepth) unit_00B4(c, 387u, depth + 1u); else { c.pc = 0x003D3BE0u; return; } if (c.pc != 0x003B76B8u) [[unlikely]] return; }
L_003B76B8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003B76C8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[2], ld32((c.r[3].w[0] + 27988u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;  c.pc = t; return; }
L_003B76D8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00B4(c, 369u, depth); }
L_003B76F0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    st64((c.r[29].w[0] + 64u), c.r[18].d[0]);
    c.r[18].sd[0] = static_cast<std::int32_t>(0x00420000u);
    st64((c.r[29].w[0] + 48u), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 56u), c.r[17].d[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00420000u);
    st64((c.r[29].w[0] + 72u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] + 27984u);
    set32(c.r[5], ld32((c.r[18].w[0] + 27988u)));
    set32(c.r[3], c.r[3].w[0] + 28060u);
    set32(c.r[6], ld32((c.r[2].w[0])));
    st32((c.r[3].w[0]), 0u);
    c.budget -= 16;
    if (c.r[5].d[0] != 0ull) { set32(c.r[3], c.r[18].w[0] + 27988u);  goto L_003B7840; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B7738u);  if (depth < kMaxDepth) unit_00B4(c, 394u, depth + 1u); else { c.pc = 0x003D3CA0u; return; } if (c.pc != 0x003B7738u) [[unlikely]] return; }
L_003B7738:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x003B0000u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B7748u); set32(c.r[4], c.r[4].w[0] + 27168u);  if (depth < kMaxDepth) unit_00B4(c, 371u, depth + 1u); else { c.pc = 0x003D3998u; return; } if (c.pc != 0x003B7748u) [[unlikely]] return; }
L_003B7748:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x003B0000u);
    set32(c.r[4], c.r[4].w[0] + 27304u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B7758u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00B4(c, 372u, depth + 1u); else { c.pc = 0x003D39B0u; return; } if (c.pc != 0x003B7758u) [[unlikely]] return; }
L_003B7758:
    c.budget -= 2;
    if (c.r[16].d[0] != 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 16u)));  goto L_003B77A0; }
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[2], 0u + 24u);
    set32(c.r[4], c.r[17].w[0] + 28000u);
    set32(c.r[3], 0u + 25u);
    st32((c.r[4].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[2], 0u + 1u);
    st32((c.r[4].w[0] + 24u), c.r[3].w[0]);
    set32(c.r[3], 0u + 8u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    set32(c.r[2], 0u + 16u);
    st32((c.r[4].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[3], 0u + 18u);
    st32((c.r[4].w[0] + 12u), c.r[2].w[0]);
    c.budget -= 15;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 16u), c.r[3].w[0]);  if (t) { goto L_003B77D4; } }
    c.budget -= 1;
L_003B77A0:
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[4], c.r[17].w[0] + 28000u);
    st32((c.r[4].w[0] + 20u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0])));
    st32((c.r[4].w[0]), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    st32((c.r[4].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    st32((c.r[4].w[0] + 12u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    st32((c.r[4].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 20u)));
    st32((c.r[4].w[0] + 24u), c.r[2].w[0]);
    c.budget -= 13;
L_003B77D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B77DCu); c.r[16].sd[0] = static_cast<std::int32_t>(0x00420000u);  if (depth < kMaxDepth) unit_0002(c, 466u, depth + 1u); else { c.pc = 0x0010BB10u; return; } if (c.pc != 0x003B77DCu) [[unlikely]] return; }
L_003B77DC:
    set32(c.r[16], c.r[16].w[0] + 28136u);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B77F0u); set32(c.r[4], ld32((c.r[16].w[0])));  if (depth < kMaxDepth) unit_0002(c, 468u, depth + 1u); else { c.pc = 0x0010BB20u; return; } if (c.pc != 0x003B77F0u) [[unlikely]] return; }
L_003B77F0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[2], ld32((c.r[29].w[0] + 24u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B7800u); st32((c.r[3].w[0] - 6536u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00AD(c, 385u, depth + 1u); else { c.pc = 0x003B7270u; return; } if (c.pc != 0x003B7800u) [[unlikely]] return; }
L_003B7800:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B7808u);  if (depth < kMaxDepth) unit_00AD(c, 394u, depth + 1u); else { c.pc = 0x003B73A0u; return; } if (c.pc != 0x003B7808u) [[unlikely]] return; }
L_003B7808:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B7810u);  if (depth < kMaxDepth) unit_00AD(c, 398u, depth + 1u); else { c.pc = 0x003B7428u; return; } if (c.pc != 0x003B7810u) [[unlikely]] return; }
L_003B7810:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B7818u);  if (depth < kMaxDepth) unit_00AD(c, 402u, depth + 1u); else { c.pc = 0x003B74B0u; return; } if (c.pc != 0x003B7818u) [[unlikely]] return; }
L_003B7818:
    set32(c.r[4], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[17].w[0] + 28000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B7828u); set32(c.r[5], ld32((c.r[2].w[0] + 20u)));  if (depth < kMaxDepth) unit_0002(c, 454u, depth + 1u); else { c.pc = 0x0010BAB0u; return; } if (c.pc != 0x003B7828u) [[unlikely]] return; }
L_003B7828:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x003B0000u);
    set32(c.r[5], c.r[5].w[0] + 27632u);
    set32(c.r[4], 0u + 6u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B783Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00B4(c, 365u, depth + 1u); else { c.pc = 0x003D38C0u; return; } if (c.pc != 0x003B783Cu) [[unlikely]] return; }
L_003B783C:
    set32(c.r[3], c.r[18].w[0] + 27988u);
    c.budget -= 1;
L_003B7840:
    c.r[18].d[0] = ld64((c.r[29].w[0] + 64u));
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 56u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 72u));
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003B7868:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00420000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00420000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00420000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00420000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00420000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] + 28152u);
    set32(c.r[4], c.r[4].w[0] + 28168u);
    set32(c.r[5], c.r[5].w[0] + 28184u);
    set32(c.r[6], c.r[6].w[0] + 28200u);
    set32(c.r[7], c.r[7].w[0] + 28216u);
    set32(c.r[8], c.r[8].w[0] + 28232u);
    st64((c.r[3].w[0]), c.r[2].d[0]);
    st64((c.r[4].w[0]), c.r[2].d[0]);
    st64((c.r[5].w[0]), c.r[2].d[0]);
    st64((c.r[6].w[0]), c.r[2].d[0]);
    st64((c.r[7].w[0]), c.r[2].d[0]);
    c.budget -= 20;
    { const std::uint32_t t = c.r[31].w[0]; st64((c.r[8].w[0]), c.r[2].d[0]);  c.pc = t; return; }
L_003B78B8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00420000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], c.r[3].w[0] + 27988u);
    set32(c.r[2], ld32((c.r[3].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[3].w[0]), c.r[2].w[0]);  if (t) { goto L_003B7940; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B78E0u);  if (depth < kMaxDepth) unit_00AD(c, 439u, depth + 1u); else { c.pc = 0x003B7868u; return; } if (c.pc != 0x003B78E0u) [[unlikely]] return; }
L_003B78E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B78E8u);  if (depth < kMaxDepth) unit_00AD(c, 454u, depth + 1u); else { c.pc = 0x003B7A20u; return; } if (c.pc != 0x003B78E8u) [[unlikely]] return; }
L_003B78E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B78F0u);  if (depth < kMaxDepth) unit_00AD(c, 464u, depth + 1u); else { c.pc = 0x003B7BC0u; return; } if (c.pc != 0x003B78F0u) [[unlikely]] return; }
L_003B78F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B78F8u);  if (depth < kMaxDepth) unit_00AD(c, 459u, depth + 1u); else { c.pc = 0x003B7AF0u; return; } if (c.pc != 0x003B78F8u) [[unlikely]] return; }
L_003B78F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B7900u);  if (depth < kMaxDepth) unit_00AD(c, 474u, depth + 1u); else { c.pc = 0x003B7D60u; return; } if (c.pc != 0x003B7900u) [[unlikely]] return; }
L_003B7900:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[2], c.r[2].w[0] + 28136u);
    set32(c.r[5], ld32((c.r[3].w[0] - 6536u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B7918u); set32(c.r[4], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0002(c, 454u, depth + 1u); else { c.pc = 0x0010BAB0u; return; } if (c.pc != 0x003B7918u) [[unlikely]] return; }
L_003B7918:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B7924u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00B4(c, 371u, depth + 1u); else { c.pc = 0x003D3998u; return; } if (c.pc != 0x003B7924u) [[unlikely]] return; }
L_003B7924:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B7930u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00B4(c, 372u, depth + 1u); else { c.pc = 0x003D39B0u; return; } if (c.pc != 0x003B7930u) [[unlikely]] return; }
L_003B7930:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00B4(c, 396u, depth); }
L_003B7940:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003B7950:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[22].d[0]);
    c.r[22].sd[0] = static_cast<std::int32_t>(0x00420000u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[3], c.r[22].w[0] + 28240u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 40u), c.r[21].d[0]);
    st64((c.r[29].w[0] + 56u), c.r[31].d[0]);
    c.r[2].d[0] = ld64((c.r[3].w[0]));
    c.budget -= 14;
    { const bool t = c.r[2].d[0] != 0ull; c.r[21].sd[0] = static_cast<std::int32_t>(0x00420000u);  if (t) { goto L_003B79D8; } }
    c.r[20].sd[0] = static_cast<std::int32_t>(0x00420000u);
    c.r[19].d[0] = c.r[3].d[0] + 0ull;
    set32(c.r[18], c.r[21].w[0] + 28232u);
    set32(c.r[17], 0u + 1u);
    set32(c.r[16], c.r[20].w[0] + 28144u);
    c.budget -= 6;
L_003B79A0:
    st64((c.r[18].w[0]), c.r[17].d[0]);
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B79B0u); set32(c.r[4], ld32((c.r[16].w[0])));  if (depth < kMaxDepth) unit_0002(c, 454u, depth + 1u); else { c.pc = 0x0010BAB0u; return; } if (c.pc != 0x003B79B0u) [[unlikely]] return; }
L_003B79B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B79B8u); set32(c.r[4], ld32((c.r[16].w[0])));  if (depth < kMaxDepth) unit_0002(c, 474u, depth + 1u); else { c.pc = 0x0010BB50u; return; } if (c.pc != 0x003B79B8u) [[unlikely]] return; }
L_003B79B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B79C0u); set32(c.r[4], ld32((c.r[16].w[0])));  if (depth < kMaxDepth) unit_0002(c, 486u, depth + 1u); else { c.pc = 0x0010BBB0u; return; } if (c.pc != 0x003B79C0u) [[unlikely]] return; }
L_003B79C0:
    c.r[3].d[0] = ld64((c.r[19].w[0]));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], c.r[22].w[0] + 28240u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B79A0u | kUnwind; return; } goto L_003B79A0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[22].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_003B79E4; } }
    c.budget -= 1;
L_003B79D8:
    c.r[20].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[2], c.r[22].w[0] + 28240u);
    c.r[22].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 3;
L_003B79E4:
    set32(c.r[3], c.r[21].w[0] + 28232u);
    c.r[21].d[0] = ld64((c.r[29].w[0] + 40u));
    set32(c.r[4], c.r[20].w[0] + 28144u);
    c.r[20].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 56u));
    st64((c.r[2].w[0]), 0ull);
    st64((c.r[3].w[0]), 0ull);
    st32((c.r[4].w[0]), 0u);
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003B7A20:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[22].d[0]);
    c.r[22].sd[0] = static_cast<std::int32_t>(0x00420000u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[3], c.r[22].w[0] + 28224u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 40u), c.r[21].d[0]);
    st64((c.r[29].w[0] + 56u), c.r[31].d[0]);
    c.r[2].d[0] = ld64((c.r[3].w[0]));
    c.budget -= 14;
    { const bool t = c.r[2].d[0] != 0ull; c.r[21].sd[0] = static_cast<std::int32_t>(0x00420000u);  if (t) { goto L_003B7AA8; } }
    c.r[20].sd[0] = static_cast<std::int32_t>(0x00420000u);
    c.r[19].d[0] = c.r[3].d[0] + 0ull;
    set32(c.r[18], c.r[21].w[0] + 28216u);
    set32(c.r[17], 0u + 1u);
    set32(c.r[16], c.r[20].w[0] + 28140u);
    c.budget -= 6;
L_003B7A70:
    st64((c.r[18].w[0]), c.r[17].d[0]);
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B7A80u); set32(c.r[4], ld32((c.r[16].w[0])));  if (depth < kMaxDepth) unit_0002(c, 454u, depth + 1u); else { c.pc = 0x0010BAB0u; return; } if (c.pc != 0x003B7A80u) [[unlikely]] return; }
L_003B7A80:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B7A88u); set32(c.r[4], ld32((c.r[16].w[0])));  if (depth < kMaxDepth) unit_0002(c, 474u, depth + 1u); else { c.pc = 0x0010BB50u; return; } if (c.pc != 0x003B7A88u) [[unlikely]] return; }
L_003B7A88:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B7A90u); set32(c.r[4], ld32((c.r[16].w[0])));  if (depth < kMaxDepth) unit_0002(c, 486u, depth + 1u); else { c.pc = 0x0010BBB0u; return; } if (c.pc != 0x003B7A90u) [[unlikely]] return; }
L_003B7A90:
    c.r[3].d[0] = ld64((c.r[19].w[0]));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], c.r[22].w[0] + 28224u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B7A70u | kUnwind; return; } goto L_003B7A70; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[22].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_003B7AB4; } }
    c.budget -= 1;
L_003B7AA8:
    c.r[20].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[2], c.r[22].w[0] + 28224u);
    c.r[22].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 3;
L_003B7AB4:
    set32(c.r[3], c.r[21].w[0] + 28216u);
    c.r[21].d[0] = ld64((c.r[29].w[0] + 40u));
    set32(c.r[4], c.r[20].w[0] + 28140u);
    c.r[20].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 56u));
    st64((c.r[2].w[0]), 0ull);
    st64((c.r[3].w[0]), 0ull);
    st32((c.r[4].w[0]), 0u);
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003B7AF0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[22].d[0]);
    c.r[22].sd[0] = static_cast<std::int32_t>(0x00420000u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[3], c.r[22].w[0] + 28192u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 40u), c.r[21].d[0]);
    st64((c.r[29].w[0] + 56u), c.r[31].d[0]);
    c.r[2].d[0] = ld64((c.r[3].w[0]));
    c.budget -= 14;
    { const bool t = c.r[2].d[0] != 0ull; c.r[21].sd[0] = static_cast<std::int32_t>(0x00420000u);  if (t) { goto L_003B7B78; } }
    c.r[20].sd[0] = static_cast<std::int32_t>(0x00420000u);
    c.r[19].d[0] = c.r[3].d[0] + 0ull;
    set32(c.r[18], c.r[21].w[0] + 28184u);
    set32(c.r[17], 0u + 1u);
    set32(c.r[16], c.r[20].w[0] + 28128u);
    c.budget -= 6;
L_003B7B40:
    st64((c.r[18].w[0]), c.r[17].d[0]);
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B7B50u); set32(c.r[4], ld32((c.r[16].w[0])));  if (depth < kMaxDepth) unit_0002(c, 454u, depth + 1u); else { c.pc = 0x0010BAB0u; return; } if (c.pc != 0x003B7B50u) [[unlikely]] return; }
L_003B7B50:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B7B58u); set32(c.r[4], ld32((c.r[16].w[0])));  if (depth < kMaxDepth) unit_0002(c, 474u, depth + 1u); else { c.pc = 0x0010BB50u; return; } if (c.pc != 0x003B7B58u) [[unlikely]] return; }
L_003B7B58:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B7B60u); set32(c.r[4], ld32((c.r[16].w[0])));  if (depth < kMaxDepth) unit_0002(c, 486u, depth + 1u); else { c.pc = 0x0010BBB0u; return; } if (c.pc != 0x003B7B60u) [[unlikely]] return; }
L_003B7B60:
    c.r[3].d[0] = ld64((c.r[19].w[0]));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], c.r[22].w[0] + 28192u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B7B40u | kUnwind; return; } goto L_003B7B40; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[22].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_003B7B84; } }
    c.budget -= 1;
L_003B7B78:
    c.r[20].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[2], c.r[22].w[0] + 28192u);
    c.r[22].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 3;
L_003B7B84:
    set32(c.r[3], c.r[21].w[0] + 28184u);
    c.r[21].d[0] = ld64((c.r[29].w[0] + 40u));
    set32(c.r[4], c.r[20].w[0] + 28128u);
    c.r[20].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 56u));
    st64((c.r[2].w[0]), 0ull);
    st64((c.r[3].w[0]), 0ull);
    st32((c.r[4].w[0]), 0u);
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003B7BC0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[22].d[0]);
    c.r[22].sd[0] = static_cast<std::int32_t>(0x00420000u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[3], c.r[22].w[0] + 28208u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 40u), c.r[21].d[0]);
    st64((c.r[29].w[0] + 56u), c.r[31].d[0]);
    c.r[2].d[0] = ld64((c.r[3].w[0]));
    c.budget -= 14;
    { const bool t = c.r[2].d[0] != 0ull; c.r[21].sd[0] = static_cast<std::int32_t>(0x00420000u);  if (t) { goto L_003B7C48; } }
    c.r[20].sd[0] = static_cast<std::int32_t>(0x00420000u);
    c.r[19].d[0] = c.r[3].d[0] + 0ull;
    set32(c.r[18], c.r[21].w[0] + 28200u);
    set32(c.r[17], 0u + 1u);
    set32(c.r[16], c.r[20].w[0] + 28132u);
    c.budget -= 6;
L_003B7C10:
    st64((c.r[18].w[0]), c.r[17].d[0]);
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B7C20u); set32(c.r[4], ld32((c.r[16].w[0])));  if (depth < kMaxDepth) unit_0002(c, 454u, depth + 1u); else { c.pc = 0x0010BAB0u; return; } if (c.pc != 0x003B7C20u) [[unlikely]] return; }
L_003B7C20:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B7C28u); set32(c.r[4], ld32((c.r[16].w[0])));  if (depth < kMaxDepth) unit_0002(c, 474u, depth + 1u); else { c.pc = 0x0010BB50u; return; } if (c.pc != 0x003B7C28u) [[unlikely]] return; }
L_003B7C28:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B7C30u); set32(c.r[4], ld32((c.r[16].w[0])));  if (depth < kMaxDepth) unit_0002(c, 486u, depth + 1u); else { c.pc = 0x0010BBB0u; return; } if (c.pc != 0x003B7C30u) [[unlikely]] return; }
L_003B7C30:
    c.r[3].d[0] = ld64((c.r[19].w[0]));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], c.r[22].w[0] + 28208u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B7C10u | kUnwind; return; } goto L_003B7C10; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[22].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_003B7C54; } }
    c.budget -= 1;
L_003B7C48:
    c.r[20].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[2], c.r[22].w[0] + 28208u);
    c.r[22].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 3;
L_003B7C54:
    set32(c.r[3], c.r[21].w[0] + 28200u);
    c.r[21].d[0] = ld64((c.r[29].w[0] + 40u));
    set32(c.r[4], c.r[20].w[0] + 28132u);
    c.r[20].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 56u));
    st64((c.r[2].w[0]), 0ull);
    st64((c.r[3].w[0]), 0ull);
    st32((c.r[4].w[0]), 0u);
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003B7C90:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[22].d[0]);
    c.r[22].sd[0] = static_cast<std::int32_t>(0x00420000u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[3], c.r[22].w[0] + 28176u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 40u), c.r[21].d[0]);
    st64((c.r[29].w[0] + 56u), c.r[31].d[0]);
    c.r[2].d[0] = ld64((c.r[3].w[0]));
    c.budget -= 14;
    { const bool t = c.r[2].d[0] != 0ull; c.r[21].sd[0] = static_cast<std::int32_t>(0x00420000u);  if (t) { goto L_003B7D18; } }
    c.r[20].sd[0] = static_cast<std::int32_t>(0x00420000u);
    c.r[19].d[0] = c.r[3].d[0] + 0ull;
    set32(c.r[18], c.r[21].w[0] + 28168u);
    set32(c.r[17], 0u + 1u);
    set32(c.r[16], c.r[20].w[0] + 28124u);
    c.budget -= 6;
L_003B7CE0:
    st64((c.r[18].w[0]), c.r[17].d[0]);
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B7CF0u); set32(c.r[4], ld32((c.r[16].w[0])));  if (depth < kMaxDepth) unit_0002(c, 454u, depth + 1u); else { c.pc = 0x0010BAB0u; return; } if (c.pc != 0x003B7CF0u) [[unlikely]] return; }
L_003B7CF0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B7CF8u); set32(c.r[4], ld32((c.r[16].w[0])));  if (depth < kMaxDepth) unit_0002(c, 474u, depth + 1u); else { c.pc = 0x0010BB50u; return; } if (c.pc != 0x003B7CF8u) [[unlikely]] return; }
L_003B7CF8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B7D00u); set32(c.r[4], ld32((c.r[16].w[0])));  if (depth < kMaxDepth) unit_0002(c, 486u, depth + 1u); else { c.pc = 0x0010BBB0u; return; } if (c.pc != 0x003B7D00u) [[unlikely]] return; }
L_003B7D00:
    c.r[3].d[0] = ld64((c.r[19].w[0]));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], c.r[22].w[0] + 28176u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B7CE0u | kUnwind; return; } goto L_003B7CE0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[22].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_003B7D24; } }
    c.budget -= 1;
L_003B7D18:
    c.r[20].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[2], c.r[22].w[0] + 28176u);
    c.r[22].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 3;
L_003B7D24:
    set32(c.r[3], c.r[21].w[0] + 28168u);
    c.r[21].d[0] = ld64((c.r[29].w[0] + 40u));
    set32(c.r[4], c.r[20].w[0] + 28124u);
    c.r[20].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 56u));
    st64((c.r[2].w[0]), 0ull);
    st64((c.r[3].w[0]), 0ull);
    st32((c.r[4].w[0]), 0u);
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003B7D60:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[22].d[0]);
    c.r[22].sd[0] = static_cast<std::int32_t>(0x00420000u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[3], c.r[22].w[0] + 28160u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 40u), c.r[21].d[0]);
    st64((c.r[29].w[0] + 56u), c.r[31].d[0]);
    c.r[2].d[0] = ld64((c.r[3].w[0]));
    c.budget -= 14;
    { const bool t = c.r[2].d[0] != 0ull; c.r[21].sd[0] = static_cast<std::int32_t>(0x00420000u);  if (t) { goto L_003B7DE8; } }
    c.r[20].sd[0] = static_cast<std::int32_t>(0x00420000u);
    c.r[19].d[0] = c.r[3].d[0] + 0ull;
    set32(c.r[18], c.r[21].w[0] + 28152u);
    set32(c.r[17], 0u + 1u);
    set32(c.r[16], c.r[20].w[0] + 28120u);
    c.budget -= 6;
L_003B7DB0:
    st64((c.r[18].w[0]), c.r[17].d[0]);
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B7DC0u); set32(c.r[4], ld32((c.r[16].w[0])));  if (depth < kMaxDepth) unit_0002(c, 454u, depth + 1u); else { c.pc = 0x0010BAB0u; return; } if (c.pc != 0x003B7DC0u) [[unlikely]] return; }
L_003B7DC0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B7DC8u); set32(c.r[4], ld32((c.r[16].w[0])));  if (depth < kMaxDepth) unit_0002(c, 474u, depth + 1u); else { c.pc = 0x0010BB50u; return; } if (c.pc != 0x003B7DC8u) [[unlikely]] return; }
L_003B7DC8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B7DD0u); set32(c.r[4], ld32((c.r[16].w[0])));  if (depth < kMaxDepth) unit_0002(c, 486u, depth + 1u); else { c.pc = 0x0010BBB0u; return; } if (c.pc != 0x003B7DD0u) [[unlikely]] return; }
L_003B7DD0:
    c.r[3].d[0] = ld64((c.r[19].w[0]));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], c.r[22].w[0] + 28160u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B7DB0u | kUnwind; return; } goto L_003B7DB0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[22].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_003B7DF4; } }
    c.budget -= 1;
L_003B7DE8:
    c.r[20].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[2], c.r[22].w[0] + 28160u);
    c.r[22].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 3;
L_003B7DF4:
    set32(c.r[3], c.r[21].w[0] + 28152u);
    c.r[21].d[0] = ld64((c.r[29].w[0] + 40u));
    set32(c.r[4], c.r[20].w[0] + 28120u);
    c.r[20].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 56u));
    st64((c.r[2].w[0]), 0ull);
    st64((c.r[3].w[0]), 0ull);
    st32((c.r[4].w[0]), 0u);
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003B7E30:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00B4(c, 316u, depth); }
L_003B7E48:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00B4(c, 317u, depth); }
L_003B7E60:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00420000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[3].w[0] + 28032u)));  c.pc = t; return; }
L_003B7E70:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].sd[0] = static_cast<std::int32_t>(0x00420000u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[2], c.r[2].w[0] + 23748u);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    set32(c.r[5], c.r[18].w[0] + 28252u);
    set32(c.r[3], ld32((c.r[2].w[0])));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[5].w[0])));
    c.budget -= 16;
    { const bool t = c.r[4].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);  if (t) { goto L_003B7F60; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[16], 0u + 1u);
    set32(c.r[3], ld32((c.r[2].w[0] + 27988u)));
    st32((c.r[5].w[0]), c.r[16].w[0]);
    c.budget -= 6;
    { const bool t = c.r[3].sd[0] <= 0; c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);  if (t) { goto L_003B7F4C; } }
    set32(c.r[2], c.r[2].w[0] + 28040u);
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[16].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);  if (t) { goto L_003B7EE4; } }
    set32(c.r[2], c.r[2].w[0] + 28128u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B7EE4u); set32(c.r[4], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_00AD(c, 372u, depth + 1u); else { c.pc = 0x003B70F0u; return; } if (c.pc != 0x003B7EE4u) [[unlikely]] return; }
L_003B7EE4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[2], c.r[2].w[0] + 28048u);
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[16].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);  if (t) { goto L_003B7F04; } }
    set32(c.r[2], c.r[2].w[0] + 28132u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B7F04u); set32(c.r[4], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_00AD(c, 372u, depth + 1u); else { c.pc = 0x003B70F0u; return; } if (c.pc != 0x003B7F04u) [[unlikely]] return; }
L_003B7F04:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B7F0Cu);  if (depth < kMaxDepth) unit_00AD(c, 412u, depth + 1u); else { c.pc = 0x003B75E8u; return; } if (c.pc != 0x003B7F0Cu) [[unlikely]] return; }
L_003B7F0C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[16].d[0]; c.r[3].sd[0] = static_cast<std::int32_t>(0x00420000u);  if (t) { goto L_003B7F3C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[2], c.r[2].w[0] + 28044u);
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[4].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);  if (t) { goto L_003B7F38; } }
    set32(c.r[2], c.r[2].w[0] + 28124u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B7F38u); set32(c.r[4], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_00AD(c, 372u, depth + 1u); else { c.pc = 0x003B70F0u; return; } if (c.pc != 0x003B7F38u) [[unlikely]] return; }
L_003B7F38:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00420000u);
    c.budget -= 1;
L_003B7F3C:
    set32(c.r[3], c.r[3].w[0] + 28112u);
    c.r[2].d[0] = ld64((c.r[3].w[0]));
    c.r[2].d[0] = c.r[2].d[0] + static_cast<std::uint64_t>(1ll);
    st64((c.r[3].w[0]), c.r[2].d[0]);
    c.budget -= 4;
L_003B7F4C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B7F54u);  if (depth < kMaxDepth) unit_00B4(c, 380u, depth + 1u); else { c.pc = 0x003D3B38u; return; } if (c.pc != 0x003B7F54u) [[unlikely]] return; }
L_003B7F54:
    set32(c.r[3], c.r[18].w[0] + 28252u);
    st32((c.r[3].w[0]), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    c.budget -= 3;
L_003B7F60:
    set32(c.r[2], ld32((c.r[2].w[0] + 28256u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_003B7F80; }
    c.budget -= 2;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003B7F74u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003B7F74u) [[unlikely]] return; }
L_003B7F74:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_003B7F84; } }
    c.budget -= 1;
L_003B7F80:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_003B7F84:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003B7F98:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003B7E70u | kUnwind; return; } goto L_003B7E70; }
L_003B7FB0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00B4(c, 385u, depth); }
L_003B7FC8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[16], c.r[2].w[0] + 28140u);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B7FE4u); set32(c.r[4], ld32((c.r[16].w[0])));  if (depth < kMaxDepth) unit_00AD(c, 379u, depth + 1u); else { c.pc = 0x003B71A8u; return; } if (c.pc != 0x003B7FE4u) [[unlikely]] return; }
L_003B7FE4:
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_003B7FF8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B7FF8u); set32(c.r[4], ld32((c.r[16].w[0])));  if (depth < kMaxDepth) unit_00AD(c, 375u, depth + 1u); else { c.pc = 0x003B7140u; return; } if (c.pc != 0x003B7FF8u) [[unlikely]] return; }
L_003B7FF8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B8000u);  if (depth < kMaxDepth) unit_00AD(c, 412u, depth + 1u); else { c.pc = 0x003B75E8u; return; } if (c.pc != 0x003B8000u) [[unlikely]] return; }
    [[clang::musttail]] return unit_00AE(c, 1u, depth);
}

}
