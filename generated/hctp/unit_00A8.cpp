#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_00A8[4096] = {
    1, 0, 2, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9,
    0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 17, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0,
    0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 21,
    0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 26, 0, 0,
    0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 32, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0,
    0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 40, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 42, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0,
    45, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 49,
    0, 50, 0, 0, 0, 0, 0, 0, 0, 51, 0, 52, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 56, 0, 0, 0, 57, 0, 0, 58, 0, 0, 0,
    0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 64, 0, 0, 65, 0, 0,
    0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    68, 0, 0, 0, 69, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 74, 0, 75, 0, 0,
    76, 0, 77, 0, 78, 0, 79, 0, 0, 80, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 82, 0,
    0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0,
    0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 96, 0, 0, 0, 0, 0, 0,
    97, 0, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 100, 0, 0, 101, 0, 0, 0, 0, 102, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 104, 0, 0, 0, 105, 0, 0, 106, 0, 0,
    0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 108, 0, 109, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 110, 0, 0, 111, 0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 114, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0, 0, 116, 0, 117, 0, 118, 0, 0, 119, 0, 120, 0, 0, 121, 0, 122, 0,
    0, 123, 0, 124, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 126, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    129, 0, 0, 0, 0, 0, 0, 130, 0, 131, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 133,
    0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0,
    0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 140, 0, 0, 0, 141, 0, 0, 0,
    142, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 145, 0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 147, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 150, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 153, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 154, 0, 0, 0, 155, 0, 0, 0, 0, 156, 0, 0, 0, 157, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 161, 162, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 165,
    0, 0, 166, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 167, 0, 168, 0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 177, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 178, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 179, 0, 180, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 183, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0, 0,
    185, 0, 0, 0, 0, 0, 0, 0, 186, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 189, 0, 0, 0, 0, 190, 0, 191, 0, 0, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 0, 193, 0, 0, 194,
    0, 0, 0, 0, 0, 0, 0, 0, 195, 0, 196, 0, 0, 0, 0, 0, 0, 197, 0, 198, 0, 0, 0, 0, 0, 0, 0, 199, 0, 0, 200, 0,
    201, 0, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 203, 0,
    0, 0, 204, 0, 0, 205, 0, 0, 206, 0, 0, 207, 0, 0, 208, 0, 0, 209, 0, 0, 0, 0, 0, 210, 0, 0, 0, 0, 0, 0, 0, 0,
    211, 0, 0, 0, 0, 0, 0, 0, 212, 0, 0, 0, 213, 0, 0, 0, 214, 0, 215, 0, 0, 0, 0, 0, 216, 0, 0, 0, 0, 0, 0, 0,
    217, 0, 0, 0, 0, 218, 0, 0, 0, 0, 0, 219, 0, 0, 0, 0, 220, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 222, 0, 0, 0, 0,
    223, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 224, 0, 0, 0, 225, 0, 0, 226, 0, 0, 227, 0, 228, 0, 229, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 230, 0, 231, 0, 0, 0, 0, 0, 0, 0, 0, 0, 232, 0, 233, 0, 234, 0, 0, 0, 0, 0, 0, 0, 0, 235, 0,
    0, 236, 0, 0, 0, 237, 0, 0, 0, 0, 238, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 239, 0, 240, 0, 241, 0, 242, 0, 243, 0,
    244, 0, 245, 0, 246, 0, 247, 0, 248, 0, 249, 0, 250, 0, 251, 0, 252, 0, 0, 0, 0, 0, 0, 0, 253, 0, 0, 0, 0, 0, 0, 0,
    254, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 256, 0, 0, 0, 0, 0, 0, 0, 0, 257, 0, 0, 258, 0, 0, 259, 0, 0, 260, 0,
    0, 261, 0, 0, 262, 0, 0, 263, 0, 0, 264, 0, 0, 265, 0, 0, 266, 0, 0, 267, 0, 0, 0, 268, 0, 0, 0, 269, 0, 0, 270, 0,
    0, 0, 0, 0, 0, 0, 0, 271, 0, 272, 0, 273, 0, 0, 0, 0, 0, 274, 0, 0, 0, 0, 0, 0, 275, 0, 0, 0, 0, 0, 0, 0,
    276, 0, 0, 0, 277, 0, 0, 0, 278, 0, 0, 0, 0, 0, 279, 0, 0, 0, 0, 0, 280, 0, 0, 0, 281, 0, 0, 0, 0, 0, 0, 282,
    0, 0, 0, 0, 0, 283, 0, 0, 0, 0, 0, 0, 284, 0, 0, 0, 0, 0, 0, 285, 0, 0, 0, 0, 0, 286, 0, 0, 0, 0, 287, 0,
    288, 0, 289, 0, 0, 0, 0, 0, 0, 0, 0, 0, 290, 0, 291, 0, 292, 0, 0, 0, 293, 0, 0, 0, 0, 0, 294, 0, 0, 0, 0, 0,
    295, 0, 0, 0, 0, 0, 296, 0, 0, 0, 0, 0, 297, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 298, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 299, 0, 300, 0, 301, 0, 0, 0, 0, 0, 302, 0, 0, 0, 303, 0, 0, 0, 0, 0, 304, 0, 0, 0, 0, 0,
    305, 0, 0, 0, 0, 0, 0, 306, 0, 0, 0, 307, 0, 0, 0, 0, 0, 0, 308, 0, 0, 0, 0, 0, 309, 0, 0, 0, 0, 0, 310, 0,
    0, 0, 0, 0, 311, 0, 312, 0, 313, 0, 0, 0, 0, 0, 314, 0, 315, 0, 316, 0, 0, 0, 0, 0, 317, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 318, 0, 319, 0, 0, 320, 0, 0, 321, 0, 0, 322, 0, 0, 323, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 324, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 325, 0, 0, 0, 0, 0, 0, 0,
    326, 0, 0, 0, 0, 327, 0, 0, 0, 0, 0, 328, 0, 0, 0, 0, 329, 0, 0, 0, 0, 330, 0, 0, 0, 0, 0, 331, 0, 0, 0, 0,
    332, 0, 0, 0, 0, 0, 333, 0, 0, 0, 0, 0, 0, 334, 0, 0, 0, 0, 335, 0, 0, 0, 336, 0, 0, 0, 337, 0, 0, 0, 338, 0,
    0, 0, 0, 339, 0, 340, 0, 0, 0, 341, 0, 0, 342, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 343, 0, 344, 0, 0, 0, 345, 0, 0,
    0, 0, 0, 0, 346, 0, 0, 0, 347, 0, 0, 0, 0, 348, 0, 0, 0, 0, 0, 0, 349, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 350,
    0, 351, 0, 0, 0, 0, 0, 0, 352, 0, 0, 0, 0, 353, 0, 0, 0, 0, 0, 0, 354, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 355,
    0, 356, 0, 0, 0, 0, 0, 0, 357, 0, 0, 0, 0, 0, 0, 358, 0, 0, 359, 0, 0, 0, 0, 0, 0, 0, 0, 360, 0, 361, 0, 0,
    0, 0, 0, 0, 362, 0, 363, 0, 0, 0, 364, 0, 0, 365, 0, 366, 0, 367, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 368, 0, 0, 0, 0, 0, 0, 0, 0, 369, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 370, 0, 0, 0, 371, 0, 0, 372, 0, 0, 373, 0, 0, 374, 0, 0, 375, 0, 0, 376, 0, 0, 0, 0, 0, 377,
    0, 0, 0, 0, 0, 0, 0, 0, 378, 0, 0, 0, 0, 0, 0, 0, 379, 0, 0, 0, 0, 0, 0, 0, 380, 0, 0, 0, 381, 0, 0, 0,
    382, 0, 0, 383, 0, 0, 384, 0, 385, 0, 0, 0, 386, 0, 0, 0, 0, 0, 0, 0, 387, 0, 0, 0, 0, 388, 0, 0, 0, 0, 0, 389,
    0, 0, 0, 0, 390, 0, 0, 0, 0, 391, 0, 0, 0, 0, 0, 392, 0, 0, 0, 0, 393, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    394, 0, 0, 0, 395, 0, 396, 0, 397, 0, 0, 0, 398, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 399, 0, 0,
    0, 400, 0, 0, 0, 401, 0, 0, 0, 402, 0, 0, 0, 0, 0, 0, 403, 0, 0, 0, 0, 0, 0, 0, 0, 404, 0, 0, 0, 405, 0, 0,
    0, 0, 406, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 407, 0, 408, 0, 0, 0, 0, 0, 0, 0, 409, 0, 410, 0, 411, 0, 0, 0,
    0, 0, 412, 0, 0, 0, 0, 0, 413, 0, 0, 0, 0, 414, 0, 0, 0, 415, 0, 0, 0, 0, 416, 0, 0, 0, 417, 0, 0, 418, 0, 419,
    0, 0, 0, 0, 0, 0, 0, 0, 420, 0, 0, 0, 0, 0, 0, 0, 421, 0, 0, 0, 422, 0, 0, 0, 423, 0, 0, 0, 0, 0, 0, 424,
    0, 0, 0, 0, 0, 425, 0, 0, 426, 0, 0, 0, 427, 0, 0, 0, 0, 0, 428, 0, 429, 0, 430, 0, 0, 0, 0, 0, 431, 0, 0, 0,
    0, 0, 432, 0, 0, 0, 0, 0, 433, 0, 0, 0, 434, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 435, 0, 436, 0, 0, 437, 0, 0, 438,
    0, 439, 0, 0, 0, 0, 440, 0, 0, 0, 441, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 442, 0, 0, 443, 0, 0, 0, 0, 0, 0, 0, 444, 0, 0, 0, 0, 0, 0, 0, 445, 0, 0, 0, 0, 446, 0, 0, 0, 0, 0, 447,
    0, 448, 0, 0, 0, 0, 0, 0, 449, 0, 0, 0, 0, 0, 450, 0, 0, 0, 0, 0, 0, 451, 0, 0, 0, 0, 452, 0, 0, 0, 453, 0,
    0, 0, 454, 0, 0, 0, 455, 0, 0, 0, 0, 456, 0, 457, 0, 0, 0, 458, 0, 0, 459, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 460,
    0, 461, 0, 0, 0, 0, 0, 0, 462, 0, 0, 0, 463, 0, 0, 0, 0, 464, 0, 0, 0, 0, 0, 0, 465, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 466, 0, 467, 0, 0, 0, 0, 0, 0, 468, 0, 0, 0, 469, 0, 0, 0, 470, 0, 0, 0, 471, 0, 0, 0, 472, 0, 0, 0,
    473, 0, 0, 0, 474, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 475, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 476, 0, 0,
    0, 0, 0, 0, 0, 477, 0, 0, 0, 0, 478, 0, 0, 0, 479, 0, 0, 0, 480, 0, 0, 0, 481, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    482, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 483, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 484, 0, 0, 0, 0, 0, 0, 485,
    0, 0, 0, 0, 0, 486, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 487, 0, 0, 0, 488, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 489, 0, 0, 0, 0, 0, 490, 0, 0, 0, 491, 0, 0, 0, 0, 0, 0, 0, 492, 0, 0, 0, 0, 0, 0, 493, 0, 0, 0, 494, 0,
    0, 0, 0, 0, 0, 495, 0, 0, 0, 496, 0, 0, 0, 497, 0, 0, 0, 0, 0, 0, 0, 0, 498, 0, 0, 0, 0, 0, 0, 0, 499, 0,
    0, 0, 0, 0, 0, 500, 0, 0, 0, 501, 0, 0, 0, 0, 0, 0, 0, 502, 0, 0, 0, 0, 0, 0, 503, 0, 0, 0, 504, 0, 0, 0,
    505, 0, 0, 0, 0, 0, 0, 0, 0, 506, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 507, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 508, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 509, 0, 0, 0, 0, 0, 510, 0, 0, 0, 511, 0, 0,
    0, 512, 0, 0, 0, 513, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 514, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 515, 0, 0, 0, 0, 0, 516, 0, 0, 0, 517, 0, 0, 0, 0, 0, 518,
    0, 0, 0, 0, 0, 0, 0, 0, 519, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 520, 0, 0, 0, 0, 0, 521, 0, 0,
    0, 0, 0, 522, 0, 0, 0, 0, 0, 523, 0, 0, 0, 0, 0, 524, 0, 0, 0, 0, 0, 525, 0, 0, 0, 0, 0, 0, 526, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 527, 0, 0, 0, 0, 0, 0, 0, 528, 0, 0, 0, 0, 0, 0, 529, 0,
    0, 0, 0, 0, 0, 0, 530, 0, 0, 0, 531, 0, 0, 0, 532, 0, 0, 0, 0, 0, 533, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 534, 0, 0, 0, 535, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 536, 0, 0, 0, 0, 537, 0, 0, 0, 0, 0, 0, 0,
    0, 538, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 539, 0, 0, 0, 0, 0, 0, 0, 540, 0, 0, 0, 0, 0, 0, 0, 0, 541, 0, 0,
    0, 0, 0, 0, 0, 542, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 543, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 544, 0, 0, 0, 0, 0, 0, 0, 0, 0, 545,
    0, 546, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 547, 0, 0, 0, 0, 0, 0, 548, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 549,
};

void unit_00A8(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_003A0000;
    case 2u: goto L_003A0008;
    case 3u: goto L_003A0014;
    case 4u: goto L_003A0040;
    case 5u: goto L_003A008C;
    case 6u: goto L_003A00B0;
    case 7u: goto L_003A0134;
    case 8u: goto L_003A0154;
    case 9u: goto L_003A017C;
    case 10u: goto L_003A019C;
    case 11u: goto L_003A01B4;
    case 12u: goto L_003A02B4;
    case 13u: goto L_003A02C4;
    case 14u: goto L_003A02E4;
    case 15u: goto L_003A0328;
    case 16u: goto L_003A039C;
    case 17u: goto L_003A03AC;
    case 18u: goto L_003A03C4;
    case 19u: goto L_003A03F4;
    case 20u: goto L_003A0414;
    case 21u: goto L_003A047C;
    case 22u: goto L_003A048C;
    case 23u: goto L_003A04AC;
    case 24u: goto L_003A04F0;
    case 25u: goto L_003A0564;
    case 26u: goto L_003A0574;
    case 27u: goto L_003A058C;
    case 28u: goto L_003A05BC;
    case 29u: goto L_003A05DC;
    case 30u: goto L_003A0640;
    case 31u: goto L_003A065C;
    case 32u: goto L_003A0684;
    case 33u: goto L_003A06A4;
    case 34u: goto L_003A06F0;
    case 35u: goto L_003A070C;
    case 36u: goto L_003A072C;
    case 37u: goto L_003A074C;
    case 38u: goto L_003A0790;
    case 39u: goto L_003A07BC;
    case 40u: goto L_003A07CC;
    case 41u: goto L_003A07E0;
    case 42u: goto L_003A080C;
    case 43u: goto L_003A0824;
    case 44u: goto L_003A0868;
    case 45u: goto L_003A0880;
    case 46u: goto L_003A0928;
    case 47u: goto L_003A0940;
    case 48u: goto L_003A095C;
    case 49u: goto L_003A097C;
    case 50u: goto L_003A0984;
    case 51u: goto L_003A09A4;
    case 52u: goto L_003A09AC;
    case 53u: goto L_003A09B8;
    case 54u: goto L_003A0A04;
    case 55u: goto L_003A0A44;
    case 56u: goto L_003A0A54;
    case 57u: goto L_003A0A64;
    case 58u: goto L_003A0A70;
    case 59u: goto L_003A0A90;
    case 60u: goto L_003A0AD4;
    case 61u: goto L_003A0AE0;
    case 62u: goto L_003A0B3C;
    case 63u: goto L_003A0B5C;
    case 64u: goto L_003A0B68;
    case 65u: goto L_003A0B74;
    case 66u: goto L_003A0B8C;
    case 67u: goto L_003A0BB0;
    case 68u: goto L_003A0C00;
    case 69u: goto L_003A0C10;
    case 70u: goto L_003A0C20;
    case 71u: goto L_003A0C94;
    case 72u: goto L_003A0CB0;
    case 73u: goto L_003A0CE0;
    case 74u: goto L_003A0CEC;
    case 75u: goto L_003A0CF4;
    case 76u: goto L_003A0D00;
    case 77u: goto L_003A0D08;
    case 78u: goto L_003A0D10;
    case 79u: goto L_003A0D18;
    case 80u: goto L_003A0D24;
    case 81u: goto L_003A0D30;
    case 82u: goto L_003A0D78;
    case 83u: goto L_003A0D9C;
    case 84u: goto L_003A0DC8;
    case 85u: goto L_003A0DE8;
    case 86u: goto L_003A0E08;
    case 87u: goto L_003A0E34;
    case 88u: goto L_003A0E60;
    case 89u: goto L_003A0E8C;
    case 90u: goto L_003A0EAC;
    case 91u: goto L_003A0ECC;
    case 92u: goto L_003A0EEC;
    case 93u: goto L_003A0F18;
    case 94u: goto L_003A0F38;
    case 95u: goto L_003A0F58;
    case 96u: goto L_003A0F64;
    case 97u: goto L_003A0F80;
    case 98u: goto L_003A0FA0;
    case 99u: goto L_003A0FC0;
    case 100u: goto L_003A0FD8;
    case 101u: goto L_003A0FE4;
    case 102u: goto L_003A0FF8;
    case 103u: goto L_003A1048;
    case 104u: goto L_003A1058;
    case 105u: goto L_003A1068;
    case 106u: goto L_003A1074;
    case 107u: goto L_003A1090;
    case 108u: goto L_003A10A8;
    case 109u: goto L_003A10B0;
    case 110u: goto L_003A1110;
    case 111u: goto L_003A111C;
    case 112u: goto L_003A1130;
    case 113u: goto L_003A1164;
    case 114u: goto L_003A118C;
    case 115u: goto L_003A119C;
    case 116u: goto L_003A11C0;
    case 117u: goto L_003A11C8;
    case 118u: goto L_003A11D0;
    case 119u: goto L_003A11DC;
    case 120u: goto L_003A11E4;
    case 121u: goto L_003A11F0;
    case 122u: goto L_003A11F8;
    case 123u: goto L_003A1204;
    case 124u: goto L_003A120C;
    case 125u: goto L_003A1250;
    case 126u: goto L_003A1284;
    case 127u: goto L_003A1290;
    case 128u: goto L_003A12B8;
    case 129u: goto L_003A1300;
    case 130u: goto L_003A131C;
    case 131u: goto L_003A1324;
    case 132u: goto L_003A1360;
    case 133u: goto L_003A137C;
    case 134u: goto L_003A138C;
    case 135u: goto L_003A13B0;
    case 136u: goto L_003A13D0;
    case 137u: goto L_003A13F0;
    case 138u: goto L_003A1414;
    case 139u: goto L_003A144C;
    case 140u: goto L_003A1460;
    case 141u: goto L_003A1470;
    case 142u: goto L_003A1480;
    case 143u: goto L_003A14B8;
    case 144u: goto L_003A1520;
    case 145u: goto L_003A1590;
    case 146u: goto L_003A15A0;
    case 147u: goto L_003A15D0;
    case 148u: goto L_003A15DC;
    case 149u: goto L_003A161C;
    case 150u: goto L_003A1630;
    case 151u: goto L_003A1644;
    case 152u: goto L_003A165C;
    case 153u: goto L_003A1670;
    case 154u: goto L_003A1698;
    case 155u: goto L_003A16A8;
    case 156u: goto L_003A16BC;
    case 157u: goto L_003A16CC;
    case 158u: goto L_003A16E0;
    case 159u: goto L_003A1710;
    case 160u: goto L_003A1758;
    case 161u: goto L_003A17BC;
    case 162u: goto L_003A17C0;
    case 163u: goto L_003A1810;
    case 164u: goto L_003A186C;
    case 165u: goto L_003A187C;
    case 166u: goto L_003A1888;
    case 167u: goto L_003A18C8;
    case 168u: goto L_003A18D0;
    case 169u: goto L_003A18F0;
    case 170u: goto L_003A195C;
    case 171u: goto L_003A19EC;
    case 172u: goto L_003A1A5C;
    case 173u: goto L_003A1A8C;
    case 174u: goto L_003A1AE0;
    case 175u: goto L_003A1B3C;
    case 176u: goto L_003A1BE0;
    case 177u: goto L_003A1C48;
    case 178u: goto L_003A1C78;
    case 179u: goto L_003A1CF0;
    case 180u: goto L_003A1CF8;
    case 181u: goto L_003A1D40;
    case 182u: goto L_003A1D68;
    case 183u: goto L_003A1DA0;
    case 184u: goto L_003A1DE8;
    case 185u: goto L_003A1E00;
    case 186u: goto L_003A1E20;
    case 187u: goto L_003A1E3C;
    case 188u: goto L_003A1E54;
    case 189u: goto L_003A1E90;
    case 190u: goto L_003A1EA4;
    case 191u: goto L_003A1EAC;
    case 192u: goto L_003A1ED0;
    case 193u: goto L_003A1EF0;
    case 194u: goto L_003A1EFC;
    case 195u: goto L_003A1F20;
    case 196u: goto L_003A1F28;
    case 197u: goto L_003A1F44;
    case 198u: goto L_003A1F4C;
    case 199u: goto L_003A1F6C;
    case 200u: goto L_003A1F78;
    case 201u: goto L_003A1F80;
    case 202u: goto L_003A1FA0;
    case 203u: goto L_003A1FF8;
    case 204u: goto L_003A2008;
    case 205u: goto L_003A2014;
    case 206u: goto L_003A2020;
    case 207u: goto L_003A202C;
    case 208u: goto L_003A2038;
    case 209u: goto L_003A2044;
    case 210u: goto L_003A205C;
    case 211u: goto L_003A2080;
    case 212u: goto L_003A20A0;
    case 213u: goto L_003A20B0;
    case 214u: goto L_003A20C0;
    case 215u: goto L_003A20C8;
    case 216u: goto L_003A20E0;
    case 217u: goto L_003A2100;
    case 218u: goto L_003A2114;
    case 219u: goto L_003A212C;
    case 220u: goto L_003A2140;
    case 221u: goto L_003A2154;
    case 222u: goto L_003A216C;
    case 223u: goto L_003A2180;
    case 224u: goto L_003A21B4;
    case 225u: goto L_003A21C4;
    case 226u: goto L_003A21D0;
    case 227u: goto L_003A21DC;
    case 228u: goto L_003A21E4;
    case 229u: goto L_003A21EC;
    case 230u: goto L_003A2214;
    case 231u: goto L_003A221C;
    case 232u: goto L_003A2244;
    case 233u: goto L_003A224C;
    case 234u: goto L_003A2254;
    case 235u: goto L_003A2278;
    case 236u: goto L_003A2284;
    case 237u: goto L_003A2294;
    case 238u: goto L_003A22A8;
    case 239u: goto L_003A22D8;
    case 240u: goto L_003A22E0;
    case 241u: goto L_003A22E8;
    case 242u: goto L_003A22F0;
    case 243u: goto L_003A22F8;
    case 244u: goto L_003A2300;
    case 245u: goto L_003A2308;
    case 246u: goto L_003A2310;
    case 247u: goto L_003A2318;
    case 248u: goto L_003A2320;
    case 249u: goto L_003A2328;
    case 250u: goto L_003A2330;
    case 251u: goto L_003A2338;
    case 252u: goto L_003A2340;
    case 253u: goto L_003A2360;
    case 254u: goto L_003A2380;
    case 255u: goto L_003A2398;
    case 256u: goto L_003A23B0;
    case 257u: goto L_003A23D4;
    case 258u: goto L_003A23E0;
    case 259u: goto L_003A23EC;
    case 260u: goto L_003A23F8;
    case 261u: goto L_003A2404;
    case 262u: goto L_003A2410;
    case 263u: goto L_003A241C;
    case 264u: goto L_003A2428;
    case 265u: goto L_003A2434;
    case 266u: goto L_003A2440;
    case 267u: goto L_003A244C;
    case 268u: goto L_003A245C;
    case 269u: goto L_003A246C;
    case 270u: goto L_003A2478;
    case 271u: goto L_003A249C;
    case 272u: goto L_003A24A4;
    case 273u: goto L_003A24AC;
    case 274u: goto L_003A24C4;
    case 275u: goto L_003A24E0;
    case 276u: goto L_003A2500;
    case 277u: goto L_003A2510;
    case 278u: goto L_003A2520;
    case 279u: goto L_003A2538;
    case 280u: goto L_003A2550;
    case 281u: goto L_003A2560;
    case 282u: goto L_003A257C;
    case 283u: goto L_003A2594;
    case 284u: goto L_003A25B0;
    case 285u: goto L_003A25CC;
    case 286u: goto L_003A25E4;
    case 287u: goto L_003A25F8;
    case 288u: goto L_003A2600;
    case 289u: goto L_003A2608;
    case 290u: goto L_003A2630;
    case 291u: goto L_003A2638;
    case 292u: goto L_003A2640;
    case 293u: goto L_003A2650;
    case 294u: goto L_003A2668;
    case 295u: goto L_003A2680;
    case 296u: goto L_003A2698;
    case 297u: goto L_003A26B0;
    case 298u: goto L_003A26E0;
    case 299u: goto L_003A2718;
    case 300u: goto L_003A2720;
    case 301u: goto L_003A2728;
    case 302u: goto L_003A2740;
    case 303u: goto L_003A2750;
    case 304u: goto L_003A2768;
    case 305u: goto L_003A2780;
    case 306u: goto L_003A279C;
    case 307u: goto L_003A27AC;
    case 308u: goto L_003A27C8;
    case 309u: goto L_003A27E0;
    case 310u: goto L_003A27F8;
    case 311u: goto L_003A2810;
    case 312u: goto L_003A2818;
    case 313u: goto L_003A2820;
    case 314u: goto L_003A2838;
    case 315u: goto L_003A2840;
    case 316u: goto L_003A2848;
    case 317u: goto L_003A2860;
    case 318u: goto L_003A2888;
    case 319u: goto L_003A2890;
    case 320u: goto L_003A289C;
    case 321u: goto L_003A28A8;
    case 322u: goto L_003A28B4;
    case 323u: goto L_003A28C0;
    case 324u: goto L_003A2934;
    case 325u: goto L_003A2960;
    case 326u: goto L_003A2980;
    case 327u: goto L_003A2994;
    case 328u: goto L_003A29AC;
    case 329u: goto L_003A29C0;
    case 330u: goto L_003A29D4;
    case 331u: goto L_003A29EC;
    case 332u: goto L_003A2A00;
    case 333u: goto L_003A2A18;
    case 334u: goto L_003A2A34;
    case 335u: goto L_003A2A48;
    case 336u: goto L_003A2A58;
    case 337u: goto L_003A2A68;
    case 338u: goto L_003A2A78;
    case 339u: goto L_003A2A8C;
    case 340u: goto L_003A2A94;
    case 341u: goto L_003A2AA4;
    case 342u: goto L_003A2AB0;
    case 343u: goto L_003A2ADC;
    case 344u: goto L_003A2AE4;
    case 345u: goto L_003A2AF4;
    case 346u: goto L_003A2B10;
    case 347u: goto L_003A2B20;
    case 348u: goto L_003A2B34;
    case 349u: goto L_003A2B50;
    case 350u: goto L_003A2B7C;
    case 351u: goto L_003A2B84;
    case 352u: goto L_003A2BA0;
    case 353u: goto L_003A2BB4;
    case 354u: goto L_003A2BD0;
    case 355u: goto L_003A2BFC;
    case 356u: goto L_003A2C04;
    case 357u: goto L_003A2C20;
    case 358u: goto L_003A2C3C;
    case 359u: goto L_003A2C48;
    case 360u: goto L_003A2C6C;
    case 361u: goto L_003A2C74;
    case 362u: goto L_003A2C90;
    case 363u: goto L_003A2C98;
    case 364u: goto L_003A2CA8;
    case 365u: goto L_003A2CB4;
    case 366u: goto L_003A2CBC;
    case 367u: goto L_003A2CC4;
    case 368u: goto L_003A2D1C;
    case 369u: goto L_003A2D40;
    case 370u: goto L_003A2D98;
    case 371u: goto L_003A2DA8;
    case 372u: goto L_003A2DB4;
    case 373u: goto L_003A2DC0;
    case 374u: goto L_003A2DCC;
    case 375u: goto L_003A2DD8;
    case 376u: goto L_003A2DE4;
    case 377u: goto L_003A2DFC;
    case 378u: goto L_003A2E20;
    case 379u: goto L_003A2E40;
    case 380u: goto L_003A2E60;
    case 381u: goto L_003A2E70;
    case 382u: goto L_003A2E80;
    case 383u: goto L_003A2E8C;
    case 384u: goto L_003A2E98;
    case 385u: goto L_003A2EA0;
    case 386u: goto L_003A2EB0;
    case 387u: goto L_003A2ED0;
    case 388u: goto L_003A2EE4;
    case 389u: goto L_003A2EFC;
    case 390u: goto L_003A2F10;
    case 391u: goto L_003A2F24;
    case 392u: goto L_003A2F3C;
    case 393u: goto L_003A2F50;
    case 394u: goto L_003A2F80;
    case 395u: goto L_003A2F90;
    case 396u: goto L_003A2F98;
    case 397u: goto L_003A2FA0;
    case 398u: goto L_003A2FB0;
    case 399u: goto L_003A2FF4;
    case 400u: goto L_003A3004;
    case 401u: goto L_003A3014;
    case 402u: goto L_003A3024;
    case 403u: goto L_003A3040;
    case 404u: goto L_003A3064;
    case 405u: goto L_003A3074;
    case 406u: goto L_003A3088;
    case 407u: goto L_003A30B8;
    case 408u: goto L_003A30C0;
    case 409u: goto L_003A30E0;
    case 410u: goto L_003A30E8;
    case 411u: goto L_003A30F0;
    case 412u: goto L_003A3108;
    case 413u: goto L_003A3120;
    case 414u: goto L_003A3134;
    case 415u: goto L_003A3144;
    case 416u: goto L_003A3158;
    case 417u: goto L_003A3168;
    case 418u: goto L_003A3174;
    case 419u: goto L_003A317C;
    case 420u: goto L_003A31A0;
    case 421u: goto L_003A31C0;
    case 422u: goto L_003A31D0;
    case 423u: goto L_003A31E0;
    case 424u: goto L_003A31FC;
    case 425u: goto L_003A3214;
    case 426u: goto L_003A3220;
    case 427u: goto L_003A3230;
    case 428u: goto L_003A3248;
    case 429u: goto L_003A3250;
    case 430u: goto L_003A3258;
    case 431u: goto L_003A3270;
    case 432u: goto L_003A3288;
    case 433u: goto L_003A32A0;
    case 434u: goto L_003A32B0;
    case 435u: goto L_003A32DC;
    case 436u: goto L_003A32E4;
    case 437u: goto L_003A32F0;
    case 438u: goto L_003A32FC;
    case 439u: goto L_003A3304;
    case 440u: goto L_003A3318;
    case 441u: goto L_003A3328;
    case 442u: goto L_003A3384;
    case 443u: goto L_003A3390;
    case 444u: goto L_003A33B0;
    case 445u: goto L_003A33D0;
    case 446u: goto L_003A33E4;
    case 447u: goto L_003A33FC;
    case 448u: goto L_003A3404;
    case 449u: goto L_003A3420;
    case 450u: goto L_003A3438;
    case 451u: goto L_003A3454;
    case 452u: goto L_003A3468;
    case 453u: goto L_003A3478;
    case 454u: goto L_003A3488;
    case 455u: goto L_003A3498;
    case 456u: goto L_003A34AC;
    case 457u: goto L_003A34B4;
    case 458u: goto L_003A34C4;
    case 459u: goto L_003A34D0;
    case 460u: goto L_003A34FC;
    case 461u: goto L_003A3504;
    case 462u: goto L_003A3520;
    case 463u: goto L_003A3530;
    case 464u: goto L_003A3544;
    case 465u: goto L_003A3560;
    case 466u: goto L_003A358C;
    case 467u: goto L_003A3594;
    case 468u: goto L_003A35B0;
    case 469u: goto L_003A35C0;
    case 470u: goto L_003A35D0;
    case 471u: goto L_003A35E0;
    case 472u: goto L_003A35F0;
    case 473u: goto L_003A3600;
    case 474u: goto L_003A3610;
    case 475u: goto L_003A3648;
    case 476u: goto L_003A3674;
    case 477u: goto L_003A3694;
    case 478u: goto L_003A36A8;
    case 479u: goto L_003A36B8;
    case 480u: goto L_003A36C8;
    case 481u: goto L_003A36D8;
    case 482u: goto L_003A3700;
    case 483u: goto L_003A3734;
    case 484u: goto L_003A3760;
    case 485u: goto L_003A377C;
    case 486u: goto L_003A3794;
    case 487u: goto L_003A37C0;
    case 488u: goto L_003A37D0;
    case 489u: goto L_003A3804;
    case 490u: goto L_003A381C;
    case 491u: goto L_003A382C;
    case 492u: goto L_003A384C;
    case 493u: goto L_003A3868;
    case 494u: goto L_003A3878;
    case 495u: goto L_003A3894;
    case 496u: goto L_003A38A4;
    case 497u: goto L_003A38B4;
    case 498u: goto L_003A38D8;
    case 499u: goto L_003A38F8;
    case 500u: goto L_003A3914;
    case 501u: goto L_003A3924;
    case 502u: goto L_003A3944;
    case 503u: goto L_003A3960;
    case 504u: goto L_003A3970;
    case 505u: goto L_003A3980;
    case 506u: goto L_003A39A4;
    case 507u: goto L_003A39D0;
    case 508u: goto L_003A3A10;
    case 509u: goto L_003A3A4C;
    case 510u: goto L_003A3A64;
    case 511u: goto L_003A3A74;
    case 512u: goto L_003A3A84;
    case 513u: goto L_003A3A94;
    case 514u: goto L_003A3AE0;
    case 515u: goto L_003A3B3C;
    case 516u: goto L_003A3B54;
    case 517u: goto L_003A3B64;
    case 518u: goto L_003A3B7C;
    case 519u: goto L_003A3BA0;
    case 520u: goto L_003A3BDC;
    case 521u: goto L_003A3BF4;
    case 522u: goto L_003A3C0C;
    case 523u: goto L_003A3C24;
    case 524u: goto L_003A3C3C;
    case 525u: goto L_003A3C54;
    case 526u: goto L_003A3C70;
    case 527u: goto L_003A3CBC;
    case 528u: goto L_003A3CDC;
    case 529u: goto L_003A3CF8;
    case 530u: goto L_003A3D18;
    case 531u: goto L_003A3D28;
    case 532u: goto L_003A3D38;
    case 533u: goto L_003A3D50;
    case 534u: goto L_003A3D88;
    case 535u: goto L_003A3D98;
    case 536u: goto L_003A3DCC;
    case 537u: goto L_003A3DE0;
    case 538u: goto L_003A3E04;
    case 539u: goto L_003A3E30;
    case 540u: goto L_003A3E50;
    case 541u: goto L_003A3E74;
    case 542u: goto L_003A3E94;
    case 543u: goto L_003A3ED0;
    case 544u: goto L_003A3F54;
    case 545u: goto L_003A3F7C;
    case 546u: goto L_003A3F84;
    case 547u: goto L_003A3FB0;
    case 548u: goto L_003A3FCC;
    case 549u: goto L_003A3FFC;
    default: bad_entry(c, 0x003A0000u); return;
    }
L_003A0000:
    st128((c.r[29].w[0] + 272u) & ~15u, c.r[2]);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 2;
L_003A0008:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A0014u); c.r[5].d[0] = c.r[22].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 41u, depth + 1u); else { c.pc = 0x003A07E0u; return; } if (c.pc != 0x003A0014u) [[unlikely]] return; }
L_003A0014:
    c.f[1] = ld32((c.r[21].w[0] + 8u));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003A0044; } }
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[3], c.f[1]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.f[0] = ld32((c.r[21].w[0]));  if (t) { goto L_003A0060; } }
    goto L_003A0044;
L_003A0040:
    c.f[0] = ld32((c.r[21].w[0]));
    c.budget -= 1;
L_003A0044:
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[3], c.f[1]);
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = ld32((c.r[21].w[0]));
    c.budget -= 7;
L_003A0060:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.f[1] = ld32((c.r[21].w[0] + 4u));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.f[0] = fp::cvt_w_s(c.f[0]);
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[2], c.f[0]);
    set32(c.r[6], c.f[1]);
    st32((c.r[18].w[0]), c.r[2].w[0]);
    st32((c.r[18].w[0] + 4u), c.r[6].w[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A008Cu); st32((c.r[18].w[0] + 16u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_00A7(c, 245u, depth + 1u); else { c.pc = 0x0039F750u; return; } if (c.pc != 0x003A008Cu) [[unlikely]] return; }
L_003A008C:
    ld128((c.r[21].w[0]) & ~15u, c.r[2]);
    set32(c.r[3], c.r[29].w[0] + 256u);
    st128((c.r[3].w[0]) & ~15u, c.r[2]);
    set32(c.r[2], ld32((c.r[18].w[0] + 68u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003A00B0; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A00B0u); c.r[5].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 45u, depth + 1u); else { c.pc = 0x003A0880u; return; } if (c.pc != 0x003A00B0u) [[unlikely]] return; }
L_003A00B0:
    c.f[1] = ld32((c.r[21].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41880000u);
    c.f[2] = c.r[2].w[0];
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[16], c.r[29].w[0] + 260u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41800000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    set32(c.r[4], c.r[29].w[0] + 240u);
    set32(c.r[5], c.r[5].w[0] + 3880u);
    c.f[1] = fp::add(c.f[2], c.f[1]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    st32((c.r[29].w[0] + 256u), c.f[1]);
    c.f[1] = ld32((c.r[21].w[0] + 4u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[16].w[0]), c.f[0]);
    set32(c.r[6], ld32((c.r[1].w[0] + 26392u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[17], ld32((c.r[6].w[0] + 332u)));
    c.f[0] = ld32((c.r[1].w[0] + 4040u));
    st32((c.r[17].w[0] + 16u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[0] = ld32((c.r[1].w[0] + 4040u));
    st32((c.r[17].w[0] + 20u), c.f[0]);
    st32((c.r[17].w[0] + 24u), c.r[3].w[0]);
    st32((c.r[17].w[0] + 304u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 308u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 312u), 0u);
    st32((c.r[17].w[0] + 316u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 72u)));
    c.budget -= 33;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A0134u); set32(c.r[6], c.r[2].w[0] + 1u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x00127458u; return; } if (c.pc != 0x003A0134u) [[unlikely]] return; }
L_003A0134:
    set32(c.r[2], c.r[29].w[0] + 240u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[17].w[0] + 352u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 356u), 0u);
    set32(c.r[25], ld32((c.r[17].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003A0154u); set32(c.r[5], c.r[29].w[0] + 256u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003A0154u) [[unlikely]] return; }
L_003A0154:
    ld128((c.r[29].w[0] + 272u) & ~15u, c.r[2]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u - 1u);
    st128((c.r[17].w[0] + 48u) & ~15u, c.r[2]);
    set32(c.r[25], ld32((c.r[17].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 68u)));
    c.budget -= 10;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003A017Cu); set32(c.r[8], 0u + 2u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003A017Cu) [[unlikely]] return; }
L_003A017C:
    set32(c.r[25], ld32((c.r[17].w[0] + 176u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u - 1u);
    set32(c.r[25], ld32((c.r[25].w[0] + 68u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003A019Cu); c.r[8].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003A019Cu) [[unlikely]] return; }
L_003A019C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 26392u)));
    set32(c.r[18], ld32((c.r[2].w[0] + 440u)));
    set32(c.r[17], ld32((c.r[2].w[0] + 444u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A01B4u); c.r[4].d[0] = ld8((c.r[19].w[0] + 6u));  if (depth < kMaxDepth) unit_009F(c, 83u, depth + 1u); else { c.pc = 0x0037CEF0u; return; } if (c.pc != 0x003A01B4u) [[unlikely]] return; }
L_003A01B4:
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u + 830u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_003A01F8; } }
    c.f[1] = ld32((c.r[21].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42000000u);
    c.f[20] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40A00000u);
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::add(c.f[20], c.f[1]);
    st32((c.r[29].w[0] + 256u), c.f[1]);
    c.f[1] = ld32((c.r[21].w[0] + 4u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0]), c.f[0]);  if (t) { goto L_003A0224; } }
L_003A01F8:
    c.f[1] = ld32((c.r[21].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42000000u);
    c.f[20] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::add(c.f[20], c.f[1]);
    st32((c.r[29].w[0] + 256u), c.f[1]);
    c.f[1] = ld32((c.r[21].w[0] + 4u));
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[16].w[0]), c.f[0]);
    c.budget -= 11;
L_003A0224:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[18].w[0] + 304u), c.r[2].w[0]);
    set32(c.r[3], 0u + 255u);
    st32((c.r[18].w[0] + 308u), c.r[2].w[0]);
    c.f[1] = c.r[4].w[0];
    st32((c.r[18].w[0] + 312u), 0u);
    set32(c.r[2], 0u + 830u);
    st32((c.r[18].w[0] + 316u), c.r[4].w[0]);
    st32((c.r[18].w[0] + 300u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[20].w[0] + 4u)));
    c.budget -= 13;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);  if (t) { goto L_003A0278; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[21] = ld32((c.r[1].w[0] + 4032u));
    st32((c.r[18].w[0] + 16u), c.f[21]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[0] = ld32((c.r[1].w[0] + 4032u));
    st32((c.r[18].w[0] + 20u), c.f[0]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 24u), c.f[1]);  if (t) { goto L_003A028C; } }
L_003A0278:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F400000u);
    c.f[21] = ld32((c.r[1].w[0] + 4032u));
    st32((c.r[18].w[0] + 16u), c.f[21]);
    st32((c.r[18].w[0] + 20u), c.r[2].w[0]);
    st32((c.r[18].w[0] + 24u), c.f[1]);
    c.budget -= 5;
L_003A028C:
    c.r[3].d[0] = ld8((c.r[19].w[0] + 6u));
    set32(c.r[2], 0u + 24u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[4], ld32((c.r[20].w[0])));  if (t) { goto L_003A02AC; } }
    set32(c.r[3], ld32((c.r[30].w[0] + 272u)));
    set32(c.r[4], 0u + 826u);
    set32(c.r[2], 0u + 640u);
    if (c.r[3].d[0] == 0) c.r[4].d[0] = c.r[2].d[0];
    c.budget -= 4;
L_003A02AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A02B4u);  if (depth < kMaxDepth) unit_000B(c, 461u, depth + 1u); else { c.pc = 0x0012FD60u; return; } if (c.pc != 0x003A02B4u) [[unlikely]] return; }
L_003A02B4:
    st32((c.r[18].w[0] + 352u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A02C4u); st32((c.r[18].w[0] + 356u), 0u);  if (depth < kMaxDepth) unit_0018(c, 67u, depth + 1u); else { c.pc = 0x00162250u; return; } if (c.pc != 0x003A02C4u) [[unlikely]] return; }
L_003A02C4:
    c.r[1].d[0] = c.r[2].sd[0] < 149ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_003A0314; } }
    ld128((c.r[18].w[0] + 16u) & ~15u, c.r[2]);
    set32(c.r[3], c.r[29].w[0] + 224u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A02E4u); st128((c.r[3].w[0]) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_0018(c, 67u, depth + 1u); else { c.pc = 0x00162250u; return; } if (c.pc != 0x003A02E4u) [[unlikely]] return; }
L_003A02E4:
    c.f[1] = c.r[2].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43140000u);
    c.f[0] = c.r[2].w[0];
    fpu_div(c, 0u, c.f[0], c.f[1]);
    st32((c.r[18].w[0] + 16u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 228u));
    st32((c.r[18].w[0] + 20u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 232u));
    st32((c.r[18].w[0] + 24u), c.f[0]);
    c.budget -= 12;
L_003A0314:
    set32(c.r[25], ld32((c.r[18].w[0] + 176u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003A0328u); set32(c.r[5], c.r[29].w[0] + 256u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003A0328u) [[unlikely]] return; }
L_003A0328:
    c.budget -= 2;
    { const bool t = c.r[22].d[0] == 0ull;  if (t) { goto L_003A03CC; } }
    set32(c.r[6], ld32((c.r[18].w[0] + 352u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    set32(c.r[7], c.r[29].w[0] + 208u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[3].w[0];
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[17].w[0] + 352u), c.r[6].w[0]);
    st32((c.r[17].w[0] + 356u), 0u);
    ld128((c.r[18].w[0] + 16u) & ~15u, c.r[6]);
    st128((c.r[7].w[0]) & ~15u, c.r[6]);
    c.f[0] = ld32((c.r[29].w[0] + 208u));
    st32((c.r[17].w[0] + 16u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 212u));
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    st32((c.r[17].w[0] + 20u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 216u));
    st32((c.r[17].w[0] + 24u), c.f[0]);
    st32((c.r[17].w[0] + 272u), c.r[3].w[0]);
    st32((c.r[17].w[0] + 276u), c.r[3].w[0]);
    st32((c.r[17].w[0] + 280u), 0u);
    st32((c.r[17].w[0] + 284u), c.r[2].w[0]);
    ld128((c.r[23].w[0]) & ~15u, c.r[2]);
    st128((c.r[17].w[0] + 48u) & ~15u, c.r[2]);
    set32(c.r[25], ld32((c.r[17].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 27;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003A039Cu); set32(c.r[5], c.r[29].w[0] + 256u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003A039Cu) [[unlikely]] return; }
L_003A039C:
    set32(c.r[25], ld32((c.r[17].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003A03ACu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003A03ACu) [[unlikely]] return; }
L_003A03AC:
    ld128((c.r[29].w[0] + 272u) & ~15u, c.r[2]);
    st128((c.r[18].w[0] + 48u) & ~15u, c.r[2]);
    set32(c.r[25], ld32((c.r[18].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003A03C4u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003A03C4u) [[unlikely]] return; }
L_003A03C4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[20].w[0] + 4u)));  if (t) { goto L_003A0418; } }
L_003A03CC:
    ld128((c.r[29].w[0] + 272u) & ~15u, c.r[2]);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u - 1u);
    st128((c.r[18].w[0] + 48u) & ~15u, c.r[2]);
    set32(c.r[25], ld32((c.r[18].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 68u)));
    c.budget -= 10;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003A03F4u); set32(c.r[8], 0u + 2u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003A03F4u) [[unlikely]] return; }
L_003A03F4:
    set32(c.r[25], ld32((c.r[18].w[0] + 176u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u - 1u);
    set32(c.r[25], ld32((c.r[25].w[0] + 68u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003A0414u); c.r[8].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003A0414u) [[unlikely]] return; }
L_003A0414:
    set32(c.r[3], ld32((c.r[20].w[0] + 4u)));
    c.budget -= 1;
L_003A0418:
    set32(c.r[2], 0u + 830u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003A05DC; } }
    c.f[1] = ld32((c.r[21].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41400000u);
    c.f[0] = c.r[2].w[0];
    c.r[5].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[3], 0u + 255u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F400000u);
    c.f[1] = fp::add(c.f[20], c.f[1]);
    st32((c.r[29].w[0] + 256u), c.f[1]);
    c.f[1] = ld32((c.r[21].w[0] + 4u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[16].w[0]), c.f[0]);
    st32((c.r[18].w[0] + 304u), c.r[5].w[0]);
    st32((c.r[18].w[0] + 308u), c.r[5].w[0]);
    st32((c.r[18].w[0] + 312u), 0u);
    st32((c.r[18].w[0] + 316u), c.r[4].w[0]);
    st32((c.r[18].w[0] + 300u), c.r[3].w[0]);
    st32((c.r[18].w[0] + 16u), c.f[21]);
    st32((c.r[18].w[0] + 20u), c.r[2].w[0]);
    st32((c.r[18].w[0] + 24u), c.r[4].w[0]);
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A047Cu); set32(c.r[4], ld32((c.r[20].w[0] + 4u)));  if (depth < kMaxDepth) unit_000B(c, 461u, depth + 1u); else { c.pc = 0x0012FD60u; return; } if (c.pc != 0x003A047Cu) [[unlikely]] return; }
L_003A047C:
    st32((c.r[18].w[0] + 352u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A048Cu); st32((c.r[18].w[0] + 356u), 0u);  if (depth < kMaxDepth) unit_0018(c, 67u, depth + 1u); else { c.pc = 0x00162250u; return; } if (c.pc != 0x003A048Cu) [[unlikely]] return; }
L_003A048C:
    c.r[1].d[0] = c.r[2].sd[0] < 149ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_003A04DC; } }
    ld128((c.r[18].w[0] + 16u) & ~15u, c.r[2]);
    set32(c.r[3], c.r[29].w[0] + 192u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A04ACu); st128((c.r[3].w[0]) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_0018(c, 67u, depth + 1u); else { c.pc = 0x00162250u; return; } if (c.pc != 0x003A04ACu) [[unlikely]] return; }
L_003A04AC:
    c.f[1] = c.r[2].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43140000u);
    c.f[0] = c.r[2].w[0];
    fpu_div(c, 0u, c.f[0], c.f[1]);
    st32((c.r[18].w[0] + 16u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 196u));
    st32((c.r[18].w[0] + 20u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 200u));
    st32((c.r[18].w[0] + 24u), c.f[0]);
    c.budget -= 12;
L_003A04DC:
    set32(c.r[25], ld32((c.r[18].w[0] + 176u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003A04F0u); set32(c.r[5], c.r[29].w[0] + 256u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003A04F0u) [[unlikely]] return; }
L_003A04F0:
    c.budget -= 2;
    { const bool t = c.r[22].d[0] == 0ull;  if (t) { goto L_003A0594; } }
    set32(c.r[6], ld32((c.r[18].w[0] + 352u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    set32(c.r[7], c.r[29].w[0] + 176u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[3].w[0];
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[17].w[0] + 352u), c.r[6].w[0]);
    st32((c.r[17].w[0] + 356u), 0u);
    ld128((c.r[18].w[0] + 16u) & ~15u, c.r[6]);
    st128((c.r[7].w[0]) & ~15u, c.r[6]);
    c.f[0] = ld32((c.r[29].w[0] + 176u));
    st32((c.r[17].w[0] + 16u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 180u));
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    st32((c.r[17].w[0] + 20u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 184u));
    st32((c.r[17].w[0] + 24u), c.f[0]);
    st32((c.r[17].w[0] + 272u), c.r[3].w[0]);
    st32((c.r[17].w[0] + 276u), c.r[3].w[0]);
    st32((c.r[17].w[0] + 280u), 0u);
    st32((c.r[17].w[0] + 284u), c.r[2].w[0]);
    ld128((c.r[23].w[0]) & ~15u, c.r[2]);
    st128((c.r[17].w[0] + 48u) & ~15u, c.r[2]);
    set32(c.r[25], ld32((c.r[17].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 27;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003A0564u); set32(c.r[5], c.r[29].w[0] + 256u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003A0564u) [[unlikely]] return; }
L_003A0564:
    set32(c.r[25], ld32((c.r[17].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003A0574u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003A0574u) [[unlikely]] return; }
L_003A0574:
    ld128((c.r[29].w[0] + 272u) & ~15u, c.r[2]);
    st128((c.r[18].w[0] + 48u) & ~15u, c.r[2]);
    set32(c.r[25], ld32((c.r[18].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003A058Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003A058Cu) [[unlikely]] return; }
L_003A058C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003A05DC; } }
L_003A0594:
    ld128((c.r[29].w[0] + 272u) & ~15u, c.r[2]);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u - 1u);
    st128((c.r[18].w[0] + 48u) & ~15u, c.r[2]);
    set32(c.r[25], ld32((c.r[18].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 68u)));
    c.budget -= 10;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003A05BCu); set32(c.r[8], 0u + 2u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003A05BCu) [[unlikely]] return; }
L_003A05BC:
    set32(c.r[25], ld32((c.r[18].w[0] + 176u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u - 1u);
    set32(c.r[25], ld32((c.r[25].w[0] + 68u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003A05DCu); c.r[8].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003A05DCu) [[unlikely]] return; }
L_003A05DC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x434E0000u);
    c.f[1] = ld32((c.r[1].w[0] + 4024u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40A00000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[2] = c.r[3].w[0];
    c.f[0] = c.r[2].w[0];
    st32((c.r[18].w[0] + 16u), c.f[1]);
    st32((c.r[18].w[0] + 20u), c.f[21]);
    st32((c.r[18].w[0] + 24u), c.r[5].w[0]);
    c.f[1] = ld32((c.r[21].w[0]));
    c.f[1] = fp::add(c.f[2], c.f[1]);
    st32((c.r[29].w[0] + 256u), c.f[1]);
    c.f[1] = ld32((c.r[21].w[0] + 4u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[16].w[0]), c.f[0]);
    c.r[2].d[0] = ld8((c.r[19].w[0] + 13u));
    c.r[2].d[0] = c.r[2].d[0] << 57;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 22;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u + 141u);  if (t) { goto L_003A0638; } }
    set32(c.r[4], 0u + 142u);
    c.budget -= 1;
L_003A0638:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A0640u);  if (depth < kMaxDepth) unit_000B(c, 461u, depth + 1u); else { c.pc = 0x0012FD60u; return; } if (c.pc != 0x003A0640u) [[unlikely]] return; }
L_003A0640:
    st32((c.r[18].w[0] + 352u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    st32((c.r[18].w[0] + 356u), 0u);
    set32(c.r[25], ld32((c.r[18].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003A065Cu); set32(c.r[5], c.r[29].w[0] + 256u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003A065Cu) [[unlikely]] return; }
L_003A065C:
    ld128((c.r[29].w[0] + 272u) & ~15u, c.r[2]);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u - 1u);
    st128((c.r[18].w[0] + 48u) & ~15u, c.r[2]);
    set32(c.r[25], ld32((c.r[18].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 68u)));
    c.budget -= 10;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003A0684u); set32(c.r[8], 0u + 2u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003A0684u) [[unlikely]] return; }
L_003A0684:
    set32(c.r[25], ld32((c.r[18].w[0] + 176u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u - 1u);
    set32(c.r[25], ld32((c.r[25].w[0] + 68u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003A06A4u); c.r[8].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003A06A4u) [[unlikely]] return; }
L_003A06A4:
    c.f[1] = ld32((c.r[21].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43740000u);
    c.f[2] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40A00000u);
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::add(c.f[2], c.f[1]);
    st32((c.r[29].w[0] + 256u), c.f[1]);
    c.f[1] = ld32((c.r[21].w[0] + 4u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[16].w[0]), c.f[0]);
    c.r[2].d[0] = ld8((c.r[19].w[0] + 13u));
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 16;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u + 141u);  if (t) { goto L_003A06E8; } }
    set32(c.r[4], 0u + 142u);
    c.budget -= 1;
L_003A06E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A06F0u);  if (depth < kMaxDepth) unit_000B(c, 461u, depth + 1u); else { c.pc = 0x0012FD60u; return; } if (c.pc != 0x003A06F0u) [[unlikely]] return; }
L_003A06F0:
    st32((c.r[18].w[0] + 352u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    st32((c.r[18].w[0] + 356u), 0u);
    set32(c.r[25], ld32((c.r[18].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003A070Cu); set32(c.r[5], c.r[29].w[0] + 256u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003A070Cu) [[unlikely]] return; }
L_003A070C:
    set32(c.r[25], ld32((c.r[18].w[0] + 176u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u - 1u);
    set32(c.r[25], ld32((c.r[25].w[0] + 68u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003A072Cu); set32(c.r[8], 0u + 2u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003A072Cu) [[unlikely]] return; }
L_003A072C:
    set32(c.r[25], ld32((c.r[18].w[0] + 176u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u - 1u);
    set32(c.r[25], ld32((c.r[25].w[0] + 68u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003A074Cu); c.r[8].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003A074Cu) [[unlikely]] return; }
L_003A074C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 160u));
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[30]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 288u);  c.pc = t; return; }
L_003A0790:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0] + 68u)));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003A07CC; } }
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A07BCu); c.r[6].d[0] = c.r[7].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 41u, depth + 1u); else { c.pc = 0x003A07E0u; return; } if (c.pc != 0x003A07BCu) [[unlikely]] return; }
L_003A07BC:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A07CCu); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 45u, depth + 1u); else { c.pc = 0x003A0880u; return; } if (c.pc != 0x003A07CCu) [[unlikely]] return; }
L_003A07CC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003A07E0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[6].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003A0804; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u + 30u);  if (t) { goto L_003A0860; } }
L_003A0804:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A080Cu);  if (depth < kMaxDepth) unit_0087(c, 136u, depth + 1u); else { c.pc = 0x0031D080u; return; } if (c.pc != 0x003A080Cu) [[unlikely]] return; }
L_003A080C:
    set32(c.r[4], ld32((c.r[2].w[0] + 272u)));
    set32(c.r[3], 0u + 7u);
    set32(c.r[5], ld32((c.r[17].w[0] + 72u)));
    set32(c.r[2], 0u + 8u);
    if (c.r[4].d[0] != 0) c.r[3].d[0] = c.r[2].d[0];
    c.r[1].d[0] = c.r[5].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
L_003A0824:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[4], 0u + 27u);  if (t) { goto L_003A0838; } }
    set32(c.r[2], 0u + 26u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; if (c.r[16].d[0] == 0) c.r[4].d[0] = c.r[2].d[0];  if (t) { goto L_003A0860; } }
L_003A0838:
    set32(c.r[3], ld32((c.r[17].w[0] + 64u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[4], 0u + 25u);  if (t) { goto L_003A0858; } }
    set32(c.r[4], 0u + 29u);
    set32(c.r[2], 0u + 28u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; if (c.r[16].d[0] == 0) c.r[4].d[0] = c.r[2].d[0];  if (t) { goto L_003A0860; } }
L_003A0858:
    set32(c.r[2], 0u + 24u);
    if (c.r[16].d[0] == 0) c.r[4].d[0] = c.r[2].d[0];
    c.budget -= 2;
L_003A0860:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A0868u);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x003A0868u) [[unlikely]] return; }
L_003A0868:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003A0880:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[9], ld32((c.r[4].w[0] + 68u)));
    c.budget -= 5;
    { const bool t = c.r[9].d[0] == 0ull;  if (t) { goto L_003A0928; } }
    ld128((c.r[5].w[0]) & ~15u, c.r[7]);
    set32(c.r[8], c.r[29].w[0] + 16u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43440000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[2] = c.r[3].w[0];
    c.f[0] = c.r[2].w[0];
    st128((c.r[8].w[0]) & ~15u, c.r[7]);
    c.f[1] = ld32((c.r[5].w[0]));
    c.f[1] = fp::add(c.f[2], c.f[1]);
    st32((c.r[29].w[0] + 16u), c.f[1]);
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[2], c.f[1]);
    st32((c.r[9].w[0]), c.r[2].w[0]);
    c.f[1] = ld32((c.r[29].w[0] + 20u));
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[2], c.f[1]);
    st32((c.r[9].w[0] + 4u), c.r[2].w[0]);
    c.f[1] = ld32((c.r[29].w[0] + 24u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 23;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003A0900; } }
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[3], c.f[1]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[9].w[0] + 16u), c.r[3].w[0]);  if (t) { goto L_003A091C; } }
L_003A0900:
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[3], c.f[1]);
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    st32((c.r[9].w[0] + 16u), c.r[3].w[0]);
    c.budget -= 7;
L_003A091C:
    set32(c.r[4], ld32((c.r[4].w[0] + 68u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A0928u); c.r[5].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A7(c, 245u, depth + 1u); else { c.pc = 0x0039F750u; return; } if (c.pc != 0x003A0928u) [[unlikely]] return; }
L_003A0928:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003A0940:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[5], 0u + 5u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A095Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 264u, depth + 1u); else { c.pc = 0x0013E560u; return; } if (c.pc != 0x003A095Cu) [[unlikely]] return; }
L_003A095C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[4], c.r[16].w[0] + 16u);
    set32(c.r[2], c.r[2].w[0] - 27824u);
    set32(c.r[5], 0u + 3u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    set32(c.r[6], 0u + 4u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A097Cu); set32(c.r[7], 0u + 6u);  if (depth < kMaxDepth) unit_002A(c, 335u, depth + 1u); else { c.pc = 0x001AB970u; return; } if (c.pc != 0x003A097Cu) [[unlikely]] return; }
L_003A097C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A0984u); set32(c.r[4], c.r[16].w[0] + 448u);  if (depth < kMaxDepth) unit_00A7(c, 251u, depth + 1u); else { c.pc = 0x0039F8A0u; return; } if (c.pc != 0x003A0984u) [[unlikely]] return; }
L_003A0984:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x003A0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x003A0000u);
    set32(c.r[4], c.r[16].w[0] + 1488u);
    set32(c.r[5], c.r[5].w[0] - 656u);
    set32(c.r[6], c.r[6].w[0] - 592u);
    set32(c.r[7], 0u + 84u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A09A4u); set32(c.r[8], 0u + 35u);  if (depth < kMaxDepth) unit_0000(c, 89u, depth + 1u); else { c.pc = 0x00100790u; return; } if (c.pc != 0x003A09A4u) [[unlikely]] return; }
L_003A09A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A09ACu); set32(c.r[4], 0u + 9u);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x003A09ACu) [[unlikely]] return; }
L_003A09AC:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A09B8u); set32(c.r[4], 0u + 8u);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x003A09B8u) [[unlikely]] return; }
L_003A09B8:
    ld128((c.r[2].w[0]) & ~15u, c.r[4]);
    set32(c.r[3], 0u + 30u);
    c.r[5].d[0] = 0ull + 0ull;
    st128((c.r[16].w[0] + 4432u) & ~15u, c.r[4]);
    set32(c.r[2], 0u + 10u);
    ld128((c.r[17].w[0]) & ~15u, c.r[4]);
    st128((c.r[16].w[0] + 4448u) & ~15u, c.r[4]);
    st32((c.r[16].w[0] + 4484u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 4480u), 0u);
    st32((c.r[16].w[0] + 4492u), 0u);
    st8((c.r[16].w[0] + 4488u), static_cast<std::uint8_t>(0u));
    ld128((c.r[16].w[0] + 4432u) & ~15u, c.r[3]);
    st128((c.r[16].w[0] + 4464u) & ~15u, c.r[3]);
    st32((c.r[16].w[0] + 4504u), 0u);
    st32((c.r[16].w[0] + 4500u), 0u);
    st32((c.r[16].w[0] + 4496u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 4508u), 0u);
    c.budget -= 19;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 4512u), 0u);  if (t) { goto L_003A0A20; } }
L_003A0A04:
    set32(c.r[3], c.r[2].w[0] - c.r[5].w[0]);
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    st32((c.r[2].w[0] + 1560u), c.r[5].w[0]);
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 7;
L_003A0A20:
    c.r[2].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(35ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[5].w[0] << 3);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A0A04u | kUnwind; return; } goto L_003A0A04; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[5], 0u + 10018u);
    set32(c.r[2], ld32((c.r[1].w[0] + 26392u)));
    set32(c.r[17], c.r[2].w[0] + 624u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A0A44u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_002A(c, 5u, depth + 1u); else { c.pc = 0x001A80A0u; return; } if (c.pc != 0x003A0A44u) [[unlikely]] return; }
L_003A0A44:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A0A54u); c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_002A(c, 3u, depth + 1u); else { c.pc = 0x001A8060u; return; } if (c.pc != 0x003A0A54u) [[unlikely]] return; }
L_003A0A54:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A0A64u); set32(c.r[4], c.r[16].w[0] + 16u);  if (depth < kMaxDepth) unit_0025(c, 322u, depth + 1u); else { c.pc = 0x00196E30u; return; } if (c.pc != 0x003A0A64u) [[unlikely]] return; }
L_003A0A64:
    set32(c.r[5], ld32((c.r[16].w[0] + 4500u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A0A70u); set32(c.r[4], c.r[16].w[0] + 448u);  if (depth < kMaxDepth) unit_00A7(c, 284u, depth + 1u); else { c.pc = 0x0039FD20u; return; } if (c.pc != 0x003A0A70u) [[unlikely]] return; }
L_003A0A70:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003A0A90:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003A0B8C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x003A0000u);
    set32(c.r[2], c.r[2].w[0] - 27824u);
    set32(c.r[4], c.r[17].w[0] + 1488u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[5], c.r[5].w[0] - 592u);
    set32(c.r[6], 0u + 84u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A0AD4u); set32(c.r[7], 0u + 35u);  if (depth < kMaxDepth) unit_0000(c, 86u, depth + 1u); else { c.pc = 0x00100720u; return; } if (c.pc != 0x003A0AD4u) [[unlikely]] return; }
L_003A0AD4:
    set32(c.r[4], c.r[17].w[0] + 448u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A0AE0u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_00A7(c, 268u, depth + 1u); else { c.pc = 0x0039FBA0u; return; } if (c.pc != 0x003A0AE0u) [[unlikely]] return; }
L_003A0AE0:
    set32(c.r[2], c.r[17].w[0] + 16u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003A0B6C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] - 11056u);
    set32(c.r[3], c.r[3].w[0] - 11040u);
    st32((c.r[17].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[18], c.r[17].w[0] + 176u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    st32((c.r[17].w[0] + 24u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] - 11024u);
    c.budget -= 11;
    { const bool t = c.r[18].d[0] == 0ull; st32((c.r[17].w[0] + 40u), c.r[2].w[0]);  if (t) { goto L_003A0B5C; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] - 10992u);
    set32(c.r[2], c.r[2].w[0] - 10932u);
    st32((c.r[17].w[0] + 352u), c.r[3].w[0]);
    set32(c.r[4], c.r[17].w[0] + 432u);
    st32((c.r[17].w[0] + 432u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A0B3Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000F(c, 266u, depth + 1u); else { c.pc = 0x0013E5B0u; return; } if (c.pc != 0x003A0B3Cu) [[unlikely]] return; }
L_003A0B3C:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull; set32(c.r[4], c.r[17].w[0] + 16u);  if (t) { goto L_003A0B60; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] - 17888u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A0B5Cu); st32((c.r[17].w[0] + 352u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0012(c, 264u, depth + 1u); else { c.pc = 0x0014ADA0u; return; } if (c.pc != 0x003A0B5Cu) [[unlikely]] return; }
L_003A0B5C:
    set32(c.r[4], c.r[17].w[0] + 16u);
    c.budget -= 1;
L_003A0B60:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A0B68u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0025(c, 310u, depth + 1u); else { c.pc = 0x00196D20u; return; } if (c.pc != 0x003A0B68u) [[unlikely]] return; }
L_003A0B68:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003A0B6C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A0B74u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000F(c, 266u, depth + 1u); else { c.pc = 0x0013E5B0u; return; } if (c.pc != 0x003A0B74u) [[unlikely]] return; }
L_003A0B74:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003A0B90; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A0B8Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x003A0B8Cu) [[unlikely]] return; }
L_003A0B8C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003A0B90:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003A0BB0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], 0u + 6u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 4508u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003A0C20; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], 0u + 5u);  if (t) { goto L_003A0C20; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003A0C18; } }
    set32(c.r[2], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_003A0C08; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003A0BF8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = ld8((c.r[16].w[0] + 4488u));  if (t) { goto L_003A0C24; } }
L_003A0BF8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A0C00u);  if (depth < kMaxDepth) unit_00A8(c, 137u, depth + 1u); else { c.pc = 0x003A13F0u; return; } if (c.pc != 0x003A0C00u) [[unlikely]] return; }
L_003A0C00:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003A0C20; } }
L_003A0C08:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A0C10u);  if (depth < kMaxDepth) unit_00A8(c, 150u, depth + 1u); else { c.pc = 0x003A1630u; return; } if (c.pc != 0x003A0C10u) [[unlikely]] return; }
L_003A0C10:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003A0C20; } }
L_003A0C18:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A0C20u);  if (depth < kMaxDepth) unit_00A8(c, 153u, depth + 1u); else { c.pc = 0x003A1670u; return; } if (c.pc != 0x003A0C20u) [[unlikely]] return; }
L_003A0C20:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 4488u));
    c.budget -= 1;
L_003A0C24:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003A0C58; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 4492u)));
    set32(c.r[3], c.r[2].w[0] - 1u);
    st32((c.r[16].w[0] + 4492u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 4480u)));
    set32(c.r[2], 0u - c.r[2].w[0]);
    c.r[1].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[4], c.r[16].w[0] + 4432u);  if (t) { goto L_003A0C8C; } }
    st32((c.r[16].w[0] + 4492u), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 4488u), static_cast<std::uint8_t>(0u));  if (t) { goto L_003A0C88; } }
L_003A0C58:
    set32(c.r[2], ld32((c.r[16].w[0] + 4492u)));
    set32(c.r[4], c.r[2].w[0] + 1u);
    st32((c.r[16].w[0] + 4492u), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 4484u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 4480u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.r[1].d[0] = c.r[2].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003A0C88; } }
    st32((c.r[16].w[0] + 4492u), c.r[2].w[0]);
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 4488u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
L_003A0C88:
    set32(c.r[4], c.r[16].w[0] + 4432u);
    c.budget -= 1;
L_003A0C8C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A0C94u);  if (depth < kMaxDepth) unit_002A(c, 280u, depth + 1u); else { c.pc = 0x001AB050u; return; } if (c.pc != 0x003A0C94u) [[unlikely]] return; }
L_003A0C94:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003A0CB0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 4508u)));
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(7ll) ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull; c.r[5].sd[0] = static_cast<std::int32_t>(0x00470000u);  if (t) { goto L_003A0D24; } }
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + 3888u);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 6;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x003A0000u < 16384u) { entry = entries_00A8[(t - 0x003A0000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_003A0CE0:
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A0CECu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 169u, depth + 1u); else { c.pc = 0x003A18F0u; return; } if (c.pc != 0x003A0CECu) [[unlikely]] return; }
L_003A0CEC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_003A0D28; } }
L_003A0CF4:
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A0D00u); c.r[6].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 169u, depth + 1u); else { c.pc = 0x003A18F0u; return; } if (c.pc != 0x003A0D00u) [[unlikely]] return; }
L_003A0D00:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003A0D24; } }
L_003A0D08:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A0D10u);  if (depth < kMaxDepth) unit_00A8(c, 174u, depth + 1u); else { c.pc = 0x003A1AE0u; return; } if (c.pc != 0x003A0D10u) [[unlikely]] return; }
L_003A0D10:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003A0D24; } }
L_003A0D18:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A0D24u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 169u, depth + 1u); else { c.pc = 0x003A18F0u; return; } if (c.pc != 0x003A0D24u) [[unlikely]] return; }
L_003A0D24:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_003A0D28:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003A0D30:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[1].w[0] + 26392u)));
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[16], ld32((c.r[5].w[0] + 440u)));
    st32((c.r[16].w[0] + 304u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 308u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 312u), 0u);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A0D78u); st32((c.r[16].w[0] + 316u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x003A0D78u) [[unlikely]] return; }
L_003A0D78:
    ld128((c.r[2].w[0]) & ~15u, c.r[3]);
    set32(c.r[4], 0u + 516u);
    st128((c.r[16].w[0] + 48u) & ~15u, c.r[3]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[16].w[0] + 60u), c.r[17].w[0]);
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A0D9Cu); st32((c.r[16].w[0] + 24u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000B(c, 461u, depth + 1u); else { c.pc = 0x0012FD60u; return; } if (c.pc != 0x003A0D9Cu) [[unlikely]] return; }
L_003A0D9C:
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
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003A0DC8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003A0DC8u) [[unlikely]] return; }
L_003A0DC8:
    set32(c.r[25], ld32((c.r[16].w[0] + 176u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u - 1u);
    set32(c.r[25], ld32((c.r[25].w[0] + 68u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003A0DE8u); set32(c.r[8], 0u + 2u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003A0DE8u) [[unlikely]] return; }
L_003A0DE8:
    set32(c.r[25], ld32((c.r[16].w[0] + 176u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u - 1u);
    set32(c.r[25], ld32((c.r[25].w[0] + 68u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003A0E08u); c.r[8].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003A0E08u) [[unlikely]] return; }
L_003A0E08:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    set32(c.r[5], ld32((c.r[1].w[0] + 26392u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[16], ld32((c.r[5].w[0] + 548u)));
    st32((c.r[16].w[0] + 304u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 308u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 312u), 0u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A0E34u); st32((c.r[16].w[0] + 316u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x003A0E34u) [[unlikely]] return; }
L_003A0E34:
    ld128((c.r[2].w[0]) & ~15u, c.r[3]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[4], 0u + 317u);
    st128((c.r[16].w[0] + 48u) & ~15u, c.r[3]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[16].w[0] + 60u), c.r[17].w[0]);
    c.f[0] = ld32((c.r[1].w[0] + 4016u));
    st32((c.r[16].w[0] + 16u), c.f[0]);
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A0E60u); st32((c.r[16].w[0] + 24u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000B(c, 461u, depth + 1u); else { c.pc = 0x0012FD60u; return; } if (c.pc != 0x003A0E60u) [[unlikely]] return; }
L_003A0E60:
    st32((c.r[16].w[0] + 352u), c.r[2].w[0]);
    c.f[14] = 0u;
    st32((c.r[16].w[0] + 356u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x437C0000u);
    set32(c.r[25], ld32((c.r[16].w[0] + 176u)));
    c.f[12] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x420C0000u);
    c.f[13] = c.r[2].w[0];
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 11;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003A0E8Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003A0E8Cu) [[unlikely]] return; }
L_003A0E8C:
    set32(c.r[25], ld32((c.r[16].w[0] + 176u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u - 1u);
    set32(c.r[25], ld32((c.r[25].w[0] + 68u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003A0EACu); set32(c.r[8], 0u + 2u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003A0EACu) [[unlikely]] return; }
L_003A0EAC:
    set32(c.r[25], ld32((c.r[16].w[0] + 176u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u - 1u);
    set32(c.r[25], ld32((c.r[25].w[0] + 68u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003A0ECCu); c.r[8].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003A0ECCu) [[unlikely]] return; }
L_003A0ECC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = ld32((c.r[1].w[0] + 4008u));
    set32(c.r[4], 0u + 773u);
    st32((c.r[16].w[0] + 16u), c.f[0]);
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A0EECu); st32((c.r[16].w[0] + 24u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000B(c, 461u, depth + 1u); else { c.pc = 0x0012FD60u; return; } if (c.pc != 0x003A0EECu) [[unlikely]] return; }
L_003A0EEC:
    st32((c.r[16].w[0] + 352u), c.r[2].w[0]);
    c.f[14] = 0u;
    st32((c.r[16].w[0] + 356u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43960000u);
    set32(c.r[25], ld32((c.r[16].w[0] + 176u)));
    c.f[12] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x420C0000u);
    c.f[13] = c.r[2].w[0];
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 11;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003A0F18u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003A0F18u) [[unlikely]] return; }
L_003A0F18:
    set32(c.r[25], ld32((c.r[16].w[0] + 176u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u - 1u);
    set32(c.r[25], ld32((c.r[25].w[0] + 68u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003A0F38u); set32(c.r[8], 0u + 2u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003A0F38u) [[unlikely]] return; }
L_003A0F38:
    set32(c.r[25], ld32((c.r[16].w[0] + 176u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u - 1u);
    set32(c.r[25], ld32((c.r[25].w[0] + 68u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003A0F58u); c.r[8].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003A0F58u) [[unlikely]] return; }
L_003A0F58:
    set32(c.r[4], c.r[18].w[0] + 448u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A0F64u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A7(c, 276u, depth + 1u); else { c.pc = 0x0039FC70u; return; } if (c.pc != 0x003A0F64u) [[unlikely]] return; }
L_003A0F64:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003A0F80:
    set32(c.r[4], c.r[4].w[0] + 16u);
    set32(c.r[5], 0u + 17u);
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0];  c.pc = t; if (t - 0x003A0000u < 16384u) { entry = entries_00A8[(t - 0x003A0000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_003A0FA0:
    set32(c.r[4], c.r[4].w[0] + 16u);
    set32(c.r[5], 0u + 18u);
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0];  c.pc = t; if (t - 0x003A0000u < 16384u) { entry = entries_00A8[(t - 0x003A0000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_003A0FC0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A0FD8u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0087(c, 136u, depth + 1u); else { c.pc = 0x0031D080u; return; } if (c.pc != 0x003A0FD8u) [[unlikely]] return; }
L_003A0FD8:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A0FE4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0087(c, 214u, depth + 1u); else { c.pc = 0x0031DA70u; return; } if (c.pc != 0x003A0FE4u) [[unlikely]] return; }
L_003A0FE4:
    set32(c.r[3], ld32((c.r[17].w[0] + 4496u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003A1058; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A0FF8u);  if (depth < kMaxDepth) unit_0087(c, 214u, depth + 1u); else { c.pc = 0x0031DA70u; return; } if (c.pc != 0x003A0FF8u) [[unlikely]] return; }
L_003A0FF8:
    st32((c.r[17].w[0] + 4496u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 4496u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 4504u)));
    c.r[2].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003A104C; } }
    set32(c.r[2], c.r[3].w[0] - 1u);
    st32((c.r[17].w[0] + 4504u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 4504u)));
    set32(c.r[2], c.r[3].w[0] << 3);
    set32(c.r[3], c.r[2].w[0] - c.r[3].w[0]);
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0] + 1568u)));
    c.budget -= 12;
    { const bool t = c.r[5].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003A104C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A1048u);  if (depth < kMaxDepth) unit_0087(c, 293u, depth + 1u); else { c.pc = 0x0031E910u; return; } if (c.pc != 0x003A1048u) [[unlikely]] return; }
L_003A1048:
    st32((c.r[17].w[0] + 4504u), c.r[2].w[0]);
    c.budget -= 1;
L_003A104C:
    set32(c.r[5], ld32((c.r[17].w[0] + 4504u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A1058u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 107u, depth + 1u); else { c.pc = 0x003A1090u; return; } if (c.pc != 0x003A1058u) [[unlikely]] return; }
L_003A1058:
    st32((c.r[17].w[0] + 4492u), 0u);
    set32(c.r[4], c.r[17].w[0] + 4432u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A1068u); st8((c.r[17].w[0] + 4488u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_002A(c, 280u, depth + 1u); else { c.pc = 0x001AB050u; return; } if (c.pc != 0x003A1068u) [[unlikely]] return; }
L_003A1068:
    set32(c.r[5], ld32((c.r[17].w[0] + 4500u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A1074u); set32(c.r[4], c.r[17].w[0] + 448u);  if (depth < kMaxDepth) unit_00A7(c, 284u, depth + 1u); else { c.pc = 0x0039FD20u; return; } if (c.pc != 0x003A1074u) [[unlikely]] return; }
L_003A1074:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003A1090:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[4].w[0] + 4504u), c.r[5].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A10A8u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0087(c, 136u, depth + 1u); else { c.pc = 0x0031D080u; return; } if (c.pc != 0x003A10A8u) [[unlikely]] return; }
L_003A10A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A10B0u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0087(c, 214u, depth + 1u); else { c.pc = 0x0031DA70u; return; } if (c.pc != 0x003A10B0u) [[unlikely]] return; }
L_003A10B0:
    st32((c.r[16].w[0] + 4496u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 4496u)));
    c.r[1].d[0] = c.r[3].sd[0] < 11ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003A10CC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 4500u), 0u);  if (t) { goto L_003A1100; } }
L_003A10CC:
    set32(c.r[4], ld32((c.r[16].w[0] + 4504u)));
    c.r[1].d[0] = c.r[4].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[2], c.r[3].w[0] - c.r[4].w[0]);  if (t) { goto L_003A10E4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 4500u), 0u);  if (t) { goto L_003A1100; } }
L_003A10E4:
    c.r[1].d[0] = c.r[2].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003A10FC; } }
    set32(c.r[2], c.r[3].w[0] - 10u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 4500u), c.r[2].w[0]);  if (t) { goto L_003A1100; } }
L_003A10FC:
    st32((c.r[16].w[0] + 4500u), c.r[4].w[0]);
    c.budget -= 1;
L_003A1100:
    st32((c.r[16].w[0] + 4492u), 0u);
    set32(c.r[4], c.r[16].w[0] + 4432u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A1110u); st8((c.r[16].w[0] + 4488u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_002A(c, 280u, depth + 1u); else { c.pc = 0x001AB050u; return; } if (c.pc != 0x003A1110u) [[unlikely]] return; }
L_003A1110:
    set32(c.r[5], ld32((c.r[16].w[0] + 4500u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A111Cu); set32(c.r[4], c.r[16].w[0] + 448u);  if (depth < kMaxDepth) unit_00A7(c, 284u, depth + 1u); else { c.pc = 0x0039FD20u; return; } if (c.pc != 0x003A111Cu) [[unlikely]] return; }
L_003A111C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003A1130:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[22].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A1164u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0087(c, 136u, depth + 1u); else { c.pc = 0x0031D080u; return; } if (c.pc != 0x003A1164u) [[unlikely]] return; }
L_003A1164:
    set32(c.r[19], ld32((c.r[2].w[0] + 384u)));
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], c.r[19].w[0] << 2);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_003A1184; } }
    c.r[4].d[0] = ld8((c.r[2].w[0] + 6u));
    c.budget -= 1;
L_003A1184:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A118Cu);  if (depth < kMaxDepth) unit_009F(c, 83u, depth + 1u); else { c.pc = 0x0037CEF0u; return; } if (c.pc != 0x003A118Cu) [[unlikely]] return; }
L_003A118C:
    set32(c.r[23], ld32((c.r[2].w[0] + 8u)));
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_003A12BC; } }
L_003A119C:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull; c.r[16].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_003A1294; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[2], c.r[21].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + 3920u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x003A0000u < 16384u) { entry = entries_00A8[(t - 0x003A0000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_003A11C0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_003A1294; } }
L_003A11C8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[17].w[0] << 3);  if (t) { goto L_003A1298; } }
L_003A11D0:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A11DCu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0087(c, 310u, depth + 1u); else { c.pc = 0x0031EDF0u; return; } if (c.pc != 0x003A11DCu) [[unlikely]] return; }
L_003A11DC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] & 255ull;  if (t) { goto L_003A1294; } }
L_003A11E4:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A11F0u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0087(c, 309u, depth + 1u); else { c.pc = 0x0031ECE0u; return; } if (c.pc != 0x003A11F0u) [[unlikely]] return; }
L_003A11F0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] & 255ull;  if (t) { goto L_003A1294; } }
L_003A11F8:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A1204u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0087(c, 308u, depth + 1u); else { c.pc = 0x0031EBE0u; return; } if (c.pc != 0x003A1204u) [[unlikely]] return; }
L_003A1204:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] & 255ull;  if (t) { goto L_003A1294; } }
L_003A120C:
    set32(c.r[4], ld32((c.r[20].w[0] + 272u)));
    set32(c.r[3], 0u + 7u);
    set32(c.r[2], 0u + 8u);
    c.r[1].d[0] = c.r[19].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    if (c.r[4].d[0] != 0) c.r[3].d[0] = c.r[2].d[0];
    c.r[2].d[0] = c.r[17].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 9;
    { const bool t = c.r[1].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] & 255ull;  if (t) { goto L_003A1294; } }
    set32(c.r[2], c.r[17].w[0] << 2);
    set32(c.r[2], c.r[20].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_003A1248; } }
    c.r[4].d[0] = ld8((c.r[2].w[0] + 6u));
    c.budget -= 1;
L_003A1248:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A1250u);  if (depth < kMaxDepth) unit_009F(c, 83u, depth + 1u); else { c.pc = 0x0037CEF0u; return; } if (c.pc != 0x003A1250u) [[unlikely]] return; }
L_003A1250:
    set32(c.r[3], ld32((c.r[2].w[0] + 8u)));
    set32(c.r[2], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[1].d[0] = c.r[23].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;  if (t) { goto L_003A1268; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003A1274; } }
L_003A1268:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003A1274; } }
    c.r[18].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_003A1274:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_003A1294; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_003A1294; } }
L_003A1284:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A1290u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0087(c, 311u, depth + 1u); else { c.pc = 0x0031EE20u; return; } if (c.pc != 0x003A1290u) [[unlikely]] return; }
L_003A1290:
    c.r[16].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 1;
L_003A1294:
    set32(c.r[2], c.r[17].w[0] << 3);
    c.budget -= 1;
L_003A1298:
    set32(c.r[3], c.r[2].w[0] - c.r[17].w[0]);
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[22].w[0] + c.r[2].w[0]);
    st8((c.r[2].w[0] + 1564u), static_cast<std::uint8_t>(c.r[16].w[0]));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A12B8u); set32(c.r[4], c.r[2].w[0] + 1488u);  if (depth < kMaxDepth) unit_00A7(c, 294u, depth + 1u); else { c.pc = 0x0039FE30u; return; } if (c.pc != 0x003A12B8u) [[unlikely]] return; }
L_003A12B8:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_003A12BC:
    c.r[3].d[0] = c.r[17].d[0] < static_cast<std::uint64_t>(35ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[1].d[0] = c.r[21].d[0] < static_cast<std::uint64_t>(7ll) ? 1ull : 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A119Cu | kUnwind; return; } goto L_003A119C; } }
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_003A1300:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A131Cu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 112u, depth + 1u); else { c.pc = 0x003A1130u; return; } if (c.pc != 0x003A131Cu) [[unlikely]] return; }
L_003A131C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A1324u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 99u, depth + 1u); else { c.pc = 0x003A0FC0u; return; } if (c.pc != 0x003A1324u) [[unlikely]] return; }
L_003A1324:
    set32(c.r[3], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[3].d[0];  if (t) { goto L_003A1338; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 4508u), c.r[3].w[0]);  if (t) { goto L_003A1340; } }
L_003A1338:
    set32(c.r[3], 0u + 1u);
    st32((c.r[17].w[0] + 4508u), c.r[3].w[0]);
    c.budget -= 2;
L_003A1340:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003A1360:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[4].w[0] + 4504u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A137Cu); c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0087(c, 136u, depth + 1u); else { c.pc = 0x0031D080u; return; } if (c.pc != 0x003A137Cu) [[unlikely]] return; }
L_003A137C:
    st32((c.r[2].w[0] + 384u), c.r[16].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A138Cu); set32(c.r[5], 0u + 5u);  if (depth < kMaxDepth) unit_00A8(c, 112u, depth + 1u); else { c.pc = 0x003A1130u; return; } if (c.pc != 0x003A138Cu) [[unlikely]] return; }
L_003A138C:
    set32(c.r[3], 0u + 5u);
    st32((c.r[17].w[0] + 4508u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003A13B0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x440D0000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[5].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A13D0u); st32((c.r[4].w[0] + 4512u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 112u, depth + 1u); else { c.pc = 0x003A1130u; return; } if (c.pc != 0x003A13D0u) [[unlikely]] return; }
L_003A13D0:
    set32(c.r[3], 0u + 6u);
    st32((c.r[16].w[0] + 4508u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003A13F0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[17], ld32((c.r[1].w[0] - 1536u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A1414u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 314u, depth + 1u); else { c.pc = 0x0013F0C0u; return; } if (c.pc != 0x003A1414u) [[unlikely]] return; }
L_003A1414:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003A1468; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 4504u)));
    set32(c.r[2], c.r[3].w[0] << 3);
    set32(c.r[3], c.r[2].w[0] - c.r[3].w[0]);
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = ld8((c.r[2].w[0] + 1564u));
    c.budget -= 10;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u + 403u);  if (t) { goto L_003A1458; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A144Cu); set32(c.r[4], 0u + 400u);  if (depth < kMaxDepth) unit_002C(c, 36u, depth + 1u); else { c.pc = 0x001B0690u; return; } if (c.pc != 0x003A144Cu) [[unlikely]] return; }
L_003A144C:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 4508u), c.r[3].w[0]);  if (t) { goto L_003A161C; } }
L_003A1458:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A1460u);  if (depth < kMaxDepth) unit_002C(c, 36u, depth + 1u); else { c.pc = 0x001B0690u; return; } if (c.pc != 0x003A1460u) [[unlikely]] return; }
L_003A1460:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_003A1620; } }
L_003A1468:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A1470u);  if (depth < kMaxDepth) unit_000F(c, 315u, depth + 1u); else { c.pc = 0x0013F0D0u; return; } if (c.pc != 0x003A1470u) [[unlikely]] return; }
L_003A1470:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u + 401u);  if (t) { goto L_003A148C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A1480u);  if (depth < kMaxDepth) unit_002C(c, 36u, depth + 1u); else { c.pc = 0x001B0690u; return; } if (c.pc != 0x003A1480u) [[unlikely]] return; }
L_003A1480:
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 4508u), c.r[3].w[0]);  if (t) { goto L_003A161C; } }
L_003A148C:
    set32(c.r[3], ld32((c.r[16].w[0] + 4504u)));
    c.r[6].d[0] = ld16((c.r[17].w[0] + 168u));
    set32(c.r[4], c.r[3].w[0] << 3);
    set32(c.r[7], c.r[4].w[0] - c.r[3].w[0]);
    c.r[5].d[0] = c.r[6].d[0] & 4096ull;
    set32(c.r[4], c.r[7].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] - c.r[7].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[4], c.r[16].w[0] + c.r[4].w[0]);
    c.budget -= 11;
    { const bool t = c.r[5].d[0] == 0ull; set32(c.r[4], ld32((c.r[4].w[0] + 1568u)));  if (t) { goto L_003A1514; } }
L_003A14B8:
    set32(c.r[5], ld32((c.r[16].w[0] + 4504u)));
    set32(c.r[5], c.r[5].w[0] - 1u);
    st32((c.r[16].w[0] + 4504u), c.r[5].w[0]);
    set32(c.r[6], ld32((c.r[16].w[0] + 4504u)));
    c.budget -= 6;
    { const bool t = c.r[6].sd[0] >= 0; c.r[5].d[0] = 0ull < c.r[4].d[0] ? 1ull : 0ull;  if (t) { goto L_003A14D8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 4504u), c.r[3].w[0]);  if (t) { goto L_003A157C; } }
L_003A14D8:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_003A1504; } }
    set32(c.r[5], c.r[6].w[0] << 3);
    set32(c.r[6], c.r[5].w[0] - c.r[6].w[0]);
    set32(c.r[5], c.r[6].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] - c.r[6].w[0]);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[5], c.r[16].w[0] + c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[5].w[0] + 1568u)));
    c.r[5].d[0] = c.r[4].d[0] ^ c.r[5].d[0];
    c.r[5].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 9;
L_003A1504:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A14B8u | kUnwind; return; } goto L_003A14B8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[16].w[0] + 4504u)));  if (t) { goto L_003A1580; } }
L_003A1514:
    c.r[5].d[0] = c.r[6].d[0] & 16384ull;
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_003A157C; } }
L_003A1520:
    set32(c.r[5], ld32((c.r[16].w[0] + 4504u)));
    set32(c.r[5], c.r[5].w[0] + 1u);
    st32((c.r[16].w[0] + 4504u), c.r[5].w[0]);
    set32(c.r[6], ld32((c.r[16].w[0] + 4504u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 4496u)));
    c.r[5].d[0] = c.r[6].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[5].d[0] != 0ull; c.r[5].d[0] = 0ull < c.r[4].d[0] ? 1ull : 0ull;  if (t) { goto L_003A1548; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 4504u), c.r[3].w[0]);  if (t) { goto L_003A157C; } }
L_003A1548:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_003A1574; } }
    set32(c.r[5], c.r[6].w[0] << 3);
    set32(c.r[6], c.r[5].w[0] - c.r[6].w[0]);
    set32(c.r[5], c.r[6].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] - c.r[6].w[0]);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[5], c.r[16].w[0] + c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[5].w[0] + 1568u)));
    c.r[5].d[0] = c.r[4].d[0] ^ c.r[5].d[0];
    c.r[5].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 9;
L_003A1574:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A1520u | kUnwind; return; } goto L_003A1520; } }
L_003A157C:
    set32(c.r[4], ld32((c.r[16].w[0] + 4504u)));
    c.budget -= 1;
L_003A1580:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[4], 0u + 402u);  if (t) { goto L_003A161C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A1590u);  if (depth < kMaxDepth) unit_002C(c, 36u, depth + 1u); else { c.pc = 0x001B0690u; return; } if (c.pc != 0x003A1590u) [[unlikely]] return; }
L_003A1590:
    st32((c.r[16].w[0] + 4492u), 0u);
    set32(c.r[4], c.r[16].w[0] + 4432u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A15A0u); st8((c.r[16].w[0] + 4488u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_002A(c, 280u, depth + 1u); else { c.pc = 0x001AB050u; return; } if (c.pc != 0x003A15A0u) [[unlikely]] return; }
L_003A15A0:
    set32(c.r[3], ld32((c.r[16].w[0] + 4504u)));
    set32(c.r[2], c.r[3].w[0] << 3);
    set32(c.r[3], c.r[2].w[0] - c.r[3].w[0]);
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[17], ld32((c.r[2].w[0] + 1568u)));
    c.budget -= 10;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_003A15E0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A15D0u);  if (depth < kMaxDepth) unit_0087(c, 136u, depth + 1u); else { c.pc = 0x0031D080u; return; } if (c.pc != 0x003A15D0u) [[unlikely]] return; }
L_003A15D0:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A15DCu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0087(c, 293u, depth + 1u); else { c.pc = 0x0031E910u; return; } if (c.pc != 0x003A15DCu) [[unlikely]] return; }
L_003A15DC:
    st32((c.r[16].w[0] + 4504u), c.r[2].w[0]);
    c.budget -= 1;
L_003A15E0:
    set32(c.r[3], ld32((c.r[16].w[0] + 4504u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 4500u)));
    set32(c.r[2], c.r[3].w[0] - c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_003A15FC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 4500u), c.r[3].w[0]);  if (t) { goto L_003A1610; } }
L_003A15FC:
    c.r[2].d[0] = c.r[2].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003A1610; } }
    set32(c.r[2], c.r[3].w[0] - 9u);
    st32((c.r[16].w[0] + 4500u), c.r[2].w[0]);
    c.budget -= 2;
L_003A1610:
    set32(c.r[5], ld32((c.r[16].w[0] + 4500u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A161Cu); set32(c.r[4], c.r[16].w[0] + 448u);  if (depth < kMaxDepth) unit_00A7(c, 284u, depth + 1u); else { c.pc = 0x0039FD20u; return; } if (c.pc != 0x003A161Cu) [[unlikely]] return; }
L_003A161C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_003A1620:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003A1630:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A1644u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 137u, depth + 1u); else { c.pc = 0x003A13F0u; return; } if (c.pc != 0x003A1644u) [[unlikely]] return; }
L_003A1644:
    set32(c.r[4], ld32((c.r[16].w[0] + 4508u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003A165C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A165Cu);  if (depth < kMaxDepth) unit_00A8(c, 132u, depth + 1u); else { c.pc = 0x003A1360u; return; } if (c.pc != 0x003A165Cu) [[unlikely]] return; }
L_003A165C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003A1670:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[1].w[0] - 1536u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A1698u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 314u, depth + 1u); else { c.pc = 0x0013F0C0u; return; } if (c.pc != 0x003A1698u) [[unlikely]] return; }
L_003A1698:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003A16B4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A16A8u); set32(c.r[4], 0u + 400u);  if (depth < kMaxDepth) unit_002C(c, 36u, depth + 1u); else { c.pc = 0x001B0690u; return; } if (c.pc != 0x003A16A8u) [[unlikely]] return; }
L_003A16A8:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 4508u), c.r[3].w[0]);  if (t) { goto L_003A18D0; } }
L_003A16B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A16BCu);  if (depth < kMaxDepth) unit_000F(c, 315u, depth + 1u); else { c.pc = 0x0013F0D0u; return; } if (c.pc != 0x003A16BCu) [[unlikely]] return; }
L_003A16BC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u + 401u);  if (t) { goto L_003A16D8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A16CCu);  if (depth < kMaxDepth) unit_002C(c, 36u, depth + 1u); else { c.pc = 0x001B0690u; return; } if (c.pc != 0x003A16CCu) [[unlikely]] return; }
L_003A16CC:
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 4508u), c.r[3].w[0]);  if (t) { goto L_003A18D0; } }
L_003A16D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A16E0u);  if (depth < kMaxDepth) unit_0087(c, 136u, depth + 1u); else { c.pc = 0x0031D080u; return; } if (c.pc != 0x003A16E0u) [[unlikely]] return; }
L_003A16E0:
    c.r[4].d[0] = ld16((c.r[16].w[0] + 168u));
    set32(c.r[16], ld32((c.r[18].w[0] + 4504u)));
    c.r[3].d[0] = c.r[4].d[0] & 4096ull;
    set32(c.r[5], c.r[16].w[0] << 3);
    set32(c.r[6], c.r[5].w[0] - c.r[16].w[0]);
    set32(c.r[5], c.r[6].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] - c.r[6].w[0]);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[5], c.r[18].w[0] + c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[5].w[0] + 1568u)));
    c.budget -= 12;
    { const bool t = c.r[3].d[0] == 0ull; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_003A17A0; } }
L_003A1710:
    set32(c.r[3], ld32((c.r[18].w[0] + 4504u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st32((c.r[18].w[0] + 4504u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[18].w[0] + 4504u)));
    c.budget -= 6;
    { const bool t = c.r[4].sd[0] >= 0; set32(c.r[3], c.r[4].w[0] << 3);  if (t) { goto L_003A1730; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 4504u), c.r[16].w[0]);  if (t) { goto L_003A1858; } }
L_003A1730:
    set32(c.r[4], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[18].w[0] + c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[3].w[0] + 1568u)));
    c.budget -= 8;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_003A175C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A1758u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0087(c, 293u, depth + 1u); else { c.pc = 0x0031E910u; return; } if (c.pc != 0x003A1758u) [[unlikely]] return; }
L_003A1758:
    st32((c.r[18].w[0] + 4504u), c.r[2].w[0]);
    c.budget -= 1;
L_003A175C:
    set32(c.r[4], ld32((c.r[18].w[0] + 4504u)));
    c.budget -= 3;
    { const bool t = c.r[4].sd[0] >= 0; set32(c.r[3], c.r[4].w[0] << 3);  if (t) { goto L_003A1770; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 4504u), c.r[16].w[0]);  if (t) { goto L_003A1858; } }
L_003A1770:
    set32(c.r[4], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[18].w[0] + c.r[3].w[0]);
    c.r[3].d[0] = ld8((c.r[3].w[0] + 1564u));
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 10;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A1710u | kUnwind; return; } goto L_003A1710; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[18].w[0] + 4504u)));  if (t) { goto L_003A185C; } }
L_003A17A0:
    c.r[3].d[0] = c.r[4].d[0] & 16384ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003A1858; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003A17C0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A17BCu);  if (depth < kMaxDepth) unit_0087(c, 295u, depth + 1u); else { c.pc = 0x0031E980u; return; } if (c.pc != 0x003A17BCu) [[unlikely]] return; }
L_003A17BC:
    st32((c.r[18].w[0] + 4504u), c.r[2].w[0]);
    c.budget -= 1;
L_003A17C0:
    set32(c.r[3], ld32((c.r[18].w[0] + 4504u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[18].w[0] + 4504u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[18].w[0] + 4504u)));
    set32(c.r[3], ld32((c.r[18].w[0] + 4496u)));
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], c.r[4].w[0] << 3);  if (t) { goto L_003A17E8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 4504u), c.r[16].w[0]);  if (t) { goto L_003A1858; } }
L_003A17E8:
    set32(c.r[4], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[18].w[0] + c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[3].w[0] + 1568u)));
    c.budget -= 8;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_003A1814; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A1810u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0087(c, 295u, depth + 1u); else { c.pc = 0x0031E980u; return; } if (c.pc != 0x003A1810u) [[unlikely]] return; }
L_003A1810:
    st32((c.r[18].w[0] + 4504u), c.r[2].w[0]);
    c.budget -= 1;
L_003A1814:
    set32(c.r[4], ld32((c.r[18].w[0] + 4504u)));
    set32(c.r[3], ld32((c.r[18].w[0] + 4496u)));
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], c.r[4].w[0] << 3);  if (t) { goto L_003A1830; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 4504u), c.r[16].w[0]);  if (t) { goto L_003A1858; } }
L_003A1830:
    set32(c.r[4], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[18].w[0] + c.r[3].w[0]);
    c.r[3].d[0] = ld8((c.r[3].w[0] + 1564u));
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 10;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A17C0u | kUnwind; return; } goto L_003A17C0; } }
L_003A1858:
    set32(c.r[3], ld32((c.r[18].w[0] + 4504u)));
    c.budget -= 1;
L_003A185C:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[16].d[0]; set32(c.r[4], 0u + 402u);  if (t) { goto L_003A18D0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A186Cu);  if (depth < kMaxDepth) unit_002C(c, 36u, depth + 1u); else { c.pc = 0x001B0690u; return; } if (c.pc != 0x003A186Cu) [[unlikely]] return; }
L_003A186C:
    st32((c.r[18].w[0] + 4492u), 0u);
    set32(c.r[4], c.r[18].w[0] + 4432u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A187Cu); st8((c.r[18].w[0] + 4488u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_002A(c, 280u, depth + 1u); else { c.pc = 0x001AB050u; return; } if (c.pc != 0x003A187Cu) [[unlikely]] return; }
L_003A187C:
    set32(c.r[5], ld32((c.r[18].w[0] + 4504u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A1888u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0087(c, 202u, depth + 1u); else { c.pc = 0x0031D7D0u; return; } if (c.pc != 0x003A1888u) [[unlikely]] return; }
L_003A1888:
    st32((c.r[18].w[0] + 4504u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 4504u)));
    set32(c.r[2], ld32((c.r[18].w[0] + 4500u)));
    set32(c.r[2], c.r[3].w[0] - c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_003A18A8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 4500u), c.r[3].w[0]);  if (t) { goto L_003A18BC; } }
L_003A18A8:
    c.r[2].d[0] = c.r[2].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003A18BC; } }
    set32(c.r[2], c.r[3].w[0] - 9u);
    st32((c.r[18].w[0] + 4500u), c.r[2].w[0]);
    c.budget -= 2;
L_003A18BC:
    set32(c.r[5], ld32((c.r[18].w[0] + 4500u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A18C8u); set32(c.r[4], c.r[18].w[0] + 448u);  if (depth < kMaxDepth) unit_00A7(c, 284u, depth + 1u); else { c.pc = 0x0039FD20u; return; } if (c.pc != 0x003A18C8u) [[unlikely]] return; }
L_003A18C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A18D0u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 132u, depth + 1u); else { c.pc = 0x003A1360u; return; } if (c.pc != 0x003A18D0u) [[unlikely]] return; }
L_003A18D0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003A18F0:
    set32(c.r[29], c.r[29].w[0] - 176u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] + 6320u);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    set32(c.r[3], c.r[29].w[0] + 160u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    c.r[23].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[22].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    st128((c.r[3].w[0]) & ~15u, c.r[2]);
    set32(c.r[3], ld32((c.r[4].w[0] + 4504u)));
    set32(c.r[2], c.r[3].w[0] << 3);
    set32(c.r[3], c.r[2].w[0] - c.r[3].w[0]);
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[20], ld32((c.r[2].w[0] + 1568u)));
    c.budget -= 27;
L_003A195C:
    set32(c.r[4], ld32((c.r[21].w[0] + 4500u)));
    set32(c.r[2], ld32((c.r[21].w[0] + 4504u)));
    set32(c.r[18], c.r[4].w[0] + c.r[19].w[0]);
    c.r[17].d[0] = c.r[18].d[0] ^ c.r[2].d[0];
    c.budget -= 6;
    { const bool t = c.r[20].d[0] == 0ull; c.r[17].d[0] = c.r[17].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  if (t) { goto L_003A199C; } }
    set32(c.r[2], c.r[18].w[0] << 3);
    set32(c.r[3], c.r[2].w[0] - c.r[18].w[0]);
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[21].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 1568u)));
    c.budget -= 9;
    { const bool t = c.r[20].d[0] != c.r[2].d[0]; c.r[16].d[0] = c.r[17].d[0] & 255ull;  if (t) { goto L_003A19A0; } }
    c.r[17].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_003A199C:
    c.r[16].d[0] = c.r[17].d[0] & 255ull;
    c.budget -= 1;
L_003A19A0:
    c.budget -= 2;
    { const bool t = c.r[22].d[0] != 0ull;  if (t) { goto L_003A19AC; } }
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003A19AC:
    c.budget -= 2;
    { const bool t = c.r[23].d[0] != 0ull;  if (t) { goto L_003A19B8; } }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003A19B8:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] != 0ull; set32(c.r[2], c.r[18].w[0] << 3);  if (t) { goto L_003A1A60; } }
    set32(c.r[2], c.r[4].w[0] << 3);
    set32(c.r[3], c.r[2].w[0] - c.r[4].w[0]);
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[21].w[0] + c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0] + 1568u)));
    c.budget -= 9;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_003A1A5C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A19ECu); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 179u, depth + 1u); else { c.pc = 0x003A1CF0u; return; } if (c.pc != 0x003A19ECu) [[unlikely]] return; }
L_003A19EC:
    set32(c.r[3], ld32((c.r[21].w[0] + 4500u)));
    c.r[1].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[3], c.r[29].w[0] + 160u);  if (t) { goto L_003A1A5C; } }
    set32(c.r[5], c.r[29].w[0] + 144u);
    ld128((c.r[3].w[0]) & ~15u, c.r[8]);
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42000000u);
    st128((c.r[5].w[0]) & ~15u, c.r[8]);
    c.f[1] = c.r[3].w[0];
    c.f[0] = ld32((c.r[29].w[0] + 148u));
    set32(c.r[3], c.r[2].w[0] << 3);
    set32(c.r[4], c.r[3].w[0] - c.r[2].w[0]);
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[21].w[0] + c.r[3].w[0]);
    set32(c.r[4], c.r[3].w[0] + 1488u);
    set32(c.r[3], ld32((c.r[21].w[0] + 4500u)));
    set32(c.r[2], c.r[3].w[0] - c.r[2].w[0]);
    c.f[2] = c.r[2].w[0];
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.f[1] = fp::mul(c.f[1], c.f[2]);
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    c.budget -= 24;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A1A5Cu); st32((c.r[29].w[0] + 148u), c.f[0]);  if (depth < kMaxDepth) unit_00A8(c, 38u, depth + 1u); else { c.pc = 0x003A0790u; return; } if (c.pc != 0x003A1A5Cu) [[unlikely]] return; }
L_003A1A5C:
    set32(c.r[2], c.r[18].w[0] << 3);
    c.budget -= 1;
L_003A1A60:
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[3], c.r[2].w[0] - c.r[18].w[0]);
    c.r[8].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[5], c.r[29].w[0] + 160u);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    set32(c.r[7], c.r[21].w[0] + 4464u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[21].w[0] + c.r[2].w[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A1A8Cu); set32(c.r[4], c.r[2].w[0] + 1488u);  if (depth < kMaxDepth) unit_00A7(c, 303u, depth + 1u); else { c.pc = 0x0039FF70u; return; } if (c.pc != 0x003A1A8Cu) [[unlikely]] return; }
L_003A1A8C:
    c.f[1] = ld32((c.r[29].w[0] + 164u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x42000000u);
    c.f[0] = c.r[4].w[0];
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.r[3].d[0] = c.r[19].sd[0] < 10ll ? 1ull : 0ull;
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[29].w[0] + 164u), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A195Cu | kUnwind; return; } goto L_003A195C; } }
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 176u);  c.pc = t; return; }
L_003A1AE0:
    set32(c.r[29], c.r[29].w[0] - 144u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] + 6336u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    set32(c.r[3], c.r[29].w[0] + 128u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    st128((c.r[3].w[0]) & ~15u, c.r[2]);
    set32(c.r[3], ld32((c.r[4].w[0] + 4504u)));
    set32(c.r[2], c.r[3].w[0] << 3);
    set32(c.r[3], c.r[2].w[0] - c.r[3].w[0]);
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[19], ld32((c.r[2].w[0] + 1568u)));
    c.budget -= 23;
L_003A1B3C:
    set32(c.r[3], ld32((c.r[20].w[0] + 4500u)));
    set32(c.r[2], ld32((c.r[20].w[0] + 4504u)));
    set32(c.r[17], c.r[3].w[0] + c.r[18].w[0]);
    c.r[16].d[0] = c.r[17].d[0] ^ c.r[2].d[0];
    c.budget -= 6;
    { const bool t = c.r[19].d[0] == 0ull; c.r[16].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  if (t) { goto L_003A1B7C; } }
    set32(c.r[2], c.r[17].w[0] << 3);
    set32(c.r[3], c.r[2].w[0] - c.r[17].w[0]);
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[20].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 1568u)));
    c.budget -= 9;
    { const bool t = c.r[19].d[0] != c.r[2].d[0];  if (t) { goto L_003A1B7C; } }
    c.r[16].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_003A1B7C:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x42000000u);  if (t) { goto L_003A1BA0; } }
    c.f[0] = ld32((c.r[20].w[0] + 4512u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42000000u);
    c.f[20] = c.r[2].w[0];
    c.f[0] = fp::add(c.f[20], c.f[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 128u), c.f[0]);  if (t) { goto L_003A1BA8; } }
L_003A1BA0:
    c.f[20] = c.r[2].w[0];
    st32((c.r[29].w[0] + 128u), c.r[2].w[0]);
    c.budget -= 2;
L_003A1BA8:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != 0ull; set32(c.r[2], c.r[17].w[0] << 3);  if (t) { goto L_003A1C4C; } }
    set32(c.r[3], ld32((c.r[20].w[0] + 4500u)));
    set32(c.r[2], c.r[3].w[0] << 3);
    set32(c.r[3], c.r[2].w[0] - c.r[3].w[0]);
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[20].w[0] + c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0] + 1568u)));
    c.budget -= 10;
    { const bool t = c.r[5].d[0] == 0ull; c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_003A1C48; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A1BE0u);  if (depth < kMaxDepth) unit_00A8(c, 179u, depth + 1u); else { c.pc = 0x003A1CF0u; return; } if (c.pc != 0x003A1BE0u) [[unlikely]] return; }
L_003A1BE0:
    set32(c.r[3], ld32((c.r[20].w[0] + 4500u)));
    c.r[1].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[3], c.r[29].w[0] + 128u);  if (t) { goto L_003A1C48; } }
    set32(c.r[5], c.r[29].w[0] + 112u);
    ld128((c.r[3].w[0]) & ~15u, c.r[8]);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[2].w[0] << 3);
    st128((c.r[5].w[0]) & ~15u, c.r[8]);
    set32(c.r[4], c.r[3].w[0] - c.r[2].w[0]);
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[20].w[0] + c.r[3].w[0]);
    set32(c.r[4], c.r[3].w[0] + 1488u);
    set32(c.r[3], ld32((c.r[20].w[0] + 4500u)));
    c.f[0] = ld32((c.r[29].w[0] + 116u));
    set32(c.r[2], c.r[3].w[0] - c.r[2].w[0]);
    c.f[1] = c.r[2].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[1] = fp::mul(c.f[20], c.f[1]);
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A1C48u); st32((c.r[29].w[0] + 116u), c.f[0]);  if (depth < kMaxDepth) unit_00A8(c, 38u, depth + 1u); else { c.pc = 0x003A0790u; return; } if (c.pc != 0x003A1C48u) [[unlikely]] return; }
L_003A1C48:
    set32(c.r[2], c.r[17].w[0] << 3);
    c.budget -= 1;
L_003A1C4C:
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], c.r[2].w[0] - c.r[17].w[0]);
    set32(c.r[5], c.r[29].w[0] + 128u);
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[7], c.r[20].w[0] + 4464u);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[20].w[0] + c.r[2].w[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A1C78u); set32(c.r[4], c.r[2].w[0] + 1488u);  if (depth < kMaxDepth) unit_00A7(c, 303u, depth + 1u); else { c.pc = 0x0039FF70u; return; } if (c.pc != 0x003A1C78u) [[unlikely]] return; }
L_003A1C78:
    c.f[0] = ld32((c.r[29].w[0] + 132u));
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[3].d[0] = c.r[18].sd[0] < 10ll ? 1ull : 0ull;
    c.f[0] = fp::add(c.f[0], c.f[20]);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[29].w[0] + 132u), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A1B3Cu | kUnwind; return; } goto L_003A1B3C; } }
    c.f[2] = ld32((c.r[20].w[0] + 4512u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41600000u);
    c.f[1] = c.r[3].w[0];
    c.f[0] = 0u;
    c.f[1] = fp::sub(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[20].w[0] + 4512u), c.f[1]);  if (t) { goto L_003A1CC0; } }
    st32((c.r[20].w[0] + 4512u), c.f[0]);
    set32(c.r[3], 0u + 2u);
    st32((c.r[20].w[0] + 4508u), c.r[3].w[0]);
    c.budget -= 3;
L_003A1CC0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_003A1CF0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003A1D24; } }
L_003A1CF8:
    set32(c.r[6], c.r[3].w[0] - c.r[2].w[0]);
    set32(c.r[3], c.r[6].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] - c.r[6].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 1568u)));
    c.budget -= 8;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_003A1D20; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003A1D34; } }
L_003A1D20:
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 1;
L_003A1D24:
    c.r[3].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(35ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], c.r[2].w[0] << 3);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A1CF8u | kUnwind; return; } goto L_003A1CF8; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003A1D34:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003A1D40:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00420000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[5], c.r[5].w[0] + 6352u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[6], 0u + 3u);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[7], 0u + 1u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A1D68u); set32(c.r[8], 0u + 12u);  if (depth < kMaxDepth) unit_009B(c, 237u, depth + 1u); else { c.pc = 0x0036DD90u; return; } if (c.pc != 0x003A1D68u) [[unlikely]] return; }
L_003A1D68:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[3], c.r[3].w[0] - 28000u);
    set32(c.r[2], c.r[2].w[0] - 27912u);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00490000u);
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] - 27852u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 40u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003A1DA0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003A1E00; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[2], c.r[2].w[0] - 28000u);
    set32(c.r[3], c.r[3].w[0] - 27912u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    st32((c.r[17].w[0] + 20u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] - 27852u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A1DE8u); st32((c.r[17].w[0] + 40u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_009B(c, 243u, depth + 1u); else { c.pc = 0x0036DF80u; return; } if (c.pc != 0x003A1DE8u) [[unlikely]] return; }
L_003A1DE8:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003A1E04; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A1E00u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x003A1E00u) [[unlikely]] return; }
L_003A1E00:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003A1E04:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003A1E20:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A1E3Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_009B(c, 267u, depth + 1u); else { c.pc = 0x0036E280u; return; } if (c.pc != 0x003A1E3Cu) [[unlikely]] return; }
L_003A1E3C:
    set32(c.r[25], ld32((c.r[16].w[0])));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[18].d[0] = 0ull + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 48u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003A1E54u); c.r[17].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003A1E54u) [[unlikely]] return; }
L_003A1E54:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_003A1E84; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_003A1E7C; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003A1E88; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003A1E88; } }
L_003A1E7C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = c.r[3].d[0] & 255ull;  if (t) { goto L_003A1E88; } }
L_003A1E84:
    c.r[18].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_003A1E88:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A1E90u);  if (depth < kMaxDepth) unit_0087(c, 136u, depth + 1u); else { c.pc = 0x0031D080u; return; } if (c.pc != 0x003A1E90u) [[unlikely]] return; }
L_003A1E90:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A1EA4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0087(c, 277u, depth + 1u); else { c.pc = 0x0031E4C0u; return; } if (c.pc != 0x003A1EA4u) [[unlikely]] return; }
L_003A1EA4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A1EACu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0087(c, 173u, depth + 1u); else { c.pc = 0x0031D440u; return; } if (c.pc != 0x003A1EACu) [[unlikely]] return; }
L_003A1EAC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003A1ED0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A1EF0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 298u, depth + 1u); else { c.pc = 0x0012E440u; return; } if (c.pc != 0x003A1EF0u) [[unlikely]] return; }
L_003A1EF0:
    set32(c.r[4], c.r[17].w[0] + 20u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A1EFCu); set32(c.r[5], 0u + 11u);  if (depth < kMaxDepth) unit_000F(c, 264u, depth + 1u); else { c.pc = 0x0013E560u; return; } if (c.pc != 0x003A1EFCu) [[unlikely]] return; }
L_003A1EFC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[3], c.r[3].w[0] - 28112u);
    set32(c.r[2], c.r[2].w[0] - 28024u);
    st32((c.r[17].w[0]), c.r[3].w[0]);
    set32(c.r[4], c.r[17].w[0] + 32u);
    st32((c.r[17].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A1F20u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0049(c, 271u, depth + 1u); else { c.pc = 0x002275A0u; return; } if (c.pc != 0x003A1F20u) [[unlikely]] return; }
L_003A1F20:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A1F28u); set32(c.r[4], c.r[17].w[0] + 96u);  if (depth < kMaxDepth) unit_00A8(c, 47u, depth + 1u); else { c.pc = 0x003A0940u; return; } if (c.pc != 0x003A1F28u) [[unlikely]] return; }
L_003A1F28:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[4], c.r[17].w[0] + 4624u);
    set32(c.r[5], c.r[5].w[0] + 6384u);
    set32(c.r[6], 0u + 6u);
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A1F44u); set32(c.r[8], 0u + 12u);  if (depth < kMaxDepth) unit_009B(c, 237u, depth + 1u); else { c.pc = 0x0036DD90u; return; } if (c.pc != 0x003A1F44u) [[unlikely]] return; }
L_003A1F44:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A1F4Cu); set32(c.r[4], c.r[17].w[0] + 4880u);  if (depth < kMaxDepth) unit_00A8(c, 181u, depth + 1u); else { c.pc = 0x003A1D40u; return; } if (c.pc != 0x003A1F4Cu) [[unlikely]] return; }
L_003A1F4C:
    st32((c.r[17].w[0] + 5136u), 0u);
    set32(c.r[2], 0u + 32u);
    st32((c.r[17].w[0] + 5140u), c.r[16].w[0]);
    st32((c.r[17].w[0] + 5144u), 0u);
    st32((c.r[17].w[0] + 5148u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 5140u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A1F6Cu); st8((c.r[2].w[0]), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0087(c, 136u, depth + 1u); else { c.pc = 0x0031D080u; return; } if (c.pc != 0x003A1F6Cu) [[unlikely]] return; }
L_003A1F6C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A1F78u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0087(c, 322u, depth + 1u); else { c.pc = 0x0031F030u; return; } if (c.pc != 0x003A1F78u) [[unlikely]] return; }
L_003A1F78:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A1F80u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0087(c, 173u, depth + 1u); else { c.pc = 0x0031D440u; return; } if (c.pc != 0x003A1F80u) [[unlikely]] return; }
L_003A1F80:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003A1FA0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003A205C; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[3], c.r[3].w[0] - 28112u);
    set32(c.r[2], c.r[2].w[0] - 28024u);
    st32((c.r[17].w[0]), c.r[3].w[0]);
    st32((c.r[17].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 5136u)));
    c.budget -= 9;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003A1FF8; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003A1FF8; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003A1FF8u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003A1FF8u) [[unlikely]] return; }
L_003A1FF8:
    set32(c.r[4], c.r[17].w[0] + 4880u);
    set32(c.r[5], 0u - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A2008u); st32((c.r[17].w[0] + 5136u), 0u);  if (depth < kMaxDepth) unit_00A8(c, 183u, depth + 1u); else { c.pc = 0x003A1DA0u; return; } if (c.pc != 0x003A2008u) [[unlikely]] return; }
L_003A2008:
    set32(c.r[4], c.r[17].w[0] + 4624u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A2014u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_009B(c, 243u, depth + 1u); else { c.pc = 0x0036DF80u; return; } if (c.pc != 0x003A2014u) [[unlikely]] return; }
L_003A2014:
    set32(c.r[4], c.r[17].w[0] + 96u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A2020u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_00A8(c, 59u, depth + 1u); else { c.pc = 0x003A0A90u; return; } if (c.pc != 0x003A2020u) [[unlikely]] return; }
L_003A2020:
    set32(c.r[4], c.r[17].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A202Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0049(c, 274u, depth + 1u); else { c.pc = 0x002275F0u; return; } if (c.pc != 0x003A202Cu) [[unlikely]] return; }
L_003A202C:
    set32(c.r[4], c.r[17].w[0] + 20u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A2038u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000F(c, 266u, depth + 1u); else { c.pc = 0x0013E5B0u; return; } if (c.pc != 0x003A2038u) [[unlikely]] return; }
L_003A2038:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A2044u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 300u, depth + 1u); else { c.pc = 0x0012E490u; return; } if (c.pc != 0x003A2044u) [[unlikely]] return; }
L_003A2044:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003A2060; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A205Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x003A205Cu) [[unlikely]] return; }
L_003A205C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003A2060:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003A2080:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[16].w[0] + 4624u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003A20A0u); set32(c.r[4], c.r[16].w[0] + 4624u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003A20A0u) [[unlikely]] return; }
L_003A20A0:
    set32(c.r[25], ld32((c.r[16].w[0] + 4880u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003A20B0u); set32(c.r[4], c.r[16].w[0] + 4880u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003A20B0u) [[unlikely]] return; }
L_003A20B0:
    set32(c.r[25], ld32((c.r[16].w[0] + 4880u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003A20C0u); set32(c.r[4], c.r[16].w[0] + 4880u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003A20C0u) [[unlikely]] return; }
L_003A20C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A20C8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 317u, depth + 1u); else { c.pc = 0x003A2860u; return; } if (c.pc != 0x003A20C8u) [[unlikely]] return; }
L_003A20C8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003A20E0:
    set32(c.r[3], ld32((c.r[4].w[0] + 5136u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003A20F0; } }
    c.r[2].d[0] = ld8((c.r[3].w[0] + 137u));
    c.budget -= 1;
L_003A20F0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003A2100:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A2114u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_009F(c, 80u, depth + 1u); else { c.pc = 0x0037CE90u; return; } if (c.pc != 0x003A2114u) [[unlikely]] return; }
L_003A2114:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003A212C; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003A212Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003A212Cu) [[unlikely]] return; }
L_003A212C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003A2140:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A2154u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 216u, depth + 1u); else { c.pc = 0x003A20E0u; return; } if (c.pc != 0x003A2154u) [[unlikely]] return; }
L_003A2154:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003A216C; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003A216Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003A216Cu) [[unlikely]] return; }
L_003A216C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003A2180:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[1].w[0] + 25376u)));
    c.budget -= 9;
    { const bool t = c.r[16].d[0] == 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003A22B0; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 44u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003A21B4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003A21B4u) [[unlikely]] return; }
L_003A21B4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003A2340; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A21C4u);  if (depth < kMaxDepth) unit_0087(c, 136u, depth + 1u); else { c.pc = 0x0031D080u; return; } if (c.pc != 0x003A21C4u) [[unlikely]] return; }
L_003A21C4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A21D0u); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_001A(c, 231u, depth + 1u); else { c.pc = 0x0016A360u; return; } if (c.pc != 0x003A21D0u) [[unlikely]] return; }
L_003A21D0:
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A21DCu); c.r[18].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  if (depth < kMaxDepth) unit_001A(c, 271u, depth + 1u); else { c.pc = 0x0016A9E0u; return; } if (c.pc != 0x003A21DCu) [[unlikely]] return; }
L_003A21DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A21E4u);  if (depth < kMaxDepth) unit_009F(c, 127u, depth + 1u); else { c.pc = 0x0037D270u; return; } if (c.pc != 0x003A21E4u) [[unlikely]] return; }
L_003A21E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A21ECu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_009F(c, 157u, depth + 1u); else { c.pc = 0x0037D560u; return; } if (c.pc != 0x003A21ECu) [[unlikely]] return; }
L_003A21EC:
    set32(c.r[3], ld32((c.r[17].w[0] + 5148u)));
    set32(c.r[2], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 8u);  if (t) { goto L_003A2224; } }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_003A2224; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 4600u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A2214u); st32((c.r[16].w[0] + 384u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0087(c, 190u, depth + 1u); else { c.pc = 0x0031D640u; return; } if (c.pc != 0x003A2214u) [[unlikely]] return; }
L_003A2214:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A221Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0087(c, 173u, depth + 1u); else { c.pc = 0x0031D440u; return; } if (c.pc != 0x003A221Cu) [[unlikely]] return; }
L_003A221C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003A22A0; } }
L_003A2224:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_003A225C; } }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull; set32(c.r[2], 0u + 5u);  if (t) { goto L_003A2260; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 4600u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A2244u); st32((c.r[16].w[0] + 384u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0087(c, 190u, depth + 1u); else { c.pc = 0x0031D640u; return; } if (c.pc != 0x003A2244u) [[unlikely]] return; }
L_003A2244:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A224Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0087(c, 316u, depth + 1u); else { c.pc = 0x0031EF20u; return; } if (c.pc != 0x003A224Cu) [[unlikely]] return; }
L_003A224C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A2254u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0087(c, 173u, depth + 1u); else { c.pc = 0x0031D440u; return; } if (c.pc != 0x003A2254u) [[unlikely]] return; }
L_003A2254:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003A229C; } }
L_003A225C:
    set32(c.r[2], 0u + 5u);
    c.budget -= 1;
L_003A2260:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_003A229C; } }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_003A229C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A2278u);  if (depth < kMaxDepth) unit_0087(c, 98u, depth + 1u); else { c.pc = 0x0031CBB0u; return; } if (c.pc != 0x003A2278u) [[unlikely]] return; }
L_003A2278:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A2284u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0087(c, 122u, depth + 1u); else { c.pc = 0x0031CF50u; return; } if (c.pc != 0x003A2284u) [[unlikely]] return; }
L_003A2284:
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 36u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003A2294u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003A2294u) [[unlikely]] return; }
L_003A2294:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_003A2344; } }
L_003A229C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003A22A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A22A8u);  if (depth < kMaxDepth) unit_00A8(c, 317u, depth + 1u); else { c.pc = 0x003A2860u; return; } if (c.pc != 0x003A22A8u) [[unlikely]] return; }
L_003A22A8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003A2340; } }
L_003A22B0:
    set32(c.r[3], ld32((c.r[17].w[0] + 5144u)));
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(7ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[5].sd[0] = static_cast<std::int32_t>(0x00470000u);  if (t) { goto L_003A2340; } }
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + 3952u);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 6;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x003A0000u < 16384u) { entry = entries_00A8[(t - 0x003A0000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_003A22D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A22E0u);  if (depth < kMaxDepth) unit_00A8(c, 253u, depth + 1u); else { c.pc = 0x003A2360u; return; } if (c.pc != 0x003A22E0u) [[unlikely]] return; }
L_003A22E0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003A2340; } }
L_003A22E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A22F0u);  if (depth < kMaxDepth) unit_00A8(c, 275u, depth + 1u); else { c.pc = 0x003A24E0u; return; } if (c.pc != 0x003A22F0u) [[unlikely]] return; }
L_003A22F0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003A2340; } }
L_003A22F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A2300u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2520u; return; } if (c.pc != 0x003A2300u) [[unlikely]] return; }
L_003A2300:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003A2340; } }
L_003A2308:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A2310u);  if (depth < kMaxDepth) unit_00A8(c, 284u, depth + 1u); else { c.pc = 0x003A25B0u; return; } if (c.pc != 0x003A2310u) [[unlikely]] return; }
L_003A2310:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003A2340; } }
L_003A2318:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A2320u);  if (depth < kMaxDepth) unit_00A8(c, 295u, depth + 1u); else { c.pc = 0x003A2680u; return; } if (c.pc != 0x003A2320u) [[unlikely]] return; }
L_003A2320:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003A2340; } }
L_003A2328:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A2330u);  if (depth < kMaxDepth) unit_00A8(c, 303u, depth + 1u); else { c.pc = 0x003A2750u; return; } if (c.pc != 0x003A2330u) [[unlikely]] return; }
L_003A2330:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003A2340; } }
L_003A2338:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A2340u);  if (depth < kMaxDepth) unit_00A8(c, 309u, depth + 1u); else { c.pc = 0x003A27E0u; return; } if (c.pc != 0x003A2340u) [[unlikely]] return; }
L_003A2340:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_003A2344:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003A2360:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[16].w[0] + 4624u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 44u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003A2380u); set32(c.r[4], c.r[16].w[0] + 4624u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003A2380u) [[unlikely]] return; }
L_003A2380:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003A24C4; } }
    set32(c.r[25], ld32((c.r[16].w[0] + 4624u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003A2398u); set32(c.r[4], c.r[16].w[0] + 4624u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003A2398u) [[unlikely]] return; }
L_003A2398:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003A2464; } }
    set32(c.r[25], ld32((c.r[16].w[0] + 4624u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 48u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003A23B0u); set32(c.r[4], c.r[16].w[0] + 4624u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003A23B0u) [[unlikely]] return; }
L_003A23B0:
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);  if (t) { goto L_003A24C4; } }
    set32(c.r[3], c.r[2].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + 3984u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 6;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x003A0000u < 16384u) { entry = entries_00A8[(t - 0x003A0000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_003A23D4:
    set32(c.r[4], c.r[16].w[0] + 96u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A23E0u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00A8(c, 129u, depth + 1u); else { c.pc = 0x003A1300u; return; } if (c.pc != 0x003A23E0u) [[unlikely]] return; }
L_003A23E0:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 5144u), c.r[3].w[0]);  if (t) { goto L_003A24C4; } }
L_003A23EC:
    set32(c.r[4], c.r[16].w[0] + 96u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A23F8u); set32(c.r[5], 0u + 6u);  if (depth < kMaxDepth) unit_00A8(c, 129u, depth + 1u); else { c.pc = 0x003A1300u; return; } if (c.pc != 0x003A23F8u) [[unlikely]] return; }
L_003A23F8:
    set32(c.r[3], 0u + 5u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 5144u), c.r[3].w[0]);  if (t) { goto L_003A24C4; } }
L_003A2404:
    set32(c.r[4], c.r[16].w[0] + 96u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A2410u); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_00A8(c, 129u, depth + 1u); else { c.pc = 0x003A1300u; return; } if (c.pc != 0x003A2410u) [[unlikely]] return; }
L_003A2410:
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 5144u), c.r[3].w[0]);  if (t) { goto L_003A24C4; } }
L_003A241C:
    set32(c.r[4], c.r[16].w[0] + 96u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A2428u); set32(c.r[5], 0u + 4u);  if (depth < kMaxDepth) unit_00A8(c, 129u, depth + 1u); else { c.pc = 0x003A1300u; return; } if (c.pc != 0x003A2428u) [[unlikely]] return; }
L_003A2428:
    set32(c.r[3], 0u + 6u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 5144u), c.r[3].w[0]);  if (t) { goto L_003A24C4; } }
L_003A2434:
    set32(c.r[4], c.r[16].w[0] + 96u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A2440u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_00A8(c, 129u, depth + 1u); else { c.pc = 0x003A1300u; return; } if (c.pc != 0x003A2440u) [[unlikely]] return; }
L_003A2440:
    set32(c.r[3], 0u + 4u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 5144u), c.r[3].w[0]);  if (t) { goto L_003A24C4; } }
L_003A244C:
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003A245Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003A245Cu) [[unlikely]] return; }
L_003A245C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_003A24C8; } }
L_003A2464:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A246Cu);  if (depth < kMaxDepth) unit_0087(c, 98u, depth + 1u); else { c.pc = 0x0031CBB0u; return; } if (c.pc != 0x003A246Cu) [[unlikely]] return; }
L_003A246C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A2478u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0087(c, 126u, depth + 1u); else { c.pc = 0x0031CFA0u; return; } if (c.pc != 0x003A2478u) [[unlikely]] return; }
L_003A2478:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], 0u + 5u);  if (t) { goto L_003A24B4; } }
    c.r[4].d[0] = 0ull + 0ull;
    st32((c.r[16].w[0] + 5148u), c.r[5].w[0]);
    set32(c.r[6], 0u + 4u);
    set32(c.r[7], 0u + 14u);
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A249Cu); c.r[9].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_001A(c, 267u, depth + 1u); else { c.pc = 0x0016A910u; return; } if (c.pc != 0x003A249Cu) [[unlikely]] return; }
L_003A249C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A24A4u);  if (depth < kMaxDepth) unit_009F(c, 127u, depth + 1u); else { c.pc = 0x0037D270u; return; } if (c.pc != 0x003A24A4u) [[unlikely]] return; }
L_003A24A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A24ACu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_009F(c, 156u, depth + 1u); else { c.pc = 0x0037D530u; return; } if (c.pc != 0x003A24ACu) [[unlikely]] return; }
L_003A24AC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003A24C4; } }
L_003A24B4:
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 36u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003A24C4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003A24C4u) [[unlikely]] return; }
L_003A24C4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_003A24C8:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003A24E0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[16].w[0] + 4880u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 44u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003A2500u); set32(c.r[4], c.r[16].w[0] + 4880u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003A2500u) [[unlikely]] return; }
L_003A2500:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003A2510; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A2510u);  if (depth < kMaxDepth) unit_00A8(c, 317u, depth + 1u); else { c.pc = 0x003A2860u; return; } if (c.pc != 0x003A2510u) [[unlikely]] return; }
L_003A2510:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003A2520:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A2538u); set32(c.r[4], c.r[16].w[0] + 96u);  if (depth < kMaxDepth) unit_00A8(c, 67u, depth + 1u); else { c.pc = 0x003A0BB0u; return; } if (c.pc != 0x003A2538u) [[unlikely]] return; }
L_003A2538:
    set32(c.r[4], ld32((c.r[16].w[0] + 4604u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 3u);  if (t) { goto L_003A2584; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A2550u);  if (depth < kMaxDepth) unit_0087(c, 136u, depth + 1u); else { c.pc = 0x0031D080u; return; } if (c.pc != 0x003A2550u) [[unlikely]] return; }
L_003A2550:
    set32(c.r[3], ld32((c.r[16].w[0] + 4600u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A2560u); st32((c.r[2].w[0] + 384u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_0087(c, 321u, depth + 1u); else { c.pc = 0x0031EFF0u; return; } if (c.pc != 0x003A2560u) [[unlikely]] return; }
L_003A2560:
    set32(c.r[2], ld32((c.r[16].w[0] + 5140u)));
    set32(c.r[3], 0u + 1u);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003A257Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003A257Cu) [[unlikely]] return; }
L_003A257C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_003A2598; } }
L_003A2584:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_003A2594; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A2594u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 317u, depth + 1u); else { c.pc = 0x003A2860u; return; } if (c.pc != 0x003A2594u) [[unlikely]] return; }
L_003A2594:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_003A2598:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003A25B0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A25CCu); set32(c.r[4], c.r[17].w[0] + 96u);  if (depth < kMaxDepth) unit_00A8(c, 67u, depth + 1u); else { c.pc = 0x003A0BB0u; return; } if (c.pc != 0x003A25CCu) [[unlikely]] return; }
L_003A25CC:
    set32(c.r[4], ld32((c.r[17].w[0] + 4604u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 3u);  if (t) { goto L_003A2658; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A25E4u);  if (depth < kMaxDepth) unit_0087(c, 136u, depth + 1u); else { c.pc = 0x0031D080u; return; } if (c.pc != 0x003A25E4u) [[unlikely]] return; }
L_003A25E4:
    set32(c.r[3], ld32((c.r[17].w[0] + 4600u)));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A25F8u); st32((c.r[2].w[0] + 384u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_0087(c, 197u, depth + 1u); else { c.pc = 0x0031D730u; return; } if (c.pc != 0x003A25F8u) [[unlikely]] return; }
L_003A25F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A2600u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0087(c, 173u, depth + 1u); else { c.pc = 0x0031D440u; return; } if (c.pc != 0x003A2600u) [[unlikely]] return; }
L_003A2600:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A2608u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0087(c, 306u, depth + 1u); else { c.pc = 0x0031EBA0u; return; } if (c.pc != 0x003A2608u) [[unlikely]] return; }
L_003A2608:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] > 0; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003A2648; } }
    set32(c.r[5], 0u + 21u);
    c.r[4].d[0] = 0ull + 0ull;
    st32((c.r[17].w[0] + 5148u), c.r[5].w[0]);
    set32(c.r[6], 0u + 4u);
    set32(c.r[7], 0u + 14u);
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A2630u); c.r[9].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_001A(c, 267u, depth + 1u); else { c.pc = 0x0016A910u; return; } if (c.pc != 0x003A2630u) [[unlikely]] return; }
L_003A2630:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A2638u);  if (depth < kMaxDepth) unit_009F(c, 127u, depth + 1u); else { c.pc = 0x0037D270u; return; } if (c.pc != 0x003A2638u) [[unlikely]] return; }
L_003A2638:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A2640u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_009F(c, 156u, depth + 1u); else { c.pc = 0x0037D530u; return; } if (c.pc != 0x003A2640u) [[unlikely]] return; }
L_003A2640:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_003A266C; } }
L_003A2648:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A2650u);  if (depth < kMaxDepth) unit_00A8(c, 317u, depth + 1u); else { c.pc = 0x003A2860u; return; } if (c.pc != 0x003A2650u) [[unlikely]] return; }
L_003A2650:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003A2668; } }
L_003A2658:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_003A2668; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A2668u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 317u, depth + 1u); else { c.pc = 0x003A2860u; return; } if (c.pc != 0x003A2668u) [[unlikely]] return; }
L_003A2668:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_003A266C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003A2680:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A2698u); set32(c.r[4], c.r[16].w[0] + 96u);  if (depth < kMaxDepth) unit_00A8(c, 67u, depth + 1u); else { c.pc = 0x003A0BB0u; return; } if (c.pc != 0x003A2698u) [[unlikely]] return; }
L_003A2698:
    set32(c.r[4], ld32((c.r[16].w[0] + 4604u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 3u);  if (t) { goto L_003A2730; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A26B0u);  if (depth < kMaxDepth) unit_0087(c, 136u, depth + 1u); else { c.pc = 0x0031D080u; return; } if (c.pc != 0x003A26B0u) [[unlikely]] return; }
L_003A26B0:
    set32(c.r[3], ld32((c.r[16].w[0] + 4600u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_003A26CC; } }
    c.r[4].d[0] = ld8((c.r[3].w[0] + 6u));
    c.budget -= 1;
L_003A26CC:
    set32(c.r[3], 0u + 12u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_003A26F4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A26E0u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0087(c, 314u, depth + 1u); else { c.pc = 0x0031EEC0u; return; } if (c.pc != 0x003A26E0u) [[unlikely]] return; }
L_003A26E0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003A26F4; } }
    set32(c.r[2], 0u + 8u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 5148u), c.r[2].w[0]);  if (t) { goto L_003A26FC; } }
L_003A26F4:
    set32(c.r[2], 0u + 3u);
    st32((c.r[16].w[0] + 5148u), c.r[2].w[0]);
    c.budget -= 2;
L_003A26FC:
    set32(c.r[5], ld32((c.r[16].w[0] + 5148u)));
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 4u);
    set32(c.r[7], 0u + 14u);
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A2718u); c.r[9].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_001A(c, 267u, depth + 1u); else { c.pc = 0x0016A910u; return; } if (c.pc != 0x003A2718u) [[unlikely]] return; }
L_003A2718:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A2720u);  if (depth < kMaxDepth) unit_009F(c, 127u, depth + 1u); else { c.pc = 0x0037D270u; return; } if (c.pc != 0x003A2720u) [[unlikely]] return; }
L_003A2720:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A2728u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_009F(c, 156u, depth + 1u); else { c.pc = 0x0037D530u; return; } if (c.pc != 0x003A2728u) [[unlikely]] return; }
L_003A2728:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_003A2744; } }
L_003A2730:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_003A2740; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A2740u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 317u, depth + 1u); else { c.pc = 0x003A2860u; return; } if (c.pc != 0x003A2740u) [[unlikely]] return; }
L_003A2740:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_003A2744:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003A2750:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A2768u); set32(c.r[4], c.r[16].w[0] + 96u);  if (depth < kMaxDepth) unit_00A8(c, 67u, depth + 1u); else { c.pc = 0x003A0BB0u; return; } if (c.pc != 0x003A2768u) [[unlikely]] return; }
L_003A2768:
    set32(c.r[4], ld32((c.r[16].w[0] + 4604u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 3u);  if (t) { goto L_003A27B8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A2780u);  if (depth < kMaxDepth) unit_0087(c, 136u, depth + 1u); else { c.pc = 0x0031D080u; return; } if (c.pc != 0x003A2780u) [[unlikely]] return; }
L_003A2780:
    set32(c.r[3], ld32((c.r[16].w[0] + 4600u)));
    set32(c.r[4], c.r[16].w[0] + 4880u);
    st32((c.r[2].w[0] + 384u), c.r[3].w[0]);
    set32(c.r[25], ld32((c.r[16].w[0] + 4880u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 140u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003A279Cu); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003A279Cu) [[unlikely]] return; }
L_003A279C:
    set32(c.r[25], ld32((c.r[16].w[0] + 4880u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003A27ACu); set32(c.r[4], c.r[16].w[0] + 4880u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003A27ACu) [[unlikely]] return; }
L_003A27AC:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 5144u), c.r[3].w[0]);  if (t) { goto L_003A27C8; } }
L_003A27B8:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_003A27C8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A27C8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 317u, depth + 1u); else { c.pc = 0x003A2860u; return; } if (c.pc != 0x003A27C8u) [[unlikely]] return; }
L_003A27C8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003A27E0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A27F8u); set32(c.r[4], c.r[16].w[0] + 96u);  if (depth < kMaxDepth) unit_00A8(c, 67u, depth + 1u); else { c.pc = 0x003A0BB0u; return; } if (c.pc != 0x003A27F8u) [[unlikely]] return; }
L_003A27F8:
    set32(c.r[4], ld32((c.r[16].w[0] + 4604u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 3u);  if (t) { goto L_003A2828; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A2810u);  if (depth < kMaxDepth) unit_0087(c, 136u, depth + 1u); else { c.pc = 0x0031D080u; return; } if (c.pc != 0x003A2810u) [[unlikely]] return; }
L_003A2810:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A2818u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0087(c, 173u, depth + 1u); else { c.pc = 0x0031D440u; return; } if (c.pc != 0x003A2818u) [[unlikely]] return; }
L_003A2818:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A2820u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 317u, depth + 1u); else { c.pc = 0x003A2860u; return; } if (c.pc != 0x003A2820u) [[unlikely]] return; }
L_003A2820:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_003A284C; } }
L_003A2828:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_003A2848; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A2838u);  if (depth < kMaxDepth) unit_0087(c, 136u, depth + 1u); else { c.pc = 0x0031D080u; return; } if (c.pc != 0x003A2838u) [[unlikely]] return; }
L_003A2838:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A2840u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0087(c, 161u, depth + 1u); else { c.pc = 0x0031D350u; return; } if (c.pc != 0x003A2840u) [[unlikely]] return; }
L_003A2840:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A2848u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 317u, depth + 1u); else { c.pc = 0x003A2860u; return; } if (c.pc != 0x003A2848u) [[unlikely]] return; }
L_003A2848:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_003A284C:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003A2860:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[5].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[4], c.r[18].w[0] + 96u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A2888u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_00A8(c, 112u, depth + 1u); else { c.pc = 0x003A1130u; return; } if (c.pc != 0x003A2888u) [[unlikely]] return; }
L_003A2888:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A2890u); st32((c.r[18].w[0] + 4604u), 0u);  if (depth < kMaxDepth) unit_0087(c, 136u, depth + 1u); else { c.pc = 0x0031D080u; return; } if (c.pc != 0x003A2890u) [[unlikely]] return; }
L_003A2890:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A289Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0087(c, 298u, depth + 1u); else { c.pc = 0x0031EA30u; return; } if (c.pc != 0x003A289Cu) [[unlikely]] return; }
L_003A289C:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A28A8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0087(c, 301u, depth + 1u); else { c.pc = 0x0031EAC0u; return; } if (c.pc != 0x003A28A8u) [[unlikely]] return; }
L_003A28A8:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A28B4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0087(c, 304u, depth + 1u); else { c.pc = 0x0031EB50u; return; } if (c.pc != 0x003A28B4u) [[unlikely]] return; }
L_003A28B4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A28C0u); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0087(c, 306u, depth + 1u); else { c.pc = 0x0031EBA0u; return; } if (c.pc != 0x003A28C0u) [[unlikely]] return; }
L_003A28C0:
    c.r[4].d[0] = 0ll < c.r[16].sd[0] ? 1ull : 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00420000u);
    c.r[4].d[0] = c.r[4].d[0] ^ 1ull;
    c.r[3].d[0] = 0ll < c.r[19].sd[0] ? 1ull : 0ull;
    st8((c.r[1].w[0] + 6392u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull; c.r[4].d[0] = c.r[4].d[0] & 255ull;  if (t) { goto L_003A28E0; } }
    c.r[3].d[0] = 0ll < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 1;
L_003A28E0:
    c.r[2].d[0] = c.r[17].sd[0] < 2ll ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00420000u);
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; st8((c.r[1].w[0] + 6400u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_003A2910; } }
    c.r[2].d[0] = c.r[17].d[0] ^ 1ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003A2910; } }
    c.r[2].d[0] = c.r[16].sd[0] < 2ll ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 2;
L_003A2910:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00420000u);
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    st8((c.r[1].w[0] + 6416u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00420000u);
    st8((c.r[1].w[0] + 6408u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[25], ld32((c.r[18].w[0] + 4624u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 9;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003A2934u); set32(c.r[4], c.r[18].w[0] + 4624u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003A2934u) [[unlikely]] return; }
L_003A2934:
    st32((c.r[18].w[0] + 5144u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003A2960:
    c.f[0] = ld32((c.r[4].w[0] + 44u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[0]);
    c.budget -= 6;
    { set32(c.r[4], c.r[4].w[0] + 96u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003A0D30u | kUnwind; return; } goto L_003A0D30; }
L_003A2980:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A2994u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 216u, depth + 1u); else { c.pc = 0x003A20E0u; return; } if (c.pc != 0x003A2994u) [[unlikely]] return; }
L_003A2994:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003A29AC; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003A29ACu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003A29ACu) [[unlikely]] return; }
L_003A29AC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003A29C0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A29D4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 216u, depth + 1u); else { c.pc = 0x003A20E0u; return; } if (c.pc != 0x003A29D4u) [[unlikely]] return; }
L_003A29D4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003A29EC; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003A29ECu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003A29ECu) [[unlikely]] return; }
L_003A29EC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003A2A00:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A2A18u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 318u, depth + 1u); else { c.pc = 0x0012E5E0u; return; } if (c.pc != 0x003A2A18u) [[unlikely]] return; }
L_003A2A18:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], ld32((c.r[16].w[0] + 5136u)));
    set32(c.r[3], ld32((c.r[1].w[0] + 26392u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[17], c.r[3].w[0] + 624u);  if (t) { goto L_003A2A78; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A2A34u); set32(c.r[4], 0u + 160u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x003A2A34u) [[unlikely]] return; }
L_003A2A34:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_003A2A48; } }
    set32(c.r[5], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A2A48u); set32(c.r[6], 0u + 2u);  if (depth < kMaxDepth) unit_002A(c, 287u, depth + 1u); else { c.pc = 0x001AB200u; return; } if (c.pc != 0x003A2A48u) [[unlikely]] return; }
L_003A2A48:
    st32((c.r[16].w[0] + 5136u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A2A58u); set32(c.r[5], 0u + 10000u);  if (depth < kMaxDepth) unit_002A(c, 5u, depth + 1u); else { c.pc = 0x001A80A0u; return; } if (c.pc != 0x003A2A58u) [[unlikely]] return; }
L_003A2A58:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A2A68u); c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_002A(c, 3u, depth + 1u); else { c.pc = 0x001A8060u; return; } if (c.pc != 0x003A2A68u) [[unlikely]] return; }
L_003A2A68:
    set32(c.r[4], ld32((c.r[16].w[0] + 5136u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A2A78u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 322u, depth + 1u); else { c.pc = 0x00196E30u; return; } if (c.pc != 0x003A2A78u) [[unlikely]] return; }
L_003A2A78:
    set32(c.r[4], ld32((c.r[16].w[0] + 5136u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003A2A8Cu); set32(c.r[5], 0u + 171u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003A2A8Cu) [[unlikely]] return; }
L_003A2A8C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A2A94u);  if (depth < kMaxDepth) unit_009F(c, 200u, depth + 1u); else { c.pc = 0x0037DCF0u; return; } if (c.pc != 0x003A2A94u) [[unlikely]] return; }
L_003A2A94:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], 0u + 2u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A2AA4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_009F(c, 211u, depth + 1u); else { c.pc = 0x0037DE40u; return; } if (c.pc != 0x003A2AA4u) [[unlikely]] return; }
L_003A2AA4:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A2AB0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_009F(c, 186u, depth + 1u); else { c.pc = 0x0037DB10u; return; } if (c.pc != 0x003A2AB0u) [[unlikely]] return; }
L_003A2AB0:
    st32((c.r[16].w[0] + 68u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    st32((c.r[16].w[0] + 72u), 0u);
    set32(c.r[2], 0u + 15u);
    st32((c.r[16].w[0] + 76u), c.r[3].w[0]);
    set32(c.r[4], c.r[16].w[0] + 32u);
    st32((c.r[16].w[0] + 80u), c.r[2].w[0]);
    set32(c.r[5], c.r[16].w[0] + 68u);
    st32((c.r[16].w[0] + 84u), c.r[2].w[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A2ADCu); st32((c.r[16].w[0] + 88u), 0u);  if (depth < kMaxDepth) unit_0049(c, 280u, depth + 1u); else { c.pc = 0x002276C0u; return; } if (c.pc != 0x003A2ADCu) [[unlikely]] return; }
L_003A2ADC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A2AE4u); set32(c.r[4], c.r[16].w[0] + 96u);  if (depth < kMaxDepth) unit_00A8(c, 97u, depth + 1u); else { c.pc = 0x003A0F80u; return; } if (c.pc != 0x003A2AE4u) [[unlikely]] return; }
L_003A2AE4:
    set32(c.r[25], ld32((c.r[16].w[0] + 4624u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003A2AF4u); set32(c.r[4], c.r[16].w[0] + 4624u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003A2AF4u) [[unlikely]] return; }
L_003A2AF4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003A2B10:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x0012E600u | kUnwind; return; } [[clang::musttail]] return unit_000B(c, 319u, depth); }
L_003A2B20:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A2B34u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 320u, depth + 1u); else { c.pc = 0x0012E610u; return; } if (c.pc != 0x003A2B34u) [[unlikely]] return; }
L_003A2B34:
    set32(c.r[4], ld32((c.r[16].w[0] + 5136u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x437F0000u);  if (t) { goto L_003A2B54; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003A2B50u); set32(c.r[5], 0u + 172u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003A2B50u) [[unlikely]] return; }
L_003A2B50:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    c.budget -= 1;
L_003A2B54:
    set32(c.r[2], 0u + 15u);
    st32((c.r[16].w[0] + 68u), c.r[3].w[0]);
    set32(c.r[4], c.r[16].w[0] + 32u);
    st32((c.r[16].w[0] + 72u), c.r[3].w[0]);
    set32(c.r[5], c.r[16].w[0] + 68u);
    st32((c.r[16].w[0] + 76u), 0u);
    st32((c.r[16].w[0] + 80u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 84u), 0u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A2B7Cu); st32((c.r[16].w[0] + 88u), 0u);  if (depth < kMaxDepth) unit_0049(c, 280u, depth + 1u); else { c.pc = 0x002276C0u; return; } if (c.pc != 0x003A2B7Cu) [[unlikely]] return; }
L_003A2B7C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A2B84u); set32(c.r[4], c.r[16].w[0] + 96u);  if (depth < kMaxDepth) unit_00A8(c, 98u, depth + 1u); else { c.pc = 0x003A0FA0u; return; } if (c.pc != 0x003A2B84u) [[unlikely]] return; }
L_003A2B84:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003A2BA0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A2BB4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 321u, depth + 1u); else { c.pc = 0x0012E630u; return; } if (c.pc != 0x003A2BB4u) [[unlikely]] return; }
L_003A2BB4:
    set32(c.r[4], ld32((c.r[16].w[0] + 5136u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x437F0000u);  if (t) { goto L_003A2BD4; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003A2BD0u); set32(c.r[5], 0u + 172u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003A2BD0u) [[unlikely]] return; }
L_003A2BD0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    c.budget -= 1;
L_003A2BD4:
    set32(c.r[2], 0u + 15u);
    st32((c.r[16].w[0] + 68u), c.r[3].w[0]);
    set32(c.r[4], c.r[16].w[0] + 32u);
    st32((c.r[16].w[0] + 72u), c.r[3].w[0]);
    set32(c.r[5], c.r[16].w[0] + 68u);
    st32((c.r[16].w[0] + 76u), 0u);
    st32((c.r[16].w[0] + 80u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 84u), 0u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A2BFCu); st32((c.r[16].w[0] + 88u), 0u);  if (depth < kMaxDepth) unit_0049(c, 280u, depth + 1u); else { c.pc = 0x002276C0u; return; } if (c.pc != 0x003A2BFCu) [[unlikely]] return; }
L_003A2BFC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A2C04u); set32(c.r[4], c.r[16].w[0] + 96u);  if (depth < kMaxDepth) unit_00A8(c, 98u, depth + 1u); else { c.pc = 0x003A0FA0u; return; } if (c.pc != 0x003A2C04u) [[unlikely]] return; }
L_003A2C04:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003A2C20:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[5].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A2C3Cu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_000B(c, 298u, depth + 1u); else { c.pc = 0x0012E440u; return; } if (c.pc != 0x003A2C3Cu) [[unlikely]] return; }
L_003A2C3C:
    set32(c.r[4], c.r[17].w[0] + 20u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A2C48u); set32(c.r[5], 0u + 11u);  if (depth < kMaxDepth) unit_000F(c, 264u, depth + 1u); else { c.pc = 0x0013E560u; return; } if (c.pc != 0x003A2C48u) [[unlikely]] return; }
L_003A2C48:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[3], c.r[3].w[0] - 28224u);
    set32(c.r[2], c.r[2].w[0] - 28136u);
    st32((c.r[17].w[0]), c.r[3].w[0]);
    set32(c.r[4], c.r[17].w[0] + 32u);
    st32((c.r[17].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A2C6Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0049(c, 271u, depth + 1u); else { c.pc = 0x002275A0u; return; } if (c.pc != 0x003A2C6Cu) [[unlikely]] return; }
L_003A2C6C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A2C74u); set32(c.r[4], c.r[17].w[0] + 96u);  if (depth < kMaxDepth) unit_00A8(c, 47u, depth + 1u); else { c.pc = 0x003A0940u; return; } if (c.pc != 0x003A2C74u) [[unlikely]] return; }
L_003A2C74:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[4], c.r[17].w[0] + 4624u);
    set32(c.r[5], c.r[5].w[0] + 6432u);
    set32(c.r[6], 0u + 3u);
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A2C90u); set32(c.r[8], 0u + 12u);  if (depth < kMaxDepth) unit_009B(c, 237u, depth + 1u); else { c.pc = 0x0036DD90u; return; } if (c.pc != 0x003A2C90u) [[unlikely]] return; }
L_003A2C90:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A2C98u); set32(c.r[4], c.r[17].w[0] + 4880u);  if (depth < kMaxDepth) unit_00A8(c, 181u, depth + 1u); else { c.pc = 0x003A1D40u; return; } if (c.pc != 0x003A2C98u) [[unlikely]] return; }
L_003A2C98:
    st32((c.r[17].w[0] + 5136u), 0u);
    set32(c.r[2], 0u + 3u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A2CA8u); st32((c.r[17].w[0] + 5140u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0087(c, 136u, depth + 1u); else { c.pc = 0x0031D080u; return; } if (c.pc != 0x003A2CA8u) [[unlikely]] return; }
L_003A2CA8:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A2CB4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0087(c, 288u, depth + 1u); else { c.pc = 0x0031E750u; return; } if (c.pc != 0x003A2CB4u) [[unlikely]] return; }
L_003A2CB4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A2CBCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0087(c, 322u, depth + 1u); else { c.pc = 0x0031F030u; return; } if (c.pc != 0x003A2CBCu) [[unlikely]] return; }
L_003A2CBC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A2CC4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0087(c, 173u, depth + 1u); else { c.pc = 0x0031D440u; return; } if (c.pc != 0x003A2CC4u) [[unlikely]] return; }
L_003A2CC4:
    set32(c.r[2], ld32((c.r[16].w[0] + 384u)));
    st32((c.r[17].w[0] + 5144u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 5144u)));
    c.budget -= 5;
    { const bool t = c.r[3].sd[0] < 0; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_003A2CE4; } }
    c.r[2].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(37ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[3].w[0] << 2);  if (t) { goto L_003A2CEC; } }
L_003A2CE4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003A2D0C; } }
L_003A2CEC:
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_003A2D04; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003A2D0C; } }
L_003A2D04:
    c.r[2].d[0] = ld8((c.r[2].w[0] + 13u));
    c.r[5].d[0] = c.r[2].d[0] & 63ull;
    c.budget -= 2;
L_003A2D0C:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003A2D24; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A2D1Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0087(c, 293u, depth + 1u); else { c.pc = 0x0031E910u; return; } if (c.pc != 0x003A2D1Cu) [[unlikely]] return; }
L_003A2D1C:
    st32((c.r[17].w[0] + 5144u), c.r[2].w[0]);
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 2;
L_003A2D24:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003A2D40:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003A2DFC; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[3], c.r[3].w[0] - 28224u);
    set32(c.r[2], c.r[2].w[0] - 28136u);
    st32((c.r[17].w[0]), c.r[3].w[0]);
    st32((c.r[17].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 5136u)));
    c.budget -= 9;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003A2D98; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003A2D98; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003A2D98u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003A2D98u) [[unlikely]] return; }
L_003A2D98:
    set32(c.r[4], c.r[17].w[0] + 4880u);
    set32(c.r[5], 0u - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A2DA8u); st32((c.r[17].w[0] + 5136u), 0u);  if (depth < kMaxDepth) unit_00A8(c, 183u, depth + 1u); else { c.pc = 0x003A1DA0u; return; } if (c.pc != 0x003A2DA8u) [[unlikely]] return; }
L_003A2DA8:
    set32(c.r[4], c.r[17].w[0] + 4624u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A2DB4u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_009B(c, 243u, depth + 1u); else { c.pc = 0x0036DF80u; return; } if (c.pc != 0x003A2DB4u) [[unlikely]] return; }
L_003A2DB4:
    set32(c.r[4], c.r[17].w[0] + 96u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A2DC0u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_00A8(c, 59u, depth + 1u); else { c.pc = 0x003A0A90u; return; } if (c.pc != 0x003A2DC0u) [[unlikely]] return; }
L_003A2DC0:
    set32(c.r[4], c.r[17].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A2DCCu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0049(c, 274u, depth + 1u); else { c.pc = 0x002275F0u; return; } if (c.pc != 0x003A2DCCu) [[unlikely]] return; }
L_003A2DCC:
    set32(c.r[4], c.r[17].w[0] + 20u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A2DD8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000F(c, 266u, depth + 1u); else { c.pc = 0x0013E5B0u; return; } if (c.pc != 0x003A2DD8u) [[unlikely]] return; }
L_003A2DD8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A2DE4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 300u, depth + 1u); else { c.pc = 0x0012E490u; return; } if (c.pc != 0x003A2DE4u) [[unlikely]] return; }
L_003A2DE4:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003A2E00; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A2DFCu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x003A2DFCu) [[unlikely]] return; }
L_003A2DFC:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003A2E00:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003A2E20:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[16].w[0] + 4624u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003A2E40u); set32(c.r[4], c.r[16].w[0] + 4624u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003A2E40u) [[unlikely]] return; }
L_003A2E40:
    set32(c.r[2], ld32((c.r[16].w[0] + 4648u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003A2E50; } }
    st8((c.r[2].w[0] + 35u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_003A2E50:
    set32(c.r[25], ld32((c.r[16].w[0] + 4624u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003A2E60u); set32(c.r[4], c.r[16].w[0] + 4624u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003A2E60u) [[unlikely]] return; }
L_003A2E60:
    set32(c.r[25], ld32((c.r[16].w[0] + 4880u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003A2E70u); set32(c.r[4], c.r[16].w[0] + 4880u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003A2E70u) [[unlikely]] return; }
L_003A2E70:
    set32(c.r[25], ld32((c.r[16].w[0] + 4880u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003A2E80u); set32(c.r[4], c.r[16].w[0] + 4880u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003A2E80u) [[unlikely]] return; }
L_003A2E80:
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A2E8Cu); st32((c.r[16].w[0] + 5140u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0087(c, 136u, depth + 1u); else { c.pc = 0x0031D080u; return; } if (c.pc != 0x003A2E8Cu) [[unlikely]] return; }
L_003A2E8C:
    set32(c.r[5], ld32((c.r[2].w[0] + 384u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A2E98u); set32(c.r[4], c.r[16].w[0] + 96u);  if (depth < kMaxDepth) unit_00A8(c, 107u, depth + 1u); else { c.pc = 0x003A1090u; return; } if (c.pc != 0x003A2E98u) [[unlikely]] return; }
L_003A2E98:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A2EA0u); set32(c.r[4], c.r[16].w[0] + 96u);  if (depth < kMaxDepth) unit_00A8(c, 135u, depth + 1u); else { c.pc = 0x003A13B0u; return; } if (c.pc != 0x003A2EA0u) [[unlikely]] return; }
L_003A2EA0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003A2EB0:
    set32(c.r[3], ld32((c.r[4].w[0] + 5136u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003A2EC0; } }
    c.r[2].d[0] = ld8((c.r[3].w[0] + 137u));
    c.budget -= 1;
L_003A2EC0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003A2ED0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A2EE4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_009F(c, 80u, depth + 1u); else { c.pc = 0x0037CE90u; return; } if (c.pc != 0x003A2EE4u) [[unlikely]] return; }
L_003A2EE4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003A2EFC; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003A2EFCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003A2EFCu) [[unlikely]] return; }
L_003A2EFC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003A2F10:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A2F24u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 386u, depth + 1u); else { c.pc = 0x003A2EB0u; return; } if (c.pc != 0x003A2F24u) [[unlikely]] return; }
L_003A2F24:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003A2F3C; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003A2F3Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003A2F3Cu) [[unlikely]] return; }
L_003A2F3C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003A2F50:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[1].w[0] + 25376u)));
    c.budget -= 8;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003A2FB8; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 44u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003A2F80u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003A2F80u) [[unlikely]] return; }
L_003A2F80:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003A3024; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A2F90u);  if (depth < kMaxDepth) unit_001A(c, 271u, depth + 1u); else { c.pc = 0x0016A9E0u; return; } if (c.pc != 0x003A2F90u) [[unlikely]] return; }
L_003A2F90:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A2F98u);  if (depth < kMaxDepth) unit_009F(c, 127u, depth + 1u); else { c.pc = 0x0037D270u; return; } if (c.pc != 0x003A2F98u) [[unlikely]] return; }
L_003A2F98:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A2FA0u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_009F(c, 157u, depth + 1u); else { c.pc = 0x0037D560u; return; } if (c.pc != 0x003A2FA0u) [[unlikely]] return; }
L_003A2FA0:
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003A2FB0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003A2FB0u) [[unlikely]] return; }
L_003A2FB0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_003A3028; } }
L_003A2FB8:
    set32(c.r[4], ld32((c.r[16].w[0] + 5140u)));
    set32(c.r[3], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 2u);  if (t) { goto L_003A301C; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_003A300C; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_003A2FFC; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003A2FEC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003A3024; } }
L_003A2FEC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A2FF4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 403u, depth + 1u); else { c.pc = 0x003A3040u; return; } if (c.pc != 0x003A2FF4u) [[unlikely]] return; }
L_003A2FF4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003A3024; } }
L_003A2FFC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A3004u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 420u, depth + 1u); else { c.pc = 0x003A31A0u; return; } if (c.pc != 0x003A3004u) [[unlikely]] return; }
L_003A3004:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003A3024; } }
L_003A300C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A3014u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 423u, depth + 1u); else { c.pc = 0x003A31E0u; return; } if (c.pc != 0x003A3014u) [[unlikely]] return; }
L_003A3014:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003A3024; } }
L_003A301C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A3024u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 431u, depth + 1u); else { c.pc = 0x003A3270u; return; } if (c.pc != 0x003A3024u) [[unlikely]] return; }
L_003A3024:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_003A3028:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003A3040:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[16].w[0] + 4624u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 44u)));
    c.budget -= 9;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003A3064u); set32(c.r[4], c.r[16].w[0] + 4624u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003A3064u) [[unlikely]] return; }
L_003A3064:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003A3184; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A3074u);  if (depth < kMaxDepth) unit_0087(c, 136u, depth + 1u); else { c.pc = 0x0031D080u; return; } if (c.pc != 0x003A3074u) [[unlikely]] return; }
L_003A3074:
    set32(c.r[25], ld32((c.r[16].w[0] + 4624u)));
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 48u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003A3088u); set32(c.r[4], c.r[16].w[0] + 4624u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003A3088u) [[unlikely]] return; }
L_003A3088:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003A3150; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_003A3110; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003A30B0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_003A3188; } }
L_003A30B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A30B8u);  if (depth < kMaxDepth) unit_0087(c, 173u, depth + 1u); else { c.pc = 0x0031D440u; return; } if (c.pc != 0x003A30B8u) [[unlikely]] return; }
L_003A30B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A30C0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0087(c, 306u, depth + 1u); else { c.pc = 0x0031EBA0u; return; } if (c.pc != 0x003A30C0u) [[unlikely]] return; }
L_003A30C0:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] > 0; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_003A30F8; } }
    set32(c.r[5], 0u + 21u);
    set32(c.r[6], 0u + 4u);
    set32(c.r[7], 0u + 14u);
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A30E0u); c.r[9].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_001A(c, 267u, depth + 1u); else { c.pc = 0x0016A910u; return; } if (c.pc != 0x003A30E0u) [[unlikely]] return; }
L_003A30E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A30E8u);  if (depth < kMaxDepth) unit_009F(c, 127u, depth + 1u); else { c.pc = 0x0037D270u; return; } if (c.pc != 0x003A30E8u) [[unlikely]] return; }
L_003A30E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A30F0u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_009F(c, 156u, depth + 1u); else { c.pc = 0x0037D530u; return; } if (c.pc != 0x003A30F0u) [[unlikely]] return; }
L_003A30F0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003A3184; } }
L_003A30F8:
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003A3108u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003A3108u) [[unlikely]] return; }
L_003A3108:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003A3184; } }
L_003A3110:
    set32(c.r[2], ld32((c.r[16].w[0] + 5144u)));
    set32(c.r[4], 0u + 21u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A3120u); st32((c.r[17].w[0] + 384u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0076(c, 191u, depth + 1u); else { c.pc = 0x002D9970u; return; } if (c.pc != 0x003A3120u) [[unlikely]] return; }
L_003A3120:
    set32(c.r[25], ld32((c.r[16].w[0] + 4880u)));
    set32(c.r[4], c.r[16].w[0] + 4880u);
    set32(c.r[25], ld32((c.r[25].w[0] + 140u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003A3134u); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003A3134u) [[unlikely]] return; }
L_003A3134:
    set32(c.r[25], ld32((c.r[16].w[0] + 4880u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003A3144u); set32(c.r[4], c.r[16].w[0] + 4880u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003A3144u) [[unlikely]] return; }
L_003A3144:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 5140u), c.r[3].w[0]);  if (t) { goto L_003A3184; } }
L_003A3150:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A3158u);  if (depth < kMaxDepth) unit_0087(c, 173u, depth + 1u); else { c.pc = 0x0031D440u; return; } if (c.pc != 0x003A3158u) [[unlikely]] return; }
L_003A3158:
    set32(c.r[2], ld32((c.r[16].w[0] + 5144u)));
    set32(c.r[4], 0u + 21u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A3168u); st32((c.r[17].w[0] + 384u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0076(c, 191u, depth + 1u); else { c.pc = 0x002D9970u; return; } if (c.pc != 0x003A3168u) [[unlikely]] return; }
L_003A3168:
    set32(c.r[5], ld32((c.r[16].w[0] + 5144u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A3174u); set32(c.r[4], c.r[16].w[0] + 96u);  if (depth < kMaxDepth) unit_00A8(c, 107u, depth + 1u); else { c.pc = 0x003A1090u; return; } if (c.pc != 0x003A3174u) [[unlikely]] return; }
L_003A3174:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A317Cu); set32(c.r[4], c.r[16].w[0] + 96u);  if (depth < kMaxDepth) unit_00A8(c, 132u, depth + 1u); else { c.pc = 0x003A1360u; return; } if (c.pc != 0x003A317Cu) [[unlikely]] return; }
L_003A317C:
    set32(c.r[3], 0u + 2u);
    st32((c.r[16].w[0] + 5140u), c.r[3].w[0]);
    c.budget -= 2;
L_003A3184:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_003A3188:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003A31A0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[16].w[0] + 4880u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 44u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003A31C0u); set32(c.r[4], c.r[16].w[0] + 4880u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003A31C0u) [[unlikely]] return; }
L_003A31C0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003A31D0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A31D0u);  if (depth < kMaxDepth) unit_00A8(c, 434u, depth + 1u); else { c.pc = 0x003A32B0u; return; } if (c.pc != 0x003A31D0u) [[unlikely]] return; }
L_003A31D0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003A31E0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A31FCu); set32(c.r[4], c.r[17].w[0] + 96u);  if (depth < kMaxDepth) unit_00A8(c, 67u, depth + 1u); else { c.pc = 0x003A0BB0u; return; } if (c.pc != 0x003A31FCu) [[unlikely]] return; }
L_003A31FC:
    set32(c.r[4], ld32((c.r[17].w[0] + 4604u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 3u);  if (t) { goto L_003A3238; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A3214u);  if (depth < kMaxDepth) unit_0087(c, 136u, depth + 1u); else { c.pc = 0x0031D080u; return; } if (c.pc != 0x003A3214u) [[unlikely]] return; }
L_003A3214:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A3220u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0087(c, 173u, depth + 1u); else { c.pc = 0x0031D440u; return; } if (c.pc != 0x003A3220u) [[unlikely]] return; }
L_003A3220:
    set32(c.r[2], ld32((c.r[16].w[0] + 384u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A3230u); st32((c.r[17].w[0] + 5144u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 434u, depth + 1u); else { c.pc = 0x003A32B0u; return; } if (c.pc != 0x003A3230u) [[unlikely]] return; }
L_003A3230:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_003A325C; } }
L_003A3238:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_003A3258; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A3248u);  if (depth < kMaxDepth) unit_0087(c, 136u, depth + 1u); else { c.pc = 0x0031D080u; return; } if (c.pc != 0x003A3248u) [[unlikely]] return; }
L_003A3248:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A3250u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0087(c, 161u, depth + 1u); else { c.pc = 0x0031D350u; return; } if (c.pc != 0x003A3250u) [[unlikely]] return; }
L_003A3250:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A3258u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 434u, depth + 1u); else { c.pc = 0x003A32B0u; return; } if (c.pc != 0x003A3258u) [[unlikely]] return; }
L_003A3258:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_003A325C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003A3270:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A3288u); set32(c.r[4], c.r[16].w[0] + 96u);  if (depth < kMaxDepth) unit_00A8(c, 67u, depth + 1u); else { c.pc = 0x003A0BB0u; return; } if (c.pc != 0x003A3288u) [[unlikely]] return; }
L_003A3288:
    set32(c.r[4], ld32((c.r[16].w[0] + 4604u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003A32A0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A32A0u);  if (depth < kMaxDepth) unit_00A8(c, 434u, depth + 1u); else { c.pc = 0x003A32B0u; return; } if (c.pc != 0x003A32A0u) [[unlikely]] return; }
L_003A32A0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003A32B0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    c.r[5].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[4], c.r[18].w[0] + 96u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A32DCu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_00A8(c, 112u, depth + 1u); else { c.pc = 0x003A1130u; return; } if (c.pc != 0x003A32DCu) [[unlikely]] return; }
L_003A32DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A32E4u); st32((c.r[18].w[0] + 4604u), 0u);  if (depth < kMaxDepth) unit_0087(c, 136u, depth + 1u); else { c.pc = 0x0031D080u; return; } if (c.pc != 0x003A32E4u) [[unlikely]] return; }
L_003A32E4:
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A32F0u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0087(c, 298u, depth + 1u); else { c.pc = 0x0031EA30u; return; } if (c.pc != 0x003A32F0u) [[unlikely]] return; }
L_003A32F0:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A32FCu); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0087(c, 301u, depth + 1u); else { c.pc = 0x0031EAC0u; return; } if (c.pc != 0x003A32FCu) [[unlikely]] return; }
L_003A32FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A3304u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0087(c, 304u, depth + 1u); else { c.pc = 0x0031EB50u; return; } if (c.pc != 0x003A3304u) [[unlikely]] return; }
L_003A3304:
    set32(c.r[19], ld32((c.r[20].w[0] + 384u)));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A3318u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0087(c, 308u, depth + 1u); else { c.pc = 0x0031EBE0u; return; } if (c.pc != 0x003A3318u) [[unlikely]] return; }
L_003A3318:
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A3328u); c.r[19].d[0] = c.r[2].d[0] & 255ull;  if (depth < kMaxDepth) unit_0087(c, 311u, depth + 1u); else { c.pc = 0x0031EE20u; return; } if (c.pc != 0x003A3328u) [[unlikely]] return; }
L_003A3328:
    c.r[3].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00420000u);
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.r[2].d[0] = 0ull < c.r[19].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; st8((c.r[1].w[0] + 6440u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_003A3368; } }
    c.r[2].d[0] = c.r[17].sd[0] < 2ll ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003A3368; } }
    c.r[2].d[0] = c.r[17].d[0] ^ 1ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003A3368; } }
    c.r[2].d[0] = c.r[16].sd[0] < 2ll ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 2;
L_003A3368:
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00420000u);
    st8((c.r[1].w[0] + 6448u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[25], ld32((c.r[18].w[0] + 4624u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003A3384u); set32(c.r[4], c.r[18].w[0] + 4624u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003A3384u) [[unlikely]] return; }
L_003A3384:
    set32(c.r[4], 0u + 31u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A3390u); st32((c.r[18].w[0] + 5140u), 0u);  if (depth < kMaxDepth) unit_0076(c, 191u, depth + 1u); else { c.pc = 0x002D9970u; return; } if (c.pc != 0x003A3390u) [[unlikely]] return; }
L_003A3390:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_003A33B0:
    c.f[0] = ld32((c.r[4].w[0] + 44u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[0]);
    c.budget -= 6;
    { set32(c.r[4], c.r[4].w[0] + 96u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003A0D30u | kUnwind; return; } goto L_003A0D30; }
L_003A33D0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A33E4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 386u, depth + 1u); else { c.pc = 0x003A2EB0u; return; } if (c.pc != 0x003A33E4u) [[unlikely]] return; }
L_003A33E4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003A3404; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003A33FCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003A33FCu) [[unlikely]] return; }
L_003A33FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A3404u); set32(c.r[4], 0u + 21u);  if (depth < kMaxDepth) unit_0076(c, 191u, depth + 1u); else { c.pc = 0x002D9970u; return; } if (c.pc != 0x003A3404u) [[unlikely]] return; }
L_003A3404:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003A3420:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A3438u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 318u, depth + 1u); else { c.pc = 0x0012E5E0u; return; } if (c.pc != 0x003A3438u) [[unlikely]] return; }
L_003A3438:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], ld32((c.r[16].w[0] + 5136u)));
    set32(c.r[3], ld32((c.r[1].w[0] + 26392u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[17], c.r[3].w[0] + 624u);  if (t) { goto L_003A3498; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A3454u); set32(c.r[4], 0u + 160u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x003A3454u) [[unlikely]] return; }
L_003A3454:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_003A3468; } }
    set32(c.r[5], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A3468u); set32(c.r[6], 0u + 2u);  if (depth < kMaxDepth) unit_002A(c, 287u, depth + 1u); else { c.pc = 0x001AB200u; return; } if (c.pc != 0x003A3468u) [[unlikely]] return; }
L_003A3468:
    st32((c.r[16].w[0] + 5136u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A3478u); set32(c.r[5], 0u + 10000u);  if (depth < kMaxDepth) unit_002A(c, 5u, depth + 1u); else { c.pc = 0x001A80A0u; return; } if (c.pc != 0x003A3478u) [[unlikely]] return; }
L_003A3478:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A3488u); c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_002A(c, 3u, depth + 1u); else { c.pc = 0x001A8060u; return; } if (c.pc != 0x003A3488u) [[unlikely]] return; }
L_003A3488:
    set32(c.r[4], ld32((c.r[16].w[0] + 5136u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A3498u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 322u, depth + 1u); else { c.pc = 0x00196E30u; return; } if (c.pc != 0x003A3498u) [[unlikely]] return; }
L_003A3498:
    set32(c.r[4], ld32((c.r[16].w[0] + 5136u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003A34ACu); set32(c.r[5], 0u + 171u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003A34ACu) [[unlikely]] return; }
L_003A34AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A34B4u);  if (depth < kMaxDepth) unit_009F(c, 200u, depth + 1u); else { c.pc = 0x0037DCF0u; return; } if (c.pc != 0x003A34B4u) [[unlikely]] return; }
L_003A34B4:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], 0u + 2u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A34C4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_009F(c, 211u, depth + 1u); else { c.pc = 0x0037DE40u; return; } if (c.pc != 0x003A34C4u) [[unlikely]] return; }
L_003A34C4:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A34D0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_009F(c, 186u, depth + 1u); else { c.pc = 0x0037DB10u; return; } if (c.pc != 0x003A34D0u) [[unlikely]] return; }
L_003A34D0:
    st32((c.r[16].w[0] + 68u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    st32((c.r[16].w[0] + 72u), 0u);
    set32(c.r[2], 0u + 15u);
    st32((c.r[16].w[0] + 76u), c.r[3].w[0]);
    set32(c.r[4], c.r[16].w[0] + 32u);
    st32((c.r[16].w[0] + 80u), c.r[2].w[0]);
    set32(c.r[5], c.r[16].w[0] + 68u);
    st32((c.r[16].w[0] + 84u), c.r[2].w[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A34FCu); st32((c.r[16].w[0] + 88u), 0u);  if (depth < kMaxDepth) unit_0049(c, 280u, depth + 1u); else { c.pc = 0x002276C0u; return; } if (c.pc != 0x003A34FCu) [[unlikely]] return; }
L_003A34FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A3504u); set32(c.r[4], c.r[16].w[0] + 96u);  if (depth < kMaxDepth) unit_00A8(c, 97u, depth + 1u); else { c.pc = 0x003A0F80u; return; } if (c.pc != 0x003A3504u) [[unlikely]] return; }
L_003A3504:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003A3520:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x0012E600u | kUnwind; return; } [[clang::musttail]] return unit_000B(c, 319u, depth); }
L_003A3530:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A3544u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 320u, depth + 1u); else { c.pc = 0x0012E610u; return; } if (c.pc != 0x003A3544u) [[unlikely]] return; }
L_003A3544:
    set32(c.r[4], ld32((c.r[16].w[0] + 5136u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x437F0000u);  if (t) { goto L_003A3564; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003A3560u); set32(c.r[5], 0u + 172u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003A3560u) [[unlikely]] return; }
L_003A3560:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    c.budget -= 1;
L_003A3564:
    set32(c.r[2], 0u + 15u);
    st32((c.r[16].w[0] + 68u), c.r[3].w[0]);
    set32(c.r[4], c.r[16].w[0] + 32u);
    st32((c.r[16].w[0] + 72u), c.r[3].w[0]);
    set32(c.r[5], c.r[16].w[0] + 68u);
    st32((c.r[16].w[0] + 76u), 0u);
    st32((c.r[16].w[0] + 80u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 84u), 0u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A358Cu); st32((c.r[16].w[0] + 88u), 0u);  if (depth < kMaxDepth) unit_0049(c, 280u, depth + 1u); else { c.pc = 0x002276C0u; return; } if (c.pc != 0x003A358Cu) [[unlikely]] return; }
L_003A358C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A3594u); set32(c.r[4], c.r[16].w[0] + 96u);  if (depth < kMaxDepth) unit_00A8(c, 98u, depth + 1u); else { c.pc = 0x003A0FA0u; return; } if (c.pc != 0x003A3594u) [[unlikely]] return; }
L_003A3594:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003A35B0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 20u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003A1DA0u | kUnwind; return; } goto L_003A1DA0; }
L_003A35C0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 40u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003A1DA0u | kUnwind; return; } goto L_003A1DA0; }
L_003A35D0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 20u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003A2960u | kUnwind; return; } goto L_003A2960; }
L_003A35E0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 20u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003A1FA0u | kUnwind; return; } goto L_003A1FA0; }
L_003A35F0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 20u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003A33B0u | kUnwind; return; } goto L_003A33B0; }
L_003A3600:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 20u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003A2D40u | kUnwind; return; } goto L_003A2D40; }
L_003A3610:
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
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A3648u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 298u, depth + 1u); else { c.pc = 0x0012E440u; return; } if (c.pc != 0x003A3648u) [[unlikely]] return; }
L_003A3648:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[4], 0u + 608u);
    set32(c.r[2], c.r[2].w[0] - 27584u);
    st32((c.r[20].w[0]), c.r[2].w[0]);
    st32((c.r[20].w[0] + 28u), c.r[19].w[0]);
    st32((c.r[20].w[0] + 32u), c.r[18].w[0]);
    st32((c.r[20].w[0] + 40u), c.r[17].w[0]);
    st32((c.r[20].w[0] + 44u), c.r[16].w[0]);
    st32((c.r[20].w[0] + 24u), 0u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A3674u); st32((c.r[20].w[0] + 36u), 0u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x003A3674u) [[unlikely]] return; }
L_003A3674:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003A3694; } }
    set32(c.r[7], ld32((c.r[20].w[0] + 40u)));
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[8], ld32((c.r[20].w[0] + 44u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A3694u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 507u, depth + 1u); else { c.pc = 0x003A39D0u; return; } if (c.pc != 0x003A3694u) [[unlikely]] return; }
L_003A3694:
    st32((c.r[20].w[0] + 20u), c.r[2].w[0]);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[16], ld32((c.r[20].w[0] + 20u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A36A8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A9(c, 47u, depth + 1u); else { c.pc = 0x003A4600u; return; } if (c.pc != 0x003A36A8u) [[unlikely]] return; }
L_003A36A8:
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003A36B8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003A36B8u) [[unlikely]] return; }
L_003A36B8:
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003A36C8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003A36C8u) [[unlikely]] return; }
L_003A36C8:
    set32(c.r[25], ld32((c.r[20].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003A36D8u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003A36D8u) [[unlikely]] return; }
L_003A36D8:
    c.r[2].d[0] = c.r[20].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_003A3700:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const bool t = c.r[18].d[0] == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003A3794; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 27584u);
    st32((c.r[18].w[0]), c.r[2].w[0]);
    c.budget -= 4;
L_003A3734:
    set32(c.r[2], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 20u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[19], c.r[2].w[0] + 20u);  if (t) { goto L_003A3760; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003A3760; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003A3760u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003A3760u) [[unlikely]] return; }
L_003A3760:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[19].w[0]), 0u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A3734u | kUnwind; return; } goto L_003A3734; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A377Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 300u, depth + 1u); else { c.pc = 0x0012E490u; return; } if (c.pc != 0x003A377Cu) [[unlikely]] return; }
L_003A377C:
    c.r[2].d[0] = c.r[17].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_003A3798; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A3794u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x003A3794u) [[unlikely]] return; }
L_003A3794:
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_003A3798:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003A37C0:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x0012E600u | kUnwind; return; } [[clang::musttail]] return unit_000B(c, 319u, depth); }
L_003A37D0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 36u)));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003A3900; } }
    set32(c.r[17], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 44u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003A3804u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003A3804u) [[unlikely]] return; }
L_003A3804:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003A39AC; } }
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003A381Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003A381Cu) [[unlikely]] return; }
L_003A381C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u + 608u);  if (t) { goto L_003A38E8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A382Cu);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x003A382Cu) [[unlikely]] return; }
L_003A382C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003A384C; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 28u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[6], 0u + 1u);
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A384Cu); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 507u, depth + 1u); else { c.pc = 0x003A39D0u; return; } if (c.pc != 0x003A384Cu) [[unlikely]] return; }
L_003A384C:
    st32((c.r[16].w[0] + 24u), c.r[2].w[0]);
    set32(c.r[17], ld32((c.r[16].w[0] + 24u)));
    set32(c.r[2], 0u + 1u);
    st8((c.r[17].w[0] + 607u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[5], ld32((c.r[16].w[0] + 32u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A3868u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A9(c, 47u, depth + 1u); else { c.pc = 0x003A4600u; return; } if (c.pc != 0x003A3868u) [[unlikely]] return; }
L_003A3868:
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003A3878u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003A3878u) [[unlikely]] return; }
L_003A3878:
    set32(c.r[4], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 208u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_003A388C; } }
    set32(c.r[18], ld32((c.r[2].w[0] + 24u)));
    c.budget -= 1;
L_003A388C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A3894u);  if (depth < kMaxDepth) unit_00A9(c, 46u, depth + 1u); else { c.pc = 0x003A45D0u; return; } if (c.pc != 0x003A3894u) [[unlikely]] return; }
L_003A3894:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A38A4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A9(c, 50u, depth + 1u); else { c.pc = 0x003A4650u; return; } if (c.pc != 0x003A38A4u) [[unlikely]] return; }
L_003A38A4:
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003A38B4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003A38B4u) [[unlikely]] return; }
L_003A38B4:
    set32(c.r[4], ld32((c.r[16].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003A38D8; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003A38D8; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003A38D8u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003A38D8u) [[unlikely]] return; }
L_003A38D8:
    st32((c.r[16].w[0] + 20u), 0u);
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 36u), c.r[3].w[0]);  if (t) { goto L_003A39AC; } }
L_003A38E8:
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003A38F8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003A38F8u) [[unlikely]] return; }
L_003A38F8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_003A39B0; } }
L_003A3900:
    set32(c.r[4], ld32((c.r[16].w[0] + 24u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 44u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003A3914u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003A3914u) [[unlikely]] return; }
L_003A3914:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u + 608u);  if (t) { goto L_003A39AC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A3924u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x003A3924u) [[unlikely]] return; }
L_003A3924:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003A3944; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 28u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[7], ld32((c.r[16].w[0] + 40u)));
    set32(c.r[8], ld32((c.r[16].w[0] + 44u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A3944u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 507u, depth + 1u); else { c.pc = 0x003A39D0u; return; } if (c.pc != 0x003A3944u) [[unlikely]] return; }
L_003A3944:
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[17], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[2], 0u + 1u);
    st8((c.r[17].w[0] + 607u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[5], ld32((c.r[16].w[0] + 32u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A3960u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A9(c, 47u, depth + 1u); else { c.pc = 0x003A4600u; return; } if (c.pc != 0x003A3960u) [[unlikely]] return; }
L_003A3960:
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003A3970u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003A3970u) [[unlikely]] return; }
L_003A3970:
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003A3980u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003A3980u) [[unlikely]] return; }
L_003A3980:
    set32(c.r[4], ld32((c.r[16].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003A39A4; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003A39A4; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003A39A4u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003A39A4u) [[unlikely]] return; }
L_003A39A4:
    st32((c.r[16].w[0] + 24u), 0u);
    st32((c.r[16].w[0] + 36u), 0u);
    c.budget -= 2;
L_003A39AC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_003A39B0:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003A39D0:
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
    set32(c.r[6], 0u + 2u);
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A3A10u); set32(c.r[8], 0u + 5u);  if (depth < kMaxDepth) unit_001B(c, 180u, depth + 1u); else { c.pc = 0x0016D580u; return; } if (c.pc != 0x003A3A10u) [[unlikely]] return; }
L_003A3A10:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[2], c.r[2].w[0] - 27776u);
    set32(c.r[3], c.r[3].w[0] - 27688u);
    st32((c.r[20].w[0]), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    st32((c.r[20].w[0] + 20u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] - 27648u);
    st32((c.r[20].w[0] + 24u), c.r[2].w[0]);
    st32((c.r[20].w[0] + 44u), c.r[18].w[0]);
    st32((c.r[20].w[0] + 576u), 0u);
    c.budget -= 13;
    { const bool t = c.r[19].d[0] != 0ull; st32((c.r[20].w[0] + 580u), 0u);  if (t) { goto L_003A3A7C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A3A4Cu); c.r[4].d[0] = 0ull | 35856ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x001001F0u; return; } if (c.pc != 0x003A3A4Cu) [[unlikely]] return; }
L_003A3A4C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u + 1120u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A3A64u); set32(c.r[8], 0u + 32u);  if (depth < kMaxDepth) unit_0000(c, 94u, depth + 1u); else { c.pc = 0x001008C0u; return; } if (c.pc != 0x003A3A64u) [[unlikely]] return; }
L_003A3A64:
    st32((c.r[20].w[0] + 576u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[20].w[0] + 576u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A3A74u); c.r[5].d[0] = 0ull | 35840ull;  if (depth < kMaxDepth) unit_0010(c, 111u, depth + 1u); else { c.pc = 0x00141670u; return; } if (c.pc != 0x003A3A74u) [[unlikely]] return; }
L_003A3A74:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 556u), c.r[17].w[0]);  if (t) { goto L_003A3A98; } }
L_003A3A7C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A3A84u); set32(c.r[4], 0u + 7408u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x003A3A84u) [[unlikely]] return; }
L_003A3A84:
    st32((c.r[20].w[0] + 580u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[20].w[0] + 580u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A3A94u); set32(c.r[5], 0u + 7408u);  if (depth < kMaxDepth) unit_0010(c, 111u, depth + 1u); else { c.pc = 0x00141670u; return; } if (c.pc != 0x003A3A94u) [[unlikely]] return; }
L_003A3A94:
    st32((c.r[20].w[0] + 556u), c.r[17].w[0]);
    c.budget -= 1;
L_003A3A98:
    set32(c.r[2], 0u + 1u);
    st32((c.r[20].w[0] + 560u), c.r[16].w[0]);
    st8((c.r[20].w[0] + 607u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[20].w[0] + 44u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[2].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_003A3AB4; } }
    st8((c.r[20].w[0] + 564u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_003A3AB4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_003A3AE0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003A3B7C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[2], c.r[2].w[0] - 27776u);
    set32(c.r[3], c.r[3].w[0] - 27688u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    st32((c.r[17].w[0] + 20u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] - 27648u);
    st32((c.r[17].w[0] + 24u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 576u)));
    c.budget -= 12;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003A3B3C; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[2].w[0] - 16u);  if (t) { goto L_003A3B3C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A3B3Cu);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100210u; return; } if (c.pc != 0x003A3B3Cu) [[unlikely]] return; }
L_003A3B3C:
    st32((c.r[17].w[0] + 576u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 580u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003A3B54; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A3B54u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100210u; return; } if (c.pc != 0x003A3B54u) [[unlikely]] return; }
L_003A3B54:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A3B64u); st32((c.r[17].w[0] + 580u), 0u);  if (depth < kMaxDepth) unit_001B(c, 197u, depth + 1u); else { c.pc = 0x0016D740u; return; } if (c.pc != 0x003A3B64u) [[unlikely]] return; }
L_003A3B64:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003A3B80; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A3B7Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x003A3B7Cu) [[unlikely]] return; }
L_003A3B7C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003A3B80:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003A3BA0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 36u)));
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] == 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003A3C68; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + 4112u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x003A0000u < 16384u) { entry = entries_00A8[(t - 0x003A0000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_003A3BDC:
    set32(c.r[2], 0u + 32u);
    set32(c.r[16], 0u + 135u);
    st32((c.r[17].w[0] + 548u), c.r[2].w[0]);
    set32(c.r[2], 0u + 10u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 552u), c.r[2].w[0]);  if (t) { goto L_003A3C68; } }
L_003A3BF4:
    set32(c.r[2], 0u + 8u);
    set32(c.r[16], 0u + 136u);
    st32((c.r[17].w[0] + 548u), c.r[2].w[0]);
    set32(c.r[2], 0u + 10u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 552u), c.r[2].w[0]);  if (t) { goto L_003A3C68; } }
L_003A3C0C:
    set32(c.r[2], 0u + 8u);
    set32(c.r[16], 0u + 137u);
    st32((c.r[17].w[0] + 548u), c.r[2].w[0]);
    set32(c.r[2], 0u + 10u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 552u), c.r[2].w[0]);  if (t) { goto L_003A3C68; } }
L_003A3C24:
    set32(c.r[2], 0u + 8u);
    set32(c.r[16], 0u + 139u);
    st32((c.r[17].w[0] + 548u), c.r[2].w[0]);
    set32(c.r[2], 0u + 10u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 552u), c.r[2].w[0]);  if (t) { goto L_003A3C68; } }
L_003A3C3C:
    set32(c.r[2], 0u + 8u);
    set32(c.r[16], 0u + 140u);
    st32((c.r[17].w[0] + 548u), c.r[2].w[0]);
    set32(c.r[2], 0u + 10u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 552u), c.r[2].w[0]);  if (t) { goto L_003A3C68; } }
L_003A3C54:
    set32(c.r[2], 0u + 8u);
    set32(c.r[16], 0u + 138u);
    st32((c.r[17].w[0] + 548u), c.r[2].w[0]);
    set32(c.r[2], 0u + 10u);
    st32((c.r[17].w[0] + 552u), c.r[2].w[0]);
    c.budget -= 5;
L_003A3C68:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A3C70u); set32(c.r[4], 0u + 124u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x003A3C70u) [[unlikely]] return; }
L_003A3C70:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);  if (t) { goto L_003A3CBC; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43A00000u);
    c.f[14] = ld32((c.r[1].w[0] + 4144u));
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[12] = c.r[3].w[0];
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[5], ld32((c.r[17].w[0] + 216u)));
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42400000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.f[13] = c.r[3].w[0];
    set32(c.r[7], 0u + 830u);
    set32(c.r[8], c.r[8].w[0] + 4048u);
    set32(c.r[9], c.r[9].w[0] + 4080u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[15] = ld32((c.r[1].w[0] + 4136u));
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A3CBCu); c.r[10].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000D(c, 34u, depth + 1u); else { c.pc = 0x00134330u; return; } if (c.pc != 0x003A3CBCu) [[unlikely]] return; }
L_003A3CBC:
    st32((c.r[17].w[0] + 364u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 548u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 552u)));
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], 0u + 352u);  if (t) { goto L_003A3D28; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A3CDCu);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x003A3CDCu) [[unlikely]] return; }
L_003A3CDC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003A3CF8; } }
    set32(c.r[6], ld32((c.r[17].w[0] + 216u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], 0u + 3u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A3CF8u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002A(c, 346u, depth + 1u); else { c.pc = 0x001ABAD0u; return; } if (c.pc != 0x003A3CF8u) [[unlikely]] return; }
L_003A3CF8:
    st32((c.r[17].w[0] + 220u), c.r[2].w[0]);
    set32(c.r[5], c.r[29].w[0] + 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[2], c.r[2].w[0] + 6464u);
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    st128((c.r[5].w[0]) & ~15u, c.r[2]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A3D18u); set32(c.r[4], ld32((c.r[17].w[0] + 220u)));  if (depth < kMaxDepth) unit_002A(c, 357u, depth + 1u); else { c.pc = 0x001ABC00u; return; } if (c.pc != 0x003A3D18u) [[unlikely]] return; }
L_003A3D18:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x429C0000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A3D28u); set32(c.r[4], ld32((c.r[17].w[0] + 220u)));  if (depth < kMaxDepth) unit_002A(c, 358u, depth + 1u); else { c.pc = 0x001ABC10u; return; } if (c.pc != 0x003A3D28u) [[unlikely]] return; }
L_003A3D28:
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 144u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003A3D38u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003A3D38u) [[unlikely]] return; }
L_003A3D38:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003A3D50:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 548u)));
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 3);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A3D88u); set32(c.r[4], c.r[2].w[0] - c.r[3].w[0]);  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x001001F0u; return; } if (c.pc != 0x003A3D88u) [[unlikely]] return; }
L_003A3D88:
    st32((c.r[20].w[0] + 360u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 548u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A3D98u); set32(c.r[4], c.r[2].w[0] << 3);  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x001001F0u; return; } if (c.pc != 0x003A3D98u) [[unlikely]] return; }
L_003A3D98:
    st32((c.r[20].w[0] + 368u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[20].w[0] + 44u)));
    set32(c.r[19], ld32((c.r[20].w[0] + 368u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_003A3DC4; } }
    set32(c.r[3], ld32((c.r[20].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003A3DC0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[18], ld32((c.r[20].w[0] + 576u)));  if (t) { goto L_003A3DC4; } }
L_003A3DC0:
    set32(c.r[18], ld32((c.r[20].w[0] + 580u)));
    c.budget -= 1;
L_003A3DC4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_003A3E98; } }
L_003A3DCC:
    set32(c.r[2], c.r[17].w[0] << 3);
    set32(c.r[5], 0u + 8u);
    set32(c.r[16], c.r[19].w[0] + c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A3DE0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 111u, depth + 1u); else { c.pc = 0x00141670u; return; } if (c.pc != 0x003A3DE0u) [[unlikely]] return; }
L_003A3DE0:
    set32(c.r[3], ld32((c.r[20].w[0] + 36u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00410000u);
    set32(c.r[2], c.r[2].w[0] + 1552u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 9;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003A3E04u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003A3E04u) [[unlikely]] return; }
L_003A3E04:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003A3E58; } }
    set32(c.r[3], ld32((c.r[20].w[0] + 36u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00410000u);
    set32(c.r[2], c.r[2].w[0] + 1584u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 9;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003A3E30u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003A3E30u) [[unlikely]] return; }
L_003A3E30:
    set32(c.r[3], ld32((c.r[20].w[0] + 360u)));
    set32(c.r[4], c.r[17].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[17].w[0]);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], c.r[4].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] - c.r[17].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A3E50u); set32(c.r[4], c.r[3].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_0009(c, 233u, depth + 1u); else { c.pc = 0x00127BE8u; return; } if (c.pc != 0x003A3E50u) [[unlikely]] return; }
L_003A3E50:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[17].w[0] + 1u);  if (t) { goto L_003A3E98; } }
L_003A3E58:
    set32(c.r[2], ld32((c.r[20].w[0] + 44u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], 0u + 757u);  if (t) { goto L_003A3E6C; } }
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_003A3E6C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A3E74u);  if (depth < kMaxDepth) unit_000B(c, 461u, depth + 1u); else { c.pc = 0x0012FD60u; return; } if (c.pc != 0x003A3E74u) [[unlikely]] return; }
L_003A3E74:
    set32(c.r[3], ld32((c.r[20].w[0] + 360u)));
    set32(c.r[4], c.r[17].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[17].w[0]);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], c.r[4].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] - c.r[17].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A3E94u); set32(c.r[4], c.r[3].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_0009(c, 233u, depth + 1u); else { c.pc = 0x00127BE8u; return; } if (c.pc != 0x003A3E94u) [[unlikely]] return; }
L_003A3E94:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_003A3E98:
    set32(c.r[3], ld32((c.r[20].w[0] + 548u)));
    c.r[3].d[0] = c.r[17].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A3DCCu | kUnwind; return; } goto L_003A3DCC; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_003A3ED0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].d[0] = ld8((c.r[4].w[0] + 280u));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003A3F18; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 284u)));
    set32(c.r[3], c.r[2].w[0] - 1u);
    st32((c.r[16].w[0] + 284u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 272u)));
    set32(c.r[2], 0u - c.r[2].w[0]);
    c.r[1].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[4], c.r[16].w[0] + 224u);  if (t) { goto L_003A3F4C; } }
    st32((c.r[16].w[0] + 284u), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 280u), static_cast<std::uint8_t>(0u));  if (t) { goto L_003A3F48; } }
L_003A3F18:
    set32(c.r[2], ld32((c.r[16].w[0] + 284u)));
    set32(c.r[4], c.r[2].w[0] + 1u);
    st32((c.r[16].w[0] + 284u), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 276u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 272u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.r[1].d[0] = c.r[2].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003A3F48; } }
    st32((c.r[16].w[0] + 284u), c.r[2].w[0]);
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 280u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
L_003A3F48:
    set32(c.r[4], c.r[16].w[0] + 224u);
    c.budget -= 1;
L_003A3F4C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A3F54u);  if (depth < kMaxDepth) unit_002A(c, 280u, depth + 1u); else { c.pc = 0x001AB050u; return; } if (c.pc != 0x003A3F54u) [[unlikely]] return; }
L_003A3F54:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 25376u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003A3FFC; } }
    set32(c.r[5], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], 0u + 5u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_003A3FFC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A3F7Cu);  if (depth < kMaxDepth) unit_001A(c, 231u, depth + 1u); else { c.pc = 0x0016A360u; return; } if (c.pc != 0x003A3F7Cu) [[unlikely]] return; }
L_003A3F7C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A3F84u); c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_001A(c, 271u, depth + 1u); else { c.pc = 0x0016A9E0u; return; } if (c.pc != 0x003A3F84u) [[unlikely]] return; }
L_003A3F84:
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != c.r[5].d[0];  if (t) { goto L_003A3FD8; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 40u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_003A3FFC; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 152u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003A3FB0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003A3FB0u) [[unlikely]] return; }
L_003A3FB0:
    set32(c.r[6], ld32((c.r[16].w[0] + 212u)));
    set32(c.r[4], 0u + 1u);
    set32(c.r[7], ld32((c.r[16].w[0] + 216u)));
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A3FCCu); c.r[9].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_001A(c, 267u, depth + 1u); else { c.pc = 0x0016A910u; return; } if (c.pc != 0x003A3FCCu) [[unlikely]] return; }
L_003A3FCC:
    set32(c.r[3], ld32((c.r[16].w[0] + 208u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 36u), 0u);  if (t) { goto L_003A3FFC; } }
L_003A3FD8:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull;  if (t) { goto L_003A3FEC; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 208u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 36u), c.r[5].w[0]);  if (t) { goto L_003A3FFC; } }
L_003A3FEC:
    set32(c.r[2], ld32((c.r[16].w[0] + 208u)));
    set32(c.r[4], 0u + 2u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A3FFCu); st32((c.r[2].w[0] + 36u), c.r[5].w[0]);  if (depth < kMaxDepth) unit_0076(c, 191u, depth + 1u); else { c.pc = 0x002D9970u; return; } if (c.pc != 0x003A3FFCu) [[unlikely]] return; }
L_003A3FFC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
    [[clang::musttail]] return unit_00A9(c, 1u, depth);
}

}
