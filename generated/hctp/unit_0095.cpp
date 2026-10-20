#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0095[4096] = {
    1, 2, 0, 3, 0, 0, 0, 0, 0, 4, 0, 0, 0, 5, 0, 6, 0, 7, 0, 0, 0, 8, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0,
    10, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 13, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0,
    16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 19, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 22, 0, 0, 0, 23, 0, 0, 0,
    24, 0, 0, 0, 25, 0, 0, 0, 26, 0, 0, 0, 27, 0, 0, 0, 28, 0, 0, 0, 29, 0, 0, 0, 30, 0, 0, 0, 31, 0, 0, 0,
    32, 0, 0, 0, 33, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 37, 0,
    0, 0, 0, 0, 38, 0, 0, 0, 0, 39, 0, 0, 0, 40, 0, 0, 0, 41, 0, 0, 0, 42, 0, 43, 0, 0, 0, 0, 0, 0, 44, 0,
    0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 47, 0, 0, 0, 0, 0,
    0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 49, 0, 50, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 52, 0, 0, 0, 53, 0, 0, 0,
    0, 54, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 0, 58, 0,
    59, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 64, 0, 0, 0, 0, 0, 0, 0, 0, 0, 65, 0, 66, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 68,
    0, 0, 69, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    73, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0,
    77, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 81, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 83, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0,
    85, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 88, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0,
    90, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 93, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 98, 0, 0, 0, 99, 0, 0, 0, 0, 100, 0, 101, 0, 0, 0, 0, 102, 0, 0, 0, 103, 0,
    0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 106, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 110, 0, 0, 0, 111, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0,
    0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 120, 0, 121, 0, 0, 0, 0, 0, 0, 122,
    0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 127, 0, 0, 0, 0, 128, 0, 129, 0, 0, 0, 130, 0, 131, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 136, 0, 0, 0, 0,
    137, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 139, 0, 0, 0, 0, 140, 0, 0, 0, 141, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 144, 0, 145, 0, 0, 146, 0, 0, 0, 147, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0,
    149, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 150, 0, 151, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 158, 0,
    0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 161, 0, 0, 0,
    0, 0, 0, 162, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 0, 165, 0, 0, 166, 0, 0, 0, 0, 0,
    0, 167, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0, 0, 172, 0, 0, 0,
    0, 0, 173, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 175, 0, 0, 0, 0, 176, 0,
    0, 0, 0, 0, 177, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 179, 0, 0, 0, 0, 0, 180, 0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0,
    0, 0, 0, 0, 183, 0, 0, 0, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 185, 0, 0, 0, 0, 0, 0, 186,
    0, 187, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 189, 0, 0, 190, 0, 0, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 194, 0, 0, 0, 195, 0, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 198, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 199, 0, 0, 0, 200, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 203, 0, 0, 0, 204, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 205, 0, 206, 0, 0, 0, 0, 0, 0, 207, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 209, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 210,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 211, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 212, 0, 0, 0, 213, 0, 0, 0, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 0, 0,
    0, 0, 215, 0, 0, 0, 0, 0, 0, 0, 0, 216, 0, 0, 217, 0, 0, 0, 0, 0, 0, 0, 0, 0, 218, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 219, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 220, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 222, 0, 0, 0, 0, 0, 223, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 224, 0, 0, 0, 0, 225, 0, 0, 0, 0, 0, 0, 0, 0, 0, 226, 0, 0, 0, 0, 0, 0, 0, 227,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 228, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    229, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 230, 0, 0, 0, 231, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    232, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 233, 0, 234, 0, 0, 235, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 236, 0,
    237, 0, 238, 0, 239, 0, 0, 240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 241, 0, 242, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 243, 0, 244, 0, 0, 0, 0, 0, 245, 0, 0, 0, 0, 0, 246, 0, 0, 0, 247, 0, 0, 0, 0, 248, 0, 0, 0, 0, 0, 249,
    0, 0, 0, 0, 0, 0, 250, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 251, 0, 0, 0, 0, 0, 252, 0, 0, 253, 0, 0, 0, 0,
    254, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 256, 0, 0, 0, 257, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 258, 0, 259, 0, 0, 0, 0, 260, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 262, 0, 0, 0, 0, 0, 0, 0, 0, 263, 0, 0, 0, 0, 0, 0, 0, 0, 0, 264, 0, 0, 0,
    0, 0, 265, 0, 266, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 267, 0, 0, 0, 0, 0, 0, 268, 0, 0, 269, 0, 0, 270, 0, 0, 0,
    0, 0, 0, 271, 0, 0, 272, 0, 0, 273, 0, 0, 274, 0, 0, 0, 0, 0, 275, 0, 0, 0, 0, 0, 0, 0, 0, 0, 276, 0, 0, 0,
    0, 277, 0, 0, 278, 0, 0, 0, 0, 0, 0, 279, 0, 0, 0, 0, 280, 0, 0, 0, 0, 0, 0, 0, 281, 0, 0, 0, 0, 0, 0, 0,
    0, 282, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 283, 0, 0, 0, 0, 0, 0, 0, 284, 0, 285, 0, 0, 0, 0, 0, 0, 0, 0,
    286, 0, 0, 0, 0, 0, 0, 0, 0, 287, 0, 288, 0, 0, 0, 0, 0, 0, 289, 0, 0, 0, 0, 290, 0, 0, 291, 0, 0, 0, 0, 0,
    292, 0, 0, 0, 0, 293, 0, 0, 0, 0, 0, 0, 294, 0, 0, 0, 0, 295, 0, 0, 296, 0, 0, 0, 0, 0, 0, 0, 297, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 298, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 299, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 300, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 301, 0, 0, 0, 0, 0,
    302, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 303, 0, 0, 0, 0, 0, 0, 0, 304, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 305, 0, 0, 0, 306, 0, 0, 0, 0, 0, 0, 307, 0, 0, 0, 0, 0, 0, 308, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 309, 0, 0, 0, 0, 0, 0, 0, 310, 0, 0, 0, 0, 0, 0, 0, 0, 311, 0, 0, 0, 0, 312, 0, 0, 0, 0, 0, 0, 0,
    0, 313, 0, 314, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 315, 0, 0, 0, 0,
    0, 0, 316, 0, 317, 0, 0, 0, 318, 0, 0, 0, 319, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 320, 0, 0, 0, 0, 0, 0, 321, 0,
    322, 0, 0, 0, 0, 0, 0, 0, 0, 323, 0, 0, 0, 0, 0, 324, 0, 0, 0, 0, 0, 0, 325, 0, 0, 326, 0, 0, 0, 0, 0, 0,
    327, 0, 0, 0, 0, 0, 328, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 329, 0, 0, 0, 0, 0, 0, 0, 330, 0, 0, 0, 0, 331,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 332, 0, 0, 0, 0, 333, 0, 0, 0, 0, 334, 0, 0, 0, 335, 0,
    0, 0, 0, 0, 336, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 337, 0, 0, 0, 338, 0, 0, 339, 0, 0, 0, 0, 0, 340,
    0, 0, 341, 0, 0, 0, 0, 0, 342, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 343, 0, 0, 0, 344, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 345, 0, 0, 0, 346, 0, 0, 0, 0, 0, 347, 0, 0, 0, 348, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 349, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 350, 0, 0, 351, 0, 0, 352, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 353, 0, 0, 354, 0, 0, 355, 0, 0,
    0, 0, 356, 0, 0, 0, 0, 0, 0, 0, 0, 357, 0, 0, 0, 0, 0, 0, 0, 0, 358, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 359, 0, 0, 0, 360, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 361, 0, 0, 0, 362, 0, 0, 0,
    0, 0, 0, 0, 0, 363, 0, 0, 0, 364, 0, 0, 0, 0, 0, 0, 365, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 366, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 367, 0, 0, 0, 0, 0, 0, 0, 0, 368, 0, 0, 369, 0, 0, 0, 0, 0, 0, 0,
    370, 0, 0, 0, 0, 371, 0, 0, 0, 0, 372, 0, 0, 0, 0, 0, 0, 0, 0, 0, 373, 0, 0, 0, 0, 0, 0, 0, 0, 0, 374, 0,
    0, 0, 0, 0, 375, 0, 0, 0, 0, 376, 0, 0, 377, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 378, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 379, 0, 0, 0, 380, 0, 0, 0, 0, 0, 0, 0, 381, 0, 0, 0, 0, 0, 0, 0, 0, 0, 382, 0, 0, 0, 383, 0,
    0, 0, 0, 0, 0, 0, 0, 384, 0, 0, 0, 0, 0, 0, 0, 0, 385, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 386, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 387, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 388, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 389, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 390, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 391, 0, 0, 0, 0, 0, 0, 0, 0, 392, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 393, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 394, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 395, 0, 0, 0, 0, 396, 0, 397, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 398, 0, 0, 0, 399, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 400, 0, 0, 0, 401,
    0, 0, 0, 402, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 403, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 404, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 405, 0, 0, 0, 0, 406, 0, 0, 0, 0, 0, 407, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 408, 0, 0, 0, 0, 409, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 410, 0, 0, 0, 0, 411, 0,
    0, 0, 0, 412, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 413, 0, 0, 0, 414, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 415, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 416, 0,
    0, 0, 417, 0, 418, 0, 0, 0, 0, 0, 0, 0, 419, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 420, 0, 0, 0,
    0, 0, 0, 0, 0, 421, 0, 0, 0, 0, 0, 422, 0, 0, 423, 0, 0, 0, 0, 0, 0, 0, 0, 0, 424, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 425, 0, 0, 0, 0, 0, 0, 0, 0, 0, 426, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 427, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 428, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 429, 0, 0, 0, 0, 0, 430,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 431, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 432, 0, 0, 0, 0, 433, 0, 0,
    0, 0, 0, 0, 434, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 435, 0, 436, 0, 0, 0, 0, 0, 0, 0,
    437, 0, 0, 0, 0, 0, 0, 0, 438, 0, 0, 0, 0, 0, 0, 439, 0, 0, 0, 440, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 441, 0, 0, 0, 0, 442, 0, 0, 0, 0, 443, 0, 444, 0, 0, 0, 0, 445, 0, 0, 0, 446, 0, 0, 0, 0, 0, 0,
    447, 0, 0, 448, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 449, 0, 0, 0, 0, 0, 0, 450, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 451, 0, 0, 0, 0, 0, 0, 0, 452, 0, 0, 453, 0, 0, 0, 0, 0, 454, 0, 0, 0,
    0, 0, 0, 0, 455, 0, 0, 0, 0, 0, 0, 0, 456, 0, 0, 0, 0, 0, 0, 0, 457, 0, 0, 0, 458, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 459, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 460, 0, 0,
    0, 0, 461, 0, 0, 0, 0, 0, 462, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 463, 0, 0, 464, 0, 0, 0, 465, 0, 0, 0, 0,
};

void unit_0095(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_00354000;
    case 2u: goto L_00354004;
    case 3u: goto L_0035400C;
    case 4u: goto L_00354024;
    case 5u: goto L_00354034;
    case 6u: goto L_0035403C;
    case 7u: goto L_00354044;
    case 8u: goto L_00354054;
    case 9u: goto L_0035406C;
    case 10u: goto L_00354080;
    case 11u: goto L_00354094;
    case 12u: goto L_003540B0;
    case 13u: goto L_003540C0;
    case 14u: goto L_003540D4;
    case 15u: goto L_003540F0;
    case 16u: goto L_00354100;
    case 17u: goto L_00354130;
    case 18u: goto L_0035415C;
    case 19u: goto L_00354170;
    case 20u: goto L_003541A0;
    case 21u: goto L_003541D4;
    case 22u: goto L_003541E0;
    case 23u: goto L_003541F0;
    case 24u: goto L_00354200;
    case 25u: goto L_00354210;
    case 26u: goto L_00354220;
    case 27u: goto L_00354230;
    case 28u: goto L_00354240;
    case 29u: goto L_00354250;
    case 30u: goto L_00354260;
    case 31u: goto L_00354270;
    case 32u: goto L_00354280;
    case 33u: goto L_00354290;
    case 34u: goto L_003542A0;
    case 35u: goto L_003542C4;
    case 36u: goto L_003542F0;
    case 37u: goto L_003542F8;
    case 38u: goto L_00354310;
    case 39u: goto L_00354324;
    case 40u: goto L_00354334;
    case 41u: goto L_00354344;
    case 42u: goto L_00354354;
    case 43u: goto L_0035435C;
    case 44u: goto L_00354378;
    case 45u: goto L_0035438C;
    case 46u: goto L_003543DC;
    case 47u: goto L_003543E8;
    case 48u: goto L_00354408;
    case 49u: goto L_00354428;
    case 50u: goto L_00354430;
    case 51u: goto L_00354448;
    case 52u: goto L_00354460;
    case 53u: goto L_00354470;
    case 54u: goto L_00354484;
    case 55u: goto L_0035449C;
    case 56u: goto L_003544C8;
    case 57u: goto L_003544D8;
    case 58u: goto L_003544F8;
    case 59u: goto L_00354500;
    case 60u: goto L_00354518;
    case 61u: goto L_00354530;
    case 62u: goto L_00354570;
    case 63u: goto L_003545DC;
    case 64u: goto L_00354604;
    case 65u: goto L_0035462C;
    case 66u: goto L_00354634;
    case 67u: goto L_00354660;
    case 68u: goto L_0035467C;
    case 69u: goto L_00354688;
    case 70u: goto L_003546A0;
    case 71u: goto L_003546C0;
    case 72u: goto L_003546D8;
    case 73u: goto L_00354700;
    case 74u: goto L_00354754;
    case 75u: goto L_003547C0;
    case 76u: goto L_003547E4;
    case 77u: goto L_00354800;
    case 78u: goto L_00354814;
    case 79u: goto L_00354840;
    case 80u: goto L_0035485C;
    case 81u: goto L_00354870;
    case 82u: goto L_003548BC;
    case 83u: goto L_003548D0;
    case 84u: goto L_003548E0;
    case 85u: goto L_00354900;
    case 86u: goto L_00354914;
    case 87u: goto L_00354940;
    case 88u: goto L_00354954;
    case 89u: goto L_00354968;
    case 90u: goto L_00354980;
    case 91u: goto L_003549C4;
    case 92u: goto L_003549E0;
    case 93u: goto L_003549F0;
    case 94u: goto L_00354A1C;
    case 95u: goto L_00354A3C;
    case 96u: goto L_00354A5C;
    case 97u: goto L_00354A94;
    case 98u: goto L_00354AA8;
    case 99u: goto L_00354AB8;
    case 100u: goto L_00354ACC;
    case 101u: goto L_00354AD4;
    case 102u: goto L_00354AE8;
    case 103u: goto L_00354AF8;
    case 104u: goto L_00354B18;
    case 105u: goto L_00354B38;
    case 106u: goto L_00354B48;
    case 107u: goto L_00354B54;
    case 108u: goto L_00354B74;
    case 109u: goto L_00354B9C;
    case 110u: goto L_00354BB0;
    case 111u: goto L_00354BC0;
    case 112u: goto L_00354BD0;
    case 113u: goto L_00354C24;
    case 114u: goto L_00354C34;
    case 115u: goto L_00354C54;
    case 116u: goto L_00354C70;
    case 117u: goto L_00354C90;
    case 118u: goto L_00354CAC;
    case 119u: goto L_00354CC0;
    case 120u: goto L_00354CD8;
    case 121u: goto L_00354CE0;
    case 122u: goto L_00354CFC;
    case 123u: goto L_00354D14;
    case 124u: goto L_00354D30;
    case 125u: goto L_00354D48;
    case 126u: goto L_00354D5C;
    case 127u: goto L_00354E0C;
    case 128u: goto L_00354E20;
    case 129u: goto L_00354E28;
    case 130u: goto L_00354E38;
    case 131u: goto L_00354E40;
    case 132u: goto L_00354E70;
    case 133u: goto L_00354EA4;
    case 134u: goto L_00354EC0;
    case 135u: goto L_00354EDC;
    case 136u: goto L_00354EEC;
    case 137u: goto L_00354F00;
    case 138u: goto L_00354F1C;
    case 139u: goto L_00354F30;
    case 140u: goto L_00354F44;
    case 141u: goto L_00354F54;
    case 142u: goto L_00354F74;
    case 143u: goto L_00354F9C;
    case 144u: goto L_00354FB0;
    case 145u: goto L_00354FB8;
    case 146u: goto L_00354FC4;
    case 147u: goto L_00354FD4;
    case 148u: goto L_00354FE8;
    case 149u: goto L_00355000;
    case 150u: goto L_0035502C;
    case 151u: goto L_00355034;
    case 152u: goto L_0035504C;
    case 153u: goto L_00355060;
    case 154u: goto L_003550A0;
    case 155u: goto L_003550B0;
    case 156u: goto L_003550CC;
    case 157u: goto L_003550E4;
    case 158u: goto L_003550F8;
    case 159u: goto L_00355114;
    case 160u: goto L_00355130;
    case 161u: goto L_00355170;
    case 162u: goto L_0035518C;
    case 163u: goto L_0035519C;
    case 164u: goto L_003551BC;
    case 165u: goto L_003551DC;
    case 166u: goto L_003551E8;
    case 167u: goto L_00355204;
    case 168u: goto L_0035521C;
    case 169u: goto L_00355234;
    case 170u: goto L_003552B8;
    case 171u: goto L_003552CC;
    case 172u: goto L_003552F0;
    case 173u: goto L_00355308;
    case 174u: goto L_00355350;
    case 175u: goto L_00355364;
    case 176u: goto L_00355378;
    case 177u: goto L_00355390;
    case 178u: goto L_003553CC;
    case 179u: goto L_00355408;
    case 180u: goto L_00355420;
    case 181u: goto L_00355430;
    case 182u: goto L_00355470;
    case 183u: goto L_00355490;
    case 184u: goto L_003554B4;
    case 185u: goto L_003554E0;
    case 186u: goto L_003554FC;
    case 187u: goto L_00355504;
    case 188u: goto L_00355520;
    case 189u: goto L_0035553C;
    case 190u: goto L_00355548;
    case 191u: goto L_00355560;
    case 192u: goto L_003555C0;
    case 193u: goto L_003555D8;
    case 194u: goto L_00355618;
    case 195u: goto L_00355628;
    case 196u: goto L_00355640;
    case 197u: goto L_0035569C;
    case 198u: goto L_00355708;
    case 199u: goto L_00355740;
    case 200u: goto L_00355750;
    case 201u: goto L_00355768;
    case 202u: goto L_003557D8;
    case 203u: goto L_00355810;
    case 204u: goto L_00355820;
    case 205u: goto L_003558B4;
    case 206u: goto L_003558BC;
    case 207u: goto L_003558D8;
    case 208u: goto L_00355920;
    case 209u: goto L_0035592C;
    case 210u: goto L_0035597C;
    case 211u: goto L_003559DC;
    case 212u: goto L_00355A30;
    case 213u: goto L_00355A40;
    case 214u: goto L_00355A64;
    case 215u: goto L_00355A88;
    case 216u: goto L_00355AAC;
    case 217u: goto L_00355AB8;
    case 218u: goto L_00355AE0;
    case 219u: goto L_00355B1C;
    case 220u: goto L_00355B4C;
    case 221u: goto L_00355BCC;
    case 222u: goto L_00355C3C;
    case 223u: goto L_00355C54;
    case 224u: goto L_00355CA0;
    case 225u: goto L_00355CB4;
    case 226u: goto L_00355CDC;
    case 227u: goto L_00355CFC;
    case 228u: goto L_00355D4C;
    case 229u: goto L_00355D80;
    case 230u: goto L_00355DAC;
    case 231u: goto L_00355DBC;
    case 232u: goto L_00355E00;
    case 233u: goto L_00355E38;
    case 234u: goto L_00355E40;
    case 235u: goto L_00355E4C;
    case 236u: goto L_00355E78;
    case 237u: goto L_00355E80;
    case 238u: goto L_00355E88;
    case 239u: goto L_00355E90;
    case 240u: goto L_00355E9C;
    case 241u: goto L_00355ED8;
    case 242u: goto L_00355EE0;
    case 243u: goto L_00355F08;
    case 244u: goto L_00355F10;
    case 245u: goto L_00355F28;
    case 246u: goto L_00355F40;
    case 247u: goto L_00355F50;
    case 248u: goto L_00355F64;
    case 249u: goto L_00355F7C;
    case 250u: goto L_00355F98;
    case 251u: goto L_00355FC8;
    case 252u: goto L_00355FE0;
    case 253u: goto L_00355FEC;
    case 254u: goto L_00356000;
    case 255u: goto L_0035600C;
    case 256u: goto L_00356040;
    case 257u: goto L_00356050;
    case 258u: goto L_00356088;
    case 259u: goto L_00356090;
    case 260u: goto L_003560A4;
    case 261u: goto L_003560D0;
    case 262u: goto L_00356124;
    case 263u: goto L_00356148;
    case 264u: goto L_00356170;
    case 265u: goto L_00356188;
    case 266u: goto L_00356190;
    case 267u: goto L_003561BC;
    case 268u: goto L_003561D8;
    case 269u: goto L_003561E4;
    case 270u: goto L_003561F0;
    case 271u: goto L_0035620C;
    case 272u: goto L_00356218;
    case 273u: goto L_00356224;
    case 274u: goto L_00356230;
    case 275u: goto L_00356248;
    case 276u: goto L_00356270;
    case 277u: goto L_00356284;
    case 278u: goto L_00356290;
    case 279u: goto L_003562AC;
    case 280u: goto L_003562C0;
    case 281u: goto L_003562E0;
    case 282u: goto L_00356304;
    case 283u: goto L_00356334;
    case 284u: goto L_00356354;
    case 285u: goto L_0035635C;
    case 286u: goto L_00356380;
    case 287u: goto L_003563A4;
    case 288u: goto L_003563AC;
    case 289u: goto L_003563C8;
    case 290u: goto L_003563DC;
    case 291u: goto L_003563E8;
    case 292u: goto L_00356400;
    case 293u: goto L_00356414;
    case 294u: goto L_00356430;
    case 295u: goto L_00356444;
    case 296u: goto L_00356450;
    case 297u: goto L_00356470;
    case 298u: goto L_003564C0;
    case 299u: goto L_00356504;
    case 300u: goto L_0035653C;
    case 301u: goto L_00356568;
    case 302u: goto L_00356580;
    case 303u: goto L_003565B0;
    case 304u: goto L_003565D0;
    case 305u: goto L_00356618;
    case 306u: goto L_00356628;
    case 307u: goto L_00356644;
    case 308u: goto L_00356660;
    case 309u: goto L_00356688;
    case 310u: goto L_003566A8;
    case 311u: goto L_003566CC;
    case 312u: goto L_003566E0;
    case 313u: goto L_00356704;
    case 314u: goto L_0035670C;
    case 315u: goto L_0035676C;
    case 316u: goto L_00356788;
    case 317u: goto L_00356790;
    case 318u: goto L_003567A0;
    case 319u: goto L_003567B0;
    case 320u: goto L_003567DC;
    case 321u: goto L_003567F8;
    case 322u: goto L_00356800;
    case 323u: goto L_00356824;
    case 324u: goto L_0035683C;
    case 325u: goto L_00356858;
    case 326u: goto L_00356864;
    case 327u: goto L_00356880;
    case 328u: goto L_00356898;
    case 329u: goto L_003568C8;
    case 330u: goto L_003568E8;
    case 331u: goto L_003568FC;
    case 332u: goto L_00356940;
    case 333u: goto L_00356954;
    case 334u: goto L_00356968;
    case 335u: goto L_00356978;
    case 336u: goto L_00356990;
    case 337u: goto L_003569C8;
    case 338u: goto L_003569D8;
    case 339u: goto L_003569E4;
    case 340u: goto L_003569FC;
    case 341u: goto L_00356A08;
    case 342u: goto L_00356A20;
    case 343u: goto L_00356A60;
    case 344u: goto L_00356A70;
    case 345u: goto L_00356AA0;
    case 346u: goto L_00356AB0;
    case 347u: goto L_00356AC8;
    case 348u: goto L_00356AD8;
    case 349u: goto L_00356B54;
    case 350u: goto L_00356B94;
    case 351u: goto L_00356BA0;
    case 352u: goto L_00356BAC;
    case 353u: goto L_00356BDC;
    case 354u: goto L_00356BE8;
    case 355u: goto L_00356BF4;
    case 356u: goto L_00356C08;
    case 357u: goto L_00356C2C;
    case 358u: goto L_00356C50;
    case 359u: goto L_00356C90;
    case 360u: goto L_00356CA0;
    case 361u: goto L_00356CE0;
    case 362u: goto L_00356CF0;
    case 363u: goto L_00356D14;
    case 364u: goto L_00356D24;
    case 365u: goto L_00356D40;
    case 366u: goto L_00356D78;
    case 367u: goto L_00356DB0;
    case 368u: goto L_00356DD4;
    case 369u: goto L_00356DE0;
    case 370u: goto L_00356E00;
    case 371u: goto L_00356E14;
    case 372u: goto L_00356E28;
    case 373u: goto L_00356E50;
    case 374u: goto L_00356E78;
    case 375u: goto L_00356E90;
    case 376u: goto L_00356EA4;
    case 377u: goto L_00356EB0;
    case 378u: goto L_00356EE0;
    case 379u: goto L_00356F10;
    case 380u: goto L_00356F20;
    case 381u: goto L_00356F40;
    case 382u: goto L_00356F68;
    case 383u: goto L_00356F78;
    case 384u: goto L_00356F9C;
    case 385u: goto L_00356FC0;
    case 386u: goto L_00357030;
    case 387u: goto L_0035705C;
    case 388u: goto L_00357094;
    case 389u: goto L_003570F0;
    case 390u: goto L_00357140;
    case 391u: goto L_00357190;
    case 392u: goto L_003571B4;
    case 393u: goto L_003571E0;
    case 394u: goto L_00357234;
    case 395u: goto L_00357290;
    case 396u: goto L_003572A4;
    case 397u: goto L_003572AC;
    case 398u: goto L_00357320;
    case 399u: goto L_00357330;
    case 400u: goto L_0035736C;
    case 401u: goto L_0035737C;
    case 402u: goto L_0035738C;
    case 403u: goto L_003573BC;
    case 404u: goto L_003573F4;
    case 405u: goto L_003574A8;
    case 406u: goto L_003574BC;
    case 407u: goto L_003574D4;
    case 408u: goto L_00357588;
    case 409u: goto L_0035759C;
    case 410u: goto L_00357664;
    case 411u: goto L_00357678;
    case 412u: goto L_0035768C;
    case 413u: goto L_003576CC;
    case 414u: goto L_003576DC;
    case 415u: goto L_00357734;
    case 416u: goto L_00357778;
    case 417u: goto L_00357788;
    case 418u: goto L_00357790;
    case 419u: goto L_003577B0;
    case 420u: goto L_003578F0;
    case 421u: goto L_00357914;
    case 422u: goto L_0035792C;
    case 423u: goto L_00357938;
    case 424u: goto L_00357960;
    case 425u: goto L_00357988;
    case 426u: goto L_003579B0;
    case 427u: goto L_003579E0;
    case 428u: goto L_00357A68;
    case 429u: goto L_00357AE4;
    case 430u: goto L_00357AFC;
    case 431u: goto L_00357B2C;
    case 432u: goto L_00357B60;
    case 433u: goto L_00357B74;
    case 434u: goto L_00357B90;
    case 435u: goto L_00357BD8;
    case 436u: goto L_00357BE0;
    case 437u: goto L_00357C00;
    case 438u: goto L_00357C20;
    case 439u: goto L_00357C3C;
    case 440u: goto L_00357C4C;
    case 441u: goto L_00357C90;
    case 442u: goto L_00357CA4;
    case 443u: goto L_00357CB8;
    case 444u: goto L_00357CC0;
    case 445u: goto L_00357CD4;
    case 446u: goto L_00357CE4;
    case 447u: goto L_00357D00;
    case 448u: goto L_00357D0C;
    case 449u: goto L_00357D44;
    case 450u: goto L_00357D60;
    case 451u: goto L_00357DAC;
    case 452u: goto L_00357DCC;
    case 453u: goto L_00357DD8;
    case 454u: goto L_00357DF0;
    case 455u: goto L_00357E10;
    case 456u: goto L_00357E30;
    case 457u: goto L_00357E50;
    case 458u: goto L_00357E60;
    case 459u: goto L_00357F38;
    case 460u: goto L_00357F74;
    case 461u: goto L_00357F88;
    case 462u: goto L_00357FA0;
    case 463u: goto L_00357FD0;
    case 464u: goto L_00357FDC;
    case 465u: goto L_00357FEC;
    default: bad_entry(c, 0x00354000u); return;
    }
L_00354000:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.budget -= 1;
L_00354004:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035400Cu); set32(c.r[4], ld32((c.r[1].w[0] - 752u)));  if (depth < kMaxDepth) unit_0094(c, 202u, depth + 1u); else { c.pc = 0x003520B0u; return; } if (c.pc != 0x0035400Cu) [[unlikely]] return; }
L_0035400C:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00540000u);  if (t) { goto L_0035404C; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00354024u); set32(c.r[4], ld32((c.r[1].w[0] - 1536u)));  if (depth < kMaxDepth) unit_000F(c, 315u, depth + 1u); else { c.pc = 0x0013F0D0u; return; } if (c.pc != 0x00354024u) [[unlikely]] return; }
L_00354024:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00540000u);  if (t) { goto L_0035406C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00354034u); set32(c.r[4], ld32((c.r[1].w[0] - 752u)));  if (depth < kMaxDepth) unit_0094(c, 192u, depth + 1u); else { c.pc = 0x00351FC0u; return; } if (c.pc != 0x00354034u) [[unlikely]] return; }
L_00354034:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035403Cu); set32(c.r[4], 0u + 401u);  if (depth < kMaxDepth) unit_002C(c, 36u, depth + 1u); else { c.pc = 0x001B0690u; return; } if (c.pc != 0x0035403Cu) [[unlikely]] return; }
L_0035403C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00354044u); set32(c.r[4], 0u + 19u);  if (depth < kMaxDepth) unit_0076(c, 191u, depth + 1u); else { c.pc = 0x002D9970u; return; } if (c.pc != 0x00354044u) [[unlikely]] return; }
L_00354044:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_00354070; } }
L_0035404C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00354054u); set32(c.r[4], ld32((c.r[1].w[0] - 752u)));  if (depth < kMaxDepth) unit_0094(c, 197u, depth + 1u); else { c.pc = 0x00352030u; return; } if (c.pc != 0x00354054u) [[unlikely]] return; }
L_00354054:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0035406C; } }
    st8((c.r[16].w[0] + 372u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], 0u + 1u);
    set32(c.r[3], ld32((c.r[16].w[0] + 24u)));
    st32((c.r[3].w[0] + 36u), c.r[4].w[0]);
    c.budget -= 4;
L_0035406C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_00354070:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00354080:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00354094u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_001E(c, 475u, depth + 1u); else { c.pc = 0x0017BC20u; return; } if (c.pc != 0x00354094u) [[unlikely]] return; }
L_00354094:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 313u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003540B0; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003540B0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003540B0u) [[unlikely]] return; }
L_003540B0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003540C0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003540D4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_001E(c, 476u, depth + 1u); else { c.pc = 0x0017BC30u; return; } if (c.pc != 0x003540D4u) [[unlikely]] return; }
L_003540D4:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 313u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003540F0; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003540F0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003540F0u) [[unlikely]] return; }
L_003540F0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00354100:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_00354138; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[5], c.r[29].w[0] + 48u);
    set32(c.r[2], c.r[2].w[0] + 272u);
    set32(c.r[4], c.r[4].w[0] + 336u);
    ld128((c.r[2].w[0]) & ~15u, c.r[3]);
    c.r[2].d[0] = ld64((c.r[2].w[0] + 16u));
    st128((c.r[5].w[0]) & ~15u, c.r[3]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00354130u); st64((c.r[5].w[0] + 16u), c.r[2].d[0]);  if (depth < kMaxDepth) unit_0049(c, 280u, depth + 1u); else { c.pc = 0x002276C0u; return; } if (c.pc != 0x00354130u) [[unlikely]] return; }
L_00354130:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_00354160; } }
L_00354138:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[5], c.r[29].w[0] + 16u);
    set32(c.r[2], c.r[2].w[0] + 304u);
    set32(c.r[4], c.r[4].w[0] + 336u);
    ld128((c.r[2].w[0]) & ~15u, c.r[3]);
    c.r[2].d[0] = ld64((c.r[2].w[0] + 16u));
    st128((c.r[5].w[0]) & ~15u, c.r[3]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035415Cu); st64((c.r[5].w[0] + 16u), c.r[2].d[0]);  if (depth < kMaxDepth) unit_0049(c, 280u, depth + 1u); else { c.pc = 0x002276C0u; return; } if (c.pc != 0x0035415Cu) [[unlikely]] return; }
L_0035415C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_00354160:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00354170:
    set32(c.r[3], ld32((c.r[4].w[0] + 144u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 24u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 48u)));
    set32(c.r[3], c.r[3].w[0] << 5);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);  c.pc = t; return; }
L_003541A0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] + 336u);
    ld128((c.r[2].w[0]) & ~15u, c.r[3]);
    set32(c.r[5], c.r[29].w[0] + 32u);
    set32(c.r[6], c.r[29].w[0] + 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    st128((c.r[5].w[0]) & ~15u, c.r[3]);
    set32(c.r[2], c.r[2].w[0] + 352u);
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003541D4u); st128((c.r[6].w[0]) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_001E(c, 479u, depth + 1u); else { c.pc = 0x0017BC80u; return; } if (c.pc != 0x003541D4u) [[unlikely]] return; }
L_003541D4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003541E0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 8u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00352150u | kUnwind; return; } [[clang::musttail]] return unit_0094(c, 207u, depth); }
L_003541F0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 8u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00351C80u | kUnwind; return; } [[clang::musttail]] return unit_0094(c, 165u, depth); }
L_00354200:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 20u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00352E70u | kUnwind; return; } [[clang::musttail]] return unit_0094(c, 324u, depth); }
L_00354210:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 20u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00352EF0u | kUnwind; return; } [[clang::musttail]] return unit_0094(c, 326u, depth); }
L_00354220:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 20u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00352D90u | kUnwind; return; } [[clang::musttail]] return unit_0094(c, 315u, depth); }
L_00354230:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 20u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00352D80u | kUnwind; return; } [[clang::musttail]] return unit_0094(c, 314u, depth); }
L_00354240:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 20u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00352980u | kUnwind; return; } [[clang::musttail]] return unit_0094(c, 278u, depth); }
L_00354250:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 40u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003534E0u | kUnwind; return; } [[clang::musttail]] return unit_0094(c, 369u, depth); }
L_00354260:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 40u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00352980u | kUnwind; return; } [[clang::musttail]] return unit_0094(c, 278u, depth); }
L_00354270:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 20u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00353EE0u | kUnwind; return; } [[clang::musttail]] return unit_0094(c, 437u, depth); }
L_00354280:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 20u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00353EB0u | kUnwind; return; } [[clang::musttail]] return unit_0094(c, 435u, depth); }
L_00354290:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 20u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00353B10u | kUnwind; return; } [[clang::musttail]] return unit_0094(c, 401u, depth); }
L_003542A0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003542C4u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0090(c, 562u, depth + 1u); else { c.pc = 0x00343FD0u; return; } if (c.pc != 0x003542C4u) [[unlikely]] return; }
L_003542C4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] + 28720u);
    set32(c.r[3], c.r[3].w[0] + 28808u);
    st32((c.r[18].w[0]), c.r[2].w[0]);
    set32(c.r[4], c.r[18].w[0] + 624u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    st32((c.r[18].w[0] + 20u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + 28868u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003542F0u); st32((c.r[18].w[0] + 40u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0095(c, 441u, depth + 1u); else { c.pc = 0x00357C90u; return; } if (c.pc != 0x003542F0u) [[unlikely]] return; }
L_003542F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003542F8u);  if (depth < kMaxDepth) unit_003F(c, 299u, depth + 1u); else { c.pc = 0x001FF0D0u; return; } if (c.pc != 0x003542F8u) [[unlikely]] return; }
L_003542F8:
    st32((c.r[18].w[0] + 592u), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 26392u)));
    set32(c.r[4], 0u + 160u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00354310u); set32(c.r[16], c.r[2].w[0] + 624u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00354310u) [[unlikely]] return; }
L_00354310:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00354324; } }
    set32(c.r[5], 0u + 5u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00354324u); set32(c.r[6], 0u + 7u);  if (depth < kMaxDepth) unit_0025(c, 304u, depth + 1u); else { c.pc = 0x00196C90u; return; } if (c.pc != 0x00354324u) [[unlikely]] return; }
L_00354324:
    st32((c.r[18].w[0] + 584u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00354334u); set32(c.r[5], 0u + 10000u);  if (depth < kMaxDepth) unit_002A(c, 5u, depth + 1u); else { c.pc = 0x001A80A0u; return; } if (c.pc != 0x00354334u) [[unlikely]] return; }
L_00354334:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00354344u); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_002A(c, 3u, depth + 1u); else { c.pc = 0x001A8060u; return; } if (c.pc != 0x00354344u) [[unlikely]] return; }
L_00354344:
    set32(c.r[4], ld32((c.r[18].w[0] + 584u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00354354u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 322u, depth + 1u); else { c.pc = 0x00196E30u; return; } if (c.pc != 0x00354354u) [[unlikely]] return; }
L_00354354:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035435Cu); set32(c.r[4], 0u + 272u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0035435Cu) [[unlikely]] return; }
L_0035435C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00540000u);  if (t) { goto L_00354378; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[1].w[0] - 768u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 36u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00354378u); c.r[5].d[0] = ld64((c.r[2].w[0] + 400u));  if (depth < kMaxDepth) unit_0017(c, 188u, depth + 1u); else { c.pc = 0x0015ED60u; return; } if (c.pc != 0x00354378u) [[unlikely]] return; }
L_00354378:
    st32((c.r[18].w[0] + 604u), c.r[2].w[0]);
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[2], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035438Cu); st8((c.r[18].w[0] + 1088u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x0035438Cu) [[unlikely]] return; }
L_0035438C:
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[5], c.r[18].w[0] + 180u);
    st32((c.r[18].w[0] + 672u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 4u)));
    st32((c.r[18].w[0] + 676u), c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    st32((c.r[18].w[0] + 680u), c.r[2].w[0]);
    c.f[0] = ld32((c.r[1].w[0] - 7272u));
    st32((c.r[18].w[0] + 640u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[0] = ld32((c.r[1].w[0] - 7272u));
    st32((c.r[18].w[0] + 644u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00540000u);
    st32((c.r[18].w[0] + 648u), c.r[3].w[0]);
    st32((c.r[18].w[0] + 608u), 0u);
    set32(c.r[16], ld32((c.r[1].w[0] - 760u)));
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003543DCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0090(c, 510u, depth + 1u); else { c.pc = 0x003438C0u; return; } if (c.pc != 0x003543DCu) [[unlikely]] return; }
L_003543DC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003543E8u); st32((c.r[18].w[0] + 28u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0090(c, 518u, depth + 1u); else { c.pc = 0x00343980u; return; } if (c.pc != 0x003543E8u) [[unlikely]] return; }
L_003543E8:
    st32((c.r[18].w[0] + 32u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[2], 0u - 1u);
    st32((c.r[18].w[0] + 1108u), 0u);
    st32((c.r[18].w[0] + 1104u), c.r[2].w[0]);
    st8((c.r[18].w[0] + 1112u), static_cast<std::uint8_t>(0u));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00354408u); st8((c.r[18].w[0] + 1113u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0095(c, 185u, depth + 1u); else { c.pc = 0x003554E0u; return; } if (c.pc != 0x00354408u) [[unlikely]] return; }
L_00354408:
    set32(c.r[2], ld32((c.r[18].w[0] + 32u)));
    c.r[1].d[0] = c.r[2].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_0035449C; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[1].w[0] + 26392u)));
    set32(c.r[17], c.r[2].w[0] + 624u);
    c.budget -= 4;
L_00354428:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00354430u); set32(c.r[4], 0u + 160u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00354430u) [[unlikely]] return; }
L_00354430:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[20], c.r[16].w[0] << 2);  if (t) { goto L_0035444C; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00354448u); set32(c.r[6], 0u + 8u);  if (depth < kMaxDepth) unit_0025(c, 304u, depth + 1u); else { c.pc = 0x00196C90u; return; } if (c.pc != 0x00354448u) [[unlikely]] return; }
L_00354448:
    set32(c.r[20], c.r[16].w[0] << 2);
    c.budget -= 1;
L_0035444C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[3], c.r[18].w[0] + c.r[20].w[0]);
    set32(c.r[5], 0u + 10011u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00354460u); st32((c.r[3].w[0] + 596u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_002A(c, 5u, depth + 1u); else { c.pc = 0x001A80A0u; return; } if (c.pc != 0x00354460u) [[unlikely]] return; }
L_00354460:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00354470u); set32(c.r[5], 0u + 8u);  if (depth < kMaxDepth) unit_002A(c, 3u, depth + 1u); else { c.pc = 0x001A8060u; return; } if (c.pc != 0x00354470u) [[unlikely]] return; }
L_00354470:
    set32(c.r[3], c.r[18].w[0] + c.r[20].w[0]);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[3].w[0] + 596u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00354484u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 322u, depth + 1u); else { c.pc = 0x00196E30u; return; } if (c.pc != 0x00354484u) [[unlikely]] return; }
L_00354484:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00354428u | kUnwind; return; } goto L_00354428; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[25], ld32((c.r[18].w[0])));  if (t) { goto L_003544BC; } }
L_0035449C:
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[2].w[0] + 596u), 0u);
    c.r[2].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0035449Cu | kUnwind; return; } goto L_0035449C; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    c.budget -= 1;
L_003544BC:
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003544C8u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003544C8u) [[unlikely]] return; }
L_003544C8:
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003544D8u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003544D8u) [[unlikely]] return; }
L_003544D8:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 576u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[2].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_00354548; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], ld32((c.r[1].w[0] - 27872u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003544F8u); set32(c.r[5], 0u + 42u);  if (depth < kMaxDepth) unit_0051(c, 218u, depth + 1u); else { c.pc = 0x00245E10u; return; } if (c.pc != 0x003544F8u) [[unlikely]] return; }
L_003544F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00354500u); set32(c.r[4], 0u + 1328u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00354500u) [[unlikely]] return; }
L_00354500:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00354518; } }
    set32(c.r[5], c.r[18].w[0] + 180u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00354518u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0095(c, 232u, depth + 1u); else { c.pc = 0x00355E00u; return; } if (c.pc != 0x00354518u) [[unlikely]] return; }
L_00354518:
    st32((c.r[18].w[0] + 608u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[18].w[0] + 608u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 164u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00354530u); c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 576u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00354530u) [[unlikely]] return; }
L_00354530:
    set32(c.r[3], ld32((c.r[18].w[0] + 24u)));
    set32(c.r[2], 0u - 1u);
    st32((c.r[3].w[0] + 36u), 0u);
    st32((c.r[18].w[0] + 572u), c.r[2].w[0]);
    st16((c.r[18].w[0] + 576u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 6;
L_00354548:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_00354570:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 9;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003546A0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] + 28720u);
    set32(c.r[3], c.r[3].w[0] + 28808u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    st32((c.r[17].w[0] + 20u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + 28868u);
    st32((c.r[17].w[0] + 40u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 584u)));
    c.budget -= 12;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003545DC; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003545DC; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003545DCu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003545DCu) [[unlikely]] return; }
L_003545DC:
    st32((c.r[17].w[0] + 584u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 604u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00354604; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00354604; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00354604u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00354604u) [[unlikely]] return; }
L_00354604:
    st32((c.r[17].w[0] + 604u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 608u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0035462C; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0035462C; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0035462Cu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0035462Cu) [[unlikely]] return; }
L_0035462C:
    st32((c.r[17].w[0] + 608u), 0u);
    c.r[19].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_00354634:
    set32(c.r[2], c.r[19].w[0] << 2);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 596u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[18], c.r[2].w[0] + 596u);  if (t) { goto L_00354660; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00354660; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00354660u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00354660u) [[unlikely]] return; }
L_00354660:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.r[2].d[0] = c.r[19].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[18].w[0]), 0u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00354634u | kUnwind; return; } goto L_00354634; } }
    set32(c.r[4], c.r[17].w[0] + 624u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035467Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0095(c, 450u, depth + 1u); else { c.pc = 0x00357D60u; return; } if (c.pc != 0x0035467Cu) [[unlikely]] return; }
L_0035467C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00354688u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0091(c, 7u, depth + 1u); else { c.pc = 0x003440C0u; return; } if (c.pc != 0x00354688u) [[unlikely]] return; }
L_00354688:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003546A4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003546A0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x003546A0u) [[unlikely]] return; }
L_003546A0:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003546A4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003546C0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003546D8u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0091(c, 14u, depth + 1u); else { c.pc = 0x00344190u; return; } if (c.pc != 0x003546D8u) [[unlikely]] return; }
L_003546D8:
    set32(c.r[2], ld32((c.r[16].w[0] + 32u)));
    c.r[1].d[0] = c.r[2].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_00354798; } }
    set32(c.r[17], ld32((c.r[16].w[0] + 596u)));
    set32(c.r[5], 0u + 6u);
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00354700u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00354700u) [[unlikely]] return; }
L_00354700:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42F80000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42A40000u);
    st32((c.r[17].w[0] + 96u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    st32((c.r[17].w[0] + 100u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    set32(c.r[5], 0u + 7u);
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[17].w[0] + 104u), c.f[0]);
    st32((c.r[17].w[0] + 108u), c.r[2].w[0]);
    c.f[0] = ld32((c.r[1].w[0] - 7280u));
    st32((c.r[17].w[0] + 104u), c.f[0]);
    set32(c.r[17], ld32((c.r[16].w[0] + 600u)));
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 21;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00354754u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00354754u) [[unlikely]] return; }
L_00354754:
    set32(c.r[2], 0u + 393u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42F80000u);
    c.f[0] = c.r[2].w[0];
    st32((c.r[17].w[0] + 96u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[17].w[0] + 100u), c.f[0]);
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[17].w[0] + 104u), c.f[0]);
    st32((c.r[17].w[0] + 108u), c.r[2].w[0]);
    c.f[0] = ld32((c.r[1].w[0] - 7280u));
    st32((c.r[17].w[0] + 104u), c.f[0]);
    c.budget -= 17;
L_00354798:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 579u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], 0u + 141u);  if (t) { goto L_003547AC; } }
    st8((c.r[16].w[0] + 579u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], 0u + 193u);
    c.budget -= 2;
L_003547AC:
    set32(c.r[4], ld32((c.r[16].w[0] + 584u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003547C0u); c.r[5].d[0] = c.r[3].d[0] & 65535ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003547C0u) [[unlikely]] return; }
L_003547C0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    set32(c.r[2], ld32((c.r[16].w[0] + 584u)));
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003547E4u); st32((c.r[2].w[0] + 104u), c.f[0]);  if (depth < kMaxDepth) unit_0095(c, 192u, depth + 1u); else { c.pc = 0x003555C0u; return; } if (c.pc != 0x003547E4u) [[unlikely]] return; }
L_003547E4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00354800:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00354814u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0091(c, 17u, depth + 1u); else { c.pc = 0x003441D0u; return; } if (c.pc != 0x00354814u) [[unlikely]] return; }
L_00354814:
    set32(c.r[3], ld32((c.r[16].w[0] + 608u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00354828; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 24u)));
    st32((c.r[3].w[0] + 36u), 0u);
    c.budget -= 2;
L_00354828:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00354840:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], 0u + 1u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035485Cu); st8((c.r[4].w[0] + 176u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0091(c, 18u, depth + 1u); else { c.pc = 0x003441E0u; return; } if (c.pc != 0x0035485Cu) [[unlikely]] return; }
L_0035485C:
    set32(c.r[4], ld32((c.r[16].w[0] + 584u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00354870u); set32(c.r[5], 0u + 142u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00354870u) [[unlikely]] return; }
L_00354870:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    set32(c.r[3], ld32((c.r[16].w[0] + 584u)));
    c.r[4].d[0] = c.r[4].d[0] | 65535ull;
    c.f[0] = c.r[4].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[3].w[0] + 104u), c.f[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 32u)));
    c.r[1].d[0] = c.r[3].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_003548D0; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 592u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003548D0; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 596u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003548BCu); set32(c.r[5], 0u + 10u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003548BCu) [[unlikely]] return; }
L_003548BC:
    set32(c.r[4], ld32((c.r[16].w[0] + 600u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003548D0u); set32(c.r[5], 0u + 11u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003548D0u) [[unlikely]] return; }
L_003548D0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003548E0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], 0u + 1u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st8((c.r[4].w[0] + 176u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00354900u); st8((c.r[4].w[0] + 578u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0091(c, 18u, depth + 1u); else { c.pc = 0x003441E0u; return; } if (c.pc != 0x00354900u) [[unlikely]] return; }
L_00354900:
    set32(c.r[4], ld32((c.r[16].w[0] + 584u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00354914u); set32(c.r[5], 0u + 194u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00354914u) [[unlikely]] return; }
L_00354914:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    set32(c.r[3], ld32((c.r[16].w[0] + 584u)));
    c.r[4].d[0] = c.r[4].d[0] | 65535ull;
    c.f[0] = c.r[4].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[3].w[0] + 104u), c.f[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 32u)));
    c.r[1].d[0] = c.r[3].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_00354968; } }
L_00354940:
    set32(c.r[4], ld32((c.r[16].w[0] + 596u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00354954u); set32(c.r[5], 0u + 10u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00354954u) [[unlikely]] return; }
L_00354954:
    set32(c.r[4], ld32((c.r[16].w[0] + 600u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00354968u); set32(c.r[5], 0u + 11u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00354968u) [[unlikely]] return; }
L_00354968:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00354980:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 32u)));
    c.r[1].d[0] = c.r[3].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_003549E0; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[5].d[0];  if (t) { goto L_003549E0; } }
    set32(c.r[2], ld32((c.r[5].w[0] + 28u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003549CC; } }
    set32(c.r[4], ld32((c.r[4].w[0] + 596u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003549C4u); set32(c.r[5], 0u + 2u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003549C4u) [[unlikely]] return; }
L_003549C4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_003549E4; } }
L_003549CC:
    set32(c.r[4], ld32((c.r[4].w[0] + 600u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003549E0u); set32(c.r[5], 0u + 3u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003549E0u) [[unlikely]] return; }
L_003549E0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_003549E4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003549F0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != c.r[5].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00354BC0; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 1112u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[16].w[0] + 180u);  if (t) { goto L_00354AB0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00354A1Cu);  if (depth < kMaxDepth) unit_009B(c, 390u, depth + 1u); else { c.pc = 0x0036F200u; return; } if (c.pc != 0x00354A1Cu) [[unlikely]] return; }
L_00354A1C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00354A44; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 24u)));
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 186u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 180u)));
    set32(c.r[7], ld32((c.r[2].w[0] + 24u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00354A3Cu); c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 184u)));  if (depth < kMaxDepth) unit_009C(c, 6u, depth + 1u); else { c.pc = 0x00370030u; return; } if (c.pc != 0x00354A3Cu) [[unlikely]] return; }
L_00354A3C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[2].w[0] << 1);  if (t) { goto L_00354A60; } }
L_00354A44:
    set32(c.r[2], ld32((c.r[16].w[0] + 24u)));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 184u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 180u)));
    set32(c.r[6], ld32((c.r[2].w[0] + 24u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00354A5Cu); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_009C(c, 6u, depth + 1u); else { c.pc = 0x00370030u; return; } if (c.pc != 0x00354A5Cu) [[unlikely]] return; }
L_00354A5C:
    set32(c.r[3], c.r[2].w[0] << 1);
    c.budget -= 1;
L_00354A60:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 1104u)));
    set32(c.r[5], c.r[3].w[0] + c.r[16].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 216u)));
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 216u)));
    st16((c.r[5].w[0] + 216u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[16].w[0] + 1104u)));
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00354A94u); st16((c.r[2].w[0] + 216u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_0095(c, 185u, depth + 1u); else { c.pc = 0x003554E0u; return; } if (c.pc != 0x00354A94u) [[unlikely]] return; }
L_00354A94:
    set32(c.r[2], 0u - 1u);
    set32(c.r[4], 0u + 30u);
    st32((c.r[16].w[0] + 1104u), c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00354AA8u); st8((c.r[16].w[0] + 1112u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0076(c, 191u, depth + 1u); else { c.pc = 0x002D9970u; return; } if (c.pc != 0x00354AA8u) [[unlikely]] return; }
L_00354AA8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_00354BC4; } }
L_00354AB0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00354AB8u);  if (depth < kMaxDepth) unit_0010(c, 59u, depth + 1u); else { c.pc = 0x00140BF0u; return; } if (c.pc != 0x00354AB8u) [[unlikely]] return; }
L_00354AB8:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 3840u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00354ACCu); st32((c.r[29].w[0] + 44u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x00354ACCu) [[unlikely]] return; }
L_00354ACC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00354AD4u); set32(c.r[4], c.r[16].w[0] + 180u);  if (depth < kMaxDepth) unit_009B(c, 393u, depth + 1u); else { c.pc = 0x0036F2C0u; return; } if (c.pc != 0x00354AD4u) [[unlikely]] return; }
L_00354AD4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[16].w[0] + 180u);  if (t) { goto L_00354AF0; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00354AE8u); set32(c.r[4], ld32((c.r[1].w[0] - 27872u)));  if (depth < kMaxDepth) unit_0051(c, 228u, depth + 1u); else { c.pc = 0x00246050u; return; } if (c.pc != 0x00354AE8u) [[unlikely]] return; }
L_00354AE8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u + 1328u);  if (t) { goto L_00354B4C; } }
L_00354AF0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00354AF8u);  if (depth < kMaxDepth) unit_009B(c, 390u, depth + 1u); else { c.pc = 0x0036F200u; return; } if (c.pc != 0x00354AF8u) [[unlikely]] return; }
L_00354AF8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00354B20; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 24u)));
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 186u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 180u)));
    set32(c.r[7], ld32((c.r[2].w[0] + 24u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00354B18u); c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 184u)));  if (depth < kMaxDepth) unit_009B(c, 416u, depth + 1u); else { c.pc = 0x0036FC20u; return; } if (c.pc != 0x00354B18u) [[unlikely]] return; }
L_00354B18:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00354B38; } }
L_00354B20:
    set32(c.r[2], ld32((c.r[16].w[0] + 24u)));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 184u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 180u)));
    set32(c.r[6], ld32((c.r[2].w[0] + 24u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00354B38u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_009B(c, 416u, depth + 1u); else { c.pc = 0x0036FC20u; return; } if (c.pc != 0x00354B38u) [[unlikely]] return; }
L_00354B38:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], ld32((c.r[1].w[0] - 27872u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00354B48u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0051(c, 218u, depth + 1u); else { c.pc = 0x00245E10u; return; } if (c.pc != 0x00354B48u) [[unlikely]] return; }
L_00354B48:
    set32(c.r[4], 0u + 1328u);
    c.budget -= 1;
L_00354B4C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00354B54u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00354B54u) [[unlikely]] return; }
L_00354B54:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00354B74; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 24u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[16].w[0] + 180u);
    set32(c.r[7], ld32((c.r[3].w[0] + 24u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00354B74u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0095(c, 232u, depth + 1u); else { c.pc = 0x00355E00u; return; } if (c.pc != 0x00354B74u) [[unlikely]] return; }
L_00354B74:
    st32((c.r[16].w[0] + 608u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 32u)));
    c.r[1].d[0] = c.r[2].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_00354BB0; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 596u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00354B9Cu); set32(c.r[5], 0u + 10u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00354B9Cu) [[unlikely]] return; }
L_00354B9C:
    set32(c.r[4], ld32((c.r[16].w[0] + 600u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00354BB0u); set32(c.r[5], 0u + 11u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00354BB0u) [[unlikely]] return; }
L_00354BB0:
    set32(c.r[2], ld32((c.r[16].w[0] + 24u)));
    st32((c.r[2].w[0] + 36u), 0u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00354BC0u); set32(c.r[4], ld32((c.r[29].w[0] + 44u)));  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x00354BC0u) [[unlikely]] return; }
L_00354BC0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_00354BC4:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00354BD0:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    c.budget -= 12;
    { const bool t = c.r[3].d[0] != c.r[5].d[0]; c.r[22].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00354E40; } }
    c.r[3].d[0] = ld8((c.r[22].w[0] + 1112u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00354E40; } }
    set32(c.r[3], ld32((c.r[22].w[0] + 32u)));
    c.r[1].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[4], c.r[22].w[0] + 180u);  if (t) { goto L_00354E40; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00354C24u);  if (depth < kMaxDepth) unit_009B(c, 393u, depth + 1u); else { c.pc = 0x0036F2C0u; return; } if (c.pc != 0x00354C24u) [[unlikely]] return; }
L_00354C24:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[22].w[0] + 180u);  if (t) { goto L_00354E40; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00354C34u);  if (depth < kMaxDepth) unit_009B(c, 390u, depth + 1u); else { c.pc = 0x0036F200u; return; } if (c.pc != 0x00354C34u) [[unlikely]] return; }
L_00354C34:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00354C78; } }
    set32(c.r[2], ld32((c.r[22].w[0] + 24u)));
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[22].w[0] + 186u)));
    set32(c.r[4], ld32((c.r[22].w[0] + 180u)));
    set32(c.r[7], ld32((c.r[2].w[0] + 24u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00354C54u); c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[22].w[0] + 184u)));  if (depth < kMaxDepth) unit_009C(c, 6u, depth + 1u); else { c.pc = 0x00370030u; return; } if (c.pc != 0x00354C54u) [[unlikely]] return; }
L_00354C54:
    c.r[21].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[22].w[0] + 24u)));
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[22].w[0] + 186u)));
    set32(c.r[4], ld32((c.r[22].w[0] + 180u)));
    set32(c.r[7], ld32((c.r[2].w[0] + 24u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00354C70u); c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[22].w[0] + 184u)));  if (depth < kMaxDepth) unit_009B(c, 416u, depth + 1u); else { c.pc = 0x0036FC20u; return; } if (c.pc != 0x00354C70u) [[unlikely]] return; }
L_00354C70:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_00354CB0; } }
L_00354C78:
    set32(c.r[2], ld32((c.r[22].w[0] + 24u)));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[22].w[0] + 184u)));
    set32(c.r[4], ld32((c.r[22].w[0] + 180u)));
    set32(c.r[6], ld32((c.r[2].w[0] + 24u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00354C90u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_009C(c, 6u, depth + 1u); else { c.pc = 0x00370030u; return; } if (c.pc != 0x00354C90u) [[unlikely]] return; }
L_00354C90:
    c.r[21].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[22].w[0] + 184u)));
    set32(c.r[2], ld32((c.r[22].w[0] + 24u)));
    set32(c.r[4], ld32((c.r[22].w[0] + 180u)));
    set32(c.r[6], ld32((c.r[2].w[0] + 24u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00354CACu); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_009B(c, 416u, depth + 1u); else { c.pc = 0x0036FC20u; return; } if (c.pc != 0x00354CACu) [[unlikely]] return; }
L_00354CAC:
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_00354CB0:
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    c.r[20].d[0] = c.r[3].d[0] << (c.r[2].w[0] & 63u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00354CC0u); c.r[5].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0095(c, 181u, depth + 1u); else { c.pc = 0x00355430u; return; } if (c.pc != 0x00354CC0u) [[unlikely]] return; }
L_00354CC0:
    set32(c.r[3], ld32((c.r[2].w[0] + 52u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[19].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00354E40; } }
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_00354DB8; } }
L_00354CD8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00354CE0u); set32(c.r[4], c.r[22].w[0] + 180u);  if (depth < kMaxDepth) unit_009B(c, 390u, depth + 1u); else { c.pc = 0x0036F200u; return; } if (c.pc != 0x00354CE0u) [[unlikely]] return; }
L_00354CE0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00354D1C; } }
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[22].w[0] + 184u)));
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[22].w[0] + 186u)));
    set32(c.r[4], ld32((c.r[22].w[0] + 180u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00354CFCu); c.r[7].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_009C(c, 6u, depth + 1u); else { c.pc = 0x00370030u; return; } if (c.pc != 0x00354CFCu) [[unlikely]] return; }
L_00354CFC:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[22].w[0] + 184u)));
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[22].w[0] + 186u)));
    set32(c.r[4], ld32((c.r[22].w[0] + 180u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00354D14u); c.r[7].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_009B(c, 416u, depth + 1u); else { c.pc = 0x0036FC20u; return; } if (c.pc != 0x00354D14u) [[unlikely]] return; }
L_00354D14:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_00354D4C; } }
L_00354D1C:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[22].w[0] + 184u)));
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[22].w[0] + 180u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00354D30u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_009C(c, 6u, depth + 1u); else { c.pc = 0x00370030u; return; } if (c.pc != 0x00354D30u) [[unlikely]] return; }
L_00354D30:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[22].w[0] + 184u)));
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[22].w[0] + 180u)));
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00354D48u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_009B(c, 416u, depth + 1u); else { c.pc = 0x0036FC20u; return; } if (c.pc != 0x00354D48u) [[unlikely]] return; }
L_00354D48:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_00354D4C:
    set32(c.r[3], 0u + 1u);
    c.r[18].d[0] = c.r[3].d[0] << (c.r[2].w[0] & 63u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00354D5Cu); c.r[4].d[0] = c.r[22].d[0] + 0ull;  if (depth < kMaxDepth) unit_0095(c, 181u, depth + 1u); else { c.pc = 0x00355430u; return; } if (c.pc != 0x00354D5Cu) [[unlikely]] return; }
L_00354D5C:
    c.r[3].d[0] = ld64((c.r[2].w[0]));
    c.r[3].d[0] = c.r[3].d[0] & c.r[20].d[0];
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00354D88; } }
    c.r[3].d[0] = ld64((c.r[19].w[0]));
    c.r[3].d[0] = c.r[3].d[0] & c.r[18].d[0];
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00354D88; } }
    set32(c.r[2], ld32((c.r[2].w[0] + 52u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00354DA0; } }
L_00354D88:
    set32(c.r[2], ld32((c.r[22].w[0] + 28u)));
    set32(c.r[3], c.r[16].w[0] << 3);
    set32(c.r[4], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_00354DB4; } }
L_00354DA0:
    set32(c.r[2], ld32((c.r[22].w[0] + 28u)));
    set32(c.r[3], c.r[16].w[0] << 3);
    set32(c.r[17], c.r[17].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(0u));
    c.budget -= 5;
L_00354DB4:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_00354DB8:
    set32(c.r[3], ld32((c.r[22].w[0] + 32u)));
    c.r[2].d[0] = c.r[16].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].d[0] = c.r[17].sd[0] < 2ll ? 1ull : 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00354CD8u | kUnwind; return; } goto L_00354CD8; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] != 0ull; c.r[4].d[0] = c.r[22].d[0] + 0ull;  if (t) { goto L_00354E30; } }
    set32(c.r[4], ld32((c.r[22].w[0] + 24u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[5], c.r[2].w[0] + 1u);
    c.budget -= 5;
    { const bool t = c.r[5].sd[0] >= 0; c.r[2].d[0] = c.r[5].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;  if (t) { goto L_00354DEC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], c.r[5].w[0] + c.r[3].w[0]);  if (t) { goto L_00354DFC; } }
L_00354DEC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00354DFC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], c.r[5].w[0] - c.r[3].w[0]);  if (t) { goto L_00354DFC; } }
L_00354DFC:
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00354E0Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00354E0Cu) [[unlikely]] return; }
L_00354E0C:
    set32(c.r[2], 0u + 1u);
    set32(c.r[4], 0u + 2u);
    st8((c.r[22].w[0] + 1112u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00354E20u); st32((c.r[22].w[0] + 1104u), c.r[21].w[0]);  if (depth < kMaxDepth) unit_0076(c, 191u, depth + 1u); else { c.pc = 0x002D9970u; return; } if (c.pc != 0x00354E20u) [[unlikely]] return; }
L_00354E20:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00354E28u); set32(c.r[4], 0u + 400u);  if (depth < kMaxDepth) unit_002C(c, 36u, depth + 1u); else { c.pc = 0x001B0690u; return; } if (c.pc != 0x00354E28u) [[unlikely]] return; }
L_00354E28:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));  if (t) { goto L_00354E44; } }
L_00354E30:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00354E38u);  if (depth < kMaxDepth) unit_0095(c, 185u, depth + 1u); else { c.pc = 0x003554E0u; return; } if (c.pc != 0x00354E38u) [[unlikely]] return; }
L_00354E38:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00354E40u); set32(c.r[4], 0u + 403u);  if (depth < kMaxDepth) unit_002C(c, 36u, depth + 1u); else { c.pc = 0x001B0690u; return; } if (c.pc != 0x00354E40u) [[unlikely]] return; }
L_00354E40:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    c.budget -= 1;
L_00354E44:
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_00354E70:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != c.r[17].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00354FE8; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 1112u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[4], c.r[16].w[0] + 180u);  if (t) { goto L_00354FE8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00354EA4u);  if (depth < kMaxDepth) unit_009B(c, 390u, depth + 1u); else { c.pc = 0x0036F200u; return; } if (c.pc != 0x00354EA4u) [[unlikely]] return; }
L_00354EA4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00354EC8; } }
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 184u)));
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 186u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 180u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00354EC0u); set32(c.r[7], ld32((c.r[17].w[0] + 24u)));  if (depth < kMaxDepth) unit_009C(c, 6u, depth + 1u); else { c.pc = 0x00370030u; return; } if (c.pc != 0x00354EC0u) [[unlikely]] return; }
L_00354EC0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00354EE0; } }
L_00354EC8:
    set32(c.r[6], ld32((c.r[17].w[0] + 24u)));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 184u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 180u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00354EDCu); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_009C(c, 6u, depth + 1u); else { c.pc = 0x00370030u; return; } if (c.pc != 0x00354EDCu) [[unlikely]] return; }
L_00354EDC:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00354EE0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00354EECu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0095(c, 181u, depth + 1u); else { c.pc = 0x00355430u; return; } if (c.pc != 0x00354EECu) [[unlikely]] return; }
L_00354EEC:
    set32(c.r[2], ld32((c.r[2].w[0] + 52u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u + 403u);  if (t) { goto L_00354FE0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00354F00u); set32(c.r[4], c.r[16].w[0] + 180u);  if (depth < kMaxDepth) unit_009B(c, 392u, depth + 1u); else { c.pc = 0x0036F290u; return; } if (c.pc != 0x00354F00u) [[unlikely]] return; }
L_00354F00:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00354F28; } }
    set32(c.r[2], 0u + 1u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    st8((c.r[16].w[0] + 1113u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00354F1Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0095(c, 181u, depth + 1u); else { c.pc = 0x00355430u; return; } if (c.pc != 0x00354F1Cu) [[unlikely]] return; }
L_00354F1C:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 56u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 1108u), c.r[2].w[0]);  if (t) { goto L_00354FB8; } }
L_00354F28:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00354F30u);  if (depth < kMaxDepth) unit_0010(c, 59u, depth + 1u); else { c.pc = 0x00140BF0u; return; } if (c.pc != 0x00354F30u) [[unlikely]] return; }
L_00354F30:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 3840u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00354F44u); st32((c.r[29].w[0] + 60u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x00354F44u) [[unlikely]] return; }
L_00354F44:
    set32(c.r[2], 0u + 1u);
    set32(c.r[4], 0u + 1328u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00354F54u); st32((c.r[16].w[0] + 592u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00354F54u) [[unlikely]] return; }
L_00354F54:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00354F74; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 24u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[16].w[0] + 180u);
    set32(c.r[7], ld32((c.r[3].w[0] + 24u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00354F74u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0095(c, 232u, depth + 1u); else { c.pc = 0x00355E00u; return; } if (c.pc != 0x00354F74u) [[unlikely]] return; }
L_00354F74:
    st32((c.r[16].w[0] + 608u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 32u)));
    c.r[1].d[0] = c.r[2].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_00354FB0; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 596u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00354F9Cu); set32(c.r[5], 0u + 10u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00354F9Cu) [[unlikely]] return; }
L_00354F9C:
    set32(c.r[4], ld32((c.r[16].w[0] + 600u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00354FB0u); set32(c.r[5], 0u + 11u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00354FB0u) [[unlikely]] return; }
L_00354FB0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00354FB8u); set32(c.r[4], ld32((c.r[29].w[0] + 60u)));  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x00354FB8u) [[unlikely]] return; }
L_00354FB8:
    set32(c.r[4], 0u + 400u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00354FC4u); st8((c.r[16].w[0] + 176u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_002C(c, 36u, depth + 1u); else { c.pc = 0x001B0690u; return; } if (c.pc != 0x00354FC4u) [[unlikely]] return; }
L_00354FC4:
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00354FD4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00354FD4u) [[unlikely]] return; }
L_00354FD4:
    set32(c.r[3], ld32((c.r[16].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 36u), 0u);  if (t) { goto L_00354FE8; } }
L_00354FE0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00354FE8u);  if (depth < kMaxDepth) unit_002C(c, 36u, depth + 1u); else { c.pc = 0x001B0690u; return; } if (c.pc != 0x00354FE8u) [[unlikely]] return; }
L_00354FE8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00355000:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[5].d[0];  if (t) { goto L_0035504C; } }
    c.r[2].d[0] = ld8((c.r[4].w[0] + 1112u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_0035503C; } }
    st32((c.r[4].w[0] + 1104u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035502Cu); st8((c.r[4].w[0] + 1112u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0095(c, 185u, depth + 1u); else { c.pc = 0x003554E0u; return; } if (c.pc != 0x0035502Cu) [[unlikely]] return; }
L_0035502C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00355034u); set32(c.r[4], 0u + 30u);  if (depth < kMaxDepth) unit_0076(c, 191u, depth + 1u); else { c.pc = 0x002D9970u; return; } if (c.pc != 0x00355034u) [[unlikely]] return; }
L_00355034:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_00355050; } }
L_0035503C:
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 36u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0035504Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0035504Cu) [[unlikely]] return; }
L_0035504C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_00355050:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00355060:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 608u)));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; c.r[18].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003550EC; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[16], ld32((c.r[1].w[0] + 25376u)));
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_003550F0; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 44u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003550A0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003550A0u) [[unlikely]] return; }
L_003550A0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00355378; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003550B0u);  if (depth < kMaxDepth) unit_001A(c, 231u, depth + 1u); else { c.pc = 0x0016A360u; return; } if (c.pc != 0x003550B0u) [[unlikely]] return; }
L_003550B0:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_003550D4; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 36u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003550CCu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003550CCu) [[unlikely]] return; }
L_003550CC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003550DC; } }
L_003550D4:
    set32(c.r[2], ld32((c.r[18].w[0] + 24u)));
    st32((c.r[2].w[0] + 36u), c.r[3].w[0]);
    c.budget -= 2;
L_003550DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003550E4u);  if (depth < kMaxDepth) unit_001A(c, 271u, depth + 1u); else { c.pc = 0x0016A9E0u; return; } if (c.pc != 0x003550E4u) [[unlikely]] return; }
L_003550E4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_0035537C; } }
L_003550EC:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_003550F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003550F8u);  if (depth < kMaxDepth) unit_0091(c, 30u, depth + 1u); else { c.pc = 0x00344310u; return; } if (c.pc != 0x003550F8u) [[unlikely]] return; }
L_003550F8:
    set32(c.r[4], ld32((c.r[18].w[0] + 608u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00355378; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 44u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00355114u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00355114u) [[unlikely]] return; }
L_00355114:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00355310; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 608u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00355130u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00355130u) [[unlikely]] return; }
L_00355130:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00355294; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 608u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 1317u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[18].w[0] + 180u);  if (t) { goto L_00355194; } }
    set32(c.r[2], 0u + 1u);
    st8((c.r[18].w[0] + 1113u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[18].w[0] + 608u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 1320u)));
    st32((c.r[18].w[0] + 1108u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[18].w[0] + 608u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 48u)));
    c.budget -= 10;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00355170u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00355170u) [[unlikely]] return; }
L_00355170:
    st16((c.r[18].w[0] + 576u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 1u);
    st8((c.r[18].w[0] + 176u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0035518Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0035518Cu) [[unlikely]] return; }
L_0035518C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00355378; } }
L_00355194:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035519Cu);  if (depth < kMaxDepth) unit_009B(c, 390u, depth + 1u); else { c.pc = 0x0036F200u; return; } if (c.pc != 0x0035519Cu) [[unlikely]] return; }
L_0035519C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003551C4; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 24u)));
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 186u)));
    set32(c.r[4], ld32((c.r[18].w[0] + 180u)));
    set32(c.r[7], ld32((c.r[2].w[0] + 24u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003551BCu); c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 184u)));  if (depth < kMaxDepth) unit_009C(c, 6u, depth + 1u); else { c.pc = 0x00370030u; return; } if (c.pc != 0x003551BCu) [[unlikely]] return; }
L_003551BC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[18].w[0] + 608u)));  if (t) { goto L_003551E0; } }
L_003551C4:
    set32(c.r[2], ld32((c.r[18].w[0] + 24u)));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 184u)));
    set32(c.r[4], ld32((c.r[18].w[0] + 180u)));
    set32(c.r[6], ld32((c.r[2].w[0] + 24u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003551DCu); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_009C(c, 6u, depth + 1u); else { c.pc = 0x00370030u; return; } if (c.pc != 0x003551DCu) [[unlikely]] return; }
L_003551DC:
    set32(c.r[4], ld32((c.r[18].w[0] + 608u)));
    c.budget -= 1;
L_003551E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003551E8u); c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0095(c, 365u, depth + 1u); else { c.pc = 0x00356D40u; return; } if (c.pc != 0x003551E8u) [[unlikely]] return; }
L_003551E8:
    c.r[16].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 56u)));
    set32(c.r[2], ld32((c.r[18].w[0] + 608u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 1316u));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[18].w[0] + 200u);  if (t) { goto L_00355210; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00355204u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_009C(c, 152u, depth + 1u); else { c.pc = 0x00370A40u; return; } if (c.pc != 0x00355204u) [[unlikely]] return; }
L_00355204:
    c.r[16].d[0] = c.r[2].d[0] << 48;
    c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 48);
    set32(c.r[4], c.r[18].w[0] + 200u);
    c.budget -= 3;
L_00355210:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035521Cu); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_009C(c, 153u, depth + 1u); else { c.pc = 0x00370A60u; return; } if (c.pc != 0x0035521Cu) [[unlikely]] return; }
L_0035521C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43500000u);
    set32(c.r[3], ld32((c.r[1].w[0] + 28320u)));
    c.r[5].d[0] = c.r[2].d[0] | 21071ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00355234u); set32(c.r[4], c.r[3].w[0] + 436u);  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x00355234u) [[unlikely]] return; }
L_00355234:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_00355240; } }
    set32(c.r[5], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 1;
L_00355240:
    set32(c.r[3], c.r[17].w[0] << 1);
    set32(c.r[2], 0u + 109u);
    set32(c.r[4], c.r[3].w[0] + c.r[18].w[0]);
    st16((c.r[4].w[0] + 216u), static_cast<std::uint16_t>(c.r[16].w[0]));
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    st16((c.r[3].w[0] + 48u), static_cast<std::uint16_t>(c.r[16].w[0]));
    set32(c.r[4], c.r[4].w[0] + 216u);
    c.budget -= 9;
    { const bool t = c.r[17].d[0] != c.r[2].d[0]; set32(c.r[3], c.r[3].w[0] + 48u);  if (t) { goto L_00355294; } }
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.r[2].d[0] = c.r[2].sd[0] < 7000ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 255u);  if (t) { goto L_00355284; } }
    st8((c.r[18].w[0] + 558u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[5].w[0] + 390u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00355294; } }
L_00355284:
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(0u));
    st16((c.r[3].w[0]), static_cast<std::uint16_t>(0u));
    st8((c.r[18].w[0] + 558u), static_cast<std::uint8_t>(c.r[16].w[0]));
    st8((c.r[5].w[0] + 390u), static_cast<std::uint8_t>(c.r[16].w[0]));
    c.budget -= 4;
L_00355294:
    set32(c.r[2], ld32((c.r[18].w[0] + 32u)));
    c.r[1].d[0] = c.r[2].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_003552CC; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 596u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003552B8u); set32(c.r[5], 0u + 6u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003552B8u) [[unlikely]] return; }
L_003552B8:
    set32(c.r[4], ld32((c.r[18].w[0] + 600u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003552CCu); set32(c.r[5], 0u + 7u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003552CCu) [[unlikely]] return; }
L_003552CC:
    set32(c.r[4], ld32((c.r[18].w[0] + 608u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003552F0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003552F0; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003552F0u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003552F0u) [[unlikely]] return; }
L_003552F0:
    st32((c.r[18].w[0] + 608u), 0u);
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], ld32((c.r[18].w[0] + 24u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00355308u); st32((c.r[2].w[0] + 36u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_0095(c, 192u, depth + 1u); else { c.pc = 0x003555C0u; return; } if (c.pc != 0x00355308u) [[unlikely]] return; }
L_00355308:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00355378; } }
L_00355310:
    set32(c.r[4], ld32((c.r[18].w[0] + 608u)));
    set32(c.r[3], 0u + 1u);
    set32(c.r[4], ld32((c.r[4].w[0] + 36u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00355378; } }
    set32(c.r[2], 0u + 2u);
    st32((c.r[18].w[0] + 592u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 32u)));
    c.r[1].d[0] = c.r[2].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_00355364; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 596u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00355350u); set32(c.r[5], 0u + 10u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00355350u) [[unlikely]] return; }
L_00355350:
    set32(c.r[4], ld32((c.r[18].w[0] + 600u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00355364u); set32(c.r[5], 0u + 11u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00355364u) [[unlikely]] return; }
L_00355364:
    st8((c.r[18].w[0] + 176u), static_cast<std::uint8_t>(0u));
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00355378u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00355378u) [[unlikely]] return; }
L_00355378:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_0035537C:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00355390:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 608u)));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00355420; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 36u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_003553D4; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 44u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003553CCu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003553CCu) [[unlikely]] return; }
L_003553CC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00355420; } }
L_003553D4:
    set32(c.r[2], ld32((c.r[16].w[0] + 592u)));
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[5].d[0];  if (t) { goto L_0035540C; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 608u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00355408; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00355408; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00355408u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00355408u) [[unlikely]] return; }
L_00355408:
    st32((c.r[16].w[0] + 608u), 0u);
    c.budget -= 1;
L_0035540C:
    st32((c.r[16].w[0] + 592u), 0u);
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00355420u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00355420u) [[unlikely]] return; }
L_00355420:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00355430:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[2], 0u + 109u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 8;
    { const bool t = c.r[16].d[0] != c.r[2].d[0]; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00355498; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 434u)));
    c.r[1].d[0] = c.r[2].sd[0] < 7000ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[2], c.r[16].w[0] << 1);  if (t) { goto L_0035549C; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], ld32((c.r[1].w[0] - 27872u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00355470u); c.r[6].d[0] = ld8((c.r[17].w[0] + 558u));  if (depth < kMaxDepth) unit_0051(c, 239u, depth + 1u); else { c.pc = 0x00246330u; return; } if (c.pc != 0x00355470u) [[unlikely]] return; }
L_00355470:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003554B4; } }
    st8((c.r[17].w[0] + 558u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[6].d[0] = ld8((c.r[17].w[0] + 558u));
    set32(c.r[4], ld32((c.r[1].w[0] - 27872u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00355490u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0051(c, 239u, depth + 1u); else { c.pc = 0x00246330u; return; } if (c.pc != 0x00355490u) [[unlikely]] return; }
L_00355490:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003554B4; } }
L_00355498:
    set32(c.r[2], c.r[16].w[0] << 1);
    c.budget -= 1;
L_0035549C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[4], ld32((c.r[1].w[0] - 27872u)));
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 216u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003554B4u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0051(c, 239u, depth + 1u); else { c.pc = 0x00246330u; return; } if (c.pc != 0x003554B4u) [[unlikely]] return; }
L_003554B4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003554C4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_003554CC; } }
L_003554C4:
    c.r[2].d[0] = 0ull + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 2;
L_003554CC:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003554E0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_00355594; } }
L_003554FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00355504u); set32(c.r[4], c.r[17].w[0] + 180u);  if (depth < kMaxDepth) unit_009B(c, 390u, depth + 1u); else { c.pc = 0x0036F200u; return; } if (c.pc != 0x00355504u) [[unlikely]] return; }
L_00355504:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00355528; } }
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 184u)));
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 186u)));
    set32(c.r[4], ld32((c.r[17].w[0] + 180u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00355520u); c.r[7].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_009C(c, 6u, depth + 1u); else { c.pc = 0x00370030u; return; } if (c.pc != 0x00355520u) [[unlikely]] return; }
L_00355520:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00355540; } }
L_00355528:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 184u)));
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[17].w[0] + 180u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035553Cu); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_009C(c, 6u, depth + 1u); else { c.pc = 0x00370030u; return; } if (c.pc != 0x0035553Cu) [[unlikely]] return; }
L_0035553C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00355540:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00355548u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0095(c, 181u, depth + 1u); else { c.pc = 0x00355430u; return; } if (c.pc != 0x00355548u) [[unlikely]] return; }
L_00355548:
    set32(c.r[3], ld32((c.r[2].w[0] + 52u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00355580; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00355560u); set32(c.r[4], ld32((c.r[1].w[0] - 27872u)));  if (depth < kMaxDepth) unit_0051(c, 247u, depth + 1u); else { c.pc = 0x00246570u; return; } if (c.pc != 0x00355560u) [[unlikely]] return; }
L_00355560:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00355580; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 28u)));
    set32(c.r[4], c.r[16].w[0] << 3);
    set32(c.r[5], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));  if (t) { goto L_00355590; } }
L_00355580:
    set32(c.r[3], ld32((c.r[17].w[0] + 28u)));
    set32(c.r[4], c.r[16].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(0u));
    c.budget -= 4;
L_00355590:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_00355594:
    set32(c.r[3], ld32((c.r[17].w[0] + 32u)));
    c.r[3].d[0] = c.r[16].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003554FCu | kUnwind; return; } goto L_003554FC; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003555C0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003555D8u); set32(c.r[4], c.r[16].w[0] + 180u);  if (depth < kMaxDepth) unit_009B(c, 393u, depth + 1u); else { c.pc = 0x0036F2C0u; return; } if (c.pc != 0x003555D8u) [[unlikely]] return; }
L_003555D8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], 0u + 19u);  if (t) { goto L_00355610; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 32u)));
    c.r[1].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0035560C; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 608u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0035560C; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 180u)));
    set32(c.r[2], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[4], 0u + 30u);  if (t) { goto L_00355620; } }
L_0035560C:
    set32(c.r[4], 0u + 19u);
    c.budget -= 1;
L_00355610:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00355618u);  if (depth < kMaxDepth) unit_0076(c, 191u, depth + 1u); else { c.pc = 0x002D9970u; return; } if (c.pc != 0x00355618u) [[unlikely]] return; }
L_00355618:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_0035562C; } }
L_00355620:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00355628u);  if (depth < kMaxDepth) unit_0076(c, 191u, depth + 1u); else { c.pc = 0x002D9970u; return; } if (c.pc != 0x00355628u) [[unlikely]] return; }
L_00355628:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_0035562C:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00355640:
    set32(c.r[29], c.r[29].w[0] - 240u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    set32(c.r[3], 0u + 830u);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[1].w[0] + 26392u)));
    set32(c.r[4], ld32((c.r[4].w[0] + 188u)));
    set32(c.r[20], ld32((c.r[5].w[0] + 440u)));
    set32(c.r[19], ld32((c.r[5].w[0] + 444u)));
    c.budget -= 20;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[6], c.r[5].w[0] + 32u);  if (t) { goto L_00355750; } }
    set32(c.r[16], ld32((c.r[6].w[0] + 192u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035569Cu); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x0035569Cu) [[unlikely]] return; }
L_0035569C:
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F400000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[16].w[0] + 48u), c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0] + 4u)));
    st32((c.r[16].w[0] + 52u), c.r[5].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    st32((c.r[16].w[0] + 56u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[21].w[0] + 128u)));
    c.f[0] = ld32((c.r[2].w[0] + 12u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    st32((c.r[16].w[0] + 60u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[21].w[0] + 128u)));
    c.f[0] = ld32((c.r[2].w[0] + 12u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    st32((c.r[16].w[0] + 300u), c.r[2].w[0]);
    c.f[0] = ld32((c.r[1].w[0] - 7288u));
    st32((c.r[16].w[0] + 16u), c.f[0]);
    st32((c.r[16].w[0] + 20u), c.r[4].w[0]);
    st32((c.r[16].w[0] + 24u), c.r[3].w[0]);
    c.budget -= 27;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00355708u); set32(c.r[4], ld32((c.r[21].w[0] + 188u)));  if (depth < kMaxDepth) unit_000B(c, 461u, depth + 1u); else { c.pc = 0x0012FD60u; return; } if (c.pc != 0x00355708u) [[unlikely]] return; }
L_00355708:
    st32((c.r[16].w[0] + 352u), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42140000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41800000u);
    st32((c.r[16].w[0] + 356u), 0u);
    c.f[12] = c.r[2].w[0];
    set32(c.r[25], ld32((c.r[16].w[0] + 176u)));
    c.f[13] = c.r[3].w[0];
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.f[0] = c.r[2].w[0];
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 14;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00355740u); c.f[14] = fp::cvt_s_w(c.f[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00355740u) [[unlikely]] return; }
L_00355740:
    set32(c.r[25], ld32((c.r[16].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00355750u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00355750u) [[unlikely]] return; }
L_00355750:
    set32(c.r[4], ld32((c.r[21].w[0] + 192u)));
    set32(c.r[3], 0u + 830u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_00355820; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00355768u);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x00355768u) [[unlikely]] return; }
L_00355768:
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[20].w[0] + 48u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 4u)));
    st32((c.r[20].w[0] + 52u), c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    st32((c.r[20].w[0] + 56u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[21].w[0] + 128u)));
    c.f[0] = ld32((c.r[2].w[0] + 12u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    st32((c.r[20].w[0] + 60u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[21].w[0] + 128u)));
    c.f[0] = ld32((c.r[2].w[0] + 12u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    st32((c.r[20].w[0] + 300u), c.r[2].w[0]);
    c.f[0] = ld32((c.r[1].w[0] - 7296u));
    st32((c.r[20].w[0] + 16u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[0] = ld32((c.r[1].w[0] - 7296u));
    st32((c.r[20].w[0] + 20u), c.f[0]);
    st32((c.r[20].w[0] + 24u), c.r[3].w[0]);
    c.budget -= 28;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003557D8u); set32(c.r[4], ld32((c.r[21].w[0] + 192u)));  if (depth < kMaxDepth) unit_000B(c, 461u, depth + 1u); else { c.pc = 0x0012FD60u; return; } if (c.pc != 0x003557D8u) [[unlikely]] return; }
L_003557D8:
    st32((c.r[20].w[0] + 352u), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42600000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41800000u);
    st32((c.r[20].w[0] + 356u), 0u);
    c.f[12] = c.r[2].w[0];
    set32(c.r[25], ld32((c.r[20].w[0] + 176u)));
    c.f[13] = c.r[3].w[0];
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.f[0] = c.r[2].w[0];
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 14;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00355810u); c.f[14] = fp::cvt_s_w(c.f[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00355810u) [[unlikely]] return; }
L_00355810:
    set32(c.r[25], ld32((c.r[20].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00355820u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00355820u) [[unlikely]] return; }
L_00355820:
    set32(c.r[4], ld32((c.r[21].w[0] + 24u)));
    set32(c.r[3], 0u + 7u);
    c.r[18].d[0] = 0ull + 0ull;
    c.r[23].d[0] = 0ull + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 24u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull; mmi::div(c, 0, c.r[4].w[0], c.r[3].w[0]);  if (t) { goto L_00355840; } }
    breakpoint(c, 0x0035583Cu);
    c.budget -= 1;
L_00355840:
    c.r[4].d[0] = c.lo.d[0];
    c.budget -= 3;
    { const bool t = c.r[4].sd[0] <= 0; st8((c.r[29].w[0] + 208u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00355854; } }
    set32(c.r[3], c.r[4].w[0] << 3);
    set32(c.r[23], c.r[3].w[0] - c.r[4].w[0]);
    c.budget -= 2;
L_00355854:
    set32(c.r[4], c.r[23].w[0] + 7u);
    c.budget -= 3;
    { const bool t = c.r[4].sd[0] >= 0;  if (t) { goto L_00355868; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 176u), 0u);  if (t) { goto L_0035588C; } }
L_00355868:
    set32(c.r[3], ld32((c.r[21].w[0] + 32u)));
    st32((c.r[29].w[0] + 176u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 176u)));
    c.r[1].d[0] = c.r[3].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00355888; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035588C; } }
L_00355888:
    st32((c.r[29].w[0] + 176u), c.r[4].w[0]);
    c.budget -= 1;
L_0035588C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = ld32((c.r[1].w[0] - 7272u));
    c.r[17].d[0] = c.r[23].d[0] + 0ull;
    st32((c.r[20].w[0] + 16u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[0] = ld32((c.r[1].w[0] - 7304u));
    st32((c.r[20].w[0] + 20u), c.f[0]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 24u), c.r[3].w[0]);  if (t) { goto L_00355DC0; } }
L_003558B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003558BCu); set32(c.r[30], c.r[17].w[0] - c.r[23].w[0]);  if (depth < kMaxDepth) unit_009B(c, 390u, depth + 1u); else { c.pc = 0x0036F200u; return; } if (c.pc != 0x003558BCu) [[unlikely]] return; }
L_003558BC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0035590C; } }
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[21].w[0] + 184u)));
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[21].w[0] + 186u)));
    set32(c.r[4], ld32((c.r[21].w[0] + 180u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003558D8u); c.r[7].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_009C(c, 6u, depth + 1u); else { c.pc = 0x00370030u; return; } if (c.pc != 0x003558D8u) [[unlikely]] return; }
L_003558D8:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[21].w[0] + 186u)));
    c.r[22].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u + 4u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_003558F8; } }
    c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[29].w[0] + 208u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0035593C; } }
L_003558F8:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != c.r[2].d[0];  if (t) { goto L_0035593C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[18], 0u + 20u);  if (t) { goto L_0035593C; } }
L_0035590C:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[21].w[0] + 184u)));
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[21].w[0] + 180u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00355920u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_009C(c, 6u, depth + 1u); else { c.pc = 0x00370030u; return; } if (c.pc != 0x00355920u) [[unlikely]] return; }
L_00355920:
    c.r[22].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035592Cu); set32(c.r[4], c.r[21].w[0] + 180u);  if (depth < kMaxDepth) unit_009B(c, 391u, depth + 1u); else { c.pc = 0x0036F250u; return; } if (c.pc != 0x0035592Cu) [[unlikely]] return; }
L_0035592C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0035593C; } }
    c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    st8((c.r[29].w[0] + 208u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_0035593C:
    c.r[2].d[0] = ld8((c.r[29].w[0] + 208u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x00420000u);  if (t) { goto L_00355A44; } }
    set32(c.r[3], c.r[29].w[0] + 224u);
    set32(c.r[4], c.r[4].w[0] + 368u);
    c.r[2].d[0] = ld64((c.r[4].w[0]));
    c.f[0] = ld32((c.r[4].w[0] + 8u));
    st64((c.r[3].w[0]), c.r[2].d[0]);
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[3].w[0] + 8u), c.f[0]);  if (t) { goto L_00355968; } }
    set32(c.r[18], c.r[18].w[0] + 8u);
    c.budget -= 1;
L_00355968:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 26392u)));
    set32(c.r[16], ld32((c.r[2].w[0] + 332u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035597Cu); set32(c.r[4], 0u + 11u);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x0035597Cu) [[unlikely]] return; }
L_0035597C:
    set32(c.r[5], ld32((c.r[2].w[0])));
    set32(c.r[3], c.r[17].w[0] << 2);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[3], c.r[3].w[0] + c.r[29].w[0]);
    st32((c.r[16].w[0] + 48u), c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0] + 4u)));
    st32((c.r[16].w[0] + 52u), c.r[5].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    st32((c.r[16].w[0] + 56u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[21].w[0] + 128u)));
    c.f[0] = ld32((c.r[2].w[0] + 12u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    st32((c.r[16].w[0] + 60u), c.r[2].w[0]);
    c.f[0] = ld32((c.r[1].w[0] - 7312u));
    st32((c.r[16].w[0] + 16u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[0] = ld32((c.r[1].w[0] - 7312u));
    st32((c.r[16].w[0] + 20u), c.f[0]);
    st32((c.r[16].w[0] + 24u), c.r[4].w[0]);
    c.budget -= 24;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003559DCu); set32(c.r[4], ld32((c.r[3].w[0] + 224u)));  if (depth < kMaxDepth) unit_000B(c, 461u, depth + 1u); else { c.pc = 0x0012FD60u; return; } if (c.pc != 0x003559DCu) [[unlikely]] return; }
L_003559DC:
    st32((c.r[16].w[0] + 352u), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41800000u);
    set32(c.r[2], c.r[30].w[0] << 3);
    st32((c.r[16].w[0] + 356u), 0u);
    set32(c.r[4], c.r[2].w[0] - c.r[30].w[0]);
    set32(c.r[25], ld32((c.r[16].w[0] + 176u)));
    set32(c.r[2], c.r[4].w[0] << 2);
    set32(c.r[4], c.r[2].w[0] - c.r[4].w[0]);
    set32(c.r[4], c.r[4].w[0] << 1);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    set32(c.r[5], c.r[4].w[0] + 89u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    set32(c.r[5], c.r[18].w[0] + c.r[5].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[0] = c.r[5].w[0];
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.f[12] = c.r[3].w[0];
    c.f[13] = fp::cvt_s_w(c.f[0]);
    c.f[0] = c.r[2].w[0];
    c.budget -= 21;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00355A30u); c.f[14] = fp::cvt_s_w(c.f[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00355A30u) [[unlikely]] return; }
L_00355A30:
    set32(c.r[25], ld32((c.r[16].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00355A40u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00355A40u) [[unlikely]] return; }
L_00355A40:
    set32(c.r[18], c.r[18].w[0] + 15u);
    c.budget -= 1;
L_00355A44:
    set32(c.r[2], ld32((c.r[21].w[0] + 28u)));
    set32(c.r[3], c.r[17].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld8((c.r[2].w[0]));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_00355A80; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00355A64u); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x00355A64u) [[unlikely]] return; }
L_00355A64:
    set32(c.r[3], ld32((c.r[2].w[0])));
    st32((c.r[20].w[0] + 48u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    st32((c.r[20].w[0] + 52u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 56u), c.r[2].w[0]);  if (t) { goto L_00355AA0; } }
L_00355A80:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00355A88u);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x00355A88u) [[unlikely]] return; }
L_00355A88:
    set32(c.r[3], ld32((c.r[2].w[0])));
    st32((c.r[20].w[0] + 48u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    st32((c.r[20].w[0] + 52u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    st32((c.r[20].w[0] + 56u), c.r[2].w[0]);
    c.budget -= 6;
L_00355AA0:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00355AACu); c.r[5].d[0] = c.r[22].d[0] + 0ull;  if (depth < kMaxDepth) unit_0095(c, 181u, depth + 1u); else { c.pc = 0x00355430u; return; } if (c.pc != 0x00355AACu) [[unlikely]] return; }
L_00355AAC:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00355AB8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_009C(c, 167u, depth + 1u); else { c.pc = 0x00370C80u; return; } if (c.pc != 0x00355AB8u) [[unlikely]] return; }
L_00355AB8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u + 2u);  if (t) { goto L_00355B44; } }
    c.r[2].d[0] = ld8((c.r[21].w[0] + 1112u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], c.r[22].w[0] << 1);  if (t) { goto L_00355B00; } }
    set32(c.r[2], ld32((c.r[21].w[0] + 1104u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[22].d[0]; set32(c.r[4], 0u + 10u);  if (t) { goto L_00355AFC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00355AE0u);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x00355AE0u) [[unlikely]] return; }
L_00355AE0:
    set32(c.r[3], ld32((c.r[2].w[0])));
    st32((c.r[20].w[0] + 48u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    st32((c.r[20].w[0] + 52u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 56u), c.r[2].w[0]);  if (t) { goto L_00355B34; } }
L_00355AFC:
    set32(c.r[2], c.r[22].w[0] << 1);
    c.budget -= 1;
L_00355B00:
    set32(c.r[2], c.r[21].w[0] + c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 216u)));
    c.r[2].d[0] = c.r[2].d[0] & 32768ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], c.r[16].w[0] + 16u);  if (t) { goto L_00355B38; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00355B1Cu); set32(c.r[4], 0u + 5u);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x00355B1Cu) [[unlikely]] return; }
L_00355B1C:
    set32(c.r[3], ld32((c.r[2].w[0])));
    st32((c.r[20].w[0] + 48u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    st32((c.r[20].w[0] + 52u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    st32((c.r[20].w[0] + 56u), c.r[2].w[0]);
    c.budget -= 6;
L_00355B34:
    set32(c.r[2], c.r[16].w[0] + 16u);
    c.budget -= 1;
L_00355B38:
    st32((c.r[20].w[0] + 352u), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 356u), 0u);  if (t) { goto L_00355B74; } }
L_00355B44:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00355B4Cu);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x00355B4Cu) [[unlikely]] return; }
L_00355B4C:
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[3], c.r[3].w[0] - 7344u);
    st32((c.r[20].w[0] + 48u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 4u)));
    st32((c.r[20].w[0] + 52u), c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    st32((c.r[20].w[0] + 56u), c.r[2].w[0]);
    st32((c.r[20].w[0] + 352u), c.r[3].w[0]);
    st32((c.r[20].w[0] + 356u), 0u);
    c.budget -= 10;
L_00355B74:
    set32(c.r[2], c.r[30].w[0] << 3);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41800000u);
    set32(c.r[4], c.r[2].w[0] - c.r[30].w[0]);
    set32(c.r[25], ld32((c.r[20].w[0] + 176u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.f[0] = c.r[2].w[0];
    c.f[12] = c.r[3].w[0];
    set32(c.r[2], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - c.r[4].w[0]);
    set32(c.r[3], c.r[2].w[0] << 1);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[2], c.r[3].w[0] + 89u);
    set32(c.r[30], c.r[18].w[0] + c.r[2].w[0]);
    c.f[14] = fp::cvt_s_w(c.f[0]);
    set32(c.r[2], c.r[3].w[0] + 122u);
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    st32((c.r[29].w[0] + 192u), c.r[2].w[0]);
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.f[0] = c.r[30].w[0];
    c.budget -= 22;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00355BCCu); c.f[13] = fp::cvt_s_w(c.f[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00355BCCu) [[unlikely]] return; }
L_00355BCC:
    set32(c.r[2], ld32((c.r[21].w[0] + 24u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 24u)));
    c.budget -= 4;
    { const bool t = c.r[17].d[0] != c.r[2].d[0];  if (t) { goto L_00355CBC; } }
    c.f[0] = c.r[30].w[0];
    set32(c.r[6], ld32((c.r[20].w[0] + 352u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41800000u);
    c.f[13] = fp::cvt_s_w(c.f[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[19].w[0] + 352u), c.r[6].w[0]);
    st32((c.r[19].w[0] + 356u), 0u);
    c.f[3] = c.r[2].w[0];
    c.f[2] = ld32((c.r[20].w[0] + 20u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.f[0] = c.r[2].w[0];
    c.f[1] = ld32((c.r[20].w[0] + 16u));
    c.f[14] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::mul(c.f[3], c.f[2]);
    st32((c.r[19].w[0] + 16u), c.f[1]);
    st32((c.r[19].w[0] + 20u), c.f[0]);
    st32((c.r[19].w[0] + 24u), c.r[5].w[0]);
    c.f[12] = c.r[3].w[0];
    set32(c.r[25], ld32((c.r[19].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 24;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00355C3Cu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00355C3Cu) [[unlikely]] return; }
L_00355C3C:
    set32(c.r[3], ld32((c.r[21].w[0] + 8u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[4], 0u + 4u);  if (t) { goto L_00355C84; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00355C54u);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x00355C54u) [[unlikely]] return; }
L_00355C54:
    set32(c.r[3], ld32((c.r[2].w[0])));
    st32((c.r[19].w[0] + 48u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    st32((c.r[19].w[0] + 52u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    st32((c.r[19].w[0] + 56u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[21].w[0] + 128u)));
    c.f[0] = ld32((c.r[2].w[0] + 12u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 60u), c.r[2].w[0]);  if (t) { goto L_00355C8C; } }
L_00355C84:
    ld128((c.r[21].w[0] + 96u) & ~15u, c.r[2]);
    st128((c.r[19].w[0] + 48u) & ~15u, c.r[2]);
    c.budget -= 2;
L_00355C8C:
    set32(c.r[25], ld32((c.r[19].w[0] + 176u)));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 60u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00355CA0u); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00355CA0u) [[unlikely]] return; }
L_00355CA0:
    set32(c.r[25], ld32((c.r[20].w[0] + 176u)));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 60u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00355CB4u); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00355CB4u) [[unlikely]] return; }
L_00355CB4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 192u)));  if (t) { goto L_00355D00; } }
L_00355CBC:
    set32(c.r[25], ld32((c.r[20].w[0] + 176u)));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u - 1u);
    set32(c.r[25], ld32((c.r[25].w[0] + 68u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00355CDCu); set32(c.r[8], 0u + 2u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00355CDCu) [[unlikely]] return; }
L_00355CDC:
    set32(c.r[25], ld32((c.r[20].w[0] + 176u)));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u - 1u);
    set32(c.r[25], ld32((c.r[25].w[0] + 68u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00355CFCu); c.r[8].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00355CFCu) [[unlikely]] return; }
L_00355CFC:
    set32(c.r[2], ld32((c.r[29].w[0] + 192u)));
    c.budget -= 1;
L_00355D00:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41D00000u);
    set32(c.r[5], ld32((c.r[21].w[0] + 128u)));
    c.f[12] = c.r[3].w[0];
    c.f[0] = c.r[2].w[0];
    c.f[1] = ld32((c.r[5].w[0] + 12u));
    c.f[13] = fp::cvt_s_w(c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.f[0] = c.r[2].w[0];
    c.f[14] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[2], c.f[0]);
    st32((c.r[21].w[0] + 684u), c.r[2].w[0]);
    set32(c.r[25], ld32((c.r[21].w[0] + 800u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 19;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00355D4Cu); set32(c.r[4], c.r[21].w[0] + 624u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00355D4Cu) [[unlikely]] return; }
L_00355D4C:
    set32(c.r[2], ld32((c.r[21].w[0] + 180u)));
    set32(c.r[5], 0u + 8u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[5].d[0]; c.r[30].d[0] = 0ull + 0ull;  if (t) { goto L_00355D94; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[21].w[0] + 184u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00355D94; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != c.r[2].d[0];  if (t) { goto L_00355D94; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 51u));
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00355D80u); st128((c.r[29].w[0] + 160u) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_0095(c, 181u, depth + 1u); else { c.pc = 0x00355430u; return; } if (c.pc != 0x00355D80u) [[unlikely]] return; }
L_00355D80:
    c.r[3].d[0] = ld8((c.r[2].w[0] + 51u));
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[2]);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00355D98; } }
    c.r[30].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_00355D94:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_00355D98:
    c.r[7].d[0] = c.r[22].d[0] + 0ull;
    c.r[8].d[0] = c.r[30].d[0] + 0ull;
    set32(c.r[4], c.r[21].w[0] + 624u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00355DACu); set32(c.r[6], c.r[21].w[0] + 200u);  if (depth < kMaxDepth) unit_0095(c, 455u, depth + 1u); else { c.pc = 0x00357E10u; return; } if (c.pc != 0x00355DACu) [[unlikely]] return; }
L_00355DAC:
    set32(c.r[25], ld32((c.r[21].w[0] + 800u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00355DBCu); set32(c.r[4], c.r[21].w[0] + 624u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00355DBCu) [[unlikely]] return; }
L_00355DBC:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_00355DC0:
    set32(c.r[3], ld32((c.r[29].w[0] + 176u)));
    c.r[3].d[0] = c.r[17].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[4], c.r[21].w[0] + 180u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003558B4u | kUnwind; return; } goto L_003558B4; } }
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 240u);  c.pc = t; return; }
L_00355E00:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[5].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00355E38u); c.r[16].d[0] = c.r[7].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 298u, depth + 1u); else { c.pc = 0x0012E440u; return; } if (c.pc != 0x00355E38u) [[unlikely]] return; }
L_00355E38:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00355E40u); set32(c.r[4], c.r[17].w[0] + 20u);  if (depth < kMaxDepth) unit_000B(c, 335u, depth + 1u); else { c.pc = 0x0012E720u; return; } if (c.pc != 0x00355E40u) [[unlikely]] return; }
L_00355E40:
    set32(c.r[4], c.r[17].w[0] + 24u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00355E4Cu); set32(c.r[5], 0u + 7u);  if (depth < kMaxDepth) unit_000F(c, 264u, depth + 1u); else { c.pc = 0x0013E560u; return; } if (c.pc != 0x00355E4Cu) [[unlikely]] return; }
L_00355E4C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] + 28544u);
    set32(c.r[3], c.r[3].w[0] + 28632u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[4], c.r[17].w[0] + 80u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    st32((c.r[17].w[0] + 20u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + 28672u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00355E78u); st32((c.r[17].w[0] + 24u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0017(c, 177u, depth + 1u); else { c.pc = 0x0015E070u; return; } if (c.pc != 0x00355E78u) [[unlikely]] return; }
L_00355E78:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00355E80u); set32(c.r[4], c.r[17].w[0] + 336u);  if (depth < kMaxDepth) unit_0018(c, 27u, depth + 1u); else { c.pc = 0x00161280u; return; } if (c.pc != 0x00355E80u) [[unlikely]] return; }
L_00355E80:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00355E88u); set32(c.r[4], c.r[17].w[0] + 704u);  if (depth < kMaxDepth) unit_0095(c, 441u, depth + 1u); else { c.pc = 0x00357C90u; return; } if (c.pc != 0x00355E88u) [[unlikely]] return; }
L_00355E88:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00355E90u); set32(c.r[4], 0u + 9u);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x00355E90u) [[unlikely]] return; }
L_00355E90:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00355E9Cu); set32(c.r[4], 0u + 8u);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x00355E9Cu) [[unlikely]] return; }
L_00355E9C:
    ld128((c.r[2].w[0]) & ~15u, c.r[3]);
    set32(c.r[4], c.r[17].w[0] + 1248u);
    set32(c.r[5], 0u + 2u);
    c.r[6].d[0] = 0ull + 0ull;
    st128((c.r[17].w[0] + 1184u) & ~15u, c.r[3]);
    set32(c.r[2], 0u + 30u);
    ld128((c.r[18].w[0]) & ~15u, c.r[3]);
    st128((c.r[17].w[0] + 1200u) & ~15u, c.r[3]);
    st32((c.r[17].w[0] + 1236u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 1232u), 0u);
    st32((c.r[17].w[0] + 1244u), 0u);
    st8((c.r[17].w[0] + 1240u), static_cast<std::uint8_t>(0u));
    ld128((c.r[17].w[0] + 1184u) & ~15u, c.r[2]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00355ED8u); st128((c.r[17].w[0] + 1216u) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_0049(c, 283u, depth + 1u); else { c.pc = 0x002277A0u; return; } if (c.pc != 0x00355ED8u) [[unlikely]] return; }
L_00355ED8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00355EE0u);  if (depth < kMaxDepth) unit_003F(c, 299u, depth + 1u); else { c.pc = 0x001FF0D0u; return; } if (c.pc != 0x00355EE0u) [[unlikely]] return; }
L_00355EE0:
    c.r[2].d[0] = c.r[19].d[0] ^ 1ull;
    st32((c.r[17].w[0] + 36u), c.r[19].w[0]);
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st8((c.r[17].w[0] + 40u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[20].d[0] = 0ull + 0ull;
    st8((c.r[17].w[0] + 41u), static_cast<std::uint8_t>(0u));
    st32((c.r[17].w[0] + 44u), c.r[21].w[0]);
    set32(c.r[2], ld32((c.r[1].w[0] + 26392u)));
    set32(c.r[21], c.r[2].w[0] + 624u);
    c.budget -= 10;
L_00355F08:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00355F10u); set32(c.r[4], 0u + 160u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00355F10u) [[unlikely]] return; }
L_00355F10:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[19], c.r[20].w[0] << 2);  if (t) { goto L_00355F2C; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], 0u + 5u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00355F28u); set32(c.r[6], 0u + 8u);  if (depth < kMaxDepth) unit_0025(c, 304u, depth + 1u); else { c.pc = 0x00196C90u; return; } if (c.pc != 0x00355F28u) [[unlikely]] return; }
L_00355F28:
    set32(c.r[19], c.r[20].w[0] << 2);
    c.budget -= 1;
L_00355F2C:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[3], c.r[17].w[0] + c.r[19].w[0]);
    set32(c.r[5], 0u + 10011u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00355F40u); st32((c.r[3].w[0] + 48u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_002A(c, 5u, depth + 1u); else { c.pc = 0x001A80A0u; return; } if (c.pc != 0x00355F40u) [[unlikely]] return; }
L_00355F40:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00355F50u); set32(c.r[5], 0u + 8u);  if (depth < kMaxDepth) unit_002A(c, 3u, depth + 1u); else { c.pc = 0x001A8060u; return; } if (c.pc != 0x00355F50u) [[unlikely]] return; }
L_00355F50:
    set32(c.r[3], c.r[17].w[0] + c.r[19].w[0]);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[3].w[0] + 48u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00355F64u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 322u, depth + 1u); else { c.pc = 0x00196E30u; return; } if (c.pc != 0x00355F64u) [[unlikely]] return; }
L_00355F64:
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.r[2].d[0] = c.r[20].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], 0u + 272u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00355F08u | kUnwind; return; } goto L_00355F08; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00355F7Cu);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00355F7Cu) [[unlikely]] return; }
L_00355F7C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00540000u);  if (t) { goto L_00355F98; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[1].w[0] - 768u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 36u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00355F98u); c.r[5].d[0] = ld64((c.r[2].w[0] + 496u));  if (depth < kMaxDepth) unit_0017(c, 188u, depth + 1u); else { c.pc = 0x0015ED60u; return; } if (c.pc != 0x00355F98u) [[unlikely]] return; }
L_00355F98:
    st32((c.r[17].w[0] + 64u), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43640000u);
    set32(c.r[2], 0u + 395u);
    st32((c.r[17].w[0] + 240u), c.r[3].w[0]);
    c.f[0] = c.r[2].w[0];
    set32(c.r[4], 0u + 1u);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42A00000u);
    st32((c.r[17].w[0] + 244u), c.f[0]);
    st32((c.r[17].w[0] + 496u), c.r[3].w[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00355FC8u); st32((c.r[17].w[0] + 500u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x00355FC8u) [[unlikely]] return; }
L_00355FC8:
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    set32(c.r[3], c.r[29].w[0] + 112u);
    set32(c.r[4], 0u + 1u);
    st128((c.r[3].w[0]) & ~15u, c.r[2]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00355FE0u); st32((c.r[29].w[0] + 124u), 0u);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x00355FE0u) [[unlikely]] return; }
L_00355FE0:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00355FECu); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x00355FECu) [[unlikely]] return; }
L_00355FEC:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[17].w[0] + 336u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00356000u); set32(c.r[7], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_0018(c, 14u, depth + 1u); else { c.pc = 0x001609B0u; return; } if (c.pc != 0x00356000u) [[unlikely]] return; }
L_00356000:
    set32(c.r[4], c.r[17].w[0] + 336u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035600Cu); set32(c.r[5], 0u + 40u);  if (depth < kMaxDepth) unit_0018(c, 36u, depth + 1u); else { c.pc = 0x00161400u; return; } if (c.pc != 0x0035600Cu) [[unlikely]] return; }
L_0035600C:
    st32((c.r[17].w[0] + 1292u), 0u);
    st32((c.r[17].w[0] + 1296u), 0u);
    st32((c.r[17].w[0] + 1300u), 0u);
    st32((c.r[17].w[0] + 1304u), 0u);
    st32((c.r[17].w[0] + 1308u), c.r[16].w[0]);
    st32((c.r[17].w[0] + 1312u), 0u);
    st8((c.r[17].w[0] + 1316u), static_cast<std::uint8_t>(0u));
    st8((c.r[17].w[0] + 1317u), static_cast<std::uint8_t>(0u));
    st32((c.r[17].w[0] + 1320u), 0u);
    c.r[2].d[0] = ld8((c.r[17].w[0] + 40u));
    c.budget -= 12;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], 0u + 19u);  if (t) { goto L_00356080; } }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00356040:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], ld32((c.r[1].w[0] - 27872u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00356050u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0051(c, 244u, depth + 1u); else { c.pc = 0x002464F0u; return; } if (c.pc != 0x00356050u) [[unlikely]] return; }
L_00356050:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_00356064; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 1304u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[17].w[0] + 1304u), c.r[2].w[0]);
    c.budget -= 3;
L_00356064:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00356040u | kUnwind; return; } goto L_00356040; } }
    set32(c.r[2], 0u + 8u);
    st32((c.r[17].w[0] + 1312u), c.r[2].w[0]);
    set32(c.r[4], 0u + 19u);
    c.budget -= 3;
L_00356080:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00356088u); st8((c.r[17].w[0] + 1168u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0076(c, 191u, depth + 1u); else { c.pc = 0x002D9970u; return; } if (c.pc != 0x00356088u) [[unlikely]] return; }
L_00356088:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00356090u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0095(c, 370u, depth + 1u); else { c.pc = 0x00356E00u; return; } if (c.pc != 0x00356090u) [[unlikely]] return; }
L_00356090:
    st8((c.r[17].w[0] + 13u), static_cast<std::uint8_t>(0u));
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003560A4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003560A4u) [[unlikely]] return; }
L_003560A4:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_003560D0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 9;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00356248; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] + 28544u);
    set32(c.r[3], c.r[3].w[0] + 28632u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    st32((c.r[17].w[0] + 20u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + 28672u);
    st32((c.r[17].w[0] + 24u), c.r[2].w[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00356124u); set32(c.r[4], ld32((c.r[1].w[0] - 736u)));  if (depth < kMaxDepth) unit_0097(c, 170u, depth + 1u); else { c.pc = 0x0035DDD0u; return; } if (c.pc != 0x00356124u) [[unlikely]] return; }
L_00356124:
    set32(c.r[4], ld32((c.r[17].w[0] + 1292u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00356148; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00356148; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00356148u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00356148u) [[unlikely]] return; }
L_00356148:
    st32((c.r[17].w[0] + 1292u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 64u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00356170; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00356170; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00356170u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00356170u) [[unlikely]] return; }
L_00356170:
    st32((c.r[17].w[0] + 64u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 1296u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00356188; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00356188u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100210u; return; } if (c.pc != 0x00356188u) [[unlikely]] return; }
L_00356188:
    st32((c.r[17].w[0] + 1296u), 0u);
    c.r[19].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_00356190:
    set32(c.r[2], c.r[19].w[0] << 2);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 48u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[18], c.r[2].w[0] + 48u);  if (t) { goto L_003561BC; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003561BC; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003561BCu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003561BCu) [[unlikely]] return; }
L_003561BC:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.r[2].d[0] = c.r[19].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[18].w[0]), 0u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00356190u | kUnwind; return; } goto L_00356190; } }
    set32(c.r[4], c.r[17].w[0] + 1248u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003561D8u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0049(c, 294u, depth + 1u); else { c.pc = 0x00227920u; return; } if (c.pc != 0x003561D8u) [[unlikely]] return; }
L_003561D8:
    set32(c.r[4], c.r[17].w[0] + 704u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003561E4u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0095(c, 450u, depth + 1u); else { c.pc = 0x00357D60u; return; } if (c.pc != 0x003561E4u) [[unlikely]] return; }
L_003561E4:
    set32(c.r[4], c.r[17].w[0] + 336u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003561F0u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0018(c, 29u, depth + 1u); else { c.pc = 0x001612C0u; return; } if (c.pc != 0x003561F0u) [[unlikely]] return; }
L_003561F0:
    set32(c.r[4], c.r[17].w[0] + 80u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);  if (t) { goto L_0035620C; } }
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 17408u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035620Cu); st32((c.r[17].w[0] + 256u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0012(c, 264u, depth + 1u); else { c.pc = 0x0014ADA0u; return; } if (c.pc != 0x0035620Cu) [[unlikely]] return; }
L_0035620C:
    set32(c.r[4], c.r[17].w[0] + 24u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00356218u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000F(c, 266u, depth + 1u); else { c.pc = 0x0013E5B0u; return; } if (c.pc != 0x00356218u) [[unlikely]] return; }
L_00356218:
    set32(c.r[4], c.r[17].w[0] + 20u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00356224u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 336u, depth + 1u); else { c.pc = 0x0012E740u; return; } if (c.pc != 0x00356224u) [[unlikely]] return; }
L_00356224:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00356230u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 300u, depth + 1u); else { c.pc = 0x0012E490u; return; } if (c.pc != 0x00356230u) [[unlikely]] return; }
L_00356230:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0035624C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00356248u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x00356248u) [[unlikely]] return; }
L_00356248:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0035624C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00356270:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00356284u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 318u, depth + 1u); else { c.pc = 0x0012E5E0u; return; } if (c.pc != 0x00356284u) [[unlikely]] return; }
L_00356284:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00356290u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0095(c, 385u, depth + 1u); else { c.pc = 0x00356FC0u; return; } if (c.pc != 0x00356290u) [[unlikely]] return; }
L_00356290:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 40u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003562B4; } }
    set32(c.r[5], 0u + 1u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003562ACu); c.r[6].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0095(c, 297u, depth + 1u); else { c.pc = 0x00356470u; return; } if (c.pc != 0x003562ACu) [[unlikely]] return; }
L_003562AC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[16].w[0] + 1292u)));  if (t) { goto L_003562C4; } }
L_003562B4:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003562C0u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0095(c, 297u, depth + 1u); else { c.pc = 0x00356470u; return; } if (c.pc != 0x003562C0u) [[unlikely]] return; }
L_003562C0:
    set32(c.r[3], ld32((c.r[16].w[0] + 1292u)));
    c.budget -= 1;
L_003562C4:
    st32((c.r[3].w[0] + 36u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003562E0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].d[0] = ld8((c.r[4].w[0] + 40u));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00356354; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 1308u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00356304u); set32(c.r[4], ld32((c.r[16].w[0] + 44u)));  if (depth < kMaxDepth) unit_009B(c, 386u, depth + 1u); else { c.pc = 0x0036F190u; return; } if (c.pc != 0x00356304u) [[unlikely]] return; }
L_00356304:
    set32(c.r[3], c.r[2].w[0] - 115u);
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[3], 0u + 117u);  if (t) { goto L_0035631C; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_00356334; } }
L_0035631C:
    set32(c.r[3], ld32((c.r[16].w[0] + 44u)));
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 36u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00356334u); set32(c.r[4], c.r[3].w[0] + 20u);  if (depth < kMaxDepth) unit_009C(c, 156u, depth + 1u); else { c.pc = 0x00370B30u; return; } if (c.pc != 0x00356334u) [[unlikely]] return; }
L_00356334:
    set32(c.r[5], ld32((c.r[16].w[0] + 44u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[2].w[0] << 1);
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], c.r[3].w[0] + c.r[5].w[0]);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 36u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00356354u); set32(c.r[4], ld32((c.r[1].w[0] - 736u)));  if (depth < kMaxDepth) unit_0097(c, 167u, depth + 1u); else { c.pc = 0x0035DD70u; return; } if (c.pc != 0x00356354u) [[unlikely]] return; }
L_00356354:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035635Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 319u, depth + 1u); else { c.pc = 0x0012E600u; return; } if (c.pc != 0x0035635Cu) [[unlikely]] return; }
L_0035635C:
    set32(c.r[3], ld32((c.r[16].w[0] + 1292u)));
    set32(c.r[4], 0u + 1u);
    st32((c.r[3].w[0] + 36u), c.r[4].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00356380:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 1292u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[5], ld32((c.r[2].w[0] + 24u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 164u)));
    c.budget -= 9;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003563A4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003563A4u) [[unlikely]] return; }
L_003563A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003563ACu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 320u, depth + 1u); else { c.pc = 0x0012E610u; return; } if (c.pc != 0x003563ACu) [[unlikely]] return; }
L_003563AC:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 40u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003563D0; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003563C8u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0095(c, 297u, depth + 1u); else { c.pc = 0x00356470u; return; } if (c.pc != 0x003563C8u) [[unlikely]] return; }
L_003563C8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003563E0; } }
L_003563D0:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003563DCu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0095(c, 297u, depth + 1u); else { c.pc = 0x00356470u; return; } if (c.pc != 0x003563DCu) [[unlikely]] return; }
L_003563DC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_003563E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003563E8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0095(c, 385u, depth + 1u); else { c.pc = 0x00356FC0u; return; } if (c.pc != 0x003563E8u) [[unlikely]] return; }
L_003563E8:
    set32(c.r[3], ld32((c.r[16].w[0] + 1292u)));
    st32((c.r[3].w[0] + 36u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00356400:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00356414u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 321u, depth + 1u); else { c.pc = 0x0012E630u; return; } if (c.pc != 0x00356414u) [[unlikely]] return; }
L_00356414:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 40u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00356438; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00356430u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0095(c, 297u, depth + 1u); else { c.pc = 0x00356470u; return; } if (c.pc != 0x00356430u) [[unlikely]] return; }
L_00356430:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00356448; } }
L_00356438:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00356444u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0095(c, 297u, depth + 1u); else { c.pc = 0x00356470u; return; } if (c.pc != 0x00356444u) [[unlikely]] return; }
L_00356444:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_00356448:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00356450u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0095(c, 385u, depth + 1u); else { c.pc = 0x00356FC0u; return; } if (c.pc != 0x00356450u) [[unlikely]] return; }
L_00356450:
    set32(c.r[3], ld32((c.r[16].w[0] + 1292u)));
    st32((c.r[3].w[0] + 36u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00356470:
    set32(c.r[29], c.r[29].w[0] - 144u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_0035650C; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);  if (t) { goto L_003564C8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[5], c.r[29].w[0] + 112u);
    set32(c.r[2], c.r[2].w[0] + 384u);
    ld128((c.r[2].w[0]) & ~15u, c.r[3]);
    c.r[2].d[0] = ld64((c.r[2].w[0] + 16u));
    st128((c.r[5].w[0]) & ~15u, c.r[3]);
    st64((c.r[5].w[0] + 16u), c.r[2].d[0]);
    c.r[2].d[0] = ld8((c.r[4].w[0] + 40u));
    c.budget -= 10;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x44110000u);  if (t) { goto L_003564B0; } }
    st32((c.r[29].w[0] + 112u), c.r[2].w[0]);
    c.budget -= 1;
L_003564B0:
    set32(c.r[4], c.r[4].w[0] + 1248u);
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003564C0u); set32(c.r[6], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_0049(c, 298u, depth + 1u); else { c.pc = 0x002279C0u; return; } if (c.pc != 0x003564C0u) [[unlikely]] return; }
L_003564C0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_0035656C; } }
L_003564C8:
    set32(c.r[5], c.r[29].w[0] + 80u);
    set32(c.r[2], c.r[2].w[0] + 416u);
    ld128((c.r[2].w[0]) & ~15u, c.r[3]);
    c.r[2].d[0] = ld64((c.r[2].w[0] + 16u));
    st128((c.r[5].w[0]) & ~15u, c.r[3]);
    st64((c.r[5].w[0] + 16u), c.r[2].d[0]);
    c.r[2].d[0] = ld8((c.r[4].w[0] + 40u));
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003564F4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x44110000u);
    st32((c.r[29].w[0] + 88u), c.r[2].w[0]);
    c.budget -= 2;
L_003564F4:
    set32(c.r[4], c.r[4].w[0] + 1248u);
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00356504u); set32(c.r[6], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0049(c, 298u, depth + 1u); else { c.pc = 0x002279C0u; return; } if (c.pc != 0x00356504u) [[unlikely]] return; }
L_00356504:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00356568; } }
L_0035650C:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);  if (t) { goto L_00356544; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[6], c.r[29].w[0] + 48u);
    set32(c.r[2], c.r[2].w[0] + 448u);
    set32(c.r[4], c.r[4].w[0] + 1248u);
    ld128((c.r[2].w[0]) & ~15u, c.r[3]);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[2].d[0] = ld64((c.r[2].w[0] + 16u));
    st128((c.r[6].w[0]) & ~15u, c.r[3]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035653Cu); st64((c.r[6].w[0] + 16u), c.r[2].d[0]);  if (depth < kMaxDepth) unit_0049(c, 298u, depth + 1u); else { c.pc = 0x002279C0u; return; } if (c.pc != 0x0035653Cu) [[unlikely]] return; }
L_0035653C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00356568; } }
L_00356544:
    set32(c.r[6], c.r[29].w[0] + 16u);
    set32(c.r[2], c.r[2].w[0] + 480u);
    set32(c.r[4], c.r[4].w[0] + 1248u);
    ld128((c.r[2].w[0]) & ~15u, c.r[3]);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[2].d[0] = ld64((c.r[2].w[0] + 16u));
    st128((c.r[6].w[0]) & ~15u, c.r[3]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00356568u); st64((c.r[6].w[0] + 16u), c.r[2].d[0]);  if (depth < kMaxDepth) unit_0049(c, 298u, depth + 1u); else { c.pc = 0x002279C0u; return; } if (c.pc != 0x00356568u) [[unlikely]] return; }
L_00356568:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_0035656C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_00356580:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[2].d[0] = ld8((c.r[4].w[0] + 40u));
    c.budget -= 10;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_003565F8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003565B0u); set32(c.r[4], ld32((c.r[17].w[0] + 44u)));  if (depth < kMaxDepth) unit_009B(c, 386u, depth + 1u); else { c.pc = 0x0036F190u; return; } if (c.pc != 0x003565B0u) [[unlikely]] return; }
L_003565B0:
    set32(c.r[3], ld32((c.r[17].w[0] + 44u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[18], c.r[2].w[0] << 1);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], c.r[18].w[0] + c.r[3].w[0]);
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 36u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003565D0u); set32(c.r[4], ld32((c.r[1].w[0] - 27872u)));  if (depth < kMaxDepth) unit_0051(c, 239u, depth + 1u); else { c.pc = 0x00246330u; return; } if (c.pc != 0x003565D0u) [[unlikely]] return; }
L_003565D0:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00356644; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 44u)));
    set32(c.r[3], c.r[18].w[0] + c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 36u)));
    c.r[3].d[0] = c.r[3].d[0] & 32768ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_00356644; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00356644; } }
L_003565F8:
    set32(c.r[2], ld32((c.r[17].w[0] + 1304u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);  if (t) { goto L_00356630; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 44u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 6u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00356618u); set32(c.r[16], ld32((c.r[1].w[0] - 27872u)));  if (depth < kMaxDepth) unit_009B(c, 382u, depth + 1u); else { c.pc = 0x0036F120u; return; } if (c.pc != 0x00356618u) [[unlikely]] return; }
L_00356618:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00356628u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0051(c, 238u, depth + 1u); else { c.pc = 0x002462B0u; return; } if (c.pc != 0x00356628u) [[unlikely]] return; }
L_00356628:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_00356648; } }
L_00356630:
    set32(c.r[5], ld32((c.r[17].w[0] + 1312u)));
    set32(c.r[4], ld32((c.r[1].w[0] - 27872u)));
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00356644u); c.r[7].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0051(c, 243u, depth + 1u); else { c.pc = 0x00246460u; return; } if (c.pc != 0x00356644u) [[unlikely]] return; }
L_00356644:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_00356648:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00356660:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 1292u)));
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != c.r[16].d[0]; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003566CC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00356688u); set32(c.r[4], 0u + 402u);  if (depth < kMaxDepth) unit_002C(c, 36u, depth + 1u); else { c.pc = 0x001B0690u; return; } if (c.pc != 0x00356688u) [[unlikely]] return; }
L_00356688:
    set32(c.r[4], ld32((c.r[16].w[0] + 28u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_003566B0; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 48u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003566A8u); set32(c.r[5], 0u + 2u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003566A8u) [[unlikely]] return; }
L_003566A8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_003566D0; } }
L_003566B0:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_003566CC; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 52u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003566CCu); set32(c.r[5], 0u + 3u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003566CCu) [[unlikely]] return; }
L_003566CC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_003566D0:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003566E0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 1292u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != c.r[5].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003567A0; } }
    set32(c.r[5], ld32((c.r[3].w[0] + 24u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00356704u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0095(c, 302u, depth + 1u); else { c.pc = 0x00356580u; return; } if (c.pc != 0x00356704u) [[unlikely]] return; }
L_00356704:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035670Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_009C(c, 167u, depth + 1u); else { c.pc = 0x00370C80u; return; } if (c.pc != 0x0035670Cu) [[unlikely]] return; }
L_0035670C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u + 403u);  if (t) { goto L_00356798; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 40u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00356778; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 44u)));
    set32(c.r[2], 0u + 8u);
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00356778; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 4u)));
    set32(c.r[2], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00356778; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 1308u)));
    c.r[1].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[4], 0u + 2u);  if (t) { goto L_00356778; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u + 9u);
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035676Cu); c.r[9].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_001A(c, 267u, depth + 1u); else { c.pc = 0x0016A910u; return; } if (c.pc != 0x0035676Cu) [[unlikely]] return; }
L_0035676C:
    set32(c.r[2], ld32((c.r[16].w[0] + 1292u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 36u), 0u);  if (t) { goto L_00356788; } }
L_00356778:
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00356788u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00356788u) [[unlikely]] return; }
L_00356788:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00356790u); set32(c.r[4], 0u + 400u);  if (depth < kMaxDepth) unit_002C(c, 36u, depth + 1u); else { c.pc = 0x001B0690u; return; } if (c.pc != 0x00356790u) [[unlikely]] return; }
L_00356790:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_003567A4; } }
L_00356798:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003567A0u);  if (depth < kMaxDepth) unit_002C(c, 36u, depth + 1u); else { c.pc = 0x001B0690u; return; } if (c.pc != 0x003567A0u) [[unlikely]] return; }
L_003567A0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_003567A4:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003567B0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 1292u)));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != c.r[5].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00356978; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 44u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003567DCu); c.r[18].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_009B(c, 392u, depth + 1u); else { c.pc = 0x0036F290u; return; } if (c.pc != 0x003567DCu) [[unlikely]] return; }
L_003567DC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00356844; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 1292u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[2].w[0] + 24u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003567F8u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0095(c, 302u, depth + 1u); else { c.pc = 0x00356580u; return; } if (c.pc != 0x003567F8u) [[unlikely]] return; }
L_003567F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00356800u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_009C(c, 167u, depth + 1u); else { c.pc = 0x00370C80u; return; } if (c.pc != 0x00356800u) [[unlikely]] return; }
L_00356800:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00356958; } }
    set32(c.r[2], 0u + 1u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st8((c.r[16].w[0] + 1317u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[16].w[0] + 1292u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 24u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00356824u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0095(c, 302u, depth + 1u); else { c.pc = 0x00356580u; return; } if (c.pc != 0x00356824u) [[unlikely]] return; }
L_00356824:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 56u)));
    st32((c.r[16].w[0] + 1320u), c.r[2].w[0]);
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0035683Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0035683Cu) [[unlikely]] return; }
L_0035683C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_00356958; } }
L_00356844:
    set32(c.r[2], ld32((c.r[16].w[0] + 1292u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[2].w[0] + 24u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00356858u); set32(c.r[6], c.r[29].w[0] + 79u);  if (depth < kMaxDepth) unit_0095(c, 302u, depth + 1u); else { c.pc = 0x00356580u; return; } if (c.pc != 0x00356858u) [[unlikely]] return; }
L_00356858:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00356864u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_009C(c, 167u, depth + 1u); else { c.pc = 0x00370C80u; return; } if (c.pc != 0x00356864u) [[unlikely]] return; }
L_00356864:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00356958; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00356880; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00356880u);  if (depth < kMaxDepth) unit_0095(c, 362u, depth + 1u); else { c.pc = 0x00356CF0u; return; } if (c.pc != 0x00356880u) [[unlikely]] return; }
L_00356880:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 40u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003568F0; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 1308u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00356898u); set32(c.r[4], ld32((c.r[16].w[0] + 44u)));  if (depth < kMaxDepth) unit_009B(c, 386u, depth + 1u); else { c.pc = 0x0036F190u; return; } if (c.pc != 0x00356898u) [[unlikely]] return; }
L_00356898:
    set32(c.r[3], c.r[2].w[0] - 115u);
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[3], 0u + 117u);  if (t) { goto L_003568B0; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_003568C8; } }
L_003568B0:
    set32(c.r[3], ld32((c.r[16].w[0] + 44u)));
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 36u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003568C8u); set32(c.r[4], c.r[3].w[0] + 20u);  if (depth < kMaxDepth) unit_009C(c, 156u, depth + 1u); else { c.pc = 0x00370B30u; return; } if (c.pc != 0x003568C8u) [[unlikely]] return; }
L_003568C8:
    set32(c.r[5], ld32((c.r[16].w[0] + 44u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[2].w[0] << 1);
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], c.r[3].w[0] + c.r[5].w[0]);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 36u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003568E8u); set32(c.r[4], ld32((c.r[1].w[0] - 736u)));  if (depth < kMaxDepth) unit_0097(c, 167u, depth + 1u); else { c.pc = 0x0035DD70u; return; } if (c.pc != 0x003568E8u) [[unlikely]] return; }
L_003568E8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_00356958; } }
L_003568F0:
    set32(c.r[5], ld32((c.r[16].w[0] + 1308u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003568FCu); set32(c.r[4], ld32((c.r[16].w[0] + 44u)));  if (depth < kMaxDepth) unit_009B(c, 386u, depth + 1u); else { c.pc = 0x0036F190u; return; } if (c.pc != 0x003568FCu) [[unlikely]] return; }
L_003568FC:
    c.r[6].d[0] = ld8((c.r[29].w[0] + 79u));
    c.r[5].d[0] = 0ull | 32768ull;
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 56u)));
    set32(c.r[3], c.r[2].w[0] - 115u);
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    if (c.r[6].d[0] == 0) c.r[5].d[0] = 0ull;
    c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];
    c.r[17].d[0] = c.r[4].d[0] << 48;
    c.budget -= 10;
    { const bool t = c.r[1].d[0] != 0ull; c.r[17].d[0] = static_cast<std::uint64_t>(c.r[17].sd[0] >> 48);  if (t) { goto L_00356930; } }
    set32(c.r[3], 0u + 117u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_00356940; } }
L_00356930:
    set32(c.r[2], ld32((c.r[16].w[0] + 44u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00356940u); set32(c.r[4], c.r[2].w[0] + 20u);  if (depth < kMaxDepth) unit_009C(c, 156u, depth + 1u); else { c.pc = 0x00370B30u; return; } if (c.pc != 0x00356940u) [[unlikely]] return; }
L_00356940:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[1].w[0] - 736u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00356954u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0097(c, 167u, depth + 1u); else { c.pc = 0x0035DD70u; return; } if (c.pc != 0x00356954u) [[unlikely]] return; }
L_00356954:
    c.r[18].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_00356958:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull; set32(c.r[4], 0u + 403u);  if (t) { goto L_00356970; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00356968u); set32(c.r[4], 0u + 400u);  if (depth < kMaxDepth) unit_002C(c, 36u, depth + 1u); else { c.pc = 0x001B0690u; return; } if (c.pc != 0x00356968u) [[unlikely]] return; }
L_00356968:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_0035697C; } }
L_00356970:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00356978u);  if (depth < kMaxDepth) unit_002C(c, 36u, depth + 1u); else { c.pc = 0x001B0690u; return; } if (c.pc != 0x00356978u) [[unlikely]] return; }
L_00356978:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_0035697C:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00356990:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 1292u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != c.r[5].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00356A08; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 36u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_003569EC; } }
    st32((c.r[16].w[0] + 36u), 0u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003569C8u); st8((c.r[16].w[0] + 41u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0095(c, 385u, depth + 1u); else { c.pc = 0x00356FC0u; return; } if (c.pc != 0x003569C8u) [[unlikely]] return; }
L_003569C8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003569D8u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0095(c, 297u, depth + 1u); else { c.pc = 0x00356470u; return; } if (c.pc != 0x003569D8u) [[unlikely]] return; }
L_003569D8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003569E4u); set32(c.r[4], ld32((c.r[1].w[0] - 736u)));  if (depth < kMaxDepth) unit_0097(c, 170u, depth + 1u); else { c.pc = 0x0035DDD0u; return; } if (c.pc != 0x003569E4u) [[unlikely]] return; }
L_003569E4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u + 401u);  if (t) { goto L_00356A00; } }
L_003569EC:
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 36u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003569FCu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003569FCu) [[unlikely]] return; }
L_003569FC:
    set32(c.r[4], 0u + 401u);
    c.budget -= 1;
L_00356A00:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00356A08u);  if (depth < kMaxDepth) unit_002C(c, 36u, depth + 1u); else { c.pc = 0x001B0690u; return; } if (c.pc != 0x00356A08u) [[unlikely]] return; }
L_00356A08:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00356A20:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 40u));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_00356A38; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_00356A38:
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 1248u)));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 32u));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00356A60; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00356A60u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00356A60u) [[unlikely]] return; }
L_00356A60:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00356A70:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[17], ld32((c.r[1].w[0] + 25376u)));
    c.budget -= 8;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00356AE0; } }
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 44u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00356AA0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00356AA0u) [[unlikely]] return; }
L_00356AA0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00356C08; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00356AB0u);  if (depth < kMaxDepth) unit_001A(c, 231u, depth + 1u); else { c.pc = 0x0016A360u; return; } if (c.pc != 0x00356AB0u) [[unlikely]] return; }
L_00356AB0:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_00356AC0; } }
    st8((c.r[16].w[0] + 1316u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 1;
L_00356AC0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00356AC8u);  if (depth < kMaxDepth) unit_001A(c, 271u, depth + 1u); else { c.pc = 0x0016A9E0u; return; } if (c.pc != 0x00356AC8u) [[unlikely]] return; }
L_00356AC8:
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00356AD8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00356AD8u) [[unlikely]] return; }
L_00356AD8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = ld8((c.r[16].w[0] + 41u));  if (t) { goto L_00356C0C; } }
L_00356AE0:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 1240u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00356B18; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 1244u)));
    set32(c.r[3], c.r[2].w[0] - 1u);
    st32((c.r[16].w[0] + 1244u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 1232u)));
    set32(c.r[2], 0u - c.r[2].w[0]);
    c.r[1].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[4], c.r[16].w[0] + 1184u);  if (t) { goto L_00356B4C; } }
    st32((c.r[16].w[0] + 1244u), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1240u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00356B48; } }
L_00356B18:
    set32(c.r[2], ld32((c.r[16].w[0] + 1244u)));
    set32(c.r[4], c.r[2].w[0] + 1u);
    st32((c.r[16].w[0] + 1244u), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 1236u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 1232u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.r[1].d[0] = c.r[2].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00356B48; } }
    st32((c.r[16].w[0] + 1244u), c.r[2].w[0]);
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 1240u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
L_00356B48:
    set32(c.r[4], c.r[16].w[0] + 1184u);
    c.budget -= 1;
L_00356B4C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00356B54u);  if (depth < kMaxDepth) unit_002A(c, 280u, depth + 1u); else { c.pc = 0x001AB050u; return; } if (c.pc != 0x00356B54u) [[unlikely]] return; }
L_00356B54:
    set32(c.r[5], ld32((c.r[16].w[0] + 1304u)));
    c.r[1].d[0] = c.r[5].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);  if (t) { goto L_00356C08; } }
    set32(c.r[3], ld32((c.r[1].w[0] - 1536u)));
    c.r[4].d[0] = ld16((c.r[3].w[0] + 168u));
    c.r[3].d[0] = c.r[4].d[0] & 32768ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_00356BB4; } }
    c.budget -= 2;
    { const bool t = c.r[5].sd[0] <= 0; set32(c.r[4], 0u + 402u);  if (t) { goto L_00356B98; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 56u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00356B94u); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00356B94u) [[unlikely]] return; }
L_00356B94:
    set32(c.r[4], 0u + 402u);
    c.budget -= 1;
L_00356B98:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00356BA0u);  if (depth < kMaxDepth) unit_002C(c, 36u, depth + 1u); else { c.pc = 0x001B0690u; return; } if (c.pc != 0x00356BA0u) [[unlikely]] return; }
L_00356BA0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00356BACu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0095(c, 380u, depth + 1u); else { c.pc = 0x00356F20u; return; } if (c.pc != 0x00356BACu) [[unlikely]] return; }
L_00356BAC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_00356BF8; } }
L_00356BB4:
    c.r[3].d[0] = c.r[4].d[0] & 8192ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00356BF8; } }
    c.budget -= 2;
    { const bool t = c.r[5].sd[0] <= 0; set32(c.r[4], 0u + 402u);  if (t) { goto L_00356BE0; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 60u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00356BDCu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00356BDCu) [[unlikely]] return; }
L_00356BDC:
    set32(c.r[4], 0u + 402u);
    c.budget -= 1;
L_00356BE0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00356BE8u);  if (depth < kMaxDepth) unit_002C(c, 36u, depth + 1u); else { c.pc = 0x001B0690u; return; } if (c.pc != 0x00356BE8u) [[unlikely]] return; }
L_00356BE8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00356BF4u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0095(c, 380u, depth + 1u); else { c.pc = 0x00356F20u; return; } if (c.pc != 0x00356BF4u) [[unlikely]] return; }
L_00356BF4:
    c.r[6].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_00356BF8:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00356C08; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00356C08u);  if (depth < kMaxDepth) unit_0095(c, 370u, depth + 1u); else { c.pc = 0x00356E00u; return; } if (c.pc != 0x00356C08u) [[unlikely]] return; }
L_00356C08:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 41u));
    c.budget -= 1;
L_00356C0C:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00356C30; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 1252u)));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 32u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00356C30; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00356C2Cu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0095(c, 385u, depth + 1u); else { c.pc = 0x00356FC0u; return; } if (c.pc != 0x00356C2Cu) [[unlikely]] return; }
L_00356C2C:
    st8((c.r[16].w[0] + 41u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_00356C30:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00356C50:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 40u));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_00356C68; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_00356C68:
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 1248u)));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 33u));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00356C90; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00356C90u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00356C90u) [[unlikely]] return; }
L_00356C90:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00356CA0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 40u));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_00356CB8; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_00356CB8:
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 1248u)));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 33u));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00356CE0; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00356CE0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00356CE0u) [[unlikely]] return; }
L_00356CE0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00356CF0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], 0u + 1u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[5].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[4].w[0] + 36u), c.r[2].w[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00356D14u); st8((c.r[4].w[0] + 41u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0095(c, 385u, depth + 1u); else { c.pc = 0x00356FC0u; return; } if (c.pc != 0x00356D14u) [[unlikely]] return; }
L_00356D14:
    set32(c.r[5], 0u + 1u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00356D24u); c.r[6].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0095(c, 297u, depth + 1u); else { c.pc = 0x00356470u; return; } if (c.pc != 0x00356D24u) [[unlikely]] return; }
L_00356D24:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00356D40:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 1292u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00356D90; } }
    st8((c.r[29].w[0] + 47u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], ld32((c.r[16].w[0] + 1292u)));
    set32(c.r[4], ld32((c.r[1].w[0] - 27872u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 1312u)));
    set32(c.r[6], ld32((c.r[2].w[0] + 24u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00356D78u); set32(c.r[7], c.r[29].w[0] + 47u);  if (depth < kMaxDepth) unit_0051(c, 243u, depth + 1u); else { c.pc = 0x00246460u; return; } if (c.pc != 0x00356D78u) [[unlikely]] return; }
L_00356D78:
    c.r[3].d[0] = ld8((c.r[29].w[0] + 47u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00356D94; } }
    st8((c.r[16].w[0] + 1316u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_00356D98; } }
L_00356D90:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00356D94:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_00356D98:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00356DB0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 1292u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00356DD4; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00356DD4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00356DD4u) [[unlikely]] return; }
L_00356DD4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00356DE0:
    set32(c.r[2], ld32((c.r[4].w[0] + 1292u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00356DF4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 24u)));  if (t) { goto L_00356DF8; } }
L_00356DF4:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00356DF8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00356E00:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00356E14u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_003F(c, 299u, depth + 1u); else { c.pc = 0x001FF0D0u; return; } if (c.pc != 0x00356E14u) [[unlikely]] return; }
L_00356E14:
    set32(c.r[4], ld32((c.r[16].w[0] + 1296u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00356E28; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00356E28u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100210u; return; } if (c.pc != 0x00356E28u) [[unlikely]] return; }
L_00356E28:
    st32((c.r[16].w[0] + 1296u), 0u);
    set32(c.r[4], ld32((c.r[16].w[0] + 1292u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00356E50; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00356E50; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00356E50u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00356E50u) [[unlikely]] return; }
L_00356E50:
    st32((c.r[16].w[0] + 1292u), 0u);
    c.r[2].d[0] = ld8((c.r[16].w[0] + 40u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);  if (t) { goto L_00356E6C; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 1300u), c.r[2].w[0]);  if (t) { goto L_00356E7C; } }
L_00356E6C:
    set32(c.r[4], ld32((c.r[1].w[0] - 27872u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00356E78u); set32(c.r[5], ld32((c.r[16].w[0] + 1312u)));  if (depth < kMaxDepth) unit_0051(c, 244u, depth + 1u); else { c.pc = 0x002464F0u; return; } if (c.pc != 0x00356E78u) [[unlikely]] return; }
L_00356E78:
    st32((c.r[16].w[0] + 1300u), c.r[2].w[0]);
    c.budget -= 1;
L_00356E7C:
    set32(c.r[2], ld32((c.r[16].w[0] + 1300u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0; set32(c.r[4], 0u + 44u);  if (t) { goto L_00356EA8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00356E90u); set32(c.r[4], c.r[2].w[0] << 3);  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x001001F0u; return; } if (c.pc != 0x00356E90u) [[unlikely]] return; }
L_00356E90:
    st32((c.r[16].w[0] + 1296u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 1300u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 1296u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00356EA4u); set32(c.r[5], c.r[2].w[0] << 3);  if (depth < kMaxDepth) unit_0010(c, 111u, depth + 1u); else { c.pc = 0x00141670u; return; } if (c.pc != 0x00356EA4u) [[unlikely]] return; }
L_00356EA4:
    set32(c.r[4], 0u + 44u);
    c.budget -= 1;
L_00356EA8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00356EB0u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00356EB0u) [[unlikely]] return; }
L_00356EB0:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; c.r[7].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00356EE4; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00356EC8; } }
    set32(c.r[7], c.r[7].w[0] + 20u);
    c.budget -= 1;
L_00356EC8:
    set32(c.r[8], ld32((c.r[16].w[0] + 1296u)));
    set32(c.r[5], 0u + 4u);
    set32(c.r[9], ld32((c.r[16].w[0] + 1300u)));
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00356EE0u); set32(c.r[10], 0u + 1u);  if (depth < kMaxDepth) unit_000B(c, 371u, depth + 1u); else { c.pc = 0x0012EBA0u; return; } if (c.pc != 0x00356EE0u) [[unlikely]] return; }
L_00356EE0:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00356EE4:
    st32((c.r[16].w[0] + 1292u), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 1292u)));
    st8((c.r[3].w[0] + 32u), static_cast<std::uint8_t>(0u));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 40u));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00356F10; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 1292u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00356F10u); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00356F10u) [[unlikely]] return; }
L_00356F10:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00356F20:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[2], 0u + 1u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[4].w[0] + 1312u)));
    c.budget -= 8;
    { const bool t = c.r[5].d[0] != c.r[2].d[0]; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00356F78; } }
L_00356F40:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < 9ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00356F54; } }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00356F54:
    st32((c.r[17].w[0] + 1312u), c.r[16].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], ld32((c.r[1].w[0] - 27872u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00356F68u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0051(c, 244u, depth + 1u); else { c.pc = 0x002464F0u; return; } if (c.pc != 0x00356F68u) [[unlikely]] return; }
L_00356F68:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00356F40u | kUnwind; return; } goto L_00356F40; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_00356FA8; } }
L_00356F78:
    set32(c.r[16], c.r[16].w[0] - 1u);
    c.budget -= 3;
    { const bool t = c.r[16].sd[0] >= 0;  if (t) { goto L_00356F88; } }
    set32(c.r[16], 0u + 8u);
    c.budget -= 1;
L_00356F88:
    st32((c.r[17].w[0] + 1312u), c.r[16].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], ld32((c.r[1].w[0] - 27872u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00356F9Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0051(c, 244u, depth + 1u); else { c.pc = 0x002464F0u; return; } if (c.pc != 0x00356F9Cu) [[unlikely]] return; }
L_00356F9C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00356F78u | kUnwind; return; } goto L_00356F78; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_00356FA8:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00356FC0:
    set32(c.r[29], c.r[29].w[0] - 192u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[7].d[0] = ld8((c.r[4].w[0] + 40u));
    c.budget -= 8;
    { const bool t = c.r[7].d[0] == 0ull; c.r[18].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00356FF0; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 1300u)));
    c.r[1].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_003571C4; } }
L_00356FF0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[6], c.r[29].w[0] + 160u);
    set32(c.r[3], c.r[3].w[0] + 512u);
    ld128((c.r[3].w[0]) & ~15u, c.r[4]);
    ld128((c.r[3].w[0] + 16u) & ~15u, c.r[3]);
    st128((c.r[6].w[0]) & ~15u, c.r[4]);
    c.budget -= 8;
    { const bool t = c.r[5].d[0] == 0ull; st128((c.r[6].w[0] + 16u) & ~15u, c.r[3]);  if (t) { goto L_00357174; } }
    c.budget -= 2;
    { const bool t = c.r[7].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x00420000u);  if (t) { goto L_00357074; } }
    set32(c.r[16], ld32((c.r[18].w[0] + 48u)));
    set32(c.r[5], 0u + 6u);
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00357030u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00357030u) [[unlikely]] return; }
L_00357030:
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[2]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[5], 0u + 7u);
    st128((c.r[16].w[0] + 96u) & ~15u, c.r[2]);
    c.f[0] = ld32((c.r[1].w[0] - 7280u));
    st32((c.r[16].w[0] + 104u), c.f[0]);
    set32(c.r[16], ld32((c.r[18].w[0] + 52u)));
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 11;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0035705Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0035705Cu) [[unlikely]] return; }
L_0035705C:
    ld128((c.r[29].w[0] + 176u) & ~15u, c.r[3]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    st128((c.r[16].w[0] + 96u) & ~15u, c.r[3]);
    c.f[0] = ld32((c.r[1].w[0] - 7280u));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 104u), c.f[0]);  if (t) { goto L_003571C4; } }
L_00357074:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[3], c.r[3].w[0] + 544u);
    set32(c.r[7], c.r[29].w[0] + 144u);
    ld128((c.r[3].w[0]) & ~15u, c.r[3]);
    set32(c.r[6], c.r[6].w[0] + 560u);
    set32(c.r[5], c.r[29].w[0] + 80u);
    set32(c.r[4], 0u + 4u);
    st128((c.r[7].w[0]) & ~15u, c.r[3]);
    c.budget -= 8;
L_00357094:
    ld128((c.r[6].w[0]) & ~15u, c.r[3]);
    set32(c.r[4], c.r[4].w[0] - 1u);
    st128((c.r[5].w[0]) & ~15u, c.r[3]);
    set32(c.r[6], c.r[6].w[0] + 16u);
    set32(c.r[5], c.r[5].w[0] + 16u);
    c.budget -= 7;
    { const bool t = c.r[4].sd[0] > 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00357094u | kUnwind; return; } goto L_00357094; } }
    c.r[3].d[0] = ld8((c.r[18].w[0] + 41u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_003570EC; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 36u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; c.r[3].sd[0] = static_cast<std::int32_t>(0x43A90000u);  if (t) { goto L_003570E4; } }
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[4]);
    st32((c.r[29].w[0] + 116u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 132u), c.r[3].w[0]);
    ld128((c.r[29].w[0] + 176u) & ~15u, c.r[3]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[4]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[3]);
    c.budget -= 6;
L_003570E4:
    st8((c.r[18].w[0] + 41u), static_cast<std::uint8_t>(0u));
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_003570EC:
    set32(c.r[4], c.r[17].w[0] << 2);
    c.budget -= 1;
L_003570F0:
    c.r[1].d[0] = c.r[17].sd[0] < 2ll ? 1ull : 0ull;
    set32(c.r[3], c.r[18].w[0] + c.r[4].w[0]);
    set32(c.r[16], ld32((c.r[3].w[0] + 48u)));
    c.budget -= 5;
    { const bool t = c.r[1].d[0] != 0ull; c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_00357118; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 1304u)));
    c.r[1].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00357118; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00357118:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0035715C; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0035715C; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[4].w[0] + c.r[29].w[0]);
    c.r[5].d[0] = ld16((c.r[2].w[0] + 144u));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00357140u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00357140u) [[unlikely]] return; }
L_00357140:
    set32(c.r[3], c.r[17].w[0] << 4);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[3], c.r[3].w[0] + c.r[29].w[0]);
    ld128((c.r[3].w[0] + 80u) & ~15u, c.r[3]);
    st128((c.r[16].w[0] + 96u) & ~15u, c.r[3]);
    c.f[0] = ld32((c.r[1].w[0] - 7280u));
    st32((c.r[16].w[0] + 104u), c.f[0]);
    c.budget -= 7;
L_0035715C:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[3].d[0] = c.r[17].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[4], c.r[17].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003570F0u | kUnwind; return; } goto L_003570F0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_003571C8; } }
L_00357174:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[4], c.r[29].w[0] + 64u);
    set32(c.r[3], c.r[3].w[0] + 624u);
    c.r[16].d[0] = 0ull + 0ull;
    ld128((c.r[3].w[0]) & ~15u, c.r[3]);
    st128((c.r[4].w[0]) & ~15u, c.r[3]);
    set32(c.r[5], c.r[16].w[0] << 2);
    c.budget -= 7;
L_00357190:
    set32(c.r[3], c.r[18].w[0] + c.r[5].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0] + 48u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003571B4; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[2], c.r[5].w[0] + c.r[29].w[0]);
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003571B4u); c.r[5].d[0] = ld16((c.r[2].w[0] + 64u));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003571B4u) [[unlikely]] return; }
L_003571B4:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[3].d[0] = c.r[16].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[5], c.r[16].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00357190u | kUnwind; return; } goto L_00357190; } }
L_003571C4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_003571C8:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 192u);  c.pc = t; return; }
L_003571E0:
    set32(c.r[29], c.r[29].w[0] - 192u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42700000u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    c.f[0] = c.r[2].w[0];
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 1252u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 1248u)));
    c.f[1] = ld32((c.r[2].w[0] + 12u));
    c.f[2] = ld32((c.r[3].w[0] + 12u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.f[2] = fp::cvt_w_s(c.f[2]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[18], c.f[2]);
    set32(c.r[17], c.f[0]);
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00357234u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x00357234u) [[unlikely]] return; }
L_00357234:
    set32(c.r[6], ld32((c.r[2].w[0])));
    set32(c.r[4], c.r[17].w[0] + 50u);
    c.f[0] = c.r[4].w[0];
    set32(c.r[3], c.r[18].w[0] + 265u);
    c.f[1] = c.r[3].w[0];
    set32(c.r[5], 0u + 255u);
    c.f[13] = fp::cvt_s_w(c.f[0]);
    set32(c.r[4], c.r[19].w[0] + 80u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    st32((c.r[19].w[0] + 128u), c.r[6].w[0]);
    set32(c.r[6], ld32((c.r[2].w[0] + 4u)));
    c.f[0] = c.r[3].w[0];
    c.f[12] = fp::cvt_s_w(c.f[1]);
    st32((c.r[19].w[0] + 132u), c.r[6].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    st32((c.r[19].w[0] + 136u), c.r[2].w[0]);
    st32((c.r[19].w[0] + 140u), c.r[5].w[0]);
    set32(c.r[25], ld32((c.r[19].w[0] + 256u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 23;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00357290u); c.f[14] = fp::cvt_s_w(c.f[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00357290u) [[unlikely]] return; }
L_00357290:
    set32(c.r[4], c.r[19].w[0] + 80u);
    set32(c.r[5], 0u + 234u);
    set32(c.r[6], 0u + 401u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003572A4u); set32(c.r[7], 0u + 3u);  if (depth < kMaxDepth) unit_0062(c, 298u, depth + 1u); else { c.pc = 0x0028B8C0u; return; } if (c.pc != 0x003572A4u) [[unlikely]] return; }
L_003572A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003572ACu); set32(c.r[4], 0u + 17u);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x003572ACu) [[unlikely]] return; }
L_003572AC:
    set32(c.r[8], ld32((c.r[2].w[0])));
    set32(c.r[3], 0u + 395u);
    c.f[1] = c.r[3].w[0];
    set32(c.r[7], 0u + 160u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x43640000u);
    set32(c.r[5], c.r[17].w[0] + 53u);
    c.f[2] = fp::cvt_s_w(c.f[1]);
    set32(c.r[3], c.r[18].w[0] + 268u);
    set32(c.r[4], c.r[19].w[0] + 80u);
    st32((c.r[19].w[0] + 128u), c.r[8].w[0]);
    set32(c.r[8], ld32((c.r[2].w[0] + 4u)));
    c.f[0] = c.r[3].w[0];
    c.f[1] = c.r[5].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.f[12] = fp::cvt_s_w(c.f[0]);
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    st32((c.r[19].w[0] + 132u), c.r[8].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    c.f[0] = c.r[3].w[0];
    c.f[13] = fp::cvt_s_w(c.f[1]);
    st32((c.r[19].w[0] + 136u), c.r[2].w[0]);
    st32((c.r[19].w[0] + 140u), c.r[7].w[0]);
    st32((c.r[19].w[0] + 240u), c.r[6].w[0]);
    st32((c.r[19].w[0] + 244u), c.f[2]);
    set32(c.r[25], ld32((c.r[19].w[0] + 256u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 29;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00357320u); c.f[14] = fp::cvt_s_w(c.f[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00357320u) [[unlikely]] return; }
L_00357320:
    set32(c.r[25], ld32((c.r[19].w[0] + 256u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00357330u); set32(c.r[4], c.r[19].w[0] + 80u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00357330u) [[unlikely]] return; }
L_00357330:
    set32(c.r[3], c.r[17].w[0] + 53u);
    set32(c.r[2], c.r[18].w[0] + 268u);
    c.f[0] = c.r[3].w[0];
    set32(c.r[25], ld32((c.r[19].w[0] + 512u)));
    c.f[1] = c.r[2].w[0];
    set32(c.r[4], c.r[19].w[0] + 336u);
    c.f[13] = fp::cvt_s_w(c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.f[0] = c.r[2].w[0];
    c.f[12] = fp::cvt_s_w(c.f[1]);
    c.budget -= 15;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0035736Cu); c.f[14] = fp::cvt_s_w(c.f[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0035736Cu) [[unlikely]] return; }
L_0035736C:
    set32(c.r[25], ld32((c.r[19].w[0] + 512u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0035737Cu); set32(c.r[4], c.r[19].w[0] + 336u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0035737Cu) [[unlikely]] return; }
L_0035737C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[4], c.r[29].w[0] + 96u);
    set32(c.r[5], c.r[5].w[0] + 640u);
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
L_0035738C:
    ld128((c.r[5].w[0]) & ~15u, c.r[2]);
    set32(c.r[3], c.r[3].w[0] - 1u);
    st128((c.r[4].w[0]) & ~15u, c.r[2]);
    set32(c.r[5], c.r[5].w[0] + 16u);
    set32(c.r[4], c.r[4].w[0] + 16u);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0035738Cu | kUnwind; return; } goto L_0035738C; } }
    c.f[0] = ld32((c.r[5].w[0]));
    c.r[16].d[0] = 0ull + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[4].w[0]), c.f[0]);
    set32(c.r[3], ld32((c.r[19].w[0] + 1312u)));
    c.budget -= 5;
L_003573BC:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[5].d[0];  if (t) { goto L_003573C8; } }
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 1;
L_003573C8:
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.r[2].d[0] = c.r[5].sd[0] < 9ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003573BCu | kUnwind; return; } goto L_003573BC; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 1304u)));
    c.r[1].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_003575AC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[20].d[0] = 0ull + 0ull;  if (t) { goto L_003574C0; } }
L_003573F4:
    set32(c.r[3], c.r[17].w[0] + 22u);
    set32(c.r[8], ld32((c.r[1].w[0] - 768u)));
    c.f[0] = c.r[3].w[0];
    set32(c.r[2], c.r[20].w[0] << 4);
    set32(c.r[4], c.r[18].w[0] + 268u);
    set32(c.r[2], c.r[2].w[0] - c.r[20].w[0]);
    set32(c.r[7], c.r[29].w[0] + 184u);
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[6], c.r[29].w[0] + 176u);
    set32(c.r[4], c.r[4].w[0] - 3u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.f[1] = c.r[4].w[0];
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    set32(c.r[8], ld32((c.r[8].w[0] + 36u)));
    c.f[13] = fp::cvt_s_w(c.f[0]);
    set32(c.r[5], 0u + 1u);
    c.r[3].d[0] = ld64((c.r[8].w[0] + 464u));
    c.f[0] = c.r[2].w[0];
    st64((c.r[29].w[0] + 184u), c.r[3].d[0]);
    set32(c.r[4], ld32((c.r[19].w[0] + 64u)));
    c.f[14] = fp::cvt_s_w(c.f[0]);
    st64((c.r[4].w[0] + 256u), c.r[3].d[0]);
    c.r[2].d[0] = ld64((c.r[7].w[0]));
    st64((c.r[6].w[0]), c.r[2].d[0]);
    c.r[2].d[0] = ld8((c.r[29].w[0] + 179u));
    c.r[2].d[0] = c.r[2].d[0] << 58;
    c.r[2].d[0] = c.r[2].d[0] >> 60;
    set32(c.r[2], c.r[5].w[0] << (c.r[2].w[0] & 31u));
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[4].w[0] + 160u), c.f[0]);
    c.r[2].d[0] = ld64((c.r[29].w[0] + 176u));
    c.r[2].d[0] = c.r[2].d[0] << 30;
    c.r[2].d[0] = c.r[2].d[0] >> 60;
    set32(c.r[2], c.r[5].w[0] << (c.r[2].w[0] & 31u));
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[4].w[0] + 164u), c.f[0]);
    set32(c.r[4], ld32((c.r[19].w[0] + 64u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 45;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003574A8u); c.f[12] = fp::cvt_s_w(c.f[1]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003574A8u) [[unlikely]] return; }
L_003574A8:
    set32(c.r[4], ld32((c.r[19].w[0] + 64u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003574BCu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003574BCu) [[unlikely]] return; }
L_003574BC:
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.budget -= 1;
L_003574C0:
    c.r[2].d[0] = c.r[20].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00540000u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003573F4u | kUnwind; return; } goto L_003573F4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[20], 0u + 8u);  if (t) { goto L_003575A0; } }
L_003574D4:
    set32(c.r[3], c.r[17].w[0] + 22u);
    set32(c.r[8], ld32((c.r[1].w[0] - 768u)));
    c.f[0] = c.r[3].w[0];
    set32(c.r[2], c.r[20].w[0] << 4);
    set32(c.r[4], c.r[18].w[0] + 268u);
    set32(c.r[2], c.r[2].w[0] - c.r[20].w[0]);
    set32(c.r[7], c.r[29].w[0] + 168u);
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[6], c.r[29].w[0] + 160u);
    set32(c.r[4], c.r[4].w[0] - 3u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.f[1] = c.r[4].w[0];
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    set32(c.r[8], ld32((c.r[8].w[0] + 36u)));
    c.f[13] = fp::cvt_s_w(c.f[0]);
    set32(c.r[5], 0u + 1u);
    c.r[3].d[0] = ld64((c.r[8].w[0] + 464u));
    c.f[0] = c.r[2].w[0];
    st64((c.r[29].w[0] + 168u), c.r[3].d[0]);
    set32(c.r[4], ld32((c.r[19].w[0] + 64u)));
    c.f[14] = fp::cvt_s_w(c.f[0]);
    st64((c.r[4].w[0] + 256u), c.r[3].d[0]);
    c.r[2].d[0] = ld64((c.r[7].w[0]));
    st64((c.r[6].w[0]), c.r[2].d[0]);
    c.r[2].d[0] = ld8((c.r[29].w[0] + 163u));
    c.r[2].d[0] = c.r[2].d[0] << 58;
    c.r[2].d[0] = c.r[2].d[0] >> 60;
    set32(c.r[2], c.r[5].w[0] << (c.r[2].w[0] & 31u));
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[4].w[0] + 160u), c.f[0]);
    c.r[2].d[0] = ld64((c.r[29].w[0] + 160u));
    c.r[2].d[0] = c.r[2].d[0] << 30;
    c.r[2].d[0] = c.r[2].d[0] >> 60;
    set32(c.r[2], c.r[5].w[0] << (c.r[2].w[0] & 31u));
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[4].w[0] + 164u), c.f[0]);
    set32(c.r[4], ld32((c.r[19].w[0] + 64u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 45;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00357588u); c.f[12] = fp::cvt_s_w(c.f[1]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00357588u) [[unlikely]] return; }
L_00357588:
    set32(c.r[4], ld32((c.r[19].w[0] + 64u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0035759Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0035759Cu) [[unlikely]] return; }
L_0035759C:
    set32(c.r[20], c.r[20].w[0] - 1u);
    c.budget -= 1;
L_003575A0:
    c.r[1].d[0] = c.r[16].sd[0] < c.r[20].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00540000u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003574D4u | kUnwind; return; } goto L_003574D4; } }
L_003575AC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[17].w[0] + 22u);
    set32(c.r[8], ld32((c.r[1].w[0] - 768u)));
    c.f[0] = c.r[3].w[0];
    set32(c.r[2], c.r[16].w[0] << 4);
    set32(c.r[4], c.r[18].w[0] + 268u);
    set32(c.r[2], c.r[2].w[0] - c.r[16].w[0]);
    set32(c.r[7], c.r[29].w[0] + 152u);
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[6], c.r[29].w[0] + 144u);
    set32(c.r[4], c.r[4].w[0] - 3u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.f[1] = c.r[4].w[0];
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    set32(c.r[8], ld32((c.r[8].w[0] + 36u)));
    c.f[13] = fp::cvt_s_w(c.f[0]);
    set32(c.r[5], 0u + 1u);
    c.r[3].d[0] = ld64((c.r[8].w[0] + 496u));
    c.f[0] = c.r[2].w[0];
    st64((c.r[29].w[0] + 152u), c.r[3].d[0]);
    set32(c.r[4], ld32((c.r[19].w[0] + 64u)));
    c.f[14] = fp::cvt_s_w(c.f[0]);
    st64((c.r[4].w[0] + 256u), c.r[3].d[0]);
    c.r[2].d[0] = ld64((c.r[7].w[0]));
    st64((c.r[6].w[0]), c.r[2].d[0]);
    c.r[2].d[0] = ld8((c.r[29].w[0] + 147u));
    c.r[2].d[0] = c.r[2].d[0] << 58;
    c.r[2].d[0] = c.r[2].d[0] >> 60;
    set32(c.r[2], c.r[5].w[0] << (c.r[2].w[0] & 31u));
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[4].w[0] + 160u), c.f[0]);
    c.r[2].d[0] = ld64((c.r[29].w[0] + 144u));
    c.r[2].d[0] = c.r[2].d[0] << 30;
    c.r[2].d[0] = c.r[2].d[0] >> 60;
    set32(c.r[2], c.r[5].w[0] << (c.r[2].w[0] & 31u));
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[4].w[0] + 164u), c.f[0]);
    set32(c.r[4], ld32((c.r[19].w[0] + 64u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 46;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00357664u); c.f[12] = fp::cvt_s_w(c.f[1]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00357664u) [[unlikely]] return; }
L_00357664:
    set32(c.r[4], ld32((c.r[19].w[0] + 64u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00357678u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00357678u) [[unlikely]] return; }
L_00357678:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 26392u)));
    set32(c.r[20], ld32((c.r[2].w[0] + 332u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035768Cu); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x0035768Cu) [[unlikely]] return; }
L_0035768C:
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    st128((c.r[20].w[0] + 48u) & ~15u, c.r[2]);
    c.r[2].d[0] = ld8((c.r[19].w[0] + 40u));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);  if (t) { goto L_00357708; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = ld32((c.r[1].w[0] - 7312u));
    st32((c.r[20].w[0] + 16u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[0] = ld32((c.r[1].w[0] - 7272u));
    st32((c.r[20].w[0] + 20u), c.f[0]);
    st32((c.r[20].w[0] + 24u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 44u)));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003576CCu); set32(c.r[4], ld32((c.r[2].w[0] + 12u)));  if (depth < kMaxDepth) unit_000B(c, 461u, depth + 1u); else { c.pc = 0x0012FD60u; return; } if (c.pc != 0x003576CCu) [[unlikely]] return; }
L_003576CC:
    st32((c.r[20].w[0] + 352u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003576DCu); st32((c.r[20].w[0] + 356u), 0u);  if (depth < kMaxDepth) unit_0018(c, 67u, depth + 1u); else { c.pc = 0x00162250u; return; } if (c.pc != 0x003576DCu) [[unlikely]] return; }
L_003576DC:
    c.r[1].d[0] = c.r[2].sd[0] < 201ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[3], c.r[17].w[0] + 65u);  if (t) { goto L_00357740; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    st32((c.r[20].w[0] + 16u), c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = ld32((c.r[1].w[0] - 7272u));
    st32((c.r[20].w[0] + 20u), c.f[0]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 24u), c.r[2].w[0]);  if (t) { goto L_0035773C; } }
L_00357708:
    set32(c.r[2], c.r[16].w[0] << 2);
    c.f[0] = ld32((c.r[1].w[0] - 7312u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    st32((c.r[20].w[0] + 16u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[0] = ld32((c.r[1].w[0] - 7272u));
    st32((c.r[20].w[0] + 20u), c.f[0]);
    st32((c.r[20].w[0] + 24u), c.r[3].w[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00357734u); set32(c.r[4], ld32((c.r[2].w[0] + 96u)));  if (depth < kMaxDepth) unit_000B(c, 461u, depth + 1u); else { c.pc = 0x0012FD60u; return; } if (c.pc != 0x00357734u) [[unlikely]] return; }
L_00357734:
    st32((c.r[20].w[0] + 352u), c.r[2].w[0]);
    st32((c.r[20].w[0] + 356u), 0u);
    c.budget -= 2;
L_0035773C:
    set32(c.r[3], c.r[17].w[0] + 65u);
    c.budget -= 1;
L_00357740:
    set32(c.r[2], c.r[18].w[0] + 382u);
    c.f[0] = c.r[3].w[0];
    set32(c.r[25], ld32((c.r[20].w[0] + 176u)));
    c.f[1] = c.r[2].w[0];
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.f[13] = fp::cvt_s_w(c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.f[0] = c.r[2].w[0];
    c.f[12] = fp::cvt_s_w(c.f[1]);
    c.budget -= 14;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00357778u); c.f[14] = fp::cvt_s_w(c.f[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00357778u) [[unlikely]] return; }
L_00357778:
    set32(c.r[25], ld32((c.r[20].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00357788u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00357788u) [[unlikely]] return; }
L_00357788:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00357790u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0095(c, 419u, depth + 1u); else { c.pc = 0x003577B0u; return; } if (c.pc != 0x00357790u) [[unlikely]] return; }
L_00357790:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 192u);  c.pc = t; return; }
L_003577B0:
    set32(c.r[29], c.r[29].w[0] - 224u);
    set32(c.r[3], 0u + 1u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], ld32((c.r[4].w[0] + 36u)));
    c.budget -= 16;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; c.r[20].d[0] = 0ull + 0ull;  if (t) { goto L_0035781C; } }
    set32(c.r[5], ld32((c.r[21].w[0] + 1252u)));
    set32(c.r[4], 0u + 90u);
    set32(c.r[6], ld32((c.r[21].w[0] + 1292u)));
    c.r[5].d[0] = ld8((c.r[5].w[0] + 32u));
    set32(c.r[20], ld32((c.r[6].w[0] + 24u)));
    c.budget -= 7;
    { const bool t = c.r[5].d[0] == 0ull; set32(c.r[3], 0u + 119u);  if (t) { goto L_00357814; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], c.r[20].w[0] + 1u);  if (t) { goto L_00357858; } }
L_00357814:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], c.r[20].w[0] + 6u);  if (t) { goto L_00357858; } }
L_0035781C:
    set32(c.r[6], ld32((c.r[21].w[0] + 1292u)));
    set32(c.r[5], 0u + 6u);
    set32(c.r[4], 0u + 91u);
    set32(c.r[3], 0u + 120u);
    set32(c.r[6], ld32((c.r[6].w[0] + 24u)));
    c.budget -= 7;
    { const bool t = c.r[5].d[0] != 0ull; mmi::div(c, 0, c.r[6].w[0], c.r[5].w[0]);  if (t) { goto L_0035783C; } }
    breakpoint(c, 0x00357838u);
    c.budget -= 1;
L_0035783C:
    c.r[6].d[0] = c.lo.d[0];
    c.budget -= 3;
    { const bool t = c.r[6].sd[0] <= 0; set32(c.r[5], c.r[20].w[0] + 6u);  if (t) { goto L_00357858; } }
    set32(c.r[5], c.r[6].w[0] << 1);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[20], c.r[5].w[0] << 1);
    set32(c.r[5], c.r[20].w[0] + 6u);
    c.budget -= 4;
L_00357858:
    c.budget -= 2;
    { const bool t = c.r[5].sd[0] >= 0;  if (t) { goto L_00357868; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_00357874; } }
L_00357868:
    set32(c.r[16], ld32((c.r[21].w[0] + 1300u)));
    c.r[1].d[0] = c.r[16].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    if (c.r[1].d[0] == 0) c.r[16].d[0] = c.r[5].d[0];
    c.budget -= 3;
L_00357874:
    set32(c.r[9], ld32((c.r[21].w[0] + 1248u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[7], ld32((c.r[1].w[0] + 26392u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x42700000u);
    set32(c.r[8], ld32((c.r[21].w[0] + 1252u)));
    c.f[1] = c.r[5].w[0];
    set32(c.r[6], 0u + 255u);
    c.r[17].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = ld32((c.r[9].w[0] + 12u));
    set32(c.r[19], ld32((c.r[7].w[0] + 440u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[2] = ld32((c.r[8].w[0] + 12u));
    set32(c.r[18], ld32((c.r[7].w[0] + 444u)));
    c.f[3] = fp::cvt_w_s(c.f[0]);
    st32((c.r[19].w[0] + 60u), c.r[6].w[0]);
    c.f[0] = ld32((c.r[1].w[0] - 7272u));
    c.f[1] = fp::add(c.f[1], c.f[2]);
    c.f[1] = fp::cvt_w_s(c.f[1]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    st32((c.r[19].w[0] + 16u), c.f[0]);
    set32(c.r[6], c.f[1]);
    c.f[0] = ld32((c.r[1].w[0] - 7304u));
    set32(c.r[22], c.f[3]);
    set32(c.r[4], c.r[4].w[0] + c.r[6].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    st32((c.r[19].w[0] + 20u), c.f[0]);
    st32((c.r[19].w[0] + 24u), c.r[5].w[0]);
    st32((c.r[29].w[0] + 192u), c.r[4].w[0]);
    c.budget -= 31;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 176u), c.r[3].w[0]);  if (t) { goto L_00357C50; } }
L_003578F0:
    st8((c.r[29].w[0] + 223u), static_cast<std::uint8_t>(0u));
    c.r[2].d[0] = ld8((c.r[21].w[0] + 40u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[23], c.r[17].w[0] - c.r[20].w[0]);  if (t) { goto L_0035791C; } }
    set32(c.r[2], ld32((c.r[21].w[0] + 1308u)));
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 223u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00357914u); set32(c.r[5], c.r[17].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_0095(c, 302u, depth + 1u); else { c.pc = 0x00356580u; return; } if (c.pc != 0x00357914u) [[unlikely]] return; }
L_00357914:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[30].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00357930; } }
L_0035791C:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035792Cu); set32(c.r[6], c.r[29].w[0] + 223u);  if (depth < kMaxDepth) unit_0095(c, 302u, depth + 1u); else { c.pc = 0x00356580u; return; } if (c.pc != 0x0035792Cu) [[unlikely]] return; }
L_0035792C:
    c.r[30].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00357930:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00357938u); c.r[4].d[0] = c.r[30].d[0] + 0ull;  if (depth < kMaxDepth) unit_009C(c, 167u, depth + 1u); else { c.pc = 0x00370C80u; return; } if (c.pc != 0x00357938u) [[unlikely]] return; }
L_00357938:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u + 2u);  if (t) { goto L_003579A8; } }
    set32(c.r[2], c.r[30].w[0] + 16u);
    st32((c.r[19].w[0] + 352u), c.r[2].w[0]);
    st32((c.r[19].w[0] + 356u), 0u);
    c.r[2].d[0] = ld8((c.r[29].w[0] + 223u));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_00357980; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00357960u); set32(c.r[4], 0u + 5u);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x00357960u) [[unlikely]] return; }
L_00357960:
    set32(c.r[3], ld32((c.r[2].w[0])));
    st32((c.r[19].w[0] + 48u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    st32((c.r[19].w[0] + 52u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 56u), c.r[2].w[0]);  if (t) { goto L_003579D8; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00357980:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00357988u);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x00357988u) [[unlikely]] return; }
L_00357988:
    set32(c.r[3], ld32((c.r[2].w[0])));
    st32((c.r[19].w[0] + 48u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    st32((c.r[19].w[0] + 52u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 56u), c.r[2].w[0]);  if (t) { goto L_003579D8; } }
    set32(c.r[4], 0u + 2u);
    c.budget -= 1;
L_003579A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003579B0u);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x003579B0u) [[unlikely]] return; }
L_003579B0:
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[3], c.r[3].w[0] - 7344u);
    st32((c.r[19].w[0] + 48u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 4u)));
    st32((c.r[19].w[0] + 52u), c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    st32((c.r[19].w[0] + 56u), c.r[2].w[0]);
    st32((c.r[19].w[0] + 352u), c.r[3].w[0]);
    st32((c.r[19].w[0] + 356u), 0u);
    c.budget -= 10;
L_003579D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003579E0u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0018(c, 67u, depth + 1u); else { c.pc = 0x00162250u; return; } if (c.pc != 0x003579E0u) [[unlikely]] return; }
L_003579E0:
    c.r[1].d[0] = c.r[2].sd[0] < 216ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_00357A0C; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = ld32((c.r[1].w[0] - 7312u));
    st32((c.r[19].w[0] + 16u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[0] = ld32((c.r[1].w[0] - 7304u));
    st32((c.r[19].w[0] + 20u), c.f[0]);
    st32((c.r[19].w[0] + 24u), c.r[2].w[0]);
    c.budget -= 8;
L_00357A0C:
    set32(c.r[2], c.r[23].w[0] << 3);
    set32(c.r[5], c.r[22].w[0] + 275u);
    set32(c.r[3], c.r[2].w[0] + c.r[23].w[0]);
    set32(c.r[25], ld32((c.r[19].w[0] + 176u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    set32(c.r[4], c.r[3].w[0] << 1);
    c.r[3].d[0] = c.r[2].d[0] | 65535ull;
    set32(c.r[2], c.r[4].w[0] + c.r[23].w[0]);
    set32(c.r[23], c.r[2].w[0] << 1);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[29].w[0] + 192u)));
    c.f[0] = c.r[3].w[0];
    c.f[1] = c.r[5].w[0];
    c.f[14] = fp::cvt_s_w(c.f[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[23].w[0]);
    st32((c.r[29].w[0] + 160u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 160u)));
    c.f[12] = fp::cvt_s_w(c.f[1]);
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.f[0] = c.r[2].w[0];
    c.budget -= 23;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00357A68u); c.f[13] = fp::cvt_s_w(c.f[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00357A68u) [[unlikely]] return; }
L_00357A68:
    set32(c.r[2], ld32((c.r[21].w[0] + 1292u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 24u)));
    c.budget -= 4;
    { const bool t = c.r[17].d[0] != c.r[2].d[0];  if (t) { goto L_00357B7C; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 160u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[5], ld32((c.r[19].w[0] + 352u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.f[0] = c.r[2].w[0];
    st32((c.r[18].w[0] + 352u), c.r[5].w[0]);
    c.f[13] = fp::cvt_s_w(c.f[0]);
    st32((c.r[18].w[0] + 356u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[2] = ld32((c.r[19].w[0] + 20u));
    c.f[0] = ld32((c.r[19].w[0] + 16u));
    c.f[3] = c.r[2].w[0];
    set32(c.r[2], c.r[22].w[0] + 275u);
    c.f[1] = c.r[2].w[0];
    st32((c.r[18].w[0] + 16u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.f[0] = fp::mul(c.f[3], c.f[2]);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    st32((c.r[18].w[0] + 20u), c.f[0]);
    st32((c.r[18].w[0] + 24u), c.r[3].w[0]);
    c.f[0] = c.r[2].w[0];
    set32(c.r[25], ld32((c.r[18].w[0] + 176u)));
    c.f[12] = fp::cvt_s_w(c.f[1]);
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 27;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00357AE4u); c.f[14] = fp::cvt_s_w(c.f[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00357AE4u) [[unlikely]] return; }
L_00357AE4:
    set32(c.r[3], ld32((c.r[21].w[0] + 8u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_00357B24; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00357AFCu); set32(c.r[4], 0u + 4u);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x00357AFCu) [[unlikely]] return; }
L_00357AFC:
    set32(c.r[4], ld32((c.r[2].w[0])));
    set32(c.r[3], 0u + 255u);
    st32((c.r[18].w[0] + 48u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 4u)));
    st32((c.r[18].w[0] + 52u), c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    st32((c.r[18].w[0] + 56u), c.r[2].w[0]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 60u), c.r[3].w[0]);  if (t) { goto L_00357B4C; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00357B24:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00357B2Cu);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x00357B2Cu) [[unlikely]] return; }
L_00357B2C:
    set32(c.r[3], ld32((c.r[2].w[0])));
    st32((c.r[18].w[0] + 48u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    st32((c.r[18].w[0] + 52u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    st32((c.r[18].w[0] + 56u), c.r[2].w[0]);
    ld128((c.r[21].w[0] + 1216u) & ~15u, c.r[2]);
    st128((c.r[18].w[0] + 48u) & ~15u, c.r[2]);
    c.budget -= 8;
L_00357B4C:
    set32(c.r[25], ld32((c.r[18].w[0] + 176u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 60u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00357B60u); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00357B60u) [[unlikely]] return; }
L_00357B60:
    set32(c.r[25], ld32((c.r[19].w[0] + 176u)));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 60u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00357B74u); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00357B74u) [[unlikely]] return; }
L_00357B74:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 176u)));  if (t) { goto L_00357B94; } }
L_00357B7C:
    set32(c.r[25], ld32((c.r[19].w[0] + 176u)));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 60u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00357B90u); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00357B90u) [[unlikely]] return; }
L_00357B90:
    set32(c.r[2], ld32((c.r[29].w[0] + 176u)));
    c.budget -= 1;
L_00357B94:
    set32(c.r[3], 0u + 255u);
    set32(c.r[4], c.r[21].w[0] + 704u);
    set32(c.r[2], c.r[2].w[0] + c.r[23].w[0]);
    st32((c.r[21].w[0] + 764u), c.r[3].w[0]);
    c.f[0] = c.r[2].w[0];
    set32(c.r[25], ld32((c.r[21].w[0] + 880u)));
    set32(c.r[3], c.r[22].w[0] + 275u);
    c.f[13] = fp::cvt_s_w(c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.f[1] = c.r[3].w[0];
    c.f[0] = c.r[2].w[0];
    c.f[12] = fp::cvt_s_w(c.f[1]);
    c.budget -= 17;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00357BD8u); c.f[14] = fp::cvt_s_w(c.f[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00357BD8u) [[unlikely]] return; }
L_00357BD8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00357BE0u); set32(c.r[4], ld32((c.r[21].w[0] + 44u)));  if (depth < kMaxDepth) unit_009B(c, 390u, depth + 1u); else { c.pc = 0x0036F200u; return; } if (c.pc != 0x00357BE0u) [[unlikely]] return; }
L_00357BE0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00357C08; } }
    set32(c.r[2], ld32((c.r[21].w[0] + 44u)));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 4u)));
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 6u)));
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00357C00u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_009C(c, 6u, depth + 1u); else { c.pc = 0x00370030u; return; } if (c.pc != 0x00357C00u) [[unlikely]] return; }
L_00357C00:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[7].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00357C24; } }
L_00357C08:
    set32(c.r[2], ld32((c.r[21].w[0] + 44u)));
    set32(c.r[6], ld32((c.r[21].w[0] + 1308u)));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 4u)));
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00357C20u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_009C(c, 6u, depth + 1u); else { c.pc = 0x00370030u; return; } if (c.pc != 0x00357C20u) [[unlikely]] return; }
L_00357C20:
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00357C24:
    c.r[5].d[0] = c.r[30].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[21].w[0] + 44u)));
    set32(c.r[4], c.r[21].w[0] + 704u);
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00357C3Cu); set32(c.r[6], c.r[2].w[0] + 20u);  if (depth < kMaxDepth) unit_0095(c, 455u, depth + 1u); else { c.pc = 0x00357E10u; return; } if (c.pc != 0x00357C3Cu) [[unlikely]] return; }
L_00357C3C:
    set32(c.r[25], ld32((c.r[21].w[0] + 880u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00357C4Cu); set32(c.r[4], c.r[21].w[0] + 704u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00357C4Cu) [[unlikely]] return; }
L_00357C4C:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_00357C50:
    c.r[3].d[0] = c.r[17].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003578F0u | kUnwind; return; } goto L_003578F0; } }
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 224u);  c.pc = t; return; }
L_00357C90:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00357CA4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0012(c, 254u, depth + 1u); else { c.pc = 0x0014AA40u; return; } if (c.pc != 0x00357CA4u) [[unlikely]] return; }
L_00357CA4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[4], c.r[16].w[0] + 208u);
    set32(c.r[2], c.r[2].w[0] + 28512u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00357CB8u); st32((c.r[16].w[0] + 176u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0017(c, 177u, depth + 1u); else { c.pc = 0x0015E070u; return; } if (c.pc != 0x00357CB8u) [[unlikely]] return; }
L_00357CB8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00357CC0u);  if (depth < kMaxDepth) unit_0010(c, 59u, depth + 1u); else { c.pc = 0x00140BF0u; return; } if (c.pc != 0x00357CC0u) [[unlikely]] return; }
L_00357CC0:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 3840u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00357CD4u); st32((c.r[29].w[0] + 44u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x00357CD4u) [[unlikely]] return; }
L_00357CD4:
    st32((c.r[16].w[0] + 192u), 0u);
    set32(c.r[4], 0u + 272u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00357CE4u); st32((c.r[16].w[0] + 200u), 0u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00357CE4u) [[unlikely]] return; }
L_00357CE4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00540000u);  if (t) { goto L_00357D00; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[1].w[0] - 768u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 36u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00357D00u); c.r[5].d[0] = ld64((c.r[2].w[0] + 400u));  if (depth < kMaxDepth) unit_0017(c, 188u, depth + 1u); else { c.pc = 0x0015ED60u; return; } if (c.pc != 0x00357D00u) [[unlikely]] return; }
L_00357D00:
    st32((c.r[16].w[0] + 204u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00357D0Cu); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x00357D0Cu) [[unlikely]] return; }
L_00357D0C:
    set32(c.r[6], ld32((c.r[2].w[0])));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x42D80000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x41900000u);
    set32(c.r[3], 0u + 1u);
    st32((c.r[16].w[0] + 256u), c.r[6].w[0]);
    set32(c.r[6], ld32((c.r[2].w[0] + 4u)));
    st32((c.r[16].w[0] + 260u), c.r[6].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    st32((c.r[16].w[0] + 264u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 368u), c.r[5].w[0]);
    st32((c.r[16].w[0] + 372u), c.r[4].w[0]);
    st8((c.r[16].w[0] + 464u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00357D44u); set32(c.r[4], ld32((c.r[29].w[0] + 44u)));  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x00357D44u) [[unlikely]] return; }
L_00357D44:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00357D60:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00357DF0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] + 28512u);
    st32((c.r[17].w[0] + 176u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 204u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00357DAC; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00357DAC; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00357DACu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00357DACu) [[unlikely]] return; }
L_00357DAC:
    set32(c.r[4], c.r[17].w[0] + 208u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[17].w[0] + 204u), 0u);  if (t) { goto L_00357DCC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 17408u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00357DCCu); st32((c.r[17].w[0] + 384u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0012(c, 264u, depth + 1u); else { c.pc = 0x0014ADA0u; return; } if (c.pc != 0x00357DCCu) [[unlikely]] return; }
L_00357DCC:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00357DD8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0012(c, 255u, depth + 1u); else { c.pc = 0x0014AB70u; return; } if (c.pc != 0x00357DD8u) [[unlikely]] return; }
L_00357DD8:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00357DF4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00357DF0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x00357DF0u) [[unlikely]] return; }
L_00357DF0:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00357DF4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00357E10:
    st32((c.r[4].w[0] + 192u), c.r[5].w[0]);
    st32((c.r[4].w[0] + 196u), c.r[6].w[0]);
    st32((c.r[4].w[0] + 200u), c.r[7].w[0]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 465u), static_cast<std::uint8_t>(c.r[8].w[0]));  c.pc = t; return; }
L_00357E30:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 192u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00357F88; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00357E50u);  if (depth < kMaxDepth) unit_0095(c, 462u, depth + 1u); else { c.pc = 0x00357FA0u; return; } if (c.pc != 0x00357E50u) [[unlikely]] return; }
L_00357E50:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], ld32((c.r[1].w[0] - 27872u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00357E60u); set32(c.r[5], ld32((c.r[16].w[0] + 192u)));  if (depth < kMaxDepth) unit_0051(c, 245u, depth + 1u); else { c.pc = 0x00246530u; return; } if (c.pc != 0x00357E60u) [[unlikely]] return; }
L_00357E60:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00540000u);  if (t) { goto L_00357F88; } }
    set32(c.r[3], c.r[29].w[0] + 40u);
    set32(c.r[6], ld32((c.r[1].w[0] - 768u)));
    set32(c.r[5], c.r[29].w[0] + 32u);
    set32(c.r[4], 0u + 1u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[6], ld32((c.r[6].w[0] + 36u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[6].d[0] = ld64((c.r[6].w[0] + 432u));
    st64((c.r[29].w[0] + 40u), c.r[6].d[0]);
    set32(c.r[7], ld32((c.r[16].w[0] + 204u)));
    st64((c.r[7].w[0] + 256u), c.r[6].d[0]);
    c.r[3].d[0] = ld64((c.r[3].w[0]));
    st64((c.r[5].w[0]), c.r[3].d[0]);
    c.r[3].d[0] = ld8((c.r[29].w[0] + 35u));
    c.r[3].d[0] = c.r[3].d[0] << 58;
    c.r[3].d[0] = c.r[3].d[0] >> 60;
    set32(c.r[3], c.r[4].w[0] << (c.r[3].w[0] & 31u));
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[7].w[0] + 160u), c.f[0]);
    c.r[3].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[3].d[0] = c.r[3].d[0] << 30;
    c.r[3].d[0] = c.r[3].d[0] >> 60;
    set32(c.r[3], c.r[4].w[0] << (c.r[3].w[0] & 31u));
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[7].w[0] + 164u), c.f[0]);
    c.f[0] = ld32((c.r[1].w[0] - 7320u));
    set32(c.r[3], ld32((c.r[16].w[0] + 204u)));
    st32((c.r[3].w[0] + 16u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[0] = ld32((c.r[1].w[0] - 7320u));
    st32((c.r[3].w[0] + 20u), c.f[0]);
    st32((c.r[3].w[0] + 24u), c.r[2].w[0]);
    c.r[2].d[0] = ld8((c.r[16].w[0] + 464u));
    c.budget -= 39;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00357F40; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 204u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43430000u);
    c.f[3] = c.r[2].w[0];
    c.f[2] = ld32((c.r[16].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41600000u);
    c.f[1] = ld32((c.r[16].w[0] + 4u));
    c.f[0] = c.r[2].w[0];
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    c.f[14] = ld32((c.r[16].w[0] + 8u));
    c.f[12] = fp::add(c.f[3], c.f[2]);
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 13;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00357F38u); c.f[13] = fp::sub(c.f[1], c.f[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00357F38u) [[unlikely]] return; }
L_00357F38:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[16].w[0] + 204u)));  if (t) { goto L_00357F78; } }
L_00357F40:
    set32(c.r[4], ld32((c.r[16].w[0] + 204u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42280000u);
    c.f[3] = c.r[2].w[0];
    c.f[2] = ld32((c.r[16].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41400000u);
    c.f[1] = ld32((c.r[16].w[0] + 4u));
    c.f[0] = c.r[2].w[0];
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    c.f[14] = ld32((c.r[16].w[0] + 8u));
    c.f[12] = fp::add(c.f[3], c.f[2]);
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 13;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00357F74u); c.f[13] = fp::sub(c.f[1], c.f[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00357F74u) [[unlikely]] return; }
L_00357F74:
    set32(c.r[4], ld32((c.r[16].w[0] + 204u)));
    c.budget -= 1;
L_00357F78:
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00357F88u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00357F88u) [[unlikely]] return; }
L_00357F88:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00357FA0:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 464u));
    c.budget -= 10;
    { const bool t = c.r[3].d[0] == 0ull; c.r[18].d[0] = c.r[4].d[0] + 0ull;  if (t) { [[clang::musttail]] return unit_0096(c, 5u, depth); } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00357FD0u); set32(c.r[4], ld32((c.r[18].w[0] + 200u)));  if (depth < kMaxDepth) unit_009C(c, 25u, depth + 1u); else { c.pc = 0x00370420u; return; } if (c.pc != 0x00357FD0u) [[unlikely]] return; }
L_00357FD0:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00357FDCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_009C(c, 26u, depth + 1u); else { c.pc = 0x00370610u; return; } if (c.pc != 0x00357FDCu) [[unlikely]] return; }
L_00357FDC:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { [[clang::musttail]] return unit_0096(c, 4u, depth); } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00357FECu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 237u, depth + 1u); else { c.pc = 0x00127D00u; return; } if (c.pc != 0x00357FECu) [[unlikely]] return; }
L_00357FEC:
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { [[clang::musttail]] return unit_0096(c, 2u, depth); } }
    c.f[0] = ld32((c.r[18].w[0] + 16u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.budget -= 2;
    [[clang::musttail]] return unit_0096(c, 1u, depth);
}

}
