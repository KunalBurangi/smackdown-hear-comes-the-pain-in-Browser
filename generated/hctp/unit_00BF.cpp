#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_00BF[4096] = {
    1, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 4, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0,
    8, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 11, 0, 0, 0, 12, 0, 0, 0,
    0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 20, 0, 0, 0,
    0, 0, 21, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 23, 0, 24, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 36, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 38, 0, 0, 0, 0, 39, 0,
    0, 0, 0, 40, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 43, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    45, 0, 0, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0,
    0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0,
    0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0,
    0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 55, 0, 0, 0, 56, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 59, 0, 0, 0, 0, 60, 0, 0, 0, 61, 0,
    0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 64,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 66, 0, 67, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 69, 0, 0, 70, 0, 71, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 72, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 81, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 0, 84, 0,
    0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0,
    0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    88, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    91, 0, 0, 0, 0, 0, 0, 92, 0, 0, 93, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0,
    96, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 98, 0, 0, 99, 0, 0, 0, 0, 0, 100, 0, 0, 0,
    0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 104,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 109, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0,
    0, 0, 0, 0, 0, 0, 112, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 115, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 119, 0, 0, 0, 0,
    0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 123, 0, 124, 0, 125, 0, 126, 0, 127, 0, 128, 0, 129, 0, 130, 0, 131, 0, 132, 133, 0, 0, 134, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 136, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 141, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 0, 145,
    0, 0, 0, 0, 146, 0, 0, 0, 147, 0, 0, 0, 148, 0, 0, 0, 0, 0, 149, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 151, 0, 0, 0, 0, 152, 0, 153, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0, 0, 156,
    0, 0, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 161, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 0, 163, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0,
    165, 0, 0, 0, 0, 0, 166, 0, 0, 0, 0, 167, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 169, 0, 170, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 172, 0,
    0, 0, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 176, 0, 0, 0, 0, 177,
    0, 0, 178, 0, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 182, 0, 0, 0, 0, 183, 0, 0, 0, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0, 185, 0, 0, 0, 0, 186, 0, 0, 0, 187, 0, 0,
    0, 0, 188, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 191, 0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 196, 0, 0, 0, 0, 197, 0, 0, 0, 0, 198,
    0, 0, 0, 0, 199, 0, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 202, 0, 0, 0, 0, 203, 0, 0, 0,
    0, 0, 204, 0, 0, 0, 0, 0, 0, 205, 0, 0, 0, 206, 0, 0, 0, 0, 207, 0, 0, 0, 0, 208, 0, 209, 0, 0, 0, 210, 0, 0,
    211, 0, 0, 0, 0, 0, 0, 0, 0, 0, 212, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 213, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 0, 0, 0, 0, 0, 215, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 217, 0, 0, 0, 0, 218, 0, 0,
    0, 219, 0, 0, 0, 220, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 222, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 223, 0, 0, 0, 0, 0, 0, 0, 224, 0, 0, 0, 0, 0, 0, 225, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    226, 0, 0, 0, 227, 0, 0, 0, 228, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 229, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 230, 0, 0, 0, 231, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 232, 0, 0, 0, 0, 0, 0, 0, 0, 233, 0, 0, 0, 0, 234, 0, 0, 0, 0, 235, 0, 0, 0,
    0, 236, 0, 0, 0, 0, 0, 0, 0, 0, 237, 0, 0, 0, 0, 238, 0, 0, 0, 0, 0, 0, 0, 0, 239, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 240, 0, 0, 0, 0, 0, 241, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 242, 0, 0, 0, 0, 243, 0, 0, 0, 244, 0, 0, 0, 0, 0, 0, 245, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    246, 0, 0, 0, 0, 0, 0, 0, 247, 0, 0, 0, 248, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 249, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 250, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 251, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 252, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 253, 0, 254, 0, 255, 0, 256, 0, 257, 0, 0, 0, 258, 0, 0, 0, 259, 0, 0, 260, 0, 0, 0, 261, 0, 0, 0, 0,
    0, 0, 262, 0, 263, 0, 264, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 265, 0, 0, 0, 0, 0, 0, 266, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 267, 0, 0, 0, 0, 0, 0, 268, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 269, 0, 0, 0, 0, 0, 0, 0, 0, 0, 270, 0, 271, 0, 0, 272, 0, 0, 0, 0, 0, 0, 0, 0, 273, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 274, 0, 0, 0, 0, 0, 275, 0, 0, 0, 0, 0, 0, 276, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 277, 0, 0, 0, 0, 0, 278, 0, 0, 0, 0, 0, 0, 279, 0, 0, 0, 0, 0, 280, 0, 0, 0, 0, 281, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 282, 0, 283, 0, 284, 0, 285, 0, 0, 0, 286, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 287, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 288, 0, 0, 0, 0, 289, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 290, 0, 0, 0, 0, 291, 0, 0,
    0, 0, 292, 0, 0, 0, 0, 0, 293, 0, 0, 0, 294, 0, 0, 0, 0, 0, 0, 295, 0, 0, 296, 0, 0, 0, 0, 297, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 298, 0, 0, 0, 0, 0, 299, 0, 0, 0, 0, 0, 0, 0, 0, 0, 300, 0, 0, 0, 301, 0, 302, 0, 303, 0,
    0, 304, 0, 305, 0, 0, 0, 0, 306, 0, 0, 0, 307, 0, 0, 0, 308, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 309, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 310, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 311, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 312, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 313, 0, 0, 314, 0, 315, 0, 316, 0, 0, 0, 0, 0, 0, 317, 0, 0, 318, 0, 0, 0, 0, 0, 0, 319, 0, 0, 0, 0, 320,
    0, 0, 0, 321, 0, 0, 0, 0, 322, 0, 0, 0, 0, 0, 323, 0, 0, 0, 324, 0, 0, 0, 0, 0, 0, 0, 325, 0, 0, 0, 0, 0,
    0, 326, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 327, 0, 0, 0, 0, 0, 0, 0, 0, 328,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 329, 0, 0, 0, 0, 330, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 331, 0, 0, 0, 0, 0, 0, 0, 332, 0, 0, 0, 333, 0, 0, 0, 334, 0, 0, 0, 0, 0, 0, 0,
    335, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 336, 0, 0, 0, 0, 0, 0, 0, 0, 337, 0, 0, 0, 0, 0, 0, 338,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 339, 0, 0, 0, 0, 0, 0, 340, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 341, 0, 0, 0, 0, 0, 342, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 343,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 344, 0, 0, 0, 0, 0, 0, 345, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 346, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 347, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 348, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 349, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 350, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 351, 0, 0, 0, 0, 352, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    353, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 354, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 355, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 356, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 357, 0, 0, 0, 0, 0, 0, 0, 358, 0, 0, 0, 0, 0,
    0, 0, 359, 0, 0, 360, 0, 0, 0, 0, 0, 0, 361, 0, 0, 0, 0, 0, 0, 362, 0, 363, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 364, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 365, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 366, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 367, 0, 0, 0, 0, 0, 0, 368, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 369, 0, 0, 0, 0, 0, 0, 370, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 371, 0, 0, 0, 0, 372, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 373, 0, 0, 0, 0, 0, 374, 0, 0, 0,
    0, 0, 0, 0, 375, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 376, 0, 0, 0, 0, 0, 0, 377, 0, 0, 0, 0, 0, 378, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 379, 0, 0, 0, 0, 0, 0, 0, 0, 380, 0, 0, 0, 0, 0, 0, 0, 0, 381, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 382, 0, 0, 0, 0, 0, 383, 0, 0, 0, 384, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 385, 0, 0, 0, 0, 386, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 387, 0, 0, 0, 0, 0, 0, 0, 0, 0, 388, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    389, 0, 0, 0, 0, 390, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 391, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    392, 0, 0, 0, 0, 393, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 394, 0, 0, 0, 395, 0, 0, 0, 396, 0,
    0, 0, 0, 0, 0, 0, 397, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 398, 0, 0, 0, 0, 0, 0, 399, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 400, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 401, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 402, 0, 0, 0, 0, 0, 403, 0, 0, 0, 0, 404, 0, 0, 0, 0, 0, 0, 0, 405, 0, 0, 0, 0, 0, 0, 0, 406, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 407, 0, 0, 0, 0, 0, 408, 0, 409, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 410, 0, 0, 0, 0, 0, 411, 0, 0, 0, 0, 412, 0, 0, 0, 0, 0, 0, 0, 413, 0, 0, 0, 0, 0, 0, 0, 414, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 415, 0, 0, 0, 0, 0, 0, 0, 0,
    416, 0, 0, 0, 417, 0, 0, 0, 0, 0, 0, 0, 418, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 419, 0, 0, 0, 0,
    0, 420, 0, 0, 0, 0, 0, 0, 421, 0, 0, 0, 0, 0, 422, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 423, 0, 0, 0, 0, 0, 0, 424, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 425, 0, 0, 0, 0, 0, 426, 0,
    0, 0, 0, 0, 0, 0, 0, 427, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 428, 0, 0, 0, 0, 0, 0, 0,
    429, 0, 0, 0, 0, 0, 0, 430, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 431, 0, 0, 0, 0, 0, 432, 0, 0, 0,
    0, 0, 0, 433, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 434, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    435, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 436, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 437, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 438, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 439, 0,
    0, 0, 0, 0, 440, 0, 0, 0, 0, 0, 441, 0, 0, 0, 0, 442, 0, 0, 0, 0, 0, 443, 0, 0, 0, 0, 444, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 445, 0, 0, 0, 0, 0, 0, 0, 446, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 447, 0, 0, 0,
};

void unit_00BF(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_003FC000;
    case 2u: goto L_003FC008;
    case 3u: goto L_003FC058;
    case 4u: goto L_003FC078;
    case 5u: goto L_003FC0A8;
    case 6u: goto L_003FC0C0;
    case 7u: goto L_003FC0EC;
    case 8u: goto L_003FC100;
    case 9u: goto L_003FC118;
    case 10u: goto L_003FC150;
    case 11u: goto L_003FC160;
    case 12u: goto L_003FC170;
    case 13u: goto L_003FC18C;
    case 14u: goto L_003FC1B8;
    case 15u: goto L_003FC220;
    case 16u: goto L_003FC310;
    case 17u: goto L_003FC328;
    case 18u: goto L_003FC340;
    case 19u: goto L_003FC358;
    case 20u: goto L_003FC370;
    case 21u: goto L_003FC388;
    case 22u: goto L_003FC398;
    case 23u: goto L_003FC3B8;
    case 24u: goto L_003FC3C0;
    case 25u: goto L_003FC3C8;
    case 26u: goto L_003FC438;
    case 27u: goto L_003FC448;
    case 28u: goto L_003FC49C;
    case 29u: goto L_003FC4B0;
    case 30u: goto L_003FC4E4;
    case 31u: goto L_003FC524;
    case 32u: goto L_003FC534;
    case 33u: goto L_003FC550;
    case 34u: goto L_003FC574;
    case 35u: goto L_003FC5A8;
    case 36u: goto L_003FC5B8;
    case 37u: goto L_003FC5D0;
    case 38u: goto L_003FC5E4;
    case 39u: goto L_003FC5F8;
    case 40u: goto L_003FC60C;
    case 41u: goto L_003FC620;
    case 42u: goto L_003FC638;
    case 43u: goto L_003FC64C;
    case 44u: goto L_003FC654;
    case 45u: goto L_003FC680;
    case 46u: goto L_003FC6A8;
    case 47u: goto L_003FC6D0;
    case 48u: goto L_003FC6F8;
    case 49u: goto L_003FC71C;
    case 50u: goto L_003FC768;
    case 51u: goto L_003FC784;
    case 52u: goto L_003FC7C8;
    case 53u: goto L_003FC7EC;
    case 54u: goto L_003FC810;
    case 55u: goto L_003FC884;
    case 56u: goto L_003FC894;
    case 57u: goto L_003FC8A8;
    case 58u: goto L_003FC8C4;
    case 59u: goto L_003FC8D4;
    case 60u: goto L_003FC8E8;
    case 61u: goto L_003FC8F8;
    case 62u: goto L_003FC908;
    case 63u: goto L_003FC940;
    case 64u: goto L_003FC97C;
    case 65u: goto L_003FC9C0;
    case 66u: goto L_003FC9D8;
    case 67u: goto L_003FC9E0;
    case 68u: goto L_003FCA2C;
    case 69u: goto L_003FCA40;
    case 70u: goto L_003FCA4C;
    case 71u: goto L_003FCA54;
    case 72u: goto L_003FCA88;
    case 73u: goto L_003FCA98;
    case 74u: goto L_003FCB18;
    case 75u: goto L_003FCBD8;
    case 76u: goto L_003FCC0C;
    case 77u: goto L_003FCC30;
    case 78u: goto L_003FCC48;
    case 79u: goto L_003FCC5C;
    case 80u: goto L_003FCCA0;
    case 81u: goto L_003FCCA8;
    case 82u: goto L_003FCCBC;
    case 83u: goto L_003FCCD4;
    case 84u: goto L_003FCCF8;
    case 85u: goto L_003FCD14;
    case 86u: goto L_003FCD68;
    case 87u: goto L_003FCD88;
    case 88u: goto L_003FCE00;
    case 89u: goto L_003FCE18;
    case 90u: goto L_003FCE4C;
    case 91u: goto L_003FCE80;
    case 92u: goto L_003FCE9C;
    case 93u: goto L_003FCEA8;
    case 94u: goto L_003FCEBC;
    case 95u: goto L_003FCEF0;
    case 96u: goto L_003FCF00;
    case 97u: goto L_003FCF1C;
    case 98u: goto L_003FCF4C;
    case 99u: goto L_003FCF58;
    case 100u: goto L_003FCF70;
    case 101u: goto L_003FCF8C;
    case 102u: goto L_003FCFC4;
    case 103u: goto L_003FCFE0;
    case 104u: goto L_003FCFFC;
    case 105u: goto L_003FD034;
    case 106u: goto L_003FD050;
    case 107u: goto L_003FD068;
    case 108u: goto L_003FD0B0;
    case 109u: goto L_003FD0C8;
    case 110u: goto L_003FD0D0;
    case 111u: goto L_003FD0F8;
    case 112u: goto L_003FD118;
    case 113u: goto L_003FD12C;
    case 114u: goto L_003FD160;
    case 115u: goto L_003FD174;
    case 116u: goto L_003FD1A4;
    case 117u: goto L_003FD1B8;
    case 118u: goto L_003FD1D8;
    case 119u: goto L_003FD1EC;
    case 120u: goto L_003FD210;
    case 121u: goto L_003FD254;
    case 122u: goto L_003FD270;
    case 123u: goto L_003FD298;
    case 124u: goto L_003FD2A0;
    case 125u: goto L_003FD2A8;
    case 126u: goto L_003FD2B0;
    case 127u: goto L_003FD2B8;
    case 128u: goto L_003FD2C0;
    case 129u: goto L_003FD2C8;
    case 130u: goto L_003FD2D0;
    case 131u: goto L_003FD2D8;
    case 132u: goto L_003FD2E0;
    case 133u: goto L_003FD2E4;
    case 134u: goto L_003FD2F0;
    case 135u: goto L_003FD328;
    case 136u: goto L_003FD33C;
    case 137u: goto L_003FD350;
    case 138u: goto L_003FD368;
    case 139u: goto L_003FD398;
    case 140u: goto L_003FD3BC;
    case 141u: goto L_003FD3CC;
    case 142u: goto L_003FD420;
    case 143u: goto L_003FD430;
    case 144u: goto L_003FD458;
    case 145u: goto L_003FD47C;
    case 146u: goto L_003FD490;
    case 147u: goto L_003FD4A0;
    case 148u: goto L_003FD4B0;
    case 149u: goto L_003FD4C8;
    case 150u: goto L_003FD4D8;
    case 151u: goto L_003FD508;
    case 152u: goto L_003FD51C;
    case 153u: goto L_003FD524;
    case 154u: goto L_003FD538;
    case 155u: goto L_003FD568;
    case 156u: goto L_003FD57C;
    case 157u: goto L_003FD5A0;
    case 158u: goto L_003FD5B4;
    case 159u: goto L_003FD5E0;
    case 160u: goto L_003FD620;
    case 161u: goto L_003FD668;
    case 162u: goto L_003FD6D8;
    case 163u: goto L_003FD6F8;
    case 164u: goto L_003FD770;
    case 165u: goto L_003FD780;
    case 166u: goto L_003FD798;
    case 167u: goto L_003FD7AC;
    case 168u: goto L_003FD7BC;
    case 169u: goto L_003FD808;
    case 170u: goto L_003FD810;
    case 171u: goto L_003FD864;
    case 172u: goto L_003FD878;
    case 173u: goto L_003FD89C;
    case 174u: goto L_003FD8B4;
    case 175u: goto L_003FD8D8;
    case 176u: goto L_003FD8E8;
    case 177u: goto L_003FD8FC;
    case 178u: goto L_003FD908;
    case 179u: goto L_003FD928;
    case 180u: goto L_003FD948;
    case 181u: goto L_003FD958;
    case 182u: goto L_003FD984;
    case 183u: goto L_003FD998;
    case 184u: goto L_003FD9BC;
    case 185u: goto L_003FD9D0;
    case 186u: goto L_003FD9E4;
    case 187u: goto L_003FD9F4;
    case 188u: goto L_003FDA08;
    case 189u: goto L_003FDA1C;
    case 190u: goto L_003FDA34;
    case 191u: goto L_003FDA4C;
    case 192u: goto L_003FDA60;
    case 193u: goto L_003FDA8C;
    case 194u: goto L_003FDAA8;
    case 195u: goto L_003FDAC0;
    case 196u: goto L_003FDAD4;
    case 197u: goto L_003FDAE8;
    case 198u: goto L_003FDAFC;
    case 199u: goto L_003FDB10;
    case 200u: goto L_003FDB30;
    case 201u: goto L_003FDB48;
    case 202u: goto L_003FDB5C;
    case 203u: goto L_003FDB70;
    case 204u: goto L_003FDB88;
    case 205u: goto L_003FDBA4;
    case 206u: goto L_003FDBB4;
    case 207u: goto L_003FDBC8;
    case 208u: goto L_003FDBDC;
    case 209u: goto L_003FDBE4;
    case 210u: goto L_003FDBF4;
    case 211u: goto L_003FDC00;
    case 212u: goto L_003FDC28;
    case 213u: goto L_003FDC74;
    case 214u: goto L_003FDCB8;
    case 215u: goto L_003FDCE0;
    case 216u: goto L_003FDD24;
    case 217u: goto L_003FDD60;
    case 218u: goto L_003FDD74;
    case 219u: goto L_003FDD84;
    case 220u: goto L_003FDD94;
    case 221u: goto L_003FDDA4;
    case 222u: goto L_003FDDD0;
    case 223u: goto L_003FDE04;
    case 224u: goto L_003FDE24;
    case 225u: goto L_003FDE40;
    case 226u: goto L_003FDE80;
    case 227u: goto L_003FDE90;
    case 228u: goto L_003FDEA0;
    case 229u: goto L_003FDF08;
    case 230u: goto L_003FDF50;
    case 231u: goto L_003FDF60;
    case 232u: goto L_003FDFA4;
    case 233u: goto L_003FDFC8;
    case 234u: goto L_003FDFDC;
    case 235u: goto L_003FDFF0;
    case 236u: goto L_003FE004;
    case 237u: goto L_003FE028;
    case 238u: goto L_003FE03C;
    case 239u: goto L_003FE060;
    case 240u: goto L_003FE0D0;
    case 241u: goto L_003FE0E8;
    case 242u: goto L_003FE114;
    case 243u: goto L_003FE128;
    case 244u: goto L_003FE138;
    case 245u: goto L_003FE154;
    case 246u: goto L_003FE180;
    case 247u: goto L_003FE1A0;
    case 248u: goto L_003FE1B0;
    case 249u: goto L_003FE1E0;
    case 250u: goto L_003FE220;
    case 251u: goto L_003FE254;
    case 252u: goto L_003FE2B4;
    case 253u: goto L_003FE310;
    case 254u: goto L_003FE318;
    case 255u: goto L_003FE320;
    case 256u: goto L_003FE328;
    case 257u: goto L_003FE330;
    case 258u: goto L_003FE340;
    case 259u: goto L_003FE350;
    case 260u: goto L_003FE35C;
    case 261u: goto L_003FE36C;
    case 262u: goto L_003FE388;
    case 263u: goto L_003FE390;
    case 264u: goto L_003FE398;
    case 265u: goto L_003FE3D0;
    case 266u: goto L_003FE3EC;
    case 267u: goto L_003FE438;
    case 268u: goto L_003FE454;
    case 269u: goto L_003FE490;
    case 270u: goto L_003FE4B8;
    case 271u: goto L_003FE4C0;
    case 272u: goto L_003FE4CC;
    case 273u: goto L_003FE4F0;
    case 274u: goto L_003FE524;
    case 275u: goto L_003FE53C;
    case 276u: goto L_003FE558;
    case 277u: goto L_003FE58C;
    case 278u: goto L_003FE5A4;
    case 279u: goto L_003FE5C0;
    case 280u: goto L_003FE5D8;
    case 281u: goto L_003FE5EC;
    case 282u: goto L_003FE618;
    case 283u: goto L_003FE620;
    case 284u: goto L_003FE628;
    case 285u: goto L_003FE630;
    case 286u: goto L_003FE640;
    case 287u: goto L_003FE678;
    case 288u: goto L_003FE6A0;
    case 289u: goto L_003FE6B4;
    case 290u: goto L_003FE6E0;
    case 291u: goto L_003FE6F4;
    case 292u: goto L_003FE708;
    case 293u: goto L_003FE720;
    case 294u: goto L_003FE730;
    case 295u: goto L_003FE74C;
    case 296u: goto L_003FE758;
    case 297u: goto L_003FE76C;
    case 298u: goto L_003FE798;
    case 299u: goto L_003FE7B0;
    case 300u: goto L_003FE7D8;
    case 301u: goto L_003FE7E8;
    case 302u: goto L_003FE7F0;
    case 303u: goto L_003FE7F8;
    case 304u: goto L_003FE804;
    case 305u: goto L_003FE80C;
    case 306u: goto L_003FE820;
    case 307u: goto L_003FE830;
    case 308u: goto L_003FE840;
    case 309u: goto L_003FE874;
    case 310u: goto L_003FE8A0;
    case 311u: goto L_003FE8D4;
    case 312u: goto L_003FE934;
    case 313u: goto L_003FE988;
    case 314u: goto L_003FE994;
    case 315u: goto L_003FE99C;
    case 316u: goto L_003FE9A4;
    case 317u: goto L_003FE9C0;
    case 318u: goto L_003FE9CC;
    case 319u: goto L_003FE9E8;
    case 320u: goto L_003FE9FC;
    case 321u: goto L_003FEA0C;
    case 322u: goto L_003FEA20;
    case 323u: goto L_003FEA38;
    case 324u: goto L_003FEA48;
    case 325u: goto L_003FEA68;
    case 326u: goto L_003FEA84;
    case 327u: goto L_003FEAD8;
    case 328u: goto L_003FEAFC;
    case 329u: goto L_003FEB58;
    case 330u: goto L_003FEB6C;
    case 331u: goto L_003FEBA0;
    case 332u: goto L_003FEBC0;
    case 333u: goto L_003FEBD0;
    case 334u: goto L_003FEBE0;
    case 335u: goto L_003FEC00;
    case 336u: goto L_003FEC3C;
    case 337u: goto L_003FEC60;
    case 338u: goto L_003FEC7C;
    case 339u: goto L_003FECD0;
    case 340u: goto L_003FECEC;
    case 341u: goto L_003FED30;
    case 342u: goto L_003FED48;
    case 343u: goto L_003FED7C;
    case 344u: goto L_003FEDB4;
    case 345u: goto L_003FEDD0;
    case 346u: goto L_003FEE08;
    case 347u: goto L_003FEE48;
    case 348u: goto L_003FEE98;
    case 349u: goto L_003FEED8;
    case 350u: goto L_003FEF58;
    case 351u: goto L_003FEFBC;
    case 352u: goto L_003FEFD0;
    case 353u: goto L_003FF000;
    case 354u: goto L_003FF078;
    case 355u: goto L_003FF0A8;
    case 356u: goto L_003FF0E4;
    case 357u: goto L_003FF148;
    case 358u: goto L_003FF168;
    case 359u: goto L_003FF188;
    case 360u: goto L_003FF194;
    case 361u: goto L_003FF1B0;
    case 362u: goto L_003FF1CC;
    case 363u: goto L_003FF1D4;
    case 364u: goto L_003FF220;
    case 365u: goto L_003FF25C;
    case 366u: goto L_003FF29C;
    case 367u: goto L_003FF2D8;
    case 368u: goto L_003FF2F4;
    case 369u: goto L_003FF330;
    case 370u: goto L_003FF34C;
    case 371u: goto L_003FF390;
    case 372u: goto L_003FF3A4;
    case 373u: goto L_003FF3D8;
    case 374u: goto L_003FF3F0;
    case 375u: goto L_003FF410;
    case 376u: goto L_003FF444;
    case 377u: goto L_003FF460;
    case 378u: goto L_003FF478;
    case 379u: goto L_003FF4A8;
    case 380u: goto L_003FF4CC;
    case 381u: goto L_003FF4F0;
    case 382u: goto L_003FF53C;
    case 383u: goto L_003FF554;
    case 384u: goto L_003FF564;
    case 385u: goto L_003FF5A4;
    case 386u: goto L_003FF5B8;
    case 387u: goto L_003FF630;
    case 388u: goto L_003FF658;
    case 389u: goto L_003FF680;
    case 390u: goto L_003FF694;
    case 391u: goto L_003FF6D8;
    case 392u: goto L_003FF700;
    case 393u: goto L_003FF714;
    case 394u: goto L_003FF758;
    case 395u: goto L_003FF768;
    case 396u: goto L_003FF778;
    case 397u: goto L_003FF798;
    case 398u: goto L_003FF7CC;
    case 399u: goto L_003FF7E8;
    case 400u: goto L_003FF814;
    case 401u: goto L_003FF858;
    case 402u: goto L_003FF88C;
    case 403u: goto L_003FF8A4;
    case 404u: goto L_003FF8B8;
    case 405u: goto L_003FF8D8;
    case 406u: goto L_003FF8F8;
    case 407u: goto L_003FF930;
    case 408u: goto L_003FF948;
    case 409u: goto L_003FF950;
    case 410u: goto L_003FF98C;
    case 411u: goto L_003FF9A4;
    case 412u: goto L_003FF9B8;
    case 413u: goto L_003FF9D8;
    case 414u: goto L_003FF9F8;
    case 415u: goto L_003FFA5C;
    case 416u: goto L_003FFA80;
    case 417u: goto L_003FFA90;
    case 418u: goto L_003FFAB0;
    case 419u: goto L_003FFAEC;
    case 420u: goto L_003FFB04;
    case 421u: goto L_003FFB20;
    case 422u: goto L_003FFB38;
    case 423u: goto L_003FFB88;
    case 424u: goto L_003FFBA4;
    case 425u: goto L_003FFBE0;
    case 426u: goto L_003FFBF8;
    case 427u: goto L_003FFC1C;
    case 428u: goto L_003FFC60;
    case 429u: goto L_003FFC80;
    case 430u: goto L_003FFC9C;
    case 431u: goto L_003FFCD8;
    case 432u: goto L_003FFCF0;
    case 433u: goto L_003FFD0C;
    case 434u: goto L_003FFD50;
    case 435u: goto L_003FFD80;
    case 436u: goto L_003FFDB8;
    case 437u: goto L_003FFE40;
    case 438u: goto L_003FFE88;
    case 439u: goto L_003FFEF8;
    case 440u: goto L_003FFF10;
    case 441u: goto L_003FFF28;
    case 442u: goto L_003FFF3C;
    case 443u: goto L_003FFF54;
    case 444u: goto L_003FFF68;
    case 445u: goto L_003FFF98;
    case 446u: goto L_003FFFB8;
    case 447u: goto L_003FFFF0;
    default: bad_entry(c, 0x003FC000u); return;
    }
L_003FC000:
    st32((c.r[2].w[0]), c.r[22].w[0]);
    c.budget -= 2;
L_003FC008:
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const bool t = c.r[2].sd[0] < 0; c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003FC008u | kUnwind; return; } goto L_003FC008; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[2].d[0] = c.r[2].d[0] | 46096ull;
    c.r[3].d[0] = c.r[3].d[0] | 46128ull;
    c.r[4].d[0] = c.r[4].d[0] | 46112ull;
    st32((c.r[2].w[0]), c.r[18].w[0]);
    st32((c.r[3].w[0]), c.r[20].w[0]);
    st32((c.r[4].w[0]), c.r[21].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 11;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 60u)));  goto L_003FC05C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FC058u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BE(c, 288u, depth + 1u); else { c.pc = 0x003FB688u; return; } if (c.pc != 0x003FC058u) [[unlikely]] return; }
L_003FC058:
    set32(c.r[2], ld32((c.r[16].w[0] + 60u)));
    c.budget -= 1;
L_003FC05C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[3].d[0] = c.r[3].d[0] | 8208ull;
    set32(c.r[4], 0u + 1u);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    st32((c.r[16].w[0] + 68u), c.r[4].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FC078u); set32(c.r[4], ld32((c.r[16].w[0] + 64u)));  if (depth < kMaxDepth) unit_0002(c, 504u, depth + 1u); else { c.pc = 0x0010BC40u; return; } if (c.pc != 0x003FC078u) [[unlikely]] return; }
L_003FC078:
    set32(c.r[2], 0u + 1u);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 56u));
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003FC0A8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FC0C0u); set32(c.r[4], 0u + 5u);  if (depth < kMaxDepth) unit_00BE(c, 288u, depth + 1u); else { c.pc = 0x003FB688u; return; } if (c.pc != 0x003FC0C0u) [[unlikely]] return; }
L_003FC0C0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[3].d[0] = c.r[3].d[0] | 46096ull;
    c.r[2].d[0] = c.r[2].d[0] | 46112ull;
    c.r[4].d[0] = c.r[4].d[0] | 46128ull;
    st32((c.r[2].w[0]), 0u);
    st32((c.r[3].w[0]), 0u);
    st32((c.r[4].w[0]), 0u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FC0ECu); set32(c.r[4], ld32((c.r[16].w[0] + 64u)));  if (depth < kMaxDepth) unit_0002(c, 502u, depth + 1u); else { c.pc = 0x0010BC30u; return; } if (c.pc != 0x003FC0ECu) [[unlikely]] return; }
L_003FC0EC:
    set32(c.r[2], 0u + 1u);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003FC100:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FC118u); set32(c.r[4], ld32((c.r[16].w[0] + 64u)));  if (depth < kMaxDepth) unit_0002(c, 508u, depth + 1u); else { c.pc = 0x0010BC60u; return; } if (c.pc != 0x003FC118u) [[unlikely]] return; }
L_003FC118:
    set32(c.r[3], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 64u)));
    set32(c.r[2], c.r[3].w[0] + 2051u);
    set32(c.r[3], c.r[3].w[0] + 4098u);
    c.r[5].d[0] = c.r[2].sd[0] < 0ll ? 1ull : 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    if (c.r[5].d[0] != 0) c.r[2].d[0] = c.r[3].d[0];
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 11));
    set32(c.r[2], c.r[2].w[0] << 11);
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 13;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0010BC40u | kUnwind; return; } [[clang::musttail]] return unit_0002(c, 504u, depth); }
L_003FC150:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00450000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[2].w[0] - 16848u), c.r[4].w[0]);  c.pc = t; return; }
L_003FC160:
    set32(c.r[3], ld32((c.r[4].w[0] + 6960u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 2520u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;  c.pc = t; return; }
L_003FC170:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00450000u);
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[3], ld32((c.r[2].w[0] - 16848u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_003FC1A8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FC18Cu);  if (depth < kMaxDepth) unit_0002(c, 170u, depth + 1u); else { c.pc = 0x00109AD0u; return; } if (c.pc != 0x003FC18Cu) [[unlikely]] return; }
L_003FC18C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[4], c.r[4].w[0] + 3864u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 72u);
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003E0E18u | kUnwind; return; } [[clang::musttail]] return unit_00B8(c, 50u, depth); }
L_003FC1A8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003FC1B8:
    set32(c.r[9], ld32((c.r[4].w[0] + 6960u)));
    set32(c.r[9], c.r[9].w[0] + 2632u);
    set32(c.r[3], ld32((c.r[9].w[0] + 24u)));
    st32((c.r[5].w[0]), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[9].w[0] + 12u)));
    set32(c.r[2], c.r[2].w[0] << 11);
    st32((c.r[7].w[0]), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[9].w[0] + 16u)));
    set32(c.r[3], ld32((c.r[9].w[0] + 12u)));
    set32(c.r[5], ld32((c.r[9].w[0] + 20u)));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[9].w[0] + 24u)));
    set32(c.r[3], c.r[3].w[0] << 11);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.budget -= 16;
    if (c.r[2].d[0] == 0ull) { breakpoint(c, 0x003FC1F4u);  goto L_003FC1F8; }
L_003FC1F8:
    mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[4].d[0] = c.hi.d[0];
    st32((c.r[6].w[0]), c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[9].w[0] + 16u)));
    set32(c.r[3], ld32((c.r[9].w[0] + 20u)));
    set32(c.r[2], c.r[2].w[0] << 11);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[8].w[0]), c.r[2].w[0]);  c.pc = t; return; }
L_003FC220:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00450000u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 64u), c.r[30].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 40u), c.r[21].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[22].d[0]);
    st64((c.r[29].w[0] + 56u), c.r[23].d[0]);
    st64((c.r[29].w[0] + 72u), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[2].w[0] - 16848u)));
    set32(c.r[5], ld32((c.r[18].w[0] + 6960u)));
    set32(c.r[6], c.r[5].w[0] + 4u);
    set32(c.r[17], c.r[5].w[0] + 2520u);
    set32(c.r[19], c.r[5].w[0] + 2560u);
    c.budget -= 20;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[30], c.r[5].w[0] + 2728u);  if (t) { goto L_003FC278; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0]), 0u);  if (t) { goto L_003FC404; } }
L_003FC278:
    set32(c.r[4], ld32((c.r[6].w[0] + 12u)));
    set32(c.r[3], ld32((c.r[6].w[0] + 8u)));
    set32(c.r[7], ld32((c.r[5].w[0] + 40u)));
    mmi::mult(c, 0, c.r[3].w[0], c.r[4].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], c.r[2].w[0] >> 31);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    c.budget -= 11;
    { const bool t = c.r[7].d[0] != 0ull; set32(c.r[20], c.r[2].w[0] + 10240u);  if (t) { goto L_003FC2C8; } }
    set32(c.r[2], ld32((c.r[6].w[0] + 16u)));
    set32(c.r[4], 0u - 64u);
    set32(c.r[2], c.r[2].w[0] + 63u);
    c.r[2].d[0] = c.r[2].d[0] & c.r[4].d[0];
    set32(c.r[3], c.r[2].w[0] + c.r[20].w[0]);
    st32((c.r[5].w[0] + 40u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] + 63u);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[3].d[0] & c.r[4].d[0];  if (t) { goto L_003FC2E4; } }
L_003FC2C8:
    set32(c.r[2], ld32((c.r[5].w[0] + 44u)));
    set32(c.r[4], 0u - 64u);
    set32(c.r[3], c.r[7].w[0] + 63u);
    set32(c.r[2], c.r[2].w[0] + 63u);
    c.r[3].d[0] = c.r[3].d[0] & c.r[4].d[0];
    c.r[2].d[0] = c.r[2].d[0] & c.r[4].d[0];
    st32((c.r[5].w[0] + 40u), c.r[3].w[0]);
    c.budget -= 7;
L_003FC2E4:
    st32((c.r[5].w[0] + 44u), c.r[2].w[0]);
    set32(c.r[22], ld32((c.r[5].w[0] + 44u)));
    set32(c.r[4], 0u - 64u);
    set32(c.r[16], ld32((c.r[5].w[0] + 40u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00080000u);
    c.r[2].d[0] = c.r[2].d[0] | 63ull;
    set32(c.r[2], c.r[2].w[0] + c.r[22].w[0]);
    c.r[21].d[0] = c.r[2].d[0] & c.r[4].d[0];
    set32(c.r[3], c.r[21].w[0] + 4175u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FC310u); c.r[23].d[0] = c.r[3].d[0] & c.r[4].d[0];  if (depth < kMaxDepth) unit_00BF(c, 307u, depth + 1u); else { c.pc = 0x003FE830u; return; } if (c.pc != 0x003FC310u) [[unlikely]] return; }
L_003FC310:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003FC390; } }
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FC328u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 174u, depth + 1u); else { c.pc = 0x00109B80u; return; } if (c.pc != 0x003FC328u) [[unlikely]] return; }
L_003FC328:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00400000u);
    set32(c.r[6], c.r[6].w[0] - 15288u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FC340u); c.r[7].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 201u, depth + 1u); else { c.pc = 0x00109FD0u; return; } if (c.pc != 0x003FC340u) [[unlikely]] return; }
L_003FC340:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00400000u);
    set32(c.r[6], c.r[6].w[0] - 15024u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FC358u); c.r[7].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 201u, depth + 1u); else { c.pc = 0x00109FD0u; return; } if (c.pc != 0x003FC358u) [[unlikely]] return; }
L_003FC358:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00400000u);
    set32(c.r[6], c.r[6].w[0] - 14896u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], 0u + 2u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FC370u); c.r[7].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 201u, depth + 1u); else { c.pc = 0x00109FD0u; return; } if (c.pc != 0x003FC370u) [[unlikely]] return; }
L_003FC370:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00400000u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[6], c.r[6].w[0] - 14856u);
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FC388u); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_0002(c, 201u, depth + 1u); else { c.pc = 0x00109FD0u; return; } if (c.pc != 0x003FC388u) [[unlikely]] return; }
L_003FC388:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[17].w[0] + 112u);  if (t) { goto L_003FC39C; } }
L_003FC390:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FC398u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BF(c, 47u, depth + 1u); else { c.pc = 0x003FC6D0u; return; } if (c.pc != 0x003FC398u) [[unlikely]] return; }
L_003FC398:
    set32(c.r[16], c.r[17].w[0] + 112u);
    c.budget -= 1;
L_003FC39C:
    c.r[5].d[0] = c.r[22].d[0] + 0ull;
    c.r[6].d[0] = c.r[21].d[0] + 0ull;
    c.r[8].d[0] = c.r[23].d[0] + 0ull;
    set32(c.r[7], 0u + 256u);
    set32(c.r[9], 0u + 512u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FC3B8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BE(c, 291u, depth + 1u); else { c.pc = 0x003FB718u; return; } if (c.pc != 0x003FC3B8u) [[unlikely]] return; }
L_003FC3B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FC3C0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BE(c, 308u, depth + 1u); else { c.pc = 0x003FBA90u; return; } if (c.pc != 0x003FC3C0u) [[unlikely]] return; }
L_003FC3C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FC3C8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BE(c, 318u, depth + 1u); else { c.pc = 0x003FBC90u; return; } if (c.pc != 0x003FC3C8u) [[unlikely]] return; }
L_003FC3C8:
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], 0u - 1u);
    st8((c.r[17].w[0] + 16u), static_cast<std::uint8_t>(0u));
    st8((c.r[17].w[0] + 17u), static_cast<std::uint8_t>(0u));
    st8((c.r[17].w[0] + 18u), static_cast<std::uint8_t>(0u));
    st32((c.r[17].w[0]), c.r[3].w[0]);
    st32((c.r[17].w[0] + 32u), 0u);
    st32((c.r[30].w[0]), c.r[2].w[0]);
    st32((c.r[30].w[0] + 4u), 0u);
    st32((c.r[17].w[0] + 4u), 0u);
    st32((c.r[17].w[0] + 8u), 0u);
    st32((c.r[17].w[0] + 12u), 0u);
    st32((c.r[17].w[0] + 20u), 0u);
    st32((c.r[17].w[0] + 24u), 0u);
    st32((c.r[17].w[0] + 28u), 0u);
    c.budget -= 15;
L_003FC404:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[23].d[0] = ld64((c.r[29].w[0] + 56u));
    c.r[30].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 72u));
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003FC438:
    set32(c.r[3], ld32((c.r[4].w[0] + 6960u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[3].w[0] + 2732u)));  c.pc = t; return; }
L_003FC448:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[2], 0u + 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    st32((c.r[3].w[0] + 3936u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[7].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[8], c.r[2].w[0] + 3944u);
    ldl(c.r[3], (c.r[7].w[0] + 7u));
    ldr(c.r[3], (c.r[7].w[0]));
    sdl(c.r[3], (c.r[8].w[0] + 7u));
    sdr(c.r[3], (c.r[8].w[0]));
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    c.r[4].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[6].w[0] + 6960u)));
    ldl(c.r[9], (c.r[7].w[0] + 7u));
    ldr(c.r[9], (c.r[7].w[0]));
    sdl(c.r[9], (c.r[2].w[0] + 2735u));
    sdr(c.r[9], (c.r[2].w[0] + 2728u));
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FC49Cu); c.r[5].d[0] = c.r[5].d[0] | 3904ull;  if (depth < kMaxDepth) unit_00BD(c, 82u, depth + 1u); else { c.pc = 0x003F4840u; return; } if (c.pc != 0x003FC49Cu) [[unlikely]] return; }
L_003FC49C:
    set32(c.r[2], 0u + 1u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003FC4B0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 4u);
    set32(c.r[7], c.r[29].w[0] + 8u);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[8], c.r[29].w[0] + 12u);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 40u), c.r[31].d[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FC4E4u); c.r[18].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BE(c, 300u, depth + 1u); else { c.pc = 0x003FB8D0u; return; } if (c.pc != 0x003FC4E4u) [[unlikely]] return; }
L_003FC4E4:
    set32(c.r[4], ld32((c.r[29].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x0FFF0000u);
    set32(c.r[6], ld32((c.r[29].w[0] + 8u)));
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x20000000u);
    set32(c.r[5], ld32((c.r[29].w[0] + 4u)));
    set32(c.r[7], ld32((c.r[29].w[0] + 12u)));
    c.r[4].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[6].d[0] = c.r[6].d[0] & c.r[2].d[0];
    c.r[8].d[0] = c.r[17].d[0] + 0ull;
    c.r[9].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.r[6].d[0] = c.r[6].d[0] | c.r[3].d[0];
    c.r[10].d[0] = 0ull + 0ull;
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FC524u); c.r[11].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00BF(c, 54u, depth + 1u); else { c.pc = 0x003FC810u; return; } if (c.pc != 0x003FC524u) [[unlikely]] return; }
L_003FC524:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FC534u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BE(c, 302u, depth + 1u); else { c.pc = 0x003FB9C0u; return; } if (c.pc != 0x003FC534u) [[unlikely]] return; }
L_003FC534:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[17].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 40u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003FC550:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[6].w[0] + 6960u)));
    set32(c.r[16], c.r[2].w[0] + 2632u);
    set32(c.r[17], c.r[2].w[0] + 2520u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FC574u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BE(c, 308u, depth + 1u); else { c.pc = 0x003FBA90u; return; } if (c.pc != 0x003FC574u) [[unlikely]] return; }
L_003FC574:
    set32(c.r[3], ld32((c.r[17].w[0] + 20u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_003FC5BC; }
    set32(c.r[2], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_003FC5BC; }
    set32(c.r[2], 0u + 1u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00480000u);
    st32((c.r[17].w[0] + 24u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], 0u + 16u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FC5A8u); set32(c.r[5], c.r[5].w[0] - 31032u);  if (depth < kMaxDepth) unit_00BF(c, 29u, depth + 1u); else { c.pc = 0x003FC4B0u; return; } if (c.pc != 0x003FC5A8u) [[unlikely]] return; }
L_003FC5A8:
    set32(c.r[3], ld32((c.r[16].w[0] + 24u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FC5B8u); st32((c.r[16].w[0] + 20u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_00BE(c, 308u, depth + 1u); else { c.pc = 0x003FBA90u; return; } if (c.pc != 0x003FC5B8u) [[unlikely]] return; }
L_003FC5B8:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_003FC5BC:
    set32(c.r[2], 0u + 1u);
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003FC5D0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[6].w[0] + 6960u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FC5E4u); set32(c.r[4], c.r[4].w[0] + 2632u);  if (depth < kMaxDepth) unit_00BE(c, 318u, depth + 1u); else { c.pc = 0x003FBC90u; return; } if (c.pc != 0x003FC5E4u) [[unlikely]] return; }
L_003FC5E4:
    set32(c.r[2], 0u + 1u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003FC5F8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[6].w[0] + 6960u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FC60Cu); set32(c.r[4], c.r[4].w[0] + 2632u);  if (depth < kMaxDepth) unit_00BE(c, 324u, depth + 1u); else { c.pc = 0x003FBD90u; return; } if (c.pc != 0x003FC60Cu) [[unlikely]] return; }
L_003FC60C:
    set32(c.r[2], 0u + 1u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003FC620:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FC638u); c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BF(c, 11u, depth + 1u); else { c.pc = 0x003FC160u; return; } if (c.pc != 0x003FC638u) [[unlikely]] return; }
L_003FC638:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_003FC698; } }
    set32(c.r[16], ld32((c.r[17].w[0] + 6960u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FC64Cu); set32(c.r[4], c.r[16].w[0] + 2632u);  if (depth < kMaxDepth) unit_00BF(c, 5u, depth + 1u); else { c.pc = 0x003FC0A8u; return; } if (c.pc != 0x003FC64Cu) [[unlikely]] return; }
L_003FC64C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FC654u);  if (depth < kMaxDepth) unit_00BF(c, 307u, depth + 1u); else { c.pc = 0x003FE830u; return; } if (c.pc != 0x003FC654u) [[unlikely]] return; }
L_003FC654:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[4], c.r[16].w[0] + 2560u);  if (t) { goto L_003FC678; } }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00109D90u | kUnwind; return; } [[clang::musttail]] return unit_0002(c, 183u, depth); }
L_003FC678:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FC680u);  if (depth < kMaxDepth) unit_0002(c, 197u, depth + 1u); else { c.pc = 0x00109F20u; return; } if (c.pc != 0x003FC680u) [[unlikely]] return; }
L_003FC680:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 32u);  goto L_003FC6A8; }
L_003FC698:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003FC6A8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[6], 0u + 72u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[5], ld32((c.r[4].w[0] + 6960u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[4], c.r[4].w[0] + 3864u);
    set32(c.r[5], c.r[5].w[0] + 2560u);
    c.budget -= 10;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003E0B38u | kUnwind; return; } [[clang::musttail]] return unit_00B8(c, 44u, depth); }
L_003FC6D0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[5], c.r[5].w[0] + 3864u);
    set32(c.r[6], 0u + 72u);
    set32(c.r[4], ld32((c.r[4].w[0] + 6960u)));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[4], c.r[4].w[0] + 2560u);
    c.budget -= 10;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003E0B38u | kUnwind; return; } [[clang::musttail]] return unit_00B8(c, 44u, depth); }
L_003FC6F8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FC71Cu); c.r[18].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BF(c, 11u, depth + 1u); else { c.pc = 0x003FC160u; return; } if (c.pc != 0x003FC71Cu) [[unlikely]] return; }
L_003FC71C:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003FC748; } }
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003FC748:
    set32(c.r[4], ld32((c.r[18].w[0] + 6960u)));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    set32(c.r[4], c.r[4].w[0] + 2632u);
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 8;
    { set32(c.r[29], c.r[29].w[0] + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003FC4B0u | kUnwind; return; } goto L_003FC4B0; }
L_003FC768:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FC784u); c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BF(c, 11u, depth + 1u); else { c.pc = 0x003FC160u; return; } if (c.pc != 0x003FC784u) [[unlikely]] return; }
L_003FC784:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003FC7A8; } }
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003FC7A8:
    set32(c.r[4], ld32((c.r[17].w[0] + 6960u)));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    set32(c.r[4], c.r[4].w[0] + 2632u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003FBA10u | kUnwind; return; } [[clang::musttail]] return unit_00BE(c, 304u, depth); }
L_003FC7C8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[16], ld32((c.r[4].w[0] + 6960u)));
    set32(c.r[4], c.r[16].w[0] + 2632u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FC7ECu); set32(c.r[16], c.r[16].w[0] + 2520u);  if (depth < kMaxDepth) unit_00BF(c, 8u, depth + 1u); else { c.pc = 0x003FC100u; return; } if (c.pc != 0x003FC7ECu) [[unlikely]] return; }
L_003FC7EC:
    set32(c.r[2], 0u + 1u);
    st32((c.r[16].w[0] + 32u), c.r[17].w[0]);
    st32((c.r[16].w[0] + 28u), c.r[2].w[0]);
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003FC810:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[2].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[9].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 40u), c.r[21].d[0]);
    c.r[21].d[0] = c.r[11].d[0] + 0ull;
    st64((c.r[29].w[0] + 64u), c.r[30].d[0]);
    set32(c.r[30], c.r[16].w[0] + c.r[21].w[0]);
    set32(c.r[7], c.r[17].w[0] + c.r[7].w[0]);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[7].d[0] = c.r[7].sd[0] < c.r[30].sd[0] ? 1ull : 0ull;
    st64((c.r[29].w[0] + 32u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[22].d[0]);
    c.r[22].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 56u), c.r[23].d[0]);
    c.r[23].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    c.r[3].d[0] = c.r[16].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    st64((c.r[29].w[0] + 72u), c.r[31].d[0]);
    c.r[18].d[0] = c.r[8].d[0] + 0ull;
    c.budget -= 24;
    { const bool t = c.r[7].d[0] != 0ull; c.r[20].d[0] = c.r[10].d[0] + 0ull;  if (t) { goto L_003FC90C; } }
    c.budget -= 2;
    if (c.r[3].d[0] != 0ull) { set32(c.r[19], c.r[17].w[0] - c.r[16].w[0]);  goto L_003FC8B0; }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FC884u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 40u, depth + 1u); else { c.pc = 0x00124D20u; return; } if (c.pc != 0x003FC884u) [[unlikely]] return; }
L_003FC884:
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    set32(c.r[5], c.r[18].w[0] + c.r[17].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FC894u); set32(c.r[6], c.r[16].w[0] - c.r[17].w[0]);  if (depth < kMaxDepth) unit_0009(c, 40u, depth + 1u); else { c.pc = 0x00124D20u; return; } if (c.pc != 0x003FC894u) [[unlikely]] return; }
L_003FC894:
    set32(c.r[4], c.r[22].w[0] + c.r[16].w[0]);
    set32(c.r[4], c.r[4].w[0] - c.r[17].w[0]);
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FC8A8u); c.r[6].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 40u, depth + 1u); else { c.pc = 0x00124D20u; return; } if (c.pc != 0x003FC8A8u) [[unlikely]] return; }
L_003FC8A8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[30].d[0] + 0ull;  if (t) { goto L_003FC90C; } }
L_003FC8B0:
    c.r[2].d[0] = c.r[21].sd[0] < c.r[19].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_003FC8F0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FC8C4u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 40u, depth + 1u); else { c.pc = 0x00124D20u; return; } if (c.pc != 0x003FC8C4u) [[unlikely]] return; }
L_003FC8C4:
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FC8D4u); set32(c.r[4], c.r[23].w[0] + c.r[16].w[0]);  if (depth < kMaxDepth) unit_0009(c, 40u, depth + 1u); else { c.pc = 0x00124D20u; return; } if (c.pc != 0x003FC8D4u) [[unlikely]] return; }
L_003FC8D4:
    set32(c.r[5], c.r[20].w[0] + c.r[17].w[0]);
    set32(c.r[5], c.r[5].w[0] - c.r[16].w[0]);
    set32(c.r[6], c.r[21].w[0] - c.r[19].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FC8E8u); c.r[4].d[0] = c.r[22].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 40u, depth + 1u); else { c.pc = 0x00124D20u; return; } if (c.pc != 0x003FC8E8u) [[unlikely]] return; }
L_003FC8E8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[30].d[0] + 0ull;  if (t) { goto L_003FC90C; } }
L_003FC8F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FC8F8u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 40u, depth + 1u); else { c.pc = 0x00124D20u; return; } if (c.pc != 0x003FC8F8u) [[unlikely]] return; }
L_003FC8F8:
    c.r[6].d[0] = c.r[21].d[0] + 0ull;
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FC908u); set32(c.r[4], c.r[23].w[0] + c.r[16].w[0]);  if (depth < kMaxDepth) unit_0009(c, 40u, depth + 1u); else { c.pc = 0x00124D20u; return; } if (c.pc != 0x003FC908u) [[unlikely]] return; }
L_003FC908:
    c.r[2].d[0] = c.r[30].d[0] + 0ull;
    c.budget -= 1;
L_003FC90C:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[23].d[0] = ld64((c.r[29].w[0] + 56u));
    c.r[30].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 72u));
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003FC940:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 40u), c.r[21].d[0]);
    c.r[21].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[20].d[0]);
    c.r[20].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[22].d[0]);
    st64((c.r[29].w[0] + 56u), c.r[31].d[0]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FC97Cu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BF(c, 11u, depth + 1u); else { c.pc = 0x003FC160u; return; } if (c.pc != 0x003FC97Cu) [[unlikely]] return; }
L_003FC97C:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[6].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_003FC9B8; } }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 56u));
    c.budget -= 10;
    { set32(c.r[29], c.r[29].w[0] + 64u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003E3D40u | kUnwind; return; } [[clang::musttail]] return unit_00B8(c, 175u, depth); }
L_003FC9B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FC9C0u); set32(c.r[18], ld32((c.r[21].w[0] + 6960u)));  if (depth < kMaxDepth) unit_00B8(c, 176u, depth + 1u); else { c.pc = 0x003E3D48u; return; } if (c.pc != 0x003FC9C0u) [[unlikely]] return; }
L_003FC9C0:
    c.r[22].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[16], c.r[18].w[0] + 2632u);
    set32(c.r[19], c.r[18].w[0] + 2520u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FC9D8u); set32(c.r[17], c.r[18].w[0] + 4u);  if (depth < kMaxDepth) unit_00BE(c, 324u, depth + 1u); else { c.pc = 0x003FBD90u; return; } if (c.pc != 0x003FC9D8u) [[unlikely]] return; }
L_003FC9D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FC9E0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BE(c, 308u, depth + 1u); else { c.pc = 0x003FBA90u; return; } if (c.pc != 0x003FC9E0u) [[unlikely]] return; }
L_003FC9E0:
    set32(c.r[4], c.r[18].w[0] + 2560u);
    set32(c.r[2], 0u + 1u);
    set32(c.r[10], ld32((c.r[21].w[0] + 56u)));
    st32((c.r[19].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[9], 0u + 2u);
    set32(c.r[3], ld32((c.r[17].w[0] + 12u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[8], c.r[3].w[0] + 15u);
    c.r[7].d[0] = c.r[3].sd[0] < 0ll ? 1ull : 0ull;
    set32(c.r[6], c.r[2].w[0] + 15u);
    c.r[5].d[0] = c.r[2].sd[0] < 0ll ? 1ull : 0ull;
    if (c.r[5].d[0] != 0) c.r[2].d[0] = c.r[6].d[0];
    if (c.r[7].d[0] != 0) c.r[3].d[0] = c.r[8].d[0];
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 4));
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 4));
    c.budget -= 17;
    { const bool t = c.r[10].d[0] != c.r[9].d[0]; mmi::mult(c, 0, c.r[2].w[0], c.r[3].w[0]); c.r[6].d[0] = c.lo.d[0];  if (t) { goto L_003FCA38; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FCA2Cu); set32(c.r[5], ld32((c.r[20].w[0] + 32u)));  if (depth < kMaxDepth) unit_0002(c, 186u, depth + 1u); else { c.pc = 0x00109DD8u; return; } if (c.pc != 0x003FCA2Cu) [[unlikely]] return; }
L_003FCA2C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 20u), 0u);  if (t) { goto L_003FCA44; } }
    c.budget -= 1;
L_003FCA38:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FCA40u); set32(c.r[5], ld32((c.r[20].w[0] + 32u)));  if (depth < kMaxDepth) unit_0002(c, 188u, depth + 1u); else { c.pc = 0x00109E20u; return; } if (c.pc != 0x003FCA40u) [[unlikely]] return; }
L_003FCA40:
    st32((c.r[19].w[0] + 20u), 0u);
    c.budget -= 1;
L_003FCA44:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FCA4Cu); set32(c.r[4], c.r[19].w[0] + 112u);  if (depth < kMaxDepth) unit_00BE(c, 318u, depth + 1u); else { c.pc = 0x003FBC90u; return; } if (c.pc != 0x003FCA4Cu) [[unlikely]] return; }
L_003FCA4C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FCA54u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BF(c, 77u, depth + 1u); else { c.pc = 0x003FCC30u; return; } if (c.pc != 0x003FCA54u) [[unlikely]] return; }
L_003FCA54:
    set32(c.r[3], ld32((c.r[19].w[0] + 24u)));
    set32(c.r[2], 0u - 3u);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    if (c.r[3].d[0] == 0) c.r[2].d[0] = c.r[22].d[0];
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 56u));
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003FCA88:
    set32(c.r[3], ld32((c.r[4].w[0] + 6960u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[3].w[0] + 2568u)));  c.pc = t; return; }
L_003FCA98:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 40u), c.r[31].d[0]);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0] + 6960u)));
    set32(c.r[16], c.r[3].w[0] + 2520u);
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    c.r[5].d[0] = ld8((c.r[16].w[0] + 16u));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[16].w[0] + 12u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 4u), c.r[4].w[0]);
    st32((c.r[16].w[0] + 8u), 0u);
    st8((c.r[29].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[2].d[0] = ld8((c.r[16].w[0] + 17u));
    st8((c.r[29].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 18u));
    st8((c.r[29].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[2].d[0] = ld8((c.r[18].w[0]));
    st8((c.r[29].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].d[0] = ld8((c.r[18].w[0] + 1u));
    st8((c.r[29].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[2].d[0] = ld8((c.r[18].w[0] + 2u));
    st8((c.r[29].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 31;
    { const bool t = 0ull == 0ull; c.r[7].d[0] = c.r[17].sd[0] < 4ll ? 1ull : 0ull;  if (t) { goto L_003FCB6C; } }
    c.budget -= 1;
L_003FCB18:
    c.r[3].d[0] = ld8((c.r[2].w[0]));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[5], c.r[6].w[0] + 1u);  if (t) { goto L_003FCB68; } }
    set32(c.r[2], c.r[29].w[0] + c.r[5].w[0]);
    c.r[3].d[0] = ld8((c.r[2].w[0]));
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { c.r[6].d[0] = c.r[5].d[0] + 0ull;  goto L_003FCB6C; }
    set32(c.r[2], c.r[6].w[0] + c.r[29].w[0]);
    set32(c.r[4], 0u + 1u);
    c.r[3].d[0] = ld8((c.r[2].w[0] + 2u));
    c.budget -= 5;
    if (c.r[3].d[0] != c.r[4].d[0]) { c.r[6].d[0] = c.r[5].d[0] + 0ull;  goto L_003FCB6C; }
    c.r[3].d[0] = ld8((c.r[2].w[0] + 3u));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { c.r[6].d[0] = c.r[5].d[0] + 0ull;  goto L_003FCB6C; }
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_003FCB80; } }
    c.budget -= 1;
L_003FCB68:
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 1;
L_003FCB6C:
    set32(c.r[2], 0u + 3u);
    if (c.r[7].d[0] != 0) c.r[2].d[0] = c.r[17].d[0];
    c.r[2].d[0] = c.r[6].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[29].w[0] + c.r[6].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003FCB18u | kUnwind; return; } goto L_003FCB18; } }
L_003FCB80:
    c.r[2].d[0] = c.r[17].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[18].w[0] + c.r[17].w[0]);  if (t) { goto L_003FCBB8; } }
    set32(c.r[2], c.r[29].w[0] + c.r[17].w[0]);
    set32(c.r[4], c.r[17].w[0] + c.r[29].w[0]);
    c.r[3].d[0] = ld8((c.r[2].w[0]));
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    st8((c.r[16].w[0] + 16u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[2].d[0] = ld8((c.r[4].w[0] + 1u));
    st8((c.r[16].w[0] + 17u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].d[0] = ld8((c.r[5].w[0] + 2u));
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 18u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_003FCBF4; } }
    c.budget -= 1;
L_003FCBB8:
    c.r[2].d[0] = ld8((c.r[4].w[0] - 3u));
    st8((c.r[16].w[0] + 16u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].d[0] = ld8((c.r[4].w[0] - 2u));
    st8((c.r[16].w[0] + 17u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[2].d[0] = ld8((c.r[4].w[0] - 1u));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 18u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_003FCBF4; } }
    c.budget -= 1;
L_003FCBD8:
    set32(c.r[4], c.r[4].w[0] + 4u);
    set32(c.r[3], c.r[4].w[0] - c.r[18].w[0]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[17], c.r[17].w[0] - c.r[3].w[0]);
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    c.r[7].d[0] = c.r[17].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 7;
L_003FCBF4:
    c.budget -= 2;
    if (c.r[7].d[0] != 0ull) { c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_003FCC1C; }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FCC0Cu); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_00B8(c, 147u, depth + 1u); else { c.pc = 0x003E3368u; return; } if (c.pc != 0x003FCC0Cu) [[unlikely]] return; }
L_003FCC0C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[4].d[0] != 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 8u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003FCBD8u | kUnwind; return; } goto L_003FCBD8; }
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_003FCC1C:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 40u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003FCC30:
    set32(c.r[3], ld32((c.r[4].w[0] + 6960u)));
    set32(c.r[3], c.r[3].w[0] + 2520u);
    set32(c.r[2], ld32((c.r[3].w[0] + 12u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[3].w[0] + 12u), c.r[2].w[0]);  c.pc = t; return; }
L_003FCC48:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FCC5Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BF(c, 11u, depth + 1u); else { c.pc = 0x003FC160u; return; } if (c.pc != 0x003FCC5Cu) [[unlikely]] return; }
L_003FCC5C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], 0u + 1u);  if (t) { goto L_003FCC70; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_003FCC90; } }
    c.budget -= 1;
L_003FCC70:
    set32(c.r[4], ld32((c.r[16].w[0] + 6960u)));
    set32(c.r[4], c.r[4].w[0] + 2520u);
    set32(c.r[3], ld32((c.r[4].w[0] + 32u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[5].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_003FCC90; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    c.r[2].d[0] = c.r[2].sd[0] < 3ll ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 3;
L_003FCC90:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003FCCA0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 72u);  c.pc = t; return; }
L_003FCCA8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FCCBCu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BD(c, 94u, depth + 1u); else { c.pc = 0x003F4A60u; return; } if (c.pc != 0x003FCCBCu) [[unlikely]] return; }
L_003FCCBC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[5].d[0] | 321ull;  if (t) { goto L_003FCCE0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FCCD4u);  if (depth < kMaxDepth) unit_00BD(c, 82u, depth + 1u); else { c.pc = 0x003F4840u; return; } if (c.pc != 0x003FCCD4u) [[unlikely]] return; }
L_003FCCD4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003FCCE4; } }
    c.budget -= 1;
L_003FCCE0:
    set32(c.r[2], ld32((c.r[16].w[0] + 80u)));
    c.budget -= 1;
L_003FCCE4:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003FCCF8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FCD14u); c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BD(c, 94u, depth + 1u); else { c.pc = 0x003F4A60u; return; } if (c.pc != 0x003FCD14u) [[unlikely]] return; }
L_003FCD14:
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    c.r[4].d[0] = 0ull + 0ull;
    c.r[5].d[0] = c.r[5].d[0] | 322ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[6], 0u + 1u);  if (t) { goto L_003FCD40; } }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003F4840u | kUnwind; return; } [[clang::musttail]] return unit_00BD(c, 82u, depth); }
L_003FCD40:
    set32(c.r[4], ld32((c.r[16].w[0] + 80u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] != 0ull; if (c.r[4].d[0] != 0) c.r[6].d[0] = c.r[3].d[0];  if (t) { goto L_003FCD58; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_003FCD70; } }
L_003FCD58:
    st32((c.r[16].w[0] + 80u), c.r[17].w[0]);
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FCD68u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BF(c, 87u, depth + 1u); else { c.pc = 0x003FCD88u; return; } if (c.pc != 0x003FCD68u) [[unlikely]] return; }
L_003FCD68:
    set32(c.r[3], 0u + 1u);
    st32((c.r[16].w[0] + 68u), c.r[3].w[0]);
    c.budget -= 2;
L_003FCD70:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003FCD88:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[2], 0u + 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[3].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[6].d[0] == c.r[2].d[0]; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_003FCDD0; } }
    c.budget -= 2;
    if (c.r[6].d[0] == 0ull) { set32(c.r[2], ld32((c.r[3].w[0] + 84u)));  goto L_003FCDE8; }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] != c.r[2].d[0]; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_003FCE08; } }
    set32(c.r[3], ld32((c.r[3].w[0] + 72u)));
    set32(c.r[2], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[2].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_003FCE0C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003FCDF8; } }
L_003FCDD0:
    set32(c.r[2], ld32((c.r[3].w[0] + 84u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[6].d[0]; st32((c.r[3].w[0] + 84u), c.r[2].w[0]);  if (t) { goto L_003FCE04; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003FCDF8; } }
L_003FCDE8:
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[3].w[0] + 84u), c.r[2].w[0]);  if (t) { goto L_003FCE04; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003FCDF8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FCE00u);  if (depth < kMaxDepth) unit_00BF(c, 89u, depth + 1u); else { c.pc = 0x003FCE18u; return; } if (c.pc != 0x003FCE00u) [[unlikely]] return; }
L_003FCE00:
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_003FCE04:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_003FCE08:
    c.r[2].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 1;
L_003FCE0C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003FCE18:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[3], c.r[3].w[0] - 3u);
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[3].d[0] == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003FCE68; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FCE4Cu);  if (depth < kMaxDepth) unit_00C0(c, 148u, depth + 1u); else { c.pc = 0x00401938u; return; } if (c.pc != 0x003FCE4Cu) [[unlikely]] return; }
L_003FCE4C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 32u);  goto L_003FCE80; }
L_003FCE68:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003FCE80:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[7].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[6], 0u + 8u);
    c.r[8].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FCE9Cu); set32(c.r[5], 0u + 7u);  if (depth < kMaxDepth) unit_00C0(c, 239u, depth + 1u); else { c.pc = 0x00402810u; return; } if (c.pc != 0x003FCE9Cu) [[unlikely]] return; }
L_003FCE9C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003FCEA8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FCEBCu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BD(c, 94u, depth + 1u); else { c.pc = 0x003F4A60u; return; } if (c.pc != 0x003FCEBCu) [[unlikely]] return; }
L_003FCEBC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[5].d[0] | 323ull;  if (t) { goto L_003FCEE0; } }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[4].d[0] = 0ull + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003F4840u | kUnwind; return; } [[clang::musttail]] return unit_00BD(c, 82u, depth); }
L_003FCEE0:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { set32(c.r[29], c.r[29].w[0] + 16u);  goto L_003FCEF0; }
L_003FCEF0:
    set32(c.r[3], 0u + 3u);
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 76u), c.r[3].w[0]);  c.pc = t; return; }
L_003FCF00:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FCF1Cu); c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BD(c, 94u, depth + 1u); else { c.pc = 0x003F4A60u; return; } if (c.pc != 0x003FCF1Cu) [[unlikely]] return; }
L_003FCF1C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_003FCF40; } }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[5].d[0] = c.r[5].d[0] | 324ull;
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003F4840u | kUnwind; return; } [[clang::musttail]] return unit_00BD(c, 82u, depth); }
L_003FCF40:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FCF4Cu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C0(c, 181u, depth + 1u); else { c.pc = 0x00402070u; return; } if (c.pc != 0x003FCF4Cu) [[unlikely]] return; }
L_003FCF4C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FCF58u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BC(c, 130u, depth + 1u); else { c.pc = 0x003F0F80u; return; } if (c.pc != 0x003FCF58u) [[unlikely]] return; }
L_003FCF58:
    c.r[2].d[0] = 0ull + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003FCF70:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FCF8Cu); c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BD(c, 94u, depth + 1u); else { c.pc = 0x003F4A60u; return; } if (c.pc != 0x003FCF8Cu) [[unlikely]] return; }
L_003FCF8C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    c.r[4].d[0] = 0ull + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[5].d[0] | 325ull;  if (t) { goto L_003FCFB8; } }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003F4840u | kUnwind; return; } [[clang::musttail]] return unit_00BD(c, 82u, depth); }
L_003FCFB8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FCFC4u); set32(c.r[5], 0u + 30u);  if (depth < kMaxDepth) unit_00C0(c, 9u, depth + 1u); else { c.pc = 0x00400090u; return; } if (c.pc != 0x003FCFC4u) [[unlikely]] return; }
L_003FCFC4:
    c.r[2].d[0] = 0ull + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003FCFE0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FCFFCu); c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BD(c, 94u, depth + 1u); else { c.pc = 0x003F4A60u; return; } if (c.pc != 0x003FCFFCu) [[unlikely]] return; }
L_003FCFFC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    c.r[4].d[0] = 0ull + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[5].d[0] | 326ull;  if (t) { goto L_003FD028; } }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003F4840u | kUnwind; return; } [[clang::musttail]] return unit_00BD(c, 82u, depth); }
L_003FD028:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FD034u); set32(c.r[5], 0u + 29u);  if (depth < kMaxDepth) unit_00C0(c, 9u, depth + 1u); else { c.pc = 0x00400090u; return; } if (c.pc != 0x003FD034u) [[unlikely]] return; }
L_003FD034:
    c.r[2].d[0] = 0ull + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003FD050:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  goto L_003FD068; }
L_003FD068:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x5A5A0000u);
    set32(c.r[4], ld32((c.r[2].w[0] - 30716u)));
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[3].d[0] = c.r[3].d[0] | 23130ull;
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_003FD0A0; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[4].d[0] = 0ull + 0ull;
    c.r[5].d[0] = c.r[5].d[0] | 513ull;
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003F4840u | kUnwind; return; } [[clang::musttail]] return unit_00BD(c, 82u, depth); }
L_003FD0A0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003FD0B0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00C0(c, 57u, depth); }
L_003FD0C8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003FD0D0:
    set32(c.r[3], ld32((c.r[4].w[0] + 72u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(4ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_003FD0EC; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 68u)));
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 2;
L_003FD0EC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003FD0F8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00450000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[16], c.r[2].w[0] - 16900u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 8;
L_003FD118:
    set32(c.r[16], c.r[16].w[0] + 4u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_003FD134; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FD12Cu);  if (depth < kMaxDepth) unit_00BF(c, 110u, depth + 1u); else { c.pc = 0x003FD0D0u; return; } if (c.pc != 0x003FD12Cu) [[unlikely]] return; }
L_003FD12C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_003FD14C; }
L_003FD134:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[16].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003FD118u | kUnwind; return; } goto L_003FD118; }
    set32(c.r[2], 0u + 1u);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 2;
L_003FD14C:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003FD160:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FD174u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BD(c, 94u, depth + 1u); else { c.pc = 0x003F4A60u; return; } if (c.pc != 0x003FD174u) [[unlikely]] return; }
L_003FD174:
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[5].d[0] | 312ull;  if (t) { goto L_003FD198; } }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[4].d[0] = 0ull + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003F4840u | kUnwind; return; } [[clang::musttail]] return unit_00BD(c, 82u, depth); }
L_003FD198:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FD1A4u); st32((c.r[16].w[0] + 68u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00BF(c, 120u, depth + 1u); else { c.pc = 0x003FD210u; return; } if (c.pc != 0x003FD1A4u) [[unlikely]] return; }
L_003FD1A4:
    c.r[2].d[0] = 0ull + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003FD1B8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00450000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[16], c.r[2].w[0] - 16900u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    set32(c.r[17], 0u + 7u);
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 8;
L_003FD1D8:
    set32(c.r[16], c.r[16].w[0] + 4u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_003FD1EC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FD1ECu);  if (depth < kMaxDepth) unit_00BF(c, 120u, depth + 1u); else { c.pc = 0x003FD210u; return; } if (c.pc != 0x003FD1ECu) [[unlikely]] return; }
L_003FD1EC:
    set32(c.r[17], c.r[17].w[0] - 1u);
    c.budget -= 3;
    if (c.r[17].sd[0] >= 0) { set32(c.r[2], ld32((c.r[16].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003FD1D8u | kUnwind; return; } goto L_003FD1D8; }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 32u);  goto L_003FE028; }
L_003FD210:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    set32(c.r[16], ld32((c.r[17].w[0] + 72u)));
    set32(c.r[2], c.r[16].w[0] - 1u);
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(4ll) ? 1ull : 0ull;
    c.budget -= 11;
    if (c.r[2].d[0] == 0ull) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_003FD310; }
    set32(c.r[2], ld32((c.r[17].w[0] + 68u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_003FD310; }
    st32((c.r[17].w[0] + 68u), 0u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FD254u);  if (depth < kMaxDepth) unit_00C2(c, 146u, depth + 1u); else { c.pc = 0x004094A0u; return; } if (c.pc != 0x003FD254u) [[unlikely]] return; }
L_003FD254:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], c.r[16].w[0] - 2u);
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(3ll) ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { set32(c.r[16], ld32((c.r[17].w[0] + 72u)));  goto L_003FD274; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FD270u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BF(c, 135u, depth + 1u); else { c.pc = 0x003FD328u; return; } if (c.pc != 0x003FD270u) [[unlikely]] return; }
L_003FD270:
    set32(c.r[16], ld32((c.r[17].w[0] + 72u)));
    c.budget -= 1;
L_003FD274:
    c.r[2].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(7ll) ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { st32((c.r[17].w[0] + 72u), c.r[16].w[0]);  goto L_003FD2E8; }
    set32(c.r[2], c.r[16].w[0] << 2);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] - 30592u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x003FC000u < 16384u) { entry = entries_00BF[(t - 0x003FC000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_003FD298:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FD2A0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BF(c, 138u, depth + 1u); else { c.pc = 0x003FD368u; return; } if (c.pc != 0x003FD2A0u) [[unlikely]] return; }
L_003FD2A0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_003FD2E4; } }
L_003FD2A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FD2B0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BF(c, 139u, depth + 1u); else { c.pc = 0x003FD398u; return; } if (c.pc != 0x003FD2B0u) [[unlikely]] return; }
L_003FD2B0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_003FD2E4; } }
L_003FD2B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FD2C0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BF(c, 163u, depth + 1u); else { c.pc = 0x003FD6F8u; return; } if (c.pc != 0x003FD2C0u) [[unlikely]] return; }
L_003FD2C0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_003FD2E4; } }
L_003FD2C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FD2D0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BF(c, 166u, depth + 1u); else { c.pc = 0x003FD798u; return; } if (c.pc != 0x003FD2D0u) [[unlikely]] return; }
L_003FD2D0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_003FD2E4; } }
L_003FD2D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FD2E0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BF(c, 169u, depth + 1u); else { c.pc = 0x003FD808u; return; } if (c.pc != 0x003FD2E0u) [[unlikely]] return; }
L_003FD2E0:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_003FD2E4:
    st32((c.r[17].w[0] + 72u), c.r[16].w[0]);
    c.budget -= 1;
L_003FD2E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FD2F0u); set32(c.r[16], c.r[17].w[0] + 11104u);  if (depth < kMaxDepth) unit_00C2(c, 146u, depth + 1u); else { c.pc = 0x004094A0u; return; } if (c.pc != 0x003FD2F0u) [[unlikely]] return; }
L_003FD2F0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] - c.r[18].d[0];
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 8;
    { set32(c.r[29], c.r[29].w[0] + 32u);  [[clang::musttail]] return unit_00C0(c, 184u, depth); }
L_003FD310:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003FD328:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FD33Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BF(c, 137u, depth + 1u); else { c.pc = 0x003FD350u; return; } if (c.pc != 0x003FD33Cu) [[unlikely]] return; }
L_003FD33C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  goto L_003FF4A8; }
L_003FD350:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[5], 0u + 2u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00C0(c, 235u, depth); }
L_003FD368:
    set32(c.r[3], ld32((c.r[4].w[0] + 76u)));
    set32(c.r[5], ld32((c.r[4].w[0] + 72u)));
    c.r[2].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[3].sd[0] < 5ll ? 1ull : 0ull;  if (t) { goto L_003FD390; } }
    c.budget -= 2;
    if (c.r[4].d[0] != 0ull) { set32(c.r[5], 0u + 2u);  goto L_003FD390; }
    set32(c.r[2], 0u + 6u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[5], 0u + 2u);  goto L_003FD390; }
L_003FD390:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[5].d[0] + 0ull;  c.pc = t; return; }
L_003FD398:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    set32(c.r[18], ld32((c.r[17].w[0] + 72u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FD3BCu); set32(c.r[16], ld32((c.r[17].w[0] + 76u)));  if (depth < kMaxDepth) unit_00BF(c, 144u, depth + 1u); else { c.pc = 0x003FD458u; return; } if (c.pc != 0x003FD3BCu) [[unlikely]] return; }
L_003FD3BC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = c.r[18].d[0] + 0ull;  goto L_003FD440; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FD3CCu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BF(c, 151u, depth + 1u); else { c.pc = 0x003FD508u; return; } if (c.pc != 0x003FD3CCu) [[unlikely]] return; }
L_003FD3CC:
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[2].d[0]; c.r[2].d[0] = c.r[16].sd[0] < 4ll ? 1ull : 0ull;  if (t) { goto L_003FD438; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 4u);  if (t) { goto L_003FD3F8; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[2].d[0]; c.r[2].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_003FD410; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_003FD444; } }
    c.budget -= 1;
L_003FD3F8:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 6u);  if (t) { goto L_003FD418; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == c.r[2].d[0]; c.r[2].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_003FD418; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_003FD444; } }
L_003FD410:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[18], 0u + 2u);  if (t) { goto L_003FD43C; } }
L_003FD418:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FD420u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BF(c, 170u, depth + 1u); else { c.pc = 0x003FD810u; return; } if (c.pc != 0x003FD420u) [[unlikely]] return; }
L_003FD420:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003FD438; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FD430u); set32(c.r[18], 0u + 4u);  if (depth < kMaxDepth) unit_00BF(c, 294u, depth + 1u); else { c.pc = 0x003FE730u; return; } if (c.pc != 0x003FD430u) [[unlikely]] return; }
L_003FD430:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_003FD440; } }
L_003FD438:
    set32(c.r[18], 0u + 3u);
    c.budget -= 1;
L_003FD43C:
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_003FD440:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_003FD444:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003FD458:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[5], 0u + 5u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FD47Cu); set32(c.r[18], 0u + 1u);  if (depth < kMaxDepth) unit_00C0(c, 20u, depth + 1u); else { c.pc = 0x00400258u; return; } if (c.pc != 0x003FD47Cu) [[unlikely]] return; }
L_003FD47C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], 0u + 6u);  if (t) { goto L_003FD4A8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FD490u);  if (depth < kMaxDepth) unit_00C0(c, 242u, depth + 1u); else { c.pc = 0x00402878u; return; } if (c.pc != 0x003FD490u) [[unlikely]] return; }
L_003FD490:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 6u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FD4A0u); c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C0(c, 244u, depth + 1u); else { c.pc = 0x004028A8u; return; } if (c.pc != 0x003FD4A0u) [[unlikely]] return; }
L_003FD4A0:
    c.r[18].d[0] = c.r[18].d[0] | c.r[2].d[0];
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 2;
L_003FD4A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FD4B0u); set32(c.r[5], 0u + 6u);  if (depth < kMaxDepth) unit_00C0(c, 20u, depth + 1u); else { c.pc = 0x00400258u; return; } if (c.pc != 0x003FD4B0u) [[unlikely]] return; }
L_003FD4B0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 7u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[17], 0u + 1u);  if (t) { goto L_003FD4DC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FD4C8u);  if (depth < kMaxDepth) unit_00C0(c, 242u, depth + 1u); else { c.pc = 0x00402878u; return; } if (c.pc != 0x003FD4C8u) [[unlikely]] return; }
L_003FD4C8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 7u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FD4D8u); c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C0(c, 244u, depth + 1u); else { c.pc = 0x004028A8u; return; } if (c.pc != 0x003FD4D8u) [[unlikely]] return; }
L_003FD4D8:
    c.r[17].d[0] = c.r[17].d[0] | c.r[2].d[0];
    c.budget -= 1;
L_003FD4DC:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003FD4F0; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_003FD4F0; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003FD4F0:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003FD508:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FD51Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BF(c, 154u, depth + 1u); else { c.pc = 0x003FD538u; return; } if (c.pc != 0x003FD51Cu) [[unlikely]] return; }
L_003FD51C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FD524u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BF(c, 159u, depth + 1u); else { c.pc = 0x003FD5E0u; return; } if (c.pc != 0x003FD524u) [[unlikely]] return; }
L_003FD524:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  goto L_003FD668; }
L_003FD538:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u + 1u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[16], c.r[17].w[0] + 2464u);
    set32(c.r[2], ld32((c.r[16].w[0] + 20u)));
    c.budget -= 10;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[6], ld32((c.r[16].w[0] + 24u)));  goto L_003FD588; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FD568u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00BC(c, 256u, depth + 1u); else { c.pc = 0x003F2178u; return; } if (c.pc != 0x003FD568u) [[unlikely]] return; }
L_003FD568:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[6], ld32((c.r[16].w[0] + 24u)));  goto L_003FD588; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FD57Cu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00BC(c, 255u, depth + 1u); else { c.pc = 0x003F2158u; return; } if (c.pc != 0x003FD57Cu) [[unlikely]] return; }
L_003FD57C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[16].w[0] + 20u), 0u);  goto L_003FD584; }
L_003FD584:
    set32(c.r[6], ld32((c.r[16].w[0] + 24u)));
    c.budget -= 1;
L_003FD588:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[6].d[0] != c.r[2].d[0]) { set32(c.r[5], ld32((c.r[16].w[0] + 20u)));  goto L_003FD5C8; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FD5A0u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_00BC(c, 256u, depth + 1u); else { c.pc = 0x003F2178u; return; } if (c.pc != 0x003FD5A0u) [[unlikely]] return; }
L_003FD5A0:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[6], ld32((c.r[16].w[0] + 24u)));  goto L_003FD5C4; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FD5B4u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_00BC(c, 255u, depth + 1u); else { c.pc = 0x003F2158u; return; } if (c.pc != 0x003FD5B4u) [[unlikely]] return; }
L_003FD5B4:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[6], ld32((c.r[16].w[0] + 24u)));  goto L_003FD5C4; }
    st32((c.r[16].w[0] + 24u), 0u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_003FD5C4:
    set32(c.r[5], ld32((c.r[16].w[0] + 20u)));
    c.budget -= 1;
L_003FD5C8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 32u);  goto L_003FF478; }
L_003FD5E0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[16], c.r[17].w[0] + 2464u);
    set32(c.r[2], ld32((c.r[16].w[0] + 24u)));
    c.budget -= 9;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 20u)));  goto L_003FD624; }
    set32(c.r[3], ld32((c.r[16].w[0] + 60u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[2], ld32((c.r[16].w[0] + 20u)));  goto L_003FD624; }
    set32(c.r[5], 0u + 15u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FD620u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_00C0(c, 9u, depth + 1u); else { c.pc = 0x00400090u; return; } if (c.pc != 0x003FD620u) [[unlikely]] return; }
L_003FD620:
    set32(c.r[2], ld32((c.r[16].w[0] + 20u)));
    c.budget -= 1;
L_003FD624:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_003FD658; }
    set32(c.r[3], ld32((c.r[16].w[0] + 60u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[16].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_003FD658; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    set32(c.r[5], 0u + 15u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[6], 0u + 2u);
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 32u);  [[clang::musttail]] return unit_00C0(c, 9u, depth); }
L_003FD658:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003FD668:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[8], 0u + 1u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    set32(c.r[5], c.r[16].w[0] + 2464u);
    set32(c.r[6], 0u + 2u);
    set32(c.r[7], 0u + 2u);
    set32(c.r[2], ld32((c.r[5].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[5].w[0] + 20u)));
    c.r[2].d[0] = c.r[2].d[0] ^ c.r[8].d[0];
    c.r[5].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ c.r[8].d[0];
    c.r[2].d[0] = c.r[5].d[0] | 2ull;
    if (c.r[3].d[0] == 0) c.r[5].d[0] = c.r[2].d[0];
    c.budget -= 17;
    { const bool t = c.r[5].d[0] == c.r[6].d[0]; c.r[2].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(3ll) ? 1ull : 0ull;  if (t) { goto L_003FD6DC; } }
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], 0u + 3u);  goto L_003FD6C8; }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[8].d[0]; set32(c.r[7], 0u + 1u);  if (t) { goto L_003FD6DC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[7], 0u + 3u);  if (t) { goto L_003FD6DC; } }
    c.budget -= 1;
L_003FD6C8:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != c.r[2].d[0]; set32(c.r[7], 0u + 3u);  if (t) { goto L_003FD6DC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FD6D8u); set32(c.r[5], 0u + 25u);  if (depth < kMaxDepth) unit_00C0(c, 20u, depth + 1u); else { c.pc = 0x00400258u; return; } if (c.pc != 0x003FD6D8u) [[unlikely]] return; }
L_003FD6D8:
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_003FD6DC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[6].d[0] = c.r[7].d[0] + 0ull;
    set32(c.r[5], 0u + 25u);
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00C0(c, 9u, depth); }
L_003FD6F8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], 0u + 3u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[17], ld32((c.r[16].w[0] + 72u)));  if (t) { goto L_003FD760; } }
    c.r[2].d[0] = c.r[3].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 4u);  if (t) { goto L_003FD740; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003FD758; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_003FD788; } }
    c.budget -= 1;
L_003FD740:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 6u);  if (t) { goto L_003FD768; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003FD768; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_003FD788; } }
L_003FD758:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], 0u + 2u);  if (t) { goto L_003FD780; } }
L_003FD760:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], 0u + 3u);  if (t) { goto L_003FD780; } }
L_003FD768:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FD770u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BF(c, 170u, depth + 1u); else { c.pc = 0x003FD810u; return; } if (c.pc != 0x003FD770u) [[unlikely]] return; }
L_003FD770:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003FD780; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FD780u); set32(c.r[17], 0u + 4u);  if (depth < kMaxDepth) unit_00BF(c, 294u, depth + 1u); else { c.pc = 0x003FE730u; return; } if (c.pc != 0x003FD780u) [[unlikely]] return; }
L_003FD780:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 2;
L_003FD788:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003FD798:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FD7ACu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BF(c, 217u, depth + 1u); else { c.pc = 0x003FDD60u; return; } if (c.pc != 0x003FD7ACu) [[unlikely]] return; }
L_003FD7AC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003FD7C4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FD7BCu);  if (depth < kMaxDepth) unit_00BF(c, 172u, depth + 1u); else { c.pc = 0x003FD878u; return; } if (c.pc != 0x003FD7BCu) [[unlikely]] return; }
L_003FD7BC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], ld32((c.r[16].w[0] + 76u)));  goto L_003FD7D0; }
L_003FD7C4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[16].w[0] + 72u)));  if (t) { goto L_003FD7F8; } }
    c.budget -= 1;
L_003FD7D0:
    set32(c.r[4], ld32((c.r[16].w[0] + 72u)));
    c.r[2].d[0] = c.r[5].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[3].d[0] = c.r[5].sd[0] < 5ll ? 1ull : 0ull;  if (t) { goto L_003FD7F4; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull; c.r[2].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003FD7F8; } }
    set32(c.r[3], 0u + 6u);
    c.r[2].d[0] = c.r[5].d[0] ^ c.r[3].d[0];
    if (c.r[2].d[0] == 0) c.r[4].d[0] = c.r[3].d[0];
    c.budget -= 3;
L_003FD7F4:
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 1;
L_003FD7F8:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003FD808:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[4].w[0] + 72u)));  c.pc = t; return; }
L_003FD810:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[6], c.r[5].w[0] + 2464u);
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], ld32((c.r[6].w[0] + 56u)));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[5], c.r[5].w[0] + 3264u);  if (t) { goto L_003FD868; } }
    set32(c.r[3], ld32((c.r[6].w[0] + 20u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_003FD86C; }
    set32(c.r[3], ld32((c.r[5].w[0] + 620u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_003FD86C; }
    set32(c.r[3], ld32((c.r[5].w[0] + 648u)));
    set32(c.r[5], ld32((c.r[6].w[0] + 180u)));
    c.r[3].d[0] = c.r[3].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_003FD86C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FD864u);  if (depth < kMaxDepth) unit_00BF(c, 225u, depth + 1u); else { c.pc = 0x003FDE40u; return; } if (c.pc != 0x003FD864u) [[unlikely]] return; }
L_003FD864:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 1;
L_003FD868:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_003FD86C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003FD878:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[17].d[0]);
    set32(c.r[17], c.r[16].w[0] + 2380u);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 40u), c.r[31].d[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FD89Cu); c.r[4].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BD(c, 102u, depth + 1u); else { c.pc = 0x003F4AF8u; return; } if (c.pc != 0x003FD89Cu) [[unlikely]] return; }
L_003FD89C:
    set32(c.r[2], ld32((c.r[17].w[0] + 24u)));
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003FD8E0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FD8B4u);  if (depth < kMaxDepth) unit_00BF(c, 179u, depth + 1u); else { c.pc = 0x003FD928u; return; } if (c.pc != 0x003FD8B4u) [[unlikely]] return; }
L_003FD8B4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], 0u + 1u);  if (t) { goto L_003FD900; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 28u)));
    set32(c.r[2], 0u + 1u);
    st32((c.r[17].w[0] + 24u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FD8D8u); st32((c.r[17].w[0] + 28u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_00BF(c, 87u, depth + 1u); else { c.pc = 0x003FCD88u; return; } if (c.pc != 0x003FD8D8u) [[unlikely]] return; }
L_003FD8D8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_003FD900; } }
L_003FD8E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FD8E8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BF(c, 194u, depth + 1u); else { c.pc = 0x003FDAA8u; return; } if (c.pc != 0x003FD8E8u) [[unlikely]] return; }
L_003FD8E8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_003FD900; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FD8FCu); st32((c.r[17].w[0] + 24u), 0u);  if (depth < kMaxDepth) unit_00BF(c, 87u, depth + 1u); else { c.pc = 0x003FCD88u; return; } if (c.pc != 0x003FD8FCu) [[unlikely]] return; }
L_003FD8FC:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_003FD900:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FD908u); c.r[4].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BD(c, 103u, depth + 1u); else { c.pc = 0x003F4B10u; return; } if (c.pc != 0x003FD908u) [[unlikely]] return; }
L_003FD908:
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 40u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003FD928:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[5], 0u + 67u);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FD948u); set32(c.r[17], c.r[16].w[0] + 2380u);  if (depth < kMaxDepth) unit_00C0(c, 20u, depth + 1u); else { c.pc = 0x00400258u; return; } if (c.pc != 0x003FD948u) [[unlikely]] return; }
L_003FD948:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003FDA90; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FD958u); set32(c.r[5], 0u + 15u);  if (depth < kMaxDepth) unit_00C0(c, 20u, depth + 1u); else { c.pc = 0x00400258u; return; } if (c.pc != 0x003FD958u) [[unlikely]] return; }
L_003FD958:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_003FDA94; }
    set32(c.r[3], ld32((c.r[16].w[0] + 80u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003FDA90; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 72u)));
    set32(c.r[3], 0u + 4u);
    c.budget -= 4;
    if (c.r[4].d[0] != c.r[3].d[0]) { c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_003FDA94; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FD984u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BF(c, 204u, depth + 1u); else { c.pc = 0x003FDB88u; return; } if (c.pc != 0x003FD984u) [[unlikely]] return; }
L_003FD984:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_003FDA90; }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FD998u); set32(c.r[5], 0u + 5u);  if (depth < kMaxDepth) unit_00C0(c, 20u, depth + 1u); else { c.pc = 0x00400258u; return; } if (c.pc != 0x003FD998u) [[unlikely]] return; }
L_003FD998:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003FD9B4; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 32u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003FDA90; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_003FD9B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FD9BCu); set32(c.r[5], 0u + 6u);  if (depth < kMaxDepth) unit_00C0(c, 20u, depth + 1u); else { c.pc = 0x00400258u; return; } if (c.pc != 0x003FD9BCu) [[unlikely]] return; }
L_003FD9BC:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003FD9DC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FD9D0u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_00BC(c, 289u, depth + 1u); else { c.pc = 0x003F2950u; return; } if (c.pc != 0x003FD9D0u) [[unlikely]] return; }
L_003FD9D0:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] > 0; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003FDA90; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_003FD9DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FD9E4u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00C0(c, 245u, depth + 1u); else { c.pc = 0x004028C0u; return; } if (c.pc != 0x003FD9E4u) [[unlikely]] return; }
L_003FD9E4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003FD9FC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FD9F4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00BC(c, 289u, depth + 1u); else { c.pc = 0x003F2950u; return; } if (c.pc != 0x003FD9F4u) [[unlikely]] return; }
L_003FD9F4:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] > 0; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003FDA90; } }
L_003FD9FC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FDA08u); set32(c.r[5], 0u + 5u);  if (depth < kMaxDepth) unit_00C0(c, 20u, depth + 1u); else { c.pc = 0x00400258u; return; } if (c.pc != 0x003FDA08u) [[unlikely]] return; }
L_003FDA08:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { c.r[5].d[0] = c.r[29].d[0] + 0ull;  goto L_003FDA28; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FDA1Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BF(c, 212u, depth + 1u); else { c.pc = 0x003FDC28u; return; } if (c.pc != 0x003FDA1Cu) [[unlikely]] return; }
L_003FDA1C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003FDA90; } }
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 1;
L_003FDA28:
    set32(c.r[6], c.r[29].w[0] + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FDA34u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C0(c, 92u, depth + 1u); else { c.pc = 0x00400F80u; return; } if (c.pc != 0x003FDA34u) [[unlikely]] return; }
L_003FDA34:
    set32(c.r[3], c.r[16].w[0] + 3264u);
    set32(c.r[17], ld32((c.r[3].w[0] + 580u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 68u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FDA4Cu); set32(c.r[16], ld32((c.r[3].w[0] + 576u)));  if (depth < kMaxDepth) unit_00C0(c, 20u, depth + 1u); else { c.pc = 0x00400258u; return; } if (c.pc != 0x003FDA4Cu) [[unlikely]] return; }
L_003FDA4C:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].sd[0] = static_cast<std::int32_t>(0x000F0000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FDA60u); c.r[6].d[0] = c.r[6].d[0] | 16960ull;  if (depth < kMaxDepth) unit_00B9(c, 198u, depth + 1u); else { c.pc = 0x003E66B0u; return; } if (c.pc != 0x003FDA60u) [[unlikely]] return; }
L_003FDA60:
    set32(c.r[4], ld32((c.r[29].w[0])));
    c.budget -= 3;
    { const bool t = c.r[4].sd[0] <= 0; set32(c.r[16], c.r[16].w[0] - c.r[2].w[0]);  if (t) { goto L_003FDA74; } }
    c.budget -= 2;
    { const bool t = c.r[16].sd[0] > 0; set32(c.r[5], ld32((c.r[29].w[0] + 4u)));  if (t) { goto L_003FDA80; } }
L_003FDA74:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003FDA90; } }
    c.budget -= 1;
L_003FDA80:
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FDA8Cu); c.r[7].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C0(c, 116u, depth + 1u); else { c.pc = 0x004013A8u; return; } if (c.pc != 0x003FDA8Cu) [[unlikely]] return; }
L_003FDA8C:
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 1;
L_003FDA90:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_003FDA94:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003FDAA8:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 24u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FDAC0u); c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BF(c, 204u, depth + 1u); else { c.pc = 0x003FDB88u; return; } if (c.pc != 0x003FDAC0u) [[unlikely]] return; }
L_003FDAC0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], 0u + 5u);  if (t) { goto L_003FDB18; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FDAD4u);  if (depth < kMaxDepth) unit_00C0(c, 20u, depth + 1u); else { c.pc = 0x00400258u; return; } if (c.pc != 0x003FDAD4u) [[unlikely]] return; }
L_003FDAD4:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003FDAF0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FDAE8u);  if (depth < kMaxDepth) unit_00BF(c, 212u, depth + 1u); else { c.pc = 0x003FDC28u; return; } if (c.pc != 0x003FDAE8u) [[unlikely]] return; }
L_003FDAE8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_003FDB74; } }
L_003FDAF0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FDAFCu); set32(c.r[5], 0u + 6u);  if (depth < kMaxDepth) unit_00C0(c, 20u, depth + 1u); else { c.pc = 0x00400258u; return; } if (c.pc != 0x003FDAFCu) [[unlikely]] return; }
L_003FDAFC:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003FDB20; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FDB10u);  if (depth < kMaxDepth) unit_00BF(c, 215u, depth + 1u); else { c.pc = 0x003FDCE0u; return; } if (c.pc != 0x003FDB10u) [[unlikely]] return; }
L_003FDB10:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[5].d[0] = c.r[29].d[0] + 0ull;  goto L_003FDB24; }
L_003FDB18:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_003FDB74; } }
L_003FDB20:
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 1;
L_003FDB24:
    set32(c.r[6], c.r[29].w[0] + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FDB30u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C0(c, 92u, depth + 1u); else { c.pc = 0x00400F80u; return; } if (c.pc != 0x003FDB30u) [[unlikely]] return; }
L_003FDB30:
    set32(c.r[3], c.r[17].w[0] + 3264u);
    set32(c.r[16], ld32((c.r[3].w[0] + 580u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 69u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FDB48u); set32(c.r[17], ld32((c.r[3].w[0] + 576u)));  if (depth < kMaxDepth) unit_00C0(c, 20u, depth + 1u); else { c.pc = 0x00400258u; return; } if (c.pc != 0x003FDB48u) [[unlikely]] return; }
L_003FDB48:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].sd[0] = static_cast<std::int32_t>(0x000F0000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FDB5Cu); c.r[6].d[0] = c.r[6].d[0] | 16960ull;  if (depth < kMaxDepth) unit_00B9(c, 198u, depth + 1u); else { c.pc = 0x003E66B0u; return; } if (c.pc != 0x003FDB5Cu) [[unlikely]] return; }
L_003FDB5C:
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[29].w[0])));
    set32(c.r[6], c.r[17].w[0] - c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FDB70u); set32(c.r[5], ld32((c.r[29].w[0] + 4u)));  if (depth < kMaxDepth) unit_00C0(c, 116u, depth + 1u); else { c.pc = 0x004013A8u; return; } if (c.pc != 0x003FDB70u) [[unlikely]] return; }
L_003FDB70:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 1;
L_003FDB74:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003FDB88:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[5], 0u + 5u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FDBA4u); c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C0(c, 20u, depth + 1u); else { c.pc = 0x00400258u; return; } if (c.pc != 0x003FDBA4u) [[unlikely]] return; }
L_003FDBA4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003FDBBC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FDBB4u); set32(c.r[5], 0u + 6u);  if (depth < kMaxDepth) unit_00C0(c, 244u, depth + 1u); else { c.pc = 0x004028A8u; return; } if (c.pc != 0x003FDBB4u) [[unlikely]] return; }
L_003FDBB4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_003FDC10; } }
L_003FDBBC:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FDBC8u); set32(c.r[5], 0u + 6u);  if (depth < kMaxDepth) unit_00C0(c, 20u, depth + 1u); else { c.pc = 0x00400258u; return; } if (c.pc != 0x003FDBC8u) [[unlikely]] return; }
L_003FDBC8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_003FDBF0; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FDBDCu); set32(c.r[5], 0u + 7u);  if (depth < kMaxDepth) unit_00C0(c, 244u, depth + 1u); else { c.pc = 0x004028A8u; return; } if (c.pc != 0x003FDBDCu) [[unlikely]] return; }
L_003FDBDC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_003FDBF0; } }
L_003FDBE4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_003FDC10; } }
    c.budget -= 1;
L_003FDBF0:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_003FDBF4:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FDC00u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BC(c, 288u, depth + 1u); else { c.pc = 0x003F2930u; return; } if (c.pc != 0x003FDC00u) [[unlikely]] return; }
L_003FDC00:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[3].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(8ll) ? 1ull : 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003FDBE4u | kUnwind; return; } goto L_003FDBE4; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull; c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003FDBF4u | kUnwind; return; } goto L_003FDBF4; } }
L_003FDC10:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003FDC28:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 6968u)));
    set32(c.r[16], c.r[2].w[0] << 3);
    set32(c.r[16], c.r[16].w[0] - c.r[2].w[0]);
    set32(c.r[16], c.r[16].w[0] << 2);
    set32(c.r[16], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[16], c.r[16].w[0] << 2);
    set32(c.r[16], c.r[17].w[0] + c.r[16].w[0]);
    set32(c.r[16], c.r[16].w[0] + 4432u);
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0] + 36u)));
    c.budget -= 19;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003FDC74u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003FDC74u) [[unlikely]] return; }
L_003FDC74:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[16].w[0] + 12u)));
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], 0u + 100u);
    set32(c.r[5], 0u + 70u);
    set32(c.r[2], c.r[6].w[0] << 2);
    c.budget -= 8;
    if (c.r[3].d[0] == 0ull) { breakpoint(c, 0x003FDC90u);  goto L_003FDC94; }
L_003FDC94:
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    set32(c.r[2], c.r[2].w[0] << 4);
    mmi::div(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.r[2].d[0] = c.r[18].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], 0u + 1u);  goto L_003FDCC8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FDCB8u);  if (depth < kMaxDepth) unit_00C0(c, 20u, depth + 1u); else { c.pc = 0x00400258u; return; } if (c.pc != 0x003FDCB8u) [[unlikely]] return; }
L_003FDCB8:
    c.r[3].d[0] = c.r[18].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003FDCC8; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_003FDCC8:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003FDCE0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 7036u)));
    set32(c.r[2], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[16], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[16], c.r[16].w[0] + 4432u);
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0] + 36u)));
    c.budget -= 17;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003FDD24u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003FDD24u) [[unlikely]] return; }
L_003FDD24:
    set32(c.r[5], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[4], 0u + 100u);
    set32(c.r[3], c.r[5].w[0] << 2);
    c.budget -= 5;
    if (c.r[4].d[0] == 0ull) { breakpoint(c, 0x003FDD34u);  goto L_003FDD38; }
L_003FDD38:
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[3], c.r[3].w[0] << 4);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    mmi::div(c, 0, c.r[3].w[0], c.r[4].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    c.r[2].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003FDD60:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FDD74u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BF(c, 222u, depth + 1u); else { c.pc = 0x003FDDD0u; return; } if (c.pc != 0x003FDD74u) [[unlikely]] return; }
L_003FDD74:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003FDDAC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FDD84u);  if (depth < kMaxDepth) unit_00BF(c, 225u, depth + 1u); else { c.pc = 0x003FDE40u; return; } if (c.pc != 0x003FDD84u) [[unlikely]] return; }
L_003FDD84:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003FDDAC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FDD94u);  if (depth < kMaxDepth) unit_00BF(c, 229u, depth + 1u); else { c.pc = 0x003FDF08u; return; } if (c.pc != 0x003FDD94u) [[unlikely]] return; }
L_003FDD94:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003FDDAC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FDDA4u);  if (depth < kMaxDepth) unit_00BF(c, 231u, depth + 1u); else { c.pc = 0x003FDF60u; return; } if (c.pc != 0x003FDDA4u) [[unlikely]] return; }
L_003FDDA4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_003FDDC0; }
L_003FDDAC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  goto L_003FDFF0; }
L_003FDDC0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003FDDD0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[3], c.r[4].w[0] + 2464u);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    set32(c.r[5], 0u - 4u);
    st64((c.r[29].w[0] + 24u), c.r[17].d[0]);
    c.r[2].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[16], ld32((c.r[3].w[0] + 80u)));
    c.budget -= 10;
    { const bool t = c.r[16].d[0] == c.r[5].d[0]; set32(c.r[17], ld32((c.r[3].w[0] + 84u)));  if (t) { goto L_003FDE28; } }
    set32(c.r[6], c.r[29].w[0] + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FDE04u); c.r[5].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C0(c, 92u, depth + 1u); else { c.pc = 0x00400F80u; return; } if (c.pc != 0x003FDE04u) [[unlikely]] return; }
L_003FDE04:
    c.r[2].d[0] = 0ull + 0ull;
    set32(c.r[3], ld32((c.r[29].w[0])));
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[3].sd[0] < 0; c.r[4].d[0] = c.r[3].d[0] + 0ull;  if (t) { goto L_003FDE28; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FDE24u); set32(c.r[5], ld32((c.r[29].w[0] + 4u)));  if (depth < kMaxDepth) unit_00B6(c, 89u, depth + 1u); else { c.pc = 0x003DAE00u; return; } if (c.pc != 0x003FDE24u) [[unlikely]] return; }
L_003FDE24:
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 1;
L_003FDE28:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003FDE40:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    set32(c.r[3], c.r[16].w[0] + 2464u);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 24u)));
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], 0u + 6u);  if (t) { goto L_003FDE78; } }
    set32(c.r[3], ld32((c.r[3].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_003FDEF0; } }
    set32(c.r[5], 0u + 6u);
    c.budget -= 1;
L_003FDE78:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FDE80u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C0(c, 244u, depth + 1u); else { c.pc = 0x004028A8u; return; } if (c.pc != 0x003FDE80u) [[unlikely]] return; }
L_003FDE80:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 7u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FDE90u); c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C0(c, 244u, depth + 1u); else { c.pc = 0x004028A8u; return; } if (c.pc != 0x003FDE90u) [[unlikely]] return; }
L_003FDE90:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 25u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FDEA0u); c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C0(c, 20u, depth + 1u); else { c.pc = 0x00400258u; return; } if (c.pc != 0x003FDEA0u) [[unlikely]] return; }
L_003FDEA0:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_003FDED8; } }
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] & c.r[18].d[0];  goto L_003FDEEC; }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 3u);  if (t) { goto L_003FDEE0; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[2].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003FDEE8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_003FDEF4; } }
    c.budget -= 1;
L_003FDED8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003FDEEC; } }
L_003FDEE0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_003FDEEC; } }
L_003FDEE8:
    c.r[4].d[0] = c.r[17].d[0] | c.r[18].d[0];
    c.budget -= 1;
L_003FDEEC:
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 1;
L_003FDEF0:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_003FDEF4:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003FDF08:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], 0u + 4u);
    set32(c.r[2], ld32((c.r[5].w[0] + 72u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; set32(c.r[6], c.r[5].w[0] + 2380u);  if (t) { goto L_003FDF40; } }
    set32(c.r[2], ld32((c.r[5].w[0] + 80u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003FDF54; } }
    set32(c.r[2], ld32((c.r[6].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_003FDF48; } }
L_003FDF40:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003FDF54; } }
L_003FDF48:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FDF50u);  if (depth < kMaxDepth) unit_00C0(c, 72u, depth + 1u); else { c.pc = 0x00400C30u; return; } if (c.pc != 0x003FDF50u) [[unlikely]] return; }
L_003FDF50:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 1;
L_003FDF54:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003FDF60:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u + 4u);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 72u)));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; set32(c.r[5], c.r[16].w[0] + 2380u);  if (t) { goto L_003FDFAC; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 80u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003FDFE0; } }
    set32(c.r[2], ld32((c.r[5].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; c.r[5].d[0] = c.r[29].d[0] + 0ull;  if (t) { goto L_003FDFAC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FDFA4u); set32(c.r[6], c.r[29].w[0] + 4u);  if (depth < kMaxDepth) unit_00C0(c, 86u, depth + 1u); else { c.pc = 0x00400E40u; return; } if (c.pc != 0x003FDFA4u) [[unlikely]] return; }
L_003FDFA4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], ld32((c.r[29].w[0])));  if (t) { goto L_003FDFB8; } }
L_003FDFAC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003FDFE0; } }
    c.budget -= 1;
L_003FDFB8:
    c.budget -= 2;
    { const bool t = c.r[3].sd[0] < 0; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003FDFE0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FDFC8u); set32(c.r[5], 0u + 54u);  if (depth < kMaxDepth) unit_00C0(c, 20u, depth + 1u); else { c.pc = 0x00400258u; return; } if (c.pc != 0x003FDFC8u) [[unlikely]] return; }
L_003FDFC8:
    set32(c.r[5], 0u + 1000u);
    set32(c.r[6], ld32((c.r[29].w[0])));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FDFDCu); set32(c.r[7], ld32((c.r[29].w[0] + 4u)));  if (depth < kMaxDepth) unit_00C0(c, 116u, depth + 1u); else { c.pc = 0x004013A8u; return; } if (c.pc != 0x003FDFDCu) [[unlikely]] return; }
L_003FDFDC:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 1;
L_003FDFE0:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003FDFF0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FE004u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BF(c, 308u, depth + 1u); else { c.pc = 0x003FE840u; return; } if (c.pc != 0x003FE004u) [[unlikely]] return; }
L_003FE004:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_003FE018; }
    set32(c.r[3], 0u + 6u);
    st32((c.r[16].w[0] + 76u), c.r[3].w[0]);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
L_003FE018:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003FE028:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[16].d[0]);
    st64((c.r[29].w[0] + 40u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FE03Cu); set32(c.r[4], c.r[29].w[0] + 16u);  if (depth < kMaxDepth) unit_00BD(c, 102u, depth + 1u); else { c.pc = 0x003F4AF8u; return; } if (c.pc != 0x003FE03Cu) [[unlikely]] return; }
L_003FE03C:
    st32((c.r[29].w[0]), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00450000u);
    st32((c.r[29].w[0] + 4u), 0u);
    set32(c.r[6], c.r[2].w[0] - 16900u);
    st32((c.r[29].w[0] + 8u), 0u);
    set32(c.r[7], 0u + 6u);
    set32(c.r[5], 0u + 7u);
    set32(c.r[2], ld32((c.r[6].w[0])));
    c.budget -= 9;
L_003FE060:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[6], c.r[6].w[0] + 4u);  if (t) { goto L_003FE09C; } }
    set32(c.r[2], ld32((c.r[2].w[0] + 72u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_003FE088; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[7].d[0]; set32(c.r[16], 0u + 2u);  if (t) { goto L_003FE088; } }
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; set32(c.r[16], 0u + 1u);  if (t) { goto L_003FE088; } }
    set32(c.r[16], 0u + 2u);
    c.budget -= 1;
L_003FE088:
    set32(c.r[2], c.r[16].w[0] << 2);
    set32(c.r[4], c.r[29].w[0] + c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[4].w[0]), c.r[3].w[0]);
    c.budget -= 5;
L_003FE09C:
    set32(c.r[5], c.r[5].w[0] - 1u);
    c.budget -= 3;
    if (c.r[5].sd[0] >= 0) { set32(c.r[2], ld32((c.r[6].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003FE060u | kUnwind; return; } goto L_003FE060; }
    set32(c.r[2], ld32((c.r[29].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], 0u + 1u);  if (t) { goto L_003FE0C0; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 8u)));
    set32(c.r[16], 0u + 2u);
    if (c.r[2].d[0] == 0) c.r[16].d[0] = 0ull;
    c.budget -= 3;
L_003FE0C0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00450000u);
    set32(c.r[4], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FE0D0u); st32((c.r[2].w[0] - 17008u), c.r[16].w[0]);  if (depth < kMaxDepth) unit_00BD(c, 103u, depth + 1u); else { c.pc = 0x003F4B10u; return; } if (c.pc != 0x003FE0D0u) [[unlikely]] return; }
L_003FE0D0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003FE0E8:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00450000u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FE114u); set32(c.r[19], c.r[2].w[0] - 16900u);  if (depth < kMaxDepth) unit_00BF(c, 246u, depth + 1u); else { c.pc = 0x003FE180u; return; } if (c.pc != 0x003FE114u) [[unlikely]] return; }
L_003FE114:
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_003FE130; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FE128u); c.r[5].d[0] = c.r[5].d[0] | 515ull;  if (depth < kMaxDepth) unit_00BD(c, 82u, depth + 1u); else { c.pc = 0x003F4840u; return; } if (c.pc != 0x003FE128u) [[unlikely]] return; }
L_003FE128:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003FE160; } }
L_003FE130:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FE138u);  if (depth < kMaxDepth) unit_00BF(c, 247u, depth + 1u); else { c.pc = 0x003FE1A0u; return; } if (c.pc != 0x003FE138u) [[unlikely]] return; }
L_003FE138:
    set32(c.r[3], 0u - 1u);
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == c.r[3].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003FE160; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FE154u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BF(c, 249u, depth + 1u); else { c.pc = 0x003FE1E0u; return; } if (c.pc != 0x003FE154u) [[unlikely]] return; }
L_003FE154:
    set32(c.r[3], c.r[16].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[19].w[0]);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_003FE160:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003FE180:
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_003FE198; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 64u)));
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(11168ll) ? 1ull : 0ull;
    if (c.r[3].d[0] == 0) c.r[2].d[0] = 0ull;
    c.budget -= 3;
L_003FE198:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003FE1A0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00450000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], c.r[2].w[0] - 16900u);
    set32(c.r[3], ld32((c.r[6].w[0])));
    c.budget -= 4;
L_003FE1B0:
    set32(c.r[6], c.r[6].w[0] + 4u);
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull; c.r[4].d[0] = c.r[5].sd[0] < 8ll ? 1ull : 0ull;  if (t) { goto L_003FE1D8; } }
    c.budget -= 4;
    if (c.r[4].d[0] != 0ull) { set32(c.r[3], ld32((c.r[6].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003FE1B0u | kUnwind; return; } goto L_003FE1B0; }
    set32(c.r[2], 0u - 1u);
    c.budget -= 1;
L_003FE1D8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003FE1E0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[20].d[0]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[5].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 40u), c.r[31].d[0]);
    set32(c.r[16], ld32((c.r[18].w[0] + 60u)));
    set32(c.r[6], ld32((c.r[18].w[0] + 64u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[16], c.r[16].w[0] + 31u);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FE220u); set32(c.r[6], c.r[6].w[0] >> 2);  if (depth < kMaxDepth) unit_00B8(c, 53u, depth + 1u); else { c.pc = 0x003E0EE8u; return; } if (c.pc != 0x003FE220u) [[unlikely]] return; }
L_003FE220:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[3], 0u - 32u);
    c.r[4].d[0] = c.r[18].d[0] & 7ull;
    set32(c.r[2], c.r[2].w[0] + 31u);
    c.r[17].d[0] = c.r[16].d[0] & c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[18].w[0] + 4u), c.r[2].w[0]);
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    st32((c.r[17].w[0] + 76u), 0u);
    c.budget -= 12;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[17].w[0] + 72u), 0u);  if (t) { goto L_003FE2B0; } }
    set32(c.r[4], c.r[18].w[0] + 64u);
    c.budget -= 1;
L_003FE254:
    ldl(c.r[5], (c.r[2].w[0] + 7u));
    ldr(c.r[5], (c.r[2].w[0]));
    ldl(c.r[6], (c.r[2].w[0] + 15u));
    ldr(c.r[6], (c.r[2].w[0] + 8u));
    ldl(c.r[7], (c.r[2].w[0] + 23u));
    ldr(c.r[7], (c.r[2].w[0] + 16u));
    ldl(c.r[8], (c.r[2].w[0] + 31u));
    ldr(c.r[8], (c.r[2].w[0] + 24u));
    sdl(c.r[5], (c.r[3].w[0] + 7u));
    sdr(c.r[5], (c.r[3].w[0]));
    sdl(c.r[6], (c.r[3].w[0] + 15u));
    sdr(c.r[6], (c.r[3].w[0] + 8u));
    sdl(c.r[7], (c.r[3].w[0] + 23u));
    sdr(c.r[7], (c.r[3].w[0] + 16u));
    sdl(c.r[8], (c.r[3].w[0] + 31u));
    sdr(c.r[8], (c.r[3].w[0] + 24u));
    set32(c.r[2], c.r[2].w[0] + 32u);
    c.budget -= 21;
    { const bool t = c.r[2].d[0] != c.r[4].d[0]; set32(c.r[3], c.r[3].w[0] + 32u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003FE254u | kUnwind; return; } goto L_003FE254; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003FE2E8; } }
L_003FE2B0:
    set32(c.r[4], c.r[18].w[0] + 64u);
    c.budget -= 1;
L_003FE2B4:
    c.r[5].d[0] = ld64((c.r[2].w[0]));
    c.r[6].d[0] = ld64((c.r[2].w[0] + 8u));
    c.r[7].d[0] = ld64((c.r[2].w[0] + 16u));
    c.r[8].d[0] = ld64((c.r[2].w[0] + 24u));
    st64((c.r[3].w[0]), c.r[5].d[0]);
    st64((c.r[3].w[0] + 8u), c.r[6].d[0]);
    st64((c.r[3].w[0] + 16u), c.r[7].d[0]);
    st64((c.r[3].w[0] + 24u), c.r[8].d[0]);
    set32(c.r[2], c.r[2].w[0] + 32u);
    c.budget -= 13;
    { const bool t = c.r[2].d[0] != c.r[4].d[0]; set32(c.r[3], c.r[3].w[0] + 32u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003FE2B4u | kUnwind; return; } goto L_003FE2B4; } }
L_003FE2E8:
    set32(c.r[4], ld32((c.r[2].w[0])));
    set32(c.r[19], 0u + 1u);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00450000u);
    st32((c.r[3].w[0]), c.r[4].w[0]);
    set32(c.r[4], c.r[17].w[0] + 120u);
    st32((c.r[17].w[0] + 80u), 0u);
    set32(c.r[16], c.r[16].w[0] - 17416u);
    st32((c.r[17].w[0] + 68u), c.r[19].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FE310u); st32((c.r[17].w[0] + 84u), 0u);  if (depth < kMaxDepth) unit_00BC(c, 392u, depth + 1u); else { c.pc = 0x003F3B90u; return; } if (c.pc != 0x003FE310u) [[unlikely]] return; }
L_003FE310:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FE318u); set32(c.r[4], c.r[17].w[0] + 2316u);  if (depth < kMaxDepth) unit_00BF(c, 265u, depth + 1u); else { c.pc = 0x003FE3D0u; return; } if (c.pc != 0x003FE318u) [[unlikely]] return; }
L_003FE318:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FE320u); set32(c.r[4], c.r[17].w[0] + 2380u);  if (depth < kMaxDepth) unit_00BF(c, 267u, depth + 1u); else { c.pc = 0x003FE438u; return; } if (c.pc != 0x003FE320u) [[unlikely]] return; }
L_003FE320:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FE328u); set32(c.r[4], c.r[17].w[0] + 10944u);  if (depth < kMaxDepth) unit_00BF(c, 269u, depth + 1u); else { c.pc = 0x003FE490u; return; } if (c.pc != 0x003FE328u) [[unlikely]] return; }
L_003FE328:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FE330u); set32(c.r[4], c.r[17].w[0] + 2444u);  if (depth < kMaxDepth) unit_00BD(c, 81u, depth + 1u); else { c.pc = 0x003F4828u; return; } if (c.pc != 0x003FE330u) [[unlikely]] return; }
L_003FE330:
    set32(c.r[4], c.r[17].w[0] + 2464u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FE340u); set32(c.r[6], 0u + 400u);  if (depth < kMaxDepth) unit_00B8(c, 36u, depth + 1u); else { c.pc = 0x003E0A78u; return; } if (c.pc != 0x003FE340u) [[unlikely]] return; }
L_003FE340:
    set32(c.r[4], c.r[17].w[0] + 2864u);
    set32(c.r[6], 0u + 400u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FE350u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B8(c, 36u, depth + 1u); else { c.pc = 0x003E0A78u; return; } if (c.pc != 0x003FE350u) [[unlikely]] return; }
L_003FE350:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FE35Cu); set32(c.r[5], c.r[17].w[0] + 3264u);  if (depth < kMaxDepth) unit_00C0(c, 37u, depth + 1u); else { c.pc = 0x00400680u; return; } if (c.pc != 0x003FE35Cu) [[unlikely]] return; }
L_003FE35C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[17].w[0] + 4416u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FE36Cu); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BC(c, 170u, depth + 1u); else { c.pc = 0x003F1350u; return; } if (c.pc != 0x003FE36Cu) [[unlikely]] return; }
L_003FE36C:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_003FE3AC; }
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = c.r[20].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FE388u); set32(c.r[5], c.r[17].w[0] + 6816u);  if (depth < kMaxDepth) unit_00C0(c, 190u, depth + 1u); else { c.pc = 0x00402210u; return; } if (c.pc != 0x003FE388u) [[unlikely]] return; }
L_003FE388:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FE390u); set32(c.r[4], c.r[17].w[0] + 10928u);  if (depth < kMaxDepth) unit_00BF(c, 357u, depth + 1u); else { c.pc = 0x003FF148u; return; } if (c.pc != 0x003FE390u) [[unlikely]] return; }
L_003FE390:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FE398u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BF(c, 279u, depth + 1u); else { c.pc = 0x003FE5C0u; return; } if (c.pc != 0x003FE398u) [[unlikely]] return; }
L_003FE398:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003FE3AC; } }
    st32((c.r[17].w[0] + 72u), c.r[19].w[0]);
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[17].w[0] + 76u), c.r[19].w[0]);
    c.budget -= 3;
L_003FE3AC:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 40u));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003FE3D0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FE3ECu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B8(c, 53u, depth + 1u); else { c.pc = 0x003E0EE8u; return; } if (c.pc != 0x003FE3ECu) [[unlikely]] return; }
L_003FE3EC:
    set32(c.r[3], 0u - 1u);
    set32(c.r[2], 0u + 1u);
    st32((c.r[16].w[0] + 44u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 28u), c.r[2].w[0]);
    st32((c.r[16].w[0]), 0u);
    st32((c.r[16].w[0] + 4u), 0u);
    st32((c.r[16].w[0] + 8u), 0u);
    st32((c.r[16].w[0] + 12u), 0u);
    st32((c.r[16].w[0] + 16u), 0u);
    st32((c.r[16].w[0] + 20u), 0u);
    st32((c.r[16].w[0] + 24u), 0u);
    st32((c.r[16].w[0] + 32u), 0u);
    st32((c.r[16].w[0] + 36u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 40u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 18;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003FE438:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FE454u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B8(c, 53u, depth + 1u); else { c.pc = 0x003E0EE8u; return; } if (c.pc != 0x003FE454u) [[unlikely]] return; }
L_003FE454:
    st32((c.r[16].w[0]), 0u);
    st32((c.r[16].w[0] + 40u), 0u);
    st32((c.r[16].w[0] + 4u), 0u);
    st32((c.r[16].w[0] + 8u), 0u);
    st32((c.r[16].w[0] + 12u), 0u);
    st32((c.r[16].w[0] + 16u), 0u);
    st32((c.r[16].w[0] + 20u), 0u);
    st32((c.r[16].w[0] + 24u), 0u);
    st32((c.r[16].w[0] + 28u), 0u);
    st32((c.r[16].w[0] + 32u), 0u);
    st32((c.r[16].w[0] + 36u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 15;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003FE490:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[5].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[6], 0u + 48u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FE4B8u); set32(c.r[17], 0u + 4u);  if (depth < kMaxDepth) unit_00B8(c, 53u, depth + 1u); else { c.pc = 0x003E0EE8u; return; } if (c.pc != 0x003FE4B8u) [[unlikely]] return; }
L_003FE4B8:
    c.r[16].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 2;
L_003FE4C0:
    set32(c.r[16], c.r[16].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FE4CCu); set32(c.r[17], c.r[17].w[0] - 1u);  if (depth < kMaxDepth) unit_00C0(c, 183u, depth + 1u); else { c.pc = 0x00402080u; return; } if (c.pc != 0x003FE4CCu) [[unlikely]] return; }
L_003FE4CC:
    c.budget -= 2;
    { const bool t = c.r[17].sd[0] >= 0; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003FE4C0u | kUnwind; return; } goto L_003FE4C0; } }
    set32(c.r[4], c.r[18].w[0] + 160u);
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 32u);  [[clang::musttail]] return unit_00C0(c, 183u, depth); }
L_003FE4F0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    set32(c.r[16], c.r[17].w[0] + 2380u);
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[5], 0u + 36u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FE524u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00C0(c, 20u, depth + 1u); else { c.pc = 0x00400258u; return; } if (c.pc != 0x003FE524u) [[unlikely]] return; }
L_003FE524:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003FE53C; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003FE53Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003FE53Cu) [[unlikely]] return; }
L_003FE53C:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003FE558:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    set32(c.r[16], c.r[17].w[0] + 2380u);
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[5], 0u + 37u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FE58Cu); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00C0(c, 20u, depth + 1u); else { c.pc = 0x00400258u; return; } if (c.pc != 0x003FE58Cu) [[unlikely]] return; }
L_003FE58C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003FE5A4; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003FE5A4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003FE5A4u) [[unlikely]] return; }
L_003FE5A4:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003FE5C0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[5], 0u + 3u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00C0(c, 235u, depth); }
L_003FE5D8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FE5ECu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BD(c, 94u, depth + 1u); else { c.pc = 0x003F4A60u; return; } if (c.pc != 0x003FE5ECu) [[unlikely]] return; }
L_003FE5EC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));  if (t) { goto L_003FE610; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[4].d[0] = 0ull + 0ull;
    c.r[5].d[0] = c.r[5].d[0] | 305ull;
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003F4840u | kUnwind; return; } [[clang::musttail]] return unit_00BD(c, 82u, depth); }
L_003FE610:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FE618u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BF(c, 299u, depth + 1u); else { c.pc = 0x003FE7B0u; return; } if (c.pc != 0x003FE618u) [[unlikely]] return; }
L_003FE618:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FE620u); set32(c.r[4], c.r[16].w[0] + 120u);  if (depth < kMaxDepth) unit_00BC(c, 393u, depth + 1u); else { c.pc = 0x003F3BA8u; return; } if (c.pc != 0x003FE620u) [[unlikely]] return; }
L_003FE620:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FE628u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BC(c, 189u, depth + 1u); else { c.pc = 0x003F1610u; return; } if (c.pc != 0x003FE628u) [[unlikely]] return; }
L_003FE628:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FE630u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BF(c, 287u, depth + 1u); else { c.pc = 0x003FE678u; return; } if (c.pc != 0x003FE630u) [[unlikely]] return; }
L_003FE630:
    set32(c.r[4], 0u + 7u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00450000u);
    set32(c.r[3], c.r[2].w[0] - 16900u);
    c.budget -= 4;
L_003FE640:
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[16].d[0]) { st32((c.r[3].w[0]), 0u);  goto L_003FE64C; }
L_003FE64C:
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.budget -= 6;
    { const bool t = c.r[4].sd[0] >= 0; set32(c.r[3], c.r[3].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003FE640u | kUnwind; return; } goto L_003FE640; } }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003FE678:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[5], 0u + 4u);
    st32((c.r[2].w[0] + 76u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    st32((c.r[2].w[0] + 72u), 0u);
    c.budget -= 9;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00C0(c, 235u, depth); }
L_003FE6A0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FE6B4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BD(c, 94u, depth + 1u); else { c.pc = 0x003F4A60u; return; } if (c.pc != 0x003FE6B4u) [[unlikely]] return; }
L_003FE6B4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[5].d[0] | 306ull;  if (t) { goto L_003FE6D8; } }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[4].d[0] = 0ull + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003F4840u | kUnwind; return; } [[clang::musttail]] return unit_00BD(c, 82u, depth); }
L_003FE6D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FE6E0u); set32(c.r[5], 0u + 47u);  if (depth < kMaxDepth) unit_00C0(c, 20u, depth + 1u); else { c.pc = 0x00400258u; return; } if (c.pc != 0x003FE6E0u) [[unlikely]] return; }
L_003FE6E0:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003FE700; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FE6F4u);  if (depth < kMaxDepth) unit_00BF(c, 95u, depth + 1u); else { c.pc = 0x003FCEF0u; return; } if (c.pc != 0x003FE6F4u) [[unlikely]] return; }
L_003FE6F4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_003FE70C; } }
    c.budget -= 1;
L_003FE700:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FE708u);  if (depth < kMaxDepth) unit_00BF(c, 293u, depth + 1u); else { c.pc = 0x003FE720u; return; } if (c.pc != 0x003FE708u) [[unlikely]] return; }
L_003FE708:
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_003FE70C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    st32((c.r[16].w[0] + 68u), c.r[3].w[0]);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003FE720:
    set32(c.r[3], 0u + 4u);
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 76u), c.r[3].w[0]);  c.pc = t; return; }
L_003FE730:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[5], 0u + 7u);
    set32(c.r[6], 0u + 6u);
    c.r[7].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FE74Cu); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00C0(c, 239u, depth + 1u); else { c.pc = 0x00402810u; return; } if (c.pc != 0x003FE74Cu) [[unlikely]] return; }
L_003FE74C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003FE758:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FE76Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BD(c, 94u, depth + 1u); else { c.pc = 0x003F4A60u; return; } if (c.pc != 0x003FE76Cu) [[unlikely]] return; }
L_003FE76C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[5].d[0] | 307ull;  if (t) { goto L_003FE790; } }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[4].d[0] = 0ull + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003F4840u | kUnwind; return; } [[clang::musttail]] return unit_00BD(c, 82u, depth); }
L_003FE790:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FE798u);  if (depth < kMaxDepth) unit_00BF(c, 299u, depth + 1u); else { c.pc = 0x003FE7B0u; return; } if (c.pc != 0x003FE798u) [[unlikely]] return; }
L_003FE798:
    set32(c.r[3], 0u + 1u);
    st32((c.r[16].w[0] + 68u), c.r[3].w[0]);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003FE7B0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[5], 0u + 1u);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 72u)));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == c.r[5].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003FE810; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FE7D8u);  if (depth < kMaxDepth) unit_00BF(c, 308u, depth + 1u); else { c.pc = 0x003FE840u; return; } if (c.pc != 0x003FE7D8u) [[unlikely]] return; }
L_003FE7D8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[29].d[0] + 0ull;  if (t) { goto L_003FE810; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FE7E8u);  if (depth < kMaxDepth) unit_00BD(c, 102u, depth + 1u); else { c.pc = 0x003F4AF8u; return; } if (c.pc != 0x003FE7E8u) [[unlikely]] return; }
L_003FE7E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FE7F0u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_00BF(c, 306u, depth + 1u); else { c.pc = 0x003FE820u; return; } if (c.pc != 0x003FE7F0u) [[unlikely]] return; }
L_003FE7F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FE7F8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BF(c, 310u, depth + 1u); else { c.pc = 0x003FE8A0u; return; } if (c.pc != 0x003FE7F8u) [[unlikely]] return; }
L_003FE7F8:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FE804u); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BF(c, 306u, depth + 1u); else { c.pc = 0x003FE820u; return; } if (c.pc != 0x003FE804u) [[unlikely]] return; }
L_003FE804:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FE80Cu); c.r[4].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BD(c, 103u, depth + 1u); else { c.pc = 0x003F4B10u; return; } if (c.pc != 0x003FE80Cu) [[unlikely]] return; }
L_003FE80C:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_003FE810:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003FE820:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00450000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[2].w[0] - 16908u), c.r[4].w[0]);  c.pc = t; return; }
L_003FE830:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00450000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[3].w[0] - 16908u)));  c.pc = t; return; }
L_003FE840:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[3], 0u + 4u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 72u)));
    c.budget -= 8;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[3], 0u + 1u);  goto L_003FE880; }
    set32(c.r[5], 0u + 7u);
    set32(c.r[6], 0u + 7u);
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FE874u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00C0(c, 239u, depth + 1u); else { c.pc = 0x00402810u; return; } if (c.pc != 0x003FE874u) [[unlikely]] return; }
L_003FE874:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_003FE890; }
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_003FE880:
    c.r[2].d[0] = 0ull + 0ull;
    st32((c.r[16].w[0] + 76u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 72u), c.r[3].w[0]);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 4;
L_003FE890:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003FE8A0:
    set32(c.r[29], c.r[29].w[0] - 560u);
    st64((c.r[29].w[0] + 512u), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[2].d[0] = c.r[16].d[0] & 7ull;
    st64((c.r[29].w[0] + 536u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 520u), c.r[17].d[0]);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    st64((c.r[29].w[0] + 528u), c.r[18].d[0]);
    c.r[19].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 544u), c.r[31].d[0]);
    c.budget -= 12;
    { const bool t = c.r[2].d[0] == 0ull; c.r[3].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003FE930; } }
    set32(c.r[2], c.r[16].w[0] + 64u);
    c.budget -= 1;
L_003FE8D4:
    ldl(c.r[5], (c.r[3].w[0] + 7u));
    ldr(c.r[5], (c.r[3].w[0]));
    ldl(c.r[6], (c.r[3].w[0] + 15u));
    ldr(c.r[6], (c.r[3].w[0] + 8u));
    ldl(c.r[7], (c.r[3].w[0] + 23u));
    ldr(c.r[7], (c.r[3].w[0] + 16u));
    ldl(c.r[8], (c.r[3].w[0] + 31u));
    ldr(c.r[8], (c.r[3].w[0] + 24u));
    sdl(c.r[5], (c.r[4].w[0] + 7u));
    sdr(c.r[5], (c.r[4].w[0]));
    sdl(c.r[6], (c.r[4].w[0] + 15u));
    sdr(c.r[6], (c.r[4].w[0] + 8u));
    sdl(c.r[7], (c.r[4].w[0] + 23u));
    sdr(c.r[7], (c.r[4].w[0] + 16u));
    sdl(c.r[8], (c.r[4].w[0] + 31u));
    sdr(c.r[8], (c.r[4].w[0] + 24u));
    set32(c.r[3], c.r[3].w[0] + 32u);
    c.budget -= 21;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[4], c.r[4].w[0] + 32u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003FE8D4u | kUnwind; return; } goto L_003FE8D4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003FE968; } }
L_003FE930:
    set32(c.r[2], c.r[16].w[0] + 64u);
    c.budget -= 1;
L_003FE934:
    c.r[5].d[0] = ld64((c.r[3].w[0]));
    c.r[6].d[0] = ld64((c.r[3].w[0] + 8u));
    c.r[7].d[0] = ld64((c.r[3].w[0] + 16u));
    c.r[8].d[0] = ld64((c.r[3].w[0] + 24u));
    st64((c.r[4].w[0]), c.r[5].d[0]);
    st64((c.r[4].w[0] + 8u), c.r[6].d[0]);
    st64((c.r[4].w[0] + 16u), c.r[7].d[0]);
    st64((c.r[4].w[0] + 24u), c.r[8].d[0]);
    set32(c.r[3], c.r[3].w[0] + 32u);
    c.budget -= 13;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[4], c.r[4].w[0] + 32u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003FE934u | kUnwind; return; } goto L_003FE934; } }
L_003FE968:
    set32(c.r[2], ld32((c.r[3].w[0])));
    st32((c.r[4].w[0]), c.r[2].w[0]);
    set32(c.r[18], ld32((c.r[16].w[0] + 2496u)));
    c.budget -= 5;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_003FE98C; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FE988u); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_00BF(c, 325u, depth + 1u); else { c.pc = 0x003FEA68u; return; } if (c.pc != 0x003FE988u) [[unlikely]] return; }
L_003FE988:
    set32(c.r[19], ld32((c.r[29].w[0] + 100u)));
    c.budget -= 1;
L_003FE98C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FE994u); set32(c.r[4], c.r[16].w[0] + 120u);  if (depth < kMaxDepth) unit_00BC(c, 393u, depth + 1u); else { c.pc = 0x003F3BA8u; return; } if (c.pc != 0x003FE994u) [[unlikely]] return; }
L_003FE994:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FE99Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BC(c, 189u, depth + 1u); else { c.pc = 0x003F1610u; return; } if (c.pc != 0x003FE99Cu) [[unlikely]] return; }
L_003FE99C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FE9A4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BF(c, 287u, depth + 1u); else { c.pc = 0x003FE678u; return; } if (c.pc != 0x003FE9A4u) [[unlikely]] return; }
L_003FE9A4:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[16].d[0] = ld64((c.r[29].w[0] + 512u));  goto L_003FEA50; }
    set32(c.r[17], c.r[29].w[0] + 112u);
    set32(c.r[5], c.r[16].w[0] + 2864u);
    set32(c.r[6], 0u + 400u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FE9C0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B8(c, 36u, depth + 1u); else { c.pc = 0x003E0A78u; return; } if (c.pc != 0x003FE9C0u) [[unlikely]] return; }
L_003FE9C0:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FE9CCu); c.r[4].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BF(c, 249u, depth + 1u); else { c.pc = 0x003FE1E0u; return; } if (c.pc != 0x003FE9CCu) [[unlikely]] return; }
L_003FE9CC:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != 0ull; set32(c.r[4], c.r[16].w[0] + 2464u);  if (t) { goto L_003FE9F0; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FE9E8u); c.r[5].d[0] = c.r[5].d[0] | 514ull;  if (depth < kMaxDepth) unit_00BD(c, 82u, depth + 1u); else { c.pc = 0x003F4840u; return; } if (c.pc != 0x003FE9E8u) [[unlikely]] return; }
L_003FE9E8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0] + 512u));  if (t) { goto L_003FEA50; } }
L_003FE9F0:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FE9FCu); set32(c.r[6], 0u + 400u);  if (depth < kMaxDepth) unit_00B8(c, 36u, depth + 1u); else { c.pc = 0x003E0A78u; return; } if (c.pc != 0x003FE9FCu) [[unlikely]] return; }
L_003FE9FC:
    set32(c.r[4], c.r[16].w[0] + 2864u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FEA0Cu); set32(c.r[6], 0u + 400u);  if (depth < kMaxDepth) unit_00B8(c, 36u, depth + 1u); else { c.pc = 0x003E0A78u; return; } if (c.pc != 0x003FEA0Cu) [[unlikely]] return; }
L_003FEA0C:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003FEA4C; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FEA20u); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_00BF(c, 325u, depth + 1u); else { c.pc = 0x003FEA68u; return; } if (c.pc != 0x003FEA20u) [[unlikely]] return; }
L_003FEA20:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[16].d[0] = ld64((c.r[29].w[0] + 512u));  goto L_003FEA50; }
    set32(c.r[6], ld32((c.r[29].w[0] + 100u)));
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FEA38u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BF(c, 327u, depth + 1u); else { c.pc = 0x003FEAD8u; return; } if (c.pc != 0x003FEA38u) [[unlikely]] return; }
L_003FEA38:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[16].d[0] = ld64((c.r[29].w[0] + 512u));  goto L_003FEA50; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FEA48u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BF(c, 329u, depth + 1u); else { c.pc = 0x003FEB58u; return; } if (c.pc != 0x003FEA48u) [[unlikely]] return; }
L_003FEA48:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003FEA4C:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 512u));
    c.budget -= 1;
L_003FEA50:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 520u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 528u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 536u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 544u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 560u);  c.pc = t; return; }
L_003FEA68:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FEA84u); c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BD(c, 94u, depth + 1u); else { c.pc = 0x003F4A60u; return; } if (c.pc != 0x003FEA84u) [[unlikely]] return; }
L_003FEA84:
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    c.r[4].d[0] = 0ull + 0ull;
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[5].d[0] | 308ull;
    set32(c.r[6], 0u + 9u);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; c.r[8].d[0] = 0ull + 0ull;  if (t) { goto L_003FEAB8; } }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003F4840u | kUnwind; return; } [[clang::musttail]] return unit_00BD(c, 82u, depth); }
L_003FEAB8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[5].d[0] = 0ull + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 32u);  [[clang::musttail]] return unit_00C0(c, 239u, depth); }
L_003FEAD8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FEAFCu); c.r[18].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BD(c, 94u, depth + 1u); else { c.pc = 0x003F4A60u; return; } if (c.pc != 0x003FEAFCu) [[unlikely]] return; }
L_003FEAFC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.r[8].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[5].d[0] | 309ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[6], 0u + 10u);  if (t) { goto L_003FEB38; } }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[4].d[0] = 0ull + 0ull;
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003F4840u | kUnwind; return; } [[clang::musttail]] return unit_00BD(c, 82u, depth); }
L_003FEB38:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[5].d[0] = 0ull + 0ull;
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 32u);  [[clang::musttail]] return unit_00C0(c, 239u, depth); }
L_003FEB58:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FEB6Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BD(c, 94u, depth + 1u); else { c.pc = 0x003F4A60u; return; } if (c.pc != 0x003FEB6Cu) [[unlikely]] return; }
L_003FEB6C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], 0u + 1u);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[5].d[0] | 309ull;  if (t) { goto L_003FEB98; } }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[4].d[0] = 0ull + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003F4840u | kUnwind; return; } [[clang::musttail]] return unit_00BD(c, 82u, depth); }
L_003FEB98:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FEBA0u); set32(c.r[5], ld32((c.r[16].w[0] + 6836u)));  if (depth < kMaxDepth) unit_00BC(c, 287u, depth + 1u); else { c.pc = 0x003F2910u; return; } if (c.pc != 0x003FEBA0u) [[unlikely]] return; }
L_003FEBA0:
    set32(c.r[2], 0u + 1u);
    st32((c.r[16].w[0] + 68u), c.r[2].w[0]);
    c.r[2].d[0] = 0ull + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003FEBC0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FEBD0u); set32(c.r[5], ld32((c.r[4].w[0] + 6836u)));  if (depth < kMaxDepth) unit_00BC(c, 288u, depth + 1u); else { c.pc = 0x003F2930u; return; } if (c.pc != 0x003FEBD0u) [[unlikely]] return; }
L_003FEBD0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003FEBE0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FEC00u); st32((c.r[16].w[0]), 0u);  if (depth < kMaxDepth) unit_00BD(c, 94u, depth + 1u); else { c.pc = 0x003F4A60u; return; } if (c.pc != 0x003FEC00u) [[unlikely]] return; }
L_003FEC00:
    c.r[4].d[0] = 0ull + 0ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    set32(c.r[6], 0u + 11u);
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[5].d[0] | 310ull;  if (t) { goto L_003FEC30; } }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003F4840u | kUnwind; return; } [[clang::musttail]] return unit_00BD(c, 82u, depth); }
L_003FEC30:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FEC3Cu); set32(c.r[5], 0u + 6u);  if (depth < kMaxDepth) unit_00C0(c, 239u, depth + 1u); else { c.pc = 0x00402810u; return; } if (c.pc != 0x003FEC3Cu) [[unlikely]] return; }
L_003FEC3C:
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_003FEC4C; } }
    st32((c.r[17].w[0] + 2400u), c.r[3].w[0]);
    c.budget -= 1;
L_003FEC4C:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003FEC60:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FEC7Cu); c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BD(c, 94u, depth + 1u); else { c.pc = 0x003F4A60u; return; } if (c.pc != 0x003FEC7Cu) [[unlikely]] return; }
L_003FEC7C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    c.r[4].d[0] = 0ull + 0ull;
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[5].d[0] | 311ull;
    set32(c.r[6], 0u + 12u);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; c.r[8].d[0] = 0ull + 0ull;  if (t) { goto L_003FECB0; } }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003F4840u | kUnwind; return; } [[clang::musttail]] return unit_00BD(c, 82u, depth); }
L_003FECB0:
    st32((c.r[17].w[0] + 2400u), 0u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[5], 0u + 6u);
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 8;
    { set32(c.r[29], c.r[29].w[0] + 32u);  [[clang::musttail]] return unit_00C0(c, 239u, depth); }
L_003FECD0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FECECu); c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BD(c, 94u, depth + 1u); else { c.pc = 0x003F4A60u; return; } if (c.pc != 0x003FECECu) [[unlikely]] return; }
L_003FECEC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_003FED10; } }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[5].d[0] = c.r[5].d[0] | 313ull;
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003F4840u | kUnwind; return; } [[clang::musttail]] return unit_00BD(c, 82u, depth); }
L_003FED10:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003F1938u | kUnwind; return; } [[clang::musttail]] return unit_00BC(c, 205u, depth); }
L_003FED30:
    st32((c.r[4].w[0] + 16u), 0u);
    st32((c.r[4].w[0]), 0u);
    st32((c.r[4].w[0] + 4u), 0u);
    st32((c.r[4].w[0] + 8u), 0u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 12u), 0u);  c.pc = t; return; }
L_003FED48:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 9;
    { const bool t = c.r[17].d[0] == 0ull; st64((c.r[29].w[0] + 24u), c.r[31].d[0]);  if (t) { goto L_003FEDB4; } }
    c.budget -= 2;
    { const bool t = c.r[16].sd[0] <= 0; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003FEDB8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FED7Cu);  if (depth < kMaxDepth) unit_00BD(c, 94u, depth + 1u); else { c.pc = 0x003F4A60u; return; } if (c.pc != 0x003FED7Cu) [[unlikely]] return; }
L_003FED7C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    c.r[4].d[0] = 0ull + 0ull;
    c.r[5].d[0] = c.r[5].d[0] | 357ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003FEDA8; } }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003F4840u | kUnwind; return; } [[clang::musttail]] return unit_00BD(c, 82u, depth); }
L_003FEDA8:
    set32(c.r[4], c.r[18].w[0] + 4588u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FEDB4u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BF(c, 345u, depth + 1u); else { c.pc = 0x003FEDD0u; return; } if (c.pc != 0x003FEDB4u) [[unlikely]] return; }
L_003FEDB4:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003FEDB8:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003FEDD0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[16], c.r[5].w[0] + 3u);
    set32(c.r[16], c.r[16].w[0] >> 2);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    set32(c.r[16], c.r[16].w[0] << 2);
    set32(c.r[18], c.r[6].w[0] - 4u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FEE08u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 49u, depth + 1u); else { c.pc = 0x00124ED8u; return; } if (c.pc != 0x003FEE08u) [[unlikely]] return; }
L_003FEE08:
    st32((c.r[17].w[0]), c.r[16].w[0]);
    set32(c.r[2], 0u + 12u);
    mmi::div(c, 0, c.r[18].w[0], c.r[2].w[0]);
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { breakpoint(c, 0x003FEE18u);  goto L_003FEE1C; }
L_003FEE1C:
    st32((c.r[17].w[0] + 16u), 0u);
    st32((c.r[17].w[0] + 8u), 0u);
    st32((c.r[17].w[0] + 12u), 0u);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[18].d[0] = c.lo.d[0];
    st32((c.r[17].w[0] + 4u), c.r[18].w[0]);
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003FEE48:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[7].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    set32(c.r[3], c.r[5].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] - c.r[5].w[0]);
    c.r[2].d[0] = 0ull + 0ull;
    set32(c.r[6], ld32((c.r[7].w[0])));
    set32(c.r[3], c.r[3].w[0] << 2);
    c.budget -= 12;
    { const bool t = c.r[6].sd[0] < 0; set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);  if (t) { goto L_003FEEC4; } }
    set32(c.r[4], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[16].w[0] + c.r[4].w[0]);
    set32(c.r[4], c.r[4].w[0] + 4472u);
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.budget -= 6;
    if (c.r[3].d[0] == 0ull) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_003FEEC8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FEE98u); c.r[5].d[0] = c.r[7].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BF(c, 349u, depth + 1u); else { c.pc = 0x003FEED8u; return; } if (c.pc != 0x003FEE98u) [[unlikely]] return; }
L_003FEE98:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    set32(c.r[3], 0u - 1u);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; c.r[5].d[0] = c.r[5].d[0] | 1057ull;  if (t) { goto L_003FEEC0; } }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003F4840u | kUnwind; return; } [[clang::musttail]] return unit_00BD(c, 82u, depth); }
L_003FEEC0:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003FEEC4:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_003FEEC8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003FEED8:
    c.r[6].d[0] = c.r[4].d[0] + 0ull;
    c.r[8].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[6].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[6].w[0] + 4u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[2], 0u - 1u);  if (t) { goto L_003FEF50; } }
    set32(c.r[5], ld32((c.r[6].w[0] + 12u)));
    set32(c.r[3], ld32((c.r[6].w[0])));
    set32(c.r[2], c.r[5].w[0] << 1);
    set32(c.r[4], c.r[5].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    c.r[7].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    ldl(c.r[3], (c.r[8].w[0] + 7u));
    ldr(c.r[3], (c.r[8].w[0]));
    set32(c.r[9], ld32((c.r[8].w[0] + 8u)));
    sdl(c.r[3], (c.r[2].w[0] + 7u));
    sdr(c.r[3], (c.r[2].w[0]));
    st32((c.r[2].w[0] + 8u), c.r[9].w[0]);
    set32(c.r[3], ld32((c.r[6].w[0] + 4u)));
    c.r[4].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 18;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] - c.r[3].w[0]);  if (t) { goto L_003FEF3C; } }
    set32(c.r[7], c.r[5].w[0] + 1u);
    c.budget -= 1;
L_003FEF3C:
    set32(c.r[3], ld32((c.r[6].w[0] + 8u)));
    c.r[2].d[0] = 0ull + 0ull;
    st32((c.r[6].w[0] + 12u), c.r[7].w[0]);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[6].w[0] + 8u), c.r[3].w[0]);
    c.budget -= 5;
L_003FEF50:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003FEF58:
    set32(c.r[2], c.r[5].w[0] << 3);
    set32(c.r[3], c.r[4].w[0] + 4416u);
    set32(c.r[2], c.r[2].w[0] - c.r[5].w[0]);
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[2], c.r[2].w[0] << 2);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[4], 0u - 1u);
    set32(c.r[2], c.r[2].w[0] << 2);
    st32((c.r[7].w[0]), c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[3].w[0] + 56u);
    set32(c.r[3], c.r[3].w[0] + 16u);
    set32(c.r[5], ld32((c.r[4].w[0])));
    c.r[9].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[8], ld32((c.r[3].w[0] + 12u)));
    c.r[6].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 20;
    { const bool t = c.r[5].d[0] == 0ull; set32(c.r[7], ld32((c.r[3].w[0] + 8u)));  if (t) { goto L_003FEFC0; } }
    set32(c.r[2], c.r[7].w[0] + c.r[8].w[0]);
    set32(c.r[5], c.r[9].w[0] - c.r[8].w[0]);
    c.r[2].d[0] = c.r[9].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FEFBCu); if (c.r[2].d[0] != 0) c.r[5].d[0] = c.r[9].d[0];  if (depth < kMaxDepth) unit_00BF(c, 352u, depth + 1u); else { c.pc = 0x003FEFD0u; return; } if (c.pc != 0x003FEFBCu) [[unlikely]] return; }
L_003FEFBC:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003FEFC0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003FEFD0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[6].d[0] = c.r[7].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 10;
    { const bool t = c.r[2].d[0] == 0ull; c.r[7].d[0] = c.r[8].d[0] + 0ull;  if (t) { goto L_003FF064; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FF000u);  if (depth < kMaxDepth) unit_00BF(c, 354u, depth + 1u); else { c.pc = 0x003FF078u; return; } if (c.pc != 0x003FF000u) [[unlikely]] return; }
L_003FF000:
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    if (c.r[6].d[0] == c.r[2].d[0]) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_003FF068; }
    set32(c.r[3], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[5], c.r[3].w[0] - c.r[2].w[0]);
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    if (c.r[2].d[0] == 0) c.r[3].d[0] = c.r[5].d[0];
    set32(c.r[5], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] - c.r[6].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[16].w[0] + 8u), c.r[4].w[0]);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    ldl(c.r[3], (c.r[2].w[0] + 7u));
    ldr(c.r[3], (c.r[2].w[0]));
    set32(c.r[4], ld32((c.r[2].w[0] + 8u)));
    sdl(c.r[3], (c.r[17].w[0] + 7u));
    sdr(c.r[3], (c.r[17].w[0]));
    st32((c.r[17].w[0] + 8u), c.r[4].w[0]);
    c.budget -= 21;
L_003FF064:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_003FF068:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003FF078:
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[12], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[11], ld32((c.r[4].w[0] + 4u)));
    c.r[10].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] <= 0; set32(c.r[9], ld32((c.r[4].w[0] + 16u)));  if (t) { goto L_003FF140; } }
    set32(c.r[15], ld32((c.r[4].w[0])));
    c.r[6].d[0] = c.r[5].d[0] < c.r[6].d[0] ? 1ull : 0ull;
    c.r[14].d[0] = c.r[2].d[0] + 0ull;
    c.r[13].d[0] = c.r[5].d[0] < c.r[12].d[0] ? 1ull : 0ull;
    set32(c.r[2], c.r[9].w[0] << 1);
    c.budget -= 6;
L_003FF0A8:
    set32(c.r[2], c.r[2].w[0] + c.r[9].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[15].w[0] + c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 8u)));
    c.r[8].d[0] = c.r[5].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    c.r[2].d[0] = c.r[12].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull; c.r[3].d[0] = c.r[8].d[0] + 0ull;  if (t) { goto L_003FF0F0; } }
    c.budget -= 2;
    { const bool t = c.r[8].d[0] != 0ull; set32(c.r[2], c.r[9].w[0] + 1u);  if (t) { goto L_003FF11C; } }
    c.r[2].d[0] = c.r[5].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], c.r[9].w[0] + 1u);  goto L_003FF11C; }
L_003FF0E4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[10].d[0] + 0ull;  c.pc = t; return; }
L_003FF0F0:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003FF100; } }
    c.budget -= 2;
    { const bool t = c.r[13].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003FF0E4u | kUnwind; return; } goto L_003FF0E4; } }
L_003FF100:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != 0ull; set32(c.r[2], c.r[9].w[0] + 1u);  if (t) { goto L_003FF11C; } }
    set32(c.r[2], c.r[4].w[0] - c.r[7].w[0]);
    c.r[2].d[0] = c.r[5].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003FF0E4u | kUnwind; return; } goto L_003FF0E4; } }
    set32(c.r[2], c.r[9].w[0] + 1u);
    c.budget -= 1;
L_003FF11C:
    c.r[3].d[0] = c.r[2].sd[0] < c.r[11].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[10], c.r[10].w[0] + 1u);  if (t) { goto L_003FF130; } }
    set32(c.r[2], c.r[9].w[0] - c.r[11].w[0]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 2;
L_003FF130:
    c.r[9].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].d[0] = c.r[10].sd[0] < c.r[14].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[9].w[0] << 1);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003FF0A8u | kUnwind; return; } goto L_003FF0A8; }
L_003FF140:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u - 1u);  c.pc = t; return; }
L_003FF148:
    set32(c.r[3], c.r[4].w[0] + 4u);
    set32(c.r[5], 0u - 3u);
    set32(c.r[2], 0u + 1u);
    st32((c.r[3].w[0] + 4u), c.r[5].w[0]);
    st32((c.r[3].w[0] + 8u), c.r[2].w[0]);
    st32((c.r[4].w[0]), 0u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[3].w[0]), 0u);  c.pc = t; return; }
L_003FF168:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.budget -= 5;
    { const bool t = c.r[5].sd[0] <= 0; st64((c.r[29].w[0] + 16u), c.r[31].d[0]);  if (t) { goto L_003FF19C; } }
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
L_003FF188:
    set32(c.r[17], c.r[17].w[0] + 3524u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FF194u); set32(c.r[16], c.r[16].w[0] - 1u);  if (depth < kMaxDepth) unit_00BF(c, 361u, depth + 1u); else { c.pc = 0x003FF1B0u; return; } if (c.pc != 0x003FF194u) [[unlikely]] return; }
L_003FF194:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003FF188u | kUnwind; return; } goto L_003FF188; } }
L_003FF19C:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003FF1B0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[5].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FF1CCu); set32(c.r[6], 0u + 881u);  if (depth < kMaxDepth) unit_00B8(c, 53u, depth + 1u); else { c.pc = 0x003E0EE8u; return; } if (c.pc != 0x003FF1CCu) [[unlikely]] return; }
L_003FF1CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FF1D4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BF(c, 364u, depth + 1u); else { c.pc = 0x003FF220u; return; } if (c.pc != 0x003FF1D4u) [[unlikely]] return; }
L_003FF1D4:
    st32((c.r[16].w[0] + 3476u), 0u);
    set32(c.r[2], 0u - 1u);
    set32(c.r[3], 0u - 8u);
    set32(c.r[4], 0u + 1u);
    st32((c.r[16].w[0] + 3520u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 3508u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 3512u), c.r[4].w[0]);
    st32((c.r[16].w[0] + 3480u), 0u);
    st32((c.r[16].w[0] + 3484u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 3488u), c.r[4].w[0]);
    st32((c.r[16].w[0] + 3492u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 3496u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 3500u), 0u);
    st32((c.r[16].w[0] + 3504u), 0u);
    st32((c.r[16].w[0] + 3516u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 19;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003FF220:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    set32(c.r[17], c.r[16].w[0] + 2208u);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    set32(c.r[18], c.r[16].w[0] + 3324u);
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    set32(c.r[19], c.r[16].w[0] + 2756u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[4], c.r[16].w[0] + 12u);
    st32((c.r[16].w[0]), 0u);
    st32((c.r[16].w[0] + 4u), 0u);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FF25Cu); st32((c.r[16].w[0] + 8u), 0u);  if (depth < kMaxDepth) unit_00BC(c, 392u, depth + 1u); else { c.pc = 0x003F3B90u; return; } if (c.pc != 0x003FF25Cu) [[unlikely]] return; }
L_003FF25C:
    st32((c.r[17].w[0]), 0u);
    st32((c.r[17].w[0] + 32u), 0u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    st32((c.r[17].w[0] + 4u), 0u);
    set32(c.r[4], c.r[16].w[0] + 2768u);
    st32((c.r[17].w[0] + 8u), 0u);
    c.r[5].d[0] = c.r[5].d[0] | 65535ull;
    st32((c.r[17].w[0] + 12u), 0u);
    st32((c.r[17].w[0] + 16u), 0u);
    st32((c.r[17].w[0] + 20u), 0u);
    st32((c.r[17].w[0] + 24u), 0u);
    st32((c.r[17].w[0] + 28u), 0u);
    st32((c.r[19].w[0] + 8u), 0u);
    st32((c.r[19].w[0]), 0u);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FF29Cu); st32((c.r[19].w[0] + 4u), 0u);  if (depth < kMaxDepth) unit_00C0(c, 52u, depth + 1u); else { c.pc = 0x00400880u; return; } if (c.pc != 0x003FF29Cu) [[unlikely]] return; }
L_003FF29C:
    st32((c.r[18].w[0]), 0u);
    set32(c.r[2], 0u + 1u);
    st32((c.r[18].w[0] + 4u), 0u);
    st32((c.r[18].w[0] + 8u), c.r[2].w[0]);
    st32((c.r[18].w[0] + 12u), 0u);
    st32((c.r[18].w[0] + 16u), 0u);
    st32((c.r[18].w[0] + 20u), 0u);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003FF2D8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FF2F4u); c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BD(c, 94u, depth + 1u); else { c.pc = 0x003F4A60u; return; } if (c.pc != 0x003FF2F4u) [[unlikely]] return; }
L_003FF2F4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_003FF318; } }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[5].d[0] = c.r[5].d[0] | 337ull;
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003F4840u | kUnwind; return; } [[clang::musttail]] return unit_00BD(c, 82u, depth); }
L_003FF318:
    st32((c.r[16].w[0] + 10928u), c.r[17].w[0]);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003FF330:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FF34Cu); c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BD(c, 94u, depth + 1u); else { c.pc = 0x003F4A60u; return; } if (c.pc != 0x003FF34Cu) [[unlikely]] return; }
L_003FF34C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_003FF370; } }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[5].d[0] = c.r[5].d[0] | 338ull;
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003F4840u | kUnwind; return; } [[clang::musttail]] return unit_00BD(c, 82u, depth); }
L_003FF370:
    set32(c.r[3], ld32((c.r[16].w[0] + 10928u)));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    st32((c.r[3].w[0] + 3500u), c.r[17].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003FF390:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FF3A4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BD(c, 94u, depth + 1u); else { c.pc = 0x003F4A60u; return; } if (c.pc != 0x003FF3A4u) [[unlikely]] return; }
L_003FF3A4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], 0u + 1u);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[5].d[0] | 339ull;  if (t) { goto L_003FF3D0; } }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[4].d[0] = 0ull + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003F4840u | kUnwind; return; } [[clang::musttail]] return unit_00BD(c, 82u, depth); }
L_003FF3D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FF3D8u); set32(c.r[5], 0u + 47u);  if (depth < kMaxDepth) unit_00C0(c, 9u, depth + 1u); else { c.pc = 0x00400090u; return; } if (c.pc != 0x003FF3D8u) [[unlikely]] return; }
L_003FF3D8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003FCEF0u | kUnwind; return; } goto L_003FCEF0; }
L_003FF3F0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FF410u); st32((c.r[16].w[0]), 0u);  if (depth < kMaxDepth) unit_00BD(c, 94u, depth + 1u); else { c.pc = 0x003F4A60u; return; } if (c.pc != 0x003FF410u) [[unlikely]] return; }
L_003FF410:
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_003FF438; } }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[5].d[0] = c.r[5].d[0] | 340ull;
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003F4840u | kUnwind; return; } [[clang::musttail]] return unit_00BD(c, 82u, depth); }
L_003FF438:
    set32(c.r[4], ld32((c.r[17].w[0] + 10928u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FF444u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BF(c, 377u, depth + 1u); else { c.pc = 0x003FF460u; return; } if (c.pc != 0x003FF444u) [[unlikely]] return; }
L_003FF444:
    c.r[2].d[0] = 0ull + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003FF460:
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.r[3].d[0] = c.r[2].d[0] ^ 1ull;
    if (c.r[3].d[0] != 0) c.r[2].d[0] = 0ull;
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[5].w[0]), c.r[2].w[0]);  c.pc = t; return; }
L_003FF478:
    set32(c.r[3], ld32((c.r[4].w[0] + 10928u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003FF49C; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 3492u)));
    c.budget -= 3;
    if (c.r[2].sd[0] < 0) { st32((c.r[3].w[0] + 3492u), c.r[5].w[0]);  goto L_003FF490; }
L_003FF490:
    set32(c.r[2], ld32((c.r[3].w[0] + 3496u)));
    c.budget -= 3;
    if (c.r[2].sd[0] < 0) { st32((c.r[3].w[0] + 3496u), c.r[6].w[0]);  goto L_003FF49C; }
L_003FF49C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003FF4A8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 10928u)));
    c.budget -= 7;
    if (c.r[2].d[0] == 0ull) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_003FF4E0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FF4CCu);  if (depth < kMaxDepth) unit_00BF(c, 381u, depth + 1u); else { c.pc = 0x003FF4F0u; return; } if (c.pc != 0x003FF4CCu) [[unlikely]] return; }
L_003FF4CC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  goto L_003FFD50; }
L_003FF4E0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003FF4F0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 24u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 40u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 56u), c.r[21].d[0]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    set32(c.r[16], ld32((c.r[21].w[0] + 10928u)));
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[19], c.r[16].w[0] + 12u);
    set32(c.r[20], c.r[16].w[0] + 2208u);
    set32(c.r[17], c.r[16].w[0] + 2756u);
    c.budget -= 16;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[18], c.r[16].w[0] + 3324u);  if (t) { goto L_003FF630; } }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FF53Cu); c.r[6].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BF(c, 388u, depth + 1u); else { c.pc = 0x003FF658u; return; } if (c.pc != 0x003FF53Cu) [[unlikely]] return; }
L_003FF53C:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_003FF634; }
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FF554u); set32(c.r[6], c.r[29].w[0] + 4u);  if (depth < kMaxDepth) unit_00BF(c, 391u, depth + 1u); else { c.pc = 0x003FF6D8u; return; } if (c.pc != 0x003FF554u) [[unlikely]] return; }
L_003FF554:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_003FF634; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FF564u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BF(c, 394u, depth + 1u); else { c.pc = 0x003FF758u; return; } if (c.pc != 0x003FF564u) [[unlikely]] return; }
L_003FF564:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_003FF5F0; } }
    st32((c.r[20].w[0]), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[19].w[0])));
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { set32(c.r[5], ld32((c.r[20].w[0] + 4u)));  goto L_003FF5E4; }
    set32(c.r[2], ld32((c.r[19].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_003FF5B0; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 3504u)));
    c.budget -= 3;
    { const bool t = c.r[4].sd[0] <= 0; set32(c.r[6], ld32((c.r[19].w[0] + 52u)));  if (t) { goto L_003FF5A4; } }
    c.budget -= 2;
    if (c.r[6].sd[0] <= 0) { c.r[5].d[0] = c.r[2].d[0] + 0ull;  goto L_003FF5E4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FF5A4u); set32(c.r[5], 0u + 1000u);  if (depth < kMaxDepth) unit_00B9(c, 198u, depth + 1u); else { c.pc = 0x003E66B0u; return; } if (c.pc != 0x003FF5A4u) [[unlikely]] return; }
L_003FF5A4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_003FF5E4; } }
    c.budget -= 1;
L_003FF5B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FF5B8u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BD(c, 52u, depth + 1u); else { c.pc = 0x003F45B0u; return; } if (c.pc != 0x003FF5B8u) [[unlikely]] return; }
L_003FF5B8:
    c.r[2].d[0] = c.r[2].sd[0] < 108ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], ld32((c.r[20].w[0] + 4u)));  goto L_003FF5E4; }
    set32(c.r[2], ld32((c.r[20].w[0] + 4u)));
    set32(c.r[3], 0u + 2018u);
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { breakpoint(c, 0x003FF5D0u);  goto L_003FF5D4; }
L_003FF5D4:
    set32(c.r[2], c.r[2].w[0] << 11);
    mmi::div(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
L_003FF5E4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[20].w[0] + 8u)));  if (t) { goto L_003FF618; } }
    c.budget -= 1;
L_003FF5F0:
    set32(c.r[2], ld32((c.r[29].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], ld32((c.r[29].w[0])));  if (t) { goto L_003FF608; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[17].w[0] + 4u)));  if (t) { goto L_003FF618; } }
L_003FF608:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_003FF634; }
    set32(c.r[3], ld32((c.r[18].w[0] + 8u)));
    set32(c.r[5], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 2;
L_003FF618:
    set32(c.r[2], 0u + 1u);
    st32((c.r[16].w[0] + 4u), c.r[5].w[0]);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FF630u); st32((c.r[16].w[0] + 8u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_00BF(c, 438u, depth + 1u); else { c.pc = 0x003FFE88u; return; } if (c.pc != 0x003FF630u) [[unlikely]] return; }
L_003FF630:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_003FF634:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 56u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003FF658:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[5], 0u + 3u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FF680u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C0(c, 245u, depth + 1u); else { c.pc = 0x004028C0u; return; } if (c.pc != 0x003FF680u) [[unlikely]] return; }
L_003FF680:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], 0u + 6u);  if (t) { goto L_003FF6B8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FF694u);  if (depth < kMaxDepth) unit_00C0(c, 20u, depth + 1u); else { c.pc = 0x00400258u; return; } if (c.pc != 0x003FF694u) [[unlikely]] return; }
L_003FF694:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[2].d[0]) { st32((c.r[17].w[0]), 0u);  goto L_003FF6BC; }
    st32((c.r[17].w[0]), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0])));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  if (t) { goto L_003FF6C0; } }
    c.budget -= 1;
L_003FF6B8:
    st32((c.r[17].w[0]), 0u);
    c.budget -= 1;
L_003FF6BC:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003FF6C0:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003FF6D8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[5], 0u + 2u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FF700u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C0(c, 245u, depth + 1u); else { c.pc = 0x004028C0u; return; } if (c.pc != 0x003FF700u) [[unlikely]] return; }
L_003FF700:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], 0u + 5u);  if (t) { goto L_003FF738; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FF714u);  if (depth < kMaxDepth) unit_00C0(c, 20u, depth + 1u); else { c.pc = 0x00400258u; return; } if (c.pc != 0x003FF714u) [[unlikely]] return; }
L_003FF714:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[2].d[0]) { st32((c.r[17].w[0]), 0u);  goto L_003FF73C; }
    st32((c.r[17].w[0]), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0])));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  if (t) { goto L_003FF740; } }
    c.budget -= 1;
L_003FF738:
    st32((c.r[17].w[0]), 0u);
    c.budget -= 1;
L_003FF73C:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003FF740:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003FF758:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FF768u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00C0(c, 245u, depth + 1u); else { c.pc = 0x004028C0u; return; } if (c.pc != 0x003FF768u) [[unlikely]] return; }
L_003FF768:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003FF778:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FF798u); st32((c.r[16].w[0]), 0u);  if (depth < kMaxDepth) unit_00BD(c, 94u, depth + 1u); else { c.pc = 0x003F4A60u; return; } if (c.pc != 0x003FF798u) [[unlikely]] return; }
L_003FF798:
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_003FF7C0; } }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[5].d[0] = c.r[5].d[0] | 341ull;
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003F4840u | kUnwind; return; } [[clang::musttail]] return unit_00BD(c, 82u, depth); }
L_003FF7C0:
    set32(c.r[4], ld32((c.r[17].w[0] + 10928u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FF7CCu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BF(c, 399u, depth + 1u); else { c.pc = 0x003FF7E8u; return; } if (c.pc != 0x003FF7CCu) [[unlikely]] return; }
L_003FF7CC:
    c.r[2].d[0] = 0ull + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003FF7E8:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 9;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[17].w[0]), 0u);  if (t) { goto L_003FF840; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FF814u);  if (depth < kMaxDepth) unit_00BF(c, 377u, depth + 1u); else { c.pc = 0x003FF460u; return; } if (c.pc != 0x003FF814u) [[unlikely]] return; }
L_003FF814:
    set32(c.r[2], ld32((c.r[29].w[0])));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_003FF844; }
    set32(c.r[2], ld32((c.r[16].w[0] + 3500u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_003FF83C; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 3476u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0; c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_003FF844; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_003FF83C:
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.budget -= 1;
L_003FF840:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_003FF844:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003FF858:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    set32(c.r[16], c.r[2].w[0] + 10928u);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 40u), c.r[19].d[0]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FF88Cu); st32((c.r[17].w[0]), 0u);  if (depth < kMaxDepth) unit_00BD(c, 94u, depth + 1u); else { c.pc = 0x003F4A60u; return; } if (c.pc != 0x003FF88Cu) [[unlikely]] return; }
L_003FF88C:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[29].d[0] + 0ull;  if (t) { goto L_003FF8B0; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FF8A4u); c.r[5].d[0] = c.r[5].d[0] | 342ull;  if (depth < kMaxDepth) unit_00BD(c, 82u, depth + 1u); else { c.pc = 0x003F4840u; return; } if (c.pc != 0x003FF8A4u) [[unlikely]] return; }
L_003FF8A4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_003FF8E0; } }
    c.budget -= 1;
L_003FF8B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FF8B8u); set32(c.r[4], ld32((c.r[16].w[0])));  if (depth < kMaxDepth) unit_00BF(c, 399u, depth + 1u); else { c.pc = 0x003FF7E8u; return; } if (c.pc != 0x003FF8B8u) [[unlikely]] return; }
L_003FF8B8:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[29].w[0])));
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003FF8DC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FF8D8u); set32(c.r[4], ld32((c.r[16].w[0])));  if (depth < kMaxDepth) unit_00BF(c, 406u, depth + 1u); else { c.pc = 0x003FF8F8u; return; } if (c.pc != 0x003FF8D8u) [[unlikely]] return; }
L_003FF8D8:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003FF8DC:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_003FF8E0:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003FF8F8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[3].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 3500u)));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_003FF928; } }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { set32(c.r[29], c.r[29].w[0] + 16u);  goto L_003FF948; }
L_003FF928:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FF930u); set32(c.r[4], ld32((c.r[3].w[0] + 3476u)));  if (depth < kMaxDepth) unit_00B9(c, 198u, depth + 1u); else { c.pc = 0x003E66B0u; return; } if (c.pc != 0x003FF930u) [[unlikely]] return; }
L_003FF930:
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003FF948:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[7].w[0]), 0u);  c.pc = t; return; }
L_003FF950:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[2], 0u + 1u);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 40u), c.r[19].d[0]);
    c.r[19].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st32((c.r[18].w[0]), 0u);
    st32((c.r[19].w[0]), c.r[2].w[0]);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FF98Cu); set32(c.r[16], c.r[2].w[0] + 10928u);  if (depth < kMaxDepth) unit_00BD(c, 94u, depth + 1u); else { c.pc = 0x003F4A60u; return; } if (c.pc != 0x003FF98Cu) [[unlikely]] return; }
L_003FF98C:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[29].d[0] + 0ull;  if (t) { goto L_003FF9B0; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FF9A4u); c.r[5].d[0] = c.r[5].d[0] | 343ull;  if (depth < kMaxDepth) unit_00BD(c, 82u, depth + 1u); else { c.pc = 0x003F4840u; return; } if (c.pc != 0x003FF9A4u) [[unlikely]] return; }
L_003FF9A4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_003FF9E0; } }
    c.budget -= 1;
L_003FF9B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FF9B8u); set32(c.r[4], ld32((c.r[16].w[0])));  if (depth < kMaxDepth) unit_00BF(c, 399u, depth + 1u); else { c.pc = 0x003FF7E8u; return; } if (c.pc != 0x003FF9B8u) [[unlikely]] return; }
L_003FF9B8:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[29].w[0])));
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003FF9DC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FF9D8u); set32(c.r[4], ld32((c.r[16].w[0])));  if (depth < kMaxDepth) unit_00BF(c, 414u, depth + 1u); else { c.pc = 0x003FF9F8u; return; } if (c.pc != 0x003FF9D8u) [[unlikely]] return; }
L_003FF9D8:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003FF9DC:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_003FF9E0:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003FF9F8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[3].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[8].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] + 3500u)));
    c.budget -= 11;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_003FFA38; } }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 32u);  goto L_003FFA80; }
L_003FFA38:
    set32(c.r[2], ld32((c.r[3].w[0] + 3476u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] > 0; c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_003FFA50; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0]), 0u);  if (t) { goto L_003FFA60; } }
    c.budget -= 1;
L_003FFA50:
    c.r[4].d[0] = c.r[8].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FFA5Cu); set32(c.r[5], 0u + 1000u);  if (depth < kMaxDepth) unit_00B9(c, 198u, depth + 1u); else { c.pc = 0x003E66B0u; return; } if (c.pc != 0x003FFA5Cu) [[unlikely]] return; }
L_003FFA5C:
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 1;
L_003FFA60:
    set32(c.r[2], 0u + 1000u);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003FFA80:
    set32(c.r[2], 0u + 1000u);
    st32((c.r[6].w[0]), 0u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[7].w[0]), c.r[2].w[0]);  c.pc = t; return; }
L_003FFA90:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FFAB0u); c.r[18].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BD(c, 94u, depth + 1u); else { c.pc = 0x003F4A60u; return; } if (c.pc != 0x003FFAB0u) [[unlikely]] return; }
L_003FFAB0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_003FFAD8; } }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[5].d[0] = c.r[5].d[0] | 344ull;
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003F4840u | kUnwind; return; } [[clang::musttail]] return unit_00BD(c, 82u, depth); }
L_003FFAD8:
    set32(c.r[17], ld32((c.r[16].w[0] + 10928u)));
    c.budget -= 3;
    if (c.r[17].d[0] == 0ull) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_003FFB74; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FFAECu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BF(c, 299u, depth + 1u); else { c.pc = 0x003FE7B0u; return; } if (c.pc != 0x003FFAECu) [[unlikely]] return; }
L_003FFAEC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 47u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_003FFB70; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FFB04u);  if (depth < kMaxDepth) unit_00C0(c, 9u, depth + 1u); else { c.pc = 0x00400090u; return; } if (c.pc != 0x003FFB04u) [[unlikely]] return; }
L_003FFB04:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[17].w[0] + 3492u)));
    set32(c.r[5], 0u + 5u);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_003FFB20; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FFB20u);  if (depth < kMaxDepth) unit_00C0(c, 9u, depth + 1u); else { c.pc = 0x00400090u; return; } if (c.pc != 0x003FFB20u) [[unlikely]] return; }
L_003FFB20:
    set32(c.r[2], ld32((c.r[17].w[0] + 3496u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003FFB38; } }
    set32(c.r[5], 0u + 6u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FFB38u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00C0(c, 9u, depth + 1u); else { c.pc = 0x00400090u; return; } if (c.pc != 0x003FFB38u) [[unlikely]] return; }
L_003FFB38:
    ldl(c.r[2], (c.r[18].w[0] + 7u));
    ldr(c.r[2], (c.r[18].w[0]));
    set32(c.r[3], ld32((c.r[18].w[0] + 8u)));
    sdl(c.r[2], (c.r[16].w[0] + 10939u));
    sdr(c.r[2], (c.r[16].w[0] + 10932u));
    st32((c.r[16].w[0] + 10940u), c.r[3].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    set32(c.r[5], 0u + 13u);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 14;
    { set32(c.r[29], c.r[29].w[0] + 32u);  [[clang::musttail]] return unit_00C0(c, 235u, depth); }
L_003FFB70:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_003FFB74:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003FFB88:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FFBA4u); c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BD(c, 94u, depth + 1u); else { c.pc = 0x003F4A60u; return; } if (c.pc != 0x003FFBA4u) [[unlikely]] return; }
L_003FFBA4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_003FFBC8; } }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[5].d[0] = c.r[5].d[0] | 345ull;
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003F4840u | kUnwind; return; } [[clang::musttail]] return unit_00BD(c, 82u, depth); }
L_003FFBC8:
    set32(c.r[3], ld32((c.r[16].w[0] + 10928u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_003FFBE8; }
    st32((c.r[3].w[0] + 3504u), c.r[17].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FFBE0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BF(c, 438u, depth + 1u); else { c.pc = 0x003FFE88u; return; } if (c.pc != 0x003FFBE0u) [[unlikely]] return; }
L_003FFBE0:
    c.r[2].d[0] = 0ull + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 2;
L_003FFBE8:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003FFBF8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FFC1Cu); c.r[18].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BD(c, 94u, depth + 1u); else { c.pc = 0x003F4A60u; return; } if (c.pc != 0x003FFC1Cu) [[unlikely]] return; }
L_003FFC1C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[5].d[0] | 346ull;  if (t) { goto L_003FFC48; } }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003F4840u | kUnwind; return; } [[clang::musttail]] return unit_00BD(c, 82u, depth); }
L_003FFC48:
    set32(c.r[3], ld32((c.r[16].w[0] + 10928u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003FFC64; } }
    st32((c.r[3].w[0] + 3512u), c.r[17].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FFC60u); st32((c.r[3].w[0] + 3508u), c.r[18].w[0]);  if (depth < kMaxDepth) unit_00BF(c, 438u, depth + 1u); else { c.pc = 0x003FFE88u; return; } if (c.pc != 0x003FFC60u) [[unlikely]] return; }
L_003FFC60:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003FFC64:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003FFC80:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FFC9Cu); c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BD(c, 94u, depth + 1u); else { c.pc = 0x003F4A60u; return; } if (c.pc != 0x003FFC9Cu) [[unlikely]] return; }
L_003FFC9C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_003FFCC0; } }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[5].d[0] = c.r[5].d[0] | 347ull;
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003F4840u | kUnwind; return; } [[clang::musttail]] return unit_00BD(c, 82u, depth); }
L_003FFCC0:
    set32(c.r[3], ld32((c.r[16].w[0] + 10928u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_003FFCE0; }
    st32((c.r[3].w[0] + 3516u), c.r[17].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FFCD8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BF(c, 438u, depth + 1u); else { c.pc = 0x003FFE88u; return; } if (c.pc != 0x003FFCD8u) [[unlikely]] return; }
L_003FFCD8:
    c.r[2].d[0] = 0ull + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 2;
L_003FFCE0:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003FFCF0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FFD0Cu); c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BD(c, 94u, depth + 1u); else { c.pc = 0x003F4A60u; return; } if (c.pc != 0x003FFD0Cu) [[unlikely]] return; }
L_003FFD0C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_003FFD30; } }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[5].d[0] = c.r[5].d[0] | 348ull;
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003F4840u | kUnwind; return; } [[clang::musttail]] return unit_00BD(c, 82u, depth); }
L_003FFD30:
    set32(c.r[4], ld32((c.r[16].w[0] + 10928u)));
    c.budget -= 3;
    if (c.r[4].d[0] != 0ull) { st32((c.r[4].w[0] + 3520u), c.r[17].w[0]);  goto L_003FFD3C; }
L_003FFD3C:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003FFD50:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[20].d[0]);
    set32(c.r[20], c.r[18].w[0] + 3372u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[17], c.r[18].w[0] + 10932u);
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 40u), c.r[31].d[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FFD80u); set32(c.r[16], ld32((c.r[18].w[0] + 10928u)));  if (depth < kMaxDepth) unit_00BC(c, 296u, depth + 1u); else { c.pc = 0x003F2A00u; return; } if (c.pc != 0x003FFD80u) [[unlikely]] return; }
L_003FFD80:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_003FFE24; }
    set32(c.r[2], ld32((c.r[16].w[0] + 3480u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] > 0; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_003FFDD0; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], 0u - 3u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_003FFDA8; } }
    set32(c.r[17], ld32((c.r[16].w[0] + 3520u)));
    c.budget -= 1;
L_003FFDA8:
    c.budget -= 2;
    if (c.r[17].sd[0] < 0) { set32(c.r[2], ld32((c.r[16].w[0] + 3484u)));  goto L_003FFDD4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FFDB8u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BF(c, 437u, depth + 1u); else { c.pc = 0x003FFE40u; return; } if (c.pc != 0x003FFDB8u) [[unlikely]] return; }
L_003FFDB8:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], c.r[17].w[0] + c.r[3].w[0]);  if (t) { goto L_003FFDD0; } }
    set32(c.r[19], 0u + 1u);
    st32((c.r[16].w[0] + 3480u), c.r[2].w[0]);
    c.budget -= 2;
L_003FFDD0:
    set32(c.r[2], ld32((c.r[16].w[0] + 3484u)));
    c.budget -= 1;
L_003FFDD4:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] > 0;  if (t) { goto L_003FFDF8; } }
    set32(c.r[2], ld32((c.r[20].w[0] + 32u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_003FFDF8; } }
    st32((c.r[16].w[0] + 3484u), c.r[2].w[0]);
    set32(c.r[19], 0u + 1u);
    set32(c.r[2], ld32((c.r[20].w[0] + 36u)));
    st32((c.r[16].w[0] + 3488u), c.r[2].w[0]);
    c.budget -= 4;
L_003FFDF8:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_003FFE20; } }
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 40u));
    c.budget -= 8;
    { set32(c.r[29], c.r[29].w[0] + 48u);  goto L_003FFE88; }
L_003FFE20:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_003FFE24:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 40u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003FFE40:
    set32(c.r[5], c.r[4].w[0] + 6816u);
    set32(c.r[6], 0u - 1u);
    set32(c.r[3], ld32((c.r[5].w[0] + 20u)));
    set32(c.r[2], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 4496u)));
    set32(c.r[2], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[5].w[0] + 32u)));
    c.r[3].d[0] = c.r[2].sd[0] < 0ll ? 1ull : 0ull;
    c.budget -= 18;
    { const std::uint32_t t = c.r[31].w[0]; if (c.r[3].d[0] != 0) c.r[2].d[0] = c.r[6].d[0];  c.pc = t; return; }
L_003FFE88:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    set32(c.r[16], ld32((c.r[4].w[0] + 10928u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 3516u)));
    c.budget -= 7;
    if (c.r[2].sd[0] > 0) { st32((c.r[16].w[0] + 3476u), c.r[2].w[0]);  goto L_003FFEFC; }
    set32(c.r[4], ld32((c.r[16].w[0] + 3504u)));
    set32(c.r[6], ld32((c.r[16].w[0] + 3508u)));
    c.budget -= 4;
    { const bool t = c.r[4].sd[0] <= 0; set32(c.r[5], ld32((c.r[16].w[0] + 3512u)));  if (t) { goto L_003FFEBC; } }
    c.budget -= 2;
    { const bool t = c.r[6].sd[0] > 0;  if (t) { goto L_003FFEF0; } }
L_003FFEBC:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    if (c.r[2].sd[0] > 0) { st32((c.r[16].w[0] + 3476u), c.r[2].w[0]);  goto L_003FFEFC; }
    c.budget -= 2;
    if (c.r[4].sd[0] <= 0) { set32(c.r[4], ld32((c.r[16].w[0] + 3480u)));  goto L_003FFED0; }
L_003FFED0:
    c.budget -= 2;
    { const bool t = c.r[6].sd[0] > 0;  if (t) { goto L_003FFEE0; } }
    set32(c.r[6], ld32((c.r[16].w[0] + 3484u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 3488u)));
    c.budget -= 2;
L_003FFEE0:
    c.budget -= 2;
    if (c.r[4].sd[0] <= 0) { st32((c.r[16].w[0] + 3476u), c.r[2].w[0]);  goto L_003FFEFC; }
    c.budget -= 2;
    if (c.r[6].sd[0] <= 0) { st32((c.r[16].w[0] + 3476u), c.r[2].w[0]);  goto L_003FFEFC; }
L_003FFEF0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FFEF8u);  if (depth < kMaxDepth) unit_00B9(c, 198u, depth + 1u); else { c.pc = 0x003E66B0u; return; } if (c.pc != 0x003FFEF8u) [[unlikely]] return; }
L_003FFEF8:
    st32((c.r[16].w[0] + 3476u), c.r[2].w[0]);
    c.budget -= 1;
L_003FFEFC:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003FFF10:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003FE028u | kUnwind; return; } goto L_003FE028; }
L_003FFF28:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FFF3Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BD(c, 94u, depth + 1u); else { c.pc = 0x003F4A60u; return; } if (c.pc != 0x003FFF3Cu) [[unlikely]] return; }
L_003FFF3C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[5].d[0] | 273ull;  if (t) { goto L_003FFF54; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FFF54u);  if (depth < kMaxDepth) unit_00BD(c, 82u, depth + 1u); else { c.pc = 0x003F4840u; return; } if (c.pc != 0x003FFF54u) [[unlikely]] return; }
L_003FFF54:
    set32(c.r[2], ld32((c.r[16].w[0] + 72u)));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003FFF68:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 9;
    { const bool t = c.r[16].d[0] != 0ull; st64((c.r[29].w[0] + 24u), c.r[31].d[0]);  if (t) { goto L_003FFFB0; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FFF98u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C0(c, 4u, depth + 1u); else { c.pc = 0x00400020u; return; } if (c.pc != 0x003FFF98u) [[unlikely]] return; }
L_003FFF98:
    set32(c.r[2], c.r[17].w[0] << 2);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00450000u);
    set32(c.r[1], c.r[1].w[0] + c.r[2].w[0]);
    st32((c.r[1].w[0] - 17416u), c.r[18].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0]));  if (t) { [[clang::musttail]] return unit_00C0(c, 2u, depth); } }
L_003FFFB0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FFFB8u);  if (depth < kMaxDepth) unit_00BD(c, 94u, depth + 1u); else { c.pc = 0x003F4A60u; return; } if (c.pc != 0x003FFFB8u) [[unlikely]] return; }
L_003FFFB8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_003FFFE0; } }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[5].d[0] = c.r[5].d[0] | 274ull;
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003F4840u | kUnwind; return; } [[clang::musttail]] return unit_00BD(c, 82u, depth); }
L_003FFFE0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FFFF0u); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C0(c, 9u, depth + 1u); else { c.pc = 0x00400090u; return; } if (c.pc != 0x003FFFF0u) [[unlikely]] return; }
L_003FFFF0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00400000u); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C0(c, 11u, depth + 1u); else { c.pc = 0x004000E0u; return; } if (c.pc != 0x00400000u) [[unlikely]] return; }
    [[clang::musttail]] return unit_00C0(c, 1u, depth);
}

}
