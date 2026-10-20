#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_00AB[4096] = {
    1, 0, 0, 0, 2, 0, 3, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    6, 0, 0, 0, 7, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 11, 0, 12,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 14, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 17, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 20, 0, 21, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 22, 0, 23, 0, 24, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 28, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 34, 0, 35, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 38, 0, 0, 0, 39, 0, 0, 0, 40, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 45, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 48, 0, 49, 0, 0, 0, 0, 50, 0, 0,
    0, 51, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 53, 0, 0, 0, 0, 0, 54, 0, 0, 55, 0, 56, 0, 0, 0, 0, 0, 0, 0, 57,
    0, 0, 0, 0, 0, 58, 0, 0, 0, 59, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 62, 0, 0, 0,
    0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0,
    0, 65, 0, 0, 66, 0, 67, 0, 68, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0,
    0, 0, 0, 0, 71, 0, 0, 72, 0, 73, 0, 74, 0, 0, 0, 0, 0, 75, 0, 0, 0, 76, 0, 0, 77, 0, 0, 0, 0, 78, 0, 0,
    0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 81, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0,
    0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 93, 0, 0, 0,
    94, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 97,
    0, 0, 0, 0, 0, 98, 0, 99, 0, 100, 0, 0, 101, 0, 102, 0, 0, 103, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 106, 0, 0, 107, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0,
    109, 0, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0,
    114, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 119, 0,
    0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0,
    125, 0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 130, 0, 0,
    0, 0, 131, 0, 0, 0, 132, 0, 0, 0, 133, 0, 0, 0, 134, 0, 0, 0, 0, 135, 0, 136, 0, 0, 0, 137, 0, 0, 138, 0, 0, 0,
    139, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 141, 0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0, 144, 0, 0, 0,
    0, 145, 0, 0, 0, 0, 0, 0, 146, 0, 147, 0, 148, 0, 0, 0, 149, 0, 0, 0, 150, 0, 0, 0, 151, 0, 0, 0, 0, 0, 152, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 153, 0, 154, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0, 156, 0, 0, 0, 0, 0,
    157, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 160, 0, 0, 0, 161, 0, 0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 164, 0, 165,
    0, 166, 0, 167, 0, 0, 168, 0, 169, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 172, 0, 173, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 175, 0, 0, 176, 0, 177, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0,
    0, 179, 0, 0, 0, 0, 0, 180, 0, 0, 181, 0, 0, 182, 0, 0, 0, 0, 0, 183, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 184, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 185, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 186, 0, 0, 0, 0, 187,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 191, 0, 192, 0, 0, 0, 193, 0, 0, 0, 194, 0, 0, 0, 195, 0, 0, 0, 196,
    0, 0, 0, 0, 0, 197, 0, 0, 0, 198, 0, 0, 0, 0, 199, 0, 0, 0, 0, 200, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 202, 0, 203, 0, 0, 0, 0, 204, 0, 0, 0, 0, 0, 0, 0, 0, 0, 205, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 206, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 207, 0, 0, 0, 0, 0, 208, 0, 209, 0, 210, 0,
    211, 0, 0, 0, 0, 212, 0, 213, 0, 0, 0, 214, 0, 215, 0, 0, 0, 0, 0, 0, 216, 0, 0, 217, 0, 0, 0, 0, 0, 0, 0, 0,
    218, 0, 0, 0, 0, 219, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 220, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 0, 0, 0, 222, 0, 0, 0, 0, 0, 223, 0, 0, 0,
    224, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 225, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 226, 0, 0, 0, 0, 227, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 228, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 229, 0, 0, 0, 0, 0, 0, 0, 230, 0, 0, 231, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 232, 0, 0, 0, 0, 0, 0, 0, 0, 233, 0, 0, 0,
    0, 0, 0, 0, 234, 0, 0, 0, 235, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    236, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 237, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 238, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 239, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 240, 0, 0, 0, 0, 0, 0, 241,
    0, 0, 0, 0, 242, 0, 0, 0, 0, 0, 0, 243, 0, 0, 0, 0, 244, 0, 0, 0, 0, 0, 0, 0, 0, 245, 0, 0, 0, 0, 246, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 247, 0, 0, 0, 0, 0, 248, 0,
    0, 0, 0, 0, 249, 0, 0, 0, 0, 0, 0, 250, 0, 0, 0, 0, 0, 0, 0, 0, 251, 0, 0, 0, 252, 0, 0, 0, 253, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 254, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0,
    0, 0, 0, 0, 0, 256, 0, 0, 257, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 258, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 259, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 260, 0, 0, 0, 0, 0, 261, 0, 0, 0,
    0, 0, 0, 0, 262, 0, 0, 0, 0, 263, 0, 0, 264, 0, 0, 0, 0, 0, 0, 0, 0, 0, 265, 0, 0, 0, 0, 266, 0, 0, 0, 267,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 268, 0, 0, 0, 0, 0, 269, 0, 0, 0, 270, 0, 271, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 272, 0, 0, 0, 273, 0, 0, 274, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 275, 0, 0, 0,
    0, 0, 0, 0, 276, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 277, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 278, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 279, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    280, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 281, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 282, 0, 0, 0, 0, 0, 0, 283, 0, 0, 0, 284, 0, 0, 0, 0, 0, 0, 0, 0, 285, 0, 286, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 287, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 288, 0, 0, 0, 0, 0, 0, 289, 0, 0, 0, 0, 290, 0,
    0, 0, 0, 0, 0, 291, 0, 0, 0, 292, 0, 0, 0, 0, 0, 293, 0, 0, 0, 0, 0, 0, 0, 0, 294, 0, 0, 0, 0, 0, 295, 0,
    0, 0, 0, 296, 0, 0, 0, 0, 0, 0, 297, 0, 0, 0, 298, 0, 0, 0, 0, 0, 299, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 300, 0, 301, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    302, 0, 0, 0, 0, 0, 0, 303, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 304, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    305, 0, 0, 0, 0, 0, 306, 0, 0, 0, 0, 0, 0, 307, 0, 0, 0, 0, 0, 0, 308, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 309, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 310, 0, 0, 311, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 312, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 313, 0, 0, 0, 0, 0, 0, 0, 0, 0, 314, 0, 0, 0, 0, 0, 0, 0, 0, 0, 315, 0, 0, 0,
    0, 316, 0, 0, 0, 0, 0, 0, 0, 0, 317, 0, 318, 0, 319, 0, 320, 0, 321, 0, 322, 0, 323, 0, 324, 0, 0, 0, 0, 0, 0, 0,
    0, 325, 0, 0, 326, 0, 0, 0, 0, 0, 0, 0, 327, 0, 0, 0, 0, 0, 0, 0, 0, 328, 0, 0, 329, 0, 0, 0, 0, 0, 0, 0,
    330, 0, 0, 0, 331, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 332, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 333, 0, 0, 0, 0, 0, 0, 0, 0, 334, 0, 0, 335, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 336, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 337, 0, 0, 0, 0, 0, 338, 0, 0, 0, 339, 0, 0, 0, 0, 0, 0, 0, 0, 340, 0, 0,
    341, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 342, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 343, 0, 0, 0, 0, 0, 0, 0, 344, 0, 0, 0, 0, 0, 0, 345, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 346, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 347, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 348, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 349, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 350, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 351, 0, 0, 0, 0, 0, 0, 0, 352, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 353, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 354, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 355, 0, 0, 0, 0, 0, 0, 0, 356, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 357, 0, 0, 0, 0,
    0, 0, 0, 358, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 359, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 360, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 361, 0, 0, 0, 0, 0, 0, 0, 362, 0, 0, 0, 0, 0, 0, 0, 0, 0, 363, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 364, 0,
    0, 0, 0, 0, 0, 0, 365, 0, 0, 0, 0, 0, 0, 366, 0, 0, 0, 0, 0, 0, 367, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 368, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 369, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 370, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 371, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 372, 0, 0, 0, 0, 0, 0, 0, 373, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 374, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 375, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 376, 0, 0, 0, 0, 0, 0, 0, 377, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 378, 0, 0, 0, 0, 0, 0, 0, 379, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 380, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 381, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 382, 0, 0, 0, 0, 0, 0, 0, 383, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 384, 0, 0, 0, 0, 0, 0, 0, 385, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 386, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 387, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    388, 0, 0, 0, 0, 0, 0, 0, 389, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 390, 0, 391, 0, 0, 0, 0, 0,
    392, 0, 0, 0, 0, 0, 0, 0, 0, 393, 0, 0, 0, 0, 394, 0, 0, 0, 0, 0, 0, 0, 395, 0, 0, 0, 0, 0, 0, 0, 396, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 397, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 398, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 399, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 400, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_00AB(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_003AC000;
    case 2u: goto L_003AC010;
    case 3u: goto L_003AC018;
    case 4u: goto L_003AC034;
    case 5u: goto L_003AC050;
    case 6u: goto L_003AC080;
    case 7u: goto L_003AC090;
    case 8u: goto L_003AC09C;
    case 9u: goto L_003AC0C0;
    case 10u: goto L_003AC0DC;
    case 11u: goto L_003AC0F4;
    case 12u: goto L_003AC0FC;
    case 13u: goto L_003AC134;
    case 14u: goto L_003AC144;
    case 15u: goto L_003AC154;
    case 16u: goto L_003AC170;
    case 17u: goto L_003AC19C;
    case 18u: goto L_003AC1A4;
    case 19u: goto L_003AC1D4;
    case 20u: goto L_003AC1DC;
    case 21u: goto L_003AC1E4;
    case 22u: goto L_003AC214;
    case 23u: goto L_003AC21C;
    case 24u: goto L_003AC224;
    case 25u: goto L_003AC240;
    case 26u: goto L_003AC2B4;
    case 27u: goto L_003AC2E0;
    case 28u: goto L_003AC2E8;
    case 29u: goto L_003AC314;
    case 30u: goto L_003AC340;
    case 31u: goto L_003AC348;
    case 32u: goto L_003AC3B4;
    case 33u: goto L_003AC3BC;
    case 34u: goto L_003AC430;
    case 35u: goto L_003AC438;
    case 36u: goto L_003AC454;
    case 37u: goto L_003AC494;
    case 38u: goto L_003AC4A8;
    case 39u: goto L_003AC4B8;
    case 40u: goto L_003AC4C8;
    case 41u: goto L_003AC4E0;
    case 42u: goto L_003AC528;
    case 43u: goto L_003AC538;
    case 44u: goto L_003AC560;
    case 45u: goto L_003AC588;
    case 46u: goto L_003AC598;
    case 47u: goto L_003AC5C0;
    case 48u: goto L_003AC5D8;
    case 49u: goto L_003AC5E0;
    case 50u: goto L_003AC5F4;
    case 51u: goto L_003AC604;
    case 52u: goto L_003AC620;
    case 53u: goto L_003AC630;
    case 54u: goto L_003AC648;
    case 55u: goto L_003AC654;
    case 56u: goto L_003AC65C;
    case 57u: goto L_003AC67C;
    case 58u: goto L_003AC694;
    case 59u: goto L_003AC6A4;
    case 60u: goto L_003AC6AC;
    case 61u: goto L_003AC6E8;
    case 62u: goto L_003AC6F0;
    case 63u: goto L_003AC710;
    case 64u: goto L_003AC764;
    case 65u: goto L_003AC784;
    case 66u: goto L_003AC790;
    case 67u: goto L_003AC798;
    case 68u: goto L_003AC7A0;
    case 69u: goto L_003AC7B8;
    case 70u: goto L_003AC7F0;
    case 71u: goto L_003AC810;
    case 72u: goto L_003AC81C;
    case 73u: goto L_003AC824;
    case 74u: goto L_003AC82C;
    case 75u: goto L_003AC844;
    case 76u: goto L_003AC854;
    case 77u: goto L_003AC860;
    case 78u: goto L_003AC874;
    case 79u: goto L_003AC890;
    case 80u: goto L_003AC8C8;
    case 81u: goto L_003AC8D0;
    case 82u: goto L_003AC8EC;
    case 83u: goto L_003AC944;
    case 84u: goto L_003AC960;
    case 85u: goto L_003AC9B0;
    case 86u: goto L_003AC9E8;
    case 87u: goto L_003ACA20;
    case 88u: goto L_003ACA6C;
    case 89u: goto L_003ACA8C;
    case 90u: goto L_003ACAB0;
    case 91u: goto L_003ACAC0;
    case 92u: goto L_003ACAE0;
    case 93u: goto L_003ACAF0;
    case 94u: goto L_003ACB00;
    case 95u: goto L_003ACB1C;
    case 96u: goto L_003ACB60;
    case 97u: goto L_003ACB7C;
    case 98u: goto L_003ACB94;
    case 99u: goto L_003ACB9C;
    case 100u: goto L_003ACBA4;
    case 101u: goto L_003ACBB0;
    case 102u: goto L_003ACBB8;
    case 103u: goto L_003ACBC4;
    case 104u: goto L_003ACBE0;
    case 105u: goto L_003ACC2C;
    case 106u: goto L_003ACC3C;
    case 107u: goto L_003ACC48;
    case 108u: goto L_003ACC60;
    case 109u: goto L_003ACC80;
    case 110u: goto L_003ACCA0;
    case 111u: goto L_003ACCC0;
    case 112u: goto L_003ACCD4;
    case 113u: goto L_003ACCEC;
    case 114u: goto L_003ACD00;
    case 115u: goto L_003ACD14;
    case 116u: goto L_003ACD2C;
    case 117u: goto L_003ACD40;
    case 118u: goto L_003ACD60;
    case 119u: goto L_003ACD78;
    case 120u: goto L_003ACD90;
    case 121u: goto L_003ACDA8;
    case 122u: goto L_003ACDC0;
    case 123u: goto L_003ACDD4;
    case 124u: goto L_003ACDEC;
    case 125u: goto L_003ACE00;
    case 126u: goto L_003ACE14;
    case 127u: goto L_003ACE2C;
    case 128u: goto L_003ACE40;
    case 129u: goto L_003ACE58;
    case 130u: goto L_003ACE74;
    case 131u: goto L_003ACE88;
    case 132u: goto L_003ACE98;
    case 133u: goto L_003ACEA8;
    case 134u: goto L_003ACEB8;
    case 135u: goto L_003ACECC;
    case 136u: goto L_003ACED4;
    case 137u: goto L_003ACEE4;
    case 138u: goto L_003ACEF0;
    case 139u: goto L_003ACF00;
    case 140u: goto L_003ACF20;
    case 141u: goto L_003ACF30;
    case 142u: goto L_003ACF44;
    case 143u: goto L_003ACF60;
    case 144u: goto L_003ACF70;
    case 145u: goto L_003ACF84;
    case 146u: goto L_003ACFA0;
    case 147u: goto L_003ACFA8;
    case 148u: goto L_003ACFB0;
    case 149u: goto L_003ACFC0;
    case 150u: goto L_003ACFD0;
    case 151u: goto L_003ACFE0;
    case 152u: goto L_003ACFF8;
    case 153u: goto L_003AD024;
    case 154u: goto L_003AD02C;
    case 155u: goto L_003AD058;
    case 156u: goto L_003AD068;
    case 157u: goto L_003AD080;
    case 158u: goto L_003AD0CC;
    case 159u: goto L_003AD0F4;
    case 160u: goto L_003AD11C;
    case 161u: goto L_003AD12C;
    case 162u: goto L_003AD144;
    case 163u: goto L_003AD160;
    case 164u: goto L_003AD174;
    case 165u: goto L_003AD17C;
    case 166u: goto L_003AD184;
    case 167u: goto L_003AD18C;
    case 168u: goto L_003AD198;
    case 169u: goto L_003AD1A0;
    case 170u: goto L_003AD1B8;
    case 171u: goto L_003AD1CC;
    case 172u: goto L_003AD1E4;
    case 173u: goto L_003AD1EC;
    case 174u: goto L_003AD218;
    case 175u: goto L_003AD234;
    case 176u: goto L_003AD240;
    case 177u: goto L_003AD248;
    case 178u: goto L_003AD260;
    case 179u: goto L_003AD284;
    case 180u: goto L_003AD29C;
    case 181u: goto L_003AD2A8;
    case 182u: goto L_003AD2B4;
    case 183u: goto L_003AD2CC;
    case 184u: goto L_003AD310;
    case 185u: goto L_003AD33C;
    case 186u: goto L_003AD368;
    case 187u: goto L_003AD37C;
    case 188u: goto L_003AD3A8;
    case 189u: goto L_003AD3D4;
    case 190u: goto L_003AD3F0;
    case 191u: goto L_003AD434;
    case 192u: goto L_003AD43C;
    case 193u: goto L_003AD44C;
    case 194u: goto L_003AD45C;
    case 195u: goto L_003AD46C;
    case 196u: goto L_003AD47C;
    case 197u: goto L_003AD494;
    case 198u: goto L_003AD4A4;
    case 199u: goto L_003AD4B8;
    case 200u: goto L_003AD4CC;
    case 201u: goto L_003AD4E0;
    case 202u: goto L_003AD510;
    case 203u: goto L_003AD518;
    case 204u: goto L_003AD52C;
    case 205u: goto L_003AD554;
    case 206u: goto L_003AD584;
    case 207u: goto L_003AD5D0;
    case 208u: goto L_003AD5E8;
    case 209u: goto L_003AD5F0;
    case 210u: goto L_003AD5F8;
    case 211u: goto L_003AD600;
    case 212u: goto L_003AD614;
    case 213u: goto L_003AD61C;
    case 214u: goto L_003AD62C;
    case 215u: goto L_003AD634;
    case 216u: goto L_003AD650;
    case 217u: goto L_003AD65C;
    case 218u: goto L_003AD680;
    case 219u: goto L_003AD694;
    case 220u: goto L_003AD740;
    case 221u: goto L_003AD7B0;
    case 222u: goto L_003AD7D8;
    case 223u: goto L_003AD7F0;
    case 224u: goto L_003AD800;
    case 225u: goto L_003AD834;
    case 226u: goto L_003AD89C;
    case 227u: goto L_003AD8B0;
    case 228u: goto L_003AD8F0;
    case 229u: goto L_003AD924;
    case 230u: goto L_003AD944;
    case 231u: goto L_003AD950;
    case 232u: goto L_003AD9CC;
    case 233u: goto L_003AD9F0;
    case 234u: goto L_003ADA10;
    case 235u: goto L_003ADA20;
    case 236u: goto L_003ADA80;
    case 237u: goto L_003ADAC4;
    case 238u: goto L_003ADAF8;
    case 239u: goto L_003ADB74;
    case 240u: goto L_003ADBE0;
    case 241u: goto L_003ADBFC;
    case 242u: goto L_003ADC10;
    case 243u: goto L_003ADC2C;
    case 244u: goto L_003ADC40;
    case 245u: goto L_003ADC64;
    case 246u: goto L_003ADC78;
    case 247u: goto L_003ADCE0;
    case 248u: goto L_003ADCF8;
    case 249u: goto L_003ADD10;
    case 250u: goto L_003ADD2C;
    case 251u: goto L_003ADD50;
    case 252u: goto L_003ADD60;
    case 253u: goto L_003ADD70;
    case 254u: goto L_003ADDBC;
    case 255u: goto L_003ADDF8;
    case 256u: goto L_003ADE14;
    case 257u: goto L_003ADE20;
    case 258u: goto L_003ADE50;
    case 259u: goto L_003ADE98;
    case 260u: goto L_003ADED8;
    case 261u: goto L_003ADEF0;
    case 262u: goto L_003ADF10;
    case 263u: goto L_003ADF24;
    case 264u: goto L_003ADF30;
    case 265u: goto L_003ADF58;
    case 266u: goto L_003ADF6C;
    case 267u: goto L_003ADF7C;
    case 268u: goto L_003ADFB8;
    case 269u: goto L_003ADFD0;
    case 270u: goto L_003ADFE0;
    case 271u: goto L_003ADFE8;
    case 272u: goto L_003AE024;
    case 273u: goto L_003AE034;
    case 274u: goto L_003AE040;
    case 275u: goto L_003AE070;
    case 276u: goto L_003AE090;
    case 277u: goto L_003AE0E0;
    case 278u: goto L_003AE120;
    case 279u: goto L_003AE158;
    case 280u: goto L_003AE180;
    case 281u: goto L_003AE1E8;
    case 282u: goto L_003AE210;
    case 283u: goto L_003AE22C;
    case 284u: goto L_003AE23C;
    case 285u: goto L_003AE260;
    case 286u: goto L_003AE268;
    case 287u: goto L_003AE298;
    case 288u: goto L_003AE2C8;
    case 289u: goto L_003AE2E4;
    case 290u: goto L_003AE2F8;
    case 291u: goto L_003AE314;
    case 292u: goto L_003AE324;
    case 293u: goto L_003AE33C;
    case 294u: goto L_003AE360;
    case 295u: goto L_003AE378;
    case 296u: goto L_003AE38C;
    case 297u: goto L_003AE3A8;
    case 298u: goto L_003AE3B8;
    case 299u: goto L_003AE3D0;
    case 300u: goto L_003AE408;
    case 301u: goto L_003AE410;
    case 302u: goto L_003AE480;
    case 303u: goto L_003AE49C;
    case 304u: goto L_003AE4CC;
    case 305u: goto L_003AE500;
    case 306u: goto L_003AE518;
    case 307u: goto L_003AE534;
    case 308u: goto L_003AE550;
    case 309u: goto L_003AE590;
    case 310u: goto L_003AE5BC;
    case 311u: goto L_003AE5C8;
    case 312u: goto L_003AE624;
    case 313u: goto L_003AE6A0;
    case 314u: goto L_003AE6C8;
    case 315u: goto L_003AE6F0;
    case 316u: goto L_003AE704;
    case 317u: goto L_003AE728;
    case 318u: goto L_003AE730;
    case 319u: goto L_003AE738;
    case 320u: goto L_003AE740;
    case 321u: goto L_003AE748;
    case 322u: goto L_003AE750;
    case 323u: goto L_003AE758;
    case 324u: goto L_003AE760;
    case 325u: goto L_003AE784;
    case 326u: goto L_003AE790;
    case 327u: goto L_003AE7B0;
    case 328u: goto L_003AE7D4;
    case 329u: goto L_003AE7E0;
    case 330u: goto L_003AE800;
    case 331u: goto L_003AE810;
    case 332u: goto L_003AE8C0;
    case 333u: goto L_003AE910;
    case 334u: goto L_003AE934;
    case 335u: goto L_003AE940;
    case 336u: goto L_003AE974;
    case 337u: goto L_003AE9A8;
    case 338u: goto L_003AE9C0;
    case 339u: goto L_003AE9D0;
    case 340u: goto L_003AE9F4;
    case 341u: goto L_003AEA00;
    case 342u: goto L_003AEB30;
    case 343u: goto L_003AED90;
    case 344u: goto L_003AEDB0;
    case 345u: goto L_003AEDCC;
    case 346u: goto L_003AEDF8;
    case 347u: goto L_003AEE68;
    case 348u: goto L_003AEF08;
    case 349u: goto L_003AEF74;
    case 350u: goto L_003AF020;
    case 351u: goto L_003AF054;
    case 352u: goto L_003AF074;
    case 353u: goto L_003AF0D0;
    case 354u: goto L_003AF128;
    case 355u: goto L_003AF198;
    case 356u: goto L_003AF1B8;
    case 357u: goto L_003AF1EC;
    case 358u: goto L_003AF20C;
    case 359u: goto L_003AF268;
    case 360u: goto L_003AF2B8;
    case 361u: goto L_003AF318;
    case 362u: goto L_003AF338;
    case 363u: goto L_003AF360;
    case 364u: goto L_003AF678;
    case 365u: goto L_003AF698;
    case 366u: goto L_003AF6B4;
    case 367u: goto L_003AF6D0;
    case 368u: goto L_003AF740;
    case 369u: goto L_003AF7E0;
    case 370u: goto L_003AF848;
    case 371u: goto L_003AF8E0;
    case 372u: goto L_003AF914;
    case 373u: goto L_003AF934;
    case 374u: goto L_003AF990;
    case 375u: goto L_003AF9E8;
    case 376u: goto L_003AFA58;
    case 377u: goto L_003AFA78;
    case 378u: goto L_003AFAAC;
    case 379u: goto L_003AFACC;
    case 380u: goto L_003AFB28;
    case 381u: goto L_003AFB78;
    case 382u: goto L_003AFBD8;
    case 383u: goto L_003AFBF8;
    case 384u: goto L_003AFC2C;
    case 385u: goto L_003AFC4C;
    case 386u: goto L_003AFCB0;
    case 387u: goto L_003AFD18;
    case 388u: goto L_003AFD80;
    case 389u: goto L_003AFDA0;
    case 390u: goto L_003AFDE0;
    case 391u: goto L_003AFDE8;
    case 392u: goto L_003AFE00;
    case 393u: goto L_003AFE24;
    case 394u: goto L_003AFE38;
    case 395u: goto L_003AFE58;
    case 396u: goto L_003AFE78;
    case 397u: goto L_003AFEBC;
    case 398u: goto L_003AFEF0;
    case 399u: goto L_003AFF50;
    case 400u: goto L_003AFFB0;
    default: bad_entry(c, 0x003AC000u); return;
    }
L_003AC000:
    c.f[13] = c.r[2].w[0];
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003AC010u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003AC010u) [[unlikely]] return; }
L_003AC010:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AC018u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x003AC018u) [[unlikely]] return; }
L_003AC018:
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    st128((c.r[16].w[0] + 48u) & ~15u, c.r[2]);
    st32((c.r[16].w[0] + 60u), c.r[18].w[0]);
    set32(c.r[25], ld32((c.r[16].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003AC034u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003AC034u) [[unlikely]] return; }
L_003AC034:
    set32(c.r[2], ld32((c.r[19].w[0] + 19196u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[7], ld32((c.r[19].w[0] + 19192u)));
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[5], c.r[5].w[0] + 4520u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AC050u); set32(c.r[6], c.r[2].w[0] + 1u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x00127458u; return; } if (c.pc != 0x003AC050u) [[unlikely]] return; }
L_003AC050:
    set32(c.r[3], c.r[29].w[0] + 80u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43390000u);
    st32((c.r[16].w[0] + 352u), c.r[3].w[0]);
    c.f[12] = c.r[2].w[0];
    st32((c.r[16].w[0] + 356u), 0u);
    c.f[14] = 0u;
    set32(c.r[25], ld32((c.r[16].w[0] + 176u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42980000u);
    c.f[13] = c.r[2].w[0];
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 12;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003AC080u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003AC080u) [[unlikely]] return; }
L_003AC080:
    set32(c.r[25], ld32((c.r[16].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003AC090u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003AC090u) [[unlikely]] return; }
L_003AC090:
    set32(c.r[4], c.r[19].w[0] + 18864u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AC09Cu); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A1(c, 142u, depth + 1u); else { c.pc = 0x00385880u; return; } if (c.pc != 0x003AC09Cu) [[unlikely]] return; }
L_003AC09C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_003AC0C0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AC0DCu); set32(c.r[4], ld32((c.r[1].w[0] - 1536u)));  if (depth < kMaxDepth) unit_000F(c, 315u, depth + 1u); else { c.pc = 0x0013F0D0u; return; } if (c.pc != 0x003AC0DCu) [[unlikely]] return; }
L_003AC0DC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003AC104; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 36u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003AC0F4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003AC0F4u) [[unlikely]] return; }
L_003AC0F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AC0FCu); set32(c.r[4], 0u + 401u);  if (depth < kMaxDepth) unit_002C(c, 36u, depth + 1u); else { c.pc = 0x001B0690u; return; } if (c.pc != 0x003AC0FCu) [[unlikely]] return; }
L_003AC0FC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_003AC158; } }
L_003AC104:
    set32(c.r[4], ld32((c.r[16].w[0] + 19180u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_003AC14C; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_003AC13C; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003AC12C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003AC154; } }
L_003AC12C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AC134u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AB(c, 16u, depth + 1u); else { c.pc = 0x003AC170u; return; } if (c.pc != 0x003AC134u) [[unlikely]] return; }
L_003AC134:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003AC154; } }
L_003AC13C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AC144u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AB(c, 25u, depth + 1u); else { c.pc = 0x003AC240u; return; } if (c.pc != 0x003AC144u) [[unlikely]] return; }
L_003AC144:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003AC154; } }
L_003AC14C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AC154u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AB(c, 44u, depth + 1u); else { c.pc = 0x003AC560u; return; } if (c.pc != 0x003AC154u) [[unlikely]] return; }
L_003AC154:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_003AC158:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003AC170:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[1].w[0] - 1536u)));
    c.r[5].d[0] = ld16((c.r[3].w[0] + 4u));
    c.r[3].d[0] = c.r[5].d[0] & 16384ull;
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003AC1AC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AC19Cu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00AB(c, 63u, depth + 1u); else { c.pc = 0x003AC710u; return; } if (c.pc != 0x003AC19Cu) [[unlikely]] return; }
L_003AC19C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AC1A4u); set32(c.r[4], 0u + 402u);  if (depth < kMaxDepth) unit_002C(c, 36u, depth + 1u); else { c.pc = 0x001B0690u; return; } if (c.pc != 0x003AC1A4u) [[unlikely]] return; }
L_003AC1A4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_003AC228; } }
L_003AC1AC:
    c.r[3].d[0] = c.r[5].d[0] & 32768ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[3].d[0] = c.r[5].d[0] & 8192ull;  if (t) { goto L_003AC1EC; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 19184u)));
    set32(c.r[5], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[5].sd[0] >= 0; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003AC1CC; } }
    set32(c.r[5], 0u + 4u);
    c.budget -= 1;
L_003AC1CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AC1D4u);  if (depth < kMaxDepth) unit_00AB(c, 79u, depth + 1u); else { c.pc = 0x003AC890u; return; } if (c.pc != 0x003AC1D4u) [[unlikely]] return; }
L_003AC1D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AC1DCu); set32(c.r[4], 0u + 402u);  if (depth < kMaxDepth) unit_002C(c, 36u, depth + 1u); else { c.pc = 0x001B0690u; return; } if (c.pc != 0x003AC1DCu) [[unlikely]] return; }
L_003AC1DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AC1E4u); set32(c.r[4], c.r[16].w[0] + 18512u);  if (depth < kMaxDepth) unit_002A(c, 362u, depth + 1u); else { c.pc = 0x001ABD00u; return; } if (c.pc != 0x003AC1E4u) [[unlikely]] return; }
L_003AC1E4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003AC224; } }
L_003AC1EC:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003AC224; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 19184u)));
    set32(c.r[5], c.r[2].w[0] + 1u);
    c.r[2].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(5ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003AC20C; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003AC20C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AC214u);  if (depth < kMaxDepth) unit_00AB(c, 79u, depth + 1u); else { c.pc = 0x003AC890u; return; } if (c.pc != 0x003AC214u) [[unlikely]] return; }
L_003AC214:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AC21Cu); set32(c.r[4], 0u + 402u);  if (depth < kMaxDepth) unit_002C(c, 36u, depth + 1u); else { c.pc = 0x001B0690u; return; } if (c.pc != 0x003AC21Cu) [[unlikely]] return; }
L_003AC21C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AC224u); set32(c.r[4], c.r[16].w[0] + 18512u);  if (depth < kMaxDepth) unit_002A(c, 363u, depth + 1u); else { c.pc = 0x001ABD30u; return; } if (c.pc != 0x003AC224u) [[unlikely]] return; }
L_003AC224:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_003AC228:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003AC240:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[3], 0u + 5u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 19200u)));
    set32(c.r[16], ld32((c.r[1].w[0] - 1536u)));
    mmi::div(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[6].d[0] = c.hi.d[0];
    c.budget -= 17;
    { const bool t = c.r[3].d[0] != 0ull; mmi::div(c, 0, c.r[4].w[0], c.r[3].w[0]);  if (t) { goto L_003AC288; } }
    breakpoint(c, 0x003AC284u);
    c.budget -= 1;
L_003AC288:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[3], ld32((c.r[1].w[0] - 1536u)));
    c.r[5].d[0] = c.lo.d[0];
    c.r[3].d[0] = ld16((c.r[3].w[0] + 168u));
    c.r[3].d[0] = c.r[3].d[0] & 4096ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003AC2F0; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_003AC2BC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AC2B4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00AB(c, 63u, depth + 1u); else { c.pc = 0x003AC710u; return; } if (c.pc != 0x003AC2B4u) [[unlikely]] return; }
L_003AC2B4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 19116u), 0u);  if (t) { goto L_003AC2D4; } }
L_003AC2BC:
    set32(c.r[3], ld32((c.r[18].w[0] + 19200u)));
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] - 5u);
    st32((c.r[18].w[0] + 19200u), c.r[3].w[0]);
    st8((c.r[18].w[0] + 19204u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[18].w[0] + 19116u), 0u);
    c.budget -= 6;
L_003AC2D4:
    set32(c.r[4], c.r[18].w[0] + 19056u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AC2E0u); st8((c.r[18].w[0] + 19112u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_002A(c, 280u, depth + 1u); else { c.pc = 0x001AB050u; return; } if (c.pc != 0x003AC2E0u) [[unlikely]] return; }
L_003AC2E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AC2E8u); set32(c.r[4], 0u + 402u);  if (depth < kMaxDepth) unit_002C(c, 36u, depth + 1u); else { c.pc = 0x001B0690u; return; } if (c.pc != 0x003AC2E8u) [[unlikely]] return; }
L_003AC2E8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003AC4B8; } }
L_003AC2F0:
    c.r[4].d[0] = ld16((c.r[16].w[0] + 168u));
    c.r[3].d[0] = c.r[4].d[0] & 16384ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; c.r[3].d[0] = c.r[4].d[0] & 32768ull;  if (t) { goto L_003AC350; } }
    set32(c.r[2], 0u + 5u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[2].d[0]; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_003AC31C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AC314u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_00AB(c, 63u, depth + 1u); else { c.pc = 0x003AC710u; return; } if (c.pc != 0x003AC314u) [[unlikely]] return; }
L_003AC314:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 19116u), 0u);  if (t) { goto L_003AC334; } }
L_003AC31C:
    set32(c.r[3], ld32((c.r[18].w[0] + 19200u)));
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] + 5u);
    st32((c.r[18].w[0] + 19200u), c.r[3].w[0]);
    st8((c.r[18].w[0] + 19204u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[18].w[0] + 19116u), 0u);
    c.budget -= 6;
L_003AC334:
    set32(c.r[4], c.r[18].w[0] + 19056u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AC340u); st8((c.r[18].w[0] + 19112u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_002A(c, 280u, depth + 1u); else { c.pc = 0x001AB050u; return; } if (c.pc != 0x003AC340u) [[unlikely]] return; }
L_003AC340:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AC348u); set32(c.r[4], 0u + 402u);  if (depth < kMaxDepth) unit_002C(c, 36u, depth + 1u); else { c.pc = 0x001B0690u; return; } if (c.pc != 0x003AC348u) [[unlikely]] return; }
L_003AC348:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003AC4B8; } }
L_003AC350:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003AC3C4; } }
    c.budget -= 2;
    { const bool t = c.r[6].sd[0] <= 0;  if (t) { goto L_003AC370; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 19200u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 19200u), c.r[2].w[0]);  if (t) { goto L_003AC39C; } }
L_003AC370:
    set32(c.r[2], ld32((c.r[18].w[0] + 19196u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] >= 0; st32((c.r[18].w[0] + 19196u), c.r[2].w[0]);  if (t) { goto L_003AC38C; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 19192u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[18].w[0] + 19196u), c.r[2].w[0]);
    c.budget -= 3;
L_003AC38C:
    set32(c.r[2], ld32((c.r[18].w[0] + 19200u)));
    c.r[17].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    set32(c.r[2], c.r[2].w[0] + 4u);
    st32((c.r[18].w[0] + 19200u), c.r[2].w[0]);
    c.budget -= 4;
L_003AC39C:
    set32(c.r[2], 0u + 1u);
    set32(c.r[4], c.r[18].w[0] + 19056u);
    st8((c.r[18].w[0] + 19204u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[18].w[0] + 19116u), 0u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AC3B4u); st8((c.r[18].w[0] + 19112u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_002A(c, 280u, depth + 1u); else { c.pc = 0x001AB050u; return; } if (c.pc != 0x003AC3B4u) [[unlikely]] return; }
L_003AC3B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AC3BCu); set32(c.r[4], 0u + 402u);  if (depth < kMaxDepth) unit_002C(c, 36u, depth + 1u); else { c.pc = 0x001B0690u; return; } if (c.pc != 0x003AC3BCu) [[unlikely]] return; }
L_003AC3BC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003AC4B8; } }
L_003AC3C4:
    c.r[3].d[0] = c.r[4].d[0] & 8192ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[1].d[0] = c.r[6].sd[0] < 4ll ? 1ull : 0ull;  if (t) { goto L_003AC440; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003AC3E8; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 19200u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 19200u), c.r[2].w[0]);  if (t) { goto L_003AC418; } }
L_003AC3E8:
    set32(c.r[2], ld32((c.r[18].w[0] + 19196u)));
    set32(c.r[3], c.r[2].w[0] + 1u);
    st32((c.r[18].w[0] + 19196u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 19192u)));
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003AC408; } }
    st32((c.r[18].w[0] + 19196u), 0u);
    c.budget -= 1;
L_003AC408:
    set32(c.r[2], ld32((c.r[18].w[0] + 19200u)));
    c.r[17].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    set32(c.r[2], c.r[2].w[0] - 4u);
    st32((c.r[18].w[0] + 19200u), c.r[2].w[0]);
    c.budget -= 4;
L_003AC418:
    set32(c.r[2], 0u + 1u);
    set32(c.r[4], c.r[18].w[0] + 19056u);
    st8((c.r[18].w[0] + 19204u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[18].w[0] + 19116u), 0u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AC430u); st8((c.r[18].w[0] + 19112u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_002A(c, 280u, depth + 1u); else { c.pc = 0x001AB050u; return; } if (c.pc != 0x003AC430u) [[unlikely]] return; }
L_003AC430:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AC438u); set32(c.r[4], 0u + 402u);  if (depth < kMaxDepth) unit_002C(c, 36u, depth + 1u); else { c.pc = 0x001B0690u; return; } if (c.pc != 0x003AC438u) [[unlikely]] return; }
L_003AC438:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003AC4B8; } }
L_003AC440:
    c.r[3].d[0] = ld8((c.r[18].w[0] + 19204u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003AC4B8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AC454u);  if (depth < kMaxDepth) unit_000F(c, 314u, depth + 1u); else { c.pc = 0x0013F0C0u; return; } if (c.pc != 0x003AC454u) [[unlikely]] return; }
L_003AC454:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003AC4B8; } }
    set32(c.r[5], ld32((c.r[18].w[0] + 19196u)));
    set32(c.r[3], ld32((c.r[18].w[0] + 19200u)));
    set32(c.r[2], ld32((c.r[18].w[0] + 19188u)));
    set32(c.r[4], c.r[5].w[0] << 4);
    set32(c.r[4], c.r[4].w[0] - c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[1].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[4], 0u + 403u);  if (t) { goto L_003AC4B0; } }
    set32(c.r[25], ld32((c.r[18].w[0] + 18272u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003AC494u); set32(c.r[4], c.r[18].w[0] + 18272u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003AC494u) [[unlikely]] return; }
L_003AC494:
    st32((c.r[18].w[0] + 19152u), 0u);
    set32(c.r[2], 0u + 1u);
    st32((c.r[18].w[0] + 19176u), c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AC4A8u); set32(c.r[4], 0u + 400u);  if (depth < kMaxDepth) unit_002C(c, 36u, depth + 1u); else { c.pc = 0x001B0690u; return; } if (c.pc != 0x003AC4A8u) [[unlikely]] return; }
L_003AC4A8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_003AC548; } }
L_003AC4B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AC4B8u);  if (depth < kMaxDepth) unit_002C(c, 36u, depth + 1u); else { c.pc = 0x001B0690u; return; } if (c.pc != 0x003AC4B8u) [[unlikely]] return; }
L_003AC4B8:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_003AC4C8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AC4C8u);  if (depth < kMaxDepth) unit_00AB(c, 84u, depth + 1u); else { c.pc = 0x003AC960u; return; } if (c.pc != 0x003AC4C8u) [[unlikely]] return; }
L_003AC4C8:
    c.r[3].d[0] = ld8((c.r[18].w[0] + 19204u));
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003AC4E4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AC4E0u);  if (depth < kMaxDepth) unit_000F(c, 319u, depth + 1u); else { c.pc = 0x0013F110u; return; } if (c.pc != 0x003AC4E0u) [[unlikely]] return; }
L_003AC4E0:
    c.r[3].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 1;
L_003AC4E4:
    c.r[16].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_003AC4F8; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_003AC544; } }
L_003AC4F8:
    set32(c.r[5], ld32((c.r[18].w[0] + 19196u)));
    set32(c.r[3], ld32((c.r[18].w[0] + 19200u)));
    set32(c.r[2], ld32((c.r[18].w[0] + 19188u)));
    set32(c.r[4], c.r[5].w[0] << 4);
    set32(c.r[4], c.r[4].w[0] - c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[1].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[1].d[0] == 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_003AC530; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AC528u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AB(c, 87u, depth + 1u); else { c.pc = 0x003ACA20u; return; } if (c.pc != 0x003AC528u) [[unlikely]] return; }
L_003AC528:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003AC538; } }
L_003AC530:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AC538u);  if (depth < kMaxDepth) unit_00AB(c, 90u, depth + 1u); else { c.pc = 0x003ACAB0u; return; } if (c.pc != 0x003AC538u) [[unlikely]] return; }
L_003AC538:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_003AC544; } }
    st8((c.r[18].w[0] + 19204u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_003AC544:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_003AC548:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003AC560:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[17], ld32((c.r[1].w[0] - 1536u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AC588u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 314u, depth + 1u); else { c.pc = 0x0013F0C0u; return; } if (c.pc != 0x003AC588u) [[unlikely]] return; }
L_003AC588:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u + 402u);  if (t) { goto L_003AC664; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AC598u);  if (depth < kMaxDepth) unit_002C(c, 36u, depth + 1u); else { c.pc = 0x001B0690u; return; } if (c.pc != 0x003AC598u) [[unlikely]] return; }
L_003AC598:
    set32(c.r[3], ld32((c.r[16].w[0] + 18984u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00420000u);  if (t) { goto L_003AC60C; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00420000u);
    c.r[2].d[0] = ld8((c.r[1].w[0] + 7236u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u + 403u);  if (t) { goto L_003AC5C8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AC5C0u);  if (depth < kMaxDepth) unit_002C(c, 36u, depth + 1u); else { c.pc = 0x001B0690u; return; } if (c.pc != 0x003AC5C0u) [[unlikely]] return; }
L_003AC5C0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_003AC6F4; } }
L_003AC5C8:
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003AC5D8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003AC5D8u) [[unlikely]] return; }
L_003AC5D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AC5E0u);  if (depth < kMaxDepth) unit_0087(c, 136u, depth + 1u); else { c.pc = 0x0031D080u; return; } if (c.pc != 0x003AC5E0u) [[unlikely]] return; }
L_003AC5E0:
    set32(c.r[16], ld32((c.r[2].w[0] + 384u)));
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AC5F4u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0087(c, 186u, depth + 1u); else { c.pc = 0x0031D5D0u; return; } if (c.pc != 0x003AC5F4u) [[unlikely]] return; }
L_003AC5F4:
    set32(c.r[2], c.r[16].w[0] - 1u);
    set32(c.r[4], 0u + 400u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AC604u); st32((c.r[17].w[0] + 384u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_002C(c, 36u, depth + 1u); else { c.pc = 0x001B0690u; return; } if (c.pc != 0x003AC604u) [[unlikely]] return; }
L_003AC604:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003AC6F0; } }
L_003AC60C:
    c.r[2].d[0] = ld8((c.r[1].w[0] + 7224u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u + 403u);  if (t) { goto L_003AC628; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AC620u);  if (depth < kMaxDepth) unit_002C(c, 36u, depth + 1u); else { c.pc = 0x001B0690u; return; } if (c.pc != 0x003AC620u) [[unlikely]] return; }
L_003AC620:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003AC6F0; } }
L_003AC628:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AC630u);  if (depth < kMaxDepth) unit_0087(c, 136u, depth + 1u); else { c.pc = 0x0031D080u; return; } if (c.pc != 0x003AC630u) [[unlikely]] return; }
L_003AC630:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[2].w[0] + 384u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[17], c.r[2].w[0] - 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AC648u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0087(c, 186u, depth + 1u); else { c.pc = 0x0031D5D0u; return; } if (c.pc != 0x003AC648u) [[unlikely]] return; }
L_003AC648:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AC654u); st32((c.r[18].w[0] + 384u), c.r[17].w[0]);  if (depth < kMaxDepth) unit_00AB(c, 93u, depth + 1u); else { c.pc = 0x003ACAF0u; return; } if (c.pc != 0x003AC654u) [[unlikely]] return; }
L_003AC654:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AC65Cu); set32(c.r[4], 0u + 400u);  if (depth < kMaxDepth) unit_002C(c, 36u, depth + 1u); else { c.pc = 0x001B0690u; return; } if (c.pc != 0x003AC65Cu) [[unlikely]] return; }
L_003AC65C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003AC6F0; } }
L_003AC664:
    c.r[4].d[0] = ld16((c.r[17].w[0] + 4u));
    c.r[3].d[0] = c.r[4].d[0] & 4096ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; c.r[3].d[0] = c.r[4].d[0] & 32768ull;  if (t) { goto L_003AC6B4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AC67Cu);  if (depth < kMaxDepth) unit_0087(c, 136u, depth + 1u); else { c.pc = 0x0031D080u; return; } if (c.pc != 0x003AC67Cu) [[unlikely]] return; }
L_003AC67C:
    set32(c.r[3], ld32((c.r[2].w[0] + 384u)));
    set32(c.r[2], 0u + 35u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003AC69C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AC694u); set32(c.r[4], 0u + 403u);  if (depth < kMaxDepth) unit_002C(c, 36u, depth + 1u); else { c.pc = 0x001B0690u; return; } if (c.pc != 0x003AC694u) [[unlikely]] return; }
L_003AC694:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003AC6F0; } }
L_003AC69C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AC6A4u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00AB(c, 63u, depth + 1u); else { c.pc = 0x003AC710u; return; } if (c.pc != 0x003AC6A4u) [[unlikely]] return; }
L_003AC6A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AC6ACu); set32(c.r[4], 0u + 402u);  if (depth < kMaxDepth) unit_002C(c, 36u, depth + 1u); else { c.pc = 0x001B0690u; return; } if (c.pc != 0x003AC6ACu) [[unlikely]] return; }
L_003AC6AC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003AC6F0; } }
L_003AC6B4:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003AC6C8; } }
    c.r[3].d[0] = c.r[4].d[0] & 8192ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003AC6F0; } }
L_003AC6C8:
    set32(c.r[2], ld32((c.r[16].w[0] + 18984u)));
    set32(c.r[4], c.r[16].w[0] + 18880u);
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    st32((c.r[16].w[0] + 18984u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 18940u), 0u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AC6E8u); st8((c.r[16].w[0] + 18936u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_002A(c, 280u, depth + 1u); else { c.pc = 0x001AB050u; return; } if (c.pc != 0x003AC6E8u) [[unlikely]] return; }
L_003AC6E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AC6F0u); set32(c.r[4], 0u + 402u);  if (depth < kMaxDepth) unit_002C(c, 36u, depth + 1u); else { c.pc = 0x001B0690u; return; } if (c.pc != 0x003AC6F0u) [[unlikely]] return; }
L_003AC6F0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_003AC6F4:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003AC710:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00420000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[3], c.r[3].w[0] + 7248u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[7], c.r[29].w[0] + 32u);
    st32((c.r[4].w[0] + 19180u), c.r[5].w[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    ld128((c.r[3].w[0]) & ~15u, c.r[6]);
    set32(c.r[3], 0u + 2u);
    c.budget -= 12;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; st128((c.r[7].w[0]) & ~15u, c.r[6]);  if (t) { goto L_003AC84C; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_003AC7C0; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_003AC75C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_003AC878; } }
L_003AC75C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AC764u);  if (depth < kMaxDepth) unit_00AB(c, 90u, depth + 1u); else { c.pc = 0x003ACAB0u; return; } if (c.pc != 0x003AC764u) [[unlikely]] return; }
L_003AC764:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x430C0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42580000u);
    c.f[12] = c.r[2].w[0];
    st32((c.r[29].w[0] + 36u), c.r[3].w[0]);
    set32(c.r[4], c.r[16].w[0] + 18512u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AC784u); set32(c.r[6], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_002A(c, 359u, depth + 1u); else { c.pc = 0x001ABC20u; return; } if (c.pc != 0x003AC784u) [[unlikely]] return; }
L_003AC784:
    set32(c.r[4], c.r[16].w[0] + 18512u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AC790u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_002A(c, 361u, depth + 1u); else { c.pc = 0x001ABCF0u; return; } if (c.pc != 0x003AC790u) [[unlikely]] return; }
L_003AC790:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AC798u); set32(c.r[4], c.r[16].w[0] + 18512u);  if (depth < kMaxDepth) unit_002A(c, 362u, depth + 1u); else { c.pc = 0x001ABD00u; return; } if (c.pc != 0x003AC798u) [[unlikely]] return; }
L_003AC798:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AC7A0u); set32(c.r[4], c.r[16].w[0] + 18512u);  if (depth < kMaxDepth) unit_002A(c, 363u, depth + 1u); else { c.pc = 0x001ABD30u; return; } if (c.pc != 0x003AC7A0u) [[unlikely]] return; }
L_003AC7A0:
    set32(c.r[2], 0u - 1u);
    set32(c.r[4], c.r[16].w[0] + 18880u);
    st32((c.r[16].w[0] + 18984u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 18940u), 0u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AC7B8u); st8((c.r[16].w[0] + 18936u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_002A(c, 280u, depth + 1u); else { c.pc = 0x001AB050u; return; } if (c.pc != 0x003AC7B8u) [[unlikely]] return; }
L_003AC7B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003AC874; } }
L_003AC7C0:
    set32(c.r[6], ld32((c.r[16].w[0] + 19196u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 19200u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 19188u)));
    set32(c.r[5], c.r[6].w[0] << 4);
    set32(c.r[5], c.r[5].w[0] - c.r[6].w[0]);
    set32(c.r[5], c.r[5].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.r[1].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[1].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x435C0000u);  if (t) { goto L_003AC7F4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AC7F0u);  if (depth < kMaxDepth) unit_00AB(c, 87u, depth + 1u); else { c.pc = 0x003ACA20u; return; } if (c.pc != 0x003AC7F0u) [[unlikely]] return; }
L_003AC7F0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x435C0000u);
    c.budget -= 1;
L_003AC7F4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x434F0000u);
    c.f[12] = c.r[2].w[0];
    st32((c.r[29].w[0] + 36u), c.r[3].w[0]);
    set32(c.r[4], c.r[16].w[0] + 18512u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AC810u); set32(c.r[6], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_002A(c, 359u, depth + 1u); else { c.pc = 0x001ABC20u; return; } if (c.pc != 0x003AC810u) [[unlikely]] return; }
L_003AC810:
    set32(c.r[4], c.r[16].w[0] + 18512u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AC81Cu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_002A(c, 361u, depth + 1u); else { c.pc = 0x001ABCF0u; return; } if (c.pc != 0x003AC81Cu) [[unlikely]] return; }
L_003AC81C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AC824u); set32(c.r[4], c.r[16].w[0] + 18512u);  if (depth < kMaxDepth) unit_002A(c, 362u, depth + 1u); else { c.pc = 0x001ABD00u; return; } if (c.pc != 0x003AC824u) [[unlikely]] return; }
L_003AC824:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AC82Cu); set32(c.r[4], c.r[16].w[0] + 18512u);  if (depth < kMaxDepth) unit_002A(c, 363u, depth + 1u); else { c.pc = 0x001ABD30u; return; } if (c.pc != 0x003AC82Cu) [[unlikely]] return; }
L_003AC82C:
    set32(c.r[2], 0u - 1u);
    set32(c.r[4], c.r[16].w[0] + 18880u);
    st32((c.r[16].w[0] + 18984u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 18940u), 0u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AC844u); st8((c.r[16].w[0] + 18936u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_002A(c, 280u, depth + 1u); else { c.pc = 0x001AB050u; return; } if (c.pc != 0x003AC844u) [[unlikely]] return; }
L_003AC844:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003AC874; } }
L_003AC84C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AC854u);  if (depth < kMaxDepth) unit_00AB(c, 90u, depth + 1u); else { c.pc = 0x003ACAB0u; return; } if (c.pc != 0x003AC854u) [[unlikely]] return; }
L_003AC854:
    set32(c.r[4], c.r[16].w[0] + 18512u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AC860u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002A(c, 361u, depth + 1u); else { c.pc = 0x001ABCF0u; return; } if (c.pc != 0x003AC860u) [[unlikely]] return; }
L_003AC860:
    st32((c.r[16].w[0] + 18984u), 0u);
    set32(c.r[4], c.r[16].w[0] + 18880u);
    st32((c.r[16].w[0] + 18940u), 0u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AC874u); st8((c.r[16].w[0] + 18936u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_002A(c, 280u, depth + 1u); else { c.pc = 0x001AB050u; return; } if (c.pc != 0x003AC874u) [[unlikely]] return; }
L_003AC874:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_003AC878:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003AC890:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00470000u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    set32(c.r[3], c.r[5].w[0] << 3);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    set32(c.r[2], c.r[2].w[0] + 4484u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[4].w[0] + 19184u), c.r[5].w[0]);
    set32(c.r[19], ld32((c.r[2].w[0])));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AC8C8u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0087(c, 136u, depth + 1u); else { c.pc = 0x0031D080u; return; } if (c.pc != 0x003AC8C8u) [[unlikely]] return; }
L_003AC8C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AC8D0u); c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_009F(c, 224u, depth + 1u); else { c.pc = 0x0037DF50u; return; } if (c.pc != 0x003AC8D0u) [[unlikely]] return; }
L_003AC8D0:
    set32(c.r[6], ld32((c.r[18].w[0] + 272u)));
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AC8ECu); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_009F(c, 261u, depth + 1u); else { c.pc = 0x0037E350u; return; } if (c.pc != 0x003AC8ECu) [[unlikely]] return; }
L_003AC8EC:
    set32(c.r[3], ld32((c.r[17].w[0] + 744u)));
    set32(c.r[2], 0u + 30u);
    st32((c.r[16].w[0] + 19188u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 19188u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);  if (t) { goto L_003AC908; } }
    breakpoint(c, 0x003AC904u);
    c.budget -= 1;
L_003AC908:
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], 0u + 30u);
    st32((c.r[16].w[0] + 19192u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 19188u)));
    mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.hi.d[0];
    c.budget -= 10;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003AC93C; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 19192u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[16].w[0] + 19192u), c.r[2].w[0]);
    c.budget -= 3;
L_003AC93C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AC944u); st32((c.r[16].w[0] + 19196u), 0u);  if (depth < kMaxDepth) unit_00AB(c, 84u, depth + 1u); else { c.pc = 0x003AC960u; return; } if (c.pc != 0x003AC944u) [[unlikely]] return; }
L_003AC944:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003AC960:
    set32(c.r[29], c.r[29].w[0] - 96u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00470000u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    set32(c.r[3], c.r[3].w[0] + 4484u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[5], ld32((c.r[4].w[0] + 19184u)));
    set32(c.r[4], ld32((c.r[4].w[0] + 19196u)));
    set32(c.r[5], c.r[5].w[0] << 3);
    set32(c.r[5], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[19], ld32((c.r[5].w[0])));
    set32(c.r[3], c.r[4].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    c.budget -= 20;
    { const bool t = 0ull == 0ull; set32(c.r[18], c.r[3].w[0] << 1);  if (t) { goto L_003AC9F4; } }
L_003AC9B0:
    set32(c.r[5], c.r[18].w[0] + c.r[17].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    set32(c.r[3], c.r[3].w[0] << 5);
    set32(c.r[4], c.r[20].w[0] + c.r[3].w[0]);
    st8((c.r[4].w[0] + 628u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[20].w[0] + 19188u)));
    c.r[1].d[0] = c.r[5].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[16], c.r[4].w[0] + 628u);  if (t) { goto L_003AC9F0; } }
    set32(c.r[4], c.r[4].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AC9E8u); c.r[6].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AA(c, 377u, depth + 1u); else { c.pc = 0x003AB330u; return; } if (c.pc != 0x003AC9E8u) [[unlikely]] return; }
L_003AC9E8:
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_003AC9F0:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_003AC9F4:
    c.r[3].d[0] = c.r[17].d[0] < static_cast<std::uint64_t>(30ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], c.r[17].w[0] << 3);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AC9B0u | kUnwind; return; } goto L_003AC9B0; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_003ACA20:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00470000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    set32(c.r[3], c.r[3].w[0] + 4484u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[6], ld32((c.r[4].w[0] + 19184u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[4].w[0] + 19196u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 19200u)));
    set32(c.r[4], c.r[6].w[0] << 3);
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[5].w[0] << 4);
    set32(c.r[18], ld32((c.r[4].w[0])));
    set32(c.r[3], c.r[3].w[0] - c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 1);
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ACA6Cu); set32(c.r[17], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0087(c, 136u, depth + 1u); else { c.pc = 0x0031D080u; return; } if (c.pc != 0x003ACA6Cu) [[unlikely]] return; }
L_003ACA6C:
    set32(c.r[9], ld32((c.r[16].w[0] + 19172u)));
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ACA8Cu); c.r[10].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0087(c, 247u, depth + 1u); else { c.pc = 0x0031DFB0u; return; } if (c.pc != 0x003ACA8Cu) [[unlikely]] return; }
L_003ACA8C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003ACAB0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ACAC0u);  if (depth < kMaxDepth) unit_0087(c, 136u, depth + 1u); else { c.pc = 0x0031D080u; return; } if (c.pc != 0x003ACAC0u) [[unlikely]] return; }
L_003ACAC0:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ACAE0u); c.r[10].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0087(c, 247u, depth + 1u); else { c.pc = 0x0031DFB0u; return; } if (c.pc != 0x003ACAE0u) [[unlikely]] return; }
L_003ACAE0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003ACAF0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ACB00u);  if (depth < kMaxDepth) unit_0087(c, 136u, depth + 1u); else { c.pc = 0x0031D080u; return; } if (c.pc != 0x003ACB00u) [[unlikely]] return; }
L_003ACB00:
    set32(c.r[5], ld32((c.r[2].w[0] + 388u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_003ACB14; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_003ACB20; } }
L_003ACB14:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ACB1Cu);  if (depth < kMaxDepth) unit_0087(c, 290u, depth + 1u); else { c.pc = 0x0031E800u; return; } if (c.pc != 0x003ACB1Cu) [[unlikely]] return; }
L_003ACB1C:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_003ACB20:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00420000u);  if (t) { goto L_003ACB40; } }
    set32(c.r[3], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00420000u);
    st8((c.r[1].w[0] + 7224u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00420000u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 7236u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_003ACB4C; } }
L_003ACB40:
    st8((c.r[1].w[0] + 7224u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00420000u);
    st8((c.r[1].w[0] + 7236u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
L_003ACB4C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003ACB60:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[5].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ACB7Cu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_000B(c, 298u, depth + 1u); else { c.pc = 0x0012E440u; return; } if (c.pc != 0x003ACB7Cu) [[unlikely]] return; }
L_003ACB7C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[4], c.r[17].w[0] + 20u);
    set32(c.r[2], c.r[2].w[0] - 26896u);
    set32(c.r[5], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ACB94u); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A2(c, 159u, depth + 1u); else { c.pc = 0x00389750u; return; } if (c.pc != 0x003ACB94u) [[unlikely]] return; }
L_003ACB94:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ACB9Cu); st32((c.r[17].w[0] + 248u), 0u);  if (depth < kMaxDepth) unit_0087(c, 136u, depth + 1u); else { c.pc = 0x0031D080u; return; } if (c.pc != 0x003ACB9Cu) [[unlikely]] return; }
L_003ACB9C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ACBA4u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0087(c, 283u, depth + 1u); else { c.pc = 0x0031E690u; return; } if (c.pc != 0x003ACBA4u) [[unlikely]] return; }
L_003ACBA4:
    c.r[2].d[0] = ld8((c.r[2].w[0] + 14u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ACBB0u); c.r[4].d[0] = c.r[2].d[0] & 15ull;  if (depth < kMaxDepth) unit_009F(c, 84u, depth + 1u); else { c.pc = 0x0037CF10u; return; } if (c.pc != 0x003ACBB0u) [[unlikely]] return; }
L_003ACBB0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ACBB8u); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_009F(c, 200u, depth + 1u); else { c.pc = 0x0037DCF0u; return; } if (c.pc != 0x003ACBB8u) [[unlikely]] return; }
L_003ACBB8:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ACBC4u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_009F(c, 179u, depth + 1u); else { c.pc = 0x0037D9B0u; return; } if (c.pc != 0x003ACBC4u) [[unlikely]] return; }
L_003ACBC4:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003ACBE0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003ACC60; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[2], c.r[2].w[0] - 26896u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 248u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003ACC2C; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003ACC2C; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003ACC2Cu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003ACC2Cu) [[unlikely]] return; }
L_003ACC2C:
    set32(c.r[4], c.r[17].w[0] + 20u);
    set32(c.r[5], 0u - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ACC3Cu); st32((c.r[17].w[0] + 248u), 0u);  if (depth < kMaxDepth) unit_00A2(c, 197u, depth + 1u); else { c.pc = 0x00389B20u; return; } if (c.pc != 0x003ACC3Cu) [[unlikely]] return; }
L_003ACC3C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ACC48u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 300u, depth + 1u); else { c.pc = 0x0012E490u; return; } if (c.pc != 0x003ACC48u) [[unlikely]] return; }
L_003ACC48:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003ACC64; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ACC60u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x003ACC60u) [[unlikely]] return; }
L_003ACC60:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003ACC64:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003ACC80:
    set32(c.r[4], c.r[4].w[0] + 20u);
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0];  c.pc = t; if (t - 0x003AC000u < 16384u) { entry = entries_00AB[(t - 0x003AC000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_003ACCA0:
    set32(c.r[3], ld32((c.r[4].w[0] + 248u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003ACCB0; } }
    c.r[2].d[0] = ld8((c.r[3].w[0] + 137u));
    c.budget -= 1;
L_003ACCB0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003ACCC0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ACCD4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_009F(c, 80u, depth + 1u); else { c.pc = 0x0037CE90u; return; } if (c.pc != 0x003ACCD4u) [[unlikely]] return; }
L_003ACCD4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003ACCEC; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003ACCECu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003ACCECu) [[unlikely]] return; }
L_003ACCEC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003ACD00:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ACD14u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AB(c, 110u, depth + 1u); else { c.pc = 0x003ACCA0u; return; } if (c.pc != 0x003ACD14u) [[unlikely]] return; }
L_003ACD14:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003ACD2C; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003ACD2Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003ACD2Cu) [[unlikely]] return; }
L_003ACD2C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003ACD40:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 44u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003ACD60u); set32(c.r[4], c.r[16].w[0] + 20u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003ACD60u) [[unlikely]] return; }
L_003ACD60:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003ACDA8; } }
    set32(c.r[25], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003ACD78u); set32(c.r[4], c.r[16].w[0] + 20u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003ACD78u) [[unlikely]] return; }
L_003ACD78:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003ACD98; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003ACD90u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003ACD90u) [[unlikely]] return; }
L_003ACD90:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_003ACDAC; } }
L_003ACD98:
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 36u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003ACDA8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003ACDA8u) [[unlikely]] return; }
L_003ACDA8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_003ACDAC:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003ACDC0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ACDD4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AB(c, 110u, depth + 1u); else { c.pc = 0x003ACCA0u; return; } if (c.pc != 0x003ACDD4u) [[unlikely]] return; }
L_003ACDD4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003ACDEC; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003ACDECu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003ACDECu) [[unlikely]] return; }
L_003ACDEC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003ACE00:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ACE14u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AB(c, 110u, depth + 1u); else { c.pc = 0x003ACCA0u; return; } if (c.pc != 0x003ACE14u) [[unlikely]] return; }
L_003ACE14:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003ACE2C; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003ACE2Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003ACE2Cu) [[unlikely]] return; }
L_003ACE2C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003ACE40:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ACE58u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_000B(c, 318u, depth + 1u); else { c.pc = 0x0012E5E0u; return; } if (c.pc != 0x003ACE58u) [[unlikely]] return; }
L_003ACE58:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], ld32((c.r[17].w[0] + 248u)));
    set32(c.r[3], ld32((c.r[1].w[0] + 26392u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[3].w[0] + 624u);  if (t) { goto L_003ACEB8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ACE74u); set32(c.r[4], 0u + 160u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x003ACE74u) [[unlikely]] return; }
L_003ACE74:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_003ACE88; } }
    set32(c.r[5], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ACE88u); set32(c.r[6], 0u + 2u);  if (depth < kMaxDepth) unit_002A(c, 287u, depth + 1u); else { c.pc = 0x001AB200u; return; } if (c.pc != 0x003ACE88u) [[unlikely]] return; }
L_003ACE88:
    st32((c.r[17].w[0] + 248u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ACE98u); set32(c.r[5], 0u + 10000u);  if (depth < kMaxDepth) unit_002A(c, 5u, depth + 1u); else { c.pc = 0x001A80A0u; return; } if (c.pc != 0x003ACE98u) [[unlikely]] return; }
L_003ACE98:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ACEA8u); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_002A(c, 3u, depth + 1u); else { c.pc = 0x001A8060u; return; } if (c.pc != 0x003ACEA8u) [[unlikely]] return; }
L_003ACEA8:
    set32(c.r[4], ld32((c.r[17].w[0] + 248u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ACEB8u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 322u, depth + 1u); else { c.pc = 0x00196E30u; return; } if (c.pc != 0x003ACEB8u) [[unlikely]] return; }
L_003ACEB8:
    set32(c.r[4], ld32((c.r[17].w[0] + 248u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003ACECCu); set32(c.r[5], 0u + 171u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003ACECCu) [[unlikely]] return; }
L_003ACECC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ACED4u);  if (depth < kMaxDepth) unit_009F(c, 200u, depth + 1u); else { c.pc = 0x0037DCF0u; return; } if (c.pc != 0x003ACED4u) [[unlikely]] return; }
L_003ACED4:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], 0u + 2u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ACEE4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_009F(c, 211u, depth + 1u); else { c.pc = 0x0037DE40u; return; } if (c.pc != 0x003ACEE4u) [[unlikely]] return; }
L_003ACEE4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ACEF0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_009F(c, 186u, depth + 1u); else { c.pc = 0x0037DB10u; return; } if (c.pc != 0x003ACEF0u) [[unlikely]] return; }
L_003ACEF0:
    set32(c.r[25], ld32((c.r[17].w[0] + 20u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003ACF00u); set32(c.r[4], c.r[17].w[0] + 20u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003ACF00u) [[unlikely]] return; }
L_003ACF00:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003ACF20:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x0012E600u | kUnwind; return; } [[clang::musttail]] return unit_000B(c, 319u, depth); }
L_003ACF30:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ACF44u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 320u, depth + 1u); else { c.pc = 0x0012E610u; return; } if (c.pc != 0x003ACF44u) [[unlikely]] return; }
L_003ACF44:
    set32(c.r[4], ld32((c.r[16].w[0] + 248u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003ACF60; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003ACF60u); set32(c.r[5], 0u + 172u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003ACF60u) [[unlikely]] return; }
L_003ACF60:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003ACF70:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ACF84u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 321u, depth + 1u); else { c.pc = 0x0012E630u; return; } if (c.pc != 0x003ACF84u) [[unlikely]] return; }
L_003ACF84:
    set32(c.r[4], ld32((c.r[16].w[0] + 248u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003ACFA0; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003ACFA0u); set32(c.r[5], 0u + 172u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003ACFA0u) [[unlikely]] return; }
L_003ACFA0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ACFA8u);  if (depth < kMaxDepth) unit_0087(c, 136u, depth + 1u); else { c.pc = 0x0031D080u; return; } if (c.pc != 0x003ACFA8u) [[unlikely]] return; }
L_003ACFA8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ACFB0u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0087(c, 161u, depth + 1u); else { c.pc = 0x0031D350u; return; } if (c.pc != 0x003ACFB0u) [[unlikely]] return; }
L_003ACFB0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003ACFC0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 20u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003ABE20u | kUnwind; return; } [[clang::musttail]] return unit_00AA(c, 482u, depth); }
L_003ACFD0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 20u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003AB710u | kUnwind; return; } [[clang::musttail]] return unit_00AA(c, 409u, depth); }
L_003ACFE0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[5], 0u + 57u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ACFF8u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 29u, depth + 1u); else { c.pc = 0x00140690u; return; } if (c.pc != 0x003ACFF8u) [[unlikely]] return; }
L_003ACFF8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[2], c.r[2].w[0] - 26672u);
    set32(c.r[4], 0u + 1u);
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 20u), 0u);
    st32((c.r[16].w[0] + 24u), 0u);
    st32((c.r[16].w[0] + 28u), 0u);
    set32(c.r[2], ld32((c.r[1].w[0] + 3840u)));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AD024u); st32((c.r[29].w[0] + 44u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x003AD024u) [[unlikely]] return; }
L_003AD024:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AD02Cu); set32(c.r[4], 0u + 80u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x003AD02Cu) [[unlikely]] return; }
L_003AD02C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u + 10752u);  if (t) { goto L_003AD058; } }
    set32(c.r[3], 0u + 15311u);
    st16((c.r[29].w[0] + 40u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    st16((c.r[29].w[0] + 42u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[5], c.r[5].w[0] + 4544u);
    set32(c.r[6], c.r[29].w[0] + 40u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AD058u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_002A(c, 7u, depth + 1u); else { c.pc = 0x001A80E0u; return; } if (c.pc != 0x003AD058u) [[unlikely]] return; }
L_003AD058:
    st32((c.r[16].w[0] + 12u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 16u), 0u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AD068u); set32(c.r[4], ld32((c.r[29].w[0] + 44u)));  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x003AD068u) [[unlikely]] return; }
L_003AD068:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003AD080:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003AD144; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[2], c.r[2].w[0] - 26672u);
    st32((c.r[17].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 20u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003AD0CC; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003AD0CC; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003AD0CCu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003AD0CCu) [[unlikely]] return; }
L_003AD0CC:
    st32((c.r[17].w[0] + 20u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003AD0F4; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003AD0F4; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003AD0F4u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003AD0F4u) [[unlikely]] return; }
L_003AD0F4:
    st32((c.r[17].w[0] + 12u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 16u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003AD11C; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003AD11C; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003AD11Cu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003AD11Cu) [[unlikely]] return; }
L_003AD11C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AD12Cu); st32((c.r[17].w[0] + 16u), 0u);  if (depth < kMaxDepth) unit_0010(c, 31u, depth + 1u); else { c.pc = 0x00140700u; return; } if (c.pc != 0x003AD12Cu) [[unlikely]] return; }
L_003AD12C:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003AD148; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AD144u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x003AD144u) [[unlikely]] return; }
L_003AD144:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003AD148:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003AD160:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AD174u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 59u, depth + 1u); else { c.pc = 0x00140BF0u; return; } if (c.pc != 0x003AD174u) [[unlikely]] return; }
L_003AD174:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AD17Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x003AD17Cu) [[unlikely]] return; }
L_003AD17C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AD184u); set32(c.r[4], 0u + 255u);  if (depth < kMaxDepth) unit_002C(c, 23u, depth + 1u); else { c.pc = 0x001B0420u; return; } if (c.pc != 0x003AD184u) [[unlikely]] return; }
L_003AD184:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AD18Cu);  if (depth < kMaxDepth) unit_0010(c, 59u, depth + 1u); else { c.pc = 0x00140BF0u; return; } if (c.pc != 0x003AD18Cu) [[unlikely]] return; }
L_003AD18C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AD198u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_0010(c, 87u, depth + 1u); else { c.pc = 0x00141260u; return; } if (c.pc != 0x003AD198u) [[unlikely]] return; }
L_003AD198:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AD1A0u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_002B(c, 465u, depth + 1u); else { c.pc = 0x001AF560u; return; } if (c.pc != 0x003AD1A0u) [[unlikely]] return; }
L_003AD1A0:
    set32(c.r[2], 0u + 10752u);
    set32(c.r[4], 0u + 48u);
    st32((c.r[29].w[0] + 40u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 32u), 0u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AD1B8u); st32((c.r[29].w[0] + 36u), 0u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x003AD1B8u) [[unlikely]] return; }
L_003AD1B8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_003AD1CC; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AD1CCu); set32(c.r[6], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_002C(c, 41u, depth + 1u); else { c.pc = 0x001B0720u; return; } if (c.pc != 0x003AD1CCu) [[unlikely]] return; }
L_003AD1CC:
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003AD1E4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003AD1E4u) [[unlikely]] return; }
L_003AD1E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AD1ECu);  if (depth < kMaxDepth) unit_0011(c, 139u, depth + 1u); else { c.pc = 0x00146880u; return; } if (c.pc != 0x003AD1ECu) [[unlikely]] return; }
L_003AD1EC:
    c.r[2].d[0] = c.r[2].d[0] ^ 2ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003AD220; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 20u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[5], c.r[5].w[0] + 4560u);
    set32(c.r[25], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003AD218u); c.r[6].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003AD218u) [[unlikely]] return; }
L_003AD218:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_003AD238; } }
L_003AD220:
    set32(c.r[4], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[5], 0u + 9u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AD234u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002C(c, 66u, depth + 1u); else { c.pc = 0x001B0C20u; return; } if (c.pc != 0x003AD234u) [[unlikely]] return; }
L_003AD234:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003AD238:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AD240u);  if (depth < kMaxDepth) unit_0016(c, 293u, depth + 1u); else { c.pc = 0x0015A8F0u; return; } if (c.pc != 0x003AD240u) [[unlikely]] return; }
L_003AD240:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AD248u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0016(c, 293u, depth + 1u); else { c.pc = 0x0015A8F0u; return; } if (c.pc != 0x003AD248u) [[unlikely]] return; }
L_003AD248:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003AD260:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 16u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003AD33C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AD284u); set32(c.r[4], ld32((c.r[16].w[0] + 12u)));  if (depth < kMaxDepth) unit_0029(c, 351u, depth + 1u); else { c.pc = 0x001A7FE0u; return; } if (c.pc != 0x003AD284u) [[unlikely]] return; }
L_003AD284:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);  if (t) { goto L_003AD33C; } }
    set32(c.r[4], 0u + 1u);
    set32(c.r[2], ld32((c.r[1].w[0] + 3840u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AD29Cu); st32((c.r[29].w[0] + 60u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x003AD29Cu) [[unlikely]] return; }
L_003AD29C:
    set32(c.r[4], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AD2A8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002A(c, 3u, depth + 1u); else { c.pc = 0x001A8060u; return; } if (c.pc != 0x003AD2A8u) [[unlikely]] return; }
L_003AD2A8:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AD2B4u); set32(c.r[4], 0u + 272u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x003AD2B4u) [[unlikely]] return; }
L_003AD2B4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003AD2CC; } }
    set32(c.r[3], ld32((c.r[17].w[0])));
    c.r[5].d[0] = ld64((c.r[3].w[0] + 16u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AD2CCu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 188u, depth + 1u); else { c.pc = 0x0015ED60u; return; } if (c.pc != 0x003AD2CCu) [[unlikely]] return; }
L_003AD2CC:
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[4], ld32((c.r[16].w[0] + 16u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43E60000u);
    c.f[12] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43C70000u);
    c.f[13] = c.r[2].w[0];
    st32((c.r[4].w[0] + 16u), c.r[3].w[0]);
    c.r[2].d[0] = 0ull | 65535ull;
    st32((c.r[4].w[0] + 20u), c.r[3].w[0]);
    c.f[0] = c.r[2].w[0];
    st32((c.r[4].w[0] + 24u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 17;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003AD310u); c.f[14] = fp::cvt_s_w(c.f[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003AD310u) [[unlikely]] return; }
L_003AD310:
    set32(c.r[4], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[2], 0u + 255u);
    set32(c.r[3], 0u + 12289u);
    st32((c.r[4].w[0] + 48u), c.r[2].w[0]);
    st32((c.r[4].w[0] + 52u), c.r[2].w[0]);
    st32((c.r[4].w[0] + 56u), c.r[2].w[0]);
    st32((c.r[4].w[0] + 60u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 16u)));
    st64((c.r[2].w[0] + 248u), c.r[3].d[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AD33Cu); set32(c.r[4], ld32((c.r[29].w[0] + 60u)));  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x003AD33Cu) [[unlikely]] return; }
L_003AD33C:
    set32(c.r[4], ld32((c.r[16].w[0] + 24u)));
    set32(c.r[3], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 5u);  if (t) { goto L_003AD354; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; c.r[1].d[0] = c.r[4].sd[0] < 4ll ? 1ull : 0ull;  if (t) { goto L_003AD3B0; } }
L_003AD354:
    set32(c.r[4], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003AD368u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003AD368u) [[unlikely]] return; }
L_003AD368:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_003AD384; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AD37Cu); set32(c.r[4], ld32((c.r[16].w[0] + 20u)));  if (depth < kMaxDepth) unit_002C(c, 58u, depth + 1u); else { c.pc = 0x001B0B50u; return; } if (c.pc != 0x003AD37Cu) [[unlikely]] return; }
L_003AD37C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_003AD3D8; } }
L_003AD384:
    set32(c.r[4], ld32((c.r[16].w[0] + 24u)));
    set32(c.r[3], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_003AD3D4; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003AD3A8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003AD3A8u) [[unlikely]] return; }
L_003AD3A8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003AD3D4; } }
L_003AD3B0:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003AD3D4; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003AD3D4; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003AD3D4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003AD3D4u) [[unlikely]] return; }
L_003AD3D4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_003AD3D8:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003AD3F0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 28u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[4].w[0] + 28u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(7ll) ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[1].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003AD634; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + 4592u);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x003AC000u < 16384u) { entry = entries_00AB[(t - 0x003AC000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_003AD434:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AD43Cu);  if (depth < kMaxDepth) unit_002A(c, 135u, depth + 1u); else { c.pc = 0x001A9560u; return; } if (c.pc != 0x003AD43Cu) [[unlikely]] return; }
L_003AD43C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003AD634; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AD44Cu);  if (depth < kMaxDepth) unit_00AA(c, 252u, depth + 1u); else { c.pc = 0x003AA380u; return; } if (c.pc != 0x003AD44Cu) [[unlikely]] return; }
L_003AD44C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003AD634; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AD45Cu);  if (depth < kMaxDepth) unit_009E(c, 76u, depth + 1u); else { c.pc = 0x00378BC0u; return; } if (c.pc != 0x003AD45Cu) [[unlikely]] return; }
L_003AD45C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003AD634; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AD46Cu);  if (depth < kMaxDepth) unit_002A(c, 133u, depth + 1u); else { c.pc = 0x001A9520u; return; } if (c.pc != 0x003AD46Cu) [[unlikely]] return; }
L_003AD46C:
    set32(c.r[3], 0u + 1u);
    st32((c.r[16].w[0] + 24u), c.r[3].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 28u), 0u);  if (t) { goto L_003AD634; } }
L_003AD47C:
    set32(c.r[3], ld32((c.r[16].w[0] + 28u)));
    c.r[1].d[0] = c.r[3].sd[0] < 11ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_003AD634; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AD494u);  if (depth < kMaxDepth) unit_00AB(c, 163u, depth + 1u); else { c.pc = 0x003AD160u; return; } if (c.pc != 0x003AD494u) [[unlikely]] return; }
L_003AD494:
    st32((c.r[16].w[0] + 28u), 0u);
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 24u), c.r[3].w[0]);  if (t) { goto L_003AD634; } }
L_003AD4A4:
    set32(c.r[4], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003AD4B8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003AD4B8u) [[unlikely]] return; }
L_003AD4B8:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_003AD634; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AD4CCu); set32(c.r[4], ld32((c.r[16].w[0] + 12u)));  if (depth < kMaxDepth) unit_0029(c, 351u, depth + 1u); else { c.pc = 0x001A7FE0u; return; } if (c.pc != 0x003AD4CCu) [[unlikely]] return; }
L_003AD4CC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], 0u + 3u);  if (t) { goto L_003AD634; } }
    st32((c.r[16].w[0] + 24u), c.r[3].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 28u), 0u);  if (t) { goto L_003AD634; } }
L_003AD4E0:
    set32(c.r[3], ld32((c.r[16].w[0] + 28u)));
    c.r[3].d[0] = c.r[3].sd[0] < 60ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003AD634; } }
    st32((c.r[16].w[0] + 28u), 0u);
    set32(c.r[2], 0u + 4u);
    st32((c.r[16].w[0] + 24u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003AD510u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003AD510u) [[unlikely]] return; }
L_003AD510:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_003AD638; } }
L_003AD518:
    set32(c.r[4], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003AD52Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003AD52Cu) [[unlikely]] return; }
L_003AD52C:
    set32(c.r[3], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 3u);  if (t) { goto L_003AD540; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);  if (t) { goto L_003AD564; } }
L_003AD540:
    set32(c.r[4], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003AD554u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003AD554u) [[unlikely]] return; }
L_003AD554:
    set32(c.r[3], 0u + 6u);
    st32((c.r[16].w[0] + 24u), c.r[3].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 28u), 0u);  if (t) { goto L_003AD634; } }
L_003AD564:
    set32(c.r[3], ld32((c.r[1].w[0] - 1536u)));
    c.r[3].d[0] = ld16((c.r[3].w[0] + 4u));
    c.r[3].d[0] = c.r[3].d[0] & 2048ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], 0u + 5u);  if (t) { goto L_003AD634; } }
    st32((c.r[16].w[0] + 24u), c.r[3].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 28u), 0u);  if (t) { goto L_003AD634; } }
L_003AD584:
    set32(c.r[4], ld32((c.r[16].w[0] + 28u)));
    set32(c.r[3], 0u + 128u);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[4], c.r[3].w[0] - c.r[4].w[0]);
    c.budget -= 6;
    { const bool t = c.r[4].sd[0] >= 0;  if (t) { goto L_003AD5A0; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003AD5A0:
    set32(c.r[3], ld32((c.r[16].w[0] + 20u)));
    st32((c.r[3].w[0] + 32u), c.r[4].w[0]);
    st32((c.r[3].w[0] + 36u), c.r[4].w[0]);
    st32((c.r[3].w[0] + 40u), c.r[4].w[0]);
    st32((c.r[3].w[0] + 44u), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 28u)));
    c.r[1].d[0] = c.r[3].sd[0] < 41ll ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[3], 0u + 6u);  if (t) { goto L_003AD634; } }
    st32((c.r[16].w[0] + 24u), c.r[3].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 28u), 0u);  if (t) { goto L_003AD634; } }
L_003AD5D0:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_003AD5E8; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003AD5E8u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003AD5E8u) [[unlikely]] return; }
L_003AD5E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AD5F0u); set32(c.r[4], 0u + 255u);  if (depth < kMaxDepth) unit_002C(c, 23u, depth + 1u); else { c.pc = 0x001B0420u; return; } if (c.pc != 0x003AD5F0u) [[unlikely]] return; }
L_003AD5F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AD5F8u);  if (depth < kMaxDepth) unit_0010(c, 59u, depth + 1u); else { c.pc = 0x00140BF0u; return; } if (c.pc != 0x003AD5F8u) [[unlikely]] return; }
L_003AD5F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AD600u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x003AD600u) [[unlikely]] return; }
L_003AD600:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[4], 0u + 1u);
    set32(c.r[2], ld32((c.r[1].w[0] + 3840u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AD614u); st32((c.r[29].w[0] + 44u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x003AD614u) [[unlikely]] return; }
L_003AD614:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AD61Cu); set32(c.r[4], 0u + 24u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x003AD61Cu) [[unlikely]] return; }
L_003AD61C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_003AD62C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AD62Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000D(c, 306u, depth + 1u); else { c.pc = 0x001364B0u; return; } if (c.pc != 0x003AD62Cu) [[unlikely]] return; }
L_003AD62C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AD634u); set32(c.r[4], ld32((c.r[29].w[0] + 44u)));  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x003AD634u) [[unlikely]] return; }
L_003AD634:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_003AD638:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003AD650:
    c.r[6].d[0] = 0ull + 0ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[4], c.r[4].w[0] + 7264u);
    c.budget -= 3;
L_003AD65C:
    set32(c.r[3], c.r[6].w[0] << 3);
    set32(c.r[5], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[6], c.r[6].w[0] + 1u);
    st16((c.r[5].w[0] + 2u), static_cast<std::uint16_t>(0u));
    c.r[3].d[0] = c.r[6].sd[0] < 22ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[5].w[0] + 4u), 0u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AD65Cu | kUnwind; return; } goto L_003AD65C; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003AD680:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00420000u);
    c.r[9].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[3].w[0] + 7264u);  if (t) { goto L_003AD714; } }
L_003AD694:
    set32(c.r[7], c.r[3].w[0] + c.r[6].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[7].w[0])));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { goto L_003AD710; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_003AD6E4; } }
    set32(c.r[2], ld32((c.r[7].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[2].d[0]; c.r[9].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_003AD710; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00420000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[3], c.r[3].w[0] + 7266u);
    set32(c.r[2], c.r[2].w[0] + 7268u);
    set32(c.r[5], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[3], c.r[2].w[0] + c.r[6].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0])));
    c.r[4].d[0] = c.r[2].d[0] ^ 1ull;
    st16((c.r[5].w[0]), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0]), 0u);  if (t) { goto L_003AD7A8; } }
L_003AD6E4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00420000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[3], c.r[3].w[0] + 7266u);
    set32(c.r[2], c.r[2].w[0] + 7268u);
    set32(c.r[5], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[3], c.r[2].w[0] + c.r[6].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0])));
    c.r[4].d[0] = c.r[2].d[0] ^ 1ull;
    st16((c.r[5].w[0]), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0]), 0u);  if (t) { goto L_003AD7A8; } }
L_003AD710:
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.budget -= 1;
L_003AD714:
    c.r[2].d[0] = c.r[8].sd[0] < 22ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[6], c.r[8].w[0] << 3);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AD694u | kUnwind; return; } goto L_003AD694; } }
    c.r[2].d[0] = c.r[9].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x00420000u);  if (t) { goto L_003AD734; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003AD7A8; } }
L_003AD734:
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[3].w[0] + 7264u);  if (t) { goto L_003AD798; } }
L_003AD740:
    set32(c.r[7], c.r[3].w[0] + c.r[6].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[7].w[0])));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { goto L_003AD794; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[7].w[0] + 2u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003AD794; } }
    set32(c.r[2], ld32((c.r[7].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003AD794; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00420000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[3], c.r[3].w[0] + 7266u);
    set32(c.r[2], c.r[2].w[0] + 7268u);
    set32(c.r[7], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[3], c.r[2].w[0] + c.r[6].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[7].w[0])));
    c.r[4].d[0] = c.r[2].d[0] ^ 1ull;
    st16((c.r[7].w[0]), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0]), c.r[5].w[0]);  if (t) { goto L_003AD7A8; } }
L_003AD794:
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.budget -= 1;
L_003AD798:
    c.r[2].d[0] = c.r[8].sd[0] < 22ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[6], c.r[8].w[0] << 3);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AD740u | kUnwind; return; } goto L_003AD740; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003AD7A8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003AD7B0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 26400u)));
    c.budget -= 8;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[7], c.r[29].w[0] + 24u);  if (t) { goto L_003AD7F0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AD7D8u);  if (depth < kMaxDepth) unit_002B(c, 59u, depth + 1u); else { c.pc = 0x001AC6D0u; return; } if (c.pc != 0x003AD7D8u) [[unlikely]] return; }
L_003AD7D8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003AD7F0; } }
    c.r[5].d[0] = ld8((c.r[29].w[0] + 27u));
    c.r[6].d[0] = ld8((c.r[29].w[0] + 30u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AD7F0u); c.r[4].d[0] = ld8((c.r[29].w[0] + 31u));  if (depth < kMaxDepth) unit_0079(c, 32u, depth + 1u); else { c.pc = 0x002E4590u; return; } if (c.pc != 0x003AD7F0u) [[unlikely]] return; }
L_003AD7F0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003AD800:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[1].w[0] + 26400u)));
    c.budget -= 10;
    { const bool t = c.r[4].d[0] == 0ull; c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_003AD89C; } }
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AD834u); set32(c.r[7], c.r[29].w[0] + 72u);  if (depth < kMaxDepth) unit_002B(c, 59u, depth + 1u); else { c.pc = 0x001AC6D0u; return; } if (c.pc != 0x003AD834u) [[unlikely]] return; }
L_003AD834:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003AD89C; } }
    c.r[4].d[0] = ld8((c.r[29].w[0] + 78u));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003AD89C; } }
    set32(c.r[2], 0u - 1u);
    set32(c.r[7], c.r[29].w[0] + 62u);
    st8((c.r[29].w[0] + 56u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], 0u + 8192u);
    st16((c.r[7].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[2], 0u + 64u);
    st8((c.r[29].w[0] + 59u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[6], c.r[29].w[0] + 64u);
    set32(c.r[2], 0u + 127u);
    st8((c.r[29].w[0] + 60u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[29].w[0] + 61u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st16((c.r[7].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    st32((c.r[6].w[0]), 0u);
    c.r[2].d[0] = ld8((c.r[29].w[0] + 75u));
    st8((c.r[29].w[0] + 58u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[29].w[0] + 57u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st16((c.r[7].w[0]), static_cast<std::uint16_t>(c.r[16].w[0]));
    st32((c.r[6].w[0]), c.r[17].w[0]);
    c.r[4].d[0] = ld8((c.r[29].w[0] + 79u));
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AD89Cu); set32(c.r[5], c.r[29].w[0] + 56u);  if (depth < kMaxDepth) unit_0079(c, 28u, depth + 1u); else { c.pc = 0x002E4430u; return; } if (c.pc != 0x003AD89Cu) [[unlikely]] return; }
L_003AD89C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003AD8B0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    c.r[3].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], ld32((c.r[1].w[0] + 26400u)));
    c.budget -= 13;
    { const bool t = c.r[4].d[0] == 0ull; c.r[18].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_003AD9CC; } }
    c.r[6].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AD8F0u); set32(c.r[7], c.r[29].w[0] + 104u);  if (depth < kMaxDepth) unit_002B(c, 59u, depth + 1u); else { c.pc = 0x001AC6D0u; return; } if (c.pc != 0x003AD8F0u) [[unlikely]] return; }
L_003AD8F0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[16], c.r[29].w[0] + 111u);  if (t) { goto L_003AD9CC; } }
    set32(c.r[3], 0u + 6u);
    c.r[4].d[0] = ld8((c.r[16].w[0]));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[17], 0u + 8192u);  if (t) { goto L_003AD92C; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], 0u + 1u);
    set32(c.r[4], ld32((c.r[1].w[0] + 31520u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_003AD92C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AD924u);  if (depth < kMaxDepth) unit_002B(c, 98u, depth + 1u); else { c.pc = 0x001ACCE0u; return; } if (c.pc != 0x003AD924u) [[unlikely]] return; }
L_003AD924:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003AD9CC; } }
L_003AD92C:
    c.r[4].d[0] = ld8((c.r[16].w[0]));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_003AD958; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AD944u);  if (depth < kMaxDepth) unit_0010(c, 15u, depth + 1u); else { c.pc = 0x00140210u; return; } if (c.pc != 0x003AD944u) [[unlikely]] return; }
L_003AD944:
    set32(c.r[5], 0u + 16383u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AD950u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0006(c, 228u, depth + 1u); else { c.pc = 0x0011B928u; return; } if (c.pc != 0x003AD950u) [[unlikely]] return; }
L_003AD950:
    c.r[17].d[0] = c.r[2].d[0] << 32;
    c.r[17].d[0] = static_cast<std::uint64_t>(c.r[17].sd[0] >> 32);
    c.budget -= 2;
L_003AD958:
    c.r[5].d[0] = ld8((c.r[29].w[0] + 110u));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_003AD9CC; } }
    set32(c.r[2], 0u - 1u);
    set32(c.r[8], c.r[29].w[0] + 94u);
    st8((c.r[29].w[0] + 88u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[4], 0u + 8192u);
    st16((c.r[8].w[0]), static_cast<std::uint16_t>(c.r[4].w[0]));
    set32(c.r[2], 0u + 64u);
    st8((c.r[29].w[0] + 91u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[6], c.r[29].w[0] + 92u);
    set32(c.r[3], 0u + 127u);
    set32(c.r[7], c.r[29].w[0] + 96u);
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], 0u + 2u);
    st8((c.r[29].w[0] + 93u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st16((c.r[8].w[0]), static_cast<std::uint16_t>(c.r[4].w[0]));
    st32((c.r[7].w[0]), 0u);
    c.r[3].d[0] = ld8((c.r[29].w[0] + 107u));
    st8((c.r[29].w[0] + 90u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[29].w[0] + 89u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[7].w[0]), c.r[19].w[0]);
    st16((c.r[8].w[0]), static_cast<std::uint16_t>(c.r[17].w[0]));
    c.r[3].d[0] = ld8((c.r[16].w[0]));
    c.budget -= 23;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[4].d[0] = c.r[3].d[0] & 255ull;  if (t) { goto L_003AD9C4; } }
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[18].w[0]));
    c.budget -= 1;
L_003AD9C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AD9CCu); set32(c.r[5], c.r[29].w[0] + 88u);  if (depth < kMaxDepth) unit_0079(c, 30u, depth + 1u); else { c.pc = 0x002E44C0u; return; } if (c.pc != 0x003AD9CCu) [[unlikely]] return; }
L_003AD9CC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_003AD9F0:
    c.r[2].d[0] = c.r[4].sd[0] < 11ll ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003ADA04; } }
    c.r[2].d[0] = c.r[4].sd[0] < 17ll ? 1ull : 0ull;
    c.budget -= 1;
L_003ADA04:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003ADA10:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; return; }
L_003ADA20:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x46000000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[1] = c.r[3].w[0];
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::mul(c.f[1], c.f[12]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[7].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003ADA54; } }
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[6], c.f[1]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003ADA70; } }
L_003ADA54:
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[6], c.f[1]);
    c.r[6].d[0] = c.r[6].d[0] | c.r[2].d[0];
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 7;
L_003ADA70:
    c.budget -= 2;
    { c.r[5].d[0] = c.r[7].d[0] + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x003AD800u | kUnwind; return; } goto L_003AD800; }
L_003ADA80:
    set32(c.r[29], c.r[29].w[0] - 112u);
    set32(c.r[2], 0u + 66u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 12;
    { const bool t = c.r[19].d[0] != c.r[2].d[0]; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_003ADAB4; } }
    set32(c.r[19], 0u + 67u);
    c.budget -= 1;
L_003ADAB4:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ADAC4u); c.r[17].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00AB(c, 218u, depth + 1u); else { c.pc = 0x003AD680u; return; } if (c.pc != 0x003ADAC4u) [[unlikely]] return; }
L_003ADAC4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[16], 0u + 127u);  if (t) { goto L_003ADAD4; } }
    c.r[17].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    set32(c.r[16], 0u + 127u);
    c.budget -= 2;
L_003ADAD4:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == 0ull; set32(c.r[2], c.r[19].w[0] - 208u);  if (t) { goto L_003ADB9C; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 28272u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003ADB98; } }
    set32(c.r[4], c.r[2].w[0] + 448u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ADAF8u); set32(c.r[5], c.r[20].w[0] + 224u);  if (depth < kMaxDepth) unit_0011(c, 14u, depth + 1u); else { c.pc = 0x001443A0u; return; } if (c.pc != 0x003ADAF8u) [[unlikely]] return; }
L_003ADAF8:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[2].sd[0] = static_cast<std::int32_t>(0x44FA0000u);  if (t) { goto L_003ADB18; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[0] = c.f[1];  if (t) { goto L_003ADB34; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x44FA0000u);
    c.budget -= 1;
L_003ADB18:
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003ADB34; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[0] = c.f[1];  if (t) { goto L_003ADB34; } }
L_003ADB34:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43480000u);
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[2].sd[0] = static_cast<std::int32_t>(0x44FA0000u);  if (t) { goto L_003ADB54; } }
    c.f[0] = 0u;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x44FA0000u);
    c.budget -= 2;
L_003ADB54:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[2] = c.r[2].w[0];
    c.f[1] = ld32((c.r[1].w[0] + 4624u));
    fpu_div(c, 12u, c.f[0], c.f[2]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ADB74u); c.f[12] = fp::mul(c.f[12], c.f[1]);  if (depth < kMaxDepth) unit_0011(c, 99u, depth + 1u); else { c.pc = 0x00145F50u; return; } if (c.pc != 0x003ADB74u) [[unlikely]] return; }
L_003ADB74:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42FE0000u);
    c.f[2] = c.r[3].w[0];
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::sub(c.f[2], c.f[0]);
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[16], c.f[0]);
    c.budget -= 9;
L_003ADB98:
    set32(c.r[2], c.r[19].w[0] - 208u);
    c.budget -= 1;
L_003ADB9C:
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(3ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_003ADBCC; } }
    set32(c.r[2], 0u + 202u);
    c.budget -= 3;
    { const bool t = c.r[19].d[0] == c.r[2].d[0];  if (t) { goto L_003ADBCC; } }
    c.r[2].d[0] = c.r[19].sd[0] < 300ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003ADC48; } }
    c.r[1].d[0] = c.r[19].sd[0] < 326ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003ADC48; } }
L_003ADBCC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[16], ld32((c.r[1].w[0] + 26400u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ADBE0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002B(c, 37u, depth + 1u); else { c.pc = 0x001AC3F0u; return; } if (c.pc != 0x003ADBE0u) [[unlikely]] return; }
L_003ADBE0:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_003ADC18; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ADBFCu); set32(c.r[7], c.r[29].w[0] + 108u);  if (depth < kMaxDepth) unit_002B(c, 63u, depth + 1u); else { c.pc = 0x001AC810u; return; } if (c.pc != 0x003ADBFCu) [[unlikely]] return; }
L_003ADBFC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003ADD2C; } }
    c.r[5].d[0] = ld8((c.r[29].w[0] + 111u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ADC10u); set32(c.r[4], 0u + 5u);  if (depth < kMaxDepth) unit_0079(c, 40u, depth + 1u); else { c.pc = 0x002E46E0u; return; } if (c.pc != 0x003ADC10u) [[unlikely]] return; }
L_003ADC10:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003ADC40; } }
L_003ADC18:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ADC2Cu); set32(c.r[7], c.r[29].w[0] + 108u);  if (depth < kMaxDepth) unit_002B(c, 63u, depth + 1u); else { c.pc = 0x001AC810u; return; } if (c.pc != 0x003ADC2Cu) [[unlikely]] return; }
L_003ADC2C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003ADD2C; } }
    c.r[5].d[0] = ld8((c.r[29].w[0] + 111u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ADC40u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0079(c, 38u, depth + 1u); else { c.pc = 0x002E4660u; return; } if (c.pc != 0x003ADC40u) [[unlikely]] return; }
L_003ADC40:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));  if (t) { goto L_003ADD30; } }
L_003ADC48:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == 0ull;  if (t) { goto L_003ADCC8; } }
    c.r[2].d[0] = ld8((c.r[20].w[0] + 370u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003ADC70; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ADC64u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AB(c, 233u, depth + 1u); else { c.pc = 0x003AD9F0u; return; } if (c.pc != 0x003ADC64u) [[unlikely]] return; }
L_003ADC64:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003ADC70; } }
    set32(c.r[19], 0u + 33u);
    c.budget -= 1;
L_003ADC70:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ADC78u); c.r[4].d[0] = ld8((c.r[20].w[0] + 385u));  if (depth < kMaxDepth) unit_00AB(c, 234u, depth + 1u); else { c.pc = 0x003ADA10u; return; } if (c.pc != 0x003ADC78u) [[unlikely]] return; }
L_003ADC78:
    c.r[3].d[0] = ld8((c.r[20].w[0] + 370u));
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u + 10u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_003ADCB0; } }
    set32(c.r[2], 0u + 33u);
    c.budget -= 3;
    { const bool t = c.r[19].d[0] != c.r[2].d[0]; set32(c.r[18], 0u + 2u);  if (t) { goto L_003ADCC8; } }
    set32(c.r[3], ld32((c.r[20].w[0] + 164u)));
    set32(c.r[2], 0u + 4301u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_003ADCC8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[18], 0u + 1u);  if (t) { goto L_003ADCC8; } }
L_003ADCB0:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003ADCC8; } }
    c.r[2].d[0] = ld8((c.r[20].w[0] + 385u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003ADCC8; } }
    set32(c.r[18], 0u + 1u);
    c.budget -= 1;
L_003ADCC8:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == 0ull; c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_003ADCEC; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ADCE0u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002B(c, 319u, depth + 1u); else { c.pc = 0x001AE6D0u; return; } if (c.pc != 0x003ADCE0u) [[unlikely]] return; }
L_003ADCE0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003ADCF8; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_003ADCEC:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ADCF8u); set32(c.r[6], 0u - 1u);  if (depth < kMaxDepth) unit_002B(c, 319u, depth + 1u); else { c.pc = 0x001AE6D0u; return; } if (c.pc != 0x003ADCF8u) [[unlikely]] return; }
L_003ADCF8:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_003ADD1C; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ADD10u); c.r[6].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AB(c, 221u, depth + 1u); else { c.pc = 0x003AD7B0u; return; } if (c.pc != 0x003ADD10u) [[unlikely]] return; }
L_003ADD10:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003ADD2C; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_003ADD1C:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ADD2Cu); c.r[7].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AB(c, 227u, depth + 1u); else { c.pc = 0x003AD8B0u; return; } if (c.pc != 0x003ADD2Cu) [[unlikely]] return; }
L_003ADD2C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.budget -= 1;
L_003ADD30:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_003ADD50:
    c.budget -= 2;
    { set32(c.r[7], 0u + 127u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003AD8B0u | kUnwind; return; } goto L_003AD8B0; }
L_003ADD60:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x003AD7B0u | kUnwind; return; } goto L_003AD7B0; }
L_003ADD70:
    c.r[7].d[0] = c.r[4].d[0] << 48;
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 48);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[3].d[0] = c.r[7].sd[0] < 1000ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_003ADD9C; } }
    c.r[1].d[0] = c.r[7].sd[0] < 4000ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003ADD9C; } }
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_003ADD9C:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; c.r[3].d[0] = c.r[7].sd[0] < 700ll ? 1ull : 0ull;  if (t) { goto L_003ADDC8; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 26424u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003ADE14; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ADDBCu); c.r[5].d[0] = c.r[7].d[0] + 0ull;  if (depth < kMaxDepth) unit_002B(c, 100u, depth + 1u); else { c.pc = 0x001ACD40u; return; } if (c.pc != 0x003ADDBCu) [[unlikely]] return; }
L_003ADDBC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_003ADE18; } }
    c.r[3].d[0] = c.r[7].sd[0] < 700ll ? 1ull : 0ull;
    c.budget -= 1;
L_003ADDC8:
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003ADDD8; } }
    c.r[3].d[0] = c.r[7].sd[0] < 800ll ? 1ull : 0ull;
    c.budget -= 1;
L_003ADDD8:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; c.r[6].d[0] = c.r[5].d[0] << 48;  if (t) { goto L_003ADE04; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 26440u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003ADE14; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ADDF8u); c.r[5].d[0] = c.r[7].d[0] + 0ull;  if (depth < kMaxDepth) unit_002B(c, 134u, depth + 1u); else { c.pc = 0x001AD2A0u; return; } if (c.pc != 0x003ADDF8u) [[unlikely]] return; }
L_003ADDF8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003ADE14; } }
    c.r[6].d[0] = c.r[5].d[0] << 48;
    c.budget -= 1;
L_003ADE04:
    c.r[4].d[0] = 0ull + 0ull;
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 48);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ADE14u); c.r[5].d[0] = c.r[7].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AB(c, 236u, depth + 1u); else { c.pc = 0x003ADA80u; return; } if (c.pc != 0x003ADE14u) [[unlikely]] return; }
L_003ADE14:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_003ADE18:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003ADE20:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[3].d[0] = c.r[4].d[0] << 48;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[1].d[0] = c.r[3].sd[0] < 256ll ? 1ull : 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 10;
    { const bool t = c.r[1].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003ADE50; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ADE50u);  if (depth < kMaxDepth) unit_0079(c, 34u, depth + 1u); else { c.pc = 0x002E4600u; return; } if (c.pc != 0x003ADE50u) [[unlikely]] return; }
L_003ADE50:
    c.r[4].d[0] = c.r[17].d[0] << 48;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);
    c.r[3].d[0] = c.r[4].sd[0] < 1000ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_003ADE74; } }
    c.r[1].d[0] = c.r[4].sd[0] < 4000ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003ADE74; } }
    c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_003ADE74:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull; c.r[3].d[0] = c.r[4].sd[0] < 700ll ? 1ull : 0ull;  if (t) { goto L_003ADEA4; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 26424u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003ADED8; } }
    c.r[5].d[0] = c.r[16].d[0] << 48;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ADE98u); c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 48);  if (depth < kMaxDepth) unit_002B(c, 103u, depth + 1u); else { c.pc = 0x001ACDC0u; return; } if (c.pc != 0x003ADE98u) [[unlikely]] return; }
L_003ADE98:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_003ADEDC; } }
    c.r[3].d[0] = c.r[4].sd[0] < 700ll ? 1ull : 0ull;
    c.budget -= 1;
L_003ADEA4:
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003ADEB4; } }
    c.r[3].d[0] = c.r[4].sd[0] < 800ll ? 1ull : 0ull;
    c.budget -= 1;
L_003ADEB4:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003ADED8; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 26440u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003ADED8; } }
    c.r[5].d[0] = c.r[16].d[0] << 48;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ADED8u); c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 48);  if (depth < kMaxDepth) unit_002B(c, 138u, depth + 1u); else { c.pc = 0x001AD350u; return; } if (c.pc != 0x003ADED8u) [[unlikely]] return; }
L_003ADED8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_003ADEDC:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003ADEF0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 26400u)));
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ADF10u); set32(c.r[7], c.r[29].w[0] + 28u);  if (depth < kMaxDepth) unit_002B(c, 63u, depth + 1u); else { c.pc = 0x001AC810u; return; } if (c.pc != 0x003ADF10u) [[unlikely]] return; }
L_003ADF10:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003ADF24; } }
    c.r[5].d[0] = ld8((c.r[29].w[0] + 31u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ADF24u); set32(c.r[4], 0u + 8u);  if (depth < kMaxDepth) unit_0079(c, 38u, depth + 1u); else { c.pc = 0x002E4660u; return; } if (c.pc != 0x003ADF24u) [[unlikely]] return; }
L_003ADF24:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003ADF30:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[6].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[7], c.r[29].w[0] + 44u);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[1].w[0] + 26400u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ADF58u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002B(c, 63u, depth + 1u); else { c.pc = 0x001AC810u; return; } if (c.pc != 0x003ADF58u) [[unlikely]] return; }
L_003ADF58:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003ADF74; } }
    c.r[5].d[0] = ld8((c.r[29].w[0] + 47u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ADF6Cu); set32(c.r[4], 0u + 8u);  if (depth < kMaxDepth) unit_0079(c, 38u, depth + 1u); else { c.pc = 0x002E4660u; return; } if (c.pc != 0x003ADF6Cu) [[unlikely]] return; }
L_003ADF6C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_003ADFBC; } }
L_003ADF74:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ADF7Cu);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x003ADF7Cu) [[unlikely]] return; }
L_003ADF7C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[4], 0u + 1u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.r[3].d[0] = ld8((c.r[1].w[0] - 25569u));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != c.r[4].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);  if (t) { goto L_003ADFB8; } }
    set32(c.r[3], ld32((c.r[1].w[0] + 31520u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_003ADFB8; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 26456u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003ADFB8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ADFB8u);  if (depth < kMaxDepth) unit_002B(c, 254u, depth + 1u); else { c.pc = 0x001ADFB0u; return; } if (c.pc != 0x003ADFB8u) [[unlikely]] return; }
L_003ADFB8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_003ADFBC:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003ADFD0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ADFE0u); set32(c.r[4], 0u + 8u);  if (depth < kMaxDepth) unit_0079(c, 46u, depth + 1u); else { c.pc = 0x002E47A0u; return; } if (c.pc != 0x003ADFE0u) [[unlikely]] return; }
L_003ADFE0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ADFE8u);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x003ADFE8u) [[unlikely]] return; }
L_003ADFE8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[4], 0u + 1u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.r[3].d[0] = ld8((c.r[1].w[0] - 25569u));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != c.r[4].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);  if (t) { goto L_003AE02C; } }
    set32(c.r[3], ld32((c.r[1].w[0] + 31520u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_003AE02C; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 26456u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[5], 0u + 60u);  if (t) { goto L_003AE034; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AE024u);  if (depth < kMaxDepth) unit_002B(c, 259u, depth + 1u); else { c.pc = 0x001AE0A0u; return; } if (c.pc != 0x003AE024u) [[unlikely]] return; }
L_003AE024:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_003AE038; } }
L_003AE02C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AE034u); set32(c.r[4], 0u + 8u);  if (depth < kMaxDepth) unit_0079(c, 48u, depth + 1u); else { c.pc = 0x002E47E0u; return; } if (c.pc != 0x003AE034u) [[unlikely]] return; }
L_003AE034:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_003AE038:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003AE040:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[16], c.r[2].w[0] + 7440u);
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; st64((c.r[29].w[0] + 8u), c.r[31].d[0]);  if (t) { goto L_003AE074; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00420000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] + 7448u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AE070u); set32(c.r[6], 0u + 768u);  if (depth < kMaxDepth) unit_0009(c, 49u, depth + 1u); else { c.pc = 0x00124ED8u; return; } if (c.pc != 0x003AE070u) [[unlikely]] return; }
L_003AE070:
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 1;
L_003AE074:
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003AE090:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00420000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], c.r[3].w[0] + 7440u);
    set32(c.r[2], ld32((c.r[3].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[3].w[0]), c.r[2].w[0]);  if (t) { goto L_003AE0D0; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00420000u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] + 7448u);
    set32(c.r[6], 0u + 768u);
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00124ED8u | kUnwind; return; } [[clang::musttail]] return unit_0009(c, 49u, depth); }
L_003AE0D0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003AE0E0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[20].d[0]);
    c.r[20].sd[0] = static_cast<std::int32_t>(0x00420000u);
    st64((c.r[29].w[0] + 40u), c.r[31].d[0]);
    set32(c.r[3], c.r[20].w[0] + 7448u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 15;
    { const bool t = c.r[2].d[0] == 0ull; c.r[19].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003AE144; } }
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_003AE120:
    c.r[2].d[0] = c.r[16].sd[0] < 16ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], c.r[3].w[0] + 48u);  if (t) { goto L_003AE144; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 6;
    if (c.r[2].d[0] != 0ull) { set32(c.r[16], c.r[16].w[0] + 1u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003AE120u | kUnwind; return; } goto L_003AE120; }
L_003AE144:
    set32(c.r[3], 0u + 16u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[3].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003AE1EC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AE158u);  if (depth < kMaxDepth) unit_00AC(c, 155u, depth + 1u); else { c.pc = 0x003B1E00u; return; } if (c.pc != 0x003AE158u) [[unlikely]] return; }
L_003AE158:
    set32(c.r[2], c.r[16].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[3], c.r[20].w[0] + 7448u);
    set32(c.r[2], c.r[2].w[0] << 4);
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 8;
    { const bool t = c.r[17].sd[0] <= 0; st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[17].w[0]));  if (t) { goto L_003AE1B4; } }
    set32(c.r[9], c.r[16].w[0] + 12u);
    set32(c.r[7], c.r[16].w[0] + 4u);
    c.budget -= 2;
L_003AE180:
    set32(c.r[3], c.r[8].w[0] << 2);
    set32(c.r[8], c.r[8].w[0] + 1u);
    set32(c.r[2], c.r[3].w[0] + c.r[19].w[0]);
    set32(c.r[6], c.r[3].w[0] + c.r[18].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.r[5].d[0] = c.r[8].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    set32(c.r[3], c.r[9].w[0] + c.r[3].w[0]);
    st32((c.r[7].w[0] + 16u), 0u);
    st32((c.r[7].w[0]), c.r[4].w[0]);
    set32(c.r[7], c.r[7].w[0] + 4u);
    set32(c.r[2], ld32((c.r[6].w[0])));
    c.budget -= 13;
    { const bool t = c.r[5].d[0] != 0ull; st32((c.r[3].w[0]), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AE180u | kUnwind; return; } goto L_003AE180; } }
L_003AE1B4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.r[1].d[0] = c.r[1].d[0] | 52428ull;
    c.f[0] = c.r[1].w[0];
    c.r[2].d[0] = 0ull | 44100ull;
    set32(c.r[3], 0u + 1u);
    st32((c.r[16].w[0] + 32u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 28u), c.r[17].w[0]);
    st32((c.r[16].w[0] + 40u), c.f[0]);
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(0u));
    st32((c.r[16].w[0] + 44u), 0u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AE1E8u); st32((c.r[16].w[0] + 36u), c.f[0]);  if (depth < kMaxDepth) unit_00AC(c, 156u, depth + 1u); else { c.pc = 0x003B1E18u; return; } if (c.pc != 0x003AE1E8u) [[unlikely]] return; }
L_003AE1E8:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_003AE1EC:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 40u));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003AE210:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 5;
    { const bool t = c.r[16].d[0] == 0ull; st64((c.r[29].w[0] + 8u), c.r[31].d[0]);  if (t) { goto L_003AE250; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AE22Cu);  if (depth < kMaxDepth) unit_00AC(c, 155u, depth + 1u); else { c.pc = 0x003B1E00u; return; } if (c.pc != 0x003AE22Cu) [[unlikely]] return; }
L_003AE22C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AE23Cu); set32(c.r[6], 0u + 48u);  if (depth < kMaxDepth) unit_0009(c, 49u, depth + 1u); else { c.pc = 0x00124ED8u; return; } if (c.pc != 0x003AE23Cu) [[unlikely]] return; }
L_003AE23C:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00AC(c, 156u, depth); }
L_003AE250:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003AE260:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1u)));  c.pc = t; return; }
L_003AE268:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 24u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    c.r[18].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    st64((c.r[29].w[0] + 40u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 2u)));
    c.budget -= 11;
    { const bool t = c.r[2].sd[0] <= 0; c.r[4].d[0] = ld8((c.r[17].w[0] + 2u));  if (t) { goto L_003AE2B4; } }
    set32(c.r[3], c.r[17].w[0] + 20u);
    c.budget -= 1;
L_003AE298:
    st32((c.r[3].w[0]), 0u);
    set32(c.r[3], c.r[3].w[0] + 4u);
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 2u)));
    c.r[2].d[0] = c.r[18].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = ld8((c.r[17].w[0] + 2u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AE298u | kUnwind; return; } goto L_003AE298; } }
L_003AE2B4:
    set32(c.r[2], c.r[4].w[0] << 24);
    st32((c.r[17].w[0] + 44u), 0u);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_003AE350; } }
    set32(c.r[19], c.r[17].w[0] + 4u);
    c.budget -= 1;
L_003AE2C8:
    set32(c.r[16], ld32((c.r[19].w[0])));
    set32(c.r[19], c.r[19].w[0] + 4u);
    set32(c.r[18], c.r[18].w[0] + 1u);
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0] + 20u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003AE2E4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003AE2E4u) [[unlikely]] return; }
L_003AE2E4:
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] + 36u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003AE2F8u); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003AE2F8u) [[unlikely]] return; }
L_003AE2F8:
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.r[7].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] + 24u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003AE314u); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003AE314u) [[unlikely]] return; }
L_003AE314:
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], ld32((c.r[29].w[0])));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AE324u); set32(c.r[6], ld32((c.r[29].w[0] + 4u)));  if (depth < kMaxDepth) unit_0009(c, 49u, depth + 1u); else { c.pc = 0x00124ED8u; return; } if (c.pc != 0x003AE324u) [[unlikely]] return; }
L_003AE324:
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] + 28u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003AE33Cu); c.r[6].d[0] = c.r[29].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003AE33Cu) [[unlikely]] return; }
L_003AE33C:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 2u)));
    c.r[2].d[0] = c.r[18].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = ld8((c.r[17].w[0] + 2u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AE2C8u | kUnwind; return; } goto L_003AE2C8; } }
    set32(c.r[2], c.r[4].w[0] << 24);
    c.budget -= 1;
L_003AE350:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] <= 0; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_003AE3E0; } }
    set32(c.r[19], c.r[17].w[0] + 12u);
    set32(c.r[16], ld32((c.r[19].w[0])));
    c.budget -= 2;
L_003AE360:
    set32(c.r[19], c.r[19].w[0] + 4u);
    set32(c.r[18], c.r[18].w[0] + 1u);
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0] + 20u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003AE378u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003AE378u) [[unlikely]] return; }
L_003AE378:
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] + 36u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003AE38Cu); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003AE38Cu) [[unlikely]] return; }
L_003AE38C:
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.r[7].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] + 24u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003AE3A8u); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003AE3A8u) [[unlikely]] return; }
L_003AE3A8:
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], ld32((c.r[29].w[0])));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AE3B8u); set32(c.r[6], ld32((c.r[29].w[0] + 4u)));  if (depth < kMaxDepth) unit_0009(c, 49u, depth + 1u); else { c.pc = 0x00124ED8u; return; } if (c.pc != 0x003AE3B8u) [[unlikely]] return; }
L_003AE3B8:
    set32(c.r[6], ld32((c.r[16].w[0])));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[3], ld32((c.r[6].w[0] + 28u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003AE3D0u); c.r[6].d[0] = c.r[29].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003AE3D0u) [[unlikely]] return; }
L_003AE3D0:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 2u)));
    c.r[2].d[0] = c.r[18].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[16], ld32((c.r[19].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003AE360u | kUnwind; return; } goto L_003AE360; }
L_003AE3E0:
    set32(c.r[2], 0u + 2u);
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    st8((c.r[17].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003AE408:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 1u), static_cast<std::uint8_t>(0u));  c.pc = t; return; }
L_003AE410:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 64u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 80u), c.r[20].d[0]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[16].d[0]);
    st64((c.r[29].w[0] + 56u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 72u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 88u), c.r[21].d[0]);
    st64((c.r[29].w[0] + 96u), c.r[22].d[0]);
    st64((c.r[29].w[0] + 104u), c.r[23].d[0]);
    st64((c.r[29].w[0] + 112u), c.r[30].d[0]);
    st64((c.r[29].w[0] + 120u), c.r[31].d[0]);
    st32((c.r[29].w[0] + 32u), 0u);
    c.f[0] = ld32((c.r[20].w[0] + 32u));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[1] = ld32((c.r[20].w[0] + 36u));
    set32(c.r[2], ld32((c.r[20].w[0] + 28u)));
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.f[1] = fp::cvt_w_s(c.f[0]);
    set32(c.r[18], c.f[1]);
    c.budget -= 22;
    { const bool t = c.r[2].sd[0] <= 0; c.r[16].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_003AE670; } }
    set32(c.r[23], c.r[20].w[0] + 12u);
    set32(c.r[2], c.r[20].w[0] + 20u);
    st32((c.r[29].w[0] + 40u), c.r[23].w[0]);
    set32(c.r[30], c.r[20].w[0] + 4u);
    st32((c.r[29].w[0] + 44u), c.r[2].w[0]);
    c.budget -= 6;
L_003AE480:
    set32(c.r[3], ld32((c.r[29].w[0] + 32u)));
    set32(c.r[4], ld32((c.r[30].w[0])));
    set32(c.r[17], c.r[3].w[0] << 2);
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0] + 36u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003AE49Cu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003AE49Cu) [[unlikely]] return; }
L_003AE49C:
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { breakpoint(c, 0x003AE4A0u);  goto L_003AE4A4; }
L_003AE4A4:
    set32(c.r[16], c.r[2].w[0] >> 31);
    set32(c.r[4], ld32((c.r[23].w[0])));
    set32(c.r[16], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[16], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[16].w[0]) >> 1));
    set32(c.r[3], ld32((c.r[4].w[0])));
    mmi::div(c, 0, c.r[16].w[0], c.r[18].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 36u)));
    c.r[16].d[0] = c.lo.d[0];
    c.budget -= 10;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003AE4CCu); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003AE4CCu) [[unlikely]] return; }
L_003AE4CC:
    c.r[3].d[0] = c.r[2].sd[0] < 0ll ? 1ull : 0ull;
    set32(c.r[4], c.r[2].w[0] + 15u);
    if (c.r[3].d[0] != 0) c.r[2].d[0] = c.r[4].d[0];
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 4));
    c.r[2].d[0] = c.r[16].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    if (c.r[2].d[0] != 0) c.r[3].d[0] = c.r[16].d[0];
    c.budget -= 8;
    if (c.r[3].sd[0] <= 0) { set32(c.r[3], ld32((c.r[29].w[0] + 32u)));  goto L_003AE644; }
    set32(c.r[2], ld32((c.r[29].w[0] + 40u)));
    c.r[22].d[0] = c.r[3].d[0] + 0ull;
    set32(c.r[21], ld32((c.r[29].w[0] + 44u)));
    set32(c.r[17], c.r[2].w[0] + c.r[17].w[0]);
    st32((c.r[29].w[0] + 36u), c.r[17].w[0]);
    c.budget -= 5;
L_003AE500:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = c.r[18].sd[0] <= 0; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_003AE59C; } }
    c.r[17].d[0] = c.r[30].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 3;
L_003AE518:
    set32(c.r[6], c.r[18].w[0] - c.r[16].w[0]);
    c.r[7].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[6], c.r[6].w[0] << 1);
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0] + 24u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003AE534u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003AE534u) [[unlikely]] return; }
L_003AE534:
    set32(c.r[3], ld32((c.r[29].w[0] + 4u)));
    set32(c.r[2], c.r[3].w[0] >> 31);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[8], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 1));
    c.budget -= 6;
    { const bool t = c.r[8].sd[0] <= 0; set32(c.r[7], ld32((c.r[29].w[0])));  if (t) { goto L_003AE574; } }
    c.r[6].d[0] = c.r[8].d[0] + 0ull;
    c.budget -= 1;
L_003AE550:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[7].w[0])));
    set32(c.r[7], c.r[7].w[0] + 2u);
    set32(c.r[6], c.r[6].w[0] - 1u);
    set32(c.r[5], 0u - c.r[4].w[0]);
    c.r[2].d[0] = c.r[4].sd[0] < 0ll ? 1ull : 0ull;
    if (c.r[2].d[0] != 0) c.r[4].d[0] = c.r[5].d[0];
    c.r[3].d[0] = c.r[19].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[6].d[0] != 0ull; if (c.r[3].d[0] != 0) c.r[19].d[0] = c.r[4].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AE550u | kUnwind; return; } goto L_003AE550; } }
L_003AE574:
    set32(c.r[4], ld32((c.r[17].w[0])));
    set32(c.r[16], c.r[16].w[0] + c.r[8].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0] + 32u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003AE590u); c.r[6].d[0] = c.r[29].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003AE590u) [[unlikely]] return; }
L_003AE590:
    c.r[3].d[0] = c.r[16].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[4], ld32((c.r[17].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003AE518u | kUnwind; return; } goto L_003AE518; }
L_003AE59C:
    set32(c.r[4], ld32((c.r[23].w[0])));
    set32(c.r[3], c.r[29].w[0] + 16u);
    c.r[7].d[0] = c.r[3].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0] + 24u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003AE5BCu); set32(c.r[6], 0u + 16u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003AE5BCu) [[unlikely]] return; }
L_003AE5BC:
    set32(c.r[3], ld32((c.r[29].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[7], ld32((c.r[29].w[0] + 16u)));  if (t) { goto L_003AE5E8; } }
L_003AE5C8:
    c.budget -= 7;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AE5C8u | kUnwind; return; } goto L_003AE5C8; } }
    c.budget -= 1;
L_003AE5E8:
    set32(c.r[3], c.r[29].w[0] + 16u);
    set32(c.r[2], ld32((c.r[29].w[0] + 36u)));
    c.r[6].d[0] = c.r[3].d[0] + 0ull;
    st32((c.r[7].w[0]), c.r[19].w[0]);
    set32(c.r[5], 0u + 1u);
    set32(c.r[4], ld32((c.r[2].w[0])));
    set32(c.r[22], c.r[22].w[0] - 1u);
    set32(c.r[2], ld32((c.r[21].w[0])));
    set32(c.r[3], ld32((c.r[4].w[0])));
    st32((c.r[7].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[8], ld32((c.r[3].w[0] + 32u)));
    set32(c.r[3], ld32((c.r[20].w[0] + 32u)));
    st32((c.r[7].w[0] + 12u), c.r[18].w[0]);
    c.budget -= 15;
    { const std::uint32_t t = c.r[8].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003AE624u); st32((c.r[7].w[0] + 8u), c.r[3].w[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003AE624u) [[unlikely]] return; }
L_003AE624:
    set32(c.r[2], ld32((c.r[21].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    st32((c.r[21].w[0]), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[20].w[0] + 44u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 7;
    { const bool t = c.r[22].d[0] != 0ull; st32((c.r[20].w[0] + 44u), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AE500u | kUnwind; return; } goto L_003AE500; } }
    set32(c.r[3], ld32((c.r[29].w[0] + 32u)));
    c.budget -= 1;
L_003AE644:
    set32(c.r[23], c.r[23].w[0] + 4u);
    set32(c.r[2], ld32((c.r[20].w[0] + 28u)));
    set32(c.r[30], c.r[30].w[0] + 4u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[29].w[0] + 32u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    set32(c.r[3], ld32((c.r[29].w[0] + 44u)));
    set32(c.r[3], c.r[3].w[0] + 4u);
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[29].w[0] + 44u), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AE480u | kUnwind; return; } goto L_003AE480; } }
    c.r[16].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_003AE670:
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
L_003AE6A0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[2], 0u + 2u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_003AE6C0; } }
    c.budget -= 2;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003AE410u | kUnwind; return; } goto L_003AE410; }
L_003AE6C0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003AE6C8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[16], c.r[2].w[0] + 7448u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    set32(c.r[17], 0u + 15u);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    set32(c.r[18], 0u + 1u);
    c.budget -= 10;
L_003AE6F0:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[18].d[0]) { set32(c.r[17], c.r[17].w[0] - 1u);  goto L_003AE708; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AE704u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AB(c, 313u, depth + 1u); else { c.pc = 0x003AE6A0u; return; } if (c.pc != 0x003AE704u) [[unlikely]] return; }
L_003AE704:
    set32(c.r[17], c.r[17].w[0] - 1u);
    c.budget -= 1;
L_003AE708:
    c.budget -= 2;
    { const bool t = c.r[17].sd[0] >= 0; set32(c.r[16], c.r[16].w[0] + 48u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AE6F0u | kUnwind; return; } goto L_003AE6F0; } }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003AE728:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[4].w[0] + 20u)));  c.pc = t; return; }
L_003AE730:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 32u), c.r[5].w[0]);  c.pc = t; return; }
L_003AE738:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[4].w[0] + 32u)));  c.pc = t; return; }
L_003AE740:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 36u), c.f[12]);  c.pc = t; return; }
L_003AE748:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.f[0] = ld32((c.r[4].w[0] + 36u));  c.pc = t; return; }
L_003AE750:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 40u), c.f[12]);  c.pc = t; return; }
L_003AE758:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.f[0] = ld32((c.r[4].w[0] + 40u));  c.pc = t; return; }
L_003AE760:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 188u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_003AE784; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[3], ld32((c.r[2].w[0] + 8216u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003AE784u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003AE784u) [[unlikely]] return; }
L_003AE784:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003AE790:
    set32(c.r[2], 0u + 1536u);
    st32((c.r[4].w[0] + 192u), c.r[5].w[0]);
    mmi::div(c, 0, c.r[5].w[0], c.r[2].w[0]);
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { breakpoint(c, 0x003AE7A0u);  goto L_003AE7A4; }
L_003AE7A4:
    c.r[3].d[0] = c.lo.d[0];
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 196u), c.r[3].w[0]);  c.pc = t; return; }
L_003AE7B0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 188u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_003AE7D4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[3], ld32((c.r[2].w[0] + 8220u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003AE7D4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003AE7D4u) [[unlikely]] return; }
L_003AE7D4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003AE7E0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 188u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);  if (t) { goto L_003AE800; } }
    set32(c.r[3], ld32((c.r[2].w[0] + 8224u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003AE800u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003AE800u) [[unlikely]] return; }
L_003AE800:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003AE810:
    c.r[14].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[14].w[0] + 188u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003AE8B8; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    set32(c.r[12], ld32((c.r[14].w[0] + 60u)));
    set32(c.r[13], ld32((c.r[14].w[0] + 64u)));
    set32(c.r[10], 0u + 1u);
    set32(c.r[11], ld32((c.r[14].w[0] + 68u)));
    set32(c.r[9], 0u + 1536u);
    set32(c.r[4], 0u + 16u);
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    set32(c.r[5], 0u + 127u);
    set32(c.r[6], 0u + 15u);
    set32(c.r[7], 0u + 1u);
    set32(c.r[8], 0u + 127u);
    c.r[2].d[0] = 0ull | 48000ull;
    st8((c.r[14].w[0] + 14u), static_cast<std::uint8_t>(c.r[10].w[0]));
    st8((c.r[14].w[0] + 13u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st32((c.r[14].w[0] + 24u), c.r[3].w[0]);
    st8((c.r[14].w[0] + 15u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st16((c.r[14].w[0] + 152u), static_cast<std::uint16_t>(c.r[6].w[0]));
    st32((c.r[14].w[0] + 80u), c.r[7].w[0]);
    st32((c.r[14].w[0] + 84u), c.r[8].w[0]);
    st32((c.r[14].w[0] + 88u), c.r[9].w[0]);
    st32((c.r[14].w[0] + 92u), c.r[12].w[0]);
    st32((c.r[14].w[0] + 96u), c.r[13].w[0]);
    st32((c.r[14].w[0] + 100u), c.r[11].w[0]);
    st32((c.r[14].w[0] + 136u), 0u);
    st16((c.r[14].w[0] + 2u), static_cast<std::uint16_t>(c.r[10].w[0]));
    st32((c.r[14].w[0] + 16u), c.r[9].w[0]);
    st32((c.r[14].w[0] + 140u), 0u);
    st16((c.r[14].w[0] + 28u), static_cast<std::uint16_t>(0u));
    st16((c.r[14].w[0] + 36u), static_cast<std::uint16_t>(0u));
    st16((c.r[14].w[0] + 38u), static_cast<std::uint16_t>(0u));
    st32((c.r[14].w[0] + 32u), 0u);
    st32((c.r[14].w[0] + 40u), 0u);
    st32((c.r[14].w[0] + 44u), 0u);
    st32((c.r[14].w[0] + 48u), 0u);
    st32((c.r[14].w[0] + 52u), 0u);
    st32((c.r[14].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[2], 0u + 1u);
    c.budget -= 38;
L_003AE8B8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003AE8C0:
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], 0u + 11u);
    c.r[2].d[0] = ld8((c.r[5].w[0]));
    c.budget -= 5;
    if (c.r[2].d[0] != c.r[3].d[0]) { c.r[3].d[0] = ld8((c.r[5].w[0] + 16u));  goto L_003AE8E8; }
    c.r[4].d[0] = ld8((c.r[5].w[0] + 1u));
    set32(c.r[3], 0u + 119u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_003AE908; } }
    c.r[3].d[0] = ld8((c.r[5].w[0] + 16u));
    c.budget -= 1;
L_003AE8E8:
    set32(c.r[2], 0u + 11u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003AE908; } }
    c.r[4].d[0] = ld8((c.r[5].w[0] + 17u));
    set32(c.r[3], 0u + 119u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_003AE908; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003AE908:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003AE910:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 176u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_003AE934; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[3], ld32((c.r[2].w[0] + 8232u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003AE934u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003AE934u) [[unlikely]] return; }
L_003AE934:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003AE940:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 176u)));
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_003AE974; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[3], ld32((c.r[2].w[0] + 8236u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003AE974u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003AE974u) [[unlikely]] return; }
L_003AE974:
    set32(c.r[2], 0u + 96u);
    st32((c.r[17].w[0] + 180u), c.r[16].w[0]);
    mmi::div(c, 0, c.r[16].w[0], c.r[2].w[0]);
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { breakpoint(c, 0x003AE984u);  goto L_003AE988; }
L_003AE988:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[3].d[0] = c.lo.d[0];
    st32((c.r[17].w[0] + 184u), c.r[3].w[0]);
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003AE9A8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 8244u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003AE9C0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003AE9C0u) [[unlikely]] return; }
L_003AE9C0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003AE9D0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 176u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_003AE9F4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[3], ld32((c.r[2].w[0] + 8240u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003AE9F4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003AE9F4u) [[unlikely]] return; }
L_003AE9F4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003AEA00:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[24].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x4D520000u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[8].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    c.r[19].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[20].d[0]);
    c.r[20].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 40u), c.r[21].d[0]);
    c.r[21].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = c.r[16].d[0] | 20294ull;
    c.r[15].d[0] = ld8((c.r[24].w[0]));
    c.r[14].d[0] = ld8((c.r[24].w[0] + 3u));
    c.r[12].d[0] = ld8((c.r[24].w[0] + 2u));
    c.r[13].d[0] = ld8((c.r[24].w[0] + 1u));
    set32(c.r[24], c.r[24].w[0] + 4u);
    c.r[5].d[0] = ld8((c.r[24].w[0] + 3u));
    set32(c.r[14], c.r[14].w[0] << 24);
    c.r[3].d[0] = ld8((c.r[24].w[0] + 2u));
    set32(c.r[13], c.r[13].w[0] << 8);
    c.r[4].d[0] = ld8((c.r[24].w[0] + 1u));
    set32(c.r[5], c.r[5].w[0] << 24);
    c.r[2].d[0] = ld8((c.r[24].w[0]));
    set32(c.r[24], c.r[24].w[0] + 4u);
    set32(c.r[4], c.r[4].w[0] << 8);
    set32(c.r[3], c.r[3].w[0] << 16);
    c.r[2].d[0] = c.r[2].d[0] | c.r[5].d[0];
    c.r[5].d[0] = ld8((c.r[24].w[0] + 2u));
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.r[11].d[0] = ld8((c.r[24].w[0] + 3u));
    c.r[25].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.r[10].d[0] = ld8((c.r[24].w[0] + 1u));
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[25].w[0]) >> 8));
    set32(c.r[4], c.r[25].w[0] >> 24);
    set32(c.r[2], c.r[25].w[0] << 8);
    c.r[9].d[0] = ld8((c.r[24].w[0]));
    set32(c.r[12], c.r[12].w[0] << 16);
    c.r[3].d[0] = c.r[3].d[0] & 65280ull;
    c.r[2].d[0] = c.r[2].d[0] & c.r[17].d[0];
    c.r[17].d[0] = 0ull + 0ull;
    c.r[15].d[0] = c.r[15].d[0] | c.r[14].d[0];
    c.r[14].d[0] = 0ull + 0ull;
    c.r[12].d[0] = c.r[12].d[0] | c.r[13].d[0];
    c.r[13].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    set32(c.r[11], c.r[11].w[0] << 24);
    set32(c.r[5], c.r[5].w[0] << 16);
    set32(c.r[10], c.r[10].w[0] << 8);
    c.r[4].d[0] = c.r[4].d[0] | c.r[2].d[0];
    set32(c.r[2], c.r[25].w[0] << 24);
    c.r[9].d[0] = c.r[9].d[0] | c.r[11].d[0];
    c.r[5].d[0] = c.r[5].d[0] | c.r[10].d[0];
    c.r[15].d[0] = c.r[15].d[0] | c.r[12].d[0];
    c.r[25].d[0] = c.r[4].d[0] | c.r[2].d[0];
    c.r[9].d[0] = c.r[9].d[0] | c.r[5].d[0];
    set32(c.r[24], c.r[24].w[0] + 4u);
    c.budget -= 62;
    { const bool t = c.r[15].d[0] != c.r[16].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003AED6C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x46460000u);
    c.r[2].d[0] = c.r[2].d[0] | 18753ull;
    c.budget -= 4;
    if (c.r[9].d[0] == c.r[2].d[0]) { set32(c.r[2], c.r[24].w[0] + c.r[25].w[0]);  goto L_003AEB10; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003AED6C; } }
L_003AEB10:
    set32(c.r[11], c.r[2].w[0] - 4u);
    c.r[3].d[0] = c.r[24].d[0] < c.r[11].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003AED6C; } }
    c.r[12].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    set32(c.r[16], 0u - 256u);
    c.r[9].d[0] = ld8((c.r[24].w[0]));
    c.budget -= 4;
L_003AEB30:
    c.r[10].sd[0] = static_cast<std::int32_t>(0x444E0000u);
    c.r[8].d[0] = ld8((c.r[24].w[0] + 3u));
    c.r[10].d[0] = c.r[10].d[0] | 21331ull;
    c.r[6].d[0] = ld8((c.r[24].w[0] + 2u));
    c.r[7].d[0] = ld8((c.r[24].w[0] + 1u));
    set32(c.r[24], c.r[24].w[0] + 4u);
    c.r[5].d[0] = ld8((c.r[24].w[0] + 3u));
    set32(c.r[8], c.r[8].w[0] << 24);
    c.r[3].d[0] = ld8((c.r[24].w[0] + 2u));
    set32(c.r[6], c.r[6].w[0] << 16);
    c.r[4].d[0] = ld8((c.r[24].w[0] + 1u));
    set32(c.r[5], c.r[5].w[0] << 24);
    c.r[2].d[0] = ld8((c.r[24].w[0]));
    set32(c.r[24], c.r[24].w[0] + 4u);
    set32(c.r[4], c.r[4].w[0] << 8);
    set32(c.r[3], c.r[3].w[0] << 16);
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[5].d[0];
    c.r[25].d[0] = c.r[2].d[0] | c.r[3].d[0];
    set32(c.r[7], c.r[7].w[0] << 8);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[25].w[0]) >> 8));
    set32(c.r[4], c.r[25].w[0] >> 24);
    set32(c.r[2], c.r[25].w[0] << 8);
    c.r[3].d[0] = c.r[3].d[0] & 65280ull;
    c.r[2].d[0] = c.r[2].d[0] & c.r[12].d[0];
    c.r[9].d[0] = c.r[9].d[0] | c.r[8].d[0];
    c.r[6].d[0] = c.r[6].d[0] | c.r[7].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[2].d[0];
    set32(c.r[2], c.r[25].w[0] << 24);
    c.r[15].d[0] = c.r[9].d[0] | c.r[6].d[0];
    c.budget -= 33;
    { const bool t = c.r[15].d[0] == c.r[10].d[0]; c.r[25].d[0] = c.r[4].d[0] | c.r[2].d[0];  if (t) { goto L_003AECE0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4D4D0000u);
    c.r[2].d[0] = c.r[2].d[0] | 20291ull;
    c.budget -= 4;
    { const bool t = c.r[15].d[0] != c.r[2].d[0]; set32(c.r[2], c.r[25].w[0] + 1u);  if (t) { goto L_003AED50; } }
    c.budget -= 2;
    { const bool t = c.r[13].d[0] != 0ull; c.r[2].d[0] = c.r[24].d[0] < c.r[11].d[0] ? 1ull : 0ull;  if (t) { goto L_003AED60; } }
    c.r[2].d[0] = c.r[25].sd[0] < 18ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003AED6C; } }
    c.r[4].d[0] = ld8((c.r[24].w[0] + 1u));
    set32(c.r[6], 0u + 16398u);
    c.r[2].d[0] = ld8((c.r[24].w[0]));
    set32(c.r[24], c.r[24].w[0] + 2u);
    set32(c.r[4], c.r[4].w[0] << 8);
    set32(c.r[13], 0u + 1u);
    c.r[2].d[0] = c.r[2].d[0] | c.r[4].d[0];
    set32(c.r[3], c.r[2].w[0] << 8);
    set32(c.r[2], c.r[2].w[0] >> 8);
    c.r[3].d[0] = c.r[3].d[0] & 65280ull;
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st32((c.r[20].w[0]), c.r[2].w[0]);
    c.r[5].d[0] = ld8((c.r[24].w[0] + 3u));
    c.r[2].d[0] = ld8((c.r[24].w[0] + 2u));
    c.r[4].d[0] = ld8((c.r[24].w[0] + 1u));
    set32(c.r[5], c.r[5].w[0] << 24);
    c.r[3].d[0] = ld8((c.r[24].w[0]));
    set32(c.r[24], c.r[24].w[0] + 4u);
    set32(c.r[4], c.r[4].w[0] << 8);
    set32(c.r[2], c.r[2].w[0] << 16);
    c.r[2].d[0] = c.r[2].d[0] | c.r[4].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    set32(c.r[5], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 8));
    set32(c.r[4], c.r[3].w[0] << 8);
    c.r[5].d[0] = c.r[5].d[0] & 65280ull;
    set32(c.r[2], c.r[3].w[0] >> 24);
    c.r[4].d[0] = c.r[4].d[0] & c.r[12].d[0];
    set32(c.r[3], c.r[3].w[0] << 24);
    c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[4].d[0];
    st32((c.r[18].w[0]), c.r[2].w[0]);
    c.r[4].d[0] = ld8((c.r[24].w[0] + 1u));
    c.r[2].d[0] = ld8((c.r[24].w[0]));
    set32(c.r[24], c.r[24].w[0] + 2u);
    set32(c.r[4], c.r[4].w[0] << 8);
    c.r[2].d[0] = c.r[2].d[0] | c.r[4].d[0];
    set32(c.r[3], c.r[2].w[0] << 8);
    set32(c.r[2], c.r[2].w[0] >> 8);
    c.r[3].d[0] = c.r[3].d[0] & 65280ull;
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st32((c.r[19].w[0]), c.r[2].w[0]);
    c.r[5].d[0] = ld8((c.r[24].w[0]));
    c.r[4].d[0] = ld8((c.r[24].w[0] + 1u));
    set32(c.r[24], c.r[24].w[0] + 2u);
    c.r[3].d[0] = ld8((c.r[24].w[0] + 1u));
    c.r[2].d[0] = ld8((c.r[24].w[0]));
    set32(c.r[24], c.r[24].w[0] + 8u);
    set32(c.r[3], c.r[3].w[0] << 8);
    set32(c.r[4], c.r[4].w[0] << 8);
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.r[5].d[0] = c.r[5].d[0] | c.r[4].d[0];
    set32(c.r[3], c.r[2].w[0] << 8);
    set32(c.r[2], c.r[2].w[0] >> 8);
    c.r[3].d[0] = c.r[3].d[0] & c.r[16].d[0];
    set32(c.r[5], c.r[5].w[0] >> 8);
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    set32(c.r[6], c.r[6].w[0] - c.r[5].w[0]);
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> (c.r[6].w[0] & 31u)));
    c.budget -= 63;
    { const bool t = c.r[14].d[0] == 0ull; st32((c.r[21].w[0]), c.r[2].w[0]);  if (t) { goto L_003AED5C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003AED6C; } }
    c.budget -= 1;
L_003AECE0:
    c.budget -= 2;
    { const bool t = c.r[14].d[0] != 0ull; c.r[2].d[0] = c.r[24].d[0] < c.r[11].d[0] ? 1ull : 0ull;  if (t) { goto L_003AED60; } }
    c.r[5].d[0] = ld8((c.r[24].w[0] + 3u));
    set32(c.r[14], 0u + 1u);
    c.r[2].d[0] = ld8((c.r[24].w[0] + 2u));
    c.r[4].d[0] = ld8((c.r[24].w[0] + 1u));
    set32(c.r[5], c.r[5].w[0] << 24);
    c.r[3].d[0] = ld8((c.r[24].w[0]));
    set32(c.r[24], c.r[24].w[0] + 4u);
    set32(c.r[4], c.r[4].w[0] << 8);
    set32(c.r[2], c.r[2].w[0] << 16);
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[4].d[0];
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    set32(c.r[5], c.r[2].w[0] >> 8);
    set32(c.r[4], c.r[2].w[0] << 8);
    set32(c.r[3], c.r[2].w[0] >> 24);
    set32(c.r[2], c.r[2].w[0] << 24);
    c.r[4].d[0] = c.r[4].d[0] & c.r[12].d[0];
    c.r[5].d[0] = c.r[5].d[0] & 65280ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];
    c.r[2].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 23;
    { const bool t = c.r[13].d[0] == 0ull; set32(c.r[17], c.r[24].w[0] + c.r[2].w[0]);  if (t) { goto L_003AED5C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003AED6C; } }
    c.budget -= 1;
L_003AED50:
    set32(c.r[3], 0u - 2u);
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    set32(c.r[24], c.r[24].w[0] + c.r[2].w[0]);
    c.budget -= 3;
L_003AED5C:
    c.r[2].d[0] = c.r[24].d[0] < c.r[11].d[0] ? 1ull : 0ull;
    c.budget -= 1;
L_003AED60:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[9].d[0] = ld8((c.r[24].w[0]));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003AEB30u | kUnwind; return; } goto L_003AEB30; }
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003AED6C:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 40u));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003AED90:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[6], 0u + 4u);
    set32(c.r[5], c.r[5].w[0] + 4632u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AEDB0u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 37u, depth + 1u); else { c.pc = 0x00124C88u; return; } if (c.pc != 0x003AEDB0u) [[unlikely]] return; }
L_003AEDB0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[4], c.r[16].w[0] + 8u);
    set32(c.r[5], c.r[5].w[0] + 4640u);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[6], 0u + 4u);  if (t) { goto L_003AEDE0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AEDCCu);  if (depth < kMaxDepth) unit_0009(c, 37u, depth + 1u); else { c.pc = 0x00124C88u; return; } if (c.pc != 0x003AEDCCu) [[unlikely]] return; }
L_003AEDCC:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_003AEDE4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_003AEDE4; } }
    c.budget -= 1;
L_003AEDE0:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003AEDE4:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003AEDF8:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[2].d[0] = c.r[5].sd[0] < 4096ll ? 1ull : 0ull;
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[10].d[0] + 0ull;
    st64((c.r[29].w[0] + 40u), c.r[19].d[0]);
    c.r[19].d[0] = c.r[11].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[20].d[0]);
    c.r[20].d[0] = c.r[8].d[0] + 0ull;
    st64((c.r[29].w[0] + 56u), c.r[21].d[0]);
    c.r[21].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 64u), c.r[22].d[0]);
    c.r[22].d[0] = c.r[9].d[0] + 0ull;
    st64((c.r[29].w[0] + 72u), c.r[31].d[0]);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 4u);
    set32(c.r[8], c.r[29].w[0] + 12u);
    c.budget -= 22;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[7], c.r[29].w[0] + 8u);  if (t) { goto L_003AEE60; } }
    st16((c.r[17].w[0]), static_cast<std::uint16_t>(0u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_003AEEE0; } }
    c.budget -= 1;
L_003AEE60:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AEE68u);  if (depth < kMaxDepth) unit_00AB(c, 341u, depth + 1u); else { c.pc = 0x003AEA00u; return; } if (c.pc != 0x003AEE68u) [[unlikely]] return; }
L_003AEE68:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_003AEEE0; } }
    set32(c.r[3], c.r[3].w[0] - c.r[16].w[0]);
    set32(c.r[4], c.r[3].w[0] << 16);
    c.budget -= 4;
    { const bool t = c.r[4].sd[0] <= 0; st16((c.r[17].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_003AEEE0; } }
    c.r[3].d[0] = ld8((c.r[29].w[0] + 4u));
    set32(c.r[7], 0u - 1u);
    set32(c.r[6], ld32((c.r[29].w[0])));
    set32(c.r[8], 0u + 1u);
    c.r[4].d[0] = ld8((c.r[29].w[0] + 8u));
    c.r[2].d[0] = 0ull + 0ull;
    st32((c.r[19].w[0]), c.r[6].w[0]);
    set32(c.r[5], ld32((c.r[29].w[0] + 12u)));
    st8((c.r[18].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[20].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[29].w[0] + 80u)));
    st32((c.r[3].w[0]), c.r[5].w[0]);
    st8((c.r[21].w[0]), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0])));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0])));
    mmi::mult(c, 0, c.r[3].w[0], c.r[4].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    c.r[4].d[0] = c.r[3].sd[0] < 0ll ? 1ull : 0ull;
    set32(c.r[5], c.r[3].w[0] + 7u);
    if (c.r[4].d[0] != 0) c.r[3].d[0] = c.r[5].d[0];
    set32(c.r[4], ld32((c.r[29].w[0] + 88u)));
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 3));
    st8((c.r[22].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[4].w[0]), c.r[8].w[0]);
    c.budget -= 23;
L_003AEEE0:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 56u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 72u));
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003AEF08:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 32u), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 72u), c.r[21].d[0]);
    set32(c.r[21], 0u + 1u);
    st64((c.r[29].w[0] + 40u), c.r[17].d[0]);
    set32(c.r[17], c.r[16].w[0] + 14u);
    st64((c.r[29].w[0] + 48u), c.r[18].d[0]);
    set32(c.r[18], c.r[16].w[0] + 15u);
    st64((c.r[29].w[0] + 56u), c.r[19].d[0]);
    set32(c.r[19], c.r[16].w[0] + 16u);
    st64((c.r[29].w[0] + 64u), c.r[20].d[0]);
    set32(c.r[20], c.r[16].w[0] + 13u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    st16((c.r[16].w[0] + 2u), static_cast<std::uint16_t>(c.r[21].w[0]));
    set32(c.r[2], c.r[16].w[0] + 24u);
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 16u);
    set32(c.r[7], c.r[16].w[0] + 12u);
    c.r[8].d[0] = c.r[20].d[0] + 0ull;
    c.r[9].d[0] = c.r[18].d[0] + 0ull;
    c.r[10].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[11], c.r[16].w[0] + 20u);
    st32((c.r[29].w[0]), c.r[2].w[0]);
    c.budget -= 27;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AEF74u); st32((c.r[29].w[0] + 8u), c.r[19].w[0]);  if (depth < kMaxDepth) unit_00AB(c, 346u, depth + 1u); else { c.pc = 0x003AEDF8u; return; } if (c.pc != 0x003AEF74u) [[unlikely]] return; }
L_003AEF74:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; set32(c.r[7], 0u + 8u);  if (t) { goto L_003AEF88; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003AEFFC; } }
    c.budget -= 1;
L_003AEF88:
    st32((c.r[16].w[0] + 52u), 0u);
    st32((c.r[16].w[0] + 48u), 0u);
    st32((c.r[16].w[0] + 44u), 0u);
    st32((c.r[16].w[0] + 40u), 0u);
    st32((c.r[16].w[0] + 32u), 0u);
    st16((c.r[16].w[0] + 28u), static_cast<std::uint16_t>(0u));
    st16((c.r[16].w[0] + 38u), static_cast<std::uint16_t>(0u));
    st16((c.r[16].w[0] + 36u), static_cast<std::uint16_t>(0u));
    set32(c.r[4], ld32((c.r[16].w[0] + 60u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    set32(c.r[5], ld32((c.r[16].w[0] + 64u)));
    st32((c.r[16].w[0] + 80u), c.r[2].w[0]);
    set32(c.r[2], 0u + 3u);
    set32(c.r[6], ld32((c.r[16].w[0] + 68u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0])));
    st32((c.r[16].w[0] + 92u), c.r[4].w[0]);
    st32((c.r[16].w[0] + 84u), c.r[3].w[0]);
    st16((c.r[16].w[0] + 152u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[19].w[0])));
    st32((c.r[16].w[0] + 96u), c.r[5].w[0]);
    st32((c.r[16].w[0] + 88u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 100u), c.r[6].w[0]);
    st32((c.r[16].w[0] + 140u), 0u);
    st32((c.r[16].w[0] + 136u), 0u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0])));
    c.budget -= 27;
    if (c.r[2].d[0] != c.r[7].d[0]) { st16((c.r[16].w[0] + 154u), static_cast<std::uint16_t>(0u));  goto L_003AEFF8; }
    st16((c.r[16].w[0] + 154u), static_cast<std::uint16_t>(c.r[21].w[0]));
    c.budget -= 1;
L_003AEFF8:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 16u)));
    c.budget -= 1;
L_003AEFFC:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 56u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 72u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_003AF020:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], 0u + 1u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    set32(c.r[17], c.r[16].w[0] + 72u);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 11;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[18], ld32((c.r[17].w[0])));  if (t) { goto L_003AF178; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AF054u); set32(c.r[4], ld32((c.r[16].w[0] + 8u)));  if (depth < kMaxDepth) unit_00B0(c, 165u, depth + 1u); else { c.pc = 0x003C11A8u; return; } if (c.pc != 0x003AF054u) [[unlikely]] return; }
L_003AF054:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 4u)));  goto L_003AF178; }
    set32(c.r[4], ld32((c.r[16].w[0] + 124u)));
    set32(c.r[5], c.r[16].w[0] + 104u);
    set32(c.r[2], ld32((c.r[16].w[0] + 120u)));
    set32(c.r[6], c.r[16].w[0] + 108u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003AF074u); set32(c.r[7], c.r[16].w[0] + 112u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003AF074u) [[unlikely]] return; }
L_003AF074:
    set32(c.r[4], ld32((c.r[17].w[0] + 24u)));
    set32(c.r[7], ld32((c.r[17].w[0] + 32u)));
    set32(c.r[6], 0u + 2u);
    set32(c.r[3], ld32((c.r[17].w[0] + 36u)));
    set32(c.r[9], c.r[4].w[0] - c.r[7].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 14u)));
    c.r[2].d[0] = c.r[3].sd[0] < c.r[9].sd[0] ? 1ull : 0ull;
    set32(c.r[5], ld32((c.r[17].w[0] + 4u)));
    if (c.r[2].d[0] != 0) c.r[9].d[0] = c.r[3].d[0];
    set32(c.r[3], c.r[7].w[0] << 1);
    set32(c.r[11], ld32((c.r[17].w[0] + 20u)));
    c.r[2].d[0] = c.r[5].sd[0] < c.r[9].sd[0] ? 1ull : 0ull;
    if (c.r[2].d[0] != 0) c.r[9].d[0] = c.r[5].d[0];
    set32(c.r[10], c.r[11].w[0] + c.r[3].w[0]);
    c.budget -= 16;
    { const bool t = c.r[4].d[0] != c.r[6].d[0]; c.r[3].d[0] = ld8((c.r[16].w[0] + 14u));  if (t) { goto L_003AF120; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 28u)));
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[7].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    c.budget -= 6;
    { const bool t = c.r[9].sd[0] <= 0; set32(c.r[11], c.r[11].w[0] + c.r[2].w[0]);  if (t) { goto L_003AF158; } }
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_003AF0D0:
    c.r[2].d[0] = ld16((c.r[7].w[0]));
    set32(c.r[4], c.r[8].w[0] << 1);
    set32(c.r[5], c.r[4].w[0] + c.r[10].w[0]);
    set32(c.r[4], c.r[4].w[0] + c.r[11].w[0]);
    set32(c.r[3], c.r[2].w[0] << 8);
    set32(c.r[2], c.r[2].w[0] >> 8);
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    set32(c.r[8], c.r[8].w[0] + 1u);
    st16((c.r[5].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[6].d[0] = c.r[8].sd[0] < c.r[9].sd[0] ? 1ull : 0ull;
    c.r[2].d[0] = ld16((c.r[7].w[0] + 2u));
    set32(c.r[7], c.r[7].w[0] + 4u);
    set32(c.r[3], c.r[2].w[0] << 8);
    set32(c.r[2], c.r[2].w[0] >> 8);
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 17;
    { const bool t = c.r[6].d[0] != 0ull; st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AF0D0u | kUnwind; return; } goto L_003AF0D0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = ld8((c.r[16].w[0] + 14u));  if (t) { goto L_003AF158; } }
    c.budget -= 1;
L_003AF120:
    c.budget -= 2;
    { const bool t = c.r[9].sd[0] <= 0; c.r[8].d[0] = 0ull + 0ull;  if (t) { goto L_003AF158; } }
L_003AF128:
    set32(c.r[4], c.r[8].w[0] << 1);
    set32(c.r[8], c.r[8].w[0] + 1u);
    set32(c.r[2], c.r[4].w[0] + c.r[18].w[0]);
    set32(c.r[4], c.r[4].w[0] + c.r[10].w[0]);
    c.r[2].d[0] = ld16((c.r[2].w[0]));
    c.r[5].d[0] = c.r[8].sd[0] < c.r[9].sd[0] ? 1ull : 0ull;
    set32(c.r[3], c.r[2].w[0] << 8);
    set32(c.r[2], c.r[2].w[0] >> 8);
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 11;
    { const bool t = c.r[5].d[0] != 0ull; st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AF128u | kUnwind; return; } goto L_003AF128; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 14u));
    c.budget -= 1;
L_003AF158:
    set32(c.r[2], c.r[3].w[0] << 24);
    set32(c.r[3], 0u + 2u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 24));
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    mmi::mult(c, 0, c.r[9].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    st32((c.r[16].w[0] + 144u), c.r[9].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    st32((c.r[16].w[0] + 148u), c.r[2].w[0]);
    c.budget -= 8;
L_003AF178:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_003AF1A4; }
    set32(c.r[3], ld32((c.r[16].w[0] + 128u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 132u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 148u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003AF198u); set32(c.r[6], ld32((c.r[16].w[0] + 144u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003AF198u) [[unlikely]] return; }
L_003AF198:
    set32(c.r[2], 0u + 3u);
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
L_003AF1A4:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003AF1B8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], 0u + 1u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    set32(c.r[17], c.r[16].w[0] + 72u);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 11;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[18], ld32((c.r[17].w[0])));  if (t) { goto L_003AF2F8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AF1ECu); set32(c.r[4], ld32((c.r[16].w[0] + 8u)));  if (depth < kMaxDepth) unit_00B0(c, 165u, depth + 1u); else { c.pc = 0x003C11A8u; return; } if (c.pc != 0x003AF1ECu) [[unlikely]] return; }
L_003AF1EC:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 4u)));  goto L_003AF2F8; }
    set32(c.r[4], ld32((c.r[16].w[0] + 124u)));
    set32(c.r[5], c.r[16].w[0] + 104u);
    set32(c.r[2], ld32((c.r[16].w[0] + 120u)));
    set32(c.r[6], c.r[16].w[0] + 108u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003AF20Cu); set32(c.r[7], c.r[16].w[0] + 112u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003AF20Cu) [[unlikely]] return; }
L_003AF20C:
    set32(c.r[4], ld32((c.r[17].w[0] + 24u)));
    set32(c.r[9], ld32((c.r[17].w[0] + 32u)));
    set32(c.r[6], 0u + 2u);
    set32(c.r[3], ld32((c.r[17].w[0] + 36u)));
    set32(c.r[8], c.r[4].w[0] - c.r[9].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 14u)));
    c.r[2].d[0] = c.r[3].sd[0] < c.r[8].sd[0] ? 1ull : 0ull;
    set32(c.r[5], ld32((c.r[17].w[0] + 4u)));
    if (c.r[2].d[0] != 0) c.r[8].d[0] = c.r[3].d[0];
    set32(c.r[3], c.r[9].w[0] << 1);
    set32(c.r[11], ld32((c.r[17].w[0] + 20u)));
    c.r[2].d[0] = c.r[5].sd[0] < c.r[8].sd[0] ? 1ull : 0ull;
    if (c.r[2].d[0] != 0) c.r[8].d[0] = c.r[5].d[0];
    set32(c.r[10], c.r[11].w[0] + c.r[3].w[0]);
    c.budget -= 16;
    { const bool t = c.r[4].d[0] != c.r[6].d[0]; c.r[3].d[0] = ld8((c.r[16].w[0] + 14u));  if (t) { goto L_003AF2A8; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 28u)));
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[9].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    c.budget -= 6;
    { const bool t = c.r[8].sd[0] <= 0; set32(c.r[9], c.r[11].w[0] + c.r[2].w[0]);  if (t) { goto L_003AF2DC; } }
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_003AF268:
    c.r[2].d[0] = ld8((c.r[6].w[0]));
    set32(c.r[3], c.r[7].w[0] << 1);
    set32(c.r[4], c.r[3].w[0] + c.r[10].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[9].w[0]);
    set32(c.r[2], c.r[2].w[0] << 8);
    set32(c.r[7], c.r[7].w[0] + 1u);
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[5].d[0] = c.r[7].sd[0] < c.r[8].sd[0] ? 1ull : 0ull;
    c.r[2].d[0] = ld8((c.r[6].w[0] + 1u));
    set32(c.r[6], c.r[6].w[0] + 2u);
    set32(c.r[2], c.r[2].w[0] << 8);
    c.budget -= 13;
    { const bool t = c.r[5].d[0] != 0ull; st16((c.r[3].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AF268u | kUnwind; return; } goto L_003AF268; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = ld8((c.r[16].w[0] + 14u));  if (t) { goto L_003AF2DC; } }
    c.budget -= 1;
L_003AF2A8:
    c.budget -= 2;
    { const bool t = c.r[8].sd[0] <= 0; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_003AF2DC; } }
    c.r[5].d[0] = c.r[10].d[0] + 0ull;
    c.budget -= 2;
L_003AF2B8:
    set32(c.r[2], c.r[18].w[0] + c.r[7].w[0]);
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.r[3].d[0] = ld8((c.r[2].w[0]));
    c.r[4].d[0] = c.r[7].sd[0] < c.r[8].sd[0] ? 1ull : 0ull;
    set32(c.r[3], c.r[3].w[0] << 8);
    st16((c.r[5].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 8;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] + 2u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AF2B8u | kUnwind; return; } goto L_003AF2B8; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 14u));
    c.budget -= 1;
L_003AF2DC:
    set32(c.r[2], c.r[3].w[0] << 24);
    set32(c.r[3], 0u + 2u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 24));
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    mmi::mult(c, 0, c.r[8].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    st32((c.r[16].w[0] + 144u), c.r[8].w[0]);
    st32((c.r[16].w[0] + 148u), c.r[2].w[0]);
    c.budget -= 7;
L_003AF2F8:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_003AF324; }
    set32(c.r[3], ld32((c.r[16].w[0] + 128u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 132u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 148u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003AF318u); set32(c.r[6], ld32((c.r[16].w[0] + 144u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003AF318u) [[unlikely]] return; }
L_003AF318:
    set32(c.r[2], 0u + 3u);
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
L_003AF324:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003AF338:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[2], 0u + 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 154u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_003AF358; } }
    c.budget -= 2;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003AF1B8u | kUnwind; return; } goto L_003AF1B8; }
L_003AF358:
    c.budget -= 2;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003AF020u | kUnwind; return; } goto L_003AF020; }
L_003AF360:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[14].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[7].d[0] + 0ull;
    c.r[12].sd[0] = static_cast<std::int32_t>(0x00640000u);
    c.r[25].d[0] = c.r[5].d[0] + 0ull;
    c.r[11].d[0] = ld8((c.r[14].w[0] + 3u));
    c.r[12].d[0] = c.r[12].d[0] | 29486ull;
    c.r[3].d[0] = ld8((c.r[14].w[0] + 2u));
    c.r[13].d[0] = c.r[8].d[0] + 0ull;
    c.r[4].d[0] = ld8((c.r[14].w[0] + 1u));
    set32(c.r[11], c.r[11].w[0] << 24);
    c.r[2].d[0] = ld8((c.r[14].w[0]));
    set32(c.r[3], c.r[3].w[0] << 16);
    set32(c.r[4], c.r[4].w[0] << 8);
    c.r[24].d[0] = c.r[9].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] | c.r[11].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.r[4].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 23;
    { const bool t = c.r[4].d[0] == c.r[12].d[0]; set32(c.r[11], c.r[14].w[0] + 4u);  if (t) { goto L_003AF3CC; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x646E0000u);
    c.r[3].d[0] = c.r[3].d[0] | 29486ull;
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003AF668; } }
L_003AF3CC:
    c.r[6].d[0] = ld8((c.r[11].w[0] + 3u));
    c.r[15].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[4].d[0] = ld8((c.r[11].w[0] + 2u));
    c.r[2].d[0] = 0ull + 0ull;
    c.r[5].d[0] = ld8((c.r[11].w[0] + 1u));
    set32(c.r[6], c.r[6].w[0] << 24);
    c.r[3].d[0] = ld8((c.r[11].w[0]));
    set32(c.r[5], c.r[5].w[0] << 8);
    set32(c.r[4], c.r[4].w[0] << 16);
    c.r[3].d[0] = c.r[3].d[0] | c.r[6].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];
    c.r[12].d[0] = c.r[3].d[0] | c.r[4].d[0];
    set32(c.r[6], c.r[12].w[0] >> 8);
    set32(c.r[5], c.r[12].w[0] << 8);
    set32(c.r[4], c.r[12].w[0] << 24);
    set32(c.r[3], c.r[12].w[0] >> 24);
    c.r[5].d[0] = c.r[5].d[0] & c.r[15].d[0];
    c.r[6].d[0] = c.r[6].d[0] & 65280ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.r[5].d[0] = c.r[5].d[0] | c.r[6].d[0];
    c.r[12].d[0] = c.r[3].d[0] | c.r[5].d[0];
    c.r[4].d[0] = c.r[25].sd[0] < c.r[12].sd[0] ? 1ull : 0ull;
    c.budget -= 24;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[11], c.r[11].w[0] + 4u);  if (t) { goto L_003AF668; } }
    c.r[9].d[0] = ld8((c.r[11].w[0]));
    set32(c.r[25], 0u + 2u);
    c.r[8].d[0] = ld8((c.r[11].w[0] + 3u));
    c.r[6].d[0] = ld8((c.r[11].w[0] + 2u));
    c.r[7].d[0] = ld8((c.r[11].w[0] + 1u));
    set32(c.r[11], c.r[11].w[0] + 4u);
    c.r[5].d[0] = ld8((c.r[11].w[0] + 3u));
    set32(c.r[8], c.r[8].w[0] << 24);
    c.r[4].d[0] = ld8((c.r[11].w[0] + 2u));
    set32(c.r[7], c.r[7].w[0] << 8);
    c.r[2].d[0] = ld8((c.r[11].w[0] + 1u));
    set32(c.r[5], c.r[5].w[0] << 24);
    c.r[3].d[0] = ld8((c.r[11].w[0]));
    set32(c.r[11], c.r[11].w[0] + 4u);
    set32(c.r[2], c.r[2].w[0] << 8);
    set32(c.r[4], c.r[4].w[0] << 16);
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[2].d[0];
    set32(c.r[6], c.r[6].w[0] << 16);
    c.r[4].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.r[6].d[0] = c.r[6].d[0] | c.r[7].d[0];
    c.r[9].d[0] = c.r[9].d[0] | c.r[8].d[0];
    c.r[9].d[0] = c.r[9].d[0] | c.r[6].d[0];
    set32(c.r[6], c.r[4].w[0] >> 24);
    set32(c.r[2], c.r[4].w[0] >> 8);
    set32(c.r[5], c.r[4].w[0] << 8);
    set32(c.r[7], c.r[9].w[0] >> 8);
    c.r[2].d[0] = c.r[2].d[0] & 65280ull;
    set32(c.r[3], c.r[9].w[0] << 8);
    set32(c.r[4], c.r[4].w[0] << 24);
    c.r[5].d[0] = c.r[5].d[0] & c.r[15].d[0];
    c.r[6].d[0] = c.r[6].d[0] | c.r[4].d[0];
    c.r[5].d[0] = c.r[5].d[0] | c.r[2].d[0];
    set32(c.r[2], c.r[9].w[0] >> 24);
    set32(c.r[4], c.r[9].w[0] << 24);
    c.r[3].d[0] = c.r[3].d[0] & c.r[15].d[0];
    c.r[7].d[0] = c.r[7].d[0] & 65280ull;
    c.r[2].d[0] = c.r[2].d[0] | c.r[4].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[7].d[0];
    c.r[4].d[0] = c.r[6].d[0] | c.r[5].d[0];
    c.budget -= 42;
    { const bool t = c.r[4].d[0] == c.r[25].d[0]; c.r[9].d[0] = c.r[2].d[0] | c.r[3].d[0];  if (t) { goto L_003AF518; } }
    c.r[2].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(3ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 3u);  if (t) { goto L_003AF4F8; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003AF508; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_003AF66C; } }
    c.budget -= 1;
L_003AF4F8:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003AF530; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_003AF66C; } }
L_003AF508:
    set32(c.r[2], 0u + 8u);
    st32((c.r[10].w[0]), c.r[25].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[13].w[0]), c.r[2].w[0]);  if (t) { goto L_003AF53C; } }
L_003AF518:
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], 0u + 8u);
    st32((c.r[10].w[0]), c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[13].w[0]), c.r[3].w[0]);  if (t) { goto L_003AF53C; } }
    c.budget -= 1;
L_003AF530:
    set32(c.r[2], 0u + 16u);
    st32((c.r[10].w[0]), 0u);
    st32((c.r[13].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_003AF53C:
    c.r[5].d[0] = ld8((c.r[11].w[0] + 3u));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[3].d[0] = ld8((c.r[11].w[0] + 2u));
    set32(c.r[7], 0u + 2u);
    c.r[4].d[0] = ld8((c.r[11].w[0] + 1u));
    set32(c.r[5], c.r[5].w[0] << 24);
    c.r[2].d[0] = ld8((c.r[11].w[0]));
    set32(c.r[11], c.r[11].w[0] + 4u);
    set32(c.r[4], c.r[4].w[0] << 8);
    set32(c.r[3], c.r[3].w[0] << 16);
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[5].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    set32(c.r[5], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 8));
    set32(c.r[4], c.r[2].w[0] << 8);
    c.r[5].d[0] = c.r[5].d[0] & 65280ull;
    set32(c.r[3], c.r[2].w[0] >> 24);
    c.r[4].d[0] = c.r[4].d[0] & c.r[6].d[0];
    set32(c.r[2], c.r[2].w[0] << 24);
    c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.r[5].d[0] = ld8((c.r[11].w[0] + 1u));
    c.r[4].d[0] = ld8((c.r[11].w[0] + 3u));
    c.r[3].d[0] = ld8((c.r[11].w[0] + 2u));
    set32(c.r[5], c.r[5].w[0] << 8);
    c.r[2].d[0] = ld8((c.r[11].w[0]));
    set32(c.r[4], c.r[4].w[0] << 24);
    set32(c.r[3], c.r[3].w[0] << 16);
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[4].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    set32(c.r[5], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 8));
    set32(c.r[4], c.r[2].w[0] << 8);
    set32(c.r[3], c.r[2].w[0] >> 24);
    set32(c.r[2], c.r[2].w[0] << 24);
    c.r[4].d[0] = c.r[4].d[0] & c.r[6].d[0];
    c.r[5].d[0] = c.r[5].d[0] & 65280ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st32((c.r[17].w[0]), c.r[3].w[0]);
    set32(c.r[10], ld32((c.r[10].w[0])));
    c.budget -= 46;
    { const bool t = c.r[10].d[0] != c.r[7].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_003AF610; } }
    mmi::div(c, 0, c.r[9].w[0], c.r[3].w[0]);
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { breakpoint(c, 0x003AF5FCu);  goto L_003AF600; }
L_003AF600:
    c.r[2].d[0] = c.lo.d[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[24].w[0]), c.r[2].w[0]);  if (t) { goto L_003AF664; } }
    c.budget -= 1;
L_003AF610:
    c.budget -= 2;
    { const bool t = c.r[10].d[0] != c.r[2].d[0];  if (t) { goto L_003AF630; } }
    mmi::div(c, 0, c.r[9].w[0], c.r[3].w[0]);
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { breakpoint(c, 0x003AF620u);  goto L_003AF624; }
L_003AF624:
    c.r[2].d[0] = c.lo.d[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[24].w[0]), c.r[2].w[0]);  if (t) { goto L_003AF664; } }
L_003AF630:
    c.budget -= 2;
    { const bool t = c.r[10].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);  if (t) { goto L_003AF660; } }
    set32(c.r[2], c.r[9].w[0] >> 31);
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { breakpoint(c, 0x003AF640u);  goto L_003AF644; }
L_003AF644:
    set32(c.r[2], c.r[9].w[0] + c.r[2].w[0]);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    mmi::div(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[24].w[0]), c.r[2].w[0]);  if (t) { goto L_003AF664; } }
    c.budget -= 1;
L_003AF660:
    st32((c.r[24].w[0]), c.r[2].w[0]);
    c.budget -= 1;
L_003AF664:
    set32(c.r[2], c.r[14].w[0] + c.r[12].w[0]);
    c.budget -= 1;
L_003AF668:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_003AF66C:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003AF678:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[6], 0u + 4u);
    set32(c.r[5], c.r[5].w[0] + 4648u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AF698u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 37u, depth + 1u); else { c.pc = 0x00124C88u; return; } if (c.pc != 0x003AF698u) [[unlikely]] return; }
L_003AF698:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 4656u);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[6], 0u + 4u);  if (t) { goto L_003AF6BC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AF6B4u);  if (depth < kMaxDepth) unit_0009(c, 37u, depth + 1u); else { c.pc = 0x00124C88u; return; } if (c.pc != 0x003AF6B4u) [[unlikely]] return; }
L_003AF6B4:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_003AF6C0; }
L_003AF6BC:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_003AF6C0:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003AF6D0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[2].d[0] = c.r[5].sd[0] < 8ll ? 1ull : 0ull;
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[10].d[0] + 0ull;
    st64((c.r[29].w[0] + 40u), c.r[19].d[0]);
    c.r[19].d[0] = c.r[11].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[20].d[0]);
    c.r[20].d[0] = c.r[8].d[0] + 0ull;
    st64((c.r[29].w[0] + 56u), c.r[21].d[0]);
    c.r[21].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 64u), c.r[22].d[0]);
    c.r[22].d[0] = c.r[9].d[0] + 0ull;
    st64((c.r[29].w[0] + 72u), c.r[31].d[0]);
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[8], c.r[29].w[0] + 8u);
    set32(c.r[7], c.r[29].w[0] + 4u);
    set32(c.r[9], c.r[29].w[0] + 12u);
    c.budget -= 23;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[10], ld32((c.r[29].w[0] + 96u)));  if (t) { goto L_003AF738; } }
    st16((c.r[17].w[0]), static_cast<std::uint16_t>(0u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_003AF7B8; } }
L_003AF738:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AF740u);  if (depth < kMaxDepth) unit_00AB(c, 363u, depth + 1u); else { c.pc = 0x003AF360u; return; } if (c.pc != 0x003AF740u) [[unlikely]] return; }
L_003AF740:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[4], c.r[3].w[0] - c.r[16].w[0]);  if (t) { goto L_003AF7B8; } }
    set32(c.r[3], c.r[4].w[0] << 16);
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] <= 0; st16((c.r[17].w[0]), static_cast<std::uint16_t>(c.r[4].w[0]));  if (t) { goto L_003AF7B8; } }
    set32(c.r[6], ld32((c.r[29].w[0])));
    set32(c.r[7], 0u - 1u);
    c.r[3].d[0] = ld8((c.r[29].w[0] + 4u));
    set32(c.r[8], 0u + 1u);
    c.r[4].d[0] = ld8((c.r[29].w[0] + 8u));
    c.r[2].d[0] = 0ull + 0ull;
    st32((c.r[19].w[0]), c.r[6].w[0]);
    set32(c.r[5], ld32((c.r[29].w[0] + 12u)));
    st8((c.r[18].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[20].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[29].w[0] + 80u)));
    st32((c.r[3].w[0]), c.r[5].w[0]);
    st8((c.r[21].w[0]), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0])));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0])));
    mmi::mult(c, 0, c.r[3].w[0], c.r[4].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    c.r[4].d[0] = c.r[3].sd[0] < 0ll ? 1ull : 0ull;
    set32(c.r[5], c.r[3].w[0] + 7u);
    if (c.r[4].d[0] != 0) c.r[3].d[0] = c.r[5].d[0];
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 3));
    st8((c.r[22].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[4], ld32((c.r[29].w[0] + 88u)));
    st32((c.r[4].w[0]), c.r[8].w[0]);
    c.budget -= 23;
L_003AF7B8:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 56u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 72u));
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003AF7E0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    set32(c.r[2], 0u + 1u);
    st64((c.r[29].w[0] + 48u), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 56u), c.r[17].d[0]);
    set32(c.r[17], c.r[16].w[0] + 14u);
    st64((c.r[29].w[0] + 64u), c.r[18].d[0]);
    set32(c.r[18], c.r[16].w[0] + 16u);
    st64((c.r[29].w[0] + 72u), c.r[19].d[0]);
    set32(c.r[19], c.r[16].w[0] + 15u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    st16((c.r[16].w[0] + 2u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], c.r[16].w[0] + 24u);
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 32u);
    set32(c.r[3], c.r[29].w[0] + 36u);
    set32(c.r[7], c.r[16].w[0] + 12u);
    set32(c.r[8], c.r[16].w[0] + 13u);
    c.r[9].d[0] = c.r[19].d[0] + 0ull;
    c.r[10].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[11], c.r[16].w[0] + 20u);
    st32((c.r[29].w[0]), c.r[2].w[0]);
    st32((c.r[29].w[0] + 16u), c.r[3].w[0]);
    c.budget -= 26;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AF848u); st32((c.r[29].w[0] + 8u), c.r[18].w[0]);  if (depth < kMaxDepth) unit_00AB(c, 367u, depth + 1u); else { c.pc = 0x003AF6D0u; return; } if (c.pc != 0x003AF848u) [[unlikely]] return; }
L_003AF848:
    c.budget -= 2;
    if (c.r[2].sd[0] >= 0) { st32((c.r[16].w[0] + 52u), 0u);  goto L_003AF858; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003AF8C0; } }
L_003AF858:
    st32((c.r[16].w[0] + 48u), 0u);
    st32((c.r[16].w[0] + 44u), 0u);
    st32((c.r[16].w[0] + 40u), 0u);
    st32((c.r[16].w[0] + 32u), 0u);
    st16((c.r[16].w[0] + 28u), static_cast<std::uint16_t>(0u));
    st16((c.r[16].w[0] + 38u), static_cast<std::uint16_t>(0u));
    st16((c.r[16].w[0] + 36u), static_cast<std::uint16_t>(0u));
    set32(c.r[5], ld32((c.r[16].w[0] + 60u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    c.r[4].d[0] = ld16((c.r[29].w[0] + 36u));
    st32((c.r[16].w[0] + 80u), c.r[2].w[0]);
    set32(c.r[6], ld32((c.r[16].w[0] + 64u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0])));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 32u)));
    st32((c.r[16].w[0] + 84u), c.r[3].w[0]);
    set32(c.r[3], 0u + 4u);
    set32(c.r[7], ld32((c.r[16].w[0] + 68u)));
    st16((c.r[16].w[0] + 154u), static_cast<std::uint16_t>(c.r[4].w[0]));
    set32(c.r[4], ld32((c.r[18].w[0])));
    st32((c.r[16].w[0] + 92u), c.r[5].w[0]);
    st16((c.r[16].w[0] + 152u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st32((c.r[16].w[0] + 88u), c.r[4].w[0]);
    st32((c.r[16].w[0] + 96u), c.r[6].w[0]);
    st32((c.r[16].w[0] + 100u), c.r[7].w[0]);
    st32((c.r[16].w[0] + 140u), 0u);
    st32((c.r[16].w[0] + 136u), 0u);
    c.budget -= 26;
L_003AF8C0:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 56u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 72u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_003AF8E0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], 0u + 1u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    set32(c.r[17], c.r[16].w[0] + 72u);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 11;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[18], ld32((c.r[17].w[0])));  if (t) { goto L_003AFA38; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AF914u); set32(c.r[4], ld32((c.r[16].w[0] + 8u)));  if (depth < kMaxDepth) unit_00B0(c, 165u, depth + 1u); else { c.pc = 0x003C11A8u; return; } if (c.pc != 0x003AF914u) [[unlikely]] return; }
L_003AF914:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 4u)));  goto L_003AFA38; }
    set32(c.r[4], ld32((c.r[16].w[0] + 124u)));
    set32(c.r[5], c.r[16].w[0] + 104u);
    set32(c.r[2], ld32((c.r[16].w[0] + 120u)));
    set32(c.r[6], c.r[16].w[0] + 108u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003AF934u); set32(c.r[7], c.r[16].w[0] + 112u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003AF934u) [[unlikely]] return; }
L_003AF934:
    set32(c.r[4], ld32((c.r[17].w[0] + 24u)));
    set32(c.r[7], ld32((c.r[17].w[0] + 32u)));
    set32(c.r[6], 0u + 2u);
    set32(c.r[3], ld32((c.r[17].w[0] + 36u)));
    set32(c.r[9], c.r[4].w[0] - c.r[7].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 14u)));
    c.r[2].d[0] = c.r[3].sd[0] < c.r[9].sd[0] ? 1ull : 0ull;
    set32(c.r[5], ld32((c.r[17].w[0] + 4u)));
    if (c.r[2].d[0] != 0) c.r[9].d[0] = c.r[3].d[0];
    set32(c.r[3], c.r[7].w[0] << 1);
    set32(c.r[11], ld32((c.r[17].w[0] + 20u)));
    c.r[2].d[0] = c.r[5].sd[0] < c.r[9].sd[0] ? 1ull : 0ull;
    if (c.r[2].d[0] != 0) c.r[9].d[0] = c.r[5].d[0];
    set32(c.r[10], c.r[11].w[0] + c.r[3].w[0]);
    c.budget -= 16;
    { const bool t = c.r[4].d[0] != c.r[6].d[0]; c.r[3].d[0] = ld8((c.r[16].w[0] + 14u));  if (t) { goto L_003AF9E0; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 28u)));
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[7].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    c.budget -= 6;
    { const bool t = c.r[9].sd[0] <= 0; set32(c.r[11], c.r[11].w[0] + c.r[2].w[0]);  if (t) { goto L_003AFA18; } }
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_003AF990:
    c.r[2].d[0] = ld16((c.r[7].w[0]));
    set32(c.r[4], c.r[8].w[0] << 1);
    set32(c.r[5], c.r[4].w[0] + c.r[10].w[0]);
    set32(c.r[4], c.r[4].w[0] + c.r[11].w[0]);
    set32(c.r[3], c.r[2].w[0] << 8);
    set32(c.r[2], c.r[2].w[0] >> 8);
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    set32(c.r[8], c.r[8].w[0] + 1u);
    st16((c.r[5].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[6].d[0] = c.r[8].sd[0] < c.r[9].sd[0] ? 1ull : 0ull;
    c.r[2].d[0] = ld16((c.r[7].w[0] + 2u));
    set32(c.r[7], c.r[7].w[0] + 4u);
    set32(c.r[3], c.r[2].w[0] << 8);
    set32(c.r[2], c.r[2].w[0] >> 8);
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 17;
    { const bool t = c.r[6].d[0] != 0ull; st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AF990u | kUnwind; return; } goto L_003AF990; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = ld8((c.r[16].w[0] + 14u));  if (t) { goto L_003AFA18; } }
    c.budget -= 1;
L_003AF9E0:
    c.budget -= 2;
    { const bool t = c.r[9].sd[0] <= 0; c.r[8].d[0] = 0ull + 0ull;  if (t) { goto L_003AFA18; } }
L_003AF9E8:
    set32(c.r[4], c.r[8].w[0] << 1);
    set32(c.r[8], c.r[8].w[0] + 1u);
    set32(c.r[2], c.r[4].w[0] + c.r[18].w[0]);
    set32(c.r[4], c.r[4].w[0] + c.r[10].w[0]);
    c.r[2].d[0] = ld16((c.r[2].w[0]));
    c.r[5].d[0] = c.r[8].sd[0] < c.r[9].sd[0] ? 1ull : 0ull;
    set32(c.r[3], c.r[2].w[0] << 8);
    set32(c.r[2], c.r[2].w[0] >> 8);
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 11;
    { const bool t = c.r[5].d[0] != 0ull; st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AF9E8u | kUnwind; return; } goto L_003AF9E8; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 14u));
    c.budget -= 1;
L_003AFA18:
    set32(c.r[2], c.r[3].w[0] << 24);
    set32(c.r[3], 0u + 2u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 24));
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    mmi::mult(c, 0, c.r[9].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    st32((c.r[16].w[0] + 144u), c.r[9].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    st32((c.r[16].w[0] + 148u), c.r[2].w[0]);
    c.budget -= 8;
L_003AFA38:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_003AFA64; }
    set32(c.r[3], ld32((c.r[16].w[0] + 128u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 132u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 148u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003AFA58u); set32(c.r[6], ld32((c.r[16].w[0] + 144u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003AFA58u) [[unlikely]] return; }
L_003AFA58:
    set32(c.r[2], 0u + 3u);
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
L_003AFA64:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003AFA78:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], 0u + 1u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    set32(c.r[17], c.r[16].w[0] + 72u);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 11;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[18], ld32((c.r[17].w[0])));  if (t) { goto L_003AFBB8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AFAACu); set32(c.r[4], ld32((c.r[16].w[0] + 8u)));  if (depth < kMaxDepth) unit_00B0(c, 165u, depth + 1u); else { c.pc = 0x003C11A8u; return; } if (c.pc != 0x003AFAACu) [[unlikely]] return; }
L_003AFAAC:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 4u)));  goto L_003AFBB8; }
    set32(c.r[4], ld32((c.r[16].w[0] + 124u)));
    set32(c.r[5], c.r[16].w[0] + 104u);
    set32(c.r[2], ld32((c.r[16].w[0] + 120u)));
    set32(c.r[6], c.r[16].w[0] + 108u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003AFACCu); set32(c.r[7], c.r[16].w[0] + 112u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003AFACCu) [[unlikely]] return; }
L_003AFACC:
    set32(c.r[4], ld32((c.r[17].w[0] + 24u)));
    set32(c.r[9], ld32((c.r[17].w[0] + 32u)));
    set32(c.r[6], 0u + 2u);
    set32(c.r[3], ld32((c.r[17].w[0] + 36u)));
    set32(c.r[8], c.r[4].w[0] - c.r[9].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 14u)));
    c.r[2].d[0] = c.r[3].sd[0] < c.r[8].sd[0] ? 1ull : 0ull;
    set32(c.r[5], ld32((c.r[17].w[0] + 4u)));
    if (c.r[2].d[0] != 0) c.r[8].d[0] = c.r[3].d[0];
    set32(c.r[3], c.r[9].w[0] << 1);
    set32(c.r[11], ld32((c.r[17].w[0] + 20u)));
    c.r[2].d[0] = c.r[5].sd[0] < c.r[8].sd[0] ? 1ull : 0ull;
    if (c.r[2].d[0] != 0) c.r[8].d[0] = c.r[5].d[0];
    set32(c.r[10], c.r[11].w[0] + c.r[3].w[0]);
    c.budget -= 16;
    { const bool t = c.r[4].d[0] != c.r[6].d[0]; c.r[3].d[0] = ld8((c.r[16].w[0] + 14u));  if (t) { goto L_003AFB68; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 28u)));
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[9].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    c.budget -= 6;
    { const bool t = c.r[8].sd[0] <= 0; set32(c.r[9], c.r[11].w[0] + c.r[2].w[0]);  if (t) { goto L_003AFB9C; } }
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_003AFB28:
    c.r[2].d[0] = ld8((c.r[6].w[0]));
    set32(c.r[3], c.r[7].w[0] << 1);
    set32(c.r[4], c.r[3].w[0] + c.r[10].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[9].w[0]);
    set32(c.r[2], c.r[2].w[0] << 8);
    set32(c.r[7], c.r[7].w[0] + 1u);
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[5].d[0] = c.r[7].sd[0] < c.r[8].sd[0] ? 1ull : 0ull;
    c.r[2].d[0] = ld8((c.r[6].w[0] + 1u));
    set32(c.r[6], c.r[6].w[0] + 2u);
    set32(c.r[2], c.r[2].w[0] << 8);
    c.budget -= 13;
    { const bool t = c.r[5].d[0] != 0ull; st16((c.r[3].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AFB28u | kUnwind; return; } goto L_003AFB28; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = ld8((c.r[16].w[0] + 14u));  if (t) { goto L_003AFB9C; } }
    c.budget -= 1;
L_003AFB68:
    c.budget -= 2;
    { const bool t = c.r[8].sd[0] <= 0; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_003AFB9C; } }
    c.r[5].d[0] = c.r[10].d[0] + 0ull;
    c.budget -= 2;
L_003AFB78:
    set32(c.r[2], c.r[18].w[0] + c.r[7].w[0]);
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.r[3].d[0] = ld8((c.r[2].w[0]));
    c.r[4].d[0] = c.r[7].sd[0] < c.r[8].sd[0] ? 1ull : 0ull;
    set32(c.r[3], c.r[3].w[0] << 8);
    st16((c.r[5].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 8;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] + 2u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AFB78u | kUnwind; return; } goto L_003AFB78; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 14u));
    c.budget -= 1;
L_003AFB9C:
    set32(c.r[2], c.r[3].w[0] << 24);
    set32(c.r[3], 0u + 2u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 24));
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    mmi::mult(c, 0, c.r[8].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    st32((c.r[16].w[0] + 144u), c.r[8].w[0]);
    st32((c.r[16].w[0] + 148u), c.r[2].w[0]);
    c.budget -= 7;
L_003AFBB8:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_003AFBE4; }
    set32(c.r[3], ld32((c.r[16].w[0] + 128u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 132u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 148u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003AFBD8u); set32(c.r[6], ld32((c.r[16].w[0] + 144u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003AFBD8u) [[unlikely]] return; }
L_003AFBD8:
    set32(c.r[2], 0u + 3u);
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
L_003AFBE4:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003AFBF8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], 0u + 1u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    set32(c.r[17], c.r[16].w[0] + 72u);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 11;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[18], ld32((c.r[17].w[0])));  if (t) { goto L_003AFD60; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AFC2Cu); set32(c.r[4], ld32((c.r[16].w[0] + 8u)));  if (depth < kMaxDepth) unit_00B0(c, 165u, depth + 1u); else { c.pc = 0x003C11A8u; return; } if (c.pc != 0x003AFC2Cu) [[unlikely]] return; }
L_003AFC2C:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 4u)));  goto L_003AFD60; }
    set32(c.r[4], ld32((c.r[16].w[0] + 124u)));
    set32(c.r[5], c.r[16].w[0] + 104u);
    set32(c.r[2], ld32((c.r[16].w[0] + 120u)));
    set32(c.r[6], c.r[16].w[0] + 108u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003AFC4Cu); set32(c.r[7], c.r[16].w[0] + 112u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003AFC4Cu) [[unlikely]] return; }
L_003AFC4C:
    set32(c.r[4], ld32((c.r[17].w[0] + 24u)));
    set32(c.r[7], ld32((c.r[17].w[0] + 32u)));
    set32(c.r[6], 0u + 2u);
    set32(c.r[3], ld32((c.r[17].w[0] + 36u)));
    set32(c.r[9], c.r[4].w[0] - c.r[7].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 14u)));
    c.r[2].d[0] = c.r[3].sd[0] < c.r[9].sd[0] ? 1ull : 0ull;
    set32(c.r[5], ld32((c.r[17].w[0] + 4u)));
    if (c.r[2].d[0] != 0) c.r[9].d[0] = c.r[3].d[0];
    set32(c.r[3], c.r[7].w[0] << 1);
    set32(c.r[10], ld32((c.r[17].w[0] + 20u)));
    c.r[2].d[0] = c.r[5].sd[0] < c.r[9].sd[0] ? 1ull : 0ull;
    if (c.r[2].d[0] != 0) c.r[9].d[0] = c.r[5].d[0];
    set32(c.r[11], c.r[10].w[0] + c.r[3].w[0]);
    c.budget -= 16;
    { const bool t = c.r[4].d[0] != c.r[6].d[0]; c.r[3].d[0] = ld8((c.r[16].w[0] + 14u));  if (t) { goto L_003AFD00; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 28u)));
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[7].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    c.budget -= 6;
    { const bool t = c.r[9].sd[0] <= 0; set32(c.r[12], c.r[10].w[0] + c.r[2].w[0]);  if (t) { goto L_003AFD44; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[10], c.r[2].w[0] + 8248u);
    c.budget -= 3;
L_003AFCB0:
    c.r[2].d[0] = ld8((c.r[7].w[0]));
    set32(c.r[4], c.r[8].w[0] << 1);
    set32(c.r[5], c.r[4].w[0] + c.r[11].w[0]);
    set32(c.r[4], c.r[4].w[0] + c.r[12].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[8], c.r[8].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] + c.r[10].w[0]);
    c.r[6].d[0] = c.r[8].sd[0] < c.r[9].sd[0] ? 1ull : 0ull;
    c.r[3].d[0] = ld16((c.r[2].w[0]));
    st16((c.r[5].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[2].d[0] = ld8((c.r[7].w[0] + 1u));
    set32(c.r[7], c.r[7].w[0] + 2u);
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[10].w[0]);
    c.r[3].d[0] = ld16((c.r[2].w[0]));
    c.budget -= 17;
    { const bool t = c.r[6].d[0] != 0ull; st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AFCB0u | kUnwind; return; } goto L_003AFCB0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = ld8((c.r[16].w[0] + 14u));  if (t) { goto L_003AFD44; } }
    c.budget -= 1;
L_003AFD00:
    c.budget -= 2;
    { const bool t = c.r[9].sd[0] <= 0; c.r[8].d[0] = 0ull + 0ull;  if (t) { goto L_003AFD44; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    c.r[5].d[0] = c.r[11].d[0] + 0ull;
    set32(c.r[6], c.r[2].w[0] + 8248u);
    c.budget -= 4;
L_003AFD18:
    set32(c.r[3], c.r[18].w[0] + c.r[8].w[0]);
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.r[2].d[0] = ld8((c.r[3].w[0]));
    c.r[4].d[0] = c.r[8].sd[0] < c.r[9].sd[0] ? 1ull : 0ull;
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    c.r[3].d[0] = ld16((c.r[2].w[0]));
    st16((c.r[5].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 10;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] + 2u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AFD18u | kUnwind; return; } goto L_003AFD18; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 14u));
    c.budget -= 1;
L_003AFD44:
    set32(c.r[2], c.r[3].w[0] << 24);
    set32(c.r[3], 0u + 2u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 24));
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    mmi::mult(c, 0, c.r[9].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    st32((c.r[16].w[0] + 144u), c.r[9].w[0]);
    st32((c.r[16].w[0] + 148u), c.r[2].w[0]);
    c.budget -= 7;
L_003AFD60:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_003AFD8C; }
    set32(c.r[3], ld32((c.r[16].w[0] + 128u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 132u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 148u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003AFD80u); set32(c.r[6], ld32((c.r[16].w[0] + 144u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003AFD80u) [[unlikely]] return; }
L_003AFD80:
    set32(c.r[2], 0u + 3u);
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
L_003AFD8C:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003AFDA0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[2], 0u + 2u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 154u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_003AFDC8; } }
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003AFBF8u | kUnwind; return; } goto L_003AFBF8; }
L_003AFDC8:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_003AFDD8; } }
    c.budget -= 2;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003AFA78u | kUnwind; return; } goto L_003AFA78; }
L_003AFDD8:
    c.budget -= 2;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003AF8E0u | kUnwind; return; } goto L_003AF8E0; }
L_003AFDE0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_003AFDE8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00420000u);
    st32((c.r[2].w[0] + 8768u), c.r[4].w[0]);
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[3].w[0] + 8772u), c.r[5].w[0]);  c.pc = t; return; }
L_003AFE00:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[3], ld32((c.r[2].w[0] + 8768u)));
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_003AFE24; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003AFE24u); set32(c.r[4], ld32((c.r[2].w[0] + 8772u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003AFE24u) [[unlikely]] return; }
L_003AFE24:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003AFE38:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00420000u);
    c.r[2].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] + 8764u);
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0]), c.r[3].w[0]);  c.pc = t; return; }
L_003AFE58:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00420000u);
    c.r[2].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] + 8764u);
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0]), c.r[3].w[0]);  c.pc = t; return; }
L_003AFE78:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[3], ld32((c.r[2].w[0] + 8764u)));
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
    { const bool t = c.r[3].d[0] != 0ull; st64((c.r[29].w[0] + 40u), c.r[31].d[0]);  if (t) { goto L_003AFEBC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AFEBCu);  if (depth < kMaxDepth) unit_00AB(c, 394u, depth + 1u); else { c.pc = 0x003AFE38u; return; } if (c.pc != 0x003AFEBCu) [[unlikely]] return; }
L_003AFEBC:
    st16((c.r[18].w[0]), static_cast<std::uint16_t>(0u));
    st16((c.r[19].w[0]), static_cast<std::uint16_t>(0u));
    c.budget -= 4;
    { const bool t = c.r[17].d[0] != 0ull; st16((c.r[20].w[0]), static_cast<std::uint16_t>(0u));  if (t) { goto L_003AFED4; } }
    c.budget -= 2;
    { const bool t = c.r[16].sd[0] <= 0; c.r[2].d[0] = 0ull + 0ull;  if (t) { [[clang::musttail]] return unit_00AC(c, 2u, depth); } }
L_003AFED4:
    c.r[11].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[11].w[0] + 4712u);
    c.budget -= 5;
    { const bool t = c.r[16].sd[0] <= 0; c.r[10].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 512u)));  if (t) { goto L_003AFF44; } }
    c.r[8].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 2;
L_003AFEF0:
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
    { const bool t = c.r[6].d[0] != 0ull; c.r[10].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0])));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AFEF0u | kUnwind; return; } goto L_003AFEF0; } }
    set32(c.r[2], c.r[11].w[0] + 4712u);
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_003AFF44:
    c.budget -= 2;
    { const bool t = c.r[16].sd[0] <= 0; c.r[8].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 1024u)));  if (t) { goto L_003AFF9C; } }
    c.r[9].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_003AFF50:
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
    { const bool t = c.r[6].d[0] != 0ull; c.r[8].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0])));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AFF50u | kUnwind; return; } goto L_003AFF50; } }
L_003AFF9C:
    set32(c.r[2], c.r[11].w[0] + 4712u);
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = c.r[16].sd[0] <= 0; c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 1536u)));  if (t) { goto L_003AFFFC; } }
    c.r[9].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_003AFFB0:
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
    { const bool t = c.r[6].d[0] != 0ull; c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0])));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AFFB0u | kUnwind; return; } goto L_003AFFB0; } }
L_003AFFFC:
    st16((c.r[18].w[0]), static_cast<std::uint16_t>(c.r[10].w[0]));
    c.budget -= 1;
    [[clang::musttail]] return unit_00AC(c, 1u, depth);
}

}
