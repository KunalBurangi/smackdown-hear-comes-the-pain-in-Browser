#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_001F[4096] = {
    1, 2, 0, 0, 0, 0, 0, 0, 0, 3, 4, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0,
    0, 10, 0, 0, 11, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 13, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 15, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 18, 0, 0, 0,
    19, 0, 0, 0, 20, 0, 0, 0, 21, 0, 0, 0, 22, 0, 0, 0, 23, 0, 0, 0, 24, 0, 0, 0, 25, 0, 0, 0, 26, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 30, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0,
    0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 35, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0,
    0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 49, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0,
    0, 0, 0, 53, 0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 57, 0, 58, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0,
    60, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0,
    0, 66, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0, 71, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 76, 0, 77,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 80, 0, 81,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 84, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0,
    0, 88, 0, 89, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0,
    91, 0, 0, 0, 0, 0, 0, 0, 92, 0, 93, 0, 0, 0, 0, 0, 0, 0, 0, 94, 0, 95, 0, 0, 0, 0, 0, 0, 0, 0, 96, 0,
    97, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 100,
    0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 104,
    0, 105, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 106, 0, 107, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 109, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 0,
    113, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 117, 0, 0, 118, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 120,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0,
    0, 0, 123, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 126, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 135, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0,
    0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 140,
    0, 0, 0, 141, 0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 146, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0,
    0, 149, 0, 0, 0, 0, 0, 0, 150, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0, 156, 0,
    0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 160, 0, 0, 0, 161, 0, 0, 0, 0, 0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0,
    164, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 165, 0, 0, 0, 0, 166, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0,
    168, 0, 0, 0, 169, 0, 0, 0, 0, 170, 0, 171, 0, 0, 0, 0, 172, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 0, 0, 174, 0,
    0, 0, 175, 0, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 177, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 180, 0, 181, 0, 182, 0, 0, 0, 0, 183, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0, 0, 185, 0, 0, 0, 0, 186,
    0, 0, 0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 0, 0, 188, 0, 0, 189, 0, 0, 0, 0, 190, 0, 0, 0, 0, 191, 0, 0, 0, 0,
    0, 192, 0, 0, 0, 0, 0, 0, 0, 193, 0, 194, 0, 195, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    199, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 202, 0, 0, 0, 203, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 204, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 205, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 206, 0, 0, 0, 207, 0, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 209, 0, 0, 0, 0, 0, 210, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 211, 0, 0, 0, 0, 0, 212, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 213, 0, 214, 0, 0, 0, 215, 0, 0, 0, 0, 0, 216, 0, 0, 0, 0, 0, 217, 0,
    0, 0, 0, 0, 218, 0, 0, 0, 0, 0, 0, 219, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 220, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 222, 0, 0, 0, 0, 0, 223, 0, 0, 0, 0, 0, 0, 224, 0, 0, 0, 225, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 226, 0, 0, 0, 0, 0, 227, 0, 0, 0, 0, 0, 228, 0, 0, 0, 0, 0,
    0, 229, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 230, 0, 0, 231, 0, 0, 0, 0, 232, 0, 0,
    0, 0, 0, 233, 0, 0, 0, 0, 0, 234, 0, 0, 0, 0, 0, 0, 0, 235, 0, 0, 0, 0, 236, 0, 0, 0, 0, 0, 237, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 238, 0, 0, 0, 0, 0, 0, 239, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 241, 0, 0, 0, 0, 0, 242, 0, 0, 0, 0, 0,
    243, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 244, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 245, 0, 0, 0, 246,
    0, 0, 0, 0, 0, 0, 0, 0, 247, 0, 0, 0, 0, 0, 248, 0, 0, 0, 0, 0, 249, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 250, 0, 0, 0, 0, 0, 251, 0, 0, 0, 0, 0, 0, 0, 0, 0, 252, 0, 0, 0, 0, 0, 253, 0, 254, 0, 0, 0, 255,
    0, 0, 0, 0, 0, 256, 0, 0, 0, 0, 0, 257, 0, 0, 0, 0, 0, 258, 0, 0, 0, 0, 0, 0, 259, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 260, 0, 0, 0, 0, 261, 0, 0, 0, 0, 0, 262, 0, 0, 0, 0, 0, 263, 0, 0, 0,
    0, 0, 0, 0, 264, 0, 0, 0, 0, 0, 0, 0, 0, 265, 0, 0, 0, 266, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 267, 0, 0, 0, 0, 0, 268, 0, 0, 0, 0, 0, 269, 0, 0, 0, 0, 0, 0, 270, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 271, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 272, 0, 0, 273, 0, 0, 0, 0, 274, 0, 0, 0, 0,
    0, 275, 0, 0, 0, 0, 0, 276, 0, 0, 0, 0, 0, 0, 0, 277, 0, 0, 0, 0, 278, 0, 0, 0, 0, 0, 0, 0, 279, 0, 0, 0,
    0, 0, 0, 280, 0, 0, 0, 0, 281, 0, 0, 0, 0, 0, 282, 0, 0, 0, 0, 283, 0, 0, 0, 0, 0, 0, 0, 0, 284, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 285, 0, 0, 0, 0, 0, 286, 0, 0, 0, 0, 0, 287, 0, 0, 0, 0, 0, 0, 0, 288, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 289, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 290, 0, 0, 0, 0, 0, 0, 0, 0,
    291, 0, 0, 0, 0, 0, 292, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 293, 0, 0, 0, 294, 0,
    0, 0, 0, 0, 295, 0, 0, 0, 0, 296, 0, 0, 0, 297, 0, 0, 0, 0, 0, 0, 298, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 299, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 300, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 301, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 302, 0, 0, 0, 0, 0, 303, 0, 0, 0, 0, 0, 304, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 305, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 306, 0, 0, 0, 307, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 308, 0, 0, 0, 0, 0, 0, 0, 0, 0, 309, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 310, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 311, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 312, 0, 0, 0, 0, 313, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 314, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 315, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 316, 0, 0, 0, 0, 0, 0, 317, 0, 0, 0, 0, 318, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    319, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 320, 0, 0, 0, 0, 0, 321, 0, 0, 0, 0, 0, 322, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 323, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 324, 0, 0, 0, 0, 325, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 326, 0, 0, 0, 0, 0, 327, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 328, 0, 0, 0, 329, 0, 0,
    0, 330, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 331, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 332, 0, 333, 0, 334, 0,
    0, 0, 0, 0, 335, 0, 0, 0, 0, 0, 0, 0, 336, 0, 0, 0, 337, 0, 0, 0, 0, 0, 0, 338, 0, 0, 0, 339, 0, 340, 0, 0,
    0, 0, 0, 0, 0, 341, 0, 0, 0, 0, 0, 342, 0, 343, 0, 0, 0, 0, 0, 0, 0, 344, 0, 0, 0, 0, 0, 345, 0, 346, 0, 0,
    0, 0, 0, 0, 0, 347, 0, 0, 0, 0, 0, 348, 0, 349, 0, 0, 0, 350, 0, 351, 0, 0, 0, 352, 0, 353, 354, 0, 355, 0, 0, 0,
    0, 0, 0, 356, 0, 0, 0, 0, 0, 357, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 358, 0, 0, 0, 0, 0, 359, 0, 0, 0, 0, 0,
    360, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 361, 0, 0, 0, 0, 0, 0, 0, 362, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    363, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 364, 0, 0, 0, 0, 0, 0, 0, 365, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 366, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 367, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 368, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 369, 0, 0, 0, 370, 0, 0, 0,
    371, 0, 0, 0, 372, 0, 0, 0, 0, 0, 0, 373, 0, 0, 0, 0, 374, 0, 0, 0, 0, 375, 0, 0, 0, 0, 0, 376, 0, 0, 0, 0,
    0, 377, 0, 0, 0, 0, 0, 0, 378, 0, 0, 0, 379, 0, 0, 0, 0, 0, 380, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 381, 0, 0, 0, 382, 0, 0, 0, 383, 0, 0, 0, 0, 384, 0, 0, 0, 0, 0, 385, 0, 0, 0, 386, 0, 0, 0, 387, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 388, 0, 0, 0, 0, 0, 0, 0, 0, 389, 0, 0, 390, 0, 0, 0, 0, 0, 0, 0, 391, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 392, 0, 0, 0, 0, 0, 0, 0, 0, 0, 393, 0, 0, 394, 0, 0, 0, 0, 0, 0, 0, 0,
    395, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 396, 0, 0, 0, 0, 0, 0, 397, 0, 0, 398, 0,
    399, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 400, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 401, 0, 0, 0,
    0, 0, 402, 0, 403, 0, 0, 0, 0, 0, 0, 0, 404, 0, 0, 405, 0, 0, 406, 0, 0, 0, 0, 0, 0, 0, 407, 0, 408, 0, 0, 0,
    0, 0, 0, 0, 409, 0, 0, 410, 0, 0, 411, 0, 0, 0, 0, 0, 0, 0, 0, 412, 0, 413, 0, 0, 0, 0, 0, 0, 0, 414, 0, 0,
    415, 0, 0, 416, 0, 0, 0, 0, 0, 0, 417, 0, 418, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 419, 0, 0, 420, 0, 0, 421, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 422, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 423, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 424, 0, 0, 425, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 426, 0, 0, 0, 0, 0, 427, 0, 0, 0, 0, 0,
    428, 0, 0, 429, 0, 0, 0, 0, 430, 0, 0, 0, 0, 0, 0, 0, 431, 0, 0, 0, 0, 0, 0, 432, 0, 0, 433, 0, 0, 0, 0, 0,
    434, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 435, 0, 0, 0, 0, 0, 0, 0, 0, 0, 436, 0, 0, 0, 0, 0, 0, 0,
    437, 0, 0, 0, 0, 0, 0, 0, 438, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 439, 0, 0, 0, 0, 0, 440, 0, 0, 0, 0, 0,
    441, 0, 0, 0, 0, 0, 0, 442, 0, 0, 0, 0, 0, 0, 0, 0, 443, 0, 0, 0, 0, 0, 0, 0, 444, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 445, 0, 0, 446, 0, 0, 0, 0, 0, 447, 0, 0, 0, 0, 0, 0, 0, 448, 0, 0, 0, 0, 0, 0, 449,
    0, 0, 450, 0, 0, 0, 0, 0, 451, 0, 0, 0, 0, 452, 0, 0, 0, 0, 0, 0, 453, 0, 0, 0, 454, 0, 0, 0, 455, 0, 0, 0,
    456, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 457, 0, 0, 0, 0, 0, 458, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 459,
    0, 0, 0, 0, 0, 460, 0, 0, 0, 0, 0, 0, 461, 0, 0, 0, 0, 0, 0, 0, 0, 462, 0, 0, 0, 0, 0, 463, 0, 0, 0, 0,
    0, 0, 0, 0, 464, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 465, 0, 0, 466, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 467, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 468, 0, 0, 0, 0, 469, 0, 0, 0, 0, 0, 0, 0,
    470, 0, 0, 0, 0, 471, 0, 0, 0, 472, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 473, 0, 0, 0, 0, 0, 0, 474, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 475, 0, 0, 0, 476, 0, 0, 0, 0, 0, 0, 0, 0, 477, 0, 0, 0, 0, 0, 478,
    0, 0, 0, 0, 0, 0, 0, 0, 479, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 480, 0, 481, 0, 0, 0, 0, 0, 0, 482, 0, 0, 0,
    0, 0, 0, 0, 483, 0, 0, 484, 0, 485, 0, 0, 0, 486, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 487, 0, 488, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 489, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 490, 0, 0, 0, 0, 0, 491, 0, 0, 0, 0, 0,
    492, 0, 0, 0, 0, 493, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 494, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 495, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 496, 0, 0, 0, 0, 0, 0, 0, 497, 0, 0, 498, 0, 499, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_001F(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_0017C000;
    case 2u: goto L_0017C004;
    case 3u: goto L_0017C024;
    case 4u: goto L_0017C028;
    case 5u: goto L_0017C034;
    case 6u: goto L_0017C060;
    case 7u: goto L_0017C0F8;
    case 8u: goto L_0017C134;
    case 9u: goto L_0017C170;
    case 10u: goto L_0017C184;
    case 11u: goto L_0017C190;
    case 12u: goto L_0017C1AC;
    case 13u: goto L_0017C204;
    case 14u: goto L_0017C218;
    case 15u: goto L_0017C234;
    case 16u: goto L_0017C23C;
    case 17u: goto L_0017C260;
    case 18u: goto L_0017C270;
    case 19u: goto L_0017C280;
    case 20u: goto L_0017C290;
    case 21u: goto L_0017C2A0;
    case 22u: goto L_0017C2B0;
    case 23u: goto L_0017C2C0;
    case 24u: goto L_0017C2D0;
    case 25u: goto L_0017C2E0;
    case 26u: goto L_0017C2F0;
    case 27u: goto L_0017C320;
    case 28u: goto L_0017C330;
    case 29u: goto L_0017C368;
    case 30u: goto L_0017C370;
    case 31u: goto L_0017C3D0;
    case 32u: goto L_0017C3F4;
    case 33u: goto L_0017C410;
    case 34u: goto L_0017C428;
    case 35u: goto L_0017C440;
    case 36u: goto L_0017C450;
    case 37u: goto L_0017C4C0;
    case 38u: goto L_0017C4F8;
    case 39u: goto L_0017C510;
    case 40u: goto L_0017C550;
    case 41u: goto L_0017C5B0;
    case 42u: goto L_0017C5E4;
    case 43u: goto L_0017C61C;
    case 44u: goto L_0017C634;
    case 45u: goto L_0017C64C;
    case 46u: goto L_0017C6A4;
    case 47u: goto L_0017C6C0;
    case 48u: goto L_0017C6E0;
    case 49u: goto L_0017C70C;
    case 50u: goto L_0017C714;
    case 51u: goto L_0017C750;
    case 52u: goto L_0017C76C;
    case 53u: goto L_0017C78C;
    case 54u: goto L_0017C794;
    case 55u: goto L_0017C7C8;
    case 56u: goto L_0017C7E4;
    case 57u: goto L_0017C810;
    case 58u: goto L_0017C818;
    case 59u: goto L_0017C864;
    case 60u: goto L_0017C880;
    case 61u: goto L_0017C8A0;
    case 62u: goto L_0017C8CC;
    case 63u: goto L_0017C8F0;
    case 64u: goto L_0017C948;
    case 65u: goto L_0017C964;
    case 66u: goto L_0017C984;
    case 67u: goto L_0017C9B0;
    case 68u: goto L_0017C9D4;
    case 69u: goto L_0017CA10;
    case 70u: goto L_0017CA2C;
    case 71u: goto L_0017CA4C;
    case 72u: goto L_0017CA54;
    case 73u: goto L_0017CA9C;
    case 74u: goto L_0017CAB8;
    case 75u: goto L_0017CAD4;
    case 76u: goto L_0017CAF4;
    case 77u: goto L_0017CAFC;
    case 78u: goto L_0017CB38;
    case 79u: goto L_0017CB54;
    case 80u: goto L_0017CB74;
    case 81u: goto L_0017CB7C;
    case 82u: goto L_0017CBBC;
    case 83u: goto L_0017CBD8;
    case 84u: goto L_0017CC04;
    case 85u: goto L_0017CC0C;
    case 86u: goto L_0017CC48;
    case 87u: goto L_0017CC64;
    case 88u: goto L_0017CC84;
    case 89u: goto L_0017CC8C;
    case 90u: goto L_0017CCE0;
    case 91u: goto L_0017CD00;
    case 92u: goto L_0017CD20;
    case 93u: goto L_0017CD28;
    case 94u: goto L_0017CD4C;
    case 95u: goto L_0017CD54;
    case 96u: goto L_0017CD78;
    case 97u: goto L_0017CD80;
    case 98u: goto L_0017CDB4;
    case 99u: goto L_0017CDD0;
    case 100u: goto L_0017CDFC;
    case 101u: goto L_0017CE04;
    case 102u: goto L_0017CE40;
    case 103u: goto L_0017CE5C;
    case 104u: goto L_0017CE7C;
    case 105u: goto L_0017CE84;
    case 106u: goto L_0017CEB4;
    case 107u: goto L_0017CEBC;
    case 108u: goto L_0017CED8;
    case 109u: goto L_0017CEF0;
    case 110u: goto L_0017CF20;
    case 111u: goto L_0017CF3C;
    case 112u: goto L_0017CF60;
    case 113u: goto L_0017CF80;
    case 114u: goto L_0017CF98;
    case 115u: goto L_0017CFAC;
    case 116u: goto L_0017CFD0;
    case 117u: goto L_0017CFE4;
    case 118u: goto L_0017CFF0;
    case 119u: goto L_0017D050;
    case 120u: goto L_0017D07C;
    case 121u: goto L_0017D0C0;
    case 122u: goto L_0017D0F0;
    case 123u: goto L_0017D108;
    case 124u: goto L_0017D120;
    case 125u: goto L_0017D14C;
    case 126u: goto L_0017D19C;
    case 127u: goto L_0017D1B0;
    case 128u: goto L_0017D21C;
    case 129u: goto L_0017D230;
    case 130u: goto L_0017D24C;
    case 131u: goto L_0017D268;
    case 132u: goto L_0017D290;
    case 133u: goto L_0017D2C0;
    case 134u: goto L_0017D2D8;
    case 135u: goto L_0017D2F0;
    case 136u: goto L_0017D31C;
    case 137u: goto L_0017D370;
    case 138u: goto L_0017D394;
    case 139u: goto L_0017D3AC;
    case 140u: goto L_0017D3FC;
    case 141u: goto L_0017D40C;
    case 142u: goto L_0017D420;
    case 143u: goto L_0017D43C;
    case 144u: goto L_0017D454;
    case 145u: goto L_0017D494;
    case 146u: goto L_0017D4B0;
    case 147u: goto L_0017D4C0;
    case 148u: goto L_0017D4E0;
    case 149u: goto L_0017D504;
    case 150u: goto L_0017D520;
    case 151u: goto L_0017D530;
    case 152u: goto L_0017D570;
    case 153u: goto L_0017D5AC;
    case 154u: goto L_0017D5C0;
    case 155u: goto L_0017D5E8;
    case 156u: goto L_0017D5F8;
    case 157u: goto L_0017D610;
    case 158u: goto L_0017D630;
    case 159u: goto L_0017D660;
    case 160u: goto L_0017D6A0;
    case 161u: goto L_0017D6B0;
    case 162u: goto L_0017D6D4;
    case 163u: goto L_0017D6EC;
    case 164u: goto L_0017D700;
    case 165u: goto L_0017D738;
    case 166u: goto L_0017D74C;
    case 167u: goto L_0017D768;
    case 168u: goto L_0017D780;
    case 169u: goto L_0017D790;
    case 170u: goto L_0017D7A4;
    case 171u: goto L_0017D7AC;
    case 172u: goto L_0017D7C0;
    case 173u: goto L_0017D7D4;
    case 174u: goto L_0017D7F8;
    case 175u: goto L_0017D808;
    case 176u: goto L_0017D820;
    case 177u: goto L_0017D838;
    case 178u: goto L_0017D84C;
    case 179u: goto L_0017D868;
    case 180u: goto L_0017D894;
    case 181u: goto L_0017D89C;
    case 182u: goto L_0017D8A4;
    case 183u: goto L_0017D8B8;
    case 184u: goto L_0017D8D0;
    case 185u: goto L_0017D8E8;
    case 186u: goto L_0017D8FC;
    case 187u: goto L_0017D918;
    case 188u: goto L_0017D938;
    case 189u: goto L_0017D944;
    case 190u: goto L_0017D958;
    case 191u: goto L_0017D96C;
    case 192u: goto L_0017D984;
    case 193u: goto L_0017D9A4;
    case 194u: goto L_0017D9AC;
    case 195u: goto L_0017D9B4;
    case 196u: goto L_0017D9D0;
    case 197u: goto L_0017DA0C;
    case 198u: goto L_0017DA28;
    case 199u: goto L_0017DA80;
    case 200u: goto L_0017DAB0;
    case 201u: goto L_0017DAC8;
    case 202u: goto L_0017DAE0;
    case 203u: goto L_0017DAF0;
    case 204u: goto L_0017DB20;
    case 205u: goto L_0017DB4C;
    case 206u: goto L_0017DB8C;
    case 207u: goto L_0017DB9C;
    case 208u: goto L_0017DBC0;
    case 209u: goto L_0017DBD8;
    case 210u: goto L_0017DBF0;
    case 211u: goto L_0017DC2C;
    case 212u: goto L_0017DC44;
    case 213u: goto L_0017DCB0;
    case 214u: goto L_0017DCB8;
    case 215u: goto L_0017DCC8;
    case 216u: goto L_0017DCE0;
    case 217u: goto L_0017DCF8;
    case 218u: goto L_0017DD10;
    case 219u: goto L_0017DD2C;
    case 220u: goto L_0017DD88;
    case 221u: goto L_0017DD9C;
    case 222u: goto L_0017DDB4;
    case 223u: goto L_0017DDCC;
    case 224u: goto L_0017DDE8;
    case 225u: goto L_0017DDF8;
    case 226u: goto L_0017DE38;
    case 227u: goto L_0017DE50;
    case 228u: goto L_0017DE68;
    case 229u: goto L_0017DE84;
    case 230u: goto L_0017DED4;
    case 231u: goto L_0017DEE0;
    case 232u: goto L_0017DEF4;
    case 233u: goto L_0017DF0C;
    case 234u: goto L_0017DF24;
    case 235u: goto L_0017DF44;
    case 236u: goto L_0017DF58;
    case 237u: goto L_0017DF70;
    case 238u: goto L_0017DFAC;
    case 239u: goto L_0017DFC8;
    case 240u: goto L_0017E020;
    case 241u: goto L_0017E050;
    case 242u: goto L_0017E068;
    case 243u: goto L_0017E080;
    case 244u: goto L_0017E0AC;
    case 245u: goto L_0017E0EC;
    case 246u: goto L_0017E0FC;
    case 247u: goto L_0017E120;
    case 248u: goto L_0017E138;
    case 249u: goto L_0017E150;
    case 250u: goto L_0017E18C;
    case 251u: goto L_0017E1A4;
    case 252u: goto L_0017E1CC;
    case 253u: goto L_0017E1E4;
    case 254u: goto L_0017E1EC;
    case 255u: goto L_0017E1FC;
    case 256u: goto L_0017E214;
    case 257u: goto L_0017E22C;
    case 258u: goto L_0017E244;
    case 259u: goto L_0017E260;
    case 260u: goto L_0017E2AC;
    case 261u: goto L_0017E2C0;
    case 262u: goto L_0017E2D8;
    case 263u: goto L_0017E2F0;
    case 264u: goto L_0017E310;
    case 265u: goto L_0017E334;
    case 266u: goto L_0017E344;
    case 267u: goto L_0017E388;
    case 268u: goto L_0017E3A0;
    case 269u: goto L_0017E3B8;
    case 270u: goto L_0017E3D4;
    case 271u: goto L_0017E418;
    case 272u: goto L_0017E44C;
    case 273u: goto L_0017E458;
    case 274u: goto L_0017E46C;
    case 275u: goto L_0017E484;
    case 276u: goto L_0017E49C;
    case 277u: goto L_0017E4BC;
    case 278u: goto L_0017E4D0;
    case 279u: goto L_0017E4F0;
    case 280u: goto L_0017E50C;
    case 281u: goto L_0017E520;
    case 282u: goto L_0017E538;
    case 283u: goto L_0017E54C;
    case 284u: goto L_0017E570;
    case 285u: goto L_0017E5A0;
    case 286u: goto L_0017E5B8;
    case 287u: goto L_0017E5D0;
    case 288u: goto L_0017E5F0;
    case 289u: goto L_0017E61C;
    case 290u: goto L_0017E65C;
    case 291u: goto L_0017E680;
    case 292u: goto L_0017E698;
    case 293u: goto L_0017E6E8;
    case 294u: goto L_0017E6F8;
    case 295u: goto L_0017E710;
    case 296u: goto L_0017E724;
    case 297u: goto L_0017E734;
    case 298u: goto L_0017E750;
    case 299u: goto L_0017E794;
    case 300u: goto L_0017E7D8;
    case 301u: goto L_0017E810;
    case 302u: goto L_0017E840;
    case 303u: goto L_0017E858;
    case 304u: goto L_0017E870;
    case 305u: goto L_0017E89C;
    case 306u: goto L_0017E90C;
    case 307u: goto L_0017E91C;
    case 308u: goto L_0017E94C;
    case 309u: goto L_0017E974;
    case 310u: goto L_0017E9A4;
    case 311u: goto L_0017EA24;
    case 312u: goto L_0017EA58;
    case 313u: goto L_0017EA6C;
    case 314u: goto L_0017EAC8;
    case 315u: goto L_0017EAF8;
    case 316u: goto L_0017EB24;
    case 317u: goto L_0017EB40;
    case 318u: goto L_0017EB54;
    case 319u: goto L_0017EB80;
    case 320u: goto L_0017EBB0;
    case 321u: goto L_0017EBC8;
    case 322u: goto L_0017EBE0;
    case 323u: goto L_0017EC0C;
    case 324u: goto L_0017EC50;
    case 325u: goto L_0017EC64;
    case 326u: goto L_0017EC98;
    case 327u: goto L_0017ECB0;
    case 328u: goto L_0017ECE4;
    case 329u: goto L_0017ECF4;
    case 330u: goto L_0017ED04;
    case 331u: goto L_0017ED30;
    case 332u: goto L_0017ED68;
    case 333u: goto L_0017ED70;
    case 334u: goto L_0017ED78;
    case 335u: goto L_0017ED90;
    case 336u: goto L_0017EDB0;
    case 337u: goto L_0017EDC0;
    case 338u: goto L_0017EDDC;
    case 339u: goto L_0017EDEC;
    case 340u: goto L_0017EDF4;
    case 341u: goto L_0017EE14;
    case 342u: goto L_0017EE2C;
    case 343u: goto L_0017EE34;
    case 344u: goto L_0017EE54;
    case 345u: goto L_0017EE6C;
    case 346u: goto L_0017EE74;
    case 347u: goto L_0017EE94;
    case 348u: goto L_0017EEAC;
    case 349u: goto L_0017EEB4;
    case 350u: goto L_0017EEC4;
    case 351u: goto L_0017EECC;
    case 352u: goto L_0017EEDC;
    case 353u: goto L_0017EEE4;
    case 354u: goto L_0017EEE8;
    case 355u: goto L_0017EEF0;
    case 356u: goto L_0017EF0C;
    case 357u: goto L_0017EF24;
    case 358u: goto L_0017EF50;
    case 359u: goto L_0017EF68;
    case 360u: goto L_0017EF80;
    case 361u: goto L_0017EFB0;
    case 362u: goto L_0017EFD0;
    case 363u: goto L_0017F000;
    case 364u: goto L_0017F040;
    case 365u: goto L_0017F060;
    case 366u: goto L_0017F09C;
    case 367u: goto L_0017F0E8;
    case 368u: goto L_0017F130;
    case 369u: goto L_0017F160;
    case 370u: goto L_0017F170;
    case 371u: goto L_0017F180;
    case 372u: goto L_0017F190;
    case 373u: goto L_0017F1AC;
    case 374u: goto L_0017F1C0;
    case 375u: goto L_0017F1D4;
    case 376u: goto L_0017F1EC;
    case 377u: goto L_0017F204;
    case 378u: goto L_0017F220;
    case 379u: goto L_0017F230;
    case 380u: goto L_0017F248;
    case 381u: goto L_0017F284;
    case 382u: goto L_0017F294;
    case 383u: goto L_0017F2A4;
    case 384u: goto L_0017F2B8;
    case 385u: goto L_0017F2D0;
    case 386u: goto L_0017F2E0;
    case 387u: goto L_0017F2F0;
    case 388u: goto L_0017F320;
    case 389u: goto L_0017F344;
    case 390u: goto L_0017F350;
    case 391u: goto L_0017F370;
    case 392u: goto L_0017F3A8;
    case 393u: goto L_0017F3D0;
    case 394u: goto L_0017F3DC;
    case 395u: goto L_0017F400;
    case 396u: goto L_0017F450;
    case 397u: goto L_0017F46C;
    case 398u: goto L_0017F478;
    case 399u: goto L_0017F480;
    case 400u: goto L_0017F4AC;
    case 401u: goto L_0017F4F0;
    case 402u: goto L_0017F508;
    case 403u: goto L_0017F510;
    case 404u: goto L_0017F530;
    case 405u: goto L_0017F53C;
    case 406u: goto L_0017F548;
    case 407u: goto L_0017F568;
    case 408u: goto L_0017F570;
    case 409u: goto L_0017F590;
    case 410u: goto L_0017F59C;
    case 411u: goto L_0017F5A8;
    case 412u: goto L_0017F5CC;
    case 413u: goto L_0017F5D4;
    case 414u: goto L_0017F5F4;
    case 415u: goto L_0017F600;
    case 416u: goto L_0017F60C;
    case 417u: goto L_0017F628;
    case 418u: goto L_0017F630;
    case 419u: goto L_0017F65C;
    case 420u: goto L_0017F668;
    case 421u: goto L_0017F674;
    case 422u: goto L_0017F6B0;
    case 423u: goto L_0017F6E8;
    case 424u: goto L_0017F714;
    case 425u: goto L_0017F720;
    case 426u: goto L_0017F750;
    case 427u: goto L_0017F768;
    case 428u: goto L_0017F780;
    case 429u: goto L_0017F78C;
    case 430u: goto L_0017F7A0;
    case 431u: goto L_0017F7C0;
    case 432u: goto L_0017F7DC;
    case 433u: goto L_0017F7E8;
    case 434u: goto L_0017F800;
    case 435u: goto L_0017F838;
    case 436u: goto L_0017F860;
    case 437u: goto L_0017F880;
    case 438u: goto L_0017F8A0;
    case 439u: goto L_0017F8D0;
    case 440u: goto L_0017F8E8;
    case 441u: goto L_0017F900;
    case 442u: goto L_0017F91C;
    case 443u: goto L_0017F940;
    case 444u: goto L_0017F960;
    case 445u: goto L_0017F99C;
    case 446u: goto L_0017F9A8;
    case 447u: goto L_0017F9C0;
    case 448u: goto L_0017F9E0;
    case 449u: goto L_0017F9FC;
    case 450u: goto L_0017FA08;
    case 451u: goto L_0017FA20;
    case 452u: goto L_0017FA34;
    case 453u: goto L_0017FA50;
    case 454u: goto L_0017FA60;
    case 455u: goto L_0017FA70;
    case 456u: goto L_0017FA80;
    case 457u: goto L_0017FAB8;
    case 458u: goto L_0017FAD0;
    case 459u: goto L_0017FAFC;
    case 460u: goto L_0017FB14;
    case 461u: goto L_0017FB30;
    case 462u: goto L_0017FB54;
    case 463u: goto L_0017FB6C;
    case 464u: goto L_0017FB90;
    case 465u: goto L_0017FBC8;
    case 466u: goto L_0017FBD4;
    case 467u: goto L_0017FC10;
    case 468u: goto L_0017FC4C;
    case 469u: goto L_0017FC60;
    case 470u: goto L_0017FC80;
    case 471u: goto L_0017FC94;
    case 472u: goto L_0017FCA4;
    case 473u: goto L_0017FCDC;
    case 474u: goto L_0017FCF8;
    case 475u: goto L_0017FD30;
    case 476u: goto L_0017FD40;
    case 477u: goto L_0017FD64;
    case 478u: goto L_0017FD7C;
    case 479u: goto L_0017FDA0;
    case 480u: goto L_0017FDCC;
    case 481u: goto L_0017FDD4;
    case 482u: goto L_0017FDF0;
    case 483u: goto L_0017FE10;
    case 484u: goto L_0017FE1C;
    case 485u: goto L_0017FE24;
    case 486u: goto L_0017FE34;
    case 487u: goto L_0017FE60;
    case 488u: goto L_0017FE68;
    case 489u: goto L_0017FEA0;
    case 490u: goto L_0017FED0;
    case 491u: goto L_0017FEE8;
    case 492u: goto L_0017FF00;
    case 493u: goto L_0017FF14;
    case 494u: goto L_0017FF40;
    case 495u: goto L_0017FF6C;
    case 496u: goto L_0017FFA4;
    case 497u: goto L_0017FFC4;
    case 498u: goto L_0017FFD0;
    case 499u: goto L_0017FFD8;
    default: bad_entry(c, 0x0017C000u); return;
    }
L_0017C000:
    set32(c.r[7], 0u - 1u);
    c.budget -= 1;
L_0017C004:
    set32(c.r[25], ld32((c.r[16].w[0] + 176u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u - 1u);
    set32(c.r[25], ld32((c.r[25].w[0] + 68u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0017C024u); c.r[8].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0017C024u) [[unlikely]] return; }
L_0017C024:
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.budget -= 1;
L_0017C028:
    c.r[3].d[0] = c.r[20].sd[0] < c.r[21].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0017BDE0u | kUnwind; return; } [[clang::musttail]] return unit_001E(c, 486u, depth); } }
L_0017C034:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 192u);  c.pc = t; return; }
L_0017C060:
    set32(c.r[29], c.r[29].w[0] - 96u);
    set32(c.r[3], 0u + 2u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 11;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; st32((c.r[4].w[0] + 144u), c.r[5].w[0]);  if (t) { goto L_0017C0DC; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[2].d[0];  if (t) { goto L_0017C0B4; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0017C0A8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[20].w[0] + 60u)));  if (t) { goto L_0017C0E8; } }
L_0017C0A8:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[19], 0u + 204u);  if (t) { goto L_0017C0E4; } }
L_0017C0B4:
    set32(c.r[4], ld32((c.r[20].w[0] + 152u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[2], 0u + 3u);  if (t) { goto L_0017C0C8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 3u);  if (t) { goto L_0017C0D4; } }
L_0017C0C8:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[2].d[0]; c.r[16].d[0] = c.r[3].d[0] + 0ull;  if (t) { goto L_0017C0D4; } }
    set32(c.r[16], 0u + 4u);
    c.budget -= 1;
L_0017C0D4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[19], 0u + 205u);  if (t) { goto L_0017C0E4; } }
L_0017C0DC:
    set32(c.r[16], 0u + 1u);
    set32(c.r[19], 0u + 206u);
    c.budget -= 2;
L_0017C0E4:
    set32(c.r[4], ld32((c.r[20].w[0] + 60u)));
    c.budget -= 1;
L_0017C0E8:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0017C0F8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017C0F8u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100210u; return; } if (c.pc != 0x0017C0F8u) [[unlikely]] return; }
L_0017C0F8:
    st32((c.r[20].w[0] + 60u), 0u);
    set32(c.r[5], c.r[16].w[0] << 1);
    set32(c.r[2], ld32((c.r[20].w[0] + 44u)));
    set32(c.r[16], c.r[16].w[0] << 2);
    c.r[7].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[3], 0u + 251u);
    set32(c.r[2], c.r[5].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = ld16((c.r[2].w[0] + 112u));
    st32((c.r[20].w[0] + 32u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[20].w[0] + 44u)));
    set32(c.r[2], c.r[5].w[0] + c.r[4].w[0]);
    c.r[8].d[0] = ld16((c.r[2].w[0] + 112u));
    c.budget -= 15;
    { const bool t = 0ull == 0ull; set32(c.r[5], c.r[4].w[0] + c.r[16].w[0]);  if (t) { goto L_0017C154; } }
L_0017C134:
    set32(c.r[2], ld32((c.r[5].w[0] + 72u)));
    set32(c.r[4], c.r[6].w[0] << 5);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    c.r[2].d[0] = ld8((c.r[2].w[0] + 31u));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0017C150; } }
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.budget -= 1;
L_0017C150:
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.budget -= 1;
L_0017C154:
    c.r[2].d[0] = c.r[6].sd[0] < c.r[8].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0017C134u | kUnwind; return; } goto L_0017C134; } }
    st32((c.r[20].w[0] + 32u), c.r[7].w[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 32u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017C170u); set32(c.r[4], c.r[2].w[0] << 3);  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x001001F0u; return; } if (c.pc != 0x0017C170u) [[unlikely]] return; }
L_0017C170:
    st32((c.r[20].w[0] + 60u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 32u)));
    set32(c.r[4], ld32((c.r[20].w[0] + 60u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017C184u); set32(c.r[5], c.r[2].w[0] << 3);  if (depth < kMaxDepth) unit_0010(c, 111u, depth + 1u); else { c.pc = 0x00141670u; return; } if (c.pc != 0x0017C184u) [[unlikely]] return; }
L_0017C184:
    set32(c.r[18], ld32((c.r[20].w[0] + 32u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_0017C1CC; } }
L_0017C190:
    set32(c.r[2], ld32((c.r[20].w[0] + 44u)));
    set32(c.r[3], c.r[17].w[0] << 5);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 72u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017C1ACu); c.r[4].d[0] = ld8((c.r[2].w[0] + 31u));  if (depth < kMaxDepth) unit_0081(c, 193u, depth + 1u); else { c.pc = 0x00306310u; return; } if (c.pc != 0x0017C1ACu) [[unlikely]] return; }
L_0017C1AC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0017C1C8; } }
    set32(c.r[2], ld32((c.r[20].w[0] + 60u)));
    set32(c.r[3], c.r[17].w[0] << 3);
    set32(c.r[4], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 5;
L_0017C1C8:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_0017C1CC:
    c.r[2].d[0] = c.r[17].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0017C190u | kUnwind; return; } goto L_0017C190; } }
    set32(c.r[2], ld32((c.r[20].w[0] + 60u)));
    st32((c.r[20].w[0] + 28u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[20].w[0] + 24u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0017C204; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0017C204; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0017C204u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0017C204u) [[unlikely]] return; }
L_0017C204:
    st32((c.r[20].w[0] + 24u), 0u);
    set32(c.r[25], ld32((c.r[20].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0017C218u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0017C218u) [[unlikely]] return; }
L_0017C218:
    set32(c.r[16], ld32((c.r[20].w[0] + 40u)));
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    st32((c.r[16].w[0] + 260u), 0u);
    set32(c.r[4], c.r[16].w[0] + 260u);
    set32(c.r[5], c.r[16].w[0] + 264u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017C234u); st32((c.r[16].w[0] + 264u), 0u);  if (depth < kMaxDepth) unit_000B(c, 463u, depth + 1u); else { c.pc = 0x0012FDC0u; return; } if (c.pc != 0x0017C234u) [[unlikely]] return; }
L_0017C234:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017C23Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0018(c, 118u, depth + 1u); else { c.pc = 0x00163230u; return; } if (c.pc != 0x0017C23Cu) [[unlikely]] return; }
L_0017C23C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0017C260:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 20u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0017A490u | kUnwind; return; } [[clang::musttail]] return unit_001E(c, 286u, depth); }
L_0017C270:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 20u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0017AD80u | kUnwind; return; } [[clang::musttail]] return unit_001E(c, 366u, depth); }
L_0017C280:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 20u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0017AD30u | kUnwind; return; } [[clang::musttail]] return unit_001E(c, 364u, depth); }
L_0017C290:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 20u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0017AD00u | kUnwind; return; } [[clang::musttail]] return unit_001E(c, 362u, depth); }
L_0017C2A0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 20u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0017ABC0u | kUnwind; return; } [[clang::musttail]] return unit_001E(c, 345u, depth); }
L_0017C2B0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 20u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0017BB10u | kUnwind; return; } [[clang::musttail]] return unit_001E(c, 467u, depth); }
L_0017C2C0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 20u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0017B9B0u | kUnwind; return; } [[clang::musttail]] return unit_001E(c, 461u, depth); }
L_0017C2D0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 20u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0017B940u | kUnwind; return; } [[clang::musttail]] return unit_001E(c, 457u, depth); }
L_0017C2E0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 20u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0017B5E0u | kUnwind; return; } [[clang::musttail]] return unit_001E(c, 428u, depth); }
L_0017C2F0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 24u), c.r[5].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[6].d[0]);
    st64((c.r[29].w[0] + 40u), c.r[7].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[8].d[0]);
    st64((c.r[29].w[0] + 56u), c.r[9].d[0]);
    st64((c.r[29].w[0] + 64u), c.r[10].d[0]);
    st64((c.r[29].w[0] + 72u), c.r[11].d[0]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0017C320:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] + 25408u);  c.pc = t; return; }
L_0017C330:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.r[16].d[0] = c.r[7].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017C368u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 49u, depth + 1u); else { c.pc = 0x00124ED8u; return; } if (c.pc != 0x0017C368u) [[unlikely]] return; }
L_0017C368:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_0017C39C; } }
L_0017C370:
    mmi::div(c, 0, c.r[6].w[0], c.r[16].w[0]);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != 0ull; set32(c.r[3], c.r[19].w[0] + c.r[6].w[0]);  if (t) { goto L_0017C380; } }
    breakpoint(c, 0x0017C37Cu);
    c.budget -= 1;
L_0017C380:
    c.r[4].d[0] = c.hi.d[0];
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    set32(c.r[6], c.r[6].w[0] + 1u);
    set32(c.r[5], c.r[17].w[0] + c.r[4].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 7;
L_0017C39C:
    c.r[3].d[0] = c.r[6].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0017C370u | kUnwind; return; } goto L_0017C370; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0017C3D0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00460000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[5].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[6], c.r[6].w[0] + 4208u);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017C3F4u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0004(c, 452u, depth + 1u); else { c.pc = 0x00113AC8u; return; } if (c.pc != 0x0017C3F4u) [[unlikely]] return; }
L_0017C3F4:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].sd[0] >= 0; c.r[4].sd[0] = static_cast<std::int32_t>(0x00460000u);  if (t) { goto L_0017C418; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017C410u); set32(c.r[4], c.r[4].w[0] + 4224u);  if (depth < kMaxDepth) unit_001F(c, 26u, depth + 1u); else { c.pc = 0x0017C2F0u; return; } if (c.pc != 0x0017C410u) [[unlikely]] return; }
L_0017C410:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0017C42C; } }
L_0017C418:
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + 4272u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017C428u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_001F(c, 26u, depth + 1u); else { c.pc = 0x0017C2F0u; return; } if (c.pc != 0x0017C428u) [[unlikely]] return; }
L_0017C428:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0017C42C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0017C440:
    set32(c.r[2], ld32((c.r[4].w[0] + 16u)));
    c.r[2].d[0] = c.r[2].d[0] ^ c.r[5].d[0];
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  c.pc = t; return; }
L_0017C450:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[7], 0u - 2u);
    set32(c.r[2], c.r[2].w[0] - 14368u);
    c.r[8].d[0] = 0ull & 1ull;
    st32((c.r[4].w[0] + 32u), c.r[2].w[0]);
    set32(c.r[3], 0u - 3u);
    st32((c.r[4].w[0]), c.r[5].w[0]);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0] + 4u), c.r[6].w[0]);
    set32(c.r[5], c.r[8].w[0] << 1);
    st32((c.r[4].w[0] + 40u), 0u);
    st32((c.r[4].w[0] + 48u), 0u);
    st32((c.r[4].w[0] + 44u), 0u);
    st32((c.r[4].w[0] + 12u), 0u);
    st32((c.r[4].w[0] + 8u), 0u);
    st32((c.r[4].w[0] + 16u), 0u);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 36u)));
    c.r[6].d[0] = c.r[6].d[0] & c.r[7].d[0];
    c.r[6].d[0] = c.r[6].d[0] | c.r[8].d[0];
    st8((c.r[4].w[0] + 36u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 36u)));
    c.r[3].d[0] = c.r[6].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    c.budget -= 25;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 36u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_0017C4C0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0017C4FC; } }
    c.r[2].d[0] = c.r[5].d[0] << 48;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] - 14368u);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] <= 0; st32((c.r[16].w[0] + 32u), c.r[3].w[0]);  if (t) { goto L_0017C4F8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017C4F8u);  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x0017C4F8u) [[unlikely]] return; }
L_0017C4F8:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0017C4FC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0017C510:
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 36u)));
    set32(c.r[6], 0u - 2u);
    c.r[7].d[0] = 0ull & 1ull;
    set32(c.r[3], 0u - 3u);
    c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    c.r[6].d[0] = c.r[8].d[0] & c.r[6].d[0];
    c.r[6].d[0] = c.r[6].d[0] | c.r[7].d[0];
    st8((c.r[4].w[0] + 36u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 36u)));
    c.r[3].d[0] = c.r[6].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 36u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_0017C550:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[8], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[8].d[0]; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_0017C588; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0017C580; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[2].d[0];  if (t) { goto L_0017C5B8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 999u);  if (t) { goto L_0017C598; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0017C580:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_0017CEE8; } }
L_0017C588:
    st32((c.r[7].w[0]), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0017CEE4; } }
    set32(c.r[2], 0u - 999u);
    c.budget -= 1;
L_0017C598:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00460000u);
    st32((c.r[7].w[0]), c.r[2].w[0]);
    set32(c.r[6], ld32((c.r[6].w[0])));
    set32(c.r[7], ld32((c.r[7].w[0])));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017C5B0u); set32(c.r[4], c.r[4].w[0] + 4304u);  if (depth < kMaxDepth) unit_001F(c, 26u, depth + 1u); else { c.pc = 0x0017C2F0u; return; } if (c.pc != 0x0017C5B0u) [[unlikely]] return; }
L_0017C5B0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 999u);  if (t) { goto L_0017CEE4; } }
L_0017C5B8:
    set32(c.r[2], ld32((c.r[6].w[0])));
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(21ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0017CEBC; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + 6896u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x0017C000u < 16384u) { entry = entries_001F[(t - 0x0017C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0017C5E4:
    set32(c.r[3], ld32((c.r[7].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0017CEE4; } }
    set32(c.r[2], 0u - 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0017C624; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[8].d[0];  if (t) { goto L_0017C60C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u - 992u);  if (t) { goto L_0017C640; } }
L_0017C60C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00460000u);
    st32((c.r[7].w[0]), c.r[8].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017C61Cu); set32(c.r[4], c.r[4].w[0] + 4336u);  if (depth < kMaxDepth) unit_001F(c, 26u, depth + 1u); else { c.pc = 0x0017C2F0u; return; } if (c.pc != 0x0017C61Cu) [[unlikely]] return; }
L_0017C61C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 999u);  if (t) { goto L_0017CEE4; } }
L_0017C624:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00460000u);
    st32((c.r[7].w[0]), c.r[2].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017C634u); set32(c.r[4], c.r[4].w[0] + 4400u);  if (depth < kMaxDepth) unit_001F(c, 26u, depth + 1u); else { c.pc = 0x0017C2F0u; return; } if (c.pc != 0x0017C634u) [[unlikely]] return; }
L_0017C634:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 999u);  if (t) { goto L_0017CEE4; } }
    set32(c.r[3], 0u - 992u);
    c.budget -= 1;
L_0017C640:
    set32(c.r[2], 0u - 999u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[7].w[0]), c.r[3].w[0]);  if (t) { goto L_0017CEE4; } }
L_0017C64C:
    set32(c.r[3], ld32((c.r[7].w[0])));
    set32(c.r[2], 0u - 7u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u - 999u);  if (t) { goto L_0017C6CC; } }
    set32(c.r[2], 0u - 5u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0017C6C8; } }
    set32(c.r[2], 0u - 4u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0017C6C8; } }
    set32(c.r[2], 0u - 3u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u - 996u);  if (t) { goto L_0017C6B0; } }
    set32(c.r[2], 0u - 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0017C694; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[3].sd[0] < 0ll ? 1ull : 0ull;  if (t) { goto L_0017C6EC; } }
L_0017C694:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00460000u);
    st32((c.r[7].w[0]), c.r[2].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017C6A4u); set32(c.r[4], c.r[4].w[0] + 4464u);  if (depth < kMaxDepth) unit_001F(c, 26u, depth + 1u); else { c.pc = 0x0017C2F0u; return; } if (c.pc != 0x0017C6A4u) [[unlikely]] return; }
L_0017C6A4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 999u);  if (t) { goto L_0017CEE4; } }
    set32(c.r[2], 0u - 996u);
    c.budget -= 1;
L_0017C6B0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[4], c.r[4].w[0] + 4528u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017C6C0u); st32((c.r[7].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_001F(c, 26u, depth + 1u); else { c.pc = 0x0017C2F0u; return; } if (c.pc != 0x0017C6C0u) [[unlikely]] return; }
L_0017C6C0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 999u);  if (t) { goto L_0017CEE4; } }
L_0017C6C8:
    set32(c.r[2], 0u - 999u);
    c.budget -= 1;
L_0017C6CC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00460000u);
    st32((c.r[7].w[0]), c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[7].w[0])));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017C6E0u); set32(c.r[4], c.r[4].w[0] + 4592u);  if (depth < kMaxDepth) unit_001F(c, 26u, depth + 1u); else { c.pc = 0x0017C2F0u; return; } if (c.pc != 0x0017C6E0u) [[unlikely]] return; }
L_0017C6E0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 999u);  if (t) { goto L_0017CEE4; } }
    c.r[2].d[0] = c.r[3].sd[0] < 0ll ? 1ull : 0ull;
    c.budget -= 1;
L_0017C6EC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0017CEE0; } }
    set32(c.r[2], 0u - 992u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00460000u);
    st32((c.r[7].w[0]), c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[7].w[0])));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017C70Cu); set32(c.r[4], c.r[4].w[0] + 4592u);  if (depth < kMaxDepth) unit_001F(c, 26u, depth + 1u); else { c.pc = 0x0017C2F0u; return; } if (c.pc != 0x0017C70Cu) [[unlikely]] return; }
L_0017C70C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 999u);  if (t) { goto L_0017CEE4; } }
L_0017C714:
    set32(c.r[3], ld32((c.r[7].w[0])));
    set32(c.r[2], 0u - 4u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u - 999u);  if (t) { goto L_0017C75C; } }
    set32(c.r[2], 0u - 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0017C740; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0017CEE0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 992u);  if (t) { goto L_0017C778; } }
L_0017C740:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00460000u);
    st32((c.r[7].w[0]), c.r[2].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017C750u); set32(c.r[4], c.r[4].w[0] + 4640u);  if (depth < kMaxDepth) unit_001F(c, 26u, depth + 1u); else { c.pc = 0x0017C2F0u; return; } if (c.pc != 0x0017C750u) [[unlikely]] return; }
L_0017C750:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 999u);  if (t) { goto L_0017CEE4; } }
    set32(c.r[2], 0u - 999u);
    c.budget -= 1;
L_0017C75C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[4], c.r[4].w[0] + 4704u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017C76Cu); st32((c.r[7].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_001F(c, 26u, depth + 1u); else { c.pc = 0x0017C2F0u; return; } if (c.pc != 0x0017C76Cu) [[unlikely]] return; }
L_0017C76C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 999u);  if (t) { goto L_0017CEE4; } }
    set32(c.r[2], 0u - 992u);
    c.budget -= 1;
L_0017C778:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00460000u);
    st32((c.r[7].w[0]), c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[7].w[0])));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017C78Cu); set32(c.r[4], c.r[4].w[0] + 4768u);  if (depth < kMaxDepth) unit_001F(c, 26u, depth + 1u); else { c.pc = 0x0017C2F0u; return; } if (c.pc != 0x0017C78Cu) [[unlikely]] return; }
L_0017C78C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 999u);  if (t) { goto L_0017CEE4; } }
L_0017C794:
    set32(c.r[3], ld32((c.r[7].w[0])));
    set32(c.r[2], 0u - 4u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u - 999u);  if (t) { goto L_0017C7D4; } }
    set32(c.r[2], 0u - 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0017C7B8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[3].sd[0] < 0ll ? 1ull : 0ull;  if (t) { goto L_0017C7F0; } }
L_0017C7B8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00460000u);
    st32((c.r[7].w[0]), c.r[2].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017C7C8u); set32(c.r[4], c.r[4].w[0] + 4816u);  if (depth < kMaxDepth) unit_001F(c, 26u, depth + 1u); else { c.pc = 0x0017C2F0u; return; } if (c.pc != 0x0017C7C8u) [[unlikely]] return; }
L_0017C7C8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 999u);  if (t) { goto L_0017CEE4; } }
    set32(c.r[2], 0u - 999u);
    c.budget -= 1;
L_0017C7D4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[4], c.r[4].w[0] + 4880u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017C7E4u); st32((c.r[7].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_001F(c, 26u, depth + 1u); else { c.pc = 0x0017C2F0u; return; } if (c.pc != 0x0017C7E4u) [[unlikely]] return; }
L_0017C7E4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 999u);  if (t) { goto L_0017CEE4; } }
    c.r[2].d[0] = c.r[3].sd[0] < 0ll ? 1ull : 0ull;
    c.budget -= 1;
L_0017C7F0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0017CEE0; } }
    set32(c.r[2], 0u - 992u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00460000u);
    st32((c.r[7].w[0]), c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[7].w[0])));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017C810u); set32(c.r[4], c.r[4].w[0] + 4944u);  if (depth < kMaxDepth) unit_001F(c, 26u, depth + 1u); else { c.pc = 0x0017C2F0u; return; } if (c.pc != 0x0017C810u) [[unlikely]] return; }
L_0017C810:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 999u);  if (t) { goto L_0017CEE4; } }
L_0017C818:
    set32(c.r[5], ld32((c.r[7].w[0])));
    set32(c.r[2], 0u - 5u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[2].d[0]; set32(c.r[2], 0u - 999u);  if (t) { goto L_0017C88C; } }
    set32(c.r[2], 0u - 4u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[2].d[0];  if (t) { goto L_0017C888; } }
    set32(c.r[2], 0u - 3u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[2].d[0]; set32(c.r[2], 0u - 997u);  if (t) { goto L_0017C870; } }
    set32(c.r[2], 0u - 2u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[2].d[0];  if (t) { goto L_0017C854; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[5].sd[0] < 0ll ? 1ull : 0ull;  if (t) { goto L_0017C8AC; } }
L_0017C854:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00460000u);
    st32((c.r[7].w[0]), c.r[2].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017C864u); set32(c.r[4], c.r[4].w[0] + 4992u);  if (depth < kMaxDepth) unit_001F(c, 26u, depth + 1u); else { c.pc = 0x0017C2F0u; return; } if (c.pc != 0x0017C864u) [[unlikely]] return; }
L_0017C864:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 999u);  if (t) { goto L_0017CEE4; } }
    set32(c.r[2], 0u - 997u);
    c.budget -= 1;
L_0017C870:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[4], c.r[4].w[0] + 5056u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017C880u); st32((c.r[7].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_001F(c, 26u, depth + 1u); else { c.pc = 0x0017C2F0u; return; } if (c.pc != 0x0017C880u) [[unlikely]] return; }
L_0017C880:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 999u);  if (t) { goto L_0017CEE4; } }
L_0017C888:
    set32(c.r[2], 0u - 999u);
    c.budget -= 1;
L_0017C88C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00460000u);
    st32((c.r[7].w[0]), c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[7].w[0])));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017C8A0u); set32(c.r[4], c.r[4].w[0] + 5120u);  if (depth < kMaxDepth) unit_001F(c, 26u, depth + 1u); else { c.pc = 0x0017C2F0u; return; } if (c.pc != 0x0017C8A0u) [[unlikely]] return; }
L_0017C8A0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 999u);  if (t) { goto L_0017CEE4; } }
    c.r[2].d[0] = c.r[5].sd[0] < 0ll ? 1ull : 0ull;
    c.budget -= 1;
L_0017C8AC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0017C8D4; } }
    set32(c.r[2], 0u - 992u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00460000u);
    st32((c.r[7].w[0]), c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[7].w[0])));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017C8CCu); set32(c.r[4], c.r[4].w[0] + 5120u);  if (depth < kMaxDepth) unit_001F(c, 26u, depth + 1u); else { c.pc = 0x0017C2F0u; return; } if (c.pc != 0x0017C8CCu) [[unlikely]] return; }
L_0017C8CC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 999u);  if (t) { goto L_0017CEE4; } }
L_0017C8D4:
    set32(c.r[3], ld32((c.r[4].w[0] + 40u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0017CEE0; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 1056u)));
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 1056u), c.r[2].w[0]);  if (t) { goto L_0017CEE0; } }
L_0017C8F0:
    set32(c.r[5], ld32((c.r[7].w[0])));
    set32(c.r[2], 0u - 8u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[2].d[0]; set32(c.r[2], 0u - 999u);  if (t) { goto L_0017C970; } }
    set32(c.r[2], 0u - 5u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[2].d[0];  if (t) { goto L_0017C96C; } }
    set32(c.r[2], 0u - 4u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[2].d[0];  if (t) { goto L_0017C96C; } }
    set32(c.r[2], 0u - 3u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[2].d[0]; set32(c.r[2], 0u - 996u);  if (t) { goto L_0017C954; } }
    set32(c.r[2], 0u - 2u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[2].d[0];  if (t) { goto L_0017C938; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[5].sd[0] < 0ll ? 1ull : 0ull;  if (t) { goto L_0017C990; } }
L_0017C938:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00460000u);
    st32((c.r[7].w[0]), c.r[2].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017C948u); set32(c.r[4], c.r[4].w[0] + 5168u);  if (depth < kMaxDepth) unit_001F(c, 26u, depth + 1u); else { c.pc = 0x0017C2F0u; return; } if (c.pc != 0x0017C948u) [[unlikely]] return; }
L_0017C948:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 999u);  if (t) { goto L_0017CEE4; } }
    set32(c.r[2], 0u - 996u);
    c.budget -= 1;
L_0017C954:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[4], c.r[4].w[0] + 5232u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017C964u); st32((c.r[7].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_001F(c, 26u, depth + 1u); else { c.pc = 0x0017C2F0u; return; } if (c.pc != 0x0017C964u) [[unlikely]] return; }
L_0017C964:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 999u);  if (t) { goto L_0017CEE4; } }
L_0017C96C:
    set32(c.r[2], 0u - 999u);
    c.budget -= 1;
L_0017C970:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00460000u);
    st32((c.r[7].w[0]), c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[7].w[0])));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017C984u); set32(c.r[4], c.r[4].w[0] + 5296u);  if (depth < kMaxDepth) unit_001F(c, 26u, depth + 1u); else { c.pc = 0x0017C2F0u; return; } if (c.pc != 0x0017C984u) [[unlikely]] return; }
L_0017C984:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 999u);  if (t) { goto L_0017CEE4; } }
    c.r[2].d[0] = c.r[5].sd[0] < 0ll ? 1ull : 0ull;
    c.budget -= 1;
L_0017C990:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0017C9B8; } }
    set32(c.r[2], 0u - 992u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00460000u);
    st32((c.r[7].w[0]), c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[7].w[0])));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017C9B0u); set32(c.r[4], c.r[4].w[0] + 5296u);  if (depth < kMaxDepth) unit_001F(c, 26u, depth + 1u); else { c.pc = 0x0017C2F0u; return; } if (c.pc != 0x0017C9B0u) [[unlikely]] return; }
L_0017C9B0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 999u);  if (t) { goto L_0017CEE4; } }
L_0017C9B8:
    set32(c.r[3], ld32((c.r[4].w[0] + 40u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0017CEE0; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 1056u)));
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 1056u), c.r[2].w[0]);  if (t) { goto L_0017CEE0; } }
L_0017C9D4:
    set32(c.r[3], ld32((c.r[7].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0017CEE0; } }
    set32(c.r[2], 0u - 4u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u - 999u);  if (t) { goto L_0017CA1C; } }
    set32(c.r[2], 0u - 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0017CA00; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 992u);  if (t) { goto L_0017CA38; } }
L_0017CA00:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00460000u);
    st32((c.r[7].w[0]), c.r[2].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017CA10u); set32(c.r[4], c.r[4].w[0] + 5344u);  if (depth < kMaxDepth) unit_001F(c, 26u, depth + 1u); else { c.pc = 0x0017C2F0u; return; } if (c.pc != 0x0017CA10u) [[unlikely]] return; }
L_0017CA10:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 999u);  if (t) { goto L_0017CEE4; } }
    set32(c.r[2], 0u - 999u);
    c.budget -= 1;
L_0017CA1C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[4], c.r[4].w[0] + 5408u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017CA2Cu); st32((c.r[7].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_001F(c, 26u, depth + 1u); else { c.pc = 0x0017C2F0u; return; } if (c.pc != 0x0017CA2Cu) [[unlikely]] return; }
L_0017CA2C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 999u);  if (t) { goto L_0017CEE4; } }
    set32(c.r[2], 0u - 992u);
    c.budget -= 1;
L_0017CA38:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00460000u);
    st32((c.r[7].w[0]), c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[7].w[0])));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017CA4Cu); set32(c.r[4], c.r[4].w[0] + 5472u);  if (depth < kMaxDepth) unit_001F(c, 26u, depth + 1u); else { c.pc = 0x0017C2F0u; return; } if (c.pc != 0x0017CA4Cu) [[unlikely]] return; }
L_0017CA4C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 999u);  if (t) { goto L_0017CEE4; } }
L_0017CA54:
    set32(c.r[3], ld32((c.r[7].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0017CEE0; } }
    set32(c.r[2], 0u - 4u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u - 999u);  if (t) { goto L_0017CAC4; } }
    set32(c.r[2], 0u - 3u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u - 996u);  if (t) { goto L_0017CAA8; } }
    set32(c.r[2], 0u - 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0017CA8C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 992u);  if (t) { goto L_0017CAE0; } }
L_0017CA8C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00460000u);
    st32((c.r[7].w[0]), c.r[2].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017CA9Cu); set32(c.r[4], c.r[4].w[0] + 5520u);  if (depth < kMaxDepth) unit_001F(c, 26u, depth + 1u); else { c.pc = 0x0017C2F0u; return; } if (c.pc != 0x0017CA9Cu) [[unlikely]] return; }
L_0017CA9C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 999u);  if (t) { goto L_0017CEE4; } }
    set32(c.r[2], 0u - 996u);
    c.budget -= 1;
L_0017CAA8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[4], c.r[4].w[0] + 5584u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017CAB8u); st32((c.r[7].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_001F(c, 26u, depth + 1u); else { c.pc = 0x0017C2F0u; return; } if (c.pc != 0x0017CAB8u) [[unlikely]] return; }
L_0017CAB8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 999u);  if (t) { goto L_0017CEE4; } }
    set32(c.r[2], 0u - 999u);
    c.budget -= 1;
L_0017CAC4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[4], c.r[4].w[0] + 5648u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017CAD4u); st32((c.r[7].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_001F(c, 26u, depth + 1u); else { c.pc = 0x0017C2F0u; return; } if (c.pc != 0x0017CAD4u) [[unlikely]] return; }
L_0017CAD4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 999u);  if (t) { goto L_0017CEE4; } }
    set32(c.r[2], 0u - 992u);
    c.budget -= 1;
L_0017CAE0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00460000u);
    st32((c.r[7].w[0]), c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[7].w[0])));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017CAF4u); set32(c.r[4], c.r[4].w[0] + 5712u);  if (depth < kMaxDepth) unit_001F(c, 26u, depth + 1u); else { c.pc = 0x0017C2F0u; return; } if (c.pc != 0x0017CAF4u) [[unlikely]] return; }
L_0017CAF4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 999u);  if (t) { goto L_0017CEE4; } }
L_0017CAFC:
    set32(c.r[3], ld32((c.r[7].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0017CEE0; } }
    set32(c.r[2], 0u - 4u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u - 999u);  if (t) { goto L_0017CB44; } }
    set32(c.r[2], 0u - 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0017CB28; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 992u);  if (t) { goto L_0017CB60; } }
L_0017CB28:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00460000u);
    st32((c.r[7].w[0]), c.r[2].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017CB38u); set32(c.r[4], c.r[4].w[0] + 5760u);  if (depth < kMaxDepth) unit_001F(c, 26u, depth + 1u); else { c.pc = 0x0017C2F0u; return; } if (c.pc != 0x0017CB38u) [[unlikely]] return; }
L_0017CB38:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 999u);  if (t) { goto L_0017CEE4; } }
    set32(c.r[2], 0u - 999u);
    c.budget -= 1;
L_0017CB44:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[4], c.r[4].w[0] + 5824u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017CB54u); st32((c.r[7].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_001F(c, 26u, depth + 1u); else { c.pc = 0x0017C2F0u; return; } if (c.pc != 0x0017CB54u) [[unlikely]] return; }
L_0017CB54:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 999u);  if (t) { goto L_0017CEE4; } }
    set32(c.r[2], 0u - 992u);
    c.budget -= 1;
L_0017CB60:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00460000u);
    st32((c.r[7].w[0]), c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[7].w[0])));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017CB74u); set32(c.r[4], c.r[4].w[0] + 5888u);  if (depth < kMaxDepth) unit_001F(c, 26u, depth + 1u); else { c.pc = 0x0017C2F0u; return; } if (c.pc != 0x0017CB74u) [[unlikely]] return; }
L_0017CB74:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 999u);  if (t) { goto L_0017CEE4; } }
L_0017CB7C:
    set32(c.r[3], ld32((c.r[7].w[0])));
    set32(c.r[2], 0u - 5u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u - 999u);  if (t) { goto L_0017CBC8; } }
    set32(c.r[2], 0u - 4u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0017CEE0; } }
    set32(c.r[2], 0u - 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0017CBAC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[3].sd[0] < 0ll ? 1ull : 0ull;  if (t) { goto L_0017CBE4; } }
L_0017CBAC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00460000u);
    st32((c.r[7].w[0]), c.r[2].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017CBBCu); set32(c.r[4], c.r[4].w[0] + 5936u);  if (depth < kMaxDepth) unit_001F(c, 26u, depth + 1u); else { c.pc = 0x0017C2F0u; return; } if (c.pc != 0x0017CBBCu) [[unlikely]] return; }
L_0017CBBC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 999u);  if (t) { goto L_0017CEE4; } }
    set32(c.r[2], 0u - 999u);
    c.budget -= 1;
L_0017CBC8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[4], c.r[4].w[0] + 6000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017CBD8u); st32((c.r[7].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_001F(c, 26u, depth + 1u); else { c.pc = 0x0017C2F0u; return; } if (c.pc != 0x0017CBD8u) [[unlikely]] return; }
L_0017CBD8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 999u);  if (t) { goto L_0017CEE4; } }
    c.r[2].d[0] = c.r[3].sd[0] < 0ll ? 1ull : 0ull;
    c.budget -= 1;
L_0017CBE4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0017CEE0; } }
    set32(c.r[2], 0u - 992u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00460000u);
    st32((c.r[7].w[0]), c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[7].w[0])));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017CC04u); set32(c.r[4], c.r[4].w[0] + 6064u);  if (depth < kMaxDepth) unit_001F(c, 26u, depth + 1u); else { c.pc = 0x0017C2F0u; return; } if (c.pc != 0x0017CC04u) [[unlikely]] return; }
L_0017CC04:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 999u);  if (t) { goto L_0017CEE4; } }
L_0017CC0C:
    set32(c.r[3], ld32((c.r[7].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0017CEE0; } }
    set32(c.r[2], 0u - 4u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u - 999u);  if (t) { goto L_0017CC54; } }
    set32(c.r[2], 0u - 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0017CC38; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 992u);  if (t) { goto L_0017CC70; } }
L_0017CC38:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00460000u);
    st32((c.r[7].w[0]), c.r[2].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017CC48u); set32(c.r[4], c.r[4].w[0] + 6112u);  if (depth < kMaxDepth) unit_001F(c, 26u, depth + 1u); else { c.pc = 0x0017C2F0u; return; } if (c.pc != 0x0017CC48u) [[unlikely]] return; }
L_0017CC48:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 999u);  if (t) { goto L_0017CEE4; } }
    set32(c.r[2], 0u - 999u);
    c.budget -= 1;
L_0017CC54:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[4], c.r[4].w[0] + 6176u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017CC64u); st32((c.r[7].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_001F(c, 26u, depth + 1u); else { c.pc = 0x0017C2F0u; return; } if (c.pc != 0x0017CC64u) [[unlikely]] return; }
L_0017CC64:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 999u);  if (t) { goto L_0017CEE4; } }
    set32(c.r[2], 0u - 992u);
    c.budget -= 1;
L_0017CC70:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00460000u);
    st32((c.r[7].w[0]), c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[7].w[0])));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017CC84u); set32(c.r[4], c.r[4].w[0] + 6240u);  if (depth < kMaxDepth) unit_001F(c, 26u, depth + 1u); else { c.pc = 0x0017C2F0u; return; } if (c.pc != 0x0017CC84u) [[unlikely]] return; }
L_0017CC84:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 999u);  if (t) { goto L_0017CEE4; } }
L_0017CC8C:
    set32(c.r[3], ld32((c.r[7].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0017CEE0; } }
    set32(c.r[2], 0u - 6u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u - 999u);  if (t) { goto L_0017CCEC; } }
    set32(c.r[2], 0u - 5u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0017CCE8; } }
    set32(c.r[2], 0u - 4u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0017CCE8; } }
    set32(c.r[2], 0u - 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0017CCD0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 992u);  if (t) { goto L_0017CD0C; } }
L_0017CCD0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00460000u);
    st32((c.r[7].w[0]), c.r[2].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017CCE0u); set32(c.r[4], c.r[4].w[0] + 6288u);  if (depth < kMaxDepth) unit_001F(c, 26u, depth + 1u); else { c.pc = 0x0017C2F0u; return; } if (c.pc != 0x0017CCE0u) [[unlikely]] return; }
L_0017CCE0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 999u);  if (t) { goto L_0017CEE4; } }
L_0017CCE8:
    set32(c.r[2], 0u - 999u);
    c.budget -= 1;
L_0017CCEC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00460000u);
    st32((c.r[7].w[0]), c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[7].w[0])));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017CD00u); set32(c.r[4], c.r[4].w[0] + 6352u);  if (depth < kMaxDepth) unit_001F(c, 26u, depth + 1u); else { c.pc = 0x0017C2F0u; return; } if (c.pc != 0x0017CD00u) [[unlikely]] return; }
L_0017CD00:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 999u);  if (t) { goto L_0017CEE4; } }
    set32(c.r[2], 0u - 992u);
    c.budget -= 1;
L_0017CD0C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00460000u);
    st32((c.r[7].w[0]), c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[7].w[0])));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017CD20u); set32(c.r[4], c.r[4].w[0] + 6352u);  if (depth < kMaxDepth) unit_001F(c, 26u, depth + 1u); else { c.pc = 0x0017C2F0u; return; } if (c.pc != 0x0017CD20u) [[unlikely]] return; }
L_0017CD20:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 999u);  if (t) { goto L_0017CEE4; } }
L_0017CD28:
    set32(c.r[2], ld32((c.r[7].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0017CEE0; } }
    set32(c.r[2], 0u - 992u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00460000u);
    st32((c.r[7].w[0]), c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[7].w[0])));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017CD4Cu); set32(c.r[4], c.r[4].w[0] + 6400u);  if (depth < kMaxDepth) unit_001F(c, 26u, depth + 1u); else { c.pc = 0x0017C2F0u; return; } if (c.pc != 0x0017CD4Cu) [[unlikely]] return; }
L_0017CD4C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 999u);  if (t) { goto L_0017CEE4; } }
L_0017CD54:
    set32(c.r[2], ld32((c.r[7].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0017CEE0; } }
    set32(c.r[2], 0u - 992u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00460000u);
    st32((c.r[7].w[0]), c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[7].w[0])));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017CD78u); set32(c.r[4], c.r[4].w[0] + 6448u);  if (depth < kMaxDepth) unit_001F(c, 26u, depth + 1u); else { c.pc = 0x0017C2F0u; return; } if (c.pc != 0x0017CD78u) [[unlikely]] return; }
L_0017CD78:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 999u);  if (t) { goto L_0017CEE4; } }
L_0017CD80:
    set32(c.r[3], ld32((c.r[7].w[0])));
    set32(c.r[2], 0u - 5u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u - 999u);  if (t) { goto L_0017CDC0; } }
    set32(c.r[2], 0u - 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0017CDA4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[3].sd[0] < 0ll ? 1ull : 0ull;  if (t) { goto L_0017CDDC; } }
L_0017CDA4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00460000u);
    st32((c.r[7].w[0]), c.r[2].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017CDB4u); set32(c.r[4], c.r[4].w[0] + 6496u);  if (depth < kMaxDepth) unit_001F(c, 26u, depth + 1u); else { c.pc = 0x0017C2F0u; return; } if (c.pc != 0x0017CDB4u) [[unlikely]] return; }
L_0017CDB4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 999u);  if (t) { goto L_0017CEE4; } }
    set32(c.r[2], 0u - 999u);
    c.budget -= 1;
L_0017CDC0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[4], c.r[4].w[0] + 6560u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017CDD0u); st32((c.r[7].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_001F(c, 26u, depth + 1u); else { c.pc = 0x0017C2F0u; return; } if (c.pc != 0x0017CDD0u) [[unlikely]] return; }
L_0017CDD0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 999u);  if (t) { goto L_0017CEE4; } }
    c.r[2].d[0] = c.r[3].sd[0] < 0ll ? 1ull : 0ull;
    c.budget -= 1;
L_0017CDDC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0017CEE0; } }
    set32(c.r[2], 0u - 992u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00460000u);
    st32((c.r[7].w[0]), c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[7].w[0])));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017CDFCu); set32(c.r[4], c.r[4].w[0] + 6624u);  if (depth < kMaxDepth) unit_001F(c, 26u, depth + 1u); else { c.pc = 0x0017C2F0u; return; } if (c.pc != 0x0017CDFCu) [[unlikely]] return; }
L_0017CDFC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 999u);  if (t) { goto L_0017CEE4; } }
L_0017CE04:
    set32(c.r[3], ld32((c.r[7].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0017CEE0; } }
    set32(c.r[2], 0u - 4u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u - 999u);  if (t) { goto L_0017CE4C; } }
    set32(c.r[2], 0u - 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0017CE30; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 992u);  if (t) { goto L_0017CE68; } }
L_0017CE30:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00460000u);
    st32((c.r[7].w[0]), c.r[2].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017CE40u); set32(c.r[4], c.r[4].w[0] + 6672u);  if (depth < kMaxDepth) unit_001F(c, 26u, depth + 1u); else { c.pc = 0x0017C2F0u; return; } if (c.pc != 0x0017CE40u) [[unlikely]] return; }
L_0017CE40:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 999u);  if (t) { goto L_0017CEE4; } }
    set32(c.r[2], 0u - 999u);
    c.budget -= 1;
L_0017CE4C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[4], c.r[4].w[0] + 6736u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017CE5Cu); st32((c.r[7].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_001F(c, 26u, depth + 1u); else { c.pc = 0x0017C2F0u; return; } if (c.pc != 0x0017CE5Cu) [[unlikely]] return; }
L_0017CE5C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 999u);  if (t) { goto L_0017CEE4; } }
    set32(c.r[2], 0u - 992u);
    c.budget -= 1;
L_0017CE68:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00460000u);
    st32((c.r[7].w[0]), c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[7].w[0])));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017CE7Cu); set32(c.r[4], c.r[4].w[0] + 6800u);  if (depth < kMaxDepth) unit_001F(c, 26u, depth + 1u); else { c.pc = 0x0017C2F0u; return; } if (c.pc != 0x0017CE7Cu) [[unlikely]] return; }
L_0017CE7C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 999u);  if (t) { goto L_0017CEE4; } }
L_0017CE84:
    set32(c.r[3], ld32((c.r[7].w[0])));
    set32(c.r[2], 0u - 403u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u - 999u);  if (t) { goto L_0017CEA0; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0017CEE0; } }
    set32(c.r[2], 0u - 999u);
    c.budget -= 1;
L_0017CEA0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00460000u);
    st32((c.r[7].w[0]), c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[7].w[0])));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017CEB4u); set32(c.r[4], c.r[4].w[0] + 6848u);  if (depth < kMaxDepth) unit_001F(c, 26u, depth + 1u); else { c.pc = 0x0017C2F0u; return; } if (c.pc != 0x0017CEB4u) [[unlikely]] return; }
L_0017CEB4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 999u);  if (t) { goto L_0017CEE4; } }
L_0017CEBC:
    set32(c.r[2], 0u - 999u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00460000u);
    st32((c.r[7].w[0]), c.r[2].w[0]);
    set32(c.r[6], ld32((c.r[6].w[0])));
    set32(c.r[7], ld32((c.r[7].w[0])));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017CED8u); set32(c.r[4], c.r[4].w[0] + 4304u);  if (depth < kMaxDepth) unit_001F(c, 26u, depth + 1u); else { c.pc = 0x0017C2F0u; return; } if (c.pc != 0x0017CED8u) [[unlikely]] return; }
L_0017CED8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 999u);  if (t) { goto L_0017CEE4; } }
L_0017CEE0:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0017CEE4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_0017CEE8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0017CEF0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.r[16].d[0] = c.r[7].d[0] + 0ull;
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017CF20u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0008(c, 78u, depth + 1u); else { c.pc = 0x00120C60u; return; } if (c.pc != 0x0017CF20u) [[unlikely]] return; }
L_0017CF20:
    set32(c.r[25], ld32((c.r[18].w[0] + 32u)));
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0017CF3Cu); c.r[5].d[0] = c.r[2].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0017CF3Cu) [[unlikely]] return; }
L_0017CF3C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u - 999u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] != c.r[2].d[0];  if (t) { goto L_0017CF60; } }
    set32(c.r[25], ld32((c.r[18].w[0] + 32u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0017CF60u); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0017CF60u) [[unlikely]] return; }
L_0017CF60:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0017CF80:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 6;
L_0017CF98:
    set32(c.r[25], ld32((c.r[17].w[0] + 32u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0017CFACu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0017CFACu) [[unlikely]] return; }
L_0017CFAC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0017CFBC; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0017CF98u | kUnwind; return; } goto L_0017CF98; } }
L_0017CFBC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0017CFD0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
L_0017CFE4:
    set32(c.r[5], c.r[29].w[0] + 44u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017CFF0u); set32(c.r[6], c.r[29].w[0] + 40u);  if (depth < kMaxDepth) unit_0008(c, 78u, depth + 1u); else { c.pc = 0x00120C60u; return; } if (c.pc != 0x0017CFF0u) [[unlikely]] return; }
L_0017CFF0:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_0017D01C; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0017D014; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0017D014; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0017D020; } }
L_0017D014:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0017D020; } }
L_0017D01C:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0017D020:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0017D034; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0017CFE4u | kUnwind; return; } goto L_0017CFE4; } }
L_0017D034:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0017D050:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[8].d[0] + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017D07Cu); c.r[16].d[0] = c.r[9].d[0] + 0ull;  if (depth < kMaxDepth) unit_001F(c, 36u, depth + 1u); else { c.pc = 0x0017C450u; return; } if (c.pc != 0x0017D07Cu) [[unlikely]] return; }
L_0017D07C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[2].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] - 14400u);
    st32((c.r[19].w[0] + 32u), c.r[3].w[0]);
    st32((c.r[19].w[0] + 56u), c.r[18].w[0]);
    st32((c.r[19].w[0] + 60u), c.r[17].w[0]);
    st32((c.r[19].w[0] + 64u), c.r[16].w[0]);
    st32((c.r[19].w[0] + 52u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 15;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0017D0C0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0017D108; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 14400u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017D0F0u); st32((c.r[17].w[0] + 32u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_001F(c, 37u, depth + 1u); else { c.pc = 0x0017C4C0u; return; } if (c.pc != 0x0017D0F0u) [[unlikely]] return; }
L_0017D0F0:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0017D10C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017D108u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x0017D108u) [[unlikely]] return; }
L_0017D108:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0017D10C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0017D120:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 52u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0017D160; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 32u)));
    set32(c.r[6], c.r[16].w[0] + 8u);
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0017D14Cu); set32(c.r[7], c.r[16].w[0] + 12u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0017D14Cu) [[unlikely]] return; }
L_0017D14C:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0017D160; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[16].w[0] + 12u)));  if (t) { goto L_0017D220; } }
L_0017D160:
    set32(c.r[5], ld32((c.r[16].w[0] + 52u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[2].d[0];  if (t) { goto L_0017D1C8; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0017D180; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0017D210; } }
L_0017D180:
    st32((c.r[16].w[0] + 12u), 0u);
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[6], ld32((c.r[16].w[0] + 56u)));
    set32(c.r[7], ld32((c.r[16].w[0] + 60u)));
    set32(c.r[8], ld32((c.r[16].w[0] + 64u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017D19Cu); set32(c.r[4], ld32((c.r[16].w[0])));  if (depth < kMaxDepth) unit_0008(c, 86u, depth + 1u); else { c.pc = 0x00120D98u; return; } if (c.pc != 0x0017D19Cu) [[unlikely]] return; }
L_0017D19C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_0017D1BC; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017D1B0u); set32(c.r[4], c.r[4].w[0] + 6992u);  if (depth < kMaxDepth) unit_001F(c, 26u, depth + 1u); else { c.pc = 0x0017C2F0u; return; } if (c.pc != 0x0017D1B0u) [[unlikely]] return; }
L_0017D1B0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 999u);  if (t) { goto L_0017D220; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_0017D1BC:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 52u), c.r[3].w[0]);  if (t) { goto L_0017D220; } }
L_0017D1C8:
    set32(c.r[4], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[3], 0u - 2u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0017D1FC; } }
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0017D1F4; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0017D220; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 992u);  if (t) { goto L_0017D208; } }
L_0017D1F4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[3].d[0] + 0ull;  if (t) { goto L_0017D220; } }
L_0017D1FC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[3].d[0] + 0ull;  if (t) { goto L_0017D220; } }
    set32(c.r[2], 0u - 992u);
    c.budget -= 1;
L_0017D208:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_0017D224; } }
L_0017D210:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017D21Cu); set32(c.r[4], c.r[4].w[0] + 7040u);  if (depth < kMaxDepth) unit_001F(c, 26u, depth + 1u); else { c.pc = 0x0017C2F0u; return; } if (c.pc != 0x0017D21Cu) [[unlikely]] return; }
L_0017D21C:
    set32(c.r[2], 0u - 999u);
    c.budget -= 1;
L_0017D220:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_0017D224:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0017D230:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017D24Cu); c.r[16].d[0] = c.r[7].d[0] + 0ull;  if (depth < kMaxDepth) unit_001F(c, 36u, depth + 1u); else { c.pc = 0x0017C450u; return; } if (c.pc != 0x0017D24Cu) [[unlikely]] return; }
L_0017D24C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] - 14432u);
    set32(c.r[4], c.r[17].w[0] + 56u);
    st32((c.r[17].w[0] + 32u), c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017D268u); set32(c.r[6], 0u + 63u);  if (depth < kMaxDepth) unit_000A(c, 12u, depth + 1u); else { c.pc = 0x001281F0u; return; } if (c.pc != 0x0017D268u) [[unlikely]] return; }
L_0017D268:
    st32((c.r[17].w[0] + 52u), 0u);
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0017D290:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0017D2D8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 14432u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017D2C0u); st32((c.r[17].w[0] + 32u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_001F(c, 37u, depth + 1u); else { c.pc = 0x0017C4C0u; return; } if (c.pc != 0x0017D2C0u) [[unlikely]] return; }
L_0017D2C0:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0017D2DC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017D2D8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x0017D2D8u) [[unlikely]] return; }
L_0017D2D8:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0017D2DC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0017D2F0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 52u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0017D330; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 32u)));
    set32(c.r[6], c.r[16].w[0] + 8u);
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0017D31Cu); set32(c.r[7], c.r[16].w[0] + 12u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0017D31Cu) [[unlikely]] return; }
L_0017D31C:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0017D330; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[16].w[0] + 12u)));  if (t) { goto L_0017D4C4; } }
L_0017D330:
    set32(c.r[5], ld32((c.r[16].w[0] + 52u)));
    set32(c.r[2], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 2u);  if (t) { goto L_0017D468; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[2].d[0];  if (t) { goto L_0017D428; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[2].d[0];  if (t) { goto L_0017D3C0; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x00460000u);  if (t) { goto L_0017D364; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x00460000u);  if (t) { goto L_0017D4B8; } }
L_0017D364:
    set32(c.r[5], c.r[16].w[0] + 56u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017D370u); set32(c.r[4], c.r[4].w[0] + 7088u);  if (depth < kMaxDepth) unit_001F(c, 26u, depth + 1u); else { c.pc = 0x0017C2F0u; return; } if (c.pc != 0x0017D370u) [[unlikely]] return; }
L_0017D370:
    st32((c.r[16].w[0] + 12u), 0u);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], ld32((c.r[16].w[0])));
    set32(c.r[6], c.r[16].w[0] + 56u);
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[8], 0u + 1u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017D394u); set32(c.r[9], c.r[9].w[0] + 25408u);  if (depth < kMaxDepth) unit_0008(c, 94u, depth + 1u); else { c.pc = 0x00120F88u; return; } if (c.pc != 0x0017D394u) [[unlikely]] return; }
L_0017D394:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_0017D3B4; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[5], c.r[16].w[0] + 56u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017D3ACu); set32(c.r[4], c.r[4].w[0] + 7120u);  if (depth < kMaxDepth) unit_001F(c, 26u, depth + 1u); else { c.pc = 0x0017C2F0u; return; } if (c.pc != 0x0017D3ACu) [[unlikely]] return; }
L_0017D3AC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 999u);  if (t) { goto L_0017D4C4; } }
L_0017D3B4:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 52u), c.r[3].w[0]);  if (t) { goto L_0017D4C4; } }
L_0017D3C0:
    set32(c.r[6], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[2].d[0]; c.r[4].sd[0] = static_cast<std::int32_t>(0x00460000u);  if (t) { goto L_0017D3F0; } }
    set32(c.r[2], 0u - 4u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 2u);  if (t) { goto L_0017D3E8; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_0017D3E8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x00460000u);  if (t) { goto L_0017D414; } }
L_0017D3E8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 52u), c.r[2].w[0]);  if (t) { goto L_0017D428; } }
L_0017D3F0:
    set32(c.r[5], c.r[16].w[0] + 56u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017D3FCu); set32(c.r[4], c.r[4].w[0] + 7168u);  if (depth < kMaxDepth) unit_001F(c, 26u, depth + 1u); else { c.pc = 0x0017C2F0u; return; } if (c.pc != 0x0017D3FCu) [[unlikely]] return; }
L_0017D3FC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[5], c.r[16].w[0] + 56u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017D40Cu); set32(c.r[4], c.r[4].w[0] + 7200u);  if (depth < kMaxDepth) unit_001F(c, 26u, depth + 1u); else { c.pc = 0x0017C2F0u; return; } if (c.pc != 0x0017D40Cu) [[unlikely]] return; }
L_0017D40C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0017D4C4; } }
L_0017D414:
    set32(c.r[5], c.r[16].w[0] + 56u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017D420u); set32(c.r[4], c.r[4].w[0] + 7232u);  if (depth < kMaxDepth) unit_001F(c, 26u, depth + 1u); else { c.pc = 0x0017C2F0u; return; } if (c.pc != 0x0017D420u) [[unlikely]] return; }
L_0017D420:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 999u);  if (t) { goto L_0017D4C4; } }
L_0017D428:
    st32((c.r[16].w[0] + 12u), 0u);
    set32(c.r[4], ld32((c.r[16].w[0])));
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017D43Cu); set32(c.r[6], c.r[16].w[0] + 56u);  if (depth < kMaxDepth) unit_0008(c, 49u, depth + 1u); else { c.pc = 0x00120738u; return; } if (c.pc != 0x0017D43Cu) [[unlikely]] return; }
L_0017D43C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], 0u + 3u);  if (t) { goto L_0017D45C; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[5], c.r[16].w[0] + 56u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017D454u); set32(c.r[4], c.r[4].w[0] + 7280u);  if (depth < kMaxDepth) unit_001F(c, 26u, depth + 1u); else { c.pc = 0x0017C2F0u; return; } if (c.pc != 0x0017D454u) [[unlikely]] return; }
L_0017D454:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 999u);  if (t) { goto L_0017D4C4; } }
L_0017D45C:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 52u), c.r[3].w[0]);  if (t) { goto L_0017D4C4; } }
L_0017D468:
    set32(c.r[6], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[2], 0u - 3u);
    c.budget -= 4;
    { const bool t = c.r[6].d[0] == c.r[2].d[0]; set32(c.r[2], 0u - 996u);  if (t) { goto L_0017D49C; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x00460000u);  if (t) { goto L_0017D488; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x00460000u);  if (t) { goto L_0017D4A4; } }
L_0017D488:
    set32(c.r[5], c.r[16].w[0] + 56u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017D494u); set32(c.r[4], c.r[4].w[0] + 7200u);  if (depth < kMaxDepth) unit_001F(c, 26u, depth + 1u); else { c.pc = 0x0017C2F0u; return; } if (c.pc != 0x0017D494u) [[unlikely]] return; }
L_0017D494:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0017D4C4; } }
L_0017D49C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_0017D4C8; } }
L_0017D4A4:
    set32(c.r[5], c.r[16].w[0] + 56u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017D4B0u); set32(c.r[4], c.r[4].w[0] + 7328u);  if (depth < kMaxDepth) unit_001F(c, 26u, depth + 1u); else { c.pc = 0x0017C2F0u; return; } if (c.pc != 0x0017D4B0u) [[unlikely]] return; }
L_0017D4B0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 999u);  if (t) { goto L_0017D4C4; } }
L_0017D4B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017D4C0u); set32(c.r[4], c.r[4].w[0] + 7376u);  if (depth < kMaxDepth) unit_001F(c, 26u, depth + 1u); else { c.pc = 0x0017C2F0u; return; } if (c.pc != 0x0017D4C0u) [[unlikely]] return; }
L_0017D4C0:
    set32(c.r[2], 0u - 999u);
    c.budget -= 1;
L_0017D4C4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_0017D4C8:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0017D4E0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017D504u); c.r[16].d[0] = c.r[8].d[0] + 0ull;  if (depth < kMaxDepth) unit_001F(c, 36u, depth + 1u); else { c.pc = 0x0017C450u; return; } if (c.pc != 0x0017D504u) [[unlikely]] return; }
L_0017D504:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] - 14464u);
    set32(c.r[4], c.r[18].w[0] + 1080u);
    st32((c.r[18].w[0] + 32u), c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017D520u); set32(c.r[6], 0u + 63u);  if (depth < kMaxDepth) unit_000A(c, 12u, depth + 1u); else { c.pc = 0x001281F0u; return; } if (c.pc != 0x0017D520u) [[unlikely]] return; }
L_0017D520:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[18].w[0] + 56u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017D530u); set32(c.r[6], 0u + 1023u);  if (depth < kMaxDepth) unit_000A(c, 12u, depth + 1u); else { c.pc = 0x001281F0u; return; } if (c.pc != 0x0017D530u) [[unlikely]] return; }
L_0017D530:
    set32(c.r[3], 0u - 1u);
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    st32((c.r[18].w[0] + 1152u), c.r[3].w[0]);
    st32((c.r[18].w[0] + 1148u), c.r[3].w[0]);
    st32((c.r[18].w[0] + 1164u), 0u);
    st32((c.r[18].w[0] + 1160u), 0u);
    st32((c.r[18].w[0] + 1156u), 0u);
    st32((c.r[18].w[0] + 1144u), 0u);
    st32((c.r[18].w[0] + 1168u), 0u);
    st32((c.r[18].w[0] + 52u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 16;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0017D570:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0017D610; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] - 14464u);
    st32((c.r[17].w[0] + 32u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 1148u)));
    c.budget -= 6;
    { const bool t = c.r[4].sd[0] < 0;  if (t) { goto L_0017D5AC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017D5ACu);  if (depth < kMaxDepth) unit_0004(c, 4u, depth + 1u); else { c.pc = 0x00110048u; return; } if (c.pc != 0x0017D5ACu) [[unlikely]] return; }
L_0017D5AC:
    set32(c.r[4], ld32((c.r[17].w[0] + 1144u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0017D5C0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017D5C0u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100210u; return; } if (c.pc != 0x0017D5C0u) [[unlikely]] return; }
L_0017D5C0:
    st32((c.r[17].w[0] + 1144u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 1168u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0017D5E8; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0017D5E8; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0017D5E8u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0017D5E8u) [[unlikely]] return; }
L_0017D5E8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017D5F8u); st32((c.r[17].w[0] + 1168u), 0u);  if (depth < kMaxDepth) unit_001F(c, 37u, depth + 1u); else { c.pc = 0x0017C4C0u; return; } if (c.pc != 0x0017D5F8u) [[unlikely]] return; }
L_0017D5F8:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0017D614; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017D610u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x0017D610u) [[unlikely]] return; }
L_0017D610:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0017D614:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0017D630:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 52u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0017D674; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 32u)));
    set32(c.r[6], c.r[16].w[0] + 8u);
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0017D660u); set32(c.r[7], c.r[16].w[0] + 12u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0017D660u) [[unlikely]] return; }
L_0017D660:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0017D674; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[16].w[0] + 12u)));  if (t) { goto L_0017D9B8; } }
L_0017D674:
    set32(c.r[5], ld32((c.r[16].w[0] + 52u)));
    c.r[1].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(11ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x00460000u);  if (t) { goto L_0017D9AC; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[2], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + 8128u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x0017C000u < 16384u) { entry = entries_001F[(t - 0x0017C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0017D6A0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[5], c.r[16].w[0] + 1080u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017D6B0u); set32(c.r[4], c.r[4].w[0] + 7424u);  if (depth < kMaxDepth) unit_001F(c, 26u, depth + 1u); else { c.pc = 0x0017C2F0u; return; } if (c.pc != 0x0017D6B0u) [[unlikely]] return; }
L_0017D6B0:
    st32((c.r[16].w[0] + 12u), 0u);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], ld32((c.r[16].w[0])));
    set32(c.r[6], c.r[16].w[0] + 1080u);
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[8], 0u + 1u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017D6D4u); set32(c.r[9], c.r[9].w[0] + 25408u);  if (depth < kMaxDepth) unit_0008(c, 94u, depth + 1u); else { c.pc = 0x00120F88u; return; } if (c.pc != 0x0017D6D4u) [[unlikely]] return; }
L_0017D6D4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_0017D6F4; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[5], c.r[16].w[0] + 1080u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017D6ECu); set32(c.r[4], c.r[4].w[0] + 7472u);  if (depth < kMaxDepth) unit_001F(c, 26u, depth + 1u); else { c.pc = 0x0017C2F0u; return; } if (c.pc != 0x0017D6ECu) [[unlikely]] return; }
L_0017D6EC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 999u);  if (t) { goto L_0017D9B8; } }
L_0017D6F4:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 52u), c.r[3].w[0]);  if (t) { goto L_0017D9B8; } }
L_0017D700:
    set32(c.r[6], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[2], 0u - 4u);
    c.budget -= 4;
    { const bool t = c.r[6].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 2u);  if (t) { goto L_0017D774; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0017D770; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == c.r[2].d[0];  if (t) { goto L_0017D728; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x00460000u);  if (t) { goto L_0017D798; } }
L_0017D728:
    set32(c.r[5], ld32((c.r[16].w[0] + 16u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017D738u); set32(c.r[4], c.r[4].w[0] + 25408u);  if (depth < kMaxDepth) unit_001F(c, 35u, depth + 1u); else { c.pc = 0x0017C440u; return; } if (c.pc != 0x0017D738u) [[unlikely]] return; }
L_0017D738:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x00460000u);  if (t) { goto L_0017D770; } }
    set32(c.r[5], c.r[16].w[0] + 1080u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017D74Cu); set32(c.r[4], c.r[4].w[0] + 7520u);  if (depth < kMaxDepth) unit_001F(c, 26u, depth + 1u); else { c.pc = 0x0017C2F0u; return; } if (c.pc != 0x0017D74Cu) [[unlikely]] return; }
L_0017D74C:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 36u)));
    c.r[2].d[0] = c.r[2].d[0] << 63;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 63);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x00460000u);  if (t) { goto L_0017D770; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017D768u); set32(c.r[4], c.r[4].w[0] + 7552u);  if (depth < kMaxDepth) unit_001F(c, 26u, depth + 1u); else { c.pc = 0x0017C2F0u; return; } if (c.pc != 0x0017D768u) [[unlikely]] return; }
L_0017D768:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0017D9B8; } }
L_0017D770:
    set32(c.r[2], 0u + 2u);
    c.budget -= 1;
L_0017D774:
    set32(c.r[4], 0u + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017D780u); st32((c.r[16].w[0] + 52u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0017D780u) [[unlikely]] return; }
L_0017D780:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0017D790; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017D790u); set32(c.r[5], c.r[16].w[0] + 56u);  if (depth < kMaxDepth) unit_001F(c, 441u, depth + 1u); else { c.pc = 0x0017F900u; return; } if (c.pc != 0x0017D790u) [[unlikely]] return; }
L_0017D790:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 1168u), c.r[2].w[0]);  if (t) { goto L_0017D7AC; } }
L_0017D798:
    set32(c.r[5], c.r[16].w[0] + 1080u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017D7A4u); set32(c.r[4], c.r[4].w[0] + 7584u);  if (depth < kMaxDepth) unit_001F(c, 26u, depth + 1u); else { c.pc = 0x0017C2F0u; return; } if (c.pc != 0x0017D7A4u) [[unlikely]] return; }
L_0017D7A4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 999u);  if (t) { goto L_0017D9B8; } }
L_0017D7AC:
    set32(c.r[17], ld32((c.r[16].w[0] + 1168u)));
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x00460000u);  if (t) { goto L_0017D7F0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017D7C0u); set32(c.r[4], c.r[17].w[0] + 8u);  if (depth < kMaxDepth) unit_0011(c, 177u, depth + 1u); else { c.pc = 0x00146C10u; return; } if (c.pc != 0x0017D7C0u) [[unlikely]] return; }
L_0017D7C0:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[17].w[0] + 8u);  if (t) { goto L_0017D7D8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017D7D4u);  if (depth < kMaxDepth) unit_0011(c, 182u, depth + 1u); else { c.pc = 0x00146C90u; return; } if (c.pc != 0x0017D7D4u) [[unlikely]] return; }
L_0017D7D4:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 1;
L_0017D7D8:
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0017D800; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 52u), c.r[2].w[0]);  if (t) { goto L_0017D800; } }
L_0017D7F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017D7F8u); set32(c.r[4], c.r[4].w[0] + 7648u);  if (depth < kMaxDepth) unit_001F(c, 26u, depth + 1u); else { c.pc = 0x0017C2F0u; return; } if (c.pc != 0x0017D7F8u) [[unlikely]] return; }
L_0017D7F8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 999u);  if (t) { goto L_0017D9B8; } }
L_0017D800:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0017D9B8; } }
L_0017D808:
    st32((c.r[16].w[0] + 12u), 0u);
    set32(c.r[6], c.r[16].w[0] + 1080u);
    set32(c.r[4], ld32((c.r[16].w[0])));
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017D820u); set32(c.r[7], 0u + 514u);  if (depth < kMaxDepth) unit_0008(c, 43u, depth + 1u); else { c.pc = 0x00120610u; return; } if (c.pc != 0x0017D820u) [[unlikely]] return; }
L_0017D820:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], 0u + 4u);  if (t) { goto L_0017D840; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[5], c.r[16].w[0] + 1080u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017D838u); set32(c.r[4], c.r[4].w[0] + 7696u);  if (depth < kMaxDepth) unit_001F(c, 26u, depth + 1u); else { c.pc = 0x0017C2F0u; return; } if (c.pc != 0x0017D838u) [[unlikely]] return; }
L_0017D838:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 999u);  if (t) { goto L_0017D9B8; } }
L_0017D840:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 52u), c.r[3].w[0]);  if (t) { goto L_0017D9B8; } }
L_0017D84C:
    set32(c.r[6], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[6].sd[0] >= 0; c.r[4].sd[0] = static_cast<std::int32_t>(0x00460000u);  if (t) { goto L_0017D884; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[5], c.r[16].w[0] + 1080u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017D868u); set32(c.r[4], c.r[4].w[0] + 7744u);  if (depth < kMaxDepth) unit_001F(c, 26u, depth + 1u); else { c.pc = 0x0017C2F0u; return; } if (c.pc != 0x0017D868u) [[unlikely]] return; }
L_0017D868:
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[2], 0u - 3u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u - 999u);  if (t) { goto L_0017D87C; } }
    set32(c.r[2], 0u - 996u);
    c.budget -= 1;
L_0017D87C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_0017D9BC; } }
L_0017D884:
    st32((c.r[16].w[0] + 1152u), c.r[6].w[0]);
    set32(c.r[4], c.r[4].w[0] + 7800u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017D894u); set32(c.r[5], c.r[16].w[0] + 1080u);  if (depth < kMaxDepth) unit_001F(c, 26u, depth + 1u); else { c.pc = 0x0017C2F0u; return; } if (c.pc != 0x0017D894u) [[unlikely]] return; }
L_0017D894:
    set32(c.r[2], 0u + 7u);
    st32((c.r[16].w[0] + 52u), c.r[2].w[0]);
    c.budget -= 2;
L_0017D89C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017D8A4u); set32(c.r[4], ld32((c.r[16].w[0] + 1168u)));  if (depth < kMaxDepth) unit_001F(c, 455u, depth + 1u); else { c.pc = 0x0017FA70u; return; } if (c.pc != 0x0017D8A4u) [[unlikely]] return; }
L_0017D8A4:
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    st32((c.r[16].w[0] + 1164u), c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017D8B8u); set32(c.r[4], ld32((c.r[16].w[0] + 1168u)));  if (depth < kMaxDepth) unit_001F(c, 454u, depth + 1u); else { c.pc = 0x0017FA60u; return; } if (c.pc != 0x0017D8B8u) [[unlikely]] return; }
L_0017D8B8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[16].w[0] + 12u), 0u);  if (t) { goto L_0017D8D8; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 1152u)));
    set32(c.r[6], ld32((c.r[16].w[0] + 1164u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017D8D0u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0008(c, 69u, depth + 1u); else { c.pc = 0x00120AA8u; return; } if (c.pc != 0x0017D8D0u) [[unlikely]] return; }
L_0017D8D0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], 0u + 8u);  if (t) { goto L_0017D8F0; } }
L_0017D8D8:
    set32(c.r[5], ld32((c.r[16].w[0] + 1164u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017D8E8u); set32(c.r[4], c.r[4].w[0] + 7824u);  if (depth < kMaxDepth) unit_001F(c, 26u, depth + 1u); else { c.pc = 0x0017C2F0u; return; } if (c.pc != 0x0017D8E8u) [[unlikely]] return; }
L_0017D8E8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 999u);  if (t) { goto L_0017D9B8; } }
L_0017D8F0:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 52u), c.r[3].w[0]);  if (t) { goto L_0017D9B8; } }
L_0017D8FC:
    set32(c.r[5], ld32((c.r[16].w[0] + 1164u)));
    set32(c.r[6], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 4;
    { const bool t = c.r[6].d[0] == c.r[5].d[0]; set32(c.r[2], 0u + 9u);  if (t) { goto L_0017D934; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017D918u); set32(c.r[4], c.r[4].w[0] + 7872u);  if (depth < kMaxDepth) unit_001F(c, 26u, depth + 1u); else { c.pc = 0x0017C2F0u; return; } if (c.pc != 0x0017D918u) [[unlikely]] return; }
L_0017D918:
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[2], 0u - 3u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u - 999u);  if (t) { goto L_0017D92C; } }
    set32(c.r[2], 0u - 996u);
    c.budget -= 1;
L_0017D92C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0017D9B8; } }
L_0017D934:
    st32((c.r[16].w[0] + 52u), c.r[2].w[0]);
    c.budget -= 1;
L_0017D938:
    st32((c.r[16].w[0] + 12u), 0u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017D944u); set32(c.r[4], ld32((c.r[16].w[0] + 1152u)));  if (depth < kMaxDepth) unit_0008(c, 51u, depth + 1u); else { c.pc = 0x00120770u; return; } if (c.pc != 0x0017D944u) [[unlikely]] return; }
L_0017D944:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], 0u + 10u);  if (t) { goto L_0017D960; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017D958u); set32(c.r[4], c.r[4].w[0] + 7936u);  if (depth < kMaxDepth) unit_001F(c, 26u, depth + 1u); else { c.pc = 0x0017C2F0u; return; } if (c.pc != 0x0017D958u) [[unlikely]] return; }
L_0017D958:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 999u);  if (t) { goto L_0017D9B8; } }
L_0017D960:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 52u), c.r[3].w[0]);  if (t) { goto L_0017D9B8; } }
L_0017D96C:
    set32(c.r[5], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_0017D98C; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017D984u); set32(c.r[4], c.r[4].w[0] + 7984u);  if (depth < kMaxDepth) unit_001F(c, 26u, depth + 1u); else { c.pc = 0x0017C2F0u; return; } if (c.pc != 0x0017D984u) [[unlikely]] return; }
L_0017D984:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 999u);  if (t) { goto L_0017D9B8; } }
L_0017D98C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[4], c.r[4].w[0] + 8048u);
    st32((c.r[16].w[0] + 1152u), c.r[2].w[0]);
    set32(c.r[5], c.r[16].w[0] + 56u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017D9A4u); set32(c.r[6], c.r[16].w[0] + 1080u);  if (depth < kMaxDepth) unit_001F(c, 26u, depth + 1u); else { c.pc = 0x0017C2F0u; return; } if (c.pc != 0x0017D9A4u) [[unlikely]] return; }
L_0017D9A4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0017D9B8; } }
L_0017D9AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017D9B4u); set32(c.r[4], c.r[4].w[0] + 8080u);  if (depth < kMaxDepth) unit_001F(c, 26u, depth + 1u); else { c.pc = 0x0017C2F0u; return; } if (c.pc != 0x0017D9B4u) [[unlikely]] return; }
L_0017D9B4:
    set32(c.r[2], 0u - 999u);
    c.budget -= 1;
L_0017D9B8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_0017D9BC:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0017D9D0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[8].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[9].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[10].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[11].d[0] + 0ull;
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017DA0Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_001F(c, 36u, depth + 1u); else { c.pc = 0x0017C450u; return; } if (c.pc != 0x0017DA0Cu) [[unlikely]] return; }
L_0017DA0C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] - 14496u);
    set32(c.r[4], c.r[16].w[0] + 56u);
    st32((c.r[16].w[0] + 32u), c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017DA28u); set32(c.r[6], 0u + 63u);  if (depth < kMaxDepth) unit_000A(c, 12u, depth + 1u); else { c.pc = 0x001281F0u; return; } if (c.pc != 0x0017DA28u) [[unlikely]] return; }
L_0017DA28:
    st32((c.r[16].w[0] + 120u), c.r[20].w[0]);
    set32(c.r[4], 0u - 1u);
    st32((c.r[16].w[0] + 124u), c.r[19].w[0]);
    set32(c.r[3], 0u + 3u);
    st32((c.r[16].w[0] + 140u), c.r[18].w[0]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 136u), c.r[17].w[0]);
    st32((c.r[16].w[0] + 128u), c.r[4].w[0]);
    st32((c.r[16].w[0] + 132u), 0u);
    st32((c.r[16].w[0] + 144u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 52u), 0u);
    st32((c.r[16].w[0] + 16u), c.r[19].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 21;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_0017DA80:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0017DAC8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 14496u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017DAB0u); st32((c.r[17].w[0] + 32u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_001F(c, 37u, depth + 1u); else { c.pc = 0x0017C4C0u; return; } if (c.pc != 0x0017DAB0u) [[unlikely]] return; }
L_0017DAB0:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0017DACC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017DAC8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x0017DAC8u) [[unlikely]] return; }
L_0017DAC8:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0017DACC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0017DAE0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017DAF0u);  if (depth < kMaxDepth) unit_001F(c, 113u, depth + 1u); else { c.pc = 0x0017CF80u; return; } if (c.pc != 0x0017DAF0u) [[unlikely]] return; }
L_0017DAF0:
    set32(c.r[3], 0u - 995u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0017DB04; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0017DB08; } }
L_0017DB04:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0017DB08:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0017DB20:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 52u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0017DB60; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 32u)));
    set32(c.r[6], c.r[16].w[0] + 8u);
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0017DB4Cu); set32(c.r[7], c.r[16].w[0] + 12u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0017DB4Cu) [[unlikely]] return; }
L_0017DB4C:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0017DB60; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[16].w[0] + 12u)));  if (t) { goto L_0017DF5C; } }
L_0017DB60:
    set32(c.r[5], ld32((c.r[16].w[0] + 52u)));
    c.r[1].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(10ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0017DF4C; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[2], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + 8928u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x0017C000u < 16384u) { entry = entries_001F[(t - 0x0017C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0017DB8C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[5], c.r[16].w[0] + 56u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017DB9Cu); set32(c.r[4], c.r[4].w[0] + 8176u);  if (depth < kMaxDepth) unit_001F(c, 26u, depth + 1u); else { c.pc = 0x0017C2F0u; return; } if (c.pc != 0x0017DB9Cu) [[unlikely]] return; }
L_0017DB9C:
    st32((c.r[16].w[0] + 12u), 0u);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], ld32((c.r[16].w[0])));
    set32(c.r[6], c.r[16].w[0] + 56u);
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[8], 0u + 1u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017DBC0u); set32(c.r[9], c.r[9].w[0] + 25408u);  if (depth < kMaxDepth) unit_0008(c, 94u, depth + 1u); else { c.pc = 0x00120F88u; return; } if (c.pc != 0x0017DBC0u) [[unlikely]] return; }
L_0017DBC0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_0017DBE4; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[5], c.r[16].w[0] + 56u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017DBD8u); set32(c.r[4], c.r[4].w[0] + 8224u);  if (depth < kMaxDepth) unit_001F(c, 26u, depth + 1u); else { c.pc = 0x0017C2F0u; return; } if (c.pc != 0x0017DBD8u) [[unlikely]] return; }
L_0017DBD8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 999u);  if (t) { goto L_0017DF5C; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_0017DBE4:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 52u), c.r[3].w[0]);  if (t) { goto L_0017DF5C; } }
L_0017DBF0:
    set32(c.r[6], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[2], 0u - 4u);
    c.budget -= 4;
    { const bool t = c.r[6].d[0] == c.r[2].d[0];  if (t) { goto L_0017DC6C; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_0017DC6C; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[2].d[0];  if (t) { goto L_0017DC1C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0017DCA0; } }
L_0017DC1C:
    set32(c.r[5], ld32((c.r[16].w[0] + 16u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017DC2Cu); set32(c.r[4], c.r[4].w[0] + 25408u);  if (depth < kMaxDepth) unit_001F(c, 35u, depth + 1u); else { c.pc = 0x0017C440u; return; } if (c.pc != 0x0017DC2Cu) [[unlikely]] return; }
L_0017DC2C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0017DC60; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[5], c.r[16].w[0] + 56u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017DC44u); set32(c.r[4], c.r[4].w[0] + 8272u);  if (depth < kMaxDepth) unit_001F(c, 26u, depth + 1u); else { c.pc = 0x0017C2F0u; return; } if (c.pc != 0x0017DC44u) [[unlikely]] return; }
L_0017DC44:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 36u)));
    c.r[2].d[0] = c.r[2].d[0] << 63;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 63);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 2u);  if (t) { goto L_0017DC64; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 995u);  if (t) { goto L_0017DF5C; } }
L_0017DC60:
    set32(c.r[2], 0u + 2u);
    c.budget -= 1;
L_0017DC64:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 52u), c.r[2].w[0]);  if (t) { goto L_0017DCB8; } }
L_0017DC6C:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 36u)));
    c.r[2].d[0] = c.r[2].d[0] << 62;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 63);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0017DC88; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 994u);  if (t) { goto L_0017DF5C; } }
L_0017DC88:
    set32(c.r[3], ld32((c.r[16].w[0] + 144u)));
    set32(c.r[2], 0u + 2u);
    c.r[3].d[0] = c.r[3].d[0] | 512ull;
    st32((c.r[16].w[0] + 144u), c.r[3].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 52u), c.r[2].w[0]);  if (t) { goto L_0017DCB8; } }
L_0017DCA0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[5], c.r[16].w[0] + 56u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017DCB0u); set32(c.r[4], c.r[4].w[0] + 8304u);  if (depth < kMaxDepth) unit_001F(c, 26u, depth + 1u); else { c.pc = 0x0017C2F0u; return; } if (c.pc != 0x0017DCB0u) [[unlikely]] return; }
L_0017DCB0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 999u);  if (t) { goto L_0017DF5C; } }
L_0017DCB8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[5], c.r[16].w[0] + 56u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017DCC8u); set32(c.r[4], c.r[4].w[0] + 8368u);  if (depth < kMaxDepth) unit_001F(c, 26u, depth + 1u); else { c.pc = 0x0017C2F0u; return; } if (c.pc != 0x0017DCC8u) [[unlikely]] return; }
L_0017DCC8:
    st32((c.r[16].w[0] + 12u), 0u);
    set32(c.r[4], ld32((c.r[16].w[0])));
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[7], ld32((c.r[16].w[0] + 144u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017DCE0u); set32(c.r[6], c.r[16].w[0] + 56u);  if (depth < kMaxDepth) unit_0008(c, 43u, depth + 1u); else { c.pc = 0x00120610u; return; } if (c.pc != 0x0017DCE0u) [[unlikely]] return; }
L_0017DCE0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], 0u + 3u);  if (t) { goto L_0017DD04; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[5], c.r[16].w[0] + 56u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017DCF8u); set32(c.r[4], c.r[4].w[0] + 8400u);  if (depth < kMaxDepth) unit_001F(c, 26u, depth + 1u); else { c.pc = 0x0017C2F0u; return; } if (c.pc != 0x0017DCF8u) [[unlikely]] return; }
L_0017DCF8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 999u);  if (t) { goto L_0017DF5C; } }
    set32(c.r[3], 0u + 3u);
    c.budget -= 1;
L_0017DD04:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 52u), c.r[3].w[0]);  if (t) { goto L_0017DF5C; } }
L_0017DD10:
    set32(c.r[6], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[6].sd[0] >= 0;  if (t) { goto L_0017DD50; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[5], c.r[16].w[0] + 56u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017DD2Cu); set32(c.r[4], c.r[4].w[0] + 8448u);  if (depth < kMaxDepth) unit_001F(c, 26u, depth + 1u); else { c.pc = 0x0017C2F0u; return; } if (c.pc != 0x0017DD2Cu) [[unlikely]] return; }
L_0017DD2C:
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[2], 0u - 3u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u - 999u);  if (t) { goto L_0017DD48; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 996u);  if (t) { goto L_0017DD48; } }
    set32(c.r[2], 0u - 999u);
    c.budget -= 1;
L_0017DD48:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_0017DF60; } }
L_0017DD50:
    st32((c.r[16].w[0] + 128u), c.r[6].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 144u)));
    c.r[2].d[0] = c.r[2].d[0] & 512ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], 0u + 6u);  if (t) { goto L_0017DD74; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 140u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 4u);  if (t) { goto L_0017DD84; } }
    set32(c.r[3], 0u + 6u);
    c.budget -= 1;
L_0017DD74:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 52u), c.r[3].w[0]);  if (t) { goto L_0017DF5C; } }
    set32(c.r[2], 0u + 4u);
    c.budget -= 1;
L_0017DD84:
    st32((c.r[16].w[0] + 52u), c.r[2].w[0]);
    c.budget -= 1;
L_0017DD88:
    st32((c.r[16].w[0] + 12u), 0u);
    set32(c.r[4], ld32((c.r[16].w[0] + 128u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 140u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017DD9Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0008(c, 56u, depth + 1u); else { c.pc = 0x00120828u; return; } if (c.pc != 0x0017DD9Cu) [[unlikely]] return; }
L_0017DD9C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], 0u + 5u);  if (t) { goto L_0017DDC0; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[5], c.r[16].w[0] + 56u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017DDB4u); set32(c.r[4], c.r[4].w[0] + 8512u);  if (depth < kMaxDepth) unit_001F(c, 26u, depth + 1u); else { c.pc = 0x0017C2F0u; return; } if (c.pc != 0x0017DDB4u) [[unlikely]] return; }
L_0017DDB4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 999u);  if (t) { goto L_0017DF5C; } }
    set32(c.r[3], 0u + 5u);
    c.budget -= 1;
L_0017DDC0:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 52u), c.r[3].w[0]);  if (t) { goto L_0017DF5C; } }
L_0017DDCC:
    set32(c.r[6], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[6].sd[0] >= 0; set32(c.r[2], 0u + 6u);  if (t) { goto L_0017DDF4; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[5], c.r[16].w[0] + 56u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017DDE8u); set32(c.r[4], c.r[4].w[0] + 8560u);  if (depth < kMaxDepth) unit_001F(c, 26u, depth + 1u); else { c.pc = 0x0017C2F0u; return; } if (c.pc != 0x0017DDE8u) [[unlikely]] return; }
L_0017DDE8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 999u);  if (t) { goto L_0017DF5C; } }
    set32(c.r[2], 0u + 6u);
    c.budget -= 1;
L_0017DDF4:
    st32((c.r[16].w[0] + 52u), c.r[2].w[0]);
    c.budget -= 1;
L_0017DDF8:
    set32(c.r[3], ld32((c.r[16].w[0] + 124u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_0017DE14; } }
    set32(c.r[3], 0u + 8u);
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 52u), c.r[3].w[0]);  if (t) { goto L_0017DF5C; } }
L_0017DE14:
    set32(c.r[2], ld32((c.r[16].w[0] + 136u)));
    c.r[1].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    if (c.r[1].d[0] == 0) c.r[3].d[0] = c.r[2].d[0];
    st32((c.r[16].w[0] + 132u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 12u), 0u);
    set32(c.r[5], ld32((c.r[16].w[0] + 120u)));
    set32(c.r[6], ld32((c.r[16].w[0] + 132u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017DE38u); set32(c.r[4], ld32((c.r[16].w[0] + 128u)));  if (depth < kMaxDepth) unit_0008(c, 69u, depth + 1u); else { c.pc = 0x00120AA8u; return; } if (c.pc != 0x0017DE38u) [[unlikely]] return; }
L_0017DE38:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], 0u + 7u);  if (t) { goto L_0017DE5C; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 132u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017DE50u); set32(c.r[4], c.r[4].w[0] + 8624u);  if (depth < kMaxDepth) unit_001F(c, 26u, depth + 1u); else { c.pc = 0x0017C2F0u; return; } if (c.pc != 0x0017DE50u) [[unlikely]] return; }
L_0017DE50:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 999u);  if (t) { goto L_0017DF5C; } }
    set32(c.r[3], 0u + 7u);
    c.budget -= 1;
L_0017DE5C:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 52u), c.r[3].w[0]);  if (t) { goto L_0017DF5C; } }
L_0017DE68:
    set32(c.r[5], ld32((c.r[16].w[0] + 132u)));
    set32(c.r[6], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 4;
    { const bool t = c.r[6].d[0] == c.r[5].d[0];  if (t) { goto L_0017DEA8; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017DE84u); set32(c.r[4], c.r[4].w[0] + 8672u);  if (depth < kMaxDepth) unit_001F(c, 26u, depth + 1u); else { c.pc = 0x0017C2F0u; return; } if (c.pc != 0x0017DE84u) [[unlikely]] return; }
L_0017DE84:
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[2], 0u - 3u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u - 999u);  if (t) { goto L_0017DEA0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 996u);  if (t) { goto L_0017DEA0; } }
    set32(c.r[2], 0u - 999u);
    c.budget -= 1;
L_0017DEA0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0017DF5C; } }
L_0017DEA8:
    set32(c.r[4], ld32((c.r[16].w[0] + 120u)));
    set32(c.r[3], 0u + 6u);
    c.r[2].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    st32((c.r[16].w[0] + 120u), c.r[4].w[0]);
    set32(c.r[5], ld32((c.r[16].w[0] + 132u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 124u)));
    set32(c.r[4], c.r[4].w[0] - c.r[5].w[0]);
    st32((c.r[16].w[0] + 124u), c.r[4].w[0]);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 52u), c.r[3].w[0]);  if (t) { goto L_0017DF5C; } }
L_0017DED4:
    st32((c.r[16].w[0] + 12u), 0u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017DEE0u); set32(c.r[4], ld32((c.r[16].w[0] + 128u)));  if (depth < kMaxDepth) unit_0008(c, 51u, depth + 1u); else { c.pc = 0x00120770u; return; } if (c.pc != 0x0017DEE0u) [[unlikely]] return; }
L_0017DEE0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], 0u + 9u);  if (t) { goto L_0017DF00; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017DEF4u); set32(c.r[4], c.r[4].w[0] + 8736u);  if (depth < kMaxDepth) unit_001F(c, 26u, depth + 1u); else { c.pc = 0x0017C2F0u; return; } if (c.pc != 0x0017DEF4u) [[unlikely]] return; }
L_0017DEF4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 999u);  if (t) { goto L_0017DF5C; } }
    set32(c.r[3], 0u + 9u);
    c.budget -= 1;
L_0017DF00:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 52u), c.r[3].w[0]);  if (t) { goto L_0017DF5C; } }
L_0017DF0C:
    set32(c.r[5], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_0017DF30; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017DF24u); set32(c.r[4], c.r[4].w[0] + 8784u);  if (depth < kMaxDepth) unit_001F(c, 26u, depth + 1u); else { c.pc = 0x0017C2F0u; return; } if (c.pc != 0x0017DF24u) [[unlikely]] return; }
L_0017DF24:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 999u);  if (t) { goto L_0017DF5C; } }
    set32(c.r[2], 0u - 1u);
    c.budget -= 1;
L_0017DF30:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[4], c.r[4].w[0] + 8848u);
    st32((c.r[16].w[0] + 128u), c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017DF44u); set32(c.r[5], c.r[16].w[0] + 56u);  if (depth < kMaxDepth) unit_001F(c, 26u, depth + 1u); else { c.pc = 0x0017C2F0u; return; } if (c.pc != 0x0017DF44u) [[unlikely]] return; }
L_0017DF44:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0017DF5C; } }
L_0017DF4C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017DF58u); set32(c.r[4], c.r[4].w[0] + 8880u);  if (depth < kMaxDepth) unit_001F(c, 26u, depth + 1u); else { c.pc = 0x0017C2F0u; return; } if (c.pc != 0x0017DF58u) [[unlikely]] return; }
L_0017DF58:
    set32(c.r[2], 0u - 999u);
    c.budget -= 1;
L_0017DF5C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_0017DF60:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0017DF70:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[8].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[9].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[10].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[11].d[0] + 0ull;
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017DFACu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_001F(c, 36u, depth + 1u); else { c.pc = 0x0017C450u; return; } if (c.pc != 0x0017DFACu) [[unlikely]] return; }
L_0017DFAC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] - 14528u);
    set32(c.r[4], c.r[16].w[0] + 56u);
    st32((c.r[16].w[0] + 32u), c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017DFC8u); set32(c.r[6], 0u + 63u);  if (depth < kMaxDepth) unit_000A(c, 12u, depth + 1u); else { c.pc = 0x001281F0u; return; } if (c.pc != 0x0017DFC8u) [[unlikely]] return; }
L_0017DFC8:
    st32((c.r[16].w[0] + 120u), c.r[20].w[0]);
    set32(c.r[3], 0u - 1u);
    st32((c.r[16].w[0] + 124u), c.r[19].w[0]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 136u), c.r[18].w[0]);
    st32((c.r[16].w[0] + 140u), c.r[17].w[0]);
    st32((c.r[16].w[0] + 128u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 132u), 0u);
    st32((c.r[16].w[0] + 52u), 0u);
    st32((c.r[16].w[0] + 16u), c.r[19].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 19;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_0017E020:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0017E068; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 14528u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017E050u); st32((c.r[17].w[0] + 32u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_001F(c, 37u, depth + 1u); else { c.pc = 0x0017C4C0u; return; } if (c.pc != 0x0017E050u) [[unlikely]] return; }
L_0017E050:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0017E06C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017E068u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x0017E068u) [[unlikely]] return; }
L_0017E068:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0017E06C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0017E080:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 52u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0017E0C0; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 32u)));
    set32(c.r[6], c.r[16].w[0] + 8u);
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0017E0ACu); set32(c.r[7], c.r[16].w[0] + 12u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0017E0ACu) [[unlikely]] return; }
L_0017E0AC:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0017E0C0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[16].w[0] + 12u)));  if (t) { goto L_0017E4D4; } }
L_0017E0C0:
    set32(c.r[5], ld32((c.r[16].w[0] + 52u)));
    c.r[1].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(10ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0017E4C4; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[2], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + 9904u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x0017C000u < 16384u) { entry = entries_001F[(t - 0x0017C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0017E0EC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[5], c.r[16].w[0] + 56u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017E0FCu); set32(c.r[4], c.r[4].w[0] + 8976u);  if (depth < kMaxDepth) unit_001F(c, 26u, depth + 1u); else { c.pc = 0x0017C2F0u; return; } if (c.pc != 0x0017E0FCu) [[unlikely]] return; }
L_0017E0FC:
    st32((c.r[16].w[0] + 12u), 0u);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], ld32((c.r[16].w[0])));
    set32(c.r[6], c.r[16].w[0] + 56u);
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[8], 0u + 1u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017E120u); set32(c.r[9], c.r[9].w[0] + 25408u);  if (depth < kMaxDepth) unit_0008(c, 94u, depth + 1u); else { c.pc = 0x00120F88u; return; } if (c.pc != 0x0017E120u) [[unlikely]] return; }
L_0017E120:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_0017E144; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[5], c.r[16].w[0] + 56u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017E138u); set32(c.r[4], c.r[4].w[0] + 9024u);  if (depth < kMaxDepth) unit_001F(c, 26u, depth + 1u); else { c.pc = 0x0017C2F0u; return; } if (c.pc != 0x0017E138u) [[unlikely]] return; }
L_0017E138:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 999u);  if (t) { goto L_0017E4D4; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_0017E144:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 52u), c.r[3].w[0]);  if (t) { goto L_0017E4D4; } }
L_0017E150:
    set32(c.r[6], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[2], 0u - 4u);
    c.budget -= 4;
    { const bool t = c.r[6].d[0] == c.r[2].d[0];  if (t) { goto L_0017E1BC; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_0017E1BC; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[2].d[0];  if (t) { goto L_0017E17C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0017E1D4; } }
L_0017E17C:
    set32(c.r[5], ld32((c.r[16].w[0] + 16u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017E18Cu); set32(c.r[4], c.r[4].w[0] + 25408u);  if (depth < kMaxDepth) unit_001F(c, 35u, depth + 1u); else { c.pc = 0x0017C440u; return; } if (c.pc != 0x0017E18Cu) [[unlikely]] return; }
L_0017E18C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], 0u + 2u);  if (t) { goto L_0017E1B0; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[5], c.r[16].w[0] + 56u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017E1A4u); set32(c.r[4], c.r[4].w[0] + 9072u);  if (depth < kMaxDepth) unit_001F(c, 26u, depth + 1u); else { c.pc = 0x0017C2F0u; return; } if (c.pc != 0x0017E1A4u) [[unlikely]] return; }
L_0017E1A4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 997u);  if (t) { goto L_0017E4D4; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 1;
L_0017E1B0:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 52u), c.r[3].w[0]);  if (t) { goto L_0017E4D4; } }
L_0017E1BC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[5], c.r[16].w[0] + 56u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017E1CCu); set32(c.r[4], c.r[4].w[0] + 9120u);  if (depth < kMaxDepth) unit_001F(c, 26u, depth + 1u); else { c.pc = 0x0017C2F0u; return; } if (c.pc != 0x0017E1CCu) [[unlikely]] return; }
L_0017E1CC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 994u);  if (t) { goto L_0017E4D4; } }
L_0017E1D4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[5], c.r[16].w[0] + 56u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017E1E4u); set32(c.r[4], c.r[4].w[0] + 9168u);  if (depth < kMaxDepth) unit_001F(c, 26u, depth + 1u); else { c.pc = 0x0017C2F0u; return; } if (c.pc != 0x0017E1E4u) [[unlikely]] return; }
L_0017E1E4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 999u);  if (t) { goto L_0017E4D4; } }
L_0017E1EC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[5], c.r[16].w[0] + 56u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017E1FCu); set32(c.r[4], c.r[4].w[0] + 9232u);  if (depth < kMaxDepth) unit_001F(c, 26u, depth + 1u); else { c.pc = 0x0017C2F0u; return; } if (c.pc != 0x0017E1FCu) [[unlikely]] return; }
L_0017E1FC:
    st32((c.r[16].w[0] + 12u), 0u);
    set32(c.r[6], c.r[16].w[0] + 56u);
    set32(c.r[4], ld32((c.r[16].w[0])));
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017E214u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_0008(c, 43u, depth + 1u); else { c.pc = 0x00120610u; return; } if (c.pc != 0x0017E214u) [[unlikely]] return; }
L_0017E214:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], 0u + 3u);  if (t) { goto L_0017E238; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[5], c.r[16].w[0] + 56u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017E22Cu); set32(c.r[4], c.r[4].w[0] + 9264u);  if (depth < kMaxDepth) unit_001F(c, 26u, depth + 1u); else { c.pc = 0x0017C2F0u; return; } if (c.pc != 0x0017E22Cu) [[unlikely]] return; }
L_0017E22C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 999u);  if (t) { goto L_0017E4D4; } }
    set32(c.r[3], 0u + 3u);
    c.budget -= 1;
L_0017E238:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 52u), c.r[3].w[0]);  if (t) { goto L_0017E4D4; } }
L_0017E244:
    set32(c.r[6], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[6].sd[0] >= 0;  if (t) { goto L_0017E284; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[5], c.r[16].w[0] + 56u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017E260u); set32(c.r[4], c.r[4].w[0] + 9312u);  if (depth < kMaxDepth) unit_001F(c, 26u, depth + 1u); else { c.pc = 0x0017C2F0u; return; } if (c.pc != 0x0017E260u) [[unlikely]] return; }
L_0017E260:
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[2], 0u - 3u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u - 999u);  if (t) { goto L_0017E27C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 996u);  if (t) { goto L_0017E27C; } }
    set32(c.r[2], 0u - 999u);
    c.budget -= 1;
L_0017E27C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_0017E4D8; } }
L_0017E284:
    st32((c.r[16].w[0] + 128u), c.r[6].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 136u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 4u);  if (t) { goto L_0017E2A8; } }
    set32(c.r[3], 0u + 6u);
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 52u), c.r[3].w[0]);  if (t) { goto L_0017E4D4; } }
    set32(c.r[2], 0u + 4u);
    c.budget -= 1;
L_0017E2A8:
    st32((c.r[16].w[0] + 52u), c.r[2].w[0]);
    c.budget -= 1;
L_0017E2AC:
    st32((c.r[16].w[0] + 12u), 0u);
    set32(c.r[4], ld32((c.r[16].w[0] + 128u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 136u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017E2C0u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0008(c, 56u, depth + 1u); else { c.pc = 0x00120828u; return; } if (c.pc != 0x0017E2C0u) [[unlikely]] return; }
L_0017E2C0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], 0u + 5u);  if (t) { goto L_0017E2E4; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[5], c.r[16].w[0] + 56u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017E2D8u); set32(c.r[4], c.r[4].w[0] + 9376u);  if (depth < kMaxDepth) unit_001F(c, 26u, depth + 1u); else { c.pc = 0x0017C2F0u; return; } if (c.pc != 0x0017E2D8u) [[unlikely]] return; }
L_0017E2D8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 999u);  if (t) { goto L_0017E4D4; } }
    set32(c.r[3], 0u + 5u);
    c.budget -= 1;
L_0017E2E4:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 52u), c.r[3].w[0]);  if (t) { goto L_0017E4D4; } }
L_0017E2F0:
    set32(c.r[7], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[7].sd[0] >= 0;  if (t) { goto L_0017E318; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[5], c.r[16].w[0] + 56u);
    c.r[6].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017E310u); set32(c.r[4], c.r[4].w[0] + 9424u);  if (depth < kMaxDepth) unit_001F(c, 26u, depth + 1u); else { c.pc = 0x0017C2F0u; return; } if (c.pc != 0x0017E310u) [[unlikely]] return; }
L_0017E310:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 999u);  if (t) { goto L_0017E4D4; } }
L_0017E318:
    set32(c.r[6], ld32((c.r[16].w[0] + 136u)));
    c.budget -= 3;
    { const bool t = c.r[7].d[0] == c.r[6].d[0]; set32(c.r[2], 0u + 6u);  if (t) { goto L_0017E340; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[5], c.r[16].w[0] + 56u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017E334u); set32(c.r[4], c.r[4].w[0] + 9488u);  if (depth < kMaxDepth) unit_001F(c, 26u, depth + 1u); else { c.pc = 0x0017C2F0u; return; } if (c.pc != 0x0017E334u) [[unlikely]] return; }
L_0017E334:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 997u);  if (t) { goto L_0017E4D4; } }
    set32(c.r[2], 0u + 6u);
    c.budget -= 1;
L_0017E340:
    st32((c.r[16].w[0] + 52u), c.r[2].w[0]);
    c.budget -= 1;
L_0017E344:
    set32(c.r[2], ld32((c.r[16].w[0] + 140u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 124u)));
    c.r[1].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    if (c.r[1].d[0] == 0) c.r[3].d[0] = c.r[2].d[0];
    st32((c.r[16].w[0] + 132u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 132u)));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0017E374; } }
    set32(c.r[3], 0u + 8u);
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 52u), c.r[3].w[0]);  if (t) { goto L_0017E4D4; } }
L_0017E374:
    st32((c.r[16].w[0] + 12u), 0u);
    set32(c.r[5], ld32((c.r[16].w[0] + 120u)));
    set32(c.r[6], ld32((c.r[16].w[0] + 132u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017E388u); set32(c.r[4], ld32((c.r[16].w[0] + 128u)));  if (depth < kMaxDepth) unit_0008(c, 63u, depth + 1u); else { c.pc = 0x00120990u; return; } if (c.pc != 0x0017E388u) [[unlikely]] return; }
L_0017E388:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], 0u + 7u);  if (t) { goto L_0017E3AC; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 132u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017E3A0u); set32(c.r[4], c.r[4].w[0] + 9552u);  if (depth < kMaxDepth) unit_001F(c, 26u, depth + 1u); else { c.pc = 0x0017C2F0u; return; } if (c.pc != 0x0017E3A0u) [[unlikely]] return; }
L_0017E3A0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 999u);  if (t) { goto L_0017E4D4; } }
    set32(c.r[3], 0u + 7u);
    c.budget -= 1;
L_0017E3AC:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 52u), c.r[3].w[0]);  if (t) { goto L_0017E4D4; } }
L_0017E3B8:
    set32(c.r[6], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[6].sd[0] >= 0;  if (t) { goto L_0017E3F8; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 132u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017E3D4u); set32(c.r[4], c.r[4].w[0] + 9600u);  if (depth < kMaxDepth) unit_001F(c, 26u, depth + 1u); else { c.pc = 0x0017C2F0u; return; } if (c.pc != 0x0017E3D4u) [[unlikely]] return; }
L_0017E3D4:
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[2], 0u - 3u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u - 999u);  if (t) { goto L_0017E3F0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 997u);  if (t) { goto L_0017E3F0; } }
    set32(c.r[2], 0u - 999u);
    c.budget -= 1;
L_0017E3F0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0017E4D4; } }
L_0017E3F8:
    set32(c.r[2], ld32((c.r[16].w[0] + 132u)));
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[2].d[0];  if (t) { goto L_0017E420; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + 9664u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017E418u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_001F(c, 26u, depth + 1u); else { c.pc = 0x0017C2F0u; return; } if (c.pc != 0x0017E418u) [[unlikely]] return; }
L_0017E418:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 997u);  if (t) { goto L_0017E4D4; } }
L_0017E420:
    set32(c.r[4], ld32((c.r[16].w[0] + 120u)));
    set32(c.r[3], 0u + 6u);
    c.r[2].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] + c.r[6].w[0]);
    st32((c.r[16].w[0] + 120u), c.r[4].w[0]);
    set32(c.r[5], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 124u)));
    set32(c.r[4], c.r[4].w[0] - c.r[5].w[0]);
    st32((c.r[16].w[0] + 124u), c.r[4].w[0]);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 52u), c.r[3].w[0]);  if (t) { goto L_0017E4D4; } }
L_0017E44C:
    st32((c.r[16].w[0] + 12u), 0u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017E458u); set32(c.r[4], ld32((c.r[16].w[0] + 128u)));  if (depth < kMaxDepth) unit_0008(c, 51u, depth + 1u); else { c.pc = 0x00120770u; return; } if (c.pc != 0x0017E458u) [[unlikely]] return; }
L_0017E458:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], 0u + 9u);  if (t) { goto L_0017E478; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017E46Cu); set32(c.r[4], c.r[4].w[0] + 9712u);  if (depth < kMaxDepth) unit_001F(c, 26u, depth + 1u); else { c.pc = 0x0017C2F0u; return; } if (c.pc != 0x0017E46Cu) [[unlikely]] return; }
L_0017E46C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 999u);  if (t) { goto L_0017E4D4; } }
    set32(c.r[3], 0u + 9u);
    c.budget -= 1;
L_0017E478:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 52u), c.r[3].w[0]);  if (t) { goto L_0017E4D4; } }
L_0017E484:
    set32(c.r[5], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_0017E4A8; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017E49Cu); set32(c.r[4], c.r[4].w[0] + 9760u);  if (depth < kMaxDepth) unit_001F(c, 26u, depth + 1u); else { c.pc = 0x0017C2F0u; return; } if (c.pc != 0x0017E49Cu) [[unlikely]] return; }
L_0017E49C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 999u);  if (t) { goto L_0017E4D4; } }
    set32(c.r[2], 0u - 1u);
    c.budget -= 1;
L_0017E4A8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[4], c.r[4].w[0] + 9824u);
    st32((c.r[16].w[0] + 128u), c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017E4BCu); set32(c.r[5], c.r[16].w[0] + 56u);  if (depth < kMaxDepth) unit_001F(c, 26u, depth + 1u); else { c.pc = 0x0017C2F0u; return; } if (c.pc != 0x0017E4BCu) [[unlikely]] return; }
L_0017E4BC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0017E4D4; } }
L_0017E4C4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017E4D0u); set32(c.r[4], c.r[4].w[0] + 9856u);  if (depth < kMaxDepth) unit_001F(c, 26u, depth + 1u); else { c.pc = 0x0017C2F0u; return; } if (c.pc != 0x0017E4D0u) [[unlikely]] return; }
L_0017E4D0:
    set32(c.r[2], 0u - 999u);
    c.budget -= 1;
L_0017E4D4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_0017E4D8:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0017E4F0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017E50Cu); c.r[16].d[0] = c.r[7].d[0] + 0ull;  if (depth < kMaxDepth) unit_001F(c, 36u, depth + 1u); else { c.pc = 0x0017C450u; return; } if (c.pc != 0x0017E50Cu) [[unlikely]] return; }
L_0017E50C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] - 14560u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017E520u); st32((c.r[17].w[0] + 32u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_001F(c, 287u, depth + 1u); else { c.pc = 0x0017E5D0u; return; } if (c.pc != 0x0017E520u) [[unlikely]] return; }
L_0017E520:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; set32(c.r[4], c.r[17].w[0] + 56u);  if (t) { goto L_0017E540; } }
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[17].w[0] + 56u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017E538u); set32(c.r[6], 0u + 63u);  if (depth < kMaxDepth) unit_000A(c, 12u, depth + 1u); else { c.pc = 0x001281F0u; return; } if (c.pc != 0x0017E538u) [[unlikely]] return; }
L_0017E538:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 52u), 0u);  if (t) { goto L_0017E550; } }
L_0017E540:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017E54Cu); set32(c.r[6], 0u + 64u);  if (depth < kMaxDepth) unit_0009(c, 49u, depth + 1u); else { c.pc = 0x00124ED8u; return; } if (c.pc != 0x0017E54Cu) [[unlikely]] return; }
L_0017E54C:
    st32((c.r[17].w[0] + 52u), 0u);
    c.budget -= 1;
L_0017E550:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0017E570:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0017E5B8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 14560u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017E5A0u); st32((c.r[17].w[0] + 32u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_001F(c, 37u, depth + 1u); else { c.pc = 0x0017C4C0u; return; } if (c.pc != 0x0017E5A0u) [[unlikely]] return; }
L_0017E5A0:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0017E5BC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017E5B8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x0017E5B8u) [[unlikely]] return; }
L_0017E5B8:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0017E5BC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0017E5D0:
    st32((c.r[4].w[0] + 120u), 0u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] + 128u);
    c.budget -= 5;
    { set32(c.r[6], 0u + 64u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00124ED8u | kUnwind; return; } [[clang::musttail]] return unit_0009(c, 49u, depth); }
L_0017E5F0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 52u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0017E630; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 32u)));
    set32(c.r[6], c.r[16].w[0] + 8u);
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0017E61Cu); set32(c.r[7], c.r[16].w[0] + 12u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0017E61Cu) [[unlikely]] return; }
L_0017E61C:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0017E630; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[16].w[0] + 12u)));  if (t) { goto L_0017E738; } }
L_0017E630:
    set32(c.r[5], ld32((c.r[16].w[0] + 52u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_0017E6AC; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x00460000u);  if (t) { goto L_0017E650; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x00460000u);  if (t) { goto L_0017E72C; } }
L_0017E650:
    set32(c.r[5], c.r[16].w[0] + 56u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017E65Cu); set32(c.r[4], c.r[4].w[0] + 9952u);  if (depth < kMaxDepth) unit_001F(c, 26u, depth + 1u); else { c.pc = 0x0017C2F0u; return; } if (c.pc != 0x0017E65Cu) [[unlikely]] return; }
L_0017E65C:
    st32((c.r[16].w[0] + 12u), 0u);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], ld32((c.r[16].w[0])));
    set32(c.r[6], c.r[16].w[0] + 56u);
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[8], 0u + 1u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017E680u); set32(c.r[9], c.r[9].w[0] + 25408u);  if (depth < kMaxDepth) unit_0008(c, 94u, depth + 1u); else { c.pc = 0x00120F88u; return; } if (c.pc != 0x0017E680u) [[unlikely]] return; }
L_0017E680:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_0017E6A0; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[5], c.r[16].w[0] + 56u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017E698u); set32(c.r[4], c.r[4].w[0] + 9984u);  if (depth < kMaxDepth) unit_001F(c, 26u, depth + 1u); else { c.pc = 0x0017C2F0u; return; } if (c.pc != 0x0017E698u) [[unlikely]] return; }
L_0017E698:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 999u);  if (t) { goto L_0017E738; } }
L_0017E6A0:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 52u), c.r[3].w[0]);  if (t) { goto L_0017E738; } }
L_0017E6AC:
    set32(c.r[6], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[2], 0u - 4u);
    c.budget -= 4;
    { const bool t = c.r[6].d[0] == c.r[2].d[0]; c.r[4].sd[0] = static_cast<std::int32_t>(0x00460000u);  if (t) { goto L_0017E700; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull; set32(c.r[5], c.r[16].w[0] + 56u);  if (t) { goto L_0017E704; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == c.r[3].d[0]; c.r[5].sd[0] = static_cast<std::int32_t>(0x00520000u);  if (t) { goto L_0017E6D4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x00460000u);  if (t) { goto L_0017E718; } }
L_0017E6D4:
    st32((c.r[16].w[0] + 120u), c.r[3].w[0]);
    set32(c.r[4], c.r[16].w[0] + 128u);
    set32(c.r[5], c.r[5].w[0] + 25408u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017E6E8u); set32(c.r[6], 0u + 64u);  if (depth < kMaxDepth) unit_0009(c, 40u, depth + 1u); else { c.pc = 0x00124D20u; return; } if (c.pc != 0x0017E6E8u) [[unlikely]] return; }
L_0017E6E8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[5], c.r[16].w[0] + 56u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017E6F8u); set32(c.r[4], c.r[4].w[0] + 10032u);  if (depth < kMaxDepth) unit_001F(c, 26u, depth + 1u); else { c.pc = 0x0017C2F0u; return; } if (c.pc != 0x0017E6F8u) [[unlikely]] return; }
L_0017E6F8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 995u);  if (t) { goto L_0017E738; } }
L_0017E700:
    set32(c.r[5], c.r[16].w[0] + 56u);
    c.budget -= 1;
L_0017E704:
    set32(c.r[4], c.r[4].w[0] + 10064u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017E710u); st32((c.r[16].w[0] + 120u), 0u);  if (depth < kMaxDepth) unit_001F(c, 26u, depth + 1u); else { c.pc = 0x0017C2F0u; return; } if (c.pc != 0x0017E710u) [[unlikely]] return; }
L_0017E710:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 994u);  if (t) { goto L_0017E738; } }
L_0017E718:
    set32(c.r[5], c.r[16].w[0] + 56u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017E724u); set32(c.r[4], c.r[4].w[0] + 10096u);  if (depth < kMaxDepth) unit_001F(c, 26u, depth + 1u); else { c.pc = 0x0017C2F0u; return; } if (c.pc != 0x0017E724u) [[unlikely]] return; }
L_0017E724:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 999u);  if (t) { goto L_0017E738; } }
L_0017E72C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017E734u); set32(c.r[4], c.r[4].w[0] + 10160u);  if (depth < kMaxDepth) unit_001F(c, 26u, depth + 1u); else { c.pc = 0x0017C2F0u; return; } if (c.pc != 0x0017E734u) [[unlikely]] return; }
L_0017E734:
    set32(c.r[2], 0u - 999u);
    c.budget -= 1;
L_0017E738:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0017E750:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[22].d[0] = c.r[10].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[8].d[0] + 0ull;
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017E794u); c.r[16].d[0] = c.r[9].d[0] + 0ull;  if (depth < kMaxDepth) unit_001F(c, 36u, depth + 1u); else { c.pc = 0x0017C450u; return; } if (c.pc != 0x0017E794u) [[unlikely]] return; }
L_0017E794:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[2].d[0] = c.r[22].d[0] ^ 1ull;
    set32(c.r[3], c.r[3].w[0] - 14592u);
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    st32((c.r[21].w[0] + 32u), c.r[3].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00460000u);
    st32((c.r[21].w[0] + 140u), c.r[18].w[0]);
    set32(c.r[2], 0u - c.r[2].w[0]);
    st32((c.r[21].w[0] + 144u), c.r[17].w[0]);
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    st16((c.r[21].w[0] + 136u), static_cast<std::uint16_t>(c.r[16].w[0]));
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    st32((c.r[21].w[0] + 132u), 0u);
    set32(c.r[4], c.r[4].w[0] + 10208u);
    st16((c.r[21].w[0] + 138u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017E7D8u); st32((c.r[21].w[0] + 128u), 0u);  if (depth < kMaxDepth) unit_001F(c, 26u, depth + 1u); else { c.pc = 0x0017C2F0u; return; } if (c.pc != 0x0017E7D8u) [[unlikely]] return; }
L_0017E7D8:
    c.r[2].d[0] = c.r[21].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_0017E810:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0017E858; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 14592u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017E840u); st32((c.r[17].w[0] + 32u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_001F(c, 37u, depth + 1u); else { c.pc = 0x0017C4C0u; return; } if (c.pc != 0x0017E840u) [[unlikely]] return; }
L_0017E840:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0017E85C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017E858u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x0017E858u) [[unlikely]] return; }
L_0017E858:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0017E85C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0017E870:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 128u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0017E8B0; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 32u)));
    set32(c.r[6], c.r[16].w[0] + 8u);
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0017E89Cu); set32(c.r[7], c.r[16].w[0] + 12u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0017E89Cu) [[unlikely]] return; }
L_0017E89C:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0017E8B0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[16].w[0] + 12u)));  if (t) { goto L_0017EB28; } }
L_0017E8B0:
    set32(c.r[5], ld32((c.r[16].w[0] + 128u)));
    set32(c.r[2], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 3u);  if (t) { goto L_0017EAA8; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[2].d[0];  if (t) { goto L_0017EA80; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_0017EA34; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[2].d[0];  if (t) { goto L_0017E988; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0017E8EC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x00460000u);  if (t) { goto L_0017EB1C; } }
L_0017E8EC:
    set32(c.r[3], ld32((c.r[16].w[0] + 132u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[2], ld32((c.r[16].w[0] + 140u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017E90Cu); set32(c.r[4], c.r[4].w[0] + 10256u);  if (depth < kMaxDepth) unit_001F(c, 26u, depth + 1u); else { c.pc = 0x0017C2F0u; return; } if (c.pc != 0x0017E90Cu) [[unlikely]] return; }
L_0017E90C:
    set32(c.r[4], c.r[16].w[0] + 64u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017E91Cu); set32(c.r[6], 0u + 64u);  if (depth < kMaxDepth) unit_0009(c, 49u, depth + 1u); else { c.pc = 0x00124ED8u; return; } if (c.pc != 0x0017E91Cu) [[unlikely]] return; }
L_0017E91C:
    st32((c.r[16].w[0] + 12u), 0u);
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[3], ld32((c.r[16].w[0] + 132u)));
    set32(c.r[8], 0u + 1u);
    set32(c.r[2], ld32((c.r[16].w[0] + 140u)));
    set32(c.r[4], ld32((c.r[16].w[0])));
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[6], ld32((c.r[2].w[0])));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017E94Cu); set32(c.r[9], c.r[16].w[0] + 64u);  if (depth < kMaxDepth) unit_0008(c, 94u, depth + 1u); else { c.pc = 0x00120F88u; return; } if (c.pc != 0x0017E94Cu) [[unlikely]] return; }
L_0017E94C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_0017E97C; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 132u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[2], ld32((c.r[16].w[0] + 140u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017E974u); set32(c.r[4], c.r[4].w[0] + 10288u);  if (depth < kMaxDepth) unit_001F(c, 26u, depth + 1u); else { c.pc = 0x0017C2F0u; return; } if (c.pc != 0x0017E974u) [[unlikely]] return; }
L_0017E974:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 999u);  if (t) { goto L_0017EB28; } }
L_0017E97C:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 128u), c.r[3].w[0]);  if (t) { goto L_0017EB28; } }
L_0017E988:
    set32(c.r[3], ld32((c.r[16].w[0] + 132u)));
    set32(c.r[5], c.r[16].w[0] + 64u);
    set32(c.r[2], ld32((c.r[16].w[0] + 144u)));
    set32(c.r[6], 0u + 64u);
    set32(c.r[3], c.r[3].w[0] << 6);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017E9A4u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0009(c, 40u, depth + 1u); else { c.pc = 0x00124D20u; return; } if (c.pc != 0x0017E9A4u) [[unlikely]] return; }
L_0017E9A4:
    set32(c.r[6], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[2], 0u - 4u);
    c.budget -= 4;
    { const bool t = c.r[6].d[0] == c.r[2].d[0]; set32(c.r[3], 0u + 4u);  if (t) { goto L_0017E9FC; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0017EA00; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[2].d[0];  if (t) { goto L_0017E9D0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[16].w[0] + 132u)));  if (t) { goto L_0017EA08; } }
L_0017E9D0:
    c.r[2].d[0] = ld16((c.r[16].w[0] + 84u));
    c.r[2].d[0] = c.r[2].d[0] & 32ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 4u);  if (t) { goto L_0017E9EC; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 128u), c.r[2].w[0]);  if (t) { goto L_0017E9F0; } }
L_0017E9EC:
    st32((c.r[16].w[0] + 128u), c.r[2].w[0]);
    c.budget -= 1;
L_0017E9F0:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 138u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_0017EA2C; } }
L_0017E9FC:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0017EA00:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 128u), c.r[3].w[0]);  if (t) { goto L_0017EB28; } }
L_0017EA08:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[2], ld32((c.r[16].w[0] + 140u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017EA24u); set32(c.r[4], c.r[4].w[0] + 10336u);  if (depth < kMaxDepth) unit_001F(c, 26u, depth + 1u); else { c.pc = 0x0017C2F0u; return; } if (c.pc != 0x0017EA24u) [[unlikely]] return; }
L_0017EA24:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 999u);  if (t) { goto L_0017EB28; } }
L_0017EA2C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0017EB28; } }
L_0017EA34:
    st32((c.r[16].w[0] + 12u), 0u);
    set32(c.r[3], ld32((c.r[16].w[0] + 132u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 140u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[6], ld32((c.r[2].w[0])));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017EA58u); set32(c.r[4], ld32((c.r[16].w[0])));  if (depth < kMaxDepth) unit_0008(c, 159u, depth + 1u); else { c.pc = 0x00121928u; return; } if (c.pc != 0x0017EA58u) [[unlikely]] return; }
L_0017EA58:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], 0u + 3u);  if (t) { goto L_0017EA74; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017EA6Cu); set32(c.r[4], c.r[4].w[0] + 10400u);  if (depth < kMaxDepth) unit_001F(c, 26u, depth + 1u); else { c.pc = 0x0017C2F0u; return; } if (c.pc != 0x0017EA6Cu) [[unlikely]] return; }
L_0017EA6C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 999u);  if (t) { goto L_0017EB28; } }
L_0017EA74:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 128u), c.r[3].w[0]);  if (t) { goto L_0017EB28; } }
L_0017EA80:
    set32(c.r[4], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[4].sd[0] >= 0; set32(c.r[2], 0u - 999u);  if (t) { goto L_0017EA94; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_0017EB2C; } }
L_0017EA94:
    set32(c.r[2], ld32((c.r[16].w[0] + 132u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 144u)));
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[2].w[0] + 16u), c.r[4].w[0]);
    c.budget -= 5;
L_0017EAA8:
    set32(c.r[3], ld32((c.r[16].w[0] + 132u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[2], ld32((c.r[16].w[0] + 140u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017EAC8u); set32(c.r[4], c.r[4].w[0] + 10448u);  if (depth < kMaxDepth) unit_001F(c, 26u, depth + 1u); else { c.pc = 0x0017C2F0u; return; } if (c.pc != 0x0017EAC8u) [[unlikely]] return; }
L_0017EAC8:
    set32(c.r[2], ld32((c.r[16].w[0] + 132u)));
    set32(c.r[3], c.r[2].w[0] + 1u);
    st32((c.r[16].w[0] + 132u), c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 136u)));
    c.r[1].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x00460000u);  if (t) { goto L_0017EAF0; } }
    st32((c.r[16].w[0] + 128u), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0017EB28; } }
L_0017EAF0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017EAF8u); set32(c.r[4], c.r[4].w[0] + 10480u);  if (depth < kMaxDepth) unit_001F(c, 26u, depth + 1u); else { c.pc = 0x0017C2F0u; return; } if (c.pc != 0x0017EAF8u) [[unlikely]] return; }
L_0017EAF8:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 138u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[2].d[0]; set32(c.r[2], 0u - 995u);  if (t) { goto L_0017EB10; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0017EB28; } }
L_0017EB10:
    set32(c.r[3], 0u - 994u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; if (c.r[4].d[0] == 0) c.r[2].d[0] = c.r[3].d[0];  if (t) { goto L_0017EB28; } }
L_0017EB1C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017EB24u); set32(c.r[4], c.r[4].w[0] + 10512u);  if (depth < kMaxDepth) unit_001F(c, 26u, depth + 1u); else { c.pc = 0x0017C2F0u; return; } if (c.pc != 0x0017EB24u) [[unlikely]] return; }
L_0017EB24:
    set32(c.r[2], 0u - 999u);
    c.budget -= 1;
L_0017EB28:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_0017EB2C:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0017EB40:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017EB54u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_001F(c, 36u, depth + 1u); else { c.pc = 0x0017C450u; return; } if (c.pc != 0x0017EB54u) [[unlikely]] return; }
L_0017EB54:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] - 14624u);
    st32((c.r[16].w[0] + 32u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 52u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0017EB80:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0017EBC8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 14624u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017EBB0u); st32((c.r[17].w[0] + 32u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_001F(c, 37u, depth + 1u); else { c.pc = 0x0017C4C0u; return; } if (c.pc != 0x0017EBB0u) [[unlikely]] return; }
L_0017EBB0:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0017EBCC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017EBC8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x0017EBC8u) [[unlikely]] return; }
L_0017EBC8:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0017EBCC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0017EBE0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 52u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0017EC20; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 32u)));
    set32(c.r[6], c.r[16].w[0] + 8u);
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0017EC0Cu); set32(c.r[7], c.r[16].w[0] + 12u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0017EC0Cu) [[unlikely]] return; }
L_0017EC0C:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0017EC20; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[16].w[0] + 12u)));  if (t) { goto L_0017EC9C; } }
L_0017EC20:
    set32(c.r[5], ld32((c.r[16].w[0] + 52u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[2].d[0];  if (t) { goto L_0017EC78; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0017EC40; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x00460000u);  if (t) { goto L_0017EC90; } }
L_0017EC40:
    st32((c.r[16].w[0] + 12u), 0u);
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017EC50u); set32(c.r[4], ld32((c.r[16].w[0])));  if (depth < kMaxDepth) unit_0008(c, 118u, depth + 1u); else { c.pc = 0x00121298u; return; } if (c.pc != 0x0017EC50u) [[unlikely]] return; }
L_0017EC50:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_0017EC6C; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017EC64u); set32(c.r[4], c.r[4].w[0] + 10560u);  if (depth < kMaxDepth) unit_001F(c, 26u, depth + 1u); else { c.pc = 0x0017C2F0u; return; } if (c.pc != 0x0017EC64u) [[unlikely]] return; }
L_0017EC64:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 999u);  if (t) { goto L_0017EC9C; } }
L_0017EC6C:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 52u), c.r[3].w[0]);  if (t) { goto L_0017EC9C; } }
L_0017EC78:
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] >= 0;  if (t) { goto L_0017EC88; } }
    set32(c.r[2], 0u - 999u);
    c.budget -= 1;
L_0017EC88:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_0017ECA0; } }
L_0017EC90:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017EC98u); set32(c.r[4], c.r[4].w[0] + 10608u);  if (depth < kMaxDepth) unit_001F(c, 26u, depth + 1u); else { c.pc = 0x0017C2F0u; return; } if (c.pc != 0x0017EC98u) [[unlikely]] return; }
L_0017EC98:
    set32(c.r[2], 0u - 999u);
    c.budget -= 1;
L_0017EC9C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_0017ECA0:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0017ECB0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] - 14688u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[4].w[0] + 1064u), c.r[2].w[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0]), c.r[5].w[0]);
    st32((c.r[4].w[0] + 4u), c.r[6].w[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[5], c.r[5].w[0] + 10648u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017ECE4u); set32(c.r[4], c.r[16].w[0] + 8u);  if (depth < kMaxDepth) unit_0009(c, 233u, depth + 1u); else { c.pc = 0x00127BE8u; return; } if (c.pc != 0x0017ECE4u) [[unlikely]] return; }
L_0017ECE4:
    set32(c.r[4], c.r[16].w[0] + 72u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017ECF4u); set32(c.r[6], 0u + 964u);  if (depth < kMaxDepth) unit_0009(c, 49u, depth + 1u); else { c.pc = 0x00124ED8u; return; } if (c.pc != 0x0017ECF4u) [[unlikely]] return; }
L_0017ECF4:
    set32(c.r[4], c.r[16].w[0] + 1036u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017ED04u); set32(c.r[6], 0u + 16u);  if (depth < kMaxDepth) unit_0009(c, 49u, depth + 1u); else { c.pc = 0x00124ED8u; return; } if (c.pc != 0x0017ED04u) [[unlikely]] return; }
L_0017ED04:
    st32((c.r[16].w[0] + 1052u), 0u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 1056u), 0u);
    st32((c.r[16].w[0] + 1060u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0017ED30:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0017ED90; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] - 14688u);
    st32((c.r[17].w[0] + 1064u), c.r[2].w[0]);
    set32(c.r[25], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0017ED68u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0017ED68u) [[unlikely]] return; }
L_0017ED68:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017ED70u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_001F(c, 358u, depth + 1u); else { c.pc = 0x0017EF50u; return; } if (c.pc != 0x0017ED70u) [[unlikely]] return; }
L_0017ED70:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017ED78u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_001F(c, 365u, depth + 1u); else { c.pc = 0x0017F060u; return; } if (c.pc != 0x0017ED78u) [[unlikely]] return; }
L_0017ED78:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0017ED94; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017ED90u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x0017ED90u) [[unlikely]] return; }
L_0017ED90:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0017ED94:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0017EDB0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017EDC0u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_000B(c, 42u, depth + 1u); else { c.pc = 0x0012C6A0u; return; } if (c.pc != 0x0017EDC0u) [[unlikely]] return; }
L_0017EDC0:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; c.r[4].sd[0] = static_cast<std::int32_t>(0x00460000u);  if (t) { goto L_0017EDE4; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017EDDCu); set32(c.r[4], c.r[4].w[0] + 10656u);  if (depth < kMaxDepth) unit_001F(c, 26u, depth + 1u); else { c.pc = 0x0017C2F0u; return; } if (c.pc != 0x0017EDDCu) [[unlikely]] return; }
L_0017EDDC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0017EF34; } }
L_0017EDE4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017EDECu); set32(c.r[4], c.r[4].w[0] + 10704u);  if (depth < kMaxDepth) unit_001F(c, 26u, depth + 1u); else { c.pc = 0x0017C2F0u; return; } if (c.pc != 0x0017EDECu) [[unlikely]] return; }
L_0017EDEC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017EDF4u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 63u, depth + 1u); else { c.pc = 0x0012C8E0u; return; } if (c.pc != 0x0017EDF4u) [[unlikely]] return; }
L_0017EDF4:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; c.r[4].sd[0] = static_cast<std::int32_t>(0x00460000u);  if (t) { goto L_0017EE1C; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + 10736u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017EE14u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_001F(c, 26u, depth + 1u); else { c.pc = 0x0017C2F0u; return; } if (c.pc != 0x0017EE14u) [[unlikely]] return; }
L_0017EE14:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0017EF34; } }
L_0017EE1C:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + 10784u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017EE2Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_001F(c, 26u, depth + 1u); else { c.pc = 0x0017C2F0u; return; } if (c.pc != 0x0017EE2Cu) [[unlikely]] return; }
L_0017EE2C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017EE34u); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_000B(c, 63u, depth + 1u); else { c.pc = 0x0012C8E0u; return; } if (c.pc != 0x0017EE34u) [[unlikely]] return; }
L_0017EE34:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; c.r[4].sd[0] = static_cast<std::int32_t>(0x00460000u);  if (t) { goto L_0017EE5C; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + 10736u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017EE54u); set32(c.r[6], 0u + 2u);  if (depth < kMaxDepth) unit_001F(c, 26u, depth + 1u); else { c.pc = 0x0017C2F0u; return; } if (c.pc != 0x0017EE54u) [[unlikely]] return; }
L_0017EE54:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0017EF34; } }
L_0017EE5C:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + 10784u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017EE6Cu); set32(c.r[6], 0u + 2u);  if (depth < kMaxDepth) unit_001F(c, 26u, depth + 1u); else { c.pc = 0x0017C2F0u; return; } if (c.pc != 0x0017EE6Cu) [[unlikely]] return; }
L_0017EE6C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017EE74u); set32(c.r[4], 0u + 3u);  if (depth < kMaxDepth) unit_000B(c, 63u, depth + 1u); else { c.pc = 0x0012C8E0u; return; } if (c.pc != 0x0017EE74u) [[unlikely]] return; }
L_0017EE74:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; c.r[4].sd[0] = static_cast<std::int32_t>(0x00460000u);  if (t) { goto L_0017EE9C; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + 10736u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017EE94u); set32(c.r[6], 0u + 3u);  if (depth < kMaxDepth) unit_001F(c, 26u, depth + 1u); else { c.pc = 0x0017C2F0u; return; } if (c.pc != 0x0017EE94u) [[unlikely]] return; }
L_0017EE94:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0017EF34; } }
L_0017EE9C:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + 10784u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017EEACu); set32(c.r[6], 0u + 3u);  if (depth < kMaxDepth) unit_001F(c, 26u, depth + 1u); else { c.pc = 0x0017C2F0u; return; } if (c.pc != 0x0017EEACu) [[unlikely]] return; }
L_0017EEAC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017EEB4u); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_000B(c, 69u, depth + 1u); else { c.pc = 0x0012C9C0u; return; } if (c.pc != 0x0017EEB4u) [[unlikely]] return; }
L_0017EEB4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017EEC4u); set32(c.r[4], c.r[4].w[0] + 10816u);  if (depth < kMaxDepth) unit_001F(c, 26u, depth + 1u); else { c.pc = 0x0017C2F0u; return; } if (c.pc != 0x0017EEC4u) [[unlikely]] return; }
L_0017EEC4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017EECCu); set32(c.r[4], 0u + 3u);  if (depth < kMaxDepth) unit_000B(c, 69u, depth + 1u); else { c.pc = 0x0012C9C0u; return; } if (c.pc != 0x0017EECCu) [[unlikely]] return; }
L_0017EECC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017EEDCu); set32(c.r[4], c.r[4].w[0] + 10864u);  if (depth < kMaxDepth) unit_001F(c, 26u, depth + 1u); else { c.pc = 0x0017C2F0u; return; } if (c.pc != 0x0017EEDCu) [[unlikely]] return; }
L_0017EEDC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017EEE4u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 152u, depth + 1u); else { c.pc = 0x001016D8u; return; } if (c.pc != 0x0017EEE4u) [[unlikely]] return; }
L_0017EEE4:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0017EEE8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017EEF0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0008(c, 38u, depth + 1u); else { c.pc = 0x00120548u; return; } if (c.pc != 0x0017EEF0u) [[unlikely]] return; }
L_0017EEF0:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; c.r[4].sd[0] = static_cast<std::int32_t>(0x00460000u);  if (t) { goto L_0017EF14; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + 10912u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017EF0Cu); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_001F(c, 26u, depth + 1u); else { c.pc = 0x0017C2F0u; return; } if (c.pc != 0x0017EF0Cu) [[unlikely]] return; }
L_0017EF0C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[16].w[0] + 1u);  if (t) { goto L_0017EF28; } }
L_0017EF14:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + 10960u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017EF24u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_001F(c, 26u, depth + 1u); else { c.pc = 0x0017C2F0u; return; } if (c.pc != 0x0017EF24u) [[unlikely]] return; }
L_0017EF24:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_0017EF28:
    c.r[2].d[0] = c.r[16].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0017EEE8u | kUnwind; return; } goto L_0017EEE8; } }
L_0017EF34:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0017EF50:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0017EF84; } }
L_0017EF68:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[16], ld32((c.r[4].w[0] + 44u)));  if (t) { goto L_0017EF80; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 32u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0017EF80u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0017EF80u) [[unlikely]] return; }
L_0017EF80:
    st32((c.r[17].w[0] + 1052u), c.r[16].w[0]);
    c.budget -= 1;
L_0017EF84:
    set32(c.r[4], ld32((c.r[17].w[0] + 1052u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0017EF68u | kUnwind; return; } goto L_0017EF68; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0017EFB0:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0017EFBC; } }
    st32((c.r[5].w[0] + 40u), c.r[4].w[0]);
    c.budget -= 1;
L_0017EFBC:
    set32(c.r[6], ld32((c.r[4].w[0] + 1052u)));
    c.budget -= 3;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { goto L_0017EFD4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 1052u), c.r[5].w[0]);  if (t) { goto L_0017EFF0; } }
L_0017EFD0:
    c.r[6].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 1;
L_0017EFD4:
    set32(c.r[3], ld32((c.r[6].w[0] + 44u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0017EFD0u | kUnwind; return; } goto L_0017EFD0; } }
    st32((c.r[6].w[0] + 44u), c.r[5].w[0]);
    c.budget -= 1;
L_0017EFF0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0017F000:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 1052u)));
    c.budget -= 8;
    { const bool t = c.r[4].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0017F028; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_0017F04C; } }
L_0017F028:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[16], ld32((c.r[4].w[0] + 44u)));  if (t) { goto L_0017F040; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 32u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0017F040u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0017F040u) [[unlikely]] return; }
L_0017F040:
    st32((c.r[17].w[0] + 1052u), c.r[16].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 1052u)));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 3;
L_0017F04C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0017F060:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 1044u)));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0017F0BC; } }
    c.r[5].d[0] = ld8((c.r[16].w[0] + 1048u));
    set32(c.r[3], 0u + 1u);
    c.r[5].d[0] = c.r[5].d[0] << 61;
    c.r[5].d[0] = c.r[5].d[0] >> 63;
    c.budget -= 6;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_0017F0B8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017F09Cu);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100210u; return; } if (c.pc != 0x0017F09Cu) [[unlikely]] return; }
L_0017F09C:
    c.r[5].d[0] = ld8((c.r[16].w[0] + 1048u));
    c.r[3].d[0] = 0ull & 1ull;
    set32(c.r[4], c.r[3].w[0] << 2);
    set32(c.r[3], 0u - 5u);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st8((c.r[16].w[0] + 1048u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 7;
L_0017F0B8:
    st32((c.r[16].w[0] + 1044u), 0u);
    c.budget -= 1;
L_0017F0BC:
    set32(c.r[4], ld32((c.r[16].w[0] + 1040u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0017F108; } }
    c.r[5].d[0] = ld8((c.r[16].w[0] + 1048u));
    set32(c.r[3], 0u + 1u);
    c.r[5].d[0] = c.r[5].d[0] << 62;
    c.r[5].d[0] = c.r[5].d[0] >> 63;
    c.budget -= 6;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_0017F104; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017F0E8u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100210u; return; } if (c.pc != 0x0017F0E8u) [[unlikely]] return; }
L_0017F0E8:
    c.r[5].d[0] = ld8((c.r[16].w[0] + 1048u));
    c.r[3].d[0] = 0ull & 1ull;
    set32(c.r[4], c.r[3].w[0] << 1);
    set32(c.r[3], 0u - 3u);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st8((c.r[16].w[0] + 1048u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 7;
L_0017F104:
    st32((c.r[16].w[0] + 1040u), 0u);
    c.budget -= 1;
L_0017F108:
    set32(c.r[4], ld32((c.r[16].w[0] + 1036u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0017F14C; } }
    c.r[5].d[0] = ld8((c.r[16].w[0] + 1048u));
    set32(c.r[3], 0u + 1u);
    c.r[5].d[0] = c.r[5].d[0] & 1ull;
    c.budget -= 5;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_0017F148; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017F130u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100210u; return; } if (c.pc != 0x0017F130u) [[unlikely]] return; }
L_0017F130:
    c.r[5].d[0] = ld8((c.r[16].w[0] + 1048u));
    set32(c.r[3], 0u - 2u);
    c.r[4].d[0] = 0ull & 1ull;
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st8((c.r[16].w[0] + 1048u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 6;
L_0017F148:
    st32((c.r[16].w[0] + 1036u), 0u);
    c.budget -= 1;
L_0017F14C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0017F160:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0]), c.r[5].w[0]);  c.pc = t; return; }
L_0017F170:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 4u), c.r[5].w[0]);  c.pc = t; return; }
L_0017F180:
    st32((c.r[4].w[0] + 1056u), 0u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 1060u), c.r[5].w[0]);  c.pc = t; return; }
L_0017F190:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[6], 0u + 63u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017F1ACu); set32(c.r[4], c.r[16].w[0] + 8u);  if (depth < kMaxDepth) unit_000A(c, 12u, depth + 1u); else { c.pc = 0x001281F0u; return; } if (c.pc != 0x0017F1ACu) [[unlikely]] return; }
L_0017F1AC:
    st8((c.r[16].w[0] + 71u), static_cast<std::uint8_t>(0u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0017F1C0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00460000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017F1D4u); set32(c.r[4], c.r[4].w[0] + 10992u);  if (depth < kMaxDepth) unit_001F(c, 31u, depth + 1u); else { c.pc = 0x0017C3D0u; return; } if (c.pc != 0x0017F1D4u) [[unlikely]] return; }
L_0017F1D4:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; c.r[4].sd[0] = static_cast<std::int32_t>(0x00460000u);  if (t) { goto L_0017F1E4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0017F20C; } }
L_0017F1E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017F1ECu); set32(c.r[4], c.r[4].w[0] + 11024u);  if (depth < kMaxDepth) unit_001F(c, 31u, depth + 1u); else { c.pc = 0x0017C3D0u; return; } if (c.pc != 0x0017F1ECu) [[unlikely]] return; }
L_0017F1EC:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; c.r[4].sd[0] = static_cast<std::int32_t>(0x00460000u);  if (t) { goto L_0017F1FC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0017F20C; } }
L_0017F1FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017F204u); set32(c.r[4], c.r[4].w[0] + 11056u);  if (depth < kMaxDepth) unit_001F(c, 31u, depth + 1u); else { c.pc = 0x0017C3D0u; return; } if (c.pc != 0x0017F204u) [[unlikely]] return; }
L_0017F204:
    c.r[2].d[0] = c.r[2].sd[0] < 0ll ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 2;
L_0017F20C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0017F220:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017F230u);  if (depth < kMaxDepth) unit_001F(c, 336u, depth + 1u); else { c.pc = 0x0017EDB0u; return; } if (c.pc != 0x0017F230u) [[unlikely]] return; }
L_0017F230:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0017F240; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0017F2BC; } }
L_0017F240:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017F248u);  if (depth < kMaxDepth) unit_0008(c, 14u, depth + 1u); else { c.pc = 0x00120240u; return; } if (c.pc != 0x0017F248u) [[unlikely]] return; }
L_0017F248:
    set32(c.r[3], 0u - 101u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0017F2AC; } }
    set32(c.r[3], 0u - 121u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; c.r[4].sd[0] = static_cast<std::int32_t>(0x00460000u);  if (t) { goto L_0017F29C; } }
    set32(c.r[3], 0u - 120u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; c.r[4].sd[0] = static_cast<std::int32_t>(0x00460000u);  if (t) { goto L_0017F28C; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x00460000u);  if (t) { goto L_0017F27C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0017F2AC; } }
L_0017F27C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017F284u); set32(c.r[4], c.r[4].w[0] + 11088u);  if (depth < kMaxDepth) unit_001F(c, 26u, depth + 1u); else { c.pc = 0x0017C2F0u; return; } if (c.pc != 0x0017F284u) [[unlikely]] return; }
L_0017F284:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0017F2BC; } }
L_0017F28C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017F294u); set32(c.r[4], c.r[4].w[0] + 11104u);  if (depth < kMaxDepth) unit_001F(c, 26u, depth + 1u); else { c.pc = 0x0017C2F0u; return; } if (c.pc != 0x0017F294u) [[unlikely]] return; }
L_0017F294:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0017F2BC; } }
L_0017F29C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017F2A4u); set32(c.r[4], c.r[4].w[0] + 11168u);  if (depth < kMaxDepth) unit_001F(c, 26u, depth + 1u); else { c.pc = 0x0017C2F0u; return; } if (c.pc != 0x0017F2A4u) [[unlikely]] return; }
L_0017F2A4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0017F2BC; } }
L_0017F2AC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017F2B8u); set32(c.r[4], c.r[4].w[0] + 11232u);  if (depth < kMaxDepth) unit_001F(c, 26u, depth + 1u); else { c.pc = 0x0017C2F0u; return; } if (c.pc != 0x0017F2B8u) [[unlikely]] return; }
L_0017F2B8:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0017F2BC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0017F2D0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 1u);  c.pc = t; return; }
L_0017F2E0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 1u);  c.pc = t; return; }
L_0017F2F0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.r[16].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017F320u); set32(c.r[4], 0u + 68u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0017F320u) [[unlikely]] return; }
L_0017F320:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_0017F348; } }
    set32(c.r[5], ld32((c.r[19].w[0])));
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[19].w[0] + 4u)));
    c.r[8].d[0] = c.r[17].d[0] + 0ull;
    c.r[9].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017F344u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_001F(c, 119u, depth + 1u); else { c.pc = 0x0017D050u; return; } if (c.pc != 0x0017F344u) [[unlikely]] return; }
L_0017F344:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_0017F348:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017F350u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_001F(c, 361u, depth + 1u); else { c.pc = 0x0017EFB0u; return; } if (c.pc != 0x0017F350u) [[unlikely]] return; }
L_0017F350:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    set32(c.r[2], 0u + 1u);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0017F370:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[7].d[0] + 0ull;
    c.r[16].d[0] = c.r[8].d[0] + 0ull;
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017F3A8u); set32(c.r[4], 0u + 192u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0017F3A8u) [[unlikely]] return; }
L_0017F3A8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_0017F3D4; } }
    set32(c.r[5], ld32((c.r[20].w[0])));
    c.r[7].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[20].w[0] + 4u)));
    c.r[8].d[0] = c.r[18].d[0] + 0ull;
    c.r[9].d[0] = c.r[17].d[0] + 0ull;
    c.r[10].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017F3D0u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_001F(c, 298u, depth + 1u); else { c.pc = 0x0017E750u; return; } if (c.pc != 0x0017F3D0u) [[unlikely]] return; }
L_0017F3D0:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 1;
L_0017F3D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017F3DCu); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_001F(c, 361u, depth + 1u); else { c.pc = 0x0017EFB0u; return; } if (c.pc != 0x0017F3DCu) [[unlikely]] return; }
L_0017F3DC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    set32(c.r[2], 0u + 1u);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0017F400:
    set32(c.r[29], c.r[29].w[0] - 208u);
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    c.r[23].d[0] = c.r[9].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[22].d[0] = c.r[8].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], 0u + 120u);
    set32(c.r[17], c.r[21].w[0] + 72u);
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017F450u); set32(c.r[16], c.r[21].w[0] + 1036u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0017F450u) [[unlikely]] return; }
L_0017F450:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0017F470; } }
    set32(c.r[5], ld32((c.r[21].w[0])));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[21].w[0] + 4u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017F46Cu); set32(c.r[7], c.r[21].w[0] + 8u);  if (depth < kMaxDepth) unit_001F(c, 129u, depth + 1u); else { c.pc = 0x0017D230u; return; } if (c.pc != 0x0017F46Cu) [[unlikely]] return; }
L_0017F46C:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0017F470:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017F478u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_001F(c, 361u, depth + 1u); else { c.pc = 0x0017EFB0u; return; } if (c.pc != 0x0017F478u) [[unlikely]] return; }
L_0017F478:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017F480u); set32(c.r[4], 0u + 148u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0017F480u) [[unlikely]] return; }
L_0017F480:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0017F4AC; } }
    set32(c.r[5], ld32((c.r[21].w[0])));
    c.r[7].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[21].w[0] + 4u)));
    c.r[8].d[0] = c.r[19].d[0] + 0ull;
    c.r[9].d[0] = c.r[18].d[0] + 0ull;
    c.r[10].d[0] = c.r[23].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017F4ACu); set32(c.r[11], 0u + 24576u);  if (depth < kMaxDepth) unit_001F(c, 196u, depth + 1u); else { c.pc = 0x0017D9D0u; return; } if (c.pc != 0x0017F4ACu) [[unlikely]] return; }
L_0017F4AC:
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 36u)));
    set32(c.r[7], 0u - 3u);
    c.r[3].d[0] = c.r[22].d[0] << 56;
    c.r[8].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[6].d[0] = c.r[3].d[0] & 1ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], 0u - 2u);
    c.r[7].d[0] = c.r[9].d[0] & c.r[7].d[0];
    c.r[7].d[0] = c.r[7].d[0] | c.r[8].d[0];
    st8((c.r[2].w[0] + 36u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 36u)));
    c.r[3].d[0] = c.r[7].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[6].d[0];
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017F4F0u); st8((c.r[2].w[0] + 36u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_001F(c, 361u, depth + 1u); else { c.pc = 0x0017EFB0u; return; } if (c.pc != 0x0017F4F0u) [[unlikely]] return; }
L_0017F4F0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[4], c.r[29].w[0] + 144u);
    set32(c.r[5], c.r[5].w[0] + 11256u);
    set32(c.r[6], c.r[21].w[0] + 8u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017F508u); set32(c.r[7], c.r[17].w[0] + 260u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x00127458u; return; } if (c.pc != 0x0017F508u) [[unlikely]] return; }
L_0017F508:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017F510u); set32(c.r[4], 0u + 1172u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0017F510u) [[unlikely]] return; }
L_0017F510:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0017F534; } }
    set32(c.r[5], ld32((c.r[21].w[0])));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[21].w[0] + 4u)));
    set32(c.r[8], ld32((c.r[16].w[0])));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017F530u); set32(c.r[7], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_001F(c, 148u, depth + 1u); else { c.pc = 0x0017D4E0u; return; } if (c.pc != 0x0017F530u) [[unlikely]] return; }
L_0017F530:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0017F534:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017F53Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_001F(c, 39u, depth + 1u); else { c.pc = 0x0017C510u; return; } if (c.pc != 0x0017F53Cu) [[unlikely]] return; }
L_0017F53C:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017F548u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_001F(c, 361u, depth + 1u); else { c.pc = 0x0017EFB0u; return; } if (c.pc != 0x0017F548u) [[unlikely]] return; }
L_0017F548:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].sd[0] = static_cast<std::int32_t>(0x00460000u);  if (t) { goto L_0017F5A8; } }
    set32(c.r[4], c.r[29].w[0] + 144u);
    set32(c.r[5], c.r[5].w[0] + 11256u);
    set32(c.r[6], c.r[21].w[0] + 8u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017F568u); set32(c.r[7], c.r[17].w[0] + 324u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x00127458u; return; } if (c.pc != 0x0017F568u) [[unlikely]] return; }
L_0017F568:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017F570u); set32(c.r[4], 0u + 1172u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0017F570u) [[unlikely]] return; }
L_0017F570:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0017F594; } }
    set32(c.r[5], ld32((c.r[21].w[0])));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[21].w[0] + 4u)));
    set32(c.r[8], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017F590u); set32(c.r[7], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_001F(c, 148u, depth + 1u); else { c.pc = 0x0017D4E0u; return; } if (c.pc != 0x0017F590u) [[unlikely]] return; }
L_0017F590:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0017F594:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017F59Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_001F(c, 39u, depth + 1u); else { c.pc = 0x0017C510u; return; } if (c.pc != 0x0017F59Cu) [[unlikely]] return; }
L_0017F59C:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017F5A8u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_001F(c, 361u, depth + 1u); else { c.pc = 0x0017EFB0u; return; } if (c.pc != 0x0017F5A8u) [[unlikely]] return; }
L_0017F5A8:
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0017F60C; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[4], c.r[29].w[0] + 144u);
    set32(c.r[5], c.r[5].w[0] + 11256u);
    set32(c.r[6], c.r[21].w[0] + 8u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017F5CCu); set32(c.r[7], c.r[17].w[0] + 388u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x00127458u; return; } if (c.pc != 0x0017F5CCu) [[unlikely]] return; }
L_0017F5CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017F5D4u); set32(c.r[4], 0u + 1172u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0017F5D4u) [[unlikely]] return; }
L_0017F5D4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0017F5F4; } }
    set32(c.r[8], ld32((c.r[16].w[0] + 8u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[21].w[0])));
    set32(c.r[6], ld32((c.r[21].w[0] + 4u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017F5F4u); set32(c.r[7], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_001F(c, 148u, depth + 1u); else { c.pc = 0x0017D4E0u; return; } if (c.pc != 0x0017F5F4u) [[unlikely]] return; }
L_0017F5F4:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017F600u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_001F(c, 39u, depth + 1u); else { c.pc = 0x0017C510u; return; } if (c.pc != 0x0017F600u) [[unlikely]] return; }
L_0017F600:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017F60Cu); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_001F(c, 361u, depth + 1u); else { c.pc = 0x0017EFB0u; return; } if (c.pc != 0x0017F60Cu) [[unlikely]] return; }
L_0017F60C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[4], c.r[29].w[0] + 144u);
    set32(c.r[5], c.r[5].w[0] + 11256u);
    set32(c.r[6], c.r[21].w[0] + 8u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017F628u); set32(c.r[7], c.r[7].w[0] + 11264u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x00127458u; return; } if (c.pc != 0x0017F628u) [[unlikely]] return; }
L_0017F628:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017F630u); set32(c.r[4], 0u + 148u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0017F630u) [[unlikely]] return; }
L_0017F630:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0017F660; } }
    set32(c.r[5], ld32((c.r[21].w[0])));
    c.r[8].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[21].w[0] + 4u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[7], c.r[29].w[0] + 144u);
    set32(c.r[9], 0u + 964u);
    c.r[10].d[0] = 0ull + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017F65Cu); set32(c.r[11], 0u + 24576u);  if (depth < kMaxDepth) unit_001F(c, 196u, depth + 1u); else { c.pc = 0x0017D9D0u; return; } if (c.pc != 0x0017F65Cu) [[unlikely]] return; }
L_0017F65C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0017F660:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017F668u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_001F(c, 39u, depth + 1u); else { c.pc = 0x0017C510u; return; } if (c.pc != 0x0017F668u) [[unlikely]] return; }
L_0017F668:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017F674u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_001F(c, 361u, depth + 1u); else { c.pc = 0x0017EFB0u; return; } if (c.pc != 0x0017F674u) [[unlikely]] return; }
L_0017F674:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));
    set32(c.r[2], 0u + 1u);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 208u);  c.pc = t; return; }
L_0017F6B0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[7].d[0] + 0ull;
    c.r[16].d[0] = c.r[8].d[0] + 0ull;
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017F6E8u); set32(c.r[4], 0u + 144u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0017F6E8u) [[unlikely]] return; }
L_0017F6E8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_0017F718; } }
    set32(c.r[5], ld32((c.r[20].w[0])));
    c.r[7].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[20].w[0] + 4u)));
    c.r[8].d[0] = c.r[18].d[0] + 0ull;
    c.r[9].d[0] = c.r[17].d[0] + 0ull;
    c.r[10].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017F714u); set32(c.r[11], 0u + 24576u);  if (depth < kMaxDepth) unit_001F(c, 237u, depth + 1u); else { c.pc = 0x0017DF70u; return; } if (c.pc != 0x0017F714u) [[unlikely]] return; }
L_0017F714:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 1;
L_0017F718:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017F720u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_001F(c, 361u, depth + 1u); else { c.pc = 0x0017EFB0u; return; } if (c.pc != 0x0017F720u) [[unlikely]] return; }
L_0017F720:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    set32(c.r[2], 0u + 1u);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0017F750:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017F768u); set32(c.r[4], 0u + 56u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0017F768u) [[unlikely]] return; }
L_0017F768:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0017F784; } }
    set32(c.r[5], ld32((c.r[16].w[0])));
    set32(c.r[6], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017F780u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_001F(c, 317u, depth + 1u); else { c.pc = 0x0017EB40u; return; } if (c.pc != 0x0017F780u) [[unlikely]] return; }
L_0017F780:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0017F784:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017F78Cu); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_001F(c, 361u, depth + 1u); else { c.pc = 0x0017EFB0u; return; } if (c.pc != 0x0017F78Cu) [[unlikely]] return; }
L_0017F78C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[2], 0u + 1u);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0017F7A0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017F7C0u); set32(c.r[4], 0u + 192u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0017F7C0u) [[unlikely]] return; }
L_0017F7C0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0017F7E0; } }
    set32(c.r[5], ld32((c.r[17].w[0])));
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017F7DCu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_001F(c, 279u, depth + 1u); else { c.pc = 0x0017E4F0u; return; } if (c.pc != 0x0017F7DCu) [[unlikely]] return; }
L_0017F7DC:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0017F7E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017F7E8u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_001F(c, 361u, depth + 1u); else { c.pc = 0x0017EFB0u; return; } if (c.pc != 0x0017F7E8u) [[unlikely]] return; }
L_0017F7E8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    set32(c.r[2], 0u + 1u);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0017F800:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 1052u)));
    c.budget -= 8;
    { const bool t = c.r[4].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0017F828; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_0017F888; } }
L_0017F828:
    set32(c.r[25], ld32((c.r[4].w[0] + 32u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0017F838u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0017F838u) [[unlikely]] return; }
L_0017F838:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == c.r[2].d[0]; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0017F858; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0017F884; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[25], ld32((c.r[17].w[0] + 1064u)));  if (t) { goto L_0017F870; } }
L_0017F858:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017F860u);  if (depth < kMaxDepth) unit_001F(c, 363u, depth + 1u); else { c.pc = 0x0017F000u; return; } if (c.pc != 0x0017F860u) [[unlikely]] return; }
L_0017F860:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0017F880; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0017F884; } }
L_0017F870:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 56u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0017F880u); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0017F880u) [[unlikely]] return; }
L_0017F880:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0017F884:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_0017F888:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0017F8A0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 1052u)));
    c.budget -= 8;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[16], 0u + 1u);  if (t) { goto L_0017F8E8; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 32u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0017F8D0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0017F8D0u) [[unlikely]] return; }
L_0017F8D0:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] != c.r[2].d[0]; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0017F8E8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017F8E8u);  if (depth < kMaxDepth) unit_001F(c, 358u, depth + 1u); else { c.pc = 0x0017EF50u; return; } if (c.pc != 0x0017F8E8u) [[unlikely]] return; }
L_0017F8E8:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0017F900:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017F91Cu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0012(c, 39u, depth + 1u); else { c.pc = 0x001486F0u; return; } if (c.pc != 0x0017F91Cu) [[unlikely]] return; }
L_0017F91C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] - 14704u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.r[6].d[0] = 0ull + 0ull;
    st32((c.r[17].w[0] + 32u), 0u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017F940u); st64((c.r[17].w[0] + 40u), 0ull);  if (depth < kMaxDepth) unit_0012(c, 45u, depth + 1u); else { c.pc = 0x001487B0u; return; } if (c.pc != 0x0017F940u) [[unlikely]] return; }
L_0017F940:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0017F960:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0017F9C0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] - 14704u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 32u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0017F99C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017F99Cu);  if (depth < kMaxDepth) unit_0010(c, 83u, depth + 1u); else { c.pc = 0x00141160u; return; } if (c.pc != 0x0017F99Cu) [[unlikely]] return; }
L_0017F99C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017F9A8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0012(c, 42u, depth + 1u); else { c.pc = 0x00148750u; return; } if (c.pc != 0x0017F9A8u) [[unlikely]] return; }
L_0017F9A8:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0017F9C4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017F9C0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x0017F9C0u) [[unlikely]] return; }
L_0017F9C0:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0017F9C4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0017F9E0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[7].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017F9FCu); set32(c.r[4], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_0017(c, 125u, depth + 1u); else { c.pc = 0x0015D850u; return; } if (c.pc != 0x0017F9FCu) [[unlikely]] return; }
L_0017F9FC:
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017FA08u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0017(c, 144u, depth + 1u); else { c.pc = 0x0015DB40u; return; } if (c.pc != 0x0017FA08u) [[unlikely]] return; }
L_0017FA08:
    c.r[2].d[0] = c.r[2].d[0] << 32;
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.r[2].d[0] = c.r[2].d[0] >> 32;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017FA20u); st64((c.r[16].w[0] + 40u), c.r[2].d[0]);  if (depth < kMaxDepth) unit_0017(c, 122u, depth + 1u); else { c.pc = 0x0015D740u; return; } if (c.pc != 0x0017FA20u) [[unlikely]] return; }
L_0017FA20:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[4], c.r[29].w[0] + 32u);  if (t) { goto L_0017FA3C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017FA34u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 152u, depth + 1u); else { c.pc = 0x0015DC50u; return; } if (c.pc != 0x0017FA34u) [[unlikely]] return; }
L_0017FA34:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 32u), c.r[2].w[0]);  if (t) { goto L_0017FA44; } }
L_0017FA3C:
    c.r[2].d[0] = 0ull + 0ull;
    st32((c.r[16].w[0] + 32u), c.r[2].w[0]);
    c.budget -= 2;
L_0017FA44:
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017FA50u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0017(c, 138u, depth + 1u); else { c.pc = 0x0015D9D0u; return; } if (c.pc != 0x0017FA50u) [[unlikely]] return; }
L_0017FA50:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0017FA60:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[4].w[0] + 32u)));  c.pc = t; return; }
L_0017FA70:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = ld64((c.r[4].w[0] + 40u));  c.pc = t; return; }
L_0017FA80:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] - 14320u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[4].w[0] + 36u), c.r[2].w[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[4].w[0] + 16u), 0ull);
    set32(c.r[6], 0u + 16u);
    st32((c.r[4].w[0] + 24u), 0u);
    st32((c.r[4].w[0] + 28u), 0u);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017FAB8u); st8((c.r[4].w[0] + 32u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0009(c, 49u, depth + 1u); else { c.pc = 0x00124ED8u; return; } if (c.pc != 0x0017FAB8u) [[unlikely]] return; }
L_0017FAB8:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0017FAD0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0017FB14; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] - 14320u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017FAFCu); st32((c.r[17].w[0] + 36u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_001F(c, 461u, depth + 1u); else { c.pc = 0x0017FB30u; return; } if (c.pc != 0x0017FAFCu) [[unlikely]] return; }
L_0017FAFC:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0017FB18; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017FB14u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x0017FB14u) [[unlikely]] return; }
L_0017FB14:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0017FB18:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0017FB30:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 24u)));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0017FB54; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017FB54u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100210u; return; } if (c.pc != 0x0017FB54u) [[unlikely]] return; }
L_0017FB54:
    st32((c.r[16].w[0] + 24u), 0u);
    set32(c.r[4], ld32((c.r[16].w[0] + 28u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0017FB6C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017FB6Cu);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100210u; return; } if (c.pc != 0x0017FB6Cu) [[unlikely]] return; }
L_0017FB6C:
    st32((c.r[16].w[0] + 28u), 0u);
    st8((c.r[16].w[0] + 32u), static_cast<std::uint8_t>(0u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0017FB90:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[22].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017FBC8u); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_001F(c, 461u, depth + 1u); else { c.pc = 0x0017FB30u; return; } if (c.pc != 0x0017FBC8u) [[unlikely]] return; }
L_0017FBC8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017FBD4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0012(c, 295u, depth + 1u); else { c.pc = 0x0014B6A0u; return; } if (c.pc != 0x0017FBD4u) [[unlikely]] return; }
L_0017FBD4:
    set32(c.r[18], ld32((c.r[2].w[0] + 8u)));
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[17], ld32((c.r[2].w[0] + 4u)));
    set32(c.r[16], c.r[22].w[0] + 16u);
    c.r[3].d[0] = ld64((c.r[2].w[0] + 24u));
    st64((c.r[22].w[0] + 16u), c.r[3].d[0]);
    set32(c.r[2], 0u + 1u);
    c.r[3].d[0] = ld8((c.r[22].w[0] + 19u));
    c.r[4].d[0] = ld16((c.r[22].w[0] + 18u));
    c.r[3].d[0] = c.r[3].d[0] << 58;
    c.r[4].d[0] = c.r[4].d[0] << 54;
    c.r[3].d[0] = c.r[3].d[0] >> 60;
    c.r[4].d[0] = c.r[4].d[0] >> 58;
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017FC10u); set32(c.r[5], c.r[2].w[0] << (c.r[3].w[0] & 31u));  if (depth < kMaxDepth) unit_0013(c, 8u, depth + 1u); else { c.pc = 0x0014C060u; return; } if (c.pc != 0x0017FC10u) [[unlikely]] return; }
L_0017FC10:
    c.r[5].d[0] = ld64((c.r[16].w[0]));
    c.r[3].d[0] = c.r[2].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.r[4].d[0] = c.r[3].d[0] & 63ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFFF00000u);
    c.r[4].d[0] = c.r[4].d[0] << 14;
    c.r[3].d[0] = c.r[3].d[0] | 16383ull;
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 11;
    { const bool t = c.r[18].d[0] == 0ull; st64((c.r[16].w[0]), c.r[3].d[0]);  if (t) { goto L_0017FC60; } }
    c.r[2].d[0] = ld16((c.r[19].w[0] + 12u));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017FC4Cu); set32(c.r[16], c.r[19].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x001001F0u; return; } if (c.pc != 0x0017FC4Cu) [[unlikely]] return; }
L_0017FC4C:
    st32((c.r[22].w[0] + 24u), c.r[2].w[0]);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[22].w[0] + 24u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017FC60u); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 40u, depth + 1u); else { c.pc = 0x00124D20u; return; } if (c.pc != 0x0017FC60u) [[unlikely]] return; }
L_0017FC60:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_0017FCCC; } }
    c.r[3].d[0] = ld16((c.r[19].w[0] + 12u));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[19].w[0] + 8u)));
    set32(c.r[3], c.r[19].w[0] + c.r[3].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017FC80u); set32(c.r[16], c.r[3].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x001001F0u; return; } if (c.pc != 0x0017FC80u) [[unlikely]] return; }
L_0017FC80:
    st32((c.r[22].w[0] + 28u), c.r[2].w[0]);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[22].w[0] + 28u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017FC94u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 40u, depth + 1u); else { c.pc = 0x00124D20u; return; } if (c.pc != 0x0017FC94u) [[unlikely]] return; }
L_0017FC94:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_0017FCCC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[5].d[0] < c.r[17].d[0] ? 1ull : 0ull;  if (t) { goto L_0017FCC4; } }
L_0017FCA4:
    set32(c.r[3], ld32((c.r[22].w[0] + 28u)));
    set32(c.r[4], c.r[5].w[0] + 3u);
    set32(c.r[5], c.r[5].w[0] + 4u);
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].d[0] = ld8((c.r[4].w[0]));
    set32(c.r[3], c.r[3].w[0] >> 1);
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[5].d[0] < c.r[17].d[0] ? 1ull : 0ull;
    c.budget -= 8;
L_0017FCC4:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0017FCA4u | kUnwind; return; } goto L_0017FCA4; } }
L_0017FCCC:
    c.budget -= 2;
    { const bool t = c.r[21].d[0] == 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_0017FD00; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017FCDCu); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 237u, depth + 1u); else { c.pc = 0x00127D00u; return; } if (c.pc != 0x0017FCDCu) [[unlikely]] return; }
L_0017FCDC:
    set32(c.r[6], c.r[2].w[0] + 1u);
    c.r[2].d[0] = c.r[6].d[0] < static_cast<std::uint64_t>(16ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[5].d[0] = c.r[21].d[0] + 0ull;  if (t) { goto L_0017FCF0; } }
    set32(c.r[6], 0u + 15u);
    c.budget -= 1;
L_0017FCF0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017FCF8u); c.r[4].d[0] = c.r[22].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 40u, depth + 1u); else { c.pc = 0x00124D20u; return; } if (c.pc != 0x0017FCF8u) [[unlikely]] return; }
L_0017FCF8:
    st8((c.r[22].w[0] + 15u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], 0u + 1u);
    c.budget -= 2;
L_0017FD00:
    st8((c.r[22].w[0] + 32u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_0017FD30:
    st32((c.r[4].w[0]), 0u);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 4u), 0u);  c.pc = t; return; }
L_0017FD40:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0017FD7C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017FD64u);  if (depth < kMaxDepth) unit_0020(c, 6u, depth + 1u); else { c.pc = 0x00180050u; return; } if (c.pc != 0x0017FD64u) [[unlikely]] return; }
L_0017FD64:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0017FD80; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017FD7Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x0017FD7Cu) [[unlikely]] return; }
L_0017FD7C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0017FD80:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0017FDA0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017FDCCu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0020(c, 6u, depth + 1u); else { c.pc = 0x00180050u; return; } if (c.pc != 0x0017FDCCu) [[unlikely]] return; }
L_0017FDCC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017FDD4u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 104u, depth + 1u); else { c.pc = 0x0015D3B0u; return; } if (c.pc != 0x0017FDD4u) [[unlikely]] return; }
L_0017FDD4:
    st32((c.r[20].w[0]), c.r[2].w[0]);
    set32(c.r[16], ld32((c.r[20].w[0])));
    set32(c.r[2], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[2], c.r[2].w[0] << 3);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017FDF0u); set32(c.r[4], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x001001F0u; return; } if (c.pc != 0x0017FDF0u) [[unlikely]] return; }
L_0017FDF0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00180000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00180000u);
    c.r[8].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 256u);
    set32(c.r[6], c.r[6].w[0] - 352u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017FE10u); set32(c.r[7], 0u + 40u);  if (depth < kMaxDepth) unit_0000(c, 94u, depth + 1u); else { c.pc = 0x001008C0u; return; } if (c.pc != 0x0017FE10u) [[unlikely]] return; }
L_0017FE10:
    st32((c.r[20].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_0017FE6C; } }
L_0017FE1C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017FE24u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 108u, depth + 1u); else { c.pc = 0x0015D4C0u; return; } if (c.pc != 0x0017FE24u) [[unlikely]] return; }
L_0017FE24:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017FE34u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 106u, depth + 1u); else { c.pc = 0x0015D420u; return; } if (c.pc != 0x0017FE34u) [[unlikely]] return; }
L_0017FE34:
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], c.r[17].w[0] << 2);
    set32(c.r[3], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[25], ld32((c.r[4].w[0] + 36u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 11;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0017FE60u); c.r[7].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0017FE60u) [[unlikely]] return; }
L_0017FE60:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017FE68u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 113u, depth + 1u); else { c.pc = 0x0015D540u; return; } if (c.pc != 0x0017FE68u) [[unlikely]] return; }
L_0017FE68:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_0017FE6C:
    set32(c.r[3], ld32((c.r[20].w[0])));
    c.r[3].d[0] = c.r[17].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0017FE1Cu | kUnwind; return; } goto L_0017FE1C; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0017FEA0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0017FEE8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 14336u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017FED0u); st32((c.r[17].w[0] + 36u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_001F(c, 458u, depth + 1u); else { c.pc = 0x0017FAD0u; return; } if (c.pc != 0x0017FED0u) [[unlikely]] return; }
L_0017FED0:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0017FEEC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017FEE8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x0017FEE8u) [[unlikely]] return; }
L_0017FEE8:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0017FEEC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0017FF00:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017FF14u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_001F(c, 456u, depth + 1u); else { c.pc = 0x0017FA80u; return; } if (c.pc != 0x0017FF14u) [[unlikely]] return; }
L_0017FF14:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] - 14336u);
    st32((c.r[16].w[0] + 36u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0017FF40:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017FF6Cu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0020(c, 6u, depth + 1u); else { c.pc = 0x00180050u; return; } if (c.pc != 0x0017FF6Cu) [[unlikely]] return; }
L_0017FF6C:
    set32(c.r[4], ld32((c.r[19].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x20430000u);
    c.r[2].d[0] = c.r[2].d[0] | 16720ull;
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_0017FF88; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 1;
L_0017FF88:
    st32((c.r[20].w[0]), c.r[2].w[0]);
    set32(c.r[16], ld32((c.r[20].w[0])));
    set32(c.r[2], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[2], c.r[2].w[0] << 3);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017FFA4u); set32(c.r[4], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x001001F0u; return; } if (c.pc != 0x0017FFA4u) [[unlikely]] return; }
L_0017FFA4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00180000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00180000u);
    c.r[8].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 256u);
    set32(c.r[6], c.r[6].w[0] - 352u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017FFC4u); set32(c.r[7], 0u + 40u);  if (depth < kMaxDepth) unit_0000(c, 94u, depth + 1u); else { c.pc = 0x001008C0u; return; } if (c.pc != 0x0017FFC4u) [[unlikely]] return; }
L_0017FFC4:
    st32((c.r[20].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { [[clang::musttail]] return unit_0020(c, 4u, depth); } }
L_0017FFD0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017FFD8u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 152u, depth + 1u); else { c.pc = 0x0015DC50u; return; } if (c.pc != 0x0017FFD8u) [[unlikely]] return; }
L_0017FFD8:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_0020(c, 3u, depth); } }
    set32(c.r[2], ld32((c.r[20].w[0] + 4u)));
    set32(c.r[3], c.r[17].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] << 3);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 7;
    [[clang::musttail]] return unit_0020(c, 1u, depth);
}

}
