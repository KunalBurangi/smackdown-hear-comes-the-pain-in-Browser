#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_009E[4096] = {
    1, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 11,
    0, 0, 0, 12, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 20, 0,
    21, 0, 22, 0, 23, 0, 24, 0, 25, 0, 26, 0, 27, 0, 28, 0, 29, 0, 30, 0, 31, 0, 32, 0, 0, 0, 0, 0, 33, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 36, 0,
    0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0,
    0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 45,
    0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0,
    50, 0, 0, 51, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 55,
    0, 0, 0, 0, 0, 56, 0, 57, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 62, 0, 0, 0,
    63, 0, 0, 64, 0, 0, 0, 0, 0, 65, 0, 66, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 67,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 72, 0, 0, 0, 0, 0, 0, 73, 0, 74,
    0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 80, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0, 83, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0,
    0, 0, 85, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 88, 0, 0, 0, 0, 0, 89, 0, 0, 0,
    0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0, 93,
    0, 94, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 96, 0, 97, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 100,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 102, 0, 103, 0, 0, 0, 0, 104, 0, 0, 105,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 106, 0, 107, 0, 0, 108, 0, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0, 111, 0, 0, 112, 0, 0, 113, 0, 0, 0, 0, 0, 114, 0,
    0, 0, 0, 0, 115, 0, 0, 116, 0, 0, 117, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 120, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 121, 0, 122, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 123, 0, 0, 124, 0, 0, 0, 125, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 128, 0, 0, 129, 0, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0,
    0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 134, 0, 0, 135, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 0, 143,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0,
    0, 146, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 150, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 153, 0, 0,
    0, 0, 0, 154, 0, 0, 0, 0, 155, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 159, 0, 0, 160, 0, 0, 161, 0, 162, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 163, 0, 0, 164, 0, 0, 165, 0, 166, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 168, 0, 0, 169, 0, 170, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 171, 0, 0, 172, 0, 173, 0, 174, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0,
    176, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 177, 0, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 179, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 180, 0, 0, 0, 181, 0, 0, 0, 0, 182, 0, 0, 0, 0, 183, 0, 0, 0, 184, 0, 0, 0, 185, 0, 0, 0, 0,
    0, 0, 0, 0, 186, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 189, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 191, 0, 0, 0, 192, 0,
    0, 0, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 194, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 196, 0, 197,
    0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 0, 199, 0, 0, 0, 200, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 202, 0, 0,
    0, 0, 0, 203, 0, 0, 0, 0, 204, 0, 0, 0, 0, 205, 0, 0, 0, 0, 0, 206, 0, 0, 0, 0, 207, 0, 0, 0, 0, 0, 208, 0,
    0, 0, 0, 0, 0, 209, 0, 0, 0, 0, 210, 0, 0, 0, 211, 0, 0, 0, 212, 0, 0, 0, 213, 0, 0, 0, 0, 214, 0, 215, 0, 216,
    0, 0, 0, 217, 0, 0, 218, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 219, 0, 0, 0, 0, 0, 220, 0, 0, 0, 221, 0, 0, 0,
    0, 222, 0, 0, 0, 0, 0, 0, 223, 0, 224, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 225, 0, 0, 0, 0, 0, 0, 226, 0, 0, 0,
    0, 227, 0, 0, 0, 0, 0, 0, 228, 0, 229, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 230, 0, 0, 0, 0, 0, 0, 231, 0, 0, 0,
    0, 0, 0, 0, 0, 232, 0, 0, 0, 0, 0, 0, 233, 0, 234, 0, 0, 0, 0, 0, 0, 235, 0, 0, 0, 236, 0, 0, 237, 0, 238, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 239, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 240, 0, 0, 0, 0, 0, 241, 0, 0,
    0, 0, 0, 0, 242, 0, 0, 0, 0, 0, 0, 243, 0, 0, 244, 0, 0, 0, 245, 0, 0, 0, 0, 0, 246, 0, 0, 0, 0, 0, 0, 0,
    247, 0, 248, 0, 0, 249, 0, 0, 0, 250, 0, 0, 0, 0, 0, 251, 0, 252, 0, 0, 0, 0, 0, 0, 253, 0, 0, 0, 254, 0, 0, 0,
    255, 0, 256, 0, 0, 257, 0, 0, 258, 0, 0, 0, 0, 0, 0, 0, 0, 259, 0, 0, 0, 0, 0, 0, 260, 0, 261, 0, 0, 0, 0, 0,
    0, 262, 0, 0, 0, 263, 0, 0, 0, 264, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 265, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 266, 0, 0, 0, 0, 0, 267, 0, 0, 0, 0, 0, 0, 268, 0, 0, 0, 0, 0, 0, 269, 0, 0, 270, 0, 0, 0, 271, 0,
    0, 0, 0, 0, 272, 0, 0, 0, 0, 0, 0, 0, 273, 0, 274, 0, 0, 275, 0, 0, 0, 276, 0, 0, 0, 0, 0, 0, 277, 0, 0, 0,
    0, 278, 0, 279, 0, 0, 280, 0, 0, 281, 0, 0, 0, 0, 0, 0, 282, 0, 0, 0, 283, 0, 284, 0, 0, 285, 0, 0, 286, 0, 0, 0,
    0, 0, 0, 0, 0, 287, 0, 0, 0, 0, 0, 0, 288, 0, 289, 0, 0, 290, 0, 0, 0, 0, 0, 0, 0, 291, 0, 0, 0, 0, 0, 292,
    0, 0, 0, 0, 0, 0, 0, 0, 293, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 294, 0, 0, 0, 0, 0, 295, 0, 0,
    0, 0, 0, 0, 296, 0, 0, 0, 0, 0, 0, 297, 0, 0, 298, 0, 0, 0, 299, 0, 0, 0, 0, 0, 300, 0, 0, 0, 0, 0, 0, 0,
    301, 0, 302, 0, 0, 303, 0, 0, 0, 304, 0, 0, 0, 0, 0, 0, 305, 0, 0, 0, 306, 0, 0, 0, 307, 0, 308, 0, 0, 309, 0, 0,
    310, 0, 0, 0, 0, 0, 311, 0, 0, 0, 0, 0, 0, 312, 0, 0, 0, 313, 0, 314, 0, 0, 0, 0, 0, 315, 0, 0, 0, 0, 0, 0,
    316, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 317, 0, 0, 0, 0, 0, 318, 0, 0, 0, 0, 0, 0, 319, 0, 0, 0,
    0, 0, 0, 0, 0, 320, 0, 0, 0, 0, 0, 0, 321, 0, 0, 0, 0, 0, 0, 0, 322, 0, 0, 0, 0, 0, 0, 323, 0, 0, 0, 324,
    0, 0, 0, 325, 0, 0, 0, 0, 326, 0, 0, 0, 327, 0, 0, 0, 328, 0, 329, 0, 0, 330, 0, 0, 331, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 332, 0, 0, 0, 0, 0, 0, 0, 0, 333, 0, 0, 334, 0, 335, 0, 0, 0, 0, 0, 0, 336, 0, 0, 0, 337, 0, 0, 338,
    0, 0, 339, 0, 340, 0, 0, 341, 0, 0, 0, 0, 0, 0, 0, 0, 342, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    343, 0, 0, 344, 0, 0, 0, 0, 0, 345, 0, 0, 0, 0, 0, 0, 346, 0, 0, 0, 0, 347, 0, 0, 0, 348, 0, 0, 0, 0, 0, 0,
    349, 0, 0, 0, 0, 0, 0, 350, 0, 0, 351, 0, 0, 0, 352, 0, 0, 0, 0, 0, 353, 0, 0, 0, 0, 0, 0, 0, 354, 0, 355, 0,
    0, 356, 0, 0, 0, 357, 0, 0, 0, 0, 0, 0, 358, 0, 0, 0, 0, 0, 0, 0, 0, 0, 359, 0, 0, 360, 0, 0, 0, 0, 361, 0,
    0, 0, 0, 0, 362, 0, 0, 0, 0, 0, 0, 363, 0, 364, 0, 0, 365, 0, 0, 0, 366, 0, 0, 0, 0, 0, 0, 0, 367, 0, 0, 0,
    0, 0, 368, 0, 0, 0, 0, 0, 369, 0, 0, 0, 370, 0, 0, 0, 0, 0, 371, 0, 0, 0, 0, 0, 372, 0, 0, 0, 373, 0, 0, 0,
    374, 0, 0, 0, 375, 0, 0, 0, 376, 0, 0, 0, 377, 0, 0, 0, 378, 0, 0, 0, 379, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 380, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 381, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 382, 0, 0, 0, 0, 0, 0, 0, 0, 0, 383, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 384, 0, 0, 0, 0, 0, 0, 0, 0, 0, 385, 0, 0, 0, 0, 0, 0, 0, 0, 386, 0, 0, 0, 0, 0, 0, 0, 0, 387, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 388, 0, 0, 0, 0, 0, 0, 0, 0, 389, 0, 0, 0, 0, 0, 0, 0, 0, 390, 0, 0, 0, 0, 0, 0, 0, 0, 391, 0,
    0, 392, 0, 0, 0, 0, 0, 0, 393, 0, 0, 0, 0, 0, 0, 0, 394, 0, 0, 0, 0, 0, 0, 0, 0, 395, 0, 0, 0, 396, 0, 397,
    0, 398, 0, 399, 0, 0, 0, 0, 0, 0, 0, 0, 400, 0, 0, 0, 401, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 402, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 403, 0, 0, 404, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 405, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 406, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 407, 0, 0, 0, 0, 0, 408, 0, 0, 0, 0, 0, 409, 0, 0, 0, 0, 0, 0, 0, 0,
    410, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 411, 0, 412, 0,
    413, 0, 414, 0, 0, 0, 415, 0, 0, 0, 416, 0, 417, 0, 0, 0, 418, 0, 0, 0, 419, 0, 0, 0, 420, 0, 0, 0, 0, 0, 421, 0,
    0, 0, 422, 0, 0, 0, 0, 423, 0, 424, 0, 0, 0, 0, 425, 0, 426, 0, 427, 0, 0, 0, 0, 0, 428, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 429, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 430, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 431, 0, 0, 0, 0, 0, 432, 0, 0, 0, 0, 0, 0, 0, 433, 0, 0, 0, 0, 0, 434,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 435, 0, 0, 0, 0, 0, 0, 0, 436, 0, 0, 0, 0, 437, 0, 0,
    0, 0, 0, 438, 0, 0, 0, 0, 0, 0, 0, 439, 0, 440, 0, 0, 0, 0, 0, 0, 0, 441, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 442, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 443, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 444, 0,
    0, 0, 0, 0, 0, 445, 0, 0, 446, 0, 0, 0, 0, 0, 447, 0, 0, 0, 0, 0, 0, 0, 0, 0, 448, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 449, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 450, 0, 0, 0, 0, 0, 0,
    0, 451, 0, 0, 0, 0, 0, 0, 0, 0, 452, 0, 0, 0, 453, 0, 0, 0, 0, 0, 0, 0, 0, 0, 454, 0, 0, 0, 0, 0, 0, 0,
    0, 455, 0, 0, 0, 0, 456, 0, 0, 0, 0, 0, 457, 0, 0, 0, 0, 0, 0, 0, 458, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 459, 0, 0, 0, 460, 0, 0, 0, 0, 461, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 462, 0, 0, 0, 0, 0, 0, 0,
    463, 0, 0, 0, 0, 0, 0, 0, 464, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 465, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 466, 0, 0, 0, 0, 0, 0, 0, 467, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    468, 0, 0, 0, 0, 0, 469, 0, 0, 0, 0, 0, 470, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 471, 0, 0, 0, 472, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 473, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 474, 0, 0, 0, 475, 0, 0, 0, 0, 476, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 477, 0, 0, 0, 0, 0, 478, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 479, 0, 0, 0, 0, 0, 480, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 481, 0, 0, 482,
};

void unit_009E(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_00378000;
    case 2u: goto L_00378010;
    case 3u: goto L_00378040;
    case 4u: goto L_00378074;
    case 5u: goto L_003780A0;
    case 6u: goto L_003780C4;
    case 7u: goto L_003780F0;
    case 8u: goto L_00378134;
    case 9u: goto L_00378144;
    case 10u: goto L_0037816C;
    case 11u: goto L_0037817C;
    case 12u: goto L_0037818C;
    case 13u: goto L_00378194;
    case 14u: goto L_00378284;
    case 15u: goto L_003782AC;
    case 16u: goto L_0037833C;
    case 17u: goto L_003783E0;
    case 18u: goto L_00378440;
    case 19u: goto L_00378470;
    case 20u: goto L_00378478;
    case 21u: goto L_00378480;
    case 22u: goto L_00378488;
    case 23u: goto L_00378490;
    case 24u: goto L_00378498;
    case 25u: goto L_003784A0;
    case 26u: goto L_003784A8;
    case 27u: goto L_003784B0;
    case 28u: goto L_003784B8;
    case 29u: goto L_003784C0;
    case 30u: goto L_003784C8;
    case 31u: goto L_003784D0;
    case 32u: goto L_003784D8;
    case 33u: goto L_003784F0;
    case 34u: goto L_0037854C;
    case 35u: goto L_00378564;
    case 36u: goto L_00378578;
    case 37u: goto L_00378590;
    case 38u: goto L_003785B0;
    case 39u: goto L_003785CC;
    case 40u: goto L_003785F4;
    case 41u: goto L_00378610;
    case 42u: goto L_0037862C;
    case 43u: goto L_00378640;
    case 44u: goto L_00378660;
    case 45u: goto L_0037867C;
    case 46u: goto L_00378690;
    case 47u: goto L_003786B0;
    case 48u: goto L_003786CC;
    case 49u: goto L_003786E0;
    case 50u: goto L_00378700;
    case 51u: goto L_0037870C;
    case 52u: goto L_00378724;
    case 53u: goto L_00378740;
    case 54u: goto L_0037876C;
    case 55u: goto L_0037877C;
    case 56u: goto L_00378794;
    case 57u: goto L_0037879C;
    case 58u: goto L_00378894;
    case 59u: goto L_00378920;
    case 60u: goto L_00378944;
    case 61u: goto L_0037895C;
    case 62u: goto L_00378970;
    case 63u: goto L_00378980;
    case 64u: goto L_0037898C;
    case 65u: goto L_003789A4;
    case 66u: goto L_003789AC;
    case 67u: goto L_003789FC;
    case 68u: goto L_00378A70;
    case 69u: goto L_00378AF0;
    case 70u: goto L_00378B2C;
    case 71u: goto L_00378B50;
    case 72u: goto L_00378B58;
    case 73u: goto L_00378B74;
    case 74u: goto L_00378B7C;
    case 75u: goto L_00378B90;
    case 76u: goto L_00378BC0;
    case 77u: goto L_00378BF0;
    case 78u: goto L_00378CAC;
    case 79u: goto L_00378CC0;
    case 80u: goto L_00378D04;
    case 81u: goto L_00378D10;
    case 82u: goto L_00378D40;
    case 83u: goto L_00378D50;
    case 84u: goto L_00378D68;
    case 85u: goto L_00378D88;
    case 86u: goto L_00378DA0;
    case 87u: goto L_00378DCC;
    case 88u: goto L_00378DD8;
    case 89u: goto L_00378DF0;
    case 90u: goto L_00378E10;
    case 91u: goto L_00378E3C;
    case 92u: goto L_00378E5C;
    case 93u: goto L_00378E7C;
    case 94u: goto L_00378E84;
    case 95u: goto L_00378E94;
    case 96u: goto L_00378EB0;
    case 97u: goto L_00378EB8;
    case 98u: goto L_00378ED0;
    case 99u: goto L_00378EF0;
    case 100u: goto L_00378EFC;
    case 101u: goto L_00378F34;
    case 102u: goto L_00378F54;
    case 103u: goto L_00378F5C;
    case 104u: goto L_00378F70;
    case 105u: goto L_00378F7C;
    case 106u: goto L_00378FB0;
    case 107u: goto L_00378FB8;
    case 108u: goto L_00378FC4;
    case 109u: goto L_00378FE0;
    case 110u: goto L_00379038;
    case 111u: goto L_00379048;
    case 112u: goto L_00379054;
    case 113u: goto L_00379060;
    case 114u: goto L_00379078;
    case 115u: goto L_00379090;
    case 116u: goto L_0037909C;
    case 117u: goto L_003790A8;
    case 118u: goto L_003790C0;
    case 119u: goto L_003790E0;
    case 120u: goto L_003790F4;
    case 121u: goto L_003791D4;
    case 122u: goto L_003791DC;
    case 123u: goto L_00379214;
    case 124u: goto L_00379220;
    case 125u: goto L_00379230;
    case 126u: goto L_00379240;
    case 127u: goto L_003792A8;
    case 128u: goto L_00379390;
    case 129u: goto L_0037939C;
    case 130u: goto L_003793B4;
    case 131u: goto L_00379474;
    case 132u: goto L_00379494;
    case 133u: goto L_003794DC;
    case 134u: goto L_003795AC;
    case 135u: goto L_003795B8;
    case 136u: goto L_003795D0;
    case 137u: goto L_00379698;
    case 138u: goto L_003796B8;
    case 139u: goto L_00379730;
    case 140u: goto L_00379760;
    case 141u: goto L_003797A0;
    case 142u: goto L_003797E0;
    case 143u: goto L_003797FC;
    case 144u: goto L_00379834;
    case 145u: goto L_00379860;
    case 146u: goto L_00379884;
    case 147u: goto L_003798C4;
    case 148u: goto L_003798F0;
    case 149u: goto L_0037991C;
    case 150u: goto L_00379930;
    case 151u: goto L_00379940;
    case 152u: goto L_00379960;
    case 153u: goto L_00379974;
    case 154u: goto L_0037998C;
    case 155u: goto L_003799A0;
    case 156u: goto L_003799B4;
    case 157u: goto L_003799CC;
    case 158u: goto L_003799E0;
    case 159u: goto L_00379A88;
    case 160u: goto L_00379A94;
    case 161u: goto L_00379AA0;
    case 162u: goto L_00379AA8;
    case 163u: goto L_00379B14;
    case 164u: goto L_00379B20;
    case 165u: goto L_00379B2C;
    case 166u: goto L_00379B34;
    case 167u: goto L_00379BA4;
    case 168u: goto L_00379BB0;
    case 169u: goto L_00379BBC;
    case 170u: goto L_00379BC4;
    case 171u: goto L_00379C34;
    case 172u: goto L_00379C40;
    case 173u: goto L_00379C48;
    case 174u: goto L_00379C50;
    case 175u: goto L_00379C68;
    case 176u: goto L_00379C80;
    case 177u: goto L_00379CB8;
    case 178u: goto L_00379CDC;
    case 179u: goto L_00379CEC;
    case 180u: goto L_00379D14;
    case 181u: goto L_00379D24;
    case 182u: goto L_00379D38;
    case 183u: goto L_00379D4C;
    case 184u: goto L_00379D5C;
    case 185u: goto L_00379D6C;
    case 186u: goto L_00379D90;
    case 187u: goto L_00379DBC;
    case 188u: goto L_00379DDC;
    case 189u: goto L_00379E04;
    case 190u: goto L_00379E3C;
    case 191u: goto L_00379E68;
    case 192u: goto L_00379E78;
    case 193u: goto L_00379E94;
    case 194u: goto L_00379EC8;
    case 195u: goto L_00379ED8;
    case 196u: goto L_00379EF4;
    case 197u: goto L_00379EFC;
    case 198u: goto L_00379F1C;
    case 199u: goto L_00379F38;
    case 200u: goto L_00379F48;
    case 201u: goto L_00379F60;
    case 202u: goto L_00379F74;
    case 203u: goto L_00379F8C;
    case 204u: goto L_00379FA0;
    case 205u: goto L_00379FB4;
    case 206u: goto L_00379FCC;
    case 207u: goto L_00379FE0;
    case 208u: goto L_00379FF8;
    case 209u: goto L_0037A014;
    case 210u: goto L_0037A028;
    case 211u: goto L_0037A038;
    case 212u: goto L_0037A048;
    case 213u: goto L_0037A058;
    case 214u: goto L_0037A06C;
    case 215u: goto L_0037A074;
    case 216u: goto L_0037A07C;
    case 217u: goto L_0037A08C;
    case 218u: goto L_0037A098;
    case 219u: goto L_0037A0C8;
    case 220u: goto L_0037A0E0;
    case 221u: goto L_0037A0F0;
    case 222u: goto L_0037A104;
    case 223u: goto L_0037A120;
    case 224u: goto L_0037A128;
    case 225u: goto L_0037A154;
    case 226u: goto L_0037A170;
    case 227u: goto L_0037A184;
    case 228u: goto L_0037A1A0;
    case 229u: goto L_0037A1A8;
    case 230u: goto L_0037A1D4;
    case 231u: goto L_0037A1F0;
    case 232u: goto L_0037A214;
    case 233u: goto L_0037A230;
    case 234u: goto L_0037A238;
    case 235u: goto L_0037A254;
    case 236u: goto L_0037A264;
    case 237u: goto L_0037A270;
    case 238u: goto L_0037A278;
    case 239u: goto L_0037A2A0;
    case 240u: goto L_0037A2DC;
    case 241u: goto L_0037A2F4;
    case 242u: goto L_0037A310;
    case 243u: goto L_0037A32C;
    case 244u: goto L_0037A338;
    case 245u: goto L_0037A348;
    case 246u: goto L_0037A360;
    case 247u: goto L_0037A380;
    case 248u: goto L_0037A388;
    case 249u: goto L_0037A394;
    case 250u: goto L_0037A3A4;
    case 251u: goto L_0037A3BC;
    case 252u: goto L_0037A3C4;
    case 253u: goto L_0037A3E0;
    case 254u: goto L_0037A3F0;
    case 255u: goto L_0037A400;
    case 256u: goto L_0037A408;
    case 257u: goto L_0037A414;
    case 258u: goto L_0037A420;
    case 259u: goto L_0037A444;
    case 260u: goto L_0037A460;
    case 261u: goto L_0037A468;
    case 262u: goto L_0037A484;
    case 263u: goto L_0037A494;
    case 264u: goto L_0037A4A4;
    case 265u: goto L_0037A4D0;
    case 266u: goto L_0037A50C;
    case 267u: goto L_0037A524;
    case 268u: goto L_0037A540;
    case 269u: goto L_0037A55C;
    case 270u: goto L_0037A568;
    case 271u: goto L_0037A578;
    case 272u: goto L_0037A590;
    case 273u: goto L_0037A5B0;
    case 274u: goto L_0037A5B8;
    case 275u: goto L_0037A5C4;
    case 276u: goto L_0037A5D4;
    case 277u: goto L_0037A5F0;
    case 278u: goto L_0037A604;
    case 279u: goto L_0037A60C;
    case 280u: goto L_0037A618;
    case 281u: goto L_0037A624;
    case 282u: goto L_0037A640;
    case 283u: goto L_0037A650;
    case 284u: goto L_0037A658;
    case 285u: goto L_0037A664;
    case 286u: goto L_0037A670;
    case 287u: goto L_0037A694;
    case 288u: goto L_0037A6B0;
    case 289u: goto L_0037A6B8;
    case 290u: goto L_0037A6C4;
    case 291u: goto L_0037A6E4;
    case 292u: goto L_0037A6FC;
    case 293u: goto L_0037A720;
    case 294u: goto L_0037A75C;
    case 295u: goto L_0037A774;
    case 296u: goto L_0037A790;
    case 297u: goto L_0037A7AC;
    case 298u: goto L_0037A7B8;
    case 299u: goto L_0037A7C8;
    case 300u: goto L_0037A7E0;
    case 301u: goto L_0037A800;
    case 302u: goto L_0037A808;
    case 303u: goto L_0037A814;
    case 304u: goto L_0037A824;
    case 305u: goto L_0037A840;
    case 306u: goto L_0037A850;
    case 307u: goto L_0037A860;
    case 308u: goto L_0037A868;
    case 309u: goto L_0037A874;
    case 310u: goto L_0037A880;
    case 311u: goto L_0037A898;
    case 312u: goto L_0037A8B4;
    case 313u: goto L_0037A8C4;
    case 314u: goto L_0037A8CC;
    case 315u: goto L_0037A8E4;
    case 316u: goto L_0037A900;
    case 317u: goto L_0037A93C;
    case 318u: goto L_0037A954;
    case 319u: goto L_0037A970;
    case 320u: goto L_0037A994;
    case 321u: goto L_0037A9B0;
    case 322u: goto L_0037A9D0;
    case 323u: goto L_0037A9EC;
    case 324u: goto L_0037A9FC;
    case 325u: goto L_0037AA0C;
    case 326u: goto L_0037AA20;
    case 327u: goto L_0037AA30;
    case 328u: goto L_0037AA40;
    case 329u: goto L_0037AA48;
    case 330u: goto L_0037AA54;
    case 331u: goto L_0037AA60;
    case 332u: goto L_0037AA8C;
    case 333u: goto L_0037AAB0;
    case 334u: goto L_0037AABC;
    case 335u: goto L_0037AAC4;
    case 336u: goto L_0037AAE0;
    case 337u: goto L_0037AAF0;
    case 338u: goto L_0037AAFC;
    case 339u: goto L_0037AB08;
    case 340u: goto L_0037AB10;
    case 341u: goto L_0037AB1C;
    case 342u: goto L_0037AB40;
    case 343u: goto L_0037AB80;
    case 344u: goto L_0037AB8C;
    case 345u: goto L_0037ABA4;
    case 346u: goto L_0037ABC0;
    case 347u: goto L_0037ABD4;
    case 348u: goto L_0037ABE4;
    case 349u: goto L_0037AC00;
    case 350u: goto L_0037AC1C;
    case 351u: goto L_0037AC28;
    case 352u: goto L_0037AC38;
    case 353u: goto L_0037AC50;
    case 354u: goto L_0037AC70;
    case 355u: goto L_0037AC78;
    case 356u: goto L_0037AC84;
    case 357u: goto L_0037AC94;
    case 358u: goto L_0037ACB0;
    case 359u: goto L_0037ACD8;
    case 360u: goto L_0037ACE4;
    case 361u: goto L_0037ACF8;
    case 362u: goto L_0037AD10;
    case 363u: goto L_0037AD2C;
    case 364u: goto L_0037AD34;
    case 365u: goto L_0037AD40;
    case 366u: goto L_0037AD50;
    case 367u: goto L_0037AD70;
    case 368u: goto L_0037AD88;
    case 369u: goto L_0037ADA0;
    case 370u: goto L_0037ADB0;
    case 371u: goto L_0037ADC8;
    case 372u: goto L_0037ADE0;
    case 373u: goto L_0037ADF0;
    case 374u: goto L_0037AE00;
    case 375u: goto L_0037AE10;
    case 376u: goto L_0037AE20;
    case 377u: goto L_0037AE30;
    case 378u: goto L_0037AE40;
    case 379u: goto L_0037AE50;
    case 380u: goto L_0037AEBC;
    case 381u: goto L_0037AF30;
    case 382u: goto L_0037AFB0;
    case 383u: goto L_0037AFD8;
    case 384u: goto L_0037B004;
    case 385u: goto L_0037B02C;
    case 386u: goto L_0037B050;
    case 387u: goto L_0037B074;
    case 388u: goto L_0037B10C;
    case 389u: goto L_0037B130;
    case 390u: goto L_0037B154;
    case 391u: goto L_0037B178;
    case 392u: goto L_0037B184;
    case 393u: goto L_0037B1A0;
    case 394u: goto L_0037B1C0;
    case 395u: goto L_0037B1E4;
    case 396u: goto L_0037B1F4;
    case 397u: goto L_0037B1FC;
    case 398u: goto L_0037B204;
    case 399u: goto L_0037B20C;
    case 400u: goto L_0037B230;
    case 401u: goto L_0037B240;
    case 402u: goto L_0037B374;
    case 403u: goto L_0037B418;
    case 404u: goto L_0037B424;
    case 405u: goto L_0037B4C4;
    case 406u: goto L_0037B4F0;
    case 407u: goto L_0037B52C;
    case 408u: goto L_0037B544;
    case 409u: goto L_0037B55C;
    case 410u: goto L_0037B580;
    case 411u: goto L_0037B5F0;
    case 412u: goto L_0037B5F8;
    case 413u: goto L_0037B600;
    case 414u: goto L_0037B608;
    case 415u: goto L_0037B618;
    case 416u: goto L_0037B628;
    case 417u: goto L_0037B630;
    case 418u: goto L_0037B640;
    case 419u: goto L_0037B650;
    case 420u: goto L_0037B660;
    case 421u: goto L_0037B678;
    case 422u: goto L_0037B688;
    case 423u: goto L_0037B69C;
    case 424u: goto L_0037B6A4;
    case 425u: goto L_0037B6B8;
    case 426u: goto L_0037B6C0;
    case 427u: goto L_0037B6C8;
    case 428u: goto L_0037B6E0;
    case 429u: goto L_0037B724;
    case 430u: goto L_0037B750;
    case 431u: goto L_0037B7AC;
    case 432u: goto L_0037B7C4;
    case 433u: goto L_0037B7E4;
    case 434u: goto L_0037B7FC;
    case 435u: goto L_0037B840;
    case 436u: goto L_0037B860;
    case 437u: goto L_0037B874;
    case 438u: goto L_0037B88C;
    case 439u: goto L_0037B8AC;
    case 440u: goto L_0037B8B4;
    case 441u: goto L_0037B8D4;
    case 442u: goto L_0037B910;
    case 443u: goto L_0037B94C;
    case 444u: goto L_0037B978;
    case 445u: goto L_0037B994;
    case 446u: goto L_0037B9A0;
    case 447u: goto L_0037B9B8;
    case 448u: goto L_0037B9E0;
    case 449u: goto L_0037BA14;
    case 450u: goto L_0037BA64;
    case 451u: goto L_0037BA84;
    case 452u: goto L_0037BAA8;
    case 453u: goto L_0037BAB8;
    case 454u: goto L_0037BAE0;
    case 455u: goto L_0037BB04;
    case 456u: goto L_0037BB18;
    case 457u: goto L_0037BB30;
    case 458u: goto L_0037BB50;
    case 459u: goto L_0037BB8C;
    case 460u: goto L_0037BB9C;
    case 461u: goto L_0037BBB0;
    case 462u: goto L_0037BBE0;
    case 463u: goto L_0037BC00;
    case 464u: goto L_0037BC20;
    case 465u: goto L_0037BC50;
    case 466u: goto L_0037BCA0;
    case 467u: goto L_0037BCC0;
    case 468u: goto L_0037BD00;
    case 469u: goto L_0037BD18;
    case 470u: goto L_0037BD30;
    case 471u: goto L_0037BDA0;
    case 472u: goto L_0037BDB0;
    case 473u: goto L_0037BE04;
    case 474u: goto L_0037BEA4;
    case 475u: goto L_0037BEB4;
    case 476u: goto L_0037BEC8;
    case 477u: goto L_0037BF50;
    case 478u: goto L_0037BF68;
    case 479u: goto L_0037BF98;
    case 480u: goto L_0037BFB0;
    case 481u: goto L_0037BFF0;
    case 482u: goto L_0037BFFC;
    default: bad_entry(c, 0x00378000u); return;
    }
L_00378000:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00378010:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[1].w[0] + 28312u)));
    set32(c.r[4], ld32((c.r[3].w[0] + 8u)));
    c.budget -= 10;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[16], c.r[3].w[0] + 8u);  if (t) { goto L_00378040; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00378040u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100210u; return; } if (c.pc != 0x00378040u) [[unlikely]] return; }
L_00378040:
    st32((c.r[16].w[0]), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], ld32((c.r[1].w[0] + 28312u)));
    st32((c.r[3].w[0]), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 72u)));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00378074; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00378074; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00378074u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00378074u) [[unlikely]] return; }
L_00378074:
    st32((c.r[17].w[0] + 72u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 96u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003780A0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x000F0000u);  if (t) { goto L_003780A0; } }
    set32(c.r[1], c.r[4].w[0] + c.r[1].w[0]);
    set32(c.r[25], ld32((c.r[1].w[0] + 18408u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003780A0u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003780A0u) [[unlikely]] return; }
L_003780A0:
    st32((c.r[17].w[0] + 96u), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st32((c.r[1].w[0] + 26120u), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 26168u)));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003780C4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003780C4u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0023(c, 274u, depth + 1u); else { c.pc = 0x0018E940u; return; } if (c.pc != 0x003780C4u) [[unlikely]] return; }
L_003780C4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st32((c.r[1].w[0] + 26168u), 0u);
    st32((c.r[17].w[0] + 100u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003780F0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    set32(c.r[2], 0u + 3u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 80u)));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0037814C; } }
    set32(c.r[2], 0u + 6u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st32((c.r[16].w[0] + 76u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[1].w[0] + 26168u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00378134; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00378134u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0023(c, 274u, depth + 1u); else { c.pc = 0x0018E940u; return; } if (c.pc != 0x00378134u) [[unlikely]] return; }
L_00378134:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], 0u + 128u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00378144u); st32((c.r[1].w[0] + 26168u), 0u);  if (depth < kMaxDepth) unit_0023(c, 257u, depth + 1u); else { c.pc = 0x0018E790u; return; } if (c.pc != 0x00378144u) [[unlikely]] return; }
L_00378144:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 88u), 0u);  if (t) { goto L_00378184; } }
L_0037814C:
    set32(c.r[2], 0u + 2u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st32((c.r[16].w[0] + 76u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[1].w[0] + 26168u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0037816C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037816Cu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0023(c, 274u, depth + 1u); else { c.pc = 0x0018E940u; return; } if (c.pc != 0x0037816Cu) [[unlikely]] return; }
L_0037816C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], 0u + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037817Cu); st32((c.r[1].w[0] + 26168u), 0u);  if (depth < kMaxDepth) unit_0023(c, 257u, depth + 1u); else { c.pc = 0x0018E790u; return; } if (c.pc != 0x0037817Cu) [[unlikely]] return; }
L_0037817C:
    st32((c.r[16].w[0] + 84u), 0u);
    st32((c.r[16].w[0] + 88u), 0u);
    c.budget -= 2;
L_00378184:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037818Cu);  if (depth < kMaxDepth) unit_0023(c, 256u, depth + 1u); else { c.pc = 0x0018E780u; return; } if (c.pc != 0x0037818Cu) [[unlikely]] return; }
L_0037818C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00378194u); st32((c.r[16].w[0] + 100u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_009D(c, 346u, depth + 1u); else { c.pc = 0x00377710u; return; } if (c.pc != 0x00378194u) [[unlikely]] return; }
L_00378194:
    st8((c.r[29].w[0] + 80u), static_cast<std::uint8_t>(0u));
    set32(c.r[9], c.r[29].w[0] + 82u);
    st8((c.r[29].w[0] + 81u), static_cast<std::uint8_t>(0u));
    c.r[4].d[0] = 0ull & 1ull;
    c.r[11].d[0] = ld16((c.r[9].w[0]));
    c.r[14].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[5], 0u - 16384u);
    set32(c.r[17], c.r[4].w[0] << 6);
    set32(c.r[24], c.r[4].w[0] << 7);
    c.r[10].d[0] = 0ull + static_cast<std::uint64_t>(7000ll);
    set32(c.r[3], c.r[29].w[0] + 83u);
    set32(c.r[25], 0u - 65u);
    set32(c.r[15], 0u - 129u);
    set32(c.r[8], c.r[29].w[0] + 84u);
    set32(c.r[7], c.r[29].w[0] + 88u);
    set32(c.r[6], c.r[29].w[0] + 92u);
    c.r[4].d[0] = c.r[11].d[0] & c.r[5].d[0];
    set32(c.r[14], c.r[14].w[0] + 3456u);
    c.r[4].d[0] = c.r[4].d[0] | c.r[10].d[0];
    set32(c.r[11], c.r[29].w[0] + 64u);
    st16((c.r[9].w[0]), static_cast<std::uint16_t>(c.r[4].w[0]));
    set32(c.r[13], c.r[2].w[0] + 260u);
    c.r[18].d[0] = ld8((c.r[3].w[0]));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00040000u);
    c.r[10].d[0] = c.r[4].d[0] | 32768ull;
    c.r[12].d[0] = 0ull + 0ull;
    set32(c.r[4], 0u + 89u);
    c.r[25].d[0] = c.r[18].d[0] & c.r[25].d[0];
    c.r[25].d[0] = c.r[25].d[0] | c.r[17].d[0];
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[25].w[0]));
    c.r[25].d[0] = ld8((c.r[3].w[0]));
    c.r[15].d[0] = c.r[25].d[0] & c.r[15].d[0];
    c.r[15].d[0] = c.r[15].d[0] | c.r[24].d[0];
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[15].w[0]));
    st32((c.r[8].w[0]), 0u);
    st32((c.r[7].w[0]), 0u);
    st32((c.r[6].w[0]), 0u);
    ld128((c.r[14].w[0]) & ~15u, c.r[3]);
    st128((c.r[11].w[0]) & ~15u, c.r[3]);
    set32(c.r[11], ld32((c.r[16].w[0] + 84u)));
    c.r[3].d[0] = ld16((c.r[9].w[0]));
    set32(c.r[11], c.r[11].w[0] + 7220u);
    c.r[11].d[0] = c.r[11].d[0] & 16383ull;
    c.r[3].d[0] = c.r[3].d[0] & c.r[5].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[11].d[0];
    st16((c.r[9].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    st32((c.r[8].w[0]), c.r[10].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 80u)));
    st32((c.r[2].w[0] + 1668u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 84u)));
    st32((c.r[2].w[0] + 1672u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 88u)));
    st32((c.r[2].w[0] + 1676u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 92u)));
    st32((c.r[2].w[0] + 1680u), c.r[3].w[0]);
    st32((c.r[8].w[0]), 0u);
    st32((c.r[2].w[0] + 256u), c.r[4].w[0]);
    set32(c.r[3], 0u + 3u);
    set32(c.r[4], 0u + 2u);
    set32(c.r[11], c.r[12].w[0] << 2);
    c.budget -= 60;
L_00378284:
    c.r[10].d[0] = ld16((c.r[9].w[0]));
    set32(c.r[11], c.r[11].w[0] + c.r[29].w[0]);
    set32(c.r[11], ld32((c.r[11].w[0] + 64u)));
    c.r[10].d[0] = c.r[10].d[0] & c.r[5].d[0];
    c.r[11].d[0] = c.r[11].d[0] & 16383ull;
    c.r[10].d[0] = c.r[10].d[0] | c.r[11].d[0];
    c.budget -= 8;
    { const bool t = c.r[12].d[0] != c.r[4].d[0]; st16((c.r[9].w[0]), static_cast<std::uint16_t>(c.r[10].w[0]));  if (t) { goto L_00378338; } }
    c.r[11].d[0] = 0ull + 0ull;
    c.r[10].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_003782AC:
    set32(c.r[15], ld32((c.r[13].w[0] + 8u)));
    set32(c.r[14], ld32((c.r[29].w[0] + 80u)));
    st32((c.r[13].w[0]), c.r[14].w[0]);
    set32(c.r[14], ld32((c.r[8].w[0])));
    st32((c.r[13].w[0] + 4u), c.r[14].w[0]);
    set32(c.r[14], ld32((c.r[7].w[0])));
    st32((c.r[13].w[0] + 8u), c.r[14].w[0]);
    set32(c.r[14], ld32((c.r[6].w[0])));
    st32((c.r[13].w[0] + 12u), c.r[14].w[0]);
    st32((c.r[13].w[0] + 8u), c.r[15].w[0]);
    c.r[14].d[0] = ld16((c.r[9].w[0]));
    set32(c.r[13], c.r[13].w[0] + 16u);
    c.r[15].d[0] = c.r[14].d[0] & 16383ull;
    set32(c.r[15], c.r[15].w[0] + 1u);
    c.r[14].d[0] = c.r[14].d[0] & c.r[5].d[0];
    c.r[15].d[0] = c.r[15].d[0] & 16383ull;
    c.r[14].d[0] = c.r[14].d[0] | c.r[15].d[0];
    st16((c.r[9].w[0]), static_cast<std::uint16_t>(c.r[14].w[0]));
    set32(c.r[14], ld32((c.r[8].w[0])));
    set32(c.r[14], c.r[14].w[0] + 4608u);
    c.budget -= 22;
    { const bool t = c.r[10].d[0] != c.r[3].d[0]; st32((c.r[8].w[0]), c.r[14].w[0]);  if (t) { goto L_00378310; } }
    set32(c.r[14], ld32((c.r[8].w[0])));
    set32(c.r[14], c.r[14].w[0] - 18432u);
    st32((c.r[8].w[0]), c.r[14].w[0]);
    c.budget -= 3;
L_00378310:
    set32(c.r[10], c.r[10].w[0] + 1u);
    c.r[14].d[0] = c.r[10].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[14].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003782ACu | kUnwind; return; } goto L_003782AC; } }
    set32(c.r[11], c.r[11].w[0] + 1u);
    c.r[10].d[0] = c.r[11].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[10].d[0] != 0ull; c.r[10].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003782ACu | kUnwind; return; } goto L_003782AC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[12], c.r[12].w[0] + 1u);  if (t) { goto L_003783B8; } }
L_00378338:
    c.r[10].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0037833C:
    set32(c.r[14], ld32((c.r[13].w[0] + 8u)));
    set32(c.r[11], ld32((c.r[29].w[0] + 80u)));
    st32((c.r[13].w[0]), c.r[11].w[0]);
    set32(c.r[11], ld32((c.r[8].w[0])));
    st32((c.r[13].w[0] + 4u), c.r[11].w[0]);
    set32(c.r[11], ld32((c.r[7].w[0])));
    st32((c.r[13].w[0] + 8u), c.r[11].w[0]);
    set32(c.r[11], ld32((c.r[6].w[0])));
    st32((c.r[13].w[0] + 12u), c.r[11].w[0]);
    st32((c.r[13].w[0] + 8u), c.r[14].w[0]);
    c.r[11].d[0] = ld16((c.r[9].w[0]));
    set32(c.r[13], c.r[13].w[0] + 16u);
    c.r[14].d[0] = c.r[11].d[0] & 16383ull;
    set32(c.r[14], c.r[14].w[0] + 1u);
    c.r[11].d[0] = c.r[11].d[0] & c.r[5].d[0];
    c.r[14].d[0] = c.r[14].d[0] & 16383ull;
    c.r[11].d[0] = c.r[11].d[0] | c.r[14].d[0];
    c.budget -= 19;
    { const bool t = c.r[12].d[0] != 0ull; st16((c.r[9].w[0]), static_cast<std::uint16_t>(c.r[11].w[0]));  if (t) { goto L_00378398; } }
    set32(c.r[11], ld32((c.r[8].w[0])));
    set32(c.r[11], c.r[11].w[0] + 9216u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[8].w[0]), c.r[11].w[0]);  if (t) { goto L_003783A4; } }
L_00378398:
    set32(c.r[11], ld32((c.r[8].w[0])));
    set32(c.r[11], c.r[11].w[0] + 4608u);
    st32((c.r[8].w[0]), c.r[11].w[0]);
    c.budget -= 3;
L_003783A4:
    set32(c.r[10], c.r[10].w[0] + 1u);
    c.r[11].d[0] = c.r[10].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[11].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0037833Cu | kUnwind; return; } goto L_0037833C; } }
    set32(c.r[12], c.r[12].w[0] + 1u);
    c.budget -= 1;
L_003783B8:
    c.r[10].d[0] = c.r[12].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[10].d[0] != 0ull; set32(c.r[11], c.r[12].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00378284u | kUnwind; return; } goto L_00378284; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_003783E0:
    set32(c.r[8], ld32((c.r[4].w[0] + 84u)));
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], c.r[2].w[0] << (c.r[8].w[0] & 31u));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0037842C; } }
    set32(c.r[2], c.r[8].w[0] + 1u);
    st32((c.r[4].w[0] + 84u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 84u)));
    c.r[2].d[0] = c.r[2].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00378424; } }
    st32((c.r[4].w[0] + 84u), 0u);
    st32((c.r[4].w[0] + 76u), c.r[6].w[0]);
    st32((c.r[4].w[0] + 80u), c.r[7].w[0]);
    st32((c.r[4].w[0] + 88u), 0u);
    st32((c.r[4].w[0] + 92u), 0u);
    c.budget -= 5;
L_00378424:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00378430; } }
L_0037842C:
    st32((c.r[4].w[0] + 88u), c.r[2].w[0]);
    c.budget -= 1;
L_00378430:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00378440:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 88u)));
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(7ll) ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull; c.r[5].sd[0] = static_cast<std::int32_t>(0x00470000u);  if (t) { goto L_003784D8; } }
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] - 3712u);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 6;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x00378000u < 16384u) { entry = entries_009E[(t - 0x00378000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00378470:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00378478u);  if (depth < kMaxDepth) unit_009E(c, 33u, depth + 1u); else { c.pc = 0x003784F0u; return; } if (c.pc != 0x00378478u) [[unlikely]] return; }
L_00378478:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_003784DC; } }
L_00378480:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00378488u);  if (depth < kMaxDepth) unit_009E(c, 38u, depth + 1u); else { c.pc = 0x003785B0u; return; } if (c.pc != 0x00378488u) [[unlikely]] return; }
L_00378488:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003784D8; } }
L_00378490:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00378498u);  if (depth < kMaxDepth) unit_009E(c, 41u, depth + 1u); else { c.pc = 0x00378610u; return; } if (c.pc != 0x00378498u) [[unlikely]] return; }
L_00378498:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003784D8; } }
L_003784A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003784A8u);  if (depth < kMaxDepth) unit_009E(c, 44u, depth + 1u); else { c.pc = 0x00378660u; return; } if (c.pc != 0x003784A8u) [[unlikely]] return; }
L_003784A8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003784D8; } }
L_003784B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003784B8u);  if (depth < kMaxDepth) unit_009E(c, 47u, depth + 1u); else { c.pc = 0x003786B0u; return; } if (c.pc != 0x003784B8u) [[unlikely]] return; }
L_003784B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003784D8; } }
L_003784C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003784C8u);  if (depth < kMaxDepth) unit_009E(c, 53u, depth + 1u); else { c.pc = 0x00378740u; return; } if (c.pc != 0x003784C8u) [[unlikely]] return; }
L_003784C8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003784D8; } }
L_003784D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003784D8u);  if (depth < kMaxDepth) unit_009E(c, 68u, depth + 1u); else { c.pc = 0x00378A70u; return; } if (c.pc != 0x003784D8u) [[unlikely]] return; }
L_003784D8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_003784DC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003784F0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[3], 0u + 6u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[5], ld32((c.r[4].w[0] + 76u)));
    c.budget -= 6;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_00378598; } }
    set32(c.r[6], 0u + 5u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[6].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00540000u);  if (t) { goto L_00378580; } }
    set32(c.r[3], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00540000u);  if (t) { goto L_0037856C; } }
    set32(c.r[6], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[6].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00540000u);  if (t) { goto L_00378554; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00540000u);  if (t) { goto L_00378540; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_003785A0; } }
L_00378540:
    set32(c.r[5], ld32((c.r[1].w[0] - 576u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037854Cu); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_009E(c, 17u, depth + 1u); else { c.pc = 0x003783E0u; return; } if (c.pc != 0x0037854Cu) [[unlikely]] return; }
L_0037854C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037859C; } }
L_00378554:
    c.r[6].d[0] = c.r[3].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[1].w[0] - 568u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00378564u); set32(c.r[7], 0u + 2u);  if (depth < kMaxDepth) unit_009E(c, 17u, depth + 1u); else { c.pc = 0x003783E0u; return; } if (c.pc != 0x00378564u) [[unlikely]] return; }
L_00378564:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037859C; } }
L_0037856C:
    set32(c.r[5], ld32((c.r[1].w[0] - 552u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00378578u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_009E(c, 17u, depth + 1u); else { c.pc = 0x003783E0u; return; } if (c.pc != 0x00378578u) [[unlikely]] return; }
L_00378578:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037859C; } }
L_00378580:
    set32(c.r[6], 0u + 7u);
    set32(c.r[5], ld32((c.r[1].w[0] - 560u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00378590u); c.r[7].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_009E(c, 17u, depth + 1u); else { c.pc = 0x003783E0u; return; } if (c.pc != 0x00378590u) [[unlikely]] return; }
L_00378590:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037859C; } }
L_00378598:
    st32((c.r[4].w[0] + 88u), c.r[3].w[0]);
    c.budget -= 1;
L_0037859C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_003785A0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003785B0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[16].w[0] + 84u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003785CCu); set32(c.r[4], ld32((c.r[4].w[0] + 80u)));  if (depth < kMaxDepth) unit_0022(c, 180u, depth + 1u); else { c.pc = 0x00188FE0u; return; } if (c.pc != 0x003785CCu) [[unlikely]] return; }
L_003785CC:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 182u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_003785E4; } }
    set32(c.r[3], 0u + 6u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 88u), c.r[3].w[0]);  if (t) { goto L_003785FC; } }
L_003785E4:
    set32(c.r[4], ld32((c.r[16].w[0] + 96u)));
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003785F4u); set32(c.r[7], 0u + 5u);  if (depth < kMaxDepth) unit_0023(c, 57u, depth + 1u); else { c.pc = 0x0018CA30u; return; } if (c.pc != 0x003785F4u) [[unlikely]] return; }
L_003785F4:
    set32(c.r[3], 0u + 2u);
    st32((c.r[16].w[0] + 88u), c.r[3].w[0]);
    c.budget -= 2;
L_003785FC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00378610:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[16].w[0] + 84u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037862Cu); set32(c.r[4], ld32((c.r[4].w[0] + 80u)));  if (depth < kMaxDepth) unit_0022(c, 180u, depth + 1u); else { c.pc = 0x00188FE0u; return; } if (c.pc != 0x0037862Cu) [[unlikely]] return; }
L_0037862C:
    set32(c.r[4], ld32((c.r[16].w[0] + 96u)));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[6], 0u + 5u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00378640u); set32(c.r[7], 0u + 10u);  if (depth < kMaxDepth) unit_0023(c, 57u, depth + 1u); else { c.pc = 0x0018CA30u; return; } if (c.pc != 0x00378640u) [[unlikely]] return; }
L_00378640:
    set32(c.r[3], 0u + 3u);
    st32((c.r[16].w[0] + 88u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00378660:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[16].w[0] + 84u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037867Cu); set32(c.r[4], ld32((c.r[4].w[0] + 80u)));  if (depth < kMaxDepth) unit_0022(c, 180u, depth + 1u); else { c.pc = 0x00188FE0u; return; } if (c.pc != 0x0037867Cu) [[unlikely]] return; }
L_0037867C:
    set32(c.r[4], ld32((c.r[16].w[0] + 96u)));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[6], 0u + 10u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00378690u); set32(c.r[7], 0u + 15u);  if (depth < kMaxDepth) unit_0023(c, 57u, depth + 1u); else { c.pc = 0x0018CA30u; return; } if (c.pc != 0x00378690u) [[unlikely]] return; }
L_00378690:
    set32(c.r[3], 0u + 4u);
    st32((c.r[16].w[0] + 88u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003786B0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[16].w[0] + 84u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003786CCu); set32(c.r[4], ld32((c.r[4].w[0] + 80u)));  if (depth < kMaxDepth) unit_0022(c, 180u, depth + 1u); else { c.pc = 0x00188FE0u; return; } if (c.pc != 0x003786CCu) [[unlikely]] return; }
L_003786CC:
    set32(c.r[4], ld32((c.r[16].w[0] + 96u)));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[6], 0u + 15u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003786E0u); set32(c.r[7], 0u + 20u);  if (depth < kMaxDepth) unit_0023(c, 57u, depth + 1u); else { c.pc = 0x0018CA30u; return; } if (c.pc != 0x003786E0u) [[unlikely]] return; }
L_003786E0:
    set32(c.r[3], ld32((c.r[16].w[0] + 80u)));
    set32(c.r[2], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00378700; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 100u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 84u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00378700u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0024(c, 5u, depth + 1u); else { c.pc = 0x00190090u; return; } if (c.pc != 0x00378700u) [[unlikely]] return; }
L_00378700:
    set32(c.r[5], ld32((c.r[16].w[0] + 96u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037870Cu); set32(c.r[4], ld32((c.r[16].w[0] + 100u)));  if (depth < kMaxDepth) unit_0023(c, 359u, depth + 1u); else { c.pc = 0x0018F500u; return; } if (c.pc != 0x0037870Cu) [[unlikely]] return; }
L_0037870C:
    set32(c.r[4], ld32((c.r[16].w[0] + 80u)));
    set32(c.r[3], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 5u);  if (t) { goto L_00378728; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00378724u); set32(c.r[4], ld32((c.r[16].w[0] + 100u)));  if (depth < kMaxDepth) unit_0023(c, 431u, depth + 1u); else { c.pc = 0x0018FFD0u; return; } if (c.pc != 0x00378724u) [[unlikely]] return; }
L_00378724:
    set32(c.r[3], 0u + 5u);
    c.budget -= 1;
L_00378728:
    st32((c.r[16].w[0] + 88u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00378740:
    set32(c.r[29], c.r[29].w[0] - 96u);
    set32(c.r[2], 0u + 1u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 80u)));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[18].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00378774; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037876Cu);  if (depth < kMaxDepth) unit_009E(c, 59u, depth + 1u); else { c.pc = 0x00378920u; return; } if (c.pc != 0x0037876Cu) [[unlikely]] return; }
L_0037876C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_00378900; } }
L_00378774:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037877Cu);  if (depth < kMaxDepth) unit_0023(c, 256u, depth + 1u); else { c.pc = 0x0018E780u; return; } if (c.pc != 0x0037877Cu) [[unlikely]] return; }
L_0037877C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 28312u)));
    set32(c.r[6], 0u + 7000u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00378794u); set32(c.r[5], c.r[2].w[0] + 8u);  if (depth < kMaxDepth) unit_0023(c, 311u, depth + 1u); else { c.pc = 0x0018EE20u; return; } if (c.pc != 0x00378794u) [[unlikely]] return; }
L_00378794:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037879Cu);  if (depth < kMaxDepth) unit_009D(c, 346u, depth + 1u); else { c.pc = 0x00377710u; return; } if (c.pc != 0x0037879Cu) [[unlikely]] return; }
L_0037879C:
    set32(c.r[3], ld32((c.r[18].w[0] + 80u)));
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u + 3u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[6], 0u + 4608u);  if (t) { goto L_0037886C; } }
    set32(c.r[2], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 2u);  if (t) { goto L_0037884C; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00378828; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00378804; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003787E0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037887C; } }
L_003787E0:
    set32(c.r[3], ld32((c.r[18].w[0] + 84u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[1].d[0] = c.r[1].d[0] | 9876ull;
    set32(c.r[2], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 9);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[2].w[0] + c.r[1].w[0]);  if (t) { goto L_0037887C; } }
L_00378804:
    set32(c.r[3], ld32((c.r[18].w[0] + 84u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[1].d[0] = c.r[1].d[0] | 46740ull;
    set32(c.r[2], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 11);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[2].w[0] + c.r[1].w[0]);  if (t) { goto L_0037887C; } }
L_00378828:
    set32(c.r[3], ld32((c.r[18].w[0] + 84u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00030000u);
    c.r[1].d[0] = c.r[1].d[0] | 63124ull;
    set32(c.r[2], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 9);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[2].w[0] + c.r[1].w[0]);  if (t) { goto L_0037887C; } }
L_0037884C:
    set32(c.r[3], ld32((c.r[18].w[0] + 84u)));
    set32(c.r[6], 0u + 9216u);
    set32(c.r[2], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 10);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[2].w[0] + 1684u);  if (t) { goto L_0037887C; } }
L_0037886C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00040000u);
    set32(c.r[6], 0u + 18432u);
    c.r[1].d[0] = c.r[1].d[0] | 34452ull;
    set32(c.r[16], c.r[17].w[0] + c.r[1].w[0]);
    c.budget -= 4;
L_0037887C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[1].w[0] + 28312u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00378894u); set32(c.r[5], c.r[2].w[0] + 276u);  if (depth < kMaxDepth) unit_0009(c, 40u, depth + 1u); else { c.pc = 0x00124D20u; return; } if (c.pc != 0x00378894u) [[unlikely]] return; }
L_00378894:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[6], ld32((c.r[1].w[0] + 28312u)));
    set32(c.r[3], c.r[3].w[0] + 3472u);
    ld128((c.r[3].w[0]) & ~15u, c.r[4]);
    c.f[0] = ld32((c.r[3].w[0] + 16u));
    set32(c.r[5], c.r[29].w[0] + 64u);
    set32(c.r[6], ld32((c.r[6].w[0] + 8u)));
    set32(c.r[3], 0u + 3u);
    st128((c.r[5].w[0]) & ~15u, c.r[4]);
    st32((c.r[5].w[0] + 16u), c.f[0]);
    set32(c.r[4], ld32((c.r[18].w[0] + 80u)));
    c.budget -= 14;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[5], ld32((c.r[6].w[0] + 268u)));  if (t) { goto L_003788E4; } }
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[29].w[0]);
    set32(c.r[4], ld32((c.r[18].w[0] + 84u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 64u)));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);  if (t) { goto L_003788E8; } }
L_003788E4:
    set32(c.r[3], 0u + 88u);
    c.budget -= 1;
L_003788E8:
    set32(c.r[4], c.r[3].w[0] << 4);
    set32(c.r[4], c.r[4].w[0] + c.r[17].w[0]);
    set32(c.r[3], 0u + 6u);
    st32((c.r[4].w[0] + 268u), c.r[5].w[0]);
    st32((c.r[18].w[0] + 88u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 6;
L_00378900:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_00378920:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 92u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00378964; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00378944u);  if (depth < kMaxDepth) unit_0023(c, 256u, depth + 1u); else { c.pc = 0x0018E780u; return; } if (c.pc != 0x00378944u) [[unlikely]] return; }
L_00378944:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 28312u)));
    set32(c.r[6], 0u + 7000u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037895Cu); set32(c.r[5], c.r[2].w[0] + 8u);  if (depth < kMaxDepth) unit_0023(c, 311u, depth + 1u); else { c.pc = 0x0018EE20u; return; } if (c.pc != 0x0037895Cu) [[unlikely]] return; }
L_0037895C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003789A4; } }
L_00378964:
    set32(c.r[5], ld32((c.r[17].w[0] + 84u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00378970u); set32(c.r[4], ld32((c.r[17].w[0] + 80u)));  if (depth < kMaxDepth) unit_0022(c, 180u, depth + 1u); else { c.pc = 0x00188FE0u; return; } if (c.pc != 0x00378970u) [[unlikely]] return; }
L_00378970:
    set32(c.r[4], ld32((c.r[17].w[0] + 96u)));
    set32(c.r[6], ld32((c.r[17].w[0] + 92u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00378980u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0023(c, 63u, depth + 1u); else { c.pc = 0x0018CAE0u; return; } if (c.pc != 0x00378980u) [[unlikely]] return; }
L_00378980:
    set32(c.r[5], ld32((c.r[17].w[0] + 96u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037898Cu); set32(c.r[4], ld32((c.r[17].w[0] + 100u)));  if (depth < kMaxDepth) unit_0023(c, 359u, depth + 1u); else { c.pc = 0x0018F500u; return; } if (c.pc != 0x0037898Cu) [[unlikely]] return; }
L_0037898C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], ld32((c.r[17].w[0] + 100u)));
    set32(c.r[2], ld32((c.r[1].w[0] + 28312u)));
    set32(c.r[6], 0u + 7000u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003789A4u); set32(c.r[5], c.r[2].w[0] + 8u);  if (depth < kMaxDepth) unit_0023(c, 311u, depth + 1u); else { c.pc = 0x0018EE20u; return; } if (c.pc != 0x003789A4u) [[unlikely]] return; }
L_003789A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003789ACu);  if (depth < kMaxDepth) unit_009D(c, 346u, depth + 1u); else { c.pc = 0x00377710u; return; } if (c.pc != 0x003789ACu) [[unlikely]] return; }
L_003789AC:
    set32(c.r[7], ld32((c.r[17].w[0] + 84u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], ld32((c.r[1].w[0] + 28312u)));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[17].w[0] + 92u)));
    set32(c.r[6], 0u + 4608u);
    set32(c.r[4], c.r[7].w[0] << 3);
    set32(c.r[7], c.r[4].w[0] + c.r[7].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[4], c.r[5].w[0] << 3);
    c.r[1].d[0] = c.r[1].d[0] | 46740ull;
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[5], c.r[7].w[0] << 11);
    set32(c.r[5], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[4].w[0] << 9);
    set32(c.r[4], c.r[5].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 8u)));
    set32(c.r[4], c.r[4].w[0] + c.r[1].w[0]);
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003789FCu); set32(c.r[5], c.r[2].w[0] + 276u);  if (depth < kMaxDepth) unit_0009(c, 40u, depth + 1u); else { c.pc = 0x00124D20u; return; } if (c.pc != 0x003789FCu) [[unlikely]] return; }
L_003789FC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], ld32((c.r[17].w[0] + 84u)));
    set32(c.r[5], ld32((c.r[1].w[0] + 28312u)));
    set32(c.r[3], ld32((c.r[17].w[0] + 92u)));
    set32(c.r[4], c.r[4].w[0] << 3);
    set32(c.r[5], ld32((c.r[5].w[0] + 8u)));
    set32(c.r[4], c.r[4].w[0] + 16u);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[4], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0] + 268u)));
    st32((c.r[4].w[0] + 268u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0] + 268u)));
    st32((c.r[4].w[0] + 284u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 92u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[17].w[0] + 92u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 92u)));
    c.r[3].d[0] = c.r[3].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 22;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u + 6u);  if (t) { goto L_00378A5C; } }
    st32((c.r[17].w[0] + 88u), c.r[3].w[0]);
    st32((c.r[17].w[0] + 92u), 0u);
    c.budget -= 2;
L_00378A5C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00378A70:
    set32(c.r[5], ld32((c.r[4].w[0] + 80u)));
    set32(c.r[3], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[3].d[0]; set32(c.r[29], c.r[29].w[0] - 32u);  if (t) { goto L_00378A90; } }
    set32(c.r[3], 0u + 7u);
    st32((c.r[4].w[0] + 76u), c.r[3].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 80u), c.r[3].w[0]);  if (t) { goto L_00378ADC; } }
L_00378A90:
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[8], c.r[8].w[0] + 3504u);
    set32(c.r[7], c.r[29].w[0]);
    ld128((c.r[8].w[0]) & ~15u, c.r[5]);
    c.f[0] = ld32((c.r[8].w[0] + 16u));
    set32(c.r[3], c.r[3].w[0] + c.r[29].w[0]);
    set32(c.r[6], 0u + 1u);
    st128((c.r[7].w[0]) & ~15u, c.r[5]);
    st32((c.r[7].w[0] + 16u), c.f[0]);
    set32(c.r[7], ld32((c.r[3].w[0])));
    set32(c.r[3], ld32((c.r[4].w[0] + 84u)));
    set32(c.r[5], ld32((c.r[7].w[0])));
    set32(c.r[6], c.r[6].w[0] << (c.r[3].w[0] & 31u));
    c.r[3].d[0] = c.r[5].d[0] & c.r[6].d[0];
    c.budget -= 17;
    { const bool t = c.r[3].d[0] == 0ull; c.r[3].d[0] = c.r[5].d[0] ^ c.r[6].d[0];  if (t) { goto L_00378AD8; } }
    st32((c.r[7].w[0]), c.r[3].w[0]);
    c.budget -= 1;
L_00378AD8:
    st32((c.r[4].w[0] + 88u), 0u);
    c.budget -= 1;
L_00378ADC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00378AF0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[1].w[0] + 28312u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00378B7C; } }
    set32(c.r[5], c.r[3].w[0] + 4u);
    set32(c.r[3], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00378B7C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], c.r[2].w[0] - 528u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00378B2Cu); st32((c.r[5].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x001001F0u; return; } if (c.pc != 0x00378B2Cu) [[unlikely]] return; }
L_00378B2C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[1].w[0] + 28312u)));
    st32((c.r[3].w[0] + 8u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 28312u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00378B50u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 49u, depth + 1u); else { c.pc = 0x00124ED8u; return; } if (c.pc != 0x00378B50u) [[unlikely]] return; }
L_00378B50:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00378B58u);  if (depth < kMaxDepth) unit_009D(c, 346u, depth + 1u); else { c.pc = 0x00377710u; return; } if (c.pc != 0x00378B58u) [[unlikely]] return; }
L_00378B58:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 28312u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00378B74u); set32(c.r[6], 0u + 256u);  if (depth < kMaxDepth) unit_0009(c, 40u, depth + 1u); else { c.pc = 0x00124D20u; return; } if (c.pc != 0x00378B74u) [[unlikely]] return; }
L_00378B74:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00378B7Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0024(c, 52u, depth + 1u); else { c.pc = 0x001906D0u; return; } if (c.pc != 0x00378B7Cu) [[unlikely]] return; }
L_00378B7C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00378B90:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], ld32((c.r[1].w[0] - 584u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00378BA8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 80u)));  if (t) { goto L_00378BAC; } }
L_00378BA8:
    set32(c.r[2], 0u + 7u);
    c.budget -= 1;
L_00378BAC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00378BC0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], ld32((c.r[1].w[0] - 584u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00378BD8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00378BE4; } }
L_00378BD8:
    set32(c.r[2], ld32((c.r[2].w[0] + 76u)));
    c.r[2].d[0] = c.r[2].d[0] ^ 8ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 3;
L_00378BE4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00378BF0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[3], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_00378C94; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00540000u);  if (t) { goto L_00378C7C; } }
    set32(c.r[6], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[6].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00540000u);  if (t) { goto L_00378C64; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00540000u);  if (t) { goto L_00378C4C; } }
    set32(c.r[3], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00540000u);  if (t) { goto L_00378C34; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00378C94; } }
L_00378C34:
    set32(c.r[4], c.r[6].w[0] << (c.r[5].w[0] & 31u));
    set32(c.r[3], ld32((c.r[1].w[0] - 576u)));
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[1].w[0] - 576u), c.r[3].w[0]);  if (t) { goto L_00378C94; } }
L_00378C4C:
    set32(c.r[4], c.r[6].w[0] << (c.r[5].w[0] & 31u));
    set32(c.r[3], ld32((c.r[1].w[0] - 568u)));
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[1].w[0] - 568u), c.r[3].w[0]);  if (t) { goto L_00378C94; } }
L_00378C64:
    set32(c.r[4], c.r[6].w[0] << (c.r[5].w[0] & 31u));
    set32(c.r[3], ld32((c.r[1].w[0] - 560u)));
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[1].w[0] - 560u), c.r[3].w[0]);  if (t) { goto L_00378C94; } }
L_00378C7C:
    set32(c.r[4], 0u + 1u);
    set32(c.r[3], ld32((c.r[1].w[0] - 552u)));
    set32(c.r[4], c.r[4].w[0] << (c.r[5].w[0] & 31u));
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00540000u);
    st32((c.r[1].w[0] - 552u), c.r[3].w[0]);
    c.budget -= 6;
L_00378C94:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[4], ld32((c.r[1].w[0] - 584u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00378CAC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00378CACu);  if (depth < kMaxDepth) unit_009E(c, 81u, depth + 1u); else { c.pc = 0x00378D10u; return; } if (c.pc != 0x00378CACu) [[unlikely]] return; }
L_00378CAC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00378CC0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[3], 0u + 255u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00540000u);
    st32((c.r[1].w[0] - 576u), c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00540000u);
    st32((c.r[1].w[0] - 568u), c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00540000u);
    st32((c.r[1].w[0] - 560u), c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00540000u);
    st32((c.r[1].w[0] - 552u), c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[4], ld32((c.r[1].w[0] - 584u)));
    c.budget -= 15;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00378D04; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00378D04u);  if (depth < kMaxDepth) unit_009E(c, 81u, depth + 1u); else { c.pc = 0x00378D10u; return; } if (c.pc != 0x00378D04u) [[unlikely]] return; }
L_00378D04:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00378D10:
    set32(c.r[3], ld32((c.r[4].w[0] + 76u)));
    c.r[3].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[5], 0u + 2u);  if (t) { goto L_00378D38; } }
    set32(c.r[3], 0u + 4u);
    st32((c.r[4].w[0] + 76u), c.r[5].w[0]);
    st32((c.r[4].w[0] + 84u), 0u);
    st32((c.r[4].w[0] + 80u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 88u), 0u);
    st32((c.r[4].w[0] + 92u), 0u);
    c.budget -= 6;
L_00378D38:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00378D40:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 8u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00377E10u | kUnwind; return; } [[clang::musttail]] return unit_009D(c, 409u, depth); }
L_00378D50:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[5], 0u + 2u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00378D68u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 29u, depth + 1u); else { c.pc = 0x00140690u; return; } if (c.pc != 0x00378D68u) [[unlikely]] return; }
L_00378D68:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] + 32752u);
    set32(c.r[4], 0u + 2u);
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00378D88u); c.r[7].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 394u, depth + 1u); else { c.pc = 0x0016F220u; return; } if (c.pc != 0x00378D88u) [[unlikely]] return; }
L_00378D88:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00378DA0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00378DF0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] + 32752u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00378DCCu); st32((c.r[17].w[0] + 8u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_001B(c, 397u, depth + 1u); else { c.pc = 0x0016F2B0u; return; } if (c.pc != 0x00378DCCu) [[unlikely]] return; }
L_00378DCC:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00378DD8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0010(c, 31u, depth + 1u); else { c.pc = 0x00140700u; return; } if (c.pc != 0x00378DD8u) [[unlikely]] return; }
L_00378DD8:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00378DF4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00378DF0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x00378DF0u) [[unlikely]] return; }
L_00378DF0:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00378DF4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00378E10:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[1].w[0] + 25384u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 44u)));
    c.budget -= 11;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00378E3Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00378E3Cu) [[unlikely]] return; }
L_00378E3C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00378EB8; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 25384u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 32u)));
    c.r[2].d[0] = c.r[2].d[0] ^ 2ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00378E5Cu); c.r[16].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  if (depth < kMaxDepth) unit_000B(c, 79u, depth + 1u); else { c.pc = 0x0012CB20u; return; } if (c.pc != 0x00378E5Cu) [[unlikely]] return; }
L_00378E5C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00020000u);
    set32(c.r[4], 0u + 1u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    st8((c.r[1].w[0] + 17272u), static_cast<std::uint8_t>(c.r[16].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 3840u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00378E7Cu); st32((c.r[29].w[0] + 60u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x00378E7Cu) [[unlikely]] return; }
L_00378E7C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00378E84u); set32(c.r[4], 0u + 20u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00378E84u) [[unlikely]] return; }
L_00378E84:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00378E94; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00378E94u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 174u, depth + 1u); else { c.pc = 0x0012D9E0u; return; } if (c.pc != 0x00378E94u) [[unlikely]] return; }
L_00378E94:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_00378EB0; } }
    set32(c.r[25], ld32((c.r[17].w[0] + 8u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00378EB0u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00378EB0u) [[unlikely]] return; }
L_00378EB0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00378EB8u); set32(c.r[4], ld32((c.r[29].w[0] + 60u)));  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x00378EB8u) [[unlikely]] return; }
L_00378EB8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00378ED0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00378EF0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 298u, depth + 1u); else { c.pc = 0x0012E440u; return; } if (c.pc != 0x00378EF0u) [[unlikely]] return; }
L_00378EF0:
    set32(c.r[4], c.r[17].w[0] + 20u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00378EFCu); set32(c.r[5], 0u + 5u);  if (depth < kMaxDepth) unit_000F(c, 264u, depth + 1u); else { c.pc = 0x0013E560u; return; } if (c.pc != 0x00378EFCu) [[unlikely]] return; }
L_00378EFC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[3], c.r[3].w[0] - 32096u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00380000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00380000u);
    set32(c.r[2], c.r[2].w[0] - 32008u);
    st32((c.r[17].w[0]), c.r[3].w[0]);
    set32(c.r[4], c.r[17].w[0] + 32u);
    st32((c.r[17].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[5], c.r[5].w[0] + 24160u);
    set32(c.r[6], c.r[6].w[0] + 24400u);
    set32(c.r[7], 0u + 1408u);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00378F34u); set32(c.r[8], 0u + 9u);  if (depth < kMaxDepth) unit_0000(c, 89u, depth + 1u); else { c.pc = 0x00100790u; return; } if (c.pc != 0x00378F34u) [[unlikely]] return; }
L_00378F34:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00390000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00390000u);
    set32(c.r[4], c.r[17].w[0] + 12704u);
    set32(c.r[5], c.r[5].w[0] - 176u);
    set32(c.r[6], c.r[6].w[0]);
    set32(c.r[7], 0u + 1104u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00378F54u); set32(c.r[8], 0u + 9u);  if (depth < kMaxDepth) unit_0000(c, 89u, depth + 1u); else { c.pc = 0x00100790u; return; } if (c.pc != 0x00378F54u) [[unlikely]] return; }
L_00378F54:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00378F5Cu); set32(c.r[4], c.r[17].w[0] + 22640u);  if (depth < kMaxDepth) unit_00A4(c, 67u, depth + 1u); else { c.pc = 0x00390BE0u; return; } if (c.pc != 0x00378F5Cu) [[unlikely]] return; }
L_00378F5C:
    set32(c.r[4], c.r[17].w[0] + 23376u);
    set32(c.r[5], 0u + 3u);
    set32(c.r[6], 0u + 5u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00378F70u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002A(c, 346u, depth + 1u); else { c.pc = 0x001ABAD0u; return; } if (c.pc != 0x00378F70u) [[unlikely]] return; }
L_00378F70:
    set32(c.r[4], c.r[17].w[0] + 23728u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00378F7Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0049(c, 271u, depth + 1u); else { c.pc = 0x002275A0u; return; } if (c.pc != 0x00378F7Cu) [[unlikely]] return; }
L_00378F7C:
    st32((c.r[17].w[0] + 23788u), c.r[16].w[0]);
    set32(c.r[2], 0u + 9u);
    st32((c.r[17].w[0] + 23792u), 0u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[17].w[0] + 23796u), c.r[2].w[0]);
    set32(c.r[2], 0u + 1u);
    st32((c.r[17].w[0] + 23800u), 0u);
    st32((c.r[17].w[0] + 23804u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 23808u), 0u);
    st32((c.r[17].w[0] + 23812u), 0u);
    st32((c.r[17].w[0] + 23816u), 0u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00378FB0u); st8((c.r[17].w[0] + 23820u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_009F(c, 83u, depth + 1u); else { c.pc = 0x0037CEF0u; return; } if (c.pc != 0x00378FB0u) [[unlikely]] return; }
L_00378FB0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00378FB8u); set32(c.r[16], ld32((c.r[2].w[0] + 16u)));  if (depth < kMaxDepth) unit_009F(c, 200u, depth + 1u); else { c.pc = 0x0037DCF0u; return; } if (c.pc != 0x00378FB8u) [[unlikely]] return; }
L_00378FB8:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00378FC4u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_009F(c, 179u, depth + 1u); else { c.pc = 0x0037D9B0u; return; } if (c.pc != 0x00378FC4u) [[unlikely]] return; }
L_00378FC4:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00378FE0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003790C0; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[3], c.r[3].w[0] - 32096u);
    set32(c.r[2], c.r[2].w[0] - 32008u);
    st32((c.r[17].w[0]), c.r[3].w[0]);
    st32((c.r[17].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 23792u)));
    c.budget -= 9;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00379038; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00379038; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00379038u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00379038u) [[unlikely]] return; }
L_00379038:
    set32(c.r[4], c.r[17].w[0] + 23728u);
    set32(c.r[5], 0u - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00379048u); st32((c.r[17].w[0] + 23792u), 0u);  if (depth < kMaxDepth) unit_0049(c, 274u, depth + 1u); else { c.pc = 0x002275F0u; return; } if (c.pc != 0x00379048u) [[unlikely]] return; }
L_00379048:
    set32(c.r[4], c.r[17].w[0] + 23376u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00379054u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_002A(c, 353u, depth + 1u); else { c.pc = 0x001ABB90u; return; } if (c.pc != 0x00379054u) [[unlikely]] return; }
L_00379054:
    set32(c.r[4], c.r[17].w[0] + 22640u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00379060u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_00A4(c, 69u, depth + 1u); else { c.pc = 0x00390CA0u; return; } if (c.pc != 0x00379060u) [[unlikely]] return; }
L_00379060:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00390000u);
    set32(c.r[4], c.r[17].w[0] + 12704u);
    set32(c.r[5], c.r[5].w[0]);
    set32(c.r[6], 0u + 1104u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00379078u); set32(c.r[7], 0u + 9u);  if (depth < kMaxDepth) unit_0000(c, 86u, depth + 1u); else { c.pc = 0x00100720u; return; } if (c.pc != 0x00379078u) [[unlikely]] return; }
L_00379078:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00380000u);
    set32(c.r[4], c.r[17].w[0] + 32u);
    set32(c.r[5], c.r[5].w[0] + 24400u);
    set32(c.r[6], 0u + 1408u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00379090u); set32(c.r[7], 0u + 9u);  if (depth < kMaxDepth) unit_0000(c, 86u, depth + 1u); else { c.pc = 0x00100720u; return; } if (c.pc != 0x00379090u) [[unlikely]] return; }
L_00379090:
    set32(c.r[4], c.r[17].w[0] + 20u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037909Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000F(c, 266u, depth + 1u); else { c.pc = 0x0013E5B0u; return; } if (c.pc != 0x0037909Cu) [[unlikely]] return; }
L_0037909C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003790A8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 300u, depth + 1u); else { c.pc = 0x0012E490u; return; } if (c.pc != 0x003790A8u) [[unlikely]] return; }
L_003790A8:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003790C4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003790C0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x003790C0u) [[unlikely]] return; }
L_003790C0:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003790C4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003790E0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003790F4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_009E(c, 126u, depth + 1u); else { c.pc = 0x00379240u; return; } if (c.pc != 0x003790F4u) [[unlikely]] return; }
L_003790F4:
    set32(c.r[2], ld32((c.r[16].w[0] + 23796u)));
    set32(c.r[3], 0u + 9u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_0037914C; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 23800u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; mmi::div(c, 0, c.r[2].w[0], c.r[3].w[0]);  if (t) { goto L_00379114; } }
    breakpoint(c, 0x00379110u);
    c.budget -= 1;
L_00379114:
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], 0u + 9u);
    st32((c.r[16].w[0] + 23804u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 23800u)));
    mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.hi.d[0];
    c.budget -= 10;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00379194; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 23804u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 23804u), c.r[2].w[0]);  if (t) { goto L_00379194; } }
L_0037914C:
    set32(c.r[3], ld32((c.r[16].w[0] + 23800u)));
    set32(c.r[2], 0u + 6u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);  if (t) { goto L_00379160; } }
    breakpoint(c, 0x0037915Cu);
    c.budget -= 1;
L_00379160:
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], 0u + 6u);
    st32((c.r[16].w[0] + 23804u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 23800u)));
    mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.hi.d[0];
    c.budget -= 10;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00379194; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 23804u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[16].w[0] + 23804u), c.r[2].w[0]);
    c.budget -= 3;
L_00379194:
    set32(c.r[3], ld32((c.r[16].w[0] + 23816u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 23796u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);  if (t) { goto L_003791A8; } }
    breakpoint(c, 0x003791A4u);
    c.budget -= 1;
L_003791A8:
    c.r[2].d[0] = c.lo.d[0];
    st32((c.r[16].w[0] + 23808u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 23816u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 23796u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);  if (t) { goto L_003791C4; } }
    breakpoint(c, 0x003791C0u);
    c.budget -= 1;
L_003791C4:
    c.r[2].d[0] = c.hi.d[0];
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003791D4u); st32((c.r[16].w[0] + 23812u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_009E(c, 142u, depth + 1u); else { c.pc = 0x003797E0u; return; } if (c.pc != 0x003791D4u) [[unlikely]] return; }
L_003791D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003791DCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_009E(c, 139u, depth + 1u); else { c.pc = 0x00379730u; return; } if (c.pc != 0x003791DCu) [[unlikely]] return; }
L_003791DC:
    set32(c.r[2], ld32((c.r[16].w[0] + 23804u)));
    c.r[1].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[4], c.r[16].w[0] + 23376u);  if (t) { goto L_00379228; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[6], c.r[29].w[0] + 32u);
    set32(c.r[2], c.r[2].w[0] + 3536u);
    set32(c.r[4], c.r[16].w[0] + 23376u);
    ld128((c.r[2].w[0]) & ~15u, c.r[3]);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x430C0000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00379214u); st128((c.r[6].w[0]) & ~15u, c.r[3]);  if (depth < kMaxDepth) unit_002A(c, 359u, depth + 1u); else { c.pc = 0x001ABC20u; return; } if (c.pc != 0x00379214u) [[unlikely]] return; }
L_00379214:
    set32(c.r[4], c.r[16].w[0] + 23376u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00379220u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_002A(c, 361u, depth + 1u); else { c.pc = 0x001ABCF0u; return; } if (c.pc != 0x00379220u) [[unlikely]] return; }
L_00379220:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_00379234; } }
L_00379228:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00379230u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002A(c, 361u, depth + 1u); else { c.pc = 0x001ABCF0u; return; } if (c.pc != 0x00379230u) [[unlikely]] return; }
L_00379230:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_00379234:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00379240:
    set32(c.r[29], c.r[29].w[0] - 192u);
    set32(c.r[2], 0u + 19u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
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
    set32(c.r[3], ld32((c.r[4].w[0] + 23788u)));
    c.budget -= 16;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[21].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0037928C; } }
    set32(c.r[2], 0u + 17u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00379294; } }
L_0037928C:
    set32(c.r[2], 0u + 6u);
    st32((c.r[21].w[0] + 23796u), c.r[2].w[0]);
    c.budget -= 2;
L_00379294:
    set32(c.r[3], ld32((c.r[21].w[0] + 23796u)));
    set32(c.r[2], 0u + 9u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[20].d[0] = 0ull + 0ull;  if (t) { goto L_003794DC; } }
    c.r[20].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003792A8:
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; mmi::divu(c, 0, c.r[20].w[0], c.r[2].w[0]);  if (t) { goto L_003792B8; } }
    breakpoint(c, 0x003792B4u);
    c.budget -= 1;
L_003792B8:
    c.r[17].d[0] = c.lo.d[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42E00000u);
    c.f[1] = c.r[2].w[0];
    c.budget -= 5;
    { const bool t = c.r[17].sd[0] < 0; set32(c.r[3], c.r[17].w[0] >> 1);  if (t) { goto L_003792D8; } }
    c.f[0] = c.r[17].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_003792F0; } }
L_003792D8:
    c.r[2].d[0] = c.r[17].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::add(c.f[0], c.f[0]);
    c.budget -= 6;
L_003792F0:
    set32(c.r[3], 0u + 3u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x429C0000u);
    mmi::divu(c, 0, c.r[20].w[0], c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42E00000u);
    c.f[21] = fp::mul(c.f[1], c.f[0]);
    c.f[0] = c.r[4].w[0];
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::add(c.f[0], c.f[21]);
    c.r[16].d[0] = c.hi.d[0];
    c.budget -= 12;
    { const bool t = c.r[16].sd[0] < 0; st32((c.r[29].w[0] + 176u), c.f[0]);  if (t) { goto L_0037932C; } }
    c.f[0] = c.r[16].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_00379348; } }
L_0037932C:
    set32(c.r[3], c.r[16].w[0] >> 1);
    c.r[2].d[0] = c.r[16].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::add(c.f[0], c.f[0]);
    c.budget -= 7;
L_00379348:
    c.f[20] = fp::mul(c.f[1], c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    set32(c.r[2], c.r[20].w[0] << 2);
    set32(c.r[22], c.r[29].w[0] + 180u);
    set32(c.r[2], c.r[2].w[0] + c.r[20].w[0]);
    set32(c.r[23], c.r[29].w[0] + 184u);
    set32(c.r[2], c.r[2].w[0] << 1);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[20].w[0]);
    c.f[0] = c.r[3].w[0];
    set32(c.r[2], c.r[2].w[0] << 7);
    set32(c.r[19], c.r[21].w[0] + c.r[2].w[0]);
    c.f[0] = fp::add(c.f[0], c.f[20]);
    set32(c.r[18], c.r[19].w[0] + 32u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    st32((c.r[22].w[0]), c.f[0]);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00379390u); st32((c.r[23].w[0]), 0u);  if (depth < kMaxDepth) unit_00A1(c, 211u, depth + 1u); else { c.pc = 0x003862A0u; return; } if (c.pc != 0x00379390u) [[unlikely]] return; }
L_00379390:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037939Cu); set32(c.r[5], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_00A1(c, 205u, depth + 1u); else { c.pc = 0x00386190u; return; } if (c.pc != 0x0037939Cu) [[unlikely]] return; }
L_0037939C:
    set32(c.r[2], 0u + 2u);
    set32(c.r[4], c.r[18].w[0] + 1280u);
    st32((c.r[19].w[0] + 1408u), c.r[2].w[0]);
    st32((c.r[19].w[0] + 1372u), 0u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003793B4u); st8((c.r[19].w[0] + 1368u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_002A(c, 280u, depth + 1u); else { c.pc = 0x001AB050u; return; } if (c.pc != 0x003793B4u) [[unlikely]] return; }
L_003793B4:
    c.budget -= 2;
    { const bool t = c.r[17].sd[0] < 0; set32(c.r[3], c.r[17].w[0] >> 1);  if (t) { goto L_003793C8; } }
    c.f[0] = c.r[17].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[2] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_003793E0; } }
L_003793C8:
    c.r[2].d[0] = c.r[17].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[2] = fp::cvt_s_w(c.f[0]);
    c.f[2] = fp::add(c.f[2], c.f[2]);
    c.budget -= 6;
L_003793E0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[1] = ld32((c.r[1].w[0] - 3624u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[0] = ld32((c.r[1].w[0] - 3616u));
    c.f[1] = fp::mul(c.f[1], c.f[2]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.budget -= 8;
    { const bool t = c.r[16].sd[0] < 0; st32((c.r[29].w[0] + 176u), c.f[0]);  if (t) { goto L_0037940C; } }
    c.f[0] = c.r[16].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[2] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_00379428; } }
L_0037940C:
    set32(c.r[3], c.r[16].w[0] >> 1);
    c.r[2].d[0] = c.r[16].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[2] = fp::cvt_s_w(c.f[0]);
    c.f[2] = fp::add(c.f[2], c.f[2]);
    c.budget -= 7;
L_00379428:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[2], c.r[20].w[0] << 4);
    c.f[1] = ld32((c.r[1].w[0] - 3640u));
    set32(c.r[2], c.r[2].w[0] + c.r[20].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[20].w[0]);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[17], c.r[21].w[0] + c.r[2].w[0]);
    set32(c.r[16], c.r[17].w[0] + 12704u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[0] = ld32((c.r[1].w[0] - 3632u));
    c.f[1] = fp::mul(c.f[1], c.f[2]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[22].w[0]), c.f[0]);
    st32((c.r[23].w[0]), 0u);
    ld128((c.r[29].w[0] + 176u) & ~15u, c.r[2]);
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00379474u); st128((c.r[17].w[0] + 13696u) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_00A4(c, 30u, depth + 1u); else { c.pc = 0x003905A0u; return; } if (c.pc != 0x00379474u) [[unlikely]] return; }
L_00379474:
    set32(c.r[3], ld32((c.r[21].w[0] + 23788u)));
    set32(c.r[2], c.r[20].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[20].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[5], c.r[2].w[0] + 11264u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00379494u); st32((c.r[17].w[0] + 13752u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_00A4(c, 8u, depth + 1u); else { c.pc = 0x003900C0u; return; } if (c.pc != 0x00379494u) [[unlikely]] return; }
L_00379494:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x41F80000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x424C0000u);
    c.f[1] = c.r[4].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[0] = c.r[3].w[0];
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.f[1] = fp::add(c.f[1], c.f[21]);
    c.r[3].d[0] = c.r[20].d[0] < static_cast<std::uint64_t>(9ll) ? 1ull : 0ull;
    c.f[0] = fp::add(c.f[0], c.f[20]);
    st32((c.r[29].w[0] + 176u), c.f[1]);
    st32((c.r[22].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[1].w[0] - 3648u));
    st32((c.r[23].w[0]), c.f[0]);
    ld128((c.r[29].w[0] + 176u) & ~15u, c.r[4]);
    c.budget -= 16;
    { const bool t = c.r[3].d[0] != 0ull; st128((c.r[17].w[0] + 13712u) & ~15u, c.r[4]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003792A8u | kUnwind; return; } goto L_003792A8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));  if (t) { goto L_003796FC; } }
L_003794DC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42E00000u);
    set32(c.r[17], c.r[20].w[0] >> 1);
    c.f[1] = c.r[2].w[0];
    c.budget -= 5;
    { const bool t = c.r[17].sd[0] < 0; set32(c.r[3], c.r[17].w[0] >> 1);  if (t) { goto L_003794FC; } }
    c.f[0] = c.r[17].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_00379514; } }
L_003794FC:
    c.r[2].d[0] = c.r[17].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::add(c.f[0], c.f[0]);
    c.budget -= 6;
L_00379514:
    c.f[21] = fp::mul(c.f[1], c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x429C0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43270000u);
    c.r[16].d[0] = c.r[20].d[0] & 1ull;
    c.f[0] = c.r[3].w[0];
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::add(c.f[0], c.f[21]);
    c.budget -= 10;
    { const bool t = c.r[16].sd[0] < 0; st32((c.r[29].w[0] + 160u), c.f[0]);  if (t) { goto L_00379548; } }
    c.f[0] = c.r[16].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_00379564; } }
L_00379548:
    set32(c.r[3], c.r[16].w[0] >> 1);
    c.r[2].d[0] = c.r[16].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::add(c.f[0], c.f[0]);
    c.budget -= 7;
L_00379564:
    c.f[20] = fp::mul(c.f[1], c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43020000u);
    set32(c.r[2], c.r[20].w[0] << 2);
    set32(c.r[22], c.r[29].w[0] + 164u);
    set32(c.r[2], c.r[2].w[0] + c.r[20].w[0]);
    set32(c.r[23], c.r[29].w[0] + 168u);
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[5], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] + c.r[20].w[0]);
    c.f[0] = c.r[3].w[0];
    set32(c.r[2], c.r[2].w[0] << 7);
    set32(c.r[19], c.r[21].w[0] + c.r[2].w[0]);
    c.f[0] = fp::add(c.f[0], c.f[20]);
    set32(c.r[18], c.r[19].w[0] + 32u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    st32((c.r[22].w[0]), c.f[0]);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003795ACu); st32((c.r[23].w[0]), 0u);  if (depth < kMaxDepth) unit_00A1(c, 211u, depth + 1u); else { c.pc = 0x003862A0u; return; } if (c.pc != 0x003795ACu) [[unlikely]] return; }
L_003795AC:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003795B8u); set32(c.r[5], c.r[29].w[0] + 160u);  if (depth < kMaxDepth) unit_00A1(c, 205u, depth + 1u); else { c.pc = 0x00386190u; return; } if (c.pc != 0x003795B8u) [[unlikely]] return; }
L_003795B8:
    set32(c.r[2], 0u + 2u);
    set32(c.r[4], c.r[18].w[0] + 1280u);
    st32((c.r[19].w[0] + 1408u), c.r[2].w[0]);
    st32((c.r[19].w[0] + 1372u), 0u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003795D0u); st8((c.r[19].w[0] + 1368u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_002A(c, 280u, depth + 1u); else { c.pc = 0x001AB050u; return; } if (c.pc != 0x003795D0u) [[unlikely]] return; }
L_003795D0:
    c.budget -= 2;
    { const bool t = c.r[17].sd[0] < 0; set32(c.r[3], c.r[17].w[0] >> 1);  if (t) { goto L_003795E4; } }
    c.f[0] = c.r[17].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[2] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_003795FC; } }
L_003795E4:
    c.r[2].d[0] = c.r[17].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[2] = fp::cvt_s_w(c.f[0]);
    c.f[2] = fp::add(c.f[2], c.f[2]);
    c.budget -= 6;
L_003795FC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[1] = ld32((c.r[1].w[0] - 3624u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[0] = ld32((c.r[1].w[0] - 3616u));
    c.f[1] = fp::mul(c.f[1], c.f[2]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.budget -= 8;
    { const bool t = c.r[16].sd[0] < 0; st32((c.r[29].w[0] + 160u), c.f[0]);  if (t) { goto L_00379628; } }
    c.f[0] = c.r[16].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[2] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_00379644; } }
L_00379628:
    set32(c.r[3], c.r[16].w[0] >> 1);
    c.r[2].d[0] = c.r[16].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[2] = fp::cvt_s_w(c.f[0]);
    c.f[2] = fp::add(c.f[2], c.f[2]);
    c.budget -= 7;
L_00379644:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[2], c.r[20].w[0] << 4);
    c.f[1] = ld32((c.r[1].w[0] - 3664u));
    set32(c.r[2], c.r[2].w[0] + c.r[20].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[2], c.r[2].w[0] + c.r[20].w[0]);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[17], c.r[21].w[0] + c.r[2].w[0]);
    set32(c.r[16], c.r[17].w[0] + 12704u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[0] = ld32((c.r[1].w[0] - 3656u));
    c.f[1] = fp::mul(c.f[1], c.f[2]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[22].w[0]), c.f[0]);
    st32((c.r[23].w[0]), 0u);
    st32((c.r[29].w[0] + 172u), c.r[3].w[0]);
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[2]);
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00379698u); st128((c.r[17].w[0] + 13696u) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_00A4(c, 30u, depth + 1u); else { c.pc = 0x003905A0u; return; } if (c.pc != 0x00379698u) [[unlikely]] return; }
L_00379698:
    set32(c.r[3], ld32((c.r[21].w[0] + 23788u)));
    set32(c.r[2], c.r[20].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[20].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[5], c.r[2].w[0] + 11264u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003796B8u); st32((c.r[17].w[0] + 13752u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_00A4(c, 8u, depth + 1u); else { c.pc = 0x003900C0u; return; } if (c.pc != 0x003796B8u) [[unlikely]] return; }
L_003796B8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x41F80000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42540000u);
    c.f[1] = c.r[4].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[0] = c.r[3].w[0];
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.f[1] = fp::add(c.f[1], c.f[21]);
    c.r[3].d[0] = c.r[20].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;
    c.f[0] = fp::add(c.f[0], c.f[20]);
    st32((c.r[29].w[0] + 160u), c.f[1]);
    st32((c.r[22].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[1].w[0] - 3648u));
    st32((c.r[23].w[0]), c.f[0]);
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[4]);
    c.budget -= 16;
    { const bool t = c.r[3].d[0] != 0ull; st128((c.r[17].w[0] + 13712u) & ~15u, c.r[4]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003794DCu | kUnwind; return; } goto L_003794DC; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));
    c.budget -= 1;
L_003796FC:
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
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 192u);  c.pc = t; return; }
L_00379730:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0] + 23808u)));
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0] + 23796u)));
    c.budget -= 12;
    { const bool t = 0ull == 0ull; mmi::mult(c, 0, c.r[5].w[0], c.r[3].w[0]); c.r[17].d[0] = c.lo.d[0];  if (t) { goto L_003797AC; } }
L_00379760:
    set32(c.r[6], c.r[17].w[0] + c.r[16].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[4], c.r[18].w[0] + c.r[3].w[0]);
    st8((c.r[4].w[0] + 13792u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[18].w[0] + 23800u)));
    c.r[1].d[0] = c.r[6].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[19], c.r[4].w[0] + 13792u);  if (t) { goto L_003797A8; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[5], c.r[4].w[0] + 12704u);
    set32(c.r[25], ld32((c.r[25].w[0] + 108u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003797A0u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003797A0u) [[unlikely]] return; }
L_003797A0:
    set32(c.r[3], 0u + 1u);
    st8((c.r[19].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_003797A8:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_003797AC:
    set32(c.r[3], ld32((c.r[18].w[0] + 23796u)));
    c.r[3].d[0] = c.r[16].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], c.r[16].w[0] << 4);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00379760u | kUnwind; return; } goto L_00379760; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003797E0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_00379838; } }
L_003797FC:
    set32(c.r[2], ld32((c.r[17].w[0] + 23812u)));
    set32(c.r[3], c.r[16].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[3], c.r[3].w[0] << 7);
    set32(c.r[3], c.r[17].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = c.r[16].d[0] ^ c.r[2].d[0];
    set32(c.r[4], c.r[3].w[0] + 1312u);
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    st8((c.r[3].w[0] + 1424u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[3].w[0] + 1372u), 0u);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00379834u); st8((c.r[3].w[0] + 1368u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_002A(c, 280u, depth + 1u); else { c.pc = 0x001AB050u; return; } if (c.pc != 0x00379834u) [[unlikely]] return; }
L_00379834:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_00379838:
    set32(c.r[3], ld32((c.r[17].w[0] + 23796u)));
    c.r[3].d[0] = c.r[16].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003797FCu | kUnwind; return; } goto L_003797FC; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00379860:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 9;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_003798C8; } }
L_00379884:
    set32(c.r[6], 0u + 2u);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[4], 0u + 2u);
    set32(c.r[3], c.r[3].w[0] << 1);
    if (c.r[17].d[0] == 0) c.r[6].d[0] = 0ull;
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    if (c.r[17].d[0] == 0) c.r[4].d[0] = 0ull;
    set32(c.r[5], c.r[3].w[0] << 7);
    set32(c.r[5], c.r[18].w[0] + c.r[5].w[0]);
    set32(c.r[3], 0u + 2u);
    c.budget -= 12;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; st32((c.r[5].w[0] + 1408u), c.r[6].w[0]);  if (t) { goto L_003798C4; } }
    st32((c.r[5].w[0] + 1372u), 0u);
    set32(c.r[4], c.r[5].w[0] + 1312u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003798C4u); st8((c.r[5].w[0] + 1368u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_002A(c, 280u, depth + 1u); else { c.pc = 0x001AB050u; return; } if (c.pc != 0x003798C4u) [[unlikely]] return; }
L_003798C4:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_003798C8:
    set32(c.r[3], ld32((c.r[18].w[0] + 23796u)));
    c.r[3].d[0] = c.r[16].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], c.r[16].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00379884u | kUnwind; return; } goto L_00379884; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003798F0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[5], ld32((c.r[4].w[0] + 23816u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 23800u)));
    c.r[1].d[0] = c.r[5].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0037991C; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 112u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0037991Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0037991Cu) [[unlikely]] return; }
L_0037991C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00379930:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00379940:
    set32(c.r[3], ld32((c.r[4].w[0] + 23792u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00379950; } }
    c.r[2].d[0] = ld8((c.r[3].w[0] + 137u));
    c.budget -= 1;
L_00379950:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00379960:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00379974u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_009F(c, 80u, depth + 1u); else { c.pc = 0x0037CE90u; return; } if (c.pc != 0x00379974u) [[unlikely]] return; }
L_00379974:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0037998C; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0037998Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0037998Cu) [[unlikely]] return; }
L_0037998C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003799A0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003799B4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_009E(c, 151u, depth + 1u); else { c.pc = 0x00379940u; return; } if (c.pc != 0x003799B4u) [[unlikely]] return; }
L_003799B4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003799CC; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003799CCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003799CCu) [[unlikely]] return; }
L_003799CC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003799E0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    set32(c.r[3], 0u + 9u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], ld32((c.r[4].w[0] + 23796u)));
    set32(c.r[17], ld32((c.r[1].w[0] - 1536u)));
    c.budget -= 13;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_00379A1C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], 0u + 3u);  if (t) { goto L_00379A20; } }
L_00379A1C:
    set32(c.r[5], 0u + 2u);
    c.budget -= 1;
L_00379A20:
    c.r[4].d[0] = ld16((c.r[17].w[0] + 168u));
    c.r[3].d[0] = c.r[4].d[0] & 4096ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; c.r[3].d[0] = c.r[4].d[0] & 16384ull;  if (t) { goto L_00379AB8; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 23812u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[19].w[0] + 23812u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 23812u)));
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] >= 0; c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_00379A98; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 23796u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[19].w[0] + 23812u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 23804u)));
    c.r[1].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_00379A94; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 23808u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] >= 0; st32((c.r[19].w[0] + 23808u), c.r[2].w[0]);  if (t) { goto L_00379A80; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 23804u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[19].w[0] + 23808u), c.r[2].w[0]);
    c.budget -= 3;
L_00379A80:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00379A88u); set32(c.r[4], c.r[19].w[0] + 23376u);  if (depth < kMaxDepth) unit_002A(c, 362u, depth + 1u); else { c.pc = 0x001ABD00u; return; } if (c.pc != 0x00379A88u) [[unlikely]] return; }
L_00379A88:
    set32(c.r[4], 0u + 437u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00379A94u); set32(c.r[18], 0u + 1u);  if (depth < kMaxDepth) unit_002C(c, 36u, depth + 1u); else { c.pc = 0x001B0690u; return; } if (c.pc != 0x00379A94u) [[unlikely]] return; }
L_00379A94:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_00379A98:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00379AA0u);  if (depth < kMaxDepth) unit_009E(c, 142u, depth + 1u); else { c.pc = 0x003797E0u; return; } if (c.pc != 0x00379AA0u) [[unlikely]] return; }
L_00379AA0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00379AA8u); set32(c.r[4], 0u + 402u);  if (depth < kMaxDepth) unit_002C(c, 36u, depth + 1u); else { c.pc = 0x001B0690u; return; } if (c.pc != 0x00379AA8u) [[unlikely]] return; }
L_00379AA8:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[19].w[0] + 23820u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00379C58; } }
    c.r[3].d[0] = c.r[4].d[0] & 16384ull;
    c.budget -= 1;
L_00379AB8:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; c.r[3].d[0] = c.r[4].d[0] & 32768ull;  if (t) { goto L_00379B44; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 23812u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[19].w[0] + 23812u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[19].w[0] + 23812u)));
    set32(c.r[2], ld32((c.r[19].w[0] + 23796u)));
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_00379B24; } }
    st32((c.r[19].w[0] + 23812u), 0u);
    set32(c.r[4], ld32((c.r[19].w[0] + 23804u)));
    c.r[1].d[0] = c.r[4].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_00379B20; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 23808u)));
    set32(c.r[3], c.r[2].w[0] + 1u);
    c.r[2].d[0] = c.r[3].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[19].w[0] + 23808u), c.r[3].w[0]);  if (t) { goto L_00379B0C; } }
    st32((c.r[19].w[0] + 23808u), 0u);
    c.budget -= 1;
L_00379B0C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00379B14u); set32(c.r[4], c.r[19].w[0] + 23376u);  if (depth < kMaxDepth) unit_002A(c, 363u, depth + 1u); else { c.pc = 0x001ABD30u; return; } if (c.pc != 0x00379B14u) [[unlikely]] return; }
L_00379B14:
    set32(c.r[4], 0u + 437u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00379B20u); set32(c.r[18], 0u + 1u);  if (depth < kMaxDepth) unit_002C(c, 36u, depth + 1u); else { c.pc = 0x001B0690u; return; } if (c.pc != 0x00379B20u) [[unlikely]] return; }
L_00379B20:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_00379B24:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00379B2Cu);  if (depth < kMaxDepth) unit_009E(c, 142u, depth + 1u); else { c.pc = 0x003797E0u; return; } if (c.pc != 0x00379B2Cu) [[unlikely]] return; }
L_00379B2C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00379B34u); set32(c.r[4], 0u + 402u);  if (depth < kMaxDepth) unit_002C(c, 36u, depth + 1u); else { c.pc = 0x001B0690u; return; } if (c.pc != 0x00379B34u) [[unlikely]] return; }
L_00379B34:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[19].w[0] + 23820u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00379C58; } }
    c.r[3].d[0] = c.r[4].d[0] & 32768ull;
    c.budget -= 1;
L_00379B44:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; c.r[3].d[0] = c.r[4].d[0] & 8192ull;  if (t) { goto L_00379BD4; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 23812u)));
    set32(c.r[2], c.r[2].w[0] - c.r[5].w[0]);
    st32((c.r[19].w[0] + 23812u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[19].w[0] + 23812u)));
    c.budget -= 6;
    { const bool t = c.r[3].sd[0] >= 0; c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_00379BB4; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 23796u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[19].w[0] + 23812u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 23804u)));
    c.r[1].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_00379BB0; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 23808u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] >= 0; st32((c.r[19].w[0] + 23808u), c.r[2].w[0]);  if (t) { goto L_00379B9C; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 23804u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[19].w[0] + 23808u), c.r[2].w[0]);
    c.budget -= 3;
L_00379B9C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00379BA4u); set32(c.r[4], c.r[19].w[0] + 23376u);  if (depth < kMaxDepth) unit_002A(c, 362u, depth + 1u); else { c.pc = 0x001ABD00u; return; } if (c.pc != 0x00379BA4u) [[unlikely]] return; }
L_00379BA4:
    set32(c.r[4], 0u + 437u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00379BB0u); set32(c.r[18], 0u + 1u);  if (depth < kMaxDepth) unit_002C(c, 36u, depth + 1u); else { c.pc = 0x001B0690u; return; } if (c.pc != 0x00379BB0u) [[unlikely]] return; }
L_00379BB0:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_00379BB4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00379BBCu);  if (depth < kMaxDepth) unit_009E(c, 142u, depth + 1u); else { c.pc = 0x003797E0u; return; } if (c.pc != 0x00379BBCu) [[unlikely]] return; }
L_00379BBC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00379BC4u); set32(c.r[4], 0u + 402u);  if (depth < kMaxDepth) unit_002C(c, 36u, depth + 1u); else { c.pc = 0x001B0690u; return; } if (c.pc != 0x00379BC4u) [[unlikely]] return; }
L_00379BC4:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[19].w[0] + 23820u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00379C58; } }
    c.r[3].d[0] = c.r[4].d[0] & 8192ull;
    c.budget -= 1;
L_00379BD4:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00379C58; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 23812u)));
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    st32((c.r[19].w[0] + 23812u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[19].w[0] + 23796u)));
    set32(c.r[3], ld32((c.r[19].w[0] + 23812u)));
    c.r[2].d[0] = c.r[3].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00379C40; } }
    set32(c.r[2], c.r[3].w[0] - c.r[4].w[0]);
    st32((c.r[19].w[0] + 23812u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[19].w[0] + 23804u)));
    c.r[1].d[0] = c.r[4].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_00379C40; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 23808u)));
    set32(c.r[3], c.r[2].w[0] + 1u);
    c.r[2].d[0] = c.r[3].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[19].w[0] + 23808u), c.r[3].w[0]);  if (t) { goto L_00379C2C; } }
    st32((c.r[19].w[0] + 23808u), 0u);
    c.budget -= 1;
L_00379C2C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00379C34u); set32(c.r[4], c.r[19].w[0] + 23376u);  if (depth < kMaxDepth) unit_002A(c, 363u, depth + 1u); else { c.pc = 0x001ABD30u; return; } if (c.pc != 0x00379C34u) [[unlikely]] return; }
L_00379C34:
    set32(c.r[4], 0u + 437u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00379C40u); set32(c.r[18], 0u + 1u);  if (depth < kMaxDepth) unit_002C(c, 36u, depth + 1u); else { c.pc = 0x001B0690u; return; } if (c.pc != 0x00379C40u) [[unlikely]] return; }
L_00379C40:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00379C48u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_009E(c, 142u, depth + 1u); else { c.pc = 0x003797E0u; return; } if (c.pc != 0x00379C48u) [[unlikely]] return; }
L_00379C48:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00379C50u); set32(c.r[4], 0u + 402u);  if (depth < kMaxDepth) unit_002C(c, 36u, depth + 1u); else { c.pc = 0x001B0690u; return; } if (c.pc != 0x00379C50u) [[unlikely]] return; }
L_00379C50:
    set32(c.r[3], 0u + 1u);
    st8((c.r[19].w[0] + 23820u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_00379C58:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_00379C68; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00379C68u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_009E(c, 139u, depth + 1u); else { c.pc = 0x00379730u; return; } if (c.pc != 0x00379C68u) [[unlikely]] return; }
L_00379C68:
    c.r[3].d[0] = ld8((c.r[19].w[0] + 23820u));
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[3].d[0] & 255ull;  if (t) { goto L_00379C88; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00379C80u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 319u, depth + 1u); else { c.pc = 0x0013F110u; return; } if (c.pc != 0x00379C80u) [[unlikely]] return; }
L_00379C80:
    c.r[3].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[16].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 2;
L_00379C88:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_00379C98; } }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_00379CC8; } }
L_00379C98:
    set32(c.r[5], ld32((c.r[19].w[0] + 23808u)));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[19].w[0] + 23796u)));
    set32(c.r[2], ld32((c.r[19].w[0] + 23812u)));
    mmi::mult(c, 0, c.r[5].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00379CB8u); st32((c.r[19].w[0] + 23816u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_009E(c, 148u, depth + 1u); else { c.pc = 0x003798F0u; return; } if (c.pc != 0x00379CB8u) [[unlikely]] return; }
L_00379CB8:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00379D6C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[19].w[0] + 23820u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00379D6C; } }
L_00379CC8:
    c.r[3].d[0] = ld8((c.r[19].w[0] + 23820u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00379D6C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00379CDCu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 314u, depth + 1u); else { c.pc = 0x0013F0C0u; return; } if (c.pc != 0x00379CDCu) [[unlikely]] return; }
L_00379CDC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00379D44; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00379CECu);  if (depth < kMaxDepth) unit_0087(c, 136u, depth + 1u); else { c.pc = 0x0031D080u; return; } if (c.pc != 0x00379CECu) [[unlikely]] return; }
L_00379CEC:
    set32(c.r[3], ld32((c.r[2].w[0] + 276u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00379D6C; } }
    set32(c.r[3], ld32((c.r[19].w[0] + 23816u)));
    set32(c.r[2], ld32((c.r[19].w[0] + 23800u)));
    c.r[1].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[4], 0u + 403u);  if (t) { goto L_00379D30; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00379D14u); set32(c.r[4], 0u + 400u);  if (depth < kMaxDepth) unit_002C(c, 36u, depth + 1u); else { c.pc = 0x001B0690u; return; } if (c.pc != 0x00379D14u) [[unlikely]] return; }
L_00379D14:
    set32(c.r[25], ld32((c.r[19].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00379D24u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00379D24u) [[unlikely]] return; }
L_00379D24:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  if (t) { goto L_00379D70; } }
    set32(c.r[4], 0u + 403u);
    c.budget -= 1;
L_00379D30:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00379D38u);  if (depth < kMaxDepth) unit_002C(c, 36u, depth + 1u); else { c.pc = 0x001B0690u; return; } if (c.pc != 0x00379D38u) [[unlikely]] return; }
L_00379D38:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00379D6C; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00379D44:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00379D4Cu);  if (depth < kMaxDepth) unit_000F(c, 315u, depth + 1u); else { c.pc = 0x0013F0D0u; return; } if (c.pc != 0x00379D4Cu) [[unlikely]] return; }
L_00379D4C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00379D6C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00379D5Cu); set32(c.r[4], 0u + 401u);  if (depth < kMaxDepth) unit_002C(c, 36u, depth + 1u); else { c.pc = 0x001B0690u; return; } if (c.pc != 0x00379D5Cu) [[unlikely]] return; }
L_00379D5C:
    set32(c.r[25], ld32((c.r[19].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 36u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00379D6Cu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00379D6Cu) [[unlikely]] return; }
L_00379D6C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_00379D70:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00379D90:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.f[0] = ld32((c.r[4].w[0] + 23740u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[17], c.f[0]);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_00379DE0; } }
L_00379DBC:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[2], c.r[2].w[0] << 7);
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00379DDCu); set32(c.r[4], c.r[2].w[0] + 32u);  if (depth < kMaxDepth) unit_00A1(c, 197u, depth + 1u); else { c.pc = 0x00385FE0u; return; } if (c.pc != 0x00379DDCu) [[unlikely]] return; }
L_00379DDC:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_00379DE0:
    set32(c.r[2], ld32((c.r[18].w[0] + 23796u)));
    c.r[2].d[0] = c.r[16].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[16].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00379DBCu | kUnwind; return; } goto L_00379DBC; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 26392u)));
    set32(c.r[16], ld32((c.r[2].w[0] + 440u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00379E04u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x00379E04u) [[unlikely]] return; }
L_00379E04:
    ld128((c.r[2].w[0]) & ~15u, c.r[5]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    set32(c.r[4], 0u + 728u);
    st128((c.r[16].w[0] + 48u) & ~15u, c.r[5]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[16].w[0] + 60u), c.r[17].w[0]);
    st32((c.r[16].w[0] + 304u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 308u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 312u), 0u);
    st32((c.r[16].w[0] + 316u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00379E3Cu); st32((c.r[16].w[0] + 24u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000B(c, 461u, depth + 1u); else { c.pc = 0x0012FD60u; return; } if (c.pc != 0x00379E3Cu) [[unlikely]] return; }
L_00379E3C:
    st32((c.r[16].w[0] + 352u), c.r[2].w[0]);
    c.f[14] = 0u;
    st32((c.r[16].w[0] + 356u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42080000u);
    set32(c.r[25], ld32((c.r[16].w[0] + 176u)));
    c.f[12] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41B00000u);
    c.f[13] = c.r[2].w[0];
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 11;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00379E68u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00379E68u) [[unlikely]] return; }
L_00379E68:
    set32(c.r[25], ld32((c.r[16].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00379E78u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00379E78u) [[unlikely]] return; }
L_00379E78:
    set32(c.r[2], ld32((c.r[18].w[0] + 23808u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[7], ld32((c.r[18].w[0] + 23804u)));
    set32(c.r[4], c.r[29].w[0] + 64u);
    set32(c.r[5], c.r[5].w[0] - 3680u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00379E94u); set32(c.r[6], c.r[2].w[0] + 1u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x00127458u; return; } if (c.pc != 0x00379E94u) [[unlikely]] return; }
L_00379E94:
    set32(c.r[3], c.r[29].w[0] + 64u);
    set32(c.r[2], 0u + 265u);
    st32((c.r[16].w[0] + 352u), c.r[3].w[0]);
    c.f[0] = c.r[2].w[0];
    st32((c.r[16].w[0] + 356u), 0u);
    c.f[14] = 0u;
    set32(c.r[25], ld32((c.r[16].w[0] + 176u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42080000u);
    c.f[12] = fp::cvt_s_w(c.f[0]);
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.f[13] = c.r[2].w[0];
    c.budget -= 13;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00379EC8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00379EC8u) [[unlikely]] return; }
L_00379EC8:
    set32(c.r[25], ld32((c.r[16].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00379ED8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00379ED8u) [[unlikely]] return; }
L_00379ED8:
    c.r[3].d[0] = c.r[17].sd[0] < 254ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00379F48; } }
    set32(c.r[25], ld32((c.r[18].w[0] + 22640u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00379EF4u); set32(c.r[4], c.r[18].w[0] + 22640u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00379EF4u) [[unlikely]] return; }
L_00379EF4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_00379F20; } }
L_00379EFC:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00379F1Cu); set32(c.r[4], c.r[2].w[0] + 12704u);  if (depth < kMaxDepth) unit_00A4(c, 9u, depth + 1u); else { c.pc = 0x003900D0u; return; } if (c.pc != 0x00379F1Cu) [[unlikely]] return; }
L_00379F1C:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_00379F20:
    set32(c.r[2], ld32((c.r[18].w[0] + 23796u)));
    c.r[2].d[0] = c.r[16].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[16].w[0] << 4);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00379EFCu | kUnwind; return; } goto L_00379EFC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00379F38u);  if (depth < kMaxDepth) unit_009F(c, 200u, depth + 1u); else { c.pc = 0x0037DCF0u; return; } if (c.pc != 0x00379F38u) [[unlikely]] return; }
L_00379F38:
    set32(c.r[25], ld32((c.r[2].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00379F48u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00379F48u) [[unlikely]] return; }
L_00379F48:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00379F60:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00379F74u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_009E(c, 151u, depth + 1u); else { c.pc = 0x00379940u; return; } if (c.pc != 0x00379F74u) [[unlikely]] return; }
L_00379F74:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00379F8C; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00379F8Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00379F8Cu) [[unlikely]] return; }
L_00379F8C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00379FA0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00379FB4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_009E(c, 151u, depth + 1u); else { c.pc = 0x00379940u; return; } if (c.pc != 0x00379FB4u) [[unlikely]] return; }
L_00379FB4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00379FCC; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00379FCCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00379FCCu) [[unlikely]] return; }
L_00379FCC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00379FE0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00379FF8u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 318u, depth + 1u); else { c.pc = 0x0012E5E0u; return; } if (c.pc != 0x00379FF8u) [[unlikely]] return; }
L_00379FF8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], ld32((c.r[16].w[0] + 23792u)));
    set32(c.r[3], ld32((c.r[1].w[0] + 26392u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[17], c.r[3].w[0] + 624u);  if (t) { goto L_0037A058; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037A014u); set32(c.r[4], 0u + 160u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0037A014u) [[unlikely]] return; }
L_0037A014:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0037A028; } }
    set32(c.r[5], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037A028u); set32(c.r[6], 0u + 2u);  if (depth < kMaxDepth) unit_002A(c, 287u, depth + 1u); else { c.pc = 0x001AB200u; return; } if (c.pc != 0x0037A028u) [[unlikely]] return; }
L_0037A028:
    st32((c.r[16].w[0] + 23792u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037A038u); set32(c.r[5], 0u + 10000u);  if (depth < kMaxDepth) unit_002A(c, 5u, depth + 1u); else { c.pc = 0x001A80A0u; return; } if (c.pc != 0x0037A038u) [[unlikely]] return; }
L_0037A038:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037A048u); c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_002A(c, 3u, depth + 1u); else { c.pc = 0x001A8060u; return; } if (c.pc != 0x0037A048u) [[unlikely]] return; }
L_0037A048:
    set32(c.r[4], ld32((c.r[16].w[0] + 23792u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037A058u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 322u, depth + 1u); else { c.pc = 0x00196E30u; return; } if (c.pc != 0x0037A058u) [[unlikely]] return; }
L_0037A058:
    set32(c.r[4], ld32((c.r[16].w[0] + 23792u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0037A06Cu); set32(c.r[5], 0u + 171u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0037A06Cu) [[unlikely]] return; }
L_0037A06C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037A074u); set32(c.r[4], c.r[16].w[0] + 23376u);  if (depth < kMaxDepth) unit_002A(c, 364u, depth + 1u); else { c.pc = 0x001ABD60u; return; } if (c.pc != 0x0037A074u) [[unlikely]] return; }
L_0037A074:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037A07Cu);  if (depth < kMaxDepth) unit_009F(c, 200u, depth + 1u); else { c.pc = 0x0037DCF0u; return; } if (c.pc != 0x0037A07Cu) [[unlikely]] return; }
L_0037A07C:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], 0u + 2u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037A08Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_009F(c, 211u, depth + 1u); else { c.pc = 0x0037DE40u; return; } if (c.pc != 0x0037A08Cu) [[unlikely]] return; }
L_0037A08C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037A098u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_009F(c, 186u, depth + 1u); else { c.pc = 0x0037DB10u; return; } if (c.pc != 0x0037A098u) [[unlikely]] return; }
L_0037A098:
    st32((c.r[16].w[0] + 23764u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    st32((c.r[16].w[0] + 23768u), 0u);
    set32(c.r[3], 0u + 3u);
    st32((c.r[16].w[0] + 23772u), c.r[2].w[0]);
    set32(c.r[4], c.r[16].w[0] + 23728u);
    set32(c.r[2], 0u + 15u);
    st32((c.r[16].w[0] + 23776u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 23780u), c.r[2].w[0]);
    set32(c.r[5], c.r[16].w[0] + 23764u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037A0C8u); st32((c.r[16].w[0] + 23784u), 0u);  if (depth < kMaxDepth) unit_0049(c, 280u, depth + 1u); else { c.pc = 0x002276C0u; return; } if (c.pc != 0x0037A0C8u) [[unlikely]] return; }
L_0037A0C8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0037A0E0:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x0012E600u | kUnwind; return; } [[clang::musttail]] return unit_000B(c, 319u, depth); }
L_0037A0F0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037A104u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 320u, depth + 1u); else { c.pc = 0x0012E610u; return; } if (c.pc != 0x0037A104u) [[unlikely]] return; }
L_0037A104:
    set32(c.r[4], ld32((c.r[16].w[0] + 23792u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0037A120; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0037A120u); set32(c.r[5], 0u + 172u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0037A120u) [[unlikely]] return; }
L_0037A120:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037A128u); set32(c.r[4], c.r[16].w[0] + 23376u);  if (depth < kMaxDepth) unit_002A(c, 367u, depth + 1u); else { c.pc = 0x001ABDD0u; return; } if (c.pc != 0x0037A128u) [[unlikely]] return; }
L_0037A128:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    set32(c.r[2], 0u + 15u);
    st32((c.r[16].w[0] + 23764u), c.r[3].w[0]);
    set32(c.r[4], c.r[16].w[0] + 23728u);
    st32((c.r[16].w[0] + 23768u), c.r[3].w[0]);
    set32(c.r[5], c.r[16].w[0] + 23764u);
    st32((c.r[16].w[0] + 23772u), 0u);
    st32((c.r[16].w[0] + 23776u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 23780u), 0u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037A154u); st32((c.r[16].w[0] + 23784u), 0u);  if (depth < kMaxDepth) unit_0049(c, 280u, depth + 1u); else { c.pc = 0x002276C0u; return; } if (c.pc != 0x0037A154u) [[unlikely]] return; }
L_0037A154:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0037A170:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037A184u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 321u, depth + 1u); else { c.pc = 0x0012E630u; return; } if (c.pc != 0x0037A184u) [[unlikely]] return; }
L_0037A184:
    set32(c.r[4], ld32((c.r[16].w[0] + 23792u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0037A1A0; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0037A1A0u); set32(c.r[5], 0u + 172u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0037A1A0u) [[unlikely]] return; }
L_0037A1A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037A1A8u); set32(c.r[4], c.r[16].w[0] + 23376u);  if (depth < kMaxDepth) unit_002A(c, 367u, depth + 1u); else { c.pc = 0x001ABDD0u; return; } if (c.pc != 0x0037A1A8u) [[unlikely]] return; }
L_0037A1A8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    set32(c.r[2], 0u + 5u);
    st32((c.r[16].w[0] + 23764u), c.r[3].w[0]);
    set32(c.r[4], c.r[16].w[0] + 23728u);
    st32((c.r[16].w[0] + 23768u), c.r[3].w[0]);
    set32(c.r[5], c.r[16].w[0] + 23764u);
    st32((c.r[16].w[0] + 23772u), 0u);
    st32((c.r[16].w[0] + 23776u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 23780u), 0u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037A1D4u); st32((c.r[16].w[0] + 23784u), 0u);  if (depth < kMaxDepth) unit_0049(c, 280u, depth + 1u); else { c.pc = 0x002276C0u; return; } if (c.pc != 0x0037A1D4u) [[unlikely]] return; }
L_0037A1D4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0037A1F0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037A214u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_009E(c, 98u, depth + 1u); else { c.pc = 0x00378ED0u; return; } if (c.pc != 0x0037A214u) [[unlikely]] return; }
L_0037A214:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[3], c.r[3].w[0] - 32224u);
    set32(c.r[2], c.r[2].w[0] - 32136u);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037A230u); st32((c.r[16].w[0] + 20u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0087(c, 136u, depth + 1u); else { c.pc = 0x0031D080u; return; } if (c.pc != 0x0037A230u) [[unlikely]] return; }
L_0037A230:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037A238u); c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_009F(c, 224u, depth + 1u); else { c.pc = 0x0037DF50u; return; } if (c.pc != 0x0037A238u) [[unlikely]] return; }
L_0037A238:
    set32(c.r[6], ld32((c.r[18].w[0] + 272u)));
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037A254u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_009F(c, 261u, depth + 1u); else { c.pc = 0x0037E350u; return; } if (c.pc != 0x0037A254u) [[unlikely]] return; }
L_0037A254:
    set32(c.r[2], ld32((c.r[17].w[0] + 744u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037A264u); st32((c.r[16].w[0] + 23800u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0087(c, 283u, depth + 1u); else { c.pc = 0x0031E690u; return; } if (c.pc != 0x0037A264u) [[unlikely]] return; }
L_0037A264:
    c.r[5].d[0] = ld16((c.r[2].w[0] + 4u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037A270u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_009F(c, 272u, depth + 1u); else { c.pc = 0x0037E5D0u; return; } if (c.pc != 0x0037A270u) [[unlikely]] return; }
L_0037A270:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037A278u); st32((c.r[16].w[0] + 23816u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0087(c, 101u, depth + 1u); else { c.pc = 0x0031CBF0u; return; } if (c.pc != 0x0037A278u) [[unlikely]] return; }
L_0037A278:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 1086u)));
    st8((c.r[16].w[0] + 23824u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0037A2A0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0037A2F4; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[3], c.r[3].w[0] - 32224u);
    set32(c.r[2], c.r[2].w[0] - 32136u);
    st32((c.r[17].w[0]), c.r[3].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037A2DCu); st32((c.r[17].w[0] + 20u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_009E(c, 109u, depth + 1u); else { c.pc = 0x00378FE0u; return; } if (c.pc != 0x0037A2DCu) [[unlikely]] return; }
L_0037A2DC:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0037A2F8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037A2F4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x0037A2F4u) [[unlikely]] return; }
L_0037A2F4:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0037A2F8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0037A310:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037A32Cu); c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_009F(c, 224u, depth + 1u); else { c.pc = 0x0037DF50u; return; } if (c.pc != 0x0037A32Cu) [[unlikely]] return; }
L_0037A32C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037A338u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_009F(c, 271u, depth + 1u); else { c.pc = 0x0037E5B0u; return; } if (c.pc != 0x0037A338u) [[unlikely]] return; }
L_0037A338:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037A348u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A4(c, 26u, depth + 1u); else { c.pc = 0x003904A0u; return; } if (c.pc != 0x0037A348u) [[unlikely]] return; }
L_0037A348:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0037A360:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037A380u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0087(c, 136u, depth + 1u); else { c.pc = 0x0031D080u; return; } if (c.pc != 0x0037A380u) [[unlikely]] return; }
L_0037A380:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037A388u); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_009F(c, 224u, depth + 1u); else { c.pc = 0x0037DF50u; return; } if (c.pc != 0x0037A388u) [[unlikely]] return; }
L_0037A388:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037A394u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_009F(c, 271u, depth + 1u); else { c.pc = 0x0037E5B0u; return; } if (c.pc != 0x0037A394u) [[unlikely]] return; }
L_0037A394:
    set32(c.r[5], ld32((c.r[18].w[0] + 23788u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037A3A4u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0087(c, 251u, depth + 1u); else { c.pc = 0x0031E090u; return; } if (c.pc != 0x0037A3A4u) [[unlikely]] return; }
L_0037A3A4:
    set32(c.r[4], ld32((c.r[18].w[0] + 23788u)));
    set32(c.r[3], 0u + 5u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0037A3C4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037A3BCu);  if (depth < kMaxDepth) unit_0087(c, 101u, depth + 1u); else { c.pc = 0x0031CBF0u; return; } if (c.pc != 0x0037A3BCu) [[unlikely]] return; }
L_0037A3BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037A3C4u); st8((c.r[2].w[0] + 1086u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_007A(c, 324u, depth + 1u); else { c.pc = 0x002EA9F0u; return; } if (c.pc != 0x0037A3C4u) [[unlikely]] return; }
L_0037A3C4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0037A3E0:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x0037A0F0u | kUnwind; return; } goto L_0037A0F0; }
L_0037A3F0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037A400u);  if (depth < kMaxDepth) unit_009E(c, 226u, depth + 1u); else { c.pc = 0x0037A170u; return; } if (c.pc != 0x0037A400u) [[unlikely]] return; }
L_0037A400:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037A408u);  if (depth < kMaxDepth) unit_0087(c, 98u, depth + 1u); else { c.pc = 0x0031CBB0u; return; } if (c.pc != 0x0037A408u) [[unlikely]] return; }
L_0037A408:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037A414u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0087(c, 122u, depth + 1u); else { c.pc = 0x0031CF50u; return; } if (c.pc != 0x0037A414u) [[unlikely]] return; }
L_0037A414:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0037A420:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037A444u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_009E(c, 98u, depth + 1u); else { c.pc = 0x00378ED0u; return; } if (c.pc != 0x0037A444u) [[unlikely]] return; }
L_0037A444:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[3], c.r[3].w[0] - 32352u);
    set32(c.r[2], c.r[2].w[0] - 32264u);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037A460u); st32((c.r[16].w[0] + 20u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0087(c, 136u, depth + 1u); else { c.pc = 0x0031D080u; return; } if (c.pc != 0x0037A460u) [[unlikely]] return; }
L_0037A460:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037A468u); c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_009F(c, 224u, depth + 1u); else { c.pc = 0x0037DF50u; return; } if (c.pc != 0x0037A468u) [[unlikely]] return; }
L_0037A468:
    set32(c.r[6], ld32((c.r[18].w[0] + 272u)));
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[7], 0u + 2u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037A484u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_009F(c, 261u, depth + 1u); else { c.pc = 0x0037E350u; return; } if (c.pc != 0x0037A484u) [[unlikely]] return; }
L_0037A484:
    set32(c.r[2], ld32((c.r[17].w[0] + 744u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037A494u); st32((c.r[16].w[0] + 23800u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0087(c, 283u, depth + 1u); else { c.pc = 0x0031E690u; return; } if (c.pc != 0x0037A494u) [[unlikely]] return; }
L_0037A494:
    c.r[2].d[0] = ld8((c.r[2].w[0] + 7u));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037A4A4u); set32(c.r[5], c.r[2].w[0] - 1u);  if (depth < kMaxDepth) unit_009F(c, 272u, depth + 1u); else { c.pc = 0x0037E5D0u; return; } if (c.pc != 0x0037A4A4u) [[unlikely]] return; }
L_0037A4A4:
    st32((c.r[16].w[0] + 23816u), c.r[2].w[0]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0037A4D0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0037A524; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[3], c.r[3].w[0] - 32352u);
    set32(c.r[2], c.r[2].w[0] - 32264u);
    st32((c.r[17].w[0]), c.r[3].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037A50Cu); st32((c.r[17].w[0] + 20u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_009E(c, 109u, depth + 1u); else { c.pc = 0x00378FE0u; return; } if (c.pc != 0x0037A50Cu) [[unlikely]] return; }
L_0037A50C:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0037A528; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037A524u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x0037A524u) [[unlikely]] return; }
L_0037A524:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0037A528:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0037A540:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037A55Cu); c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_009F(c, 224u, depth + 1u); else { c.pc = 0x0037DF50u; return; } if (c.pc != 0x0037A55Cu) [[unlikely]] return; }
L_0037A55C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037A568u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_009F(c, 271u, depth + 1u); else { c.pc = 0x0037E5B0u; return; } if (c.pc != 0x0037A568u) [[unlikely]] return; }
L_0037A568:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037A578u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A4(c, 27u, depth + 1u); else { c.pc = 0x003904E0u; return; } if (c.pc != 0x0037A578u) [[unlikely]] return; }
L_0037A578:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0037A590:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037A5B0u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0087(c, 136u, depth + 1u); else { c.pc = 0x0031D080u; return; } if (c.pc != 0x0037A5B0u) [[unlikely]] return; }
L_0037A5B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037A5B8u); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_009F(c, 224u, depth + 1u); else { c.pc = 0x0037DF50u; return; } if (c.pc != 0x0037A5B8u) [[unlikely]] return; }
L_0037A5B8:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037A5C4u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_009F(c, 271u, depth + 1u); else { c.pc = 0x0037E5B0u; return; } if (c.pc != 0x0037A5C4u) [[unlikely]] return; }
L_0037A5C4:
    set32(c.r[5], ld32((c.r[18].w[0] + 23788u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037A5D4u); set32(c.r[6], c.r[2].w[0] + 1u);  if (depth < kMaxDepth) unit_0087(c, 258u, depth + 1u); else { c.pc = 0x0031E180u; return; } if (c.pc != 0x0037A5D4u) [[unlikely]] return; }
L_0037A5D4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0037A5F0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037A604u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_009E(c, 221u, depth + 1u); else { c.pc = 0x0037A0F0u; return; } if (c.pc != 0x0037A604u) [[unlikely]] return; }
L_0037A604:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037A60Cu);  if (depth < kMaxDepth) unit_009F(c, 224u, depth + 1u); else { c.pc = 0x0037DF50u; return; } if (c.pc != 0x0037A60Cu) [[unlikely]] return; }
L_0037A60C:
    set32(c.r[5], ld32((c.r[16].w[0] + 23816u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037A618u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_009F(c, 271u, depth + 1u); else { c.pc = 0x0037E5B0u; return; } if (c.pc != 0x0037A618u) [[unlikely]] return; }
L_0037A618:
    set32(c.r[4], ld32((c.r[16].w[0] + 23788u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037A624u); set32(c.r[5], c.r[2].w[0] + 1u);  if (depth < kMaxDepth) unit_009F(c, 281u, depth + 1u); else { c.pc = 0x0037E720u; return; } if (c.pc != 0x0037A624u) [[unlikely]] return; }
L_0037A624:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0037A640:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037A650u);  if (depth < kMaxDepth) unit_009E(c, 226u, depth + 1u); else { c.pc = 0x0037A170u; return; } if (c.pc != 0x0037A650u) [[unlikely]] return; }
L_0037A650:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037A658u);  if (depth < kMaxDepth) unit_0087(c, 98u, depth + 1u); else { c.pc = 0x0031CBB0u; return; } if (c.pc != 0x0037A658u) [[unlikely]] return; }
L_0037A658:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037A664u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0087(c, 122u, depth + 1u); else { c.pc = 0x0031CF50u; return; } if (c.pc != 0x0037A664u) [[unlikely]] return; }
L_0037A664:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0037A670:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037A694u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_009E(c, 98u, depth + 1u); else { c.pc = 0x00378ED0u; return; } if (c.pc != 0x0037A694u) [[unlikely]] return; }
L_0037A694:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[3], c.r[3].w[0] - 32480u);
    set32(c.r[2], c.r[2].w[0] - 32392u);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037A6B0u); st32((c.r[16].w[0] + 20u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0087(c, 136u, depth + 1u); else { c.pc = 0x0031D080u; return; } if (c.pc != 0x0037A6B0u) [[unlikely]] return; }
L_0037A6B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037A6B8u); c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_009F(c, 224u, depth + 1u); else { c.pc = 0x0037DF50u; return; } if (c.pc != 0x0037A6B8u) [[unlikely]] return; }
L_0037A6B8:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037A6C4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0087(c, 283u, depth + 1u); else { c.pc = 0x0031E690u; return; } if (c.pc != 0x0037A6C4u) [[unlikely]] return; }
L_0037A6C4:
    set32(c.r[6], ld32((c.r[17].w[0] + 272u)));
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[7], 0u + 1u);
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].d[0] = ld8((c.r[2].w[0] + 7u));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037A6E4u); set32(c.r[8], c.r[2].w[0] - 1u);  if (depth < kMaxDepth) unit_009F(c, 261u, depth + 1u); else { c.pc = 0x0037E350u; return; } if (c.pc != 0x0037A6E4u) [[unlikely]] return; }
L_0037A6E4:
    set32(c.r[2], ld32((c.r[18].w[0] + 744u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    st32((c.r[16].w[0] + 23800u), c.r[2].w[0]);
    c.r[5].d[0] = ld16((c.r[17].w[0] + 4u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037A6FCu); st32((c.r[16].w[0] + 23824u), c.r[5].w[0]);  if (depth < kMaxDepth) unit_009F(c, 272u, depth + 1u); else { c.pc = 0x0037E5D0u; return; } if (c.pc != 0x0037A6FCu) [[unlikely]] return; }
L_0037A6FC:
    st32((c.r[16].w[0] + 23816u), c.r[2].w[0]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0037A720:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0037A774; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[3], c.r[3].w[0] - 32480u);
    set32(c.r[2], c.r[2].w[0] - 32392u);
    st32((c.r[17].w[0]), c.r[3].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037A75Cu); st32((c.r[17].w[0] + 20u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_009E(c, 109u, depth + 1u); else { c.pc = 0x00378FE0u; return; } if (c.pc != 0x0037A75Cu) [[unlikely]] return; }
L_0037A75C:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0037A778; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037A774u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x0037A774u) [[unlikely]] return; }
L_0037A774:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0037A778:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0037A790:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037A7ACu); c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_009F(c, 224u, depth + 1u); else { c.pc = 0x0037DF50u; return; } if (c.pc != 0x0037A7ACu) [[unlikely]] return; }
L_0037A7AC:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037A7B8u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_009F(c, 271u, depth + 1u); else { c.pc = 0x0037E5B0u; return; } if (c.pc != 0x0037A7B8u) [[unlikely]] return; }
L_0037A7B8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037A7C8u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A4(c, 28u, depth + 1u); else { c.pc = 0x00390520u; return; } if (c.pc != 0x0037A7C8u) [[unlikely]] return; }
L_0037A7C8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0037A7E0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037A800u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0087(c, 136u, depth + 1u); else { c.pc = 0x0031D080u; return; } if (c.pc != 0x0037A800u) [[unlikely]] return; }
L_0037A800:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037A808u); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_009F(c, 224u, depth + 1u); else { c.pc = 0x0037DF50u; return; } if (c.pc != 0x0037A808u) [[unlikely]] return; }
L_0037A808:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037A814u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_009F(c, 271u, depth + 1u); else { c.pc = 0x0037E5B0u; return; } if (c.pc != 0x0037A814u) [[unlikely]] return; }
L_0037A814:
    set32(c.r[5], ld32((c.r[18].w[0] + 23788u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037A824u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0087(c, 251u, depth + 1u); else { c.pc = 0x0031E090u; return; } if (c.pc != 0x0037A824u) [[unlikely]] return; }
L_0037A824:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0037A840:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x0037A0F0u | kUnwind; return; } goto L_0037A0F0; }
L_0037A850:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037A860u);  if (depth < kMaxDepth) unit_009E(c, 226u, depth + 1u); else { c.pc = 0x0037A170u; return; } if (c.pc != 0x0037A860u) [[unlikely]] return; }
L_0037A860:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037A868u);  if (depth < kMaxDepth) unit_0087(c, 98u, depth + 1u); else { c.pc = 0x0031CBB0u; return; } if (c.pc != 0x0037A868u) [[unlikely]] return; }
L_0037A868:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037A874u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_0087(c, 122u, depth + 1u); else { c.pc = 0x0031CF50u; return; } if (c.pc != 0x0037A874u) [[unlikely]] return; }
L_0037A874:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0037A880:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037A898u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_009E(c, 98u, depth + 1u); else { c.pc = 0x00378ED0u; return; } if (c.pc != 0x0037A898u) [[unlikely]] return; }
L_0037A898:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[3], c.r[3].w[0] - 32608u);
    set32(c.r[2], c.r[2].w[0] - 32520u);
    st32((c.r[17].w[0]), c.r[3].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037A8B4u); st32((c.r[17].w[0] + 20u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_009F(c, 278u, depth + 1u); else { c.pc = 0x0037E6E0u; return; } if (c.pc != 0x0037A8B4u) [[unlikely]] return; }
L_0037A8B4:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[2].w[0] + 196u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037A8C4u); st32((c.r[17].w[0] + 23800u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0087(c, 136u, depth + 1u); else { c.pc = 0x0031D080u; return; } if (c.pc != 0x0037A8C4u) [[unlikely]] return; }
L_0037A8C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037A8CCu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0087(c, 283u, depth + 1u); else { c.pc = 0x0031E690u; return; } if (c.pc != 0x0037A8CCu) [[unlikely]] return; }
L_0037A8CC:
    c.r[5].d[0] = ld8((c.r[2].w[0] + 8u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[17].w[0] + 23824u), c.r[5].w[0]);
    c.r[2].d[0] = ld8((c.r[2].w[0] + 7u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037A8E4u); st32((c.r[17].w[0] + 23828u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_009F(c, 305u, depth + 1u); else { c.pc = 0x0037E9B0u; return; } if (c.pc != 0x0037A8E4u) [[unlikely]] return; }
L_0037A8E4:
    st32((c.r[17].w[0] + 23816u), c.r[2].w[0]);
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0037A900:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0037A954; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[3], c.r[3].w[0] - 32608u);
    set32(c.r[2], c.r[2].w[0] - 32520u);
    st32((c.r[17].w[0]), c.r[3].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037A93Cu); st32((c.r[17].w[0] + 20u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_009E(c, 109u, depth + 1u); else { c.pc = 0x00378FE0u; return; } if (c.pc != 0x0037A93Cu) [[unlikely]] return; }
L_0037A93C:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0037A958; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037A954u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x0037A954u) [[unlikely]] return; }
L_0037A954:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0037A958:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0037A970:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037A994u); c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_009F(c, 278u, depth + 1u); else { c.pc = 0x0037E6E0u; return; } if (c.pc != 0x0037A994u) [[unlikely]] return; }
L_0037A994:
    set32(c.r[3], c.r[16].w[0] << 2);
    set32(c.r[5], ld32((c.r[18].w[0] + 23828u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[2].w[0] + 64u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037A9B0u); c.r[7].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A4(c, 29u, depth + 1u); else { c.pc = 0x00390560u; return; } if (c.pc != 0x0037A9B0u) [[unlikely]] return; }
L_0037A9B0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0037A9D0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037A9ECu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_009F(c, 278u, depth + 1u); else { c.pc = 0x0037E6E0u; return; } if (c.pc != 0x0037A9ECu) [[unlikely]] return; }
L_0037A9EC:
    set32(c.r[3], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037A9FCu); set32(c.r[16], ld32((c.r[2].w[0] + 64u)));  if (depth < kMaxDepth) unit_0087(c, 136u, depth + 1u); else { c.pc = 0x0031D080u; return; } if (c.pc != 0x0037A9FCu) [[unlikely]] return; }
L_0037A9FC:
    set32(c.r[5], ld32((c.r[17].w[0] + 23788u)));
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037AA0Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0087(c, 262u, depth + 1u); else { c.pc = 0x0031E200u; return; } if (c.pc != 0x0037AA0Cu) [[unlikely]] return; }
L_0037AA0C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0037AA20:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x0037A0F0u | kUnwind; return; } goto L_0037A0F0; }
L_0037AA30:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037AA40u);  if (depth < kMaxDepth) unit_009E(c, 226u, depth + 1u); else { c.pc = 0x0037A170u; return; } if (c.pc != 0x0037AA40u) [[unlikely]] return; }
L_0037AA40:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037AA48u);  if (depth < kMaxDepth) unit_0087(c, 98u, depth + 1u); else { c.pc = 0x0031CBB0u; return; } if (c.pc != 0x0037AA48u) [[unlikely]] return; }
L_0037AA48:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037AA54u); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_0087(c, 122u, depth + 1u); else { c.pc = 0x0031CF50u; return; } if (c.pc != 0x0037AA54u) [[unlikely]] return; }
L_0037AA54:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0037AA60:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037AA8Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_009E(c, 98u, depth + 1u); else { c.pc = 0x00378ED0u; return; } if (c.pc != 0x0037AA8Cu) [[unlikely]] return; }
L_0037AA8C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[3], c.r[3].w[0] - 32736u);
    set32(c.r[2], c.r[2].w[0] - 32648u);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    set32(c.r[4], c.r[16].w[0] + 23824u);
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037AAB0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A2(c, 159u, depth + 1u); else { c.pc = 0x00389750u; return; } if (c.pc != 0x0037AAB0u) [[unlikely]] return; }
L_0037AAB0:
    st32((c.r[16].w[0] + 24052u), c.r[19].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037AABCu); st32((c.r[16].w[0] + 24056u), 0u);  if (depth < kMaxDepth) unit_0087(c, 136u, depth + 1u); else { c.pc = 0x0031D080u; return; } if (c.pc != 0x0037AABCu) [[unlikely]] return; }
L_0037AABC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037AAC4u); c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_009F(c, 224u, depth + 1u); else { c.pc = 0x0037DF50u; return; } if (c.pc != 0x0037AAC4u) [[unlikely]] return; }
L_0037AAC4:
    set32(c.r[6], ld32((c.r[18].w[0] + 272u)));
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037AAE0u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_009F(c, 261u, depth + 1u); else { c.pc = 0x0037E350u; return; } if (c.pc != 0x0037AAE0u) [[unlikely]] return; }
L_0037AAE0:
    set32(c.r[2], ld32((c.r[17].w[0] + 744u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037AAF0u); st32((c.r[16].w[0] + 23800u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0087(c, 283u, depth + 1u); else { c.pc = 0x0031E690u; return; } if (c.pc != 0x0037AAF0u) [[unlikely]] return; }
L_0037AAF0:
    c.r[5].d[0] = ld16((c.r[2].w[0] + 4u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037AAFCu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_009F(c, 272u, depth + 1u); else { c.pc = 0x0037E5D0u; return; } if (c.pc != 0x0037AAFCu) [[unlikely]] return; }
L_0037AAFC:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037AB08u); st32((c.r[16].w[0] + 23816u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_009F(c, 84u, depth + 1u); else { c.pc = 0x0037CF10u; return; } if (c.pc != 0x0037AB08u) [[unlikely]] return; }
L_0037AB08:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037AB10u); c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_009F(c, 200u, depth + 1u); else { c.pc = 0x0037DCF0u; return; } if (c.pc != 0x0037AB10u) [[unlikely]] return; }
L_0037AB10:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037AB1Cu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_009F(c, 179u, depth + 1u); else { c.pc = 0x0037D9B0u; return; } if (c.pc != 0x0037AB1Cu) [[unlikely]] return; }
L_0037AB1C:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0037AB40:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0037ABA4; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[3], c.r[3].w[0] - 32736u);
    set32(c.r[2], c.r[2].w[0] - 32648u);
    st32((c.r[17].w[0]), c.r[3].w[0]);
    set32(c.r[4], c.r[17].w[0] + 23824u);
    st32((c.r[17].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037AB80u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_00A2(c, 197u, depth + 1u); else { c.pc = 0x00389B20u; return; } if (c.pc != 0x0037AB80u) [[unlikely]] return; }
L_0037AB80:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037AB8Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_009E(c, 109u, depth + 1u); else { c.pc = 0x00378FE0u; return; } if (c.pc != 0x0037AB8Cu) [[unlikely]] return; }
L_0037AB8C:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0037ABA8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037ABA4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x0037ABA4u) [[unlikely]] return; }
L_0037ABA4:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0037ABA8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0037ABC0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037ABD4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_009E(c, 119u, depth + 1u); else { c.pc = 0x003790E0u; return; } if (c.pc != 0x0037ABD4u) [[unlikely]] return; }
L_0037ABD4:
    set32(c.r[25], ld32((c.r[16].w[0] + 23824u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0037ABE4u); set32(c.r[4], c.r[16].w[0] + 23824u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0037ABE4u) [[unlikely]] return; }
L_0037ABE4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0037AC00:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037AC1Cu); c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_009F(c, 224u, depth + 1u); else { c.pc = 0x0037DF50u; return; } if (c.pc != 0x0037AC1Cu) [[unlikely]] return; }
L_0037AC1C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037AC28u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_009F(c, 271u, depth + 1u); else { c.pc = 0x0037E5B0u; return; } if (c.pc != 0x0037AC28u) [[unlikely]] return; }
L_0037AC28:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037AC38u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A4(c, 26u, depth + 1u); else { c.pc = 0x003904A0u; return; } if (c.pc != 0x0037AC38u) [[unlikely]] return; }
L_0037AC38:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0037AC50:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037AC70u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0087(c, 136u, depth + 1u); else { c.pc = 0x0031D080u; return; } if (c.pc != 0x0037AC70u) [[unlikely]] return; }
L_0037AC70:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037AC78u); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_009F(c, 224u, depth + 1u); else { c.pc = 0x0037DF50u; return; } if (c.pc != 0x0037AC78u) [[unlikely]] return; }
L_0037AC78:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037AC84u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_009F(c, 271u, depth + 1u); else { c.pc = 0x0037E5B0u; return; } if (c.pc != 0x0037AC84u) [[unlikely]] return; }
L_0037AC84:
    set32(c.r[5], ld32((c.r[18].w[0] + 23788u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037AC94u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0087(c, 251u, depth + 1u); else { c.pc = 0x0031E090u; return; } if (c.pc != 0x0037AC94u) [[unlikely]] return; }
L_0037AC94:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0037ACB0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 24056u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0037ACF0; } }
    set32(c.r[25], ld32((c.r[16].w[0] + 23824u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0037ACD8u); set32(c.r[4], c.r[16].w[0] + 23824u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0037ACD8u) [[unlikely]] return; }
L_0037ACD8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037ACE4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_009E(c, 145u, depth + 1u); else { c.pc = 0x00379860u; return; } if (c.pc != 0x0037ACE4u) [[unlikely]] return; }
L_0037ACE4:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 24056u), c.r[3].w[0]);  if (t) { goto L_0037ACF8; } }
L_0037ACF0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037ACF8u);  if (depth < kMaxDepth) unit_009E(c, 221u, depth + 1u); else { c.pc = 0x0037A0F0u; return; } if (c.pc != 0x0037ACF8u) [[unlikely]] return; }
L_0037ACF8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0037AD10:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 24056u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0037AD40; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037AD2Cu);  if (depth < kMaxDepth) unit_009E(c, 226u, depth + 1u); else { c.pc = 0x0037A170u; return; } if (c.pc != 0x0037AD2Cu) [[unlikely]] return; }
L_0037AD2C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037AD34u);  if (depth < kMaxDepth) unit_0087(c, 98u, depth + 1u); else { c.pc = 0x0031CBB0u; return; } if (c.pc != 0x0037AD34u) [[unlikely]] return; }
L_0037AD34:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037AD40u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0087(c, 122u, depth + 1u); else { c.pc = 0x0031CF50u; return; } if (c.pc != 0x0037AD40u) [[unlikely]] return; }
L_0037AD40:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0037AD50:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 24056u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0037AD78; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037AD70u);  if (depth < kMaxDepth) unit_009E(c, 158u, depth + 1u); else { c.pc = 0x003799E0u; return; } if (c.pc != 0x0037AD70u) [[unlikely]] return; }
L_0037AD70:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_0037ADCC; } }
L_0037AD78:
    set32(c.r[25], ld32((c.r[16].w[0] + 23824u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 44u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0037AD88u); set32(c.r[4], c.r[16].w[0] + 23824u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0037AD88u) [[unlikely]] return; }
L_0037AD88:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0037ADC8; } }
    set32(c.r[25], ld32((c.r[16].w[0] + 23824u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0037ADA0u); set32(c.r[4], c.r[16].w[0] + 23824u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0037ADA0u) [[unlikely]] return; }
L_0037ADA0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0037ADB8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037ADB0u);  if (depth < kMaxDepth) unit_009E(c, 221u, depth + 1u); else { c.pc = 0x0037A0F0u; return; } if (c.pc != 0x0037ADB0u) [[unlikely]] return; }
L_0037ADB0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0037ADC0; } }
L_0037ADB8:
    st32((c.r[16].w[0] + 24056u), 0u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 2;
L_0037ADC0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037ADC8u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_009E(c, 145u, depth + 1u); else { c.pc = 0x00379860u; return; } if (c.pc != 0x0037ADC8u) [[unlikely]] return; }
L_0037ADC8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_0037ADCC:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0037ADE0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 20u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00378FE0u | kUnwind; return; } goto L_00378FE0; }
L_0037ADF0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 20u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0037A2A0u | kUnwind; return; } goto L_0037A2A0; }
L_0037AE00:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 20u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0037A4D0u | kUnwind; return; } goto L_0037A4D0; }
L_0037AE10:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 20u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0037A720u | kUnwind; return; } goto L_0037A720; }
L_0037AE20:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 20u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0037A900u | kUnwind; return; } goto L_0037A900; }
L_0037AE30:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 20u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00379D90u | kUnwind; return; } goto L_00379D90; }
L_0037AE40:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 20u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0037AB40u | kUnwind; return; } goto L_0037AB40; }
L_0037AE50:
    set32(c.r[29], c.r[29].w[0] - 128u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    set32(c.r[9], c.r[29].w[0] + 112u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    set32(c.r[2], c.r[2].w[0] + 3552u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[7].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    c.r[16].d[0] = 0ull + 0ull;
    ld128((c.r[6].w[0]) & ~15u, c.r[3]);
    c.f[20] = c.f[12];
    st128((c.r[9].w[0]) & ~15u, c.r[3]);
    set32(c.r[6], c.r[29].w[0] + 80u);
    st32((c.r[4].w[0]), 0u);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[3]);
    st128((c.r[4].w[0] + 32u) & ~15u, c.r[3]);
    st32((c.r[4].w[0] + 4u), c.r[5].w[0]);
    st8((c.r[4].w[0] + 96u), static_cast<std::uint8_t>(c.r[7].w[0]));
    st32((c.r[4].w[0] + 100u), c.r[8].w[0]);
    ld128((c.r[2].w[0]) & ~15u, c.r[3]);
    c.r[2].d[0] = ld64((c.r[2].w[0] + 16u));
    st128((c.r[6].w[0]) & ~15u, c.r[3]);
    c.budget -= 27;
    { const bool t = 0ull == 0ull; st64((c.r[6].w[0] + 16u), c.r[2].d[0]);  if (t) { goto L_0037AF50; } }
L_0037AEBC:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; set32(c.r[3], c.r[16].w[0] << 2);  if (t) { goto L_0037AEF4; } }
    set32(c.r[3], c.r[16].w[0] << 2);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], c.r[3].w[0] + c.r[29].w[0]);
    set32(c.r[2], ld32((c.r[1].w[0] + 31072u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 80u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00030000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[1].w[0] + 4308u)));  if (t) { goto L_0037AF18; } }
    set32(c.r[3], c.r[16].w[0] << 2);
    c.budget -= 1;
L_0037AEF4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], c.r[3].w[0] + c.r[29].w[0]);
    set32(c.r[2], ld32((c.r[1].w[0] + 31072u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 92u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00030000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    set32(c.r[4], ld32((c.r[1].w[0] + 4308u)));
    c.budget -= 9;
L_0037AF18:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[2], c.r[16].w[0] << 2);  if (t) { goto L_0037AF44; } }
    set32(c.r[5], 0u + 1u);
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037AF30u); c.r[6].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_005B(c, 303u, depth + 1u); else { c.pc = 0x0026E9C0u; return; } if (c.pc != 0x0037AF30u) [[unlikely]] return; }
L_0037AF30:
    set32(c.r[3], c.r[16].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[18].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_0037AF4C; } }
    set32(c.r[2], c.r[16].w[0] << 2);
    c.budget -= 1;
L_0037AF44:
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    st32((c.r[2].w[0] + 8u), 0u);
    c.budget -= 2;
L_0037AF4C:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_0037AF50:
    c.r[2].d[0] = c.r[16].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0037AEBCu | kUnwind; return; } goto L_0037AEBC; } }
    set32(c.r[2], c.r[18].w[0] + 48u);
    st128((c.r[2].w[0]) & ~15u, c.vu0.vf[0]);
    c.f[1] = 0u;
    set32(c.r[3], c.r[18].w[0] + 80u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41400000u);
    st32((c.r[18].w[0] + 64u), c.f[1]);
    c.f[0] = c.r[2].w[0];
    st32((c.r[18].w[0] + 68u), 0u);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[2]);
    st128((c.r[18].w[0] + 48u) & ~15u, c.r[2]);
    st32((c.r[18].w[0] + 64u), c.f[0]);
    st128((c.r[3].w[0]) & ~15u, c.vu0.vf[0]);
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    st32((c.r[18].w[0] + 84u), c.f[20]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 21;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_0037AFB0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 9;
    { const bool t = c.r[16].d[0] == 0ull; c.r[19].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0037B02C; } }
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0037AFD8:
    set32(c.r[2], c.r[18].w[0] << 2);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[17], c.r[2].w[0] + 8u);  if (t) { goto L_0037B004; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0037B004; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0037B004u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0037B004u) [[unlikely]] return; }
L_0037B004:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[2].d[0] = c.r[18].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[17].w[0]), 0u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0037AFD8u | kUnwind; return; } goto L_0037AFD8; } }
    c.r[2].d[0] = c.r[19].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0037B030; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037B02Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x0037B02Cu) [[unlikely]] return; }
L_0037B02C:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0037B030:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0037B050:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], c.r[16].w[0] + 224u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037B074u); set32(c.r[5], c.r[17].w[0] + 48u);  if (depth < kMaxDepth) unit_0011(c, 16u, depth + 1u); else { c.pc = 0x00144400u; return; } if (c.pc != 0x0037B074u) [[unlikely]] return; }
L_0037B074:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43100000u);
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0037B118; } }
    c.f[2] = ld32((c.r[17].w[0] + 84u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[1] = ld32((c.r[16].w[0] + 212u));
    c.f[0] = ld32((c.r[1].w[0] - 3568u));
    c.f[1] = fp::sub(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);  if (t) { goto L_0037B0BC; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[0] = ld32((c.r[1].w[0] - 3576u));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.f[1] = fp::sub(c.f[1], c.f[0]);  if (t) { goto L_0037B0D8; } }
L_0037B0BC:
    c.f[0] = ld32((c.r[1].w[0] - 3584u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0037B0D8; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[0] = ld32((c.r[1].w[0] - 3576u));
    c.f[1] = fp::add(c.f[1], c.f[0]);
    c.budget -= 3;
L_0037B0D8:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0037B0F0; } }
    c.f[1] = c.f[1] ^ fp::kSign;
    c.budget -= 1;
L_0037B0F0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[0] = ld32((c.r[1].w[0] - 3592u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0037B114; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037B10Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_009E(c, 389u, depth + 1u); else { c.pc = 0x0037B130u; return; } if (c.pc != 0x0037B10Cu) [[unlikely]] return; }
L_0037B10C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0037B118; } }
L_0037B114:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0037B118:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0037B130:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[2], 0u + 1u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037B154u); st32((c.r[4].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_009E(c, 393u, depth + 1u); else { c.pc = 0x0037B1A0u; return; } if (c.pc != 0x0037B154u) [[unlikely]] return; }
L_0037B154:
    c.r[3].d[0] = ld8((c.r[17].w[0] + 96u));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], 0u + 97u);
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.r[2].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037B178u); c.r[6].d[0] = c.r[2].d[0] & 255ull;  if (depth < kMaxDepth) unit_0030(c, 19u, depth + 1u); else { c.pc = 0x001C02C0u; return; } if (c.pc != 0x0037B178u) [[unlikely]] return; }
L_0037B178:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037B184u); set32(c.r[5], 0u + 677u);  if (depth < kMaxDepth) unit_0030(c, 17u, depth + 1u); else { c.pc = 0x001C02A0u; return; } if (c.pc != 0x0037B184u) [[unlikely]] return; }
L_0037B184:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0037B1A0:
    set32(c.r[2], ld32((c.r[4].w[0])));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[2].w[0] + 8u)));  c.pc = t; return; }
L_0037B1C0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u + 1u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0])));
    c.budget -= 7;
    { const bool t = c.r[5].d[0] != c.r[3].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0037B218; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037B1E4u);  if (depth < kMaxDepth) unit_009E(c, 393u, depth + 1u); else { c.pc = 0x0037B1A0u; return; } if (c.pc != 0x0037B1E4u) [[unlikely]] return; }
L_0037B1E4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0037B218; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037B1F4u);  if (depth < kMaxDepth) unit_009E(c, 393u, depth + 1u); else { c.pc = 0x0037B1A0u; return; } if (c.pc != 0x0037B1F4u) [[unlikely]] return; }
L_0037B1F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037B1FCu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_005B(c, 349u, depth + 1u); else { c.pc = 0x0026EE80u; return; } if (c.pc != 0x0037B1FCu) [[unlikely]] return; }
L_0037B1FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037B204u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_009E(c, 393u, depth + 1u); else { c.pc = 0x0037B1A0u; return; } if (c.pc != 0x0037B204u) [[unlikely]] return; }
L_0037B204:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037B20Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_005B(c, 361u, depth + 1u); else { c.pc = 0x0026F2F0u; return; } if (c.pc != 0x0037B20Cu) [[unlikely]] return; }
L_0037B20C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], 0u + 2u);  if (t) { goto L_0037B218; } }
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.budget -= 1;
L_0037B218:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0037B230:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0037B240:
    set32(c.r[29], c.r[29].w[0] - 176u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00420000u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00420000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[2], c.r[2].w[0] - 31912u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    ld128((c.r[6].w[0]) & ~15u, c.r[6]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[8], c.r[8].w[0] + 3584u);
    set32(c.r[7], c.r[29].w[0] + 160u);
    set32(c.r[3], c.r[3].w[0] + 3600u);
    set32(c.r[5], c.r[29].w[0] + 144u);
    set32(c.r[2], 0u + 3u);
    st128((c.r[4].w[0] + 16u) & ~15u, c.r[6]);
    st32((c.r[4].w[0] + 4u), c.r[17].w[0]);
    ld128((c.r[8].w[0]) & ~15u, c.r[4]);
    st128((c.r[7].w[0]) & ~15u, c.r[4]);
    ld128((c.r[3].w[0]) & ~15u, c.r[3]);
    c.budget -= 26;
    { const bool t = c.r[17].d[0] == c.r[2].d[0]; st128((c.r[5].w[0]) & ~15u, c.r[3]);  if (t) { goto L_0037B2F8; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x41900000u);  if (t) { goto L_0037B2EC; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == c.r[2].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0xC1900000u);  if (t) { goto L_0037B2E0; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == c.r[2].d[0]; c.r[3].sd[0] = static_cast<std::int32_t>(0x41900000u);  if (t) { goto L_0037B2D0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], ld32((c.r[18].w[0] + 4u)));  if (t) { goto L_0037B30C; } }
L_0037B2D0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC1900000u);
    st32((c.r[29].w[0] + 160u), c.r[3].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 152u), c.r[2].w[0]);  if (t) { goto L_0037B308; } }
L_0037B2E0:
    st32((c.r[29].w[0] + 168u), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 144u), c.r[2].w[0]);  if (t) { goto L_0037B308; } }
L_0037B2EC:
    st32((c.r[29].w[0] + 168u), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 144u), c.r[2].w[0]);  if (t) { goto L_0037B308; } }
L_0037B2F8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC1900000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41900000u);
    st32((c.r[29].w[0] + 160u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 152u), c.r[2].w[0]);
    c.budget -= 4;
L_0037B308:
    set32(c.r[6], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 1;
L_0037B30C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[5], c.r[5].w[0] - 28144u);
    set32(c.r[2], c.r[2].w[0] + 3616u);
    set32(c.r[3], c.r[29].w[0] + 128u);
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[4], 0u + 112u);
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[5], ld32((c.r[5].w[0])));
    st128((c.r[3].w[0]) & ~15u, c.r[2]);
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.f[0] = ld32((c.r[1].w[0] - 3600u));
    set32(c.r[2], c.r[2].w[0] << 10);
    set32(c.r[2], c.r[5].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 20);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 16));
    c.f[1] = c.r[2].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    st32((c.r[29].w[0] + 132u), c.f[0]);
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[2]);
    c.budget -= 26;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037B374u); st128((c.r[18].w[0] + 32u) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0037B374u) [[unlikely]] return; }
L_0037B374:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0037B418; } }
    ld128((c.r[16].w[0]) & ~15u, c.r[3]);
    set32(c.r[5], c.r[29].w[0] + 80u);
    set32(c.r[4], c.r[29].w[0] + 160u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[3]);
    ld128((c.r[5].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[4].w[0]) & ~15u, c.vu0.vf[5]);
    vu::add(c.vu0, 14u, 4u, 4u, 5u);
    st128((c.r[5].w[0]) & ~15u, c.vu0.vf[4]);
    set32(c.r[3], c.r[29].w[0] + 80u);
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    ld128((c.r[3].w[0]) & ~15u, c.r[3]);
    st128((c.r[4].w[0]) & ~15u, c.r[3]);
    c.f[1] = ld32((c.r[1].w[0] - 3568u));
    c.f[2] = ld32((c.r[29].w[0] + 132u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[0] = ld32((c.r[1].w[0] - 3568u));
    c.f[12] = fp::sub(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[12]) <= fp::key(c.f[0]));
    c.budget -= 21;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);  if (t) { goto L_0037B3E0; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[0] = ld32((c.r[1].w[0] - 3576u));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.f[12] = fp::sub(c.f[12], c.f[0]);  if (t) { goto L_0037B3FC; } }
L_0037B3E0:
    c.f[0] = ld32((c.r[1].w[0] - 3584u));
    fpu_compare(c, fp::key(c.f[12]) < fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[3], c.r[17].w[0] << 1);  if (t) { goto L_0037B400; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[0] = ld32((c.r[1].w[0] - 3576u));
    c.f[12] = fp::add(c.f[12], c.f[0]);
    c.budget -= 3;
L_0037B3FC:
    set32(c.r[3], c.r[17].w[0] << 1);
    c.budget -= 1;
L_0037B400:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[8], c.r[3].w[0] + 1u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 112u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037B418u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_009E(c, 379u, depth + 1u); else { c.pc = 0x0037AE50u; return; } if (c.pc != 0x0037B418u) [[unlikely]] return; }
L_0037B418:
    st32((c.r[18].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037B424u); set32(c.r[4], 0u + 112u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0037B424u) [[unlikely]] return; }
L_0037B424:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0037B4C4; } }
    ld128((c.r[16].w[0]) & ~15u, c.r[3]);
    set32(c.r[5], c.r[29].w[0] + 64u);
    set32(c.r[4], c.r[29].w[0] + 144u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[3]);
    ld128((c.r[5].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[4].w[0]) & ~15u, c.vu0.vf[5]);
    vu::add(c.vu0, 14u, 4u, 4u, 5u);
    st128((c.r[5].w[0]) & ~15u, c.vu0.vf[4]);
    set32(c.r[3], c.r[29].w[0] + 64u);
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    ld128((c.r[3].w[0]) & ~15u, c.r[3]);
    st128((c.r[4].w[0]) & ~15u, c.r[3]);
    c.f[1] = ld32((c.r[1].w[0] - 3608u));
    c.f[2] = ld32((c.r[29].w[0] + 132u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[0] = ld32((c.r[1].w[0] - 3568u));
    c.f[12] = fp::sub(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[12]) <= fp::key(c.f[0]));
    c.budget -= 21;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);  if (t) { goto L_0037B490; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[0] = ld32((c.r[1].w[0] - 3576u));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.f[12] = fp::sub(c.f[12], c.f[0]);  if (t) { goto L_0037B4AC; } }
L_0037B490:
    c.f[0] = ld32((c.r[1].w[0] - 3584u));
    fpu_compare(c, fp::key(c.f[12]) < fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[8], c.r[17].w[0] << 1);  if (t) { goto L_0037B4B0; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[0] = ld32((c.r[1].w[0] - 3576u));
    c.f[12] = fp::add(c.f[12], c.f[0]);
    c.budget -= 3;
L_0037B4AC:
    set32(c.r[8], c.r[17].w[0] << 1);
    c.budget -= 1;
L_0037B4B0:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 96u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037B4C4u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_009E(c, 379u, depth + 1u); else { c.pc = 0x0037AE50u; return; } if (c.pc != 0x0037B4C4u) [[unlikely]] return; }
L_0037B4C4:
    st32((c.r[18].w[0] + 12u), c.r[2].w[0]);
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 176u);  c.pc = t; return; }
L_0037B4F0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0037B55C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[2], c.r[2].w[0] - 31912u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 8u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[5], 0u + 1u);  if (t) { goto L_0037B52C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037B52Cu);  if (depth < kMaxDepth) unit_009E(c, 382u, depth + 1u); else { c.pc = 0x0037AFB0u; return; } if (c.pc != 0x0037B52Cu) [[unlikely]] return; }
L_0037B52C:
    st32((c.r[17].w[0] + 8u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; c.r[2].d[0] = c.r[16].d[0] << 48;  if (t) { goto L_0037B548; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037B544u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_009E(c, 382u, depth + 1u); else { c.pc = 0x0037AFB0u; return; } if (c.pc != 0x0037B544u) [[unlikely]] return; }
L_0037B544:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.budget -= 1;
L_0037B548:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0; st32((c.r[17].w[0] + 12u), 0u);  if (t) { goto L_0037B55C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037B55Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x0037B55Cu) [[unlikely]] return; }
L_0037B55C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0037B580:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], c.r[2].w[0] + 3632u);
    set32(c.r[6], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[5], c.r[5].w[0] - 28144u);
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    set32(c.r[3], c.r[29].w[0] + 32u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[5], ld32((c.r[5].w[0])));
    st128((c.r[3].w[0]) & ~15u, c.r[2]);
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.f[0] = ld32((c.r[1].w[0] - 3600u));
    set32(c.r[2], c.r[2].w[0] << 10);
    set32(c.r[2], c.r[5].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 20);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 16));
    c.f[1] = c.r[2].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.budget -= 28;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037B5F0u); st32((c.r[29].w[0] + 36u), c.f[0]);  if (depth < kMaxDepth) unit_009E(c, 428u, depth + 1u); else { c.pc = 0x0037B6E0u; return; } if (c.pc != 0x0037B5F0u) [[unlikely]] return; }
L_0037B5F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037B5F8u); set32(c.r[4], ld32((c.r[16].w[0] + 8u)));  if (depth < kMaxDepth) unit_009E(c, 394u, depth + 1u); else { c.pc = 0x0037B1C0u; return; } if (c.pc != 0x0037B5F8u) [[unlikely]] return; }
L_0037B5F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037B600u); set32(c.r[4], ld32((c.r[16].w[0] + 12u)));  if (depth < kMaxDepth) unit_009E(c, 394u, depth + 1u); else { c.pc = 0x0037B1C0u; return; } if (c.pc != 0x0037B600u) [[unlikely]] return; }
L_0037B600:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037B608u); set32(c.r[4], ld32((c.r[16].w[0] + 8u)));  if (depth < kMaxDepth) unit_009E(c, 393u, depth + 1u); else { c.pc = 0x0037B1A0u; return; } if (c.pc != 0x0037B608u) [[unlikely]] return; }
L_0037B608:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0037B628; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037B618u); set32(c.r[4], ld32((c.r[16].w[0] + 8u)));  if (depth < kMaxDepth) unit_009E(c, 393u, depth + 1u); else { c.pc = 0x0037B1A0u; return; } if (c.pc != 0x0037B618u) [[unlikely]] return; }
L_0037B618:
    set32(c.r[4], ld32((c.r[2].w[0] + 52u)));
    set32(c.r[5], c.r[16].w[0] + 16u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037B628u); set32(c.r[6], c.r[16].w[0] + 32u);  if (depth < kMaxDepth) unit_0049(c, 142u, depth + 1u); else { c.pc = 0x00225E00u; return; } if (c.pc != 0x0037B628u) [[unlikely]] return; }
L_0037B628:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037B630u); set32(c.r[4], ld32((c.r[16].w[0] + 12u)));  if (depth < kMaxDepth) unit_009E(c, 393u, depth + 1u); else { c.pc = 0x0037B1A0u; return; } if (c.pc != 0x0037B630u) [[unlikely]] return; }
L_0037B630:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0037B650; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037B640u); set32(c.r[4], ld32((c.r[16].w[0] + 12u)));  if (depth < kMaxDepth) unit_009E(c, 393u, depth + 1u); else { c.pc = 0x0037B1A0u; return; } if (c.pc != 0x0037B640u) [[unlikely]] return; }
L_0037B640:
    set32(c.r[4], ld32((c.r[2].w[0] + 52u)));
    set32(c.r[5], c.r[16].w[0] + 16u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037B650u); set32(c.r[6], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_0049(c, 142u, depth + 1u); else { c.pc = 0x00225E00u; return; } if (c.pc != 0x0037B650u) [[unlikely]] return; }
L_0037B650:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0037B660:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037B678u); set32(c.r[4], ld32((c.r[4].w[0] + 8u)));  if (depth < kMaxDepth) unit_009E(c, 393u, depth + 1u); else { c.pc = 0x0037B1A0u; return; } if (c.pc != 0x0037B678u) [[unlikely]] return; }
L_0037B678:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0037B6C8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037B688u); set32(c.r[4], ld32((c.r[16].w[0] + 8u)));  if (depth < kMaxDepth) unit_009E(c, 393u, depth + 1u); else { c.pc = 0x0037B1A0u; return; } if (c.pc != 0x0037B688u) [[unlikely]] return; }
L_0037B688:
    set32(c.r[4], ld32((c.r[2].w[0] + 52u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 152u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 44u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0037B69Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0037B69Cu) [[unlikely]] return; }
L_0037B69C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037B6A4u); set32(c.r[4], ld32((c.r[16].w[0] + 12u)));  if (depth < kMaxDepth) unit_009E(c, 393u, depth + 1u); else { c.pc = 0x0037B1A0u; return; } if (c.pc != 0x0037B6A4u) [[unlikely]] return; }
L_0037B6A4:
    set32(c.r[4], ld32((c.r[2].w[0] + 52u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 152u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 44u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0037B6B8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0037B6B8u) [[unlikely]] return; }
L_0037B6B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037B6C0u); set32(c.r[4], ld32((c.r[16].w[0] + 8u)));  if (depth < kMaxDepth) unit_009E(c, 400u, depth + 1u); else { c.pc = 0x0037B230u; return; } if (c.pc != 0x0037B6C0u) [[unlikely]] return; }
L_0037B6C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037B6C8u); set32(c.r[4], ld32((c.r[16].w[0] + 12u)));  if (depth < kMaxDepth) unit_009E(c, 400u, depth + 1u); else { c.pc = 0x0037B230u; return; } if (c.pc != 0x0037B6C8u) [[unlikely]] return; }
L_0037B6C8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0037B6E0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 11;
    { const bool t = c.r[3].d[0] == 0ull; c.r[20].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0037B71C; } }
    set32(c.r[3], ld32((c.r[20].w[0] + 12u)));
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0037B814; } }
L_0037B71C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_0037B808; } }
L_0037B724:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], c.r[19].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + 28320u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[18], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_0037B804; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[17].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037B750u); c.r[16].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0034(c, 93u, depth + 1u); else { c.pc = 0x001D0C90u; return; } if (c.pc != 0x0037B750u) [[unlikely]] return; }
L_0037B750:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0037B75C; } }
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0037B75C:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 587u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0037B770; } }
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0037B770:
    set32(c.r[4], ld32((c.r[18].w[0] + 168u)));
    set32(c.r[3], 0u + 111u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0037B784; } }
    c.r[16].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_0037B784:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull;  if (t) { goto L_0037B794; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0037B804; } }
L_0037B794:
    set32(c.r[4], ld32((c.r[20].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0037B7CC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037B7ACu); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_009E(c, 386u, depth + 1u); else { c.pc = 0x0037B050u; return; } if (c.pc != 0x0037B7ACu) [[unlikely]] return; }
L_0037B7AC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0037B7CC; } }
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[5], 0u + 100u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037B7C4u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00AB(c, 236u, depth + 1u); else { c.pc = 0x003ADA80u; return; } if (c.pc != 0x0037B7C4u) [[unlikely]] return; }
L_0037B7C4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));  if (t) { goto L_0037B818; } }
L_0037B7CC:
    set32(c.r[4], ld32((c.r[20].w[0] + 12u)));
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0037B814; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037B7E4u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_009E(c, 386u, depth + 1u); else { c.pc = 0x0037B050u; return; } if (c.pc != 0x0037B7E4u) [[unlikely]] return; }
L_0037B7E4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0037B814; } }
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[5], 0u + 100u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037B7FCu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00AB(c, 236u, depth + 1u); else { c.pc = 0x003ADA80u; return; } if (c.pc != 0x0037B7FCu) [[unlikely]] return; }
L_0037B7FC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037B814; } }
L_0037B804:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.budget -= 1;
L_0037B808:
    c.r[3].d[0] = c.r[19].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0037B724u | kUnwind; return; } goto L_0037B724; } }
L_0037B814:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.budget -= 1;
L_0037B818:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0037B840:
    set32(c.r[29], c.r[29].w[0] - 112u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x474F0000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[7].d[0] = c.r[2].d[0] | 16970ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037B860u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_002C(c, 200u, depth + 1u); else { c.pc = 0x001B1A30u; return; } if (c.pc != 0x0037B860u) [[unlikely]] return; }
L_0037B860:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[4], c.r[17].w[0] + 112u);
    set32(c.r[2], c.r[2].w[0] - 31968u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037B874u); st32((c.r[17].w[0] + 56u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_009E(c, 465u, depth + 1u); else { c.pc = 0x0037BC50u; return; } if (c.pc != 0x0037B874u) [[unlikely]] return; }
L_0037B874:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00420000u);
    st32((c.r[1].w[0] - 13176u), c.r[17].w[0]);
    set32(c.r[5], c.r[5].w[0] + 3648u);
    set32(c.r[4], c.r[29].w[0] + 48u);
    set32(c.r[3], 0u + 4u);
    c.budget -= 6;
L_0037B88C:
    ld128((c.r[5].w[0]) & ~15u, c.r[2]);
    set32(c.r[3], c.r[3].w[0] - 1u);
    st128((c.r[4].w[0]) & ~15u, c.r[2]);
    set32(c.r[5], c.r[5].w[0] + 16u);
    set32(c.r[4], c.r[4].w[0] + 16u);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0037B88Cu | kUnwind; return; } goto L_0037B88C; } }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0037B8AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037B8B4u); set32(c.r[4], 0u + 48u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0037B8B4u) [[unlikely]] return; }
L_0037B8B4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], c.r[16].w[0] << 2);  if (t) { goto L_0037B8D8; } }
    set32(c.r[3], c.r[16].w[0] << 4);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], c.r[3].w[0] + c.r[29].w[0]);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037B8D4u); set32(c.r[6], c.r[2].w[0] + 48u);  if (depth < kMaxDepth) unit_009E(c, 401u, depth + 1u); else { c.pc = 0x0037B240u; return; } if (c.pc != 0x0037B8D4u) [[unlikely]] return; }
L_0037B8D4:
    set32(c.r[3], c.r[16].w[0] << 2);
    c.budget -= 1;
L_0037B8D8:
    set32(c.r[3], c.r[17].w[0] + c.r[3].w[0]);
    set32(c.r[16], c.r[16].w[0] + 1u);
    st32((c.r[3].w[0] + 96u), c.r[2].w[0]);
    c.r[2].d[0] = c.r[16].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0037B8ACu | kUnwind; return; } goto L_0037B8AC; } }
    st8((c.r[17].w[0] + 132u), static_cast<std::uint8_t>(0u));
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    st8((c.r[17].w[0] + 133u), static_cast<std::uint8_t>(0u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_0037B910:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const bool t = c.r[18].d[0] == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0037B9B8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], c.r[2].w[0] - 31968u);
    c.r[16].d[0] = 0ull + 0ull;
    st32((c.r[18].w[0] + 56u), c.r[2].w[0]);
    st32((c.r[1].w[0] - 13176u), 0u);
    c.budget -= 6;
L_0037B94C:
    set32(c.r[2], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 96u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[19], c.r[2].w[0] + 96u);  if (t) { goto L_0037B978; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0037B978; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0037B978u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0037B978u) [[unlikely]] return; }
L_0037B978:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[19].w[0]), 0u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0037B94Cu | kUnwind; return; } goto L_0037B94C; } }
    set32(c.r[4], c.r[18].w[0] + 112u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037B994u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_009E(c, 467u, depth + 1u); else { c.pc = 0x0037BCC0u; return; } if (c.pc != 0x0037B994u) [[unlikely]] return; }
L_0037B994:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037B9A0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002C(c, 203u, depth + 1u); else { c.pc = 0x001B1AC0u; return; } if (c.pc != 0x0037B9A0u) [[unlikely]] return; }
L_0037B9A0:
    c.r[2].d[0] = c.r[17].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_0037B9BC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037B9B8u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x0037B9B8u) [[unlikely]] return; }
L_0037B9B8:
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_0037B9BC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0037B9E0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].d[0] = ld8((c.r[4].w[0] + 133u));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0037BA3C; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], ld32((c.r[1].w[0] - 27904u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0037BA58; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037BA14u);  if (depth < kMaxDepth) unit_004D(c, 64u, depth + 1u); else { c.pc = 0x00235030u; return; } if (c.pc != 0x0037BA14u) [[unlikely]] return; }
L_0037BA14:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[16].w[0] + 112u);  if (t) { goto L_0037BA5C; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], ld32((c.r[1].w[0] - 27904u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 19584u)));
    c.r[1].d[0] = c.r[2].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0037BA58; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 133u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0037BA58; } }
L_0037BA3C:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 132u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0037BA58; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 120u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0037BA58; } }
    st8((c.r[16].w[0] + 133u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_0037BA58:
    set32(c.r[4], c.r[16].w[0] + 112u);
    c.budget -= 1;
L_0037BA5C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037BA64u);  if (depth < kMaxDepth) unit_009E(c, 472u, depth + 1u); else { c.pc = 0x0037BDB0u; return; } if (c.pc != 0x0037BA64u) [[unlikely]] return; }
L_0037BA64:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 132u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);  if (t) { goto L_0037BA90; } }
    set32(c.r[4], ld32((c.r[1].w[0] - 27904u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0037BA90; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037BA84u);  if (depth < kMaxDepth) unit_004D(c, 64u, depth + 1u); else { c.pc = 0x00235030u; return; } if (c.pc != 0x0037BA84u) [[unlikely]] return; }
L_0037BA84:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_0037BA90; } }
    st8((c.r[16].w[0] + 132u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 1;
L_0037BA90:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 132u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0037BAC8; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 96u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_0037BAC8; } }
L_0037BAA8:
    set32(c.r[2], c.r[17].w[0] << 2);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037BAB8u); set32(c.r[4], ld32((c.r[2].w[0] + 96u)));  if (depth < kMaxDepth) unit_009E(c, 410u, depth + 1u); else { c.pc = 0x0037B580u; return; } if (c.pc != 0x0037BAB8u) [[unlikely]] return; }
L_0037BAB8:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[3].d[0] = c.r[17].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0037BAA8u | kUnwind; return; } goto L_0037BAA8; } }
L_0037BAC8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0037BAE0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 96u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0037BB30; } }
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[17].w[0] + 1u);
    c.budget -= 2;
L_0037BB04:
    c.r[2].d[0] = c.r[2].d[0] & 3ull;
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037BB18u); set32(c.r[4], ld32((c.r[2].w[0] + 96u)));  if (depth < kMaxDepth) unit_009E(c, 420u, depth + 1u); else { c.pc = 0x0037B660u; return; } if (c.pc != 0x0037BB18u) [[unlikely]] return; }
L_0037BB18:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[17].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0037BB04u | kUnwind; return; } goto L_0037BB04; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037BB30u); set32(c.r[4], c.r[16].w[0] + 112u);  if (depth < kMaxDepth) unit_009E(c, 480u, depth + 1u); else { c.pc = 0x0037BFB0u; return; } if (c.pc != 0x0037BB30u) [[unlikely]] return; }
L_0037BB30:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0037BB50:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[1].w[0] - 13176u)));
    c.budget -= 10;
    { const bool t = c.r[16].d[0] == 0ull; c.r[19].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0037BBE0; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x434D0000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 31088u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037BB8Cu); c.r[5].d[0] = c.r[2].d[0] | 20300ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x0037BB8Cu) [[unlikely]] return; }
L_0037BB8C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_0037BB98; } }
    set32(c.r[18], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 1;
L_0037BB98:
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0037BB9C:
    set32(c.r[6], c.r[17].w[0] + 15250u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037BBB0u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_003F(c, 356u, depth + 1u); else { c.pc = 0x001FF8C0u; return; } if (c.pc != 0x0037BBB0u) [[unlikely]] return; }
L_0037BBB0:
    set32(c.r[2], c.r[17].w[0] << 2);
    set32(c.r[4], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[17], c.r[17].w[0] + 1u);
    set32(c.r[3], c.r[18].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = c.r[17].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[3].w[0] + 40u), c.r[4].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0037BB9Cu | kUnwind; return; } goto L_0037BB9C; } }
    set32(c.r[4], c.r[16].w[0] + 112u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037BBE0u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_009E(c, 470u, depth + 1u); else { c.pc = 0x0037BD30u; return; } if (c.pc != 0x0037BBE0u) [[unlikely]] return; }
L_0037BBE0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0037BC00:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[1].w[0] - 13176u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0037BC14; } }
    st8((c.r[3].w[0] + 132u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_0037BC14:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0037BC20:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[1].w[0] - 13176u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0037BC38; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = ld8((c.r[2].w[0] + 133u));  if (t) { goto L_0037BC3C; } }
L_0037BC38:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0037BC3C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0037BC50:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[4].w[0]), 0u);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0] + 4u), 0u);
    st8((c.r[4].w[0] + 8u), static_cast<std::uint8_t>(0u));
    st32((c.r[4].w[0] + 12u), 0u);
    st32((c.r[4].w[0] + 16u), 0u);
    set32(c.r[2], ld32((c.r[1].w[0] + 31072u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00030000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    set32(c.r[4], ld32((c.r[1].w[0] + 4364u)));
    c.budget -= 16;
    { const bool t = c.r[4].d[0] == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0037BCA8; } }
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037BCA0u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_005B(c, 303u, depth + 1u); else { c.pc = 0x0026E9C0u; return; } if (c.pc != 0x0037BCA0u) [[unlikely]] return; }
L_0037BCA0:
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 2;
L_0037BCA8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0037BCC0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0037BD18; } }
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; c.r[2].d[0] = c.r[16].d[0] << 48;  if (t) { goto L_0037BD04; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0037BD00; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0037BD00u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0037BD00u) [[unlikely]] return; }
L_0037BD00:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.budget -= 1;
L_0037BD04:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0; st32((c.r[17].w[0]), 0u);  if (t) { goto L_0037BD18; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037BD18u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x0037BD18u) [[unlikely]] return; }
L_0037BD18:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0037BD30:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[3], 0u + 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st8((c.r[4].w[0] + 8u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[7].d[0] = ld8((c.r[1].w[0] + 28008u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[3], c.r[3].w[0] - 25200u);
    set32(c.r[6], c.r[3].w[0] + c.r[7].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[6].d[0] = ld8((c.r[6].w[0]));
    set32(c.r[3], c.r[7].w[0] + 1u);
    st8((c.r[1].w[0] + 28008u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 15;
    { const bool t = c.r[6].sd[0] >= 0; c.r[3].d[0] = c.r[6].d[0] & 3ull;  if (t) { goto L_0037BD78; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0037BD78; } }
    set32(c.r[3], c.r[3].w[0] - 4u);
    c.budget -= 1;
L_0037BD78:
    st32((c.r[4].w[0] + 16u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 4u), c.r[5].w[0]);
    st32((c.r[4].w[0] + 12u), 0u);
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0037BDA0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037BDA0u); set32(c.r[4], ld32((c.r[3].w[0] + 52u)));  if (depth < kMaxDepth) unit_0015(c, 85u, depth + 1u); else { c.pc = 0x00156E00u; return; } if (c.pc != 0x0037BDA0u) [[unlikely]] return; }
L_0037BDA0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0037BDB0:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 8u));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; c.r[18].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0037BDE8; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[3].d[0] = ld8((c.r[1].w[0] + 28008u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 28008u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0037BF98; } }
L_0037BDE8:
    set32(c.r[3], ld32((c.r[18].w[0] + 12u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[6], c.r[6].w[0] + 3712u);
    set32(c.r[5], c.r[29].w[0] + 80u);
    set32(c.r[4], 0u + 4u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[18].w[0] + 12u), c.r[3].w[0]);
    c.budget -= 7;
L_0037BE04:
    ld128((c.r[6].w[0]) & ~15u, c.r[3]);
    set32(c.r[4], c.r[4].w[0] - 1u);
    st128((c.r[5].w[0]) & ~15u, c.r[3]);
    set32(c.r[6], c.r[6].w[0] + 16u);
    set32(c.r[5], c.r[5].w[0] + 16u);
    c.budget -= 7;
    { const bool t = c.r[4].sd[0] > 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0037BE04u | kUnwind; return; } goto L_0037BE04; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[4], c.r[29].w[0] + 64u);
    set32(c.r[3], c.r[3].w[0] + 3776u);
    ld128((c.r[3].w[0]) & ~15u, c.r[3]);
    st128((c.r[4].w[0]) & ~15u, c.r[3]);
    set32(c.r[4], ld32((c.r[18].w[0] + 12u)));
    c.r[1].d[0] = c.r[4].sd[0] < 60ll ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[3], 0u + 90u);  if (t) { goto L_0037BE8C; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00420000u);
    c.r[6].d[0] = ld8((c.r[1].w[0] + 28008u));
    set32(c.r[4], c.r[4].w[0] - 25200u);
    set32(c.r[3], 0u + 3u);
    set32(c.r[5], c.r[4].w[0] + c.r[6].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[5].d[0] = ld8((c.r[5].w[0]));
    set32(c.r[4], c.r[6].w[0] + 1u);
    mmi::div(c, 0, c.r[5].w[0], c.r[3].w[0]);
    st8((c.r[1].w[0] + 28008u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[18].w[0] + 16u)));
    c.r[4].d[0] = c.hi.d[0];
    c.budget -= 15;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0037BE84; } }
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.budget -= 1;
L_0037BE84:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 16u), c.r[4].w[0]);  if (t) { goto L_0037BF70; } }
L_0037BE8C:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);  if (t) { goto L_0037BEEC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x434D0000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 31088u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037BEA4u); c.r[5].d[0] = c.r[2].d[0] | 20300ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x0037BEA4u) [[unlikely]] return; }
L_0037BEA4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_0037BEB0; } }
    set32(c.r[17], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 1;
L_0037BEB0:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0037BEB4:
    set32(c.r[6], c.r[16].w[0] + 15250u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037BEC8u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_003F(c, 356u, depth + 1u); else { c.pc = 0x001FF8C0u; return; } if (c.pc != 0x0037BEC8u) [[unlikely]] return; }
L_0037BEC8:
    set32(c.r[3], c.r[16].w[0] << 2);
    set32(c.r[5], 0u + 2u);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[16], c.r[16].w[0] + 1u);
    set32(c.r[4], c.r[17].w[0] + c.r[3].w[0]);
    c.r[3].d[0] = c.r[16].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 40u), c.r[5].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0037BEB4u | kUnwind; return; } goto L_0037BEB4; } }
L_0037BEEC:
    set32(c.r[3], ld32((c.r[18].w[0] + 12u)));
    c.r[1].d[0] = c.r[3].sd[0] < 121ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0037BF50; } }
    set32(c.r[3], c.r[3].w[0] - 120u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x42700000u);
    c.f[1] = c.r[3].w[0];
    c.f[0] = c.r[4].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    fpu_div(c, 2u, c.f[1], c.f[0]);
    c.f[1] = c.r[3].w[0];
    c.f[0] = 0u;
    c.f[12] = fp::sub(c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[12]) < fp::key(c.f[0]));
    c.budget -= 15;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0037BF3C; } }
    c.f[12] = c.f[1];
    c.budget -= 1;
L_0037BF3C:
    set32(c.r[3], ld32((c.r[18].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0037BF50; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037BF50u); set32(c.r[4], ld32((c.r[3].w[0] + 52u)));  if (depth < kMaxDepth) unit_0015(c, 85u, depth + 1u); else { c.pc = 0x00156E00u; return; } if (c.pc != 0x0037BF50u) [[unlikely]] return; }
L_0037BF50:
    set32(c.r[4], ld32((c.r[18].w[0] + 12u)));
    set32(c.r[3], 0u + 180u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0037BF68; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037BF68u); st8((c.r[18].w[0] + 8u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_009E(c, 463u, depth + 1u); else { c.pc = 0x0037BC00u; return; } if (c.pc != 0x0037BF68u) [[unlikely]] return; }
L_0037BF68:
    set32(c.r[3], ld32((c.r[18].w[0] + 4u)));
    st32((c.r[18].w[0] + 16u), c.r[3].w[0]);
    c.budget -= 2;
L_0037BF70:
    set32(c.r[3], ld32((c.r[18].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0037BF98; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 16u)));
    set32(c.r[6], c.r[29].w[0] + 64u);
    set32(c.r[4], ld32((c.r[3].w[0] + 52u)));
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037BF98u); set32(c.r[5], c.r[2].w[0] + 80u);  if (depth < kMaxDepth) unit_0049(c, 142u, depth + 1u); else { c.pc = 0x00225E00u; return; } if (c.pc != 0x0037BF98u) [[unlikely]] return; }
L_0037BF98:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_0037BFB0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 8u));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { [[clang::musttail]] return unit_009F(c, 2u, depth); } }
    set32(c.r[3], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);  if (t) { [[clang::musttail]] return unit_009F(c, 2u, depth); } }
    set32(c.r[4], ld32((c.r[1].w[0] + 20144u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[4].w[0] + c.r[1].w[0]);
    set32(c.r[16], ld32((c.r[1].w[0] + 1524u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037BFF0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0013(c, 218u, depth + 1u); else { c.pc = 0x0014F060u; return; } if (c.pc != 0x0037BFF0u) [[unlikely]] return; }
L_0037BFF0:
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037BFFCu); set32(c.r[4], ld32((c.r[2].w[0] + 52u)));  if (depth < kMaxDepth) unit_0049(c, 146u, depth + 1u); else { c.pc = 0x00225E70u; return; } if (c.pc != 0x0037BFFCu) [[unlikely]] return; }
L_0037BFFC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 1;
    [[clang::musttail]] return unit_009F(c, 1u, depth);
}

}
