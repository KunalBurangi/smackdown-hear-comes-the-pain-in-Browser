#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_001D[4096] = {
    1, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 9, 0, 10, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 20, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0,
    0, 23, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0,
    0, 30, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 34, 0,
    35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 41, 0, 0, 0, 42, 0, 0, 0, 0, 43,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0,
    0, 46, 0, 0, 47, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 53, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 0, 0, 0, 58,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 62,
    0, 0, 0, 63, 0, 0, 64, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0, 0, 67, 0, 68,
    0, 0, 69, 0, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0,
    0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 75, 0, 76, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 78, 0, 0, 0,
    0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 81, 0, 0, 82, 0, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 84, 0,
    0, 0, 0, 0, 85, 0, 0, 0, 0, 86, 0, 87, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 90, 0, 0, 0, 0,
    91, 0, 0, 0, 0, 0, 0, 92, 0, 93, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 94, 0, 95, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 96, 0, 97, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0, 99, 0, 100, 0, 0, 101, 0, 0, 0, 0,
    102, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0,
    0, 106, 0, 0, 0, 107, 0, 108, 0, 109, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 110, 0, 111, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 115, 0, 116, 0, 0, 0,
    0, 0, 117, 0, 118, 0, 119, 0, 0, 120, 0, 0, 121, 0, 0, 122, 0, 0, 0, 0, 123, 0, 124, 0, 0, 0, 0, 0, 125, 0, 126, 0,
    127, 0, 0, 0, 0, 0, 0, 128, 0, 0, 129, 0, 0, 0, 0, 130, 0, 131, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 132,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 133, 0, 0, 134, 0, 135, 0, 136, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 137, 0, 0, 138, 0,
    0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 140, 0, 0, 141, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0,
    143, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 146, 0, 147, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 148, 0, 149, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0,
    151, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 154,
    0, 0, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 0,
    158, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 160, 0, 0, 0, 0, 0,
    161, 0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 163, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 165, 0, 166, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 0, 168, 0, 0, 0,
    0, 169, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 172,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 173, 0, 174, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 176, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 177, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 179, 0, 0, 0, 0,
    0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 182, 0, 0, 0, 183, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0, 0,
    185, 0, 0, 0, 186, 0, 0, 0, 0, 187, 0, 0, 188, 0, 0, 0, 189, 0, 0, 0, 0, 190, 0, 191, 0, 0, 0, 0, 0, 192, 0, 0,
    0, 0, 0, 0, 193, 0, 0, 0, 0, 194, 0, 195, 0, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0, 199, 0, 200, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0,
    0, 0, 0, 0, 202, 0, 0, 0, 0, 0, 203, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 204, 0, 0, 0, 205, 0, 0, 0,
    0, 206, 0, 207, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 209, 0, 0, 0,
    0, 0, 0, 0, 0, 210, 0, 0, 0, 0, 0, 211, 0, 0, 0, 0, 0, 212, 0, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 0, 0, 0,
    214, 0, 0, 0, 0, 0, 0, 0, 0, 0, 215, 0, 0, 0, 0, 0, 0, 216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 217, 0, 0, 0, 0, 218, 0, 219, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 220, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0,
    0, 0, 222, 0, 0, 0, 0, 0, 223, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 224,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 225, 0, 0, 0, 0, 0, 0, 0, 226, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 227, 0, 0, 0, 0, 0, 0, 0, 0, 228, 0, 0, 0, 0, 0, 0, 0, 0, 0, 229, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 230, 0, 0, 0, 0, 0, 0, 0, 0, 0, 231, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 232, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 233, 0, 0, 0, 0, 0, 0,
    0, 0, 234, 0, 0, 0, 235, 0, 0, 0, 0, 0, 0, 0, 0, 0, 236, 0, 0, 0, 0, 0, 0, 0, 237, 0, 0, 0, 0, 0, 0, 238,
    0, 0, 0, 0, 0, 0, 0, 0, 239, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 241, 0, 0, 0, 0, 242,
    0, 0, 0, 0, 0, 243, 0, 0, 244, 0, 0, 245, 0, 0, 0, 0, 0, 246, 0, 0, 0, 0, 247, 0, 0, 248, 0, 0, 249, 0, 0, 0,
    0, 0, 0, 0, 250, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 251, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 252, 0, 0, 0, 0, 253, 0, 0, 254, 0, 0, 255, 0, 0, 256, 0, 0, 0, 0, 0, 257, 0, 0, 0, 0, 258,
    0, 0, 259, 0, 0, 260, 0, 0, 0, 0, 0, 0, 0, 261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    262, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 263, 0, 0, 0, 0, 0, 0, 0, 0, 0, 264,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 265, 0, 266, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 267, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    268, 0, 0, 0, 0, 0, 0, 0, 269, 0, 0, 0, 0, 0, 0, 270, 0, 0, 0, 271, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    272, 0, 0, 0, 0, 0, 0, 0, 273, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 274, 0, 0, 0, 0, 0, 0, 275, 0, 0, 276, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 277, 0, 0, 0, 0, 0, 278, 0, 0, 0, 0, 0, 0, 279, 0, 0, 280, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 281, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 282, 0, 0, 0, 0, 0, 0, 0, 0, 0, 283, 0, 0,
    0, 0, 0, 0, 0, 0, 284, 0, 0, 0, 0, 0, 0, 0, 0, 0, 285, 0, 0, 0, 286, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 287, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 288, 0, 0, 0, 0, 289, 0, 0, 0, 290, 0, 0, 0, 0, 291, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    292, 0, 0, 0, 0, 0, 0, 0, 293, 0, 0, 0, 0, 0, 0, 0, 294, 0, 295, 0, 0, 0, 0, 0, 296, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 297, 0, 298, 0, 0, 0, 0, 0, 0, 0, 299, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 300, 0, 0, 0, 0, 301, 0, 0, 0, 0, 0, 0, 0, 302, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 303,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 304, 0, 0, 0, 0, 0, 0, 0, 305, 0, 0, 0, 0, 0, 0, 0,
    306, 0, 0, 0, 0, 0, 0, 307, 0, 0, 0, 308, 0, 0, 0, 0, 309, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 310, 0, 0, 0, 0, 0, 0, 0, 311, 0, 0,
    0, 0, 0, 0, 0, 312, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    313, 0, 0, 0, 0, 0, 0, 314, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 315, 0, 0, 0, 0, 0, 0, 0,
    316, 0, 0, 0, 0, 0, 0, 0, 317, 0, 0, 0, 0, 0, 0, 0, 0, 0, 318, 0, 0, 0, 319, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 320, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 321, 0, 0, 0, 322, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 323, 0, 0, 0, 0, 0, 0, 324, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 325, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 326, 0, 0, 0, 0, 0,
    0, 0, 327, 0, 0, 0, 0, 0, 0, 0, 328, 0, 0, 0, 0, 0, 0, 0, 0, 0, 329, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 330, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 331,
    0, 0, 332, 0, 0, 0, 0, 0, 333, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 334, 0, 335, 0, 0, 336,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 337, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 338, 0, 0, 0, 0, 339, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 340, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 341, 0, 0, 0, 0, 342, 0, 343, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    344, 0, 0, 0, 0, 345, 0, 0, 0, 0, 0, 0, 346, 0, 0, 0, 347, 0, 0, 0, 348, 0, 0, 0, 349, 0, 0, 0, 350, 0, 0, 0,
    351, 0, 0, 0, 0, 0, 0, 0, 0, 0, 352, 0, 0, 0, 0, 0, 0, 353, 0, 354, 0, 0, 0, 0, 0, 0, 0, 355, 0, 0, 0, 0,
    0, 0, 0, 0, 356, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 357, 0, 0, 358, 0, 0, 0, 0, 0, 359, 0, 0, 0, 0, 0, 0, 0,
    360, 0, 0, 0, 0, 361, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 362, 0, 0, 0, 0, 363, 0, 0, 0, 364, 0, 0, 0,
    0, 365, 0, 0, 0, 366, 0, 0, 0, 0, 367, 0, 0, 0, 0, 0, 0, 368, 0, 0, 0, 0, 0, 0, 369, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 370, 0, 0, 0, 0, 0, 0, 0, 0, 0, 371, 372, 0, 373, 0, 0, 0, 0, 0, 0, 0, 0, 0, 374, 0, 0, 0, 0, 0, 0,
    0, 375, 0, 0, 0, 0, 376, 0, 0, 0, 0, 377, 0, 0, 0, 0, 0, 0, 378, 0, 0, 0, 379, 0, 0, 0, 380, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 381, 0, 0, 0, 0, 382, 0, 383, 0, 0, 384, 0, 0, 0, 0, 0, 0, 0, 0, 0, 385, 0, 0, 0,
    0, 0, 0, 386, 0, 0, 387, 0, 0, 388, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 389, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 390,
    0, 0, 0, 0, 0, 0, 0, 0, 391, 0, 0, 0, 0, 0, 0, 0, 0, 0, 392, 0, 0, 0, 0, 0, 0, 0, 0, 0, 393, 0, 0, 0,
    0, 0, 394, 0, 0, 0, 0, 0, 395, 0, 0, 0, 0, 0, 396, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 397, 0, 0, 0, 0, 0,
    398, 0, 0, 0, 0, 0, 399, 0, 0, 0, 0, 0, 400, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 401, 0, 0, 0, 0, 0, 0,
    402, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 403, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 404, 0, 0, 0, 0, 0,
    405, 0, 0, 0, 406, 0, 0, 0, 0, 0, 0, 0, 407, 0, 408, 0, 0, 0, 409, 0, 0, 410, 0, 411, 0, 0, 0, 0, 0, 0, 0, 412,
    0, 0, 413, 0, 0, 0, 0, 0, 0, 0, 0, 414, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 415, 0, 0,
    416, 0, 0, 0, 0, 0, 0, 0, 0, 417, 0, 0, 418, 0, 419, 0, 0, 0, 0, 0, 0, 0, 420, 421, 0, 422, 0, 0, 0, 0, 423, 0,
    0, 0, 424, 0, 0, 0, 0, 0, 0, 0, 425, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 426, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 427, 0, 0, 428, 0, 429, 0, 0, 0, 0, 0, 0, 0, 0, 430, 0, 431, 0, 0, 0, 0, 432, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 433, 0, 434, 435, 0, 0, 0, 0, 436, 0, 0, 0, 437, 0, 0, 0, 438,
    0, 0, 0, 0, 0, 0, 0, 0, 439, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 440, 0, 0, 0, 0, 0, 0, 0, 441, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 442, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    443, 0, 0, 0, 0, 444, 0, 0, 445, 0, 0, 0, 446, 0, 0, 0, 0, 0, 0, 0, 447, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 448, 0, 0, 449, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 450, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 451, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 452, 0, 0, 0, 0, 453, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 454, 0, 0, 0, 0, 0, 0, 0,
    0, 455, 0, 0, 456, 0, 0, 0, 0, 0, 0, 0, 457, 0, 0, 0, 0, 0, 0, 0, 458, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 459,
    0, 0, 460, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 461, 0, 0, 0, 462, 0, 0, 0, 0, 463, 0, 0, 0, 0, 0, 0, 0,
    464, 0, 0, 0, 0, 0, 0, 0, 465, 0, 466, 0, 467, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 468, 0, 0, 0, 0, 0, 0, 0, 469, 0, 0, 0, 0, 0, 470, 0, 471, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 472, 0, 473, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 474, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 475, 0, 0, 0,
    0, 476, 0, 0, 0, 0, 0, 0, 0, 477, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 478, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 479, 0, 480, 0, 0, 0, 0, 481, 0, 0, 0, 0, 0, 0, 0, 0, 0, 482, 0, 0, 0, 0, 0, 483, 0, 0, 0,
};

void unit_001D(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_00174000;
    case 2u: goto L_00174008;
    case 3u: goto L_0017402C;
    case 4u: goto L_00174040;
    case 5u: goto L_00174060;
    case 6u: goto L_001740A0;
    case 7u: goto L_001740D4;
    case 8u: goto L_001740DC;
    case 9u: goto L_00174104;
    case 10u: goto L_0017410C;
    case 11u: goto L_00174118;
    case 12u: goto L_0017413C;
    case 13u: goto L_00174150;
    case 14u: goto L_0017416C;
    case 15u: goto L_001741A8;
    case 16u: goto L_001741E4;
    case 17u: goto L_0017421C;
    case 18u: goto L_0017422C;
    case 19u: goto L_0017425C;
    case 20u: goto L_0017426C;
    case 21u: goto L_001742B0;
    case 22u: goto L_001742E4;
    case 23u: goto L_00174304;
    case 24u: goto L_0017431C;
    case 25u: goto L_00174334;
    case 26u: goto L_00174370;
    case 27u: goto L_001743B0;
    case 28u: goto L_001743D0;
    case 29u: goto L_001743E0;
    case 30u: goto L_00174404;
    case 31u: goto L_00174410;
    case 32u: goto L_0017443C;
    case 33u: goto L_00174448;
    case 34u: goto L_00174478;
    case 35u: goto L_00174480;
    case 36u: goto L_001744B0;
    case 37u: goto L_001744B8;
    case 38u: goto L_001744F8;
    case 39u: goto L_00174528;
    case 40u: goto L_00174540;
    case 41u: goto L_00174558;
    case 42u: goto L_00174568;
    case 43u: goto L_0017457C;
    case 44u: goto L_001745B8;
    case 45u: goto L_001745F0;
    case 46u: goto L_00174604;
    case 47u: goto L_00174610;
    case 48u: goto L_00174620;
    case 49u: goto L_0017464C;
    case 50u: goto L_00174684;
    case 51u: goto L_001746BC;
    case 52u: goto L_001746E8;
    case 53u: goto L_001746F8;
    case 54u: goto L_00174720;
    case 55u: goto L_00174784;
    case 56u: goto L_001747AC;
    case 57u: goto L_001747D4;
    case 58u: goto L_001747FC;
    case 59u: goto L_00174824;
    case 60u: goto L_0017484C;
    case 61u: goto L_00174864;
    case 62u: goto L_0017487C;
    case 63u: goto L_0017488C;
    case 64u: goto L_00174898;
    case 65u: goto L_001748B0;
    case 66u: goto L_001748D0;
    case 67u: goto L_001748F4;
    case 68u: goto L_001748FC;
    case 69u: goto L_00174908;
    case 70u: goto L_0017492C;
    case 71u: goto L_00174944;
    case 72u: goto L_00174964;
    case 73u: goto L_00174984;
    case 74u: goto L_001749A8;
    case 75u: goto L_001749B8;
    case 76u: goto L_001749C0;
    case 77u: goto L_001749E0;
    case 78u: goto L_001749F0;
    case 79u: goto L_00174A04;
    case 80u: goto L_00174A30;
    case 81u: goto L_00174A38;
    case 82u: goto L_00174A44;
    case 83u: goto L_00174A68;
    case 84u: goto L_00174A78;
    case 85u: goto L_00174A90;
    case 86u: goto L_00174AA4;
    case 87u: goto L_00174AAC;
    case 88u: goto L_00174AB8;
    case 89u: goto L_00174ADC;
    case 90u: goto L_00174AEC;
    case 91u: goto L_00174B00;
    case 92u: goto L_00174B1C;
    case 93u: goto L_00174B24;
    case 94u: goto L_00174B6C;
    case 95u: goto L_00174B74;
    case 96u: goto L_00174BA4;
    case 97u: goto L_00174BAC;
    case 98u: goto L_00174BC8;
    case 99u: goto L_00174BD8;
    case 100u: goto L_00174BE0;
    case 101u: goto L_00174BEC;
    case 102u: goto L_00174C00;
    case 103u: goto L_00174C34;
    case 104u: goto L_00174C50;
    case 105u: goto L_00174C78;
    case 106u: goto L_00174C84;
    case 107u: goto L_00174C94;
    case 108u: goto L_00174C9C;
    case 109u: goto L_00174CA4;
    case 110u: goto L_00174CE0;
    case 111u: goto L_00174CE8;
    case 112u: goto L_00174D50;
    case 113u: goto L_00174D70;
    case 114u: goto L_00174DA0;
    case 115u: goto L_00174DE8;
    case 116u: goto L_00174DF0;
    case 117u: goto L_00174E08;
    case 118u: goto L_00174E10;
    case 119u: goto L_00174E18;
    case 120u: goto L_00174E24;
    case 121u: goto L_00174E30;
    case 122u: goto L_00174E3C;
    case 123u: goto L_00174E50;
    case 124u: goto L_00174E58;
    case 125u: goto L_00174E70;
    case 126u: goto L_00174E78;
    case 127u: goto L_00174E80;
    case 128u: goto L_00174E9C;
    case 129u: goto L_00174EA8;
    case 130u: goto L_00174EBC;
    case 131u: goto L_00174EC4;
    case 132u: goto L_00174EFC;
    case 133u: goto L_00174F24;
    case 134u: goto L_00174F30;
    case 135u: goto L_00174F38;
    case 136u: goto L_00174F40;
    case 137u: goto L_00174F6C;
    case 138u: goto L_00174F78;
    case 139u: goto L_00174F98;
    case 140u: goto L_00174FAC;
    case 141u: goto L_00174FB8;
    case 142u: goto L_00174FEC;
    case 143u: goto L_00175000;
    case 144u: goto L_00175010;
    case 145u: goto L_00175030;
    case 146u: goto L_00175064;
    case 147u: goto L_0017506C;
    case 148u: goto L_001750AC;
    case 149u: goto L_001750B4;
    case 150u: goto L_001750E8;
    case 151u: goto L_00175100;
    case 152u: goto L_00175134;
    case 153u: goto L_00175160;
    case 154u: goto L_0017517C;
    case 155u: goto L_001751A0;
    case 156u: goto L_001751B8;
    case 157u: goto L_001751E8;
    case 158u: goto L_00175200;
    case 159u: goto L_00175238;
    case 160u: goto L_00175268;
    case 161u: goto L_00175280;
    case 162u: goto L_00175294;
    case 163u: goto L_00175308;
    case 164u: goto L_00175320;
    case 165u: goto L_00175334;
    case 166u: goto L_0017533C;
    case 167u: goto L_00175354;
    case 168u: goto L_00175370;
    case 169u: goto L_00175384;
    case 170u: goto L_001753B8;
    case 171u: goto L_001753E0;
    case 172u: goto L_001753FC;
    case 173u: goto L_00175424;
    case 174u: goto L_0017542C;
    case 175u: goto L_00175460;
    case 176u: goto L_00175470;
    case 177u: goto L_001754A0;
    case 178u: goto L_001754D4;
    case 179u: goto L_001754EC;
    case 180u: goto L_00175510;
    case 181u: goto L_00175528;
    case 182u: goto L_00175540;
    case 183u: goto L_00175550;
    case 184u: goto L_00175568;
    case 185u: goto L_00175580;
    case 186u: goto L_00175590;
    case 187u: goto L_001755A4;
    case 188u: goto L_001755B0;
    case 189u: goto L_001755C0;
    case 190u: goto L_001755D4;
    case 191u: goto L_001755DC;
    case 192u: goto L_001755F4;
    case 193u: goto L_00175610;
    case 194u: goto L_00175624;
    case 195u: goto L_0017562C;
    case 196u: goto L_00175644;
    case 197u: goto L_00175660;
    case 198u: goto L_001756A4;
    case 199u: goto L_001756B4;
    case 200u: goto L_001756BC;
    case 201u: goto L_001756EC;
    case 202u: goto L_00175710;
    case 203u: goto L_00175728;
    case 204u: goto L_00175760;
    case 205u: goto L_00175770;
    case 206u: goto L_00175784;
    case 207u: goto L_0017578C;
    case 208u: goto L_001757C0;
    case 209u: goto L_001757F0;
    case 210u: goto L_00175814;
    case 211u: goto L_0017582C;
    case 212u: goto L_00175844;
    case 213u: goto L_0017585C;
    case 214u: goto L_00175880;
    case 215u: goto L_001758A8;
    case 216u: goto L_001758C4;
    case 217u: goto L_0017590C;
    case 218u: goto L_00175920;
    case 219u: goto L_00175928;
    case 220u: goto L_00175954;
    case 221u: goto L_00175964;
    case 222u: goto L_00175988;
    case 223u: goto L_001759A0;
    case 224u: goto L_001759FC;
    case 225u: goto L_00175AD0;
    case 226u: goto L_00175AF0;
    case 227u: goto L_00175B28;
    case 228u: goto L_00175B4C;
    case 229u: goto L_00175B74;
    case 230u: goto L_00175BC0;
    case 231u: goto L_00175BE8;
    case 232u: goto L_00175C10;
    case 233u: goto L_00175C64;
    case 234u: goto L_00175C88;
    case 235u: goto L_00175C98;
    case 236u: goto L_00175CC0;
    case 237u: goto L_00175CE0;
    case 238u: goto L_00175CFC;
    case 239u: goto L_00175D20;
    case 240u: goto L_00175DB0;
    case 241u: goto L_00175DE8;
    case 242u: goto L_00175DFC;
    case 243u: goto L_00175E14;
    case 244u: goto L_00175E20;
    case 245u: goto L_00175E2C;
    case 246u: goto L_00175E44;
    case 247u: goto L_00175E58;
    case 248u: goto L_00175E64;
    case 249u: goto L_00175E70;
    case 250u: goto L_00175E90;
    case 251u: goto L_00175ED0;
    case 252u: goto L_00175F18;
    case 253u: goto L_00175F2C;
    case 254u: goto L_00175F38;
    case 255u: goto L_00175F44;
    case 256u: goto L_00175F50;
    case 257u: goto L_00175F68;
    case 258u: goto L_00175F7C;
    case 259u: goto L_00175F88;
    case 260u: goto L_00175F94;
    case 261u: goto L_00175FB4;
    case 262u: goto L_00176000;
    case 263u: goto L_00176054;
    case 264u: goto L_0017607C;
    case 265u: goto L_001760A4;
    case 266u: goto L_001760AC;
    case 267u: goto L_001760D8;
    case 268u: goto L_00176100;
    case 269u: goto L_00176120;
    case 270u: goto L_0017613C;
    case 271u: goto L_0017614C;
    case 272u: goto L_00176180;
    case 273u: goto L_001761A0;
    case 274u: goto L_00176210;
    case 275u: goto L_0017622C;
    case 276u: goto L_00176238;
    case 277u: goto L_00176284;
    case 278u: goto L_0017629C;
    case 279u: goto L_001762B8;
    case 280u: goto L_001762C4;
    case 281u: goto L_00176320;
    case 282u: goto L_0017634C;
    case 283u: goto L_00176374;
    case 284u: goto L_00176398;
    case 285u: goto L_001763C0;
    case 286u: goto L_001763D0;
    case 287u: goto L_0017640C;
    case 288u: goto L_00176440;
    case 289u: goto L_00176454;
    case 290u: goto L_00176464;
    case 291u: goto L_00176478;
    case 292u: goto L_00176500;
    case 293u: goto L_00176520;
    case 294u: goto L_00176540;
    case 295u: goto L_00176548;
    case 296u: goto L_00176560;
    case 297u: goto L_00176588;
    case 298u: goto L_00176590;
    case 299u: goto L_001765B0;
    case 300u: goto L_00176694;
    case 301u: goto L_001766A8;
    case 302u: goto L_001766C8;
    case 303u: goto L_001766FC;
    case 304u: goto L_00176740;
    case 305u: goto L_00176760;
    case 306u: goto L_00176780;
    case 307u: goto L_0017679C;
    case 308u: goto L_001767AC;
    case 309u: goto L_001767C0;
    case 310u: goto L_00176854;
    case 311u: goto L_00176874;
    case 312u: goto L_00176894;
    case 313u: goto L_00176900;
    case 314u: goto L_0017691C;
    case 315u: goto L_00176960;
    case 316u: goto L_00176980;
    case 317u: goto L_001769A0;
    case 318u: goto L_001769C8;
    case 319u: goto L_001769D8;
    case 320u: goto L_00176A28;
    case 321u: goto L_00176A84;
    case 322u: goto L_00176A94;
    case 323u: goto L_00176AC8;
    case 324u: goto L_00176AE4;
    case 325u: goto L_00176B24;
    case 326u: goto L_00176B68;
    case 327u: goto L_00176B88;
    case 328u: goto L_00176BA8;
    case 329u: goto L_00176BD0;
    case 330u: goto L_00176C2C;
    case 331u: goto L_00176C7C;
    case 332u: goto L_00176C88;
    case 333u: goto L_00176CA0;
    case 334u: goto L_00176CE8;
    case 335u: goto L_00176CF0;
    case 336u: goto L_00176CFC;
    case 337u: goto L_00176D74;
    case 338u: goto L_00176E0C;
    case 339u: goto L_00176E20;
    case 340u: goto L_00176E60;
    case 341u: goto L_00176EDC;
    case 342u: goto L_00176EF0;
    case 343u: goto L_00176EF8;
    case 344u: goto L_00176F80;
    case 345u: goto L_00176F94;
    case 346u: goto L_00176FB0;
    case 347u: goto L_00176FC0;
    case 348u: goto L_00176FD0;
    case 349u: goto L_00176FE0;
    case 350u: goto L_00176FF0;
    case 351u: goto L_00177000;
    case 352u: goto L_00177028;
    case 353u: goto L_00177044;
    case 354u: goto L_0017704C;
    case 355u: goto L_0017706C;
    case 356u: goto L_00177090;
    case 357u: goto L_001770BC;
    case 358u: goto L_001770C8;
    case 359u: goto L_001770E0;
    case 360u: goto L_00177100;
    case 361u: goto L_00177114;
    case 362u: goto L_0017714C;
    case 363u: goto L_00177160;
    case 364u: goto L_00177170;
    case 365u: goto L_00177184;
    case 366u: goto L_00177194;
    case 367u: goto L_001771A8;
    case 368u: goto L_001771C4;
    case 369u: goto L_001771E0;
    case 370u: goto L_00177208;
    case 371u: goto L_00177230;
    case 372u: goto L_00177234;
    case 373u: goto L_0017723C;
    case 374u: goto L_00177264;
    case 375u: goto L_00177284;
    case 376u: goto L_00177298;
    case 377u: goto L_001772AC;
    case 378u: goto L_001772C8;
    case 379u: goto L_001772D8;
    case 380u: goto L_001772E8;
    case 381u: goto L_00177320;
    case 382u: goto L_00177334;
    case 383u: goto L_0017733C;
    case 384u: goto L_00177348;
    case 385u: goto L_00177370;
    case 386u: goto L_0017738C;
    case 387u: goto L_00177398;
    case 388u: goto L_001773A4;
    case 389u: goto L_001773D0;
    case 390u: goto L_001773FC;
    case 391u: goto L_00177420;
    case 392u: goto L_00177448;
    case 393u: goto L_00177470;
    case 394u: goto L_00177488;
    case 395u: goto L_001774A0;
    case 396u: goto L_001774B8;
    case 397u: goto L_001774E8;
    case 398u: goto L_00177500;
    case 399u: goto L_00177518;
    case 400u: goto L_00177530;
    case 401u: goto L_00177564;
    case 402u: goto L_00177580;
    case 403u: goto L_001775B0;
    case 404u: goto L_001775E8;
    case 405u: goto L_00177600;
    case 406u: goto L_00177610;
    case 407u: goto L_00177630;
    case 408u: goto L_00177638;
    case 409u: goto L_00177648;
    case 410u: goto L_00177654;
    case 411u: goto L_0017765C;
    case 412u: goto L_0017767C;
    case 413u: goto L_00177688;
    case 414u: goto L_001776AC;
    case 415u: goto L_001776F4;
    case 416u: goto L_00177700;
    case 417u: goto L_00177724;
    case 418u: goto L_00177730;
    case 419u: goto L_00177738;
    case 420u: goto L_00177758;
    case 421u: goto L_0017775C;
    case 422u: goto L_00177764;
    case 423u: goto L_00177778;
    case 424u: goto L_00177788;
    case 425u: goto L_001777A8;
    case 426u: goto L_001777D4;
    case 427u: goto L_0017781C;
    case 428u: goto L_00177828;
    case 429u: goto L_00177830;
    case 430u: goto L_00177854;
    case 431u: goto L_0017785C;
    case 432u: goto L_00177870;
    case 433u: goto L_001778BC;
    case 434u: goto L_001778C4;
    case 435u: goto L_001778C8;
    case 436u: goto L_001778DC;
    case 437u: goto L_001778EC;
    case 438u: goto L_001778FC;
    case 439u: goto L_00177920;
    case 440u: goto L_00177958;
    case 441u: goto L_00177978;
    case 442u: goto L_001779B4;
    case 443u: goto L_00177A00;
    case 444u: goto L_00177A14;
    case 445u: goto L_00177A20;
    case 446u: goto L_00177A30;
    case 447u: goto L_00177A50;
    case 448u: goto L_00177A90;
    case 449u: goto L_00177A9C;
    case 450u: goto L_00177B10;
    case 451u: goto L_00177B50;
    case 452u: goto L_00177B90;
    case 453u: goto L_00177BA4;
    case 454u: goto L_00177BE0;
    case 455u: goto L_00177C04;
    case 456u: goto L_00177C10;
    case 457u: goto L_00177C30;
    case 458u: goto L_00177C50;
    case 459u: goto L_00177C7C;
    case 460u: goto L_00177C88;
    case 461u: goto L_00177CBC;
    case 462u: goto L_00177CCC;
    case 463u: goto L_00177CE0;
    case 464u: goto L_00177D00;
    case 465u: goto L_00177D20;
    case 466u: goto L_00177D28;
    case 467u: goto L_00177D30;
    case 468u: goto L_00177DAC;
    case 469u: goto L_00177DCC;
    case 470u: goto L_00177DE4;
    case 471u: goto L_00177DEC;
    case 472u: goto L_00177E70;
    case 473u: goto L_00177E78;
    case 474u: goto L_00177EA4;
    case 475u: goto L_00177EF0;
    case 476u: goto L_00177F04;
    case 477u: goto L_00177F24;
    case 478u: goto L_00177F50;
    case 479u: goto L_00177F94;
    case 480u: goto L_00177F9C;
    case 481u: goto L_00177FB0;
    case 482u: goto L_00177FD8;
    case 483u: goto L_00177FF0;
    default: bad_entry(c, 0x00174000u); return;
    }
L_00174000:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00174008u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_001C(c, 256u, depth + 1u); else { c.pc = 0x00172F00u; return; } if (c.pc != 0x00174008u) [[unlikely]] return; }
L_00174008:
    set32(c.r[3], c.r[16].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld16((c.r[2].w[0] + 26u));
    c.budget -= 5;
    { const bool t = c.r[22].d[0] != c.r[2].d[0];  if (t) { goto L_001740D0; } }
    set32(c.r[4], ld32((c.r[21].w[0])));
    c.r[5].d[0] = c.r[23].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017402Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_001C(c, 315u, depth + 1u); else { c.pc = 0x00173630u; return; } if (c.pc != 0x0017402Cu) [[unlikely]] return; }
L_0017402C:
    set32(c.r[4], ld32((c.r[21].w[0])));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[23].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00174040u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_001C(c, 315u, depth + 1u); else { c.pc = 0x00173630u; return; } if (c.pc != 0x00174040u) [[unlikely]] return; }
L_00174040:
    c.r[22].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u + 25500u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == c.r[2].d[0];  if (t) { goto L_00174084; } }
    set32(c.r[4], ld32((c.r[21].w[0])));
    set32(c.r[6], ld32((c.r[20].w[0])));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00174060u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_001D(c, 21u, depth + 1u); else { c.pc = 0x001742B0u; return; } if (c.pc != 0x00174060u) [[unlikely]] return; }
L_00174060:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00174084; } }
    set32(c.r[2], ld32((c.r[20].w[0])));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 25500u);  if (t) { goto L_00174088; } }
    set32(c.r[2], c.r[19].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[19], c.r[19].w[0] + 1u);
    st32((c.r[2].w[0] + 368u), c.r[16].w[0]);
    c.budget -= 4;
L_00174084:
    set32(c.r[2], 0u + 25500u);
    c.budget -= 1;
L_00174088:
    c.budget -= 2;
    { const bool t = c.r[22].d[0] == c.r[2].d[0]; set32(c.r[2], c.r[23].w[0] + 1u);  if (t) { goto L_001740C4; } }
    set32(c.r[4], ld32((c.r[21].w[0])));
    set32(c.r[6], ld32((c.r[20].w[0])));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001740A0u); c.r[5].d[0] = c.r[22].d[0] + 0ull;  if (depth < kMaxDepth) unit_001D(c, 21u, depth + 1u); else { c.pc = 0x001742B0u; return; } if (c.pc != 0x001740A0u) [[unlikely]] return; }
L_001740A0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001740C0; } }
    set32(c.r[2], ld32((c.r[20].w[0])));
    c.budget -= 3;
    { const bool t = c.r[22].d[0] == c.r[2].d[0]; set32(c.r[2], c.r[19].w[0] << 2);  if (t) { goto L_001740C0; } }
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[19], c.r[19].w[0] + 1u);
    st32((c.r[2].w[0] + 368u), c.r[22].w[0]);
    c.budget -= 3;
L_001740C0:
    set32(c.r[2], c.r[23].w[0] + 1u);
    c.budget -= 1;
L_001740C4:
    c.r[23].d[0] = c.r[2].d[0] << 56;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[23].d[0] = static_cast<std::uint64_t>(c.r[23].sd[0] >> 56);  if (t) { goto L_001740EC; } }
L_001740D0:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_001740D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001740DCu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_001C(c, 256u, depth + 1u); else { c.pc = 0x00172F00u; return; } if (c.pc != 0x001740DCu) [[unlikely]] return; }
L_001740DC:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 22u)));
    c.r[2].d[0] = c.r[16].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00173FFCu | kUnwind; return; } [[clang::musttail]] return unit_001C(c, 370u, depth); } }
L_001740EC:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].sd[0] < 27ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00173FF4u | kUnwind; return; } [[clang::musttail]] return unit_001C(c, 369u, depth); } }
    c.r[23].d[0] = 0ull + 0ull;
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_00174104:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_001741DC; } }
L_0017410C:
    set32(c.r[22], ld32((c.r[20].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00174118u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_001C(c, 256u, depth + 1u); else { c.pc = 0x00172F00u; return; } if (c.pc != 0x00174118u) [[unlikely]] return; }
L_00174118:
    set32(c.r[3], c.r[16].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld16((c.r[2].w[0] + 26u));
    c.budget -= 5;
    { const bool t = c.r[22].d[0] != c.r[2].d[0];  if (t) { goto L_001741D8; } }
    set32(c.r[4], ld32((c.r[20].w[0])));
    c.r[5].d[0] = c.r[23].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017413Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_001C(c, 315u, depth + 1u); else { c.pc = 0x00173630u; return; } if (c.pc != 0x0017413Cu) [[unlikely]] return; }
L_0017413C:
    set32(c.r[4], ld32((c.r[20].w[0])));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[23].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00174150u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_001C(c, 315u, depth + 1u); else { c.pc = 0x00173630u; return; } if (c.pc != 0x00174150u) [[unlikely]] return; }
L_00174150:
    set32(c.r[3], 0u + 25500u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[3].d[0]; c.r[22].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0017418C; } }
    set32(c.r[4], ld32((c.r[21].w[0])));
    set32(c.r[6], ld32((c.r[20].w[0])));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017416Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_001D(c, 21u, depth + 1u); else { c.pc = 0x001742B0u; return; } if (c.pc != 0x0017416Cu) [[unlikely]] return; }
L_0017416C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], 0u + 25500u);  if (t) { goto L_00174190; } }
    set32(c.r[3], ld32((c.r[21].w[0])));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[3].d[0]; set32(c.r[3], c.r[18].w[0] << 2);  if (t) { goto L_0017418C; } }
    set32(c.r[3], c.r[3].w[0] + c.r[29].w[0]);
    set32(c.r[18], c.r[18].w[0] + 1u);
    st32((c.r[3].w[0] + 144u), c.r[16].w[0]);
    c.budget -= 3;
L_0017418C:
    set32(c.r[3], 0u + 25500u);
    c.budget -= 1;
L_00174190:
    c.budget -= 2;
    { const bool t = c.r[22].d[0] == c.r[3].d[0]; set32(c.r[3], c.r[23].w[0] + 1u);  if (t) { goto L_001741CC; } }
    set32(c.r[4], ld32((c.r[21].w[0])));
    set32(c.r[6], ld32((c.r[20].w[0])));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001741A8u); c.r[5].d[0] = c.r[22].d[0] + 0ull;  if (depth < kMaxDepth) unit_001D(c, 21u, depth + 1u); else { c.pc = 0x001742B0u; return; } if (c.pc != 0x001741A8u) [[unlikely]] return; }
L_001741A8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001741C8; } }
    set32(c.r[3], ld32((c.r[21].w[0])));
    c.budget -= 3;
    { const bool t = c.r[22].d[0] == c.r[3].d[0]; set32(c.r[3], c.r[18].w[0] << 2);  if (t) { goto L_001741C8; } }
    set32(c.r[3], c.r[3].w[0] + c.r[29].w[0]);
    set32(c.r[18], c.r[18].w[0] + 1u);
    st32((c.r[3].w[0] + 144u), c.r[22].w[0]);
    c.budget -= 3;
L_001741C8:
    set32(c.r[3], c.r[23].w[0] + 1u);
    c.budget -= 1;
L_001741CC:
    c.r[23].d[0] = c.r[3].d[0] << 56;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[23].d[0] = static_cast<std::uint64_t>(c.r[23].sd[0] >> 56);  if (t) { goto L_001741F4; } }
L_001741D8:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_001741DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001741E4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_001C(c, 256u, depth + 1u); else { c.pc = 0x00172F00u; return; } if (c.pc != 0x001741E4u) [[unlikely]] return; }
L_001741E4:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 22u)));
    c.r[3].d[0] = c.r[16].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0017410Cu | kUnwind; return; } goto L_0017410C; } }
L_001741F4:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[3].d[0] = c.r[17].sd[0] < 27ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00174104u | kUnwind; return; } goto L_00174104; } }
    c.budget -= 2;
    { const bool t = c.r[19].sd[0] > 0; set32(c.r[3], 0u + 25500u);  if (t) { goto L_00174214; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[21].w[0]), c.r[3].w[0]);  if (t) { goto L_00174244; } }
L_00174214:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017421Cu);  if (depth < kMaxDepth) unit_0010(c, 15u, depth + 1u); else { c.pc = 0x00140210u; return; } if (c.pc != 0x0017421Cu) [[unlikely]] return; }
L_0017421C:
    c.r[5].d[0] = c.r[19].d[0] << 32;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017422Cu); c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 32);  if (depth < kMaxDepth) unit_0006(c, 228u, depth + 1u); else { c.pc = 0x0011B928u; return; } if (c.pc != 0x0017422Cu) [[unlikely]] return; }
L_0017422C:
    c.r[3].d[0] = c.r[2].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[29].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 368u)));
    st32((c.r[21].w[0]), c.r[3].w[0]);
    c.budget -= 6;
L_00174244:
    c.budget -= 2;
    { const bool t = c.r[18].sd[0] > 0; set32(c.r[3], 0u + 25500u);  if (t) { goto L_00174254; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0]), c.r[3].w[0]);  if (t) { goto L_00174284; } }
L_00174254:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017425Cu);  if (depth < kMaxDepth) unit_0010(c, 15u, depth + 1u); else { c.pc = 0x00140210u; return; } if (c.pc != 0x0017425Cu) [[unlikely]] return; }
L_0017425C:
    c.r[5].d[0] = c.r[18].d[0] << 32;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017426Cu); c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 32);  if (depth < kMaxDepth) unit_0006(c, 228u, depth + 1u); else { c.pc = 0x0011B928u; return; } if (c.pc != 0x0017426Cu) [[unlikely]] return; }
L_0017426C:
    c.r[3].d[0] = c.r[2].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[29].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 144u)));
    st32((c.r[20].w[0]), c.r[3].w[0]);
    c.budget -= 6;
L_00174284:
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 592u);  c.pc = t; return; }
L_001742B0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.r[4].d[0] = c.r[4].d[0] & 65535ull;
    c.r[5].d[0] = c.r[5].d[0] & 65535ull;
    c.r[6].d[0] = c.r[6].d[0] & 65535ull;
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001742E4u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_001C(c, 285u, depth + 1u); else { c.pc = 0x00173260u; return; } if (c.pc != 0x001742E4u) [[unlikely]] return; }
L_001742E4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[19].d[0] & 65535ull;  if (t) { goto L_001742F4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00174350; } }
L_001742F4:
    c.r[5].d[0] = c.r[17].d[0] & 65535ull;
    set32(c.r[6], 0u + 25500u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00174304u); c.r[16].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_001C(c, 285u, depth + 1u); else { c.pc = 0x00173260u; return; } if (c.pc != 0x00174304u) [[unlikely]] return; }
L_00174304:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[17].d[0] & 65535ull;  if (t) { goto L_00174310; } }
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_00174310:
    c.r[4].d[0] = c.r[18].d[0] & 65535ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017431Cu); set32(c.r[6], 0u + 25500u);  if (depth < kMaxDepth) unit_001C(c, 285u, depth + 1u); else { c.pc = 0x00173260u; return; } if (c.pc != 0x0017431Cu) [[unlikely]] return; }
L_0017431C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[19].d[0] & 65535ull;  if (t) { goto L_00174328; } }
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_00174328:
    c.r[5].d[0] = c.r[18].d[0] & 65535ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00174334u); set32(c.r[6], 0u + 25500u);  if (depth < kMaxDepth) unit_001C(c, 285u, depth + 1u); else { c.pc = 0x00173260u; return; } if (c.pc != 0x00174334u) [[unlikely]] return; }
L_00174334:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00174340; } }
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_00174340:
    c.r[2].d[0] = c.r[16].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00174350; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_00174350:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00174370:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0017439C; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 22u)));
    set32(c.r[4], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == c.r[4].d[0];  if (t) { goto L_001743A4; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0017439C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_001743D4; } }
L_001743A4:
    c.r[6].d[0] = ld16((c.r[16].w[0] + 28u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001743B0u); c.r[5].d[0] = ld16((c.r[16].w[0] + 26u));  if (depth < kMaxDepth) unit_0089(c, 77u, depth + 1u); else { c.pc = 0x003249B0u; return; } if (c.pc != 0x001743B0u) [[unlikely]] return; }
L_001743B0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001743C0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_001743D0; } }
L_001743C0:
    c.r[5].d[0] = ld16((c.r[16].w[0] + 26u));
    c.r[6].d[0] = ld16((c.r[16].w[0] + 28u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001743D0u); set32(c.r[4], 0u + 3u);  if (depth < kMaxDepth) unit_0089(c, 77u, depth + 1u); else { c.pc = 0x003249B0u; return; } if (c.pc != 0x001743D0u) [[unlikely]] return; }
L_001743D0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_001743D4:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001743E0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00174404u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000C(c, 12u, depth + 1u); else { c.pc = 0x001300B0u; return; } if (c.pc != 0x00174404u) [[unlikely]] return; }
L_00174404:
    set32(c.r[4], c.r[18].w[0] + 40u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00174410u); set32(c.r[5], 0u + 5u);  if (depth < kMaxDepth) unit_000F(c, 264u, depth + 1u); else { c.pc = 0x0013E560u; return; } if (c.pc != 0x00174410u) [[unlikely]] return; }
L_00174410:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] - 15776u);
    set32(c.r[3], c.r[3].w[0] - 15688u);
    st32((c.r[18].w[0]), c.r[2].w[0]);
    set32(c.r[4], 0u + 9u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    st32((c.r[18].w[0] + 20u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] - 15628u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017443Cu); st32((c.r[18].w[0] + 40u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x0017443Cu) [[unlikely]] return; }
L_0017443C:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00174448u); set32(c.r[4], 0u + 8u);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x00174448u) [[unlikely]] return; }
L_00174448:
    ld128((c.r[2].w[0]) & ~15u, c.r[3]);
    st128((c.r[18].w[0] + 80u) & ~15u, c.r[3]);
    set32(c.r[2], 0u + 30u);
    ld128((c.r[17].w[0]) & ~15u, c.r[3]);
    st128((c.r[18].w[0] + 96u) & ~15u, c.r[3]);
    st32((c.r[18].w[0] + 132u), c.r[2].w[0]);
    st32((c.r[18].w[0] + 128u), 0u);
    st32((c.r[18].w[0] + 140u), 0u);
    st8((c.r[18].w[0] + 136u), static_cast<std::uint8_t>(0u));
    ld128((c.r[18].w[0] + 80u) & ~15u, c.r[2]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00174478u); st128((c.r[18].w[0] + 112u) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_001D(c, 405u, depth + 1u); else { c.pc = 0x00177600u; return; } if (c.pc != 0x00174478u) [[unlikely]] return; }
L_00174478:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00174480u); set32(c.r[17], ld32((c.r[2].w[0] + 60u)));  if (depth < kMaxDepth) unit_001D(c, 405u, depth + 1u); else { c.pc = 0x00177600u; return; } if (c.pc != 0x00174480u) [[unlikely]] return; }
L_00174480:
    set32(c.r[3], ld32((c.r[2].w[0] + 32u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_001744A4; } }
    set32(c.r[2], c.r[17].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[5], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 6;
L_001744A4:
    set32(c.r[4], c.r[18].w[0] + 148u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001744B0u); set32(c.r[6], 0u + 38u);  if (depth < kMaxDepth) unit_0010(c, 107u, depth + 1u); else { c.pc = 0x001415A0u; return; } if (c.pc != 0x001744B0u) [[unlikely]] return; }
L_001744B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001744B8u);  if (depth < kMaxDepth) unit_001D(c, 405u, depth + 1u); else { c.pc = 0x00177600u; return; } if (c.pc != 0x001744B8u) [[unlikely]] return; }
L_001744B8:
    set32(c.r[3], ld32((c.r[2].w[0] + 32u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001744E0; } }
    set32(c.r[2], c.r[17].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);  if (t) { goto L_001744E4; } }
L_001744E0:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001744E4:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 22u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00174534; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001744F8u);  if (depth < kMaxDepth) unit_001D(c, 405u, depth + 1u); else { c.pc = 0x00177600u; return; } if (c.pc != 0x001744F8u) [[unlikely]] return; }
L_001744F8:
    set32(c.r[3], ld32((c.r[2].w[0] + 32u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_0017451C; } }
    set32(c.r[2], c.r[17].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[4], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 6;
L_0017451C:
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00174528u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_001C(c, 260u, depth + 1u); else { c.pc = 0x00172FC0u; return; } if (c.pc != 0x00174528u) [[unlikely]] return; }
L_00174528:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 203u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00174538; } }
L_00174534:
    st8((c.r[18].w[0] + 203u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_00174538:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00174540u); set32(c.r[4], 0u + 160u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00174540u) [[unlikely]] return; }
L_00174540:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].sd[0] = static_cast<std::int32_t>(0x00410000u);  if (t) { goto L_00174558; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 2944u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00174558u); set32(c.r[6], 0u + 3u);  if (depth < kMaxDepth) unit_001E(c, 336u, depth + 1u); else { c.pc = 0x0017AAE0u; return; } if (c.pc != 0x00174558u) [[unlikely]] return; }
L_00174558:
    st32((c.r[18].w[0] + 52u), c.r[2].w[0]);
    set32(c.r[4], 0u + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00174568u); st32((c.r[18].w[0] + 56u), 0u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00174568u) [[unlikely]] return; }
L_00174568:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_001745BC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017457Cu);  if (depth < kMaxDepth) unit_001D(c, 405u, depth + 1u); else { c.pc = 0x00177600u; return; } if (c.pc != 0x0017457Cu) [[unlikely]] return; }
L_0017457C:
    set32(c.r[4], ld32((c.r[2].w[0] + 32u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_001745A4; } }
    set32(c.r[3], ld32((c.r[2].w[0] + 60u)));
    set32(c.r[2], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[5], c.r[4].w[0] + c.r[2].w[0]);
    c.budget -= 7;
L_001745A4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001745B8u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_001D(c, 251u, depth + 1u); else { c.pc = 0x00175ED0u; return; } if (c.pc != 0x001745B8u) [[unlikely]] return; }
L_001745B8:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001745BC:
    st32((c.r[18].w[0] + 60u), c.r[16].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00410000u);
    set32(c.r[3], ld32((c.r[18].w[0] + 60u)));
    set32(c.r[6], 0u + 30u);
    set32(c.r[2], c.r[2].w[0] + 2976u);
    set32(c.r[5], c.r[29].w[0] + 64u);
    set32(c.r[4], 0u + 36u);
    st32((c.r[3].w[0] + 28u), c.r[6].w[0]);
    ld128((c.r[2].w[0]) & ~15u, c.r[3]);
    c.r[2].d[0] = ld64((c.r[2].w[0] + 16u));
    st128((c.r[5].w[0]) & ~15u, c.r[3]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001745F0u); st64((c.r[5].w[0] + 16u), c.r[2].d[0]);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x001745F0u) [[unlikely]] return; }
L_001745F0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00174604; } }
    set32(c.r[5], c.r[29].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00174604u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0049(c, 268u, depth + 1u); else { c.pc = 0x00227540u; return; } if (c.pc != 0x00174604u) [[unlikely]] return; }
L_00174604:
    st32((c.r[18].w[0] + 72u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00174610u); set32(c.r[4], 0u + 36u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00174610u) [[unlikely]] return; }
L_00174610:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00174620; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00174620u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0049(c, 271u, depth + 1u); else { c.pc = 0x002275A0u; return; } if (c.pc != 0x00174620u) [[unlikely]] return; }
L_00174620:
    st32((c.r[18].w[0] + 68u), c.r[2].w[0]);
    st32((c.r[18].w[0] + 64u), 0u);
    set32(c.r[2], 0u + 1u);
    st32((c.r[18].w[0] + 144u), 0u);
    st32((c.r[18].w[0] + 188u), 0u);
    st8((c.r[18].w[0] + 192u), static_cast<std::uint8_t>(0u));
    st32((c.r[18].w[0] + 196u), 0u);
    st8((c.r[18].w[0] + 200u), static_cast<std::uint8_t>(0u));
    st8((c.r[18].w[0] + 201u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017464Cu); st8((c.r[18].w[0] + 202u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_001D(c, 405u, depth + 1u); else { c.pc = 0x00177600u; return; } if (c.pc != 0x0017464Cu) [[unlikely]] return; }
L_0017464C:
    set32(c.r[3], ld32((c.r[2].w[0] + 12u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0017467C; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 28u)));
    set32(c.r[3], 0u + 1u);
    st8((c.r[2].w[0] + 8u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[18].w[0] + 28u)));
    st8((c.r[2].w[0] + 16u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[18].w[0] + 28u)));
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 32u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001746D8; } }
L_0017467C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00174684u);  if (depth < kMaxDepth) unit_001D(c, 405u, depth + 1u); else { c.pc = 0x00177600u; return; } if (c.pc != 0x00174684u) [[unlikely]] return; }
L_00174684:
    set32(c.r[4], ld32((c.r[2].w[0] + 32u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001746B0; } }
    set32(c.r[3], ld32((c.r[2].w[0] + 60u)));
    set32(c.r[2], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);  if (t) { goto L_001746B4; } }
L_001746B0:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001746B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001746BCu);  if (depth < kMaxDepth) unit_001D(c, 26u, depth + 1u); else { c.pc = 0x00174370u; return; } if (c.pc != 0x001746BCu) [[unlikely]] return; }
L_001746BC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001746D8; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 28u)));
    set32(c.r[3], 0u + 1u);
    st8((c.r[2].w[0] + 8u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[18].w[0] + 28u)));
    st8((c.r[2].w[0] + 16u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 5;
L_001746D8:
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001746E8u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001746E8u) [[unlikely]] return; }
L_001746E8:
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001746F8u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001746F8u) [[unlikely]] return; }
L_001746F8:
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_00174720:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001748B0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] - 15776u);
    set32(c.r[3], c.r[3].w[0] - 15688u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    st32((c.r[17].w[0] + 20u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] - 15628u);
    st32((c.r[17].w[0] + 40u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 52u)));
    c.budget -= 12;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00174784; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00174784; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00174784u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00174784u) [[unlikely]] return; }
L_00174784:
    st32((c.r[17].w[0] + 52u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 56u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001747AC; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001747AC; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001747ACu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001747ACu) [[unlikely]] return; }
L_001747AC:
    st32((c.r[17].w[0] + 56u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 60u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001747D4; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001747D4; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 44u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001747D4u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001747D4u) [[unlikely]] return; }
L_001747D4:
    st32((c.r[17].w[0] + 60u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 64u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001747FC; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001747FC; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001747FCu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001747FCu) [[unlikely]] return; }
L_001747FC:
    st32((c.r[17].w[0] + 64u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 68u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00174824; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00174824; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00174824u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00174824u) [[unlikely]] return; }
L_00174824:
    st32((c.r[17].w[0] + 68u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 72u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0017484C; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0017484C; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0017484Cu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0017484Cu) [[unlikely]] return; }
L_0017484C:
    st32((c.r[17].w[0] + 72u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 144u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00174864; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00174864u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100210u; return; } if (c.pc != 0x00174864u) [[unlikely]] return; }
L_00174864:
    st32((c.r[17].w[0] + 144u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 196u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0017487C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017487Cu);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100210u; return; } if (c.pc != 0x0017487Cu) [[unlikely]] return; }
L_0017487C:
    set32(c.r[4], c.r[17].w[0] + 40u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017488Cu); st32((c.r[17].w[0] + 196u), 0u);  if (depth < kMaxDepth) unit_000F(c, 266u, depth + 1u); else { c.pc = 0x0013E5B0u; return; } if (c.pc != 0x0017488Cu) [[unlikely]] return; }
L_0017488C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00174898u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000C(c, 15u, depth + 1u); else { c.pc = 0x00130130u; return; } if (c.pc != 0x00174898u) [[unlikely]] return; }
L_00174898:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_001748B4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001748B0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x001748B0u) [[unlikely]] return; }
L_001748B0:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001748B4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001748D0:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001748F4u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_000C(c, 25u, depth + 1u); else { c.pc = 0x00130270u; return; } if (c.pc != 0x001748F4u) [[unlikely]] return; }
L_001748F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001748FCu);  if (depth < kMaxDepth) unit_001D(c, 405u, depth + 1u); else { c.pc = 0x00177600u; return; } if (c.pc != 0x001748FCu) [[unlikely]] return; }
L_001748FC:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00174908u); set32(c.r[5], 0u + 181u);  if (depth < kMaxDepth) unit_001D(c, 454u, depth + 1u); else { c.pc = 0x00177BE0u; return; } if (c.pc != 0x00174908u) [[unlikely]] return; }
L_00174908:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00410000u);
    set32(c.r[5], c.r[29].w[0] + 96u);
    set32(c.r[2], c.r[2].w[0] + 3008u);
    ld128((c.r[2].w[0]) & ~15u, c.r[3]);
    c.r[2].d[0] = ld64((c.r[2].w[0] + 16u));
    st128((c.r[5].w[0]) & ~15u, c.r[3]);
    st64((c.r[5].w[0] + 16u), c.r[2].d[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017492Cu); set32(c.r[4], ld32((c.r[20].w[0] + 68u)));  if (depth < kMaxDepth) unit_0049(c, 280u, depth + 1u); else { c.pc = 0x002276C0u; return; } if (c.pc != 0x0017492Cu) [[unlikely]] return; }
L_0017492C:
    st8((c.r[20].w[0] + 201u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 26392u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x6D6E0000u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00174944u); c.r[5].d[0] = c.r[2].d[0] | 21335ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x00174944u) [[unlikely]] return; }
L_00174944:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_00174950; } }
    set32(c.r[19], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 1;
L_00174950:
    set32(c.r[2], ld32((c.r[20].w[0] + 60u)));
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[18], ld32((c.r[2].w[0] + 20u)));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0017498C; } }
L_00174964:
    set32(c.r[2], 0u + 25500u);
    set32(c.r[3], c.r[18].w[0] + c.r[3].w[0]);
    c.r[7].d[0] = ld16((c.r[3].w[0] + 26u));
    c.budget -= 5;
    { const bool t = c.r[7].d[0] == c.r[2].d[0]; c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_00174984; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00174984u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0053(c, 87u, depth + 1u); else { c.pc = 0x0024C8E0u; return; } if (c.pc != 0x00174984u) [[unlikely]] return; }
L_00174984:
    set32(c.r[17], c.r[17].w[0] + 1u);
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 2;
L_0017498C:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 22u)));
    c.r[2].d[0] = c.r[16].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], c.r[16].w[0] << 1);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00174964u | kUnwind; return; } goto L_00174964; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001749A8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0053(c, 90u, depth + 1u); else { c.pc = 0x0024C940u; return; } if (c.pc != 0x001749A8u) [[unlikely]] return; }
L_001749A8:
    set32(c.r[4], ld32((c.r[20].w[0] + 52u)));
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001749B8u); set32(c.r[6], 0u + 3u);  if (depth < kMaxDepth) unit_001E(c, 331u, depth + 1u); else { c.pc = 0x0017A9F0u; return; } if (c.pc != 0x001749B8u) [[unlikely]] return; }
L_001749B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001749C0u); set32(c.r[4], 0u + 11u);  if (depth < kMaxDepth) unit_0076(c, 191u, depth + 1u); else { c.pc = 0x002D9970u; return; } if (c.pc != 0x001749C0u) [[unlikely]] return; }
L_001749C0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_001749E0:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x00130260u | kUnwind; return; } [[clang::musttail]] return unit_000C(c, 24u, depth); }
L_001749F0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00174A04u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_000C(c, 26u, depth + 1u); else { c.pc = 0x00130280u; return; } if (c.pc != 0x00174A04u) [[unlikely]] return; }
L_00174A04:
    set32(c.r[2], ld32((c.r[16].w[0] + 24u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 24u)));
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x00460000u);  if (t) { goto L_00174A44; } }
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + 3952u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00174000u < 16384u) { entry = entries_001D[(t - 0x00174000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00174A30:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00174A38u);  if (depth < kMaxDepth) unit_001D(c, 405u, depth + 1u); else { c.pc = 0x00177600u; return; } if (c.pc != 0x00174A38u) [[unlikely]] return; }
L_00174A38:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00174A44u); set32(c.r[5], 0u + 182u);  if (depth < kMaxDepth) unit_001D(c, 454u, depth + 1u); else { c.pc = 0x00177BE0u; return; } if (c.pc != 0x00174A44u) [[unlikely]] return; }
L_00174A44:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00410000u);
    set32(c.r[5], c.r[29].w[0] + 32u);
    set32(c.r[2], c.r[2].w[0] + 3040u);
    ld128((c.r[2].w[0]) & ~15u, c.r[3]);
    c.r[2].d[0] = ld64((c.r[2].w[0] + 16u));
    st128((c.r[5].w[0]) & ~15u, c.r[3]);
    st64((c.r[5].w[0] + 16u), c.r[2].d[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00174A68u); set32(c.r[4], ld32((c.r[16].w[0] + 68u)));  if (depth < kMaxDepth) unit_0049(c, 280u, depth + 1u); else { c.pc = 0x002276C0u; return; } if (c.pc != 0x00174A68u) [[unlikely]] return; }
L_00174A68:
    set32(c.r[4], ld32((c.r[16].w[0] + 52u)));
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00174A78u); set32(c.r[6], 0u + 3u);  if (depth < kMaxDepth) unit_001E(c, 331u, depth + 1u); else { c.pc = 0x0017A9F0u; return; } if (c.pc != 0x00174A78u) [[unlikely]] return; }
L_00174A78:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00174A90:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00174AA4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_000C(c, 27u, depth + 1u); else { c.pc = 0x00130290u; return; } if (c.pc != 0x00174AA4u) [[unlikely]] return; }
L_00174AA4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00174AACu);  if (depth < kMaxDepth) unit_001D(c, 405u, depth + 1u); else { c.pc = 0x00177600u; return; } if (c.pc != 0x00174AACu) [[unlikely]] return; }
L_00174AAC:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00174AB8u); set32(c.r[5], 0u + 182u);  if (depth < kMaxDepth) unit_001D(c, 454u, depth + 1u); else { c.pc = 0x00177BE0u; return; } if (c.pc != 0x00174AB8u) [[unlikely]] return; }
L_00174AB8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00410000u);
    set32(c.r[5], c.r[29].w[0] + 32u);
    set32(c.r[2], c.r[2].w[0] + 3072u);
    ld128((c.r[2].w[0]) & ~15u, c.r[3]);
    c.r[2].d[0] = ld64((c.r[2].w[0] + 16u));
    st128((c.r[5].w[0]) & ~15u, c.r[3]);
    st64((c.r[5].w[0] + 16u), c.r[2].d[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00174ADCu); set32(c.r[4], ld32((c.r[16].w[0] + 68u)));  if (depth < kMaxDepth) unit_0049(c, 280u, depth + 1u); else { c.pc = 0x002276C0u; return; } if (c.pc != 0x00174ADCu) [[unlikely]] return; }
L_00174ADC:
    set32(c.r[4], ld32((c.r[16].w[0] + 52u)));
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00174AECu); set32(c.r[6], 0u + 3u);  if (depth < kMaxDepth) unit_001E(c, 331u, depth + 1u); else { c.pc = 0x0017A9F0u; return; } if (c.pc != 0x00174AECu) [[unlikely]] return; }
L_00174AEC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00174B00:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00174B1Cu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_000C(c, 28u, depth + 1u); else { c.pc = 0x001302A0u; return; } if (c.pc != 0x00174B1Cu) [[unlikely]] return; }
L_00174B1C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00174B24u);  if (depth < kMaxDepth) unit_001D(c, 405u, depth + 1u); else { c.pc = 0x00177600u; return; } if (c.pc != 0x00174B24u) [[unlikely]] return; }
L_00174B24:
    set32(c.r[4], ld32((c.r[2].w[0] + 28u)));
    set32(c.r[3], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 2u);  if (t) { goto L_00174C58; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00174BB4; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00174B58; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00174B58; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_00174D84; } }
L_00174B58:
    c.r[2].d[0] = ld8((c.r[18].w[0] + 200u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00174BA4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00174B6Cu);  if (depth < kMaxDepth) unit_001D(c, 405u, depth + 1u); else { c.pc = 0x00177600u; return; } if (c.pc != 0x00174B6Cu) [[unlikely]] return; }
L_00174B6C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00174B74u); set32(c.r[16], ld32((c.r[2].w[0] + 60u)));  if (depth < kMaxDepth) unit_001D(c, 405u, depth + 1u); else { c.pc = 0x00177600u; return; } if (c.pc != 0x00174B74u) [[unlikely]] return; }
L_00174B74:
    set32(c.r[3], ld32((c.r[2].w[0] + 32u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_00174B98; } }
    set32(c.r[2], c.r[16].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[4], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 6;
L_00174B98:
    set32(c.r[5], c.r[18].w[0] + 148u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00174BA4u); set32(c.r[6], 0u + 38u);  if (depth < kMaxDepth) unit_0010(c, 107u, depth + 1u); else { c.pc = 0x001415A0u; return; } if (c.pc != 0x00174BA4u) [[unlikely]] return; }
L_00174BA4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00174BACu);  if (depth < kMaxDepth) unit_001D(c, 405u, depth + 1u); else { c.pc = 0x00177600u; return; } if (c.pc != 0x00174BACu) [[unlikely]] return; }
L_00174BAC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 28u), 0u);  if (t) { goto L_00174D80; } }
L_00174BB4:
    set32(c.r[3], ld32((c.r[18].w[0] + 64u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[4], 0u + 22u);  if (t) { goto L_00174D80; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00174BC8u);  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x001001F0u; return; } if (c.pc != 0x00174BC8u) [[unlikely]] return; }
L_00174BC8:
    st32((c.r[18].w[0] + 196u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[18].w[0] + 196u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00174BD8u); set32(c.r[5], 0u + 22u);  if (depth < kMaxDepth) unit_0010(c, 111u, depth + 1u); else { c.pc = 0x00141670u; return; } if (c.pc != 0x00174BD8u) [[unlikely]] return; }
L_00174BD8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00174BE0u);  if (depth < kMaxDepth) unit_001D(c, 405u, depth + 1u); else { c.pc = 0x00177600u; return; } if (c.pc != 0x00174BE0u) [[unlikely]] return; }
L_00174BE0:
    set32(c.r[17], ld32((c.r[2].w[0] + 60u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00174BECu); set32(c.r[4], 0u + 1000u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00174BECu) [[unlikely]] return; }
L_00174BEC:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00174C38; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00174C00u);  if (depth < kMaxDepth) unit_001D(c, 405u, depth + 1u); else { c.pc = 0x00177600u; return; } if (c.pc != 0x00174C00u) [[unlikely]] return; }
L_00174C00:
    set32(c.r[3], ld32((c.r[2].w[0] + 32u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_00174C24; } }
    set32(c.r[2], c.r[17].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[6], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 6;
L_00174C24:
    set32(c.r[7], ld32((c.r[18].w[0] + 196u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00174C34u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006B(c, 215u, depth + 1u); else { c.pc = 0x002AF670u; return; } if (c.pc != 0x00174C34u) [[unlikely]] return; }
L_00174C34:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00174C38:
    st32((c.r[18].w[0] + 64u), c.r[16].w[0]);
    set32(c.r[4], ld32((c.r[18].w[0] + 64u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00174C50u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00174C50u) [[unlikely]] return; }
L_00174C50:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00174D80; } }
L_00174C58:
    set32(c.r[3], ld32((c.r[18].w[0] + 56u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00174D80; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 144u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00174C78; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00174C78u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100210u; return; } if (c.pc != 0x00174C78u) [[unlikely]] return; }
L_00174C78:
    set32(c.r[4], 0u + 216u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00174C84u); st32((c.r[18].w[0] + 144u), 0u);  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x001001F0u; return; } if (c.pc != 0x00174C84u) [[unlikely]] return; }
L_00174C84:
    st32((c.r[18].w[0] + 144u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[18].w[0] + 144u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00174C94u); set32(c.r[5], 0u + 216u);  if (depth < kMaxDepth) unit_0010(c, 111u, depth + 1u); else { c.pc = 0x00141670u; return; } if (c.pc != 0x00174C94u) [[unlikely]] return; }
L_00174C94:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00174C9Cu);  if (depth < kMaxDepth) unit_001D(c, 405u, depth + 1u); else { c.pc = 0x00177600u; return; } if (c.pc != 0x00174C9Cu) [[unlikely]] return; }
L_00174C9C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00174CA4u); set32(c.r[16], ld32((c.r[2].w[0] + 60u)));  if (depth < kMaxDepth) unit_001D(c, 405u, depth + 1u); else { c.pc = 0x00177600u; return; } if (c.pc != 0x00174CA4u) [[unlikely]] return; }
L_00174CA4:
    set32(c.r[3], ld32((c.r[2].w[0] + 32u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00174CCC; } }
    set32(c.r[2], c.r[16].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);  if (t) { goto L_00174CD0; } }
L_00174CCC:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00174CD0:
    c.r[17].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 22u)));
    c.budget -= 3;
    { const bool t = c.r[17].sd[0] <= 0; set32(c.r[4], 0u + 104u);  if (t) { goto L_00174D48; } }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00174CE0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00174CE8u);  if (depth < kMaxDepth) unit_001D(c, 405u, depth + 1u); else { c.pc = 0x00177600u; return; } if (c.pc != 0x00174CE8u) [[unlikely]] return; }
L_00174CE8:
    set32(c.r[3], ld32((c.r[2].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00174D10; } }
    set32(c.r[2], c.r[16].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);  if (t) { goto L_00174D14; } }
L_00174D10:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00174D14:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 22u)));
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == c.r[2].d[0];  if (t) { goto L_00174D34; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 144u)));
    set32(c.r[3], c.r[16].w[0] << 3);
    set32(c.r[4], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 5;
L_00174D34:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < 27ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00174CE0u | kUnwind; return; } goto L_00174CE0; } }
    set32(c.r[4], 0u + 104u);
    c.budget -= 1;
L_00174D48:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00174D50u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00174D50u) [[unlikely]] return; }
L_00174D50:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00174D74; } }
    set32(c.r[5], ld32((c.r[18].w[0] + 144u)));
    set32(c.r[6], 0u + 27u);
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00174D70u); set32(c.r[8], 0u + 1u);  if (depth < kMaxDepth) unit_001D(c, 458u, depth + 1u); else { c.pc = 0x00177C50u; return; } if (c.pc != 0x00174D70u) [[unlikely]] return; }
L_00174D70:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00174D74:
    st32((c.r[18].w[0] + 56u), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 24u)));
    st32((c.r[3].w[0] + 36u), 0u);
    c.budget -= 3;
L_00174D80:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_00174D84:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00174DA0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    c.budget -= 8;
    { const bool t = c.r[5].d[0] != c.r[3].d[0]; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00175014; } }
    set32(c.r[3], ld32((c.r[3].w[0] + 24u)));
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x00460000u);  if (t) { goto L_00175010; } }
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + 3984u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 6;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x00174000u < 16384u) { entry = entries_001D[(t - 0x00174000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00174DE8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00174DF0u);  if (depth < kMaxDepth) unit_001D(c, 405u, depth + 1u); else { c.pc = 0x00177600u; return; } if (c.pc != 0x00174DF0u) [[unlikely]] return; }
L_00174DF0:
    set32(c.r[3], 0u + 2u);
    st32((c.r[2].w[0] + 28u), c.r[3].w[0]);
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00174E08u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00174E08u) [[unlikely]] return; }
L_00174E08:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 200u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00175014; } }
L_00174E10:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00174E18u);  if (depth < kMaxDepth) unit_001D(c, 405u, depth + 1u); else { c.pc = 0x00177600u; return; } if (c.pc != 0x00174E18u) [[unlikely]] return; }
L_00174E18:
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00174E24u); st32((c.r[2].w[0] + 28u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_001D(c, 405u, depth + 1u); else { c.pc = 0x00177600u; return; } if (c.pc != 0x00174E24u) [[unlikely]] return; }
L_00174E24:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00174E30u); set32(c.r[5], 0u + 183u);  if (depth < kMaxDepth) unit_001D(c, 454u, depth + 1u); else { c.pc = 0x00177BE0u; return; } if (c.pc != 0x00174E30u) [[unlikely]] return; }
L_00174E30:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00174E3Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_001D(c, 158u, depth + 1u); else { c.pc = 0x00175200u; return; } if (c.pc != 0x00174E3Cu) [[unlikely]] return; }
L_00174E3C:
    set32(c.r[3], 0u + 1u);
    st8((c.r[17].w[0] + 202u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[17].w[0] + 24u)));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 36u), 0u);  if (t) { goto L_00175010; } }
L_00174E50:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00174E58u);  if (depth < kMaxDepth) unit_001D(c, 405u, depth + 1u); else { c.pc = 0x00177600u; return; } if (c.pc != 0x00174E58u) [[unlikely]] return; }
L_00174E58:
    set32(c.r[3], 0u + 4u);
    st32((c.r[2].w[0] + 28u), c.r[3].w[0]);
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00174E70u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00174E70u) [[unlikely]] return; }
L_00174E70:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00175010; } }
L_00174E78:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00174E80u);  if (depth < kMaxDepth) unit_001D(c, 405u, depth + 1u); else { c.pc = 0x00177600u; return; } if (c.pc != 0x00174E80u) [[unlikely]] return; }
L_00174E80:
    set32(c.r[3], 0u + 5u);
    st32((c.r[2].w[0] + 28u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 52u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00174E9Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00174E9Cu) [[unlikely]] return; }
L_00174E9C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00174EA8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_001D(c, 158u, depth + 1u); else { c.pc = 0x00175200u; return; } if (c.pc != 0x00174EA8u) [[unlikely]] return; }
L_00174EA8:
    set32(c.r[3], 0u + 1u);
    st8((c.r[17].w[0] + 202u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[17].w[0] + 24u)));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 36u), 0u);  if (t) { goto L_00175010; } }
L_00174EBC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00174EC4u);  if (depth < kMaxDepth) unit_001D(c, 405u, depth + 1u); else { c.pc = 0x00177600u; return; } if (c.pc != 0x00174EC4u) [[unlikely]] return; }
L_00174EC4:
    set32(c.r[4], ld32((c.r[2].w[0] + 32u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00174EF0; } }
    set32(c.r[3], ld32((c.r[2].w[0] + 60u)));
    set32(c.r[2], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);  if (t) { goto L_00174EF4; } }
L_00174EF0:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00174EF4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00174EFCu); set32(c.r[16], 0u + 9u);  if (depth < kMaxDepth) unit_001D(c, 26u, depth + 1u); else { c.pc = 0x00174370u; return; } if (c.pc != 0x00174EFCu) [[unlikely]] return; }
L_00174EFC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00174F0C; } }
    set32(c.r[16], 0u + 18u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 2;
L_00174F0C:
    set32(c.r[4], 0u + 3u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u + 11u);
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00174F24u); c.r[9].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_001A(c, 267u, depth + 1u); else { c.pc = 0x0016A910u; return; } if (c.pc != 0x00174F24u) [[unlikely]] return; }
L_00174F24:
    set32(c.r[3], ld32((c.r[17].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 36u), 0u);  if (t) { goto L_00175010; } }
L_00174F30:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00174F38u);  if (depth < kMaxDepth) unit_001D(c, 405u, depth + 1u); else { c.pc = 0x00177600u; return; } if (c.pc != 0x00174F38u) [[unlikely]] return; }
L_00174F38:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00174F40u); set32(c.r[16], ld32((c.r[2].w[0] + 60u)));  if (depth < kMaxDepth) unit_001D(c, 405u, depth + 1u); else { c.pc = 0x00177600u; return; } if (c.pc != 0x00174F40u) [[unlikely]] return; }
L_00174F40:
    set32(c.r[3], ld32((c.r[2].w[0] + 32u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_00174F64; } }
    set32(c.r[2], c.r[16].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[18], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 6;
L_00174F64:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00174F6Cu);  if (depth < kMaxDepth) unit_001D(c, 405u, depth + 1u); else { c.pc = 0x00177600u; return; } if (c.pc != 0x00174F6Cu) [[unlikely]] return; }
L_00174F6C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00174F78u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_001D(c, 446u, depth + 1u); else { c.pc = 0x00177A30u; return; } if (c.pc != 0x00174F78u) [[unlikely]] return; }
L_00174F78:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u + 3u);  if (t) { goto L_00174FA4; } }
    set32(c.r[5], 0u + 5u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u + 11u);
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00174F98u); c.r[9].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_001A(c, 267u, depth + 1u); else { c.pc = 0x0016A910u; return; } if (c.pc != 0x00174F98u) [[unlikely]] return; }
L_00174F98:
    set32(c.r[3], ld32((c.r[17].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 36u), 0u);  if (t) { goto L_00175010; } }
L_00174FA4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00174FACu);  if (depth < kMaxDepth) unit_001D(c, 405u, depth + 1u); else { c.pc = 0x00177600u; return; } if (c.pc != 0x00174FACu) [[unlikely]] return; }
L_00174FAC:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00174FB8u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_001D(c, 450u, depth + 1u); else { c.pc = 0x00177B10u; return; } if (c.pc != 0x00174FB8u) [[unlikely]] return; }
L_00174FB8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_00174FF8; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 22u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[5], 0u + 13u);  if (t) { goto L_00174FD4; } }
    set32(c.r[5], 0u + 3u);
    c.budget -= 1;
L_00174FD4:
    set32(c.r[4], 0u + 3u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u + 11u);
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00174FECu); c.r[9].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_001A(c, 267u, depth + 1u); else { c.pc = 0x0016A910u; return; } if (c.pc != 0x00174FECu) [[unlikely]] return; }
L_00174FEC:
    set32(c.r[3], ld32((c.r[17].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 36u), 0u);  if (t) { goto L_00175010; } }
L_00174FF8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00175000u);  if (depth < kMaxDepth) unit_001C(c, 348u, depth + 1u); else { c.pc = 0x00173C40u; return; } if (c.pc != 0x00175000u) [[unlikely]] return; }
L_00175000:
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00175010u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00175010u) [[unlikely]] return; }
L_00175010:
    st8((c.r[17].w[0] + 200u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_00175014:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00175030:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    c.budget -= 8;
    { const bool t = c.r[5].d[0] != c.r[3].d[0]; c.r[18].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00175184; } }
    c.r[2].d[0] = ld8((c.r[18].w[0] + 203u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_001750F8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00175064u);  if (depth < kMaxDepth) unit_001D(c, 405u, depth + 1u); else { c.pc = 0x00177600u; return; } if (c.pc != 0x00175064u) [[unlikely]] return; }
L_00175064:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017506Cu); set32(c.r[16], ld32((c.r[2].w[0] + 60u)));  if (depth < kMaxDepth) unit_001D(c, 405u, depth + 1u); else { c.pc = 0x00177600u; return; } if (c.pc != 0x0017506Cu) [[unlikely]] return; }
L_0017506C:
    set32(c.r[4], ld32((c.r[2].w[0] + 32u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00175098; } }
    set32(c.r[3], ld32((c.r[2].w[0] + 60u)));
    set32(c.r[2], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);  if (t) { goto L_0017509C; } }
L_00175098:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0017509C:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 22u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001750ACu); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_001C(c, 260u, depth + 1u); else { c.pc = 0x00172FC0u; return; } if (c.pc != 0x001750ACu) [[unlikely]] return; }
L_001750AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001750B4u);  if (depth < kMaxDepth) unit_001D(c, 405u, depth + 1u); else { c.pc = 0x00177600u; return; } if (c.pc != 0x001750B4u) [[unlikely]] return; }
L_001750B4:
    set32(c.r[4], ld32((c.r[2].w[0] + 32u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_001750DC; } }
    set32(c.r[3], ld32((c.r[2].w[0] + 60u)));
    set32(c.r[2], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[5], c.r[4].w[0] + c.r[2].w[0]);
    c.budget -= 7;
L_001750DC:
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001750E8u); set32(c.r[6], 0u + 38u);  if (depth < kMaxDepth) unit_0010(c, 115u, depth + 1u); else { c.pc = 0x00141710u; return; } if (c.pc != 0x001750E8u) [[unlikely]] return; }
L_001750E8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00175140; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_00175140; } }
L_001750F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00175100u);  if (depth < kMaxDepth) unit_001D(c, 405u, depth + 1u); else { c.pc = 0x00177600u; return; } if (c.pc != 0x00175100u) [[unlikely]] return; }
L_00175100:
    set32(c.r[4], ld32((c.r[2].w[0] + 32u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_00175128; } }
    set32(c.r[3], ld32((c.r[2].w[0] + 60u)));
    set32(c.r[2], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[5], c.r[4].w[0] + c.r[2].w[0]);
    c.budget -= 7;
L_00175128:
    set32(c.r[4], c.r[18].w[0] + 148u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00175134u); set32(c.r[6], 0u + 38u);  if (depth < kMaxDepth) unit_0010(c, 115u, depth + 1u); else { c.pc = 0x00141710u; return; } if (c.pc != 0x00175134u) [[unlikely]] return; }
L_00175134:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00175140; } }
    c.r[17].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_00175140:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; set32(c.r[4], 0u + 2u);  if (t) { goto L_0017516C; } }
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u + 11u);
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00175160u); c.r[9].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_001A(c, 267u, depth + 1u); else { c.pc = 0x0016A910u; return; } if (c.pc != 0x00175160u) [[unlikely]] return; }
L_00175160:
    set32(c.r[3], ld32((c.r[18].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 36u), 0u);  if (t) { goto L_0017517C; } }
L_0017516C:
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 36u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0017517Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0017517Cu) [[unlikely]] return; }
L_0017517C:
    set32(c.r[3], 0u + 1u);
    st8((c.r[18].w[0] + 200u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_00175184:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_001751A0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001751B8u); set32(c.r[4], 0u + 44u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x001751B8u) [[unlikely]] return; }
L_001751B8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[7].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001751E8; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_001751CC; } }
    set32(c.r[7], c.r[7].w[0] + 20u);
    c.budget -= 1;
L_001751CC:
    set32(c.r[8], ld32((c.r[16].w[0] + 28u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[9], ld32((c.r[16].w[0] + 32u)));
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001751E8u); set32(c.r[10], 0u + 1u);  if (depth < kMaxDepth) unit_000B(c, 371u, depth + 1u); else { c.pc = 0x0012EBA0u; return; } if (c.pc != 0x001751E8u) [[unlikely]] return; }
L_001751E8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00175200:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const bool t = c.r[5].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00175244; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00410000u);
    set32(c.r[5], c.r[29].w[0] + 64u);
    set32(c.r[2], c.r[2].w[0] + 3104u);
    ld128((c.r[2].w[0]) & ~15u, c.r[3]);
    c.r[2].d[0] = ld64((c.r[2].w[0] + 16u));
    st128((c.r[5].w[0]) & ~15u, c.r[3]);
    st64((c.r[5].w[0] + 16u), c.r[2].d[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00175238u); set32(c.r[4], ld32((c.r[16].w[0] + 72u)));  if (depth < kMaxDepth) unit_0049(c, 280u, depth + 1u); else { c.pc = 0x002276C0u; return; } if (c.pc != 0x00175238u) [[unlikely]] return; }
L_00175238:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 188u), c.r[3].w[0]);  if (t) { goto L_00175270; } }
L_00175244:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00410000u);
    set32(c.r[5], c.r[29].w[0] + 32u);
    set32(c.r[2], c.r[2].w[0] + 3136u);
    ld128((c.r[2].w[0]) & ~15u, c.r[3]);
    c.r[2].d[0] = ld64((c.r[2].w[0] + 16u));
    st128((c.r[5].w[0]) & ~15u, c.r[3]);
    st64((c.r[5].w[0] + 16u), c.r[2].d[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00175268u); set32(c.r[4], ld32((c.r[16].w[0] + 72u)));  if (depth < kMaxDepth) unit_0049(c, 280u, depth + 1u); else { c.pc = 0x002276C0u; return; } if (c.pc != 0x00175268u) [[unlikely]] return; }
L_00175268:
    set32(c.r[3], 0u + 2u);
    st32((c.r[16].w[0] + 188u), c.r[3].w[0]);
    c.budget -= 2;
L_00175270:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_00175280:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00175294u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 304u, depth + 1u); else { c.pc = 0x0012E500u; return; } if (c.pc != 0x00175294u) [[unlikely]] return; }
L_00175294:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 136u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001752CC; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 140u)));
    set32(c.r[3], c.r[2].w[0] - 1u);
    st32((c.r[16].w[0] + 140u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 128u)));
    set32(c.r[2], 0u - c.r[2].w[0]);
    c.r[1].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[4], c.r[16].w[0] + 80u);  if (t) { goto L_00175300; } }
    st32((c.r[16].w[0] + 140u), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 136u), static_cast<std::uint8_t>(0u));  if (t) { goto L_001752FC; } }
L_001752CC:
    set32(c.r[2], ld32((c.r[16].w[0] + 140u)));
    set32(c.r[4], c.r[2].w[0] + 1u);
    st32((c.r[16].w[0] + 140u), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 132u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 128u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.r[1].d[0] = c.r[2].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001752FC; } }
    st32((c.r[16].w[0] + 140u), c.r[2].w[0]);
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 136u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
L_001752FC:
    set32(c.r[4], c.r[16].w[0] + 80u);
    c.budget -= 1;
L_00175300:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00175308u);  if (depth < kMaxDepth) unit_002A(c, 280u, depth + 1u); else { c.pc = 0x001AB050u; return; } if (c.pc != 0x00175308u) [[unlikely]] return; }
L_00175308:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00175320:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00175334u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_001D(c, 405u, depth + 1u); else { c.pc = 0x00177600u; return; } if (c.pc != 0x00175334u) [[unlikely]] return; }
L_00175334:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017533Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_001D(c, 456u, depth + 1u); else { c.pc = 0x00177C10u; return; } if (c.pc != 0x0017533Cu) [[unlikely]] return; }
L_0017533C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00175354; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00175354u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00175354u) [[unlikely]] return; }
L_00175354:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00175370:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00175384u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_001D(c, 405u, depth + 1u); else { c.pc = 0x00177600u; return; } if (c.pc != 0x00175384u) [[unlikely]] return; }
L_00175384:
    set32(c.r[4], ld32((c.r[2].w[0] + 28u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);  if (t) { goto L_001753B8; } }
    set32(c.r[3], ld32((c.r[1].w[0] + 25376u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001753B8; } }
    set32(c.r[4], ld32((c.r[3].w[0] + 8u)));
    set32(c.r[3], 0u + 5u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001753B8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001753B8u);  if (depth < kMaxDepth) unit_001D(c, 214u, depth + 1u); else { c.pc = 0x00175880u; return; } if (c.pc != 0x001753B8u) [[unlikely]] return; }
L_001753B8:
    set32(c.r[4], ld32((c.r[16].w[0] + 52u)));
    set32(c.r[3], 0u + 5u);
    set32(c.r[4], ld32((c.r[4].w[0] + 8u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 3u);  if (t) { goto L_00175438; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 188u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00175434; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001753E0u);  if (depth < kMaxDepth) unit_001D(c, 405u, depth + 1u); else { c.pc = 0x00177600u; return; } if (c.pc != 0x001753E0u) [[unlikely]] return; }
L_001753E0:
    set32(c.r[3], 0u + 1u);
    st32((c.r[2].w[0] + 28u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 144u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001753FC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001753FCu);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100210u; return; } if (c.pc != 0x001753FCu) [[unlikely]] return; }
L_001753FC:
    st32((c.r[16].w[0] + 144u), 0u);
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], ld32((c.r[16].w[0] + 24u)));
    st32((c.r[2].w[0] + 36u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 188u), 0u);
    set32(c.r[4], ld32((c.r[16].w[0] + 52u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 10;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00175424u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00175424u) [[unlikely]] return; }
L_00175424:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017542Cu); set32(c.r[4], 0u + 11u);  if (depth < kMaxDepth) unit_0076(c, 191u, depth + 1u); else { c.pc = 0x002D9970u; return; } if (c.pc != 0x0017542Cu) [[unlikely]] return; }
L_0017542C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[16].w[0] + 72u)));  if (t) { goto L_0017547C; } }
L_00175434:
    set32(c.r[3], 0u + 3u);
    c.budget -= 1;
L_00175438:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 4u);  if (t) { goto L_00175448; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00175478; } }
L_00175448:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 202u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00175478; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00175460u); st8((c.r[16].w[0] + 202u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_001D(c, 158u, depth + 1u); else { c.pc = 0x00175200u; return; } if (c.pc != 0x00175460u) [[unlikely]] return; }
L_00175460:
    set32(c.r[4], ld32((c.r[16].w[0] + 52u)));
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00175470u); set32(c.r[6], 0u + 3u);  if (depth < kMaxDepth) unit_001E(c, 331u, depth + 1u); else { c.pc = 0x0017A9F0u; return; } if (c.pc != 0x00175470u) [[unlikely]] return; }
L_00175470:
    set32(c.r[3], 0u + 2u);
    st32((c.r[16].w[0] + 188u), c.r[3].w[0]);
    c.budget -= 2;
L_00175478:
    set32(c.r[3], ld32((c.r[16].w[0] + 72u)));
    c.budget -= 1;
L_0017547C:
    c.r[3].d[0] = ld8((c.r[3].w[0] + 32u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001755B0; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 188u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001755B0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001754A0u);  if (depth < kMaxDepth) unit_001D(c, 405u, depth + 1u); else { c.pc = 0x00177600u; return; } if (c.pc != 0x001754A0u) [[unlikely]] return; }
L_001754A0:
    set32(c.r[2], ld32((c.r[2].w[0] + 28u)));
    set32(c.r[6], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[6].d[0];  if (t) { goto L_00175598; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 52u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001754D4; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001754D4; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001754D4u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001754D4u) [[unlikely]] return; }
L_001754D4:
    st32((c.r[16].w[0] + 52u), 0u);
    c.r[2].d[0] = ld8((c.r[16].w[0] + 202u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u + 160u);  if (t) { goto L_00175548; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001754ECu); set32(c.r[4], 0u + 208u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x001754ECu) [[unlikely]] return; }
L_001754EC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00175510; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 60u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00410000u);
    set32(c.r[2], ld32((c.r[3].w[0] + 20u)));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 22u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00175510u); set32(c.r[5], c.r[5].w[0] + 2944u);  if (depth < kMaxDepth) unit_0026(c, 32u, depth + 1u); else { c.pc = 0x00198330u; return; } if (c.pc != 0x00175510u) [[unlikely]] return; }
L_00175510:
    st32((c.r[16].w[0] + 52u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 52u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00175528u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00175528u) [[unlikely]] return; }
L_00175528:
    set32(c.r[2], ld32((c.r[16].w[0] + 60u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 52u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20u)));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 22u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00175540u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_001E(c, 331u, depth + 1u); else { c.pc = 0x0017A9F0u; return; } if (c.pc != 0x00175540u) [[unlikely]] return; }
L_00175540:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001755A8; } }
L_00175548:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00175550u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00175550u) [[unlikely]] return; }
L_00175550:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].sd[0] = static_cast<std::int32_t>(0x00410000u);  if (t) { goto L_00175568; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 2944u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00175568u); set32(c.r[6], 0u + 3u);  if (depth < kMaxDepth) unit_001E(c, 336u, depth + 1u); else { c.pc = 0x0017AAE0u; return; } if (c.pc != 0x00175568u) [[unlikely]] return; }
L_00175568:
    st32((c.r[16].w[0] + 52u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 52u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00175580u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00175580u) [[unlikely]] return; }
L_00175580:
    set32(c.r[4], ld32((c.r[16].w[0] + 52u)));
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00175590u); set32(c.r[6], 0u + 3u);  if (depth < kMaxDepth) unit_001E(c, 331u, depth + 1u); else { c.pc = 0x0017A9F0u; return; } if (c.pc != 0x00175590u) [[unlikely]] return; }
L_00175590:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001755A4; } }
L_00175598:
    set32(c.r[4], ld32((c.r[16].w[0] + 52u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001755A4u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_001E(c, 331u, depth + 1u); else { c.pc = 0x0017A9F0u; return; } if (c.pc != 0x001755A4u) [[unlikely]] return; }
L_001755A4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_001755A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001755B0u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_001D(c, 158u, depth + 1u); else { c.pc = 0x00175200u; return; } if (c.pc != 0x001755B0u) [[unlikely]] return; }
L_001755B0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001755C0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001755D4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_001D(c, 405u, depth + 1u); else { c.pc = 0x00177600u; return; } if (c.pc != 0x001755D4u) [[unlikely]] return; }
L_001755D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001755DCu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_001D(c, 456u, depth + 1u); else { c.pc = 0x00177C10u; return; } if (c.pc != 0x001755DCu) [[unlikely]] return; }
L_001755DC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001755F4; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001755F4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001755F4u) [[unlikely]] return; }
L_001755F4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00175610:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00175624u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_001D(c, 405u, depth + 1u); else { c.pc = 0x00177600u; return; } if (c.pc != 0x00175624u) [[unlikely]] return; }
L_00175624:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017562Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_001D(c, 456u, depth + 1u); else { c.pc = 0x00177C10u; return; } if (c.pc != 0x0017562Cu) [[unlikely]] return; }
L_0017562C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00175644; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00175644u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00175644u) [[unlikely]] return; }
L_00175644:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00175660:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], ld32((c.r[4].w[0] + 64u)));
    c.budget -= 9;
    { const bool t = c.r[4].d[0] == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_00175734; } }
    set32(c.r[5], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], 0u + 5u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_00175734; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001756A4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001756A4u) [[unlikely]] return; }
L_001756A4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001756EC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001756B4u);  if (depth < kMaxDepth) unit_001D(c, 405u, depth + 1u); else { c.pc = 0x00177600u; return; } if (c.pc != 0x001756B4u) [[unlikely]] return; }
L_001756B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001756BCu); set32(c.r[16], ld32((c.r[2].w[0] + 60u)));  if (depth < kMaxDepth) unit_001D(c, 405u, depth + 1u); else { c.pc = 0x00177600u; return; } if (c.pc != 0x001756BCu) [[unlikely]] return; }
L_001756BC:
    set32(c.r[3], ld32((c.r[2].w[0] + 32u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_001756E0; } }
    set32(c.r[2], c.r[16].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[4], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 6;
L_001756E0:
    set32(c.r[5], ld32((c.r[18].w[0] + 196u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001756ECu); set32(c.r[6], 0u + 22u);  if (depth < kMaxDepth) unit_0010(c, 107u, depth + 1u); else { c.pc = 0x001415A0u; return; } if (c.pc != 0x001756ECu) [[unlikely]] return; }
L_001756EC:
    set32(c.r[4], ld32((c.r[18].w[0] + 64u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00175710; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00175710; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00175710u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00175710u) [[unlikely]] return; }
L_00175710:
    st32((c.r[18].w[0] + 64u), 0u);
    set32(c.r[4], ld32((c.r[18].w[0] + 196u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00175728; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00175728u);  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x00175728u) [[unlikely]] return; }
L_00175728:
    st32((c.r[18].w[0] + 196u), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_00175834; } }
L_00175734:
    set32(c.r[4], ld32((c.r[18].w[0] + 56u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00175834; } }
    set32(c.r[5], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], 0u + 5u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_00175834; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00175760u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00175760u) [[unlikely]] return; }
L_00175760:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001757F0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00175770u);  if (depth < kMaxDepth) unit_001D(c, 405u, depth + 1u); else { c.pc = 0x00177600u; return; } if (c.pc != 0x00175770u) [[unlikely]] return; }
L_00175770:
    set32(c.r[4], ld32((c.r[18].w[0] + 56u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 48u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00175784u); set32(c.r[17], ld32((c.r[2].w[0] + 60u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00175784u) [[unlikely]] return; }
L_00175784:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017578Cu); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_001D(c, 405u, depth + 1u); else { c.pc = 0x00177600u; return; } if (c.pc != 0x0017578Cu) [[unlikely]] return; }
L_0017578C:
    set32(c.r[3], ld32((c.r[2].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001757B4; } }
    set32(c.r[2], c.r[16].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[3].w[0] + c.r[2].w[0]);  if (t) { goto L_001757B8; } }
L_001757B4:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001757B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001757C0u);  if (depth < kMaxDepth) unit_001D(c, 405u, depth + 1u); else { c.pc = 0x00177600u; return; } if (c.pc != 0x001757C0u) [[unlikely]] return; }
L_001757C0:
    set32(c.r[3], ld32((c.r[2].w[0] + 32u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_001757E4; } }
    set32(c.r[2], c.r[17].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[4], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 6;
L_001757E4:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001757F0u); set32(c.r[6], 0u + 38u);  if (depth < kMaxDepth) unit_0010(c, 107u, depth + 1u); else { c.pc = 0x001415A0u; return; } if (c.pc != 0x001757F0u) [[unlikely]] return; }
L_001757F0:
    set32(c.r[4], ld32((c.r[18].w[0] + 56u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00175814; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00175814; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00175814u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00175814u) [[unlikely]] return; }
L_00175814:
    st32((c.r[18].w[0] + 56u), 0u);
    set32(c.r[4], ld32((c.r[18].w[0] + 144u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0017582C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017582Cu);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100210u; return; } if (c.pc != 0x0017582Cu) [[unlikely]] return; }
L_0017582C:
    st32((c.r[18].w[0] + 144u), 0u);
    c.r[6].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 2;
L_00175834:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_0017585C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00175844u);  if (depth < kMaxDepth) unit_001D(c, 405u, depth + 1u); else { c.pc = 0x00177600u; return; } if (c.pc != 0x00175844u) [[unlikely]] return; }
L_00175844:
    set32(c.r[3], 0u + 1u);
    st32((c.r[2].w[0] + 28u), c.r[3].w[0]);
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0017585Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0017585Cu) [[unlikely]] return; }
L_0017585C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00175880:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].d[0] = ld8((c.r[4].w[0] + 200u));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001758D8; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001758A8u); set32(c.r[4], ld32((c.r[1].w[0] + 25376u)));  if (depth < kMaxDepth) unit_001A(c, 231u, depth + 1u); else { c.pc = 0x0016A360u; return; } if (c.pc != 0x001758A8u) [[unlikely]] return; }
L_001758A8:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_001758CC; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 36u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001758C4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001758C4u) [[unlikely]] return; }
L_001758C4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00175980; } }
L_001758CC:
    set32(c.r[2], ld32((c.r[16].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 36u), c.r[3].w[0]);  if (t) { goto L_00175980; } }
L_001758D8:
    set32(c.r[4], ld32((c.r[16].w[0] + 24u)));
    set32(c.r[2], 0u + 4u);
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_0017597C; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], 0u + 1u);
    set32(c.r[4], ld32((c.r[1].w[0] + 25376u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 172u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0017596C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017590Cu);  if (depth < kMaxDepth) unit_001A(c, 231u, depth + 1u); else { c.pc = 0x0016A360u; return; } if (c.pc != 0x0017590Cu) [[unlikely]] return; }
L_0017590C:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_0017596C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00175920u);  if (depth < kMaxDepth) unit_001D(c, 405u, depth + 1u); else { c.pc = 0x00177600u; return; } if (c.pc != 0x00175920u) [[unlikely]] return; }
L_00175920:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00175928u); set32(c.r[17], ld32((c.r[2].w[0] + 60u)));  if (depth < kMaxDepth) unit_001D(c, 405u, depth + 1u); else { c.pc = 0x00177600u; return; } if (c.pc != 0x00175928u) [[unlikely]] return; }
L_00175928:
    set32(c.r[3], ld32((c.r[2].w[0] + 32u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_0017594C; } }
    set32(c.r[2], c.r[17].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[4], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 6;
L_0017594C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00175954u);  if (depth < kMaxDepth) unit_001C(c, 257u, depth + 1u); else { c.pc = 0x00172F70u; return; } if (c.pc != 0x00175954u) [[unlikely]] return; }
L_00175954:
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00175964u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00175964u) [[unlikely]] return; }
L_00175964:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00175980; } }
L_0017596C:
    set32(c.r[2], ld32((c.r[16].w[0] + 24u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 36u), c.r[3].w[0]);  if (t) { goto L_00175980; } }
L_0017597C:
    st32((c.r[4].w[0] + 36u), c.r[2].w[0]);
    c.budget -= 1;
L_00175980:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00175988u);  if (depth < kMaxDepth) unit_001A(c, 271u, depth + 1u); else { c.pc = 0x0016A9E0u; return; } if (c.pc != 0x00175988u) [[unlikely]] return; }
L_00175988:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001759A0:
    set32(c.r[29], c.r[29].w[0] - 128u);
    set32(c.r[3], 0u + 5u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], ld32((c.r[4].w[0] + 8u)));
    c.budget -= 12;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00175CFC; } }
    set32(c.r[3], ld32((c.r[20].w[0] + 68u)));
    set32(c.r[2], ld32((c.r[20].w[0] + 60u)));
    c.f[0] = ld32((c.r[3].w[0] + 12u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[2].w[0] + 36u), c.f[0]);
    set32(c.r[4], ld32((c.r[20].w[0] + 60u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 44u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 11;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001759FCu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001759FCu) [[unlikely]] return; }
L_001759FC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00410000u);
    set32(c.r[4], c.r[29].w[0] + 96u);
    set32(c.r[2], c.r[2].w[0] + 3168u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    ld128((c.r[2].w[0]) & ~15u, c.r[3]);
    c.r[2].d[0] = ld64((c.r[2].w[0] + 16u));
    st128((c.r[4].w[0]) & ~15u, c.r[3]);
    st64((c.r[4].w[0] + 16u), c.r[2].d[0]);
    set32(c.r[2], ld32((c.r[1].w[0] + 26392u)));
    set32(c.r[19], ld32((c.r[2].w[0] + 440u)));
    c.budget -= 12;
    { const bool t = c.r[19].d[0] == 0ull; set32(c.r[18], ld32((c.r[2].w[0] + 444u)));  if (t) { goto L_00175CF4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[19].w[0] + 16u), c.r[2].w[0]);
    st32((c.r[19].w[0] + 20u), c.r[2].w[0]);
    st32((c.r[19].w[0] + 24u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[20].w[0] + 188u)));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00175AA4; } }
    c.r[3].d[0] = ld8((c.r[20].w[0] + 202u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00175A5C; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_00175A6C; } }
L_00175A5C:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[2], 0u + 2u);  if (t) { goto L_00175A7C; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { goto L_00175A7C; } }
L_00175A6C:
    st32((c.r[19].w[0] + 60u), 0u);
    st32((c.r[19].w[0] + 300u), 0u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 60u), 0u);  if (t) { goto L_00175AC8; } }
L_00175A7C:
    set32(c.r[2], ld32((c.r[20].w[0] + 72u)));
    c.f[0] = ld32((c.r[2].w[0] + 12u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    st32((c.r[19].w[0] + 60u), c.r[3].w[0]);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 1));
    st32((c.r[19].w[0] + 300u), c.r[2].w[0]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 60u), c.r[3].w[0]);  if (t) { goto L_00175AC8; } }
L_00175AA4:
    set32(c.r[2], ld32((c.r[20].w[0] + 68u)));
    c.f[0] = ld32((c.r[2].w[0] + 12u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    st32((c.r[19].w[0] + 60u), c.r[3].w[0]);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 1));
    st32((c.r[19].w[0] + 300u), c.r[2].w[0]);
    st32((c.r[18].w[0] + 60u), c.r[3].w[0]);
    c.budget -= 9;
L_00175AC8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_00175CE4; } }
L_00175AD0:
    set32(c.r[2], ld32((c.r[20].w[0] + 28u)));
    set32(c.r[3], c.r[17].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld8((c.r[2].w[0]));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], c.r[17].w[0] << 2);  if (t) { goto L_00175B0C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00175AF0u); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x00175AF0u) [[unlikely]] return; }
L_00175AF0:
    set32(c.r[3], ld32((c.r[2].w[0])));
    st32((c.r[19].w[0] + 48u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    st32((c.r[19].w[0] + 52u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 56u), c.r[2].w[0]);  if (t) { goto L_00175B64; } }
L_00175B0C:
    set32(c.r[2], 0u + 91u);
    set32(c.r[3], c.r[3].w[0] + c.r[29].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 96u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_00175B44; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00175B28u); set32(c.r[4], 0u + 3u);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x00175B28u) [[unlikely]] return; }
L_00175B28:
    set32(c.r[3], ld32((c.r[2].w[0])));
    st32((c.r[19].w[0] + 48u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    st32((c.r[19].w[0] + 52u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 56u), c.r[2].w[0]);  if (t) { goto L_00175B64; } }
L_00175B44:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00175B4Cu);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x00175B4Cu) [[unlikely]] return; }
L_00175B4C:
    set32(c.r[3], ld32((c.r[2].w[0])));
    st32((c.r[19].w[0] + 48u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    st32((c.r[19].w[0] + 52u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    st32((c.r[19].w[0] + 56u), c.r[2].w[0]);
    c.budget -= 6;
L_00175B64:
    set32(c.r[2], c.r[17].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00175B74u); set32(c.r[4], ld32((c.r[2].w[0] + 96u)));  if (depth < kMaxDepth) unit_000B(c, 461u, depth + 1u); else { c.pc = 0x0012FD60u; return; } if (c.pc != 0x00175B74u) [[unlikely]] return; }
L_00175B74:
    st32((c.r[19].w[0] + 352u), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42A40000u);
    set32(c.r[2], c.r[17].w[0] << 3);
    st32((c.r[19].w[0] + 356u), 0u);
    set32(c.r[4], c.r[2].w[0] - c.r[17].w[0]);
    set32(c.r[25], ld32((c.r[19].w[0] + 176u)));
    set32(c.r[2], c.r[4].w[0] << 2);
    set32(c.r[4], c.r[2].w[0] - c.r[4].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    set32(c.r[16], c.r[4].w[0] + 186u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.f[0] = c.r[2].w[0];
    c.f[1] = c.r[16].w[0];
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.f[14] = fp::cvt_s_w(c.f[0]);
    c.f[12] = c.r[3].w[0];
    c.budget -= 19;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00175BC0u); c.f[13] = fp::cvt_s_w(c.f[1]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00175BC0u) [[unlikely]] return; }
L_00175BC0:
    set32(c.r[2], ld32((c.r[20].w[0] + 24u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 24u)));
    c.budget -= 4;
    { const bool t = c.r[17].d[0] != c.r[2].d[0];  if (t) { goto L_00175CA0; } }
    set32(c.r[3], ld32((c.r[20].w[0] + 8u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[4], 0u + 4u);  if (t) { goto L_00175C08; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00175BE8u);  if (depth < kMaxDepth) unit_001D(c, 405u, depth + 1u); else { c.pc = 0x00177600u; return; } if (c.pc != 0x00175BE8u) [[unlikely]] return; }
L_00175BE8:
    set32(c.r[3], ld32((c.r[2].w[0] + 28u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00175C04; } }
    ld128((c.r[20].w[0] + 112u) & ~15u, c.r[2]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st128((c.r[18].w[0] + 48u) & ~15u, c.r[2]);  if (t) { goto L_00175C28; } }
L_00175C04:
    set32(c.r[4], 0u + 4u);
    c.budget -= 1;
L_00175C08:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00175C10u);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x00175C10u) [[unlikely]] return; }
L_00175C10:
    set32(c.r[3], ld32((c.r[2].w[0])));
    st32((c.r[18].w[0] + 48u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    st32((c.r[18].w[0] + 52u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    st32((c.r[18].w[0] + 56u), c.r[2].w[0]);
    c.budget -= 6;
L_00175C28:
    set32(c.r[5], ld32((c.r[19].w[0] + 352u)));
    c.f[0] = c.r[16].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42A40000u);
    c.f[13] = fp::cvt_s_w(c.f[0]);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    st32((c.r[18].w[0] + 352u), c.r[5].w[0]);
    st32((c.r[18].w[0] + 356u), 0u);
    set32(c.r[25], ld32((c.r[18].w[0] + 176u)));
    c.f[0] = c.r[2].w[0];
    c.f[12] = c.r[3].w[0];
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 15;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00175C64u); c.f[14] = fp::cvt_s_w(c.f[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00175C64u) [[unlikely]] return; }
L_00175C64:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    st32((c.r[18].w[0] + 16u), c.r[3].w[0]);
    st32((c.r[18].w[0] + 20u), c.r[2].w[0]);
    st32((c.r[18].w[0] + 24u), c.r[3].w[0]);
    set32(c.r[25], ld32((c.r[18].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 9;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00175C88u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00175C88u) [[unlikely]] return; }
L_00175C88:
    set32(c.r[25], ld32((c.r[19].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00175C98u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00175C98u) [[unlikely]] return; }
L_00175C98:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[17].w[0] + 1u);  if (t) { goto L_00175CE4; } }
L_00175CA0:
    set32(c.r[25], ld32((c.r[19].w[0] + 176u)));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u - 1u);
    set32(c.r[25], ld32((c.r[25].w[0] + 68u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00175CC0u); set32(c.r[8], 0u + 2u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00175CC0u) [[unlikely]] return; }
L_00175CC0:
    set32(c.r[25], ld32((c.r[19].w[0] + 176u)));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u - 1u);
    set32(c.r[25], ld32((c.r[25].w[0] + 68u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00175CE0u); c.r[8].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00175CE0u) [[unlikely]] return; }
L_00175CE0:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_00175CE4:
    set32(c.r[2], ld32((c.r[20].w[0] + 32u)));
    c.r[2].d[0] = c.r[17].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00175AD0u | kUnwind; return; } goto L_00175AD0; } }
L_00175CF4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00175CFCu); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_001D(c, 239u, depth + 1u); else { c.pc = 0x00175D20u; return; } if (c.pc != 0x00175CFCu) [[unlikely]] return; }
L_00175CFC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_00175D20:
    set32(c.r[2], ld32((c.r[4].w[0] + 68u)));
    c.r[5].d[0] = ld8((c.r[4].w[0] + 202u));
    c.f[0] = ld32((c.r[2].w[0] + 12u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[6], c.f[0]);
    c.budget -= 7;
    { const bool t = c.r[5].d[0] == 0ull; set32(c.r[7], 0u + 341u);  if (t) { goto L_00175D4C; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 188u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00175D64; } }
L_00175D4C:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_00175D68; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 188u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00175D68; } }
L_00175D64:
    set32(c.r[7], 0u + 52u);
    c.budget -= 1;
L_00175D68:
    set32(c.r[2], ld32((c.r[4].w[0] + 188u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00175D84; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 72u)));
    c.f[0] = ld32((c.r[2].w[0] + 12u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[6], c.f[0]);
    c.budget -= 4;
L_00175D84:
    set32(c.r[2], ld32((c.r[4].w[0] + 52u)));
    st32((c.r[2].w[0] + 132u), c.r[7].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 52u)));
    st32((c.r[2].w[0] + 128u), c.r[6].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 52u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 148u)));
    c.budget -= 9;
    { const std::uint32_t t = c.r[25].w[0];  c.pc = t; if (t - 0x00174000u < 16384u) { entry = entries_001D[(t - 0x00174000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00175DB0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x6D6E0000u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    set32(c.r[3], c.r[3].w[0] - 15808u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0] + 44u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[1].w[0] + 26392u)));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00175DE8u); c.r[5].d[0] = c.r[2].d[0] | 21335ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x00175DE8u) [[unlikely]] return; }
L_00175DE8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_00175DF4; } }
    set32(c.r[18], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 1;
L_00175DF4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00175DFCu); set32(c.r[4], 0u + 272u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00175DFCu) [[unlikely]] return; }
L_00175DFC:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_00175E24; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00175E14u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0053(c, 93u, depth + 1u); else { c.pc = 0x0024C9A0u; return; } if (c.pc != 0x00175E14u) [[unlikely]] return; }
L_00175E14:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00175E20u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 188u, depth + 1u); else { c.pc = 0x0015ED60u; return; } if (c.pc != 0x00175E20u) [[unlikely]] return; }
L_00175E20:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00175E24:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00175E2Cu); st32((c.r[16].w[0]), c.r[17].w[0]);  if (depth < kMaxDepth) unit_001D(c, 405u, depth + 1u); else { c.pc = 0x00177600u; return; } if (c.pc != 0x00175E2Cu) [[unlikely]] return; }
L_00175E2C:
    set32(c.r[3], ld32((c.r[2].w[0] + 8u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[4], 0u + 272u);  if (t) { goto L_00175E7C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00175E44u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00175E44u) [[unlikely]] return; }
L_00175E44:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_00175E74; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00175E58u);  if (depth < kMaxDepth) unit_001D(c, 405u, depth + 1u); else { c.pc = 0x00177600u; return; } if (c.pc != 0x00175E58u) [[unlikely]] return; }
L_00175E58:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00175E64u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_001D(c, 443u, depth + 1u); else { c.pc = 0x00177A00u; return; } if (c.pc != 0x00175E64u) [[unlikely]] return; }
L_00175E64:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00175E70u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 188u, depth + 1u); else { c.pc = 0x0015ED60u; return; } if (c.pc != 0x00175E70u) [[unlikely]] return; }
L_00175E70:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00175E74:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 4u), c.r[17].w[0]);  if (t) { goto L_00175E80; } }
L_00175E7C:
    st32((c.r[16].w[0] + 4u), 0u);
    c.budget -= 1;
L_00175E80:
    set32(c.r[25], ld32((c.r[16].w[0] + 44u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00175E90u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00175E90u) [[unlikely]] return; }
L_00175E90:
    st32((c.r[16].w[0] + 20u), 0u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 24u), 0u);
    st32((c.r[16].w[0] + 28u), 0u);
    st32((c.r[16].w[0] + 36u), 0u);
    st32((c.r[16].w[0] + 32u), 0u);
    st8((c.r[16].w[0] + 40u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 41u), static_cast<std::uint8_t>(0u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00175ED0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] - 15808u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[7].d[0] + 0ull;
    st32((c.r[4].w[0] + 44u), c.r[2].w[0]);
    c.r[16].d[0] = c.r[8].d[0] + 0ull;
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00175F18u); set32(c.r[4], 0u + 272u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00175F18u) [[unlikely]] return; }
L_00175F18:
    c.r[21].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[21].d[0] == 0ull;  if (t) { goto L_00175F48; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00175F2Cu);  if (depth < kMaxDepth) unit_001D(c, 405u, depth + 1u); else { c.pc = 0x00177600u; return; } if (c.pc != 0x00175F2Cu) [[unlikely]] return; }
L_00175F2C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00175F38u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_001D(c, 443u, depth + 1u); else { c.pc = 0x00177A00u; return; } if (c.pc != 0x00175F38u) [[unlikely]] return; }
L_00175F38:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00175F44u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 188u, depth + 1u); else { c.pc = 0x0015ED60u; return; } if (c.pc != 0x00175F44u) [[unlikely]] return; }
L_00175F44:
    c.r[21].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00175F48:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00175F50u); st32((c.r[20].w[0]), c.r[21].w[0]);  if (depth < kMaxDepth) unit_001D(c, 405u, depth + 1u); else { c.pc = 0x00177600u; return; } if (c.pc != 0x00175F50u) [[unlikely]] return; }
L_00175F50:
    set32(c.r[3], ld32((c.r[2].w[0] + 8u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[4], 0u + 272u);  if (t) { goto L_00175FA0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00175F68u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00175F68u) [[unlikely]] return; }
L_00175F68:
    c.r[21].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[21].d[0] == 0ull;  if (t) { goto L_00175F98; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00175F7Cu);  if (depth < kMaxDepth) unit_001D(c, 405u, depth + 1u); else { c.pc = 0x00177600u; return; } if (c.pc != 0x00175F7Cu) [[unlikely]] return; }
L_00175F7C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00175F88u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_001D(c, 443u, depth + 1u); else { c.pc = 0x00177A00u; return; } if (c.pc != 0x00175F88u) [[unlikely]] return; }
L_00175F88:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00175F94u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 188u, depth + 1u); else { c.pc = 0x0015ED60u; return; } if (c.pc != 0x00175F94u) [[unlikely]] return; }
L_00175F94:
    c.r[21].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00175F98:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 4u), c.r[21].w[0]);  if (t) { goto L_00175FA4; } }
L_00175FA0:
    st32((c.r[20].w[0] + 4u), 0u);
    c.budget -= 1;
L_00175FA4:
    set32(c.r[25], ld32((c.r[20].w[0] + 44u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00175FB4u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00175FB4u) [[unlikely]] return; }
L_00175FB4:
    st32((c.r[20].w[0] + 20u), c.r[19].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    st32((c.r[20].w[0] + 24u), c.r[18].w[0]);
    c.r[2].d[0] = c.r[20].d[0] + 0ull;
    st32((c.r[20].w[0] + 28u), 0u);
    st32((c.r[20].w[0] + 36u), c.r[3].w[0]);
    st32((c.r[20].w[0] + 32u), c.r[17].w[0]);
    st8((c.r[20].w[0] + 40u), static_cast<std::uint8_t>(c.r[16].w[0]));
    st8((c.r[20].w[0] + 41u), static_cast<std::uint8_t>(0u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 18;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_00176000:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 9;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00176100; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] - 15808u);
    st32((c.r[17].w[0] + 44u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00176054; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00176054; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00176054u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00176054u) [[unlikely]] return; }
L_00176054:
    st32((c.r[17].w[0]), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0017607C; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0017607C; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0017607Cu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0017607Cu) [[unlikely]] return; }
L_0017607C:
    st32((c.r[17].w[0] + 4u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 8u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001760A4; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001760A4; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001760A4u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001760A4u) [[unlikely]] return; }
L_001760A4:
    st32((c.r[17].w[0] + 8u), 0u);
    c.r[19].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_001760AC:
    set32(c.r[2], c.r[19].w[0] << 2);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[18], c.r[2].w[0] + 12u);  if (t) { goto L_001760D8; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001760D8; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001760D8u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001760D8u) [[unlikely]] return; }
L_001760D8:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.r[2].d[0] = c.r[19].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[18].w[0]), 0u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001760ACu | kUnwind; return; } goto L_001760AC; } }
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00176104; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00176100u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x00176100u) [[unlikely]] return; }
L_00176100:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00176104:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00176120:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017613Cu); set32(c.r[4], 0u + 256u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0017613Cu) [[unlikely]] return; }
L_0017613C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0017614C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017614Cu);  if (depth < kMaxDepth) unit_0017(c, 177u, depth + 1u); else { c.pc = 0x0015E070u; return; } if (c.pc != 0x0017614Cu) [[unlikely]] return; }
L_0017614C:
    st32((c.r[17].w[0] + 8u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], ld32((c.r[1].w[0] + 20144u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42900000u);
    set32(c.r[5], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[4], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[3].w[0] + c.r[1].w[0]);
    c.f[0] = ld32((c.r[1].w[0] + 1420u));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[5].w[0] + 160u), c.f[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00176180u); st32((c.r[5].w[0] + 164u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x00176180u) [[unlikely]] return; }
L_00176180:
    set32(c.r[4], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[2].w[0])));
    st32((c.r[4].w[0] + 48u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    st32((c.r[4].w[0] + 52u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001761A0u); st32((c.r[4].w[0] + 56u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_001D(c, 405u, depth + 1u); else { c.pc = 0x00177600u; return; } if (c.pc != 0x001761A0u) [[unlikely]] return; }
L_001761A0:
    set32(c.r[5], ld32((c.r[2].w[0] + 12u)));
    set32(c.r[4], c.r[29].w[0] + 48u);
    set32(c.r[16], 0u + 199u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00410000u);
    set32(c.r[2], c.r[2].w[0] + 3200u);
    ld128((c.r[2].w[0]) & ~15u, c.r[3]);
    set32(c.r[2], 0u + 2u);
    c.budget -= 9;
    { const bool t = c.r[5].d[0] != c.r[2].d[0]; st128((c.r[4].w[0]) & ~15u, c.r[3]);  if (t) { goto L_001761E0; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = ld32((c.r[1].w[0] + 4080u));
    set32(c.r[16], 0u + 823u);
    st32((c.r[29].w[0] + 52u), c.r[2].w[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 48u), c.f[0]);  if (t) { goto L_00176204; } }
L_001761E0:
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[2].d[0]; set32(c.r[4], 0u + 272u);  if (t) { goto L_00176208; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = ld32((c.r[1].w[0] + 4080u));
    set32(c.r[16], 0u + 824u);
    st32((c.r[29].w[0] + 52u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 48u), c.f[0]);
    c.budget -= 6;
L_00176204:
    set32(c.r[4], 0u + 272u);
    c.budget -= 1;
L_00176208:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00176210u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00176210u) [[unlikely]] return; }
L_00176210:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);  if (t) { goto L_0017622C; } }
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[1].w[0] + 26392u)));
    set32(c.r[5], ld32((c.r[3].w[0] + 224u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017622Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0018(c, 110u, depth + 1u); else { c.pc = 0x001630C0u; return; } if (c.pc != 0x0017622Cu) [[unlikely]] return; }
L_0017622C:
    st32((c.r[17].w[0] + 12u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00176238u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x00176238u) [[unlikely]] return; }
L_00176238:
    set32(c.r[6], ld32((c.r[17].w[0] + 12u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[5], ld32((c.r[2].w[0])));
    set32(c.r[3], 0u + 1u);
    set32(c.r[16], 0u + 7u);
    st32((c.r[6].w[0] + 48u), c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0] + 4u)));
    st32((c.r[6].w[0] + 52u), c.r[5].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    st32((c.r[6].w[0] + 56u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 12u)));
    c.f[0] = ld32((c.r[29].w[0] + 48u));
    st32((c.r[2].w[0] + 16u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 52u));
    st32((c.r[2].w[0] + 20u), c.f[0]);
    st32((c.r[2].w[0] + 24u), c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00176284u); st8((c.r[2].w[0] + 268u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_001D(c, 405u, depth + 1u); else { c.pc = 0x00177600u; return; } if (c.pc != 0x00176284u) [[unlikely]] return; }
L_00176284:
    set32(c.r[2], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u + 272u);  if (t) { goto L_00176294; } }
    set32(c.r[16], 0u + 263u);
    c.budget -= 1;
L_00176294:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017629Cu);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0017629Cu) [[unlikely]] return; }
L_0017629C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);  if (t) { goto L_001762B8; } }
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[1].w[0] + 26392u)));
    set32(c.r[5], ld32((c.r[3].w[0] + 440u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001762B8u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0018(c, 110u, depth + 1u); else { c.pc = 0x001630C0u; return; } if (c.pc != 0x001762B8u) [[unlikely]] return; }
L_001762B8:
    st32((c.r[17].w[0] + 16u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001762C4u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x001762C4u) [[unlikely]] return; }
L_001762C4:
    set32(c.r[6], ld32((c.r[17].w[0] + 16u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[5], ld32((c.r[2].w[0])));
    set32(c.r[4], 0u + 1u);
    st32((c.r[6].w[0] + 48u), c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0] + 4u)));
    st32((c.r[6].w[0] + 52u), c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0] + 8u)));
    st32((c.r[6].w[0] + 56u), c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[17].w[0] + 16u)));
    st32((c.r[5].w[0] + 16u), c.r[3].w[0]);
    st32((c.r[5].w[0] + 20u), c.r[3].w[0]);
    st32((c.r[5].w[0] + 24u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 16u)));
    st8((c.r[3].w[0] + 268u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 20;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00176320:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].d[0] = ld8((c.r[4].w[0] + 40u));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00176344; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_001763AC; } }
L_00176344:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017634Cu);  if (depth < kMaxDepth) unit_001D(c, 405u, depth + 1u); else { c.pc = 0x00177600u; return; } if (c.pc != 0x0017634Cu) [[unlikely]] return; }
L_0017634C:
    set32(c.r[16], ld32((c.r[2].w[0] + 12u)));
    set32(c.r[2], c.r[16].w[0] - 1u);
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0017636C; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[2].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001763AC; } }
L_0017636C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00176374u); set32(c.r[4], ld32((c.r[17].w[0] + 20u)));  if (depth < kMaxDepth) unit_001C(c, 335u, depth + 1u); else { c.pc = 0x00173940u; return; } if (c.pc != 0x00176374u) [[unlikely]] return; }
L_00176374:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00176384; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_001763AC; } }
L_00176384:
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[2].d[0];  if (t) { goto L_001763A8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00176398u); set32(c.r[4], ld32((c.r[17].w[0] + 20u)));  if (depth < kMaxDepth) unit_001C(c, 365u, depth + 1u); else { c.pc = 0x00173F60u; return; } if (c.pc != 0x00176398u) [[unlikely]] return; }
L_00176398:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001763A8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_001763AC; } }
L_001763A8:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001763AC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001763C0:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 41u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_001763D0:
    set32(c.r[29], c.r[29].w[0] - 128u);
    set32(c.r[3], 0u - 1u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0] + 24u)));
    c.budget -= 11;
    { const bool t = c.r[5].d[0] != c.r[3].d[0]; c.r[20].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00176414; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 44u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0017640Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0017640Cu) [[unlikely]] return; }
L_0017640C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));  if (t) { goto L_00176BAC; } }
L_00176414:
    set32(c.r[3], ld32((c.r[20].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);  if (t) { goto L_00176BA8; } }
    set32(c.r[2], ld32((c.r[1].w[0] + 26392u)));
    set32(c.r[16], ld32((c.r[2].w[0] + 332u)));
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; set32(c.r[6], c.r[5].w[0] + 1u);  if (t) { goto L_00176540; } }
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00176440u); set32(c.r[5], c.r[5].w[0] + 4008u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x00127458u; return; } if (c.pc != 0x00176440u) [[unlikely]] return; }
L_00176440:
    set32(c.r[2], c.r[29].w[0] + 96u);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    st32((c.r[16].w[0] + 352u), c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00176454u); st32((c.r[16].w[0] + 356u), 0u);  if (depth < kMaxDepth) unit_001D(c, 281u, depth + 1u); else { c.pc = 0x00176320u; return; } if (c.pc != 0x00176454u) [[unlikely]] return; }
L_00176454:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_00176470; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00176464u); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x00176464u) [[unlikely]] return; }
L_00176464:
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st128((c.r[16].w[0] + 48u) & ~15u, c.r[2]);  if (t) { goto L_00176480; } }
L_00176470:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00176478u);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x00176478u) [[unlikely]] return; }
L_00176478:
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    st128((c.r[16].w[0] + 48u) & ~15u, c.r[2]);
    c.budget -= 2;
L_00176480:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x44100000u);
    c.f[0] = c.r[2].w[0];
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = ld32((c.r[1].w[0] + 4072u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[14] = fp::cvt_s_w(c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    st32((c.r[16].w[0] + 16u), c.f[1]);
    c.f[0] = ld32((c.r[1].w[0] + 4072u));
    c.f[12] = c.r[3].w[0];
    st32((c.r[16].w[0] + 20u), c.f[0]);
    st32((c.r[16].w[0] + 24u), c.r[5].w[0]);
    c.f[0] = ld32((c.r[20].w[0] + 36u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    st32((c.r[16].w[0] + 60u), c.r[2].w[0]);
    c.f[0] = ld32((c.r[20].w[0] + 36u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    st32((c.r[16].w[0] + 300u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 28u)));
    set32(c.r[25], ld32((c.r[16].w[0] + 176u)));
    set32(c.r[2], c.r[2].w[0] + 26u);
    c.f[0] = c.r[2].w[0];
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 32;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00176500u); c.f[13] = fp::cvt_s_w(c.f[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00176500u) [[unlikely]] return; }
L_00176500:
    set32(c.r[25], ld32((c.r[16].w[0] + 176u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u - 1u);
    set32(c.r[25], ld32((c.r[25].w[0] + 68u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00176520u); set32(c.r[8], 0u + 2u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00176520u) [[unlikely]] return; }
L_00176520:
    set32(c.r[25], ld32((c.r[16].w[0] + 176u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u - 1u);
    set32(c.r[25], ld32((c.r[25].w[0] + 68u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00176540u); c.r[8].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00176540u) [[unlikely]] return; }
L_00176540:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00176548u);  if (depth < kMaxDepth) unit_001D(c, 405u, depth + 1u); else { c.pc = 0x00177600u; return; } if (c.pc != 0x00176548u) [[unlikely]] return; }
L_00176548:
    set32(c.r[4], ld32((c.r[2].w[0] + 8u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00176780; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00176560u); set32(c.r[4], ld32((c.r[20].w[0] + 20u)));  if (depth < kMaxDepth) unit_001C(c, 335u, depth + 1u); else { c.pc = 0x00173940u; return; } if (c.pc != 0x00176560u) [[unlikely]] return; }
L_00176560:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001766B0; } }
    set32(c.r[3], ld32((c.r[20].w[0] + 20u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 23u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_00176580; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001766B0; } }
L_00176580:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00176588u);  if (depth < kMaxDepth) unit_001D(c, 405u, depth + 1u); else { c.pc = 0x00177600u; return; } if (c.pc != 0x00176588u) [[unlikely]] return; }
L_00176588:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00176590u);  if (depth < kMaxDepth) unit_0051(c, 417u, depth + 1u); else { c.pc = 0x00247DD0u; return; } if (c.pc != 0x00176590u) [[unlikely]] return; }
L_00176590:
    set32(c.r[4], ld32((c.r[20].w[0] + 20u)));
    set32(c.r[3], 0u + 1u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 23u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[5], 0u + 3u);  if (t) { goto L_001765A8; } }
    set32(c.r[5], 0u + 2u);
    c.budget -= 1;
L_001765A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001765B0u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0052(c, 32u, depth + 1u); else { c.pc = 0x002482F0u; return; } if (c.pc != 0x001765B0u) [[unlikely]] return; }
L_001765B0:
    st64((c.r[29].w[0] + 120u), c.r[2].d[0]);
    set32(c.r[5], c.r[29].w[0] + 120u);
    set32(c.r[6], ld32((c.r[20].w[0] + 4u)));
    set32(c.r[3], c.r[29].w[0] + 112u);
    set32(c.r[4], 0u + 1u);
    st64((c.r[6].w[0] + 256u), c.r[2].d[0]);
    c.r[2].d[0] = ld64((c.r[5].w[0]));
    st64((c.r[3].w[0]), c.r[2].d[0]);
    c.r[2].d[0] = ld8((c.r[29].w[0] + 115u));
    c.r[2].d[0] = c.r[2].d[0] << 58;
    c.r[2].d[0] = c.r[2].d[0] >> 60;
    set32(c.r[2], c.r[4].w[0] << (c.r[2].w[0] & 31u));
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[6].w[0] + 160u), c.f[0]);
    c.r[2].d[0] = ld64((c.r[29].w[0] + 112u));
    c.r[2].d[0] = c.r[2].d[0] << 30;
    c.r[2].d[0] = c.r[2].d[0] >> 60;
    set32(c.r[2], c.r[4].w[0] << (c.r[2].w[0] & 31u));
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[6].w[0] + 164u), c.f[0]);
    c.f[0] = ld32((c.r[20].w[0] + 36u));
    set32(c.r[2], ld32((c.r[20].w[0] + 4u)));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    st32((c.r[2].w[0] + 60u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 20u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 23u)));
    c.budget -= 34;
    { const bool t = c.r[2].d[0] != c.r[4].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);  if (t) { goto L_00176644; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = ld32((c.r[1].w[0] + 4080u));  if (t) { goto L_00176648; } }
L_00176644:
    c.f[1] = ld32((c.r[1].w[0] + 4064u));
    c.budget -= 1;
L_00176648:
    set32(c.r[5], ld32((c.r[20].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x44100000u);
    c.f[0] = c.r[2].w[0];
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[3].w[0];
    c.f[14] = fp::cvt_s_w(c.f[0]);
    st32((c.r[5].w[0] + 16u), c.f[1]);
    st32((c.r[5].w[0] + 20u), c.f[1]);
    st32((c.r[5].w[0] + 24u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[20].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[20].w[0] + 28u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[2], c.r[2].w[0] + 52u);
    c.f[0] = c.r[2].w[0];
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 19;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00176694u); c.f[13] = fp::cvt_s_w(c.f[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00176694u) [[unlikely]] return; }
L_00176694:
    set32(c.r[4], ld32((c.r[20].w[0] + 4u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 56u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001766A8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001766A8u) [[unlikely]] return; }
L_001766A8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00176780; } }
L_001766B0:
    set32(c.r[3], ld32((c.r[20].w[0] + 20u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 22u)));
    c.budget -= 4;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_00176780; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001766C8u); set32(c.r[4], 0u + 3u);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x001766C8u) [[unlikely]] return; }
L_001766C8:
    set32(c.r[6], ld32((c.r[2].w[0])));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[4], 0u + 822u);
    st32((c.r[16].w[0] + 48u), c.r[6].w[0]);
    set32(c.r[6], ld32((c.r[2].w[0] + 4u)));
    st32((c.r[16].w[0] + 52u), c.r[6].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    st32((c.r[16].w[0] + 56u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 16u), c.r[5].w[0]);
    st32((c.r[16].w[0] + 20u), c.r[5].w[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001766FCu); st32((c.r[16].w[0] + 24u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_000B(c, 461u, depth + 1u); else { c.pc = 0x0012FD60u; return; } if (c.pc != 0x001766FCu) [[unlikely]] return; }
L_001766FC:
    st32((c.r[16].w[0] + 352u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x44100000u);
    st32((c.r[16].w[0] + 356u), 0u);
    c.f[12] = c.r[2].w[0];
    set32(c.r[25], ld32((c.r[16].w[0] + 176u)));
    set32(c.r[3], ld32((c.r[20].w[0] + 28u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.f[0] = c.r[2].w[0];
    c.f[14] = fp::cvt_s_w(c.f[0]);
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    set32(c.r[2], c.r[3].w[0] + 52u);
    c.f[0] = c.r[2].w[0];
    c.budget -= 17;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00176740u); c.f[13] = fp::cvt_s_w(c.f[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00176740u) [[unlikely]] return; }
L_00176740:
    set32(c.r[25], ld32((c.r[16].w[0] + 176u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u - 1u);
    set32(c.r[25], ld32((c.r[25].w[0] + 68u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00176760u); set32(c.r[8], 0u + 2u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00176760u) [[unlikely]] return; }
L_00176760:
    set32(c.r[25], ld32((c.r[16].w[0] + 176u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u - 1u);
    set32(c.r[25], ld32((c.r[25].w[0] + 68u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00176780u); c.r[8].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00176780u) [[unlikely]] return; }
L_00176780:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], ld32((c.r[1].w[0] + 26392u)));
    set32(c.r[19], ld32((c.r[3].w[0] + 440u)));
    c.budget -= 5;
    { const bool t = c.r[19].d[0] == 0ull; c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_00176AC8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017679Cu);  if (depth < kMaxDepth) unit_001D(c, 281u, depth + 1u); else { c.pc = 0x00176320u; return; } if (c.pc != 0x0017679Cu) [[unlikely]] return; }
L_0017679C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_001767B8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001767ACu); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x001767ACu) [[unlikely]] return; }
L_001767AC:
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st128((c.r[19].w[0] + 48u) & ~15u, c.r[2]);  if (t) { goto L_001767C8; } }
L_001767B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001767C0u);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x001767C0u) [[unlikely]] return; }
L_001767C0:
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    st128((c.r[19].w[0] + 48u) & ~15u, c.r[2]);
    c.budget -= 2;
L_001767C8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43C70000u);
    c.f[0] = c.r[2].w[0];
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = ld32((c.r[1].w[0] + 4056u));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.f[14] = fp::cvt_s_w(c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    st32((c.r[19].w[0] + 16u), c.f[1]);
    c.f[0] = ld32((c.r[1].w[0] + 4056u));
    c.f[12] = c.r[3].w[0];
    st32((c.r[19].w[0] + 20u), c.f[0]);
    st32((c.r[19].w[0] + 24u), c.r[5].w[0]);
    c.f[0] = ld32((c.r[20].w[0] + 36u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    st32((c.r[19].w[0] + 60u), c.r[2].w[0]);
    c.f[0] = ld32((c.r[20].w[0] + 36u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    st32((c.r[19].w[0] + 300u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 20u)));
    st32((c.r[19].w[0] + 352u), c.r[2].w[0]);
    st32((c.r[19].w[0] + 356u), 0u);
    set32(c.r[2], ld32((c.r[20].w[0] + 28u)));
    set32(c.r[25], ld32((c.r[19].w[0] + 176u)));
    set32(c.r[2], c.r[2].w[0] + 26u);
    c.f[0] = c.r[2].w[0];
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 35;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00176854u); c.f[13] = fp::cvt_s_w(c.f[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00176854u) [[unlikely]] return; }
L_00176854:
    set32(c.r[25], ld32((c.r[19].w[0] + 176u)));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u - 1u);
    set32(c.r[25], ld32((c.r[25].w[0] + 68u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00176874u); set32(c.r[8], 0u + 2u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00176874u) [[unlikely]] return; }
L_00176874:
    set32(c.r[25], ld32((c.r[19].w[0] + 176u)));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u - 1u);
    set32(c.r[25], ld32((c.r[25].w[0] + 68u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00176894u); c.r[8].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00176894u) [[unlikely]] return; }
L_00176894:
    set32(c.r[3], ld32((c.r[20].w[0] + 20u)));
    set32(c.r[2], 0u + 2u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 22u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 3u);  if (t) { goto L_001768B4; } }
    set32(c.r[2], ld32((c.r[20].w[0] + 28u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[18], c.r[2].w[0] + 52u);  if (t) { goto L_001768C4; } }
L_001768B4:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[18], 0u - 1u);  if (t) { goto L_001768C4; } }
    set32(c.r[2], ld32((c.r[20].w[0] + 28u)));
    set32(c.r[18], c.r[2].w[0] + 44u);
    c.budget -= 2;
L_001768C4:
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == c.r[2].d[0]; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_001769D0; } }
    c.r[2].d[0] = ld8((c.r[20].w[0] + 41u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);  if (t) { goto L_001769B8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = ld32((c.r[1].w[0] + 4048u));
    c.r[17].d[0] = 0ull + 0ull;
    st32((c.r[19].w[0] + 16u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = ld32((c.r[1].w[0] + 4048u));
    st32((c.r[19].w[0] + 20u), c.f[0]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 24u), c.r[2].w[0]);  if (t) { goto L_001769A4; } }
L_00176900:
    set32(c.r[2], 0u + 25500u);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    c.r[4].d[0] = ld16((c.r[3].w[0] + 26u));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_001769A0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017691Cu);  if (depth < kMaxDepth) unit_000B(c, 102u, depth + 1u); else { c.pc = 0x0012CDE0u; return; } if (c.pc != 0x0017691Cu) [[unlikely]] return; }
L_0017691C:
    st32((c.r[19].w[0] + 352u), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43C70000u);
    set32(c.r[2], c.r[17].w[0] << 4);
    st32((c.r[19].w[0] + 356u), 0u);
    set32(c.r[2], c.r[2].w[0] - c.r[17].w[0]);
    set32(c.r[25], ld32((c.r[19].w[0] + 176u)));
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.f[0] = c.r[2].w[0];
    c.f[12] = c.r[3].w[0];
    c.f[13] = fp::cvt_s_w(c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.f[0] = c.r[2].w[0];
    c.budget -= 17;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00176960u); c.f[14] = fp::cvt_s_w(c.f[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00176960u) [[unlikely]] return; }
L_00176960:
    set32(c.r[25], ld32((c.r[19].w[0] + 176u)));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u - 1u);
    set32(c.r[25], ld32((c.r[25].w[0] + 68u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00176980u); set32(c.r[8], 0u + 2u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00176980u) [[unlikely]] return; }
L_00176980:
    set32(c.r[25], ld32((c.r[19].w[0] + 176u)));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u - 1u);
    set32(c.r[25], ld32((c.r[25].w[0] + 68u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001769A0u); c.r[8].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001769A0u) [[unlikely]] return; }
L_001769A0:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_001769A4:
    set32(c.r[4], ld32((c.r[20].w[0] + 20u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 22u)));
    c.r[2].d[0] = c.r[17].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], c.r[17].w[0] << 1);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00176900u | kUnwind; return; } goto L_00176900; } }
L_001769B8:
    set32(c.r[25], ld32((c.r[20].w[0] + 44u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001769C8u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001769C8u) [[unlikely]] return; }
L_001769C8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00176AC8; } }
L_001769D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001769D8u);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x001769D8u) [[unlikely]] return; }
L_001769D8:
    ld128((c.r[2].w[0]) & ~15u, c.r[3]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[4], 0u + 211u);
    st128((c.r[16].w[0] + 48u) & ~15u, c.r[3]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E800000u);
    c.f[0] = ld32((c.r[20].w[0] + 36u));
    c.f[1] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    st32((c.r[16].w[0] + 60u), c.r[3].w[0]);
    c.f[0] = ld32((c.r[1].w[0] + 4040u));
    st32((c.r[16].w[0] + 16u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = ld32((c.r[1].w[0] + 4040u));
    st32((c.r[16].w[0] + 20u), c.f[0]);
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00176A28u); st32((c.r[16].w[0] + 24u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000B(c, 461u, depth + 1u); else { c.pc = 0x0012FD60u; return; } if (c.pc != 0x00176A28u) [[unlikely]] return; }
L_00176A28:
    st32((c.r[16].w[0] + 352u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    st32((c.r[16].w[0] + 356u), 0u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    set32(c.r[3], ld32((c.r[1].w[0] + 20144u)));
    c.f[0] = c.r[2].w[0];
    set32(c.r[25], ld32((c.r[16].w[0] + 176u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[20].w[0] + 28u)));
    c.f[14] = fp::cvt_s_w(c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[3].w[0] + c.r[1].w[0]);
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[1].w[0] + 1420u)));
    set32(c.r[2], c.r[2].w[0] + 50u);
    c.f[0] = c.r[2].w[0];
    c.f[13] = fp::cvt_s_w(c.f[0]);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 1));
    c.f[0] = c.r[2].w[0];
    c.budget -= 23;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00176A84u); c.f[12] = fp::cvt_s_w(c.f[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00176A84u) [[unlikely]] return; }
L_00176A84:
    set32(c.r[25], ld32((c.r[16].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00176A94u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00176A94u) [[unlikely]] return; }
L_00176A94:
    c.f[0] = ld32((c.r[20].w[0] + 36u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    st32((c.r[16].w[0] + 60u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 24u), c.r[2].w[0]);
    set32(c.r[25], ld32((c.r[16].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 13;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00176AC8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00176AC8u) [[unlikely]] return; }
L_00176AC8:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00176BA8; } }
    c.r[3].d[0] = ld8((c.r[20].w[0] + 41u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[4], 0u + 3u);  if (t) { goto L_00176BA8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00176AE4u);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x00176AE4u) [[unlikely]] return; }
L_00176AE4:
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[4], 0u + 825u);
    st32((c.r[16].w[0] + 48u), c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0] + 4u)));
    st32((c.r[16].w[0] + 52u), c.r[5].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    st32((c.r[16].w[0] + 56u), c.r[2].w[0]);
    c.f[0] = ld32((c.r[1].w[0] + 4080u));
    st32((c.r[16].w[0] + 16u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = ld32((c.r[1].w[0] + 4080u));
    st32((c.r[16].w[0] + 20u), c.f[0]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00176B24u); st32((c.r[16].w[0] + 24u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_000B(c, 461u, depth + 1u); else { c.pc = 0x0012FD60u; return; } if (c.pc != 0x00176B24u) [[unlikely]] return; }
L_00176B24:
    st32((c.r[16].w[0] + 352u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43C70000u);
    st32((c.r[16].w[0] + 356u), 0u);
    c.f[12] = c.r[2].w[0];
    set32(c.r[25], ld32((c.r[16].w[0] + 176u)));
    set32(c.r[3], ld32((c.r[20].w[0] + 28u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.f[0] = c.r[2].w[0];
    c.f[14] = fp::cvt_s_w(c.f[0]);
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    set32(c.r[2], c.r[3].w[0] + 60u);
    c.f[0] = c.r[2].w[0];
    c.budget -= 17;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00176B68u); c.f[13] = fp::cvt_s_w(c.f[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00176B68u) [[unlikely]] return; }
L_00176B68:
    set32(c.r[25], ld32((c.r[16].w[0] + 176u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u - 1u);
    set32(c.r[25], ld32((c.r[25].w[0] + 68u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00176B88u); set32(c.r[8], 0u + 2u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00176B88u) [[unlikely]] return; }
L_00176B88:
    set32(c.r[25], ld32((c.r[16].w[0] + 176u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u - 1u);
    set32(c.r[25], ld32((c.r[25].w[0] + 68u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00176BA8u); c.r[8].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00176BA8u) [[unlikely]] return; }
L_00176BA8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.budget -= 1;
L_00176BAC:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_00176BD0:
    set32(c.r[29], c.r[29].w[0] - 128u);
    set32(c.r[2], 0u + 2u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 20u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 22u)));
    c.budget -= 13;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_00176C10; } }
    set32(c.r[19], 0u + 59u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[18], 0u + 96u);  if (t) { goto L_00176C24; } }
L_00176C10:
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[19], 0u - 1u);  if (t) { goto L_00176C24; } }
    set32(c.r[19], 0u + 16u);
    set32(c.r[18], 0u + 86u);
    c.budget -= 2;
L_00176C24:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00176C2Cu); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_001D(c, 281u, depth + 1u); else { c.pc = 0x00176320u; return; } if (c.pc != 0x00176C2Cu) [[unlikely]] return; }
L_00176C2C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);  if (t) { goto L_00176C5C; } }
    set32(c.r[3], ld32((c.r[20].w[0])));
    c.f[1] = ld32((c.r[1].w[0] + 4032u));
    c.f[0] = ld32((c.r[20].w[0] + 36u));
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[4], c.f[0]);
    st32((c.r[3].w[0] + 48u), c.r[4].w[0]);
    st32((c.r[3].w[0] + 52u), c.r[4].w[0]);
    st32((c.r[3].w[0] + 56u), c.r[4].w[0]);
    c.budget -= 10;
L_00176C5C:
    c.f[0] = ld32((c.r[20].w[0] + 36u));
    set32(c.r[3], ld32((c.r[20].w[0])));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[4], c.f[0]);
    c.budget -= 6;
    { const bool t = c.r[19].d[0] == 0ull; st32((c.r[3].w[0] + 60u), c.r[4].w[0]);  if (t) { goto L_00176E38; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00176C7Cu);  if (depth < kMaxDepth) unit_0053(c, 78u, depth + 1u); else { c.pc = 0x0024C7C0u; return; } if (c.pc != 0x00176C7Cu) [[unlikely]] return; }
L_00176C7C:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_00176E24; } }
L_00176C88:
    set32(c.r[4], ld32((c.r[20].w[0])));
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u + 128u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00176CA0u); set32(c.r[8], 0u + 104u);  if (depth < kMaxDepth) unit_0017(c, 190u, depth + 1u); else { c.pc = 0x0015EE00u; return; } if (c.pc != 0x00176CA0u) [[unlikely]] return; }
L_00176CA0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[5], ld32((c.r[20].w[0])));
    c.f[0] = ld32((c.r[1].w[0] + 4024u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[4], c.r[16].w[0] << 1);
    set32(c.r[2], 0u + 25500u);
    st32((c.r[5].w[0] + 16u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = ld32((c.r[1].w[0] + 4016u));
    st32((c.r[5].w[0] + 20u), c.f[0]);
    st32((c.r[5].w[0] + 24u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[20].w[0] + 20u)));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].d[0] = ld16((c.r[3].w[0] + 26u));
    c.budget -= 16;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00176D60; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00176CE8u);  if (depth < kMaxDepth) unit_001D(c, 405u, depth + 1u); else { c.pc = 0x00177600u; return; } if (c.pc != 0x00176CE8u) [[unlikely]] return; }
L_00176CE8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00176CF0u);  if (depth < kMaxDepth) unit_0051(c, 417u, depth + 1u); else { c.pc = 0x00247DD0u; return; } if (c.pc != 0x00176CF0u) [[unlikely]] return; }
L_00176CF0:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00176CFCu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0052(c, 32u, depth + 1u); else { c.pc = 0x002482F0u; return; } if (c.pc != 0x00176CFCu) [[unlikely]] return; }
L_00176CFC:
    st64((c.r[29].w[0] + 120u), c.r[2].d[0]);
    set32(c.r[5], c.r[29].w[0] + 120u);
    set32(c.r[6], ld32((c.r[20].w[0])));
    set32(c.r[4], c.r[29].w[0] + 112u);
    set32(c.r[3], 0u + 1u);
    st64((c.r[6].w[0] + 256u), c.r[2].d[0]);
    c.r[2].d[0] = ld64((c.r[5].w[0]));
    st64((c.r[4].w[0]), c.r[2].d[0]);
    c.r[2].d[0] = ld8((c.r[29].w[0] + 115u));
    c.r[2].d[0] = c.r[2].d[0] << 58;
    c.r[2].d[0] = c.r[2].d[0] >> 60;
    set32(c.r[2], c.r[3].w[0] << (c.r[2].w[0] & 31u));
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[6].w[0] + 160u), c.f[0]);
    c.r[2].d[0] = ld64((c.r[29].w[0] + 112u));
    c.r[2].d[0] = c.r[2].d[0] << 30;
    c.r[2].d[0] = c.r[2].d[0] >> 60;
    set32(c.r[2], c.r[3].w[0] << (c.r[2].w[0] & 31u));
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.budget -= 25;
    { const bool t = 0ull == 0ull; st32((c.r[6].w[0] + 164u), c.f[0]);  if (t) { goto L_00176DD4; } }
L_00176D60:
    set32(c.r[2], ld32((c.r[20].w[0] + 32u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00176D74u); set32(c.r[6], c.r[2].w[0] + c.r[16].w[0]);  if (depth < kMaxDepth) unit_0053(c, 93u, depth + 1u); else { c.pc = 0x0024C9A0u; return; } if (c.pc != 0x00176D74u) [[unlikely]] return; }
L_00176D74:
    st64((c.r[29].w[0] + 104u), c.r[2].d[0]);
    set32(c.r[5], c.r[29].w[0] + 104u);
    set32(c.r[6], ld32((c.r[20].w[0])));
    set32(c.r[4], c.r[29].w[0] + 96u);
    set32(c.r[3], 0u + 1u);
    st64((c.r[6].w[0] + 256u), c.r[2].d[0]);
    c.r[2].d[0] = ld64((c.r[5].w[0]));
    st64((c.r[4].w[0]), c.r[2].d[0]);
    c.r[2].d[0] = ld8((c.r[29].w[0] + 99u));
    c.r[2].d[0] = c.r[2].d[0] << 58;
    c.r[2].d[0] = c.r[2].d[0] >> 60;
    set32(c.r[2], c.r[3].w[0] << (c.r[2].w[0] & 31u));
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[6].w[0] + 160u), c.f[0]);
    c.r[2].d[0] = ld64((c.r[29].w[0] + 96u));
    c.r[2].d[0] = c.r[2].d[0] << 30;
    c.r[2].d[0] = c.r[2].d[0] >> 60;
    set32(c.r[2], c.r[3].w[0] << (c.r[2].w[0] & 31u));
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[6].w[0] + 164u), c.f[0]);
    c.budget -= 24;
L_00176DD4:
    set32(c.r[4], ld32((c.r[20].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.f[1] = ld32((c.r[20].w[0] + 28u));
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.f[0] = c.r[2].w[0];
    mmi::mult(c, 0, c.r[16].w[0], c.r[18].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    c.f[14] = fp::cvt_s_w(c.f[0]);
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[2], c.r[19].w[0] + c.r[3].w[0]);
    c.f[2] = c.r[2].w[0];
    c.f[13] = fp::cvt_s_w(c.f[1]);
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 14;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00176E0Cu); c.f[12] = fp::cvt_s_w(c.f[2]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00176E0Cu) [[unlikely]] return; }
L_00176E0C:
    set32(c.r[4], ld32((c.r[20].w[0])));
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00176E20u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00176E20u) [[unlikely]] return; }
L_00176E20:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_00176E24:
    set32(c.r[3], ld32((c.r[20].w[0] + 20u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 22u)));
    c.r[3].d[0] = c.r[16].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00176C88u | kUnwind; return; } goto L_00176C88; } }
L_00176E38:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_00176E60:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42480000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.f[12] = c.r[2].w[0];
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.f[1] = ld32((c.r[4].w[0] + 36u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    set32(c.r[3], ld32((c.r[4].w[0] + 12u)));
    c.f[0] = c.r[2].w[0];
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.f[14] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[2], c.f[1]);
    st32((c.r[3].w[0] + 60u), c.r[2].w[0]);
    c.f[0] = ld32((c.r[4].w[0] + 36u));
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 256u)));
    set32(c.r[3], c.f[0]);
    st32((c.r[2].w[0] + 300u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 28u)));
    set32(c.r[4], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[2], c.r[2].w[0] + 34u);
    c.f[0] = c.r[2].w[0];
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 31;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00176EDCu); c.f[13] = fp::cvt_s_w(c.f[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00176EDCu) [[unlikely]] return; }
L_00176EDC:
    set32(c.r[4], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00176EF0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00176EF0u) [[unlikely]] return; }
L_00176EF0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00176EF8u);  if (depth < kMaxDepth) unit_001D(c, 405u, depth + 1u); else { c.pc = 0x00177600u; return; } if (c.pc != 0x00176EF8u) [[unlikely]] return; }
L_00176EF8:
    set32(c.r[4], ld32((c.r[2].w[0] + 12u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; set32(c.r[3], 0u + 398u);  if (t) { goto L_00176F14; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { goto L_00176F18; } }
L_00176F14:
    set32(c.r[3], c.r[3].w[0] + 110u);
    c.budget -= 1;
L_00176F18:
    c.f[0] = c.r[3].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.f[1] = ld32((c.r[16].w[0] + 36u));
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.f[12] = fp::cvt_s_w(c.f[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 16u)));
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[4], c.f[0]);
    c.f[0] = c.r[2].w[0];
    st32((c.r[3].w[0] + 60u), c.r[4].w[0]);
    c.f[14] = fp::cvt_s_w(c.f[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 16u)));
    c.f[0] = ld32((c.r[16].w[0] + 36u));
    set32(c.r[2], ld32((c.r[2].w[0] + 256u)));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    st32((c.r[2].w[0] + 300u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 28u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[2], c.r[2].w[0] + 50u);
    c.f[0] = c.r[2].w[0];
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 26;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00176F80u); c.f[13] = fp::cvt_s_w(c.f[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00176F80u) [[unlikely]] return; }
L_00176F80:
    set32(c.r[4], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00176F94u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00176F94u) [[unlikely]] return; }
L_00176F94:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00176FB0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 20u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00175030u | kUnwind; return; } goto L_00175030; }
L_00176FC0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 20u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00174DA0u | kUnwind; return; } goto L_00174DA0; }
L_00176FD0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 20u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00174720u | kUnwind; return; } goto L_00174720; }
L_00176FE0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 40u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001759A0u | kUnwind; return; } goto L_001759A0; }
L_00176FF0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 40u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00174720u | kUnwind; return; } goto L_00174720; }
L_00177000:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00177028u); set32(c.r[5], 0u + 17u);  if (depth < kMaxDepth) unit_0010(c, 29u, depth + 1u); else { c.pc = 0x00140690u; return; } if (c.pc != 0x00177028u) [[unlikely]] return; }
L_00177028:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] - 15232u);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00177044u); st32((c.r[18].w[0] + 8u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_001D(c, 400u, depth + 1u); else { c.pc = 0x00177530u; return; } if (c.pc != 0x00177044u) [[unlikely]] return; }
L_00177044:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017704Cu);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x0017704Cu) [[unlikely]] return; }
L_0017704C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.r[2].d[0] = ld8((c.r[1].w[0] - 25569u));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);  if (t) { goto L_0017706C; } }
    set32(c.r[4], ld32((c.r[1].w[0] + 26392u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017706Cu); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_002A(c, 147u, depth + 1u); else { c.pc = 0x001A96C0u; return; } if (c.pc != 0x0017706Cu) [[unlikely]] return; }
L_0017706C:
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00177090:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001770E0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] - 15232u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001770BCu); st32((c.r[17].w[0] + 8u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_001D(c, 403u, depth + 1u); else { c.pc = 0x001775B0u; return; } if (c.pc != 0x001770BCu) [[unlikely]] return; }
L_001770BC:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001770C8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0010(c, 31u, depth + 1u); else { c.pc = 0x00140700u; return; } if (c.pc != 0x001770C8u) [[unlikely]] return; }
L_001770C8:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_001770E4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001770E0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x001770E0u) [[unlikely]] return; }
L_001770E0:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001770E4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00177100:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00177114u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_001D(c, 405u, depth + 1u); else { c.pc = 0x00177600u; return; } if (c.pc != 0x00177114u) [[unlikely]] return; }
L_00177114:
    c.r[3].d[0] = ld8((c.r[2].w[0] + 57u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001771C4; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], 0u + 8u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[4], 0u + 16u);  if (t) { goto L_00177168; } }
    set32(c.r[2], 0u + 36u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[4], 0u + 16u);  if (t) { goto L_00177144; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u + 16u);  if (t) { goto L_0017718C; } }
L_00177144:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017714Cu);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0017714Cu) [[unlikely]] return; }
L_0017714C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_001771A8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00177160u);  if (depth < kMaxDepth) unit_0096(c, 68u, depth + 1u); else { c.pc = 0x00358BA0u; return; } if (c.pc != 0x00177160u) [[unlikely]] return; }
L_00177160:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001771A8; } }
L_00177168:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00177170u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00177170u) [[unlikely]] return; }
L_00177170:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001771A8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00177184u);  if (depth < kMaxDepth) unit_0021(c, 346u, depth + 1u); else { c.pc = 0x00186E50u; return; } if (c.pc != 0x00177184u) [[unlikely]] return; }
L_00177184:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001771A8; } }
L_0017718C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00177194u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00177194u) [[unlikely]] return; }
L_00177194:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001771A8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001771A8u);  if (depth < kMaxDepth) unit_0021(c, 346u, depth + 1u); else { c.pc = 0x00186E50u; return; } if (c.pc != 0x001771A8u) [[unlikely]] return; }
L_001771A8:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_001771C4; } }
    set32(c.r[25], ld32((c.r[16].w[0] + 8u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001771C4u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001771C4u) [[unlikely]] return; }
L_001771C4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001771E0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    c.r[17].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00177208u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_000F(c, 256u, depth + 1u); else { c.pc = 0x0013E440u; return; } if (c.pc != 0x00177208u) [[unlikely]] return; }
L_00177208:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[4], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] - 15248u);
    st32((c.r[19].w[0]), c.r[2].w[0]);
    st32((c.r[19].w[0] + 44u), 0u);
    st32((c.r[19].w[0] + 48u), 0u);
    c.budget -= 8;
    { const bool t = c.r[18].d[0] != c.r[4].d[0]; st32((c.r[19].w[0] + 52u), 0u);  if (t) { goto L_0017727C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00177230u);  if (depth < kMaxDepth) unit_001C(c, 255u, depth + 1u); else { c.pc = 0x00172EF0u; return; } if (c.pc != 0x00177230u) [[unlikely]] return; }
L_00177230:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00177234:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017723Cu);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x0017723Cu) [[unlikely]] return; }
L_0017723C:
    set32(c.r[3], c.r[16].w[0] << 3);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00040000u);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    c.r[1].d[0] = c.r[1].d[0] | 22828ull;
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00177264u); set32(c.r[4], c.r[2].w[0] + c.r[1].w[0]);  if (depth < kMaxDepth) unit_001C(c, 348u, depth + 1u); else { c.pc = 0x00173C40u; return; } if (c.pc != 0x00177264u) [[unlikely]] return; }
L_00177264:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < 27ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00177234u | kUnwind; return; } goto L_00177234; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 8u), c.r[18].w[0]);  if (t) { goto L_00177288; } }
L_0017727C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00177284u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_001C(c, 255u, depth + 1u); else { c.pc = 0x00172EF0u; return; } if (c.pc != 0x00177284u) [[unlikely]] return; }
L_00177284:
    st32((c.r[19].w[0] + 8u), c.r[18].w[0]);
    c.budget -= 1;
L_00177288:
    set32(c.r[4], 0u + 160u);
    st32((c.r[19].w[0] + 12u), c.r[17].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00177298u); st32((c.r[19].w[0] + 28u), 0u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00177298u) [[unlikely]] return; }
L_00177298:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001772AC; } }
    set32(c.r[5], 0u + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001772ACu); set32(c.r[6], 0u + 2u);  if (depth < kMaxDepth) unit_002A(c, 287u, depth + 1u); else { c.pc = 0x001AB200u; return; } if (c.pc != 0x001772ACu) [[unlikely]] return; }
L_001772AC:
    st32((c.r[19].w[0] + 24u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 26392u)));
    set32(c.r[5], 0u + 10000u);
    set32(c.r[16], c.r[2].w[0] + 624u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001772C8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002A(c, 5u, depth + 1u); else { c.pc = 0x001A80A0u; return; } if (c.pc != 0x001772C8u) [[unlikely]] return; }
L_001772C8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001772D8u); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_002A(c, 3u, depth + 1u); else { c.pc = 0x001A8060u; return; } if (c.pc != 0x001772D8u) [[unlikely]] return; }
L_001772D8:
    set32(c.r[4], ld32((c.r[19].w[0] + 24u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001772E8u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 322u, depth + 1u); else { c.pc = 0x00196E30u; return; } if (c.pc != 0x001772E8u) [[unlikely]] return; }
L_001772E8:
    set32(c.r[6], ld32((c.r[19].w[0] + 24u)));
    set32(c.r[5], 0u + 1u);
    set32(c.r[3], 0u + 13312u);
    set32(c.r[2], 0u + 15295u);
    set32(c.r[4], c.r[29].w[0] + 92u);
    st32((c.r[6].w[0] + 104u), 0u);
    st32((c.r[19].w[0] + 16u), 0u);
    st32((c.r[19].w[0] + 20u), 0u);
    st32((c.r[19].w[0] + 40u), 0u);
    st8((c.r[19].w[0] + 56u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[19].w[0] + 57u), static_cast<std::uint8_t>(0u));
    st16((c.r[29].w[0] + 92u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00177320u); st16((c.r[29].w[0] + 94u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0051(c, 412u, depth + 1u); else { c.pc = 0x00247D10u; return; } if (c.pc != 0x00177320u) [[unlikely]] return; }
L_00177320:
    set32(c.r[4], ld32((c.r[19].w[0] + 24u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00177334u); set32(c.r[5], 0u + 206u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00177334u) [[unlikely]] return; }
L_00177334:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017733Cu); set32(c.r[4], 0u + 1026u);  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x001001F0u; return; } if (c.pc != 0x0017733Cu) [[unlikely]] return; }
L_0017733C:
    st32((c.r[19].w[0] + 32u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00177348u); set32(c.r[4], 0u + 1026u);  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x001001F0u; return; } if (c.pc != 0x00177348u) [[unlikely]] return; }
L_00177348:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull; st32((c.r[19].w[0] + 36u), c.r[2].w[0]);  if (t) { goto L_0017735C; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != c.r[2].d[0];  if (t) { goto L_00177378; } }
L_0017735C:
    set32(c.r[4], ld32((c.r[19].w[0] + 32u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[5], c.r[5].w[0] - 18054u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00177370u); set32(c.r[6], 0u + 1026u);  if (depth < kMaxDepth) unit_0010(c, 107u, depth + 1u); else { c.pc = 0x001415A0u; return; } if (c.pc != 0x00177370u) [[unlikely]] return; }
L_00177370:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[19].w[0] + 36u)));  if (t) { goto L_00177390; } }
L_00177378:
    set32(c.r[4], ld32((c.r[19].w[0] + 32u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[5], c.r[5].w[0] - 17028u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017738Cu); set32(c.r[6], 0u + 1026u);  if (depth < kMaxDepth) unit_0010(c, 107u, depth + 1u); else { c.pc = 0x001415A0u; return; } if (c.pc != 0x0017738Cu) [[unlikely]] return; }
L_0017738C:
    set32(c.r[4], ld32((c.r[19].w[0] + 36u)));
    c.budget -= 1;
L_00177390:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00177398u); set32(c.r[5], 0u + 1026u);  if (depth < kMaxDepth) unit_0010(c, 111u, depth + 1u); else { c.pc = 0x00141670u; return; } if (c.pc != 0x00177398u) [[unlikely]] return; }
L_00177398:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001773A4u); st32((c.r[19].w[0] + 60u), 0u);  if (depth < kMaxDepth) unit_001D(c, 432u, depth + 1u); else { c.pc = 0x00177870u; return; } if (c.pc != 0x001773A4u) [[unlikely]] return; }
L_001773A4:
    c.r[2].d[0] = c.r[19].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_001773D0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00177518; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] - 15248u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001773FCu); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0051(c, 415u, depth + 1u); else { c.pc = 0x00247D80u; return; } if (c.pc != 0x001773FCu) [[unlikely]] return; }
L_001773FC:
    set32(c.r[4], ld32((c.r[17].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00177420; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00177420; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00177420u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00177420u) [[unlikely]] return; }
L_00177420:
    st32((c.r[17].w[0] + 16u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 20u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00177448; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00177448; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00177448u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00177448u) [[unlikely]] return; }
L_00177448:
    st32((c.r[17].w[0] + 20u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 24u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00177470; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00177470; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00177470u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00177470u) [[unlikely]] return; }
L_00177470:
    st32((c.r[17].w[0] + 24u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 32u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00177488; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00177488u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100210u; return; } if (c.pc != 0x00177488u) [[unlikely]] return; }
L_00177488:
    st32((c.r[17].w[0] + 32u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 36u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001774A0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001774A0u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100210u; return; } if (c.pc != 0x001774A0u) [[unlikely]] return; }
L_001774A0:
    st32((c.r[17].w[0] + 36u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 40u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[2], c.r[17].w[0] + 44u);  if (t) { goto L_001774BC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001774B8u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100210u; return; } if (c.pc != 0x001774B8u) [[unlikely]] return; }
L_001774B8:
    set32(c.r[2], c.r[17].w[0] + 44u);
    c.budget -= 1;
L_001774BC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[17].w[0] + 40u), 0u);  if (t) { goto L_001774F4; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_001774F8; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 44u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001774F4; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[2].w[0] - 16u);  if (t) { goto L_001774E8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001774E8u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100210u; return; } if (c.pc != 0x001774E8u) [[unlikely]] return; }
L_001774E8:
    st32((c.r[17].w[0] + 52u), 0u);
    st32((c.r[17].w[0] + 48u), 0u);
    st32((c.r[17].w[0] + 44u), 0u);
    c.budget -= 3;
L_001774F4:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001774F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00177500u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E490u; return; } if (c.pc != 0x00177500u) [[unlikely]] return; }
L_00177500:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0017751C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00177518u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x00177518u) [[unlikely]] return; }
L_00177518:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0017751C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00177530:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[1].w[0] + 25400u)));
    c.budget -= 11;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_0017758C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00177564u); set32(c.r[4], 0u + 64u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00177564u) [[unlikely]] return; }
L_00177564:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00177584; } }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00177580u); c.r[7].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_001D(c, 369u, depth + 1u); else { c.pc = 0x001771E0u; return; } if (c.pc != 0x00177580u) [[unlikely]] return; }
L_00177580:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00177584:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st32((c.r[1].w[0] + 25400u), c.r[4].w[0]);
    c.budget -= 2;
L_0017758C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001775B0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[1].w[0] + 25400u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001775F0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001775E8; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001775E8; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001775E8u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001775E8u) [[unlikely]] return; }
L_001775E8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st32((c.r[1].w[0] + 25400u), 0u);
    c.budget -= 2;
L_001775F0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00177600:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[1].w[0] + 25400u)));  c.pc = t; return; }
L_00177610:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 56u));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001776AC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00177630u);  if (depth < kMaxDepth) unit_0051(c, 417u, depth + 1u); else { c.pc = 0x00247DD0u; return; } if (c.pc != 0x00177630u) [[unlikely]] return; }
L_00177630:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00177638u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0052(c, 23u, depth + 1u); else { c.pc = 0x002481D0u; return; } if (c.pc != 0x00177638u) [[unlikely]] return; }
L_00177638:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001776AC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00177648u);  if (depth < kMaxDepth) unit_0053(c, 78u, depth + 1u); else { c.pc = 0x0024C7C0u; return; } if (c.pc != 0x00177648u) [[unlikely]] return; }
L_00177648:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00177654u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0053(c, 90u, depth + 1u); else { c.pc = 0x0024C940u; return; } if (c.pc != 0x00177654u) [[unlikely]] return; }
L_00177654:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017765Cu); set32(c.r[4], 0u + 104u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0017765Cu) [[unlikely]] return; }
L_0017765C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0017767C; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 40u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[6], 0u + 28u);
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017767Cu); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_001D(c, 458u, depth + 1u); else { c.pc = 0x00177C50u; return; } if (c.pc != 0x0017767Cu) [[unlikely]] return; }
L_0017767C:
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00177688u); st8((c.r[16].w[0] + 56u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0051(c, 417u, depth + 1u); else { c.pc = 0x00247DD0u; return; } if (c.pc != 0x00177688u) [[unlikely]] return; }
L_00177688:
    set32(c.r[4], ld32((c.r[16].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[5], ld32((c.r[2].w[0] + 56u)));  if (t) { goto L_0017769C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], 0u + 1026u);  if (t) { goto L_001776A4; } }
L_0017769C:
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 1026u);
    c.budget -= 2;
L_001776A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001776ACu);  if (depth < kMaxDepth) unit_0010(c, 107u, depth + 1u); else { c.pc = 0x001415A0u; return; } if (c.pc != 0x001776ACu) [[unlikely]] return; }
L_001776AC:
    set32(c.r[3], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001777DC; } }
    set32(c.r[4], ld32((c.r[3].w[0] + 8u)));
    set32(c.r[3], 0u + 5u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0017785C; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 28u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(8ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x00460000u);  if (t) { goto L_0017785C; } }
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + 4096u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 6;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x00174000u < 16384u) { entry = entries_001D[(t - 0x00174000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_001776F4:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 57u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0017785C; } }
L_00177700:
    set32(c.r[4], ld32((c.r[16].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00177724; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00177724; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00177724u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00177724u) [[unlikely]] return; }
L_00177724:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00177730u); st32((c.r[16].w[0] + 20u), 0u);  if (depth < kMaxDepth) unit_001D(c, 432u, depth + 1u); else { c.pc = 0x00177870u; return; } if (c.pc != 0x00177730u) [[unlikely]] return; }
L_00177730:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00177738u); set32(c.r[4], 0u + 104u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00177738u) [[unlikely]] return; }
L_00177738:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00177758; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 40u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[6], 0u + 28u);
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00177758u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_001D(c, 458u, depth + 1u); else { c.pc = 0x00177C50u; return; } if (c.pc != 0x00177758u) [[unlikely]] return; }
L_00177758:
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    c.budget -= 1;
L_0017775C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00177764u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_001D(c, 432u, depth + 1u); else { c.pc = 0x00177870u; return; } if (c.pc != 0x00177764u) [[unlikely]] return; }
L_00177764:
    set32(c.r[4], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 48u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00177778u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00177778u) [[unlikely]] return; }
L_00177778:
    set32(c.r[2], c.r[2].w[0] - 1u);
    set32(c.r[4], 0u + 208u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00177788u); st32((c.r[16].w[0] + 60u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00177788u) [[unlikely]] return; }
L_00177788:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001777AC; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 40u)));
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 100u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001777A8u); set32(c.r[6], 0u + 6u);  if (depth < kMaxDepth) unit_001D(c, 29u, depth + 1u); else { c.pc = 0x001743E0u; return; } if (c.pc != 0x001777A8u) [[unlikely]] return; }
L_001777A8:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001777AC:
    st32((c.r[16].w[0] + 20u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001777D4; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001777D4; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001777D4u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001777D4u) [[unlikely]] return; }
L_001777D4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 16u), 0u);  if (t) { goto L_0017785C; } }
L_001777DC:
    set32(c.r[3], ld32((c.r[16].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0017785C; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 28u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0017785C; } }
    st32((c.r[16].w[0] + 28u), 0u);
    set32(c.r[4], ld32((c.r[16].w[0] + 20u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0017781C; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0017781C; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0017781Cu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0017781Cu) [[unlikely]] return; }
L_0017781C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00177828u); st32((c.r[16].w[0] + 20u), 0u);  if (depth < kMaxDepth) unit_001D(c, 432u, depth + 1u); else { c.pc = 0x00177870u; return; } if (c.pc != 0x00177828u) [[unlikely]] return; }
L_00177828:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00177830u); set32(c.r[4], 0u + 104u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00177830u) [[unlikely]] return; }
L_00177830:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00177858; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 60u)));
    set32(c.r[6], 0u + 28u);
    set32(c.r[5], ld32((c.r[16].w[0] + 40u)));
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00177854u); set32(c.r[7], c.r[2].w[0] + 1u);  if (depth < kMaxDepth) unit_001D(c, 458u, depth + 1u); else { c.pc = 0x00177C50u; return; } if (c.pc != 0x00177854u) [[unlikely]] return; }
L_00177854:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00177858:
    st32((c.r[16].w[0] + 16u), c.r[4].w[0]);
    c.budget -= 1;
L_0017785C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00177870:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 28u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(8ll) ? 1ull : 0ull;
    c.budget -= 12;
    { const bool t = c.r[1].d[0] == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_001778C8; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + 4128u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00174000u < 16384u) { entry = entries_001D[(t - 0x00174000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_001778BC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[18], 0u + 28u);  if (t) { goto L_001778C8; } }
L_001778C4:
    set32(c.r[18], 0u + 6u);
    c.budget -= 1;
L_001778C8:
    set32(c.r[4], ld32((c.r[19].w[0] + 40u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[16], c.r[18].w[0] << 3);  if (t) { goto L_001778E0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001778DCu);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100210u; return; } if (c.pc != 0x001778DCu) [[unlikely]] return; }
L_001778DC:
    set32(c.r[16], c.r[18].w[0] << 3);
    c.budget -= 1;
L_001778E0:
    st32((c.r[19].w[0] + 40u), 0u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001778ECu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x001001F0u; return; } if (c.pc != 0x001778ECu) [[unlikely]] return; }
L_001778EC:
    st32((c.r[19].w[0] + 40u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[19].w[0] + 40u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001778FCu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 111u, depth + 1u); else { c.pc = 0x00141670u; return; } if (c.pc != 0x001778FCu) [[unlikely]] return; }
L_001778FC:
    set32(c.r[3], ld32((c.r[19].w[0] + 28u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001779E0; } }
    set32(c.r[4], ld32((c.r[19].w[0] + 12u)));
    set32(c.r[17], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[17].d[0]; set32(c.r[3], 0u + 2u);  if (t) { goto L_00177948; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00177934; } }
L_00177920:
    set32(c.r[3], ld32((c.r[19].w[0] + 40u)));
    set32(c.r[4], c.r[17].w[0] << 3);
    set32(c.r[17], c.r[17].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 5;
L_00177934:
    c.r[3].d[0] = c.r[17].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00177920u | kUnwind; return; } goto L_00177920; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  if (t) { goto L_001779E4; } }
L_00177948:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001779E0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[17].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;  if (t) { goto L_001779D8; } }
L_00177958:
    set32(c.r[2], ld32((c.r[19].w[0] + 32u)));
    set32(c.r[3], c.r[4].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[16], c.r[3].w[0] << 1);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00177978u); set32(c.r[4], c.r[2].w[0] + c.r[16].w[0]);  if (depth < kMaxDepth) unit_001C(c, 335u, depth + 1u); else { c.pc = 0x00173940u; return; } if (c.pc != 0x00177978u) [[unlikely]] return; }
L_00177978:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00177998; } }
    set32(c.r[3], ld32((c.r[19].w[0] + 40u)));
    set32(c.r[4], c.r[17].w[0] << 3);
    set32(c.r[5], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));  if (t) { goto L_001779D0; } }
L_00177998:
    set32(c.r[4], ld32((c.r[19].w[0] + 12u)));
    set32(c.r[3], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001779D0; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 32u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001779B4u); set32(c.r[4], c.r[2].w[0] + c.r[16].w[0]);  if (depth < kMaxDepth) unit_001C(c, 365u, depth + 1u); else { c.pc = 0x00173F60u; return; } if (c.pc != 0x001779B4u) [[unlikely]] return; }
L_001779B4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001779D0; } }
    set32(c.r[3], ld32((c.r[19].w[0] + 40u)));
    set32(c.r[4], c.r[17].w[0] << 3);
    set32(c.r[5], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 5;
L_001779D0:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[3].d[0] = c.r[17].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;
    c.budget -= 2;
L_001779D8:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[4], c.r[17].w[0] - 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00177958u | kUnwind; return; } goto L_00177958; } }
L_001779E0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_001779E4:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00177A00:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00177A14u); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0051(c, 417u, depth + 1u); else { c.pc = 0x00247DD0u; return; } if (c.pc != 0x00177A14u) [[unlikely]] return; }
L_00177A14:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00177A20u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0052(c, 32u, depth + 1u); else { c.pc = 0x002482F0u; return; } if (c.pc != 0x00177A20u) [[unlikely]] return; }
L_00177A20:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00177A30:
    set32(c.r[6], c.r[5].w[0] << 3);
    c.r[3].d[0] = 0ull + 0ull;
    set32(c.r[6], c.r[6].w[0] + c.r[5].w[0]);
    c.r[2].d[0] = 0ull + 0ull;
    set32(c.r[6], c.r[6].w[0] << 1);
    set32(c.r[6], c.r[6].w[0] + c.r[5].w[0]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; set32(c.r[13], c.r[6].w[0] << 1);  if (t) { goto L_00177AEC; } }
L_00177A50:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[5].d[0];  if (t) { goto L_00177AE8; } }
    set32(c.r[7], ld32((c.r[4].w[0] + 32u)));
    set32(c.r[6], c.r[2].w[0] << 3);
    set32(c.r[6], c.r[6].w[0] + c.r[2].w[0]);
    set32(c.r[6], c.r[6].w[0] << 1);
    set32(c.r[6], c.r[6].w[0] + c.r[2].w[0]);
    set32(c.r[6], c.r[6].w[0] << 1);
    set32(c.r[9], c.r[7].w[0] + c.r[6].w[0]);
    set32(c.r[10], c.r[7].w[0] + c.r[13].w[0]);
    c.r[11].sd[0] = static_cast<std::int8_t>(ld8((c.r[10].w[0] + 22u)));
    c.r[12].sd[0] = static_cast<std::int8_t>(ld8((c.r[9].w[0] + 22u)));
    c.budget -= 12;
    { const bool t = c.r[12].d[0] != c.r[11].d[0]; c.r[15].d[0] = 0ull + 0ull;  if (t) { goto L_00177AD4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = c.r[15].sd[0] < c.r[12].sd[0] ? 1ull : 0ull;  if (t) { goto L_00177ACC; } }
L_00177A90:
    c.r[14].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[8], c.r[9].w[0] + c.r[6].w[0]);  if (t) { goto L_00177AB8; } }
L_00177A9C:
    c.r[7].d[0] = ld16((c.r[8].w[0] + 26u));
    set32(c.r[6], c.r[10].w[0] + c.r[6].w[0]);
    c.r[6].d[0] = ld16((c.r[6].w[0] + 26u));
    c.budget -= 5;
    { const bool t = c.r[7].d[0] != c.r[6].d[0];  if (t) { goto L_00177AB4; } }
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 1;
L_00177AB4:
    set32(c.r[14], c.r[14].w[0] + 1u);
    c.budget -= 1;
L_00177AB8:
    c.r[6].d[0] = c.r[14].sd[0] < c.r[11].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[6].d[0] != 0ull; set32(c.r[6], c.r[14].w[0] << 1);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00177A9Cu | kUnwind; return; } goto L_00177A9C; } }
    set32(c.r[15], c.r[15].w[0] + 1u);
    c.r[6].d[0] = c.r[15].sd[0] < c.r[12].sd[0] ? 1ull : 0ull;
    c.budget -= 2;
L_00177ACC:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != 0ull; set32(c.r[6], c.r[15].w[0] << 1);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00177A90u | kUnwind; return; } goto L_00177A90; } }
L_00177AD4:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[11].d[0];  if (t) { goto L_00177AE4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00177AFC; } }
L_00177AE4:
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00177AE8:
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 1;
L_00177AEC:
    c.r[6].d[0] = c.r[2].sd[0] < 27ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00177A50u | kUnwind; return; } goto L_00177A50; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00177AFC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00177B10:
    set32(c.r[3], ld32((c.r[4].w[0] + 32u)));
    set32(c.r[2], c.r[5].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 22u)));
    c.r[1].d[0] = c.r[5].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[1].d[0] == 0ull; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_00177B44; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00177B7C; } }
L_00177B44:
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[3], 0u + 25500u);
    set32(c.r[2], c.r[6].w[0] << 1);
    c.budget -= 3;
L_00177B50:
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = ld16((c.r[2].w[0] + 26u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_00177B64; } }
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.budget -= 1;
L_00177B64:
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.r[2].d[0] = c.r[6].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[6].w[0] << 1);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00177B50u | kUnwind; return; } goto L_00177B50; } }
    c.r[2].d[0] = c.r[7].d[0] ^ c.r[5].d[0];
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 2;
L_00177B7C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00177B90:
    c.r[2].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[5], ld32((c.r[4].w[0] + 32u)));
    set32(c.r[4], 0u + 3u);
    set32(c.r[3], c.r[6].w[0] << 3);
    c.budget -= 5;
L_00177BA4:
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 22u)));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_00177BC8; } }
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 1;
L_00177BC8:
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.r[3].d[0] = c.r[6].sd[0] < 27ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], c.r[6].w[0] << 3);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00177BA4u | kUnwind; return; } goto L_00177BA4; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00177BE0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 24u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00177C04; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00177C04u); c.r[5].d[0] = c.r[5].d[0] & 65535ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00177C04u) [[unlikely]] return; }
L_00177C04:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00177C10:
    set32(c.r[2], ld32((c.r[4].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00177C24; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = ld8((c.r[2].w[0] + 137u));  if (t) { goto L_00177C28; } }
L_00177C24:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00177C28:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00177C30:
    set32(c.r[2], ld32((c.r[4].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00177C44; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 128u)));  if (t) { goto L_00177C48; } }
L_00177C44:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00177C48:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00177C50:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[7].d[0] + 0ull;
    c.r[17].d[0] = c.r[8].d[0] + 0ull;
    set32(c.r[7], 0u + 3u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00177C7Cu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_000C(c, 12u, depth + 1u); else { c.pc = 0x001300B0u; return; } if (c.pc != 0x00177C7Cu) [[unlikely]] return; }
L_00177C7C:
    set32(c.r[4], c.r[19].w[0] + 40u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00177C88u); set32(c.r[5], 0u + 5u);  if (depth < kMaxDepth) unit_000F(c, 264u, depth + 1u); else { c.pc = 0x0013E560u; return; } if (c.pc != 0x00177C88u) [[unlikely]] return; }
L_00177C88:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] - 15424u);
    set32(c.r[3], c.r[3].w[0] - 15336u);
    st32((c.r[19].w[0]), c.r[2].w[0]);
    set32(c.r[4], 0u + 368u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    st32((c.r[19].w[0] + 20u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] - 15276u);
    st32((c.r[19].w[0] + 40u), c.r[2].w[0]);
    st32((c.r[19].w[0] + 52u), 0u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00177CBCu); st32((c.r[19].w[0] + 56u), 0u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00177CBCu) [[unlikely]] return; }
L_00177CBC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00177CCC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00177CCCu);  if (depth < kMaxDepth) unit_0018(c, 2u, depth + 1u); else { c.pc = 0x001607D0u; return; } if (c.pc != 0x00177CCCu) [[unlikely]] return; }
L_00177CCC:
    st32((c.r[19].w[0] + 76u), c.r[2].w[0]);
    set32(c.r[5], 0u + 200u);
    set32(c.r[4], ld32((c.r[19].w[0] + 76u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00177CE0u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0018(c, 17u, depth + 1u); else { c.pc = 0x00160A20u; return; } if (c.pc != 0x00177CE0u) [[unlikely]] return; }
L_00177CE0:
    set32(c.r[4], ld32((c.r[19].w[0] + 76u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43BE0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42900000u);
    st32((c.r[4].w[0] + 160u), c.r[3].w[0]);
    c.budget -= 6;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[4].w[0] + 164u), c.r[2].w[0]);  if (t) { goto L_00177DA4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00177D00u); set32(c.r[4], 0u + 592u);  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x001001F0u; return; } if (c.pc != 0x00177D00u) [[unlikely]] return; }
L_00177D00:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00170000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00170000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 23984u);
    set32(c.r[6], c.r[6].w[0] + 24576u);
    set32(c.r[7], 0u + 48u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00177D20u); set32(c.r[8], 0u + 12u);  if (depth < kMaxDepth) unit_0000(c, 94u, depth + 1u); else { c.pc = 0x001008C0u; return; } if (c.pc != 0x00177D20u) [[unlikely]] return; }
L_00177D20:
    st32((c.r[19].w[0] + 60u), c.r[2].w[0]);
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_00177D28:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00177D30u);  if (depth < kMaxDepth) unit_001D(c, 405u, depth + 1u); else { c.pc = 0x00177600u; return; } if (c.pc != 0x00177D30u) [[unlikely]] return; }
L_00177D30:
    set32(c.r[3], ld32((c.r[2].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_00177D54; } }
    set32(c.r[2], c.r[16].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[4], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 6;
L_00177D54:
    set32(c.r[2], ld32((c.r[19].w[0] + 60u)));
    set32(c.r[3], c.r[16].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[5], c.r[16].w[0] << 3);
    set32(c.r[6], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    st32((c.r[2].w[0] + 20u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 24u), c.r[16].w[0]);
    set32(c.r[4], ld32((c.r[19].w[0] + 28u)));
    set32(c.r[16], c.r[16].w[0] + 1u);
    set32(c.r[3], ld32((c.r[19].w[0] + 60u)));
    c.r[2].d[0] = c.r[16].sd[0] < 12ll ? 1ull : 0ull;
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    c.r[4].d[0] = ld8((c.r[4].w[0]));
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    c.budget -= 17;
    { const bool t = c.r[2].d[0] != 0ull; st8((c.r[3].w[0] + 40u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00177D28u | kUnwind; return; } goto L_00177D28; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 96u), c.r[2].w[0]);  if (t) { goto L_00177E44; } }
L_00177DA4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00177DACu); set32(c.r[4], 0u + 1360u);  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x001001F0u; return; } if (c.pc != 0x00177DACu) [[unlikely]] return; }
L_00177DAC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00170000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00170000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 23984u);
    set32(c.r[6], c.r[6].w[0] + 24576u);
    set32(c.r[7], 0u + 48u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00177DCCu); set32(c.r[8], 0u + 28u);  if (depth < kMaxDepth) unit_0000(c, 94u, depth + 1u); else { c.pc = 0x001008C0u; return; } if (c.pc != 0x00177DCCu) [[unlikely]] return; }
L_00177DCC:
    st32((c.r[19].w[0] + 60u), c.r[2].w[0]);
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[3], ld32((c.r[19].w[0] + 60u)));
    set32(c.r[2], 0u - 1u);
    st32((c.r[3].w[0] + 20u), 0u);
    st32((c.r[3].w[0] + 24u), c.r[2].w[0]);
    c.budget -= 6;
L_00177DE4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00177DECu);  if (depth < kMaxDepth) unit_001D(c, 405u, depth + 1u); else { c.pc = 0x00177600u; return; } if (c.pc != 0x00177DECu) [[unlikely]] return; }
L_00177DEC:
    set32(c.r[3], ld32((c.r[2].w[0] + 32u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_00177E10; } }
    set32(c.r[2], c.r[16].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[5], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 6;
L_00177E10:
    set32(c.r[2], ld32((c.r[19].w[0] + 60u)));
    set32(c.r[4], c.r[16].w[0] + 1u);
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[2].w[0] + 20u), c.r[5].w[0]);
    st32((c.r[2].w[0] + 24u), c.r[16].w[0]);
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < 27ll ? 1ull : 0ull;
    c.budget -= 12;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 7u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00177DE4u | kUnwind; return; } goto L_00177DE4; } }
    st32((c.r[19].w[0] + 96u), c.r[2].w[0]);
    c.budget -= 1;
L_00177E44:
    st8((c.r[19].w[0] + 84u), static_cast<std::uint8_t>(c.r[17].w[0]));
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[18].w[0]) >> 2));
    st8((c.r[19].w[0] + 85u), static_cast<std::uint8_t>(0u));
    c.budget -= 5;
    { const bool t = c.r[18].sd[0] >= 0; st32((c.r[19].w[0] + 88u), 0u);  if (t) { goto L_00177E60; } }
    set32(c.r[2], c.r[18].w[0] + 3u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 2));
    c.budget -= 2;
L_00177E60:
    st32((c.r[19].w[0] + 92u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00177E70u); st8((c.r[19].w[0] + 100u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_001E(c, 12u, depth + 1u); else { c.pc = 0x001780E0u; return; } if (c.pc != 0x00177E70u) [[unlikely]] return; }
L_00177E70:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00177E78u); set32(c.r[4], 0u + 4u);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x00177E78u) [[unlikely]] return; }
L_00177E78:
    ld128((c.r[2].w[0]) & ~15u, c.r[3]);
    set32(c.r[6], c.r[29].w[0] + 96u);
    set32(c.r[5], c.r[29].w[0] + 80u);
    set32(c.r[4], 0u + 64u);
    st128((c.r[6].w[0]) & ~15u, c.r[3]);
    set32(c.r[2], 0u + 255u);
    mmi::paddub(c.r[3], c.r[3], c.r[0]);
    st128((c.r[5].w[0]) & ~15u, c.r[3]);
    st32((c.r[29].w[0] + 108u), c.r[2].w[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00177EA4u); st32((c.r[29].w[0] + 92u), 0u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00177EA4u) [[unlikely]] return; }
L_00177EA4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], c.r[29].w[0] + 96u);  if (t) { goto L_00177EDC; } }
    set32(c.r[4], c.r[29].w[0] + 80u);
    ld128((c.r[3].w[0]) & ~15u, c.r[5]);
    st128((c.r[2].w[0]) & ~15u, c.r[5]);
    set32(c.r[3], 0u + 30u);
    ld128((c.r[4].w[0]) & ~15u, c.r[4]);
    st128((c.r[2].w[0] + 16u) & ~15u, c.r[4]);
    st32((c.r[2].w[0] + 52u), c.r[3].w[0]);
    st32((c.r[2].w[0] + 48u), 0u);
    st32((c.r[2].w[0] + 60u), 0u);
    st8((c.r[2].w[0] + 56u), static_cast<std::uint8_t>(0u));
    ld128((c.r[2].w[0]) & ~15u, c.r[3]);
    st128((c.r[2].w[0] + 32u) & ~15u, c.r[3]);
    c.budget -= 12;
L_00177EDC:
    st32((c.r[19].w[0] + 80u), c.r[2].w[0]);
    set32(c.r[25], ld32((c.r[19].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00177EF0u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00177EF0u) [[unlikely]] return; }
L_00177EF0:
    set32(c.r[4], ld32((c.r[19].w[0] + 24u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00177F04u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00177F04u) [[unlikely]] return; }
L_00177F04:
    set32(c.r[2], ld32((c.r[19].w[0] + 24u)));
    st8((c.r[2].w[0] + 33u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[19].w[0] + 24u)));
    st8((c.r[2].w[0] + 40u), static_cast<std::uint8_t>(0u));
    set32(c.r[25], ld32((c.r[19].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00177F24u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00177F24u) [[unlikely]] return; }
L_00177F24:
    c.r[2].d[0] = c.r[19].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_00177F50:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { [[clang::musttail]] return unit_001E(c, 10u, depth); } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] - 15424u);
    set32(c.r[3], c.r[3].w[0] - 15336u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    st32((c.r[17].w[0] + 20u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] - 15276u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00177F94u); st32((c.r[17].w[0] + 40u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_001A(c, 271u, depth + 1u); else { c.pc = 0x0016A9E0u; return; } if (c.pc != 0x00177F94u) [[unlikely]] return; }
L_00177F94:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00177F9Cu);  if (depth < kMaxDepth) unit_001B(c, 397u, depth + 1u); else { c.pc = 0x0016F2B0u; return; } if (c.pc != 0x00177F9Cu) [[unlikely]] return; }
L_00177F9C:
    set32(c.r[4], ld32((c.r[17].w[0] + 52u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00177FB0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00177FB0u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100210u; return; } if (c.pc != 0x00177FB0u) [[unlikely]] return; }
L_00177FB0:
    st32((c.r[17].w[0] + 52u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 56u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00177FD8; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00177FD8; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00177FD8u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00177FD8u) [[unlikely]] return; }
L_00177FD8:
    st32((c.r[17].w[0] + 56u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 60u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; c.r[5].sd[0] = static_cast<std::int32_t>(0x00170000u);  if (t) { goto L_00177FF0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00177FF0u); set32(c.r[5], c.r[5].w[0] + 24576u);  if (depth < kMaxDepth) unit_0000(c, 82u, depth + 1u); else { c.pc = 0x00100680u; return; } if (c.pc != 0x00177FF0u) [[unlikely]] return; }
L_00177FF0:
    st32((c.r[17].w[0] + 60u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 64u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_001E(c, 2u, depth); } }
    [[clang::musttail]] return unit_001E(c, 1u, depth);
}

}
