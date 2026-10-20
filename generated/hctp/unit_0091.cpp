#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0091[4096] = {
    1, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5,
    0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 9, 0, 0, 10, 0, 0, 11, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0,
    13, 0, 0, 0, 14, 0, 0, 0, 0, 15, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 17, 0, 0, 0, 18, 0, 0, 0, 0, 19, 0, 0,
    0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 24, 0, 0,
    0, 0, 25, 0, 0, 0, 0, 0, 26, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 29, 0,
    0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 34, 0,
    0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 38, 0, 0, 0,
    0, 39, 0, 0, 0, 0, 40, 0, 41, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 43, 0, 0, 0, 0, 44, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 47,
    0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 51, 0, 0, 0,
    0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 53, 0, 54, 0, 0, 0, 0, 0, 55, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0,
    57, 0, 0, 0, 0, 58, 0, 0, 0, 59, 0, 0, 0, 60, 0, 0, 0, 61, 0, 0, 62, 0, 0, 0, 63, 0, 0, 0, 64, 0, 0, 0,
    0, 0, 65, 0, 0, 66, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 70, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0,
    72, 0, 0, 0, 0, 73, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 78, 0, 0, 0, 0, 0, 79, 0, 80, 0,
    81, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 0, 0, 83, 0,
    0, 0, 0, 0, 84, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 87, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0,
    89, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 93, 0, 94, 0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 97, 0, 0, 0,
    0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 100, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0,
    0, 103, 0, 0, 0, 0, 0, 104, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0,
    0, 108, 0, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 112, 0, 113, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 114,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0,
    118, 0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0,
    121, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 0, 125, 0,
    0, 0, 0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 132,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 135,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 138, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 141, 0, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 143, 0, 0, 0,
    144, 0, 0, 0, 145, 0, 0, 0, 146, 0, 0, 0, 147, 0, 0, 0, 148, 0, 0, 0, 149, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 151, 0, 152, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 153, 0, 0, 0, 154, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 157, 0, 0, 158, 0, 0, 159, 0, 0, 160, 0, 0, 0, 0, 0, 161, 0, 0, 0, 0, 0, 0,
    162, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 165, 0, 0, 0, 166, 0, 0, 0, 0, 167, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 168, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0,
    0, 171, 0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 173, 0, 0, 174, 0, 0, 0, 0, 175, 0, 176, 0, 0, 0, 0, 0, 177, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 0, 0,
    180, 0, 0, 0, 0, 0, 0, 0, 0, 0, 181, 0, 182, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 183, 0, 0, 0, 0,
    0, 0, 0, 0, 184, 0, 0, 0, 0, 185, 0, 186, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0,
    0, 0, 0, 188, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 191, 0, 0, 0, 192, 0,
    0, 0, 0, 0, 0, 0, 193, 0, 0, 0, 194, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0, 0, 197, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 199, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 201, 0, 0, 202, 0, 0, 203, 0, 0, 0, 0, 204, 0, 0, 205, 0, 206,
    0, 0, 0, 0, 0, 0, 207, 0, 0, 208, 0, 209, 0, 0, 0, 0, 0, 0, 0, 210, 0, 0, 211, 0, 212, 0, 0, 0, 0, 0, 0, 213,
    0, 0, 214, 0, 215, 0, 0, 0, 0, 0, 0, 216, 0, 0, 217, 0, 218, 0, 0, 0, 0, 219, 0, 0, 220, 0, 221, 0, 0, 0, 0, 222,
    0, 0, 223, 0, 0, 0, 0, 0, 224, 0, 0, 0, 0, 0, 0, 0, 0, 225, 0, 0, 0, 0, 0, 226, 0, 0, 227, 0, 0, 0, 0, 228,
    0, 0, 0, 0, 0, 0, 0, 229, 0, 0, 0, 0, 0, 0, 230, 0, 0, 0, 231, 0, 0, 232, 0, 0, 0, 233, 0, 0, 0, 0, 234, 0,
    0, 235, 0, 0, 236, 0, 0, 0, 0, 237, 0, 0, 238, 0, 0, 0, 0, 0, 0, 239, 0, 0, 240, 0, 0, 0, 241, 0, 0, 0, 0, 0,
    242, 0, 0, 0, 0, 0, 0, 243, 0, 0, 0, 0, 0, 244, 0, 0, 0, 0, 0, 0, 245, 0, 0, 0, 0, 0, 246, 0, 0, 0, 0, 0,
    0, 247, 0, 0, 0, 0, 0, 0, 0, 248, 0, 249, 0, 0, 0, 0, 0, 0, 0, 0, 250, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 251, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    252, 0, 0, 0, 0, 0, 0, 0, 253, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 254, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 256, 0, 0, 0, 0, 0, 257, 0, 0, 0, 0, 0, 0, 258, 0, 0, 0, 0, 0, 0, 0,
    0, 259, 0, 0, 0, 0, 0, 0, 0, 260, 0, 0, 0, 0, 0, 0, 0, 0, 0, 261, 0, 0, 0, 0, 262, 0, 0, 0, 263, 0, 0, 0,
    264, 0, 0, 0, 265, 0, 0, 0, 0, 266, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 267, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 268, 0, 0, 0, 0, 0, 0, 269, 0, 0, 0, 0, 270, 0, 0, 0, 0, 271, 0, 0, 0, 272, 0, 0, 0, 273, 0, 0,
    0, 0, 0, 0, 274, 0, 0, 0, 275, 0, 0, 0, 0, 0, 0, 276, 0, 0, 0, 0, 277, 0, 0, 0, 0, 0, 0, 0, 0, 0, 278, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 279, 0, 0, 0, 280, 0, 0, 0, 0, 0, 0, 0, 281, 0, 0, 0, 282, 0, 0, 0, 0, 283, 0, 0,
    284, 0, 0, 0, 285, 0, 0, 0, 0, 286, 0, 0, 287, 0, 0, 0, 288, 0, 0, 0, 0, 289, 0, 0, 290, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 291, 0, 0, 0, 0, 292, 0, 0, 0, 0, 0, 0, 0, 0, 0, 293, 0, 0, 0, 0, 0, 0, 0, 0, 294, 0, 0, 0,
    295, 0, 296, 0, 297, 0, 298, 0, 0, 0, 0, 0, 0, 0, 0, 0, 299, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 300, 0, 301, 0, 0, 0, 0, 0, 0, 302, 0, 0, 0, 0, 303, 0, 0, 0, 0, 304, 0, 0, 0, 0, 305, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 306, 0, 0, 307, 0, 0, 0, 0, 0, 0, 0, 0, 0, 308, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 309, 0, 310, 0, 0, 311, 0, 0, 312, 0, 0, 313, 0, 0, 0, 0, 0, 314, 0, 0, 0, 0, 0, 0, 0, 0,
    315, 0, 0, 0, 0, 0, 0, 0, 0, 316, 0, 317, 0, 0, 0, 0, 0, 0, 0, 318, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    319, 0, 320, 0, 0, 0, 0, 0, 0, 0, 321, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 322, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 323, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 324, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 325, 0, 0, 0,
    0, 326, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 327, 0, 0, 0, 328, 0, 0, 0, 0, 0, 0, 329,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 330, 0, 0, 331, 0, 0, 0, 0, 0, 0, 0, 0, 0, 332, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 333, 0, 0, 0, 0, 0, 0, 334, 0, 0, 0, 0,
    0, 335, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 336, 0, 0, 337, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    338, 0, 339, 0, 0, 0, 0, 0, 0, 340, 0, 0, 0, 0, 341, 0, 0, 0, 0, 342, 0, 0, 0, 0, 343, 0, 0, 0, 0, 0, 0, 0,
    0, 344, 0, 0, 345, 0, 0, 0, 0, 346, 0, 0, 0, 0, 0, 0, 347, 0, 0, 0, 0, 0, 0, 348, 0, 0, 0, 0, 0, 349, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 350, 0, 0, 0, 0, 0, 0, 0, 0, 0, 351, 0, 0, 0, 0, 0, 0,
    352, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 353, 0, 0, 0, 0, 0, 0, 0, 0, 354, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    355, 0, 0, 0, 0, 0, 0, 0, 0, 356, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 357, 0, 0, 0, 0, 0, 0, 0, 0, 358,
    0, 0, 0, 0, 0, 0, 0, 359, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 360, 0, 0, 0, 0, 0, 0, 0,
    361, 0, 0, 0, 362, 0, 0, 0, 363, 0, 0, 0, 0, 0, 0, 0, 0, 364, 0, 0, 0, 0, 365, 0, 0, 0, 0, 366, 0, 0, 0, 0,
    367, 0, 0, 368, 0, 0, 0, 0, 0, 369, 0, 0, 0, 0, 0, 370, 0, 0, 0, 0, 0, 371, 0, 0, 0, 0, 0, 372, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 373, 0, 0, 0, 0, 374, 0, 0, 0, 0, 375, 0, 0, 0,
    0, 376, 0, 0, 0, 0, 377, 0, 0, 0, 0, 0, 0, 378, 0, 0, 0, 0, 379, 0, 0, 0, 0, 380, 0, 381, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 382, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 383, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 384, 0, 0, 0, 0, 0, 0, 0, 0, 0, 385, 0, 0, 0, 386, 0, 387, 0, 0, 388, 0, 0, 0, 0, 0, 389, 0, 0, 0, 0, 0,
    390, 0, 0, 0, 391, 0, 0, 0, 392, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 393, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 394, 0, 395, 0, 0, 0, 0, 0, 0, 396, 0, 0, 397, 0, 398, 0, 0, 0, 0, 399, 0,
    0, 0, 0, 0, 400, 0, 401, 0, 402, 0, 0, 0, 0, 0, 0, 0, 0, 403, 0, 0, 0, 0, 404, 0, 0, 0, 0, 0, 405, 0, 0, 406,
    0, 0, 0, 407, 0, 0, 0, 0, 0, 0, 0, 0, 408, 0, 0, 0, 0, 409, 0, 0, 410, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 411, 0, 0, 412, 0, 0, 413, 0, 0, 0, 0, 0, 414, 0, 0, 415, 0, 0, 0, 0, 0, 416, 0, 417, 0, 0, 0, 0, 0,
    0, 0, 0, 418, 0, 0, 0, 0, 419, 0, 0, 0, 0, 0, 420, 0, 0, 0, 0, 0, 0, 421, 0, 0, 0, 0, 0, 0, 0, 0, 422, 0,
    0, 0, 0, 423, 0, 0, 0, 424, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 425, 0, 0, 426, 0, 0, 0, 427, 0, 0,
    0, 0, 0, 428, 0, 0, 0, 0, 0, 0, 429, 0, 0, 0, 0, 0, 0, 0, 0, 430, 0, 0, 0, 431, 0, 0, 432, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 433, 0, 0, 0, 0, 0, 0, 434, 0, 0, 0, 0, 0, 0, 0, 0, 435, 0, 0, 0, 0, 436, 0, 0, 437, 0, 0,
    0, 0, 0, 438, 0, 0, 0, 0, 0, 0, 0, 0, 439, 0, 0, 0, 0, 440, 0, 0, 0, 0, 0, 441, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 442, 0, 0, 443, 0, 0, 0, 444, 0, 0, 0, 0, 0, 445, 0, 0, 0, 0, 0, 0, 446, 0, 0, 0, 0,
    0, 0, 0, 0, 447, 0, 0, 0, 448, 0, 0, 449, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 450, 0, 0, 0, 0, 0, 0, 451, 0, 0,
    0, 0, 0, 0, 0, 0, 452, 0, 0, 0, 0, 453, 0, 0, 0, 454, 0, 0, 0, 0, 0, 455, 0, 0, 0, 0, 0, 0, 0, 0, 456, 0,
    0, 0, 0, 457, 0, 0, 0, 0, 0, 458, 0, 0, 0, 0, 0, 0, 0, 0, 0, 459, 0, 460, 0, 0, 0, 0, 0, 0, 461, 0, 0, 462,
    0, 0, 0, 0, 463, 0, 0, 0, 0, 0, 464, 0, 465, 0, 0, 0, 0, 0, 0, 466, 0, 0, 467, 0, 0, 0, 0, 468, 0, 0, 0, 469,
    0, 0, 0, 0, 0, 0, 0, 0, 470, 0, 0, 0, 0, 471, 0, 0, 0, 472, 0, 0, 0, 0, 0, 0, 0, 0, 473, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 474, 0, 0, 475, 0, 0, 0, 476, 0, 0, 0, 0, 0, 477, 0, 0,
    478, 0, 0, 0, 0, 0, 0, 0, 0, 479, 0, 480, 0, 481, 0, 482, 0, 483, 0, 0, 0, 0, 484, 0, 485, 0, 0, 0, 486, 0, 487, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 488, 0, 0, 0, 489, 0, 0, 490, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 491,
    0, 0, 492, 0, 0, 0, 0, 0, 0, 0, 0, 493, 0, 494, 0, 495, 0, 496, 0, 497, 0, 0, 0, 0, 498, 0, 499, 0, 0, 0, 500, 0,
    501, 0, 0, 0, 502, 0, 0, 0, 503, 0, 0, 0, 0, 0, 504, 0, 0, 0, 0, 0, 0, 0, 0, 0, 505, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 506, 0, 0, 507, 0, 0, 0, 0, 0, 508, 0, 0, 509, 0, 0, 0, 510, 0, 0, 0, 511, 0, 0,
    0, 0, 0, 512, 0, 0, 513, 0, 0, 0, 514, 0, 0, 0, 515, 0, 0, 0, 0, 0, 516, 0, 0, 517, 0, 0, 0, 518, 0, 0, 0, 519,
    0, 0, 0, 0, 0, 520, 0, 0, 521, 0, 0, 0, 522, 0, 0, 0, 523, 0, 0, 0, 0, 0, 524, 0, 0, 525, 0, 0, 0, 0, 0, 0,
    526, 0, 0, 527, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 528, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 529, 0, 0, 530, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 531, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 532, 0, 0, 533, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 534, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 535, 0, 0, 536, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 537, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 538, 0, 0, 0, 0, 539, 0, 540, 0, 541, 0, 542, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 543, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 544, 0, 545, 0, 0, 0, 0, 0,
};

void unit_0091(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_00344000;
    case 2u: goto L_00344008;
    case 3u: goto L_00344034;
    case 4u: goto L_00344040;
    case 5u: goto L_0034407C;
    case 6u: goto L_00344090;
    case 7u: goto L_003440C0;
    case 8u: goto L_00344124;
    case 9u: goto L_00344134;
    case 10u: goto L_00344140;
    case 11u: goto L_0034414C;
    case 12u: goto L_00344164;
    case 13u: goto L_00344180;
    case 14u: goto L_00344190;
    case 15u: goto L_003441A4;
    case 16u: goto L_003441B8;
    case 17u: goto L_003441D0;
    case 18u: goto L_003441E0;
    case 19u: goto L_003441F4;
    case 20u: goto L_0034420C;
    case 21u: goto L_00344234;
    case 22u: goto L_00344248;
    case 23u: goto L_00344260;
    case 24u: goto L_00344274;
    case 25u: goto L_00344288;
    case 26u: goto L_003442A0;
    case 27u: goto L_003442B0;
    case 28u: goto L_003442E0;
    case 29u: goto L_003442F8;
    case 30u: goto L_00344310;
    case 31u: goto L_003443A4;
    case 32u: goto L_003443B0;
    case 33u: goto L_003443E0;
    case 34u: goto L_003443F8;
    case 35u: goto L_00344410;
    case 36u: goto L_00344440;
    case 37u: goto L_00344458;
    case 38u: goto L_00344470;
    case 39u: goto L_00344484;
    case 40u: goto L_00344498;
    case 41u: goto L_003444A0;
    case 42u: goto L_003444D0;
    case 43u: goto L_003444DC;
    case 44u: goto L_003444F0;
    case 45u: goto L_0034452C;
    case 46u: goto L_0034454C;
    case 47u: goto L_0034457C;
    case 48u: goto L_00344594;
    case 49u: goto L_003445B0;
    case 50u: goto L_003445DC;
    case 51u: goto L_003445F0;
    case 52u: goto L_00344608;
    case 53u: goto L_00344630;
    case 54u: goto L_00344638;
    case 55u: goto L_00344650;
    case 56u: goto L_00344660;
    case 57u: goto L_00344680;
    case 58u: goto L_00344694;
    case 59u: goto L_003446A4;
    case 60u: goto L_003446B4;
    case 61u: goto L_003446C4;
    case 62u: goto L_003446D0;
    case 63u: goto L_003446E0;
    case 64u: goto L_003446F0;
    case 65u: goto L_00344708;
    case 66u: goto L_00344714;
    case 67u: goto L_00344730;
    case 68u: goto L_00344794;
    case 69u: goto L_003447BC;
    case 70u: goto L_003447CC;
    case 71u: goto L_003447E4;
    case 72u: goto L_00344800;
    case 73u: goto L_00344814;
    case 74u: goto L_00344828;
    case 75u: goto L_00344860;
    case 76u: goto L_00344890;
    case 77u: goto L_003448C8;
    case 78u: goto L_003448D8;
    case 79u: goto L_003448F0;
    case 80u: goto L_003448F8;
    case 81u: goto L_00344900;
    case 82u: goto L_00344954;
    case 83u: goto L_00344978;
    case 84u: goto L_00344990;
    case 85u: goto L_003449A4;
    case 86u: goto L_003449C0;
    case 87u: goto L_003449D4;
    case 88u: goto L_003449E8;
    case 89u: goto L_00344A00;
    case 90u: goto L_00344A2C;
    case 91u: goto L_00344A4C;
    case 92u: goto L_00344A60;
    case 93u: goto L_00344A98;
    case 94u: goto L_00344AA0;
    case 95u: goto L_00344AC0;
    case 96u: goto L_00344AE0;
    case 97u: goto L_00344AF0;
    case 98u: goto L_00344B10;
    case 99u: goto L_00344B34;
    case 100u: goto L_00344B40;
    case 101u: goto L_00344B54;
    case 102u: goto L_00344B74;
    case 103u: goto L_00344B84;
    case 104u: goto L_00344B9C;
    case 105u: goto L_00344BAC;
    case 106u: goto L_00344BD0;
    case 107u: goto L_00344BEC;
    case 108u: goto L_00344C04;
    case 109u: goto L_00344C20;
    case 110u: goto L_00344C34;
    case 111u: goto L_00344C60;
    case 112u: goto L_00344CB4;
    case 113u: goto L_00344CBC;
    case 114u: goto L_00344CFC;
    case 115u: goto L_00344D28;
    case 116u: goto L_00344D48;
    case 117u: goto L_00344D6C;
    case 118u: goto L_00344D80;
    case 119u: goto L_00344D94;
    case 120u: goto L_00344DE8;
    case 121u: goto L_00344E00;
    case 122u: goto L_00344E38;
    case 123u: goto L_00344EA0;
    case 124u: goto L_00344ED8;
    case 125u: goto L_00344EF8;
    case 126u: goto L_00344F18;
    case 127u: goto L_00344F34;
    case 128u: goto L_00344F98;
    case 129u: goto L_00344FAC;
    case 130u: goto L_00344FF4;
    case 131u: goto L_00345064;
    case 132u: goto L_0034507C;
    case 133u: goto L_003450B4;
    case 134u: goto L_003450E8;
    case 135u: goto L_003450FC;
    case 136u: goto L_00345124;
    case 137u: goto L_00345144;
    case 138u: goto L_00345178;
    case 139u: goto L_003451C4;
    case 140u: goto L_0034522C;
    case 141u: goto L_0034523C;
    case 142u: goto L_00345260;
    case 143u: goto L_00345270;
    case 144u: goto L_00345280;
    case 145u: goto L_00345290;
    case 146u: goto L_003452A0;
    case 147u: goto L_003452B0;
    case 148u: goto L_003452C0;
    case 149u: goto L_003452D0;
    case 150u: goto L_003452E0;
    case 151u: goto L_00345328;
    case 152u: goto L_00345330;
    case 153u: goto L_0034538C;
    case 154u: goto L_0034539C;
    case 155u: goto L_003453AC;
    case 156u: goto L_003453E0;
    case 157u: goto L_00345428;
    case 158u: goto L_00345434;
    case 159u: goto L_00345440;
    case 160u: goto L_0034544C;
    case 161u: goto L_00345464;
    case 162u: goto L_00345480;
    case 163u: goto L_0034549C;
    case 164u: goto L_003454B0;
    case 165u: goto L_003454CC;
    case 166u: goto L_003454DC;
    case 167u: goto L_003454F0;
    case 168u: goto L_00345570;
    case 169u: goto L_003455C8;
    case 170u: goto L_003455E0;
    case 171u: goto L_00345604;
    case 172u: goto L_00345618;
    case 173u: goto L_00345630;
    case 174u: goto L_0034563C;
    case 175u: goto L_00345650;
    case 176u: goto L_00345658;
    case 177u: goto L_00345670;
    case 178u: goto L_003456BC;
    case 179u: goto L_003456E0;
    case 180u: goto L_00345700;
    case 181u: goto L_00345728;
    case 182u: goto L_00345730;
    case 183u: goto L_0034576C;
    case 184u: goto L_00345790;
    case 185u: goto L_003457A4;
    case 186u: goto L_003457AC;
    case 187u: goto L_003457F0;
    case 188u: goto L_0034580C;
    case 189u: goto L_00345824;
    case 190u: goto L_00345858;
    case 191u: goto L_00345868;
    case 192u: goto L_00345878;
    case 193u: goto L_00345898;
    case 194u: goto L_003458A8;
    case 195u: goto L_003458BC;
    case 196u: goto L_003458D8;
    case 197u: goto L_003458EC;
    case 198u: goto L_00345960;
    case 199u: goto L_00345990;
    case 200u: goto L_003459A4;
    case 201u: goto L_003459BC;
    case 202u: goto L_003459C8;
    case 203u: goto L_003459D4;
    case 204u: goto L_003459E8;
    case 205u: goto L_003459F4;
    case 206u: goto L_003459FC;
    case 207u: goto L_00345A18;
    case 208u: goto L_00345A24;
    case 209u: goto L_00345A2C;
    case 210u: goto L_00345A4C;
    case 211u: goto L_00345A58;
    case 212u: goto L_00345A60;
    case 213u: goto L_00345A7C;
    case 214u: goto L_00345A88;
    case 215u: goto L_00345A90;
    case 216u: goto L_00345AAC;
    case 217u: goto L_00345AB8;
    case 218u: goto L_00345AC0;
    case 219u: goto L_00345AD4;
    case 220u: goto L_00345AE0;
    case 221u: goto L_00345AE8;
    case 222u: goto L_00345AFC;
    case 223u: goto L_00345B08;
    case 224u: goto L_00345B20;
    case 225u: goto L_00345B44;
    case 226u: goto L_00345B5C;
    case 227u: goto L_00345B68;
    case 228u: goto L_00345B7C;
    case 229u: goto L_00345B9C;
    case 230u: goto L_00345BB8;
    case 231u: goto L_00345BC8;
    case 232u: goto L_00345BD4;
    case 233u: goto L_00345BE4;
    case 234u: goto L_00345BF8;
    case 235u: goto L_00345C04;
    case 236u: goto L_00345C10;
    case 237u: goto L_00345C24;
    case 238u: goto L_00345C30;
    case 239u: goto L_00345C4C;
    case 240u: goto L_00345C58;
    case 241u: goto L_00345C68;
    case 242u: goto L_00345C80;
    case 243u: goto L_00345C9C;
    case 244u: goto L_00345CB4;
    case 245u: goto L_00345CD0;
    case 246u: goto L_00345CE8;
    case 247u: goto L_00345D04;
    case 248u: goto L_00345D24;
    case 249u: goto L_00345D2C;
    case 250u: goto L_00345D50;
    case 251u: goto L_00345E50;
    case 252u: goto L_00345E80;
    case 253u: goto L_00345EA0;
    case 254u: goto L_00345ED0;
    case 255u: goto L_00345F1C;
    case 256u: goto L_00345F2C;
    case 257u: goto L_00345F44;
    case 258u: goto L_00345F60;
    case 259u: goto L_00345F84;
    case 260u: goto L_00345FA4;
    case 261u: goto L_00345FCC;
    case 262u: goto L_00345FE0;
    case 263u: goto L_00345FF0;
    case 264u: goto L_00346000;
    case 265u: goto L_00346010;
    case 266u: goto L_00346024;
    case 267u: goto L_00346050;
    case 268u: goto L_00346090;
    case 269u: goto L_003460AC;
    case 270u: goto L_003460C0;
    case 271u: goto L_003460D4;
    case 272u: goto L_003460E4;
    case 273u: goto L_003460F4;
    case 274u: goto L_00346110;
    case 275u: goto L_00346120;
    case 276u: goto L_0034613C;
    case 277u: goto L_00346150;
    case 278u: goto L_00346178;
    case 279u: goto L_003461A0;
    case 280u: goto L_003461B0;
    case 281u: goto L_003461D0;
    case 282u: goto L_003461E0;
    case 283u: goto L_003461F4;
    case 284u: goto L_00346200;
    case 285u: goto L_00346210;
    case 286u: goto L_00346224;
    case 287u: goto L_00346230;
    case 288u: goto L_00346240;
    case 289u: goto L_00346254;
    case 290u: goto L_00346260;
    case 291u: goto L_00346290;
    case 292u: goto L_003462A4;
    case 293u: goto L_003462CC;
    case 294u: goto L_003462F0;
    case 295u: goto L_00346300;
    case 296u: goto L_00346308;
    case 297u: goto L_00346310;
    case 298u: goto L_00346318;
    case 299u: goto L_00346340;
    case 300u: goto L_00346394;
    case 301u: goto L_0034639C;
    case 302u: goto L_003463B8;
    case 303u: goto L_003463CC;
    case 304u: goto L_003463E0;
    case 305u: goto L_003463F4;
    case 306u: goto L_0034642C;
    case 307u: goto L_00346438;
    case 308u: goto L_00346460;
    case 309u: goto L_00346498;
    case 310u: goto L_003464A0;
    case 311u: goto L_003464AC;
    case 312u: goto L_003464B8;
    case 313u: goto L_003464C4;
    case 314u: goto L_003464DC;
    case 315u: goto L_00346500;
    case 316u: goto L_00346524;
    case 317u: goto L_0034652C;
    case 318u: goto L_0034654C;
    case 319u: goto L_00346580;
    case 320u: goto L_00346588;
    case 321u: goto L_003465A8;
    case 322u: goto L_003465F8;
    case 323u: goto L_00346660;
    case 324u: goto L_003466A0;
    case 325u: goto L_003466F0;
    case 326u: goto L_00346704;
    case 327u: goto L_00346750;
    case 328u: goto L_00346760;
    case 329u: goto L_0034677C;
    case 330u: goto L_003467B8;
    case 331u: goto L_003467C4;
    case 332u: goto L_003467EC;
    case 333u: goto L_00346850;
    case 334u: goto L_0034686C;
    case 335u: goto L_00346884;
    case 336u: goto L_003468CC;
    case 337u: goto L_003468D8;
    case 338u: goto L_00346900;
    case 339u: goto L_00346908;
    case 340u: goto L_00346924;
    case 341u: goto L_00346938;
    case 342u: goto L_0034694C;
    case 343u: goto L_00346960;
    case 344u: goto L_00346984;
    case 345u: goto L_00346990;
    case 346u: goto L_003469A4;
    case 347u: goto L_003469C0;
    case 348u: goto L_003469DC;
    case 349u: goto L_003469F4;
    case 350u: goto L_00346A3C;
    case 351u: goto L_00346A64;
    case 352u: goto L_00346A80;
    case 353u: goto L_00346B28;
    case 354u: goto L_00346B4C;
    case 355u: goto L_00346B80;
    case 356u: goto L_00346BA4;
    case 357u: goto L_00346BD8;
    case 358u: goto L_00346BFC;
    case 359u: goto L_00346C1C;
    case 360u: goto L_00346CE0;
    case 361u: goto L_00346D00;
    case 362u: goto L_00346D10;
    case 363u: goto L_00346D20;
    case 364u: goto L_00346D44;
    case 365u: goto L_00346D58;
    case 366u: goto L_00346D6C;
    case 367u: goto L_00346D80;
    case 368u: goto L_00346D8C;
    case 369u: goto L_00346DA4;
    case 370u: goto L_00346DBC;
    case 371u: goto L_00346DD4;
    case 372u: goto L_00346DEC;
    case 373u: goto L_00346E48;
    case 374u: goto L_00346E5C;
    case 375u: goto L_00346E70;
    case 376u: goto L_00346E84;
    case 377u: goto L_00346E98;
    case 378u: goto L_00346EB4;
    case 379u: goto L_00346EC8;
    case 380u: goto L_00346EDC;
    case 381u: goto L_00346EE4;
    case 382u: goto L_00346F10;
    case 383u: goto L_00346F5C;
    case 384u: goto L_00346F84;
    case 385u: goto L_00346FAC;
    case 386u: goto L_00346FBC;
    case 387u: goto L_00346FC4;
    case 388u: goto L_00346FD0;
    case 389u: goto L_00346FE8;
    case 390u: goto L_00347000;
    case 391u: goto L_00347010;
    case 392u: goto L_00347020;
    case 393u: goto L_0034704C;
    case 394u: goto L_003470AC;
    case 395u: goto L_003470B4;
    case 396u: goto L_003470D0;
    case 397u: goto L_003470DC;
    case 398u: goto L_003470E4;
    case 399u: goto L_003470F8;
    case 400u: goto L_00347110;
    case 401u: goto L_00347118;
    case 402u: goto L_00347120;
    case 403u: goto L_00347144;
    case 404u: goto L_00347158;
    case 405u: goto L_00347170;
    case 406u: goto L_0034717C;
    case 407u: goto L_0034718C;
    case 408u: goto L_003471B0;
    case 409u: goto L_003471C4;
    case 410u: goto L_003471D0;
    case 411u: goto L_0034720C;
    case 412u: goto L_00347218;
    case 413u: goto L_00347224;
    case 414u: goto L_0034723C;
    case 415u: goto L_00347248;
    case 416u: goto L_00347260;
    case 417u: goto L_00347268;
    case 418u: goto L_0034728C;
    case 419u: goto L_003472A0;
    case 420u: goto L_003472B8;
    case 421u: goto L_003472D4;
    case 422u: goto L_003472F8;
    case 423u: goto L_0034730C;
    case 424u: goto L_0034731C;
    case 425u: goto L_00347358;
    case 426u: goto L_00347364;
    case 427u: goto L_00347374;
    case 428u: goto L_0034738C;
    case 429u: goto L_003473A8;
    case 430u: goto L_003473CC;
    case 431u: goto L_003473DC;
    case 432u: goto L_003473E8;
    case 433u: goto L_00347414;
    case 434u: goto L_00347430;
    case 435u: goto L_00347454;
    case 436u: goto L_00347468;
    case 437u: goto L_00347474;
    case 438u: goto L_0034748C;
    case 439u: goto L_003474B0;
    case 440u: goto L_003474C4;
    case 441u: goto L_003474DC;
    case 442u: goto L_0034751C;
    case 443u: goto L_00347528;
    case 444u: goto L_00347538;
    case 445u: goto L_00347550;
    case 446u: goto L_0034756C;
    case 447u: goto L_00347590;
    case 448u: goto L_003475A0;
    case 449u: goto L_003475AC;
    case 450u: goto L_003475D8;
    case 451u: goto L_003475F4;
    case 452u: goto L_00347618;
    case 453u: goto L_0034762C;
    case 454u: goto L_0034763C;
    case 455u: goto L_00347654;
    case 456u: goto L_00347678;
    case 457u: goto L_0034768C;
    case 458u: goto L_003476A4;
    case 459u: goto L_003476CC;
    case 460u: goto L_003476D4;
    case 461u: goto L_003476F0;
    case 462u: goto L_003476FC;
    case 463u: goto L_00347710;
    case 464u: goto L_00347728;
    case 465u: goto L_00347730;
    case 466u: goto L_0034774C;
    case 467u: goto L_00347758;
    case 468u: goto L_0034776C;
    case 469u: goto L_0034777C;
    case 470u: goto L_003477A0;
    case 471u: goto L_003477B4;
    case 472u: goto L_003477C4;
    case 473u: goto L_003477E8;
    case 474u: goto L_00347840;
    case 475u: goto L_0034784C;
    case 476u: goto L_0034785C;
    case 477u: goto L_00347874;
    case 478u: goto L_00347880;
    case 479u: goto L_003478A4;
    case 480u: goto L_003478AC;
    case 481u: goto L_003478B4;
    case 482u: goto L_003478BC;
    case 483u: goto L_003478C4;
    case 484u: goto L_003478D8;
    case 485u: goto L_003478E0;
    case 486u: goto L_003478F0;
    case 487u: goto L_003478F8;
    case 488u: goto L_00347930;
    case 489u: goto L_00347940;
    case 490u: goto L_0034794C;
    case 491u: goto L_0034797C;
    case 492u: goto L_00347988;
    case 493u: goto L_003479AC;
    case 494u: goto L_003479B4;
    case 495u: goto L_003479BC;
    case 496u: goto L_003479C4;
    case 497u: goto L_003479CC;
    case 498u: goto L_003479E0;
    case 499u: goto L_003479E8;
    case 500u: goto L_003479F8;
    case 501u: goto L_00347A00;
    case 502u: goto L_00347A10;
    case 503u: goto L_00347A20;
    case 504u: goto L_00347A38;
    case 505u: goto L_00347A60;
    case 506u: goto L_00347AA4;
    case 507u: goto L_00347AB0;
    case 508u: goto L_00347AC8;
    case 509u: goto L_00347AD4;
    case 510u: goto L_00347AE4;
    case 511u: goto L_00347AF4;
    case 512u: goto L_00347B0C;
    case 513u: goto L_00347B18;
    case 514u: goto L_00347B28;
    case 515u: goto L_00347B38;
    case 516u: goto L_00347B50;
    case 517u: goto L_00347B5C;
    case 518u: goto L_00347B6C;
    case 519u: goto L_00347B7C;
    case 520u: goto L_00347B94;
    case 521u: goto L_00347BA0;
    case 522u: goto L_00347BB0;
    case 523u: goto L_00347BC0;
    case 524u: goto L_00347BD8;
    case 525u: goto L_00347BE4;
    case 526u: goto L_00347C00;
    case 527u: goto L_00347C0C;
    case 528u: goto L_00347C50;
    case 529u: goto L_00347C90;
    case 530u: goto L_00347C9C;
    case 531u: goto L_00347CE0;
    case 532u: goto L_00347D20;
    case 533u: goto L_00347D2C;
    case 534u: goto L_00347D70;
    case 535u: goto L_00347DB0;
    case 536u: goto L_00347DBC;
    case 537u: goto L_00347E78;
    case 538u: goto L_00347F30;
    case 539u: goto L_00347F44;
    case 540u: goto L_00347F4C;
    case 541u: goto L_00347F54;
    case 542u: goto L_00347F5C;
    case 543u: goto L_00347FB0;
    case 544u: goto L_00347FE0;
    case 545u: goto L_00347FE8;
    default: bad_entry(c, 0x00344000u); return;
    }
L_00344000:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00344008u); set32(c.r[5], 0u + 8u);  if (depth < kMaxDepth) unit_000F(c, 264u, depth + 1u); else { c.pc = 0x0013E560u; return; } if (c.pc != 0x00344008u) [[unlikely]] return; }
L_00344008:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] + 27632u);
    set32(c.r[3], c.r[3].w[0] + 27720u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[4], 0u + 9u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    st32((c.r[17].w[0] + 20u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + 27780u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00344034u); st32((c.r[17].w[0] + 40u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x00344034u) [[unlikely]] return; }
L_00344034:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00344040u); set32(c.r[4], 0u + 8u);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x00344040u) [[unlikely]] return; }
L_00344040:
    ld128((c.r[2].w[0]) & ~15u, c.r[3]);
    set32(c.r[4], c.r[17].w[0] + 128u);
    set32(c.r[5], 0u + 2u);
    c.r[6].d[0] = 0ull + 0ull;
    st128((c.r[17].w[0] + 64u) & ~15u, c.r[3]);
    set32(c.r[2], 0u + 30u);
    ld128((c.r[18].w[0]) & ~15u, c.r[3]);
    st128((c.r[17].w[0] + 80u) & ~15u, c.r[3]);
    st32((c.r[17].w[0] + 116u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 112u), 0u);
    st32((c.r[17].w[0] + 124u), 0u);
    st8((c.r[17].w[0] + 120u), static_cast<std::uint8_t>(0u));
    ld128((c.r[17].w[0] + 64u) & ~15u, c.r[2]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034407Cu); st128((c.r[17].w[0] + 96u) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_0049(c, 283u, depth + 1u); else { c.pc = 0x002277A0u; return; } if (c.pc != 0x0034407Cu) [[unlikely]] return; }
L_0034407C:
    st32((c.r[17].w[0] + 172u), c.r[16].w[0]);
    set32(c.r[4], c.r[17].w[0] + 180u);
    set32(c.r[5], ld32((c.r[17].w[0] + 172u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00344090u); set32(c.r[6], 0u + 404u);  if (depth < kMaxDepth) unit_0010(c, 107u, depth + 1u); else { c.pc = 0x001415A0u; return; } if (c.pc != 0x00344090u) [[unlikely]] return; }
L_00344090:
    set32(c.r[3], 0u + 1u);
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    st8((c.r[17].w[0] + 176u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[17].w[0] + 584u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003440C0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00344164; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] + 27632u);
    set32(c.r[3], c.r[3].w[0] + 27720u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    st32((c.r[17].w[0] + 20u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + 27780u);
    st32((c.r[17].w[0] + 40u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 584u)));
    c.budget -= 12;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00344124; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00344124; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00344124u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00344124u) [[unlikely]] return; }
L_00344124:
    set32(c.r[4], c.r[17].w[0] + 128u);
    set32(c.r[5], 0u - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00344134u); st32((c.r[17].w[0] + 584u), 0u);  if (depth < kMaxDepth) unit_0049(c, 294u, depth + 1u); else { c.pc = 0x00227920u; return; } if (c.pc != 0x00344134u) [[unlikely]] return; }
L_00344134:
    set32(c.r[4], c.r[17].w[0] + 40u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00344140u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000F(c, 266u, depth + 1u); else { c.pc = 0x0013E5B0u; return; } if (c.pc != 0x00344140u) [[unlikely]] return; }
L_00344140:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034414Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000C(c, 15u, depth + 1u); else { c.pc = 0x00130130u; return; } if (c.pc != 0x0034414Cu) [[unlikely]] return; }
L_0034414C:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00344168; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00344164u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x00344164u) [[unlikely]] return; }
L_00344164:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00344168:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00344180:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x0012E5D0u | kUnwind; return; } [[clang::musttail]] return unit_000B(c, 317u, depth); }
L_00344190:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003441A4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_000C(c, 25u, depth + 1u); else { c.pc = 0x00130270u; return; } if (c.pc != 0x003441A4u) [[unlikely]] return; }
L_003441A4:
    set32(c.r[25], ld32((c.r[16].w[0])));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 164u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003441B8u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003441B8u) [[unlikely]] return; }
L_003441B8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003441D0:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x00130260u | kUnwind; return; } [[clang::musttail]] return unit_000C(c, 24u, depth); }
L_003441E0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003441F4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_000C(c, 26u, depth + 1u); else { c.pc = 0x00130280u; return; } if (c.pc != 0x003441F4u) [[unlikely]] return; }
L_003441F4:
    set32(c.r[2], ld32((c.r[16].w[0] + 24u)));
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[5], ld32((c.r[2].w[0] + 24u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 140u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0034420Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0034420Cu) [[unlikely]] return; }
L_0034420C:
    set32(c.r[2], ld32((c.r[16].w[0] + 24u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 24u)));
    st16((c.r[16].w[0] + 568u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[16].w[0] + 176u));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00344234; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 172u)));
    set32(c.r[5], c.r[16].w[0] + 180u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00344234u); set32(c.r[6], 0u + 404u);  if (depth < kMaxDepth) unit_0010(c, 107u, depth + 1u); else { c.pc = 0x001415A0u; return; } if (c.pc != 0x00344234u) [[unlikely]] return; }
L_00344234:
    set32(c.r[25], ld32((c.r[16].w[0])));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 164u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00344248u); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00344248u) [[unlikely]] return; }
L_00344248:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00344260:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00344274u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_000C(c, 27u, depth + 1u); else { c.pc = 0x00130290u; return; } if (c.pc != 0x00344274u) [[unlikely]] return; }
L_00344274:
    set32(c.r[25], ld32((c.r[16].w[0])));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 164u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00344288u); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00344288u) [[unlikely]] return; }
L_00344288:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003442A0:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x001302A0u | kUnwind; return; } [[clang::musttail]] return unit_000C(c, 28u, depth); }
L_003442B0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 584u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003442E8; } }
    c.r[3].d[0] = ld8((c.r[3].w[0] + 137u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003442F8; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003442E0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003442E0u) [[unlikely]] return; }
L_003442E0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_003442FC; } }
L_003442E8:
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003442F8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003442F8u) [[unlikely]] return; }
L_003442F8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_003442FC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00344310:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003443A4; } }
    set32(c.r[5], ld32((c.r[3].w[0] + 36u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_003443A4; } }
    c.r[2].d[0] = ld8((c.r[4].w[0] + 120u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0034436C; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 124u)));
    set32(c.r[3], c.r[2].w[0] - 1u);
    st32((c.r[4].w[0] + 124u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 112u)));
    set32(c.r[2], 0u - c.r[2].w[0]);
    c.r[1].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0034439C; } }
    st32((c.r[4].w[0] + 124u), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 120u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0034439C; } }
L_0034436C:
    set32(c.r[2], ld32((c.r[4].w[0] + 124u)));
    set32(c.r[5], c.r[2].w[0] + 1u);
    st32((c.r[4].w[0] + 124u), c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 116u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 112u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.r[1].d[0] = c.r[2].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0034439C; } }
    st32((c.r[4].w[0] + 124u), c.r[2].w[0]);
    set32(c.r[2], 0u + 1u);
    st8((c.r[4].w[0] + 120u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
L_0034439C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003443A4u); set32(c.r[4], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_002A(c, 280u, depth + 1u); else { c.pc = 0x001AB050u; return; } if (c.pc != 0x003443A4u) [[unlikely]] return; }
L_003443A4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003443B0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 584u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003443E8; } }
    c.r[3].d[0] = ld8((c.r[3].w[0] + 137u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003443F8; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003443E0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003443E0u) [[unlikely]] return; }
L_003443E0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_003443FC; } }
L_003443E8:
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003443F8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003443F8u) [[unlikely]] return; }
L_003443F8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_003443FC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00344410:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 584u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00344448; } }
    c.r[3].d[0] = ld8((c.r[3].w[0] + 137u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00344458; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00344440u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00344440u) [[unlikely]] return; }
L_00344440:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_0034445C; } }
L_00344448:
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00344458u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00344458u) [[unlikely]] return; }
L_00344458:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_0034445C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00344470:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00344484u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 59u, depth + 1u); else { c.pc = 0x00140BF0u; return; } if (c.pc != 0x00344484u) [[unlikely]] return; }
L_00344484:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 3840u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00344498u); st32((c.r[29].w[0] + 44u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x00344498u) [[unlikely]] return; }
L_00344498:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003444A0u); set32(c.r[4], 0u + 44u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x003444A0u) [[unlikely]] return; }
L_003444A0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[7].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003444D0; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_003444B4; } }
    set32(c.r[7], c.r[7].w[0] + 20u);
    c.budget -= 1;
L_003444B4:
    set32(c.r[8], ld32((c.r[16].w[0] + 28u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[9], ld32((c.r[16].w[0] + 32u)));
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003444D0u); set32(c.r[10], 0u + 1u);  if (depth < kMaxDepth) unit_000B(c, 371u, depth + 1u); else { c.pc = 0x0012EBA0u; return; } if (c.pc != 0x003444D0u) [[unlikely]] return; }
L_003444D0:
    set32(c.r[4], ld32((c.r[29].w[0] + 44u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003444DCu); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x003444DCu) [[unlikely]] return; }
L_003444DC:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003444F0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const bool t = c.r[5].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00344554; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[6], c.r[29].w[0] + 64u);
    set32(c.r[2], c.r[2].w[0] - 624u);
    set32(c.r[4], c.r[16].w[0] + 128u);
    ld128((c.r[2].w[0]) & ~15u, c.r[3]);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[2].d[0] = ld64((c.r[2].w[0] + 16u));
    st128((c.r[6].w[0]) & ~15u, c.r[3]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034452Cu); st64((c.r[6].w[0] + 16u), c.r[2].d[0]);  if (depth < kMaxDepth) unit_0049(c, 298u, depth + 1u); else { c.pc = 0x002279C0u; return; } if (c.pc != 0x0034452Cu) [[unlikely]] return; }
L_0034452C:
    set32(c.r[2], 0u + 5u);
    set32(c.r[4], c.r[16].w[0] + 128u);
    st32((c.r[29].w[0] + 76u), c.r[2].w[0]);
    set32(c.r[5], 0u + 1u);
    set32(c.r[2], 0u + 20u);
    set32(c.r[6], c.r[29].w[0] + 64u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034454Cu); st32((c.r[29].w[0] + 80u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0049(c, 298u, depth + 1u); else { c.pc = 0x002279C0u; return; } if (c.pc != 0x0034454Cu) [[unlikely]] return; }
L_0034454C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_00344598; } }
L_00344554:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[6], c.r[29].w[0] + 32u);
    set32(c.r[2], c.r[2].w[0] - 592u);
    set32(c.r[4], c.r[16].w[0] + 128u);
    ld128((c.r[2].w[0]) & ~15u, c.r[3]);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[2].d[0] = ld64((c.r[2].w[0] + 16u));
    st128((c.r[6].w[0]) & ~15u, c.r[3]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034457Cu); st64((c.r[6].w[0] + 16u), c.r[2].d[0]);  if (depth < kMaxDepth) unit_0049(c, 298u, depth + 1u); else { c.pc = 0x002279C0u; return; } if (c.pc != 0x0034457Cu) [[unlikely]] return; }
L_0034457C:
    set32(c.r[2], 0u + 10u);
    set32(c.r[4], c.r[16].w[0] + 128u);
    st32((c.r[29].w[0] + 44u), c.r[2].w[0]);
    set32(c.r[5], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00344594u); set32(c.r[6], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_0049(c, 298u, depth + 1u); else { c.pc = 0x002279C0u; return; } if (c.pc != 0x00344594u) [[unlikely]] return; }
L_00344594:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_00344598:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_003445B0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003445DC; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 172u)));
    set32(c.r[25], ld32((c.r[3].w[0])));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 388u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003445DCu); c.r[4].d[0] = c.r[3].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003445DCu) [[unlikely]] return; }
L_003445DC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003445F0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00344608u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0090(c, 562u, depth + 1u); else { c.pc = 0x00343FD0u; return; } if (c.pc != 0x00344608u) [[unlikely]] return; }
L_00344608:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] + 27456u);
    set32(c.r[3], c.r[3].w[0] + 27544u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    st32((c.r[16].w[0] + 20u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + 27604u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00344630u); st32((c.r[16].w[0] + 40u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_003F(c, 299u, depth + 1u); else { c.pc = 0x001FF0D0u; return; } if (c.pc != 0x00344630u) [[unlikely]] return; }
L_00344630:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00344638u); set32(c.r[4], 0u + 160u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00344638u) [[unlikely]] return; }
L_00344638:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00344650; } }
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 8u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00344650u); set32(c.r[7], 0u + 2u);  if (depth < kMaxDepth) unit_00A4(c, 392u, depth + 1u); else { c.pc = 0x003931B0u; return; } if (c.pc != 0x00344650u) [[unlikely]] return; }
L_00344650:
    st32((c.r[16].w[0] + 592u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 592u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00344660u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_00A4(c, 415u, depth + 1u); else { c.pc = 0x003934C0u; return; } if (c.pc != 0x00344660u) [[unlikely]] return; }
L_00344660:
    set32(c.r[2], 0u - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st16((c.r[16].w[0] + 596u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[4], 0u + 160u);
    st32((c.r[16].w[0] + 600u), 0u);
    set32(c.r[2], ld32((c.r[1].w[0] + 26392u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00344680u); set32(c.r[17], c.r[2].w[0] + 624u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00344680u) [[unlikely]] return; }
L_00344680:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00344694; } }
    set32(c.r[5], 0u + 5u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00344694u); set32(c.r[6], 0u + 7u);  if (depth < kMaxDepth) unit_0025(c, 304u, depth + 1u); else { c.pc = 0x00196C90u; return; } if (c.pc != 0x00344694u) [[unlikely]] return; }
L_00344694:
    st32((c.r[16].w[0] + 584u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003446A4u); set32(c.r[5], 0u + 10000u);  if (depth < kMaxDepth) unit_002A(c, 5u, depth + 1u); else { c.pc = 0x001A80A0u; return; } if (c.pc != 0x003446A4u) [[unlikely]] return; }
L_003446A4:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003446B4u); c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_002A(c, 3u, depth + 1u); else { c.pc = 0x001A8060u; return; } if (c.pc != 0x003446B4u) [[unlikely]] return; }
L_003446B4:
    set32(c.r[4], ld32((c.r[16].w[0] + 584u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003446C4u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 322u, depth + 1u); else { c.pc = 0x00196E30u; return; } if (c.pc != 0x003446C4u) [[unlikely]] return; }
L_003446C4:
    set32(c.r[4], 0u + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003446D0u); st8((c.r[16].w[0] + 578u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0076(c, 191u, depth + 1u); else { c.pc = 0x002D9970u; return; } if (c.pc != 0x003446D0u) [[unlikely]] return; }
L_003446D0:
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003446E0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003446E0u) [[unlikely]] return; }
L_003446E0:
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003446F0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003446F0u) [[unlikely]] return; }
L_003446F0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 28320u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00344718; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00344708u); set32(c.r[5], 0u + 1700u);  if (depth < kMaxDepth) unit_0030(c, 17u, depth + 1u); else { c.pc = 0x001C02A0u; return; } if (c.pc != 0x00344708u) [[unlikely]] return; }
L_00344708:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00344714u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0090(c, 560u, depth + 1u); else { c.pc = 0x00343F70u; return; } if (c.pc != 0x00344714u) [[unlikely]] return; }
L_00344714:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_00344718:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00344730:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003447E4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] + 27456u);
    set32(c.r[3], c.r[3].w[0] + 27544u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    st32((c.r[17].w[0] + 20u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + 27604u);
    st32((c.r[17].w[0] + 40u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 592u)));
    c.budget -= 12;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00344794; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00344794; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00344794u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00344794u) [[unlikely]] return; }
L_00344794:
    st32((c.r[17].w[0] + 592u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 584u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003447BC; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003447BC; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003447BCu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003447BCu) [[unlikely]] return; }
L_003447BC:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003447CCu); st32((c.r[17].w[0] + 584u), 0u);  if (depth < kMaxDepth) unit_0091(c, 7u, depth + 1u); else { c.pc = 0x003440C0u; return; } if (c.pc != 0x003447CCu) [[unlikely]] return; }
L_003447CC:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003447E8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003447E4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x003447E4u) [[unlikely]] return; }
L_003447E4:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003447E8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00344800:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00344814u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0091(c, 14u, depth + 1u); else { c.pc = 0x00344190u; return; } if (c.pc != 0x00344814u) [[unlikely]] return; }
L_00344814:
    set32(c.r[4], ld32((c.r[16].w[0] + 584u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00344828u); set32(c.r[5], 0u + 137u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00344828u) [[unlikely]] return; }
L_00344828:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    set32(c.r[3], ld32((c.r[16].w[0] + 584u)));
    c.r[4].d[0] = c.r[4].d[0] | 65535ull;
    c.f[0] = c.r[4].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[3].w[0] + 104u), c.f[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00344860:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 32u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 24u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 10;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00344980; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00344890u); set32(c.r[4], ld32((c.r[16].w[0] + 592u)));  if (depth < kMaxDepth) unit_00A4(c, 492u, depth + 1u); else { c.pc = 0x00393E20u; return; } if (c.pc != 0x00344890u) [[unlikely]] return; }
L_00344890:
    set32(c.r[3], ld32((c.r[16].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 24u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[3].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(86ll) ? 1ull : 0ull;  if (t) { goto L_003448B4; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003448B4; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 580u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_003448B8; } }
L_003448B4:
    st8((c.r[16].w[0] + 580u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_003448B8:
    st32((c.r[16].w[0] + 196u), c.r[2].w[0]);
    c.r[5].d[0] = ld8((c.r[16].w[0] + 580u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003448C8u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 104u, depth + 1u); else { c.pc = 0x0012CEC0u; return; } if (c.pc != 0x003448C8u) [[unlikely]] return; }
L_003448C8:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[16].w[0] + 200u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003448D8u); set32(c.r[6], 0u + 368u);  if (depth < kMaxDepth) unit_0010(c, 107u, depth + 1u); else { c.pc = 0x001415A0u; return; } if (c.pc != 0x003448D8u) [[unlikely]] return; }
L_003448D8:
    set32(c.r[3], 0u + 4575u);
    set32(c.r[2], 0u + 4572u);
    st16((c.r[16].w[0] + 384u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st16((c.r[16].w[0] + 386u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003448F0u); st16((c.r[16].w[0] + 570u), static_cast<std::uint16_t>(0u));  if (depth < kMaxDepth) unit_003F(c, 299u, depth + 1u); else { c.pc = 0x001FF0D0u; return; } if (c.pc != 0x003448F0u) [[unlikely]] return; }
L_003448F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003448F8u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0090(c, 212u, depth + 1u); else { c.pc = 0x00341A80u; return; } if (c.pc != 0x003448F8u) [[unlikely]] return; }
L_003448F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00344900u); c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 79u, depth + 1u); else { c.pc = 0x0012CB20u; return; } if (c.pc != 0x00344900u) [[unlikely]] return; }
L_00344900:
    st16((c.r[2].w[0] + 266u), static_cast<std::uint16_t>(c.r[17].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], 0u + 12288u);
    set32(c.r[4], 0u + 20u);
    st32((c.r[1].w[0] + 27968u), c.r[2].w[0]);
    set32(c.r[2], 0u + 14464u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st32((c.r[1].w[0] + 27984u), c.r[2].w[0]);
    set32(c.r[2], 0u + 14336u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st32((c.r[1].w[0] + 27976u), c.r[2].w[0]);
    set32(c.r[2], 0u + 32767u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st32((c.r[1].w[0] + 26844u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], 0u + 2u);
    st32((c.r[1].w[0] + 26840u), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st32((c.r[1].w[0] + 26848u), 0u);
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00344954u); st16((c.r[16].w[0] + 596u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00344954u) [[unlikely]] return; }
L_00344954:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00344978; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[5], ld32((c.r[1].w[0] + 28320u)));
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00344970; } }
    set32(c.r[5], c.r[5].w[0] + 424u);
    c.budget -= 1;
L_00344970:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00344978u);  if (depth < kMaxDepth) unit_0050(c, 220u, depth + 1u); else { c.pc = 0x00243140u; return; } if (c.pc != 0x00344978u) [[unlikely]] return; }
L_00344978:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st32((c.r[1].w[0] + 28320u), 0u);
    c.budget -= 2;
L_00344980:
    set32(c.r[2], 0u + 1u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00344990u); st8((c.r[16].w[0] + 176u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0091(c, 18u, depth + 1u); else { c.pc = 0x003441E0u; return; } if (c.pc != 0x00344990u) [[unlikely]] return; }
L_00344990:
    set32(c.r[4], ld32((c.r[16].w[0] + 584u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003449A4u); set32(c.r[5], 0u + 138u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003449A4u) [[unlikely]] return; }
L_003449A4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003449C0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003449D4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0091(c, 23u, depth + 1u); else { c.pc = 0x00344260u; return; } if (c.pc != 0x003449D4u) [[unlikely]] return; }
L_003449D4:
    set32(c.r[4], ld32((c.r[16].w[0] + 584u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003449E8u); set32(c.r[5], 0u + 138u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003449E8u) [[unlikely]] return; }
L_003449E8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00344A00:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    c.budget -= 5;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_00344A4C; } }
    set32(c.r[5], ld32((c.r[3].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_00344A34; } }
    set32(c.r[4], ld32((c.r[4].w[0] + 592u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00344A2Cu); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_00A4(c, 415u, depth + 1u); else { c.pc = 0x003934C0u; return; } if (c.pc != 0x00344A2Cu) [[unlikely]] return; }
L_00344A2C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_00344A50; } }
L_00344A34:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_00344A4C; } }
    set32(c.r[4], ld32((c.r[4].w[0] + 592u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00344A4Cu); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_00A4(c, 415u, depth + 1u); else { c.pc = 0x003934C0u; return; } if (c.pc != 0x00344A4Cu) [[unlikely]] return; }
L_00344A4C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_00344A50:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00344A60:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    c.budget -= 7;
    { const bool t = c.r[5].d[0] != c.r[3].d[0]; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00344AF0; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[17].w[0] + 32u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00344ACC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00344A98u);  if (depth < kMaxDepth) unit_00A1(c, 465u, depth + 1u); else { c.pc = 0x00387C90u; return; } if (c.pc != 0x00344A98u) [[unlikely]] return; }
L_00344A98:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00344AA0u); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x00344AA0u) [[unlikely]] return; }
L_00344AA0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00040000u);
    set32(c.r[4], 0u + 1u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u + 8u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00344AC0u); st8((c.r[1].w[0] + 21785u), static_cast<std::uint8_t>(c.r[16].w[0]));  if (depth < kMaxDepth) unit_001B(c, 394u, depth + 1u); else { c.pc = 0x0016F220u; return; } if (c.pc != 0x00344AC0u) [[unlikely]] return; }
L_00344AC0:
    set32(c.r[3], ld32((c.r[17].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 36u), 0u);  if (t) { goto L_00344AF0; } }
L_00344ACC:
    set32(c.r[4], ld32((c.r[17].w[0] + 592u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00344AE0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00344AE0u) [[unlikely]] return; }
L_00344AE0:
    set32(c.r[2], ld32((c.r[17].w[0] + 24u)));
    set32(c.r[4], 0u + 2u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00344AF0u); st32((c.r[2].w[0] + 36u), 0u);  if (depth < kMaxDepth) unit_0076(c, 191u, depth + 1u); else { c.pc = 0x002D9970u; return; } if (c.pc != 0x00344AF0u) [[unlikely]] return; }
L_00344AF0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00344B10:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    c.budget -= 5;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_00344B34; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 36u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00344B34u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00344B34u) [[unlikely]] return; }
L_00344B34:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00344B40:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00344B54u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 304u, depth + 1u); else { c.pc = 0x0012E500u; return; } if (c.pc != 0x00344B54u) [[unlikely]] return; }
L_00344B54:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 25384u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00344BB4; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 44u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00344B74u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00344B74u) [[unlikely]] return; }
L_00344B74:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00344C50; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00344B84u);  if (depth < kMaxDepth) unit_001B(c, 397u, depth + 1u); else { c.pc = 0x0016F2B0u; return; } if (c.pc != 0x00344B84u) [[unlikely]] return; }
L_00344B84:
    set32(c.r[4], ld32((c.r[16].w[0] + 24u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 32u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00344B9Cu); set32(c.r[5], c.r[2].w[0] - 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00344B9Cu) [[unlikely]] return; }
L_00344B9C:
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00344BACu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00344BACu) [[unlikely]] return; }
L_00344BAC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_00344C54; } }
L_00344BB4:
    set32(c.r[4], ld32((c.r[16].w[0] + 592u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00344C50; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 44u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00344BD0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00344BD0u) [[unlikely]] return; }
L_00344BD0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00344C34; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 592u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00344BECu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00344BECu) [[unlikely]] return; }
L_00344BEC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00344C0C; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00344C04u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00344C04u) [[unlikely]] return; }
L_00344C04:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[16].w[0] + 592u)));  if (t) { goto L_00344C24; } }
L_00344C0C:
    set32(c.r[2], ld32((c.r[16].w[0] + 24u)));
    set32(c.r[3], 0u + 1u);
    set32(c.r[4], 0u + 32u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00344C20u); st32((c.r[2].w[0] + 36u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_0076(c, 191u, depth + 1u); else { c.pc = 0x002D9970u; return; } if (c.pc != 0x00344C20u) [[unlikely]] return; }
L_00344C20:
    set32(c.r[4], ld32((c.r[16].w[0] + 592u)));
    c.budget -= 1;
L_00344C24:
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00344C34u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00344C34u) [[unlikely]] return; }
L_00344C34:
    set32(c.r[4], ld32((c.r[16].w[0] + 128u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 592u)));
    c.f[0] = ld32((c.r[4].w[0] + 12u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[4], c.f[0]);
    st32((c.r[3].w[0] + 156u), c.r[4].w[0]);
    c.budget -= 7;
L_00344C50:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_00344C54:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00344C60:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[4].w[0] + 32u)));
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[5], ld32((c.r[4].w[0] + 24u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 596u)));
    set32(c.r[6], c.r[6].w[0] - 1u);
    set32(c.r[4], ld32((c.r[5].w[0] + 24u)));
    c.r[4].d[0] = c.r[6].d[0] ^ c.r[4].d[0];
    c.budget -= 14;
    { const bool t = c.r[3].sd[0] <= 0; c.r[4].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  if (t) { goto L_00344CC8; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[17].w[0] + 596u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 596u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00344DD0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00344CB4u);  if (depth < kMaxDepth) unit_003F(c, 299u, depth + 1u); else { c.pc = 0x001FF0D0u; return; } if (c.pc != 0x00344CB4u) [[unlikely]] return; }
L_00344CB4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00344CBCu); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003F(c, 236u, depth + 1u); else { c.pc = 0x001FE0A0u; return; } if (c.pc != 0x00344CBCu) [[unlikely]] return; }
L_00344CBC:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 596u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_00344DD0; } }
L_00344CC8:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_00344DBC; } }
    set32(c.r[5], ld32((c.r[17].w[0] + 600u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != 0ull; set32(c.r[4], 0u + 1u);  if (t) { goto L_00344D08; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 584u)));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 137u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00344DD0; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00344CFCu); set32(c.r[5], 0u + 204u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00344CFCu) [[unlikely]] return; }
L_00344CFC:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 600u), c.r[3].w[0]);  if (t) { goto L_00344DD0; } }
L_00344D08:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != c.r[4].d[0]; set32(c.r[3], 0u + 2u);  if (t) { goto L_00344D9C; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], ld32((c.r[1].w[0] + 26840u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00344DD0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00344D28u);  if (depth < kMaxDepth) unit_0012(c, 2u, depth + 1u); else { c.pc = 0x00148010u; return; } if (c.pc != 0x00344D28u) [[unlikely]] return; }
L_00344D28:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);  if (t) { goto L_00344DD0; } }
    set32(c.r[4], ld32((c.r[1].w[0] + 28320u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x43500000u);  if (t) { goto L_00344D40; } }
    set32(c.r[4], c.r[4].w[0] + 436u);
    c.budget -= 1;
L_00344D40:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00344D48u); c.r[5].d[0] = c.r[2].d[0] | 21071ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x00344D48u) [[unlikely]] return; }
L_00344D48:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00344D58; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 16u)));  if (t) { goto L_00344D5C; } }
L_00344D58:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00344D5C:
    set32(c.r[4], c.r[2].w[0] + 32u);
    set32(c.r[5], c.r[17].w[0] + 200u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00344D6Cu); set32(c.r[6], 0u + 368u);  if (depth < kMaxDepth) unit_0010(c, 107u, depth + 1u); else { c.pc = 0x001415A0u; return; } if (c.pc != 0x00344D6Cu) [[unlikely]] return; }
L_00344D6C:
    set32(c.r[4], ld32((c.r[17].w[0] + 584u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00344D80u); set32(c.r[5], 0u + 205u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00344D80u) [[unlikely]] return; }
L_00344D80:
    set32(c.r[2], 0u + 2u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00540000u);
    st32((c.r[17].w[0] + 600u), c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00344D94u); set32(c.r[4], ld32((c.r[1].w[0] - 736u)));  if (depth < kMaxDepth) unit_0097(c, 170u, depth + 1u); else { c.pc = 0x0035DDD0u; return; } if (c.pc != 0x00344D94u) [[unlikely]] return; }
L_00344D94:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00344DD0; } }
L_00344D9C:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_00344DD0; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 584u)));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 137u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00344DD0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[4].d[0] & 255ull;  if (t) { goto L_00344DD0; } }
L_00344DBC:
    set32(c.r[3], ld32((c.r[17].w[0] + 584u)));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 137u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00344DD0; } }
    c.r[16].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_00344DD0:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00344DE8; } }
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00344DE8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00344DE8u) [[unlikely]] return; }
L_00344DE8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00344E00:
    set32(c.r[29], c.r[29].w[0] - 96u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[1].w[0] + 26392u)));
    set32(c.r[16], ld32((c.r[3].w[0] + 224u)));
    c.budget -= 12;
    { const bool t = c.r[16].d[0] == 0ull; c.r[20].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00344F18; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00344E38u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x00344E38u) [[unlikely]] return; }
L_00344E38:
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[4], 0u + 205u);
    st32((c.r[16].w[0] + 48u), c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0] + 4u)));
    st32((c.r[16].w[0] + 52u), c.r[5].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    st32((c.r[16].w[0] + 56u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 128u)));
    c.f[0] = ld32((c.r[2].w[0] + 12u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    st32((c.r[16].w[0] + 60u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 128u)));
    c.f[0] = ld32((c.r[2].w[0] + 12u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    st32((c.r[16].w[0] + 300u), c.r[2].w[0]);
    c.f[0] = ld32((c.r[1].w[0] - 9584u));
    st32((c.r[16].w[0] + 16u), c.f[0]);
    st32((c.r[16].w[0] + 20u), c.r[3].w[0]);
    c.budget -= 26;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00344EA0u); st32((c.r[16].w[0] + 24u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_000B(c, 461u, depth + 1u); else { c.pc = 0x0012FD60u; return; } if (c.pc != 0x00344EA0u) [[unlikely]] return; }
L_00344EA0:
    st32((c.r[16].w[0] + 352u), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42E60000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41F00000u);
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
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00344ED8u); c.f[14] = fp::cvt_s_w(c.f[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00344ED8u) [[unlikely]] return; }
L_00344ED8:
    set32(c.r[25], ld32((c.r[16].w[0] + 176u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u - 1u);
    set32(c.r[25], ld32((c.r[25].w[0] + 68u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00344EF8u); set32(c.r[8], 0u + 2u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00344EF8u) [[unlikely]] return; }
L_00344EF8:
    set32(c.r[25], ld32((c.r[16].w[0] + 176u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u - 1u);
    set32(c.r[25], ld32((c.r[25].w[0] + 68u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00344F18u); c.r[8].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00344F18u) [[unlikely]] return; }
L_00344F18:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], ld32((c.r[1].w[0] + 26392u)));
    set32(c.r[19], ld32((c.r[3].w[0] + 440u)));
    c.budget -= 5;
    { const bool t = c.r[19].d[0] == 0ull; set32(c.r[18], ld32((c.r[3].w[0] + 444u)));  if (t) { goto L_00345158; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00344F34u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x00344F34u) [[unlikely]] return; }
L_00344F34:
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F400000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[17].d[0] = 0ull + 0ull;
    st32((c.r[19].w[0] + 48u), c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0] + 4u)));
    st32((c.r[19].w[0] + 52u), c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0] + 8u)));
    st32((c.r[19].w[0] + 56u), c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[20].w[0] + 128u)));
    c.f[0] = ld32((c.r[5].w[0] + 12u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[0]);
    st32((c.r[19].w[0] + 60u), c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[20].w[0] + 128u)));
    c.f[0] = ld32((c.r[5].w[0] + 12u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[0]);
    st32((c.r[19].w[0] + 300u), c.r[5].w[0]);
    st32((c.r[19].w[0] + 16u), c.r[4].w[0]);
    st32((c.r[19].w[0] + 20u), c.r[3].w[0]);
    c.budget -= 25;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 24u), c.r[3].w[0]);  if (t) { goto L_00345148; } }
L_00344F98:
    set32(c.r[2], ld32((c.r[20].w[0] + 28u)));
    set32(c.r[3], c.r[17].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00344FACu); set32(c.r[4], ld32((c.r[2].w[0] + 4u)));  if (depth < kMaxDepth) unit_000B(c, 461u, depth + 1u); else { c.pc = 0x0012FD60u; return; } if (c.pc != 0x00344FACu) [[unlikely]] return; }
L_00344FAC:
    st32((c.r[19].w[0] + 352u), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41E00000u);
    set32(c.r[2], c.r[17].w[0] << 4);
    st32((c.r[19].w[0] + 356u), 0u);
    set32(c.r[2], c.r[2].w[0] - c.r[17].w[0]);
    set32(c.r[25], ld32((c.r[19].w[0] + 176u)));
    set32(c.r[2], c.r[2].w[0] << 1);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[16], c.r[2].w[0] + 184u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.f[0] = c.r[2].w[0];
    c.f[1] = c.r[16].w[0];
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.f[14] = fp::cvt_s_w(c.f[0]);
    c.f[12] = c.r[3].w[0];
    c.budget -= 18;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00344FF4u); c.f[13] = fp::cvt_s_w(c.f[1]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00344FF4u) [[unlikely]] return; }
L_00344FF4:
    set32(c.r[2], ld32((c.r[20].w[0] + 24u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 24u)));
    c.budget -= 4;
    { const bool t = c.r[17].d[0] != c.r[2].d[0];  if (t) { goto L_00345104; } }
    c.f[0] = c.r[16].w[0];
    set32(c.r[6], ld32((c.r[19].w[0] + 352u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41E00000u);
    c.f[13] = fp::cvt_s_w(c.f[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[18].w[0] + 352u), c.r[6].w[0]);
    st32((c.r[18].w[0] + 356u), 0u);
    c.f[3] = c.r[2].w[0];
    c.f[2] = ld32((c.r[19].w[0] + 20u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.f[0] = c.r[2].w[0];
    c.f[1] = ld32((c.r[19].w[0] + 16u));
    c.f[14] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::mul(c.f[3], c.f[2]);
    st32((c.r[18].w[0] + 16u), c.f[1]);
    st32((c.r[18].w[0] + 20u), c.f[0]);
    st32((c.r[18].w[0] + 24u), c.r[5].w[0]);
    c.f[12] = c.r[3].w[0];
    set32(c.r[25], ld32((c.r[18].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 24;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00345064u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00345064u) [[unlikely]] return; }
L_00345064:
    set32(c.r[3], ld32((c.r[20].w[0] + 8u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_003450AC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034507Cu); set32(c.r[4], 0u + 4u);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x0034507Cu) [[unlikely]] return; }
L_0034507C:
    set32(c.r[3], ld32((c.r[2].w[0])));
    st32((c.r[18].w[0] + 48u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    st32((c.r[18].w[0] + 52u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    st32((c.r[18].w[0] + 56u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 128u)));
    c.f[0] = ld32((c.r[2].w[0] + 12u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 60u), c.r[2].w[0]);  if (t) { goto L_003450D4; } }
L_003450AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003450B4u);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x003450B4u) [[unlikely]] return; }
L_003450B4:
    set32(c.r[3], ld32((c.r[2].w[0])));
    st32((c.r[18].w[0] + 48u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    st32((c.r[18].w[0] + 52u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    st32((c.r[18].w[0] + 56u), c.r[2].w[0]);
    ld128((c.r[20].w[0] + 96u) & ~15u, c.r[2]);
    st128((c.r[18].w[0] + 48u) & ~15u, c.r[2]);
    c.budget -= 8;
L_003450D4:
    set32(c.r[25], ld32((c.r[18].w[0] + 176u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 60u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003450E8u); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003450E8u) [[unlikely]] return; }
L_003450E8:
    set32(c.r[25], ld32((c.r[19].w[0] + 176u)));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 60u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003450FCu); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003450FCu) [[unlikely]] return; }
L_003450FC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[17].w[0] + 1u);  if (t) { goto L_00345148; } }
L_00345104:
    set32(c.r[25], ld32((c.r[19].w[0] + 176u)));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u - 1u);
    set32(c.r[25], ld32((c.r[25].w[0] + 68u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00345124u); set32(c.r[8], 0u + 2u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00345124u) [[unlikely]] return; }
L_00345124:
    set32(c.r[25], ld32((c.r[19].w[0] + 176u)));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u - 1u);
    set32(c.r[25], ld32((c.r[25].w[0] + 68u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00345144u); c.r[8].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00345144u) [[unlikely]] return; }
L_00345144:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_00345148:
    set32(c.r[3], ld32((c.r[20].w[0] + 32u)));
    c.r[3].d[0] = c.r[17].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00344F98u | kUnwind; return; } goto L_00344F98; } }
L_00345158:
    set32(c.r[4], ld32((c.r[20].w[0] + 600u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);  if (t) { goto L_0034523C; } }
    set32(c.r[2], ld32((c.r[1].w[0] + 26392u)));
    set32(c.r[16], ld32((c.r[2].w[0] + 332u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00345178u); set32(c.r[4], 0u + 3u);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x00345178u) [[unlikely]] return; }
L_00345178:
    set32(c.r[6], ld32((c.r[2].w[0])));
    set32(c.r[5], 0u + 255u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[4], 0u + 801u);
    st32((c.r[16].w[0] + 48u), c.r[6].w[0]);
    set32(c.r[6], ld32((c.r[2].w[0] + 4u)));
    st32((c.r[16].w[0] + 52u), c.r[6].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    st32((c.r[16].w[0] + 56u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 300u), 0u);
    st32((c.r[16].w[0] + 60u), c.r[5].w[0]);
    c.f[0] = ld32((c.r[1].w[0] - 9592u));
    st32((c.r[16].w[0] + 16u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[0] = ld32((c.r[1].w[0] - 9592u));
    st32((c.r[16].w[0] + 20u), c.f[0]);
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003451C4u); st32((c.r[16].w[0] + 24u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_000B(c, 461u, depth + 1u); else { c.pc = 0x0012FD60u; return; } if (c.pc != 0x003451C4u) [[unlikely]] return; }
L_003451C4:
    st32((c.r[16].w[0] + 352u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    st32((c.r[16].w[0] + 356u), 0u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    set32(c.r[25], ld32((c.r[16].w[0] + 176u)));
    c.f[0] = c.r[2].w[0];
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[1].w[0] + 20144u)));
    c.f[14] = fp::cvt_s_w(c.f[0]);
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    set32(c.r[3], ld32((c.r[1].w[0] + 1420u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 1));
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    set32(c.r[2], ld32((c.r[1].w[0] + 1424u)));
    c.f[0] = c.r[3].w[0];
    c.f[12] = fp::cvt_s_w(c.f[0]);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    set32(c.r[2], c.r[2].w[0] - 30u);
    c.f[0] = c.r[2].w[0];
    c.budget -= 26;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0034522Cu); c.f[13] = fp::cvt_s_w(c.f[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0034522Cu) [[unlikely]] return; }
L_0034522C:
    set32(c.r[25], ld32((c.r[16].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0034523Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0034523Cu) [[unlikely]] return; }
L_0034523C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_00345260:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 20u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003440C0u | kUnwind; return; } goto L_003440C0; }
L_00345270:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 40u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003440C0u | kUnwind; return; } goto L_003440C0; }
L_00345280:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 20u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00344B10u | kUnwind; return; } goto L_00344B10; }
L_00345290:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 20u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00344A60u | kUnwind; return; } goto L_00344A60; }
L_003452A0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 20u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00344A00u | kUnwind; return; } goto L_00344A00; }
L_003452B0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 20u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00344730u | kUnwind; return; } goto L_00344730; }
L_003452C0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 40u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00344E00u | kUnwind; return; } goto L_00344E00; }
L_003452D0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 40u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00344730u | kUnwind; return; } goto L_00344730; }
L_003452E0:
    set32(c.r[29], c.r[29].w[0] - 144u);
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
    c.r[16].d[0] = c.r[9].d[0] + 0ull;
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00345328u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000F(c, 256u, depth + 1u); else { c.pc = 0x0013E440u; return; } if (c.pc != 0x00345328u) [[unlikely]] return; }
L_00345328:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00345330u); set32(c.r[4], c.r[21].w[0] + 8u);  if (depth < kMaxDepth) unit_0012(c, 39u, depth + 1u); else { c.pc = 0x001486F0u; return; } if (c.pc != 0x00345330u) [[unlikely]] return; }
L_00345330:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 27840u);
    set32(c.r[2], c.r[2].w[0] + 27856u);
    st32((c.r[21].w[0]), c.r[3].w[0]);
    c.r[5].d[0] = c.r[20].d[0] & 65535ull;
    st32((c.r[21].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[3], 0u - 1u);
    st32((c.r[21].w[0] + 40u), c.r[18].w[0]);
    c.r[2].d[0] = c.r[5].sd[0] < 10000ll ? 1ull : 0ull;
    st32((c.r[21].w[0] + 44u), c.r[17].w[0]);
    st16((c.r[21].w[0] + 48u), static_cast<std::uint16_t>(c.r[20].w[0]));
    st32((c.r[21].w[0] + 52u), c.r[19].w[0]);
    st32((c.r[21].w[0] + 56u), 0u);
    st32((c.r[21].w[0] + 60u), 0u);
    st32((c.r[21].w[0] + 64u), 0u);
    st8((c.r[21].w[0] + 68u), static_cast<std::uint8_t>(0u));
    st32((c.r[21].w[0] + 72u), c.r[3].w[0]);
    c.budget -= 20;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[21].w[0] + 76u), c.r[22].w[0]);  if (t) { goto L_00345394; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034538Cu); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0029(c, 88u, depth + 1u); else { c.pc = 0x001A4F50u; return; } if (c.pc != 0x0034538Cu) [[unlikely]] return; }
L_0034538C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[21].w[0] + 72u), c.r[2].w[0]);  if (t) { goto L_003453AC; } }
L_00345394:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034539Cu); set32(c.r[4], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_0040(c, 89u, depth + 1u); else { c.pc = 0x00201AE0u; return; } if (c.pc != 0x0034539Cu) [[unlikely]] return; }
L_0034539C:
    set32(c.r[4], c.r[21].w[0] + 8u);
    set32(c.r[5], c.r[29].w[0] + 128u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003453ACu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0012(c, 45u, depth + 1u); else { c.pc = 0x001487B0u; return; } if (c.pc != 0x003453ACu) [[unlikely]] return; }
L_003453AC:
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_003453E0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00345464; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 27840u);
    set32(c.r[2], c.r[2].w[0] + 27856u);
    st32((c.r[17].w[0]), c.r[3].w[0]);
    st32((c.r[17].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 60u)));
    c.budget -= 9;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00345428; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00345428u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100210u; return; } if (c.pc != 0x00345428u) [[unlikely]] return; }
L_00345428:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00345434u); st32((c.r[17].w[0] + 60u), 0u);  if (depth < kMaxDepth) unit_0091(c, 177u, depth + 1u); else { c.pc = 0x00345670u; return; } if (c.pc != 0x00345434u) [[unlikely]] return; }
L_00345434:
    set32(c.r[4], c.r[17].w[0] + 8u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00345440u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0012(c, 42u, depth + 1u); else { c.pc = 0x00148750u; return; } if (c.pc != 0x00345440u) [[unlikely]] return; }
L_00345440:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034544Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E490u; return; } if (c.pc != 0x0034544Cu) [[unlikely]] return; }
L_0034544C:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00345468; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00345464u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x00345464u) [[unlikely]] return; }
L_00345464:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00345468:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00345480:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 68u));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0034549C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034549Cu);  if (depth < kMaxDepth) unit_0091(c, 180u, depth + 1u); else { c.pc = 0x00345700u; return; } if (c.pc != 0x0034549Cu) [[unlikely]] return; }
L_0034549C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003454B0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 56u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_003454D4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003454CCu);  if (depth < kMaxDepth) unit_0091(c, 250u, depth + 1u); else { c.pc = 0x00345D50u; return; } if (c.pc != 0x003454CCu) [[unlikely]] return; }
L_003454CC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_003454E0; } }
L_003454D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003454DCu); st8((c.r[4].w[0] + 68u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0091(c, 180u, depth + 1u); else { c.pc = 0x00345700u; return; } if (c.pc != 0x003454DCu) [[unlikely]] return; }
L_003454DC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_003454E0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003454F0:
    set32(c.r[5], ld32((c.r[4].w[0] + 56u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_00345564; } }
    c.r[3].d[0] = ld8((c.r[5].w[0] + 392u));
    set32(c.r[8], 0u - 2u);
    c.r[9].d[0] = 0ull & 1ull;
    set32(c.r[6], 0u - 17u);
    set32(c.r[7], c.r[9].w[0] << 4);
    c.r[3].d[0] = c.r[3].d[0] & c.r[8].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[9].d[0];
    st8((c.r[5].w[0] + 392u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[5], ld32((c.r[4].w[0] + 56u)));
    c.r[3].d[0] = ld8((c.r[5].w[0] + 398u));
    c.r[3].d[0] = c.r[3].d[0] & c.r[6].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[7].d[0];
    st8((c.r[5].w[0] + 398u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[5], ld32((c.r[4].w[0] + 56u)));
    c.r[3].d[0] = ld8((c.r[5].w[0] + 400u));
    c.r[3].d[0] = c.r[3].d[0] & c.r[8].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[9].d[0];
    st8((c.r[5].w[0] + 400u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[5], ld32((c.r[4].w[0] + 56u)));
    c.r[3].d[0] = ld8((c.r[5].w[0] + 406u));
    c.r[3].d[0] = c.r[3].d[0] & c.r[6].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[7].d[0];
    st8((c.r[5].w[0] + 406u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[4].w[0] + 56u)));
    c.budget -= 26;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 432u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00345568; } }
L_00345564:
    st8((c.r[4].w[0] + 68u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_00345568:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00345570:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 56u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0034558C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_003455D4; } }
L_0034558C:
    c.r[2].d[0] = ld8((c.r[3].w[0] + 432u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003455A0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003455D0; } }
L_003455A0:
    set32(c.r[2], ld32((c.r[3].w[0] + 176u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 28288u)));
    set32(c.r[9], c.r[29].w[0] + 28u);
    set32(c.r[5], ld32((c.r[3].w[0] + 164u)));
    set32(c.r[10], c.r[29].w[0] + 24u);
    set32(c.r[6], ld32((c.r[3].w[0] + 168u)));
    set32(c.r[7], ld32((c.r[3].w[0] + 172u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003455C8u); set32(c.r[8], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));  if (depth < kMaxDepth) unit_001A(c, 45u, depth + 1u); else { c.pc = 0x00168AA0u; return; } if (c.pc != 0x003455C8u) [[unlikely]] return; }
L_003455C8:
    c.r[2].d[0] = ~(c.r[2].d[0] | 0ull);
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 2;
L_003455D0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_003455D4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003455E0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00345604u); c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 59u, depth + 1u); else { c.pc = 0x00140BF0u; return; } if (c.pc != 0x00345604u) [[unlikely]] return; }
L_00345604:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 3840u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00345618u); st32((c.r[29].w[0] + 76u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x00345618u) [[unlikely]] return; }
L_00345618:
    st32((c.r[18].w[0] + 64u), c.r[16].w[0]);
    set32(c.r[4], ld32((c.r[18].w[0] + 60u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00345630; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00345630u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100210u; return; } if (c.pc != 0x00345630u) [[unlikely]] return; }
L_00345630:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034563Cu); st32((c.r[18].w[0] + 60u), 0u);  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x001001F0u; return; } if (c.pc != 0x0034563Cu) [[unlikely]] return; }
L_0034563C:
    st32((c.r[18].w[0] + 60u), c.r[2].w[0]);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[18].w[0] + 60u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00345650u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 107u, depth + 1u); else { c.pc = 0x001415A0u; return; } if (c.pc != 0x00345650u) [[unlikely]] return; }
L_00345650:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00345658u); set32(c.r[4], ld32((c.r[29].w[0] + 76u)));  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x00345658u) [[unlikely]] return; }
L_00345658:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00345670:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 56u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003456E4; } }
    c.r[2].d[0] = ld8((c.r[3].w[0] + 392u));
    set32(c.r[5], 0u - 2u);
    c.r[6].d[0] = 0ull & 1ull;
    set32(c.r[4], 0u + 20u);
    c.r[2].d[0] = c.r[2].d[0] & c.r[5].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[6].d[0];
    st8((c.r[3].w[0] + 392u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[16].w[0] + 56u)));
    c.r[2].d[0] = ld8((c.r[3].w[0] + 400u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[5].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[6].d[0];
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003456BCu); st8((c.r[3].w[0] + 400u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x003456BCu) [[unlikely]] return; }
L_003456BC:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003456E0; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 56u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_003456D8; } }
    set32(c.r[5], c.r[5].w[0] + 424u);
    c.budget -= 1;
L_003456D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003456E0u);  if (depth < kMaxDepth) unit_0050(c, 220u, depth + 1u); else { c.pc = 0x00243140u; return; } if (c.pc != 0x003456E0u) [[unlikely]] return; }
L_003456E0:
    st32((c.r[16].w[0] + 56u), 0u);
    c.budget -= 1;
L_003456E4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00345700:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00345728u); st32((c.r[29].w[0]), c.f[20]);  if (depth < kMaxDepth) unit_0091(c, 279u, depth + 1u); else { c.pc = 0x003461A0u; return; } if (c.pc != 0x00345728u) [[unlikely]] return; }
L_00345728:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00345730u); c.r[19].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0050(c, 209u, depth + 1u); else { c.pc = 0x00243000u; return; } if (c.pc != 0x00345730u) [[unlikely]] return; }
L_00345730:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00345D2C; } }
    c.r[3].d[0] = ld8((c.r[20].w[0] + 68u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00345D2C; } }
    c.r[3].d[0] = ld16((c.r[20].w[0] + 48u));
    c.r[3].d[0] = c.r[3].sd[0] < 10000ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0034577C; } }
    set32(c.r[5], ld32((c.r[20].w[0] + 72u)));
    set32(c.r[3], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_00345D2C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034576Cu);  if (depth < kMaxDepth) unit_0029(c, 89u, depth + 1u); else { c.pc = 0x001A4F70u; return; } if (c.pc != 0x0034576Cu) [[unlikely]] return; }
L_0034576C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00345788; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));  if (t) { goto L_00345D30; } }
L_0034577C:
    set32(c.r[3], ld32((c.r[20].w[0] + 60u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00345D2C; } }
L_00345788:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00345790u);  if (depth < kMaxDepth) unit_0010(c, 59u, depth + 1u); else { c.pc = 0x00140BF0u; return; } if (c.pc != 0x00345790u) [[unlikely]] return; }
L_00345790:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 3840u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003457A4u); st32((c.r[29].w[0] + 124u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x003457A4u) [[unlikely]] return; }
L_003457A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003457ACu);  if (depth < kMaxDepth) unit_0010(c, 59u, depth + 1u); else { c.pc = 0x00140BF0u; return; } if (c.pc != 0x003457ACu) [[unlikely]] return; }
L_003457AC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], 0u + 15312u);
    st32((c.r[1].w[0] + 28000u), c.r[2].w[0]);
    c.r[18].d[0] = 0ull + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], 0u + 13312u);
    st32((c.r[1].w[0] + 27968u), c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st32((c.r[1].w[0] + 27984u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st32((c.r[1].w[0] + 27976u), c.r[3].w[0]);
    c.r[2].d[0] = ld16((c.r[20].w[0] + 48u));
    c.r[2].d[0] = c.r[2].sd[0] < 10000ll ? 1ull : 0ull;
    c.budget -= 15;
    { const bool t = c.r[2].d[0] != 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_00345870; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003457F0u); set32(c.r[4], 0u + 52u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x003457F0u) [[unlikely]] return; }
L_003457F0:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_00345810; } }
    set32(c.r[5], ld32((c.r[19].w[0] + 32u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034580Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0075(c, 207u, depth + 1u); else { c.pc = 0x002D6BA0u; return; } if (c.pc != 0x0034580Cu) [[unlikely]] return; }
L_0034580C:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00345810:
    set32(c.r[2], ld32((c.r[17].w[0] + 28u)));
    set32(c.r[3], 0u + 1u);
    set32(c.r[4], 0u + 6736u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00345824u); st8((c.r[2].w[0] + 116u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00345824u) [[unlikely]] return; }
L_00345824:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00345858; } }
    c.r[5].d[0] = ld16((c.r[20].w[0] + 48u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[6], ld32((c.r[20].w[0] + 52u)));
    c.f[12] = c.r[3].w[0];
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[10], 0u + 1u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00345858u); c.r[11].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 118u, depth + 1u); else { c.pc = 0x001B9C40u; return; } if (c.pc != 0x00345858u) [[unlikely]] return; }
L_00345858:
    set32(c.r[5], ld32((c.r[2].w[0] + 52u)));
    set32(c.r[4], ld32((c.r[19].w[0] + 32u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00345868u); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0029(c, 23u, depth + 1u); else { c.pc = 0x001A4650u; return; } if (c.pc != 0x00345868u) [[unlikely]] return; }
L_00345868:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[16].w[0] + 416u);  if (t) { goto L_003459B0; } }
L_00345870:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00345878u); set32(c.r[4], 0u + 12u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00345878u) [[unlikely]] return; }
L_00345878:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003458A0; } }
    set32(c.r[5], ld32((c.r[20].w[0] + 60u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[20].w[0] + 64u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00345898u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0017(c, 125u, depth + 1u); else { c.pc = 0x0015D850u; return; } if (c.pc != 0x00345898u) [[unlikely]] return; }
L_00345898:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 2;
L_003458A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003458A8u); set32(c.r[5], 0u + 5u);  if (depth < kMaxDepth) unit_0017(c, 122u, depth + 1u); else { c.pc = 0x0015D740u; return; } if (c.pc != 0x003458A8u) [[unlikely]] return; }
L_003458A8:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003458C4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003458BCu); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 142u, depth + 1u); else { c.pc = 0x0015DA70u; return; } if (c.pc != 0x003458BCu) [[unlikely]] return; }
L_003458BC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003458C8; } }
L_003458C4:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003458C8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003458FC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003458D8u); set32(c.r[5], 0u + 5u);  if (depth < kMaxDepth) unit_0017(c, 122u, depth + 1u); else { c.pc = 0x0015D740u; return; } if (c.pc != 0x003458D8u) [[unlikely]] return; }
L_003458D8:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003458F4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003458ECu); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 156u, depth + 1u); else { c.pc = 0x0015DCF0u; return; } if (c.pc != 0x003458ECu) [[unlikely]] return; }
L_003458EC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_003458FC; } }
L_003458F4:
    c.r[2].d[0] = 0ull + 0ull;
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 2;
L_003458FC:
    c.r[4].d[0] = ld16((c.r[20].w[0] + 48u));
    set32(c.r[3], c.r[4].w[0] - 10000u);
    c.budget -= 4;
    { const bool t = c.r[3].sd[0] < 0; set32(c.r[2], 0u - 1u);  if (t) { goto L_00345920; } }
    set32(c.r[2], 0u + 100u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);  if (t) { goto L_0034591C; } }
    breakpoint(c, 0x00345918u);
    c.budget -= 1;
L_0034591C:
    c.r[2].d[0] = c.lo.d[0];
    c.budget -= 1;
L_00345920:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0; c.r[3].d[0] = c.r[4].d[0] & 65535ull;  if (t) { goto L_00345930; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] + 86u);  if (t) { goto L_00345944; } }
L_00345930:
    set32(c.r[2], 0u + 100u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);  if (t) { goto L_00345940; } }
    breakpoint(c, 0x0034593Cu);
    c.budget -= 1;
L_00345940:
    c.r[2].d[0] = c.lo.d[0];
    c.budget -= 1;
L_00345944:
    set32(c.r[3], c.r[2].w[0] << 3);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[2], c.r[2].w[0] - 9564u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[20] = ld32((c.r[2].w[0]));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00345960u); set32(c.r[4], 0u + 6736u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00345960u) [[unlikely]] return; }
L_00345960:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00345990; } }
    c.r[5].d[0] = ld16((c.r[20].w[0] + 48u));
    c.f[12] = c.f[20];
    set32(c.r[6], ld32((c.r[20].w[0] + 52u)));
    c.r[8].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[10], 0u + 1u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00345990u); c.r[11].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002E(c, 118u, depth + 1u); else { c.pc = 0x001B9C40u; return; } if (c.pc != 0x00345990u) [[unlikely]] return; }
L_00345990:
    set32(c.r[4], ld32((c.r[20].w[0] + 60u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_003459A4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003459A4u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100210u; return; } if (c.pc != 0x003459A4u) [[unlikely]] return; }
L_003459A4:
    st32((c.r[20].w[0] + 60u), 0u);
    st32((c.r[20].w[0] + 64u), 0u);
    set32(c.r[4], c.r[16].w[0] + 416u);
    c.budget -= 3;
L_003459B0:
    set32(c.r[5], 0u + 2u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003459BCu); st32((c.r[20].w[0] + 56u), c.r[16].w[0]);  if (depth < kMaxDepth) unit_000F(c, 261u, depth + 1u); else { c.pc = 0x0013E500u; return; } if (c.pc != 0x003459BCu) [[unlikely]] return; }
L_003459BC:
    set32(c.r[4], c.r[16].w[0] + 424u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003459C8u); set32(c.r[5], 0u + 5u);  if (depth < kMaxDepth) unit_000F(c, 269u, depth + 1u); else { c.pc = 0x0013E620u; return; } if (c.pc != 0x003459C8u) [[unlikely]] return; }
L_003459C8:
    set32(c.r[4], 0u + 96u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003459D4u); st8((c.r[16].w[0] + 432u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x003459D4u) [[unlikely]] return; }
L_003459D4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_003459EC; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 52u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003459E8u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_002D(c, 90u, depth + 1u); else { c.pc = 0x001B4F50u; return; } if (c.pc != 0x003459E8u) [[unlikely]] return; }
L_003459E8:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_003459EC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003459F4u); set32(c.r[4], c.r[16].w[0] + 436u);  if (depth < kMaxDepth) unit_000F(c, 40u, depth + 1u); else { c.pc = 0x0013C4A0u; return; } if (c.pc != 0x003459F4u) [[unlikely]] return; }
L_003459F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003459FCu); set32(c.r[4], 0u + 84u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x003459FCu) [[unlikely]] return; }
L_003459FC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00345A1C; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00345A10; } }
    set32(c.r[5], c.r[5].w[0] + 436u);
    c.budget -= 1;
L_00345A10:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00345A18u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_002D(c, 98u, depth + 1u); else { c.pc = 0x001B5050u; return; } if (c.pc != 0x00345A18u) [[unlikely]] return; }
L_00345A18:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00345A1C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00345A24u); set32(c.r[4], c.r[16].w[0] + 436u);  if (depth < kMaxDepth) unit_000F(c, 40u, depth + 1u); else { c.pc = 0x0013C4A0u; return; } if (c.pc != 0x00345A24u) [[unlikely]] return; }
L_00345A24:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00345A2Cu); set32(c.r[4], 0u + 1664u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00345A2Cu) [[unlikely]] return; }
L_00345A2C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00345A50; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00345A40; } }
    set32(c.r[5], c.r[5].w[0] + 436u);
    c.budget -= 1;
L_00345A40:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00345A4Cu); set32(c.r[6], 0u + 21u);  if (depth < kMaxDepth) unit_002D(c, 119u, depth + 1u); else { c.pc = 0x001B54E0u; return; } if (c.pc != 0x00345A4Cu) [[unlikely]] return; }
L_00345A4C:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00345A50:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00345A58u); set32(c.r[4], c.r[16].w[0] + 436u);  if (depth < kMaxDepth) unit_000F(c, 40u, depth + 1u); else { c.pc = 0x0013C4A0u; return; } if (c.pc != 0x00345A58u) [[unlikely]] return; }
L_00345A58:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00345A60u); set32(c.r[4], 0u + 44u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00345A60u) [[unlikely]] return; }
L_00345A60:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00345A80; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00345A74; } }
    set32(c.r[5], c.r[5].w[0] + 436u);
    c.budget -= 1;
L_00345A74:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00345A7Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_002D(c, 169u, depth + 1u); else { c.pc = 0x001B63B0u; return; } if (c.pc != 0x00345A7Cu) [[unlikely]] return; }
L_00345A7C:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00345A80:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00345A88u); set32(c.r[4], c.r[16].w[0] + 436u);  if (depth < kMaxDepth) unit_000F(c, 40u, depth + 1u); else { c.pc = 0x0013C4A0u; return; } if (c.pc != 0x00345A88u) [[unlikely]] return; }
L_00345A88:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00345A90u); set32(c.r[4], 0u + 44u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00345A90u) [[unlikely]] return; }
L_00345A90:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00345AB0; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00345AA4; } }
    set32(c.r[5], c.r[5].w[0] + 436u);
    c.budget -= 1;
L_00345AA4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00345AACu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_002C(c, 471u, depth + 1u); else { c.pc = 0x001B3010u; return; } if (c.pc != 0x00345AACu) [[unlikely]] return; }
L_00345AAC:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00345AB0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00345AB8u); set32(c.r[4], c.r[16].w[0] + 436u);  if (depth < kMaxDepth) unit_000F(c, 40u, depth + 1u); else { c.pc = 0x0013C4A0u; return; } if (c.pc != 0x00345AB8u) [[unlikely]] return; }
L_00345AB8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00345AC0u); set32(c.r[4], 0u + 116u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00345AC0u) [[unlikely]] return; }
L_00345AC0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00345AD8; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00345AD4u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0033(c, 29u, depth + 1u); else { c.pc = 0x001CC750u; return; } if (c.pc != 0x00345AD4u) [[unlikely]] return; }
L_00345AD4:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00345AD8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00345AE0u); set32(c.r[4], c.r[16].w[0] + 436u);  if (depth < kMaxDepth) unit_000F(c, 40u, depth + 1u); else { c.pc = 0x0013C4A0u; return; } if (c.pc != 0x00345AE0u) [[unlikely]] return; }
L_00345AE0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00345AE8u); set32(c.r[4], 0u + 12976u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00345AE8u) [[unlikely]] return; }
L_00345AE8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00345B00; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00345AFCu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0030(c, 34u, depth + 1u); else { c.pc = 0x001C0500u; return; } if (c.pc != 0x00345AFCu) [[unlikely]] return; }
L_00345AFC:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00345B00:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00345B08u); set32(c.r[4], c.r[16].w[0] + 436u);  if (depth < kMaxDepth) unit_000F(c, 40u, depth + 1u); else { c.pc = 0x0013C4A0u; return; } if (c.pc != 0x00345B08u) [[unlikely]] return; }
L_00345B08:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00345B14; } }
    set32(c.r[4], c.r[4].w[0] + 436u);
    c.budget -= 1;
L_00345B14:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4D430000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00345B20u); c.r[5].d[0] = c.r[2].d[0] | 21580ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x00345B20u) [[unlikely]] return; }
L_00345B20:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00345B30; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 16u)));  if (t) { goto L_00345B34; } }
L_00345B30:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00345B34:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull; st32((c.r[16].w[0] + 16u), c.r[2].w[0]);  if (t) { goto L_00345B84; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00345B44u); set32(c.r[4], 0u + 1120u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00345B44u) [[unlikely]] return; }
L_00345B44:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00345B60; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00345B5Cu); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_008D(c, 134u, depth + 1u); else { c.pc = 0x00334BC0u; return; } if (c.pc != 0x00345B5Cu) [[unlikely]] return; }
L_00345B5C:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00345B60:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00345B68u); set32(c.r[4], c.r[16].w[0] + 436u);  if (depth < kMaxDepth) unit_000F(c, 40u, depth + 1u); else { c.pc = 0x0013C4A0u; return; } if (c.pc != 0x00345B68u) [[unlikely]] return; }
L_00345B68:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull; set32(c.r[4], 0u + 448u);  if (t) { goto L_00345C08; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00345B7Cu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0017(c, 138u, depth + 1u); else { c.pc = 0x0015D9D0u; return; } if (c.pc != 0x00345B7Cu) [[unlikely]] return; }
L_00345B7C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00345C04; } }
L_00345B84:
    c.r[2].d[0] = ld16((c.r[20].w[0] + 48u));
    c.r[2].d[0] = c.r[2].sd[0] < 10000ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], 0u + 496u);  if (t) { goto L_00345BDC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00345B9Cu); set32(c.r[4], 0u + 1120u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00345B9Cu) [[unlikely]] return; }
L_00345B9C:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull; set32(c.r[4], c.r[16].w[0] + 436u);  if (t) { goto L_00345BC0; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00345BB8u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_008D(c, 134u, depth + 1u); else { c.pc = 0x00334BC0u; return; } if (c.pc != 0x00345BB8u) [[unlikely]] return; }
L_00345BB8:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[16].w[0] + 436u);
    c.budget -= 2;
L_00345BC0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00345BC8u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 40u, depth + 1u); else { c.pc = 0x0013C4A0u; return; } if (c.pc != 0x00345BC8u) [[unlikely]] return; }
L_00345BC8:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00345BD4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0075(c, 233u, depth + 1u); else { c.pc = 0x002D6F20u; return; } if (c.pc != 0x00345BD4u) [[unlikely]] return; }
L_00345BD4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00345C04; } }
L_00345BDC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00345BE4u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00345BE4u) [[unlikely]] return; }
L_00345BE4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00345BFC; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00345BF8u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0031(c, 134u, depth + 1u); else { c.pc = 0x001C5980u; return; } if (c.pc != 0x00345BF8u) [[unlikely]] return; }
L_00345BF8:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00345BFC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00345C04u); set32(c.r[4], c.r[16].w[0] + 436u);  if (depth < kMaxDepth) unit_000F(c, 40u, depth + 1u); else { c.pc = 0x0013C4A0u; return; } if (c.pc != 0x00345C04u) [[unlikely]] return; }
L_00345C04:
    set32(c.r[4], 0u + 448u);
    c.budget -= 1;
L_00345C08:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00345C10u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00345C10u) [[unlikely]] return; }
L_00345C10:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00345C28; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00345C24u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0031(c, 114u, depth + 1u); else { c.pc = 0x001C51F0u; return; } if (c.pc != 0x00345C24u) [[unlikely]] return; }
L_00345C24:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00345C28:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00345C30u); set32(c.r[4], c.r[16].w[0] + 436u);  if (depth < kMaxDepth) unit_000F(c, 40u, depth + 1u); else { c.pc = 0x0013C4A0u; return; } if (c.pc != 0x00345C30u) [[unlikely]] return; }
L_00345C30:
    c.r[2].d[0] = ld16((c.r[20].w[0] + 48u));
    c.r[2].d[0] = c.r[2].sd[0] < 10000ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_00345C50; } }
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00345C4Cu); set32(c.r[4], c.r[16].w[0] + 436u);  if (depth < kMaxDepth) unit_000F(c, 40u, depth + 1u); else { c.pc = 0x0013C4A0u; return; } if (c.pc != 0x00345C4Cu) [[unlikely]] return; }
L_00345C4C:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 1;
L_00345C50:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00345C58u);  if (depth < kMaxDepth) unit_0091(c, 250u, depth + 1u); else { c.pc = 0x00345D50u; return; } if (c.pc != 0x00345C58u) [[unlikely]] return; }
L_00345C58:
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 68u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00345C68u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00345C68u) [[unlikely]] return; }
L_00345C68:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00345C74; } }
    set32(c.r[4], c.r[4].w[0] + 436u);
    c.budget -= 1;
L_00345C74:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x48410000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00345C80u); c.r[5].d[0] = c.r[2].d[0] | 18770ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x00345C80u) [[unlikely]] return; }
L_00345C80:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_00345C8C; } }
    set32(c.r[4], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 1;
L_00345C8C:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00345C9C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00345C9Cu);  if (depth < kMaxDepth) unit_008D(c, 176u, depth + 1u); else { c.pc = 0x003356B0u; return; } if (c.pc != 0x00345C9Cu) [[unlikely]] return; }
L_00345C9C:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00345CA8; } }
    set32(c.r[4], c.r[4].w[0] + 436u);
    c.budget -= 1;
L_00345CA8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4B410000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00345CB4u); c.r[5].d[0] = c.r[2].d[0] | 19785ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x00345CB4u) [[unlikely]] return; }
L_00345CB4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_00345CC0; } }
    set32(c.r[4], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 1;
L_00345CC0:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00345CD0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00345CD0u);  if (depth < kMaxDepth) unit_0031(c, 148u, depth + 1u); else { c.pc = 0x001C5D60u; return; } if (c.pc != 0x00345CD0u) [[unlikely]] return; }
L_00345CD0:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x4D550000u);  if (t) { goto L_00345CDC; } }
    set32(c.r[16], c.r[16].w[0] + 436u);
    c.budget -= 1;
L_00345CDC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00345CE8u); c.r[5].d[0] = c.r[2].d[0] | 20037ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x00345CE8u) [[unlikely]] return; }
L_00345CE8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_00345CF4; } }
    set32(c.r[4], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 1;
L_00345CF4:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00345D04; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00345D04u);  if (depth < kMaxDepth) unit_0031(c, 122u, depth + 1u); else { c.pc = 0x001C53E0u; return; } if (c.pc != 0x00345D04u) [[unlikely]] return; }
L_00345D04:
    st8((c.r[20].w[0] + 68u), static_cast<std::uint8_t>(0u));
    c.r[2].d[0] = ld16((c.r[20].w[0] + 48u));
    c.r[2].d[0] = c.r[2].sd[0] < 10000ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00345D24; } }
    set32(c.r[5], ld32((c.r[20].w[0] + 72u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00345D24u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0029(c, 90u, depth + 1u); else { c.pc = 0x001A4FB0u; return; } if (c.pc != 0x00345D24u) [[unlikely]] return; }
L_00345D24:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00345D2Cu); set32(c.r[4], ld32((c.r[29].w[0] + 124u)));  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x00345D2Cu) [[unlikely]] return; }
L_00345D2C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.budget -= 1;
L_00345D30:
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_00345D50:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[3].d[0] = 0ull & 1ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[7], c.r[3].w[0] << 4);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[8], 0u - 2u);
    set32(c.r[5], ld32((c.r[4].w[0] + 56u)));
    c.r[9].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    set32(c.r[6], 0u - 17u);
    set32(c.r[2], 0u + 1u);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[3].d[0] = ld8((c.r[5].w[0] + 392u));
    c.r[3].d[0] = c.r[3].d[0] & c.r[8].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[9].d[0];
    st8((c.r[5].w[0] + 392u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[5], ld32((c.r[4].w[0] + 56u)));
    c.r[3].d[0] = ld8((c.r[5].w[0] + 398u));
    c.r[3].d[0] = c.r[3].d[0] & c.r[6].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[7].d[0];
    st8((c.r[5].w[0] + 398u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[5], ld32((c.r[4].w[0] + 56u)));
    c.r[3].d[0] = ld8((c.r[5].w[0] + 400u));
    c.r[3].d[0] = c.r[3].d[0] & c.r[8].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[9].d[0];
    st8((c.r[5].w[0] + 400u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[5], ld32((c.r[4].w[0] + 56u)));
    c.r[3].d[0] = ld8((c.r[5].w[0] + 406u));
    c.r[3].d[0] = c.r[3].d[0] & c.r[6].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[7].d[0];
    st8((c.r[5].w[0] + 406u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[4].w[0] + 56u)));
    st8((c.r[3].w[0] + 432u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[4].d[0] = ld16((c.r[4].w[0] + 48u));
    set32(c.r[3], c.r[4].w[0] - 10000u);
    c.budget -= 36;
    { const bool t = c.r[3].sd[0] < 0; set32(c.r[2], 0u - 1u);  if (t) { goto L_00345DF4; } }
    set32(c.r[2], 0u + 100u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);  if (t) { goto L_00345DF0; } }
    breakpoint(c, 0x00345DECu);
    c.budget -= 1;
L_00345DF0:
    c.r[2].d[0] = c.lo.d[0];
    c.budget -= 1;
L_00345DF4:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0; c.r[3].d[0] = c.r[4].d[0] & 65535ull;  if (t) { goto L_00345E04; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[2].w[0] + 86u);  if (t) { goto L_00345E18; } }
L_00345E04:
    set32(c.r[2], 0u + 100u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);  if (t) { goto L_00345E14; } }
    breakpoint(c, 0x00345E10u);
    c.budget -= 1;
L_00345E14:
    c.r[3].d[0] = c.lo.d[0];
    c.budget -= 1;
L_00345E18:
    c.r[2].d[0] = c.r[3].sd[0] < 86ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00470000u);  if (t) { goto L_00345E2C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[16].w[0] + 76u)));  if (t) { goto L_00345E3C; } }
L_00345E2C:
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] - 9568u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    c.budget -= 4;
L_00345E3C:
    set32(c.r[4], ld32((c.r[16].w[0] + 56u)));
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[6], ld32((c.r[16].w[0] + 44u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00345E50u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0030(c, 19u, depth + 1u); else { c.pc = 0x001C02C0u; return; } if (c.pc != 0x00345E50u) [[unlikely]] return; }
L_00345E50:
    set32(c.r[5], ld32((c.r[16].w[0] + 40u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[4], c.r[4].w[0] - 560u);
    set32(c.r[3], ld32((c.r[16].w[0] + 56u)));
    set32(c.r[5], c.r[5].w[0] << 4);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    ld128((c.r[4].w[0]) & ~15u, c.r[4]);
    st128((c.r[3].w[0] + 224u) & ~15u, c.r[4]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00345E80:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00345EA0u); set32(c.r[5], 0u + 4u);  if (depth < kMaxDepth) unit_000F(c, 256u, depth + 1u); else { c.pc = 0x0013E440u; return; } if (c.pc != 0x00345EA0u) [[unlikely]] return; }
L_00345EA0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] + 27824u);
    st32((c.r[17].w[0]), c.r[3].w[0]);
    st32((c.r[17].w[0] + 8u), c.r[16].w[0]);
    st32((c.r[17].w[0] + 12u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00345ED0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00345F44; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] + 27824u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00345F1C; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00345F1C; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00345F1Cu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00345F1Cu) [[unlikely]] return; }
L_00345F1C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00345F2Cu); st32((c.r[17].w[0] + 12u), 0u);  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E490u; return; } if (c.pc != 0x00345F2Cu) [[unlikely]] return; }
L_00345F2C:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00345F48; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00345F44u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x00345F44u) [[unlikely]] return; }
L_00345F44:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00345F48:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00345F60:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00346034; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_00345FB0; } }
L_00345F84:
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[3], c.r[17].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 532u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00345FAC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00345FA4u);  if (depth < kMaxDepth) unit_0091(c, 168u, depth + 1u); else { c.pc = 0x00345570u; return; } if (c.pc != 0x00345FA4u) [[unlikely]] return; }
L_00345FA4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00346034; } }
L_00345FAC:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_00345FB0:
    c.r[2].d[0] = c.r[17].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00345F84u | kUnwind; return; } goto L_00345F84; } }
    set32(c.r[4], 0u + 160u);
    set32(c.r[2], ld32((c.r[1].w[0] + 26392u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00345FCCu); set32(c.r[17], c.r[2].w[0] + 624u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00345FCCu) [[unlikely]] return; }
L_00345FCC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00345FE0; } }
    set32(c.r[5], 0u + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00345FE0u); set32(c.r[6], 0u + 15u);  if (depth < kMaxDepth) unit_0025(c, 304u, depth + 1u); else { c.pc = 0x00196C90u; return; } if (c.pc != 0x00345FE0u) [[unlikely]] return; }
L_00345FE0:
    st32((c.r[16].w[0] + 12u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00345FF0u); set32(c.r[5], 0u + 10000u);  if (depth < kMaxDepth) unit_002A(c, 5u, depth + 1u); else { c.pc = 0x001A80A0u; return; } if (c.pc != 0x00345FF0u) [[unlikely]] return; }
L_00345FF0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00346000u); c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_002A(c, 3u, depth + 1u); else { c.pc = 0x001A8060u; return; } if (c.pc != 0x00346000u) [[unlikely]] return; }
L_00346000:
    set32(c.r[4], ld32((c.r[16].w[0] + 12u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00346010u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 322u, depth + 1u); else { c.pc = 0x00196E30u; return; } if (c.pc != 0x00346010u) [[unlikely]] return; }
L_00346010:
    set32(c.r[4], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00346024u); set32(c.r[5], 0u + 175u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00346024u) [[unlikely]] return; }
L_00346024:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    c.f[0] = ld32((c.r[1].w[0] - 7608u));
    st32((c.r[3].w[0] + 104u), c.f[0]);
    c.budget -= 4;
L_00346034:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00346050:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 7824u);
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    c.budget -= 7;
    { const bool t = c.r[5].d[0] != c.r[3].d[0]; set32(c.r[2], ld32((c.r[2].w[0])));  if (t) { goto L_00346074; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 16u);  if (t) { goto L_00346084; } }
L_00346074:
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_00346084; } }
    set32(c.r[2], 0u + 17u);
    c.budget -= 1;
L_00346084:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00346090:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003460ACu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0091(c, 277u, depth + 1u); else { c.pc = 0x00346150u; return; } if (c.pc != 0x003460ACu) [[unlikely]] return; }
L_003460AC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);  if (t) { goto L_003460F4; } }
    set32(c.r[16], ld32((c.r[1].w[0] + 26392u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003460C0u); set32(c.r[4], 0u + 592u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x003460C0u) [[unlikely]] return; }
L_003460C0:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003460EC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003460D4u);  if (depth < kMaxDepth) unit_0010(c, 59u, depth + 1u); else { c.pc = 0x00140BF0u; return; } if (c.pc != 0x003460D4u) [[unlikely]] return; }
L_003460D4:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003460E4u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0091(c, 290u, depth + 1u); else { c.pc = 0x00346260u; return; } if (c.pc != 0x003460E4u) [[unlikely]] return; }
L_003460E4:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 2;
L_003460EC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003460F4u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 40u, depth + 1u); else { c.pc = 0x0013C4A0u; return; } if (c.pc != 0x003460F4u) [[unlikely]] return; }
L_003460F4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00346110:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00346120u);  if (depth < kMaxDepth) unit_0091(c, 277u, depth + 1u); else { c.pc = 0x00346150u; return; } if (c.pc != 0x00346120u) [[unlikely]] return; }
L_00346120:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0034613C; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0034613Cu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0034613Cu) [[unlikely]] return; }
L_0034613C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00346150:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[1].w[0] + 26392u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x6D630000u);  if (t) { goto L_00346170; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0034618C; } }
L_00346170:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00346178u); c.r[5].d[0] = c.r[2].d[0] | 22339ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x00346178u) [[unlikely]] return; }
L_00346178:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00346188; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 16u)));  if (t) { goto L_0034618C; } }
L_00346188:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0034618C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003461A0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003461B0u);  if (depth < kMaxDepth) unit_0091(c, 277u, depth + 1u); else { c.pc = 0x00346150u; return; } if (c.pc != 0x003461B0u) [[unlikely]] return; }
L_003461B0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003461C0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 576u)));  if (t) { goto L_003461C4; } }
L_003461C0:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003461C4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003461D0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003461E0u);  if (depth < kMaxDepth) unit_0091(c, 277u, depth + 1u); else { c.pc = 0x00346150u; return; } if (c.pc != 0x003461E0u) [[unlikely]] return; }
L_003461E0:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003461F4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003461F4u);  if (depth < kMaxDepth) unit_0091(c, 333u, depth + 1u); else { c.pc = 0x00346850u; return; } if (c.pc != 0x003461F4u) [[unlikely]] return; }
L_003461F4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00346200:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00346210u);  if (depth < kMaxDepth) unit_0091(c, 277u, depth + 1u); else { c.pc = 0x00346150u; return; } if (c.pc != 0x00346210u) [[unlikely]] return; }
L_00346210:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00346224; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00346224u);  if (depth < kMaxDepth) unit_0091(c, 347u, depth + 1u); else { c.pc = 0x003469C0u; return; } if (c.pc != 0x00346224u) [[unlikely]] return; }
L_00346224:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00346230:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00346240u);  if (depth < kMaxDepth) unit_0091(c, 277u, depth + 1u); else { c.pc = 0x00346150u; return; } if (c.pc != 0x00346240u) [[unlikely]] return; }
L_00346240:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00346254; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00346254u);  if (depth < kMaxDepth) unit_0091(c, 352u, depth + 1u); else { c.pc = 0x00346A80u; return; } if (c.pc != 0x00346254u) [[unlikely]] return; }
L_00346254:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00346260:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x6D630000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] | 22339ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00346290u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 30u, depth + 1u); else { c.pc = 0x0013C370u; return; } if (c.pc != 0x00346290u) [[unlikely]] return; }
L_00346290:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[4], c.r[16].w[0] + 32u);
    set32(c.r[2], c.r[2].w[0] + 27808u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003462A4u); st32((c.r[16].w[0] + 24u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0015(c, 128u, depth + 1u); else { c.pc = 0x00157600u; return; } if (c.pc != 0x003462A4u) [[unlikely]] return; }
L_003462A4:
    st32((c.r[16].w[0] + 528u), c.r[18].w[0]);
    c.r[3].d[0] = 0ull + 0ull;
    st32((c.r[16].w[0] + 556u), 0u);
    st8((c.r[16].w[0] + 560u), static_cast<std::uint8_t>(0u));
    st32((c.r[16].w[0] + 564u), 0u);
    st32((c.r[16].w[0] + 568u), 0u);
    st32((c.r[16].w[0] + 572u), c.r[17].w[0]);
    st32((c.r[16].w[0] + 576u), 0u);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 580u), 0u);  if (t) { goto L_003462DC; } }
L_003462CC:
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[2].w[0] + 532u), 0u);
    c.budget -= 4;
L_003462DC:
    c.r[2].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003462CCu | kUnwind; return; } goto L_003462CC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003462F0u);  if (depth < kMaxDepth) unit_0010(c, 59u, depth + 1u); else { c.pc = 0x00140BF0u; return; } if (c.pc != 0x003462F0u) [[unlikely]] return; }
L_003462F0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[4], ld32((c.r[1].w[0] - 7712u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00346300u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0050(c, 195u, depth + 1u); else { c.pc = 0x00242E90u; return; } if (c.pc != 0x00346300u) [[unlikely]] return; }
L_00346300:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00346308u);  if (depth < kMaxDepth) unit_0050(c, 166u, depth + 1u); else { c.pc = 0x00242B70u; return; } if (c.pc != 0x00346308u) [[unlikely]] return; }
L_00346308:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00346310u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0091(c, 323u, depth + 1u); else { c.pc = 0x00346660u; return; } if (c.pc != 0x00346310u) [[unlikely]] return; }
L_00346310:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00346318u); set32(c.r[4], 0u + 6u);  if (depth < kMaxDepth) unit_0040(c, 240u, depth + 1u); else { c.pc = 0x00202C90u; return; } if (c.pc != 0x00346318u) [[unlikely]] return; }
L_00346318:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00346340:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 9;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003464DC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] + 27808u);
    st32((c.r[17].w[0] + 24u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 580u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00346394; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00346394; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00346394u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00346394u) [[unlikely]] return; }
L_00346394:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034639Cu); st32((c.r[17].w[0] + 580u), 0u);  if (depth < kMaxDepth) unit_0050(c, 173u, depth + 1u); else { c.pc = 0x00242BE0u; return; } if (c.pc != 0x0034639Cu) [[unlikely]] return; }
L_0034639C:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_003463F4; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003463B8u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003F(c, 356u, depth + 1u); else { c.pc = 0x001FF8C0u; return; } if (c.pc != 0x003463B8u) [[unlikely]] return; }
L_003463B8:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003463CCu); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003F(c, 356u, depth + 1u); else { c.pc = 0x001FF8C0u; return; } if (c.pc != 0x003463CCu) [[unlikely]] return; }
L_003463CC:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], 0u + 2u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003463E0u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003F(c, 356u, depth + 1u); else { c.pc = 0x001FF8C0u; return; } if (c.pc != 0x003463E0u) [[unlikely]] return; }
L_003463E0:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], 0u + 3u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003463F4u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003F(c, 356u, depth + 1u); else { c.pc = 0x001FF8C0u; return; } if (c.pc != 0x003463F4u) [[unlikely]] return; }
L_003463F4:
    c.r[2].d[0] = ld8((c.r[17].w[0] + 560u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00346408; } }
    st32((c.r[17].w[0] + 556u), 0u);
    st8((c.r[17].w[0] + 560u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_00346408:
    set32(c.r[4], ld32((c.r[17].w[0] + 556u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0034642C; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0034642C; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0034642Cu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0034642Cu) [[unlikely]] return; }
L_0034642C:
    st32((c.r[17].w[0] + 556u), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_00346468; } }
L_00346438:
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 532u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[18], c.r[2].w[0] + 532u);  if (t) { goto L_00346460; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00346460; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00346460u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00346460u) [[unlikely]] return; }
L_00346460:
    st32((c.r[18].w[0]), 0u);
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.budget -= 2;
L_00346468:
    c.r[2].d[0] = c.r[19].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[19].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00346438u | kUnwind; return; } goto L_00346438; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 576u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00346498; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00346498; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00346498u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00346498u) [[unlikely]] return; }
L_00346498:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003464A0u); st32((c.r[17].w[0] + 576u), 0u);  if (depth < kMaxDepth) unit_0040(c, 244u, depth + 1u); else { c.pc = 0x00202D00u; return; } if (c.pc != 0x003464A0u) [[unlikely]] return; }
L_003464A0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003464ACu); set32(c.r[4], ld32((c.r[1].w[0] - 7712u)));  if (depth < kMaxDepth) unit_0050(c, 200u, depth + 1u); else { c.pc = 0x00242F00u; return; } if (c.pc != 0x003464ACu) [[unlikely]] return; }
L_003464AC:
    set32(c.r[4], c.r[17].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003464B8u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0015(c, 131u, depth + 1u); else { c.pc = 0x00157770u; return; } if (c.pc != 0x003464B8u) [[unlikely]] return; }
L_003464B8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003464C4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000F(c, 31u, depth + 1u); else { c.pc = 0x0013C3B0u; return; } if (c.pc != 0x003464C4u) [[unlikely]] return; }
L_003464C4:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003464E0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003464DCu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x003464DCu) [[unlikely]] return; }
L_003464DC:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003464E0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00346500:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 9;
L_00346524:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034652Cu);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126B58u; return; } if (c.pc != 0x0034652Cu) [[unlikely]] return; }
L_0034652C:
    set32(c.r[3], 0u + 13u);
    c.r[5].d[0] = 0ull + 0ull;
    mmi::div(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[4].d[0] = c.hi.d[0];
    c.budget -= 8;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_00346564; } }
L_0034654C:
    set32(c.r[2], c.r[19].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { goto L_00346560; } }
    c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_00346560:
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 1;
L_00346564:
    c.r[2].d[0] = c.r[3].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[3].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0034654Cu | kUnwind; return; } goto L_0034654C; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != 0ull; set32(c.r[16], c.r[17].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00346524u | kUnwind; return; } goto L_00346524; } }
    set32(c.r[2], c.r[19].w[0] + c.r[16].w[0]);
    st32((c.r[2].w[0]), c.r[4].w[0]);
    c.budget -= 2;
L_00346580:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00346588u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126B58u; return; } if (c.pc != 0x00346588u) [[unlikely]] return; }
L_00346588:
    set32(c.r[3], 0u + 6u);
    c.r[6].d[0] = 0ull + 0ull;
    mmi::div(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[5].d[0] = c.hi.d[0];
    c.budget -= 8;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_003465C0; } }
L_003465A8:
    set32(c.r[3], c.r[18].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_003465BC; } }
    c.r[6].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_003465BC:
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.budget -= 1;
L_003465C0:
    c.r[3].d[0] = c.r[4].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], c.r[4].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003465A8u | kUnwind; return; } goto L_003465A8; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != 0ull; set32(c.r[3], c.r[18].w[0] + c.r[16].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00346580u | kUnwind; return; } goto L_00346580; } }
    set32(c.r[17], c.r[17].w[0] + 1u);
    st32((c.r[3].w[0]), c.r[5].w[0]);
    c.r[3].d[0] = c.r[17].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; c.r[9].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00346524u | kUnwind; return; } goto L_00346524; } }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[6], c.r[6].w[0] - 7696u);
    set32(c.r[5], c.r[5].w[0] - 7632u);
    c.budget -= 4;
L_003465F8:
    set32(c.r[3], c.r[9].w[0] << 2);
    set32(c.r[8], c.r[19].w[0] + c.r[3].w[0]);
    set32(c.r[7], c.r[18].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[8].w[0])));
    set32(c.r[9], c.r[9].w[0] + 1u);
    c.r[3].d[0] = c.r[9].sd[0] < 6ll ? 1ull : 0ull;
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[4], c.r[6].w[0] + c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0])));
    st32((c.r[8].w[0]), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[7].w[0])));
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.budget -= 16;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[7].w[0]), c.r[4].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003465F8u | kUnwind; return; } goto L_003465F8; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00346660:
    set32(c.r[29], c.r[29].w[0] - 240u);
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
    set32(c.r[2], ld32((c.r[4].w[0] + 572u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 296u)));
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003466A0u); set32(c.r[4], ld32((c.r[2].w[0] + 300u)));  if (depth < kMaxDepth) unit_0091(c, 267u, depth + 1u); else { c.pc = 0x00346050u; return; } if (c.pc != 0x003466A0u) [[unlikely]] return; }
L_003466A0:
    st32((c.r[21].w[0] + 568u), c.r[2].w[0]);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[9], ld32((c.r[21].w[0] + 568u)));
    set32(c.r[7], c.r[7].w[0] - 8864u);
    set32(c.r[10], ld32((c.r[21].w[0] + 572u)));
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 208u);
    set32(c.r[6], c.r[29].w[0] + 176u);
    set32(c.r[2], c.r[9].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[9].w[0]);
    set32(c.r[3], ld32((c.r[10].w[0] + 296u)));
    set32(c.r[8], c.r[2].w[0] << 2);
    set32(c.r[2], ld32((c.r[10].w[0] + 288u)));
    set32(c.r[8], c.r[8].w[0] + c.r[9].w[0]);
    set32(c.r[8], c.r[8].w[0] << 2);
    set32(c.r[20], c.r[7].w[0] + c.r[8].w[0]);
    c.r[3].d[0] = c.r[3].d[0] ^ 84ull;
    c.r[23].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003466F0u); c.r[30].d[0] = c.r[2].sd[0] < 5ll ? 1ull : 0ull;  if (depth < kMaxDepth) unit_0091(c, 315u, depth + 1u); else { c.pc = 0x00346500u; return; } if (c.pc != 0x003466F0u) [[unlikely]] return; }
L_003466F0:
    set32(c.r[3], ld32((c.r[21].w[0] + 572u)));
    c.r[19].d[0] = 0ull + 0ull;
    set32(c.r[3], ld32((c.r[3].w[0] + 288u)));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 160u), c.r[3].w[0]);  if (t) { goto L_00346800; } }
L_00346704:
    set32(c.r[4], ld32((c.r[21].w[0] + 572u)));
    set32(c.r[3], c.r[19].w[0] << 1);
    set32(c.r[5], c.r[3].w[0] + c.r[19].w[0]);
    set32(c.r[3], c.r[19].w[0] << 3);
    set32(c.r[5], c.r[5].w[0] << 4);
    set32(c.r[17], c.r[20].w[0] + c.r[3].w[0]);
    set32(c.r[18], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 10;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003467FC; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 28u)));
    c.r[2].d[0] = c.r[2].sd[0] < 86ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], 0u + 101u);  if (t) { goto L_00346794; } }
    set32(c.r[2], ld32((c.r[21].w[0] + 576u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[22], c.r[19].w[0] << 2);  if (t) { goto L_00346768; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00346750u); set32(c.r[4], 0u + 64u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00346750u) [[unlikely]] return; }
L_00346750:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00346760; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00346760u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0029(c, 74u, depth + 1u); else { c.pc = 0x001A4DD0u; return; } if (c.pc != 0x00346760u) [[unlikely]] return; }
L_00346760:
    st32((c.r[21].w[0] + 576u), c.r[2].w[0]);
    set32(c.r[22], c.r[19].w[0] << 2);
    c.budget -= 2;
L_00346768:
    set32(c.r[4], ld32((c.r[18].w[0] + 28u)));
    set32(c.r[2], c.r[22].w[0] + c.r[29].w[0]);
    set32(c.r[16], ld32((c.r[2].w[0] + 208u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034677Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 104u, depth + 1u); else { c.pc = 0x0012CEC0u; return; } if (c.pc != 0x0034677Cu) [[unlikely]] return; }
L_0034677C:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 346u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00346794; } }
    set32(c.r[2], c.r[22].w[0] + c.r[29].w[0]);
    set32(c.r[16], ld32((c.r[2].w[0] + 176u)));
    c.budget -= 2;
L_00346794:
    set32(c.r[2], ld32((c.r[18].w[0] + 20u)));
    c.r[6].d[0] = c.r[30].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[18].w[0] + 28u)));
    c.r[7].d[0] = c.r[23].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[18].w[0] + 32u)));
    c.r[9].d[0] = 0ull + 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 2ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003467B8u); c.r[8].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  if (depth < kMaxDepth) unit_000B(c, 99u, depth + 1u); else { c.pc = 0x0012CCE0u; return; } if (c.pc != 0x003467B8u) [[unlikely]] return; }
L_003467B8:
    c.r[18].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003467C4u); set32(c.r[4], 0u + 80u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x003467C4u) [[unlikely]] return; }
L_003467C4:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[3], c.r[19].w[0] << 2);  if (t) { goto L_003467F4; } }
    set32(c.r[7], ld32((c.r[17].w[0] + 4u)));
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[8], ld32((c.r[17].w[0])));
    c.r[10].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[9], ld32((c.r[21].w[0] + 576u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003467ECu); c.r[6].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0091(c, 150u, depth + 1u); else { c.pc = 0x003452E0u; return; } if (c.pc != 0x003467ECu) [[unlikely]] return; }
L_003467EC:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], c.r[19].w[0] << 2);
    c.budget -= 2;
L_003467F4:
    set32(c.r[3], c.r[21].w[0] + c.r[3].w[0]);
    st32((c.r[3].w[0] + 532u), c.r[4].w[0]);
    c.budget -= 2;
L_003467FC:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.budget -= 1;
L_00346800:
    set32(c.r[3], ld32((c.r[29].w[0] + 160u)));
    c.r[3].d[0] = c.r[19].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00346704u | kUnwind; return; } goto L_00346704; } }
    set32(c.r[3], ld32((c.r[20].w[0] + 48u)));
    st32((c.r[21].w[0] + 564u), c.r[3].w[0]);
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
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 240u);  c.pc = t; return; }
L_00346850:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_00346888; } }
L_0034686C:
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 532u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00346884; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00346884u);  if (depth < kMaxDepth) unit_0091(c, 164u, depth + 1u); else { c.pc = 0x003454B0u; return; } if (c.pc != 0x00346884u) [[unlikely]] return; }
L_00346884:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_00346888:
    c.r[2].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[16].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0034686Cu | kUnwind; return; } goto L_0034686C; } }
    c.r[2].d[0] = ld8((c.r[17].w[0] + 560u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003468A8; } }
    st32((c.r[17].w[0] + 556u), 0u);
    st8((c.r[17].w[0] + 560u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_003468A8:
    set32(c.r[4], ld32((c.r[17].w[0] + 556u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003468CC; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003468CC; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003468CCu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003468CCu) [[unlikely]] return; }
L_003468CC:
    set32(c.r[4], 0u + 432u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003468D8u); st32((c.r[17].w[0] + 556u), 0u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x003468D8u) [[unlikely]] return; }
L_003468D8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);  if (t) { goto L_00346900; } }
    set32(c.r[8], ld32((c.r[17].w[0] + 564u)));
    set32(c.r[5], ld32((c.r[1].w[0] + 28288u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[6], 0u + 50u);
    c.r[7].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00346900u); set32(c.r[10], c.r[17].w[0] + 560u);  if (depth < kMaxDepth) unit_0040(c, 267u, depth + 1u); else { c.pc = 0x00203160u; return; } if (c.pc != 0x00346900u) [[unlikely]] return; }
L_00346900:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00346908u); st32((c.r[17].w[0] + 556u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0050(c, 173u, depth + 1u); else { c.pc = 0x00242BE0u; return; } if (c.pc != 0x00346908u) [[unlikely]] return; }
L_00346908:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00346960; } }
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 3690u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00346924u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003F(c, 356u, depth + 1u); else { c.pc = 0x001FF8C0u; return; } if (c.pc != 0x00346924u) [[unlikely]] return; }
L_00346924:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    set32(c.r[6], 0u + 3691u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00346938u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003F(c, 356u, depth + 1u); else { c.pc = 0x001FF8C0u; return; } if (c.pc != 0x00346938u) [[unlikely]] return; }
L_00346938:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 2u);
    set32(c.r[6], 0u + 3692u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034694Cu); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003F(c, 356u, depth + 1u); else { c.pc = 0x001FF8C0u; return; } if (c.pc != 0x0034694Cu) [[unlikely]] return; }
L_0034694C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 3u);
    set32(c.r[6], 0u + 3693u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00346960u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003F(c, 356u, depth + 1u); else { c.pc = 0x001FF8C0u; return; } if (c.pc != 0x00346960u) [[unlikely]] return; }
L_00346960:
    set32(c.r[4], ld32((c.r[17].w[0] + 580u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00346984; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00346984; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00346984u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00346984u) [[unlikely]] return; }
L_00346984:
    set32(c.r[4], 0u + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00346990u); st32((c.r[17].w[0] + 580u), 0u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00346990u) [[unlikely]] return; }
L_00346990:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003469A8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003469A4u);  if (depth < kMaxDepth) unit_0091(c, 252u, depth + 1u); else { c.pc = 0x00345E80u; return; } if (c.pc != 0x003469A4u) [[unlikely]] return; }
L_003469A4:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_003469A8:
    st32((c.r[17].w[0] + 580u), c.r[4].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003469C0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_003469F8; } }
L_003469DC:
    set32(c.r[3], c.r[17].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0] + 532u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003469F4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003469F4u);  if (depth < kMaxDepth) unit_0091(c, 167u, depth + 1u); else { c.pc = 0x003454F0u; return; } if (c.pc != 0x003469F4u) [[unlikely]] return; }
L_003469F4:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_003469F8:
    c.r[3].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], c.r[16].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003469DCu | kUnwind; return; } goto L_003469DC; } }
    c.r[3].d[0] = ld8((c.r[17].w[0] + 560u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00346A18; } }
    st32((c.r[17].w[0] + 556u), 0u);
    st8((c.r[17].w[0] + 560u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_00346A18:
    set32(c.r[4], ld32((c.r[17].w[0] + 556u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00346A3C; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00346A3C; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00346A3Cu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00346A3Cu) [[unlikely]] return; }
L_00346A3C:
    st32((c.r[17].w[0] + 556u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 580u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00346A64; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00346A64; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00346A64u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00346A64u) [[unlikely]] return; }
L_00346A64:
    st32((c.r[17].w[0] + 580u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00346A80:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] + 31840u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], c.r[17].w[0] + 256u);
    ld128((c.r[2].w[0]) & ~15u, c.r[6]);
    ld128((c.r[2].w[0] + 16u) & ~15u, c.r[7]);
    ld128((c.r[2].w[0] + 32u) & ~15u, c.r[8]);
    ld128((c.r[2].w[0] + 48u) & ~15u, c.r[9]);
    st128((c.r[3].w[0]) & ~15u, c.r[6]);
    st128((c.r[3].w[0] + 16u) & ~15u, c.r[7]);
    st128((c.r[3].w[0] + 32u) & ~15u, c.r[8]);
    st128((c.r[3].w[0] + 48u) & ~15u, c.r[9]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], c.r[2].w[0] + 31904u);
    set32(c.r[3], c.r[17].w[0] + 192u);
    ld128((c.r[2].w[0]) & ~15u, c.r[6]);
    ld128((c.r[2].w[0] + 16u) & ~15u, c.r[7]);
    ld128((c.r[2].w[0] + 32u) & ~15u, c.r[8]);
    ld128((c.r[2].w[0] + 48u) & ~15u, c.r[9]);
    st128((c.r[3].w[0]) & ~15u, c.r[6]);
    st128((c.r[3].w[0] + 16u) & ~15u, c.r[7]);
    st128((c.r[3].w[0] + 32u) & ~15u, c.r[8]);
    st128((c.r[3].w[0] + 48u) & ~15u, c.r[9]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[16], ld32((c.r[1].w[0] + 20144u)));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], c.r[29].w[0] + 48u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[2] = ld32((c.r[1].w[0] + 28704u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.f[1] = ld32((c.r[1].w[0] + 28720u));
    st32((c.r[29].w[0] + 48u), c.f[2]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.f[0] = ld32((c.r[1].w[0] + 28736u));
    st32((c.r[29].w[0] + 52u), c.f[1]);
    c.budget -= 42;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00346B28u); st32((c.r[29].w[0] + 56u), c.f[0]);  if (depth < kMaxDepth) unit_0013(c, 94u, depth + 1u); else { c.pc = 0x0014D670u; return; } if (c.pc != 0x00346B28u) [[unlikely]] return; }
L_00346B28:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = ld32((c.r[1].w[0] + 28640u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.f[13] = ld32((c.r[1].w[0] + 28644u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.f[14] = ld32((c.r[1].w[0] + 28648u));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00346B4Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0013(c, 95u, depth + 1u); else { c.pc = 0x0014D6C0u; return; } if (c.pc != 0x00346B4Cu) [[unlikely]] return; }
L_00346B4C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[2] = ld32((c.r[1].w[0] + 28708u));
    set32(c.r[5], 0u + 1u);
    set32(c.r[6], c.r[29].w[0] + 48u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.f[1] = ld32((c.r[1].w[0] + 28724u));
    st32((c.r[29].w[0] + 48u), c.f[2]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.f[0] = ld32((c.r[1].w[0] + 28740u));
    st32((c.r[29].w[0] + 52u), c.f[1]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00346B80u); st32((c.r[29].w[0] + 56u), c.f[0]);  if (depth < kMaxDepth) unit_0013(c, 94u, depth + 1u); else { c.pc = 0x0014D670u; return; } if (c.pc != 0x00346B80u) [[unlikely]] return; }
L_00346B80:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = ld32((c.r[1].w[0] + 28656u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.f[13] = ld32((c.r[1].w[0] + 28660u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.f[14] = ld32((c.r[1].w[0] + 28664u));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00346BA4u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0013(c, 95u, depth + 1u); else { c.pc = 0x0014D6C0u; return; } if (c.pc != 0x00346BA4u) [[unlikely]] return; }
L_00346BA4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[2] = ld32((c.r[1].w[0] + 28712u));
    set32(c.r[5], 0u + 2u);
    set32(c.r[6], c.r[29].w[0] + 48u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.f[1] = ld32((c.r[1].w[0] + 28728u));
    st32((c.r[29].w[0] + 48u), c.f[2]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.f[0] = ld32((c.r[1].w[0] + 28744u));
    st32((c.r[29].w[0] + 52u), c.f[1]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00346BD8u); st32((c.r[29].w[0] + 56u), c.f[0]);  if (depth < kMaxDepth) unit_0013(c, 94u, depth + 1u); else { c.pc = 0x0014D670u; return; } if (c.pc != 0x00346BD8u) [[unlikely]] return; }
L_00346BD8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = ld32((c.r[1].w[0] + 28672u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.f[13] = ld32((c.r[1].w[0] + 28676u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.f[14] = ld32((c.r[1].w[0] + 28680u));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00346BFCu); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_0013(c, 95u, depth + 1u); else { c.pc = 0x0014D6C0u; return; } if (c.pc != 0x00346BFCu) [[unlikely]] return; }
L_00346BFC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.f[12] = ld32((c.r[1].w[0] + 28688u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.f[13] = ld32((c.r[1].w[0] + 28692u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.f[14] = ld32((c.r[1].w[0] + 28696u));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00346C1Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0013(c, 96u, depth + 1u); else { c.pc = 0x0014D700u; return; } if (c.pc != 0x00346C1Cu) [[unlikely]] return; }
L_00346C1C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[16].w[0] + c.r[1].w[0]);
    set32(c.r[2], ld32((c.r[1].w[0] + 1364u)));
    c.r[1].d[0] = c.r[2].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00346CD8; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    set32(c.r[1], c.r[16].w[0] + c.r[1].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x50000000u);
    set32(c.r[10], ld32((c.r[1].w[0] + 1380u)));
    c.r[9].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[6].d[0] = c.r[4].d[0] | 2ull;
    c.r[8].d[0] = c.r[2].d[0] | 3ull;
    c.r[3].d[0] = c.r[2].d[0] << 32;
    c.r[7].sd[0] = static_cast<std::int32_t>(0x11000000u);
    c.r[2].d[0] = 0ull | 32769ull;
    set32(c.r[4], 0u + 14u);
    c.r[5].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00050000u);
    c.r[9].d[0] = c.r[10].d[0] | c.r[9].d[0];
    c.r[3].d[0] = c.r[2].d[0] | 27ull;
    st64((c.r[9].w[0]), c.r[8].d[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    st64((c.r[9].w[0] + 8u), 0ull);
    set32(c.r[2], 0u + 71u);
    st64((c.r[9].w[0] + 16u), 0ull);
    set32(c.r[1], c.r[16].w[0] + c.r[1].w[0]);
    st32((c.r[9].w[0] + 24u), c.r[7].w[0]);
    st32((c.r[9].w[0] + 28u), c.r[6].w[0]);
    st64((c.r[9].w[0] + 32u), c.r[5].d[0]);
    st64((c.r[9].w[0] + 40u), c.r[4].d[0]);
    st64((c.r[9].w[0] + 48u), c.r[3].d[0]);
    st64((c.r[9].w[0] + 56u), c.r[2].d[0]);
    set32(c.r[2], ld32((c.r[1].w[0] + 1380u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[2], c.r[2].w[0] + 64u);
    set32(c.r[1], c.r[16].w[0] + c.r[1].w[0]);
    st32((c.r[1].w[0] + 1380u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[16].w[0] + c.r[1].w[0]);
    set32(c.r[2], ld32((c.r[1].w[0] + 1364u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[2], c.r[2].w[0] - 4u);
    set32(c.r[1], c.r[16].w[0] + c.r[1].w[0]);
    st32((c.r[1].w[0] + 1364u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 41;
L_00346CD8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00346CE0u); set32(c.r[5], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_0013(c, 99u, depth + 1u); else { c.pc = 0x0014D7F0u; return; } if (c.pc != 0x00346CE0u) [[unlikely]] return; }
L_00346CE0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00346D00:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 8u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003455E0u | kUnwind; return; } goto L_003455E0; }
L_00346D10:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 8u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003453E0u | kUnwind; return; } goto L_003453E0; }
L_00346D20:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[5], 0u + 35u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00346D44u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0010(c, 29u, depth + 1u); else { c.pc = 0x00140690u; return; } if (c.pc != 0x00346D44u) [[unlikely]] return; }
L_00346D44:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[4], 0u + 1360u);
    set32(c.r[2], c.r[2].w[0] + 28048u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00346D58u); st32((c.r[17].w[0] + 8u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00346D58u) [[unlikely]] return; }
L_00346D58:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00346D6C; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00346D6Cu); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0092(c, 4u, depth + 1u); else { c.pc = 0x00348060u; return; } if (c.pc != 0x00346D6Cu) [[unlikely]] return; }
L_00346D6C:
    st32((c.r[17].w[0] + 12u), c.r[2].w[0]);
    c.r[16].d[0] = 0ull + 0ull;
    st32((c.r[17].w[0] + 16u), c.r[18].w[0]);
    st32((c.r[17].w[0] + 20u), 0u);
    st32((c.r[17].w[0] + 28u), 0u);
    c.budget -= 5;
L_00346D80:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00346D8Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 104u, depth + 1u); else { c.pc = 0x0012CEC0u; return; } if (c.pc != 0x00346D8Cu) [[unlikely]] return; }
L_00346D8C:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 355u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[17].w[0] + c.r[16].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00346DA4u); st8((c.r[2].w[0] + 36u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_000B(c, 104u, depth + 1u); else { c.pc = 0x0012CEC0u; return; } if (c.pc != 0x00346DA4u) [[unlikely]] return; }
L_00346DA4:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 353u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[17].w[0] + c.r[16].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00346DBCu); st8((c.r[2].w[0] + 154u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_000B(c, 104u, depth + 1u); else { c.pc = 0x0012CEC0u; return; } if (c.pc != 0x00346DBCu) [[unlikely]] return; }
L_00346DBC:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 354u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[17].w[0] + c.r[16].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00346DD4u); st8((c.r[2].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_000B(c, 104u, depth + 1u); else { c.pc = 0x0012CEC0u; return; } if (c.pc != 0x00346DD4u) [[unlikely]] return; }
L_00346DD4:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 364u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[17].w[0] + c.r[16].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00346DECu); st8((c.r[2].w[0] + 626u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_000B(c, 104u, depth + 1u); else { c.pc = 0x0012CEC0u; return; } if (c.pc != 0x00346DECu) [[unlikely]] return; }
L_00346DEC:
    c.r[4].d[0] = ld8((c.r[2].w[0] + 8u));
    set32(c.r[3], c.r[16].w[0] << 3);
    set32(c.r[6], c.r[17].w[0] + c.r[3].w[0]);
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[3].d[0] = c.r[16].sd[0] < 118ll ? 1ull : 0ull;
    st8((c.r[6].w[0] + 744u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].d[0] = ld8((c.r[2].w[0] + 9u));
    st8((c.r[6].w[0] + 745u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].d[0] = ld8((c.r[2].w[0] + 10u));
    st8((c.r[6].w[0] + 746u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].d[0] = ld8((c.r[2].w[0] + 11u));
    st8((c.r[6].w[0] + 747u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].d[0] = ld8((c.r[2].w[0] + 12u));
    st8((c.r[6].w[0] + 748u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[5].d[0] = ld8((c.r[2].w[0] + 13u));
    c.r[4].d[0] = ld8((c.r[2].w[0] + 14u));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 15u));
    st8((c.r[6].w[0] + 749u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[6].w[0] + 750u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 21;
    { const bool t = c.r[3].d[0] != 0ull; st8((c.r[6].w[0] + 751u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00346D80u | kUnwind; return; } goto L_00346D80; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00346E48u);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x00346E48u) [[unlikely]] return; }
L_00346E48:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    set32(c.r[2], ld32((c.r[1].w[0] - 25584u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00346E5Cu); st32((c.r[17].w[0] + 1688u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x00346E5Cu) [[unlikely]] return; }
L_00346E5C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] - 25570u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00346E70u); st8((c.r[17].w[0] + 1692u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x00346E70u) [[unlikely]] return; }
L_00346E70:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.r[2].d[0] = ld8((c.r[1].w[0] - 25576u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00346E84u); st8((c.r[17].w[0] + 1693u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x00346E84u) [[unlikely]] return; }
L_00346E84:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] - 25572u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00346E98u); st8((c.r[17].w[0] + 1694u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x00346E98u) [[unlikely]] return; }
L_00346E98:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[4], 0u + 4u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    set32(c.r[5], 0u + 14u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] - 25571u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00346EB4u); st8((c.r[17].w[0] + 1695u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0076(c, 180u, depth + 1u); else { c.pc = 0x002D9860u; return; } if (c.pc != 0x00346EB4u) [[unlikely]] return; }
L_00346EB4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x6D6E0000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 26392u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00346EC8u); c.r[5].d[0] = c.r[2].d[0] | 18512ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x00346EC8u) [[unlikely]] return; }
L_00346EC8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_00346ED4; } }
    set32(c.r[4], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 1;
L_00346ED4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00346EDCu); set32(c.r[5], 0u + 13u);  if (depth < kMaxDepth) unit_0076(c, 195u, depth + 1u); else { c.pc = 0x002D99C0u; return; } if (c.pc != 0x00346EDCu) [[unlikely]] return; }
L_00346EDC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00346EE4u);  if (depth < kMaxDepth) unit_0051(c, 160u, depth + 1u); else { c.pc = 0x002454D0u; return; } if (c.pc != 0x00346EE4u) [[unlikely]] return; }
L_00346EE4:
    st32((c.r[17].w[0] + 32u), 0u);
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00346F10:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00346FE8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] + 28048u);
    st32((c.r[17].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00346F5C; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00346F5C; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00346F5Cu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00346F5Cu) [[unlikely]] return; }
L_00346F5C:
    st32((c.r[17].w[0] + 12u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 20u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00346F84; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00346F84; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00346F84u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00346F84u) [[unlikely]] return; }
L_00346F84:
    st32((c.r[17].w[0] + 20u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 32u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x72730000u);  if (t) { goto L_00346FB0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00346FAC; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00346FACu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00346FACu) [[unlikely]] return; }
L_00346FAC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x72730000u);
    c.budget -= 1;
L_00346FB0:
    st32((c.r[17].w[0] + 32u), 0u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00346FBCu); c.r[4].d[0] = c.r[2].d[0] | 20566ull;  if (depth < kMaxDepth) unit_0087(c, 60u, depth + 1u); else { c.pc = 0x0031C670u; return; } if (c.pc != 0x00346FBCu) [[unlikely]] return; }
L_00346FBC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00346FC4u);  if (depth < kMaxDepth) unit_0076(c, 186u, depth + 1u); else { c.pc = 0x002D98E0u; return; } if (c.pc != 0x00346FC4u) [[unlikely]] return; }
L_00346FC4:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00346FD0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0010(c, 31u, depth + 1u); else { c.pc = 0x00140700u; return; } if (c.pc != 0x00346FD0u) [[unlikely]] return; }
L_00346FD0:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00346FEC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00346FE8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x00346FE8u) [[unlikely]] return; }
L_00346FE8:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00346FEC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00347000:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00347010:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00347020:
    set32(c.r[29], c.r[29].w[0] - 784u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003477CC; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 44u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0034704Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0034704Cu) [[unlikely]] return; }
L_0034704C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00347BE4; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[3], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[5], 0u + 3u);  if (t) { goto L_003476B0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[5].d[0]; set32(c.r[6], 0u + 2u);  if (t) { goto L_003474E8; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[6].d[0];  if (t) { goto L_00347324; } }
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[5].d[0];  if (t) { goto L_003471D8; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00347090; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_00347BE8; } }
L_00347090:
    set32(c.r[4], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 1104u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 1108u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00347100; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003470ACu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0091(c, 538u, depth + 1u); else { c.pc = 0x00347F30u; return; } if (c.pc != 0x003470ACu) [[unlikely]] return; }
L_003470AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003470B4u);  if (depth < kMaxDepth) unit_0053(c, 75u, depth + 1u); else { c.pc = 0x0024C780u; return; } if (c.pc != 0x003470B4u) [[unlikely]] return; }
L_003470B4:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x63500000u);  if (t) { goto L_003470D4; } }
    set32(c.r[25], ld32((c.r[16].w[0] + 8u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003470D0u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003470D0u) [[unlikely]] return; }
L_003470D0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x63500000u);
    c.budget -= 1;
L_003470D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003470DCu); c.r[4].d[0] = c.r[2].d[0] | 20566ull;  if (depth < kMaxDepth) unit_0087(c, 60u, depth + 1u); else { c.pc = 0x0031C670u; return; } if (c.pc != 0x003470DCu) [[unlikely]] return; }
L_003470DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003470E4u); set32(c.r[4], 0u + 36u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x003470E4u) [[unlikely]] return; }
L_003470E4:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_00347BE4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003470F8u);  if (depth < kMaxDepth) unit_0057(c, 136u, depth + 1u); else { c.pc = 0x0025CED0u; return; } if (c.pc != 0x003470F8u) [[unlikely]] return; }
L_003470F8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00347BE4; } }
L_00347100:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00347184; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00347110u);  if (depth < kMaxDepth) unit_0092(c, 71u, depth + 1u); else { c.pc = 0x00348C50u; return; } if (c.pc != 0x00347110u) [[unlikely]] return; }
L_00347110:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00347118u);  if (depth < kMaxDepth) unit_0084(c, 33u, depth + 1u); else { c.pc = 0x003101F0u; return; } if (c.pc != 0x00347118u) [[unlikely]] return; }
L_00347118:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00347120u); set32(c.r[4], ld32((c.r[16].w[0] + 12u)));  if (depth < kMaxDepth) unit_0092(c, 80u, depth + 1u); else { c.pc = 0x00348D90u; return; } if (c.pc != 0x00347120u) [[unlikely]] return; }
L_00347120:
    set32(c.r[4], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00347144; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00347144; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00347144u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00347144u) [[unlikely]] return; }
L_00347144:
    st32((c.r[16].w[0] + 12u), 0u);
    set32(c.r[2], 0u + 1u);
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00347158u); set32(c.r[4], 0u + 1360u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00347158u) [[unlikely]] return; }
L_00347158:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00347170; } }
    set32(c.r[6], ld32((c.r[16].w[0] + 16u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00347170u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0092(c, 4u, depth + 1u); else { c.pc = 0x00348060u; return; } if (c.pc != 0x00347170u) [[unlikely]] return; }
L_00347170:
    st32((c.r[16].w[0] + 12u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034717Cu); set32(c.r[4], 0u + 8u);  if (depth < kMaxDepth) unit_0076(c, 191u, depth + 1u); else { c.pc = 0x002D9970u; return; } if (c.pc != 0x0034717Cu) [[unlikely]] return; }
L_0034717C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00347BE4; } }
L_00347184:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034718Cu);  if (depth < kMaxDepth) unit_0092(c, 71u, depth + 1u); else { c.pc = 0x00348C50u; return; } if (c.pc != 0x0034718Cu) [[unlikely]] return; }
L_0034718C:
    set32(c.r[4], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[5], 0u + 1u);  if (t) { goto L_003471B4; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003471B0; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003471B0u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003471B0u) [[unlikely]] return; }
L_003471B0:
    set32(c.r[5], 0u + 1u);
    c.budget -= 1;
L_003471B4:
    c.r[4].d[0] = 0ull + 0ull;
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003471C4u); st32((c.r[16].w[0] + 12u), 0u);  if (depth < kMaxDepth) unit_001D(c, 400u, depth + 1u); else { c.pc = 0x00177530u; return; } if (c.pc != 0x003471C4u) [[unlikely]] return; }
L_003471C4:
    set32(c.r[4], 0u + 2u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003471D0u); st32((c.r[16].w[0] + 28u), 0u);  if (depth < kMaxDepth) unit_0076(c, 191u, depth + 1u); else { c.pc = 0x002D9970u; return; } if (c.pc != 0x003471D0u) [[unlikely]] return; }
L_003471D0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00347BE4; } }
L_003471D8:
    set32(c.r[4], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[7], ld32((c.r[4].w[0] + 1104u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 1108u)));
    c.budget -= 5;
    { const bool t = c.r[7].d[0] != c.r[3].d[0];  if (t) { goto L_00347250; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0034720C; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0034720C; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0034720Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0034720Cu) [[unlikely]] return; }
L_0034720C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00347218u); st32((c.r[16].w[0] + 12u), 0u);  if (depth < kMaxDepth) unit_0091(c, 529u, depth + 1u); else { c.pc = 0x00347C90u; return; } if (c.pc != 0x00347218u) [[unlikely]] return; }
L_00347218:
    set32(c.r[4], 0u + 1360u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00347224u); st32((c.r[16].w[0] + 16u), 0u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00347224u) [[unlikely]] return; }
L_00347224:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0034723C; } }
    set32(c.r[6], ld32((c.r[16].w[0] + 16u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034723Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0092(c, 4u, depth + 1u); else { c.pc = 0x00348060u; return; } if (c.pc != 0x0034723Cu) [[unlikely]] return; }
L_0034723C:
    st32((c.r[16].w[0] + 12u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00347248u); set32(c.r[4], 0u + 13u);  if (depth < kMaxDepth) unit_0076(c, 191u, depth + 1u); else { c.pc = 0x002D9970u; return; } if (c.pc != 0x00347248u) [[unlikely]] return; }
L_00347248:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00347BE4; } }
L_00347250:
    c.budget -= 2;
    { const bool t = c.r[7].d[0] != 0ull;  if (t) { goto L_003472C4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00347260u);  if (depth < kMaxDepth) unit_0092(c, 116u, depth + 1u); else { c.pc = 0x00349A80u; return; } if (c.pc != 0x00347260u) [[unlikely]] return; }
L_00347260:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00347268u); set32(c.r[4], ld32((c.r[16].w[0] + 12u)));  if (depth < kMaxDepth) unit_0092(c, 119u, depth + 1u); else { c.pc = 0x00349B10u; return; } if (c.pc != 0x00347268u) [[unlikely]] return; }
L_00347268:
    set32(c.r[4], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0034728C; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0034728C; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0034728Cu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0034728Cu) [[unlikely]] return; }
L_0034728C:
    st32((c.r[16].w[0] + 12u), 0u);
    set32(c.r[2], 0u + 2u);
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003472A0u); set32(c.r[4], 0u + 1360u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x003472A0u) [[unlikely]] return; }
L_003472A0:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003472BC; } }
    set32(c.r[6], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003472B8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0092(c, 4u, depth + 1u); else { c.pc = 0x00348060u; return; } if (c.pc != 0x003472B8u) [[unlikely]] return; }
L_003472B8:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_003472BC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 12u), c.r[4].w[0]);  if (t) { goto L_00347BE4; } }
L_003472C4:
    c.budget -= 2;
    { const bool t = c.r[7].d[0] != c.r[6].d[0];  if (t) { goto L_00347BE4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003472D4u);  if (depth < kMaxDepth) unit_0092(c, 116u, depth + 1u); else { c.pc = 0x00349A80u; return; } if (c.pc != 0x003472D4u) [[unlikely]] return; }
L_003472D4:
    set32(c.r[4], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[5], 0u + 1u);  if (t) { goto L_003472FC; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003472F8; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003472F8u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003472F8u) [[unlikely]] return; }
L_003472F8:
    set32(c.r[5], 0u + 1u);
    c.budget -= 1;
L_003472FC:
    c.r[4].d[0] = 0ull + 0ull;
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034730Cu); st32((c.r[16].w[0] + 12u), 0u);  if (depth < kMaxDepth) unit_001D(c, 400u, depth + 1u); else { c.pc = 0x00177530u; return; } if (c.pc != 0x0034730Cu) [[unlikely]] return; }
L_0034730C:
    set32(c.r[2], 0u + 1u);
    set32(c.r[4], 0u + 2u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034731Cu); st32((c.r[16].w[0] + 28u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0076(c, 191u, depth + 1u); else { c.pc = 0x002D9970u; return; } if (c.pc != 0x0034731Cu) [[unlikely]] return; }
L_0034731C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00347BE4; } }
L_00347324:
    set32(c.r[4], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[7], ld32((c.r[4].w[0] + 1104u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 1108u)));
    c.budget -= 5;
    { const bool t = c.r[7].d[0] != c.r[3].d[0];  if (t) { goto L_00347398; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00347358; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00347358; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00347358u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00347358u) [[unlikely]] return; }
L_00347358:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00347364u); st32((c.r[16].w[0] + 12u), 0u);  if (depth < kMaxDepth) unit_0091(c, 532u, depth + 1u); else { c.pc = 0x00347D20u; return; } if (c.pc != 0x00347364u) [[unlikely]] return; }
L_00347364:
    set32(c.r[2], 0u + 1u);
    set32(c.r[4], 0u + 1360u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00347374u); st32((c.r[16].w[0] + 16u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00347374u) [[unlikely]] return; }
L_00347374:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00347390; } }
    set32(c.r[6], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034738Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0092(c, 4u, depth + 1u); else { c.pc = 0x00348060u; return; } if (c.pc != 0x0034738Cu) [[unlikely]] return; }
L_0034738C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00347390:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 12u), c.r[4].w[0]);  if (t) { goto L_00347BE4; } }
L_00347398:
    c.budget -= 2;
    { const bool t = c.r[7].d[0] != 0ull;  if (t) { goto L_00347420; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003473A8u);  if (depth < kMaxDepth) unit_0092(c, 156u, depth + 1u); else { c.pc = 0x0034A290u; return; } if (c.pc != 0x003473A8u) [[unlikely]] return; }
L_003473A8:
    set32(c.r[4], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003473CC; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003473CC; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003473CCu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003473CCu) [[unlikely]] return; }
L_003473CC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 528u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003473DCu); st32((c.r[16].w[0] + 12u), 0u);  if (depth < kMaxDepth) unit_0091(c, 543u, depth + 1u); else { c.pc = 0x00347FB0u; return; } if (c.pc != 0x003473DCu) [[unlikely]] return; }
L_003473DC:
    set32(c.r[4], 0u + 612u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003473E8u); st32((c.r[16].w[0] + 24u), 0u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x003473E8u) [[unlikely]] return; }
L_003473E8:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[9], 0u + 1u);  if (t) { goto L_00347418; } }
    c.r[5].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0]), c.r[9].d[0]);
    set32(c.r[7], c.r[29].w[0] + 528u);
    set32(c.r[6], ld32((c.r[16].w[0] + 24u)));
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[11], ld32((c.r[16].w[0] + 32u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00347414u); c.r[10].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0085(c, 316u, depth + 1u); else { c.pc = 0x00316BA0u; return; } if (c.pc != 0x00347414u) [[unlikely]] return; }
L_00347414:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00347418:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 20u), c.r[4].w[0]);  if (t) { goto L_00347BE4; } }
L_00347420:
    c.budget -= 2;
    { const bool t = c.r[7].d[0] != c.r[6].d[0];  if (t) { goto L_0034747C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00347430u);  if (depth < kMaxDepth) unit_0092(c, 156u, depth + 1u); else { c.pc = 0x0034A290u; return; } if (c.pc != 0x00347430u) [[unlikely]] return; }
L_00347430:
    set32(c.r[4], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[5], 0u + 1u);  if (t) { goto L_00347458; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00347454; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00347454u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00347454u) [[unlikely]] return; }
L_00347454:
    set32(c.r[5], 0u + 1u);
    c.budget -= 1;
L_00347458:
    c.r[4].d[0] = 0ull + 0ull;
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00347468u); st32((c.r[16].w[0] + 12u), 0u);  if (depth < kMaxDepth) unit_001D(c, 400u, depth + 1u); else { c.pc = 0x00177530u; return; } if (c.pc != 0x00347468u) [[unlikely]] return; }
L_00347468:
    set32(c.r[4], 0u + 2u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00347474u); st32((c.r[16].w[0] + 28u), c.r[4].w[0]);  if (depth < kMaxDepth) unit_0076(c, 191u, depth + 1u); else { c.pc = 0x002D9970u; return; } if (c.pc != 0x00347474u) [[unlikely]] return; }
L_00347474:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00347BE4; } }
L_0034747C:
    c.budget -= 2;
    { const bool t = c.r[7].d[0] != c.r[5].d[0];  if (t) { goto L_00347BE4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034748Cu);  if (depth < kMaxDepth) unit_0092(c, 156u, depth + 1u); else { c.pc = 0x0034A290u; return; } if (c.pc != 0x0034748Cu) [[unlikely]] return; }
L_0034748C:
    set32(c.r[4], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003474B0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003474B0; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003474B0u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003474B0u) [[unlikely]] return; }
L_003474B0:
    st32((c.r[16].w[0] + 12u), 0u);
    set32(c.r[2], 0u + 3u);
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003474C4u); set32(c.r[4], 0u + 1360u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x003474C4u) [[unlikely]] return; }
L_003474C4:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003474E0; } }
    set32(c.r[6], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003474DCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0092(c, 4u, depth + 1u); else { c.pc = 0x00348060u; return; } if (c.pc != 0x003474DCu) [[unlikely]] return; }
L_003474DC:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_003474E0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 12u), c.r[4].w[0]);  if (t) { goto L_00347BE4; } }
L_003474E8:
    set32(c.r[4], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[6], ld32((c.r[4].w[0] + 1104u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 1108u)));
    c.budget -= 5;
    { const bool t = c.r[6].d[0] != c.r[3].d[0];  if (t) { goto L_0034755C; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0034751C; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0034751C; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0034751Cu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0034751Cu) [[unlikely]] return; }
L_0034751C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00347528u); st32((c.r[16].w[0] + 12u), 0u);  if (depth < kMaxDepth) unit_0091(c, 532u, depth + 1u); else { c.pc = 0x00347D20u; return; } if (c.pc != 0x00347528u) [[unlikely]] return; }
L_00347528:
    set32(c.r[2], 0u + 1u);
    set32(c.r[4], 0u + 1360u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00347538u); st32((c.r[16].w[0] + 16u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00347538u) [[unlikely]] return; }
L_00347538:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00347554; } }
    set32(c.r[6], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00347550u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0092(c, 4u, depth + 1u); else { c.pc = 0x00348060u; return; } if (c.pc != 0x00347550u) [[unlikely]] return; }
L_00347550:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00347554:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 12u), c.r[4].w[0]);  if (t) { goto L_00347BE4; } }
L_0034755C:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != 0ull; set32(c.r[3], 0u + 2u);  if (t) { goto L_003475E4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034756Cu);  if (depth < kMaxDepth) unit_0092(c, 156u, depth + 1u); else { c.pc = 0x0034A290u; return; } if (c.pc != 0x0034756Cu) [[unlikely]] return; }
L_0034756C:
    set32(c.r[4], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00347590; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00347590; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00347590u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00347590u) [[unlikely]] return; }
L_00347590:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 288u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003475A0u); st32((c.r[16].w[0] + 12u), 0u);  if (depth < kMaxDepth) unit_0091(c, 543u, depth + 1u); else { c.pc = 0x00347FB0u; return; } if (c.pc != 0x003475A0u) [[unlikely]] return; }
L_003475A0:
    set32(c.r[4], 0u + 612u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003475ACu); st32((c.r[16].w[0] + 24u), 0u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x003475ACu) [[unlikely]] return; }
L_003475AC:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[9], 0u + 1u);  if (t) { goto L_003475DC; } }
    c.r[5].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0]), c.r[9].d[0]);
    set32(c.r[7], c.r[29].w[0] + 288u);
    set32(c.r[6], ld32((c.r[16].w[0] + 24u)));
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[11], ld32((c.r[16].w[0] + 32u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003475D8u); c.r[10].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0085(c, 316u, depth + 1u); else { c.pc = 0x00316BA0u; return; } if (c.pc != 0x003475D8u) [[unlikely]] return; }
L_003475D8:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_003475DC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 20u), c.r[4].w[0]);  if (t) { goto L_00347BE4; } }
L_003475E4:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != c.r[3].d[0];  if (t) { goto L_00347644; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003475F4u);  if (depth < kMaxDepth) unit_0092(c, 156u, depth + 1u); else { c.pc = 0x0034A290u; return; } if (c.pc != 0x003475F4u) [[unlikely]] return; }
L_003475F4:
    set32(c.r[4], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[5], 0u + 1u);  if (t) { goto L_0034761C; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00347618; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00347618u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00347618u) [[unlikely]] return; }
L_00347618:
    set32(c.r[5], 0u + 1u);
    c.budget -= 1;
L_0034761C:
    c.r[4].d[0] = 0ull + 0ull;
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034762Cu); st32((c.r[16].w[0] + 12u), 0u);  if (depth < kMaxDepth) unit_001D(c, 400u, depth + 1u); else { c.pc = 0x00177530u; return; } if (c.pc != 0x0034762Cu) [[unlikely]] return; }
L_0034762C:
    set32(c.r[2], 0u + 3u);
    set32(c.r[4], 0u + 2u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034763Cu); st32((c.r[16].w[0] + 28u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0076(c, 191u, depth + 1u); else { c.pc = 0x002D9970u; return; } if (c.pc != 0x0034763Cu) [[unlikely]] return; }
L_0034763C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00347BE4; } }
L_00347644:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != c.r[5].d[0];  if (t) { goto L_00347BE4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00347654u);  if (depth < kMaxDepth) unit_0092(c, 156u, depth + 1u); else { c.pc = 0x0034A290u; return; } if (c.pc != 0x00347654u) [[unlikely]] return; }
L_00347654:
    set32(c.r[4], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00347678; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00347678; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00347678u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00347678u) [[unlikely]] return; }
L_00347678:
    st32((c.r[16].w[0] + 12u), 0u);
    set32(c.r[2], 0u + 2u);
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034768Cu); set32(c.r[4], 0u + 1360u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0034768Cu) [[unlikely]] return; }
L_0034768C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003476A8; } }
    set32(c.r[6], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003476A4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0092(c, 4u, depth + 1u); else { c.pc = 0x00348060u; return; } if (c.pc != 0x003476A4u) [[unlikely]] return; }
L_003476A4:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_003476A8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 12u), c.r[4].w[0]);  if (t) { goto L_00347BE4; } }
L_003476B0:
    set32(c.r[4], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 1104u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 1108u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00347718; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003476CCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0091(c, 538u, depth + 1u); else { c.pc = 0x00347F30u; return; } if (c.pc != 0x003476CCu) [[unlikely]] return; }
L_003476CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003476D4u);  if (depth < kMaxDepth) unit_0053(c, 75u, depth + 1u); else { c.pc = 0x0024C780u; return; } if (c.pc != 0x003476D4u) [[unlikely]] return; }
L_003476D4:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; set32(c.r[4], 0u + 16u);  if (t) { goto L_003476F4; } }
    set32(c.r[25], ld32((c.r[16].w[0] + 8u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003476F0u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003476F0u) [[unlikely]] return; }
L_003476F0:
    set32(c.r[4], 0u + 16u);
    c.budget -= 1;
L_003476F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003476FCu);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x003476FCu) [[unlikely]] return; }
L_003476FC:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_00347BE4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00347710u);  if (depth < kMaxDepth) unit_0096(c, 68u, depth + 1u); else { c.pc = 0x00358BA0u; return; } if (c.pc != 0x00347710u) [[unlikely]] return; }
L_00347710:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00347BE4; } }
L_00347718:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00347774; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00347728u);  if (depth < kMaxDepth) unit_0092(c, 159u, depth + 1u); else { c.pc = 0x0034A320u; return; } if (c.pc != 0x00347728u) [[unlikely]] return; }
L_00347728:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00347730u);  if (depth < kMaxDepth) unit_0053(c, 75u, depth + 1u); else { c.pc = 0x0024C780u; return; } if (c.pc != 0x00347730u) [[unlikely]] return; }
L_00347730:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; set32(c.r[4], 0u + 16u);  if (t) { goto L_00347750; } }
    set32(c.r[25], ld32((c.r[16].w[0] + 8u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0034774Cu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0034774Cu) [[unlikely]] return; }
L_0034774C:
    set32(c.r[4], 0u + 16u);
    c.budget -= 1;
L_00347750:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00347758u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00347758u) [[unlikely]] return; }
L_00347758:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_00347BE4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034776Cu);  if (depth < kMaxDepth) unit_0096(c, 68u, depth + 1u); else { c.pc = 0x00358BA0u; return; } if (c.pc != 0x0034776Cu) [[unlikely]] return; }
L_0034776C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00347BE4; } }
L_00347774:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034777Cu);  if (depth < kMaxDepth) unit_0092(c, 159u, depth + 1u); else { c.pc = 0x0034A320u; return; } if (c.pc != 0x0034777Cu) [[unlikely]] return; }
L_0034777C:
    set32(c.r[4], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[5], 0u + 1u);  if (t) { goto L_003477A4; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003477A0; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003477A0u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003477A0u) [[unlikely]] return; }
L_003477A0:
    set32(c.r[5], 0u + 1u);
    c.budget -= 1;
L_003477A4:
    c.r[4].d[0] = 0ull + 0ull;
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003477B4u); st32((c.r[16].w[0] + 12u), 0u);  if (depth < kMaxDepth) unit_001D(c, 400u, depth + 1u); else { c.pc = 0x00177530u; return; } if (c.pc != 0x003477B4u) [[unlikely]] return; }
L_003477B4:
    set32(c.r[2], 0u + 4u);
    set32(c.r[4], 0u + 2u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003477C4u); st32((c.r[16].w[0] + 28u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0076(c, 191u, depth + 1u); else { c.pc = 0x002D9970u; return; } if (c.pc != 0x003477C4u) [[unlikely]] return; }
L_003477C4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00347BE4; } }
L_003477CC:
    set32(c.r[4], ld32((c.r[16].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00347A08; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 44u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003477E8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003477E8u) [[unlikely]] return; }
L_003477E8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00347BE4; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 24u)));
    set32(c.r[3], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00347900; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00347810; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00347BE4; } }
L_00347810:
    set32(c.r[4], ld32((c.r[16].w[0] + 20u)));
    c.r[2].d[0] = ld8((c.r[4].w[0] + 584u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00347888; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00347840; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00347840; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00347840u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00347840u) [[unlikely]] return; }
L_00347840:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034784Cu); st32((c.r[16].w[0] + 20u), 0u);  if (depth < kMaxDepth) unit_0091(c, 535u, depth + 1u); else { c.pc = 0x00347DB0u; return; } if (c.pc != 0x0034784Cu) [[unlikely]] return; }
L_0034784C:
    set32(c.r[2], 0u + 2u);
    set32(c.r[4], 0u + 1360u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034785Cu); st32((c.r[16].w[0] + 16u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0034785Cu) [[unlikely]] return; }
L_0034785C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00347874; } }
    set32(c.r[6], ld32((c.r[16].w[0] + 16u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00347874u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0092(c, 4u, depth + 1u); else { c.pc = 0x00348060u; return; } if (c.pc != 0x00347874u) [[unlikely]] return; }
L_00347874:
    st32((c.r[16].w[0] + 12u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00347880u); set32(c.r[4], 0u + 8u);  if (depth < kMaxDepth) unit_0076(c, 191u, depth + 1u); else { c.pc = 0x002D9970u; return; } if (c.pc != 0x00347880u) [[unlikely]] return; }
L_00347880:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00347BE4; } }
L_00347888:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_003478A4; } }
    set32(c.r[25], ld32((c.r[16].w[0] + 8u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003478A4u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003478A4u) [[unlikely]] return; }
L_003478A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003478ACu);  if (depth < kMaxDepth) unit_0053(c, 75u, depth + 1u); else { c.pc = 0x0024C780u; return; } if (c.pc != 0x003478ACu) [[unlikely]] return; }
L_003478AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003478B4u);  if (depth < kMaxDepth) unit_00A5(c, 382u, depth + 1u); else { c.pc = 0x00397200u; return; } if (c.pc != 0x003478B4u) [[unlikely]] return; }
L_003478B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003478BCu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A5(c, 416u, depth + 1u); else { c.pc = 0x00397550u; return; } if (c.pc != 0x003478BCu) [[unlikely]] return; }
L_003478BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003478C4u);  if (depth < kMaxDepth) unit_00A5(c, 380u, depth + 1u); else { c.pc = 0x003971B0u; return; } if (c.pc != 0x003478C4u) [[unlikely]] return; }
L_003478C4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[4], 0u + 1u);
    set32(c.r[2], ld32((c.r[1].w[0] + 3840u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003478D8u); st32((c.r[29].w[0] + 780u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x003478D8u) [[unlikely]] return; }
L_003478D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003478E0u); set32(c.r[4], 0u + 24u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x003478E0u) [[unlikely]] return; }
L_003478E0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_003478F0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003478F0u);  if (depth < kMaxDepth) unit_0057(c, 96u, depth + 1u); else { c.pc = 0x0025CA50u; return; } if (c.pc != 0x003478F0u) [[unlikely]] return; }
L_003478F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003478F8u); set32(c.r[4], ld32((c.r[29].w[0] + 780u)));  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x003478F8u) [[unlikely]] return; }
L_003478F8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00347BE4; } }
L_00347900:
    set32(c.r[4], ld32((c.r[16].w[0] + 20u)));
    c.r[2].d[0] = ld8((c.r[4].w[0] + 584u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00347990; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00347930; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00347930; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00347930u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00347930u) [[unlikely]] return; }
L_00347930:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00347940u); st32((c.r[16].w[0] + 20u), 0u);  if (depth < kMaxDepth) unit_0091(c, 543u, depth + 1u); else { c.pc = 0x00347FB0u; return; } if (c.pc != 0x00347940u) [[unlikely]] return; }
L_00347940:
    set32(c.r[4], 0u + 612u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034794Cu); st32((c.r[16].w[0] + 24u), 0u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0034794Cu) [[unlikely]] return; }
L_0034794C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[9], 0u + 1u);  if (t) { goto L_0034797C; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    st64((c.r[29].w[0]), c.r[9].d[0]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[16].w[0] + 24u)));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[10], ld32((c.r[1].w[0] + 96u)));
    set32(c.r[7], c.r[29].w[0] + 48u);
    set32(c.r[11], ld32((c.r[16].w[0] + 32u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034797Cu); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0085(c, 316u, depth + 1u); else { c.pc = 0x00316BA0u; return; } if (c.pc != 0x0034797Cu) [[unlikely]] return; }
L_0034797C:
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00347988u); set32(c.r[4], 0u + 13u);  if (depth < kMaxDepth) unit_0076(c, 191u, depth + 1u); else { c.pc = 0x002D9970u; return; } if (c.pc != 0x00347988u) [[unlikely]] return; }
L_00347988:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00347BE4; } }
L_00347990:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_003479AC; } }
    set32(c.r[25], ld32((c.r[16].w[0] + 8u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003479ACu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003479ACu) [[unlikely]] return; }
L_003479AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003479B4u);  if (depth < kMaxDepth) unit_0053(c, 75u, depth + 1u); else { c.pc = 0x0024C780u; return; } if (c.pc != 0x003479B4u) [[unlikely]] return; }
L_003479B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003479BCu);  if (depth < kMaxDepth) unit_00A5(c, 382u, depth + 1u); else { c.pc = 0x00397200u; return; } if (c.pc != 0x003479BCu) [[unlikely]] return; }
L_003479BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003479C4u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A5(c, 416u, depth + 1u); else { c.pc = 0x00397550u; return; } if (c.pc != 0x003479C4u) [[unlikely]] return; }
L_003479C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003479CCu);  if (depth < kMaxDepth) unit_00A5(c, 380u, depth + 1u); else { c.pc = 0x003971B0u; return; } if (c.pc != 0x003479CCu) [[unlikely]] return; }
L_003479CC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[4], 0u + 1u);
    set32(c.r[2], ld32((c.r[1].w[0] + 3840u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003479E0u); st32((c.r[29].w[0] + 776u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x003479E0u) [[unlikely]] return; }
L_003479E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003479E8u); set32(c.r[4], 0u + 24u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x003479E8u) [[unlikely]] return; }
L_003479E8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_003479F8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003479F8u);  if (depth < kMaxDepth) unit_0057(c, 96u, depth + 1u); else { c.pc = 0x0025CA50u; return; } if (c.pc != 0x003479F8u) [[unlikely]] return; }
L_003479F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00347A00u); set32(c.r[4], ld32((c.r[29].w[0] + 776u)));  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x00347A00u) [[unlikely]] return; }
L_00347A00:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00347BE4; } }
L_00347A08:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00347A10u);  if (depth < kMaxDepth) unit_001D(c, 405u, depth + 1u); else { c.pc = 0x00177600u; return; } if (c.pc != 0x00347A10u) [[unlikely]] return; }
L_00347A10:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00347BE4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00347A20u);  if (depth < kMaxDepth) unit_001D(c, 405u, depth + 1u); else { c.pc = 0x00177600u; return; } if (c.pc != 0x00347A20u) [[unlikely]] return; }
L_00347A20:
    c.r[3].d[0] = ld8((c.r[2].w[0] + 57u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00347BE4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x72730000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00347A38u); c.r[4].d[0] = c.r[2].d[0] | 20566ull;  if (depth < kMaxDepth) unit_0087(c, 60u, depth + 1u); else { c.pc = 0x0031C670u; return; } if (c.pc != 0x00347A38u) [[unlikely]] return; }
L_00347A38:
    set32(c.r[2], 0u + 13407u);
    set32(c.r[3], 0u + 13312u);
    st16((c.r[29].w[0] + 774u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x72730000u);
    st16((c.r[29].w[0] + 772u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[4], c.r[4].w[0] - 7600u);
    set32(c.r[5], c.r[29].w[0] + 772u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00347A60u); c.r[6].d[0] = c.r[2].d[0] | 20566ull;  if (depth < kMaxDepth) unit_0087(c, 54u, depth + 1u); else { c.pc = 0x0031C5D0u; return; } if (c.pc != 0x00347A60u) [[unlikely]] return; }
L_00347A60:
    set32(c.r[4], ld32((c.r[16].w[0] + 28u)));
    set32(c.r[3], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 3u);  if (t) { goto L_00347BA8; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00347B64; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_00347B20; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00347ADC; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00347A9C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00347BE4; } }
L_00347A9C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00347AA4u);  if (depth < kMaxDepth) unit_001D(c, 403u, depth + 1u); else { c.pc = 0x001775B0u; return; } if (c.pc != 0x00347AA4u) [[unlikely]] return; }
L_00347AA4:
    set32(c.r[4], 0u + 1360u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00347AB0u); st32((c.r[16].w[0] + 16u), 0u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00347AB0u) [[unlikely]] return; }
L_00347AB0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00347AC8; } }
    set32(c.r[6], ld32((c.r[16].w[0] + 16u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00347AC8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0092(c, 4u, depth + 1u); else { c.pc = 0x00348060u; return; } if (c.pc != 0x00347AC8u) [[unlikely]] return; }
L_00347AC8:
    st32((c.r[16].w[0] + 12u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00347AD4u); set32(c.r[4], 0u + 13u);  if (depth < kMaxDepth) unit_0076(c, 191u, depth + 1u); else { c.pc = 0x002D9970u; return; } if (c.pc != 0x00347AD4u) [[unlikely]] return; }
L_00347AD4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00347BE4; } }
L_00347ADC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00347AE4u);  if (depth < kMaxDepth) unit_001D(c, 403u, depth + 1u); else { c.pc = 0x001775B0u; return; } if (c.pc != 0x00347AE4u) [[unlikely]] return; }
L_00347AE4:
    set32(c.r[2], 0u + 1u);
    set32(c.r[4], 0u + 1360u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00347AF4u); st32((c.r[16].w[0] + 16u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00347AF4u) [[unlikely]] return; }
L_00347AF4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00347B0C; } }
    set32(c.r[6], ld32((c.r[16].w[0] + 16u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00347B0Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0092(c, 4u, depth + 1u); else { c.pc = 0x00348060u; return; } if (c.pc != 0x00347B0Cu) [[unlikely]] return; }
L_00347B0C:
    st32((c.r[16].w[0] + 12u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00347B18u); set32(c.r[4], 0u + 8u);  if (depth < kMaxDepth) unit_0076(c, 191u, depth + 1u); else { c.pc = 0x002D9970u; return; } if (c.pc != 0x00347B18u) [[unlikely]] return; }
L_00347B18:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00347BE4; } }
L_00347B20:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00347B28u);  if (depth < kMaxDepth) unit_001D(c, 403u, depth + 1u); else { c.pc = 0x001775B0u; return; } if (c.pc != 0x00347B28u) [[unlikely]] return; }
L_00347B28:
    set32(c.r[2], 0u + 2u);
    set32(c.r[4], 0u + 1360u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00347B38u); st32((c.r[16].w[0] + 16u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00347B38u) [[unlikely]] return; }
L_00347B38:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00347B50; } }
    set32(c.r[6], ld32((c.r[16].w[0] + 16u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00347B50u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0092(c, 4u, depth + 1u); else { c.pc = 0x00348060u; return; } if (c.pc != 0x00347B50u) [[unlikely]] return; }
L_00347B50:
    st32((c.r[16].w[0] + 12u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00347B5Cu); set32(c.r[4], 0u + 8u);  if (depth < kMaxDepth) unit_0076(c, 191u, depth + 1u); else { c.pc = 0x002D9970u; return; } if (c.pc != 0x00347B5Cu) [[unlikely]] return; }
L_00347B5C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00347BE4; } }
L_00347B64:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00347B6Cu);  if (depth < kMaxDepth) unit_001D(c, 403u, depth + 1u); else { c.pc = 0x001775B0u; return; } if (c.pc != 0x00347B6Cu) [[unlikely]] return; }
L_00347B6C:
    set32(c.r[2], 0u + 3u);
    set32(c.r[4], 0u + 1360u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00347B7Cu); st32((c.r[16].w[0] + 16u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00347B7Cu) [[unlikely]] return; }
L_00347B7C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00347B94; } }
    set32(c.r[6], ld32((c.r[16].w[0] + 16u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00347B94u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0092(c, 4u, depth + 1u); else { c.pc = 0x00348060u; return; } if (c.pc != 0x00347B94u) [[unlikely]] return; }
L_00347B94:
    st32((c.r[16].w[0] + 12u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00347BA0u); set32(c.r[4], 0u + 8u);  if (depth < kMaxDepth) unit_0076(c, 191u, depth + 1u); else { c.pc = 0x002D9970u; return; } if (c.pc != 0x00347BA0u) [[unlikely]] return; }
L_00347BA0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00347BE4; } }
L_00347BA8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00347BB0u);  if (depth < kMaxDepth) unit_001D(c, 403u, depth + 1u); else { c.pc = 0x001775B0u; return; } if (c.pc != 0x00347BB0u) [[unlikely]] return; }
L_00347BB0:
    set32(c.r[2], 0u + 4u);
    set32(c.r[4], 0u + 1360u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00347BC0u); st32((c.r[16].w[0] + 16u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00347BC0u) [[unlikely]] return; }
L_00347BC0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00347BD8; } }
    set32(c.r[6], ld32((c.r[16].w[0] + 16u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00347BD8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0092(c, 4u, depth + 1u); else { c.pc = 0x00348060u; return; } if (c.pc != 0x00347BD8u) [[unlikely]] return; }
L_00347BD8:
    st32((c.r[16].w[0] + 12u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00347BE4u); set32(c.r[4], 0u + 13u);  if (depth < kMaxDepth) unit_0076(c, 191u, depth + 1u); else { c.pc = 0x002D9970u; return; } if (c.pc != 0x00347BE4u) [[unlikely]] return; }
L_00347BE4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_00347BE8:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 784u);  c.pc = t; return; }
L_00347C00:
    c.r[8].d[0] = 0ull + 0ull;
    c.r[6].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[6], c.r[6].w[0] + 25680u);
    c.budget -= 3;
L_00347C0C:
    set32(c.r[5], c.r[4].w[0] + c.r[8].w[0]);
    set32(c.r[3], c.r[8].w[0] << 1);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 36u)));
    set32(c.r[3], c.r[3].w[0] + c.r[8].w[0]);
    set32(c.r[3], c.r[3].w[0] << 3);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[3], c.r[3].w[0] - c.r[8].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[8], c.r[8].w[0] + 1u);
    set32(c.r[5], c.r[6].w[0] + c.r[3].w[0]);
    set32(c.r[1], c.r[5].w[0] + c.r[1].w[0]);
    c.r[3].d[0] = c.r[8].sd[0] < 86ll ? 1ull : 0ull;
    c.budget -= 14;
    { const bool t = c.r[3].d[0] != 0ull; st8((c.r[1].w[0] - 21401u), static_cast<std::uint8_t>(c.r[7].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00347C0Cu | kUnwind; return; } goto L_00347C0C; } }
    set32(c.r[8], 0u + 86u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[6], c.r[6].w[0] + 25680u);
    c.budget -= 3;
L_00347C50:
    set32(c.r[5], c.r[4].w[0] + c.r[8].w[0]);
    set32(c.r[3], c.r[8].w[0] << 3);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 36u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[5], c.r[3].w[0] - c.r[8].w[0]);
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[8], c.r[8].w[0] + 1u);
    set32(c.r[5], c.r[5].w[0] + c.r[3].w[0]);
    set32(c.r[5], c.r[5].w[0] << 5);
    c.r[3].d[0] = c.r[8].sd[0] < 118ll ? 1ull : 0ull;
    set32(c.r[5], c.r[6].w[0] + c.r[5].w[0]);
    set32(c.r[1], c.r[5].w[0] + c.r[1].w[0]);
    c.budget -= 14;
    { const bool t = c.r[3].d[0] != 0ull; st8((c.r[1].w[0] - 30413u), static_cast<std::uint8_t>(c.r[7].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00347C50u | kUnwind; return; } goto L_00347C50; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00347C90:
    c.r[8].d[0] = 0ull + 0ull;
    c.r[6].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[6], c.r[6].w[0] + 25680u);
    c.budget -= 3;
L_00347C9C:
    set32(c.r[5], c.r[4].w[0] + c.r[8].w[0]);
    set32(c.r[3], c.r[8].w[0] << 1);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 154u)));
    set32(c.r[3], c.r[3].w[0] + c.r[8].w[0]);
    set32(c.r[3], c.r[3].w[0] << 3);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[3], c.r[3].w[0] - c.r[8].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[8], c.r[8].w[0] + 1u);
    set32(c.r[5], c.r[6].w[0] + c.r[3].w[0]);
    set32(c.r[1], c.r[5].w[0] + c.r[1].w[0]);
    c.r[3].d[0] = c.r[8].sd[0] < 86ll ? 1ull : 0ull;
    c.budget -= 14;
    { const bool t = c.r[3].d[0] != 0ull; st8((c.r[1].w[0] - 21403u), static_cast<std::uint8_t>(c.r[7].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00347C9Cu | kUnwind; return; } goto L_00347C9C; } }
    set32(c.r[8], 0u + 86u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[6], c.r[6].w[0] + 25680u);
    c.budget -= 3;
L_00347CE0:
    set32(c.r[5], c.r[4].w[0] + c.r[8].w[0]);
    set32(c.r[3], c.r[8].w[0] << 3);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 154u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[5], c.r[3].w[0] - c.r[8].w[0]);
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[8], c.r[8].w[0] + 1u);
    set32(c.r[5], c.r[5].w[0] + c.r[3].w[0]);
    set32(c.r[5], c.r[5].w[0] << 5);
    c.r[3].d[0] = c.r[8].sd[0] < 118ll ? 1ull : 0ull;
    set32(c.r[5], c.r[6].w[0] + c.r[5].w[0]);
    set32(c.r[1], c.r[5].w[0] + c.r[1].w[0]);
    c.budget -= 14;
    { const bool t = c.r[3].d[0] != 0ull; st8((c.r[1].w[0] - 30415u), static_cast<std::uint8_t>(c.r[7].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00347CE0u | kUnwind; return; } goto L_00347CE0; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00347D20:
    c.r[8].d[0] = 0ull + 0ull;
    c.r[6].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[6], c.r[6].w[0] + 25680u);
    c.budget -= 3;
L_00347D2C:
    set32(c.r[5], c.r[4].w[0] + c.r[8].w[0]);
    set32(c.r[3], c.r[8].w[0] << 1);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 272u)));
    set32(c.r[3], c.r[3].w[0] + c.r[8].w[0]);
    set32(c.r[3], c.r[3].w[0] << 3);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[3], c.r[3].w[0] - c.r[8].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[8], c.r[8].w[0] + 1u);
    set32(c.r[5], c.r[6].w[0] + c.r[3].w[0]);
    set32(c.r[1], c.r[5].w[0] + c.r[1].w[0]);
    c.r[3].d[0] = c.r[8].sd[0] < 86ll ? 1ull : 0ull;
    c.budget -= 14;
    { const bool t = c.r[3].d[0] != 0ull; st8((c.r[1].w[0] - 21402u), static_cast<std::uint8_t>(c.r[7].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00347D2Cu | kUnwind; return; } goto L_00347D2C; } }
    set32(c.r[8], 0u + 86u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[6], c.r[6].w[0] + 25680u);
    c.budget -= 3;
L_00347D70:
    set32(c.r[5], c.r[4].w[0] + c.r[8].w[0]);
    set32(c.r[3], c.r[8].w[0] << 3);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 272u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[5], c.r[3].w[0] - c.r[8].w[0]);
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[8], c.r[8].w[0] + 1u);
    set32(c.r[5], c.r[5].w[0] + c.r[3].w[0]);
    set32(c.r[5], c.r[5].w[0] << 5);
    c.r[3].d[0] = c.r[8].sd[0] < 118ll ? 1ull : 0ull;
    set32(c.r[5], c.r[6].w[0] + c.r[5].w[0]);
    set32(c.r[1], c.r[5].w[0] + c.r[1].w[0]);
    c.budget -= 14;
    { const bool t = c.r[3].d[0] != 0ull; st8((c.r[1].w[0] - 30414u), static_cast<std::uint8_t>(c.r[7].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00347D70u | kUnwind; return; } goto L_00347D70; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00347DB0:
    c.r[11].d[0] = 0ull + 0ull;
    c.r[9].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[9], c.r[9].w[0] + 25680u);
    c.budget -= 3;
L_00347DBC:
    set32(c.r[5], c.r[11].w[0] << 1);
    set32(c.r[3], c.r[4].w[0] + c.r[11].w[0]);
    set32(c.r[6], c.r[5].w[0] + c.r[11].w[0]);
    c.r[1].d[0] = 0ull | 43793ull;
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 626u)));
    set32(c.r[6], c.r[6].w[0] << 3);
    set32(c.r[6], c.r[6].w[0] - c.r[11].w[0]);
    set32(c.r[3], c.r[11].w[0] << 3);
    set32(c.r[10], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[11], c.r[11].w[0] + 1u);
    set32(c.r[3], c.r[6].w[0] << 4);
    set32(c.r[6], c.r[9].w[0] + c.r[3].w[0]);
    set32(c.r[8], c.r[6].w[0] + c.r[1].w[0]);
    c.r[3].d[0] = c.r[11].sd[0] < 86ll ? 1ull : 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[6].w[0] + c.r[1].w[0]);
    st8((c.r[1].w[0] - 21392u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].d[0] = ld8((c.r[10].w[0] + 744u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[6].w[0] + c.r[1].w[0]);
    st8((c.r[1].w[0] - 21748u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].d[0] = ld8((c.r[10].w[0] + 745u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[6].w[0] + c.r[1].w[0]);
    st8((c.r[1].w[0] - 21747u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].d[0] = ld8((c.r[10].w[0] + 746u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[6].w[0] + c.r[1].w[0]);
    st8((c.r[1].w[0] - 21746u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].d[0] = ld8((c.r[10].w[0] + 747u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[6].w[0] + c.r[1].w[0]);
    st8((c.r[1].w[0] - 21745u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].d[0] = ld8((c.r[10].w[0] + 748u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[6].w[0] + c.r[1].w[0]);
    st8((c.r[1].w[0] - 21744u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[7].d[0] = ld8((c.r[10].w[0] + 749u));
    c.r[6].d[0] = ld8((c.r[10].w[0] + 750u));
    c.r[5].d[0] = ld8((c.r[10].w[0] + 751u));
    st8((c.r[8].w[0]), static_cast<std::uint8_t>(c.r[7].w[0]));
    st8((c.r[8].w[0] + 1u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.budget -= 44;
    { const bool t = c.r[3].d[0] != 0ull; st8((c.r[8].w[0] + 2u), static_cast<std::uint8_t>(c.r[5].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00347DBCu | kUnwind; return; } goto L_00347DBC; } }
    set32(c.r[11], 0u + 86u);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[9], c.r[9].w[0] + 25680u);
    c.budget -= 3;
L_00347E78:
    set32(c.r[3], c.r[4].w[0] + c.r[11].w[0]);
    set32(c.r[7], c.r[11].w[0] << 3);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 626u)));
    set32(c.r[6], c.r[7].w[0] - c.r[11].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0xFFFE0000u);
    set32(c.r[10], c.r[4].w[0] + c.r[7].w[0]);
    c.r[1].d[0] = c.r[1].d[0] | 34781ull;
    set32(c.r[11], c.r[11].w[0] + 1u);
    set32(c.r[3], c.r[6].w[0] << 2);
    set32(c.r[3], c.r[6].w[0] + c.r[3].w[0]);
    set32(c.r[6], c.r[3].w[0] << 5);
    set32(c.r[6], c.r[9].w[0] + c.r[6].w[0]);
    c.r[3].d[0] = c.r[11].sd[0] < 118ll ? 1ull : 0ull;
    set32(c.r[8], c.r[6].w[0] + c.r[1].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[1], c.r[6].w[0] + c.r[1].w[0]);
    st8((c.r[1].w[0] - 30404u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].d[0] = ld8((c.r[10].w[0] + 744u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[1], c.r[6].w[0] + c.r[1].w[0]);
    st8((c.r[1].w[0] - 30760u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].d[0] = ld8((c.r[10].w[0] + 745u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[1], c.r[6].w[0] + c.r[1].w[0]);
    st8((c.r[1].w[0] - 30759u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].d[0] = ld8((c.r[10].w[0] + 746u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[1], c.r[6].w[0] + c.r[1].w[0]);
    st8((c.r[1].w[0] - 30758u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].d[0] = ld8((c.r[10].w[0] + 747u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[1], c.r[6].w[0] + c.r[1].w[0]);
    st8((c.r[1].w[0] - 30757u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].d[0] = ld8((c.r[10].w[0] + 748u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[1], c.r[6].w[0] + c.r[1].w[0]);
    st8((c.r[1].w[0] - 30756u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[7].d[0] = ld8((c.r[10].w[0] + 749u));
    c.r[6].d[0] = ld8((c.r[10].w[0] + 750u));
    c.r[5].d[0] = ld8((c.r[10].w[0] + 751u));
    st8((c.r[8].w[0]), static_cast<std::uint8_t>(c.r[7].w[0]));
    st8((c.r[8].w[0] + 1u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.budget -= 44;
    { const bool t = c.r[3].d[0] != 0ull; st8((c.r[8].w[0] + 2u), static_cast<std::uint8_t>(c.r[5].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00347E78u | kUnwind; return; } goto L_00347E78; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00347F30:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00347F44u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0091(c, 526u, depth + 1u); else { c.pc = 0x00347C00u; return; } if (c.pc != 0x00347F44u) [[unlikely]] return; }
L_00347F44:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00347F4Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0091(c, 529u, depth + 1u); else { c.pc = 0x00347C90u; return; } if (c.pc != 0x00347F4Cu) [[unlikely]] return; }
L_00347F4C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00347F54u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0091(c, 532u, depth + 1u); else { c.pc = 0x00347D20u; return; } if (c.pc != 0x00347F54u) [[unlikely]] return; }
L_00347F54:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00347F5Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0091(c, 535u, depth + 1u); else { c.pc = 0x00347DB0u; return; } if (c.pc != 0x00347F5Cu) [[unlikely]] return; }
L_00347F5C:
    set32(c.r[3], ld32((c.r[16].w[0] + 1688u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    st32((c.r[1].w[0] + 96u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1692u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    st8((c.r[1].w[0] + 110u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 1693u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    st8((c.r[1].w[0] + 104u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1694u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    st8((c.r[1].w[0] + 108u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1695u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    st8((c.r[1].w[0] + 109u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 19;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00347FB0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const bool t = c.r[18].d[0] != 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_00347FD8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { [[clang::musttail]] return unit_0092(c, 3u, depth); } }
L_00347FD8:
    c.r[17].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 2;
L_00347FE0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00347FE8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 104u, depth + 1u); else { c.pc = 0x0012CEC0u; return; } if (c.pc != 0x00347FE8u) [[unlikely]] return; }
L_00347FE8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 355u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_0092(c, 2u, depth); } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 4u);  if (t) { [[clang::musttail]] return unit_0092(c, 2u, depth); } }
    [[clang::musttail]] return unit_0092(c, 1u, depth);
}

}
