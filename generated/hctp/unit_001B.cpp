#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_001B[4096] = {
    1, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 4, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 7, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 10, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0,
    0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 18, 0, 0,
    0, 0, 0, 0, 19, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    22, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 28, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0,
    0, 0, 31, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 33, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 36,
    0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 39,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 41, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0,
    44, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 48, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 51, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 62, 0, 63,
    0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 68, 0, 69, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 71, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0,
    74, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 77, 0, 78, 0, 0, 0, 0, 0, 0, 0, 0, 0, 79,
    0, 0, 0, 0, 80, 0, 81, 0, 0, 0, 0, 82, 0, 0, 0, 0, 83, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 86, 0, 87, 0, 88, 0, 89, 0, 90, 0, 91, 0, 92, 0, 93, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 95, 0, 96, 0, 97, 0, 98, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 100, 0, 101, 0, 102, 0, 103, 0, 0,
    104, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 106, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 107, 0, 0,
    0, 108, 0, 109, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 112, 0, 0, 0,
    113, 0, 114, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 116, 0, 0, 0, 117, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 0,
    120, 0, 0, 0, 0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 122, 0, 123, 0, 0, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 126, 0, 0,
    127, 0, 0, 128, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 132, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 141, 0, 0, 0, 142, 0, 0, 0, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 0, 147,
    0, 148, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 0, 150, 0, 151, 0, 0, 0, 0, 152, 0, 0, 0,
    0, 153, 0, 0, 0, 0, 154, 0, 0, 155, 0, 0, 0, 0, 0, 156, 0, 0, 0, 157, 0, 0, 0, 0, 158, 0, 0, 0, 0, 159, 0, 0,
    0, 0, 160, 0, 0, 161, 0, 0, 0, 0, 0, 0, 162, 0, 0, 0, 0, 163, 0, 0, 0, 0, 164, 0, 0, 165, 0, 0, 0, 0, 0, 0,
    166, 0, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 171, 0, 0, 0,
    0, 0, 0, 0, 0, 172, 0, 0, 173, 0, 0, 0, 0, 0, 0, 0, 0, 174, 0, 0, 175, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 177, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0, 0, 179, 0, 0,
    180, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 181, 0, 182, 0, 0, 183, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 184, 0, 185, 0, 0, 186, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 187, 0, 0, 188, 0, 0, 0, 189, 0, 190, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 191, 0, 0, 0, 192, 0, 0, 0, 193, 0, 0, 194, 0, 0, 0, 195, 0,
    0, 0, 196, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 0, 0, 0, 0, 199, 0, 200, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0,
    202, 0, 0, 0, 0, 0, 203, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 204, 0, 0, 205, 0, 0, 206, 0, 0, 207, 0, 0,
    208, 0, 0, 209, 0, 0, 210, 0, 0, 0, 0, 0, 211, 0, 0, 0, 0, 0, 0, 0, 212, 0, 0, 0, 0, 0, 0, 213, 0, 214, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 215, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 216, 0, 0, 0, 0, 217, 0, 0, 0, 0, 0, 0,
    218, 0, 0, 0, 0, 219, 0, 0, 0, 0, 220, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 222, 0, 0, 0, 0, 0, 0, 0, 0, 223, 0, 0, 0, 0, 224, 0, 0, 0, 0, 225, 0, 0, 0, 0, 226, 0, 0, 227, 0,
    0, 0, 0, 0, 228, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 229, 0, 0, 0, 230, 0, 0, 0, 0, 231, 0, 0, 0,
    0, 232, 0, 0, 233, 0, 0, 0, 0, 0, 0, 0, 234, 0, 0, 0, 235, 0, 0, 0, 0, 0, 0, 0, 0, 236, 0, 0, 237, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 238, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 239, 0, 240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 241, 0, 0, 0, 0, 0, 0, 242, 0, 0, 0, 0,
    0, 0, 0, 0, 243, 0, 0, 0, 0, 0, 0, 244, 0, 0, 0, 0, 0, 0, 0, 0, 0, 245, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    246, 0, 0, 0, 0, 0, 0, 0, 0, 247, 0, 0, 248, 0, 0, 0, 0, 0, 0, 0, 0, 249, 0, 0, 250, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 251, 0, 0, 0, 0, 0, 0, 252, 0, 0, 253, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 254, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 256, 0, 0, 0, 0, 0, 257, 0, 0, 0,
    258, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 259, 0, 0, 0, 0, 260, 0, 0, 0, 0, 0, 0, 0, 0, 261, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 262, 0, 0, 0, 0, 0, 263, 0, 0, 0, 0, 0, 264, 0, 0, 0, 0, 0, 265, 0, 0,
    0, 0, 0, 266, 0, 0, 0, 0, 0, 267, 0, 0, 0, 0, 0, 0, 268, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 269, 0, 0, 0, 0, 0, 0, 0, 270, 0, 0, 0, 0, 0, 0, 271, 0, 0, 0, 0, 0, 0, 0, 272, 0, 0, 0, 273, 0,
    0, 0, 274, 0, 0, 0, 0, 0, 275, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 276, 0, 0, 0, 277, 0, 0, 0, 278, 0, 0,
    0, 0, 279, 0, 0, 0, 0, 0, 0, 0, 0, 280, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 281, 0, 0, 0, 0, 0, 0, 0, 282, 0,
    0, 0, 0, 0, 283, 0, 0, 0, 0, 0, 0, 0, 284, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 285, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 286, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 287, 0, 0, 0, 0, 0, 0, 0, 0, 0, 288, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 289, 0, 0, 290, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 291, 0, 0, 0, 0, 0, 0, 0, 0,
    292, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 293, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 294, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 295, 0, 0, 0, 0, 0, 0, 296, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 297, 0,
    298, 0, 0, 0, 299, 0, 0, 0, 0, 0, 0, 300, 0, 0, 0, 0, 0, 0, 0, 0, 301, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    302, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 303, 0, 0, 304, 0, 0, 0, 0, 0, 305, 0,
    0, 0, 0, 0, 0, 306, 0, 0, 0, 0, 0, 0, 307, 0, 0, 308, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 309, 0, 0, 310, 0, 0, 0, 0, 0, 311, 0, 0, 0, 0, 0, 0, 312, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    313, 0, 0, 0, 0, 0, 0, 0, 314, 0, 0, 315, 0, 0, 316, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 317, 0, 0, 0, 0,
    0, 0, 0, 318, 0, 0, 0, 0, 0, 0, 0, 319, 0, 0, 0, 0, 0, 0, 0, 0, 320, 0, 0, 0, 0, 0, 0, 0, 0, 321, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 322, 0, 0, 0, 0, 0, 0, 0, 0, 323, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 324, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 325, 0, 326, 0, 0, 0, 0, 327, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 328, 0, 329, 0, 0, 0, 0, 330, 0, 0, 0, 0,
    331, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 332, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 333, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 334, 0, 0, 0, 0, 0, 335, 0, 0, 336, 0, 337, 0, 0, 0, 0, 338, 0, 0, 0, 0, 0, 339, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 340, 0, 0, 0, 0, 341, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 342, 0, 0, 0, 0, 343, 0, 0, 0, 0, 0, 0, 0, 0, 344, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 345, 0, 0, 0, 0, 0, 0, 0, 346, 0, 0, 0, 0, 0,
    0, 0, 347, 0, 0, 0, 0, 0, 348, 0, 0, 0, 0, 0, 0, 0, 0, 349, 0, 350, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 351, 0, 0, 0, 0, 0, 0, 0, 352, 0, 0, 0, 0, 0, 0, 0, 353,
    0, 0, 0, 0, 0, 0, 0, 0, 354, 0, 0, 0, 355, 0, 0, 0, 0, 356, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 357, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 358, 0, 0, 0, 0, 359, 0, 0, 0, 0, 0, 0, 0,
    360, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 361, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 362, 0, 0, 0, 363, 0, 0, 0, 364, 0, 0, 0, 0, 0, 0, 0, 0, 0, 365, 0,
    0, 0, 0, 0, 0, 0, 366, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 367, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 368, 0, 369, 0, 0, 0, 0, 0, 0, 370, 0, 0, 0, 371, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 372, 0, 0, 0, 373, 0, 0, 0, 374, 0, 0, 0, 375, 0, 0, 0, 376, 0, 0, 0, 377, 0, 0, 0, 378, 0, 0, 0,
    379, 0, 0, 0, 380, 0, 0, 0, 381, 0, 0, 0, 382, 0, 0, 0, 383, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 384, 0,
    0, 385, 0, 0, 0, 0, 0, 0, 0, 0, 0, 386, 0, 0, 0, 0, 0, 387, 0, 0, 0, 0, 388, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    389, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 390, 0, 0, 0, 391, 0, 0, 392, 0, 0, 0, 0, 0, 393,
    0, 0, 0, 0, 0, 0, 0, 0, 394, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 395, 0, 0, 0, 0, 0, 0, 0, 396,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 397, 0, 0, 0, 0, 0, 0, 0, 0, 0, 398, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 399, 0, 0, 0, 0, 0, 0, 400, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 401, 0, 0, 402, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 403, 0, 404, 0, 0, 0, 0, 405, 0, 0, 0, 0, 406, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 407, 0, 0,
    0, 408, 0, 0, 0, 0, 0, 0, 0, 0, 409, 0, 0, 0, 0, 410, 0, 0, 0, 411, 0, 412, 0, 413, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 414, 0, 0, 0, 0, 0, 0, 0, 0, 415, 0, 416, 0, 0, 0, 0, 0, 0, 0, 0, 417, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 418, 0, 0, 0, 0, 0, 0, 0, 0, 0, 419, 0, 0, 0, 0, 0, 420, 0, 0, 0, 0, 0, 0, 0, 0, 421, 0, 0, 0, 0,
    0, 422, 0, 0, 0, 0, 0, 0, 423, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 424, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 425, 0, 426, 0, 427, 0, 428, 0, 429, 0, 430, 0, 0, 0, 0, 0, 0, 431, 0, 0, 0, 432,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    433, 0, 0, 0, 0, 0, 0, 0, 434, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 435, 0, 0, 0, 0, 0, 436, 0,
    0, 0, 0, 0, 0, 0, 437, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 438, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    439, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 440, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 441, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 442, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 443, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 444, 0, 0, 445, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 446, 0, 0, 0, 0, 0,
    0, 0, 447, 0, 0, 0, 0, 0, 448, 0, 0, 0, 0, 0, 449, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 450, 0, 0, 0,
    451, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 452, 0, 0, 0, 0, 0, 0, 0, 453, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 454, 0, 0, 0, 0, 455, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 456, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 457, 0, 0, 0, 0, 0, 0, 0, 0, 458, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 459, 0, 0, 0, 460, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 461, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 462, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 463, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 464, 0, 0, 0, 0, 0, 0, 0, 465, 0, 0, 466,
    0, 0, 0, 467, 0, 0, 0, 0, 0, 0, 0, 0, 468, 0, 0, 0, 0, 0, 0, 0, 469, 0, 0, 470, 0, 0, 471, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 472, 0, 0, 0, 0, 0, 0, 0, 473, 0, 0, 0, 0, 0, 0, 474, 0, 0, 0, 475, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 476, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 477, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 478, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 479, 0, 0, 0, 480, 0, 0,
};

void unit_001B(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_0016C000;
    case 2u: goto L_0016C018;
    case 3u: goto L_0016C044;
    case 4u: goto L_0016C04C;
    case 5u: goto L_0016C05C;
    case 6u: goto L_0016C090;
    case 7u: goto L_0016C0AC;
    case 8u: goto L_0016C0B8;
    case 9u: goto L_0016C0E4;
    case 10u: goto L_0016C0F4;
    case 11u: goto L_0016C12C;
    case 12u: goto L_0016C13C;
    case 13u: goto L_0016C174;
    case 14u: goto L_0016C184;
    case 15u: goto L_0016C1AC;
    case 16u: goto L_0016C1BC;
    case 17u: goto L_0016C1E4;
    case 18u: goto L_0016C1F4;
    case 19u: goto L_0016C210;
    case 20u: goto L_0016C224;
    case 21u: goto L_0016C258;
    case 22u: goto L_0016C280;
    case 23u: goto L_0016C290;
    case 24u: goto L_0016C2D0;
    case 25u: goto L_0016C2E0;
    case 26u: goto L_0016C330;
    case 27u: goto L_0016C354;
    case 28u: goto L_0016C384;
    case 29u: goto L_0016C3A8;
    case 30u: goto L_0016C3F4;
    case 31u: goto L_0016C408;
    case 32u: goto L_0016C424;
    case 33u: goto L_0016C438;
    case 34u: goto L_0016C44C;
    case 35u: goto L_0016C468;
    case 36u: goto L_0016C47C;
    case 37u: goto L_0016C48C;
    case 38u: goto L_0016C4B0;
    case 39u: goto L_0016C4FC;
    case 40u: goto L_0016C524;
    case 41u: goto L_0016C534;
    case 42u: goto L_0016C54C;
    case 43u: goto L_0016C570;
    case 44u: goto L_0016C580;
    case 45u: goto L_0016C5B0;
    case 46u: goto L_0016C5C0;
    case 47u: goto L_0016C5DC;
    case 48u: goto L_0016C5F8;
    case 49u: goto L_0016C648;
    case 50u: goto L_0016C664;
    case 51u: goto L_0016C690;
    case 52u: goto L_0016C6A4;
    case 53u: goto L_0016C6C8;
    case 54u: goto L_0016C714;
    case 55u: goto L_0016C728;
    case 56u: goto L_0016C744;
    case 57u: goto L_0016C760;
    case 58u: goto L_0016C798;
    case 59u: goto L_0016C7B4;
    case 60u: goto L_0016C7C4;
    case 61u: goto L_0016C7E0;
    case 62u: goto L_0016C7F4;
    case 63u: goto L_0016C7FC;
    case 64u: goto L_0016C810;
    case 65u: goto L_0016C82C;
    case 66u: goto L_0016C848;
    case 67u: goto L_0016C864;
    case 68u: goto L_0016C904;
    case 69u: goto L_0016C90C;
    case 70u: goto L_0016C92C;
    case 71u: goto L_0016C948;
    case 72u: goto L_0016C950;
    case 73u: goto L_0016C974;
    case 74u: goto L_0016C980;
    case 75u: goto L_0016C9A0;
    case 76u: goto L_0016C9B8;
    case 77u: goto L_0016C9CC;
    case 78u: goto L_0016C9D4;
    case 79u: goto L_0016C9FC;
    case 80u: goto L_0016CA10;
    case 81u: goto L_0016CA18;
    case 82u: goto L_0016CA2C;
    case 83u: goto L_0016CA40;
    case 84u: goto L_0016CA54;
    case 85u: goto L_0016CA70;
    case 86u: goto L_0016CA98;
    case 87u: goto L_0016CAA0;
    case 88u: goto L_0016CAA8;
    case 89u: goto L_0016CAB0;
    case 90u: goto L_0016CAB8;
    case 91u: goto L_0016CAC0;
    case 92u: goto L_0016CAC8;
    case 93u: goto L_0016CAD0;
    case 94u: goto L_0016CAE0;
    case 95u: goto L_0016CB0C;
    case 96u: goto L_0016CB14;
    case 97u: goto L_0016CB1C;
    case 98u: goto L_0016CB24;
    case 99u: goto L_0016CB30;
    case 100u: goto L_0016CB5C;
    case 101u: goto L_0016CB64;
    case 102u: goto L_0016CB6C;
    case 103u: goto L_0016CB74;
    case 104u: goto L_0016CB80;
    case 105u: goto L_0016CBB4;
    case 106u: goto L_0016CBC0;
    case 107u: goto L_0016CBF4;
    case 108u: goto L_0016CC04;
    case 109u: goto L_0016CC0C;
    case 110u: goto L_0016CC18;
    case 111u: goto L_0016CC60;
    case 112u: goto L_0016CC70;
    case 113u: goto L_0016CC80;
    case 114u: goto L_0016CC88;
    case 115u: goto L_0016CCD4;
    case 116u: goto L_0016CCE8;
    case 117u: goto L_0016CCF8;
    case 118u: goto L_0016CD20;
    case 119u: goto L_0016CD68;
    case 120u: goto L_0016CD80;
    case 121u: goto L_0016CDA0;
    case 122u: goto L_0016CE04;
    case 123u: goto L_0016CE0C;
    case 124u: goto L_0016CE30;
    case 125u: goto L_0016CE40;
    case 126u: goto L_0016CE74;
    case 127u: goto L_0016CE80;
    case 128u: goto L_0016CE8C;
    case 129u: goto L_0016CEA4;
    case 130u: goto L_0016CEC0;
    case 131u: goto L_0016CED8;
    case 132u: goto L_0016CF08;
    case 133u: goto L_0016CF20;
    case 134u: goto L_0016CF98;
    case 135u: goto L_0016CFAC;
    case 136u: goto L_0016D014;
    case 137u: goto L_0016D030;
    case 138u: goto L_0016D054;
    case 139u: goto L_0016D0AC;
    case 140u: goto L_0016D0D0;
    case 141u: goto L_0016D110;
    case 142u: goto L_0016D120;
    case 143u: goto L_0016D148;
    case 144u: goto L_0016D168;
    case 145u: goto L_0016D1A0;
    case 146u: goto L_0016D1DC;
    case 147u: goto L_0016D1FC;
    case 148u: goto L_0016D204;
    case 149u: goto L_0016D234;
    case 150u: goto L_0016D254;
    case 151u: goto L_0016D25C;
    case 152u: goto L_0016D270;
    case 153u: goto L_0016D284;
    case 154u: goto L_0016D298;
    case 155u: goto L_0016D2A4;
    case 156u: goto L_0016D2BC;
    case 157u: goto L_0016D2CC;
    case 158u: goto L_0016D2E0;
    case 159u: goto L_0016D2F4;
    case 160u: goto L_0016D308;
    case 161u: goto L_0016D314;
    case 162u: goto L_0016D330;
    case 163u: goto L_0016D344;
    case 164u: goto L_0016D358;
    case 165u: goto L_0016D364;
    case 166u: goto L_0016D380;
    case 167u: goto L_0016D3A4;
    case 168u: goto L_0016D3B0;
    case 169u: goto L_0016D430;
    case 170u: goto L_0016D460;
    case 171u: goto L_0016D470;
    case 172u: goto L_0016D494;
    case 173u: goto L_0016D4A0;
    case 174u: goto L_0016D4C4;
    case 175u: goto L_0016D4D0;
    case 176u: goto L_0016D520;
    case 177u: goto L_0016D53C;
    case 178u: goto L_0016D550;
    case 179u: goto L_0016D574;
    case 180u: goto L_0016D580;
    case 181u: goto L_0016D5BC;
    case 182u: goto L_0016D5C4;
    case 183u: goto L_0016D5D0;
    case 184u: goto L_0016D604;
    case 185u: goto L_0016D60C;
    case 186u: goto L_0016D618;
    case 187u: goto L_0016D650;
    case 188u: goto L_0016D65C;
    case 189u: goto L_0016D66C;
    case 190u: goto L_0016D674;
    case 191u: goto L_0016D6BC;
    case 192u: goto L_0016D6CC;
    case 193u: goto L_0016D6DC;
    case 194u: goto L_0016D6E8;
    case 195u: goto L_0016D6F8;
    case 196u: goto L_0016D708;
    case 197u: goto L_0016D740;
    case 198u: goto L_0016D7A4;
    case 199u: goto L_0016D7CC;
    case 200u: goto L_0016D7D4;
    case 201u: goto L_0016D7E8;
    case 202u: goto L_0016D800;
    case 203u: goto L_0016D818;
    case 204u: goto L_0016D850;
    case 205u: goto L_0016D85C;
    case 206u: goto L_0016D868;
    case 207u: goto L_0016D874;
    case 208u: goto L_0016D880;
    case 209u: goto L_0016D88C;
    case 210u: goto L_0016D898;
    case 211u: goto L_0016D8B0;
    case 212u: goto L_0016D8D0;
    case 213u: goto L_0016D8EC;
    case 214u: goto L_0016D8F4;
    case 215u: goto L_0016D924;
    case 216u: goto L_0016D950;
    case 217u: goto L_0016D964;
    case 218u: goto L_0016D980;
    case 219u: goto L_0016D994;
    case 220u: goto L_0016D9A8;
    case 221u: goto L_0016D9BC;
    case 222u: goto L_0016DA0C;
    case 223u: goto L_0016DA30;
    case 224u: goto L_0016DA44;
    case 225u: goto L_0016DA58;
    case 226u: goto L_0016DA6C;
    case 227u: goto L_0016DA78;
    case 228u: goto L_0016DA90;
    case 229u: goto L_0016DACC;
    case 230u: goto L_0016DADC;
    case 231u: goto L_0016DAF0;
    case 232u: goto L_0016DB04;
    case 233u: goto L_0016DB10;
    case 234u: goto L_0016DB30;
    case 235u: goto L_0016DB40;
    case 236u: goto L_0016DB64;
    case 237u: goto L_0016DB70;
    case 238u: goto L_0016DBF4;
    case 239u: goto L_0016DC1C;
    case 240u: goto L_0016DC24;
    case 241u: goto L_0016DC50;
    case 242u: goto L_0016DC6C;
    case 243u: goto L_0016DC90;
    case 244u: goto L_0016DCAC;
    case 245u: goto L_0016DCD4;
    case 246u: goto L_0016DD00;
    case 247u: goto L_0016DD24;
    case 248u: goto L_0016DD30;
    case 249u: goto L_0016DD54;
    case 250u: goto L_0016DD60;
    case 251u: goto L_0016DD98;
    case 252u: goto L_0016DDB4;
    case 253u: goto L_0016DDC0;
    case 254u: goto L_0016DE08;
    case 255u: goto L_0016DE38;
    case 256u: goto L_0016DE58;
    case 257u: goto L_0016DE70;
    case 258u: goto L_0016DE80;
    case 259u: goto L_0016DEB8;
    case 260u: goto L_0016DECC;
    case 261u: goto L_0016DEF0;
    case 262u: goto L_0016DF2C;
    case 263u: goto L_0016DF44;
    case 264u: goto L_0016DF5C;
    case 265u: goto L_0016DF74;
    case 266u: goto L_0016DF8C;
    case 267u: goto L_0016DFA4;
    case 268u: goto L_0016DFC0;
    case 269u: goto L_0016E00C;
    case 270u: goto L_0016E02C;
    case 271u: goto L_0016E048;
    case 272u: goto L_0016E068;
    case 273u: goto L_0016E078;
    case 274u: goto L_0016E088;
    case 275u: goto L_0016E0A0;
    case 276u: goto L_0016E0D4;
    case 277u: goto L_0016E0E4;
    case 278u: goto L_0016E0F4;
    case 279u: goto L_0016E108;
    case 280u: goto L_0016E12C;
    case 281u: goto L_0016E158;
    case 282u: goto L_0016E178;
    case 283u: goto L_0016E190;
    case 284u: goto L_0016E1B0;
    case 285u: goto L_0016E1E0;
    case 286u: goto L_0016E20C;
    case 287u: goto L_0016E240;
    case 288u: goto L_0016E268;
    case 289u: goto L_0016E2A0;
    case 290u: goto L_0016E2AC;
    case 291u: goto L_0016E2DC;
    case 292u: goto L_0016E300;
    case 293u: goto L_0016E330;
    case 294u: goto L_0016E364;
    case 295u: goto L_0016E398;
    case 296u: goto L_0016E3B4;
    case 297u: goto L_0016E3F8;
    case 298u: goto L_0016E400;
    case 299u: goto L_0016E410;
    case 300u: goto L_0016E42C;
    case 301u: goto L_0016E450;
    case 302u: goto L_0016E480;
    case 303u: goto L_0016E4D4;
    case 304u: goto L_0016E4E0;
    case 305u: goto L_0016E4F8;
    case 306u: goto L_0016E514;
    case 307u: goto L_0016E530;
    case 308u: goto L_0016E53C;
    case 309u: goto L_0016E588;
    case 310u: goto L_0016E594;
    case 311u: goto L_0016E5AC;
    case 312u: goto L_0016E5C8;
    case 313u: goto L_0016E600;
    case 314u: goto L_0016E620;
    case 315u: goto L_0016E62C;
    case 316u: goto L_0016E638;
    case 317u: goto L_0016E66C;
    case 318u: goto L_0016E68C;
    case 319u: goto L_0016E6AC;
    case 320u: goto L_0016E6D0;
    case 321u: goto L_0016E6F4;
    case 322u: goto L_0016E748;
    case 323u: goto L_0016E76C;
    case 324u: goto L_0016E7D0;
    case 325u: goto L_0016E808;
    case 326u: goto L_0016E810;
    case 327u: goto L_0016E824;
    case 328u: goto L_0016E850;
    case 329u: goto L_0016E858;
    case 330u: goto L_0016E86C;
    case 331u: goto L_0016E880;
    case 332u: goto L_0016E8E4;
    case 333u: goto L_0016E944;
    case 334u: goto L_0016E988;
    case 335u: goto L_0016E9A0;
    case 336u: goto L_0016E9AC;
    case 337u: goto L_0016E9B4;
    case 338u: goto L_0016E9C8;
    case 339u: goto L_0016E9E0;
    case 340u: goto L_0016EA28;
    case 341u: goto L_0016EA3C;
    case 342u: goto L_0016EAAC;
    case 343u: goto L_0016EAC0;
    case 344u: goto L_0016EAE4;
    case 345u: goto L_0016EB48;
    case 346u: goto L_0016EB68;
    case 347u: goto L_0016EB88;
    case 348u: goto L_0016EBA0;
    case 349u: goto L_0016EBC4;
    case 350u: goto L_0016EBCC;
    case 351u: goto L_0016EC3C;
    case 352u: goto L_0016EC5C;
    case 353u: goto L_0016EC7C;
    case 354u: goto L_0016ECA0;
    case 355u: goto L_0016ECB0;
    case 356u: goto L_0016ECC4;
    case 357u: goto L_0016ED04;
    case 358u: goto L_0016ED4C;
    case 359u: goto L_0016ED60;
    case 360u: goto L_0016ED80;
    case 361u: goto L_0016EDF0;
    case 362u: goto L_0016EEB0;
    case 363u: goto L_0016EEC0;
    case 364u: goto L_0016EED0;
    case 365u: goto L_0016EEF8;
    case 366u: goto L_0016EF18;
    case 367u: goto L_0016EF60;
    case 368u: goto L_0016EF98;
    case 369u: goto L_0016EFA0;
    case 370u: goto L_0016EFBC;
    case 371u: goto L_0016EFCC;
    case 372u: goto L_0016F010;
    case 373u: goto L_0016F020;
    case 374u: goto L_0016F030;
    case 375u: goto L_0016F040;
    case 376u: goto L_0016F050;
    case 377u: goto L_0016F060;
    case 378u: goto L_0016F070;
    case 379u: goto L_0016F080;
    case 380u: goto L_0016F090;
    case 381u: goto L_0016F0A0;
    case 382u: goto L_0016F0B0;
    case 383u: goto L_0016F0C0;
    case 384u: goto L_0016F0F8;
    case 385u: goto L_0016F104;
    case 386u: goto L_0016F12C;
    case 387u: goto L_0016F144;
    case 388u: goto L_0016F158;
    case 389u: goto L_0016F180;
    case 390u: goto L_0016F1C8;
    case 391u: goto L_0016F1D8;
    case 392u: goto L_0016F1E4;
    case 393u: goto L_0016F1FC;
    case 394u: goto L_0016F220;
    case 395u: goto L_0016F25C;
    case 396u: goto L_0016F27C;
    case 397u: goto L_0016F2B0;
    case 398u: goto L_0016F2D8;
    case 399u: goto L_0016F304;
    case 400u: goto L_0016F320;
    case 401u: goto L_0016F34C;
    case 402u: goto L_0016F358;
    case 403u: goto L_0016F390;
    case 404u: goto L_0016F398;
    case 405u: goto L_0016F3AC;
    case 406u: goto L_0016F3C0;
    case 407u: goto L_0016F3F4;
    case 408u: goto L_0016F404;
    case 409u: goto L_0016F428;
    case 410u: goto L_0016F43C;
    case 411u: goto L_0016F44C;
    case 412u: goto L_0016F454;
    case 413u: goto L_0016F45C;
    case 414u: goto L_0016F490;
    case 415u: goto L_0016F4B4;
    case 416u: goto L_0016F4BC;
    case 417u: goto L_0016F4E0;
    case 418u: goto L_0016F508;
    case 419u: goto L_0016F530;
    case 420u: goto L_0016F548;
    case 421u: goto L_0016F56C;
    case 422u: goto L_0016F584;
    case 423u: goto L_0016F5A0;
    case 424u: goto L_0016F5E0;
    case 425u: goto L_0016F628;
    case 426u: goto L_0016F630;
    case 427u: goto L_0016F638;
    case 428u: goto L_0016F640;
    case 429u: goto L_0016F648;
    case 430u: goto L_0016F650;
    case 431u: goto L_0016F66C;
    case 432u: goto L_0016F67C;
    case 433u: goto L_0016F700;
    case 434u: goto L_0016F720;
    case 435u: goto L_0016F760;
    case 436u: goto L_0016F778;
    case 437u: goto L_0016F798;
    case 438u: goto L_0016F7D0;
    case 439u: goto L_0016F800;
    case 440u: goto L_0016F82C;
    case 441u: goto L_0016F870;
    case 442u: goto L_0016F89C;
    case 443u: goto L_0016F8F0;
    case 444u: goto L_0016F968;
    case 445u: goto L_0016F974;
    case 446u: goto L_0016F9E8;
    case 447u: goto L_0016FA08;
    case 448u: goto L_0016FA20;
    case 449u: goto L_0016FA38;
    case 450u: goto L_0016FA70;
    case 451u: goto L_0016FA80;
    case 452u: goto L_0016FAC0;
    case 453u: goto L_0016FAE0;
    case 454u: goto L_0016FB08;
    case 455u: goto L_0016FB1C;
    case 456u: goto L_0016FB58;
    case 457u: goto L_0016FB88;
    case 458u: goto L_0016FBAC;
    case 459u: goto L_0016FC10;
    case 460u: goto L_0016FC20;
    case 461u: goto L_0016FCA0;
    case 462u: goto L_0016FCD4;
    case 463u: goto L_0016FD24;
    case 464u: goto L_0016FD50;
    case 465u: goto L_0016FD70;
    case 466u: goto L_0016FD7C;
    case 467u: goto L_0016FD8C;
    case 468u: goto L_0016FDB0;
    case 469u: goto L_0016FDD0;
    case 470u: goto L_0016FDDC;
    case 471u: goto L_0016FDE8;
    case 472u: goto L_0016FE10;
    case 473u: goto L_0016FE30;
    case 474u: goto L_0016FE4C;
    case 475u: goto L_0016FE5C;
    case 476u: goto L_0016FE90;
    case 477u: goto L_0016FEC0;
    case 478u: goto L_0016FEF0;
    case 479u: goto L_0016FFE4;
    case 480u: goto L_0016FFF4;
    default: bad_entry(c, 0x0016C000u); return;
    }
L_0016C000:
    set32(c.r[4], c.r[19].w[0] + c.r[4].w[0]);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 16u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0016C02C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016C018u);  if (depth < kMaxDepth) unit_001A(c, 403u, depth + 1u); else { c.pc = 0x0016BE40u; return; } if (c.pc != 0x0016C018u) [[unlikely]] return; }
L_0016C018:
    set32(c.r[3], ld32((c.r[29].w[0] + 88u)));
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[3], c.r[19].w[0] + c.r[3].w[0]);
    st16((c.r[3].w[0] + 16u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 5;
L_0016C02C:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[3].d[0] = c.r[17].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0016BFF0u | kUnwind; return; } [[clang::musttail]] return unit_001A(c, 418u, depth); } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[18], c.r[18].w[0] + 1u);  if (t) { goto L_0016C060; } }
L_0016C044:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016C04Cu);  if (depth < kMaxDepth) unit_001A(c, 403u, depth + 1u); else { c.pc = 0x0016BE40u; return; } if (c.pc != 0x0016C04Cu) [[unlikely]] return; }
L_0016C04C:
    set32(c.r[3], ld32((c.r[29].w[0] + 88u)));
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[3], c.r[19].w[0] + c.r[3].w[0]);
    st16((c.r[3].w[0] + 16u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 4;
L_0016C05C:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_0016C060:
    c.r[3].d[0] = c.r[18].sd[0] < 32ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[19], c.r[19].w[0] + 1120u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0016BFC8u | kUnwind; return; } [[clang::musttail]] return unit_001A(c, 416u, depth); } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0016C090:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[5].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016C0ACu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_000B(c, 104u, depth + 1u); else { c.pc = 0x0012CEC0u; return; } if (c.pc != 0x0016C0ACu) [[unlikely]] return; }
L_0016C0AC:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[18], 0u + 2u);
    set32(c.r[3], c.r[18].w[0] << 1);
    c.budget -= 3;
L_0016C0B8:
    set32(c.r[3], c.r[16].w[0] + c.r[3].w[0]);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 16u)));
    set32(c.r[17], c.r[3].w[0] + 16u);
    c.r[3].d[0] = c.r[4].sd[0] < 7000ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; c.r[1].d[0] = c.r[4].sd[0] < 7010ll ? 1ull : 0ull;  if (t) { goto L_0016C0F8; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0016C0F8; } }
    set32(c.r[4], c.r[4].w[0] - 7000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016C0E4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_001A(c, 307u, depth + 1u); else { c.pc = 0x0016AD80u; return; } if (c.pc != 0x0016C0E4u) [[unlikely]] return; }
L_0016C0E4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], 0u + 1u);  if (t) { goto L_0016C0F8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016C0F4u);  if (depth < kMaxDepth) unit_001A(c, 403u, depth + 1u); else { c.pc = 0x0016BE40u; return; } if (c.pc != 0x0016C0F4u) [[unlikely]] return; }
L_0016C0F4:
    st16((c.r[17].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 1;
L_0016C0F8:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[1].d[0] = c.r[18].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[3], c.r[18].w[0] << 1);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0016C0B8u | kUnwind; return; } goto L_0016C0B8; } }
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 16u)));
    c.r[3].d[0] = c.r[4].sd[0] < 7020ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[1].d[0] = c.r[4].sd[0] < 7030ll ? 1ull : 0ull;  if (t) { goto L_0016C140; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0016C140; } }
    set32(c.r[4], c.r[4].w[0] - 7020u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016C12Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_001A(c, 307u, depth + 1u); else { c.pc = 0x0016AD80u; return; } if (c.pc != 0x0016C12Cu) [[unlikely]] return; }
L_0016C12C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], 0u + 2u);  if (t) { goto L_0016C140; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016C13Cu);  if (depth < kMaxDepth) unit_001A(c, 403u, depth + 1u); else { c.pc = 0x0016BE40u; return; } if (c.pc != 0x0016C13Cu) [[unlikely]] return; }
L_0016C13C:
    st16((c.r[16].w[0] + 16u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 1;
L_0016C140:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 118u)));
    c.r[3].d[0] = c.r[4].sd[0] < 7040ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[1].d[0] = c.r[4].sd[0] < 7121ll ? 1ull : 0ull;  if (t) { goto L_0016C188; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0016C188; } }
    set32(c.r[2], c.r[4].w[0] - 7040u);
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] >= 0; set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 3));  if (t) { goto L_0016C16C; } }
    set32(c.r[2], c.r[2].w[0] + 7u);
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 3));
    c.budget -= 2;
L_0016C16C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016C174u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_001A(c, 307u, depth + 1u); else { c.pc = 0x0016AD80u; return; } if (c.pc != 0x0016C174u) [[unlikely]] return; }
L_0016C174:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], 0u + 3u);  if (t) { goto L_0016C188; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016C184u);  if (depth < kMaxDepth) unit_001A(c, 403u, depth + 1u); else { c.pc = 0x0016BE40u; return; } if (c.pc != 0x0016C184u) [[unlikely]] return; }
L_0016C184:
    st16((c.r[16].w[0] + 118u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 1;
L_0016C188:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 200u)));
    c.r[3].d[0] = c.r[4].sd[0] < 7200ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[1].d[0] = c.r[4].sd[0] < 7210ll ? 1ull : 0ull;  if (t) { goto L_0016C1C0; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0016C1C0; } }
    set32(c.r[4], c.r[4].w[0] - 7200u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016C1ACu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_001A(c, 307u, depth + 1u); else { c.pc = 0x0016AD80u; return; } if (c.pc != 0x0016C1ACu) [[unlikely]] return; }
L_0016C1AC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], 0u + 4u);  if (t) { goto L_0016C1C0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016C1BCu);  if (depth < kMaxDepth) unit_001A(c, 403u, depth + 1u); else { c.pc = 0x0016BE40u; return; } if (c.pc != 0x0016C1BCu) [[unlikely]] return; }
L_0016C1BC:
    st16((c.r[16].w[0] + 200u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 1;
L_0016C1C0:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 234u)));
    c.r[3].d[0] = c.r[4].sd[0] < 7220ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[1].d[0] = c.r[4].sd[0] < 7230ll ? 1ull : 0ull;  if (t) { goto L_0016C1F8; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0016C1F8; } }
    set32(c.r[4], c.r[4].w[0] - 7220u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016C1E4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_001A(c, 307u, depth + 1u); else { c.pc = 0x0016AD80u; return; } if (c.pc != 0x0016C1E4u) [[unlikely]] return; }
L_0016C1E4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], 0u + 5u);  if (t) { goto L_0016C1F8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016C1F4u);  if (depth < kMaxDepth) unit_001A(c, 403u, depth + 1u); else { c.pc = 0x0016BE40u; return; } if (c.pc != 0x0016C1F4u) [[unlikely]] return; }
L_0016C1F4:
    st16((c.r[16].w[0] + 234u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 1;
L_0016C1F8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0016C210:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016C224u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x0016C224u) [[unlikely]] return; }
L_0016C224:
    set32(c.r[3], c.r[16].w[0] << 3);
    set32(c.r[4], c.r[3].w[0] - c.r[16].w[0]);
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[3].w[0] << 5);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 294u)));
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[16].w[0] + 86u);  if (t) { goto L_0016C250; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0016C264; } }
L_0016C250:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016C258u);  if (depth < kMaxDepth) unit_001C(c, 310u, depth + 1u); else { c.pc = 0x00173590u; return; } if (c.pc != 0x0016C258u) [[unlikely]] return; }
L_0016C258:
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    c.r[2].d[0] = 0ll < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
L_0016C264:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0016C280:
    c.r[4].d[0] = c.r[4].d[0] & 65535ull;
    c.budget -= 3;
    { set32(c.r[5], 0u + 25500u);  [[clang::musttail]] return unit_001C(c, 300u, depth); }
L_0016C290:
    set32(c.r[29], c.r[29].w[0] - 80u);
    set32(c.r[2], 0u + 8u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    set32(c.r[3], c.r[4].w[0] << 2);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    set32(c.r[18], 0u + 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    if (c.r[4].d[0] != 0) c.r[18].d[0] = c.r[2].d[0];
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00410000u);
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 1552u);
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 16;
    { const bool t = 0ull == 0ull; set32(c.r[19], c.r[2].w[0] + c.r[3].w[0]);  if (t) { goto L_0016C2F0; } }
L_0016C2D0:
    set32(c.r[2], ld32((c.r[19].w[0])));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0016C2E0u); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0016C2E0u) [[unlikely]] return; }
L_0016C2E0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0016C2EC; } }
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_0016C2EC:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_0016C2F0:
    c.r[2].d[0] = c.r[16].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0016C2D0u | kUnwind; return; } goto L_0016C2D0; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != c.r[18].d[0];  if (t) { goto L_0016C308; } }
    set32(c.r[17], 0u - 1u);
    c.budget -= 1;
L_0016C308:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0016C330:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016C354u); set32(c.r[5], 0u + 19u);  if (depth < kMaxDepth) unit_0010(c, 29u, depth + 1u); else { c.pc = 0x00140690u; return; } if (c.pc != 0x0016C354u) [[unlikely]] return; }
L_0016C354:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], 0u + 7u);
    set32(c.r[3], c.r[3].w[0] - 16080u);
    st32((c.r[17].w[0] + 8u), c.r[3].w[0]);
    st32((c.r[17].w[0] + 12u), c.r[16].w[0]);
    st32((c.r[17].w[0] + 16u), 0u);
    c.budget -= 8;
    { const bool t = c.r[16].d[0] == c.r[2].d[0]; st32((c.r[17].w[0] + 20u), 0u);  if (t) { goto L_0016C430; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00410000u);
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[3].w[0] + 1648u);  if (t) { goto L_0016C394; } }
L_0016C384:
    set32(c.r[2], c.r[4].w[0] << 3);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(0u));
    c.budget -= 4;
L_0016C394:
    c.r[2].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(5ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0016C384u | kUnwind; return; } goto L_0016C384; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016C3A8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 23u, depth + 1u); else { c.pc = 0x0016C290u; return; } if (c.pc != 0x0016C3A8u) [[unlikely]] return; }
L_0016C3A8:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_0016C3C4; } }
    set32(c.r[2], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00410000u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 1648u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0016C3E8; } }
L_0016C3C4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], 0u + 336u);  if (t) { goto L_0016C3EC; } }
    set32(c.r[2], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00410000u);
    st8((c.r[1].w[0] + 1656u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00410000u);
    st8((c.r[1].w[0] + 1664u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00410000u);
    st8((c.r[1].w[0] + 1672u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 7;
L_0016C3E8:
    set32(c.r[4], 0u + 336u);
    c.budget -= 1;
L_0016C3EC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016C3F4u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0016C3F4u) [[unlikely]] return; }
L_0016C3F4:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0016C428; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016C408u);  if (depth < kMaxDepth) unit_001B(c, 85u, depth + 1u); else { c.pc = 0x0016CA70u; return; } if (c.pc != 0x0016C408u) [[unlikely]] return; }
L_0016C408:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00410000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], c.r[6].w[0] + 1648u);
    set32(c.r[7], 0u + 5u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016C424u); c.r[8].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 104u, depth + 1u); else { c.pc = 0x0016CB80u; return; } if (c.pc != 0x0016C424u) [[unlikely]] return; }
L_0016C424:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0016C428:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 24u), c.r[18].w[0]);  if (t) { goto L_0016C470; } }
L_0016C430:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016C438u); set32(c.r[4], 0u + 336u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0016C438u) [[unlikely]] return; }
L_0016C438:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0016C46C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016C44Cu);  if (depth < kMaxDepth) unit_001B(c, 85u, depth + 1u); else { c.pc = 0x0016CA70u; return; } if (c.pc != 0x0016C44Cu) [[unlikely]] return; }
L_0016C44C:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00410000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], c.r[6].w[0] + 1696u);
    set32(c.r[7], 0u + 5u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016C468u); c.r[8].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 104u, depth + 1u); else { c.pc = 0x0016CB80u; return; } if (c.pc != 0x0016C468u) [[unlikely]] return; }
L_0016C468:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0016C46C:
    st32((c.r[17].w[0] + 24u), c.r[18].w[0]);
    c.budget -= 1;
L_0016C470:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016C47Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 94u, depth + 1u); else { c.pc = 0x0016CAE0u; return; } if (c.pc != 0x0016C47Cu) [[unlikely]] return; }
L_0016C47C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 26392u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016C48Cu); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_002A(c, 147u, depth + 1u); else { c.pc = 0x001A96C0u; return; } if (c.pc != 0x0016C48Cu) [[unlikely]] return; }
L_0016C48C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0016C4B0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0016C54C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] - 16080u);
    st32((c.r[17].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 24u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0016C4FC; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0016C4FC; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0016C4FCu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0016C4FCu) [[unlikely]] return; }
L_0016C4FC:
    st32((c.r[17].w[0] + 24u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 20u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0016C524; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0016C524; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0016C524u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0016C524u) [[unlikely]] return; }
L_0016C524:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016C534u); st32((c.r[17].w[0] + 20u), 0u);  if (depth < kMaxDepth) unit_0010(c, 31u, depth + 1u); else { c.pc = 0x00140700u; return; } if (c.pc != 0x0016C534u) [[unlikely]] return; }
L_0016C534:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0016C550; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016C54Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x0016C54Cu) [[unlikely]] return; }
L_0016C54C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0016C550:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0016C570:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0016C580:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 24u)));
    c.budget -= 8;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0016C5C8; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 44u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0016C5B0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0016C5B0u) [[unlikely]] return; }
L_0016C5B0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0016C74C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016C5C0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 57u, depth + 1u); else { c.pc = 0x0016C760u; return; } if (c.pc != 0x0016C5C0u) [[unlikely]] return; }
L_0016C5C0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_0016C750; } }
L_0016C5C8:
    set32(c.r[4], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 44u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0016C5DCu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0016C5DCu) [[unlikely]] return; }
L_0016C5DC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0016C74C; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0016C5F8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0016C5F8u) [[unlikely]] return; }
L_0016C5F8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0016C66C; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[3], 0u + 7u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0016C62C; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0016C62C; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[1].w[0] - 13144u)));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 92u));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0016C74C; } }
L_0016C62C:
    set32(c.r[3], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[5], ld32((c.r[3].w[0] + 544u)));
    c.r[6].d[0] = c.r[2].d[0] ^ 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016C648u); c.r[6].d[0] = c.r[6].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  if (depth < kMaxDepth) unit_001A(c, 357u, depth + 1u); else { c.pc = 0x0016BA20u; return; } if (c.pc != 0x0016C648u) [[unlikely]] return; }
L_0016C648:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0016C74C; } }
    set32(c.r[25], ld32((c.r[16].w[0] + 8u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0016C664u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0016C664u) [[unlikely]] return; }
L_0016C664:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0016C74C; } }
L_0016C66C:
    set32(c.r[4], ld32((c.r[16].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0016C690; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0016C690; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0016C690u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0016C690u) [[unlikely]] return; }
L_0016C690:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00410000u);
    st32((c.r[16].w[0] + 20u), 0u);
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[3].w[0] + 1648u);  if (t) { goto L_0016C6B4; } }
L_0016C6A4:
    set32(c.r[2], c.r[4].w[0] << 3);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(0u));
    c.budget -= 4;
L_0016C6B4:
    c.r[2].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(5ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0016C6A4u | kUnwind; return; } goto L_0016C6A4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016C6C8u); set32(c.r[4], ld32((c.r[16].w[0] + 12u)));  if (depth < kMaxDepth) unit_001B(c, 23u, depth + 1u); else { c.pc = 0x0016C290u; return; } if (c.pc != 0x0016C6C8u) [[unlikely]] return; }
L_0016C6C8:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_0016C6E4; } }
    set32(c.r[2], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00410000u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 1648u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0016C708; } }
L_0016C6E4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], 0u + 336u);  if (t) { goto L_0016C70C; } }
    set32(c.r[2], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00410000u);
    st8((c.r[1].w[0] + 1656u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00410000u);
    st8((c.r[1].w[0] + 1664u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00410000u);
    st8((c.r[1].w[0] + 1672u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 7;
L_0016C708:
    set32(c.r[4], 0u + 336u);
    c.budget -= 1;
L_0016C70C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016C714u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0016C714u) [[unlikely]] return; }
L_0016C714:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_0016C748; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016C728u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 85u, depth + 1u); else { c.pc = 0x0016CA70u; return; } if (c.pc != 0x0016C728u) [[unlikely]] return; }
L_0016C728:
    set32(c.r[5], ld32((c.r[16].w[0] + 12u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00410000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[6], c.r[6].w[0] + 1648u);
    set32(c.r[7], 0u + 5u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016C744u); c.r[8].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 104u, depth + 1u); else { c.pc = 0x0016CB80u; return; } if (c.pc != 0x0016C744u) [[unlikely]] return; }
L_0016C744:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0016C748:
    st32((c.r[16].w[0] + 24u), c.r[17].w[0]);
    c.budget -= 1;
L_0016C74C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_0016C750:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0016C760:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[2], 0u + 7u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0016C834; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 24u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0016C798u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0016C798u) [[unlikely]] return; }
L_0016C798:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0016C7E8; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 24u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 48u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0016C7B4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0016C7B4u) [[unlikely]] return; }
L_0016C7B4:
    set32(c.r[4], ld32((c.r[17].w[0] + 12u)));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016C7C4u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_001A(c, 357u, depth + 1u); else { c.pc = 0x0016BA20u; return; } if (c.pc != 0x0016C7C4u) [[unlikely]] return; }
L_0016C7C4:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_0016CA54; } }
    set32(c.r[25], ld32((c.r[17].w[0] + 8u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0016C7E0u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0016C7E0u) [[unlikely]] return; }
L_0016C7E0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_0016CA58; } }
L_0016C7E8:
    set32(c.r[5], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016C7F4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 99u, depth + 1u); else { c.pc = 0x0016CB30u; return; } if (c.pc != 0x0016C7F4u) [[unlikely]] return; }
L_0016C7F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016C7FCu); set32(c.r[4], 0u + 16u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0016C7FCu) [[unlikely]] return; }
L_0016C7FC:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0016C810; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016C810u);  if (depth < kMaxDepth) unit_0021(c, 346u, depth + 1u); else { c.pc = 0x00186E50u; return; } if (c.pc != 0x0016C810u) [[unlikely]] return; }
L_0016C810:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_0016CA54; } }
    set32(c.r[25], ld32((c.r[17].w[0] + 8u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0016C82Cu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0016C82Cu) [[unlikely]] return; }
L_0016C82C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0016CA54; } }
L_0016C834:
    set32(c.r[4], ld32((c.r[17].w[0] + 24u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0016C848u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0016C848u) [[unlikely]] return; }
L_0016C848:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], 0u - 1u);  if (t) { goto L_0016C8D0; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 24u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 48u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0016C864u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0016C864u) [[unlikely]] return; }
L_0016C864:
    set32(c.r[3], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0016C8C4; } }
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0016C8BC; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0016C8B4; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0016C8AC; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0016C8A4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[17].w[0] + 16u)));  if (t) { goto L_0016C8D8; } }
L_0016C8A4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 16u), 0u);  if (t) { goto L_0016C8D4; } }
L_0016C8AC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 16u), c.r[3].w[0]);  if (t) { goto L_0016C8D4; } }
L_0016C8B4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 16u), c.r[3].w[0]);  if (t) { goto L_0016C8D4; } }
L_0016C8BC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 16u), c.r[3].w[0]);  if (t) { goto L_0016C8D4; } }
L_0016C8C4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 16u), c.r[3].w[0]);  if (t) { goto L_0016C8D4; } }
    set32(c.r[3], 0u - 1u);
    c.budget -= 1;
L_0016C8D0:
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    c.budget -= 1;
L_0016C8D4:
    set32(c.r[3], ld32((c.r[17].w[0] + 16u)));
    c.budget -= 1;
L_0016C8D8:
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0016C9D8; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + 3216u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x0016C000u < 16384u) { entry = entries_001B[(t - 0x0016C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0016C904:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016C90Cu); set32(c.r[4], ld32((c.r[17].w[0] + 12u)));  if (depth < kMaxDepth) unit_001B(c, 367u, depth + 1u); else { c.pc = 0x0016EF60u; return; } if (c.pc != 0x0016C90Cu) [[unlikely]] return; }
L_0016C90C:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_0016C91C; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0016C91C:
    set32(c.r[4], ld32((c.r[17].w[0] + 12u)));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016C92Cu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_001A(c, 357u, depth + 1u); else { c.pc = 0x0016BA20u; return; } if (c.pc != 0x0016C92Cu) [[unlikely]] return; }
L_0016C92C:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_0016CA54; } }
    set32(c.r[25], ld32((c.r[17].w[0] + 8u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0016C948u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0016C948u) [[unlikely]] return; }
L_0016C948:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0016CA54; } }
L_0016C950:
    set32(c.r[4], ld32((c.r[17].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0016C974; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0016C974; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0016C974u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0016C974u) [[unlikely]] return; }
L_0016C974:
    set32(c.r[4], 0u + 576u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016C980u); st32((c.r[17].w[0] + 24u), 0u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0016C980u) [[unlikely]] return; }
L_0016C980:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0016C9A0; } }
    set32(c.r[5], ld32((c.r[17].w[0] + 12u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[17].w[0] + 16u)));
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016C9A0u); set32(c.r[8], 0u + 5u);  if (depth < kMaxDepth) unit_001B(c, 180u, depth + 1u); else { c.pc = 0x0016D580u; return; } if (c.pc != 0x0016C9A0u) [[unlikely]] return; }
L_0016C9A0:
    st32((c.r[17].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 20u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0016C9B8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0016C9B8u) [[unlikely]] return; }
L_0016C9B8:
    set32(c.r[4], ld32((c.r[17].w[0] + 20u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0016C9CCu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0016C9CCu) [[unlikely]] return; }
L_0016C9CC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0016C9D8; } }
L_0016C9D4:
    c.r[16].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_0016C9D8:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0016CA54; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_0016C9FC; } }
    set32(c.r[25], ld32((c.r[17].w[0] + 8u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0016C9FCu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0016C9FCu) [[unlikely]] return; }
L_0016C9FC:
    set32(c.r[5], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != 0ull; set32(c.r[4], 0u + 28u);  if (t) { goto L_0016CA38; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016CA10u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 99u, depth + 1u); else { c.pc = 0x0016CB30u; return; } if (c.pc != 0x0016CA10u) [[unlikely]] return; }
L_0016CA10:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016CA18u); set32(c.r[4], 0u + 16u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0016CA18u) [[unlikely]] return; }
L_0016CA18:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0016CA54; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016CA2Cu);  if (depth < kMaxDepth) unit_0021(c, 346u, depth + 1u); else { c.pc = 0x00186E50u; return; } if (c.pc != 0x0016CA2Cu) [[unlikely]] return; }
L_0016CA2C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0016CA54; } }
    set32(c.r[4], 0u + 28u);
    c.budget -= 1;
L_0016CA38:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016CA40u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0016CA40u) [[unlikely]] return; }
L_0016CA40:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0016CA54; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016CA54u); set32(c.r[5], 0u + 7u);  if (depth < kMaxDepth) unit_001B(c, 26u, depth + 1u); else { c.pc = 0x0016C330u; return; } if (c.pc != 0x0016CA54u) [[unlikely]] return; }
L_0016CA54:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_0016CA58:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0016CA70:
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(8ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x00460000u);  if (t) { goto L_0016CAD0; } }
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + 3248u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x0016C000u < 16384u) { entry = entries_001B[(t - 0x0016C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0016CA98:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 87u);  if (t) { goto L_0016CAD4; } }
L_0016CAA0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 173u);  if (t) { goto L_0016CAD4; } }
L_0016CAA8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 169u);  if (t) { goto L_0016CAD4; } }
L_0016CAB0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 171u);  if (t) { goto L_0016CAD4; } }
L_0016CAB8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 172u);  if (t) { goto L_0016CAD4; } }
L_0016CAC0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 170u);  if (t) { goto L_0016CAD4; } }
L_0016CAC8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 89u);  if (t) { goto L_0016CAD4; } }
L_0016CAD0:
    set32(c.r[2], 0u + 830u);
    c.budget -= 1;
L_0016CAD4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0016CAE0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[1].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(8ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_0016CB24; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + 3280u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x0016C000u < 16384u) { entry = entries_001B[(t - 0x0016C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0016CB0C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016CB14u);  if (depth < kMaxDepth) unit_009F(c, 54u, depth + 1u); else { c.pc = 0x0037CCD0u; return; } if (c.pc != 0x0016CB14u) [[unlikely]] return; }
L_0016CB14:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_0016CB28; } }
L_0016CB1C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016CB24u);  if (depth < kMaxDepth) unit_00A1(c, 247u, depth + 1u); else { c.pc = 0x003867E0u; return; } if (c.pc != 0x0016CB24u) [[unlikely]] return; }
L_0016CB24:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_0016CB28:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0016CB30:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[1].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(8ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_0016CB74; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + 3312u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x0016C000u < 16384u) { entry = entries_001B[(t - 0x0016C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0016CB5C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016CB64u);  if (depth < kMaxDepth) unit_009F(c, 75u, depth + 1u); else { c.pc = 0x0037CE00u; return; } if (c.pc != 0x0016CB64u) [[unlikely]] return; }
L_0016CB64:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_0016CB78; } }
L_0016CB6C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016CB74u);  if (depth < kMaxDepth) unit_00A1(c, 254u, depth + 1u); else { c.pc = 0x00386850u; return; } if (c.pc != 0x0016CB74u) [[unlikely]] return; }
L_0016CB74:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_0016CB78:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0016CB80:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    c.r[16].d[0] = c.r[8].d[0] + 0ull;
    c.r[6].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016CBB4u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000C(c, 12u, depth + 1u); else { c.pc = 0x001300B0u; return; } if (c.pc != 0x0016CBB4u) [[unlikely]] return; }
L_0016CBB4:
    set32(c.r[4], c.r[18].w[0] + 40u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016CBC0u); set32(c.r[5], 0u + 11u);  if (depth < kMaxDepth) unit_000F(c, 264u, depth + 1u); else { c.pc = 0x0013E560u; return; } if (c.pc != 0x0016CBC0u) [[unlikely]] return; }
L_0016CBC0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] - 16256u);
    set32(c.r[3], c.r[3].w[0] - 16168u);
    st32((c.r[18].w[0]), c.r[2].w[0]);
    set32(c.r[4], c.r[18].w[0] + 64u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    st32((c.r[18].w[0] + 20u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] - 16108u);
    set32(c.r[5], 0u + 3u);
    st32((c.r[18].w[0] + 40u), c.r[2].w[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016CBF4u); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_002A(c, 287u, depth + 1u); else { c.pc = 0x001AB200u; return; } if (c.pc != 0x0016CBF4u) [[unlikely]] return; }
L_0016CBF4:
    set32(c.r[4], c.r[18].w[0] + 228u);
    set32(c.r[5], 0u + 2u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016CC04u); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_0049(c, 283u, depth + 1u); else { c.pc = 0x002277A0u; return; } if (c.pc != 0x0016CC04u) [[unlikely]] return; }
L_0016CC04:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016CC0Cu); set32(c.r[4], 0u + 9u);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x0016CC0Cu) [[unlikely]] return; }
L_0016CC0C:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016CC18u); set32(c.r[4], 0u + 8u);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x0016CC18u) [[unlikely]] return; }
L_0016CC18:
    ld128((c.r[2].w[0]) & ~15u, c.r[3]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[5], 0u + 10000u);
    st128((c.r[18].w[0] + 272u) & ~15u, c.r[3]);
    set32(c.r[2], 0u + 30u);
    ld128((c.r[19].w[0]) & ~15u, c.r[3]);
    st128((c.r[18].w[0] + 288u) & ~15u, c.r[3]);
    st32((c.r[18].w[0] + 324u), c.r[2].w[0]);
    st32((c.r[18].w[0] + 320u), 0u);
    st32((c.r[18].w[0] + 332u), 0u);
    st8((c.r[18].w[0] + 328u), static_cast<std::uint8_t>(0u));
    ld128((c.r[18].w[0] + 272u) & ~15u, c.r[2]);
    st128((c.r[18].w[0] + 304u) & ~15u, c.r[2]);
    st32((c.r[18].w[0] + 52u), c.r[17].w[0]);
    set32(c.r[2], ld32((c.r[1].w[0] + 26392u)));
    set32(c.r[17], c.r[2].w[0] + 624u);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016CC60u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_002A(c, 5u, depth + 1u); else { c.pc = 0x001A80A0u; return; } if (c.pc != 0x0016CC60u) [[unlikely]] return; }
L_0016CC60:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016CC70u); c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_002A(c, 3u, depth + 1u); else { c.pc = 0x001A8060u; return; } if (c.pc != 0x0016CC70u) [[unlikely]] return; }
L_0016CC70:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016CC80u); set32(c.r[4], c.r[18].w[0] + 64u);  if (depth < kMaxDepth) unit_0025(c, 322u, depth + 1u); else { c.pc = 0x00196E30u; return; } if (c.pc != 0x0016CC80u) [[unlikely]] return; }
L_0016CC80:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016CC88u); set32(c.r[4], 0u + 124u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0016CC88u) [[unlikely]] return; }
L_0016CC88:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);  if (t) { goto L_0016CCD4; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43A00000u);
    c.f[14] = ld32((c.r[1].w[0] + 3528u));
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[12] = c.r[3].w[0];
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42400000u);
    set32(c.r[5], 0u + 11u);
    c.f[13] = c.r[3].w[0];
    set32(c.r[7], 0u + 830u);
    set32(c.r[8], c.r[8].w[0] + 3152u);
    set32(c.r[9], c.r[9].w[0] + 3184u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[15] = ld32((c.r[1].w[0] + 3520u));
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016CCD4u); c.r[10].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000D(c, 34u, depth + 1u); else { c.pc = 0x00134330u; return; } if (c.pc != 0x0016CCD4u) [[unlikely]] return; }
L_0016CCD4:
    st32((c.r[18].w[0] + 224u), c.r[2].w[0]);
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0016CCE8u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0016CCE8u) [[unlikely]] return; }
L_0016CCE8:
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0016CCF8u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0016CCF8u) [[unlikely]] return; }
L_0016CCF8:
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0016CD20:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0016CD80; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] - 10720u);
    set32(c.r[3], c.r[3].w[0] - 10704u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    st32((c.r[17].w[0] + 8u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] - 10688u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016CD68u); st32((c.r[17].w[0] + 24u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0025(c, 310u, depth + 1u); else { c.pc = 0x00196D20u; return; } if (c.pc != 0x0016CD68u) [[unlikely]] return; }
L_0016CD68:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0016CD84; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016CD80u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x0016CD80u) [[unlikely]] return; }
L_0016CD80:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0016CD84:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0016CDA0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0016CEA4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] - 16256u);
    set32(c.r[3], c.r[3].w[0] - 16168u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    st32((c.r[17].w[0] + 20u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] - 16108u);
    st32((c.r[17].w[0] + 40u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 24u)));
    c.budget -= 12;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0016CE04; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0016CE04; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0016CE04u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0016CE04u) [[unlikely]] return; }
L_0016CE04:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016CE0Cu); st32((c.r[17].w[0] + 24u), 0u);  if (depth < kMaxDepth) unit_001B(c, 397u, depth + 1u); else { c.pc = 0x0016F2B0u; return; } if (c.pc != 0x0016CE0Cu) [[unlikely]] return; }
L_0016CE0C:
    set32(c.r[4], ld32((c.r[17].w[0] + 224u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0016CE30; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0016CE30; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0016CE30u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0016CE30u) [[unlikely]] return; }
L_0016CE30:
    set32(c.r[4], c.r[17].w[0] + 228u);
    set32(c.r[5], 0u - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016CE40u); st32((c.r[17].w[0] + 224u), 0u);  if (depth < kMaxDepth) unit_0049(c, 294u, depth + 1u); else { c.pc = 0x00227920u; return; } if (c.pc != 0x0016CE40u) [[unlikely]] return; }
L_0016CE40:
    set32(c.r[4], c.r[17].w[0] + 64u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);  if (t) { goto L_0016CE74; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] - 10720u);
    set32(c.r[3], c.r[3].w[0] - 10704u);
    st32((c.r[17].w[0] + 64u), c.r[2].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    st32((c.r[17].w[0] + 72u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] - 10688u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016CE74u); st32((c.r[17].w[0] + 88u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0025(c, 310u, depth + 1u); else { c.pc = 0x00196D20u; return; } if (c.pc != 0x0016CE74u) [[unlikely]] return; }
L_0016CE74:
    set32(c.r[4], c.r[17].w[0] + 40u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016CE80u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000F(c, 266u, depth + 1u); else { c.pc = 0x0013E5B0u; return; } if (c.pc != 0x0016CE80u) [[unlikely]] return; }
L_0016CE80:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016CE8Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000C(c, 15u, depth + 1u); else { c.pc = 0x00130130u; return; } if (c.pc != 0x0016CE8Cu) [[unlikely]] return; }
L_0016CE8C:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0016CEA8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016CEA4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x0016CEA4u) [[unlikely]] return; }
L_0016CEA4:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0016CEA8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0016CEC0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016CED8u); set32(c.r[4], 0u + 44u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0016CED8u) [[unlikely]] return; }
L_0016CED8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[7].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0016CF08; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0016CEEC; } }
    set32(c.r[7], c.r[7].w[0] + 20u);
    c.budget -= 1;
L_0016CEEC:
    set32(c.r[8], ld32((c.r[16].w[0] + 28u)));
    set32(c.r[5], 0u + 1u);
    set32(c.r[9], ld32((c.r[16].w[0] + 32u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016CF08u); c.r[10].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 371u, depth + 1u); else { c.pc = 0x0012EBA0u; return; } if (c.pc != 0x0016CF08u) [[unlikely]] return; }
L_0016CF08:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0016CF20:
    set32(c.r[29], c.r[29].w[0] - 96u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[1].w[0] + 26392u)));
    set32(c.r[19], ld32((c.r[3].w[0] + 440u)));
    set32(c.r[18], ld32((c.r[3].w[0] + 444u)));
    c.budget -= 13;
    { const bool t = c.r[19].d[0] == 0ull; c.r[20].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0016D17C; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[17].d[0] = 0ull + 0ull;
    st32((c.r[19].w[0] + 16u), c.r[3].w[0]);
    st32((c.r[19].w[0] + 20u), c.r[3].w[0]);
    st32((c.r[19].w[0] + 24u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[20].w[0] + 228u)));
    c.f[0] = ld32((c.r[3].w[0] + 12u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    st32((c.r[19].w[0] + 60u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[20].w[0] + 228u)));
    c.f[0] = ld32((c.r[3].w[0] + 12u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    c.budget -= 17;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 300u), c.r[3].w[0]);  if (t) { goto L_0016D16C; } }
L_0016CF98:
    set32(c.r[2], ld32((c.r[20].w[0] + 28u)));
    set32(c.r[16], c.r[17].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016CFACu); set32(c.r[4], ld32((c.r[2].w[0] + 4u)));  if (depth < kMaxDepth) unit_000B(c, 461u, depth + 1u); else { c.pc = 0x0012FD60u; return; } if (c.pc != 0x0016CFACu) [[unlikely]] return; }
L_0016CFAC:
    st32((c.r[19].w[0] + 352u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st32((c.r[19].w[0] + 356u), 0u);
    set32(c.r[2], ld32((c.r[1].w[0] + 20144u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    set32(c.r[3], ld32((c.r[1].w[0] + 1420u)));
    c.budget -= 9;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 1));  if (t) { goto L_0016CFD8; } }
    set32(c.r[2], c.r[3].w[0] + 1u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    c.budget -= 2;
L_0016CFD8:
    c.f[0] = c.r[2].w[0];
    set32(c.r[25], ld32((c.r[19].w[0] + 176u)));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.f[12] = fp::cvt_s_w(c.f[0]);
    set32(c.r[2], c.r[17].w[0] << 5);
    set32(c.r[3], c.r[2].w[0] + 160u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.f[1] = c.r[3].w[0];
    c.f[0] = c.r[2].w[0];
    c.f[13] = fp::cvt_s_w(c.f[1]);
    c.budget -= 15;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0016D014u); c.f[14] = fp::cvt_s_w(c.f[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0016D014u) [[unlikely]] return; }
L_0016D014:
    set32(c.r[2], ld32((c.r[20].w[0] + 28u)));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.r[2].d[0] = ld8((c.r[2].w[0]));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_0016D04C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016D030u); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x0016D030u) [[unlikely]] return; }
L_0016D030:
    set32(c.r[3], ld32((c.r[2].w[0])));
    st32((c.r[19].w[0] + 48u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    st32((c.r[19].w[0] + 52u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 56u), c.r[2].w[0]);  if (t) { goto L_0016D06C; } }
L_0016D04C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016D054u);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x0016D054u) [[unlikely]] return; }
L_0016D054:
    set32(c.r[3], ld32((c.r[2].w[0])));
    st32((c.r[19].w[0] + 48u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    st32((c.r[19].w[0] + 52u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    st32((c.r[19].w[0] + 56u), c.r[2].w[0]);
    c.budget -= 6;
L_0016D06C:
    set32(c.r[2], ld32((c.r[20].w[0] + 24u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 24u)));
    c.budget -= 4;
    { const bool t = c.r[17].d[0] != c.r[2].d[0]; c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);  if (t) { goto L_0016D128; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    st32((c.r[18].w[0] + 16u), c.r[3].w[0]);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    st32((c.r[18].w[0] + 20u), c.r[2].w[0]);
    st32((c.r[18].w[0] + 24u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 352u)));
    st32((c.r[18].w[0] + 352u), c.r[2].w[0]);
    st32((c.r[18].w[0] + 356u), 0u);
    set32(c.r[25], ld32((c.r[18].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 12;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0016D0ACu); c.r[5].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0016D0ACu) [[unlikely]] return; }
L_0016D0AC:
    set32(c.r[3], ld32((c.r[20].w[0] + 8u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[4], 0u + 4u);  if (t) { goto L_0016D0C8; } }
    ld128((c.r[20].w[0] + 304u) & ~15u, c.r[2]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st128((c.r[18].w[0] + 48u) & ~15u, c.r[2]);  if (t) { goto L_0016D100; } }
L_0016D0C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016D0D0u);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x0016D0D0u) [[unlikely]] return; }
L_0016D0D0:
    set32(c.r[3], ld32((c.r[2].w[0])));
    st32((c.r[18].w[0] + 48u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    st32((c.r[18].w[0] + 52u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    st32((c.r[18].w[0] + 56u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 228u)));
    c.f[0] = ld32((c.r[2].w[0] + 12u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    st32((c.r[18].w[0] + 60u), c.r[2].w[0]);
    c.budget -= 12;
L_0016D100:
    set32(c.r[25], ld32((c.r[18].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0016D110u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0016D110u) [[unlikely]] return; }
L_0016D110:
    set32(c.r[25], ld32((c.r[19].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0016D120u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0016D120u) [[unlikely]] return; }
L_0016D120:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[17].w[0] + 1u);  if (t) { goto L_0016D16C; } }
L_0016D128:
    set32(c.r[25], ld32((c.r[19].w[0] + 176u)));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u - 1u);
    set32(c.r[25], ld32((c.r[25].w[0] + 68u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0016D148u); set32(c.r[8], 0u + 2u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0016D148u) [[unlikely]] return; }
L_0016D148:
    set32(c.r[25], ld32((c.r[19].w[0] + 176u)));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u - 1u);
    set32(c.r[25], ld32((c.r[25].w[0] + 68u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0016D168u); c.r[8].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0016D168u) [[unlikely]] return; }
L_0016D168:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_0016D16C:
    set32(c.r[3], ld32((c.r[20].w[0] + 32u)));
    c.r[3].d[0] = c.r[17].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0016CF98u | kUnwind; return; } goto L_0016CF98; } }
L_0016D17C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0016D1A0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const bool t = c.r[5].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0016D20C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00410000u);
    set32(c.r[6], c.r[29].w[0] + 64u);
    set32(c.r[2], c.r[2].w[0] + 1744u);
    set32(c.r[4], c.r[16].w[0] + 228u);
    ld128((c.r[2].w[0]) & ~15u, c.r[3]);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[2].d[0] = ld64((c.r[2].w[0] + 16u));
    st128((c.r[6].w[0]) & ~15u, c.r[3]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016D1DCu); st64((c.r[6].w[0] + 16u), c.r[2].d[0]);  if (depth < kMaxDepth) unit_0049(c, 298u, depth + 1u); else { c.pc = 0x002279C0u; return; } if (c.pc != 0x0016D1DCu) [[unlikely]] return; }
L_0016D1DC:
    set32(c.r[3], 0u + 5u);
    set32(c.r[2], 0u + 22u);
    st32((c.r[29].w[0] + 76u), c.r[3].w[0]);
    set32(c.r[4], c.r[16].w[0] + 228u);
    st32((c.r[29].w[0] + 80u), c.r[2].w[0]);
    set32(c.r[5], 0u + 1u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016D1FCu); set32(c.r[6], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0049(c, 298u, depth + 1u); else { c.pc = 0x002279C0u; return; } if (c.pc != 0x0016D1FCu) [[unlikely]] return; }
L_0016D1FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016D204u); set32(c.r[4], ld32((c.r[16].w[0] + 224u)));  if (depth < kMaxDepth) unit_000D(c, 68u, depth + 1u); else { c.pc = 0x001348C0u; return; } if (c.pc != 0x0016D204u) [[unlikely]] return; }
L_0016D204:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_0016D260; } }
L_0016D20C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00410000u);
    set32(c.r[6], c.r[29].w[0] + 32u);
    set32(c.r[2], c.r[2].w[0] + 1776u);
    set32(c.r[4], c.r[16].w[0] + 228u);
    ld128((c.r[2].w[0]) & ~15u, c.r[3]);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[2].d[0] = ld64((c.r[2].w[0] + 16u));
    st128((c.r[6].w[0]) & ~15u, c.r[3]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016D234u); st64((c.r[6].w[0] + 16u), c.r[2].d[0]);  if (depth < kMaxDepth) unit_0049(c, 298u, depth + 1u); else { c.pc = 0x002279C0u; return; } if (c.pc != 0x0016D234u) [[unlikely]] return; }
L_0016D234:
    set32(c.r[3], 0u + 5u);
    set32(c.r[2], 0u + 15u);
    st32((c.r[29].w[0] + 44u), c.r[3].w[0]);
    set32(c.r[4], c.r[16].w[0] + 228u);
    st32((c.r[29].w[0] + 48u), c.r[2].w[0]);
    set32(c.r[5], 0u + 1u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016D254u); set32(c.r[6], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_0049(c, 298u, depth + 1u); else { c.pc = 0x002279C0u; return; } if (c.pc != 0x0016D254u) [[unlikely]] return; }
L_0016D254:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016D25Cu); set32(c.r[4], ld32((c.r[16].w[0] + 224u)));  if (depth < kMaxDepth) unit_000D(c, 69u, depth + 1u); else { c.pc = 0x001348D0u; return; } if (c.pc != 0x0016D25Cu) [[unlikely]] return; }
L_0016D25C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_0016D260:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0016D270:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016D284u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_000C(c, 25u, depth + 1u); else { c.pc = 0x00130270u; return; } if (c.pc != 0x0016D284u) [[unlikely]] return; }
L_0016D284:
    set32(c.r[25], ld32((c.r[16].w[0] + 64u)));
    set32(c.r[4], c.r[16].w[0] + 64u);
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0016D298u); set32(c.r[5], 0u + 101u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0016D298u) [[unlikely]] return; }
L_0016D298:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016D2A4u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_001B(c, 145u, depth + 1u); else { c.pc = 0x0016D1A0u; return; } if (c.pc != 0x0016D2A4u) [[unlikely]] return; }
L_0016D2A4:
    set32(c.r[3], ld32((c.r[16].w[0] + 52u)));
    set32(c.r[2], 0u + 7u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[4], 0u + 32u);  if (t) { goto L_0016D2C4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016D2BCu); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_0076(c, 191u, depth + 1u); else { c.pc = 0x002D9970u; return; } if (c.pc != 0x0016D2BCu) [[unlikely]] return; }
L_0016D2BC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_0016D2D0; } }
L_0016D2C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016D2CCu);  if (depth < kMaxDepth) unit_0076(c, 191u, depth + 1u); else { c.pc = 0x002D9970u; return; } if (c.pc != 0x0016D2CCu) [[unlikely]] return; }
L_0016D2CC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_0016D2D0:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0016D2E0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016D2F4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_000C(c, 26u, depth + 1u); else { c.pc = 0x00130280u; return; } if (c.pc != 0x0016D2F4u) [[unlikely]] return; }
L_0016D2F4:
    set32(c.r[25], ld32((c.r[16].w[0] + 64u)));
    set32(c.r[4], c.r[16].w[0] + 64u);
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0016D308u); set32(c.r[5], 0u + 102u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0016D308u) [[unlikely]] return; }
L_0016D308:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016D314u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_001B(c, 145u, depth + 1u); else { c.pc = 0x0016D1A0u; return; } if (c.pc != 0x0016D314u) [[unlikely]] return; }
L_0016D314:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0016D330:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016D344u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_000C(c, 27u, depth + 1u); else { c.pc = 0x00130290u; return; } if (c.pc != 0x0016D344u) [[unlikely]] return; }
L_0016D344:
    set32(c.r[25], ld32((c.r[16].w[0] + 64u)));
    set32(c.r[4], c.r[16].w[0] + 64u);
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0016D358u); set32(c.r[5], 0u + 102u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0016D358u) [[unlikely]] return; }
L_0016D358:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016D364u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_001B(c, 145u, depth + 1u); else { c.pc = 0x0016D1A0u; return; } if (c.pc != 0x0016D364u) [[unlikely]] return; }
L_0016D364:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0016D380:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 201u));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0016D3A4; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0016D3A4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0016D3A4u) [[unlikely]] return; }
L_0016D3A4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0016D3B0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].d[0] = ld8((c.r[4].w[0] + 328u));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0016D3F4; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 332u)));
    set32(c.r[3], c.r[2].w[0] - 1u);
    st32((c.r[16].w[0] + 332u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 320u)));
    set32(c.r[2], 0u - c.r[2].w[0]);
    c.r[1].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[4], c.r[16].w[0] + 272u);  if (t) { goto L_0016D428; } }
    st32((c.r[16].w[0] + 332u), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 328u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0016D424; } }
L_0016D3F4:
    set32(c.r[2], ld32((c.r[16].w[0] + 332u)));
    set32(c.r[4], c.r[2].w[0] + 1u);
    st32((c.r[16].w[0] + 332u), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 324u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 320u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.r[1].d[0] = c.r[2].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0016D424; } }
    st32((c.r[16].w[0] + 332u), c.r[2].w[0]);
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 328u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
L_0016D424:
    set32(c.r[4], c.r[16].w[0] + 272u);
    c.budget -= 1;
L_0016D428:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016D430u);  if (depth < kMaxDepth) unit_002A(c, 280u, depth + 1u); else { c.pc = 0x001AB050u; return; } if (c.pc != 0x0016D430u) [[unlikely]] return; }
L_0016D430:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], ld32((c.r[1].w[0] + 25384u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0016D460; } }
    set32(c.r[4], ld32((c.r[3].w[0] + 8u)));
    set32(c.r[3], 0u + 5u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0016D460; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0016D460u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0016D460u) [[unlikely]] return; }
L_0016D460:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0016D470:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 201u));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0016D494; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0016D494u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0016D494u) [[unlikely]] return; }
L_0016D494:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0016D4A0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 201u));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0016D4C4; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0016D4C4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0016D4C4u) [[unlikely]] return; }
L_0016D4C4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0016D4D0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != c.r[5].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0016D53C; } }
    set32(c.r[3], ld32((c.r[5].w[0] + 24u)));
    set32(c.r[2], 0u + 7u);
    st32((c.r[16].w[0] + 36u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 52u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0016D52C; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 36u)));
    set32(c.r[2], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[4], 0u + 1u);  if (t) { goto L_0016D52C; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016D520u); set32(c.r[7], 0u + 12u);  if (depth < kMaxDepth) unit_001B(c, 394u, depth + 1u); else { c.pc = 0x0016F220u; return; } if (c.pc != 0x0016D520u) [[unlikely]] return; }
L_0016D520:
    set32(c.r[3], ld32((c.r[16].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 36u), 0u);  if (t) { goto L_0016D53C; } }
L_0016D52C:
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0016D53Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0016D53Cu) [[unlikely]] return; }
L_0016D53C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0016D550:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[5].d[0];  if (t) { goto L_0016D574; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 36u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0016D574u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0016D574u) [[unlikely]] return; }
L_0016D574:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0016D580:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[7].d[0] + 0ull;
    c.r[17].d[0] = c.r[8].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016D5BCu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_000B(c, 298u, depth + 1u); else { c.pc = 0x0012E440u; return; } if (c.pc != 0x0016D5BCu) [[unlikely]] return; }
L_0016D5BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016D5C4u); set32(c.r[4], c.r[21].w[0] + 20u);  if (depth < kMaxDepth) unit_000B(c, 335u, depth + 1u); else { c.pc = 0x0012E720u; return; } if (c.pc != 0x0016D5C4u) [[unlikely]] return; }
L_0016D5C4:
    set32(c.r[4], c.r[21].w[0] + 24u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016D5D0u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 264u, depth + 1u); else { c.pc = 0x0013E560u; return; } if (c.pc != 0x0016D5D0u) [[unlikely]] return; }
L_0016D5D0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] - 16448u);
    set32(c.r[3], c.r[3].w[0] - 16360u);
    st32((c.r[21].w[0]), c.r[2].w[0]);
    set32(c.r[4], c.r[21].w[0] + 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    st32((c.r[21].w[0] + 20u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] - 16320u);
    set32(c.r[5], 0u + 3u);
    st32((c.r[21].w[0] + 24u), c.r[2].w[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016D604u); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_0025(c, 304u, depth + 1u); else { c.pc = 0x00196C90u; return; } if (c.pc != 0x0016D604u) [[unlikely]] return; }
L_0016D604:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016D60Cu); set32(c.r[4], 0u + 9u);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x0016D60Cu) [[unlikely]] return; }
L_0016D60C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016D618u); set32(c.r[4], 0u + 8u);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x0016D618u) [[unlikely]] return; }
L_0016D618:
    ld128((c.r[2].w[0]) & ~15u, c.r[3]);
    set32(c.r[4], c.r[21].w[0] + 288u);
    set32(c.r[5], 0u + 4u);
    st128((c.r[21].w[0] + 224u) & ~15u, c.r[3]);
    set32(c.r[2], 0u + 30u);
    ld128((c.r[16].w[0]) & ~15u, c.r[3]);
    st128((c.r[21].w[0] + 240u) & ~15u, c.r[3]);
    st32((c.r[21].w[0] + 276u), c.r[2].w[0]);
    st32((c.r[21].w[0] + 272u), 0u);
    st32((c.r[21].w[0] + 284u), 0u);
    st8((c.r[21].w[0] + 280u), static_cast<std::uint8_t>(0u));
    ld128((c.r[21].w[0] + 224u) & ~15u, c.r[2]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016D650u); st128((c.r[21].w[0] + 256u) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_0049(c, 271u, depth + 1u); else { c.pc = 0x002275A0u; return; } if (c.pc != 0x0016D650u) [[unlikely]] return; }
L_0016D650:
    set32(c.r[4], c.r[21].w[0] + 324u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016D65Cu); set32(c.r[5], 0u + 4u);  if (depth < kMaxDepth) unit_0049(c, 271u, depth + 1u); else { c.pc = 0x002275A0u; return; } if (c.pc != 0x0016D65Cu) [[unlikely]] return; }
L_0016D65C:
    set32(c.r[4], c.r[21].w[0] + 384u);
    set32(c.r[5], 0u + 3u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016D66Cu); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_002A(c, 287u, depth + 1u); else { c.pc = 0x001AB200u; return; } if (c.pc != 0x0016D66Cu) [[unlikely]] return; }
L_0016D66C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016D674u); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_0076(c, 191u, depth + 1u); else { c.pc = 0x002D9970u; return; } if (c.pc != 0x0016D674u) [[unlikely]] return; }
L_0016D674:
    st32((c.r[21].w[0] + 36u), c.r[20].w[0]);
    set32(c.r[3], 0u + 1u);
    st32((c.r[21].w[0] + 40u), c.r[19].w[0]);
    set32(c.r[2], 0u - 1u);
    st32((c.r[21].w[0] + 44u), c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st32((c.r[21].w[0] + 368u), 0u);
    set32(c.r[5], 0u + 10000u);
    st32((c.r[21].w[0] + 360u), 0u);
    st32((c.r[21].w[0] + 212u), c.r[18].w[0]);
    st32((c.r[21].w[0] + 216u), c.r[17].w[0]);
    st32((c.r[21].w[0] + 544u), c.r[2].w[0]);
    st32((c.r[21].w[0] + 556u), 0u);
    st8((c.r[21].w[0] + 564u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[1].w[0] + 26392u)));
    set32(c.r[17], c.r[2].w[0] + 624u);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016D6BCu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_002A(c, 5u, depth + 1u); else { c.pc = 0x001A80A0u; return; } if (c.pc != 0x0016D6BCu) [[unlikely]] return; }
L_0016D6BC:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016D6CCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002A(c, 3u, depth + 1u); else { c.pc = 0x001A8060u; return; } if (c.pc != 0x0016D6CCu) [[unlikely]] return; }
L_0016D6CC:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016D6DCu); set32(c.r[4], c.r[21].w[0] + 384u);  if (depth < kMaxDepth) unit_0025(c, 322u, depth + 1u); else { c.pc = 0x00196E30u; return; } if (c.pc != 0x0016D6DCu) [[unlikely]] return; }
L_0016D6DC:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016D6E8u); set32(c.r[5], 0u + 10014u);  if (depth < kMaxDepth) unit_002A(c, 5u, depth + 1u); else { c.pc = 0x001A80A0u; return; } if (c.pc != 0x0016D6E8u) [[unlikely]] return; }
L_0016D6E8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016D6F8u); set32(c.r[5], 0u + 11u);  if (depth < kMaxDepth) unit_002A(c, 3u, depth + 1u); else { c.pc = 0x001A8060u; return; } if (c.pc != 0x0016D6F8u) [[unlikely]] return; }
L_0016D6F8:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016D708u); set32(c.r[4], c.r[21].w[0] + 48u);  if (depth < kMaxDepth) unit_0025(c, 322u, depth + 1u); else { c.pc = 0x00196E30u; return; } if (c.pc != 0x0016D708u) [[unlikely]] return; }
L_0016D708:
    st32((c.r[21].w[0] + 220u), 0u);
    c.r[2].d[0] = c.r[21].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_0016D740:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0016D8B0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] - 16448u);
    set32(c.r[3], c.r[3].w[0] - 16360u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    st32((c.r[17].w[0] + 20u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] - 16320u);
    st32((c.r[17].w[0] + 24u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 208u)));
    c.budget -= 12;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0016D7A4; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0016D7A4; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0016D7A4u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0016D7A4u) [[unlikely]] return; }
L_0016D7A4:
    st32((c.r[17].w[0] + 208u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 364u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0016D7CC; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0016D7CC; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0016D7CCu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0016D7CCu) [[unlikely]] return; }
L_0016D7CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016D7D4u); st32((c.r[17].w[0] + 364u), 0u);  if (depth < kMaxDepth) unit_001A(c, 271u, depth + 1u); else { c.pc = 0x0016A9E0u; return; } if (c.pc != 0x0016D7D4u) [[unlikely]] return; }
L_0016D7D4:
    set32(c.r[4], ld32((c.r[17].w[0] + 368u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0016D7E8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016D7E8u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100210u; return; } if (c.pc != 0x0016D7E8u) [[unlikely]] return; }
L_0016D7E8:
    st32((c.r[17].w[0] + 368u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 360u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0016D800; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016D800u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100210u; return; } if (c.pc != 0x0016D800u) [[unlikely]] return; }
L_0016D800:
    st32((c.r[17].w[0] + 360u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 220u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[5], 0u + 1u);  if (t) { goto L_0016D818; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016D818u);  if (depth < kMaxDepth) unit_002A(c, 353u, depth + 1u); else { c.pc = 0x001ABB90u; return; } if (c.pc != 0x0016D818u) [[unlikely]] return; }
L_0016D818:
    set32(c.r[4], c.r[17].w[0] + 384u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[17].w[0] + 220u), 0u);  if (t) { goto L_0016D850; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] - 10720u);
    set32(c.r[3], c.r[3].w[0] - 10704u);
    st32((c.r[17].w[0] + 384u), c.r[2].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    st32((c.r[17].w[0] + 392u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] - 10688u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016D850u); st32((c.r[17].w[0] + 408u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0025(c, 310u, depth + 1u); else { c.pc = 0x00196D20u; return; } if (c.pc != 0x0016D850u) [[unlikely]] return; }
L_0016D850:
    set32(c.r[4], c.r[17].w[0] + 324u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016D85Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0049(c, 274u, depth + 1u); else { c.pc = 0x002275F0u; return; } if (c.pc != 0x0016D85Cu) [[unlikely]] return; }
L_0016D85C:
    set32(c.r[4], c.r[17].w[0] + 288u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016D868u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0049(c, 274u, depth + 1u); else { c.pc = 0x002275F0u; return; } if (c.pc != 0x0016D868u) [[unlikely]] return; }
L_0016D868:
    set32(c.r[4], c.r[17].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016D874u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0025(c, 310u, depth + 1u); else { c.pc = 0x00196D20u; return; } if (c.pc != 0x0016D874u) [[unlikely]] return; }
L_0016D874:
    set32(c.r[4], c.r[17].w[0] + 24u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016D880u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000F(c, 266u, depth + 1u); else { c.pc = 0x0013E5B0u; return; } if (c.pc != 0x0016D880u) [[unlikely]] return; }
L_0016D880:
    set32(c.r[4], c.r[17].w[0] + 20u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016D88Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 336u, depth + 1u); else { c.pc = 0x0012E740u; return; } if (c.pc != 0x0016D88Cu) [[unlikely]] return; }
L_0016D88C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016D898u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 300u, depth + 1u); else { c.pc = 0x0012E490u; return; } if (c.pc != 0x0016D898u) [[unlikely]] return; }
L_0016D898:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0016D8B4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016D8B0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x0016D8B0u) [[unlikely]] return; }
L_0016D8B0:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0016D8B4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0016D8D0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 148u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0016D8ECu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0016D8ECu) [[unlikely]] return; }
L_0016D8EC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016D8F4u); set32(c.r[4], 0u + 52u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0016D8F4u) [[unlikely]] return; }
L_0016D8F4:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; c.r[7].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0016D928; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0016D90C; } }
    set32(c.r[7], c.r[7].w[0] + 20u);
    c.budget -= 1;
L_0016D90C:
    set32(c.r[8], ld32((c.r[16].w[0] + 368u)));
    set32(c.r[5], 0u + 1u);
    set32(c.r[9], ld32((c.r[16].w[0] + 548u)));
    set32(c.r[10], ld32((c.r[16].w[0] + 552u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016D924u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 395u, depth + 1u); else { c.pc = 0x0012F020u; return; } if (c.pc != 0x0016D924u) [[unlikely]] return; }
L_0016D924:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0016D928:
    st32((c.r[16].w[0] + 208u), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 208u)));
    st32((c.r[3].w[0] + 36u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0016D950:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016D964u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 319u, depth + 1u); else { c.pc = 0x0012E600u; return; } if (c.pc != 0x0016D964u) [[unlikely]] return; }
L_0016D964:
    set32(c.r[3], ld32((c.r[16].w[0] + 208u)));
    set32(c.r[4], 0u + 1u);
    st32((c.r[3].w[0] + 36u), c.r[4].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0016D980:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016D994u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 318u, depth + 1u); else { c.pc = 0x0012E5E0u; return; } if (c.pc != 0x0016D994u) [[unlikely]] return; }
L_0016D994:
    set32(c.r[25], ld32((c.r[16].w[0] + 384u)));
    set32(c.r[4], c.r[16].w[0] + 384u);
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0016D9A8u); set32(c.r[5], 0u + 196u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0016D9A8u) [[unlikely]] return; }
L_0016D9A8:
    set32(c.r[25], ld32((c.r[16].w[0] + 48u)));
    set32(c.r[4], c.r[16].w[0] + 48u);
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0016D9BCu); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0016D9BCu) [[unlikely]] return; }
L_0016D9BC:
    ld128((c.r[16].w[0] + 144u) & ~15u, c.r[6]);
    set32(c.r[7], c.r[29].w[0] + 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x427C0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[0] = c.r[2].w[0];
    set32(c.r[5], 0u + 1u);
    c.f[2] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st128((c.r[7].w[0]) & ~15u, c.r[6]);
    c.f[1] = ld32((c.r[29].w[0] + 32u));
    st32((c.r[16].w[0] + 144u), c.f[1]);
    c.f[1] = ld32((c.r[29].w[0] + 36u));
    c.f[1] = fp::add(c.f[2], c.f[1]);
    st32((c.r[16].w[0] + 148u), c.f[1]);
    st32((c.r[16].w[0] + 152u), c.f[0]);
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016DA0Cu); st32((c.r[16].w[0] + 156u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_001B(c, 324u, depth + 1u); else { c.pc = 0x0016E7D0u; return; } if (c.pc != 0x0016DA0Cu) [[unlikely]] return; }
L_0016DA0C:
    set32(c.r[3], ld32((c.r[16].w[0] + 208u)));
    st32((c.r[3].w[0] + 36u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0016DA30:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016DA44u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 320u, depth + 1u); else { c.pc = 0x0012E610u; return; } if (c.pc != 0x0016DA44u) [[unlikely]] return; }
L_0016DA44:
    set32(c.r[25], ld32((c.r[16].w[0] + 384u)));
    set32(c.r[4], c.r[16].w[0] + 384u);
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0016DA58u); set32(c.r[5], 0u + 197u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0016DA58u) [[unlikely]] return; }
L_0016DA58:
    set32(c.r[25], ld32((c.r[16].w[0] + 48u)));
    set32(c.r[4], c.r[16].w[0] + 48u);
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0016DA6Cu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0016DA6Cu) [[unlikely]] return; }
L_0016DA6C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016DA78u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_001B(c, 324u, depth + 1u); else { c.pc = 0x0016E7D0u; return; } if (c.pc != 0x0016DA78u) [[unlikely]] return; }
L_0016DA78:
    set32(c.r[3], ld32((c.r[16].w[0] + 208u)));
    st32((c.r[3].w[0] + 36u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0016DA90:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], 0u + 2u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 40u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0016DAD4; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 544u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0016DAD4; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0016DACCu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0016DACCu) [[unlikely]] return; }
L_0016DACC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_0016DB1C; } }
L_0016DAD4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016DADCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 321u, depth + 1u); else { c.pc = 0x0012E630u; return; } if (c.pc != 0x0016DADCu) [[unlikely]] return; }
L_0016DADC:
    set32(c.r[25], ld32((c.r[16].w[0] + 384u)));
    set32(c.r[4], c.r[16].w[0] + 384u);
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0016DAF0u); set32(c.r[5], 0u + 197u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0016DAF0u) [[unlikely]] return; }
L_0016DAF0:
    set32(c.r[25], ld32((c.r[16].w[0] + 48u)));
    set32(c.r[4], c.r[16].w[0] + 48u);
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0016DB04u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0016DB04u) [[unlikely]] return; }
L_0016DB04:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016DB10u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_001B(c, 324u, depth + 1u); else { c.pc = 0x0016E7D0u; return; } if (c.pc != 0x0016DB10u) [[unlikely]] return; }
L_0016DB10:
    set32(c.r[3], ld32((c.r[16].w[0] + 208u)));
    st32((c.r[3].w[0] + 36u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 3;
L_0016DB1C:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0016DB30:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x0012E640u | kUnwind; return; } [[clang::musttail]] return unit_000B(c, 322u, depth); }
L_0016DB40:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 521u));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0016DB64; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0016DB64u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0016DB64u) [[unlikely]] return; }
L_0016DB64:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0016DB70:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].d[0] = ld8((c.r[4].w[0] + 280u));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0016DBB8; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 284u)));
    set32(c.r[3], c.r[2].w[0] - 1u);
    st32((c.r[16].w[0] + 284u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 272u)));
    set32(c.r[2], 0u - c.r[2].w[0]);
    c.r[1].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[4], c.r[16].w[0] + 224u);  if (t) { goto L_0016DBEC; } }
    st32((c.r[16].w[0] + 284u), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 280u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0016DBE8; } }
L_0016DBB8:
    set32(c.r[2], ld32((c.r[16].w[0] + 284u)));
    set32(c.r[4], c.r[2].w[0] + 1u);
    st32((c.r[16].w[0] + 284u), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 276u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 272u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.r[1].d[0] = c.r[2].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0016DBE8; } }
    st32((c.r[16].w[0] + 284u), c.r[2].w[0]);
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 280u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
L_0016DBE8:
    set32(c.r[4], c.r[16].w[0] + 224u);
    c.budget -= 1;
L_0016DBEC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016DBF4u);  if (depth < kMaxDepth) unit_002A(c, 280u, depth + 1u); else { c.pc = 0x001AB050u; return; } if (c.pc != 0x0016DBF4u) [[unlikely]] return; }
L_0016DBF4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 25376u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0016DCE0; } }
    set32(c.r[5], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], 0u + 5u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_0016DCE0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016DC1Cu);  if (depth < kMaxDepth) unit_001A(c, 231u, depth + 1u); else { c.pc = 0x0016A360u; return; } if (c.pc != 0x0016DC1Cu) [[unlikely]] return; }
L_0016DC1C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016DC24u); c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_001A(c, 271u, depth + 1u); else { c.pc = 0x0016A9E0u; return; } if (c.pc != 0x0016DC24u) [[unlikely]] return; }
L_0016DC24:
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != c.r[4].d[0];  if (t) { goto L_0016DCB8; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 40u)));
    set32(c.r[3], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 2u);  if (t) { goto L_0016DC78; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 156u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0016DC50u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0016DC50u) [[unlikely]] return; }
L_0016DC50:
    set32(c.r[6], ld32((c.r[16].w[0] + 212u)));
    set32(c.r[4], 0u + 1u);
    set32(c.r[7], ld32((c.r[16].w[0] + 216u)));
    set32(c.r[5], 0u + 3u);
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016DC6Cu); c.r[9].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_001A(c, 267u, depth + 1u); else { c.pc = 0x0016A910u; return; } if (c.pc != 0x0016DC6Cu) [[unlikely]] return; }
L_0016DC6C:
    set32(c.r[3], ld32((c.r[16].w[0] + 208u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 36u), 0u);  if (t) { goto L_0016DCE0; } }
L_0016DC78:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0016DCE0; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 152u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0016DC90u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0016DC90u) [[unlikely]] return; }
L_0016DC90:
    set32(c.r[6], ld32((c.r[16].w[0] + 212u)));
    set32(c.r[4], 0u + 1u);
    set32(c.r[7], ld32((c.r[16].w[0] + 216u)));
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016DCACu); c.r[9].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_001A(c, 267u, depth + 1u); else { c.pc = 0x0016A910u; return; } if (c.pc != 0x0016DCACu) [[unlikely]] return; }
L_0016DCAC:
    set32(c.r[3], ld32((c.r[16].w[0] + 208u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 36u), 0u);  if (t) { goto L_0016DCE0; } }
L_0016DCB8:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull;  if (t) { goto L_0016DCCC; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 208u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 36u), c.r[4].w[0]);  if (t) { goto L_0016DCE0; } }
L_0016DCCC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016DCD4u); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_0076(c, 191u, depth + 1u); else { c.pc = 0x002D9970u; return; } if (c.pc != 0x0016DCD4u) [[unlikely]] return; }
L_0016DCD4:
    set32(c.r[3], ld32((c.r[16].w[0] + 208u)));
    set32(c.r[4], 0u + 1u);
    st32((c.r[3].w[0] + 36u), c.r[4].w[0]);
    c.budget -= 3;
L_0016DCE0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0016DD00:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 521u));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0016DD24; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0016DD24u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0016DD24u) [[unlikely]] return; }
L_0016DD24:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0016DD30:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 521u));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0016DD54; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0016DD54u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0016DD54u) [[unlikely]] return; }
L_0016DD54:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0016DD60:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 208u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[5].d[0];  if (t) { goto L_0016DDB4; } }
    set32(c.r[4], ld32((c.r[4].w[0] + 220u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0016DDB4; } }
    set32(c.r[5], ld32((c.r[3].w[0] + 28u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_0016DDA0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016DD98u);  if (depth < kMaxDepth) unit_002A(c, 362u, depth + 1u); else { c.pc = 0x001ABD00u; return; } if (c.pc != 0x0016DD98u) [[unlikely]] return; }
L_0016DD98:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_0016DDB8; } }
L_0016DDA0:
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_0016DDB4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016DDB4u);  if (depth < kMaxDepth) unit_002A(c, 363u, depth + 1u); else { c.pc = 0x001ABD30u; return; } if (c.pc != 0x0016DDB4u) [[unlikely]] return; }
L_0016DDB4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_0016DDB8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0016DDC0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[6], ld32((c.r[4].w[0] + 208u)));
    c.budget -= 6;
    { const bool t = c.r[6].d[0] != c.r[5].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0016DE70; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 544u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0016DE60; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 40u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 3u);  if (t) { goto L_0016DE20; } }
    set32(c.r[2], ld32((c.r[6].w[0] + 24u)));
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016DE08u); st32((c.r[16].w[0] + 544u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_001B(c, 320u, depth + 1u); else { c.pc = 0x0016E6D0u; return; } if (c.pc != 0x0016DE08u) [[unlikely]] return; }
L_0016DE08:
    set32(c.r[4], ld32((c.r[16].w[0] + 548u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 208u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 368u)));
    st32((c.r[5].w[0] + 16u), c.r[3].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[5].w[0] + 20u), c.r[4].w[0]);  if (t) { goto L_0016DE70; } }
L_0016DE20:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0016DE40; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 160u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0016DE38u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0016DE38u) [[unlikely]] return; }
L_0016DE38:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_0016DE74; } }
L_0016DE40:
    set32(c.r[2], ld32((c.r[6].w[0] + 24u)));
    st32((c.r[16].w[0] + 544u), c.r[2].w[0]);
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0016DE58u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0016DE58u) [[unlikely]] return; }
L_0016DE58:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0016DE70; } }
L_0016DE60:
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 160u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0016DE70u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0016DE70u) [[unlikely]] return; }
L_0016DE70:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_0016DE74:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0016DE80:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 208u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != c.r[5].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0016DEE0; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 544u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0016DEC0; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 36u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0016DEB8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0016DEB8u) [[unlikely]] return; }
L_0016DEB8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_0016DEE4; } }
L_0016DEC0:
    st32((c.r[16].w[0] + 544u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016DECCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_001B(c, 320u, depth + 1u); else { c.pc = 0x0016E6D0u; return; } if (c.pc != 0x0016DECCu) [[unlikely]] return; }
L_0016DECC:
    set32(c.r[4], ld32((c.r[16].w[0] + 548u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 208u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 368u)));
    st32((c.r[5].w[0] + 16u), c.r[3].w[0]);
    st32((c.r[5].w[0] + 20u), c.r[4].w[0]);
    c.budget -= 5;
L_0016DEE0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_0016DEE4:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0016DEF0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 36u)));
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] == 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0016DFB8; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + 3344u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x0016C000u < 16384u) { entry = entries_001B[(t - 0x0016C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0016DF2C:
    set32(c.r[2], 0u + 32u);
    set32(c.r[16], 0u + 87u);
    st32((c.r[17].w[0] + 548u), c.r[2].w[0]);
    set32(c.r[2], 0u + 10u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 552u), c.r[2].w[0]);  if (t) { goto L_0016DFB8; } }
L_0016DF44:
    set32(c.r[2], 0u + 8u);
    set32(c.r[16], 0u + 463u);
    st32((c.r[17].w[0] + 548u), c.r[2].w[0]);
    set32(c.r[2], 0u + 10u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 552u), c.r[2].w[0]);  if (t) { goto L_0016DFB8; } }
L_0016DF5C:
    set32(c.r[2], 0u + 8u);
    set32(c.r[16], 0u + 464u);
    st32((c.r[17].w[0] + 548u), c.r[2].w[0]);
    set32(c.r[2], 0u + 10u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 552u), c.r[2].w[0]);  if (t) { goto L_0016DFB8; } }
L_0016DF74:
    set32(c.r[2], 0u + 8u);
    set32(c.r[16], 0u + 465u);
    st32((c.r[17].w[0] + 548u), c.r[2].w[0]);
    set32(c.r[2], 0u + 10u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 552u), c.r[2].w[0]);  if (t) { goto L_0016DFB8; } }
L_0016DF8C:
    set32(c.r[2], 0u + 8u);
    set32(c.r[16], 0u + 467u);
    st32((c.r[17].w[0] + 548u), c.r[2].w[0]);
    set32(c.r[2], 0u + 10u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 552u), c.r[2].w[0]);  if (t) { goto L_0016DFB8; } }
L_0016DFA4:
    set32(c.r[2], 0u + 8u);
    set32(c.r[16], 0u + 466u);
    st32((c.r[17].w[0] + 548u), c.r[2].w[0]);
    set32(c.r[2], 0u + 10u);
    st32((c.r[17].w[0] + 552u), c.r[2].w[0]);
    c.budget -= 5;
L_0016DFB8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016DFC0u); set32(c.r[4], 0u + 124u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0016DFC0u) [[unlikely]] return; }
L_0016DFC0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);  if (t) { goto L_0016E00C; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43A00000u);
    c.f[14] = ld32((c.r[1].w[0] + 3528u));
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[12] = c.r[3].w[0];
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[5], ld32((c.r[17].w[0] + 216u)));
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42400000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.f[13] = c.r[3].w[0];
    set32(c.r[7], 0u + 830u);
    set32(c.r[8], c.r[8].w[0] + 3152u);
    set32(c.r[9], c.r[9].w[0] + 3184u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[15] = ld32((c.r[1].w[0] + 3520u));
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016E00Cu); c.r[10].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000D(c, 34u, depth + 1u); else { c.pc = 0x00134330u; return; } if (c.pc != 0x0016E00Cu) [[unlikely]] return; }
L_0016E00C:
    st32((c.r[17].w[0] + 364u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 548u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 552u)));
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], 0u + 352u);  if (t) { goto L_0016E078; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016E02Cu);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0016E02Cu) [[unlikely]] return; }
L_0016E02C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0016E048; } }
    set32(c.r[6], ld32((c.r[17].w[0] + 216u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], 0u + 3u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016E048u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002A(c, 346u, depth + 1u); else { c.pc = 0x001ABAD0u; return; } if (c.pc != 0x0016E048u) [[unlikely]] return; }
L_0016E048:
    st32((c.r[17].w[0] + 220u), c.r[2].w[0]);
    set32(c.r[5], c.r[29].w[0] + 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00410000u);
    set32(c.r[2], c.r[2].w[0] + 1808u);
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    st128((c.r[5].w[0]) & ~15u, c.r[2]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016E068u); set32(c.r[4], ld32((c.r[17].w[0] + 220u)));  if (depth < kMaxDepth) unit_002A(c, 357u, depth + 1u); else { c.pc = 0x001ABC00u; return; } if (c.pc != 0x0016E068u) [[unlikely]] return; }
L_0016E068:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x429C0000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016E078u); set32(c.r[4], ld32((c.r[17].w[0] + 220u)));  if (depth < kMaxDepth) unit_002A(c, 358u, depth + 1u); else { c.pc = 0x001ABC10u; return; } if (c.pc != 0x0016E078u) [[unlikely]] return; }
L_0016E078:
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 144u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0016E088u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0016E088u) [[unlikely]] return; }
L_0016E088:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0016E0A0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 548u)));
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 3);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016E0D4u); set32(c.r[4], c.r[2].w[0] - c.r[3].w[0]);  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x001001F0u; return; } if (c.pc != 0x0016E0D4u) [[unlikely]] return; }
L_0016E0D4:
    st32((c.r[19].w[0] + 360u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 548u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016E0E4u); set32(c.r[4], c.r[2].w[0] << 3);  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x001001F0u; return; } if (c.pc != 0x0016E0E4u) [[unlikely]] return; }
L_0016E0E4:
    st32((c.r[19].w[0] + 368u), c.r[2].w[0]);
    set32(c.r[18], ld32((c.r[19].w[0] + 368u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_0016E1B4; } }
L_0016E0F4:
    set32(c.r[2], c.r[17].w[0] << 3);
    set32(c.r[5], 0u + 8u);
    set32(c.r[16], c.r[18].w[0] + c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016E108u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 111u, depth + 1u); else { c.pc = 0x00141670u; return; } if (c.pc != 0x0016E108u) [[unlikely]] return; }
L_0016E108:
    set32(c.r[3], ld32((c.r[19].w[0] + 36u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00410000u);
    set32(c.r[2], c.r[2].w[0] + 1552u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 9;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0016E12Cu); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0016E12Cu) [[unlikely]] return; }
L_0016E12C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0016E180; } }
    set32(c.r[3], ld32((c.r[19].w[0] + 36u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00410000u);
    set32(c.r[2], c.r[2].w[0] + 1584u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 9;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0016E158u); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0016E158u) [[unlikely]] return; }
L_0016E158:
    set32(c.r[3], ld32((c.r[19].w[0] + 360u)));
    set32(c.r[4], c.r[17].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[17].w[0]);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], c.r[4].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] - c.r[17].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016E178u); set32(c.r[4], c.r[3].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_0009(c, 233u, depth + 1u); else { c.pc = 0x00127BE8u; return; } if (c.pc != 0x0016E178u) [[unlikely]] return; }
L_0016E178:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[17].w[0] + 1u);  if (t) { goto L_0016E1B4; } }
L_0016E180:
    set32(c.r[2], 0u + 1u);
    set32(c.r[4], 0u + 757u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016E190u); st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_000B(c, 461u, depth + 1u); else { c.pc = 0x0012FD60u; return; } if (c.pc != 0x0016E190u) [[unlikely]] return; }
L_0016E190:
    set32(c.r[3], ld32((c.r[19].w[0] + 360u)));
    set32(c.r[4], c.r[17].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[17].w[0]);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], c.r[4].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] - c.r[17].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016E1B0u); set32(c.r[4], c.r[3].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_0009(c, 233u, depth + 1u); else { c.pc = 0x00127BE8u; return; } if (c.pc != 0x0016E1B0u) [[unlikely]] return; }
L_0016E1B0:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_0016E1B4:
    set32(c.r[3], ld32((c.r[19].w[0] + 548u)));
    c.r[3].d[0] = c.r[17].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0016E0F4u | kUnwind; return; } goto L_0016E0F4; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0016E1E0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 208u)));
    set32(c.r[16], ld32((c.r[2].w[0] + 24u)));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016E20Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 19u, depth + 1u); else { c.pc = 0x0016C210u; return; } if (c.pc != 0x0016E20Cu) [[unlikely]] return; }
L_0016E20C:
    set32(c.r[3], ld32((c.r[19].w[0] + 36u)));
    c.r[18].d[0] = c.r[2].d[0] & 255ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00410000u);
    set32(c.r[6], ld32((c.r[19].w[0] + 544u)));
    set32(c.r[2], c.r[2].w[0] + 1616u);
    set32(c.r[4], 0u + 2u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 13;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0016E240u); set32(c.r[17], c.r[16].w[0] + 86u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0016E240u) [[unlikely]] return; }
L_0016E240:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0016E308; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 544u)));
    set32(c.r[3], c.r[16].w[0] << 3);
    set32(c.r[5], ld32((c.r[19].w[0] + 368u)));
    set32(c.r[6], 0u + 8u);
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[4], c.r[5].w[0] + c.r[3].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016E268u); set32(c.r[5], c.r[5].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_0010(c, 107u, depth + 1u); else { c.pc = 0x001415A0u; return; } if (c.pc != 0x0016E268u) [[unlikely]] return; }
L_0016E268:
    set32(c.r[5], ld32((c.r[19].w[0] + 360u)));
    set32(c.r[2], c.r[16].w[0] << 1);
    set32(c.r[3], ld32((c.r[19].w[0] + 544u)));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[6], 0u + 23u);
    set32(c.r[2], c.r[2].w[0] - c.r[16].w[0]);
    set32(c.r[4], c.r[5].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016E2A0u); set32(c.r[5], c.r[5].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_0010(c, 107u, depth + 1u); else { c.pc = 0x001415A0u; return; } if (c.pc != 0x0016E2A0u) [[unlikely]] return; }
L_0016E2A0:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016E2ACu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_001B(c, 320u, depth + 1u); else { c.pc = 0x0016E6D0u; return; } if (c.pc != 0x0016E2ACu) [[unlikely]] return; }
L_0016E2AC:
    set32(c.r[4], ld32((c.r[19].w[0] + 548u)));
    set32(c.r[5], ld32((c.r[19].w[0] + 208u)));
    set32(c.r[3], ld32((c.r[19].w[0] + 368u)));
    st32((c.r[5].w[0] + 16u), c.r[3].w[0]);
    st32((c.r[5].w[0] + 20u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[19].w[0] + 36u)));
    c.budget -= 8;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_0016E2E4; } }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_0016E2E4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016E2DCu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 22u, depth + 1u); else { c.pc = 0x0016C280u; return; } if (c.pc != 0x0016E2DCu) [[unlikely]] return; }
L_0016E2DC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u - 1u);  if (t) { goto L_0016E304; } }
L_0016E2E4:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[3], 0u + 7u);  if (t) { goto L_0016E300; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0016E300; } }
    set32(c.r[4], ld32((c.r[19].w[0] + 36u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016E300u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_001A(c, 404u, depth + 1u); else { c.pc = 0x0016BE70u; return; } if (c.pc != 0x0016E300u) [[unlikely]] return; }
L_0016E300:
    set32(c.r[3], 0u - 1u);
    c.budget -= 1;
L_0016E304:
    st32((c.r[19].w[0] + 544u), c.r[3].w[0]);
    c.budget -= 1;
L_0016E308:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0016E330:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 208u)));
    set32(c.r[18], ld32((c.r[2].w[0] + 24u)));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016E364u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 19u, depth + 1u); else { c.pc = 0x0016C210u; return; } if (c.pc != 0x0016E364u) [[unlikely]] return; }
L_0016E364:
    set32(c.r[3], ld32((c.r[21].w[0] + 36u)));
    c.r[20].d[0] = c.r[2].d[0] & 255ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00410000u);
    set32(c.r[6], ld32((c.r[21].w[0] + 544u)));
    set32(c.r[2], c.r[2].w[0] + 1616u);
    set32(c.r[4], 0u + 3u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 13;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0016E398u); set32(c.r[19], c.r[18].w[0] + 86u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0016E398u) [[unlikely]] return; }
L_0016E398:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0016E450; } }
    set32(c.r[2], ld32((c.r[21].w[0] + 368u)));
    set32(c.r[17], c.r[18].w[0] << 3);
    set32(c.r[5], 0u + 8u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016E3B4u); set32(c.r[4], c.r[2].w[0] + c.r[17].w[0]);  if (depth < kMaxDepth) unit_0010(c, 111u, depth + 1u); else { c.pc = 0x00141670u; return; } if (c.pc != 0x0016E3B4u) [[unlikely]] return; }
L_0016E3B4:
    set32(c.r[3], ld32((c.r[21].w[0] + 368u)));
    set32(c.r[2], c.r[18].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    set32(c.r[4], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[5], 0u + 23u);
    set32(c.r[16], c.r[2].w[0] - c.r[18].w[0]);
    set32(c.r[2], c.r[3].w[0] + c.r[17].w[0]);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[21].w[0] + 548u)));
    set32(c.r[4], ld32((c.r[21].w[0] + 208u)));
    set32(c.r[2], ld32((c.r[21].w[0] + 368u)));
    st32((c.r[4].w[0] + 16u), c.r[2].w[0]);
    st32((c.r[4].w[0] + 20u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[21].w[0] + 360u)));
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016E3F8u); set32(c.r[4], c.r[2].w[0] + c.r[16].w[0]);  if (depth < kMaxDepth) unit_0010(c, 111u, depth + 1u); else { c.pc = 0x00141670u; return; } if (c.pc != 0x0016E3F8u) [[unlikely]] return; }
L_0016E3F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016E400u); set32(c.r[4], 0u + 757u);  if (depth < kMaxDepth) unit_000B(c, 461u, depth + 1u); else { c.pc = 0x0012FD60u; return; } if (c.pc != 0x0016E400u) [[unlikely]] return; }
L_0016E400:
    set32(c.r[3], ld32((c.r[21].w[0] + 360u)));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016E410u); set32(c.r[4], c.r[3].w[0] + c.r[16].w[0]);  if (depth < kMaxDepth) unit_0009(c, 233u, depth + 1u); else { c.pc = 0x00127BE8u; return; } if (c.pc != 0x0016E410u) [[unlikely]] return; }
L_0016E410:
    set32(c.r[4], ld32((c.r[21].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_0016E434; } }
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == 0ull;  if (t) { goto L_0016E434; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016E42Cu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 22u, depth + 1u); else { c.pc = 0x0016C280u; return; } if (c.pc != 0x0016E42Cu) [[unlikely]] return; }
L_0016E42C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));  if (t) { goto L_0016E454; } }
L_0016E434:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[3], 0u + 7u);  if (t) { goto L_0016E450; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0016E450; } }
    set32(c.r[4], ld32((c.r[21].w[0] + 36u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016E450u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_001A(c, 404u, depth + 1u); else { c.pc = 0x0016BE70u; return; } if (c.pc != 0x0016E450u) [[unlikely]] return; }
L_0016E450:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.budget -= 1;
L_0016E454:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_0016E480:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[2], 0u + 3u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 208u)));
    set32(c.r[4], ld32((c.r[4].w[0] + 40u)));
    c.budget -= 11;
    { const bool t = c.r[4].d[0] != c.r[2].d[0]; set32(c.r[16], ld32((c.r[3].w[0] + 24u)));  if (t) { goto L_0016E554; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 36u)));
    c.r[1].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(7ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x00460000u);  if (t) { goto L_0016E690; } }
    set32(c.r[2], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + 3408u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x0016C000u < 16384u) { entry = entries_001B[(t - 0x0016C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0016E4D4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016E4E0u); c.r[17].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_001A(c, 387u, depth + 1u); else { c.pc = 0x0016BC60u; return; } if (c.pc != 0x0016E4E0u) [[unlikely]] return; }
L_0016E4E0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0016E4F0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], 0u + 2u);  if (t) { goto L_0016E690; } }
L_0016E4F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016E4F8u);  if (depth < kMaxDepth) unit_001A(c, 388u, depth + 1u); else { c.pc = 0x0016BC70u; return; } if (c.pc != 0x0016E4F8u) [[unlikely]] return; }
L_0016E4F8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0016E50C; } }
    set32(c.r[17], 0u + 5u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[5], 0u + 31u);  if (t) { goto L_0016E690; } }
L_0016E50C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016E514u);  if (depth < kMaxDepth) unit_001B(c, 19u, depth + 1u); else { c.pc = 0x0016C210u; return; } if (c.pc != 0x0016E514u) [[unlikely]] return; }
L_0016E514:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], 0u + 23u);  if (t) { goto L_0016E528; } }
    set32(c.r[17], 0u + 3u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[5], 0u + 16u);  if (t) { goto L_0016E690; } }
L_0016E528:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[18].w[0] + 216u)));  if (t) { goto L_0016E694; } }
L_0016E530:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016E53Cu); set32(c.r[17], 0u + 1u);  if (depth < kMaxDepth) unit_001A(c, 390u, depth + 1u); else { c.pc = 0x0016BCA0u; return; } if (c.pc != 0x0016E53Cu) [[unlikely]] return; }
L_0016E53C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], 0u + 15u);  if (t) { goto L_0016E54C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], 0u + 7u);  if (t) { goto L_0016E690; } }
L_0016E54C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0016E690; } }
L_0016E554:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { goto L_0016E690; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 36u)));
    c.r[1].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(7ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x00460000u);  if (t) { goto L_0016E690; } }
    set32(c.r[2], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + 3376u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x0016C000u < 16384u) { entry = entries_001B[(t - 0x0016C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0016E588:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016E594u); c.r[17].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_001A(c, 387u, depth + 1u); else { c.pc = 0x0016BC60u; return; } if (c.pc != 0x0016E594u) [[unlikely]] return; }
L_0016E594:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0016E5A4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_0016E690; } }
L_0016E5A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016E5ACu);  if (depth < kMaxDepth) unit_001A(c, 388u, depth + 1u); else { c.pc = 0x0016BC70u; return; } if (c.pc != 0x0016E5ACu) [[unlikely]] return; }
L_0016E5AC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0016E5C0; } }
    set32(c.r[17], 0u + 5u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[5], 0u + 31u);  if (t) { goto L_0016E690; } }
L_0016E5C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016E5C8u);  if (depth < kMaxDepth) unit_001B(c, 19u, depth + 1u); else { c.pc = 0x0016C210u; return; } if (c.pc != 0x0016E5C8u) [[unlikely]] return; }
L_0016E5C8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0016E5DC; } }
    set32(c.r[17], 0u + 3u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[5], 0u + 16u);  if (t) { goto L_0016E690; } }
L_0016E5DC:
    set32(c.r[3], ld32((c.r[18].w[0] + 36u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00410000u);
    set32(c.r[2], c.r[2].w[0] + 1552u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 9;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0016E600u); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0016E600u) [[unlikely]] return; }
L_0016E600:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], 0u + 1u);  if (t) { goto L_0016E610; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0016E690; } }
L_0016E610:
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 152u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0016E620u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0016E620u) [[unlikely]] return; }
L_0016E620:
    set32(c.r[17], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0016E690; } }
L_0016E62C:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016E638u); set32(c.r[17], 0u + 1u);  if (depth < kMaxDepth) unit_001A(c, 390u, depth + 1u); else { c.pc = 0x0016BCA0u; return; } if (c.pc != 0x0016E638u) [[unlikely]] return; }
L_0016E638:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], 0u + 6u);  if (t) { goto L_0016E648; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0016E690; } }
L_0016E648:
    set32(c.r[3], ld32((c.r[18].w[0] + 36u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00410000u);
    set32(c.r[2], c.r[2].w[0] + 1552u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 9;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0016E66Cu); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0016E66Cu) [[unlikely]] return; }
L_0016E66C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_0016E67C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0016E690; } }
L_0016E67C:
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 152u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0016E68Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0016E68Cu) [[unlikely]] return; }
L_0016E68C:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0016E690:
    set32(c.r[2], ld32((c.r[18].w[0] + 216u)));
    c.budget -= 1;
L_0016E694:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[18].w[0] + 212u)));
    c.r[8].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016E6ACu); set32(c.r[7], c.r[2].w[0] + 1u);  if (depth < kMaxDepth) unit_001A(c, 267u, depth + 1u); else { c.pc = 0x0016A910u; return; } if (c.pc != 0x0016E6ACu) [[unlikely]] return; }
L_0016E6AC:
    set32(c.r[3], ld32((c.r[18].w[0] + 208u)));
    st32((c.r[3].w[0] + 36u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0016E6D0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const bool t = c.r[5].d[0] == 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0016E740; } }
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[5], 0u + 1u);  if (t) { goto L_0016E728; } }
L_0016E6F4:
    set32(c.r[3], ld32((c.r[17].w[0] + 544u)));
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[3].d[0];  if (t) { goto L_0016E714; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 368u)));
    set32(c.r[4], c.r[6].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0]), static_cast<std::uint8_t>(0u));  if (t) { goto L_0016E724; } }
L_0016E714:
    set32(c.r[3], ld32((c.r[17].w[0] + 368u)));
    set32(c.r[4], c.r[6].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 4;
L_0016E724:
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.budget -= 1;
L_0016E728:
    set32(c.r[3], ld32((c.r[17].w[0] + 548u)));
    c.r[3].d[0] = c.r[6].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0016E6F4u | kUnwind; return; } goto L_0016E6F4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_0016E7B4; } }
L_0016E740:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0016E7A0; } }
L_0016E748:
    set32(c.r[3], ld32((c.r[17].w[0] + 36u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00410000u);
    set32(c.r[2], c.r[2].w[0] + 1552u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 9;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0016E76Cu); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0016E76Cu) [[unlikely]] return; }
L_0016E76C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0016E788; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 368u)));
    set32(c.r[4], c.r[16].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0]), static_cast<std::uint8_t>(0u));  if (t) { goto L_0016E79C; } }
L_0016E788:
    set32(c.r[3], ld32((c.r[17].w[0] + 368u)));
    set32(c.r[4], c.r[16].w[0] << 3);
    set32(c.r[5], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 5;
L_0016E79C:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_0016E7A0:
    set32(c.r[3], ld32((c.r[17].w[0] + 548u)));
    c.r[3].d[0] = c.r[16].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0016E748u | kUnwind; return; } goto L_0016E748; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_0016E7B4:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0016E7D0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const bool t = c.r[5].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0016E82C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00410000u);
    set32(c.r[5], c.r[29].w[0] + 64u);
    set32(c.r[2], c.r[2].w[0] + 1824u);
    set32(c.r[4], c.r[16].w[0] + 288u);
    ld128((c.r[2].w[0]) & ~15u, c.r[3]);
    c.r[2].d[0] = ld64((c.r[2].w[0] + 16u));
    st128((c.r[5].w[0]) & ~15u, c.r[3]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016E808u); st64((c.r[5].w[0] + 16u), c.r[2].d[0]);  if (depth < kMaxDepth) unit_0049(c, 280u, depth + 1u); else { c.pc = 0x002276C0u; return; } if (c.pc != 0x0016E808u) [[unlikely]] return; }
L_0016E808:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016E810u); set32(c.r[4], ld32((c.r[16].w[0] + 364u)));  if (depth < kMaxDepth) unit_000D(c, 68u, depth + 1u); else { c.pc = 0x001348C0u; return; } if (c.pc != 0x0016E810u) [[unlikely]] return; }
L_0016E810:
    set32(c.r[4], ld32((c.r[16].w[0] + 220u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0016E86C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016E824u);  if (depth < kMaxDepth) unit_002A(c, 364u, depth + 1u); else { c.pc = 0x001ABD60u; return; } if (c.pc != 0x0016E824u) [[unlikely]] return; }
L_0016E824:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_0016E870; } }
L_0016E82C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00410000u);
    set32(c.r[5], c.r[29].w[0] + 32u);
    set32(c.r[2], c.r[2].w[0] + 1856u);
    set32(c.r[4], c.r[16].w[0] + 288u);
    ld128((c.r[2].w[0]) & ~15u, c.r[3]);
    c.r[2].d[0] = ld64((c.r[2].w[0] + 16u));
    st128((c.r[5].w[0]) & ~15u, c.r[3]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016E850u); st64((c.r[5].w[0] + 16u), c.r[2].d[0]);  if (depth < kMaxDepth) unit_0049(c, 280u, depth + 1u); else { c.pc = 0x002276C0u; return; } if (c.pc != 0x0016E850u) [[unlikely]] return; }
L_0016E850:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016E858u); set32(c.r[4], ld32((c.r[16].w[0] + 364u)));  if (depth < kMaxDepth) unit_000D(c, 69u, depth + 1u); else { c.pc = 0x001348D0u; return; } if (c.pc != 0x0016E858u) [[unlikely]] return; }
L_0016E858:
    set32(c.r[4], ld32((c.r[16].w[0] + 220u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0016E86C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016E86Cu);  if (depth < kMaxDepth) unit_002A(c, 367u, depth + 1u); else { c.pc = 0x001ABDD0u; return; } if (c.pc != 0x0016E86Cu) [[unlikely]] return; }
L_0016E86C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_0016E870:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0016E880:
    set32(c.r[29], c.r[29].w[0] - 240u);
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], ld32((c.r[4].w[0] + 8u)));
    c.budget -= 14;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0016EF30; } }
    set32(c.r[3], 0u + 5u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0016E8CC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));  if (t) { goto L_0016EF34; } }
L_0016E8CC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 26392u)));
    set32(c.r[20], ld32((c.r[2].w[0] + 440u)));
    set32(c.r[19], ld32((c.r[2].w[0] + 444u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016E8E4u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x0016E8E4u) [[unlikely]] return; }
L_0016E8E4:
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[4].d[0] = 0ull + 0ull;
    st32((c.r[20].w[0] + 48u), c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0] + 4u)));
    st32((c.r[20].w[0] + 52u), c.r[5].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    st32((c.r[20].w[0] + 56u), c.r[2].w[0]);
    c.f[0] = ld32((c.r[21].w[0] + 300u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    st32((c.r[20].w[0] + 60u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[1].w[0] + 26392u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[18], ld32((c.r[2].w[0] + 332u)));
    c.f[0] = ld32((c.r[1].w[0] + 3512u));
    st32((c.r[18].w[0] + 16u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = ld32((c.r[1].w[0] + 3512u));
    st32((c.r[18].w[0] + 20u), c.f[0]);
    c.budget -= 24;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016E944u); st32((c.r[18].w[0] + 24u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x0016E944u) [[unlikely]] return; }
L_0016E944:
    set32(c.r[4], ld32((c.r[2].w[0])));
    set32(c.r[3], 0u + 1u);
    st32((c.r[18].w[0] + 48u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 4u)));
    st32((c.r[18].w[0] + 52u), c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    st32((c.r[18].w[0] + 56u), c.r[2].w[0]);
    c.f[0] = ld32((c.r[21].w[0] + 300u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    st32((c.r[18].w[0] + 60u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[21].w[0] + 44u)));
    c.budget -= 15;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; set32(c.r[4], 0u + 756u);  if (t) { goto L_0016E998; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016E988u); set32(c.r[4], 0u + 755u);  if (depth < kMaxDepth) unit_000B(c, 461u, depth + 1u); else { c.pc = 0x0012FD60u; return; } if (c.pc != 0x0016E988u) [[unlikely]] return; }
L_0016E988:
    st32((c.r[18].w[0] + 352u), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 356u), 0u);  if (t) { goto L_0016E9EC; } }
    set32(c.r[4], 0u + 756u);
    c.budget -= 1;
L_0016E998:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016E9A0u);  if (depth < kMaxDepth) unit_000B(c, 461u, depth + 1u); else { c.pc = 0x0012FD60u; return; } if (c.pc != 0x0016E9A0u) [[unlikely]] return; }
L_0016E9A0:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016E9ACu); set32(c.r[4], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_0009(c, 233u, depth + 1u); else { c.pc = 0x00127BE8u; return; } if (c.pc != 0x0016E9ACu) [[unlikely]] return; }
L_0016E9AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016E9B4u); set32(c.r[4], ld32((c.r[21].w[0] + 556u)));  if (depth < kMaxDepth) unit_001C(c, 79u, depth + 1u); else { c.pc = 0x00170F90u; return; } if (c.pc != 0x0016E9B4u) [[unlikely]] return; }
L_0016E9B4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016E9C8u); set32(c.r[5], c.r[5].w[0] + 3440u);  if (depth < kMaxDepth) unit_0009(c, 220u, depth + 1u); else { c.pc = 0x001277E0u; return; } if (c.pc != 0x0016E9C8u) [[unlikely]] return; }
L_0016E9C8:
    set32(c.r[2], ld32((c.r[21].w[0] + 560u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016E9E0u); set32(c.r[4], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_0009(c, 220u, depth + 1u); else { c.pc = 0x001277E0u; return; } if (c.pc != 0x0016E9E0u) [[unlikely]] return; }
L_0016E9E0:
    set32(c.r[2], c.r[29].w[0] + 144u);
    st32((c.r[18].w[0] + 352u), c.r[2].w[0]);
    st32((c.r[18].w[0] + 356u), 0u);
    c.budget -= 3;
L_0016E9EC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43A00000u);
    set32(c.r[25], ld32((c.r[18].w[0] + 176u)));
    c.f[1] = c.r[2].w[0];
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.f[2] = ld32((c.r[21].w[0] + 336u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    c.f[13] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.f[0] = c.r[2].w[0];
    c.f[12] = fp::add(c.f[1], c.f[2]);
    c.budget -= 15;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0016EA28u); c.f[14] = fp::cvt_s_w(c.f[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0016EA28u) [[unlikely]] return; }
L_0016EA28:
    set32(c.r[25], ld32((c.r[18].w[0] + 176u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 60u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0016EA3Cu); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0016EA3Cu) [[unlikely]] return; }
L_0016EA3C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43A00000u);
    st32((c.r[20].w[0] + 16u), c.r[3].w[0]);
    c.f[1] = c.r[2].w[0];
    st32((c.r[20].w[0] + 20u), c.r[3].w[0]);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    st32((c.r[20].w[0] + 24u), c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x430C0000u);
    set32(c.r[5], ld32((c.r[21].w[0] + 208u)));
    c.f[13] = c.r[2].w[0];
    set32(c.r[3], ld32((c.r[21].w[0] + 360u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.f[0] = c.r[2].w[0];
    set32(c.r[5], ld32((c.r[5].w[0] + 24u)));
    c.f[14] = fp::cvt_s_w(c.f[0]);
    set32(c.r[2], c.r[5].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] - c.r[5].w[0]);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[20].w[0] + 352u), c.r[2].w[0]);
    st32((c.r[20].w[0] + 356u), 0u);
    set32(c.r[25], ld32((c.r[20].w[0] + 176u)));
    c.f[0] = ld32((c.r[21].w[0] + 336u));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 28;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0016EAACu); c.f[12] = fp::add(c.f[1], c.f[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0016EAACu) [[unlikely]] return; }
L_0016EAAC:
    set32(c.r[25], ld32((c.r[20].w[0] + 176u)));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 60u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0016EAC0u); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0016EAC0u) [[unlikely]] return; }
L_0016EAC0:
    set32(c.r[2], ld32((c.r[21].w[0] + 208u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[4], c.r[29].w[0] + 208u);
    set32(c.r[5], c.r[5].w[0] + 3448u);
    set32(c.r[3], ld32((c.r[2].w[0] + 40u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 48u)));
    set32(c.r[6], c.r[3].w[0] + 1u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016EAE4u); set32(c.r[7], c.r[2].w[0] + 1u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x00127458u; return; } if (c.pc != 0x0016EAE4u) [[unlikely]] return; }
L_0016EAE4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43280000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[1] = c.r[2].w[0];
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[2] = ld32((c.r[1].w[0] + 3512u));
    set32(c.r[3], c.r[29].w[0] + 208u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43430000u);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.f[13] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.f[0] = c.r[2].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    st32((c.r[20].w[0] + 16u), c.f[2]);
    c.f[14] = fp::cvt_s_w(c.f[0]);
    c.f[0] = ld32((c.r[1].w[0] + 3512u));
    st32((c.r[20].w[0] + 20u), c.f[0]);
    st32((c.r[20].w[0] + 24u), c.r[5].w[0]);
    st32((c.r[20].w[0] + 352u), c.r[3].w[0]);
    st32((c.r[20].w[0] + 356u), 0u);
    set32(c.r[25], ld32((c.r[20].w[0] + 176u)));
    c.f[0] = ld32((c.r[21].w[0] + 336u));
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.budget -= 25;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0016EB48u); c.f[12] = fp::add(c.f[1], c.f[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0016EB48u) [[unlikely]] return; }
L_0016EB48:
    set32(c.r[25], ld32((c.r[20].w[0] + 176u)));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u - 1u);
    set32(c.r[25], ld32((c.r[25].w[0] + 68u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0016EB68u); set32(c.r[8], 0u + 2u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0016EB68u) [[unlikely]] return; }
L_0016EB68:
    set32(c.r[25], ld32((c.r[20].w[0] + 176u)));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u - 1u);
    set32(c.r[25], ld32((c.r[25].w[0] + 68u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0016EB88u); c.r[8].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0016EB88u) [[unlikely]] return; }
L_0016EB88:
    set32(c.r[3], ld32((c.r[21].w[0] + 208u)));
    set32(c.r[4], ld32((c.r[21].w[0] + 552u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 40u)));
    mmi::mult(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[17].d[0] = c.lo.d[0];
    c.budget -= 6;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0016EF1C; } }
L_0016EBA0:
    set32(c.r[3], ld32((c.r[21].w[0] + 548u)));
    c.r[1].d[0] = c.r[16].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0016EF18; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[6], c.r[16].w[0] + 1u);
    set32(c.r[4], c.r[29].w[0] + 208u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016EBC4u); set32(c.r[5], c.r[5].w[0] + 3464u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x00127458u; return; } if (c.pc != 0x0016EBC4u) [[unlikely]] return; }
L_0016EBC4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016EBCCu); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x0016EBCCu) [[unlikely]] return; }
L_0016EBCC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43430000u);
    set32(c.r[6], ld32((c.r[2].w[0])));
    c.f[1] = c.r[3].w[0];
    set32(c.r[4], c.r[16].w[0] - c.r[17].w[0]);
    set32(c.r[5], c.r[29].w[0] + 208u);
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    set32(c.r[23], c.r[4].w[0] << 2);
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    set32(c.r[22], c.r[23].w[0] + 195u);
    c.f[0] = c.r[3].w[0];
    st32((c.r[20].w[0] + 48u), c.r[6].w[0]);
    c.f[2] = c.r[22].w[0];
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    c.f[14] = fp::cvt_s_w(c.f[0]);
    st32((c.r[20].w[0] + 52u), c.r[3].w[0]);
    c.f[13] = fp::cvt_s_w(c.f[2]);
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    st32((c.r[20].w[0] + 56u), c.r[2].w[0]);
    st32((c.r[20].w[0] + 352u), c.r[5].w[0]);
    st32((c.r[20].w[0] + 356u), 0u);
    set32(c.r[25], ld32((c.r[20].w[0] + 176u)));
    c.f[0] = ld32((c.r[21].w[0] + 336u));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 28;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0016EC3Cu); c.f[12] = fp::add(c.f[1], c.f[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0016EC3Cu) [[unlikely]] return; }
L_0016EC3C:
    set32(c.r[25], ld32((c.r[20].w[0] + 176u)));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u - 1u);
    set32(c.r[25], ld32((c.r[25].w[0] + 68u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0016EC5Cu); set32(c.r[8], 0u + 2u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0016EC5Cu) [[unlikely]] return; }
L_0016EC5C:
    set32(c.r[25], ld32((c.r[20].w[0] + 176u)));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u - 1u);
    set32(c.r[25], ld32((c.r[25].w[0] + 68u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0016EC7Cu); c.r[8].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0016EC7Cu) [[unlikely]] return; }
L_0016EC7C:
    set32(c.r[2], ld32((c.r[21].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0016ED60; } }
    set32(c.r[3], ld32((c.r[21].w[0] + 44u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0016ED60; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016ECA0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_001A(c, 387u, depth + 1u); else { c.pc = 0x0016BC60u; return; } if (c.pc != 0x0016ECA0u) [[unlikely]] return; }
L_0016ECA0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], 0u + 5u);  if (t) { goto L_0016ECBC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016ECB0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 19u, depth + 1u); else { c.pc = 0x0016C210u; return; } if (c.pc != 0x0016ECB0u) [[unlikely]] return; }
L_0016ECB0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0016ED60; } }
    set32(c.r[4], 0u + 5u);
    c.budget -= 1;
L_0016ECBC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016ECC4u);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x0016ECC4u) [[unlikely]] return; }
L_0016ECC4:
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[4], 0u + 442u);
    st32((c.r[18].w[0] + 48u), c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0] + 4u)));
    st32((c.r[18].w[0] + 52u), c.r[5].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    st32((c.r[18].w[0] + 56u), c.r[2].w[0]);
    c.f[0] = ld32((c.r[1].w[0] + 3504u));
    st32((c.r[18].w[0] + 16u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = ld32((c.r[1].w[0] + 3504u));
    st32((c.r[18].w[0] + 20u), c.f[0]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016ED04u); st32((c.r[18].w[0] + 24u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_000B(c, 461u, depth + 1u); else { c.pc = 0x0012FD60u; return; } if (c.pc != 0x0016ED04u) [[unlikely]] return; }
L_0016ED04:
    st32((c.r[18].w[0] + 352u), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43950000u);
    set32(c.r[2], c.r[23].w[0] + 196u);
    st32((c.r[18].w[0] + 356u), 0u);
    c.f[0] = c.r[2].w[0];
    set32(c.r[25], ld32((c.r[18].w[0] + 176u)));
    c.f[2] = ld32((c.r[21].w[0] + 336u));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.f[13] = fp::cvt_s_w(c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.f[0] = c.r[2].w[0];
    c.f[1] = c.r[3].w[0];
    c.f[14] = fp::cvt_s_w(c.f[0]);
    c.budget -= 18;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0016ED4Cu); c.f[12] = fp::add(c.f[1], c.f[2]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0016ED4Cu) [[unlikely]] return; }
L_0016ED4C:
    set32(c.r[25], ld32((c.r[18].w[0] + 176u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 60u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0016ED60u); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0016ED60u) [[unlikely]] return; }
L_0016ED60:
    c.r[2].d[0] = ld8((c.r[21].w[0] + 564u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], c.r[16].w[0] << 1);  if (t) { goto L_0016ED9C; } }
    set32(c.r[2], ld32((c.r[21].w[0] + 544u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[2].d[0];  if (t) { goto L_0016ED98; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016ED80u); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x0016ED80u) [[unlikely]] return; }
L_0016ED80:
    set32(c.r[3], ld32((c.r[2].w[0])));
    st32((c.r[20].w[0] + 48u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    st32((c.r[20].w[0] + 52u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    st32((c.r[20].w[0] + 56u), c.r[2].w[0]);
    c.budget -= 6;
L_0016ED98:
    set32(c.r[2], c.r[16].w[0] << 1);
    c.budget -= 1;
L_0016ED9C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43950000u);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[5], ld32((c.r[21].w[0] + 360u)));
    set32(c.r[4], c.r[2].w[0] << 3);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    set32(c.r[6], c.r[4].w[0] - c.r[16].w[0]);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.f[0] = c.r[2].w[0];
    c.f[2] = c.r[22].w[0];
    c.f[14] = fp::cvt_s_w(c.f[0]);
    set32(c.r[2], c.r[5].w[0] + c.r[6].w[0]);
    st32((c.r[20].w[0] + 352u), c.r[2].w[0]);
    st32((c.r[20].w[0] + 356u), 0u);
    set32(c.r[25], ld32((c.r[20].w[0] + 176u)));
    c.f[0] = ld32((c.r[21].w[0] + 336u));
    c.f[1] = c.r[3].w[0];
    c.f[13] = fp::cvt_s_w(c.f[2]);
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 21;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0016EDF0u); c.f[12] = fp::add(c.f[1], c.f[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0016EDF0u) [[unlikely]] return; }
L_0016EDF0:
    set32(c.r[2], ld32((c.r[21].w[0] + 208u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 24u)));
    c.budget -= 4;
    { const bool t = c.r[16].d[0] != c.r[2].d[0];  if (t) { goto L_0016EED8; } }
    set32(c.r[3], ld32((c.r[21].w[0] + 8u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0016EE1C; } }
    ld128((c.r[21].w[0] + 256u) & ~15u, c.r[2]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st128((c.r[19].w[0] + 48u) & ~15u, c.r[2]);  if (t) { goto L_0016EE48; } }
L_0016EE1C:
    set32(c.r[2], ld32((c.r[21].w[0] + 256u)));
    st32((c.r[19].w[0] + 48u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[21].w[0] + 260u)));
    st32((c.r[19].w[0] + 52u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[21].w[0] + 264u)));
    st32((c.r[19].w[0] + 56u), c.r[2].w[0]);
    c.f[0] = ld32((c.r[21].w[0] + 300u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    st32((c.r[19].w[0] + 60u), c.r[2].w[0]);
    c.budget -= 11;
L_0016EE48:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.f[1] = ld32((c.r[1].w[0] + 3512u));
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.f[0] = c.r[22].w[0];
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43950000u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.f[13] = fp::cvt_s_w(c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    st32((c.r[19].w[0] + 16u), c.f[1]);
    c.f[2] = ld32((c.r[1].w[0] + 3496u));
    c.f[0] = c.r[2].w[0];
    c.f[1] = c.r[3].w[0];
    c.f[14] = fp::cvt_s_w(c.f[0]);
    st32((c.r[19].w[0] + 20u), c.f[2]);
    st32((c.r[19].w[0] + 24u), c.r[5].w[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 352u)));
    st32((c.r[19].w[0] + 352u), c.r[2].w[0]);
    st32((c.r[19].w[0] + 356u), 0u);
    set32(c.r[25], ld32((c.r[19].w[0] + 176u)));
    c.f[0] = ld32((c.r[21].w[0] + 336u));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 26;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0016EEB0u); c.f[12] = fp::add(c.f[1], c.f[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0016EEB0u) [[unlikely]] return; }
L_0016EEB0:
    set32(c.r[25], ld32((c.r[19].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0016EEC0u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0016EEC0u) [[unlikely]] return; }
L_0016EEC0:
    set32(c.r[25], ld32((c.r[20].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0016EED0u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0016EED0u) [[unlikely]] return; }
L_0016EED0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[16].w[0] + 1u);  if (t) { goto L_0016EF1C; } }
L_0016EED8:
    set32(c.r[25], ld32((c.r[20].w[0] + 176u)));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u - 1u);
    set32(c.r[25], ld32((c.r[25].w[0] + 68u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0016EEF8u); set32(c.r[8], 0u + 2u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0016EEF8u) [[unlikely]] return; }
L_0016EEF8:
    set32(c.r[25], ld32((c.r[20].w[0] + 176u)));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u - 1u);
    set32(c.r[25], ld32((c.r[25].w[0] + 68u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0016EF18u); c.r[8].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0016EF18u) [[unlikely]] return; }
L_0016EF18:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_0016EF1C:
    set32(c.r[3], ld32((c.r[21].w[0] + 552u)));
    set32(c.r[3], c.r[17].w[0] + c.r[3].w[0]);
    c.r[3].d[0] = c.r[16].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0016EBA0u | kUnwind; return; } goto L_0016EBA0; } }
L_0016EF30:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));
    c.budget -= 1;
L_0016EF34:
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 240u);  c.pc = t; return; }
L_0016EF60:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[1].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_0016EFA4; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[2], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + 3472u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x0016C000u < 16384u) { entry = entries_001B[(t - 0x0016C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0016EF98:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], 0u + 32u);  if (t) { goto L_0016EFA4; } }
L_0016EFA0:
    set32(c.r[17], 0u + 8u);
    c.budget -= 1;
L_0016EFA4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00410000u);
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 1552u);
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { const bool t = 0ull == 0ull; set32(c.r[18], c.r[2].w[0] + c.r[3].w[0]);  if (t) { goto L_0016EFE4; } }
L_0016EFBC:
    set32(c.r[2], ld32((c.r[18].w[0])));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0016EFCCu); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0016EFCCu) [[unlikely]] return; }
L_0016EFCC:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0016EFE0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0016EFF0; } }
L_0016EFE0:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_0016EFE4:
    c.r[2].d[0] = c.r[16].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u - 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0016EFBCu | kUnwind; return; } goto L_0016EFBC; } }
L_0016EFF0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0016F010:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 20u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0016D550u | kUnwind; return; } goto L_0016D550; }
L_0016F020:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 20u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0016D4D0u | kUnwind; return; } goto L_0016D4D0; }
L_0016F030:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 20u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0016CDA0u | kUnwind; return; } goto L_0016CDA0; }
L_0016F040:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 40u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0016CF20u | kUnwind; return; } goto L_0016CF20; }
L_0016F050:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 40u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0016CDA0u | kUnwind; return; } goto L_0016CDA0; }
L_0016F060:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 20u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0016DE80u | kUnwind; return; } goto L_0016DE80; }
L_0016F070:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 20u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0016DDC0u | kUnwind; return; } goto L_0016DDC0; }
L_0016F080:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 20u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0016DD60u | kUnwind; return; } goto L_0016DD60; }
L_0016F090:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 20u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0016D740u | kUnwind; return; } goto L_0016D740; }
L_0016F0A0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 24u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0016E880u | kUnwind; return; } goto L_0016E880; }
L_0016F0B0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 24u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0016D740u | kUnwind; return; } goto L_0016D740; }
L_0016F0C0:
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
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016F0F8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 298u, depth + 1u); else { c.pc = 0x0012E440u; return; } if (c.pc != 0x0016F0F8u) [[unlikely]] return; }
L_0016F0F8:
    set32(c.r[4], c.r[20].w[0] + 20u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016F104u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 256u, depth + 1u); else { c.pc = 0x0013E440u; return; } if (c.pc != 0x0016F104u) [[unlikely]] return; }
L_0016F104:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] - 16032u);
    set32(c.r[2], c.r[2].w[0] - 15944u);
    st32((c.r[20].w[0]), c.r[3].w[0]);
    set32(c.r[4], 0u + 68u);
    st32((c.r[20].w[0] + 20u), c.r[2].w[0]);
    st32((c.r[20].w[0] + 32u), 0u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016F12Cu); st32((c.r[20].w[0] + 36u), c.r[19].w[0]);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0016F12Cu) [[unlikely]] return; }
L_0016F12C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_0016F144; } }
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016F144u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 406u, depth + 1u); else { c.pc = 0x0016F3C0u; return; } if (c.pc != 0x0016F144u) [[unlikely]] return; }
L_0016F144:
    st32((c.r[20].w[0] + 28u), c.r[2].w[0]);
    c.r[5].d[0] = c.r[19].d[0] << 48;
    set32(c.r[4], ld32((c.r[20].w[0] + 28u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016F158u); c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 48);  if (depth < kMaxDepth) unit_001B(c, 461u, depth + 1u); else { c.pc = 0x0016FCA0u; return; } if (c.pc != 0x0016F158u) [[unlikely]] return; }
L_0016F158:
    c.r[2].d[0] = c.r[20].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0016F180:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0016F1FC; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] - 16032u);
    set32(c.r[2], c.r[2].w[0] - 15944u);
    st32((c.r[17].w[0]), c.r[3].w[0]);
    st32((c.r[17].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 28u)));
    c.budget -= 9;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[5], 0u + 1u);  if (t) { goto L_0016F1C8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016F1C8u);  if (depth < kMaxDepth) unit_001B(c, 414u, depth + 1u); else { c.pc = 0x0016F490u; return; } if (c.pc != 0x0016F1C8u) [[unlikely]] return; }
L_0016F1C8:
    set32(c.r[4], c.r[17].w[0] + 20u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016F1D8u); st32((c.r[17].w[0] + 28u), 0u);  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E490u; return; } if (c.pc != 0x0016F1D8u) [[unlikely]] return; }
L_0016F1D8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016F1E4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 300u, depth + 1u); else { c.pc = 0x0012E490u; return; } if (c.pc != 0x0016F1E4u) [[unlikely]] return; }
L_0016F1E4:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0016F200; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016F1FCu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x0016F1FCu) [[unlikely]] return; }
L_0016F1FC:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0016F200:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0016F220:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[1].w[0] + 25384u)));
    c.budget -= 13;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_0016F288; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016F25Cu); set32(c.r[4], 0u + 40u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0016F25Cu) [[unlikely]] return; }
L_0016F25C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0016F280; } }
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016F27Cu); c.r[8].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 383u, depth + 1u); else { c.pc = 0x0016F0C0u; return; } if (c.pc != 0x0016F27Cu) [[unlikely]] return; }
L_0016F27C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0016F280:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st32((c.r[1].w[0] + 25384u), c.r[4].w[0]);
    c.budget -= 2;
L_0016F288:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0016F2B0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[1].w[0] + 25384u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0016F30C; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 44u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0016F2D8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0016F2D8u) [[unlikely]] return; }
L_0016F2D8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);  if (t) { goto L_0016F30C; } }
    set32(c.r[4], ld32((c.r[1].w[0] + 25384u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0016F304; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0016F304; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0016F304u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0016F304u) [[unlikely]] return; }
L_0016F304:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st32((c.r[1].w[0] + 25384u), 0u);
    c.budget -= 2;
L_0016F30C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0016F320:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[3], 0u + 5u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 8u)));
    c.budget -= 9;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0016F3AC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016F34Cu); set32(c.r[4], ld32((c.r[16].w[0] + 28u)));  if (depth < kMaxDepth) unit_001B(c, 424u, depth + 1u); else { c.pc = 0x0016F5E0u; return; } if (c.pc != 0x0016F34Cu) [[unlikely]] return; }
L_0016F34C:
    set32(c.r[4], ld32((c.r[16].w[0] + 28u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016F358u); c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 459u, depth + 1u); else { c.pc = 0x0016FC10u; return; } if (c.pc != 0x0016F358u) [[unlikely]] return; }
L_0016F358:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == c.r[3].d[0];  if (t) { goto L_0016F3AC; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], 0u + 2u);  if (t) { goto L_0016F380; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0016F398; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 1;
L_0016F380:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != c.r[2].d[0];  if (t) { goto L_0016F398; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016F390u);  if (depth < kMaxDepth) unit_009E(c, 79u, depth + 1u); else { c.pc = 0x00378CC0u; return; } if (c.pc != 0x0016F390u) [[unlikely]] return; }
L_0016F390:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016F398u);  if (depth < kMaxDepth) unit_00AA(c, 231u, depth + 1u); else { c.pc = 0x003AA160u; return; } if (c.pc != 0x0016F398u) [[unlikely]] return; }
L_0016F398:
    st32((c.r[16].w[0] + 32u), c.r[17].w[0]);
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0016F3ACu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0016F3ACu) [[unlikely]] return; }
L_0016F3AC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0016F3C0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00040000u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.r[16].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016F3F4u); c.r[4].d[0] = c.r[2].d[0] | 47856ull;  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0016F3F4u) [[unlikely]] return; }
L_0016F3F4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_0016F404; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016F404u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_001C(c, 125u, depth + 1u); else { c.pc = 0x00171750u; return; } if (c.pc != 0x0016F404u) [[unlikely]] return; }
L_0016F404:
    st32((c.r[19].w[0]), c.r[2].w[0]);
    st32((c.r[19].w[0] + 4u), 0u);
    st32((c.r[19].w[0] + 8u), 0u);
    st8((c.r[19].w[0] + 33u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], ld32((c.r[19].w[0])));
    set32(c.r[25], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 9;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0016F428u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0016F428u) [[unlikely]] return; }
L_0016F428:
    set32(c.r[4], ld32((c.r[19].w[0])));
    set32(c.r[25], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0016F43Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0016F43Cu) [[unlikely]] return; }
L_0016F43C:
    set32(c.r[2], 0u - 1u);
    set32(c.r[4], 0u + 2u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016F44Cu); st16((c.r[19].w[0] + 42u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_000B(c, 63u, depth + 1u); else { c.pc = 0x0012C8E0u; return; } if (c.pc != 0x0016F44Cu) [[unlikely]] return; }
L_0016F44C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016F454u); set32(c.r[4], 0u + 3u);  if (depth < kMaxDepth) unit_000B(c, 63u, depth + 1u); else { c.pc = 0x0012C8E0u; return; } if (c.pc != 0x0016F454u) [[unlikely]] return; }
L_0016F454:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016F45Cu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 423u, depth + 1u); else { c.pc = 0x0016F5A0u; return; } if (c.pc != 0x0016F45Cu) [[unlikely]] return; }
L_0016F45C:
    st32((c.r[19].w[0] + 52u), 0u);
    c.r[2].d[0] = c.r[19].d[0] + 0ull;
    st32((c.r[19].w[0] + 60u), c.r[17].w[0]);
    st32((c.r[19].w[0] + 64u), c.r[16].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0016F490:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0016F584; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016F4B4u); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_000B(c, 66u, depth + 1u); else { c.pc = 0x0012C950u; return; } if (c.pc != 0x0016F4B4u) [[unlikely]] return; }
L_0016F4B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016F4BCu); set32(c.r[4], 0u + 3u);  if (depth < kMaxDepth) unit_000B(c, 66u, depth + 1u); else { c.pc = 0x0012C950u; return; } if (c.pc != 0x0016F4BCu) [[unlikely]] return; }
L_0016F4BC:
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0016F4E0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0016F4E0; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0016F4E0u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0016F4E0u) [[unlikely]] return; }
L_0016F4E0:
    st32((c.r[17].w[0]), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 8u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0016F508; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0016F508; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0016F508u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0016F508u) [[unlikely]] return; }
L_0016F508:
    st32((c.r[17].w[0] + 8u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0016F530; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0016F530; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0016F530u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0016F530u) [[unlikely]] return; }
L_0016F530:
    st32((c.r[17].w[0] + 4u), 0u);
    c.r[2].d[0] = ld8((c.r[17].w[0] + 33u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0016F548; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016F548u);  if (depth < kMaxDepth) unit_000F(c, 366u, depth + 1u); else { c.pc = 0x0013F970u; return; } if (c.pc != 0x0016F548u) [[unlikely]] return; }
L_0016F548:
    set32(c.r[4], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; c.r[2].d[0] = c.r[16].d[0] << 48;  if (t) { goto L_0016F570; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0016F56C; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0016F56Cu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0016F56Cu) [[unlikely]] return; }
L_0016F56C:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.budget -= 1;
L_0016F570:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0; st32((c.r[17].w[0] + 12u), 0u);  if (t) { goto L_0016F584; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016F584u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x0016F584u) [[unlikely]] return; }
L_0016F584:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0016F5A0:
    st32((c.r[4].w[0] + 12u), 0u);
    set32(c.r[3], 0u + 1u);
    st8((c.r[4].w[0] + 32u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[5], 0u - 3u);
    st16((c.r[4].w[0] + 46u), static_cast<std::uint16_t>(c.r[5].w[0]));
    set32(c.r[3], 0u - 1u);
    st16((c.r[4].w[0] + 48u), static_cast<std::uint16_t>(c.r[5].w[0]));
    st16((c.r[4].w[0] + 38u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st16((c.r[4].w[0] + 36u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st32((c.r[4].w[0] + 28u), 0u);
    st32((c.r[4].w[0] + 16u), 0u);
    st16((c.r[4].w[0] + 50u), static_cast<std::uint16_t>(0u));
    st8((c.r[4].w[0] + 34u), static_cast<std::uint8_t>(0u));
    c.budget -= 15;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 56u), c.r[3].w[0]);  c.pc = t; return; }
L_0016F5E0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[2], 0u + 1u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 16u)));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0016F660; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 42u)));
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(9ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x00460000u);  if (t) { goto L_0016F658; } }
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + 3600u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x0016C000u < 16384u) { entry = entries_001B[(t - 0x0016C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0016F628:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016F630u);  if (depth < kMaxDepth) unit_001C(c, 53u, depth + 1u); else { c.pc = 0x001708D0u; return; } if (c.pc != 0x0016F630u) [[unlikely]] return; }
L_0016F630:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 16u), c.r[2].w[0]);  if (t) { goto L_0016F660; } }
L_0016F638:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016F640u);  if (depth < kMaxDepth) unit_001C(c, 35u, depth + 1u); else { c.pc = 0x00170440u; return; } if (c.pc != 0x0016F640u) [[unlikely]] return; }
L_0016F640:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 16u), c.r[2].w[0]);  if (t) { goto L_0016F660; } }
L_0016F648:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016F650u);  if (depth < kMaxDepth) unit_001B(c, 478u, depth + 1u); else { c.pc = 0x0016FEF0u; return; } if (c.pc != 0x0016F650u) [[unlikely]] return; }
L_0016F650:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 16u), c.r[2].w[0]);  if (t) { goto L_0016F660; } }
L_0016F658:
    set32(c.r[2], 0u + 3u);
    st32((c.r[17].w[0] + 16u), c.r[2].w[0]);
    c.budget -= 2;
L_0016F660:
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016F66Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_001C(c, 159u, depth + 1u); else { c.pc = 0x00171B10u; return; } if (c.pc != 0x0016F66Cu) [[unlikely]] return; }
L_0016F66C:
    st16((c.r[17].w[0] + 36u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016F67Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_001B(c, 460u, depth + 1u); else { c.pc = 0x0016FC20u; return; } if (c.pc != 0x0016F67Cu) [[unlikely]] return; }
L_0016F67C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0016F69C; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0016F69C; } }
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.f[0] = ld32((c.r[2].w[0] + 1084u));
    st32((c.r[3].w[0] + 136u), c.f[0]);
    c.budget -= 3;
L_0016F69C:
    set32(c.r[16], ld32((c.r[17].w[0] + 16u)));
    set32(c.r[4], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == c.r[4].d[0]; set32(c.r[3], 0u - 3u);  if (t) { goto L_0016F6F4; } }
    set32(c.r[2], 0u - 1u);
    st16((c.r[17].w[0] + 46u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st16((c.r[17].w[0] + 48u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st16((c.r[17].w[0] + 42u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0016F6E0; } }
    set32(c.r[3], ld32((c.r[2].w[0] + 8u)));
    set32(c.r[2], 0u + 5u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0016F6E0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0016F6F4; } }
L_0016F6E0:
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[2], ld32((c.r[2].w[0] + 1072u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0016F6F8; } }
    set32(c.r[16], 0u + 1u);
    c.budget -= 1;
L_0016F6F4:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0016F6F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016F700u);  if (depth < kMaxDepth) unit_001B(c, 434u, depth + 1u); else { c.pc = 0x0016F720u; return; } if (c.pc != 0x0016F700u) [[unlikely]] return; }
L_0016F700:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0016F720:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 32u));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != 0ull; c.r[19].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0016F900; } }
    set32(c.r[4], ld32((c.r[19].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0016F900; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 44u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0016F760u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0016F760u) [[unlikely]] return; }
L_0016F760:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_0016F790; } }
    set32(c.r[2], 0u + 1u);
    st8((c.r[19].w[0] + 32u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016F778u); set32(c.r[4], ld32((c.r[19].w[0] + 8u)));  if (depth < kMaxDepth) unit_001A(c, 231u, depth + 1u); else { c.pc = 0x0016A360u; return; } if (c.pc != 0x0016F778u) [[unlikely]] return; }
L_0016F778:
    st16((c.r[19].w[0] + 38u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[3].d[0] = ld8((c.r[19].w[0] + 34u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], 0u - 1u);  if (t) { goto L_0016FBE8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[19].w[0] + 38u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_0016FBE8; } }
L_0016F790:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016F798u);  if (depth < kMaxDepth) unit_001B(c, 477u, depth + 1u); else { c.pc = 0x0016FEC0u; return; } if (c.pc != 0x0016F798u) [[unlikely]] return; }
L_0016F798:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_0016F824; } }
    set32(c.r[3], ld32((c.r[19].w[0] + 56u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_0016F7B4; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    st32((c.r[19].w[0] + 56u), c.r[3].w[0]);
    c.budget -= 2;
L_0016F7B4:
    set32(c.r[4], ld32((c.r[19].w[0] + 8u)));
    set32(c.r[3], 0u + 2u);
    set32(c.r[4], ld32((c.r[4].w[0] + 8u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_0016F870; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016F7D0u);  if (depth < kMaxDepth) unit_001B(c, 476u, depth + 1u); else { c.pc = 0x0016FE90u; return; } if (c.pc != 0x0016F7D0u) [[unlikely]] return; }
L_0016F7D0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0016F814; } }
    set32(c.r[3], ld32((c.r[19].w[0] + 56u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_0016F814; } }
    set32(c.r[2], 0u + 1u);
    st16((c.r[19].w[0] + 50u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[4], ld32((c.r[19].w[0] + 8u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0016F800u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0016F800u) [[unlikely]] return; }
L_0016F800:
    set32(c.r[4], ld32((c.r[19].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_0016F870; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 132u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0016F870; } }
L_0016F814:
    set32(c.r[3], ld32((c.r[19].w[0] + 8u)));
    set32(c.r[4], 0u + 210u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 180u), c.r[4].w[0]);  if (t) { goto L_0016F870; } }
L_0016F824:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016F82Cu);  if (depth < kMaxDepth) unit_001B(c, 476u, depth + 1u); else { c.pc = 0x0016FE90u; return; } if (c.pc != 0x0016F82Cu) [[unlikely]] return; }
L_0016F82C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0016F870; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 50u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0016F870; } }
    set32(c.r[4], ld32((c.r[19].w[0] + 8u)));
    set32(c.r[3], 0u + 2u);
    set32(c.r[4], ld32((c.r[4].w[0] + 8u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0016F870; } }
    set32(c.r[2], 0u + 1u);
    st16((c.r[19].w[0] + 50u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[4], ld32((c.r[19].w[0] + 8u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0016F870u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0016F870u) [[unlikely]] return; }
L_0016F870:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 46u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_0016F884; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0016FBE8; } }
L_0016F884:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 50u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_0016FBE8; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016F89Cu); c.r[16].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (depth < kMaxDepth) unit_001B(c, 460u, depth + 1u); else { c.pc = 0x0016FC20u; return; } if (c.pc != 0x0016F89Cu) [[unlikely]] return; }
L_0016F89C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0016F8E0; } }
    set32(c.r[4], ld32((c.r[19].w[0] + 8u)));
    set32(c.r[3], 0u + 3u);
    set32(c.r[4], ld32((c.r[4].w[0] + 8u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 4u);  if (t) { goto L_0016F8C0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0016F8E0; } }
L_0016F8C0:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0016F8E0; } }
    c.r[3].d[0] = ld8((c.r[19].w[0] + 34u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_0016F8DC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[19].w[0] + 34u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0016F8E0; } }
L_0016F8DC:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0016F8E0:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0016FBE8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016F8F0u); set32(c.r[16], ld32((c.r[19].w[0] + 52u)));  if (depth < kMaxDepth) unit_001C(c, 80u, depth + 1u); else { c.pc = 0x00170FE0u; return; } if (c.pc != 0x0016F8F0u) [[unlikely]] return; }
L_0016F8F0:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == c.r[2].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_0016FBE8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[19].w[0] + 34u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0016FBE8; } }
L_0016F900:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 48u)));
    set32(c.r[3], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u - 3u);  if (t) { goto L_0016F918; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; c.r[1].d[0] = c.r[4].sd[0] < 0ll ? 1ull : 0ull;  if (t) { goto L_0016F920; } }
L_0016F918:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[19].w[0] + 46u), static_cast<std::uint16_t>(c.r[4].w[0]));  if (t) { goto L_0016FBD8; } }
L_0016F920:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[3], 0u - 1u);  if (t) { goto L_0016FBDC; } }
    st16((c.r[19].w[0] + 46u), static_cast<std::uint16_t>(c.r[4].w[0]));
    set32(c.r[2], 0u - 2u);
    st16((c.r[19].w[0] + 48u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 46u)));
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[2], 0u + 12u);  if (t) { goto L_0016F960; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0016F960; } }
    set32(c.r[2], 0u + 8u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 24u);  if (t) { goto L_0016F960; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0016F96C; } }
L_0016F960:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016F968u);  if (depth < kMaxDepth) unit_001C(c, 80u, depth + 1u); else { c.pc = 0x00170FE0u; return; } if (c.pc != 0x0016F968u) [[unlikely]] return; }
L_0016F968:
    st32((c.r[19].w[0] + 52u), c.r[2].w[0]);
    c.budget -= 1;
L_0016F96C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016F974u); set32(c.r[4], ld32((c.r[19].w[0] + 52u)));  if (depth < kMaxDepth) unit_001C(c, 79u, depth + 1u); else { c.pc = 0x00170F90u; return; } if (c.pc != 0x0016F974u) [[unlikely]] return; }
L_0016F974:
    set32(c.r[3], ld32((c.r[19].w[0] + 52u)));
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u + 2u);
    c.r[17].d[0] = 0ull + 0ull;
    c.r[16].d[0] = 0ull + 0ull;
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 46u)));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0016F99C; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0016F9A4; } }
L_0016F99C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_0016F9AC; } }
L_0016F9A4:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 44u)));
    set32(c.r[17], c.r[17].w[0] + c.r[2].w[0]);
    c.budget -= 2;
L_0016F9AC:
    set32(c.r[4], ld32((c.r[19].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0016F9F0; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[2], c.r[17].w[0] << 2);
    set32(c.r[7], c.r[18].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] << 1);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[5], 0u + 4u);
    set32(c.r[2], c.r[2].w[0] + 3536u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 168u)));
    c.budget -= 12;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0016F9E8u); c.r[8].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0016F9E8u) [[unlikely]] return; }
L_0016F9E8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[19].w[0] + 8u)));  if (t) { goto L_0016FAC8; } }
L_0016F9F0:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 42u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[4], 0u + 212u);  if (t) { goto L_0016FA78; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016FA08u); set32(c.r[4], 0u + 212u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0016FA08u) [[unlikely]] return; }
L_0016FA08:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0016FA20; } }
    set32(c.r[5], ld32((c.r[19].w[0] + 60u)));
    set32(c.r[6], ld32((c.r[19].w[0] + 64u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016FA20u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_001A(c, 81u, depth + 1u); else { c.pc = 0x00169030u; return; } if (c.pc != 0x0016FA20u) [[unlikely]] return; }
L_0016FA20:
    st32((c.r[19].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[19].w[0] + 8u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0016FA38u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0016FA38u) [[unlikely]] return; }
L_0016FA38:
    set32(c.r[4], ld32((c.r[19].w[0] + 8u)));
    set32(c.r[2], c.r[17].w[0] << 2);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 46u)));
    set32(c.r[7], c.r[18].w[0] + c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[5], 0u + 4u);
    set32(c.r[2], c.r[2].w[0] + 3536u);
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 168u)));
    c.budget -= 14;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0016FA70u); c.r[8].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0016FA70u) [[unlikely]] return; }
L_0016FA70:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0016FAC4; } }
L_0016FA78:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016FA80u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0016FA80u) [[unlikely]] return; }
L_0016FA80:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0016FAC0; } }
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 46u)));
    set32(c.r[3], c.r[17].w[0] << 2);
    set32(c.r[9], c.r[18].w[0] + c.r[3].w[0]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[7], ld32((c.r[19].w[0] + 60u)));
    set32(c.r[3], c.r[3].w[0] + 3536u);
    set32(c.r[8], ld32((c.r[19].w[0] + 64u)));
    set32(c.r[5], 0u + 4u);
    set32(c.r[2], c.r[6].w[0] << 1);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016FAC0u); c.r[10].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_001A(c, 260u, depth + 1u); else { c.pc = 0x0016A7D0u; return; } if (c.pc != 0x0016FAC0u) [[unlikely]] return; }
L_0016FAC0:
    st32((c.r[19].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 1;
L_0016FAC4:
    set32(c.r[3], ld32((c.r[19].w[0] + 8u)));
    c.budget -= 1;
L_0016FAC8:
    set32(c.r[2], 0u + 2u);
    set32(c.r[3], ld32((c.r[3].w[0] + 172u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0016FB08; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016FAE0u);  if (depth < kMaxDepth) unit_000B(c, 79u, depth + 1u); else { c.pc = 0x0012CB20u; return; } if (c.pc != 0x0016FAE0u) [[unlikely]] return; }
L_0016FAE0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00020000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 8u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 56u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[5], ld32((c.r[1].w[0] + 17276u)));  if (t) { goto L_0016FB08; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0016FB08u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0016FB08u) [[unlikely]] return; }
L_0016FB08:
    set32(c.r[2], ld32((c.r[19].w[0] + 8u)));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    st8((c.r[2].w[0] + 196u), static_cast<std::uint8_t>(c.r[16].w[0]));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016FB1Cu); st8((c.r[19].w[0] + 32u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_001B(c, 477u, depth + 1u); else { c.pc = 0x0016FEC0u; return; } if (c.pc != 0x0016FB1Cu) [[unlikely]] return; }
L_0016FB1C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], 0u - 1u);  if (t) { goto L_0016FB30; } }
    set32(c.r[3], 0u + 240u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 56u), c.r[3].w[0]);  if (t) { goto L_0016FB34; } }
L_0016FB30:
    st32((c.r[19].w[0] + 56u), c.r[3].w[0]);
    c.budget -= 1;
L_0016FB34:
    set32(c.r[4], ld32((c.r[19].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0016FB58; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0016FB58; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0016FB58u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0016FB58u) [[unlikely]] return; }
L_0016FB58:
    st32((c.r[19].w[0] + 12u), 0u);
    set32(c.r[3], 0u + 13u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 46u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 14u);  if (t) { goto L_0016FB74; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0016FBD8; } }
L_0016FB74:
    set32(c.r[3], ld32((c.r[19].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[4], 0u + 160u);  if (t) { goto L_0016FBD8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016FB88u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0016FB88u) [[unlikely]] return; }
L_0016FB88:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0016FBB0; } }
    set32(c.r[6], ld32((c.r[19].w[0] + 64u)));
    set32(c.r[5], 0u + 3u);
    set32(c.r[7], 0u + 332u);
    set32(c.r[8], 0u + 400u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016FBACu); set32(c.r[9], 0u + 20u);  if (depth < kMaxDepth) unit_001C(c, 85u, depth + 1u); else { c.pc = 0x00171050u; return; } if (c.pc != 0x0016FBACu) [[unlikely]] return; }
L_0016FBAC:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0016FBB0:
    st32((c.r[19].w[0] + 12u), c.r[4].w[0]);
    set32(c.r[3], 0u + 13u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 46u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0016FBCC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_0016FBD0; } }
L_0016FBCC:
    set32(c.r[4], 0u + 1u);
    c.budget -= 1;
L_0016FBD0:
    set32(c.r[3], ld32((c.r[19].w[0] + 12u)));
    st32((c.r[3].w[0] + 20u), c.r[4].w[0]);
    c.budget -= 2;
L_0016FBD8:
    set32(c.r[3], 0u - 1u);
    c.budget -= 1;
L_0016FBDC:
    st16((c.r[19].w[0] + 38u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st16((c.r[19].w[0] + 50u), static_cast<std::uint16_t>(0u));
    st8((c.r[19].w[0] + 34u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
L_0016FBE8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0016FC10:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0016FC20:
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0016FC78; } }
    set32(c.r[6], ld32((c.r[3].w[0] + 8u)));
    set32(c.r[2], 0u + 5u);
    c.budget -= 4;
    { const bool t = c.r[6].d[0] == c.r[2].d[0];  if (t) { goto L_0016FC78; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull; set32(c.r[2], 0u + 2u);  if (t) { goto L_0016FC68; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 56u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0016FC60; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 180u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] > 0; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0016FC94; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0016FC60:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0016FC94; } }
L_0016FC68:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != c.r[2].d[0];  if (t) { goto L_0016FC90; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0016FC94; } }
L_0016FC78:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 48u)));
    set32(c.r[2], 0u - 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_0016FC90; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0016FC94; } }
L_0016FC90:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0016FC94:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0016FCA0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 42u)));
    c.budget -= 8;
    { const bool t = c.r[2].sd[0] < 0; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0016FCC8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_0016FD38; } }
L_0016FCC8:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016FCD4u); st32((c.r[17].w[0] + 16u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000B(c, 79u, depth + 1u); else { c.pc = 0x0012CB20u; return; } if (c.pc != 0x0016FCD4u) [[unlikely]] return; }
L_0016FCD4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00020000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    set32(c.r[3], ld32((c.r[1].w[0] + 17276u)));
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    set32(c.r[2], c.r[2].w[0] - 3u);
    st16((c.r[17].w[0] + 44u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;
    st16((c.r[17].w[0] + 40u), static_cast<std::uint16_t>(0u));
    st32((c.r[17].w[0] + 20u), 0u);
    st32((c.r[17].w[0] + 24u), 0u);
    c.budget -= 13;
    { const bool t = c.r[1].d[0] == 0ull; st16((c.r[17].w[0] + 42u), static_cast<std::uint16_t>(c.r[16].w[0]));  if (t) { goto L_0016FD34; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + 3648u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x0016C000u < 16384u) { entry = entries_001B[(t - 0x0016C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0016FD24:
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00050000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    st8((c.r[1].w[0] - 17696u), static_cast<std::uint8_t>(0u));
    c.budget -= 4;
L_0016FD34:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0016FD38:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0016FD50:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016FD70u); c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_001F(c, 369u, depth + 1u); else { c.pc = 0x0017F160u; return; } if (c.pc != 0x0016FD70u) [[unlikely]] return; }
L_0016FD70:
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016FD7Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_001F(c, 370u, depth + 1u); else { c.pc = 0x0017F170u; return; } if (c.pc != 0x0016FD7Cu) [[unlikely]] return; }
L_0016FD7C:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0016FD90; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016FD8Cu);  if (depth < kMaxDepth) unit_001C(c, 80u, depth + 1u); else { c.pc = 0x00170FE0u; return; } if (c.pc != 0x0016FD8Cu) [[unlikely]] return; }
L_0016FD8C:
    st32((c.r[17].w[0] + 52u), c.r[2].w[0]);
    c.budget -= 1;
L_0016FD90:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0016FDB0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 33u));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0016FE18; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016FDD0u);  if (depth < kMaxDepth) unit_000F(c, 366u, depth + 1u); else { c.pc = 0x0013F970u; return; } if (c.pc != 0x0016FDD0u) [[unlikely]] return; }
L_0016FDD0:
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016FDDCu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 473u, depth + 1u); else { c.pc = 0x0016FE30u; return; } if (c.pc != 0x0016FDDCu) [[unlikely]] return; }
L_0016FDDC:
    set32(c.r[6], c.r[29].w[0] + 32u);
    set32(c.r[5], c.r[29].w[0] + 64u);
    set32(c.r[4], 0u + 4u);
    c.budget -= 3;
L_0016FDE8:
    set32(c.r[3], ld32((c.r[6].w[0])));
    set32(c.r[4], c.r[4].w[0] - 1u);
    set32(c.r[2], ld32((c.r[6].w[0] + 4u)));
    st32((c.r[5].w[0]), c.r[3].w[0]);
    set32(c.r[6], c.r[6].w[0] + 8u);
    st32((c.r[5].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 8;
    { const bool t = c.r[4].sd[0] > 0; set32(c.r[5], c.r[5].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0016FDE8u | kUnwind; return; } goto L_0016FDE8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016FE10u); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_000F(c, 361u, depth + 1u); else { c.pc = 0x0013F890u; return; } if (c.pc != 0x0016FE10u) [[unlikely]] return; }
L_0016FE10:
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0] + 33u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_0016FE18:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0016FE30:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[5], 0u + 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016FE4Cu); set32(c.r[4], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_0010(c, 111u, depth + 1u); else { c.pc = 0x00141670u; return; } if (c.pc != 0x0016FE4Cu) [[unlikely]] return; }
L_0016FE4C:
    set32(c.r[3], 0u + 1u);
    set32(c.r[6], c.r[29].w[0] + 32u);
    st32((c.r[29].w[0] + 32u), c.r[3].w[0]);
    set32(c.r[5], 0u + 4u);
    c.budget -= 4;
L_0016FE5C:
    set32(c.r[4], ld32((c.r[6].w[0])));
    set32(c.r[5], c.r[5].w[0] - 1u);
    set32(c.r[3], ld32((c.r[6].w[0] + 4u)));
    st32((c.r[16].w[0]), c.r[4].w[0]);
    set32(c.r[6], c.r[6].w[0] + 8u);
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 8;
    { const bool t = c.r[5].sd[0] > 0; set32(c.r[16], c.r[16].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0016FE5Cu | kUnwind; return; } goto L_0016FE5C; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0016FE90:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 48u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 46u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; c.r[1].d[0] = c.r[3].sd[0] < -1ll ? 1ull : 0ull;  if (t) { goto L_0016FEA8; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0016FEB8; } }
L_0016FEA8:
    c.r[2].d[0] = ld8((c.r[4].w[0] + 34u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0016FEB8; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0016FEB8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0016FEC0:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 46u)));
    c.r[2].d[0] = c.r[3].sd[0] < 11ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0016FEE0; } }
    c.r[1].d[0] = c.r[3].sd[0] < 16ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0016FEE0; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0016FEE0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0016FEF0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    set32(c.r[8], 0u - 2u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[17], 0u + 1u);
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 46u)));
    set32(c.r[18], ld32((c.r[3].w[0] + 1080u)));
    c.budget -= 15;
    { const bool t = c.r[2].d[0] == c.r[8].d[0]; c.r[16].d[0] = 0ull + 0ull;  if (t) { [[clang::musttail]] return unit_001C(c, 33u, depth); } }
    set32(c.r[3], 0u + 22u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 16u);  if (t) { [[clang::musttail]] return unit_001C(c, 30u, depth); } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[7], 0u + 23u);  if (t) { [[clang::musttail]] return unit_001C(c, 30u, depth); } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[7].d[0]; set32(c.r[3], 0u + 19u);  if (t) { [[clang::musttail]] return unit_001C(c, 30u, depth); } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[6], 0u + 18u);  if (t) { [[clang::musttail]] return unit_001C(c, 28u, depth); } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[6].d[0]; set32(c.r[5], 0u + 17u);  if (t) { [[clang::musttail]] return unit_001C(c, 28u, depth); } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[5].d[0]; set32(c.r[3], 0u + 26u);  if (t) { [[clang::musttail]] return unit_001C(c, 28u, depth); } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { [[clang::musttail]] return unit_001C(c, 28u, depth); } }
    set32(c.r[3], 0u + 15u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 13u);  if (t) { [[clang::musttail]] return unit_001C(c, 23u, depth); } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[7], 0u + 11u);  if (t) { [[clang::musttail]] return unit_001C(c, 19u, depth); } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[7].d[0]; set32(c.r[3], 0u + 6u);  if (t) { [[clang::musttail]] return unit_001C(c, 15u, depth); } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; c.r[5].d[0] = 0ull + 0ull;  if (t) { [[clang::musttail]] return unit_001C(c, 13u, depth); } }
    set32(c.r[3], 0u + 10u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 8u);  if (t) { [[clang::musttail]] return unit_001C(c, 10u, depth); } }
    set32(c.r[3], 0u + 9u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[6], 0u + 8u);  if (t) { [[clang::musttail]] return unit_001C(c, 9u, depth); } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[6].d[0]; set32(c.r[3], 0u + 2u);  if (t) { [[clang::musttail]] return unit_001C(c, 9u, depth); } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; c.r[5].d[0] = 0ull + 0ull;  if (t) { [[clang::musttail]] return unit_001C(c, 7u, depth); } }
    set32(c.r[5], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[5].d[0]; set32(c.r[3], 0u - 3u);  if (t) { [[clang::musttail]] return unit_001C(c, 4u, depth); } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0016FFD0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], 0u + 3u);  if (t) { [[clang::musttail]] return unit_001C(c, 33u, depth); } }
L_0016FFD0:
    st16((c.r[19].w[0] + 40u), static_cast<std::uint16_t>(0u));
    st16((c.r[19].w[0] + 44u), static_cast<std::uint16_t>(0u));
    st16((c.r[19].w[0] + 48u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016FFE4u); set32(c.r[4], ld32((c.r[19].w[0])));  if (depth < kMaxDepth) unit_001C(c, 247u, depth + 1u); else { c.pc = 0x00172D30u; return; } if (c.pc != 0x0016FFE4u) [[unlikely]] return; }
L_0016FFE4:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 44u)));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016FFF4u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 464u, depth + 1u); else { c.pc = 0x0016FD50u; return; } if (c.pc != 0x0016FFF4u) [[unlikely]] return; }
L_0016FFF4:
    set32(c.r[4], ld32((c.r[19].w[0])));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00170004u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_001C(c, 174u, depth + 1u); else { c.pc = 0x00171C60u; return; } if (c.pc != 0x00170004u) [[unlikely]] return; }
    [[clang::musttail]] return unit_001C(c, 2u, depth);
}

}
