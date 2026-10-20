#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_009B[4096] = {
    1, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0,
    0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 8, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 12, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    16, 0, 0, 0, 0, 0, 0, 17, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 28,
    0, 0, 29, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32,
    0, 0, 0, 0, 33, 0, 0, 0, 34, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 42, 0, 0, 43, 0, 0,
    44, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 47, 0, 48, 0, 49, 0, 50, 0, 0, 0, 0, 51, 0, 0, 0,
    0, 52, 0, 53, 0, 54, 0, 55, 0, 0, 0, 0, 56, 0, 0, 0, 0, 57, 0, 58, 0, 59, 0, 60, 0, 0, 0, 0, 61, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 67,
    0, 0, 68, 0, 0, 69, 0, 0, 70, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 73, 0, 74, 0, 75, 0, 76,
    0, 0, 0, 0, 77, 0, 0, 0, 0, 78, 0, 79, 0, 80, 0, 81, 0, 0, 0, 0, 82, 0, 0, 0, 0, 83, 0, 84, 0, 85, 0, 86,
    0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 90, 0, 91, 0, 0, 0, 92, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 95, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 100, 0, 0, 0, 101, 0, 0, 102, 0, 0, 0, 0, 0,
    103, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 105, 0, 106, 0, 0, 0, 107, 0, 108, 0, 0, 0, 0, 0, 0, 109, 0, 0, 0,
    0, 110, 0, 111, 0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 115, 0, 116, 0, 0, 0, 117, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 120, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 121, 0, 0, 0, 122, 0, 0, 0, 0, 0, 0,
    123, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 125, 0, 0, 0, 126, 0, 0, 127, 0,
    0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 130, 0, 0, 0, 131, 0, 132, 0, 133, 0, 0, 0, 0, 0, 0,
    134, 0, 0, 0, 0, 135, 0, 136, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 139, 0,
    140, 0, 0, 0, 0, 0, 0, 0, 0, 141, 0, 142, 0, 0, 0, 0, 0, 0, 143, 0, 0, 144, 0, 0, 145, 0, 0, 146, 0, 0, 147, 0,
    0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 149, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    150, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 152, 0, 0, 0, 153,
    0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 156, 0, 157, 0, 158, 0, 0, 159, 0, 0, 160, 0, 0, 161,
    0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 163, 0, 164, 0, 0, 165, 0, 0, 0, 166, 0, 0, 0, 167, 0, 168, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 170, 0, 0, 0, 0, 171, 0, 172, 0, 173, 0, 0, 0, 0, 0, 174, 0, 0, 0,
    175, 0, 176, 0, 0, 177, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0, 181, 0, 182,
    0, 0, 183, 0, 0, 184, 0, 0, 185, 0, 0, 186, 0, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 190, 0, 0, 0, 0, 0, 191, 0, 0, 0, 192, 0, 0, 193, 0, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0,
    0, 196, 0, 0, 197, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 199, 0, 0, 0, 0, 0, 0, 0, 0, 200, 0, 0, 201, 0, 0, 0,
    202, 0, 0, 0, 203, 0, 204, 0, 0, 205, 0, 0, 206, 0, 0, 0, 0, 207, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    209, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 210, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 211, 0, 212, 0, 0, 213, 0, 0, 214, 0, 0, 215, 0,
    0, 216, 0, 0, 0, 0, 0, 0, 0, 217, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 218, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    219, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 220, 0, 0, 0, 0, 0, 221, 0, 0, 0, 222,
    0, 0, 0, 0, 0, 223, 0, 0, 0, 0, 0, 0, 224, 0, 0, 0, 0, 225, 0, 0, 226, 0, 0, 0, 0, 0, 227, 0, 0, 0, 0, 0,
    228, 0, 0, 0, 0, 0, 0, 0, 0, 0, 229, 0, 230, 0, 0, 0, 231, 0, 232, 0, 0, 0, 0, 0, 233, 0, 0, 0, 234, 0, 235, 0,
    0, 236, 0, 0, 237, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 238, 0, 0, 239, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 240, 0, 0, 241, 0, 0, 242, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    243, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 244, 0, 0, 0, 245, 0, 0,
    246, 0, 0, 247, 0, 0, 0, 0, 0, 248, 0, 0, 0, 0, 0, 0, 249, 0, 0, 0, 0, 0, 250, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 251, 0, 0, 0, 0, 0, 252, 0, 0, 0, 253, 0, 0, 0, 0, 254, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 256, 0,
    257, 0, 0, 0, 0, 0, 0, 0, 0, 258, 0, 0, 0, 0, 0, 0, 259, 0, 0, 0, 260, 0, 0, 0, 0, 0, 261, 0, 0, 0, 262, 0,
    0, 0, 263, 0, 0, 0, 264, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 265, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 266, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    267, 0, 0, 0, 0, 268, 0, 0, 0, 0, 0, 0, 269, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 270, 0, 0, 0, 0, 0, 0, 0, 0,
    271, 0, 0, 0, 0, 272, 0, 0, 0, 0, 0, 0, 273, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 274, 0, 0, 0, 0, 0, 0, 0, 0,
    275, 0, 0, 0, 0, 0, 0, 276, 0, 0, 0, 0, 277, 0, 0, 0, 0, 0, 0, 0, 278, 0, 0, 0, 0, 0, 0, 279, 0, 0, 0, 0,
    0, 0, 0, 0, 280, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 281, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 282, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 283, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 284, 0, 285, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 286, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 287, 0, 0, 0, 288, 0, 0, 0, 289, 0, 0, 0, 0, 0, 0, 0, 0, 0, 290, 0, 0, 0, 0, 0, 0, 0, 291, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 292,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 293, 0, 0, 0, 0, 294, 0, 0, 0, 0, 0, 295, 0, 0, 0, 0, 296, 0, 0, 0,
    0, 297, 0, 0, 0, 0, 0, 298, 0, 0, 0, 0, 299, 0, 0, 0, 300, 0, 0, 0, 0, 301, 0, 0, 0, 0, 0, 302, 0, 0, 0, 0,
    303, 0, 0, 0, 0, 304, 0, 0, 0, 0, 0, 305, 0, 0, 0, 0, 306, 0, 0, 0, 307, 0, 0, 0, 308, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 309, 0, 0, 0, 310, 0, 0, 0, 0, 0, 0, 0, 311, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 312,
    0, 0, 0, 0, 313, 0, 0, 314, 0, 0, 0, 0, 0, 315, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 316, 0, 0, 0, 0, 317, 0, 0, 318, 0, 0, 0, 0, 0, 319, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 320, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 321, 0, 322, 0, 0, 0, 0, 0, 0, 0, 0, 323, 0, 0, 0, 0, 0, 324, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 325, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 326, 0, 327, 0, 0, 0, 0, 0, 0, 0, 0, 328,
    0, 0, 0, 329, 0, 0, 0, 0, 0, 0, 0, 330, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    331, 0, 0, 0, 0, 332, 0, 0, 0, 0, 333, 0, 0, 334, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 335, 0, 0, 0, 0, 0, 0, 0, 0, 336, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 337, 0, 0, 0, 0, 0, 0, 0, 0, 0, 338, 0, 0, 0, 0, 0, 0, 0, 0, 0, 339, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 340, 0, 0, 0, 0, 0, 0, 0, 0, 0, 341, 0, 0, 0, 0, 0, 0, 0, 0, 0, 342, 0, 0, 0, 0, 0, 343, 0, 0, 0,
    0, 0, 0, 0, 344, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 345, 0, 0, 0, 0, 0, 0, 0, 346,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 347, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 348, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 349, 0, 0, 0, 0, 0, 0, 0, 350, 0, 0, 0, 351, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 352, 0, 0, 0, 0, 0, 353, 0, 0, 0, 0, 0, 0, 0, 354, 0, 0, 0, 355, 0, 0, 0,
    356, 0, 0, 0, 357, 0, 0, 0, 358, 0, 0, 0, 359, 0, 0, 0, 360, 0, 0, 0, 361, 0, 0, 0, 362, 0, 0, 0, 363, 0, 0, 0,
    364, 0, 0, 0, 365, 0, 0, 0, 366, 0, 0, 0, 367, 0, 0, 0, 368, 0, 0, 0, 369, 0, 0, 0, 370, 0, 0, 0, 371, 0, 0, 0,
    372, 0, 0, 0, 373, 0, 0, 0, 374, 0, 0, 0, 375, 0, 0, 0, 376, 0, 0, 0, 377, 0, 0, 0, 378, 0, 0, 0, 379, 0, 0, 0,
    380, 0, 0, 0, 381, 0, 0, 0, 382, 0, 0, 0, 0, 0, 0, 383, 0, 0, 0, 0, 0, 0, 384, 0, 0, 0, 0, 0, 0, 385, 0, 0,
    0, 0, 0, 0, 386, 0, 0, 0, 0, 0, 0, 387, 0, 0, 0, 0, 0, 0, 388, 0, 0, 0, 0, 0, 0, 389, 0, 0, 0, 0, 0, 0,
    390, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 391, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 392, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 393, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    394, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 395, 0, 0, 0, 0, 0, 0, 396, 0, 0, 0, 0, 0, 0, 0, 0, 0, 397, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 398, 0, 399, 0, 400, 0, 401, 0, 402, 0, 403, 0, 404, 0, 405, 0, 406, 0, 407, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 408, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 409, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 410, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    411, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 412, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 413, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 414, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 415, 0, 0, 0, 416, 0, 0, 0, 0, 0, 0, 0, 0, 0, 417, 0, 0, 0, 0, 0, 0, 0, 0, 0, 418, 0, 419, 0,
    420, 0, 421, 0, 422, 0, 423, 0, 424, 0, 425, 0, 426, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 427, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 428, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 429, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 430, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 431, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 432, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 433, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_009B(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_0036C000;
    case 2u: goto L_0036C020;
    case 3u: goto L_0036C05C;
    case 4u: goto L_0036C0B0;
    case 5u: goto L_0036C0F8;
    case 6u: goto L_0036C110;
    case 7u: goto L_0036C130;
    case 8u: goto L_0036C144;
    case 9u: goto L_0036C14C;
    case 10u: goto L_0036C180;
    case 11u: goto L_0036C1A8;
    case 12u: goto L_0036C1BC;
    case 13u: goto L_0036C1D0;
    case 14u: goto L_0036C230;
    case 15u: goto L_0036C258;
    case 16u: goto L_0036C280;
    case 17u: goto L_0036C29C;
    case 18u: goto L_0036C2A8;
    case 19u: goto L_0036C2D4;
    case 20u: goto L_0036C31C;
    case 21u: goto L_0036C330;
    case 22u: goto L_0036C350;
    case 23u: goto L_0036C38C;
    case 24u: goto L_0036C3BC;
    case 25u: goto L_0036C3E0;
    case 26u: goto L_0036C420;
    case 27u: goto L_0036C46C;
    case 28u: goto L_0036C47C;
    case 29u: goto L_0036C488;
    case 30u: goto L_0036C4A0;
    case 31u: goto L_0036C4C0;
    case 32u: goto L_0036C4FC;
    case 33u: goto L_0036C510;
    case 34u: goto L_0036C520;
    case 35u: goto L_0036C530;
    case 36u: goto L_0036C5B4;
    case 37u: goto L_0036C61C;
    case 38u: goto L_0036C68C;
    case 39u: goto L_0036C6E4;
    case 40u: goto L_0036C710;
    case 41u: goto L_0036C75C;
    case 42u: goto L_0036C768;
    case 43u: goto L_0036C774;
    case 44u: goto L_0036C780;
    case 45u: goto L_0036C798;
    case 46u: goto L_0036C7B0;
    case 47u: goto L_0036C7C4;
    case 48u: goto L_0036C7CC;
    case 49u: goto L_0036C7D4;
    case 50u: goto L_0036C7DC;
    case 51u: goto L_0036C7F0;
    case 52u: goto L_0036C804;
    case 53u: goto L_0036C80C;
    case 54u: goto L_0036C814;
    case 55u: goto L_0036C81C;
    case 56u: goto L_0036C830;
    case 57u: goto L_0036C844;
    case 58u: goto L_0036C84C;
    case 59u: goto L_0036C854;
    case 60u: goto L_0036C85C;
    case 61u: goto L_0036C870;
    case 62u: goto L_0036C8D8;
    case 63u: goto L_0036C944;
    case 64u: goto L_0036C9B4;
    case 65u: goto L_0036CA0C;
    case 66u: goto L_0036CA30;
    case 67u: goto L_0036CA7C;
    case 68u: goto L_0036CA88;
    case 69u: goto L_0036CA94;
    case 70u: goto L_0036CAA0;
    case 71u: goto L_0036CAB8;
    case 72u: goto L_0036CAD0;
    case 73u: goto L_0036CAE4;
    case 74u: goto L_0036CAEC;
    case 75u: goto L_0036CAF4;
    case 76u: goto L_0036CAFC;
    case 77u: goto L_0036CB10;
    case 78u: goto L_0036CB24;
    case 79u: goto L_0036CB2C;
    case 80u: goto L_0036CB34;
    case 81u: goto L_0036CB3C;
    case 82u: goto L_0036CB50;
    case 83u: goto L_0036CB64;
    case 84u: goto L_0036CB6C;
    case 85u: goto L_0036CB74;
    case 86u: goto L_0036CB7C;
    case 87u: goto L_0036CB90;
    case 88u: goto L_0036CBAC;
    case 89u: goto L_0036CC10;
    case 90u: goto L_0036CC84;
    case 91u: goto L_0036CC8C;
    case 92u: goto L_0036CC9C;
    case 93u: goto L_0036CCB0;
    case 94u: goto L_0036CCD4;
    case 95u: goto L_0036CCE0;
    case 96u: goto L_0036CD44;
    case 97u: goto L_0036CD54;
    case 98u: goto L_0036CD70;
    case 99u: goto L_0036CDB8;
    case 100u: goto L_0036CDCC;
    case 101u: goto L_0036CDDC;
    case 102u: goto L_0036CDE8;
    case 103u: goto L_0036CE00;
    case 104u: goto L_0036CE20;
    case 105u: goto L_0036CE34;
    case 106u: goto L_0036CE3C;
    case 107u: goto L_0036CE4C;
    case 108u: goto L_0036CE54;
    case 109u: goto L_0036CE70;
    case 110u: goto L_0036CE84;
    case 111u: goto L_0036CE8C;
    case 112u: goto L_0036CEA0;
    case 113u: goto L_0036CEBC;
    case 114u: goto L_0036CF20;
    case 115u: goto L_0036CF94;
    case 116u: goto L_0036CF9C;
    case 117u: goto L_0036CFAC;
    case 118u: goto L_0036CFC0;
    case 119u: goto L_0036CFE4;
    case 120u: goto L_0036CFF0;
    case 121u: goto L_0036D054;
    case 122u: goto L_0036D064;
    case 123u: goto L_0036D080;
    case 124u: goto L_0036D0C8;
    case 125u: goto L_0036D0DC;
    case 126u: goto L_0036D0EC;
    case 127u: goto L_0036D0F8;
    case 128u: goto L_0036D110;
    case 129u: goto L_0036D130;
    case 130u: goto L_0036D144;
    case 131u: goto L_0036D154;
    case 132u: goto L_0036D15C;
    case 133u: goto L_0036D164;
    case 134u: goto L_0036D180;
    case 135u: goto L_0036D194;
    case 136u: goto L_0036D19C;
    case 137u: goto L_0036D1B0;
    case 138u: goto L_0036D248;
    case 139u: goto L_0036D278;
    case 140u: goto L_0036D280;
    case 141u: goto L_0036D2A4;
    case 142u: goto L_0036D2AC;
    case 143u: goto L_0036D2C8;
    case 144u: goto L_0036D2D4;
    case 145u: goto L_0036D2E0;
    case 146u: goto L_0036D2EC;
    case 147u: goto L_0036D2F8;
    case 148u: goto L_0036D318;
    case 149u: goto L_0036D384;
    case 150u: goto L_0036D400;
    case 151u: goto L_0036D454;
    case 152u: goto L_0036D46C;
    case 153u: goto L_0036D47C;
    case 154u: goto L_0036D494;
    case 155u: goto L_0036D4B0;
    case 156u: goto L_0036D4C8;
    case 157u: goto L_0036D4D0;
    case 158u: goto L_0036D4D8;
    case 159u: goto L_0036D4E4;
    case 160u: goto L_0036D4F0;
    case 161u: goto L_0036D4FC;
    case 162u: goto L_0036D510;
    case 163u: goto L_0036D528;
    case 164u: goto L_0036D530;
    case 165u: goto L_0036D53C;
    case 166u: goto L_0036D54C;
    case 167u: goto L_0036D55C;
    case 168u: goto L_0036D564;
    case 169u: goto L_0036D5A0;
    case 170u: goto L_0036D5B4;
    case 171u: goto L_0036D5C8;
    case 172u: goto L_0036D5D0;
    case 173u: goto L_0036D5D8;
    case 174u: goto L_0036D5F0;
    case 175u: goto L_0036D600;
    case 176u: goto L_0036D608;
    case 177u: goto L_0036D614;
    case 178u: goto L_0036D620;
    case 179u: goto L_0036D6B8;
    case 180u: goto L_0036D6E4;
    case 181u: goto L_0036D6F4;
    case 182u: goto L_0036D6FC;
    case 183u: goto L_0036D708;
    case 184u: goto L_0036D714;
    case 185u: goto L_0036D720;
    case 186u: goto L_0036D72C;
    case 187u: goto L_0036D74C;
    case 188u: goto L_0036D7B8;
    case 189u: goto L_0036D830;
    case 190u: goto L_0036D884;
    case 191u: goto L_0036D89C;
    case 192u: goto L_0036D8AC;
    case 193u: goto L_0036D8B8;
    case 194u: goto L_0036D8D0;
    case 195u: goto L_0036D8F0;
    case 196u: goto L_0036D904;
    case 197u: goto L_0036D910;
    case 198u: goto L_0036D928;
    case 199u: goto L_0036D940;
    case 200u: goto L_0036D964;
    case 201u: goto L_0036D970;
    case 202u: goto L_0036D980;
    case 203u: goto L_0036D990;
    case 204u: goto L_0036D998;
    case 205u: goto L_0036D9A4;
    case 206u: goto L_0036D9B0;
    case 207u: goto L_0036D9C4;
    case 208u: goto L_0036D9D8;
    case 209u: goto L_0036DA00;
    case 210u: goto L_0036DA98;
    case 211u: goto L_0036DACC;
    case 212u: goto L_0036DAD4;
    case 213u: goto L_0036DAE0;
    case 214u: goto L_0036DAEC;
    case 215u: goto L_0036DAF8;
    case 216u: goto L_0036DB04;
    case 217u: goto L_0036DB24;
    case 218u: goto L_0036DB90;
    case 219u: goto L_0036DC00;
    case 220u: goto L_0036DC54;
    case 221u: goto L_0036DC6C;
    case 222u: goto L_0036DC7C;
    case 223u: goto L_0036DC94;
    case 224u: goto L_0036DCB0;
    case 225u: goto L_0036DCC4;
    case 226u: goto L_0036DCD0;
    case 227u: goto L_0036DCE8;
    case 228u: goto L_0036DD00;
    case 229u: goto L_0036DD28;
    case 230u: goto L_0036DD30;
    case 231u: goto L_0036DD40;
    case 232u: goto L_0036DD48;
    case 233u: goto L_0036DD60;
    case 234u: goto L_0036DD70;
    case 235u: goto L_0036DD78;
    case 236u: goto L_0036DD84;
    case 237u: goto L_0036DD90;
    case 238u: goto L_0036DDC8;
    case 239u: goto L_0036DDD4;
    case 240u: goto L_0036DE10;
    case 241u: goto L_0036DE1C;
    case 242u: goto L_0036DE28;
    case 243u: goto L_0036DF80;
    case 244u: goto L_0036DFE4;
    case 245u: goto L_0036DFF4;
    case 246u: goto L_0036E000;
    case 247u: goto L_0036E00C;
    case 248u: goto L_0036E024;
    case 249u: goto L_0036E040;
    case 250u: goto L_0036E058;
    case 251u: goto L_0036E088;
    case 252u: goto L_0036E0A0;
    case 253u: goto L_0036E0B0;
    case 254u: goto L_0036E0C4;
    case 255u: goto L_0036E0E0;
    case 256u: goto L_0036E0F8;
    case 257u: goto L_0036E100;
    case 258u: goto L_0036E124;
    case 259u: goto L_0036E140;
    case 260u: goto L_0036E150;
    case 261u: goto L_0036E168;
    case 262u: goto L_0036E178;
    case 263u: goto L_0036E188;
    case 264u: goto L_0036E198;
    case 265u: goto L_0036E224;
    case 266u: goto L_0036E254;
    case 267u: goto L_0036E280;
    case 268u: goto L_0036E294;
    case 269u: goto L_0036E2B0;
    case 270u: goto L_0036E2DC;
    case 271u: goto L_0036E300;
    case 272u: goto L_0036E314;
    case 273u: goto L_0036E330;
    case 274u: goto L_0036E35C;
    case 275u: goto L_0036E380;
    case 276u: goto L_0036E39C;
    case 277u: goto L_0036E3B0;
    case 278u: goto L_0036E3D0;
    case 279u: goto L_0036E3EC;
    case 280u: goto L_0036E410;
    case 281u: goto L_0036E470;
    case 282u: goto L_0036E4B8;
    case 283u: goto L_0036E4F0;
    case 284u: goto L_0036E530;
    case 285u: goto L_0036E538;
    case 286u: goto L_0036E5E0;
    case 287u: goto L_0036E60C;
    case 288u: goto L_0036E61C;
    case 289u: goto L_0036E62C;
    case 290u: goto L_0036E654;
    case 291u: goto L_0036E674;
    case 292u: goto L_0036E6FC;
    case 293u: goto L_0036E730;
    case 294u: goto L_0036E744;
    case 295u: goto L_0036E75C;
    case 296u: goto L_0036E770;
    case 297u: goto L_0036E784;
    case 298u: goto L_0036E79C;
    case 299u: goto L_0036E7B0;
    case 300u: goto L_0036E7C0;
    case 301u: goto L_0036E7D4;
    case 302u: goto L_0036E7EC;
    case 303u: goto L_0036E800;
    case 304u: goto L_0036E814;
    case 305u: goto L_0036E82C;
    case 306u: goto L_0036E840;
    case 307u: goto L_0036E850;
    case 308u: goto L_0036E860;
    case 309u: goto L_0036E888;
    case 310u: goto L_0036E898;
    case 311u: goto L_0036E8B8;
    case 312u: goto L_0036E8FC;
    case 313u: goto L_0036E910;
    case 314u: goto L_0036E91C;
    case 315u: goto L_0036E934;
    case 316u: goto L_0036E984;
    case 317u: goto L_0036E998;
    case 318u: goto L_0036E9A4;
    case 319u: goto L_0036E9BC;
    case 320u: goto L_0036E9EC;
    case 321u: goto L_0036EA24;
    case 322u: goto L_0036EA2C;
    case 323u: goto L_0036EA50;
    case 324u: goto L_0036EA68;
    case 325u: goto L_0036EA98;
    case 326u: goto L_0036EAD0;
    case 327u: goto L_0036EAD8;
    case 328u: goto L_0036EAFC;
    case 329u: goto L_0036EB0C;
    case 330u: goto L_0036EB2C;
    case 331u: goto L_0036EB80;
    case 332u: goto L_0036EB94;
    case 333u: goto L_0036EBA8;
    case 334u: goto L_0036EBB4;
    case 335u: goto L_0036EC2C;
    case 336u: goto L_0036EC50;
    case 337u: goto L_0036EC90;
    case 338u: goto L_0036ECB8;
    case 339u: goto L_0036ECE0;
    case 340u: goto L_0036ED08;
    case 341u: goto L_0036ED30;
    case 342u: goto L_0036ED58;
    case 343u: goto L_0036ED70;
    case 344u: goto L_0036ED90;
    case 345u: goto L_0036EDDC;
    case 346u: goto L_0036EDFC;
    case 347u: goto L_0036EE38;
    case 348u: goto L_0036EE74;
    case 349u: goto L_0036EEB0;
    case 350u: goto L_0036EED0;
    case 351u: goto L_0036EEE0;
    case 352u: goto L_0036EF28;
    case 353u: goto L_0036EF40;
    case 354u: goto L_0036EF60;
    case 355u: goto L_0036EF70;
    case 356u: goto L_0036EF80;
    case 357u: goto L_0036EF90;
    case 358u: goto L_0036EFA0;
    case 359u: goto L_0036EFB0;
    case 360u: goto L_0036EFC0;
    case 361u: goto L_0036EFD0;
    case 362u: goto L_0036EFE0;
    case 363u: goto L_0036EFF0;
    case 364u: goto L_0036F000;
    case 365u: goto L_0036F010;
    case 366u: goto L_0036F020;
    case 367u: goto L_0036F030;
    case 368u: goto L_0036F040;
    case 369u: goto L_0036F050;
    case 370u: goto L_0036F060;
    case 371u: goto L_0036F070;
    case 372u: goto L_0036F080;
    case 373u: goto L_0036F090;
    case 374u: goto L_0036F0A0;
    case 375u: goto L_0036F0B0;
    case 376u: goto L_0036F0C0;
    case 377u: goto L_0036F0D0;
    case 378u: goto L_0036F0E0;
    case 379u: goto L_0036F0F0;
    case 380u: goto L_0036F100;
    case 381u: goto L_0036F110;
    case 382u: goto L_0036F120;
    case 383u: goto L_0036F13C;
    case 384u: goto L_0036F158;
    case 385u: goto L_0036F174;
    case 386u: goto L_0036F190;
    case 387u: goto L_0036F1AC;
    case 388u: goto L_0036F1C8;
    case 389u: goto L_0036F1E4;
    case 390u: goto L_0036F200;
    case 391u: goto L_0036F250;
    case 392u: goto L_0036F290;
    case 393u: goto L_0036F2C0;
    case 394u: goto L_0036F300;
    case 395u: goto L_0036F8B4;
    case 396u: goto L_0036F8D0;
    case 397u: goto L_0036F8F8;
    case 398u: goto L_0036F920;
    case 399u: goto L_0036F928;
    case 400u: goto L_0036F930;
    case 401u: goto L_0036F938;
    case 402u: goto L_0036F940;
    case 403u: goto L_0036F948;
    case 404u: goto L_0036F950;
    case 405u: goto L_0036F958;
    case 406u: goto L_0036F960;
    case 407u: goto L_0036F968;
    case 408u: goto L_0036FA44;
    case 409u: goto L_0036FA78;
    case 410u: goto L_0036FAC4;
    case 411u: goto L_0036FB00;
    case 412u: goto L_0036FB34;
    case 413u: goto L_0036FB94;
    case 414u: goto L_0036FBC8;
    case 415u: goto L_0036FC10;
    case 416u: goto L_0036FC20;
    case 417u: goto L_0036FC48;
    case 418u: goto L_0036FC70;
    case 419u: goto L_0036FC78;
    case 420u: goto L_0036FC80;
    case 421u: goto L_0036FC88;
    case 422u: goto L_0036FC90;
    case 423u: goto L_0036FC98;
    case 424u: goto L_0036FCA0;
    case 425u: goto L_0036FCA8;
    case 426u: goto L_0036FCB0;
    case 427u: goto L_0036FD9C;
    case 428u: goto L_0036FDE4;
    case 429u: goto L_0036FE58;
    case 430u: goto L_0036FEC4;
    case 431u: goto L_0036FEF8;
    case 432u: goto L_0036FF78;
    case 433u: goto L_0036FFAC;
    default: bad_entry(c, 0x0036C000u); return;
    }
L_0036C000:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 304u);  c.pc = t; return; }
L_0036C020:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[11].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 88u)));
    st64((c.r[29].w[0] + 8u), c.r[2].d[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 96u)));
    st64((c.r[29].w[0] + 16u), c.r[2].d[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 104u)));
    st64((c.r[29].w[0] + 24u), c.r[2].d[0]);
    set32(c.r[11], ld32((c.r[29].w[0] + 80u)));
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036C05Cu); c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_009A(c, 326u, depth + 1u); else { c.pc = 0x0036ADF0u; return; } if (c.pc != 0x0036C05Cu) [[unlikely]] return; }
L_0036C05C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 31408u);
    set32(c.r[2], c.r[2].w[0] + 31496u);
    st32((c.r[17].w[0]), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    st32((c.r[17].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] + 31556u);
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[17].w[0] + 40u), c.r[3].w[0]);
    st32((c.r[17].w[0] + 180u), c.r[16].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 80u)));
    st32((c.r[17].w[0] + 184u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.budget -= 18;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0036C0B0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0036C110; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] + 31408u);
    set32(c.r[3], c.r[3].w[0] + 31496u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    st32((c.r[17].w[0] + 20u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + 31556u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036C0F8u); st32((c.r[17].w[0] + 40u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_009A(c, 335u, depth + 1u); else { c.pc = 0x0036AFF0u; return; } if (c.pc != 0x0036C0F8u) [[unlikely]] return; }
L_0036C0F8:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0036C114; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036C110u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x0036C110u) [[unlikely]] return; }
L_0036C110:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0036C114:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0036C130:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036C144u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_000C(c, 21u, depth + 1u); else { c.pc = 0x001301E0u; return; } if (c.pc != 0x0036C144u) [[unlikely]] return; }
L_0036C144:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036C14Cu); set32(c.r[4], 0u + 352u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0036C14Cu) [[unlikely]] return; }
L_0036C14C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0036C180; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 28u)));
    c.f[12] = ld32((c.r[16].w[0] + 128u));
    set32(c.r[6], ld32((c.r[16].w[0] + 32u)));
    c.f[13] = ld32((c.r[16].w[0] + 132u));
    c.f[14] = ld32((c.r[16].w[0] + 136u));
    set32(c.r[7], ld32((c.r[16].w[0] + 180u)));
    c.f[15] = ld32((c.r[16].w[0] + 140u));
    set32(c.r[8], ld32((c.r[16].w[0] + 184u)));
    c.f[16] = ld32((c.r[16].w[0] + 144u));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036C180u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_009A(c, 320u, depth + 1u); else { c.pc = 0x0036ACF0u; return; } if (c.pc != 0x0036C180u) [[unlikely]] return; }
L_0036C180:
    st32((c.r[16].w[0] + 88u), c.r[2].w[0]);
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], ld32((c.r[16].w[0] + 88u)));
    st32((c.r[2].w[0] + 300u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 32u)));
    st32((c.r[16].w[0] + 124u), c.r[2].w[0]);
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 48u)));
    c.budget -= 10;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0036C1A8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0036C1A8u) [[unlikely]] return; }
L_0036C1A8:
    set32(c.r[25], ld32((c.r[16].w[0])));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 140u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0036C1BCu); c.r[5].d[0] = c.r[2].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0036C1BCu) [[unlikely]] return; }
L_0036C1BC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0036C1D0:
    set32(c.r[29], c.r[29].w[0] - 192u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[9].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[10].d[0] + 0ull;
    st32((c.r[29].w[0] + 16u), c.f[24]);
    c.r[16].d[0] = c.r[11].d[0] + 0ull;
    st32((c.r[29].w[0] + 12u), c.f[23]);
    set32(c.r[6], c.r[29].w[0] + 160u);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    set32(c.r[4], 0u + 3u);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    c.f[24] = c.f[12];
    c.f[23] = c.f[13];
    c.f[22] = c.f[14];
    c.f[21] = c.f[15];
    c.f[20] = c.f[16];
    c.budget -= 24;
L_0036C230:
    set32(c.r[3], ld32((c.r[7].w[0])));
    set32(c.r[4], c.r[4].w[0] - 1u);
    set32(c.r[2], ld32((c.r[7].w[0] + 4u)));
    st32((c.r[6].w[0]), c.r[3].w[0]);
    set32(c.r[7], c.r[7].w[0] + 8u);
    st32((c.r[6].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 8;
    { const bool t = c.r[4].sd[0] > 0; set32(c.r[6], c.r[6].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0036C230u | kUnwind; return; } goto L_0036C230; } }
    set32(c.r[6], c.r[29].w[0] + 128u);
    set32(c.r[4], 0u + 3u);
    c.budget -= 2;
L_0036C258:
    set32(c.r[3], ld32((c.r[8].w[0])));
    set32(c.r[4], c.r[4].w[0] - 1u);
    set32(c.r[2], ld32((c.r[8].w[0] + 4u)));
    st32((c.r[6].w[0]), c.r[3].w[0]);
    set32(c.r[8], c.r[8].w[0] + 8u);
    st32((c.r[6].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 8;
    { const bool t = c.r[4].sd[0] > 0; set32(c.r[6], c.r[6].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0036C258u | kUnwind; return; } goto L_0036C258; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036C280u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 264u, depth + 1u); else { c.pc = 0x0013E560u; return; } if (c.pc != 0x0036C280u) [[unlikely]] return; }
L_0036C280:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[4], c.r[20].w[0] + 16u);
    set32(c.r[2], c.r[2].w[0] + 31392u);
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[20].w[0]), c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036C29Cu); st32((c.r[20].w[0] + 12u), 0u);  if (depth < kMaxDepth) unit_0049(c, 271u, depth + 1u); else { c.pc = 0x002275A0u; return; } if (c.pc != 0x0036C29Cu) [[unlikely]] return; }
L_0036C29C:
    set32(c.r[6], c.r[29].w[0] + 160u);
    set32(c.r[5], c.r[20].w[0] + 52u);
    set32(c.r[4], 0u + 3u);
    c.budget -= 3;
L_0036C2A8:
    set32(c.r[3], ld32((c.r[6].w[0])));
    set32(c.r[4], c.r[4].w[0] - 1u);
    set32(c.r[2], ld32((c.r[6].w[0] + 4u)));
    st32((c.r[5].w[0]), c.r[3].w[0]);
    set32(c.r[6], c.r[6].w[0] + 8u);
    st32((c.r[5].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 8;
    { const bool t = c.r[4].sd[0] > 0; set32(c.r[5], c.r[5].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0036C2A8u | kUnwind; return; } goto L_0036C2A8; } }
    set32(c.r[6], c.r[29].w[0] + 128u);
    set32(c.r[5], c.r[20].w[0] + 76u);
    set32(c.r[4], 0u + 3u);
    c.budget -= 3;
L_0036C2D4:
    set32(c.r[3], ld32((c.r[6].w[0])));
    set32(c.r[4], c.r[4].w[0] - 1u);
    set32(c.r[2], ld32((c.r[6].w[0] + 4u)));
    st32((c.r[5].w[0]), c.r[3].w[0]);
    set32(c.r[6], c.r[6].w[0] + 8u);
    st32((c.r[5].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 8;
    { const bool t = c.r[4].sd[0] > 0; set32(c.r[5], c.r[5].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0036C2D4u | kUnwind; return; } goto L_0036C2D4; } }
    c.r[1].d[0] = c.r[19].sd[0] < 830ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[2].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_0036C3E4; } }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != 0ull; set32(c.r[4], 0u + 272u);  if (t) { goto L_0036C314; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 26392u)));
    set32(c.r[18], ld32((c.r[2].w[0] + 332u)));
    c.budget -= 3;
L_0036C314:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036C31Cu);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0036C31Cu) [[unlikely]] return; }
L_0036C31C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_0036C330; } }
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036C330u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0018(c, 110u, depth + 1u); else { c.pc = 0x001630C0u; return; } if (c.pc != 0x0036C330u) [[unlikely]] return; }
L_0036C330:
    st32((c.r[20].w[0] + 12u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[20].w[0] + 12u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[3].w[0] + 16u), c.f[21]);
    st32((c.r[3].w[0] + 20u), c.f[20]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036C350u); st32((c.r[3].w[0] + 24u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x0036C350u) [[unlikely]] return; }
L_0036C350:
    set32(c.r[4], ld32((c.r[20].w[0] + 12u)));
    set32(c.r[3], ld32((c.r[2].w[0])));
    st32((c.r[4].w[0] + 48u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    st32((c.r[4].w[0] + 52u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 8;
    { const bool t = c.r[16].d[0] != 0ull; st32((c.r[4].w[0] + 56u), c.r[2].w[0]);  if (t) { goto L_0036C394; } }
    set32(c.r[4], ld32((c.r[20].w[0] + 12u)));
    c.f[12] = c.f[24];
    c.f[13] = c.f[23];
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0036C38Cu); c.f[14] = c.f[22];  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0036C38Cu) [[unlikely]] return; }
L_0036C38C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036C3E0; } }
L_0036C394:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[2].d[0];  if (t) { goto L_0036C3C4; } }
    set32(c.r[4], ld32((c.r[20].w[0] + 12u)));
    c.f[12] = c.f[24];
    c.f[13] = c.f[23];
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0036C3BCu); c.f[14] = c.f[22];  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0036C3BCu) [[unlikely]] return; }
L_0036C3BC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036C3E0; } }
L_0036C3C4:
    set32(c.r[4], ld32((c.r[20].w[0] + 12u)));
    c.f[12] = c.f[24];
    c.f[13] = c.f[23];
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0036C3E0u); c.f[14] = c.f[22];  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0036C3E0u) [[unlikely]] return; }
L_0036C3E0:
    c.r[2].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 1;
L_0036C3E4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    c.f[24] = ld32((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    c.f[23] = ld32((c.r[29].w[0] + 12u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 192u);  c.pc = t; return; }
L_0036C420:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0036C4A0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] + 31392u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0036C46C; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0036C46C; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0036C46Cu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0036C46Cu) [[unlikely]] return; }
L_0036C46C:
    set32(c.r[4], c.r[17].w[0] + 16u);
    set32(c.r[5], 0u - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036C47Cu); st32((c.r[17].w[0] + 12u), 0u);  if (depth < kMaxDepth) unit_0049(c, 274u, depth + 1u); else { c.pc = 0x002275F0u; return; } if (c.pc != 0x0036C47Cu) [[unlikely]] return; }
L_0036C47C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036C488u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000F(c, 266u, depth + 1u); else { c.pc = 0x0013E5B0u; return; } if (c.pc != 0x0036C488u) [[unlikely]] return; }
L_0036C488:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0036C4A4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036C4A0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x0036C4A0u) [[unlikely]] return; }
L_0036C4A0:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0036C4A4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0036C4C0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0036C4FC; } }
    c.f[0] = ld32((c.r[4].w[0] + 28u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    st32((c.r[3].w[0] + 60u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 10;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0036C4FCu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0036C4FCu) [[unlikely]] return; }
L_0036C4FC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0036C510:
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], c.r[2].w[0] + 16u);
    c.budget -= 4;
    { set32(c.r[5], c.r[2].w[0] + 52u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002276C0u | kUnwind; return; } [[clang::musttail]] return unit_0049(c, 280u, depth); }
L_0036C520:
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], c.r[2].w[0] + 16u);
    c.budget -= 4;
    { set32(c.r[5], c.r[2].w[0] + 76u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002276C0u | kUnwind; return; } [[clang::musttail]] return unit_0049(c, 280u, depth); }
L_0036C530:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[8].d[0] + 0ull;
    st32((c.r[29].w[0] + 32u), c.f[20]);
    c.r[16].d[0] = c.r[9].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[29].w[0] + 168u)));
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    c.f[20] = c.f[12];
    c.r[6].d[0] = c.r[7].d[0] + 0ull;
    c.f[12] = c.f[13];
    c.r[8].d[0] = c.r[10].d[0] + 0ull;
    c.f[13] = c.f[14];
    c.r[9].d[0] = c.r[11].d[0] + 0ull;
    c.f[14] = c.f[15];
    c.f[15] = c.f[16];
    st64((c.r[29].w[0]), c.r[2].d[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 136u)));
    st64((c.r[29].w[0] + 8u), c.r[2].d[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 144u)));
    st64((c.r[29].w[0] + 16u), c.r[2].d[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 152u)));
    st64((c.r[29].w[0] + 24u), c.r[2].d[0]);
    set32(c.r[7], ld32((c.r[29].w[0] + 176u)));
    set32(c.r[10], ld32((c.r[29].w[0] + 128u)));
    set32(c.r[11], ld32((c.r[29].w[0] + 160u)));
    c.budget -= 33;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036C5B4u); c.f[16] = c.f[17];  if (depth < kMaxDepth) unit_009A(c, 326u, depth + 1u); else { c.pc = 0x0036ADF0u; return; } if (c.pc != 0x0036C5B4u) [[unlikely]] return; }
L_0036C5B4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 31216u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00470000u);
    st32((c.r[19].w[0]), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + 31304u);
    st32((c.r[19].w[0] + 20u), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42080000u);
    set32(c.r[3], c.r[3].w[0] + 31364u);
    c.f[12] = c.r[2].w[0];
    st32((c.r[19].w[0] + 40u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41F00000u);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.f[13] = c.r[3].w[0];
    set32(c.r[4], c.r[19].w[0] + 180u);
    c.f[15] = c.r[2].w[0];
    set32(c.r[5], 0u + 11u);
    c.f[14] = c.f[20];
    set32(c.r[7], 0u + 830u);
    set32(c.r[8], c.r[8].w[0] - 5200u);
    set32(c.r[9], c.r[9].w[0] - 5168u);
    c.budget -= 26;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036C61Cu); set32(c.r[10], 0u + 1u);  if (depth < kMaxDepth) unit_000D(c, 34u, depth + 1u); else { c.pc = 0x00134330u; return; } if (c.pc != 0x0036C61Cu) [[unlikely]] return; }
L_0036C61C:
    set32(c.r[2], 0u + 830u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[2].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0x42DC0000u);  if (t) { goto L_0036C638; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43390000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x42B80000u);  if (t) { goto L_0036C640; } }
L_0036C638:
    c.f[12] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42B80000u);
    c.budget -= 2;
L_0036C640:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[13] = c.r[2].w[0];
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[15] = ld32((c.r[1].w[0] - 5088u));
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    set32(c.r[4], c.r[19].w[0] + 304u);
    c.f[0] = c.r[2].w[0];
    set32(c.r[5], 0u + 11u);
    set32(c.r[7], c.r[7].w[0] - 5264u);
    set32(c.r[8], c.r[8].w[0] - 5232u);
    c.f[14] = fp::cvt_s_w(c.f[0]);
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[10], 0u + 4u);
    c.r[11].d[0] = 0ull + 0ull;
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036C68Cu); c.f[16] = c.f[15];  if (depth < kMaxDepth) unit_009B(c, 13u, depth + 1u); else { c.pc = 0x0036C1D0u; return; } if (c.pc != 0x0036C68Cu) [[unlikely]] return; }
L_0036C68C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43700000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[12] = c.r[2].w[0];
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[15] = ld32((c.r[1].w[0] - 5088u));
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42B80000u);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.f[13] = c.r[2].w[0];
    set32(c.r[4], c.r[19].w[0] + 404u);
    set32(c.r[5], 0u + 11u);
    set32(c.r[7], c.r[7].w[0] - 5264u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    set32(c.r[8], c.r[8].w[0] - 5232u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[9].d[0] = 0ull + 0ull;
    c.f[0] = c.r[2].w[0];
    set32(c.r[10], 0u + 4u);
    c.r[11].d[0] = 0ull + 0ull;
    c.f[14] = fp::cvt_s_w(c.f[0]);
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036C6E4u); c.f[16] = c.f[15];  if (depth < kMaxDepth) unit_009B(c, 13u, depth + 1u); else { c.pc = 0x0036C1D0u; return; } if (c.pc != 0x0036C6E4u) [[unlikely]] return; }
L_0036C6E4:
    c.r[2].d[0] = c.r[19].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[19]);
    c.f[20] = ld32((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_0036C710:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0036C798; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] + 31216u);
    set32(c.r[3], c.r[3].w[0] + 31304u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[4], c.r[17].w[0] + 404u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    st32((c.r[17].w[0] + 20u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + 31364u);
    set32(c.r[5], 0u - 1u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036C75Cu); st32((c.r[17].w[0] + 40u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_009B(c, 26u, depth + 1u); else { c.pc = 0x0036C420u; return; } if (c.pc != 0x0036C75Cu) [[unlikely]] return; }
L_0036C75C:
    set32(c.r[4], c.r[17].w[0] + 304u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036C768u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_009B(c, 26u, depth + 1u); else { c.pc = 0x0036C420u; return; } if (c.pc != 0x0036C768u) [[unlikely]] return; }
L_0036C768:
    set32(c.r[4], c.r[17].w[0] + 180u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036C774u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000D(c, 54u, depth + 1u); else { c.pc = 0x00134720u; return; } if (c.pc != 0x0036C774u) [[unlikely]] return; }
L_0036C774:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036C780u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_009A(c, 335u, depth + 1u); else { c.pc = 0x0036AFF0u; return; } if (c.pc != 0x0036C780u) [[unlikely]] return; }
L_0036C780:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0036C79C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036C798u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x0036C798u) [[unlikely]] return; }
L_0036C798:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0036C79C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0036C7B0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036C7C4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_009A(c, 360u, depth + 1u); else { c.pc = 0x0036B2E0u; return; } if (c.pc != 0x0036C7C4u) [[unlikely]] return; }
L_0036C7C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036C7CCu); set32(c.r[4], c.r[16].w[0] + 180u);  if (depth < kMaxDepth) unit_000D(c, 68u, depth + 1u); else { c.pc = 0x001348C0u; return; } if (c.pc != 0x0036C7CCu) [[unlikely]] return; }
L_0036C7CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036C7D4u); set32(c.r[4], c.r[16].w[0] + 304u);  if (depth < kMaxDepth) unit_009B(c, 33u, depth + 1u); else { c.pc = 0x0036C510u; return; } if (c.pc != 0x0036C7D4u) [[unlikely]] return; }
L_0036C7D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036C7DCu); set32(c.r[4], c.r[16].w[0] + 404u);  if (depth < kMaxDepth) unit_009B(c, 33u, depth + 1u); else { c.pc = 0x0036C510u; return; } if (c.pc != 0x0036C7DCu) [[unlikely]] return; }
L_0036C7DC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0036C7F0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036C804u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_009A(c, 388u, depth + 1u); else { c.pc = 0x0036B710u; return; } if (c.pc != 0x0036C804u) [[unlikely]] return; }
L_0036C804:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036C80Cu); set32(c.r[4], c.r[16].w[0] + 180u);  if (depth < kMaxDepth) unit_000D(c, 69u, depth + 1u); else { c.pc = 0x001348D0u; return; } if (c.pc != 0x0036C80Cu) [[unlikely]] return; }
L_0036C80C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036C814u); set32(c.r[4], c.r[16].w[0] + 304u);  if (depth < kMaxDepth) unit_009B(c, 34u, depth + 1u); else { c.pc = 0x0036C520u; return; } if (c.pc != 0x0036C814u) [[unlikely]] return; }
L_0036C814:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036C81Cu); set32(c.r[4], c.r[16].w[0] + 404u);  if (depth < kMaxDepth) unit_009B(c, 34u, depth + 1u); else { c.pc = 0x0036C520u; return; } if (c.pc != 0x0036C81Cu) [[unlikely]] return; }
L_0036C81C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0036C830:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036C844u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_009A(c, 394u, depth + 1u); else { c.pc = 0x0036B7C0u; return; } if (c.pc != 0x0036C844u) [[unlikely]] return; }
L_0036C844:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036C84Cu); set32(c.r[4], c.r[16].w[0] + 180u);  if (depth < kMaxDepth) unit_000D(c, 69u, depth + 1u); else { c.pc = 0x001348D0u; return; } if (c.pc != 0x0036C84Cu) [[unlikely]] return; }
L_0036C84C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036C854u); set32(c.r[4], c.r[16].w[0] + 304u);  if (depth < kMaxDepth) unit_009B(c, 34u, depth + 1u); else { c.pc = 0x0036C520u; return; } if (c.pc != 0x0036C854u) [[unlikely]] return; }
L_0036C854:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036C85Cu); set32(c.r[4], c.r[16].w[0] + 404u);  if (depth < kMaxDepth) unit_009B(c, 34u, depth + 1u); else { c.pc = 0x0036C520u; return; } if (c.pc != 0x0036C85Cu) [[unlikely]] return; }
L_0036C85C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0036C870:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[8].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[29].w[0] + 152u)));
    c.r[16].d[0] = c.r[9].d[0] + 0ull;
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    c.r[8].d[0] = c.r[10].d[0] + 0ull;
    c.r[6].d[0] = c.r[7].d[0] + 0ull;
    c.r[9].d[0] = c.r[11].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[2].d[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 120u)));
    st64((c.r[29].w[0] + 8u), c.r[2].d[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 128u)));
    st64((c.r[29].w[0] + 16u), c.r[2].d[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 136u)));
    st64((c.r[29].w[0] + 24u), c.r[2].d[0]);
    set32(c.r[7], ld32((c.r[29].w[0] + 160u)));
    set32(c.r[10], ld32((c.r[29].w[0] + 112u)));
    set32(c.r[11], ld32((c.r[29].w[0] + 144u)));
    c.budget -= 26;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036C8D8u); c.r[19].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_009B(c, 2u, depth + 1u); else { c.pc = 0x0036C020u; return; } if (c.pc != 0x0036C8D8u) [[unlikely]] return; }
L_0036C8D8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[2], c.r[2].w[0] + 31040u);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00470000u);
    st32((c.r[19].w[0]), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 31128u);
    set32(c.r[4], c.r[19].w[0] + 188u);
    st32((c.r[19].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[5], 0u + 11u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[7], 0u + 830u);
    set32(c.r[2], c.r[2].w[0] + 31188u);
    set32(c.r[8], c.r[8].w[0] - 5200u);
    st32((c.r[19].w[0] + 40u), c.r[2].w[0]);
    set32(c.r[9], c.r[9].w[0] - 5168u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42080000u);
    c.f[12] = c.r[2].w[0];
    c.f[14] = ld32((c.r[1].w[0] - 5096u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41F00000u);
    c.f[13] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[15] = c.r[2].w[0];
    c.budget -= 27;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036C944u); set32(c.r[10], 0u + 1u);  if (depth < kMaxDepth) unit_000D(c, 34u, depth + 1u); else { c.pc = 0x00134330u; return; } if (c.pc != 0x0036C944u) [[unlikely]] return; }
L_0036C944:
    set32(c.r[2], 0u + 830u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[2].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0x42DC0000u);  if (t) { goto L_0036C960; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43390000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x42B80000u);  if (t) { goto L_0036C968; } }
L_0036C960:
    c.f[12] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42B80000u);
    c.budget -= 2;
L_0036C968:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[13] = c.r[2].w[0];
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[15] = ld32((c.r[1].w[0] - 5088u));
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    set32(c.r[4], c.r[19].w[0] + 312u);
    c.f[0] = c.r[2].w[0];
    set32(c.r[5], 0u + 11u);
    set32(c.r[7], c.r[7].w[0] - 5264u);
    set32(c.r[8], c.r[8].w[0] - 5232u);
    c.f[14] = fp::cvt_s_w(c.f[0]);
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[10], 0u + 4u);
    c.r[11].d[0] = 0ull + 0ull;
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036C9B4u); c.f[16] = c.f[15];  if (depth < kMaxDepth) unit_009B(c, 13u, depth + 1u); else { c.pc = 0x0036C1D0u; return; } if (c.pc != 0x0036C9B4u) [[unlikely]] return; }
L_0036C9B4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43700000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[12] = c.r[2].w[0];
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[15] = ld32((c.r[1].w[0] - 5088u));
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42B80000u);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.f[13] = c.r[2].w[0];
    set32(c.r[4], c.r[19].w[0] + 412u);
    set32(c.r[5], 0u + 11u);
    set32(c.r[7], c.r[7].w[0] - 5264u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    set32(c.r[8], c.r[8].w[0] - 5232u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[9].d[0] = 0ull + 0ull;
    c.f[0] = c.r[2].w[0];
    set32(c.r[10], 0u + 4u);
    c.r[11].d[0] = 0ull + 0ull;
    c.f[14] = fp::cvt_s_w(c.f[0]);
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036CA0Cu); c.f[16] = c.f[15];  if (depth < kMaxDepth) unit_009B(c, 13u, depth + 1u); else { c.pc = 0x0036C1D0u; return; } if (c.pc != 0x0036CA0Cu) [[unlikely]] return; }
L_0036CA0C:
    c.r[2].d[0] = c.r[19].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_0036CA30:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0036CAB8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] + 31040u);
    set32(c.r[3], c.r[3].w[0] + 31128u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[4], c.r[17].w[0] + 412u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    st32((c.r[17].w[0] + 20u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + 31188u);
    set32(c.r[5], 0u - 1u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036CA7Cu); st32((c.r[17].w[0] + 40u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_009B(c, 26u, depth + 1u); else { c.pc = 0x0036C420u; return; } if (c.pc != 0x0036CA7Cu) [[unlikely]] return; }
L_0036CA7C:
    set32(c.r[4], c.r[17].w[0] + 312u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036CA88u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_009B(c, 26u, depth + 1u); else { c.pc = 0x0036C420u; return; } if (c.pc != 0x0036CA88u) [[unlikely]] return; }
L_0036CA88:
    set32(c.r[4], c.r[17].w[0] + 188u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036CA94u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000D(c, 54u, depth + 1u); else { c.pc = 0x00134720u; return; } if (c.pc != 0x0036CA94u) [[unlikely]] return; }
L_0036CA94:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036CAA0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_009B(c, 4u, depth + 1u); else { c.pc = 0x0036C0B0u; return; } if (c.pc != 0x0036CAA0u) [[unlikely]] return; }
L_0036CAA0:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0036CABC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036CAB8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x0036CAB8u) [[unlikely]] return; }
L_0036CAB8:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0036CABC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0036CAD0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036CAE4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_009A(c, 360u, depth + 1u); else { c.pc = 0x0036B2E0u; return; } if (c.pc != 0x0036CAE4u) [[unlikely]] return; }
L_0036CAE4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036CAECu); set32(c.r[4], c.r[16].w[0] + 188u);  if (depth < kMaxDepth) unit_000D(c, 68u, depth + 1u); else { c.pc = 0x001348C0u; return; } if (c.pc != 0x0036CAECu) [[unlikely]] return; }
L_0036CAEC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036CAF4u); set32(c.r[4], c.r[16].w[0] + 312u);  if (depth < kMaxDepth) unit_009B(c, 33u, depth + 1u); else { c.pc = 0x0036C510u; return; } if (c.pc != 0x0036CAF4u) [[unlikely]] return; }
L_0036CAF4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036CAFCu); set32(c.r[4], c.r[16].w[0] + 412u);  if (depth < kMaxDepth) unit_009B(c, 33u, depth + 1u); else { c.pc = 0x0036C510u; return; } if (c.pc != 0x0036CAFCu) [[unlikely]] return; }
L_0036CAFC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0036CB10:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036CB24u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_009A(c, 388u, depth + 1u); else { c.pc = 0x0036B710u; return; } if (c.pc != 0x0036CB24u) [[unlikely]] return; }
L_0036CB24:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036CB2Cu); set32(c.r[4], c.r[16].w[0] + 188u);  if (depth < kMaxDepth) unit_000D(c, 69u, depth + 1u); else { c.pc = 0x001348D0u; return; } if (c.pc != 0x0036CB2Cu) [[unlikely]] return; }
L_0036CB2C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036CB34u); set32(c.r[4], c.r[16].w[0] + 312u);  if (depth < kMaxDepth) unit_009B(c, 34u, depth + 1u); else { c.pc = 0x0036C520u; return; } if (c.pc != 0x0036CB34u) [[unlikely]] return; }
L_0036CB34:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036CB3Cu); set32(c.r[4], c.r[16].w[0] + 412u);  if (depth < kMaxDepth) unit_009B(c, 34u, depth + 1u); else { c.pc = 0x0036C520u; return; } if (c.pc != 0x0036CB3Cu) [[unlikely]] return; }
L_0036CB3C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0036CB50:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036CB64u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_009A(c, 394u, depth + 1u); else { c.pc = 0x0036B7C0u; return; } if (c.pc != 0x0036CB64u) [[unlikely]] return; }
L_0036CB64:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036CB6Cu); set32(c.r[4], c.r[16].w[0] + 188u);  if (depth < kMaxDepth) unit_000D(c, 69u, depth + 1u); else { c.pc = 0x001348D0u; return; } if (c.pc != 0x0036CB6Cu) [[unlikely]] return; }
L_0036CB6C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036CB74u); set32(c.r[4], c.r[16].w[0] + 312u);  if (depth < kMaxDepth) unit_009B(c, 34u, depth + 1u); else { c.pc = 0x0036C520u; return; } if (c.pc != 0x0036CB74u) [[unlikely]] return; }
L_0036CB74:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036CB7Cu); set32(c.r[4], c.r[16].w[0] + 412u);  if (depth < kMaxDepth) unit_009B(c, 34u, depth + 1u); else { c.pc = 0x0036C520u; return; } if (c.pc != 0x0036CB7Cu) [[unlikely]] return; }
L_0036CB7C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0036CB90:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036CBACu); st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0099(c, 355u, depth + 1u); else { c.pc = 0x00367E70u; return; } if (c.pc != 0x0036CBACu) [[unlikely]] return; }
L_0036CBAC:
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], 0u + 152u);
    set32(c.r[2], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    st64((c.r[29].w[0]), c.r[2].d[0]);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[2], 0u + 151u);
    c.r[5].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[2].d[0]);
    c.r[6].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[3].d[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41B80000u);
    st64((c.r[29].w[0] + 24u), c.r[3].d[0]);
    c.f[14] = c.r[2].w[0];
    c.f[12] = ld32((c.r[1].w[0] - 5080u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42B00000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42CC0000u);
    c.r[8].d[0] = 0ull + 0ull;
    c.f[15] = c.r[3].w[0];
    c.r[9].d[0] = 0ull + 0ull;
    c.f[16] = c.r[2].w[0];
    set32(c.r[10], 0u + 2u);
    set32(c.r[11], 0u + 12u);
    c.budget -= 25;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036CC10u); c.f[13] = c.f[12];  if (depth < kMaxDepth) unit_009A(c, 326u, depth + 1u); else { c.pc = 0x0036ADF0u; return; } if (c.pc != 0x0036CC10u) [[unlikely]] return; }
L_0036CC10:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 30864u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00470000u);
    st32((c.r[18].w[0]), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + 30952u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    st32((c.r[18].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] + 31012u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42080000u);
    st32((c.r[18].w[0] + 40u), c.r[3].w[0]);
    c.f[12] = c.r[2].w[0];
    st32((c.r[18].w[0] + 180u), 0u);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00470000u);
    st32((c.r[18].w[0] + 184u), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41E00000u);
    set32(c.r[4], c.r[18].w[0] + 188u);
    c.f[13] = c.r[2].w[0];
    set32(c.r[5], 0u + 11u);
    c.f[14] = ld32((c.r[1].w[0] - 5096u));
    set32(c.r[6], 0u + 479u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[7], 0u + 830u);
    c.f[15] = c.r[2].w[0];
    set32(c.r[8], c.r[8].w[0] - 5264u);
    set32(c.r[9], c.r[9].w[0] - 5232u);
    c.budget -= 29;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036CC84u); set32(c.r[10], 0u + 1u);  if (depth < kMaxDepth) unit_000D(c, 34u, depth + 1u); else { c.pc = 0x00134330u; return; } if (c.pc != 0x0036CC84u) [[unlikely]] return; }
L_0036CC84:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036CC8Cu);  if (depth < kMaxDepth) unit_0050(c, 211u, depth + 1u); else { c.pc = 0x00243030u; return; } if (c.pc != 0x0036CC8Cu) [[unlikely]] return; }
L_0036CC8C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], 0u + 100u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036CC9Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 122u, depth + 1u); else { c.pc = 0x0015D740u; return; } if (c.pc != 0x0036CC9Cu) [[unlikely]] return; }
L_0036CC9C:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0036CCB8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036CCB0u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 152u, depth + 1u); else { c.pc = 0x0015DC50u; return; } if (c.pc != 0x0036CCB0u) [[unlikely]] return; }
L_0036CCB0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 184u), c.r[2].w[0]);  if (t) { goto L_0036CCC0; } }
L_0036CCB8:
    c.r[2].d[0] = 0ull + 0ull;
    st32((c.r[18].w[0] + 184u), c.r[2].w[0]);
    c.budget -= 2;
L_0036CCC0:
    set32(c.r[2], ld32((c.r[18].w[0] + 184u)));
    c.r[17].d[0] = ld16((c.r[2].w[0]));
    set32(c.r[16], c.r[2].w[0] + 2u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036CCD4u); set32(c.r[4], c.r[17].w[0] << 3);  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x001001F0u; return; } if (c.pc != 0x0036CCD4u) [[unlikely]] return; }
L_0036CCD4:
    st32((c.r[18].w[0] + 180u), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_0036CD30; } }
L_0036CCE0:
    set32(c.r[4], ld32((c.r[18].w[0] + 180u)));
    set32(c.r[2], c.r[6].w[0] << 5);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[5], c.r[6].w[0] << 3);
    set32(c.r[3], c.r[2].w[0] + 2u);
    set32(c.r[6], c.r[6].w[0] + 1u);
    set32(c.r[2], c.r[4].w[0] + c.r[5].w[0]);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[18].w[0] + 180u)));
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[18].w[0] + 180u)));
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[18].w[0] + 180u)));
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[18].w[0] + 180u)));
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    st32((c.r[2].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 20;
L_0036CD30:
    c.r[2].d[0] = c.r[6].d[0] < c.r[17].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[18].w[0] + 188u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0036CCE0u | kUnwind; return; } goto L_0036CCE0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036CD44u);  if (depth < kMaxDepth) unit_000D(c, 68u, depth + 1u); else { c.pc = 0x001348C0u; return; } if (c.pc != 0x0036CD44u) [[unlikely]] return; }
L_0036CD44:
    set32(c.r[5], ld32((c.r[18].w[0] + 180u)));
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036CD54u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_000C(c, 37u, depth + 1u); else { c.pc = 0x00130380u; return; } if (c.pc != 0x0036CD54u) [[unlikely]] return; }
L_0036CD54:
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0036CD70:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0036CE00; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] + 30864u);
    set32(c.r[3], c.r[3].w[0] + 30952u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    st32((c.r[17].w[0] + 20u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + 31012u);
    st32((c.r[17].w[0] + 40u), c.r[2].w[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036CDB8u); set32(c.r[4], ld32((c.r[17].w[0] + 184u)));  if (depth < kMaxDepth) unit_0010(c, 83u, depth + 1u); else { c.pc = 0x00141160u; return; } if (c.pc != 0x0036CDB8u) [[unlikely]] return; }
L_0036CDB8:
    set32(c.r[4], ld32((c.r[17].w[0] + 180u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0036CDCC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036CDCCu);  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x0036CDCCu) [[unlikely]] return; }
L_0036CDCC:
    set32(c.r[4], c.r[17].w[0] + 188u);
    set32(c.r[5], 0u - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036CDDCu); st32((c.r[17].w[0] + 180u), 0u);  if (depth < kMaxDepth) unit_000D(c, 54u, depth + 1u); else { c.pc = 0x00134720u; return; } if (c.pc != 0x0036CDDCu) [[unlikely]] return; }
L_0036CDDC:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036CDE8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_009A(c, 335u, depth + 1u); else { c.pc = 0x0036AFF0u; return; } if (c.pc != 0x0036CDE8u) [[unlikely]] return; }
L_0036CDE8:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0036CE04; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036CE00u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x0036CE00u) [[unlikely]] return; }
L_0036CE00:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0036CE04:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0036CE20:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036CE34u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_009A(c, 388u, depth + 1u); else { c.pc = 0x0036B710u; return; } if (c.pc != 0x0036CE34u) [[unlikely]] return; }
L_0036CE34:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036CE3Cu); set32(c.r[4], c.r[16].w[0] + 188u);  if (depth < kMaxDepth) unit_000D(c, 69u, depth + 1u); else { c.pc = 0x001348D0u; return; } if (c.pc != 0x0036CE3Cu) [[unlikely]] return; }
L_0036CE3C:
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 48u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0036CE4Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0036CE4Cu) [[unlikely]] return; }
L_0036CE4C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036CE54u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0099(c, 356u, depth + 1u); else { c.pc = 0x00367E80u; return; } if (c.pc != 0x0036CE54u) [[unlikely]] return; }
L_0036CE54:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0036CE70:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036CE84u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_009A(c, 394u, depth + 1u); else { c.pc = 0x0036B7C0u; return; } if (c.pc != 0x0036CE84u) [[unlikely]] return; }
L_0036CE84:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036CE8Cu); set32(c.r[4], c.r[16].w[0] + 188u);  if (depth < kMaxDepth) unit_000D(c, 69u, depth + 1u); else { c.pc = 0x001348D0u; return; } if (c.pc != 0x0036CE8Cu) [[unlikely]] return; }
L_0036CE8C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0036CEA0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036CEBCu); st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0099(c, 355u, depth + 1u); else { c.pc = 0x00367E70u; return; } if (c.pc != 0x0036CEBCu) [[unlikely]] return; }
L_0036CEBC:
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], 0u + 152u);
    set32(c.r[2], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    st64((c.r[29].w[0]), c.r[2].d[0]);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[2], 0u + 151u);
    c.r[5].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[2].d[0]);
    c.r[6].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[3].d[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41B80000u);
    st64((c.r[29].w[0] + 24u), c.r[3].d[0]);
    c.f[14] = c.r[2].w[0];
    c.f[12] = ld32((c.r[1].w[0] - 5080u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42B00000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42CC0000u);
    c.r[8].d[0] = 0ull + 0ull;
    c.f[15] = c.r[3].w[0];
    c.r[9].d[0] = 0ull + 0ull;
    c.f[16] = c.r[2].w[0];
    set32(c.r[10], 0u + 2u);
    set32(c.r[11], 0u + 12u);
    c.budget -= 25;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036CF20u); c.f[13] = c.f[12];  if (depth < kMaxDepth) unit_009A(c, 326u, depth + 1u); else { c.pc = 0x0036ADF0u; return; } if (c.pc != 0x0036CF20u) [[unlikely]] return; }
L_0036CF20:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 30688u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00470000u);
    st32((c.r[18].w[0]), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + 30776u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    st32((c.r[18].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] + 30836u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42080000u);
    st32((c.r[18].w[0] + 40u), c.r[3].w[0]);
    c.f[12] = c.r[2].w[0];
    st32((c.r[18].w[0] + 180u), 0u);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00470000u);
    st32((c.r[18].w[0] + 184u), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41E00000u);
    set32(c.r[4], c.r[18].w[0] + 188u);
    c.f[13] = c.r[2].w[0];
    set32(c.r[5], 0u + 11u);
    c.f[14] = ld32((c.r[1].w[0] - 5096u));
    set32(c.r[6], 0u + 478u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[7], 0u + 830u);
    c.f[15] = c.r[2].w[0];
    set32(c.r[8], c.r[8].w[0] - 5264u);
    set32(c.r[9], c.r[9].w[0] - 5232u);
    c.budget -= 29;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036CF94u); set32(c.r[10], 0u + 1u);  if (depth < kMaxDepth) unit_000D(c, 34u, depth + 1u); else { c.pc = 0x00134330u; return; } if (c.pc != 0x0036CF94u) [[unlikely]] return; }
L_0036CF94:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036CF9Cu);  if (depth < kMaxDepth) unit_0050(c, 211u, depth + 1u); else { c.pc = 0x00243030u; return; } if (c.pc != 0x0036CF9Cu) [[unlikely]] return; }
L_0036CF9C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], 0u + 100u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036CFACu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 122u, depth + 1u); else { c.pc = 0x0015D740u; return; } if (c.pc != 0x0036CFACu) [[unlikely]] return; }
L_0036CFAC:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0036CFC8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036CFC0u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 152u, depth + 1u); else { c.pc = 0x0015DC50u; return; } if (c.pc != 0x0036CFC0u) [[unlikely]] return; }
L_0036CFC0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 184u), c.r[2].w[0]);  if (t) { goto L_0036CFD0; } }
L_0036CFC8:
    c.r[2].d[0] = 0ull + 0ull;
    st32((c.r[18].w[0] + 184u), c.r[2].w[0]);
    c.budget -= 2;
L_0036CFD0:
    set32(c.r[2], ld32((c.r[18].w[0] + 184u)));
    c.r[17].d[0] = ld16((c.r[2].w[0]));
    set32(c.r[16], c.r[2].w[0] + 2u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036CFE4u); set32(c.r[4], c.r[17].w[0] << 3);  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x001001F0u; return; } if (c.pc != 0x0036CFE4u) [[unlikely]] return; }
L_0036CFE4:
    st32((c.r[18].w[0] + 180u), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_0036D040; } }
L_0036CFF0:
    set32(c.r[4], ld32((c.r[18].w[0] + 180u)));
    set32(c.r[2], c.r[6].w[0] << 5);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[5], c.r[6].w[0] << 3);
    set32(c.r[3], c.r[2].w[0] + 2u);
    set32(c.r[6], c.r[6].w[0] + 1u);
    set32(c.r[2], c.r[4].w[0] + c.r[5].w[0]);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[18].w[0] + 180u)));
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[18].w[0] + 180u)));
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[18].w[0] + 180u)));
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[18].w[0] + 180u)));
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    st32((c.r[2].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 20;
L_0036D040:
    c.r[2].d[0] = c.r[6].d[0] < c.r[17].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[18].w[0] + 188u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0036CFF0u | kUnwind; return; } goto L_0036CFF0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036D054u);  if (depth < kMaxDepth) unit_000D(c, 68u, depth + 1u); else { c.pc = 0x001348C0u; return; } if (c.pc != 0x0036D054u) [[unlikely]] return; }
L_0036D054:
    set32(c.r[5], ld32((c.r[18].w[0] + 180u)));
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036D064u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_000C(c, 37u, depth + 1u); else { c.pc = 0x00130380u; return; } if (c.pc != 0x0036D064u) [[unlikely]] return; }
L_0036D064:
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0036D080:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0036D110; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] + 30688u);
    set32(c.r[3], c.r[3].w[0] + 30776u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    st32((c.r[17].w[0] + 20u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + 30836u);
    st32((c.r[17].w[0] + 40u), c.r[2].w[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036D0C8u); set32(c.r[4], ld32((c.r[17].w[0] + 184u)));  if (depth < kMaxDepth) unit_0010(c, 83u, depth + 1u); else { c.pc = 0x00141160u; return; } if (c.pc != 0x0036D0C8u) [[unlikely]] return; }
L_0036D0C8:
    set32(c.r[4], ld32((c.r[17].w[0] + 180u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0036D0DC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036D0DCu);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100210u; return; } if (c.pc != 0x0036D0DCu) [[unlikely]] return; }
L_0036D0DC:
    set32(c.r[4], c.r[17].w[0] + 188u);
    set32(c.r[5], 0u - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036D0ECu); st32((c.r[17].w[0] + 180u), 0u);  if (depth < kMaxDepth) unit_000D(c, 54u, depth + 1u); else { c.pc = 0x00134720u; return; } if (c.pc != 0x0036D0ECu) [[unlikely]] return; }
L_0036D0EC:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036D0F8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_009A(c, 335u, depth + 1u); else { c.pc = 0x0036AFF0u; return; } if (c.pc != 0x0036D0F8u) [[unlikely]] return; }
L_0036D0F8:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0036D114; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036D110u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x0036D110u) [[unlikely]] return; }
L_0036D110:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0036D114:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0036D130:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036D144u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_009A(c, 388u, depth + 1u); else { c.pc = 0x0036B710u; return; } if (c.pc != 0x0036D144u) [[unlikely]] return; }
L_0036D144:
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 48u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0036D154u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0036D154u) [[unlikely]] return; }
L_0036D154:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036D15Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0099(c, 357u, depth + 1u); else { c.pc = 0x00367E90u; return; } if (c.pc != 0x0036D15Cu) [[unlikely]] return; }
L_0036D15C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036D164u); set32(c.r[4], c.r[16].w[0] + 188u);  if (depth < kMaxDepth) unit_000D(c, 69u, depth + 1u); else { c.pc = 0x001348D0u; return; } if (c.pc != 0x0036D164u) [[unlikely]] return; }
L_0036D164:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0036D180:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036D194u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_009A(c, 394u, depth + 1u); else { c.pc = 0x0036B7C0u; return; } if (c.pc != 0x0036D194u) [[unlikely]] return; }
L_0036D194:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036D19Cu); set32(c.r[4], c.r[16].w[0] + 188u);  if (depth < kMaxDepth) unit_000D(c, 69u, depth + 1u); else { c.pc = 0x001348D0u; return; } if (c.pc != 0x0036D19Cu) [[unlikely]] return; }
L_0036D19C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0036D1B0:
    set32(c.r[29], c.r[29].w[0] - 160u);
    set32(c.r[8], 0u + 830u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    set32(c.r[3], 0u + 3u);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[20]);
    set32(c.r[2], 0u + 147u);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[19]);
    set32(c.r[5], 0u + 148u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[18]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[17]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    c.r[6].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0]), c.r[3].d[0]);
    c.r[7].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[2].d[0]);
    set32(c.r[3], 0u + 8u);
    st64((c.r[29].w[0] + 16u), c.r[5].d[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st64((c.r[29].w[0] + 24u), c.r[5].d[0]);
    c.f[13] = c.r[2].w[0];
    st64((c.r[29].w[0] + 32u), 0ull);
    set32(c.r[5], 0u + 729u);
    st64((c.r[29].w[0] + 40u), c.r[3].d[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41E00000u);
    st64((c.r[29].w[0] + 48u), 0ull);
    c.f[15] = c.r[2].w[0];
    c.f[12] = ld32((c.r[1].w[0] - 5096u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x433C0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42D40000u);
    c.r[10].d[0] = 0ull + 0ull;
    c.f[16] = c.r[3].w[0];
    c.r[9].d[0] = c.r[8].d[0] + 0ull;
    c.f[17] = c.r[2].w[0];
    c.r[11].d[0] = 0ull + 0ull;
    c.budget -= 38;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036D248u); c.f[14] = c.f[13];  if (depth < kMaxDepth) unit_009B(c, 35u, depth + 1u); else { c.pc = 0x0036C530u; return; } if (c.pc != 0x0036D248u) [[unlikely]] return; }
L_0036D248:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] + 30512u);
    set32(c.r[3], c.r[3].w[0] + 30600u);
    st32((c.r[20].w[0]), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    st32((c.r[20].w[0] + 20u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + 30660u);
    st32((c.r[20].w[0] + 40u), c.r[2].w[0]);
    st32((c.r[20].w[0] + 504u), 0u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036D278u); st32((c.r[20].w[0] + 508u), 0u);  if (depth < kMaxDepth) unit_0087(c, 101u, depth + 1u); else { c.pc = 0x0031CBF0u; return; } if (c.pc != 0x0036D278u) [[unlikely]] return; }
L_0036D278:
    set32(c.r[6], c.r[2].w[0] + 928u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_0036D280:
    set32(c.r[2], c.r[6].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[20].w[0] + c.r[5].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 84u)));
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.r[2].d[0] = c.r[5].sd[0] < 23ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; st8((c.r[3].w[0] + 520u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0036D280u | kUnwind; return; } goto L_0036D280; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036D2A4u);  if (depth < kMaxDepth) unit_0087(c, 136u, depth + 1u); else { c.pc = 0x0031D080u; return; } if (c.pc != 0x0036D2A4u) [[unlikely]] return; }
L_0036D2A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036D2ACu); c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_009F(c, 224u, depth + 1u); else { c.pc = 0x0037DF50u; return; } if (c.pc != 0x0036D2ACu) [[unlikely]] return; }
L_0036D2AC:
    set32(c.r[6], ld32((c.r[17].w[0] + 272u)));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 3u);
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036D2C8u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_009F(c, 261u, depth + 1u); else { c.pc = 0x0037E350u; return; } if (c.pc != 0x0036D2C8u) [[unlikely]] return; }
L_0036D2C8:
    set32(c.r[19], ld32((c.r[16].w[0] + 744u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036D2D4u); set32(c.r[4], 0u + 729u);  if (depth < kMaxDepth) unit_000B(c, 461u, depth + 1u); else { c.pc = 0x0012FD60u; return; } if (c.pc != 0x0036D2D4u) [[unlikely]] return; }
L_0036D2D4:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036D2E0u); set32(c.r[4], c.r[19].w[0] << 4);  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x001001F0u; return; } if (c.pc != 0x0036D2E0u) [[unlikely]] return; }
L_0036D2E0:
    st32((c.r[20].w[0] + 504u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036D2ECu); set32(c.r[4], c.r[19].w[0] << 3);  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x001001F0u; return; } if (c.pc != 0x0036D2ECu) [[unlikely]] return; }
L_0036D2EC:
    st32((c.r[20].w[0] + 508u), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_0036D364; } }
L_0036D2F8:
    set32(c.r[2], ld32((c.r[20].w[0] + 504u)));
    set32(c.r[16], c.r[17].w[0] << 4);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[7], c.r[17].w[0] + 1u);
    set32(c.r[5], c.r[5].w[0] - 5144u);
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036D318u); set32(c.r[4], c.r[2].w[0] + c.r[16].w[0]);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x00127458u; return; } if (c.pc != 0x0036D318u) [[unlikely]] return; }
L_0036D318:
    set32(c.r[2], ld32((c.r[20].w[0] + 508u)));
    set32(c.r[4], c.r[17].w[0] << 3);
    set32(c.r[17], c.r[17].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[20].w[0] + 508u)));
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[20].w[0] + 508u)));
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[20].w[0] + 508u)));
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[20].w[0] + 504u)));
    set32(c.r[2], ld32((c.r[20].w[0] + 508u)));
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    st32((c.r[2].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 19;
L_0036D364:
    c.r[2].d[0] = c.r[17].sd[0] < c.r[19].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0036D2F8u | kUnwind; return; } goto L_0036D2F8; } }
    st32((c.r[20].w[0] + 512u), c.r[19].w[0]);
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[20].w[0] + 508u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036D384u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_000C(c, 37u, depth + 1u); else { c.pc = 0x00130380u; return; } if (c.pc != 0x0036D384u) [[unlikely]] return; }
L_0036D384:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x41B80000u);
    c.f[0] = ld32((c.r[1].w[0] - 5080u));
    c.r[7].sd[0] = static_cast<std::int32_t>(0x433C0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x42DA0000u);
    set32(c.r[5], 0u + 12u);
    set32(c.r[4], 0u + 147u);
    set32(c.r[3], 0u + 148u);
    c.r[2].d[0] = c.r[20].d[0] + 0ull;
    st32((c.r[20].w[0] + 128u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[0] = ld32((c.r[1].w[0] - 5080u));
    st32((c.r[20].w[0] + 132u), c.f[0]);
    st32((c.r[20].w[0] + 136u), c.r[8].w[0]);
    st32((c.r[20].w[0] + 140u), c.r[7].w[0]);
    st32((c.r[20].w[0] + 144u), c.r[6].w[0]);
    st32((c.r[20].w[0] + 148u), c.r[5].w[0]);
    st32((c.r[20].w[0] + 152u), 0u);
    st32((c.r[20].w[0] + 104u), c.r[4].w[0]);
    st32((c.r[20].w[0] + 108u), c.r[3].w[0]);
    st32((c.r[20].w[0] + 112u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    c.budget -= 29;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_0036D400:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0036D494; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] + 30512u);
    set32(c.r[3], c.r[3].w[0] + 30600u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    st32((c.r[17].w[0] + 20u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + 30660u);
    st32((c.r[17].w[0] + 40u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 508u)));
    c.budget -= 12;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0036D454; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036D454u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100210u; return; } if (c.pc != 0x0036D454u) [[unlikely]] return; }
L_0036D454:
    st32((c.r[17].w[0] + 508u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 504u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0036D46C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036D46Cu);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100210u; return; } if (c.pc != 0x0036D46Cu) [[unlikely]] return; }
L_0036D46C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036D47Cu); st32((c.r[17].w[0] + 504u), 0u);  if (depth < kMaxDepth) unit_009B(c, 40u, depth + 1u); else { c.pc = 0x0036C710u; return; } if (c.pc != 0x0036D47Cu) [[unlikely]] return; }
L_0036D47C:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0036D498; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036D494u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x0036D494u) [[unlikely]] return; }
L_0036D494:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0036D498:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0036D4B0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036D4C8u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_009A(c, 351u, depth + 1u); else { c.pc = 0x0036B200u; return; } if (c.pc != 0x0036D4C8u) [[unlikely]] return; }
L_0036D4C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036D4D0u);  if (depth < kMaxDepth) unit_0087(c, 136u, depth + 1u); else { c.pc = 0x0031D080u; return; } if (c.pc != 0x0036D4D0u) [[unlikely]] return; }
L_0036D4D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036D4D8u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0087(c, 283u, depth + 1u); else { c.pc = 0x0031E690u; return; } if (c.pc != 0x0036D4D8u) [[unlikely]] return; }
L_0036D4D8:
    c.r[16].d[0] = ld8((c.r[2].w[0] + 7u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036D4E4u); st32((c.r[17].w[0] + 516u), c.r[16].w[0]);  if (depth < kMaxDepth) unit_009F(c, 224u, depth + 1u); else { c.pc = 0x0037DF50u; return; } if (c.pc != 0x0036D4E4u) [[unlikely]] return; }
L_0036D4E4:
    set32(c.r[5], c.r[16].w[0] - 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036D4F0u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_009F(c, 272u, depth + 1u); else { c.pc = 0x0037E5D0u; return; } if (c.pc != 0x0036D4F0u) [[unlikely]] return; }
L_0036D4F0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036D4FCu); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_009A(c, 414u, depth + 1u); else { c.pc = 0x0036BA90u; return; } if (c.pc != 0x0036D4FCu) [[unlikely]] return; }
L_0036D4FC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0036D510:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036D528u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0087(c, 136u, depth + 1u); else { c.pc = 0x0031D080u; return; } if (c.pc != 0x0036D528u) [[unlikely]] return; }
L_0036D528:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036D530u); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_009F(c, 224u, depth + 1u); else { c.pc = 0x0037DF50u; return; } if (c.pc != 0x0036D530u) [[unlikely]] return; }
L_0036D530:
    set32(c.r[5], ld32((c.r[17].w[0] + 36u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036D53Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_009F(c, 271u, depth + 1u); else { c.pc = 0x0037E5B0u; return; } if (c.pc != 0x0036D53Cu) [[unlikely]] return; }
L_0036D53C:
    set32(c.r[6], c.r[2].w[0] + 1u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036D54Cu); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_0087(c, 258u, depth + 1u); else { c.pc = 0x0031E180u; return; } if (c.pc != 0x0036D54Cu) [[unlikely]] return; }
L_0036D54C:
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 393u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036D55Cu); st8((c.r[16].w[0] + 394u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0087(c, 101u, depth + 1u); else { c.pc = 0x0031CBF0u; return; } if (c.pc != 0x0036D55Cu) [[unlikely]] return; }
L_0036D55C:
    set32(c.r[5], c.r[2].w[0] + 928u);
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_0036D564:
    set32(c.r[3], c.r[5].w[0] + c.r[4].w[0]);
    st8((c.r[3].w[0] + 84u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.r[3].d[0] = c.r[4].sd[0] < 23ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0036D564u | kUnwind; return; } goto L_0036D564; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0036D5A0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036D5B4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0087(c, 136u, depth + 1u); else { c.pc = 0x0031D080u; return; } if (c.pc != 0x0036D5B4u) [[unlikely]] return; }
L_0036D5B4:
    set32(c.r[3], ld32((c.r[2].w[0] + 276u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0036D5D8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036D5C8u);  if (depth < kMaxDepth) unit_009A(c, 388u, depth + 1u); else { c.pc = 0x0036B710u; return; } if (c.pc != 0x0036D5C8u) [[unlikely]] return; }
L_0036D5C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036D5D0u);  if (depth < kMaxDepth) unit_0087(c, 136u, depth + 1u); else { c.pc = 0x0031D080u; return; } if (c.pc != 0x0036D5D0u) [[unlikely]] return; }
L_0036D5D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036D5D8u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0087(c, 173u, depth + 1u); else { c.pc = 0x0031D440u; return; } if (c.pc != 0x0036D5D8u) [[unlikely]] return; }
L_0036D5D8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0036D5F0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036D600u);  if (depth < kMaxDepth) unit_009A(c, 394u, depth + 1u); else { c.pc = 0x0036B7C0u; return; } if (c.pc != 0x0036D600u) [[unlikely]] return; }
L_0036D600:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036D608u);  if (depth < kMaxDepth) unit_0087(c, 98u, depth + 1u); else { c.pc = 0x0031CBB0u; return; } if (c.pc != 0x0036D608u) [[unlikely]] return; }
L_0036D608:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036D614u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_0087(c, 122u, depth + 1u); else { c.pc = 0x0031CF50u; return; } if (c.pc != 0x0036D614u) [[unlikely]] return; }
L_0036D614:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0036D620:
    set32(c.r[29], c.r[29].w[0] - 160u);
    set32(c.r[8], 0u + 830u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    set32(c.r[3], 0u + 2u);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[20]);
    set32(c.r[2], 0u + 147u);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[19]);
    set32(c.r[5], 0u + 148u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[18]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[17]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    c.r[6].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0]), c.r[3].d[0]);
    c.r[7].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[2].d[0]);
    set32(c.r[3], 0u + 8u);
    st64((c.r[29].w[0] + 16u), c.r[5].d[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st64((c.r[29].w[0] + 24u), c.r[5].d[0]);
    c.f[13] = c.r[2].w[0];
    st64((c.r[29].w[0] + 32u), 0ull);
    set32(c.r[5], 0u + 672u);
    st64((c.r[29].w[0] + 40u), c.r[3].d[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41E00000u);
    st64((c.r[29].w[0] + 48u), 0ull);
    c.f[15] = c.r[2].w[0];
    c.f[12] = ld32((c.r[1].w[0] - 5080u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x433C0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42D40000u);
    c.r[10].d[0] = 0ull + 0ull;
    c.f[16] = c.r[3].w[0];
    c.r[9].d[0] = c.r[8].d[0] + 0ull;
    c.f[17] = c.r[2].w[0];
    c.r[11].d[0] = 0ull + 0ull;
    c.budget -= 38;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036D6B8u); c.f[14] = c.f[13];  if (depth < kMaxDepth) unit_009B(c, 35u, depth + 1u); else { c.pc = 0x0036C530u; return; } if (c.pc != 0x0036D6B8u) [[unlikely]] return; }
L_0036D6B8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] + 30336u);
    set32(c.r[3], c.r[3].w[0] + 30424u);
    st32((c.r[20].w[0]), c.r[2].w[0]);
    set32(c.r[4], c.r[20].w[0] + 504u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    st32((c.r[20].w[0] + 20u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + 30484u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036D6E4u); st32((c.r[20].w[0] + 40u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A2(c, 341u, depth + 1u); else { c.pc = 0x0038B350u; return; } if (c.pc != 0x0036D6E4u) [[unlikely]] return; }
L_0036D6E4:
    st32((c.r[20].w[0] + 516u), 0u);
    st32((c.r[20].w[0] + 520u), 0u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036D6F4u); st32((c.r[20].w[0] + 528u), 0u);  if (depth < kMaxDepth) unit_0087(c, 136u, depth + 1u); else { c.pc = 0x0031D080u; return; } if (c.pc != 0x0036D6F4u) [[unlikely]] return; }
L_0036D6F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036D6FCu); set32(c.r[4], ld32((c.r[2].w[0] + 272u)));  if (depth < kMaxDepth) unit_009F(c, 114u, depth + 1u); else { c.pc = 0x0037D150u; return; } if (c.pc != 0x0036D6FCu) [[unlikely]] return; }
L_0036D6FC:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036D708u); set32(c.r[4], 0u + 672u);  if (depth < kMaxDepth) unit_000B(c, 461u, depth + 1u); else { c.pc = 0x0012FD60u; return; } if (c.pc != 0x0036D708u) [[unlikely]] return; }
L_0036D708:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036D714u); set32(c.r[4], c.r[19].w[0] << 5);  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x001001F0u; return; } if (c.pc != 0x0036D714u) [[unlikely]] return; }
L_0036D714:
    st32((c.r[20].w[0] + 516u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036D720u); set32(c.r[4], c.r[19].w[0] << 3);  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x001001F0u; return; } if (c.pc != 0x0036D720u) [[unlikely]] return; }
L_0036D720:
    st32((c.r[20].w[0] + 520u), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_0036D798; } }
L_0036D72C:
    set32(c.r[2], ld32((c.r[20].w[0] + 516u)));
    set32(c.r[16], c.r[17].w[0] << 5);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[7], c.r[17].w[0] + 1u);
    set32(c.r[5], c.r[5].w[0] - 5144u);
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036D74Cu); set32(c.r[4], c.r[2].w[0] + c.r[16].w[0]);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x00127458u; return; } if (c.pc != 0x0036D74Cu) [[unlikely]] return; }
L_0036D74C:
    set32(c.r[2], ld32((c.r[20].w[0] + 520u)));
    set32(c.r[4], c.r[17].w[0] << 3);
    set32(c.r[17], c.r[17].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[20].w[0] + 520u)));
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[20].w[0] + 520u)));
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[20].w[0] + 520u)));
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[20].w[0] + 516u)));
    set32(c.r[2], ld32((c.r[20].w[0] + 520u)));
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    st32((c.r[2].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 19;
L_0036D798:
    c.r[2].d[0] = c.r[17].sd[0] < c.r[19].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0036D72Cu | kUnwind; return; } goto L_0036D72C; } }
    st32((c.r[20].w[0] + 524u), c.r[19].w[0]);
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[20].w[0] + 520u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036D7B8u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_000C(c, 37u, depth + 1u); else { c.pc = 0x00130380u; return; } if (c.pc != 0x0036D7B8u) [[unlikely]] return; }
L_0036D7B8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = ld32((c.r[1].w[0] - 5096u));
    c.r[8].sd[0] = static_cast<std::int32_t>(0x41E00000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x433C0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x42D40000u);
    set32(c.r[5], 0u + 10u);
    set32(c.r[4], 0u + 147u);
    set32(c.r[3], 0u + 148u);
    c.r[2].d[0] = c.r[20].d[0] + 0ull;
    st32((c.r[20].w[0] + 128u), c.f[0]);
    st32((c.r[20].w[0] + 132u), c.r[9].w[0]);
    st32((c.r[20].w[0] + 136u), c.r[8].w[0]);
    st32((c.r[20].w[0] + 140u), c.r[7].w[0]);
    st32((c.r[20].w[0] + 144u), c.r[6].w[0]);
    st32((c.r[20].w[0] + 148u), c.r[5].w[0]);
    st32((c.r[20].w[0] + 152u), 0u);
    st32((c.r[20].w[0] + 104u), c.r[4].w[0]);
    st32((c.r[20].w[0] + 108u), c.r[3].w[0]);
    st32((c.r[20].w[0] + 112u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    c.budget -= 28;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_0036D830:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0036D8D0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] + 30336u);
    set32(c.r[3], c.r[3].w[0] + 30424u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    st32((c.r[17].w[0] + 20u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + 30484u);
    st32((c.r[17].w[0] + 40u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 520u)));
    c.budget -= 12;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0036D884; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036D884u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100210u; return; } if (c.pc != 0x0036D884u) [[unlikely]] return; }
L_0036D884:
    st32((c.r[17].w[0] + 520u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 516u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0036D89C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036D89Cu);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100210u; return; } if (c.pc != 0x0036D89Cu) [[unlikely]] return; }
L_0036D89C:
    set32(c.r[4], c.r[17].w[0] + 504u);
    set32(c.r[5], 0u - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036D8ACu); st32((c.r[17].w[0] + 516u), 0u);  if (depth < kMaxDepth) unit_00A2(c, 343u, depth + 1u); else { c.pc = 0x0038B390u; return; } if (c.pc != 0x0036D8ACu) [[unlikely]] return; }
L_0036D8AC:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036D8B8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_009B(c, 40u, depth + 1u); else { c.pc = 0x0036C710u; return; } if (c.pc != 0x0036D8B8u) [[unlikely]] return; }
L_0036D8B8:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0036D8D4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036D8D0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x0036D8D0u) [[unlikely]] return; }
L_0036D8D0:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0036D8D4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0036D8F0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036D904u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_009A(c, 351u, depth + 1u); else { c.pc = 0x0036B200u; return; } if (c.pc != 0x0036D904u) [[unlikely]] return; }
L_0036D904:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036D910u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_009A(c, 414u, depth + 1u); else { c.pc = 0x0036BA90u; return; } if (c.pc != 0x0036D910u) [[unlikely]] return; }
L_0036D910:
    set32(c.r[2], 0u - 1u);
    st32((c.r[16].w[0] + 528u), c.r[2].w[0]);
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 172u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0036D928u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0036D928u) [[unlikely]] return; }
L_0036D928:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0036D940:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0] + 36u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 528u)));
    c.budget -= 7;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0036D970; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036D964u); st32((c.r[16].w[0] + 528u), c.r[5].w[0]);  if (depth < kMaxDepth) unit_0087(c, 136u, depth + 1u); else { c.pc = 0x0031D080u; return; } if (c.pc != 0x0036D964u) [[unlikely]] return; }
L_0036D964:
    set32(c.r[5], ld32((c.r[2].w[0] + 272u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036D970u); set32(c.r[4], ld32((c.r[16].w[0] + 36u)));  if (depth < kMaxDepth) unit_009F(c, 102u, depth + 1u); else { c.pc = 0x0037D090u; return; } if (c.pc != 0x0036D970u) [[unlikely]] return; }
L_0036D970:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0036D980:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036D990u);  if (depth < kMaxDepth) unit_009B(c, 56u, depth + 1u); else { c.pc = 0x0036C830u; return; } if (c.pc != 0x0036D990u) [[unlikely]] return; }
L_0036D990:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036D998u);  if (depth < kMaxDepth) unit_0087(c, 98u, depth + 1u); else { c.pc = 0x0031CBB0u; return; } if (c.pc != 0x0036D998u) [[unlikely]] return; }
L_0036D998:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036D9A4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0087(c, 122u, depth + 1u); else { c.pc = 0x0031CF50u; return; } if (c.pc != 0x0036D9A4u) [[unlikely]] return; }
L_0036D9A4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0036D9B0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036D9C4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_009A(c, 418u, depth + 1u); else { c.pc = 0x0036BB20u; return; } if (c.pc != 0x0036D9C4u) [[unlikely]] return; }
L_0036D9C4:
    set32(c.r[3], ld32((c.r[16].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0036D9EC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036D9D8u);  if (depth < kMaxDepth) unit_0087(c, 136u, depth + 1u); else { c.pc = 0x0031D080u; return; } if (c.pc != 0x0036D9D8u) [[unlikely]] return; }
L_0036D9D8:
    set32(c.r[4], ld32((c.r[2].w[0] + 276u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 24u)));
    c.r[4].d[0] = c.r[4].d[0] ^ 0ull;
    c.r[4].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    st8((c.r[3].w[0] + 34u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 5;
L_0036D9EC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0036DA00:
    set32(c.r[29], c.r[29].w[0] - 160u);
    set32(c.r[8], 0u + 830u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    set32(c.r[3], 0u + 2u);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[20]);
    set32(c.r[2], 0u + 147u);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[19]);
    set32(c.r[5], 0u + 148u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[18]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[17]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    c.r[6].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0]), c.r[3].d[0]);
    c.r[7].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[2].d[0]);
    set32(c.r[3], 0u + 8u);
    st64((c.r[29].w[0] + 16u), c.r[5].d[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st64((c.r[29].w[0] + 24u), c.r[5].d[0]);
    c.f[13] = c.r[2].w[0];
    st64((c.r[29].w[0] + 32u), 0ull);
    set32(c.r[5], 0u + 658u);
    st64((c.r[29].w[0] + 40u), c.r[3].d[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41E00000u);
    st64((c.r[29].w[0] + 48u), 0ull);
    c.f[15] = c.r[2].w[0];
    c.f[12] = ld32((c.r[1].w[0] - 5080u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x433C0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42D40000u);
    c.r[10].d[0] = 0ull + 0ull;
    c.f[16] = c.r[3].w[0];
    c.r[9].d[0] = c.r[8].d[0] + 0ull;
    c.f[17] = c.r[2].w[0];
    c.r[11].d[0] = 0ull + 0ull;
    c.budget -= 38;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036DA98u); c.f[14] = c.f[13];  if (depth < kMaxDepth) unit_009B(c, 35u, depth + 1u); else { c.pc = 0x0036C530u; return; } if (c.pc != 0x0036DA98u) [[unlikely]] return; }
L_0036DA98:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] + 30160u);
    set32(c.r[3], c.r[3].w[0] + 30248u);
    st32((c.r[20].w[0]), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    st32((c.r[20].w[0] + 20u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + 30308u);
    st32((c.r[20].w[0] + 40u), c.r[2].w[0]);
    st32((c.r[20].w[0] + 504u), 0u);
    st32((c.r[20].w[0] + 508u), 0u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036DACCu); st32((c.r[20].w[0] + 516u), 0u);  if (depth < kMaxDepth) unit_0087(c, 136u, depth + 1u); else { c.pc = 0x0031D080u; return; } if (c.pc != 0x0036DACCu) [[unlikely]] return; }
L_0036DACC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036DAD4u); set32(c.r[4], ld32((c.r[2].w[0] + 272u)));  if (depth < kMaxDepth) unit_009F(c, 98u, depth + 1u); else { c.pc = 0x0037D020u; return; } if (c.pc != 0x0036DAD4u) [[unlikely]] return; }
L_0036DAD4:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036DAE0u); set32(c.r[4], 0u + 658u);  if (depth < kMaxDepth) unit_000B(c, 461u, depth + 1u); else { c.pc = 0x0012FD60u; return; } if (c.pc != 0x0036DAE0u) [[unlikely]] return; }
L_0036DAE0:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036DAECu); set32(c.r[4], c.r[19].w[0] << 5);  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x001001F0u; return; } if (c.pc != 0x0036DAECu) [[unlikely]] return; }
L_0036DAEC:
    st32((c.r[20].w[0] + 504u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036DAF8u); set32(c.r[4], c.r[19].w[0] << 3);  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x001001F0u; return; } if (c.pc != 0x0036DAF8u) [[unlikely]] return; }
L_0036DAF8:
    st32((c.r[20].w[0] + 508u), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_0036DB70; } }
L_0036DB04:
    set32(c.r[2], ld32((c.r[20].w[0] + 504u)));
    set32(c.r[16], c.r[17].w[0] << 5);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[7], c.r[17].w[0] + 1u);
    set32(c.r[5], c.r[5].w[0] - 5144u);
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036DB24u); set32(c.r[4], c.r[2].w[0] + c.r[16].w[0]);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x00127458u; return; } if (c.pc != 0x0036DB24u) [[unlikely]] return; }
L_0036DB24:
    set32(c.r[2], ld32((c.r[20].w[0] + 508u)));
    set32(c.r[4], c.r[17].w[0] << 3);
    set32(c.r[17], c.r[17].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[20].w[0] + 508u)));
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[20].w[0] + 508u)));
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[20].w[0] + 508u)));
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[20].w[0] + 504u)));
    set32(c.r[2], ld32((c.r[20].w[0] + 508u)));
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    st32((c.r[2].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 19;
L_0036DB70:
    c.r[2].d[0] = c.r[17].sd[0] < c.r[19].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0036DB04u | kUnwind; return; } goto L_0036DB04; } }
    st32((c.r[20].w[0] + 512u), c.r[19].w[0]);
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[20].w[0] + 508u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036DB90u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_000C(c, 37u, depth + 1u); else { c.pc = 0x00130380u; return; } if (c.pc != 0x0036DB90u) [[unlikely]] return; }
L_0036DB90:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = ld32((c.r[1].w[0] - 5096u));
    c.r[8].sd[0] = static_cast<std::int32_t>(0x41E00000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x433C0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x42CC0000u);
    set32(c.r[5], 0u + 10u);
    set32(c.r[4], 0u + 147u);
    set32(c.r[3], 0u + 148u);
    c.r[2].d[0] = c.r[20].d[0] + 0ull;
    st32((c.r[20].w[0] + 128u), c.f[0]);
    st32((c.r[20].w[0] + 132u), c.r[9].w[0]);
    st32((c.r[20].w[0] + 136u), c.r[8].w[0]);
    st32((c.r[20].w[0] + 140u), c.r[7].w[0]);
    st32((c.r[20].w[0] + 144u), c.r[6].w[0]);
    st32((c.r[20].w[0] + 148u), c.r[5].w[0]);
    st32((c.r[20].w[0] + 152u), 0u);
    st32((c.r[20].w[0] + 104u), c.r[4].w[0]);
    st32((c.r[20].w[0] + 108u), c.r[3].w[0]);
    st32((c.r[20].w[0] + 112u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    c.budget -= 28;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_0036DC00:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0036DC94; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] + 30160u);
    set32(c.r[3], c.r[3].w[0] + 30248u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    st32((c.r[17].w[0] + 20u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + 30308u);
    st32((c.r[17].w[0] + 40u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 508u)));
    c.budget -= 12;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0036DC54; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036DC54u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100210u; return; } if (c.pc != 0x0036DC54u) [[unlikely]] return; }
L_0036DC54:
    st32((c.r[17].w[0] + 508u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 504u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0036DC6C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036DC6Cu);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100210u; return; } if (c.pc != 0x0036DC6Cu) [[unlikely]] return; }
L_0036DC6C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036DC7Cu); st32((c.r[17].w[0] + 504u), 0u);  if (depth < kMaxDepth) unit_009B(c, 40u, depth + 1u); else { c.pc = 0x0036C710u; return; } if (c.pc != 0x0036DC7Cu) [[unlikely]] return; }
L_0036DC7C:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0036DC98; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036DC94u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x0036DC94u) [[unlikely]] return; }
L_0036DC94:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0036DC98:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0036DCB0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036DCC4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_009A(c, 351u, depth + 1u); else { c.pc = 0x0036B200u; return; } if (c.pc != 0x0036DCC4u) [[unlikely]] return; }
L_0036DCC4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036DCD0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_009A(c, 414u, depth + 1u); else { c.pc = 0x0036BA90u; return; } if (c.pc != 0x0036DCD0u) [[unlikely]] return; }
L_0036DCD0:
    set32(c.r[2], 0u - 1u);
    st32((c.r[16].w[0] + 516u), c.r[2].w[0]);
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 172u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0036DCE8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0036DCE8u) [[unlikely]] return; }
L_0036DCE8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0036DD00:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0] + 36u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 516u)));
    c.budget -= 8;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0036DD48; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036DD28u); st32((c.r[17].w[0] + 516u), c.r[5].w[0]);  if (depth < kMaxDepth) unit_0087(c, 136u, depth + 1u); else { c.pc = 0x0031D080u; return; } if (c.pc != 0x0036DD28u) [[unlikely]] return; }
L_0036DD28:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036DD30u); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0087(c, 101u, depth + 1u); else { c.pc = 0x0031CBF0u; return; } if (c.pc != 0x0036DD30u) [[unlikely]] return; }
L_0036DD30:
    set32(c.r[5], ld32((c.r[17].w[0] + 36u)));
    set32(c.r[6], ld32((c.r[16].w[0] + 272u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036DD40u); set32(c.r[4], c.r[2].w[0] + 928u);  if (depth < kMaxDepth) unit_009F(c, 85u, depth + 1u); else { c.pc = 0x0037CF30u; return; } if (c.pc != 0x0036DD40u) [[unlikely]] return; }
L_0036DD40:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036DD48u);  if (depth < kMaxDepth) unit_007A(c, 324u, depth + 1u); else { c.pc = 0x002EA9F0u; return; } if (c.pc != 0x0036DD48u) [[unlikely]] return; }
L_0036DD48:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0036DD60:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036DD70u);  if (depth < kMaxDepth) unit_009B(c, 56u, depth + 1u); else { c.pc = 0x0036C830u; return; } if (c.pc != 0x0036DD70u) [[unlikely]] return; }
L_0036DD70:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036DD78u);  if (depth < kMaxDepth) unit_0087(c, 98u, depth + 1u); else { c.pc = 0x0031CBB0u; return; } if (c.pc != 0x0036DD78u) [[unlikely]] return; }
L_0036DD78:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036DD84u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0087(c, 122u, depth + 1u); else { c.pc = 0x0031CF50u; return; } if (c.pc != 0x0036DD84u) [[unlikely]] return; }
L_0036DD84:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0036DD90:
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
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036DDC8u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000C(c, 12u, depth + 1u); else { c.pc = 0x001300B0u; return; } if (c.pc != 0x0036DDC8u) [[unlikely]] return; }
L_0036DDC8:
    set32(c.r[4], c.r[20].w[0] + 40u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036DDD4u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 264u, depth + 1u); else { c.pc = 0x0013E560u; return; } if (c.pc != 0x0036DDD4u) [[unlikely]] return; }
L_0036DDD4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] + 29984u);
    set32(c.r[3], c.r[3].w[0] + 30072u);
    st32((c.r[20].w[0]), c.r[2].w[0]);
    set32(c.r[4], c.r[20].w[0] + 64u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    st32((c.r[20].w[0] + 20u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + 30132u);
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[20].w[0] + 40u), c.r[2].w[0]);
    st32((c.r[20].w[0] + 52u), c.r[16].w[0]);
    st32((c.r[20].w[0] + 56u), c.r[19].w[0]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036DE10u); st32((c.r[20].w[0] + 60u), c.r[18].w[0]);  if (depth < kMaxDepth) unit_0049(c, 271u, depth + 1u); else { c.pc = 0x002275A0u; return; } if (c.pc != 0x0036DE10u) [[unlikely]] return; }
L_0036DE10:
    set32(c.r[4], 0u + 9u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036DE1Cu); st32((c.r[20].w[0] + 124u), 0u);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x0036DE1Cu) [[unlikely]] return; }
L_0036DE1C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036DE28u); set32(c.r[4], 0u + 8u);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x0036DE28u) [[unlikely]] return; }
L_0036DE28:
    ld128((c.r[2].w[0]) & ~15u, c.r[4]);
    set32(c.r[3], 0u + 30u);
    st128((c.r[20].w[0] + 144u) & ~15u, c.r[4]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    ld128((c.r[16].w[0]) & ~15u, c.r[4]);
    st128((c.r[20].w[0] + 160u) & ~15u, c.r[4]);
    st32((c.r[20].w[0] + 196u), c.r[3].w[0]);
    st32((c.r[20].w[0] + 192u), 0u);
    st32((c.r[20].w[0] + 204u), 0u);
    st8((c.r[20].w[0] + 200u), static_cast<std::uint8_t>(0u));
    ld128((c.r[20].w[0] + 144u) & ~15u, c.r[3]);
    st128((c.r[20].w[0] + 176u) & ~15u, c.r[3]);
    st32((c.r[20].w[0] + 208u), 0u);
    st32((c.r[20].w[0] + 212u), c.r[17].w[0]);
    st32((c.r[20].w[0] + 224u), 0u);
    st32((c.r[20].w[0] + 228u), c.r[2].w[0]);
    st8((c.r[20].w[0] + 240u), static_cast<std::uint8_t>(0u));
    st8((c.r[20].w[0] + 241u), static_cast<std::uint8_t>(0u));
    st8((c.r[20].w[0] + 242u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[20].w[0] + 212u)));
    c.budget -= 22;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_0036DE84; } }
    st32((c.r[20].w[0] + 212u), 0u);
    c.budget -= 1;
L_0036DE84:
    set32(c.r[2], ld32((c.r[20].w[0] + 212u)));
    c.r[1].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0036DE98; } }
    st32((c.r[20].w[0] + 212u), c.r[2].w[0]);
    c.budget -= 1;
L_0036DE98:
    set32(c.r[2], ld32((c.r[20].w[0] + 212u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 2u);  if (t) { goto L_0036DECC; } }
    st16((c.r[20].w[0] + 128u), static_cast<std::uint16_t>(0u));
    set32(c.r[2], 0u + 1u);
    st16((c.r[20].w[0] + 130u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    st32((c.r[20].w[0] + 216u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43200000u);
    st32((c.r[20].w[0] + 220u), c.r[2].w[0]);
    set32(c.r[2], 0u + 180u);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 232u), c.r[2].w[0]);  if (t) { goto L_0036DEF0; } }
L_0036DECC:
    set32(c.r[3], 0u + 3u);
    st16((c.r[20].w[0] + 128u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st16((c.r[20].w[0] + 130u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x433C0000u);
    st32((c.r[20].w[0] + 216u), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43200000u);
    set32(c.r[2], 0u + 180u);
    st32((c.r[20].w[0] + 220u), c.r[3].w[0]);
    st32((c.r[20].w[0] + 232u), c.r[2].w[0]);
    c.budget -= 9;
L_0036DEF0:
    c.r[1].d[0] = c.r[18].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[2].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_0036DF60; } }
    set32(c.r[2], 0u + 6u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[4], c.r[2].w[0] - c.r[18].w[0]);
    set32(c.r[3], c.r[4].w[0] << 4);
    set32(c.r[2], c.r[4].w[0] << 3);
    c.f[1] = c.r[3].w[0];
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    c.f[0] = ld32((c.r[20].w[0] + 220u));
    set32(c.r[2], c.r[2].w[0] << 2);
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.f[1] = c.r[2].w[0];
    st32((c.r[20].w[0] + 220u), c.f[0]);
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = c.r[4].w[0];
    st32((c.r[20].w[0] + 224u), c.f[1]);
    c.f[2] = fp::cvt_s_w(c.f[0]);
    c.f[1] = ld32((c.r[1].w[0] - 5104u));
    c.f[0] = ld32((c.r[20].w[0] + 228u));
    c.f[1] = fp::mul(c.f[1], c.f[2]);
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    st32((c.r[20].w[0] + 228u), c.f[0]);
    c.r[2].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 25;
L_0036DF60:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0036DF80:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0036E024; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] + 29984u);
    set32(c.r[3], c.r[3].w[0] + 30072u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    st32((c.r[17].w[0] + 20u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + 30132u);
    st32((c.r[17].w[0] + 40u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 124u)));
    c.budget -= 12;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0036DFE4; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0036DFE4; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0036DFE4u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0036DFE4u) [[unlikely]] return; }
L_0036DFE4:
    set32(c.r[4], c.r[17].w[0] + 64u);
    set32(c.r[5], 0u - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036DFF4u); st32((c.r[17].w[0] + 124u), 0u);  if (depth < kMaxDepth) unit_0049(c, 274u, depth + 1u); else { c.pc = 0x002275F0u; return; } if (c.pc != 0x0036DFF4u) [[unlikely]] return; }
L_0036DFF4:
    set32(c.r[4], c.r[17].w[0] + 40u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036E000u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000F(c, 266u, depth + 1u); else { c.pc = 0x0013E5B0u; return; } if (c.pc != 0x0036E000u) [[unlikely]] return; }
L_0036E000:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036E00Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000C(c, 15u, depth + 1u); else { c.pc = 0x00130130u; return; } if (c.pc != 0x0036E00Cu) [[unlikely]] return; }
L_0036E00C:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0036E028; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036E024u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x0036E024u) [[unlikely]] return; }
L_0036E024:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0036E028:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0036E040:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036E058u); set32(c.r[4], 0u + 44u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0036E058u) [[unlikely]] return; }
L_0036E058:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[7].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0036E088; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0036E06C; } }
    set32(c.r[7], c.r[7].w[0] + 20u);
    c.budget -= 1;
L_0036E06C:
    set32(c.r[8], ld32((c.r[16].w[0] + 56u)));
    set32(c.r[5], 0u + 1u);
    set32(c.r[9], ld32((c.r[16].w[0] + 60u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036E088u); c.r[10].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 371u, depth + 1u); else { c.pc = 0x0012EBA0u; return; } if (c.pc != 0x0036E088u) [[unlikely]] return; }
L_0036E088:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0036E0A0:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x001301E0u | kUnwind; return; } [[clang::musttail]] return unit_000C(c, 21u, depth); }
L_0036E0B0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036E0C4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_000C(c, 24u, depth + 1u); else { c.pc = 0x00130260u; return; } if (c.pc != 0x0036E0C4u) [[unlikely]] return; }
L_0036E0C4:
    st8((c.r[16].w[0] + 241u), static_cast<std::uint8_t>(0u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0036E0E0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036E0F8u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_000C(c, 25u, depth + 1u); else { c.pc = 0x00130270u; return; } if (c.pc != 0x0036E0F8u) [[unlikely]] return; }
L_0036E0F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036E100u);  if (depth < kMaxDepth) unit_009F(c, 118u, depth + 1u); else { c.pc = 0x0037D1C0u; return; } if (c.pc != 0x0036E100u) [[unlikely]] return; }
L_0036E100:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 124u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0036E1B0; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 52u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0; set32(c.r[4], 0u + 160u);  if (t) { goto L_0036E148; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036E124u); set32(c.r[4], 0u + 160u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0036E124u) [[unlikely]] return; }
L_0036E124:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0036E140; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 52u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], 0u + 3u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036E140u); set32(c.r[6], c.r[3].w[0] - 1u);  if (depth < kMaxDepth) unit_002A(c, 287u, depth + 1u); else { c.pc = 0x001AB200u; return; } if (c.pc != 0x0036E140u) [[unlikely]] return; }
L_0036E140:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 124u), c.r[2].w[0]);  if (t) { goto L_0036E16C; } }
L_0036E148:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036E150u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0036E150u) [[unlikely]] return; }
L_0036E150:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0036E168; } }
    set32(c.r[6], ld32((c.r[16].w[0] + 52u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036E168u); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_002A(c, 287u, depth + 1u); else { c.pc = 0x001AB200u; return; } if (c.pc != 0x0036E168u) [[unlikely]] return; }
L_0036E168:
    st32((c.r[16].w[0] + 124u), c.r[2].w[0]);
    c.budget -= 1;
L_0036E16C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036E178u); set32(c.r[5], 0u + 10000u);  if (depth < kMaxDepth) unit_002A(c, 5u, depth + 1u); else { c.pc = 0x001A80A0u; return; } if (c.pc != 0x0036E178u) [[unlikely]] return; }
L_0036E178:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 2u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036E188u); c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_002A(c, 3u, depth + 1u); else { c.pc = 0x001A8060u; return; } if (c.pc != 0x0036E188u) [[unlikely]] return; }
L_0036E188:
    set32(c.r[4], ld32((c.r[16].w[0] + 124u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036E198u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 322u, depth + 1u); else { c.pc = 0x00196E30u; return; } if (c.pc != 0x0036E198u) [[unlikely]] return; }
L_0036E198:
    set32(c.r[2], ld32((c.r[16].w[0] + 124u)));
    set32(c.r[3], c.r[29].w[0] + 64u);
    ld128((c.r[2].w[0] + 96u) & ~15u, c.r[2]);
    st128((c.r[3].w[0]) & ~15u, c.r[2]);
    c.f[0] = ld32((c.r[29].w[0] + 68u));
    st32((c.r[16].w[0] + 236u), c.f[0]);
    c.budget -= 6;
L_0036E1B0:
    c.f[1] = ld32((c.r[16].w[0] + 228u));
    set32(c.r[5], ld32((c.r[16].w[0] + 124u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    set32(c.r[3], c.r[29].w[0] + 48u);
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[5].w[0] + 112u), c.r[4].w[0]);
    st32((c.r[5].w[0] + 116u), c.f[1]);
    st32((c.r[5].w[0] + 120u), c.r[4].w[0]);
    st32((c.r[5].w[0] + 124u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 124u)));
    ld128((c.r[4].w[0] + 96u) & ~15u, c.r[2]);
    st128((c.r[3].w[0]) & ~15u, c.r[2]);
    c.f[2] = ld32((c.r[16].w[0] + 236u));
    c.f[1] = ld32((c.r[16].w[0] + 224u));
    c.f[1] = fp::add(c.f[2], c.f[1]);
    st32((c.r[29].w[0] + 52u), c.f[1]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[2]);
    st128((c.r[4].w[0] + 96u) & ~15u, c.r[2]);
    set32(c.r[2], ld32((c.r[16].w[0] + 124u)));
    st32((c.r[2].w[0] + 104u), c.f[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 124u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 29;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0036E224u); c.r[5].d[0] = ld16((c.r[16].w[0] + 128u));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0036E224u) [[unlikely]] return; }
L_0036E224:
    st32((c.r[16].w[0] + 100u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    st32((c.r[16].w[0] + 104u), 0u);
    set32(c.r[3], 0u + 5u);
    st32((c.r[16].w[0] + 108u), c.r[2].w[0]);
    set32(c.r[4], c.r[16].w[0] + 64u);
    set32(c.r[2], 0u + 10u);
    st32((c.r[16].w[0] + 112u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 116u), c.r[2].w[0]);
    set32(c.r[5], c.r[16].w[0] + 100u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036E254u); st32((c.r[16].w[0] + 120u), 0u);  if (depth < kMaxDepth) unit_0049(c, 280u, depth + 1u); else { c.pc = 0x002276C0u; return; } if (c.pc != 0x0036E254u) [[unlikely]] return; }
L_0036E254:
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0] + 240u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 241u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0036E280:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036E294u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_000C(c, 26u, depth + 1u); else { c.pc = 0x00130280u; return; } if (c.pc != 0x0036E294u) [[unlikely]] return; }
L_0036E294:
    set32(c.r[4], ld32((c.r[16].w[0] + 124u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x437F0000u);  if (t) { goto L_0036E2B4; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0036E2B0u); c.r[5].d[0] = ld16((c.r[16].w[0] + 130u));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0036E2B0u) [[unlikely]] return; }
L_0036E2B0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    c.budget -= 1;
L_0036E2B4:
    set32(c.r[2], 0u + 5u);
    st32((c.r[16].w[0] + 100u), c.r[3].w[0]);
    set32(c.r[4], c.r[16].w[0] + 64u);
    st32((c.r[16].w[0] + 104u), c.r[3].w[0]);
    set32(c.r[5], c.r[16].w[0] + 100u);
    st32((c.r[16].w[0] + 108u), 0u);
    st32((c.r[16].w[0] + 112u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 116u), 0u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036E2DCu); st32((c.r[16].w[0] + 120u), 0u);  if (depth < kMaxDepth) unit_0049(c, 280u, depth + 1u); else { c.pc = 0x002276C0u; return; } if (c.pc != 0x0036E2DCu) [[unlikely]] return; }
L_0036E2DC:
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0] + 241u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 242u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0036E300:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036E314u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_000C(c, 27u, depth + 1u); else { c.pc = 0x00130290u; return; } if (c.pc != 0x0036E314u) [[unlikely]] return; }
L_0036E314:
    set32(c.r[4], ld32((c.r[16].w[0] + 124u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x437F0000u);  if (t) { goto L_0036E334; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0036E330u); c.r[5].d[0] = ld16((c.r[16].w[0] + 130u));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0036E330u) [[unlikely]] return; }
L_0036E330:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    c.budget -= 1;
L_0036E334:
    set32(c.r[2], 0u + 5u);
    st32((c.r[16].w[0] + 100u), c.r[3].w[0]);
    set32(c.r[4], c.r[16].w[0] + 64u);
    st32((c.r[16].w[0] + 104u), c.r[3].w[0]);
    set32(c.r[5], c.r[16].w[0] + 100u);
    st32((c.r[16].w[0] + 108u), 0u);
    st32((c.r[16].w[0] + 112u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 116u), 0u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036E35Cu); st32((c.r[16].w[0] + 120u), 0u);  if (depth < kMaxDepth) unit_0049(c, 280u, depth + 1u); else { c.pc = 0x002276C0u; return; } if (c.pc != 0x0036E35Cu) [[unlikely]] return; }
L_0036E35C:
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0] + 241u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0036E380:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036E39Cu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_000C(c, 32u, depth + 1u); else { c.pc = 0x00130300u; return; } if (c.pc != 0x0036E39Cu) [[unlikely]] return; }
L_0036E39C:
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[5], ld32((c.r[16].w[0] + 24u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 140u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0036E3B0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0036E3B0u) [[unlikely]] return; }
L_0036E3B0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0036E3D0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036E3ECu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_000C(c, 29u, depth + 1u); else { c.pc = 0x001302B0u; return; } if (c.pc != 0x0036E3ECu) [[unlikely]] return; }
L_0036E3EC:
    st32((c.r[17].w[0] + 208u), c.r[16].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0036E410:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 240u));
    c.budget -= 12;
    { const bool t = c.r[3].d[0] == 0ull; c.r[21].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0036E6FC; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 26392u)));
    c.f[0] = ld32((c.r[21].w[0] + 76u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[18], ld32((c.r[2].w[0] + 440u)));
    set32(c.r[19], c.f[0]);
    c.budget -= 8;
    { const bool t = c.r[18].d[0] == 0ull; set32(c.r[17], ld32((c.r[2].w[0] + 444u)));  if (t) { goto L_0036E688; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; c.r[20].d[0] = 0ull + 0ull;  if (t) { goto L_0036E688; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[21].w[0] + 60u)));  if (t) { goto L_0036E67C; } }
L_0036E470:
    set32(c.r[16], c.r[20].w[0] << 3);
    st32((c.r[18].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[2], 0u + 91u);
    st32((c.r[18].w[0] + 20u), c.r[3].w[0]);
    st32((c.r[18].w[0] + 24u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[21].w[0] + 56u)));
    set32(c.r[5], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0] + 4u)));
    c.budget -= 10;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_0036E4A0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u + 3u);  if (t) { goto L_0036E4B0; } }
L_0036E4A0:
    c.r[2].d[0] = ld8((c.r[5].w[0]));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0036E4B0; } }
    set32(c.r[4], 0u + 2u);
    c.budget -= 1;
L_0036E4B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036E4B8u);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x0036E4B8u) [[unlikely]] return; }
L_0036E4B8:
    ld128((c.r[2].w[0]) & ~15u, c.r[4]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    st128((c.r[18].w[0] + 48u) & ~15u, c.r[4]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[18].w[0] + 60u), c.r[19].w[0]);
    st32((c.r[18].w[0] + 300u), c.r[19].w[0]);
    st32((c.r[18].w[0] + 304u), c.r[3].w[0]);
    st32((c.r[18].w[0] + 308u), c.r[3].w[0]);
    st32((c.r[18].w[0] + 312u), 0u);
    st32((c.r[18].w[0] + 316u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[21].w[0] + 56u)));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036E4F0u); set32(c.r[4], ld32((c.r[2].w[0] + 4u)));  if (depth < kMaxDepth) unit_000B(c, 461u, depth + 1u); else { c.pc = 0x0012FD60u; return; } if (c.pc != 0x0036E4F0u) [[unlikely]] return; }
L_0036E4F0:
    c.f[1] = c.r[20].w[0];
    st32((c.r[18].w[0] + 352u), c.r[2].w[0]);
    st32((c.r[18].w[0] + 356u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41C00000u);
    c.f[1] = fp::cvt_s_w(c.f[1]);
    set32(c.r[25], ld32((c.r[18].w[0] + 176u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.f[2] = c.r[2].w[0];
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.f[0] = ld32((c.r[21].w[0] + 220u));
    c.f[20] = fp::mul(c.f[2], c.f[1]);
    c.f[12] = ld32((c.r[21].w[0] + 216u));
    c.f[14] = ld32((c.r[1].w[0] - 5112u));
    c.budget -= 16;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0036E530u); c.f[13] = fp::add(c.f[0], c.f[20]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0036E530u) [[unlikely]] return; }
L_0036E530:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036E538u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0018(c, 67u, depth + 1u); else { c.pc = 0x00162250u; return; } if (c.pc != 0x0036E538u) [[unlikely]] return; }
L_0036E538:
    set32(c.r[3], ld32((c.r[21].w[0] + 232u)));
    c.r[1].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0036E580; } }
    c.f[1] = c.r[3].w[0];
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    set32(c.r[3], c.r[29].w[0] + 144u);
    ld128((c.r[18].w[0] + 16u) & ~15u, c.r[2]);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st128((c.r[3].w[0]) & ~15u, c.r[2]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    st32((c.r[18].w[0] + 16u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 148u));
    st32((c.r[18].w[0] + 20u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 152u));
    st32((c.r[18].w[0] + 24u), c.f[0]);
    c.budget -= 14;
L_0036E580:
    set32(c.r[2], ld32((c.r[21].w[0] + 208u)));
    c.budget -= 3;
    { const bool t = c.r[20].d[0] != c.r[2].d[0];  if (t) { goto L_0036E634; } }
    c.r[2].d[0] = ld8((c.r[21].w[0] + 241u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0036E634; } }
    ld128((c.r[18].w[0] + 16u) & ~15u, c.r[3]);
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[1] = c.r[2].w[0];
    st128((c.r[4].w[0]) & ~15u, c.r[3]);
    c.f[0] = ld32((c.r[29].w[0] + 128u));
    st32((c.r[17].w[0] + 16u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 132u));
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    st32((c.r[17].w[0] + 20u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 136u));
    st32((c.r[17].w[0] + 24u), c.f[0]);
    ld128((c.r[21].w[0] + 176u) & ~15u, c.r[2]);
    st128((c.r[17].w[0] + 48u) & ~15u, c.r[2]);
    set32(c.r[2], ld32((c.r[21].w[0] + 56u)));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036E5E0u); set32(c.r[4], ld32((c.r[2].w[0] + 4u)));  if (depth < kMaxDepth) unit_000B(c, 461u, depth + 1u); else { c.pc = 0x0012FD60u; return; } if (c.pc != 0x0036E5E0u) [[unlikely]] return; }
L_0036E5E0:
    st32((c.r[17].w[0] + 352u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    st32((c.r[17].w[0] + 356u), 0u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[17].w[0] + 176u)));
    c.f[0] = ld32((c.r[21].w[0] + 220u));
    c.f[12] = ld32((c.r[21].w[0] + 216u));
    c.f[14] = ld32((c.r[1].w[0] - 5112u));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 11;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0036E60Cu); c.f[13] = fp::add(c.f[0], c.f[20]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0036E60Cu) [[unlikely]] return; }
L_0036E60C:
    set32(c.r[25], ld32((c.r[17].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0036E61Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0036E61Cu) [[unlikely]] return; }
L_0036E61C:
    set32(c.r[25], ld32((c.r[18].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0036E62Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0036E62Cu) [[unlikely]] return; }
L_0036E62C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[20], c.r[20].w[0] + 1u);  if (t) { goto L_0036E678; } }
L_0036E634:
    set32(c.r[25], ld32((c.r[18].w[0] + 176u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u - 1u);
    set32(c.r[25], ld32((c.r[25].w[0] + 68u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0036E654u); set32(c.r[8], 0u + 2u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0036E654u) [[unlikely]] return; }
L_0036E654:
    set32(c.r[25], ld32((c.r[18].w[0] + 176u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u - 1u);
    set32(c.r[25], ld32((c.r[25].w[0] + 68u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0036E674u); c.r[8].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0036E674u) [[unlikely]] return; }
L_0036E674:
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.budget -= 1;
L_0036E678:
    set32(c.r[2], ld32((c.r[21].w[0] + 60u)));
    c.budget -= 1;
L_0036E67C:
    c.r[2].d[0] = c.r[20].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0036E470u | kUnwind; return; } goto L_0036E470; } }
L_0036E688:
    c.r[2].d[0] = ld8((c.r[21].w[0] + 200u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0036E6C0; } }
    set32(c.r[2], ld32((c.r[21].w[0] + 204u)));
    set32(c.r[3], c.r[2].w[0] - 1u);
    st32((c.r[21].w[0] + 204u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[21].w[0] + 192u)));
    set32(c.r[2], 0u - c.r[2].w[0]);
    c.r[1].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[4], c.r[21].w[0] + 144u);  if (t) { goto L_0036E6F4; } }
    st32((c.r[21].w[0] + 204u), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[21].w[0] + 200u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0036E6F0; } }
L_0036E6C0:
    set32(c.r[2], ld32((c.r[21].w[0] + 204u)));
    set32(c.r[4], c.r[2].w[0] + 1u);
    st32((c.r[21].w[0] + 204u), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[21].w[0] + 196u)));
    set32(c.r[2], ld32((c.r[21].w[0] + 192u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.r[1].d[0] = c.r[2].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0036E6F0; } }
    st32((c.r[21].w[0] + 204u), c.r[2].w[0]);
    set32(c.r[2], 0u + 1u);
    st8((c.r[21].w[0] + 200u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
L_0036E6F0:
    set32(c.r[4], c.r[21].w[0] + 144u);
    c.budget -= 1;
L_0036E6F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036E6FCu);  if (depth < kMaxDepth) unit_002A(c, 280u, depth + 1u); else { c.pc = 0x001AB050u; return; } if (c.pc != 0x0036E6FCu) [[unlikely]] return; }
L_0036E6FC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_0036E730:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036E744u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_002A(c, 135u, depth + 1u); else { c.pc = 0x001A9560u; return; } if (c.pc != 0x0036E744u) [[unlikely]] return; }
L_0036E744:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0036E75C; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0036E75Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0036E75Cu) [[unlikely]] return; }
L_0036E75C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0036E770:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036E784u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_009B(c, 306u, depth + 1u); else { c.pc = 0x0036E840u; return; } if (c.pc != 0x0036E784u) [[unlikely]] return; }
L_0036E784:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0036E79C; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0036E79Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0036E79Cu) [[unlikely]] return; }
L_0036E79C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0036E7B0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0036E7C0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036E7D4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_009B(c, 306u, depth + 1u); else { c.pc = 0x0036E840u; return; } if (c.pc != 0x0036E7D4u) [[unlikely]] return; }
L_0036E7D4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0036E7EC; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0036E7ECu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0036E7ECu) [[unlikely]] return; }
L_0036E7EC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0036E800:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036E814u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_009B(c, 306u, depth + 1u); else { c.pc = 0x0036E840u; return; } if (c.pc != 0x0036E814u) [[unlikely]] return; }
L_0036E814:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0036E82C; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0036E82Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0036E82Cu) [[unlikely]] return; }
L_0036E82C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0036E840:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = ld8((c.r[4].w[0] + 96u));  c.pc = t; return; }
L_0036E850:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0036E860:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0] + 24u), c.f[12]);
    st32((c.r[4].w[0] + 28u), c.f[13]);
    st32((c.r[4].w[0] + 32u), 0u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036E888u); set32(c.r[4], 0u + 256u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0036E888u) [[unlikely]] return; }
L_0036E888:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0036E898; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036E898u);  if (depth < kMaxDepth) unit_0017(c, 177u, depth + 1u); else { c.pc = 0x0015E070u; return; } if (c.pc != 0x0036E898u) [[unlikely]] return; }
L_0036E898:
    st32((c.r[17].w[0] + 16u), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43520000u);
    set32(c.r[5], ld32((c.r[17].w[0] + 16u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41B00000u);
    set32(c.r[4], 0u + 5u);
    st32((c.r[5].w[0] + 160u), c.r[3].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036E8B8u); st32((c.r[5].w[0] + 164u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x0036E8B8u) [[unlikely]] return; }
L_0036E8B8:
    set32(c.r[5], ld32((c.r[17].w[0] + 16u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    c.f[0] = c.r[3].w[0];
    st32((c.r[5].w[0] + 48u), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    st32((c.r[5].w[0] + 52u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    st32((c.r[5].w[0] + 56u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 16u)));
    c.f[12] = ld32((c.r[17].w[0] + 24u));
    c.f[13] = ld32((c.r[17].w[0] + 28u));
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 17;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0036E8FCu); c.f[14] = fp::cvt_s_w(c.f[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0036E8FCu) [[unlikely]] return; }
L_0036E8FC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[5], 0u + 15u);
    set32(c.r[2], ld32((c.r[1].w[0] + 26392u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036E910u); set32(c.r[4], c.r[2].w[0] + 624u);  if (depth < kMaxDepth) unit_002A(c, 3u, depth + 1u); else { c.pc = 0x001A8060u; return; } if (c.pc != 0x0036E910u) [[unlikely]] return; }
L_0036E910:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036E91Cu); set32(c.r[4], 0u + 272u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0036E91Cu) [[unlikely]] return; }
L_0036E91C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0036E934; } }
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.r[5].d[0] = ld64((c.r[3].w[0] + 80u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036E934u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 188u, depth + 1u); else { c.pc = 0x0015ED60u; return; } if (c.pc != 0x0036E934u) [[unlikely]] return; }
L_0036E934:
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41F00000u);
    c.f[2] = c.r[2].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.f[0] = c.r[2].w[0];
    st32((c.r[4].w[0] + 16u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 20u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 24u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.f[3] = ld32((c.r[17].w[0] + 24u));
    c.f[1] = ld32((c.r[17].w[0] + 28u));
    c.f[14] = ld32((c.r[1].w[0] - 5112u));
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    c.f[12] = fp::add(c.f[2], c.f[3]);
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 20;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0036E984u); c.f[13] = fp::add(c.f[0], c.f[1]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0036E984u) [[unlikely]] return; }
L_0036E984:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[5], 0u + 12u);
    set32(c.r[2], ld32((c.r[1].w[0] + 26392u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036E998u); set32(c.r[4], c.r[2].w[0] + 624u);  if (depth < kMaxDepth) unit_002A(c, 3u, depth + 1u); else { c.pc = 0x001A8060u; return; } if (c.pc != 0x0036E998u) [[unlikely]] return; }
L_0036E998:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036E9A4u); set32(c.r[4], 0u + 272u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0036E9A4u) [[unlikely]] return; }
L_0036E9A4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0036E9BC; } }
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.r[5].d[0] = ld64((c.r[3].w[0] + 48u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036E9BCu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 188u, depth + 1u); else { c.pc = 0x0015ED60u; return; } if (c.pc != 0x0036E9BCu) [[unlikely]] return; }
L_0036E9BC:
    st32((c.r[17].w[0] + 4u), c.r[2].w[0]);
    c.f[12] = 0u;
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    st32((c.r[3].w[0] + 16u), c.r[2].w[0]);
    st32((c.r[3].w[0] + 20u), c.r[2].w[0]);
    st32((c.r[3].w[0] + 24u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    c.f[14] = ld32((c.r[1].w[0] - 5120u));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036E9ECu); c.f[13] = c.f[12];  if (depth < kMaxDepth) unit_0012(c, 261u, depth + 1u); else { c.pc = 0x0014ACC0u; return; } if (c.pc != 0x0036E9ECu) [[unlikely]] return; }
L_0036E9EC:
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43560000u);
    c.f[2] = c.r[2].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[3] = ld32((c.r[17].w[0] + 24u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40800000u);
    c.f[1] = ld32((c.r[17].w[0] + 28u));
    c.f[0] = c.r[2].w[0];
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    c.f[14] = ld32((c.r[1].w[0] - 5112u));
    c.f[12] = fp::add(c.f[2], c.f[3]);
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 14;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0036EA24u); c.f[13] = fp::add(c.f[0], c.f[1]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0036EA24u) [[unlikely]] return; }
L_0036EA24:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036EA2Cu); set32(c.r[4], 0u + 5u);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x0036EA2Cu) [[unlikely]] return; }
L_0036EA2C:
    set32(c.r[5], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[4], 0u + 272u);
    set32(c.r[3], ld32((c.r[2].w[0])));
    st32((c.r[5].w[0] + 48u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    st32((c.r[5].w[0] + 52u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036EA50u); st32((c.r[5].w[0] + 56u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0036EA50u) [[unlikely]] return; }
L_0036EA50:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0036EA68; } }
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.r[5].d[0] = ld64((c.r[3].w[0] + 48u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036EA68u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 188u, depth + 1u); else { c.pc = 0x0015ED60u; return; } if (c.pc != 0x0036EA68u) [[unlikely]] return; }
L_0036EA68:
    st32((c.r[17].w[0] + 8u), c.r[2].w[0]);
    c.f[12] = 0u;
    set32(c.r[3], ld32((c.r[17].w[0] + 8u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    st32((c.r[3].w[0] + 16u), c.r[2].w[0]);
    st32((c.r[3].w[0] + 20u), c.r[2].w[0]);
    st32((c.r[3].w[0] + 24u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 8u)));
    c.f[14] = ld32((c.r[1].w[0] - 5128u));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036EA98u); c.f[13] = c.f[12];  if (depth < kMaxDepth) unit_0012(c, 261u, depth + 1u); else { c.pc = 0x0014ACC0u; return; } if (c.pc != 0x0036EA98u) [[unlikely]] return; }
L_0036EA98:
    set32(c.r[4], ld32((c.r[17].w[0] + 8u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43560000u);
    c.f[2] = c.r[2].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[3] = ld32((c.r[17].w[0] + 24u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41900000u);
    c.f[1] = ld32((c.r[17].w[0] + 28u));
    c.f[0] = c.r[2].w[0];
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    c.f[14] = ld32((c.r[1].w[0] - 5112u));
    c.f[12] = fp::add(c.f[2], c.f[3]);
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 14;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0036EAD0u); c.f[13] = fp::add(c.f[0], c.f[1]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0036EAD0u) [[unlikely]] return; }
L_0036EAD0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036EAD8u); set32(c.r[4], 0u + 5u);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x0036EAD8u) [[unlikely]] return; }
L_0036EAD8:
    set32(c.r[5], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[4], 0u + 256u);
    set32(c.r[3], ld32((c.r[2].w[0])));
    st32((c.r[5].w[0] + 48u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    st32((c.r[5].w[0] + 52u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036EAFCu); st32((c.r[5].w[0] + 56u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0036EAFCu) [[unlikely]] return; }
L_0036EAFC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0036EB0C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036EB0Cu);  if (depth < kMaxDepth) unit_0017(c, 177u, depth + 1u); else { c.pc = 0x0015E070u; return; } if (c.pc != 0x0036EB0Cu) [[unlikely]] return; }
L_0036EB0C:
    st32((c.r[17].w[0] + 20u), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41000000u);
    set32(c.r[5], ld32((c.r[17].w[0] + 20u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40C00000u);
    set32(c.r[4], 0u + 5u);
    st32((c.r[5].w[0] + 160u), c.r[3].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036EB2Cu); st32((c.r[5].w[0] + 164u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x0036EB2Cu) [[unlikely]] return; }
L_0036EB2C:
    set32(c.r[5], ld32((c.r[17].w[0] + 20u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43560000u);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.f[2] = c.r[3].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41300000u);
    c.f[0] = c.r[3].w[0];
    st32((c.r[5].w[0] + 48u), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    st32((c.r[5].w[0] + 52u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    st32((c.r[5].w[0] + 56u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 20u)));
    c.f[3] = ld32((c.r[17].w[0] + 24u));
    c.f[1] = ld32((c.r[17].w[0] + 28u));
    c.f[14] = ld32((c.r[1].w[0] - 5112u));
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    c.f[12] = fp::add(c.f[2], c.f[3]);
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 21;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0036EB80u); c.f[13] = fp::add(c.f[0], c.f[1]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0036EB80u) [[unlikely]] return; }
L_0036EB80:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 26392u)));
    set32(c.r[16], ld32((c.r[2].w[0] + 332u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036EB94u); set32(c.r[4], 0u + 272u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0036EB94u) [[unlikely]] return; }
L_0036EB94:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0036EBA8; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036EBA8u); set32(c.r[6], 0u + 516u);  if (depth < kMaxDepth) unit_0018(c, 110u, depth + 1u); else { c.pc = 0x001630C0u; return; } if (c.pc != 0x0036EBA8u) [[unlikely]] return; }
L_0036EBA8:
    st32((c.r[17].w[0] + 12u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036EBB4u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x0036EBB4u) [[unlikely]] return; }
L_0036EBB4:
    set32(c.r[6], ld32((c.r[17].w[0] + 12u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42380000u);
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.f[2] = c.r[3].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[0] = c.r[3].w[0];
    st32((c.r[6].w[0] + 48u), c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    st32((c.r[6].w[0] + 52u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    st32((c.r[6].w[0] + 56u), c.r[2].w[0]);
    c.f[1] = ld32((c.r[1].w[0] - 5136u));
    set32(c.r[2], ld32((c.r[17].w[0] + 12u)));
    st32((c.r[2].w[0] + 16u), c.f[1]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[1] = ld32((c.r[1].w[0] - 5136u));
    st32((c.r[2].w[0] + 20u), c.f[1]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    st32((c.r[2].w[0] + 24u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 12u)));
    c.f[3] = ld32((c.r[17].w[0] + 24u));
    c.f[1] = ld32((c.r[17].w[0] + 28u));
    c.f[14] = ld32((c.r[1].w[0] - 5112u));
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    c.f[12] = fp::add(c.f[2], c.f[3]);
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 30;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0036EC2Cu); c.f[13] = fp::add(c.f[0], c.f[1]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0036EC2Cu) [[unlikely]] return; }
L_0036EC2C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0036EC50:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0036ED70; } }
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0036EC90; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0036EC90; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0036EC90u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0036EC90u) [[unlikely]] return; }
L_0036EC90:
    st32((c.r[17].w[0]), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0036ECB8; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0036ECB8; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0036ECB8u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0036ECB8u) [[unlikely]] return; }
L_0036ECB8:
    st32((c.r[17].w[0] + 12u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 16u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0036ECE0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0036ECE0; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0036ECE0u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0036ECE0u) [[unlikely]] return; }
L_0036ECE0:
    st32((c.r[17].w[0] + 16u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0036ED08; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0036ED08; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0036ED08u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0036ED08u) [[unlikely]] return; }
L_0036ED08:
    st32((c.r[17].w[0] + 4u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 8u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0036ED30; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0036ED30; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0036ED30u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0036ED30u) [[unlikely]] return; }
L_0036ED30:
    st32((c.r[17].w[0] + 8u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 20u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; c.r[2].d[0] = c.r[16].d[0] << 48;  if (t) { goto L_0036ED5C; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0036ED58; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0036ED58u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0036ED58u) [[unlikely]] return; }
L_0036ED58:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.budget -= 1;
L_0036ED5C:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0; st32((c.r[17].w[0] + 20u), 0u);  if (t) { goto L_0036ED70; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036ED70u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x0036ED70u) [[unlikely]] return; }
L_0036ED70:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0036ED90:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.f[1] = ld32((c.r[4].w[0] + 32u));
    set32(c.r[2], ld32((c.r[4].w[0] + 16u)));
    c.f[0] = ld32((c.r[1].w[0] - 5136u));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    st32((c.r[2].w[0] + 60u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 19;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0036EDDCu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0036EDDCu) [[unlikely]] return; }
L_0036EDDC:
    set32(c.r[3], ld32((c.r[16].w[0] + 32u)));
    set32(c.r[2], ld32((c.r[16].w[0])));
    st32((c.r[2].w[0] + 60u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0036EDFCu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0036EDFCu) [[unlikely]] return; }
L_0036EDFC:
    c.f[1] = ld32((c.r[16].w[0] + 32u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[0] = ld32((c.r[1].w[0] - 5136u));
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    st32((c.r[2].w[0] + 60u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 15;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0036EE38u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0036EE38u) [[unlikely]] return; }
L_0036EE38:
    c.f[1] = ld32((c.r[16].w[0] + 32u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[0] = ld32((c.r[1].w[0] - 5136u));
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    st32((c.r[2].w[0] + 60u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 15;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0036EE74u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0036EE74u) [[unlikely]] return; }
L_0036EE74:
    c.f[1] = ld32((c.r[16].w[0] + 32u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[0] = ld32((c.r[1].w[0] - 5136u));
    set32(c.r[2], ld32((c.r[16].w[0] + 20u)));
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    st32((c.r[2].w[0] + 60u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 15;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0036EEB0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0036EEB0u) [[unlikely]] return; }
L_0036EEB0:
    set32(c.r[3], ld32((c.r[16].w[0] + 32u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    st32((c.r[2].w[0] + 60u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0036EED0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0036EED0u) [[unlikely]] return; }
L_0036EED0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0036EEE0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0036EF40; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] + 31760u);
    set32(c.r[3], c.r[3].w[0] + 31788u);
    st32((c.r[17].w[0] + 176u), c.r[2].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    st32((c.r[17].w[0] + 192u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + 31804u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036EF28u); st32((c.r[17].w[0] + 204u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_009A(c, 279u, depth + 1u); else { c.pc = 0x0036A520u; return; } if (c.pc != 0x0036EF28u) [[unlikely]] return; }
L_0036EF28:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0036EF44; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036EF40u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x0036EF40u) [[unlikely]] return; }
L_0036EF40:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0036EF44:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0036EF60:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 192u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0036A520u | kUnwind; return; } [[clang::musttail]] return unit_009A(c, 279u, depth); }
L_0036EF70:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 204u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0036A520u | kUnwind; return; } [[clang::musttail]] return unit_009A(c, 279u, depth); }
L_0036EF80:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 192u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0036A5C0u | kUnwind; return; } [[clang::musttail]] return unit_009A(c, 284u, depth); }
L_0036EF90:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 192u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0036EEE0u | kUnwind; return; } goto L_0036EEE0; }
L_0036EFA0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 204u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0036AC50u | kUnwind; return; } [[clang::musttail]] return unit_009A(c, 317u, depth); }
L_0036EFB0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 204u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0036EEE0u | kUnwind; return; } goto L_0036EEE0; }
L_0036EFC0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 20u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0036AFF0u | kUnwind; return; } [[clang::musttail]] return unit_009A(c, 335u, depth); }
L_0036EFD0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 40u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0036AFF0u | kUnwind; return; } [[clang::musttail]] return unit_009A(c, 335u, depth); }
L_0036EFE0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 20u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0036C0B0u | kUnwind; return; } goto L_0036C0B0; }
L_0036EFF0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 40u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0036C0B0u | kUnwind; return; } goto L_0036C0B0; }
L_0036F000:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 20u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0036C710u | kUnwind; return; } goto L_0036C710; }
L_0036F010:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 40u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0036C710u | kUnwind; return; } goto L_0036C710; }
L_0036F020:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 20u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0036CA30u | kUnwind; return; } goto L_0036CA30; }
L_0036F030:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 40u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0036CA30u | kUnwind; return; } goto L_0036CA30; }
L_0036F040:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 20u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0036CD70u | kUnwind; return; } goto L_0036CD70; }
L_0036F050:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 40u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0036CD70u | kUnwind; return; } goto L_0036CD70; }
L_0036F060:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 20u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0036D080u | kUnwind; return; } goto L_0036D080; }
L_0036F070:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 40u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0036D080u | kUnwind; return; } goto L_0036D080; }
L_0036F080:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 20u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0036D400u | kUnwind; return; } goto L_0036D400; }
L_0036F090:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 40u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0036D400u | kUnwind; return; } goto L_0036D400; }
L_0036F0A0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 20u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0036D830u | kUnwind; return; } goto L_0036D830; }
L_0036F0B0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 40u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0036D830u | kUnwind; return; } goto L_0036D830; }
L_0036F0C0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 20u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0036DC00u | kUnwind; return; } goto L_0036DC00; }
L_0036F0D0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 40u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0036DC00u | kUnwind; return; } goto L_0036DC00; }
L_0036F0E0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 20u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0036E380u | kUnwind; return; } goto L_0036E380; }
L_0036F0F0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 20u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0036DF80u | kUnwind; return; } goto L_0036DF80; }
L_0036F100:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 40u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0036E410u | kUnwind; return; } goto L_0036E410; }
L_0036F110:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 40u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0036DF80u | kUnwind; return; } goto L_0036DF80; }
L_0036F120:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036F13Cu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_009B(c, 390u, depth + 1u); else { c.pc = 0x0036F200u; return; } if (c.pc != 0x0036F13Cu) [[unlikely]] return; }
L_0036F13C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0036F160; } }
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 4u)));
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 6u)));
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036F158u); c.r[7].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_009B(c, 416u, depth + 1u); else { c.pc = 0x0036FC20u; return; } if (c.pc != 0x0036F158u) [[unlikely]] return; }
L_0036F158:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_0036F178; } }
L_0036F160:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 4u)));
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036F174u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_009B(c, 416u, depth + 1u); else { c.pc = 0x0036FC20u; return; } if (c.pc != 0x0036F174u) [[unlikely]] return; }
L_0036F174:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_0036F178:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0036F190:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036F1ACu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_009B(c, 390u, depth + 1u); else { c.pc = 0x0036F200u; return; } if (c.pc != 0x0036F1ACu) [[unlikely]] return; }
L_0036F1AC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0036F1D0; } }
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 4u)));
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 6u)));
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036F1C8u); c.r[7].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_009C(c, 6u, depth + 1u); else { c.pc = 0x00370030u; return; } if (c.pc != 0x0036F1C8u) [[unlikely]] return; }
L_0036F1C8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_0036F1E8; } }
L_0036F1D0:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 4u)));
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036F1E4u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_009C(c, 6u, depth + 1u); else { c.pc = 0x00370030u; return; } if (c.pc != 0x0036F1E4u) [[unlikely]] return; }
L_0036F1E4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_0036F1E8:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0036F200:
    set32(c.r[5], ld32((c.r[4].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_0036F224; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0036F224; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036F248; } }
L_0036F224:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0036F248; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 4u)));
    set32(c.r[2], 0u + 7u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_0036F244; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036F248; } }
L_0036F244:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0036F248:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0036F250:
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], 0u + 8u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0036F27C; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 4u)));
    set32(c.r[2], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_0036F278; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036F27C; } }
L_0036F278:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0036F27C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0036F290:
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0036F2B8; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 4u)));
    set32(c.r[2], 0u + 6u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_0036F2B4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036F2B8; } }
L_0036F2B4:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0036F2B8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0036F2C0:
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], 0u + 8u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0036F2EC; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 4u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0036F2E8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036F2EC; } }
L_0036F2E8:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0036F2EC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0036F300:
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].d[0] = c.r[5].sd[0] < 115ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_0036F320; } }
    c.r[2].d[0] = c.r[5].sd[0] < 118ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 63u);  if (t) { goto L_0036F8A4; } }
L_0036F320:
    c.r[2].d[0] = c.r[5].sd[0] < 125ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = c.r[5].sd[0] < 121ll ? 1ull : 0ull;  if (t) { goto L_0036F33C; } }
    c.r[2].d[0] = c.r[5].sd[0] < 129ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 8u);  if (t) { goto L_0036F89C; } }
    c.r[2].d[0] = c.r[5].sd[0] < 121ll ? 1ull : 0ull;
    c.budget -= 1;
L_0036F33C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = c.r[5].sd[0] < 118ll ? 1ull : 0ull;  if (t) { goto L_0036F354; } }
    c.r[2].d[0] = c.r[5].sd[0] < 125ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 7u);  if (t) { goto L_0036F894; } }
    c.r[2].d[0] = c.r[5].sd[0] < 118ll ? 1ull : 0ull;
    c.budget -= 1;
L_0036F354:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 114u);  if (t) { goto L_0036F36C; } }
    c.r[2].d[0] = c.r[5].sd[0] < 121ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 48u);  if (t) { goto L_0036F88C; } }
    set32(c.r[2], 0u + 114u);
    c.budget -= 1;
L_0036F36C:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 47u);  if (t) { goto L_0036F884; } }
    set32(c.r[2], 0u + 113u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 46u);  if (t) { goto L_0036F87C; } }
    set32(c.r[2], 0u + 112u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 45u);  if (t) { goto L_0036F874; } }
    set32(c.r[2], 0u + 111u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 44u);  if (t) { goto L_0036F86C; } }
    set32(c.r[2], 0u + 110u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 43u);  if (t) { goto L_0036F864; } }
    set32(c.r[2], 0u + 109u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 42u);  if (t) { goto L_0036F85C; } }
    set32(c.r[2], 0u + 108u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 41u);  if (t) { goto L_0036F854; } }
    c.r[2].d[0] = c.r[5].sd[0] < 103ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = c.r[5].sd[0] < 98ll ? 1ull : 0ull;  if (t) { goto L_0036F3D8; } }
    c.r[2].d[0] = c.r[5].sd[0] < 108ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 40u);  if (t) { goto L_0036F84C; } }
    c.r[2].d[0] = c.r[5].sd[0] < 98ll ? 1ull : 0ull;
    c.budget -= 1;
L_0036F3D8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = c.r[5].sd[0] < 95ll ? 1ull : 0ull;  if (t) { goto L_0036F3F0; } }
    c.r[2].d[0] = c.r[5].sd[0] < 103ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 39u);  if (t) { goto L_0036F844; } }
    c.r[2].d[0] = c.r[5].sd[0] < 95ll ? 1ull : 0ull;
    c.budget -= 1;
L_0036F3F0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 94u);  if (t) { goto L_0036F408; } }
    c.r[2].d[0] = c.r[5].sd[0] < 98ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 38u);  if (t) { goto L_0036F83C; } }
    set32(c.r[2], 0u + 94u);
    c.budget -= 1;
L_0036F408:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 37u);  if (t) { goto L_0036F834; } }
    set32(c.r[2], 0u + 93u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 36u);  if (t) { goto L_0036F82C; } }
    set32(c.r[2], 0u + 92u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 53u);  if (t) { goto L_0036F824; } }
    c.r[2].d[0] = c.r[5].sd[0] < 90ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = c.r[5].sd[0] < 88ll ? 1ull : 0ull;  if (t) { goto L_0036F444; } }
    c.r[2].d[0] = c.r[5].sd[0] < 92ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 34u);  if (t) { goto L_0036F81C; } }
    c.r[2].d[0] = c.r[5].sd[0] < 88ll ? 1ull : 0ull;
    c.budget -= 1;
L_0036F444:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = c.r[5].sd[0] < 86ll ? 1ull : 0ull;  if (t) { goto L_0036F45C; } }
    c.r[2].d[0] = c.r[5].sd[0] < 90ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 33u);  if (t) { goto L_0036F814; } }
    c.r[2].d[0] = c.r[5].sd[0] < 86ll ? 1ull : 0ull;
    c.budget -= 1;
L_0036F45C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = c.r[5].sd[0] < 84ll ? 1ull : 0ull;  if (t) { goto L_0036F474; } }
    c.r[2].d[0] = c.r[5].sd[0] < 88ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 32u);  if (t) { goto L_0036F80C; } }
    c.r[2].d[0] = c.r[5].sd[0] < 84ll ? 1ull : 0ull;
    c.budget -= 1;
L_0036F474:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 83u);  if (t) { goto L_0036F48C; } }
    c.r[2].d[0] = c.r[5].sd[0] < 86ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 31u);  if (t) { goto L_0036F804; } }
    set32(c.r[2], 0u + 83u);
    c.budget -= 1;
L_0036F48C:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 30u);  if (t) { goto L_0036F7FC; } }
    set32(c.r[2], 0u + 82u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 29u);  if (t) { goto L_0036F7F4; } }
    set32(c.r[2], 0u + 81u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 28u);  if (t) { goto L_0036F7EC; } }
    set32(c.r[2], 0u + 80u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 27u);  if (t) { goto L_0036F7E4; } }
    set32(c.r[2], 0u + 79u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 25u);  if (t) { goto L_0036F7DC; } }
    set32(c.r[2], 0u + 77u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 78u);  if (t) { goto L_0036F7D8; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[2].d[0];  if (t) { goto L_0036F7CC; } }
    set32(c.r[2], 0u + 76u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 26u);  if (t) { goto L_0036F7D0; } }
    set32(c.r[2], 0u + 75u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 74u);  if (t) { goto L_0036F7CC; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[2].d[0];  if (t) { goto L_0036F7C4; } }
    c.r[2].d[0] = c.r[5].sd[0] < 72ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = c.r[5].sd[0] < 70ll ? 1ull : 0ull;  if (t) { goto L_0036F514; } }
    c.r[2].d[0] = c.r[5].sd[0] < 74ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 23u);  if (t) { goto L_0036F7BC; } }
    c.r[2].d[0] = c.r[5].sd[0] < 70ll ? 1ull : 0ull;
    c.budget -= 1;
L_0036F514:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = c.r[5].sd[0] < 65ll ? 1ull : 0ull;  if (t) { goto L_0036F52C; } }
    c.r[2].d[0] = c.r[5].sd[0] < 72ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 22u);  if (t) { goto L_0036F7B4; } }
    c.r[2].d[0] = c.r[5].sd[0] < 65ll ? 1ull : 0ull;
    c.budget -= 1;
L_0036F52C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = c.r[5].sd[0] < 60ll ? 1ull : 0ull;  if (t) { goto L_0036F544; } }
    c.r[2].d[0] = c.r[5].sd[0] < 70ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 21u);  if (t) { goto L_0036F7AC; } }
    c.r[2].d[0] = c.r[5].sd[0] < 60ll ? 1ull : 0ull;
    c.budget -= 1;
L_0036F544:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 59u);  if (t) { goto L_0036F55C; } }
    c.r[2].d[0] = c.r[5].sd[0] < 65ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 20u);  if (t) { goto L_0036F7A4; } }
    set32(c.r[2], 0u + 59u);
    c.budget -= 1;
L_0036F55C:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 19u);  if (t) { goto L_0036F79C; } }
    c.r[2].d[0] = c.r[5].sd[0] < 56ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = c.r[5].sd[0] < 54ll ? 1ull : 0ull;  if (t) { goto L_0036F580; } }
    c.r[2].d[0] = c.r[5].sd[0] < 59ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 16u);  if (t) { goto L_0036F794; } }
    c.r[2].d[0] = c.r[5].sd[0] < 54ll ? 1ull : 0ull;
    c.budget -= 1;
L_0036F580:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = c.r[5].sd[0] < 52ll ? 1ull : 0ull;  if (t) { goto L_0036F598; } }
    c.r[2].d[0] = c.r[5].sd[0] < 56ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 15u);  if (t) { goto L_0036F78C; } }
    c.r[2].d[0] = c.r[5].sd[0] < 52ll ? 1ull : 0ull;
    c.budget -= 1;
L_0036F598:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 51u);  if (t) { goto L_0036F5B0; } }
    c.r[2].d[0] = c.r[5].sd[0] < 54ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 14u);  if (t) { goto L_0036F784; } }
    set32(c.r[2], 0u + 51u);
    c.budget -= 1;
L_0036F5B0:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 52u);  if (t) { goto L_0036F77C; } }
    c.r[2].d[0] = c.r[5].sd[0] < 48ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 46u);  if (t) { goto L_0036F5D4; } }
    c.r[2].d[0] = c.r[5].sd[0] < 51ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 13u);  if (t) { goto L_0036F774; } }
    set32(c.r[2], 0u + 46u);
    c.budget -= 1;
L_0036F5D4:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 13u);  if (t) { goto L_0036F76C; } }
    set32(c.r[2], 0u + 47u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 50u);  if (t) { goto L_0036F764; } }
    c.r[2].d[0] = c.r[5].sd[0] < 43ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 41u);  if (t) { goto L_0036F604; } }
    c.r[2].d[0] = c.r[5].sd[0] < 46ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 12u);  if (t) { goto L_0036F75C; } }
    set32(c.r[2], 0u + 41u);
    c.budget -= 1;
L_0036F604:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 12u);  if (t) { goto L_0036F754; } }
    set32(c.r[2], 0u + 42u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 49u);  if (t) { goto L_0036F74C; } }
    c.r[2].d[0] = c.r[5].sd[0] < 36ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = c.r[5].sd[0] < 31ll ? 1ull : 0ull;  if (t) { goto L_0036F634; } }
    c.r[2].d[0] = c.r[5].sd[0] < 41ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 11u);  if (t) { goto L_0036F744; } }
    c.r[2].d[0] = c.r[5].sd[0] < 31ll ? 1ull : 0ull;
    c.budget -= 1;
L_0036F634:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = c.r[5].sd[0] < 24ll ? 1ull : 0ull;  if (t) { goto L_0036F64C; } }
    c.r[2].d[0] = c.r[5].sd[0] < 36ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 10u);  if (t) { goto L_0036F73C; } }
    c.r[2].d[0] = c.r[5].sd[0] < 24ll ? 1ull : 0ull;
    c.budget -= 1;
L_0036F64C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = c.r[5].sd[0] < 20ll ? 1ull : 0ull;  if (t) { goto L_0036F664; } }
    c.r[2].d[0] = c.r[5].sd[0] < 31ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 9u);  if (t) { goto L_0036F734; } }
    c.r[2].d[0] = c.r[5].sd[0] < 20ll ? 1ull : 0ull;
    c.budget -= 1;
L_0036F664:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = c.r[5].sd[0] < 15ll ? 1ull : 0ull;  if (t) { goto L_0036F67C; } }
    c.r[2].d[0] = c.r[5].sd[0] < 24ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 6u);  if (t) { goto L_0036F72C; } }
    c.r[2].d[0] = c.r[5].sd[0] < 15ll ? 1ull : 0ull;
    c.budget -= 1;
L_0036F67C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = c.r[5].sd[0] < 10ll ? 1ull : 0ull;  if (t) { goto L_0036F694; } }
    c.r[2].d[0] = c.r[5].sd[0] < 20ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 5u);  if (t) { goto L_0036F724; } }
    c.r[2].d[0] = c.r[5].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 1;
L_0036F694:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 9u);  if (t) { goto L_0036F6AC; } }
    c.r[2].d[0] = c.r[5].sd[0] < 15ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 4u);  if (t) { goto L_0036F71C; } }
    set32(c.r[2], 0u + 9u);
    c.budget -= 1;
L_0036F6AC:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 3u);  if (t) { goto L_0036F714; } }
    set32(c.r[2], 0u + 8u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 7u);  if (t) { goto L_0036F710; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[2].d[0];  if (t) { goto L_0036F704; } }
    set32(c.r[2], 0u + 6u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 2u);  if (t) { goto L_0036F708; } }
    c.budget -= 2;
    { const bool t = c.r[5].sd[0] <= 0; c.r[2].d[0] = c.r[5].sd[0] < 6ll ? 1ull : 0ull;  if (t) { goto L_0036F6E4; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0036F6FC; } }
L_0036F6E4:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0036F6F4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);  if (t) { goto L_0036F8AC; } }
L_0036F6F4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_0036F8BC; } }
L_0036F6FC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0036F8B8; } }
L_0036F704:
    set32(c.r[2], 0u + 2u);
    c.budget -= 1;
L_0036F708:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036F8B8; } }
L_0036F710:
    set32(c.r[2], 0u + 3u);
    c.budget -= 1;
L_0036F714:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036F8B8; } }
L_0036F71C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036F8B8; } }
L_0036F724:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036F8B8; } }
L_0036F72C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036F8B8; } }
L_0036F734:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036F8B8; } }
L_0036F73C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036F8B8; } }
L_0036F744:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036F8B8; } }
L_0036F74C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036F8B8; } }
L_0036F754:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036F8B8; } }
L_0036F75C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036F8B8; } }
L_0036F764:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036F8B8; } }
L_0036F76C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036F8B8; } }
L_0036F774:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036F8B8; } }
L_0036F77C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036F8B8; } }
L_0036F784:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036F8B8; } }
L_0036F78C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036F8B8; } }
L_0036F794:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036F8B8; } }
L_0036F79C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036F8B8; } }
L_0036F7A4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036F8B8; } }
L_0036F7AC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036F8B8; } }
L_0036F7B4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036F8B8; } }
L_0036F7BC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036F8B8; } }
L_0036F7C4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 24u);  if (t) { goto L_0036F8B8; } }
L_0036F7CC:
    set32(c.r[2], 0u + 26u);
    c.budget -= 1;
L_0036F7D0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036F8B8; } }
L_0036F7D8:
    set32(c.r[2], 0u + 25u);
    c.budget -= 1;
L_0036F7DC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036F8B8; } }
L_0036F7E4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036F8B8; } }
L_0036F7EC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036F8B8; } }
L_0036F7F4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036F8B8; } }
L_0036F7FC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036F8B8; } }
L_0036F804:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036F8B8; } }
L_0036F80C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036F8B8; } }
L_0036F814:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036F8B8; } }
L_0036F81C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036F8B8; } }
L_0036F824:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036F8B8; } }
L_0036F82C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036F8B8; } }
L_0036F834:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036F8B8; } }
L_0036F83C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036F8B8; } }
L_0036F844:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036F8B8; } }
L_0036F84C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036F8B8; } }
L_0036F854:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036F8B8; } }
L_0036F85C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036F8B8; } }
L_0036F864:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036F8B8; } }
L_0036F86C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036F8B8; } }
L_0036F874:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036F8B8; } }
L_0036F87C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036F8B8; } }
L_0036F884:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036F8B8; } }
L_0036F88C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036F8B8; } }
L_0036F894:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036F8B8; } }
L_0036F89C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036F8B8; } }
L_0036F8A4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036F8B8; } }
L_0036F8AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036F8B4u); set32(c.r[4], c.r[4].w[0] - 5072u);  if (depth < kMaxDepth) unit_0009(c, 124u, depth + 1u); else { c.pc = 0x001260E0u; return; } if (c.pc != 0x0036F8B4u) [[unlikely]] return; }
L_0036F8B4:
    set32(c.r[2], 0u + 63u);
    c.budget -= 1;
L_0036F8B8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_0036F8BC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0036F8D0:
    c.r[1].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(12ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_0036FC14; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[2], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] - 4992u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x0036C000u < 16384u) { entry = entries_009B[(t - 0x0036C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0036F8F8:
    c.r[1].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(9ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0036FC10; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[2], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] - 5040u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x0036C000u < 16384u) { entry = entries_009B[(t - 0x0036C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0036F920:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0036FC14; } }
L_0036F928:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0036FC14; } }
L_0036F930:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 4u);  if (t) { goto L_0036FC14; } }
L_0036F938:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0036FC14; } }
L_0036F940:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0036FC14; } }
L_0036F948:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0036FC14; } }
L_0036F950:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0036FC14; } }
L_0036F958:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0036FC14; } }
L_0036F960:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0036FC14; } }
L_0036F968:
    set32(c.r[8], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[8].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0036FA3C; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[2].d[0];  if (t) { goto L_0036FA30; } }
    set32(c.r[7], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[7].d[0];  if (t) { goto L_0036FA24; } }
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[4].d[0]; set32(c.r[3], 0u - 1u);  if (t) { goto L_0036F9B8; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull; set32(c.r[2], 0u + 6u);  if (t) { goto L_0036F9AC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036FC10; } }
    set32(c.r[2], 0u + 6u);
    c.budget -= 1;
L_0036F9AC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036FC14; } }
    set32(c.r[3], 0u - 1u);
    c.budget -= 1;
L_0036F9B8:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != c.r[3].d[0];  if (t) { goto L_0036F9C8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 5u);  if (t) { goto L_0036FC14; } }
L_0036F9C8:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == c.r[8].d[0];  if (t) { goto L_0036FC14; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == c.r[2].d[0];  if (t) { goto L_0036FA1C; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == c.r[7].d[0]; set32(c.r[2], 0u + 5u);  if (t) { goto L_0036FA14; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == c.r[4].d[0]; set32(c.r[2], 0u + 5u);  if (t) { goto L_0036FA08; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull; set32(c.r[2], 0u + 5u);  if (t) { goto L_0036F9FC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 10u);  if (t) { goto L_0036FA28; } }
    set32(c.r[2], 0u + 5u);
    c.budget -= 1;
L_0036F9FC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036FC14; } }
    set32(c.r[2], 0u + 5u);
    c.budget -= 1;
L_0036FA08:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036FC14; } }
    set32(c.r[2], 0u + 5u);
    c.budget -= 1;
L_0036FA14:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036FC14; } }
L_0036FA1C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 5u);  if (t) { goto L_0036FC14; } }
L_0036FA24:
    set32(c.r[2], 0u + 10u);
    c.budget -= 1;
L_0036FA28:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036FC14; } }
L_0036FA30:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[8].d[0] + 0ull;  if (t) { goto L_0036FC14; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0036FA3C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036FC14; } }
L_0036FA44:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 10u);  if (t) { goto L_0036FA70; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull; set32(c.r[2], 0u + 3u);  if (t) { goto L_0036FA64; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036FC10; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 1;
L_0036FA64:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036FC14; } }
    set32(c.r[2], 0u + 10u);
    c.budget -= 1;
L_0036FA70:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036FC14; } }
L_0036FA78:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 5u);  if (t) { goto L_0036FABC; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 7u);  if (t) { goto L_0036FAB0; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull; set32(c.r[2], 0u + 3u);  if (t) { goto L_0036FAA4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036FC10; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 1;
L_0036FAA4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036FC14; } }
    set32(c.r[2], 0u + 7u);
    c.budget -= 1;
L_0036FAB0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036FC14; } }
    set32(c.r[2], 0u + 5u);
    c.budget -= 1;
L_0036FABC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036FC14; } }
L_0036FAC4:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_0036FAF8; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[2].d[0];  if (t) { goto L_0036FAEC; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0036FC14; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036FC10; } }
L_0036FAEC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 3u);  if (t) { goto L_0036FC14; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0036FAF8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036FC14; } }
L_0036FB00:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 3u);  if (t) { goto L_0036FB2C; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull; set32(c.r[2], 0u + 2u);  if (t) { goto L_0036FB20; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036FC10; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 1;
L_0036FB20:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036FC14; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 1;
L_0036FB2C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036FC14; } }
L_0036FB34:
    set32(c.r[4], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[4].d[0]; set32(c.r[2], 0u + 3u);  if (t) { goto L_0036FB8C; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 2u);  if (t) { goto L_0036FB80; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[2].d[0];  if (t) { goto L_0036FC14; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_0036FB74; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0036FC14; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036FC10; } }
L_0036FB74:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0036FC14; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 1;
L_0036FB80:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036FC14; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 1;
L_0036FB8C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036FC14; } }
L_0036FB94:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 5u);  if (t) { goto L_0036FBC0; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull; set32(c.r[2], 0u + 5u);  if (t) { goto L_0036FBB4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036FC10; } }
    set32(c.r[2], 0u + 5u);
    c.budget -= 1;
L_0036FBB4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036FC14; } }
    set32(c.r[2], 0u + 5u);
    c.budget -= 1;
L_0036FBC0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036FC14; } }
L_0036FBC8:
    set32(c.r[4], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[4].d[0]; c.r[2].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0036FC08; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[2].d[0];  if (t) { goto L_0036FC14; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_0036FBFC; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0036FC14; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036FC10; } }
L_0036FBFC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0036FC14; } }
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 1;
L_0036FC08:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036FC14; } }
L_0036FC10:
    set32(c.r[2], 0u - 1u);
    c.budget -= 1;
L_0036FC14:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0036FC20:
    c.r[1].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(12ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[2], 0u + 63u);  if (t) { [[clang::musttail]] return unit_009C(c, 5u, depth); } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[2], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] - 4912u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x0036C000u < 16384u) { entry = entries_009B[(t - 0x0036C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0036FC48:
    c.r[1].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(8ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_009C(c, 4u, depth); } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[2], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] - 4944u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x0036C000u < 16384u) { entry = entries_009B[(t - 0x0036C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0036FC70:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 44u);  if (t) { [[clang::musttail]] return unit_009C(c, 5u, depth); } }
L_0036FC78:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 45u);  if (t) { [[clang::musttail]] return unit_009C(c, 5u, depth); } }
L_0036FC80:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { [[clang::musttail]] return unit_009C(c, 5u, depth); } }
L_0036FC88:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { [[clang::musttail]] return unit_009C(c, 5u, depth); } }
L_0036FC90:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 52u);  if (t) { [[clang::musttail]] return unit_009C(c, 5u, depth); } }
L_0036FC98:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 53u);  if (t) { [[clang::musttail]] return unit_009C(c, 5u, depth); } }
L_0036FCA0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 42u);  if (t) { [[clang::musttail]] return unit_009C(c, 5u, depth); } }
L_0036FCA8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 43u);  if (t) { [[clang::musttail]] return unit_009C(c, 5u, depth); } }
L_0036FCB0:
    set32(c.r[8], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[8].d[0]; c.r[1].d[0] = c.r[6].sd[0] < 2ll ? 1ull : 0ull;  if (t) { goto L_0036FD80; } }
    set32(c.r[4], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[4].d[0]; c.r[1].d[0] = c.r[6].sd[0] < 5ll ? 1ull : 0ull;  if (t) { goto L_0036FD60; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; set32(c.r[2], 0u + 4u);  if (t) { goto L_0036FCF4; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull; set32(c.r[2], 0u + 9u);  if (t) { goto L_0036FCE8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_009C(c, 4u, depth); } }
    set32(c.r[2], 0u + 9u);
    c.budget -= 1;
L_0036FCE8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_009C(c, 5u, depth); } }
    set32(c.r[2], 0u + 4u);
    c.budget -= 1;
L_0036FCF4:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == c.r[2].d[0];  if (t) { goto L_0036FD54; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == c.r[8].d[0];  if (t) { goto L_0036FD48; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == c.r[4].d[0];  if (t) { goto L_0036FD3C; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == c.r[3].d[0];  if (t) { goto L_0036FD30; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull; set32(c.r[3], 0u + 5u);  if (t) { goto L_0036FD28; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036FD5C; } }
    set32(c.r[3], 0u + 5u);
    c.budget -= 1;
L_0036FD28:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; if (c.r[7].d[0] != 0) c.r[2].d[0] = c.r[3].d[0];  if (t) { [[clang::musttail]] return unit_009C(c, 5u, depth); } }
L_0036FD30:
    set32(c.r[3], 0u + 6u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; if (c.r[7].d[0] != 0) c.r[2].d[0] = c.r[3].d[0];  if (t) { [[clang::musttail]] return unit_009C(c, 5u, depth); } }
L_0036FD3C:
    set32(c.r[3], 0u + 7u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; if (c.r[7].d[0] != 0) c.r[2].d[0] = c.r[3].d[0];  if (t) { [[clang::musttail]] return unit_009C(c, 5u, depth); } }
L_0036FD48:
    set32(c.r[3], 0u + 8u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; if (c.r[7].d[0] != 0) c.r[2].d[0] = c.r[3].d[0];  if (t) { [[clang::musttail]] return unit_009C(c, 5u, depth); } }
L_0036FD54:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 48u);  if (t) { [[clang::musttail]] return unit_009C(c, 5u, depth); } }
L_0036FD5C:
    c.r[1].d[0] = c.r[6].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 1;
L_0036FD60:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[2], 0u + 11u);  if (t) { goto L_0036FD74; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 10u);  if (t) { [[clang::musttail]] return unit_009C(c, 5u, depth); } }
    set32(c.r[2], 0u + 11u);
    c.budget -= 1;
L_0036FD74:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_009C(c, 5u, depth); } }
    c.r[1].d[0] = c.r[6].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 1;
L_0036FD80:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[2], 0u + 15u);  if (t) { goto L_0036FD94; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 14u);  if (t) { goto L_0036FD94; } }
    set32(c.r[2], 0u + 15u);
    c.budget -= 1;
L_0036FD94:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_009C(c, 5u, depth); } }
L_0036FD9C:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[2].d[0]; c.r[1].d[0] = c.r[6].sd[0] < 5ll ? 1ull : 0ull;  if (t) { goto L_0036FDC8; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull; set32(c.r[2], 0u + 16u);  if (t) { goto L_0036FDBC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_009C(c, 4u, depth); } }
    set32(c.r[2], 0u + 16u);
    c.budget -= 1;
L_0036FDBC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_009C(c, 5u, depth); } }
    c.r[1].d[0] = c.r[6].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 1;
L_0036FDC8:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[2], 0u + 13u);  if (t) { goto L_0036FDDC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 12u);  if (t) { goto L_0036FDDC; } }
    set32(c.r[2], 0u + 13u);
    c.budget -= 1;
L_0036FDDC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_009C(c, 5u, depth); } }
L_0036FDE4:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 21u);  if (t) { goto L_0036FE50; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[2].d[0]; c.r[1].d[0] = c.r[6].sd[0] < 5ll ? 1ull : 0ull;  if (t) { goto L_0036FE30; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull; c.r[1].d[0] = c.r[6].sd[0] < 2ll ? 1ull : 0ull;  if (t) { goto L_0036FE10; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_009C(c, 4u, depth); } }
    c.r[1].d[0] = c.r[6].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 1;
L_0036FE10:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[2], 0u + 24u);  if (t) { goto L_0036FE24; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 22u);  if (t) { goto L_0036FE24; } }
    set32(c.r[2], 0u + 24u);
    c.budget -= 1;
L_0036FE24:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_009C(c, 5u, depth); } }
    c.r[1].d[0] = c.r[6].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 1;
L_0036FE30:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[2], 0u + 23u);  if (t) { goto L_0036FE44; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 20u);  if (t) { goto L_0036FE44; } }
    set32(c.r[2], 0u + 23u);
    c.budget -= 1;
L_0036FE44:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_009C(c, 5u, depth); } }
    set32(c.r[2], 0u + 21u);
    c.budget -= 1;
L_0036FE50:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_009C(c, 5u, depth); } }
L_0036FE58:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 27u);  if (t) { goto L_0036FEBC; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[2].d[0];  if (t) { goto L_0036FE8C; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull; set32(c.r[2], 0u + 19u);  if (t) { goto L_0036FE84; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_009C(c, 4u, depth); } }
    set32(c.r[2], 0u + 19u);
    c.budget -= 1;
L_0036FE84:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_009C(c, 5u, depth); } }
L_0036FE8C:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { goto L_0036FE9C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 28u);  if (t) { [[clang::musttail]] return unit_009C(c, 5u, depth); } }
L_0036FE9C:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != c.r[2].d[0];  if (t) { goto L_0036FEAC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 29u);  if (t) { goto L_0036FEB0; } }
L_0036FEAC:
    set32(c.r[2], 0u + 30u);
    c.budget -= 1;
L_0036FEB0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_009C(c, 5u, depth); } }
    set32(c.r[2], 0u + 27u);
    c.budget -= 1;
L_0036FEBC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_009C(c, 5u, depth); } }
L_0036FEC4:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 26u);  if (t) { goto L_0036FEF0; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull; set32(c.r[2], 0u + 25u);  if (t) { goto L_0036FEE4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 4u);  if (t) { goto L_0036FEFC; } }
    set32(c.r[2], 0u + 25u);
    c.budget -= 1;
L_0036FEE4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_009C(c, 5u, depth); } }
    set32(c.r[2], 0u + 26u);
    c.budget -= 1;
L_0036FEF0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_009C(c, 5u, depth); } }
L_0036FEF8:
    set32(c.r[2], 0u + 4u);
    c.budget -= 1;
L_0036FEFC:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 38u);  if (t) { goto L_0036FF70; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 34u);  if (t) { goto L_0036FF64; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 36u);  if (t) { goto L_0036FF54; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 32u);  if (t) { goto L_0036FF48; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull; set32(c.r[2], 0u + 33u);  if (t) { goto L_0036FF3C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_009C(c, 4u, depth); } }
    set32(c.r[2], 0u + 33u);
    c.budget -= 1;
L_0036FF3C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_009C(c, 5u, depth); } }
    set32(c.r[2], 0u + 32u);
    c.budget -= 1;
L_0036FF48:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_009C(c, 5u, depth); } }
    set32(c.r[2], 0u + 36u);
    c.budget -= 1;
L_0036FF54:
    set32(c.r[3], 0u + 37u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; if (c.r[6].d[0] != 0) c.r[2].d[0] = c.r[3].d[0];  if (t) { [[clang::musttail]] return unit_009C(c, 5u, depth); } }
    set32(c.r[2], 0u + 34u);
    c.budget -= 1;
L_0036FF64:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_009C(c, 5u, depth); } }
    set32(c.r[2], 0u + 38u);
    c.budget -= 1;
L_0036FF70:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_009C(c, 5u, depth); } }
L_0036FF78:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 40u);  if (t) { goto L_0036FFA4; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull; set32(c.r[2], 0u + 39u);  if (t) { goto L_0036FF98; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_009C(c, 4u, depth); } }
    set32(c.r[2], 0u + 39u);
    c.budget -= 1;
L_0036FF98:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_009C(c, 5u, depth); } }
    set32(c.r[2], 0u + 40u);
    c.budget -= 1;
L_0036FFA4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_009C(c, 5u, depth); } }
L_0036FFAC:
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[2].d[0];  if (t) { goto L_0036FFE8; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_0036FFE0; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { [[clang::musttail]] return unit_009C(c, 5u, depth); } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_009C(c, 5u, depth); } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_009C(c, 4u, depth); } }
L_0036FFE0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[3].d[0] + 0ull;  if (t) { [[clang::musttail]] return unit_009C(c, 5u, depth); } }
L_0036FFE8:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0036FFFC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 46u);  if (t) { [[clang::musttail]] return unit_009C(c, 5u, depth); } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0036FFFC:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 47u);  if (t) { [[clang::musttail]] return unit_009C(c, 3u, depth); } }
    [[clang::musttail]] return unit_009C(c, 2u, depth);
}

}
