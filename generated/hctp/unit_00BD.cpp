#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_00BD[4096] = {
    1, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 4, 0, 0, 5, 0, 0, 0, 6, 0, 0, 0, 0, 7, 0, 0, 0, 0, 8, 0, 0, 0, 0, 9, 0, 0, 0, 0, 10, 0, 0, 0,
    11, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 14, 0, 0, 0, 0, 15, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 19, 0, 0, 0, 0, 20,
    0, 0, 0, 0, 21, 0, 0, 0, 0, 22, 0, 0, 0, 0, 23, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 26, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 33, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 40, 0, 0, 0,
    0, 0, 41, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 46, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0,
    50, 0, 0, 0, 0, 0, 0, 0, 0, 0, 51, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 54, 0, 0, 0, 55, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 58, 0, 0, 0, 59,
    0, 60, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 64, 0, 0,
    65, 0, 66, 0, 67, 0, 68, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 70, 0, 0, 0, 71, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 72, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 74, 0, 75, 0, 76, 0, 77, 0, 78, 0, 79, 0, 0, 0, 0,
    0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0,
    0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 87, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0,
    0, 0, 91, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0, 0,
    95, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 0, 97, 0, 0, 0, 98, 0, 0, 0, 99, 0, 0, 0, 0, 0, 100, 0, 101, 0, 102, 0,
    0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 104, 0, 105, 0, 106, 0, 0, 0, 0, 107, 0, 0, 0, 0, 108, 0, 109, 0, 110, 0, 111, 0,
    112, 0, 113, 0, 114, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 117, 0,
    0, 0, 0, 0, 0, 0, 118, 0, 119, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 121, 0, 0, 0, 122, 0, 123, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 125, 0, 126, 0, 0, 0, 127, 0, 0, 0, 128, 0, 0, 0, 0, 0,
    129, 0, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 134, 0, 135, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0,
    0, 0, 137, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 141, 0, 0, 142, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 0,
    147, 0, 0, 0, 148, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0,
    0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 155, 0, 0, 156, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 160, 0, 0, 0, 0, 161, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 162, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 165,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 166, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    167, 0, 0, 0, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 175, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 177, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0, 0,
    180, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0, 0, 183, 0, 0, 0, 0, 0, 184,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 185, 0, 0, 0, 0, 0, 0, 0, 0, 186, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 187, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0,
    0, 190, 0, 0, 0, 0, 0, 0, 0, 191, 0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 0, 196, 0,
    0, 0, 197, 0, 0, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 199, 0, 0, 0, 0, 0, 0, 0,
    200, 0, 0, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 203, 0, 0, 0, 204, 0, 0, 0, 0, 0, 205, 0, 0, 0, 0, 0, 0, 206, 0, 207, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 209, 0, 0, 0, 0, 210, 0, 0, 0, 211,
    0, 0, 0, 0, 212, 0, 0, 0, 0, 0, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 214, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 215, 0, 0, 0, 216, 0, 0, 0, 217, 0, 0, 0, 0, 0, 0, 0, 0, 218, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 219, 0, 0, 0, 220, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 0, 0, 222, 0, 0, 0, 0, 0, 223, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 224, 0, 0, 0, 0, 0, 0, 0, 0, 0, 225, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 226, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 227, 0, 0, 0, 0, 0, 0, 0,
    228, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 229, 0, 0, 0, 0, 0, 0, 0, 0, 230, 0, 0, 0, 231,
    0, 0, 0, 0, 0, 0, 232, 0, 0, 0, 0, 0, 0, 233, 0, 234, 0, 235, 0, 236, 0, 237, 0, 0, 0, 0, 238, 0, 0, 0, 0, 0,
    0, 0, 239, 0, 0, 0, 0, 240, 0, 0, 0, 0, 241, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 242, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 243, 0, 0, 0, 244, 0, 0, 0, 0, 245, 0, 0, 0, 0, 0, 0, 0, 0, 246, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 247, 0, 0, 0, 248, 0, 0, 0, 0, 0, 0, 0, 0, 249, 0, 0, 0, 0, 250, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 251, 0, 0, 0, 0, 0, 252, 0, 0, 0, 0, 0, 0, 0, 253, 0, 0, 0, 0, 0, 0, 0, 254, 0, 0, 0, 0, 0, 255, 0,
    0, 256, 0, 0, 0, 0, 0, 0, 0, 0, 257, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 258, 0, 0, 259, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 260, 0, 0, 0, 0, 261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 262, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 263, 0, 0, 0, 0, 0, 0, 0, 264, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 265, 0, 0, 0, 0, 266, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 267, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 268, 0, 0, 0, 0, 0, 0, 0, 0, 269, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 270, 0, 0, 0, 0, 0, 0, 271, 0, 0, 0, 0, 0, 0, 0, 0, 0, 272, 0, 273, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 274, 0, 0, 0, 275, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 276, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 277, 0, 0, 0, 0, 0, 0, 0, 0, 0, 278, 0, 0, 0, 0, 279, 280, 0, 0, 0,
    0, 0, 0, 281, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 282, 0, 0, 0, 0, 0, 283, 0, 284, 0, 285, 0, 286, 0, 287, 0,
    0, 0, 0, 0, 0, 0, 288, 0, 0, 0, 0, 0, 0, 0, 289, 0, 0, 0, 0, 0, 0, 0, 290, 0, 0, 0, 0, 0, 0, 0, 291, 0,
    0, 0, 0, 0, 0, 0, 292, 0, 0, 0, 0, 0, 0, 0, 0, 293, 0, 294, 0, 0, 0, 0, 295, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 296, 0, 297, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 298, 0, 0, 0, 0,
    0, 0, 299, 0, 0, 0, 0, 0, 0, 0, 300, 0, 0, 0, 0, 0, 0, 0, 301, 0, 0, 0, 0, 0, 0, 0, 0, 302, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 303, 0, 0, 0, 304, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 305, 0, 0, 0, 0, 0, 0, 0, 306, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 307, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 308, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 309, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 310, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 311, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 312, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 313, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 314, 0, 0, 0, 0, 0, 0, 0, 315, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    316, 0, 0, 0, 0, 0, 0, 0, 317, 0, 0, 0, 0, 318, 0, 0, 0, 0, 0, 319, 0, 0, 0, 0, 0, 0, 0, 0, 320, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 321, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 322, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 323, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 324, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 325, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 326, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 327, 0, 0, 0, 328, 0, 329, 0, 330, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 331, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 332, 0, 0,
    0, 0, 333, 0, 0, 0, 0, 334, 0, 0, 0, 0, 0, 0, 335, 0, 336, 0, 0, 0, 337, 0, 0, 0, 338, 0, 0, 0, 0, 0, 339, 0,
    0, 0, 0, 0, 0, 340, 0, 0, 0, 341, 0, 0, 0, 0, 0, 0, 342, 0, 343, 0, 0, 344, 0, 345, 0, 0, 0, 0, 0, 0, 346, 0,
    0, 0, 0, 0, 347, 0, 0, 0, 348, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 349, 0, 0, 0, 0, 0,
    350, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 351, 0, 0, 0, 0, 352, 0, 0, 0, 353, 0, 0, 0, 0, 354, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 355, 0, 0, 0, 0, 356, 0, 0, 0, 357, 0, 0, 0, 358, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 359, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 360, 0, 0, 0, 0, 0, 0, 361, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 362, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 363, 0, 0, 0, 0, 0, 0, 0, 0, 364, 0, 0, 0, 0, 0, 0, 0, 365, 0,
    0, 0, 366, 0, 0, 0, 367, 0, 0, 0, 0, 0, 0, 0, 0, 0, 368, 0, 0, 0, 0, 0, 0, 0, 0, 0, 369, 0, 0, 0, 0, 0,
    0, 0, 370, 0, 0, 0, 0, 0, 371, 0, 0, 0, 0, 0, 0, 0, 0, 0, 372, 0, 0, 0, 0, 0, 0, 0, 0, 373, 0, 0, 0, 0,
    0, 0, 0, 0, 374, 0, 0, 0, 0, 0, 0, 0, 375, 0, 0, 0, 0, 0, 376, 0, 0, 377, 0, 0, 0, 0, 0, 0, 378, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 379, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 380, 0, 0, 0, 0, 0, 0, 0, 381,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 382, 0, 0, 0, 383, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 384, 0, 0, 0, 0, 0, 385, 0, 0, 0, 0, 386, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 387, 0, 0, 0, 0, 0, 0, 0, 388, 0, 0, 0, 0,
    0, 0, 389, 0, 0, 0, 0, 0, 0, 0, 0, 0, 390, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 391, 0, 0, 0, 0, 392, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 393, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 394, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 395, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 396, 0, 0, 0, 0, 0, 0, 0, 0, 397, 0, 0, 0, 398, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 399, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 400, 0, 0, 0, 0, 401, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 402, 0,
    0, 0, 0, 0, 403, 0, 0, 0, 404, 0, 405, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 406, 0, 0, 0, 0, 407, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 408, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 409, 0, 0, 0,
    0, 0, 410, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 411, 0, 0, 0, 0, 0, 412, 0, 0, 0,
    413, 0, 414, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 415, 0, 0, 0, 0, 416, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 417, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 418, 0, 0, 0, 419, 0, 0, 0, 0, 420,
    0, 0, 0, 0, 421, 0, 0, 0, 0, 0, 0, 0, 0, 422, 0, 0, 0, 0, 0, 0, 0, 423, 0, 0, 0, 0, 424, 0, 425, 0, 0, 0,
    426, 0, 0, 0, 0, 0, 427, 0, 0, 0, 428, 0, 0, 0, 0, 0, 429, 0, 0, 0, 430, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    431, 0, 0, 0, 0, 0, 0, 432, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 433, 0, 0, 0, 434, 0, 0, 0, 435, 0, 0,
    0, 0, 0, 0, 436, 0, 0, 0, 0, 0, 0, 437, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 438, 0, 0, 0, 0, 0, 0, 439,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 440, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 441, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 442, 0, 0, 0, 0, 0, 0, 443,
    0, 0, 0, 0, 0, 444, 0, 0, 0, 0, 0, 0, 445, 0, 0, 0, 0, 0, 0, 0, 0, 0, 446, 0, 0, 0, 447, 0, 0, 0, 448, 0,
    0, 0, 0, 0, 0, 449, 0, 0, 0, 0, 450, 0, 0, 0, 451, 0, 0, 0, 0, 0, 452, 0, 0, 453, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_00BD(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_003F4000;
    case 2u: goto L_003F4010;
    case 3u: goto L_003F4054;
    case 4u: goto L_003F4084;
    case 5u: goto L_003F4090;
    case 6u: goto L_003F40A0;
    case 7u: goto L_003F40B4;
    case 8u: goto L_003F40C8;
    case 9u: goto L_003F40DC;
    case 10u: goto L_003F40F0;
    case 11u: goto L_003F4100;
    case 12u: goto L_003F4120;
    case 13u: goto L_003F4144;
    case 14u: goto L_003F4158;
    case 15u: goto L_003F416C;
    case 16u: goto L_003F4194;
    case 17u: goto L_003F41B0;
    case 18u: goto L_003F41D4;
    case 19u: goto L_003F41E8;
    case 20u: goto L_003F41FC;
    case 21u: goto L_003F4210;
    case 22u: goto L_003F4224;
    case 23u: goto L_003F4238;
    case 24u: goto L_003F424C;
    case 25u: goto L_003F4268;
    case 26u: goto L_003F4298;
    case 27u: goto L_003F42A4;
    case 28u: goto L_003F42E0;
    case 29u: goto L_003F4310;
    case 30u: goto L_003F4328;
    case 31u: goto L_003F4340;
    case 32u: goto L_003F4358;
    case 33u: goto L_003F4378;
    case 34u: goto L_003F43BC;
    case 35u: goto L_003F43D4;
    case 36u: goto L_003F43EC;
    case 37u: goto L_003F4414;
    case 38u: goto L_003F4428;
    case 39u: goto L_003F4458;
    case 40u: goto L_003F4470;
    case 41u: goto L_003F4488;
    case 42u: goto L_003F44A0;
    case 43u: goto L_003F44B8;
    case 44u: goto L_003F44D0;
    case 45u: goto L_003F44E8;
    case 46u: goto L_003F4510;
    case 47u: goto L_003F4524;
    case 48u: goto L_003F4548;
    case 49u: goto L_003F4560;
    case 50u: goto L_003F4580;
    case 51u: goto L_003F45A8;
    case 52u: goto L_003F45B0;
    case 53u: goto L_003F45E8;
    case 54u: goto L_003F4610;
    case 55u: goto L_003F4620;
    case 56u: goto L_003F4630;
    case 57u: goto L_003F4664;
    case 58u: goto L_003F466C;
    case 59u: goto L_003F467C;
    case 60u: goto L_003F4684;
    case 61u: goto L_003F4698;
    case 62u: goto L_003F46C4;
    case 63u: goto L_003F46D8;
    case 64u: goto L_003F46F4;
    case 65u: goto L_003F4700;
    case 66u: goto L_003F4708;
    case 67u: goto L_003F4710;
    case 68u: goto L_003F4718;
    case 69u: goto L_003F4744;
    case 70u: goto L_003F4758;
    case 71u: goto L_003F4768;
    case 72u: goto L_003F4790;
    case 73u: goto L_003F47A4;
    case 74u: goto L_003F47C4;
    case 75u: goto L_003F47CC;
    case 76u: goto L_003F47D4;
    case 77u: goto L_003F47DC;
    case 78u: goto L_003F47E4;
    case 79u: goto L_003F47EC;
    case 80u: goto L_003F4810;
    case 81u: goto L_003F4828;
    case 82u: goto L_003F4840;
    case 83u: goto L_003F4874;
    case 84u: goto L_003F4888;
    case 85u: goto L_003F48B0;
    case 86u: goto L_003F48E4;
    case 87u: goto L_003F48F0;
    case 88u: goto L_003F4920;
    case 89u: goto L_003F4930;
    case 90u: goto L_003F4968;
    case 91u: goto L_003F4988;
    case 92u: goto L_003F4998;
    case 93u: goto L_003F49F8;
    case 94u: goto L_003F4A60;
    case 95u: goto L_003F4A80;
    case 96u: goto L_003F4A98;
    case 97u: goto L_003F4AB0;
    case 98u: goto L_003F4AC0;
    case 99u: goto L_003F4AD0;
    case 100u: goto L_003F4AE8;
    case 101u: goto L_003F4AF0;
    case 102u: goto L_003F4AF8;
    case 103u: goto L_003F4B10;
    case 104u: goto L_003F4B28;
    case 105u: goto L_003F4B30;
    case 106u: goto L_003F4B38;
    case 107u: goto L_003F4B4C;
    case 108u: goto L_003F4B60;
    case 109u: goto L_003F4B68;
    case 110u: goto L_003F4B70;
    case 111u: goto L_003F4B78;
    case 112u: goto L_003F4B80;
    case 113u: goto L_003F4B88;
    case 114u: goto L_003F4B90;
    case 115u: goto L_003F4BB0;
    case 116u: goto L_003F4BD8;
    case 117u: goto L_003F4BF8;
    case 118u: goto L_003F4C18;
    case 119u: goto L_003F4C20;
    case 120u: goto L_003F4C54;
    case 121u: goto L_003F4CD0;
    case 122u: goto L_003F4CE0;
    case 123u: goto L_003F4CE8;
    case 124u: goto L_003F4D14;
    case 125u: goto L_003F4D40;
    case 126u: goto L_003F4D48;
    case 127u: goto L_003F4D58;
    case 128u: goto L_003F4D68;
    case 129u: goto L_003F4D80;
    case 130u: goto L_003F4D98;
    case 131u: goto L_003F4DB8;
    case 132u: goto L_003F4DD4;
    case 133u: goto L_003F4DF0;
    case 134u: goto L_003F4E28;
    case 135u: goto L_003F4E30;
    case 136u: goto L_003F4E68;
    case 137u: goto L_003F4E88;
    case 138u: goto L_003F4EC0;
    case 139u: goto L_003F4EEC;
    case 140u: goto L_003F4F28;
    case 141u: goto L_003F4F3C;
    case 142u: goto L_003F4F48;
    case 143u: goto L_003F4F90;
    case 144u: goto L_003F4FAC;
    case 145u: goto L_003F4FC0;
    case 146u: goto L_003F4FE8;
    case 147u: goto L_003F5000;
    case 148u: goto L_003F5010;
    case 149u: goto L_003F5028;
    case 150u: goto L_003F5050;
    case 151u: goto L_003F5074;
    case 152u: goto L_003F5098;
    case 153u: goto L_003F50E8;
    case 154u: goto L_003F5138;
    case 155u: goto L_003F5150;
    case 156u: goto L_003F515C;
    case 157u: goto L_003F5194;
    case 158u: goto L_003F51C8;
    case 159u: goto L_003F51D8;
    case 160u: goto L_003F5208;
    case 161u: goto L_003F521C;
    case 162u: goto L_003F5268;
    case 163u: goto L_003F5290;
    case 164u: goto L_003F52E8;
    case 165u: goto L_003F52FC;
    case 166u: goto L_003F5328;
    case 167u: goto L_003F5380;
    case 168u: goto L_003F53A4;
    case 169u: goto L_003F53F0;
    case 170u: goto L_003F5420;
    case 171u: goto L_003F5440;
    case 172u: goto L_003F5460;
    case 173u: goto L_003F54A8;
    case 174u: goto L_003F54E4;
    case 175u: goto L_003F54F8;
    case 176u: goto L_003F55D8;
    case 177u: goto L_003F5620;
    case 178u: goto L_003F5650;
    case 179u: goto L_003F566C;
    case 180u: goto L_003F5680;
    case 181u: goto L_003F5728;
    case 182u: goto L_003F574C;
    case 183u: goto L_003F5764;
    case 184u: goto L_003F577C;
    case 185u: goto L_003F57B0;
    case 186u: goto L_003F57D4;
    case 187u: goto L_003F580C;
    case 188u: goto L_003F5838;
    case 189u: goto L_003F5868;
    case 190u: goto L_003F5884;
    case 191u: goto L_003F58A4;
    case 192u: goto L_003F58B8;
    case 193u: goto L_003F58D8;
    case 194u: goto L_003F592C;
    case 195u: goto L_003F5958;
    case 196u: goto L_003F5978;
    case 197u: goto L_003F5988;
    case 198u: goto L_003F59B0;
    case 199u: goto L_003F59E0;
    case 200u: goto L_003F5A00;
    case 201u: goto L_003F5A24;
    case 202u: goto L_003F5A58;
    case 203u: goto L_003F5A84;
    case 204u: goto L_003F5A94;
    case 205u: goto L_003F5AAC;
    case 206u: goto L_003F5AC8;
    case 207u: goto L_003F5AD0;
    case 208u: goto L_003F5B18;
    case 209u: goto L_003F5B58;
    case 210u: goto L_003F5B6C;
    case 211u: goto L_003F5B7C;
    case 212u: goto L_003F5B90;
    case 213u: goto L_003F5BB8;
    case 214u: goto L_003F5BF8;
    case 215u: goto L_003F5C2C;
    case 216u: goto L_003F5C3C;
    case 217u: goto L_003F5C4C;
    case 218u: goto L_003F5C70;
    case 219u: goto L_003F5C98;
    case 220u: goto L_003F5CA8;
    case 221u: goto L_003F5CBC;
    case 222u: goto L_003F5CE0;
    case 223u: goto L_003F5CF8;
    case 224u: goto L_003F5D50;
    case 225u: goto L_003F5D78;
    case 226u: goto L_003F5DB0;
    case 227u: goto L_003F5DE0;
    case 228u: goto L_003F5E00;
    case 229u: goto L_003F5E48;
    case 230u: goto L_003F5E6C;
    case 231u: goto L_003F5E7C;
    case 232u: goto L_003F5E98;
    case 233u: goto L_003F5EB4;
    case 234u: goto L_003F5EBC;
    case 235u: goto L_003F5EC4;
    case 236u: goto L_003F5ECC;
    case 237u: goto L_003F5ED4;
    case 238u: goto L_003F5EE8;
    case 239u: goto L_003F5F08;
    case 240u: goto L_003F5F1C;
    case 241u: goto L_003F5F30;
    case 242u: goto L_003F5F70;
    case 243u: goto L_003F5F98;
    case 244u: goto L_003F5FA8;
    case 245u: goto L_003F5FBC;
    case 246u: goto L_003F5FE0;
    case 247u: goto L_003F600C;
    case 248u: goto L_003F601C;
    case 249u: goto L_003F6040;
    case 250u: goto L_003F6054;
    case 251u: goto L_003F6088;
    case 252u: goto L_003F60A0;
    case 253u: goto L_003F60C0;
    case 254u: goto L_003F60E0;
    case 255u: goto L_003F60F8;
    case 256u: goto L_003F6104;
    case 257u: goto L_003F6128;
    case 258u: goto L_003F6168;
    case 259u: goto L_003F6174;
    case 260u: goto L_003F61A8;
    case 261u: goto L_003F61BC;
    case 262u: goto L_003F6218;
    case 263u: goto L_003F6244;
    case 264u: goto L_003F6264;
    case 265u: goto L_003F62B0;
    case 266u: goto L_003F62C4;
    case 267u: goto L_003F6368;
    case 268u: goto L_003F6390;
    case 269u: goto L_003F63B4;
    case 270u: goto L_003F6404;
    case 271u: goto L_003F6420;
    case 272u: goto L_003F6448;
    case 273u: goto L_003F6450;
    case 274u: goto L_003F6490;
    case 275u: goto L_003F64A0;
    case 276u: goto L_003F64E8;
    case 277u: goto L_003F6530;
    case 278u: goto L_003F6558;
    case 279u: goto L_003F656C;
    case 280u: goto L_003F6570;
    case 281u: goto L_003F658C;
    case 282u: goto L_003F65C0;
    case 283u: goto L_003F65D8;
    case 284u: goto L_003F65E0;
    case 285u: goto L_003F65E8;
    case 286u: goto L_003F65F0;
    case 287u: goto L_003F65F8;
    case 288u: goto L_003F6618;
    case 289u: goto L_003F6638;
    case 290u: goto L_003F6658;
    case 291u: goto L_003F6678;
    case 292u: goto L_003F6698;
    case 293u: goto L_003F66BC;
    case 294u: goto L_003F66C4;
    case 295u: goto L_003F66D8;
    case 296u: goto L_003F6720;
    case 297u: goto L_003F6728;
    case 298u: goto L_003F676C;
    case 299u: goto L_003F6788;
    case 300u: goto L_003F67A8;
    case 301u: goto L_003F67C8;
    case 302u: goto L_003F67EC;
    case 303u: goto L_003F6818;
    case 304u: goto L_003F6828;
    case 305u: goto L_003F68B8;
    case 306u: goto L_003F68D8;
    case 307u: goto L_003F6948;
    case 308u: goto L_003F6988;
    case 309u: goto L_003F69C8;
    case 310u: goto L_003F6A68;
    case 311u: goto L_003F6AF8;
    case 312u: goto L_003F6B28;
    case 313u: goto L_003F6B70;
    case 314u: goto L_003F6BB0;
    case 315u: goto L_003F6BD0;
    case 316u: goto L_003F6C00;
    case 317u: goto L_003F6C20;
    case 318u: goto L_003F6C34;
    case 319u: goto L_003F6C4C;
    case 320u: goto L_003F6C70;
    case 321u: goto L_003F6CA4;
    case 322u: goto L_003F6CF0;
    case 323u: goto L_003F6D18;
    case 324u: goto L_003F6D44;
    case 325u: goto L_003F6D94;
    case 326u: goto L_003F6E08;
    case 327u: goto L_003F6E58;
    case 328u: goto L_003F6E68;
    case 329u: goto L_003F6E70;
    case 330u: goto L_003F6E78;
    case 331u: goto L_003F6EA4;
    case 332u: goto L_003F6EF4;
    case 333u: goto L_003F6F08;
    case 334u: goto L_003F6F1C;
    case 335u: goto L_003F6F38;
    case 336u: goto L_003F6F40;
    case 337u: goto L_003F6F50;
    case 338u: goto L_003F6F60;
    case 339u: goto L_003F6F78;
    case 340u: goto L_003F6F94;
    case 341u: goto L_003F6FA4;
    case 342u: goto L_003F6FC0;
    case 343u: goto L_003F6FC8;
    case 344u: goto L_003F6FD4;
    case 345u: goto L_003F6FDC;
    case 346u: goto L_003F6FF8;
    case 347u: goto L_003F7010;
    case 348u: goto L_003F7020;
    case 349u: goto L_003F7068;
    case 350u: goto L_003F7080;
    case 351u: goto L_003F70B4;
    case 352u: goto L_003F70C8;
    case 353u: goto L_003F70D8;
    case 354u: goto L_003F70EC;
    case 355u: goto L_003F7130;
    case 356u: goto L_003F7144;
    case 357u: goto L_003F7154;
    case 358u: goto L_003F7164;
    case 359u: goto L_003F7190;
    case 360u: goto L_003F71BC;
    case 361u: goto L_003F71D8;
    case 362u: goto L_003F7204;
    case 363u: goto L_003F7234;
    case 364u: goto L_003F7258;
    case 365u: goto L_003F7278;
    case 366u: goto L_003F7288;
    case 367u: goto L_003F7298;
    case 368u: goto L_003F72C0;
    case 369u: goto L_003F72E8;
    case 370u: goto L_003F7308;
    case 371u: goto L_003F7320;
    case 372u: goto L_003F7348;
    case 373u: goto L_003F736C;
    case 374u: goto L_003F7390;
    case 375u: goto L_003F73B0;
    case 376u: goto L_003F73C8;
    case 377u: goto L_003F73D4;
    case 378u: goto L_003F73F0;
    case 379u: goto L_003F7420;
    case 380u: goto L_003F745C;
    case 381u: goto L_003F747C;
    case 382u: goto L_003F74DC;
    case 383u: goto L_003F74EC;
    case 384u: goto L_003F7534;
    case 385u: goto L_003F754C;
    case 386u: goto L_003F7560;
    case 387u: goto L_003F75CC;
    case 388u: goto L_003F75EC;
    case 389u: goto L_003F7608;
    case 390u: goto L_003F7630;
    case 391u: goto L_003F76B8;
    case 392u: goto L_003F76CC;
    case 393u: goto L_003F7720;
    case 394u: goto L_003F779C;
    case 395u: goto L_003F77D8;
    case 396u: goto L_003F7840;
    case 397u: goto L_003F7864;
    case 398u: goto L_003F7874;
    case 399u: goto L_003F78C8;
    case 400u: goto L_003F790C;
    case 401u: goto L_003F7920;
    case 402u: goto L_003F7978;
    case 403u: goto L_003F7990;
    case 404u: goto L_003F79A0;
    case 405u: goto L_003F79A8;
    case 406u: goto L_003F79D8;
    case 407u: goto L_003F79EC;
    case 408u: goto L_003F7A20;
    case 409u: goto L_003F7A70;
    case 410u: goto L_003F7A88;
    case 411u: goto L_003F7AD8;
    case 412u: goto L_003F7AF0;
    case 413u: goto L_003F7B00;
    case 414u: goto L_003F7B08;
    case 415u: goto L_003F7B40;
    case 416u: goto L_003F7B54;
    case 417u: goto L_003F7B88;
    case 418u: goto L_003F7BD8;
    case 419u: goto L_003F7BE8;
    case 420u: goto L_003F7BFC;
    case 421u: goto L_003F7C10;
    case 422u: goto L_003F7C34;
    case 423u: goto L_003F7C54;
    case 424u: goto L_003F7C68;
    case 425u: goto L_003F7C70;
    case 426u: goto L_003F7C80;
    case 427u: goto L_003F7C98;
    case 428u: goto L_003F7CA8;
    case 429u: goto L_003F7CC0;
    case 430u: goto L_003F7CD0;
    case 431u: goto L_003F7D00;
    case 432u: goto L_003F7D1C;
    case 433u: goto L_003F7D54;
    case 434u: goto L_003F7D64;
    case 435u: goto L_003F7D74;
    case 436u: goto L_003F7D90;
    case 437u: goto L_003F7DAC;
    case 438u: goto L_003F7DE0;
    case 439u: goto L_003F7DFC;
    case 440u: goto L_003F7E30;
    case 441u: goto L_003F7E64;
    case 442u: goto L_003F7EE0;
    case 443u: goto L_003F7EFC;
    case 444u: goto L_003F7F14;
    case 445u: goto L_003F7F30;
    case 446u: goto L_003F7F58;
    case 447u: goto L_003F7F68;
    case 448u: goto L_003F7F78;
    case 449u: goto L_003F7F94;
    case 450u: goto L_003F7FA8;
    case 451u: goto L_003F7FB8;
    case 452u: goto L_003F7FD0;
    case 453u: goto L_003F7FDC;
    default: bad_entry(c, 0x003F4000u); return;
    }
L_003F4000:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; st32((c.r[29].w[0]), c.r[3].w[0]);  if (t) { goto L_003F4108; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F4010u);  if (depth < kMaxDepth) unit_00C1(c, 23u, depth + 1u); else { c.pc = 0x00404320u; return; } if (c.pc != 0x003F4010u) [[unlikely]] return; }
L_003F4010:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 4u)));  if (t) { goto L_003F4024; } }
    st32((c.r[29].w[0] + 4u), 0u);
    st32((c.r[29].w[0] + 8u), 0u);
    set32(c.r[2], ld32((c.r[29].w[0] + 4u)));
    c.budget -= 3;
L_003F4024:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[29].w[0] + 8u)));
    set32(c.r[5], c.r[29].w[0] + 12u);
    set32(c.r[16], c.r[2].w[0] << 1);
    st32((c.r[17].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[16], c.r[16].w[0] + c.r[2].w[0]);
    st32((c.r[17].w[0] + 8u), c.r[3].w[0]);
    set32(c.r[16], c.r[16].w[0] << 3);
    set32(c.r[16], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[16], c.r[16].w[0] << 2);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F4054u); set32(c.r[16], c.r[16].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_00C1(c, 51u, depth + 1u); else { c.pc = 0x00404768u; return; } if (c.pc != 0x003F4054u) [[unlikely]] return; }
L_003F4054:
    set32(c.r[3], ld32((c.r[29].w[0] + 12u)));
    c.r[16].d[0] = c.r[16].sd[0] < 110ll ? 1ull : 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    if (c.r[2].d[0] == 0) c.r[3].d[0] = 0ull;
    set32(c.r[2], 0u - c.r[3].w[0]);
    c.budget -= 8;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[29].w[0] + 12u), c.r[3].w[0]);  if (t) { goto L_003F4078; } }
    st32((c.r[29].w[0] + 12u), c.r[2].w[0]);
    c.budget -= 1;
L_003F4078:
    set32(c.r[2], ld32((c.r[29].w[0] + 12u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F4084u); st32((c.r[17].w[0] + 12u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00BD(c, 12u, depth + 1u); else { c.pc = 0x003F4120u; return; } if (c.pc != 0x003F4084u) [[unlikely]] return; }
L_003F4084:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F4090u); set32(c.r[5], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_00BD(c, 17u, depth + 1u); else { c.pc = 0x003F41B0u; return; } if (c.pc != 0x003F4090u) [[unlikely]] return; }
L_003F4090:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], 0u + 189u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F40A0u); set32(c.r[6], 0u + 189u);  if (depth < kMaxDepth) unit_00BD(c, 25u, depth + 1u); else { c.pc = 0x003F4268u; return; } if (c.pc != 0x003F40A0u) [[unlikely]] return; }
L_003F40A0:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    st32((c.r[17].w[0] + 60u), c.r[2].w[0]);
    set32(c.r[5], 0u + 191u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F40B4u); set32(c.r[6], 0u + 191u);  if (depth < kMaxDepth) unit_00BD(c, 25u, depth + 1u); else { c.pc = 0x003F4268u; return; } if (c.pc != 0x003F40B4u) [[unlikely]] return; }
L_003F40B4:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    st32((c.r[17].w[0] + 64u), c.r[2].w[0]);
    set32(c.r[5], 0u + 192u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F40C8u); set32(c.r[6], 0u + 223u);  if (depth < kMaxDepth) unit_00BD(c, 25u, depth + 1u); else { c.pc = 0x003F4268u; return; } if (c.pc != 0x003F40C8u) [[unlikely]] return; }
L_003F40C8:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    st32((c.r[17].w[0] + 68u), c.r[2].w[0]);
    set32(c.r[5], 0u + 224u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F40DCu); set32(c.r[6], 0u + 239u);  if (depth < kMaxDepth) unit_00BD(c, 25u, depth + 1u); else { c.pc = 0x003F4268u; return; } if (c.pc != 0x003F40DCu) [[unlikely]] return; }
L_003F40DC:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    st32((c.r[17].w[0] + 72u), c.r[2].w[0]);
    set32(c.r[6], c.r[17].w[0] + 76u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F40F0u); set32(c.r[5], ld32((c.r[17].w[0] + 68u)));  if (depth < kMaxDepth) unit_00BD(c, 28u, depth + 1u); else { c.pc = 0x003F42E0u; return; } if (c.pc != 0x003F40F0u) [[unlikely]] return; }
L_003F40F0:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[17].w[0] + 72u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F4100u); set32(c.r[6], c.r[17].w[0] + 92u);  if (depth < kMaxDepth) unit_00BD(c, 33u, depth + 1u); else { c.pc = 0x003F4378u; return; } if (c.pc != 0x003F4100u) [[unlikely]] return; }
L_003F4100:
    set32(c.r[2], 0u + 1u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.budget -= 2;
L_003F4108:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 40u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003F4120:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00400000u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[5], c.r[2].w[0] + 17472u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F4144u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BD(c, 46u, depth + 1u); else { c.pc = 0x003F4510u; return; } if (c.pc != 0x003F4144u) [[unlikely]] return; }
L_003F4144:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00400000u);
    st32((c.r[17].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[5], c.r[5].w[0] + 17544u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F4158u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BD(c, 46u, depth + 1u); else { c.pc = 0x003F4510u; return; } if (c.pc != 0x003F4158u) [[unlikely]] return; }
L_003F4158:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00400000u);
    st32((c.r[17].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[5], c.r[5].w[0] + 17616u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F416Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BD(c, 46u, depth + 1u); else { c.pc = 0x003F4510u; return; } if (c.pc != 0x003F416Cu) [[unlikely]] return; }
L_003F416C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00400000u);
    set32(c.r[3], 0u - 1u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 17688u);
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; st32((c.r[17].w[0] + 24u), c.r[2].w[0]);  if (t) { goto L_003F418C; } }
    set32(c.r[2], 0u + 2u);
    st32((c.r[17].w[0] + 24u), c.r[2].w[0]);
    c.budget -= 2;
L_003F418C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F4194u);  if (depth < kMaxDepth) unit_00BD(c, 46u, depth + 1u); else { c.pc = 0x003F4510u; return; } if (c.pc != 0x003F4194u) [[unlikely]] return; }
L_003F4194:
    st32((c.r[17].w[0] + 28u), c.r[2].w[0]);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003F41B0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00400000u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[5], c.r[2].w[0] + 17992u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F41D4u); c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BD(c, 46u, depth + 1u); else { c.pc = 0x003F4510u; return; } if (c.pc != 0x003F41D4u) [[unlikely]] return; }
L_003F41D4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00400000u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F41E8u); set32(c.r[5], c.r[5].w[0] + 18064u);  if (depth < kMaxDepth) unit_00BD(c, 46u, depth + 1u); else { c.pc = 0x003F4510u; return; } if (c.pc != 0x003F41E8u) [[unlikely]] return; }
L_003F41E8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00400000u);
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F41FCu); set32(c.r[5], c.r[5].w[0] + 18136u);  if (depth < kMaxDepth) unit_00BD(c, 46u, depth + 1u); else { c.pc = 0x003F4510u; return; } if (c.pc != 0x003F41FCu) [[unlikely]] return; }
L_003F41FC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00400000u);
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F4210u); set32(c.r[5], c.r[5].w[0] + 18208u);  if (depth < kMaxDepth) unit_00BD(c, 46u, depth + 1u); else { c.pc = 0x003F4510u; return; } if (c.pc != 0x003F4210u) [[unlikely]] return; }
L_003F4210:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00400000u);
    st32((c.r[16].w[0] + 12u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F4224u); set32(c.r[5], c.r[5].w[0] + 18384u);  if (depth < kMaxDepth) unit_00BD(c, 46u, depth + 1u); else { c.pc = 0x003F4510u; return; } if (c.pc != 0x003F4224u) [[unlikely]] return; }
L_003F4224:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00400000u);
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F4238u); set32(c.r[5], c.r[5].w[0] + 18456u);  if (depth < kMaxDepth) unit_00BD(c, 46u, depth + 1u); else { c.pc = 0x003F4510u; return; } if (c.pc != 0x003F4238u) [[unlikely]] return; }
L_003F4238:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00400000u);
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F424Cu); set32(c.r[5], c.r[5].w[0] + 18528u);  if (depth < kMaxDepth) unit_00BD(c, 46u, depth + 1u); else { c.pc = 0x003F4510u; return; } if (c.pc != 0x003F424Cu) [[unlikely]] return; }
L_003F424C:
    st32((c.r[16].w[0] + 24u), c.r[2].w[0]);
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003F4268:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.r[2].d[0] = c.r[17].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 40u), c.r[31].d[0]);
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull; c.r[18].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003F42C4; } }
    c.r[5].d[0] = c.r[16].d[0] & 255ull;
    c.budget -= 2;
L_003F4298:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F42A4u); c.r[6].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C1(c, 3u, depth + 1u); else { c.pc = 0x00404028u; return; } if (c.pc != 0x003F42A4u) [[unlikely]] return; }
L_003F42A4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], ld32((c.r[29].w[0])));  if (t) { goto L_003F42B4; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003F42C8; } }
L_003F42B4:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[17].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[16].d[0] & 255ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003F4298u | kUnwind; return; } goto L_003F4298; } }
L_003F42C4:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003F42C8:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 40u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003F42E0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 9;
    { const bool t = c.r[16].d[0] == 0ull; st64((c.r[29].w[0] + 24u), c.r[31].d[0]);  if (t) { goto L_003F435C; } }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00400000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F4310u); set32(c.r[6], c.r[6].w[0] + 18912u);  if (depth < kMaxDepth) unit_00BD(c, 48u, depth + 1u); else { c.pc = 0x003F4548u; return; } if (c.pc != 0x003F4310u) [[unlikely]] return; }
L_003F4310:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00400000u);
    st32((c.r[18].w[0]), c.r[2].w[0]);
    set32(c.r[6], c.r[6].w[0] + 19016u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F4328u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BD(c, 48u, depth + 1u); else { c.pc = 0x003F4548u; return; } if (c.pc != 0x003F4328u) [[unlikely]] return; }
L_003F4328:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00400000u);
    st32((c.r[18].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[6], c.r[6].w[0] + 19144u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F4340u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BD(c, 48u, depth + 1u); else { c.pc = 0x003F4548u; return; } if (c.pc != 0x003F4340u) [[unlikely]] return; }
L_003F4340:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00400000u);
    st32((c.r[18].w[0] + 8u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F4358u); set32(c.r[6], c.r[6].w[0] + 19248u);  if (depth < kMaxDepth) unit_00BD(c, 48u, depth + 1u); else { c.pc = 0x003F4548u; return; } if (c.pc != 0x003F4358u) [[unlikely]] return; }
L_003F4358:
    st32((c.r[18].w[0] + 12u), c.r[2].w[0]);
    c.budget -= 1;
L_003F435C:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003F4378:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00400000u);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[6], c.r[2].w[0] + 19352u);
    st64((c.r[29].w[0] + 24u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 40u), c.r[19].d[0]);
    set32(c.r[19], c.r[16].w[0] + 8u);
    st64((c.r[29].w[0] + 48u), c.r[20].d[0]);
    set32(c.r[20], c.r[16].w[0] + 12u);
    st64((c.r[29].w[0] + 56u), c.r[21].d[0]);
    c.r[21].d[0] = c.r[18].d[0] & 255ull;
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F43BCu); c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BD(c, 48u, depth + 1u); else { c.pc = 0x003F4548u; return; } if (c.pc != 0x003F43BCu) [[unlikely]] return; }
L_003F43BC:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00400000u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    set32(c.r[6], c.r[6].w[0] + 19456u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F43D4u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BD(c, 48u, depth + 1u); else { c.pc = 0x003F4548u; return; } if (c.pc != 0x003F43D4u) [[unlikely]] return; }
L_003F43D4:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F43ECu); c.r[7].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C1(c, 85u, depth + 1u); else { c.pc = 0x00404C70u; return; } if (c.pc != 0x003F43ECu) [[unlikely]] return; }
L_003F43EC:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00400000u);
    set32(c.r[6], c.r[6].w[0] + 19736u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], 0u - 1u);  if (t) { goto L_003F440C; } }
    st32((c.r[19].w[0]), c.r[3].w[0]);
    st32((c.r[20].w[0]), c.r[3].w[0]);
    c.budget -= 2;
L_003F440C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F4414u);  if (depth < kMaxDepth) unit_00BD(c, 48u, depth + 1u); else { c.pc = 0x003F4548u; return; } if (c.pc != 0x003F4414u) [[unlikely]] return; }
L_003F4414:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F4428u); c.r[5].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C1(c, 6u, depth + 1u); else { c.pc = 0x00404098u; return; } if (c.pc != 0x003F4428u) [[unlikely]] return; }
L_003F4428:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00400000u);
    set32(c.r[3], ld32((c.r[29].w[0])));
    set32(c.r[6], c.r[6].w[0] + 19848u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    if (c.r[2].d[0] == 0) c.r[3].d[0] = 0ull;
    c.r[2].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    st32((c.r[29].w[0]), c.r[3].w[0]);
    c.budget -= 10;
    { const bool t = c.r[3].d[0] == 0ull; st32((c.r[16].w[0] + 20u), c.r[2].w[0]);  if (t) { goto L_003F44EC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F4458u);  if (depth < kMaxDepth) unit_00BD(c, 48u, depth + 1u); else { c.pc = 0x003F4548u; return; } if (c.pc != 0x003F4458u) [[unlikely]] return; }
L_003F4458:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00400000u);
    st32((c.r[16].w[0] + 24u), c.r[2].w[0]);
    set32(c.r[6], c.r[6].w[0] + 19952u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F4470u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BD(c, 48u, depth + 1u); else { c.pc = 0x003F4548u; return; } if (c.pc != 0x003F4470u) [[unlikely]] return; }
L_003F4470:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00400000u);
    st32((c.r[16].w[0] + 28u), c.r[2].w[0]);
    set32(c.r[6], c.r[6].w[0] + 20056u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F4488u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BD(c, 48u, depth + 1u); else { c.pc = 0x003F4548u; return; } if (c.pc != 0x003F4488u) [[unlikely]] return; }
L_003F4488:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00400000u);
    st32((c.r[16].w[0] + 32u), c.r[2].w[0]);
    set32(c.r[6], c.r[6].w[0] + 20168u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F44A0u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BD(c, 48u, depth + 1u); else { c.pc = 0x003F4548u; return; } if (c.pc != 0x003F44A0u) [[unlikely]] return; }
L_003F44A0:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00400000u);
    st32((c.r[16].w[0] + 36u), c.r[2].w[0]);
    set32(c.r[6], c.r[6].w[0] + 20280u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F44B8u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BD(c, 48u, depth + 1u); else { c.pc = 0x003F4548u; return; } if (c.pc != 0x003F44B8u) [[unlikely]] return; }
L_003F44B8:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00400000u);
    st32((c.r[16].w[0] + 40u), c.r[2].w[0]);
    set32(c.r[6], c.r[6].w[0] + 20384u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F44D0u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BD(c, 48u, depth + 1u); else { c.pc = 0x003F4548u; return; } if (c.pc != 0x003F44D0u) [[unlikely]] return; }
L_003F44D0:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00400000u);
    st32((c.r[16].w[0] + 44u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F44E8u); set32(c.r[6], c.r[6].w[0] + 20504u);  if (depth < kMaxDepth) unit_00BD(c, 48u, depth + 1u); else { c.pc = 0x003F4548u; return; } if (c.pc != 0x003F44E8u) [[unlikely]] return; }
L_003F44E8:
    st32((c.r[16].w[0] + 48u), c.r[2].w[0]);
    c.budget -= 1;
L_003F44EC:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 56u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003F4510:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003F4524u); c.r[5].d[0] = c.r[29].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003F4524u) [[unlikely]] return; }
L_003F4524:
    set32(c.r[4], 0u - 1u);
    set32(c.r[3], ld32((c.r[29].w[0])));
    c.r[2].d[0] = c.r[2].d[0] ^ 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    if (c.r[2].d[0] != 0) c.r[4].d[0] = c.r[3].d[0];
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003F4548:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[5].d[0] = c.r[5].d[0] & 255ull;
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003F4560u); c.r[6].d[0] = c.r[29].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003F4560u) [[unlikely]] return; }
L_003F4560:
    set32(c.r[4], 0u - 1u);
    set32(c.r[3], ld32((c.r[29].w[0])));
    c.r[2].d[0] = c.r[2].d[0] ^ 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    if (c.r[2].d[0] != 0) c.r[4].d[0] = c.r[3].d[0];
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003F4580:
    set32(c.r[5], c.r[4].w[0] + 152u);
    set32(c.r[4], c.r[4].w[0] + 2316u);
    set32(c.r[2], ld32((c.r[5].w[0] + 4u)));
    st32((c.r[4].w[0] + 36u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0] + 8u)));
    st32((c.r[4].w[0] + 40u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[5].w[0] + 12u)));
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 44u), c.r[2].w[0]);  c.pc = t; return; }
L_003F45A8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 2u);  c.pc = t; return; }
L_003F45B0:
    set32(c.r[4], c.r[4].w[0] + 120u);
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003F45E0; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[4], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    c.budget -= 8;
L_003F45E0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003F45E8:
    set32(c.r[3], ld32((c.r[4].w[0] + 120u)));
    set32(c.r[4], c.r[4].w[0] + 212u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_003F4604; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 20u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], ld32((c.r[4].w[0] + 24u)));  goto L_003F4604; }
L_003F4604:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003F4610:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] - 31424u);  c.pc = t; return; }
L_003F4620:
    c.r[2].d[0] = c.r[5].d[0] ^ 11136ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  c.pc = t; return; }
L_003F4630:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[3], c.r[3].w[0] - 14256u);
    set32(c.r[2], c.r[2].w[0] - 31424u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00450000u);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], 0u + 11136u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F4664u); st32((c.r[5].w[0] - 16868u), c.r[4].w[0]);  if (depth < kMaxDepth) unit_00BD(c, 95u, depth + 1u); else { c.pc = 0x003F4A80u; return; } if (c.pc != 0x003F4664u) [[unlikely]] return; }
L_003F4664:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F466Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BD(c, 61u, depth + 1u); else { c.pc = 0x003F4698u; return; } if (c.pc != 0x003F466Cu) [[unlikely]] return; }
L_003F466C:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_003F468C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F467Cu);  if (depth < kMaxDepth) unit_00BD(c, 97u, depth + 1u); else { c.pc = 0x003F4AB0u; return; } if (c.pc != 0x003F467Cu) [[unlikely]] return; }
L_003F467C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F4684u);  if (depth < kMaxDepth) unit_00BD(c, 100u, depth + 1u); else { c.pc = 0x003F4AE8u; return; } if (c.pc != 0x003F4684u) [[unlikely]] return; }
L_003F4684:
    c.r[2].d[0] = 0ull + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 2;
L_003F468C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003F4698:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[5].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00450000u);
    set32(c.r[16], c.r[16].w[0] - 17416u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    set32(c.r[6], 0u + 137u);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F46C4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B8(c, 53u, depth + 1u); else { c.pc = 0x003E0EE8u; return; } if (c.pc != 0x003F46C4u) [[unlikely]] return; }
L_003F46C4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[6], 0u + 400u);
    set32(c.r[5], c.r[5].w[0] - 31008u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F46D8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B8(c, 36u, depth + 1u); else { c.pc = 0x003E0A78u; return; } if (c.pc != 0x003F46D8u) [[unlikely]] return; }
L_003F46D8:
    ldl(c.r[2], (c.r[17].w[0] + 7u));
    ldr(c.r[2], (c.r[17].w[0]));
    sdl(c.r[2], (c.r[16].w[0] + 407u));
    sdr(c.r[2], (c.r[16].w[0] + 400u));
    st32((c.r[16].w[0] + 408u), 0u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F46F4u); set32(c.r[4], c.r[16].w[0] + 412u);  if (depth < kMaxDepth) unit_00BD(c, 80u, depth + 1u); else { c.pc = 0x003F4810u; return; } if (c.pc != 0x003F46F4u) [[unlikely]] return; }
L_003F46F4:
    set32(c.r[4], c.r[16].w[0] + 432u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F4700u); set32(c.r[5], ld32((c.r[17].w[0] + 4u)));  if (depth < kMaxDepth) unit_00C0(c, 35u, depth + 1u); else { c.pc = 0x00400668u; return; } if (c.pc != 0x003F4700u) [[unlikely]] return; }
L_003F4700:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F4708u); set32(c.r[4], c.r[16].w[0] + 444u);  if (depth < kMaxDepth) unit_00BC(c, 168u, depth + 1u); else { c.pc = 0x003F1340u; return; } if (c.pc != 0x003F4708u) [[unlikely]] return; }
L_003F4708:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F4710u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BD(c, 70u, depth + 1u); else { c.pc = 0x003F4758u; return; } if (c.pc != 0x003F4710u) [[unlikely]] return; }
L_003F4710:
    set32(c.r[2], 0u + 7u);
    set32(c.r[16], c.r[16].w[0] + 544u);
    c.budget -= 2;
L_003F4718:
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[16].w[0]), 0u);
    c.budget -= 7;
    { const bool t = c.r[2].sd[0] >= 0; set32(c.r[16], c.r[16].w[0] - 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003F4718u | kUnwind; return; } goto L_003F4718; } }
    set32(c.r[5], ld32((c.r[17].w[0])));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00450000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F4744u); set32(c.r[4], c.r[4].w[0] - 16968u);  if (depth < kMaxDepth) unit_00C0(c, 185u, depth + 1u); else { c.pc = 0x004020E0u; return; } if (c.pc != 0x003F4744u) [[unlikely]] return; }
L_003F4744:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003F4758:
    set32(c.r[4], c.r[4].w[0] + 508u);
    st32((c.r[4].w[0] + 4u), 0u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0]), 0u);  c.pc = t; return; }
L_003F4768:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00450000u);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[16], 0u + 7u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    set32(c.r[17], c.r[2].w[0] - 16900u);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.budget -= 10;
L_003F4790:
    set32(c.r[17], c.r[17].w[0] + 4u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_003F47A8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F47A4u);  if (depth < kMaxDepth) unit_00BF(c, 280u, depth + 1u); else { c.pc = 0x003FE5D8u; return; } if (c.pc != 0x003F47A4u) [[unlikely]] return; }
L_003F47A4:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_003F47A8:
    set32(c.r[16], c.r[16].w[0] - 1u);
    c.budget -= 3;
    if (c.r[16].sd[0] >= 0) { set32(c.r[2], ld32((c.r[17].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003F4790u | kUnwind; return; } goto L_003F4790; }
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00450000u);
    set32(c.r[16], c.r[16].w[0] - 16984u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F47C4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C0(c, 36u, depth + 1u); else { c.pc = 0x00400678u; return; } if (c.pc != 0x003F47C4u) [[unlikely]] return; }
L_003F47C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F47CCu); set32(c.r[4], c.r[16].w[0] + 12u);  if (depth < kMaxDepth) unit_00BC(c, 169u, depth + 1u); else { c.pc = 0x003F1348u; return; } if (c.pc != 0x003F47CCu) [[unlikely]] return; }
L_003F47CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F47D4u); set32(c.r[4], c.r[16].w[0] + 16u);  if (depth < kMaxDepth) unit_00C0(c, 186u, depth + 1u); else { c.pc = 0x00402178u; return; } if (c.pc != 0x003F47D4u) [[unlikely]] return; }
L_003F47D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F47DCu); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BD(c, 101u, depth + 1u); else { c.pc = 0x003F4AF0u; return; } if (c.pc != 0x003F47DCu) [[unlikely]] return; }
L_003F47DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F47E4u);  if (depth < kMaxDepth) unit_00BD(c, 99u, depth + 1u); else { c.pc = 0x003F4AD0u; return; } if (c.pc != 0x003F47E4u) [[unlikely]] return; }
L_003F47E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F47ECu);  if (depth < kMaxDepth) unit_00BD(c, 96u, depth + 1u); else { c.pc = 0x003F4A98u; return; } if (c.pc != 0x003F47ECu) [[unlikely]] return; }
L_003F47EC:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    if (c.r[16].d[0] == 0) c.r[2].d[0] = c.r[18].d[0];
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003F4810:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  goto L_003F4828; }
L_003F4828:
    st32((c.r[4].w[0] + 16u), 0u);
    st32((c.r[4].w[0]), 0u);
    st32((c.r[4].w[0] + 4u), 0u);
    st32((c.r[4].w[0] + 8u), 0u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 12u), 0u);  c.pc = t; return; }
L_003F4840:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { const bool t = c.r[17].d[0] == 0ull; st64((c.r[29].w[0] + 16u), c.r[31].d[0]);  if (t) { goto L_003F489C; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_003F4880; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00450000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F4874u); set32(c.r[4], c.r[4].w[0] - 17004u);  if (depth < kMaxDepth) unit_00BD(c, 85u, depth + 1u); else { c.pc = 0x003F48B0u; return; } if (c.pc != 0x003F4874u) [[unlikely]] return; }
L_003F4874:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003F489C; } }
    c.budget -= 1;
L_003F4880:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F4888u); set32(c.r[4], c.r[16].w[0] + 2444u);  if (depth < kMaxDepth) unit_00BD(c, 85u, depth + 1u); else { c.pc = 0x003F48B0u; return; } if (c.pc != 0x003F4888u) [[unlikely]] return; }
L_003F4888:
    set32(c.r[2], ld32((c.r[16].w[0] + 72u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0; set32(c.r[3], 0u - c.r[2].w[0]);  if (t) { goto L_003F4898; } }
    st32((c.r[16].w[0] + 72u), c.r[3].w[0]);
    c.budget -= 1;
L_003F4898:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003F489C:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003F48B0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; c.r[3].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003F48C8; } }
    st32((c.r[4].w[0] + 8u), c.r[3].w[0]);
    c.budget -= 1;
L_003F48C8:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_003F48E8; } }
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003F48E8; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003F48E4u); set32(c.r[4], ld32((c.r[4].w[0] + 4u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003F48E4u) [[unlikely]] return; }
L_003F48E4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_003F48E8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003F48F0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 9;
    { const bool t = c.r[16].d[0] != 0ull; st64((c.r[29].w[0] + 24u), c.r[31].d[0]);  if (t) { goto L_003F4928; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00450000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F4920u); set32(c.r[4], c.r[4].w[0] - 17004u);  if (depth < kMaxDepth) unit_00BD(c, 91u, depth + 1u); else { c.pc = 0x003F4988u; return; } if (c.pc != 0x003F4920u) [[unlikely]] return; }
L_003F4920:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_003F496C; } }
L_003F4928:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F4930u);  if (depth < kMaxDepth) unit_00BD(c, 94u, depth + 1u); else { c.pc = 0x003F4A60u; return; } if (c.pc != 0x003F4930u) [[unlikely]] return; }
L_003F4930:
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_003F4958; } }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[5].d[0] = c.r[5].d[0] | 257ull;
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003F4840u | kUnwind; return; } goto L_003F4840; }
L_003F4958:
    set32(c.r[4], c.r[16].w[0] + 2444u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F4968u); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BD(c, 91u, depth + 1u); else { c.pc = 0x003F4988u; return; } if (c.pc != 0x003F4968u) [[unlikely]] return; }
L_003F4968:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_003F496C:
    c.r[2].d[0] = 0ull + 0ull;
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003F4988:
    st32((c.r[4].w[0] + 4u), c.r[6].w[0]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0]), c.r[5].w[0]);  c.pc = t; return; }
L_003F4998:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[16].d[0] != 0ull; st64((c.r[29].w[0] + 16u), c.r[31].d[0]);  if (t) { goto L_003F49F0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00450000u);
    set32(c.r[2], c.r[2].w[0] - 17416u);
    ldl(c.r[3], (c.r[2].w[0] + 419u));
    ldr(c.r[3], (c.r[2].w[0] + 412u));
    ldl(c.r[4], (c.r[2].w[0] + 427u));
    ldr(c.r[4], (c.r[2].w[0] + 420u));
    set32(c.r[5], ld32((c.r[2].w[0] + 428u)));
    sdl(c.r[3], (c.r[17].w[0] + 7u));
    sdr(c.r[3], (c.r[17].w[0]));
    sdl(c.r[4], (c.r[17].w[0] + 15u));
    sdr(c.r[4], (c.r[17].w[0] + 8u));
    st32((c.r[17].w[0] + 16u), c.r[5].w[0]);
    c.budget -= 14;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_003F4A4C; } }
    c.budget -= 1;
L_003F49F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F49F8u);  if (depth < kMaxDepth) unit_00BD(c, 94u, depth + 1u); else { c.pc = 0x003F4A60u; return; } if (c.pc != 0x003F49F8u) [[unlikely]] return; }
L_003F49F8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_003F4A20; } }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[5].d[0] = c.r[5].d[0] | 258ull;
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003F4840u | kUnwind; return; } goto L_003F4840; }
L_003F4A20:
    ldl(c.r[2], (c.r[16].w[0] + 2451u));
    ldr(c.r[2], (c.r[16].w[0] + 2444u));
    ldl(c.r[3], (c.r[16].w[0] + 2459u));
    ldr(c.r[3], (c.r[16].w[0] + 2452u));
    set32(c.r[4], ld32((c.r[16].w[0] + 2460u)));
    sdl(c.r[2], (c.r[17].w[0] + 7u));
    sdr(c.r[2], (c.r[17].w[0]));
    sdl(c.r[3], (c.r[17].w[0] + 15u));
    sdr(c.r[3], (c.r[17].w[0] + 8u));
    st32((c.r[17].w[0] + 16u), c.r[4].w[0]);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 11;
L_003F4A4C:
    c.r[2].d[0] = 0ull + 0ull;
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003F4A60:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00450000u);
    st32((c.r[2].w[0] - 17424u), c.r[4].w[0]);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_003F4A78; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 72u)));
    if (c.r[3].d[0] != 0) c.r[2].d[0] = 0ull;
    c.budget -= 2;
L_003F4A78:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003F4A80:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003D13A0u | kUnwind; return; } [[clang::musttail]] return unit_00B4(c, 151u, depth); }
L_003F4A98:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003D1400u | kUnwind; return; } [[clang::musttail]] return unit_00B4(c, 154u, depth); }
L_003F4AB0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F4AC0u);  if (depth < kMaxDepth) unit_00BF(c, 106u, depth + 1u); else { c.pc = 0x003FD050u; return; } if (c.pc != 0x003F4AC0u) [[unlikely]] return; }
L_003F4AC0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003F3B58u | kUnwind; return; } [[clang::musttail]] return unit_00BC(c, 390u, depth); }
L_003F4AD0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003F3B78u | kUnwind; return; } [[clang::musttail]] return unit_00BC(c, 391u, depth); }
L_003F4AE8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003F4AF0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003F4AF8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003B7E30u | kUnwind; return; } [[clang::musttail]] return unit_00AD(c, 479u, depth); }
L_003F4B10:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003B7E48u | kUnwind; return; } [[clang::musttail]] return unit_00AD(c, 480u, depth); }
L_003F4B28:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_003F4B30:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_003F4B38:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[6], 0u + 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F4B4Cu); set32(c.r[5], ld32((c.r[4].w[0] + 6836u)));  if (depth < kMaxDepth) unit_00BC(c, 285u, depth + 1u); else { c.pc = 0x003F28D0u; return; } if (c.pc != 0x003F4B4Cu) [[unlikely]] return; }
L_003F4B4C:
    c.r[2].d[0] = 0ull + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003F4B60:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_003F4B68:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_003F4B70:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_003F4B78:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_003F4B80:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_003F4B88:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_003F4B90:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[5], ld32((c.r[4].w[0] + 6836u)));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003F1C00u | kUnwind; return; } [[clang::musttail]] return unit_00BC(c, 222u, depth); }
L_003F4BB0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[7].d[0] = c.r[6].d[0] + 0ull;
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[4].w[0] + 6836u)));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 9;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003F1CF8u | kUnwind; return; } [[clang::musttail]] return unit_00BC(c, 228u, depth); }
L_003F4BD8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = c.r[5].d[0] | 1281ull;
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003F4840u | kUnwind; return; } goto L_003F4840; }
L_003F4BF8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = c.r[5].d[0] | 1281ull;
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003F4840u | kUnwind; return; } goto L_003F4840; }
L_003F4C18:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_003F4C20:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    c.r[19].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 40u), c.r[31].d[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F4C54u); c.r[20].d[0] = c.r[8].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BD(c, 94u, depth + 1u); else { c.pc = 0x003F4A60u; return; } if (c.pc != 0x003F4C54u) [[unlikely]] return; }
L_003F4C54:
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    set32(c.r[3], c.r[17].w[0] - 188u);
    c.r[4].d[0] = 0ull + 0ull;
    c.r[5].d[0] = c.r[5].d[0] | 369ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(68ll) ? 1ull : 0ull;  if (t) { goto L_003F4C90; } }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 40u));
    c.budget -= 8;
    { set32(c.r[29], c.r[29].w[0] + 48u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003F4840u | kUnwind; return; } goto L_003F4840; }
L_003F4C90:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_003F4CB4; }
    set32(c.r[4], ld32((c.r[16].w[0] + 6892u)));
    set32(c.r[3], c.r[17].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[4].w[0] + 324u), c.r[19].w[0]);
    st32((c.r[3].w[0] - 700u), c.r[18].w[0]);
    st32((c.r[4].w[0] + 328u), c.r[20].w[0]);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 7;
L_003F4CB4:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 40u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003F4CD0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F4CE0u);  if (depth < kMaxDepth) unit_00BD(c, 125u, depth + 1u); else { c.pc = 0x003F4D40u; return; } if (c.pc != 0x003F4CE0u) [[unlikely]] return; }
L_003F4CE0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);  if (t) { goto L_003F4D08; } }
L_003F4CE8:
    c.budget -= 7;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003F4CE8u | kUnwind; return; } goto L_003F4CE8; } }
    c.budget -= 1;
L_003F4D08:
    set32(c.r[4], 0u + 8u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F4D14u); set32(c.r[5], c.r[5].w[0] - 14248u);  if (depth < kMaxDepth) unit_00B8(c, 95u, depth + 1u); else { c.pc = 0x003E2C48u; return; } if (c.pc != 0x003F4D14u) [[unlikely]] return; }
L_003F4D14:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_003F4D30; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    c.r[4].d[0] = 0ull + 0ull;
    c.r[5].d[0] = c.r[5].d[0] | 3329ull;
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003F4840u | kUnwind; return; } goto L_003F4840; }
L_003F4D30:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00450000u);
    st32((c.r[3].w[0] - 16864u), 0u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003F4D40:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_003F4D48:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F4D58u);  if (depth < kMaxDepth) unit_00B8(c, 106u, depth + 1u); else { c.pc = 0x003E2D70u; return; } if (c.pc != 0x003F4D58u) [[unlikely]] return; }
L_003F4D58:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003F4D68:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  goto L_003F4D80; }
L_003F4D80:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F4D98u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BD(c, 218u, depth + 1u); else { c.pc = 0x003F5C70u; return; } if (c.pc != 0x003F4D98u) [[unlikely]] return; }
L_003F4D98:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003F4DB0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003F4DD8; } }
    c.budget -= 1;
L_003F4DB0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F4DB8u);  if (depth < kMaxDepth) unit_00BD(c, 133u, depth + 1u); else { c.pc = 0x003F4DF0u; return; } if (c.pc != 0x003F4DB8u) [[unlikely]] return; }
L_003F4DB8:
    set32(c.r[3], 0u + 2u);
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 72u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003F4DD4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F4DD4u);  if (depth < kMaxDepth) unit_00BD(c, 232u, depth + 1u); else { c.pc = 0x003F5E98u; return; } if (c.pc != 0x003F4DD4u) [[unlikely]] return; }
L_003F4DD4:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003F4DD8:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003F4DF0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[3].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[17].d[0]);
    c.r[17].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    c.r[18].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    st64((c.r[29].w[0] + 40u), c.r[19].d[0]);
    c.r[18].d[0] = c.r[18].d[0] | 65534ull;
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.budget -= 13;
    { const bool t = 0ull == 0ull; set32(c.r[19], ld32((c.r[16].w[0] + 40u)));  if (t) { goto L_003F4E44; } }
    c.budget -= 1;
L_003F4E28:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F4E30u);  if (depth < kMaxDepth) unit_00BD(c, 140u, depth + 1u); else { c.pc = 0x003F4F28u; return; } if (c.pc != 0x003F4E30u) [[unlikely]] return; }
L_003F4E30:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_003F4EA4; }
    set32(c.r[2], ld32((c.r[29].w[0] + 12u)));
    set32(c.r[17], c.r[17].w[0] + c.r[2].w[0]);
    c.budget -= 2;
L_003F4E44:
    c.r[2].d[0] = c.r[18].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_003F4EA4; }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[7].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 4u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F4E68u); set32(c.r[8], c.r[29].w[0] + 8u);  if (depth < kMaxDepth) unit_00BD(c, 138u, depth + 1u); else { c.pc = 0x003F4EC0u; return; } if (c.pc != 0x003F4E68u) [[unlikely]] return; }
L_003F4E68:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[7], c.r[29].w[0] + 12u);  if (t) { goto L_003F4EA0; } }
    set32(c.r[5], ld32((c.r[29].w[0])));
    set32(c.r[6], ld32((c.r[29].w[0] + 4u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F4E88u); set32(c.r[8], ld32((c.r[29].w[0] + 8u)));  if (depth < kMaxDepth) unit_00BD(c, 142u, depth + 1u); else { c.pc = 0x003F4F48u; return; } if (c.pc != 0x003F4E88u) [[unlikely]] return; }
L_003F4E88:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003F4EA0; } }
    set32(c.r[5], ld32((c.r[29].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003F4E28u | kUnwind; return; } goto L_003F4E28; } }
L_003F4EA0:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_003F4EA4:
    c.r[2].d[0] = c.r[3].d[0] + 0ull;
    c.r[17].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003F4EC0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[16].d[0]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 40u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[8].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 56u), c.r[31].d[0]);
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F4EECu); set32(c.r[5], ld32((c.r[4].w[0] + 6900u)));  if (depth < kMaxDepth) unit_00BC(c, 223u, depth + 1u); else { c.pc = 0x003F1C18u; return; } if (c.pc != 0x003F4EECu) [[unlikely]] return; }
L_003F4EEC:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_003F4F14; }
    set32(c.r[3], ld32((c.r[29].w[0] + 4u)));
    set32(c.r[4], ld32((c.r[29].w[0] + 12u)));
    set32(c.r[5], ld32((c.r[29].w[0])));
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    st32((c.r[18].w[0]), c.r[5].w[0]);
    st32((c.r[17].w[0]), c.r[4].w[0]);
    c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 8;
L_003F4F14:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 56u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003F4F28:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F4F3Cu); set32(c.r[5], ld32((c.r[4].w[0] + 6900u)));  if (depth < kMaxDepth) unit_00BC(c, 229u, depth + 1u); else { c.pc = 0x003F1D10u; return; } if (c.pc != 0x003F4F3Cu) [[unlikely]] return; }
L_003F4F3C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003F4F48:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 64u), c.r[20].d[0]);
    c.r[20].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 56u), c.r[19].d[0]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 72u), c.r[21].d[0]);
    c.r[21].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 40u), c.r[17].d[0]);
    c.r[7].d[0] = c.r[8].d[0] + 0ull;
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st32((c.r[20].w[0]), 0u);
    set32(c.r[2], ld32((c.r[16].w[0] + 6892u)));
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F4F90u); set32(c.r[17], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_00BD(c, 223u, depth + 1u); else { c.pc = 0x003F5CF8u; return; } if (c.pc != 0x003F4F90u) [[unlikely]] return; }
L_003F4F90:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003F50C0; } }
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F4FACu); set32(c.r[8], c.r[29].w[0] + 4u);  if (depth < kMaxDepth) unit_00B8(c, 60u, depth + 1u); else { c.pc = 0x003E1018u; return; } if (c.pc != 0x003F4FACu) [[unlikely]] return; }
L_003F4FAC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003F4FC4; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F4FC0u); c.r[5].d[0] = c.r[5].d[0] | 3331ull;  if (depth < kMaxDepth) unit_00BD(c, 82u, depth + 1u); else { c.pc = 0x003F4840u; return; } if (c.pc != 0x003F4FC0u) [[unlikely]] return; }
L_003F4FC0:
    c.r[21].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_003F4FC4:
    set32(c.r[3], ld32((c.r[29].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00020000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003F4FEC; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F4FE8u); c.r[7].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BD(c, 267u, depth + 1u); else { c.pc = 0x003F6368u; return; } if (c.pc != 0x003F4FE8u) [[unlikely]] return; }
L_003F4FE8:
    set32(c.r[3], ld32((c.r[29].w[0] + 4u)));
    c.budget -= 1;
L_003F4FEC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00080000u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[17].d[0] = c.r[3].d[0] + 0ull;  if (t) { goto L_003F5034; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F5000u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BC(c, 296u, depth + 1u); else { c.pc = 0x003F2A00u; return; } if (c.pc != 0x003F5000u) [[unlikely]] return; }
L_003F5000:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], ld32((c.r[29].w[0] + 4u)));  if (t) { goto L_003F5018; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F5010u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BD(c, 222u, depth + 1u); else { c.pc = 0x003F5CE0u; return; } if (c.pc != 0x003F5010u) [[unlikely]] return; }
L_003F5010:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 4u);  if (t) { goto L_003F50B8; } }
L_003F5018:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[17].d[0];  if (t) { goto L_003F5034; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F5028u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BC(c, 298u, depth + 1u); else { c.pc = 0x003F2A20u; return; } if (c.pc != 0x003F5028u) [[unlikely]] return; }
L_003F5028:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 4u);  if (t) { goto L_003F50B8; } }
    set32(c.r[3], ld32((c.r[29].w[0] + 4u)));
    c.budget -= 1;
L_003F5034:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00040000u);  if (t) { goto L_003F5058; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F5050u); set32(c.r[7], c.r[29].w[0] + 8u);  if (depth < kMaxDepth) unit_00BD(c, 153u, depth + 1u); else { c.pc = 0x003F50E8u; return; } if (c.pc != 0x003F5050u) [[unlikely]] return; }
L_003F5050:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 8u)));  if (t) { goto L_003F50B8; } }
L_003F5058:
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[5], ld32((c.r[29].w[0])));  goto L_003F5080; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F5074u); c.r[5].d[0] = c.r[5].d[0] | 3333ull;  if (depth < kMaxDepth) unit_00BD(c, 82u, depth + 1u); else { c.pc = 0x003F4840u; return; } if (c.pc != 0x003F5074u) [[unlikely]] return; }
L_003F5074:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[21].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_003F50BC; } }
    c.budget -= 1;
L_003F5080:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[7], c.r[29].w[0] + 12u);
    set32(c.r[8], c.r[29].w[0] + 16u);
    set32(c.r[6], c.r[18].w[0] - c.r[5].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F5098u); set32(c.r[5], c.r[19].w[0] + c.r[5].w[0]);  if (depth < kMaxDepth) unit_00BD(c, 163u, depth + 1u); else { c.pc = 0x003F5290u; return; } if (c.pc != 0x003F5098u) [[unlikely]] return; }
L_003F5098:
    set32(c.r[3], 0u + 1u);
    c.r[21].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[29].w[0] + 16u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; c.r[2].d[0] = c.r[21].d[0] + 0ull;  if (t) { goto L_003F50C0; } }
    set32(c.r[2], ld32((c.r[29].w[0])));
    set32(c.r[3], ld32((c.r[29].w[0] + 12u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 3;
L_003F50B8:
    st32((c.r[20].w[0]), c.r[2].w[0]);
    c.budget -= 1;
L_003F50BC:
    c.r[2].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 1;
L_003F50C0:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 56u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 72u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_003F50E8:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    c.r[19].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 40u), c.r[21].d[0]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st32((c.r[19].w[0]), 0u);
    set32(c.r[18], ld32((c.r[21].w[0] + 40u)));
    set32(c.r[2], c.r[18].w[0] + 3u);
    c.r[2].d[0] = c.r[16].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 17;
    { const bool t = c.r[2].d[0] != 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003F5140; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F5138u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BD(c, 158u, depth + 1u); else { c.pc = 0x003F51C8u; return; } if (c.pc != 0x003F5138u) [[unlikely]] return; }
L_003F5138:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { st32((c.r[19].w[0]), c.r[18].w[0]);  goto L_003F51A0; }
L_003F5140:
    c.r[2].d[0] = c.r[16].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_003F5178; } }
    c.r[20].sd[0] = static_cast<std::int32_t>(0x000D0000u);
    c.budget -= 1;
L_003F5150:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F515Cu); set32(c.r[17], c.r[17].w[0] + 1u);  if (depth < kMaxDepth) unit_00B8(c, 77u, depth + 1u); else { c.pc = 0x003E2940u; return; } if (c.pc != 0x003F515Cu) [[unlikely]] return; }
L_003F515C:
    c.r[2].d[0] = c.r[2].d[0] & c.r[20].d[0];
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { st32((c.r[19].w[0]), c.r[18].w[0]);  goto L_003F51A0; }
    set32(c.r[16], c.r[16].w[0] - 1u);
    c.r[2].d[0] = c.r[16].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[18], c.r[18].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003F5150u | kUnwind; return; } goto L_003F5150; } }
L_003F5178:
    set32(c.r[2], c.r[16].w[0] - 1u);
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(3ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { st32((c.r[19].w[0]), c.r[18].w[0]);  goto L_003F51A0; }
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F5194u); set32(c.r[5], c.r[17].w[0] + c.r[16].w[0]);  if (depth < kMaxDepth) unit_00BD(c, 160u, depth + 1u); else { c.pc = 0x003F5208u; return; } if (c.pc != 0x003F5194u) [[unlikely]] return; }
L_003F5194:
    set32(c.r[3], c.r[18].w[0] + c.r[16].w[0]);
    if (c.r[2].d[0] != 0) c.r[18].d[0] = c.r[3].d[0];
    st32((c.r[19].w[0]), c.r[18].w[0]);
    c.budget -= 3;
L_003F51A0:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003F51C8:
    c.budget -= 2;
    { const bool t = c.r[5].sd[0] <= 0; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_003F51FC; } }
    c.r[3].d[0] = ld8((c.r[4].w[0]));
    c.budget -= 2;
L_003F51D8:
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003F5200; } }
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.r[2].d[0] = c.r[6].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[2].d[0] != 0ull) { c.r[3].d[0] = ld8((c.r[4].w[0]));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003F51D8u | kUnwind; return; } goto L_003F51D8; }
L_003F51FC:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_003F5200:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003F5208:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F521Cu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BD(c, 162u, depth + 1u); else { c.pc = 0x003F5268u; return; } if (c.pc != 0x003F521Cu) [[unlikely]] return; }
L_003F521C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 12u)));  goto L_003F5248; }
    set32(c.r[2], ld32((c.r[4].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003F5258; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003F5258; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 1;
L_003F5248:
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = c.r[16].d[0] ^ c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
L_003F5258:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003F5268:
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[2].w[0] + 6900u)));
    set32(c.r[3], c.r[4].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] + 4432u);  c.pc = t; return; }
L_003F5290:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 56u), c.r[19].d[0]);
    c.r[19].d[0] = c.r[8].d[0] + 0ull;
    st64((c.r[29].w[0] + 64u), c.r[20].d[0]);
    c.r[20].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 72u), c.r[21].d[0]);
    c.r[21].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 80u), c.r[22].d[0]);
    c.r[22].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 88u), c.r[23].d[0]);
    c.r[23].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[16].d[0]);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    st64((c.r[29].w[0] + 40u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st32((c.r[20].w[0]), 0u);
    st32((c.r[19].w[0]), 0u);
    set32(c.r[17], ld32((c.r[18].w[0] + 6892u)));
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F52E8u); set32(c.r[4], ld32((c.r[17].w[0])));  if (depth < kMaxDepth) unit_00B8(c, 92u, depth + 1u); else { c.pc = 0x003E2BA0u; return; } if (c.pc != 0x003F52E8u) [[unlikely]] return; }
L_003F52E8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_003F5300; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F52FCu); c.r[5].d[0] = c.r[5].d[0] | 3334ull;  if (depth < kMaxDepth) unit_00BD(c, 82u, depth + 1u); else { c.pc = 0x003F4840u; return; } if (c.pc != 0x003F52FCu) [[unlikely]] return; }
L_003F52FC:
    c.r[22].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_003F5300:
    set32(c.r[16], ld32((c.r[29].w[0] + 28u)));
    set32(c.r[7], ld32((c.r[29].w[0])));
    set32(c.r[6], ld32((c.r[29].w[0] + 4u)));
    set32(c.r[5], ld32((c.r[29].w[0] + 8u)));
    c.budget -= 6;
    { const bool t = c.r[16].sd[0] >= 0; set32(c.r[8], ld32((c.r[29].w[0] + 20u)));  if (t) { goto L_003F5330; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F5328u); c.r[5].d[0] = c.r[5].d[0] | 3342ull;  if (depth < kMaxDepth) unit_00BD(c, 82u, depth + 1u); else { c.pc = 0x003F4840u; return; } if (c.pc != 0x003F5328u) [[unlikely]] return; }
L_003F5328:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_003F53C8; } }
L_003F5330:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull; c.r[3].d[0] = c.r[21].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;  if (t) { goto L_003F5350; } }
    set32(c.r[2], 0u + 1u);
    st32((c.r[20].w[0]), 0u);
    st32((c.r[19].w[0]), c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003F53C4; } }
    c.budget -= 1;
L_003F5350:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003F53C4; } }
    set32(c.r[2], c.r[7].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] - 700u)));
    c.budget -= 5;
    if (c.r[4].d[0] == 0ull) { set32(c.r[3], c.r[6].w[0] << 2);  goto L_003F5388; }
    set32(c.r[6], ld32((c.r[17].w[0] + 328u)));
    c.r[8].d[0] = c.r[23].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[17].w[0] + 324u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F5380u); c.r[9].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BD(c, 169u, depth + 1u); else { c.pc = 0x003F53F0u; return; } if (c.pc != 0x003F5380u) [[unlikely]] return; }
L_003F5380:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0]), c.r[2].w[0]);  if (t) { goto L_003F53A8; } }
L_003F5388:
    c.r[6].d[0] = c.r[23].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] - 31232u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003F53A4u); c.r[7].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003F53A4u) [[unlikely]] return; }
L_003F53A4:
    st32((c.r[19].w[0]), c.r[2].w[0]);
    c.budget -= 1;
L_003F53A8:
    set32(c.r[8], ld32((c.r[19].w[0])));
    c.budget -= 3;
    { const bool t = c.r[8].d[0] == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_003F53C0; } }
    c.budget -= 2;
    if (c.r[8].d[0] != c.r[2].d[0]) { c.r[22].d[0] = c.r[8].d[0] + 0ull;  goto L_003F53C0; }
    st32((c.r[20].w[0]), c.r[16].w[0]);
    c.budget -= 1;
L_003F53C0:
    c.r[2].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 1;
L_003F53C4:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_003F53C8:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 56u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 72u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[23].d[0] = ld64((c.r[29].w[0] + 88u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_003F53F0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    c.r[5].d[0] = c.r[8].d[0] + 0ull;
    c.r[6].d[0] = c.r[9].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F5420u); c.r[17].d[0] = c.r[7].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BD(c, 198u, depth + 1u); else { c.pc = 0x003F59B0u; return; } if (c.pc != 0x003F5420u) [[unlikely]] return; }
L_003F5420:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    if (c.r[16].d[0] != c.r[2].d[0]) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_003F5444; }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull; c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_003F5440; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[18].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003F5440u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003F5440u) [[unlikely]] return; }
L_003F5440:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_003F5444:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003F5460:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[5], 0u + 6u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 40u), c.r[21].d[0]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 56u), c.r[23].d[0]);
    c.r[23].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 64u), c.r[30].d[0]);
    c.r[30].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[22].d[0]);
    st64((c.r[29].w[0] + 72u), c.r[31].d[0]);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F54A8u); c.r[17].d[0] = c.r[8].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C0(c, 20u, depth + 1u); else { c.pc = 0x00400258u; return; } if (c.pc != 0x003F54A8u) [[unlikely]] return; }
L_003F54A8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[22], c.r[21].w[0] + 6884u);  if (t) { goto L_003F54B8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_003F55A8; } }
L_003F54B8:
    set32(c.r[19], 0u - 1u);
    set32(c.r[16], ld32((c.r[22].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 44u)));
    c.budget -= 5;
    if (c.r[2].d[0] == c.r[19].d[0]) { st32((c.r[16].w[0] + 44u), c.r[18].w[0]);  goto L_003F54CC; }
L_003F54CC:
    set32(c.r[2], ld32((c.r[16].w[0] + 36u)));
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[19].d[0]) { st32((c.r[16].w[0] + 36u), c.r[18].w[0]);  goto L_003F54D8; }
L_003F54D8:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F54E4u); set32(c.r[5], 0u + 30u);  if (depth < kMaxDepth) unit_00C0(c, 20u, depth + 1u); else { c.pc = 0x00400258u; return; } if (c.pc != 0x003F54E4u) [[unlikely]] return; }
L_003F54E4:
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[20].d[0] == c.r[19].d[0]; c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (t) { goto L_003F5524; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F54F8u); set32(c.r[5], 0u + 55u);  if (depth < kMaxDepth) unit_00C0(c, 20u, depth + 1u); else { c.pc = 0x00400258u; return; } if (c.pc != 0x003F54F8u) [[unlikely]] return; }
L_003F54F8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 36u)));  goto L_003F5518; }
    set32(c.r[2], ld32((c.r[16].w[0] + 28u)));
    c.r[2].d[0] = c.r[18].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { st32((c.r[16].w[0] + 44u), c.r[20].w[0]);  goto L_003F5524; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[16].w[0] + 44u)));  if (t) { goto L_003F5528; } }
L_003F5518:
    c.budget -= 2;
    if (c.r[18].d[0] != c.r[2].d[0]) { set32(c.r[3], ld32((c.r[16].w[0] + 44u)));  goto L_003F5528; }
    st32((c.r[16].w[0] + 44u), c.r[20].w[0]);
    c.budget -= 1;
L_003F5524:
    set32(c.r[3], ld32((c.r[16].w[0] + 44u)));
    c.budget -= 1;
L_003F5528:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[18].d[0]; st32((c.r[16].w[0] + 28u), c.r[18].w[0]);  if (t) { goto L_003F55A8; } }
    c.budget -= 2;
    if (c.r[17].sd[0] < 0) { set32(c.r[5], ld32((c.r[22].w[0] + 24u)));  goto L_003F5564; }
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 16u)));
    c.r[4].d[0] = c.r[17].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.r[5].d[0] = c.r[17].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    if (c.r[4].d[0] != 0) c.r[3].d[0] = c.r[17].d[0];
    if (c.r[5].d[0] != 0) c.r[2].d[0] = c.r[17].d[0];
    set32(c.r[17], c.r[17].w[0] - c.r[3].w[0]);
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 12u), c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[22].w[0] + 24u)));
    c.budget -= 10;
L_003F5564:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[6].d[0] = c.r[23].d[0] + 0ull;
    c.r[23].d[0] = ld64((c.r[29].w[0] + 56u));
    c.r[7].d[0] = c.r[30].d[0] + 0ull;
    c.r[30].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[8].d[0] = c.r[17].d[0] + 0ull;
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 72u));
    c.budget -= 16;
    { set32(c.r[29], c.r[29].w[0] + 80u);  goto L_003F5AD0; }
L_003F55A8:
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
L_003F55D8:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[22].d[0]);
    c.r[22].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[5], 0u + 5u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    c.r[19].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[20].d[0]);
    c.r[20].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 64u), c.r[30].d[0]);
    c.r[30].d[0] = c.r[8].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 40u), c.r[21].d[0]);
    st64((c.r[29].w[0] + 56u), c.r[23].d[0]);
    st64((c.r[29].w[0] + 72u), c.r[31].d[0]);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F5620u); c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C0(c, 20u, depth + 1u); else { c.pc = 0x00400258u; return; } if (c.pc != 0x003F5620u) [[unlikely]] return; }
L_003F5620:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[23], c.r[17].w[0] + 6884u);  if (t) { goto L_003F5630; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_003F5780; } }
L_003F5630:
    set32(c.r[21], 0u - 1u);
    set32(c.r[16], ld32((c.r[23].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 40u)));
    c.budget -= 5;
    if (c.r[2].d[0] != c.r[21].d[0]) { set32(c.r[2], ld32((c.r[16].w[0] + 32u)));  goto L_003F5658; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F5650u); c.r[5].d[0] = c.r[22].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BD(c, 185u, depth + 1u); else { c.pc = 0x003F57B0u; return; } if (c.pc != 0x003F5650u) [[unlikely]] return; }
L_003F5650:
    st32((c.r[16].w[0] + 40u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 32u)));
    c.budget -= 2;
L_003F5658:
    c.budget -= 2;
    if (c.r[2].d[0] == c.r[21].d[0]) { st32((c.r[16].w[0] + 32u), c.r[22].w[0]);  goto L_003F5660; }
L_003F5660:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F566Cu); set32(c.r[5], 0u + 29u);  if (depth < kMaxDepth) unit_00C0(c, 20u, depth + 1u); else { c.pc = 0x00400258u; return; } if (c.pc != 0x003F566Cu) [[unlikely]] return; }
L_003F566C:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == c.r[21].d[0]; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003F5708; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F5680u); set32(c.r[5], 0u + 55u);  if (depth < kMaxDepth) unit_00C0(c, 20u, depth + 1u); else { c.pc = 0x00400258u; return; } if (c.pc != 0x003F5680u) [[unlikely]] return; }
L_003F5680:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 32u)));  goto L_003F56A0; }
    set32(c.r[2], ld32((c.r[16].w[0] + 24u)));
    c.r[2].d[0] = c.r[22].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], ld32((c.r[16].w[0] + 40u)));  if (t) { goto L_003F56A8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 24u), c.r[22].w[0]);  if (t) { goto L_003F5710; } }
L_003F56A0:
    c.budget -= 2;
    { const bool t = c.r[22].d[0] != c.r[2].d[0]; set32(c.r[4], ld32((c.r[16].w[0] + 40u)));  if (t) { goto L_003F570C; } }
L_003F56A8:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[18].d[0]; c.r[2].d[0] = c.r[19].sd[0] < 4ll ? 1ull : 0ull;  if (t) { goto L_003F570C; } }
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { st32((c.r[16].w[0] + 24u), c.r[22].w[0]);  goto L_003F5710; }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0])));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { st32((c.r[16].w[0] + 24u), c.r[22].w[0]);  goto L_003F5710; }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 1u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { st32((c.r[16].w[0] + 24u), c.r[22].w[0]);  goto L_003F5710; }
    c.r[3].d[0] = ld8((c.r[20].w[0] + 2u));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[2].d[0]) { st32((c.r[16].w[0] + 24u), c.r[22].w[0]);  goto L_003F5710; }
    c.r[3].d[0] = ld8((c.r[20].w[0] + 3u));
    set32(c.r[2], 0u + 179u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 184u);  if (t) { goto L_003F56F8; } }
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { st32((c.r[16].w[0] + 24u), c.r[22].w[0]);  goto L_003F5710; }
L_003F56F8:
    st32((c.r[16].w[0] + 40u), c.r[18].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_003F570C; } }
    c.budget -= 1;
L_003F5708:
    set32(c.r[4], ld32((c.r[16].w[0] + 40u)));
    c.budget -= 1;
L_003F570C:
    st32((c.r[16].w[0] + 24u), c.r[22].w[0]);
    c.budget -= 1;
L_003F5710:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[22].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_003F5780; } }
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F5728u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BF(c, 48u, depth + 1u); else { c.pc = 0x003FC6F8u; return; } if (c.pc != 0x003F5728u) [[unlikely]] return; }
L_003F5728:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[19].sd[0] <= 0; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003F5780; } }
    set32(c.r[5], ld32((c.r[23].w[0] + 20u)));
    c.r[8].d[0] = c.r[30].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F574Cu); c.r[7].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BD(c, 207u, depth + 1u); else { c.pc = 0x003F5AD0u; return; } if (c.pc != 0x003F574Cu) [[unlikely]] return; }
L_003F574C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == c.r[2].d[0]; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003F5770; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F5764u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BF(c, 50u, depth + 1u); else { c.pc = 0x003FC768u; return; } if (c.pc != 0x003F5764u) [[unlikely]] return; }
L_003F5764:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003F5780; } }
    c.budget -= 1;
L_003F5770:
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F577Cu); c.r[6].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BF(c, 73u, depth + 1u); else { c.pc = 0x003FCA98u; return; } if (c.pc != 0x003F577Cu) [[unlikely]] return; }
L_003F577C:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_003F5780:
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
L_003F57B0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 24u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[5], 0u + 59u);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 40u), c.r[31].d[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F57D4u); c.r[18].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C0(c, 20u, depth + 1u); else { c.pc = 0x00400258u; return; } if (c.pc != 0x003F57D4u) [[unlikely]] return; }
L_003F57D4:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[3], 0u + 1u);
    c.budget -= 5;
    { const bool t = c.r[16].d[0] == c.r[3].d[0]; c.r[4].d[0] = c.r[16].sd[0] < 2ll ? 1ull : 0ull;  if (t) { goto L_003F581C; } }
    c.budget -= 2;
    if (c.r[4].d[0] != 0ull) { c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_003F5820; }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    if (c.r[16].d[0] != c.r[2].d[0]) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_003F581C; }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F580Cu); set32(c.r[6], c.r[29].w[0] + 4u);  if (depth < kMaxDepth) unit_00BD(c, 258u, depth + 1u); else { c.pc = 0x003F6168u; return; } if (c.pc != 0x003F580Cu) [[unlikely]] return; }
L_003F580C:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[29].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    if (c.r[3].d[0] != 0) c.r[2].d[0] = c.r[17].d[0];
    c.budget -= 4;
L_003F581C:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_003F5820:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 40u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003F5838:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[8].d[0] = c.r[29].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 40u), c.r[19].d[0]);
    c.r[19].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F5868u); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BC(c, 394u, depth + 1u); else { c.pc = 0x003F3BB8u; return; } if (c.pc != 0x003F5868u) [[unlikely]] return; }
L_003F5868:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; c.r[7].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_003F58B0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F5884u);  if (depth < kMaxDepth) unit_00BD(c, 296u, depth + 1u); else { c.pc = 0x003F6720u; return; } if (c.pc != 0x003F5884u) [[unlikely]] return; }
L_003F5884:
    set32(c.r[6], c.r[18].w[0] - 18u);
    set32(c.r[2], ld32((c.r[29].w[0])));
    c.r[5].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[7], c.r[19].w[0] + 18u);  if (t) { goto L_003F58A4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F58A4u);  if (depth < kMaxDepth) unit_00BD(c, 193u, depth + 1u); else { c.pc = 0x003F58D8u; return; } if (c.pc != 0x003F58A4u) [[unlikely]] return; }
L_003F58A4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_003F58B8; } }
    c.budget -= 1;
L_003F58B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F58B8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BD(c, 193u, depth + 1u); else { c.pc = 0x003F58D8u; return; } if (c.pc != 0x003F58B8u) [[unlikely]] return; }
L_003F58B8:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003F58D8:
    set32(c.r[29], c.r[29].w[0] - 80u);
    set32(c.r[8], 0u + 8u);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 40u), c.r[19].d[0]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 56u), c.r[21].d[0]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[20].d[0]);
    c.r[7].d[0] = c.r[29].d[0] + 0ull;
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], ld32((c.r[21].w[0] + 6912u)));
    c.budget -= 19;
    { const bool t = c.r[3].d[0] == c.r[8].d[0]; c.r[5].d[0] = c.r[3].d[0] + 0ull;  if (t) { goto L_003F598C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F592Cu);  if (depth < kMaxDepth) unit_00BC(c, 220u, depth + 1u); else { c.pc = 0x003F1B90u; return; } if (c.pc != 0x003F592Cu) [[unlikely]] return; }
L_003F592C:
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[29].w[0])));
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[18], ld32((c.r[29].w[0] + 4u)));
    set32(c.r[2], 0u + 1u);
    c.r[4].d[0] = c.r[3].d[0] + 0ull;
    set32(c.r[19], ld32((c.r[29].w[0] + 8u)));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[20], ld32((c.r[29].w[0] + 12u)));  if (t) { goto L_003F598C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F5958u);  if (depth < kMaxDepth) unit_00BD(c, 198u, depth + 1u); else { c.pc = 0x003F59B0u; return; } if (c.pc != 0x003F5958u) [[unlikely]] return; }
L_003F5958:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    if (c.r[17].d[0] != c.r[2].d[0]) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_003F598C; }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull; c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (t) { goto L_003F5978; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[18].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003F5978u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003F5978u) [[unlikely]] return; }
L_003F5978:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull; c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_003F5988; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[19].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003F5988u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003F5988u) [[unlikely]] return; }
L_003F5988:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003F598C:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 56u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003F59B0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[18].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0] + 36u)));
    c.budget -= 12;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003F59E0u); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003F59E0u) [[unlikely]] return; }
L_003F59E0:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[3].d[0] = c.r[2].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.r[2].d[0] = 0ull + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003F5A40; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F5A00u);  if (depth < kMaxDepth) unit_00BD(c, 202u, depth + 1u); else { c.pc = 0x003F5A58u; return; } if (c.pc != 0x003F5A00u) [[unlikely]] return; }
L_003F5A00:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[16], c.r[16].w[0] - c.r[3].w[0]);  if (t) { goto L_003F5A40; } }
    c.budget -= 2;
    { const bool t = c.r[16].sd[0] <= 0; set32(c.r[17], c.r[17].w[0] + c.r[3].w[0]);  if (t) { goto L_003F5A3C; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F5A24u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BD(c, 202u, depth + 1u); else { c.pc = 0x003F5A58u; return; } if (c.pc != 0x003F5A24u) [[unlikely]] return; }
L_003F5A24:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00450000u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[16].d[0]; set32(c.r[3], c.r[3].w[0] - 16864u);  if (t) { goto L_003F5A3C; } }
    set32(c.r[2], ld32((c.r[3].w[0])));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_003F5A3C:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_003F5A40:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003F5A58:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[7].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0] + 24u)));
    c.budget -= 11;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003F5A84u); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003F5A84u) [[unlikely]] return; }
L_003F5A84:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[29].w[0])));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F5A94u); set32(c.r[6], ld32((c.r[29].w[0] + 4u)));  if (depth < kMaxDepth) unit_00B8(c, 36u, depth + 1u); else { c.pc = 0x003E0A78u; return; } if (c.pc != 0x003F5A94u) [[unlikely]] return; }
L_003F5A94:
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    set32(c.r[2], ld32((c.r[3].w[0] + 32u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003F5AACu); c.r[6].d[0] = c.r[29].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003F5AACu) [[unlikely]] return; }
L_003F5AAC:
    set32(c.r[2], ld32((c.r[29].w[0] + 4u)));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003F5AC8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 1u);  c.pc = t; return; }
L_003F5AD0:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 64u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    st64((c.r[29].w[0] + 56u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 96u), c.r[22].d[0]);
    c.r[22].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 104u), c.r[23].d[0]);
    c.r[23].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 112u), c.r[30].d[0]);
    c.r[30].d[0] = c.r[8].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[16].d[0]);
    st64((c.r[29].w[0] + 72u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 80u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 88u), c.r[21].d[0]);
    st64((c.r[29].w[0] + 120u), c.r[31].d[0]);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F5B18u); c.r[17].d[0] = c.r[7].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BC(c, 222u, depth + 1u); else { c.pc = 0x003F1C00u; return; } if (c.pc != 0x003F5B18u) [[unlikely]] return; }
L_003F5B18:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_003F5BC8; } }
    set32(c.r[16], ld32((c.r[29].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 12u)));
    set32(c.r[19], ld32((c.r[29].w[0])));
    c.r[4].d[0] = c.r[16].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    set32(c.r[3], c.r[16].w[0] + c.r[3].w[0]);
    set32(c.r[20], ld32((c.r[29].w[0] + 8u)));
    c.r[3].d[0] = c.r[3].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[21], ld32((c.r[29].w[0] + 20u)));  if (t) { goto L_003F5BC4; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull; c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_003F5B60; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F5B58u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B8(c, 36u, depth + 1u); else { c.pc = 0x003E0A78u; return; } if (c.pc != 0x003F5B58u) [[unlikely]] return; }
L_003F5B58:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[7].d[0] = c.r[21].d[0] + 0ull;  if (t) { goto L_003F5B80; } }
L_003F5B60:
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F5B6Cu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B8(c, 36u, depth + 1u); else { c.pc = 0x003E0A78u; return; } if (c.pc != 0x003F5B6Cu) [[unlikely]] return; }
L_003F5B6C:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[5], c.r[18].w[0] + c.r[16].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F5B7Cu); set32(c.r[6], c.r[17].w[0] - c.r[16].w[0]);  if (depth < kMaxDepth) unit_00B8(c, 36u, depth + 1u); else { c.pc = 0x003E0A78u; return; } if (c.pc != 0x003F5B7Cu) [[unlikely]] return; }
L_003F5B7C:
    c.r[7].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 1;
L_003F5B80:
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    c.r[5].d[0] = c.r[23].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F5B90u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BC(c, 228u, depth + 1u); else { c.pc = 0x003F1CF8u; return; } if (c.pc != 0x003F5B90u) [[unlikely]] return; }
L_003F5B90:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[16].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_003F5BC8; }
    c.budget -= 2;
    { const bool t = c.r[30].sd[0] < 0; c.r[4].d[0] = c.r[22].d[0] + 0ull;  if (t) { goto L_003F5BC0; } }
    c.r[5].d[0] = c.r[23].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 32u);
    st32((c.r[29].w[0] + 32u), c.r[30].w[0]);
    st32((c.r[29].w[0] + 36u), c.r[19].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F5BB8u); st32((c.r[29].w[0] + 40u), c.r[17].w[0]);  if (depth < kMaxDepth) unit_00BF(c, 347u, depth + 1u); else { c.pc = 0x003FEE48u; return; } if (c.pc != 0x003F5BB8u) [[unlikely]] return; }
L_003F5BB8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_003F5BC8; } }
L_003F5BC0:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_003F5BC4:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_003F5BC8:
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
L_003F5BF8:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[16], c.r[17].w[0] + 6884u);
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F5C2Cu); set32(c.r[5], ld32((c.r[16].w[0] + 24u)));  if (depth < kMaxDepth) unit_00BC(c, 287u, depth + 1u); else { c.pc = 0x003F2910u; return; } if (c.pc != 0x003F5C2Cu) [[unlikely]] return; }
L_003F5C2C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[16].w[0] + 20u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F5C3Cu); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BC(c, 287u, depth + 1u); else { c.pc = 0x003F2910u; return; } if (c.pc != 0x003F5C3Cu) [[unlikely]] return; }
L_003F5C3C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[16].w[0] + 28u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F5C4Cu); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BC(c, 287u, depth + 1u); else { c.pc = 0x003F2910u; return; } if (c.pc != 0x003F5C4Cu) [[unlikely]] return; }
L_003F5C4C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 9;
    { set32(c.r[29], c.r[29].w[0] + 48u);  [[clang::musttail]] return unit_00BF(c, 52u, depth); }
L_003F5C70:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    set32(c.r[17], c.r[16].w[0] + 6884u);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F5C98u); set32(c.r[5], ld32((c.r[17].w[0] + 24u)));  if (depth < kMaxDepth) unit_00BC(c, 288u, depth + 1u); else { c.pc = 0x003F2930u; return; } if (c.pc != 0x003F5C98u) [[unlikely]] return; }
L_003F5C98:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[17].w[0] + 20u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F5CA8u); c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BC(c, 288u, depth + 1u); else { c.pc = 0x003F2930u; return; } if (c.pc != 0x003F5CA8u) [[unlikely]] return; }
L_003F5CA8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[17].w[0] + 28u)));
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F5CBCu); c.r[18].d[0] = c.r[18].d[0] & c.r[19].d[0];  if (depth < kMaxDepth) unit_00BC(c, 288u, depth + 1u); else { c.pc = 0x003F2930u; return; } if (c.pc != 0x003F5CBCu) [[unlikely]] return; }
L_003F5CBC:
    c.r[2].d[0] = c.r[18].d[0] & c.r[2].d[0];
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003F5CE0:
    set32(c.r[3], ld32((c.r[4].w[0] + 6892u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 20u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[3].w[0] + 20u), c.r[2].w[0]);  c.pc = t; return; }
L_003F5CF8:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    set32(c.r[17], c.r[16].w[0] + 6884u);
    st64((c.r[29].w[0] + 40u), c.r[21].d[0]);
    c.r[21].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[22].d[0]);
    c.r[22].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[2].d[0] = c.r[21].sd[0] < 4ll ? 1ull : 0ull;
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 56u), c.r[23].d[0]);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    set32(c.r[19], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[20], ld32((c.r[17].w[0] + 16u)));
    c.budget -= 20;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[23], ld32((c.r[16].w[0] + 40u)));  if (t) { goto L_003F5DA0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F5D50u);  if (depth < kMaxDepth) unit_00B8(c, 77u, depth + 1u); else { c.pc = 0x003E2940u; return; } if (c.pc != 0x003F5D50u) [[unlikely]] return; }
L_003F5D50:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00080000u);
    c.budget -= 4;
    { const bool t = c.r[18].d[0] != c.r[2].d[0];  if (t) { goto L_003F5D90; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 32u)));
    c.budget -= 3;
    if (c.r[2].sd[0] >= 0) { set32(c.r[2], 0u + 1u);  goto L_003F5D84; }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F5D78u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BC(c, 255u, depth + 1u); else { c.pc = 0x003F2158u; return; } if (c.pc != 0x003F5D78u) [[unlikely]] return; }
L_003F5D78:
    set32(c.r[2], c.r[2].w[0] + 4u);
    st32((c.r[17].w[0] + 32u), c.r[2].w[0]);
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
L_003F5D84:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 48u), c.r[2].w[0]);  if (t) { goto L_003F5DA4; } }
    c.budget -= 1;
L_003F5D90:
    c.budget -= 2;
    if (c.r[18].d[0] != 0ull) { st32((c.r[19].w[0] + 48u), 0u);  goto L_003F5DA4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003F5DA8; } }
L_003F5DA0:
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003F5DA4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_003F5DA8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F5DB0u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BD(c, 229u, depth + 1u); else { c.pc = 0x003F5E48u; return; } if (c.pc != 0x003F5DB0u) [[unlikely]] return; }
L_003F5DB0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003F5DC8; } }
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[6], 0u + 1u);  if (t) { goto L_003F5DF8; } }
    c.budget -= 1;
L_003F5DC8:
    c.r[2].d[0] = c.r[22].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = c.r[21].sd[0] < c.r[23].sd[0] ? 1ull : 0ull;  goto L_003F5E08; }
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F5DE0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BC(c, 288u, depth + 1u); else { c.pc = 0x003F2930u; return; } if (c.pc != 0x003F5DE0u) [[unlikely]] return; }
L_003F5DE0:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { c.r[2].d[0] = c.r[21].sd[0] < c.r[23].sd[0] ? 1ull : 0ull;  goto L_003F5E08; }
    set32(c.r[6], ld32((c.r[19].w[0] + 48u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
L_003F5DF8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F5E00u);  if (depth < kMaxDepth) unit_00BD(c, 214u, depth + 1u); else { c.pc = 0x003F5BF8u; return; } if (c.pc != 0x003F5E00u) [[unlikely]] return; }
L_003F5E00:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003F5E1C; } }
L_003F5E08:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], 0u + 1u);  goto L_003F5E1C; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[2].d[0] = c.r[18].d[0] ^ c.r[2].d[0];
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
L_003F5E1C:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[23].d[0] = ld64((c.r[29].w[0] + 56u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003F5E48:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00080000u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 7;
    { const bool t = c.r[5].d[0] != c.r[3].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003F5E88; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F5E6Cu);  if (depth < kMaxDepth) unit_00BC(c, 296u, depth + 1u); else { c.pc = 0x003F2A00u; return; } if (c.pc != 0x003F5E6Cu) [[unlikely]] return; }
L_003F5E6C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003F5E84; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F5E7Cu);  if (depth < kMaxDepth) unit_00BC(c, 298u, depth + 1u); else { c.pc = 0x003F2A20u; return; } if (c.pc != 0x003F5E7Cu) [[unlikely]] return; }
L_003F5E7C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], 0u + 1u);  goto L_003F5E88; }
L_003F5E84:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003F5E88:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003F5E98:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F5EB4u); set32(c.r[6], c.r[29].w[0] + 4u);  if (depth < kMaxDepth) unit_00BD(c, 258u, depth + 1u); else { c.pc = 0x003F6168u; return; } if (c.pc != 0x003F5EB4u) [[unlikely]] return; }
L_003F5EB4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F5EBCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BD(c, 238u, depth + 1u); else { c.pc = 0x003F5EE8u; return; } if (c.pc != 0x003F5EBCu) [[unlikely]] return; }
L_003F5EBC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F5EC4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BD(c, 262u, depth + 1u); else { c.pc = 0x003F6218u; return; } if (c.pc != 0x003F5EC4u) [[unlikely]] return; }
L_003F5EC4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F5ECCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BD(c, 252u, depth + 1u); else { c.pc = 0x003F60A0u; return; } if (c.pc != 0x003F5ECCu) [[unlikely]] return; }
L_003F5ECC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F5ED4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BD(c, 265u, depth + 1u); else { c.pc = 0x003F62B0u; return; } if (c.pc != 0x003F5ED4u) [[unlikely]] return; }
L_003F5ED4:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003F5EE8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F5F08u); set32(c.r[18], 0u + 1u);  if (depth < kMaxDepth) unit_00BD(c, 242u, depth + 1u); else { c.pc = 0x003F5F70u; return; } if (c.pc != 0x003F5F08u) [[unlikely]] return; }
L_003F5F08:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[18].d[0]; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003F5F58; } }
    set32(c.r[16], ld32((c.r[17].w[0] + 6900u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F5F1Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BC(c, 286u, depth + 1u); else { c.pc = 0x003F28F0u; return; } if (c.pc != 0x003F5F1Cu) [[unlikely]] return; }
L_003F5F1C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[18].d[0]; c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003F5F58; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F5F30u);  if (depth < kMaxDepth) unit_00BD(c, 249u, depth + 1u); else { c.pc = 0x003F6040u; return; } if (c.pc != 0x003F5F30u) [[unlikely]] return; }
L_003F5F30:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003F5F58; } }
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[5], 0u + 1u);
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 32u);  goto L_003F5FE0; }
L_003F5F58:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003F5F70:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    set32(c.r[17], c.r[16].w[0] + 6884u);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F5F98u); set32(c.r[5], ld32((c.r[17].w[0] + 24u)));  if (depth < kMaxDepth) unit_00BC(c, 286u, depth + 1u); else { c.pc = 0x003F28F0u; return; } if (c.pc != 0x003F5F98u) [[unlikely]] return; }
L_003F5F98:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[17].w[0] + 20u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F5FA8u); c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BC(c, 286u, depth + 1u); else { c.pc = 0x003F28F0u; return; } if (c.pc != 0x003F5FA8u) [[unlikely]] return; }
L_003F5FA8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[17].w[0] + 28u)));
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F5FBCu); c.r[18].d[0] = c.r[18].d[0] | c.r[19].d[0];  if (depth < kMaxDepth) unit_00BC(c, 286u, depth + 1u); else { c.pc = 0x003F28F0u; return; } if (c.pc != 0x003F5FBCu) [[unlikely]] return; }
L_003F5FBC:
    c.r[2].d[0] = c.r[18].d[0] | c.r[2].d[0];
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003F5FE0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    set32(c.r[17], c.r[16].w[0] + 6884u);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F600Cu); set32(c.r[5], ld32((c.r[17].w[0] + 24u)));  if (depth < kMaxDepth) unit_00BC(c, 285u, depth + 1u); else { c.pc = 0x003F28D0u; return; } if (c.pc != 0x003F600Cu) [[unlikely]] return; }
L_003F600C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[17].w[0] + 20u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F601Cu); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BC(c, 285u, depth + 1u); else { c.pc = 0x003F28D0u; return; } if (c.pc != 0x003F601Cu) [[unlikely]] return; }
L_003F601C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[17].w[0] + 28u)));
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 9;
    { set32(c.r[29], c.r[29].w[0] + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003F28D0u | kUnwind; return; } [[clang::musttail]] return unit_00BC(c, 285u, depth); }
L_003F6040:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F6054u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BD(c, 162u, depth + 1u); else { c.pc = 0x003F5268u; return; } if (c.pc != 0x003F6054u) [[unlikely]] return; }
L_003F6054:
    set32(c.r[6], ld32((c.r[16].w[0] + 8u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[16], c.r[16].w[0] + 2464u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { const bool t = c.r[6].sd[0] > 0; set32(c.r[7], ld32((c.r[16].w[0] + 88u)));  if (t) { goto L_003F6070; } }
    set32(c.r[6], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 1;
L_003F6070:
    c.r[2].d[0] = 0ll < c.r[6].sd[0] ? 1ull : 0ull;
    if (c.r[2].d[0] == 0) c.r[6].d[0] = c.r[7].d[0];
    c.r[3].d[0] = c.r[6].sd[0] < c.r[7].sd[0] ? 1ull : 0ull;
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F6088u); if (c.r[3].d[0] == 0) c.r[16].d[0] = c.r[7].d[0];  if (depth < kMaxDepth) unit_00BC(c, 256u, depth + 1u); else { c.pc = 0x003F2178u; return; } if (c.pc != 0x003F6088u) [[unlikely]] return; }
L_003F6088:
    c.r[2].d[0] = c.r[2].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003F60A0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[5], 0u + 6u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F60C0u); set32(c.r[17], ld32((c.r[16].w[0] + 6892u)));  if (depth < kMaxDepth) unit_00C0(c, 20u, depth + 1u); else { c.pc = 0x00400258u; return; } if (c.pc != 0x003F60C0u) [[unlikely]] return; }
L_003F60C0:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003F60FC; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003F60FC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F60E0u); set32(c.r[5], 0u + 6u);  if (depth < kMaxDepth) unit_00C0(c, 242u, depth + 1u); else { c.pc = 0x00402878u; return; } if (c.pc != 0x003F60E0u) [[unlikely]] return; }
L_003F60E0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 6u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_003F60FC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F60F8u);  if (depth < kMaxDepth) unit_00C0(c, 9u, depth + 1u); else { c.pc = 0x00400090u; return; } if (c.pc != 0x003F60F8u) [[unlikely]] return; }
L_003F60F8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_003F60FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F6104u); set32(c.r[5], 0u + 5u);  if (depth < kMaxDepth) unit_00C0(c, 20u, depth + 1u); else { c.pc = 0x00400258u; return; } if (c.pc != 0x003F6104u) [[unlikely]] return; }
L_003F6104:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_003F6154; }
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_003F6154; }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F6128u); set32(c.r[5], 0u + 7u);  if (depth < kMaxDepth) unit_00C0(c, 242u, depth + 1u); else { c.pc = 0x00402878u; return; } if (c.pc != 0x003F6128u) [[unlikely]] return; }
L_003F6128:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 5u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_003F6150; } }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 32u);  [[clang::musttail]] return unit_00C0(c, 9u, depth); }
L_003F6150:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_003F6154:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003F6168:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 32u), c.r[16].d[0]);
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 3;
L_003F6174:
    st64((c.r[29].w[0] + 40u), c.r[17].d[0]);
    c.r[17].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[18].d[0]);
    c.r[18].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 72u), c.r[21].d[0]);
    c.r[21].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 80u), c.r[22].d[0]);
    c.r[22].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 56u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 64u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 88u), c.r[31].d[0]);
    set32(c.r[19], ld32((c.r[4].w[0] + 6892u)));
    set32(c.r[20], ld32((c.r[19].w[0])));
    c.budget -= 13;
L_003F61A8:
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F61BCu); c.r[5].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B8(c, 88u, depth + 1u); else { c.pc = 0x003E2A58u; return; } if (c.pc != 0x003F61BCu) [[unlikely]] return; }
L_003F61BC:
    c.r[6].d[0] = c.r[16].sd[0] < 3ll ? 1ull : 0ull;
    set32(c.r[4], ld32((c.r[29].w[0] + 8u)));
    set32(c.r[5], ld32((c.r[29].w[0] + 12u)));
    c.r[2].d[0] = c.r[4].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;
    c.r[3].d[0] = c.r[5].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    if (c.r[2].d[0] == 0) c.r[18].d[0] = c.r[4].d[0];
    c.budget -= 8;
    { const bool t = c.r[6].d[0] != 0ull; if (c.r[3].d[0] == 0) c.r[17].d[0] = c.r[5].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003F61A8u | kUnwind; return; } goto L_003F61A8; } }
    st32((c.r[19].w[0] + 4u), c.r[17].w[0]);
    st32((c.r[19].w[0] + 8u), c.r[18].w[0]);
    st32((c.r[21].w[0]), c.r[18].w[0]);
    c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 40u));
    st32((c.r[22].w[0]), c.r[2].w[0]);
    c.r[18].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 56u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 72u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 88u));
    c.budget -= 15;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_003F6218:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 56u), c.r[17].d[0]);
    set32(c.r[17], c.r[4].w[0] + 2316u);
    st64((c.r[29].w[0] + 48u), c.r[16].d[0]);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    st64((c.r[29].w[0] + 64u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 72u), c.r[31].d[0]);
    set32(c.r[18], ld32((c.r[4].w[0] + 6892u)));
    set32(c.r[16], ld32((c.r[18].w[0])));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F6244u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B8(c, 86u, depth + 1u); else { c.pc = 0x003E29E8u; return; } if (c.pc != 0x003F6244u) [[unlikely]] return; }
L_003F6244:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[29].w[0] + 8u)));
    set32(c.r[5], c.r[29].w[0] + 16u);
    c.budget -= 5;
    { const bool t = c.r[2].sd[0] <= 0; set32(c.r[6], 0u + 1u);  if (t) { goto L_003F625C; } }
    st32((c.r[17].w[0] + 24u), c.r[2].w[0]);
    c.budget -= 1;
L_003F625C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F6264u);  if (depth < kMaxDepth) unit_00B8(c, 88u, depth + 1u); else { c.pc = 0x003E2A58u; return; } if (c.pc != 0x003F6264u) [[unlikely]] return; }
L_003F6264:
    set32(c.r[3], 0u - 1u);
    set32(c.r[2], ld32((c.r[29].w[0] + 32u)));
    c.budget -= 4;
    if (c.r[2].d[0] != c.r[3].d[0]) { st32((c.r[17].w[0] + 28u), c.r[2].w[0]);  goto L_003F6274; }
L_003F6274:
    set32(c.r[2], ld32((c.r[17].w[0] + 36u)));
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[2], ld32((c.r[17].w[0] + 40u)));  goto L_003F628C; }
    set32(c.r[2], ld32((c.r[18].w[0] + 8u)));
    st32((c.r[17].w[0] + 36u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 40u)));
    c.budget -= 3;
L_003F628C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; c.r[16].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_003F629C; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    st32((c.r[17].w[0] + 40u), c.r[2].w[0]);
    c.budget -= 2;
L_003F629C:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 56u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 72u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003F62B0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F62C4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BD(c, 301u, depth + 1u); else { c.pc = 0x003F67C8u; return; } if (c.pc != 0x003F62C4u) [[unlikely]] return; }
L_003F62C4:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);  if (t) { goto L_003F6354; } }
    set32(c.r[6], ld32((c.r[16].w[0] + 6892u)));
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    set32(c.r[7], c.r[16].w[0] + 3264u);
    set32(c.r[3], ld32((c.r[6].w[0] + 16u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[4], c.r[16].w[0] + 2316u);  if (t) { goto L_003F6354; } }
    set32(c.r[2], ld32((c.r[5].w[0] + 24u)));
    set32(c.r[2], c.r[3].w[0] - c.r[2].w[0]);
    st32((c.r[7].w[0] + 280u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0])));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_003F6358; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    st32((c.r[5].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 28u)));
    st32((c.r[5].w[0] + 8u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[6].w[0] + 4u)));
    st32((c.r[5].w[0] + 12u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[6].w[0] + 8u)));
    st32((c.r[5].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[7].w[0] + 276u)));
    st32((c.r[5].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[6].w[0] + 12u)));
    st32((c.r[5].w[0] + 24u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[6].w[0] + 32u)));
    st32((c.r[5].w[0] + 28u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[6].w[0] + 36u)));
    st32((c.r[5].w[0] + 32u), c.r[3].w[0]);
    c.budget -= 21;
L_003F6354:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_003F6358:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003F6368:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 32u), c.r[16].d[0]);
    st64((c.r[29].w[0] + 40u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 56u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F6390u); c.r[19].d[0] = c.r[7].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BD(c, 301u, depth + 1u); else { c.pc = 0x003F67C8u; return; } if (c.pc != 0x003F6390u) [[unlikely]] return; }
L_003F6390:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_003F6408; }
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_003F6408; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F63B4u); c.r[5].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B8(c, 90u, depth + 1u); else { c.pc = 0x003E2B08u; return; } if (c.pc != 0x003F63B4u) [[unlikely]] return; }
L_003F63B4:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[2], 0u + 176u);
    c.r[3].d[0] = c.r[7].sd[0] < 177ll ? 1ull : 0ull;
    set32(c.r[4], ld32((c.r[29].w[0] + 12u)));
    if (c.r[3].d[0] == 0) c.r[7].d[0] = c.r[2].d[0];
    set32(c.r[3], c.r[16].w[0] + 36u);
    c.r[6].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 10;
    { const bool t = c.r[4].sd[0] <= 0; c.r[2].d[0] = c.r[3].d[0] + 0ull;  if (t) { goto L_003F63E8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 352u), c.r[7].w[0]);  if (t) { goto L_003F63FC; } }
    c.budget -= 1;
L_003F63E8:
    set32(c.r[2], ld32((c.r[29].w[0] + 8u)));
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_003F6408; }
    st32((c.r[3].w[0] + 356u), c.r[7].w[0]);
    set32(c.r[2], c.r[16].w[0] + 212u);
    c.budget -= 2;
L_003F63FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F6404u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B8(c, 36u, depth + 1u); else { c.pc = 0x003E0A78u; return; } if (c.pc != 0x003F6404u) [[unlikely]] return; }
L_003F6404:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_003F6408:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 56u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003F6420:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    set32(c.r[18], c.r[17].w[0] + 7428u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F6448u); st32((c.r[17].w[0] + 6892u), c.r[18].w[0]);  if (depth < kMaxDepth) unit_00BD(c, 276u, depth + 1u); else { c.pc = 0x003F64E8u; return; } if (c.pc != 0x003F6448u) [[unlikely]] return; }
L_003F6448:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F6450u);  if (depth < kMaxDepth) unit_00B8(c, 125u, depth + 1u); else { c.pc = 0x003E3008u; return; } if (c.pc != 0x003F6450u) [[unlikely]] return; }
L_003F6450:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[5].d[0] | 3336ull;
    c.budget -= 6;
    { const bool t = c.r[16].d[0] != 0ull; c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003F6480; } }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003F4840u | kUnwind; return; } goto L_003F4840; }
L_003F6480:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x003F0000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F6490u); set32(c.r[5], c.r[5].w[0] + 25944u);  if (depth < kMaxDepth) unit_00B8(c, 117u, depth + 1u); else { c.pc = 0x003E2E98u; return; } if (c.pc != 0x003F6490u) [[unlikely]] return; }
L_003F6490:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003F64C8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F64A0u);  if (depth < kMaxDepth) unit_00BD(c, 282u, depth + 1u); else { c.pc = 0x003F65C0u; return; } if (c.pc != 0x003F64A0u) [[unlikely]] return; }
L_003F64A0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[5].d[0] = c.r[5].d[0] | 3337ull;
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 9;
    { set32(c.r[29], c.r[29].w[0] + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003F4840u | kUnwind; return; } goto L_003F4840; }
L_003F64C8:
    st32((c.r[18].w[0]), c.r[16].w[0]);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003F64E8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    set32(c.r[3], 0u - 1u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    st32((c.r[4].w[0] + 44u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 28u), c.r[2].w[0]);
    set32(c.r[6], 0u + 67u);
    st32((c.r[4].w[0]), 0u);
    set32(c.r[5], c.r[4].w[0] + 320u);
    st32((c.r[4].w[0] + 4u), 0u);
    st32((c.r[4].w[0] + 8u), 0u);
    st32((c.r[4].w[0] + 12u), c.r[2].w[0]);
    st32((c.r[4].w[0] + 16u), c.r[2].w[0]);
    st32((c.r[4].w[0] + 20u), 0u);
    st32((c.r[4].w[0] + 24u), c.r[2].w[0]);
    st32((c.r[4].w[0] + 32u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 36u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 40u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 48u), 0u);
    c.budget -= 18;
L_003F6530:
    set32(c.r[6], c.r[6].w[0] - 1u);
    st32((c.r[5].w[0]), 0u);
    c.budget -= 7;
    { const bool t = c.r[6].sd[0] >= 0; set32(c.r[5], c.r[5].w[0] - 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003F6530u | kUnwind; return; } goto L_003F6530; } }
    st32((c.r[4].w[0] + 328u), 0u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 324u), 0u);  c.pc = t; return; }
L_003F6558:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003F4840u | kUnwind; return; } goto L_003F4840; }
L_003F656C:
    c.budget -= 1;
L_003F6570:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 6892u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F658Cu); set32(c.r[4], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_00BD(c, 282u, depth + 1u); else { c.pc = 0x003F65C0u; return; } if (c.pc != 0x003F658Cu) [[unlikely]] return; }
L_003F658C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003F65B0; } }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[5].d[0] = c.r[5].d[0] | 3338ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003F4840u | kUnwind; return; } goto L_003F4840; }
L_003F65B0:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003F65C0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003E3180u | kUnwind; return; } [[clang::musttail]] return unit_00B8(c, 141u, depth); }
L_003F65D8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_003F65E0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_003F65E8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_003F65F0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_003F65F8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = c.r[5].d[0] | 3339ull;
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003F4840u | kUnwind; return; } goto L_003F4840; }
L_003F6618:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = c.r[5].d[0] | 3339ull;
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003F4840u | kUnwind; return; } goto L_003F4840; }
L_003F6638:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = c.r[5].d[0] | 3339ull;
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003F4840u | kUnwind; return; } goto L_003F4840; }
L_003F6658:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = c.r[5].d[0] | 3339ull;
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003F4840u | kUnwind; return; } goto L_003F4840; }
L_003F6678:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F6698u); c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BD(c, 301u, depth + 1u); else { c.pc = 0x003F67C8u; return; } if (c.pc != 0x003F6698u) [[unlikely]] return; }
L_003F6698:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_003F6704; }
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003F6700; } }
    set32(c.r[18], ld32((c.r[17].w[0] + 6892u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F66BCu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BC(c, 416u, depth + 1u); else { c.pc = 0x003F3EA8u; return; } if (c.pc != 0x003F66BCu) [[unlikely]] return; }
L_003F66BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F66C4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BD(c, 296u, depth + 1u); else { c.pc = 0x003F6720u; return; } if (c.pc != 0x003F66C4u) [[unlikely]] return; }
L_003F66C4:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F66D8u); set32(c.r[19], c.r[17].w[0] + 3264u);  if (depth < kMaxDepth) unit_00BD(c, 297u, depth + 1u); else { c.pc = 0x003F6728u; return; } if (c.pc != 0x003F66D8u) [[unlikely]] return; }
L_003F66D8:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_003F6704; }
    set32(c.r[3], ld32((c.r[16].w[0] + 28u)));
    st32((c.r[18].w[0] + 32u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 32u)));
    st32((c.r[18].w[0] + 36u), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 20u)));
    st32((c.r[19].w[0] + 276u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 24u)));
    st32((c.r[18].w[0] + 12u), c.r[4].w[0]);
    c.budget -= 8;
L_003F6700:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_003F6704:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003F6720:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003F6728:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    c.r[7].d[0] = c.r[29].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 40u), c.r[19].d[0]);
    set32(c.r[16], c.r[18].w[0] + 36u);
    st64((c.r[29].w[0] + 48u), c.r[20].d[0]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[17].d[0]);
    set32(c.r[8], c.r[29].w[0] + 4u);
    st64((c.r[29].w[0] + 56u), c.r[31].d[0]);
    set32(c.r[17], ld32((c.r[5].w[0])));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[16].w[0] + 352u)));
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F676Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B8(c, 60u, depth + 1u); else { c.pc = 0x003E1018u; return; } if (c.pc != 0x003F676Cu) [[unlikely]] return; }
L_003F676C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[16].w[0] + 356u)));
    set32(c.r[5], c.r[18].w[0] + 212u);
    c.r[7].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[8], c.r[29].w[0] + 4u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F6788u); c.r[19].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B8(c, 60u, depth + 1u); else { c.pc = 0x003E1018u; return; } if (c.pc != 0x003F6788u) [[unlikely]] return; }
L_003F6788:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    c.budget -= 4;
    { const bool t = c.r[19].d[0] != 0ull; c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_003F67A0; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_003F67AC; } }
L_003F67A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F67A8u); c.r[5].d[0] = c.r[5].d[0] | 3341ull;  if (depth < kMaxDepth) unit_00BD(c, 82u, depth + 1u); else { c.pc = 0x003F4840u; return; } if (c.pc != 0x003F67A8u) [[unlikely]] return; }
L_003F67A8:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_003F67AC:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 56u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003F67C8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 10928u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003F6804; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F67ECu);  if (depth < kMaxDepth) unit_00BD(c, 303u, depth + 1u); else { c.pc = 0x003F6818u; return; } if (c.pc != 0x003F67ECu) [[unlikely]] return; }
L_003F67EC:
    c.budget -= 2;
    if (c.r[2].sd[0] <= 0) { set32(c.r[2], ld32((c.r[16].w[0] + 10928u)));  goto L_003F6800; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003F6804; } }
    c.budget -= 1;
L_003F6800:
    set32(c.r[2], c.r[2].w[0] + 2208u);
    c.budget -= 1;
L_003F6804:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003F6818:
    set32(c.r[3], ld32((c.r[4].w[0] + 6892u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[3].w[0] + 20u)));  c.pc = t; return; }
L_003F6828:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[7], c.r[7].w[0] + 3752u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[8], 0u - 64u);
    ldl(c.r[3], (c.r[4].w[0] + 7u));
    ldr(c.r[3], (c.r[4].w[0]));
    ldl(c.r[5], (c.r[4].w[0] + 15u));
    ldr(c.r[5], (c.r[4].w[0] + 8u));
    ldl(c.r[6], (c.r[4].w[0] + 23u));
    ldr(c.r[6], (c.r[4].w[0] + 16u));
    ldl(c.r[9], (c.r[4].w[0] + 31u));
    ldr(c.r[9], (c.r[4].w[0] + 24u));
    sdl(c.r[3], (c.r[7].w[0] + 7u));
    sdr(c.r[3], (c.r[7].w[0]));
    sdl(c.r[5], (c.r[7].w[0] + 15u));
    sdr(c.r[5], (c.r[7].w[0] + 8u));
    sdl(c.r[6], (c.r[7].w[0] + 23u));
    sdr(c.r[6], (c.r[7].w[0] + 16u));
    sdl(c.r[9], (c.r[7].w[0] + 31u));
    sdr(c.r[9], (c.r[7].w[0] + 24u));
    set32(c.r[3], ld32((c.r[4].w[0] + 32u)));
    st32((c.r[7].w[0] + 32u), c.r[3].w[0]);
    set32(c.r[4], c.r[2].w[0] + 3792u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 8u);
    set32(c.r[2], ld32((c.r[7].w[0] + 16u)));
    set32(c.r[3], ld32((c.r[7].w[0] + 32u)));
    set32(c.r[2], c.r[2].w[0] + 63u);
    set32(c.r[3], c.r[3].w[0] + 63u);
    c.r[2].d[0] = c.r[2].d[0] & c.r[8].d[0];
    c.r[3].d[0] = c.r[3].d[0] & c.r[8].d[0];
    st32((c.r[7].w[0] + 16u), c.r[2].w[0]);
    c.budget -= 36;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F68B8u); st32((c.r[7].w[0] + 32u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_0009(c, 49u, depth + 1u); else { c.pc = 0x00124ED8u; return; } if (c.pc != 0x003F68B8u) [[unlikely]] return; }
L_003F68B8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] + 3800u);
    set32(c.r[6], 0u + 64u);
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00124ED8u | kUnwind; return; } [[clang::musttail]] return unit_0009(c, 49u, depth); }
L_003F68D8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[9].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 3752u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    ldl(c.r[4], (c.r[9].w[0] + 7u));
    ldr(c.r[4], (c.r[9].w[0]));
    ldl(c.r[7], (c.r[9].w[0] + 15u));
    ldr(c.r[7], (c.r[9].w[0] + 8u));
    ldl(c.r[8], (c.r[9].w[0] + 23u));
    ldr(c.r[8], (c.r[9].w[0] + 16u));
    ldl(c.r[10], (c.r[9].w[0] + 31u));
    ldr(c.r[10], (c.r[9].w[0] + 24u));
    sdl(c.r[4], (c.r[2].w[0] + 7u));
    sdr(c.r[4], (c.r[2].w[0]));
    sdl(c.r[7], (c.r[2].w[0] + 15u));
    sdr(c.r[7], (c.r[2].w[0] + 8u));
    sdl(c.r[8], (c.r[2].w[0] + 23u));
    sdr(c.r[8], (c.r[2].w[0] + 16u));
    sdl(c.r[10], (c.r[2].w[0] + 31u));
    sdr(c.r[10], (c.r[2].w[0] + 24u));
    set32(c.r[4], ld32((c.r[9].w[0] + 32u)));
    set32(c.r[11], c.r[3].w[0] + 3792u);
    st32((c.r[2].w[0] + 32u), c.r[4].w[0]);
    c.r[8].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[2].w[0] + 32u), 0u);
    c.r[7].d[0] = 0ull + 0ull;
    st32((c.r[2].w[0] + 16u), 0u);
    set32(c.r[10], 0u - 64u);
    c.budget -= 28;
L_003F6948:
    set32(c.r[4], c.r[7].w[0] << 2);
    set32(c.r[7], c.r[7].w[0] + 1u);
    set32(c.r[3], c.r[4].w[0] + c.r[8].w[0]);
    set32(c.r[4], c.r[4].w[0] + c.r[11].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.r[5].d[0] = c.r[7].sd[0] < 2ll ? 1ull : 0ull;
    set32(c.r[2], c.r[2].w[0] + 63u);
    c.r[2].d[0] = c.r[2].d[0] & c.r[10].d[0];
    c.budget -= 10;
    { const bool t = c.r[5].d[0] != 0ull; st32((c.r[4].w[0]), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003F6948u | kUnwind; return; } goto L_003F6948; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], ld32((c.r[9].w[0] + 28u)));
    set32(c.r[5], c.r[2].w[0] + 3800u);
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[10], 0u - 64u);
    c.r[9].d[0] = 0ull + 0ull;
    c.budget -= 6;
L_003F6988:
    c.r[2].d[0] = c.r[7].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[8].d[0] = c.r[7].sd[0] < 16ll ? 1ull : 0ull;  if (t) { goto L_003F69B0; } }
    set32(c.r[3], c.r[9].w[0] + c.r[6].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0])));
    set32(c.r[2], c.r[2].w[0] + 63u);
    c.r[2].d[0] = c.r[2].d[0] & c.r[10].d[0];
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[5].w[0]), c.r[2].w[0]);  if (t) { goto L_003F69B4; } }
L_003F69B0:
    st32((c.r[5].w[0]), 0u);
    c.budget -= 1;
L_003F69B4:
    set32(c.r[5], c.r[5].w[0] + 4u);
    c.budget -= 3;
    { const bool t = c.r[8].d[0] != 0ull; set32(c.r[9], c.r[9].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003F6988u | kUnwind; return; } goto L_003F6988; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003F69C8:
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[10], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[2], c.r[3].w[0] + 15u);
    set32(c.r[3], c.r[3].w[0] + 30u);
    c.r[6].d[0] = c.r[2].sd[0] < 0ll ? 1ull : 0ull;
    set32(c.r[9], c.r[10].w[0] + 15u);
    if (c.r[6].d[0] != 0) c.r[2].d[0] = c.r[3].d[0];
    c.r[11].d[0] = c.r[9].sd[0] < 0ll ? 1ull : 0ull;
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 4));
    set32(c.r[10], c.r[10].w[0] + 30u);
    set32(c.r[8], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[7], c.r[8].w[0] + 63u);
    set32(c.r[8], c.r[8].w[0] + 126u);
    set32(c.r[6], c.r[2].w[0] + 63u);
    set32(c.r[2], c.r[2].w[0] + 126u);
    c.r[3].d[0] = c.r[7].sd[0] < 0ll ? 1ull : 0ull;
    if (c.r[11].d[0] != 0) c.r[9].d[0] = c.r[10].d[0];
    if (c.r[3].d[0] != 0) c.r[7].d[0] = c.r[8].d[0];
    c.r[3].d[0] = c.r[6].sd[0] < 0ll ? 1ull : 0ull;
    if (c.r[3].d[0] != 0) c.r[6].d[0] = c.r[2].d[0];
    set32(c.r[3], ld32((c.r[4].w[0] + 32u)));
    set32(c.r[7], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[7].w[0]) >> 6));
    set32(c.r[9], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[9].w[0]) >> 4));
    mmi::mult(c, 0, c.r[7].w[0], c.r[9].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[7], c.r[7].w[0] << 6);
    set32(c.r[6], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[6].w[0]) >> 6));
    st16((c.r[5].w[0] + 14u), static_cast<std::uint16_t>(c.r[7].w[0]));
    mmi::mult(c, 1, c.r[6].w[0], c.r[9].w[0]);
    c.r[9].d[0] = c.lo.d[1];
    set32(c.r[6], c.r[6].w[0] << 6);
    st16((c.r[5].w[0] + 12u), static_cast<std::uint16_t>(c.r[6].w[0]));
    set32(c.r[2], c.r[2].w[0] << 10);
    st32((c.r[5].w[0] + 8u), c.r[3].w[0]);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[9], c.r[9].w[0] << 9);
    st32((c.r[5].w[0]), c.r[2].w[0]);
    set32(c.r[9], c.r[2].w[0] + c.r[9].w[0]);
    c.budget -= 39;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[5].w[0] + 4u), c.r[9].w[0]);  c.pc = t; return; }
L_003F6A68:
    set32(c.r[2], c.r[5].w[0] + 15u);
    set32(c.r[5], c.r[5].w[0] + 30u);
    c.r[3].d[0] = c.r[2].sd[0] < 0ll ? 1ull : 0ull;
    set32(c.r[10], c.r[6].w[0] + 15u);
    if (c.r[3].d[0] != 0) c.r[2].d[0] = c.r[5].d[0];
    c.r[11].d[0] = c.r[10].sd[0] < 0ll ? 1ull : 0ull;
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 4));
    set32(c.r[6], c.r[6].w[0] + 30u);
    set32(c.r[5], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[8], c.r[5].w[0] + 63u);
    set32(c.r[5], c.r[5].w[0] + 126u);
    set32(c.r[9], c.r[2].w[0] + 63u);
    set32(c.r[2], c.r[2].w[0] + 126u);
    c.r[3].d[0] = c.r[8].sd[0] < 0ll ? 1ull : 0ull;
    if (c.r[11].d[0] != 0) c.r[10].d[0] = c.r[6].d[0];
    if (c.r[3].d[0] != 0) c.r[8].d[0] = c.r[5].d[0];
    c.r[3].d[0] = c.r[9].sd[0] < 0ll ? 1ull : 0ull;
    if (c.r[3].d[0] != 0) c.r[9].d[0] = c.r[2].d[0];
    set32(c.r[8], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[8].w[0]) >> 6));
    set32(c.r[10], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[10].w[0]) >> 4));
    set32(c.r[9], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[9].w[0]) >> 6));
    mmi::mult(c, 0, c.r[8].w[0], c.r[10].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    mmi::mult(c, 1, c.r[9].w[0], c.r[10].w[0]);
    c.r[10].d[0] = c.lo.d[1];
    set32(c.r[8], c.r[8].w[0] << 6);
    set32(c.r[9], c.r[9].w[0] << 6);
    st16((c.r[7].w[0] + 14u), static_cast<std::uint16_t>(c.r[8].w[0]));
    st16((c.r[7].w[0] + 12u), static_cast<std::uint16_t>(c.r[9].w[0]));
    set32(c.r[2], c.r[2].w[0] << 10);
    set32(c.r[10], c.r[10].w[0] << 9);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    st32((c.r[7].w[0] + 8u), c.r[4].w[0]);
    set32(c.r[10], c.r[2].w[0] + c.r[10].w[0]);
    st32((c.r[7].w[0]), c.r[2].w[0]);
    c.budget -= 36;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[7].w[0] + 4u), c.r[10].w[0]);  c.pc = t; return; }
L_003F6AF8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[3].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 10;
    { const bool t = c.r[16].d[0] == 0ull; st64((c.r[29].w[0] + 24u), c.r[31].d[0]);  if (t) { goto L_003F6B58; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F6B28u);  if (depth < kMaxDepth) unit_00BD(c, 94u, depth + 1u); else { c.pc = 0x003F4A60u; return; } if (c.pc != 0x003F6B28u) [[unlikely]] return; }
L_003F6B28:
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_003F6B50; } }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[5].d[0] = c.r[5].d[0] | 385ull;
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003F4840u | kUnwind; return; } goto L_003F4840; }
L_003F6B50:
    set32(c.r[2], ld32((c.r[16].w[0] + 6960u)));
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.budget -= 2;
L_003F6B58:
    c.r[2].d[0] = c.r[17].d[0] ^ 5ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[3].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F6B70u); if (c.r[2].d[0] != 0) c.r[6].d[0] = c.r[18].d[0];  if (depth < kMaxDepth) unit_00B9(c, 173u, depth + 1u); else { c.pc = 0x003E62D8u; return; } if (c.pc != 0x003F6B70u) [[unlikely]] return; }
L_003F6B70:
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003F6B98; } }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[5].d[0] = c.r[5].d[0] | 3858ull;
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003F4840u | kUnwind; return; } goto L_003F4840; }
L_003F6B98:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003F6BB0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F6BD0u); st32((c.r[16].w[0]), 0u);  if (depth < kMaxDepth) unit_00BD(c, 94u, depth + 1u); else { c.pc = 0x003F4A60u; return; } if (c.pc != 0x003F6BD0u) [[unlikely]] return; }
L_003F6BD0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_003F6BF8; } }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[5].d[0] = c.r[5].d[0] | 386ull;
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003F4840u | kUnwind; return; } goto L_003F4840; }
L_003F6BF8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F6C00u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BE(c, 258u, depth + 1u); else { c.pc = 0x003FB1C0u; return; } if (c.pc != 0x003F6C00u) [[unlikely]] return; }
L_003F6C00:
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.r[2].d[0] = 0ull + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003F6C20:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F6C34u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BD(c, 94u, depth + 1u); else { c.pc = 0x003F4A60u; return; } if (c.pc != 0x003F6C34u) [[unlikely]] return; }
L_003F6C34:
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[5].d[0] | 387ull;  if (t) { goto L_003F6C60; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F6C4Cu); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00BD(c, 82u, depth + 1u); else { c.pc = 0x003F4840u; return; } if (c.pc != 0x003F6C4Cu) [[unlikely]] return; }
L_003F6C4C:
    c.r[2].d[0] = 0ull + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003F6C60:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00BE(c, 276u, depth); }
L_003F6C70:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[8].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 40u), c.r[31].d[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F6CA4u); c.r[20].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BD(c, 94u, depth + 1u); else { c.pc = 0x003F4A60u; return; } if (c.pc != 0x003F6CA4u) [[unlikely]] return; }
L_003F6CA4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.r[8].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[5].d[0] | 388ull;  if (t) { goto L_003F6CE0; } }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 40u));
    c.budget -= 8;
    { set32(c.r[29], c.r[29].w[0] + 48u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003F4840u | kUnwind; return; } goto L_003F4840; }
L_003F6CE0:
    set32(c.r[2], ld32((c.r[19].w[0] + 6960u)));
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F6CF0u); set32(c.r[4], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_00B9(c, 5u, depth + 1u); else { c.pc = 0x003E40D8u; return; } if (c.pc != 0x003F6CF0u) [[unlikely]] return; }
L_003F6CF0:
    c.r[2].d[0] = 0ull + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 40u));
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003F6D18:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F6D44u); c.r[19].d[0] = c.r[7].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BD(c, 94u, depth + 1u); else { c.pc = 0x003F4A60u; return; } if (c.pc != 0x003F6D44u) [[unlikely]] return; }
L_003F6D44:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_003F6D70; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[5].d[0] = c.r[5].d[0] | 389ull;
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 9;
    { set32(c.r[29], c.r[29].w[0] + 48u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003F4840u | kUnwind; return; } goto L_003F4840; }
L_003F6D70:
    set32(c.r[2], ld32((c.r[18].w[0] + 6960u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull; set32(c.r[4], c.r[2].w[0] + 2364u);  if (t) { goto L_003F6D8C; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_003F6D8C; } }
    c.budget -= 2;
    if (c.r[19].d[0] != 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 44u)));  goto L_003F6DA0; }
L_003F6D8C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F6D94u);  if (depth < kMaxDepth) unit_00BE(c, 207u, depth + 1u); else { c.pc = 0x003FA8D0u; return; } if (c.pc != 0x003F6D94u) [[unlikely]] return; }
L_003F6D94:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003F6E3C; } }
    c.budget -= 1;
L_003F6DA0:
    set32(c.r[2], c.r[2].w[0] + 4u);
    c.r[2].d[0] = c.r[17].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { st32((c.r[4].w[0]), c.r[16].w[0]);  goto L_003F6DD8; }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[5].d[0] = c.r[5].d[0] | 3869ull;
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 10;
    { set32(c.r[29], c.r[29].w[0] + 48u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003F4840u | kUnwind; return; } goto L_003F4840; }
L_003F6DD8:
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[4].w[0] + 12u), c.r[16].w[0]);
    set32(c.r[16], c.r[16].w[0] + c.r[19].w[0]);
    st32((c.r[4].w[0] + 4u), c.r[17].w[0]);
    set32(c.r[17], c.r[17].w[0] - 2u);
    st32((c.r[4].w[0] + 20u), c.r[16].w[0]);
    set32(c.r[16], c.r[16].w[0] + c.r[19].w[0]);
    st32((c.r[4].w[0] + 8u), c.r[19].w[0]);
    st32((c.r[4].w[0] + 16u), 0u);
    st32((c.r[4].w[0] + 24u), 0u);
    c.budget -= 12;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = c.r[17].sd[0] < 17ll ? 1ull : 0ull;  if (t) { goto L_003F6E24; } }
L_003F6E08:
    set32(c.r[5], c.r[5].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] + 16u);
    set32(c.r[3], c.r[4].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = c.r[3].d[0] + 0ull;
    st32((c.r[3].w[0] + 16u), 0u);
    st32((c.r[2].w[0] + 12u), c.r[16].w[0]);
    set32(c.r[16], c.r[16].w[0] + c.r[19].w[0]);
    c.budget -= 7;
L_003F6E24:
    set32(c.r[2], 0u + 16u);
    if (c.r[6].d[0] != 0) c.r[2].d[0] = c.r[17].d[0];
    c.r[2].d[0] = c.r[5].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[5].w[0] << 3);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003F6E08u | kUnwind; return; } goto L_003F6E08; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003F6E3C:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003F6E58:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F6E68u);  if (depth < kMaxDepth) unit_00BF(c, 12u, depth + 1u); else { c.pc = 0x003FC170u; return; } if (c.pc != 0x003F6E68u) [[unlikely]] return; }
L_003F6E68:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F6E70u);  if (depth < kMaxDepth) unit_00BD(c, 335u, depth + 1u); else { c.pc = 0x003F6F38u; return; } if (c.pc != 0x003F6E70u) [[unlikely]] return; }
L_003F6E70:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);  if (t) { goto L_003F6E98; } }
L_003F6E78:
    c.budget -= 7;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003F6E78u | kUnwind; return; } goto L_003F6E78; } }
    c.budget -= 1;
L_003F6E98:
    set32(c.r[4], 0u + 8u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F6EA4u); set32(c.r[5], c.r[5].w[0] - 12696u);  if (depth < kMaxDepth) unit_00B9(c, 114u, depth + 1u); else { c.pc = 0x003E5C98u; return; } if (c.pc != 0x003F6EA4u) [[unlikely]] return; }
L_003F6EA4:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_003F6EE0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFF030000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    c.r[2].d[0] = c.r[2].d[0] | 65285ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    c.r[2].d[0] = c.r[4].d[0] ^ c.r[2].d[0];
    c.r[4].d[0] = 0ull + 0ull;
    c.r[3].d[0] = c.r[3].d[0] | 3841ull;
    c.r[5].d[0] = c.r[5].d[0] | 3859ull;
    if (c.r[2].d[0] != 0) c.r[5].d[0] = c.r[3].d[0];
    c.budget -= 11;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003F4840u | kUnwind; return; } goto L_003F4840; }
L_003F6EE0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] + 3752u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F6EF4u); set32(c.r[6], 0u + 36u);  if (depth < kMaxDepth) unit_0009(c, 49u, depth + 1u); else { c.pc = 0x00124ED8u; return; } if (c.pc != 0x003F6EF4u) [[unlikely]] return; }
L_003F6EF4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] + 3792u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F6F08u); set32(c.r[6], 0u + 8u);  if (depth < kMaxDepth) unit_0009(c, 49u, depth + 1u); else { c.pc = 0x00124ED8u; return; } if (c.pc != 0x003F6F08u) [[unlikely]] return; }
L_003F6F08:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] + 3800u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F6F1Cu); set32(c.r[6], 0u + 64u);  if (depth < kMaxDepth) unit_0009(c, 49u, depth + 1u); else { c.pc = 0x00124ED8u; return; } if (c.pc != 0x003F6F1Cu) [[unlikely]] return; }
L_003F6F1C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00450000u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = 0ull + 0ull;
    st32((c.r[3].w[0] - 16856u), 0u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003F6F38:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_003F6F40:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F6F50u);  if (depth < kMaxDepth) unit_00B9(c, 148u, depth + 1u); else { c.pc = 0x003E60A8u; return; } if (c.pc != 0x003F6F50u) [[unlikely]] return; }
L_003F6F50:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003F6F60:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  goto L_003F6F78; }
L_003F6F78:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[5], 0u + 5u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F6F94u); c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C0(c, 20u, depth + 1u); else { c.pc = 0x00400258u; return; } if (c.pc != 0x003F6F94u) [[unlikely]] return; }
L_003F6F94:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003F6FE0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F6FA4u);  if (depth < kMaxDepth) unit_00BD(c, 349u, depth + 1u); else { c.pc = 0x003F7068u; return; } if (c.pc != 0x003F6FA4u) [[unlikely]] return; }
L_003F6FA4:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003F6FB8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003F6FE0; } }
L_003F6FB8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F6FC0u);  if (depth < kMaxDepth) unit_00BD(c, 346u, depth + 1u); else { c.pc = 0x003F6FF8u; return; } if (c.pc != 0x003F6FC0u) [[unlikely]] return; }
L_003F6FC0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F6FC8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BD(c, 375u, depth + 1u); else { c.pc = 0x003F73B0u; return; } if (c.pc != 0x003F6FC8u) [[unlikely]] return; }
L_003F6FC8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F6FD4u); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BD(c, 350u, depth + 1u); else { c.pc = 0x003F7080u; return; } if (c.pc != 0x003F6FD4u) [[unlikely]] return; }
L_003F6FD4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F6FDCu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BD(c, 369u, depth + 1u); else { c.pc = 0x003F72E8u; return; } if (c.pc != 0x003F6FDCu) [[unlikely]] return; }
L_003F6FDC:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_003F6FE0:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003F6FF8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[5], 0u + 28u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F7010u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C0(c, 20u, depth + 1u); else { c.pc = 0x00400258u; return; } if (c.pc != 0x003F7010u) [[unlikely]] return; }
L_003F7010:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003F7058; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F7020u);  if (depth < kMaxDepth) unit_00BD(c, 53u, depth + 1u); else { c.pc = 0x003F45E8u; return; } if (c.pc != 0x003F7020u) [[unlikely]] return; }
L_003F7020:
    set32(c.r[6], 0u + 1u);
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[5], 0u + 5u);  if (t) { goto L_003F7048; } }
    c.budget -= 2;
    { const bool t = c.r[3].sd[0] > 0; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_003F7048; } }
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[16].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_003F705C; } }
L_003F7048:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003F6AF8u | kUnwind; return; } goto L_003F6AF8; }
L_003F7058:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_003F705C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003F7068:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[5], ld32((c.r[4].w[0] + 6972u)));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003F2930u | kUnwind; return; } [[clang::musttail]] return unit_00BC(c, 288u, depth); }
L_003F7080:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    set32(c.r[19], 0u + 1u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[2], c.r[17].w[0] + 6952u);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[18], ld32((c.r[2].w[0] + 20u)));
    set32(c.r[16], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F70B4u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BC(c, 286u, depth + 1u); else { c.pc = 0x003F28F0u; return; } if (c.pc != 0x003F70B4u) [[unlikely]] return; }
L_003F70B4:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[19].d[0]; c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003F7110; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F70C8u);  if (depth < kMaxDepth) unit_00BC(c, 286u, depth + 1u); else { c.pc = 0x003F28F0u; return; } if (c.pc != 0x003F70C8u) [[unlikely]] return; }
L_003F70C8:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[19].d[0]) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_003F7114; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F70D8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BD(c, 355u, depth + 1u); else { c.pc = 0x003F7130u; return; } if (c.pc != 0x003F70D8u) [[unlikely]] return; }
L_003F70D8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003F7110; } }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F70ECu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_00BC(c, 285u, depth + 1u); else { c.pc = 0x003F28D0u; return; } if (c.pc != 0x003F70ECu) [[unlikely]] return; }
L_003F70EC:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 8;
    { set32(c.r[29], c.r[29].w[0] + 48u);  goto L_003F72C0; }
L_003F7110:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_003F7114:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003F7130:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F7144u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BE(c, 256u, depth + 1u); else { c.pc = 0x003FB1A0u; return; } if (c.pc != 0x003F7144u) [[unlikely]] return; }
L_003F7144:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003F716C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F7154u);  if (depth < kMaxDepth) unit_00BD(c, 359u, depth + 1u); else { c.pc = 0x003F7190u; return; } if (c.pc != 0x003F7154u) [[unlikely]] return; }
L_003F7154:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003F7178; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F7164u);  if (depth < kMaxDepth) unit_00BD(c, 361u, depth + 1u); else { c.pc = 0x003F71D8u; return; } if (c.pc != 0x003F7164u) [[unlikely]] return; }
L_003F7164:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_003F717C; }
L_003F716C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_003F717C; } }
    c.budget -= 1;
L_003F7178:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003F717C:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003F7190:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[16], ld32((c.r[5].w[0] + 2556u)));
    set32(c.r[2], ld32((c.r[5].w[0] + 44u)));
    c.r[3].d[0] = ~(0ull | c.r[16].d[0]);
    if (c.r[3].d[0] == 0) c.r[16].d[0] = c.r[2].d[0];
    c.r[5].d[0] = c.r[2].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F71BCu); if (c.r[5].d[0] != 0) c.r[16].d[0] = c.r[2].d[0];  if (depth < kMaxDepth) unit_00BE(c, 258u, depth + 1u); else { c.pc = 0x003FB1C0u; return; } if (c.pc != 0x003F71BCu) [[unlikely]] return; }
L_003F71BC:
    c.r[2].d[0] = c.r[2].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003F71D8:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[17].d[0]);
    set32(c.r[16], c.r[18].w[0] + 120u);
    st64((c.r[29].w[0] + 40u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    set32(c.r[19], ld32((c.r[18].w[0] + 6960u)));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F7204u); set32(c.r[17], ld32((c.r[19].w[0])));  if (depth < kMaxDepth) unit_00BE(c, 16u, depth + 1u); else { c.pc = 0x003F8260u; return; } if (c.pc != 0x003F7204u) [[unlikely]] return; }
L_003F7204:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[3].d[0]) { c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_003F72A4; }
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003F722C; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 124u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_003F72A0; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003F722C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F7234u); c.r[5].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B8(c, 185u, depth + 1u); else { c.pc = 0x003E3F30u; return; } if (c.pc != 0x003F7234u) [[unlikely]] return; }
L_003F7234:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00030000u);
    set32(c.r[6], ld32((c.r[29].w[0])));
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    set32(c.r[5], 0u + 1u);
    c.budget -= 7;
    { const bool t = c.r[6].d[0] == c.r[3].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_003F72A0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F7258u);  if (depth < kMaxDepth) unit_00BC(c, 256u, depth + 1u); else { c.pc = 0x003F2178u; return; } if (c.pc != 0x003F7258u) [[unlikely]] return; }
L_003F7258:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[19].w[0] + 232u)));
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[6].d[0] == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_003F72A0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F7278u);  if (depth < kMaxDepth) unit_00C0(c, 245u, depth + 1u); else { c.pc = 0x004028C0u; return; } if (c.pc != 0x003F7278u) [[unlikely]] return; }
L_003F7278:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[17].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F7288u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BC(c, 256u, depth + 1u); else { c.pc = 0x003F2178u; return; } if (c.pc != 0x003F7288u) [[unlikely]] return; }
L_003F7288:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F7298u); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BC(c, 254u, depth + 1u); else { c.pc = 0x003F2138u; return; } if (c.pc != 0x003F7298u) [[unlikely]] return; }
L_003F7298:
    c.r[16].d[0] = c.r[16].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 2;
L_003F72A0:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_003F72A4:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003F72C0:
    set32(c.r[4], c.r[4].w[0] + 3492u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    set32(c.r[3], ld32((c.r[4].w[0] + 32u)));
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_003F72DC; } }
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.budget -= 1;
L_003F72DC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003F72E8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F7308u); set32(c.r[18], c.r[16].w[0] + 2380u);  if (depth < kMaxDepth) unit_00BE(c, 258u, depth + 1u); else { c.pc = 0x003FB1C0u; return; } if (c.pc != 0x003F7308u) [[unlikely]] return; }
L_003F7308:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == c.r[2].d[0]; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003F733C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F7320u);  if (depth < kMaxDepth) unit_00BE(c, 256u, depth + 1u); else { c.pc = 0x003FB1A0u; return; } if (c.pc != 0x003F7320u) [[unlikely]] return; }
L_003F7320:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_003F7378; } }
    c.budget -= 2;
    if (c.r[17].d[0] != c.r[3].d[0]) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_003F737C; }
    set32(c.r[2], ld32((c.r[18].w[0] + 20u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_003F737C; }
L_003F733C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F7348u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00BD(c, 374u, depth + 1u); else { c.pc = 0x003F7390u; return; } if (c.pc != 0x003F7348u) [[unlikely]] return; }
L_003F7348:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[18].w[0])));
    set32(c.r[5], 0u + 5u);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_003F7378; } }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 4;
L_003F736C:
    c.budget -= 2;
    { set32(c.r[29], c.r[29].w[0] + 32u);  [[clang::musttail]] return unit_00C0(c, 9u, depth); }
L_003F7378:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_003F737C:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003F7390:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[5], ld32((c.r[4].w[0] + 6972u)));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003F2910u | kUnwind; return; } [[clang::musttail]] return unit_00BC(c, 287u, depth); }
L_003F73B0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
L_003F73C8:
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F73D4u); set32(c.r[6], c.r[29].w[0] + 4u);  if (depth < kMaxDepth) unit_00BD(c, 379u, depth + 1u); else { c.pc = 0x003F7420u; return; } if (c.pc != 0x003F73D4u) [[unlikely]] return; }
L_003F73D4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[7], c.r[29].w[0] + 8u);  if (t) { goto L_003F7408; } }
    set32(c.r[5], ld32((c.r[29].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F73F0u); set32(c.r[6], ld32((c.r[29].w[0] + 4u)));  if (depth < kMaxDepth) unit_00BD(c, 417u, depth + 1u); else { c.pc = 0x003F7B88u; return; } if (c.pc != 0x003F73F0u) [[unlikely]] return; }
L_003F73F0:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_003F740C; }
    set32(c.r[2], ld32((c.r[29].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003F73C8u | kUnwind; return; } goto L_003F73C8; } }
L_003F7408:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_003F740C:
    c.r[2].d[0] = c.r[3].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003F7420:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 56u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 64u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 72u), c.r[19].d[0]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[16].d[0]);
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st32((c.r[19].w[0]), 0u);
    set32(c.r[16], ld32((c.r[17].w[0] + 6968u)));
    st32((c.r[18].w[0]), 0u);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F745Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BC(c, 223u, depth + 1u); else { c.pc = 0x003F1C18u; return; } if (c.pc != 0x003F745Cu) [[unlikely]] return; }
L_003F745C:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[16].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_003F7614; }
    set32(c.r[3], ld32((c.r[29].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[5], 0u + 206u);  if (t) { goto L_003F7610; } }
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F747Cu); set32(c.r[6], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_00BD(c, 399u, depth + 1u); else { c.pc = 0x003F78C8u; return; } if (c.pc != 0x003F747Cu) [[unlikely]] return; }
L_003F747C:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[29].w[0])));
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[2].d[0]; set32(c.r[3], ld32((c.r[29].w[0] + 32u)));  if (t) { goto L_003F74B0; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != 0ull; set32(c.r[3], ld32((c.r[29].w[0] + 12u)));  if (t) { goto L_003F7600; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] - 3u);
    c.r[3].d[0] = c.r[2].sd[0] < 0ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = 0ull == 0ull; if (c.r[3].d[0] != 0) c.r[2].d[0] = 0ull;  if (t) { goto L_003F7608; } }
    c.budget -= 1;
L_003F74B0:
    set32(c.r[2], 0u + 4u);
    st32((c.r[19].w[0]), c.r[2].w[0]);
    c.r[2].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[3].d[0] & 128ull;
    c.budget -= 6;
    { const bool t = c.r[4].d[0] != 0ull; st32((c.r[18].w[0]), c.r[3].w[0]);  if (t) { goto L_003F7610; } }
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 36u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F74DCu); set32(c.r[7], c.r[29].w[0] + 40u);  if (depth < kMaxDepth) unit_00BC(c, 248u, depth + 1u); else { c.pc = 0x003F2060u; return; } if (c.pc != 0x003F74DCu) [[unlikely]] return; }
L_003F74DC:
    set32(c.r[5], ld32((c.r[29].w[0] + 32u)));
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F74ECu); set32(c.r[6], ld32((c.r[29].w[0] + 36u)));  if (depth < kMaxDepth) unit_00BD(c, 390u, depth + 1u); else { c.pc = 0x003F7630u; return; } if (c.pc != 0x003F74ECu) [[unlikely]] return; }
L_003F74EC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], ld32((c.r[29].w[0] + 12u)));  if (t) { goto L_003F754C; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[29].w[0] + 36u), 0u);  if (t) { goto L_003F7510; } }
    set32(c.r[3], ld32((c.r[29].w[0])));
    set32(c.r[2], ld32((c.r[29].w[0] + 4u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);  if (t) { goto L_003F7518; } }
    c.budget -= 1;
L_003F7510:
    set32(c.r[2], ld32((c.r[29].w[0] + 8u)));
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 2;
L_003F7518:
    set32(c.r[2], ld32((c.r[29].w[0] + 40u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; c.r[4].d[0] = c.r[29].d[0] + 0ull;  if (t) { goto L_003F754C; } }
    set32(c.r[5], 0u + 204u);
    set32(c.r[6], c.r[29].w[0] + 44u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F7534u); st32((c.r[29].w[0] + 40u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_00BD(c, 408u, depth + 1u); else { c.pc = 0x003F7A20u; return; } if (c.pc != 0x003F7534u) [[unlikely]] return; }
L_003F7534:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[7], ld32((c.r[29].w[0] + 40u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F754Cu); st32((c.r[29].w[0] + 36u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00BC(c, 251u, depth + 1u); else { c.pc = 0x003F20D0u; return; } if (c.pc != 0x003F754Cu) [[unlikely]] return; }
L_003F754C:
    set32(c.r[4], ld32((c.r[29].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003F75E4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F7560u);  if (depth < kMaxDepth) unit_00B8(c, 143u, depth + 1u); else { c.pc = 0x003E31D0u; return; } if (c.pc != 0x003F7560u) [[unlikely]] return; }
L_003F7560:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u + 8u);
    c.r[3].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; st32((c.r[29].w[0] + 44u), c.r[4].w[0]);  if (t) { goto L_003F7598; } }
    c.r[2].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(9ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 64u);  if (t) { goto L_003F75F8; } }
    set32(c.r[2], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], ld32((c.r[29].w[0] + 36u)));  if (t) { goto L_003F75B0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_003F7600; } }
    c.budget -= 1;
L_003F7598:
    set32(c.r[2], ld32((c.r[29].w[0] + 32u)));
    c.r[2].d[0] = c.r[2].d[0] & 64ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], 0u + 8u);  if (t) { goto L_003F75F8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[29].d[0] + 0ull;  if (t) { goto L_003F75C4; } }
L_003F75B0:
    set32(c.r[2], ld32((c.r[29].w[0] + 32u)));
    c.r[2].d[0] = c.r[2].d[0] & 72ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], 0u + 4u);  if (t) { goto L_003F75F8; } }
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 1;
L_003F75C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F75CCu); set32(c.r[6], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_00BD(c, 399u, depth + 1u); else { c.pc = 0x003F78C8u; return; } if (c.pc != 0x003F75CCu) [[unlikely]] return; }
L_003F75CC:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_003F75E4; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[2].d[0]; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_003F7600; } }
L_003F75E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F75ECu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BD(c, 396u, depth + 1u); else { c.pc = 0x003F7840u; return; } if (c.pc != 0x003F75ECu) [[unlikely]] return; }
L_003F75EC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_003F7614; } }
    c.budget -= 1;
L_003F75F8:
    set32(c.r[2], ld32((c.r[29].w[0] + 36u)));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 2;
L_003F7600:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F7608u); c.r[4].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BD(c, 395u, depth + 1u); else { c.pc = 0x003F77D8u; return; } if (c.pc != 0x003F7608u) [[unlikely]] return; }
L_003F7608:
    st32((c.r[19].w[0]), c.r[2].w[0]);
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_003F7610:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_003F7614:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 56u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 72u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_003F7630:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[2], 0u + 1u);
    st64((c.r[29].w[0] + 40u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[16].d[0]);
    st64((c.r[29].w[0] + 56u), c.r[31].d[0]);
    c.budget -= 10;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[29].w[0] + 16u), c.r[5].w[0]);  if (t) { goto L_003F77BC; } }
    set32(c.r[3], ld32((c.r[18].w[0])));
    c.budget -= 3;
    if (c.r[17].d[0] == c.r[3].d[0]) { c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_003F77C0; }
    c.r[2].d[0] = c.r[17].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[18].w[0] + 8u)));  goto L_003F76D8; }
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.r[3].d[0] = c.r[17].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[3].d[0] == 0ull) { set32(c.r[3], ld32((c.r[18].w[0] + 8u)));  goto L_003F76D8; }
    set32(c.r[2], c.r[17].w[0] - c.r[2].w[0]);
    set32(c.r[16], c.r[2].w[0] + 4u);
    c.budget -= 4;
    { const bool t = c.r[16].sd[0] <= 0;  if (t) { goto L_003F7708; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 12u)));
    c.r[3].d[0] = c.r[3].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_003F77BC; } }
    set32(c.r[6], 0u + 4u);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[6], c.r[6].w[0] - c.r[16].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F76B8u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 40u, depth + 1u); else { c.pc = 0x00124D20u; return; } if (c.pc != 0x003F76B8u) [[unlikely]] return; }
L_003F76B8:
    set32(c.r[5], ld32((c.r[18].w[0] + 8u)));
    set32(c.r[4], c.r[29].w[0] - c.r[16].w[0]);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F76CCu); set32(c.r[4], c.r[4].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 40u, depth + 1u); else { c.pc = 0x00124D20u; return; } if (c.pc != 0x003F76CCu) [[unlikely]] return; }
L_003F76CC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003F7718; } }
    c.budget -= 1;
L_003F76D8:
    c.r[2].d[0] = c.r[17].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_003F77BC; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 12u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.r[3].d[0] = c.r[17].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[3].d[0] == 0ull) { set32(c.r[2], 0u + 1u);  goto L_003F77BC; }
    set32(c.r[3], c.r[17].w[0] - c.r[2].w[0]);
    set32(c.r[16], c.r[3].w[0] + 4u);
    c.budget -= 4;
    { const bool t = c.r[16].sd[0] > 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_003F77BC; } }
L_003F7708:
    lwl(c.r[2], (c.r[17].w[0] + 3u));
    lwr(c.r[2], (c.r[17].w[0]));
    swl(c.r[2], (c.r[29].w[0] + 3u));
    swr(c.r[2], (c.r[29].w[0]));
    c.budget -= 4;
L_003F7718:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F7720u); c.r[4].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B8(c, 143u, depth + 1u); else { c.pc = 0x003E31D0u; return; } if (c.pc != 0x003F7720u) [[unlikely]] return; }
L_003F7720:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u + 8u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[2].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(9ll) ? 1ull : 0ull;  if (t) { goto L_003F7768; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 64u);  if (t) { goto L_003F7750; } }
    set32(c.r[2], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_003F7780; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_003F77C0; } }
    c.budget -= 1;
L_003F7750:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 128u);  if (t) { goto L_003F77B8; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_003F77B8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_003F77C0; } }
L_003F7768:
    set32(c.r[2], ld32((c.r[29].w[0] + 16u)));
    c.r[2].d[0] = c.r[2].d[0] & 64ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_003F77B8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], 0u + 8u);  if (t) { goto L_003F7794; } }
L_003F7780:
    set32(c.r[2], ld32((c.r[29].w[0] + 16u)));
    c.r[2].d[0] = c.r[2].d[0] & 72ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_003F77B8; } }
    set32(c.r[5], 0u + 4u);
    c.budget -= 1;
L_003F7794:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F779Cu); set32(c.r[6], c.r[29].w[0] + 16u);  if (depth < kMaxDepth) unit_00BD(c, 399u, depth + 1u); else { c.pc = 0x003F78C8u; return; } if (c.pc != 0x003F779Cu) [[unlikely]] return; }
L_003F779C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], 0u + 1u);  goto L_003F77BC; }
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[17].d[0]) { c.r[2].d[0] = 0ull + 0ull;  goto L_003F77BC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_003F77BC; } }
    c.budget -= 1;
L_003F77B8:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003F77BC:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_003F77C0:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 56u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003F77D8:
    c.r[7].d[0] = c.r[4].d[0] + 0ull;
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[7].w[0])));
    c.r[2].d[0] = c.r[6].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[6].w[0] - c.r[3].w[0]);  if (t) { goto L_003F7804; } }
    set32(c.r[2], ld32((c.r[7].w[0] + 4u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = c.r[6].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003F7834; } }
L_003F7804:
    set32(c.r[5], ld32((c.r[7].w[0] + 8u)));
    c.r[2].d[0] = c.r[6].d[0] < c.r[5].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_003F7834; } }
    set32(c.r[2], ld32((c.r[7].w[0] + 12u)));
    set32(c.r[2], c.r[5].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = c.r[6].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003F7834; } }
    set32(c.r[3], ld32((c.r[7].w[0] + 4u)));
    set32(c.r[2], c.r[6].w[0] - c.r[5].w[0]);
    set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 3;
L_003F7834:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; return; }
L_003F7840:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    set32(c.r[18], ld32((c.r[16].w[0] + 6968u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F7864u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BC(c, 254u, depth + 1u); else { c.pc = 0x003F2138u; return; } if (c.pc != 0x003F7864u) [[unlikely]] return; }
L_003F7864:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F7874u); c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BC(c, 289u, depth + 1u); else { c.pc = 0x003F2950u; return; } if (c.pc != 0x003F7874u) [[unlikely]] return; }
L_003F7874:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[16].w[0] + 40u)));
    set32(c.r[17], c.r[17].w[0] - c.r[2].w[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    c.r[2].d[0] = 0ull + 0ull;
    c.r[17].d[0] = c.r[17].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[17].d[0] == 0ull; c.r[5].d[0] = c.r[5].d[0] | 3868ull;  if (t) { goto L_003F78B0; } }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003F4840u | kUnwind; return; } goto L_003F4840; }
L_003F78B0:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003F78C8:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 24u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 56u), c.r[21].d[0]);
    c.r[21].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 64u), c.r[22].d[0]);
    c.r[22].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    c.r[6].d[0] = c.r[21].d[0] + 0ull;
    st64((c.r[29].w[0] + 40u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 72u), c.r[31].d[0]);
    st32((c.r[22].w[0]), 0u);
    set32(c.r[5], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F790Cu); set32(c.r[4], ld32((c.r[18].w[0])));  if (depth < kMaxDepth) unit_00B8(c, 147u, depth + 1u); else { c.pc = 0x003E3368u; return; } if (c.pc != 0x003F790Cu) [[unlikely]] return; }
L_003F790C:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[17].d[0] == 0ull) { set32(c.r[7], ld32((c.r[18].w[0] + 12u)));  goto L_003F7938; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003F79E4; } }
L_003F7920:
    set32(c.r[2], ld32((c.r[18].w[0])));
    st32((c.r[22].w[0]), c.r[6].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] - c.r[19].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] + c.r[20].w[0]);  if (t) { goto L_003F79F4; } }
L_003F7938:
    c.budget -= 2;
    { const bool t = c.r[7].d[0] == 0ull; set32(c.r[3], 0u + 3u);  if (t) { goto L_003F79F4; } }
    set32(c.r[19], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[5], ld32((c.r[18].w[0])));
    c.r[16].d[0] = c.r[3].d[0] + 0ull;
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.r[2].d[0] = c.r[19].sd[0] < 4ll ? 1ull : 0ull;
    if (c.r[2].d[0] == 0) c.r[19].d[0] = c.r[3].d[0];
    c.r[2].d[0] = c.r[7].sd[0] < 4ll ? 1ull : 0ull;
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    if (c.r[2].d[0] != 0) c.r[16].d[0] = c.r[7].d[0];
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - c.r[19].w[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F7978u); c.r[20].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 40u, depth + 1u); else { c.pc = 0x00124D20u; return; } if (c.pc != 0x003F7978u) [[unlikely]] return; }
L_003F7978:
    set32(c.r[5], ld32((c.r[18].w[0] + 8u)));
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[16], c.r[19].w[0] + c.r[16].w[0]);
    set32(c.r[4], c.r[29].w[0] + c.r[19].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F7990u); set32(c.r[16], c.r[16].w[0] - 3u);  if (depth < kMaxDepth) unit_0009(c, 40u, depth + 1u); else { c.pc = 0x00124D20u; return; } if (c.pc != 0x003F7990u) [[unlikely]] return; }
L_003F7990:
    c.r[2].d[0] = c.r[17].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], ld32((c.r[18].w[0] + 12u)));  goto L_003F79CC; }
    c.budget -= 1;
L_003F79A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F79A8u); set32(c.r[4], c.r[29].w[0] + c.r[20].w[0]);  if (depth < kMaxDepth) unit_00B8(c, 143u, depth + 1u); else { c.pc = 0x003E31D0u; return; } if (c.pc != 0x003F79A8u) [[unlikely]] return; }
L_003F79A8:
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].d[0] = c.r[6].d[0] & c.r[21].d[0];
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[18].w[0] + 4u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003F7920u | kUnwind; return; } goto L_003F7920; }
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.r[2].d[0] = c.r[20].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003F79A0u | kUnwind; return; } goto L_003F79A0; } }
    set32(c.r[5], ld32((c.r[18].w[0] + 12u)));
    c.budget -= 1;
L_003F79CC:
    c.r[6].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F79D8u); set32(c.r[4], ld32((c.r[18].w[0] + 8u)));  if (depth < kMaxDepth) unit_00B8(c, 147u, depth + 1u); else { c.pc = 0x003E3368u; return; } if (c.pc != 0x003F79D8u) [[unlikely]] return; }
L_003F79D8:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[17].d[0] == 0ull) { c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_003F79F8; }
L_003F79E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F79ECu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B8(c, 143u, depth + 1u); else { c.pc = 0x003E31D0u; return; } if (c.pc != 0x003F79ECu) [[unlikely]] return; }
L_003F79EC:
    st32((c.r[22].w[0]), c.r[2].w[0]);
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 2;
L_003F79F4:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_003F79F8:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 56u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 72u));
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003F7A20:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 56u), c.r[21].d[0]);
    st64((c.r[29].w[0] + 64u), c.r[22].d[0]);
    c.r[22].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 40u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 72u), c.r[31].d[0]);
    st32((c.r[22].w[0]), 0u);
    set32(c.r[2], ld32((c.r[18].w[0] + 12u)));
    c.budget -= 15;
    { const bool t = c.r[2].d[0] == 0ull; c.r[21].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003F7B28; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 8u)));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[6].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F7A70u); set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_00B8(c, 144u, depth + 1u); else { c.pc = 0x003E3268u; return; } if (c.pc != 0x003F7A70u) [[unlikely]] return; }
L_003F7A70:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[17].d[0] == 0ull) { set32(c.r[19], ld32((c.r[18].w[0] + 4u)));  goto L_003F7AA0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003F7B4C; } }
    c.budget -= 1;
L_003F7A88:
    set32(c.r[2], ld32((c.r[18].w[0])));
    st32((c.r[22].w[0]), c.r[6].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] - c.r[19].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] + c.r[20].w[0]);  if (t) { goto L_003F7B5C; } }
L_003F7AA0:
    set32(c.r[7], 0u + 3u);
    set32(c.r[16], ld32((c.r[18].w[0] + 12u)));
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[18].w[0])));
    c.r[3].d[0] = c.r[19].d[0] + 0ull;
    c.r[2].d[0] = c.r[19].sd[0] < 4ll ? 1ull : 0ull;
    c.r[20].d[0] = 0ull + 0ull;
    if (c.r[2].d[0] == 0) c.r[19].d[0] = c.r[7].d[0];
    c.r[2].d[0] = c.r[16].sd[0] < 4ll ? 1ull : 0ull;
    set32(c.r[5], c.r[5].w[0] + c.r[3].w[0]);
    if (c.r[2].d[0] == 0) c.r[16].d[0] = c.r[7].d[0];
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F7AD8u); set32(c.r[5], c.r[5].w[0] - c.r[19].w[0]);  if (depth < kMaxDepth) unit_0009(c, 40u, depth + 1u); else { c.pc = 0x00124D20u; return; } if (c.pc != 0x003F7AD8u) [[unlikely]] return; }
L_003F7AD8:
    set32(c.r[5], ld32((c.r[18].w[0] + 8u)));
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[16], c.r[19].w[0] + c.r[16].w[0]);
    set32(c.r[4], c.r[29].w[0] + c.r[19].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F7AF0u); set32(c.r[16], c.r[16].w[0] - 3u);  if (depth < kMaxDepth) unit_0009(c, 40u, depth + 1u); else { c.pc = 0x00124D20u; return; } if (c.pc != 0x003F7AF0u) [[unlikely]] return; }
L_003F7AF0:
    c.r[2].d[0] = c.r[17].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 4u)));  goto L_003F7B2C; }
    c.budget -= 1;
L_003F7B00:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F7B08u); set32(c.r[4], c.r[29].w[0] + c.r[20].w[0]);  if (depth < kMaxDepth) unit_00B8(c, 143u, depth + 1u); else { c.pc = 0x003E31D0u; return; } if (c.pc != 0x003F7B08u) [[unlikely]] return; }
L_003F7B08:
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].d[0] = c.r[6].d[0] & c.r[21].d[0];
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[18].w[0] + 4u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003F7A88u | kUnwind; return; } goto L_003F7A88; }
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.r[2].d[0] = c.r[20].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003F7B00u | kUnwind; return; } goto L_003F7B00; } }
L_003F7B28:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 1;
L_003F7B2C:
    c.r[6].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[18].w[0])));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F7B40u); set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_00B8(c, 144u, depth + 1u); else { c.pc = 0x003E3268u; return; } if (c.pc != 0x003F7B40u) [[unlikely]] return; }
L_003F7B40:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[17].d[0] == 0ull) { c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_003F7B60; }
L_003F7B4C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F7B54u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B8(c, 143u, depth + 1u); else { c.pc = 0x003E31D0u; return; } if (c.pc != 0x003F7B54u) [[unlikely]] return; }
L_003F7B54:
    st32((c.r[22].w[0]), c.r[2].w[0]);
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 2;
L_003F7B5C:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_003F7B60:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 56u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 72u));
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003F7B88:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 72u), c.r[21].d[0]);
    c.r[21].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 40u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 64u), c.r[20].d[0]);
    set32(c.r[20], c.r[16].w[0] + 2380u);
    st64((c.r[29].w[0] + 80u), c.r[22].d[0]);
    c.r[22].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[18].d[0]);
    set32(c.r[2], c.r[16].w[0] + 6952u);
    st64((c.r[29].w[0] + 56u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 88u), c.r[31].d[0]);
    st32((c.r[21].w[0]), 0u);
    set32(c.r[18], ld32((c.r[2].w[0] + 16u)));
    set32(c.r[19], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F7BD8u); st32((c.r[20].w[0] + 32u), 0u);  if (depth < kMaxDepth) unit_00BF(c, 78u, depth + 1u); else { c.pc = 0x003FCC48u; return; } if (c.pc != 0x003F7BD8u) [[unlikely]] return; }
L_003F7BD8:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[19].w[0] + 120u)));  goto L_003F7C18; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F7BE8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BE(c, 16u, depth + 1u); else { c.pc = 0x003F8260u; return; } if (c.pc != 0x003F7BE8u) [[unlikely]] return; }
L_003F7BE8:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { st32((c.r[20].w[0] + 32u), c.r[3].w[0]);  goto L_003F7C08; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F7BFCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BE(c, 255u, depth + 1u); else { c.pc = 0x003FB190u; return; } if (c.pc != 0x003F7BFCu) [[unlikely]] return; }
L_003F7BFC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003F7DB8; } }
    c.budget -= 1;
L_003F7C08:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F7C10u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BD(c, 396u, depth + 1u); else { c.pc = 0x003F7840u; return; } if (c.pc != 0x003F7C10u) [[unlikely]] return; }
L_003F7C10:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_003F7DBC; } }
L_003F7C18:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[3].d[0] = c.r[17].d[0] & 204ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 204ull;
    set32(c.r[6], c.r[29].w[0] + 16u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F7C34u); if (c.r[2].d[0] != 0) c.r[17].d[0] = c.r[3].d[0];  if (depth < kMaxDepth) unit_00BC(c, 260u, depth + 1u); else { c.pc = 0x003F2218u; return; } if (c.pc != 0x003F7C34u) [[unlikely]] return; }
L_003F7C34:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[18].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003F7DB8; } }
    c.r[2].d[0] = c.r[17].d[0] & 200ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003F7C54; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F7C54u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00BE(c, 257u, depth + 1u); else { c.pc = 0x003FB1B0u; return; } if (c.pc != 0x003F7C54u) [[unlikely]] return; }
L_003F7C54:
    set32(c.r[2], 0u + 128u);
    c.budget -= 3;
    if (c.r[17].d[0] != c.r[2].d[0]) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_003F7CB4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F7C68u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BD(c, 440u, depth + 1u); else { c.pc = 0x003F7E30u; return; } if (c.pc != 0x003F7C68u) [[unlikely]] return; }
L_003F7C68:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F7C70u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BC(c, 296u, depth + 1u); else { c.pc = 0x003F2A00u; return; } if (c.pc != 0x003F7C70u) [[unlikely]] return; }
L_003F7C70:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], ld32((c.r[29].w[0] + 16u)));  if (t) { goto L_003F7C90; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F7C80u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BD(c, 442u, depth + 1u); else { c.pc = 0x003F7EE0u; return; } if (c.pc != 0x003F7C80u) [[unlikely]] return; }
L_003F7C80:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = c.r[18].d[0] + 0ull;  goto L_003F7DB8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_003F7DB0; } }
L_003F7C90:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F7C98u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BC(c, 301u, depth + 1u); else { c.pc = 0x003F2A68u; return; } if (c.pc != 0x003F7C98u) [[unlikely]] return; }
L_003F7C98:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], ld32((c.r[29].w[0] + 16u)));  if (t) { goto L_003F7CB0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F7CA8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BE(c, 6u, depth + 1u); else { c.pc = 0x003F8138u; return; } if (c.pc != 0x003F7CA8u) [[unlikely]] return; }
L_003F7CA8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_003F7DB0; } }
L_003F7CB0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_003F7CB4:
    c.r[5].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F7CC0u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BE(c, 14u, depth + 1u); else { c.pc = 0x003F8218u; return; } if (c.pc != 0x003F7CC0u) [[unlikely]] return; }
L_003F7CC0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = c.r[22].sd[0] < 5ll ? 1ull : 0ull;  goto L_003F7CD8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F7CD0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BE(c, 255u, depth + 1u); else { c.pc = 0x003FB190u; return; } if (c.pc != 0x003F7CD0u) [[unlikely]] return; }
L_003F7CD0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_003F7DB8; } }
L_003F7CD8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = c.r[17].d[0] & 76ull;  if (t) { goto L_003F7CF0; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 32u), c.r[2].w[0]);  if (t) { goto L_003F7DB4; } }
    c.budget -= 1;
L_003F7CF0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[29].d[0] + 0ull;  if (t) { goto L_003F7D40; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F7D00u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BD(c, 438u, depth + 1u); else { c.pc = 0x003F7DE0u; return; } if (c.pc != 0x003F7D00u) [[unlikely]] return; }
L_003F7D00:
    set32(c.r[7], ld32((c.r[19].w[0] + 120u)));
    set32(c.r[6], ld32((c.r[29].w[0] + 16u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[7].d[0] = c.r[17].d[0] & c.r[7].d[0];
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F7D1Cu); c.r[7].d[0] = 0ull < c.r[7].d[0] ? 1ull : 0ull;  if (depth < kMaxDepth) unit_00BE(c, 18u, depth + 1u); else { c.pc = 0x003F8318u; return; } if (c.pc != 0x003F7D1Cu) [[unlikely]] return; }
L_003F7D1C:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[18].d[0] != 0ull; c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_003F7DBC; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 120u)));
    c.r[2].d[0] = c.r[17].d[0] & c.r[2].d[0];
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 204u);  if (t) { goto L_003F7DAC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 120u), c.r[2].w[0]);  if (t) { goto L_003F7DAC; } }
L_003F7D40:
    c.r[2].d[0] = c.r[17].d[0] & 2ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], 0u + 128u);  goto L_003F7D98; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F7D54u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BE(c, 82u, depth + 1u); else { c.pc = 0x003F9298u; return; } if (c.pc != 0x003F7D54u) [[unlikely]] return; }
L_003F7D54:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003F7DB8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F7D64u); c.r[5].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BE(c, 83u, depth + 1u); else { c.pc = 0x003F92A8u; return; } if (c.pc != 0x003F7D64u) [[unlikely]] return; }
L_003F7D64:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], ld32((c.r[29].w[0] + 16u)));  if (t) { goto L_003F7D88; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F7D74u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BE(c, 110u, depth + 1u); else { c.pc = 0x003F9778u; return; } if (c.pc != 0x003F7D74u) [[unlikely]] return; }
L_003F7D74:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[18].d[0] != 0ull) { c.r[2].d[0] = c.r[18].d[0] + 0ull;  goto L_003F7DB8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_003F7DB0; } }
L_003F7D88:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F7D90u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BE(c, 119u, depth + 1u); else { c.pc = 0x003F98C0u; return; } if (c.pc != 0x003F7D90u) [[unlikely]] return; }
L_003F7D90:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_003F7DB4; } }
L_003F7D98:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == c.r[2].d[0]; set32(c.r[5], ld32((c.r[29].w[0] + 16u)));  if (t) { goto L_003F7DB4; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F7DACu); set32(c.r[6], 0u + 204u);  if (depth < kMaxDepth) unit_00BE(c, 168u, depth + 1u); else { c.pc = 0x003FA2D0u; return; } if (c.pc != 0x003F7DACu) [[unlikely]] return; }
L_003F7DAC:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_003F7DB0:
    st32((c.r[21].w[0]), c.r[2].w[0]);
    c.budget -= 1;
L_003F7DB4:
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_003F7DB8:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_003F7DBC:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 56u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 72u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 88u));
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_003F7DE0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[16].d[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 40u), c.r[31].d[0]);
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F7DFCu); set32(c.r[5], ld32((c.r[4].w[0] + 6968u)));  if (depth < kMaxDepth) unit_00BC(c, 223u, depth + 1u); else { c.pc = 0x003F1C18u; return; } if (c.pc != 0x003F7DFCu) [[unlikely]] return; }
L_003F7DFC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], ld32((c.r[29].w[0])));  if (t) { goto L_003F7E10; } }
    st32((c.r[16].w[0] + 4u), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0]), 0u);  if (t) { goto L_003F7E1C; } }
L_003F7E10:
    set32(c.r[2], ld32((c.r[29].w[0] + 4u)));
    st32((c.r[16].w[0]), c.r[3].w[0]);
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 3;
L_003F7E1C:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 40u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003F7E30:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    set32(c.r[18], c.r[17].w[0] + 3372u);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    set32(c.r[16], c.r[17].w[0] + 6952u);
    set32(c.r[2], ld32((c.r[16].w[0] + 32u)));
    c.budget -= 11;
    { const bool t = c.r[2].sd[0] >= 0; set32(c.r[5], ld32((c.r[16].w[0] + 16u)));  if (t) { goto L_003F7E6C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F7E64u);  if (depth < kMaxDepth) unit_00BC(c, 255u, depth + 1u); else { c.pc = 0x003F2158u; return; } if (c.pc != 0x003F7E64u) [[unlikely]] return; }
L_003F7E64:
    set32(c.r[2], c.r[2].w[0] + 4u);
    st32((c.r[16].w[0] + 32u), c.r[2].w[0]);
    c.budget -= 2;
L_003F7E6C:
    set32(c.r[2], ld32((c.r[18].w[0] + 32u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] >= 0; c.r[16].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_003F7EC8; } }
    ldl(c.r[2], (c.r[17].w[0] + 3339u));
    ldr(c.r[2], (c.r[17].w[0] + 3332u));
    ldl(c.r[3], (c.r[17].w[0] + 3347u));
    ldr(c.r[3], (c.r[17].w[0] + 3340u));
    ldl(c.r[4], (c.r[17].w[0] + 3355u));
    ldr(c.r[4], (c.r[17].w[0] + 3348u));
    ldl(c.r[5], (c.r[17].w[0] + 3363u));
    ldr(c.r[5], (c.r[17].w[0] + 3356u));
    sdl(c.r[2], (c.r[18].w[0] + 7u));
    sdr(c.r[2], (c.r[18].w[0]));
    sdl(c.r[3], (c.r[18].w[0] + 15u));
    sdr(c.r[3], (c.r[18].w[0] + 8u));
    sdl(c.r[4], (c.r[18].w[0] + 23u));
    sdr(c.r[4], (c.r[18].w[0] + 16u));
    sdl(c.r[5], (c.r[18].w[0] + 31u));
    sdr(c.r[5], (c.r[18].w[0] + 24u));
    ldl(c.r[2], (c.r[17].w[0] + 3371u));
    ldr(c.r[2], (c.r[17].w[0] + 3364u));
    sdl(c.r[2], (c.r[18].w[0] + 39u));
    sdr(c.r[2], (c.r[18].w[0] + 32u));
    c.budget -= 20;
L_003F7EC8:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003F7EE0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F7EFCu); c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BD(c, 445u, depth + 1u); else { c.pc = 0x003F7F30u; return; } if (c.pc != 0x003F7EFCu) [[unlikely]] return; }
L_003F7EFC:
    set32(c.r[3], 0u - 1u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003F7F18; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F7F14u);  if (depth < kMaxDepth) unit_00BE(c, 6u, depth + 1u); else { c.pc = 0x003F8138u; return; } if (c.pc != 0x003F7F14u) [[unlikely]] return; }
L_003F7F14:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003F7F18:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003F7F30:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[5], 0u + 6u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    set32(c.r[17], c.r[16].w[0] + 3264u);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F7F58u); set32(c.r[18], ld32((c.r[16].w[0] + 6960u)));  if (depth < kMaxDepth) unit_00C0(c, 20u, depth + 1u); else { c.pc = 0x00400258u; return; } if (c.pc != 0x003F7F58u) [[unlikely]] return; }
L_003F7F58:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003F7F70; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F7F68u);  if (depth < kMaxDepth) unit_00BE(c, 1u, depth + 1u); else { c.pc = 0x003F8000u; return; } if (c.pc != 0x003F7F68u) [[unlikely]] return; }
L_003F7F68:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_003F7F84; } }
L_003F7F70:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F7F78u);  if (depth < kMaxDepth) unit_00BE(c, 3u, depth + 1u); else { c.pc = 0x003F8090u; return; } if (c.pc != 0x003F7F78u) [[unlikely]] return; }
L_003F7F78:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[5].sd[0] < 0; set32(c.r[2], 0u - 1u);  if (t) { goto L_003F7FE8; } }
L_003F7F84:
    c.budget -= 2;
    if (c.r[5].sd[0] <= 0) { c.r[5].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);  goto L_003F7FC4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F7F94u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BC(c, 304u, depth + 1u); else { c.pc = 0x003F2AB0u; return; } if (c.pc != 0x003F7F94u) [[unlikely]] return; }
L_003F7F94:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[18].w[0] + 136u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F7FA8u); st32((c.r[18].w[0] + 136u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00BF(c, 11u, depth + 1u); else { c.pc = 0x003FC160u; return; } if (c.pc != 0x003F7FA8u) [[unlikely]] return; }
L_003F7FA8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003F7FC0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F7FB8u);  if (depth < kMaxDepth) unit_00BF(c, 72u, depth + 1u); else { c.pc = 0x003FCA88u; return; } if (c.pc != 0x003F7FB8u) [[unlikely]] return; }
L_003F7FB8:
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[17].w[0] + 284u), c.r[2].w[0]);
    c.budget -= 2;
L_003F7FC0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    c.budget -= 1;
L_003F7FC4:
    set32(c.r[4], c.r[17].w[0] + 28u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F7FD0u); c.r[5].d[0] = c.r[5].d[0] | 65535ull;  if (depth < kMaxDepth) unit_00C0(c, 52u, depth + 1u); else { c.pc = 0x00400880u; return; } if (c.pc != 0x003F7FD0u) [[unlikely]] return; }
L_003F7FD0:
    set32(c.r[4], c.r[17].w[0] + 68u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F7FDCu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_00C0(c, 52u, depth + 1u); else { c.pc = 0x00400880u; return; } if (c.pc != 0x003F7FDCu) [[unlikely]] return; }
L_003F7FDC:
    set32(c.r[2], 0u + 192u);
    st32((c.r[18].w[0] + 120u), c.r[2].w[0]);
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
L_003F7FE8:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
}

}
