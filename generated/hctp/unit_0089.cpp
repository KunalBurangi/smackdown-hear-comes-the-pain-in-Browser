#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0089[4096] = {
    1, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 5, 0, 0, 0, 6, 0, 0, 0, 7, 0,
    0, 0, 8, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 12, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0,
    0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 19,
    0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0,
    0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0,
    32, 0, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 36, 0, 0, 37, 0, 38, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 40,
    0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 42, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0,
    45, 0, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 49, 0, 0,
    0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0,
    57, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 64, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 68,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 0, 74, 0, 75, 0, 0, 0, 0, 0, 76, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0,
    79, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 83, 0, 0, 0, 84, 0, 0, 0, 0, 85, 0, 86, 0, 0,
    0, 87, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 90, 0, 0, 0, 91, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0, 0,
    0, 95, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 97, 0, 98, 0, 0, 0, 99, 0, 100, 0, 0, 0, 0, 0, 0,
    101, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 105, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 106, 0, 107, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 109, 0, 0,
    0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 112, 0, 0, 0, 0, 113, 0, 0, 0, 0, 114,
    0, 0, 0, 0, 115, 0, 0, 0, 0, 116, 0, 0, 0, 0, 117, 0, 0, 0, 0, 118, 0, 119, 0, 0, 120, 0, 0, 121, 0, 0, 0, 0,
    0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 125, 0, 126, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0,
    129, 0, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 133, 0,
    0, 0, 0, 0, 134, 0, 135, 0, 0, 0, 136, 0, 0, 137, 0, 0, 138, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0, 143, 0, 0, 0, 144, 0, 0,
    0, 145, 0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 0, 0, 0, 147, 0, 0, 0, 148, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 150, 0, 0, 0, 151, 0, 0, 0, 0, 0, 152, 0, 153, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 154, 0,
    0, 155, 0, 0, 156, 0, 0, 157, 0, 0, 158, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 160, 0, 0, 0,
    0, 161, 0, 0, 0, 0, 0, 0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 164, 0, 0, 165, 0, 0, 0, 0, 166,
    0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 169, 0, 0, 0, 170, 0, 0, 0, 0, 171, 0, 0, 0, 0, 172, 0,
    0, 173, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0, 0, 0, 177, 0, 0,
    0, 0, 178, 0, 0, 0, 179, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0, 0,
    0, 0, 183, 0, 0, 0, 184, 0, 0, 0, 0, 0, 185, 0, 0, 0, 186, 0, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0, 0, 188, 0, 189,
    0, 0, 0, 0, 190, 0, 0, 0, 0, 191, 0, 192, 0, 0, 0, 0, 193, 0, 0, 0, 0, 194, 0, 0, 0, 0, 195, 0, 0, 0, 196, 0,
    0, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 199, 0,
    0, 0, 200, 0, 0, 201, 0, 0, 0, 0, 0, 0, 0, 0, 0, 202, 0, 0, 203, 0, 0, 0, 0, 204, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 205, 0, 0, 0, 0, 206, 0, 0, 0,
    0, 207, 0, 0, 0, 0, 0, 208, 0, 0, 0, 0, 209, 0, 0, 0, 0, 210, 0, 0, 0, 0, 0, 211, 0, 0, 0, 0, 212, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 0, 0, 0, 215, 0, 216, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 217, 0, 0, 0, 0, 0, 218, 0, 0, 0, 0, 0, 0, 0, 219, 0, 0, 0, 0, 0, 0, 0, 0, 0, 220, 0, 0, 0, 0, 0,
    0, 0, 221, 0, 0, 0, 0, 0, 0, 0, 222, 0, 223, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 224, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 225, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 226, 0, 0, 0, 0, 0, 0, 0, 227, 0, 0, 0, 0, 228, 0,
    0, 0, 0, 0, 0, 229, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 230, 0, 0, 0, 231, 0, 0, 0, 0, 0, 232, 0,
    233, 0, 0, 0, 234, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 235, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 236, 0, 0, 0, 237, 0, 0, 0, 0, 0, 0, 0, 238, 0, 0, 0, 0, 0, 0, 0, 0, 239, 0, 0, 0, 240, 0, 0, 0, 0, 0,
    241, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 242, 0, 0, 0, 243, 0, 0, 0, 0, 0,
    244, 0, 0, 0, 0, 0, 0, 0, 245, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 246, 0, 0, 0, 0, 0,
    247, 0, 0, 0, 0, 0, 0, 0, 0, 248, 0, 0, 0, 0, 249, 0, 0, 0, 0, 0, 250, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 251,
    0, 0, 0, 0, 0, 0, 0, 0, 252, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 253, 0,
    0, 0, 0, 254, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    256, 0, 0, 257, 0, 0, 0, 258, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 259, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 260, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 261, 0, 0, 0, 0, 262, 0, 0, 0, 0, 0, 0, 0, 263, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 264, 0, 0, 0, 0, 0, 0, 0, 265, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    266, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 267, 0, 0, 0, 0, 0, 0, 0, 268, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 269, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 270, 0, 0, 0, 0, 0, 0, 0, 271, 0, 0, 0, 0,
    0, 0, 0, 272, 0, 0, 0, 0, 0, 0, 273, 0, 0, 0, 0, 0, 0, 274, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 275, 0, 0, 0, 0, 0, 0, 276, 0, 0, 0, 0, 0, 0, 277, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 278, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 279, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 280, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 281, 0, 0, 0, 0, 0, 0, 0, 282, 0, 0, 0, 0,
    0, 0, 0, 283, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 284, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 285, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 286, 0, 0, 0, 0, 0, 0, 0, 287, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 288, 0, 0, 0, 0, 0, 0, 289, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 290, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 291, 0, 0,
    292, 0, 0, 0, 0, 0, 293, 0, 0, 0, 0, 294, 0, 0, 0, 0, 0, 0, 295, 0, 0, 0, 0, 296, 0, 0, 297, 0, 0, 0, 0, 0,
    298, 0, 0, 0, 0, 299, 0, 0, 0, 0, 0, 0, 0, 0, 300, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 301, 0, 0, 0,
    0, 0, 0, 0, 302, 0, 0, 0, 0, 0, 0, 0, 0, 303, 0, 0, 304, 0, 0, 0, 0, 305, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    306, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 307, 0, 0, 0, 0, 0, 308, 0, 0, 0, 0, 0,
    309, 0, 0, 0, 310, 0, 0, 0, 0, 311, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 312, 0, 0, 0, 0, 0, 0, 313, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 314, 0, 0, 315, 0, 0, 0, 0, 0, 316, 0, 0, 0, 0, 0, 317, 0, 0, 0, 318, 0, 0, 0,
    0, 0, 0, 0, 319, 0, 0, 0, 320, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 321, 0, 0, 0,
    0, 322, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 323, 0, 0, 0, 0, 324, 0, 0, 0,
    0, 0, 0, 325, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 326, 0, 0, 0, 0, 327, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 328, 0, 0, 0, 0, 0, 329, 0, 0, 0, 0, 0, 330, 0, 0, 0, 0, 0, 0, 331, 0, 0, 0,
    0, 0, 0, 332, 0, 333, 0, 0, 0, 0, 334, 0, 0, 0, 335, 0, 0, 0, 0, 0, 0, 0, 336, 0, 0, 337, 0, 338, 0, 339, 0, 0,
    340, 0, 0, 0, 0, 341, 0, 0, 0, 342, 0, 0, 0, 0, 0, 0, 343, 0, 0, 0, 0, 0, 0, 0, 344, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 345, 0, 0, 346, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 347, 0, 0, 0, 348, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 349, 0, 0, 0, 350, 0, 0, 351, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 352, 0,
    0, 0, 353, 0, 0, 354, 0, 0, 0, 0, 0, 0, 355, 0, 0, 0, 0, 0, 356, 0, 0, 0, 357, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 358, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 359, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    360, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 361, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 362, 0, 0, 0, 0, 0, 0, 0, 0, 0, 363, 0, 0, 0, 0, 0, 0, 0, 0, 0, 364, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 365, 0, 0, 0, 366, 0, 0, 367, 0, 0, 368, 0, 0, 369, 0, 0, 370, 0, 0, 0, 0, 0, 371, 0, 0, 0, 0, 0, 0, 0, 0,
    372, 0, 0, 0, 0, 0, 373, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 374, 0, 0, 0, 0, 0, 375, 0, 0, 0, 0, 0, 376, 0,
    0, 0, 0, 0, 0, 377, 0, 0, 0, 0, 378, 0, 0, 0, 379, 0, 0, 0, 380, 0, 0, 0, 381, 0, 0, 0, 0, 0, 0, 0, 382, 0,
    0, 0, 0, 0, 0, 383, 0, 0, 0, 0, 384, 0, 0, 0, 0, 385, 0, 0, 0, 386, 0, 0, 0, 387, 0, 0, 0, 388, 0, 0, 0, 0,
    389, 0, 0, 0, 0, 0, 0, 0, 0, 390, 0, 0, 0, 391, 0, 392, 0, 0, 0, 0, 0, 393, 0, 0, 394, 0, 0, 0, 0, 0, 0, 0,
    395, 0, 0, 0, 0, 0, 0, 0, 0, 396, 0, 0, 0, 0, 397, 0, 0, 0, 0, 398, 0, 0, 0, 0, 0, 0, 0, 0, 399, 0, 0, 0,
    0, 400, 401, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 402, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 403, 0, 0, 0, 0, 0, 0, 404, 0, 0, 0, 0, 405, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 406, 0, 0, 0, 0, 0, 0, 0, 407, 0, 0, 0, 0, 408, 0, 0,
    0, 0, 409, 0, 0, 0, 0, 0, 0, 0, 0, 410, 0, 0, 0, 0, 411, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 412, 0, 0, 0, 0, 0, 0, 0, 0, 413, 0, 0, 0, 0, 414, 0, 0, 0, 0, 0, 415, 0, 0, 0,
    0, 0, 0, 0, 416, 0, 0, 0, 0, 417, 0, 0, 0, 0, 0, 418, 0, 0, 0, 0, 0, 419, 0, 0, 0, 0, 0, 0, 420, 0, 0, 0,
    0, 421, 0, 0, 0, 0, 0, 422, 0, 0, 0, 0, 423, 0, 0, 0, 0, 424, 0, 0, 0, 0, 0, 425, 0, 0, 0, 0, 426, 0, 0, 0,
    0, 427, 0, 0, 0, 0, 0, 428, 0, 0, 0, 0, 429, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    430, 0, 0, 0, 0, 0, 0, 0, 431, 0, 0, 0, 0, 0, 432, 0, 0, 0, 0, 0, 0, 0, 0, 0, 433, 0, 0, 0, 434, 0, 0, 0,
    0, 435, 0, 0, 0, 436, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 437, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 438, 0, 0, 0, 0, 0, 0, 0, 0, 0, 439, 0, 0, 0, 0, 440, 0, 0, 0, 0, 441, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 442, 0, 0, 0, 0, 443, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 444, 0, 0, 0, 0, 445, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 446, 0, 0, 0, 0, 0, 0, 0, 447, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    448, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 449, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 450, 0, 0, 0, 451, 0, 0, 0, 0, 0, 0, 452, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 453, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 454, 0, 0, 0, 455, 0, 0, 0, 0, 0, 0, 0, 456, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 457, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 458, 0,
    0, 0, 459, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 460, 0, 0, 0, 0, 0, 0, 0, 0, 461, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 462, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 463, 0, 0, 0, 0, 0, 0, 0, 464,
    0, 0, 0, 0, 0, 0, 0, 465, 0, 466, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 467, 0, 0, 0, 0, 0, 0, 0, 468, 0,
    0, 0, 0, 0, 0, 0, 469, 0, 0, 0, 470, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 471, 0, 0, 0, 0, 0, 0,
    0, 472, 0, 0, 0, 0, 0, 0, 0, 473, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 474, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 475, 0, 476, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 477, 0, 0, 0, 478, 0, 479, 0, 0, 0, 0, 0,
};

void unit_0089(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_00324000;
    case 2u: goto L_00324018;
    case 3u: goto L_0032402C;
    case 4u: goto L_00324044;
    case 5u: goto L_00324058;
    case 6u: goto L_00324068;
    case 7u: goto L_00324078;
    case 8u: goto L_00324088;
    case 9u: goto L_003240A0;
    case 10u: goto L_003240CC;
    case 11u: goto L_003240D4;
    case 12u: goto L_00324110;
    case 13u: goto L_00324124;
    case 14u: goto L_00324148;
    case 15u: goto L_0032416C;
    case 16u: goto L_00324190;
    case 17u: goto L_003241B4;
    case 18u: goto L_003241D8;
    case 19u: goto L_003241FC;
    case 20u: goto L_00324220;
    case 21u: goto L_00324244;
    case 22u: goto L_00324268;
    case 23u: goto L_0032428C;
    case 24u: goto L_003242C0;
    case 25u: goto L_0032430C;
    case 26u: goto L_00324330;
    case 27u: goto L_00324354;
    case 28u: goto L_00324370;
    case 29u: goto L_00324398;
    case 30u: goto L_003243B4;
    case 31u: goto L_003243DC;
    case 32u: goto L_00324400;
    case 33u: goto L_00324424;
    case 34u: goto L_00324448;
    case 35u: goto L_0032446C;
    case 36u: goto L_00324498;
    case 37u: goto L_003244A4;
    case 38u: goto L_003244AC;
    case 39u: goto L_003244F0;
    case 40u: goto L_003244FC;
    case 41u: goto L_00324514;
    case 42u: goto L_0032452C;
    case 43u: goto L_0032453C;
    case 44u: goto L_00324560;
    case 45u: goto L_00324580;
    case 46u: goto L_003245A4;
    case 47u: goto L_003245C0;
    case 48u: goto L_003245D8;
    case 49u: goto L_003245F4;
    case 50u: goto L_00324618;
    case 51u: goto L_00324634;
    case 52u: goto L_0032464C;
    case 53u: goto L_00324668;
    case 54u: goto L_00324690;
    case 55u: goto L_003246C4;
    case 56u: goto L_003246E4;
    case 57u: goto L_00324700;
    case 58u: goto L_00324730;
    case 59u: goto L_00324754;
    case 60u: goto L_00324770;
    case 61u: goto L_003247A0;
    case 62u: goto L_003247B0;
    case 63u: goto L_003247D0;
    case 64u: goto L_00324804;
    case 65u: goto L_00324830;
    case 66u: goto L_0032484C;
    case 67u: goto L_00324860;
    case 68u: goto L_0032487C;
    case 69u: goto L_003248AC;
    case 70u: goto L_003248BC;
    case 71u: goto L_003248D8;
    case 72u: goto L_00324908;
    case 73u: goto L_00324930;
    case 74u: goto L_00324958;
    case 75u: goto L_00324960;
    case 76u: goto L_00324978;
    case 77u: goto L_003249B0;
    case 78u: goto L_003249EC;
    case 79u: goto L_00324A00;
    case 80u: goto L_00324A18;
    case 81u: goto L_00324A48;
    case 82u: goto L_00324AB0;
    case 83u: goto L_00324AC8;
    case 84u: goto L_00324AD8;
    case 85u: goto L_00324AEC;
    case 86u: goto L_00324AF4;
    case 87u: goto L_00324B04;
    case 88u: goto L_00324B10;
    case 89u: goto L_00324B30;
    case 90u: goto L_00324B84;
    case 91u: goto L_00324B94;
    case 92u: goto L_00324BAC;
    case 93u: goto L_00324BD0;
    case 94u: goto L_00324BE0;
    case 95u: goto L_00324C04;
    case 96u: goto L_00324C30;
    case 97u: goto L_00324C44;
    case 98u: goto L_00324C4C;
    case 99u: goto L_00324C5C;
    case 100u: goto L_00324C64;
    case 101u: goto L_00324C80;
    case 102u: goto L_00324C98;
    case 103u: goto L_00324CBC;
    case 104u: goto L_00324CE0;
    case 105u: goto L_00324CF4;
    case 106u: goto L_00324D1C;
    case 107u: goto L_00324D24;
    case 108u: goto L_00324D40;
    case 109u: goto L_00324D74;
    case 110u: goto L_00324D88;
    case 111u: goto L_00324DC0;
    case 112u: goto L_00324DD4;
    case 113u: goto L_00324DE8;
    case 114u: goto L_00324DFC;
    case 115u: goto L_00324E10;
    case 116u: goto L_00324E24;
    case 117u: goto L_00324E38;
    case 118u: goto L_00324E4C;
    case 119u: goto L_00324E54;
    case 120u: goto L_00324E60;
    case 121u: goto L_00324E6C;
    case 122u: goto L_00324E90;
    case 123u: goto L_00324EB8;
    case 124u: goto L_00324EE0;
    case 125u: goto L_00324F08;
    case 126u: goto L_00324F10;
    case 127u: goto L_00324F3C;
    case 128u: goto L_00324F70;
    case 129u: goto L_00324F80;
    case 130u: goto L_00324F98;
    case 131u: goto L_00324FC0;
    case 132u: goto L_00324FE4;
    case 133u: goto L_00324FF8;
    case 134u: goto L_00325010;
    case 135u: goto L_00325018;
    case 136u: goto L_00325028;
    case 137u: goto L_00325034;
    case 138u: goto L_00325040;
    case 139u: goto L_00325050;
    case 140u: goto L_0032506C;
    case 141u: goto L_003250A0;
    case 142u: goto L_003250D0;
    case 143u: goto L_003250E4;
    case 144u: goto L_003250F4;
    case 145u: goto L_00325104;
    case 146u: goto L_00325114;
    case 147u: goto L_0032513C;
    case 148u: goto L_0032514C;
    case 149u: goto L_0032515C;
    case 150u: goto L_00325198;
    case 151u: goto L_003251A8;
    case 152u: goto L_003251C0;
    case 153u: goto L_003251C8;
    case 154u: goto L_003251F8;
    case 155u: goto L_00325204;
    case 156u: goto L_00325210;
    case 157u: goto L_0032521C;
    case 158u: goto L_00325228;
    case 159u: goto L_0032525C;
    case 160u: goto L_00325270;
    case 161u: goto L_00325284;
    case 162u: goto L_003252AC;
    case 163u: goto L_003252C4;
    case 164u: goto L_003252DC;
    case 165u: goto L_003252E8;
    case 166u: goto L_003252FC;
    case 167u: goto L_00325310;
    case 168u: goto L_0032532C;
    case 169u: goto L_00325340;
    case 170u: goto L_00325350;
    case 171u: goto L_00325364;
    case 172u: goto L_00325378;
    case 173u: goto L_00325384;
    case 174u: goto L_00325390;
    case 175u: goto L_003253B8;
    case 176u: goto L_003253CC;
    case 177u: goto L_003253F4;
    case 178u: goto L_00325408;
    case 179u: goto L_00325418;
    case 180u: goto L_0032542C;
    case 181u: goto L_00325464;
    case 182u: goto L_003254E8;
    case 183u: goto L_00325508;
    case 184u: goto L_00325518;
    case 185u: goto L_00325530;
    case 186u: goto L_00325540;
    case 187u: goto L_00325560;
    case 188u: goto L_00325574;
    case 189u: goto L_0032557C;
    case 190u: goto L_00325590;
    case 191u: goto L_003255A4;
    case 192u: goto L_003255AC;
    case 193u: goto L_003255C0;
    case 194u: goto L_003255D4;
    case 195u: goto L_003255E8;
    case 196u: goto L_003255F8;
    case 197u: goto L_00325610;
    case 198u: goto L_0032564C;
    case 199u: goto L_00325678;
    case 200u: goto L_00325688;
    case 201u: goto L_00325694;
    case 202u: goto L_003256BC;
    case 203u: goto L_003256C8;
    case 204u: goto L_003256DC;
    case 205u: goto L_0032575C;
    case 206u: goto L_00325770;
    case 207u: goto L_00325784;
    case 208u: goto L_0032579C;
    case 209u: goto L_003257B0;
    case 210u: goto L_003257C4;
    case 211u: goto L_003257DC;
    case 212u: goto L_003257F0;
    case 213u: goto L_00325818;
    case 214u: goto L_00325838;
    case 215u: goto L_00325858;
    case 216u: goto L_00325860;
    case 217u: goto L_00325888;
    case 218u: goto L_003258A0;
    case 219u: goto L_003258C0;
    case 220u: goto L_003258E8;
    case 221u: goto L_00325908;
    case 222u: goto L_00325928;
    case 223u: goto L_00325930;
    case 224u: goto L_00325960;
    case 225u: goto L_00325990;
    case 226u: goto L_003259C4;
    case 227u: goto L_003259E4;
    case 228u: goto L_003259F8;
    case 229u: goto L_00325A14;
    case 230u: goto L_00325A50;
    case 231u: goto L_00325A60;
    case 232u: goto L_00325A78;
    case 233u: goto L_00325A80;
    case 234u: goto L_00325A90;
    case 235u: goto L_00325AC0;
    case 236u: goto L_00325B04;
    case 237u: goto L_00325B14;
    case 238u: goto L_00325B34;
    case 239u: goto L_00325B58;
    case 240u: goto L_00325B68;
    case 241u: goto L_00325B80;
    case 242u: goto L_00325BD8;
    case 243u: goto L_00325BE8;
    case 244u: goto L_00325C00;
    case 245u: goto L_00325C20;
    case 246u: goto L_00325CE8;
    case 247u: goto L_00325D00;
    case 248u: goto L_00325D24;
    case 249u: goto L_00325D38;
    case 250u: goto L_00325D50;
    case 251u: goto L_00325D7C;
    case 252u: goto L_00325DA0;
    case 253u: goto L_00325DF8;
    case 254u: goto L_00325E0C;
    case 255u: goto L_00325E1C;
    case 256u: goto L_00325E80;
    case 257u: goto L_00325E8C;
    case 258u: goto L_00325E9C;
    case 259u: goto L_00325F28;
    case 260u: goto L_00325F54;
    case 261u: goto L_00325FA8;
    case 262u: goto L_00325FBC;
    case 263u: goto L_00325FDC;
    case 264u: goto L_0032601C;
    case 265u: goto L_0032603C;
    case 266u: goto L_00326080;
    case 267u: goto L_003260B4;
    case 268u: goto L_003260D4;
    case 269u: goto L_00326118;
    case 270u: goto L_0032614C;
    case 271u: goto L_0032616C;
    case 272u: goto L_0032618C;
    case 273u: goto L_003261A8;
    case 274u: goto L_003261C4;
    case 275u: goto L_00326220;
    case 276u: goto L_0032623C;
    case 277u: goto L_00326258;
    case 278u: goto L_0032633C;
    case 279u: goto L_003263E4;
    case 280u: goto L_00326418;
    case 281u: goto L_0032644C;
    case 282u: goto L_0032646C;
    case 283u: goto L_0032648C;
    case 284u: goto L_003264E0;
    case 285u: goto L_00326520;
    case 286u: goto L_00326590;
    case 287u: goto L_003265B0;
    case 288u: goto L_003265DC;
    case 289u: goto L_003265F8;
    case 290u: goto L_00326624;
    case 291u: goto L_003266F4;
    case 292u: goto L_00326700;
    case 293u: goto L_00326718;
    case 294u: goto L_0032672C;
    case 295u: goto L_00326748;
    case 296u: goto L_0032675C;
    case 297u: goto L_00326768;
    case 298u: goto L_00326780;
    case 299u: goto L_00326794;
    case 300u: goto L_003267B8;
    case 301u: goto L_003267F0;
    case 302u: goto L_00326810;
    case 303u: goto L_00326834;
    case 304u: goto L_00326840;
    case 305u: goto L_00326854;
    case 306u: goto L_00326880;
    case 307u: goto L_003268D0;
    case 308u: goto L_003268E8;
    case 309u: goto L_00326900;
    case 310u: goto L_00326910;
    case 311u: goto L_00326924;
    case 312u: goto L_00326954;
    case 313u: goto L_00326970;
    case 314u: goto L_003269A4;
    case 315u: goto L_003269B0;
    case 316u: goto L_003269C8;
    case 317u: goto L_003269E0;
    case 318u: goto L_003269F0;
    case 319u: goto L_00326A10;
    case 320u: goto L_00326A20;
    case 321u: goto L_00326A70;
    case 322u: goto L_00326A84;
    case 323u: goto L_00326ADC;
    case 324u: goto L_00326AF0;
    case 325u: goto L_00326B0C;
    case 326u: goto L_00326B3C;
    case 327u: goto L_00326B50;
    case 328u: goto L_00326BA4;
    case 329u: goto L_00326BBC;
    case 330u: goto L_00326BD4;
    case 331u: goto L_00326BF0;
    case 332u: goto L_00326C0C;
    case 333u: goto L_00326C14;
    case 334u: goto L_00326C28;
    case 335u: goto L_00326C38;
    case 336u: goto L_00326C58;
    case 337u: goto L_00326C64;
    case 338u: goto L_00326C6C;
    case 339u: goto L_00326C74;
    case 340u: goto L_00326C80;
    case 341u: goto L_00326C94;
    case 342u: goto L_00326CA4;
    case 343u: goto L_00326CC0;
    case 344u: goto L_00326CE0;
    case 345u: goto L_00326D3C;
    case 346u: goto L_00326D48;
    case 347u: goto L_00326DB4;
    case 348u: goto L_00326DC4;
    case 349u: goto L_00326E08;
    case 350u: goto L_00326E18;
    case 351u: goto L_00326E24;
    case 352u: goto L_00326E78;
    case 353u: goto L_00326E88;
    case 354u: goto L_00326E94;
    case 355u: goto L_00326EB0;
    case 356u: goto L_00326EC8;
    case 357u: goto L_00326ED8;
    case 358u: goto L_00326F08;
    case 359u: goto L_00326F54;
    case 360u: goto L_00326F80;
    case 361u: goto L_00326FE4;
    case 362u: goto L_0032700C;
    case 363u: goto L_00327034;
    case 364u: goto L_0032705C;
    case 365u: goto L_00327084;
    case 366u: goto L_00327094;
    case 367u: goto L_003270A0;
    case 368u: goto L_003270AC;
    case 369u: goto L_003270B8;
    case 370u: goto L_003270C4;
    case 371u: goto L_003270DC;
    case 372u: goto L_00327100;
    case 373u: goto L_00327118;
    case 374u: goto L_00327148;
    case 375u: goto L_00327160;
    case 376u: goto L_00327178;
    case 377u: goto L_00327194;
    case 378u: goto L_003271A8;
    case 379u: goto L_003271B8;
    case 380u: goto L_003271C8;
    case 381u: goto L_003271D8;
    case 382u: goto L_003271F8;
    case 383u: goto L_00327214;
    case 384u: goto L_00327228;
    case 385u: goto L_0032723C;
    case 386u: goto L_0032724C;
    case 387u: goto L_0032725C;
    case 388u: goto L_0032726C;
    case 389u: goto L_00327280;
    case 390u: goto L_003272A4;
    case 391u: goto L_003272B4;
    case 392u: goto L_003272BC;
    case 393u: goto L_003272D4;
    case 394u: goto L_003272E0;
    case 395u: goto L_00327300;
    case 396u: goto L_00327324;
    case 397u: goto L_00327338;
    case 398u: goto L_0032734C;
    case 399u: goto L_00327370;
    case 400u: goto L_00327384;
    case 401u: goto L_00327388;
    case 402u: goto L_003273C8;
    case 403u: goto L_00327444;
    case 404u: goto L_00327460;
    case 405u: goto L_00327474;
    case 406u: goto L_003274C0;
    case 407u: goto L_003274E0;
    case 408u: goto L_003274F4;
    case 409u: goto L_00327508;
    case 410u: goto L_0032752C;
    case 411u: goto L_00327540;
    case 412u: goto L_003275A0;
    case 413u: goto L_003275C4;
    case 414u: goto L_003275D8;
    case 415u: goto L_003275F0;
    case 416u: goto L_00327610;
    case 417u: goto L_00327624;
    case 418u: goto L_0032763C;
    case 419u: goto L_00327654;
    case 420u: goto L_00327670;
    case 421u: goto L_00327684;
    case 422u: goto L_0032769C;
    case 423u: goto L_003276B0;
    case 424u: goto L_003276C4;
    case 425u: goto L_003276DC;
    case 426u: goto L_003276F0;
    case 427u: goto L_00327704;
    case 428u: goto L_0032771C;
    case 429u: goto L_00327730;
    case 430u: goto L_00327780;
    case 431u: goto L_003277A0;
    case 432u: goto L_003277B8;
    case 433u: goto L_003277E0;
    case 434u: goto L_003277F0;
    case 435u: goto L_00327804;
    case 436u: goto L_00327814;
    case 437u: goto L_00327878;
    case 438u: goto L_003278A4;
    case 439u: goto L_003278CC;
    case 440u: goto L_003278E0;
    case 441u: goto L_003278F4;
    case 442u: goto L_00327920;
    case 443u: goto L_00327934;
    case 444u: goto L_003279BC;
    case 445u: goto L_003279D0;
    case 446u: goto L_00327AB8;
    case 447u: goto L_00327AD8;
    case 448u: goto L_00327B00;
    case 449u: goto L_00327B30;
    case 450u: goto L_00327B88;
    case 451u: goto L_00327B98;
    case 452u: goto L_00327BB4;
    case 453u: goto L_00327BE4;
    case 454u: goto L_00327C3C;
    case 455u: goto L_00327C4C;
    case 456u: goto L_00327C6C;
    case 457u: goto L_00327C9C;
    case 458u: goto L_00327CF8;
    case 459u: goto L_00327D08;
    case 460u: goto L_00327D40;
    case 461u: goto L_00327D64;
    case 462u: goto L_00327D90;
    case 463u: goto L_00327DDC;
    case 464u: goto L_00327DFC;
    case 465u: goto L_00327E1C;
    case 466u: goto L_00327E24;
    case 467u: goto L_00327E58;
    case 468u: goto L_00327E78;
    case 469u: goto L_00327E98;
    case 470u: goto L_00327EA8;
    case 471u: goto L_00327EE4;
    case 472u: goto L_00327F04;
    case 473u: goto L_00327F24;
    case 474u: goto L_00327F6C;
    case 475u: goto L_00327F98;
    case 476u: goto L_00327FA0;
    case 477u: goto L_00327FD0;
    case 478u: goto L_00327FE0;
    case 479u: goto L_00327FE8;
    default: bad_entry(c, 0x00324000u); return;
    }
L_00324000:
    set32(c.r[3], c.r[3].w[0] - 1u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00323FFCu | kUnwind; return; } [[clang::musttail]] return unit_0088(c, 632u, depth); } }
L_00324018:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[3].d[0] = c.r[16].d[0] & 255ull;  if (t) { goto L_00324030; } }
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032402Cu); set32(c.r[4], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0009(c, 233u, depth + 1u); else { c.pc = 0x00127BE8u; return; } if (c.pc != 0x0032402Cu) [[unlikely]] return; }
L_0032402C:
    c.r[3].d[0] = c.r[16].d[0] & 255ull;
    c.budget -= 1;
L_00324030:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 2u);  if (t) { goto L_00324048; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00324044u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0089(c, 65u, depth + 1u); else { c.pc = 0x00324830u; return; } if (c.pc != 0x00324044u) [[unlikely]] return; }
L_00324044:
    set32(c.r[2], 0u + 2u);
    c.budget -= 1;
L_00324048:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != c.r[2].d[0];  if (t) { goto L_00324070; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00324058u);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x00324058u) [[unlikely]] return; }
L_00324058:
    c.r[1].d[0] = 0ull | 43340ull;
    set32(c.r[5], c.r[29].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00324068u); set32(c.r[4], c.r[2].w[0] + c.r[1].w[0]);  if (depth < kMaxDepth) unit_0009(c, 233u, depth + 1u); else { c.pc = 0x00127BE8u; return; } if (c.pc != 0x00324068u) [[unlikely]] return; }
L_00324068:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_0032408C; } }
L_00324070:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00324078u);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x00324078u) [[unlikely]] return; }
L_00324078:
    c.r[1].d[0] = 0ull | 43560ull;
    set32(c.r[5], c.r[29].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00324088u); set32(c.r[4], c.r[2].w[0] + c.r[1].w[0]);  if (depth < kMaxDepth) unit_0009(c, 233u, depth + 1u); else { c.pc = 0x00127BE8u; return; } if (c.pc != 0x00324088u) [[unlikely]] return; }
L_00324088:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_0032408C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003240A0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[3].d[0] = c.r[6].d[0] & 255ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[2], 0u + 1u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003240CC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003240CCu);  if (depth < kMaxDepth) unit_0089(c, 73u, depth + 1u); else { c.pc = 0x00324930u; return; } if (c.pc != 0x003240CCu) [[unlikely]] return; }
L_003240CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003240D4u);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x003240D4u) [[unlikely]] return; }
L_003240D4:
    set32(c.r[3], c.r[17].w[0] << 4);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[3], c.r[3].w[0] - c.r[17].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[1], c.r[3].w[0] + c.r[1].w[0]);
    st16((c.r[1].w[0] - 24576u), static_cast<std::uint16_t>(c.r[16].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00324110:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00324124u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x00324124u) [[unlikely]] return; }
L_00324124:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.r[2].d[0] = ld16((c.r[1].w[0] - 24836u));
    c.budget -= 5;
    { const bool t = c.r[16].d[0] != c.r[2].d[0];  if (t) { goto L_00324140; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003242AC; } }
L_00324140:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00324148u);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x00324148u) [[unlikely]] return; }
L_00324148:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.r[2].d[0] = ld16((c.r[1].w[0] - 24834u));
    c.budget -= 5;
    { const bool t = c.r[16].d[0] != c.r[2].d[0];  if (t) { goto L_00324164; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_003242AC; } }
L_00324164:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032416Cu);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x0032416Cu) [[unlikely]] return; }
L_0032416C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.r[2].d[0] = ld16((c.r[1].w[0] - 24832u));
    c.budget -= 5;
    { const bool t = c.r[16].d[0] != c.r[2].d[0];  if (t) { goto L_00324188; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 2u);  if (t) { goto L_003242AC; } }
L_00324188:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00324190u);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x00324190u) [[unlikely]] return; }
L_00324190:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.r[2].d[0] = ld16((c.r[1].w[0] - 24830u));
    c.budget -= 5;
    { const bool t = c.r[16].d[0] != c.r[2].d[0];  if (t) { goto L_003241AC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 2u);  if (t) { goto L_003242AC; } }
L_003241AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003241B4u);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x003241B4u) [[unlikely]] return; }
L_003241B4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.r[2].d[0] = ld16((c.r[1].w[0] - 24828u));
    c.budget -= 5;
    { const bool t = c.r[16].d[0] != c.r[2].d[0];  if (t) { goto L_003241D0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 3u);  if (t) { goto L_003242AC; } }
L_003241D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003241D8u);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x003241D8u) [[unlikely]] return; }
L_003241D8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.r[2].d[0] = ld16((c.r[1].w[0] - 24826u));
    c.budget -= 5;
    { const bool t = c.r[16].d[0] != c.r[2].d[0];  if (t) { goto L_003241F4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 3u);  if (t) { goto L_003242AC; } }
L_003241F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003241FCu);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x003241FCu) [[unlikely]] return; }
L_003241FC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.r[2].d[0] = ld16((c.r[1].w[0] - 24824u));
    c.budget -= 5;
    { const bool t = c.r[16].d[0] != c.r[2].d[0];  if (t) { goto L_00324218; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 4u);  if (t) { goto L_003242AC; } }
L_00324218:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00324220u);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x00324220u) [[unlikely]] return; }
L_00324220:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.r[2].d[0] = ld16((c.r[1].w[0] - 24822u));
    c.budget -= 5;
    { const bool t = c.r[16].d[0] != c.r[2].d[0];  if (t) { goto L_0032423C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 5u);  if (t) { goto L_003242AC; } }
L_0032423C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00324244u);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x00324244u) [[unlikely]] return; }
L_00324244:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.r[2].d[0] = ld16((c.r[1].w[0] - 24820u));
    c.budget -= 5;
    { const bool t = c.r[16].d[0] != c.r[2].d[0];  if (t) { goto L_00324260; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 6u);  if (t) { goto L_003242AC; } }
L_00324260:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00324268u);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x00324268u) [[unlikely]] return; }
L_00324268:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.r[2].d[0] = ld16((c.r[1].w[0] - 24818u));
    c.budget -= 5;
    { const bool t = c.r[16].d[0] != c.r[2].d[0];  if (t) { goto L_00324284; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 7u);  if (t) { goto L_003242AC; } }
L_00324284:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032428Cu);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x0032428Cu) [[unlikely]] return; }
L_0032428C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.r[2].d[0] = ld16((c.r[1].w[0] - 24816u));
    c.budget -= 5;
    { const bool t = c.r[16].d[0] != c.r[2].d[0];  if (t) { goto L_003242A8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 8u);  if (t) { goto L_003242AC; } }
L_003242A8:
    set32(c.r[2], 0u + 255u);
    c.budget -= 1;
L_003242AC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003242C0:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 9;
    { const bool t = c.r[19].d[0] != 0ull; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_003242EC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00324564; } }
L_003242EC:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003242FC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  if (t) { goto L_00324568; } }
L_003242FC:
    st8((c.r[19].w[0]), static_cast<std::uint8_t>(0u));
    c.r[16].d[0] = c.r[4].d[0] & 65535ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032430Cu); st8((c.r[18].w[0]), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x0032430Cu) [[unlikely]] return; }
L_0032430C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.r[2].d[0] = ld16((c.r[1].w[0] - 24836u));
    c.budget -= 5;
    { const bool t = c.r[16].d[0] != c.r[2].d[0]; set32(c.r[4], 0u + 264u);  if (t) { goto L_00324328; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], 0u + 1u);  if (t) { goto L_00324490; } }
L_00324328:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00324330u);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x00324330u) [[unlikely]] return; }
L_00324330:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.r[2].d[0] = ld16((c.r[1].w[0] - 24834u));
    c.budget -= 5;
    { const bool t = c.r[16].d[0] != c.r[2].d[0]; set32(c.r[4], 0u + 265u);  if (t) { goto L_0032434C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], 0u + 2u);  if (t) { goto L_00324490; } }
L_0032434C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00324354u);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x00324354u) [[unlikely]] return; }
L_00324354:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.r[2].d[0] = ld16((c.r[1].w[0] - 24832u));
    c.budget -= 5;
    { const bool t = c.r[16].d[0] == c.r[2].d[0]; set32(c.r[4], 0u + 266u);  if (t) { goto L_00324388; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00324370u);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x00324370u) [[unlikely]] return; }
L_00324370:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.r[2].d[0] = ld16((c.r[1].w[0] - 24830u));
    c.budget -= 5;
    { const bool t = c.r[16].d[0] != c.r[2].d[0];  if (t) { goto L_00324390; } }
    set32(c.r[4], 0u + 266u);
    c.budget -= 1;
L_00324388:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], 0u + 1u);  if (t) { goto L_00324490; } }
L_00324390:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00324398u);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x00324398u) [[unlikely]] return; }
L_00324398:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.r[2].d[0] = ld16((c.r[1].w[0] - 24828u));
    c.budget -= 5;
    { const bool t = c.r[16].d[0] == c.r[2].d[0]; set32(c.r[4], 0u + 267u);  if (t) { goto L_003243CC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003243B4u);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x003243B4u) [[unlikely]] return; }
L_003243B4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.r[2].d[0] = ld16((c.r[1].w[0] - 24826u));
    c.budget -= 5;
    { const bool t = c.r[16].d[0] != c.r[2].d[0];  if (t) { goto L_003243D4; } }
    set32(c.r[4], 0u + 267u);
    c.budget -= 1;
L_003243CC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], 0u + 2u);  if (t) { goto L_00324490; } }
L_003243D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003243DCu);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x003243DCu) [[unlikely]] return; }
L_003243DC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.r[2].d[0] = ld16((c.r[1].w[0] - 24824u));
    c.budget -= 5;
    { const bool t = c.r[16].d[0] != c.r[2].d[0]; set32(c.r[4], 0u + 268u);  if (t) { goto L_003243F8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], 0u + 1u);  if (t) { goto L_00324490; } }
L_003243F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00324400u);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x00324400u) [[unlikely]] return; }
L_00324400:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.r[2].d[0] = ld16((c.r[1].w[0] - 24818u));
    c.budget -= 5;
    { const bool t = c.r[16].d[0] != c.r[2].d[0]; set32(c.r[4], 0u + 271u);  if (t) { goto L_0032441C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], 0u + 1u);  if (t) { goto L_00324490; } }
L_0032441C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00324424u);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x00324424u) [[unlikely]] return; }
L_00324424:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.r[2].d[0] = ld16((c.r[1].w[0] - 24822u));
    c.budget -= 5;
    { const bool t = c.r[16].d[0] != c.r[2].d[0]; set32(c.r[4], 0u + 269u);  if (t) { goto L_00324440; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], 0u + 1u);  if (t) { goto L_00324490; } }
L_00324440:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00324448u);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x00324448u) [[unlikely]] return; }
L_00324448:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.r[2].d[0] = ld16((c.r[1].w[0] - 24820u));
    c.budget -= 5;
    { const bool t = c.r[16].d[0] != c.r[2].d[0]; set32(c.r[4], 0u + 270u);  if (t) { goto L_00324464; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], 0u + 1u);  if (t) { goto L_00324490; } }
L_00324464:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032446Cu);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x0032446Cu) [[unlikely]] return; }
L_0032446C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.r[2].d[0] = ld16((c.r[1].w[0] - 24816u));
    c.budget -= 5;
    { const bool t = c.r[16].d[0] != c.r[2].d[0]; set32(c.r[4], 0u + 272u);  if (t) { goto L_00324488; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], 0u + 1u);  if (t) { goto L_00324490; } }
L_00324488:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00324564; } }
L_00324490:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00324498u);  if (depth < kMaxDepth) unit_000B(c, 461u, depth + 1u); else { c.pc = 0x0012FD60u; return; } if (c.pc != 0x00324498u) [[unlikely]] return; }
L_00324498:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003244A4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 237u, depth + 1u); else { c.pc = 0x00127D00u; return; } if (c.pc != 0x003244A4u) [[unlikely]] return; }
L_003244A4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_003244DC; } }
L_003244AC:
    set32(c.r[4], c.r[6].w[0] + c.r[29].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    set32(c.r[5], c.r[4].w[0] + 80u);
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    c.r[3].d[0] = c.r[4].sd[0] < 97ll ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; c.r[1].d[0] = c.r[4].sd[0] < 123ll ? 1ull : 0ull;  if (t) { goto L_003244D8; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[3], c.r[4].w[0] - 32u);  if (t) { goto L_003244D8; } }
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 1;
L_003244D8:
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.budget -= 1;
L_003244DC:
    c.r[1].d[0] = c.r[2].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[3], c.r[16].w[0] + c.r[6].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003244ACu | kUnwind; return; } goto L_003244AC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003244F0u); set32(c.r[4], 0u + 399u);  if (depth < kMaxDepth) unit_000B(c, 461u, depth + 1u); else { c.pc = 0x0012FD60u; return; } if (c.pc != 0x003244F0u) [[unlikely]] return; }
L_003244F0:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003244FCu); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_000A(c, 19u, depth + 1u); else { c.pc = 0x00128400u; return; } if (c.pc != 0x003244FCu) [[unlikely]] return; }
L_003244FC:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != 0ull; set32(c.r[5], c.r[29].w[0] + 80u);  if (t) { goto L_0032451C; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00324514u); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0009(c, 233u, depth + 1u); else { c.pc = 0x00127BE8u; return; } if (c.pc != 0x00324514u) [[unlikely]] return; }
L_00324514:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00324564; } }
L_0032451C:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != c.r[5].d[0]; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_00324534; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032452Cu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 233u, depth + 1u); else { c.pc = 0x00127BE8u; return; } if (c.pc != 0x0032452Cu) [[unlikely]] return; }
L_0032452C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00324564; } }
L_00324534:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032453Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 233u, depth + 1u); else { c.pc = 0x00127BE8u; return; } if (c.pc != 0x0032453Cu) [[unlikely]] return; }
L_0032453C:
    set32(c.r[16], c.r[16].w[0] - 1u);
    set32(c.r[2], 0u + 32u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_00324554; } }
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_00324554:
    set32(c.r[5], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00324560u); st8((c.r[16].w[0]), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0009(c, 233u, depth + 1u); else { c.pc = 0x00127BE8u; return; } if (c.pc != 0x00324560u) [[unlikely]] return; }
L_00324560:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00324564:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_00324568:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_00324580:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[2], 0u + 2u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const bool t = c.r[4].d[0] != c.r[2].d[0]; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00324604; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003245A4u); c.r[17].d[0] = c.r[16].d[0] & 65535ull;  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x003245A4u) [[unlikely]] return; }
L_003245A4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.r[2].d[0] = ld16((c.r[1].w[0] - 24832u));
    c.budget -= 5;
    { const bool t = c.r[17].d[0] != c.r[2].d[0];  if (t) { goto L_003245D0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003245C0u);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x003245C0u) [[unlikely]] return; }
L_003245C0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = ld16((c.r[1].w[0] - 24830u));  if (t) { goto L_0032467C; } }
L_003245D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003245D8u);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x003245D8u) [[unlikely]] return; }
L_003245D8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.r[2].d[0] = ld16((c.r[1].w[0] - 24830u));
    c.budget -= 5;
    { const bool t = c.r[16].d[0] != c.r[2].d[0];  if (t) { goto L_00324678; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003245F4u);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x003245F4u) [[unlikely]] return; }
L_003245F4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = ld16((c.r[1].w[0] - 24832u));  if (t) { goto L_0032467C; } }
L_00324604:
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 25500u);  if (t) { goto L_0032467C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00324618u); c.r[17].d[0] = c.r[16].d[0] & 65535ull;  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x00324618u) [[unlikely]] return; }
L_00324618:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.r[2].d[0] = ld16((c.r[1].w[0] - 24828u));
    c.budget -= 5;
    { const bool t = c.r[17].d[0] != c.r[2].d[0];  if (t) { goto L_00324644; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00324634u);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x00324634u) [[unlikely]] return; }
L_00324634:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = ld16((c.r[1].w[0] - 24826u));  if (t) { goto L_0032467C; } }
L_00324644:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032464Cu);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x0032464Cu) [[unlikely]] return; }
L_0032464C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.r[2].d[0] = ld16((c.r[1].w[0] - 24826u));
    c.budget -= 5;
    { const bool t = c.r[16].d[0] != c.r[2].d[0];  if (t) { goto L_00324678; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00324668u);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x00324668u) [[unlikely]] return; }
L_00324668:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = ld16((c.r[1].w[0] - 24828u));  if (t) { goto L_0032467C; } }
L_00324678:
    set32(c.r[2], 0u + 25500u);
    c.budget -= 1;
L_0032467C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00324690:
    set32(c.r[29], c.r[29].w[0] - 96u);
    set32(c.r[2], c.r[4].w[0] << 4);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[2], c.r[2].w[0] - c.r[19].w[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] & 255ull;
    set32(c.r[18], 0u + 9u);
    set32(c.r[16], c.r[2].w[0] << 4);
    c.budget -= 13;
L_003246C4:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[19].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 3u);  if (t) { goto L_0032473C; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != c.r[2].d[0];  if (t) { goto L_00324738; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003246E4u);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x003246E4u) [[unlikely]] return; }
L_003246E4:
    set32(c.r[3], c.r[18].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[18].w[0]);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[18].w[0]);
    set32(c.r[3], c.r[3].w[0] << 1);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00324700u); set32(c.r[20], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x00324700u) [[unlikely]] return; }
L_00324700:
    set32(c.r[5], c.r[18].w[0] - 1u);
    c.r[1].d[0] = 0ull | 42900ull;
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[20].w[0] + c.r[1].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.r[1].d[0] = 0ull | 42900ull;
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00324730u); set32(c.r[5], c.r[2].w[0] + c.r[1].w[0]);  if (depth < kMaxDepth) unit_0009(c, 233u, depth + 1u); else { c.pc = 0x00127BE8u; return; } if (c.pc != 0x00324730u) [[unlikely]] return; }
L_00324730:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[18], c.r[18].w[0] - 1u);  if (t) { goto L_00324808; } }
L_00324738:
    set32(c.r[2], 0u + 3u);
    c.budget -= 1;
L_0032473C:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_003247A8; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != c.r[2].d[0];  if (t) { goto L_003247A8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00324754u);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x00324754u) [[unlikely]] return; }
L_00324754:
    set32(c.r[3], c.r[18].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[18].w[0]);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[18].w[0]);
    set32(c.r[3], c.r[3].w[0] << 1);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00324770u); set32(c.r[20], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x00324770u) [[unlikely]] return; }
L_00324770:
    set32(c.r[5], c.r[18].w[0] - 1u);
    c.r[1].d[0] = 0ull | 43120ull;
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[20].w[0] + c.r[1].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.r[1].d[0] = 0ull | 43120ull;
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003247A0u); set32(c.r[5], c.r[2].w[0] + c.r[1].w[0]);  if (depth < kMaxDepth) unit_0009(c, 233u, depth + 1u); else { c.pc = 0x00127BE8u; return; } if (c.pc != 0x003247A0u) [[unlikely]] return; }
L_003247A0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00324804; } }
L_003247A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003247B0u);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x003247B0u) [[unlikely]] return; }
L_003247B0:
    set32(c.r[3], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[2], c.r[18].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003247D0u); set32(c.r[20], c.r[3].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x003247D0u) [[unlikely]] return; }
L_003247D0:
    set32(c.r[5], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[3], c.r[18].w[0] - 1u);
    set32(c.r[2], c.r[3].w[0] << 2);
    c.r[1].d[0] = 0ull | 40740ull;
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], c.r[20].w[0] + c.r[1].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    c.r[1].d[0] = 0ull | 40740ull;
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[5].w[0] + c.r[2].w[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00324804u); set32(c.r[5], c.r[2].w[0] + c.r[1].w[0]);  if (depth < kMaxDepth) unit_0009(c, 233u, depth + 1u); else { c.pc = 0x00127BE8u; return; } if (c.pc != 0x00324804u) [[unlikely]] return; }
L_00324804:
    set32(c.r[18], c.r[18].w[0] - 1u);
    c.budget -= 1;
L_00324808:
    c.budget -= 2;
    { const bool t = c.r[18].sd[0] > 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003246C4u | kUnwind; return; } goto L_003246C4; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_00324830:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[16], 0u + 9u);
    c.budget -= 7;
L_0032484C:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != c.r[2].d[0];  if (t) { goto L_003248B4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00324860u);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x00324860u) [[unlikely]] return; }
L_00324860:
    set32(c.r[3], c.r[16].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[3], c.r[3].w[0] << 1);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032487Cu); set32(c.r[18], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x0032487Cu) [[unlikely]] return; }
L_0032487C:
    set32(c.r[5], c.r[16].w[0] - 1u);
    c.r[1].d[0] = 0ull | 43340ull;
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[18].w[0] + c.r[1].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.r[1].d[0] = 0ull | 43340ull;
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003248ACu); set32(c.r[5], c.r[2].w[0] + c.r[1].w[0]);  if (depth < kMaxDepth) unit_0009(c, 233u, depth + 1u); else { c.pc = 0x00127BE8u; return; } if (c.pc != 0x003248ACu) [[unlikely]] return; }
L_003248AC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[16].w[0] - 1u);  if (t) { goto L_0032490C; } }
L_003248B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003248BCu);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x003248BCu) [[unlikely]] return; }
L_003248BC:
    set32(c.r[3], c.r[16].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[3], c.r[3].w[0] << 1);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003248D8u); set32(c.r[18], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x003248D8u) [[unlikely]] return; }
L_003248D8:
    set32(c.r[5], c.r[16].w[0] - 1u);
    c.r[1].d[0] = 0ull | 43560ull;
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[18].w[0] + c.r[1].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.r[1].d[0] = 0ull | 43560ull;
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00324908u); set32(c.r[5], c.r[2].w[0] + c.r[1].w[0]);  if (depth < kMaxDepth) unit_0009(c, 233u, depth + 1u); else { c.pc = 0x00127BE8u; return; } if (c.pc != 0x00324908u) [[unlikely]] return; }
L_00324908:
    set32(c.r[16], c.r[16].w[0] - 1u);
    c.budget -= 1;
L_0032490C:
    c.budget -= 2;
    { const bool t = c.r[16].sd[0] > 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0032484Cu | kUnwind; return; } goto L_0032484C; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00324930:
    set32(c.r[29], c.r[29].w[0] - 80u);
    set32(c.r[2], c.r[4].w[0] << 4);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] - c.r[4].w[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    set32(c.r[19], c.r[2].w[0] << 4);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], 0u + 9u);
    c.budget -= 10;
L_00324958:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00324960u); set32(c.r[18], c.r[16].w[0] << 1);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x00324960u) [[unlikely]] return; }
L_00324960:
    set32(c.r[2], c.r[19].w[0] + c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00324978u); c.r[17].d[0] = ld16((c.r[1].w[0] - 24578u));  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x00324978u) [[unlikely]] return; }
L_00324978:
    set32(c.r[3], c.r[19].w[0] + c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[3], c.r[3].w[0] + c.r[18].w[0]);
    set32(c.r[16], c.r[16].w[0] - 1u);
    set32(c.r[1], c.r[3].w[0] + c.r[1].w[0]);
    c.budget -= 7;
    { const bool t = c.r[16].sd[0] > 0; st16((c.r[1].w[0] - 24576u), static_cast<std::uint16_t>(c.r[17].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00324958u | kUnwind; return; } goto L_00324958; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003249B0:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st16((c.r[29].w[0] + 140u), static_cast<std::uint16_t>(c.r[5].w[0]));
    st16((c.r[29].w[0] + 142u), static_cast<std::uint16_t>(c.r[6].w[0]));
    set32(c.r[2], c.r[18].w[0] << 1);
    c.budget -= 15;
L_003249EC:
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 32767u);
    set32(c.r[16], c.r[2].w[0] + 7937u);
    set32(c.r[22], c.r[2].w[0] + 7941u);
    set32(c.r[2], 0u + 2u);
    c.budget -= 5;
L_00324A00:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 3u);  if (t) { goto L_00324A30; } }
    set32(c.r[2], c.r[17].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00324A18u); c.r[21].d[0] = ld16((c.r[2].w[0] + 140u));  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x00324A18u) [[unlikely]] return; }
L_00324A18:
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = ld16((c.r[2].w[0]));
    c.budget -= 4;
    { const bool t = c.r[21].d[0] != c.r[2].d[0];  if (t) { goto L_00324A5C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[19], c.r[19].w[0] + 1u);  if (t) { goto L_00324A5C; } }
L_00324A30:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] != c.r[2].d[0];  if (t) { goto L_00324A5C; } }
    set32(c.r[2], c.r[17].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00324A48u); c.r[21].d[0] = ld16((c.r[2].w[0] + 140u));  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x00324A48u) [[unlikely]] return; }
L_00324A48:
    set32(c.r[2], c.r[22].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = ld16((c.r[2].w[0]));
    c.budget -= 4;
    { const bool t = c.r[21].d[0] != c.r[2].d[0];  if (t) { goto L_00324A5C; } }
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.budget -= 1;
L_00324A5C:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 2u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00324A00u | kUnwind; return; } goto L_00324A00; } }
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[2].d[0] = c.r[18].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[18].w[0] << 1);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003249ECu | kUnwind; return; } goto L_003249EC; } }
    c.r[2].d[0] = c.r[19].d[0] ^ 2ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_00324AB0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[5], 0u + 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00324AC8u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 29u, depth + 1u); else { c.pc = 0x00140690u; return; } if (c.pc != 0x00324AC8u) [[unlikely]] return; }
L_00324AC8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] + 20896u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00324AD8u); st32((c.r[16].w[0] + 8u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0010(c, 59u, depth + 1u); else { c.pc = 0x00140BF0u; return; } if (c.pc != 0x00324AD8u) [[unlikely]] return; }
L_00324AD8:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 3840u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00324AECu); st32((c.r[29].w[0] + 44u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x00324AECu) [[unlikely]] return; }
L_00324AEC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00324AF4u); set32(c.r[4], 0u + 192u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00324AF4u) [[unlikely]] return; }
L_00324AF4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00324B04; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00324B04u);  if (depth < kMaxDepth) unit_0089(c, 101u, depth + 1u); else { c.pc = 0x00324C80u; return; } if (c.pc != 0x00324B04u) [[unlikely]] return; }
L_00324B04:
    st32((c.r[16].w[0] + 12u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00324B10u); set32(c.r[4], ld32((c.r[29].w[0] + 44u)));  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x00324B10u) [[unlikely]] return; }
L_00324B10:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00324B30:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00324BAC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] + 20896u);
    st32((c.r[17].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00324B88; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00324B84; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00324B84; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00324B84u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00324B84u) [[unlikely]] return; }
L_00324B84:
    st32((c.r[17].w[0] + 12u), 0u);
    c.budget -= 1;
L_00324B88:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00324B94u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0010(c, 31u, depth + 1u); else { c.pc = 0x00140700u; return; } if (c.pc != 0x00324B94u) [[unlikely]] return; }
L_00324B94:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00324BB0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00324BACu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x00324BACu) [[unlikely]] return; }
L_00324BAC:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00324BB0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00324BD0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00324BE0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 44u)));
    c.budget -= 9;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00324C04u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00324C04u) [[unlikely]] return; }
L_00324C04:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00324C64; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00324C30; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00324C30; } }
    set32(c.r[25], ld32((c.r[16].w[0] + 8u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00324C30u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00324C30u) [[unlikely]] return; }
L_00324C30:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[4], 0u + 1u);
    set32(c.r[2], ld32((c.r[1].w[0] + 3840u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00324C44u); st32((c.r[29].w[0] + 44u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x00324C44u) [[unlikely]] return; }
L_00324C44:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00324C4Cu); set32(c.r[4], 0u + 24u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00324C4Cu) [[unlikely]] return; }
L_00324C4C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00324C5C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00324C5Cu);  if (depth < kMaxDepth) unit_0057(c, 96u, depth + 1u); else { c.pc = 0x0025CA50u; return; } if (c.pc != 0x00324C5Cu) [[unlikely]] return; }
L_00324C5C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00324C64u); set32(c.r[4], ld32((c.r[29].w[0] + 44u)));  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x00324C64u) [[unlikely]] return; }
L_00324C64:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00324C80:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[5].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00324C98u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 298u, depth + 1u); else { c.pc = 0x0012E440u; return; } if (c.pc != 0x00324C98u) [[unlikely]] return; }
L_00324C98:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[3].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 20800u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    st32((c.r[16].w[0] + 28u), 0u);
    st32((c.r[16].w[0] + 44u), 0u);
    st32((c.r[16].w[0] + 180u), 0u);
    st8((c.r[16].w[0] + 184u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 185u), static_cast<std::uint8_t>(0u));
    c.budget -= 9;
L_00324CBC:
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[2].w[0] + 32u), 0u);
    c.r[2].d[0] = c.r[3].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00324CBCu | kUnwind; return; } goto L_00324CBC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00324CE0u);  if (depth < kMaxDepth) unit_0010(c, 59u, depth + 1u); else { c.pc = 0x00140BF0u; return; } if (c.pc != 0x00324CE0u) [[unlikely]] return; }
L_00324CE0:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 3840u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00324CF4u); st32((c.r[29].w[0] + 44u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x00324CF4u) [[unlikely]] return; }
L_00324CF4:
    set32(c.r[2], 0u + 15811u);
    set32(c.r[3], 0u + 13312u);
    st16((c.r[29].w[0] + 42u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x63500000u);
    st16((c.r[29].w[0] + 40u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[4], c.r[4].w[0] - 13104u);
    set32(c.r[5], c.r[29].w[0] + 40u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00324D1Cu); c.r[6].d[0] = c.r[2].d[0] | 20566ull;  if (depth < kMaxDepth) unit_0087(c, 54u, depth + 1u); else { c.pc = 0x0031C5D0u; return; } if (c.pc != 0x00324D1Cu) [[unlikely]] return; }
L_00324D1C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00324D24u); set32(c.r[4], ld32((c.r[29].w[0] + 44u)));  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x00324D24u) [[unlikely]] return; }
L_00324D24:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00324D40:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const bool t = c.r[18].d[0] == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00324F98; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] + 20800u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00324D74u); st32((c.r[18].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x00324D74u) [[unlikely]] return; }
L_00324D74:
    c.r[1].d[0] = 0ull | 35856ull;
    set32(c.r[16], c.r[2].w[0] + c.r[1].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 4096u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00324D88u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 104u, depth + 1u); else { c.pc = 0x0012CEC0u; return; } if (c.pc != 0x00324D88u) [[unlikely]] return; }
L_00324D88:
    set32(c.r[3], ld32((c.r[18].w[0] + 32u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[3], ld32((c.r[3].w[0] + 284u)));
    st32((c.r[16].w[0] + 4124u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 36u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 284u)));
    st32((c.r[2].w[0] + 360u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 40u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 284u)));
    st8((c.r[2].w[0] + 356u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[6], ld32((c.r[16].w[0] + 4124u)));
    set32(c.r[4], ld32((c.r[1].w[0] - 27616u)));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00324DC0u); set32(c.r[5], 0u + 301u);  if (depth < kMaxDepth) unit_0058(c, 37u, depth + 1u); else { c.pc = 0x00260310u; return; } if (c.pc != 0x00324DC0u) [[unlikely]] return; }
L_00324DC0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[5], 0u + 400u);
    set32(c.r[4], ld32((c.r[1].w[0] - 27616u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00324DD4u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0058(c, 37u, depth + 1u); else { c.pc = 0x00260310u; return; } if (c.pc != 0x00324DD4u) [[unlikely]] return; }
L_00324DD4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[5], 0u + 401u);
    set32(c.r[4], ld32((c.r[1].w[0] - 27616u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00324DE8u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0058(c, 37u, depth + 1u); else { c.pc = 0x00260310u; return; } if (c.pc != 0x00324DE8u) [[unlikely]] return; }
L_00324DE8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[5], 0u + 402u);
    set32(c.r[4], ld32((c.r[1].w[0] - 27616u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00324DFCu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0058(c, 37u, depth + 1u); else { c.pc = 0x00260310u; return; } if (c.pc != 0x00324DFCu) [[unlikely]] return; }
L_00324DFC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[5], 0u + 403u);
    set32(c.r[4], ld32((c.r[1].w[0] - 27616u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00324E10u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0058(c, 37u, depth + 1u); else { c.pc = 0x00260310u; return; } if (c.pc != 0x00324E10u) [[unlikely]] return; }
L_00324E10:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[5], 0u + 406u);
    set32(c.r[4], ld32((c.r[1].w[0] - 27616u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00324E24u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0058(c, 37u, depth + 1u); else { c.pc = 0x00260310u; return; } if (c.pc != 0x00324E24u) [[unlikely]] return; }
L_00324E24:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[5], 0u + 404u);
    set32(c.r[4], ld32((c.r[1].w[0] - 27616u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00324E38u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0058(c, 37u, depth + 1u); else { c.pc = 0x00260310u; return; } if (c.pc != 0x00324E38u) [[unlikely]] return; }
L_00324E38:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[5], 0u + 405u);
    set32(c.r[4], ld32((c.r[1].w[0] - 27616u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00324E4Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0058(c, 37u, depth + 1u); else { c.pc = 0x00260310u; return; } if (c.pc != 0x00324E4Cu) [[unlikely]] return; }
L_00324E4C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00324E54u);  if (depth < kMaxDepth) unit_0084(c, 33u, depth + 1u); else { c.pc = 0x003101F0u; return; } if (c.pc != 0x00324E54u) [[unlikely]] return; }
L_00324E54:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x63500000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00324E60u); c.r[4].d[0] = c.r[2].d[0] | 20566ull;  if (depth < kMaxDepth) unit_0087(c, 60u, depth + 1u); else { c.pc = 0x0031C670u; return; } if (c.pc != 0x00324E60u) [[unlikely]] return; }
L_00324E60:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00324E6Cu); set32(c.r[4], ld32((c.r[1].w[0] + 26392u)));  if (depth < kMaxDepth) unit_002A(c, 144u, depth + 1u); else { c.pc = 0x001A9670u; return; } if (c.pc != 0x00324E6Cu) [[unlikely]] return; }
L_00324E6C:
    set32(c.r[4], ld32((c.r[18].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00324E90; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00324E90; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00324E90u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00324E90u) [[unlikely]] return; }
L_00324E90:
    st32((c.r[18].w[0] + 20u), 0u);
    set32(c.r[4], ld32((c.r[18].w[0] + 24u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00324EB8; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00324EB8; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00324EB8u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00324EB8u) [[unlikely]] return; }
L_00324EB8:
    st32((c.r[18].w[0] + 24u), 0u);
    set32(c.r[4], ld32((c.r[18].w[0] + 28u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00324EE0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00324EE0; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00324EE0u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00324EE0u) [[unlikely]] return; }
L_00324EE0:
    st32((c.r[18].w[0] + 28u), 0u);
    set32(c.r[4], ld32((c.r[18].w[0] + 44u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00324F08; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00324F08; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00324F08u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00324F08u) [[unlikely]] return; }
L_00324F08:
    st32((c.r[18].w[0] + 44u), 0u);
    c.r[19].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_00324F10:
    set32(c.r[2], c.r[19].w[0] << 2);
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 32u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[16], c.r[2].w[0] + 32u);  if (t) { goto L_00324F3C; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00324F3C; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00324F3Cu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00324F3Cu) [[unlikely]] return; }
L_00324F3C:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.r[2].d[0] = c.r[19].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[16].w[0]), 0u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00324F10u | kUnwind; return; } goto L_00324F10; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 180u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00324F70; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00324F70; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00324F70u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00324F70u) [[unlikely]] return; }
L_00324F70:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00324F80u); st32((c.r[18].w[0] + 180u), 0u);  if (depth < kMaxDepth) unit_000B(c, 300u, depth + 1u); else { c.pc = 0x0012E490u; return; } if (c.pc != 0x00324F80u) [[unlikely]] return; }
L_00324F80:
    c.r[2].d[0] = c.r[17].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_00324F9C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00324F98u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x00324F98u) [[unlikely]] return; }
L_00324F98:
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_00324F9C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00324FC0:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00324FE4u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0089(c, 230u, depth + 1u); else { c.pc = 0x00325A50u; return; } if (c.pc != 0x00324FE4u) [[unlikely]] return; }
L_00324FE4:
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[4], 0u + 272u);  if (t) { goto L_00325540; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00324FF8u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00324FF8u) [[unlikely]] return; }
L_00324FF8:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[19].d[0] == 0ull; set32(c.r[4], 0u + 160u);  if (t) { goto L_00325048; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x63500000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00325010u); c.r[4].d[0] = c.r[2].d[0] | 20566ull;  if (depth < kMaxDepth) unit_0087(c, 63u, depth + 1u); else { c.pc = 0x0031C6B0u; return; } if (c.pc != 0x00325010u) [[unlikely]] return; }
L_00325010:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00325018u); c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x00325018u) [[unlikely]] return; }
L_00325018:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00325028u); c.r[4].d[0] = ld8((c.r[1].w[0] - 25576u));  if (depth < kMaxDepth) unit_000B(c, 128u, depth + 1u); else { c.pc = 0x0012D530u; return; } if (c.pc != 0x00325028u) [[unlikely]] return; }
L_00325028:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00325034u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0087(c, 68u, depth + 1u); else { c.pc = 0x0031C750u; return; } if (c.pc != 0x00325034u) [[unlikely]] return; }
L_00325034:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00325040u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 188u, depth + 1u); else { c.pc = 0x0015ED60u; return; } if (c.pc != 0x00325040u) [[unlikely]] return; }
L_00325040:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], 0u + 160u);
    c.budget -= 2;
L_00325048:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00325050u); st32((c.r[18].w[0] + 20u), c.r[19].w[0]);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00325050u) [[unlikely]] return; }
L_00325050:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0032506C; } }
    set32(c.r[7], ld32((c.r[18].w[0] + 20u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], 0u + 3u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032506Cu); set32(c.r[6], 0u + 5u);  if (depth < kMaxDepth) unit_006F(c, 5u, depth + 1u); else { c.pc = 0x002BC070u; return; } if (c.pc != 0x0032506Cu) [[unlikely]] return; }
L_0032506C:
    st32((c.r[18].w[0] + 24u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[18].w[0] + 24u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43A00000u);
    c.f[12] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x427C0000u);
    c.f[13] = c.r[2].w[0];
    set32(c.r[25], ld32((c.r[4].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007F0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.f[0] = c.r[2].w[0];
    set32(c.r[25], ld32((c.r[25].w[0] + 72u)));
    c.budget -= 13;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003250A0u); c.f[14] = fp::cvt_s_w(c.f[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003250A0u) [[unlikely]] return; }
L_003250A0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[2], ld32((c.r[18].w[0] + 24u)));
    c.f[1] = ld32((c.r[1].w[0] - 13108u));
    set32(c.r[4], 0u + 160u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[0] = ld32((c.r[1].w[0] - 13112u));
    st32((c.r[2].w[0] + 52u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st32((c.r[2].w[0] + 56u), c.f[1]);
    set32(c.r[2], ld32((c.r[1].w[0] + 26392u)));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003250D0u); set32(c.r[17], c.r[2].w[0] + 624u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x003250D0u) [[unlikely]] return; }
L_003250D0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_003250E4; } }
    set32(c.r[5], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003250E4u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_002A(c, 287u, depth + 1u); else { c.pc = 0x001AB200u; return; } if (c.pc != 0x003250E4u) [[unlikely]] return; }
L_003250E4:
    st32((c.r[18].w[0] + 28u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003250F4u); set32(c.r[5], 0u + 10000u);  if (depth < kMaxDepth) unit_002A(c, 5u, depth + 1u); else { c.pc = 0x001A80A0u; return; } if (c.pc != 0x003250F4u) [[unlikely]] return; }
L_003250F4:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00325104u); c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_002A(c, 3u, depth + 1u); else { c.pc = 0x001A8060u; return; } if (c.pc != 0x00325104u) [[unlikely]] return; }
L_00325104:
    set32(c.r[4], ld32((c.r[18].w[0] + 28u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00325114u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 322u, depth + 1u); else { c.pc = 0x00196E30u; return; } if (c.pc != 0x00325114u) [[unlikely]] return; }
L_00325114:
    set32(c.r[3], 0u + 3u);
    set32(c.r[2], 0u + 2u);
    st32((c.r[18].w[0] + 48u), c.r[3].w[0]);
    c.r[4].d[0] = 0ull + 0ull;
    st32((c.r[18].w[0] + 52u), c.r[2].w[0]);
    set32(c.r[3], c.r[18].w[0] + 144u);
    set32(c.r[2], 0u + 1u);
    st32((c.r[18].w[0] + 56u), c.r[3].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032513Cu); st32((c.r[18].w[0] + 60u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x0032513Cu) [[unlikely]] return; }
L_0032513C:
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    set32(c.r[4], 0u + 8u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032514Cu); st128((c.r[18].w[0] + 64u) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x0032514Cu) [[unlikely]] return; }
L_0032514C:
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    set32(c.r[4], 0u + 9u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032515Cu); st128((c.r[18].w[0] + 80u) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x0032515Cu) [[unlikely]] return; }
L_0032515C:
    ld128((c.r[2].w[0]) & ~15u, c.r[5]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41980000u);
    set32(c.r[4], c.r[18].w[0] + 148u);
    set32(c.r[2], 0u + 610u);
    st128((c.r[18].w[0] + 96u) & ~15u, c.r[5]);
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F400000u);
    st32((c.r[18].w[0] + 112u), c.f[0]);
    st32((c.r[18].w[0] + 116u), c.r[3].w[0]);
    st32((c.r[18].w[0] + 120u), c.r[2].w[0]);
    st32((c.r[18].w[0] + 124u), c.r[2].w[0]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00325198u); st32((c.r[18].w[0] + 128u), 0u);  if (depth < kMaxDepth) unit_006E(c, 107u, depth + 1u); else { c.pc = 0x002B88A0u; return; } if (c.pc != 0x00325198u) [[unlikely]] return; }
L_00325198:
    set32(c.r[2], c.r[18].w[0] + 148u);
    set32(c.r[4], 0u + 208u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003251A8u); st32((c.r[18].w[0] + 144u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x003251A8u) [[unlikely]] return; }
L_003251A8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_003251C0; } }
    set32(c.r[5], 0u + 3u);
    set32(c.r[6], 0u + 5u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003251C0u); set32(c.r[7], c.r[18].w[0] + 48u);  if (depth < kMaxDepth) unit_006E(c, 452u, depth + 1u); else { c.pc = 0x002BB370u; return; } if (c.pc != 0x003251C0u) [[unlikely]] return; }
L_003251C0:
    st32((c.r[18].w[0] + 44u), c.r[2].w[0]);
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_003251C8:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == c.r[2].d[0]; set32(c.r[4], 0u + 432u);  if (t) { goto L_0032535C; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == c.r[2].d[0];  if (t) { goto L_003252D0; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; set32(c.r[4], 0u + 430u);  if (t) { goto L_003251F0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u + 352u);  if (t) { goto L_00325424; } }
L_003251F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003251F8u); st32((c.r[29].w[0] + 112u), 0u);  if (depth < kMaxDepth) unit_000B(c, 461u, depth + 1u); else { c.pc = 0x0012FD60u; return; } if (c.pc != 0x003251F8u) [[unlikely]] return; }
L_003251F8:
    st32((c.r[29].w[0] + 96u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00325204u); set32(c.r[4], 0u + 430u);  if (depth < kMaxDepth) unit_000B(c, 461u, depth + 1u); else { c.pc = 0x0012FD60u; return; } if (c.pc != 0x00325204u) [[unlikely]] return; }
L_00325204:
    st32((c.r[29].w[0] + 100u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00325210u); set32(c.r[4], 0u + 434u);  if (depth < kMaxDepth) unit_000B(c, 461u, depth + 1u); else { c.pc = 0x0012FD60u; return; } if (c.pc != 0x00325210u) [[unlikely]] return; }
L_00325210:
    st32((c.r[29].w[0] + 104u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032521Cu); set32(c.r[4], 0u + 433u);  if (depth < kMaxDepth) unit_000B(c, 461u, depth + 1u); else { c.pc = 0x0012FD60u; return; } if (c.pc != 0x0032521Cu) [[unlikely]] return; }
L_0032521C:
    st32((c.r[29].w[0] + 108u), c.r[2].w[0]);
    c.r[19].d[0] = 0ull + 0ull;
    c.r[20].d[0] = 0ull + 0ull;
    c.budget -= 3;
L_00325228:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[20].d[0] == c.r[2].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);  if (t) { goto L_00325278; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[20].d[0] == c.r[2].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);  if (t) { goto L_00325264; } }
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);  if (t) { goto L_00325250; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[19].w[0] << 2);  if (t) { goto L_0032528C; } }
L_00325250:
    set32(c.r[4], ld32((c.r[1].w[0] - 27616u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032525Cu); set32(c.r[5], 0u + 400u);  if (depth < kMaxDepth) unit_0058(c, 46u, depth + 1u); else { c.pc = 0x00260440u; return; } if (c.pc != 0x0032525Cu) [[unlikely]] return; }
L_0032525C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], ld32((c.r[2].w[0] + 4u)));  if (t) { goto L_00325288; } }
L_00325264:
    set32(c.r[4], ld32((c.r[1].w[0] - 27616u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00325270u); set32(c.r[5], 0u + 401u);  if (depth < kMaxDepth) unit_0058(c, 46u, depth + 1u); else { c.pc = 0x00260440u; return; } if (c.pc != 0x00325270u) [[unlikely]] return; }
L_00325270:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], ld32((c.r[2].w[0] + 4u)));  if (t) { goto L_00325288; } }
L_00325278:
    set32(c.r[4], ld32((c.r[1].w[0] - 27616u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00325284u); set32(c.r[5], 0u + 402u);  if (depth < kMaxDepth) unit_0058(c, 46u, depth + 1u); else { c.pc = 0x00260440u; return; } if (c.pc != 0x00325284u) [[unlikely]] return; }
L_00325284:
    set32(c.r[16], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 1;
L_00325288:
    set32(c.r[2], c.r[19].w[0] << 2);
    c.budget -= 1;
L_0032528C:
    set32(c.r[20], c.r[20].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    st32((c.r[2].w[0] + 116u), c.r[16].w[0]);
    c.r[2].d[0] = c.r[20].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[19], c.r[19].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00325228u | kUnwind; return; } goto L_00325228; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003252ACu); st32((c.r[29].w[0] + 132u), c.r[19].w[0]);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x003252ACu) [[unlikely]] return; }
L_003252AC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[4], 0u + 14u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    set32(c.r[2], ld32((c.r[1].w[0] - 25556u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003252C4u); st32((c.r[29].w[0] + 128u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x003252C4u) [[unlikely]] return; }
L_003252C4:
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st128((c.r[29].w[0] + 144u) & ~15u, c.r[2]);  if (t) { goto L_00325420; } }
L_003252D0:
    st32((c.r[29].w[0] + 112u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003252DCu); set32(c.r[4], 0u + 431u);  if (depth < kMaxDepth) unit_000B(c, 461u, depth + 1u); else { c.pc = 0x0012FD60u; return; } if (c.pc != 0x003252DCu) [[unlikely]] return; }
L_003252DC:
    st32((c.r[29].w[0] + 96u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003252E8u); set32(c.r[4], 0u + 435u);  if (depth < kMaxDepth) unit_000B(c, 461u, depth + 1u); else { c.pc = 0x0012FD60u; return; } if (c.pc != 0x003252E8u) [[unlikely]] return; }
L_003252E8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st32((c.r[29].w[0] + 100u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[1].w[0] - 27616u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003252FCu); set32(c.r[5], 0u + 403u);  if (depth < kMaxDepth) unit_0058(c, 46u, depth + 1u); else { c.pc = 0x00260440u; return; } if (c.pc != 0x003252FCu) [[unlikely]] return; }
L_003252FC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[1].w[0] - 27616u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00325310u); set32(c.r[5], 0u + 406u);  if (depth < kMaxDepth) unit_0058(c, 46u, depth + 1u); else { c.pc = 0x00260440u; return; } if (c.pc != 0x00325310u) [[unlikely]] return; }
L_00325310:
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    set32(c.r[16], c.r[4].w[0] + c.r[2].w[0]);
    st32((c.r[29].w[0] + 132u), c.r[3].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032532Cu); st32((c.r[29].w[0] + 116u), c.r[16].w[0]);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x0032532Cu) [[unlikely]] return; }
L_0032532C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    set32(c.r[4], ld32((c.r[1].w[0] - 25584u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00325340u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 104u, depth + 1u); else { c.pc = 0x0012CEC0u; return; } if (c.pc != 0x00325340u) [[unlikely]] return; }
L_00325340:
    set32(c.r[2], ld32((c.r[2].w[0] + 360u)));
    set32(c.r[4], 0u + 5u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00325350u); st32((c.r[29].w[0] + 128u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x00325350u) [[unlikely]] return; }
L_00325350:
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st128((c.r[29].w[0] + 144u) & ~15u, c.r[2]);  if (t) { goto L_00325420; } }
L_0032535C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00325364u);  if (depth < kMaxDepth) unit_000B(c, 461u, depth + 1u); else { c.pc = 0x0012FD60u; return; } if (c.pc != 0x00325364u) [[unlikely]] return; }
L_00325364:
    st32((c.r[29].w[0] + 96u), c.r[2].w[0]);
    set32(c.r[4], 0u + 436u);
    set32(c.r[2], 0u + 2u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00325378u); st32((c.r[29].w[0] + 112u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000B(c, 461u, depth + 1u); else { c.pc = 0x0012FD60u; return; } if (c.pc != 0x00325378u) [[unlikely]] return; }
L_00325378:
    st32((c.r[29].w[0] + 100u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00325384u); set32(c.r[4], 0u + 433u);  if (depth < kMaxDepth) unit_000B(c, 461u, depth + 1u); else { c.pc = 0x0012FD60u; return; } if (c.pc != 0x00325384u) [[unlikely]] return; }
L_00325384:
    st32((c.r[29].w[0] + 104u), c.r[2].w[0]);
    c.r[20].d[0] = 0ull + 0ull;
    c.r[19].d[0] = 0ull + 0ull;
    c.budget -= 3;
L_00325390:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[19].d[0] == c.r[2].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);  if (t) { goto L_003253C0; } }
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);  if (t) { goto L_003253AC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[20].w[0] << 2);  if (t) { goto L_003253D4; } }
L_003253AC:
    set32(c.r[4], ld32((c.r[1].w[0] - 27616u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003253B8u); set32(c.r[5], 0u + 404u);  if (depth < kMaxDepth) unit_0058(c, 46u, depth + 1u); else { c.pc = 0x00260440u; return; } if (c.pc != 0x003253B8u) [[unlikely]] return; }
L_003253B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], ld32((c.r[2].w[0] + 4u)));  if (t) { goto L_003253D0; } }
L_003253C0:
    set32(c.r[4], ld32((c.r[1].w[0] - 27616u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003253CCu); set32(c.r[5], 0u + 405u);  if (depth < kMaxDepth) unit_0058(c, 46u, depth + 1u); else { c.pc = 0x00260440u; return; } if (c.pc != 0x003253CCu) [[unlikely]] return; }
L_003253CC:
    set32(c.r[16], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 1;
L_003253D0:
    set32(c.r[2], c.r[20].w[0] << 2);
    c.budget -= 1;
L_003253D4:
    set32(c.r[19], c.r[19].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    st32((c.r[2].w[0] + 116u), c.r[16].w[0]);
    c.r[2].d[0] = c.r[19].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[20], c.r[20].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00325390u | kUnwind; return; } goto L_00325390; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003253F4u); st32((c.r[29].w[0] + 132u), c.r[20].w[0]);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x003253F4u) [[unlikely]] return; }
L_003253F4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    set32(c.r[4], ld32((c.r[1].w[0] - 25584u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00325408u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 104u, depth + 1u); else { c.pc = 0x0012CEC0u; return; } if (c.pc != 0x00325408u) [[unlikely]] return; }
L_00325408:
    c.r[2].d[0] = ld8((c.r[2].w[0] + 356u));
    set32(c.r[4], 0u + 4u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00325418u); st32((c.r[29].w[0] + 128u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x00325418u) [[unlikely]] return; }
L_00325418:
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[2]);
    c.budget -= 2;
L_00325420:
    set32(c.r[4], 0u + 352u);
    c.budget -= 1;
L_00325424:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032542Cu);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0032542Cu) [[unlikely]] return; }
L_0032542C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[17].w[0] << 2);  if (t) { goto L_00325468; } }
    set32(c.r[3], c.r[17].w[0] << 3);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], c.r[3].w[0] + c.r[17].w[0]);
    set32(c.r[5], 0u + 3u);
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[6], 0u + 5u);
    set32(c.r[2], c.r[2].w[0] - c.r[17].w[0]);
    set32(c.r[7], 0u + 108u);
    set32(c.r[8], c.r[2].w[0] + 165u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00800000u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00325464u); c.r[9].d[0] = c.r[2].d[0] | 9ull;  if (depth < kMaxDepth) unit_0089(c, 234u, depth + 1u); else { c.pc = 0x00325A90u; return; } if (c.pc != 0x00325464u) [[unlikely]] return; }
L_00325464:
    set32(c.r[4], c.r[17].w[0] << 2);
    c.budget -= 1;
L_00325468:
    set32(c.r[3], 0u + 2u);
    set32(c.r[4], c.r[18].w[0] + c.r[4].w[0]);
    st32((c.r[4].w[0] + 32u), c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = c.r[17].d[0] == c.r[3].d[0]; set32(c.r[19], c.r[4].w[0] + 32u);  if (t) { goto L_003254C8; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == c.r[2].d[0];  if (t) { goto L_003254B8; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_00325498; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[19].w[0])));  if (t) { goto L_003254D8; } }
L_00325498:
    set32(c.r[2], ld32((c.r[18].w[0] + 32u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00980000u);
    c.r[4].d[0] = c.r[3].d[0] | 38527ull;
    set32(c.r[3], 0u + 10u);
    st32((c.r[2].w[0] + 312u), c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 32u)));
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 316u), c.r[3].w[0]);  if (t) { goto L_003254D4; } }
L_003254B8:
    set32(c.r[2], ld32((c.r[18].w[0] + 36u)));
    set32(c.r[3], 0u + 9999u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 312u), c.r[3].w[0]);  if (t) { goto L_003254D4; } }
L_003254C8:
    set32(c.r[2], ld32((c.r[18].w[0] + 40u)));
    set32(c.r[3], 0u + 100u);
    st32((c.r[2].w[0] + 312u), c.r[3].w[0]);
    c.budget -= 3;
L_003254D4:
    set32(c.r[2], ld32((c.r[19].w[0])));
    c.budget -= 1;
L_003254D8:
    st32((c.r[2].w[0] + 308u), 0u);
    set32(c.r[4], ld32((c.r[19].w[0])));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003254E8u); set32(c.r[5], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_0089(c, 284u, depth + 1u); else { c.pc = 0x003264E0u; return; } if (c.pc != 0x003254E8u) [[unlikely]] return; }
L_003254E8:
    set32(c.r[3], ld32((c.r[19].w[0])));
    set32(c.r[17], c.r[17].w[0] + 1u);
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[4]);
    c.r[2].d[0] = c.r[17].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; st128((c.r[3].w[0] + 336u) & ~15u, c.r[4]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003251C8u | kUnwind; return; } goto L_003251C8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00325508u); set32(c.r[4], 0u + 52u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00325508u) [[unlikely]] return; }
L_00325508:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00325518; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00325518u);  if (depth < kMaxDepth) unit_0089(c, 310u, depth + 1u); else { c.pc = 0x00326910u; return; } if (c.pc != 0x00325518u) [[unlikely]] return; }
L_00325518:
    st32((c.r[18].w[0] + 180u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 26392u)));
    set32(c.r[5], 0u + 3u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00325530u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002A(c, 139u, depth + 1u); else { c.pc = 0x001A95F0u; return; } if (c.pc != 0x00325530u) [[unlikely]] return; }
L_00325530:
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00325540u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00325540u) [[unlikely]] return; }
L_00325540:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_00325560:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00325574u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 318u, depth + 1u); else { c.pc = 0x0012E5E0u; return; } if (c.pc != 0x00325574u) [[unlikely]] return; }
L_00325574:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032557Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0089(c, 212u, depth + 1u); else { c.pc = 0x003257F0u; return; } if (c.pc != 0x0032557Cu) [[unlikely]] return; }
L_0032557C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00325590:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003255A4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 321u, depth + 1u); else { c.pc = 0x0012E630u; return; } if (c.pc != 0x003255A4u) [[unlikely]] return; }
L_003255A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003255ACu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0089(c, 219u, depth + 1u); else { c.pc = 0x003258C0u; return; } if (c.pc != 0x003255ACu) [[unlikely]] return; }
L_003255AC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003255C0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003255D4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0089(c, 225u, depth + 1u); else { c.pc = 0x00325990u; return; } if (c.pc != 0x003255D4u) [[unlikely]] return; }
L_003255D4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003255F8; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 180u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003255E8u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0089(c, 318u, depth + 1u); else { c.pc = 0x003269F0u; return; } if (c.pc != 0x003255E8u) [[unlikely]] return; }
L_003255E8:
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003255F8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003255F8u) [[unlikely]] return; }
L_003255F8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00325610:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 185u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 185u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[4].w[0] + 180u)));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 48u));
    c.budget -= 11;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003256D4; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 184u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_00325670; } }
    set32(c.r[4], 0u + 1u);
    c.budget -= 1;
L_0032564C:
    set32(c.r[2], c.r[5].w[0] << 2);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[5], c.r[5].w[0] + 1u);
    set32(c.r[3], ld32((c.r[2].w[0] + 32u)));
    c.r[2].d[0] = c.r[5].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; st8((c.r[3].w[0] + 296u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0032564Cu | kUnwind; return; } goto L_0032564C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 184u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_003256BC; } }
L_00325670:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00325678u);  if (depth < kMaxDepth) unit_0089(c, 225u, depth + 1u); else { c.pc = 0x00325990u; return; } if (c.pc != 0x00325678u) [[unlikely]] return; }
L_00325678:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_003256AC; } }
    set32(c.r[2], c.r[17].w[0] << 2);
    c.budget -= 1;
L_00325688:
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00325694u); set32(c.r[4], ld32((c.r[2].w[0] + 32u)));  if (depth < kMaxDepth) unit_0089(c, 301u, depth + 1u); else { c.pc = 0x003267F0u; return; } if (c.pc != 0x00325694u) [[unlikely]] return; }
L_00325694:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[17].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00325688u | kUnwind; return; } goto L_00325688; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u + 400u);  if (t) { goto L_003256C0; } }
L_003256AC:
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 36u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003256BCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003256BCu) [[unlikely]] return; }
L_003256BC:
    set32(c.r[4], 0u + 400u);
    c.budget -= 1;
L_003256C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003256C8u);  if (depth < kMaxDepth) unit_002C(c, 36u, depth + 1u); else { c.pc = 0x001B0690u; return; } if (c.pc != 0x003256C8u) [[unlikely]] return; }
L_003256C8:
    set32(c.r[3], ld32((c.r[16].w[0] + 180u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 48u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0032575C; } }
L_003256D4:
    c.r[7].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_003256DC:
    set32(c.r[3], c.r[6].w[0] << 2);
    set32(c.r[3], c.r[16].w[0] + c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[3].w[0] + 32u)));
    c.r[3].d[0] = ld8((c.r[5].w[0] + 296u));
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull; c.r[4].d[0] = c.r[3].d[0] ^ 1ull;  if (t) { goto L_0032570C; } }
    set32(c.r[4], ld32((c.r[5].w[0] + 300u)));
    set32(c.r[3], ld32((c.r[5].w[0] + 284u)));
    c.r[3].d[0] = c.r[4].d[0] ^ c.r[3].d[0];
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.r[4].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 5;
L_0032570C:
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.r[3].d[0] = c.r[7].d[0] & 255ull;
    c.r[4].d[0] = c.r[4].d[0] & 255ull;
    c.r[4].d[0] = c.r[3].d[0] & c.r[4].d[0];
    c.r[3].d[0] = c.r[6].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull; c.r[7].d[0] = 0ull < c.r[4].d[0] ? 1ull : 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003256DCu | kUnwind; return; } goto L_003256DC; } }
    c.r[3].d[0] = c.r[7].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0032575C; } }
    c.r[4].d[0] = ld8((c.r[16].w[0] + 185u));
    set32(c.r[3], 0u + 3u);
    mmi::div(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.hi.d[0];
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[4], 0u + 434u);  if (t) { goto L_0032575C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032575Cu);  if (depth < kMaxDepth) unit_002C(c, 36u, depth + 1u); else { c.pc = 0x001B0690u; return; } if (c.pc != 0x0032575Cu) [[unlikely]] return; }
L_0032575C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00325770:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00325784u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0089(c, 225u, depth + 1u); else { c.pc = 0x00325990u; return; } if (c.pc != 0x00325784u) [[unlikely]] return; }
L_00325784:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0032579C; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0032579Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0032579Cu) [[unlikely]] return; }
L_0032579C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003257B0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003257C4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0089(c, 225u, depth + 1u); else { c.pc = 0x00325990u; return; } if (c.pc != 0x003257C4u) [[unlikely]] return; }
L_003257C4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003257DC; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003257DCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003257DCu) [[unlikely]] return; }
L_003257DC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003257F0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 28u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 10;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00325818u); set32(c.r[5], 0u + 106u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00325818u) [[unlikely]] return; }
L_00325818:
    set32(c.r[4], ld32((c.r[17].w[0] + 44u)));
    c.f[12] = 0u;
    set32(c.r[5], 0u + 10u);
    set32(c.r[6], 0u + 5u);
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00325838u); c.f[13] = c.f[12];  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00325838u) [[unlikely]] return; }
L_00325838:
    set32(c.r[4], ld32((c.r[17].w[0] + 24u)));
    c.f[12] = 0u;
    set32(c.r[5], 0u + 10u);
    set32(c.r[6], 0u + 5u);
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00325858u); c.f[13] = c.f[12];  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00325858u) [[unlikely]] return; }
L_00325858:
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[16].w[0] << 2);
    c.budget -= 2;
L_00325860:
    set32(c.r[6], 0u + 5u);
    set32(c.r[3], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0] + 32u)));
    c.f[12] = 0u;
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[5], c.r[2].w[0] + 23u);
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 10;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00325888u); c.f[13] = c.f[12];  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00325888u) [[unlikely]] return; }
L_00325888:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[16].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00325860u | kUnwind; return; } goto L_00325860; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003258A0u); set32(c.r[4], 0u + 4u);  if (depth < kMaxDepth) unit_0076(c, 191u, depth + 1u); else { c.pc = 0x002D9970u; return; } if (c.pc != 0x003258A0u) [[unlikely]] return; }
L_003258A0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003258C0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 28u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 10;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003258E8u); set32(c.r[5], 0u + 107u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003258E8u) [[unlikely]] return; }
L_003258E8:
    set32(c.r[4], ld32((c.r[17].w[0] + 44u)));
    c.f[12] = 0u;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 3u);
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 56u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00325908u); c.f[13] = c.f[12];  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00325908u) [[unlikely]] return; }
L_00325908:
    set32(c.r[4], ld32((c.r[17].w[0] + 24u)));
    c.f[12] = 0u;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 3u);
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 56u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00325928u); c.f[13] = c.f[12];  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00325928u) [[unlikely]] return; }
L_00325928:
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[16].w[0] << 2);
    c.budget -= 2;
L_00325930:
    set32(c.r[2], 0u + 2u);
    set32(c.r[4], c.r[17].w[0] + c.r[3].w[0]);
    set32(c.r[6], 0u + 5u);
    set32(c.r[4], ld32((c.r[4].w[0] + 32u)));
    set32(c.r[3], c.r[2].w[0] - c.r[16].w[0]);
    c.f[12] = 0u;
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 56u)));
    c.budget -= 12;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00325960u); c.f[13] = c.f[12];  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00325960u) [[unlikely]] return; }
L_00325960:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[3].d[0] = c.r[16].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], c.r[16].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00325930u | kUnwind; return; } goto L_00325930; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00325990:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[4].w[0] + 28u)));
    set32(c.r[4], ld32((c.r[4].w[0] + 44u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 137u));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 64u)));
    c.budget -= 13;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003259C4u); c.r[16].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003259C4u) [[unlikely]] return; }
L_003259C4:
    set32(c.r[4], ld32((c.r[17].w[0] + 24u)));
    c.r[3].d[0] = c.r[16].d[0] & 255ull;
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 64u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003259E4u); c.r[16].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003259E4u) [[unlikely]] return; }
L_003259E4:
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    c.r[2].d[0] = c.r[16].d[0] & 255ull;
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.r[16].d[0] = 0ull + 0ull;
    c.r[18].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
L_003259F8:
    set32(c.r[2], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 32u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 64u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00325A14u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00325A14u) [[unlikely]] return; }
L_00325A14:
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[18].d[0] & 255ull;
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.r[18].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[16].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003259F8u | kUnwind; return; } goto L_003259F8; } }
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00325A50:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00325A60u);  if (depth < kMaxDepth) unit_002A(c, 135u, depth + 1u); else { c.pc = 0x001A9560u; return; } if (c.pc != 0x00325A60u) [[unlikely]] return; }
L_00325A60:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00325A84; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x63500000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00325A78u); c.r[4].d[0] = c.r[2].d[0] | 20566ull;  if (depth < kMaxDepth) unit_0087(c, 63u, depth + 1u); else { c.pc = 0x0031C6B0u; return; } if (c.pc != 0x00325A78u) [[unlikely]] return; }
L_00325A78:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00325A80u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0087(c, 65u, depth + 1u); else { c.pc = 0x0031C700u; return; } if (c.pc != 0x00325A80u) [[unlikely]] return; }
L_00325A80:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 1;
L_00325A84:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00325A90:
    c.f[0] = c.r[8].w[0];
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.f[1] = c.r[7].w[0];
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.f[13] = fp::cvt_s_w(c.f[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.f[0] = c.r[9].w[0];
    c.f[12] = fp::cvt_s_w(c.f[1]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00325AC0u); c.f[14] = fp::cvt_s_w(c.f[0]);  if (depth < kMaxDepth) unit_006E(c, 422u, depth + 1u); else { c.pc = 0x002BAAB0u; return; } if (c.pc != 0x00325AC0u) [[unlikely]] return; }
L_00325AC0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 20704u);
    set32(c.r[2], c.r[2].w[0] + 20720u);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.r[4].d[0] = 0ull + 0ull;
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[3], 0u - 1u);
    st32((c.r[16].w[0] + 288u), 0u);
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 296u), static_cast<std::uint8_t>(0u));
    st32((c.r[16].w[0] + 300u), 0u);
    st32((c.r[16].w[0] + 304u), 0u);
    st32((c.r[16].w[0] + 308u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 312u), c.r[3].w[0]);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00325B04u); st32((c.r[16].w[0] + 316u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x00325B04u) [[unlikely]] return; }
L_00325B04:
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    c.r[3].d[0] = 0ull + 0ull;
    st128((c.r[16].w[0] + 320u) & ~15u, c.r[2]);
    st32((c.r[16].w[0] + 268u), 0u);
    c.budget -= 4;
L_00325B14:
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[2].w[0] + 272u), 0u);
    c.r[2].d[0] = c.r[3].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00325B14u | kUnwind; return; } goto L_00325B14; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00325B34:
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[2].w[0] + 100u), 0u);
    c.r[2].d[0] = c.r[3].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00325B34u | kUnwind; return; } goto L_00325B34; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00325B58u); set32(c.r[4], 0u + 368u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00325B58u) [[unlikely]] return; }
L_00325B58:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00325B68; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00325B68u);  if (depth < kMaxDepth) unit_0018(c, 2u, depth + 1u); else { c.pc = 0x001607D0u; return; } if (c.pc != 0x00325B68u) [[unlikely]] return; }
L_00325B68:
    st32((c.r[16].w[0] + 292u), c.r[2].w[0]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00325B80:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00325C00; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 20704u);
    set32(c.r[2], c.r[2].w[0] + 20720u);
    st32((c.r[17].w[0]), c.r[3].w[0]);
    st32((c.r[17].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 292u)));
    c.budget -= 9;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00325BD8; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00325BD8; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00325BD8u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00325BD8u) [[unlikely]] return; }
L_00325BD8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00325BE8u); st32((c.r[17].w[0] + 292u), 0u);  if (depth < kMaxDepth) unit_006E(c, 425u, depth + 1u); else { c.pc = 0x002BABD0u; return; } if (c.pc != 0x00325BE8u) [[unlikely]] return; }
L_00325BE8:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00325C04; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00325C00u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x00325C00u) [[unlikely]] return; }
L_00325C00:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00325C04:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00325C20:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 296u));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00325D84; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 284u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 300u)));
    c.r[1].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; c.r[1].d[0] = c.r[3].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;  if (t) { goto L_00325C5C; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 316u)));
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 300u), c.r[3].w[0]);  if (t) { goto L_00325CAC; } }
L_00325C5C:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00325C74; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 316u)));
    set32(c.r[3], c.r[4].w[0] - c.r[3].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 300u), c.r[3].w[0]);  if (t) { goto L_00325CAC; } }
L_00325C74:
    st32((c.r[16].w[0] + 300u), c.r[3].w[0]);
    c.f[1] = ld32((c.r[16].w[0] + 304u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);  if (t) { goto L_00325CA4; } }
    c.f[0] = ld32((c.r[1].w[0] - 12968u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 304u), c.f[0]);  if (t) { goto L_00325CAC; } }
L_00325CA4:
    st32((c.r[16].w[0] + 304u), c.f[0]);
    st8((c.r[16].w[0] + 296u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_00325CAC:
    set32(c.r[4], ld32((c.r[16].w[0] + 268u)));
    set32(c.r[3], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 2u);  if (t) { goto L_00325D5C; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00325D30; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00325D0C; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00325CE0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_00325D88; } }
L_00325CE0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00325CE8u); set32(c.r[4], 0u + 438u);  if (depth < kMaxDepth) unit_000B(c, 461u, depth + 1u); else { c.pc = 0x0012FD60u; return; } if (c.pc != 0x00325CE8u) [[unlikely]] return; }
L_00325CE8:
    st32((c.r[16].w[0] + 132u), c.r[2].w[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[6], ld32((c.r[16].w[0] + 300u)));
    set32(c.r[4], c.r[16].w[0] + 236u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00325D00u); set32(c.r[5], c.r[5].w[0] - 13048u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x00127458u; return; } if (c.pc != 0x00325D00u) [[unlikely]] return; }
L_00325D00:
    set32(c.r[3], c.r[16].w[0] + 236u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 136u), c.r[3].w[0]);  if (t) { goto L_00325D84; } }
L_00325D0C:
    st32((c.r[16].w[0] + 132u), 0u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[6], ld32((c.r[16].w[0] + 300u)));
    set32(c.r[4], c.r[16].w[0] + 236u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00325D24u); set32(c.r[5], c.r[5].w[0] - 13048u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x00127458u; return; } if (c.pc != 0x00325D24u) [[unlikely]] return; }
L_00325D24:
    set32(c.r[3], c.r[16].w[0] + 236u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 136u), c.r[3].w[0]);  if (t) { goto L_00325D84; } }
L_00325D30:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00325D38u); set32(c.r[4], 0u + 439u);  if (depth < kMaxDepth) unit_000B(c, 461u, depth + 1u); else { c.pc = 0x0012FD60u; return; } if (c.pc != 0x00325D38u) [[unlikely]] return; }
L_00325D38:
    st32((c.r[16].w[0] + 132u), c.r[2].w[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[6], ld32((c.r[16].w[0] + 300u)));
    set32(c.r[4], c.r[16].w[0] + 236u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00325D50u); set32(c.r[5], c.r[5].w[0] - 13048u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x00127458u; return; } if (c.pc != 0x00325D50u) [[unlikely]] return; }
L_00325D50:
    set32(c.r[3], c.r[16].w[0] + 236u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 136u), c.r[3].w[0]);  if (t) { goto L_00325D84; } }
L_00325D5C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[2], c.r[2].w[0] - 13056u);
    set32(c.r[4], c.r[16].w[0] + 236u);
    st32((c.r[16].w[0] + 132u), c.r[2].w[0]);
    set32(c.r[6], ld32((c.r[16].w[0] + 300u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00325D7Cu); set32(c.r[5], c.r[5].w[0] - 13048u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x00127458u; return; } if (c.pc != 0x00325D7Cu) [[unlikely]] return; }
L_00325D7C:
    set32(c.r[3], c.r[16].w[0] + 236u);
    st32((c.r[16].w[0] + 136u), c.r[3].w[0]);
    c.budget -= 2;
L_00325D84:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_00325D88:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00325DA0:
    set32(c.r[29], c.r[29].w[0] - 224u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    c.f[0] = 0u;
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    c.f[1] = ld32((c.r[4].w[0] + 24u));
    c.f[1] = fp::cvt_s_w(c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 18;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[20].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003264A0; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 64u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00325DF8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00325DF8u) [[unlikely]] return; }
L_00325DF8:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_00325E88; } }
    c.r[19].d[0] = 0ull + 0ull;
    set32(c.r[4], 0u + 1u);
    c.budget -= 2;
L_00325E0C:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] != c.r[4].d[0];  if (t) { goto L_00325E30; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00325E1Cu);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x00325E1Cu) [[unlikely]] return; }
L_00325E1C:
    ld128((c.r[2].w[0]) & ~15u, c.r[3]);
    set32(c.r[2], c.r[19].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st128((c.r[2].w[0] + 176u) & ~15u, c.r[3]);  if (t) { goto L_00325E5C; } }
L_00325E30:
    set32(c.r[2], ld32((c.r[20].w[0] + 336u)));
    set32(c.r[3], c.r[19].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[29].w[0]);
    set32(c.r[3], c.r[3].w[0] + 176u);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 340u)));
    st32((c.r[3].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 344u)));
    st32((c.r[3].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 348u)));
    st32((c.r[3].w[0] + 12u), c.r[2].w[0]);
    c.budget -= 11;
L_00325E5C:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.r[2].d[0] = c.r[19].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], 0u + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00325E0Cu | kUnwind; return; } goto L_00325E0C; } }
    set32(c.r[4], ld32((c.r[20].w[0] + 292u)));
    set32(c.r[5], c.r[29].w[0] + 176u);
    set32(c.r[6], c.r[29].w[0] + 192u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00325E80u); set32(c.r[7], c.r[29].w[0] + 208u);  if (depth < kMaxDepth) unit_0018(c, 14u, depth + 1u); else { c.pc = 0x001609B0u; return; } if (c.pc != 0x00325E80u) [[unlikely]] return; }
L_00325E80:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[20].w[0] + 292u)));  if (t) { goto L_00325F2C; } }
L_00325E88:
    set32(c.r[4], 0u + 1u);
    c.budget -= 1;
L_00325E8C:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] != c.r[4].d[0];  if (t) { goto L_00325EB0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00325E9Cu);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x00325E9Cu) [[unlikely]] return; }
L_00325E9C:
    ld128((c.r[2].w[0]) & ~15u, c.r[3]);
    set32(c.r[2], c.r[19].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st128((c.r[2].w[0] + 176u) & ~15u, c.r[3]);  if (t) { goto L_00325F04; } }
L_00325EB0:
    set32(c.r[3], ld32((c.r[20].w[0] + 336u)));
    set32(c.r[2], c.r[19].w[0] << 4);
    set32(c.r[4], c.r[2].w[0] + c.r[29].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    set32(c.r[4], c.r[4].w[0] + 176u);
    c.f[0] = c.r[2].w[0];
    st32((c.r[4].w[0]), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 340u)));
    st32((c.r[4].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 344u)));
    st32((c.r[4].w[0] + 8u), c.r[2].w[0]);
    c.f[1] = ld32((c.r[20].w[0] + 24u));
    c.f[2] = ld32((c.r[20].w[0] + 348u));
    c.f[1] = fp::cvt_s_w(c.f[1]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    st32((c.r[4].w[0] + 12u), c.r[2].w[0]);
    c.budget -= 21;
L_00325F04:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.r[2].d[0] = c.r[19].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], 0u + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00325E8Cu | kUnwind; return; } goto L_00325E8C; } }
    set32(c.r[4], ld32((c.r[20].w[0] + 292u)));
    set32(c.r[5], c.r[29].w[0] + 176u);
    set32(c.r[6], c.r[29].w[0] + 192u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00325F28u); set32(c.r[7], c.r[29].w[0] + 208u);  if (depth < kMaxDepth) unit_0018(c, 14u, depth + 1u); else { c.pc = 0x001609B0u; return; } if (c.pc != 0x00325F28u) [[unlikely]] return; }
L_00325F28:
    set32(c.r[4], ld32((c.r[20].w[0] + 292u)));
    c.budget -= 1;
L_00325F2C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43A00000u);
    c.f[12] = c.r[2].w[0];
    c.f[1] = ld32((c.r[20].w[0] + 40u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    c.f[13] = ld32((c.r[20].w[0] + 36u));
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 10;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00325F54u); c.f[14] = fp::sub(c.f[1], c.f[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00325F54u) [[unlikely]] return; }
L_00325F54:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[2] = ld32((c.r[1].w[0] - 13060u));
    c.f[0] = c.r[2].w[0];
    set32(c.r[2], ld32((c.r[20].w[0] + 292u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[1] = ld32((c.r[1].w[0] - 13064u));
    st32((c.r[2].w[0] + 160u), c.f[1]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    st32((c.r[2].w[0] + 164u), c.f[2]);
    c.f[3] = ld32((c.r[20].w[0] + 304u));
    c.f[2] = ld32((c.r[1].w[0] - 13064u));
    c.f[0] = fp::sub(c.f[0], c.f[3]);
    c.f[1] = fp::mul(c.f[2], c.f[0]);
    c.f[0] = fp::mul(c.f[2], c.f[3]);
    c.f[1] = fp::cvt_w_s(c.f[1]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[1]);
    set32(c.r[6], c.f[0]);
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00325FA8u); set32(c.r[4], ld32((c.r[20].w[0] + 292u)));  if (depth < kMaxDepth) unit_0018(c, 17u, depth + 1u); else { c.pc = 0x00160A20u; return; } if (c.pc != 0x00325FA8u) [[unlikely]] return; }
L_00325FA8:
    set32(c.r[4], ld32((c.r[20].w[0] + 292u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00325FBCu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00325FBCu) [[unlikely]] return; }
L_00325FBC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], ld32((c.r[20].w[0] + 24u)));
    set32(c.r[4], ld32((c.r[1].w[0] + 26392u)));
    set32(c.r[19], ld32((c.r[4].w[0] + 440u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[21], c.r[20].w[0] + 100u);  if (t) { goto L_003264A0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[23].d[0] = 0ull + 0ull;  if (t) { goto L_00326494; } }
L_00325FDC:
    c.budget -= 2;
    { const bool t = c.r[21].d[0] == 0ull;  if (t) { goto L_003264A0; } }
    set32(c.r[3], ld32((c.r[21].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[1].d[0] = c.r[23].d[0] < static_cast<std::uint64_t>(10ll) ? 1ull : 0ull;  if (t) { goto L_00325FF8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[21], c.r[21].w[0] + 4u);  if (t) { goto L_00326490; } }
L_00325FF8:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull; c.r[22].d[0] = 0ull + 0ull;  if (t) { goto L_003262B0; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[2], c.r[23].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] - 13040u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00324000u < 16384u) { entry = entries_0089[(t - 0x00324000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0032601C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[18].d[0] = 0ull + 0ull;
    c.f[21] = ld32((c.r[1].w[0] - 13088u));
    c.r[17].d[0] = 0ull + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[20] = ld32((c.r[1].w[0] - 13084u));
    c.budget -= 8;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_003262B0; } }
L_0032603C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[3], ld32((c.r[20].w[0] + 288u)));
    c.f[21] = ld32((c.r[1].w[0] - 13080u));
    set32(c.r[16], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[20] = ld32((c.r[1].w[0] - 13076u));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != c.r[16].d[0]; set32(c.r[18], 0u + 120u);  if (t) { goto L_00326064; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], 0u - 12u);  if (t) { goto L_003262B0; } }
L_00326064:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[17], 0u - 31u);  if (t) { goto L_00326078; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], 0u - 22u);  if (t) { goto L_003262B0; } }
L_00326078:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[3] = ld32((c.r[20].w[0] + 56u));  if (t) { goto L_003262B4; } }
L_00326080:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[3], ld32((c.r[20].w[0] + 288u)));
    c.f[21] = ld32((c.r[1].w[0] - 13080u));
    set32(c.r[2], 0u + 2u);
    set32(c.r[16], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[20] = ld32((c.r[1].w[0] - 13076u));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[18], 0u + 120u);  if (t) { goto L_003260AC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], 0u - 3u);  if (t) { goto L_003262B0; } }
L_003260AC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], 0u - 12u);  if (t) { goto L_003262B0; } }
L_003260B4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[16], 0u + 1u);
    c.f[21] = ld32((c.r[1].w[0] - 13080u));
    set32(c.r[18], 0u + 120u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[20] = ld32((c.r[1].w[0] - 13076u));
    c.budget -= 8;
    { const bool t = 0ull == 0ull; set32(c.r[17], 0u + 7u);  if (t) { goto L_003262B0; } }
L_003260D4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[3], ld32((c.r[20].w[0] + 288u)));
    c.f[21] = ld32((c.r[1].w[0] - 13080u));
    set32(c.r[16], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[20] = ld32((c.r[1].w[0] - 13076u));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != c.r[16].d[0]; set32(c.r[18], 0u + 226u);  if (t) { goto L_003260FC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], 0u - 12u);  if (t) { goto L_003262B0; } }
L_003260FC:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[17], 0u - 31u);  if (t) { goto L_00326110; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], 0u - 22u);  if (t) { goto L_003262B0; } }
L_00326110:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003262B0; } }
L_00326118:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[3], ld32((c.r[20].w[0] + 288u)));
    c.f[21] = ld32((c.r[1].w[0] - 13080u));
    set32(c.r[2], 0u + 2u);
    set32(c.r[16], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[20] = ld32((c.r[1].w[0] - 13076u));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[18], 0u + 226u);  if (t) { goto L_00326144; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], 0u - 3u);  if (t) { goto L_003262B0; } }
L_00326144:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], 0u - 12u);  if (t) { goto L_003262B0; } }
L_0032614C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[16], 0u + 1u);
    c.f[21] = ld32((c.r[1].w[0] - 13080u));
    set32(c.r[18], 0u + 226u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[20] = ld32((c.r[1].w[0] - 13076u));
    c.budget -= 8;
    { const bool t = 0ull == 0ull; set32(c.r[17], 0u + 7u);  if (t) { goto L_003262B0; } }
L_0032616C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[16].d[0] = 0ull + 0ull;
    c.f[21] = ld32((c.r[1].w[0] - 13080u));
    set32(c.r[18], 0u + 422u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[20] = ld32((c.r[1].w[0] - 13076u));
    c.budget -= 8;
    { const bool t = 0ull == 0ull; set32(c.r[17], 0u - 12u);  if (t) { goto L_003262B0; } }
L_0032618C:
    set32(c.r[5], ld32((c.r[20].w[0] + 132u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003261A8; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[12] = ld32((c.r[1].w[0] - 13080u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003261A8u); set32(c.r[4], 0u + 3u);  if (depth < kMaxDepth) unit_006E(c, 485u, depth + 1u); else { c.pc = 0x002BBC60u; return; } if (c.pc != 0x003261A8u) [[unlikely]] return; }
L_003261A8:
    set32(c.r[5], ld32((c.r[20].w[0] + 136u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_003261CC; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[12] = ld32((c.r[1].w[0] - 13080u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003261C4u); set32(c.r[4], 0u + 3u);  if (depth < kMaxDepth) unit_006E(c, 485u, depth + 1u); else { c.pc = 0x002BBC60u; return; } if (c.pc != 0x003261C4u) [[unlikely]] return; }
L_003261C4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[20].w[0] + 268u)));  if (t) { goto L_003261D4; } }
L_003261CC:
    c.r[2].d[0] = 0ull + 0ull;
    set32(c.r[4], ld32((c.r[20].w[0] + 268u)));
    c.budget -= 2;
L_003261D4:
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[3], c.r[16].w[0] + c.r[2].w[0]);  if (t) { goto L_003261F0; } }
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[16].w[0]) >> 1));
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 1));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[3].w[0] - c.r[2].w[0]);  if (t) { goto L_00326200; } }
L_003261F0:
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[16].w[0]) >> 1));
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    set32(c.r[2], c.r[3].w[0] - c.r[2].w[0]);
    c.budget -= 4;
L_00326200:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[18], c.r[2].w[0] + 422u);
    c.f[21] = ld32((c.r[1].w[0] - 13080u));
    c.r[16].d[0] = 0ull + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[20] = ld32((c.r[1].w[0] - 13076u));
    c.budget -= 8;
    { const bool t = 0ull == 0ull; set32(c.r[17], 0u + 12u);  if (t) { goto L_003262B0; } }
L_00326220:
    set32(c.r[5], ld32((c.r[20].w[0] + 132u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0032623C; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[12] = ld32((c.r[1].w[0] - 13080u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032623Cu); set32(c.r[4], 0u + 3u);  if (depth < kMaxDepth) unit_006E(c, 485u, depth + 1u); else { c.pc = 0x002BBC60u; return; } if (c.pc != 0x0032623Cu) [[unlikely]] return; }
L_0032623C:
    set32(c.r[5], ld32((c.r[20].w[0] + 136u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00326260; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[12] = ld32((c.r[1].w[0] - 13080u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00326258u); set32(c.r[4], 0u + 3u);  if (depth < kMaxDepth) unit_006E(c, 485u, depth + 1u); else { c.pc = 0x002BBC60u; return; } if (c.pc != 0x00326258u) [[unlikely]] return; }
L_00326258:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[20].w[0] + 268u)));  if (t) { goto L_00326268; } }
L_00326260:
    c.r[2].d[0] = 0ull + 0ull;
    set32(c.r[4], ld32((c.r[20].w[0] + 268u)));
    c.budget -= 2;
L_00326268:
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[3], c.r[16].w[0] + c.r[2].w[0]);  if (t) { goto L_00326288; } }
    set32(c.r[3], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 1));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[4].w[0] - c.r[2].w[0]);  if (t) { goto L_00326294; } }
L_00326288:
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 1));
    set32(c.r[2], c.r[3].w[0] - c.r[2].w[0]);
    c.budget -= 3;
L_00326294:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[18], c.r[2].w[0] + 422u);
    c.f[21] = ld32((c.r[1].w[0] - 13072u));
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[17], 0u + 12u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[20] = ld32((c.r[1].w[0] - 13068u));
    c.budget -= 7;
L_003262B0:
    c.f[3] = ld32((c.r[20].w[0] + 56u));
    c.budget -= 1;
L_003262B4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[18].w[0];
    c.f[2] = ld32((c.r[20].w[0] + 52u));
    c.f[5] = fp::cvt_s_w(c.f[1]);
    c.f[1] = fp::mul(c.f[2], c.f[21]);
    st32((c.r[19].w[0] + 16u), c.f[1]);
    c.f[4] = fp::mul(c.f[3], c.f[20]);
    c.f[0] = c.r[17].w[0];
    st32((c.r[19].w[0] + 20u), c.f[4]);
    st32((c.r[19].w[0] + 24u), c.r[2].w[0]);
    c.f[3] = fp::cvt_s_w(c.f[0]);
    set32(c.r[2], ld32((c.r[21].w[0])));
    c.f[1] = c.r[22].w[0];
    c.f[4] = ld32((c.r[20].w[0] + 32u));
    c.f[2] = ld32((c.r[20].w[0] + 36u));
    c.f[0] = ld32((c.r[20].w[0] + 40u));
    c.f[1] = fp::cvt_s_w(c.f[1]);
    st32((c.r[19].w[0] + 352u), c.r[2].w[0]);
    st32((c.r[19].w[0] + 356u), 0u);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 24u)));
    c.f[4] = fp::add(c.f[5], c.f[4]);
    st32((c.r[19].w[0] + 300u), c.r[2].w[0]);
    c.f[1] = fp::cvt_w_s(c.f[4]);
    set32(c.r[25], ld32((c.r[20].w[0])));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[25], ld32((c.r[25].w[0] + 64u)));
    c.f[2] = fp::add(c.f[3], c.f[2]);
    set32(c.r[18], c.f[1]);
    set32(c.r[22], c.f[0]);
    c.f[1] = fp::cvt_w_s(c.f[2]);
    set32(c.r[17], c.f[1]);
    c.budget -= 34;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0032633Cu); c.r[4].d[0] = c.r[20].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0032633Cu) [[unlikely]] return; }
L_0032633C:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00326354; } }
    ld128((c.r[20].w[0] + 320u) & ~15u, c.r[2]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st128((c.r[19].w[0] + 48u) & ~15u, c.r[2]);  if (t) { goto L_00326394; } }
L_00326354:
    ld128((c.r[20].w[0] + 320u) & ~15u, c.r[3]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    c.f[0] = c.r[2].w[0];
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[3]);
    c.f[1] = ld32((c.r[20].w[0] + 24u));
    c.f[2] = ld32((c.r[20].w[0] + 332u));
    c.f[1] = fp::cvt_s_w(c.f[1]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    st32((c.r[29].w[0] + 172u), c.r[2].w[0]);
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[2]);
    st128((c.r[19].w[0] + 48u) & ~15u, c.r[2]);
    c.budget -= 16;
L_00326394:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; set32(c.r[2], 0u + 2u);  if (t) { goto L_00326420; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == c.r[2].d[0];  if (t) { goto L_003263EC; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[2].d[0];  if (t) { goto L_003263B8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[25], ld32((c.r[19].w[0] + 176u)));  if (t) { goto L_00326450; } }
L_003263B8:
    c.f[0] = c.r[22].w[0];
    set32(c.r[25], ld32((c.r[19].w[0] + 176u)));
    c.f[1] = c.r[18].w[0];
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.f[14] = fp::cvt_s_w(c.f[0]);
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.f[0] = c.r[17].w[0];
    c.f[12] = fp::cvt_s_w(c.f[1]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003263E4u); c.f[13] = fp::cvt_s_w(c.f[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003263E4u) [[unlikely]] return; }
L_003263E4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0032644C; } }
L_003263EC:
    c.f[0] = c.r[22].w[0];
    set32(c.r[25], ld32((c.r[19].w[0] + 176u)));
    c.f[1] = c.r[18].w[0];
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.f[14] = fp::cvt_s_w(c.f[0]);
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.f[0] = c.r[17].w[0];
    c.f[12] = fp::cvt_s_w(c.f[1]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00326418u); c.f[13] = fp::cvt_s_w(c.f[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00326418u) [[unlikely]] return; }
L_00326418:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0032644C; } }
L_00326420:
    c.f[0] = c.r[22].w[0];
    set32(c.r[25], ld32((c.r[19].w[0] + 176u)));
    c.f[1] = c.r[18].w[0];
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.f[14] = fp::cvt_s_w(c.f[0]);
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.f[0] = c.r[17].w[0];
    c.f[12] = fp::cvt_s_w(c.f[1]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0032644Cu); c.f[13] = fp::cvt_s_w(c.f[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0032644Cu) [[unlikely]] return; }
L_0032644C:
    set32(c.r[25], ld32((c.r[19].w[0] + 176u)));
    c.budget -= 1;
L_00326450:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u - 1u);
    set32(c.r[25], ld32((c.r[25].w[0] + 68u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0032646Cu); set32(c.r[8], 0u + 2u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0032646Cu) [[unlikely]] return; }
L_0032646C:
    set32(c.r[25], ld32((c.r[19].w[0] + 176u)));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u - 1u);
    set32(c.r[25], ld32((c.r[25].w[0] + 68u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0032648Cu); c.r[8].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0032648Cu) [[unlikely]] return; }
L_0032648C:
    set32(c.r[21], c.r[21].w[0] + 4u);
    c.budget -= 1;
L_00326490:
    set32(c.r[23], c.r[23].w[0] + 1u);
    c.budget -= 1;
L_00326494:
    c.r[3].d[0] = c.r[23].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00325FDCu | kUnwind; return; } goto L_00325FDC; } }
L_003264A0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[23]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 224u);  c.pc = t; return; }
L_003264E0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
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
    set32(c.r[3], ld32((c.r[5].w[0])));
    st32((c.r[4].w[0] + 100u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0] + 36u)));
    st32((c.r[4].w[0] + 288u), c.r[3].w[0]);
    c.budget -= 16;
L_00326520:
    set32(c.r[3], ld32((c.r[20].w[0] + 16u)));
    set32(c.r[16], c.r[18].w[0] << 2);
    set32(c.r[5], c.r[21].w[0] + c.r[16].w[0]);
    set32(c.r[4], c.r[20].w[0] + c.r[16].w[0]);
    st32((c.r[21].w[0] + 268u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 20u)));
    st32((c.r[5].w[0] + 272u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[21].w[0] + 288u)));
    c.r[1].d[0] = c.r[18].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[17], c.r[5].w[0] + 272u);  if (t) { goto L_00326644; } }
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[3], 0u + 3u);
    st32((c.r[5].w[0] + 104u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[21].w[0] + 268u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 2u);  if (t) { goto L_00326600; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_003265B8; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_003265B8; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00326588; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[18].w[0] << 5);  if (t) { goto L_00326628; } }
L_00326588:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00326590u); set32(c.r[4], 0u + 438u);  if (depth < kMaxDepth) unit_000B(c, 461u, depth + 1u); else { c.pc = 0x0012FD60u; return; } if (c.pc != 0x00326590u) [[unlikely]] return; }
L_00326590:
    set32(c.r[7], ld32((c.r[17].w[0])));
    set32(c.r[3], c.r[18].w[0] << 5);
    set32(c.r[3], c.r[21].w[0] + c.r[3].w[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[5], c.r[5].w[0] - 13000u);
    set32(c.r[4], c.r[3].w[0] + 140u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003265B0u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x00127458u; return; } if (c.pc != 0x003265B0u) [[unlikely]] return; }
L_003265B0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00326624; } }
L_003265B8:
    set32(c.r[6], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { const bool t = c.r[6].sd[0] <= 0; set32(c.r[2], c.r[18].w[0] << 5);  if (t) { goto L_003265E4; } }
    set32(c.r[2], c.r[18].w[0] << 5);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[2], c.r[21].w[0] + c.r[2].w[0]);
    set32(c.r[5], c.r[5].w[0] - 12992u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003265DCu); set32(c.r[4], c.r[2].w[0] + 140u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x00127458u; return; } if (c.pc != 0x003265DCu) [[unlikely]] return; }
L_003265DC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00326624; } }
L_003265E4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[2], c.r[21].w[0] + c.r[2].w[0]);
    set32(c.r[5], c.r[5].w[0] - 12984u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003265F8u); set32(c.r[4], c.r[2].w[0] + 140u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x00127458u; return; } if (c.pc != 0x003265F8u) [[unlikely]] return; }
L_003265F8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00326624; } }
L_00326600:
    set32(c.r[6], ld32((c.r[17].w[0])));
    set32(c.r[2], c.r[18].w[0] << 5);
    set32(c.r[2], c.r[21].w[0] + c.r[2].w[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[5], c.r[5].w[0] - 12976u);
    set32(c.r[4], c.r[2].w[0] + 140u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00326624u); set32(c.r[7], c.r[7].w[0] - 13056u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x00127458u; return; } if (c.pc != 0x00326624u) [[unlikely]] return; }
L_00326624:
    set32(c.r[3], c.r[18].w[0] << 5);
    c.budget -= 1;
L_00326628:
    set32(c.r[4], c.r[21].w[0] + c.r[16].w[0]);
    set32(c.r[3], c.r[21].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[3].w[0] + 140u);
    st32((c.r[4].w[0] + 116u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 272u)));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; set32(c.r[19], c.r[19].w[0] + c.r[3].w[0]);  if (t) { goto L_0032664C; } }
L_00326644:
    st32((c.r[5].w[0] + 104u), 0u);
    st32((c.r[5].w[0] + 116u), 0u);
    c.budget -= 2;
L_0032664C:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[3].d[0] = c.r[18].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00326520u | kUnwind; return; } goto L_00326520; } }
    set32(c.r[4], ld32((c.r[20].w[0] + 32u)));
    set32(c.r[3], 0u - 1u);
    st32((c.r[21].w[0] + 300u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[20].w[0] + 32u)));
    set32(c.r[4], c.r[19].w[0] + c.r[4].w[0]);
    st32((c.r[21].w[0] + 284u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[21].w[0] + 312u)));
    c.budget -= 9;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00326694; } }
    set32(c.r[3], ld32((c.r[21].w[0] + 284u)));
    c.r[1].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00326694; } }
    st32((c.r[21].w[0] + 284u), c.r[4].w[0]);
    c.budget -= 1;
L_00326694:
    set32(c.r[4], ld32((c.r[21].w[0] + 308u)));
    set32(c.r[3], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_003266B8; } }
    set32(c.r[3], ld32((c.r[21].w[0] + 284u)));
    c.r[1].d[0] = c.r[3].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003266B8; } }
    st32((c.r[21].w[0] + 284u), c.r[4].w[0]);
    c.budget -= 1;
L_003266B8:
    set32(c.r[4], ld32((c.r[21].w[0] + 268u)));
    set32(c.r[3], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 2u);  if (t) { goto L_0032678C; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00326754; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00326724; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003266EC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));  if (t) { goto L_003267C4; } }
L_003266EC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003266F4u); set32(c.r[4], 0u + 437u);  if (depth < kMaxDepth) unit_000B(c, 461u, depth + 1u); else { c.pc = 0x0012FD60u; return; } if (c.pc != 0x003266F4u) [[unlikely]] return; }
L_003266F4:
    st32((c.r[21].w[0] + 128u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00326700u); set32(c.r[4], 0u + 438u);  if (depth < kMaxDepth) unit_000B(c, 461u, depth + 1u); else { c.pc = 0x0012FD60u; return; } if (c.pc != 0x00326700u) [[unlikely]] return; }
L_00326700:
    st32((c.r[21].w[0] + 132u), c.r[2].w[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[6], ld32((c.r[20].w[0] + 32u)));
    set32(c.r[4], c.r[21].w[0] + 236u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00326718u); set32(c.r[5], c.r[5].w[0] - 13048u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x00127458u; return; } if (c.pc != 0x00326718u) [[unlikely]] return; }
L_00326718:
    set32(c.r[3], c.r[21].w[0] + 236u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[21].w[0] + 136u), c.r[3].w[0]);  if (t) { goto L_003267C0; } }
L_00326724:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032672Cu); set32(c.r[4], 0u + 437u);  if (depth < kMaxDepth) unit_000B(c, 461u, depth + 1u); else { c.pc = 0x0012FD60u; return; } if (c.pc != 0x0032672Cu) [[unlikely]] return; }
L_0032672C:
    st32((c.r[21].w[0] + 128u), c.r[2].w[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00470000u);
    st32((c.r[21].w[0] + 132u), 0u);
    set32(c.r[4], c.r[21].w[0] + 236u);
    set32(c.r[6], ld32((c.r[20].w[0] + 32u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00326748u); set32(c.r[5], c.r[5].w[0] - 13048u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x00127458u; return; } if (c.pc != 0x00326748u) [[unlikely]] return; }
L_00326748:
    set32(c.r[3], c.r[21].w[0] + 236u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[21].w[0] + 136u), c.r[3].w[0]);  if (t) { goto L_003267C0; } }
L_00326754:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032675Cu); set32(c.r[4], 0u + 437u);  if (depth < kMaxDepth) unit_000B(c, 461u, depth + 1u); else { c.pc = 0x0012FD60u; return; } if (c.pc != 0x0032675Cu) [[unlikely]] return; }
L_0032675C:
    st32((c.r[21].w[0] + 128u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00326768u); set32(c.r[4], 0u + 439u);  if (depth < kMaxDepth) unit_000B(c, 461u, depth + 1u); else { c.pc = 0x0012FD60u; return; } if (c.pc != 0x00326768u) [[unlikely]] return; }
L_00326768:
    st32((c.r[21].w[0] + 132u), c.r[2].w[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[6], ld32((c.r[20].w[0] + 32u)));
    set32(c.r[4], c.r[21].w[0] + 236u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00326780u); set32(c.r[5], c.r[5].w[0] - 13048u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x00127458u; return; } if (c.pc != 0x00326780u) [[unlikely]] return; }
L_00326780:
    set32(c.r[3], c.r[21].w[0] + 236u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[21].w[0] + 136u), c.r[3].w[0]);  if (t) { goto L_003267C0; } }
L_0032678C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00326794u); set32(c.r[4], 0u + 450u);  if (depth < kMaxDepth) unit_000B(c, 461u, depth + 1u); else { c.pc = 0x0012FD60u; return; } if (c.pc != 0x00326794u) [[unlikely]] return; }
L_00326794:
    st32((c.r[21].w[0] + 128u), c.r[2].w[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[4], c.r[21].w[0] + 236u);
    set32(c.r[2], c.r[2].w[0] - 13056u);
    st32((c.r[21].w[0] + 132u), c.r[2].w[0]);
    set32(c.r[6], ld32((c.r[20].w[0] + 32u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003267B8u); set32(c.r[5], c.r[5].w[0] - 13048u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x00127458u; return; } if (c.pc != 0x003267B8u) [[unlikely]] return; }
L_003267B8:
    set32(c.r[3], c.r[21].w[0] + 236u);
    st32((c.r[21].w[0] + 136u), c.r[3].w[0]);
    c.budget -= 2;
L_003267C0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.budget -= 1;
L_003267C4:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_003267F0:
    set32(c.r[5], ld32((c.r[4].w[0] + 284u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[4].w[0] + 300u), c.r[5].w[0]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 304u), c.r[3].w[0]);  c.pc = t; return; }
L_00326810:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[2].d[0] = ld8((c.r[4].w[0] + 296u));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0032682C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_00326838; } }
L_0032682C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00326834u);  if (depth < kMaxDepth) unit_006E(c, 449u, depth + 1u); else { c.pc = 0x002BB2D0u; return; } if (c.pc != 0x00326834u) [[unlikely]] return; }
L_00326834:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_00326838:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00326840:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00326854u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 374u, depth + 1u); else { c.pc = 0x0012ECC0u; return; } if (c.pc != 0x00326854u) [[unlikely]] return; }
L_00326854:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] + 20672u);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    st8((c.r[16].w[0] + 35u), static_cast<std::uint8_t>(0u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00326880:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003268E8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] + 20672u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_003268D0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] - 21696u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_003268D0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 21664u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003268D0u); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000B(c, 347u, depth + 1u); else { c.pc = 0x0012E8A0u; return; } if (c.pc != 0x003268D0u) [[unlikely]] return; }
L_003268D0:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003268EC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003268E8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x003268E8u) [[unlikely]] return; }
L_003268E8:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003268EC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00326900:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_00326910:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00326924u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 335u, depth + 1u); else { c.pc = 0x0012E720u; return; } if (c.pc != 0x00326924u) [[unlikely]] return; }
L_00326924:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[5], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] + 20624u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[4], c.r[16].w[0] + 4u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[8], c.r[8].w[0] - 1672u);
    c.r[9].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00326954u); c.r[10].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0089(c, 304u, depth + 1u); else { c.pc = 0x00326840u; return; } if (c.pc != 0x00326954u) [[unlikely]] return; }
L_00326954:
    st8((c.r[16].w[0] + 48u), static_cast<std::uint8_t>(0u));
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 40u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00326970:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003269C8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[4], c.r[17].w[0] + 4u);
    set32(c.r[2], c.r[2].w[0] + 20624u);
    set32(c.r[5], 0u - 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003269A4u); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0089(c, 306u, depth + 1u); else { c.pc = 0x00326880u; return; } if (c.pc != 0x003269A4u) [[unlikely]] return; }
L_003269A4:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003269B0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 336u, depth + 1u); else { c.pc = 0x0012E740u; return; } if (c.pc != 0x003269B0u) [[unlikely]] return; }
L_003269B0:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003269CC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003269C8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x003269C8u) [[unlikely]] return; }
L_003269C8:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003269CC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003269E0:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 48u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_003269F0:
    c.r[3].d[0] = c.r[5].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_00326A04; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 40u), c.r[3].w[0]);  if (t) { goto L_00326A08; } }
L_00326A04:
    st32((c.r[4].w[0] + 40u), 0u);
    c.budget -= 1;
L_00326A08:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00326A10:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 8u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00325B80u | kUnwind; return; } goto L_00325B80; }
L_00326A20:
    c.r[3].d[0] = c.r[4].d[0] << 56;
    set32(c.r[2], 0u + 1u);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00326A50; } }
    c.r[2].d[0] = c.r[5].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00326A48; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 1;
L_00326A48:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00326A68; } }
L_00326A50:
    c.r[3].d[0] = c.r[5].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00326A68; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00326A68; } }
L_00326A68:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00326A70:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00326A84u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0012(c, 39u, depth + 1u); else { c.pc = 0x001486F0u; return; } if (c.pc != 0x00326A84u) [[unlikely]] return; }
L_00326A84:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] + 21120u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    st32((c.r[16].w[0] + 32u), 0u);
    st32((c.r[16].w[0] + 36u), 0u);
    st32((c.r[16].w[0] + 40u), 0u);
    set32(c.r[4], ld32((c.r[16].w[0] + 32u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 40u)));
    set32(c.r[3], c.r[2].w[0] - c.r[4].w[0]);
    c.budget -= 11;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 5));  if (t) { goto L_00326AB8; } }
    set32(c.r[2], c.r[3].w[0] + 31u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 5));
    c.budget -= 2;
L_00326AB8:
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00326B1C; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00326AE8; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00326ADC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00326ADCu); set32(c.r[4], c.r[4].w[0] - 16u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100210u; return; } if (c.pc != 0x00326ADCu) [[unlikely]] return; }
L_00326ADC:
    st32((c.r[16].w[0] + 40u), 0u);
    st32((c.r[16].w[0] + 36u), 0u);
    st32((c.r[16].w[0] + 32u), 0u);
    c.budget -= 3;
L_00326AE8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00326AF0u); set32(c.r[4], 0u + 80u);  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x001001F0u; return; } if (c.pc != 0x00326AF0u) [[unlikely]] return; }
L_00326AF0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00180000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 176u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u + 32u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00326B0Cu); set32(c.r[8], 0u + 2u);  if (depth < kMaxDepth) unit_0000(c, 94u, depth + 1u); else { c.pc = 0x001008C0u; return; } if (c.pc != 0x00326B0Cu) [[unlikely]] return; }
L_00326B0C:
    st32((c.r[16].w[0] + 32u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 32u)));
    set32(c.r[2], c.r[2].w[0] + 64u);
    st32((c.r[16].w[0] + 36u), c.r[2].w[0]);
    c.budget -= 4;
L_00326B1C:
    set32(c.r[2], ld32((c.r[16].w[0] + 32u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 12904u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 64u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00326B3Cu); st32((c.r[16].w[0] + 40u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0012(c, 45u, depth + 1u); else { c.pc = 0x001487B0u; return; } if (c.pc != 0x00326B3Cu) [[unlikely]] return; }
L_00326B3C:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00326B50:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00326BD4; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[17].w[0] + 32u);
    set32(c.r[3], c.r[3].w[0] + 21120u);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[17].w[0]), c.r[3].w[0]);  if (t) { goto L_00326BB0; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00326BB4; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 32u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00326BB0; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[2].w[0] - 16u);  if (t) { goto L_00326BA4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00326BA4u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100210u; return; } if (c.pc != 0x00326BA4u) [[unlikely]] return; }
L_00326BA4:
    st32((c.r[17].w[0] + 40u), 0u);
    st32((c.r[17].w[0] + 36u), 0u);
    st32((c.r[17].w[0] + 32u), 0u);
    c.budget -= 3;
L_00326BB0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00326BB4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00326BBCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0012(c, 42u, depth + 1u); else { c.pc = 0x00148750u; return; } if (c.pc != 0x00326BBCu) [[unlikely]] return; }
L_00326BBC:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00326BD8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00326BD4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x00326BD4u) [[unlikely]] return; }
L_00326BD4:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00326BD8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00326BF0:
    set32(c.r[29], c.r[29].w[0] - 2272u);
    c.r[7].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00326C0Cu); set32(c.r[4], c.r[29].w[0] + 2248u);  if (depth < kMaxDepth) unit_0017(c, 125u, depth + 1u); else { c.pc = 0x0015D850u; return; } if (c.pc != 0x00326C0Cu) [[unlikely]] return; }
L_00326C0C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00326C14u); set32(c.r[4], 0u + 12u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00326C14u) [[unlikely]] return; }
L_00326C14:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00326C28; } }
    set32(c.r[5], c.r[29].w[0] + 2248u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00326C28u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0017(c, 127u, depth + 1u); else { c.pc = 0x0015D890u; return; } if (c.pc != 0x00326C28u) [[unlikely]] return; }
L_00326C28:
    st32((c.r[29].w[0] + 2268u), c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 2268u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00326C38u); set32(c.r[5], c.r[16].w[0] + 32u);  if (depth < kMaxDepth) unit_0025(c, 350u, depth + 1u); else { c.pc = 0x00197140u; return; } if (c.pc != 0x00326C38u) [[unlikely]] return; }
L_00326C38:
    set32(c.r[3], 0u + 10752u);
    set32(c.r[2], 0u + 10975u);
    st16((c.r[29].w[0] + 2264u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[4], c.r[29].w[0] + 32u);
    st16((c.r[29].w[0] + 2266u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[5], c.r[29].w[0] + 2264u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00326C58u); set32(c.r[6], 0u + 2u);  if (depth < kMaxDepth) unit_0020(c, 15u, depth + 1u); else { c.pc = 0x001801C0u; return; } if (c.pc != 0x00326C58u) [[unlikely]] return; }
L_00326C58:
    set32(c.r[5], c.r[16].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00326C64u); set32(c.r[4], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_0020(c, 43u, depth + 1u); else { c.pc = 0x00180690u; return; } if (c.pc != 0x00326C64u) [[unlikely]] return; }
L_00326C64:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00326C6Cu); set32(c.r[4], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_0020(c, 46u, depth + 1u); else { c.pc = 0x00180720u; return; } if (c.pc != 0x00326C6Cu) [[unlikely]] return; }
L_00326C6C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00326C74u); set32(c.r[4], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_0020(c, 48u, depth + 1u); else { c.pc = 0x00180760u; return; } if (c.pc != 0x00326C74u) [[unlikely]] return; }
L_00326C74:
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00326C80u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0020(c, 26u, depth + 1u); else { c.pc = 0x00180340u; return; } if (c.pc != 0x00326C80u) [[unlikely]] return; }
L_00326C80:
    set32(c.r[4], ld32((c.r[29].w[0] + 2268u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[5], 0u + 1u);  if (t) { goto L_00326C94; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00326C94u);  if (depth < kMaxDepth) unit_0017(c, 138u, depth + 1u); else { c.pc = 0x0015D9D0u; return; } if (c.pc != 0x00326C94u) [[unlikely]] return; }
L_00326C94:
    set32(c.r[4], c.r[29].w[0] + 2248u);
    set32(c.r[5], 0u - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00326CA4u); st32((c.r[29].w[0] + 2268u), 0u);  if (depth < kMaxDepth) unit_0017(c, 138u, depth + 1u); else { c.pc = 0x0015D9D0u; return; } if (c.pc != 0x00326CA4u) [[unlikely]] return; }
L_00326CA4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 2272u);  c.pc = t; return; }
L_00326CC0:
    set32(c.r[2], ld32((c.r[4].w[0] + 32u)));
    set32(c.r[3], c.r[5].w[0] << 5);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = ld64((c.r[2].w[0] + 16u));  c.pc = t; return; }
L_00326CE0:
    set32(c.r[29], c.r[29].w[0] - 128u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00470000u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    set32(c.r[3], c.r[3].w[0] - 12888u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    set32(c.r[2], c.r[2].w[0] - 5464u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[5], c.r[7].w[0] << 2);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[21], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[20], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[6], ld32((c.r[21].w[0])));
    set32(c.r[5], ld32((c.r[20].w[0])));
    c.r[16].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 23;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00326D3Cu); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000C(c, 12u, depth + 1u); else { c.pc = 0x001300B0u; return; } if (c.pc != 0x00326D3Cu) [[unlikely]] return; }
L_00326D3C:
    set32(c.r[4], c.r[19].w[0] + 40u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00326D48u); set32(c.r[5], 0u + 12u);  if (depth < kMaxDepth) unit_000F(c, 264u, depth + 1u); else { c.pc = 0x0013E560u; return; } if (c.pc != 0x00326D48u) [[unlikely]] return; }
L_00326D48:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 20944u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00470000u);
    st32((c.r[19].w[0]), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + 21032u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    st32((c.r[19].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] + 21092u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43A00000u);
    st32((c.r[19].w[0] + 40u), c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[14] = ld32((c.r[1].w[0] - 12832u));
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[12] = c.r[2].w[0];
    set32(c.r[4], c.r[19].w[0] + 52u);
    set32(c.r[5], 0u + 11u);
    set32(c.r[6], 0u + 50u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42400000u);
    set32(c.r[7], 0u + 830u);
    c.f[13] = c.r[2].w[0];
    set32(c.r[8], c.r[8].w[0] - 12960u);
    set32(c.r[9], c.r[9].w[0] - 12928u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[15] = ld32((c.r[1].w[0] - 12840u));
    c.budget -= 27;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00326DB4u); c.r[10].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000D(c, 34u, depth + 1u); else { c.pc = 0x00134330u; return; } if (c.pc != 0x00326DB4u) [[unlikely]] return; }
L_00326DB4:
    set32(c.r[4], c.r[19].w[0] + 180u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00326DC4u); st32((c.r[19].w[0] + 176u), 0u);  if (depth < kMaxDepth) unit_0049(c, 271u, depth + 1u); else { c.pc = 0x002275A0u; return; } if (c.pc != 0x00326DC4u) [[unlikely]] return; }
L_00326DC4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41980000u);
    st32((c.r[19].w[0] + 216u), 0u);
    c.f[14] = c.r[2].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[12] = ld32((c.r[1].w[0] - 12832u));
    set32(c.r[5], ld32((c.r[20].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43A00000u);
    set32(c.r[6], ld32((c.r[21].w[0])));
    c.f[15] = c.r[2].w[0];
    set32(c.r[4], c.r[19].w[0] + 224u);
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43450000u);
    c.r[9].d[0] = 0ull + 0ull;
    c.f[16] = c.r[2].w[0];
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00326E08u); c.f[13] = c.f[12];  if (depth < kMaxDepth) unit_000C(c, 301u, depth + 1u); else { c.pc = 0x00132AA0u; return; } if (c.pc != 0x00326E08u) [[unlikely]] return; }
L_00326E08:
    st32((c.r[19].w[0] + 580u), 0u);
    set32(c.r[4], 0u + 9u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00326E18u); st32((c.r[19].w[0] + 584u), 0u);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x00326E18u) [[unlikely]] return; }
L_00326E18:
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00326E24u); set32(c.r[4], 0u + 8u);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x00326E24u) [[unlikely]] return; }
L_00326E24:
    ld128((c.r[2].w[0]) & ~15u, c.r[5]);
    set32(c.r[3], 0u + 30u);
    set32(c.r[4], 0u + 48u);
    st128((c.r[19].w[0] + 592u) & ~15u, c.r[5]);
    set32(c.r[2], 0u + 1u);
    ld128((c.r[20].w[0]) & ~15u, c.r[5]);
    st128((c.r[19].w[0] + 608u) & ~15u, c.r[5]);
    st32((c.r[19].w[0] + 644u), c.r[3].w[0]);
    st32((c.r[19].w[0] + 640u), 0u);
    st32((c.r[19].w[0] + 652u), 0u);
    st8((c.r[19].w[0] + 648u), static_cast<std::uint8_t>(0u));
    ld128((c.r[19].w[0] + 592u) & ~15u, c.r[3]);
    st128((c.r[19].w[0] + 624u) & ~15u, c.r[3]);
    st32((c.r[19].w[0] + 656u), 0u);
    st32((c.r[19].w[0] + 708u), c.r[16].w[0]);
    st32((c.r[19].w[0] + 712u), c.r[18].w[0]);
    st8((c.r[19].w[0] + 716u), static_cast<std::uint8_t>(c.r[17].w[0]));
    st32((c.r[19].w[0] + 720u), 0u);
    st8((c.r[19].w[0] + 724u), static_cast<std::uint8_t>(0u));
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00326E78u); st32((c.r[19].w[0] + 540u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00326E78u) [[unlikely]] return; }
L_00326E78:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00326E88; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00326E88u);  if (depth < kMaxDepth) unit_0089(c, 321u, depth + 1u); else { c.pc = 0x00326A70u; return; } if (c.pc != 0x00326E88u) [[unlikely]] return; }
L_00326E88:
    st32((c.r[19].w[0] + 576u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00326E94u); set32(c.r[4], 0u + 80u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00326E94u) [[unlikely]] return; }
L_00326E94:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull; set32(c.r[3], 0u + 10752u);  if (t) { goto L_00326ECC; } }
    set32(c.r[2], 0u + 15311u);
    st16((c.r[29].w[0] + 124u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00326EB0u); st16((c.r[29].w[0] + 126u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0010(c, 59u, depth + 1u); else { c.pc = 0x00140BF0u; return; } if (c.pc != 0x00326EB0u) [[unlikely]] return; }
L_00326EB0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 12904u);
    set32(c.r[6], c.r[29].w[0] + 124u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00326EC8u); c.r[7].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_002A(c, 7u, depth + 1u); else { c.pc = 0x001A80E0u; return; } if (c.pc != 0x00326EC8u) [[unlikely]] return; }
L_00326EC8:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00326ECC:
    st32((c.r[19].w[0] + 584u), c.r[16].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[3], 0u + 86u);
    c.budget -= 3;
L_00326ED8:
    set32(c.r[2], c.r[5].w[0] << 4);
    set32(c.r[4], c.r[19].w[0] + c.r[2].w[0]);
    set32(c.r[5], c.r[5].w[0] + 1u);
    st32((c.r[4].w[0] + 664u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[5].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 660u), 0u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00326ED8u | kUnwind; return; } goto L_00326ED8; } }
    st32((c.r[19].w[0] + 524u), 0u);
    set32(c.r[4], c.r[19].w[0] + 448u);
    st32((c.r[19].w[0] + 508u), 0u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00326F08u); st8((c.r[19].w[0] + 504u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_002A(c, 280u, depth + 1u); else { c.pc = 0x001AB050u; return; } if (c.pc != 0x00326F08u) [[unlikely]] return; }
L_00326F08:
    set32(c.r[5], ld32((c.r[19].w[0] + 708u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[2], ld32((c.r[19].w[0] + 720u)));
    set32(c.r[3], c.r[3].w[0] - 4992u);
    set32(c.r[4], 0u + 12u);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[5], ld32((c.r[3].w[0])));
    set32(c.r[3], c.r[19].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[5].w[0])));
    st32((c.r[3].w[0] + 660u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[5].w[0] + 4u)));
    st32((c.r[3].w[0] + 664u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[5].w[0] + 8u)));
    st32((c.r[3].w[0] + 668u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[5].w[0] + 12u)));
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00326F54u); st32((c.r[3].w[0] + 672u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0076(c, 191u, depth + 1u); else { c.pc = 0x002D9970u; return; } if (c.pc != 0x00326F54u) [[unlikely]] return; }
L_00326F54:
    c.r[2].d[0] = c.r[19].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_00326F80:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003270DC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] + 20944u);
    set32(c.r[3], c.r[3].w[0] + 21032u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    st32((c.r[17].w[0] + 20u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + 21092u);
    st32((c.r[17].w[0] + 40u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 176u)));
    c.budget -= 12;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00326FE4; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00326FE4; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00326FE4u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00326FE4u) [[unlikely]] return; }
L_00326FE4:
    st32((c.r[17].w[0] + 176u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 580u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0032700C; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0032700C; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0032700Cu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0032700Cu) [[unlikely]] return; }
L_0032700C:
    st32((c.r[17].w[0] + 580u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 576u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00327034; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00327034; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00327034u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00327034u) [[unlikely]] return; }
L_00327034:
    st32((c.r[17].w[0] + 576u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 216u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0032705C; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0032705C; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0032705Cu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0032705Cu) [[unlikely]] return; }
L_0032705C:
    st32((c.r[17].w[0] + 216u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 584u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00327084; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00327084; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00327084u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00327084u) [[unlikely]] return; }
L_00327084:
    set32(c.r[4], c.r[17].w[0] + 224u);
    set32(c.r[5], 0u - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00327094u); st32((c.r[17].w[0] + 584u), 0u);  if (depth < kMaxDepth) unit_000C(c, 311u, depth + 1u); else { c.pc = 0x00132C60u; return; } if (c.pc != 0x00327094u) [[unlikely]] return; }
L_00327094:
    set32(c.r[4], c.r[17].w[0] + 180u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003270A0u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0049(c, 274u, depth + 1u); else { c.pc = 0x002275F0u; return; } if (c.pc != 0x003270A0u) [[unlikely]] return; }
L_003270A0:
    set32(c.r[4], c.r[17].w[0] + 52u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003270ACu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000D(c, 54u, depth + 1u); else { c.pc = 0x00134720u; return; } if (c.pc != 0x003270ACu) [[unlikely]] return; }
L_003270AC:
    set32(c.r[4], c.r[17].w[0] + 40u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003270B8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000F(c, 266u, depth + 1u); else { c.pc = 0x0013E5B0u; return; } if (c.pc != 0x003270B8u) [[unlikely]] return; }
L_003270B8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003270C4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000C(c, 15u, depth + 1u); else { c.pc = 0x00130130u; return; } if (c.pc != 0x003270C4u) [[unlikely]] return; }
L_003270C4:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003270E0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003270DCu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x003270DCu) [[unlikely]] return; }
L_003270DC:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003270E0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00327100:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00327118u); set32(c.r[4], 0u + 44u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00327118u) [[unlikely]] return; }
L_00327118:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[7].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00327148; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0032712C; } }
    set32(c.r[7], c.r[7].w[0] + 20u);
    c.budget -= 1;
L_0032712C:
    set32(c.r[8], ld32((c.r[16].w[0] + 28u)));
    set32(c.r[5], 0u + 1u);
    set32(c.r[9], ld32((c.r[16].w[0] + 32u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00327148u); c.r[10].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 371u, depth + 1u); else { c.pc = 0x0012EBA0u; return; } if (c.pc != 0x00327148u) [[unlikely]] return; }
L_00327148:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00327160:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00327178u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_000C(c, 25u, depth + 1u); else { c.pc = 0x00130270u; return; } if (c.pc != 0x00327178u) [[unlikely]] return; }
L_00327178:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], ld32((c.r[16].w[0] + 176u)));
    set32(c.r[3], ld32((c.r[1].w[0] + 26392u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[17], c.r[3].w[0] + 624u);  if (t) { goto L_003271D8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00327194u); set32(c.r[4], 0u + 160u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00327194u) [[unlikely]] return; }
L_00327194:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_003271A8; } }
    set32(c.r[5], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003271A8u); set32(c.r[6], 0u + 2u);  if (depth < kMaxDepth) unit_002A(c, 287u, depth + 1u); else { c.pc = 0x001AB200u; return; } if (c.pc != 0x003271A8u) [[unlikely]] return; }
L_003271A8:
    st32((c.r[16].w[0] + 176u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003271B8u); set32(c.r[5], 0u + 10000u);  if (depth < kMaxDepth) unit_002A(c, 5u, depth + 1u); else { c.pc = 0x001A80A0u; return; } if (c.pc != 0x003271B8u) [[unlikely]] return; }
L_003271B8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003271C8u); c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_002A(c, 3u, depth + 1u); else { c.pc = 0x001A8060u; return; } if (c.pc != 0x003271C8u) [[unlikely]] return; }
L_003271C8:
    set32(c.r[4], ld32((c.r[16].w[0] + 176u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003271D8u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 322u, depth + 1u); else { c.pc = 0x00196E30u; return; } if (c.pc != 0x003271D8u) [[unlikely]] return; }
L_003271D8:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 716u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00327200; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003271F8u); set32(c.r[5], 0u + 156u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003271F8u) [[unlikely]] return; }
L_003271F8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[16].w[0] + 216u)));  if (t) { goto L_00327218; } }
L_00327200:
    set32(c.r[4], ld32((c.r[16].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00327214u); set32(c.r[5], 0u + 109u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00327214u) [[unlikely]] return; }
L_00327214:
    set32(c.r[2], ld32((c.r[16].w[0] + 216u)));
    c.budget -= 1;
L_00327218:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], 0u + 160u);  if (t) { goto L_0032726C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00327228u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00327228u) [[unlikely]] return; }
L_00327228:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0032723C; } }
    set32(c.r[5], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032723Cu); set32(c.r[6], 0u + 2u);  if (depth < kMaxDepth) unit_0025(c, 304u, depth + 1u); else { c.pc = 0x00196C90u; return; } if (c.pc != 0x0032723Cu) [[unlikely]] return; }
L_0032723C:
    st32((c.r[16].w[0] + 216u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 584u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032724Cu); set32(c.r[5], 0u + 10000u);  if (depth < kMaxDepth) unit_002A(c, 5u, depth + 1u); else { c.pc = 0x001A80A0u; return; } if (c.pc != 0x0032724Cu) [[unlikely]] return; }
L_0032724C:
    set32(c.r[4], ld32((c.r[16].w[0] + 584u)));
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032725Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002A(c, 3u, depth + 1u); else { c.pc = 0x001A8060u; return; } if (c.pc != 0x0032725Cu) [[unlikely]] return; }
L_0032725C:
    set32(c.r[4], ld32((c.r[16].w[0] + 216u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032726Cu); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 322u, depth + 1u); else { c.pc = 0x00196E30u; return; } if (c.pc != 0x0032726Cu) [[unlikely]] return; }
L_0032726C:
    set32(c.r[4], ld32((c.r[16].w[0] + 216u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00327280u); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00327280u) [[unlikely]] return; }
L_00327280:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[5], c.r[29].w[0] + 48u);
    set32(c.r[2], c.r[2].w[0] - 4976u);
    set32(c.r[4], c.r[16].w[0] + 180u);
    ld128((c.r[2].w[0]) & ~15u, c.r[3]);
    c.r[2].d[0] = ld64((c.r[2].w[0] + 16u));
    st128((c.r[5].w[0]) & ~15u, c.r[3]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003272A4u); st64((c.r[5].w[0] + 16u), c.r[2].d[0]);  if (depth < kMaxDepth) unit_0049(c, 280u, depth + 1u); else { c.pc = 0x002276C0u; return; } if (c.pc != 0x003272A4u) [[unlikely]] return; }
L_003272A4:
    set32(c.r[2], 0u + 1u);
    set32(c.r[4], c.r[16].w[0] + 52u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003272B4u); st32((c.r[16].w[0] + 540u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000D(c, 68u, depth + 1u); else { c.pc = 0x001348C0u; return; } if (c.pc != 0x003272B4u) [[unlikely]] return; }
L_003272B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003272BCu); set32(c.r[4], 0u + 272u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x003272BCu) [[unlikely]] return; }
L_003272BC:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_003272E4; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 576u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003272D4u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0089(c, 343u, depth + 1u); else { c.pc = 0x00326CC0u; return; } if (c.pc != 0x003272D4u) [[unlikely]] return; }
L_003272D4:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003272E0u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 188u, depth + 1u); else { c.pc = 0x0015ED60u; return; } if (c.pc != 0x003272E0u) [[unlikely]] return; }
L_003272E0:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_003272E4:
    st32((c.r[16].w[0] + 580u), c.r[17].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00327300:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[2], 0u + 3u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 720u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003273B8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00327324u);  if (depth < kMaxDepth) unit_000C(c, 26u, depth + 1u); else { c.pc = 0x00130280u; return; } if (c.pc != 0x00327324u) [[unlikely]] return; }
L_00327324:
    set32(c.r[4], ld32((c.r[16].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00327338u); set32(c.r[5], 0u + 155u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00327338u) [[unlikely]] return; }
L_00327338:
    set32(c.r[4], ld32((c.r[16].w[0] + 216u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0032734Cu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0032734Cu) [[unlikely]] return; }
L_0032734C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[5], c.r[29].w[0] + 32u);
    set32(c.r[2], c.r[2].w[0] - 4944u);
    set32(c.r[4], c.r[16].w[0] + 180u);
    ld128((c.r[2].w[0]) & ~15u, c.r[3]);
    c.r[2].d[0] = ld64((c.r[2].w[0] + 16u));
    st128((c.r[5].w[0]) & ~15u, c.r[3]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00327370u); st64((c.r[5].w[0] + 16u), c.r[2].d[0]);  if (depth < kMaxDepth) unit_0049(c, 280u, depth + 1u); else { c.pc = 0x002276C0u; return; } if (c.pc != 0x00327370u) [[unlikely]] return; }
L_00327370:
    set32(c.r[2], 0u + 2u);
    set32(c.r[4], c.r[16].w[0] + 52u);
    st32((c.r[16].w[0] + 656u), c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00327384u); st32((c.r[16].w[0] + 540u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000D(c, 69u, depth + 1u); else { c.pc = 0x001348D0u; return; } if (c.pc != 0x00327384u) [[unlikely]] return; }
L_00327384:
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00327388:
    set32(c.r[3], c.r[7].w[0] << 4);
    set32(c.r[5], c.r[7].w[0] << 2);
    set32(c.r[3], c.r[16].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 712u)));
    set32(c.r[6], ld32((c.r[3].w[0] + 664u)));
    set32(c.r[7], c.r[7].w[0] + 1u);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    c.r[3].d[0] = c.r[7].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0]), c.r[6].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00327388u | kUnwind; return; } goto L_00327388; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_003274AC; } }
L_003273B8:
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 48u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003273C8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003273C8u) [[unlikely]] return; }
L_003273C8:
    set32(c.r[5], ld32((c.r[16].w[0] + 708u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[3], ld32((c.r[16].w[0] + 720u)));
    set32(c.r[6], c.r[2].w[0] << 4);
    set32(c.r[4], c.r[4].w[0] - 4992u);
    set32(c.r[2], 0u + 3u);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[5], ld32((c.r[4].w[0])));
    set32(c.r[4], c.r[16].w[0] + c.r[3].w[0]);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0])));
    st32((c.r[4].w[0] + 660u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0] + 4u)));
    st32((c.r[4].w[0] + 664u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0] + 8u)));
    st32((c.r[4].w[0] + 668u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0] + 12u)));
    st32((c.r[4].w[0] + 672u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 720u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[16].w[0] + 720u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 720u)));
    c.budget -= 26;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0032744C; } }
    st8((c.r[16].w[0] + 568u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 569u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00327444u); set32(c.r[4], 0u + 8u);  if (depth < kMaxDepth) unit_0076(c, 191u, depth + 1u); else { c.pc = 0x002D9970u; return; } if (c.pc != 0x00327444u) [[unlikely]] return; }
L_00327444:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003274A8; } }
L_0032744C:
    st32((c.r[16].w[0] + 524u), 0u);
    set32(c.r[4], c.r[16].w[0] + 448u);
    st32((c.r[16].w[0] + 508u), 0u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00327460u); st8((c.r[16].w[0] + 504u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_002A(c, 280u, depth + 1u); else { c.pc = 0x001AB050u; return; } if (c.pc != 0x00327460u) [[unlikely]] return; }
L_00327460:
    set32(c.r[25], ld32((c.r[16].w[0])));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 140u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00327474u); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00327474u) [[unlikely]] return; }
L_00327474:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[4], ld32((c.r[16].w[0] + 720u)));
    set32(c.r[5], ld32((c.r[1].w[0] - 4992u)));
    set32(c.r[4], c.r[4].w[0] << 4);
    set32(c.r[3], ld32((c.r[5].w[0])));
    set32(c.r[4], c.r[16].w[0] + c.r[4].w[0]);
    st32((c.r[4].w[0] + 660u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0] + 4u)));
    st32((c.r[4].w[0] + 664u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0] + 8u)));
    st32((c.r[4].w[0] + 668u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0] + 12u)));
    st32((c.r[4].w[0] + 672u), c.r[3].w[0]);
    c.budget -= 13;
L_003274A8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_003274AC:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003274C0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 720u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00327548; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003274E0u);  if (depth < kMaxDepth) unit_000C(c, 27u, depth + 1u); else { c.pc = 0x00130290u; return; } if (c.pc != 0x003274E0u) [[unlikely]] return; }
L_003274E0:
    set32(c.r[4], ld32((c.r[16].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003274F4u); set32(c.r[5], 0u + 110u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003274F4u) [[unlikely]] return; }
L_003274F4:
    set32(c.r[4], ld32((c.r[16].w[0] + 216u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00327508u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00327508u) [[unlikely]] return; }
L_00327508:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[5], c.r[29].w[0] + 32u);
    set32(c.r[2], c.r[2].w[0] - 4912u);
    set32(c.r[4], c.r[16].w[0] + 180u);
    ld128((c.r[2].w[0]) & ~15u, c.r[3]);
    c.r[2].d[0] = ld64((c.r[2].w[0] + 16u));
    st128((c.r[5].w[0]) & ~15u, c.r[3]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032752Cu); st64((c.r[5].w[0] + 16u), c.r[2].d[0]);  if (depth < kMaxDepth) unit_0049(c, 280u, depth + 1u); else { c.pc = 0x002276C0u; return; } if (c.pc != 0x0032752Cu) [[unlikely]] return; }
L_0032752C:
    set32(c.r[2], 0u + 2u);
    set32(c.r[4], c.r[16].w[0] + 52u);
    st32((c.r[16].w[0] + 656u), c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00327540u); st32((c.r[16].w[0] + 540u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000D(c, 69u, depth + 1u); else { c.pc = 0x001348D0u; return; } if (c.pc != 0x00327540u) [[unlikely]] return; }
L_00327540:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_003275DC; } }
L_00327548:
    c.r[1].d[0] = c.r[2].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00327574; } }
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[3], 0u + 86u);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    st32((c.r[2].w[0] + 664u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 720u)));
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    st32((c.r[2].w[0] + 660u), 0u);
    c.budget -= 8;
L_00327574:
    set32(c.r[2], ld32((c.r[16].w[0] + 720u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[16].w[0] + 720u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 720u)));
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[25], ld32((c.r[25].w[0] + 140u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 660u)));
    c.budget -= 11;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003275A0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003275A0u) [[unlikely]] return; }
L_003275A0:
    set32(c.r[2], ld32((c.r[16].w[0] + 720u)));
    set32(c.r[4], c.r[16].w[0] + 448u);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 660u)));
    st32((c.r[16].w[0] + 524u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 508u), 0u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003275C4u); st8((c.r[16].w[0] + 504u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_002A(c, 280u, depth + 1u); else { c.pc = 0x001AB050u; return; } if (c.pc != 0x003275C4u) [[unlikely]] return; }
L_003275C4:
    set32(c.r[2], 0u + 1u);
    set32(c.r[4], 0u + 12u);
    st8((c.r[16].w[0] + 568u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003275D8u); st8((c.r[16].w[0] + 569u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0076(c, 191u, depth + 1u); else { c.pc = 0x002D9970u; return; } if (c.pc != 0x003275D8u) [[unlikely]] return; }
L_003275D8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_003275DC:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003275F0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[16], ld32((c.r[4].w[0] + 576u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00327610u); set32(c.r[4], c.r[16].w[0] + 8u);  if (depth < kMaxDepth) unit_0011(c, 177u, depth + 1u); else { c.pc = 0x00146C10u; return; } if (c.pc != 0x00327610u) [[unlikely]] return; }
L_00327610:
    c.r[3].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[4], c.r[16].w[0] + 8u);  if (t) { goto L_00327628; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00327624u);  if (depth < kMaxDepth) unit_0011(c, 182u, depth + 1u); else { c.pc = 0x00146C90u; return; } if (c.pc != 0x00327624u) [[unlikely]] return; }
L_00327624:
    c.r[3].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 1;
L_00327628:
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00327654; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032763Cu); set32(c.r[4], ld32((c.r[17].w[0] + 584u)));  if (depth < kMaxDepth) unit_0029(c, 351u, depth + 1u); else { c.pc = 0x001A7FE0u; return; } if (c.pc != 0x0032763Cu) [[unlikely]] return; }
L_0032763C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00327654; } }
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00327654u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00327654u) [[unlikely]] return; }
L_00327654:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00327670:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00327684u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_008A(c, 5u, depth + 1u); else { c.pc = 0x00328080u; return; } if (c.pc != 0x00327684u) [[unlikely]] return; }
L_00327684:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0032769C; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0032769Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0032769Cu) [[unlikely]] return; }
L_0032769C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003276B0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003276C4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_008A(c, 5u, depth + 1u); else { c.pc = 0x00328080u; return; } if (c.pc != 0x003276C4u) [[unlikely]] return; }
L_003276C4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003276DC; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003276DCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003276DCu) [[unlikely]] return; }
L_003276DC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003276F0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00327704u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_008A(c, 5u, depth + 1u); else { c.pc = 0x00328080u; return; } if (c.pc != 0x00327704u) [[unlikely]] return; }
L_00327704:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0032771C; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0032771Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0032771Cu) [[unlikely]] return; }
L_0032771C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00327730:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 724u));
    set32(c.r[16], ld32((c.r[1].w[0] - 1536u)));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003277A8; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 24u)));
    set32(c.r[3], 0u + 2u);
    set32(c.r[4], ld32((c.r[4].w[0] + 36u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_003278CC; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 720u)));
    set32(c.r[3], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003278CC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00327780u);  if (depth < kMaxDepth) unit_000F(c, 318u, depth + 1u); else { c.pc = 0x0013F100u; return; } if (c.pc != 0x00327780u) [[unlikely]] return; }
L_00327780:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003278CC; } }
    set32(c.r[2], 0u + 1u);
    set32(c.r[4], 0u + 400u);
    st8((c.r[17].w[0] + 724u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[17].w[0] + 24u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003277A0u); st32((c.r[2].w[0] + 36u), 0u);  if (depth < kMaxDepth) unit_002C(c, 36u, depth + 1u); else { c.pc = 0x001B0690u; return; } if (c.pc != 0x003277A0u) [[unlikely]] return; }
L_003277A0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_003278D0; } }
L_003277A8:
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 48u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003277B8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003277B8u) [[unlikely]] return; }
L_003277B8:
    set32(c.r[3], c.r[2].w[0] + 1u);
    set32(c.r[2], ld32((c.r[17].w[0] + 32u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);  if (t) { goto L_003277CC; } }
    breakpoint(c, 0x003277C8u);
    c.budget -= 1;
L_003277CC:
    set32(c.r[25], ld32((c.r[17].w[0])));
    c.r[5].d[0] = c.hi.d[0];
    set32(c.r[25], ld32((c.r[25].w[0] + 140u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003277E0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003277E0u) [[unlikely]] return; }
L_003277E0:
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 48u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003277F0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003277F0u) [[unlikely]] return; }
L_003277F0:
    st32((c.r[17].w[0] + 524u), c.r[2].w[0]);
    set32(c.r[4], c.r[17].w[0] + 448u);
    st32((c.r[17].w[0] + 508u), 0u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00327804u); st8((c.r[17].w[0] + 504u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_002A(c, 280u, depth + 1u); else { c.pc = 0x001AB050u; return; } if (c.pc != 0x00327804u) [[unlikely]] return; }
L_00327804:
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 48u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00327814u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00327814u) [[unlikely]] return; }
L_00327814:
    set32(c.r[4], ld32((c.r[17].w[0] + 708u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[5], c.r[2].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] - 4992u);
    set32(c.r[2], ld32((c.r[17].w[0] + 720u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[3], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0])));
    st32((c.r[3].w[0] + 660u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    st32((c.r[3].w[0] + 664u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    st32((c.r[3].w[0] + 668u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    st32((c.r[3].w[0] + 672u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[1].w[0] - 1664u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.budget -= 25;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00327878u); st32((c.r[1].w[0] - 1664u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0010(c, 15u, depth + 1u); else { c.pc = 0x00140210u; return; } if (c.pc != 0x00327878u) [[unlikely]] return; }
L_00327878:
    c.r[2].d[0] = c.r[2].d[0] & 63ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0032789C; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], ld32((c.r[17].w[0] + 32u)));
    set32(c.r[3], ld32((c.r[1].w[0] - 1664u)));
    c.r[1].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_003278AC; } }
L_0032789C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003278A4u);  if (depth < kMaxDepth) unit_000F(c, 318u, depth + 1u); else { c.pc = 0x0013F100u; return; } if (c.pc != 0x003278A4u) [[unlikely]] return; }
L_003278A4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003278CC; } }
L_003278AC:
    set32(c.r[2], ld32((c.r[17].w[0] + 24u)));
    set32(c.r[3], 0u + 1u);
    set32(c.r[4], 0u + 400u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00540000u);
    st32((c.r[2].w[0] + 36u), c.r[3].w[0]);
    st8((c.r[17].w[0] + 724u), static_cast<std::uint8_t>(0u));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003278CCu); st32((c.r[1].w[0] - 1664u), 0u);  if (depth < kMaxDepth) unit_002C(c, 36u, depth + 1u); else { c.pc = 0x001B0690u; return; } if (c.pc != 0x003278CCu) [[unlikely]] return; }
L_003278CC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_003278D0:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003278E0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003278F4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 319u, depth + 1u); else { c.pc = 0x0012E600u; return; } if (c.pc != 0x003278F4u) [[unlikely]] return; }
L_003278F4:
    set32(c.r[3], ld32((c.r[16].w[0] + 24u)));
    set32(c.r[4], 0u + 1u);
    st32((c.r[3].w[0] + 36u), c.r[4].w[0]);
    st32((c.r[16].w[0] + 656u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00327920:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00327934u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 304u, depth + 1u); else { c.pc = 0x0012E500u; return; } if (c.pc != 0x00327934u) [[unlikely]] return; }
L_00327934:
    c.f[0] = ld32((c.r[16].w[0] + 192u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    st32((c.r[16].w[0] + 528u), c.r[2].w[0]);
    c.r[2].d[0] = ld8((c.r[16].w[0] + 648u));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00327980; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 652u)));
    set32(c.r[3], c.r[2].w[0] - 1u);
    st32((c.r[16].w[0] + 652u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 640u)));
    set32(c.r[2], 0u - c.r[2].w[0]);
    c.r[1].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[4], c.r[16].w[0] + 592u);  if (t) { goto L_003279B4; } }
    st32((c.r[16].w[0] + 652u), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 648u), static_cast<std::uint8_t>(0u));  if (t) { goto L_003279B0; } }
L_00327980:
    set32(c.r[2], ld32((c.r[16].w[0] + 652u)));
    set32(c.r[4], c.r[2].w[0] + 1u);
    st32((c.r[16].w[0] + 652u), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 644u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 640u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.r[1].d[0] = c.r[2].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003279B0; } }
    st32((c.r[16].w[0] + 652u), c.r[2].w[0]);
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 648u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
L_003279B0:
    set32(c.r[4], c.r[16].w[0] + 592u);
    c.budget -= 1;
L_003279B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003279BCu);  if (depth < kMaxDepth) unit_002A(c, 280u, depth + 1u); else { c.pc = 0x001AB050u; return; } if (c.pc != 0x003279BCu) [[unlikely]] return; }
L_003279BC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003279D0:
    set32(c.r[29], c.r[29].w[0] - 368u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 12u), c.f[23]);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[3], ld32((c.r[1].w[0] + 26392u)));
    ld128((c.r[4].w[0] + 624u) & ~15u, c.r[2]);
    set32(c.r[16], ld32((c.r[3].w[0] + 440u)));
    set32(c.r[20], ld32((c.r[3].w[0] + 332u)));
    set32(c.r[19], ld32((c.r[3].w[0] + 444u)));
    st128((c.r[19].w[0] + 48u) & ~15u, c.r[2]);
    set32(c.r[2], ld32((c.r[4].w[0] + 656u)));
    c.budget -= 22;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], c.r[17].w[0] + 624u);  if (t) { goto L_00327A58; } }
    c.f[0] = ld32((c.r[17].w[0] + 192u));
    set32(c.r[4], ld32((c.r[5].w[0] + 12u)));
    set32(c.r[2], 0u + 255u);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    set32(c.r[2], c.r[4].w[0] - c.r[2].w[0]);
    c.budget -= 10;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_00327A54; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00327A54:
    st32((c.r[19].w[0] + 60u), c.r[2].w[0]);
    c.budget -= 1;
L_00327A58:
    c.f[0] = ld32((c.r[17].w[0] + 192u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[4], 0u + 5u);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    st32((c.r[16].w[0] + 60u), c.r[3].w[0]);
    c.f[0] = ld32((c.r[17].w[0] + 192u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    st32((c.r[16].w[0] + 300u), c.r[3].w[0]);
    c.f[0] = ld32((c.r[1].w[0] - 12848u));
    st32((c.r[20].w[0] + 16u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[0] = ld32((c.r[1].w[0] - 12848u));
    st32((c.r[20].w[0] + 20u), c.f[0]);
    st32((c.r[20].w[0] + 24u), c.r[2].w[0]);
    c.f[0] = ld32((c.r[17].w[0] + 192u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    c.budget -= 24;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00327AB8u); st32((c.r[20].w[0] + 60u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x00327AB8u) [[unlikely]] return; }
L_00327AB8:
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.r[18].d[0] = 0ull + 0ull;
    st32((c.r[20].w[0] + 48u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    st32((c.r[20].w[0] + 52u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    st32((c.r[20].w[0] + 56u), c.r[2].w[0]);
    set32(c.r[3], c.r[18].w[0] << 4);
    c.budget -= 8;
L_00327AD8:
    set32(c.r[2], 0u + 86u);
    set32(c.r[3], c.r[17].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 664u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 86u);  if (t) { goto L_00327BA4; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 720u)));
    c.budget -= 3;
    { const bool t = c.r[18].d[0] != c.r[2].d[0]; set32(c.r[4], 0u + 5u);  if (t) { goto L_00327BA0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00327B00u);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x00327B00u) [[unlikely]] return; }
L_00327B00:
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[6], c.r[18].w[0] + 1u);
    set32(c.r[7], c.r[18].w[0] + 97u);
    set32(c.r[4], c.r[29].w[0] + 112u);
    set32(c.r[5], c.r[5].w[0] - 12872u);
    st32((c.r[20].w[0] + 48u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    st32((c.r[20].w[0] + 52u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00327B30u); st32((c.r[20].w[0] + 56u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x00127458u; return; } if (c.pc != 0x00327B30u) [[unlikely]] return; }
L_00327B30:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43440000u);
    set32(c.r[3], c.r[29].w[0] + 112u);
    c.f[22] = c.r[2].w[0];
    st32((c.r[20].w[0] + 352u), c.r[3].w[0]);
    st32((c.r[20].w[0] + 356u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43080000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00260000u);
    set32(c.r[25], ld32((c.r[20].w[0] + 176u)));
    c.r[2].d[0] = c.r[2].d[0] | 22647ull;
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.f[0] = c.r[2].w[0];
    c.f[20] = c.r[3].w[0];
    c.f[21] = fp::cvt_s_w(c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42EC0000u);
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.f[0] = c.r[18].w[0];
    c.f[13] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::mul(c.f[22], c.f[0]);
    c.f[12] = fp::add(c.f[20], c.f[0]);
    c.budget -= 22;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00327B88u); c.f[14] = c.f[21];  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00327B88u) [[unlikely]] return; }
L_00327B88:
    set32(c.r[25], ld32((c.r[20].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00327B98u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00327B98u) [[unlikely]] return; }
L_00327B98:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[18], c.r[18].w[0] + 1u);  if (t) { goto L_00327D0C; } }
L_00327BA0:
    set32(c.r[2], 0u + 86u);
    c.budget -= 1;
L_00327BA4:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_00327C54; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00327BB4u);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x00327BB4u) [[unlikely]] return; }
L_00327BB4:
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[6], c.r[18].w[0] + 1u);
    set32(c.r[7], c.r[18].w[0] + 97u);
    set32(c.r[4], c.r[29].w[0] + 112u);
    set32(c.r[5], c.r[5].w[0] - 12872u);
    st32((c.r[20].w[0] + 48u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    st32((c.r[20].w[0] + 52u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00327BE4u); st32((c.r[20].w[0] + 56u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x00127458u; return; } if (c.pc != 0x00327BE4u) [[unlikely]] return; }
L_00327BE4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43440000u);
    set32(c.r[3], c.r[29].w[0] + 112u);
    c.f[22] = c.r[2].w[0];
    st32((c.r[20].w[0] + 352u), c.r[3].w[0]);
    st32((c.r[20].w[0] + 356u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43080000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00260000u);
    set32(c.r[25], ld32((c.r[20].w[0] + 176u)));
    c.r[2].d[0] = c.r[2].d[0] | 22647ull;
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.f[0] = c.r[2].w[0];
    c.f[20] = c.r[3].w[0];
    c.f[21] = fp::cvt_s_w(c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42EC0000u);
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.f[0] = c.r[18].w[0];
    c.f[13] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::mul(c.f[22], c.f[0]);
    c.f[12] = fp::add(c.f[20], c.f[0]);
    c.budget -= 22;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00327C3Cu); c.f[14] = c.f[21];  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00327C3Cu) [[unlikely]] return; }
L_00327C3C:
    set32(c.r[25], ld32((c.r[20].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00327C4Cu); c.r[4].d[0] = c.r[20].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00327C4Cu) [[unlikely]] return; }
L_00327C4C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00327D08; } }
L_00327C54:
    set32(c.r[2], ld32((c.r[17].w[0] + 720u)));
    c.r[1].d[0] = c.r[2].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00327C84; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00327C6Cu); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x00327C6Cu) [[unlikely]] return; }
L_00327C6C:
    set32(c.r[3], ld32((c.r[2].w[0])));
    st32((c.r[20].w[0] + 48u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    st32((c.r[20].w[0] + 52u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    st32((c.r[20].w[0] + 56u), c.r[2].w[0]);
    c.budget -= 6;
L_00327C84:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[6], c.r[18].w[0] + 1u);
    set32(c.r[7], c.r[18].w[0] + 97u);
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00327C9Cu); set32(c.r[5], c.r[5].w[0] - 12872u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x00127458u; return; } if (c.pc != 0x00327C9Cu) [[unlikely]] return; }
L_00327C9C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43440000u);
    set32(c.r[3], c.r[29].w[0] + 112u);
    c.f[22] = c.r[2].w[0];
    st32((c.r[20].w[0] + 352u), c.r[3].w[0]);
    c.f[1] = c.r[18].w[0];
    st32((c.r[20].w[0] + 356u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00260000u);
    set32(c.r[25], ld32((c.r[20].w[0] + 176u)));
    c.r[2].d[0] = c.r[2].d[0] | 22647ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43080000u);
    c.f[0] = c.r[2].w[0];
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42F80000u);
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.f[21] = fp::cvt_s_w(c.f[0]);
    c.f[20] = c.r[3].w[0];
    c.f[1] = fp::mul(c.f[22], c.f[1]);
    c.f[0] = c.r[2].w[0];
    c.f[13] = c.f[20];
    c.f[12] = fp::add(c.f[0], c.f[1]);
    c.budget -= 23;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00327CF8u); c.f[14] = c.f[21];  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00327CF8u) [[unlikely]] return; }
L_00327CF8:
    set32(c.r[25], ld32((c.r[20].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00327D08u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00327D08u) [[unlikely]] return; }
L_00327D08:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_00327D0C:
    c.r[2].d[0] = c.r[18].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], c.r[18].w[0] << 4);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00327AD8u | kUnwind; return; } goto L_00327AD8; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = ld32((c.r[1].w[0] - 12832u));
    c.r[4].d[0] = 0ull + 0ull;
    st32((c.r[16].w[0] + 16u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[0] = ld32((c.r[1].w[0] - 12832u));
    st32((c.r[16].w[0] + 20u), c.f[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00327D40u); st32((c.r[16].w[0] + 24u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x00327D40u) [[unlikely]] return; }
L_00327D40:
    ld128((c.r[2].w[0]) & ~15u, c.r[3]);
    c.r[20].d[0] = 0ull + 0ull;
    st128((c.r[16].w[0] + 48u) & ~15u, c.r[3]);
    c.f[0] = ld32((c.r[17].w[0] + 192u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    st32((c.r[16].w[0] + 60u), c.r[3].w[0]);
    set32(c.r[4], c.r[20].w[0] << 4);
    c.budget -= 9;
L_00327D64:
    set32(c.r[3], 0u + 86u);
    set32(c.r[5], c.r[17].w[0] + c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[5].w[0] + 664u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00327F24; } }
    set32(c.r[3], ld32((c.r[5].w[0] + 672u)));
    set32(c.r[2], 0u + 830u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[18], c.r[5].w[0] + 672u);  if (t) { goto L_00327EA0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00327D90u); set32(c.r[4], ld32((c.r[5].w[0] + 668u)));  if (depth < kMaxDepth) unit_000B(c, 461u, depth + 1u); else { c.pc = 0x0012FD60u; return; } if (c.pc != 0x00327D90u) [[unlikely]] return; }
L_00327D90:
    c.f[0] = c.r[20].w[0];
    st32((c.r[16].w[0] + 352u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 356u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00260000u);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    set32(c.r[25], ld32((c.r[16].w[0] + 176u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.r[2].d[0] = c.r[2].d[0] | 22647ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[2] = fp::mul(c.f[22], c.f[0]);
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.f[0] = c.r[2].w[0];
    c.f[1] = c.r[3].w[0];
    c.f[14] = fp::cvt_s_w(c.f[0]);
    c.f[23] = fp::add(c.f[1], c.f[2]);
    c.f[13] = c.f[20];
    c.budget -= 19;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00327DDCu); c.f[12] = c.f[23];  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00327DDCu) [[unlikely]] return; }
L_00327DDC:
    set32(c.r[25], ld32((c.r[16].w[0] + 176u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u - 1u);
    set32(c.r[25], ld32((c.r[25].w[0] + 68u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00327DFCu); set32(c.r[8], 0u + 2u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00327DFCu) [[unlikely]] return; }
L_00327DFC:
    set32(c.r[25], ld32((c.r[16].w[0] + 176u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u - 1u);
    set32(c.r[25], ld32((c.r[25].w[0] + 68u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00327E1Cu); c.r[8].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00327E1Cu) [[unlikely]] return; }
L_00327E1C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00327E24u); set32(c.r[4], ld32((c.r[18].w[0])));  if (depth < kMaxDepth) unit_000B(c, 461u, depth + 1u); else { c.pc = 0x0012FD60u; return; } if (c.pc != 0x00327E24u) [[unlikely]] return; }
L_00327E24:
    st32((c.r[16].w[0] + 352u), c.r[2].w[0]);
    c.f[12] = c.f[23];
    st32((c.r[16].w[0] + 356u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43140000u);
    c.f[13] = c.r[2].w[0];
    set32(c.r[25], ld32((c.r[16].w[0] + 176u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00260000u);
    c.r[2].d[0] = c.r[2].d[0] | 22647ull;
    c.f[0] = c.r[2].w[0];
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 13;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00327E58u); c.f[14] = fp::cvt_s_w(c.f[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00327E58u) [[unlikely]] return; }
L_00327E58:
    set32(c.r[25], ld32((c.r[16].w[0] + 176u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u - 1u);
    set32(c.r[25], ld32((c.r[25].w[0] + 68u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00327E78u); set32(c.r[8], 0u + 2u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00327E78u) [[unlikely]] return; }
L_00327E78:
    set32(c.r[25], ld32((c.r[16].w[0] + 176u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u - 1u);
    set32(c.r[25], ld32((c.r[25].w[0] + 68u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00327E98u); c.r[8].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00327E98u) [[unlikely]] return; }
L_00327E98:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[20], c.r[20].w[0] + 1u);  if (t) { goto L_00327F28; } }
L_00327EA0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00327EA8u); set32(c.r[4], ld32((c.r[5].w[0] + 668u)));  if (depth < kMaxDepth) unit_000B(c, 461u, depth + 1u); else { c.pc = 0x0012FD60u; return; } if (c.pc != 0x00327EA8u) [[unlikely]] return; }
L_00327EA8:
    c.f[0] = c.r[20].w[0];
    st32((c.r[16].w[0] + 352u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 356u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x430C0000u);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    set32(c.r[25], ld32((c.r[16].w[0] + 176u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[1] = fp::mul(c.f[22], c.f[0]);
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.f[0] = c.r[3].w[0];
    c.f[13] = c.r[2].w[0];
    c.f[12] = fp::add(c.f[0], c.f[1]);
    c.budget -= 15;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00327EE4u); c.f[14] = c.f[21];  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00327EE4u) [[unlikely]] return; }
L_00327EE4:
    set32(c.r[25], ld32((c.r[16].w[0] + 176u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u - 1u);
    set32(c.r[25], ld32((c.r[25].w[0] + 68u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00327F04u); set32(c.r[8], 0u + 2u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00327F04u) [[unlikely]] return; }
L_00327F04:
    set32(c.r[25], ld32((c.r[16].w[0] + 176u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u - 1u);
    set32(c.r[25], ld32((c.r[25].w[0] + 68u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00327F24u); c.r[8].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00327F24u) [[unlikely]] return; }
L_00327F24:
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.budget -= 1;
L_00327F28:
    c.r[3].d[0] = c.r[20].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[4], c.r[20].w[0] << 4);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00327D64u | kUnwind; return; } goto L_00327D64; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 720u)));
    set32(c.r[3], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { [[clang::musttail]] return unit_008A(c, 4u, depth); } }
    set32(c.r[4], ld32((c.r[17].w[0] + 580u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43A00000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43A50000u);
    c.f[12] = c.r[3].w[0];
    c.f[13] = c.r[2].w[0];
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 10;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00327F6Cu); c.f[14] = ld32((c.r[1].w[0] - 12856u));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00327F6Cu) [[unlikely]] return; }
L_00327F6C:
    c.f[0] = ld32((c.r[17].w[0] + 192u));
    set32(c.r[2], ld32((c.r[17].w[0] + 580u)));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    st32((c.r[2].w[0] + 60u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 580u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 11;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00327F98u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00327F98u) [[unlikely]] return; }
L_00327F98:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00327FA0u); set32(c.r[4], 0u + 91u);  if (depth < kMaxDepth) unit_000B(c, 461u, depth + 1u); else { c.pc = 0x0012FD60u; return; } if (c.pc != 0x00327FA0u) [[unlikely]] return; }
L_00327FA0:
    st32((c.r[19].w[0] + 352u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    st32((c.r[19].w[0] + 356u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43A00000u);
    set32(c.r[25], ld32((c.r[19].w[0] + 176u)));
    c.f[12] = c.r[2].w[0];
    c.f[14] = ld32((c.r[1].w[0] - 12856u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43A50000u);
    c.f[13] = c.r[2].w[0];
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 12;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00327FD0u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00327FD0u) [[unlikely]] return; }
L_00327FD0:
    set32(c.r[25], ld32((c.r[19].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00327FE0u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00327FE0u) [[unlikely]] return; }
L_00327FE0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00327FE8u); set32(c.r[4], 0u + 3u);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x00327FE8u) [[unlikely]] return; }
L_00327FE8:
    set32(c.r[3], ld32((c.r[2].w[0])));
    set32(c.r[4], 0u + 91u);
    st32((c.r[16].w[0] + 48u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    st32((c.r[16].w[0] + 52u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 6;
    [[clang::musttail]] return unit_008A(c, 1u, depth);
}

}
